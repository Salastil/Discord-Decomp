// ===== 00bc2300  FUN_00bc2300 =====

void FUN_00bc2300(undefined8 param_1)

{
  FUN_005d3510(param_1,"SHUTDOWN");
  return;
}


// ===== 00bc2314  FUN_00bc2314 =====

void FUN_00bc2314(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00bc2320  FUN_00bc2320 =====

void FUN_00bc2320(undefined8 *param_1,ushort *param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  ushort ******ppppppuVar4;
  ulong uVar5;
  ushort ******ppppppuVar6;
  ushort *****local_78;
  ulong local_70;
  undefined8 local_68;
  ushort *****local_58;
  ulong uStack_50;
  undefined8 local_48;
  
  if (param_3 < 4) {
    FUN_00bb8cbc(param_3,4);
  }
  else {
    uVar3 = (uint)(*param_2 >> 8) | (*param_2 & 0xff00ff) << 8;
    if (uVar3 == 0xd) {
      uVar3 = (uint)(param_2[1] >> 8) | (param_2[1] & 0xff00ff) << 8;
      uVar5 = (ulong)uVar3;
      if ((uVar3 < 4) || (param_3 < uVar5)) {
        FUN_00bb8cd4(uVar5);
      }
      else {
        if (param_3 - uVar5 < 4) {
          uVar5 = uVar5 - 4;
          ppppppuVar6 = (ushort ******)0x0;
          if ((uVar5 != 0) &&
             (ppppppuVar6 = (ushort ******)(param_2 + 2),
             (ushort ******)(param_2 + 2) == (ushort ******)0x0)) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/string:1081: libc++ Hardening assertion __n == 0 || __s != nullptr failed: basic_string(const char*, n) detected nullptr\n"
                      );
          }
          if (uVar3 < 0x1b) {
            local_68 = CONCAT17((char)uVar5,(undefined7)local_68);
            ppppppuVar4 = &local_78;
          }
          else {
            uVar1 = (uVar5 & 0x7ffffffffffffff8) + 8;
            uVar2 = 0x19;
            if (uVar1 != 0x18) {
              uVar2 = uVar1;
            }
            ppppppuVar4 = (ushort ******)operator_new(uVar2);
            local_68 = uVar2 | 0x8000000000000000;
            local_78 = (ushort *****)ppppppuVar4;
            local_70 = uVar5;
          }
          if (ppppppuVar4 <= (ushort ******)((long)ppppppuVar4 + uVar5)) {
            if ((ppppppuVar6 < ppppppuVar4) ||
               ((ushort ******)((long)ppppppuVar4 + uVar5) <= ppppppuVar6)) {
              memmove(ppppppuVar4,ppppppuVar6,uVar5);
              *(undefined1 *)((long)ppppppuVar4 + uVar5) = 0;
              if ((long)local_68._7_1_ < 0) {
                uVar5 = local_70;
                ppppppuVar6 = (ushort ******)local_78;
                if (0x7ffffffffffffff6 < local_70) {
                    /* WARNING: Subroutine does not return */
                  FUN_005d45ec();
                }
              }
              else {
                uVar5 = (long)local_68._7_1_;
                ppppppuVar6 = &local_78;
              }
              ppppppuVar4 = &local_58;
              if (uVar5 < 0x17) {
                local_48 = CONCAT17((char)uVar5,(undefined7)local_48);
              }
              else {
                uVar1 = (uVar5 & 0x7ffffffffffffff8) + 8;
                uVar2 = 0x19;
                if (uVar1 != 0x18) {
                  uVar2 = uVar1;
                }
                ppppppuVar4 = (ushort ******)operator_new(uVar2);
                local_48 = uVar2 | 0x8000000000000000;
                local_58 = (ushort *****)ppppppuVar4;
                uStack_50 = uVar5;
              }
              if ((ushort ******)((long)ppppppuVar4 + uVar5) < ppppppuVar4) goto LAB_00bc2540;
              if ((ppppppuVar6 < ppppppuVar4) ||
                 ((ushort ******)((long)ppppppuVar4 + uVar5) <= ppppppuVar6)) {
                memmove(ppppppuVar4,ppppppuVar6,uVar5);
                *(undefined1 *)((long)ppppppuVar4 + uVar5) = 0;
                uVar1 = local_48;
                uVar5 = uStack_50;
                *param_1 = &PTR_FUN_00d47d70;
                uStack_50 = 0;
                local_48 = 0;
                param_1[3] = uVar1;
                param_1[2] = uVar5;
                param_1[1] = local_58;
                local_58 = (ushort *****)0x0;
                *(undefined1 *)(param_1 + 4) = 1;
                if (-1 < (long)local_68) {
                  return;
                }
                operator_delete(local_78);
                return;
              }
            }
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                      );
          }
LAB_00bc2540:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
                    );
        }
        FUN_00bb8cdc(param_3 - uVar5);
      }
    }
    else {
      FUN_00bb8cc4(uVar3,0xd);
    }
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}


// ===== 00bc2580  FUN_00bc2580 =====

void FUN_00bc2580(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d47d70;
  if (-1 < *(char *)((long)param_1 + 0x1f)) {
    return;
  }
  operator_delete((void *)param_1[1]);
  return;
}


// ===== 00bc25b0  FUN_00bc25b0 =====

void FUN_00bc25b0(long param_1,long *param_2)

{
  long lVar1;
  undefined2 *puVar2;
  void *__src;
  ulong uVar3;
  void *pvVar4;
  size_t __n;
  long lVar5;
  
  __n = (size_t)*(char *)(param_1 + 0x1f);
  if ((long)__n < 0) {
    __n = *(ulong *)(param_1 + 0x10);
  }
  lVar1 = __n + 4;
  lVar5 = param_2[1] - *param_2;
  FUN_004efbd8(param_2,lVar5 + lVar1);
  puVar2 = (undefined2 *)(*param_2 + lVar5);
  *puVar2 = 0xd00;
  *(char *)(puVar2 + 1) = (char)((ulong)lVar1 >> 8);
  *(char *)((long)puVar2 + 3) = (char)lVar1;
  if (0xfffffffffffffffb < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../net/dcsctp/packet/bounded_byte_writer.h",0x3f,"data.size() >= FixedSize",
                 &DAT_001f5fa0);
  }
  uVar3 = (ulong)*(char *)(param_1 + 0x1f);
  if ((long)uVar3 < 0) {
    pvVar4 = *(void **)(param_1 + 8);
    uVar3 = *(ulong *)(param_1 + 0x10);
  }
  else {
    pvVar4 = (void *)(param_1 + 8);
  }
  __src = (void *)0x0;
  if (uVar3 != 0) {
    __src = pvVar4;
  }
  if (uVar3 <= __n) {
    __n = uVar3;
  }
  if ((__n != 0) && (__src != (void *)0x0)) {
    memcpy((void *)(*param_2 + lVar5 + 4),__src,__n);
    return;
  }
  return;
}


// ===== 00bc26a0  FUN_00bc26a0 =====

void FUN_00bc26a0(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_00547cac(&local_38,"Protocol Violation, additional_information=",0x2b);
  lVar2 = (long)*(char *)(param_2 + 0x1f);
  if (lVar2 < 0) {
    lVar1 = *(long *)(param_2 + 8);
    lVar2 = *(long *)(param_2 + 0x10);
  }
  else {
    lVar1 = param_2 + 8;
  }
  FUN_00547cac(&local_38,lVar1,lVar2);
  param_1[1] = uStack_30;
  *param_1 = local_38;
  param_1[2] = local_28;
  return;
}


// ===== 00bc2718  FUN_00bc2718 =====

void FUN_00bc2718(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d47d70;
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    operator_delete((void *)param_1[1]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00bc2768  FUN_00bc2768 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bc2768(long *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_004efbd8(param_1,0x2c);
  auVar11 = _DAT_001f3910;
  puVar2 = (undefined8 *)*param_1;
  if (0x2b < (ulong)(param_1[1] - (long)puVar2)) {
    puVar1 = (undefined8 *)0x0;
    if ((undefined8 *)param_1[1] != puVar2) {
      puVar1 = puVar2;
    }
    *puVar1 = DAT_001f5b38;
    uVar4 = *param_2;
    auVar6._4_4_ = uVar4;
    auVar6._0_4_ = uVar4;
    auVar6._8_4_ = uVar4;
    auVar6._12_4_ = uVar4;
    auVar6 = NEON_ushl(auVar6,auVar11,4);
    *(uint *)(puVar1 + 1) = CONCAT13(auVar6[0xc],CONCAT12(auVar6[8],CONCAT11(auVar6[4],auVar6[0])));
    uVar4 = param_2[1];
    auVar7._4_4_ = uVar4;
    auVar7._0_4_ = uVar4;
    auVar7._8_4_ = uVar4;
    auVar7._12_4_ = uVar4;
    auVar6 = NEON_ushl(auVar7,auVar11,4);
    *(uint *)((long)puVar1 + 0xc) =
         CONCAT13(auVar6[0xc],CONCAT12(auVar6[8],CONCAT11(auVar6[4],auVar6[0])));
    uVar4 = param_2[2];
    auVar8._4_4_ = uVar4;
    auVar8._0_4_ = uVar4;
    auVar8._8_4_ = uVar4;
    auVar8._12_4_ = uVar4;
    auVar6 = NEON_ushl(auVar8,auVar11,4);
    *(uint *)(puVar1 + 2) = CONCAT13(auVar6[0xc],CONCAT12(auVar6[8],CONCAT11(auVar6[4],auVar6[0])));
    uVar4 = param_2[3];
    auVar9._4_4_ = uVar4;
    auVar9._0_4_ = uVar4;
    auVar9._8_4_ = uVar4;
    auVar9._12_4_ = uVar4;
    auVar6 = NEON_ushl(auVar9,auVar11,4);
    *(uint *)((long)puVar1 + 0x14) =
         CONCAT13(auVar6[0xc],CONCAT12(auVar6[8],CONCAT11(auVar6[4],auVar6[0])));
    uVar4 = param_2[4];
    auVar10._4_4_ = uVar4;
    auVar10._0_4_ = uVar4;
    auVar10._8_4_ = uVar4;
    auVar10._12_4_ = uVar4;
    auVar11 = NEON_ushl(auVar10,auVar11,4);
    *(uint *)(puVar1 + 3) =
         CONCAT13(auVar11[0xc],CONCAT12(auVar11[8],CONCAT11(auVar11[4],auVar11[0])));
    uVar5 = *(undefined8 *)(param_2 + 6);
    *(char *)((long)puVar1 + 0x1c) = (char)((ulong)uVar5 >> 0x38);
    *(char *)((long)puVar1 + 0x1d) = (char)((ulong)uVar5 >> 0x30);
    *(char *)((long)puVar1 + 0x1e) = (char)((ulong)uVar5 >> 0x28);
    *(char *)((long)puVar1 + 0x1f) = (char)((ulong)uVar5 >> 0x20);
    uVar3 = (param_2[6] & 0xff00ff00) >> 8 | (param_2[6] & 0xff00ff) << 8;
    *(uint *)(puVar1 + 4) = uVar3 >> 0x10 | uVar3 << 0x10;
    *(undefined1 *)((long)puVar1 + 0x24) = *(undefined1 *)(param_2 + 8);
    *(undefined1 *)((long)puVar1 + 0x25) = *(undefined1 *)((long)param_2 + 0x21);
    *(undefined1 *)((long)puVar1 + 0x26) = *(undefined1 *)((long)param_2 + 0x22);
    *(undefined1 *)((long)puVar1 + 0x27) = *(undefined1 *)((long)param_2 + 0x23);
    *(ushort *)(puVar1 + 5) =
         *(ushort *)(param_2 + 9) >> 8 | (ushort)((*(ushort *)(param_2 + 9) & 0xff00ff) << 8);
    *(ushort *)((long)puVar1 + 0x2a) =
         *(ushort *)((long)param_2 + 0x26) >> 8 |
         (ushort)((*(ushort *)((long)param_2 + 0x26) & 0xff00ff) << 8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../net/dcsctp/packet/bounded_byte_writer.h",0x3f,"data.size() >= FixedSize",
               &DAT_001f5fa0);
}


// ===== 00bc28d4  FUN_00bc28d4 =====

void FUN_00bc28d4(uint *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  
  if (((param_3 == 0x2c) &&
      (uVar8 = (*param_2 & 0xff00ff00) >> 8 | (*param_2 & 0xff00ff) << 8,
      (uVar8 >> 0x10 | uVar8 << 0x10) == 0x64635343)) &&
     (uVar8 = (param_2[1] & 0xff00ff00) >> 8 | (param_2[1] & 0xff00ff) << 8,
     (uVar8 >> 0x10 | uVar8 << 0x10) == 0x54503030)) {
    uVar1 = 0;
    if (*(char *)((long)param_2 + 0x27) != '\0') {
      uVar1 = 0x1000000;
    }
    uVar2 = 0;
    if (*(char *)((long)param_2 + 0x26) != '\0') {
      uVar2 = 0x10000;
    }
    uVar3 = 0;
    if (*(char *)((long)param_2 + 0x25) != '\0') {
      uVar3 = 0x100;
    }
    uVar8 = param_2[10];
    if ((char)param_2[9] != '\0') {
      uVar3 = uVar3 + 1;
    }
    uVar4 = param_2[4];
    uVar9 = (param_2[2] & 0xff00ff00) >> 8 | (param_2[2] & 0xff00ff) << 8;
    bVar5 = *(byte *)((long)param_2 + 0x29);
    uVar10 = (param_2[3] & 0xff00ff00) >> 8 | (param_2[3] & 0xff00ff) << 8;
    uVar11 = (param_2[5] & 0xff00ff00) >> 8 | (param_2[5] & 0xff00ff) << 8;
    bVar6 = *(byte *)((long)param_2 + 0x2a);
    *param_1 = uVar9 >> 0x10 | uVar9 << 0x10;
    param_1[1] = uVar10 >> 0x10 | uVar10 << 0x10;
    bVar7 = *(byte *)((long)param_2 + 0x2b);
    uVar12 = *(ulong *)(param_2 + 7);
    uVar9 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
    uVar4 = param_2[6];
    param_1[2] = uVar9 >> 0x10 | uVar9 << 0x10;
    param_1[3] = uVar11 >> 0x10 | uVar11 << 0x10;
    uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
    uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
    uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
    param_1[4] = uVar4 >> 0x10 | uVar4 << 0x10;
    *(ulong *)(param_1 + 6) = uVar12 >> 0x20 | uVar12 << 0x20;
    *(ulong *)(param_1 + 8) =
         uVar3 | uVar2 | uVar1 | (ulong)(byte)uVar8 << 0x28 | (ulong)bVar5 << 0x20 |
         (ulong)bVar6 << 0x38 | (ulong)bVar7 << 0x30;
    *(undefined1 *)(param_1 + 10) = 1;
    return;
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  return;
}


// ===== 00bc29c4  FUN_00bc29c4 =====

void FUN_00bc29c4(undefined8 *param_1,ushort *param_2,ulong param_3)

{
  ushort *puVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 uVar8;
  ushort *puVar9;
  ushort *puVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  if (param_3 < 4) {
    FUN_00bb8cbc(param_3,4);
  }
  else {
    uVar4 = (uint)(*param_2 >> 8) | (*param_2 & 0xff00ff) << 8;
    if (uVar4 == 7) {
      uVar4 = (uint)(param_2[1] >> 8) | (param_2[1] & 0xff00ff) << 8;
      uVar14 = (ulong)uVar4;
      if ((uVar4 < 4) || (param_3 < uVar14)) {
        FUN_00bb8cd4(uVar14);
      }
      else {
        if (param_3 - uVar14 < 4) {
          uVar5 = uVar14 - 4;
          puVar1 = param_2 + 2;
          if (uVar5 == 0) {
            puVar6 = (undefined1 *)0x0;
            lVar13 = 0;
            puVar7 = (undefined1 *)0x0;
          }
          else {
            if ((long)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_005d34c0();
            }
            puVar6 = (undefined1 *)operator_new(uVar5);
            uVar14 = uVar14 - 5;
            puVar7 = puVar6 + uVar5;
            uVar3 = uVar14;
            if ((ulong)-(long)puVar6 < uVar14) {
              uVar3 = -(long)puVar6;
            }
            uVar2 = uVar3 + 1;
            puVar9 = puVar1;
            puVar11 = puVar6;
            if (0x20 < uVar2) {
              if ((ulong)-(long)puVar6 < uVar14) {
                uVar14 = -(long)puVar6;
              }
              if (((puVar6 <= puVar6 + uVar14) && (puVar1 <= (ushort *)((long)puVar1 + uVar14))) &&
                 (0x1f < (ulong)((long)puVar6 - (long)puVar1))) {
                uVar14 = 0x20;
                if ((uVar2 & 0x1f) != 0) {
                  uVar14 = uVar2 & 0x1f;
                }
                lVar13 = ~uVar3 + uVar14;
                puVar12 = (undefined8 *)(puVar6 + 0x10);
                puVar9 = (ushort *)((long)puVar1 + (uVar2 - uVar14));
                puVar11 = puVar6 + (uVar2 - uVar14);
                param_2 = param_2 + 10;
                do {
                  puVar10 = param_2 + -4;
                  uVar15 = *(undefined8 *)(param_2 + -8);
                  uVar17 = *(undefined8 *)(param_2 + 4);
                  uVar16 = *(undefined8 *)param_2;
                  lVar13 = lVar13 + 0x20;
                  param_2 = param_2 + 0x10;
                  puVar12[-1] = *(undefined8 *)puVar10;
                  puVar12[-2] = uVar15;
                  puVar12[1] = uVar17;
                  *puVar12 = uVar16;
                  puVar12 = puVar12 + 4;
                } while (lVar13 != 0);
              }
            }
            lVar13 = (long)puVar6 - (long)puVar11;
            do {
              if (puVar11 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s",
                           "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                          );
              }
              puVar10 = (ushort *)((long)puVar9 + 1);
              lVar13 = lVar13 + -1;
              *puVar11 = (char)*puVar9;
              puVar9 = puVar10;
              puVar11 = puVar11 + 1;
            } while (puVar10 != (ushort *)((long)puVar1 + uVar5));
            lVar13 = (long)puVar6 - lVar13;
          }
          param_1[2] = lVar13;
          param_1[3] = puVar7;
          uVar8 = 1;
          *param_1 = &PTR_FUN_00d47da0;
          param_1[1] = puVar6;
          goto LAB_00bc2a50;
        }
        FUN_00bb8cdc(param_3 - uVar14);
      }
    }
    else {
      FUN_00bb8cc4(uVar4,7);
    }
  }
  uVar8 = 0;
  *(undefined1 *)param_1 = 0;
LAB_00bc2a50:
  *(undefined1 *)(param_1 + 4) = uVar8;
  return;
}


// ===== 00bc2b94  FUN_00bc2b94 =====

void FUN_00bc2b94(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[1];
  *param_1 = &PTR_FUN_00d47da0;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if ((ulong)(param_1[2] - (long)pvVar1) <= param_1[2] - 1) {
    param_1[2] = pvVar1;
    operator_delete(pvVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00bc2bf8  FUN_00bc2bf8 =====

void FUN_00bc2bf8(long param_1,long *param_2)

{
  long lVar1;
  undefined2 *puVar2;
  void *__src;
  ulong uVar3;
  long lVar4;
  size_t __n;
  
  __n = *(long *)(param_1 + 0x10) - *(long *)(param_1 + 8);
  lVar4 = param_2[1] - *param_2;
  lVar1 = __n + 4;
  FUN_004efbd8(param_2,lVar4 + lVar1);
  puVar2 = (undefined2 *)(*param_2 + lVar4);
  *puVar2 = 0x700;
  *(char *)(puVar2 + 1) = (char)((ulong)lVar1 >> 8);
  *(char *)((long)puVar2 + 3) = (char)lVar1;
  if (0xfffffffffffffffb < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../net/dcsctp/packet/bounded_byte_writer.h",0x3f,"data.size() >= FixedSize",
                 &DAT_001f5fa0);
  }
  __src = *(void **)(param_1 + 8);
  uVar3 = (long)*(void **)(param_1 + 0x10) - (long)__src;
  if (uVar3 <= __n) {
    __n = uVar3;
  }
  if (((__src != (void *)0x0) && (*(void **)(param_1 + 0x10) != __src)) && (__n != 0)) {
    memcpy((void *)(*param_2 + lVar4 + 4),__src,__n);
    return;
  }
  return;
}


// ===== 00bc2cd8  FUN_00bc2cd8 =====

void FUN_00bc2cd8(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 **local_38;
  ulong uStack_30;
  ulong local_28;
  
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  FUN_00547cac(&local_50,"State Cookie parameter (cookie_length=",0x26);
  local_38 = (undefined8 ***)0x0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_006247b4(&local_38,0x16,*(long *)(param_2 + 0x10) - *(long *)(param_2 + 8));
  uVar1 = uStack_30;
  pppuVar2 = (undefined8 ***)local_38;
  if (-1 < (long)local_28) {
    uVar1 = local_28 >> 0x38;
    pppuVar2 = &local_38;
  }
  FUN_00547cac(&local_50,pppuVar2,uVar1);
  if ((long)local_28 < 0) {
    operator_delete(local_38);
  }
  FUN_00547cac(&local_50,&DAT_001ca519,1);
  param_1[1] = uStack_48;
  *param_1 = local_50;
  param_1[2] = local_40;
  return;
}


// ===== 00bc2da0  FUN_00bc2da0 =====

void FUN_00bc2da0(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[1];
  *param_1 = &PTR_FUN_00d47da0;
  if (pvVar1 != (void *)0x0) {
    if (param_1[2] - 1 < (ulong)(param_1[2] - (long)pvVar1)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    param_1[2] = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 00bc2e18  FUN_00bc2e18 =====

void FUN_00bc2e18(undefined8 *param_1,char *param_2,ulong param_3)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  byte bVar10;
  char cVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  uint uVar18;
  ulong uVar19;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *local_68;
  
  if (param_3 < 0x14) {
    FUN_00bb8cbc(param_3,0x14);
  }
  else if (*param_2 == '\x02') {
    uVar18 = (uint)(*(ushort *)(param_2 + 2) >> 8) | (*(ushort *)(param_2 + 2) & 0xff00ff) << 8;
    uVar19 = (ulong)uVar18;
    if ((uVar18 < 0x14) || (param_3 < uVar19)) {
      FUN_00bb8cd4(uVar19);
    }
    else if (param_3 - uVar19 < 4) {
      bVar2 = param_2[6];
      bVar3 = param_2[5];
      bVar4 = param_2[4];
      bVar5 = param_2[7];
      bVar6 = param_2[8];
      cVar7 = param_2[0xc];
      cVar8 = param_2[0xd];
      cVar9 = param_2[0xe];
      bVar10 = param_2[9];
      cVar11 = param_2[0xf];
      bVar12 = param_2[0x10];
      bVar13 = param_2[0x11];
      bVar14 = param_2[0x12];
      bVar15 = param_2[10];
      bVar16 = param_2[0x13];
      bVar17 = param_2[0xb];
      pcVar1 = (char *)0x0;
      if (uVar19 - 0x14 != 0) {
        pcVar1 = param_2 + 0x14;
      }
      puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
      local_80 = &DAT_aaaaaaaaaaaaaaaa;
      local_68 = &DAT_aaaaaaaaaaaaaaaa;
      local_70 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_00bba5d4(&local_80,pcVar1,uVar19 - 0x14);
      if (((ulong)local_68 & 1) != 0) {
        *(ushort *)(param_1 + 2) = CONCAT11(cVar7,cVar8);
        *param_1 = &PTR_FUN_00d47dd0;
        param_1[4] = puStack_78;
        param_1[3] = local_80;
        *(uint *)((long)param_1 + 0x14) =
             (uint)bVar12 << 0x18 | (uint)bVar13 << 0x10 | (uint)bVar14 << 8 | (uint)bVar16;
        *(uint *)(param_1 + 1) =
             (uint)bVar4 << 0x18 | (uint)bVar3 << 0x10 | (uint)bVar2 << 8 | (uint)bVar5;
        *(uint *)((long)param_1 + 0xc) =
             (uint)bVar6 << 0x18 | (uint)bVar10 << 0x10 | (uint)bVar15 << 8 | (uint)bVar17;
        *(ushort *)((long)param_1 + 0x12) = CONCAT11(cVar9,cVar11);
        param_1[5] = local_70;
        *(undefined1 *)(param_1 + 6) = 1;
        return;
      }
    }
    else {
      FUN_00bb8cdc(param_3 - uVar19);
    }
  }
  else {
    FUN_00bb8cc4(*param_2,2);
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  return;
}


// ===== 00bc2fdc  FUN_00bc2fdc =====

void FUN_00bc2fdc(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[3];
  *param_1 = &PTR_FUN_00d47dd0;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if ((ulong)(param_1[4] - (long)pvVar1) <= param_1[4] - 1) {
    param_1[4] = pvVar1;
    operator_delete(pvVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00bc3040  FUN_00bc3040 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bc3040(long param_1,long *param_2)

{
  long lVar1;
  undefined1 *puVar2;
  void *__src;
  void *pvVar3;
  undefined4 uVar4;
  ulong __n;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  __src = *(void **)(param_1 + 0x18);
  pvVar3 = *(void **)(param_1 + 0x20);
  __n = (long)pvVar3 - (long)__src;
  lVar5 = param_2[1] - *param_2;
  lVar1 = __n + 0x14;
  FUN_004efbd8(param_2,lVar5 + lVar1);
  puVar2 = (undefined1 *)(*param_2 + lVar5);
  *puVar2 = 2;
  puVar2[2] = (char)((ulong)lVar1 >> 8);
  puVar2[3] = (char)lVar1;
  auVar9 = _DAT_001f3910;
  if (0xffffffffffffffeb < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../net/dcsctp/packet/bounded_byte_writer.h",0x3f,"data.size() >= FixedSize",
                 &DAT_001f5fa0);
  }
  uVar4 = *(undefined4 *)(param_1 + 8);
  auVar6._4_4_ = uVar4;
  auVar6._0_4_ = uVar4;
  auVar6._8_4_ = uVar4;
  auVar6._12_4_ = uVar4;
  auVar6 = NEON_ushl(auVar6,_DAT_001f3910,4);
  lVar5 = *param_2 + lVar5;
  *(uint *)(lVar5 + 4) = CONCAT13(auVar6[0xc],CONCAT12(auVar6[8],CONCAT11(auVar6[4],auVar6[0])));
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  auVar7._4_4_ = uVar4;
  auVar7._0_4_ = uVar4;
  auVar7._8_4_ = uVar4;
  auVar7._12_4_ = uVar4;
  auVar6 = NEON_ushl(auVar7,auVar9,4);
  *(uint *)(lVar5 + 8) = CONCAT13(auVar6[0xc],CONCAT12(auVar6[8],CONCAT11(auVar6[4],auVar6[0])));
  *(ushort *)(lVar5 + 0xc) =
       *(ushort *)(param_1 + 0x10) >> 8 | (ushort)((*(ushort *)(param_1 + 0x10) & 0xff00ff) << 8);
  *(ushort *)(lVar5 + 0xe) =
       *(ushort *)(param_1 + 0x12) >> 8 | (ushort)((*(ushort *)(param_1 + 0x12) & 0xff00ff) << 8);
  uVar4 = *(undefined4 *)(param_1 + 0x14);
  auVar8._4_4_ = uVar4;
  auVar8._0_4_ = uVar4;
  auVar8._8_4_ = uVar4;
  auVar8._12_4_ = uVar4;
  auVar9 = NEON_ushl(auVar8,auVar9,4);
  *(uint *)(lVar5 + 0x10) = CONCAT13(auVar9[0xc],CONCAT12(auVar9[8],CONCAT11(auVar9[4],auVar9[0])));
  if ((__src != (void *)0x0) && (pvVar3 != __src)) {
    memcpy((void *)(lVar5 + 0x14),__src,__n);
    return;
  }
  return;
}


// ===== 00bc3190  FUN_00bc3190 =====

void FUN_00bc3190(long param_1)

{
  FUN_008490e4("INIT_ACK, initiate_tag=0x%0x, initial_tsn=%u",*(undefined4 *)(param_1 + 8),
               *(undefined4 *)(param_1 + 0x14));
  return;
}


// ===== 00bc31a8  FUN_00bc31a8 =====

void FUN_00bc31a8(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[3];
  *param_1 = &PTR_FUN_00d47dd0;
  if (pvVar1 != (void *)0x0) {
    if (param_1[4] - 1 < (ulong)(param_1[4] - (long)pvVar1)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    param_1[4] = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 00bc3220  FUN_00bc3220 =====

undefined4 * FUN_00bc3220(long *param_1,undefined4 *param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  long lVar3;
  ushort uVar4;
  ushort uVar5;
  undefined *puVar6;
  undefined8 ******ppppppuVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  long *plVar11;
  void *pvVar12;
  void *pvVar13;
  ushort *puVar14;
  size_t __n;
  ushort *puVar15;
  ushort *puVar16;
  ulong uVar17;
  undefined8 *******pppppppuVar18;
  undefined8 *******pppppppuVar19;
  long *plVar20;
  undefined8 ******ppppppuVar21;
  ulong uVar22;
  uint uVar23;
  long lVar24;
  ulong uVar25;
  long lVar26;
  undefined4 *puVar27;
  void *__dest;
  undefined1 auVar28 [16];
  undefined8 ******local_b8;
  undefined8 ******local_b0;
  long local_a8;
  undefined8 ******local_a0;
  undefined8 ******local_98;
  undefined8 ******local_90;
  undefined8 ******local_88;
  undefined8 ******local_80;
  long local_78;
  undefined4 *local_70;
  undefined4 *puStack_68;
  undefined4 *local_60;
  undefined8 ******local_48;
  
  puVar6 = PTR_DAT_00d52e08;
  puVar14 = *(ushort **)(param_2 + 4);
  puVar2 = *(ushort **)(param_2 + 6);
  if (puVar2 != puVar14) {
    puVar15 = puVar14;
    uVar23 = 0;
    do {
      puVar1 = puVar15 + 1;
      puVar16 = puVar15 + 2;
      if (((uint)*puVar1 < (uint)*puVar15) || ((uint)*puVar15 <= uVar23 + 1)) {
        uVar17 = (long)puVar2 - (long)puVar14;
        puStack_68 = (undefined4 *)&DAT_aaaaaaaaaaaaaaaa;
        local_70 = (undefined4 *)&DAT_aaaaaaaaaaaaaaaa;
        if ((long)uVar17 < 0) goto LAB_00bc3798;
        local_70 = (undefined4 *)operator_new(uVar17);
        local_60 = (undefined4 *)((long)local_70 + uVar17);
        puVar27 = local_70;
        puStack_68 = local_70;
        goto LAB_00bc3334;
      }
      puVar15 = puVar16;
      uVar23 = (uint)*puVar1;
    } while (puVar16 != puVar2);
  }
  plVar11 = (long *)(param_2 + 0xc);
  lVar24 = *plVar11;
  lVar26 = *(long *)(param_2 + 2);
  *(long *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  param_1[2] = (long)puVar14;
  param_1[3] = (long)puVar2;
  *param_1 = (long)(puVar6 + 0x10);
  param_1[1] = lVar26;
  lVar26 = *(long *)(param_2 + 8);
  lVar3 = *(long *)(param_2 + 10);
  *(undefined8 *)(param_2 + 8) = 0;
  plVar20 = param_1 + 6;
  *plVar20 = lVar24;
  param_1[4] = lVar26;
  param_1[5] = lVar3;
  lVar26 = *(long *)(param_2 + 0xe);
  param_1[7] = lVar26;
  if (lVar26 != 0) {
    *(long **)(lVar24 + 0x10) = plVar20;
    *(long **)(param_2 + 10) = plVar11;
    *plVar11 = 0;
    *(undefined8 *)(param_2 + 0xe) = 0;
    return param_2;
  }
  param_1[5] = (long)plVar20;
  return param_2;
LAB_00bc3334:
  do {
    puVar10 = puVar27;
    if (*puVar14 < puVar14[1]) {
      if (puVar27 < local_60) {
        if (puVar27 == (undefined4 *)0x0) goto LAB_00bc3680;
        puVar10 = puVar27 + 1;
        *puVar27 = *(undefined4 *)puVar14;
        puStack_68 = puVar10;
      }
      else {
        puVar10 = (undefined4 *)FUN_00bc379c(&local_70,puVar14);
        puStack_68 = puVar10;
      }
    }
    puVar9 = local_60;
    puVar8 = local_70;
    puVar14 = puVar14 + 2;
    puVar27 = puVar10;
  } while (puVar14 != puVar2);
  uVar17 = (long)puVar10 - (long)local_70 >> 2;
  if (uVar17 < 2) {
    lVar26 = *(long *)(param_2 + 2);
    puStack_68 = (undefined4 *)0x0;
    local_60 = (undefined4 *)0x0;
    local_70 = (undefined4 *)0x0;
    local_80 = (undefined8 *******)0x0;
    local_78 = 0;
    local_88 = &local_80;
    if (*(long *)(param_2 + 0xe) != 0) {
      local_80 = (undefined8 ******)FUN_00bbd08c(&local_88,*(undefined8 *)(param_2 + 0xc),&local_88)
      ;
      ((undefined8 *******)local_80)[2] = &local_80;
      pppppppuVar18 = (undefined8 *******)local_80;
      do {
        local_88 = pppppppuVar18;
        pppppppuVar18 = (undefined8 *******)*local_88;
      } while (pppppppuVar18 != (undefined8 *******)0x0);
      local_78 = *(long *)(param_2 + 0xe);
    }
    param_1[4] = (long)puVar9;
    param_1[5] = (long)local_88;
    param_1[1] = lVar26;
    param_1[2] = (long)puVar8;
    param_1[3] = (long)puVar10;
    *param_1 = (long)&PTR_FUN_00d47aa0;
    ppppppuVar21 = (undefined8 ******)(param_1 + 6);
    *ppppppuVar21 = local_80;
    param_1[7] = local_78;
    if (local_78 == 0) {
      param_1[5] = (long)ppppppuVar21;
    }
    else {
      local_80[2] = ppppppuVar21;
      local_80 = (undefined8 *******)0x0;
      local_78 = 0;
      local_88 = &local_80;
    }
    local_a0 = &local_88;
    FUN_00ba1004(&local_a0,local_80);
  }
  else {
    if (local_70 == puVar10) {
LAB_00bc3770:
      local_90 = (undefined8 ******)0x0;
      local_98 = (undefined8 ******)0x0;
      local_a0 = (undefined8 ******)0x0;
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                );
    }
    FUN_00bc3890(local_70,puVar10,LZCOUNT(uVar17) << 1 ^ 0x7e,1);
    puVar27 = local_70;
    local_a0 = (undefined8 *******)0x0;
    local_98 = (undefined8 *******)0x0;
    local_90 = (undefined8 *******)0x0;
    uVar17 = (long)puStack_68 - (long)local_70;
    if (uVar17 == 0) goto LAB_00bc3770;
    if ((long)uVar17 < 0) {
LAB_00bc3798:
      auVar28 = FUN_00bbbfe4();
      plVar11 = auVar28._0_8_;
      puVar27 = (undefined4 *)(plVar11[1] - *plVar11);
      uVar17 = ((long)puVar27 >> 2) + 1;
      if (uVar17 >> 0x3e != 0) {
        FUN_00bbbfe4();
LAB_00bc388c:
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      uVar22 = plVar11[2] - *plVar11;
      uVar25 = (long)uVar22 >> 1;
      if (uVar25 <= uVar17) {
        uVar25 = uVar17;
      }
      if (0x7ffffffffffffffb < uVar22) {
        uVar25 = 0x3fffffffffffffff;
      }
      if (uVar25 == 0) {
        pvVar12 = (void *)0x0;
      }
      else {
        if (uVar25 >> 0x3e != 0) goto LAB_00bc388c;
        pvVar12 = operator_new(uVar25 << 2);
        puVar27 = (undefined4 *)((long)pvVar12 + (long)puVar27);
      }
      if (puVar27 != (undefined4 *)0x0) {
        *puVar27 = *auVar28._8_8_;
        __n = plVar11[1] - *plVar11;
        __dest = (void *)((long)puVar27 - __n);
        memcpy(__dest,(void *)*plVar11,__n);
        pvVar13 = (void *)*plVar11;
        *plVar11 = (long)__dest;
        plVar11[1] = (long)(puVar27 + 1);
        plVar11[2] = (long)((long)pvVar12 + uVar25 * 4);
        if (pvVar13 != (void *)0x0) {
          operator_delete(pvVar13);
        }
        return puVar27 + 1;
      }
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    local_a0 = (undefined8 ******)operator_new(uVar17);
    local_90 = (undefined8 ******)((long)local_a0 + uVar17);
    local_98 = local_a0;
    if (local_a0 < local_90) {
      if ((undefined8 *******)local_a0 == (undefined8 *******)0x0) {
LAB_00bc3680:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      local_98 = (undefined8 ******)((long)local_a0 + 4);
      *(undefined4 *)local_a0 = *puVar27;
    }
    else {
      local_98 = (undefined8 ******)FUN_00bc379c(&local_a0,puVar27);
    }
    pppppppuVar18 = (undefined8 *******)local_98;
    if (4 < (ulong)((long)puStack_68 - (long)local_70)) {
      lVar26 = 0;
      uVar17 = 1;
      do {
        if (local_a0 == local_98) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__vector/vector.h:439: libc++ Hardening assertion !empty() failed: back() called on an empty vector\n"
                    );
        }
        uVar5 = *(ushort *)((long)local_98 + -2);
        puVar14 = (ushort *)((long)local_70 + lVar26 + 4);
        if (uVar5 + 1 < (uint)*puVar14) {
          if (local_98 < local_90) {
            if ((undefined8 *******)local_98 == (undefined8 *******)0x0) goto LAB_00bc3680;
            *(undefined4 *)local_98 = *(undefined4 *)puVar14;
            local_98 = (undefined8 *******)((long)local_98 + 4);
          }
          else {
            local_98 = (undefined8 ******)FUN_00bc379c(&local_a0);
          }
        }
        else {
          uVar4 = *(ushort *)((long)local_70 + lVar26 + 6);
          if ((uint)uVar5 <= (uint)uVar4) {
            uVar5 = uVar4;
          }
          *(ushort *)((long)local_98 + -2) = uVar5;
        }
        uVar17 = uVar17 + 1;
        lVar26 = lVar26 + 4;
        pppppppuVar18 = (undefined8 *******)local_98;
      } while (uVar17 < (ulong)((long)puStack_68 - (long)local_70 >> 2));
    }
    ppppppuVar7 = local_90;
    ppppppuVar21 = local_a0;
    lVar26 = *(long *)(param_2 + 2);
    local_98 = (undefined8 *******)0x0;
    local_90 = (undefined8 *******)0x0;
    local_a8 = 0;
    local_a0 = (undefined8 *******)0x0;
    local_b0 = (undefined8 *******)0x0;
    local_b8 = &local_b0;
    if (*(long *)(param_2 + 0xe) != 0) {
      local_b0 = (undefined8 ******)FUN_00bbd08c(&local_b8,*(undefined8 *)(param_2 + 0xc),&local_b8)
      ;
      ((undefined8 *******)local_b0)[2] = &local_b0;
      pppppppuVar19 = (undefined8 *******)local_b0;
      do {
        local_b8 = pppppppuVar19;
        pppppppuVar19 = (undefined8 *******)*local_b8;
      } while (pppppppuVar19 != (undefined8 *******)0x0);
      local_a8 = *(long *)(param_2 + 0xe);
    }
    param_1[4] = (long)ppppppuVar7;
    param_1[5] = (long)local_b8;
    param_1[1] = lVar26;
    param_1[2] = (long)ppppppuVar21;
    param_1[3] = (long)pppppppuVar18;
    *param_1 = (long)&PTR_FUN_00d47aa0;
    ppppppuVar21 = (undefined8 ******)(param_1 + 6);
    *ppppppuVar21 = local_b0;
    param_1[7] = local_a8;
    if (local_a8 == 0) {
      param_1[5] = (long)ppppppuVar21;
    }
    else {
      local_b0[2] = ppppppuVar21;
      local_b0 = (undefined8 *******)0x0;
      local_a8 = 0;
      local_b8 = &local_b0;
    }
    local_48 = &local_b8;
    FUN_00ba1004(&local_48,local_b0);
    if ((undefined8 *******)local_a0 != (undefined8 *******)0x0) {
      uVar25 = (ulong)((long)local_98 + (-4 - ((long)local_98 << 0x3e))) >> 2;
      uVar17 = (ulong)(((long)local_a0 - (long)local_98 << 0x3e) - ((long)local_a0 - (long)local_98)
                      ) >> 2;
      if (uVar25 <= uVar17) {
        uVar17 = uVar25;
      }
      pppppppuVar18 = (undefined8 *******)local_98;
      if ((1 < uVar17) && ((((int)local_a0 - (int)local_98 | -(int)local_98) & 3U) == 0)) {
        uVar17 = uVar17 & 0x3ffffffffffffffe;
        pppppppuVar18 = (undefined8 *******)((long)local_98 + uVar17 * -4);
        do {
          uVar17 = uVar17 - 2;
        } while (uVar17 != 0);
      }
      do {
        if (pppppppuVar18 == (undefined8 *******)local_a0) {
          local_98 = local_a0;
          operator_delete(local_a0);
          goto LAB_00bc36a4;
        }
        pppppppuVar18 = (undefined8 *******)((long)pppppppuVar18 + -4);
      } while (pppppppuVar18 != (undefined8 *******)0x0);
      goto LAB_00bc3710;
    }
  }
LAB_00bc36a4:
  if (local_70 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  uVar25 = (ulong)((long)puStack_68 + (-4 - ((long)puStack_68 << 0x3e))) >> 2;
  uVar17 = (ulong)(((long)local_70 - (long)puStack_68 << 0x3e) - ((long)local_70 - (long)puStack_68)
                  ) >> 2;
  if (uVar25 <= uVar17) {
    uVar17 = uVar25;
  }
  puVar27 = puStack_68;
  if ((1 < uVar17) && ((((int)local_70 - (int)puStack_68 | -(int)puStack_68) & 3U) == 0)) {
    uVar17 = uVar17 & 0x3ffffffffffffffe;
    puVar27 = puStack_68 + -uVar17;
    do {
      uVar17 = uVar17 - 2;
    } while (uVar17 != 0);
  }
  do {
    if (puVar27 == local_70) {
      puStack_68 = local_70;
      operator_delete(local_70);
      return local_70;
    }
    puVar27 = puVar27 + -1;
  } while (puVar27 != (undefined4 *)0x0);
LAB_00bc3710:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00bc379c  FUN_00bc379c =====

undefined4 * FUN_00bc379c(long *param_1,undefined4 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  size_t __n;
  ulong uVar4;
  ulong uVar5;
  undefined4 *puVar6;
  void *__dest;
  
  puVar6 = (undefined4 *)(param_1[1] - *param_1);
  uVar1 = ((long)puVar6 >> 2) + 1;
  if (uVar1 >> 0x3e != 0) {
    FUN_00bbbfe4();
LAB_00bc388c:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  uVar4 = param_1[2] - *param_1;
  uVar5 = (long)uVar4 >> 1;
  if (uVar5 <= uVar1) {
    uVar5 = uVar1;
  }
  if (0x7ffffffffffffffb < uVar4) {
    uVar5 = 0x3fffffffffffffff;
  }
  if (uVar5 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (uVar5 >> 0x3e != 0) goto LAB_00bc388c;
    pvVar2 = operator_new(uVar5 << 2);
    puVar6 = (undefined4 *)((long)pvVar2 + (long)puVar6);
  }
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = *param_2;
    __n = param_1[1] - *param_1;
    __dest = (void *)((long)puVar6 - __n);
    memcpy(__dest,(void *)*param_1,__n);
    pvVar3 = (void *)*param_1;
    *param_1 = (long)__dest;
    param_1[1] = (long)(puVar6 + 1);
    param_1[2] = (long)((long)pvVar2 + uVar5 * 4);
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    return puVar6 + 1;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00bc3890  FUN_00bc3890 =====

void FUN_00bc3890(uint *param_1,uint *param_2,long param_3,uint param_4)

{
  bool bVar1;
  undefined4 *puVar2;
  ulong uVar3;
  uint uVar4;
  ushort uVar5;
  ushort uVar6;
  undefined2 uVar7;
  ushort uVar8;
  ulong uVar9;
  ulong uVar10;
  uint *puVar11;
  ulong uVar12;
  uint *puVar13;
  uint uVar14;
  long lVar15;
  uint *puVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  uint uVar20;
  uint *puVar21;
  ulong uVar22;
  ulong uVar23;
  uint *puVar24;
  uint *puVar25;
  
LAB_00bc38c0:
  do {
    puVar16 = param_1;
    uVar12 = (long)param_2 - (long)puVar16 >> 2;
    if (uVar12 - 2 == 0 || (long)uVar12 < 2) {
      if (uVar12 < 2) {
        return;
      }
      if (uVar12 == 2) {
        uVar20 = *puVar16;
        if ((ushort)uVar20 <= (ushort)param_2[-1]) {
          return;
        }
        uVar7 = *(undefined2 *)((long)puVar16 + 2);
        *puVar16 = param_2[-1];
        *(ushort *)(param_2 + -1) = (ushort)uVar20;
        *(undefined2 *)((long)param_2 + -2) = uVar7;
        return;
      }
    }
    else {
      if (uVar12 == 3) {
        uVar8 = (ushort)puVar16[1];
        uVar5 = (ushort)*puVar16;
        if (uVar8 < uVar5) {
          uVar7 = *(undefined2 *)((long)puVar16 + 2);
          if ((ushort)param_2[-1] < uVar8) {
            *puVar16 = param_2[-1];
          }
          else {
            uVar20 = puVar16[1];
            *(ushort *)(puVar16 + 1) = uVar5;
            *(undefined2 *)((long)puVar16 + 6) = uVar7;
            *puVar16 = uVar20;
            if (uVar5 <= (ushort)param_2[-1]) {
              return;
            }
            puVar16[1] = param_2[-1];
          }
          *(ushort *)(param_2 + -1) = uVar5;
          *(undefined2 *)((long)param_2 + -2) = uVar7;
          return;
        }
        if (uVar8 <= (ushort)param_2[-1]) {
          return;
        }
        uVar7 = *(undefined2 *)((long)puVar16 + 6);
        puVar16[1] = param_2[-1];
        *(ushort *)(param_2 + -1) = uVar8;
        *(undefined2 *)((long)param_2 + -2) = uVar7;
        if ((ushort)*puVar16 <= (ushort)puVar16[1]) {
          return;
        }
        uVar20 = puVar16[1];
        *(ushort *)(puVar16 + 1) = (ushort)*puVar16;
        *puVar16 = uVar20;
        *(undefined2 *)((long)puVar16 + 6) = *(undefined2 *)((long)puVar16 + 2);
        return;
      }
      if (uVar12 == 4) {
        uVar8 = (ushort)puVar16[1];
        uVar5 = (ushort)*puVar16;
        uVar14 = (uint)uVar8;
        uVar20 = (uint)(ushort)puVar16[2];
        if ((uint)uVar8 < (uint)uVar5) {
          if (uVar20 < uVar14) {
            uVar20 = puVar16[2];
            *(ushort *)(puVar16 + 2) = uVar5;
            *puVar16 = uVar20;
          }
          else {
            uVar14 = puVar16[1];
            *(ushort *)(puVar16 + 1) = uVar5;
            *(undefined2 *)((long)puVar16 + 6) = *(undefined2 *)((long)puVar16 + 2);
            *puVar16 = uVar14;
            if (uVar5 <= uVar20) goto LAB_00bc4348;
            uVar20 = puVar16[2];
            *(ushort *)(puVar16 + 2) = uVar5;
            puVar16[1] = uVar20;
          }
          *(undefined2 *)((long)puVar16 + 10) = *(undefined2 *)((long)puVar16 + 2);
          uVar20 = (uint)uVar5;
        }
        else if (uVar20 < uVar8) {
          uVar4 = puVar16[2];
          *(ushort *)(puVar16 + 2) = uVar8;
          puVar16[1] = uVar4;
          *(undefined2 *)((long)puVar16 + 10) = *(undefined2 *)((long)puVar16 + 6);
          uVar20 = uVar14;
          if ((uVar4 & 0xffff) <= (uint)uVar5 && (uint)uVar5 != (uVar4 & 0xffff)) {
            *puVar16 = uVar4;
            *(ushort *)(puVar16 + 1) = uVar5;
            *(undefined2 *)((long)puVar16 + 6) = *(undefined2 *)((long)puVar16 + 2);
          }
        }
LAB_00bc4348:
        if (uVar20 <= (ushort)param_2[-1]) {
          return;
        }
        uVar7 = *(undefined2 *)((long)puVar16 + 10);
        puVar16[2] = param_2[-1];
        *(short *)(param_2 + -1) = (short)uVar20;
        *(undefined2 *)((long)param_2 + -2) = uVar7;
        if ((ushort)puVar16[1] <= (ushort)puVar16[2]) {
          return;
        }
        uVar20 = puVar16[2];
        uVar14 = *puVar16;
        *(ushort *)(puVar16 + 2) = (ushort)puVar16[1];
        puVar16[1] = uVar20;
        *(undefined2 *)((long)puVar16 + 10) = *(undefined2 *)((long)puVar16 + 6);
        if ((uint)(ushort)uVar14 <= (uVar20 & 0xffff)) {
          return;
        }
        *puVar16 = uVar20;
        *(ushort *)(puVar16 + 1) = (ushort)uVar14;
        *(undefined2 *)((long)puVar16 + 6) = *(undefined2 *)((long)puVar16 + 2);
        return;
      }
      if (uVar12 == 5) {
        FUN_00bc4428(puVar16,puVar16 + 1,puVar16 + 2,puVar16 + 3,param_2 + -1);
        return;
      }
    }
    if ((long)uVar12 < 0x18) {
      if ((param_4 & 1) == 0) {
        if (puVar16 == param_2) {
          return;
        }
        if (puVar16 + 1 == param_2) {
          return;
        }
        lVar15 = -4;
        puVar13 = puVar16 + 1;
        do {
          puVar11 = puVar13;
          if ((ushort)puVar16[1] < (ushort)*puVar16) {
            uVar20 = *puVar11;
            puVar16 = puVar11;
            lVar19 = lVar15;
            do {
              *puVar16 = puVar16[-1];
              if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s",
                           "gen/third_party/libc++/src/include/__algorithm/sort.h:293: libc++ Hardening assertion __k != __leftmost failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                          );
              }
              puVar13 = puVar16 + -2;
              puVar16 = puVar16 + -1;
              lVar19 = lVar19 + 4;
            } while ((uVar20 & 0xffff) < (uint)(ushort)*puVar13);
            *puVar16 = uVar20;
          }
          lVar15 = lVar15 + -4;
          puVar13 = puVar11 + 1;
          puVar16 = puVar11;
        } while (puVar11 + 1 != param_2);
        return;
      }
      if (puVar16 == param_2) {
        return;
      }
      if (puVar16 + 1 == param_2) {
        return;
      }
      lVar15 = 0;
      puVar13 = puVar16;
      puVar11 = puVar16 + 1;
      do {
        if ((ushort)puVar13[1] < (ushort)*puVar13) {
          uVar20 = *puVar11;
          lVar19 = lVar15;
          do {
            lVar17 = lVar19;
            puVar2 = (undefined4 *)((long)puVar16 + lVar17);
            puVar2[1] = *puVar2;
            puVar13 = puVar16;
            if (lVar17 == 0) goto LAB_00bc3f90;
            lVar19 = lVar17 + -4;
          } while ((uVar20 & 0xffff) < (uint)*(ushort *)(puVar2 + -1));
          puVar13 = (uint *)((long)puVar16 + lVar17);
LAB_00bc3f90:
          *puVar13 = uVar20;
        }
        puVar21 = puVar11 + 1;
        lVar15 = lVar15 + 4;
        puVar13 = puVar11;
        puVar11 = puVar21;
        if (puVar21 == param_2) {
          return;
        }
      } while( true );
    }
    if (param_3 == 0) {
      if (puVar16 == param_2) {
        return;
      }
      uVar10 = uVar12 - 2 >> 1;
      uVar9 = uVar10;
      do {
        if (uVar9 <= uVar10) {
          uVar23 = (uVar9 & 0x3fffffffffffffff) << 1 | 1;
          uVar22 = uVar9 * 2 + 2;
          uVar18 = uVar23;
          if ((uVar22 < uVar12) &&
             (uVar18 = uVar22, (ushort)puVar16[uVar22] <= (ushort)puVar16[uVar23])) {
            uVar18 = uVar23;
          }
          if ((ushort)puVar16[uVar9] <= (ushort)puVar16[uVar18]) {
            uVar20 = puVar16[uVar9];
            uVar22 = uVar9;
            do {
              uVar23 = uVar18;
              puVar16[uVar22] = puVar16[uVar23];
              if ((long)uVar10 < (long)uVar23) break;
              uVar3 = (uVar23 & 0x3fffffffffffffff) << 1 | 1;
              uVar22 = uVar23 * 2 + 2;
              uVar18 = uVar3;
              if (((long)uVar22 < (long)uVar12) &&
                 (uVar18 = uVar22, (ushort)puVar16[uVar22] <= (ushort)puVar16[uVar3])) {
                uVar18 = uVar3;
              }
              uVar22 = uVar23;
            } while ((uVar20 & 0xffff) <= (uint)(ushort)puVar16[uVar18]);
            puVar16[uVar23] = uVar20;
          }
        }
        bVar1 = 0 < (long)uVar9;
        uVar9 = uVar9 - 1;
      } while (bVar1);
      do {
        uVar20 = *puVar16;
        uVar7 = *(undefined2 *)((long)puVar16 + 2);
        puVar13 = puVar16;
        uVar9 = 0;
        do {
          uVar22 = uVar9 << 1 | 1;
          uVar10 = uVar9 * 2 + 2;
          puVar11 = puVar13 + uVar9 + 1;
          uVar23 = uVar22;
          if (((long)uVar10 < (long)uVar12) &&
             (puVar11 = puVar13 + uVar9 + 2, uVar23 = uVar10,
             (ushort)puVar13[uVar9 + 2] <= (ushort)puVar13[uVar9 + 1])) {
            puVar11 = puVar13 + uVar9 + 1;
            uVar23 = uVar22;
          }
          *puVar13 = *puVar11;
          puVar13 = puVar11;
          uVar9 = uVar23;
        } while ((long)uVar23 <= (long)(uVar12 - 2 >> 1));
        if (puVar11 == param_2 + -1) {
          *(short *)puVar11 = (short)uVar20;
          *(undefined2 *)((long)puVar11 + 2) = uVar7;
        }
        else {
          lVar15 = (long)puVar11 + (4 - (long)puVar16) >> 2;
          *puVar11 = param_2[-1];
          *(short *)(param_2 + -1) = (short)uVar20;
          *(undefined2 *)((long)param_2 - 2) = uVar7;
          if (1 < lVar15) {
            uVar9 = lVar15 - 2U >> 1;
            if ((ushort)puVar16[uVar9] < (ushort)*puVar11) {
              uVar20 = *puVar11;
              puVar13 = puVar16 + uVar9;
              do {
                puVar21 = puVar13;
                *puVar11 = *puVar21;
                if (uVar9 == 0) break;
                uVar9 = uVar9 - 1 >> 1;
                puVar11 = puVar21;
                puVar13 = puVar16 + uVar9;
              } while ((uint)(ushort)puVar16[uVar9] < (uVar20 & 0xffff));
              *puVar21 = uVar20;
            }
          }
        }
        bVar1 = (long)uVar12 < 3;
        uVar12 = uVar12 - 1;
        param_2 = param_2 + -1;
        if (bVar1) {
          return;
        }
      } while( true );
    }
    uVar8 = (ushort)param_2[-1];
    puVar13 = puVar16 + (uVar12 >> 1);
    if (uVar12 < 0x81) {
      uVar5 = (ushort)*puVar16;
      uVar6 = (ushort)*puVar13;
      if (uVar5 < uVar6) {
        uVar7 = *(undefined2 *)((long)puVar13 + 2);
        if (uVar8 < uVar5) {
          *puVar13 = param_2[-1];
        }
        else {
          *puVar13 = *puVar16;
          *(ushort *)puVar16 = uVar6;
          *(undefined2 *)((long)puVar16 + 2) = uVar7;
          if (uVar6 <= (ushort)param_2[-1]) goto joined_r0x00bc3ac8;
          *puVar16 = param_2[-1];
        }
        *(ushort *)(param_2 + -1) = uVar6;
        *(undefined2 *)((long)param_2 + -2) = uVar7;
      }
      else if (uVar8 < uVar5) {
        uVar7 = *(undefined2 *)((long)puVar16 + 2);
        *puVar16 = param_2[-1];
        *(ushort *)(param_2 + -1) = uVar5;
        *(undefined2 *)((long)param_2 + -2) = uVar7;
        uVar20 = *puVar13;
        if ((ushort)*puVar16 < (ushort)uVar20) {
          uVar7 = *(undefined2 *)((long)puVar13 + 2);
          *puVar13 = *puVar16;
          *(ushort *)puVar16 = (ushort)uVar20;
          *(undefined2 *)((long)puVar16 + 2) = uVar7;
        }
      }
    }
    else {
      uVar5 = (ushort)*puVar13;
      uVar6 = (ushort)*puVar16;
      if (uVar5 < uVar6) {
        uVar7 = *(undefined2 *)((long)puVar16 + 2);
        if (uVar8 < uVar5) {
          *puVar16 = param_2[-1];
        }
        else {
          *puVar16 = *puVar13;
          *(ushort *)puVar13 = uVar6;
          *(undefined2 *)((long)puVar13 + 2) = uVar7;
          if (uVar6 <= (ushort)param_2[-1]) goto LAB_00bc3a28;
          *puVar13 = param_2[-1];
        }
        *(ushort *)(param_2 + -1) = uVar6;
        *(undefined2 *)((long)param_2 + -2) = uVar7;
      }
      else if (uVar8 < uVar5) {
        uVar7 = *(undefined2 *)((long)puVar13 + 2);
        *puVar13 = param_2[-1];
        *(ushort *)(param_2 + -1) = uVar5;
        *(undefined2 *)((long)param_2 + -2) = uVar7;
        uVar20 = *puVar16;
        if ((ushort)*puVar13 < (ushort)uVar20) {
          uVar7 = *(undefined2 *)((long)puVar16 + 2);
          *puVar16 = *puVar13;
          *(ushort *)puVar13 = (ushort)uVar20;
          *(undefined2 *)((long)puVar13 + 2) = uVar7;
        }
      }
LAB_00bc3a28:
      uVar5 = (ushort)puVar13[-1];
      uVar8 = (ushort)puVar16[1];
      if (uVar5 < uVar8) {
        uVar7 = *(undefined2 *)((long)puVar16 + 6);
        if ((ushort)param_2[-2] < uVar5) {
          puVar16[1] = param_2[-2];
        }
        else {
          puVar16[1] = puVar13[-1];
          *(ushort *)(puVar13 + -1) = uVar8;
          *(undefined2 *)((long)puVar13 + -2) = uVar7;
          if (uVar8 <= (ushort)param_2[-2]) goto LAB_00bc3afc;
          puVar13[-1] = param_2[-2];
        }
        *(ushort *)(param_2 + -2) = uVar8;
        *(undefined2 *)((long)param_2 + -6) = uVar7;
      }
      else if ((ushort)param_2[-2] < uVar5) {
        uVar7 = *(undefined2 *)((long)puVar13 + -2);
        puVar13[-1] = param_2[-2];
        *(ushort *)(param_2 + -2) = uVar5;
        *(undefined2 *)((long)param_2 + -6) = uVar7;
        uVar20 = puVar16[1];
        if ((ushort)puVar13[-1] < (ushort)uVar20) {
          uVar7 = *(undefined2 *)((long)puVar16 + 6);
          puVar16[1] = puVar13[-1];
          *(ushort *)(puVar13 + -1) = (ushort)uVar20;
          *(undefined2 *)((long)puVar13 + -2) = uVar7;
        }
      }
LAB_00bc3afc:
      uVar8 = (ushort)puVar13[1];
      uVar5 = (ushort)puVar16[2];
      if (uVar8 < uVar5) {
        uVar7 = *(undefined2 *)((long)puVar16 + 10);
        if ((ushort)param_2[-3] < uVar8) {
          puVar16[2] = param_2[-3];
        }
        else {
          puVar16[2] = puVar13[1];
          *(ushort *)(puVar13 + 1) = uVar5;
          *(undefined2 *)((long)puVar13 + 6) = uVar7;
          if (uVar5 <= (ushort)param_2[-3]) goto LAB_00bc3b98;
          puVar13[1] = param_2[-3];
        }
        *(ushort *)(param_2 + -3) = uVar5;
        *(undefined2 *)((long)param_2 + -10) = uVar7;
      }
      else if ((ushort)param_2[-3] < uVar8) {
        uVar7 = *(undefined2 *)((long)puVar13 + 6);
        puVar13[1] = param_2[-3];
        *(ushort *)(param_2 + -3) = uVar8;
        *(undefined2 *)((long)param_2 + -10) = uVar7;
        uVar20 = puVar16[2];
        if ((ushort)puVar13[1] < (ushort)uVar20) {
          uVar7 = *(undefined2 *)((long)puVar16 + 10);
          puVar16[2] = puVar13[1];
          *(ushort *)(puVar13 + 1) = (ushort)uVar20;
          *(undefined2 *)((long)puVar13 + 6) = uVar7;
        }
      }
LAB_00bc3b98:
      uVar8 = (ushort)*puVar13;
      uVar5 = (ushort)puVar13[-1];
      uVar20 = (uint)(ushort)puVar13[1];
      if ((uint)uVar8 < (uint)uVar5) {
        if (uVar20 < uVar8) {
          uVar20 = puVar13[1];
          *(ushort *)(puVar13 + 1) = uVar5;
          puVar13[-1] = uVar20;
        }
        else {
          uVar14 = *puVar13;
          *(ushort *)puVar13 = uVar5;
          *(undefined2 *)((long)puVar13 + 2) = *(undefined2 *)((long)puVar13 + -2);
          puVar13[-1] = uVar14;
          if (uVar5 <= uVar20) goto LAB_00bc3c28;
          uVar20 = puVar13[1];
          *(ushort *)(puVar13 + 1) = uVar5;
          *puVar13 = uVar20;
        }
        *(undefined2 *)((long)puVar13 + 6) = *(undefined2 *)((long)puVar13 + -2);
      }
      else if (uVar20 < uVar8) {
        uVar20 = puVar13[1];
        *(ushort *)(puVar13 + 1) = uVar8;
        *puVar13 = uVar20;
        *(undefined2 *)((long)puVar13 + 6) = *(undefined2 *)((long)puVar13 + 2);
        if ((uVar20 & 0xffff) <= (uint)uVar5 && (uint)uVar5 != (uVar20 & 0xffff)) {
          puVar13[-1] = uVar20;
          *(ushort *)puVar13 = uVar5;
          *(undefined2 *)((long)puVar13 + 2) = *(undefined2 *)((long)puVar13 + -2);
        }
      }
LAB_00bc3c28:
      uVar20 = *puVar16;
      *puVar16 = *puVar13;
      *puVar13 = uVar20;
    }
joined_r0x00bc3ac8:
    param_1 = puVar16;
    if (((param_4 & 1) == 0) && ((ushort)*puVar16 <= (ushort)puVar16[-1])) {
      uVar14 = *puVar16;
      uVar20 = uVar14 & 0xffff;
      if (uVar20 < (ushort)param_2[-1]) {
        do {
          param_1 = param_1 + 1;
          if (param_1 == param_2) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__algorithm/sort.h:669: libc++ Hardening assertion __first != __end failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                      );
          }
        } while ((ushort)*param_1 <= uVar20);
      }
      else {
        do {
          param_1 = param_1 + 1;
          if (param_2 <= param_1) break;
        } while ((ushort)*param_1 <= uVar20);
      }
      puVar13 = param_2;
      if (param_1 < param_2) {
        do {
          if (puVar13 == puVar16) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__algorithm/sort.h:682: libc++ Hardening assertion __last != __begin failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                      );
          }
          puVar13 = puVar13 + -1;
        } while (uVar20 < (ushort)*puVar13);
      }
      if (param_1 < puVar13) {
        uVar8 = (ushort)*param_1;
        do {
          uVar7 = *(undefined2 *)((long)param_1 + 2);
          *param_1 = *puVar13;
          *(ushort *)puVar13 = uVar8;
          *(undefined2 *)((long)puVar13 + 2) = uVar7;
          do {
            param_1 = param_1 + 1;
            if (param_1 == param_2) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__algorithm/sort.h:692: libc++ Hardening assertion __first != __end failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                        );
            }
            uVar8 = (ushort)*param_1;
          } while (uVar8 <= uVar20);
          do {
            if (puVar13 == puVar16) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__algorithm/sort.h:697: libc++ Hardening assertion __last != __begin failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                        );
            }
            puVar13 = puVar13 + -1;
          } while (uVar20 < (ushort)*puVar13);
        } while (param_1 < puVar13);
      }
      puVar13 = param_1 + -1;
      if (puVar16 != puVar13) {
        *puVar16 = *puVar13;
      }
      param_4 = 0;
      *puVar13 = uVar14;
      param_3 = param_3 + -1;
      goto LAB_00bc38c0;
    }
    param_3 = param_3 + -1;
    uVar14 = *puVar16;
    lVar15 = 0;
    uVar20 = uVar14 & 0xffff;
    do {
      puVar13 = (uint *)((long)puVar16 + lVar15 + 4);
      if (puVar13 == param_2) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__algorithm/sort.h:603: libc++ Hardening assertion __first != __end failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                  );
      }
      uVar8 = (ushort)*puVar13;
      lVar15 = lVar15 + 4;
    } while (uVar8 < uVar20);
    puVar13 = (uint *)((long)puVar16 + lVar15);
    puVar11 = param_2;
    if (lVar15 == 4) {
      do {
        if (puVar11 <= puVar13) break;
        puVar11 = puVar11 + -1;
      } while (uVar20 <= (ushort)*puVar11);
    }
    else {
      do {
        if (puVar11 == puVar16) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__algorithm/sort.h:615: libc++ Hardening assertion __last != __begin failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                    );
        }
        puVar11 = puVar11 + -1;
      } while (uVar20 <= (ushort)*puVar11);
    }
    puVar21 = puVar11;
    puVar24 = puVar13;
    if (puVar13 < puVar11) {
      do {
        uVar7 = *(undefined2 *)((long)puVar24 + 2);
        *puVar24 = *puVar21;
        *(ushort *)puVar21 = uVar8;
        *(undefined2 *)((long)puVar21 + 2) = uVar7;
        do {
          puVar25 = puVar24;
          puVar24 = puVar25 + 1;
          if (puVar24 == param_2) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__algorithm/sort.h:633: libc++ Hardening assertion __first != __end failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                      );
          }
          uVar8 = (ushort)*puVar24;
        } while (uVar8 < uVar20);
        do {
          if (puVar21 == puVar16) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__algorithm/sort.h:638: libc++ Hardening assertion __last != __begin failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                      );
          }
          puVar21 = puVar21 + -1;
        } while (uVar20 <= (ushort)*puVar21);
      } while (puVar24 < puVar21);
    }
    else {
      puVar25 = puVar13 + -1;
    }
    if (puVar16 != puVar25) {
      *puVar16 = *puVar25;
    }
    *puVar25 = uVar14;
    if (puVar13 < puVar11) {
LAB_00bc3d70:
      FUN_00bc3890(puVar16,puVar25,param_3,param_4 & 1);
      param_4 = 0;
      param_1 = puVar25 + 1;
    }
    else {
      uVar12 = FUN_00bc45cc(puVar16,puVar25);
      uVar9 = FUN_00bc45cc(puVar25 + 1,param_2);
      if ((uVar9 & 1) == 0) {
        param_1 = puVar25 + 1;
        if ((uVar12 & 1) == 0) goto LAB_00bc3d70;
      }
      else {
        param_2 = puVar25;
        if ((uVar12 & 1) != 0) {
          return;
        }
      }
    }
  } while( true );
}


// ===== 00bc4428  FUN_00bc4428 =====

void FUN_00bc4428(ushort *param_1,ushort *param_2,ushort *param_3,ushort *param_4,ushort *param_5)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  
  uVar1 = *param_2;
  uVar2 = *param_1;
  uVar4 = *param_3;
  if (uVar1 < uVar2) {
    uVar3 = param_1[1];
    if (uVar4 < uVar1) {
      *(undefined4 *)param_1 = *(undefined4 *)param_3;
    }
    else {
      *(undefined4 *)param_1 = *(undefined4 *)param_2;
      *param_2 = uVar2;
      param_2[1] = uVar3;
      uVar4 = *param_3;
      if (uVar2 <= *param_3) goto LAB_00bc44d0;
      *(undefined4 *)param_2 = *(undefined4 *)param_3;
    }
    *param_3 = uVar2;
    param_3[1] = uVar3;
    uVar4 = uVar2;
  }
  else if (uVar4 < uVar1) {
    uVar2 = param_2[1];
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *param_3 = uVar1;
    param_3[1] = uVar2;
    uVar2 = *param_1;
    uVar4 = uVar1;
    if (*param_2 < uVar2) {
      uVar1 = param_1[1];
      *(undefined4 *)param_1 = *(undefined4 *)param_2;
      *param_2 = uVar2;
      param_2[1] = uVar1;
      uVar4 = *param_3;
    }
  }
LAB_00bc44d0:
  if (*param_4 < uVar4) {
    uVar1 = param_3[1];
    *(undefined4 *)param_3 = *(undefined4 *)param_4;
    *param_4 = uVar4;
    param_4[1] = uVar1;
    uVar1 = *param_2;
    if (*param_3 < uVar1) {
      uVar2 = param_2[1];
      *(undefined4 *)param_2 = *(undefined4 *)param_3;
      *param_3 = uVar1;
      param_3[1] = uVar2;
      uVar1 = *param_1;
      if (*param_2 < uVar1) {
        uVar2 = param_1[1];
        *(undefined4 *)param_1 = *(undefined4 *)param_2;
        *param_2 = uVar1;
        param_2[1] = uVar2;
      }
    }
  }
  uVar1 = *param_4;
  if (*param_5 < uVar1) {
    uVar2 = param_4[1];
    *(undefined4 *)param_4 = *(undefined4 *)param_5;
    *param_5 = uVar1;
    param_5[1] = uVar2;
    uVar1 = *param_3;
    if (*param_4 < uVar1) {
      uVar2 = param_3[1];
      *(undefined4 *)param_3 = *(undefined4 *)param_4;
      *param_4 = uVar1;
      param_4[1] = uVar2;
      uVar1 = *param_2;
      if (*param_3 < uVar1) {
        uVar2 = param_2[1];
        *(undefined4 *)param_2 = *(undefined4 *)param_3;
        *param_3 = uVar1;
        param_3[1] = uVar2;
        uVar1 = *param_1;
        if (*param_2 < uVar1) {
          uVar2 = param_1[1];
          *(undefined4 *)param_1 = *(undefined4 *)param_2;
          *param_2 = uVar1;
          param_2[1] = uVar2;
        }
      }
    }
  }
  return;
}


// ===== 00bc45cc  FUN_00bc45cc =====

bool FUN_00bc45cc(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined2 uVar3;
  ushort uVar4;
  ushort uVar5;
  long lVar6;
  ulong uVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  long lVar11;
  int iVar12;
  uint uVar13;
  long lVar14;
  
  uVar7 = (long)param_2 - (long)param_1 >> 2;
  if ((long)uVar7 < 3) {
    if (uVar7 < 2) {
      return true;
    }
    if (uVar7 == 2) {
      uVar13 = *param_1;
      if ((ushort)uVar13 <= (ushort)param_2[-1]) {
        return true;
      }
      uVar3 = *(undefined2 *)((long)param_1 + 2);
      *param_1 = param_2[-1];
      *(ushort *)(param_2 + -1) = (ushort)uVar13;
      *(undefined2 *)((long)param_2 + -2) = uVar3;
      return true;
    }
  }
  else {
    if (uVar7 == 3) {
      uVar4 = (ushort)param_1[1];
      uVar5 = (ushort)*param_1;
      if (uVar4 < uVar5) {
        uVar3 = *(undefined2 *)((long)param_1 + 2);
        if ((ushort)param_2[-1] < uVar4) {
          *param_1 = param_2[-1];
        }
        else {
          uVar13 = param_1[1];
          *(ushort *)(param_1 + 1) = uVar5;
          *(undefined2 *)((long)param_1 + 6) = uVar3;
          *param_1 = uVar13;
          if (uVar5 <= (ushort)param_2[-1]) {
            return true;
          }
          param_1[1] = param_2[-1];
        }
        *(ushort *)(param_2 + -1) = uVar5;
        *(undefined2 *)((long)param_2 + -2) = uVar3;
        return true;
      }
      if (uVar4 <= (ushort)param_2[-1]) {
        return true;
      }
      uVar3 = *(undefined2 *)((long)param_1 + 6);
      param_1[1] = param_2[-1];
      *(ushort *)(param_2 + -1) = uVar4;
      *(undefined2 *)((long)param_2 + -2) = uVar3;
      if ((ushort)*param_1 <= (ushort)param_1[1]) {
        return true;
      }
      uVar13 = param_1[1];
      *(ushort *)(param_1 + 1) = (ushort)*param_1;
      *param_1 = uVar13;
      *(undefined2 *)((long)param_1 + 6) = *(undefined2 *)((long)param_1 + 2);
      return true;
    }
    if (uVar7 == 4) {
      uVar4 = (ushort)param_1[1];
      uVar5 = (ushort)*param_1;
      uVar10 = (uint)uVar4;
      uVar13 = (uint)(ushort)param_1[2];
      if ((uint)uVar4 < (uint)uVar5) {
        if (uVar13 < uVar10) {
          uVar13 = param_1[2];
          *(ushort *)(param_1 + 2) = uVar5;
          *param_1 = uVar13;
        }
        else {
          uVar10 = param_1[1];
          *(ushort *)(param_1 + 1) = uVar5;
          *(undefined2 *)((long)param_1 + 6) = *(undefined2 *)((long)param_1 + 2);
          *param_1 = uVar10;
          if (uVar5 <= uVar13) goto LAB_00bc48bc;
          uVar13 = param_1[2];
          *(ushort *)(param_1 + 2) = uVar5;
          param_1[1] = uVar13;
        }
        *(undefined2 *)((long)param_1 + 10) = *(undefined2 *)((long)param_1 + 2);
        uVar13 = (uint)uVar5;
      }
      else if (uVar13 < uVar4) {
        uVar2 = param_1[2];
        *(ushort *)(param_1 + 2) = uVar4;
        param_1[1] = uVar2;
        *(undefined2 *)((long)param_1 + 10) = *(undefined2 *)((long)param_1 + 6);
        uVar13 = uVar10;
        if ((uVar2 & 0xffff) <= (uint)uVar5 && (uint)uVar5 != (uVar2 & 0xffff)) {
          *param_1 = uVar2;
          *(ushort *)(param_1 + 1) = uVar5;
          *(undefined2 *)((long)param_1 + 6) = *(undefined2 *)((long)param_1 + 2);
        }
      }
LAB_00bc48bc:
      if (uVar13 <= (ushort)param_2[-1]) {
        return true;
      }
      uVar3 = *(undefined2 *)((long)param_1 + 10);
      param_1[2] = param_2[-1];
      *(short *)(param_2 + -1) = (short)uVar13;
      *(undefined2 *)((long)param_2 + -2) = uVar3;
      if ((ushort)param_1[1] <= (ushort)param_1[2]) {
        return true;
      }
      uVar13 = param_1[2];
      uVar10 = *param_1;
      *(ushort *)(param_1 + 2) = (ushort)param_1[1];
      param_1[1] = uVar13;
      *(undefined2 *)((long)param_1 + 10) = *(undefined2 *)((long)param_1 + 6);
      if ((uint)(ushort)uVar10 <= (uVar13 & 0xffff)) {
        return true;
      }
      *param_1 = uVar13;
      *(ushort *)(param_1 + 1) = (ushort)uVar10;
      *(undefined2 *)((long)param_1 + 6) = *(undefined2 *)((long)param_1 + 2);
      return true;
    }
    if (uVar7 == 5) {
      FUN_00bc4428(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
      return true;
    }
  }
  uVar4 = (ushort)param_1[1];
  uVar5 = (ushort)*param_1;
  uVar13 = (uint)(ushort)param_1[2];
  if ((uint)uVar4 < (uint)uVar5) {
    if (uVar13 < uVar4) {
      uVar13 = param_1[2];
      *(ushort *)(param_1 + 2) = uVar5;
      *param_1 = uVar13;
    }
    else {
      uVar10 = param_1[1];
      *(ushort *)(param_1 + 1) = uVar5;
      *(undefined2 *)((long)param_1 + 6) = *(undefined2 *)((long)param_1 + 2);
      *param_1 = uVar10;
      if (uVar5 <= uVar13) goto LAB_00bc47ec;
      uVar13 = param_1[2];
      *(ushort *)(param_1 + 2) = uVar5;
      param_1[1] = uVar13;
    }
    *(undefined2 *)((long)param_1 + 10) = *(undefined2 *)((long)param_1 + 2);
  }
  else if (uVar13 < uVar4) {
    uVar13 = param_1[2];
    *(ushort *)(param_1 + 2) = uVar4;
    param_1[1] = uVar13;
    *(undefined2 *)((long)param_1 + 10) = *(undefined2 *)((long)param_1 + 6);
    if ((uVar13 & 0xffff) <= (uint)uVar5 && (uint)uVar5 != (uVar13 & 0xffff)) {
      *param_1 = uVar13;
      *(ushort *)(param_1 + 1) = uVar5;
      *(undefined2 *)((long)param_1 + 6) = *(undefined2 *)((long)param_1 + 2);
    }
  }
LAB_00bc47ec:
  if (param_1 + 3 != param_2) {
    lVar11 = 0;
    iVar12 = 0;
    puVar8 = param_1 + 2;
    puVar9 = param_1 + 3;
    do {
      if ((ushort)*puVar9 < (ushort)*puVar8) {
        uVar13 = *puVar9;
        lVar6 = lVar11;
        do {
          lVar14 = lVar6;
          *(undefined4 *)((long)param_1 + lVar14 + 0xc) =
               *(undefined4 *)((long)param_1 + lVar14 + 8);
          puVar8 = param_1;
          if (lVar14 == -8) goto LAB_00bc4808;
          lVar6 = lVar14 + -4;
        } while ((uVar13 & 0xffff) < (uint)*(ushort *)((long)param_1 + lVar14 + 4));
        puVar8 = (uint *)((long)param_1 + lVar14 + 8);
LAB_00bc4808:
        iVar12 = iVar12 + 1;
        *puVar8 = uVar13;
        if (iVar12 == 8) {
          return puVar9 + 1 == param_2;
        }
      }
      puVar1 = puVar9 + 1;
      lVar11 = lVar11 + 4;
      puVar8 = puVar9;
      puVar9 = puVar1;
    } while (puVar1 != param_2);
  }
  return true;
}


// ===== 00bc492c  FUN_00bc492c =====

/* WARNING: Removing unreachable block (ram,0x00bc4c64) */

void FUN_00bc492c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00bba4b8(&local_80);
  if (puStack_78 != local_80) {
    lVar7 = 0;
    uVar8 = 0;
    do {
      if (uVar8 != 0) {
        FUN_00547cac(&local_68,&DAT_001ded1c,1);
      }
      if ((ulong)(((long)puStack_78 - (long)local_80 >> 3) * -0x5555555555555555) <= uVar8) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                  );
      }
      puVar1 = (undefined8 *)(local_80 + lVar7);
      local_90 = puVar1[2];
      uStack_98 = puVar1[1];
      local_a0 = *puVar1;
      uVar5 = FUN_00bc4ca8(&local_a0,&local_68);
      if ((uVar5 & 1) == 0) {
        local_b0 = puVar1[2];
        uStack_b8 = puVar1[1];
        local_c0 = *puVar1;
        uVar5 = FUN_00bc4d98(&local_c0,&local_68);
        if ((uVar5 & 1) == 0) {
          local_d0 = puVar1[2];
          uStack_d8 = puVar1[1];
          local_e0 = *puVar1;
          uVar5 = FUN_00bc4f34(&local_e0,&local_68);
          if ((uVar5 & 1) == 0) {
            local_f0 = puVar1[2];
            uStack_f8 = puVar1[1];
            local_100 = *puVar1;
            uVar5 = FUN_00bc5024(&local_100,&local_68);
            if ((uVar5 & 1) == 0) {
              local_110 = puVar1[2];
              uStack_118 = puVar1[1];
              local_120 = *puVar1;
              uVar5 = FUN_00bc5114(&local_120,&local_68);
              if ((uVar5 & 1) == 0) {
                local_130 = puVar1[2];
                uStack_138 = puVar1[1];
                local_140 = *puVar1;
                uVar5 = FUN_00bc5268(&local_140,&local_68);
                if ((uVar5 & 1) == 0) {
                  local_150 = puVar1[2];
                  uStack_158 = puVar1[1];
                  local_160 = *puVar1;
                  uVar5 = FUN_00bc53bc(&local_160,&local_68);
                  if ((uVar5 & 1) == 0) {
                    local_170 = puVar1[2];
                    uStack_178 = puVar1[1];
                    local_180 = *puVar1;
                    uVar5 = FUN_00bc54ac(&local_180,&local_68);
                    if ((uVar5 & 1) == 0) {
                      local_190 = puVar1[2];
                      uStack_198 = puVar1[1];
                      local_1a0 = *puVar1;
                      uVar5 = FUN_00bc5600(&local_1a0,&local_68);
                      if ((uVar5 & 1) == 0) {
                        local_1b0 = puVar1[2];
                        uStack_1b8 = puVar1[1];
                        local_1c0 = *puVar1;
                        uVar5 = FUN_00bc56f0(&local_1c0,&local_68);
                        if ((uVar5 & 1) == 0) {
                          local_1d0 = puVar1[2];
                          uStack_1d8 = puVar1[1];
                          local_1e0 = *puVar1;
                          uVar5 = FUN_00bc57e0(&local_1e0,&local_68);
                          if ((uVar5 & 1) == 0) {
                            local_1f0 = puVar1[2];
                            uStack_1f8 = puVar1[1];
                            local_200 = *puVar1;
                            uVar5 = FUN_00bc5934(&local_200,&local_68);
                            if ((uVar5 & 1) == 0) {
                              local_210 = puVar1[2];
                              uStack_218 = puVar1[1];
                              local_220 = *puVar1;
                              uVar5 = FUN_00bc5a60(&local_220,&local_68);
                              if ((uVar5 & 1) == 0) {
                                FUN_00547cac(&local_68,"Unhandled parameter of type: ",0x1d);
                                FUN_00bc5b8c(&local_68,*(undefined2 *)puVar1);
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
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 0x18;
    } while (uVar8 < (ulong)(((long)puStack_78 - (long)local_80 >> 3) * -0x5555555555555555));
  }
  uVar4 = local_58;
  uVar3 = uStack_60;
  uVar2 = local_68;
  uStack_60 = 0;
  local_58 = 0;
  local_68 = 0;
  param_1[1] = uVar3;
  *param_1 = uVar2;
  param_1[2] = uVar4;
  if (local_80 != (undefined1 *)0x0) {
    uVar8 = (ulong)(((long)local_80 - (long)puStack_78) * 0x1555555555555555) >> 3;
    uVar5 = (long)puStack_78 * -0x1555555555555555 - 8U >> 3;
    if (uVar5 <= uVar8) {
      uVar8 = uVar5;
    }
    puVar6 = puStack_78;
    if ((1 < uVar8) && ((((int)local_80 - (int)puStack_78 | -(int)puStack_78) & 7U) == 0)) {
      uVar8 = uVar8 & 0x1ffffffffffffffe;
      puVar6 = puStack_78 + uVar8 * -0x18;
      do {
        uVar8 = uVar8 - 2;
      } while (uVar8 != 0);
    }
    while (puVar6 != local_80) {
      puVar6 = puVar6 + -0x18;
      if (puVar6 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    puStack_78 = local_80;
    operator_delete(local_80);
  }
  return;
}


// ===== 00bc4ca8  FUN_00bc4ca8 =====

bool FUN_00bc4ca8(short *param_1,undefined8 param_2)

{
  ulong uVar1;
  short sVar2;
  undefined8 ****ppppuVar3;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined8 ***local_48;
  ulong uStack_40;
  ulong local_38;
  
  sVar2 = *param_1;
  if (sVar2 == 1) {
    puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00bc5c10(&local_60,*(undefined8 *)(param_1 + 4),*(undefined8 *)(param_1 + 8));
    if (((ulong)local_50 & 1) == 0) {
      FUN_00547cac(param_2,"Failed to parse error cause of type ",0x24);
      local_48 = (undefined8 ****)0x0;
      uStack_40 = 0;
      local_38 = 0;
      FUN_005f55c4(&local_48,0x16,1);
    }
    else {
      (**(code **)(local_60 + 0x18))(&local_48,&local_60);
    }
    uVar1 = uStack_40;
    ppppuVar3 = (undefined8 ****)local_48;
    if (-1 < (long)local_38) {
      uVar1 = local_38 >> 0x38;
      ppppuVar3 = &local_48;
    }
    FUN_00547cac(param_2,ppppuVar3,uVar1);
    if ((long)local_38 < 0) {
      operator_delete(local_48);
    }
  }
  return sVar2 == 1;
}


// ===== 00bc4d98  FUN_00bc4d98 =====

/* WARNING: Removing unreachable block (ram,0x00bc4e64) */

bool FUN_00bc4d98(short *param_1,undefined8 param_2)

{
  short sVar1;
  undefined8 ****ppppuVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined **local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined8 ***local_48;
  ulong uStack_40;
  ulong local_38;
  
  sVar1 = *param_1;
  if (sVar1 == 2) {
    puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
    local_70 = (undefined **)&DAT_aaaaaaaaaaaaaaaa;
    local_58 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00bc5de8(&local_70,*(undefined8 *)(param_1 + 4),*(undefined8 *)(param_1 + 8));
    if (((ulong)local_50 & 1) == 0) {
      FUN_00547cac(param_2,"Failed to parse error cause of type ",0x24);
      local_48 = (undefined8 ****)0x0;
      uStack_40 = 0;
      local_38 = 0;
      FUN_005f55c4(&local_48,0x16,2);
    }
    else {
      (*(code *)local_70[3])(&local_48,&local_70);
    }
    uVar4 = uStack_40;
    ppppuVar2 = (undefined8 ****)local_48;
    if (-1 < (long)local_38) {
      uVar4 = local_38 >> 0x38;
      ppppuVar2 = &local_48;
    }
    FUN_00547cac(param_2,ppppuVar2,uVar4);
    if ((((ulong)local_50 & 1) != 0) &&
       (local_70 = &PTR_FUN_00d47e30, puStack_68 != (undefined1 *)0x0)) {
      uVar4 = (ulong)(((long)puStack_68 - (long)local_60 << 0x3f) -
                     ((long)puStack_68 - (long)local_60)) >> 1;
      if ((ulong)(local_60 + ((long)local_60 << 0x3f) + -2) >> 1 <= uVar4) {
        uVar4 = (ulong)(local_60 + ((long)local_60 << 0x3f) + -2) >> 1;
      }
      puVar3 = local_60;
      if ((1 < uVar4) && ((((int)puStack_68 - (uint)local_60 | (uint)local_60) & 1) == 0)) {
        uVar4 = uVar4 & 0x7ffffffffffffffe;
        puVar3 = local_60 + uVar4 * -2;
        do {
          uVar4 = uVar4 - 2;
        } while (uVar4 != 0);
      }
      while (puVar3 != puStack_68) {
        puVar3 = puVar3 + -2;
        if (puVar3 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      local_60 = puStack_68;
      operator_delete(puStack_68);
    }
  }
  return sVar1 == 2;
}


// ===== 00bc4f34  FUN_00bc4f34 =====

bool FUN_00bc4f34(short *param_1,undefined8 param_2)

{
  ulong uVar1;
  short sVar2;
  undefined8 ****ppppuVar3;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined8 ***local_48;
  ulong uStack_40;
  ulong local_38;
  
  sVar2 = *param_1;
  if (sVar2 == 3) {
    puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00bc6658(&local_60,*(undefined8 *)(param_1 + 4),*(undefined8 *)(param_1 + 8));
    if (((ulong)local_50 & 1) == 0) {
      FUN_00547cac(param_2,"Failed to parse error cause of type ",0x24);
      local_48 = (undefined8 ****)0x0;
      uStack_40 = 0;
      local_38 = 0;
      FUN_005f55c4(&local_48,0x16,3);
    }
    else {
      (**(code **)(local_60 + 0x18))(&local_48,&local_60);
    }
    uVar1 = uStack_40;
    ppppuVar3 = (undefined8 ****)local_48;
    if (-1 < (long)local_38) {
      uVar1 = local_38 >> 0x38;
      ppppuVar3 = &local_48;
    }
    FUN_00547cac(param_2,ppppuVar3,uVar1);
    if ((long)local_38 < 0) {
      operator_delete(local_48);
    }
  }
  return sVar2 == 3;
}


// ===== 00bc5024  FUN_00bc5024 =====

bool FUN_00bc5024(short *param_1,undefined8 param_2)

{
  ulong uVar1;
  short sVar2;
  undefined8 ****ppppuVar3;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined8 ***local_48;
  ulong uStack_40;
  ulong local_38;
  
  sVar2 = *param_1;
  if (sVar2 == 4) {
    puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00bc683c(&local_60,*(undefined8 *)(param_1 + 4),*(undefined8 *)(param_1 + 8));
    if ((char)puStack_58 == '\x01') {
      (**(code **)(local_60 + 0x18))(&local_48,&local_60);
    }
    else {
      FUN_00547cac(param_2,"Failed to parse error cause of type ",0x24);
      local_48 = (undefined8 ****)0x0;
      uStack_40 = 0;
      local_38 = 0;
      FUN_005f55c4(&local_48,0x16,4);
    }
    uVar1 = uStack_40;
    ppppuVar3 = (undefined8 ****)local_48;
    if (-1 < (long)local_38) {
      uVar1 = local_38 >> 0x38;
      ppppuVar3 = &local_48;
    }
    FUN_00547cac(param_2,ppppuVar3,uVar1);
    if ((long)local_38 < 0) {
      operator_delete(local_48);
    }
  }
  return sVar2 == 4;
}


// ===== 00bc5114  FUN_00bc5114 =====

/* WARNING: Removing unreachable block (ram,0x00bc51e0) */

bool FUN_00bc5114(short *param_1,undefined8 param_2)

{
  ulong uVar1;
  short sVar2;
  undefined8 ****ppppuVar3;
  undefined **local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined8 ***local_48;
  ulong uStack_40;
  ulong local_38;
  
  sVar2 = *param_1;
  if (sVar2 == 5) {
    puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
    local_70 = (undefined **)&DAT_aaaaaaaaaaaaaaaa;
    local_58 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00bc693c(&local_70,*(undefined8 *)(param_1 + 4),*(undefined8 *)(param_1 + 8));
    if (((ulong)local_50 & 1) == 0) {
      FUN_00547cac(param_2,"Failed to parse error cause of type ",0x24);
      local_48 = (undefined8 ****)0x0;
      uStack_40 = 0;
      local_38 = 0;
      FUN_005f55c4(&local_48,0x16,5);
    }
    else {
      (*(code *)local_70[3])(&local_48,&local_70);
    }
    uVar1 = uStack_40;
    ppppuVar3 = (undefined8 ****)local_48;
    if (-1 < (long)local_38) {
      uVar1 = local_38 >> 0x38;
      ppppuVar3 = &local_48;
    }
    FUN_00547cac(param_2,ppppuVar3,uVar1);
    if ((((ulong)local_50 & 1) != 0) &&
       (local_70 = &PTR_FUN_00d47ec0, puStack_68 != (undefined1 *)0x0)) {
      if (local_60 + -1 < local_60 + -(long)puStack_68) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      local_60 = puStack_68;
      operator_delete(puStack_68);
    }
  }
  return sVar2 == 5;
}


// ===== 00bc5268  FUN_00bc5268 =====

/* WARNING: Removing unreachable block (ram,0x00bc5334) */

bool FUN_00bc5268(short *param_1,undefined8 param_2)

{
  ulong uVar1;
  short sVar2;
  undefined8 ****ppppuVar3;
  undefined **local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined8 ***local_48;
  ulong uStack_40;
  ulong local_38;
  
  sVar2 = *param_1;
  if (sVar2 == 6) {
    puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
    local_70 = (undefined **)&DAT_aaaaaaaaaaaaaaaa;
    local_58 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00bc6cdc(&local_70,*(undefined8 *)(param_1 + 4),*(undefined8 *)(param_1 + 8));
    if (((ulong)local_50 & 1) == 0) {
      FUN_00547cac(param_2,"Failed to parse error cause of type ",0x24);
      local_48 = (undefined8 ****)0x0;
      uStack_40 = 0;
      local_38 = 0;
      FUN_005f55c4(&local_48,0x16,6);
    }
    else {
      (*(code *)local_70[3])(&local_48,&local_70);
    }
    uVar1 = uStack_40;
    ppppuVar3 = (undefined8 ****)local_48;
    if (-1 < (long)local_38) {
      uVar1 = local_38 >> 0x38;
      ppppuVar3 = &local_48;
    }
    FUN_00547cac(param_2,ppppuVar3,uVar1);
    if ((((ulong)local_50 & 1) != 0) &&
       (local_70 = &PTR_FUN_00d47ef0, puStack_68 != (undefined1 *)0x0)) {
      if (local_60 + -1 < local_60 + -(long)puStack_68) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      local_60 = puStack_68;
      operator_delete(puStack_68);
    }
  }
  return sVar2 == 6;
}


// ===== 00bc53bc  FUN_00bc53bc =====

bool FUN_00bc53bc(short *param_1,undefined8 param_2)

{
  ulong uVar1;
  short sVar2;
  undefined8 ****ppppuVar3;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined8 ***local_48;
  ulong uStack_40;
  ulong local_38;
  
  sVar2 = *param_1;
  if (sVar2 == 7) {
    puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00bc713c(&local_60,*(undefined8 *)(param_1 + 4),*(undefined8 *)(param_1 + 8));
    if ((char)puStack_58 == '\x01') {
      (**(code **)(local_60 + 0x18))(&local_48,&local_60);
    }
    else {
      FUN_00547cac(param_2,"Failed to parse error cause of type ",0x24);
      local_48 = (undefined8 ****)0x0;
      uStack_40 = 0;
      local_38 = 0;
      FUN_005f55c4(&local_48,0x16,7);
    }
    uVar1 = uStack_40;
    ppppuVar3 = (undefined8 ****)local_48;
    if (-1 < (long)local_38) {
      uVar1 = local_38 >> 0x38;
      ppppuVar3 = &local_48;
    }
    FUN_00547cac(param_2,ppppuVar3,uVar1);
    if ((long)local_38 < 0) {
      operator_delete(local_48);
    }
  }
  return sVar2 == 7;
}


// ===== 00bc54ac  FUN_00bc54ac =====

/* WARNING: Removing unreachable block (ram,0x00bc5578) */

bool FUN_00bc54ac(short *param_1,undefined8 param_2)

{
  ulong uVar1;
  short sVar2;
  undefined8 ****ppppuVar3;
  undefined **local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined8 ***local_48;
  ulong uStack_40;
  ulong local_38;
  
  sVar2 = *param_1;
  if (sVar2 == 8) {
    puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
    local_70 = (undefined **)&DAT_aaaaaaaaaaaaaaaa;
    local_58 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00bc7240(&local_70,*(undefined8 *)(param_1 + 4),*(undefined8 *)(param_1 + 8));
    if (((ulong)local_50 & 1) == 0) {
      FUN_00547cac(param_2,"Failed to parse error cause of type ",0x24);
      local_48 = (undefined8 ****)0x0;
      uStack_40 = 0;
      local_38 = 0;
      FUN_005f55c4(&local_48,0x16,8);
    }
    else {
      (*(code *)local_70[3])(&local_48,&local_70);
    }
    uVar1 = uStack_40;
    ppppuVar3 = (undefined8 ****)local_48;
    if (-1 < (long)local_38) {
      uVar1 = local_38 >> 0x38;
      ppppuVar3 = &local_48;
    }
    FUN_00547cac(param_2,ppppuVar3,uVar1);
    if ((((ulong)local_50 & 1) != 0) &&
       (local_70 = &PTR_FUN_00d47f50, puStack_68 != (undefined1 *)0x0)) {
      if (local_60 + -1 < local_60 + -(long)puStack_68) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      local_60 = puStack_68;
      operator_delete(puStack_68);
    }
  }
  return sVar2 == 8;
}


// ===== 00bc5600  FUN_00bc5600 =====

bool FUN_00bc5600(short *param_1,undefined8 param_2)

{
  ulong uVar1;
  short sVar2;
  undefined8 ****ppppuVar3;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined8 ***local_48;
  ulong uStack_40;
  ulong local_38;
  
  sVar2 = *param_1;
  if (sVar2 == 9) {
    puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00bc75e0(&local_60,*(undefined8 *)(param_1 + 4),*(undefined8 *)(param_1 + 8));
    if (((ulong)local_50 & 1) == 0) {
      FUN_00547cac(param_2,"Failed to parse error cause of type ",0x24);
      local_48 = (undefined8 ****)0x0;
      uStack_40 = 0;
      local_38 = 0;
      FUN_005f55c4(&local_48,0x16,9);
    }
    else {
      (**(code **)(local_60 + 0x18))(&local_48,&local_60);
    }
    uVar1 = uStack_40;
    ppppuVar3 = (undefined8 ****)local_48;
    if (-1 < (long)local_38) {
      uVar1 = local_38 >> 0x38;
      ppppuVar3 = &local_48;
    }
    FUN_00547cac(param_2,ppppuVar3,uVar1);
    if ((long)local_38 < 0) {
      operator_delete(local_48);
    }
  }
  return sVar2 == 9;
}


// ===== 00bc56f0  FUN_00bc56f0 =====

bool FUN_00bc56f0(short *param_1,undefined8 param_2)

{
  ulong uVar1;
  short sVar2;
  undefined8 ****ppppuVar3;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined8 ***local_48;
  ulong uStack_40;
  ulong local_38;
  
  sVar2 = *param_1;
  if (sVar2 == 10) {
    puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00bc77c4(&local_60,*(undefined8 *)(param_1 + 4),*(undefined8 *)(param_1 + 8));
    if ((char)puStack_58 == '\x01') {
      (**(code **)(local_60 + 0x18))(&local_48,&local_60);
    }
    else {
      FUN_00547cac(param_2,"Failed to parse error cause of type ",0x24);
      local_48 = (undefined8 ****)0x0;
      uStack_40 = 0;
      local_38 = 0;
      FUN_005f55c4(&local_48,0x16,10);
    }
    uVar1 = uStack_40;
    ppppuVar3 = (undefined8 ****)local_48;
    if (-1 < (long)local_38) {
      uVar1 = local_38 >> 0x38;
      ppppuVar3 = &local_48;
    }
    FUN_00547cac(param_2,ppppuVar3,uVar1);
    if ((long)local_38 < 0) {
      operator_delete(local_48);
    }
  }
  return sVar2 == 10;
}


// ===== 00bc57e0  FUN_00bc57e0 =====

/* WARNING: Removing unreachable block (ram,0x00bc58ac) */

bool FUN_00bc57e0(short *param_1,undefined8 param_2)

{
  ulong uVar1;
  short sVar2;
  undefined8 ****ppppuVar3;
  undefined **local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined8 ***local_48;
  ulong uStack_40;
  ulong local_38;
  
  sVar2 = *param_1;
  if (sVar2 == 0xb) {
    puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
    local_70 = (undefined **)&DAT_aaaaaaaaaaaaaaaa;
    local_58 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00bc78c8(&local_70,*(undefined8 *)(param_1 + 4),*(undefined8 *)(param_1 + 8));
    if (((ulong)local_50 & 1) == 0) {
      FUN_00547cac(param_2,"Failed to parse error cause of type ",0x24);
      local_48 = (undefined8 ****)0x0;
      uStack_40 = 0;
      local_38 = 0;
      FUN_005f55c4(&local_48,0x16,0xb);
    }
    else {
      (*(code *)local_70[3])(&local_48,&local_70);
    }
    uVar1 = uStack_40;
    ppppuVar3 = (undefined8 ****)local_48;
    if (-1 < (long)local_38) {
      uVar1 = local_38 >> 0x38;
      ppppuVar3 = &local_48;
    }
    FUN_00547cac(param_2,ppppuVar3,uVar1);
    if ((((ulong)local_50 & 1) != 0) &&
       (local_70 = &PTR_FUN_00d47fe0, puStack_68 != (undefined1 *)0x0)) {
      if (local_60 + -1 < local_60 + -(long)puStack_68) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      local_60 = puStack_68;
      operator_delete(puStack_68);
    }
  }
  return sVar2 == 0xb;
}


// ===== 00bc5934  FUN_00bc5934 =====

/* WARNING: Removing unreachable block (ram,0x00bc5a00) */

bool FUN_00bc5934(short *param_1,undefined8 param_2)

{
  ulong uVar1;
  short sVar2;
  undefined8 ****ppppuVar3;
  undefined **local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined8 ***local_48;
  ulong uStack_40;
  ulong local_38;
  
  sVar2 = *param_1;
  if (sVar2 == 0xc) {
    puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
    local_70 = (undefined **)&DAT_aaaaaaaaaaaaaaaa;
    local_58 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00bc0e40(&local_70,*(undefined8 *)(param_1 + 4),*(undefined8 *)(param_1 + 8));
    if (((ulong)local_50 & 1) == 0) {
      FUN_00547cac(param_2,"Failed to parse error cause of type ",0x24);
      local_48 = (undefined8 ****)0x0;
      uStack_40 = 0;
      local_38 = 0;
      FUN_005f55c4(&local_48,0x16,0xc);
    }
    else {
      (*(code *)local_70[3])(&local_48,&local_70);
    }
    uVar1 = uStack_40;
    ppppuVar3 = (undefined8 ****)local_48;
    if (-1 < (long)local_38) {
      uVar1 = local_38 >> 0x38;
      ppppuVar3 = &local_48;
    }
    FUN_00547cac(param_2,ppppuVar3,uVar1);
    if ((((ulong)local_50 & 1) != 0) && (local_70 = &PTR_FUN_00d47c20, (long)local_58 < 0)) {
      operator_delete(puStack_68);
    }
  }
  return sVar2 == 0xc;
}


// ===== 00bc5a60  FUN_00bc5a60 =====

/* WARNING: Removing unreachable block (ram,0x00bc5b2c) */

bool FUN_00bc5a60(short *param_1,undefined8 param_2)

{
  ulong uVar1;
  short sVar2;
  undefined8 ****ppppuVar3;
  undefined **local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined8 ***local_48;
  ulong uStack_40;
  ulong local_38;
  
  sVar2 = *param_1;
  if (sVar2 == 0xd) {
    puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
    local_70 = (undefined **)&DAT_aaaaaaaaaaaaaaaa;
    local_58 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00bc2320(&local_70,*(undefined8 *)(param_1 + 4),*(undefined8 *)(param_1 + 8));
    if (((ulong)local_50 & 1) == 0) {
      FUN_00547cac(param_2,"Failed to parse error cause of type ",0x24);
      local_48 = (undefined8 ****)0x0;
      uStack_40 = 0;
      local_38 = 0;
      FUN_005f55c4(&local_48,0x16,0xd);
    }
    else {
      (*(code *)local_70[3])(&local_48,&local_70);
    }
    uVar1 = uStack_40;
    ppppuVar3 = (undefined8 ****)local_48;
    if (-1 < (long)local_38) {
      uVar1 = local_38 >> 0x38;
      ppppuVar3 = &local_48;
    }
    FUN_00547cac(param_2,ppppuVar3,uVar1);
    if ((((ulong)local_50 & 1) != 0) && (local_70 = &PTR_FUN_00d47d70, (long)local_58 < 0)) {
      operator_delete(puStack_68);
    }
  }
  return sVar2 == 0xd;
}


// ===== 00bc5b8c  FUN_00bc5b8c =====

undefined8 FUN_00bc5b8c(undefined8 param_1,undefined4 param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 **local_38;
  ulong uStack_30;
  ulong local_28;
  
  local_38 = (undefined8 ***)0x0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_005f55c4(&local_38,0x16,param_2);
  uVar1 = uStack_30;
  pppuVar2 = (undefined8 ***)local_38;
  if (-1 < (long)local_28) {
    uVar1 = local_28 >> 0x38;
    pppuVar2 = &local_38;
  }
  FUN_00547cac(param_1,pppuVar2,uVar1);
  if ((long)local_28 < 0) {
    operator_delete(local_38);
  }
  return param_1;
}


// ===== 00bc5c10  FUN_00bc5c10 =====

void FUN_00bc5c10(undefined8 *param_1,ushort *param_2,ulong param_3)

{
  ushort uVar1;
  uint uVar2;
  undefined1 uVar3;
  
  if (param_3 < 8) {
    FUN_00bb8cbc(param_3,8);
  }
  else {
    uVar2 = (uint)(*param_2 >> 8) | (*param_2 & 0xff00ff) << 8;
    if (uVar2 == 1) {
      uVar2 = (uint)(param_2[1] >> 8) | (param_2[1] & 0xff00ff) << 8;
      if ((param_3 == 8) && (uVar2 == 8)) {
        uVar1 = param_2[2];
        *param_1 = &PTR_FUN_00d47e00;
        *(ushort *)(param_1 + 1) = uVar1 >> 8 | (ushort)((uVar1 & 0xff00ff) << 8);
        uVar3 = 1;
        goto LAB_00bc5cac;
      }
      FUN_00bb8ccc(uVar2,8);
    }
    else {
      FUN_00bb8cc4(uVar2,1);
    }
  }
  uVar3 = 0;
  *(undefined1 *)param_1 = 0;
LAB_00bc5cac:
  *(undefined1 *)(param_1 + 2) = uVar3;
  return;
}


// ===== 00bc5cc0  FUN_00bc5cc0 =====

void FUN_00bc5cc0(long param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] - *param_2;
  FUN_004efbd8(param_2,lVar1 + 8);
  *(int *)(*param_2 + lVar1) = (int)DAT_001f51d8;
  *(ushort *)(*param_2 + lVar1 + 4) =
       *(ushort *)(param_1 + 8) >> 8 | (ushort)((*(ushort *)(param_1 + 8) & 0xff00ff) << 8);
  return;
}


// ===== 00bc5d2c  FUN_00bc5d2c =====

void FUN_00bc5d2c(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 **local_38;
  ulong uStack_30;
  ulong local_28;
  
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  FUN_00547cac(&local_50,"Invalid Stream Identifier, stream_id=",0x25);
  local_38 = (undefined8 ***)0x0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_005f55c4(&local_38,0x16,*(undefined2 *)(param_2 + 8));
  uVar1 = uStack_30;
  pppuVar2 = (undefined8 ***)local_38;
  if (-1 < (long)local_28) {
    uVar1 = local_28 >> 0x38;
    pppuVar2 = &local_38;
  }
  FUN_00547cac(&local_50,pppuVar2,uVar1);
  if ((long)local_28 < 0) {
    operator_delete(local_38);
  }
  param_1[1] = uStack_48;
  *param_1 = local_50;
  param_1[2] = local_40;
  return;
}


// ===== 00bc5ddc  FUN_00bc5ddc =====

void FUN_00bc5ddc(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00bc5de8  FUN_00bc5de8 =====

void FUN_00bc5de8(undefined8 *param_1)

{
  ushort uVar1;
  uint uVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  ushort *puVar6;
  ushort *puVar7;
  ushort *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ushort *puVar12;
  ulong uVar13;
  ushort *puVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ushort *local_78;
  ushort *local_70;
  ushort *local_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  ushort local_24 [2];
  
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00bc6128(&local_60);
  if (((ulong)local_50 & 1) != 0) {
    uVar15 = (ulong)(puStack_58 + -8) >> 1;
    uVar2 = (*(uint *)(local_60 + 4) & 0xff00ff00) >> 8 | (*(uint *)(local_60 + 4) & 0xff00ff) << 8;
    uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
    if (uVar15 == uVar2) {
      local_78 = (ushort *)0x0;
      local_70 = (ushort *)0x0;
      local_68 = (ushort *)0x0;
      if (uVar2 == 0) {
        puVar7 = (ushort *)0x0;
        puVar4 = (ushort *)0x0;
        puVar5 = (ushort *)0x0;
        lVar10 = 0;
        lVar16 = 0;
      }
      else {
        local_78 = (ushort *)operator_new((ulong)(puStack_58 + -8) & 0xfffffffffffffffe);
        local_68 = local_78 + uVar15;
        lVar16 = 0;
        local_70 = local_78;
        do {
          if (((ulong)local_50 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                      );
          }
          if (puStack_58 < (undefined1 *)(lVar16 + 10)) {
                    /* WARNING: Subroutine does not return */
            FUN_0061fd88("../../net/dcsctp/packet/bounded_byte_reader.h",0x53,
                         "FixedSize + variable_offset + SubSize <= data_.size()",&DAT_001f5fa0);
          }
          uVar1 = *(ushort *)(local_60 + lVar16 + 8);
          local_24[0] = uVar1 >> 8 | (ushort)((uVar1 & 0xff00ff) << 8);
          if (local_70 < local_68) {
            if (local_70 == (ushort *)0x0) goto LAB_00bc60dc;
            puVar4 = local_70 + 1;
            *local_70 = uVar1 >> 8 | (ushort)((uVar1 & 0xff00ff) << 8);
          }
          else {
            puVar4 = (ushort *)FUN_007d40ec(&local_78,local_24);
          }
          puVar7 = local_78;
          uVar15 = uVar15 - 1;
          lVar16 = lVar16 + 2;
          local_70 = puVar4;
        } while (uVar15 != 0);
        uVar15 = (long)puVar4 - (long)local_78;
        if (uVar15 == 0) {
          puVar5 = (ushort *)0x0;
          lVar10 = 0;
          lVar16 = 0;
        }
        else {
          if ((long)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_005d4754();
          }
          puVar5 = (ushort *)operator_new(uVar15);
          uVar11 = (long)puVar4 + (-2 - (long)puVar7);
          lVar16 = (long)puVar5 + uVar15;
          uVar13 = uVar11 >> 1;
          uVar9 = uVar13;
          if ((ulong)-(long)puVar5 >> 1 <= uVar13) {
            uVar9 = (ulong)-(long)puVar5 >> 1;
          }
          puVar6 = puVar7;
          puVar8 = puVar5;
          if (0x27 < uVar9) {
            if ((ulong)-(long)puVar5 >> 1 <= uVar13) {
              uVar13 = (ulong)-(long)puVar5 >> 1;
            }
            if (((((((uint)uVar11 | (uint)puVar5) & 1) == 0) && (puVar5 <= puVar5 + uVar13)) &&
                (puVar7 <= puVar7 + uVar13)) && (0x1f < (ulong)((long)puVar5 - (long)puVar7))) {
              puVar12 = puVar5 + 8;
              uVar13 = uVar9 + 1 & 0xf;
              puVar14 = puVar7 + 8;
              uVar11 = 0x10;
              if (uVar13 != 0) {
                uVar11 = uVar13;
              }
              lVar10 = (uVar9 + 1) - uVar11;
              puVar6 = puVar7 + lVar10;
              puVar8 = puVar5 + lVar10;
              do {
                puVar3 = puVar14 + -4;
                uVar17 = *(undefined8 *)(puVar14 + -8);
                uVar19 = *(undefined8 *)(puVar14 + 4);
                uVar18 = *(undefined8 *)puVar14;
                lVar10 = lVar10 + -0x10;
                puVar14 = puVar14 + 0x10;
                *(undefined8 *)(puVar12 + -4) = *(undefined8 *)puVar3;
                *(undefined8 *)(puVar12 + -8) = uVar17;
                *(undefined8 *)(puVar12 + 4) = uVar19;
                *(undefined8 *)puVar12 = uVar18;
                puVar12 = puVar12 + 0x10;
              } while (lVar10 != 0);
            }
          }
          lVar10 = (long)puVar5 - (long)puVar8;
          do {
            if (puVar8 == (ushort *)0x0) {
LAB_00bc60dc:
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                        );
            }
            puVar12 = puVar6 + 1;
            lVar10 = lVar10 + -2;
            *puVar8 = *puVar6;
            puVar6 = puVar12;
            puVar8 = puVar8 + 1;
          } while (puVar12 != (ushort *)((long)puVar7 + uVar15));
          lVar10 = (long)puVar5 - lVar10;
        }
      }
      param_1[2] = lVar10;
      param_1[3] = lVar16;
      *param_1 = &PTR_FUN_00d47e30;
      param_1[1] = puVar5;
      *(undefined1 *)(param_1 + 4) = 1;
      if (puVar7 == (ushort *)0x0) {
        return;
      }
      uVar9 = (ulong)((long)puVar4 + ((long)puVar4 << 0x3f) + -2) >> 1;
      uVar15 = (ulong)(((long)puVar7 - (long)puVar4 << 0x3f) - ((long)puVar7 - (long)puVar4)) >> 1;
      if (uVar9 <= uVar15) {
        uVar15 = uVar9;
      }
      if ((1 < uVar15) && ((((int)puVar7 - (uint)puVar4 | (uint)puVar4) & 1) == 0)) {
        uVar15 = uVar15 & 0x7ffffffffffffffe;
        puVar4 = puVar4 + -uVar15;
        do {
          uVar15 = uVar15 - 2;
        } while (uVar15 != 0);
      }
      do {
        if (puVar4 == puVar7) {
          local_70 = puVar7;
          operator_delete(puVar7);
          return;
        }
        puVar4 = puVar4 + -1;
      } while (puVar4 != (ushort *)0x0);
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}


// ===== 00bc6128  FUN_00bc6128 =====

void FUN_00bc6128(undefined8 *param_1,ushort *param_2,ulong param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined1 uVar3;
  
  if (param_3 < 8) {
    FUN_00bb8cbc(param_3,8);
  }
  else {
    uVar1 = (uint)(*param_2 >> 8) | (*param_2 & 0xff00ff) << 8;
    if (uVar1 == 2) {
      uVar1 = (uint)CONCAT11((char)param_2[1],*(byte *)((long)param_2 + 3));
      uVar2 = (ulong)uVar1;
      if ((uVar1 < 8) || (param_3 < uVar2)) {
        FUN_00bb8cd4(uVar2);
      }
      else if (param_3 - uVar2 < 4) {
        if ((*(byte *)((long)param_2 + 3) & 1) == 0) {
          uVar3 = 1;
          *param_1 = param_2;
          param_1[1] = uVar2;
          goto LAB_00bc61b4;
        }
        FUN_00bb8ce4(uVar2,2);
      }
      else {
        FUN_00bb8cdc(param_3 - uVar2);
      }
    }
    else {
      FUN_00bb8cc4(uVar1,2);
    }
  }
  uVar3 = 0;
  *(undefined1 *)param_1 = 0;
LAB_00bc61b4:
  *(undefined1 *)(param_1 + 2) = uVar3;
  return;
}


// ===== 00bc61e8  FUN_00bc61e8 =====

void FUN_00bc61e8(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  pvVar1 = (void *)param_1[1];
  *param_1 = &PTR_FUN_00d47e30;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  pvVar2 = (void *)param_1[2];
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
      param_1[2] = pvVar1;
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


// ===== 00bc6294  FUN_00bc6294 =====

void FUN_00bc6294(long param_1,long *param_2)

{
  ushort *puVar1;
  ulong uVar2;
  undefined2 *puVar3;
  code *pcVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  
  uVar9 = *(long *)(param_1 + 0x10) - *(long *)(param_1 + 8);
  lVar10 = param_2[1] - *param_2;
  uVar2 = uVar9 + 8;
  FUN_004efbd8(param_2,lVar10 + uVar2);
  puVar3 = (undefined2 *)(*param_2 + lVar10);
  *puVar3 = 0x200;
  *(char *)(puVar3 + 1) = (char)(uVar2 >> 8);
  *(char *)((long)puVar3 + 3) = (char)uVar2;
  if (0xfffffffffffffff7 < uVar9) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../net/dcsctp/packet/bounded_byte_writer.h",0x3f,"data.size() >= FixedSize",
                 &DAT_001f5fa0);
  }
  lVar8 = *param_2;
  lVar7 = lVar8 + lVar10;
  uVar5 = *(long *)(param_1 + 0x10) - *(long *)(param_1 + 8);
  *(char *)(lVar7 + 4) = (char)(uVar5 >> 0x19);
  *(char *)(lVar7 + 5) = (char)(uVar5 >> 0x11);
  *(char *)(lVar7 + 6) = (char)(uVar5 >> 9);
  *(char *)(lVar7 + 7) = (char)(uVar5 >> 1);
  lVar7 = *(long *)(param_1 + 8);
  if (*(long *)(param_1 + 0x10) != lVar7) {
    lVar6 = 0;
    uVar5 = 0;
    do {
      if (uVar2 < lVar6 + 10U) {
                    /* WARNING: Subroutine does not return */
        FUN_0061fd88("../../net/dcsctp/packet/bounded_byte_writer.h",0x58,
                     "FixedSize + variable_offset + SubSize <= data_.size()",&DAT_001f5fa0);
      }
      if ((uVar2 < lVar6 + 8U) || (uVar9 >> 1 == uVar5)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0xbc63b0);
        (*pcVar4)();
      }
      puVar1 = (ushort *)(lVar7 + lVar6);
      lVar7 = lVar10 + lVar8 + lVar6;
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 2;
      *(ushort *)(lVar7 + 8) = *puVar1 >> 8 | (ushort)((*puVar1 & 0xff00ff) << 8);
      lVar7 = *(long *)(param_1 + 8);
    } while (uVar5 < (ulong)(*(long *)(param_1 + 0x10) - lVar7 >> 1));
  }
  return;
}


// ===== 00bc63f0  FUN_00bc63f0 =====

void FUN_00bc63f0(undefined8 *param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 *local_50;
  ulong uStack_48;
  byte bStack_39;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_00547cac(&local_38,"Missing Mandatory Parameter, missing_parameter_types=",0x35);
  FUN_00bc64a0(&local_50,param_2 + 8,&DAT_001ea264,1);
  ppuVar1 = (undefined1 **)local_50;
  if (-1 < (char)bStack_39) {
    uStack_48 = (ulong)bStack_39;
    ppuVar1 = &local_50;
  }
  FUN_00547cac(&local_38,ppuVar1,uStack_48);
  if ((char)bStack_39 < '\0') {
    operator_delete(local_50);
  }
  param_1[1] = uStack_30;
  *param_1 = local_38;
  param_1[2] = local_28;
  return;
}


// ===== 00bc64a0  FUN_00bc64a0 =====

void FUN_00bc64a0(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined2 *puVar2;
  undefined8 ***pppuVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 **local_68;
  ulong uStack_60;
  ulong local_58;
  
  puVar4 = (undefined2 *)*param_2;
  puVar2 = (undefined2 *)param_2[1];
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  if (puVar4 != puVar2) {
    iVar5 = 0;
    do {
      if (0 < iVar5) {
        FUN_00547cac(&local_80,param_3,param_4);
      }
      local_68 = (undefined8 ***)0x0;
      uStack_60 = 0;
      local_58 = 0;
      FUN_005f55c4(&local_68,0x16,*puVar4);
      uVar1 = uStack_60;
      pppuVar3 = (undefined8 ***)local_68;
      if (-1 < (long)local_58) {
        uVar1 = local_58 >> 0x38;
        pppuVar3 = &local_68;
      }
      FUN_00547cac(&local_80,pppuVar3,uVar1);
      if ((long)local_58 < 0) {
        operator_delete(local_68);
      }
      puVar4 = puVar4 + 1;
      iVar5 = iVar5 + 1;
    } while (puVar4 != puVar2);
  }
  param_1[1] = uStack_78;
  *param_1 = local_80;
  param_1[2] = local_70;
  return;
}


// ===== 00bc6598  FUN_00bc6598 =====

void FUN_00bc6598(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  pvVar1 = (void *)param_1[1];
  *param_1 = &PTR_FUN_00d47e30;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[2];
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
    while (pvVar2 != pvVar1) {
      pvVar2 = (void *)((long)pvVar2 + -2);
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    param_1[2] = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 00bc6658  FUN_00bc6658 =====

void FUN_00bc6658(undefined8 *param_1,ushort *param_2,ulong param_3)

{
  uint uVar1;
  undefined1 uVar2;
  
  if (param_3 < 8) {
    FUN_00bb8cbc(param_3,8);
  }
  else {
    uVar1 = (uint)(*param_2 >> 8) | (*param_2 & 0xff00ff) << 8;
    if (uVar1 == 3) {
      uVar1 = (uint)(param_2[1] >> 8) | (param_2[1] & 0xff00ff) << 8;
      if ((param_3 == 8) && (uVar1 == 8)) {
        uVar1 = *(uint *)(param_2 + 2);
        *param_1 = &PTR_FUN_00d47e60;
        uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
        *(uint *)(param_1 + 1) = uVar1 >> 0x10 | uVar1 << 0x10;
        uVar2 = 1;
        goto LAB_00bc66f0;
      }
      FUN_00bb8ccc(uVar1,8);
    }
    else {
      FUN_00bb8cc4(uVar1,3);
    }
  }
  uVar2 = 0;
  *(undefined1 *)param_1 = 0;
LAB_00bc66f0:
  *(undefined1 *)(param_1 + 2) = uVar2;
  return;
}


// ===== 00bc6704  FUN_00bc6704 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bc6704(long param_1,long *param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  lVar2 = param_2[1] - *param_2;
  FUN_004efbd8(param_2,lVar2 + 8);
  *(int *)(*param_2 + lVar2) = (int)DAT_001f4f60;
  uVar1 = *(undefined4 *)(param_1 + 8);
  auVar3._4_4_ = uVar1;
  auVar3._0_4_ = uVar1;
  auVar3._8_4_ = uVar1;
  auVar3._12_4_ = uVar1;
  auVar3 = NEON_ushl(auVar3,_DAT_001f3910,4);
  *(uint *)(*param_2 + lVar2 + 4) =
       CONCAT13(auVar3[0xc],CONCAT12(auVar3[8],CONCAT11(auVar3[4],auVar3[0])));
  return;
}


// ===== 00bc6780  FUN_00bc6780 =====

void FUN_00bc6780(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 **local_38;
  ulong uStack_30;
  ulong local_28;
  
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  FUN_00547cac(&local_50,"Stale Cookie Error, staleness_us=",0x21);
  local_38 = (undefined8 ***)0x0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_005fa03c(&local_38,0x16,*(undefined4 *)(param_2 + 8));
  uVar1 = uStack_30;
  pppuVar2 = (undefined8 ***)local_38;
  if (-1 < (long)local_28) {
    uVar1 = local_28 >> 0x38;
    pppuVar2 = &local_38;
  }
  FUN_00547cac(&local_50,pppuVar2,uVar1);
  if ((long)local_28 < 0) {
    operator_delete(local_38);
  }
  param_1[1] = uStack_48;
  *param_1 = local_50;
  param_1[2] = local_40;
  return;
}


// ===== 00bc6830  FUN_00bc6830 =====

void FUN_00bc6830(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00bc683c  FUN_00bc683c =====

void FUN_00bc683c(undefined8 *param_1,ushort *param_2,ulong param_3)

{
  uint uVar1;
  undefined1 uVar2;
  
  if (param_3 < 4) {
    FUN_00bb8cbc(param_3,4);
  }
  else {
    uVar1 = (uint)(*param_2 >> 8) | (*param_2 & 0xff00ff) << 8;
    if (uVar1 == 4) {
      uVar1 = (uint)(param_2[1] >> 8) | (param_2[1] & 0xff00ff) << 8;
      if ((param_3 == 4) && (uVar1 == 4)) {
        *param_1 = &PTR_FUN_00d47e90;
        uVar2 = 1;
        goto LAB_00bc68c4;
      }
      FUN_00bb8ccc(uVar1,4);
    }
    else {
      FUN_00bb8cc4(uVar1,4);
    }
  }
  uVar2 = 0;
  *(undefined1 *)param_1 = 0;
LAB_00bc68c4:
  *(undefined1 *)(param_1 + 1) = uVar2;
  return;
}


// ===== 00bc68d8  FUN_00bc68d8 =====

void FUN_00bc68d8(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_2;
  lVar2 = param_2[1];
  FUN_004efbd8(param_2,(lVar2 - lVar1) + 4);
  *(undefined4 *)(*param_2 + (lVar2 - lVar1)) = 0x4000400;
  return;
}


// ===== 00bc691c  FUN_00bc691c =====

void FUN_00bc691c(undefined8 param_1)

{
  FUN_005d3510(param_1,"Out Of Resource");
  return;
}


// ===== 00bc6930  FUN_00bc6930 =====

void FUN_00bc6930(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00bc693c  FUN_00bc693c =====

void FUN_00bc693c(undefined8 *param_1,ushort *param_2,ulong param_3)

{
  ushort *puVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 uVar8;
  ushort *puVar9;
  ushort *puVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  if (param_3 < 4) {
    FUN_00bb8cbc(param_3,4);
  }
  else {
    uVar4 = (uint)(*param_2 >> 8) | (*param_2 & 0xff00ff) << 8;
    if (uVar4 == 5) {
      uVar4 = (uint)(param_2[1] >> 8) | (param_2[1] & 0xff00ff) << 8;
      uVar14 = (ulong)uVar4;
      if ((uVar4 < 4) || (param_3 < uVar14)) {
        FUN_00bb8cd4(uVar14);
      }
      else {
        if (param_3 - uVar14 < 4) {
          uVar5 = uVar14 - 4;
          puVar1 = param_2 + 2;
          if (uVar5 == 0) {
            puVar6 = (undefined1 *)0x0;
            lVar13 = 0;
            puVar7 = (undefined1 *)0x0;
          }
          else {
            if ((long)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_005d34c0();
            }
            puVar6 = (undefined1 *)operator_new(uVar5);
            uVar14 = uVar14 - 5;
            puVar7 = puVar6 + uVar5;
            uVar3 = uVar14;
            if ((ulong)-(long)puVar6 < uVar14) {
              uVar3 = -(long)puVar6;
            }
            uVar2 = uVar3 + 1;
            puVar9 = puVar1;
            puVar11 = puVar6;
            if (0x20 < uVar2) {
              if ((ulong)-(long)puVar6 < uVar14) {
                uVar14 = -(long)puVar6;
              }
              if (((puVar6 <= puVar6 + uVar14) && (puVar1 <= (ushort *)((long)puVar1 + uVar14))) &&
                 (0x1f < (ulong)((long)puVar6 - (long)puVar1))) {
                uVar14 = 0x20;
                if ((uVar2 & 0x1f) != 0) {
                  uVar14 = uVar2 & 0x1f;
                }
                lVar13 = ~uVar3 + uVar14;
                puVar12 = (undefined8 *)(puVar6 + 0x10);
                puVar9 = (ushort *)((long)puVar1 + (uVar2 - uVar14));
                puVar11 = puVar6 + (uVar2 - uVar14);
                param_2 = param_2 + 10;
                do {
                  puVar10 = param_2 + -4;
                  uVar15 = *(undefined8 *)(param_2 + -8);
                  uVar17 = *(undefined8 *)(param_2 + 4);
                  uVar16 = *(undefined8 *)param_2;
                  lVar13 = lVar13 + 0x20;
                  param_2 = param_2 + 0x10;
                  puVar12[-1] = *(undefined8 *)puVar10;
                  puVar12[-2] = uVar15;
                  puVar12[1] = uVar17;
                  *puVar12 = uVar16;
                  puVar12 = puVar12 + 4;
                } while (lVar13 != 0);
              }
            }
            lVar13 = (long)puVar6 - (long)puVar11;
            do {
              if (puVar11 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s",
                           "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                          );
              }
              puVar10 = (ushort *)((long)puVar9 + 1);
              lVar13 = lVar13 + -1;
              *puVar11 = (char)*puVar9;
              puVar9 = puVar10;
              puVar11 = puVar11 + 1;
            } while (puVar10 != (ushort *)((long)puVar1 + uVar5));
            lVar13 = (long)puVar6 - lVar13;
          }
          param_1[2] = lVar13;
          param_1[3] = puVar7;
          uVar8 = 1;
          *param_1 = &PTR_FUN_00d47ec0;
          param_1[1] = puVar6;
          goto LAB_00bc69c8;
        }
        FUN_00bb8cdc(param_3 - uVar14);
      }
    }
    else {
      FUN_00bb8cc4(uVar4,5);
    }
  }
  uVar8 = 0;
  *(undefined1 *)param_1 = 0;
LAB_00bc69c8:
  *(undefined1 *)(param_1 + 4) = uVar8;
  return;
}


// ===== 00bc6b0c  FUN_00bc6b0c =====

void FUN_00bc6b0c(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[1];
  *param_1 = &PTR_FUN_00d47ec0;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if ((ulong)(param_1[2] - (long)pvVar1) <= param_1[2] - 1) {
    param_1[2] = pvVar1;
    operator_delete(pvVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00bc6b70  FUN_00bc6b70 =====

void FUN_00bc6b70(long param_1,long *param_2)

{
  long lVar1;
  undefined2 *puVar2;
  void *__src;
  ulong uVar3;
  long lVar4;
  size_t __n;
  
  __n = *(long *)(param_1 + 0x10) - *(long *)(param_1 + 8);
  lVar4 = param_2[1] - *param_2;
  lVar1 = __n + 4;
  FUN_004efbd8(param_2,lVar4 + lVar1);
  puVar2 = (undefined2 *)(*param_2 + lVar4);
  *puVar2 = 0x500;
  *(char *)(puVar2 + 1) = (char)((ulong)lVar1 >> 8);
  *(char *)((long)puVar2 + 3) = (char)lVar1;
  if (0xfffffffffffffffb < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../net/dcsctp/packet/bounded_byte_writer.h",0x3f,"data.size() >= FixedSize",
                 &DAT_001f5fa0);
  }
  __src = *(void **)(param_1 + 8);
  uVar3 = (long)*(void **)(param_1 + 0x10) - (long)__src;
  if (uVar3 <= __n) {
    __n = uVar3;
  }
  if (((__src != (void *)0x0) && (*(void **)(param_1 + 0x10) != __src)) && (__n != 0)) {
    memcpy((void *)(*param_2 + lVar4 + 4),__src,__n);
    return;
  }
  return;
}


// ===== 00bc6c50  FUN_00bc6c50 =====

void FUN_00bc6c50(undefined8 param_1)

{
  FUN_005d3510(param_1,"Unresolvable Address");
  return;
}


// ===== 00bc6c64  FUN_00bc6c64 =====

void FUN_00bc6c64(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[1];
  *param_1 = &PTR_FUN_00d47ec0;
  if (pvVar1 != (void *)0x0) {
    if (param_1[2] - 1 < (ulong)(param_1[2] - (long)pvVar1)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    param_1[2] = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 00bc6cdc  FUN_00bc6cdc =====

void FUN_00bc6cdc(undefined8 *param_1,ushort *param_2,ulong param_3)

{
  ushort *puVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 uVar8;
  ushort *puVar9;
  ushort *puVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  if (param_3 < 4) {
    FUN_00bb8cbc(param_3,4);
  }
  else {
    uVar4 = (uint)(*param_2 >> 8) | (*param_2 & 0xff00ff) << 8;
    if (uVar4 == 6) {
      uVar4 = (uint)(param_2[1] >> 8) | (param_2[1] & 0xff00ff) << 8;
      uVar14 = (ulong)uVar4;
      if ((uVar4 < 4) || (param_3 < uVar14)) {
        FUN_00bb8cd4(uVar14);
      }
      else {
        if (param_3 - uVar14 < 4) {
          uVar5 = uVar14 - 4;
          puVar1 = param_2 + 2;
          if (uVar5 == 0) {
            puVar7 = (undefined1 *)0x0;
            lVar13 = 0;
            puVar6 = (undefined1 *)0x0;
          }
          else {
            if ((long)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_005d34c0();
            }
            puVar6 = (undefined1 *)operator_new(uVar5);
            uVar14 = uVar14 - 5;
            puVar7 = puVar6 + uVar5;
            uVar3 = uVar14;
            if ((ulong)-(long)puVar6 < uVar14) {
              uVar3 = -(long)puVar6;
            }
            uVar2 = uVar3 + 1;
            puVar9 = puVar1;
            puVar11 = puVar6;
            if (0x20 < uVar2) {
              if ((ulong)-(long)puVar6 < uVar14) {
                uVar14 = -(long)puVar6;
              }
              if (((puVar6 <= puVar6 + uVar14) && (puVar1 <= (ushort *)((long)puVar1 + uVar14))) &&
                 (0x1f < (ulong)((long)puVar6 - (long)puVar1))) {
                uVar14 = 0x20;
                if ((uVar2 & 0x1f) != 0) {
                  uVar14 = uVar2 & 0x1f;
                }
                lVar13 = ~uVar3 + uVar14;
                puVar12 = (undefined8 *)(puVar6 + 0x10);
                puVar9 = (ushort *)((long)puVar1 + (uVar2 - uVar14));
                puVar11 = puVar6 + (uVar2 - uVar14);
                param_2 = param_2 + 10;
                do {
                  puVar10 = param_2 + -4;
                  uVar15 = *(undefined8 *)(param_2 + -8);
                  uVar17 = *(undefined8 *)(param_2 + 4);
                  uVar16 = *(undefined8 *)param_2;
                  lVar13 = lVar13 + 0x20;
                  param_2 = param_2 + 0x10;
                  puVar12[-1] = *(undefined8 *)puVar10;
                  puVar12[-2] = uVar15;
                  puVar12[1] = uVar17;
                  *puVar12 = uVar16;
                  puVar12 = puVar12 + 4;
                } while (lVar13 != 0);
              }
            }
            lVar13 = (long)puVar6 - (long)puVar11;
            do {
              if (puVar11 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s",
                           "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                          );
              }
              puVar10 = (ushort *)((long)puVar9 + 1);
              lVar13 = lVar13 + -1;
              *puVar11 = (char)*puVar9;
              puVar9 = puVar10;
              puVar11 = puVar11 + 1;
            } while (puVar10 != (ushort *)((long)puVar1 + uVar5));
            lVar13 = (long)puVar6 - lVar13;
          }
          param_1[2] = lVar13;
          param_1[3] = puVar7;
          uVar8 = 1;
          *param_1 = &PTR_FUN_00d47ef0;
          param_1[1] = puVar6;
          goto LAB_00bc6d68;
        }
        FUN_00bb8cdc(param_3 - uVar14);
      }
    }
    else {
      FUN_00bb8cc4(uVar4,6);
    }
  }
  uVar8 = 0;
  *(undefined1 *)param_1 = 0;
LAB_00bc6d68:
  *(undefined1 *)(param_1 + 4) = uVar8;
  return;
}


// ===== 00bc6eac  FUN_00bc6eac =====

void FUN_00bc6eac(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[1];
  *param_1 = &PTR_FUN_00d47ef0;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if ((ulong)(param_1[2] - (long)pvVar1) <= param_1[2] - 1) {
    param_1[2] = pvVar1;
    operator_delete(pvVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00bc6f10  FUN_00bc6f10 =====

void FUN_00bc6f10(long param_1,long *param_2)

{
  long lVar1;
  undefined2 *puVar2;
  void *__src;
  ulong uVar3;
  long lVar4;
  size_t __n;
  
  __n = *(long *)(param_1 + 0x10) - *(long *)(param_1 + 8);
  lVar4 = param_2[1] - *param_2;
  lVar1 = __n + 4;
  FUN_004efbd8(param_2,lVar4 + lVar1);
  puVar2 = (undefined2 *)(*param_2 + lVar4);
  *puVar2 = 0x600;
  *(char *)(puVar2 + 1) = (char)((ulong)lVar1 >> 8);
  *(char *)((long)puVar2 + 3) = (char)lVar1;
  if (0xfffffffffffffffb < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../net/dcsctp/packet/bounded_byte_writer.h",0x3f,"data.size() >= FixedSize",
                 &DAT_001f5fa0);
  }
  __src = *(void **)(param_1 + 8);
  uVar3 = (long)*(void **)(param_1 + 0x10) - (long)__src;
  if (uVar3 <= __n) {
    __n = uVar3;
  }
  if (((__src != (void *)0x0) && (*(void **)(param_1 + 0x10) != __src)) && (__n != 0)) {
    memcpy((void *)(*param_2 + lVar4 + 4),__src,__n);
    return;
  }
  return;
}


// ===== 00bc6ff0  FUN_00bc6ff0 =====

void FUN_00bc6ff0(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 **local_38;
  ulong uStack_30;
  ulong local_28;
  
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  FUN_00547cac(&local_50,"Unrecognized Chunk Type, chunk_type=",0x24);
  if (*(undefined1 **)(param_2 + 8) == *(undefined1 **)(param_2 + 0x10)) {
    FUN_00547cac(&local_50,"<missing>",9);
  }
  else {
    local_38 = (undefined8 ***)0x0;
    uStack_30 = 0;
    local_28 = 0;
    FUN_005f55c4(&local_38,0x16,**(undefined1 **)(param_2 + 8));
    uVar1 = uStack_30;
    pppuVar2 = (undefined8 ***)local_38;
    if (-1 < (long)local_28) {
      uVar1 = local_28 >> 0x38;
      pppuVar2 = &local_38;
    }
    FUN_00547cac(&local_50,pppuVar2,uVar1);
    if ((long)local_28 < 0) {
      operator_delete(local_38);
    }
  }
  param_1[1] = uStack_48;
  *param_1 = local_50;
  param_1[2] = local_40;
  return;
}


// ===== 00bc70c4  FUN_00bc70c4 =====

void FUN_00bc70c4(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[1];
  *param_1 = &PTR_FUN_00d47ef0;
  if (pvVar1 != (void *)0x0) {
    if (param_1[2] - 1 < (ulong)(param_1[2] - (long)pvVar1)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    param_1[2] = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 00bc713c  FUN_00bc713c =====

void FUN_00bc713c(undefined8 *param_1,ushort *param_2,ulong param_3)

{
  uint uVar1;
  undefined1 uVar2;
  
  if (param_3 < 4) {
    FUN_00bb8cbc(param_3,4);
  }
  else {
    uVar1 = (uint)(*param_2 >> 8) | (*param_2 & 0xff00ff) << 8;
    if (uVar1 == 7) {
      uVar1 = (uint)(param_2[1] >> 8) | (param_2[1] & 0xff00ff) << 8;
      if ((param_3 == 4) && (uVar1 == 4)) {
        *param_1 = &PTR_FUN_00d47f20;
        uVar2 = 1;
        goto LAB_00bc71c4;
      }
      FUN_00bb8ccc(uVar1,4);
    }
    else {
      FUN_00bb8cc4(uVar1,7);
    }
  }
  uVar2 = 0;
  *(undefined1 *)param_1 = 0;
LAB_00bc71c4:
  *(undefined1 *)(param_1 + 1) = uVar2;
  return;
}


// ===== 00bc71d8  FUN_00bc71d8 =====

void FUN_00bc71d8(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_2;
  lVar2 = param_2[1];
  FUN_004efbd8(param_2,(lVar2 - lVar1) + 4);
  *(int *)(*param_2 + (lVar2 - lVar1)) = (int)DAT_001f5268;
  return;
}


// ===== 00bc7220  FUN_00bc7220 =====

void FUN_00bc7220(undefined8 param_1)

{
  FUN_005d3510(param_1,"Invalid Mandatory Parameter");
  return;
}


// ===== 00bc7234  FUN_00bc7234 =====

void FUN_00bc7234(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00bc7240  FUN_00bc7240 =====

void FUN_00bc7240(undefined8 *param_1,ushort *param_2,ulong param_3)

{
  ushort *puVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 uVar8;
  ushort *puVar9;
  ushort *puVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  if (param_3 < 4) {
    FUN_00bb8cbc(param_3,4);
  }
  else {
    uVar4 = (uint)(*param_2 >> 8) | (*param_2 & 0xff00ff) << 8;
    if (uVar4 == 8) {
      uVar4 = (uint)(param_2[1] >> 8) | (param_2[1] & 0xff00ff) << 8;
      uVar14 = (ulong)uVar4;
      if ((uVar4 < 4) || (param_3 < uVar14)) {
        FUN_00bb8cd4(uVar14);
      }
      else {
        if (param_3 - uVar14 < 4) {
          uVar5 = uVar14 - 4;
          puVar1 = param_2 + 2;
          if (uVar5 == 0) {
            puVar6 = (undefined1 *)0x0;
            lVar13 = 0;
            puVar7 = (undefined1 *)0x0;
          }
          else {
            if ((long)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_005d34c0();
            }
            puVar6 = (undefined1 *)operator_new(uVar5);
            uVar14 = uVar14 - 5;
            puVar7 = puVar6 + uVar5;
            uVar3 = uVar14;
            if ((ulong)-(long)puVar6 < uVar14) {
              uVar3 = -(long)puVar6;
            }
            uVar2 = uVar3 + 1;
            puVar9 = puVar1;
            puVar11 = puVar6;
            if (0x20 < uVar2) {
              if ((ulong)-(long)puVar6 < uVar14) {
                uVar14 = -(long)puVar6;
              }
              if (((puVar6 <= puVar6 + uVar14) && (puVar1 <= (ushort *)((long)puVar1 + uVar14))) &&
                 (0x1f < (ulong)((long)puVar6 - (long)puVar1))) {
                uVar14 = 0x20;
                if ((uVar2 & 0x1f) != 0) {
                  uVar14 = uVar2 & 0x1f;
                }
                lVar13 = ~uVar3 + uVar14;
                puVar12 = (undefined8 *)(puVar6 + 0x10);
                puVar9 = (ushort *)((long)puVar1 + (uVar2 - uVar14));
                puVar11 = puVar6 + (uVar2 - uVar14);
                param_2 = param_2 + 10;
                do {
                  puVar10 = param_2 + -4;
                  uVar15 = *(undefined8 *)(param_2 + -8);
                  uVar17 = *(undefined8 *)(param_2 + 4);
                  uVar16 = *(undefined8 *)param_2;
                  lVar13 = lVar13 + 0x20;
                  param_2 = param_2 + 0x10;
                  puVar12[-1] = *(undefined8 *)puVar10;
                  puVar12[-2] = uVar15;
                  puVar12[1] = uVar17;
                  *puVar12 = uVar16;
                  puVar12 = puVar12 + 4;
                } while (lVar13 != 0);
              }
            }
            lVar13 = (long)puVar6 - (long)puVar11;
            do {
              if (puVar11 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s",
                           "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                          );
              }
              puVar10 = (ushort *)((long)puVar9 + 1);
              lVar13 = lVar13 + -1;
              *puVar11 = (char)*puVar9;
              puVar9 = puVar10;
              puVar11 = puVar11 + 1;
            } while (puVar10 != (ushort *)((long)puVar1 + uVar5));
            lVar13 = (long)puVar6 - lVar13;
          }
          param_1[2] = lVar13;
          param_1[3] = puVar7;
          uVar8 = 1;
          *param_1 = &PTR_FUN_00d47f50;
          param_1[1] = puVar6;
          goto LAB_00bc72cc;
        }
        FUN_00bb8cdc(param_3 - uVar14);
      }
    }
    else {
      FUN_00bb8cc4(uVar4,8);
    }
  }
  uVar8 = 0;
  *(undefined1 *)param_1 = 0;
LAB_00bc72cc:
  *(undefined1 *)(param_1 + 4) = uVar8;
  return;
}


// ===== 00bc7410  FUN_00bc7410 =====

void FUN_00bc7410(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[1];
  *param_1 = &PTR_FUN_00d47f50;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if ((ulong)(param_1[2] - (long)pvVar1) <= param_1[2] - 1) {
    param_1[2] = pvVar1;
    operator_delete(pvVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00bc7474  FUN_00bc7474 =====

void FUN_00bc7474(long param_1,long *param_2)

{
  long lVar1;
  undefined2 *puVar2;
  void *__src;
  ulong uVar3;
  long lVar4;
  size_t __n;
  
  __n = *(long *)(param_1 + 0x10) - *(long *)(param_1 + 8);
  lVar4 = param_2[1] - *param_2;
  lVar1 = __n + 4;
  FUN_004efbd8(param_2,lVar4 + lVar1);
  puVar2 = (undefined2 *)(*param_2 + lVar4);
  *puVar2 = 0x800;
  *(char *)(puVar2 + 1) = (char)((ulong)lVar1 >> 8);
  *(char *)((long)puVar2 + 3) = (char)lVar1;
  if (0xfffffffffffffffb < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../net/dcsctp/packet/bounded_byte_writer.h",0x3f,"data.size() >= FixedSize",
                 &DAT_001f5fa0);
  }
  __src = *(void **)(param_1 + 8);
  uVar3 = (long)*(void **)(param_1 + 0x10) - (long)__src;
  if (uVar3 <= __n) {
    __n = uVar3;
  }
  if (((__src != (void *)0x0) && (*(void **)(param_1 + 0x10) != __src)) && (__n != 0)) {
    memcpy((void *)(*param_2 + lVar4 + 4),__src,__n);
    return;
  }
  return;
}


// ===== 00bc7554  FUN_00bc7554 =====

void FUN_00bc7554(undefined8 param_1)

{
  FUN_005d3510(param_1,"Unrecognized Parameters");
  return;
}


// ===== 00bc7568  FUN_00bc7568 =====

void FUN_00bc7568(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[1];
  *param_1 = &PTR_FUN_00d47f50;
  if (pvVar1 != (void *)0x0) {
    if (param_1[2] - 1 < (ulong)(param_1[2] - (long)pvVar1)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    param_1[2] = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 00bc75e0  FUN_00bc75e0 =====

void FUN_00bc75e0(undefined8 *param_1,ushort *param_2,ulong param_3)

{
  uint uVar1;
  undefined1 uVar2;
  
  if (param_3 < 8) {
    FUN_00bb8cbc(param_3,8);
  }
  else {
    uVar1 = (uint)(*param_2 >> 8) | (*param_2 & 0xff00ff) << 8;
    if (uVar1 == 9) {
      uVar1 = (uint)(param_2[1] >> 8) | (param_2[1] & 0xff00ff) << 8;
      if ((param_3 == 8) && (uVar1 == 8)) {
        uVar1 = *(uint *)(param_2 + 2);
        *param_1 = &PTR_FUN_00d47f80;
        uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
        *(uint *)(param_1 + 1) = uVar1 >> 0x10 | uVar1 << 0x10;
        uVar2 = 1;
        goto LAB_00bc7678;
      }
      FUN_00bb8ccc(uVar1,8);
    }
    else {
      FUN_00bb8cc4(uVar1,9);
    }
  }
  uVar2 = 0;
  *(undefined1 *)param_1 = 0;
LAB_00bc7678:
  *(undefined1 *)(param_1 + 2) = uVar2;
  return;
}


// ===== 00bc768c  FUN_00bc768c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bc768c(long param_1,long *param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  lVar2 = param_2[1] - *param_2;
  FUN_004efbd8(param_2,lVar2 + 8);
  *(int *)(*param_2 + lVar2) = (int)DAT_001f57e0;
  uVar1 = *(undefined4 *)(param_1 + 8);
  auVar3._4_4_ = uVar1;
  auVar3._0_4_ = uVar1;
  auVar3._8_4_ = uVar1;
  auVar3._12_4_ = uVar1;
  auVar3 = NEON_ushl(auVar3,_DAT_001f3910,4);
  *(uint *)(*param_2 + lVar2 + 4) =
       CONCAT13(auVar3[0xc],CONCAT12(auVar3[8],CONCAT11(auVar3[4],auVar3[0])));
  return;
}


// ===== 00bc7708  FUN_00bc7708 =====

void FUN_00bc7708(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 **local_38;
  ulong uStack_30;
  ulong local_28;
  
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  FUN_00547cac(&local_50,"No User Data, tsn=",0x12);
  local_38 = (undefined8 ***)0x0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_005fa03c(&local_38,0x16,*(undefined4 *)(param_2 + 8));
  uVar1 = uStack_30;
  pppuVar2 = (undefined8 ***)local_38;
  if (-1 < (long)local_28) {
    uVar1 = local_28 >> 0x38;
    pppuVar2 = &local_38;
  }
  FUN_00547cac(&local_50,pppuVar2,uVar1);
  if ((long)local_28 < 0) {
    operator_delete(local_38);
  }
  param_1[1] = uStack_48;
  *param_1 = local_50;
  param_1[2] = local_40;
  return;
}


// ===== 00bc77b8  FUN_00bc77b8 =====

void FUN_00bc77b8(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00bc77c4  FUN_00bc77c4 =====

void FUN_00bc77c4(undefined8 *param_1,ushort *param_2,ulong param_3)

{
  uint uVar1;
  undefined1 uVar2;
  
  if (param_3 < 4) {
    FUN_00bb8cbc(param_3,4);
  }
  else {
    uVar1 = (uint)(*param_2 >> 8) | (*param_2 & 0xff00ff) << 8;
    if (uVar1 == 10) {
      uVar1 = (uint)(param_2[1] >> 8) | (param_2[1] & 0xff00ff) << 8;
      if ((param_3 == 4) && (uVar1 == 4)) {
        *param_1 = &PTR_FUN_00d47fb0;
        uVar2 = 1;
        goto LAB_00bc784c;
      }
      FUN_00bb8ccc(uVar1,4);
    }
    else {
      FUN_00bb8cc4(uVar1,10);
    }
  }
  uVar2 = 0;
  *(undefined1 *)param_1 = 0;
LAB_00bc784c:
  *(undefined1 *)(param_1 + 1) = uVar2;
  return;
}


// ===== 00bc7860  FUN_00bc7860 =====

void FUN_00bc7860(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_2;
  lVar2 = param_2[1];
  FUN_004efbd8(param_2,(lVar2 - lVar1) + 4);
  *(int *)(*param_2 + (lVar2 - lVar1)) = (int)DAT_001f5988;
  return;
}


// ===== 00bc78a8  FUN_00bc78a8 =====

void FUN_00bc78a8(undefined8 param_1)

{
  FUN_005d3510(param_1,"Cookie Received While Shutting Down");
  return;
}


// ===== 00bc78bc  FUN_00bc78bc =====

void FUN_00bc78bc(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00bc78c8  FUN_00bc78c8 =====

void FUN_00bc78c8(undefined8 *param_1,ushort *param_2,ulong param_3)

{
  ushort *puVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 uVar8;
  ushort *puVar9;
  ushort *puVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  if (param_3 < 4) {
    FUN_00bb8cbc(param_3,4);
  }
  else {
    uVar4 = (uint)(*param_2 >> 8) | (*param_2 & 0xff00ff) << 8;
    if (uVar4 == 0xb) {
      uVar4 = (uint)(param_2[1] >> 8) | (param_2[1] & 0xff00ff) << 8;
      uVar14 = (ulong)uVar4;
      if ((uVar4 < 4) || (param_3 < uVar14)) {
        FUN_00bb8cd4(uVar14);
      }
      else {
        if (param_3 - uVar14 < 4) {
          uVar5 = uVar14 - 4;
          puVar1 = param_2 + 2;
          if (uVar5 == 0) {
            puVar6 = (undefined1 *)0x0;
            lVar13 = 0;
            puVar7 = (undefined1 *)0x0;
          }
          else {
            if ((long)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_005d34c0();
            }
            puVar6 = (undefined1 *)operator_new(uVar5);
            uVar14 = uVar14 - 5;
            puVar7 = puVar6 + uVar5;
            uVar3 = uVar14;
            if ((ulong)-(long)puVar6 < uVar14) {
              uVar3 = -(long)puVar6;
            }
            uVar2 = uVar3 + 1;
            puVar9 = puVar1;
            puVar11 = puVar6;
            if (0x20 < uVar2) {
              if ((ulong)-(long)puVar6 < uVar14) {
                uVar14 = -(long)puVar6;
              }
              if (((puVar6 <= puVar6 + uVar14) && (puVar1 <= (ushort *)((long)puVar1 + uVar14))) &&
                 (0x1f < (ulong)((long)puVar6 - (long)puVar1))) {
                uVar14 = 0x20;
                if ((uVar2 & 0x1f) != 0) {
                  uVar14 = uVar2 & 0x1f;
                }
                lVar13 = ~uVar3 + uVar14;
                puVar12 = (undefined8 *)(puVar6 + 0x10);
                puVar9 = (ushort *)((long)puVar1 + (uVar2 - uVar14));
                puVar11 = puVar6 + (uVar2 - uVar14);
                param_2 = param_2 + 10;
                do {
                  puVar10 = param_2 + -4;
                  uVar15 = *(undefined8 *)(param_2 + -8);
                  uVar17 = *(undefined8 *)(param_2 + 4);
                  uVar16 = *(undefined8 *)param_2;
                  lVar13 = lVar13 + 0x20;
                  param_2 = param_2 + 0x10;
                  puVar12[-1] = *(undefined8 *)puVar10;
                  puVar12[-2] = uVar15;
                  puVar12[1] = uVar17;
                  *puVar12 = uVar16;
                  puVar12 = puVar12 + 4;
                } while (lVar13 != 0);
              }
            }
            lVar13 = (long)puVar6 - (long)puVar11;
            do {
              if (puVar11 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s",
                           "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                          );
              }
              puVar10 = (ushort *)((long)puVar9 + 1);
              lVar13 = lVar13 + -1;
              *puVar11 = (char)*puVar9;
              puVar9 = puVar10;
              puVar11 = puVar11 + 1;
            } while (puVar10 != (ushort *)((long)puVar1 + uVar5));
            lVar13 = (long)puVar6 - lVar13;
          }
          param_1[2] = lVar13;
          param_1[3] = puVar7;
          uVar8 = 1;
          *param_1 = &PTR_FUN_00d47fe0;
          param_1[1] = puVar6;
          goto LAB_00bc7954;
        }
        FUN_00bb8cdc(param_3 - uVar14);
      }
    }
    else {
      FUN_00bb8cc4(uVar4,0xb);
    }
  }
  uVar8 = 0;
  *(undefined1 *)param_1 = 0;
LAB_00bc7954:
  *(undefined1 *)(param_1 + 4) = uVar8;
  return;
}


// ===== 00bc7a98  FUN_00bc7a98 =====

void FUN_00bc7a98(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[1];
  *param_1 = &PTR_FUN_00d47fe0;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if ((ulong)(param_1[2] - (long)pvVar1) <= param_1[2] - 1) {
    param_1[2] = pvVar1;
    operator_delete(pvVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00bc7afc  FUN_00bc7afc =====

void FUN_00bc7afc(long param_1,long *param_2)

{
  long lVar1;
  undefined2 *puVar2;
  void *__src;
  ulong uVar3;
  long lVar4;
  size_t __n;
  
  __n = *(long *)(param_1 + 0x10) - *(long *)(param_1 + 8);
  lVar4 = param_2[1] - *param_2;
  lVar1 = __n + 4;
  FUN_004efbd8(param_2,lVar4 + lVar1);
  puVar2 = (undefined2 *)(*param_2 + lVar4);
  *puVar2 = 0xb00;
  *(char *)(puVar2 + 1) = (char)((ulong)lVar1 >> 8);
  *(char *)((long)puVar2 + 3) = (char)lVar1;
  if (0xfffffffffffffffb < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../net/dcsctp/packet/bounded_byte_writer.h",0x3f,"data.size() >= FixedSize",
                 &DAT_001f5fa0);
  }
  __src = *(void **)(param_1 + 8);
  uVar3 = (long)*(void **)(param_1 + 0x10) - (long)__src;
  if (uVar3 <= __n) {
    __n = uVar3;
  }
  if (((__src != (void *)0x0) && (*(void **)(param_1 + 0x10) != __src)) && (__n != 0)) {
    memcpy((void *)(*param_2 + lVar4 + 4),__src,__n);
    return;
  }
  return;
}


// ===== 00bc7bdc  FUN_00bc7bdc =====

void FUN_00bc7bdc(undefined8 param_1)

{
  FUN_005d3510(param_1,"Restart of an Association with New Addresses");
  return;
}


// ===== 00bc7bf0  FUN_00bc7bf0 =====

void FUN_00bc7bf0(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[1];
  *param_1 = &PTR_FUN_00d47fe0;
  if (pvVar1 != (void *)0x0) {
    if (param_1[2] - 1 < (ulong)(param_1[2] - (long)pvVar1)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    param_1[2] = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 00bc7c68  FUN_00bc7c68 =====

void FUN_00bc7c68(undefined8 *param_1)

{
  bool bVar1;
  undefined1 *puVar2;
  code *pcVar3;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00bc7d2c(&local_40);
  if (((ulong)local_30 & 1) == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 4) = 0;
  }
  else {
    puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    local_48 = &DAT_aaaaaaaaaaaaaaaa;
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    if (puStack_38 < (undefined1 *)0x4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0xbc7d2c);
      (*pcVar3)();
    }
    puVar2 = (undefined1 *)0x0;
    if (puStack_38 + -4 != (undefined1 *)0x0) {
      puVar2 = local_40 + 4;
    }
    FUN_00bba5d4(&local_60,puVar2,puStack_38 + -4);
    bVar1 = ((ulong)local_48 & 1) == 0;
    if (bVar1) {
      *(undefined1 *)param_1 = 0;
    }
    else {
      *param_1 = &PTR_FUN_00d48010;
      param_1[2] = puStack_58;
      param_1[1] = local_60;
      param_1[3] = local_50;
    }
    *(bool *)(param_1 + 4) = !bVar1;
  }
  return;
}


// ===== 00bc7d2c  FUN_00bc7d2c =====

void FUN_00bc7d2c(undefined8 *param_1,char *param_2,ulong param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined1 uVar3;
  
  if (param_3 < 4) {
    FUN_00bb8cbc(param_3,4);
  }
  else if (*param_2 == '\t') {
    uVar1 = (uint)CONCAT11(param_2[2],param_2[3]);
    uVar2 = (ulong)uVar1;
    if ((uVar1 < 4) || (param_3 < uVar2)) {
      FUN_00bb8cd4(uVar2);
    }
    else if (param_3 - uVar2 < 4) {
      if ((param_2[3] & 3U) == 0) {
        uVar3 = 1;
        *param_1 = param_2;
        param_1[1] = uVar2;
        goto LAB_00bc7dcc;
      }
      FUN_00bb8ce4(uVar2,4);
    }
    else {
      FUN_00bb8cdc(param_3 - uVar2);
    }
  }
  else {
    FUN_00bb8cc4(*param_2,9);
  }
  uVar3 = 0;
  *(undefined1 *)param_1 = 0;
LAB_00bc7dcc:
  *(undefined1 *)(param_1 + 2) = uVar3;
  return;
}


// ===== 00bc7dec  FUN_00bc7dec =====

void FUN_00bc7dec(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[1];
  *param_1 = &PTR_FUN_00d48010;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if ((ulong)(param_1[2] - (long)pvVar1) <= param_1[2] - 1) {
    param_1[2] = pvVar1;
    operator_delete(pvVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00bc7e50  FUN_00bc7e50 =====

void FUN_00bc7e50(long param_1,long *param_2)

{
  long lVar1;
  undefined1 *puVar2;
  void *__src;
  void *pvVar3;
  ulong __n;
  long lVar4;
  
  __src = *(void **)(param_1 + 8);
  pvVar3 = *(void **)(param_1 + 0x10);
  __n = (long)pvVar3 - (long)__src;
  lVar4 = param_2[1] - *param_2;
  lVar1 = __n + 4;
  FUN_004efbd8(param_2,lVar4 + lVar1);
  puVar2 = (undefined1 *)(*param_2 + lVar4);
  *puVar2 = 9;
  puVar2[2] = (char)((ulong)lVar1 >> 8);
  puVar2[3] = (char)lVar1;
  if (0xfffffffffffffffb < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../net/dcsctp/packet/bounded_byte_writer.h",0x3f,"data.size() >= FixedSize",
                 &DAT_001f5fa0);
  }
  if ((__src != (void *)0x0) && (pvVar3 != __src)) {
    memcpy((void *)(*param_2 + lVar4 + 4),__src,__n);
    return;
  }
  return;
}


// ===== 00bc7f20  FUN_00bc7f20 =====

void FUN_00bc7f20(undefined8 param_1)

{
  FUN_005d3510(param_1,"ERROR");
  return;
}


// ===== 00bc7f34  FUN_00bc7f34 =====

void FUN_00bc7f34(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[1];
  *param_1 = &PTR_FUN_00d48010;
  if (pvVar1 != (void *)0x0) {
    if (param_1[2] - 1 < (ulong)(param_1[2] - (long)pvVar1)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    param_1[2] = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 00bc7fac  FUN_00bc7fac =====

void FUN_00bc7fac(undefined8 *param_1,char *param_2,ulong param_3)

{
  uint uVar1;
  undefined1 uVar2;
  
  if (param_3 < 4) {
    FUN_00bb8cbc(param_3,4);
  }
  else if (*param_2 == '\v') {
    uVar1 = (uint)(*(ushort *)(param_2 + 2) >> 8) | (*(ushort *)(param_2 + 2) & 0xff00ff) << 8;
    if ((param_3 == 4) && (uVar1 == 4)) {
      *param_1 = &PTR_FUN_00d48040;
      uVar2 = 1;
      goto LAB_00bc8030;
    }
    FUN_00bb8ccc(uVar1,4);
  }
  else {
    FUN_00bb8cc4(*param_2,0xb);
  }
  uVar2 = 0;
  *(undefined1 *)param_1 = 0;
LAB_00bc8030:
  *(undefined1 *)(param_1 + 1) = uVar2;
  return;
}


// ===== 00bc8044  FUN_00bc8044 =====

void FUN_00bc8044(undefined8 param_1,long *param_2)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_2;
  lVar3 = param_2[1];
  FUN_004efbd8(param_2,(lVar3 - lVar2) + 4);
  puVar1 = (undefined1 *)(*param_2 + (lVar3 - lVar2));
  *puVar1 = 0xb;
  *(undefined2 *)(puVar1 + 2) = 0x400;
  return;
}


// ===== 00bc8094  FUN_00bc8094 =====

void FUN_00bc8094(undefined8 param_1)

{
  FUN_005d3510(param_1,"COOKIE-ACK");
  return;
}


// ===== 00bc80a8  FUN_00bc80a8 =====

void FUN_00bc80a8(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00bc80b4  FUN_00bc80b4 =====

void FUN_00bc80b4(undefined8 *param_1,char *param_2,ulong param_3)

{
  uint uVar1;
  undefined1 uVar2;
  
  if (param_3 < 4) {
    FUN_00bb8cbc(param_3,4);
  }
  else if (*param_2 == '\b') {
    uVar1 = (uint)(*(ushort *)(param_2 + 2) >> 8) | (*(ushort *)(param_2 + 2) & 0xff00ff) << 8;
    if ((param_3 == 4) && (uVar1 == 4)) {
      *param_1 = &PTR_FUN_00d48070;
      uVar2 = 1;
      goto LAB_00bc8138;
    }
    FUN_00bb8ccc(uVar1,4);
  }
  else {
    FUN_00bb8cc4(*param_2,8);
  }
  uVar2 = 0;
  *(undefined1 *)param_1 = 0;
LAB_00bc8138:
  *(undefined1 *)(param_1 + 1) = uVar2;
  return;
}


// ===== 00bc814c  FUN_00bc814c =====

void FUN_00bc814c(undefined8 param_1,long *param_2)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_2;
  lVar3 = param_2[1];
  FUN_004efbd8(param_2,(lVar3 - lVar2) + 4);
  puVar1 = (undefined1 *)(*param_2 + (lVar3 - lVar2));
  *puVar1 = 8;
  *(undefined2 *)(puVar1 + 2) = 0x400;
  return;
}


// ===== 00bc819c  FUN_00bc819c =====

void FUN_00bc819c(undefined8 param_1)

{
  FUN_005d3510(param_1,"SHUTDOWN-ACK");
  return;
}


// ===== 00bc81b0  FUN_00bc81b0 =====

void FUN_00bc81b0(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00bc81bc  FUN_00bc81bc =====

void FUN_00bc81bc(undefined8 *param_1,char *param_2,ulong param_3)

{
  byte bVar1;
  uint uVar2;
  undefined1 uVar3;
  
  if (param_3 < 4) {
    FUN_00bb8cbc(param_3,4);
  }
  else if (*param_2 == '\x0e') {
    uVar2 = (uint)(*(ushort *)(param_2 + 2) >> 8) | (*(ushort *)(param_2 + 2) & 0xff00ff) << 8;
    if ((param_3 == 4) && (uVar2 == 4)) {
      bVar1 = param_2[1];
      *param_1 = &PTR_FUN_00d480a0;
      *(byte *)(param_1 + 1) = bVar1 & 1;
      uVar3 = 1;
      goto LAB_00bc8250;
    }
    FUN_00bb8ccc(uVar2,4);
  }
  else {
    FUN_00bb8cc4(*param_2,0xe);
  }
  uVar3 = 0;
  *(undefined1 *)param_1 = 0;
LAB_00bc8250:
  *(undefined1 *)(param_1 + 2) = uVar3;
  return;
}


// ===== 00bc8264  FUN_00bc8264 =====

void FUN_00bc8264(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_2[1] - *param_2;
  FUN_004efbd8(param_2,lVar2 + 4);
  lVar1 = *param_2;
  *(undefined1 *)(lVar1 + lVar2) = 0xe;
  *(undefined2 *)((undefined1 *)(lVar1 + lVar2) + 2) = 0x400;
  *(undefined1 *)(*param_2 + lVar2 + 1) = *(undefined1 *)(param_1 + 8);
  return;
}


// ===== 00bc82d0  FUN_00bc82d0 =====

void FUN_00bc82d0(undefined8 param_1)

{
  FUN_005d3510(param_1,"SHUTDOWN-COMPLETE");
  return;
}


// ===== 00bc82e4  FUN_00bc82e4 =====

void FUN_00bc82e4(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00bc82f0  FUN_00bc82f0 =====

void FUN_00bc82f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d480d0;
  FUN_007b5d10(param_1 + 2);
  param_1[8] = FUN_00433984;
  param_1[9] = 0;
  FUN_007b5d10(param_1 + 10);
  FUN_007b5d10(param_1 + 0xe);
  FUN_007b5d10(param_1 + 0x12);
  FUN_007b5d10(param_1 + 0x16);
  FUN_007b5d10(param_1 + 0x1a);
  return;
}


// ===== 00bc8354  FUN_00bc8354 =====

void FUN_00bc8354(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d480d0;
  FUN_007b5d24(param_1 + 0x1a);
  FUN_007b5d24(param_1 + 0x16);
  FUN_007b5d24(param_1 + 0x12);
  FUN_007b5d24(param_1 + 0xe);
  FUN_007b5d24(param_1 + 10);
  (*(code *)param_1[8])(0,param_1 + 6,param_1 + 6);
  FUN_007b5d24(param_1 + 2);
  return;
}


// ===== 00bc83c0  FUN_00bc83c0 =====

void FUN_00bc83c0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbc83c8);
  (*pcVar1)();
}


// ===== 00bc83c8  FUN_00bc83c8 =====

undefined8 FUN_00bc83c8(void)

{
  return 0;
}


// ===== 00bc83d4  FUN_00bc83d4 =====

void FUN_00bc83d4(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x24] = 0;
  return;
}


// ===== 00bc83e4  FUN_00bc83e4 =====

void FUN_00bc83e4(long param_1,undefined8 param_2,long param_3)

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
  pcStack_40 = FUN_00bc8908;
  *(undefined8 *)((long)pvVar1 + 0x18) = uVar3;
  *(undefined8 *)((long)pvVar1 + 0x10) = uVar2;
  local_38 = FUN_00bc8918;
  local_48 = pvVar1;
  FUN_007b5b08(param_1 + 0x10,param_2,&local_48);
  return;
}


// ===== 00bc847c  FUN_00bc847c =====

void FUN_00bc847c(long param_1)

{
  FUN_007b5df8(param_1 + 0x10);
  return;
}


// ===== 00bc8488  FUN_00bc8488 =====

void FUN_00bc8488(long param_1,long param_2)

{
  (**(code **)(param_1 + 0x40))(0,param_1 + 0x30,param_1 + 0x30);
  *(code **)(param_1 + 0x40) = FUN_00433984;
  *(undefined8 *)(param_1 + 0x48) = 0;
  (**(code **)(param_2 + 0x10))(1,param_2,param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x18);
  *(code **)(param_2 + 0x10) = FUN_00433984;
  *(undefined8 *)(param_2 + 0x18) = 0;
  return;
}


// ===== 00bc8500  FUN_00bc8500 =====

void FUN_00bc8500(long param_1,undefined8 param_2)

{
  long local_28;
  long *plStack_20;
  undefined8 local_18;
  
  plStack_20 = &local_28;
  local_28 = param_1;
  local_18 = param_2;
  FUN_007b6160(param_1 + 0x10,&plStack_20,FUN_00bc8958);
  return;
}


// ===== 00bc8540  FUN_00bc8540 =====

void FUN_00bc8540(long param_1)

{
  if (*(code **)(param_1 + 0x48) != (code *)0x0) {
    (**(code **)(param_1 + 0x48))(param_1 + 0x30);
    (**(code **)(param_1 + 0x40))(0,param_1 + 0x30,param_1 + 0x30);
    *(code **)(param_1 + 0x40) = FUN_00433984;
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  return;
}


// ===== 00bc8598  FUN_00bc8598 =====

void FUN_00bc8598(long param_1,undefined8 param_2,long param_3)

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
  pcStack_40 = FUN_00bc8974;
  *(undefined8 *)((long)pvVar1 + 0x18) = uVar3;
  *(undefined8 *)((long)pvVar1 + 0x10) = uVar2;
  local_38 = FUN_00bc8984;
  local_48 = pvVar1;
  FUN_007b5b08(param_1 + 0x90,param_2,&local_48);
  return;
}


// ===== 00bc8630  FUN_00bc8630 =====

void FUN_00bc8630(long param_1)

{
  FUN_007b5df8(param_1 + 0x90);
  return;
}


// ===== 00bc863c  FUN_00bc863c =====

void FUN_00bc863c(long param_1,undefined8 param_2)

{
  undefined8 local_20;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)&local_20;
  local_20 = param_2;
  FUN_007b6160(param_1 + 0x90,&puStack_18,FUN_00bc89c4);
  return;
}


// ===== 00bc8678  FUN_00bc8678 =====

void FUN_00bc8678(long param_1,undefined8 param_2,long param_3)

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
  pcStack_40 = FUN_00bc8974;
  *(undefined8 *)((long)pvVar1 + 0x18) = uVar3;
  *(undefined8 *)((long)pvVar1 + 0x10) = uVar2;
  local_38 = FUN_00bc8984;
  local_48 = pvVar1;
  FUN_007b5b08(param_1 + 0xb0,param_2,&local_48);
  return;
}


// ===== 00bc8710  FUN_00bc8710 =====

void FUN_00bc8710(long param_1)

{
  FUN_007b5df8(param_1 + 0xb0);
  return;
}


// ===== 00bc871c  FUN_00bc871c =====

void FUN_00bc871c(long param_1,undefined8 param_2)

{
  undefined8 local_20;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)&local_20;
  local_20 = param_2;
  FUN_007b6160(param_1 + 0xb0,&puStack_18,FUN_00bc89c4);
  return;
}


// ===== 00bc8758  FUN_00bc8758 =====

void FUN_00bc8758(long param_1,undefined8 param_2,long param_3)

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
  pcStack_40 = FUN_00bc8974;
  *(undefined8 *)((long)pvVar1 + 0x18) = uVar3;
  *(undefined8 *)((long)pvVar1 + 0x10) = uVar2;
  local_38 = FUN_00bc8984;
  local_48 = pvVar1;
  FUN_007b5b08(param_1 + 0xd0,param_2,&local_48);
  return;
}


// ===== 00bc87f0  FUN_00bc87f0 =====

void FUN_00bc87f0(long param_1,undefined8 param_2)

{
  undefined8 local_20;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)&local_20;
  local_20 = param_2;
  FUN_007b6160(param_1 + 0xd0,&puStack_18,FUN_00bc89c4);
  return;
}


// ===== 00bc882c  FUN_00bc882c =====

void FUN_00bc882c(long param_1,undefined8 param_2,long param_3)

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
  pcStack_40 = FUN_00bc89e0;
  *(undefined8 *)((long)pvVar1 + 0x18) = uVar3;
  *(undefined8 *)((long)pvVar1 + 0x10) = uVar2;
  local_38 = FUN_00bc8a20;
  local_48 = pvVar1;
  FUN_007b5b08(param_1 + 0x70,param_2,&local_48);
  return;
}


// ===== 00bc88c4  FUN_00bc88c4 =====

void FUN_00bc88c4(long param_1)

{
  FUN_007b5df8(param_1 + 0x70);
  return;
}


// ===== 00bc88d0  FUN_00bc88d0 =====

void FUN_00bc88d0(long param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_2;
  FUN_007b6160(param_1 + 0x70,&local_18,FUN_00bc8a60);
  return;
}


// ===== 00bc8908  FUN_00bc8908 =====

void FUN_00bc8908(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00bc8914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))();
  return;
}


// ===== 00bc8918  FUN_00bc8918 =====

void FUN_00bc8918(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  (**(code **)((long)pvVar1 + 0x10))(0,pvVar1,pvVar1);
  operator_delete(pvVar1);
  return;
}


// ===== 00bc8958  FUN_00bc8958 =====

void FUN_00bc8958(undefined8 *param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00bc8970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x20))(param_2,*(undefined8 *)*param_1,param_1[1]);
  return;
}


// ===== 00bc8974  FUN_00bc8974 =====

void FUN_00bc8974(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00bc8980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))();
  return;
}


// ===== 00bc8984  FUN_00bc8984 =====

void FUN_00bc8984(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  (**(code **)((long)pvVar1 + 0x10))(0,pvVar1,pvVar1);
  operator_delete(pvVar1);
  return;
}


// ===== 00bc89c4  FUN_00bc89c4 =====

void FUN_00bc89c4(undefined8 *param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00bc89dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x20))(param_2,*(undefined8 *)*param_1);
  return;
}


// ===== 00bc89e0  FUN_00bc89e0 =====

void FUN_00bc89e0(long *param_1,undefined8 *param_2)

{
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  uStack_38 = param_2[1];
  local_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  local_20 = param_2[4];
  (**(code **)(*param_1 + 0x18))(*param_1,&local_40);
  return;
}


// ===== 00bc8a20  FUN_00bc8a20 =====

void FUN_00bc8a20(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  (**(code **)((long)pvVar1 + 0x10))(0,pvVar1,pvVar1);
  operator_delete(pvVar1);
  return;
}


// ===== 00bc8a60  FUN_00bc8a60 =====

void FUN_00bc8a60(long *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  puVar1 = (undefined8 *)*param_1;
  uStack_38 = puVar1[1];
  local_40 = *puVar1;
  uStack_28 = puVar1[3];
  uStack_30 = puVar1[2];
  local_20 = puVar1[4];
  (**(code **)(param_2 + 0x20))(param_2,&local_40);
  return;
}


// ===== 00bc8aa8  FUN_00bc8aa8 =====

undefined8 FUN_00bc8aa8(void)

{
  return 0x1000000;
}


// ===== 00bc8ab4  FUN_00bc8ab4 =====

void FUN_00bc8ab4(undefined2 *param_1,uint param_2)

{
  if (param_2 < 4) {
    *param_1 = (short)(0x400020001000080 >> ((ulong)(param_2 << 4) & 0x3f));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061ff28();
}


// ===== 00bc8af0  FUN_00bc8af0 =====

void FUN_00bc8af0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)*(char *)(param_1 + 0x1f);
  if (lVar2 < 0) {
    lVar1 = *(long *)(param_1 + 8);
    lVar2 = *(long *)(param_1 + 0x10);
  }
  else {
    lVar1 = param_1 + 8;
  }
  FUN_00bc8b24(&DAT_001d816a,2,lVar1,lVar2,param_2,param_3,param_4);
  return;
}


// ===== 00bc8b24  FUN_00bc8b24 =====

void FUN_00bc8b24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined1 *param_6,long param_7)

{
  ulong uVar1;
  void *local_68;
  undefined8 uStack_60;
  long local_58;
  
  local_68 = (void *)0x0;
  uStack_60 = 0;
  local_58 = 0;
  FUN_00547cac(&local_68,&DAT_001ded1c,1);
  FUN_00547cac(&local_68,param_1,param_2);
  FUN_00622a58(&local_68,"%02d:%02d:%02d.%03d");
  FUN_00547cac(&local_68," 0000",5);
  if (param_7 != 0) {
    do {
      FUN_00622a58(&local_68," %02x",*param_6);
      param_7 = param_7 + -1;
      param_6 = param_6 + 1;
    } while (param_7 != 0);
  }
  FUN_00547cac(&local_68," # SCTP_PACKET ",0xf);
  FUN_00547cac(&local_68,param_3,param_4);
  uVar1 = FUN_0044075c();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f627a,"../../net/dcsctp/public/text_pcap_packet_observer.cc",0x1b0,
                 &local_68);
  }
  if (local_58 < 0) {
    operator_delete(local_68);
  }
  return;
}


// ===== 00bc8cd4  FUN_00bc8cd4 =====

void FUN_00bc8cd4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)*(char *)(param_1 + 0x1f);
  if (lVar2 < 0) {
    lVar1 = *(long *)(param_1 + 8);
    lVar2 = *(long *)(param_1 + 0x10);
  }
  else {
    lVar1 = param_1 + 8;
  }
  FUN_00bc8b24(&DAT_001be63a,2,lVar1,lVar2,param_2,param_3,param_4);
  return;
}


// ===== 00bc8d08  FUN_00bc8d08 =====

void FUN_00bc8d08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d48130;
  if (-1 < *(char *)((long)param_1 + 0x1f)) {
    return;
  }
  operator_delete((void *)param_1[1]);
  return;
}


// ===== 00bc8d38  FUN_00bc8d38 =====

void FUN_00bc8d38(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d48130;
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    operator_delete((void *)param_1[1]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00bc8d88  FUN_00bc8d88 =====

void FUN_00bc8d88(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *param_1 = &PTR_FUN_00d48160;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  FUN_007ebca0(param_1 + 3);
  param_1[5] = 0x7ff8000000000000;
  param_1[4] = 0x7ff8000000000000;
  param_1[6] = 0;
  return;
}


// ===== 00bc8dd4  FUN_00bc8dd4 =====

void FUN_00bc8dd4(undefined8 *param_1)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = &PTR_FUN_00d48160;
  FUN_007ebdcc(param_1[3]);
  pvVar2 = (void *)param_1[3];
  if ((pvVar2 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar2), iVar1 == 1)) {
    operator_delete(pvVar2);
    return;
  }
  return;
}


// ===== 00bc8e40  FUN_00bc8e40 =====

void FUN_00bc8e40(undefined8 *param_1)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = &PTR_FUN_00d48160;
  FUN_007ebdcc(param_1[3]);
  pvVar2 = (void *)param_1[3];
  if ((pvVar2 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar2), iVar1 == 1)) {
    operator_delete(pvVar2);
  }
  operator_delete(param_1);
  return;
}


// ===== 00bc8ea8  FUN_00bc8ea8 =====

void FUN_00bc8ea8(long param_1,int param_2,long param_3)

{
  undefined4 uVar1;
  void *pvVar2;
  int iVar3;
  long lVar4;
  void *pvVar5;
  undefined8 uVar6;
  long *local_70 [2];
  code *local_60;
  code *pcStack_58;
  void *local_48;
  
  lVar4 = (**(code **)(*(long *)(param_1 + 8) + 0x18))(*(long *)(param_1 + 8) + 8);
  if (param_2 == 0x7fffffff) {
    *(undefined8 *)(param_1 + 0x28) = 0x7fffffffffffffff;
    *(long *)(param_1 + 0x30) = param_3;
  }
  else {
    lVar4 = lVar4 * 1000;
    if (lVar4 != -0x8000000000000000) {
      lVar4 = lVar4 + (long)param_2 * 1000;
    }
    *(long *)(param_1 + 0x28) = lVar4;
    *(long *)(param_1 + 0x30) = param_3;
    if (lVar4 < *(long *)(param_1 + 0x20)) {
      if (*(long *)(param_1 + 0x20) != 0x7fffffffffffffff) {
        FUN_007ebdcc(*(undefined8 *)(param_1 + 0x18));
        FUN_007ebca0(&local_48);
        pvVar2 = local_48;
        pvVar5 = *(void **)(param_1 + 0x18);
        local_48 = (void *)0x0;
        *(void **)(param_1 + 0x18) = pvVar2;
        if (pvVar5 != (void *)0x0) {
          iVar3 = FUN_00d0f7a0(0xffffffff,pvVar5);
          if (iVar3 == 1) {
            operator_delete(pvVar5);
          }
          pvVar2 = local_48;
          if ((local_48 != (void *)0x0) && (iVar3 = FUN_00d0f7a0(0xffffffff,local_48), iVar3 == 1))
          {
            operator_delete(pvVar2);
          }
        }
        lVar4 = *(long *)(param_1 + 0x28);
      }
      *(long *)(param_1 + 0x20) = lVar4;
      lVar4 = *(long *)(param_1 + 0x18);
      uVar1 = *(undefined4 *)(param_1 + 0x10);
      uVar6 = **(undefined8 **)(param_1 + 8);
      if (lVar4 != 0) {
        FUN_00d0f740(1,lVar4);
      }
      local_70[0] = (long *)operator_new(0x30);
      *local_70[0] = lVar4;
      local_70[0][4] = (long)FUN_004473ec;
      local_70[0][5] = (long)FUN_00bc90b0;
      local_70[0][2] = param_3;
      local_70[0][3] = param_1;
      local_60 = FUN_005db390;
      pcStack_58 = FUN_005db348;
      FUN_00841b7c(uVar6,uVar1,local_70,(long)param_2 * 1000,&local_48);
      (*local_60)(0,local_70,local_70);
    }
  }
  return;
}


// ===== 00bc904c  FUN_00bc904c =====

void FUN_00bc904c(long param_1)

{
  *(undefined8 *)(param_1 + 0x28) = 0x7fffffffffffffff;
  return;
}


// ===== 00bc905c  FUN_00bc905c =====

void FUN_00bc905c(long *param_1,undefined4 param_2,undefined8 param_3)

{
  (**(code **)(*param_1 + 0x18))();
                    /* WARNING: Could not recover jumptable at 0x00bc90ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,param_2,param_3);
  return;
}


// ===== 00bc90b0  FUN_00bc90b0 =====

void FUN_00bc90b0(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  long *plVar5;
  long local_28;
  
  plVar5 = *(long **)(param_1 + 8);
  plVar5[4] = 0x7fffffffffffffff;
  if (plVar5[5] != 0x7fffffffffffffff) {
    lVar1 = (**(code **)(plVar5[1] + 0x18))(plVar5[1] + 8);
    lVar2 = plVar5[5];
    if ((lVar2 == 0x7fffffffffffffff) || (lVar1 * 1000 == -0x8000000000000000)) {
      uVar3 = 0x7fffffffffffffff;
      plVar5[5] = 0x7fffffffffffffff;
LAB_00bc9140:
      iVar4 = (int)(uVar3 / 1000);
      if (499 < uVar3 % 1000) {
        iVar4 = iVar4 + 1;
      }
                    /* WARNING: Could not recover jumptable at 0x00bc918c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x10))(plVar5,iVar4,plVar5[6]);
      return;
    }
    if (lVar2 == -0x8000000000000000) {
      plVar5[5] = 0x7fffffffffffffff;
    }
    else {
      uVar3 = lVar2 + lVar1 * -1000;
      plVar5[5] = 0x7fffffffffffffff;
      if (0 < (long)uVar3) goto LAB_00bc9140;
    }
    local_28 = plVar5[6];
    (**(code **)(plVar5[1] + 0x38))(plVar5[1] + 0x28,&local_28);
  }
  return;
}


// ===== 00bc91c0  FUN_00bc91c0 =====

ulong FUN_00bc91c0(long *param_1,long *param_2)

{
  undefined8 *__s1;
  undefined8 *__s2;
  size_t __n;
  bool bVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *param_1;
  lVar6 = *param_2;
  if (*(int *)(lVar5 + 0x60) == *(int *)(lVar6 + 0x60)) {
    __s1 = (undefined8 *)*(void **)(lVar5 + 0x10);
    uVar4 = *(ulong *)(lVar5 + 0x18);
    if (-1 < (char)*(byte *)(lVar5 + 0x27)) {
      __s1 = (undefined8 *)(lVar5 + 0x10);
      uVar4 = (ulong)*(byte *)(lVar5 + 0x27);
    }
    __s2 = (undefined8 *)*(void **)(lVar6 + 0x10);
    uVar2 = *(ulong *)(lVar6 + 0x18);
    if (-1 < (char)*(byte *)(lVar6 + 0x27)) {
      __s2 = (undefined8 *)(lVar6 + 0x10);
      uVar2 = (ulong)*(byte *)(lVar6 + 0x27);
    }
    if ((uVar4 == uVar2) && (iVar3 = memcmp(__s1,__s2,uVar4), iVar3 == 0)) {
      uVar4 = FUN_007e9d94(lVar5 + 0x40,lVar6 + 0x40);
      return uVar4;
    }
    __n = uVar2;
    if (uVar4 <= uVar2) {
      __n = uVar4;
    }
    iVar3 = memcmp(__s1,__s2,__n);
    bVar1 = iVar3 < 0;
    if (iVar3 == 0 && uVar4 != uVar2) {
      bVar1 = uVar4 < uVar2;
    }
  }
  else {
    bVar1 = *(int *)(lVar5 + 0x60) < *(int *)(lVar6 + 0x60);
  }
  return (ulong)bVar1;
}


// ===== 00bc92b8  FUN_00bc92b8 =====

/* WARNING: Removing unreachable block (ram,0x00bc93c0) */

void FUN_00bc92b8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 **local_78;
  ulong uStack_70;
  byte bStack_61;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 **local_48;
  ulong uStack_40;
  ulong local_38;
  
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  FUN_00547cac(&local_60,param_2,param_3);
  FUN_00547cac(&local_60,&DAT_001ef44c,1);
  FUN_007e9e64(&local_78,param_4);
  pppuVar2 = (undefined8 ***)local_78;
  if (-1 < (char)bStack_61) {
    uStack_70 = (ulong)bStack_61;
    pppuVar2 = &local_78;
  }
  FUN_00547cac(&local_60,pppuVar2,uStack_70);
  FUN_00547cac(&local_60,&DAT_001c7bbb,1);
  local_48 = (undefined8 ***)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_005f55c4(&local_48,0x16,param_5);
  uVar1 = uStack_40;
  pppuVar2 = (undefined8 ***)local_48;
  if (-1 < (long)local_38) {
    uVar1 = local_38 >> 0x38;
    pppuVar2 = &local_48;
  }
  FUN_00547cac(&local_60,pppuVar2,uVar1);
  if ((char)bStack_61 < '\0') {
    operator_delete(local_78);
  }
  param_1[1] = uStack_58;
  *param_1 = local_60;
  param_1[2] = local_50;
  return;
}


// ===== 00bc93ec  FUN_00bc93ec =====

bool FUN_00bc93ec(void *param_1,ulong param_2,void *param_3,ulong param_4)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  byte *pbVar5;
  long lVar6;
  
  if ((param_4 == 0) ||
     ((param_4 <= param_2 && (iVar4 = memcmp(param_1,param_3,param_4), iVar4 == 0)))) {
    if (param_2 < param_4) {
                    /* WARNING: Subroutine does not return */
      FUN_005f55a8("string_view::substr");
    }
    if (param_2 == param_4) {
      bVar2 = true;
    }
    else {
      lVar6 = ~param_4 + param_2;
      pbVar5 = (byte *)((long)param_1 + param_4);
      do {
        bVar1 = *pbVar5;
        bVar2 = bVar1 - 0x30 < 10;
        bVar3 = lVar6 != 0;
        lVar6 = lVar6 + -1;
        pbVar5 = pbVar5 + 1;
      } while (bVar1 - 0x30 < 10 && bVar3);
    }
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}


// ===== 00bc9498  FUN_00bc9498 =====

undefined4 FUN_00bc9498(int *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  byte *pbVar3;
  
  if (param_2 < 2) goto LAB_00bc9604;
  if ((short)*param_1 == 0x6f6c) {
    lVar2 = param_2 - 2;
    if (lVar2 != 0) {
      pbVar3 = (byte *)((long)param_1 + 2);
      do {
        if (9 < *pbVar3 - 0x30) goto LAB_00bc94cc;
        lVar2 = lVar2 + -1;
        pbVar3 = pbVar3 + 1;
      } while (lVar2 != 0);
    }
    return 0x10;
  }
LAB_00bc94cc:
  if (param_2 == 2) goto LAB_00bc9604;
  if ((short)*param_1 == 0x7465 && *(char *)((long)param_1 + 2) == 'h') {
    lVar2 = param_2 - 3;
    if (lVar2 == 0) {
      return 1;
    }
    pbVar3 = (byte *)((long)param_1 + 3);
    while (*pbVar3 - 0x30 < 10) {
      lVar2 = lVar2 + -1;
      pbVar3 = pbVar3 + 1;
      if (lVar2 == 0) {
        return 1;
      }
    }
  }
  if (3 < param_2) {
    if (*param_1 == 0x6e616c77) {
      lVar2 = param_2 - 4;
      if (lVar2 == 0) {
        return 2;
      }
      pbVar3 = (byte *)(param_1 + 1);
      while (*pbVar3 - 0x30 < 10) {
        lVar2 = lVar2 + -1;
        pbVar3 = pbVar3 + 1;
        if (lVar2 == 0) {
          return 2;
        }
      }
    }
    if (param_2 < 7) {
LAB_00bc9514:
      if (param_2 == 4) goto LAB_00bc95e8;
    }
    else if (*param_1 == 0x772d3476 && *(int *)((long)param_1 + 3) == 0x6e616c77) {
      lVar2 = param_2 - 7;
      if (lVar2 == 0) {
        return 2;
      }
      pbVar3 = (byte *)((long)param_1 + 7);
      while (*pbVar3 - 0x30 < 10) {
        lVar2 = lVar2 + -1;
        pbVar3 = pbVar3 + 1;
        if (lVar2 == 0) {
          return 2;
        }
      }
      goto LAB_00bc9514;
    }
    if (*param_1 == 0x65737069 && (char)param_1[1] == 'c') {
      lVar2 = param_2 - 5;
      if (lVar2 == 0) {
        return 8;
      }
      pbVar3 = (byte *)((long)param_1 + 5);
      while (*pbVar3 - 0x30 < 10) {
        lVar2 = lVar2 + -1;
        pbVar3 = pbVar3 + 1;
        if (lVar2 == 0) {
          return 8;
        }
      }
    }
  }
LAB_00bc95e8:
  if ((short)*param_1 == 0x7574 && *(char *)((long)param_1 + 2) == 'n') {
    lVar2 = param_2 - 3;
    if (lVar2 == 0) {
      return 8;
    }
    pbVar3 = (byte *)((long)param_1 + 3);
    while (*pbVar3 - 0x30 < 10) {
      lVar2 = lVar2 + -1;
      pbVar3 = pbVar3 + 1;
      if (lVar2 == 0) {
        return 8;
      }
    }
  }
LAB_00bc9604:
  uVar1 = FUN_00bc93ec(param_1,param_2,&DAT_001bbb32,4);
  if (((uVar1 & 1) != 0) ||
     (uVar1 = FUN_00bc93ec(param_1,param_2,&DAT_0019c110,3), (uVar1 & 1) != 0)) {
    return 8;
  }
  uVar1 = FUN_00bc93ec(param_1,param_2,"rmnet",5);
  if (((uVar1 & 1) == 0) &&
     (((uVar1 = FUN_00bc93ec(param_1,param_2,"rmnet_data",10), (uVar1 & 1) == 0 &&
       (uVar1 = FUN_00bc93ec(param_1,param_2,"v4-rmnet",8), (uVar1 & 1) == 0)) &&
      (uVar1 = FUN_00bc93ec(param_1,param_2,"v4-rmnet_data",0xd), (uVar1 & 1) == 0)))) {
    uVar1 = FUN_00bc93ec(param_1,param_2,&DAT_0019937e,4);
    if ((uVar1 & 1) != 0) {
      return 4;
    }
    uVar1 = FUN_00bc93ec(param_1,param_2,"ccmni",5);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    return 4;
  }
  return 4;
}


// ===== 00bc97a0  FUN_00bc97a0 =====

undefined8 FUN_00bc97a0(void)

{
  return 0;
}


// ===== 00bc97ac  FUN_00bc97ac =====

undefined8 FUN_00bc97ac(void)

{
  return 0;
}


// ===== 00bc97b8  FUN_00bc97b8 =====

undefined8 FUN_00bc97b8(void)

{
  return 0;
}


// ===== 00bc97c4  FUN_00bc97c4 =====

undefined8 FUN_00bc97c4(void)

{
  return 0;
}


// ===== 00bc97d0  FUN_00bc97d0 =====

void FUN_00bc97d0(long param_1,undefined8 param_2,long param_3)

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
  pcStack_40 = FUN_00bd1294;
  *(undefined8 *)((long)pvVar1 + 0x18) = uVar3;
  *(undefined8 *)((long)pvVar1 + 0x10) = uVar2;
  local_38 = FUN_00bd12a4;
  local_48 = pvVar1;
  FUN_007b5b08(param_1 + 0x10,param_2,&local_48);
  return;
}


// ===== 00bc9868  FUN_00bc9868 =====

void FUN_00bc9868(long param_1)

{
  FUN_007b5df8(param_1 + 0x10);
  return;
}


// ===== 00bc9874  FUN_00bc9874 =====

undefined4 FUN_00bc9874(long param_1)

{
  return *(undefined4 *)(param_1 + 0x50);
}


// ===== 00bc9880  FUN_00bc9880 =====

void FUN_00bc9880(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined **ppuVar5;
  long lVar6;
  void *pvVar7;
  undefined **local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined **local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined8 uStack_4c;
  undefined4 local_44;
  
  local_60 = *(undefined ***)(param_2 + 0x88);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (local_60 == (undefined **)0x0) {
    local_80 = &PTR_FUN_00d385d8;
    uStack_64 = 0xaaaaaaaa;
    local_78 = 2;
    local_74 = 0;
    uStack_6c = 0;
    uStack_68 = 0;
    plVar3 = (long *)operator_new(0xf8);
    FUN_00bcc860(plVar3,&DAT_001b18c8,3,&DAT_001b18c8,3,&local_80,0,0x20);
    pvVar7 = *(void **)(param_2 + 0x88);
    *(long **)(param_2 + 0x88) = plVar3;
    if (pvVar7 != (void *)0x0) {
      FUN_00bcca68(pvVar7);
      operator_delete(pvVar7);
      plVar3 = *(long **)(param_2 + 0x88);
    }
    *plVar3 = param_2;
    *(long *)(*(long *)(param_2 + 0x88) + 8) = param_2 + 8;
    uStack_4c = CONCAT44(uStack_68,uStack_6c);
    lVar6 = *(long *)(param_2 + 0x88);
    local_60 = &PTR_FUN_00d48390;
    local_54 = local_74;
    local_58 = local_78;
    local_44 = 0;
    puVar1 = *(undefined8 **)(lVar6 + 0x88);
    if (puVar1 < *(undefined8 **)(lVar6 + 0x90)) {
      if (puVar1 == (undefined8 *)0x0) goto LAB_00bc9af0;
      *(undefined4 *)(puVar1 + 1) = local_78;
      puVar4 = puVar1 + 4;
      *puVar1 = &PTR_FUN_00d48390;
      *(undefined4 *)((long)puVar1 + 0x1c) = 0;
      *(undefined8 *)((long)puVar1 + 0x14) = uStack_4c;
      *(undefined8 *)((long)puVar1 + 0xc) = local_74;
    }
    else {
      puVar4 = (undefined8 *)FUN_00bcd4ec(lVar6 + 0x80,&local_60);
    }
    *(undefined8 **)(lVar6 + 0x88) = puVar4;
    plVar3 = (long *)param_1[1];
    local_60 = *(undefined ***)(param_2 + 0x88);
    if ((long *)param_1[2] <= plVar3) goto LAB_00bc98b8;
    if (plVar3 == (long *)0x0) goto LAB_00bc9af0;
    plVar2 = plVar3 + 1;
    *plVar3 = (long)local_60;
  }
  else {
LAB_00bc98b8:
    plVar2 = (long *)FUN_00bcd6a8(param_1,&local_60);
  }
  ppuVar5 = *(undefined ***)(param_2 + 0x90);
  param_1[1] = plVar2;
  if (ppuVar5 == (undefined **)0x0) {
    local_80 = &PTR_FUN_00d385d8;
    uStack_64 = 0xaaaaaaaa;
    local_78 = 10;
    local_74 = 0;
    uStack_6c = 0;
    uStack_68 = 0;
    plVar3 = (long *)operator_new(0xf8);
    FUN_00bcc860(plVar3,&DAT_001b18c8,3,&DAT_001b18c8,3,&local_80,0,0x20);
    pvVar7 = *(void **)(param_2 + 0x90);
    *(long **)(param_2 + 0x90) = plVar3;
    if (pvVar7 != (void *)0x0) {
      FUN_00bcca68(pvVar7);
      operator_delete(pvVar7);
      plVar3 = *(long **)(param_2 + 0x90);
    }
    *plVar3 = param_2;
    *(long *)(*(long *)(param_2 + 0x90) + 8) = param_2 + 8;
    uStack_4c = CONCAT44(uStack_68,uStack_6c);
    lVar6 = *(long *)(param_2 + 0x90);
    local_60 = &PTR_FUN_00d48390;
    local_54 = local_74;
    local_58 = local_78;
    local_44 = 0;
    puVar1 = *(undefined8 **)(lVar6 + 0x88);
    if (puVar1 < *(undefined8 **)(lVar6 + 0x90)) {
      if (puVar1 == (undefined8 *)0x0) goto LAB_00bc9af0;
      *(undefined4 *)(puVar1 + 1) = local_78;
      puVar4 = puVar1 + 4;
      *puVar1 = &PTR_FUN_00d48390;
      *(undefined4 *)((long)puVar1 + 0x1c) = 0;
      *(undefined8 *)((long)puVar1 + 0x14) = uStack_4c;
      *(undefined8 *)((long)puVar1 + 0xc) = local_74;
    }
    else {
      puVar4 = (undefined8 *)FUN_00bcd4ec(lVar6 + 0x80,&local_60);
    }
    *(undefined8 **)(lVar6 + 0x88) = puVar4;
    plVar2 = (long *)param_1[1];
    ppuVar5 = *(undefined ***)(param_2 + 0x90);
  }
  local_60 = ppuVar5;
  if (plVar2 < (long *)param_1[2]) {
    if (plVar2 == (long *)0x0) {
LAB_00bc9af0:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    plVar3 = plVar2 + 1;
    *plVar2 = (long)ppuVar5;
  }
  else {
    plVar3 = (long *)FUN_00bcd6a8(param_1,&local_60);
  }
  param_1[1] = plVar3;
  return;
}


// ===== 00bc9b34  FUN_00bc9b34 =====

void FUN_00bc9b34(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_2 + 0x58);
  lVar2 = *(long *)(param_2 + 0x60);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_00bcd7b4(param_1,0,lVar1,lVar2,lVar2 - lVar1 >> 3);
  return;
}


// ===== 00bc9b58  FUN_00bc9b58 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00bc9b58(long param_1,undefined8 *param_2,byte *param_3,int *param_4)

{
  long *plVar1;
  undefined8 *******pppppppuVar2;
  code *******__n;
  undefined8 ******__n_00;
  code *****pppppcVar3;
  undefined8 ******ppppppuVar4;
  code *****pppppcVar5;
  uint uVar6;
  short sVar7;
  code *******__s1;
  code *******pppppppcVar8;
  bool bVar9;
  int iVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  code *******pppppppcVar14;
  long lVar15;
  long *plVar16;
  undefined8 *puVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  long *plVar21;
  uint uVar22;
  long *plVar23;
  code ******ppppppcVar24;
  undefined8 *puVar25;
  code ******ppppppcVar26;
  undefined8 *******pppppppuVar27;
  void *pvVar28;
  undefined8 ******ppppppuVar29;
  byte bVar30;
  undefined8 *******pppppppuVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  code ******local_a8;
  code *******local_a0;
  code *******local_98;
  code *******local_90;
  undefined8 *******local_88;
  undefined8 *******local_80;
  undefined8 local_78;
  undefined8 *******local_70;
  undefined8 *******local_68;
  
  *param_3 = 0;
  plVar23 = (long *)*param_2;
  plVar16 = (long *)param_2[1];
  local_80 = (undefined8 *******)0x0;
  local_78 = 0;
  local_a0 = (code *******)FUN_00bc91c0;
  pppppppuVar27 = &local_80;
  if (plVar23 != plVar16) {
    local_88 = &local_80;
    FUN_00bcdcac(plVar23,plVar16,&local_a0,LZCOUNT((long)plVar16 - (long)plVar23 >> 3) << 1 ^ 0x7e,1
                );
    plVar23 = (long *)*param_2;
    plVar16 = (long *)param_2[1];
    pppppppuVar27 = local_88;
  }
  for (; local_88 = pppppppuVar27, plVar23 != plVar16; plVar23 = plVar23 + 1) {
    lVar18 = *plVar23;
    lVar15 = (long)*(char *)(lVar18 + 0x27);
    if (lVar15 < 0) {
      lVar13 = *(long *)(lVar18 + 0x10);
      lVar15 = *(long *)(lVar18 + 0x18);
    }
    else {
      lVar13 = lVar18 + 0x10;
    }
    FUN_00bc92b8(&local_a0,lVar13,lVar15,lVar18 + 0x40,*(undefined4 *)(lVar18 + 0x60));
    lVar15 = *plVar23;
    if (local_80 != (undefined8 *******)0x0) {
      pppppppuVar27 = local_80;
      __s1 = local_a0;
      pppppppcVar14 = local_98;
      if (-1 < (long)local_90) {
        __s1 = (code *******)&local_a0;
        pppppppcVar14 = (code *******)((ulong)local_90 >> 0x38);
      }
      do {
        while( true ) {
          pppppppuVar2 = (undefined8 *******)pppppppuVar27[4];
          pppppppcVar8 = (code *******)pppppppuVar27[5];
          if (-1 < (char)*(byte *)((long)pppppppuVar27 + 0x37)) {
            pppppppuVar2 = pppppppuVar27 + 4;
            pppppppcVar8 = (code *******)(ulong)*(byte *)((long)pppppppuVar27 + 0x37);
          }
          __n = pppppppcVar8;
          if (pppppppcVar14 <= pppppppcVar8) {
            __n = pppppppcVar14;
          }
          iVar10 = memcmp(__s1,pppppppuVar2,(size_t)__n);
          if (iVar10 != 0) break;
          if (pppppppcVar14 == pppppppcVar8) {
            if ((undefined8 ********)pppppppuVar27 != &local_80) {
              bVar9 = false;
              goto LAB_00bc9da4;
            }
            goto LAB_00bc9d00;
          }
          if (pppppppcVar8 <= pppppppcVar14) goto LAB_00bc9c7c;
LAB_00bc9ccc:
          pppppppuVar27 = (undefined8 *******)*pppppppuVar27;
          if (pppppppuVar27 == (undefined8 *******)0x0) goto LAB_00bc9d00;
        }
        if (iVar10 < 0) goto LAB_00bc9ccc;
LAB_00bc9c7c:
        pppppppuVar2 = pppppppuVar27 + 1;
        pppppppuVar27 = (undefined8 *******)*pppppppuVar2;
      } while ((undefined8 *******)*pppppppuVar2 != (undefined8 *******)0x0);
    }
LAB_00bc9d00:
    *plVar23 = 0;
    plVar11 = (long *)FUN_00bca510(&local_88,&local_a0);
    pvVar28 = (void *)*plVar11;
    *plVar11 = lVar15;
    if (pvVar28 != (void *)0x0) {
      FUN_00bcca68(pvVar28);
      operator_delete(pvVar28);
    }
    plVar21 = plVar11 + 1;
    puVar25 = (undefined8 *)*plVar21;
    if (puVar25 != (undefined8 *)0x0) {
      puVar17 = (undefined8 *)plVar11[2];
      puVar12 = puVar25;
      if (puVar25 != puVar17) {
        do {
          puVar17 = puVar17 + -4;
          if (puVar17 == (undefined8 *)0x0) goto LAB_00bca498;
          (**(code **)*puVar17)(puVar17);
        } while (puVar17 != puVar25);
        puVar12 = (undefined8 *)*plVar21;
      }
      plVar11[2] = (long)puVar25;
      operator_delete(puVar12);
    }
    bVar9 = true;
    *plVar21 = 0;
    plVar11[2] = 0;
    plVar11[3] = 0;
LAB_00bc9da4:
    lVar13 = FUN_00bca510(&local_88,&local_a0);
    lVar18 = *(long *)(lVar15 + 0x80);
    lVar15 = *(long *)(lVar15 + 0x88);
    if (lVar18 != lVar15) {
      puVar25 = *(undefined8 **)(lVar13 + 0x10);
      do {
        if (puVar25 < *(undefined8 **)(lVar13 + 0x18)) {
          if (puVar25 == (undefined8 *)0x0) goto LAB_00bca4ac;
          *puVar25 = &PTR_FUN_00d385d8;
          *(undefined4 *)(puVar25 + 1) = *(undefined4 *)(lVar18 + 8);
          uVar33 = *(undefined8 *)(lVar18 + 0x14);
          uVar32 = *(undefined8 *)(lVar18 + 0xc);
          *puVar25 = &PTR_FUN_00d48390;
          *(undefined8 *)((long)puVar25 + 0x14) = uVar33;
          *(undefined8 *)((long)puVar25 + 0xc) = uVar32;
          *(undefined4 *)((long)puVar25 + 0x1c) = *(undefined4 *)(lVar18 + 0x1c);
          puVar25 = puVar25 + 4;
        }
        else {
          puVar25 = (undefined8 *)FUN_00bcf5a0(lVar13 + 8,lVar18);
        }
        lVar18 = lVar18 + 0x20;
        *(undefined8 **)(lVar13 + 0x10) = puVar25;
      } while (lVar18 != lVar15);
    }
    if (bVar9) {
      if (*(long *)(lVar13 + 0x10) == *(long *)(lVar13 + 8)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                  );
      }
      if (*(int *)(*(long *)(lVar13 + 8) + 8) == 2) {
        *param_4 = *param_4 + 1;
      }
      else {
        param_4[1] = param_4[1] + 1;
      }
    }
    if ((long)local_90 < 0) {
      operator_delete(local_a0);
    }
    pppppppuVar27 = local_88;
  }
  local_a0 = (code *******)0x0;
  local_98 = (code *******)0x0;
  local_90 = (code *******)0x0;
  if ((undefined8 ********)pppppppuVar27 != &local_80) {
LAB_00bc9e80:
    ppppppcVar26 = (code ******)pppppppuVar27[7];
    pppppppuVar27[7] = (undefined8 ******)0x0;
    plVar23 = *(long **)(param_1 + 0x78);
    pppppppuVar2 = pppppppuVar27 + 4;
    if (plVar23 != (long *)0x0) {
      pppppppuVar31 = (undefined8 *******)pppppppuVar27[4];
      ppppppuVar29 = pppppppuVar27[5];
      if (-1 < (char)*(byte *)((long)pppppppuVar27 + 0x37)) {
        pppppppuVar31 = pppppppuVar2;
        ppppppuVar29 = (undefined8 ******)(ulong)*(byte *)((long)pppppppuVar27 + 0x37);
      }
      do {
        while( true ) {
          plVar16 = (long *)plVar23[4];
          ppppppuVar4 = (undefined8 ******)plVar23[5];
          if (-1 < (char)*(byte *)((long)plVar23 + 0x37)) {
            plVar16 = plVar23 + 4;
            ppppppuVar4 = (undefined8 ******)(ulong)*(byte *)((long)plVar23 + 0x37);
          }
          __n_00 = ppppppuVar4;
          if (ppppppuVar29 <= ppppppuVar4) {
            __n_00 = ppppppuVar29;
          }
          iVar10 = memcmp(pppppppuVar31,plVar16,(size_t)__n_00);
          if (iVar10 != 0) break;
          if (ppppppuVar29 == ppppppuVar4) {
            if (plVar23 != (long *)(param_1 + 0x78)) {
              ppppppcVar24 = (code ******)plVar23[7];
              local_a8 = ppppppcVar24;
              if ((*param_3 & 1) != 0) goto LAB_00bca0a4;
              ppppppuVar29 = pppppppuVar27[8];
              ppppppuVar4 = pppppppuVar27[9];
              if ((long)ppppppuVar4 - (long)ppppppuVar29 !=
                  (long)ppppppcVar24[0x11] - (long)ppppppcVar24[0x10]) goto LAB_00bca0a4;
              if (ppppppuVar29 != ppppppuVar4) goto LAB_00bc9f50;
              bVar30 = 0;
              goto LAB_00bca0a8;
            }
            goto LAB_00bc9f98;
          }
          if (ppppppuVar4 <= ppppppuVar29) goto LAB_00bc9eb4;
LAB_00bc9f04:
          plVar23 = (long *)*plVar23;
          if (plVar23 == (long *)0x0) goto LAB_00bc9f98;
        }
        if (iVar10 < 0) goto LAB_00bc9f04;
LAB_00bc9eb4:
        plVar23 = (long *)plVar23[1];
      } while (plVar23 != (long *)0x0);
    }
LAB_00bc9f98:
    sVar7 = *(short *)(param_1 + 0xd8);
    *(short *)(param_1 + 0xd8) = sVar7 + 1;
    *(short *)((long)ppppppcVar26 + 0xae) = sVar7;
    if ((undefined8 *******)(ppppppcVar26 + 0x10) != pppppppuVar27 + 8) {
      FUN_00bd1014(ppppppcVar26 + 0x10,pppppppuVar27[8],pppppppuVar27[9],
                   (long)pppppppuVar27[9] - (long)pppppppuVar27[8] >> 5);
    }
    local_68 = (undefined8 *******)ppppppcVar26;
    if (local_98 < local_90) {
      if (local_98 == (code *******)0x0) goto LAB_00bca4ac;
      pppppppcVar14 = local_98 + 1;
      *local_98 = ppppppcVar26;
    }
    else {
      pppppppcVar14 = (code *******)FUN_00bcf744(&local_a0,&local_68);
    }
    local_98 = pppppppcVar14;
    local_70 = pppppppuVar2;
    local_68 = (undefined8 *******)(param_1 + 0x70);
    lVar15 = FUN_00bd13ec(&local_68,pppppppuVar27 + 4,&DAT_001f94c3,&local_70,&local_a8);
    pvVar28 = *(void **)(lVar15 + 0x38);
    *(code *******)(lVar15 + 0x38) = ppppppcVar26;
    if (pvVar28 != (void *)0x0) {
      FUN_00bcca68(pvVar28);
      operator_delete(pvVar28);
    }
    ppppppcVar26 = (code ******)0x0;
    *param_3 = 1;
    goto LAB_00bca034;
  }
LAB_00bca244:
  if ((long)local_98 - (long)local_a0 ==
      *(long *)(param_1 + 0x60) - (long)*(code *******)(param_1 + 0x58)) {
    if (*param_3 != 1) goto LAB_00bca42c;
  }
  else {
    *param_3 = 1;
  }
  if ((code ********)(param_1 + 0x58) != &local_a0) {
    FUN_00bcf97c();
  }
  plVar23 = *(long **)(param_1 + 0x70);
  while (plVar23 != (long *)(param_1 + 0x78)) {
    plVar16 = *(long **)(param_1 + 0x58);
    plVar11 = *(long **)(param_1 + 0x60);
    lVar15 = plVar23[7];
    if (plVar16 == plVar11) {
LAB_00bca2f0:
      bVar9 = false;
    }
    else {
      uVar19 = (long)plVar11 + (-8 - (long)plVar16);
      uVar22 = (uint)uVar19;
      if ((~uVar22 & 0x18) != 0) {
        uVar20 = (ulong)((uVar22 >> 3) + 1) & 3;
        do {
          if (*plVar16 == lVar15) goto LAB_00bca358;
          uVar20 = uVar20 - 1;
          plVar16 = plVar16 + 1;
        } while (uVar20 != 0);
      }
      if (uVar19 < 0x18) goto LAB_00bca2f0;
      plVar21 = plVar16 + 2;
      do {
        if (plVar21[-2] == lVar15) {
          plVar16 = plVar21 + -2;
          break;
        }
        if (plVar21[-1] == lVar15) {
          plVar16 = plVar21 + -1;
          break;
        }
        plVar16 = plVar21;
        if (*plVar21 == lVar15) break;
        if (plVar21[1] == lVar15) {
          plVar16 = plVar21 + 1;
          break;
        }
        plVar1 = plVar21 + 2;
        plVar21 = plVar21 + 4;
        plVar16 = plVar11;
      } while (plVar1 != plVar11);
LAB_00bca358:
      bVar9 = plVar16 != plVar11;
    }
    if ((bool)*(char *)(lVar15 + 0xac) != bVar9) {
      *(bool *)(lVar15 + 0xac) = bVar9;
    }
    plVar16 = plVar23;
    plVar11 = (long *)plVar23[1];
    if ((long *)plVar23[1] == (long *)0x0) {
      do {
        plVar23 = (long *)plVar16[2];
        bVar9 = plVar16 != (long *)*plVar23;
        plVar16 = plVar23;
      } while (bVar9);
    }
    else {
      do {
        plVar23 = plVar11;
        plVar11 = (long *)*plVar23;
      } while ((long *)*plVar23 != (long *)0x0);
    }
  }
  plVar23 = *(long **)(param_1 + 0x58);
  plVar16 = *(long **)(param_1 + 0x60);
  local_68 = (undefined8 *******)FUN_00bca67c;
  if (plVar23 != plVar16) {
    FUN_00bcfba4(plVar23,plVar16,&local_68,LZCOUNT((long)plVar16 - (long)plVar23 >> 3) << 1 ^ 0x7e,1
                );
    plVar23 = *(long **)(param_1 + 0x58);
    plVar16 = *(long **)(param_1 + 0x60);
  }
  if (plVar23 != plVar16) {
    iVar10 = 0x7f;
    do {
      plVar11 = plVar23 + 1;
      *(int *)(*plVar23 + 0xa8) = iVar10;
      if (iVar10 == 0) {
        uVar19 = FUN_004249b0();
        if ((uVar19 & 1) == 0) {
          FUN_00623bb0(&DAT_001f4e98,"../../rtc_base/network.cc",0x105b,
                       "Too many network interfaces to handle!");
        }
        break;
      }
      iVar10 = iVar10 + -1;
      plVar23 = plVar11;
    } while (plVar11 != plVar16);
  }
LAB_00bca42c:
  if (local_a0 != (code *******)0x0) {
    uVar20 = (ulong)((long)local_98 + (-8 - ((long)local_98 << 0x3d))) >> 3;
    uVar19 = (ulong)(((long)local_a0 - (long)local_98 << 0x3d) - ((long)local_a0 - (long)local_98))
             >> 3;
    if (uVar20 <= uVar19) {
      uVar19 = uVar20;
    }
    pppppppcVar14 = local_98;
    if ((1 < uVar19) && ((((int)local_a0 - (int)local_98 | -(int)local_98) & 7U) == 0)) {
      uVar19 = uVar19 & 0x1ffffffffffffffe;
      pppppppcVar14 = local_98 + -uVar19;
      do {
        uVar19 = uVar19 - 2;
      } while (uVar19 != 0);
    }
    while (pppppppcVar14 != local_a0) {
      pppppppcVar14 = pppppppcVar14 + -1;
      if (pppppppcVar14 == (code *******)0x0) {
LAB_00bca498:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    local_98 = local_a0;
    operator_delete(local_a0);
  }
  FUN_00bd12e4(local_80);
  return;
  while( true ) {
    ppppppuVar29 = ppppppuVar29 + 4;
    bVar30 = 0;
    if (ppppppuVar29 == ppppppuVar4) break;
LAB_00bc9f50:
    pppppcVar3 = ppppppcVar24[0x10];
    pppppcVar5 = ppppppcVar24[0x11];
    while( true ) {
      if (pppppcVar3 == pppppcVar5) goto LAB_00bca0a4;
      uVar19 = FUN_007ea2a0(pppppcVar3,ppppppuVar29);
      if ((uVar19 & 1) != 0) break;
      pppppcVar3 = pppppcVar3 + 4;
    }
    if (pppppcVar3 == pppppcVar5) goto LAB_00bca0a4;
  }
LAB_00bca0a8:
  if ((undefined8 *******)(ppppppcVar24 + 0x10) != pppppppuVar27 + 8) {
    FUN_00bd1014();
  }
  *param_3 = bVar30;
  if (local_98 < local_90) {
    if (local_98 == (code *******)0x0) {
LAB_00bca4ac:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    pppppppcVar14 = local_98 + 1;
    *local_98 = local_a8;
  }
  else {
    pppppppcVar14 = (code *******)FUN_00bcf850(&local_a0,&local_a8);
  }
  uVar22 = *(uint *)(ppppppcVar26 + 0x14);
  local_98 = pppppppcVar14;
  if ((uVar22 != 0) && (uVar6 = *(uint *)(local_a8 + 0x14), uVar22 != uVar6)) {
    if (((uVar6 ^ uVar6 - 1) <= uVar6 - 1) ||
       ((((uVar6 = (uVar6 & 0xaaaaaaaa) >> 1 | (uVar6 & 0x55555555) << 1,
          uVar6 = (uVar6 & 0xcccccccc) >> 2 | (uVar6 & 0x33333333) << 2,
          uVar6 = (uVar6 & 0xf0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f) << 4,
          uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8,
          iVar10 = (int)LZCOUNT(uVar6 >> 0x10 | uVar6 << 0x10), 3 < iVar10 - 6U && (iVar10 != 2)) ||
         ((uVar22 & uVar22 - 1) != 0)) ||
        ((uVar6 = (uVar22 & 0xaaaaaaaa) >> 1 | (uVar22 & 0x55555555) << 1,
         uVar6 = (uVar6 & 0xcccccccc) >> 2 | (uVar6 & 0x33333333) << 2,
         uVar6 = (uVar6 & 0xf0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f) << 4,
         uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8,
         iVar10 = (int)LZCOUNT(uVar6 >> 0x10 | uVar6 << 0x10), 3 < iVar10 - 6U && (iVar10 != 2))))))
    {
      *param_3 = 1;
      uVar22 = *(uint *)(ppppppcVar26 + 0x14);
      if (*(uint *)(local_a8 + 0x14) == uVar22) goto LAB_00bca18c;
    }
    *(uint *)(local_a8 + 0x14) = uVar22;
    if (uVar22 != 8) {
      *(undefined4 *)((long)local_a8 + 0xa4) = 0;
    }
    local_68 = &local_70;
    local_70 = (undefined8 *******)local_a8;
    FUN_007b6160(local_a8 + 0x17,&local_68,FUN_00bcf944);
  }
LAB_00bca18c:
  if ((*(byte *)((long)local_a8 + 0xac) & 1) == 0) {
    *param_3 = 1;
  }
  if (*(int *)(ppppppcVar26 + 0x16) != *(int *)(local_a8 + 0x16)) {
    *(int *)(local_a8 + 0x16) = *(int *)(ppppppcVar26 + 0x16);
    local_68 = &local_70;
    local_70 = (undefined8 *******)local_a8;
    FUN_007b6160(local_a8 + 0x1b,&local_68,FUN_00bcf960);
  }
  if (*(int *)((long)ppppppcVar26 + 0xb4) != *(int *)((long)local_a8 + 0xb4)) {
    *(int *)((long)local_a8 + 0xb4) = *(int *)((long)ppppppcVar26 + 0xb4);
  }
LAB_00bca034:
  local_68 = (undefined8 *******)(param_1 + 0x70);
  local_70 = pppppppuVar2;
  lVar15 = FUN_00bd13ec(&local_68,pppppppuVar27 + 4,&DAT_001f94c3,&local_70,&local_a8);
  *(long *)(*(long *)(lVar15 + 0x38) + 8) = param_1 + 8;
  if (ppppppcVar26 != (code ******)0x0) {
    FUN_00bcca68(ppppppcVar26);
    operator_delete(ppppppcVar26);
  }
  pppppppuVar2 = (undefined8 *******)pppppppuVar27[1];
  pppppppuVar31 = pppppppuVar27;
  if ((undefined8 *******)pppppppuVar27[1] == (undefined8 *******)0x0) {
    do {
      pppppppuVar27 = (undefined8 *******)pppppppuVar31[2];
      bVar9 = pppppppuVar31 != (undefined8 *******)*pppppppuVar27;
      pppppppuVar31 = pppppppuVar27;
    } while (bVar9);
  }
  else {
    do {
      pppppppuVar27 = pppppppuVar2;
      pppppppuVar2 = (undefined8 *******)*pppppppuVar27;
    } while ((undefined8 *******)*pppppppuVar27 != (undefined8 *******)0x0);
  }
  if ((undefined8 ********)pppppppuVar27 == &local_80) goto LAB_00bca244;
  goto LAB_00bc9e80;
LAB_00bca0a4:
  bVar30 = 1;
  goto LAB_00bca0a8;
}


// ===== 00bca510  FUN_00bca510 =====

long * FUN_00bca510(long *param_1,long *param_2)

{
  ulong uVar1;
  size_t __n;
  long *__s1;
  ulong uVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  
  plVar7 = param_1 + 1;
  plVar5 = (long *)*plVar7;
  plVar8 = plVar7;
  if (plVar5 != (long *)0x0) {
    __s1 = (long *)*param_2;
    uVar1 = param_2[1];
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      __s1 = param_2;
      uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    }
    do {
      while( true ) {
        plVar4 = plVar5;
        plVar5 = (long *)plVar4[4];
        uVar2 = plVar4[5];
        if (-1 < (char)*(byte *)((long)plVar4 + 0x37)) {
          plVar5 = plVar4 + 4;
          uVar2 = (ulong)*(byte *)((long)plVar4 + 0x37);
        }
        __n = uVar2;
        if (uVar1 <= uVar2) {
          __n = uVar1;
        }
        iVar3 = memcmp(__s1,plVar5,__n);
        plVar7 = plVar4;
        if (iVar3 == 0) break;
        if (-1 < iVar3) goto LAB_00bca558;
LAB_00bca5a8:
        plVar5 = (long *)*plVar4;
        plVar8 = plVar4;
        if ((long *)*plVar4 == (long *)0x0) goto LAB_00bca5c4;
      }
      if (uVar1 == uVar2) goto LAB_00bca644;
      if (uVar1 < uVar2) goto LAB_00bca5a8;
LAB_00bca558:
      plVar5 = (long *)plVar4[1];
    } while ((long *)plVar4[1] != (long *)0x0);
    plVar8 = plVar4 + 1;
  }
LAB_00bca5c4:
  plVar4 = (long *)operator_new(0x58);
  if (plVar4 != (long *)0x0) {
    plVar5 = plVar4 + 4;
    *plVar4 = 0;
    if (plVar5 != (long *)0x0) {
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        FUN_005478d8(plVar5,*param_2,param_2[1]);
      }
      else {
        lVar9 = *param_2;
        lVar6 = param_2[2];
        plVar4[5] = param_2[1];
        *plVar5 = lVar9;
        plVar4[6] = lVar6;
      }
      *plVar4 = 0;
      plVar4[1] = 0;
      plVar4[2] = (long)plVar7;
      plVar4[10] = 0;
      plVar4[9] = 0;
      plVar4[8] = 0;
      plVar4[7] = 0;
      *plVar8 = (long)plVar4;
      plVar5 = plVar4;
      if (*(long *)*param_1 != 0) {
        *param_1 = *(long *)*param_1;
        plVar5 = (long *)*plVar8;
      }
      FUN_005d5b94(param_1[1],plVar5);
      param_1[2] = param_1[2] + 1;
LAB_00bca644:
      return plVar4 + 7;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00bca67c  FUN_00bca67c =====

/* WARNING: Type propagation algorithm not settling */

ulong FUN_00bca67c(long param_1,long param_2)

{
  void **__s2;
  size_t __n;
  uint uVar1;
  undefined8 *******__s1;
  ulong uVar2;
  void *pvVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  void *local_c0;
  ulong uStack_b8;
  ulong local_b0;
  undefined8 *******local_a0;
  ulong uStack_98;
  undefined8 local_90;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  
  if (*(int *)(param_1 + 0xa0) != *(int *)(param_2 + 0xa0)) {
    return (ulong)(*(int *)(param_1 + 0xa0) < *(int *)(param_2 + 0xa0));
  }
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00bca960(&local_60);
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00bca960(&local_80,param_2);
  iVar5 = FUN_007ea95c(&local_60);
  iVar6 = FUN_007ea95c(&local_80);
  if (iVar5 != iVar6) {
    iVar5 = FUN_007ea95c(&local_60);
    iVar6 = FUN_007ea95c(&local_80);
    return (ulong)(iVar6 < iVar5);
  }
  if (*(char *)(param_1 + 0x7f) < '\0') {
    FUN_005478d8(&local_a0,*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70));
    if (-1 < *(char *)(param_2 + 0x7f)) goto LAB_00bca710;
LAB_00bca760:
    FUN_005478d8(&local_c0,*(undefined8 *)(param_2 + 0x68),*(undefined8 *)(param_2 + 0x70));
  }
  else {
    uStack_98 = *(ulong *)(param_1 + 0x70);
    local_a0 = *(undefined8 ********)(param_1 + 0x68);
    local_90 = *(long *)(param_1 + 0x78);
    if (*(char *)(param_2 + 0x7f) < '\0') goto LAB_00bca760;
LAB_00bca710:
    uStack_b8 = *(ulong *)(param_2 + 0x70);
    local_c0 = *(void **)(param_2 + 0x68);
    local_b0 = *(ulong *)(param_2 + 0x78);
  }
  uVar4 = local_b0;
  pvVar3 = local_c0;
  uVar1 = (uint)(char)local_90._7_1_;
  uVar8 = uStack_98;
  __s1 = local_a0;
  if (-1 < (int)uVar1) {
    uVar8 = (ulong)local_90._7_1_;
    __s1 = &local_a0;
  }
  __s2 = (void **)local_c0;
  uVar2 = uStack_b8;
  if (-1 < (long)local_b0) {
    __s2 = &local_c0;
    uVar2 = local_b0 >> 0x38;
  }
  __n = uVar2;
  if (uVar8 <= uVar2) {
    __n = uVar8;
  }
  uVar7 = memcmp(__s1,__s2,__n);
  if (uVar7 == 0) {
    if (uVar8 == uVar2) {
      uVar8 = 0;
      goto joined_r0x00bca7f0;
    }
    uVar7 = 0;
    if (uVar8 < uVar2) {
      uVar7 = 0xffffffff;
    }
  }
  uVar8 = (ulong)uVar7;
joined_r0x00bca7f0:
  if ((long)uVar4 < 0) {
    operator_delete(pvVar3);
    if (-1 < local_90) {
      return uVar8 >> 0x1f;
    }
  }
  else if ((uVar1 >> 7 & 1) == 0) {
    return uVar8 >> 0x1f;
  }
  operator_delete(local_a0);
  return uVar8 >> 0x1f;
}


// ===== 00bca834  FUN_00bca834 =====

undefined8 FUN_00bca834(long param_1,int param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined **local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  
  if (param_2 == 10) {
    uVar5 = FUN_007e9c90(param_1 + 0xb8);
    if ((uVar5 & 1) != 0) {
      return 0;
    }
    plVar3 = *(long **)(param_1 + 0x60);
    for (plVar1 = *(long **)(param_1 + 0x58); plVar1 != plVar3; plVar1 = plVar1 + 1) {
      lVar6 = *plVar1;
      lVar4 = *(long *)(lVar6 + 0x88);
      for (lVar2 = *(long *)(lVar6 + 0x80); lVar2 != lVar4; lVar2 = lVar2 + 0x20) {
        local_80 = &PTR_FUN_00d385d8;
        local_78 = *(undefined4 *)(lVar2 + 8);
        uStack_6c = *(undefined8 *)(lVar2 + 0x14);
        local_74 = *(undefined8 *)(lVar2 + 0xc);
        uVar5 = FUN_007e9cb8(param_1 + 0xb8,&local_80);
        if ((uVar5 & 1) != 0) {
          if (lVar6 == 0) goto LAB_00bca928;
          FUN_00bca960(&local_80,lVar6);
          *(undefined4 *)(param_3 + 8) = local_78;
          goto LAB_00bca934;
        }
      }
    }
LAB_00bca928:
    *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_1 + 0xc0);
    uStack_6c = *(undefined8 *)(param_1 + 0xcc);
    local_74 = *(undefined8 *)(param_1 + 0xc4);
  }
  else {
    if ((param_2 != 2) || (uVar5 = FUN_007e9c90(param_1 + 0x98), (uVar5 & 1) != 0)) {
      return 0;
    }
    *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_1 + 0xa0);
    uStack_6c = *(undefined8 *)(param_1 + 0xac);
    local_74 = *(undefined8 *)(param_1 + 0xa4);
  }
LAB_00bca934:
  *(undefined8 *)(param_3 + 0x14) = uStack_6c;
  *(undefined8 *)(param_3 + 0xc) = local_74;
  return 1;
}


// ===== 00bca960  FUN_00bca960 =====

void FUN_00bca960(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined ***pppuVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined **local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined **local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined **local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  lVar4 = *(long *)(param_2 + 0x80);
  lVar1 = *(long *)(param_2 + 0x88);
  if (lVar4 == lVar1) {
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = &PTR_FUN_00d385d8;
    *(undefined4 *)(param_1 + 3) = 0;
  }
  else {
    if (*(int *)(param_2 + 0x48) == 2) {
      local_48 = *(undefined4 *)(lVar4 + 8);
      uVar6 = *(undefined8 *)(lVar4 + 0x14);
      uVar5 = *(undefined8 *)(lVar4 + 0xc);
    }
    else {
      uStack_40 = 0;
      uStack_3c = 0;
      uStack_38 = 0;
      uStack_34 = 0;
      local_50 = &PTR_FUN_00d48390;
      local_48 = 0;
      local_44 = 0;
      local_60 = 0;
      uStack_58 = 0;
      local_70 = &PTR_FUN_00d48390;
      uStack_68 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      local_90 = &PTR_FUN_00d48390;
      do {
        if ((*(byte *)(lVar4 + 0x1c) >> 1 & 1) == 0) {
          uVar3 = FUN_007ea660(lVar4);
          if ((uVar3 & 1) == 0) {
            uVar3 = FUN_007ea944(lVar4);
            pppuVar2 = &local_90;
            if ((uVar3 & 1) == 0) {
              FUN_007ea31c(&local_50,lVar4);
              if ((*(byte *)(lVar4 + 0x1c) & 1) == 0) goto LAB_00bca9f8;
              break;
            }
          }
          else {
            pppuVar2 = &local_70;
          }
          FUN_007ea31c(pppuVar2,lVar4);
        }
LAB_00bca9f8:
        lVar4 = lVar4 + 0x20;
      } while (lVar4 != lVar1);
      uVar3 = FUN_007e9ca4(&local_50);
      if ((uVar3 & 1) != 0) {
        uVar3 = FUN_007e9ca4(&local_70);
        pppuVar2 = &local_70;
        if (((uVar3 & 1) == 0) ||
           (uVar3 = FUN_007e9ca4(&local_90), pppuVar2 = &local_90, (uVar3 & 1) == 0)) {
          FUN_007ea31c(&local_50,pppuVar2);
        }
      }
      uVar6 = CONCAT44(uStack_38,uStack_3c);
      uVar5 = CONCAT44(uStack_40,local_44);
    }
    *param_1 = &PTR_FUN_00d385d8;
    *(undefined4 *)(param_1 + 1) = local_48;
    *(undefined8 *)((long)param_1 + 0x14) = uVar6;
    *(undefined8 *)((long)param_1 + 0xc) = uVar5;
  }
  return;
}


// ===== 00bcaaac  FUN_00bcaaac =====

void FUN_00bcaaac(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long *****ppppplVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long ****local_58;
  ulong local_50;
  byte bStack_41;
  
  *param_1 = &PTR_FUN_00d482f8;
  param_1[1] = &PTR_FUN_00d48368;
  FUN_007b5d10(param_1 + 2);
  FUN_007b5d10(param_1 + 6);
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xf] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = param_1 + 0xf;
  param_1[0x12] = 0;
  param_1[0x13] = &PTR_FUN_00d385d8;
  param_1[0x17] = &PTR_FUN_00d385d8;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *param_1 = &PTR_FUN_00d48230;
  param_1[1] = &PTR_FUN_00d482a8;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined2 *)(param_1 + 0x1b) = 1;
  param_1[0x1c] = &PTR_FUN_00d482d0;
  lVar4 = *param_2;
  param_1[0x1d] = lVar4;
  if (lVar4 != 0) {
    FUN_00d0f740(1,lVar4 + 8);
  }
  lVar5 = param_2[2];
  lVar4 = param_2[1];
  lVar7 = param_2[4];
  lVar6 = param_2[3];
  param_1[0x22] = 0;
  param_1[0x1f] = lVar5;
  param_1[0x1e] = lVar4;
  param_1[0x21] = lVar7;
  param_1[0x20] = lVar6;
  *(undefined1 *)(param_1 + 0x23) = 1;
  *(undefined8 *)((long)param_1 + 0x124) = 0;
  *(undefined8 *)((long)param_1 + 300) = 0;
  *(undefined8 *)((long)param_1 + 0x11c) = 0;
  *(undefined4 *)((long)param_1 + 0x134) = 0;
  param_1[0x27] = param_4;
  param_1[0x28] = param_3;
  param_1[0x29] = 0;
  (**(code **)(*(long *)param_1[0x1e] + 0x10))
            (&local_58,(long *)param_1[0x1e],"WebRTC-AllowMACBasedIPv6",0x18);
  bVar3 = false;
  uVar1 = local_50;
  if (-1 < (char)bStack_41) {
    uVar1 = (ulong)bStack_41;
  }
  if (6 < uVar1) {
    ppppplVar2 = (long *****)local_58;
    if (-1 < (char)bStack_41) {
      ppppplVar2 = &local_58;
    }
    bVar3 = *(int *)ppppplVar2 == 0x62616e45 && *(int *)((long)ppppplVar2 + 3) == 0x64656c62;
  }
  if ((char)bStack_41 < '\0') {
    operator_delete(local_58);
  }
  *(bool *)(param_1 + 0x2a) = bVar3;
  (**(code **)(*(long *)param_1[0x1e] + 0x10))
            (&local_58,(long *)param_1[0x1e],"WebRTC-BindUsingInterfaceName",0x1d);
  if (-1 < (char)bStack_41) {
    local_50 = (ulong)bStack_41;
  }
  if (local_50 < 8) {
    bVar3 = true;
  }
  else {
    ppppplVar2 = (long *****)local_58;
    if (-1 < (char)bStack_41) {
      ppppplVar2 = &local_58;
    }
    bVar3 = *ppppplVar2 != (long ****)0x64656c6261736944;
  }
  if ((char)bStack_41 < '\0') {
    operator_delete(local_58);
  }
  *(bool *)((long)param_1 + 0x151) = bVar3;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  return;
}


// ===== 00bcacd0  FUN_00bcacd0 =====

/* WARNING: Removing unreachable block (ram,0x00bcae24) */

void FUN_00bcacd0(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  void *pvVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  void *pvVar7;
  
  *param_1 = &PTR_FUN_00d48230;
  param_1[1] = &PTR_FUN_00d482a8;
  param_1[0x1c] = &PTR_FUN_00d482d0;
  if (param_1[0x2e] != 0) {
    FUN_007ebdcc();
    pvVar7 = (void *)param_1[0x2e];
    if ((pvVar7 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar7), iVar1 == 1)) {
      operator_delete(pvVar7);
    }
  }
  pvVar7 = (void *)param_1[0x2b];
  if (pvVar7 != (void *)0x0) {
    pvVar4 = (void *)param_1[0x2c];
    uVar5 = (ulong)(((long)pvVar7 - (long)pvVar4) * 0x1333333333333333) >> 3;
    uVar6 = (long)pvVar4 * -0x1333333333333333 - 8U >> 3;
    if (uVar6 <= uVar5) {
      uVar5 = uVar6;
    }
    if ((1 < uVar5) && ((((int)pvVar7 - (int)pvVar4 | -(int)pvVar4) & 7U) == 0)) {
      uVar5 = uVar5 & 0x1ffffffffffffffe;
      pvVar4 = (void *)((long)pvVar4 + uVar5 * -0x28);
      do {
        uVar5 = uVar5 - 2;
      } while (uVar5 != 0);
    }
    do {
      if (pvVar4 == pvVar7) {
        param_1[0x2c] = pvVar7;
        operator_delete(pvVar7);
        goto LAB_00bcadd4;
      }
      pvVar4 = (void *)((long)pvVar4 + -0x28);
    } while (pvVar4 != (void *)0x0);
LAB_00bcadb0:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
LAB_00bcadd4:
  plVar2 = (long *)param_1[0x29];
  param_1[0x29] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  pvVar7 = (void *)param_1[0x24];
  if (pvVar7 != (void *)0x0) {
    pvVar4 = (void *)param_1[0x25];
    pvVar3 = pvVar7;
    if (pvVar7 != pvVar4) {
      do {
        pvVar4 = (void *)((long)pvVar4 + -0x18);
        if (pvVar4 == (void *)0x0) goto LAB_00bcadb0;
      } while (pvVar4 != pvVar7);
      pvVar3 = (void *)param_1[0x24];
    }
    param_1[0x25] = pvVar7;
    operator_delete(pvVar3);
  }
  plVar2 = (long *)param_1[0x1d];
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar2 + 1), iVar1 == 1)) {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  FUN_00bcd384(param_1);
  return;
}


// ===== 00bcae90  FUN_00bcae90 =====

void FUN_00bcae90(long param_1)

{
  FUN_00bcacd0(param_1 + -8);
  return;
}


// ===== 00bcae9c  FUN_00bcae9c =====

void FUN_00bcae9c(long param_1)

{
  FUN_00bcacd0(param_1 + -0xe0);
  return;
}


// ===== 00bcaea8  FUN_00bcaea8 =====

void FUN_00bcaea8(void *param_1)

{
  FUN_00bcacd0();
  operator_delete(param_1);
  return;
}


// ===== 00bcaed8  FUN_00bcaed8 =====

void FUN_00bcaed8(long param_1)

{
  FUN_00bcacd0((void *)(param_1 + -8));
  operator_delete((void *)(param_1 + -8));
  return;
}


// ===== 00bcaf0c  FUN_00bcaf0c =====

void FUN_00bcaf0c(long param_1)

{
  FUN_00bcacd0((void *)(param_1 + -0xe0));
  operator_delete((void *)(param_1 + -0xe0));
  return;
}


// ===== 00bcaf40  FUN_00bcaf40 =====

void FUN_00bcaf40(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  void *pvVar4;
  undefined8 *puVar5;
  undefined1 auStack_b8 [8];
  int local_b0;
  undefined8 local_ac;
  undefined8 uStack_a4;
  undefined1 auStack_98 [8];
  int local_90;
  undefined8 local_8c;
  undefined8 uStack_84;
  undefined8 *local_78;
  undefined8 *puStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 local_48;
  byte local_24 [4];
  
  if (*(int *)(param_1 + 0x11c) != 0) {
    local_58 = (undefined8 *)0x0;
    local_50 = (undefined8 *)0x0;
    local_48 = 0;
    uVar3 = FUN_00bcbb64(param_1,0,&local_58);
    uVar2 = local_48;
    puVar5 = local_50;
    puVar1 = local_58;
    if ((uVar3 & 1) == 0) {
      FUN_007b6160(param_1 + 0x30,auStack_98,FUN_00441e10);
    }
    else {
      local_50 = (undefined8 *)0x0;
      local_48 = 0;
      local_78 = local_58;
      puStack_70 = puVar5;
      local_68 = uVar2;
      uStack_60 = 0;
      local_58 = (undefined8 *)0x0;
      FUN_00bc9b58(param_1,&local_78,local_24,&uStack_60);
      if (puVar1 != (undefined8 *)0x0) {
        while (puVar1 != puVar5) {
          puVar5 = puVar5 + -1;
          if (puVar5 == (undefined8 *)0x0) goto LAB_00bcb11c;
          pvVar4 = (void *)*puVar5;
          *puVar5 = 0;
          if (pvVar4 != (void *)0x0) {
            FUN_00bcca68(pvVar4);
            operator_delete(pvVar4);
          }
        }
        operator_delete(puVar1);
      }
      FUN_00bcbfd4(auStack_98,param_1,2);
      FUN_00bcbfd4(auStack_b8,param_1,10);
      if (local_90 == 2) {
        *(undefined4 *)(param_1 + 0xa0) = 2;
        *(undefined8 *)(param_1 + 0xac) = uStack_84;
        *(undefined8 *)(param_1 + 0xa4) = local_8c;
      }
      if (local_b0 == 10) {
        *(undefined4 *)(param_1 + 0xc0) = 10;
        *(undefined8 *)(param_1 + 0xcc) = uStack_a4;
        *(undefined8 *)(param_1 + 0xc4) = local_ac;
      }
      if (((local_24[0] & 1) != 0) || ((*(byte *)(param_1 + 0x118) & 1) == 0)) {
        FUN_007b6160(param_1 + 0x10,auStack_98,FUN_00441e10);
        *(undefined1 *)(param_1 + 0x118) = 1;
      }
    }
    puVar1 = local_58;
    puVar5 = local_50;
    if (local_58 != (undefined8 *)0x0) {
      while (puVar1 != puVar5) {
        puVar5 = puVar5 + -1;
        if (puVar5 == (undefined8 *)0x0) {
LAB_00bcb11c:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        pvVar4 = (void *)*puVar5;
        *puVar5 = 0;
        if (pvVar4 != (void *)0x0) {
          FUN_00bcca68(pvVar4);
          operator_delete(pvVar4);
        }
      }
      local_50 = puVar1;
      operator_delete(local_58);
    }
  }
  return;
}


// ===== 00bcb130  FUN_00bcb130 =====

void FUN_00bcb130(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  size_t sVar3;
  char *__s;
  long *plVar4;
  
  if ((*(byte *)(param_3 + 0x10) >> 3 & 1) != 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    uVar1 = DAT_001f5b28;
    *(undefined1 *)((long)param_1 + 0xc) = 1;
    *param_1 = uVar1;
LAB_00bcb1d8:
    *(undefined4 *)(param_1 + 2) = 0;
    return;
  }
  plVar4 = *(long **)(param_2 + 0x148);
  __s = *(char **)(param_3 + 8);
  if (plVar4 == (long *)0x0) {
    if (__s != (char *)0x0) {
      sVar3 = strlen(__s);
      uVar2 = FUN_00bc9498(__s,sVar3);
      *(undefined4 *)((long)param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 1) = 0;
      *(undefined4 *)param_1 = uVar2;
      *(undefined1 *)((long)param_1 + 0xc) = 1;
      goto LAB_00bcb1d8;
    }
  }
  else if (__s != (char *)0x0) {
    sVar3 = strlen(__s);
                    /* WARNING: Could not recover jumptable at 0x00bcb190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x20))(param_1,plVar4,__s,sVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/string_view:278: libc++ Hardening assertion __s != nullptr failed: null pointer passed to non-null argument of char_traits<...>::length\n"
            );
}


// ===== 00bcb204  FUN_00bcb204 =====

/* WARNING: Removing unreachable block (ram,0x00bcb544) */
/* WARNING: Removing unreachable block (ram,0x00bcb344) */
/* WARNING: Type propagation algorithm not settling */

void FUN_00bcb204(undefined8 ******param_1,undefined8 *******param_2,long *param_3,uint param_4,
                 long param_5)

{
  ulong uVar1;
  undefined8 *******pppppppuVar2;
  undefined8 ******__n;
  undefined8 *puVar3;
  undefined8 *****pppppuVar4;
  undefined1 *puVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  size_t sVar10;
  long *******__dest;
  undefined8 *******pppppppuVar11;
  long lVar12;
  undefined8 ******ppppppuVar13;
  undefined8 *puVar14;
  undefined8 *****pppppuVar15;
  undefined8 uVar16;
  char *pcVar17;
  undefined8 ******ppppppuVar18;
  undefined8 *******pppppppuVar19;
  undefined4 uVar20;
  undefined8 *******pppppppuVar21;
  long *******ppppppplVar22;
  undefined8 *******local_178;
  undefined **local_170;
  undefined4 local_168;
  undefined8 local_164;
  undefined8 uStack_15c;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined4 local_140;
  undefined8 *******local_130;
  undefined8 ******ppppppuStack_128;
  undefined1 *local_120;
  undefined **local_118;
  int local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 local_fc;
  undefined **local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined **ppuStack_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  uint uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 *******local_b8;
  undefined8 *******local_b0;
  undefined8 uStack_a8;
  long *******local_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 uStack_79;
  undefined8 *******local_78 [3];
  
  local_b8 = &local_b0;
  local_b0 = (undefined8 *******)0x0;
  uStack_a8 = 0;
  if (param_2 != (undefined8 *******)0x0) {
    pppppppuVar19 = param_2;
    do {
      uStack_bc = 0xaaaaaaaa;
      ppuStack_d8 = &PTR_FUN_00d385d8;
      local_d0 = 0;
      uStack_cc = 0;
      uStack_c8 = 0;
      uStack_c4 = 0;
      uStack_c0 = 0;
      local_f8 = &PTR_FUN_00d385d8;
      local_f0 = 0;
      uStack_e8 = 0;
      local_e0 = 0xaaaaaaaa00000000;
      local_110 = 0;
      uStack_10c = 0;
      uStack_108 = 0;
      uStack_104 = 0;
      uStack_100 = 0;
      local_118 = &PTR_FUN_00d48390;
      local_fc = 0;
      if ((((pppppppuVar19[3] != (undefined8 ******)0x0) &&
           (pppppppuVar19[4] != (undefined8 ******)0x0)) &&
          ((*(ushort *)pppppppuVar19[3] | 8) == 10)) &&
         (uVar9 = (**(code **)(*param_3 + 0x10))(param_3,pppppppuVar19,&local_118,&local_f8),
         (uVar9 & 1) != 0)) {
        if ((*(byte *)(pppppppuVar19 + 2) >> 6 & 1) == 0) {
          uVar9 = FUN_00417e08();
          if ((uVar9 & 1) == 0) {
            FUN_007e9f18(&local_a0,&local_118);
            uVar16 = 0x1549;
            pcVar17 = "Skip interface because of not IFF_RUNNING: ";
            goto LAB_00bcb338;
          }
        }
        else {
          ppppppuVar18 = pppppppuVar19[3];
          if (*(short *)ppppppuVar18 == 10) {
            if (local_110 == 10) {
              pppppuVar15 = param_1[0x2a];
              uVar9 = FUN_007ea660(&local_118);
              if ((uVar9 & 1) == 0) {
                uVar9 = FUN_007ea91c(&local_118);
                if ((((ulong)pppppuVar15 & 1) == 0) && ((uVar9 & 1) != 0)) {
                  uVar9 = FUN_00417e08();
                  if ((uVar9 & 1) == 0) {
                    FUN_007e9f18(&local_a0,&local_118);
                    uVar16 = 0x5c1;
                    pcVar17 = "Ignore Mac based IP:";
                    goto LAB_00bcb338;
                  }
                }
                else {
                  if (((byte)local_fc >> 1 & 1) == 0) {
                    ppppppuVar18 = pppppppuVar19[3];
                    goto LAB_00bcb42c;
                  }
                  uVar9 = FUN_00417e08();
                  if ((uVar9 & 1) == 0) {
                    FUN_007e9f18(&local_a0,&local_118);
                    uVar16 = 0x5f1;
                    pcVar17 = "Ignore deprecated IP:";
                    goto LAB_00bcb338;
                  }
                }
              }
              else {
                uVar9 = FUN_0044075c();
                if ((uVar9 & 1) == 0) {
                  FUN_007e9f18(&local_a0,&local_118);
                  uVar16 = 0x590;
                  pcVar17 = "Ignore link local IP:";
LAB_00bcb338:
                  FUN_00623bb0(&DAT_001f4e90,"../../rtc_base/network.cc",uVar16,pcVar17,&local_a0);
                }
              }
              goto LAB_00bcb278;
            }
LAB_00bcb42c:
            uVar20 = *(undefined4 *)(ppppppuVar18 + 3);
          }
          else {
            uVar20 = 0;
          }
          iVar7 = FUN_007ea83c(&local_f8);
          FUN_007ea6ac(&local_a0,&local_118,iVar7);
          local_d0 = uStack_98;
          uStack_c4 = uStack_8c;
          uStack_c0 = uStack_88;
          uStack_cc = uStack_94;
          uStack_c8 = uStack_90;
          local_120 = &DAT_aaaaaaaaaaaaaaaa;
          ppppppuStack_128 = (undefined8 ******)&DAT_aaaaaaaaaaaaaaaa;
          local_130 = (undefined8 *******)&DAT_aaaaaaaaaaaaaaaa;
          ppppppplVar22 = (long *******)pppppppuVar19[1];
          if (ppppppplVar22 == (long *******)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/string:1063: libc++ Hardening assertion __s != nullptr failed: basic_string(const char*) detected nullptr\n"
                      );
          }
          sVar10 = strlen((char *)ppppppplVar22);
          if (0x7ffffffffffffff6 < sVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_005d45ec();
          }
          if (sVar10 < 0x17) {
            uStack_8c = CONCAT13((char)sVar10,(undefined3)uStack_8c);
            __dest = (long *******)&local_a0;
          }
          else {
            uVar9 = (sVar10 & 0x7ffffffffffffff8) + 8;
            uVar1 = 0x19;
            if (uVar9 != 0x18) {
              uVar1 = uVar9;
            }
            __dest = (long *******)operator_new(uVar1);
            uStack_8c = (uint)(uVar1 >> 0x20) | 0x80000000;
            uStack_98 = (undefined4)sVar10;
            uStack_94 = (undefined4)(sVar10 >> 0x20);
            uStack_90 = (undefined4)uVar1;
            local_a0 = __dest;
          }
          if ((long *******)((long)__dest + sVar10) < __dest) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
                      );
          }
          if ((__dest <= ppppppplVar22) && (ppppppplVar22 < (long *******)((long)__dest + sVar10)))
          {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                      );
          }
          memmove(__dest,ppppppplVar22,sVar10);
          *(undefined1 *)((long)__dest + sVar10) = 0;
          uVar9 = CONCAT44(uStack_94,uStack_98);
          ppppppplVar22 = local_a0;
          if (-1 < (int)uStack_8c) {
            uVar9 = (ulong)uStack_8c._3_1_;
            ppppppplVar22 = (long *******)&local_a0;
          }
          FUN_00bc92b8(&local_130,ppppppplVar22,uVar9,&ppuStack_d8,iVar7);
          if (local_b0 != (undefined8 *******)0x0) {
            pppppppuVar21 = local_b0;
            pppppppuVar11 = local_130;
            ppppppuVar18 = ppppppuStack_128;
            if (-1 < (long)local_120) {
              pppppppuVar11 = &local_130;
              ppppppuVar18 = (undefined8 ******)((ulong)local_120 >> 0x38);
            }
            do {
              while( true ) {
                pppppppuVar2 = (undefined8 *******)pppppppuVar21[4];
                ppppppuVar13 = pppppppuVar21[5];
                if (-1 < (char)*(byte *)((long)pppppppuVar21 + 0x37)) {
                  pppppppuVar2 = pppppppuVar21 + 4;
                  ppppppuVar13 = (undefined8 ******)(ulong)*(byte *)((long)pppppppuVar21 + 0x37);
                }
                __n = ppppppuVar13;
                if (ppppppuVar18 <= ppppppuVar13) {
                  __n = ppppppuVar18;
                }
                iVar8 = memcmp(pppppppuVar11,pppppppuVar2,(size_t)__n);
                if (iVar8 != 0) break;
                if (ppppppuVar18 == ppppppuVar13) {
                  if ((undefined8 ********)pppppppuVar21 != &local_b0) {
                    ppppppuVar18 = pppppppuVar21[7];
                    pppppuVar15 = ppppppuVar18[0x11];
                    if (pppppuVar15 < ppppppuVar18[0x12]) {
                      if (pppppuVar15 == (undefined8 *****)0x0) goto LAB_00bcb998;
                      *pppppuVar15 = (undefined8 ****)&PTR_FUN_00d385d8;
                      *(int *)(pppppuVar15 + 1) = local_110;
                      *pppppuVar15 = (undefined8 ****)&PTR_FUN_00d48390;
                      *(ulong *)((long)pppppuVar15 + 0x14) = CONCAT44(uStack_100,uStack_104);
                      *(ulong *)((long)pppppuVar15 + 0xc) = CONCAT44(uStack_108,uStack_10c);
                      *(undefined4 *)((long)pppppuVar15 + 0x1c) = local_fc;
                      ppppppuVar18[0x11] = pppppuVar15 + 4;
                    }
                    else {
                      pppppuVar15 = (undefined8 *****)FUN_00bcf5a0(ppppppuVar18 + 0x10,&local_118);
                      ppppppuVar18[0x11] = pppppuVar15;
                    }
                    goto joined_r0x00bcb95c;
                  }
                  goto LAB_00bcb644;
                }
                if (ppppppuVar13 <= ppppppuVar18) goto LAB_00bcb57c;
LAB_00bcb5cc:
                pppppppuVar21 = (undefined8 *******)*pppppppuVar21;
                if (pppppppuVar21 == (undefined8 *******)0x0) goto LAB_00bcb644;
              }
              if (iVar8 < 0) goto LAB_00bcb5cc;
LAB_00bcb57c:
              pppppppuVar2 = pppppppuVar21 + 1;
              pppppppuVar21 = (undefined8 *******)*pppppppuVar2;
            } while ((undefined8 *******)*pppppppuVar2 != (undefined8 *******)0x0);
          }
LAB_00bcb644:
          uStack_148 = &DAT_aaaaaaaaaaaaaaaa;
          local_150 = &DAT_aaaaaaaaaaaaaaaa;
          local_140 = 0xaaaaaaaa;
          FUN_00bcb130(&local_150,param_1,pppppppuVar19);
          if ((int)local_150 != 8) {
            uStack_15c = CONCAT44(uStack_c0,uStack_c4);
            local_164 = CONCAT44(uStack_c8,uStack_cc);
            pppppuVar15 = param_1[0x2b];
            pppppuVar4 = param_1[0x2c];
            local_170 = &PTR_FUN_00d385d8;
            local_168 = local_d0;
            for (; pppppuVar15 != pppppuVar4; pppppuVar15 = pppppuVar15 + 5) {
              if (*(int *)(pppppuVar15 + 4) <= iVar7) {
                uStack_98 = 0xaaaaaaaa;
                uStack_94 = 0xaaaaaaaa;
                local_a0 = (long *******)&DAT_aaaaaaaaaaaaaaaa;
                uStack_88 = 0xaaaaaaaa;
                uStack_84 = 0xaaaaaaaa;
                uStack_90 = 0xaaaaaaaa;
                uStack_8c = 0xaaaaaaaa;
                FUN_007ea6ac(&local_170);
                uVar9 = FUN_007e9cb8(&local_a0,pppppuVar15);
                if ((uVar9 & 1) != 0) {
                  local_150 = (undefined1 *)CONCAT44((int)local_150,8);
                  break;
                }
              }
            }
          }
          local_178 = (undefined8 *******)&DAT_aaaaaaaaaaaaaaaa;
          ppppppuVar18 = pppppppuVar19[1];
          if (ppppppuVar18 == (undefined8 ******)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/string_view:278: libc++ Hardening assertion __s != nullptr failed: null pointer passed to non-null argument of char_traits<...>::length\n"
                      );
          }
          sVar10 = strlen((char *)ppppppuVar18);
          puVar5 = local_150;
          pppppppuVar11 = (undefined8 *******)operator_new(0xf8);
          FUN_00bcc860(pppppppuVar11,ppppppuVar18,sVar10,ppppppuVar18,sVar10,&ppuStack_d8,iVar7,
                       (ulong)puVar5 & 0xffffffff);
          ppppppuVar18 = pppppppuVar11[0x11];
          *pppppppuVar11 = param_1;
          *(undefined4 *)(pppppppuVar11 + 0x13) = uVar20;
          local_178 = pppppppuVar11;
          if (ppppppuVar18 < pppppppuVar11[0x12]) {
            if (ppppppuVar18 == (undefined8 ******)0x0) goto LAB_00bcb998;
            ppppppuVar13 = ppppppuVar18 + 4;
            *ppppppuVar18 = (undefined8 *****)&PTR_FUN_00d385d8;
            *(int *)(ppppppuVar18 + 1) = local_110;
            *ppppppuVar18 = (undefined8 *****)&PTR_FUN_00d48390;
            *(ulong *)((long)ppppppuVar18 + 0x14) = CONCAT44(uStack_100,uStack_104);
            *(ulong *)((long)ppppppuVar18 + 0xc) = CONCAT44(uStack_108,uStack_10c);
            *(undefined4 *)((long)ppppppuVar18 + 0x1c) = local_fc;
          }
          else {
            ppppppuVar13 = (undefined8 ******)FUN_00bcf5a0(pppppppuVar11 + 0x10,&local_118);
          }
          pppppppuVar21 = local_178;
          pppppppuVar11[0x11] = ppppppuVar13;
          if (uStack_148._4_1_ == '\x01') {
            bVar6 = FUN_00bcba00(param_1,local_178);
            bVar6 = bVar6 & 1;
          }
          else {
            bVar6 = 1;
          }
          *(byte *)((long)pppppppuVar21 + 0x9c) = bVar6;
          if (*(int *)((long)local_178 + 0xa4) != local_150._4_4_) {
            *(int *)((long)local_178 + 0xa4) = local_150._4_4_;
            local_a0 = (long *******)local_78;
            local_78[0] = local_178;
            FUN_007b6160(local_178 + 0x17,&local_a0,FUN_00bcf944);
          }
          if (*(int *)(local_178 + 0x16) != (int)uStack_148) {
            *(int *)(local_178 + 0x16) = (int)uStack_148;
            local_a0 = (long *******)local_78;
            local_78[0] = local_178;
            FUN_007b6160(local_178 + 0x1b,&local_a0,FUN_00bcf960);
          }
          pppppppuVar11 = local_178;
          *(undefined4 *)((long)local_178 + 0xb4) = local_140;
          if (((param_4 & 1) != 0) || ((*(byte *)((long)local_178 + 0x9c) & 1) == 0)) {
            local_78[0] = &local_130;
            local_a0 = (long *******)&local_b8;
            lVar12 = FUN_00bd15f0(&local_a0,&local_130,&DAT_001f94c3,local_78,&uStack_79);
            pppppppuVar21 = local_178;
            *(undefined8 ********)(lVar12 + 0x38) = pppppppuVar11;
            puVar3 = *(undefined8 **)(param_5 + 8);
            if (puVar3 < *(undefined8 **)(param_5 + 0x10)) {
              if (puVar3 == (undefined8 *)0x0) {
LAB_00bcb998:
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s",
                           "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                          );
              }
              local_178 = (undefined8 *******)0x0;
              puVar14 = puVar3 + 1;
              *puVar3 = pppppppuVar21;
            }
            else {
              puVar14 = (undefined8 *)FUN_00bd0f04(param_5,&local_178);
            }
            *(undefined8 **)(param_5 + 8) = puVar14;
            pppppppuVar11 = local_178;
          }
          local_178 = (undefined8 *******)0x0;
          if (pppppppuVar11 != (undefined8 *******)0x0) {
            FUN_00bcca68(pppppppuVar11);
            operator_delete(pppppppuVar11);
          }
joined_r0x00bcb95c:
          if ((long)local_120 < 0) {
            operator_delete(local_130);
          }
        }
      }
LAB_00bcb278:
      pppppppuVar19 = (undefined8 *******)*pppppppuVar19;
      param_2 = local_b0;
    } while (pppppppuVar19 != (undefined8 *******)0x0);
  }
  local_a0 = (long *******)&local_b8;
  FUN_00bd155c(&local_a0,param_2);
  return;
}


// ===== 00bcba00  FUN_00bcba00 =====

bool FUN_00bcba00(long param_1,long param_2)

{
  undefined8 *__s1;
  size_t sVar1;
  undefined8 *__s2;
  undefined8 *puVar2;
  byte bVar3;
  byte bVar4;
  size_t __n;
  int iVar5;
  ulong uVar6;
  int *__s1_00;
  undefined8 *puVar7;
  
  puVar7 = *(undefined8 **)(param_1 + 0x120);
  puVar2 = *(undefined8 **)(param_1 + 0x128);
  bVar3 = *(byte *)(param_2 + 0x27);
  if (puVar7 != puVar2) {
    __n = *(size_t *)(param_2 + 0x18);
    __s1 = (undefined8 *)*(void **)(param_2 + 0x10);
    if (-1 < (char)bVar3) {
      __n = (ulong)bVar3;
      __s1 = (undefined8 *)(param_2 + 0x10);
    }
    do {
      bVar4 = *(byte *)((long)puVar7 + 0x17);
      sVar1 = puVar7[1];
      if (-1 < (char)bVar4) {
        sVar1 = (ulong)bVar4;
      }
      if (__n == sVar1) {
        __s2 = (undefined8 *)*puVar7;
        if (-1 < (char)bVar4) {
          __s2 = puVar7;
        }
        iVar5 = memcmp(__s1,__s2,__n);
        if (iVar5 == 0) {
          return true;
        }
      }
      puVar7 = puVar7 + 3;
    } while (puVar7 != puVar2);
  }
  __s1_00 = (int *)(param_2 + 0x10);
  if ((char)bVar3 < '\0') {
    __s1_00 = *(int **)__s1_00;
    iVar5 = strncmp((char *)__s1_00,"vmnet",5);
    if (iVar5 == 0) {
      return true;
    }
    iVar5 = strncmp((char *)__s1_00,"vnic",4);
    if (iVar5 == 0) {
      return true;
    }
  }
  else {
    if (*__s1_00 == 0x656e6d76 && *(char *)(param_2 + 0x14) == 't') {
      return true;
    }
    if (*__s1_00 == 0x63696e76) {
      return true;
    }
  }
  iVar5 = strncmp((char *)__s1_00,"vboxnet",7);
  if (iVar5 == 0) {
    return true;
  }
  if (*(int *)(param_2 + 0x48) != 2) {
    return false;
  }
  uVar6 = FUN_007e9c48(param_2 + 0x40);
  return (uVar6 & 0xff000000) == 0;
}


// ===== 00bcbb64  FUN_00bcbb64 =====

bool FUN_00bcbb64(undefined8 param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  undefined4 *puVar3;
  long *plVar4;
  char *local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined1 *local_28;
  
  local_28 = &DAT_aaaaaaaaaaaaaaaa;
  iVar1 = FUN_00bd1bec(&local_28);
  if (iVar1 == 0) {
    plVar4 = (long *)FUN_00bd20ac();
    FUN_00bcb204(param_1,local_28,plVar4,param_2 & 1,param_3);
    FUN_00bd1e84(local_28);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))(plVar4);
    }
  }
  else {
    uVar2 = FUN_004249b0();
    if ((uVar2 & 1) == 0) {
      puVar3 = (undefined4 *)__errno();
      uStack_44 = *puVar3;
      local_58 = "../../rtc_base/network.cc";
      local_50 = 0x17db;
      local_48 = 1;
      FUN_00623bb0(&DAT_00257f33,&local_58,"getifaddrs failed to gather interface data: ",iVar1);
    }
  }
  return iVar1 == 0;
}


// ===== 00bcbc50  FUN_00bcbc50 =====

void FUN_00bcbc50(long param_1)

{
  int iVar1;
  long *plVar2;
  void *pvVar3;
  long *plVar4;
  long lVar5;
  long *local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  plVar2 = (long *)FUN_007e06bc();
  *(long **)(param_1 + 0x110) = plVar2;
  if (*(int *)(param_1 + 0x11c) == 0) {
    FUN_007ebca0(local_50);
    plVar2 = local_50[0];
    pvVar3 = *(void **)(param_1 + 0x170);
    local_50[0] = (long *)0x0;
    *(long **)(param_1 + 0x170) = plVar2;
    if (pvVar3 != (void *)0x0) {
      iVar1 = FUN_00d0f7a0(0xffffffff,pvVar3);
      if (iVar1 == 1) {
        operator_delete(pvVar3);
      }
      plVar2 = local_50[0];
      if ((local_50[0] != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,local_50[0]), iVar1 == 1)
         ) {
        operator_delete(plVar2);
      }
      plVar2 = *(long **)(param_1 + 0x170);
    }
    plVar4 = *(long **)(param_1 + 0x110);
    if (plVar2 != (long *)0x0) {
      FUN_00d0f740(1,plVar2);
    }
    local_50[0] = (long *)operator_new(0x30);
    *local_50[0] = (long)plVar2;
    local_50[0][4] = (long)FUN_004473ec;
    local_50[0][5] = (long)FUN_00bd1798;
    local_50[0][2] = param_1;
    local_40 = FUN_005db390;
    pcStack_38 = FUN_005db348;
    (**(code **)(*plVar4 + 8))(plVar4,local_50,&uStack_11,&uStack_12);
    (*local_40)(0,local_50,local_50);
    FUN_00bcbe24(param_1);
  }
  else if (*(char *)(param_1 + 0x118) == '\x01') {
    lVar5 = *(long *)(param_1 + 0x170);
    if (lVar5 != 0) {
      FUN_00d0f740(1,lVar5);
    }
    local_50[0] = (long *)operator_new(0x30);
    *local_50[0] = lVar5;
    local_50[0][4] = (long)FUN_004473ec;
    local_50[0][5] = (long)FUN_00bd1760;
    local_50[0][2] = param_1;
    local_40 = FUN_005db390;
    pcStack_38 = FUN_005db348;
    (**(code **)(*plVar2 + 8))(plVar2,local_50,&uStack_11,&uStack_12);
    (*local_40)(0,local_50,local_50);
  }
  *(int *)(param_1 + 0x11c) = *(int *)(param_1 + 0x11c) + 1;
  return;
}


// ===== 00bcbe24  FUN_00bcbe24 =====

void FUN_00bcbe24(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  code *pcVar6;
  
  puVar1 = *(undefined8 **)(param_1 + 0x138);
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  plVar4 = *(long **)(param_1 + 0x148);
  if (plVar4 == (long *)0x0) {
    lVar2 = (**(code **)*puVar1)(puVar1,*(undefined8 *)(param_1 + 0xf0));
    plVar4 = *(long **)(param_1 + 0x148);
    *(long *)(param_1 + 0x148) = lVar2;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))(plVar4);
      lVar2 = *(long *)(param_1 + 0x148);
    }
    if (lVar2 == 0) {
      return;
    }
    lVar5 = *(long *)(lVar2 + 0x20);
    *(undefined8 *)(lVar2 + 0x18) = 0;
    *(undefined **)(lVar2 + 0x20) = &DAT_001fbc50;
    pcVar6 = *(code **)(lVar5 + 8);
    if (pcVar6 != (code *)0x0) {
      (*pcVar6)(*(undefined8 *)(lVar2 + 8));
    }
    *(long *)(lVar2 + 8) = param_1;
    *(code **)(lVar2 + 0x18) = FUN_00bd1864;
    *(undefined **)(lVar2 + 0x20) = &DAT_00257f38;
    plVar4 = *(long **)(param_1 + 0x148);
  }
  uVar3 = (**(code **)(*plVar4 + 0x28))(plVar4);
  if ((uVar3 & 1) != 0) {
    lVar2 = FUN_007e1210(*(undefined8 *)(param_1 + 0x110));
    *(long *)(lVar2 + 8) = param_1 + 0xe0;
  }
                    /* WARNING: Could not recover jumptable at 0x00bcbef4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x148) + 0x10))();
  return;
}


// ===== 00bcbf10  FUN_00bcbf10 =====

void FUN_00bcbf10(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  void *pvVar4;
  
  if ((*(int *)(param_1 + 0x11c) != 0) &&
     (iVar1 = *(int *)(param_1 + 0x11c) + -1, *(int *)(param_1 + 0x11c) = iVar1, iVar1 == 0)) {
    FUN_007ebdcc(*(undefined8 *)(param_1 + 0x170));
    pvVar4 = *(void **)(param_1 + 0x170);
    if ((pvVar4 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar4), iVar1 == 1)) {
      operator_delete(pvVar4);
    }
    *(undefined8 *)(param_1 + 0x170) = 0;
    *(undefined1 *)(param_1 + 0x118) = 0;
    if (*(long **)(param_1 + 0x148) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x148) + 0x18))();
      uVar2 = (**(code **)(**(long **)(param_1 + 0x148) + 0x28))();
      if (((uVar2 & 1) != 0) &&
         (lVar3 = FUN_007e1210(*(undefined8 *)(param_1 + 0x110)),
         *(long *)(lVar3 + 8) == param_1 + 0xe0)) {
        lVar3 = FUN_007e1210(*(undefined8 *)(param_1 + 0x110));
        *(undefined8 *)(lVar3 + 8) = 0;
      }
    }
  }
  return;
}


// ===== 00bcbfd4  FUN_00bcbfd4 =====

void FUN_00bcbfd4(undefined8 *param_1,long param_2,undefined8 param_3)

{
  char *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  long lVar6;
  undefined4 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char *local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  
  plVar5 = (long *)(**(code **)(**(long **)(param_2 + 0x140) + 0x10))
                             (*(long **)(param_2 + 0x140),param_3,2);
  if (plVar5 == (long *)0x0) {
    uVar8 = FUN_004249b0();
    if ((uVar8 & 1) == 0) {
      puVar7 = (undefined4 *)__errno();
      uStack_64 = *puVar7;
      local_78 = "../../rtc_base/network.cc";
      local_70 = 0x2213;
      local_68 = 1;
      FUN_00623bb0(&DAT_00215716,&local_78,"Socket creation failed");
    }
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = &PTR_FUN_00d385d8;
    *(undefined4 *)(param_1 + 3) = 0;
    return;
  }
  bVar2 = (int)param_3 != 2;
  uVar9 = 7;
  if (bVar2) {
    uVar9 = 0x14;
  }
  pcVar1 = "8.8.8.8";
  if (bVar2) {
    pcVar1 = "2001:4860:4860::8888";
  }
  FUN_007e8ad0(&local_78,pcVar1,uVar9,0x35);
  iVar3 = (**(code **)(*plVar5 + 0x28))(plVar5,&local_78);
  if (uStack_64 < 0) {
    operator_delete(local_78);
  }
  if (iVar3 < 0) {
    iVar3 = (**(code **)(*plVar5 + 0x70))(plVar5);
    if (((iVar3 != 0x65) && (iVar3 = (**(code **)(*plVar5 + 0x70))(plVar5), iVar3 != 0x71)) &&
       (uVar8 = FUN_00417e08(), (uVar8 & 1) == 0)) {
      uVar4 = (**(code **)(*plVar5 + 0x70))(plVar5);
      FUN_00623bb0(&DAT_001f4e94,"../../rtc_base/network.cc",0x2269,"Connect failed with ",uVar4);
    }
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = &PTR_FUN_00d385d8;
    *(undefined4 *)(param_1 + 3) = 0;
  }
  else {
    (**(code **)(*plVar5 + 0x10))(&local_78,plVar5);
    lVar6 = FUN_007e8ea8(&local_78);
    uVar4 = *(undefined4 *)(lVar6 + 8);
    *param_1 = &PTR_FUN_00d385d8;
    uVar10 = *(undefined8 *)(lVar6 + 0x14);
    uVar9 = *(undefined8 *)(lVar6 + 0xc);
    *(undefined4 *)(param_1 + 1) = uVar4;
    *(undefined8 *)((long)param_1 + 0x14) = uVar10;
    *(undefined8 *)((long)param_1 + 0xc) = uVar9;
    if (uStack_64._3_1_ < '\0') {
      operator_delete(local_78);
    }
  }
  (**(code **)(*plVar5 + 8))(plVar5);
  return;
}


// ===== 00bcc1d0  FUN_00bcc1d0 =====

void FUN_00bcc1d0(long *param_1)

{
  char *pcVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  void *local_d8 [2];
  char cStack_c1;
  undefined1 uStack_b9;
  char *local_b8;
  ulong local_b0;
  undefined1 *local_a8;
  void **local_a0;
  char **ppcStack_98;
  undefined *local_90;
  void ***pppvStack_88;
  long *local_80;
  long *plStack_78;
  undefined1 *local_70;
  
  plStack_78 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  local_80 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  (**(code **)(*param_1 + 0x30))(&local_80);
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    FUN_00623bb0(&DAT_001f6d4b,"../../rtc_base/network.cc",0x23a9,"NetworkManager detected ",
                 (long)plStack_78 - (long)local_80 >> 3," networks:");
  }
  plVar3 = plStack_78;
  if (local_80 != plStack_78) {
    plVar5 = local_80;
    do {
      lVar6 = *plVar5;
      uVar2 = FUN_00417e08();
      if ((uVar2 & 1) == 0) {
        local_b8 = "../../rtc_base/network.cc";
        local_b0 = 0x23b9;
        local_a8 = &uStack_b9;
        FUN_00bcc3dc(local_d8,lVar6);
        pcVar1 = ", Ignored";
        if (*(char *)(lVar6 + 0x9c) == '\0') {
          pcVar1 = "";
        }
        local_90 = &DAT_001c4dc3;
        local_a0 = local_d8;
        ppcStack_98 = &local_b8;
        pppvStack_88 = &local_a0;
        FUN_00623bb0(&DAT_00257f58,local_b8,local_b0 & 0xffffffff,local_d8,&DAT_001c4dc3,
                     lVar6 + 0x28,", active ? ",*(undefined1 *)(lVar6 + 0xac),pcVar1);
        if (cStack_c1 < '\0') {
          operator_delete(local_d8[0]);
        }
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar3);
  }
  if (local_80 != (long *)0x0) {
    uVar4 = (ulong)((long)plStack_78 + (-8 - ((long)plStack_78 << 0x3d))) >> 3;
    uVar2 = (ulong)(((long)local_80 - (long)plStack_78 << 0x3d) -
                   ((long)local_80 - (long)plStack_78)) >> 3;
    if (uVar4 <= uVar2) {
      uVar2 = uVar4;
    }
    plVar3 = plStack_78;
    if ((1 < uVar2) && ((((int)local_80 - (int)plStack_78 | -(int)plStack_78) & 7U) == 0)) {
      uVar2 = uVar2 & 0x1ffffffffffffffe;
      plVar3 = plStack_78 + -uVar2;
      do {
        uVar2 = uVar2 - 2;
      } while (uVar2 != 0);
    }
    while (plVar3 != local_80) {
      plVar3 = plVar3 + -1;
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    plStack_78 = local_80;
    operator_delete(local_80);
  }
  return;
}


// ===== 00bcc3dc  FUN_00bcc3dc =====

/* WARNING: Removing unreachable block (ram,0x00bcc5d0) */
/* WARNING: Removing unreachable block (ram,0x00bcc514) */
/* WARNING: Removing unreachable block (ram,0x00bcc684) */
/* WARNING: Removing unreachable block (ram,0x00bcc638) */

void FUN_00bcc3dc(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 ****ppppuVar2;
  undefined1 **ppuVar3;
  void *pvVar4;
  size_t __n;
  long lVar5;
  void *__s;
  undefined1 *local_90;
  ulong uStack_88;
  byte bStack_79;
  undefined8 ***local_78;
  ulong uStack_70;
  byte bStack_61;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 ***local_48;
  ulong uStack_40;
  ulong local_38;
  
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  FUN_00547cac(&local_60,&DAT_001c130a,4);
  __n = (size_t)*(char *)(param_2 + 0x3f);
  __s = (void *)(param_2 + 0x28);
  if ((long)__n < 0) {
    __s = *(void **)(param_2 + 0x28);
    __n = *(size_t *)(param_2 + 0x30);
  }
  pvVar4 = memchr(__s,0x20,__n);
  lVar5 = (long)pvVar4 - (long)__s;
  if (pvVar4 == (void *)0x0) {
    lVar5 = -1;
  }
  FUN_00547e10(&local_78,param_2 + 0x28,0,lVar5,&local_48);
  ppppuVar2 = (undefined8 ****)local_78;
  if (-1 < (char)bStack_61) {
    uStack_70 = (ulong)bStack_61;
    ppppuVar2 = &local_78;
  }
  FUN_00547cac(&local_60,ppppuVar2,uStack_70);
  FUN_00547cac(&local_60,&DAT_001ca603,1);
  FUN_007e9f18(&local_90,param_2 + 0x40);
  ppuVar3 = (undefined1 **)local_90;
  if (-1 < (char)bStack_79) {
    uStack_88 = (ulong)bStack_79;
    ppuVar3 = &local_90;
  }
  FUN_00547cac(&local_60,ppuVar3,uStack_88);
  FUN_00547cac(&local_60,&DAT_001c7bbb,1);
  local_48 = (undefined8 ****)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_005f55c4(&local_48,0x16,*(undefined4 *)(param_2 + 0x60));
  uVar1 = uStack_40;
  ppppuVar2 = (undefined8 ****)local_48;
  if (-1 < (long)local_38) {
    uVar1 = local_38 >> 0x38;
    ppppuVar2 = &local_48;
  }
  FUN_00547cac(&local_60,ppppuVar2,uVar1);
  FUN_00547cac(&local_60,&DAT_001ca603,1);
  FUN_008c0794(&local_48,*(undefined4 *)(param_2 + 0xa0));
  uVar1 = uStack_40;
  ppppuVar2 = (undefined8 ****)local_48;
  if (-1 < (long)local_38) {
    uVar1 = local_38 >> 0x38;
    ppppuVar2 = &local_48;
  }
  FUN_00547cac(&local_60,ppppuVar2,uVar1);
  if ((char)bStack_79 < '\0') {
    operator_delete(local_90);
  }
  if ((char)bStack_61 < '\0') {
    operator_delete(local_78);
  }
  if (*(int *)(param_2 + 0xa0) == 8) {
    FUN_00547cac(&local_60,&DAT_001c7bbb,1);
    FUN_008c0794(&local_48,*(undefined4 *)(param_2 + 0xa4));
    uVar1 = uStack_40;
    ppppuVar2 = (undefined8 ****)local_48;
    if (-1 < (long)local_38) {
      uVar1 = local_38 >> 0x38;
      ppppuVar2 = &local_48;
    }
    FUN_00547cac(&local_60,ppppuVar2,uVar1);
  }
  FUN_00547cac(&local_60,&DAT_001c130f,4);
  local_48 = (undefined8 ****)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_005f55c4(&local_48,0x16,*(undefined2 *)(param_2 + 0xae));
  uVar1 = uStack_40;
  ppppuVar2 = (undefined8 ****)local_48;
  if (-1 < (long)local_38) {
    uVar1 = local_38 >> 0x38;
    ppppuVar2 = &local_48;
  }
  FUN_00547cac(&local_60,ppppuVar2,uVar1);
  FUN_00547cac(&local_60,&DAT_0019fa9e,1);
  param_1[1] = uStack_58;
  *param_1 = local_60;
  param_1[2] = local_50;
  return;
}


// ===== 00bcc6c8  FUN_00bcc6c8 =====

undefined4 FUN_00bcc6c8(long param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  byte bVar6;
  undefined8 *puVar7;
  undefined1 **ppuVar8;
  undefined4 uVar9;
  ulong uVar10;
  long lVar11;
  undefined1 *local_a0;
  ulong uStack_98;
  ulong local_90;
  undefined **local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  
  local_a0 = (undefined1 *)0x0;
  uStack_98 = 0;
  local_90 = 0;
  if (*(char *)(param_1 + 0x151) == '\x01') {
    plVar4 = *(long **)(param_1 + 0x60);
    for (plVar2 = *(long **)(param_1 + 0x58); plVar2 != plVar4; plVar2 = plVar2 + 1) {
      lVar11 = *plVar2;
      lVar5 = *(long *)(lVar11 + 0x88);
      for (lVar3 = *(long *)(lVar11 + 0x80); lVar3 != lVar5; lVar3 = lVar3 + 0x20) {
        local_80 = &PTR_FUN_00d385d8;
        local_78 = *(undefined4 *)(lVar3 + 8);
        uStack_6c = *(undefined8 *)(lVar3 + 0x14);
        local_74 = *(undefined8 *)(lVar3 + 0xc);
        uVar10 = FUN_007e9cb8(param_3,&local_80);
        if ((uVar10 & 1) != 0) {
          if ((lVar11 != 0) &&
             (puVar1 = (undefined8 *)(lVar11 + 0x10), &local_a0 != (undefined1 **)puVar1)) {
            bVar6 = *(byte *)(lVar11 + 0x27);
            if ((long)local_90 < 0) {
              uVar10 = *(ulong *)(lVar11 + 0x18);
              puVar7 = *(undefined8 **)(lVar11 + 0x10);
              if (-1 < (char)bVar6) {
                uVar10 = (ulong)bVar6;
                puVar7 = puVar1;
              }
              FUN_00547f08(&local_a0,puVar7,uVar10);
            }
            else if ((char)bVar6 < '\0') {
              FUN_00547fc0(&local_a0,*(undefined8 *)(lVar11 + 0x10),*(undefined8 *)(lVar11 + 0x18));
            }
            else {
              local_90 = *(ulong *)(lVar11 + 0x20);
              uStack_98 = *(ulong *)(lVar11 + 0x18);
              local_a0 = (undefined1 *)*puVar1;
            }
          }
          goto LAB_00bcc7dc;
        }
      }
    }
  }
LAB_00bcc7dc:
  uVar10 = uStack_98;
  ppuVar8 = (undefined1 **)local_a0;
  if (-1 < (long)local_90) {
    uVar10 = local_90 >> 0x38;
    ppuVar8 = &local_a0;
  }
  uVar9 = (**(code **)(**(long **)(param_1 + 0x148) + 0x30))
                    (*(long **)(param_1 + 0x148),param_2,param_3,ppuVar8,uVar10);
  if ((long)local_90 < 0) {
    operator_delete(local_a0);
  }
  return uVar9;
}


// ===== 00bcc854  FUN_00bcc854 =====

void FUN_00bcc854(long param_1)

{
  FUN_00bcc6c8(param_1 + -0xe0);
  return;
}


// ===== 00bcc860  FUN_00bcc860 =====

void FUN_00bcc860(undefined8 *param_1,undefined8 *param_2,ulong param_3,undefined8 *param_4,
                 ulong param_5,long param_6,undefined4 param_7,undefined4 param_8)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
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
LAB_00bcca3c:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
                );
    }
    if ((param_2 < puVar3) || ((undefined8 *)((long)puVar3 + param_3) <= param_2)) {
      memmove(puVar3,param_2,param_3);
      *(undefined1 *)((long)puVar3 + param_3) = 0;
      if (0x7ffffffffffffff6 < param_5) goto LAB_00bcca64;
      if (param_5 < 0x17) {
        puVar3 = param_1 + 5;
        *(char *)((long)param_1 + 0x3f) = (char)param_5;
      }
      else {
        uVar1 = (param_5 & 0x7ffffffffffffff8) + 8;
        uVar2 = 0x19;
        if (uVar1 != 0x18) {
          uVar2 = uVar1;
        }
        puVar3 = (undefined8 *)operator_new(uVar2);
        param_1[5] = puVar3;
        param_1[6] = param_5;
        param_1[7] = uVar2 | 0x8000000000000000;
      }
      if ((undefined8 *)((long)puVar3 + param_5) < puVar3) goto LAB_00bcca3c;
      if ((param_4 < puVar3) || ((undefined8 *)((long)puVar3 + param_5) <= param_4)) {
        memmove(puVar3,param_4,param_5);
        *(undefined1 *)((long)puVar3 + param_5) = 0;
        param_1[8] = &PTR_FUN_00d385d8;
        *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_6 + 8);
        uVar5 = *(undefined8 *)(param_6 + 0x14);
        uVar4 = *(undefined8 *)(param_6 + 0xc);
        *(undefined4 *)(param_1 + 0xc) = param_7;
        *(undefined8 *)((long)param_1 + 0x54) = uVar5;
        *(undefined8 *)((long)param_1 + 0x4c) = uVar4;
        FUN_00bc92b8(param_1 + 0xd,param_2,param_3,param_6,param_7);
        *(undefined8 *)((long)param_1 + 0x95) = 0;
        *(undefined4 *)(param_1 + 0x14) = param_8;
        param_1[0x12] = 0;
        *(undefined1 *)((long)param_1 + 0xac) = 1;
        *(undefined8 *)((long)param_1 + 0xa4) = 0;
        *(undefined2 *)((long)param_1 + 0xae) = 0;
        param_1[0x16] = 0;
        param_1[0x11] = 0;
        param_1[0x10] = 0;
        FUN_007b5d10(param_1 + 0x17);
        FUN_007b5d10(param_1 + 0x1b);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
              );
  }
LAB_00bcca64:
                    /* WARNING: Subroutine does not return */
  FUN_005d45ec();
}


// ===== 00bcca68  FUN_00bcca68 =====

void FUN_00bcca68(long param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  FUN_007b5d24(param_1 + 0xd8);
  FUN_007b5d24(param_1 + 0xb8);
  puVar4 = *(undefined8 **)(param_1 + 0x80);
  if (puVar4 != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_1 + 0x88);
    puVar2 = puVar4;
    if (puVar4 != puVar3) {
      do {
        puVar3 = puVar3 + -4;
        if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        (**(code **)*puVar3)(puVar3);
      } while (puVar3 != puVar4);
      puVar2 = *(undefined8 **)(param_1 + 0x80);
    }
    *(undefined8 **)(param_1 + 0x88) = puVar4;
    operator_delete(puVar2);
  }
  if (*(char *)(param_1 + 0x7f) < '\0') {
    operator_delete(*(void **)(param_1 + 0x68));
    cVar1 = *(char *)(param_1 + 0x3f);
  }
  else {
    cVar1 = *(char *)(param_1 + 0x3f);
  }
  if (cVar1 < '\0') {
    operator_delete(*(void **)(param_1 + 0x28));
    cVar1 = *(char *)(param_1 + 0x27);
  }
  else {
    cVar1 = *(char *)(param_1 + 0x27);
  }
  if (cVar1 < '\0') {
    operator_delete(*(void **)(param_1 + 0x10));
    return;
  }
  return;
}


// ===== 00bccb74  FUN_00bccb74 =====

void FUN_00bccb74(long param_1)

{
  if (*(long **)(param_1 + 8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00bccb88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 8) + 0x10))();
    return;
  }
  return;
}


// ===== 00bccb90  FUN_00bccb90 =====

uint FUN_00bccb90(long param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  int ****ppppiVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int ***local_68;
  ulong local_60;
  byte bStack_51;
  
  lVar2 = 0xa4;
  if (*(int *)(param_1 + 0xa0) != 8) {
    lVar2 = 0xa0;
  }
  uVar9 = *(uint *)(param_1 + lVar2);
  (**(code **)(*param_2 + 0x10))(&local_68,param_2,"WebRTC-UseDifferentiatedCellularCosts",0x25);
  uVar3 = local_60;
  if (-1 < (char)bStack_51) {
    uVar3 = (ulong)bStack_51;
  }
  if (uVar3 < 7) {
    bVar5 = false;
  }
  else {
    ppppiVar4 = (int ****)local_68;
    if (-1 < (char)bStack_51) {
      ppppiVar4 = &local_68;
    }
    bVar5 = *(int *)ppppiVar4 == 0x62616e45 && *(int *)((long)ppppiVar4 + 3) == 0x64656c62;
  }
  if ((char)bStack_51 < '\0') {
    operator_delete(local_68);
  }
  (**(code **)(*param_2 + 0x10))(&local_68,param_2,"WebRTC-AddNetworkCostToVpn",0x1a);
  uVar3 = local_60;
  if (-1 < (char)bStack_51) {
    uVar3 = (ulong)bStack_51;
  }
  if (uVar3 < 7) {
    uVar10 = 0;
  }
  else {
    ppppiVar4 = (int ****)local_68;
    if (-1 < (char)bStack_51) {
      ppppiVar4 = &local_68;
    }
    uVar10 = (uint)(*(int *)ppppiVar4 == 0x62616e45 && *(int *)((long)ppppiVar4 + 3) == 0x64656c62);
  }
  if ((char)bStack_51 < '\0') {
    operator_delete(local_68);
  }
  (**(code **)(*param_2 + 0x10))(&local_68,param_2,"WebRTC-UnifiedCommunications",0x1c);
  if (-1 < (char)bStack_51) {
    local_60 = (ulong)bStack_51;
  }
  if (local_60 < 7) {
    bVar6 = false;
  }
  else {
    ppppiVar4 = (int ****)local_68;
    if (-1 < (char)bStack_51) {
      ppppiVar4 = &local_68;
    }
    bVar6 = *(int *)ppppiVar4 == 0x62616e45 && *(int *)((long)ppppiVar4 + 3) == 0x64656c62;
  }
  if ((char)bStack_51 < '\0') {
    operator_delete(local_68);
  }
  uVar1 = 0;
  if (*(int *)(param_1 + 0xa0) == 8) {
    uVar1 = uVar10;
  }
  iVar8 = -2;
  if (!(bool)(bVar6 & *(int *)(param_1 + 0xb4) != 0)) {
    iVar8 = 0;
  }
  if ((uVar9 ^ uVar9 - 1) <= uVar9 - 1) {
switchD_00bccdbc_default:
    uVar9 = 0x32;
    goto LAB_00bccdd4;
  }
  uVar9 = (uVar9 & 0xaaaaaaaa) >> 1 | (uVar9 & 0x55555555) << 1;
  uVar9 = (uVar9 & 0xcccccccc) >> 2 | (uVar9 & 0x33333333) << 2;
  uVar9 = (uVar9 & 0xf0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f) << 4;
  uVar10 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
  uVar9 = 0x32;
  switch(LZCOUNT(uVar10 >> 0x10 | uVar10 << 0x10)) {
  case 0:
  case 4:
    uVar9 = uVar1;
    break;
  case 1:
    uVar9 = 10;
    goto LAB_00bccdd4;
  case 2:
    iVar7 = 900;
    if (uVar1 != 0) {
      iVar7 = 0x385;
    }
    uVar9 = iVar8 + iVar7;
    break;
  case 3:
    break;
  case 5:
    uVar9 = 999;
LAB_00bccdd4:
    if (uVar1 != 0) {
      uVar9 = uVar9 + 1;
    }
    break;
  case 6:
    uVar9 = 0x3d4;
    goto LAB_00bcce8c;
  case 7:
    uVar9 = 0x38e;
    goto LAB_00bcce8c;
  case 8:
    uVar9 = 500;
LAB_00bcce8c:
    if (!bVar5) {
      uVar9 = 900;
    }
    uVar9 = uVar9 | uVar1;
    break;
  case 9:
    uVar9 = 0xfa;
    if (!bVar5) {
      uVar9 = 900;
    }
    uVar9 = iVar8 + (uVar9 | uVar1);
    break;
  default:
    goto switchD_00bccdbc_default;
  }
  return uVar9;
}


// ===== 00bcce98  FUN_00bcce98 =====

undefined1  [16] FUN_00bcce98(uint param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  uVar3 = (ulong)param_1;
  if ((int)param_1 < 0x1f5) {
    if (0x32 < (int)param_1) {
      if ((int)param_1 < 0xfa) {
        if (param_1 == 0x33) {
          uVar3 = 0;
          uVar2 = 0x100000000;
          goto LAB_00bcd0fc;
        }
        if (param_1 == 0xf8) {
          uVar3 = 1;
          uVar2 = 0x200;
          goto LAB_00bcd0fc;
        }
        if (param_1 == 0xf9) {
          uVar3 = 1;
          goto LAB_00bcd078;
        }
      }
      else {
        if (param_1 == 0xfa) {
          uVar3 = 0;
          uVar2 = 0x200;
          goto LAB_00bcd0fc;
        }
        if (param_1 == 0xfb) {
          uVar3 = 0;
LAB_00bcd078:
          uVar2 = 0x100000200;
          goto LAB_00bcd0fc;
        }
        if (param_1 == 500) {
          uVar3 = 0;
          uVar2 = 0x100;
          goto LAB_00bcd0fc;
        }
      }
      goto LAB_00bcd0c8;
    }
    if ((int)param_1 < 10) {
      if (param_1 == 0) {
        uVar2 = 1;
        goto LAB_00bcd0fc;
      }
      if (param_1 == 1) {
        uVar3 = 0;
        uVar2 = 0x100000001;
        goto LAB_00bcd0fc;
      }
      goto LAB_00bcd0c8;
    }
    if (param_1 == 10) {
      uVar3 = 0;
      uVar2 = 2;
      goto LAB_00bcd0fc;
    }
    if (param_1 == 0xb) {
      uVar3 = 0;
      uVar2 = 0x100000002;
      goto LAB_00bcd0fc;
    }
    if (param_1 != 0x32) goto LAB_00bcd0c8;
  }
  else {
    if ((int)param_1 < 0x38e) {
      if ((int)param_1 < 899) {
        if (param_1 == 0x1f5) {
          uVar3 = 0;
          uVar2 = 0x100000100;
          goto LAB_00bcd0fc;
        }
        if (param_1 == 0x382) {
          uVar3 = 1;
          uVar2 = 4;
          goto LAB_00bcd0fc;
        }
      }
      else {
        if (param_1 == 899) {
          uVar3 = 1;
          uVar2 = 0x100000004;
          goto LAB_00bcd0fc;
        }
        if (param_1 == 900) {
          uVar3 = 0;
          uVar2 = 4;
          goto LAB_00bcd0fc;
        }
        if (param_1 == 0x385) {
          uVar3 = 0;
          uVar2 = 0x100000004;
          goto LAB_00bcd0fc;
        }
      }
    }
    else if ((int)param_1 < 0x3d5) {
      if (param_1 == 0x38e) {
        uVar3 = 0;
        uVar2 = 0x80;
        goto LAB_00bcd0fc;
      }
      if (param_1 == 0x38f) {
        uVar3 = 0;
        uVar2 = 0x100000080;
        goto LAB_00bcd0fc;
      }
      if (param_1 == 0x3d4) {
        uVar3 = 0;
        uVar2 = 0x40;
        goto LAB_00bcd0fc;
      }
    }
    else {
      if (param_1 == 0x3d5) {
        uVar3 = 0;
        uVar2 = 0x100000040;
        goto LAB_00bcd0fc;
      }
      if (param_1 == 999) {
        uVar3 = 0;
        uVar2 = 0x20;
        goto LAB_00bcd0fc;
      }
      if (param_1 == 1000) {
        uVar3 = 0;
        uVar2 = 0x100000020;
        goto LAB_00bcd0fc;
      }
    }
LAB_00bcd0c8:
    uVar1 = FUN_0044075c();
    if ((uVar1 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e94,"../../rtc_base/network.cc",0x29b8,"Unknown network cost: ",uVar3);
    }
  }
  uVar2 = 0;
  uVar3 = 0;
LAB_00bcd0fc:
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}


// ===== 00bcd10c  FUN_00bcd10c =====

void FUN_00bcd10c(long param_1,long *param_2)

{
  undefined4 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 uStack_51;
  long local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  long local_38;
  
  plVar6 = *(long **)(param_1 + 0x110);
  if (plVar6 == (long *)0x0) {
    if ((long *)(param_1 + 0x158) != param_2) {
      FUN_00b91fc8((long *)(param_1 + 0x158),*param_2,param_2[1],
                   (param_2[1] - *param_2 >> 3) * -0x3333333333333333);
      return;
    }
  }
  else {
    lVar7 = *param_2;
    lVar2 = param_2[1];
    local_48 = (undefined8 *)0x0;
    local_40 = (undefined8 *)0x0;
    local_38 = 0;
    uVar4 = lVar2 - lVar7;
    local_50 = param_1;
    puVar3 = local_40;
    if (uVar4 != 0) {
      if (0x666666666666666 < (ulong)(((long)uVar4 >> 3) * -0x3333333333333333)) {
                    /* WARNING: Subroutine does not return */
        FUN_00b1ed34();
      }
      local_48 = (undefined8 *)operator_new(uVar4);
      local_38 = (long)local_48 + uVar4;
      puVar3 = local_48;
      do {
        if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        *puVar3 = &PTR_FUN_00d385d8;
        *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(lVar7 + 8);
        uVar8 = *(undefined8 *)(lVar7 + 0xc);
        *(undefined8 *)((long)puVar3 + 0x14) = *(undefined8 *)(lVar7 + 0x14);
        *(undefined8 *)((long)puVar3 + 0xc) = uVar8;
        puVar1 = (undefined4 *)(lVar7 + 0x20);
        lVar7 = lVar7 + 0x28;
        *(undefined4 *)(puVar3 + 4) = *puVar1;
        puVar3 = puVar3 + 5;
      } while (lVar7 != lVar2);
    }
    local_40 = puVar3;
    (**(code **)(*plVar6 + 0x60))(plVar6,&local_50,FUN_00bd1980,&uStack_51);
    if (local_48 != (undefined8 *)0x0) {
      uVar4 = (ulong)(((long)local_48 - (long)local_40) * 0x1333333333333333) >> 3;
      uVar5 = (long)local_40 * -0x1333333333333333 - 8U >> 3;
      if (uVar5 <= uVar4) {
        uVar4 = uVar5;
      }
      puVar3 = local_40;
      if ((1 < uVar4) && ((((int)local_48 - (int)local_40 | -(int)local_40) & 7U) == 0)) {
        uVar4 = uVar4 & 0x1ffffffffffffffe;
        puVar3 = local_40 + uVar4 * -5;
        do {
          uVar4 = uVar4 - 2;
        } while (uVar4 != 0);
      }
      while (puVar3 != local_48) {
        puVar3 = puVar3 + -5;
        if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      local_40 = local_48;
      operator_delete(local_48);
    }
  }
  return;
}


// ===== 00bcd2e0  FUN_00bcd2e0 =====

void FUN_00bcd2e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d482f8;
  param_1[1] = &PTR_FUN_00d48368;
  FUN_007b5d24(param_1 + 6);
  FUN_007b5d24(param_1 + 2);
  return;
}


// ===== 00bcd31c  FUN_00bcd31c =====

void FUN_00bcd31c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbcd324);
  (*pcVar1)();
}


// ===== 00bcd324  FUN_00bcd324 =====

void FUN_00bcd324(void)

{
  return;
}


// ===== 00bcd32c  FUN_00bcd32c =====

void FUN_00bcd32c(void)

{
  return;
}


// ===== 00bcd334  FUN_00bcd334 =====

void FUN_00bcd334(void)

{
  return;
}


// ===== 00bcd33c  FUN_00bcd33c =====

void FUN_00bcd33c(undefined8 *param_1)

{
  param_1[-1] = &PTR_FUN_00d482f8;
  *param_1 = &PTR_FUN_00d48368;
  FUN_007b5d24(param_1 + 5);
  FUN_007b5d24(param_1 + 1);
  return;
}


// ===== 00bcd37c  FUN_00bcd37c =====

void FUN_00bcd37c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbcd384);
  (*pcVar1)();
}


// ===== 00bcd384  FUN_00bcd384 =====

void FUN_00bcd384(undefined8 *param_1)

{
  void *pvVar1;
  ulong uVar2;
  ulong uVar3;
  void *pvVar4;
  undefined8 *local_28;
  
  pvVar4 = (void *)param_1[0x12];
  param_1[0x12] = 0;
  *param_1 = &PTR_FUN_00d48198;
  param_1[1] = &PTR_FUN_00d48208;
  if (pvVar4 != (void *)0x0) {
    FUN_00bcca68(pvVar4);
    operator_delete(pvVar4);
  }
  pvVar4 = (void *)param_1[0x11];
  param_1[0x11] = 0;
  if (pvVar4 != (void *)0x0) {
    FUN_00bcca68(pvVar4);
    operator_delete(pvVar4);
  }
  local_28 = param_1 + 0xe;
  FUN_00bd0e50(&local_28,param_1[0xf]);
  pvVar4 = (void *)param_1[0xb];
  if (pvVar4 != (void *)0x0) {
    pvVar1 = (void *)param_1[0xc];
    uVar3 = (ulong)((long)pvVar1 + (-8 - ((long)pvVar1 << 0x3d))) >> 3;
    uVar2 = (ulong)(((long)pvVar4 - (long)pvVar1 << 0x3d) - ((long)pvVar4 - (long)pvVar1)) >> 3;
    if (uVar3 <= uVar2) {
      uVar2 = uVar3;
    }
    if ((1 < uVar2) && ((((int)pvVar4 - (int)pvVar1 | -(int)pvVar1) & 7U) == 0)) {
      uVar2 = uVar2 & 0x1ffffffffffffffe;
      pvVar1 = (void *)((long)pvVar1 + uVar2 * -8);
      do {
        uVar2 = uVar2 - 2;
      } while (uVar2 != 0);
    }
    while (pvVar1 != pvVar4) {
      pvVar1 = (void *)((long)pvVar1 + -8);
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    param_1[0xc] = pvVar4;
    operator_delete(pvVar4);
  }
  *param_1 = &PTR_FUN_00d482f8;
  param_1[1] = &PTR_FUN_00d48368;
  FUN_007b5d24(param_1 + 6);
  FUN_007b5d24(param_1 + 2);
  return;
}


// ===== 00bcd4c4  FUN_00bcd4c4 =====

void FUN_00bcd4c4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbcd4cc);
  (*pcVar1)();
}


// ===== 00bcd4cc  FUN_00bcd4cc =====

void FUN_00bcd4cc(long param_1)

{
  FUN_00bcd384(param_1 + -8);
  return;
}


// ===== 00bcd4d8  FUN_00bcd4d8 =====

void FUN_00bcd4d8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbcd4e0);
  (*pcVar1)();
}


// ===== 00bcd4e0  FUN_00bcd4e0 =====

void FUN_00bcd4e0(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00bcd4ec  FUN_00bcd4ec =====

undefined8 * FUN_00bcd4ec(long *param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  void *pvVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  puVar11 = (undefined8 *)(param_1[1] - *param_1);
  uVar1 = ((long)puVar11 >> 5) + 1;
  if (uVar1 >> 0x3b == 0) {
    uVar7 = param_1[2] - *param_1;
    uVar8 = (long)uVar7 >> 4;
    if (uVar8 <= uVar1) {
      uVar8 = uVar1;
    }
    if (0x7fffffffffffffdf < uVar7) {
      uVar8 = 0x7ffffffffffffff;
    }
    if (uVar8 == 0) {
      pvVar5 = (void *)0x0;
    }
    else {
      if (uVar8 >> 0x3b != 0) goto LAB_00bcd68c;
      pvVar5 = operator_new(uVar8 << 5);
      puVar11 = (undefined8 *)((long)pvVar5 + (long)puVar11);
    }
    if (puVar11 == (undefined8 *)0x0) {
LAB_00bcd660:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *puVar11 = &PTR_FUN_00d385d8;
    *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(param_2 + 8);
    uVar13 = *(undefined8 *)(param_2 + 0x14);
    uVar12 = *(undefined8 *)(param_2 + 0xc);
    *puVar11 = &PTR_FUN_00d48390;
    *(undefined8 *)((long)puVar11 + 0x14) = uVar13;
    *(undefined8 *)((long)puVar11 + 0xc) = uVar12;
    *(undefined4 *)((long)puVar11 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
    puVar6 = (undefined8 *)*param_1;
    puVar4 = (undefined8 *)param_1[1];
    puVar3 = (undefined8 *)((long)puVar11 + ((long)puVar6 - (long)puVar4));
    puVar9 = puVar6;
    puVar10 = puVar3;
    if (puVar4 != puVar6) {
      do {
        if (puVar10 == (undefined8 *)0x0) goto LAB_00bcd660;
        *puVar10 = &PTR_FUN_00d385d8;
        *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar9 + 1);
        uVar13 = *(undefined8 *)((long)puVar9 + 0x14);
        uVar12 = *(undefined8 *)((long)puVar9 + 0xc);
        *puVar10 = &PTR_FUN_00d48390;
        *(undefined8 *)((long)puVar10 + 0x14) = uVar13;
        *(undefined8 *)((long)puVar10 + 0xc) = uVar12;
        puVar2 = puVar9 + 4;
        *(undefined4 *)((long)puVar10 + 0x1c) = *(undefined4 *)((long)puVar9 + 0x1c);
        puVar9 = puVar2;
        puVar10 = puVar10 + 4;
      } while (puVar2 != puVar4);
      do {
        if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        puVar9 = puVar6 + 4;
        (**(code **)*puVar6)();
        puVar6 = puVar9;
      } while (puVar9 != puVar4);
      puVar6 = (undefined8 *)*param_1;
    }
    *param_1 = (long)puVar3;
    param_1[1] = (long)(puVar11 + 4);
    param_1[2] = (long)((long)pvVar5 + uVar8 * 0x20);
    if (puVar6 != (undefined8 *)0x0) {
      operator_delete(puVar6);
    }
    return puVar11 + 4;
  }
  FUN_00bcd690();
LAB_00bcd68c:
                    /* WARNING: Subroutine does not return */
  FUN_005d55a4();
}


// ===== 00bcd690  FUN_00bcd690 =====

void FUN_00bcd690(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00bcd6a8  FUN_00bcd6a8 =====

undefined8 * FUN_00bcd6a8(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  size_t __n;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  void *__dest;
  
  puVar6 = (undefined8 *)(param_1[1] - *param_1);
  uVar1 = ((long)puVar6 >> 3) + 1;
  if (uVar1 >> 0x3d != 0) {
    FUN_00bcd79c();
LAB_00bcd798:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  uVar4 = param_1[2] - *param_1;
  uVar5 = (long)uVar4 >> 2;
  if (uVar5 <= uVar1) {
    uVar5 = uVar1;
  }
  if (0x7ffffffffffffff7 < uVar4) {
    uVar5 = 0x1fffffffffffffff;
  }
  if (uVar5 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (uVar5 >> 0x3d != 0) goto LAB_00bcd798;
    pvVar2 = operator_new(uVar5 << 3);
    puVar6 = (undefined8 *)((long)pvVar2 + (long)puVar6);
  }
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = *param_2;
    __n = param_1[1] - *param_1;
    __dest = (void *)((long)puVar6 - __n);
    memcpy(__dest,(void *)*param_1,__n);
    pvVar3 = (void *)*param_1;
    *param_1 = (long)__dest;
    param_1[1] = (long)(puVar6 + 1);
    param_1[2] = (long)((long)pvVar2 + uVar5 * 8);
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    return puVar6 + 1;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00bcd79c  FUN_00bcd79c =====

void FUN_00bcd79c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00bcd7b4  FUN_00bcd7b4 =====

undefined8 *
FUN_00bcd7b4(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,long param_5)

{
  void *pvVar1;
  void *pvVar2;
  size_t sVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  if (0 < param_5) {
    puVar14 = (undefined8 *)param_1[1];
    if (param_1[2] - (long)puVar14 >> 3 < param_5) {
      lVar15 = *param_1;
      uVar7 = param_5 + ((long)puVar14 - lVar15 >> 3);
      if (uVar7 >> 0x3d != 0) {
        FUN_00bcd79c();
LAB_00bcdca8:
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      uVar4 = param_1[2] - lVar15;
      uVar8 = (long)uVar4 >> 2;
      if (uVar8 <= uVar7) {
        uVar8 = uVar7;
      }
      if (0x7ffffffffffffff7 < uVar4) {
        uVar8 = 0x1fffffffffffffff;
      }
      if (uVar8 == 0) {
        pvVar1 = (void *)0x0;
      }
      else {
        if (uVar8 >> 0x3d != 0) goto LAB_00bcdca8;
        pvVar1 = operator_new(uVar8 << 3);
      }
      lVar5 = (long)param_2 - lVar15;
      puVar6 = (undefined8 *)((long)pvVar1 + lVar5);
      puVar10 = puVar6;
      if (param_5 * 8 != 0) {
        uVar12 = param_5 * 8 - 8U >> 3;
        uVar4 = (ulong)(lVar15 - ((long)pvVar1 + (long)param_2)) >> 3;
        uVar7 = uVar4;
        if (uVar12 <= uVar4) {
          uVar7 = uVar12;
        }
        puVar14 = puVar6;
        if (0x2b < uVar7) {
          if (uVar12 <= uVar4) {
            uVar4 = uVar12;
          }
          if (((((-(int)((long)pvVar1 + (long)param_2) & 7U) == 0) && (puVar6 <= puVar6 + uVar4)) &&
              (param_3 <= param_3 + uVar4)) &&
             (puVar14 = (undefined8 *)((long)pvVar1 + lVar5),
             0x1f < (ulong)((((long)pvVar1 + (long)param_2) - (long)param_3) - lVar15))) {
            uVar4 = uVar7 + 1 & 3;
            puVar10 = (undefined8 *)((long)pvVar1 + lVar5 + 0x10);
            uVar12 = 4;
            if (uVar4 != 0) {
              uVar12 = uVar4;
            }
            lVar15 = (uVar7 + 1) - uVar12;
            puVar14 = puVar6 + lVar15;
            puVar11 = param_3 + lVar15;
            puVar9 = param_3 + 2;
            do {
              puVar13 = puVar9 + -1;
              uVar16 = puVar9[-2];
              uVar18 = puVar9[1];
              uVar17 = *puVar9;
              lVar15 = lVar15 + -4;
              puVar9 = puVar9 + 4;
              puVar10[-1] = *puVar13;
              puVar10[-2] = uVar16;
              puVar10[1] = uVar18;
              *puVar10 = uVar17;
              puVar10 = puVar10 + 4;
              param_3 = puVar11;
            } while (lVar15 != 0);
          }
        }
        do {
          if (puVar14 == (undefined8 *)0x0) goto LAB_00bcdc90;
          puVar10 = puVar14 + 1;
          *puVar14 = *param_3;
          puVar14 = puVar10;
          param_3 = param_3 + 1;
        } while (puVar10 != puVar6 + param_5);
        puVar14 = (undefined8 *)param_1[1];
        puVar10 = puVar6 + param_5;
      }
      memcpy(puVar10,param_2,(long)puVar14 - (long)param_2);
      lVar15 = param_1[1];
      param_1[1] = (long)param_2;
      sVar3 = (long)param_2 - *param_1;
      memcpy((void *)((long)puVar6 - sVar3),(void *)*param_1,sVar3);
      pvVar2 = (void *)*param_1;
      *param_1 = (long)puVar6 - sVar3;
      param_1[1] = (long)puVar10 + (lVar15 - (long)param_2);
      param_1[2] = (long)((long)pvVar1 + uVar8 * 8);
      param_2 = puVar6;
      if (pvVar2 != (void *)0x0) {
        operator_delete(pvVar2);
      }
    }
    else {
      lVar15 = (long)puVar14 - (long)param_2;
      if (lVar15 >> 3 < param_5) {
        puVar6 = (undefined8 *)((long)param_3 + lVar15);
        puVar10 = puVar14;
        if (puVar6 != param_4) {
          uVar4 = ((((long)param_4 + (long)param_2) - (long)param_3) - (long)puVar14) - 8;
          uVar8 = uVar4 >> 3;
          uVar7 = uVar8;
          if ((ulong)-(long)puVar14 >> 3 <= uVar8) {
            uVar7 = (ulong)-(long)puVar14 >> 3;
          }
          puVar9 = puVar14;
          puVar11 = puVar14;
          if (0x2d < uVar7) {
            uVar12 = (ulong)-(long)puVar14 >> 3;
            if (uVar12 <= uVar8) {
              uVar8 = uVar12;
            }
            if ((((((uint)uVar4 | (uint)-(long)puVar14) & 7) == 0) && (puVar14 <= puVar14 + uVar8))
               && ((puVar6 <= puVar6 + uVar8 && (0x1f < (ulong)((long)param_2 - (long)param_3))))) {
              uVar8 = uVar7 + 1 & 3;
              uVar4 = 4;
              if (uVar8 != 0) {
                uVar4 = uVar8;
              }
              puVar10 = puVar14 + 2;
              lVar5 = (uVar7 + 1) - uVar4;
              puVar13 = (undefined8 *)((long)param_3 + ((long)puVar10 - (long)param_2));
              puVar6 = puVar6 + lVar5;
              puVar9 = puVar14 + lVar5;
              do {
                puVar11 = puVar13 + -1;
                uVar16 = puVar13[-2];
                uVar18 = puVar13[1];
                uVar17 = *puVar13;
                lVar5 = lVar5 + -4;
                puVar13 = puVar13 + 4;
                puVar10[-1] = *puVar11;
                puVar10[-2] = uVar16;
                puVar10[1] = uVar18;
                *puVar10 = uVar17;
                puVar10 = puVar10 + 4;
                puVar11 = puVar9;
              } while (lVar5 != 0);
            }
          }
          do {
            if (puVar11 == (undefined8 *)0x0) goto LAB_00bcdc90;
            puVar13 = puVar6 + 1;
            *puVar11 = *puVar6;
            puVar6 = puVar13;
            puVar10 = puVar9 + 1;
            puVar9 = puVar9 + 1;
            puVar11 = puVar11 + 1;
          } while (puVar13 != param_4);
        }
        param_1[1] = (long)puVar10;
        if (0 < lVar15 >> 3) {
          puVar9 = puVar10;
          for (puVar6 = puVar10 + -param_5; puVar6 < puVar14; puVar6 = puVar6 + 1) {
            if (puVar9 == (undefined8 *)0x0) {
LAB_00bcdc90:
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                        );
            }
            *puVar9 = *puVar6;
            puVar9 = puVar9 + 1;
          }
          param_1[1] = (long)puVar9;
          sVar3 = (long)puVar10 + (param_5 * -8 - (long)param_2);
          memmove((void *)((long)puVar10 - sVar3),param_2,sVar3);
          if ((long)puVar14 - (long)param_2 != 0) {
            uVar7 = ((long)puVar14 - (long)param_2) - 8;
            puVar14 = param_2;
            if ((((0xf7 < uVar7) &&
                 (param_2 <= (undefined8 *)((long)param_2 + (uVar7 & 0xfffffffffffffff8)))) &&
                (param_3 <= (undefined8 *)((long)param_3 + (uVar7 & 0xfffffffffffffff8)))) &&
               (0x1f < (ulong)((long)param_2 - (long)param_3))) {
              puVar14 = param_3 + 2;
              puVar6 = param_2 + 2;
              uVar7 = (uVar7 >> 3) + 1;
              uVar4 = uVar7 & 0x3ffffffffffffffc;
              uVar8 = uVar7 & 0x3ffffffffffffffc;
              param_3 = param_3 + uVar4;
              do {
                puVar10 = puVar14 + -1;
                uVar16 = puVar14[-2];
                uVar18 = puVar14[1];
                uVar17 = *puVar14;
                uVar8 = uVar8 - 4;
                puVar14 = puVar14 + 4;
                puVar6[-1] = *puVar10;
                puVar6[-2] = uVar16;
                puVar6[1] = uVar18;
                *puVar6 = uVar17;
                puVar6 = puVar6 + 4;
              } while (uVar8 != 0);
              puVar14 = param_2 + uVar4;
              if (uVar7 == uVar4) {
                return param_2;
              }
            }
            do {
              puVar6 = puVar14 + 1;
              *puVar14 = *param_3;
              puVar14 = puVar6;
              param_3 = param_3 + 1;
            } while (puVar6 != (undefined8 *)((long)param_2 + lVar15));
          }
        }
      }
      else {
        puVar6 = puVar14;
        for (puVar10 = puVar14 + -param_5; puVar10 < puVar14; puVar10 = puVar10 + 1) {
          if (puVar6 == (undefined8 *)0x0) goto LAB_00bcdc90;
          *puVar6 = *puVar10;
          puVar6 = puVar6 + 1;
        }
        param_1[1] = (long)puVar6;
        sVar3 = (long)puVar14 - (long)(param_2 + param_5);
        memmove((void *)((long)puVar14 - sVar3),param_2,sVar3);
        uVar7 = param_5 * 8 - 8;
        puVar14 = param_2;
        if (((0xe7 < uVar7) && (param_2 <= param_2 + param_5 + -1)) &&
           ((param_3 <= param_3 + param_5 + -1 && (0x1f < (ulong)((long)param_2 - (long)param_3)))))
        {
          puVar14 = param_3 + 2;
          puVar6 = param_2 + 2;
          uVar7 = (uVar7 >> 3) + 1;
          uVar4 = uVar7 & 0x3ffffffffffffffc;
          uVar8 = uVar7 & 0x3ffffffffffffffc;
          param_3 = param_3 + uVar4;
          do {
            puVar10 = puVar14 + -1;
            uVar16 = puVar14[-2];
            uVar18 = puVar14[1];
            uVar17 = *puVar14;
            uVar8 = uVar8 - 4;
            puVar14 = puVar14 + 4;
            puVar6[-1] = *puVar10;
            puVar6[-2] = uVar16;
            puVar6[1] = uVar18;
            *puVar6 = uVar17;
            puVar6 = puVar6 + 4;
          } while (uVar8 != 0);
          puVar14 = param_2 + uVar4;
          if (uVar7 == uVar4) {
            return param_2;
          }
        }
        do {
          puVar6 = puVar14 + 1;
          *puVar14 = *param_3;
          puVar14 = puVar6;
          param_3 = param_3 + 1;
        } while (puVar6 != param_2 + param_5);
      }
    }
  }
  return param_2;
}


// ===== 00bcdcac  FUN_00bcdcac =====

void FUN_00bcdcac(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined8 *param_3,
                 long param_4,uint param_5)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 (*pauVar4) [16];
  ulong uVar5;
  undefined1 (*pauVar6) [16];
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined1 auVar13 [16];
  
LAB_00bcdcdc:
  puVar9 = (undefined8 *)(param_2[-1] + 8);
  puVar12 = (undefined8 *)(param_2[-2] + 8);
  do {
    param_4 = -param_4;
    pauVar4 = param_1;
    do {
      param_1 = pauVar4;
      param_4 = param_4 + 1;
      uVar10 = (long)param_2 - (long)param_1 >> 3;
      if (uVar10 - 2 == 0 || (long)uVar10 < 2) {
        if (uVar10 < 2) {
          return;
        }
        if (uVar10 == 2) {
          uVar10 = (*(code *)*param_3)(puVar9,param_1);
          if ((uVar10 & 1) == 0) {
            return;
          }
          uVar8 = *(undefined8 *)*param_1;
          *(undefined8 *)*param_1 = *puVar9;
          *puVar9 = uVar8;
          return;
        }
      }
      else {
        if (uVar10 == 3) {
          uVar10 = (*(code *)*param_3)(*param_1 + 8,param_1);
          uVar5 = (*(code *)*param_3)(puVar9,*param_1 + 8);
          if ((uVar10 & 1) != 0) {
            uVar8 = *(undefined8 *)*param_1;
            if ((uVar5 & 1) != 0) {
              *(undefined8 *)*param_1 = *puVar9;
              *puVar9 = uVar8;
              return;
            }
            *(undefined8 *)*param_1 = *(undefined8 *)(*param_1 + 8);
            *(undefined8 *)(*param_1 + 8) = uVar8;
            uVar10 = (*(code *)*param_3)(puVar9,*param_1 + 8);
            if ((uVar10 & 1) == 0) {
              return;
            }
            uVar8 = *(undefined8 *)(*param_1 + 8);
            *(undefined8 *)(*param_1 + 8) = *puVar9;
            *puVar9 = uVar8;
            return;
          }
          if ((uVar5 & 1) == 0) {
            return;
          }
          uVar8 = *(undefined8 *)(*param_1 + 8);
          *(undefined8 *)(*param_1 + 8) = *puVar9;
          *puVar9 = uVar8;
LAB_00bce3ec:
          uVar10 = (*(code *)*param_3)(*param_1 + 8,param_1);
          if ((uVar10 & 1) != 0) {
            auVar13 = NEON_ext(*param_1,*param_1,8,1);
            *(long *)(*param_1 + 8) = auVar13._8_8_;
            *(long *)*param_1 = auVar13._0_8_;
          }
          return;
        }
        if (uVar10 == 4) {
          uVar10 = (*(code *)*param_3)(*param_1 + 8,param_1);
          uVar5 = (*(code *)*param_3)(param_1 + 1,*param_1 + 8);
          if ((uVar10 & 1) == 0) {
            if ((uVar5 & 1) != 0) {
              auVar13 = NEON_ext(*(undefined1 (*) [16])(*param_1 + 8),
                                 *(undefined1 (*) [16])(*param_1 + 8),8,1);
              *(long *)param_1[1] = auVar13._8_8_;
              *(long *)(*param_1 + 8) = auVar13._0_8_;
              uVar10 = (*(code *)*param_3)(*param_1 + 8,param_1);
              if ((uVar10 & 1) != 0) {
                auVar13 = NEON_ext(*param_1,*param_1,8,1);
                *(long *)(*param_1 + 8) = auVar13._8_8_;
                *(long *)*param_1 = auVar13._0_8_;
              }
            }
          }
          else {
            uVar8 = *(undefined8 *)*param_1;
            if ((uVar5 & 1) == 0) {
              *(undefined8 *)*param_1 = *(undefined8 *)(*param_1 + 8);
              *(undefined8 *)(*param_1 + 8) = uVar8;
              uVar10 = (*(code *)*param_3)(param_1 + 1,*param_1 + 8);
              if ((uVar10 & 1) != 0) {
                auVar13 = NEON_ext(*(undefined1 (*) [16])(*param_1 + 8),
                                   *(undefined1 (*) [16])(*param_1 + 8),8,1);
                *(long *)param_1[1] = auVar13._8_8_;
                *(long *)(*param_1 + 8) = auVar13._0_8_;
              }
            }
            else {
              uVar7 = *(undefined8 *)param_1[1];
              *(undefined8 *)param_1[1] = uVar8;
              *(undefined8 *)*param_1 = uVar7;
            }
          }
          uVar10 = (*(code *)*param_3)(puVar9,param_1 + 1);
          if ((uVar10 & 1) == 0) {
            return;
          }
          uVar8 = *(undefined8 *)param_1[1];
          *(undefined8 *)param_1[1] = *puVar9;
          *puVar9 = uVar8;
          uVar10 = (*(code *)*param_3)(param_1 + 1,*param_1 + 8);
          if ((uVar10 & 1) == 0) {
            return;
          }
          auVar13 = NEON_ext(*(undefined1 (*) [16])(*param_1 + 8),
                             *(undefined1 (*) [16])(*param_1 + 8),8,1);
          *(long *)param_1[1] = auVar13._8_8_;
          *(long *)(*param_1 + 8) = auVar13._0_8_;
          goto LAB_00bce3ec;
        }
        if (uVar10 == 5) {
          FUN_00bce42c(param_1,*param_1 + 8,param_1 + 1,param_1[1] + 8,puVar9,param_3);
          return;
        }
      }
      if ((long)uVar10 < 0x18) {
        if ((param_5 & 1) == 0) {
          FUN_00bce76c(param_1,param_2,param_3);
          return;
        }
        FUN_00bce624();
        return;
      }
      if (param_4 == 1) {
        if (param_1 == param_2) {
          return;
        }
        uVar5 = uVar10 - 2 >> 1;
        do {
          FUN_00bcf114(param_1,param_3,uVar10,uVar5);
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0xffffffffffffffff);
        do {
          FUN_00bcf29c(param_1,param_2,param_3,uVar10);
          param_2 = (undefined1 (*) [16])(param_2[-1] + 8);
          bVar1 = 2 < uVar10;
          uVar10 = uVar10 - 1;
        } while (bVar1);
        return;
      }
      puVar2 = (undefined8 *)(*param_1 + (uVar10 >> 1) * 8);
      if (uVar10 < 0x81) {
        uVar10 = (*(code *)*param_3)(param_1,puVar2);
        uVar5 = (*(code *)*param_3)(param_2[-1] + 8,param_1);
        if ((uVar10 & 1) == 0) {
          if ((uVar5 & 1) != 0) {
            uVar8 = *(undefined8 *)*param_1;
            *(undefined8 *)*param_1 = *puVar9;
            *puVar9 = uVar8;
            uVar10 = (*(code *)*param_3)(param_1,puVar2);
            if ((uVar10 & 1) != 0) {
              uVar8 = *puVar2;
              *puVar2 = *(undefined8 *)*param_1;
              *(undefined8 *)*param_1 = uVar8;
            }
          }
        }
        else {
          uVar8 = *puVar2;
          if ((uVar5 & 1) == 0) {
            *puVar2 = *(undefined8 *)*param_1;
            *(undefined8 *)*param_1 = uVar8;
            uVar10 = (*(code *)*param_3)(param_2[-1] + 8,param_1);
            if ((uVar10 & 1) != 0) {
              uVar8 = *(undefined8 *)*param_1;
              *(undefined8 *)*param_1 = *puVar9;
              *puVar9 = uVar8;
            }
          }
          else {
            *puVar2 = *puVar9;
            *puVar9 = uVar8;
          }
        }
      }
      else {
        uVar10 = (*(code *)*param_3)(puVar2,param_1);
        uVar5 = (*(code *)*param_3)(param_2[-1] + 8,puVar2);
        if ((uVar10 & 1) == 0) {
          if ((uVar5 & 1) != 0) {
            uVar8 = *puVar2;
            *puVar2 = *puVar9;
            *puVar9 = uVar8;
            uVar10 = (*(code *)*param_3)(puVar2,param_1);
            if ((uVar10 & 1) != 0) {
              uVar8 = *(undefined8 *)*param_1;
              *(undefined8 *)*param_1 = *puVar2;
              *puVar2 = uVar8;
            }
          }
        }
        else {
          uVar8 = *(undefined8 *)*param_1;
          if ((uVar5 & 1) == 0) {
            *(undefined8 *)*param_1 = *puVar2;
            *puVar2 = uVar8;
            uVar10 = (*(code *)*param_3)(param_2[-1] + 8,puVar2);
            if ((uVar10 & 1) != 0) {
              uVar8 = *puVar2;
              *puVar2 = *puVar9;
              *puVar9 = uVar8;
            }
          }
          else {
            *(undefined8 *)*param_1 = *puVar9;
            *puVar9 = uVar8;
          }
        }
        puVar11 = puVar2 + -1;
        uVar10 = (*(code *)*param_3)(puVar2 + -1,*param_1 + 8);
        uVar5 = (*(code *)*param_3)(param_2 + -1,puVar2 + -1);
        if ((uVar10 & 1) == 0) {
          if ((uVar5 & 1) != 0) {
            uVar8 = *puVar11;
            *puVar11 = *(undefined8 *)param_2[-1];
            *(undefined8 *)param_2[-1] = uVar8;
            uVar10 = (*(code *)*param_3)(puVar2 + -1,*param_1 + 8);
            if ((uVar10 & 1) != 0) {
              uVar8 = *(undefined8 *)(*param_1 + 8);
              *(undefined8 *)(*param_1 + 8) = *puVar11;
              *puVar11 = uVar8;
            }
          }
        }
        else {
          uVar8 = *(undefined8 *)(*param_1 + 8);
          if ((uVar5 & 1) == 0) {
            *(undefined8 *)(*param_1 + 8) = *puVar11;
            *puVar11 = uVar8;
            uVar10 = (*(code *)*param_3)(param_2 + -1,puVar2 + -1);
            if ((uVar10 & 1) != 0) {
              uVar8 = *puVar11;
              *puVar11 = *(undefined8 *)param_2[-1];
              *(undefined8 *)param_2[-1] = uVar8;
            }
          }
          else {
            *(undefined8 *)(*param_1 + 8) = *(undefined8 *)param_2[-1];
            *(undefined8 *)param_2[-1] = uVar8;
          }
        }
        uVar10 = (*(code *)*param_3)(puVar2 + 1,param_1 + 1);
        uVar5 = (*(code *)*param_3)(param_2[-2] + 8,puVar2 + 1);
        if ((uVar10 & 1) == 0) {
          if ((uVar5 & 1) != 0) {
            uVar8 = puVar2[1];
            puVar2[1] = *puVar12;
            *puVar12 = uVar8;
            uVar10 = (*(code *)*param_3)(puVar2 + 1,param_1 + 1);
            if ((uVar10 & 1) != 0) {
              uVar8 = *(undefined8 *)param_1[1];
              *(undefined8 *)param_1[1] = puVar2[1];
              puVar2[1] = uVar8;
            }
          }
        }
        else {
          uVar8 = *(undefined8 *)param_1[1];
          if ((uVar5 & 1) == 0) {
            *(undefined8 *)param_1[1] = puVar2[1];
            puVar2[1] = uVar8;
            uVar10 = (*(code *)*param_3)(param_2[-2] + 8,puVar2 + 1);
            if ((uVar10 & 1) != 0) {
              uVar8 = puVar2[1];
              puVar2[1] = *puVar12;
              *puVar12 = uVar8;
            }
          }
          else {
            *(undefined8 *)param_1[1] = *puVar12;
            *puVar12 = uVar8;
          }
        }
        uVar10 = (*(code *)*param_3)(puVar2,puVar2 + -1);
        uVar5 = (*(code *)*param_3)(puVar2 + 1,puVar2);
        if ((uVar10 & 1) == 0) {
          uVar8 = *puVar2;
          if ((uVar5 & 1) != 0) {
            *puVar2 = puVar2[1];
            puVar2[1] = uVar8;
            uVar10 = (*(code *)*param_3)(puVar2,puVar2 + -1);
            uVar8 = *puVar2;
            if ((uVar10 & 1) != 0) {
              uVar7 = puVar2[-1];
              puVar2[-1] = uVar8;
              uVar8 = uVar7;
              goto LAB_00bce0b8;
            }
          }
        }
        else {
          uVar7 = *puVar11;
          if ((uVar5 & 1) == 0) {
            puVar2[-1] = *puVar2;
            *puVar2 = uVar7;
            uVar10 = (*(code *)*param_3)(puVar2 + 1,puVar2);
            uVar8 = *puVar2;
            if ((uVar10 & 1) != 0) {
              uVar7 = puVar2[1];
              puVar2[1] = uVar8;
              uVar8 = uVar7;
LAB_00bce0b8:
              *puVar2 = uVar8;
            }
          }
          else {
            uVar8 = *puVar2;
            uVar3 = puVar2[1];
            puVar2[1] = uVar7;
            puVar2[-1] = uVar3;
          }
        }
        uVar7 = *(undefined8 *)*param_1;
        *(undefined8 *)*param_1 = uVar8;
        *puVar2 = uVar7;
      }
      if (((param_5 & 1) == 0) &&
         (uVar10 = (*(code *)*param_3)(param_1[-1] + 8,param_1), (uVar10 & 1) == 0)) {
        param_1 = (undefined1 (*) [16])FUN_00bce8c4(param_1,param_2,param_3);
        goto LAB_00bce164;
      }
      auVar13 = FUN_00bceac4(param_1,param_2,param_3);
      pauVar6 = auVar13._0_8_;
      if ((auVar13 & (undefined1  [16])0x1) == (undefined1  [16])0x0) break;
      uVar10 = FUN_00bcece8(param_1,pauVar6,param_3);
      uVar5 = FUN_00bcece8(*pauVar6 + 8,param_2,param_3);
      if ((uVar5 & 1) != 0) {
        param_4 = -param_4;
        param_2 = pauVar6;
        if ((uVar10 & 1) != 0) {
          return;
        }
        goto LAB_00bcdcdc;
      }
      pauVar4 = (undefined1 (*) [16])(*pauVar6 + 8);
    } while ((uVar10 & 1) != 0);
    FUN_00bcdcac(param_1,pauVar6,param_3,-param_4,param_5 & 1);
    param_1 = (undefined1 (*) [16])(*pauVar6 + 8);
LAB_00bce164:
    param_5 = 0;
    param_4 = -param_4;
  } while( true );
}


// ===== 00bce42c  FUN_00bce42c =====

void FUN_00bce42c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined8 *param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = (*(code *)*param_6)(param_2,param_1);
  uVar2 = (*(code *)*param_6)(param_3,param_2);
  if ((uVar1 & 1) == 0) {
    if ((uVar2 & 1) != 0) {
      uVar3 = *param_2;
      *param_2 = *param_3;
      *param_3 = uVar3;
      uVar1 = (*(code *)*param_6)(param_2,param_1);
      if ((uVar1 & 1) != 0) {
        uVar3 = *param_1;
        *param_1 = *param_2;
        *param_2 = uVar3;
      }
    }
  }
  else {
    uVar3 = *param_1;
    if ((uVar2 & 1) == 0) {
      *param_1 = *param_2;
      *param_2 = uVar3;
      uVar1 = (*(code *)*param_6)(param_3,param_2);
      if ((uVar1 & 1) != 0) {
        uVar3 = *param_2;
        *param_2 = *param_3;
        *param_3 = uVar3;
      }
    }
    else {
      *param_1 = *param_3;
      *param_3 = uVar3;
    }
  }
  uVar1 = (*(code *)*param_6)(param_4,param_3);
  if ((uVar1 & 1) != 0) {
    uVar3 = *param_3;
    *param_3 = *param_4;
    *param_4 = uVar3;
    uVar1 = (*(code *)*param_6)(param_3,param_2);
    if ((uVar1 & 1) != 0) {
      uVar3 = *param_2;
      *param_2 = *param_3;
      *param_3 = uVar3;
      uVar1 = (*(code *)*param_6)(param_2,param_1);
      if ((uVar1 & 1) != 0) {
        uVar3 = *param_1;
        *param_1 = *param_2;
        *param_2 = uVar3;
      }
    }
  }
  uVar1 = (*(code *)*param_6)(param_5,param_4);
  if ((uVar1 & 1) != 0) {
    uVar3 = *param_4;
    *param_4 = *param_5;
    *param_5 = uVar3;
    uVar1 = (*(code *)*param_6)(param_4,param_3);
    if ((uVar1 & 1) != 0) {
      uVar3 = *param_3;
      *param_3 = *param_4;
      *param_4 = uVar3;
      uVar1 = (*(code *)*param_6)(param_3,param_2);
      if ((uVar1 & 1) != 0) {
        uVar3 = *param_2;
        *param_2 = *param_3;
        *param_3 = uVar3;
        uVar1 = (*(code *)*param_6)(param_2,param_1);
        if ((uVar1 & 1) != 0) {
          uVar3 = *param_1;
          *param_1 = *param_2;
          *param_2 = uVar3;
        }
      }
    }
  }
  return;
}


// ===== 00bce624  FUN_00bce624 =====

void FUN_00bce624(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  void *pvVar6;
  void *pvVar7;
  long lVar8;
  long lVar9;
  void *local_48;
  
  if ((param_1 != param_2) && (param_1 + 1 != param_2)) {
    lVar8 = 0;
    puVar1 = param_1 + 1;
    puVar5 = param_1;
    do {
      puVar3 = puVar1;
      uVar2 = (*(code *)*param_3)(puVar3,puVar5);
      if ((uVar2 & 1) != 0) {
        local_48 = (void *)*puVar3;
        pvVar6 = (void *)0x0;
        *puVar3 = 0;
        lVar9 = lVar8;
        while( true ) {
          puVar1 = (undefined8 *)((long)param_1 + lVar9);
          uVar4 = *puVar1;
          *puVar1 = 0;
          puVar1[1] = uVar4;
          if (pvVar6 != (void *)0x0) {
            FUN_00bcca68(pvVar6);
            operator_delete(pvVar6);
          }
          puVar5 = param_1;
          if (lVar9 == 0) break;
          uVar2 = (*(code *)*param_3)(&local_48,(undefined8 *)((long)param_1 + lVar9) + -1);
          puVar5 = (undefined8 *)((long)param_1 + lVar9);
          if ((uVar2 & 1) == 0) break;
          pvVar6 = (void *)*puVar1;
          lVar9 = lVar9 + -8;
        }
        pvVar6 = local_48;
        pvVar7 = (void *)*puVar5;
        local_48 = (void *)0x0;
        *puVar5 = pvVar6;
        if (pvVar7 != (void *)0x0) {
          FUN_00bcca68(pvVar7);
          operator_delete(pvVar7);
          pvVar6 = local_48;
          local_48 = (void *)0x0;
          if (pvVar6 != (void *)0x0) {
            FUN_00bcca68(pvVar6);
            operator_delete(pvVar6);
          }
        }
      }
      lVar8 = lVar8 + 8;
      puVar1 = puVar3 + 1;
      puVar5 = puVar3;
    } while (puVar3 + 1 != param_2);
  }
  return;
}


// ===== 00bce76c  FUN_00bce76c =====

void FUN_00bce76c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  void *pvVar5;
  void *pvVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  void *local_58;
  
  if ((param_1 != param_2) && (param_1 + 1 != param_2)) {
    puVar7 = param_1 + -1;
    lVar8 = -8;
    puVar4 = param_1 + 1;
    do {
      puVar2 = puVar4;
      uVar1 = (*(code *)*param_3)(puVar2,param_1);
      if ((uVar1 & 1) != 0) {
        local_58 = (void *)*puVar2;
        pvVar5 = (void *)0x0;
        *puVar2 = 0;
        puVar4 = puVar7;
        lVar9 = lVar8;
        while( true ) {
          uVar3 = puVar4[1];
          puVar4[1] = 0;
          puVar4[2] = uVar3;
          if (pvVar5 != (void *)0x0) {
            FUN_00bcca68(pvVar5);
            operator_delete(pvVar5);
          }
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__algorithm/sort.h:293: libc++ Hardening assertion __k != __leftmost failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                      );
          }
          uVar1 = (*(code *)*param_3)(&local_58,puVar4);
          pvVar5 = local_58;
          if ((uVar1 & 1) == 0) break;
          pvVar5 = (void *)puVar4[1];
          puVar4 = puVar4 + -1;
          lVar9 = lVar9 + 8;
        }
        pvVar6 = (void *)puVar4[1];
        local_58 = (void *)0x0;
        puVar4[1] = pvVar5;
        if (pvVar6 != (void *)0x0) {
          FUN_00bcca68(pvVar6);
          operator_delete(pvVar6);
          pvVar5 = local_58;
          local_58 = (void *)0x0;
          if (pvVar5 != (void *)0x0) {
            FUN_00bcca68(pvVar5);
            operator_delete(pvVar5);
          }
        }
      }
      puVar7 = puVar7 + 1;
      lVar8 = lVar8 + -8;
      puVar4 = puVar2 + 1;
      param_1 = puVar2;
    } while (puVar2 + 1 != param_2);
  }
  return;
}


// ===== 00bce8c4  FUN_00bce8c4 =====

undefined8 * FUN_00bce8c4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  void *pvVar5;
  undefined8 *puVar6;
  void *local_28;
  
  local_28 = (void *)*param_1;
  *param_1 = 0;
  uVar1 = (*(code *)*param_3)(&local_28,param_2 + -1);
  puVar3 = param_1;
  if ((uVar1 & 1) == 0) {
    do {
      puVar3 = puVar3 + 1;
      if (param_2 <= puVar3) break;
      uVar1 = (*(code *)*param_3)(&local_28,puVar3);
    } while ((uVar1 & 1) == 0);
  }
  else {
    do {
      puVar3 = puVar3 + 1;
      if (puVar3 == param_2) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__algorithm/sort.h:669: libc++ Hardening assertion __first != __end failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                  );
      }
      uVar1 = (*(code *)*param_3)(&local_28,puVar3);
    } while ((uVar1 & 1) == 0);
  }
  puVar6 = param_2;
  if (puVar3 < param_2) {
    do {
      if (puVar6 == param_1) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__algorithm/sort.h:682: libc++ Hardening assertion __last != __begin failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                  );
      }
      puVar6 = puVar6 + -1;
      uVar1 = (*(code *)*param_3)(&local_28,puVar6);
    } while ((uVar1 & 1) != 0);
  }
  do {
    if (puVar6 <= puVar3) {
      puVar6 = puVar3 + -1;
      if (param_1 != puVar6) {
        uVar2 = *puVar6;
        *puVar6 = 0;
        pvVar5 = (void *)*param_1;
        *param_1 = uVar2;
        if (pvVar5 != (void *)0x0) {
          FUN_00bcca68(pvVar5);
          operator_delete(pvVar5);
        }
      }
      pvVar5 = local_28;
      local_28 = (void *)0x0;
      pvVar4 = (void *)*puVar6;
      *puVar6 = pvVar5;
      if (pvVar4 != (void *)0x0) {
        FUN_00bcca68(pvVar4);
        operator_delete(pvVar4);
      }
      pvVar5 = local_28;
      local_28 = (void *)0x0;
      if (pvVar5 != (void *)0x0) {
        FUN_00bcca68(pvVar5);
        operator_delete(pvVar5);
      }
      return puVar3;
    }
    uVar2 = *puVar3;
    *puVar3 = *puVar6;
    *puVar6 = uVar2;
    do {
      puVar3 = puVar3 + 1;
      if (puVar3 == param_2) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__algorithm/sort.h:692: libc++ Hardening assertion __first != __end failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                  );
      }
      uVar1 = (*(code *)*param_3)(&local_28,puVar3);
    } while ((uVar1 & 1) == 0);
    do {
      if (puVar6 == param_1) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__algorithm/sort.h:697: libc++ Hardening assertion __last != __begin failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                  );
      }
      puVar6 = puVar6 + -1;
      uVar1 = (*(code *)*param_3)(&local_28,puVar6);
    } while ((uVar1 & 1) != 0);
  } while( true );
}


// ===== 00bceac4  FUN_00bceac4 =====

undefined1  [16] FUN_00bceac4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  void *pvVar6;
  undefined8 *puVar7;
  void *pvVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auVar11 [16];
  void *local_38;
  
  local_38 = (void *)*param_1;
  lVar4 = 0;
  *param_1 = 0;
  do {
    if ((undefined8 *)((long)param_1 + lVar4 + 8) == param_2) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__algorithm/sort.h:603: libc++ Hardening assertion __first != __end failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                );
    }
    lVar4 = lVar4 + 8;
    puVar1 = (undefined8 *)((long)param_1 + lVar4);
    uVar2 = (*(code *)*param_3)((long)param_1 + lVar4,&local_38);
  } while ((uVar2 & 1) != 0);
  puVar5 = param_2;
  if (lVar4 == 8) {
    do {
      if (puVar5 <= puVar1) break;
      puVar5 = puVar5 + -1;
      uVar2 = (*(code *)*param_3)(puVar5,&local_38);
    } while ((uVar2 & 1) == 0);
  }
  else {
    do {
      if (puVar5 == param_1) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__algorithm/sort.h:615: libc++ Hardening assertion __last != __begin failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                  );
      }
      puVar5 = puVar5 + -1;
      uVar2 = (*(code *)*param_3)(puVar5,&local_38);
    } while ((uVar2 & 1) == 0);
  }
  puVar9 = puVar1;
  puVar10 = puVar5;
  if (puVar1 < puVar5) {
    do {
      uVar3 = *puVar9;
      *puVar9 = *puVar10;
      *puVar10 = uVar3;
      do {
        puVar7 = puVar9;
        puVar9 = puVar7 + 1;
        if (puVar9 == param_2) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__algorithm/sort.h:633: libc++ Hardening assertion __first != __end failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                    );
        }
        uVar2 = (*(code *)*param_3)(puVar9,&local_38);
      } while ((uVar2 & 1) != 0);
      do {
        if (puVar10 == param_1) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__algorithm/sort.h:638: libc++ Hardening assertion __last != __begin failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                    );
        }
        puVar10 = puVar10 + -1;
        uVar2 = (*(code *)*param_3)(puVar10,&local_38);
      } while ((uVar2 & 1) == 0);
    } while (puVar9 < puVar10);
  }
  else {
    puVar7 = puVar1 + -1;
  }
  if (param_1 != puVar7) {
    uVar3 = *puVar7;
    *puVar7 = 0;
    pvVar8 = (void *)*param_1;
    *param_1 = uVar3;
    if (pvVar8 != (void *)0x0) {
      FUN_00bcca68(pvVar8);
      operator_delete(pvVar8);
    }
  }
  pvVar8 = local_38;
  local_38 = (void *)0x0;
  pvVar6 = (void *)*puVar7;
  *puVar7 = pvVar8;
  if (pvVar6 != (void *)0x0) {
    FUN_00bcca68(pvVar6);
    operator_delete(pvVar6);
  }
  pvVar8 = local_38;
  local_38 = (void *)0x0;
  if (pvVar8 != (void *)0x0) {
    FUN_00bcca68(pvVar8);
    operator_delete(pvVar8);
  }
  auVar11[8] = puVar5 <= puVar1;
  auVar11._0_8_ = puVar7;
  auVar11._9_7_ = 0;
  return auVar11;
}


// ===== 00bcece8  FUN_00bcece8 =====

bool FUN_00bcece8(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined8 *param_3)

{
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 (*pauVar5) [16];
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 (*pauVar9) [16];
  undefined1 (*pauVar10) [16];
  void *pvVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  undefined1 auVar15 [16];
  void *local_58;
  
  uVar4 = (long)param_2 - (long)param_1 >> 3;
  if ((long)uVar4 < 3) {
    if (uVar4 < 2) {
      return true;
    }
    if (uVar4 == 2) {
      puVar8 = (undefined8 *)(param_2[-1] + 8);
      uVar4 = (*(code *)*param_3)(puVar8,param_1);
      if ((uVar4 & 1) == 0) {
        return true;
      }
      uVar6 = *(undefined8 *)*param_1;
      *(undefined8 *)*param_1 = *puVar8;
      *puVar8 = uVar6;
      return true;
    }
LAB_00bcede0:
    uVar4 = (*(code *)*param_3)(*param_1 + 8,param_1);
    uVar3 = (*(code *)*param_3)(param_1 + 1,*param_1 + 8);
    if ((uVar4 & 1) == 0) {
      if ((uVar3 & 1) != 0) {
        auVar15 = NEON_ext(*(undefined1 (*) [16])(*param_1 + 8),*(undefined1 (*) [16])(*param_1 + 8)
                           ,8,1);
        *(long *)param_1[1] = auVar15._8_8_;
        *(long *)(*param_1 + 8) = auVar15._0_8_;
        uVar4 = (*(code *)*param_3)(*param_1 + 8,param_1);
        if ((uVar4 & 1) != 0) {
          auVar15 = NEON_ext(*param_1,*param_1,8,1);
          *(long *)(*param_1 + 8) = auVar15._8_8_;
          *(long *)*param_1 = auVar15._0_8_;
        }
      }
    }
    else {
      uVar6 = *(undefined8 *)*param_1;
      if ((uVar3 & 1) == 0) {
        *(undefined8 *)*param_1 = *(undefined8 *)(*param_1 + 8);
        *(undefined8 *)(*param_1 + 8) = uVar6;
        uVar4 = (*(code *)*param_3)(param_1 + 1,*param_1 + 8);
        if ((uVar4 & 1) != 0) {
          auVar15 = NEON_ext(*(undefined1 (*) [16])(*param_1 + 8),
                             *(undefined1 (*) [16])(*param_1 + 8),8,1);
          *(long *)param_1[1] = auVar15._8_8_;
          *(long *)(*param_1 + 8) = auVar15._0_8_;
        }
      }
      else {
        uVar7 = *(undefined8 *)param_1[1];
        *(undefined8 *)param_1[1] = uVar6;
        *(undefined8 *)*param_1 = uVar7;
      }
    }
    if ((undefined1 (*) [16])(param_1[1] + 8) != param_2) {
      lVar12 = 0;
      iVar13 = 0;
      pauVar5 = (undefined1 (*) [16])(param_1[1] + 8);
      pauVar10 = param_1 + 1;
      do {
        pauVar9 = pauVar5;
        uVar4 = (*(code *)*param_3)(pauVar9,pauVar10);
        if ((uVar4 & 1) != 0) {
          local_58 = *(void **)*pauVar9;
          *(undefined8 *)*pauVar9 = 0;
          lVar2 = lVar12;
          do {
            lVar14 = lVar2;
            uVar6 = *(undefined8 *)(param_1[1] + lVar14);
            pvVar1 = *(void **)(param_1[1] + lVar14 + 8);
            *(undefined8 *)(param_1[1] + lVar14) = 0;
            *(undefined8 *)(param_1[1] + lVar14 + 8) = uVar6;
            if (pvVar1 != (void *)0x0) {
              FUN_00bcca68(pvVar1);
              operator_delete(pvVar1);
            }
            pauVar5 = param_1;
            if (lVar14 == -0x10) goto LAB_00bcf000;
            uVar4 = (*(code *)*param_3)(&local_58,*param_1 + lVar14 + 8);
            lVar2 = lVar14 + -8;
          } while ((uVar4 & 1) != 0);
          pauVar5 = (undefined1 (*) [16])(param_1[1] + lVar14);
LAB_00bcf000:
          pvVar1 = local_58;
          pvVar11 = *(void **)*pauVar5;
          local_58 = (void *)0x0;
          *(void **)*pauVar5 = pvVar1;
          if (pvVar11 != (void *)0x0) {
            FUN_00bcca68(pvVar11);
            operator_delete(pvVar11);
          }
          pvVar1 = local_58;
          local_58 = (void *)0x0;
          if (pvVar1 != (void *)0x0) {
            FUN_00bcca68(pvVar1);
            operator_delete(pvVar1);
          }
          iVar13 = iVar13 + 1;
          if (iVar13 == 8) {
            return (undefined1 (*) [16])(*pauVar9 + 8) == param_2;
          }
        }
        lVar12 = lVar12 + 8;
        pauVar5 = (undefined1 (*) [16])(*pauVar9 + 8);
        pauVar10 = pauVar9;
      } while ((undefined1 (*) [16])(*pauVar9 + 8) != param_2);
    }
  }
  else {
    if (uVar4 == 3) {
      puVar8 = (undefined8 *)(param_2[-1] + 8);
      uVar4 = (*(code *)*param_3)(*param_1 + 8,param_1);
      uVar3 = (*(code *)*param_3)(puVar8,*param_1 + 8);
      if ((uVar4 & 1) != 0) {
        uVar6 = *(undefined8 *)*param_1;
        if ((uVar3 & 1) != 0) {
          *(undefined8 *)*param_1 = *puVar8;
          *puVar8 = uVar6;
          return true;
        }
        *(undefined8 *)*param_1 = *(undefined8 *)(*param_1 + 8);
        *(undefined8 *)(*param_1 + 8) = uVar6;
        uVar4 = (*(code *)*param_3)(puVar8,*param_1 + 8);
        if ((uVar4 & 1) == 0) {
          return true;
        }
        uVar6 = *(undefined8 *)(*param_1 + 8);
        *(undefined8 *)(*param_1 + 8) = *puVar8;
        *puVar8 = uVar6;
        return true;
      }
      if ((uVar3 & 1) == 0) {
        return true;
      }
      uVar6 = *(undefined8 *)(*param_1 + 8);
      *(undefined8 *)(*param_1 + 8) = *puVar8;
      *puVar8 = uVar6;
    }
    else {
      if (uVar4 != 4) {
        if (uVar4 == 5) {
          FUN_00bce42c(param_1,*param_1 + 8,param_1 + 1,param_1[1] + 8,param_2[-1] + 8,param_3);
          return true;
        }
        goto LAB_00bcede0;
      }
      puVar8 = (undefined8 *)(param_2[-1] + 8);
      uVar4 = (*(code *)*param_3)(*param_1 + 8,param_1);
      uVar3 = (*(code *)*param_3)(param_1 + 1,*param_1 + 8);
      if ((uVar4 & 1) == 0) {
        if ((uVar3 & 1) != 0) {
          auVar15 = NEON_ext(*(undefined1 (*) [16])(*param_1 + 8),
                             *(undefined1 (*) [16])(*param_1 + 8),8,1);
          *(long *)param_1[1] = auVar15._8_8_;
          *(long *)(*param_1 + 8) = auVar15._0_8_;
          uVar4 = (*(code *)*param_3)(*param_1 + 8,param_1);
          if ((uVar4 & 1) != 0) {
            auVar15 = NEON_ext(*param_1,*param_1,8,1);
            *(long *)(*param_1 + 8) = auVar15._8_8_;
            *(long *)*param_1 = auVar15._0_8_;
          }
        }
      }
      else {
        uVar6 = *(undefined8 *)*param_1;
        if ((uVar3 & 1) == 0) {
          *(undefined8 *)*param_1 = *(undefined8 *)(*param_1 + 8);
          *(undefined8 *)(*param_1 + 8) = uVar6;
          uVar4 = (*(code *)*param_3)(param_1 + 1,*param_1 + 8);
          if ((uVar4 & 1) != 0) {
            auVar15 = NEON_ext(*(undefined1 (*) [16])(*param_1 + 8),
                               *(undefined1 (*) [16])(*param_1 + 8),8,1);
            *(long *)param_1[1] = auVar15._8_8_;
            *(long *)(*param_1 + 8) = auVar15._0_8_;
          }
        }
        else {
          uVar7 = *(undefined8 *)param_1[1];
          *(undefined8 *)param_1[1] = uVar6;
          *(undefined8 *)*param_1 = uVar7;
        }
      }
      uVar4 = (*(code *)*param_3)(puVar8,param_1 + 1);
      if ((uVar4 & 1) == 0) {
        return true;
      }
      uVar6 = *(undefined8 *)param_1[1];
      *(undefined8 *)param_1[1] = *puVar8;
      *puVar8 = uVar6;
      uVar4 = (*(code *)*param_3)(param_1 + 1,*param_1 + 8);
      if ((uVar4 & 1) == 0) {
        return true;
      }
      auVar15 = NEON_ext(*(undefined1 (*) [16])(*param_1 + 8),*(undefined1 (*) [16])(*param_1 + 8),8
                         ,1);
      *(long *)param_1[1] = auVar15._8_8_;
      *(long *)(*param_1 + 8) = auVar15._0_8_;
    }
    uVar4 = (*(code *)*param_3)(*param_1 + 8,param_1);
    if ((uVar4 & 1) != 0) {
      auVar15 = NEON_ext(*param_1,*param_1,8,1);
      *(long *)(*param_1 + 8) = auVar15._8_8_;
      *(long *)*param_1 = auVar15._0_8_;
      return true;
    }
  }
  return true;
}


// ===== 00bcf114  FUN_00bcf114 =====

void FUN_00bcf114(long param_1,undefined8 *param_2,long param_3,ulong param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  void *pvVar7;
  void *pvVar8;
  ulong uVar9;
  ulong uVar10;
  void *local_58;
  
  if ((1 < param_3) && (uVar9 = param_3 - 2U >> 1, (long)param_4 <= (long)uVar9)) {
    uVar4 = param_4 << 1 | 1;
    uVar3 = param_4 * 2 + 2;
    uVar10 = uVar4;
    if (((long)uVar3 < param_3) &&
       (uVar2 = (*(code *)*param_2)(param_1 + uVar4 * 8,param_1 + uVar3 * 8), uVar10 = uVar3,
       (uVar2 & 1) == 0)) {
      uVar10 = uVar4;
    }
    puVar1 = (undefined8 *)(param_1 + param_4 * 8);
    uVar3 = (*(code *)*param_2)(param_1 + uVar10 * 8,puVar1);
    if ((uVar3 & 1) == 0) {
      local_58 = (void *)*puVar1;
      *puVar1 = 0;
      do {
        uVar3 = uVar10;
        uVar6 = *(undefined8 *)(param_1 + uVar3 * 8);
        *(undefined8 *)(param_1 + uVar3 * 8) = 0;
        pvVar8 = *(void **)(param_1 + param_4 * 8);
        *(undefined8 *)(param_1 + param_4 * 8) = uVar6;
        if (pvVar8 != (void *)0x0) {
          FUN_00bcca68(pvVar8);
          operator_delete(pvVar8);
        }
        if ((long)uVar9 < (long)uVar3) break;
        uVar2 = uVar3 << 1 | 1;
        uVar4 = uVar3 * 2 + 2;
        uVar10 = uVar2;
        if (((long)uVar4 < param_3) &&
           (uVar5 = (*(code *)*param_2)(param_1 + uVar2 * 8,param_1 + uVar4 * 8), uVar10 = uVar4,
           (uVar5 & 1) == 0)) {
          uVar10 = uVar2;
        }
        uVar4 = (*(code *)*param_2)(param_1 + uVar10 * 8,&local_58);
        param_4 = uVar3;
      } while ((uVar4 & 1) == 0);
      pvVar8 = local_58;
      pvVar7 = *(void **)(param_1 + uVar3 * 8);
      local_58 = (void *)0x0;
      *(void **)(param_1 + uVar3 * 8) = pvVar8;
      if (pvVar7 != (void *)0x0) {
        FUN_00bcca68(pvVar7);
        operator_delete(pvVar7);
        pvVar8 = local_58;
        local_58 = (void *)0x0;
        if (pvVar8 != (void *)0x0) {
          FUN_00bcca68(pvVar8);
          operator_delete(pvVar8);
        }
      }
    }
  }
  return;
}


// ===== 00bcf29c  FUN_00bcf29c =====

void FUN_00bcf29c(undefined8 *param_1,long param_2,undefined8 *param_3,long param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  void *pvVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  
  if (param_4 < 1) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__algorithm/pop_heap.h:40: libc++ Hardening assertion __len > 0 failed: The heap given to pop_heap must be non-empty\n"
              );
  }
  if (param_4 != 1) {
    uVar6 = *param_1;
    *param_1 = 0;
    uVar10 = 0;
    puVar9 = param_1;
    do {
      uVar3 = uVar10 << 1 | 1;
      uVar1 = uVar10 * 2 + 2;
      puVar2 = puVar9 + uVar10 + 1;
      puVar7 = puVar2;
      uVar11 = uVar3;
      if ((long)uVar1 < param_4) {
        uVar4 = (*(code *)*param_3)(puVar2,puVar9 + uVar10 + 2);
        puVar7 = puVar9 + uVar10 + 2;
        uVar11 = uVar1;
        if ((uVar4 & 1) == 0) {
          puVar7 = puVar2;
          uVar11 = uVar3;
        }
      }
      uVar5 = *puVar7;
      *puVar7 = 0;
      pvVar8 = (void *)*puVar9;
      *puVar9 = uVar5;
      if (pvVar8 != (void *)0x0) {
        FUN_00bcca68(pvVar8);
        operator_delete(pvVar8);
      }
      uVar10 = uVar11;
      puVar9 = puVar7;
    } while ((long)uVar11 <= (long)(param_4 - 2U >> 1));
    puVar9 = (undefined8 *)(param_2 + -8);
    if (puVar7 != puVar9) {
      uVar5 = *puVar9;
      *puVar9 = 0;
      pvVar8 = (void *)*puVar7;
      *puVar7 = uVar5;
      if (pvVar8 != (void *)0x0) {
        FUN_00bcca68(pvVar8);
        operator_delete(pvVar8);
      }
      pvVar8 = (void *)*puVar9;
      *puVar9 = uVar6;
      if (pvVar8 != (void *)0x0) {
        FUN_00bcca68(pvVar8);
        operator_delete(pvVar8);
      }
      FUN_00bcf48c(param_1,puVar7 + 1,param_3,(long)(puVar7 + 1) - (long)param_1 >> 3);
      return;
    }
    pvVar8 = (void *)*puVar7;
    *puVar7 = uVar6;
    if (pvVar8 != (void *)0x0) {
      FUN_00bcca68(pvVar8);
      operator_delete(pvVar8);
      return;
    }
  }
  return;
}


// ===== 00bcf48c  FUN_00bcf48c =====

void FUN_00bcf48c(long param_1,long param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 *puVar5;
  void *pvVar6;
  undefined8 *puVar7;
  ulong uVar8;
  void *local_48;
  
  if (1 < param_4) {
    uVar8 = param_4 - 2U >> 1;
    puVar7 = (undefined8 *)(param_2 + -8);
    puVar1 = (undefined8 *)(param_1 + uVar8 * 8);
    uVar2 = (*(code *)*param_3)(puVar1,puVar7);
    if ((uVar2 & 1) != 0) {
      local_48 = (void *)*puVar7;
      *puVar7 = 0;
      do {
        puVar5 = puVar1;
        uVar3 = *puVar5;
        *puVar5 = 0;
        pvVar6 = (void *)*puVar7;
        *puVar7 = uVar3;
        if (pvVar6 != (void *)0x0) {
          FUN_00bcca68(pvVar6);
          operator_delete(pvVar6);
        }
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1 >> 1;
        puVar1 = (undefined8 *)(param_1 + uVar8 * 8);
        uVar2 = (*(code *)*param_3)(puVar1,&local_48);
        puVar7 = puVar5;
      } while ((uVar2 & 1) != 0);
      pvVar6 = local_48;
      pvVar4 = (void *)*puVar5;
      local_48 = (void *)0x0;
      *puVar5 = pvVar6;
      if (pvVar4 != (void *)0x0) {
        FUN_00bcca68(pvVar4);
        operator_delete(pvVar4);
        pvVar6 = local_48;
        local_48 = (void *)0x0;
        if (pvVar6 != (void *)0x0) {
          FUN_00bcca68(pvVar6);
          operator_delete(pvVar6);
        }
      }
    }
  }
  return;
}


// ===== 00bcf5a0  FUN_00bcf5a0 =====

undefined8 * FUN_00bcf5a0(long *param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  void *pvVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  puVar11 = (undefined8 *)(param_1[1] - *param_1);
  uVar1 = ((long)puVar11 >> 5) + 1;
  if (uVar1 >> 0x3b == 0) {
    uVar7 = param_1[2] - *param_1;
    uVar8 = (long)uVar7 >> 4;
    if (uVar8 <= uVar1) {
      uVar8 = uVar1;
    }
    if (0x7fffffffffffffdf < uVar7) {
      uVar8 = 0x7ffffffffffffff;
    }
    if (uVar8 == 0) {
      pvVar5 = (void *)0x0;
    }
    else {
      if (uVar8 >> 0x3b != 0) goto LAB_00bcf740;
      pvVar5 = operator_new(uVar8 << 5);
      puVar11 = (undefined8 *)((long)pvVar5 + (long)puVar11);
    }
    if (puVar11 == (undefined8 *)0x0) {
LAB_00bcf714:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *puVar11 = &PTR_FUN_00d385d8;
    *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(param_2 + 8);
    uVar13 = *(undefined8 *)(param_2 + 0x14);
    uVar12 = *(undefined8 *)(param_2 + 0xc);
    *puVar11 = &PTR_FUN_00d48390;
    *(undefined8 *)((long)puVar11 + 0x14) = uVar13;
    *(undefined8 *)((long)puVar11 + 0xc) = uVar12;
    *(undefined4 *)((long)puVar11 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
    puVar6 = (undefined8 *)*param_1;
    puVar4 = (undefined8 *)param_1[1];
    puVar3 = (undefined8 *)((long)puVar11 + ((long)puVar6 - (long)puVar4));
    puVar9 = puVar6;
    puVar10 = puVar3;
    if (puVar4 != puVar6) {
      do {
        if (puVar10 == (undefined8 *)0x0) goto LAB_00bcf714;
        *puVar10 = &PTR_FUN_00d385d8;
        *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar9 + 1);
        uVar13 = *(undefined8 *)((long)puVar9 + 0x14);
        uVar12 = *(undefined8 *)((long)puVar9 + 0xc);
        *puVar10 = &PTR_FUN_00d48390;
        *(undefined8 *)((long)puVar10 + 0x14) = uVar13;
        *(undefined8 *)((long)puVar10 + 0xc) = uVar12;
        puVar2 = puVar9 + 4;
        *(undefined4 *)((long)puVar10 + 0x1c) = *(undefined4 *)((long)puVar9 + 0x1c);
        puVar9 = puVar2;
        puVar10 = puVar10 + 4;
      } while (puVar2 != puVar4);
      do {
        if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        puVar9 = puVar6 + 4;
        (**(code **)*puVar6)();
        puVar6 = puVar9;
      } while (puVar9 != puVar4);
      puVar6 = (undefined8 *)*param_1;
    }
    *param_1 = (long)puVar3;
    param_1[1] = (long)(puVar11 + 4);
    param_1[2] = (long)((long)pvVar5 + uVar8 * 0x20);
    if (puVar6 != (undefined8 *)0x0) {
      operator_delete(puVar6);
    }
    return puVar11 + 4;
  }
  FUN_00bcd690();
LAB_00bcf740:
                    /* WARNING: Subroutine does not return */
  FUN_005d55a4();
}


// ===== 00bcf744  FUN_00bcf744 =====

undefined8 * FUN_00bcf744(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  size_t __n;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  void *__dest;
  
  puVar6 = (undefined8 *)(param_1[1] - *param_1);
  uVar1 = ((long)puVar6 >> 3) + 1;
  if (uVar1 >> 0x3d != 0) {
    FUN_00bcf838();
LAB_00bcf834:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  uVar4 = param_1[2] - *param_1;
  uVar5 = (long)uVar4 >> 2;
  if (uVar5 <= uVar1) {
    uVar5 = uVar1;
  }
  if (0x7ffffffffffffff7 < uVar4) {
    uVar5 = 0x1fffffffffffffff;
  }
  if (uVar5 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (uVar5 >> 0x3d != 0) goto LAB_00bcf834;
    pvVar2 = operator_new(uVar5 << 3);
    puVar6 = (undefined8 *)((long)pvVar2 + (long)puVar6);
  }
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = *param_2;
    __n = param_1[1] - *param_1;
    __dest = (void *)((long)puVar6 - __n);
    memcpy(__dest,(void *)*param_1,__n);
    pvVar3 = (void *)*param_1;
    *param_1 = (long)__dest;
    param_1[1] = (long)(puVar6 + 1);
    param_1[2] = (long)((long)pvVar2 + uVar5 * 8);
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    return puVar6 + 1;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00bcf838  FUN_00bcf838 =====

void FUN_00bcf838(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00bcf850  FUN_00bcf850 =====

undefined8 * FUN_00bcf850(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  size_t __n;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  void *__dest;
  
  puVar6 = (undefined8 *)(param_1[1] - *param_1);
  uVar1 = ((long)puVar6 >> 3) + 1;
  if (uVar1 >> 0x3d != 0) {
    FUN_00bcf838();
LAB_00bcf940:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  uVar4 = param_1[2] - *param_1;
  uVar5 = (long)uVar4 >> 2;
  if (uVar5 <= uVar1) {
    uVar5 = uVar1;
  }
  if (0x7ffffffffffffff7 < uVar4) {
    uVar5 = 0x1fffffffffffffff;
  }
  if (uVar5 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (uVar5 >> 0x3d != 0) goto LAB_00bcf940;
    pvVar2 = operator_new(uVar5 << 3);
    puVar6 = (undefined8 *)((long)pvVar2 + (long)puVar6);
  }
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = *param_2;
    __n = param_1[1] - *param_1;
    __dest = (void *)((long)puVar6 - __n);
    memcpy(__dest,(void *)*param_1,__n);
    pvVar3 = (void *)*param_1;
    *param_1 = (long)__dest;
    param_1[1] = (long)(puVar6 + 1);
    param_1[2] = (long)((long)pvVar2 + uVar5 * 8);
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    return puVar6 + 1;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00bcf944  FUN_00bcf944 =====

void FUN_00bcf944(undefined8 *param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00bcf95c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x20))(param_2,*(undefined8 *)*param_1);
  return;
}


// ===== 00bcf960  FUN_00bcf960 =====

void FUN_00bcf960(undefined8 *param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00bcf978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x20))(param_2,*(undefined8 *)*param_1);
  return;
}


// ===== 00bcf97c  FUN_00bcf97c =====

void FUN_00bcf97c(undefined8 *param_1,void *param_2,undefined8 *param_3,ulong param_4,ulong param_5)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  size_t __n;
  undefined8 *puVar6;
  undefined1 (*pauVar7) [16];
  undefined1 (*pauVar8) [16];
  ulong uVar9;
  void *pvVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined1 (*pauVar14) [16];
  size_t __n_00;
  undefined1 (*pauVar15) [16];
  void *pvVar16;
  undefined1 (*pauVar17) [16];
  long lVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  uVar9 = param_1[2];
  pvVar16 = (void *)*param_1;
  if ((ulong)((long)(uVar9 - (long)pvVar16) >> 3) < param_4) {
    puVar6 = param_3;
    uVar2 = param_4;
    if (pvVar16 == (void *)0x0) {
LAB_00bcfb20:
      if (param_4 >> 0x3d == 0) {
        uVar13 = (long)uVar9 >> 2;
        if ((ulong)((long)uVar9 >> 2) <= param_4) {
          uVar13 = param_4;
        }
        if (0x7ffffffffffffff7 < uVar9) {
          uVar13 = 0x1fffffffffffffff;
        }
        if (uVar13 >> 0x3d == 0) {
          pvVar16 = operator_new(uVar13 * 8);
          *param_1 = pvVar16;
          param_1[1] = pvVar16;
          param_1[2] = (void *)((long)pvVar16 + uVar13 * 8);
          memcpy(pvVar16,param_2,(long)param_3 - (long)param_2);
          lVar11 = (long)pvVar16 + ((long)param_3 - (long)param_2);
          goto LAB_00bcfb7c;
        }
      }
      auVar19 = FUN_00bcf838();
      param_5 = param_5 & 0xffffffff;
LAB_00bcfbdc:
      do {
        pauVar15 = auVar19._8_8_;
        lVar11 = -uVar2;
        pauVar7 = auVar19._0_8_;
        do {
          pauVar14 = pauVar7;
          lVar11 = lVar11 + 1;
          uVar9 = (long)pauVar15 - (long)pauVar14 >> 3;
          if ((long)uVar9 < 3) {
            if (uVar9 < 2) {
              return;
            }
            if (uVar9 == 2) {
              uVar9 = (*(code *)*puVar6)(*(undefined8 *)(pauVar15[-1] + 8),*(undefined8 *)*pauVar14)
              ;
              if ((uVar9 & 1) == 0) {
                return;
              }
              uVar12 = *(undefined8 *)*pauVar14;
              *(undefined8 *)*pauVar14 = *(undefined8 *)(pauVar15[-1] + 8);
LAB_00bd02ec:
              *(undefined8 *)(pauVar15[-1] + 8) = uVar12;
              return;
            }
          }
          else {
            if (uVar9 == 3) {
              uVar9 = (*(code *)*puVar6)(*(undefined8 *)(*pauVar14 + 8),*(undefined8 *)*pauVar14);
              uVar2 = (*(code *)*puVar6)(*(undefined8 *)(pauVar15[-1] + 8),
                                         *(undefined8 *)(*pauVar14 + 8));
              if ((uVar9 & 1) != 0) {
                uVar12 = *(undefined8 *)*pauVar14;
                if ((uVar2 & 1) != 0) {
                  *(undefined8 *)*pauVar14 = *(undefined8 *)(pauVar15[-1] + 8);
                  *(undefined8 *)(pauVar15[-1] + 8) = uVar12;
                  return;
                }
                *(undefined8 *)*pauVar14 = *(undefined8 *)(*pauVar14 + 8);
                *(undefined8 *)(*pauVar14 + 8) = uVar12;
                uVar9 = (*(code *)*puVar6)(*(undefined8 *)(pauVar15[-1] + 8));
                if ((uVar9 & 1) == 0) {
                  return;
                }
                uVar12 = *(undefined8 *)(*pauVar14 + 8);
                *(undefined8 *)(*pauVar14 + 8) = *(undefined8 *)(pauVar15[-1] + 8);
                goto LAB_00bd02ec;
              }
              if ((uVar2 & 1) == 0) {
                return;
              }
              uVar12 = *(undefined8 *)(*pauVar14 + 8);
              *(undefined8 *)(*pauVar14 + 8) = *(undefined8 *)(pauVar15[-1] + 8);
              *(undefined8 *)(pauVar15[-1] + 8) = uVar12;
              uVar12 = *(undefined8 *)*pauVar14;
              uVar4 = *(undefined8 *)(*pauVar14 + 8);
LAB_00bd0234:
              uVar9 = (*(code *)*puVar6)(uVar4,uVar12);
              if ((uVar9 & 1) == 0) {
                return;
              }
              auVar19 = NEON_ext(*pauVar14,*pauVar14,8,1);
              *(long *)(*pauVar14 + 8) = auVar19._8_8_;
              *(long *)*pauVar14 = auVar19._0_8_;
              return;
            }
            if (uVar9 == 4) {
              FUN_00bd0324(pauVar14,*pauVar14 + 8,pauVar14 + 1,pauVar15[-1] + 8,puVar6);
              return;
            }
            if (uVar9 == 5) {
              FUN_00bd0324(pauVar14,*pauVar14 + 8,pauVar14 + 1,pauVar14[1] + 8,puVar6);
              uVar9 = (*(code *)*puVar6)(*(undefined8 *)(pauVar15[-1] + 8),
                                         *(undefined8 *)(pauVar14[1] + 8));
              if ((uVar9 & 1) == 0) {
                return;
              }
              uVar12 = *(undefined8 *)(pauVar14[1] + 8);
              *(undefined8 *)(pauVar14[1] + 8) = *(undefined8 *)(pauVar15[-1] + 8);
              *(undefined8 *)(pauVar15[-1] + 8) = uVar12;
              uVar9 = (*(code *)*puVar6)(*(undefined8 *)(pauVar14[1] + 8),*(undefined8 *)pauVar14[1]
                                        );
              if ((uVar9 & 1) == 0) {
                return;
              }
              uVar12 = *(undefined8 *)pauVar14[1];
              uVar4 = *(undefined8 *)(pauVar14[1] + 8);
              uVar5 = *(undefined8 *)(*pauVar14 + 8);
              *(undefined8 *)pauVar14[1] = uVar4;
              *(undefined8 *)(pauVar14[1] + 8) = uVar12;
              uVar9 = (*(code *)*puVar6)(uVar4,uVar5);
              if ((uVar9 & 1) == 0) {
                return;
              }
              uVar5 = *(undefined8 *)(*pauVar14 + 8);
              uVar4 = *(undefined8 *)pauVar14[1];
              uVar12 = *(undefined8 *)*pauVar14;
              *(undefined8 *)(*pauVar14 + 8) = uVar4;
              *(undefined8 *)pauVar14[1] = uVar5;
              goto LAB_00bd0234;
            }
          }
          if ((long)uVar9 < 0x18) {
            if ((param_5 & 1) == 0) {
              if (pauVar14 == pauVar15) {
                return;
              }
              if ((undefined1 (*) [16])(*pauVar14 + 8) == pauVar15) {
                return;
              }
              lVar11 = -8;
              pauVar7 = (undefined1 (*) [16])(*pauVar14 + 8);
              do {
                pauVar17 = pauVar7;
                uVar9 = (*(code *)*puVar6)(*(undefined8 *)(*pauVar14 + 8),*(undefined8 *)*pauVar14);
                if ((uVar9 & 1) != 0) {
                  uVar12 = *(undefined8 *)*pauVar17;
                  pauVar7 = pauVar17;
                  lVar3 = lVar11;
                  do {
                    *(undefined8 *)*pauVar7 = *(undefined8 *)(pauVar7[-1] + 8);
                    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                      std::__Cr::__libcpp_verbose_abort
                                ("%s",
                                 "gen/third_party/libc++/src/include/__algorithm/sort.h:293: libc++ Hardening assertion __k != __leftmost failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                                );
                    }
                    uVar9 = (*(code *)*puVar6)(uVar12,*(undefined8 *)pauVar7[-1]);
                    pauVar7 = (undefined1 (*) [16])(pauVar7[-1] + 8);
                    lVar3 = lVar3 + 8;
                  } while ((uVar9 & 1) != 0);
                  *(undefined8 *)*pauVar7 = uVar12;
                }
                lVar11 = lVar11 + -8;
                pauVar7 = (undefined1 (*) [16])(*pauVar17 + 8);
                pauVar14 = pauVar17;
              } while ((undefined1 (*) [16])(*pauVar17 + 8) != pauVar15);
              return;
            }
            if (pauVar14 == pauVar15) {
              return;
            }
            if ((undefined1 (*) [16])(*pauVar14 + 8) == pauVar15) {
              return;
            }
            lVar11 = 0;
            pauVar7 = (undefined1 (*) [16])(*pauVar14 + 8);
            pauVar17 = pauVar14;
            goto LAB_00bd0194;
          }
          if (lVar11 == 1) {
            if (pauVar14 == pauVar15) {
              return;
            }
            FUN_00bd0ad0(pauVar14,pauVar15,pauVar15,puVar6);
            return;
          }
          puVar1 = (undefined8 *)(*pauVar14 + (uVar9 >> 1) * 8);
          if (uVar9 < 0x81) {
            uVar9 = (*(code *)*puVar6)(*(undefined8 *)*pauVar14,*puVar1);
            uVar2 = (*(code *)*puVar6)(*(undefined8 *)(pauVar15[-1] + 8),*(undefined8 *)*pauVar14);
            if ((uVar9 & 1) == 0) {
              if ((uVar2 & 1) != 0) {
                uVar12 = *(undefined8 *)*pauVar14;
                *(undefined8 *)*pauVar14 = *(undefined8 *)(pauVar15[-1] + 8);
                *(undefined8 *)(pauVar15[-1] + 8) = uVar12;
                uVar9 = (*(code *)*puVar6)(*(undefined8 *)*pauVar14,*puVar1);
                if ((uVar9 & 1) != 0) {
                  uVar12 = *puVar1;
                  *puVar1 = *(undefined8 *)*pauVar14;
                  *(undefined8 *)*pauVar14 = uVar12;
                }
              }
            }
            else {
              uVar12 = *puVar1;
              if ((uVar2 & 1) == 0) {
                *puVar1 = *(undefined8 *)*pauVar14;
                *(undefined8 *)*pauVar14 = uVar12;
                uVar9 = (*(code *)*puVar6)(*(undefined8 *)(pauVar15[-1] + 8));
                if ((uVar9 & 1) != 0) {
                  uVar12 = *(undefined8 *)*pauVar14;
                  *(undefined8 *)*pauVar14 = *(undefined8 *)(pauVar15[-1] + 8);
                  *(undefined8 *)(pauVar15[-1] + 8) = uVar12;
                }
              }
              else {
                *puVar1 = *(undefined8 *)(pauVar15[-1] + 8);
                *(undefined8 *)(pauVar15[-1] + 8) = uVar12;
              }
            }
          }
          else {
            uVar9 = (*(code *)*puVar6)(*puVar1,*(undefined8 *)*pauVar14);
            uVar2 = (*(code *)*puVar6)(*(undefined8 *)(pauVar15[-1] + 8),*puVar1);
            if ((uVar9 & 1) == 0) {
              if ((uVar2 & 1) != 0) {
                uVar12 = *puVar1;
                *puVar1 = *(undefined8 *)(pauVar15[-1] + 8);
                *(undefined8 *)(pauVar15[-1] + 8) = uVar12;
                uVar9 = (*(code *)*puVar6)(*puVar1,*(undefined8 *)*pauVar14);
                if ((uVar9 & 1) != 0) {
                  uVar12 = *(undefined8 *)*pauVar14;
                  *(undefined8 *)*pauVar14 = *puVar1;
                  *puVar1 = uVar12;
                }
              }
            }
            else {
              uVar12 = *(undefined8 *)*pauVar14;
              if ((uVar2 & 1) == 0) {
                *(undefined8 *)*pauVar14 = *puVar1;
                *puVar1 = uVar12;
                uVar9 = (*(code *)*puVar6)(*(undefined8 *)(pauVar15[-1] + 8));
                if ((uVar9 & 1) != 0) {
                  uVar12 = *puVar1;
                  *puVar1 = *(undefined8 *)(pauVar15[-1] + 8);
                  *(undefined8 *)(pauVar15[-1] + 8) = uVar12;
                }
              }
              else {
                *(undefined8 *)*pauVar14 = *(undefined8 *)(pauVar15[-1] + 8);
                *(undefined8 *)(pauVar15[-1] + 8) = uVar12;
              }
            }
            uVar9 = (*(code *)*puVar6)(puVar1[-1],*(undefined8 *)(*pauVar14 + 8));
            uVar2 = (*(code *)*puVar6)(*(undefined8 *)pauVar15[-1],puVar1[-1]);
            if ((uVar9 & 1) == 0) {
              if ((uVar2 & 1) != 0) {
                uVar12 = puVar1[-1];
                puVar1[-1] = *(undefined8 *)pauVar15[-1];
                *(undefined8 *)pauVar15[-1] = uVar12;
                uVar9 = (*(code *)*puVar6)(puVar1[-1],*(undefined8 *)(*pauVar14 + 8));
                if ((uVar9 & 1) != 0) {
                  uVar12 = *(undefined8 *)(*pauVar14 + 8);
                  *(undefined8 *)(*pauVar14 + 8) = puVar1[-1];
                  puVar1[-1] = uVar12;
                }
              }
            }
            else {
              uVar12 = *(undefined8 *)(*pauVar14 + 8);
              if ((uVar2 & 1) == 0) {
                *(undefined8 *)(*pauVar14 + 8) = puVar1[-1];
                puVar1[-1] = uVar12;
                uVar9 = (*(code *)*puVar6)(*(undefined8 *)pauVar15[-1]);
                if ((uVar9 & 1) != 0) {
                  uVar12 = puVar1[-1];
                  puVar1[-1] = *(undefined8 *)pauVar15[-1];
                  *(undefined8 *)pauVar15[-1] = uVar12;
                }
              }
              else {
                *(undefined8 *)(*pauVar14 + 8) = *(undefined8 *)pauVar15[-1];
                *(undefined8 *)pauVar15[-1] = uVar12;
              }
            }
            uVar9 = (*(code *)*puVar6)(puVar1[1],*(undefined8 *)pauVar14[1]);
            uVar2 = (*(code *)*puVar6)(*(undefined8 *)(pauVar15[-2] + 8),puVar1[1]);
            if ((uVar9 & 1) == 0) {
              if ((uVar2 & 1) != 0) {
                uVar12 = puVar1[1];
                puVar1[1] = *(undefined8 *)(pauVar15[-2] + 8);
                *(undefined8 *)(pauVar15[-2] + 8) = uVar12;
                uVar9 = (*(code *)*puVar6)(puVar1[1],*(undefined8 *)pauVar14[1]);
                if ((uVar9 & 1) != 0) {
                  uVar12 = *(undefined8 *)pauVar14[1];
                  *(undefined8 *)pauVar14[1] = puVar1[1];
                  puVar1[1] = uVar12;
                }
              }
            }
            else {
              uVar12 = *(undefined8 *)pauVar14[1];
              if ((uVar2 & 1) == 0) {
                *(undefined8 *)pauVar14[1] = puVar1[1];
                puVar1[1] = uVar12;
                uVar9 = (*(code *)*puVar6)(*(undefined8 *)(pauVar15[-2] + 8));
                if ((uVar9 & 1) != 0) {
                  uVar12 = puVar1[1];
                  puVar1[1] = *(undefined8 *)(pauVar15[-2] + 8);
                  *(undefined8 *)(pauVar15[-2] + 8) = uVar12;
                }
              }
              else {
                *(undefined8 *)pauVar14[1] = *(undefined8 *)(pauVar15[-2] + 8);
                *(undefined8 *)(pauVar15[-2] + 8) = uVar12;
              }
            }
            uVar9 = (*(code *)*puVar6)(*puVar1,puVar1[-1]);
            uVar2 = (*(code *)*puVar6)(puVar1[1],*puVar1);
            if ((uVar9 & 1) == 0) {
              uVar12 = *puVar1;
              if ((uVar2 & 1) != 0) {
                uVar4 = puVar1[1];
                *puVar1 = uVar4;
                puVar1[1] = uVar12;
                uVar9 = (*(code *)*puVar6)(uVar4,puVar1[-1]);
                uVar12 = *puVar1;
                if ((uVar9 & 1) != 0) {
                  uVar4 = puVar1[-1];
                  puVar1[-1] = uVar12;
                  uVar12 = uVar4;
                  goto LAB_00bcff88;
                }
              }
            }
            else {
              uVar4 = puVar1[-1];
              if ((uVar2 & 1) == 0) {
                puVar1[-1] = *puVar1;
                *puVar1 = uVar4;
                uVar9 = (*(code *)*puVar6)(puVar1[1]);
                uVar12 = *puVar1;
                if ((uVar9 & 1) != 0) {
                  uVar4 = puVar1[1];
                  puVar1[1] = uVar12;
                  uVar12 = uVar4;
LAB_00bcff88:
                  *puVar1 = uVar12;
                }
              }
              else {
                uVar12 = *puVar1;
                uVar5 = puVar1[1];
                puVar1[1] = uVar4;
                puVar1[-1] = uVar5;
              }
            }
            uVar4 = *(undefined8 *)*pauVar14;
            *(undefined8 *)*pauVar14 = uVar12;
            *puVar1 = uVar4;
          }
          if (((param_5 & 1) == 0) &&
             (uVar9 = (*(code *)*puVar6)(*(undefined8 *)(pauVar14[-1] + 8),*(undefined8 *)*pauVar14)
             , (uVar9 & 1) == 0)) {
            lVar3 = FUN_00bd0480(pauVar14,pauVar15,puVar6);
            goto LAB_00bd0030;
          }
          auVar20 = FUN_00bd0614(pauVar14,pauVar15,puVar6);
          lVar3 = auVar20._0_8_;
          auVar19._8_8_ = lVar3;
          auVar19._0_8_ = pauVar14;
          if ((auVar20 & (undefined1  [16])0x1) == (undefined1  [16])0x0) break;
          uVar9 = FUN_00bd07c4(pauVar14,lVar3,puVar6);
          uVar2 = FUN_00bd07c4(lVar3 + 8,pauVar15,puVar6);
          if ((uVar2 & 1) != 0) {
            uVar2 = -lVar11;
            if ((uVar9 & 1) != 0) {
              return;
            }
            goto LAB_00bcfbdc;
          }
          pauVar7 = (undefined1 (*) [16])(lVar3 + 8);
        } while ((uVar9 & 1) != 0);
        FUN_00bcfba4(pauVar14,lVar3,puVar6,-lVar11,(uint)param_5 & 1);
        lVar3 = lVar3 + 8;
LAB_00bd0030:
        auVar19._8_8_ = pauVar15;
        auVar19._0_8_ = lVar3;
        param_5 = 0;
        uVar2 = -lVar11;
      } while( true );
    }
    pvVar10 = (void *)param_1[1];
    uVar13 = (ulong)((long)pvVar10 + (-8 - ((long)pvVar10 << 0x3d))) >> 3;
    uVar9 = (ulong)(((long)pvVar16 - (long)pvVar10 << 0x3d) - ((long)pvVar16 - (long)pvVar10)) >> 3;
    if (uVar13 <= uVar9) {
      uVar9 = uVar13;
    }
    if ((1 < uVar9) && ((((int)pvVar16 - (int)pvVar10 | -(int)pvVar10) & 7U) == 0)) {
      uVar9 = uVar9 & 0x1ffffffffffffffe;
      pvVar10 = (void *)((long)pvVar10 + uVar9 * -8);
      do {
        uVar9 = uVar9 - 2;
      } while (uVar9 != 0);
    }
    do {
      if (pvVar10 == pvVar16) {
        param_1[1] = pvVar16;
        operator_delete(pvVar16);
        uVar9 = 0;
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        goto LAB_00bcfb20;
      }
      pvVar10 = (void *)((long)pvVar10 + -8);
    } while (pvVar10 != (void *)0x0);
  }
  else {
    __n = param_1[1] - (long)pvVar16;
    if ((ulong)((long)__n >> 3) < param_4) {
      memmove(pvVar16,param_2,__n);
      pvVar16 = (void *)param_1[1];
      __n_00 = (long)param_3 - (long)((long)param_2 + __n);
      memmove(pvVar16,(void *)((long)param_2 + __n),__n_00);
      lVar11 = (long)pvVar16 + __n_00;
LAB_00bcfb7c:
      param_1[1] = lVar11;
      return;
    }
    memmove(pvVar16,param_2,(long)param_3 - (long)param_2);
    lVar11 = param_1[1];
    lVar3 = ((long)pvVar16 + (long)param_3) - (lVar11 + (long)param_2);
    uVar9 = (ulong)((lVar3 << 0x3d) - lVar3) >> 3;
    uVar2 = (lVar11 - (lVar11 << 0x3d)) - 8U >> 3;
    if (uVar2 <= uVar9) {
      uVar9 = uVar2;
    }
    lVar3 = (long)pvVar16 + ((long)param_3 - (long)param_2);
    if ((1 < uVar9) &&
       (((((int)pvVar16 + (int)param_3) - ((int)lVar11 + (int)param_2) | -(int)lVar11) & 7U) == 0))
    {
      uVar9 = uVar9 & 0x1ffffffffffffffe;
      lVar11 = lVar11 + uVar9 * -8;
      do {
        uVar9 = uVar9 - 2;
      } while (uVar9 != 0);
    }
    do {
      if (lVar11 == lVar3) {
        param_1[1] = lVar3;
        return;
      }
      lVar11 = lVar11 + -8;
    } while (lVar11 != 0);
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
LAB_00bd0194:
  pauVar8 = pauVar7;
  uVar9 = (*(code *)*puVar6)(*(undefined8 *)(*pauVar17 + 8),*(undefined8 *)*pauVar17);
  if ((uVar9 & 1) != 0) {
    uVar12 = *(undefined8 *)*pauVar8;
    lVar3 = lVar11;
    do {
      lVar18 = lVar3;
      puVar1 = (undefined8 *)(*pauVar14 + lVar18);
      puVar1[1] = *puVar1;
      pauVar7 = pauVar14;
      if (lVar18 == 0) goto LAB_00bd0180;
      uVar9 = (*(code *)*puVar6)(uVar12,puVar1[-1]);
      lVar3 = lVar18 + -8;
    } while ((uVar9 & 1) != 0);
    pauVar7 = (undefined1 (*) [16])(*pauVar14 + lVar18);
LAB_00bd0180:
    *(undefined8 *)*pauVar7 = uVar12;
  }
  lVar11 = lVar11 + 8;
  pauVar7 = (undefined1 (*) [16])(*pauVar8 + 8);
  pauVar17 = pauVar8;
  if ((undefined1 (*) [16])(*pauVar8 + 8) == pauVar15) {
    return;
  }
  goto LAB_00bd0194;
}


// ===== 00bcfba4  FUN_00bcfba4 =====

void FUN_00bcfba4(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined8 *param_3,
                 long param_4,uint param_5)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 (*pauVar6) [16];
  undefined1 (*pauVar7) [16];
  undefined8 uVar8;
  long lVar9;
  undefined1 (*pauVar10) [16];
  long lVar11;
  long lVar12;
  undefined1 auVar13 [16];
  
LAB_00bcfbdc:
  do {
    param_4 = -param_4;
    pauVar6 = param_1;
    do {
      param_1 = pauVar6;
      param_4 = param_4 + 1;
      uVar5 = (long)param_2 - (long)param_1 >> 3;
      if ((long)uVar5 < 3) {
        if (uVar5 < 2) {
          return;
        }
        if (uVar5 == 2) {
          uVar5 = (*(code *)*param_3)(*(undefined8 *)(param_2[-1] + 8),*(undefined8 *)*param_1);
          if ((uVar5 & 1) == 0) {
            return;
          }
          uVar8 = *(undefined8 *)*param_1;
          *(undefined8 *)*param_1 = *(undefined8 *)(param_2[-1] + 8);
LAB_00bd02ec:
          *(undefined8 *)(param_2[-1] + 8) = uVar8;
          return;
        }
      }
      else {
        if (uVar5 == 3) {
          uVar5 = (*(code *)*param_3)(*(undefined8 *)(*param_1 + 8),*(undefined8 *)*param_1);
          uVar2 = (*(code *)*param_3)(*(undefined8 *)(param_2[-1] + 8),*(undefined8 *)(*param_1 + 8)
                                     );
          if ((uVar5 & 1) != 0) {
            uVar8 = *(undefined8 *)*param_1;
            if ((uVar2 & 1) != 0) {
              *(undefined8 *)*param_1 = *(undefined8 *)(param_2[-1] + 8);
              *(undefined8 *)(param_2[-1] + 8) = uVar8;
              return;
            }
            *(undefined8 *)*param_1 = *(undefined8 *)(*param_1 + 8);
            *(undefined8 *)(*param_1 + 8) = uVar8;
            uVar5 = (*(code *)*param_3)(*(undefined8 *)(param_2[-1] + 8));
            if ((uVar5 & 1) == 0) {
              return;
            }
            uVar8 = *(undefined8 *)(*param_1 + 8);
            *(undefined8 *)(*param_1 + 8) = *(undefined8 *)(param_2[-1] + 8);
            goto LAB_00bd02ec;
          }
          if ((uVar2 & 1) == 0) {
            return;
          }
          uVar8 = *(undefined8 *)(*param_1 + 8);
          *(undefined8 *)(*param_1 + 8) = *(undefined8 *)(param_2[-1] + 8);
          *(undefined8 *)(param_2[-1] + 8) = uVar8;
          uVar8 = *(undefined8 *)*param_1;
          uVar3 = *(undefined8 *)(*param_1 + 8);
LAB_00bd0234:
          uVar5 = (*(code *)*param_3)(uVar3,uVar8);
          if ((uVar5 & 1) == 0) {
            return;
          }
          auVar13 = NEON_ext(*param_1,*param_1,8,1);
          *(long *)(*param_1 + 8) = auVar13._8_8_;
          *(long *)*param_1 = auVar13._0_8_;
          return;
        }
        if (uVar5 == 4) {
          FUN_00bd0324(param_1,*param_1 + 8,param_1 + 1,param_2[-1] + 8,param_3);
          return;
        }
        if (uVar5 == 5) {
          FUN_00bd0324(param_1,*param_1 + 8,param_1 + 1,param_1[1] + 8,param_3);
          uVar5 = (*(code *)*param_3)(*(undefined8 *)(param_2[-1] + 8),
                                      *(undefined8 *)(param_1[1] + 8));
          if ((uVar5 & 1) == 0) {
            return;
          }
          uVar8 = *(undefined8 *)(param_1[1] + 8);
          *(undefined8 *)(param_1[1] + 8) = *(undefined8 *)(param_2[-1] + 8);
          *(undefined8 *)(param_2[-1] + 8) = uVar8;
          uVar5 = (*(code *)*param_3)(*(undefined8 *)(param_1[1] + 8),*(undefined8 *)param_1[1]);
          if ((uVar5 & 1) == 0) {
            return;
          }
          uVar8 = *(undefined8 *)param_1[1];
          uVar3 = *(undefined8 *)(param_1[1] + 8);
          uVar4 = *(undefined8 *)(*param_1 + 8);
          *(undefined8 *)param_1[1] = uVar3;
          *(undefined8 *)(param_1[1] + 8) = uVar8;
          uVar5 = (*(code *)*param_3)(uVar3,uVar4);
          if ((uVar5 & 1) == 0) {
            return;
          }
          uVar4 = *(undefined8 *)(*param_1 + 8);
          uVar3 = *(undefined8 *)param_1[1];
          uVar8 = *(undefined8 *)*param_1;
          *(undefined8 *)(*param_1 + 8) = uVar3;
          *(undefined8 *)param_1[1] = uVar4;
          goto LAB_00bd0234;
        }
      }
      if ((long)uVar5 < 0x18) {
        if ((param_5 & 1) == 0) {
          if (param_1 == param_2) {
            return;
          }
          if ((undefined1 (*) [16])(*param_1 + 8) == param_2) {
            return;
          }
          lVar9 = -8;
          pauVar6 = (undefined1 (*) [16])(*param_1 + 8);
          do {
            pauVar10 = pauVar6;
            uVar5 = (*(code *)*param_3)(*(undefined8 *)(*param_1 + 8),*(undefined8 *)*param_1);
            if ((uVar5 & 1) != 0) {
              uVar8 = *(undefined8 *)*pauVar10;
              pauVar6 = pauVar10;
              lVar12 = lVar9;
              do {
                *(undefined8 *)*pauVar6 = *(undefined8 *)(pauVar6[-1] + 8);
                if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                  std::__Cr::__libcpp_verbose_abort
                            ("%s",
                             "gen/third_party/libc++/src/include/__algorithm/sort.h:293: libc++ Hardening assertion __k != __leftmost failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                            );
                }
                uVar5 = (*(code *)*param_3)(uVar8,*(undefined8 *)pauVar6[-1]);
                pauVar6 = (undefined1 (*) [16])(pauVar6[-1] + 8);
                lVar12 = lVar12 + 8;
              } while ((uVar5 & 1) != 0);
              *(undefined8 *)*pauVar6 = uVar8;
            }
            lVar9 = lVar9 + -8;
            pauVar6 = (undefined1 (*) [16])(*pauVar10 + 8);
            param_1 = pauVar10;
          } while ((undefined1 (*) [16])(*pauVar10 + 8) != param_2);
          return;
        }
        if (param_1 == param_2) {
          return;
        }
        if ((undefined1 (*) [16])(*param_1 + 8) == param_2) {
          return;
        }
        lVar9 = 0;
        pauVar6 = (undefined1 (*) [16])(*param_1 + 8);
        pauVar10 = param_1;
        goto LAB_00bd0194;
      }
      if (param_4 == 1) {
        if (param_1 == param_2) {
          return;
        }
        FUN_00bd0ad0(param_1,param_2,param_2,param_3);
        return;
      }
      puVar1 = (undefined8 *)(*param_1 + (uVar5 >> 1) * 8);
      if (uVar5 < 0x81) {
        uVar5 = (*(code *)*param_3)(*(undefined8 *)*param_1,*puVar1);
        uVar2 = (*(code *)*param_3)(*(undefined8 *)(param_2[-1] + 8),*(undefined8 *)*param_1);
        if ((uVar5 & 1) == 0) {
          if ((uVar2 & 1) != 0) {
            uVar8 = *(undefined8 *)*param_1;
            *(undefined8 *)*param_1 = *(undefined8 *)(param_2[-1] + 8);
            *(undefined8 *)(param_2[-1] + 8) = uVar8;
            uVar5 = (*(code *)*param_3)(*(undefined8 *)*param_1,*puVar1);
            if ((uVar5 & 1) != 0) {
              uVar8 = *puVar1;
              *puVar1 = *(undefined8 *)*param_1;
              *(undefined8 *)*param_1 = uVar8;
            }
          }
        }
        else {
          uVar8 = *puVar1;
          if ((uVar2 & 1) == 0) {
            *puVar1 = *(undefined8 *)*param_1;
            *(undefined8 *)*param_1 = uVar8;
            uVar5 = (*(code *)*param_3)(*(undefined8 *)(param_2[-1] + 8));
            if ((uVar5 & 1) != 0) {
              uVar8 = *(undefined8 *)*param_1;
              *(undefined8 *)*param_1 = *(undefined8 *)(param_2[-1] + 8);
              *(undefined8 *)(param_2[-1] + 8) = uVar8;
            }
          }
          else {
            *puVar1 = *(undefined8 *)(param_2[-1] + 8);
            *(undefined8 *)(param_2[-1] + 8) = uVar8;
          }
        }
      }
      else {
        uVar5 = (*(code *)*param_3)(*puVar1,*(undefined8 *)*param_1);
        uVar2 = (*(code *)*param_3)(*(undefined8 *)(param_2[-1] + 8),*puVar1);
        if ((uVar5 & 1) == 0) {
          if ((uVar2 & 1) != 0) {
            uVar8 = *puVar1;
            *puVar1 = *(undefined8 *)(param_2[-1] + 8);
            *(undefined8 *)(param_2[-1] + 8) = uVar8;
            uVar5 = (*(code *)*param_3)(*puVar1,*(undefined8 *)*param_1);
            if ((uVar5 & 1) != 0) {
              uVar8 = *(undefined8 *)*param_1;
              *(undefined8 *)*param_1 = *puVar1;
              *puVar1 = uVar8;
            }
          }
        }
        else {
          uVar8 = *(undefined8 *)*param_1;
          if ((uVar2 & 1) == 0) {
            *(undefined8 *)*param_1 = *puVar1;
            *puVar1 = uVar8;
            uVar5 = (*(code *)*param_3)(*(undefined8 *)(param_2[-1] + 8));
            if ((uVar5 & 1) != 0) {
              uVar8 = *puVar1;
              *puVar1 = *(undefined8 *)(param_2[-1] + 8);
              *(undefined8 *)(param_2[-1] + 8) = uVar8;
            }
          }
          else {
            *(undefined8 *)*param_1 = *(undefined8 *)(param_2[-1] + 8);
            *(undefined8 *)(param_2[-1] + 8) = uVar8;
          }
        }
        uVar5 = (*(code *)*param_3)(puVar1[-1],*(undefined8 *)(*param_1 + 8));
        uVar2 = (*(code *)*param_3)(*(undefined8 *)param_2[-1],puVar1[-1]);
        if ((uVar5 & 1) == 0) {
          if ((uVar2 & 1) != 0) {
            uVar8 = puVar1[-1];
            puVar1[-1] = *(undefined8 *)param_2[-1];
            *(undefined8 *)param_2[-1] = uVar8;
            uVar5 = (*(code *)*param_3)(puVar1[-1],*(undefined8 *)(*param_1 + 8));
            if ((uVar5 & 1) != 0) {
              uVar8 = *(undefined8 *)(*param_1 + 8);
              *(undefined8 *)(*param_1 + 8) = puVar1[-1];
              puVar1[-1] = uVar8;
            }
          }
        }
        else {
          uVar8 = *(undefined8 *)(*param_1 + 8);
          if ((uVar2 & 1) == 0) {
            *(undefined8 *)(*param_1 + 8) = puVar1[-1];
            puVar1[-1] = uVar8;
            uVar5 = (*(code *)*param_3)(*(undefined8 *)param_2[-1]);
            if ((uVar5 & 1) != 0) {
              uVar8 = puVar1[-1];
              puVar1[-1] = *(undefined8 *)param_2[-1];
              *(undefined8 *)param_2[-1] = uVar8;
            }
          }
          else {
            *(undefined8 *)(*param_1 + 8) = *(undefined8 *)param_2[-1];
            *(undefined8 *)param_2[-1] = uVar8;
          }
        }
        uVar5 = (*(code *)*param_3)(puVar1[1],*(undefined8 *)param_1[1]);
        uVar2 = (*(code *)*param_3)(*(undefined8 *)(param_2[-2] + 8),puVar1[1]);
        if ((uVar5 & 1) == 0) {
          if ((uVar2 & 1) != 0) {
            uVar8 = puVar1[1];
            puVar1[1] = *(undefined8 *)(param_2[-2] + 8);
            *(undefined8 *)(param_2[-2] + 8) = uVar8;
            uVar5 = (*(code *)*param_3)(puVar1[1],*(undefined8 *)param_1[1]);
            if ((uVar5 & 1) != 0) {
              uVar8 = *(undefined8 *)param_1[1];
              *(undefined8 *)param_1[1] = puVar1[1];
              puVar1[1] = uVar8;
            }
          }
        }
        else {
          uVar8 = *(undefined8 *)param_1[1];
          if ((uVar2 & 1) == 0) {
            *(undefined8 *)param_1[1] = puVar1[1];
            puVar1[1] = uVar8;
            uVar5 = (*(code *)*param_3)(*(undefined8 *)(param_2[-2] + 8));
            if ((uVar5 & 1) != 0) {
              uVar8 = puVar1[1];
              puVar1[1] = *(undefined8 *)(param_2[-2] + 8);
              *(undefined8 *)(param_2[-2] + 8) = uVar8;
            }
          }
          else {
            *(undefined8 *)param_1[1] = *(undefined8 *)(param_2[-2] + 8);
            *(undefined8 *)(param_2[-2] + 8) = uVar8;
          }
        }
        uVar5 = (*(code *)*param_3)(*puVar1,puVar1[-1]);
        uVar2 = (*(code *)*param_3)(puVar1[1],*puVar1);
        if ((uVar5 & 1) == 0) {
          uVar8 = *puVar1;
          if ((uVar2 & 1) != 0) {
            uVar3 = puVar1[1];
            *puVar1 = uVar3;
            puVar1[1] = uVar8;
            uVar5 = (*(code *)*param_3)(uVar3,puVar1[-1]);
            uVar8 = *puVar1;
            if ((uVar5 & 1) != 0) {
              uVar3 = puVar1[-1];
              puVar1[-1] = uVar8;
              uVar8 = uVar3;
              goto LAB_00bcff88;
            }
          }
        }
        else {
          uVar3 = puVar1[-1];
          if ((uVar2 & 1) == 0) {
            puVar1[-1] = *puVar1;
            *puVar1 = uVar3;
            uVar5 = (*(code *)*param_3)(puVar1[1]);
            uVar8 = *puVar1;
            if ((uVar5 & 1) != 0) {
              uVar3 = puVar1[1];
              puVar1[1] = uVar8;
              uVar8 = uVar3;
LAB_00bcff88:
              *puVar1 = uVar8;
            }
          }
          else {
            uVar8 = *puVar1;
            uVar4 = puVar1[1];
            puVar1[1] = uVar3;
            puVar1[-1] = uVar4;
          }
        }
        uVar3 = *(undefined8 *)*param_1;
        *(undefined8 *)*param_1 = uVar8;
        *puVar1 = uVar3;
      }
      if (((param_5 & 1) == 0) &&
         (uVar5 = (*(code *)*param_3)(*(undefined8 *)(param_1[-1] + 8),*(undefined8 *)*param_1),
         (uVar5 & 1) == 0)) {
        param_1 = (undefined1 (*) [16])FUN_00bd0480(param_1,param_2,param_3);
        goto LAB_00bd0030;
      }
      auVar13 = FUN_00bd0614(param_1,param_2,param_3);
      pauVar10 = auVar13._0_8_;
      if ((auVar13 & (undefined1  [16])0x1) == (undefined1  [16])0x0) break;
      uVar5 = FUN_00bd07c4(param_1,pauVar10,param_3);
      uVar2 = FUN_00bd07c4(*pauVar10 + 8,param_2,param_3);
      if ((uVar2 & 1) != 0) {
        param_4 = -param_4;
        param_2 = pauVar10;
        if ((uVar5 & 1) != 0) {
          return;
        }
        goto LAB_00bcfbdc;
      }
      pauVar6 = (undefined1 (*) [16])(*pauVar10 + 8);
    } while ((uVar5 & 1) != 0);
    FUN_00bcfba4(param_1,pauVar10,param_3,-param_4,param_5 & 1);
    param_1 = (undefined1 (*) [16])(*pauVar10 + 8);
LAB_00bd0030:
    param_5 = 0;
    param_4 = -param_4;
  } while( true );
LAB_00bd0194:
  pauVar7 = pauVar6;
  uVar5 = (*(code *)*param_3)(*(undefined8 *)(*pauVar10 + 8),*(undefined8 *)*pauVar10);
  if ((uVar5 & 1) != 0) {
    uVar8 = *(undefined8 *)*pauVar7;
    lVar12 = lVar9;
    do {
      lVar11 = lVar12;
      puVar1 = (undefined8 *)(*param_1 + lVar11);
      puVar1[1] = *puVar1;
      pauVar6 = param_1;
      if (lVar11 == 0) goto LAB_00bd0180;
      uVar5 = (*(code *)*param_3)(uVar8,puVar1[-1]);
      lVar12 = lVar11 + -8;
    } while ((uVar5 & 1) != 0);
    pauVar6 = (undefined1 (*) [16])(*param_1 + lVar11);
LAB_00bd0180:
    *(undefined8 *)*pauVar6 = uVar8;
  }
  lVar9 = lVar9 + 8;
  pauVar6 = (undefined1 (*) [16])(*pauVar7 + 8);
  pauVar10 = pauVar7;
  if ((undefined1 (*) [16])(*pauVar7 + 8) == param_2) {
    return;
  }
  goto LAB_00bd0194;
}


// ===== 00bd0324  FUN_00bd0324 =====

void FUN_00bd0324(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = (*(code *)*param_5)(*param_2,*param_1);
  uVar2 = (*(code *)*param_5)(*param_3,*param_2);
  if ((uVar1 & 1) == 0) {
    if ((uVar2 & 1) != 0) {
      uVar3 = *param_2;
      *param_2 = *param_3;
      *param_3 = uVar3;
      uVar1 = (*(code *)*param_5)(*param_2,*param_1);
      if ((uVar1 & 1) != 0) {
        uVar3 = *param_1;
        *param_1 = *param_2;
        *param_2 = uVar3;
      }
    }
  }
  else {
    uVar3 = *param_1;
    if ((uVar2 & 1) == 0) {
      *param_1 = *param_2;
      *param_2 = uVar3;
      uVar1 = (*(code *)*param_5)(*param_3);
      if ((uVar1 & 1) != 0) {
        uVar3 = *param_2;
        *param_2 = *param_3;
        *param_3 = uVar3;
      }
    }
    else {
      *param_1 = *param_3;
      *param_3 = uVar3;
    }
  }
  uVar1 = (*(code *)*param_5)(*param_4,*param_3);
  if ((uVar1 & 1) != 0) {
    uVar3 = *param_3;
    *param_3 = *param_4;
    *param_4 = uVar3;
    uVar1 = (*(code *)*param_5)(*param_3,*param_2);
    if ((uVar1 & 1) != 0) {
      uVar3 = *param_2;
      *param_2 = *param_3;
      *param_3 = uVar3;
      uVar1 = (*(code *)*param_5)(*param_2,*param_1);
      if ((uVar1 & 1) != 0) {
        uVar3 = *param_1;
        *param_1 = *param_2;
        *param_2 = uVar3;
      }
    }
  }
  return;
}


// ===== 00bd0480  FUN_00bd0480 =====

undefined8 * FUN_00bd0480(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  uVar3 = *param_1;
  uVar1 = (*(code *)*param_3)(uVar3,param_2[-1]);
  if ((uVar1 & 1) == 0) {
    puVar5 = param_1 + 1;
    do {
      puVar4 = puVar5;
      if (param_2 <= puVar4) break;
      uVar1 = (*(code *)*param_3)(uVar3,*puVar4);
      puVar5 = puVar4 + 1;
    } while ((uVar1 & 1) == 0);
  }
  else {
    puVar5 = param_1 + 1;
    do {
      puVar4 = puVar5;
      if (puVar4 == param_2) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__algorithm/sort.h:669: libc++ Hardening assertion __first != __end failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                  );
      }
      uVar1 = (*(code *)*param_3)(uVar3,*puVar4);
      puVar5 = puVar4 + 1;
    } while ((uVar1 & 1) == 0);
  }
  puVar5 = param_2;
  if (puVar4 < param_2) {
    do {
      if (puVar5 == param_1) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__algorithm/sort.h:682: libc++ Hardening assertion __last != __begin failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                  );
      }
      puVar5 = puVar5 + -1;
      uVar1 = (*(code *)*param_3)(uVar3,*puVar5);
    } while ((uVar1 & 1) != 0);
  }
  do {
    if (puVar5 <= puVar4) {
      if (param_1 != puVar4 + -1) {
        *param_1 = puVar4[-1];
      }
      puVar4[-1] = uVar3;
      return puVar4;
    }
    uVar2 = *puVar4;
    *puVar4 = *puVar5;
    *puVar5 = uVar2;
    do {
      puVar4 = puVar4 + 1;
      if (puVar4 == param_2) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__algorithm/sort.h:692: libc++ Hardening assertion __first != __end failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                  );
      }
      uVar1 = (*(code *)*param_3)(uVar3,*puVar4);
    } while ((uVar1 & 1) == 0);
    do {
      if (puVar5 == param_1) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__algorithm/sort.h:697: libc++ Hardening assertion __last != __begin failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                  );
      }
      puVar5 = puVar5 + -1;
      uVar1 = (*(code *)*param_3)(uVar3,*puVar5);
    } while ((uVar1 & 1) != 0);
  } while( true );
}


// ===== 00bd0614  FUN_00bd0614 =====

void FUN_00bd0614(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  uVar4 = *param_1;
  lVar5 = 0;
  do {
    puVar7 = (undefined8 *)((long)param_1 + lVar5 + 8);
    if (puVar7 == param_2) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__algorithm/sort.h:603: libc++ Hardening assertion __first != __end failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                );
    }
    uVar1 = (*(code *)*param_3)(*puVar7,uVar4);
    lVar5 = lVar5 + 8;
  } while ((uVar1 & 1) != 0);
  puVar7 = (undefined8 *)((long)param_1 + lVar5);
  puVar6 = param_2;
  if (lVar5 == 8) {
    do {
      if (puVar6 <= puVar7) break;
      puVar6 = puVar6 + -1;
      uVar1 = (*(code *)*param_3)(*puVar6,uVar4);
    } while ((uVar1 & 1) == 0);
  }
  else {
    do {
      if (puVar6 == param_1) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__algorithm/sort.h:615: libc++ Hardening assertion __last != __begin failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                  );
      }
      puVar6 = puVar6 + -1;
      uVar1 = (*(code *)*param_3)(*puVar6,uVar4);
    } while ((uVar1 & 1) == 0);
  }
  if (puVar7 < puVar6) {
    do {
      uVar3 = *puVar7;
      *puVar7 = *puVar6;
      *puVar6 = uVar3;
      do {
        puVar2 = puVar7;
        puVar7 = puVar2 + 1;
        if (puVar7 == param_2) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__algorithm/sort.h:633: libc++ Hardening assertion __first != __end failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                    );
        }
        uVar1 = (*(code *)*param_3)(*puVar7,uVar4);
      } while ((uVar1 & 1) != 0);
      do {
        if (puVar6 == param_1) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__algorithm/sort.h:638: libc++ Hardening assertion __last != __begin failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                    );
        }
        puVar6 = puVar6 + -1;
        uVar1 = (*(code *)*param_3)(*puVar6,uVar4);
      } while ((uVar1 & 1) == 0);
    } while (puVar7 < puVar6);
  }
  else {
    puVar2 = puVar7 + -1;
  }
  if (param_1 != puVar2) {
    *param_1 = *puVar2;
  }
  *puVar2 = uVar4;
  return;
}


// ===== 00bd07c4  FUN_00bd07c4 =====

bool FUN_00bd07c4(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined8 *param_3)

{
  undefined1 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 (*pauVar7) [16];
  undefined8 uVar8;
  long lVar9;
  undefined1 (*pauVar10) [16];
  long lVar11;
  int iVar12;
  undefined1 auVar13 [16];
  
  uVar5 = (long)param_2 - (long)param_1 >> 3;
  if ((long)uVar5 < 3) {
    if (uVar5 < 2) {
      return true;
    }
    if (uVar5 == 2) {
      uVar5 = (*(code *)*param_3)(*(undefined8 *)(param_2[-1] + 8),*(undefined8 *)*param_1);
      if ((uVar5 & 1) == 0) {
        return true;
      }
      uVar8 = *(undefined8 *)*param_1;
      *(undefined8 *)*param_1 = *(undefined8 *)(param_2[-1] + 8);
      *(undefined8 *)(param_2[-1] + 8) = uVar8;
      return true;
    }
LAB_00bd08fc:
    uVar5 = (*(code *)*param_3)(*(undefined8 *)(*param_1 + 8),*(undefined8 *)*param_1);
    uVar3 = (*(code *)*param_3)(*(undefined8 *)param_1[1],*(undefined8 *)(*param_1 + 8));
    if ((uVar5 & 1) == 0) {
      if ((uVar3 & 1) != 0) {
        uVar8 = *(undefined8 *)(*param_1 + 8);
        uVar6 = *(undefined8 *)param_1[1];
        uVar4 = *(undefined8 *)*param_1;
        *(undefined8 *)(*param_1 + 8) = uVar6;
        *(undefined8 *)param_1[1] = uVar8;
        uVar5 = (*(code *)*param_3)(uVar6,uVar4);
        if ((uVar5 & 1) != 0) {
          auVar13 = NEON_ext(*param_1,*param_1,8,1);
          *(long *)(*param_1 + 8) = auVar13._8_8_;
          *(long *)*param_1 = auVar13._0_8_;
        }
      }
    }
    else {
      uVar8 = *(undefined8 *)*param_1;
      if ((uVar3 & 1) == 0) {
        uVar6 = *(undefined8 *)param_1[1];
        *(undefined8 *)*param_1 = *(undefined8 *)(*param_1 + 8);
        *(undefined8 *)(*param_1 + 8) = uVar8;
        uVar5 = (*(code *)*param_3)(uVar6);
        if ((uVar5 & 1) != 0) {
          auVar13 = NEON_ext(*(undefined1 (*) [16])(*param_1 + 8),
                             *(undefined1 (*) [16])(*param_1 + 8),8,1);
          *(long *)param_1[1] = auVar13._8_8_;
          *(long *)(*param_1 + 8) = auVar13._0_8_;
        }
      }
      else {
        uVar6 = *(undefined8 *)param_1[1];
        *(undefined8 *)param_1[1] = uVar8;
        *(undefined8 *)*param_1 = uVar6;
      }
    }
    if ((undefined1 (*) [16])(param_1[1] + 8) != param_2) {
      lVar11 = 0;
      iVar12 = 0;
      pauVar7 = param_1 + 1;
      pauVar10 = (undefined1 (*) [16])(param_1[1] + 8);
      do {
        uVar5 = (*(code *)*param_3)(*(undefined8 *)*pauVar10,*(undefined8 *)*pauVar7);
        if ((uVar5 & 1) != 0) {
          uVar8 = *(undefined8 *)*pauVar10;
          lVar2 = lVar11;
          do {
            lVar9 = lVar2;
            *(undefined8 *)(param_1[1] + lVar9 + 8) = *(undefined8 *)(param_1[1] + lVar9);
            pauVar7 = param_1;
            if (lVar9 == -0x10) goto LAB_00bd0a24;
            uVar5 = (*(code *)*param_3)(uVar8,*(undefined8 *)(*param_1 + lVar9 + 8));
            lVar2 = lVar9 + -8;
          } while ((uVar5 & 1) != 0);
          pauVar7 = (undefined1 (*) [16])(param_1[1] + lVar9);
LAB_00bd0a24:
          iVar12 = iVar12 + 1;
          *(undefined8 *)*pauVar7 = uVar8;
          if (iVar12 == 8) {
            return (undefined1 (*) [16])(*pauVar10 + 8) == param_2;
          }
        }
        puVar1 = *pauVar10;
        lVar11 = lVar11 + 8;
        pauVar7 = pauVar10;
        pauVar10 = (undefined1 (*) [16])(puVar1 + 8);
      } while ((undefined1 (*) [16])(puVar1 + 8) != param_2);
    }
  }
  else {
    if (uVar5 == 3) {
      uVar5 = (*(code *)*param_3)(*(undefined8 *)(*param_1 + 8),*(undefined8 *)*param_1);
      uVar3 = (*(code *)*param_3)(*(undefined8 *)(param_2[-1] + 8),*(undefined8 *)(*param_1 + 8));
      if ((uVar5 & 1) != 0) {
        uVar8 = *(undefined8 *)*param_1;
        if ((uVar3 & 1) != 0) {
          *(undefined8 *)*param_1 = *(undefined8 *)(param_2[-1] + 8);
          *(undefined8 *)(param_2[-1] + 8) = uVar8;
          return true;
        }
        *(undefined8 *)*param_1 = *(undefined8 *)(*param_1 + 8);
        *(undefined8 *)(*param_1 + 8) = uVar8;
        uVar5 = (*(code *)*param_3)(*(undefined8 *)(param_2[-1] + 8));
        if ((uVar5 & 1) == 0) {
          return true;
        }
        uVar8 = *(undefined8 *)(*param_1 + 8);
        *(undefined8 *)(*param_1 + 8) = *(undefined8 *)(param_2[-1] + 8);
        *(undefined8 *)(param_2[-1] + 8) = uVar8;
        return true;
      }
      if ((uVar3 & 1) == 0) {
        return true;
      }
      uVar8 = *(undefined8 *)(*param_1 + 8);
      *(undefined8 *)(*param_1 + 8) = *(undefined8 *)(param_2[-1] + 8);
      *(undefined8 *)(param_2[-1] + 8) = uVar8;
      uVar8 = *(undefined8 *)*param_1;
      uVar6 = *(undefined8 *)(*param_1 + 8);
    }
    else {
      if (uVar5 == 4) {
        FUN_00bd0324(param_1,*param_1 + 8,param_1 + 1,param_2[-1] + 8,param_3);
        return true;
      }
      if (uVar5 != 5) goto LAB_00bd08fc;
      FUN_00bd0324(param_1,*param_1 + 8,param_1 + 1,param_1[1] + 8,param_3);
      uVar5 = (*(code *)*param_3)(*(undefined8 *)(param_2[-1] + 8),*(undefined8 *)(param_1[1] + 8));
      if ((uVar5 & 1) == 0) {
        return true;
      }
      uVar8 = *(undefined8 *)(param_1[1] + 8);
      *(undefined8 *)(param_1[1] + 8) = *(undefined8 *)(param_2[-1] + 8);
      *(undefined8 *)(param_2[-1] + 8) = uVar8;
      uVar5 = (*(code *)*param_3)(*(undefined8 *)(param_1[1] + 8),*(undefined8 *)param_1[1]);
      if ((uVar5 & 1) == 0) {
        return true;
      }
      uVar8 = *(undefined8 *)param_1[1];
      uVar6 = *(undefined8 *)(param_1[1] + 8);
      uVar4 = *(undefined8 *)(*param_1 + 8);
      *(undefined8 *)param_1[1] = uVar6;
      *(undefined8 *)(param_1[1] + 8) = uVar8;
      uVar5 = (*(code *)*param_3)(uVar6,uVar4);
      if ((uVar5 & 1) == 0) {
        return true;
      }
      uVar4 = *(undefined8 *)(*param_1 + 8);
      uVar6 = *(undefined8 *)param_1[1];
      uVar8 = *(undefined8 *)*param_1;
      *(undefined8 *)(*param_1 + 8) = uVar6;
      *(undefined8 *)param_1[1] = uVar4;
    }
    uVar5 = (*(code *)*param_3)(uVar6,uVar8);
    if ((uVar5 & 1) != 0) {
      auVar13 = NEON_ext(*param_1,*param_1,8,1);
      *(long *)(*param_1 + 8) = auVar13._8_8_;
      *(long *)*param_1 = auVar13._0_8_;
    }
  }
  return true;
}


// ===== 00bd0ad0  FUN_00bd0ad0 =====

undefined8 *
FUN_00bd0ad0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *local_68;
  
  if (param_1 != param_2) {
    lVar11 = (long)param_2 - (long)param_1 >> 3;
    if (1 < lVar11) {
      uVar12 = lVar11 - 2U >> 1;
      uVar5 = uVar12;
      do {
        if (uVar5 <= uVar12) {
          uVar6 = (uVar5 & 0x3fffffffffffffff) << 1 | 1;
          uVar3 = uVar5 * 2 + 2;
          uVar7 = uVar6;
          if (((long)uVar3 < lVar11) &&
             (uVar2 = (*(code *)*param_4)(param_1[uVar6],param_1[uVar3]), uVar7 = uVar3,
             (uVar2 & 1) == 0)) {
            uVar7 = uVar6;
          }
          uVar3 = (*(code *)*param_4)(param_1[uVar7],param_1[uVar5]);
          if ((uVar3 & 1) == 0) {
            uVar9 = param_1[uVar5];
            uVar3 = uVar5;
            do {
              uVar6 = uVar7;
              param_1[uVar3] = param_1[uVar6];
              if ((long)uVar12 < (long)uVar6) break;
              uVar2 = (uVar6 & 0x3fffffffffffffff) << 1 | 1;
              uVar3 = uVar6 * 2 + 2;
              uVar7 = uVar2;
              if (((long)uVar3 < lVar11) &&
                 (uVar4 = (*(code *)*param_4)(param_1[uVar2],param_1[uVar3]), uVar7 = uVar3,
                 (uVar4 & 1) == 0)) {
                uVar7 = uVar2;
              }
              uVar2 = (*(code *)*param_4)(param_1[uVar7],uVar9);
              uVar3 = uVar6;
            } while ((uVar2 & 1) == 0);
            param_1[uVar6] = uVar9;
          }
        }
        bVar1 = 0 < (long)uVar5;
        uVar5 = uVar5 - 1;
      } while (bVar1);
    }
    puVar13 = param_2;
    if (param_2 != param_3) {
      do {
        uVar5 = (*(code *)*param_4)(*puVar13,*param_1);
        if ((uVar5 & 1) != 0) {
          uVar9 = *puVar13;
          *puVar13 = *param_1;
          *param_1 = uVar9;
          if (1 < lVar11) {
            if ((long)param_2 - (long)param_1 == 0x10) {
              uVar5 = 1;
            }
            else {
              uVar12 = (*(code *)*param_4)(param_1[1],param_1[2]);
              uVar9 = *param_1;
              uVar5 = 1;
              if ((uVar12 & 1) != 0) {
                uVar5 = 2;
              }
            }
            uVar12 = (*(code *)*param_4)(param_1[uVar5],uVar9);
            if ((uVar12 & 1) == 0) {
              uVar9 = *param_1;
              uVar12 = 0;
              do {
                uVar3 = uVar5;
                param_1[uVar12] = param_1[uVar3];
                if ((long)(lVar11 - 2U >> 1) < (long)uVar3) break;
                uVar6 = uVar3 << 1 | 1;
                uVar12 = uVar3 * 2 + 2;
                uVar5 = uVar6;
                if (((long)uVar12 < lVar11) &&
                   (uVar7 = (*(code *)*param_4)(param_1[uVar6],param_1[uVar12]), uVar5 = uVar12,
                   (uVar7 & 1) == 0)) {
                  uVar5 = uVar6;
                }
                uVar6 = (*(code *)*param_4)(param_1[uVar5],uVar9);
                uVar12 = uVar3;
              } while ((uVar6 & 1) == 0);
              param_1[uVar3] = uVar9;
            }
          }
        }
        puVar13 = puVar13 + 1;
      } while (puVar13 != param_3);
    }
    param_3 = puVar13;
    local_68 = param_2;
    if (1 < lVar11) {
      do {
        uVar9 = *param_1;
        uVar5 = 0;
        puVar13 = param_1;
        do {
          uVar3 = uVar5 << 1 | 1;
          uVar12 = uVar5 * 2 + 2;
          uVar6 = uVar3;
          puVar10 = puVar13 + uVar5 + 1;
          if ((long)uVar12 < lVar11) {
            uVar7 = (*(code *)*param_4)(puVar13[uVar5 + 1],puVar13[uVar5 + 2]);
            uVar6 = uVar12;
            puVar10 = puVar13 + uVar5 + 2;
            if ((uVar7 & 1) == 0) {
              uVar6 = uVar3;
              puVar10 = puVar13 + uVar5 + 1;
            }
          }
          *puVar13 = *puVar10;
          uVar5 = uVar6;
          puVar13 = puVar10;
        } while ((long)uVar6 <= (long)(lVar11 - 2U >> 1));
        local_68 = local_68 + -1;
        if (puVar10 == local_68) {
          *puVar10 = uVar9;
        }
        else {
          lVar8 = (long)puVar10 + (8 - (long)param_1) >> 3;
          *puVar10 = *local_68;
          *local_68 = uVar9;
          if (1 < lVar8) {
            uVar12 = lVar8 - 2U >> 1;
            uVar5 = (*(code *)*param_4)(param_1[uVar12],*puVar10);
            if ((uVar5 & 1) != 0) {
              uVar9 = *puVar10;
              puVar13 = param_1 + uVar12;
              do {
                puVar14 = puVar13;
                *puVar10 = *puVar14;
                if (uVar12 == 0) break;
                uVar12 = uVar12 - 1 >> 1;
                uVar5 = (*(code *)*param_4)(param_1[uVar12],uVar9);
                puVar10 = puVar14;
                puVar13 = param_1 + uVar12;
              } while ((uVar5 & 1) != 0);
              *puVar14 = uVar9;
            }
          }
        }
        bVar1 = 2 < lVar11;
        lVar11 = lVar11 + -1;
      } while (bVar1);
    }
  }
  return param_3;
}


// ===== 00bd0e50  FUN_00bd0e50 =====

void FUN_00bd0e50(undefined8 param_1,undefined8 *param_2)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_00bd0e50(param_1,*param_2);
      if (param_2 == (undefined8 *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      pvVar1 = (void *)param_2[7];
      puVar2 = (undefined8 *)param_2[1];
      param_2[7] = 0;
      if (pvVar1 != (void *)0x0) {
        FUN_00bcca68(pvVar1);
        operator_delete(pvVar1);
      }
      if (*(char *)((long)param_2 + 0x37) < '\0') {
        operator_delete((void *)param_2[4]);
      }
      operator_delete(param_2);
      param_2 = puVar2;
    } while (puVar2 != (undefined8 *)0x0);
  }
  return;
}


// ===== 00bd0f04  FUN_00bd0f04 =====

undefined8 * FUN_00bd0f04(long *param_1,undefined8 *param_2)

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
    FUN_00bd0ffc();
LAB_00bd0ff8:
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
    if (uVar6 >> 0x3d != 0) goto LAB_00bd0ff8;
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


// ===== 00bd0ffc  FUN_00bd0ffc =====

void FUN_00bd0ffc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00bd1014  FUN_00bd1014 =====

void FUN_00bd1014(undefined8 *param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar7 = param_1[2];
  puVar9 = (undefined8 *)*param_1;
  if (param_4 <= (ulong)((long)(uVar7 - (long)puVar9) >> 5)) {
    puVar8 = (undefined8 *)param_1[1];
    lVar10 = (long)puVar8 - (long)puVar9;
    if ((ulong)(lVar10 >> 5) < param_4) {
      puVar5 = puVar8;
      lVar1 = param_2;
      if (puVar8 != puVar9) {
        lVar1 = param_2 + lVar10;
        do {
          FUN_007ea31c(puVar9,param_2);
          lVar10 = lVar10 + -0x20;
          param_2 = param_2 + 0x20;
          puVar9 = puVar9 + 4;
        } while (lVar10 != 0);
        puVar8 = (undefined8 *)param_1[1];
        puVar5 = puVar8;
      }
      for (; lVar1 != param_3; lVar1 = lVar1 + 0x20) {
        if (puVar5 == (undefined8 *)0x0) goto LAB_00bd1268;
        *puVar5 = &PTR_FUN_00d385d8;
        puVar8 = puVar8 + 4;
        *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(lVar1 + 8);
        uVar12 = *(undefined8 *)(lVar1 + 0x14);
        uVar11 = *(undefined8 *)(lVar1 + 0xc);
        *puVar5 = &PTR_FUN_00d48390;
        *(undefined8 *)((long)puVar5 + 0x14) = uVar12;
        *(undefined8 *)((long)puVar5 + 0xc) = uVar11;
        *(undefined4 *)((long)puVar5 + 0x1c) = *(undefined4 *)(lVar1 + 0x1c);
        puVar5 = puVar5 + 4;
      }
      param_1[1] = puVar8;
    }
    else {
      if (param_2 != param_3) {
        do {
          FUN_007ea31c(puVar9,param_2);
          param_2 = param_2 + 0x20;
          puVar9 = puVar9 + 4;
        } while (param_2 != param_3);
        puVar8 = (undefined8 *)param_1[1];
      }
      while (puVar9 != puVar8) {
        puVar8 = puVar8 + -4;
        if (puVar8 == (undefined8 *)0x0) goto LAB_00bd127c;
        (**(code **)*puVar8)(puVar8);
      }
      param_1[1] = puVar9;
    }
    return;
  }
  if (puVar9 != (undefined8 *)0x0) {
    puVar8 = (undefined8 *)param_1[1];
    puVar5 = puVar9;
    if (puVar9 != puVar8) {
      do {
        puVar8 = puVar8 + -4;
        if (puVar8 == (undefined8 *)0x0) {
LAB_00bd127c:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        (**(code **)*puVar8)(puVar8);
      } while (puVar8 != puVar9);
      puVar5 = (undefined8 *)*param_1;
    }
    param_1[1] = puVar9;
    operator_delete(puVar5);
    uVar7 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  if (param_4 >> 0x3b == 0) {
    uVar2 = (long)uVar7 >> 4;
    if ((ulong)((long)uVar7 >> 4) <= param_4) {
      uVar2 = param_4;
    }
    if (0x7fffffffffffffdf < uVar7) {
      uVar2 = 0x7ffffffffffffff;
    }
    if (uVar2 >> 0x3b == 0) {
      puVar9 = (undefined8 *)operator_new(uVar2 * 0x20);
      *param_1 = puVar9;
      param_1[1] = puVar9;
      param_1[2] = puVar9 + uVar2 * 4;
      if (param_2 != param_3) {
        do {
          if (puVar9 == (undefined8 *)0x0) {
LAB_00bd1268:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          uVar3 = *(undefined4 *)(param_2 + 8);
          uVar12 = *(undefined8 *)(param_2 + 0x14);
          uVar11 = *(undefined8 *)(param_2 + 0xc);
          uVar4 = *(undefined4 *)(param_2 + 0x1c);
          param_2 = param_2 + 0x20;
          *puVar9 = &PTR_FUN_00d48390;
          *(undefined4 *)(puVar9 + 1) = uVar3;
          *(undefined8 *)((long)puVar9 + 0x14) = uVar12;
          *(undefined8 *)((long)puVar9 + 0xc) = uVar11;
          *(undefined4 *)((long)puVar9 + 0x1c) = uVar4;
          puVar9 = puVar9 + 4;
        } while (param_2 != param_3);
      }
      param_1[1] = puVar9;
      return;
    }
  }
  plVar6 = (long *)FUN_00bcd690();
                    /* WARNING: Could not recover jumptable at 0x00bd12a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x18))();
  return;
}


// ===== 00bd1294  FUN_00bd1294 =====

void FUN_00bd1294(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00bd12a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))();
  return;
}


// ===== 00bd12a4  FUN_00bd12a4 =====

void FUN_00bd12a4(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  (**(code **)((long)pvVar1 + 0x10))(0,pvVar1,pvVar1);
  operator_delete(pvVar1);
  return;
}


// ===== 00bd12e4  FUN_00bd12e4 =====

void FUN_00bd12e4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1 != (undefined8 *)0x0) {
    do {
      FUN_00bd12e4(*param_1);
      if (param_1 == (undefined8 *)0xffffffffffffffe0) {
LAB_00bd13d8:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      puVar5 = (undefined8 *)param_1[8];
      puVar4 = (undefined8 *)param_1[1];
      if (puVar5 != (undefined8 *)0x0) {
        puVar2 = (undefined8 *)param_1[9];
        puVar1 = puVar5;
        if (puVar5 != puVar2) {
          do {
            puVar2 = puVar2 + -4;
            if (puVar2 == (undefined8 *)0x0) goto LAB_00bd13d8;
            (**(code **)*puVar2)(puVar2);
          } while (puVar2 != puVar5);
          puVar1 = (undefined8 *)param_1[8];
        }
        param_1[9] = puVar5;
        operator_delete(puVar1);
      }
      pvVar3 = (void *)param_1[7];
      param_1[7] = 0;
      if (pvVar3 != (void *)0x0) {
        FUN_00bcca68(pvVar3);
        operator_delete(pvVar3);
      }
      if (*(char *)((long)param_1 + 0x37) < '\0') {
        operator_delete((void *)param_1[4]);
      }
      operator_delete(param_1);
      param_1 = puVar4;
    } while (puVar4 != (undefined8 *)0x0);
  }
  return;
}


// ===== 00bd13ec  FUN_00bd13ec =====

undefined1  [16]
FUN_00bd13ec(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  size_t __n;
  undefined8 *__s1;
  ulong uVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined1 auVar13 [16];
  
  plVar8 = (long *)*param_1;
  plVar9 = plVar8 + 1;
  plVar6 = (long *)*plVar9;
  plVar10 = plVar9;
  if (plVar6 != (long *)0x0) {
    __s1 = (undefined8 *)*param_2;
    uVar1 = param_2[1];
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      __s1 = param_2;
      uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    }
    do {
      while( true ) {
        plVar4 = plVar6;
        plVar6 = (long *)plVar4[4];
        uVar2 = plVar4[5];
        if (-1 < (char)*(byte *)((long)plVar4 + 0x37)) {
          plVar6 = plVar4 + 4;
          uVar2 = (ulong)*(byte *)((long)plVar4 + 0x37);
        }
        __n = uVar2;
        if (uVar1 <= uVar2) {
          __n = uVar1;
        }
        iVar3 = memcmp(__s1,plVar6,__n);
        plVar9 = plVar4;
        if (iVar3 != 0) break;
        if (uVar1 == uVar2) {
          uVar5 = 0;
          goto LAB_00bd1520;
        }
        if (uVar2 <= uVar1) goto LAB_00bd1434;
LAB_00bd1484:
        plVar6 = (long *)*plVar4;
        plVar10 = plVar4;
        if ((long *)*plVar4 == (long *)0x0) goto LAB_00bd14a0;
      }
      if (iVar3 < 0) goto LAB_00bd1484;
LAB_00bd1434:
      plVar6 = (long *)plVar4[1];
    } while ((long *)plVar4[1] != (long *)0x0);
    plVar10 = plVar4 + 1;
  }
LAB_00bd14a0:
  plVar4 = (long *)operator_new(0x40);
  if (plVar4 != (long *)0x0) {
    plVar6 = plVar4 + 4;
    *plVar4 = 0;
    if (plVar6 != (long *)0x0) {
      plVar7 = (long *)*param_4;
      if (*(char *)((long)plVar7 + 0x17) < '\0') {
        FUN_005478d8(plVar6,*plVar7,plVar7[1]);
      }
      else {
        lVar12 = plVar7[1];
        lVar11 = *plVar7;
        plVar4[6] = plVar7[2];
        plVar4[5] = lVar12;
        *plVar6 = lVar11;
      }
      plVar4[7] = 0;
      *plVar4 = 0;
      plVar4[1] = 0;
      plVar4[2] = (long)plVar9;
      *plVar10 = (long)plVar4;
      plVar6 = plVar4;
      if (*(long *)*plVar8 != 0) {
        *plVar8 = *(long *)*plVar8;
        plVar6 = (long *)*plVar10;
      }
      FUN_005d5b94(plVar8[1],plVar6);
      uVar5 = 1;
      plVar8[2] = plVar8[2] + 1;
LAB_00bd1520:
      auVar13._8_8_ = uVar5;
      auVar13._0_8_ = plVar4;
      return auVar13;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00bd155c  FUN_00bd155c =====

void FUN_00bd155c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_00bd155c(param_1,*param_2);
      if (param_2 == (undefined8 *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      puVar1 = (undefined8 *)param_2[1];
      if (*(char *)((long)param_2 + 0x37) < '\0') {
        operator_delete((void *)param_2[4]);
      }
      operator_delete(param_2);
      param_2 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
  }
  return;
}


// ===== 00bd15f0  FUN_00bd15f0 =====

undefined1  [16]
FUN_00bd15f0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  size_t __n;
  undefined8 *__s1;
  ulong uVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined1 auVar13 [16];
  
  plVar8 = (long *)*param_1;
  plVar9 = plVar8 + 1;
  plVar6 = (long *)*plVar9;
  plVar10 = plVar9;
  if (plVar6 != (long *)0x0) {
    __s1 = (undefined8 *)*param_2;
    uVar1 = param_2[1];
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      __s1 = param_2;
      uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    }
    do {
      while( true ) {
        plVar4 = plVar6;
        plVar6 = (long *)plVar4[4];
        uVar2 = plVar4[5];
        if (-1 < (char)*(byte *)((long)plVar4 + 0x37)) {
          plVar6 = plVar4 + 4;
          uVar2 = (ulong)*(byte *)((long)plVar4 + 0x37);
        }
        __n = uVar2;
        if (uVar1 <= uVar2) {
          __n = uVar1;
        }
        iVar3 = memcmp(__s1,plVar6,__n);
        plVar9 = plVar4;
        if (iVar3 != 0) break;
        if (uVar1 == uVar2) {
          uVar5 = 0;
          goto LAB_00bd1724;
        }
        if (uVar2 <= uVar1) goto LAB_00bd1638;
LAB_00bd1688:
        plVar6 = (long *)*plVar4;
        plVar10 = plVar4;
        if ((long *)*plVar4 == (long *)0x0) goto LAB_00bd16a4;
      }
      if (iVar3 < 0) goto LAB_00bd1688;
LAB_00bd1638:
      plVar6 = (long *)plVar4[1];
    } while ((long *)plVar4[1] != (long *)0x0);
    plVar10 = plVar4 + 1;
  }
LAB_00bd16a4:
  plVar4 = (long *)operator_new(0x40);
  if (plVar4 != (long *)0x0) {
    plVar6 = plVar4 + 4;
    *plVar4 = 0;
    if (plVar6 != (long *)0x0) {
      plVar7 = (long *)*param_4;
      if (*(char *)((long)plVar7 + 0x17) < '\0') {
        FUN_005478d8(plVar6,*plVar7,plVar7[1]);
      }
      else {
        lVar12 = plVar7[1];
        lVar11 = *plVar7;
        plVar4[6] = plVar7[2];
        plVar4[5] = lVar12;
        *plVar6 = lVar11;
      }
      plVar4[7] = 0;
      *plVar4 = 0;
      plVar4[1] = 0;
      plVar4[2] = (long)plVar9;
      *plVar10 = (long)plVar4;
      plVar6 = plVar4;
      if (*(long *)*plVar8 != 0) {
        *plVar8 = *(long *)*plVar8;
        plVar6 = (long *)*plVar10;
      }
      FUN_005d5b94(plVar8[1],plVar6);
      uVar5 = 1;
      plVar8[2] = plVar8[2] + 1;
LAB_00bd1724:
      auVar13._8_8_ = uVar5;
      auVar13._0_8_ = plVar4;
      return auVar13;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00bd1760  FUN_00bd1760 =====

void FUN_00bd1760(long *param_1)

{
  undefined1 uStack_11;
  
  FUN_007b6160(*param_1 + 0x10,&uStack_11,FUN_00441e10);
  return;
}


// ===== 00bd1798  FUN_00bd1798 =====

void FUN_00bd1798(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 local_14 [3];
  undefined1 uStack_11;
  
  lVar2 = *param_1;
  FUN_00bcaf40(lVar2);
  lVar3 = *(long *)(lVar2 + 0x170);
  plVar1 = *(long **)(lVar2 + 0x110);
  if (lVar3 != 0) {
    FUN_00d0f740(1,lVar3);
  }
  local_50[0] = (long *)operator_new(0x30);
  *local_50[0] = lVar3;
  local_50[0][4] = (long)FUN_004473ec;
  local_50[0][5] = (long)FUN_00bd18b4;
  local_50[0][2] = lVar2;
  local_40 = FUN_005db390;
  pcStack_38 = FUN_005db348;
  local_14[0] = 0;
  (**(code **)(*plVar1 + 0x10))(plVar1,local_50,"nt read_session_ticket",local_14,&uStack_11);
  (*local_40)(0,local_50,local_50);
  return;
}


// ===== 00bd1864  FUN_00bd1864 =====

void FUN_00bd1864(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_1;
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../rtc_base/network.cc",0x12f9,"Network change was observed");
  }
  FUN_00bcaf40(uVar2);
  return;
}


// ===== 00bd18b4  FUN_00bd18b4 =====

void FUN_00bd18b4(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 local_14 [3];
  undefined1 uStack_11;
  
  lVar2 = *param_1;
  FUN_00bcaf40(lVar2);
  lVar3 = *(long *)(lVar2 + 0x170);
  plVar1 = *(long **)(lVar2 + 0x110);
  if (lVar3 != 0) {
    FUN_00d0f740(1,lVar3);
  }
  local_50[0] = (long *)operator_new(0x30);
  *local_50[0] = lVar3;
  local_50[0][4] = (long)FUN_004473ec;
  local_50[0][5] = (long)FUN_00bd18b4;
  local_50[0][2] = lVar2;
  local_40 = FUN_005db390;
  pcStack_38 = FUN_005db348;
  local_14[0] = 0;
  (**(code **)(*plVar1 + 0x10))(plVar1,local_50,"nt read_session_ticket",local_14,&uStack_11);
  (*local_40)(0,local_50,local_50);
  return;
}


// ===== 00bd1980  FUN_00bd1980 =====

void FUN_00bd1980(long *param_1)

{
  if ((long *)(*param_1 + 0x158) != param_1 + 1) {
    FUN_00b91fc8();
    return;
  }
  return;
}


// ===== 00bd19bc  FUN_00bd19bc =====

void FUN_00bd19bc(long param_1,char *param_2,void *param_3,size_t param_4)

{
  undefined4 uVar1;
  byte bVar2;
  long lVar3;
  int __fd;
  int iVar4;
  char *__s;
  size_t sVar5;
  char *__dest;
  undefined2 *puVar6;
  undefined2 *puVar7;
  uint uVar8;
  undefined8 *__s_00;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  local_80 = 0;
  local_78 = 0;
  __s = if_indextoname(*(uint *)(param_2 + 4),(char *)&local_80);
  if (__s != (char *)0x0) {
    sVar5 = strlen(__s);
    __dest = (char *)operator_new__(sVar5 + 1);
    *(char **)(param_1 + 8) = __dest;
    sVar5 = strlen(__s);
    strncpy(__dest,__s,sVar5 + 1);
    __fd = socket(2,2,0);
    if (__fd == -1) goto LAB_00bd1b80;
    uStack_60 = 0;
    local_68 = 0;
    uStack_70 = 0;
    local_78 = 0;
    strncpy((char *)&local_80,*(char **)(param_1 + 8),0xf);
    iVar4 = ioctl(__fd,0x8913,&local_80);
    close(__fd);
    if (iVar4 != -1) {
      *(int *)(param_1 + 0x10) = (int)(short)uStack_70;
      if (*param_2 == '\n') {
        puVar6 = (undefined2 *)operator_new(0x1c);
        uVar1 = *(undefined4 *)(param_2 + 4);
        *puVar6 = 10;
        *(undefined4 *)(puVar6 + 0xc) = uVar1;
        puVar7 = puVar6 + 4;
      }
      else {
        if (*param_2 != '\x02') goto LAB_00bd1b7c;
        puVar6 = (undefined2 *)operator_new(0x10);
        puVar7 = puVar6 + 2;
        *puVar6 = 2;
      }
      memcpy(puVar7,param_3,param_4);
      *(undefined2 **)(param_1 + 0x18) = puVar6;
      bVar2 = param_2[1];
      if (*param_2 == '\n') {
        puVar7 = (undefined2 *)operator_new(0x1c);
        uVar8 = (uint)bVar2;
        *(undefined2 **)(param_1 + 0x20) = puVar7;
        *puVar7 = 10;
        if (0x7f < uVar8) {
          uVar8 = 0x80;
        }
        *(undefined8 *)(puVar7 + 8) = 0;
        __s_00 = (undefined8 *)(puVar7 + 4);
        *__s_00 = 0;
      }
      else {
        if (*param_2 != '\x02') goto LAB_00bd1b7c;
        puVar7 = (undefined2 *)operator_new(0x10);
        *(undefined2 **)(param_1 + 0x20) = puVar7;
        *puVar7 = 2;
        uVar8 = (uint)bVar2;
        __s_00 = (undefined8 *)(puVar7 + 2);
        *(undefined4 *)__s_00 = 0;
        if (0x1f < uVar8) {
          uVar8 = 0x20;
        }
      }
      if (7 < uVar8) {
        memset(__s_00,0xff,(ulong)(uVar8 >> 3));
        __s_00 = (undefined8 *)((long)__s_00 + (ulong)(uVar8 >> 3));
      }
      __fd = 0;
      *(char *)__s_00 = (char)(0xff << (ulong)(8 - (uVar8 & 7) & 0x1f));
      goto LAB_00bd1b80;
    }
  }
LAB_00bd1b7c:
  __fd = -1;
LAB_00bd1b80:
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(__fd);
  }
  return;
}


// ===== 00bd1bec  FUN_00bd1bec =====

undefined8 FUN_00bd1bec(undefined8 *param_1)

{
  short sVar1;
  long lVar2;
  undefined8 *puVar3;
  int __fd;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  uint *puVar12;
  undefined8 *puVar13;
  uint *puVar14;
  ulong local_1088 [3];
  uint local_1070 [1024];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  *param_1 = 0;
  __fd = socket(0x10,3,0);
  if (__fd < 0) {
    uVar11 = 0xffffffff;
  }
  else {
    local_1088[1] = 0;
    local_1088[2] = 0;
    local_1088[0] = 0x101001600000018;
    uVar5 = send(__fd,local_1088,0x18,0);
    if (uVar5 == (local_1088[0] & 0xffffffff)) {
      memset(local_1070,0xaa,0x1000);
      uVar5 = recv(__fd,local_1070,0x1000,0);
      if ((long)uVar5 < 1) {
        puVar10 = (undefined8 *)0x0;
      }
      else {
        puVar13 = (undefined8 *)0x0;
        puVar10 = (undefined8 *)0x0;
        do {
          if (0xf < uVar5) {
            puVar12 = local_1070;
            do {
              uVar7 = *puVar12;
              if ((uVar7 < 0x10) || (uVar5 < uVar7)) break;
              sVar1 = (short)puVar12[1];
              if (sVar1 == 0x14) {
                if (0x1b < uVar7) {
                  uVar8 = (ulong)uVar7 - 0x18;
                  puVar14 = puVar12 + 6;
                  do {
                    uVar9 = (ulong)(ushort)*puVar14;
                    if ((uVar9 < 4) || (uVar8 < uVar9)) break;
                    if ((char)puVar12[4] == '\n') {
                      if (*(short *)((long)puVar14 + 2) == 1) goto LAB_00bd1dc0;
                    }
                    else if (((char)puVar12[4] == '\x02') && (*(short *)((long)puVar14 + 2) == 2)) {
LAB_00bd1dc0:
                      puVar6 = (undefined8 *)operator_new(0x28);
                      puVar6[4] = 0;
                      puVar6[1] = 0;
                      *puVar6 = 0;
                      puVar6[3] = 0;
                      puVar6[2] = 0;
                      puVar3 = puVar6;
                      if (puVar13 != (undefined8 *)0x0) {
                        *puVar13 = puVar6;
                        puVar3 = puVar10;
                      }
                      puVar10 = puVar3;
                      iVar4 = FUN_00bd19bc(puVar6,puVar12 + 4,puVar14 + 1,
                                           (ulong)(ushort)*puVar14 - 4);
                      if (iVar4 != 0) goto LAB_00bd1e20;
                      uVar9 = (ulong)(ushort)*puVar14;
                      puVar13 = puVar6;
                    }
                    uVar9 = (ulong)((int)uVar9 + 3) & 0x1fffc;
                    uVar8 = uVar8 - uVar9;
                    puVar14 = (uint *)((long)puVar14 + uVar9);
                  } while (3 < (long)uVar8);
                  uVar7 = *puVar12;
                }
              }
              else {
                if (sVar1 == 2) goto LAB_00bd1e20;
                if (sVar1 == 3) {
                  uVar11 = 0;
                  *param_1 = puVar10;
                  goto LAB_00bd1e2c;
                }
              }
              uVar8 = (ulong)(uVar7 + 3 & 0xfffffffc);
              uVar5 = uVar5 - uVar8;
              puVar12 = (uint *)((long)puVar12 + uVar8);
            } while (0xf < uVar5);
          }
          uVar5 = recv(__fd,local_1070,0x1000,0);
        } while (0 < (long)uVar5);
      }
LAB_00bd1e20:
      FUN_00bd1e84(puVar10);
    }
    uVar11 = 0xffffffff;
LAB_00bd1e2c:
    __fd = close(__fd);
  }
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(__fd);
  }
  return uVar11;
}


// ===== 00bd1e84  FUN_00bd1e84 =====

void FUN_00bd1e84(undefined8 *param_1)

{
  short sVar1;
  short *psVar2;
  void *pvVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    do {
      if ((void *)param_1[1] != (void *)0x0) {
        operator_delete__((void *)param_1[1]);
      }
      psVar2 = (short *)param_1[3];
      if (psVar2 == (short *)0x0) {
        if (param_1[4] != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0061fd88("../../rtc_base/ifaddrs_android.cc",0xe1,"cursor->ifa_netmask == nullptr",
                       &DAT_001f5fa0);
        }
      }
      else {
        sVar1 = *psVar2;
        if (sVar1 == 2) {
          operator_delete(psVar2);
          pvVar3 = (void *)param_1[4];
        }
        else {
          if (sVar1 != 10) {
                    /* WARNING: Subroutine does not return */
            FUN_0061fd88("../../rtc_base/ifaddrs_android.cc",0xe6,"cursor->ifa_addr->sa_family == 2"
                         ,&DAT_001fbedc,sVar1,2);
          }
          operator_delete(psVar2);
          pvVar3 = (void *)param_1[4];
        }
        if (pvVar3 != (void *)0x0) {
          operator_delete(pvVar3);
        }
      }
      pvVar3 = (void *)*param_1;
      operator_delete(param_1);
      param_1 = (undefined8 *)pvVar3;
    } while (pvVar3 != (void *)0x0);
  }
  return;
}


// ===== 00bd1f70  FUN_00bd1f70 =====

void FUN_00bd1f70(void)

{
  return;
}


// ===== 00bd1f78  FUN_00bd1f78 =====

void FUN_00bd1f78(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00bd1f84  FUN_00bd1f84 =====

uint FUN_00bd1f84(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined4 uVar1;
  short sVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 local_24;
  
  sVar2 = **(short **)(param_2 + 0x18);
  if (sVar2 == 10) {
    local_24 = 0;
    uVar3 = (**(code **)(*param_1 + 0x18))(param_1,param_2,&local_24);
    if ((uVar3 & 1) != 0) {
      local_58 = 10;
      uVar5 = *(undefined8 *)(*(long *)(param_2 + 0x18) + 0x10);
      uVar4 = *(undefined8 *)(*(long *)(param_2 + 0x18) + 8);
      local_60 = &PTR_FUN_00d48390;
      uStack_4c = (undefined4)uVar5;
      uStack_48 = (undefined4)((ulong)uVar5 >> 0x20);
      local_54 = (undefined4)uVar4;
      uStack_50 = (undefined4)((ulong)uVar4 >> 0x20);
      local_44 = local_24;
      FUN_007ea31c(param_3,&local_60);
      uVar5 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x10);
      uVar4 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 8);
      *(undefined4 *)(param_4 + 8) = 10;
      *(undefined8 *)(param_4 + 0x14) = uVar5;
      *(undefined8 *)(param_4 + 0xc) = uVar4;
    }
  }
  else if (sVar2 == 2) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    local_54 = *(undefined4 *)(*(short **)(param_2 + 0x18) + 2);
    local_44 = 0;
    local_58 = 2;
    local_60 = &PTR_FUN_00d48390;
    FUN_007ea31c(param_3,&local_60);
    uVar1 = *(undefined4 *)(*(long *)(param_2 + 0x20) + 4);
    *(undefined8 *)(param_4 + 0x10) = 0;
    *(undefined4 *)(param_4 + 0x18) = 0;
    *(undefined4 *)(param_4 + 8) = 2;
    *(undefined4 *)(param_4 + 0xc) = uVar1;
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3 & 1;
}


// ===== 00bd209c  FUN_00bd209c =====

undefined8 FUN_00bd209c(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  *param_3 = 0;
  return 1;
}


// ===== 00bd20ac  FUN_00bd20ac =====

void FUN_00bd20ac(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  *puVar1 = &PTR_FUN_00d483b0;
  return;
}


// ===== 00bd20d8  FUN_00bd20d8 =====

void FUN_00bd20d8(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_00d483e0;
  param_1[1] = param_2;
  return;
}


// ===== 00bd20ec  FUN_00bd20ec =====

void FUN_00bd20ec(void)

{
  return;
}


// ===== 00bd20f4  FUN_00bd20f4 =====

void FUN_00bd20f4(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00bd2100  FUN_00bd2100 =====

void * FUN_00bd2100(long param_1,undefined8 param_2,long param_3,uint param_4,ushort param_5)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 uVar5;
  void *pvVar6;
  ulong uVar7;
  void *local_88 [2];
  char cStack_71;
  
  plVar4 = (long *)(**(code **)(**(long **)(param_1 + 8) + 0x10))
                             (*(long **)(param_1 + 8),*(undefined4 *)(param_3 + 0x20),2);
  if (plVar4 == (long *)0x0) {
    return (void *)0x0;
  }
  if (param_5 == 0 && (param_4 & 0xffff) == 0) {
    iVar2 = (**(code **)(*plVar4 + 0x20))(plVar4,param_3);
  }
  else {
    if ((uint)param_5 < (param_4 & 0xffff)) goto LAB_00bd2200;
    param_4 = param_4 & 0xffff;
    do {
      uVar5 = FUN_007e8ea8(param_3);
      FUN_007e8cac(local_88,uVar5,param_4);
      iVar2 = (**(code **)(*plVar4 + 0x20))(plVar4,local_88);
      if (cStack_71 < '\0') {
        operator_delete(local_88[0]);
      }
    } while ((iVar2 < 0) && (bVar1 = param_4 < param_5, param_4 = param_4 + 1, bVar1));
  }
  if (-1 < iVar2) {
    pvVar6 = operator_new(0x130);
    FUN_00bd29d8(pvVar6,param_2,plVar4);
    return pvVar6;
  }
LAB_00bd2200:
  uVar7 = FUN_004249b0();
  if ((uVar7 & 1) == 0) {
    uVar3 = (**(code **)(*plVar4 + 0x70))(plVar4);
    FUN_00623bb0(&DAT_001f4e94,"../../p2p/base/basic_packet_socket_factory.cc",0x1b3,
                 "UDP bind failed with error ",uVar3);
  }
  (**(code **)(*plVar4 + 8))(plVar4);
  return (void *)0x0;
}


// ===== 00bd2270  FUN_00bd2270 =====

void * FUN_00bd2270(long param_1,undefined8 param_2,long param_3,undefined8 *param_4,uint param_5,
                   uint param_6,uint *param_7)

{
  uint uVar1;
  undefined8 *puVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  long *plVar6;
  undefined8 uVar7;
  void *pvVar8;
  ulong uVar9;
  char *pcVar10;
  void *local_98 [2];
  char cStack_81;
  
  plVar6 = (long *)(**(code **)(**(long **)(param_1 + 8) + 0x10))
                             (*(long **)(param_1 + 8),*(undefined4 *)(param_3 + 0x20),2);
  if (plVar6 == (long *)0x0) {
    return (void *)0x0;
  }
  param_6 = param_6 & 0xffff;
  if (param_6 == 0 && (param_5 & 0xffff) == 0) {
    iVar4 = (**(code **)(*plVar6 + 0x20))(plVar6,param_3);
    if (iVar4 < 0) goto LAB_00bd2434;
LAB_00bd2344:
    uVar1 = *param_7;
    if ((uVar1 & 0x30) == 0) {
LAB_00bd23fc:
      pvVar8 = operator_new(0x130);
      FUN_00bd29d8(pvVar8,param_2,plVar6);
      return pvVar8;
    }
    iVar4 = (**(code **)(*plVar6 + 0x28))(plVar6,param_4);
    if (-1 < iVar4) {
      plVar6 = (long *)FUN_007ec950(plVar6,1);
      if (plVar6 == (long *)0x0) {
        return (void *)0x0;
      }
      if ((uVar1 >> 4 & 1) != 0) {
        (**(code **)(*plVar6 + 0xb8))(plVar6,1);
      }
      (**(code **)(*plVar6 + 0xc0))(plVar6,param_7 + 2);
      (**(code **)(*plVar6 + 200))(plVar6,param_7 + 8);
      (**(code **)(*plVar6 + 0xd8))(plVar6,*(undefined8 *)(param_7 + 0xe));
      uVar9 = param_4[1];
      puVar2 = (undefined8 *)*param_4;
      if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
        uVar9 = (ulong)*(byte *)((long)param_4 + 0x17);
        puVar2 = param_4;
      }
      iVar4 = (**(code **)(*plVar6 + 0xf0))(plVar6,puVar2,uVar9);
      if (iVar4 == 0) goto LAB_00bd23fc;
      goto LAB_00bd2470;
    }
    uVar9 = FUN_004249b0();
    if ((uVar9 & 1) != 0) goto LAB_00bd2470;
    uVar5 = (**(code **)(*plVar6 + 0x70))(plVar6);
    pcVar10 = "UDP connect failed with error ";
    uVar7 = 0x2b3;
  }
  else {
    if ((param_5 & 0xffff) <= param_6) {
      param_5 = param_5 & 0xffff;
      do {
        uVar7 = FUN_007e8ea8(param_3);
        FUN_007e8cac(local_98,uVar7,param_5);
        iVar4 = (**(code **)(*plVar6 + 0x20))(plVar6,local_98);
        if (cStack_81 < '\0') {
          operator_delete(local_98[0]);
        }
      } while ((iVar4 < 0) && (bVar3 = param_5 < param_6, param_5 = param_5 + 1, bVar3));
      if (-1 < iVar4) goto LAB_00bd2344;
    }
LAB_00bd2434:
    uVar9 = FUN_004249b0();
    if ((uVar9 & 1) != 0) goto LAB_00bd2470;
    uVar5 = (**(code **)(*plVar6 + 0x70))(plVar6);
    pcVar10 = "UDP bind failed with error ";
    uVar7 = 0x253;
  }
  FUN_00623bb0(&DAT_001f4e94,"../../p2p/base/basic_packet_socket_factory.cc",uVar7,pcVar10,uVar5);
LAB_00bd2470:
  (**(code **)(*plVar6 + 8))(plVar6);
  return (void *)0x0;
}


// ===== 00bd24e4  FUN_00bd24e4 =====

void * FUN_00bd24e4(long param_1,undefined8 param_2,long param_3,ushort param_4,ushort param_5,
                   uint param_6)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 uVar5;
  void *pvVar6;
  ulong uVar7;
  char *pcVar8;
  uint uVar9;
  void *local_98 [2];
  char cStack_81;
  
  if ((param_6 >> 1 & 1) != 0) {
    uVar7 = FUN_004249b0();
    if ((uVar7 & 1) != 0) {
      return (void *)0x0;
    }
    pcVar8 = "TLS support currently is not available.";
    uVar5 = 0x3c3;
LAB_00bd2608:
    FUN_00623bb0(&DAT_001f4e98,"../../p2p/base/basic_packet_socket_factory.cc",uVar5,pcVar8);
    return (void *)0x0;
  }
  if ((param_6 & 1) != 0) {
    uVar7 = FUN_004249b0();
    if ((uVar7 & 1) != 0) {
      return (void *)0x0;
    }
    pcVar8 = "Fake TLS not supported.";
    uVar5 = 0x3eb;
    goto LAB_00bd2608;
  }
  plVar4 = (long *)(**(code **)(**(long **)(param_1 + 8) + 0x10))
                             (*(long **)(param_1 + 8),*(undefined4 *)(param_3 + 0x20),1);
  if (plVar4 == (long *)0x0) {
    return (void *)0x0;
  }
  if (param_5 == 0 && param_4 == 0) {
    iVar2 = (**(code **)(*plVar4 + 0x20))(plVar4,param_3);
  }
  else {
    if (param_5 < param_4) goto LAB_00bd2670;
    uVar9 = (uint)param_4;
    do {
      uVar5 = FUN_007e8ea8(param_3);
      FUN_007e8cac(local_98,uVar5,uVar9);
      iVar2 = (**(code **)(*plVar4 + 0x20))(plVar4,local_98);
      if (cStack_81 < '\0') {
        operator_delete(local_98[0]);
      }
    } while ((iVar2 < 0) && (bVar1 = uVar9 < param_5, uVar9 = uVar9 + 1, bVar1));
  }
  if (-1 < iVar2) {
    if ((param_6 >> 2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0061fd88("../../p2p/base/basic_packet_socket_factory.cc",0x8b,
                   "!(opts & PacketSocketFactory::OPT_STUN)",&DAT_001f5fa0);
    }
    pvVar6 = operator_new(0x58);
    FUN_00bd3fb0(pvVar6,param_2,plVar4);
    return pvVar6;
  }
LAB_00bd2670:
  uVar7 = FUN_004249b0();
  if ((uVar7 & 1) == 0) {
    uVar3 = (**(code **)(*plVar4 + 0x70))(plVar4);
    FUN_00623bb0(&DAT_001f4e94,"../../p2p/base/basic_packet_socket_factory.cc",0x43b,
                 "TCP bind failed with error ",uVar3);
  }
  (**(code **)(*plVar4 + 8))(plVar4);
  return (void *)0x0;
}


// ===== 00bd26e0  FUN_00bd26e0 =====

void * FUN_00bd26e0(long param_1,undefined8 param_2,long param_3,undefined8 *param_4,uint *param_5)

{
  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  void *pvVar8;
  
  plVar5 = (long *)(**(code **)(**(long **)(param_1 + 8) + 0x10))
                             (*(long **)(param_1 + 8),*(undefined4 *)(param_3 + 0x20),1);
  if (plVar5 == (long *)0x0) {
    return (void *)0x0;
  }
  iVar3 = (**(code **)(*plVar5 + 0x20))(plVar5,param_3);
  if (iVar3 < 0) {
    uVar6 = FUN_007e95f8(param_3);
    if ((uVar6 & 1) == 0) {
      uVar6 = FUN_004249b0();
      if ((uVar6 & 1) == 0) {
        uVar4 = (**(code **)(*plVar5 + 0x70))(plVar5);
        FUN_00623bb0(&DAT_001f4e94,"../../p2p/base/basic_packet_socket_factory.cc",0x523,
                     "TCP bind failed with error ",uVar4);
      }
      goto LAB_00bd296c;
    }
    uVar6 = FUN_004022fc();
    if ((uVar6 & 1) == 0) {
      uVar4 = (**(code **)(*plVar5 + 0x70))(plVar5);
      FUN_00623bb0(&DAT_001f1906,"../../p2p/base/basic_packet_socket_factory.cc",0x50a,
                   "TCP bind failed with error ",uVar4,
                   "; ignoring since socket is using \'any\' address.");
    }
  }
  iVar3 = (**(code **)(*plVar5 + 0x90))(plVar5,3,1);
  if ((iVar3 != 0) && (uVar6 = FUN_004249b0(), (uVar6 & 1) == 0)) {
    uVar4 = (**(code **)(*plVar5 + 0x70))(plVar5);
    FUN_00623bb0(&DAT_001f4e94,"../../p2p/base/basic_packet_socket_factory.cc",0x57b,
                 "Setting TCP_NODELAY option failed with error ",uVar4);
  }
  uVar1 = *param_5;
  if ((uVar1 & 10) == 0) {
    plVar7 = plVar5;
    if ((uVar1 & 1) != 0) {
      plVar7 = (long *)operator_new(0x100);
      FUN_00bd48e0(plVar7,plVar5);
    }
  }
  else {
    plVar7 = (long *)FUN_007ec950(plVar5,0);
    if (plVar7 == (long *)0x0) {
      return (void *)0x0;
    }
    if ((uVar1 >> 3 & 1) != 0) {
      (**(code **)(*plVar7 + 0xb8))(plVar7,1);
    }
    (**(code **)(*plVar7 + 0xc0))(plVar7,param_5 + 2);
    (**(code **)(*plVar7 + 200))(plVar7,param_5 + 8);
    (**(code **)(*plVar7 + 0xd8))(plVar7,*(undefined8 *)(param_5 + 0xe));
    uVar6 = param_4[1];
    puVar2 = (undefined8 *)*param_4;
    if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
      uVar6 = (ulong)*(byte *)((long)param_4 + 0x17);
      puVar2 = param_4;
    }
    iVar3 = (**(code **)(*plVar7 + 0xf0))(plVar7,puVar2,uVar6);
    plVar5 = plVar7;
    if (iVar3 != 0) goto LAB_00bd296c;
  }
  iVar3 = (**(code **)(*plVar7 + 0x28))(plVar7,param_4);
  if (-1 < iVar3) {
    uVar1 = *param_5;
    pvVar8 = operator_new(0x140);
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_00bd4bf8(pvVar8,param_2,plVar7);
      return pvVar8;
    }
    FUN_00bd3be0();
    return pvVar8;
  }
  uVar6 = FUN_004249b0();
  if ((uVar6 & 1) == 0) {
    uVar4 = (**(code **)(*plVar7 + 0x70))(plVar7);
    FUN_00623bb0(&DAT_001f4e94,"../../p2p/base/basic_packet_socket_factory.cc",0x6a3,
                 "TCP connect failed with error ",uVar4);
  }
  plVar5 = plVar7;
  if (plVar7 == (long *)0x0) {
    return (void *)0x0;
  }
LAB_00bd296c:
  (**(code **)(*plVar5 + 8))(plVar5);
  return (void *)0x0;
}


// ===== 00bd29a4  FUN_00bd29a4 =====

void * FUN_00bd29a4(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0xb0);
  FUN_007eac60();
  return pvVar1;
}


// ===== 00bd29d8  FUN_00bd29d8 =====

void FUN_00bd29d8(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *local_58;
  code *pcStack_50;
  code *local_48;
  
  *param_1 = (long)(PTR_DAT_00d52908 + 0x10);
  FUN_007b5d10(param_1 + 1);
  param_1[8] = (long)FUN_00433984;
  param_1[9] = 0;
  FUN_007b5d10(param_1 + 10);
  FUN_007b5d10(param_1 + 0xe);
  FUN_007b5d10(param_1 + 0x12);
  FUN_007b5d10(param_1 + 0x16);
  *param_1 = (long)&PTR_FUN_00d48428;
  lVar1 = *param_2;
  param_1[0x1a] = lVar1;
  if (lVar1 != 0) {
    FUN_00d0f740(1,lVar1 + 8);
  }
  lVar2 = param_2[4];
  lVar1 = param_2[3];
  lVar4 = param_2[2];
  lVar3 = param_2[1];
  param_1[0x1f] = param_3;
  param_1[0x1e] = lVar2;
  param_1[0x1d] = lVar1;
  param_1[0x1c] = lVar4;
  param_1[0x1b] = lVar3;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x21] = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  pthread_mutex_lock((pthread_mutex_t *)(param_3 + 8));
  local_58 = (undefined8 *)operator_new(0x20);
  *local_58 = param_1;
  local_58[2] = FUN_004473ec;
  local_58[3] = FUN_00bd32c4;
  pcStack_50 = FUN_00841630;
  local_48 = FUN_00841640;
  FUN_007b5b08(param_3 + 0x30,param_1,&local_58);
  pthread_mutex_unlock((pthread_mutex_t *)(param_3 + 8));
  lVar1 = param_1[0x1f];
  pthread_mutex_lock((pthread_mutex_t *)(lVar1 + 0x50));
  local_58 = (undefined8 *)operator_new(0x20);
  *local_58 = param_1;
  local_58[2] = FUN_004473ec;
  local_58[3] = FUN_00bd32d0;
  pcStack_50 = FUN_00841630;
  local_48 = FUN_00841640;
  FUN_007b5b08(lVar1 + 0x78,param_1,&local_58);
  pthread_mutex_unlock((pthread_mutex_t *)(lVar1 + 0x50));
  lVar1 = param_1[0x1f];
  local_58 = (undefined8 *)operator_new(0x20);
  *local_58 = param_1;
  local_58[2] = FUN_004473ec;
  local_58[3] = FUN_00bd3310;
  pcStack_50 = FUN_00841630;
  local_48 = FUN_00841640;
  FUN_007b5b08(lVar1 + 0x98,param_1,&local_58);
  return;
}


// ===== 00bd2b78  FUN_00bd2b78 =====

void FUN_00bd2b78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00bd2b88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xf8) + 0x10))();
  return;
}


// ===== 00bd2b8c  FUN_00bd2b8c =====

void FUN_00bd2b8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00bd2b9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xf8) + 0x18))();
  return;
}


// ===== 00bd2ba0  FUN_00bd2ba0 =====

undefined4 FUN_00bd2ba0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  long *local_50;
  undefined1 *puStack_48;
  long local_28;
  
  uVar4 = *(undefined8 *)(param_4 + 8);
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  uVar2 = (**(code **)(**(long **)(param_1 + 0xe0) + 0x10))();
  uVar3 = uVar2 / 1000;
  if (499 < uVar2 % 1000) {
    uVar3 = uVar3 + 1;
  }
  if ((uVar2 & 0x8000000000000000) != 0) {
    uVar3 = -(-uVar2 / 1000) - (ulong)(500 < -uVar2 % 1000);
  }
  FUN_007b646c(&local_90,uVar4,uVar3,param_4 + 0x40);
  FUN_00897fa8(param_3,param_1,&local_80);
  uVar1 = (**(code **)(**(long **)(param_1 + 0xf8) + 0x30))
                    (*(long **)(param_1 + 0xf8),param_2,param_3);
  local_50 = &local_28;
  puStack_48 = (undefined1 *)&local_90;
  local_28 = param_1;
  FUN_007b6160(param_1 + 0x70,&local_50,FUN_00bd328c);
  FUN_007b643c(&local_80);
  return uVar1;
}


// ===== 00bd2cd0  FUN_00bd2cd0 =====

undefined4
FUN_00bd2cd0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  long local_58;
  long *plStack_50;
  undefined1 *local_48;
  
  uVar5 = *(undefined8 *)(param_5 + 8);
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  uVar3 = (**(code **)(**(long **)(param_1 + 0xe0) + 0x10))();
  uVar4 = uVar3 / 1000;
  if (499 < uVar3 % 1000) {
    uVar4 = uVar4 + 1;
  }
  if ((uVar3 & 0x8000000000000000) != 0) {
    uVar4 = -(-uVar3 / 1000) - (ulong)(500 < -uVar3 % 1000);
  }
  FUN_007b646c(&local_90,uVar5,uVar4,param_5 + 0x40);
  FUN_00897fa8(param_3,param_1,&local_80);
  if ((*(char *)(param_1 + 0x100) != *(char *)(param_5 + 4)) &&
     (iVar1 = (**(code **)(**(long **)(param_1 + 0xf8) + 0x90))(*(long **)(param_1 + 0xf8),7),
     iVar1 == 0)) {
    *(undefined1 *)(param_1 + 0x100) = *(undefined1 *)(param_5 + 4);
  }
  uVar2 = (**(code **)(**(long **)(param_1 + 0xf8) + 0x38))
                    (*(long **)(param_1 + 0xf8),param_2,param_3,param_4);
  plStack_50 = &local_58;
  local_58 = param_1;
  local_48 = (undefined1 *)&local_90;
  FUN_007b6160(param_1 + 0x70,&plStack_50,FUN_00bd328c);
  FUN_007b643c(&local_80);
  return uVar2;
}


// ===== 00bd2e38  FUN_00bd2e38 =====

void FUN_00bd2e38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00bd2e48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xf8) + 0x68))();
  return;
}


// ===== 00bd2e4c  FUN_00bd2e4c =====

undefined8 FUN_00bd2e4c(void)

{
  return 2;
}


// ===== 00bd2e58  FUN_00bd2e58 =====

void FUN_00bd2e58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00bd2e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xf8) + 0x88))();
  return;
}


// ===== 00bd2e6c  FUN_00bd2e6c =====

void FUN_00bd2e6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00bd2e7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xf8) + 0x90))();
  return;
}


// ===== 00bd2e80  FUN_00bd2e80 =====

void FUN_00bd2e80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00bd2e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xf8) + 0x70))();
  return;
}


// ===== 00bd2e94  FUN_00bd2e94 =====

void FUN_00bd2e94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00bd2ea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xf8) + 0x78))();
  return;
}


// ===== 00bd2ea8  FUN_00bd2ea8 =====

/* WARNING: Removing unreachable block (ram,0x00bd3104) */

void FUN_00bd2ea8(long param_1)

{
  long *plVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  void *local_128 [2];
  char cStack_111;
  undefined1 uStack_109;
  char *local_108;
  ulong local_100;
  undefined1 *local_f8;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 *puStack_c0;
  undefined1 *puStack_b8;
  undefined1 *local_b0;
  long local_a0;
  ulong uStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *local_48;
  long *local_40;
  
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  local_a0 = -0x5555555555555600;
  uStack_98 = 0xaaaaaaaaaaaaaa00;
  FUN_007e8a64(&local_90);
  local_48 = (undefined1 *)((ulong)local_48 & 0xffffffffffffff00);
  local_40 = (long *)(param_1 + 0x108);
  iVar2 = (**(code **)(**(long **)(param_1 + 0xf8) + 0x50))(*(long **)(param_1 + 0xf8),&local_a0);
  uVar5 = uStack_98;
  if (iVar2 < 0) {
    puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
    local_f0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
    local_e0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
    local_d0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_c0 = &DAT_aaaaaaaaaaaaaaaa;
    local_b0 = &DAT_aaaaaaaaaaaaaaaa;
    (**(code **)(**(long **)(param_1 + 0xf8) + 0x10))(&local_f0);
    uVar5 = FUN_00417e08();
    if ((uVar5 & 1) == 0) {
      local_108 = "../../rtc_base/async_udp_socket.cc";
      local_100 = 0x4a9;
      local_f8 = &uStack_109;
      FUN_007e924c(local_128,&local_f0);
      uVar3 = (**(code **)(**(long **)(param_1 + 0xf8) + 0x70))();
      FUN_00623bb0(&DAT_001f614e,local_108,local_100 & 0xffffffff,"AsyncUDPSocket[",local_128,
                   "] receive failed with error ",uVar3);
      if (cStack_111 < '\0') {
        operator_delete(local_128[0]);
      }
    }
    if (-1 < (long)local_e0) {
      return;
    }
    operator_delete(local_f0);
    return;
  }
  if (iVar2 == 0) {
    return;
  }
  lVar4 = (**(code **)(**(long **)(param_1 + 0xe0) + 0x10))();
  if ((uVar5 & 1) == 0) {
    if ((uStack_98 & 1) == 0) {
      uStack_98 = CONCAT71(uStack_98._1_7_,1);
    }
    goto LAB_00bd30c4;
  }
  plVar1 = (long *)(param_1 + 0x120);
  if (*(char *)(param_1 + 0x128) == '\x01') {
    if ((uStack_98 & 1) == 0) {
LAB_00bd3148:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                );
    }
    lVar6 = *plVar1;
    lVar7 = 0x7fffffffffffffff;
    if ((local_a0 != 0x7fffffffffffffff) && (lVar6 != 0x7fffffffffffffff)) {
      lVar7 = -0x8000000000000000;
      if (lVar6 != -0x8000000000000000 && local_a0 != -0x8000000000000000) {
        lVar7 = local_a0 + lVar6;
      }
    }
    if (lVar4 < lVar7) goto LAB_00bd3050;
  }
  else {
    if ((uStack_98 & 1) == 0) goto LAB_00bd3148;
LAB_00bd3050:
    lVar6 = 0x7fffffffffffffff;
    if ((lVar4 != 0x7fffffffffffffff) && (local_a0 != -0x8000000000000000)) {
      lVar6 = -0x8000000000000000;
      if (local_a0 != 0x7fffffffffffffff && lVar4 != -0x8000000000000000) {
        lVar6 = lVar4 - local_a0;
      }
    }
    if (*(char *)(param_1 + 0x128) == '\0') {
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      *(long *)(param_1 + 0x120) = lVar6;
      *(undefined1 *)(param_1 + 0x128) = 1;
    }
    else {
      *plVar1 = lVar6;
    }
  }
  lVar4 = 0x7fffffffffffffff;
  if ((local_a0 != 0x7fffffffffffffff) && (lVar6 != 0x7fffffffffffffff)) {
    lVar4 = -0x8000000000000000;
    if (lVar6 != -0x8000000000000000 && local_a0 != -0x8000000000000000) {
      lVar4 = local_a0 + lVar6;
    }
  }
LAB_00bd30c4:
  local_a0 = lVar4;
  lVar4 = 0;
  if (*local_40 != 0) {
    lVar4 = local_40[2];
  }
  FUN_00bd3350(&local_f0,lVar4,*local_40,&local_90,local_a0,uStack_98,(ulong)local_48 & 0xff,0);
  FUN_00897eec(param_1,&local_f0);
  return;
}


// ===== 00bd3170  FUN_00bd3170 =====

void FUN_00bd3170(undefined8 *param_1)

{
  int iVar1;
  void *pvVar2;
  long *plVar3;
  
  pvVar2 = (void *)param_1[0x23];
  param_1[0x23] = 0;
  *param_1 = &PTR_FUN_00d48428;
  if (pvVar2 != (void *)0x0) {
    operator_delete__(pvVar2);
  }
  plVar3 = (long *)param_1[0x1f];
  param_1[0x1f] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = (long *)param_1[0x1a];
  if ((plVar3 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar3 + 1), iVar1 == 1)) {
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  FUN_00897d04(param_1);
  return;
}


// ===== 00bd31f8  FUN_00bd31f8 =====

void FUN_00bd31f8(undefined8 *param_1)

{
  int iVar1;
  void *pvVar2;
  long *plVar3;
  
  pvVar2 = (void *)param_1[0x23];
  param_1[0x23] = 0;
  *param_1 = &PTR_FUN_00d48428;
  if (pvVar2 != (void *)0x0) {
    operator_delete__(pvVar2);
  }
  plVar3 = (long *)param_1[0x1f];
  param_1[0x1f] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = (long *)param_1[0x1a];
  if ((plVar3 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar3 + 1), iVar1 == 1)) {
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  FUN_00897d04(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00bd328c  FUN_00bd328c =====

void FUN_00bd328c(undefined8 *param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00bd32a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x20))(param_2,*(undefined8 *)*param_1,param_1[1]);
  return;
}


// ===== 00bd32a8  FUN_00bd32a8 =====

void FUN_00bd32a8(undefined8 *param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00bd32c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x20))(param_2,*(undefined8 *)*param_1);
  return;
}


// ===== 00bd32c4  FUN_00bd32c4 =====

void FUN_00bd32c4(undefined8 *param_1)

{
  FUN_00bd2ea8(*param_1);
  return;
}


// ===== 00bd32d0  FUN_00bd32d0 =====

void FUN_00bd32d0(long *param_1)

{
  long local_20;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)&local_20;
  local_20 = *param_1;
  FUN_007b6160(local_20 + 0x90,&puStack_18,FUN_00bd32a8);
  return;
}


// ===== 00bd3310  FUN_00bd3310 =====

void FUN_00bd3310(long *param_1)

{
  long local_20;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)&local_20;
  local_20 = *param_1;
  FUN_007b6160(local_20 + 0x50,&puStack_18,FUN_00bd32a8);
  return;
}


// ===== 00bd3350  FUN_00bd3350 =====

void FUN_00bd3350(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined4 param_8)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_5;
  param_1[3] = param_6;
  param_1[4] = param_4;
  *(undefined1 *)(param_1 + 5) = param_7;
  *(undefined4 *)((long)param_1 + 0x2c) = param_8;
  return;
}


// ===== 00bd336c  FUN_00bd336c =====

void FUN_00bd336c(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar4 = param_2[1];
  uVar3 = *param_2;
  uVar6 = param_2[3];
  uVar5 = param_2[2];
  uVar2 = param_2[4];
  uVar1 = *(undefined1 *)(param_2 + 5);
  *(undefined4 *)((long)param_1 + 0x2c) = param_3;
  param_1[4] = uVar2;
  param_1[1] = uVar4;
  *param_1 = uVar3;
  param_1[3] = uVar6;
  param_1[2] = uVar5;
  *(undefined1 *)(param_1 + 5) = uVar1;
  return;
}


// ===== 00bd3390  FUN_00bd3390 =====

void FUN_00bd3390(long *param_1,long param_2,long param_3)

{
  void *pvVar1;
  long lVar2;
  undefined8 *local_58;
  code *pcStack_50;
  code *local_48;
  
  *param_1 = (long)(PTR_DAT_00d52908 + 0x10);
  FUN_007b5d10(param_1 + 1);
  param_1[8] = (long)FUN_00433984;
  param_1[9] = 0;
  FUN_007b5d10(param_1 + 10);
  FUN_007b5d10(param_1 + 0xe);
  FUN_007b5d10(param_1 + 0x12);
  FUN_007b5d10(param_1 + 0x16);
  *param_1 = (long)&PTR_FUN_00d48498;
  param_1[0x1a] = param_2;
  param_1[0x21] = param_3;
  param_1[0x22] = param_3;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  pvVar1 = operator_new__(0x80);
  param_1[0x1c] = 0x80;
  param_1[0x1d] = (long)pvVar1;
  local_58 = (undefined8 *)operator_new(0x20);
  *local_58 = param_1;
  local_58[2] = FUN_004473ec;
  local_58[3] = FUN_00bd458c;
  pcStack_50 = FUN_00841630;
  local_48 = FUN_00841640;
  FUN_007b5b08(param_2 + 0x98,param_1,&local_58);
  lVar2 = param_1[0x1a];
  pthread_mutex_lock((pthread_mutex_t *)(lVar2 + 8));
  local_58 = (undefined8 *)operator_new(0x20);
  *local_58 = param_1;
  local_58[2] = FUN_004473ec;
  local_58[3] = FUN_00bd45cc;
  pcStack_50 = FUN_00841630;
  local_48 = FUN_00841640;
  FUN_007b5b08(lVar2 + 0x30,param_1,&local_58);
  pthread_mutex_unlock((pthread_mutex_t *)(lVar2 + 8));
  lVar2 = param_1[0x1a];
  pthread_mutex_lock((pthread_mutex_t *)(lVar2 + 0x50));
  local_58 = (undefined8 *)operator_new(0x20);
  *local_58 = param_1;
  local_58[2] = FUN_004473ec;
  local_58[3] = FUN_00bd45d8;
  pcStack_50 = FUN_00841630;
  local_48 = FUN_00841640;
  FUN_007b5b08(lVar2 + 0x78,param_1,&local_58);
  pthread_mutex_unlock((pthread_mutex_t *)(lVar2 + 0x50));
  lVar2 = param_1[0x1a];
  local_58 = (undefined8 *)operator_new(0x20);
  *local_58 = param_1;
  local_58[2] = FUN_004473ec;
  local_58[3] = FUN_00bd463c;
  pcStack_50 = FUN_00841680;
  local_48 = FUN_00841690;
  FUN_007b5b08(lVar2 + 0xb8,param_1,&local_58);
  return;
}


// ===== 00bd355c  FUN_00bd355c =====

void FUN_00bd355c(undefined8 *param_1)

{
  void *pvVar1;
  long *plVar2;
  
  pvVar1 = (void *)param_1[0x20];
  param_1[0x20] = 0;
  *param_1 = &PTR_FUN_00d48498;
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  pvVar1 = (void *)param_1[0x1d];
  param_1[0x1d] = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  plVar2 = (long *)param_1[0x1a];
  param_1[0x1a] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_00897d04(param_1);
  return;
}


// ===== 00bd35c8  FUN_00bd35c8 =====

void FUN_00bd35c8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbd35d0);
  (*pcVar1)();
}


// ===== 00bd35d0  FUN_00bd35d0 =====

void FUN_00bd35d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00bd35e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xd0) + 0x10))();
  return;
}


// ===== 00bd35e4  FUN_00bd35e4 =====

void FUN_00bd35e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00bd35f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xd0) + 0x18))();
  return;
}


// ===== 00bd35f8  FUN_00bd35f8 =====

void FUN_00bd35f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00bd3608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xd0) + 0x68))();
  return;
}


// ===== 00bd360c  FUN_00bd360c =====

undefined4 FUN_00bd360c(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = (**(code **)(**(long **)(param_1 + 0xd0) + 0x80))();
  uVar3 = 3;
  if (iVar2 != 1) {
    uVar3 = 0;
  }
  uVar1 = 4;
  if (iVar2 != 2) {
    uVar1 = uVar3;
  }
  return uVar1;
}


// ===== 00bd364c  FUN_00bd364c =====

void FUN_00bd364c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00bd365c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xd0) + 0x88))();
  return;
}


// ===== 00bd3660  FUN_00bd3660 =====

void FUN_00bd3660(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00bd3670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xd0) + 0x90))();
  return;
}


// ===== 00bd3674  FUN_00bd3674 =====

void FUN_00bd3674(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00bd3684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xd0) + 0x70))();
  return;
}


// ===== 00bd3688  FUN_00bd3688 =====

void FUN_00bd3688(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00bd3698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xd0) + 0x78))();
  return;
}


// ===== 00bd369c  FUN_00bd369c =====

undefined4
FUN_00bd369c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined4 uVar1;
  ulong uVar2;
  void *local_88 [2];
  char cStack_71;
  
  (**(code **)(*param_1 + 0x18))(local_88);
  uVar2 = FUN_007e973c(param_4,local_88);
  if ((uVar2 & 1) == 0) {
    (**(code **)(*(long *)param_1[0x1a] + 0x78))((long *)param_1[0x1a],0x6b);
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (**(code **)(*param_1 + 0x20))(param_1,param_2,param_3,param_5);
  }
  if (cStack_71 < '\0') {
    operator_delete(local_88[0]);
  }
  return uVar1;
}


// ===== 00bd3768  FUN_00bd3768 =====

uint FUN_00bd3768(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong __n;
  void *pvVar4;
  uint uVar5;
  ulong uVar6;
  void *__src;
  
  __n = *(ulong *)(param_1 + 0xf0);
  if (__n == 0) {
    pvVar4 = (void *)0x0;
    uVar1 = 0xaaaaaaaa;
LAB_00bd37e8:
    iVar2 = (**(code **)(**(long **)(param_1 + 0xd0) + 0x70))();
    uVar5 = (int)*(ulong *)(param_1 + 0xf0) - (int)__n;
    if (iVar2 != 0xb) {
      uVar5 = uVar1;
    }
    if (*(ulong *)(param_1 + 0xf0) <= __n) {
      return uVar5;
    }
    memmove(*(void **)(param_1 + 0x100),pvVar4,__n);
    uVar3 = *(ulong *)(param_1 + 0xf8);
    if (uVar3 < __n) {
      uVar3 = uVar3 + (uVar3 >> 1);
      uVar6 = __n;
      if (__n <= uVar3) {
        uVar6 = uVar3;
      }
      pvVar4 = operator_new__(uVar6);
      __src = *(void **)(param_1 + 0x100);
      if (__src == (void *)0x0) {
        *(void **)(param_1 + 0x100) = pvVar4;
      }
      else {
        memcpy(pvVar4,__src,*(size_t *)(param_1 + 0xf0));
        *(void **)(param_1 + 0x100) = pvVar4;
        operator_delete__(__src);
      }
      *(ulong *)(param_1 + 0xf8) = uVar6;
    }
  }
  else {
    pvVar4 = *(void **)(param_1 + 0x100);
    uVar3 = __n;
    do {
      uVar1 = (**(code **)(**(long **)(param_1 + 0xd0) + 0x30))
                        (*(long **)(param_1 + 0xd0),pvVar4,uVar3);
      uVar6 = (ulong)uVar1;
      __n = uVar3;
      if ((int)uVar1 < 1) goto LAB_00bd37e8;
      __n = uVar3 - uVar6;
      if (uVar3 < uVar6) {
        uVar1 = 0xffffffff;
        __n = uVar3;
        goto LAB_00bd37e8;
      }
      pvVar4 = (void *)((long)pvVar4 + uVar6);
      if (uVar3 < uVar6 || __n == 0) {
        pvVar4 = (void *)0x0;
      }
      uVar3 = __n;
    } while (__n != 0);
    uVar5 = *(uint *)(param_1 + 0xf0);
  }
  *(ulong *)(param_1 + 0xf0) = __n;
  return uVar5;
}


// ===== 00bd3894  FUN_00bd3894 =====

void FUN_00bd3894(long param_1,void *param_2,size_t param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  void *__dest;
  size_t __n;
  void *__src;
  
  if (param_3 != 0) {
    __n = *(size_t *)(param_1 + 0xf0);
    uVar3 = *(ulong *)(param_1 + 0xf8);
    uVar1 = __n + param_3;
    if (uVar3 < uVar1) {
      uVar3 = uVar3 + (uVar3 >> 1);
      uVar2 = uVar1;
      if (uVar1 <= uVar3) {
        uVar2 = uVar3;
      }
      __dest = operator_new__(uVar2);
      __src = *(void **)(param_1 + 0x100);
      if (__src == (void *)0x0) {
        *(void **)(param_1 + 0x100) = __dest;
      }
      else {
        memcpy(__dest,__src,__n);
        *(void **)(param_1 + 0x100) = __dest;
        operator_delete__(__src);
        __n = *(size_t *)(param_1 + 0xf0);
      }
      *(ulong *)(param_1 + 0xf8) = uVar2;
    }
    memcpy((void *)(*(long *)(param_1 + 0x100) + __n),param_2,param_3);
    *(ulong *)(param_1 + 0xf0) = uVar1;
  }
  return;
}


// ===== 00bd3954  FUN_00bd3954 =====

void FUN_00bd3954(long *param_1)

{
  ulong uVar1;
  size_t __n;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  void *pvVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  void *pvVar10;
  long lVar11;
  
  uVar8 = param_1[0x1b];
  uVar6 = param_1[0x1c];
  lVar11 = 0;
  while( true ) {
    uVar9 = uVar6 - uVar8;
    if ((uVar9 < 0x80) && (uVar7 = param_1[0x21], uVar6 < uVar7)) {
      uVar1 = uVar6 << 1;
      if (uVar7 <= uVar6 << 1) {
        uVar1 = uVar7;
      }
      if (0 < (long)uVar6) {
        pvVar5 = operator_new__(uVar1);
        pvVar10 = (void *)param_1[0x1d];
        if (pvVar10 == (void *)0x0) {
          param_1[0x1d] = (long)pvVar5;
        }
        else {
          memcpy(pvVar5,pvVar10,uVar8);
          param_1[0x1d] = (long)pvVar5;
          operator_delete__(pvVar10);
          uVar8 = param_1[0x1b];
        }
        uVar9 = uVar1 - uVar8;
        param_1[0x1c] = uVar1;
      }
    }
    uVar2 = (**(code **)(*(long *)param_1[0x1a] + 0x40))
                      ((long *)param_1[0x1a],param_1[0x1d] + uVar8,uVar9,0);
    if ((int)uVar2 < 0) break;
    __n = param_1[0x1b];
    uVar6 = param_1[0x1c];
    uVar7 = (ulong)uVar2;
    uVar8 = __n + uVar7;
    if (uVar6 < uVar8) {
      uVar1 = uVar6 + (uVar6 >> 1);
      uVar6 = uVar8;
      if (uVar8 <= uVar1) {
        uVar6 = uVar1;
      }
      pvVar5 = operator_new__(uVar6);
      pvVar10 = (void *)param_1[0x1d];
      if (pvVar10 == (void *)0x0) {
        param_1[0x1d] = (long)pvVar5;
      }
      else {
        memcpy(pvVar5,pvVar10,__n);
        param_1[0x1d] = (long)pvVar5;
        operator_delete__(pvVar10);
      }
      param_1[0x1c] = uVar6;
    }
    lVar11 = lVar11 + uVar7;
    param_1[0x1b] = uVar8;
    if ((uVar2 == 0) || (uVar7 < uVar9)) goto LAB_00bd3ae8;
  }
  iVar3 = (**(code **)(*(long *)param_1[0x1a] + 0x70))();
  if (((iVar3 != 0xb) && (iVar3 != 0x73)) && (uVar8 = FUN_004249b0(), (uVar8 & 1) == 0)) {
    uVar4 = (**(code **)(*(long *)param_1[0x1a] + 0x70))();
    FUN_00623bb0(&DAT_001f4e94,"../../rtc_base/async_tcp_socket.cc",0x5fb,"Recv() returned error: ",
                 uVar4);
  }
LAB_00bd3ae8:
  if (lVar11 != 0) {
    lVar11 = 0;
    if (param_1[0x1b] != 0) {
      lVar11 = param_1[0x1d];
    }
    uVar6 = (**(code **)(*param_1 + 0x60))(param_1,lVar11);
    uVar8 = param_1[0x1b] - uVar6;
    if ((ulong)param_1[0x1b] < uVar6) {
      uVar8 = FUN_004249b0();
      if ((uVar8 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../rtc_base/async_tcp_socket.cc",0x693,
                     "input buffer overflow");
        uVar8 = 0;
      }
      else {
        uVar8 = 0;
      }
    }
    else {
      if (uVar8 != 0) {
        memmove((void *)param_1[0x1d],(void *)(param_1[0x1d] + uVar6),uVar8);
      }
      uVar6 = param_1[0x1c];
      if (uVar6 < uVar8) {
        uVar6 = uVar6 + (uVar6 >> 1);
        uVar9 = uVar8;
        if (uVar8 <= uVar6) {
          uVar9 = uVar6;
        }
        pvVar5 = operator_new__(uVar9);
        pvVar10 = (void *)param_1[0x1d];
        if (pvVar10 == (void *)0x0) {
          param_1[0x1d] = (long)pvVar5;
        }
        else {
          memcpy(pvVar5,pvVar10,param_1[0x1b]);
          param_1[0x1d] = (long)pvVar5;
          operator_delete__(pvVar10);
        }
        param_1[0x1c] = uVar9;
      }
    }
    param_1[0x1b] = uVar8;
  }
  return;
}


// ===== 00bd3be0  FUN_00bd3be0 =====

void FUN_00bd3be0(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  FUN_00bd3390(param_1,param_3,0x10002);
  *param_1 = &PTR_FUN_00d48510;
  lVar1 = *param_2;
  param_1[0x23] = lVar1;
  if (lVar1 != 0) {
    FUN_00d0f740(1,lVar1 + 8);
  }
  lVar2 = param_2[4];
  lVar1 = param_2[3];
  lVar3 = param_2[1];
  param_1[0x25] = param_2[2];
  param_1[0x24] = lVar3;
  param_1[0x27] = lVar2;
  param_1[0x26] = lVar1;
  return;
}


// ===== 00bd3c48  FUN_00bd3c48 =====

ulong FUN_00bd3c48(long *param_1,void *param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined2 uVar2;
  uint uVar3;
  void *pvVar4;
  undefined2 *puVar5;
  void *pvVar6;
  ulong uVar7;
  undefined2 *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  long *local_58;
  long **pplStack_50;
  undefined1 *local_48;
  
  if (param_3 < 0x10003) {
    if (param_1[0x1e] == 0) {
      if ((ulong)param_1[0x1f] < 2) {
        pvVar4 = operator_new__(2);
        pvVar6 = (void *)param_1[0x20];
        param_1[0x20] = (long)pvVar4;
        if (pvVar6 != (void *)0x0) {
          operator_delete__(pvVar6);
          pvVar6 = (void *)param_1[0x1e];
        }
        param_1[0x1f] = 2;
      }
      else {
        pvVar6 = (void *)0x0;
      }
      *(ushort *)(param_1[0x20] + (long)pvVar6) =
           (ushort)(param_3 >> 8) & 0xff | (ushort)(((uint)param_3 & 0xff00ff) << 8);
      param_1[0x1e] = 2;
      if (param_3 != 0) {
        uVar7 = param_1[0x1f];
        uVar10 = param_3 + 2;
        if (uVar7 < uVar10) {
          uVar7 = uVar7 + (uVar7 >> 1);
          uVar1 = uVar10;
          if (uVar10 <= uVar7) {
            uVar1 = uVar7;
          }
          puVar5 = (undefined2 *)operator_new__(uVar1);
          puVar8 = (undefined2 *)param_1[0x20];
          if (puVar8 == (undefined2 *)0x0) {
            param_1[0x20] = (long)puVar5;
            lVar9 = 2;
          }
          else {
            uVar2 = *puVar8;
            param_1[0x20] = (long)puVar5;
            *puVar5 = uVar2;
            operator_delete__(puVar8);
            lVar9 = param_1[0x1e];
          }
          param_1[0x1f] = uVar1;
        }
        else {
          lVar9 = 2;
        }
        memcpy((void *)(param_1[0x20] + lVar9),param_2,param_3);
        param_1[0x1e] = uVar10;
      }
      uVar3 = FUN_00bd3768(param_1);
      if ((int)uVar3 < 1) {
        param_1[0x1e] = 0;
        param_3 = (ulong)uVar3;
      }
      else {
        uVar11 = *(undefined8 *)(param_4 + 8);
        puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
        local_80 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
        local_90 = &DAT_aaaaaaaaaaaaaaaa;
        local_60 = &DAT_aaaaaaaaaaaaaaaa;
        uVar7 = (**(code **)(*(long *)param_1[0x25] + 0x10))();
        uVar10 = uVar7 / 1000;
        if (499 < uVar7 % 1000) {
          uVar10 = uVar10 + 1;
        }
        if ((uVar7 & 0x8000000000000000) != 0) {
          uVar10 = -(-uVar7 / 1000) - (ulong)(500 < -uVar7 % 1000);
        }
        FUN_007b646c(&local_90,uVar11,uVar10,param_4 + 0x40);
        FUN_00897fa8(param_3,param_1,&local_80);
        pplStack_50 = &local_58;
        local_58 = param_1;
        local_48 = (undefined1 *)&local_90;
        FUN_007b6160(param_1 + 0xe,&pplStack_50,FUN_00bd328c);
        FUN_007b643c(&local_80);
      }
    }
  }
  else {
    (**(code **)(*param_1 + 0x58))(param_1,0x5a);
    param_3 = 0xffffffff;
  }
  return param_3 & 0xffffffff;
}


// ===== 00bd3e74  FUN_00bd3e74 =====

long FUN_00bd3e74(long *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  (**(code **)(*param_1 + 0x18))(&local_a0);
  if (param_3 < 2) {
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    uVar7 = param_3;
    do {
      uVar6 = (ulong)((uint)(*(ushort *)(param_2 + lVar8) >> 8) |
                     (*(ushort *)(param_2 + lVar8) & 0xff00ff) << 8);
      if (uVar7 < uVar6 + 2) break;
      uVar7 = lVar8 + 2;
      uVar1 = param_3 - uVar7;
      if (uVar6 <= param_3 - uVar7) {
        uVar1 = uVar6;
      }
      puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
      local_c0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_b0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
      local_d0 = &DAT_aaaaaaaaaaaaaaaa;
      lVar2 = 0;
      if (uVar1 != 0) {
        lVar2 = param_2 + uVar7;
      }
      uVar3 = 0;
      if (uVar7 < param_3) {
        uVar3 = uVar1;
      }
      lVar4 = 0;
      if (uVar7 < param_3) {
        lVar4 = lVar2;
      }
      uVar5 = (**(code **)(*(long *)param_1[0x25] + 0x10))();
      FUN_00bd3350(&local_d0,lVar4,uVar3,&local_a0,uVar5,1,0,0);
      FUN_00897eec(param_1,&local_d0);
      lVar8 = uVar6 + 2 + lVar8;
      uVar7 = param_3 - lVar8;
    } while (1 < uVar7);
  }
  if ((long)local_90 < 0) {
    operator_delete(local_a0);
  }
  return lVar8;
}


// ===== 00bd3fb0  FUN_00bd3fb0 =====

void FUN_00bd3fb0(undefined8 *param_1,long *param_2,long param_3)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *local_48;
  code *pcStack_40;
  code *local_38;
  
  *param_1 = &PTR_FUN_00d485c0;
  FUN_007b5d10(param_1 + 1);
  *param_1 = &PTR_FUN_00d48588;
  lVar4 = *param_2;
  param_1[5] = lVar4;
  if (lVar4 != 0) {
    FUN_00d0f740(1,lVar4 + 8);
  }
  lVar5 = param_2[4];
  lVar4 = param_2[3];
  lVar7 = param_2[2];
  lVar6 = param_2[1];
  param_1[10] = param_3;
  param_1[7] = lVar7;
  param_1[6] = lVar6;
  param_1[9] = lVar5;
  param_1[8] = lVar4;
  pthread_mutex_lock((pthread_mutex_t *)(param_3 + 8));
  local_48 = (undefined8 *)operator_new(0x20);
  *local_48 = param_1;
  local_48[2] = FUN_004473ec;
  local_48[3] = FUN_00bd4688;
  pcStack_40 = FUN_00841630;
  local_38 = FUN_00841640;
  FUN_007b5b08(param_3 + 0x30,param_1,&local_48);
  pthread_mutex_unlock((pthread_mutex_t *)(param_3 + 8));
  iVar1 = (**(code **)(*(long *)param_1[10] + 0x58))((long *)param_1[10],5);
  if ((iVar1 < 0) && (uVar3 = FUN_004249b0(), (uVar3 & 1) == 0)) {
    uVar2 = (**(code **)(*(long *)param_1[10] + 0x70))();
    FUN_00623bb0(&DAT_001f4e94,"../../rtc_base/async_tcp_socket.cc",0x973,
                 "Listen() failed with error ",uVar2);
  }
  return;
}


// ===== 00bd40dc  FUN_00bd40dc =====

bool FUN_00bd40dc(long param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(long **)(param_1 + 0x50) + 0x80))();
  return iVar1 == 1;
}


// ===== 00bd410c  FUN_00bd410c =====

void FUN_00bd410c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00bd411c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x50) + 0x10))();
  return;
}


// ===== 00bd4120  FUN_00bd4120 =====

void FUN_00bd4120(long *param_1,long *param_2)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  long local_30;
  long *local_28;
  
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_007e8a64(&local_80);
  lVar2 = (**(code **)(*param_2 + 0x60))(param_2,&local_80);
  if (lVar2 == 0) {
    uVar3 = FUN_004249b0();
    if ((uVar3 & 1) == 0) {
      uVar1 = (**(code **)(*(long *)param_1[10] + 0x70))();
      FUN_00623bb0(&DAT_001f4e94,"../../rtc_base/async_tcp_socket.cc",0xa53,
                   "TCP accept failed with error ",uVar1);
    }
  }
  else {
    (**(code **)(*param_1 + 0x20))(param_1,lVar2);
    local_30 = lVar2;
    pthread_mutex_lock((pthread_mutex_t *)(lVar2 + 8));
    local_28 = &local_30;
    FUN_007b6160(lVar2 + 0x30,&local_28,FUN_007e7acc);
    pthread_mutex_unlock((pthread_mutex_t *)(lVar2 + 8));
  }
  if ((long)local_70 < 0) {
    operator_delete(local_80);
  }
  return;
}


// ===== 00bd4220  FUN_00bd4220 =====

void FUN_00bd4220(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *local_48;
  long *plStack_40;
  undefined8 **local_38;
  long local_18;
  
  puVar1 = (undefined8 *)operator_new(0x140);
  FUN_00bd3390(puVar1,param_2,0x10002);
  lVar2 = *(long *)(param_1 + 0x28);
  *puVar1 = &PTR_FUN_00d48510;
  puVar1[0x23] = lVar2;
  if (lVar2 != 0) {
    FUN_00d0f740(1,lVar2 + 8);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  plStack_40 = &local_18;
  local_38 = &local_48;
  puVar1[0x25] = *(undefined8 *)(param_1 + 0x38);
  puVar1[0x24] = uVar3;
  puVar1[0x27] = uVar5;
  puVar1[0x26] = uVar4;
  local_48 = puVar1;
  local_18 = param_1;
  FUN_007b6160(param_1 + 8,&plStack_40,FUN_00bd456c);
  return;
}


// ===== 00bd42c8  FUN_00bd42c8 =====

void FUN_00bd42c8(undefined8 *param_1)

{
  int iVar1;
  void *pvVar2;
  long *plVar3;
  
  plVar3 = (long *)param_1[0x23];
  *param_1 = &PTR_FUN_00d48510;
  if ((plVar3 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar3 + 1), iVar1 == 1)) {
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  pvVar2 = (void *)param_1[0x20];
  *param_1 = &PTR_FUN_00d48498;
  param_1[0x20] = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete__(pvVar2);
  }
  pvVar2 = (void *)param_1[0x1d];
  param_1[0x1d] = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete__(pvVar2);
  }
  plVar3 = (long *)param_1[0x1a];
  param_1[0x1a] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  FUN_00897d04(param_1);
  return;
}


// ===== 00bd436c  FUN_00bd436c =====

void FUN_00bd436c(undefined8 *param_1)

{
  int iVar1;
  void *pvVar2;
  long *plVar3;
  
  plVar3 = (long *)param_1[0x23];
  *param_1 = &PTR_FUN_00d48510;
  if ((plVar3 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar3 + 1), iVar1 == 1)) {
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  pvVar2 = (void *)param_1[0x20];
  *param_1 = &PTR_FUN_00d48498;
  param_1[0x20] = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete__(pvVar2);
  }
  pvVar2 = (void *)param_1[0x1d];
  param_1[0x1d] = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete__(pvVar2);
  }
  plVar3 = (long *)param_1[0x1a];
  param_1[0x1a] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  FUN_00897d04(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00bd441c  FUN_00bd441c =====

void FUN_00bd441c(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[10];
  param_1[10] = 0;
  *param_1 = &PTR_FUN_00d48588;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)param_1[5];
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar2 + 1), iVar1 == 1)) {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  *param_1 = &PTR_FUN_00d485c0;
  FUN_007b5d24(param_1 + 1);
  return;
}


// ===== 00bd44a0  FUN_00bd44a0 =====

void FUN_00bd44a0(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[10];
  param_1[10] = 0;
  *param_1 = &PTR_FUN_00d48588;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)param_1[5];
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar2 + 1), iVar1 == 1)) {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  *param_1 = &PTR_FUN_00d485c0;
  FUN_007b5d24(param_1 + 1);
  operator_delete(param_1);
  return;
}


// ===== 00bd4530  FUN_00bd4530 =====

void FUN_00bd4530(undefined8 *param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00bd454c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x20))(param_2,*(undefined8 *)*param_1,*(undefined4 *)param_1[1]);
  return;
}


// ===== 00bd4550  FUN_00bd4550 =====

void FUN_00bd4550(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d485c0;
  FUN_007b5d24(param_1 + 1);
  return;
}


// ===== 00bd4564  FUN_00bd4564 =====

void FUN_00bd4564(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbd456c);
  (*pcVar1)();
}


// ===== 00bd456c  FUN_00bd456c =====

void FUN_00bd456c(undefined8 *param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00bd4588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x20))(param_2,*(undefined8 *)*param_1,*(undefined8 *)param_1[1]);
  return;
}


// ===== 00bd458c  FUN_00bd458c =====

void FUN_00bd458c(long *param_1)

{
  long local_20;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)&local_20;
  local_20 = *param_1;
  FUN_007b6160(local_20 + 0x50,&puStack_18,FUN_00bd32a8);
  return;
}


// ===== 00bd45cc  FUN_00bd45cc =====

void FUN_00bd45cc(undefined8 *param_1)

{
  FUN_00bd3954(*param_1);
  return;
}


// ===== 00bd45d8  FUN_00bd45d8 =====

void FUN_00bd45d8(long *param_1)

{
  long lVar1;
  long local_28;
  long *local_8;
  
  lVar1 = *param_1;
  if ((*(long *)(lVar1 + 0xf0) == 0) || (FUN_00bd3768(lVar1), *(long *)(lVar1 + 0xf0) == 0)) {
    local_8 = &local_28;
    local_28 = lVar1;
    FUN_007b6160(lVar1 + 0x90,&local_8,FUN_00bd32a8);
  }
  return;
}


// ===== 00bd463c  FUN_00bd463c =====

void FUN_00bd463c(long *param_1,undefined8 param_2,undefined4 param_3)

{
  long local_30;
  undefined4 local_24;
  undefined1 *local_20;
  undefined4 *puStack_18;
  
  local_20 = (undefined1 *)&local_30;
  local_30 = *param_1;
  puStack_18 = &local_24;
  local_24 = param_3;
  FUN_007b6160(local_30 + 8,&local_20,FUN_00bd4530);
  return;
}


// ===== 00bd4688  FUN_00bd4688 =====

void FUN_00bd4688(undefined8 *param_1)

{
  FUN_00bd4120(*param_1);
  return;
}


// ===== 00bd4694  FUN_00bd4694 =====

void FUN_00bd4694(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbd469c);
  (*pcVar1)();
}


// ===== 00bd469c  FUN_00bd469c =====

undefined8 FUN_00bd469c(long *param_1)

{
  undefined8 uVar1;
  
  if ((char)param_1[0x1f] == '\x01') {
    (**(code **)(*param_1 + 0x78))(param_1,0xb);
    return 0xffffffff;
  }
  uVar1 = FUN_008412e8();
  return uVar1;
}


// ===== 00bd46dc  FUN_00bd46dc =====

int FUN_00bd46dc(long *param_1,void *param_2,ulong param_3,undefined8 param_4)

{
  size_t __n;
  int iVar1;
  size_t __n_00;
  
  if ((char)param_1[0x1f] == '\x01') {
    (**(code **)(*param_1 + 0x78))(param_1,0xb);
    iVar1 = -1;
  }
  else {
    __n_00 = param_1[0x1e];
    if (__n_00 == 0) {
      __n_00 = 0;
    }
    else {
      if (param_3 <= __n_00) {
        __n_00 = param_3;
      }
      memcpy(param_2,(void *)param_1[0x1c],__n_00);
      __n = param_1[0x1e] - __n_00;
      param_1[0x1e] = __n;
      if (__n != 0) {
        memmove((void *)param_1[0x1c],(void *)(param_1[0x1c] + __n_00),__n);
      }
      param_2 = (void *)((long)param_2 + __n_00);
      param_3 = param_3 - __n_00;
    }
    iVar1 = FUN_00841310(param_1,param_2,param_3,param_4);
    if (iVar1 < 0) {
      if (__n_00 != 0) {
        iVar1 = (int)__n_00;
      }
    }
    else {
      iVar1 = iVar1 + (int)__n_00;
    }
  }
  return iVar1;
}


// ===== 00bd47b8  FUN_00bd47b8 =====

void FUN_00bd47b8(long *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  ulong uVar3;
  ulong uVar4;
  char *local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  
  if ((*(byte *)(param_1 + 0x1f) & 1) == 0) {
    FUN_00841414(param_1);
    return;
  }
  uVar3 = param_1[0x1e];
  uVar4 = param_1[0x1d];
  if (uVar4 <= uVar3) {
    uVar3 = FUN_004249b0();
    if ((uVar3 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../rtc_base/socket_adapters.cc",0x313,"Input buffer overflow");
    }
    uVar4 = param_1[0x1d];
    uVar3 = 0;
    param_1[0x1e] = 0;
  }
  uVar1 = FUN_00841310(param_1,param_1[0x1c] + uVar3,uVar4 - uVar3,0);
  if (-1 < (int)uVar1) {
    param_1[0x1e] = param_1[0x1e] + (ulong)uVar1;
                    /* WARNING: Could not recover jumptable at 0x00bd486c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb8))(param_1,param_1[0x1c],param_1 + 0x1e);
    return;
  }
  uVar3 = FUN_00417e08();
  if ((uVar3 & 1) == 0) {
    puVar2 = (undefined4 *)__errno();
    uStack_24 = *puVar2;
    local_38 = "../../rtc_base/socket_adapters.cc";
    local_30 = 0x359;
    local_28 = 1;
    FUN_00623bb0(&DAT_00215716,&local_38,&DAT_001d70b7);
  }
  return;
}


// ===== 00bd48e0  FUN_00bd48e0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bd48e0(undefined8 *param_1)

{
  undefined8 uVar1;
  void *pvVar2;
  
  FUN_00841130();
  *(undefined1 *)(param_1 + 0x1f) = 0;
  uVar1 = _DAT_001f1e50;
  param_1[0x1e] = _UNK_001f1e58;
  param_1[0x1d] = uVar1;
  pvVar2 = operator_new__(0x400);
  param_1[0x1c] = pvVar2;
  *param_1 = &PTR_FUN_00d486c0;
  return;
}


// ===== 00bd4930  FUN_00bd4930 =====

void FUN_00bd4930(long param_1)

{
  *(undefined1 *)(param_1 + 0xf8) = 1;
  FUN_008412d4();
  return;
}


// ===== 00bd4940  FUN_00bd4940 =====

void FUN_00bd4940(long *param_1)

{
  int iVar1;
  ulong uVar2;
  undefined4 local_34;
  long **local_30;
  undefined4 *puStack_28;
  long *local_8;
  
  iVar1 = FUN_008412e8(param_1,&DAT_00257f60,0x48);
  if (iVar1 != 0x48) {
    uVar2 = FUN_004249b0();
    if ((uVar2 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../rtc_base/socket_adapters.cc",0x5cb,
                   "Sending fake SSL ClientHello message failed.");
    }
    (**(code **)(*param_1 + 0x68))(param_1);
    local_30 = &local_8;
    puStack_28 = &local_34;
    local_34 = 0;
    local_8 = param_1;
    FUN_007b6160(param_1 + 0x17,&local_30,FUN_007e7a9c);
  }
  return;
}


// ===== 00bd49e4  FUN_00bd49e4 =====

long * FUN_00bd49e4(long *param_1,void *param_2,size_t *param_3)

{
  size_t __n;
  bool bVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  undefined4 local_4c;
  long **local_48;
  undefined4 *puStack_40;
  long *local_38;
  
  uVar5 = *param_3;
  plVar4 = param_1;
  if (0x4e < uVar5) {
    iVar2 = memcmp(&DAT_00257fa8,param_2,0x4f);
    local_38 = param_1;
    if (iVar2 == 0) {
      __n = uVar5 - 0x4f;
      *param_3 = __n;
      if (__n == 0) {
        bVar1 = true;
      }
      else {
        memmove(param_2,(void *)((long)param_2 + 0x4f),__n);
        bVar1 = *param_3 == 0;
      }
      *(undefined1 *)(param_1 + 0x1f) = 0;
      local_48 = &local_38;
      plVar4 = (long *)FUN_007b6160(param_1 + 0x13,&local_48,FUN_007e7acc);
      if (!bVar1) {
        local_38 = param_1;
        pthread_mutex_lock((pthread_mutex_t *)(param_1 + 1));
        local_48 = &local_38;
        FUN_007b6160(param_1 + 6,&local_48,FUN_007e7acc);
        uVar3 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 1));
        plVar4 = (long *)(ulong)uVar3;
      }
    }
    else {
      uVar5 = FUN_004249b0();
      if ((uVar5 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../rtc_base/socket_adapters.cc",0x623,
                     "Received non-matching fake SSL ServerHello message.");
      }
      (**(code **)(*param_1 + 0x68))(param_1);
      local_48 = &local_38;
      puStack_40 = &local_4c;
      local_4c = 0;
      plVar4 = (long *)FUN_007b6160(param_1 + 0x17,&local_48,FUN_007e7a9c);
    }
  }
  return plVar4;
}


// ===== 00bd4b24  FUN_00bd4b24 =====

int FUN_00bd4b24(long *param_1)

{
  int iVar1;
  long *plVar2;
  
  *param_1 = (long)&PTR_FUN_00d485f0;
  if ((void *)param_1[0x1c] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1c]);
  }
  plVar2 = (long *)param_1[0x1b];
  param_1[0x1b] = 0;
  *param_1 = (long)&PTR_FUN_00d3a070;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *param_1 = (long)(PTR_DAT_00d52910 + 0x10);
  FUN_007b5d24(param_1 + 0x17);
  FUN_007b5d24(param_1 + 0x13);
  FUN_007b5d24(param_1 + 0xf);
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 10));
  FUN_007b5d24(param_1 + 6);
  iVar1 = pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 1));
  return iVar1;
}


// ===== 00bd4bc8  FUN_00bd4bc8 =====

void FUN_00bd4bc8(void *param_1)

{
  FUN_00bd4b24();
  operator_delete(param_1);
  return;
}


// ===== 00bd4bf8  FUN_00bd4bf8 =====

void FUN_00bd4bf8(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  FUN_00bd3390(param_1,param_3,0x10014);
  *param_1 = &PTR_FUN_00d48790;
  lVar1 = *param_2;
  param_1[0x23] = lVar1;
  if (lVar1 != 0) {
    FUN_00d0f740(1,lVar1 + 8);
  }
  lVar2 = param_2[4];
  lVar1 = param_2[3];
  lVar3 = param_2[1];
  param_1[0x25] = param_2[2];
  param_1[0x24] = lVar3;
  param_1[0x27] = lVar2;
  param_1[0x26] = lVar1;
  return;
}


// ===== 00bd4c60  FUN_00bd4c60 =====

ulong FUN_00bd4c60(long *param_1,ushort *param_2,ulong param_3,long param_4)

{
  ushort uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined4 local_4c;
  long *local_48;
  long **pplStack_40;
  undefined1 *local_38;
  
  if (param_3 - 0x10015 < 0xfffffffffffeffef) {
    (**(code **)(*param_1 + 0x58))(param_1,0x5a);
    param_3 = 0xffffffff;
  }
  else if (param_1[0x1e] == 0) {
    uVar1 = param_2[1] >> 8;
    uVar5 = (ulong)((uint)uVar1 | (param_2[1] & 0xff00ff) << 8);
    if ((*param_2 & 0xc0) == 0) {
      uVar4 = uVar5 + 0x14;
      lVar2 = 0;
    }
    else {
      uVar4 = uVar5 + 4;
      lVar2 = 0;
      if ((uVar1 & 3) != 0) {
        lVar2 = 4 - (uVar5 & 3);
      }
    }
    if (param_3 == uVar4) {
      FUN_00bd3894(param_1,param_2,param_3);
      local_4c = 0;
      FUN_00bd3894(param_1,&local_4c,lVar2);
      uVar3 = FUN_00bd3768(param_1);
      if ((int)uVar3 < 1) {
        param_1[0x1e] = 0;
        param_3 = (ulong)uVar3;
      }
      else {
        uVar6 = *(undefined8 *)(param_4 + 8);
        puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
        local_80 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
        local_90 = &DAT_aaaaaaaaaaaaaaaa;
        local_60 = &DAT_aaaaaaaaaaaaaaaa;
        uVar4 = (**(code **)(*(long *)param_1[0x25] + 0x10))();
        uVar5 = uVar4 / 1000;
        if (499 < uVar4 % 1000) {
          uVar5 = uVar5 + 1;
        }
        if ((uVar4 & 0x8000000000000000) != 0) {
          uVar5 = -(-uVar4 / 1000) - (ulong)(500 < -uVar4 % 1000);
        }
        FUN_007b6444(&local_90,uVar6,uVar5);
        pplStack_40 = &local_48;
        local_48 = param_1;
        local_38 = (undefined1 *)&local_90;
        FUN_007b6160(param_1 + 0xe,&pplStack_40,FUN_00bd328c);
        FUN_007b643c(&local_80);
      }
    }
    else {
      param_3 = 0xffffffff;
    }
  }
  return param_3 & 0xffffffff;
}


// ===== 00bd4e1c  FUN_00bd4e1c =====

ulong FUN_00bd4e1c(long *param_1,long param_2,ulong param_3)

{
  ushort *puVar1;
  ushort uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  (**(code **)(*param_1 + 0x18))(&local_a0);
  if (param_3 < 4) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    uVar4 = param_3;
    do {
      puVar1 = (ushort *)(param_2 + uVar8);
      uVar2 = puVar1[1] >> 8;
      uVar5 = (ulong)((uint)uVar2 | (puVar1[1] & 0xff00ff) << 8);
      if ((*puVar1 & 0xc0) == 0) {
        lVar6 = uVar5 + 0x14;
        lVar7 = 0;
      }
      else {
        lVar6 = uVar5 + 4;
        lVar7 = 0;
        if ((uVar2 & 3) != 0) {
          lVar7 = 4 - (uVar5 & 3);
        }
      }
      uVar5 = lVar6 + lVar7;
      if (uVar4 < uVar5) break;
      if (param_3 <= uVar8) {
        lVar6 = 0;
        puVar1 = (ushort *)0x0;
      }
      puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
      local_c0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_b0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
      local_d0 = &DAT_aaaaaaaaaaaaaaaa;
      uVar3 = (**(code **)(*(long *)param_1[0x25] + 0x10))();
      FUN_00bd3350(&local_d0,puVar1,lVar6,&local_a0,uVar3,1,0,0);
      FUN_00897eec(param_1,&local_d0);
      uVar8 = uVar5 + uVar8;
      uVar4 = param_3 - uVar8;
    } while (3 < uVar4);
  }
  if ((long)local_90 < 0) {
    operator_delete(local_a0);
  }
  return uVar8;
}


// ===== 00bd4f70  FUN_00bd4f70 =====

void FUN_00bd4f70(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[0x23];
  *param_1 = &PTR_FUN_00d48790;
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar2 + 1), iVar1 == 1)) {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  FUN_00bd355c(param_1);
  return;
}


// ===== 00bd4fd0  FUN_00bd4fd0 =====

void FUN_00bd4fd0(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[0x23];
  *param_1 = &PTR_FUN_00d48790;
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar2 + 1), iVar1 == 1)) {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  FUN_00bd355c(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00bd503c  FUN_00bd503c =====

/* WARNING: Removing unreachable block (ram,0x00bd5ed0) */
/* WARNING: Removing unreachable block (ram,0x00bd61e0) */
/* WARNING: Removing unreachable block (ram,0x00bd5528) */
/* WARNING: Removing unreachable block (ram,0x00bd5810) */
/* WARNING: Removing unreachable block (ram,0x00bd5fb0) */
/* WARNING: Removing unreachable block (ram,0x00bd5bb4) */
/* WARNING: Removing unreachable block (ram,0x00bd6268) */
/* WARNING: Removing unreachable block (ram,0x00bd5e08) */
/* WARNING: Removing unreachable block (ram,0x00bd6294) */
/* WARNING: Removing unreachable block (ram,0x00bd613c) */
/* WARNING: Removing unreachable block (ram,0x00bd6168) */

void FUN_00bd503c(int *param_1,long *param_2,undefined8 param_3,undefined8 param_4,long param_5,
                 long *param_6)

{
  undefined1 *puVar1;
  char ****ppppcVar2;
  long lVar3;
  char *******pppppppcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char ******ppppppcVar9;
  char **ppcVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  ulong uVar14;
  char *******pppppppcVar15;
  long lVar16;
  undefined8 uVar17;
  char *****pppppcVar18;
  char *pcVar19;
  ulong uVar20;
  undefined *puVar21;
  long lVar22;
  long lVar23;
  char ******ppppppcVar24;
  undefined1 auVar25 [12];
  undefined1 *local_360;
  undefined1 *puStack_358;
  undefined1 *local_350;
  undefined5 uStack_348;
  undefined2 uStack_343;
  uint uStack_341;
  undefined1 uStack_33d;
  undefined1 uStack_33c;
  undefined1 uStack_33b;
  undefined1 uStack_33a;
  undefined1 uStack_339;
  char ******ppppppcStack_338;
  char ******ppppppcStack_330;
  char ******local_328;
  undefined1 *local_320;
  undefined1 uStack_311;
  char *****local_310;
  char *****local_308;
  char **local_300;
  char *****local_2f8;
  char *local_2f0;
  char *****pppppcStack_2e8;
  undefined8 *local_2e0;
  char **local_2d8;
  char *****local_2d0;
  undefined8 **ppuStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  char *local_2b0;
  char *pcStack_2a8;
  undefined8 *local_2a0;
  char ******local_290;
  char ******ppppppcStack_288;
  char ******local_280;
  char ******local_270;
  ulong local_268;
  char **local_260;
  char ******local_258;
  undefined1 *puStack_250;
  undefined1 *local_248;
  char *****local_240;
  undefined1 *puStack_238;
  undefined1 *local_230;
  undefined1 *puStack_228;
  undefined8 local_220;
  undefined1 *local_218;
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
  char *****pppppcStack_198;
  undefined1 *local_190;
  undefined1 *puStack_188;
  undefined1 *puStack_180;
  undefined1 *puStack_178;
  undefined1 *local_170;
  char ******local_160;
  undefined8 uStack_158;
  undefined1 *local_150;
  char ******ppppppcStack_148;
  undefined8 local_140;
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
  undefined1 *local_88;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  lVar22 = *param_2;
  lVar23 = param_2[1];
  if (lVar22 != lVar23) {
    do {
      iVar13 = FUN_00891b68(lVar22);
      if ((iVar13 != 4) && (iVar13 = FUN_00891b68(lVar22), iVar13 != 1)) {
        FUN_00894eec(&local_160,param_2,param_5,lVar22);
        if ((char)local_88 == '\x01') {
          FUN_00890cb8(&local_160);
        }
        else {
          local_90 = &DAT_aaaaaaaaaaaaaaaa;
          ppppppcStack_148 = (char ******)&DAT_aaaaaaaaaaaaaaaa;
          local_150 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
          local_140 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
          local_130 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_118 = &DAT_aaaaaaaaaaaaaaaa;
          local_120 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
          local_110 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
          local_100 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
          local_f0 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
          local_e0 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
          local_d0 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
          local_c0 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
          local_b0 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
          local_a0 = &DAT_aaaaaaaaaaaaaaaa;
          uStack_158 = &DAT_aaaaaaaaaaaaaaaa;
          local_160 = (char ******)&DAT_aaaaaaaaaaaaaaaa;
          FUN_00890830(&local_160,lVar22);
          puStack_228 = &DAT_aaaaaaaaaaaaaaaa;
          local_230 = &DAT_aaaaaaaaaaaaaaaa;
          local_218 = &DAT_aaaaaaaaaaaaaaaa;
          local_220 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_238 = &DAT_aaaaaaaaaaaaaaaa;
          local_240 = (char *****)&DAT_aaaaaaaaaaaaaaaa;
          (**(code **)(*param_6 + 0x10))(&local_240,param_6,param_3,param_4,&local_160);
          iVar13 = (int)local_240;
          if ((int)local_240 == 0) {
            if (((ulong)local_218 & 0x100) == 0) goto LAB_00bd6390;
            uStack_158 = (undefined1 *)(ulong)CONCAT14(local_218._0_1_,(undefined4)uStack_158);
            FUN_00bde1ac(param_5,&local_160);
          }
          else {
            *param_1 = (int)local_240;
            if ((long)puStack_228 < 0) {
              FUN_005478d8(param_1 + 2,puStack_238,local_230);
            }
            else {
              *(undefined1 **)(param_1 + 4) = local_230;
              *(undefined1 **)(param_1 + 2) = puStack_238;
              *(undefined1 **)(param_1 + 6) = puStack_228;
            }
            iVar11 = (int)local_220;
            param_1[8] = iVar11;
            *(undefined4 *)((long)param_1 + 0x23) = local_220._3_4_;
          }
          if ((long)puStack_228 < 0) {
            operator_delete(puStack_238);
          }
          FUN_00890cb8(&local_160);
          if (iVar13 != 0) goto LAB_00bd6330;
        }
      }
      lVar22 = lVar22 + 0xd8;
    } while (lVar22 != lVar23);
    lVar22 = *param_2;
    lVar23 = param_2[1];
  }
  if (lVar22 != lVar23) {
    puVar21 = PTR_DAT_00d521b8;
    do {
      iVar13 = FUN_00891b68(lVar22);
      if (iVar13 == 4) {
        FUN_00894eec(&local_160,param_2,param_5,lVar22);
        if ((char)local_88 == '\x01') {
          FUN_00890cb8(&local_160);
          goto LAB_00bd5254;
        }
        local_170 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_228 = &DAT_aaaaaaaaaaaaaaaa;
        local_230 = &DAT_aaaaaaaaaaaaaaaa;
        local_218 = &DAT_aaaaaaaaaaaaaaaa;
        local_220 = &DAT_aaaaaaaaaaaaaaaa;
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
        pppppcStack_198 = (char *****)&DAT_aaaaaaaaaaaaaaaa;
        puStack_1a0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_188 = &DAT_aaaaaaaaaaaaaaaa;
        local_190 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_178 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_180 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_238 = &DAT_aaaaaaaaaaaaaaaa;
        local_240 = (char *****)&DAT_aaaaaaaaaaaaaaaa;
        FUN_00890830(&local_240,lVar22);
        lVar16 = FUN_00bd8268(param_2,&local_240);
        if (lVar16 == 0) {
          pppppppcVar15 = (char *******)&local_240;
LAB_00bd520c:
          FUN_00890cb8(pppppppcVar15);
          goto LAB_00bd5210;
        }
        uStack_158 = &DAT_aaaaaaaaaaaaaaaa;
        local_160 = (char ******)&DAT_aaaaaaaaaaaaaaaa;
        ppppppcStack_148 = (char ******)&DAT_aaaaaaaaaaaaaaaa;
        local_150 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
        local_140 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
        local_130 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_118 = &DAT_aaaaaaaaaaaaaaaa;
        local_120 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
        local_110 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
        local_100 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
        local_f0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
        local_e0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
        local_d0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
        local_c0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
        local_b0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
        local_a0 = &DAT_aaaaaaaaaaaaaaaa;
        local_88 = &DAT_aaaaaaaaaaaaaaaa;
        local_90 = &DAT_aaaaaaaaaaaaaaaa;
        FUN_00894eec(&local_160,param_2,param_5,lVar16);
        if (((ulong)local_88 & 1) == 0) {
          uVar14 = FUN_004022fc();
          if ((uVar14 & 1) == 0) {
            FUN_00623bb0(&DAT_001f4eff,"../../pc/codec_vendor.cc",0x6ba,"Couldn\'t find matching ",
                         lVar16 + 0x10," codec.");
            iVar13 = 5;
          }
          else {
            iVar13 = 5;
          }
        }
        else {
          puStack_358 = (undefined1 *)0x0;
          local_350 = (undefined1 *)0x0;
          local_360 = (undefined1 *)0x0;
          FUN_005f55c4(&local_360,0x16,uStack_158._4_4_);
          FUN_005d3510(&local_258,puVar21);
          local_290 = (char ******)&local_258;
          local_270 = &pppppcStack_198;
          lVar16 = FUN_0088c894(&local_270,&local_258,&DAT_001f94c3,&local_290,&local_2b0);
          if (*(char *)(lVar16 + 0x4f) < '\0') {
            operator_delete(*(void **)(lVar16 + 0x38));
            *(undefined8 *)(lVar16 + 0x38) = 0;
            *(undefined8 *)(lVar16 + 0x40) = 0;
            *(undefined8 *)(lVar16 + 0x48) = 0;
          }
          *(undefined1 **)(lVar16 + 0x48) = local_350;
          *(undefined1 **)(lVar16 + 0x40) = puStack_358;
          *(undefined1 **)(lVar16 + 0x38) = local_360;
          local_350 = (undefined1 *)((ulong)local_350 & 0xffffffffffffff);
          local_360 = (undefined1 *)((ulong)local_360 & 0xffffffffffffff00);
          if (((long)local_248 < 0) && (operator_delete(local_258), (long)local_350 < 0)) {
            operator_delete(local_360);
          }
          uStack_348 = 0xaaaaaaaaaa;
          uStack_343 = 0xaaaa;
          local_350 = &DAT_aaaaaaaaaaaaaaaa;
          ppppppcStack_338 = (char ******)&DAT_aaaaaaaaaaaaaaaa;
          uStack_341 = 0xaaaaaaaa;
          uStack_33d = 0xaa;
          uStack_33c = 0xaa;
          uStack_33b = 0xaa;
          uStack_33a = 0xaa;
          uStack_339 = 0xaa;
          puStack_358 = &DAT_aaaaaaaaaaaaaaaa;
          local_360 = &DAT_aaaaaaaaaaaaaaaa;
          (**(code **)(*param_6 + 0x10))(&local_360,param_6,param_3,param_4,&local_240);
          if ((int)local_360 == 0) {
            if (((ulong)ppppppcStack_338 & 0x100) == 0) goto LAB_00bd6390;
            uVar14 = *(ulong *)(param_5 + 8);
            puStack_238 = (undefined1 *)(ulong)CONCAT14(ppppppcStack_338._0_1_,(int)puStack_238);
            if (uVar14 < *(ulong *)(param_5 + 0x10)) {
              if (uVar14 == 0) goto LAB_00bd637c;
              FUN_00890830(uVar14,&local_240);
              lVar16 = uVar14 + 0xd8;
            }
            else {
              lVar16 = FUN_00b14350(param_5,&local_240);
            }
            *(long *)(param_5 + 8) = lVar16;
            FUN_00bde244(param_5);
            iVar13 = 0;
          }
          else {
            *param_1 = (int)local_360;
            if ((char)uStack_341 < '\0') {
              FUN_005478d8(param_1 + 2,puStack_358,local_350);
            }
            else {
              *(undefined1 **)(param_1 + 4) = local_350;
              *(undefined1 **)(param_1 + 2) = puStack_358;
              *(ulong *)(param_1 + 6) = CONCAT17((char)uStack_341,CONCAT25(uStack_343,uStack_348));
            }
            iVar13 = 1;
            param_1[8] = CONCAT13(uStack_33d,uStack_341._1_3_);
            *(uint *)((long)param_1 + 0x23) =
                 CONCAT13(uStack_33a,CONCAT12(uStack_33b,CONCAT11(uStack_33c,uStack_33d)));
          }
          if ((char)uStack_341 < '\0') {
            operator_delete(puStack_358);
          }
        }
        if ((char)local_88 == '\x01') {
          FUN_00890cb8(&local_160);
        }
LAB_00bd62d0:
        FUN_00890cb8(&local_240);
        if ((iVar13 != 0) && (iVar13 != 5)) goto LAB_00bd6330;
      }
      else {
LAB_00bd5254:
        iVar13 = FUN_00891b68(lVar22);
        if (iVar13 == 1) {
          FUN_00894eec(&local_160,param_2,param_5,lVar22);
          if ((char)local_88 == '\x01') {
            pppppppcVar15 = &local_160;
            goto LAB_00bd520c;
          }
          local_170 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_228 = &DAT_aaaaaaaaaaaaaaaa;
          local_230 = &DAT_aaaaaaaaaaaaaaaa;
          local_218 = &DAT_aaaaaaaaaaaaaaaa;
          local_220 = &DAT_aaaaaaaaaaaaaaaa;
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
          pppppcStack_198 = (char *****)&DAT_aaaaaaaaaaaaaaaa;
          puStack_1a0 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_188 = &DAT_aaaaaaaaaaaaaaaa;
          local_190 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_178 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_180 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_238 = &DAT_aaaaaaaaaaaaaaaa;
          local_240 = (char *****)&DAT_aaaaaaaaaaaaaaaa;
          FUN_00890830(&local_240,lVar22);
          local_270 = (char ******)0x0;
          local_268 = 0;
          local_260 = (char **)0x0;
          local_290 = (char ******)0x0;
          ppppppcStack_288 = (char ******)0x0;
          local_280 = (char ******)0x0;
          local_320 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_358 = &DAT_aaaaaaaaaaaaaaaa;
          local_360 = &DAT_aaaaaaaaaaaaaaaa;
          uStack_348 = 0xaaaaaaaaaa;
          uStack_343 = 0xaaaa;
          local_350 = &DAT_aaaaaaaaaaaaaaaa;
          ppppppcStack_338 = (char ******)&DAT_aaaaaaaaaaaaaaaa;
          uStack_341 = 0xaaaaaaaa;
          uStack_33d = 0xaa;
          uStack_33c = 0xaa;
          uStack_33b = 0xaa;
          uStack_33a = 0xaa;
          uStack_339 = 0xaa;
          local_328 = (char ******)&DAT_aaaaaaaaaaaaaaaa;
          ppppppcStack_330 = (char ******)&DAT_aaaaaaaaaaaaaaaa;
          FUN_005d3510(&local_160,PTR_DAT_00d521c0);
          uVar14 = FUN_00891570(&local_240,&local_160,&local_270);
          if ((uVar14 & 1) == 0) {
            if (((int)puStack_238 == 0) && (uVar14 = FUN_004022fc(), (uVar14 & 1) == 0)) {
              local_2b0 = "../../pc/codec_vendor.cc";
              pcStack_2a8 = (char *)0x412;
              local_2a0 = &local_2c0;
              local_300 = &local_2b0;
              local_308 = (char *****)0x1b2b40;
              FUN_00b671bc(&local_258,&local_240);
              if ((long)local_248 < 0) {
                FUN_005478d8(&local_160,local_258,puStack_250);
                ppppppcStack_148 = &local_308;
                if ((long)local_248 < 0) {
                  operator_delete(local_258);
                }
              }
              else {
                uStack_158 = puStack_250;
                local_160 = local_258;
                local_150 = local_248;
                ppppppcStack_148 = &local_308;
              }
              FUN_00623bb0(&DAT_002258de,*ppppppcStack_148[1],
                           *(undefined4 *)(ppppppcStack_148[1] + 1),*ppppppcStack_148,&local_160,
                           " is missing an associated payload type parameter.");
            }
            local_360 = (undefined1 *)((ulong)local_360 & 0xffffffff00000000);
            uStack_33a = 0;
            local_328 = local_280;
            local_350 = (undefined1 *)0x0;
            uStack_348 = 0;
            puStack_358 = (undefined1 *)0x0;
            uStack_343 = 0;
            uStack_341 = 0;
            uStack_33d = 0;
            uStack_33c = 0;
            ppppppcStack_330 = ppppppcStack_288;
            ppppppcStack_338 = local_290;
            local_320 = (undefined1 *)CONCAT71(local_320._1_7_,1);
          }
          else {
            uVar14 = local_268;
            pppppppcVar15 = (char *******)local_270;
            if (-1 < (long)local_260) {
              uVar14 = (ulong)local_260 >> 0x38;
              pppppppcVar15 = &local_270;
            }
            pcStack_2a8 = &DAT_aaaaaaaaaaaaaaaa;
            local_2b0 = &DAT_aaaaaaaaaaaaaaaa;
            local_2a0 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
            FUN_006252b4(&local_2b0,pppppppcVar15,uVar14,0x2f);
            if ((ulong)((long)pcStack_2a8 - (long)local_2b0) < 0x11) {
              local_360 = (undefined1 *)((ulong)local_360 & 0xffffffff00000000);
              local_350 = (undefined1 *)0x0;
              uStack_348 = 0;
              puStack_358 = (undefined1 *)0x0;
              uStack_343 = 0;
              uStack_341 = 0;
              uStack_33d = 0;
              uStack_33c = 0;
              uStack_33a = 0;
              local_328 = local_280;
              ppppppcStack_330 = ppppppcStack_288;
              ppppppcStack_338 = local_290;
              local_290 = (char ******)0x0;
              ppppppcStack_288 = (char ******)0x0;
              local_280 = (char ******)0x0;
              local_320 = (undefined1 *)CONCAT71(local_320._1_7_,1);
            }
            else {
              pppppppcVar15 = (char *******)ppppppcStack_288;
              if (pcStack_2a8 != local_2b0) {
                lVar16 = 0;
                uVar14 = 0;
                do {
                  uStack_2b8 = *(undefined8 *)(local_2b0 + lVar16 + 8);
                  local_2c0 = *(undefined8 *)(local_2b0 + lVar16);
                  auVar25 = FUN_00675340(local_2c0,uStack_2b8,10);
                  uVar20 = auVar25._0_8_ & 0xffffffff | 0x100000000;
                  if ((auVar25._8_4_ & (uint)(auVar25._0_8_ + 0x80000000 >> 0x20 == 0)) == 0) {
                    uVar20 = 0;
                  }
                  if (uVar20 >> 0x20 == 0) {
                    uVar14 = FUN_004022fc();
                    if ((uVar14 & 1) == 0) {
                      local_308 = (char *****)0x1e94be;
                      local_300 = (char **)0x49a;
                      local_2f8 = (char *****)&local_310;
                      pppppcStack_2e8 = (char *****)&local_308;
                      local_2f0 = "Couldn\'t convert payload type ";
                      local_2e0 = &local_2c0;
                      local_2d8 = &local_2f0;
                      ppuStack_2c8 = &local_2e0;
                      local_2d0 = (char *****)0x1dac16;
                      FUN_00b671bc(&local_258,&local_240);
                      if ((long)local_248 < 0) {
                        FUN_005478d8(&local_160,local_258,puStack_250);
                        ppppppcStack_148 = &local_2d0;
                        if ((long)local_248 < 0) {
                          operator_delete(local_258);
                        }
                      }
                      else {
                        uStack_158 = puStack_250;
                        local_160 = local_258;
                        local_150 = local_248;
                        ppppppcStack_148 = &local_2d0;
                      }
                      pppppcVar18 = (char *****)ppppppcStack_148[1][1];
                      ppppcVar2 = pppppcVar18[1];
                      FUN_00623bb0(&DAT_00257ff7,*ppppcVar2,*(undefined4 *)(ppppcVar2 + 1),
                                   *pppppcVar18,*ppppppcStack_148[1],*ppppppcStack_148,&local_160,
                                   " to an integer.");
                    }
                    pcVar19 = (char *)operator_new(0x28);
                    uVar8 = s_RED_codec_with_non_integer_argum_001e94d7._24_8_;
                    uVar7 = s_RED_codec_with_non_integer_argum_001e94d7._16_8_;
                    uVar6 = s_RED_codec_with_non_integer_argum_001e94d7._8_8_;
                    uVar5 = s_RED_codec_with_non_integer_argum_001e94d7._0_8_;
                    if (pcVar19 + 0x23 < pcVar19) {
LAB_00bd63b8:
                    /* WARNING: Subroutine does not return */
                      std::__Cr::__libcpp_verbose_abort
                                ("%s",
                                 "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
                                );
                    }
                    if ((pcVar19 < "ED codec with non-integer argument") &&
                       ("RED codec with non-integer argument" < pcVar19 + 0x23)) {
LAB_00bd63cc:
                    /* WARNING: Subroutine does not return */
                      std::__Cr::__libcpp_verbose_abort
                                ("%s",
                                 "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                                );
                    }
                    pcVar19[0x1f] = 'm';
                    pcVar19[0x20] = 'e';
                    pcVar19[0x21] = 'n';
                    pcVar19[0x22] = 't';
                    uVar17 = 0x23;
                    *(undefined8 *)(pcVar19 + 8) = uVar6;
                    *(undefined8 *)pcVar19 = uVar5;
                    *(undefined8 *)(pcVar19 + 0x18) = uVar8;
                    *(undefined8 *)(pcVar19 + 0x10) = uVar7;
                    pcVar19[0x23] = '\0';
LAB_00bd601c:
                    local_360 = (undefined1 *)CONCAT44(local_360._4_4_,10);
                    FUN_005478d8(&puStack_358,pcVar19,uVar17);
                    uStack_341 = uStack_341 & 0xff;
                    uStack_33d = 0;
                    uStack_33c = 0;
                    uStack_33a = 0;
                    ppppppcStack_338 = (char ******)((ulong)ppppppcStack_338 & 0xffffffffffffff00);
                    local_320 = (undefined1 *)((ulong)local_320 & 0xffffffffffffff00);
                    operator_delete(pcVar19);
                    goto LAB_00bd6044;
                  }
                  local_310 = (char *****)FUN_008927d0(param_2,uVar20 & 0xffffffff);
                  if ((char ******)local_310 == (char ******)0x0) {
                    uVar14 = FUN_004022fc();
                    if ((uVar14 & 1) == 0) {
                      local_308 = (char *****)0x1e94be;
                      local_300 = (char **)0x4f2;
                      local_2f8 = (char *****)&uStack_311;
                      pppppcStack_2e8 = (char *****)&local_308;
                      local_2f0 = "Couldn\'t find associated codec with payload type ";
                      local_2e0 = (undefined8 *)(uVar20 & 0xffffffff);
                      local_2d8 = &local_2f0;
                      ppuStack_2c8 = &local_2e0;
                      local_2d0 = (char *****)0x1c4328;
                      FUN_00b671bc(&local_258,&local_240);
                      if ((long)local_248 < 0) {
                        FUN_005478d8(&local_160,local_258,puStack_250);
                        ppppppcStack_148 = &local_2d0;
                        if ((long)local_248 < 0) {
                          operator_delete(local_258);
                        }
                      }
                      else {
                        uStack_158 = puStack_250;
                        local_160 = local_258;
                        local_150 = local_248;
                        ppppppcStack_148 = &local_2d0;
                      }
                      pppppcVar18 = (char *****)ppppppcStack_148[1][1];
                      ppppcVar2 = pppppcVar18[1];
                      FUN_00623bb0(&DAT_00257ffe,*ppppcVar2,*(undefined4 *)(ppppcVar2 + 1),
                                   *pppppcVar18,*(undefined4 *)ppppppcStack_148[1],*ppppppcStack_148
                                   ,&local_160,&DAT_001ea377);
                    }
                    pcVar19 = (char *)operator_new(0x28);
                    uVar8 = s_RED_codec_pointing_to_nonexisten_001aa8c3._24_8_;
                    uVar7 = s_RED_codec_pointing_to_nonexisten_001aa8c3._16_8_;
                    uVar6 = s_RED_codec_pointing_to_nonexisten_001aa8c3._8_8_;
                    uVar5 = s_RED_codec_pointing_to_nonexisten_001aa8c3._0_8_;
                    if (pcVar19 + 0x24 < pcVar19) goto LAB_00bd63b8;
                    if ((pcVar19 < "ED codec pointing to nonexistent PT") &&
                       ("RED codec pointing to nonexistent PT" < pcVar19 + 0x24)) goto LAB_00bd63cc;
                    pcVar19[0x24] = '\0';
                    pcVar19[0x20] = 't';
                    pcVar19[0x21] = ' ';
                    pcVar19[0x22] = 'P';
                    pcVar19[0x23] = 'T';
                    *(undefined8 *)(pcVar19 + 8) = uVar6;
                    *(undefined8 *)pcVar19 = uVar5;
                    *(undefined8 *)(pcVar19 + 0x18) = uVar8;
                    *(undefined8 *)(pcVar19 + 0x10) = uVar7;
                    uVar17 = 0x24;
                    goto LAB_00bd601c;
                  }
                  if (ppppppcStack_288 < local_280) {
                    if ((char *******)ppppppcStack_288 == (char *******)0x0) goto LAB_00bd637c;
                    pppppppcVar15 = (char *******)(ppppppcStack_288 + 1);
                    *ppppppcStack_288 = local_310;
                  }
                  else {
                    pppppppcVar15 = (char *******)FUN_00bdae20(&local_290,&local_310);
                  }
                  uVar14 = uVar14 + 1;
                  lVar16 = lVar16 + 0x10;
                  ppppppcStack_288 = (char ******)pppppppcVar15;
                } while (uVar14 < (ulong)((long)pcStack_2a8 - (long)local_2b0 >> 4));
              }
              local_350 = (undefined1 *)0x0;
              uStack_348 = 0;
              puStack_358 = (undefined1 *)0x0;
              uStack_343 = 0;
              uStack_341 = 0;
              uStack_33d = 0;
              uStack_33c = 0;
              ppppppcStack_338 = local_290;
              local_360 = (undefined1 *)((ulong)local_360 & 0xffffffff00000000);
              uStack_33a = 0;
              local_328 = local_280;
              ppppppcStack_288 = (char ******)0x0;
              local_280 = (char ******)0x0;
              local_290 = (char ******)0x0;
              local_320 = (undefined1 *)CONCAT71(local_320._1_7_,1);
              ppppppcStack_330 = (char ******)pppppppcVar15;
            }
LAB_00bd6044:
            if (local_2b0 != (char *)0x0) {
              uVar14 = (ulong)(((long)local_2b0 - (long)pcStack_2a8 << 0x3c) -
                              ((long)local_2b0 - (long)pcStack_2a8)) >> 4;
              if ((ulong)(pcStack_2a8 + (-0x10 - ((long)pcStack_2a8 << 0x3c))) >> 4 <= uVar14) {
                uVar14 = (ulong)(pcStack_2a8 + (-0x10 - ((long)pcStack_2a8 << 0x3c))) >> 4;
              }
              pcVar19 = pcStack_2a8;
              if ((1 < uVar14) &&
                 ((((int)local_2b0 - (int)pcStack_2a8 | -(int)pcStack_2a8) & 0xfU) == 0)) {
                uVar14 = uVar14 & 0xffffffffffffffe;
                pcVar19 = pcStack_2a8 + uVar14 * -0x10;
                do {
                  uVar14 = uVar14 - 2;
                } while (uVar14 != 0);
              }
              while (pcVar19 != local_2b0) {
                pcVar19 = pcVar19 + -0x10;
                if (pcVar19 == (char *)0x0) goto LAB_00bd6368;
              }
              pcStack_2a8 = local_2b0;
              operator_delete(local_2b0);
            }
            if ((char *******)local_290 != (char *******)0x0) {
              uVar20 = (ulong)((long)ppppppcStack_288 + (-8 - ((long)ppppppcStack_288 << 0x3d))) >>
                       3;
              uVar14 = (ulong)(((long)local_290 - (long)ppppppcStack_288 << 0x3d) -
                              ((long)local_290 - (long)ppppppcStack_288)) >> 3;
              if (uVar20 <= uVar14) {
                uVar14 = uVar20;
              }
              pppppppcVar15 = (char *******)ppppppcStack_288;
              if ((1 < uVar14) &&
                 ((((int)local_290 - (int)ppppppcStack_288 | -(int)ppppppcStack_288) & 7U) == 0)) {
                uVar14 = uVar14 & 0x1ffffffffffffffe;
                pppppppcVar15 = (char *******)(ppppppcStack_288 + -uVar14);
                do {
                  uVar14 = uVar14 - 2;
                } while (uVar14 != 0);
              }
              while (pppppppcVar15 != (char *******)local_290) {
                pppppppcVar15 = pppppppcVar15 + -1;
                if (pppppppcVar15 == (char *******)0x0) goto LAB_00bd6368;
              }
              ppppppcStack_288 = local_290;
              operator_delete(local_290);
            }
          }
          if ((long)local_260 < 0) {
            operator_delete(local_270);
            if ((int)local_360 == 0) goto LAB_00bd58a4;
LAB_00bd5864:
            *param_1 = (int)local_360;
            if ((char)uStack_341 < '\0') {
              FUN_005478d8(param_1 + 2,puStack_358,local_350);
            }
            else {
              *(undefined1 **)(param_1 + 4) = local_350;
              *(undefined1 **)(param_1 + 2) = puStack_358;
              *(ulong *)(param_1 + 6) = CONCAT17((char)uStack_341,CONCAT25(uStack_343,uStack_348));
            }
            iVar13 = 1;
            param_1[8] = CONCAT13(uStack_33d,uStack_341._1_3_);
            *(uint *)((long)param_1 + 0x23) =
                 CONCAT13(uStack_33a,CONCAT12(uStack_33b,CONCAT11(uStack_33c,uStack_33d)));
          }
          else {
            if ((int)local_360 != 0) goto LAB_00bd5864;
LAB_00bd58a4:
            ppppppcVar9 = ppppppcStack_330;
            puVar21 = PTR_DAT_00d521b8;
            if (((ulong)local_320 & 1) == 0) goto LAB_00bd6390;
            if (ppppppcStack_338 == ppppppcStack_330) {
              if (((int)puStack_238 == 0) && (uVar14 = FUN_004022fc(), (uVar14 & 1) == 0)) {
                local_270 = (char ******)0x1e94be;
                local_268 = 0x79a;
                local_260 = &local_2b0;
                ppppppcStack_288 = (char ******)&local_270;
                local_290 = (char ******)0x1b2b0e;
                FUN_00b671bc(&local_258,&local_240);
                if ((long)local_248 < 0) {
                  FUN_005478d8(&local_160,local_258,puStack_250);
                  ppppppcStack_148 = (char ******)&local_290;
                  if ((long)local_248 < 0) {
                    operator_delete(local_258);
                  }
                }
                else {
                  uStack_158 = puStack_250;
                  local_160 = local_258;
                  local_150 = local_248;
                  ppppppcStack_148 = (char ******)&local_290;
                }
                FUN_00623bb0(&DAT_001f6510,*ppppppcStack_148[1],
                             *(undefined4 *)(ppppppcStack_148[1] + 1),*ppppppcStack_148,&local_160);
              }
              ppppppcStack_148 = (char ******)&DAT_aaaaaaaaaaaaaaaa;
              local_150 = &DAT_aaaaaaaaaaaaaaaa;
              puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
              local_140 = &DAT_aaaaaaaaaaaaaaaa;
              uStack_158 = &DAT_aaaaaaaaaaaaaaaa;
              local_160 = (char ******)&DAT_aaaaaaaaaaaaaaaa;
              (**(code **)(*param_6 + 0x10))(&local_160,param_6,param_3,param_4,&local_240);
              if ((int)local_160 == 0) {
                if (((ulong)puStack_138 & 0x100) == 0) goto LAB_00bd6390;
                puStack_238 = (undefined1 *)(ulong)CONCAT14(puStack_138._0_1_,(int)puStack_238);
                FUN_00bde1ac(param_5,&local_240);
                iVar13 = 5;
              }
              else {
                *param_1 = (int)local_160;
                *(undefined1 **)(param_1 + 4) = local_150;
                *(undefined1 **)(param_1 + 2) = uStack_158;
                *(char *******)(param_1 + 6) = ppppppcStack_148;
                iVar11 = (int)local_140;
                iVar13 = 1;
                param_1[8] = iVar11;
                *(undefined4 *)((long)param_1 + 0x23) = local_140._3_4_;
              }
            }
            else if ((ulong)((long)ppppppcStack_330 - (long)ppppppcStack_338) < 9) {
              uVar14 = FUN_004022fc();
              if ((uVar14 & 1) == 0) {
                local_270 = (char ******)0x1e94be;
                local_268 = 0x80a;
                local_260 = &local_2b0;
                ppppppcStack_288 = (char ******)&local_270;
                local_290 = (char ******)0x1b8a36;
                FUN_00b671bc(&local_258,&local_240);
                puVar21 = PTR_DAT_00d521b8;
                if ((long)local_248 < 0) {
                  FUN_005478d8(&local_160,local_258,puStack_250);
                  ppppppcStack_148 = (char ******)&local_290;
                  if ((long)local_248 < 0) {
                    operator_delete(local_258);
                  }
                }
                else {
                  uStack_158 = puStack_250;
                  local_160 = local_258;
                  local_150 = local_248;
                  ppppppcStack_148 = (char ******)&local_290;
                }
                FUN_00623bb0(&DAT_001f6510,*ppppppcStack_148[1],
                             *(undefined4 *)(ppppppcStack_148[1] + 1),*ppppppcStack_148,&local_160);
                iVar13 = 5;
              }
              else {
                iVar13 = 5;
                puVar21 = PTR_DAT_00d521b8;
              }
            }
            else {
              local_270 = (char ******)0x0;
              local_268 = 0;
              local_260 = (char **)0x0;
              pppppppcVar15 = (char *******)ppppppcStack_338;
              do {
                ppppppcVar24 = *pppppppcVar15;
                uStack_158 = &DAT_aaaaaaaaaaaaaaaa;
                local_160 = (char ******)&DAT_aaaaaaaaaaaaaaaa;
                ppppppcStack_148 = (char ******)&DAT_aaaaaaaaaaaaaaaa;
                local_150 = &DAT_aaaaaaaaaaaaaaaa;
                puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
                local_140 = &DAT_aaaaaaaaaaaaaaaa;
                puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
                local_130 = &DAT_aaaaaaaaaaaaaaaa;
                puStack_118 = &DAT_aaaaaaaaaaaaaaaa;
                local_120 = &DAT_aaaaaaaaaaaaaaaa;
                puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
                local_110 = &DAT_aaaaaaaaaaaaaaaa;
                puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
                local_100 = &DAT_aaaaaaaaaaaaaaaa;
                puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
                local_f0 = &DAT_aaaaaaaaaaaaaaaa;
                puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
                local_e0 = &DAT_aaaaaaaaaaaaaaaa;
                puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
                local_d0 = &DAT_aaaaaaaaaaaaaaaa;
                puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
                local_c0 = &DAT_aaaaaaaaaaaaaaaa;
                puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
                local_b0 = &DAT_aaaaaaaaaaaaaaaa;
                puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
                local_a0 = &DAT_aaaaaaaaaaaaaaaa;
                local_88 = &DAT_aaaaaaaaaaaaaaaa;
                local_90 = &DAT_aaaaaaaaaaaaaaaa;
                FUN_00894eec(&local_160,param_2,param_5,ppppppcVar24);
                puVar12 = local_88;
                if (((ulong)local_88 & 1) == 0) {
                  uVar14 = FUN_004022fc();
                  if ((uVar14 & 1) == 0) {
                    FUN_00623bb0(&DAT_001f4eff,"../../pc/codec_vendor.cc",0x872,
                                 "Couldn\'t find matching ",ppppppcVar24 + 2," codec.");
                  }
                  FUN_00b0092c(param_1,10,"RED payload type lookup failed",0x1e);
                }
                else {
                  uVar14 = local_268;
                  if (((ulong)local_260 & 0x8000000000000000) == 0) {
                    uVar14 = (ulong)local_260 >> 0x38;
                  }
                  if ((uVar14 != 0) &&
                     (FUN_00547cac(&local_270,&DAT_001c7bbb,1), ((ulong)local_88 & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
                    std::__Cr::__libcpp_verbose_abort
                              ("%s",
                               "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                              );
                  }
                  local_258 = (char ******)0x0;
                  puStack_250 = (undefined1 *)0x0;
                  local_248 = (undefined1 *)0x0;
                  FUN_005f55c4(&local_258,0x16,uStack_158._4_4_);
                  puVar1 = puStack_250;
                  pppppppcVar4 = (char *******)local_258;
                  if (-1 < (long)local_248) {
                    puVar1 = (undefined1 *)((ulong)local_248 >> 0x38);
                    pppppppcVar4 = &local_258;
                  }
                  FUN_00547cac(&local_270,pppppppcVar4,puVar1);
                  if ((long)local_248 < 0) {
                    operator_delete(local_258);
                  }
                }
                if ((char)local_88 == '\x01') {
                  FUN_00890cb8(&local_160);
                }
                ppcVar10 = local_260;
                uVar14 = local_268;
                ppppppcVar24 = local_270;
                if (((ulong)puVar12 & 1) == 0) {
                  iVar13 = 1;
                  puVar21 = PTR_DAT_00d521b8;
                  goto LAB_00bd6178;
                }
                pppppppcVar15 = pppppppcVar15 + 1;
              } while (pppppppcVar15 != (char *******)ppppppcVar9);
              local_268 = 0;
              local_260 = (char **)0x0;
              local_270 = (char ******)0x0;
              FUN_005d3510(&local_160,PTR_DAT_00d521c0);
              local_290 = (char ******)&local_160;
              local_258 = &pppppcStack_198;
              lVar16 = FUN_0088c894(&local_258,&local_160,&DAT_001f94c3,&local_290,&local_2b0);
              if (*(char *)(lVar16 + 0x4f) < '\0') {
                operator_delete(*(void **)(lVar16 + 0x38));
              }
              *(char *******)(lVar16 + 0x38) = ppppppcVar24;
              *(ulong *)(lVar16 + 0x40) = uVar14;
              *(char ***)(lVar16 + 0x48) = ppcVar10;
              ppppppcStack_148 = (char ******)&DAT_aaaaaaaaaaaaaaaa;
              local_150 = &DAT_aaaaaaaaaaaaaaaa;
              puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
              local_140 = &DAT_aaaaaaaaaaaaaaaa;
              uStack_158 = &DAT_aaaaaaaaaaaaaaaa;
              local_160 = (char ******)&DAT_aaaaaaaaaaaaaaaa;
              (**(code **)(*param_6 + 0x10))(&local_160,param_6,param_3,param_4,&local_240);
              puVar21 = PTR_DAT_00d521b8;
              if ((int)local_160 == 0) {
                if (((ulong)puStack_138 & 0x100) == 0) {
LAB_00bd6390:
                    /* WARNING: Subroutine does not return */
                  std::__Cr::__libcpp_verbose_abort
                            ("%s",
                             "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                            );
                }
                uVar14 = *(ulong *)(param_5 + 8);
                puStack_238 = (undefined1 *)(ulong)CONCAT14(puStack_138._0_1_,(int)puStack_238);
                if (uVar14 < *(ulong *)(param_5 + 0x10)) {
                  if (uVar14 == 0) {
LAB_00bd637c:
                    /* WARNING: Subroutine does not return */
                    std::__Cr::__libcpp_verbose_abort
                              ("%s",
                               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                              );
                  }
                  FUN_00890830(uVar14,&local_240);
                  lVar16 = uVar14 + 0xd8;
                }
                else {
                  lVar16 = FUN_00b14350(param_5,&local_240);
                }
                *(long *)(param_5 + 8) = lVar16;
                FUN_00bde244(param_5);
                iVar13 = 0;
              }
              else {
                *param_1 = (int)local_160;
                *(undefined1 **)(param_1 + 4) = local_150;
                *(undefined1 **)(param_1 + 2) = uStack_158;
                *(char *******)(param_1 + 6) = ppppppcStack_148;
                iVar11 = (int)local_140;
                iVar13 = 1;
                param_1[8] = iVar11;
                *(undefined4 *)((long)param_1 + 0x23) = local_140._3_4_;
              }
LAB_00bd6178:
              if ((long)local_260 < 0) {
                operator_delete(local_270);
              }
            }
          }
          if ((((ulong)local_320 & 1) != 0) && ((char *******)ppppppcStack_338 != (char *******)0x0)
             ) {
            uVar20 = (ulong)((long)ppppppcStack_330 + (-8 - ((long)ppppppcStack_330 << 0x3d))) >> 3;
            uVar14 = (ulong)(((long)ppppppcStack_338 - (long)ppppppcStack_330 << 0x3d) -
                            ((long)ppppppcStack_338 - (long)ppppppcStack_330)) >> 3;
            if (uVar20 <= uVar14) {
              uVar14 = uVar20;
            }
            pppppppcVar15 = (char *******)ppppppcStack_330;
            if ((1 < uVar14) &&
               ((((int)ppppppcStack_338 - (int)ppppppcStack_330 | -(int)ppppppcStack_330) & 7U) == 0
               )) {
              uVar14 = uVar14 & 0x1ffffffffffffffe;
              pppppppcVar15 = (char *******)(ppppppcStack_330 + -uVar14);
              do {
                uVar14 = uVar14 - 2;
              } while (uVar14 != 0);
            }
            while (pppppppcVar15 != (char *******)ppppppcStack_338) {
              pppppppcVar15 = pppppppcVar15 + -1;
              if (pppppppcVar15 == (char *******)0x0) {
LAB_00bd6368:
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s",
                           "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                          );
              }
            }
            ppppppcStack_330 = ppppppcStack_338;
            operator_delete(ppppppcStack_338);
          }
          if ((char)uStack_341 < '\0') {
            operator_delete(puStack_358);
          }
          goto LAB_00bd62d0;
        }
      }
LAB_00bd5210:
      lVar22 = lVar22 + 0xd8;
    } while (lVar22 != lVar23);
  }
  FUN_00bde244(param_5);
  FUN_005ecd48(param_1);
LAB_00bd6330:
  if (*(long *)(lVar3 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00bd63e4  FUN_00bd63e4 =====

/* WARNING: Removing unreachable block (ram,0x00bd7584) */
/* WARNING: Removing unreachable block (ram,0x00bd75ac) */
/* WARNING: Removing unreachable block (ram,0x00bd6794) */
/* WARNING: Removing unreachable block (ram,0x00bd7288) */
/* WARNING: Removing unreachable block (ram,0x00bd73b4) */
/* WARNING: Removing unreachable block (ram,0x00bd73cc) */
/* WARNING: Removing unreachable block (ram,0x00bd6898) */
/* WARNING: Removing unreachable block (ram,0x00bd68ac) */
/* WARNING: Removing unreachable block (ram,0x00bd75d4) */
/* WARNING: Type propagation algorithm not settling */

void FUN_00bd63e4(int *param_1,long param_2,int *param_3,byte *param_4,long param_5,
                 undefined8 param_6)

{
  bool bVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined8 *******pppppppuVar4;
  size_t sVar5;
  int *__s2;
  long lVar6;
  byte bVar7;
  byte bVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 **ppuVar11;
  undefined *puVar12;
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  size_t sVar16;
  ulong uVar17;
  void *pvVar18;
  long *plVar19;
  long lVar20;
  ulong extraout_x1;
  undefined8 *puVar21;
  undefined1 *puVar22;
  undefined8 **ppuVar23;
  undefined8 **ppuVar24;
  undefined8 **ppuVar25;
  undefined8 **ppuVar26;
  long lVar27;
  undefined8 **ppuVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  undefined1 auVar31 [16];
  undefined1 auStack_400 [8];
  void *local_3f8;
  char cStack_3e1;
  undefined8 *******local_3d8;
  undefined8 ***pppuStack_3d0;
  char cStack_3c1;
  undefined8 ***local_3c0;
  undefined8 local_3b8;
  long local_3b0;
  undefined8 *puStack_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined1 local_390 [16];
  undefined8 *local_380;
  undefined8 *puStack_378;
  undefined1 *local_370;
  undefined8 **local_360;
  undefined8 **ppuStack_358;
  undefined8 **local_350;
  undefined1 auStack_348 [31];
  char cStack_329;
  undefined1 auStack_320 [8];
  void *local_318;
  char cStack_301;
  undefined1 auStack_2f8 [31];
  char local_2d9;
  undefined1 auStack_2d0 [8];
  void *local_2c8;
  char cStack_2b1;
  undefined1 auStack_2a8 [8];
  void *local_2a0;
  char cStack_289;
  undefined8 *******local_280;
  undefined1 *puStack_278;
  undefined1 *local_270;
  undefined8 *local_260;
  undefined8 *local_258;
  undefined8 local_250;
  undefined1 uStack_241;
  undefined8 *******local_240;
  undefined8 uStack_238;
  undefined1 *puStack_230;
  undefined1 *local_228;
  undefined8 local_220;
  undefined1 *puStack_218;
  undefined1 *puStack_210;
  undefined1 *puStack_208;
  undefined1 *local_200;
  undefined1 *puStack_1f8;
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
  undefined1 *puStack_190;
  undefined1 *puStack_188;
  undefined1 *local_180;
  undefined1 *puStack_178;
  undefined1 *puStack_170;
  undefined1 *local_168;
  undefined8 **local_160;
  undefined8 uStack_158;
  undefined8 **local_150;
  undefined1 *local_148;
  undefined8 local_140;
  undefined8 **ppuStack_138;
  undefined8 **local_130;
  undefined8 **local_128;
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
  undefined1 *local_88;
  long local_78;
  
  lVar9 = tpidr_el0;
  local_78 = *(long *)(lVar9 + 0x28);
  piVar2 = param_3 + 2;
  local_260 = (undefined8 *)0x0;
  local_258 = (undefined8 *)0x0;
  local_250 = 0;
  local_270 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_278 = &DAT_aaaaaaaaaaaaaaaa;
  local_280 = (undefined8 *******)&DAT_aaaaaaaaaaaaaaaa;
  if (*(char *)((long)param_3 + 0x1f) < '\0') {
    FUN_005478d8(&local_280,*(undefined8 *)(param_3 + 2),*(undefined8 *)(param_3 + 4));
  }
  else {
    puStack_278 = *(undefined1 **)(param_3 + 4);
    local_280 = *(undefined8 ********)piVar2;
    local_270 = *(undefined1 **)(param_3 + 6);
  }
  if (param_5 != 0) {
    bVar7 = *(byte *)(param_5 + 0x1f);
    puVar22 = *(undefined1 **)(param_5 + 0x10);
    if (-1 < (char)bVar7) {
      puVar22 = (undefined1 *)(ulong)bVar7;
    }
    puVar3 = puStack_278;
    if (-1 < (long)local_270) {
      puVar3 = (undefined1 *)((ulong)local_270 >> 0x38);
    }
    if (puVar22 == puVar3) {
      puVar21 = (undefined8 *)*(void **)(param_5 + 8);
      if (-1 < (char)bVar7) {
        puVar21 = (undefined8 *)(param_5 + 8);
      }
      pppppppuVar4 = local_280;
      if (-1 < (long)local_270) {
        pppppppuVar4 = &local_280;
      }
      iVar13 = memcmp(puVar21,pppppppuVar4,(size_t)puVar22);
      if (iVar13 == 0) {
        uStack_158 = (undefined8 **)&DAT_aaaaaaaaaaaaaaaa;
        local_160 = (undefined8 **)&DAT_aaaaaaaaaaaaaaaa;
        local_148 = &DAT_aaaaaaaaaaaaaaaa;
        local_150 = (undefined8 **)&DAT_aaaaaaaaaaaaaaaa;
        ppuStack_138 = (undefined8 **)&DAT_aaaaaaaaaaaaaaaa;
        local_140 = &DAT_aaaaaaaaaaaaaaaa;
        local_128 = (undefined8 **)&DAT_aaaaaaaaaaaaaaaa;
        local_130 = (undefined8 **)&DAT_aaaaaaaaaaaaaaaa;
        local_120 = &DAT_aaaaaaaaaaaaaaaa;
        lVar27 = FUN_00b174c8(param_5);
        FUN_00bdd774(&local_160,lVar27 + 0x110);
        iVar13 = (int)local_160;
        if ((int)local_160 == 0) {
          if (((ulong)local_120 & 1) == 0) goto LAB_00bd75c0;
          puVar22 = puStack_278;
          pppppppuVar4 = local_280;
          if (-1 < (long)local_270) {
            puVar22 = (undefined1 *)((ulong)local_270 >> 0x38);
            pppppppuVar4 = &local_280;
          }
          FUN_00bd503c(auStack_2a8,&ppuStack_138,pppppppuVar4,puVar22,&local_260,param_6);
          ppuVar26 = ppuStack_138;
          if (cStack_289 < '\0') {
            operator_delete(local_2a0);
            ppuVar26 = ppuStack_138;
          }
        }
        else {
          local_240 = (undefined8 *******)CONCAT44(local_240._4_4_,(int)local_160);
          puVar21 = (undefined8 *)((ulong)&local_160 | 8);
          puStack_230 = (undefined1 *)puVar21[1];
          uStack_238 = (undefined1 *)*puVar21;
          local_228 = (undefined1 *)puVar21[2];
          iVar14 = (int)local_140;
          *param_1 = (int)local_160;
          local_220._0_7_ = SUB87(local_140,0);
          if ((long)local_228 < 0) {
            FUN_005478d8(param_1 + 2,uStack_238,puStack_230);
            iVar14 = (int)local_220;
            *(undefined1 *)(param_1 + 10) = 0;
            param_1[8] = iVar14;
            *(undefined4 *)((long)param_1 + 0x23) = local_220._3_4_;
            *(undefined1 *)(param_1 + 0x10) = 0;
            ppuVar26 = ppuStack_138;
            if ((long)local_228 < 0) {
              operator_delete(uStack_238);
              ppuVar26 = ppuStack_138;
            }
          }
          else {
            *(undefined1 **)(param_1 + 4) = puStack_230;
            *(undefined1 **)(param_1 + 2) = uStack_238;
            *(undefined1 **)(param_1 + 6) = local_228;
            param_1[8] = iVar14;
            *(undefined4 *)((long)param_1 + 0x23) = local_140._3_4_;
            *(undefined1 *)(param_1 + 10) = 0;
            *(undefined1 *)(param_1 + 0x10) = 0;
            ppuVar26 = ppuStack_138;
          }
        }
        ppuStack_138 = ppuVar26;
        if ((((ulong)local_120 & 1) != 0) && (ppuVar28 = local_130, ppuVar26 != (undefined8 **)0x0))
        {
          while (ppuVar26 != ppuVar28) {
            ppuVar28 = ppuVar28 + -0x1b;
            if (ppuVar28 == (undefined8 **)0x0) goto LAB_00bd73d0;
            (*(code *)**ppuVar28)(ppuVar28);
          }
          local_130 = ppuVar26;
          operator_delete(ppuStack_138);
        }
        if (iVar13 != 0) goto LAB_00bd7160;
      }
    }
  }
  puVar22 = puStack_278;
  pppppppuVar4 = local_280;
  if (-1 < (long)local_270) {
    puVar22 = (undefined1 *)((ulong)local_270 >> 0x38);
    pppppppuVar4 = &local_280;
  }
  if (*param_3 == 0) {
    FUN_00bd503c(auStack_2d0,param_2 + 0x18,pppppppuVar4,puVar22,&local_260,param_6);
    if (cStack_2b1 < '\0') {
      operator_delete(local_2c8);
    }
    puVar22 = puStack_278;
    pppppppuVar4 = local_280;
    if (-1 < (long)local_270) {
      puVar22 = (undefined1 *)((ulong)local_270 >> 0x38);
      pppppppuVar4 = &local_280;
    }
    FUN_00bd503c(auStack_2f8,param_2,pppppppuVar4,puVar22,&local_260,param_6);
    if (local_2d9 < '\0') {
      puVar22 = auStack_2f8;
      goto LAB_00bd65cc;
    }
  }
  else {
    FUN_00bd503c(auStack_320,param_2 + 0x48,pppppppuVar4,puVar22,&local_260,param_6);
    if (cStack_301 < '\0') {
      operator_delete(local_318);
    }
    puVar22 = puStack_278;
    pppppppuVar4 = local_280;
    if (-1 < (long)local_270) {
      puVar22 = (undefined1 *)((ulong)local_270 >> 0x38);
      pppppppuVar4 = &local_280;
    }
    FUN_00bd503c(auStack_348,param_2 + 0x30,pppppppuVar4,puVar22,&local_260,param_6);
    if (cStack_329 < '\0') {
      puVar22 = auStack_348;
LAB_00bd65cc:
      operator_delete(*(void **)(puVar22 + 8));
    }
  }
  local_360 = (undefined8 **)0x0;
  ppuStack_358 = (undefined8 **)0x0;
  local_350 = (undefined8 **)0x0;
  local_370 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_378 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
  local_380 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
  if (*param_3 == 0) {
    FUN_00bd76fc(&local_380,param_2,param_3 + 8);
  }
  else {
    FUN_00bd78cc(&local_380,param_2);
  }
  if (*(long *)(param_3 + 0x1c) == *(long *)(param_3 + 0x1e)) {
    if (*(long *)(param_3 + 0x10) == *(long *)(param_3 + 0x12)) {
      if ((param_5 != 0) && ((*(byte *)(param_5 + 4) & 1) == 0)) {
        bVar7 = *(byte *)(param_5 + 0x1f);
        bVar8 = *(byte *)((long)param_3 + 0x1f);
        sVar16 = *(size_t *)(param_5 + 0x10);
        if (-1 < (char)bVar7) {
          sVar16 = (ulong)bVar7;
        }
        sVar5 = *(size_t *)(param_3 + 4);
        if (-1 < (char)bVar8) {
          sVar5 = (ulong)bVar8;
        }
        if (sVar16 == sVar5) {
          puVar21 = (undefined8 *)(param_5 + 8);
          puVar30 = (undefined8 *)*puVar21;
          if (-1 < (char)bVar7) {
            puVar30 = puVar21;
          }
          __s2 = *(int **)piVar2;
          if (-1 < (char)bVar8) {
            __s2 = piVar2;
          }
          iVar13 = memcmp(puVar30,__s2,sVar16);
          if (iVar13 == 0) {
            iVar13 = *param_3;
            lVar27 = FUN_00b174c8(param_5);
            if (lVar27 != 0) {
              plVar19 = (long *)FUN_00b174c8(param_5);
              iVar14 = (**(code **)(*plVar19 + 0x10))();
              if (iVar14 == iVar13) {
                lVar20 = FUN_00b174c8(param_5);
                lVar6 = *(long *)(lVar20 + 0x118);
                for (lVar27 = *(long *)(lVar20 + 0x110); lVar27 != lVar6; lVar27 = lVar27 + 0xd8) {
                  FUN_00894eec(&local_160,lVar20 + 0x110,&local_260,lVar27);
                  if (((ulong)local_88 & 1) != 0) {
                    FUN_00890cb8(&local_160);
                    ppuVar26 = ppuStack_358;
                    if (ppuStack_358 < local_350) {
                      if (ppuStack_358 == (undefined8 **)0x0) goto LAB_00bd76b4;
                      FUN_00890830(ppuStack_358,lVar27);
                      ppuStack_358 = ppuVar26 + 0x1b;
                    }
                    else {
                      ppuStack_358 = (undefined8 **)FUN_00b14350(&local_360,lVar27);
                    }
                    FUN_00bde244(&local_360);
                  }
                }
                goto LAB_00bd6910;
              }
            }
            uVar17 = FUN_004249b0();
            if ((uVar17 & 1) == 0) {
              local_160 = (undefined8 **)0x1e94be;
              uStack_158 = (undefined8 **)0x14c3;
              local_150 = (undefined8 **)&uStack_241;
              FUN_00548c1c(&local_3c0,"Media type for content with mid=\'",puVar21);
              FUN_00bd81ec(&local_240,&local_3c0,"\' does not match previous type.");
              pppuStack_3d0 = &local_160;
              local_3d8 = &local_240;
              local_390 = FUN_005eceec(10);
              FUN_00623bb0(&DAT_00255ab6,*pppuStack_3d0,*(undefined4 *)(pppuStack_3d0 + 1),local_3d8
                           ,&DAT_001a2df6,local_390,&DAT_001ca519);
              if ((long)puStack_230 < 0) {
                operator_delete(local_240);
              }
              if (local_3b0 < 0) {
                operator_delete(local_3c0);
              }
            }
            FUN_00548c1c(&local_3c0,"Media type for content with mid=\'",puVar21);
            FUN_00bd81ec(&local_240,&local_3c0,"\' does not match previous type.");
            puVar22 = uStack_238;
            pppppppuVar4 = local_240;
            if (-1 < (long)puStack_230) {
              puVar22 = (undefined1 *)((ulong)puStack_230 >> 0x38);
              pppppppuVar4 = &local_240;
            }
            FUN_00b0092c(&local_160,10,pppppppuVar4,puVar22);
            *param_1 = (int)local_160;
            iVar13 = (int)local_140;
            *(undefined1 *)(param_1 + 10) = 0;
            *(undefined8 ***)(param_1 + 4) = local_150;
            *(undefined8 ***)(param_1 + 2) = uStack_158;
            *(undefined1 **)(param_1 + 6) = local_148;
            param_1[8] = iVar13;
            *(undefined4 *)((long)param_1 + 0x23) = local_140._3_4_;
            *(undefined1 *)(param_1 + 0x10) = 0;
            if ((long)puStack_230 < 0) {
              operator_delete(local_240);
            }
            if (local_3b0 < 0) {
              operator_delete(local_3c0);
            }
            goto LAB_00bd70b8;
          }
        }
      }
LAB_00bd6910:
      ppuVar28 = ppuStack_358;
      puStack_3a8 = &local_3a0;
      local_3b0 = -0x55555555ffffff81;
      local_3c0 = (undefined8 ***)&PTR_FUN_00d48808;
      local_3a0 = 0;
      uStack_398 = 0;
      uVar15 = DAT_001f5688;
      puVar10 = PTR_DAT_00d521b8;
      puVar21 = puStack_378;
      for (ppuVar26 = local_360; local_3b8 = uVar15, PTR_DAT_00d521b8 = puVar10, puVar30 = local_380
          , puStack_378 = puVar21, ppuVar26 != ppuVar28; ppuVar26 = ppuVar26 + 0x1b) {
        iVar13 = *(int *)((long)ppuVar26 + 0xc);
        local_3b8._4_4_ = (int)((ulong)uVar15 >> 0x20);
        bVar1 = iVar13 <= local_3b8._4_4_;
        if ((bVar1) && (local_3b8._0_4_ = (int)uVar15, bVar1 = (int)local_3b8 <= iVar13, bVar1)) {
          uVar17 = (*(code *)local_3c0[2])(&local_3c0,iVar13);
          if ((uVar17 & 1) != 0) {
            iVar13 = (*(code *)local_3c0[3])(&local_3c0);
            *(int *)((long)ppuVar26 + 0xc) = iVar13;
          }
          local_160 = (undefined8 **)CONCAT44(local_160._4_4_,iVar13);
          FUN_0066396c(0,&puStack_3a8,&puStack_3a8,&local_160);
        }
        uVar15 = local_3b8;
        puVar10 = PTR_DAT_00d521b8;
        puVar21 = puStack_378;
      }
      for (; puVar30 != puVar21; puVar30 = puVar30 + 0x1b) {
        uStack_158 = (undefined8 **)&DAT_aaaaaaaaaaaaaaaa;
        local_160 = (undefined8 **)&DAT_aaaaaaaaaaaaaaaa;
        local_148 = &DAT_aaaaaaaaaaaaaaaa;
        local_150 = (undefined8 **)&DAT_aaaaaaaaaaaaaaaa;
        ppuStack_138 = (undefined8 **)&DAT_aaaaaaaaaaaaaaaa;
        local_140 = &DAT_aaaaaaaaaaaaaaaa;
        local_128 = (undefined8 **)&DAT_aaaaaaaaaaaaaaaa;
        local_130 = (undefined8 **)&DAT_aaaaaaaaaaaaaaaa;
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
        local_88 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
        FUN_00894eec(&local_160,&local_380,&local_260,puVar30);
        if ((char)local_88 == '\x01') {
          FUN_00894eec(&local_240,&local_380,&local_360,puVar30);
          if ((char)local_168 == '\x01') {
            FUN_00890cb8(&local_240);
          }
          else {
            if (*param_3 == 1) {
              if (((ulong)local_88 & 1) == 0) {
LAB_00bd762c:
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s",
                           "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                          );
              }
              iVar13 = FUN_00891b68(&local_160);
              if (iVar13 == 4) {
                uVar15 = FUN_00bd8268(&local_380,puVar30);
                uStack_238 = &DAT_aaaaaaaaaaaaaaaa;
                local_240 = (undefined8 *******)&DAT_aaaaaaaaaaaaaaaa;
                local_228 = &DAT_aaaaaaaaaaaaaaaa;
                puStack_230 = &DAT_aaaaaaaaaaaaaaaa;
                puStack_218 = &DAT_aaaaaaaaaaaaaaaa;
                local_220 = &DAT_aaaaaaaaaaaaaaaa;
                puStack_208 = &DAT_aaaaaaaaaaaaaaaa;
                puStack_210 = &DAT_aaaaaaaaaaaaaaaa;
                puStack_1f8 = &DAT_aaaaaaaaaaaaaaaa;
                local_200 = &DAT_aaaaaaaaaaaaaaaa;
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
                puStack_190 = &DAT_aaaaaaaaaaaaaaaa;
                puStack_178 = &DAT_aaaaaaaaaaaaaaaa;
                local_180 = &DAT_aaaaaaaaaaaaaaaa;
                local_168 = &DAT_aaaaaaaaaaaaaaaa;
                puStack_170 = &DAT_aaaaaaaaaaaaaaaa;
                FUN_00894eec(&local_240,&local_380,&local_360,uVar15);
                if ((char)local_168 == '\x01') {
                  if ((((ulong)local_88 & 1) == 0) ||
                     (FUN_005d3510(&local_3d8,puVar10), ((ulong)local_168 & 1) == 0))
                  goto LAB_00bd762c;
                  FUN_00891858(&local_160,&local_3d8,uStack_238._4_4_);
                  if (cStack_3c1 < '\0') {
                    operator_delete(local_3d8);
                  }
                  if ((char)local_168 == '\x01') {
                    FUN_00890cb8(&local_240);
                  }
                }
              }
            }
            if (((ulong)local_88 & 1) == 0) goto LAB_00bd75c0;
            iVar13 = uStack_158._4_4_;
            if ((uStack_158._4_4_ <= local_3b8._4_4_) && ((int)local_3b8 <= uStack_158._4_4_)) {
              uVar17 = (*(code *)local_3c0[2])(&local_3c0,uStack_158._4_4_);
              if ((uVar17 & 1) != 0) {
                iVar13 = (*(code *)local_3c0[3])(&local_3c0);
                uStack_158 = (undefined8 **)CONCAT44(iVar13,(undefined4)uStack_158);
              }
              local_240 = (undefined8 *******)CONCAT44(local_240._4_4_,iVar13);
              FUN_0066396c(0,&puStack_3a8,&puStack_3a8,&local_240);
              if (((ulong)local_88 & 1) == 0) goto LAB_00bd75c0;
            }
            ppuVar26 = ppuStack_358;
            if (ppuStack_358 < local_350) {
              if (ppuStack_358 == (undefined8 **)0x0) goto LAB_00bd76b4;
              FUN_00890830(ppuStack_358,&local_160);
              ppuStack_358 = ppuVar26 + 0x1b;
            }
            else {
              ppuStack_358 = (undefined8 **)FUN_00b14350(&local_360,&local_160);
            }
            FUN_00bde244(&local_360);
          }
        }
        if ((char)local_88 == '\x01') {
          FUN_00890cb8(&local_160);
        }
      }
      local_3c0 = (undefined8 ***)&PTR_FUN_00d48838;
      local_160 = &puStack_3a8;
      FUN_005fa1cc(&local_160,local_3a0);
      iVar13 = *param_3;
      if (iVar13 != 0) goto LAB_00bd6d14;
LAB_00bd6c14:
      if ((*param_4 & 1) != 0) goto LAB_00bd6d14;
      FUN_00bd8488(&local_360);
    }
    else {
      FUN_00bd7a9c(&local_160,param_3 + 0x10,&local_260,&local_380);
      ppuVar28 = local_360;
      ppuVar26 = ppuStack_358;
      if (local_360 != (undefined8 **)0x0) {
        while (ppuVar28 != ppuVar26) {
          ppuVar26 = ppuVar26 + -0x1b;
          if (ppuVar26 == (undefined8 **)0x0) goto LAB_00bd73d0;
          (*(code *)**ppuVar26)(ppuVar26);
        }
        ppuStack_358 = ppuVar28;
        operator_delete(local_360);
      }
      ppuStack_358 = uStack_158;
      local_360 = local_160;
      local_350 = local_150;
      iVar13 = *param_3;
      if (iVar13 == 0) goto LAB_00bd6c14;
LAB_00bd6d14:
      ppuVar26 = ppuStack_358;
      puVar10 = PTR_DAT_00d52238;
      if (((iVar13 == 1) && ((param_4[4] & 1) != 0)) && (local_360 != ppuStack_358)) {
        ppuVar28 = local_360 + 7;
        do {
          uVar17 = FUN_00891aec(ppuVar28 + -7);
          if ((uVar17 & 1) != 0) {
            if (*(char *)(ppuVar28 + 3) == '\x01') {
              FUN_00547bf8();
            }
            else {
              FUN_005d3510(ppuVar28,puVar10);
              *(undefined1 *)(ppuVar28 + 3) = 1;
            }
          }
          ppuVar23 = ppuVar28 + 0x14;
          ppuVar28 = ppuVar28 + 0x1b;
        } while (ppuVar23 != ppuVar26);
      }
    }
    puVar21 = puStack_378;
    puVar10 = PTR_DAT_00d51c90;
    if (((local_360 != ppuStack_358) && (local_380 != puStack_378)) && (*param_3 == 1)) {
      local_140 = (undefined1 *)0xaaaaaaaa3f800000;
      uStack_158 = (undefined8 **)0x0;
      local_160 = (undefined8 **)0x0;
      local_148 = (undefined1 *)0x0;
      local_150 = (undefined8 **)0x0;
      puVar30 = local_380;
      do {
        lVar27 = (long)*(char *)((long)puVar30 + 0x27);
        if (lVar27 < 0) {
          puVar29 = (undefined8 *)puVar30[2];
          lVar27 = puVar30[3];
        }
        else {
          puVar29 = puVar30 + 2;
        }
        sVar16 = strlen(puVar10);
        uVar17 = FUN_0061ff84(puVar29,lVar27,puVar10,sVar16);
        if ((uVar17 & 1) != 0) {
          uStack_238 = &DAT_aaaaaaaaaaaaaaaa;
          local_240 = (undefined8 *******)&DAT_aaaaaaaaaaaaaaaa;
          auVar31 = FUN_007bc174(puVar30 + 0x15);
          local_240 = auVar31._0_8_;
          uStack_238._0_5_ = auVar31._8_5_;
          if ((auVar31._8_8_ >> 0x20 & 1) != 0) {
            local_3d8 = &local_240;
            local_3c0 = &local_160;
            lVar27 = FUN_00bdb15c(&local_3c0,&local_240,&DAT_001f94c3,&local_3d8,local_390);
            if (lVar27 == 0) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__hash_table:248: libc++ Hardening assertion __node_ != nullptr failed: Attempted to dereference a non-dereferenceable unordered container iterator\n"
                        );
            }
            *(int *)(lVar27 + 0x14) = auVar31._8_4_;
          }
        }
        ppuVar28 = ppuStack_358;
        ppuVar26 = local_360;
        puVar12 = PTR_DAT_00d51c90;
        puVar30 = puVar30 + 0x1b;
      } while (puVar30 != puVar21);
      ppuVar23 = local_160;
      ppuVar24 = local_150;
      if ((local_148 != (undefined1 *)0x0) && (local_360 != ppuStack_358)) {
        sVar16 = strlen(PTR_DAT_00d51c90);
        puVar10 = PTR_s_level_id_00d522b8;
        do {
          puVar21 = (undefined8 *)(long)*(char *)((long)ppuVar26 + 0x27);
          if ((long)puVar21 < 0) {
            ppuVar23 = (undefined8 **)ppuVar26[2];
            puVar21 = ppuVar26[3];
          }
          else {
            ppuVar23 = ppuVar26 + 2;
          }
          uVar17 = FUN_0061ff84(ppuVar23,puVar21,puVar12,sVar16);
          if ((uVar17 & 1) != 0) {
            iVar13 = FUN_007bc174(ppuVar26 + 0x15);
            if ((((extraout_x1 >> 0x20 & 1) != 0) && (uStack_158 != (undefined8 **)0x0)) &&
               (local_148 != (undefined1 *)0x0)) {
              puVar22 = (undefined1 *)((long)uStack_158 + -1);
              ppuVar23 = (undefined8 **)(long)iVar13;
              if (((ulong)uStack_158 & (ulong)puVar22) == 0) {
                ppuVar24 = (undefined8 **)((ulong)puVar22 & (ulong)ppuVar23);
              }
              else {
                ppuVar24 = ppuVar23;
                if (uStack_158 <= ppuVar23) {
                  uVar17 = 0;
                  if (uStack_158 != (undefined8 **)0x0) {
                    uVar17 = (ulong)ppuVar23 / (ulong)uStack_158;
                  }
                  ppuVar24 = (undefined8 **)((long)ppuVar23 - uVar17 * (long)uStack_158);
                }
              }
              puVar21 = local_160[(long)ppuVar24];
              if (puVar21 != (undefined8 *)0x0) {
                do {
                  while( true ) {
                    puVar21 = (undefined8 *)*puVar21;
                    if (puVar21 == (undefined8 *)0x0) goto LAB_00bd6e28;
                    ppuVar25 = (undefined8 **)puVar21[1];
                    if (ppuVar25 == ppuVar23) break;
                    if (((ulong)uStack_158 & (ulong)puVar22) == 0) {
                      ppuVar25 = (undefined8 **)((ulong)ppuVar25 & (ulong)puVar22);
                    }
                    else if (uStack_158 <= ppuVar25) {
                      uVar17 = 0;
                      if (uStack_158 != (undefined8 **)0x0) {
                        uVar17 = (ulong)ppuVar25 / (ulong)uStack_158;
                      }
                      ppuVar25 = (undefined8 **)((long)ppuVar25 - uVar17 * (long)uStack_158);
                    }
                    if (ppuVar25 != ppuVar24) goto LAB_00bd6e28;
                  }
                } while (*(int *)(puVar21 + 2) != iVar13);
                if (*(int *)((long)puVar21 + 0x14) != (int)extraout_x1) {
                  FUN_007bc064(&local_240);
                  FUN_005d3510(&local_3c0,puVar10);
                  local_390._0_8_ = &local_3c0;
                  local_3d8 = (undefined8 *******)(ppuVar26 + 0x15);
                  lVar27 = FUN_0088c894(&local_3d8,&local_3c0,&DAT_001f94c3,local_390,&uStack_241);
                  if (*(char *)(lVar27 + 0x4f) < '\0') {
                    operator_delete(*(void **)(lVar27 + 0x38));
                    *(undefined8 *)(lVar27 + 0x38) = 0;
                    *(undefined8 *)(lVar27 + 0x40) = 0;
                    *(undefined8 *)(lVar27 + 0x48) = 0;
                  }
                  *(undefined1 **)(lVar27 + 0x48) = puStack_230;
                  *(undefined1 **)(lVar27 + 0x40) = uStack_238;
                  *(undefined8 ********)(lVar27 + 0x38) = local_240;
                  puStack_230 = (undefined1 *)((ulong)puStack_230 & 0xffffffffffffff);
                  local_240 = (undefined8 *******)((ulong)local_240 & 0xffffffffffffff00);
                  if ((local_3b0 < 0) && (operator_delete(local_3c0), (long)puStack_230 < 0)) {
                    operator_delete(local_240);
                  }
                }
              }
            }
          }
LAB_00bd6e28:
          ppuVar26 = ppuVar26 + 0x1b;
          ppuVar23 = local_160;
          ppuVar24 = local_150;
        } while (ppuVar26 != ppuVar28);
      }
      while (ppuVar24 != (undefined8 **)0x0) {
        local_160 = ppuVar23;
        if (ppuVar24 == (undefined8 **)0xfffffffffffffff0) goto LAB_00bd73d0;
        ppuVar26 = (undefined8 **)*ppuVar24;
        operator_delete(ppuVar24);
        ppuVar23 = local_160;
        ppuVar24 = ppuVar26;
      }
      local_160 = (undefined8 **)0x0;
      if (ppuVar23 != (undefined8 **)0x0) {
        operator_delete(ppuVar23);
      }
    }
LAB_00bd6ff0:
    FUN_00bd8644(auStack_400,param_6,&local_280,&local_360);
    if (cStack_3e1 < '\0') {
      operator_delete(local_3f8);
    }
    ppuVar28 = ppuStack_358;
    ppuVar26 = local_360;
    *param_1 = 0;
    *(undefined1 *)((long)param_1 + 0x26) = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    uVar17 = (long)ppuStack_358 - (long)local_360;
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined8 *)((long)param_1 + 0x1d) = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    if (uVar17 != 0) {
      if (0x12f684bda12f684 < (ulong)(((long)uVar17 >> 3) * -0x7b425ed097b425ed)) {
                    /* WARNING: Subroutine does not return */
        FUN_0088fd20();
      }
      pvVar18 = operator_new(uVar17);
      *(void **)(param_1 + 10) = pvVar18;
      *(void **)(param_1 + 0xc) = pvVar18;
      *(ulong *)(param_1 + 0xe) = (long)pvVar18 + uVar17;
      do {
        if (pvVar18 == (void *)0x0) {
LAB_00bd76b4:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        FUN_00890830(pvVar18,ppuVar26);
        ppuVar26 = ppuVar26 + 0x1b;
        pvVar18 = (void *)((long)pvVar18 + 0xd8);
      } while (ppuVar26 != ppuVar28);
      *(void **)(param_1 + 0xc) = pvVar18;
    }
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  else {
    uStack_158 = (undefined8 **)&DAT_aaaaaaaaaaaaaaaa;
    local_160 = (undefined8 **)&DAT_aaaaaaaaaaaaaaaa;
    local_148 = &DAT_aaaaaaaaaaaaaaaa;
    local_150 = (undefined8 **)&DAT_aaaaaaaaaaaaaaaa;
    ppuStack_138 = (undefined8 **)&DAT_aaaaaaaaaaaaaaaa;
    local_140 = &DAT_aaaaaaaaaaaaaaaa;
    local_128 = (undefined8 **)&DAT_aaaaaaaaaaaaaaaa;
    local_130 = (undefined8 **)&DAT_aaaaaaaaaaaaaaaa;
    local_120 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00bdd774(&local_160);
    ppuVar24 = local_128;
    ppuVar23 = local_130;
    ppuVar28 = ppuStack_138;
    ppuVar26 = local_360;
    iVar13 = (int)local_160;
    if ((int)local_160 == 0) {
      if (((ulong)local_120 & 1) == 0) {
LAB_00bd75c0:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                  );
      }
      ppuStack_138 = (undefined8 **)0x0;
      local_130 = (undefined8 **)0x0;
      local_128 = (undefined8 **)0x0;
      ppuVar25 = ppuStack_358;
      ppuVar11 = ppuStack_138;
      if (local_360 != (undefined8 **)0x0) {
        while (ppuVar26 != ppuVar25) {
          ppuVar25 = ppuVar25 + -0x1b;
          if (ppuVar25 == (undefined8 **)0x0) goto LAB_00bd73d0;
          (*(code *)**ppuVar25)(ppuVar25);
        }
        ppuStack_358 = ppuVar26;
        operator_delete(local_360);
        ppuVar11 = ppuStack_138;
      }
    }
    else {
      local_240 = (undefined8 *******)CONCAT44(local_240._4_4_,(int)local_160);
      puVar21 = (undefined8 *)((ulong)&local_160 | 8);
      puStack_230 = (undefined1 *)puVar21[1];
      uStack_238 = (undefined1 *)*puVar21;
      local_228 = (undefined1 *)puVar21[2];
      iVar14 = (int)local_140;
      *param_1 = (int)local_160;
      local_220._0_7_ = SUB87(local_140,0);
      if ((long)local_228 < 0) {
        FUN_005478d8(param_1 + 2,uStack_238,puStack_230);
        iVar14 = (int)local_220;
        *(undefined1 *)(param_1 + 10) = 0;
        param_1[8] = iVar14;
        *(undefined4 *)((long)param_1 + 0x23) = local_220._3_4_;
        *(undefined1 *)(param_1 + 0x10) = 0;
        ppuVar28 = local_360;
        ppuVar23 = ppuStack_358;
        ppuVar24 = local_350;
        ppuVar11 = ppuStack_138;
        if ((long)local_228 < 0) {
          operator_delete(uStack_238);
          ppuVar28 = local_360;
          ppuVar23 = ppuStack_358;
          ppuVar24 = local_350;
          ppuVar11 = ppuStack_138;
        }
      }
      else {
        *(undefined1 *)(param_1 + 10) = 0;
        *(undefined1 **)(param_1 + 4) = puStack_230;
        *(undefined1 **)(param_1 + 2) = uStack_238;
        *(undefined1 **)(param_1 + 6) = local_228;
        param_1[8] = iVar14;
        *(undefined4 *)((long)param_1 + 0x23) = local_140._3_4_;
        *(undefined1 *)(param_1 + 0x10) = 0;
        ppuVar28 = local_360;
        ppuVar23 = ppuStack_358;
        ppuVar24 = local_350;
        ppuVar11 = ppuStack_138;
      }
    }
    local_350 = ppuVar24;
    ppuStack_358 = ppuVar23;
    local_360 = ppuVar28;
    ppuStack_138 = ppuVar11;
    if ((((ulong)local_120 & 1) != 0) && (ppuVar26 = local_130, ppuVar11 != (undefined8 **)0x0)) {
      while (ppuVar11 != ppuVar26) {
        ppuVar26 = ppuVar26 + -0x1b;
        if (ppuVar26 == (undefined8 **)0x0) goto LAB_00bd73d0;
        (*(code *)**ppuVar26)(ppuVar26);
      }
      local_130 = ppuVar11;
      operator_delete(ppuStack_138);
    }
    if (iVar13 == 0) goto LAB_00bd6ff0;
  }
LAB_00bd70b8:
  puVar30 = local_380;
  puVar21 = puStack_378;
  if (local_380 != (undefined8 *)0x0) {
    while (puVar30 != puVar21) {
      puVar21 = puVar21 + -0x1b;
      if (puVar21 == (undefined8 *)0x0) goto LAB_00bd73d0;
      (**(code **)*puVar21)(puVar21);
    }
    puStack_378 = puVar30;
    operator_delete(local_380);
  }
  ppuVar28 = local_360;
  ppuVar26 = ppuStack_358;
  if (local_360 != (undefined8 **)0x0) {
    while (ppuVar28 != ppuVar26) {
      ppuVar26 = ppuVar26 + -0x1b;
      if (ppuVar26 == (undefined8 **)0x0) goto LAB_00bd73d0;
      (*(code *)**ppuVar26)(ppuVar26);
    }
    ppuStack_358 = ppuVar28;
    operator_delete(local_360);
  }
LAB_00bd7160:
  puVar21 = local_260;
  if ((long)local_270 < 0) {
    operator_delete(local_280);
    puVar21 = local_260;
  }
  local_260 = puVar21;
  puVar30 = local_258;
  if (puVar21 != (undefined8 *)0x0) {
    while (puVar21 != puVar30) {
      puVar30 = puVar30 + -0x1b;
      if (puVar30 == (undefined8 *)0x0) {
LAB_00bd73d0:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      (**(code **)*puVar30)(puVar30);
    }
    local_258 = puVar21;
    operator_delete(local_260);
  }
  if (*(long *)(lVar9 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00bd76d0  FUN_00bd76d0 =====

long FUN_00bd76d0(long param_1)

{
  return param_1 + 0x18;
}


// ===== 00bd76dc  FUN_00bd76dc =====

void FUN_00bd76dc(void)

{
  return;
}


// ===== 00bd76e4  FUN_00bd76e4 =====

long FUN_00bd76e4(long param_1)

{
  return param_1 + 0x48;
}


// ===== 00bd76f0  FUN_00bd76f0 =====

long FUN_00bd76f0(long param_1)

{
  return param_1 + 0x30;
}


// ===== 00bd76fc  FUN_00bd76fc =====

void FUN_00bd76fc(undefined8 *param_1,long *param_2,int *param_3)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  void *pvVar4;
  long lVar5;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined1 *local_50;
  
  iVar2 = *param_3;
  if (iVar2 < 3) {
    if (iVar2 != 0) {
      if (iVar2 == 1) {
        lVar5 = *param_2;
        lVar1 = param_2[1];
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        uVar3 = lVar1 - lVar5;
        if (uVar3 == 0) {
          return;
        }
        if (0x12f684bda12f684 < (ulong)(((long)uVar3 >> 3) * -0x7b425ed097b425ed)) {
LAB_00bd78c4:
                    /* WARNING: Subroutine does not return */
          FUN_0088fd20();
        }
        pvVar4 = operator_new(uVar3);
        *param_1 = pvVar4;
        param_1[2] = (long)pvVar4 + uVar3;
        do {
          if (pvVar4 == (void *)0x0) goto LAB_00bd78b0;
          FUN_00890830(pvVar4,lVar5);
          lVar5 = lVar5 + 0xd8;
          pvVar4 = (void *)((long)pvVar4 + 0xd8);
        } while (lVar5 != lVar1);
      }
      else {
        if (iVar2 != 2) goto LAB_00bd78c8;
        lVar5 = param_2[3];
        lVar1 = param_2[4];
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        uVar3 = lVar1 - lVar5;
        if (uVar3 == 0) {
          return;
        }
        if (0x12f684bda12f684 < (ulong)(((long)uVar3 >> 3) * -0x7b425ed097b425ed))
        goto LAB_00bd78c4;
        pvVar4 = operator_new(uVar3);
        *param_1 = pvVar4;
        param_1[2] = (long)pvVar4 + uVar3;
        do {
          if (pvVar4 == (void *)0x0) {
LAB_00bd78b0:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          FUN_00890830(pvVar4,lVar5);
          lVar5 = lVar5 + 0xd8;
          pvVar4 = (void *)((long)pvVar4 + 0xd8);
        } while (lVar5 != lVar1);
      }
      param_1[1] = pvVar4;
      return;
    }
  }
  else if (1 < iVar2 - 3U) {
LAB_00bd78c8:
                    /* WARNING: Subroutine does not return */
    FUN_0061ff28();
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00bd9c48(&local_70,param_2 + 3,param_2,param_1,1);
  if ((long)local_58 < 0) {
    operator_delete(puStack_68);
  }
  return;
}


// ===== 00bd78cc  FUN_00bd78cc =====

void FUN_00bd78cc(undefined8 *param_1,long param_2,int *param_3)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  void *pvVar4;
  long lVar5;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined1 *local_50;
  
  iVar2 = *param_3;
  if (iVar2 < 3) {
    if (iVar2 != 0) {
      if (iVar2 == 1) {
        lVar5 = *(long *)(param_2 + 0x30);
        lVar1 = *(long *)(param_2 + 0x38);
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        uVar3 = lVar1 - lVar5;
        if (uVar3 == 0) {
          return;
        }
        if (0x12f684bda12f684 < (ulong)(((long)uVar3 >> 3) * -0x7b425ed097b425ed)) {
LAB_00bd7a94:
                    /* WARNING: Subroutine does not return */
          FUN_0088fd20();
        }
        pvVar4 = operator_new(uVar3);
        *param_1 = pvVar4;
        param_1[2] = (long)pvVar4 + uVar3;
        do {
          if (pvVar4 == (void *)0x0) goto LAB_00bd7a80;
          FUN_00890830(pvVar4,lVar5);
          lVar5 = lVar5 + 0xd8;
          pvVar4 = (void *)((long)pvVar4 + 0xd8);
        } while (lVar5 != lVar1);
      }
      else {
        if (iVar2 != 2) goto LAB_00bd7a98;
        lVar5 = *(long *)(param_2 + 0x48);
        lVar1 = *(long *)(param_2 + 0x50);
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        uVar3 = lVar1 - lVar5;
        if (uVar3 == 0) {
          return;
        }
        if (0x12f684bda12f684 < (ulong)(((long)uVar3 >> 3) * -0x7b425ed097b425ed))
        goto LAB_00bd7a94;
        pvVar4 = operator_new(uVar3);
        *param_1 = pvVar4;
        param_1[2] = (long)pvVar4 + uVar3;
        do {
          if (pvVar4 == (void *)0x0) {
LAB_00bd7a80:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          FUN_00890830(pvVar4,lVar5);
          lVar5 = lVar5 + 0xd8;
          pvVar4 = (void *)((long)pvVar4 + 0xd8);
        } while (lVar5 != lVar1);
      }
      param_1[1] = pvVar4;
      return;
    }
  }
  else if (1 < iVar2 - 3U) {
LAB_00bd7a98:
                    /* WARNING: Subroutine does not return */
    FUN_0061ff28();
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00bd9c48(&local_70,param_2 + 0x48,param_2 + 0x30,param_1,1);
  if ((long)local_58 < 0) {
    operator_delete(puStack_68);
  }
  return;
}


// ===== 00bd7a9c  FUN_00bd7a9c =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00bd7a9c(undefined8 *param_1,long *param_2,long *param_3,long *param_4)

{
  bool bVar1;
  undefined8 ******ppppppuVar2;
  long *plVar3;
  undefined8 *******pppppppuVar4;
  undefined8 ******ppppppuVar5;
  undefined8 *******pppppppuVar6;
  byte bVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *******pppppppuVar10;
  bool bVar11;
  bool bVar12;
  undefined *__s;
  undefined *puVar13;
  undefined1 *puVar14;
  uint uVar15;
  int iVar16;
  size_t sVar17;
  size_t sVar18;
  ulong uVar19;
  long lVar20;
  undefined8 *******pppppppuVar21;
  ulong uVar22;
  long lVar23;
  uint uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  undefined8 *puVar28;
  long *plVar29;
  long *plVar30;
  undefined8 *******local_190;
  undefined8 *******pppppppuStack_188;
  undefined1 *local_180;
  undefined8 *******local_170;
  undefined8 ******ppppppuStack_168;
  undefined1 *local_160;
  undefined1 *local_150;
  undefined8 uStack_148;
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
  undefined1 *local_78;
  long local_70;
  
  lVar8 = tpidr_el0;
  local_70 = *(long *)(lVar8 + 0x28);
  lVar25 = *param_2;
  lVar23 = param_2[1];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar13 = PTR_DAT_00d52130;
  if (lVar25 == lVar23) {
    uVar24 = 0;
    bVar11 = false;
    if (lVar25 == lVar23) goto LAB_00bd8160;
  }
  else {
    sVar17 = strlen(PTR_DAT_00d52130);
    __s = PTR_DAT_00d51fd8;
    bVar11 = false;
    uVar24 = 0;
    do {
      puVar28 = (undefined8 *)(lVar25 + 8);
      uVar19 = *(ulong *)(lVar25 + 0x10);
      puVar9 = (undefined8 *)*puVar28;
      if (-1 < (char)*(byte *)(lVar25 + 0x1f)) {
        uVar19 = (ulong)*(byte *)(lVar25 + 0x1f);
        puVar9 = puVar28;
      }
      uVar19 = FUN_0061ff84(puVar9,uVar19,puVar13,sVar17);
      if ((uVar19 & 1) == 0) {
        uVar19 = *(ulong *)(lVar25 + 0x10);
        puVar9 = *(undefined8 **)(lVar25 + 8);
        if (-1 < (char)*(byte *)(lVar25 + 0x1f)) {
          uVar19 = (ulong)*(byte *)(lVar25 + 0x1f);
          puVar9 = puVar28;
        }
        sVar18 = strlen(__s);
        uVar15 = FUN_0061ff84(puVar9,uVar19,__s,sVar18);
        uVar24 = uVar15 | uVar24;
      }
      else {
        bVar11 = true;
      }
      lVar25 = lVar25 + 0xa0;
    } while (lVar25 != lVar23);
    lVar25 = *param_2;
    lVar23 = param_2[1];
    if (lVar25 == lVar23) goto LAB_00bd8160;
  }
  bVar12 = false;
  do {
    lVar27 = *param_4;
    lVar26 = param_4[1];
    lVar20 = lVar27;
    if (lVar27 != lVar26) {
      do {
        uVar19 = FUN_008962e4(lVar20,lVar25);
        lVar27 = lVar20;
        if ((uVar19 & 1) != 0) break;
        lVar20 = lVar20 + 0xd8;
        lVar27 = lVar26;
      } while (lVar20 != lVar26);
      lVar26 = param_4[1];
    }
    if (lVar27 != lVar26) {
      uStack_148 = &DAT_aaaaaaaaaaaaaaaa;
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
      local_78 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_00894eec(&local_150,param_4,param_3,lVar27);
      if ((char)local_78 == '\x01') {
        iVar16 = FUN_00891b68(&local_150);
        if ((bool)(iVar16 == 1 & bVar12)) {
          bVar12 = true;
        }
        else {
          if (((ulong)local_78 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                      );
          }
          uVar19 = param_1[1];
          if (uVar19 < (ulong)param_1[2]) {
            if (uVar19 == 0) {
LAB_00bd81c0:
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                        );
            }
            FUN_00890830(uVar19,&local_150);
            lVar20 = uVar19 + 0xd8;
          }
          else {
            lVar20 = FUN_00b14350(param_1,&local_150);
          }
          param_1[1] = lVar20;
          FUN_00bde244(param_1);
          bVar12 = (bool)(iVar16 == 1 | bVar12);
        }
        ppppppuStack_168 = (undefined8 ******)&DAT_aaaaaaaaaaaaaaaa;
        local_170 = (undefined8 *******)&DAT_aaaaaaaaaaaaaaaa;
        local_160 = &DAT_aaaaaaaaaaaaaaaa;
        if (((ulong)local_78 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                    );
        }
        ppppppuStack_168 = (undefined8 ******)0x0;
        local_160 = (undefined1 *)0x0;
        local_170 = (undefined8 *******)0x0;
        FUN_005f55c4(&local_170,0x16,uStack_148._4_4_);
        if ((uVar24 & 1) != 0 || bVar11) {
          lVar27 = param_3[1];
          for (lVar20 = *param_3; lVar20 != lVar27; lVar20 = lVar20 + 0xd8) {
            if ((bVar11) && (iVar16 = FUN_00891b68(lVar20), iVar16 == 4)) {
              FUN_005d3510(&local_190,PTR_DAT_00d521b8);
              puVar14 = local_180;
              plVar29 = (long *)(lVar20 + 0xb0);
              plVar30 = (long *)*plVar29;
              plVar3 = plVar29;
              if (plVar30 != (long *)0x0) {
                pppppppuVar6 = local_190;
                pppppppuVar21 = pppppppuStack_188;
                if (-1 < (long)local_180) {
                  pppppppuVar6 = &local_190;
                  pppppppuVar21 = (undefined8 *******)((ulong)local_180 >> 0x38);
                }
                do {
                  while( true ) {
                    plVar3 = (long *)plVar30[4];
                    pppppppuVar10 = (undefined8 *******)plVar30[5];
                    if (-1 < (char)*(byte *)((long)plVar30 + 0x37)) {
                      plVar3 = plVar30 + 4;
                      pppppppuVar10 = (undefined8 *******)(ulong)*(byte *)((long)plVar30 + 0x37);
                    }
                    pppppppuVar4 = pppppppuVar10;
                    if (pppppppuVar21 <= pppppppuVar10) {
                      pppppppuVar4 = pppppppuVar21;
                    }
                    iVar16 = memcmp(pppppppuVar6,plVar3,(size_t)pppppppuVar4);
                    if (iVar16 != 0) break;
                    plVar3 = plVar30;
                    if (pppppppuVar21 == pppppppuVar10) goto joined_r0x00bd7f1c;
                    if (pppppppuVar10 <= pppppppuVar21) goto LAB_00bd7d78;
LAB_00bd7dc8:
                    plVar30 = (long *)*plVar30;
                    plVar3 = plVar29;
                    if (plVar30 == (long *)0x0) goto joined_r0x00bd7f1c;
                  }
                  if (iVar16 < 0) goto LAB_00bd7dc8;
LAB_00bd7d78:
                  plVar30 = (long *)plVar30[1];
                  plVar3 = plVar29;
                } while (plVar30 != (long *)0x0);
              }
joined_r0x00bd7f1c:
              if ((long)puVar14 < 0) {
                operator_delete(local_190);
              }
              if (plVar3 != plVar29) {
                bVar7 = *(byte *)((long)plVar3 + 0x4f);
                ppppppuVar5 = (undefined8 ******)plVar3[8];
                if (-1 < (char)bVar7) {
                  ppppppuVar5 = (undefined8 ******)(ulong)bVar7;
                }
                ppppppuVar2 = ppppppuStack_168;
                if (-1 < (long)local_160) {
                  ppppppuVar2 = (undefined8 ******)((ulong)local_160 >> 0x38);
                }
                if (ppppppuVar5 == ppppppuVar2) {
                  plVar29 = (long *)plVar3[7];
                  if (-1 < (char)bVar7) {
                    plVar29 = plVar3 + 7;
                  }
                  pppppppuVar21 = local_170;
                  if (-1 < (long)local_160) {
                    pppppppuVar21 = &local_170;
                  }
                  iVar16 = memcmp(plVar29,pppppppuVar21,(size_t)ppppppuVar5);
                  if (iVar16 == 0) {
                    uVar19 = param_1[1];
                    if (uVar19 < (ulong)param_1[2]) {
                      if (uVar19 == 0) goto LAB_00bd81c0;
                      FUN_00890830(uVar19,lVar20);
                      lVar20 = uVar19 + 0xd8;
                    }
                    else {
                      lVar20 = FUN_00b14350(param_1,lVar20);
                    }
                    param_1[1] = lVar20;
                    FUN_00bde244(param_1);
                    break;
                  }
                }
              }
            }
            else if (((uVar24 & 1) != 0) && (iVar16 = FUN_00891b68(lVar20), iVar16 == 1)) {
              FUN_005d3510(&local_190,PTR_DAT_00d521c0);
              puVar14 = local_180;
              plVar29 = (long *)(lVar20 + 0xb0);
              plVar30 = (long *)*plVar29;
              plVar3 = plVar29;
              if (plVar30 != (long *)0x0) {
                pppppppuVar6 = local_190;
                pppppppuVar21 = pppppppuStack_188;
                if (-1 < (long)local_180) {
                  pppppppuVar6 = &local_190;
                  pppppppuVar21 = (undefined8 *******)((ulong)local_180 >> 0x38);
                }
                do {
                  while( true ) {
                    plVar3 = (long *)plVar30[4];
                    pppppppuVar10 = (undefined8 *******)plVar30[5];
                    if (-1 < (char)*(byte *)((long)plVar30 + 0x37)) {
                      plVar3 = plVar30 + 4;
                      pppppppuVar10 = (undefined8 *******)(ulong)*(byte *)((long)plVar30 + 0x37);
                    }
                    pppppppuVar4 = pppppppuVar10;
                    if (pppppppuVar21 <= pppppppuVar10) {
                      pppppppuVar4 = pppppppuVar21;
                    }
                    iVar16 = memcmp(pppppppuVar6,plVar3,(size_t)pppppppuVar4);
                    if (iVar16 != 0) break;
                    plVar3 = plVar30;
                    if (pppppppuVar21 == pppppppuVar10) goto joined_r0x00bd7f28;
                    if (pppppppuVar10 <= pppppppuVar21) goto LAB_00bd7ea4;
LAB_00bd7ef4:
                    plVar30 = (long *)*plVar30;
                    plVar3 = plVar29;
                    if (plVar30 == (long *)0x0) goto joined_r0x00bd7f28;
                  }
                  if (iVar16 < 0) goto LAB_00bd7ef4;
LAB_00bd7ea4:
                  plVar30 = (long *)plVar30[1];
                  plVar3 = plVar29;
                } while (plVar30 != (long *)0x0);
              }
joined_r0x00bd7f28:
              if ((long)puVar14 < 0) {
                operator_delete(local_190);
              }
              if (plVar3 != plVar29) {
                pppppppuStack_188 = (undefined8 *******)&DAT_aaaaaaaaaaaaaaaa;
                local_190 = (undefined8 *******)&DAT_aaaaaaaaaaaaaaaa;
                local_180 = &DAT_aaaaaaaaaaaaaaaa;
                lVar26 = (long)*(char *)((long)plVar3 + 0x4f);
                if (lVar26 < 0) {
                  plVar29 = *(long **)((long)plVar3 + 0x38);
                  lVar26 = *(long *)((long)plVar3 + 0x40);
                }
                else {
                  plVar29 = (long *)((long)plVar3 + 0x38);
                }
                FUN_006252b4(&local_190,plVar29,lVar26,0x2f);
                pppppppuVar21 = local_190;
                if (local_190 == pppppppuStack_188) {
LAB_00bd7fe8:
                  bVar1 = true;
                  pppppppuVar6 = pppppppuStack_188;
                }
                else {
                  ppppppuVar5 = ppppppuStack_168;
                  if (-1 < (long)local_160) {
                    ppppppuVar5 = (undefined8 ******)((ulong)local_160 >> 0x38);
                  }
                  if (local_190[1] != ppppppuVar5) goto LAB_00bd7fe8;
                  pppppppuVar6 = local_170;
                  if (-1 < (long)local_160) {
                    pppppppuVar6 = &local_170;
                  }
                  iVar16 = memcmp(*local_190,pppppppuVar6,(size_t)local_190[1]);
                  bVar1 = iVar16 != 0;
                  if (bVar1 || bVar12) {
                    bVar12 = (bool)(iVar16 == 0 | bVar12);
                    pppppppuVar6 = pppppppuStack_188;
                  }
                  else {
                    uVar19 = param_1[1];
                    if (uVar19 < (ulong)param_1[2]) {
                      if (uVar19 == 0) goto LAB_00bd81c0;
                      FUN_00890830(uVar19,lVar20);
                      lVar26 = uVar19 + 0xd8;
                    }
                    else {
                      lVar26 = FUN_00b14350(param_1,lVar20);
                    }
                    param_1[1] = lVar26;
                    FUN_00bde244(param_1);
                    bVar1 = false;
                    bVar12 = true;
                    pppppppuVar21 = local_190;
                    pppppppuVar6 = pppppppuStack_188;
                  }
                }
                pppppppuStack_188 = pppppppuVar21;
                if (pppppppuStack_188 != (undefined8 *******)0x0) {
                  uVar22 = (ulong)((long)pppppppuVar6 + (-0x10 - ((long)pppppppuVar6 << 0x3c))) >> 4
                  ;
                  uVar19 = (ulong)(((long)pppppppuStack_188 - (long)pppppppuVar6 << 0x3c) -
                                  ((long)pppppppuStack_188 - (long)pppppppuVar6)) >> 4;
                  if (uVar22 <= uVar19) {
                    uVar19 = uVar22;
                  }
                  pppppppuVar21 = pppppppuVar6;
                  if ((1 < uVar19) &&
                     ((((int)pppppppuStack_188 - (int)pppppppuVar6 | -(int)pppppppuVar6) & 0xfU) ==
                      0)) {
                    uVar19 = uVar19 & 0xffffffffffffffe;
                    pppppppuVar21 = pppppppuVar6 + uVar19 * -2;
                    do {
                      uVar19 = uVar19 - 2;
                    } while (uVar19 != 0);
                  }
                  while (pppppppuVar21 != pppppppuStack_188) {
                    pppppppuVar21 = pppppppuVar21 + -2;
                    if (pppppppuVar21 == (undefined8 *******)0x0) {
                      pppppppuStack_188 = pppppppuVar6;
                    /* WARNING: Subroutine does not return */
                      std::__Cr::__libcpp_verbose_abort
                                ("%s",
                                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                                );
                    }
                  }
                  operator_delete(pppppppuStack_188);
                  pppppppuVar6 = pppppppuStack_188;
                }
                pppppppuStack_188 = pppppppuVar6;
                if (!bVar1) break;
              }
            }
          }
        }
        if ((long)local_160 < 0) {
          operator_delete(local_170);
        }
        if ((char)local_78 == '\x01') {
          FUN_00890cb8(&local_150);
        }
      }
    }
    lVar25 = lVar25 + 0xa0;
  } while (lVar25 != lVar23);
LAB_00bd8160:
  if (*(long *)(lVar8 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00bd81ec  FUN_00bd81ec =====

void FUN_00bd81ec(undefined8 *param_1,undefined8 param_2,char *param_3)

{
  size_t sVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_3 != (char *)0x0) {
    sVar1 = strlen(param_3);
    puVar2 = (undefined8 *)FUN_00547cac(param_2,param_3,sVar1);
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
             "gen/third_party/libc++/src/include/string:3112: libc++ Hardening assertion __s != nullptr failed: string::append received nullptr\n"
            );
}


// ===== 00bd8268  FUN_00bd8268 =====

long FUN_00bd8268(undefined8 param_1,long param_2)

{
  undefined8 ***pppuVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auVar5 [12];
  char *local_60;
  undefined8 uStack_58;
  undefined1 *local_50;
  undefined8 **local_48;
  ulong uStack_40;
  ulong local_38;
  undefined1 uStack_11;
  
  local_48 = (undefined8 ***)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_005d3510(&local_60,PTR_DAT_00d521b8);
  uVar2 = FUN_00891570(param_2,&local_60,&local_48);
  if ((long)local_50 < 0) {
    operator_delete(local_60);
    if ((uVar2 & 1) != 0) goto LAB_00bd82c0;
LAB_00bd8388:
    uVar2 = FUN_004022fc();
    if ((uVar2 & 1) == 0) {
      FUN_00623bb0(&DAT_001f1906,"../../pc/codec_vendor.cc",0x2fa,"RTX codec ",
                   *(undefined4 *)(param_2 + 0xc)," is missing an associated payload type.");
    }
  }
  else {
    if ((uVar2 & 1) == 0) goto LAB_00bd8388;
LAB_00bd82c0:
    uVar2 = uStack_40;
    pppuVar1 = (undefined8 ***)local_48;
    if (-1 < (long)local_38) {
      uVar2 = local_38 >> 0x38;
      pppuVar1 = &local_48;
    }
    auVar5 = FUN_00675340(pppuVar1,uVar2,10);
    uVar2 = auVar5._0_8_ & 0xffffffff | 0x100000000;
    if ((auVar5._8_4_ & (uint)(auVar5._0_8_ + 0x80000000 >> 0x20 == 0)) == 0) {
      uVar2 = 0;
    }
    if (uVar2 >> 0x20 == 0) {
      uVar2 = FUN_004022fc();
      if ((uVar2 & 1) == 0) {
        local_50 = &uStack_11;
        local_60 = "../../pc/codec_vendor.cc";
        uStack_58 = 0x332;
        FUN_00623bb0(&DAT_001f647d,"../../pc/codec_vendor.cc",0x332,
                     "Couldn\'t convert payload type ",&local_48," of RTX codec ",
                     *(undefined4 *)(param_2 + 0xc)," to an integer.");
      }
    }
    else {
      lVar3 = FUN_008927d0(param_1,uVar2 & 0xffffffff);
      if (lVar3 != 0) goto LAB_00bd8414;
      uVar4 = FUN_004022fc();
      if ((uVar4 & 1) == 0) {
        local_50 = &uStack_11;
        local_60 = "../../pc/codec_vendor.cc";
        uStack_58 = 0x382;
        FUN_00623bb0(&DAT_001f4ea6,"../../pc/codec_vendor.cc",0x382,
                     "Couldn\'t find associated codec with payload type ",uVar2 & 0xffffffff,
                     " for RTX codec ",*(undefined4 *)(param_2 + 0xc),&DAT_001ea377);
      }
    }
  }
  lVar3 = 0;
LAB_00bd8414:
  if ((long)local_38 < 0) {
    operator_delete(local_48);
  }
  return lVar3;
}


// ===== 00bd8448  FUN_00bd8448 =====

void FUN_00bd8448(undefined8 *param_1)

{
  undefined8 *local_18;
  
  *param_1 = &PTR_FUN_00d48838;
  local_18 = param_1 + 3;
  FUN_005fa1cc(&local_18,param_1[4]);
  return;
}


// ===== 00bd8488  FUN_00bd8488 =====

/* WARNING: Removing unreachable block (ram,0x00bd85a8) */
/* WARNING: Removing unreachable block (ram,0x00bd85ac) */
/* WARNING: Removing unreachable block (ram,0x00bd85c8) */

void FUN_00bd8488(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  size_t sVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  puVar7 = (undefined8 *)*param_1;
  puVar1 = (undefined8 *)param_1[1];
  puVar5 = puVar1;
  if (puVar7 == puVar1) {
LAB_00bd850c:
    if ((puVar7 != puVar1) && (puVar6 = puVar7 + 0x1b, puVar5 = puVar7, puVar6 != puVar1)) {
      sVar3 = strlen("CN");
      do {
        uVar4 = puVar6[3];
        plVar2 = (long *)puVar6[2];
        if (-1 < (char)*(byte *)((long)puVar6 + 0x27)) {
          uVar4 = (ulong)*(byte *)((long)puVar6 + 0x27);
          plVar2 = puVar6 + 2;
        }
        uVar4 = FUN_0061ff84(plVar2,uVar4,&DAT_001ff304,sVar3);
        if ((uVar4 & 1) == 0) {
          FUN_00890f48(puVar7,puVar6);
          puVar7 = puVar7 + 0x1b;
        }
        puVar6 = puVar6 + 0x1b;
        puVar5 = puVar7;
      } while (puVar6 != puVar1);
    }
  }
  else {
    sVar3 = strlen("CN");
    do {
      uVar4 = puVar7[3];
      plVar2 = (long *)puVar7[2];
      if (-1 < (char)*(byte *)((long)puVar7 + 0x27)) {
        uVar4 = (ulong)*(byte *)((long)puVar7 + 0x27);
        plVar2 = puVar7 + 2;
      }
      uVar4 = FUN_0061ff84(plVar2,uVar4,&DAT_001ff304,sVar3);
      if ((uVar4 & 1) != 0) goto LAB_00bd850c;
      puVar7 = puVar7 + 0x1b;
    } while (puVar7 != puVar1);
  }
  puVar7 = (undefined8 *)param_1[1];
  if (puVar7 < puVar5) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__vector/vector.h:1170: libc++ Hardening assertion __first <= __last failed: vector::erase(first, last) called with invalid range\n"
              );
  }
  if (puVar5 != puVar7) {
    while (puVar5 != puVar7) {
      puVar7 = puVar7 + -0x1b;
      if (puVar7 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      (**(code **)*puVar7)(puVar7);
    }
    param_1[1] = (long)puVar5;
  }
  return;
}


// ===== 00bd8644  FUN_00bd8644 =====

void FUN_00bd8644(int *param_1,long *param_2,undefined8 *param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined *__s;
  undefined *puVar4;
  undefined *__s_00;
  int iVar5;
  int iVar6;
  size_t sVar7;
  ulong uVar8;
  undefined8 uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  void *local_130 [2];
  char cStack_119;
  void *local_118 [2];
  char cStack_101;
  undefined1 *local_100;
  undefined1 *puStack_f8;
  undefined1 *local_f0;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined8 local_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  undefined4 local_80;
  long local_70;
  
  __s_00 = PTR_DAT_00d521c8;
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  lVar11 = *param_4;
  lVar1 = param_4[1];
  if (lVar11 != lVar1) {
    iVar10 = -1;
    do {
      if (*(int *)(lVar11 + 0xc) == -1) {
        if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0061fd88("../../pc/codec_vendor.cc",0x239,"pt_suggester",&DAT_001f5fa0);
        }
        puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
        local_d0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
        local_c0 = &DAT_aaaaaaaaaaaaaaaa;
        uVar8 = param_3[1];
        puVar3 = (undefined8 *)*param_3;
        if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
          uVar8 = (ulong)*(byte *)((long)param_3 + 0x17);
          puVar3 = param_3;
        }
        puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
        local_e0 = &DAT_aaaaaaaaaaaaaaaa;
        (**(code **)(*param_2 + 0x10))(&local_e0,param_2,puVar3,uVar8,lVar11);
        iVar5 = (int)local_e0;
        if ((int)local_e0 == 0) {
          if (((ulong)puStack_b8 & 0x100) == 0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                      );
          }
          *(uint *)(lVar11 + 0xc) = (uint)(byte)puStack_b8;
        }
        else {
          *param_1 = (int)local_e0;
          if ((long)puStack_c8 < 0) {
            FUN_005478d8(param_1 + 2,puStack_d8,local_d0);
          }
          else {
            *(undefined1 **)(param_1 + 4) = local_d0;
            *(undefined1 **)(param_1 + 2) = puStack_d8;
            *(undefined1 **)(param_1 + 6) = puStack_c8;
          }
          iVar6 = (int)local_c0;
          param_1[8] = iVar6;
          *(undefined4 *)((long)param_1 + 0x23) = local_c0._3_4_;
        }
        if ((long)puStack_c8 < 0) {
          operator_delete(puStack_d8);
        }
        if (iVar5 != 0) goto LAB_00bd8900;
      }
      lVar12 = (long)*(char *)(lVar11 + 0x27);
      if (lVar12 < 0) {
        lVar13 = *(long *)(lVar11 + 0x10);
        lVar12 = *(long *)(lVar11 + 0x18);
      }
      else {
        lVar13 = lVar11 + 0x10;
      }
      sVar7 = strlen(__s_00);
      uVar8 = FUN_0061ff84(lVar13,lVar12,__s_00,sVar7);
      puVar4 = PTR_DAT_00d521c0;
      __s = PTR_DAT_00d51fd8;
      if (((uVar8 & 1) != 0) && (iVar10 == -1)) {
        iVar10 = *(int *)(lVar11 + 0xc);
      }
      lVar11 = lVar11 + 0xd8;
    } while (lVar11 != lVar1);
    if (iVar10 != -1) {
      lVar1 = param_4[1];
      for (lVar11 = *param_4; lVar11 != lVar1; lVar11 = lVar11 + 0xd8) {
        if (*(int *)(lVar11 + 8) == 0) {
          lVar12 = (long)*(char *)(lVar11 + 0x27);
          if (lVar12 < 0) {
            lVar13 = *(long *)(lVar11 + 0x10);
            lVar12 = *(long *)(lVar11 + 0x18);
          }
          else {
            lVar13 = lVar11 + 0x10;
          }
          sVar7 = strlen(__s);
          uVar8 = FUN_0061ff84(lVar13,lVar12,__s,sVar7);
          if (((uVar8 & 1) != 0) && (*(long *)(lVar11 + 0xb8) == 0)) {
            puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
            local_e0 = &DAT_aaaaaaaaaaaaaaaa;
            puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
            local_d0 = &DAT_aaaaaaaaaaaaaaaa;
            puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
            local_c0 = &DAT_aaaaaaaaaaaaaaaa;
            puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
            puStack_b0 = &DAT_aaaaaaaaaaaaaaaa;
            puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
            local_a0 = &DAT_aaaaaaaaaaaaaaaa;
            puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
            puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
            local_80 = 0xaaaaaaaa;
            local_f0 = &DAT_aaaaaaaaaaaaaaaa;
            puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
            local_100 = &DAT_aaaaaaaaaaaaaaaa;
            FUN_00622830(&local_100,&local_e0,100);
            uVar9 = FUN_00622910(&local_100,iVar10);
            uVar9 = FUN_006228b0(uVar9,&DAT_001c7bbb,1);
            FUN_00622910(uVar9,iVar10);
            FUN_005d3510(local_118,puVar4);
            FUN_005d3510(local_130,local_100);
            FUN_008917b0(lVar11,local_118,local_130);
            if (cStack_119 < '\0') {
              operator_delete(local_130[0]);
            }
            if (cStack_101 < '\0') {
              operator_delete(local_118[0]);
            }
          }
        }
      }
    }
  }
  FUN_005ecd48(param_1);
LAB_00bd8900:
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00bd8970  FUN_00bd8970 =====

/* WARNING: Removing unreachable block (ram,0x00bd9884) */
/* WARNING: Removing unreachable block (ram,0x00bd98ac) */
/* WARNING: Removing unreachable block (ram,0x00bd91e8) */
/* WARNING: Removing unreachable block (ram,0x00bd95cc) */
/* WARNING: Removing unreachable block (ram,0x00bd95e4) */
/* WARNING: Removing unreachable block (ram,0x00bd949c) */
/* WARNING: Removing unreachable block (ram,0x00bd8d54) */
/* WARNING: Removing unreachable block (ram,0x00bd907c) */
/* WARNING: Removing unreachable block (ram,0x00bd98d0) */
/* WARNING: Removing unreachable block (ram,0x00bd98e8) */
/* WARNING: Removing unreachable block (ram,0x00bd8c5c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_00bd8970(int *param_1,long param_2,int *param_3,byte *param_4,undefined4 param_5,
                 undefined4 param_6,long param_7,undefined8 param_8,undefined8 param_9)

{
  char *pcVar1;
  undefined1 *puVar2;
  undefined8 *******pppppppuVar3;
  size_t __n;
  size_t sVar4;
  int *piVar5;
  long lVar6;
  byte bVar7;
  byte bVar8;
  long lVar9;
  undefined *puVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  void *pvVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  ulong *puVar18;
  undefined1 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  char *pcVar22;
  char *pcVar23;
  undefined1 auStack_3a0 [8];
  void *local_398;
  char cStack_381;
  undefined1 auStack_378 [8];
  void *local_370;
  char cStack_359;
  undefined1 auStack_350 [8];
  void *local_348;
  char cStack_331;
  undefined1 local_328 [16];
  void *local_318 [2];
  char cStack_301;
  char cStack_2f9;
  int *local_2f8;
  char **ppcStack_2f0;
  undefined8 *local_2e8;
  undefined8 *local_2e0;
  undefined8 *local_2d0;
  undefined8 *puStack_2c8;
  undefined1 *local_2c0;
  char *local_2b0;
  char *pcStack_2a8;
  char *local_2a0;
  undefined1 auStack_290 [31];
  char cStack_271;
  undefined1 auStack_268 [8];
  void *local_260;
  char cStack_249;
  undefined1 auStack_240 [31];
  char local_221;
  undefined1 auStack_218 [8];
  void *local_210;
  char cStack_1f9;
  undefined1 auStack_1f0 [8];
  void *local_1e8;
  char cStack_1d1;
  int local_1c8;
  undefined4 uStack_1c4;
  void *local_1c0;
  ulong uStack_1b8;
  ulong local_1b0;
  undefined4 local_1a8;
  undefined3 uStack_1a4;
  undefined8 *******local_1a0;
  undefined1 *puStack_198;
  undefined8 local_190;
  undefined8 *local_180;
  undefined8 *local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined4 local_164;
  char *local_160;
  char *pcStack_158;
  char *local_150;
  undefined1 *local_148;
  undefined8 local_140;
  undefined8 *puStack_138;
  undefined8 *local_130;
  undefined1 *local_128;
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
  undefined1 *local_88;
  long local_78;
  
  lVar9 = tpidr_el0;
  local_78 = *(long *)(lVar9 + 0x28);
  local_178 = (undefined8 *)0x0;
  local_180 = (undefined8 *)0x0;
  local_170 = 0;
  local_190 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_198 = &DAT_aaaaaaaaaaaaaaaa;
  local_1a0 = (undefined8 *******)&DAT_aaaaaaaaaaaaaaaa;
  local_168 = param_6;
  local_164 = param_5;
  if (*(char *)((long)param_3 + 0x1f) < '\0') {
    FUN_005478d8(&local_1a0,*(undefined8 *)(param_3 + 2),*(undefined8 *)(param_3 + 4));
  }
  else {
    puStack_198 = *(undefined1 **)(param_3 + 4);
    local_1a0 = *(undefined8 ********)(param_3 + 2);
    local_190 = *(undefined1 **)(param_3 + 6);
  }
  if (param_7 != 0) {
    bVar7 = *(byte *)(param_7 + 0x1f);
    puVar19 = *(undefined1 **)(param_7 + 0x10);
    if (-1 < (char)bVar7) {
      puVar19 = (undefined1 *)(ulong)bVar7;
    }
    puVar2 = puStack_198;
    if (-1 < (long)local_190) {
      puVar2 = (undefined1 *)((ulong)local_190 >> 0x38);
    }
    if (puVar19 == puVar2) {
      puVar20 = (undefined8 *)*(void **)(param_7 + 8);
      if (-1 < (char)bVar7) {
        puVar20 = (undefined8 *)(param_7 + 8);
      }
      pppppppuVar3 = local_1a0;
      if (-1 < (long)local_190) {
        pppppppuVar3 = &local_1a0;
      }
      iVar11 = memcmp(puVar20,pppppppuVar3,(size_t)puVar19);
      if (iVar11 == 0) {
        pcStack_158 = &DAT_aaaaaaaaaaaaaaaa;
        local_160 = &DAT_aaaaaaaaaaaaaaaa;
        local_148 = &DAT_aaaaaaaaaaaaaaaa;
        local_150 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_138 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
        local_140 = &DAT_aaaaaaaaaaaaaaaa;
        local_128 = &DAT_aaaaaaaaaaaaaaaa;
        local_130 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
        local_120 = &DAT_aaaaaaaaaaaaaaaa;
        lVar15 = FUN_00b174c8(param_7);
        FUN_00bdd774(&local_160,lVar15 + 0x110);
        iVar11 = (int)local_160;
        if ((int)local_160 == 0) {
          if (((ulong)local_120 & 1) == 0) goto LAB_00bd98ec;
          puVar19 = puStack_198;
          pppppppuVar3 = local_1a0;
          if (-1 < (long)local_190) {
            puVar19 = (undefined1 *)((ulong)local_190 >> 0x38);
            pppppppuVar3 = &local_1a0;
          }
          FUN_00bd503c(auStack_1f0,&puStack_138,pppppppuVar3,puVar19,&local_180,param_9);
          puVar20 = puStack_138;
          if (cStack_1d1 < '\0') {
            operator_delete(local_1e8);
            puVar20 = puStack_138;
          }
        }
        else {
          local_1c8 = (int)local_160;
          puVar18 = (ulong *)((ulong)&local_160 | 8);
          uStack_1b8 = puVar18[1];
          local_1c0 = (void *)*puVar18;
          local_1b0 = puVar18[2];
          local_1a8 = (int)local_140;
          uStack_1a4 = (undefined3)((ulong)local_140 >> 0x20);
          *param_1 = (int)local_160;
          if ((long)local_1b0 < 0) {
            FUN_005478d8(param_1 + 2,local_1c0,uStack_1b8);
            *(undefined1 *)(param_1 + 10) = 0;
            param_1[8] = local_1a8;
            *(uint *)((long)param_1 + 0x23) = CONCAT31(uStack_1a4,local_1a8._3_1_);
            *(undefined1 *)(param_1 + 0x10) = 0;
            puVar20 = puStack_138;
            if ((long)local_1b0 < 0) {
              operator_delete(local_1c0);
              puVar20 = puStack_138;
            }
          }
          else {
            *(ulong *)(param_1 + 4) = uStack_1b8;
            *(void **)(param_1 + 2) = local_1c0;
            *(ulong *)(param_1 + 6) = local_1b0;
            param_1[8] = local_1a8;
            *(undefined4 *)((long)param_1 + 0x23) = local_140._3_4_;
            *(undefined1 *)(param_1 + 10) = 0;
            *(undefined1 *)(param_1 + 0x10) = 0;
            puVar20 = puStack_138;
          }
        }
        puStack_138 = puVar20;
        if ((((ulong)local_120 & 1) != 0) && (puVar21 = local_130, puVar20 != (undefined8 *)0x0)) {
          while (puVar20 != puVar21) {
            puVar21 = puVar21 + -0x1b;
            if (puVar21 == (undefined8 *)0x0) goto LAB_00bd95e8;
            (**(code **)*puVar21)(puVar21);
          }
          local_130 = puVar20;
          operator_delete(puStack_138);
        }
        if (iVar11 != 0) goto LAB_00bd9370;
      }
    }
  }
  if (*param_3 == 0) {
    puVar19 = puStack_198;
    pppppppuVar3 = local_1a0;
    if (-1 < (long)local_190) {
      puVar19 = (undefined1 *)(ulong)local_190._7_1_;
      pppppppuVar3 = &local_1a0;
    }
    FUN_00bd503c(auStack_218,param_2,pppppppuVar3,puVar19,&local_180,param_9);
    if (cStack_1f9 < '\0') {
      operator_delete(local_210);
    }
    puVar19 = puStack_198;
    pppppppuVar3 = local_1a0;
    if (-1 < (long)local_190) {
      puVar19 = (undefined1 *)((ulong)local_190 >> 0x38);
      pppppppuVar3 = &local_1a0;
    }
    FUN_00bd503c(auStack_240,param_2 + 0x18,pppppppuVar3,puVar19,&local_180,param_9);
    if (local_221 < '\0') {
      puVar19 = auStack_240;
      goto LAB_00bd8b8c;
    }
  }
  else {
    puVar19 = puStack_198;
    pppppppuVar3 = local_1a0;
    if (-1 < (long)local_190) {
      puVar19 = (undefined1 *)(ulong)local_190._7_1_;
      pppppppuVar3 = &local_1a0;
    }
    FUN_00bd503c(auStack_268,param_2 + 0x30,pppppppuVar3,puVar19,&local_180,param_9);
    if (cStack_249 < '\0') {
      operator_delete(local_260);
    }
    puVar19 = puStack_198;
    pppppppuVar3 = local_1a0;
    if (-1 < (long)local_190) {
      puVar19 = (undefined1 *)((ulong)local_190 >> 0x38);
      pppppppuVar3 = &local_1a0;
    }
    FUN_00bd503c(auStack_290,param_2 + 0x48,pppppppuVar3,puVar19,&local_180,param_9);
    if (cStack_271 < '\0') {
      puVar19 = auStack_290;
LAB_00bd8b8c:
      operator_delete(*(void **)(puVar19 + 8));
    }
  }
  local_2b0 = (char *)0x0;
  pcStack_2a8 = (char *)0x0;
  local_2a0 = (char *)0x0;
  local_2d0 = (undefined8 *)0x0;
  puStack_2c8 = (undefined8 *)0x0;
  local_2c0 = (undefined1 *)0x0;
  if (*(long *)(param_3 + 0x1c) == *(long *)(param_3 + 0x1e)) {
    if (*param_3 == 0) {
      FUN_00bd9908(&local_2e8,param_2,&local_164,&local_168);
    }
    else {
      FUN_00bd9aa8(&local_2e8,param_2,&local_164,&local_168);
    }
    if (*(long *)(param_3 + 0x10) != *(long *)(param_3 + 0x12)) {
      FUN_00bd7a9c(&local_160,param_3 + 0x10,&local_180,&local_2e8);
      pcVar23 = local_2b0;
      pcVar22 = pcStack_2a8;
      if (local_2b0 != (char *)0x0) {
        while (pcVar23 != pcVar22) {
          pcVar22 = pcVar22 + -0xd8;
          if (pcVar22 == (char *)0x0) goto LAB_00bd95e8;
          (*(code *)**(undefined8 **)pcVar22)(pcVar22);
        }
        pcStack_2a8 = pcVar23;
        operator_delete(local_2b0);
      }
      pcStack_2a8 = pcStack_158;
      local_2b0 = local_160;
      local_2a0 = local_150;
LAB_00bd8eec:
      pcVar22 = pcStack_2a8;
      puVar10 = PTR_DAT_00d52238;
      if ((*param_3 == 0) && ((*param_4 & 1) == 0)) {
        FUN_00bd8488(&local_2b0);
      }
      else if ((*param_3 == 1) && (((param_4[4] & 1) != 0 && (local_2b0 != pcStack_2a8)))) {
        pcVar23 = local_2b0 + 0x38;
        do {
          uVar13 = FUN_00891aec(pcVar23 + -0x38);
          if ((uVar13 & 1) != 0) {
            if (pcVar23[0x18] == '\x01') {
              FUN_00547bf8();
            }
            else {
              FUN_005d3510(pcVar23,puVar10);
              pcVar23[0x18] = '\x01';
            }
          }
          pcVar1 = pcVar23 + 0xa0;
          pcVar23 = pcVar23 + 0xd8;
        } while (pcVar1 != pcVar22);
      }
      pcStack_158 = &DAT_aaaaaaaaaaaaaaaa;
      local_160 = &DAT_aaaaaaaaaaaaaaaa;
      local_148 = &DAT_aaaaaaaaaaaaaaaa;
      local_150 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_138 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
      local_140 = &DAT_aaaaaaaaaaaaaaaa;
      local_128 = &DAT_aaaaaaaaaaaaaaaa;
      local_130 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
      local_120 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_00bdd774(&local_160,param_8);
      iVar11 = (int)local_160;
      if ((int)local_160 == 0) {
        if (((ulong)local_120 & 1) == 0) {
LAB_00bd98ec:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                    );
        }
        FUN_00bd9c48(auStack_378,&local_2b0,&puStack_138,&local_2d0,
                     *(long *)(param_3 + 0x10) == *(long *)(param_3 + 0x12));
        if (cStack_359 < '\0') goto LAB_00bd9120;
      }
      else {
        local_1c8 = (int)local_160;
        puVar18 = (ulong *)((ulong)&local_160 | 8);
        uStack_1b8 = puVar18[1];
        local_1c0 = (void *)*puVar18;
        local_1b0 = puVar18[2];
        local_1a8 = (int)local_140;
        uStack_1a4 = (undefined3)((ulong)local_140 >> 0x20);
        *param_1 = (int)local_160;
        if ((long)local_1b0 < 0) {
          FUN_005478d8(param_1 + 2,local_1c0,uStack_1b8);
          *(undefined1 *)(param_1 + 10) = 0;
          param_1[8] = local_1a8;
          *(uint *)((long)param_1 + 0x23) = CONCAT31(uStack_1a4,local_1a8._3_1_);
          *(undefined1 *)(param_1 + 0x10) = 0;
          local_370 = local_1c0;
          if ((long)local_1b0 < 0) {
LAB_00bd9120:
            operator_delete(local_370);
          }
        }
        else {
          *(ulong *)(param_1 + 4) = uStack_1b8;
          *(void **)(param_1 + 2) = local_1c0;
          *(ulong *)(param_1 + 6) = local_1b0;
          param_1[8] = local_1a8;
          *(undefined4 *)((long)param_1 + 0x23) = local_140._3_4_;
          *(undefined1 *)(param_1 + 10) = 0;
          *(undefined1 *)(param_1 + 0x10) = 0;
        }
      }
      puVar20 = puStack_138;
      if ((((ulong)local_120 & 1) != 0) && (puVar21 = local_130, puStack_138 != (undefined8 *)0x0))
      {
        while (puVar20 != puVar21) {
          puVar21 = puVar21 + -0x1b;
          if (puVar21 == (undefined8 *)0x0) goto LAB_00bd95e8;
          (**(code **)*puVar21)(puVar21);
        }
        local_130 = puVar20;
        operator_delete(puStack_138);
      }
      puVar20 = local_2e8;
      if (local_2e8 != (undefined8 *)0x0) {
        while (puVar20 != local_2e0) {
          puVar21 = local_2e0 + -0x1b;
          if (puVar21 == (undefined8 *)0x0) goto LAB_00bd95e8;
          (**(code **)*puVar21)(puVar21);
          local_2e0 = puVar21;
        }
        operator_delete(local_2e8);
      }
      goto joined_r0x00bd91e0;
    }
    if ((param_7 == 0) || ((*(byte *)(param_7 + 4) & 1) != 0)) {
LAB_00bd8e90:
      puVar19 = puStack_198;
      pppppppuVar3 = local_1a0;
      if (-1 < (long)local_190) {
        puVar19 = (undefined1 *)((ulong)local_190 >> 0x38);
        pppppppuVar3 = &local_1a0;
      }
      FUN_00bd503c(auStack_350,&local_2e8,pppppppuVar3,puVar19,&local_2b0);
      if (cStack_331 < '\0') {
        operator_delete(local_348);
      }
      goto LAB_00bd8eec;
    }
    bVar7 = *(byte *)(param_7 + 0x1f);
    bVar8 = *(byte *)((long)param_3 + 0x1f);
    __n = *(size_t *)(param_7 + 0x10);
    if (-1 < (char)bVar7) {
      __n = (ulong)bVar7;
    }
    sVar4 = *(size_t *)(param_3 + 4);
    if (-1 < (char)bVar8) {
      sVar4 = (ulong)bVar8;
    }
    if (__n != sVar4) goto LAB_00bd8e90;
    puVar20 = (undefined8 *)(param_7 + 8);
    puVar21 = (undefined8 *)*puVar20;
    if (-1 < (char)bVar7) {
      puVar21 = puVar20;
    }
    piVar5 = *(int **)(param_3 + 2);
    if (-1 < (char)bVar8) {
      piVar5 = param_3 + 2;
    }
    iVar11 = memcmp(puVar21,piVar5,__n);
    if (iVar11 != 0) goto LAB_00bd8e90;
    iVar11 = *param_3;
    lVar15 = FUN_00b174c8(param_7);
    if (lVar15 != 0) {
      plVar16 = (long *)FUN_00b174c8(param_7);
      iVar12 = (**(code **)(*plVar16 + 0x10))();
      if (iVar12 == iVar11) {
        lVar17 = FUN_00b174c8(param_7);
        lVar6 = *(long *)(lVar17 + 0x118);
        for (lVar15 = *(long *)(lVar17 + 0x110); lVar15 != lVar6; lVar15 = lVar15 + 0xd8) {
          pcStack_158 = &DAT_aaaaaaaaaaaaaaaa;
          local_160 = &DAT_aaaaaaaaaaaaaaaa;
          local_148 = &DAT_aaaaaaaaaaaaaaaa;
          local_150 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_138 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
          local_140 = &DAT_aaaaaaaaaaaaaaaa;
          local_128 = &DAT_aaaaaaaaaaaaaaaa;
          local_130 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
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
          local_88 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
          FUN_00894eec(&local_160,lVar17 + 0x110,&local_180,lVar15);
          pcVar22 = pcStack_2a8;
          if ((char)local_88 == '\x01') {
            if (pcStack_2a8 < local_2a0) {
              if (pcStack_2a8 == (char *)0x0) goto LAB_00bd96f4;
              FUN_00890830(pcStack_2a8,&local_160);
              pcStack_2a8 = pcVar22 + 0xd8;
            }
            else {
              pcStack_2a8 = (char *)FUN_00b14350(&local_2b0,&local_160);
            }
            FUN_00bde244(&local_2b0);
            if ((char)local_88 == '\x01') {
              FUN_00890cb8(&local_160);
            }
          }
        }
        goto LAB_00bd8e90;
      }
    }
    uVar13 = FUN_004249b0();
    if ((uVar13 & 1) == 0) {
      local_160 = "../../pc/codec_vendor.cc";
      pcStack_158 = (char *)0x18fb;
      local_150 = &cStack_2f9;
      FUN_00548c1c(local_318,"Media type for content with mid=\'",puVar20);
      FUN_00bd81ec(&local_1c8,local_318,"\' does not match previous type.");
      ppcStack_2f0 = &local_160;
      local_2f8 = &local_1c8;
      local_328 = FUN_005eceec(10);
      FUN_00623bb0(&DAT_00255ab6,*ppcStack_2f0,*(undefined4 *)(ppcStack_2f0 + 1),local_2f8,
                   &DAT_001a2df6,local_328,&DAT_001ca519);
      if ((long)uStack_1b8 < 0) {
        operator_delete((void *)CONCAT44(uStack_1c4,local_1c8));
      }
      if (cStack_301 < '\0') {
        operator_delete(local_318[0]);
      }
    }
    FUN_00548c1c(local_318,"Media type for content with mid=\'",puVar20);
    FUN_00bd81ec(&local_1c8,local_318,"\' does not match previous type.");
    pvVar14 = local_1c0;
    piVar5 = (int *)CONCAT44(uStack_1c4,local_1c8);
    if (-1 < (long)uStack_1b8) {
      pvVar14 = (void *)(uStack_1b8 >> 0x38);
      piVar5 = &local_1c8;
    }
    FUN_00b0092c(&local_160,10,piVar5,pvVar14);
    *param_1 = (int)local_160;
    iVar11 = (int)local_140;
    *(undefined1 *)(param_1 + 10) = 0;
    *(char **)(param_1 + 4) = local_150;
    *(char **)(param_1 + 2) = pcStack_158;
    *(undefined1 **)(param_1 + 6) = local_148;
    param_1[8] = iVar11;
    *(undefined4 *)((long)param_1 + 0x23) = local_140._3_4_;
    *(undefined1 *)(param_1 + 0x10) = 0;
    if ((long)uStack_1b8 < 0) {
      operator_delete((void *)CONCAT44(uStack_1c4,local_1c8));
    }
    if (cStack_301 < '\0') {
      operator_delete(local_318[0]);
    }
    FUN_00bdaf14(&local_2e8);
    puVar21 = local_2d0;
    puVar20 = puStack_2c8;
  }
  else {
    pcStack_158 = &DAT_aaaaaaaaaaaaaaaa;
    local_160 = &DAT_aaaaaaaaaaaaaaaa;
    local_148 = &DAT_aaaaaaaaaaaaaaaa;
    local_150 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_138 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
    local_140 = &DAT_aaaaaaaaaaaaaaaa;
    local_128 = &DAT_aaaaaaaaaaaaaaaa;
    local_130 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
    local_120 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00bdd774(&local_160);
    puVar19 = local_128;
    puVar21 = local_130;
    puVar20 = puStack_138;
    iVar11 = (int)local_160;
    if ((int)local_160 == 0) {
      if (((ulong)local_120 & 1) == 0) goto LAB_00bd98ec;
      puStack_138 = (undefined8 *)0x0;
      local_130 = (undefined8 *)0x0;
      local_128 = (undefined1 *)0x0;
      local_2d0 = puVar20;
      puStack_2c8 = puVar21;
      local_2c0 = puVar19;
    }
    else {
      puVar18 = (ulong *)((ulong)&local_160 | 8);
      uStack_1b8 = puVar18[1];
      local_1c0 = (void *)*puVar18;
      local_1b0 = puVar18[2];
      local_1c8 = (int)local_160;
      local_1a8 = (int)local_140;
      *param_1 = (int)local_160;
      uStack_1a4 = (undefined3)((ulong)local_140 >> 0x20);
      if ((long)local_1b0 < 0) {
        FUN_005478d8(param_1 + 2,local_1c0,uStack_1b8);
        *(undefined1 *)(param_1 + 10) = 0;
        param_1[8] = local_1a8;
        *(uint *)((long)param_1 + 0x23) = CONCAT31(uStack_1a4,local_1a8._3_1_);
        *(undefined1 *)(param_1 + 0x10) = 0;
        puVar20 = puStack_138;
        if ((long)local_1b0 < 0) {
          operator_delete(local_1c0);
          puVar20 = puStack_138;
        }
      }
      else {
        *(undefined1 *)(param_1 + 10) = 0;
        *(ulong *)(param_1 + 4) = uStack_1b8;
        *(void **)(param_1 + 2) = local_1c0;
        *(ulong *)(param_1 + 6) = local_1b0;
        param_1[8] = local_1a8;
        *(undefined4 *)((long)param_1 + 0x23) = local_140._3_4_;
        *(undefined1 *)(param_1 + 0x10) = 0;
      }
      puStack_138 = puVar20;
      if ((((ulong)local_120 & 1) != 0) && (puVar21 = local_130, puVar20 != (undefined8 *)0x0)) {
        while (puVar20 != puVar21) {
          puVar21 = puVar21 + -0x1b;
          if (puVar21 == (undefined8 *)0x0) goto LAB_00bd95e8;
          (**(code **)*puVar21)(puVar21);
        }
        local_130 = puVar20;
        operator_delete(puStack_138);
      }
    }
joined_r0x00bd91e0:
    if (iVar11 == 0) {
      FUN_00bd8644(auStack_3a0,param_9,param_3 + 2,&local_2d0);
      if (cStack_381 < '\0') {
        operator_delete(local_398);
      }
      puVar21 = puStack_2c8;
      puVar20 = local_2d0;
      *param_1 = 0;
      *(undefined1 *)((long)param_1 + 0x26) = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      uVar13 = (long)puStack_2c8 - (long)local_2d0;
      param_1[2] = 0;
      param_1[3] = 0;
      *(undefined8 *)((long)param_1 + 0x1d) = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
      if (uVar13 != 0) {
        if (0x12f684bda12f684 < (ulong)(((long)uVar13 >> 3) * -0x7b425ed097b425ed)) {
                    /* WARNING: Subroutine does not return */
          FUN_0088fd20();
        }
        pvVar14 = operator_new(uVar13);
        *(void **)(param_1 + 10) = pvVar14;
        *(void **)(param_1 + 0xc) = pvVar14;
        *(ulong *)(param_1 + 0xe) = (long)pvVar14 + uVar13;
        do {
          if (pvVar14 == (void *)0x0) {
LAB_00bd96f4:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          FUN_00890830(pvVar14,puVar20);
          puVar20 = puVar20 + 0x1b;
          pvVar14 = (void *)((long)pvVar14 + 0xd8);
        } while (puVar20 != puVar21);
        *(void **)(param_1 + 0xc) = pvVar14;
      }
      *(undefined1 *)(param_1 + 0x10) = 1;
    }
    puVar21 = local_2d0;
    puVar20 = puStack_2c8;
  }
  local_2d0 = puVar21;
  puStack_2c8 = puVar20;
  pcVar22 = local_2b0;
  if (puVar21 != (undefined8 *)0x0) {
    while (puVar21 != puVar20) {
      puVar20 = puVar20 + -0x1b;
      if (puVar20 == (undefined8 *)0x0) goto LAB_00bd95e8;
      (**(code **)*puVar20)(puVar20);
    }
    operator_delete(local_2d0);
    pcVar22 = local_2b0;
  }
  local_2b0 = pcVar22;
  pcVar23 = pcStack_2a8;
  if (pcVar22 != (char *)0x0) {
    while (pcVar22 != pcVar23) {
      pcVar23 = pcVar23 + -0xd8;
      if (pcVar23 == (char *)0x0) goto LAB_00bd95e8;
      (*(code *)**(undefined8 **)pcVar23)(pcVar23);
    }
    pcStack_2a8 = pcVar22;
    operator_delete(local_2b0);
  }
LAB_00bd9370:
  puVar20 = local_180;
  if ((long)local_190 < 0) {
    operator_delete(local_1a0);
    puVar20 = local_180;
  }
  local_180 = puVar20;
  puVar21 = local_178;
  if (puVar20 != (undefined8 *)0x0) {
    while (puVar20 != puVar21) {
      puVar21 = puVar21 + -0x1b;
      if (puVar21 == (undefined8 *)0x0) {
LAB_00bd95e8:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      (**(code **)*puVar21)(puVar21);
    }
    local_178 = puVar20;
    operator_delete(local_180);
  }
  if (*(long *)(lVar9 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00bd9908  FUN_00bd9908 =====

void FUN_00bd9908(undefined8 *param_1,long *param_2,undefined4 *param_3,int *param_4)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  void *pvVar4;
  long lVar5;
  undefined4 local_24;
  
  iVar2 = *param_4;
  if (iVar2 < 3) {
    if (iVar2 != 0) {
      if (iVar2 == 1) {
        lVar5 = *param_2;
        lVar1 = param_2[1];
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        uVar3 = lVar1 - lVar5;
        if (uVar3 == 0) {
          return;
        }
        if (0x12f684bda12f684 < (ulong)(((long)uVar3 >> 3) * -0x7b425ed097b425ed)) {
LAB_00bd9aa0:
                    /* WARNING: Subroutine does not return */
          FUN_0088fd20();
        }
        pvVar4 = operator_new(uVar3);
        *param_1 = pvVar4;
        param_1[2] = (long)pvVar4 + uVar3;
        do {
          if (pvVar4 == (void *)0x0) goto LAB_00bd9a8c;
          FUN_00890830(pvVar4,lVar5);
          lVar5 = lVar5 + 0xd8;
          pvVar4 = (void *)((long)pvVar4 + 0xd8);
        } while (lVar5 != lVar1);
      }
      else {
        if (iVar2 != 2) goto LAB_00bd9aa4;
        lVar5 = param_2[3];
        lVar1 = param_2[4];
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        uVar3 = lVar1 - lVar5;
        if (uVar3 == 0) {
          return;
        }
        if (0x12f684bda12f684 < (ulong)(((long)uVar3 >> 3) * -0x7b425ed097b425ed))
        goto LAB_00bd9aa0;
        pvVar4 = operator_new(uVar3);
        *param_1 = pvVar4;
        param_1[2] = (long)pvVar4 + uVar3;
        do {
          if (pvVar4 == (void *)0x0) {
LAB_00bd9a8c:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          FUN_00890830(pvVar4,lVar5);
          lVar5 = lVar5 + 0xd8;
          pvVar4 = (void *)((long)pvVar4 + 0xd8);
        } while (lVar5 != lVar1);
      }
      param_1[1] = pvVar4;
      return;
    }
  }
  else if (1 < iVar2 - 3U) {
LAB_00bd9aa4:
                    /* WARNING: Subroutine does not return */
    FUN_0061ff28();
  }
  local_24 = FUN_00bde2a8(*param_3);
  FUN_00bd76fc(param_1,param_2,&local_24);
  return;
}


// ===== 00bd9aa8  FUN_00bd9aa8 =====

void FUN_00bd9aa8(undefined8 *param_1,long param_2,undefined4 *param_3,int *param_4)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  void *pvVar4;
  long lVar5;
  undefined4 local_24;
  
  iVar2 = *param_4;
  if (iVar2 < 3) {
    if (iVar2 != 0) {
      if (iVar2 == 1) {
        lVar5 = *(long *)(param_2 + 0x30);
        lVar1 = *(long *)(param_2 + 0x38);
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        uVar3 = lVar1 - lVar5;
        if (uVar3 == 0) {
          return;
        }
        if (0x12f684bda12f684 < (ulong)(((long)uVar3 >> 3) * -0x7b425ed097b425ed)) {
LAB_00bd9c40:
                    /* WARNING: Subroutine does not return */
          FUN_0088fd20();
        }
        pvVar4 = operator_new(uVar3);
        *param_1 = pvVar4;
        param_1[2] = (long)pvVar4 + uVar3;
        do {
          if (pvVar4 == (void *)0x0) goto LAB_00bd9c2c;
          FUN_00890830(pvVar4,lVar5);
          lVar5 = lVar5 + 0xd8;
          pvVar4 = (void *)((long)pvVar4 + 0xd8);
        } while (lVar5 != lVar1);
      }
      else {
        if (iVar2 != 2) goto LAB_00bd9c44;
        lVar5 = *(long *)(param_2 + 0x48);
        lVar1 = *(long *)(param_2 + 0x50);
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        uVar3 = lVar1 - lVar5;
        if (uVar3 == 0) {
          return;
        }
        if (0x12f684bda12f684 < (ulong)(((long)uVar3 >> 3) * -0x7b425ed097b425ed))
        goto LAB_00bd9c40;
        pvVar4 = operator_new(uVar3);
        *param_1 = pvVar4;
        param_1[2] = (long)pvVar4 + uVar3;
        do {
          if (pvVar4 == (void *)0x0) {
LAB_00bd9c2c:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          FUN_00890830(pvVar4,lVar5);
          lVar5 = lVar5 + 0xd8;
          pvVar4 = (void *)((long)pvVar4 + 0xd8);
        } while (lVar5 != lVar1);
      }
      param_1[1] = pvVar4;
      return;
    }
  }
  else if (1 < iVar2 - 3U) {
LAB_00bd9c44:
                    /* WARNING: Subroutine does not return */
    FUN_0061ff28();
  }
  local_24 = FUN_00bde2a8(*param_3);
  FUN_00bd78cc(param_1,param_2,&local_24);
  return;
}


// ===== 00bd9c48  FUN_00bd9c48 =====

/* WARNING: Removing unreachable block (ram,0x00bda520) */
/* WARNING: Removing unreachable block (ram,0x00bda800) */
/* WARNING: Removing unreachable block (ram,0x00bda774) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00bd9c48(int *param_1,long *param_2,long *param_3,undefined8 *param_4,uint param_5)

{
  undefined8 ******ppppppuVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  byte bVar5;
  byte bVar6;
  long lVar7;
  undefined8 ******ppppppuVar8;
  undefined *puVar9;
  undefined4 uVar10;
  int iVar11;
  size_t sVar12;
  ulong uVar13;
  undefined8 ******ppppppuVar14;
  ulong uVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 *******pppppppuVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  undefined8 *******pppppppuVar22;
  long lVar23;
  undefined8 *******pppppppuVar24;
  long lVar25;
  long lVar26;
  char *pcVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  undefined8 uVar30;
  undefined1 auVar31 [12];
  undefined8 *local_2a0;
  undefined8 *local_298;
  undefined8 *local_290;
  undefined8 *******local_288;
  undefined8 *******local_280;
  long local_278;
  undefined8 *******local_270;
  undefined8 ******ppppppuStack_268;
  ulong local_260;
  char local_258;
  undefined1 uStack_241;
  undefined8 *******local_240;
  undefined8 uStack_238;
  undefined8 *******local_230;
  undefined1 *puStack_228;
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
  undefined8 *******local_160;
  undefined8 uStack_158;
  undefined8 *******local_150;
  undefined1 *puStack_148;
  undefined8 local_140;
  undefined8 *puStack_138;
  undefined8 *local_130;
  undefined8 *******local_128;
  undefined1 *local_120;
  undefined1 *puStack_118;
  undefined1 *local_110;
  undefined1 *puStack_108;
  undefined1 *local_100;
  undefined1 *puStack_f8;
  undefined1 *puStack_f0;
  undefined1 *puStack_e8;
  undefined1 *local_e0;
  undefined8 *******pppppppuStack_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined8 *******local_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  long local_78;
  
  lVar7 = tpidr_el0;
  local_78 = *(long *)(lVar7 + 0x28);
  lVar26 = *param_2;
  lVar4 = param_2[1];
  local_280 = (undefined8 *******)0x0;
  local_278 = 0;
  local_290 = (undefined8 *)0x0;
  local_2a0 = (undefined8 *)0x0;
  local_298 = (undefined8 *)0x0;
  local_288 = &local_280;
  if (lVar26 != lVar4) {
    pcVar27 = PTR_DAT_00d51c78;
    do {
      uStack_158 = &DAT_aaaaaaaaaaaaaaaa;
      local_160 = (undefined8 *******)&DAT_aaaaaaaaaaaaaaaa;
      puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
      local_150 = (undefined8 *******)&DAT_aaaaaaaaaaaaaaaa;
      puStack_138 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
      local_140 = &DAT_aaaaaaaaaaaaaaaa;
      local_128 = (undefined8 *******)&DAT_aaaaaaaaaaaaaaaa;
      local_130 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
      puStack_118 = &DAT_aaaaaaaaaaaaaaaa;
      local_120 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
      local_110 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
      local_100 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_f0 = &DAT_aaaaaaaaaaaaaaaa;
      pppppppuStack_d8 = (undefined8 *******)&DAT_aaaaaaaaaaaaaaaa;
      local_e0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
      local_d0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
      local_c0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
      local_b0 = (undefined8 *******)&DAT_aaaaaaaaaaaaaaaa;
      puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
      local_a0 = &DAT_aaaaaaaaaaaaaaaa;
      local_88 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_00894eec(&local_160,param_2,param_3,lVar26);
      if ((char)local_88 == '\x01') {
        puStack_228 = &DAT_aaaaaaaaaaaaaaaa;
        local_230 = (undefined8 *******)&DAT_aaaaaaaaaaaaaaaa;
        puStack_218 = &DAT_aaaaaaaaaaaaaaaa;
        local_220 = &DAT_aaaaaaaaaaaaaaaa;
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
        uStack_238 = &DAT_aaaaaaaaaaaaaaaa;
        local_240 = (undefined8 *******)&DAT_aaaaaaaaaaaaaaaa;
        local_170 = &DAT_aaaaaaaaaaaaaaaa;
        FUN_00890830(&local_240,lVar26);
        if (((ulong)local_88 & 1) == 0) goto LAB_00bda8d8;
        bVar5 = *(byte *)(lVar26 + 0x50);
        puVar19 = (undefined8 *)(lVar26 + 0x38);
        if (((byte)local_110 & bVar5) == 0) {
          if (bVar5 != (byte)local_110) goto LAB_00bd9dcc;
LAB_00bda058:
          local_270 = (undefined8 *******)((ulong)local_270 & 0xffffffffffffff00);
          local_258 = '\0';
          if (bVar5 != 0) {
            if (*(char *)(lVar26 + 0x4f) < '\0') {
              FUN_005478d8(&local_270,*(undefined8 *)(lVar26 + 0x38),*(undefined8 *)(lVar26 + 0x40))
              ;
            }
            else {
              ppppppuStack_268 = *(undefined8 *******)(lVar26 + 0x40);
              local_270 = (undefined8 *******)*puVar19;
              local_260 = *(ulong *)(lVar26 + 0x48);
            }
            local_258 = '\x01';
          }
        }
        else {
          if (((ulong)local_110 & 1) == 0) goto LAB_00bda914;
          bVar6 = *(byte *)(lVar26 + 0x4f);
          puVar2 = *(undefined1 **)(lVar26 + 0x40);
          if (-1 < (char)bVar6) {
            puVar2 = (undefined1 *)(ulong)bVar6;
          }
          puVar3 = local_120;
          if (-1 < (long)puStack_118) {
            puVar3 = (undefined1 *)((ulong)puStack_118 >> 0x38);
          }
          if (puVar2 == puVar3) {
            puVar29 = (undefined8 *)*puVar19;
            if (-1 < (char)bVar6) {
              puVar29 = puVar19;
            }
            pppppppuVar22 = local_128;
            if (-1 < (long)puStack_118) {
              pppppppuVar22 = &local_128;
            }
            iVar11 = memcmp(puVar29,pppppppuVar22,(size_t)puVar2);
            if (iVar11 == 0) goto LAB_00bda058;
          }
LAB_00bd9dcc:
          local_258 = '\0';
          local_270 = (undefined8 *******)((ulong)local_270 & 0xffffffffffffff00);
        }
        FUN_005e7520(&puStack_208,&local_270);
        if ((local_258 == '\x01') && ((long)local_260 < 0)) {
          operator_delete(local_270);
        }
        if (((ulong)local_88 & 1) == 0) goto LAB_00bda8d8;
        FUN_00891984(&local_240,&local_160);
        iVar11 = FUN_00891b68(&local_240);
        if (iVar11 == 4) {
          if (((ulong)local_88 & 1) == 0) goto LAB_00bda8b0;
          FUN_005d3510(&local_270,PTR_s_rtx_time_00d521b0);
          uVar13 = local_260;
          pppppppuVar22 = &local_b0;
          if (local_b0 != (undefined8 *******)0x0) {
            pppppppuVar22 = local_b0;
            pppppppuVar18 = local_270;
            ppppppuVar14 = ppppppuStack_268;
            if (-1 < (long)local_260) {
              pppppppuVar18 = &local_270;
              ppppppuVar14 = (undefined8 ******)(local_260 >> 0x38);
            }
            do {
              while( true ) {
                pppppppuVar24 = (undefined8 *******)pppppppuVar22[4];
                ppppppuVar8 = pppppppuVar22[5];
                if (-1 < (char)*(byte *)((long)pppppppuVar22 + 0x37)) {
                  pppppppuVar24 = pppppppuVar22 + 4;
                  ppppppuVar8 = (undefined8 ******)(ulong)*(byte *)((long)pppppppuVar22 + 0x37);
                }
                ppppppuVar1 = ppppppuVar8;
                if (ppppppuVar14 <= ppppppuVar8) {
                  ppppppuVar1 = ppppppuVar14;
                }
                iVar11 = memcmp(pppppppuVar18,pppppppuVar24,(size_t)ppppppuVar1);
                pcVar27 = PTR_DAT_00d51c78;
                if (iVar11 != 0) break;
                if (ppppppuVar14 == ppppppuVar8) goto LAB_00bd9ee0;
                if (ppppppuVar8 <= ppppppuVar14) goto LAB_00bd9e78;
LAB_00bd9ec8:
                pppppppuVar22 = (undefined8 *******)*pppppppuVar22;
                if (pppppppuVar22 == (undefined8 *******)0x0) goto LAB_00bd9ed0;
              }
              if (iVar11 < 0) goto LAB_00bd9ec8;
LAB_00bd9e78:
              pppppppuVar24 = pppppppuVar22 + 1;
              pppppppuVar22 = (undefined8 *******)*pppppppuVar24;
            } while ((undefined8 *******)*pppppppuVar24 != (undefined8 *******)0x0);
LAB_00bd9ed0:
            pppppppuVar22 = &local_b0;
          }
LAB_00bd9ee0:
          puVar9 = PTR_s_rtx_time_00d521b0;
          if ((long)uVar13 < 0) {
            operator_delete(local_270);
            puVar9 = PTR_s_rtx_time_00d521b0;
          }
joined_r0x00bd9ff4:
          if (((ulong)local_88 & 1) == 0) goto LAB_00bda8b0;
          if ((undefined8 ********)pppppppuVar22 != &local_b0) {
            FUN_005d3510(&local_270,puVar9);
            FUN_008917b0(&local_240,&local_270,(undefined8 *******)((long)pppppppuVar22 + 0x38));
            if ((long)local_260 < 0) {
              operator_delete(local_270);
            }
          }
        }
        else {
          iVar11 = FUN_00891b68(&local_240);
          if (iVar11 == 1) {
            if (((ulong)local_88 & 1) == 0) goto LAB_00bda8b0;
            FUN_005d3510(&local_270,PTR_DAT_00d521c0);
            uVar13 = local_260;
            pppppppuVar22 = &local_b0;
            if (local_b0 != (undefined8 *******)0x0) {
              pppppppuVar22 = local_b0;
              pppppppuVar18 = local_270;
              ppppppuVar14 = ppppppuStack_268;
              if (-1 < (long)local_260) {
                pppppppuVar18 = &local_270;
                ppppppuVar14 = (undefined8 ******)(local_260 >> 0x38);
              }
              do {
                while( true ) {
                  pppppppuVar24 = (undefined8 *******)pppppppuVar22[4];
                  ppppppuVar8 = pppppppuVar22[5];
                  if (-1 < (char)*(byte *)((long)pppppppuVar22 + 0x37)) {
                    pppppppuVar24 = pppppppuVar22 + 4;
                    ppppppuVar8 = (undefined8 ******)(ulong)*(byte *)((long)pppppppuVar22 + 0x37);
                  }
                  ppppppuVar1 = ppppppuVar8;
                  if (ppppppuVar14 <= ppppppuVar8) {
                    ppppppuVar1 = ppppppuVar14;
                  }
                  iVar11 = memcmp(pppppppuVar18,pppppppuVar24,(size_t)ppppppuVar1);
                  pcVar27 = PTR_DAT_00d51c78;
                  if (iVar11 != 0) break;
                  if (ppppppuVar14 == ppppppuVar8) goto LAB_00bd9fdc;
                  if (ppppppuVar8 <= ppppppuVar14) goto LAB_00bd9f74;
LAB_00bd9fc4:
                  pppppppuVar22 = (undefined8 *******)*pppppppuVar22;
                  if (pppppppuVar22 == (undefined8 *******)0x0) goto LAB_00bd9fcc;
                }
                if (iVar11 < 0) goto LAB_00bd9fc4;
LAB_00bd9f74:
                pppppppuVar24 = pppppppuVar22 + 1;
                pppppppuVar22 = (undefined8 *******)*pppppppuVar24;
              } while ((undefined8 *******)*pppppppuVar24 != (undefined8 *******)0x0);
LAB_00bd9fcc:
              pppppppuVar22 = &local_b0;
            }
LAB_00bd9fdc:
            puVar9 = PTR_DAT_00d521c0;
            if ((long)uVar13 < 0) {
              operator_delete(local_270);
              puVar9 = PTR_DAT_00d521c0;
            }
            goto joined_r0x00bd9ff4;
          }
        }
        lVar25 = (long)*(char *)(lVar26 + 0x27);
        lVar16 = lVar26 + 0x10;
        if (lVar25 < 0) {
          lVar23 = *(long *)(lVar26 + 0x10);
          lVar25 = *(long *)(lVar26 + 0x18);
        }
        else {
          lVar23 = lVar26 + 0x10;
        }
        sVar12 = strlen(pcVar27);
        uVar13 = FUN_0061ff84(lVar23,lVar25,pcVar27,sVar12);
        if ((uVar13 & 1) != 0) {
          if (((ulong)local_88 & 1) == 0) goto LAB_00bda8b0;
          FUN_00898488(lVar26 + 0xa8,&puStack_b8,&puStack_198);
        }
        puVar9 = PTR_DAT_00d51c90;
        lVar25 = (long)*(char *)(lVar26 + 0x27);
        if (lVar25 < 0) {
          lVar16 = *(long *)(lVar26 + 0x10);
          lVar25 = *(long *)(lVar26 + 0x18);
        }
        sVar12 = strlen(PTR_DAT_00d51c90);
        uVar13 = FUN_0061ff84(lVar16,lVar25,puVar9,sVar12);
        if ((uVar13 & 1) != 0) {
          if (((ulong)local_88 & 1) == 0) goto LAB_00bda8b0;
          FUN_008980b8(lVar26 + 0xa8,&puStack_b8,&puStack_198);
          if (((ulong)local_88 & 1) == 0) goto LAB_00bda8d8;
          bVar5 = *(byte *)(lVar26 + 0xa0);
          puVar19 = (undefined8 *)(lVar26 + 0x88);
          if (((byte)local_c0 & bVar5) == 0) {
            if (bVar5 != (byte)local_c0) goto LAB_00bda184;
LAB_00bda314:
            local_270 = (undefined8 *******)((ulong)local_270 & 0xffffffffffffff00);
            local_258 = '\0';
            if (bVar5 != 0) {
              if (*(char *)(lVar26 + 0x9f) < '\0') {
                FUN_005478d8(&local_270,*(undefined8 *)(lVar26 + 0x88),
                             *(undefined8 *)(lVar26 + 0x90));
              }
              else {
                ppppppuStack_268 = *(undefined8 *******)(lVar26 + 0x90);
                local_270 = (undefined8 *******)*puVar19;
                local_260 = *(ulong *)(lVar26 + 0x98);
              }
              local_258 = '\x01';
            }
          }
          else {
            if (((ulong)local_c0 & 1) == 0) {
LAB_00bda914:
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/optional:1064: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                        );
            }
            bVar6 = *(byte *)(lVar26 + 0x9f);
            puVar2 = *(undefined1 **)(lVar26 + 0x90);
            if (-1 < (char)bVar6) {
              puVar2 = (undefined1 *)(ulong)bVar6;
            }
            puVar3 = local_d0;
            if (-1 < (long)puStack_c8) {
              puVar3 = (undefined1 *)((ulong)puStack_c8 >> 0x38);
            }
            if (puVar2 == puVar3) {
              puVar29 = (undefined8 *)*puVar19;
              if (-1 < (char)bVar6) {
                puVar29 = puVar19;
              }
              pppppppuVar22 = pppppppuStack_d8;
              if (-1 < (long)puStack_c8) {
                pppppppuVar22 = &pppppppuStack_d8;
              }
              iVar11 = memcmp(puVar29,pppppppuVar22,(size_t)puVar2);
              if (iVar11 == 0) goto LAB_00bda314;
            }
LAB_00bda184:
            local_258 = '\0';
            local_270 = (undefined8 *******)((ulong)local_270 & 0xffffffffffffff00);
          }
          FUN_005e7520(&puStack_1b8,&local_270);
          if ((local_258 == '\x01') && ((long)local_260 < 0)) {
            operator_delete(local_270);
          }
        }
        if (((ulong)local_88 & 1) == 0) {
LAB_00bda8b0:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                    );
        }
        iVar11 = uStack_238._4_4_;
        uVar10 = uStack_158._4_4_;
        pppppppuVar22 = &local_280;
        pppppppuVar18 = local_280;
        while (pppppppuVar24 = pppppppuVar22, pppppppuVar18 != (undefined8 *******)0x0) {
          while (pppppppuVar22 = pppppppuVar18,
                *(int *)((long)pppppppuVar22 + 0x1c) <= uStack_238._4_4_) {
            if (uStack_238._4_4_ == *(int *)((long)pppppppuVar22 + 0x1c)) goto LAB_00bda268;
            pppppppuVar18 = (undefined8 *******)pppppppuVar22[1];
            if ((undefined8 *******)pppppppuVar22[1] == (undefined8 *******)0x0) {
              pppppppuVar24 = pppppppuVar22 + 1;
              goto LAB_00bda214;
            }
          }
          pppppppuVar18 = (undefined8 *******)*pppppppuVar22;
        }
LAB_00bda214:
        ppppppuVar14 = (undefined8 ******)operator_new(0x28);
        if (ppppppuVar14 == (undefined8 ******)0x0) {
LAB_00bda8ec:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        *ppppppuVar14 = (undefined8 *****)0x0;
        ppppppuVar14[1] = (undefined8 *****)0x0;
        ppppppuVar14[2] = pppppppuVar22;
        *(ulong *)((long)ppppppuVar14 + 0x1c) = CONCAT44(uVar10,iVar11);
        *pppppppuVar24 = ppppppuVar14;
        if ((undefined8 *******)*local_288 != (undefined8 *******)0x0) {
          ppppppuVar14 = *pppppppuVar24;
          local_288 = (undefined8 *******)*local_288;
        }
        FUN_005d5b94(local_280,ppppppuVar14);
        local_278 = local_278 + 1;
        if (((ulong)local_88 & 1) == 0) goto LAB_00bda8b0;
LAB_00bda268:
        uStack_238 = (undefined1 *)CONCAT44(uStack_158._4_4_,(undefined4)uStack_238);
        if ((long)local_220 < 0) {
          pppppppuVar22 = local_150;
          puVar2 = puStack_148;
          if (-1 < (long)local_140) {
            pppppppuVar22 = &local_150;
            puVar2 = (undefined1 *)((ulong)local_140 >> 0x38);
          }
          FUN_00547f08(&local_230,pppppppuVar22,puVar2);
        }
        else if ((long)local_140 < 0) {
          FUN_00547fc0(&local_230,local_150,puStack_148);
        }
        else {
          puStack_228 = puStack_148;
          local_230 = local_150;
          local_220 = local_140;
        }
        puVar19 = local_298;
        if (local_298 < local_290) {
          if (local_298 == (undefined8 *)0x0) goto LAB_00bda8ec;
          FUN_00890aa0(local_298,&local_240);
          local_298 = puVar19 + 0x1b;
        }
        else {
          local_298 = (undefined8 *)FUN_00b86118(&local_2a0,&local_240);
        }
        FUN_00890cb8(&local_240);
        if ((char)local_88 == '\x01') {
          FUN_00890cb8(&local_160);
        }
      }
      puVar19 = local_298;
      puVar9 = PTR_DAT_00d521b8;
      lVar26 = lVar26 + 0xd8;
    } while (lVar26 != lVar4);
    if (local_2a0 != local_298) {
      puVar29 = local_2a0;
      do {
        iVar11 = FUN_00891b68(puVar29);
        if (iVar11 == 4) {
          local_160 = (undefined8 *******)0x0;
          uStack_158 = (undefined1 *)0x0;
          local_150 = (undefined8 *******)0x0;
          FUN_005d3510(&local_240,puVar9);
          uVar13 = FUN_00891570(puVar29,&local_240,&local_160);
          if ((long)local_230 < 0) {
            operator_delete(local_240);
          }
          if ((uVar13 & 1) == 0) {
            uVar13 = FUN_004022fc();
            if ((uVar13 & 1) == 0) {
              FUN_00623bb0(&DAT_001f4e98,"../../pc/codec_vendor.cc",0x1012,"No apt value");
            }
          }
          else {
            puVar2 = uStack_158;
            pppppppuVar22 = local_160;
            if (-1 < (long)local_150) {
              puVar2 = (undefined1 *)((ulong)local_150 >> 0x38);
              pppppppuVar22 = &local_160;
            }
            auVar31 = FUN_00675340(pppppppuVar22,puVar2,10);
            uVar13 = auVar31._0_8_ & 0xffffffff | 0x100000000;
            if ((auVar31._8_4_ & (uint)(auVar31._0_8_ + 0x80000000 >> 0x20 == 0)) == 0) {
              uVar13 = 0;
            }
            pppppppuVar22 = local_280;
            if (uVar13 >> 0x20 != 0) {
joined_r0x00bda464:
              if (pppppppuVar22 == (undefined8 *******)0x0) {
                uVar15 = FUN_004022fc();
                if ((uVar15 & 1) == 0) {
                  FUN_00623bb0(&DAT_001f4e94,"../../pc/codec_vendor.cc",0x105a,"Unmapped apt value "
                               ,uVar13 & 0xffffffff);
                }
              }
              else {
                iVar11 = (int)uVar13;
                if (iVar11 < *(int *)((long)pppppppuVar22 + 0x1c)) goto LAB_00bda494;
                if (*(int *)((long)pppppppuVar22 + 0x1c) != iVar11) {
                  pppppppuVar22 = pppppppuVar22 + 1;
                  goto LAB_00bda494;
                }
                FUN_005d3510(&local_240,puVar9);
                pppppppuVar22 = local_280;
                while( true ) {
                  while( true ) {
                    if (pppppppuVar22 == (undefined8 *******)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_005f55a8("map::at:  key not found");
                    }
                    if (*(int *)((long)pppppppuVar22 + 0x1c) <= iVar11) break;
                    pppppppuVar22 = (undefined8 *******)*pppppppuVar22;
                  }
                  if (*(int *)((long)pppppppuVar22 + 0x1c) == iVar11) break;
                  pppppppuVar22 = (undefined8 *******)pppppppuVar22[1];
                }
                FUN_00891858(puVar29,&local_240,*(undefined4 *)(pppppppuVar22 + 4));
                if ((long)local_230 < 0) {
                  operator_delete(local_240);
                }
              }
              goto LAB_00bda3cc;
            }
            uVar13 = FUN_004022fc();
            if ((uVar13 & 1) == 0) {
              FUN_00623bb0(&DAT_001f4e98,"../../pc/codec_vendor.cc",0x103a,"Unconvertable apt value"
                          );
            }
          }
        }
LAB_00bda3cc:
        puVar29 = puVar29 + 0x1b;
      } while (puVar29 != puVar19);
    }
  }
  if ((param_5 & 1) != 0) {
    lVar26 = *param_3;
    lVar4 = param_3[1];
    uStack_158 = (undefined1 *)0x0;
    local_160 = (undefined8 *******)0x0;
    puStack_148 = (undefined1 *)0x0;
    local_150 = (undefined8 *******)0x0;
    local_140 = (undefined1 *)0xaaaaaaaa3f800000;
    if (lVar26 != lVar4) {
      iVar11 = (int)((ulong)(lVar4 - lVar26) >> 3) * 0x684bda13 + 1;
      do {
        local_270 = (undefined8 *******)(lVar26 + 0xc);
        local_240 = &local_160;
        lVar16 = FUN_00b0ee70(&local_240,lVar26 + 0xc,&DAT_001f94c3,&local_270,&uStack_241);
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__hash_table:248: libc++ Hardening assertion __node_ != nullptr failed: Attempted to dereference a non-dereferenceable unordered container iterator\n"
                    );
        }
        lVar26 = lVar26 + 0xd8;
        *(int *)(lVar16 + 0x14) = iVar11;
        iVar11 = iVar11 + -1;
      } while (lVar26 != lVar4);
    }
    local_240 = &local_160;
    pppppppuVar22 = local_160;
    pppppppuVar18 = local_150;
    if (local_2a0 != local_298) {
      FUN_00bdb570(local_2a0,local_298,&local_240,
                   LZCOUNT(((long)local_298 - (long)local_2a0 >> 3) * -0x7b425ed097b425ed) << 1 ^
                   0x7e,1);
      pppppppuVar22 = local_160;
      pppppppuVar18 = local_150;
    }
    while (pppppppuVar18 != (undefined8 *******)0x0) {
      local_160 = pppppppuVar22;
      if (pppppppuVar18 == (undefined8 *******)0xfffffffffffffff0) goto LAB_00bda8c4;
      pppppppuVar24 = (undefined8 *******)*pppppppuVar18;
      operator_delete(pppppppuVar18);
      pppppppuVar22 = local_160;
      pppppppuVar18 = pppppppuVar24;
    }
    local_160 = (undefined8 *******)0x0;
    if (pppppppuVar22 != (undefined8 *******)0x0) {
      operator_delete(pppppppuVar22);
    }
  }
  uStack_158 = &DAT_aaaaaaaaaaaaaaaa;
  local_160 = (undefined8 *******)&DAT_aaaaaaaaaaaaaaaa;
  puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
  local_150 = (undefined8 *******)&DAT_aaaaaaaaaaaaaaaa;
  puStack_138 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
  local_140 = &DAT_aaaaaaaaaaaaaaaa;
  local_128 = (undefined8 *******)&DAT_aaaaaaaaaaaaaaaa;
  local_130 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
  local_120 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00bdd774(&local_160,&local_2a0);
  pppppppuVar22 = local_128;
  puVar29 = local_130;
  puVar19 = puStack_138;
  if ((int)local_160 == 0) {
    if (((ulong)local_120 & 1) == 0) {
LAB_00bda8d8:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                );
    }
    puStack_138 = (undefined8 *)0x0;
    puVar28 = (undefined8 *)*param_4;
    local_130 = (undefined8 *)0x0;
    local_128 = (undefined8 *******)0x0;
    if (puVar28 != (undefined8 *)0x0) {
      puVar21 = (undefined8 *)param_4[1];
      puVar17 = puVar28;
      if (puVar28 != puVar21) {
        do {
          puVar21 = puVar21 + -0x1b;
          if (puVar21 == (undefined8 *)0x0) goto LAB_00bda8c4;
          (**(code **)*puVar21)(puVar21);
        } while (puVar21 != puVar28);
        puVar17 = (undefined8 *)*param_4;
      }
      param_4[1] = puVar28;
      operator_delete(puVar17);
    }
    param_4[1] = puVar29;
    *param_4 = puVar19;
    param_4[2] = pppppppuVar22;
    FUN_005ecd48(param_1);
    puVar19 = puStack_138;
  }
  else {
    *param_1 = (int)local_160;
    puVar19 = (undefined8 *)((ulong)&local_160 | 8);
    uVar30 = *puVar19;
    uVar20 = puVar19[2];
    *(undefined8 *)(param_1 + 4) = puVar19[1];
    *(undefined8 *)(param_1 + 2) = uVar30;
    *(undefined8 *)(param_1 + 6) = uVar20;
    iVar11 = (int)local_140;
    param_1[8] = iVar11;
    *(undefined4 *)((long)param_1 + 0x23) = local_140._3_4_;
    puVar19 = puStack_138;
  }
  puStack_138 = puVar19;
  if ((((ulong)local_120 & 1) != 0) && (puVar29 = local_130, puVar19 != (undefined8 *)0x0)) {
    while (puVar19 != puVar29) {
      puVar29 = puVar29 + -0x1b;
      if (puVar29 == (undefined8 *)0x0) goto LAB_00bda8c4;
      (**(code **)*puVar29)(puVar29);
    }
    local_130 = puVar19;
    operator_delete(puStack_138);
  }
  puVar29 = local_2a0;
  puVar19 = local_298;
  if (local_2a0 != (undefined8 *)0x0) {
    while (puVar29 != puVar19) {
      puVar19 = puVar19 + -0x1b;
      if (puVar19 == (undefined8 *)0x0) {
LAB_00bda8c4:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      (**(code **)*puVar19)(puVar19);
    }
    local_298 = puVar29;
    operator_delete(local_2a0);
  }
  local_160 = &local_288;
  FUN_005fa2f8(&local_160,local_280);
  if (*(long *)(lVar7 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00bda494:
  pppppppuVar22 = (undefined8 *******)*pppppppuVar22;
  goto joined_r0x00bda464;
}


// ===== 00bda938  FUN_00bda938 =====

void FUN_00bda938(undefined8 *param_1,long param_2,uint param_3,undefined8 param_4)

{
  if (param_2 != 0) {
    FUN_00bde390(param_1,param_2,0,1,param_3 & 1,param_4);
    FUN_00bde390(param_1 + 3,param_2,0,0,param_3 & 1,param_4);
    FUN_00bde390(param_1 + 6,param_2,1,1,param_3 & 1,param_4);
    FUN_00bde390(param_1 + 9,param_2,1,0,param_3 & 1,param_4);
    return;
  }
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}


// ===== 00bdaa00  FUN_00bdaa00 =====

void FUN_00bdaa00(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  void *pvVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  
  lVar2 = *param_2;
  lVar3 = param_2[1];
  do {
    if (lVar2 == lVar3) {
      return;
    }
    lVar16 = *(long *)(param_1 + 0x30);
    lVar4 = *(long *)(param_1 + 0x38);
    uVar10 = lVar4 - lVar16;
    if (uVar10 != 0) {
      if (0x12f684bda12f684 < (ulong)(((long)uVar10 >> 3) * -0x7b425ed097b425ed)) goto LAB_00bdae1c;
      puVar7 = (undefined8 *)operator_new(uVar10);
      puVar15 = puVar7;
      lVar1 = 0;
      do {
        lVar14 = lVar1;
        puVar13 = puVar15;
        if ((long)puVar7 + lVar14 == 0) goto LAB_00bdadf4;
        FUN_00890830((long)puVar7 + lVar14,lVar16);
        lVar16 = lVar16 + 0xd8;
        lVar1 = lVar14 + 0xd8;
        puVar15 = puVar13 + 0x1b;
      } while (lVar16 != lVar4);
      if (lVar1 == 0) {
LAB_00bdaba8:
        if (puVar7 != (undefined8 *)0x0) {
          if (lVar1 != 0) {
            lVar14 = -0xd8 - lVar14;
            do {
              if (puVar13 == (undefined8 *)0x0) goto LAB_00bdae08;
              (**(code **)*puVar13)(puVar13);
              lVar14 = lVar14 + 0xd8;
              puVar13 = puVar13 + -0x1b;
            } while (lVar14 != 0);
          }
          operator_delete(puVar7);
        }
      }
      else {
        bVar5 = false;
        puVar15 = puVar7;
        do {
          while (uVar8 = FUN_008911c8(puVar15,lVar2), (uVar8 & 1) == 0) {
            bVar6 = puVar15 == (undefined8 *)((long)puVar7 + lVar14);
            puVar15 = puVar15 + 0x1b;
            if (bVar6) {
              if (!bVar5) goto LAB_00bdaba8;
              goto LAB_00bdab3c;
            }
          }
          FUN_00890db8(puVar15,lVar2 + 0xd8);
          bVar6 = puVar15 != (undefined8 *)((long)puVar7 + lVar14);
          puVar15 = puVar15 + 0x1b;
          bVar5 = true;
        } while (bVar6);
LAB_00bdab3c:
        puVar15 = *(undefined8 **)(param_1 + 0x30);
        if (puVar15 != (undefined8 *)0x0) {
          puVar13 = *(undefined8 **)(param_1 + 0x38);
          puVar9 = puVar15;
          if (puVar15 != puVar13) {
            do {
              puVar13 = puVar13 + -0x1b;
              if (puVar13 == (undefined8 *)0x0) goto LAB_00bdae08;
              (**(code **)*puVar13)(puVar13);
            } while (puVar13 != puVar15);
            puVar9 = *(undefined8 **)(param_1 + 0x30);
          }
          *(undefined8 **)(param_1 + 0x38) = puVar15;
          operator_delete(puVar9);
        }
        *(ulong *)(param_1 + 0x40) = (long)puVar7 + uVar10;
        *(undefined8 **)(param_1 + 0x30) = puVar7;
        *(long *)(param_1 + 0x38) = (long)puVar7 + lVar1;
      }
    }
    lVar16 = *(long *)(param_1 + 0x48);
    lVar4 = *(long *)(param_1 + 0x50);
    uVar10 = lVar4 - lVar16;
    if (uVar10 != 0) {
      if (0x12f684bda12f684 < (ulong)(((long)uVar10 >> 3) * -0x7b425ed097b425ed)) {
LAB_00bdae1c:
                    /* WARNING: Subroutine does not return */
        FUN_0088fd20();
      }
      puVar7 = (undefined8 *)operator_new(uVar10);
      puVar15 = puVar7;
      lVar1 = 0;
      do {
        lVar14 = lVar1;
        puVar13 = puVar15;
        if ((long)puVar7 + lVar14 == 0) goto LAB_00bdadf4;
        FUN_00890830((long)puVar7 + lVar14,lVar16);
        lVar16 = lVar16 + 0xd8;
        lVar1 = lVar14 + 0xd8;
        puVar15 = puVar13 + 0x1b;
      } while (lVar16 != lVar4);
      if (lVar1 != 0) {
        bVar5 = false;
        puVar15 = puVar7;
        do {
          while (uVar10 = FUN_008911c8(puVar15,lVar2), (uVar10 & 1) == 0) {
            bVar6 = puVar15 == (undefined8 *)((long)puVar7 + lVar14);
            puVar15 = puVar15 + 0x1b;
            if (bVar6) {
              if (!bVar5) goto LAB_00bdad98;
              goto LAB_00bdacc4;
            }
          }
          FUN_00890db8(puVar15,lVar2 + 0xd8);
          bVar6 = puVar15 != (undefined8 *)((long)puVar7 + lVar14);
          puVar15 = puVar15 + 0x1b;
          bVar5 = true;
        } while (bVar6);
LAB_00bdacc4:
        if (0x12f684bda12f684 < (ulong)((lVar1 >> 3) * -0x7b425ed097b425ed)) goto LAB_00bdae1c;
        pvVar11 = operator_new(lVar14 + 0xd8);
        lVar16 = 0;
        do {
          if ((long)pvVar11 + lVar16 == 0) {
LAB_00bdadf4:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          FUN_00890830((long)pvVar11 + lVar16,(long)puVar7 + lVar16);
          lVar16 = lVar16 + 0xd8;
        } while (lVar14 + 0xd8 != lVar16);
        puVar15 = *(undefined8 **)(param_1 + 0x48);
        if (puVar15 != (undefined8 *)0x0) {
          puVar9 = *(undefined8 **)(param_1 + 0x50);
          puVar12 = puVar15;
          if (puVar15 != puVar9) {
            do {
              puVar9 = puVar9 + -0x1b;
              if (puVar9 == (undefined8 *)0x0) goto LAB_00bdae08;
              (**(code **)*puVar9)(puVar9);
            } while (puVar9 != puVar15);
            puVar12 = *(undefined8 **)(param_1 + 0x48);
          }
          *(undefined8 **)(param_1 + 0x50) = puVar15;
          operator_delete(puVar12);
        }
        *(long *)(param_1 + 0x58) = (long)pvVar11 + lVar1;
        *(void **)(param_1 + 0x48) = pvVar11;
        *(long *)(param_1 + 0x50) = (long)pvVar11 + lVar16;
      }
LAB_00bdad98:
      if (puVar7 != (undefined8 *)0x0) {
        if (lVar1 != 0) {
          lVar14 = -0xd8 - lVar14;
          do {
            if (puVar13 == (undefined8 *)0x0) {
LAB_00bdae08:
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                        );
            }
            (**(code **)*puVar13)(puVar13);
            lVar14 = lVar14 + 0xd8;
            puVar13 = puVar13 + -0x1b;
          } while (lVar14 != 0);
        }
        operator_delete(puVar7);
      }
    }
    lVar2 = lVar2 + 0x1b0;
  } while( true );
}


// ===== 00bdae20  FUN_00bdae20 =====

undefined8 * FUN_00bdae20(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  size_t __n;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  void *__dest;
  
  puVar6 = (undefined8 *)(param_1[1] - *param_1);
  uVar1 = ((long)puVar6 >> 3) + 1;
  if (uVar1 >> 0x3d != 0) {
    FUN_008941a8();
LAB_00bdaf10:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  uVar4 = param_1[2] - *param_1;
  uVar5 = (long)uVar4 >> 2;
  if (uVar5 <= uVar1) {
    uVar5 = uVar1;
  }
  if (0x7ffffffffffffff7 < uVar4) {
    uVar5 = 0x1fffffffffffffff;
  }
  if (uVar5 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (uVar5 >> 0x3d != 0) goto LAB_00bdaf10;
    pvVar2 = operator_new(uVar5 << 3);
    puVar6 = (undefined8 *)((long)pvVar2 + (long)puVar6);
  }
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = *param_2;
    __n = param_1[1] - *param_1;
    __dest = (void *)((long)puVar6 - __n);
    memcpy(__dest,(void *)*param_1,__n);
    pvVar3 = (void *)*param_1;
    *param_1 = (long)__dest;
    param_1[1] = (long)(puVar6 + 1);
    param_1[2] = (long)((long)pvVar2 + uVar5 * 8);
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    return puVar6 + 1;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00bdaf14  FUN_00bdaf14 =====

void FUN_00bdaf14(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)*param_1;
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  puVar2 = (undefined8 *)param_1[1];
  puVar1 = puVar3;
  if (puVar3 != puVar2) {
    do {
      puVar2 = puVar2 + -0x1b;
      if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      (**(code **)*puVar2)(puVar2);
    } while (puVar2 != puVar3);
    puVar1 = (undefined8 *)*param_1;
  }
  param_1[1] = puVar3;
  operator_delete(puVar1);
  return;
}


// ===== 00bdafb8  FUN_00bdafb8 =====

void FUN_00bdafb8(undefined8 *param_1)

{
  undefined8 *local_8;
  
  *param_1 = &PTR_FUN_00d48838;
  local_8 = param_1 + 3;
  FUN_005fa1cc(&local_8,param_1[4]);
  operator_delete(param_1);
  return;
}


// ===== 00bdb008  FUN_00bdb008 =====

bool FUN_00bdb008(long param_1,uint param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  if ((param_2 & 0xffffffe0) == 0x40) {
    return true;
  }
  plVar1 = (long *)(param_1 + 0x20);
  plVar2 = (long *)*plVar1;
  if (plVar2 == (long *)0x0) {
    return false;
  }
  do {
    while ((int)*(uint *)((long)plVar2 + 0x1c) <= (int)param_2) {
      plVar3 = plVar2;
      if ((param_2 == *(uint *)((long)plVar2 + 0x1c)) ||
         (plVar2 = (long *)plVar2[1], plVar3 = plVar1, plVar2 == (long *)0x0)) goto LAB_00bdb054;
    }
    plVar2 = (long *)*plVar2;
    plVar3 = plVar1;
  } while (plVar2 != (long *)0x0);
LAB_00bdb054:
  return plVar3 != plVar1;
}


// ===== 00bdb060  FUN_00bdb060 =====

undefined4 FUN_00bdb060(long *param_1)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x10))(param_1,(int)param_1[2]);
  while (((uVar1 & 1) != 0 && ((int)param_1[1] <= (int)param_1[2]))) {
    *(int *)(param_1 + 2) = (int)param_1[2] + -1;
    uVar1 = (**(code **)(*param_1 + 0x10))(param_1);
  }
  return (int)param_1[2];
}


// ===== 00bdb0c8  FUN_00bdb0c8 =====

void FUN_00bdb0c8(undefined8 *param_1)

{
  undefined8 *local_8;
  
  *param_1 = &PTR_FUN_00d48838;
  local_8 = param_1 + 3;
  FUN_005fa1cc(&local_8,param_1[4]);
  operator_delete(param_1);
  return;
}


// ===== 00bdb118  FUN_00bdb118 =====

bool FUN_00bdb118(long param_1,int param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = (long *)(param_1 + 0x20);
  plVar2 = (long *)*plVar1;
  if (plVar2 == (long *)0x0) {
    return false;
  }
  do {
    while (*(int *)((long)plVar2 + 0x1c) <= param_2) {
      plVar3 = plVar2;
      if ((param_2 == *(int *)((long)plVar2 + 0x1c)) ||
         (plVar2 = (long *)plVar2[1], plVar3 = plVar1, plVar2 == (long *)0x0)) goto LAB_00bdb150;
    }
    plVar2 = (long *)*plVar2;
    plVar3 = plVar1;
  } while (plVar2 != (long *)0x0);
LAB_00bdb150:
  return plVar3 != plVar1;
}


// ===== 00bdb15c  FUN_00bdb15c =====

undefined1  [16]
FUN_00bdb15c(undefined8 *param_1,int *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 auVar13 [16];
  
  plVar8 = (long *)*param_1;
  puVar11 = (undefined1 *)(long)*param_2;
  puVar10 = (undefined1 *)plVar8[1];
  if (puVar10 == (undefined1 *)0x0) {
    puVar12 = &DAT_aaaaaaaaaaaaaaaa;
  }
  else {
    puVar2 = puVar10 + -1;
    if (((ulong)puVar10 & (ulong)puVar2) == 0) {
      puVar12 = (undefined1 *)((ulong)puVar2 & (ulong)puVar11);
    }
    else {
      puVar12 = puVar11;
      if (puVar10 <= puVar11) {
        uVar5 = 0;
        if (puVar10 != (undefined1 *)0x0) {
          uVar5 = (ulong)puVar11 / (ulong)puVar10;
        }
        puVar12 = puVar11 + -(uVar5 * (long)puVar10);
      }
    }
    puVar4 = *(undefined8 **)(*plVar8 + (long)puVar12 * 8);
    if (puVar4 != (undefined8 *)0x0) {
      for (plVar9 = (long *)*puVar4; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
        puVar6 = (undefined1 *)plVar9[1];
        if (puVar6 == puVar11) {
          if ((int)plVar9[2] == *param_2) {
            uVar1 = 0;
            goto LAB_00bdb3ec;
          }
        }
        else {
          if (((ulong)puVar10 & (ulong)puVar2) == 0) {
            puVar6 = (undefined1 *)((ulong)puVar6 & (ulong)puVar2);
          }
          else if (puVar10 <= puVar6) {
            uVar5 = 0;
            if (puVar10 != (undefined1 *)0x0) {
              uVar5 = (ulong)puVar6 / (ulong)puVar10;
            }
            puVar6 = puVar6 + -(uVar5 * (long)puVar10);
          }
          if (puVar6 != puVar12) break;
        }
      }
    }
  }
  plVar9 = (long *)operator_new(0x18);
  if (plVar9 == (long *)0x0) {
LAB_00bdb408:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  *plVar9 = 0;
  plVar9[1] = (long)puVar11;
  if (plVar9 == (long *)0xfffffffffffffff0) goto LAB_00bdb408;
  *(undefined4 *)(plVar9 + 2) = *(undefined4 *)*param_4;
  *(undefined4 *)((long)plVar9 + 0x14) = 0;
  if ((float)(plVar8[3] + 1) <= *(float *)(plVar8 + 4) * (float)puVar10) goto LAB_00bdb374;
  if (puVar10 < (undefined1 *)0x3) {
    uVar5 = 1;
  }
  else {
    uVar5 = (ulong)(((ulong)puVar10 & (ulong)(puVar10 + -1)) != 0);
  }
  puVar12 = (undefined1 *)(uVar5 | (long)puVar10 << 1);
  puVar2 = (undefined1 *)(long)((float)(plVar8[3] + 1) / *(float *)(plVar8 + 4));
  if (puVar12 <= puVar2) {
    puVar12 = puVar2;
  }
  if (puVar12 + -1 == (undefined1 *)0x0) {
    puVar12 = (undefined1 *)0x2;
  }
  else if (((ulong)puVar12 & (ulong)(puVar12 + -1)) != 0) {
    puVar12 = (undefined1 *)FUN_005204f8(puVar12);
    puVar10 = (undefined1 *)plVar8[1];
  }
  if (puVar10 < puVar12) {
LAB_00bdb2cc:
    FUN_00bdb41c(plVar8,puVar12);
  }
  else if (puVar12 < puVar10) {
    puVar2 = (undefined1 *)(long)((float)(ulong)plVar8[3] / *(float *)(plVar8 + 4));
    if ((puVar10 < (undefined1 *)0x3) || (((ulong)puVar10 & (ulong)(puVar10 + -1)) != 0)) {
      puVar2 = (undefined1 *)FUN_005204f8();
    }
    else if ((undefined1 *)0x1 < puVar2) {
      puVar2 = (undefined1 *)(1L << (-LZCOUNT(puVar2 + -1) & 0x3fU));
    }
    if (puVar12 <= puVar2) {
      puVar12 = puVar2;
    }
    if (puVar12 < puVar10) goto LAB_00bdb2cc;
  }
  puVar10 = (undefined1 *)plVar8[1];
  if (((ulong)puVar10 & (ulong)(puVar10 + -1)) == 0) {
    puVar12 = (undefined1 *)((ulong)(puVar10 + -1) & (ulong)puVar11);
  }
  else {
    puVar12 = puVar11;
    if (puVar10 <= puVar11) {
      uVar5 = 0;
      if (puVar10 != (undefined1 *)0x0) {
        uVar5 = (ulong)puVar11 / (ulong)puVar10;
      }
      puVar12 = puVar11 + -(uVar5 * (long)puVar10);
    }
  }
LAB_00bdb374:
  lVar3 = *plVar8;
  plVar7 = *(long **)(lVar3 + (long)puVar12 * 8);
  if (plVar7 == (long *)0x0) {
    plVar7 = plVar8 + 2;
    *plVar9 = *plVar7;
    *plVar7 = (long)plVar9;
    *(long **)(lVar3 + (long)puVar12 * 8) = plVar7;
    if (*plVar9 != 0) {
      puVar11 = *(undefined1 **)(*plVar9 + 8);
      if (((ulong)puVar10 & (ulong)(puVar10 + -1)) == 0) {
        puVar11 = (undefined1 *)((ulong)puVar11 & (ulong)(puVar10 + -1));
      }
      else if (puVar10 <= puVar11) {
        uVar5 = 0;
        if (puVar10 != (undefined1 *)0x0) {
          uVar5 = (ulong)puVar11 / (ulong)puVar10;
        }
        puVar11 = puVar11 + -(uVar5 * (long)puVar10);
      }
      *(long **)(*plVar8 + (long)puVar11 * 8) = plVar9;
    }
  }
  else {
    *plVar9 = *plVar7;
    *plVar7 = (long)plVar9;
  }
  uVar1 = 1;
  plVar8[3] = plVar8[3] + 1;
LAB_00bdb3ec:
  auVar13._8_8_ = uVar1;
  auVar13._0_8_ = plVar9;
  return auVar13;
}


// ===== 00bdb41c  FUN_00bdb41c =====

void FUN_00bdb41c(long *param_1,ulong param_2)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  
  if (param_2 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    pvVar2 = operator_new(param_2 << 3);
  }
  pvVar3 = (void *)*param_1;
  *param_1 = (long)pvVar2;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  param_1[1] = param_2;
  if (param_2 != 0) {
    uVar4 = 0;
    do {
      *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (param_2 != uVar4);
    plVar6 = (long *)param_1[2];
    if (plVar6 != (long *)0x0) {
      uVar5 = param_2 - 1;
      uVar4 = plVar6[1];
      if ((param_2 & uVar5) == 0) {
        uVar4 = uVar4 & uVar5;
      }
      else if (param_2 <= uVar4) {
        uVar8 = 0;
        if (param_2 != 0) {
          uVar8 = uVar4 / param_2;
        }
        uVar4 = uVar4 - uVar8 * param_2;
      }
      *(long **)(*param_1 + uVar4 * 8) = param_1 + 2;
      for (plVar7 = (long *)*plVar6; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        uVar8 = plVar7[1];
        if ((param_2 & uVar5) == 0) {
          uVar8 = uVar8 & uVar5;
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
            *(long **)(*param_1 + uVar8 * 8) = plVar6;
            uVar4 = uVar8;
          }
          else {
            *plVar6 = *plVar7;
            *plVar7 = **(undefined8 **)(*param_1 + uVar8 * 8);
            **(long **)(*param_1 + uVar8 * 8) = (long)plVar7;
            plVar7 = plVar6;
          }
        }
        plVar6 = plVar7;
      }
    }
  }
  return;
}


// ===== 00bdb570  FUN_00bdb570 =====

void FUN_00bdb570(undefined1 *param_1,undefined1 *param_2,undefined8 *param_3,long param_4,
                 uint param_5)

{
  ulong uVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  ulong uVar16;
  ulong uVar17;
  undefined1 *puVar18;
  ulong uVar19;
  undefined1 *puVar20;
  ulong uVar21;
  ulong uVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  long local_260;
  undefined1 uStack_241;
  undefined1 *local_240;
  undefined1 *local_238;
  undefined1 *local_230;
  undefined8 uStack_228;
  undefined1 *local_220;
  undefined1 *puStack_218;
  undefined1 *puStack_210;
  undefined1 *puStack_208;
  undefined1 *local_200;
  undefined1 *puStack_1f8;
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
  undefined1 *puStack_190;
  undefined1 *puStack_188;
  undefined1 *local_180;
  undefined1 *puStack_178;
  undefined1 *puStack_170;
  undefined1 *puStack_168;
  undefined1 *local_160;
  undefined1 *local_150;
  undefined8 uStack_148;
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
  
  lVar4 = tpidr_el0;
  puVar18 = (undefined1 *)((long)&uStack_228 + 4);
  local_78 = *(long *)(lVar4 + 0x28);
  local_260 = param_4;
LAB_00bdb5c4:
  puVar12 = param_2 + -0xd8;
  puVar9 = param_2 + -0xcc;
  puVar23 = param_1;
LAB_00bdb5d8:
  while( true ) {
    param_1 = puVar23;
    uVar17 = (long)param_2 - (long)param_1;
    uVar22 = ((long)uVar17 >> 3) * -0x7b425ed097b425ed;
    if (uVar22 - 2 == 0 || (long)uVar22 < 2) {
      if (uVar22 < 2) goto LAB_00bdc8e0;
      if (uVar22 == 2) {
        local_150 = (undefined1 *)*param_3;
        local_230 = puVar9;
        lVar6 = FUN_00b0ee70(&local_150,puVar9,&DAT_001f94c3,&local_230,&local_238);
        if (lVar6 == 0) goto LAB_00bdc8cc;
        local_150 = (undefined1 *)*param_3;
        local_230 = param_1 + 0xc;
        iVar3 = *(int *)(lVar6 + 0x14);
        lVar6 = FUN_00b0ee70(&local_150,param_1 + 0xc,&DAT_001f94c3,&local_230,&local_238);
        if (lVar6 == 0) goto LAB_00bdc8cc;
        if (*(int *)(lVar6 + 0x14) < iVar3) {
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
          uStack_148 = &DAT_aaaaaaaaaaaaaaaa;
          local_150 = &DAT_aaaaaaaaaaaaaaaa;
          local_80 = &DAT_aaaaaaaaaaaaaaaa;
          FUN_00890aa0(&local_150,param_1);
          FUN_00890f48(param_1,puVar12);
          FUN_00890f48(puVar12,&local_150);
          FUN_00890cb8(&local_150);
        }
        goto LAB_00bdc8e0;
      }
    }
    else {
      if (uVar22 == 3) {
        FUN_00bdc9a8(param_1,param_1 + 0xd8,puVar12,param_3);
        goto LAB_00bdc8e0;
      }
      if (uVar22 == 4) {
        FUN_00bdcd8c(param_1,param_1 + 0xd8,param_1 + 0x1b0,puVar12,param_3);
        goto LAB_00bdc8e0;
      }
      if (uVar22 == 5) {
        FUN_00bdd048(param_1,param_1 + 0xd8,param_1 + 0x1b0,param_1 + 0x288,puVar12,param_3);
        goto LAB_00bdc8e0;
      }
    }
    if ((long)uVar17 < 0x1440) {
      if ((param_5 & 1) != 0) {
        if ((param_1 == param_2) || (param_1 + 0xd8 == param_2)) goto LAB_00bdc8e0;
        lVar6 = 0;
        puVar18 = param_1 + 0xd8;
        puVar23 = param_1;
        goto LAB_00bdc064;
      }
      if ((param_1 == param_2) || (param_1 + 0xd8 == param_2)) goto LAB_00bdc8e0;
      lVar6 = -0xd8;
      puVar18 = param_1 + 0xd8;
      goto LAB_00bdc7b4;
    }
    if (local_260 == 0) {
      if (param_1 == param_2) goto LAB_00bdc8e0;
      uVar21 = uVar22 - 2 >> 1;
      uVar10 = uVar21;
      goto LAB_00bdc1c0;
    }
    puVar23 = param_1 + (uVar22 >> 1) * 0xd8;
    if (uVar17 < 0x6c01) {
      FUN_00bdc9a8(puVar23,param_1,param_2 + -0xd8,param_3);
    }
    else {
      FUN_00bdc9a8(param_1,puVar23,param_2 + -0xd8,param_3);
      FUN_00bdc9a8(param_1 + 0xd8,puVar23 + -0xd8,param_2 + -0x1b0,param_3);
      FUN_00bdc9a8(param_1 + 0x1b0,puVar23 + 0xd8,param_2 + -0x288,param_3);
      FUN_00bdc9a8(puVar23 + -0xd8,puVar23,puVar23 + 0xd8,param_3);
      local_80 = &DAT_aaaaaaaaaaaaaaaa;
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
      uStack_148 = &DAT_aaaaaaaaaaaaaaaa;
      local_150 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_00890aa0(&local_150,param_1);
      FUN_00890f48(param_1,puVar23);
      FUN_00890f48(puVar23,&local_150);
      FUN_00890cb8(&local_150);
    }
    local_260 = local_260 + -1;
    if ((param_5 & 1) != 0) break;
    local_150 = (undefined1 *)*param_3;
    local_230 = param_1 + -0xcc;
    lVar6 = FUN_00b0ee70(&local_150,param_1 + -0xcc,&DAT_001f94c3,&local_230,&local_238);
    if (lVar6 == 0) goto LAB_00bdc8cc;
    local_150 = (undefined1 *)*param_3;
    local_230 = param_1 + 0xc;
    iVar3 = *(int *)(lVar6 + 0x14);
    lVar6 = FUN_00b0ee70(&local_150,param_1 + 0xc,&DAT_001f94c3,&local_230,&local_238);
    if (lVar6 == 0) goto LAB_00bdc8cc;
    if (*(int *)(lVar6 + 0x14) < iVar3) break;
    puStack_1b8 = &DAT_aaaaaaaaaaaaaaaa;
    local_1c0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_1a8 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_1b0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_198 = &DAT_aaaaaaaaaaaaaaaa;
    local_1a0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_188 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_190 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_178 = &DAT_aaaaaaaaaaaaaaaa;
    local_180 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_168 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_170 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_218 = &DAT_aaaaaaaaaaaaaaaa;
    local_220 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_208 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_210 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_1f8 = &DAT_aaaaaaaaaaaaaaaa;
    local_200 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_1e8 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_1f0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_1d8 = &DAT_aaaaaaaaaaaaaaaa;
    local_1e0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_1c8 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_1d0 = &DAT_aaaaaaaaaaaaaaaa;
    uStack_228 = &DAT_aaaaaaaaaaaaaaaa;
    local_230 = &DAT_aaaaaaaaaaaaaaaa;
    local_160 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00890aa0(&local_230,param_1);
    local_150 = (undefined1 *)*param_3;
    local_238 = puVar18;
    lVar6 = FUN_00b0ee70(&local_150,(long)&uStack_228 + 4,&DAT_001f94c3,&local_238,&local_240);
    if (lVar6 == 0) goto LAB_00bdc8cc;
    local_150 = (undefined1 *)*param_3;
    iVar3 = *(int *)(lVar6 + 0x14);
    local_238 = puVar9;
    lVar6 = FUN_00b0ee70(&local_150,param_2 + -0xcc,&DAT_001f94c3,&local_238,&local_240);
    if (lVar6 == 0) goto LAB_00bdc8cc;
    puVar15 = param_1;
    if (*(int *)(lVar6 + 0x14) < iVar3) {
      do {
        puVar23 = puVar15 + 0xd8;
        if (puVar23 == param_2) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__algorithm/sort.h:669: libc++ Hardening assertion __first != __end failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                    );
        }
        local_150 = (undefined1 *)*param_3;
        local_238 = puVar18;
        lVar6 = FUN_00b0ee70(&local_150,(long)&uStack_228 + 4,&DAT_001f94c3,&local_238,&local_240);
        if (lVar6 == 0) goto LAB_00bdc8cc;
        local_150 = (undefined1 *)*param_3;
        local_238 = puVar15 + 0xe4;
        iVar3 = *(int *)(lVar6 + 0x14);
        lVar6 = FUN_00b0ee70(&local_150,local_238,&DAT_001f94c3,&local_238,&local_240);
        if (lVar6 == 0) goto LAB_00bdc8cc;
        puVar15 = puVar23;
      } while (iVar3 <= *(int *)(lVar6 + 0x14));
    }
    else {
      puVar15 = param_1 + 0xe4;
      do {
        puVar23 = puVar15 + -0xc;
        if (param_2 <= puVar23) break;
        local_150 = (undefined1 *)*param_3;
        local_238 = puVar18;
        lVar6 = FUN_00b0ee70(&local_150,(long)&uStack_228 + 4,&DAT_001f94c3,&local_238,&local_240);
        if (lVar6 == 0) goto LAB_00bdc8cc;
        local_150 = (undefined1 *)*param_3;
        iVar3 = *(int *)(lVar6 + 0x14);
        local_238 = puVar15;
        lVar6 = FUN_00b0ee70(&local_150,puVar15,&DAT_001f94c3,&local_238,&local_240);
        if (lVar6 == 0) goto LAB_00bdc8cc;
        puVar15 = puVar15 + 0xd8;
      } while (iVar3 <= *(int *)(lVar6 + 0x14));
    }
    puVar15 = param_2;
    puVar20 = param_2;
    if (puVar23 < param_2) {
      do {
        puVar20 = puVar15;
        if (puVar20 == param_1) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__algorithm/sort.h:682: libc++ Hardening assertion __last != __begin failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                    );
        }
        local_150 = (undefined1 *)*param_3;
        local_238 = puVar18;
        lVar6 = FUN_00b0ee70(&local_150,(long)&uStack_228 + 4,&DAT_001f94c3,&local_238,&local_240);
        if (lVar6 == 0) goto LAB_00bdc8cc;
        local_150 = (undefined1 *)*param_3;
        local_238 = puVar20 + -0xcc;
        iVar3 = *(int *)(lVar6 + 0x14);
        lVar6 = FUN_00b0ee70(&local_150,puVar20 + -0xcc,&DAT_001f94c3,&local_238,&local_240);
        if (lVar6 == 0) goto LAB_00bdc8cc;
        puVar15 = puVar20 + -0xd8;
      } while (*(int *)(lVar6 + 0x14) < iVar3);
      puVar20 = puVar20 + -0xd8;
    }
    while (puVar23 < puVar20) {
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
      uStack_148 = &DAT_aaaaaaaaaaaaaaaa;
      local_150 = &DAT_aaaaaaaaaaaaaaaa;
      local_80 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_00890aa0(&local_150,puVar23);
      FUN_00890f48(puVar23,puVar20);
      FUN_00890f48(puVar20,&local_150);
      FUN_00890cb8(&local_150);
      puVar15 = puVar23;
      do {
        puVar23 = puVar15 + 0xd8;
        if (puVar23 == param_2) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__algorithm/sort.h:692: libc++ Hardening assertion __first != __end failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                    );
        }
        local_150 = (undefined1 *)*param_3;
        local_238 = puVar18;
        lVar6 = FUN_00b0ee70(&local_150,(long)&uStack_228 + 4,&DAT_001f94c3,&local_238,&local_240);
        if (lVar6 == 0) goto LAB_00bdc8cc;
        local_150 = (undefined1 *)*param_3;
        local_238 = puVar15 + 0xe4;
        iVar3 = *(int *)(lVar6 + 0x14);
        lVar6 = FUN_00b0ee70(&local_150,local_238,&DAT_001f94c3,&local_238,&local_240);
        if (lVar6 == 0) goto LAB_00bdc8cc;
        puVar15 = puVar23;
      } while (iVar3 <= *(int *)(lVar6 + 0x14));
      do {
        puVar15 = puVar20;
        if (puVar15 == param_1) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__algorithm/sort.h:697: libc++ Hardening assertion __last != __begin failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                    );
        }
        local_150 = (undefined1 *)*param_3;
        local_238 = puVar18;
        lVar6 = FUN_00b0ee70(&local_150,(long)&uStack_228 + 4,&DAT_001f94c3,&local_238,&local_240);
        if (lVar6 == 0) goto LAB_00bdc8cc;
        local_150 = (undefined1 *)*param_3;
        local_238 = puVar15 + -0xcc;
        iVar3 = *(int *)(lVar6 + 0x14);
        lVar6 = FUN_00b0ee70(&local_150,puVar15 + -0xcc,&DAT_001f94c3,&local_238,&local_240);
        if (lVar6 == 0) goto LAB_00bdc8cc;
        puVar20 = puVar15 + -0xd8;
      } while (*(int *)(lVar6 + 0x14) < iVar3);
      puVar20 = puVar15 + -0xd8;
    }
    if (param_1 != puVar23 + -0xd8) {
      FUN_00890f48(param_1,puVar23 + -0xd8);
    }
    FUN_00890f48(puVar23 + -0xd8,&local_230);
    FUN_00890cb8(&local_230);
    param_5 = 0;
  }
  puStack_1b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_1c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_198 = &DAT_aaaaaaaaaaaaaaaa;
  local_1a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_188 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_190 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_178 = &DAT_aaaaaaaaaaaaaaaa;
  local_180 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_168 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_170 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_218 = &DAT_aaaaaaaaaaaaaaaa;
  local_220 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_208 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_210 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1f8 = &DAT_aaaaaaaaaaaaaaaa;
  local_200 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1e8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1f0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1d8 = &DAT_aaaaaaaaaaaaaaaa;
  local_1e0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1c8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1d0 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_228 = &DAT_aaaaaaaaaaaaaaaa;
  local_230 = &DAT_aaaaaaaaaaaaaaaa;
  local_160 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00890aa0(&local_230,param_1);
  lVar6 = 0;
  do {
    if (param_1 + lVar6 + 0xd8 == param_2) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__algorithm/sort.h:603: libc++ Hardening assertion __first != __end failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                );
    }
    local_150 = (undefined1 *)*param_3;
    local_238 = param_1 + lVar6 + 0xe4;
    lVar5 = FUN_00b0ee70(&local_150,local_238,&DAT_001f94c3,&local_238,&local_240);
    if (lVar5 == 0) goto LAB_00bdc8cc;
    local_150 = (undefined1 *)*param_3;
    iVar3 = *(int *)(lVar5 + 0x14);
    local_238 = puVar18;
    lVar5 = FUN_00b0ee70(&local_150,(long)&uStack_228 + 4,&DAT_001f94c3,&local_238,&local_240);
    if (lVar5 == 0) goto LAB_00bdc8cc;
    lVar6 = lVar6 + 0xd8;
  } while (*(int *)(lVar5 + 0x14) < iVar3);
  puVar23 = param_1 + lVar6;
  puVar15 = param_2;
  puVar20 = param_2;
  if (lVar6 == 0xd8) {
    do {
      if (puVar20 <= puVar23) break;
      local_150 = (undefined1 *)*param_3;
      local_238 = puVar20 + -0xcc;
      lVar6 = FUN_00b0ee70(&local_150,puVar20 + -0xcc,&DAT_001f94c3,&local_238,&local_240);
      if (lVar6 == 0) goto LAB_00bdc8cc;
      local_150 = (undefined1 *)*param_3;
      iVar3 = *(int *)(lVar6 + 0x14);
      local_238 = puVar18;
      lVar6 = FUN_00b0ee70(&local_150,(long)&uStack_228 + 4,&DAT_001f94c3,&local_238,&local_240);
      if (lVar6 == 0) goto LAB_00bdc8cc;
      puVar20 = puVar20 + -0xd8;
    } while (iVar3 <= *(int *)(lVar6 + 0x14));
  }
  else {
    do {
      puVar20 = puVar15;
      if (puVar20 == param_1) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__algorithm/sort.h:615: libc++ Hardening assertion __last != __begin failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                  );
      }
      local_150 = (undefined1 *)*param_3;
      local_238 = puVar20 + -0xcc;
      lVar6 = FUN_00b0ee70(&local_150,puVar20 + -0xcc,&DAT_001f94c3,&local_238,&local_240);
      if (lVar6 == 0) goto LAB_00bdc8cc;
      local_150 = (undefined1 *)*param_3;
      iVar3 = *(int *)(lVar6 + 0x14);
      local_238 = puVar18;
      lVar6 = FUN_00b0ee70(&local_150,(long)&uStack_228 + 4,&DAT_001f94c3,&local_238,&local_240);
      if (lVar6 == 0) goto LAB_00bdc8cc;
      puVar15 = puVar20 + -0xd8;
    } while (iVar3 <= *(int *)(lVar6 + 0x14));
    puVar20 = puVar20 + -0xd8;
  }
  puVar13 = puVar20;
  puVar15 = puVar23;
  if (puVar23 < puVar20) {
    do {
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
      uStack_148 = &DAT_aaaaaaaaaaaaaaaa;
      local_150 = &DAT_aaaaaaaaaaaaaaaa;
      local_80 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_00890aa0(&local_150,puVar15);
      FUN_00890f48(puVar15,puVar13);
      FUN_00890f48(puVar13,&local_150);
      FUN_00890cb8(&local_150);
      do {
        puVar24 = puVar15;
        puVar15 = puVar24 + 0xd8;
        if (puVar15 == param_2) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__algorithm/sort.h:633: libc++ Hardening assertion __first != __end failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                    );
        }
        local_150 = (undefined1 *)*param_3;
        local_238 = puVar24 + 0xe4;
        lVar6 = FUN_00b0ee70(&local_150,local_238,&DAT_001f94c3,&local_238,&local_240);
        if (lVar6 == 0) goto LAB_00bdc8cc;
        local_150 = (undefined1 *)*param_3;
        iVar3 = *(int *)(lVar6 + 0x14);
        local_238 = puVar18;
        lVar6 = FUN_00b0ee70(&local_150,(long)&uStack_228 + 4,&DAT_001f94c3,&local_238,&local_240);
        if (lVar6 == 0) goto LAB_00bdc8cc;
      } while (*(int *)(lVar6 + 0x14) < iVar3);
      do {
        puVar14 = puVar13;
        if (puVar14 == param_1) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__algorithm/sort.h:638: libc++ Hardening assertion __last != __begin failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                    );
        }
        local_150 = (undefined1 *)*param_3;
        local_238 = puVar14 + -0xcc;
        lVar6 = FUN_00b0ee70(&local_150,puVar14 + -0xcc,&DAT_001f94c3,&local_238,&local_240);
        if (lVar6 == 0) goto LAB_00bdc8cc;
        local_150 = (undefined1 *)*param_3;
        iVar3 = *(int *)(lVar6 + 0x14);
        local_238 = puVar18;
        lVar6 = FUN_00b0ee70(&local_150,(long)&uStack_228 + 4,&DAT_001f94c3,&local_238,&local_240);
        if (lVar6 == 0) goto LAB_00bdc8cc;
        puVar13 = puVar14 + -0xd8;
      } while (iVar3 <= *(int *)(lVar6 + 0x14));
      puVar13 = puVar14 + -0xd8;
    } while (puVar15 < puVar14 + -0xd8);
  }
  else {
    puVar24 = puVar23 + -0xd8;
  }
  if (param_1 != puVar24) {
    FUN_00890f48(param_1,puVar24);
  }
  FUN_00890f48(puVar24,&local_230);
  FUN_00890cb8(&local_230);
  if (puVar20 <= puVar23) {
    uVar17 = FUN_00bdd3bc(param_1,puVar24,param_3);
    uVar22 = FUN_00bdd3bc(puVar24 + 0xd8,param_2,param_3);
    if ((uVar22 & 1) != 0) goto LAB_00bdbeb8;
    puVar23 = puVar24 + 0xd8;
    if ((uVar17 & 1) != 0) goto LAB_00bdb5d8;
  }
  FUN_00bdb570(param_1,puVar24,param_3,local_260,param_5 & 1);
  param_5 = 0;
  puVar23 = puVar24 + 0xd8;
  goto LAB_00bdb5d8;
  while( true ) {
    local_150 = (undefined1 *)*param_3;
    local_230 = param_1 + 0xc;
    iVar3 = *(int *)(lVar5 + 0x14);
    lVar5 = FUN_00b0ee70(&local_150,param_1 + 0xc,&DAT_001f94c3,&local_230,&local_238);
    if (lVar5 == 0) goto LAB_00bdc8cc;
    if (*(int *)(lVar5 + 0x14) < iVar3) {
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
      uStack_148 = &DAT_aaaaaaaaaaaaaaaa;
      local_150 = &DAT_aaaaaaaaaaaaaaaa;
      local_80 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_00890aa0(&local_150,puVar23);
      lVar5 = lVar6;
      do {
        puVar18 = param_1;
        FUN_00890f48(puVar18 + 0xd8,puVar18);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__algorithm/sort.h:293: libc++ Hardening assertion __k != __leftmost failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                    );
        }
        local_230 = (undefined1 *)*param_3;
        local_238 = (undefined1 *)((long)&uStack_148 + 4);
        lVar8 = FUN_00b0ee70(&local_230,(undefined1 *)((long)&uStack_148 + 4),&DAT_001f94c3,
                             &local_238,&local_240);
        if (lVar8 == 0) goto LAB_00bdc8cc;
        local_230 = (undefined1 *)*param_3;
        local_238 = puVar18 + -0xcc;
        iVar3 = *(int *)(lVar8 + 0x14);
        lVar8 = FUN_00b0ee70(&local_230,puVar18 + -0xcc,&DAT_001f94c3,&local_238,&local_240);
        if (lVar8 == 0) goto LAB_00bdc8cc;
        lVar5 = lVar5 + 0xd8;
        param_1 = puVar18 + -0xd8;
      } while (*(int *)(lVar8 + 0x14) < iVar3);
      FUN_00890f48(puVar18,&local_150);
      FUN_00890cb8(&local_150);
    }
    lVar6 = lVar6 + -0xd8;
    puVar18 = puVar23 + 0xd8;
    param_1 = puVar23;
    if (puVar23 + 0xd8 == param_2) break;
LAB_00bdc7b4:
    puVar23 = puVar18;
    local_150 = (undefined1 *)*param_3;
    local_230 = param_1 + 0xe4;
    lVar5 = FUN_00b0ee70(&local_150,param_1 + 0xe4,&DAT_001f94c3,&local_230,&local_238);
    if (lVar5 == 0) goto LAB_00bdc8cc;
  }
  goto LAB_00bdc8e0;
LAB_00bdc064:
  do {
    puVar9 = puVar18;
    local_150 = (undefined1 *)*param_3;
    local_230 = puVar23 + 0xe4;
    lVar5 = FUN_00b0ee70(&local_150,puVar23 + 0xe4,&DAT_001f94c3,&local_230,&local_238);
    if (lVar5 == 0) goto LAB_00bdc8cc;
    local_150 = (undefined1 *)*param_3;
    local_230 = puVar23 + 0xc;
    iVar3 = *(int *)(lVar5 + 0x14);
    lVar5 = FUN_00b0ee70(&local_150,local_230,&DAT_001f94c3,&local_230,&local_238);
    if (lVar5 == 0) goto LAB_00bdc8cc;
    if (*(int *)(lVar5 + 0x14) < iVar3) {
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
      uStack_148 = &DAT_aaaaaaaaaaaaaaaa;
      local_150 = &DAT_aaaaaaaaaaaaaaaa;
      local_80 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_00890aa0(&local_150,puVar9);
      lVar5 = lVar6;
      do {
        lVar8 = lVar5;
        FUN_00890f48(param_1 + lVar8 + 0xd8,param_1 + lVar8);
        puVar18 = param_1;
        if (lVar8 == 0) goto LAB_00bdc040;
        local_230 = (undefined1 *)*param_3;
        local_238 = (undefined1 *)((long)&uStack_148 + 4);
        lVar5 = FUN_00b0ee70(&local_230,(undefined1 *)((long)&uStack_148 + 4),&DAT_001f94c3,
                             &local_238,&local_240);
        if (lVar5 == 0) goto LAB_00bdc8cc;
        local_230 = (undefined1 *)*param_3;
        iVar3 = *(int *)(lVar5 + 0x14);
        local_238 = param_1 + lVar8 + -0xcc;
        lVar7 = FUN_00b0ee70(&local_230,local_238,&DAT_001f94c3,&local_238,&local_240);
        if (lVar7 == 0) goto LAB_00bdc8cc;
        lVar5 = lVar8 + -0xd8;
      } while (*(int *)(lVar7 + 0x14) < iVar3);
      puVar18 = param_1 + lVar8;
LAB_00bdc040:
      FUN_00890f48(puVar18,&local_150);
      FUN_00890cb8(&local_150);
    }
    lVar6 = lVar6 + 0xd8;
    puVar18 = puVar9 + 0xd8;
    puVar23 = puVar9;
  } while (puVar9 + 0xd8 != param_2);
  goto LAB_00bdc8e0;
LAB_00bdbeb8:
  param_2 = puVar24;
  if ((uVar17 & 1) != 0) goto LAB_00bdc8e0;
  goto LAB_00bdb5c4;
LAB_00bdc1c0:
  do {
    if (uVar10 <= uVar21) {
      uVar1 = (uVar10 & 0x3fffffffffffffff) << 1 | 1;
      uVar11 = uVar10 * 2 + 2;
      uVar19 = uVar1;
      if (uVar11 < uVar22) {
        local_150 = (undefined1 *)*param_3;
        local_230 = param_1 + uVar1 * 0xd8 + 0xc;
        lVar6 = FUN_00b0ee70(&local_150,local_230,&DAT_001f94c3,&local_230,&local_238);
        if (lVar6 == 0) goto LAB_00bdc8cc;
        local_150 = (undefined1 *)*param_3;
        iVar3 = *(int *)(lVar6 + 0x14);
        local_230 = param_1 + uVar11 * 0xd8 + 0xc;
        lVar6 = FUN_00b0ee70(&local_150,local_230,&DAT_001f94c3,&local_230,&local_238);
        if (lVar6 == 0) goto LAB_00bdc8cc;
        uVar19 = uVar11;
        if (iVar3 <= *(int *)(lVar6 + 0x14)) {
          uVar19 = uVar1;
        }
      }
      local_150 = (undefined1 *)*param_3;
      local_230 = param_1 + uVar19 * 0xd8 + 0xc;
      lVar6 = FUN_00b0ee70(&local_150,local_230,&DAT_001f94c3,&local_230,&local_238);
      if (lVar6 == 0) goto LAB_00bdc8cc;
      iVar3 = *(int *)(lVar6 + 0x14);
      puVar18 = param_1 + uVar10 * 0xd8;
      local_150 = (undefined1 *)*param_3;
      local_230 = puVar18 + 0xc;
      lVar6 = FUN_00b0ee70(&local_150,puVar18 + 0xc,&DAT_001f94c3,&local_230,&local_238);
      if (lVar6 == 0) goto LAB_00bdc8cc;
      if (iVar3 <= *(int *)(lVar6 + 0x14)) {
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
        uStack_148 = &DAT_aaaaaaaaaaaaaaaa;
        local_150 = &DAT_aaaaaaaaaaaaaaaa;
        local_80 = &DAT_aaaaaaaaaaaaaaaa;
        FUN_00890aa0(&local_150,puVar18);
        uVar11 = uVar10;
        do {
          lVar6 = uVar19 * 0xd8;
          FUN_00890f48(param_1 + uVar11 * 0xd8);
          if ((long)uVar21 < (long)uVar19) break;
          uVar1 = (uVar19 & 0x3fffffffffffffff) << 1 | 1;
          uVar11 = uVar19 * 2 + 2;
          uVar16 = uVar1;
          if ((long)uVar11 < (long)uVar22) {
            local_230 = (undefined1 *)*param_3;
            local_238 = param_1 + uVar1 * 0xd8 + 0xc;
            lVar5 = FUN_00b0ee70(&local_230,local_238,&DAT_001f94c3,&local_238,&local_240);
            if (lVar5 == 0) goto LAB_00bdc8cc;
            local_230 = (undefined1 *)*param_3;
            iVar3 = *(int *)(lVar5 + 0x14);
            local_238 = param_1 + uVar11 * 0xd8 + 0xc;
            lVar5 = FUN_00b0ee70(&local_230,local_238,&DAT_001f94c3,&local_238,&local_240);
            if (lVar5 == 0) goto LAB_00bdc8cc;
            uVar16 = uVar11;
            if (iVar3 <= *(int *)(lVar5 + 0x14)) {
              uVar16 = uVar1;
            }
          }
          local_230 = (undefined1 *)*param_3;
          local_238 = param_1 + uVar16 * 0xd8 + 0xc;
          lVar5 = FUN_00b0ee70(&local_230,local_238,&DAT_001f94c3,&local_238,&local_240);
          if (lVar5 == 0) goto LAB_00bdc8cc;
          local_230 = (undefined1 *)*param_3;
          iVar3 = *(int *)(lVar5 + 0x14);
          local_238 = (undefined1 *)((long)&uStack_148 + 4);
          lVar5 = FUN_00b0ee70(&local_230,(undefined1 *)((long)&uStack_148 + 4),&DAT_001f94c3,
                               &local_238,&local_240);
          if (lVar5 == 0) goto LAB_00bdc8cc;
          uVar11 = uVar19;
          uVar19 = uVar16;
        } while (iVar3 <= *(int *)(lVar5 + 0x14));
        FUN_00890f48(param_1 + lVar6,&local_150);
        FUN_00890cb8(&local_150);
      }
    }
    bVar2 = uVar10 != 0;
    uVar10 = uVar10 - 1;
  } while (bVar2);
  lVar6 = (uVar17 >> 3) * -0x7b425ed097b425ed;
  do {
    puStack_1b8 = &DAT_aaaaaaaaaaaaaaaa;
    local_1c0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_1a8 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_1b0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_198 = &DAT_aaaaaaaaaaaaaaaa;
    local_1a0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_188 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_190 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_178 = &DAT_aaaaaaaaaaaaaaaa;
    local_180 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_168 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_170 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_218 = &DAT_aaaaaaaaaaaaaaaa;
    local_220 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_208 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_210 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_1f8 = &DAT_aaaaaaaaaaaaaaaa;
    local_200 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_1e8 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_1f0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_1d8 = &DAT_aaaaaaaaaaaaaaaa;
    local_1e0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_1c8 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_1d0 = &DAT_aaaaaaaaaaaaaaaa;
    uStack_228 = &DAT_aaaaaaaaaaaaaaaa;
    local_230 = &DAT_aaaaaaaaaaaaaaaa;
    local_160 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00890aa0(&local_230,param_1);
    puVar18 = param_1;
    uVar17 = 0;
    do {
      uVar10 = uVar17 << 1 | 1;
      uVar22 = uVar17 * 2 + 2;
      puVar23 = puVar18 + uVar17 * 0xd8 + 0xd8;
      uVar21 = uVar10;
      if ((long)uVar22 < lVar6) {
        local_150 = (undefined1 *)*param_3;
        local_238 = puVar18 + uVar17 * 0xd8 + 0xe4;
        lVar5 = FUN_00b0ee70(&local_150,puVar18 + uVar17 * 0xd8 + 0xe4,&DAT_001f94c3,&local_238,
                             &local_240);
        if (lVar5 == 0) goto LAB_00bdc8cc;
        local_150 = (undefined1 *)*param_3;
        local_238 = puVar18 + uVar17 * 0xd8 + 0x1bc;
        iVar3 = *(int *)(lVar5 + 0x14);
        lVar5 = FUN_00b0ee70(&local_150,puVar18 + uVar17 * 0xd8 + 0x1bc,&DAT_001f94c3,&local_238,
                             &local_240);
        if (lVar5 == 0) goto LAB_00bdc8cc;
        puVar23 = puVar18 + uVar17 * 0xd8 + 0x1b0;
        uVar21 = uVar22;
        if (iVar3 <= *(int *)(lVar5 + 0x14)) {
          puVar23 = puVar18 + uVar17 * 0xd8 + 0xd8;
          uVar21 = uVar10;
        }
      }
      FUN_00890f48(puVar18,puVar23);
      puVar18 = puVar23;
      uVar17 = uVar21;
    } while ((long)uVar21 <= (long)(lVar6 - 2U >> 1));
    param_2 = param_2 + -0xd8;
    if (puVar23 == param_2) {
      FUN_00890f48(puVar23,&local_230);
    }
    else {
      FUN_00890f48(puVar23,param_2);
      FUN_00890f48(param_2,&local_230);
      if (0xd8 < (long)(puVar23 + (0xd8 - (long)param_1))) {
        uVar17 = ((ulong)(puVar23 + (0xd8 - (long)param_1)) >> 3) * -0x7b425ed097b425ed - 2 >> 1;
        puVar18 = param_1 + uVar17 * 0xd8;
        local_150 = (undefined1 *)*param_3;
        local_238 = puVar18 + 0xc;
        lVar5 = FUN_00b0ee70(&local_150,puVar18 + 0xc,&DAT_001f94c3,&local_238,&local_240);
        if (lVar5 == 0) {
LAB_00bdc8cc:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__hash_table:248: libc++ Hardening assertion __node_ != nullptr failed: Attempted to dereference a non-dereferenceable unordered container iterator\n"
                    );
        }
        local_150 = (undefined1 *)*param_3;
        local_238 = puVar23 + 0xc;
        iVar3 = *(int *)(lVar5 + 0x14);
        lVar5 = FUN_00b0ee70(&local_150,puVar23 + 0xc,&DAT_001f94c3,&local_238,&local_240);
        if (lVar5 == 0) goto LAB_00bdc8cc;
        if (*(int *)(lVar5 + 0x14) < iVar3) {
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
          uStack_148 = &DAT_aaaaaaaaaaaaaaaa;
          local_150 = &DAT_aaaaaaaaaaaaaaaa;
          local_80 = &DAT_aaaaaaaaaaaaaaaa;
          FUN_00890aa0(&local_150,puVar23);
          do {
            puVar9 = puVar18;
            FUN_00890f48(puVar23,puVar9);
            if (uVar17 == 0) break;
            uVar17 = uVar17 - 1 >> 1;
            puVar18 = param_1 + uVar17 * 0xd8;
            local_238 = (undefined1 *)*param_3;
            local_240 = puVar18 + 0xc;
            lVar5 = FUN_00b0ee70(&local_238,puVar18 + 0xc,&DAT_001f94c3,&local_240,&uStack_241);
            if (lVar5 == 0) goto LAB_00bdc8cc;
            local_238 = (undefined1 *)*param_3;
            iVar3 = *(int *)(lVar5 + 0x14);
            local_240 = (undefined1 *)((long)&uStack_148 + 4);
            lVar5 = FUN_00b0ee70(&local_238,(undefined1 *)((long)&uStack_148 + 4),&DAT_001f94c3,
                                 &local_240,&uStack_241);
            if (lVar5 == 0) goto LAB_00bdc8cc;
            puVar23 = puVar9;
          } while (*(int *)(lVar5 + 0x14) < iVar3);
          FUN_00890f48(puVar9,&local_150);
          FUN_00890cb8(&local_150);
        }
      }
    }
    FUN_00890cb8(&local_230);
    bVar2 = 2 < lVar6;
    lVar6 = lVar6 + -1;
  } while (bVar2);
LAB_00bdc8e0:
  if (*(long *)(lVar4 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00bdc9a8  FUN_00bdc9a8 =====

void FUN_00bdc9a8(long param_1,long param_2,long param_3,undefined8 *param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 uStack_149;
  long local_148;
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
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined1 *puStack_d0;
  undefined1 *puStack_c8;
  undefined1 *local_c0;
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
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  lVar5 = param_2 + 0xc;
  local_140 = (undefined1 *)*param_4;
  local_148 = lVar5;
  lVar4 = FUN_00b0ee70(&local_140,param_2 + 0xc,&DAT_001f94c3,&local_148,&uStack_149);
  if (lVar4 == 0) {
LAB_00bdcd74:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__hash_table:248: libc++ Hardening assertion __node_ != nullptr failed: Attempted to dereference a non-dereferenceable unordered container iterator\n"
              );
  }
  local_140 = (undefined1 *)*param_4;
  iVar2 = *(int *)(lVar4 + 0x14);
  local_148 = param_1 + 0xc;
  lVar4 = FUN_00b0ee70(&local_140,param_1 + 0xc,&DAT_001f94c3,&local_148,&uStack_149);
  if (lVar4 == 0) goto LAB_00bdcd74;
  local_140 = (undefined1 *)*param_4;
  lVar1 = param_3 + 0xc;
  local_148 = lVar1;
  if (*(int *)(lVar4 + 0x14) < iVar2) {
    lVar4 = FUN_00b0ee70(&local_140,param_3 + 0xc,&DAT_001f94c3,&local_148,&uStack_149);
    if (lVar4 == 0) goto LAB_00bdcd74;
    local_140 = (undefined1 *)*param_4;
    iVar2 = *(int *)(lVar4 + 0x14);
    local_148 = lVar5;
    lVar4 = FUN_00b0ee70(&local_140,param_2 + 0xc,&DAT_001f94c3,&local_148,&uStack_149);
    if (lVar4 == 0) goto LAB_00bdcd74;
    if (*(int *)(lVar4 + 0x14) < iVar2) {
      puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
      local_b0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
      local_90 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
      local_c0 = &DAT_aaaaaaaaaaaaaaaa;
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
      puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
      local_e0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_d0 = &DAT_aaaaaaaaaaaaaaaa;
      local_70 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_00890aa0(&local_140,param_1);
      param_2 = param_1;
    }
    else {
      puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
      local_b0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
      local_90 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
      local_c0 = &DAT_aaaaaaaaaaaaaaaa;
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
      puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
      local_e0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_d0 = &DAT_aaaaaaaaaaaaaaaa;
      local_70 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_00890aa0(&local_140,param_1);
      FUN_00890f48(param_1,param_2);
      FUN_00890f48(param_2,&local_140);
      FUN_00890cb8(&local_140);
      local_140 = (undefined1 *)*param_4;
      local_148 = lVar1;
      lVar4 = FUN_00b0ee70(&local_140,param_3 + 0xc,&DAT_001f94c3,&local_148,&uStack_149);
      if (lVar4 == 0) goto LAB_00bdcd74;
      local_140 = (undefined1 *)*param_4;
      iVar2 = *(int *)(lVar4 + 0x14);
      local_148 = lVar5;
      lVar5 = FUN_00b0ee70(&local_140,param_2 + 0xc,&DAT_001f94c3,&local_148,&uStack_149);
      if (lVar5 == 0) goto LAB_00bdcd74;
      if (iVar2 <= *(int *)(lVar5 + 0x14)) goto LAB_00bdcd40;
      puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
      local_b0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
      local_90 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
      local_c0 = &DAT_aaaaaaaaaaaaaaaa;
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
      puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
      local_e0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_d0 = &DAT_aaaaaaaaaaaaaaaa;
      local_70 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_00890aa0(&local_140,param_2);
    }
    FUN_00890f48(param_2,param_3);
    param_2 = param_3;
  }
  else {
    lVar4 = FUN_00b0ee70(&local_140,param_3 + 0xc,&DAT_001f94c3,&local_148,&uStack_149);
    if (lVar4 == 0) goto LAB_00bdcd74;
    local_140 = (undefined1 *)*param_4;
    iVar2 = *(int *)(lVar4 + 0x14);
    local_148 = lVar5;
    lVar4 = FUN_00b0ee70(&local_140,param_2 + 0xc,&DAT_001f94c3,&local_148,&uStack_149);
    if (lVar4 == 0) goto LAB_00bdcd74;
    if (iVar2 <= *(int *)(lVar4 + 0x14)) goto LAB_00bdcd40;
    puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
    local_b0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
    local_90 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
    local_c0 = &DAT_aaaaaaaaaaaaaaaa;
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
    puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
    local_e0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_d0 = &DAT_aaaaaaaaaaaaaaaa;
    local_70 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00890aa0(&local_140,param_2);
    FUN_00890f48(param_2,param_3);
    FUN_00890f48(param_3,&local_140);
    FUN_00890cb8(&local_140);
    local_140 = (undefined1 *)*param_4;
    local_148 = lVar5;
    lVar5 = FUN_00b0ee70(&local_140,param_2 + 0xc,&DAT_001f94c3,&local_148,&uStack_149);
    if (lVar5 == 0) goto LAB_00bdcd74;
    local_140 = (undefined1 *)*param_4;
    iVar2 = *(int *)(lVar5 + 0x14);
    local_148 = param_1 + 0xc;
    lVar5 = FUN_00b0ee70(&local_140,param_1 + 0xc,&DAT_001f94c3,&local_148,&uStack_149);
    if (lVar5 == 0) goto LAB_00bdcd74;
    if (iVar2 <= *(int *)(lVar5 + 0x14)) goto LAB_00bdcd40;
    puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
    local_b0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
    local_90 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
    local_c0 = &DAT_aaaaaaaaaaaaaaaa;
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
    puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
    local_e0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_d0 = &DAT_aaaaaaaaaaaaaaaa;
    local_70 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00890aa0(&local_140,param_1);
    FUN_00890f48(param_1,param_2);
  }
  FUN_00890f48(param_2,&local_140);
  FUN_00890cb8(&local_140);
LAB_00bdcd40:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00bdcd8c  FUN_00bdcd8c =====

void FUN_00bdcd8c(long param_1,long param_2,long param_3,long param_4,undefined8 *param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined1 uStack_149;
  long local_148;
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
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined1 *puStack_d0;
  undefined1 *puStack_c8;
  undefined1 *local_c0;
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
  FUN_00bdc9a8();
  local_140 = (undefined1 *)*param_5;
  local_148 = param_4 + 0xc;
  lVar3 = FUN_00b0ee70(&local_140,param_4 + 0xc,&DAT_001f94c3,&local_148,&uStack_149);
  if (lVar3 != 0) {
    local_140 = (undefined1 *)*param_5;
    iVar1 = *(int *)(lVar3 + 0x14);
    local_148 = param_3 + 0xc;
    lVar3 = FUN_00b0ee70(&local_140,param_3 + 0xc,&DAT_001f94c3,&local_148,&uStack_149);
    if (lVar3 != 0) {
      if (iVar1 <= *(int *)(lVar3 + 0x14)) goto LAB_00bdcffc;
      puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
      local_b0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
      local_90 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
      local_c0 = &DAT_aaaaaaaaaaaaaaaa;
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
      puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
      local_e0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_d0 = &DAT_aaaaaaaaaaaaaaaa;
      local_70 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_00890aa0(&local_140,param_3);
      FUN_00890f48(param_3,param_4);
      FUN_00890f48(param_4,&local_140);
      FUN_00890cb8(&local_140);
      local_140 = (undefined1 *)*param_5;
      local_148 = param_3 + 0xc;
      lVar3 = FUN_00b0ee70(&local_140,param_3 + 0xc,&DAT_001f94c3,&local_148,&uStack_149);
      if (lVar3 != 0) {
        local_140 = (undefined1 *)*param_5;
        iVar1 = *(int *)(lVar3 + 0x14);
        local_148 = param_2 + 0xc;
        lVar3 = FUN_00b0ee70(&local_140,param_2 + 0xc,&DAT_001f94c3,&local_148,&uStack_149);
        if (lVar3 != 0) {
          if (iVar1 <= *(int *)(lVar3 + 0x14)) {
LAB_00bdcffc:
            if (*(long *)(lVar2 + 0x28) == local_68) {
              return;
            }
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
          local_b0 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
          local_90 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
          local_c0 = &DAT_aaaaaaaaaaaaaaaa;
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
          puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
          local_e0 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_d0 = &DAT_aaaaaaaaaaaaaaaa;
          local_70 = &DAT_aaaaaaaaaaaaaaaa;
          FUN_00890aa0(&local_140,param_2);
          FUN_00890f48(param_2,param_3);
          FUN_00890f48(param_3,&local_140);
          FUN_00890cb8(&local_140);
          local_140 = (undefined1 *)*param_5;
          local_148 = param_2 + 0xc;
          lVar3 = FUN_00b0ee70(&local_140,param_2 + 0xc,&DAT_001f94c3,&local_148,&uStack_149);
          if (lVar3 != 0) {
            local_140 = (undefined1 *)*param_5;
            local_148 = param_1 + 0xc;
            iVar1 = *(int *)(lVar3 + 0x14);
            lVar3 = FUN_00b0ee70(&local_140,param_1 + 0xc,&DAT_001f94c3,&local_148,&uStack_149);
            if (lVar3 != 0) {
              if (*(int *)(lVar3 + 0x14) < iVar1) {
                puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
                local_b0 = &DAT_aaaaaaaaaaaaaaaa;
                puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
                puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
                puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
                local_90 = &DAT_aaaaaaaaaaaaaaaa;
                puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
                puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
                puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
                local_c0 = &DAT_aaaaaaaaaaaaaaaa;
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
                puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
                local_e0 = &DAT_aaaaaaaaaaaaaaaa;
                puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
                puStack_d0 = &DAT_aaaaaaaaaaaaaaaa;
                local_70 = &DAT_aaaaaaaaaaaaaaaa;
                FUN_00890aa0(&local_140,param_1);
                FUN_00890f48(param_1,param_2);
                FUN_00890f48(param_2,&local_140);
                FUN_00890cb8(&local_140);
              }
              goto LAB_00bdcffc;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__hash_table:248: libc++ Hardening assertion __node_ != nullptr failed: Attempted to dereference a non-dereferenceable unordered container iterator\n"
            );
}


// ===== 00bdd048  FUN_00bdd048 =====

void FUN_00bdd048(long param_1,long param_2,long param_3,long param_4,long param_5,
                 undefined8 *param_6)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined1 uStack_149;
  long local_148;
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
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined1 *puStack_d0;
  undefined1 *puStack_c8;
  undefined1 *local_c0;
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
  FUN_00bdcd8c();
  local_140 = (undefined1 *)*param_6;
  local_148 = param_5 + 0xc;
  lVar3 = FUN_00b0ee70(&local_140,param_5 + 0xc,&DAT_001f94c3,&local_148,&uStack_149);
  if (lVar3 != 0) {
    local_140 = (undefined1 *)*param_6;
    iVar1 = *(int *)(lVar3 + 0x14);
    local_148 = param_4 + 0xc;
    lVar3 = FUN_00b0ee70(&local_140,param_4 + 0xc,&DAT_001f94c3,&local_148,&uStack_149);
    if (lVar3 != 0) {
      if (iVar1 <= *(int *)(lVar3 + 0x14)) goto LAB_00bdd370;
      puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
      local_b0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
      local_90 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
      local_c0 = &DAT_aaaaaaaaaaaaaaaa;
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
      puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
      local_e0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_d0 = &DAT_aaaaaaaaaaaaaaaa;
      local_70 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_00890aa0(&local_140,param_4);
      FUN_00890f48(param_4,param_5);
      FUN_00890f48(param_5,&local_140);
      FUN_00890cb8(&local_140);
      local_140 = (undefined1 *)*param_6;
      local_148 = param_4 + 0xc;
      lVar3 = FUN_00b0ee70(&local_140,param_4 + 0xc,&DAT_001f94c3,&local_148,&uStack_149);
      if (lVar3 != 0) {
        local_140 = (undefined1 *)*param_6;
        iVar1 = *(int *)(lVar3 + 0x14);
        local_148 = param_3 + 0xc;
        lVar3 = FUN_00b0ee70(&local_140,param_3 + 0xc,&DAT_001f94c3,&local_148,&uStack_149);
        if (lVar3 != 0) {
          if (iVar1 <= *(int *)(lVar3 + 0x14)) goto LAB_00bdd370;
          puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
          local_b0 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
          local_90 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
          local_c0 = &DAT_aaaaaaaaaaaaaaaa;
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
          puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
          local_e0 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_d0 = &DAT_aaaaaaaaaaaaaaaa;
          local_70 = &DAT_aaaaaaaaaaaaaaaa;
          FUN_00890aa0(&local_140,param_3);
          FUN_00890f48(param_3,param_4);
          FUN_00890f48(param_4,&local_140);
          FUN_00890cb8(&local_140);
          local_140 = (undefined1 *)*param_6;
          local_148 = param_3 + 0xc;
          lVar3 = FUN_00b0ee70(&local_140,param_3 + 0xc,&DAT_001f94c3,&local_148,&uStack_149);
          if (lVar3 != 0) {
            local_140 = (undefined1 *)*param_6;
            iVar1 = *(int *)(lVar3 + 0x14);
            local_148 = param_2 + 0xc;
            lVar3 = FUN_00b0ee70(&local_140,param_2 + 0xc,&DAT_001f94c3,&local_148,&uStack_149);
            if (lVar3 != 0) {
              if (iVar1 <= *(int *)(lVar3 + 0x14)) {
LAB_00bdd370:
                if (*(long *)(lVar2 + 0x28) == local_68) {
                  return;
                }
                    /* WARNING: Subroutine does not return */
                __stack_chk_fail();
              }
              puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
              local_b0 = &DAT_aaaaaaaaaaaaaaaa;
              puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
              puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
              puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
              local_90 = &DAT_aaaaaaaaaaaaaaaa;
              puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
              puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
              puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
              local_c0 = &DAT_aaaaaaaaaaaaaaaa;
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
              puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
              local_e0 = &DAT_aaaaaaaaaaaaaaaa;
              puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
              puStack_d0 = &DAT_aaaaaaaaaaaaaaaa;
              local_70 = &DAT_aaaaaaaaaaaaaaaa;
              FUN_00890aa0(&local_140,param_2);
              FUN_00890f48(param_2,param_3);
              FUN_00890f48(param_3,&local_140);
              FUN_00890cb8(&local_140);
              local_140 = (undefined1 *)*param_6;
              local_148 = param_2 + 0xc;
              lVar3 = FUN_00b0ee70(&local_140,param_2 + 0xc,&DAT_001f94c3,&local_148,&uStack_149);
              if (lVar3 != 0) {
                local_140 = (undefined1 *)*param_6;
                local_148 = param_1 + 0xc;
                iVar1 = *(int *)(lVar3 + 0x14);
                lVar3 = FUN_00b0ee70(&local_140,param_1 + 0xc,&DAT_001f94c3,&local_148,&uStack_149);
                if (lVar3 != 0) {
                  if (*(int *)(lVar3 + 0x14) < iVar1) {
                    puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
                    local_b0 = &DAT_aaaaaaaaaaaaaaaa;
                    puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
                    puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
                    puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
                    local_90 = &DAT_aaaaaaaaaaaaaaaa;
                    puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
                    puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
                    puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
                    local_c0 = &DAT_aaaaaaaaaaaaaaaa;
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
                    puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
                    local_e0 = &DAT_aaaaaaaaaaaaaaaa;
                    puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
                    puStack_d0 = &DAT_aaaaaaaaaaaaaaaa;
                    local_70 = &DAT_aaaaaaaaaaaaaaaa;
                    FUN_00890aa0(&local_140,param_1);
                    FUN_00890f48(param_1,param_2);
                    FUN_00890f48(param_2,&local_140);
                    FUN_00890cb8(&local_140);
                  }
                  goto LAB_00bdd370;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__hash_table:248: libc++ Hardening assertion __node_ != nullptr failed: Attempted to dereference a non-dereferenceable unordered container iterator\n"
            );
}


// ===== 00bdd3bc  FUN_00bdd3bc =====

bool FUN_00bdd3bc(long param_1,long param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  undefined1 uStack_161;
  long local_160;
  long local_158;
  undefined1 *local_150;
  undefined8 uStack_148;
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
  
  lVar2 = tpidr_el0;
  uVar7 = (param_2 - param_1 >> 3) * -0x7b425ed097b425ed;
  local_78 = *(long *)(lVar2 + 0x28);
  if ((long)uVar7 < 3) {
    if (1 < uVar7) {
      if (uVar7 != 2) goto LAB_00bdd550;
      local_150 = (undefined1 *)*param_3;
      local_158 = param_2 + -0xcc;
      lVar4 = FUN_00b0ee70(&local_150,param_2 + -0xcc,&DAT_001f94c3,&local_158,&local_160);
      if (lVar4 == 0) {
LAB_00bdd75c:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__hash_table:248: libc++ Hardening assertion __node_ != nullptr failed: Attempted to dereference a non-dereferenceable unordered container iterator\n"
                  );
      }
      local_150 = (undefined1 *)*param_3;
      local_158 = param_1 + 0xc;
      iVar9 = *(int *)(lVar4 + 0x14);
      lVar4 = FUN_00b0ee70(&local_150,param_1 + 0xc,&DAT_001f94c3,&local_158,&local_160);
      if (lVar4 == 0) goto LAB_00bdd75c;
      if (*(int *)(lVar4 + 0x14) < iVar9) {
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
        uStack_148 = &DAT_aaaaaaaaaaaaaaaa;
        local_150 = &DAT_aaaaaaaaaaaaaaaa;
        local_80 = &DAT_aaaaaaaaaaaaaaaa;
        FUN_00890aa0(&local_150,param_1);
        FUN_00890f48(param_1,param_2 + -0xd8);
        FUN_00890f48(param_2 + -0xd8,&local_150);
        FUN_00890cb8(&local_150);
        bVar3 = true;
        goto LAB_00bdd724;
      }
    }
  }
  else {
    if (uVar7 == 3) {
      FUN_00bdc9a8(param_1,param_1 + 0xd8,param_2 + -0xd8,param_3);
      bVar3 = true;
      goto LAB_00bdd724;
    }
    if (uVar7 == 4) {
      FUN_00bdcd8c(param_1,param_1 + 0xd8,param_1 + 0x1b0,param_2 + -0xd8,param_3);
      bVar3 = true;
      goto LAB_00bdd724;
    }
    if (uVar7 == 5) {
      FUN_00bdd048(param_1,param_1 + 0xd8,param_1 + 0x1b0,param_1 + 0x288,param_2 + -0xd8,param_3);
      bVar3 = true;
      goto LAB_00bdd724;
    }
LAB_00bdd550:
    FUN_00bdc9a8(param_1,param_1 + 0xd8,param_1 + 0x1b0,param_3);
    if (param_1 + 0x288 != param_2) {
      lVar4 = 0;
      iVar9 = 0;
      lVar6 = param_1 + 0x1b0;
      lVar8 = param_1 + 0x288;
      do {
        local_150 = (undefined1 *)*param_3;
        local_158 = lVar8 + 0xc;
        lVar5 = FUN_00b0ee70(&local_150,lVar8 + 0xc,&DAT_001f94c3,&local_158,&local_160);
        if (lVar5 == 0) goto LAB_00bdd75c;
        local_150 = (undefined1 *)*param_3;
        local_158 = lVar6 + 0xc;
        iVar1 = *(int *)(lVar5 + 0x14);
        lVar6 = FUN_00b0ee70(&local_150,local_158,&DAT_001f94c3,&local_158,&local_160);
        if (lVar6 == 0) goto LAB_00bdd75c;
        if (*(int *)(lVar6 + 0x14) < iVar1) {
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
          uStack_148 = &DAT_aaaaaaaaaaaaaaaa;
          local_150 = &DAT_aaaaaaaaaaaaaaaa;
          local_80 = &DAT_aaaaaaaaaaaaaaaa;
          FUN_00890aa0(&local_150,lVar8);
          lVar6 = lVar4;
          do {
            FUN_00890f48(param_1 + lVar6 + 0x288,param_1 + lVar6 + 0x1b0);
            lVar5 = param_1;
            if (lVar6 == -0x1b0) goto LAB_00bdd598;
            local_158 = *param_3;
            local_160 = (long)&uStack_148 + 4;
            lVar5 = FUN_00b0ee70(&local_158,(long)&uStack_148 + 4,&DAT_001f94c3,&local_160,
                                 &uStack_161);
            if (lVar5 == 0) goto LAB_00bdd75c;
            local_158 = *param_3;
            iVar1 = *(int *)(lVar5 + 0x14);
            local_160 = param_1 + lVar6 + 0xe4;
            lVar5 = FUN_00b0ee70(&local_158,local_160,&DAT_001f94c3,&local_160,&uStack_161);
            if (lVar5 == 0) goto LAB_00bdd75c;
            lVar6 = lVar6 + -0xd8;
          } while (*(int *)(lVar5 + 0x14) < iVar1);
          lVar5 = param_1 + lVar6 + 0x288;
LAB_00bdd598:
          FUN_00890f48(lVar5,&local_150);
          iVar9 = iVar9 + 1;
          if (iVar9 == 8) {
            bVar3 = lVar8 + 0xd8 == param_2;
            FUN_00890cb8(&local_150);
            goto LAB_00bdd724;
          }
          FUN_00890cb8(&local_150);
        }
        lVar5 = lVar8 + 0xd8;
        lVar4 = lVar4 + 0xd8;
        lVar6 = lVar8;
        lVar8 = lVar5;
      } while (lVar5 != param_2);
      bVar3 = true;
      goto LAB_00bdd724;
    }
  }
  bVar3 = true;
LAB_00bdd724:
  if (*(long *)(lVar2 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar3;
}


// ===== 00bdd774  FUN_00bdd774 =====

/* WARNING: Removing unreachable block (ram,0x00bddc84) */
/* WARNING: Removing unreachable block (ram,0x00bddbfc) */
/* WARNING: Removing unreachable block (ram,0x00bdde48) */
/* WARNING: Removing unreachable block (ram,0x00bde0e8) */
/* WARNING: Removing unreachable block (ram,0x00bddb00) */
/* WARNING: Removing unreachable block (ram,0x00bddbe0) */
/* WARNING: Removing unreachable block (ram,0x00bddc68) */
/* WARNING: Removing unreachable block (ram,0x00bddd7c) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00bdd774(int *param_1,long *param_2)

{
  size_t __n;
  uint uVar1;
  char *__s1;
  ulong uVar2;
  uint6 uVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  char **ppcVar10;
  undefined8 *******pppppppuVar11;
  int iVar12;
  undefined8 ******ppppppuVar13;
  undefined8 uVar14;
  undefined8 *******pppppppuVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  undefined8 *******pppppppuVar21;
  ulong uVar22;
  long *plVar23;
  long *plVar24;
  undefined8 uVar25;
  undefined1 auVar26 [12];
  undefined1 *local_150;
  char *pcStack_148;
  undefined1 *local_140;
  undefined1 *puStack_138;
  undefined8 local_130;
  undefined1 uStack_119;
  char *local_118;
  char **local_110;
  undefined1 *local_108;
  char *local_100;
  char **ppcStack_f8;
  char *local_f0;
  ulong uStack_e8;
  char **local_e0;
  char **local_d8;
  char *local_d0;
  char **ppcStack_c8;
  undefined1 local_c0 [16];
  char **local_b0;
  char **local_a8;
  undefined8 *******local_98;
  undefined8 *******local_90;
  long local_88;
  char *local_80;
  ulong uStack_78;
  char **local_70;
  
  lVar17 = *param_2;
  lVar20 = param_2[1];
  local_90 = (undefined8 *******)0x0;
  local_88 = 0;
  pcStack_148 = &DAT_aaaaaaaaaaaaaaaa;
  local_150 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
  local_140 = &DAT_aaaaaaaaaaaaaaaa;
  local_130 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = &local_90;
  if (lVar20 != lVar17) {
    uVar22 = 0;
    do {
      lVar18 = lVar17 + uVar22 * 0xd8;
      uVar1 = *(uint *)(lVar18 + 0xc);
      pppppppuVar15 = &local_90;
      pppppppuVar11 = local_90;
      if (uVar1 != 0xffffffff) {
        while (pppppppuVar21 = pppppppuVar15, pppppppuVar11 != (undefined8 *******)0x0) {
          while (pppppppuVar15 = pppppppuVar11,
                (int)*(uint *)((long)pppppppuVar15 + 0x1c) <= (int)uVar1) {
            if (uVar1 == *(uint *)((long)pppppppuVar15 + 0x1c)) {
              uVar22 = FUN_004249b0();
              if ((uVar22 & 1) == 0) {
                local_118 = "../../media/base/codec_list.cc";
                local_110 = (char **)0x133;
                local_108 = &uStack_119;
                ppcStack_f8 = &local_118;
                local_100 = "Duplicate payload type in codec list, ";
                FUN_00b671bc(local_c0,lVar18);
                local_d8 = &local_100;
                uStack_e8 = local_c0._8_8_;
                local_f0 = (char *)local_c0._0_8_;
                local_e0 = local_b0;
                uVar22 = (param_2[1] - *param_2 >> 3) * -0x7b425ed097b425ed;
                ppcStack_c8 = &local_f0;
                local_d0 = " and ";
                iVar12 = *(int *)(pppppppuVar15 + 4);
                if (uVar22 < (ulong)(long)iVar12 || uVar22 - (long)iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                  std::__Cr::__libcpp_verbose_abort
                            ("%s",
                             "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                            );
                }
                FUN_00b671bc(&local_80,*param_2 + (long)iVar12 * 0xd8);
                local_a8 = &local_d0;
                local_c0._8_8_ = uStack_78;
                local_c0._0_8_ = local_80;
                local_b0 = local_70;
                puVar16 = *(undefined8 **)(ppcStack_c8[3] + 8);
                FUN_00623bb0("\r\t\n\t\n\t",*puVar16,*(undefined4 *)(puVar16 + 1),
                             *(undefined8 *)ppcStack_c8[3],ppcStack_c8,local_d0,local_c0,
                             " have the same ID");
                if (-1 < (long)local_e0) goto LAB_00bddcd4;
                operator_delete(local_f0);
                uVar22 = FUN_004249b0();
                auVar4._8_8_ = local_c0._8_8_;
                auVar4._0_8_ = local_c0._0_8_;
              }
              else {
LAB_00bddcd4:
                uVar22 = FUN_004249b0();
                auVar4._8_8_ = local_c0._8_8_;
                auVar4._0_8_ = local_c0._0_8_;
              }
              if ((uVar22 & 1) == 0) {
                local_c0 = FUN_005eceec(3);
                FUN_00623bb0(&DAT_00255ab0,"../../media/base/codec_list.cc",0x153,
                             "Duplicate payload type in codec list",&DAT_001a2df6,local_c0,
                             &DAT_001ca519);
                auVar4 = local_c0;
              }
              local_150 = (undefined1 *)CONCAT44(local_150._4_4_,3);
              local_c0 = auVar4;
              pcStack_148 = (char *)operator_new(0x28);
              uVar6 = s_Duplicate_payload_type_in_codec_l_001a5301._24_8_;
              uVar5 = s_Duplicate_payload_type_in_codec_l_001a5301._16_8_;
              uVar25 = s_Duplicate_payload_type_in_codec_l_001a5301._8_8_;
              uVar14 = s_Duplicate_payload_type_in_codec_l_001a5301._0_8_;
              puStack_138 = _UNK_001f2ca8;
              local_140 = _DAT_001f2ca0;
              if (pcStack_148 + 0x24 < pcStack_148) goto LAB_00bde170;
              if ((pcStack_148 < "uplicate payload type in codec list") &&
                 ("Duplicate payload type in codec list" < pcStack_148 + 0x24)) goto LAB_00bde184;
              pcStack_148[0x24] = '\0';
              pcStack_148[0x20] = 'l';
              pcStack_148[0x21] = 'i';
              pcStack_148[0x22] = 's';
              pcStack_148[0x23] = 't';
              *(undefined8 *)(pcStack_148 + 8) = uVar25;
              *(undefined8 *)pcStack_148 = uVar14;
              *(undefined8 *)(pcStack_148 + 0x18) = uVar6;
              *(undefined8 *)(pcStack_148 + 0x10) = uVar5;
              goto LAB_00bddefc;
            }
            pppppppuVar11 = (undefined8 *******)pppppppuVar15[1];
            if ((undefined8 *******)pppppppuVar15[1] == (undefined8 *******)0x0) {
              pppppppuVar21 = pppppppuVar15 + 1;
              goto LAB_00bdd868;
            }
          }
          pppppppuVar11 = (undefined8 *******)*pppppppuVar15;
        }
LAB_00bdd868:
        ppppppuVar13 = (undefined8 ******)operator_new(0x28);
        if (ppppppuVar13 == (undefined8 ******)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        *ppppppuVar13 = (undefined8 *****)0x0;
        ppppppuVar13[1] = (undefined8 *****)0x0;
        ppppppuVar13[2] = pppppppuVar15;
        *(ulong *)((long)ppppppuVar13 + 0x1c) = (ulong)uVar1 | uVar22 << 0x20;
        *pppppppuVar21 = ppppppuVar13;
        if ((undefined8 *******)*local_98 != (undefined8 *******)0x0) {
          local_98 = (undefined8 *******)*local_98;
          ppppppuVar13 = *pppppppuVar21;
        }
        FUN_005d5b94(local_90,ppppppuVar13);
        lVar17 = *param_2;
        lVar20 = param_2[1];
        local_88 = local_88 + 1;
      }
      uVar22 = uVar22 + 1;
    } while (uVar22 < (ulong)((lVar20 - lVar17 >> 3) * -0x7b425ed097b425ed));
  }
  for (; lVar17 != lVar20; lVar17 = lVar17 + 0xd8) {
    iVar12 = FUN_00891b68(lVar17);
    if (iVar12 == 4) {
      FUN_005d3510(local_c0,PTR_DAT_00d521b8);
      ppcVar10 = local_b0;
      plVar19 = (long *)(lVar17 + 0xb0);
      plVar23 = (long *)*plVar19;
      plVar24 = plVar19;
      if (plVar23 != (long *)0x0) {
        __s1 = (char *)local_c0._0_8_;
        uVar22 = local_c0._8_8_;
        if (-1 < (long)local_b0) {
          __s1 = local_c0;
          uVar22 = (ulong)local_b0 >> 0x38;
        }
        do {
          while( true ) {
            plVar24 = (long *)plVar23[4];
            uVar2 = plVar23[5];
            if (-1 < (char)*(byte *)((long)plVar23 + 0x37)) {
              plVar24 = plVar23 + 4;
              uVar2 = (ulong)*(byte *)((long)plVar23 + 0x37);
            }
            __n = uVar2;
            if (uVar22 <= uVar2) {
              __n = uVar22;
            }
            iVar12 = memcmp(__s1,plVar24,__n);
            if (iVar12 == 0) break;
            if (-1 < iVar12) goto LAB_00bdd8fc;
LAB_00bdd94c:
            plVar23 = (long *)*plVar23;
            plVar24 = plVar19;
            if (plVar23 == (long *)0x0) goto LAB_00bdd958;
          }
          plVar24 = plVar23;
          if (uVar22 == uVar2) break;
          if (uVar22 < uVar2) goto LAB_00bdd94c;
LAB_00bdd8fc:
          plVar23 = (long *)plVar23[1];
          plVar24 = plVar19;
        } while (plVar23 != (long *)0x0);
      }
LAB_00bdd958:
      if ((long)ppcVar10 < 0) {
        operator_delete((void *)local_c0._0_8_);
      }
      if (*(int *)(lVar17 + 0xc) == -1) {
        if ((plVar24 != plVar19) && (uVar22 = FUN_004022fc(), (uVar22 & 1) == 0)) {
          FUN_00623bb0(&DAT_001f4ed3,"../../media/base/codec_list.cc",0x1f2,
                       "Surprising condition: RTX codec without ","PT has an apt parameter");
        }
      }
      else if (plVar24 == plVar19) {
        uVar22 = FUN_004022fc();
        if ((uVar22 & 1) == 0) {
          local_80 = "../../media/base/codec_list.cc";
          uStack_78 = 0x22a;
          local_70 = &local_100;
          ppcStack_c8 = &local_80;
          local_d0 = "Surprising condition: RTX codec without";
          local_110 = &local_d0;
          local_118 = " apt parameter: ";
          FUN_00b671bc(&local_f0,lVar17);
          if ((long)local_e0 < 0) {
            FUN_005478d8(local_c0,local_f0,uStack_e8);
            local_a8 = &local_118;
            if ((long)local_e0 < 0) {
              operator_delete(local_f0);
            }
          }
          else {
            local_c0._8_8_ = uStack_e8;
            local_c0._0_8_ = local_f0;
            local_b0 = local_e0;
            local_a8 = &local_118;
          }
          puVar16 = *(undefined8 **)(local_a8[1] + 8);
          FUN_00623bb0(&DAT_00258005,*puVar16,*(undefined4 *)(puVar16 + 1),
                       *(undefined8 *)local_a8[1],*local_a8,local_c0);
        }
      }
      else {
        lVar18 = (long)*(char *)((long)plVar24 + 0x4f);
        plVar19 = plVar24 + 7;
        if (lVar18 < 0) {
          lVar18 = plVar24[8];
          plVar19 = (long *)plVar24[7];
        }
        auVar26 = FUN_00675340(plVar19,lVar18,10);
        uVar22 = auVar26._0_8_ & 0xffffffff | 0x100000000;
        if ((auVar26._8_4_ & (uint)(auVar26._0_8_ + 0x80000000 >> 0x20 == 0)) == 0) {
          uVar22 = 0;
        }
        if (uVar22 >> 0x20 == 0) {
          uVar22 = FUN_004249b0();
          if ((uVar22 & 1) == 0) {
            local_80 = "../../media/base/codec_list.cc";
            uStack_78 = 0x25b;
            local_70 = &local_d0;
            local_110 = &local_80;
            local_118 = "Non-numeric argument to rtx apt: ";
            FUN_00b671bc(&local_f0,lVar17);
            if ((long)local_e0 < 0) {
              FUN_005478d8(local_c0,local_f0,uStack_e8);
              local_a8 = &local_118;
              if ((long)local_e0 < 0) {
                operator_delete(local_f0);
              }
            }
            else {
              local_c0._8_8_ = uStack_e8;
              local_c0._0_8_ = local_f0;
              local_b0 = local_e0;
              local_a8 = &local_118;
            }
            FUN_00623bb0("\r\t\n\t\n",*(undefined8 *)local_a8[1],*(undefined4 *)(local_a8[1] + 8),
                         *local_a8,local_c0," apt=",plVar24 + 7);
          }
          uVar22 = FUN_004249b0();
          if ((uVar22 & 1) == 0) {
            local_c0 = FUN_005eceec(3);
            FUN_00623bb0(&DAT_00255ab0,"../../media/base/codec_list.cc",0x273,
                         "Non-numeric argument to rtx apt parameter",&DAT_001a2df6,local_c0,
                         &DAT_001ca519);
          }
          FUN_00b0092c(&local_150,3,"Non-numeric argument to rtx apt parameter",0x29);
          goto LAB_00bddf08;
        }
        if (*(int *)(lVar17 + 0xc) != -1) {
          iVar12 = (int)uVar22;
          pppppppuVar15 = local_90;
          if (local_90 != (undefined8 *******)0x0) {
            do {
              if (*(int *)((long)pppppppuVar15 + 0x1c) <= iVar12) {
                if (*(int *)((long)pppppppuVar15 + 0x1c) == iVar12) goto LAB_00bdd8a4;
                pppppppuVar15 = pppppppuVar15 + 1;
              }
              pppppppuVar15 = (undefined8 *******)*pppppppuVar15;
              if (pppppppuVar15 == (undefined8 *******)0x0) break;
            } while( true );
          }
          uVar22 = FUN_004022fc();
          if ((uVar22 & 1) != 0) goto LAB_00bdde58;
          local_80 = "../../media/base/codec_list.cc";
          uStack_78 = 0x292;
          local_70 = &local_d0;
          local_110 = &local_80;
          local_118 = "Surprising condition: RTX codec APT not found: ";
          FUN_00b671bc(&local_f0,lVar17);
          if ((long)local_e0 < 0) {
            FUN_005478d8(local_c0,local_f0,uStack_e8);
            local_a8 = &local_118;
            if ((long)local_e0 < 0) {
              operator_delete(local_f0);
            }
          }
          else {
            local_a8 = &local_118;
            local_c0._8_8_ = uStack_e8;
            local_c0._0_8_ = local_f0;
            local_b0 = local_e0;
          }
          if (local_90 == (undefined8 *******)0x0) goto LAB_00bdde0c;
          uVar14 = 1;
          pppppppuVar15 = local_90;
          goto LAB_00bdddf4;
        }
      }
    }
LAB_00bdd8a4:
  }
  FUN_005ecd48(&local_150);
  goto LAB_00bddf08;
LAB_00bdddf4:
  do {
    if (*(int *)((long)pppppppuVar15 + 0x1c) <= iVar12) {
      if (*(int *)((long)pppppppuVar15 + 0x1c) == iVar12) goto LAB_00bdde10;
      pppppppuVar15 = pppppppuVar15 + 1;
    }
    pppppppuVar15 = (undefined8 *******)*pppppppuVar15;
  } while (pppppppuVar15 != (undefined8 *******)0x0);
LAB_00bdde0c:
  uVar14 = 0;
LAB_00bdde10:
  FUN_00623bb0(&DAT_00258010,*(undefined8 *)local_a8[1],*(undefined4 *)(local_a8[1] + 8),*local_a8,
               local_c0," points to a PT that occurs ",uVar14," times");
LAB_00bdde58:
  uVar22 = FUN_004249b0();
  if ((uVar22 & 1) == 0) {
    local_c0 = FUN_005eceec(3);
    FUN_00623bb0(&DAT_00255ab0,"../../media/base/codec_list.cc",0x2c3,
                 "PT pointed to by rtx apt parameter does not exist",&DAT_001a2df6,local_c0,
                 &DAT_001ca519);
  }
  local_150 = (undefined1 *)CONCAT44(local_150._4_4_,3);
  pcStack_148 = (char *)operator_new(0x38);
  uVar8 = s_PT_pointed_to_by_rtx_apt_paramet_001a5326._40_8_;
  uVar7 = s_PT_pointed_to_by_rtx_apt_paramet_001a5326._32_8_;
  uVar6 = s_PT_pointed_to_by_rtx_apt_paramet_001a5326._24_8_;
  uVar5 = s_PT_pointed_to_by_rtx_apt_paramet_001a5326._16_8_;
  uVar25 = s_PT_pointed_to_by_rtx_apt_paramet_001a5326._8_8_;
  uVar14 = s_PT_pointed_to_by_rtx_apt_paramet_001a5326._0_8_;
  puStack_138 = _UNK_001f45c8;
  local_140 = _DAT_001f45c0;
  if (pcStack_148 + 0x31 < pcStack_148) {
LAB_00bde170:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
              );
  }
  if ((pcStack_148 < "T pointed to by rtx apt parameter does not exist") &&
     ("PT pointed to by rtx apt parameter does not exist" < pcStack_148 + 0x31)) {
LAB_00bde184:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
              );
  }
  pcStack_148[0x30] = 't';
  pcStack_148[0x31] = '\0';
  *(undefined8 *)(pcStack_148 + 8) = uVar25;
  *(undefined8 *)pcStack_148 = uVar14;
  *(undefined8 *)(pcStack_148 + 0x18) = uVar6;
  *(undefined8 *)(pcStack_148 + 0x10) = uVar5;
  *(undefined8 *)(pcStack_148 + 0x28) = uVar8;
  *(undefined8 *)(pcStack_148 + 0x20) = uVar7;
LAB_00bddefc:
  puVar9 = local_130;
  uVar3 = (uint6)local_130;
  local_130._7_1_ = SUB81(puVar9,7);
  local_130._0_7_ = (uint7)(uVar3 & 0xff0000000000);
LAB_00bddf08:
  local_c0._0_8_ = &local_98;
  FUN_005fa2f8(local_c0,local_90);
  if ((int)local_150 == 0) {
    local_b0 = (char **)0x0;
    local_c0._8_8_ = 0;
    local_c0._0_8_ = (undefined8 *******)0x0;
    if ((long *)local_c0 != param_2) {
      FUN_0088fd38(local_c0,*param_2,param_2[1],(param_2[1] - *param_2 >> 3) * -0x7b425ed097b425ed);
    }
    *(char ***)(param_1 + 0xe) = local_b0;
    *param_1 = 0;
    *(undefined1 *)((long)param_1 + 0x26) = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined8 *)((long)param_1 + 0x1d) = 0;
    *(undefined8 *)(param_1 + 0xc) = local_c0._8_8_;
    *(undefined8 *)(param_1 + 10) = local_c0._0_8_;
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  else {
    *param_1 = (int)local_150;
    if ((long)puStack_138 < 0) {
      FUN_005478d8(param_1 + 2,pcStack_148,local_140);
    }
    else {
      puVar16 = (undefined8 *)((ulong)&local_150 | 8);
      uVar25 = *puVar16;
      uVar14 = puVar16[2];
      *(undefined8 *)(param_1 + 4) = puVar16[1];
      *(undefined8 *)(param_1 + 2) = uVar25;
      *(undefined8 *)(param_1 + 6) = uVar14;
    }
    iVar12 = (int)local_130;
    *(undefined1 *)(param_1 + 10) = 0;
    *(undefined1 *)(param_1 + 0x10) = 0;
    param_1[8] = iVar12;
    *(undefined4 *)((long)param_1 + 0x23) = local_130._3_4_;
  }
  if ((long)puStack_138 < 0) {
    operator_delete(pcStack_148);
  }
  return;
}


// ===== 00bde1ac  FUN_00bde1ac =====

undefined8 FUN_00bde1ac(ulong *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_1;
  uVar1 = param_1[1];
  if (uVar2 != uVar1) {
    do {
      if (*(int *)(uVar2 + 0xc) == *(int *)(param_2 + 0xc)) {
        return 0;
      }
      uVar2 = uVar2 + 0xd8;
    } while (uVar2 != uVar1);
  }
  if (uVar1 < param_1[2]) {
    if (uVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    FUN_00890830(uVar1);
    uVar1 = uVar1 + 0xd8;
  }
  else {
    uVar1 = FUN_00b14350(param_1);
  }
  param_1[1] = uVar1;
  return 1;
}


// ===== 00bde244  FUN_00bde244 =====

void FUN_00bde244(void)

{
  return;
}


// ===== 00bde24c  FUN_00bde24c =====

undefined4 FUN_00bde24c(uint param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (((param_1 & 1) != 0) && ((param_2 & 1) != 0)) {
    return 0;
  }
  if (((param_2 & 1) == 0) && (((param_1 ^ 1) & 1) == 0)) {
    return 1;
  }
  uVar1 = 2;
  if ((param_2 & (param_1 ^ 1) & 1) == 0) {
    uVar1 = 3;
  }
  return uVar1;
}


// ===== 00bde288  FUN_00bde288 =====

bool FUN_00bde288(uint param_1)

{
  return param_1 < 2;
}


// ===== 00bde298  FUN_00bde298 =====

bool FUN_00bde298(ulong param_1)

{
  return (param_1 & 0xfffffffd) == 0;
}


// ===== 00bde2a8  FUN_00bde2a8 =====

undefined8 FUN_00bde2a8(undefined8 param_1)

{
  if ((int)param_1 != 1) {
    if ((int)param_1 == 2) {
      param_1 = 1;
    }
    return param_1;
  }
  return 2;
}


// ===== 00bde2cc  FUN_00bde2cc =====

undefined4 FUN_00bde2cc(uint param_1,byte param_2)

{
  undefined4 uVar1;
  
  if ((param_1 < 2) && ((param_2 & 1) != 0)) {
    return 0;
  }
  if (((param_2 & 1) == 0) && (1 >= param_1)) {
    return 1;
  }
  uVar1 = 2;
  if ((param_2 & 1 < param_1) == 0) {
    uVar1 = 3;
  }
  return uVar1;
}


// ===== 00bde30c  FUN_00bde30c =====

undefined * FUN_00bde30c(uint param_1)

{
  if (param_1 < 5) {
    return &DAT_00258048 + *(int *)(&DAT_00258048 + (ulong)param_1 * 4);
  }
  return &DAT_001b3348;
}


// ===== 00bde338  FUN_00bde338 =====

undefined4 FUN_00bde338(uint param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  undefined4 uVar3;
  
  uVar1 = param_2 | param_1;
  if ((param_1 & 0xfffffffd) == 0) {
    bVar2 = (param_2 & 0xfffffffd) == 0;
    if ((uVar1 < 2) && ((param_2 & 0xfffffffd) == 0)) {
      return 0;
    }
  }
  else {
    bVar2 = false;
  }
  if ((!bVar2) && (1 >= uVar1)) {
    return 1;
  }
  uVar3 = 2;
  if (!(bool)(bVar2 & 1 < uVar1)) {
    uVar3 = 3;
  }
  return uVar3;
}


// ===== 00bde390  FUN_00bde390 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00bde390(undefined8 *param_1,long *param_2,int param_3,ulong param_4,uint param_5,
                 long *param_6)

{
  int *******pppppppiVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  char *pcVar7;
  undefined *__s;
  undefined *__s_00;
  undefined8 *puVar8;
  undefined *__s_01;
  bool bVar9;
  int iVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *puVar13;
  size_t sVar14;
  undefined1 *puVar15;
  undefined8 *******pppppppuVar16;
  long lVar17;
  void *pvVar18;
  undefined8 *******pppppppuVar19;
  undefined8 *******pppppppuVar20;
  undefined8 *local_2d0;
  undefined8 *local_2c8;
  undefined8 *local_2c0;
  void *local_2b8;
  void *local_2b0;
  void *local_2a0 [2];
  char cStack_289;
  undefined8 *******local_260;
  undefined8 *******local_258;
  undefined8 local_250;
  undefined8 *******local_248;
  undefined8 *******local_240;
  undefined8 local_238;
  undefined1 *local_230;
  undefined1 *puStack_228;
  undefined1 *local_220;
  undefined1 *puStack_218;
  undefined1 *puStack_210;
  undefined1 *local_208;
  undefined1 *local_200;
  undefined1 *puStack_1f8;
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
  undefined1 *puStack_190;
  undefined1 *puStack_188;
  undefined1 *local_180;
  undefined1 *puStack_178;
  undefined1 *puStack_170;
  undefined1 *puStack_168;
  undefined1 *local_160;
  int *******local_150;
  undefined1 *puStack_148;
  undefined8 *******local_140;
  undefined1 *puStack_138;
  undefined8 uStack_130;
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
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  plVar11 = (long *)(**(code **)(*param_2 + 0x30))(param_2);
  plVar12 = (long *)(**(code **)(*param_2 + 0x38))(param_2);
  (**(code **)(*param_6 + 0x10))(&local_150,param_6,"WebRTC-PayloadTypesInTransport",0x1e);
  puVar15 = puStack_148;
  if (-1 < (long)local_140) {
    puVar15 = (undefined1 *)((ulong)local_140 >> 0x38);
  }
  if (puVar15 < (undefined1 *)0x7) {
    bVar9 = false;
    if (-1 < (long)local_140) goto LAB_00bde480;
LAB_00bde530:
    operator_delete(local_150);
    if (bVar9) goto LAB_00bde484;
LAB_00bde544:
    if (param_3 == 0) {
      lVar17 = 0x40;
      if ((param_4 & 1) == 0) {
        lVar17 = 0x48;
      }
      plVar11 = (long *)(**(code **)(*plVar11 + lVar17))(plVar11);
      local_2c8 = (undefined8 *)0x0;
      local_2c0 = (undefined8 *)0x0;
      local_2d0 = (undefined8 *)0x0;
      lVar17 = *plVar11;
      lVar2 = plVar11[1];
      uVar4 = lVar2 - lVar17;
      puVar13 = local_2c8;
      if (uVar4 != 0) {
        if (0x12f684bda12f684 < (ulong)(((long)uVar4 >> 3) * -0x7b425ed097b425ed)) {
                    /* WARNING: Subroutine does not return */
          FUN_0088fd20();
        }
        puVar13 = (undefined8 *)operator_new(uVar4);
        local_2c0 = (undefined8 *)((long)puVar13 + uVar4);
        local_2d0 = puVar13;
        local_2c8 = puVar13;
        do {
          if (puVar13 == (undefined8 *)0x0) {
LAB_00bdebd8:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          FUN_00890830(puVar13,lVar17);
          lVar17 = lVar17 + 0xd8;
          puVar13 = puVar13 + 0x1b;
        } while (lVar17 != lVar2);
      }
      goto LAB_00bde570;
    }
  }
  else {
    pppppppiVar1 = local_150;
    if (-1 < (long)local_140) {
      pppppppiVar1 = (int *******)&local_150;
    }
    bVar9 = *(int *)pppppppiVar1 == 0x62616e45 && *(int *)((long)pppppppiVar1 + 3) == 0x64656c62;
    if ((long)local_140 < 0) goto LAB_00bde530;
LAB_00bde480:
    if (!bVar9) goto LAB_00bde544;
LAB_00bde484:
    if (param_3 == 0) {
      lVar17 = 0x50;
      if ((param_4 & 1) == 0) {
        lVar17 = 0x58;
      }
      plVar11 = (long *)(**(code **)(*plVar11 + lVar17))(plVar11);
      (**(code **)(*plVar11 + 0x20))(&local_2b8);
      local_2d0 = (undefined8 *)0x0;
      local_2c8 = (undefined8 *)0x0;
      local_2c0 = (undefined8 *)0x0;
      local_240 = (undefined8 *******)0x0;
      local_238 = 0;
      local_248 = &local_240;
      FUN_00b61014(&local_248,&DAT_0025805c,&DAT_00258064);
      local_258 = (undefined8 *******)0x0;
      local_250 = 0;
      local_260 = &local_258;
      FUN_00b61014(&local_260,&DAT_00258064,&DAT_00258074);
      pvVar3 = local_2b0;
      __s_00 = PTR_s_transport_cc_00d52260;
      __s = PTR_DAT_00d521c8;
      puVar6 = PTR_DAT_00d521f0;
      pcVar7 = PTR_s_telephone_event_00d521f8;
      pppppppuVar16 = local_248;
      __s_01 = PTR_DAT_00d521f0;
      if (local_2b8 != local_2b0) {
        pvVar18 = local_2b8;
        do {
          puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
          local_140 = (undefined8 *******)&DAT_aaaaaaaaaaaaaaaa;
          puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
          uStack_130 = &DAT_aaaaaaaaaaaaaaaa;
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
          puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
          local_150 = (int *******)&DAT_aaaaaaaaaaaaaaaa;
          local_80 = &DAT_aaaaaaaaaaaaaaaa;
          FUN_008933f8(&local_150,pvVar18);
          if (*(char *)((long)pvVar18 + 0x5d) == '\x01') {
            sVar14 = strlen(__s_00);
            FUN_005d3510(local_2a0,PTR_DAT_00d52230);
            FUN_008929a0(&local_230,__s_00,sVar14,local_2a0);
            FUN_008918f8(&local_150,&local_230);
            if ((long)local_208 < 0) {
              operator_delete(puStack_218);
            }
            if ((long)local_220 < 0) {
              operator_delete(local_230);
            }
            if (cStack_289 < '\0') {
              operator_delete(local_2a0[0]);
            }
          }
          puVar13 = local_2c8;
          if ((*(char *)((long)pvVar18 + 0x5c) == '\x01') && (local_240 != (undefined8 *******)0x0))
          {
            pppppppuVar16 = local_240;
            do {
              while (*(int *)((long)pvVar18 + 0x18) <= *(int *)((long)pppppppuVar16 + 0x1c)) {
                if (*(int *)((long)pppppppuVar16 + 0x1c) == *(int *)((long)pvVar18 + 0x18)) {
                  if ((undefined8 ********)pppppppuVar16 != &local_240) {
                    *(undefined1 *)(pppppppuVar16 + 4) = 1;
                  }
                  goto LAB_00bde830;
                }
                pppppppuVar16 = (undefined8 *******)pppppppuVar16[1];
                if (pppppppuVar16 == (undefined8 *******)0x0) goto LAB_00bde830;
              }
              pppppppuVar16 = (undefined8 *******)*pppppppuVar16;
            } while (pppppppuVar16 != (undefined8 *******)0x0);
          }
LAB_00bde830:
          if (local_258 != (undefined8 *******)0x0) {
            pppppppuVar16 = local_258;
            do {
              while (*(int *)((long)pvVar18 + 0x18) <= *(int *)((long)pppppppuVar16 + 0x1c)) {
                if (*(int *)((long)pppppppuVar16 + 0x1c) == *(int *)((long)pvVar18 + 0x18)) {
                  if ((undefined8 ********)pppppppuVar16 != &local_258) {
                    *(undefined1 *)(pppppppuVar16 + 4) = 1;
                  }
                  goto LAB_00bde874;
                }
                pppppppuVar16 = (undefined8 *******)pppppppuVar16[1];
                if (pppppppuVar16 == (undefined8 *******)0x0) goto LAB_00bde874;
              }
              pppppppuVar16 = (undefined8 *******)*pppppppuVar16;
            } while (pppppppuVar16 != (undefined8 *******)0x0);
          }
LAB_00bde874:
          if (local_2c8 < local_2c0) {
            if (local_2c8 == (undefined8 *)0x0) goto LAB_00bdebd8;
            FUN_00890830(local_2c8,&local_150);
            local_2c8 = puVar13 + 0x1b;
          }
          else {
            local_2c8 = (undefined8 *)FUN_00b14350(&local_2d0,&local_150);
          }
          puVar15 = (undefined1 *)strlen(__s);
          if ((long)uStack_130._7_1_ < 0) {
            if (puVar15 == puStack_138) {
              pppppppuVar16 = local_140;
              if (puVar15 == (undefined1 *)0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                FUN_005f5590();
              }
              goto LAB_00bde8d4;
            }
          }
          else {
            pppppppuVar16 = &local_140;
            if (puVar15 == (undefined1 *)(long)uStack_130._7_1_) {
LAB_00bde8d4:
              iVar10 = memcmp(pppppppuVar16,__s,(size_t)puVar15);
              puVar6 = PTR_DAT_00d51fd8;
              if (iVar10 == 0) {
                puStack_218 = &DAT_aaaaaaaaaaaaaaaa;
                local_220 = &DAT_aaaaaaaaaaaaaaaa;
                local_208 = &DAT_aaaaaaaaaaaaaaaa;
                puStack_210 = &DAT_aaaaaaaaaaaaaaaa;
                puStack_1f8 = &DAT_aaaaaaaaaaaaaaaa;
                local_200 = &DAT_aaaaaaaaaaaaaaaa;
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
                puStack_190 = &DAT_aaaaaaaaaaaaaaaa;
                puStack_178 = &DAT_aaaaaaaaaaaaaaaa;
                local_180 = &DAT_aaaaaaaaaaaaaaaa;
                puStack_168 = &DAT_aaaaaaaaaaaaaaaa;
                puStack_170 = &DAT_aaaaaaaaaaaaaaaa;
                puStack_228 = &DAT_aaaaaaaaaaaaaaaa;
                local_230 = &DAT_aaaaaaaaaaaaaaaa;
                local_160 = &DAT_aaaaaaaaaaaaaaaa;
                sVar14 = strlen(PTR_DAT_00d51fd8);
                FUN_00667494(local_2a0,puVar6,sVar14,48000,2);
                FUN_008933f8(&local_230,local_2a0);
                FUN_006678ac(local_2a0);
                puVar13 = local_2c8;
                if (local_2c8 < local_2c0) {
                  if (local_2c8 == (undefined8 *)0x0) goto LAB_00bdebd8;
                  FUN_00890830(local_2c8,&local_230);
                  local_2c8 = puVar13 + 0x1b;
                }
                else {
                  local_2c8 = (undefined8 *)FUN_00b14350(&local_2d0,&local_230);
                }
                FUN_00890cb8(&local_230);
              }
            }
          }
          FUN_00890cb8(&local_150);
          pvVar18 = (void *)((long)pvVar18 + 0x60);
          puVar6 = PTR_DAT_00d521f0;
          pcVar7 = PTR_s_telephone_event_00d521f8;
          pppppppuVar16 = local_248;
          __s_01 = PTR_DAT_00d521f0;
        } while (pvVar18 != pvVar3);
      }
      while (PTR_DAT_00d521f0 = __s_01, __s_01 = PTR_DAT_00d521f0, PTR_DAT_00d521f0 = puVar6,
            PTR_s_telephone_event_00d521f8 = pcVar7, pppppppuVar20 = local_260,
            (undefined8 ********)pppppppuVar16 != &local_240) {
        if (*(char *)(pppppppuVar16 + 4) == '\x01') {
          puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
          local_140 = (undefined8 *******)&DAT_aaaaaaaaaaaaaaaa;
          puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
          uStack_130 = &DAT_aaaaaaaaaaaaaaaa;
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
          puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
          local_150 = (int *******)&DAT_aaaaaaaaaaaaaaaa;
          local_80 = &DAT_aaaaaaaaaaaaaaaa;
          sVar14 = strlen(__s_01);
          FUN_00667494(&local_230,__s_01,sVar14,*(undefined4 *)((long)pppppppuVar16 + 0x1c),1);
          FUN_008933f8(&local_150,&local_230);
          FUN_006678ac(&local_230);
          puVar13 = local_2c8;
          if (local_2c8 < local_2c0) {
            if (local_2c8 == (undefined8 *)0x0) goto LAB_00bdebd8;
            FUN_00890830(local_2c8,&local_150);
            local_2c8 = puVar13 + 0x1b;
          }
          else {
            local_2c8 = (undefined8 *)FUN_00b14350(&local_2d0,&local_150);
          }
          FUN_00890cb8(&local_150);
        }
        pppppppuVar20 = (undefined8 *******)pppppppuVar16[1];
        pppppppuVar19 = pppppppuVar16;
        puVar6 = PTR_DAT_00d521f0;
        pcVar7 = PTR_s_telephone_event_00d521f8;
        if ((undefined8 *******)pppppppuVar16[1] == (undefined8 *******)0x0) {
          do {
            pppppppuVar16 = (undefined8 *******)pppppppuVar19[2];
            bVar9 = pppppppuVar19 != (undefined8 *******)*pppppppuVar16;
            pppppppuVar19 = pppppppuVar16;
          } while (bVar9);
        }
        else {
          do {
            pppppppuVar16 = pppppppuVar20;
            pppppppuVar20 = (undefined8 *******)*pppppppuVar16;
          } while ((undefined8 *******)*pppppppuVar16 != (undefined8 *******)0x0);
        }
      }
      while ((undefined8 ********)pppppppuVar20 != &local_258) {
        if (*(char *)(pppppppuVar20 + 4) == '\x01') {
          puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
          local_140 = (undefined8 *******)&DAT_aaaaaaaaaaaaaaaa;
          puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
          uStack_130 = &DAT_aaaaaaaaaaaaaaaa;
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
          puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
          local_150 = (int *******)&DAT_aaaaaaaaaaaaaaaa;
          local_80 = &DAT_aaaaaaaaaaaaaaaa;
          sVar14 = strlen(pcVar7);
          FUN_00667494(&local_230,pcVar7,sVar14,*(undefined4 *)((long)pppppppuVar20 + 0x1c),1);
          FUN_008933f8(&local_150,&local_230);
          FUN_006678ac(&local_230);
          puVar13 = local_2c8;
          if (local_2c8 < local_2c0) {
            if (local_2c8 == (undefined8 *)0x0) goto LAB_00bdebd8;
            FUN_00890830(local_2c8,&local_150);
            local_2c8 = puVar13 + 0x1b;
          }
          else {
            local_2c8 = (undefined8 *)FUN_00b14350(&local_2d0,&local_150);
          }
          FUN_00890cb8(&local_150);
        }
        pppppppuVar16 = (undefined8 *******)pppppppuVar20[1];
        pppppppuVar19 = pppppppuVar20;
        if ((undefined8 *******)pppppppuVar20[1] == (undefined8 *******)0x0) {
          do {
            pppppppuVar20 = (undefined8 *******)pppppppuVar19[2];
            bVar9 = pppppppuVar19 != (undefined8 *******)*pppppppuVar20;
            pppppppuVar19 = pppppppuVar20;
          } while (bVar9);
        }
        else {
          do {
            pppppppuVar20 = pppppppuVar16;
            pppppppuVar16 = (undefined8 *******)*pppppppuVar20;
          } while ((undefined8 *******)*pppppppuVar20 != (undefined8 *******)0x0);
        }
      }
      local_150 = (int *******)&local_260;
      FUN_00b61248(&local_150,local_258);
      local_150 = (int *******)&local_248;
      FUN_00b61248(&local_150,local_240);
      pvVar18 = local_2b8;
      puVar13 = local_2c8;
      pvVar3 = local_2b0;
      if (local_2b8 != (void *)0x0) {
        while (pvVar18 != pvVar3) {
          pvVar3 = (void *)((long)pvVar3 + -0x60);
          if (pvVar3 == (void *)0x0) goto LAB_00bdebc4;
          FUN_006678ac(pvVar3);
        }
        local_2b0 = pvVar18;
        operator_delete(local_2b8);
        puVar13 = local_2c8;
      }
      goto LAB_00bde570;
    }
  }
  lVar17 = 0x38;
  if ((param_4 & 1) == 0) {
    lVar17 = 0x40;
  }
  (**(code **)(*plVar12 + lVar17))(&local_2d0,plVar12,param_5 & 1);
  puVar13 = local_2c8;
LAB_00bde570:
  local_2c8 = puVar13;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if ((undefined8 **)param_1 != &local_2d0) {
    FUN_0088fd38(param_1,local_2d0,local_2c8,
                 ((long)local_2c8 - (long)local_2d0 >> 3) * -0x7b425ed097b425ed);
  }
  FUN_00bde244(param_1);
  puVar8 = local_2d0;
  puVar13 = local_2c8;
  if (local_2d0 != (undefined8 *)0x0) {
    while (puVar8 != puVar13) {
      puVar13 = puVar13 + -0x1b;
      if (puVar13 == (undefined8 *)0x0) {
LAB_00bdebc4:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      (**(code **)*puVar13)(puVar13);
    }
    local_2c8 = puVar8;
    operator_delete(local_2d0);
  }
  if (*(long *)(lVar5 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00bdebf8  FUN_00bdebf8 =====

void FUN_00bdebf8(undefined1 *param_1,undefined8 *param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  size_t sVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *__s1;
  undefined8 uVar7;
  undefined8 uVar8;
  char *pcVar9;
  size_t sVar10;
  undefined1 auStack_3c [12];
  
  sVar4 = strlen(PTR_DAT_00d52268);
  cVar2 = *(char *)((long)param_2 + 0x17);
  sVar10 = (size_t)cVar2;
  if (-1 < (long)sVar10) {
    puVar5 = param_2;
    if (sVar4 != sVar10) goto LAB_00bdec68;
LAB_00bdec58:
    iVar3 = memcmp(puVar5,&DAT_001ff285,sVar4);
    if (iVar3 != 0) goto LAB_00bdec68;
    puVar5 = param_2 + 3;
    sVar4 = strlen(PTR_DAT_00d52270);
    if ((long)*(char *)((long)param_2 + 0x2f) < 0) {
      if (sVar4 != param_2[4]) goto LAB_00bdef14;
      if (sVar4 == 0xffffffffffffffff) goto LAB_00bdf03c;
      __s1 = (undefined8 *)*puVar5;
LAB_00bdef04:
      iVar3 = memcmp(__s1,&DAT_001ff289,sVar4);
      if (iVar3 != 0) goto LAB_00bdef14;
      uVar7 = 1;
      uVar8 = 2;
LAB_00bdf004:
      FUN_006684a8(auStack_3c,uVar7,uVar8);
      FUN_006684bc(param_1,auStack_3c);
      param_1[0xc] = 1;
      goto LAB_00bdf01c;
    }
    __s1 = puVar5;
    if (sVar4 == (long)*(char *)((long)param_2 + 0x2f)) goto LAB_00bdef04;
LAB_00bdef14:
    uVar6 = FUN_004022fc();
    if ((uVar6 & 1) != 0) goto LAB_00bdef40;
    pcVar9 = "Unsupported parameter for CCM RTCP feedback: ";
    uVar7 = 0x102;
    param_2 = puVar5;
LAB_00bdef3c:
    FUN_00623bb0(&DAT_001f4e90,"../../pc/rtp_parameters_conversion.cc",uVar7,pcVar9,param_2);
LAB_00bdef40:
    *param_1 = 0;
    param_1[0xc] = 0;
    return;
  }
  if (sVar4 == param_2[1]) {
    if (sVar4 == 0xffffffffffffffff) goto LAB_00bdf03c;
    puVar5 = (undefined8 *)*param_2;
    goto LAB_00bdec58;
  }
LAB_00bdec68:
  sVar4 = strlen("goog-lntf");
  if (cVar2 < '\0') {
    if (sVar4 == param_2[1]) {
      if (sVar4 == 0xffffffffffffffff) goto LAB_00bdf03c;
      puVar5 = (undefined8 *)*param_2;
      goto LAB_00bdeca4;
    }
LAB_00bdecb4:
    sVar4 = strlen("nack");
    if (cVar2 < '\0') {
      if (sVar4 == param_2[1]) {
        if (sVar4 == 0xffffffffffffffff) goto LAB_00bdf03c;
        puVar5 = (undefined8 *)*param_2;
        goto LAB_00bdecf0;
      }
LAB_00bded00:
      sVar4 = strlen("goog-remb");
      if (cVar2 < '\0') {
        if (sVar4 == param_2[1]) {
          if (sVar4 == 0xffffffffffffffff) goto LAB_00bdf03c;
          puVar5 = (undefined8 *)*param_2;
          goto LAB_00bded3c;
        }
      }
      else {
        puVar5 = param_2;
        if (sVar4 == sVar10) {
LAB_00bded3c:
          iVar3 = memcmp(puVar5,"goog-remb",sVar4);
          if (iVar3 == 0) {
            uVar6 = param_2[4];
            if ((*(byte *)((long)param_2 + 0x2f) & 0x80) == 0) {
              uVar6 = (ulong)*(byte *)((long)param_2 + 0x2f);
            }
            if (uVar6 != 0) {
              uVar6 = FUN_004022fc();
              if ((uVar6 & 1) != 0) goto LAB_00bdef40;
              pcVar9 = "Unsupported parameter for REMB RTCP feedback: ";
              uVar7 = 0x1ca;
              param_2 = param_2 + 3;
              goto LAB_00bdef3c;
            }
            uVar7 = 4;
            goto LAB_00bdef90;
          }
        }
      }
      sVar4 = strlen("transport-cc");
      if (cVar2 < '\0') {
        if (sVar4 == param_2[1]) {
          if (sVar4 == 0xffffffffffffffff) {
LAB_00bdf03c:
                    /* WARNING: Subroutine does not return */
            FUN_005f5590();
          }
          puVar5 = (undefined8 *)*param_2;
          goto LAB_00bdedb4;
        }
      }
      else {
        puVar5 = param_2;
        if (sVar4 == sVar10) {
LAB_00bdedb4:
          iVar3 = memcmp(puVar5,"transport-cc",sVar4);
          if (iVar3 == 0) {
            uVar6 = param_2[4];
            if ((*(byte *)((long)param_2 + 0x2f) & 0x80) == 0) {
              uVar6 = (ulong)*(byte *)((long)param_2 + 0x2f);
            }
            if (uVar6 != 0) {
              uVar6 = FUN_004022fc();
              if ((uVar6 & 1) != 0) goto LAB_00bdef40;
              pcVar9 = "Unsupported parameter for transport-cc RTCP feedback: ";
              uVar7 = 0x20a;
              param_2 = param_2 + 3;
              goto LAB_00bdef3c;
            }
            uVar7 = 5;
            goto LAB_00bdef90;
          }
        }
      }
      uVar6 = FUN_004022fc();
      if ((uVar6 & 1) != 0) goto LAB_00bdef40;
      pcVar9 = "Unsupported RTCP feedback type: ";
      uVar7 = 0x24a;
      goto LAB_00bdef3c;
    }
    puVar5 = param_2;
    if (sVar4 != sVar10) goto LAB_00bded00;
LAB_00bdecf0:
    iVar3 = memcmp(puVar5,&DAT_001ff265,sVar4);
    if (iVar3 != 0) goto LAB_00bded00;
    bVar1 = *(byte *)((long)param_2 + 0x2f);
    sVar10 = param_2[4];
    sVar4 = sVar10;
    if ((bVar1 & 0x80) == 0) {
      sVar4 = (ulong)bVar1;
    }
    if (sVar4 != 0) {
      param_2 = param_2 + 3;
      sVar4 = strlen(PTR_DAT_00d52250);
      if ((char)bVar1 < '\0') {
        if (sVar4 == sVar10) {
          if (sVar10 == 0xffffffffffffffff) goto LAB_00bdf03c;
          puVar5 = (undefined8 *)*param_2;
          goto LAB_00bdefc0;
        }
      }
      else {
        puVar5 = param_2;
        if (sVar4 == bVar1) {
LAB_00bdefc0:
          iVar3 = memcmp(puVar5,&DAT_001ff26a,sVar4);
          if (iVar3 == 0) {
            uVar7 = 3;
            uVar8 = 1;
            goto LAB_00bdf004;
          }
        }
      }
      uVar6 = FUN_004022fc();
      if ((uVar6 & 1) != 0) goto LAB_00bdef40;
      pcVar9 = "Unsupported parameter for NACK RTCP feedback: ";
      uVar7 = 0x19a;
      goto LAB_00bdef3c;
    }
    FUN_006684a8(auStack_3c,3,0);
  }
  else {
    puVar5 = param_2;
    if (sVar4 != sVar10) goto LAB_00bdecb4;
LAB_00bdeca4:
    iVar3 = memcmp(puVar5,"goog-lntf",sVar4);
    if (iVar3 != 0) goto LAB_00bdecb4;
    uVar6 = param_2[4];
    if ((*(byte *)((long)param_2 + 0x2f) & 0x80) == 0) {
      uVar6 = (ulong)*(byte *)((long)param_2 + 0x2f);
    }
    if (uVar6 != 0) {
      uVar6 = FUN_004022fc();
      if ((uVar6 & 1) != 0) goto LAB_00bdef40;
      pcVar9 = "Unsupported parameter for LNTF RTCP feedback: ";
      uVar7 = 0x142;
      param_2 = param_2 + 3;
      goto LAB_00bdef3c;
    }
    uVar7 = 2;
LAB_00bdef90:
    FUN_00668494(auStack_3c,uVar7);
  }
  FUN_006684bc(param_1,auStack_3c);
  param_1[0xc] = 1;
LAB_00bdf01c:
  FUN_006684d4(auStack_3c);
  return;
}


// ===== 00bdf040  FUN_00bdf040 =====

void FUN_00bdf040(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  undefined4 uVar7;
  byte bVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined1 *local_50;
  undefined8 uStack_48;
  
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  *param_1 = &DAT_aaaaaaaaaaaaaaaa;
  param_1[3] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[5] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[4] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[7] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[6] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[9] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[8] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xb] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[10] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xd] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xc] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xf] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xe] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0x11] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0x10] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0x13] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0x12] = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00668960(param_1);
  puVar1 = (undefined8 *)(param_2 + 0x10);
  if (param_1 + 1 != puVar1) {
    bVar8 = *(byte *)(param_2 + 0x27);
    if (*(char *)((long)param_1 + 0x1f) < '\0') {
      uVar5 = *(ulong *)(param_2 + 0x18);
      puVar9 = *(undefined8 **)(param_2 + 0x10);
      if (-1 < (char)bVar8) {
        uVar5 = (ulong)bVar8;
        puVar9 = puVar1;
      }
      FUN_00547f08(param_1 + 1,puVar9,uVar5);
    }
    else if ((char)bVar8 < '\0') {
      FUN_00547fc0(param_1 + 1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
    }
    else {
      uVar13 = *puVar1;
      uVar11 = *(undefined8 *)(param_2 + 0x20);
      param_1[2] = *(undefined8 *)(param_2 + 0x18);
      param_1[1] = uVar13;
      param_1[3] = uVar11;
    }
  }
  iVar3 = *(int *)(param_2 + 8);
  uVar4 = *(undefined4 *)(param_2 + 0xc);
  lVar12 = *(long *)(param_2 + 0xc0);
  lVar6 = *(long *)(param_2 + 200);
  uVar7 = *(undefined4 *)(param_2 + 0x28);
  *(undefined1 *)(param_1 + 5) = 1;
  *(undefined4 *)(param_1 + 0xd) = uVar4;
  *(undefined1 *)((long)param_1 + 0x6c) = 1;
  *(uint *)(param_1 + 4) = (uint)(iVar3 != 0);
  *(undefined4 *)((long)param_1 + 0x24) = uVar7;
  if (lVar12 != lVar6) {
    do {
      uStack_48 = &DAT_aaaaaaaaaaaaaaaa;
      local_50 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_00bdebf8(&local_50,lVar12);
      if (uStack_48._4_1_ == '\x01') {
        uVar5 = param_1[8];
        if (uVar5 < (ulong)param_1[9]) {
          if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          FUN_006684bc(uVar5,&local_50);
          lVar10 = uVar5 + 0xc;
        }
        else {
          lVar10 = FUN_00bdf720(param_1 + 7,&local_50);
        }
        param_1[8] = lVar10;
        if (uStack_48._4_1_ == '\x01') {
          FUN_006684d4(&local_50);
        }
      }
      lVar12 = lVar12 + 0x30;
    } while (lVar12 != lVar6);
    iVar3 = *(int *)(param_2 + 8);
  }
  if (iVar3 == 0) {
    uVar11 = *(undefined8 *)(param_2 + 0x30);
    *(undefined1 *)(param_1 + 6) = 1;
    *(int *)((long)param_1 + 0x2c) = (int)uVar11;
  }
  else if ((iVar3 == 1) && (param_1 + 0xe != (undefined8 *)(param_2 + 0x58))) {
    plVar2 = (long *)(param_2 + 0x60);
    if ((*(ulong *)(param_2 + 0x58) & 1) != 0) {
      plVar2 = (long *)*(long *)(param_2 + 0x60);
    }
    FUN_007b802c(param_1 + 0xe,plVar2,*(ulong *)(param_2 + 0x58) >> 1);
  }
  FUN_0089436c(param_1 + 10,*(undefined8 *)(param_2 + 0xa8),param_2 + 0xb0);
  return;
}


// ===== 00bdf224  FUN_00bdf224 =====

void FUN_00bdf224(undefined8 *param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  undefined4 *puVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  undefined *__s;
  int iVar14;
  size_t __n;
  size_t sVar15;
  void *pvVar16;
  long *plVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  size_t sVar20;
  long lVar21;
  ulong uVar22;
  undefined8 *__s1;
  undefined1 ***local_128;
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
  undefined1 **local_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  long local_78;
  
  lVar6 = tpidr_el0;
  local_78 = *(long *)(lVar6 + 0x28);
  param_1[8] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  *param_1 = &DAT_aaaaaaaaaaaaaaaa;
  param_1[3] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[5] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[4] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[7] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[6] = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00669368(param_1);
  __s = PTR_DAT_00d52130;
  lVar21 = *param_2;
  lVar4 = param_2[1];
  if (lVar21 == lVar4) {
    bVar10 = false;
    bVar13 = false;
    bVar12 = false;
  }
  else {
    bVar13 = false;
    bVar12 = false;
    bVar10 = false;
    bVar8 = false;
    puVar1 = PTR_DAT_00d52108 + 0x10;
    do {
      __s1 = (undefined8 *)(lVar21 + 0x10);
      __n = strlen(PTR_DAT_00d51fd8);
      cVar5 = *(char *)(lVar21 + 0x27);
      sVar20 = (size_t)cVar5;
      bVar9 = bVar8;
      if ((long)sVar20 < 0) {
        if (__n == *(size_t *)(lVar21 + 0x18)) {
          if (__n == 0xffffffffffffffff) goto LAB_00bdf718;
          pvVar16 = (void *)*__s1;
          goto LAB_00bdf328;
        }
LAB_00bdf33c:
        sVar15 = strlen(PTR_s_ulpfec_00d52138);
        bVar11 = bVar10;
        if (cVar5 < '\0') {
          if (sVar15 == *(size_t *)(lVar21 + 0x18)) {
            if (sVar15 == 0xffffffffffffffff) goto LAB_00bdf718;
            pvVar16 = (void *)*__s1;
            goto LAB_00bdf378;
          }
        }
        else {
          pvVar16 = (void *)(lVar21 + 0x10);
          if (sVar15 == sVar20) {
LAB_00bdf378:
            iVar14 = memcmp(pvVar16,PTR_s_ulpfec_00d52138,sVar15);
            if (iVar14 == 0) {
              bVar12 = true;
              goto LAB_00bdf454;
            }
          }
        }
        sVar15 = strlen(PTR_s_flexfec_03_00d52140);
        if (cVar5 < '\0') {
          if (sVar15 == *(size_t *)(lVar21 + 0x18)) {
            if (sVar15 == 0xffffffffffffffff) goto LAB_00bdf718;
            pvVar16 = (void *)*__s1;
            goto LAB_00bdf3c4;
          }
        }
        else {
          pvVar16 = (void *)(lVar21 + 0x10);
          if (sVar15 == sVar20) {
LAB_00bdf3c4:
            iVar14 = memcmp(pvVar16,PTR_s_flexfec_03_00d52140,sVar15);
            if (iVar14 == 0) {
              bVar13 = true;
              goto LAB_00bdf454;
            }
          }
        }
        sVar15 = strlen(__s);
        if (cVar5 < '\0') {
          if (sVar15 == *(size_t *)(lVar21 + 0x18)) {
            if (sVar15 == 0xffffffffffffffff) goto LAB_00bdf718;
            pvVar16 = (void *)*__s1;
            goto LAB_00bdf40c;
          }
        }
        else {
          pvVar16 = (void *)(lVar21 + 0x10);
          if (sVar15 == sVar20) {
LAB_00bdf40c:
            iVar14 = memcmp(pvVar16,__s,sVar15);
            if ((iVar14 == 0) && (bVar9 = true, bVar8)) goto LAB_00bdf2cc;
          }
        }
LAB_00bdf454:
        puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
        local_a0 = &DAT_aaaaaaaaaaaaaaaa;
        local_88 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
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
        local_c8 = &DAT_aaaaaaaaaaaaaaaa;
        local_d0 = (undefined1 **)&DAT_aaaaaaaaaaaaaaaa;
        puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
        local_c0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
        local_b0 = &DAT_aaaaaaaaaaaaaaaa;
        FUN_00bdf040(&local_120,lVar21);
        sVar20 = strlen(__s);
        cVar5 = *(char *)(lVar21 + 0x27);
        sVar15 = (size_t)cVar5;
        if ((long)sVar15 < 0) {
          if (sVar20 == *(size_t *)(lVar21 + 0x18)) {
            if (sVar20 == 0xffffffffffffffff) goto LAB_00bdf718;
            pvVar16 = (void *)*__s1;
            goto LAB_00bdf4b4;
          }
LAB_00bdf4c0:
          if (cVar5 < '\0') {
            if (__n == *(size_t *)(lVar21 + 0x18)) {
              if (__n == 0xffffffffffffffff) {
LAB_00bdf718:
                    /* WARNING: Subroutine does not return */
                FUN_005f5590();
              }
              __s1 = (undefined8 *)*__s1;
              goto LAB_00bdf4e8;
            }
          }
          else if (__n == sVar15) {
LAB_00bdf4e8:
            iVar14 = memcmp(__s1,PTR_DAT_00d51fd8,__n);
            if (iVar14 == 0) goto LAB_00bdf500;
          }
        }
        else {
          pvVar16 = (void *)(lVar21 + 0x10);
          if (sVar20 != sVar15) goto LAB_00bdf4c0;
LAB_00bdf4b4:
          iVar14 = memcmp(pvVar16,__s,sVar20);
          if (iVar14 != 0) goto LAB_00bdf4c0;
LAB_00bdf500:
          local_128 = &local_d0;
          FUN_0060b2cc(&local_128,local_c8);
          local_d0 = &local_c8;
          local_c8 = (undefined1 *)0x0;
          local_c0 = (undefined1 *)0x0;
        }
        plVar3 = (long *)param_1[1];
        if (plVar3 < (long *)param_1[2]) {
          if (plVar3 == (long *)0x0) goto LAB_00bdf6d4;
          FUN_006684dc(plVar3,&local_120);
          plVar3[0xe] = 0;
          *plVar3 = (long)puVar1;
          plVar3[0xd] = (long)puStack_b8;
          if ((undefined1 *)0x1 < local_b0) {
            if (((ulong)local_b0 & 1) == 0) {
              plVar3[0xe] = (long)local_b0;
              plVar17 = plVar3 + 0x14;
              plVar3[0x13] = (long)local_88;
              plVar3[0x12] = (long)puStack_90;
              plVar3[0x11] = (long)puStack_98;
              plVar3[0x10] = (long)local_a0;
              plVar3[0xf] = (long)puStack_a8;
              goto LAB_00bdf2c0;
            }
            FUN_007b7fb0(plVar3 + 0xe,&local_b0);
          }
          plVar17 = plVar3 + 0x14;
        }
        else {
          plVar17 = (long *)FUN_00bdf8b4(param_1,&local_120);
        }
LAB_00bdf2c0:
        param_1[1] = plVar17;
        FUN_006689a8(&local_120);
        bVar10 = bVar11;
      }
      else {
        pvVar16 = (void *)(lVar21 + 0x10);
        if (__n != sVar20) goto LAB_00bdf33c;
LAB_00bdf328:
        iVar14 = memcmp(pvVar16,PTR_DAT_00d51fd8,__n);
        if (iVar14 != 0) goto LAB_00bdf33c;
        bVar11 = true;
        bVar8 = !bVar10;
        bVar10 = bVar11;
        if (bVar8) goto LAB_00bdf454;
      }
LAB_00bdf2cc:
      bVar8 = bVar9;
      lVar21 = lVar21 + 0xd8;
    } while (lVar21 != lVar4);
  }
  puVar19 = (undefined4 *)param_3[1];
  if ((undefined4 *)*param_3 != puVar19) {
    uVar22 = param_1[4];
    puVar18 = (undefined4 *)*param_3 + 6;
    do {
      if (uVar22 < (ulong)param_1[5]) {
        if (uVar22 == 0) goto LAB_00bdf6d4;
        uVar2 = *(ulong *)(puVar18 + -4);
        puVar7 = *(undefined4 **)(puVar18 + -6);
        if (-1 < (char)*(byte *)((long)puVar18 + -1)) {
          uVar2 = (ulong)*(byte *)((long)puVar18 + -1);
          puVar7 = puVar18 + -6;
        }
        FUN_00668a3c(uVar22,puVar7,uVar2,*puVar18);
        uVar22 = uVar22 + 0x28;
      }
      else {
        uVar22 = FUN_00bdfb54(param_1 + 3,puVar18 + -6,puVar18);
      }
      puVar7 = puVar18 + 2;
      puVar18 = puVar18 + 8;
      param_1[4] = uVar22;
    } while (puVar7 != puVar19);
  }
  if (bVar10) {
    puVar19 = (undefined4 *)param_1[7];
    local_120 = (undefined1 *)((ulong)local_120 & 0xffffffff00000000);
    if (puVar19 < (undefined4 *)param_1[8]) {
      if (puVar19 == (undefined4 *)0x0) goto LAB_00bdf6d4;
      puVar18 = puVar19 + 1;
      *puVar19 = 0;
    }
    else {
      puVar18 = (undefined4 *)FUN_00bdfcdc(param_1 + 6,&local_120);
    }
    param_1[7] = puVar18;
    if (bVar12) {
      local_120 = (undefined1 *)CONCAT44(local_120._4_4_,1);
      if (puVar18 < (undefined4 *)param_1[8]) {
        if (puVar18 == (undefined4 *)0x0) goto LAB_00bdf6d4;
        puVar19 = puVar18 + 1;
        *puVar18 = 1;
      }
      else {
        puVar19 = (undefined4 *)FUN_00bdfcdc(param_1 + 6,&local_120);
      }
      param_1[7] = puVar19;
    }
  }
  if (bVar13) {
    puVar19 = (undefined4 *)param_1[7];
    local_120 = (undefined1 *)CONCAT44(local_120._4_4_,2);
    if (puVar19 < (undefined4 *)param_1[8]) {
      if (puVar19 == (undefined4 *)0x0) {
LAB_00bdf6d4:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      puVar18 = puVar19 + 1;
      *puVar19 = 2;
    }
    else {
      puVar18 = (undefined4 *)FUN_00bdfcdc(param_1 + 6,&local_120);
    }
    param_1[7] = puVar18;
  }
  if (*(long *)(lVar6 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00bdf720  FUN_00bdf720 =====

long FUN_00bdf720(long *param_1,undefined8 param_2)

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
  uVar3 = (lVar6 >> 2) * -0x5555555555555555 + 1;
  if (uVar3 < 0x1555555555555556) {
    lVar4 = param_1[2] - *param_1 >> 2;
    uVar5 = lVar4 * 0x5555555555555556;
    if (uVar5 < uVar3 || uVar5 - uVar3 == 0) {
      uVar5 = uVar3;
    }
    if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar4 * -0x5555555555555555)) {
      uVar5 = 0x1555555555555555;
    }
    if (uVar5 == 0) {
      pvVar2 = (void *)0x0;
    }
    else {
      if (0x1555555555555555 < uVar5) goto LAB_00bdf8b0;
      pvVar2 = operator_new(uVar5 * 0xc);
      lVar6 = (long)pvVar2 + lVar6;
    }
    if (lVar6 == 0) {
LAB_00bdf884:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    FUN_006684bc(lVar6,param_2);
    pvVar7 = (void *)*param_1;
    pvVar1 = (void *)param_1[1];
    lVar4 = (long)pvVar7 + (lVar6 - (long)pvVar1);
    pvVar8 = pvVar7;
    lVar9 = lVar4;
    if (pvVar1 != pvVar7) {
      do {
        if (lVar9 == 0) goto LAB_00bdf884;
        FUN_006684bc(lVar9,pvVar8);
        pvVar8 = (void *)((long)pvVar8 + 0xc);
        lVar9 = lVar9 + 0xc;
      } while (pvVar8 != pvVar1);
      do {
        if (pvVar7 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        FUN_006684d4(pvVar7);
        pvVar7 = (void *)((long)pvVar7 + 0xc);
      } while (pvVar7 != pvVar1);
      pvVar7 = (void *)*param_1;
    }
    *param_1 = lVar4;
    param_1[1] = lVar6 + 0xc;
    param_1[2] = (long)((long)pvVar2 + uVar5 * 0xc);
    if (pvVar7 != (void *)0x0) {
      operator_delete(pvVar7);
    }
    return lVar6 + 0xc;
  }
  FUN_0066a5a8();
LAB_00bdf8b0:
                    /* WARNING: Subroutine does not return */
  FUN_005d55a4();
}


// ===== 00bdf8b4  FUN_00bdf8b4 =====

long * FUN_00bdf8b4(long *param_1,long param_2)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  plVar6 = (long *)(param_1[1] - *param_1);
  uVar3 = ((long)plVar6 >> 5) * -0x3333333333333333 + 1;
  if (0x199999999999999 < uVar3) {
    FUN_00b88a40();
LAB_00bdfa28:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
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
    pvVar1 = (void *)0x0;
  }
  else {
    if (0x199999999999999 < uVar5) goto LAB_00bdfa28;
    pvVar1 = operator_new(uVar5 * 0xa0);
    plVar6 = (long *)((long)pvVar1 + (long)plVar6);
  }
  if (plVar6 != (long *)0x0) {
    FUN_006684dc(plVar6,param_2);
    *plVar6 = (long)(PTR_DAT_00d52108 + 0x10);
    lVar4 = *(long *)(param_2 + 0x68);
    plVar6[0xe] = 0;
    plVar6[0xd] = lVar4;
    uVar3 = *(ulong *)(param_2 + 0x70);
    if (1 < uVar3) {
      if ((uVar3 & 1) == 0) {
        plVar6[0xe] = uVar3;
        lVar7 = *(long *)(param_2 + 0x90);
        lVar4 = *(long *)(param_2 + 0x88);
        lVar9 = *(long *)(param_2 + 0x80);
        lVar8 = *(long *)(param_2 + 0x78);
        plVar6[0x13] = *(long *)(param_2 + 0x98);
        plVar6[0x12] = lVar7;
        plVar6[0x11] = lVar4;
        plVar6[0x10] = lVar9;
        plVar6[0xf] = lVar8;
      }
      else {
        FUN_007b7fb0();
      }
    }
    lVar4 = (long)plVar6 + (*param_1 - param_1[1]);
    FUN_00bdfa2c(param_1,*param_1,param_1[1],lVar4);
    pvVar2 = (void *)*param_1;
    *param_1 = lVar4;
    param_1[1] = (long)(plVar6 + 0x14);
    param_1[2] = (long)((long)pvVar1 + uVar5 * 0xa0);
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
    return plVar6 + 0x14;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00bdfa2c  FUN_00bdfa2c =====

void FUN_00bdfa2c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if (param_2 != param_3) {
    lVar8 = 0;
    puVar1 = PTR_DAT_00d52108 + 0x10;
    do {
      if (param_4 + lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      plVar2 = (long *)(param_4 + lVar8);
      FUN_006684dc(param_4 + lVar8,(long)param_2 + lVar8);
      *plVar2 = (long)puVar1;
      lVar3 = *(long *)((long)param_2 + lVar8 + 0x68);
      puVar7 = (ulong *)(plVar2 + 0xe);
      *puVar7 = 0;
      plVar2[0xd] = lVar3;
      puVar6 = (ulong *)((long)param_2 + lVar8 + 0x70);
      uVar4 = *puVar6;
      if (1 < uVar4) {
        if ((uVar4 & 1) == 0) {
          *puVar7 = uVar4;
          lVar3 = param_4 + lVar8;
          uVar10 = *(undefined8 *)((long)param_2 + lVar8 + 0x90);
          uVar9 = *(undefined8 *)((long)param_2 + lVar8 + 0x88);
          uVar12 = *(undefined8 *)((long)param_2 + lVar8 + 0x80);
          uVar11 = *(undefined8 *)((long)param_2 + lVar8 + 0x78);
          *(undefined8 *)(lVar3 + 0x98) = *(undefined8 *)((long)param_2 + lVar8 + 0x98);
          *(undefined8 *)(lVar3 + 0x90) = uVar10;
          *(undefined8 *)(lVar3 + 0x88) = uVar9;
          *(undefined8 *)(lVar3 + 0x80) = uVar12;
          *(undefined8 *)(lVar3 + 0x78) = uVar11;
        }
        else {
          FUN_007b7fb0(puVar7,puVar6);
        }
      }
      lVar8 = lVar8 + 0xa0;
    } while ((undefined8 *)((long)param_2 + lVar8) != param_3);
    do {
      if (param_2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      puVar5 = param_2 + 0x14;
      (**(code **)*param_2)(param_2);
      param_2 = puVar5;
    } while (puVar5 != param_3);
  }
  return;
}


// ===== 00bdfb54  FUN_00bdfb54 =====

long FUN_00bdfb54(long *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  void *local_60;
  long local_58;
  long local_50;
  void *local_48;
  
  lVar6 = param_1[1] - *param_1;
  uVar2 = (lVar6 >> 3) * -0x3333333333333333 + 1;
  if (0x666666666666666 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00b615e4();
  }
  local_60 = (void *)0x0;
  lVar3 = param_1[2] - *param_1 >> 3;
  uVar4 = lVar3 * -0x6666666666666666;
  if (uVar4 < uVar2 || uVar4 - uVar2 == 0) {
    uVar4 = uVar2;
  }
  if (0x333333333333332 < (ulong)(lVar3 * -0x3333333333333333)) {
    uVar4 = 0x666666666666666;
  }
  if (uVar4 != 0) {
    if (0x666666666666666 < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    local_60 = operator_new(uVar4 * 0x28);
  }
  lVar6 = (long)local_60 + lVar6;
  local_48 = (void *)((long)local_60 + uVar4 * 0x28);
  local_58 = lVar6;
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  uVar2 = param_2[1];
  puVar1 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar2 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar1 = param_2;
  }
  FUN_00668a3c(lVar6,puVar1,uVar2,*param_3);
  local_50 = lVar6 + 0x28;
  FUN_00b614d4(param_1,&local_60);
  lVar3 = local_58;
  lVar5 = param_1[1];
  lVar6 = local_50;
  while( true ) {
    if (lVar3 == lVar6) {
      if (local_60 != (void *)0x0) {
        local_50 = lVar6;
        operator_delete(local_60);
      }
      return lVar5;
    }
    lVar6 = lVar6 + -0x28;
    if (lVar6 == 0) break;
    FUN_00668d5c(lVar6);
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00bdfcdc  FUN_00bdfcdc =====

undefined4 * FUN_00bdfcdc(long *param_1,undefined4 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  size_t __n;
  ulong uVar4;
  ulong uVar5;
  undefined4 *puVar6;
  void *__dest;
  
  puVar6 = (undefined4 *)(param_1[1] - *param_1);
  uVar1 = ((long)puVar6 >> 2) + 1;
  if (uVar1 >> 0x3e != 0) {
    FUN_00b88ff4();
LAB_00bdfdcc:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  uVar4 = param_1[2] - *param_1;
  uVar5 = (long)uVar4 >> 1;
  if (uVar5 <= uVar1) {
    uVar5 = uVar1;
  }
  if (0x7ffffffffffffffb < uVar4) {
    uVar5 = 0x3fffffffffffffff;
  }
  if (uVar5 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (uVar5 >> 0x3e != 0) goto LAB_00bdfdcc;
    pvVar2 = operator_new(uVar5 << 2);
    puVar6 = (undefined4 *)((long)pvVar2 + (long)puVar6);
  }
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = *param_2;
    __n = param_1[1] - *param_1;
    __dest = (void *)((long)puVar6 - __n);
    memcpy(__dest,(void *)*param_1,__n);
    pvVar3 = (void *)*param_1;
    *param_1 = (long)__dest;
    param_1[1] = (long)(puVar6 + 1);
    param_1[2] = (long)((long)pvVar2 + uVar5 * 4);
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    return puVar6 + 1;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00bdfdd0  FUN_00bdfdd0 =====

void FUN_00bdfdd0(undefined8 *param_1,undefined8 *param_2)

{
  undefined2 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar2 = (undefined8 *)operator_new(0x80);
  puVar2[3] = puVar2 + 2;
  puVar2[4] = 0;
  puVar2[2] = puVar2 + 2;
  *puVar2 = &PTR_FUN_00d48920;
  puVar2[1] = &PTR_FUN_00d489a0;
  FUN_00897504(puVar2 + 5);
  *(undefined4 *)(puVar2 + 0xf) = 0;
  *param_1 = puVar2;
  *puVar2 = &PTR_FUN_00d48868;
  puVar2[1] = &PTR_FUN_00d488f0;
  if (puVar2 != (undefined8 *)0x0) {
    FUN_00d0f740(1,puVar2 + 0xf);
  }
  if (param_2 != (undefined8 *)0x0) {
    uVar3 = *param_2;
    uVar5 = param_2[3];
    uVar4 = param_2[2];
    uVar1 = *(undefined2 *)(param_2 + 4);
    puVar2[6] = param_2[1];
    puVar2[5] = uVar3;
    puVar2[8] = uVar5;
    puVar2[7] = uVar4;
    *(undefined2 *)(puVar2 + 9) = uVar1;
    FUN_005e7520(puVar2 + 10,param_2 + 5);
    *(undefined2 *)(puVar2 + 0xe) = *(undefined2 *)(param_2 + 9);
  }
  return;
}


// ===== 00bdfe80  FUN_00bdfe80 =====

void FUN_00bdfe80(long param_1)

{
  FUN_00d0f740(1,param_1 + 0x78);
  return;
}


// ===== 00bdfea4  FUN_00bdfea4 =====

bool FUN_00bdfea4(long *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d0f7a0(0xffffffff,param_1 + 0xf);
  if ((param_1 != (long *)0x0) && (iVar1 == 1)) {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return iVar1 != 1;
}


// ===== 00bdfefc  FUN_00bdfefc =====

void FUN_00bdfefc(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_00d48920;
  param_1[1] = &PTR_FUN_00d489a0;
  FUN_00897538(param_1 + 5);
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


// ===== 00bdffac  FUN_00bdffac =====

void FUN_00bdffac(void *param_1)

{
  FUN_00bdfefc();
  operator_delete(param_1);
  return;
}


// ===== 00bdffdc  FUN_00bdffdc =====

undefined8 FUN_00bdffdc(void)

{
  return 1;
}


// ===== 00bdffe8  FUN_00bdffe8 =====

undefined8 FUN_00bdffe8(void)

{
  return 0;
}


// ===== 00bdfff4  FUN_00bdfff4 =====

void FUN_00bdfff4(void)

{
  return;
}


