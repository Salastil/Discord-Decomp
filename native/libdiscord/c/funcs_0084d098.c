// ===== 0084d098  FUN_0084d098 =====

void FUN_0084d098(long param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  byte bVar2;
  undefined2 uVar3;
  short sVar4;
  code *pcVar5;
  void *pvVar6;
  long *plVar7;
  ulong uVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  char *pcVar11;
  long lVar12;
  uint uVar13;
  int *piVar14;
  ulong uVar15;
  long lVar16;
  uint uVar17;
  long lVar18;
  short sVar19;
  long *plVar20;
  long *plVar21;
  ushort uVar22;
  
  plVar20 = (long *)(param_1 + 0x30);
  while (plVar21 = *(long **)(param_1 + 0x38), plVar20 != *(long **)(param_1 + 0x38)) {
    uVar13 = (uint)*(ushort *)(param_3 + 1);
    uVar17 = (uint)*(ushort *)(((long *)*plVar20)[2] + 4);
    plVar21 = plVar20;
    if (uVar13 - uVar17 == 0x8000) {
      if (uVar13 <= uVar17) goto LAB_0084d0e0;
      break;
    }
    if ((uVar13 != uVar17) && ((uVar13 - uVar17 >> 0xf & 1) == 0)) break;
LAB_0084d0e0:
    plVar20 = (long *)*plVar20;
    if (uVar17 == uVar13) {
      return;
    }
  }
  pvVar6 = operator_new(0xa8);
  plVar20 = *(long **)(param_3 + 10);
  lVar12 = (long)pvVar6 + 8;
  *(long *)((long)pvVar6 + 0x10) = lVar12;
  *(undefined8 *)((long)pvVar6 + 0x18) = 0;
  *(long *)((long)pvVar6 + 8) = lVar12;
  *(undefined8 *)((long)pvVar6 + 0x30) = 0;
  *(undefined8 *)((long)pvVar6 + 0xa0) = 0;
  if (plVar20 != (long *)0x0) {
    (**(code **)(*plVar20 + 0x10))(plVar20);
    if (*(long **)((long)pvVar6 + 0xa0) != (long *)0x0) {
      (**(code **)(**(long **)((long)pvVar6 + 0xa0) + 0x18))();
    }
  }
  uVar1 = *param_3;
  uVar3 = *(undefined2 *)(param_3 + 1);
  plVar7 = *(long **)(param_1 + 8);
  *(long **)((long)pvVar6 + 0xa0) = plVar20;
  *(undefined4 *)((long)pvVar6 + 0x20) = uVar1;
  *(undefined2 *)((long)pvVar6 + 4) = uVar3;
  uVar8 = (**(code **)(*plVar7 + 0x10))(plVar7,pvVar6);
  if ((uVar8 & 1) == 0) goto LAB_0084d258;
  uVar8 = *(ulong *)((long)pvVar6 + 0x30);
  if (uVar8 >> 1 != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../modules/rtp_rtcp/source/forward_error_correction.cc",0x1b0,
                 "fec_packet->protected_streams.size() == 1",&DAT_001fbca2,uVar8 >> 1,1);
  }
  if ((uVar8 & 1) == 0) {
    if (*(int *)((long)pvVar6 + 0x38) != *(int *)(param_1 + 4)) goto LAB_0084d230;
    plVar20 = (long *)((long)pvVar6 + 0x40);
    piVar14 = (int *)((long)pvVar6 + 0x38);
LAB_0084d1ec:
    if ((ulong)(*(long *)(piVar14 + 4) + *plVar20) <=
        *(ulong *)(*(long *)((long)pvVar6 + 0xa0) + 0x18)) {
      if (1 < uVar8) {
        uVar15 = 0;
        uVar22 = 0;
        do {
          if ((uVar8 & 1) == 0) {
            uVar8 = *(ulong *)((long)pvVar6 + 0x48);
            lVar16 = (long)pvVar6 + 0x38;
          }
          else {
            lVar16 = *(long *)((long)pvVar6 + 0x38);
            uVar8 = *(ulong *)(lVar16 + 0x10);
          }
          if (uVar8 <= uVar15) {
            if (*(long *)((long)pvVar6 + 0x18) != 0) {
              FUN_0084d4d0(param_2,pvVar6);
              plVar20 = (long *)operator_new(0x18);
              if ((plVar20 != (long *)0x0) && (plVar20 != (long *)0xfffffffffffffff0)) {
                plVar20[2] = (long)pvVar6;
                *(long **)(*plVar21 + 8) = plVar20;
                *plVar20 = *plVar21;
                *plVar21 = (long)plVar20;
                lVar12 = *(long *)(param_1 + 0x40);
                lVar16 = *(long *)(param_1 + 8);
                plVar20[1] = (long)plVar21;
                uVar8 = lVar12 + 1;
                *(ulong *)(param_1 + 0x40) = uVar8;
                if (uVar8 <= *(ulong *)(lVar16 + 0x10)) {
                  return;
                }
                FUN_0084d5c8(param_1 + 0x30);
                return;
              }
LAB_0084d3b8:
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                        );
            }
            uVar8 = FUN_004022fc();
            if ((uVar8 & 1) != 0) goto LAB_0084d258;
            pcVar11 = "Received FEC packet has an all-zero packet mask.";
            uVar10 = 0xec2;
            goto LAB_0084d254;
          }
          lVar18 = *(long *)(*(long *)((long)pvVar6 + 0xa0) + 8);
          if (lVar18 == 0) {
            lVar18 = 0;
          }
          else {
            lVar18 = *(long *)(lVar18 + 0x10) + *(long *)(*(long *)((long)pvVar6 + 0xa0) + 0x10);
          }
          sVar19 = 0;
          uVar13 = 7;
          bVar2 = *(byte *)(lVar18 + *(long *)(lVar16 + 8) + uVar15);
          do {
            if ((bVar2 >> (ulong)(uVar13 & 0x1f) & 1) != 0) {
              puVar9 = (undefined4 *)operator_new(0x10);
              uVar8 = *(ulong *)((long)pvVar6 + 0x30);
              uVar1 = *(undefined4 *)(param_1 + 4);
              *(undefined8 *)(puVar9 + 2) = 0;
              *puVar9 = uVar1;
              if (uVar8 < 2) goto LAB_0084d4a8;
              lVar16 = (long)pvVar6 + 0x38;
              if ((uVar8 & 1) != 0) {
                lVar16 = *(long *)((long)pvVar6 + 0x38);
              }
              sVar4 = *(short *)(lVar16 + 4);
              *(undefined8 *)(puVar9 + 2) = 0;
              *(ushort *)(puVar9 + 1) = uVar22 * 8 + sVar19 + sVar4;
              plVar20 = (long *)operator_new(0x18);
              if ((plVar20 == (long *)0x0) || (plVar20 == (long *)0xfffffffffffffff0))
              goto LAB_0084d3b8;
              lVar16 = *(long *)((long)pvVar6 + 8);
              plVar20[1] = lVar12;
              plVar20[2] = (long)puVar9;
              *plVar20 = lVar16;
              *(long **)(lVar16 + 8) = plVar20;
              *(long **)((long)pvVar6 + 8) = plVar20;
              *(long *)((long)pvVar6 + 0x18) = *(long *)((long)pvVar6 + 0x18) + 1;
            }
            uVar13 = uVar13 - 1;
            sVar19 = sVar19 + 1;
          } while (uVar13 != 0xffffffff);
          uVar8 = *(ulong *)((long)pvVar6 + 0x30);
          uVar22 = uVar22 + 1;
          uVar15 = (ulong)uVar22;
        } while (1 < uVar8);
      }
LAB_0084d4a8:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x84d4ac);
      (*pcVar5)();
    }
    uVar8 = FUN_00417e08();
    if ((uVar8 & 1) != 0) goto LAB_0084d258;
    pcVar11 = "Received corrupted FEC packet; dropping.";
    uVar10 = 0xdd9;
  }
  else {
    piVar14 = *(int **)((long)pvVar6 + 0x38);
    if (*piVar14 == *(int *)(param_1 + 4)) {
      plVar20 = (long *)(piVar14 + 2);
      goto LAB_0084d1ec;
    }
LAB_0084d230:
    uVar8 = FUN_00417e08();
    if ((uVar8 & 1) != 0) goto LAB_0084d258;
    pcVar11 = "Received FEC packet is protecting an unknown media SSRC; dropping.";
    uVar10 = 0xd99;
  }
LAB_0084d254:
  FUN_00623bb0(&DAT_001f4e98,"../../modules/rtp_rtcp/source/forward_error_correction.cc",uVar10,
               pcVar11);
LAB_0084d258:
  if (pvVar6 == (void *)0x0) {
    return;
  }
  FUN_0084bc38(pvVar6);
  operator_delete(pvVar6);
  return;
}


// ===== 0084d4d0  FUN_0084d4d0 =====

void FUN_0084d4d0(long param_1,long param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar7 = *(long *)(param_2 + 0x10);
  param_2 = param_2 + 8;
  if (lVar7 != param_2) {
    lVar8 = *(long *)(param_1 + 8);
    do {
      while( true ) {
        if (lVar8 == param_1) {
          return;
        }
        lVar9 = *(long *)(lVar7 + 0x10);
        uVar1 = *(ushort *)(*(long *)(lVar8 + 0x10) + 4);
        uVar2 = *(ushort *)(lVar9 + 4);
        uVar3 = (uint)uVar1 - (uint)uVar2;
        uVar4 = (uint)uVar1;
        uVar5 = (uint)uVar2;
        if (uVar3 == 0x8000) break;
        if (((uint)uVar1 != (uint)uVar2) && ((uVar3 >> 0xf & 1) == 0)) goto LAB_0084d504;
LAB_0084d54c:
        if (uVar5 - uVar4 == 0x8000) {
          if (uVar5 <= uVar4) {
LAB_0084d570:
            plVar6 = *(long **)(*(long *)(lVar8 + 0x10) + 0x10);
            if (plVar6 != (long *)0x0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
            }
            if (*(long **)(lVar9 + 8) != (long *)0x0) {
              (**(code **)(**(long **)(lVar9 + 8) + 0x18))();
            }
            *(long **)(lVar9 + 8) = plVar6;
            lVar7 = *(long *)(lVar7 + 8);
          }
        }
        else if ((uVar5 == uVar4) || ((uVar5 - uVar4 >> 0xf & 1) != 0)) goto LAB_0084d570;
        lVar8 = *(long *)(lVar8 + 8);
        if (lVar7 == param_2) {
          return;
        }
      }
      if (uVar4 <= uVar5) goto LAB_0084d54c;
LAB_0084d504:
      lVar7 = *(long *)(lVar7 + 8);
    } while (lVar7 != param_2);
  }
  return;
}


// ===== 0084d5c8  FUN_0084d5c8 =====

void FUN_0084d5c8(long param_1)

{
  long *plVar1;
  long *plVar2;
  void *pvVar3;
  
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/list:1394: libc++ Hardening assertion !empty() failed: list::pop_front() called with empty list\n"
              );
  }
  plVar2 = *(long **)(param_1 + 8);
  plVar1 = (long *)plVar2[1];
  *(long **)(*plVar2 + 8) = plVar1;
  *plVar1 = *plVar2;
  plVar1 = plVar2 + 2;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -1;
  if (plVar1 != (long *)0x0) {
    pvVar3 = (void *)*plVar1;
    *plVar1 = 0;
    if (pvVar3 != (void *)0x0) {
      FUN_0084bc38(pvVar3);
      operator_delete(pvVar3);
    }
    if (plVar2 != (long *)0x0) {
      operator_delete(plVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 0084d66c  FUN_0084d66c =====

void FUN_0084d66c(long param_1,int *param_2,undefined8 param_3)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    lVar1 = *(long *)(param_1 + 0x38);
    if (*param_2 == *(int *)(*(long *)(lVar1 + 0x10) + 0x20) && lVar1 != param_1 + 0x30) {
      do {
        if (0x8000 < (ushort)(((short)param_2[1] - *(short *)(*(long *)(lVar1 + 0x10) + 4)) +
                             0xc000U)) break;
        lVar1 = FUN_0084d72c(param_1 + 0x30);
      } while (param_1 + 0x30 != lVar1);
    }
  }
  if ((char)param_2[2] == '\x01') {
    FUN_0084d098();
  }
  else {
    FUN_0084ce14(param_1,param_3,param_2);
  }
  FUN_0084d7e0(param_1,param_3);
  return;
}


// ===== 0084d72c  FUN_0084d72c =====

long * FUN_0084d72c(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  void *pvVar3;
  
  if (param_2 == param_1) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/list:1412: libc++ Hardening assertion __p != end() failed: list::erase(iterator) called with a non-dereferenceable iterator\n"
              );
  }
  plVar2 = (long *)param_2[1];
  *(long **)(*param_2 + 8) = plVar2;
  *plVar2 = *param_2;
  plVar1 = param_2 + 2;
  param_1[2] = param_1[2] + -1;
  if (plVar1 != (long *)0x0) {
    pvVar3 = (void *)*plVar1;
    *plVar1 = 0;
    if (pvVar3 != (void *)0x0) {
      FUN_0084bc38(pvVar3);
      operator_delete(pvVar3);
    }
    if (param_2 != (long *)0x0) {
      operator_delete(param_2);
      return plVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 0084d7e0  FUN_0084d7e0 =====

void FUN_0084d7e0(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  void *pvVar4;
  ulong uVar5;
  
  uVar5 = *(ulong *)(*(long *)(param_1 + 8) + 8);
  uVar2 = *(ulong *)(param_2 + 0x10);
  while( true ) {
    if (uVar2 <= uVar5) {
      return;
    }
    plVar3 = *(long **)(param_2 + 8);
    plVar1 = (long *)plVar3[1];
    *(long **)(*plVar3 + 8) = plVar1;
    *plVar1 = *plVar3;
    plVar1 = plVar3 + 2;
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    if (plVar1 == (long *)0x0) break;
    pvVar4 = (void *)*plVar1;
    *plVar1 = 0;
    if (pvVar4 != (void *)0x0) {
      if (*(long **)((long)pvVar4 + 0x10) != (long *)0x0) {
        (**(code **)(**(long **)((long)pvVar4 + 0x10) + 0x18))();
      }
      operator_delete(pvVar4);
    }
    if (plVar3 == (long *)0x0) break;
    operator_delete(plVar3);
    uVar2 = *(ulong *)(param_2 + 0x10);
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 0084d8a4  FUN_0084d8a4 =====

undefined8 FUN_0084d8a4(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  
  plVar1 = (long *)operator_new(0x28);
  *plVar1 = (long)&PTR_FUN_00d3a410;
  FUN_007b545c(plVar1 + 1,0);
  *(undefined4 *)(plVar1 + 4) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  if (*(long **)(param_2 + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(param_2 + 0x10) + 0x18))();
  }
  *(long **)(param_2 + 0x10) = plVar1;
  if (*(ulong *)(*(long *)(param_1 + 0xa0) + 0x18) <
      *(ulong *)(param_1 + 0x98) + *(long *)(param_1 + 0x28)) {
    uVar2 = FUN_004022fc();
    if ((uVar2 & 1) != 0) {
      return 0;
    }
    pcVar4 = "The FEC packet is truncated: it does not contain enough room for its own header.";
    uVar3 = 0x115a;
  }
  else {
    uVar2 = 0x5dc - *(long *)(param_1 + 0x28);
    if (0x5cf < uVar2) {
      uVar2 = 0x5d0;
    }
    if (*(ulong *)(param_1 + 0x98) <= uVar2) {
      FUN_007b5880(plVar1 + 1,0x5dc);
      FUN_007b5678(*(long *)(param_2 + 0x10) + 8,*(long *)(param_1 + 0x98) + 0xc);
      lVar8 = *(long *)(param_2 + 0x10);
      *(undefined2 *)(param_2 + 8) = 1;
      puVar5 = *(undefined8 **)(lVar8 + 8);
      if (puVar5 != (undefined8 *)0x0) {
        FUN_007b5788((long *)(lVar8 + 8),puVar5[1] - *(long *)(lVar8 + 0x10));
        puVar5 = (undefined8 *)(*(long *)(*(long *)(lVar8 + 8) + 0x10) + *(long *)(lVar8 + 0x10));
      }
      lVar8 = *(long *)(*(long *)(param_1 + 0xa0) + 8);
      if (lVar8 == 0) {
        puVar6 = (undefined8 *)0x0;
      }
      else {
        puVar6 = (undefined8 *)
                 (*(long *)(lVar8 + 0x10) + *(long *)(*(long *)(param_1 + 0xa0) + 0x10));
      }
      uVar3 = *puVar6;
      *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar6 + 1);
      *puVar5 = uVar3;
      if (*(long *)(param_1 + 0x98) != 0) {
        lVar7 = *(long *)(param_2 + 0x10);
        lVar8 = *(long *)(lVar7 + 8);
        if (lVar8 != 0) {
          FUN_007b5788((long *)(lVar7 + 8),*(long *)(lVar8 + 8) - *(long *)(lVar7 + 0x10));
          lVar8 = *(long *)(*(long *)(lVar7 + 8) + 0x10) + *(long *)(lVar7 + 0x10);
        }
        lVar7 = *(long *)(*(long *)(param_1 + 0xa0) + 8);
        if (lVar7 == 0) {
          lVar7 = 0;
        }
        else {
          lVar7 = *(long *)(lVar7 + 0x10) + *(long *)(*(long *)(param_1 + 0xa0) + 0x10);
        }
        memcpy((void *)(lVar8 + 0xc),(void *)(lVar7 + *(long *)(param_1 + 0x28)),
               *(size_t *)(param_1 + 0x98));
      }
      return 1;
    }
    uVar2 = FUN_004022fc();
    if ((uVar2 & 1) != 0) {
      return 0;
    }
    pcVar4 = "Incorrect protection length, dropping FEC packet.";
    uVar3 = 0x119a;
  }
  FUN_00623bb0(&DAT_001f4e98,"../../modules/rtp_rtcp/source/forward_error_correction.cc",uVar3,
               pcVar4);
  return 0;
}


// ===== 0084daa8  FUN_0084daa8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0084daa8(undefined8 param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  size_t __n;
  byte *pbVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined1 auVar8 [16];
  
  lVar5 = *(long *)(param_2 + 4);
  pbVar4 = *(byte **)(lVar5 + 8);
  if (pbVar4 != (byte *)0x0) {
    FUN_007b5788((undefined8 *)(lVar5 + 8),*(long *)(pbVar4 + 8) - *(long *)(lVar5 + 0x10));
    pbVar4 = (byte *)(*(long *)(*(long *)(lVar5 + 8) + 0x10) + *(long *)(lVar5 + 0x10));
  }
  uVar1 = (uint)(*(ushort *)(pbVar4 + 2) >> 8) | (*(ushort *)(pbVar4 + 2) & 0xff00ff) << 8;
  *pbVar4 = *pbVar4 & 0x3f | 0x80;
  if (0x5c4 < uVar1) {
    uVar3 = FUN_004022fc();
    if ((uVar3 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../modules/rtp_rtcp/source/forward_error_correction.cc",0x12aa,
                   "The recovered packet had a length larger than a typical IP packet, and is thus dropped."
                  );
    }
    goto LAB_0084dbc0;
  }
  uVar3 = (ulong)uVar1 + 0xc;
  uVar6 = *(ulong *)(*(long *)(param_2 + 4) + 0x18);
  FUN_007b5678(*(long *)(param_2 + 4) + 8,(ulong)uVar1 + 0xc);
  lVar7 = *(long *)(param_2 + 4);
  lVar5 = *(long *)(lVar7 + 8);
  if (lVar5 == 0) {
    lVar5 = 0;
    __n = uVar3 - uVar6;
    if (uVar6 <= uVar3 && __n != 0) goto LAB_0084db5c;
  }
  else {
    FUN_007b5788((long *)(lVar7 + 8),*(long *)(lVar5 + 8) - *(long *)(lVar7 + 0x10));
    lVar5 = *(long *)(*(long *)(lVar7 + 8) + 0x10) + *(long *)(lVar7 + 0x10);
    __n = uVar3 - uVar6;
    if (uVar6 <= uVar3 && __n != 0) {
LAB_0084db5c:
      memset((void *)(lVar5 + uVar6),0,__n);
    }
  }
  *(ushort *)(lVar5 + 2) =
       *(ushort *)(param_2 + 1) >> 8 | (ushort)((*(ushort *)(param_2 + 1) & 0xff00ff) << 8);
  uVar2 = *param_2;
  auVar8._4_4_ = uVar2;
  auVar8._0_4_ = uVar2;
  auVar8._8_4_ = uVar2;
  auVar8._12_4_ = uVar2;
  auVar8 = NEON_ushl(auVar8,_DAT_001f3910,4);
  *(uint *)(lVar5 + 8) = CONCAT13(auVar8[0xc],CONCAT12(auVar8[8],CONCAT11(auVar8[4],auVar8[0])));
LAB_0084dbc0:
  return uVar1 < 0x5c5;
}


// ===== 0084dbf0  FUN_0084dbf0 =====

undefined8 FUN_0084dbf0(long param_1,undefined4 *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar1 = FUN_0084d8a4();
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  for (lVar4 = *(long *)(param_1 + 0x10); lVar4 != param_1 + 8; lVar4 = *(long *)(lVar4 + 8)) {
    while( true ) {
      lVar2 = *(long *)(*(long *)(lVar4 + 0x10) + 8);
      if (lVar2 == 0) break;
      FUN_0084ca88(lVar2,*(undefined8 *)(param_2 + 4));
      lVar2 = *(long *)(*(long *)(lVar4 + 0x10) + 8);
      uVar1 = FUN_0084cb80(lVar2,*(long *)(lVar2 + 0x18) + -0xc,0xc,*(undefined8 *)(param_2 + 4));
      lVar4 = *(long *)(lVar4 + 8);
      if (lVar4 == param_1 + 8) goto LAB_0084dc84;
    }
    *(undefined2 *)(param_2 + 1) = *(undefined2 *)(*(long *)(lVar4 + 0x10) + 4);
    *param_2 = **(undefined4 **)(lVar4 + 0x10);
    uVar1 = 0;
  }
LAB_0084dc84:
  uVar3 = FUN_0084daa8(uVar1,param_2);
  return uVar3;
}


// ===== 0084dcb4  FUN_0084dcb4 =====

long FUN_0084dcb4(long param_1,long *param_2)

{
  void *pvVar1;
  ulong uVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  
  lVar10 = *(long *)(param_1 + 0x38);
  if (lVar10 == param_1 + 0x30) {
    return 0;
  }
  lVar9 = 0;
LAB_0084dd08:
  lVar5 = *(long *)(lVar10 + 0x10);
  plVar11 = (long *)(lVar5 + 8);
  plVar3 = *(long **)(lVar5 + 0x10);
  if (*(long **)(lVar5 + 0x10) != plVar11) {
    do {
      plVar6 = (long *)plVar3[1];
      plVar7 = plVar3 + 2;
      if (*(long *)(*plVar7 + 8) == 0) {
        if (plVar6 == plVar11) goto LAB_0084dd54;
        goto LAB_0084dd38;
      }
      plVar3 = plVar6;
    } while (plVar6 != plVar11);
    goto LAB_0084dd50;
  }
  goto LAB_0084dcf0;
  while (plVar6 = (long *)plVar6[1], plVar6 != plVar11) {
LAB_0084dd38:
    if (*(long *)(plVar6[2] + 8) == 0) {
      if (param_2[2] != 0) {
        if (*(long *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/list:842: libc++ Hardening assertion !empty() failed: list::back called on empty list\n"
                    );
        }
        if ((ushort)((*(short *)(*(long *)(*param_2 + 0x10) + 4) -
                     *(short *)(*(long *)(*plVar11 + 0x10) + 4)) + 0xc000U) < 0x8001)
        goto LAB_0084dcf0;
      }
      lVar10 = *(long *)(lVar10 + 8);
      goto LAB_0084dd00;
    }
  }
LAB_0084dd50:
  if (*(long *)(*plVar7 + 8) == 0) {
LAB_0084dd54:
    pvVar1 = operator_new(0x18);
    *(undefined8 *)((long)pvVar1 + 0x10) = 0;
    uVar2 = FUN_0084dbf0(*(undefined8 *)(lVar10 + 0x10),pvVar1);
    if ((uVar2 & 1) == 0) {
      lVar10 = FUN_0084d72c(param_1 + 0x30,lVar10);
      if (pvVar1 != (void *)0x0) {
        if (*(long **)((long)pvVar1 + 0x10) != (long *)0x0) {
          (**(code **)(**(long **)((long)pvVar1 + 0x10) + 0x18))();
        }
        operator_delete(pvVar1);
      }
    }
    else {
      plVar3 = (long *)param_2[1];
      plVar11 = plVar3;
      if (param_2 != plVar3) {
        plVar6 = param_2;
        do {
          plVar7 = (long *)*plVar6;
          uVar4 = (uint)*(ushort *)((long)pvVar1 + 4);
          uVar8 = (uint)*(ushort *)(plVar7[2] + 4);
          plVar11 = plVar6;
          if (uVar8 - uVar4 == 0x8000) {
            if (uVar8 <= uVar4) break;
          }
          else if (uVar8 == uVar4 || (uVar8 - uVar4 & 0x8000) != 0) break;
          plVar6 = plVar7;
          plVar11 = plVar3;
        } while (plVar7 != plVar3);
      }
      plVar3 = (long *)operator_new(0x18);
      if ((plVar3 == (long *)0x0) || (plVar3 == (long *)0xfffffffffffffff0)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      plVar3[2] = (long)pvVar1;
      lVar9 = lVar9 + 1;
      *(long **)(*plVar11 + 8) = plVar3;
      *plVar3 = *plVar11;
      *plVar11 = (long)plVar3;
      lVar5 = param_2[2];
      plVar3[1] = (long)plVar11;
      param_2[2] = lVar5 + 1;
      FUN_0084cf54(param_1,pvVar1);
      FUN_0084d7e0(param_1,param_2);
      FUN_0084d72c(param_1 + 0x30,lVar10);
      lVar10 = *(long *)(param_1 + 0x38);
    }
  }
  else {
LAB_0084dcf0:
    lVar10 = FUN_0084d72c(param_1 + 0x30,lVar10);
  }
LAB_0084dd00:
  if (lVar10 == param_1 + 0x30) {
    return lVar9;
  }
  goto LAB_0084dd08;
}


// ===== 0084df04  FUN_0084df04 =====

void FUN_0084df04(long param_1,int *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(*(long *)(param_1 + 8) + 8);
  if (param_3[2] == uVar3) {
    if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/list:838: libc++ Hardening assertion !empty() failed: list::back called on empty list\n"
                );
    }
    if (*param_2 == **(int **)(*param_3 + 0x10)) {
      uVar2 = (uint)(short)((short)param_2[1] - (short)(*(int **)(*param_3 + 0x10))[1]);
      uVar1 = -uVar2;
      if (-1 < (int)uVar2) {
        uVar1 = uVar2;
      }
      if (uVar3 < uVar1) {
        uVar3 = FUN_00417e08();
        if ((uVar3 & 1) == 0) {
          FUN_00623bb0(&DAT_001f4e98,"../../modules/rtp_rtcp/source/forward_error_correction.cc",
                       0x1909,
                       "Big gap in media/ULPFEC sequence numbers. No need to keep the old packets in the FEC buffers, thus resetting them."
                      );
        }
        FUN_0084cd44(param_1,param_3);
      }
    }
  }
  FUN_0084d66c(param_1,param_2,param_3);
  FUN_0084dcb4(param_1,param_3);
  return;
}


// ===== 0084dfe8  FUN_0084dfe8 =====

void FUN_0084dfe8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  param_1[2] = param_3;
  *param_1 = &PTR_FUN_00d3a440;
  param_1[1] = param_2;
  return;
}


// ===== 0084e000  FUN_0084e000 =====

void FUN_0084e000(void)

{
  return;
}


// ===== 0084e008  FUN_0084e008 =====

void FUN_0084e008(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x84e010);
  (*pcVar1)();
}


// ===== 0084e010  FUN_0084e010 =====

void FUN_0084e010(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  param_1[2] = param_3;
  param_1[3] = param_4;
  *param_1 = &PTR_FUN_00d3a468;
  param_1[1] = param_2;
  return;
}


// ===== 0084e028  FUN_0084e028 =====

void FUN_0084e028(void)

{
  return;
}


// ===== 0084e030  FUN_0084e030 =====

void FUN_0084e030(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x84e038);
  (*pcVar1)();
}


// ===== 0084e038  FUN_0084e038 =====

void FUN_0084e038(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 0084e050  FUN_0084e050 =====

void FUN_0084e050(long *param_1)

{
  long *plVar1;
  long *plVar2;
  void *pvVar3;
  long *plVar4;
  
  if (param_1[2] != 0) {
    plVar1 = (long *)param_1[1];
    plVar2 = *(long **)(*param_1 + 8);
    *(long **)(*plVar1 + 8) = plVar2;
    *plVar2 = *plVar1;
    param_1[2] = 0;
    while (plVar1 != param_1) {
      plVar2 = plVar1 + 2;
      if (plVar2 == (long *)0x0) {
LAB_0084e0f0:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      pvVar3 = (void *)*plVar2;
      plVar4 = (long *)plVar1[1];
      *plVar2 = 0;
      if (pvVar3 != (void *)0x0) {
        FUN_0084bc38(pvVar3);
        operator_delete(pvVar3);
      }
      if (plVar1 == (long *)0x0) goto LAB_0084e0f0;
      operator_delete(plVar1);
      plVar1 = plVar4;
    }
  }
  return;
}


// ===== 0084e104  FUN_0084e104 =====

void FUN_0084e104(undefined8 *param_1)

{
  FUN_0084dfe8(param_1,0xc0,0x30);
  *param_1 = &PTR_thunk_FUN_0084e000_00d3a4a0;
  return;
}


// ===== 0084e140  thunk_FUN_0084e000 =====

void thunk_FUN_0084e000(void)

{
  FUN_0084e000();
  return;
}


// ===== 0084e148  FUN_0084e148 =====

void FUN_0084e148(void *param_1)

{
  FUN_0084e000();
  operator_delete(param_1);
  return;
}


// ===== 0084e178  FUN_0084e178 =====

undefined4 FUN_0084e178(undefined8 param_1,long param_2)

{
  uint uVar1;
  ushort uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  ulong uVar7;
  undefined8 uVar8;
  char *pcVar9;
  byte bVar10;
  long lVar11;
  byte *pbVar12;
  uint local_48;
  ushort local_44;
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar11 = *(long *)(param_2 + 0xa0);
  if (*(ulong *)(lVar11 + 0x18) < 0x13) {
    uVar7 = FUN_004022fc();
    if ((uVar7 & 1) != 0) {
      return 0;
    }
    pcVar9 = "Discarding truncated FlexFEC packet.";
    uVar8 = 0x2ea;
    goto LAB_0084e2cc;
  }
  if (*(long *)(lVar11 + 8) == 0) {
    pbVar12 = (byte *)0x0;
    bVar10 = bRam0000000000000000;
    if ((char)bRam0000000000000000 < '\0') goto LAB_0084e258;
  }
  else {
    FUN_007b5788(lVar11 + 8,*(long *)(*(long *)(lVar11 + 8) + 8) - *(long *)(lVar11 + 0x10));
    pbVar12 = (byte *)(*(long *)(*(long *)(lVar11 + 8) + 0x10) + *(long *)(lVar11 + 0x10));
    bVar10 = *pbVar12;
    if ((char)*pbVar12 < '\0') {
LAB_0084e258:
      uVar7 = FUN_00417e08();
      if ((uVar7 & 1) != 0) {
        return 0;
      }
      pcVar9 = 
      "FlexFEC03 packet with retransmission bit set. We do not support this, thus discarding the packet."
      ;
      uVar8 = 0x319;
      goto LAB_0084e2cc;
    }
  }
  if (bVar10 < 0x40) {
    if (pbVar12[8] == 1) {
      if (0x13 < *(ulong *)(*(long *)(param_2 + 0xa0) + 0x18)) {
        bVar10 = pbVar12[0x13];
        bVar3 = pbVar12[0x12];
        uVar1 = *(uint *)(pbVar12 + 0xc);
        uVar2 = *(ushort *)(pbVar12 + 0x10);
        bVar6 = (byte)((uint)bVar10 << 1);
        pbVar12[0x13] = bVar6;
        pbVar12[0x12] =
             (byte)(((uint)bVar10 << 1) >> 8) | (byte)((uint)((int)(char)bVar3 << 9) >> 8);
        if ((char)bVar3 < 0) {
          uStack_38 = 2;
          uVar8 = 0x14;
        }
        else {
          if (*(ulong *)(*(long *)(param_2 + 0xa0) + 0x18) < 0x18) {
            return 0;
          }
          bVar10 = pbVar12[0x14];
          pbVar12[0x13] = (byte)((uint)(int)(char)bVar10 >> 6) & 1 | bVar6;
          uVar4 = ((int)(char)bVar10 << 0x18 | (uint)pbVar12[0x15] << 0x10 |
                   (uint)pbVar12[0x16] << 8 | (uint)pbVar12[0x17]) << 2;
          uVar5 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
          *(uint *)(pbVar12 + 0x14) = uVar5 >> 0x10 | uVar5 << 0x10;
          if (-1 < (char)bVar10) {
            if (*(ulong *)(*(long *)(param_2 + 0xa0) + 0x18) < 0x20) {
              uVar7 = FUN_004022fc();
              if ((uVar7 & 1) != 0) {
                return 0;
              }
              pcVar9 = "Discarding truncated FlexFEC03 packet.";
              uVar8 = 0x54a;
            }
            else {
              if ((char)pbVar12[0x18] < 0) {
                pbVar12[0x17] = (byte)((uint)(int)(char)pbVar12[0x18] >> 5) & 3 | (byte)uVar4;
                lVar11 = FUN_0084e454();
                uStack_38 = 0xe;
                uVar7 = (lVar11 << 3 & 0xff00ff00ff00ff00U) >> 8 |
                        (lVar11 << 3 & 0xff00ff00ff00ffU) << 8;
                uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
                *(ulong *)(pbVar12 + 0x18) = uVar7 >> 0x20 | uVar7 << 0x20;
                uVar8 = 0x20;
                goto LAB_0084e40c;
              }
              uVar7 = FUN_004022fc();
              if ((uVar7 & 1) != 0) {
                return 0;
              }
              pcVar9 = "Discarding FlexFEC03 packet with malformed header.";
              uVar8 = 0x59a;
            }
            goto LAB_0084e2cc;
          }
          uStack_38 = 6;
          uVar8 = 0x18;
        }
LAB_0084e40c:
        *(undefined8 *)(param_2 + 0x28) = uVar8;
        local_44 = uVar2 >> 8 | (ushort)((uVar2 & 0xff00ff) << 8);
        uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
        local_48 = uVar1 >> 0x10 | uVar1 << 0x10;
        local_40 = 0x12;
        FUN_0084e710(param_2 + 0x30,&local_48,1);
        *(long *)(param_2 + 0x98) =
             *(long *)(*(long *)(param_2 + 0xa0) + 0x18) - *(long *)(param_2 + 0x28);
        return 1;
      }
      uVar7 = FUN_004022fc();
      if ((uVar7 & 1) != 0) {
        return 0;
      }
      pcVar9 = "Discarding truncated FlexFEC03 packet.";
      uVar8 = 0x422;
    }
    else {
      uVar7 = FUN_00417e08();
      if ((uVar7 & 1) != 0) {
        return 0;
      }
      pcVar9 = 
      "FlexFEC03 packet protecting multiple media SSRCs. We do not support this, thus discarding packet."
      ;
      uVar8 = 0x389;
    }
  }
  else {
    uVar7 = FUN_00417e08();
    if ((uVar7 & 1) != 0) {
      return 0;
    }
    pcVar9 = 
    "FlexFEC03 packet with inflexible generator matrix. We do not support this, thus discarding packet."
    ;
    uVar8 = 0x351;
  }
LAB_0084e2cc:
  FUN_00623bb0(&DAT_001f4e98,"../../modules/rtp_rtcp/source/flexfec_03_header_reader_writer.cc",
               uVar8,pcVar9);
  return 0;
}


// ===== 0084e454  FUN_0084e454 =====

ulong FUN_0084e454(ulong *param_1)

{
  ulong uVar1;
  
  uVar1 = (*param_1 & 0xff00ff00ff00ff00) >> 8 | (*param_1 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  return uVar1 >> 0x20 | uVar1 << 0x20;
}


// ===== 0084e464  FUN_0084e464 =====

void FUN_0084e464(undefined8 *param_1)

{
  FUN_0084e010(param_1,0x30,0x30,0x20);
  *param_1 = &PTR_thunk_FUN_0084e028_00d3a4c8;
  return;
}


// ===== 0084e4a4  thunk_FUN_0084e028 =====

void thunk_FUN_0084e028(void)

{
  FUN_0084e028();
  return;
}


// ===== 0084e4ac  FUN_0084e4ac =====

void FUN_0084e4ac(void *param_1)

{
  FUN_0084e028();
  operator_delete(param_1);
  return;
}


// ===== 0084e4dc  FUN_0084e4dc =====

undefined8 FUN_0084e4dc(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 6) {
    if ((*(byte *)(param_2 + 5) & 3) == 0) {
      return 6;
    }
  }
  else if (param_3 == 2) {
    uVar1 = 2;
    if ((*(byte *)(param_2 + 1) & 1) != 0) {
      uVar1 = 6;
    }
    return uVar1;
  }
  return 0xe;
}


// ===== 0084e524  FUN_0084e524 =====

undefined8 FUN_0084e524(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x18;
  if (6 < param_2) {
    uVar1 = 0x20;
  }
  uVar2 = 0x14;
  if (2 < param_2) {
    uVar2 = uVar1;
  }
  return uVar2;
}


// ===== 0084e548  FUN_0084e548 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0084e548(undefined8 param_1,undefined4 *param_2,long param_3,long param_4)

{
  byte *pbVar1;
  long lVar2;
  undefined4 uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  undefined2 uVar9;
  byte *pbVar10;
  byte bVar11;
  byte bVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  if (param_3 == 1) {
    pbVar1 = *(byte **)(param_2 + 2);
    lVar2 = *(long *)(param_2 + 4);
    uVar3 = *param_2;
    pbVar10 = *(byte **)(param_4 + 8);
    uVar9 = *(undefined2 *)(param_2 + 1);
    if (pbVar10 != (byte *)0x0) {
      FUN_007b5788((undefined8 *)(param_4 + 8),*(long *)(pbVar10 + 8) - *(long *)(param_4 + 0x10));
      pbVar10 = (byte *)(*(long *)(*(long *)(param_4 + 8) + 0x10) + *(long *)(param_4 + 0x10));
    }
    auVar14 = _DAT_001f3910;
    auVar13._4_4_ = uVar3;
    auVar13._0_4_ = uVar3;
    auVar13._8_4_ = uVar3;
    auVar13._12_4_ = uVar3;
    pbVar10[0x10] = (byte)((ushort)uVar9 >> 8);
    auVar14 = NEON_ushl(auVar13,auVar14,4);
    *pbVar10 = *pbVar10 & 0x3f;
    pbVar10[0x11] = (byte)uVar9;
    *(ulong *)(pbVar10 + 8) =
         CONCAT44(CONCAT13(auVar14[0xc],CONCAT12(auVar14[8],CONCAT11(auVar14[4],auVar14[0]))),1);
    if (lVar2 == 2) {
      bVar4 = *pbVar1;
      bVar12 = pbVar1[1];
      bVar5 = bVar4 >> 1;
      pbVar10[0x12] = bVar5;
      pbVar10[0x13] = (byte)(CONCAT11(bVar4,bVar12) >> 1);
      if ((pbVar1[1] & 1) == 0) {
        pbVar10[0x12] = bVar5 | 0x80;
      }
      else {
        pbVar10[0x14] = 0xc0;
        pbVar10[0x15] = 0;
        pbVar10[0x16] = 0;
        pbVar10[0x17] = 0;
      }
    }
    else if (lVar2 == 6) {
      bVar4 = pbVar1[3];
      bVar12 = *pbVar1;
      bVar5 = pbVar1[1];
      bVar6 = pbVar1[2];
      bVar7 = pbVar1[4];
      bVar8 = pbVar1[5];
      bVar11 = bVar6 >> 2;
      pbVar10[0x12] = bVar12 >> 1;
      pbVar10[0x13] = (byte)(CONCAT11(bVar12,bVar5) >> 1);
      pbVar10[0x14] = bVar11;
      pbVar10[0x15] = (byte)(((uint)bVar4 << 0x10 | (uint)bVar6 << 0x18) >> 0x12);
      pbVar10[0x16] = (byte)(((uint)bVar4 << 0x10 | (uint)bVar7 << 8) >> 10);
      pbVar10[0x17] = (byte)(CONCAT11(bVar7,bVar8) >> 2);
      if ((pbVar1[1] & 1) != 0) {
        bVar11 = bVar11 | 0x40;
        pbVar10[0x14] = bVar11;
      }
      bVar4 = pbVar1[5];
      if ((bVar4 & 3) == 0) {
        pbVar10[0x14] = bVar11 | 0x80;
      }
      else {
        bVar12 = 0x80;
        if ((bVar4 & 2) != 0) {
          bVar12 = 0xc0;
        }
        pbVar10[0x18] = 0;
        pbVar10[0x19] = 0;
        pbVar10[0x1a] = 0;
        pbVar10[0x1b] = 0;
        pbVar10[0x1c] = 0;
        pbVar10[0x1d] = 0;
        pbVar10[0x1e] = 0;
        pbVar10[0x1f] = 0;
        pbVar10[0x18] = bVar12;
        if ((bVar4 & 1) != 0) {
          pbVar10[0x18] = bVar12 | 0x20;
        }
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../modules/rtp_rtcp/source/flexfec_03_header_reader_writer.cc",0xfe,
               "protected_streams.size() == 1",&DAT_001fbca2,param_3,1);
}


// ===== 0084e710  FUN_0084e710 =====

void FUN_0084e710(ulong *param_1,ulong *param_2,ulong param_3)

{
  bool bVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  puVar4 = param_1 + 1;
  if ((*param_1 & 1) == 0) {
    uVar5 = 4;
    if (param_3 < 5) goto LAB_0084e74c;
LAB_0084e7a4:
    uVar5 = uVar5 * 2;
    if (uVar5 < param_3 || uVar5 - param_3 == 0) {
      uVar5 = param_3;
    }
    if (0xaaaaaaaaaaaaaaa < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    puVar2 = (ulong *)operator_new(uVar5 * 0x18);
    uVar3 = param_3;
    puVar4 = puVar2;
  }
  else {
    puVar4 = (ulong *)param_1[1];
    uVar5 = param_1[2];
    if (uVar5 < param_3) goto LAB_0084e7a4;
LAB_0084e74c:
    uVar6 = *param_1 >> 1;
    puVar2 = puVar4 + uVar6 * 3;
    bVar1 = uVar6 <= param_3;
    uVar5 = param_3;
    if (bVar1) {
      uVar5 = uVar6;
    }
    uVar3 = 0;
    if (bVar1) {
      uVar3 = param_3 - uVar6;
    }
    if (!bVar1 || param_3 - uVar6 == 0) {
      puVar2 = (ulong *)0x0;
    }
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      uVar8 = param_2[1];
      uVar7 = *param_2;
      puVar4[2] = param_2[2];
      puVar4[1] = uVar8;
      *puVar4 = uVar7;
      puVar4 = puVar4 + 3;
      param_2 = param_2 + 3;
    }
    if (param_3 <= uVar6) {
      uVar3 = *param_1;
      goto LAB_0084e820;
    }
    uVar5 = 0;
    puVar4 = (ulong *)0x0;
  }
  do {
    if (puVar2 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    uVar7 = param_2[1];
    uVar6 = *param_2;
    uVar3 = uVar3 - 1;
    puVar2[2] = param_2[2];
    puVar2[1] = uVar7;
    *puVar2 = uVar6;
    puVar2 = puVar2 + 3;
    param_2 = param_2 + 3;
  } while (uVar3 != 0);
  uVar3 = *param_1;
  if (puVar4 != (ulong *)0x0) {
    if ((uVar3 & 1) != 0) {
      operator_delete((void *)param_1[1]);
      uVar3 = *param_1;
    }
    uVar3 = uVar3 | 1;
    param_1[1] = (ulong)puVar4;
    param_1[2] = uVar5;
  }
LAB_0084e820:
  *param_1 = uVar3 & 1 | param_3 << 1;
  return;
}


// ===== 0084e858  FUN_0084e858 =====

void FUN_0084e858(undefined8 *param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  
  if ((param_2 == 0) || (puVar1 = &DAT_0021f32c, (int)(uint)DAT_0021f32c < param_3)) {
    puVar1 = &DAT_0021f611;
  }
  *param_1 = puVar1;
  return;
}


// ===== 0084e884  FUN_0084e884 =====

void FUN_0084e884(void)

{
  return;
}


// ===== 0084e88c  FUN_0084e88c =====

undefined1  [16] FUN_0084e88c(long *param_1,uint param_2,int param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  byte bVar15;
  byte bVar16;
  byte bVar17;
  long lVar18;
  int iVar19;
  ulong uVar20;
  byte *pbVar21;
  uint uVar23;
  ulong uVar24;
  int iVar25;
  ulong uVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  undefined1 auVar35 [16];
  byte *pbVar22;
  
  if ((int)param_2 < 0xd) {
    iVar19 = param_2 - 1;
    uVar20 = (ulong)(param_3 - 1U);
    pbVar21 = (byte *)(*param_1 + 1);
    if (iVar19 < 1) {
      uVar24 = 2;
    }
    else {
      uVar24 = 2;
      iVar25 = 0x10;
      pbVar22 = pbVar21;
      do {
        pbVar21 = pbVar22 + 1;
        uVar26 = (ulong)*pbVar22;
        uVar23 = 6;
        if (iVar25 != 0) {
          uVar23 = (uint)uVar24;
        }
        uVar24 = (ulong)uVar23;
        if (uVar26 != 0) {
          auVar13._8_8_ = 0;
          auVar13._0_8_ = uVar26 - 1;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = uVar26 - 2;
          pbVar21 = pbVar21 + (((ulong)((long)(int)(uVar26 - 1) * (long)(int)(uVar26 - 2)) >> 1 |
                               SUB168(auVar13 * auVar14,8) << 0x3f) + uVar26 * 2 + -1) * uVar24;
        }
        iVar19 = iVar19 + -1;
        iVar25 = iVar25 + -1;
        pbVar22 = pbVar21;
      } while (iVar19 != 0);
    }
    uVar23 = (uint)uVar24;
    pbVar21 = pbVar21 + 1;
    if (0 < (int)(param_3 - 1U)) {
      do {
        pbVar21 = pbVar21 + (int)uVar24;
        uVar20 = uVar20 - 1;
        uVar24 = (ulong)((int)uVar24 + uVar23);
      } while (uVar20 != 0);
    }
  }
  else {
    uVar23 = 6;
    if (param_2 < 0x11) {
      uVar23 = 2;
    }
    if (0 < param_3) {
      iVar25 = 0;
      iVar19 = 0;
      uVar20 = (ulong)param_2;
      do {
        lVar18 = 0;
        iVar1 = iVar25;
        do {
          iVar10 = 0;
          if (param_3 != 0) {
            iVar10 = (int)lVar18 / param_3;
          }
          lVar2 = lVar18 + 1;
          lVar3 = lVar18 + 2;
          lVar4 = lVar18 + 3;
          lVar5 = lVar18 + 4;
          lVar6 = lVar18 + 5;
          lVar7 = lVar18 + 6;
          iVar11 = 0;
          iVar30 = (int)lVar2;
          if (param_3 != 0) {
            iVar11 = iVar30 / param_3;
          }
          iVar34 = 0;
          iVar31 = (int)lVar3;
          if (param_3 != 0) {
            iVar34 = iVar31 / param_3;
          }
          iVar12 = 0;
          iVar32 = (int)lVar4;
          if (param_3 != 0) {
            iVar12 = iVar32 / param_3;
          }
          bVar27 = 0x80;
          if ((int)lVar18 - iVar10 * param_3 != iVar19 || (long)uVar20 <= lVar18) {
            bVar27 = 0;
          }
          lVar8 = lVar18 + 7;
          lVar18 = lVar18 + 8;
          iVar10 = 0;
          iVar33 = (int)lVar5;
          if (param_3 != 0) {
            iVar10 = iVar33 / param_3;
          }
          bVar28 = 0x40;
          if (iVar30 - iVar11 * param_3 != iVar19 || (long)uVar20 <= lVar2) {
            bVar28 = 0;
          }
          iVar11 = 0;
          iVar30 = (int)lVar6;
          if (param_3 != 0) {
            iVar11 = iVar30 / param_3;
          }
          bVar29 = 0x20;
          if (iVar31 - iVar34 * param_3 != iVar19 || (long)uVar20 <= lVar3) {
            bVar29 = 0;
          }
          bVar15 = 0x10;
          if (iVar32 - iVar12 * param_3 != iVar19 || (long)uVar20 <= lVar4) {
            bVar15 = 0;
          }
          bVar16 = 8;
          if (iVar33 - iVar10 * param_3 != iVar19 || (long)uVar20 <= lVar5) {
            bVar16 = 0;
          }
          iVar10 = 0;
          iVar34 = (int)lVar7;
          if (param_3 != 0) {
            iVar10 = iVar34 / param_3;
          }
          bVar17 = 4;
          if (iVar30 - iVar11 * param_3 != iVar19 || (long)uVar20 <= lVar6) {
            bVar17 = 0;
          }
          iVar11 = 0;
          iVar30 = (int)lVar8;
          if (param_3 != 0) {
            iVar11 = iVar30 / param_3;
          }
          uVar9 = 2;
          if (iVar34 - iVar10 * param_3 != iVar19 || (long)uVar20 <= lVar7) {
            uVar9 = 0;
          }
          *(byte *)((long)param_1 + (long)iVar1 + 8) =
               bVar28 | bVar27 | bVar29 | bVar15 | bVar16 | bVar17 | (byte)uVar9 |
               (lVar8 < (long)uVar20 && iVar30 - iVar11 * param_3 == iVar19);
          iVar1 = iVar1 + 1;
        } while ((ulong)uVar23 << 3 != lVar18);
        iVar19 = iVar19 + 1;
        iVar25 = iVar25 + uVar23;
      } while (iVar19 != param_3);
    }
    pbVar21 = (byte *)(param_1 + 1);
  }
  auVar35._8_8_ = (long)(int)(uVar23 * param_3);
  pbVar22 = (byte *)0x0;
  if (uVar23 * param_3 != 0) {
    pbVar22 = pbVar21;
  }
  auVar35._0_8_ = pbVar22;
  return auVar35;
}


// ===== 0084eac8  FUN_0084eac8 =====

undefined8 FUN_0084eac8(ulong param_1)

{
  undefined8 uVar1;
  
  uVar1 = 6;
  if (param_1 < 0x11) {
    uVar1 = 2;
  }
  return uVar1;
}


// ===== 0084eae0  FUN_0084eae0 =====

void FUN_0084eae0(int param_1,int param_2,uint param_3,int param_4,void *param_5,undefined8 param_6)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar2 = param_3;
  if ((int)((float)param_2 / 2.0) <= (int)param_3) {
    uVar2 = (int)((float)param_2 / 2.0);
  }
  uVar1 = 0;
  if ((param_1 == param_3 * 2 || (int)(param_1 + param_3 * -2) < 0 != SBORROW4(param_1,param_3 * 2))
      || param_2 != 1) {
    uVar1 = uVar2;
  }
  param_2 = param_2 - uVar1;
  if (0 < (int)uVar1) {
    iVar4 = 2;
    if (0x10 < param_3) {
      iVar4 = 6;
    }
    pvVar3 = (void *)FUN_0084e88c(param_6,param_3,uVar1);
    if (param_4 == iVar4) {
      memcpy(param_5,pvVar3,(long)(int)(uVar1 * param_4));
    }
    else {
      iVar5 = 0;
      iVar6 = 5;
      uVar2 = uVar1;
      do {
        *(undefined1 *)((long)param_5 + (long)(iVar6 + -5)) =
             *(undefined1 *)((long)pvVar3 + (long)iVar5);
        *(undefined1 *)((long)param_5 + (long)(iVar6 + -4)) =
             ((undefined1 *)((long)pvVar3 + (long)iVar5))[1];
        if (0x10 < param_3) {
          *(undefined1 *)((long)param_5 + (long)(iVar6 + -3)) =
               *(undefined1 *)((long)pvVar3 + (long)(iVar5 + 2));
          *(undefined1 *)((long)param_5 + (long)(iVar6 + -2)) =
               *(undefined1 *)((long)pvVar3 + (long)(iVar5 + 3));
          *(undefined1 *)((long)param_5 + (long)(iVar6 + -1)) =
               *(undefined1 *)((long)pvVar3 + (long)(iVar5 + 4));
          *(undefined1 *)((long)param_5 + (long)iVar6) =
               *(undefined1 *)((long)pvVar3 + (long)(iVar5 + 5));
        }
        uVar2 = uVar2 - 1;
        iVar6 = iVar6 + param_4;
        iVar5 = iVar5 + iVar4;
      } while (uVar2 != 0);
    }
  }
  if (0 < param_2) {
    pvVar3 = (void *)FUN_0084e88c(param_6,param_1,param_2);
    memcpy((void *)((long)param_5 + (long)(int)(uVar1 * param_4)),pvVar3,(long)(param_2 * param_4));
    return;
  }
  return;
}


// ===== 0084ec60  FUN_0084ec60 =====

void FUN_0084ec60(uint param_1,undefined4 param_2,undefined8 param_3,ulong param_4,
                 undefined8 param_5,void *param_6)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  
  if (((int)param_3 != 0) && ((param_4 & 1) != 0)) {
    uVar1 = 6;
    if (param_1 < 0x11) {
      uVar1 = 2;
    }
    FUN_0084eae0(param_1,param_2,param_3,uVar1,param_6);
    return;
  }
  auVar2 = FUN_0084e88c(param_5,param_1,param_2);
  memcpy(param_6,auVar2._0_8_,auVar2._8_8_);
  return;
}


// ===== 0084ece4  FUN_0084ece4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0084ece4(uint param_1,long param_2,int param_3,uint param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined1 (*pauVar11) [16];
  int iVar12;
  long lVar13;
  undefined1 uVar14;
  undefined4 uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  
  auVar6 = _DAT_001f45d0;
  auVar5 = _DAT_001f3040;
  auVar4 = _DAT_001f2b30;
  auVar16 = _DAT_001f25b0;
  auVar17 = _DAT_001f25a0;
  uVar9 = param_4 - 1;
  if ((int)param_4 < 1) {
    return;
  }
  uVar1 = param_5 + 7;
  if (-1 < (int)param_5) {
    uVar1 = param_5;
  }
  iVar2 = (int)uVar1 >> 3;
  uVar1 = ((uVar1 & 0xfffffff8) - param_5) + 7;
  if ((int)param_1 <= (int)uVar1) {
    uVar1 = param_1;
  }
  if (param_4 < 4) {
    uVar7 = 0;
    uVar3 = 0;
  }
  else {
    uVar8 = 0;
    uVar7 = 0;
    uVar3 = 0;
    if ((((((uVar9 ^ 0xffffffff) & 0xffff) != 0) &&
         (uVar7 = uVar8, uVar3 = uVar8, uVar9 >> 0x10 == 0)) && (param_3 == 1)) &&
       ((iVar2 <= (int)(iVar2 + uVar9) &&
        (pauVar11 = (undefined1 (*) [16])(param_2 + iVar2),
        pauVar11 <= (undefined1 (*) [16])(*pauVar11 + uVar9))))) {
      if (param_4 < 0x10) {
        uVar9 = 0;
      }
      else {
        uVar7 = param_4 & 0x1fff0;
        uVar9 = param_4 & 0x1fff0;
        do {
          auVar22 = *pauVar11;
          uVar9 = uVar9 - 0x10;
          auVar19 = a64_TBL(ZEXT816(0),auVar22,auVar4);
          auVar20 = a64_TBL(ZEXT816(0),auVar22,auVar5);
          auVar21 = a64_TBL(ZEXT816(0),auVar22,auVar6);
          auVar18 = a64_TBL(ZEXT816(0),auVar22,auVar17);
          auVar22._4_4_ = uVar1;
          auVar22._0_4_ = uVar1;
          auVar22._8_4_ = uVar1;
          auVar22._12_4_ = uVar1;
          auVar23 = NEON_ushl(auVar19,auVar22,4);
          auVar19._4_4_ = uVar1;
          auVar19._0_4_ = uVar1;
          auVar19._8_4_ = uVar1;
          auVar19._12_4_ = uVar1;
          auVar19 = NEON_ushl(auVar20,auVar19,4);
          auVar20._4_4_ = uVar1;
          auVar20._0_4_ = uVar1;
          auVar20._8_4_ = uVar1;
          auVar20._12_4_ = uVar1;
          auVar22 = NEON_ushl(auVar21,auVar20,4);
          auVar21._4_4_ = uVar1;
          auVar21._0_4_ = uVar1;
          auVar21._8_4_ = uVar1;
          auVar21._12_4_ = uVar1;
          auVar20 = NEON_ushl(auVar18,auVar21,4);
          auVar22 = a64_TBL(ZEXT816(0),auVar22,auVar19,auVar23,auVar20,auVar16);
          *(long *)(*pauVar11 + 8) = auVar22._8_8_;
          *(long *)*pauVar11 = auVar22._0_8_;
          pauVar11 = pauVar11 + 1;
        } while (uVar9 != 0);
        if (param_4 == uVar7) {
          return;
        }
        uVar9 = uVar7;
        uVar3 = uVar7;
        if ((param_4 & 0xc) == 0) goto LAB_0084ed24;
      }
      uVar7 = param_4 & 0x1fffc;
      iVar10 = uVar9 - uVar7;
      iVar12 = uVar9 + iVar2;
      do {
        lVar13 = (long)iVar12;
        iVar10 = iVar10 + 4;
        iVar12 = iVar12 + 4;
        uVar15 = *(undefined4 *)(param_2 + lVar13);
        uVar14 = (undefined1)((uint)uVar15 >> 8);
        auVar16._6_2_ = 0;
        auVar16._0_6_ =
             (uint6)CONCAT14(uVar14,(uint)CONCAT12(uVar14,(ushort)(byte)uVar15)) & 0xffff0000ffff;
        auVar16[8] = (char)((uint)uVar15 >> 0x10);
        auVar16._9_3_ = 0;
        auVar16[0xc] = (char)((uint)uVar15 >> 0x18);
        auVar16._13_3_ = 0;
        auVar17._4_4_ = uVar1;
        auVar17._0_4_ = uVar1;
        auVar17._8_4_ = uVar1;
        auVar17._12_4_ = uVar1;
        auVar17 = NEON_ushl(auVar16,auVar17,4);
        *(uint *)(param_2 + lVar13) =
             CONCAT13(auVar17[0xc],CONCAT12(auVar17[8],CONCAT11(auVar17[4],auVar17[0])));
      } while (iVar10 != 0);
      uVar3 = uVar7;
      if (param_4 == uVar7) {
        return;
      }
    }
  }
LAB_0084ed24:
  do {
    iVar10 = iVar2 + uVar7 * param_3;
    uVar7 = uVar3 + 1 & 0xffff;
    *(char *)(param_2 + iVar10) = *(char *)(param_2 + iVar10) << (ulong)(uVar1 & 0x1f);
    uVar3 = uVar3 + 1;
  } while (uVar7 < param_4);
  return;
}


// ===== 0084ee54  FUN_0084ee54 =====

void FUN_0084ee54(long param_1,int param_2,long param_3,int param_4,uint param_5,uint param_6,
                 int param_7)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined8 *puVar11;
  int iVar12;
  ulong uVar13;
  int iVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  undefined4 uVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  undefined8 uVar26;
  byte bVar33;
  undefined4 uVar34;
  undefined8 uVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined8 uVar38;
  undefined8 uVar39;
  
  if ((int)(param_6 + param_2 * -8) < 0 == SBORROW4(param_6,param_2 * 8)) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../modules/rtp_rtcp/source/forward_error_correction_internal.cc",0x1f9,
                 "new_bit_index < 8 * new_mask_bytes",&DAT_001fbedc,param_6,param_2 * 8);
  }
  uVar9 = param_5 - 1;
  uVar13 = (ulong)uVar9;
  if ((int)param_5 < 1) {
    return;
  }
  uVar7 = param_6 + 7;
  if (-1 < (int)param_6) {
    uVar7 = param_6;
  }
  iVar4 = param_7 + 7;
  if (-1 < param_7) {
    iVar4 = param_7;
  }
  iVar3 = (int)uVar7 >> 3;
  bVar6 = (param_6 & 0x80000007) != 7;
  iVar4 = iVar4 >> 3;
  if (3 < param_5) {
    uVar8 = 0;
    uVar7 = 0;
    uVar5 = 0;
    if ((((((uVar9 ^ 0xffffffff) & 0xffff) == 0) ||
         (uVar7 = uVar8, uVar5 = uVar8, uVar9 >> 0x10 != 0)) || (param_4 != 1)) ||
       ((param_2 != 1 || ((int)(iVar3 + uVar9) < iVar3)))) goto LAB_0084eeb0;
    puVar11 = (undefined8 *)(param_1 + iVar3);
    if (((undefined8 *)((long)puVar11 + uVar13) < puVar11) || ((int)(iVar4 + uVar9) < iVar4))
    goto LAB_0084eeb0;
    puVar15 = (undefined8 *)(param_3 + iVar4);
    if ((undefined8 *)((long)puVar15 + uVar13) < puVar15) goto LAB_0084eeb0;
    uVar1 = param_3 + iVar4;
    uVar2 = param_1 + iVar3;
    if ((uVar1 + uVar13 + 1 <= uVar2) || (uVar2 + uVar13 + 1 <= uVar1)) {
      if (param_5 < 0x10) {
        uVar9 = 0;
      }
      else {
        uVar7 = param_5 & 0x7ffffff0;
        uVar9 = param_5 & 0x7ffffff0;
        do {
          uVar26 = puVar15[1];
          uVar35 = *puVar15;
          uVar39 = puVar11[1];
          uVar38 = *puVar11;
          uVar9 = uVar9 - 0x10;
          bVar18 = (byte)((ulong)uVar35 >> 8);
          bVar19 = (byte)((ulong)uVar35 >> 0x10);
          bVar20 = (byte)((ulong)uVar35 >> 0x18);
          bVar22 = (byte)((ulong)uVar35 >> 0x20);
          bVar23 = (byte)((ulong)uVar35 >> 0x28);
          bVar24 = (byte)((ulong)uVar35 >> 0x30);
          bVar25 = (byte)((ulong)uVar35 >> 0x38);
          bVar27 = (byte)((ulong)uVar26 >> 8);
          bVar28 = (byte)((ulong)uVar26 >> 0x10);
          bVar29 = (byte)((ulong)uVar26 >> 0x18);
          bVar30 = (byte)((ulong)uVar26 >> 0x20);
          bVar31 = (byte)((ulong)uVar26 >> 0x28);
          bVar32 = (byte)((ulong)uVar26 >> 0x30);
          bVar33 = (byte)((ulong)uVar26 >> 0x38);
          auVar36[0] = (byte)uVar38 | (byte)uVar35 >> 7;
          auVar36[1] = (byte)((ulong)uVar38 >> 8) | bVar18 >> 7;
          auVar36[2] = (byte)((ulong)uVar38 >> 0x10) | bVar19 >> 7;
          auVar36[3] = (byte)((ulong)uVar38 >> 0x18) | bVar20 >> 7;
          auVar36[4] = (byte)((ulong)uVar38 >> 0x20) | bVar22 >> 7;
          auVar36[5] = (byte)((ulong)uVar38 >> 0x28) | bVar23 >> 7;
          auVar36[6] = (byte)((ulong)uVar38 >> 0x30) | bVar24 >> 7;
          auVar36[7] = (byte)((ulong)uVar38 >> 0x38) | bVar25 >> 7;
          auVar36[8] = (byte)uVar39 | (byte)uVar26 >> 7;
          auVar36[9] = (byte)((ulong)uVar39 >> 8) | bVar27 >> 7;
          auVar36[10] = (byte)((ulong)uVar39 >> 0x10) | bVar28 >> 7;
          auVar36[0xb] = (byte)((ulong)uVar39 >> 0x18) | bVar29 >> 7;
          auVar36[0xc] = (byte)((ulong)uVar39 >> 0x20) | bVar30 >> 7;
          auVar36[0xd] = (byte)((ulong)uVar39 >> 0x28) | bVar31 >> 7;
          auVar36[0xe] = (byte)((ulong)uVar39 >> 0x30) | bVar32 >> 7;
          auVar36[0xf] = (byte)((ulong)uVar39 >> 0x38) | bVar33 >> 7;
          puVar15[1] = CONCAT17(bVar33 * '\x02',
                                CONCAT16(bVar32 * '\x02',
                                         CONCAT15(bVar31 * '\x02',
                                                  CONCAT14(bVar30 * '\x02',
                                                           CONCAT13(bVar29 * '\x02',
                                                                    CONCAT12(bVar28 * '\x02',
                                                                             CONCAT11(bVar27 * 
                                                  '\x02',(byte)uVar26 * '\x02')))))));
          *puVar15 = CONCAT17(bVar25 * '\x02',
                              CONCAT16(bVar24 * '\x02',
                                       CONCAT15(bVar23 * '\x02',
                                                CONCAT14(bVar22 * '\x02',
                                                         CONCAT13(bVar20 * '\x02',
                                                                  CONCAT12(bVar19 * '\x02',
                                                                           CONCAT11(bVar18 * '\x02',
                                                                                    (byte)uVar35 *
                                                                                    '\x02')))))));
          auVar37[1] = bVar6;
          auVar37[0] = bVar6;
          auVar37[2] = bVar6;
          auVar37[3] = bVar6;
          auVar37[4] = bVar6;
          auVar37[5] = bVar6;
          auVar37[6] = bVar6;
          auVar37[7] = bVar6;
          auVar37[8] = bVar6;
          auVar37[9] = bVar6;
          auVar37[10] = bVar6;
          auVar37[0xb] = bVar6;
          auVar37[0xc] = bVar6;
          auVar37[0xd] = bVar6;
          auVar37[0xe] = bVar6;
          auVar37[0xf] = bVar6;
          auVar37 = NEON_ushl(auVar36,auVar37,1);
          puVar11[1] = auVar37._8_8_;
          *puVar11 = auVar37._0_8_;
          puVar11 = puVar11 + 2;
          puVar15 = puVar15 + 2;
        } while (uVar9 != 0);
        if (param_5 == uVar7) {
          return;
        }
        uVar9 = uVar7;
        uVar5 = uVar7;
        if ((param_5 & 0xc) == 0) goto LAB_0084eeb0;
      }
      uVar7 = param_5 & 0x7ffffffc;
      iVar10 = uVar9 - uVar7;
      iVar12 = uVar9 + iVar4;
      iVar14 = uVar9 + iVar3;
      do {
        lVar16 = (long)iVar12;
        lVar17 = (long)iVar14;
        iVar10 = iVar10 + 4;
        iVar12 = iVar12 + 4;
        iVar14 = iVar14 + 4;
        uVar21 = *(undefined4 *)(param_3 + lVar16);
        uVar34 = *(undefined4 *)(param_1 + lVar17);
        bVar18 = (byte)((uint)uVar21 >> 8);
        bVar19 = (byte)((uint)uVar21 >> 0x10);
        bVar20 = (byte)((uint)uVar21 >> 0x18);
        uVar35 = NEON_ushl((ulong)CONCAT16((byte)((uint)uVar34 >> 0x18) | bVar20 >> 7,
                                           (uint6)CONCAT14((byte)((uint)uVar34 >> 0x10) |
                                                           bVar19 >> 7,
                                                           (uint)CONCAT12((byte)((uint)uVar34 >> 8)
                                                                          | bVar18 >> 7,
                                                                          (ushort)(byte)((byte)
                                                  uVar34 | (byte)uVar21 >> 7)))),
                           (ulong)CONCAT16(bVar6,(uint6)CONCAT14(bVar6,(uint)CONCAT12(bVar6,(ushort)
                                                  bVar6))),2);
        *(uint *)(param_3 + lVar16) =
             CONCAT13(bVar20 * '\x02',
                      CONCAT12(bVar19 * '\x02',CONCAT11(bVar18 * '\x02',(byte)uVar21 * '\x02')));
        *(uint *)(param_1 + lVar17) =
             CONCAT13((char)((ulong)uVar35 >> 0x30),
                      CONCAT12((char)((ulong)uVar35 >> 0x20),
                               CONCAT11((char)((ulong)uVar35 >> 0x10),(char)uVar35)));
      } while (iVar10 != 0);
      uVar5 = uVar7;
      if (param_5 == uVar7) {
        return;
      }
      goto LAB_0084eeb0;
    }
  }
  uVar7 = 0;
  uVar5 = 0;
LAB_0084eeb0:
  do {
    iVar10 = iVar3 + uVar7 * param_2;
    iVar12 = iVar4 + uVar7 * param_4;
    *(byte *)(param_1 + iVar10) =
         (*(byte *)(param_1 + iVar10) | *(byte *)(param_3 + iVar12) >> 7) << (ulong)bVar6;
    uVar7 = uVar5 + 1 & 0xffff;
    *(char *)(param_3 + iVar12) = *(char *)(param_3 + iVar12) << 1;
    uVar5 = uVar5 + 1;
  } while (uVar7 < param_5);
  return;
}


// ===== 0084f06c  FUN_0084f06c =====

void FUN_0084f06c(long *param_1,undefined2 param_2,undefined2 param_3,byte param_4,
                 undefined4 param_5,long param_6,long param_7,undefined4 param_8,long param_9,
                 ushort *param_10,undefined1 param_11,undefined4 param_12,undefined4 param_13,
                 undefined1 param_14,undefined8 param_15,long param_16,undefined8 param_17,
                 long *param_18,long *param_19)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 local_70;
  long lStack_68;
  
  FUN_007bc7a4(param_1 + 1);
  puVar2 = PTR_DAT_00d52d48;
  param_1[0x31] = 0;
  *(undefined1 *)(param_1 + 0x37) = 1;
  param_1[0x38] = -1;
  *param_1 = (long)(puVar2 + 0x10);
  *(undefined1 *)(param_1 + 0x39) = 0;
  FUN_0085052c(param_1 + 0x3a);
  *(undefined4 *)(param_1 + 0x13b) = 0;
  param_1[0x13c] = -1;
  *param_1 = (long)&PTR_FUN_00d3a500;
  puVar4 = (undefined8 *)*param_19;
  param_1[0x13d] = (long)puVar4;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)();
  }
  FUN_007dcfa0(param_1 + 0x13e);
  *(undefined2 *)((long)param_1 + 0x11e4) = param_2;
  *(undefined2 *)((long)param_1 + 0x11e6) = param_3;
  param_1[0x23d] = param_7;
  param_1[0x23e] = 0;
  param_1[0x240] = 0;
  param_1[0x23f] = 0;
  *(undefined4 *)(param_1 + 0x241) = param_5;
  FUN_0084f4b8(param_1 + 0x13e,param_15);
  *(undefined4 *)(param_1 + 0x23c) = param_12;
  FUN_0084fc00(param_1 + 0x134,param_17);
  FUN_0085014c(param_1,param_1 + 0x13e);
  plVar6 = (long *)param_1[0x13d];
  *(undefined1 *)(param_1 + 0x39) = param_11;
  param_1[2] = param_9;
  *(undefined4 *)(param_1 + 0x14) = param_8;
  param_1[0x10] = param_1[0x155];
  param_1[0xf] = param_1[0x154];
  *(int *)(param_1 + 4) = (int)param_1[0x151];
  *(char *)(param_1 + 0x11) = (char)param_1[0x156];
  if (plVar6 != (long *)0x0) {
    (**(code **)*plVar6)(plVar6);
    (**(code **)*plVar6)(plVar6);
  }
  if ((long *)param_1[0x12] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x12] + 8))();
  }
  param_1[0x12] = (long)plVar6;
  lVar5 = (**(code **)(*plVar6 + 0x28))(plVar6);
  param_1[0x13] = lVar5;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))(plVar6);
  }
  *(uint *)(param_1 + 1) = (uint)*(ushort *)((long)param_1 + 0xa8c);
  *(uint *)((long)param_1 + 0xc) = (uint)*(ushort *)((long)param_1 + 0xa8e);
  if (*param_18 == 0) {
    if (((DAT_00d60290 & 1) == 0) && (iVar3 = FUN_0054fdd4(&DAT_00d60290), iVar3 != 0)) {
      DAT_00d60288 = (long *)operator_new(0x18);
      DAT_00d60288[1] = 0;
      DAT_00d60288[2] = 0;
      *DAT_00d60288 = 0;
      FUN_0054ff1c(&DAT_00d60290);
    }
    lVar5 = *DAT_00d60288;
    if (*param_18 == 0) {
      plVar6 = DAT_00d60288;
      if (((DAT_00d60290 & 1) == 0) &&
         (iVar3 = FUN_0054fdd4(&DAT_00d60290), plVar6 = DAT_00d60288, iVar3 != 0)) {
        DAT_00d60288 = (long *)operator_new(0x18);
        DAT_00d60288[1] = 0;
        DAT_00d60288[2] = 0;
        *DAT_00d60288 = 0;
        FUN_0054ff1c(&DAT_00d60290);
        plVar6 = DAT_00d60288;
      }
    }
    else {
      plVar6 = (long *)(*param_18 + 8);
    }
  }
  else {
    plVar6 = (long *)(*param_18 + 8);
    lVar5 = *plVar6;
  }
  if (lVar5 != plVar6[1]) {
    if (*param_18 == 0) {
      plVar6 = DAT_00d60288;
      if (((DAT_00d60290 & 1) == 0) &&
         (iVar3 = FUN_0054fdd4(&DAT_00d60290), plVar6 = DAT_00d60288, iVar3 != 0)) {
        DAT_00d60288 = (long *)operator_new(0x18);
        DAT_00d60288[1] = 0;
        DAT_00d60288[2] = 0;
        *DAT_00d60288 = 0;
        FUN_0054ff1c(&DAT_00d60290);
        plVar6 = DAT_00d60288;
      }
    }
    else {
      plVar6 = (long *)(*param_18 + 8);
    }
    lVar5 = *plVar6;
    if (param_1 + 0x23e != (long *)(lVar5 + 8)) {
      FUN_005e72f8(param_1 + 0x23e,*(long *)(lVar5 + 8),*(long *)(lVar5 + 0x10),
                   *(long *)(lVar5 + 0x10) - *(long *)(lVar5 + 8) >> 2);
    }
  }
  lVar5 = *param_18;
  *param_18 = 0;
  lStack_68 = param_1[0x27];
  param_1[0x27] = lVar5;
  local_70 = 0;
  FUN_0084ffb0(&lStack_68);
  FUN_0084ffb0(&local_70);
  *(undefined4 *)((long)param_1 + 0x24) = param_13;
  cVar1 = *(char *)((long)param_1 + 300);
  if (cVar1 == *(char *)(param_16 + 0x44)) {
    if (cVar1 != '\0') {
      FUN_00659b1c(param_1 + 0x1d,param_16);
    }
  }
  else if (cVar1 == '\0') {
    if (param_1 == (long *)0xffffffffffffff18) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    FUN_00659adc(param_1 + 0x1d,param_16);
    *(undefined1 *)((long)param_1 + 300) = 1;
  }
  else {
    *(undefined1 *)((long)param_1 + 300) = 0;
  }
  *(short *)(param_1 + 0x26) = (short)(int)param_1[0x162];
  *(undefined1 *)(param_1 + 5) = param_14;
  *(char *)((long)param_1 + 0x132) = (char)((uint)(int)param_1[0x162] >> 0x10);
  if ((char)param_10[6] != -1) {
    lVar5 = param_1[2];
    param_1[7] = lVar5 + (ulong)*param_10;
    param_1[8] = lVar5 + (ulong)param_10[1];
    param_1[9] = lVar5 + (ulong)param_10[2];
    param_1[10] = lVar5 + (ulong)param_10[3];
    param_1[0xb] = lVar5 + (ulong)param_10[4];
    param_1[0xc] = lVar5 + (ulong)param_10[5];
  }
  param_1[0xd] = param_6;
  param_1[0xe] = param_7;
  *(char *)(param_1 + 6) = (char)param_10[6];
  *(byte *)(param_1 + 0x37) = param_4 & 1;
  return;
}


// ===== 0084f4b8  FUN_0084f4b8 =====

undefined8 * FUN_0084f4b8(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  undefined1 uVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *local_30;
  undefined1 uStack_21;
  
  cVar2 = *(char *)(param_1 + 0x12);
  if (cVar2 == *(char *)(param_2 + 0x12)) {
    if (cVar2 != '\0') {
      uVar5 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar5;
      if (param_1 != param_2) {
        plVar1 = param_2 + 3;
        if ((param_2[2] & 1) != 0) {
          plVar1 = (long *)param_2[3];
        }
        FUN_0060adc4(param_1 + 2,plVar1,(long)(param_2[2] << 1) >> 2);
        plVar1 = param_2 + 9;
        if ((param_2[8] & 1) != 0) {
          plVar1 = (long *)param_2[9];
        }
        FUN_007dde24(param_1 + 8,plVar1,(long)(param_2[8] << 2) >> 3);
        plVar1 = param_2 + 0xf;
        if ((param_2[0xe] & 1) != 0) {
          plVar1 = (long *)param_2[0xf];
        }
        FUN_007d51b0(param_1 + 0xe,plVar1,(long)(param_2[0xe] << 1) >> 2);
      }
      param_1[0x11] = param_2[0x11];
    }
  }
  else if (cVar2 == '\0') {
    if (param_1 == (undefined8 *)0x0) goto LAB_0084f6b0;
    FUN_007dc984(param_1,param_2);
    *(undefined1 *)(param_1 + 0x12) = 1;
  }
  else {
    FUN_007dca64(param_1);
    *(undefined1 *)(param_1 + 0x12) = 0;
  }
  uVar5 = *(undefined8 *)((long)param_2 + 0xc5);
  uVar7 = param_2[0x18];
  uVar6 = param_2[0x17];
  uVar9 = param_2[0x14];
  uVar8 = param_2[0x13];
  uVar11 = param_2[0x16];
  uVar10 = param_2[0x15];
  cVar2 = *(char *)((long)param_1 + 0x11c);
  *(undefined8 *)((long)param_1 + 0xcd) = *(undefined8 *)((long)param_2 + 0xcd);
  *(undefined8 *)((long)param_1 + 0xc5) = uVar5;
  param_1[0x18] = uVar7;
  param_1[0x17] = uVar6;
  param_1[0x16] = uVar11;
  param_1[0x15] = uVar10;
  param_1[0x14] = uVar9;
  param_1[0x13] = uVar8;
  if (cVar2 == *(char *)((long)param_2 + 0x11c)) {
    if (cVar2 != '\0') {
      FUN_00659b1c(param_1 + 0x1b,param_2 + 0x1b);
    }
  }
  else if (cVar2 == '\0') {
    if (param_1 == (undefined8 *)0xffffffffffffff28) {
LAB_0084f6b0:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    FUN_00659adc(param_1 + 0x1b,param_2 + 0x1b);
    *(undefined1 *)((long)param_1 + 0x11c) = 1;
  }
  else {
    *(undefined1 *)((long)param_1 + 0x11c) = 0;
  }
  uVar3 = *(undefined1 *)((long)param_2 + 0x122);
  *(undefined2 *)(param_1 + 0x24) = *(undefined2 *)(param_2 + 0x24);
  *(undefined1 *)((long)param_1 + 0x122) = uVar3;
  bVar4 = *(byte *)(param_2 + 0xf2);
  if ((ulong)*(byte *)(param_1 + 0xf2) == 0xff) {
    if (bVar4 == 0xff) goto LAB_0084f674;
  }
  else if (bVar4 == 0xff) {
    (*(code *)(&PTR_FUN_00d3a528)[*(byte *)(param_1 + 0xf2)])(&uStack_21,param_1 + 0x25);
    *(undefined1 *)(param_1 + 0xf2) = 0xff;
    goto LAB_0084f674;
  }
  local_30 = param_1 + 0x25;
  (*(code *)(&PTR_FUN_00d3a550)[bVar4])(&local_30,param_1 + 0x25,param_2 + 0x25);
LAB_0084f674:
  uVar5 = *(undefined8 *)((long)param_2 + 0x7a1);
  uVar7 = param_2[0xf4];
  uVar6 = param_2[0xf3];
  *(undefined8 *)((long)param_1 + 0x7a9) = *(undefined8 *)((long)param_2 + 0x7a9);
  *(undefined8 *)((long)param_1 + 0x7a1) = uVar5;
  param_1[0xf4] = uVar7;
  param_1[0xf3] = uVar6;
  FUN_0084fc00(param_1 + 0xf7,param_2 + 0xf7);
  return param_1;
}


// ===== 0084f6c4  FUN_0084f6c4 =====

void FUN_0084f6c4(long *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  pvVar1 = (void *)param_1[0x23e];
  *param_1 = (long)&PTR_FUN_00d3a500;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[0x23f];
    uVar4 = (ulong)((long)pvVar2 + (-4 - ((long)pvVar2 << 0x3e))) >> 2;
    uVar3 = (ulong)(((long)pvVar1 - (long)pvVar2 << 0x3e) - ((long)pvVar1 - (long)pvVar2)) >> 2;
    if (uVar4 <= uVar3) {
      uVar3 = uVar4;
    }
    if ((1 < uVar3) && ((((int)pvVar1 - (int)pvVar2 | -(int)pvVar2) & 3U) == 0)) {
      uVar3 = uVar3 & 0x3ffffffffffffffe;
      pvVar2 = (void *)((long)pvVar2 + uVar3 * -4);
      do {
        uVar3 = uVar3 - 2;
      } while (uVar3 != 0);
    }
    while (pvVar2 != pvVar1) {
      pvVar2 = (void *)((long)pvVar2 + -4);
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    param_1[0x23f] = (long)pvVar1;
    operator_delete(pvVar1);
  }
  FUN_007dd190(param_1 + 0x13e);
  if ((long *)param_1[0x13d] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x13d] + 8))();
  }
  *param_1 = (long)(PTR_DAT_00d52d48 + 0x10);
  FUN_00850704(param_1 + 0x3a);
  FUN_007bca94(param_1 + 1);
  return;
}


// ===== 0084f7c0  FUN_0084f7c0 =====

void FUN_0084f7c0(void *param_1)

{
  FUN_0084f6c4();
  operator_delete(param_1);
  return;
}


// ===== 0084f7f0  FUN_0084f7f0 =====

undefined2 FUN_0084f7f0(long param_1)

{
  return *(undefined2 *)(param_1 + 0x11e4);
}


// ===== 0084f7fc  FUN_0084f7fc =====

undefined2 FUN_0084f7fc(long param_1)

{
  return *(undefined2 *)(param_1 + 0x11e6);
}


// ===== 0084f808  FUN_0084f808 =====

undefined4 FUN_0084f808(long param_1)

{
  return *(undefined4 *)(param_1 + 0x11e0);
}


// ===== 0084f814  FUN_0084f814 =====

undefined8 FUN_0084f814(long param_1)

{
  return *(undefined8 *)(param_1 + 0x11e8);
}


// ===== 0084f820  FUN_0084f820 =====

undefined8 FUN_0084f820(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1c0);
}


// ===== 0084f82c  FUN_0084f82c =====

bool FUN_0084f82c(long param_1)

{
  return 0 < *(int *)(param_1 + 0x1208);
}


// ===== 0084f840  FUN_0084f840 =====

long FUN_0084f840(long param_1)

{
  return param_1 + 0x9f0;
}


// ===== 0084f84c  FUN_0084f84c =====

void FUN_0084f84c(long param_1)

{
  FUN_007dcb7c(param_1 + 0x9f0);
  return;
}


// ===== 0084f858  FUN_0084f858 =====

void FUN_0084f858(long *param_1)

{
  byte bVar1;
  long lVar2;
  undefined1 uStack_1;
  
  lVar2 = *param_1;
  bVar1 = *(byte *)(lVar2 + 0x668);
  if (bVar1 != 0) {
    if (bVar1 != 0xff) {
      (*(code *)(&PTR_FUN_00d3a528)[bVar1])(&uStack_1,lVar2);
    }
    *(undefined1 *)(lVar2 + 0x668) = 0xff;
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *(undefined1 *)(lVar2 + 0x668) = 0;
  }
  return;
}


// ===== 0084f8c8  FUN_0084f8c8 =====

void FUN_0084f8c8(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uStack_21;
  
  puVar2 = (undefined8 *)*param_1;
  bVar1 = *(byte *)(puVar2 + 0xcd);
  if (bVar1 != 0xff) {
    if (bVar1 == 1) {
      uVar4 = param_3[1];
      uVar3 = *param_3;
      *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_3 + 2);
      param_2[1] = uVar4;
      *param_2 = uVar3;
      return;
    }
    (*(code *)(&PTR_FUN_00d3a528)[bVar1])(&uStack_21,puVar2);
  }
  *(undefined1 *)(puVar2 + 0xcd) = 0xff;
  if (puVar2 != (undefined8 *)0x0) {
    uVar4 = param_3[1];
    uVar3 = *param_3;
    *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_3 + 2);
    puVar2[1] = uVar4;
    *puVar2 = uVar3;
    *(undefined1 *)(puVar2 + 0xcd) = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0084f970  FUN_0084f970 =====

void FUN_0084f970(undefined8 *param_1,void *param_2,void *param_3)

{
  byte bVar1;
  void *__dest;
  undefined1 uStack_21;
  
  __dest = (void *)*param_1;
  bVar1 = *(byte *)((long)__dest + 0x668);
  if (bVar1 != 0xff) {
    if (bVar1 == 2) {
      memcpy(param_2,param_3,0x668);
      return;
    }
    (*(code *)(&PTR_FUN_00d3a528)[bVar1])(&uStack_21,__dest);
  }
  *(undefined1 *)((long)__dest + 0x668) = 0xff;
  if (__dest != (void *)0x0) {
    memcpy(__dest,param_3,0x668);
    *(undefined1 *)((long)__dest + 0x668) = 2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0084fa24  FUN_0084fa24 =====

void FUN_0084fa24(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  void *__src;
  undefined4 uVar1;
  byte bVar2;
  ulong __n;
  void *__dest;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 uStack_51;
  
  puVar3 = (undefined8 *)*param_1;
  uVar4 = *param_3;
  bVar2 = *(byte *)(puVar3 + 0xcd);
  if (bVar2 == 3) {
    *param_2 = uVar4;
    if (param_2 != param_3) {
      FUN_007dda20(param_2 + 1,param_3[1],param_3[2],
                   ((long)(param_3[2] - param_3[1]) >> 2) * -0x5555555555555555);
    }
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  else {
    __src = (void *)param_3[1];
    __n = param_3[2] - (long)__src;
    if (__n == 0) {
      lVar5 = 0;
      __dest = (void *)0x0;
    }
    else {
      if (0x1555555555555555 < (ulong)(((long)__n >> 2) * -0x5555555555555555)) {
                    /* WARNING: Subroutine does not return */
        FUN_007dd920();
      }
      __dest = operator_new(__n);
      lVar5 = (long)__dest + __n;
      memcpy(__dest,__src,__n);
    }
    uVar1 = *(undefined4 *)(param_3 + 4);
    if (bVar2 != 0xff) {
      (*(code *)(&PTR_FUN_00d3a528)[bVar2])(&uStack_51,puVar3);
    }
    *(undefined1 *)(puVar3 + 0xcd) = 0xff;
    if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *puVar3 = uVar4;
    puVar3[1] = __dest;
    puVar3[2] = lVar5;
    puVar3[3] = lVar5;
    *(undefined4 *)(puVar3 + 4) = uVar1;
    *(undefined1 *)(puVar3 + 0xcd) = 3;
  }
  return;
}


// ===== 0084fb68  FUN_0084fb68 =====

void FUN_0084fb68(undefined8 *param_1,undefined2 *param_2,undefined2 *param_3)

{
  byte bVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  undefined1 uStack_21;
  
  puVar3 = (undefined2 *)*param_1;
  bVar1 = *(byte *)(puVar3 + 0x334);
  if (bVar1 != 0xff) {
    if (bVar1 == 4) {
      *param_2 = *param_3;
      return;
    }
    (*(code *)(&PTR_FUN_00d3a528)[bVar1])(&uStack_21,puVar3);
  }
  *(undefined1 *)(puVar3 + 0x334) = 0xff;
  if (puVar3 != (undefined2 *)0x0) {
    uVar2 = *param_3;
    *(undefined1 *)(puVar3 + 0x334) = 4;
    *puVar3 = uVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0084fc00  FUN_0084fc00 =====

void FUN_0084fc00(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  void *pvVar2;
  void *pvVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  cVar1 = *(char *)(param_1 + 6);
  if (cVar1 == *(char *)(param_2 + 6)) {
    if (cVar1 != '\0') {
      uVar7 = param_2[1];
      uVar4 = *param_2;
      param_1[2] = param_2[2];
      param_1[1] = uVar7;
      *param_1 = uVar4;
      if (param_1 != param_2) {
        FUN_0084fd88(param_1 + 3,param_2[3],param_2[4],(long)(param_2[4] - param_2[3]) >> 3);
        return;
      }
    }
  }
  else if (cVar1 == '\0') {
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    uVar8 = param_2[1];
    uVar7 = *param_2;
    uVar4 = param_2[2];
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[1] = uVar8;
    *param_1 = uVar7;
    param_1[2] = uVar4;
    param_1[3] = 0;
    pvVar2 = (void *)param_2[3];
    uVar5 = param_2[4] - (long)pvVar2;
    if (uVar5 != 0) {
      if ((long)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_007dd938();
      }
      pvVar3 = operator_new(uVar5);
      param_1[3] = pvVar3;
      param_1[4] = pvVar3;
      param_1[5] = (long)pvVar3 + uVar5;
      memcpy(pvVar3,pvVar2,uVar5);
      param_1[4] = (long)pvVar3 + uVar5;
    }
    *(undefined1 *)(param_1 + 6) = 1;
  }
  else {
    pvVar2 = (void *)param_1[3];
    if (pvVar2 != (void *)0x0) {
      pvVar3 = (void *)param_1[4];
      uVar6 = (ulong)((long)pvVar3 + (-8 - ((long)pvVar3 << 0x3d))) >> 3;
      uVar5 = (ulong)(((long)pvVar2 - (long)pvVar3 << 0x3d) - ((long)pvVar2 - (long)pvVar3)) >> 3;
      if (uVar6 <= uVar5) {
        uVar5 = uVar6;
      }
      if ((1 < uVar5) && ((((int)pvVar2 - (int)pvVar3 | -(int)pvVar3) & 7U) == 0)) {
        uVar5 = uVar5 & 0x1ffffffffffffffe;
        pvVar3 = (void *)((long)pvVar3 + uVar5 * -8);
        do {
          uVar5 = uVar5 - 2;
        } while (uVar5 != 0);
      }
      while (pvVar3 != pvVar2) {
        pvVar3 = (void *)((long)pvVar3 + -8);
        if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      param_1[4] = pvVar2;
      operator_delete(pvVar2);
    }
    *(undefined1 *)(param_1 + 6) = 0;
  }
  return;
}


// ===== 0084fd88  FUN_0084fd88 =====

void FUN_0084fd88(undefined8 *param_1,void *param_2,long param_3,ulong param_4)

{
  size_t __n;
  long lVar1;
  ulong uVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  size_t __n_00;
  void *pvVar6;
  
  uVar2 = param_1[2];
  pvVar6 = (void *)*param_1;
  if ((ulong)((long)(uVar2 - (long)pvVar6) >> 3) < param_4) {
    if (pvVar6 == (void *)0x0) {
LAB_0084ff2c:
      if (param_4 >> 0x3d == 0) {
        uVar5 = (long)uVar2 >> 2;
        if ((ulong)((long)uVar2 >> 2) <= param_4) {
          uVar5 = param_4;
        }
        if (0x7ffffffffffffff7 < uVar2) {
          uVar5 = 0x1fffffffffffffff;
        }
        if (uVar5 >> 0x3d == 0) {
          pvVar6 = operator_new(uVar5 * 8);
          *param_1 = pvVar6;
          param_1[1] = pvVar6;
          param_1[2] = (void *)((long)pvVar6 + uVar5 * 8);
          memcpy(pvVar6,param_2,param_3 - (long)param_2);
          lVar1 = (long)pvVar6 + (param_3 - (long)param_2);
          goto LAB_0084ff88;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_007dd938();
    }
    pvVar3 = (void *)param_1[1];
    uVar5 = (ulong)((long)pvVar3 + (-8 - ((long)pvVar3 << 0x3d))) >> 3;
    uVar2 = (ulong)(((long)pvVar6 - (long)pvVar3 << 0x3d) - ((long)pvVar6 - (long)pvVar3)) >> 3;
    if (uVar5 <= uVar2) {
      uVar2 = uVar5;
    }
    if ((1 < uVar2) && ((((int)pvVar6 - (int)pvVar3 | -(int)pvVar3) & 7U) == 0)) {
      uVar2 = uVar2 & 0x1ffffffffffffffe;
      pvVar3 = (void *)((long)pvVar3 + uVar2 * -8);
      do {
        uVar2 = uVar2 - 2;
      } while (uVar2 != 0);
    }
    do {
      if (pvVar3 == pvVar6) {
        param_1[1] = pvVar6;
        operator_delete(pvVar6);
        uVar2 = 0;
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        goto LAB_0084ff2c;
      }
      pvVar3 = (void *)((long)pvVar3 + -8);
    } while (pvVar3 != (void *)0x0);
  }
  else {
    __n = param_1[1] - (long)pvVar6;
    if ((ulong)((long)__n >> 3) < param_4) {
      memmove(pvVar6,param_2,__n);
      pvVar6 = (void *)param_1[1];
      __n_00 = param_3 - (long)((long)param_2 + __n);
      memmove(pvVar6,(void *)((long)param_2 + __n),__n_00);
      lVar1 = (long)pvVar6 + __n_00;
LAB_0084ff88:
      param_1[1] = lVar1;
      return;
    }
    memmove(pvVar6,param_2,param_3 - (long)param_2);
    lVar1 = param_1[1];
    lVar4 = (long)pvVar6 + (param_3 - (lVar1 + (long)param_2));
    uVar2 = (ulong)((lVar4 << 0x3d) - lVar4) >> 3;
    uVar5 = (lVar1 - (lVar1 << 0x3d)) - 8U >> 3;
    if (uVar5 <= uVar2) {
      uVar2 = uVar5;
    }
    lVar4 = (long)pvVar6 + (param_3 - (long)param_2);
    if ((1 < uVar2) &&
       (((((int)pvVar6 + (int)param_3) - ((int)lVar1 + (int)param_2) | -(int)lVar1) & 7U) == 0)) {
      uVar2 = uVar2 & 0x1ffffffffffffffe;
      lVar1 = lVar1 + uVar2 * -8;
      do {
        uVar2 = uVar2 - 2;
      } while (uVar2 != 0);
    }
    do {
      if (lVar1 == lVar4) {
        param_1[1] = lVar4;
        return;
      }
      lVar1 = lVar1 + -8;
    } while (lVar1 != 0);
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 0084ffb0  FUN_0084ffb0 =====

void FUN_0084ffb0(undefined8 *param_1)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  ulong uVar6;
  ulong uVar7;
  void *pvVar8;
  void *pvVar9;
  
  pvVar8 = (void *)*param_1;
  if ((pvVar8 == (void *)0x0) || (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar8), iVar1 != 1)) {
    return;
  }
  pvVar9 = *(void **)((long)pvVar8 + 8);
  if (pvVar9 != (void *)0x0) {
    pvVar3 = pvVar9;
    pvVar4 = *(void **)((long)pvVar8 + 0x10);
    if (pvVar9 != *(void **)((long)pvVar8 + 0x10)) {
      do {
        pvVar3 = (void *)((long)pvVar4 + -0x68);
        if (pvVar3 == (void *)0x0) {
LAB_008500d0:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        pvVar2 = *(void **)((long)pvVar4 + -0x60);
        if (pvVar2 != (void *)0x0) {
          pvVar5 = *(void **)((long)pvVar4 + -0x58);
          uVar7 = (ulong)((long)pvVar5 + (-4 - ((long)pvVar5 << 0x3e))) >> 2;
          uVar6 = (ulong)(((long)pvVar2 - (long)pvVar5 << 0x3e) - ((long)pvVar2 - (long)pvVar5)) >>
                  2;
          if (uVar7 <= uVar6) {
            uVar6 = uVar7;
          }
          if ((1 < uVar6) && ((((int)pvVar2 - (int)pvVar5 | -(int)pvVar5) & 3U) == 0)) {
            uVar6 = uVar6 & 0x3ffffffffffffffe;
            pvVar5 = (void *)((long)pvVar5 + uVar6 * -4);
            do {
              uVar6 = uVar6 - 2;
            } while (uVar6 != 0);
          }
          while (pvVar5 != pvVar2) {
            pvVar5 = (void *)((long)pvVar5 + -4);
            if (pvVar5 == (void *)0x0) goto LAB_008500d0;
          }
          *(void **)((long)pvVar4 + -0x58) = pvVar2;
          operator_delete(pvVar2);
        }
        pvVar4 = pvVar3;
      } while (pvVar9 != pvVar3);
      pvVar3 = *(void **)((long)pvVar8 + 8);
    }
    *(void **)((long)pvVar8 + 0x10) = pvVar9;
    operator_delete(pvVar3);
  }
  operator_delete(pvVar8);
  return;
}


// ===== 008500e4  FUN_008500e4 =====

undefined1  [16] FUN_008500e4(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  lVar1 = (**(code **)(*param_1 + 0x10))();
  if (lVar1 < 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = (**(code **)(*param_1 + 0x10))(param_1);
    lVar2 = lVar2 * 1000;
  }
  auVar3[8] = lVar1 >= 0;
  auVar3._0_8_ = lVar2;
  auVar3._9_7_ = 0;
  return auVar3;
}


// ===== 00850140  FUN_00850140 =====

undefined8 FUN_00850140(void)

{
  return 0;
}


// ===== 0085014c  FUN_0085014c =====

void FUN_0085014c(long param_1,long param_2)

{
  long lVar1;
  undefined1 *puVar2;
  int iVar3;
  char cVar4;
  byte bVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  
  if (param_2 == 0) {
    return;
  }
  iVar3 = *(int *)(param_2 + 0xac);
  if (iVar3 < 3) {
    if (iVar3 == 1) {
      if (*(char *)(param_2 + 0x790) == '\x01') {
        if (*(int *)(param_1 + 0x1d0) != 1) {
          *(undefined2 *)(param_1 + 0x1d9) = 0;
          *(undefined1 *)(param_1 + 0x1db) = 0xff;
          *(undefined4 *)(param_1 + 0x1d0) = 1;
        }
        *(undefined1 *)(param_1 + 0x1d8) = *(undefined1 *)(param_2 + 0x128);
        if (*(char *)(param_2 + 0x12e) != -1) {
          *(char *)(param_1 + 0x1d9) = *(char *)(param_2 + 0x12e);
          *(undefined1 *)(param_1 + 0x1da) = *(undefined1 *)(param_2 + 0x12f);
        }
        if (*(int *)(param_2 + 0x130) == -1) {
          return;
        }
        *(char *)(param_1 + 0x1db) = (char)*(int *)(param_2 + 0x130);
        return;
      }
    }
    else {
      if (iVar3 != 2) goto LAB_00850414;
      if (*(char *)(param_2 + 0x790) == '\x02') {
        if (*(int *)(param_1 + 0x1d0) != 2) {
          *(undefined1 *)(param_1 + 0x1dd) = 0;
          *(undefined2 *)(param_1 + 0x1df) = 0;
          *(undefined4 *)(param_1 + 0x1d0) = 2;
        }
        *(undefined1 *)(param_1 + 0x1d9) = *(undefined1 *)(param_2 + 0x128);
        *(undefined1 *)(param_1 + 0x1da) = *(undefined1 *)(param_2 + 0x129);
        cVar4 = *(char *)(param_2 + 0x139);
        *(char *)(param_1 + 0x828) = cVar4;
        if ((((cVar4 == '\0') ||
             (*(undefined1 *)(param_1 + 0x829) = *(undefined1 *)(param_2 + 0x13a),
             *(byte *)(param_2 + 0x139) < 2)) ||
            (*(undefined1 *)(param_1 + 0x82a) = *(undefined1 *)(param_2 + 0x13b),
            *(byte *)(param_2 + 0x139) < 3)) ||
           (*(undefined1 *)(param_1 + 0x82b) = *(undefined1 *)(param_2 + 0x13c),
           *(byte *)(param_2 + 0x139) < 4)) {
          *(undefined1 *)(param_1 + 0x1db) = *(undefined1 *)(param_2 + 300);
          if (*(char *)(param_2 + 0x134) != -1) {
            *(char *)(param_1 + 0x1dd) = *(char *)(param_2 + 0x134);
            *(undefined1 *)(param_1 + 0x1de) = *(undefined1 *)(param_2 + 0x136);
          }
          if (*(char *)(param_2 + 0x135) != -1) {
            *(undefined1 *)(param_1 + 0x1df) = *(undefined1 *)(param_2 + 0x137);
            bVar5 = *(byte *)(param_2 + 0x135);
            *(undefined1 *)(param_1 + 0xc4) = 1;
            *(uint *)(param_1 + 0xc0) = (uint)bVar5;
          }
          if (*(char *)(param_2 + 0x138) != -1) {
            *(char *)(param_1 + 0x1e0) = *(char *)(param_2 + 0x138);
          }
          if (*(char *)(param_2 + 300) != '\x01') {
            return;
          }
          *(undefined8 *)(param_1 + 0x1e8) = *(undefined8 *)(param_2 + 0x148);
          cVar4 = *(char *)(param_2 + 0x158);
          *(char *)(param_1 + 0x1f8) = cVar4;
          if ((cVar4 == '\x01') && (*(long *)(param_2 + 0x148) != 0)) {
            *(undefined2 *)(param_1 + 0x1fa) = *(undefined2 *)(param_2 + 0x15a);
            *(undefined2 *)(param_1 + 0x20a) = *(undefined2 *)(param_2 + 0x16a);
            if (1 < *(ulong *)(param_2 + 0x148)) {
              *(undefined2 *)(param_1 + 0x1fc) = *(undefined2 *)(param_2 + 0x15c);
              *(undefined2 *)(param_1 + 0x20c) = *(undefined2 *)(param_2 + 0x16c);
              if (2 < *(ulong *)(param_2 + 0x148)) {
                *(undefined2 *)(param_1 + 0x1fe) = *(undefined2 *)(param_2 + 0x15e);
                *(undefined2 *)(param_1 + 0x20e) = *(undefined2 *)(param_2 + 0x16e);
                if (3 < *(ulong *)(param_2 + 0x148)) {
                  *(undefined2 *)(param_1 + 0x200) = *(undefined2 *)(param_2 + 0x160);
                  *(undefined2 *)(param_1 + 0x210) = *(undefined2 *)(param_2 + 0x170);
                  if (4 < *(ulong *)(param_2 + 0x148)) {
                    *(undefined2 *)(param_1 + 0x202) = *(undefined2 *)(param_2 + 0x162);
                    *(undefined2 *)(param_1 + 0x212) = *(undefined2 *)(param_2 + 0x172);
                    if (5 < *(ulong *)(param_2 + 0x148)) {
                      *(undefined2 *)(param_1 + 0x204) = *(undefined2 *)(param_2 + 0x164);
                      *(undefined2 *)(param_1 + 0x214) = *(undefined2 *)(param_2 + 0x174);
                      if (6 < *(ulong *)(param_2 + 0x148)) {
                        *(undefined2 *)(param_1 + 0x206) = *(undefined2 *)(param_2 + 0x166);
                        *(undefined2 *)(param_1 + 0x216) = *(undefined2 *)(param_2 + 0x176);
                        if (7 < *(ulong *)(param_2 + 0x148)) {
                          *(undefined2 *)(param_1 + 0x208) = *(undefined2 *)(param_2 + 0x168);
                          *(undefined2 *)(param_1 + 0x218) = *(undefined2 *)(param_2 + 0x178);
                          if (8 < *(ulong *)(param_2 + 0x148)) goto LAB_008503f8;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          uVar9 = *(ulong *)(param_2 + 0x180);
          *(ulong *)(param_1 + 0x220) = uVar9;
          if (uVar9 == 0) {
            return;
          }
          lVar7 = 0x527;
          lVar8 = 0x228;
          while (lVar7 != 0x824) {
            lVar1 = param_2 + lVar8;
            puVar2 = (undefined1 *)(param_1 + lVar8);
            *puVar2 = *(undefined1 *)(lVar1 + -0xa0);
            puVar2[0xff] = *(undefined1 *)(lVar1 + 0x5f);
            cVar4 = *(char *)(lVar1 + 0x15e);
            puVar2[0x1fe] = cVar4;
            if (cVar4 != '\0') {
              *(undefined1 *)(param_1 + lVar7 + -2) = *(undefined1 *)(param_2 + lVar7 + -0xa2);
              if (cVar4 != '\x01') {
                *(undefined1 *)(param_1 + lVar7 + -1) = *(undefined1 *)(param_2 + lVar7 + -0xa1);
                bVar5 = puVar2[0x1fe];
                if ((2 < bVar5) &&
                   (*(undefined1 *)(param_1 + lVar7) = *(undefined1 *)(param_2 + lVar7 + -0xa0),
                   bVar5 != 3)) break;
              }
              uVar9 = *(ulong *)(param_1 + 0x220);
            }
            uVar10 = lVar8 - 0x227;
            lVar8 = lVar8 + 1;
            lVar7 = lVar7 + 3;
            if (uVar9 <= uVar10) {
              return;
            }
          }
        }
LAB_008503f8:
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(0x5512,0x8503fc);
        (*pcVar6)();
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_005ee558();
  }
  if ((iVar3 == 3) || (iVar3 == 4)) {
    *(int *)(param_1 + 0x1d0) = iVar3;
    return;
  }
LAB_00850414:
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  return;
}


// ===== 0085048c  FUN_0085048c =====

void FUN_0085048c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d3a588;
  FUN_00850704(param_1 + 0x3a);
  FUN_007bca94(param_1 + 1);
  return;
}


// ===== 008504c8  FUN_008504c8 =====

void FUN_008504c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d3a588;
  FUN_00850704(param_1 + 0x3a);
  FUN_007bca94(param_1 + 1);
  operator_delete(param_1);
  return;
}


// ===== 00850514  FUN_00850514 =====

undefined8 FUN_00850514(void)

{
  return 0xffffffffffffffff;
}


// ===== 00850520  FUN_00850520 =====

undefined8 FUN_00850520(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1c0);
}


// ===== 0085052c  FUN_0085052c =====

void FUN_0085052c(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 0x198) = 1;
  *(undefined1 *)(param_1 + 0x19a) = 0;
  *(undefined1 *)(param_1 + 0x1ce) = 0;
  *(undefined1 *)(param_1 + 0x1d0) = 0;
  *(undefined1 *)(param_1 + 0x1f0) = 0;
  *(undefined2 *)(param_1 + 0x1f2) = 0;
  *(undefined1 *)(param_1 + 500) = 0;
  *(undefined1 *)(param_1 + 0x200) = 0;
  memset(param_1 + 2,0,0x658);
  return;
}


// ===== 0085056c  FUN_0085056c =====

void FUN_0085056c(void *param_1,void *param_2)

{
  undefined4 uVar1;
  undefined2 uVar2;
  void *__dest;
  ulong uVar3;
  undefined8 uVar4;
  void *__src;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  memcpy(param_1,param_2,0x661);
  *(undefined1 *)((long)param_1 + 0x668) = 0;
  *(undefined1 *)((long)param_1 + 0x738) = 0;
  if (*(char *)((long)param_2 + 0x738) == '\x01') {
    FUN_00850ac0((long)param_1 + 0x668,(long)param_2 + 0x668);
    *(undefined1 *)((long)param_1 + 0x738) = 1;
  }
  *(undefined1 *)((long)param_1 + 0x740) = 0;
  *(undefined1 *)((long)param_1 + 0x7c0) = 0;
  if (*(char *)((long)param_2 + 0x7c0) == '\x01') {
    uVar1 = *(undefined4 *)((long)param_2 + 0x748);
    uVar4 = *(undefined8 *)((long)param_2 + 0x740);
    *(undefined8 *)((long)param_1 + 0x750) = 0;
    *(undefined4 *)((long)param_1 + 0x748) = uVar1;
    *(undefined8 *)((long)param_1 + 0x740) = uVar4;
    uVar3 = *(ulong *)((long)param_2 + 0x750);
    if (1 < uVar3) {
      if ((uVar3 & 1) == 0) {
        *(ulong *)((long)param_1 + 0x750) = uVar3;
        uVar7 = *(undefined8 *)((long)param_2 + 0x760);
        uVar6 = *(undefined8 *)((long)param_2 + 0x758);
        uVar5 = *(undefined8 *)((long)param_2 + 0x770);
        uVar4 = *(undefined8 *)((long)param_2 + 0x768);
        *(undefined8 *)((long)param_1 + 0x778) = *(undefined8 *)((long)param_2 + 0x778);
        *(undefined8 *)((long)param_1 + 0x760) = uVar7;
        *(undefined8 *)((long)param_1 + 0x758) = uVar6;
        *(undefined8 *)((long)param_1 + 0x770) = uVar5;
        *(undefined8 *)((long)param_1 + 0x768) = uVar4;
      }
      else {
        FUN_00850990((long)param_1 + 0x750,(long)param_2 + 0x750);
      }
    }
    *(undefined8 *)((long)param_1 + 0x780) = 0;
    uVar3 = *(ulong *)((long)param_2 + 0x780);
    if (1 < uVar3) {
      if ((uVar3 & 1) == 0) {
        *(ulong *)((long)param_1 + 0x780) = uVar3;
        uVar6 = *(undefined8 *)((long)param_2 + 0x788);
        uVar5 = *(undefined8 *)((long)param_2 + 0x7a0);
        uVar4 = *(undefined8 *)((long)param_2 + 0x798);
        *(undefined8 *)((long)param_1 + 0x790) = *(undefined8 *)((long)param_2 + 0x790);
        *(undefined8 *)((long)param_1 + 0x788) = uVar6;
        *(undefined8 *)((long)param_1 + 0x7a0) = uVar5;
        *(undefined8 *)((long)param_1 + 0x798) = uVar4;
      }
      else {
        FUN_00850a14((long)param_1 + 0x780,(long)param_2 + 0x780);
      }
    }
    FUN_008507f8((long)param_1 + 0x7a8,(long)param_2 + 0x7a8);
    *(undefined1 *)((long)param_1 + 0x7c0) = 1;
  }
  uVar2 = *(undefined2 *)((long)param_2 + 0x7c8);
  *(undefined1 *)((long)param_1 + 2000) = 0;
  *(undefined1 *)((long)param_1 + 0x800) = 0;
  *(undefined2 *)((long)param_1 + 0x7c8) = uVar2;
  if (*(char *)((long)param_2 + 0x800) == '\x01') {
    uVar4 = *(undefined8 *)((long)param_2 + 0x7e0);
    uVar6 = *(undefined8 *)((long)param_2 + 0x7d8);
    uVar5 = *(undefined8 *)((long)param_2 + 2000);
    *(undefined8 *)((long)param_1 + 0x7e8) = 0;
    *(undefined8 *)((long)param_1 + 0x7e0) = uVar4;
    *(undefined8 *)((long)param_1 + 0x7d8) = uVar6;
    *(undefined8 *)((long)param_1 + 2000) = uVar5;
    *(undefined8 *)((long)param_1 + 0x7f8) = 0;
    *(undefined8 *)((long)param_1 + 0x7f0) = 0;
    __src = *(void **)((long)param_2 + 0x7e8);
    uVar3 = *(long *)((long)param_2 + 0x7f0) - (long)__src;
    if (uVar3 != 0) {
      if ((long)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_007dd938();
      }
      __dest = operator_new(uVar3);
      *(void **)((long)param_1 + 0x7e8) = __dest;
      *(void **)((long)param_1 + 0x7f0) = __dest;
      *(ulong *)((long)param_1 + 0x7f8) = (long)__dest + uVar3;
      memcpy(__dest,__src,uVar3);
      *(ulong *)((long)param_1 + 0x7f0) = (long)__dest + uVar3;
    }
    *(undefined1 *)((long)param_1 + 0x800) = 1;
  }
  return;
}


// ===== 00850704  FUN_00850704 =====

void FUN_00850704(long param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  if ((*(char *)(param_1 + 0x800) == '\x01') &&
     (pvVar1 = *(void **)(param_1 + 0x7e8), pvVar1 != (void *)0x0)) {
    pvVar2 = *(void **)(param_1 + 0x7f0);
    uVar4 = (ulong)((long)pvVar2 + (-8 - ((long)pvVar2 << 0x3d))) >> 3;
    uVar3 = (ulong)(((long)pvVar1 - (long)pvVar2 << 0x3d) - ((long)pvVar1 - (long)pvVar2)) >> 3;
    if (uVar4 <= uVar3) {
      uVar3 = uVar4;
    }
    if ((1 < uVar3) && ((((int)pvVar1 - (int)pvVar2 | -(int)pvVar2) & 7U) == 0)) {
      uVar3 = uVar3 & 0x1ffffffffffffffe;
      pvVar2 = (void *)((long)pvVar2 + uVar3 * -8);
      do {
        uVar3 = uVar3 - 2;
      } while (uVar3 != 0);
    }
    while (pvVar2 != pvVar1) {
      pvVar2 = (void *)((long)pvVar2 + -8);
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    *(void **)(param_1 + 0x7f0) = pvVar1;
    operator_delete(pvVar1);
  }
  if (*(char *)(param_1 + 0x7c0) == '\x01') {
    FUN_0060b02c(param_1 + 0x740);
  }
  if (*(char *)(param_1 + 0x738) == '\x01') {
    FUN_00850c20(param_1 + 0x668);
    return;
  }
  return;
}


// ===== 008507f8  FUN_008507f8 =====

void FUN_008507f8(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  void *pvVar5;
  ulong *puVar6;
  ulong *__dest;
  ulong *__src;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar2 = *param_2;
  lVar3 = param_2[1];
  uVar8 = lVar3 - lVar2;
  if (uVar8 != 0) {
    if (0x276276276276276 < (ulong)(((long)uVar8 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
      auVar15 = FUN_007d5104();
      puVar10 = auVar15._8_8_;
      puVar6 = auVar15._0_8_;
      uVar8 = *puVar10;
      uVar9 = uVar8 >> 1;
      if (uVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x850a10);
        (*pcVar4)();
      }
      if ((uVar8 & 1) == 0) {
        __dest = puVar6 + 1;
        __src = puVar10 + 1;
      }
      else {
        if ((long)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_005d55a4();
        }
        uVar8 = uVar9;
        if (uVar9 < 0x15) {
          uVar8 = 0x14;
        }
        __dest = (ulong *)operator_new(uVar8 << 2);
        puVar6[1] = (ulong)__dest;
        puVar6[2] = uVar8;
        __src = (ulong *)puVar10[1];
      }
      memcpy(__dest,__src,uVar9 << 2);
      *puVar6 = *puVar10;
      return;
    }
    pvVar5 = operator_new(uVar8);
    lVar11 = 0;
    *param_1 = pvVar5;
    param_1[1] = pvVar5;
    param_1[2] = (long)pvVar5 + uVar8;
    do {
      if ((long)pvVar5 + lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      uVar7 = *(undefined8 *)(lVar2 + lVar11);
      puVar6 = (ulong *)((long)pvVar5 + lVar11 + 8);
      *puVar6 = 0;
      *(undefined8 *)((long)pvVar5 + lVar11) = uVar7;
      uVar8 = *(ulong *)(lVar2 + lVar11 + 8);
      if (1 < uVar8) {
        if ((uVar8 & 1) == 0) {
          *puVar6 = uVar8;
          lVar1 = lVar2 + lVar11;
          uVar14 = *(undefined8 *)(lVar1 + 0x18);
          uVar13 = *(undefined8 *)(lVar1 + 0x10);
          uVar12 = *(undefined8 *)(lVar1 + 0x28);
          uVar7 = *(undefined8 *)(lVar1 + 0x20);
          *(undefined8 *)((long)pvVar5 + lVar11 + 0x30) = *(undefined8 *)(lVar1 + 0x30);
          *(undefined8 *)((long)pvVar5 + lVar11 + 0x18) = uVar14;
          *(undefined8 *)((long)pvVar5 + lVar11 + 0x10) = uVar13;
          *(undefined8 *)((long)pvVar5 + lVar11 + 0x28) = uVar12;
          *(undefined8 *)((long)pvVar5 + lVar11 + 0x20) = uVar7;
        }
        else {
          FUN_007ddc94();
        }
      }
      puVar10 = (ulong *)((long)pvVar5 + lVar11 + 0x38);
      *puVar10 = 0;
      puVar6 = (undefined8 *)(lVar2 + lVar11) + 7;
      uVar8 = *puVar6;
      if (1 < uVar8) {
        if ((uVar8 & 1) == 0) {
          *puVar10 = uVar8;
          uVar7 = *(undefined8 *)(lVar2 + lVar11 + 0x40);
          *(undefined8 *)((long)pvVar5 + lVar11 + 0x48) = *(undefined8 *)(lVar2 + lVar11 + 0x48);
          *(undefined8 *)((long)pvVar5 + lVar11 + 0x40) = uVar7;
        }
        else {
          FUN_007ddda0(puVar10,puVar6);
        }
      }
      puVar6 = (ulong *)((long)pvVar5 + lVar11 + 0x50);
      *puVar6 = 0;
      uVar8 = *(ulong *)(lVar2 + lVar11 + 0x50);
      if (1 < uVar8) {
        if ((uVar8 & 1) == 0) {
          *puVar6 = uVar8;
          uVar7 = *(undefined8 *)(lVar2 + lVar11 + 0x58);
          *(undefined8 *)((long)pvVar5 + lVar11 + 0x60) = *(undefined8 *)(lVar2 + lVar11 + 0x60);
          *(undefined8 *)((long)pvVar5 + lVar11 + 0x58) = uVar7;
        }
        else {
          FUN_007ddda0();
        }
      }
      lVar11 = lVar11 + 0x68;
    } while (lVar2 + lVar11 != lVar3);
    param_1[1] = (long)pvVar5 + lVar11;
  }
  return;
}


// ===== 00850990  FUN_00850990 =====

void FUN_00850990(ulong *param_1,ulong *param_2)

{
  code *pcVar1;
  ulong *__dest;
  ulong *__src;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *param_2;
  uVar3 = uVar2 >> 1;
  if (uVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x850a10);
    (*pcVar1)();
  }
  if ((uVar2 & 1) == 0) {
    __dest = param_1 + 1;
    __src = param_2 + 1;
  }
  else {
    if ((long)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    uVar2 = uVar3;
    if (uVar3 < 0x15) {
      uVar2 = 0x14;
    }
    __dest = (ulong *)operator_new(uVar2 << 2);
    param_1[1] = (ulong)__dest;
    param_1[2] = uVar2;
    __src = (ulong *)param_2[1];
  }
  memcpy(__dest,__src,uVar3 << 2);
  *param_1 = *param_2;
  return;
}


// ===== 00850a14  FUN_00850a14 =====

void FUN_00850a14(ulong *param_1,ulong *param_2)

{
  code *pcVar1;
  ulong *__dest;
  ulong *__src;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *param_2;
  uVar3 = uVar2 >> 1;
  if (uVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x850a98);
    (*pcVar1)();
  }
  if ((uVar2 & 1) == 0) {
    __dest = param_1 + 1;
    __src = param_2 + 1;
  }
  else {
    if (uVar2 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    uVar2 = uVar3;
    if (uVar3 < 9) {
      uVar2 = 8;
    }
    __dest = (ulong *)operator_new(uVar2 << 3);
    param_1[1] = (ulong)__dest;
    param_1[2] = uVar2;
    __src = (ulong *)param_2[1];
  }
  memcpy(__dest,__src,uVar3 << 3);
  *param_1 = *param_2;
  return;
}


// ===== 00850a9c  FUN_00850a9c =====

void FUN_00850a9c(undefined8 *param_1)

{
  param_1[7] = 0;
  param_1[10] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[0xd] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0xffffffff;
  return;
}


// ===== 00850ac0  FUN_00850ac0 =====

void FUN_00850ac0(undefined8 *param_1,undefined8 *param_2)

{
  size_t __n;
  void *__dest;
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  uVar1 = param_2[1];
  if (1 < uVar1) {
    if ((uVar1 & 1) == 0) {
      param_1[1] = uVar1;
      uVar6 = param_2[3];
      uVar5 = param_2[2];
      uVar4 = param_2[5];
      uVar3 = param_2[4];
      param_1[6] = param_2[6];
      param_1[3] = uVar6;
      param_1[2] = uVar5;
      param_1[5] = uVar4;
      param_1[4] = uVar3;
    }
    else {
      FUN_007ddc94();
    }
  }
  param_1[7] = 0;
  uVar1 = param_2[7];
  if (1 < uVar1) {
    if ((uVar1 & 1) == 0) {
      param_1[7] = uVar1;
      uVar3 = param_2[8];
      param_1[9] = param_2[9];
      param_1[8] = uVar3;
    }
    else {
      FUN_007ddda0();
    }
  }
  param_1[10] = 0;
  uVar1 = param_2[10];
  if (1 < uVar1) {
    if ((uVar1 & 1) == 0) {
      param_1[10] = uVar1;
      uVar3 = param_2[0xb];
      param_1[0xc] = param_2[0xc];
      param_1[0xb] = uVar3;
    }
    else {
      FUN_007ddda0();
    }
  }
  param_1[0xd] = 0;
  uVar1 = param_2[0xd];
  if (1 < uVar1) {
    if ((uVar1 & 1) == 0) {
      param_1[0xd] = uVar1;
      uVar5 = param_2[0x12];
      uVar4 = param_2[0x15];
      uVar3 = param_2[0x14];
      uVar7 = param_2[0xf];
      uVar6 = param_2[0xe];
      uVar9 = param_2[0x11];
      uVar8 = param_2[0x10];
      param_1[0x13] = param_2[0x13];
      param_1[0x12] = uVar5;
      param_1[0x15] = uVar4;
      param_1[0x14] = uVar3;
      param_1[0xf] = uVar7;
      param_1[0xe] = uVar6;
      param_1[0x11] = uVar9;
      param_1[0x10] = uVar8;
    }
    else {
      FUN_00850ccc();
    }
  }
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  lVar2 = param_2[0x17];
  if (lVar2 != 0) {
    if (lVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00632a3c();
    }
    lVar2 = (lVar2 - 1U >> 6) + 1;
    __dest = operator_new(lVar2 * 8);
    param_1[0x16] = __dest;
    param_1[0x17] = 0;
    param_1[0x18] = lVar2;
    lVar2 = param_2[0x17];
    __n = 0;
    if (lVar2 != 0) {
      __n = (lVar2 - 1U >> 3 & 0x1ffffffffffffff8) + 8;
    }
    memmove(__dest,(void *)param_2[0x16],__n);
    param_1[0x17] = lVar2;
  }
  param_1[0x19] = param_2[0x19];
  return;
}


// ===== 00850c20  FUN_00850c20 =====

void FUN_00850c20(long param_1)

{
  byte bVar1;
  
  if (*(void **)(param_1 + 0xb0) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0xb0));
  }
  if ((*(byte *)(param_1 + 0x68) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x50);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x70));
    bVar1 = *(byte *)(param_1 + 0x50);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x38);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x58));
    bVar1 = *(byte *)(param_1 + 0x38);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 8);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x40));
    bVar1 = *(byte *)(param_1 + 8);
  }
  if ((bVar1 & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x10));
    return;
  }
  return;
}


// ===== 00850ccc  FUN_00850ccc =====

void FUN_00850ccc(ulong *param_1,ulong *param_2)

{
  code *pcVar1;
  ulong *__dest;
  ulong *__src;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *param_2;
  uVar3 = uVar2 >> 1;
  if (uVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x850d50);
    (*pcVar1)();
  }
  if ((uVar2 & 1) == 0) {
    __dest = param_1 + 1;
    __src = param_2 + 1;
  }
  else {
    if (uVar2 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    uVar2 = uVar3;
    if (uVar3 < 0x11) {
      uVar2 = 0x10;
    }
    __dest = (ulong *)operator_new(uVar2 << 3);
    param_1[1] = (ulong)__dest;
    param_1[2] = uVar2;
    __src = (ulong *)param_2[1];
  }
  memcpy(__dest,__src,uVar3 << 3);
  *param_1 = *param_2;
  return;
}


// ===== 00850d54  FUN_00850d54 =====

void FUN_00850d54(ulong *param_1,byte *param_2,long param_3)

{
  undefined4 *puVar1;
  ulong uVar2;
  ulong *puVar3;
  byte bVar4;
  ulong uVar5;
  undefined4 local_44;
  
  *param_1 = 0;
  param_1[4] = (ulong)&DAT_aaaaaaaaaaaaaaaa;
  param_1[3] = (ulong)&DAT_aaaaaaaaaaaaaaaa;
  param_1[2] = (ulong)&DAT_aaaaaaaaaaaaaaaa;
  param_1[1] = (ulong)&DAT_aaaaaaaaaaaaaaaa;
  param_1[5] = (ulong)&DAT_aaaaaaaaaaaaaaaa;
  FUN_00850e90(param_1);
  if (param_3 != 0) {
    do {
      bVar4 = *param_2;
      local_44 = 0xaaaaaaaa;
      if (bVar4 < 0x52) {
        if (bVar4 == 0x2d) {
          local_44 = 0;
        }
        else if (bVar4 == 0x44) {
          local_44 = 1;
        }
      }
      else if (bVar4 == 0x52) {
        local_44 = 3;
      }
      else if (bVar4 == 0x53) {
        local_44 = 2;
      }
      uVar5 = *param_1;
      uVar2 = 10;
      if ((uVar5 & 1) != 0) {
        uVar2 = param_1[2];
      }
      if (uVar5 >> 1 == uVar2) {
        FUN_00851004(param_1,&local_44);
      }
      else {
        puVar3 = param_1 + 1;
        if ((uVar5 & 1) != 0) {
          puVar3 = (ulong *)param_1[1];
        }
        puVar1 = (undefined4 *)((long)puVar3 + (uVar5 >> 1) * 4);
        if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        *puVar1 = local_44;
        *param_1 = *param_1 + 2;
      }
      param_3 = param_3 + -1;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  return;
}


// ===== 00850e90  FUN_00850e90 =====

void FUN_00850e90(ulong *param_1,ulong param_2)

{
  ulong *puVar1;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  
  puVar12 = param_1 + 1;
  uVar11 = *param_1;
  if ((uVar11 & 1) == 0) {
    uVar3 = 10;
  }
  else {
    puVar12 = (ulong *)param_1[1];
    uVar3 = param_1[2];
  }
  if (uVar3 < param_2) {
    uVar3 = uVar3 * 2;
    if (uVar3 < param_2 || uVar3 - param_2 == 0) {
      uVar3 = param_2;
    }
    if (uVar3 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    uVar13 = uVar11 >> 1;
    pvVar2 = operator_new(uVar3 << 2);
    if (uVar13 != 0) {
      uVar7 = uVar13 - 1;
      uVar14 = (ulong)-(long)pvVar2 >> 2;
      if (uVar7 <= (ulong)-(long)pvVar2 >> 2) {
        uVar14 = uVar7;
      }
      if (uVar14 < 0x20) {
        lVar4 = 0;
      }
      else {
        lVar4 = 0;
        uVar10 = (ulong)-(long)pvVar2 >> 2;
        if (uVar7 <= uVar10) {
          uVar10 = uVar7;
        }
        if ((((-(long)pvVar2 & 3U) == 0) &&
            (pvVar2 <= (void *)((long)pvVar2 + uVar10 * 4) &&
             puVar12 <= (ulong *)((long)puVar12 + uVar10 * 4))) &&
           (0x1f < (ulong)((long)pvVar2 - (long)puVar12))) {
          puVar9 = (ulong *)((long)pvVar2 + 0x10);
          uVar7 = uVar14 + 1 & 7;
          uVar10 = 8;
          if (uVar7 != 0) {
            uVar10 = uVar7;
          }
          puVar8 = puVar12 + 2;
          lVar4 = (uVar14 + 1) - uVar10;
          puVar12 = (ulong *)((long)puVar12 + lVar4 * 4);
          lVar5 = lVar4;
          do {
            puVar1 = puVar8 + -1;
            uVar14 = puVar8[-2];
            uVar10 = puVar8[1];
            uVar7 = *puVar8;
            lVar5 = lVar5 + -8;
            puVar8 = puVar8 + 4;
            puVar9[-1] = *puVar1;
            puVar9[-2] = uVar14;
            puVar9[1] = uVar10;
            *puVar9 = uVar7;
            puVar9 = puVar9 + 4;
          } while (lVar5 != 0);
        }
      }
      lVar5 = uVar13 - lVar4;
      puVar6 = (undefined4 *)((long)pvVar2 + lVar4 * 4);
      do {
        if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        lVar5 = lVar5 + -1;
        *puVar6 = (int)*puVar12;
        puVar6 = puVar6 + 1;
        puVar12 = (ulong *)((long)puVar12 + 4);
      } while (lVar5 != 0);
    }
    if ((uVar11 & 1) != 0) {
      operator_delete((void *)param_1[1]);
      uVar11 = *param_1;
    }
    param_1[1] = (ulong)pvVar2;
    param_1[2] = uVar3;
    *param_1 = uVar11 | 1;
  }
  return;
}


// ===== 00851004  FUN_00851004 =====

undefined4 * FUN_00851004(ulong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  ulong *puVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong uVar14;
  ulong uVar15;
  
  puVar13 = param_1 + 1;
  uVar12 = *param_1;
  if ((uVar12 & 1) == 0) {
    uVar11 = 0x14;
  }
  else {
    if ((param_1[2] >> 0x3d & 3) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    puVar13 = (ulong *)param_1[1];
    uVar11 = param_1[2] << 1;
  }
  uVar14 = uVar12 >> 1;
  pvVar3 = operator_new(uVar11 << 2);
  puVar1 = (undefined4 *)((long)pvVar3 + uVar14 * 4);
  if (puVar1 == (undefined4 *)0x0) {
LAB_0085117c:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  *puVar1 = *param_2;
  if (uVar14 != 0) {
    uVar7 = uVar14 - 1;
    uVar15 = (ulong)-(long)pvVar3 >> 2;
    if (uVar7 <= (ulong)-(long)pvVar3 >> 2) {
      uVar15 = uVar7;
    }
    if (uVar15 < 0x20) {
      lVar4 = 0;
    }
    else {
      lVar4 = 0;
      uVar10 = (ulong)-(long)pvVar3 >> 2;
      if (uVar7 <= uVar10) {
        uVar10 = uVar7;
      }
      if (((((-(long)pvVar3 & 3U) == 0) && (pvVar3 <= (void *)((long)pvVar3 + uVar10 * 4))) &&
          (puVar13 <= (ulong *)((long)puVar13 + uVar10 * 4))) &&
         (0x1f < (ulong)((long)pvVar3 - (long)puVar13))) {
        puVar9 = (ulong *)((long)pvVar3 + 0x10);
        uVar7 = uVar15 + 1 & 7;
        uVar10 = 8;
        if (uVar7 != 0) {
          uVar10 = uVar7;
        }
        puVar8 = puVar13 + 2;
        lVar4 = (uVar15 + 1) - uVar10;
        puVar13 = (ulong *)((long)puVar13 + lVar4 * 4);
        lVar5 = lVar4;
        do {
          puVar2 = puVar8 + -1;
          uVar15 = puVar8[-2];
          uVar10 = puVar8[1];
          uVar7 = *puVar8;
          lVar5 = lVar5 + -8;
          puVar8 = puVar8 + 4;
          puVar9[-1] = *puVar2;
          puVar9[-2] = uVar15;
          puVar9[1] = uVar10;
          *puVar9 = uVar7;
          puVar9 = puVar9 + 4;
        } while (lVar5 != 0);
      }
    }
    lVar5 = uVar14 - lVar4;
    puVar6 = (undefined4 *)((long)pvVar3 + lVar4 * 4);
    do {
      if (puVar6 == (undefined4 *)0x0) goto LAB_0085117c;
      lVar5 = lVar5 + -1;
      *puVar6 = (int)*puVar13;
      puVar6 = puVar6 + 1;
      puVar13 = (ulong *)((long)puVar13 + 4);
    } while (lVar5 != 0);
  }
  if ((uVar12 & 1) != 0) {
    operator_delete((void *)param_1[1]);
    uVar12 = *param_1;
  }
  param_1[1] = (ulong)pvVar3;
  param_1[2] = uVar11;
  *param_1 = (uVar12 | 1) + 2;
  return puVar1;
}


// ===== 00851194  FUN_00851194 =====

void FUN_00851194(undefined8 *param_1,undefined4 param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  *(undefined4 *)(param_1 + 1) = param_2;
  *param_1 = &PTR_FUN_00d3a5c0;
  param_1[2] = param_3;
  uVar2 = (**(code **)(*param_3 + 0x10))(param_3);
  uVar3 = (**(code **)(*param_3 + 0x18))(param_3,uVar2);
  uVar4 = -uVar2 / 1000;
  if (500 < -uVar2 % 1000) {
    uVar4 = uVar4 + 1;
  }
  uVar1 = -(uVar2 / 1000) - (ulong)(499 < uVar2 % 1000);
  if ((uVar2 & 0x8000000000000000) != 0) {
    uVar1 = uVar4;
  }
  param_1[3] = ((long)((double)(uVar3 & 0xffffffff) / DAT_001f4ff8 + 0.5) + (uVar3 >> 0x20) * 1000 +
               uVar1) * 1000 + -0x7d91048bca000;
  FUN_008531f8(param_1 + 4,1000000);
  *(undefined2 *)((long)param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0x32;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined1 *)((long)param_1 + 0xba) = 0;
  param_1[0x19] = 0xffffffffffffffff;
  param_1[0x18] = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  *(undefined1 *)((long)param_1 + 0xd2) = 0;
  FUN_007ccda0(param_1 + 0x1b);
  *(undefined4 *)(param_1 + 0x31) = 0;
  param_1[0x32] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x33) = 0;
  return;
}


// ===== 00851300  FUN_00851300 =====

void FUN_00851300(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d3a5c0;
  FUN_007de938(param_1 + 4);
  return;
}


// ===== 00851314  FUN_00851314 =====

void FUN_00851314(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d3a5c0;
  FUN_007de938(param_1 + 4);
  operator_delete(param_1);
  return;
}


// ===== 00851350  FUN_00851350 =====

bool FUN_00851350(long param_1,long param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  
  uVar1 = *(uint *)(param_2 + 0x7c);
  uVar4 = (ulong)uVar1;
  if ((int)uVar1 < 1) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../modules/rtp_rtcp/source/receive_statistics_impl.cc",0x142,"frequency_hz > 0"
                 ,&DAT_001fbedc,uVar4,0);
  }
  if ((*(byte *)(param_1 + 0xa0) & 1) != 0) {
    lVar5 = 0x7fffffffffffffff;
    if ((param_3 != 0x7fffffffffffffff) &&
       (lVar6 = *(long *)(param_1 + 0x98), lVar6 != -0x8000000000000000)) {
      lVar5 = -0x8000000000000000;
      if (lVar6 != 0x7fffffffffffffff && param_3 != -0x8000000000000000) {
        lVar5 = param_3 - lVar6;
      }
    }
    fVar7 = SQRT((float)(*(uint *)(param_1 + 0x88) >> 4));
    fVar7 = ((fVar7 + fVar7) / (float)uVar1) * 1e+06;
    if ((fVar7 == INFINITY) || (lVar6 = (long)fVar7, lVar6 == 0x7fffffffffffffff)) {
      bVar3 = false;
    }
    else {
      if (lVar6 < 0x3e9) {
        lVar6 = 1000;
      }
      uVar2 = 0;
      if (uVar4 != 0) {
        uVar2 = ((ulong)(uint)(*(int *)(param_2 + 8) - *(int *)(param_1 + 0xa8)) * 1000000) / uVar4;
      }
      bVar3 = (long)(lVar6 + uVar2) < lVar5;
    }
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/optional:1064: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
            );
}


// ===== 00851468  FUN_00851468 =====

void FUN_00851468(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  bool bVar7;
  undefined8 uVar8;
  int iVar9;
  ushort uVar10;
  ulong uVar11;
  long lVar12;
  
  uVar8 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
  FUN_008532e0(param_1 + 0x20,
               *(long *)(param_2 + 0x18) + *(long *)(param_2 + 0x10) + (ulong)*(byte *)(param_2 + 2)
               ,uVar8);
  FUN_007cce34(param_1 + 0xe0,param_2);
  iVar2 = *(int *)(param_1 + 0x8c);
  iVar9 = iVar2 + -1;
  *(int *)(param_1 + 0x8c) = iVar9;
  uVar10 = *(ushort *)(param_2 + 4);
  uVar11 = (ulong)uVar10;
  if ((*(byte *)(param_1 + 0xba) & 1) != 0) {
    uVar4 = (uint)uVar10 - (uint)*(ushort *)(param_1 + 0xb8);
    iVar6 = (int)(short)uVar4;
    bVar7 = (uint)*(ushort *)(param_1 + 0xb8) <= (uint)uVar10 && uVar4 != 0;
    if (uVar4 != 0x8000) {
      bVar7 = iVar6 != -1 && iVar6 + 1 < 0 == SCARRY4(iVar6,1);
    }
    uVar11 = (ulong)uVar4 & 0xffff;
    if (!bVar7) {
      uVar11 = (ulong)uVar4 & 0xffff | 0xffffffffffff0000;
    }
    uVar11 = uVar11 + *(long *)(param_1 + 0xb0);
  }
  bVar3 = *(byte *)(param_1 + 0xa0);
  if ((bVar3 & 1) == 0) {
    lVar12 = uVar11 - 1;
    *(ulong *)(param_1 + 0xc0) = uVar11;
    *(long *)(param_1 + 400) = lVar12;
    *(undefined8 *)(param_1 + 0xd8) = uVar8;
  }
  else {
    if (*(char *)(param_1 + 0xd2) == '\x01') {
      iVar9 = iVar2 + -2;
      *(undefined1 *)(param_1 + 0xd2) = 0;
      *(int *)(param_1 + 0x8c) = iVar9;
      uVar10 = *(ushort *)(param_2 + 4);
      if (uVar10 == (ushort)(*(short *)(param_1 + 0xd0) + 1U)) {
        lVar12 = uVar11 - 2;
        *(long *)(param_1 + 400) = lVar12;
        goto LAB_00851568;
      }
    }
    lVar12 = *(long *)(param_1 + 200);
    lVar5 = uVar11 - lVar12;
    lVar1 = -lVar5;
    if (-1 < lVar5) {
      lVar1 = lVar5;
    }
    if (*(int *)(param_1 + 0x80) < lVar1) {
      *(ushort *)(param_1 + 0xd0) = uVar10;
      *(undefined1 *)(param_1 + 0xd2) = 1;
      *(int *)(param_1 + 0x8c) = iVar9 + 1;
      return;
    }
    if ((long)uVar11 <= lVar12) {
      if (*(char *)(param_1 + 0x84) != '\x01') {
        return;
      }
      uVar11 = FUN_00851350(param_1,param_2,uVar8);
      if ((uVar11 & 1) == 0) {
        return;
      }
      FUN_007cce34(param_1 + 0x118,param_2);
      return;
    }
  }
LAB_00851568:
  *(ulong *)(param_1 + 200) = uVar11;
  *(int *)(param_1 + 0x8c) = iVar9 + ((int)uVar11 - (int)lVar12);
  uVar10 = *(ushort *)(param_2 + 4);
  uVar11 = (ulong)uVar10;
  if ((*(byte *)(param_1 + 0xba) & 1) != 0) {
    uVar4 = (uint)uVar10 - (uint)*(ushort *)(param_1 + 0xb8);
    iVar2 = (int)(short)uVar4;
    bVar7 = (uint)*(ushort *)(param_1 + 0xb8) <= (uint)uVar10 && uVar4 != 0;
    if (uVar4 != 0x8000) {
      bVar7 = iVar2 != -1 && iVar2 + 1 < 0 == SCARRY4(iVar2,1);
    }
    uVar11 = (ulong)uVar4 & 0xffff;
    if (!bVar7) {
      uVar11 = (ulong)uVar4 & 0xffff | 0xffffffffffff0000;
    }
    uVar11 = uVar11 + *(long *)(param_1 + 0xb0);
  }
  *(ulong *)(param_1 + 0xb0) = uVar11;
  *(ushort *)(param_1 + 0xb8) = uVar10;
  *(undefined1 *)(param_1 + 0xba) = 1;
  if ((*(int *)(param_2 + 8) == *(int *)(param_1 + 0xa8)) ||
     ((ulong)(*(long *)(param_1 + 0xf8) - *(long *)(param_1 + 0x130)) < 2)) {
    *(int *)(param_1 + 0xa8) = *(int *)(param_2 + 8);
  }
  else {
    FUN_008516d8(param_1,param_2,uVar8);
    *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 8);
    bVar3 = *(byte *)(param_1 + 0xa0) & 1;
  }
  if (bVar3 == 0) {
    if (param_1 == -0x98) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *(undefined8 *)(param_1 + 0x98) = uVar8;
    *(undefined1 *)(param_1 + 0xa0) = 1;
  }
  else {
    *(undefined8 *)(param_1 + 0x98) = uVar8;
  }
  return;
}


// ===== 008516d8  FUN_008516d8 =====

void FUN_008516d8(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  
  if ((*(byte *)(param_1 + 0xa0) & 1) != 0) {
    lVar6 = *(long *)(param_1 + 0x98);
    iVar3 = *(int *)(param_2 + 0x7c);
    lVar2 = -0x8000000000000000;
    if (lVar6 != 0x7fffffffffffffff && param_3 != -0x8000000000000000) {
      lVar2 = param_3 - lVar6;
    }
    lVar1 = 0x7fffffffffffffff;
    if (lVar6 != -0x8000000000000000) {
      lVar1 = lVar2;
    }
    lVar2 = 0x7fffffffffffffff;
    if (param_3 != 0x7fffffffffffffff) {
      lVar2 = lVar1;
    }
    uVar7 = lVar2 * iVar3;
    iVar8 = (int)(uVar7 / 1000000);
    if (499999 < uVar7 % 1000000) {
      iVar8 = iVar8 + 1;
    }
    if ((uVar7 & 0x8000000000000000) != 0) {
      iVar8 = -(int)(-uVar7 / 1000000) - (uint)(500000 < -uVar7 % 1000000);
    }
    iVar8 = (*(int *)(param_1 + 0xa8) - *(int *)(param_2 + 8)) + iVar8;
    if ((iVar3 != 0) && (iVar4 = *(int *)(param_1 + 0x198), iVar3 != iVar4)) {
      if (iVar4 != 0) {
        uVar5 = 0;
        if ((long)iVar4 != 0) {
          uVar5 = (undefined4)
                  (((ulong)*(uint *)(param_1 + 0x88) * (long)iVar3) / (ulong)(long)iVar4);
        }
        *(undefined4 *)(param_1 + 0x88) = uVar5;
      }
      *(int *)(param_1 + 0x198) = iVar3;
    }
    if (iVar8 + 449999U < 899999) {
      iVar3 = -iVar8;
      if (-1 < iVar8) {
        iVar3 = iVar8;
      }
      *(int *)(param_1 + 0x88) =
           *(int *)(param_1 + 0x88) + ((int)((iVar3 << 4 | 8U) - *(int *)(param_1 + 0x88)) >> 4);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
            );
}


// ===== 00851810  FUN_00851810 =====

void FUN_00851810(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x80) = param_2;
  return;
}


// ===== 0085181c  FUN_0085181c =====

void FUN_0085181c(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x84) = param_2;
  return;
}


// ===== 00851828  FUN_00851828 =====

void FUN_00851828(undefined4 *param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar1 = *(uint *)(param_2 + 0x88);
  uVar2 = *(undefined4 *)(param_2 + 0x8c);
  uVar3 = *(uint *)(param_2 + 0x198);
  *(undefined8 *)(param_1 + 2) = 0;
  uVar1 = uVar1 >> 4;
  *(undefined1 **)(param_1 + 6) = &DAT_aaaaaaaaaaaaaaaa;
  *(undefined1 **)(param_1 + 4) = &DAT_aaaaaaaaaaaaaaaa;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = uVar2;
  param_1[1] = uVar1;
  if (0 < (int)uVar3) {
    uVar4 = 0;
    if ((ulong)uVar3 != 0) {
      uVar4 = ((ulong)uVar1 * 1000000) / (ulong)uVar3;
    }
    *(ulong *)(param_1 + 2) = uVar4;
  }
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    lVar7 = *(long *)(param_2 + 0x98);
    lVar5 = 0x7fffffffffffffff;
    if ((lVar7 != 0x7fffffffffffffff) &&
       (lVar8 = *(long *)(param_2 + 0x18), lVar8 != 0x7fffffffffffffff)) {
      lVar5 = -0x8000000000000000;
      if (lVar8 != -0x8000000000000000 && lVar7 != -0x8000000000000000) {
        lVar5 = lVar7 + lVar8;
      }
    }
    *(long *)(param_1 + 4) = lVar5;
    *(undefined1 *)(param_1 + 6) = 1;
  }
  uVar10 = *(undefined8 *)(param_2 + 0xe8);
  uVar9 = *(undefined8 *)(param_2 + 0xe0);
  uVar12 = *(undefined8 *)(param_2 + 0xf8);
  uVar11 = *(undefined8 *)(param_2 + 0xf0);
  uVar13 = *(undefined8 *)(param_2 + 0x100);
  uVar6 = *(undefined8 *)(param_2 + 0x110);
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x108);
  *(undefined8 *)(param_1 + 0x10) = uVar13;
  *(undefined8 *)(param_1 + 10) = uVar10;
  *(undefined8 *)(param_1 + 8) = uVar9;
  *(undefined8 *)(param_1 + 0xe) = uVar12;
  *(undefined8 *)(param_1 + 0xc) = uVar11;
  *(undefined8 *)(param_1 + 0x14) = uVar6;
  return;
}


// ===== 008518d0  FUN_008518d0 =====

void FUN_008518d0(long param_1,long *param_2)

{
  undefined1 uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  
  if (*(char *)(param_1 + 0xa0) == '\x01') {
    lVar3 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
    if ((*(byte *)(param_1 + 0xa0) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                );
    }
    if (((lVar3 != 0x7fffffffffffffff) &&
        (lVar7 = *(long *)(param_1 + 0x98), lVar7 != -0x8000000000000000)) &&
       ((lVar3 == -0x8000000000000000 ||
        ((lVar7 == 0x7fffffffffffffff || (lVar3 - lVar7 < 8000000)))))) {
      uVar4 = param_2[1];
      if (uVar4 < (ulong)param_2[2]) {
        if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        FUN_007d0054(uVar4);
        lVar3 = uVar4 + 0x1c;
      }
      else {
        lVar3 = FUN_00852340(param_2);
      }
      param_2[1] = lVar3;
      if (*param_2 == lVar3) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__vector/vector.h:439: libc++ Hardening assertion !empty() failed: back() called on an empty vector\n"
                  );
      }
      *(undefined4 *)(lVar3 + -0x1c) = *(undefined4 *)(param_1 + 8);
      lVar7 = *(long *)(param_1 + 200) - *(long *)(param_1 + 400);
      iVar6 = *(int *)(param_1 + 0x8c);
      if ((0 < lVar7) && (iVar2 = iVar6 - *(int *)(param_1 + 0x188), 0 < iVar2)) {
        uVar1 = 0;
        if (lVar7 != 0) {
          uVar1 = (undefined1)((long)(iVar2 * 0xff) / lVar7);
        }
        *(undefined1 *)(lVar3 + -0x18) = uVar1;
        iVar6 = *(int *)(param_1 + 0x8c);
      }
      uVar5 = *(int *)(param_1 + 0x90) + iVar6;
      if ((int)uVar5 < 0) {
        uVar5 = 0;
        *(int *)(param_1 + 0x90) = -iVar6;
      }
      else if (0x7fffff < uVar5) {
        if ((*(byte *)(param_1 + 0x85) & 1) == 0) {
          *(undefined1 *)(param_1 + 0x85) = 1;
          uVar4 = FUN_004022fc();
          if ((uVar4 & 1) == 0) {
            FUN_00623bb0(&DAT_001f6220,"../../modules/rtp_rtcp/source/receive_statistics_impl.cc",
                         0x8aa,"Cumulative loss reached maximum value for ssrc ",
                         *(undefined4 *)(param_1 + 8));
          }
        }
        uVar5 = 0x7fffff;
      }
      FUN_007d01dc((undefined4 *)(lVar3 + -0x1c),uVar5);
      *(int *)(lVar3 + -0x10) = (int)*(undefined8 *)(param_1 + 200);
      *(uint *)(lVar3 + -0xc) = *(uint *)(param_1 + 0x88) >> 4;
      *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_1 + 0x8c);
      *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_1 + 200);
    }
  }
  return;
}


// ===== 00851abc  FUN_00851abc =====

ulong FUN_00851abc(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((*(char *)(param_1 + 0xa0) == '\x01') &&
     (uVar1 = (*(long *)(param_1 + 200) - *(long *)(param_1 + 0xc0)) + 1, 0 < (long)uVar1)) {
    uVar2 = 0x100000000;
    if (0 < (int)*(uint *)(param_1 + 0x8c)) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = ((ulong)*(uint *)(param_1 + 0x8c) * 100) / uVar1;
      }
      uVar2 = uVar2 & 0xffffffff | 0x100000000;
    }
    return uVar2;
  }
  return 0;
}


// ===== 00851b0c  FUN_00851b0c =====

void FUN_00851b0c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar1 = *(undefined8 *)(param_2 + 0xd8);
  uVar3 = *(undefined8 *)(param_2 + 0xf0);
  uVar2 = *(undefined8 *)(param_2 + 0xe8);
  uVar10 = *(undefined8 *)(param_2 + 0x110);
  uVar9 = *(undefined8 *)(param_2 + 0x108);
  param_1[1] = *(undefined8 *)(param_2 + 0xe0);
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar5 = *(undefined8 *)(param_2 + 0x158);
  uVar2 = *(undefined8 *)(param_2 + 0x170);
  uVar1 = *(undefined8 *)(param_2 + 0x168);
  uVar4 = *(undefined8 *)(param_2 + 0x180);
  uVar3 = *(undefined8 *)(param_2 + 0x178);
  param_1[0x11] = *(undefined8 *)(param_2 + 0x160);
  param_1[0x10] = uVar5;
  param_1[0x13] = uVar2;
  param_1[0x12] = uVar1;
  uVar6 = *(undefined8 *)(param_2 + 0x140);
  uVar5 = *(undefined8 *)(param_2 + 0x138);
  uVar8 = *(undefined8 *)(param_2 + 0x150);
  uVar7 = *(undefined8 *)(param_2 + 0x148);
  param_1[0x15] = uVar4;
  param_1[0x14] = uVar3;
  uVar2 = *(undefined8 *)(param_2 + 0x120);
  uVar1 = *(undefined8 *)(param_2 + 0x118);
  uVar4 = *(undefined8 *)(param_2 + 0x130);
  uVar3 = *(undefined8 *)(param_2 + 0x128);
  param_1[0xd] = uVar6;
  param_1[0xc] = uVar5;
  param_1[0xf] = uVar8;
  param_1[0xe] = uVar7;
  param_1[9] = uVar2;
  param_1[8] = uVar1;
  param_1[0xb] = uVar4;
  param_1[10] = uVar3;
  uVar1 = *(undefined8 *)(param_2 + 0xf8);
  param_1[5] = *(undefined8 *)(param_2 + 0x100);
  param_1[4] = uVar1;
  param_1[7] = uVar10;
  param_1[6] = uVar9;
  return;
}


// ===== 00851b50  FUN_00851b50 =====

undefined4 FUN_00851b50(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong extraout_x1;
  
  uVar2 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
  uVar1 = FUN_00853260(param_1 + 0x20,uVar2);
  if ((extraout_x1 & 1) == 0) {
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 00851b98  FUN_00851b98 =====

undefined8 * FUN_00851b98(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *local_28;
  
  puVar1 = (undefined8 *)operator_new(0xa8);
  *puVar1 = &PTR_FUN_00d3a6f0;
  puVar1[1] = &PTR_FUN_00d3a738;
  local_28 = &DAT_aaaaaaaaaaaaaaaa;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_28);
  pthread_mutex_init((pthread_mutex_t *)(puVar1 + 2),(pthread_mutexattr_t *)&local_28);
  pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_28);
  puVar1[9] = param_1;
  puVar1[7] = &PTR_FUN_00d3a620;
  puVar1[8] = &PTR_FUN_00d3a668;
  puVar1[0xc] = FUN_0085261c;
  puVar1[0xd] = &DAT_0021f8f8;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0x13] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  return puVar1;
}


// ===== 00851c40  FUN_00851c40 =====

void FUN_00851c40(undefined8 param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_00851c78(param_1,*(undefined4 *)(param_2 + 0xc));
                    /* WARNING: Could not recover jumptable at 0x00851c74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x48))(plVar1,param_2);
  return;
}


// ===== 00851c78  FUN_00851c78 =====

long FUN_00851c78(long param_1,uint param_2)

{
  uint *puVar1;
  long lVar2;
  undefined8 uVar3;
  uint *puVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  uint *puVar8;
  uint local_2c;
  long *local_28;
  
  puVar1 = *(uint **)(param_1 + 0x58);
  lVar2 = (long)*(uint **)(param_1 + 0x60) - (long)puVar1;
  if (lVar2 != 0) {
    uVar6 = lVar2 >> 4;
    puVar8 = puVar1;
    do {
      uVar7 = uVar6 >> 1;
      puVar1 = puVar8 + uVar7 * 4 + 4;
      uVar6 = uVar6 + ~uVar7;
      if (param_2 <= puVar8[uVar7 * 4]) {
        puVar1 = puVar8;
        uVar6 = uVar7;
      }
      puVar8 = puVar1;
    } while (uVar6 != 0);
  }
  local_2c = param_2;
  if ((puVar1 == *(uint **)(param_1 + 0x60)) || (param_2 < *puVar1)) {
    local_28 = (long *)0x0;
    puVar1 = (uint *)FUN_00852da0((long *)(param_1 + 0x58),puVar1,&local_2c,&local_28);
    plVar5 = local_28;
    local_28 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  lVar2 = *(long *)(puVar1 + 2);
  if (lVar2 == 0) {
    uVar3 = (**(code **)(param_1 + 0x28))(param_1 + 0x18,local_2c,*(undefined8 *)(param_1 + 0x10));
    plVar5 = *(long **)(puVar1 + 2);
    *(undefined8 *)(puVar1 + 2) = uVar3;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
    puVar8 = *(uint **)(param_1 + 0x48);
    if (puVar8 < *(uint **)(param_1 + 0x50)) {
      if (puVar8 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      puVar4 = puVar8 + 1;
      *puVar8 = local_2c;
    }
    else {
      puVar4 = (uint *)FUN_00852528(param_1 + 0x40,&local_2c);
    }
    *(uint **)(param_1 + 0x48) = puVar4;
    lVar2 = *(long *)(puVar1 + 2);
  }
  return lVar2;
}


// ===== 00851d9c  FUN_00851d9c =====

void FUN_00851d9c(long param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_00851c78(param_1 + -8,*(undefined4 *)(param_2 + 0xc));
                    /* WARNING: Could not recover jumptable at 0x00851dd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x48))(plVar1,param_2);
  return;
}


// ===== 00851dd8  FUN_00851dd8 =====

undefined8 FUN_00851dd8(long param_1,uint param_2)

{
  long lVar1;
  uint *puVar2;
  uint *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  puVar3 = *(uint **)(param_1 + 0x58);
  lVar1 = (long)*(uint **)(param_1 + 0x60) - (long)puVar3;
  if (lVar1 != 0) {
    uVar4 = lVar1 >> 4;
    puVar2 = puVar3;
    do {
      uVar5 = uVar4 >> 1;
      puVar3 = puVar2 + uVar5 * 4 + 4;
      uVar4 = uVar4 + ~uVar5;
      if (param_2 <= puVar2[uVar5 * 4]) {
        puVar3 = puVar2;
        uVar4 = uVar5;
      }
      puVar2 = puVar3;
    } while (uVar4 != 0);
  }
  if ((puVar3 != *(uint **)(param_1 + 0x60)) && (*puVar3 <= param_2)) {
    return *(undefined8 *)(puVar3 + 2);
  }
  return 0;
}


// ===== 00851e34  FUN_00851e34 =====

void FUN_00851e34(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_00851c78();
                    /* WARNING: Could not recover jumptable at 0x00851e64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_3);
  return;
}


// ===== 00851e68  FUN_00851e68 =====

void FUN_00851e68(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_00851c78();
                    /* WARNING: Could not recover jumptable at 0x00851e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x40))(plVar1,param_3);
  return;
}


// ===== 00851e9c  FUN_00851e9c =====

void FUN_00851e9c(long *param_1,long param_2,ulong param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  ulong uVar9;
  long lVar10;
  
  lVar4 = *(long *)(param_2 + 0x40);
  lVar10 = *(long *)(param_2 + 0x48);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar3 = lVar10 - lVar4 >> 2;
  if (param_3 <= uVar3) {
    uVar3 = param_3;
  }
  FUN_00851fe4(param_1,uVar3);
  lVar4 = *(long *)(param_2 + 0x40);
  lVar10 = *(long *)(param_2 + 0x48) - lVar4;
  if ((lVar10 == 0) || (param_3 <= (ulong)((param_1[1] - *param_1 >> 2) * 0x6db6db6db6db6db7))) {
    lVar10 = 0;
  }
  else {
    uVar5 = lVar10 >> 2;
    uVar3 = 0;
    do {
      uVar3 = uVar3 + 1;
      uVar9 = uVar3 + *(long *)(param_2 + 0x38);
      uVar2 = 0;
      if (uVar5 != 0) {
        uVar2 = uVar9 / uVar5;
      }
      lVar10 = uVar9 - uVar2 * uVar5;
      puVar8 = *(uint **)(param_2 + 0x58);
      puVar6 = *(uint **)(param_2 + 0x60);
      uVar1 = *(uint *)(lVar4 + lVar10 * 4);
      if ((long)puVar6 - (long)puVar8 != 0) {
        uVar5 = (long)puVar6 - (long)puVar8 >> 4;
        puVar7 = puVar8;
        do {
          uVar9 = uVar5 >> 1;
          puVar8 = puVar7 + uVar9 * 4 + 4;
          uVar5 = uVar5 + ~uVar9;
          if (uVar1 <= puVar7[uVar9 * 4]) {
            puVar8 = puVar7;
            uVar5 = uVar9;
          }
          puVar7 = puVar8;
        } while (uVar5 != 0);
      }
      if ((puVar8 != puVar6) && (*puVar8 <= uVar1)) {
        puVar6 = puVar8;
      }
      (**(code **)(**(long **)(puVar6 + 2) + 0x30))(*(long **)(puVar6 + 2),param_1);
      lVar4 = *(long *)(param_2 + 0x40);
      uVar5 = *(long *)(param_2 + 0x48) - lVar4 >> 2;
    } while ((uVar3 < uVar5) &&
            ((ulong)((param_1[1] - *param_1 >> 2) * 0x6db6db6db6db6db7) < param_3));
  }
  *(long *)(param_2 + 0x38) = lVar10;
  return;
}


// ===== 00851fe4  FUN_00851fe4 =====

void FUN_00851fe4(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  void *pvVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar11 = (undefined8 *)*param_1;
  if ((ulong)((param_1[2] - (long)puVar11 >> 2) * 0x6db6db6db6db6db7) < param_2) {
    if (0x924924924924924 < param_2) {
      puVar11 = (undefined8 *)FUN_007cf80c();
      pvVar12 = (void *)puVar11[0xb];
      *puVar11 = &PTR_FUN_00d3a620;
      puVar11[1] = &PTR_FUN_00d3a668;
      if (pvVar12 != (void *)0x0) {
        pvVar5 = pvVar12;
        pvVar4 = (void *)puVar11[0xc];
        if (pvVar12 != (void *)puVar11[0xc]) {
          do {
            pvVar5 = (void *)((long)pvVar4 + -0x10);
            if (pvVar5 == (void *)0x0) goto LAB_00852274;
            plVar3 = *(long **)((long)pvVar4 + -8);
            *(undefined8 *)((long)pvVar4 + -8) = 0;
            if (plVar3 != (long *)0x0) {
              (**(code **)(*plVar3 + 8))();
            }
            pvVar4 = pvVar5;
          } while (pvVar5 != pvVar12);
          pvVar5 = (void *)puVar11[0xb];
        }
        puVar11[0xc] = pvVar12;
        operator_delete(pvVar5);
      }
      pvVar12 = (void *)puVar11[8];
      if (pvVar12 != (void *)0x0) {
        pvVar5 = (void *)puVar11[9];
        uVar10 = (ulong)((long)pvVar5 + (-4 - ((long)pvVar5 << 0x3e))) >> 2;
        uVar7 = (ulong)(((long)pvVar12 - (long)pvVar5 << 0x3e) - ((long)pvVar12 - (long)pvVar5)) >>
                2;
        if (uVar10 <= uVar7) {
          uVar7 = uVar10;
        }
        if ((1 < uVar7) && ((((int)pvVar12 - (int)pvVar5 | -(int)pvVar5) & 3U) == 0)) {
          uVar7 = uVar7 & 0x3ffffffffffffffe;
          pvVar5 = (void *)((long)pvVar5 + uVar7 * -4);
          do {
            uVar7 = uVar7 - 2;
          } while (uVar7 != 0);
        }
        while (pvVar5 != pvVar12) {
          pvVar5 = (void *)((long)pvVar5 + -4);
          if (pvVar5 == (void *)0x0) {
LAB_00852274:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
        }
        puVar11[9] = pvVar12;
        operator_delete(pvVar12);
      }
      if (*(code **)(puVar11[6] + 8) == (code *)0x0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x008522b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(puVar11[6] + 8))(puVar11[3]);
      return;
    }
    puVar13 = (undefined8 *)param_1[1];
    puVar2 = (undefined8 *)operator_new(param_2 * 0x1c);
    lVar1 = (long)puVar13 - (long)puVar11;
    puVar8 = puVar11;
    puVar9 = puVar2;
    if (lVar1 != 0) {
      do {
        if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        uVar14 = *(undefined8 *)((long)puVar8 + 0xc);
        puVar6 = (undefined8 *)((long)puVar8 + 0x1c);
        uVar16 = puVar8[1];
        uVar15 = *puVar8;
        *(undefined8 *)((long)puVar9 + 0x14) = *(undefined8 *)((long)puVar8 + 0x14);
        *(undefined8 *)((long)puVar9 + 0xc) = uVar14;
        puVar9[1] = uVar16;
        *puVar9 = uVar15;
        puVar8 = puVar6;
        puVar9 = (undefined8 *)((long)puVar9 + 0x1c);
      } while (puVar6 != puVar13);
      uVar7 = lVar1 * 0x2db6db6db6db6db7 - 4U >> 2;
      uVar10 = (ulong)((long)puVar11 * -0x2db6db6db6db6db7) >> 2;
      if (uVar10 <= uVar7) {
        uVar7 = uVar10;
      }
      puVar8 = puVar11;
      if ((1 < uVar7) && ((((int)puVar13 - (int)puVar11 | -(int)puVar11) & 3U) == 0)) {
        uVar7 = uVar7 & 0x3ffffffffffffffe;
        puVar8 = (undefined8 *)((long)puVar11 + uVar7 * 0x1c);
        do {
          uVar7 = uVar7 - 2;
        } while (uVar7 != 0);
      }
      do {
        if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        puVar8 = (undefined8 *)((long)puVar8 + 0x1c);
      } while (puVar8 != puVar13);
    }
    *param_1 = puVar2;
    param_1[1] = (long)puVar2 + lVar1;
    param_1[2] = (void *)((long)puVar2 + param_2 * 0x1c);
    if (puVar11 != (undefined8 *)0x0) {
      operator_delete(puVar11);
      return;
    }
  }
  return;
}


// ===== 00852180  FUN_00852180 =====

void FUN_00852180(undefined8 *param_1)

{
  long *plVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  void *pvVar6;
  
  pvVar6 = (void *)param_1[0xb];
  *param_1 = &PTR_FUN_00d3a620;
  param_1[1] = &PTR_FUN_00d3a668;
  if (pvVar6 != (void *)0x0) {
    pvVar3 = pvVar6;
    pvVar2 = (void *)param_1[0xc];
    if (pvVar6 != (void *)param_1[0xc]) {
      do {
        pvVar3 = (void *)((long)pvVar2 + -0x10);
        if (pvVar3 == (void *)0x0) goto LAB_00852274;
        plVar1 = *(long **)((long)pvVar2 + -8);
        *(undefined8 *)((long)pvVar2 + -8) = 0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        pvVar2 = pvVar3;
      } while (pvVar3 != pvVar6);
      pvVar3 = (void *)param_1[0xb];
    }
    param_1[0xc] = pvVar6;
    operator_delete(pvVar3);
  }
  pvVar6 = (void *)param_1[8];
  if (pvVar6 != (void *)0x0) {
    pvVar3 = (void *)param_1[9];
    uVar5 = (ulong)((long)pvVar3 + (-4 - ((long)pvVar3 << 0x3e))) >> 2;
    uVar4 = (ulong)(((long)pvVar6 - (long)pvVar3 << 0x3e) - ((long)pvVar6 - (long)pvVar3)) >> 2;
    if (uVar5 <= uVar4) {
      uVar4 = uVar5;
    }
    if ((1 < uVar4) && ((((int)pvVar6 - (int)pvVar3 | -(int)pvVar3) & 3U) == 0)) {
      uVar4 = uVar4 & 0x3ffffffffffffffe;
      pvVar3 = (void *)((long)pvVar3 + uVar4 * -4);
      do {
        uVar4 = uVar4 - 2;
      } while (uVar4 != 0);
    }
    while (pvVar3 != pvVar6) {
      pvVar3 = (void *)((long)pvVar3 + -4);
      if (pvVar3 == (void *)0x0) {
LAB_00852274:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    param_1[9] = pvVar6;
    operator_delete(pvVar6);
  }
  if (*(code **)(param_1[6] + 8) == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x008522b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[6] + 8))(param_1[3]);
  return;
}


// ===== 008522d0  FUN_008522d0 =====

void FUN_008522d0(void *param_1)

{
  FUN_00852180();
  operator_delete(param_1);
  return;
}


// ===== 00852300  FUN_00852300 =====

void FUN_00852300(long param_1)

{
  FUN_00852180(param_1 + -8);
  return;
}


// ===== 0085230c  FUN_0085230c =====

void FUN_0085230c(long param_1)

{
  FUN_00852180((void *)(param_1 + -8));
  operator_delete((void *)(param_1 + -8));
  return;
}


// ===== 00852340  FUN_00852340 =====

long FUN_00852340(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar12 = param_1[1] - *param_1;
  uVar5 = (lVar12 >> 2) * 0x6db6db6db6db6db7 + 1;
  if (uVar5 < 0x924924924924925) {
    lVar6 = param_1[2] - *param_1 >> 2;
    uVar8 = lVar6 * -0x2492492492492492;
    if (uVar8 < uVar5 || uVar8 - uVar5 == 0) {
      uVar8 = uVar5;
    }
    if (0x492492492492491 < (ulong)(lVar6 * 0x6db6db6db6db6db7)) {
      uVar8 = 0x924924924924924;
    }
    if (uVar8 == 0) {
      pvVar3 = (void *)0x0;
    }
    else {
      if (0x924924924924924 < uVar8) goto LAB_00852524;
      pvVar3 = operator_new(uVar8 * 0x1c);
      lVar12 = (long)pvVar3 + lVar12;
    }
    if (lVar12 == 0) {
LAB_008524f8:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    FUN_007d0054(lVar12);
    puVar4 = (undefined8 *)*param_1;
    puVar2 = (undefined8 *)param_1[1];
    puVar1 = (undefined8 *)((long)puVar4 + (lVar12 - (long)puVar2));
    puVar9 = puVar4;
    puVar11 = puVar1;
    if ((long)puVar2 - (long)puVar4 != 0) {
      do {
        if (puVar11 == (undefined8 *)0x0) goto LAB_008524f8;
        uVar13 = *(undefined8 *)((long)puVar9 + 0xc);
        puVar10 = (undefined8 *)((long)puVar9 + 0x1c);
        uVar15 = puVar9[1];
        uVar14 = *puVar9;
        *(undefined8 *)((long)puVar11 + 0x14) = *(undefined8 *)((long)puVar9 + 0x14);
        *(undefined8 *)((long)puVar11 + 0xc) = uVar13;
        puVar11[1] = uVar15;
        *puVar11 = uVar14;
        puVar9 = puVar10;
        puVar11 = (undefined8 *)((long)puVar11 + 0x1c);
      } while (puVar10 != puVar2);
      uVar5 = (ulong)((long)puVar4 * -0x2db6db6db6db6db7) >> 2;
      uVar7 = ((long)puVar2 - (long)puVar4) * 0x2db6db6db6db6db7 - 4U >> 2;
      if (uVar7 <= uVar5) {
        uVar5 = uVar7;
      }
      if ((1 < uVar5) && ((((int)puVar2 - (int)puVar4 | -(int)puVar4) & 3U) == 0)) {
        uVar5 = uVar5 & 0x3ffffffffffffffe;
        puVar4 = (undefined8 *)((long)puVar4 + uVar5 * 0x1c);
        do {
          uVar5 = uVar5 - 2;
        } while (uVar5 != 0);
      }
      do {
        if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        puVar4 = (undefined8 *)((long)puVar4 + 0x1c);
      } while (puVar4 != puVar2);
      puVar4 = (undefined8 *)*param_1;
    }
    *param_1 = (long)puVar1;
    param_1[1] = lVar12 + 0x1c;
    param_1[2] = (long)((long)pvVar3 + uVar8 * 0x1c);
    if (puVar4 != (undefined8 *)0x0) {
      operator_delete(puVar4);
    }
    return lVar12 + 0x1c;
  }
  FUN_007cf80c();
LAB_00852524:
                    /* WARNING: Subroutine does not return */
  FUN_005d55a4();
}


// ===== 00852528  FUN_00852528 =====

undefined4 * FUN_00852528(long *param_1,undefined4 *param_2)

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
                    /* WARNING: Subroutine does not return */
    FUN_005da79c();
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
    if (uVar5 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
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


// ===== 0085261c  FUN_0085261c =====

undefined8 * FUN_0085261c(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 *local_38;
  
  puVar1 = (undefined8 *)operator_new(0x1d0);
  *puVar1 = &PTR_FUN_00d3a690;
  local_38 = &DAT_aaaaaaaaaaaaaaaa;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_38);
  pthread_mutex_init((pthread_mutex_t *)(puVar1 + 1),(pthread_mutexattr_t *)&local_38);
  pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_38);
  FUN_00851194(puVar1 + 6,param_2,param_3);
  return puVar1;
}


// ===== 008526a8  FUN_008526a8 =====

int FUN_008526a8(undefined8 *param_1)

{
  int iVar1;
  
  *param_1 = &PTR_FUN_00d3a690;
  param_1[6] = &PTR_FUN_00d3a5c0;
  FUN_007de938(param_1 + 10);
  iVar1 = pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 1));
  return iVar1;
}


// ===== 008526f0  FUN_008526f0 =====

void FUN_008526f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d3a690;
  param_1[6] = &PTR_FUN_00d3a5c0;
  FUN_007de938(param_1 + 10);
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 1));
  operator_delete(param_1);
  return;
}


// ===== 00852744  FUN_00852744 =====

int FUN_00852744(undefined4 *param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_2 + 8));
  uVar1 = *(uint *)(param_2 + 0xb8);
  uVar2 = *(undefined4 *)(param_2 + 0xbc);
  uVar3 = *(uint *)(param_2 + 0x1c8);
  *(ulong *)(param_1 + 2) = 0;
  uVar1 = uVar1 >> 4;
  *(undefined1 **)(param_1 + 6) = &DAT_aaaaaaaaaaaaaaaa;
  *(undefined1 **)(param_1 + 4) = &DAT_aaaaaaaaaaaaaaaa;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = uVar2;
  param_1[1] = uVar1;
  if (0 < (int)uVar3) {
    uVar4 = 0;
    if ((ulong)uVar3 != 0) {
      uVar4 = ((ulong)uVar1 * 1000000) / (ulong)uVar3;
    }
    *(ulong *)(param_1 + 2) = uVar4;
  }
  if (*(char *)(param_2 + 0xd0) == '\x01') {
    lVar8 = *(long *)(param_2 + 200);
    lVar6 = 0x7fffffffffffffff;
    if ((lVar8 != 0x7fffffffffffffff) &&
       (lVar9 = *(long *)(param_2 + 0x48), lVar9 != 0x7fffffffffffffff)) {
      lVar6 = -0x8000000000000000;
      if (lVar9 != -0x8000000000000000 && lVar8 != -0x8000000000000000) {
        lVar6 = lVar8 + lVar9;
      }
    }
    *(long *)(param_1 + 4) = lVar6;
    *(undefined1 *)(param_1 + 6) = 1;
  }
  uVar10 = *(undefined8 *)(param_2 + 0x110);
  uVar12 = *(undefined8 *)(param_2 + 0x128);
  uVar11 = *(undefined8 *)(param_2 + 0x120);
  uVar14 = *(undefined8 *)(param_2 + 0x138);
  uVar13 = *(undefined8 *)(param_2 + 0x130);
  uVar7 = *(undefined8 *)(param_2 + 0x140);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 0x118);
  *(undefined8 *)(param_1 + 8) = uVar10;
  *(undefined8 *)(param_1 + 0xe) = uVar12;
  *(undefined8 *)(param_1 + 0xc) = uVar11;
  *(undefined8 *)(param_1 + 0x12) = uVar14;
  *(undefined8 *)(param_1 + 0x10) = uVar13;
  *(undefined8 *)(param_1 + 0x14) = uVar7;
  iVar5 = pthread_mutex_unlock((pthread_mutex_t *)(param_2 + 8));
  return iVar5;
}


// ===== 0085281c  FUN_0085281c =====

ulong FUN_0085281c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 8));
  if ((*(char *)(param_1 + 0xd0) == '\x01') &&
     (uVar1 = (*(long *)(param_1 + 0xf8) - *(long *)(param_1 + 0xf0)) + 1, 0 < (long)uVar1)) {
    uVar2 = 0x100000000;
    if (0 < (int)*(uint *)(param_1 + 0xbc)) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = ((ulong)*(uint *)(param_1 + 0xbc) * 100) / uVar1;
      }
      uVar2 = uVar2 & 0xffffffff | 0x100000000;
    }
  }
  else {
    uVar2 = 0;
  }
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 8));
  return uVar2;
}


// ===== 0085289c  FUN_0085289c =====

int FUN_0085289c(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_2 + 8));
  uVar3 = *(undefined8 *)(param_2 + 400);
  uVar2 = *(undefined8 *)(param_2 + 0x188);
  uVar5 = *(undefined8 *)(param_2 + 0x1a0);
  uVar4 = *(undefined8 *)(param_2 + 0x198);
  uVar6 = *(undefined8 *)(param_2 + 0x1a8);
  param_1[0x15] = *(undefined8 *)(param_2 + 0x1b0);
  param_1[0x14] = uVar6;
  param_1[0x11] = uVar3;
  param_1[0x10] = uVar2;
  param_1[0x13] = uVar5;
  param_1[0x12] = uVar4;
  uVar2 = *(undefined8 *)(param_2 + 0x148);
  uVar4 = *(undefined8 *)(param_2 + 0x160);
  uVar3 = *(undefined8 *)(param_2 + 0x158);
  param_1[9] = *(undefined8 *)(param_2 + 0x150);
  param_1[8] = uVar2;
  param_1[0xb] = uVar4;
  param_1[10] = uVar3;
  uVar4 = *(undefined8 *)(param_2 + 0x168);
  uVar3 = *(undefined8 *)(param_2 + 0x180);
  uVar2 = *(undefined8 *)(param_2 + 0x178);
  param_1[0xd] = *(undefined8 *)(param_2 + 0x170);
  param_1[0xc] = uVar4;
  param_1[0xf] = uVar3;
  param_1[0xe] = uVar2;
  uVar4 = *(undefined8 *)(param_2 + 0x108);
  uVar3 = *(undefined8 *)(param_2 + 0x120);
  uVar2 = *(undefined8 *)(param_2 + 0x118);
  param_1[1] = *(undefined8 *)(param_2 + 0x110);
  *param_1 = uVar4;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar4 = *(undefined8 *)(param_2 + 0x128);
  uVar3 = *(undefined8 *)(param_2 + 0x140);
  uVar2 = *(undefined8 *)(param_2 + 0x138);
  param_1[5] = *(undefined8 *)(param_2 + 0x130);
  param_1[4] = uVar4;
  param_1[7] = uVar3;
  param_1[6] = uVar2;
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_2 + 8));
  return iVar1;
}


// ===== 00852904  FUN_00852904 =====

undefined4 FUN_00852904(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong extraout_x1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 8));
  uVar2 = (**(code **)(**(long **)(param_1 + 0x40) + 0x10))();
  uVar1 = FUN_00853260(param_1 + 0x50,uVar2);
  if ((extraout_x1 & 1) == 0) {
    uVar1 = 0;
  }
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 8));
  return uVar1;
}


// ===== 00852960  FUN_00852960 =====

int FUN_00852960(long param_1,undefined8 param_2)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 8));
  FUN_008518d0(param_1 + 0x30,param_2);
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 8));
  return iVar1;
}


// ===== 008529a0  FUN_008529a0 =====

int FUN_008529a0(long param_1,undefined4 param_2)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 8));
  *(undefined4 *)(param_1 + 0xb0) = param_2;
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 8));
  return iVar1;
}


// ===== 008529d8  FUN_008529d8 =====

int FUN_008529d8(long param_1,undefined1 param_2)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 8));
  *(undefined1 *)(param_1 + 0xb4) = param_2;
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 8));
  return iVar1;
}


// ===== 00852a10  FUN_00852a10 =====

int FUN_00852a10(long param_1,undefined8 param_2)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 8));
  FUN_00851468(param_1 + 0x30,param_2);
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 8));
  return iVar1;
}


// ===== 00852a50  FUN_00852a50 =====

int FUN_00852a50(undefined8 *param_1)

{
  int iVar1;
  
  *param_1 = &PTR_FUN_00d3a6f0;
  param_1[1] = &PTR_FUN_00d3a738;
  FUN_00852180(param_1 + 7);
  iVar1 = pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 2));
  return iVar1;
}


// ===== 00852a8c  FUN_00852a8c =====

void FUN_00852a8c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d3a6f0;
  param_1[1] = &PTR_FUN_00d3a738;
  FUN_00852180(param_1 + 7);
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 2));
  operator_delete(param_1);
  return;
}


// ===== 00852ad4  FUN_00852ad4 =====

int FUN_00852ad4(undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_2 + 0x10));
  FUN_00851e9c(param_1,param_2 + 0x38,param_3);
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_2 + 0x10));
  return iVar1;
}


// ===== 00852b24  FUN_00852b24 =====

undefined8 FUN_00852b24(long param_1,uint param_2)

{
  long lVar1;
  uint *puVar2;
  uint *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x10));
  puVar3 = *(uint **)(param_1 + 0x90);
  lVar1 = (long)*(uint **)(param_1 + 0x98) - (long)puVar3;
  if (lVar1 != 0) {
    uVar4 = lVar1 >> 4;
    puVar2 = puVar3;
    do {
      uVar5 = uVar4 >> 1;
      puVar3 = puVar2 + uVar5 * 4 + 4;
      uVar4 = uVar4 + ~uVar5;
      if (param_2 <= puVar2[uVar5 * 4]) {
        puVar3 = puVar2;
        uVar4 = uVar5;
      }
      puVar2 = puVar3;
    } while (uVar4 != 0);
  }
  if ((puVar3 == *(uint **)(param_1 + 0x98)) || (param_2 < *puVar3)) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(puVar3 + 2);
  }
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x10));
  return uVar6;
}


// ===== 00852bb4  FUN_00852bb4 =====

int FUN_00852bb4(long param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  long *plVar2;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x10));
  plVar2 = (long *)FUN_00851c78(param_1 + 0x38,param_2);
  (**(code **)(*plVar2 + 0x38))(plVar2,param_3);
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x10));
  return iVar1;
}


// ===== 00852c10  FUN_00852c10 =====

int FUN_00852c10(long param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  long *plVar2;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x10));
  plVar2 = (long *)FUN_00851c78(param_1 + 0x38,param_2);
  (**(code **)(*plVar2 + 0x40))(plVar2,param_3);
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x10));
  return iVar1;
}


// ===== 00852c6c  FUN_00852c6c =====

int FUN_00852c6c(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x10));
  plVar2 = (long *)FUN_00851c78(param_1 + 0x38,*(undefined4 *)(param_2 + 0xc));
  (**(code **)(*plVar2 + 0x48))(plVar2,param_2);
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x10));
  return iVar1;
}


// ===== 00852cbc  FUN_00852cbc =====

int FUN_00852cbc(undefined8 *param_1)

{
  int iVar1;
  
  param_1[-1] = &PTR_FUN_00d3a6f0;
  *param_1 = &PTR_FUN_00d3a738;
  FUN_00852180(param_1 + 6);
  iVar1 = pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 1));
  return iVar1;
}


// ===== 00852cfc  FUN_00852cfc =====

void FUN_00852cfc(undefined8 *param_1)

{
  param_1[-1] = &PTR_FUN_00d3a6f0;
  *param_1 = &PTR_FUN_00d3a738;
  FUN_00852180(param_1 + 6);
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 1));
  operator_delete(param_1 + -1);
  return;
}


// ===== 00852d50  FUN_00852d50 =====

int FUN_00852d50(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 8));
  plVar2 = (long *)FUN_00851c78(param_1 + 0x30,*(undefined4 *)(param_2 + 0xc));
  (**(code **)(*plVar2 + 0x48))(plVar2,param_2);
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 8));
  return iVar1;
}


// ===== 00852da0  FUN_00852da0 =====

undefined4 * FUN_00852da0(long *param_1,undefined4 *param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  ulong uVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  size_t __n;
  undefined4 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  void *__dest;
  undefined4 *puVar10;
  undefined8 uVar11;
  long lVar12;
  void *local_60;
  undefined4 *local_58;
  undefined4 *local_50;
  void *pvStack_48;
  
  puVar6 = (undefined4 *)param_1[1];
  if (puVar6 < (undefined4 *)param_1[2]) {
    if (param_2 == puVar6) {
      if (param_2 == (undefined4 *)0x0) {
LAB_00852fd8:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      *puVar6 = *param_3;
      uVar11 = *param_4;
      *param_4 = 0;
      *(undefined8 *)(puVar6 + 2) = uVar11;
      param_1[1] = (long)(puVar6 + 4);
    }
    else {
      uVar3 = *param_3;
      uVar11 = *param_4;
      *param_4 = 0;
      puVar10 = (undefined4 *)param_1[1];
      puVar1 = puVar10;
      for (puVar6 = puVar10 + -4; puVar6 < puVar10; puVar6 = puVar6 + 4) {
        if (puVar1 == (undefined4 *)0x0) goto LAB_00852fd8;
        *puVar1 = *puVar6;
        uVar8 = *(undefined8 *)(puVar6 + 2);
        *(undefined8 *)(puVar6 + 2) = 0;
        *(undefined8 *)(puVar1 + 2) = uVar8;
        puVar1 = puVar1 + 4;
      }
      param_1[1] = (long)puVar1;
      if (puVar10 != param_2 + 4) {
        lVar12 = 0;
        do {
          uVar8 = *(undefined8 *)((long)puVar10 + lVar12 + -0x18);
          plVar5 = *(long **)((long)puVar10 + lVar12 + -8);
          *(undefined8 *)((long)puVar10 + lVar12 + -0x18) = 0;
          *(undefined4 *)((long)puVar10 + lVar12 + -0x10) =
               *(undefined4 *)((long)puVar10 + lVar12 + -0x20);
          *(undefined8 *)((long)puVar10 + lVar12 + -8) = uVar8;
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 8))();
          }
          lVar4 = lVar12 + -0x20;
          lVar12 = lVar12 + -0x10;
        } while ((undefined4 *)((long)puVar10 + lVar4) != param_2);
      }
      plVar5 = *(long **)(param_2 + 2);
      *param_2 = uVar3;
      *(undefined8 *)(param_2 + 2) = uVar11;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  else {
    lVar12 = *param_1;
    uVar2 = ((long)puVar6 - lVar12 >> 4) + 1;
    if (uVar2 >> 0x3c != 0) {
      FUN_008531e0();
LAB_00852ff0:
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    uVar7 = param_1[2] - lVar12;
    local_60 = (void *)0x0;
    uVar9 = (long)uVar7 >> 3;
    if (uVar9 <= uVar2) {
      uVar9 = uVar2;
    }
    if (0x7fffffffffffffef < uVar7) {
      uVar9 = 0xfffffffffffffff;
    }
    if (uVar9 != 0) {
      if (uVar9 >> 0x3c != 0) goto LAB_00852ff0;
      local_60 = operator_new(uVar9 << 4);
    }
    pvStack_48 = (void *)((long)local_60 + uVar9 * 0x10);
    local_58 = (undefined4 *)((long)local_60 + ((long)param_2 - lVar12));
    local_50 = local_58;
    FUN_00852ff4(&local_60,param_3,param_4);
    puVar6 = local_58;
    memcpy(local_50,param_2,param_1[1] - (long)param_2);
    lVar12 = param_1[1];
    param_1[1] = (long)param_2;
    __n = (long)param_2 - *param_1;
    __dest = (void *)((long)local_58 - __n);
    local_50 = (undefined4 *)((long)local_50 + (lVar12 - (long)param_2));
    memcpy(__dest,(void *)*param_1,__n);
    local_60 = (void *)*param_1;
    lVar12 = param_1[2];
    *param_1 = (long)__dest;
    param_1[2] = (long)pvStack_48;
    param_1[1] = (long)local_50;
    param_2 = puVar6;
    if (local_60 != (void *)0x0) {
      local_58 = (undefined4 *)local_60;
      local_50 = (undefined4 *)local_60;
      pvStack_48 = (void *)lVar12;
      operator_delete(local_60);
    }
  }
  return param_2;
}


// ===== 00852ff4  FUN_00852ff4 =====

void FUN_00852ff4(long *param_1,undefined4 *param_2,undefined8 *param_3)

{
  void *pvVar1;
  undefined4 *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  void *pvVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  
  puVar13 = (undefined4 *)param_1[2];
  if ((undefined4 *)param_1[3] == puVar13) {
    pvVar12 = (void *)*param_1;
    puVar14 = (undefined4 *)param_1[1];
    if ((long)puVar14 - (long)pvVar12 == 0) {
      uVar8 = param_1[3] - (long)pvVar12 >> 3;
      if (puVar13 == puVar14) {
        uVar8 = 1;
      }
      if (uVar8 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      pvVar6 = operator_new(uVar8 * 0x10);
      pvVar1 = (void *)((long)pvVar6 + uVar8 * 0x10);
      puVar11 = (undefined4 *)((long)pvVar6 + (uVar8 >> 2) * 0x10);
      if ((long)puVar13 - (long)puVar14 == 0) {
        *param_1 = (long)pvVar6;
        param_1[1] = (long)puVar11;
        param_1[2] = (long)puVar11;
        param_1[3] = (long)pvVar1;
      }
      else {
        puVar2 = (undefined4 *)((long)puVar11 + ((long)puVar13 - (long)puVar14));
        puVar10 = puVar11;
        do {
          if (puVar10 == (undefined4 *)0x0) goto LAB_008531b4;
          *puVar10 = *puVar14;
          uVar9 = *(undefined8 *)(puVar14 + 2);
          *(undefined8 *)(puVar14 + 2) = 0;
          puVar14 = puVar14 + 4;
          *(undefined8 *)(puVar10 + 2) = uVar9;
          puVar10 = puVar10 + 4;
        } while (puVar10 != puVar2);
        pvVar12 = (void *)*param_1;
        lVar3 = param_1[1];
        *param_1 = (long)pvVar6;
        param_1[1] = (long)puVar11;
        lVar7 = param_1[2];
        param_1[2] = (long)puVar2;
        param_1[3] = (long)pvVar1;
        while (lVar3 != lVar7) {
          lVar4 = lVar7 + -0x10;
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
          plVar5 = *(long **)(lVar7 + -8);
          *(undefined8 *)(lVar7 + -8) = 0;
          lVar7 = lVar4;
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 8))();
          }
        }
      }
      if (pvVar12 != (void *)0x0) {
        operator_delete(pvVar12);
      }
    }
    else {
      lVar7 = (((long)puVar14 - (long)pvVar12 >> 4) + 1) / 2;
      puVar11 = puVar14 + lVar7 * -4;
      if (puVar14 != puVar13) {
        do {
          *puVar11 = *puVar14;
          uVar9 = *(undefined8 *)(puVar14 + 2);
          *(undefined8 *)(puVar14 + 2) = 0;
          plVar5 = *(long **)(puVar11 + 2);
          *(undefined8 *)(puVar11 + 2) = uVar9;
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 8))();
          }
          puVar14 = puVar14 + 4;
          puVar11 = puVar11 + 4;
        } while (puVar14 != puVar13);
        puVar14 = (undefined4 *)param_1[1];
      }
      param_1[1] = (long)(puVar14 + lVar7 * -4);
      param_1[2] = (long)puVar11;
      puVar13 = puVar11;
    }
  }
  if (puVar13 != (undefined4 *)0x0) {
    *puVar13 = *param_2;
    uVar9 = *param_3;
    *param_3 = 0;
    *(undefined8 *)(puVar13 + 2) = uVar9;
    param_1[2] = (long)(puVar13 + 4);
    return;
  }
LAB_008531b4:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 008531e0  FUN_008531e0 =====

void FUN_008531e0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 008531f8  FUN_008531f8 =====

void FUN_008531f8(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = param_2 / 1000;
  if (499 < param_2 % 1000) {
    uVar1 = uVar1 + 1;
  }
  if ((param_2 & 0x8000000000000000) != 0) {
    uVar1 = -(-param_2 / 1000) - (ulong)(500 < -param_2 % 1000);
  }
  FUN_007de7c4(0x45fa0000,param_1,uVar1);
  return;
}


// ===== 00853260  FUN_00853260 =====

undefined1  [16] FUN_00853260(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  uVar2 = param_2 / 1000;
  if (499 < param_2 % 1000) {
    uVar2 = uVar2 + 1;
  }
  if ((param_2 & 0x8000000000000000) != 0) {
    uVar2 = -(-param_2 / 1000) - (ulong)(500 < -param_2 % 1000);
  }
  auVar3 = FUN_007df10c(param_1,uVar2);
  uVar1 = auVar3._0_8_;
  if ((auVar3 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
    uVar1 = 0;
  }
  auVar3._8_8_ = auVar3._8_8_ & 1;
  auVar3._0_8_ = uVar1;
  return auVar3;
}


// ===== 008532e0  FUN_008532e0 =====

void FUN_008532e0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = param_3 / 1000;
  if (499 < param_3 % 1000) {
    uVar1 = uVar1 + 1;
  }
  if ((param_3 & 0x8000000000000000) != 0) {
    uVar1 = -(-param_3 / 1000) - (ulong)(500 < -param_3 % 1000);
  }
  FUN_007dec4c(param_1,param_2,uVar1);
  return;
}


// ===== 00853340  FUN_00853340 =====

void FUN_00853340(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 0x3f000000;
  puVar1 = param_1 + 3;
  *puVar1 = 0;
  param_1[2] = puVar1;
  param_1[4] = 0;
  param_1[5] = puVar1;
  param_1[6] = 0;
  param_1[7] = param_1 + 7;
  param_1[8] = param_1 + 7;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 7;
  param_1[0xd] = param_1 + 0xd;
  param_1[0xe] = param_1 + 0xd;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined1 *)((long)param_1 + 0xa4) = 0;
  param_1[0x15] = 0x8000000000000000;
  return;
}


// ===== 008533a4  FUN_008533a4 =====

undefined8 FUN_008533a4(undefined8 *param_1,long param_2,long param_3,undefined4 param_4)

{
  undefined8 uVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long local_38;
  
  uVar1 = FUN_00889fac(param_1 + 0xc,param_3,param_4);
  if (((int)uVar1 != 0) && ((int)uVar1 != 1)) {
    uVar2 = 2;
    if (param_2 < 0x80000000) {
      uVar2 = 0;
    }
    if (param_2 < -0x80000000) {
      uVar2 = uVar2 + 1;
    }
    if (uVar2 < 2) {
      if (uVar2 == 0) {
        lVar3 = SUB168(SEXT816(param_2 << 0x20) * SEXT816(-0x431bde82d7b634db),8);
        lVar3 = (lVar3 >> 0x13) - (lVar3 >> 0x3f);
      }
      else {
        lVar3 = 0x431bde82d7b;
      }
    }
    else {
      if (uVar2 != 2) {
                    /* WARNING: Subroutine does not return */
        FUN_0061ff28();
      }
      lVar3 = -0x431bde82517;
    }
    plVar4 = (long *)*param_1;
    uVar1 = (**(code **)(*plVar4 + 0x10))(plVar4);
    local_38 = (**(code **)(*plVar4 + 0x18))(plVar4,uVar1);
    local_38 = (lVar3 - param_3) + local_38;
    FUN_008534b4(param_1 + 1,&local_38);
    uVar1 = 1;
  }
  return uVar1;
}


// ===== 008534b4  FUN_008534b4 =====

void FUN_008534b4(float *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  FUN_00853aac(param_1 + 2);
  uVar1 = *(long *)(param_1 + 6) - 1;
  if (uVar1 == 0) {
    plVar6 = *(long **)(param_1 + 2);
    lVar8 = 0;
    *(long **)(param_1 + 8) = plVar6;
    param_1[10] = 0.0;
    param_1[0xb] = 0.0;
  }
  else {
    plVar6 = *(long **)(param_1 + 8);
    if (*param_2 < plVar6[4]) {
      *(long *)(param_1 + 10) = *(long *)(param_1 + 10) + 1;
    }
    if (*(long *)(param_1 + 6) == 0) goto LAB_00853538;
    lVar8 = *(long *)(param_1 + 10);
  }
  lVar7 = (long)(*param_1 * (float)uVar1);
  lVar8 = lVar7 - lVar8;
  if (lVar8 < 0) {
    do {
      plVar5 = plVar6;
      plVar3 = (long *)*plVar6;
      if ((long *)*plVar6 == (long *)0x0) {
        do {
          plVar6 = (long *)plVar5[2];
          bVar4 = plVar5 == (long *)*plVar6;
          plVar5 = plVar6;
        } while (bVar4);
      }
      else {
        do {
          plVar6 = plVar3;
          plVar3 = (long *)plVar6[1];
        } while ((long *)plVar6[1] != (long *)0x0);
      }
      bVar4 = lVar8 != -1;
      lVar8 = lVar8 + 1;
      *(long **)(param_1 + 8) = plVar6;
    } while (bVar4);
  }
  else if (lVar8 != 0) {
    do {
      plVar5 = plVar6;
      plVar3 = (long *)plVar6[1];
      if ((long *)plVar6[1] == (long *)0x0) {
        do {
          plVar6 = (long *)plVar5[2];
          bVar4 = plVar5 != (long *)*plVar6;
          plVar5 = plVar6;
        } while (bVar4);
      }
      else {
        do {
          plVar6 = plVar3;
          plVar3 = (long *)*plVar6;
        } while ((long *)*plVar6 != (long *)0x0);
      }
      lVar2 = lVar8 + -1;
      *(long **)(param_1 + 8) = plVar6;
      bVar4 = 0 < lVar8;
      lVar8 = lVar2;
    } while (lVar2 != 0 && bVar4);
  }
  *(long *)(param_1 + 10) = lVar7;
LAB_00853538:
  plVar6 = (long *)operator_new(0x18);
  if ((plVar6 == (long *)0x0) || (plVar6 == (long *)0xfffffffffffffff0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  lVar8 = *param_2;
  lVar7 = *(long *)(param_1 + 0xc);
  plVar6[1] = (long)(param_1 + 0xc);
  plVar6[2] = lVar8;
  *plVar6 = lVar7;
  *(long **)(lVar7 + 8) = plVar6;
  lVar8 = *(long *)(param_1 + 0x10);
  lVar7 = *(long *)(param_1 + 0x12);
  *(long **)(param_1 + 0xc) = plVar6;
  *(long *)(param_1 + 0x10) = lVar8 + 1;
  *(ulong *)(param_1 + 0x12) = lVar7 + 1U;
  if (*(ulong *)(param_1 + 0x14) < lVar7 + 1U) {
    if (lVar8 + 1 == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/list:830: libc++ Hardening assertion !empty() failed: list::front called on empty list\n"
                );
    }
    FUN_00853868(param_1,*(long *)(param_1 + 0xe) + 0x10);
    if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/list:1394: libc++ Hardening assertion !empty() failed: list::pop_front() called with empty list\n"
                );
    }
    plVar5 = *(long **)(param_1 + 0xe);
    plVar6 = (long *)plVar5[1];
    *(long **)(*plVar5 + 8) = plVar6;
    *plVar6 = *plVar5;
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -1;
    if ((plVar5 == (long *)0xfffffffffffffff0) || (plVar5 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    operator_delete(plVar5);
    *(long *)(param_1 + 0x12) = *(long *)(param_1 + 0x12) + -1;
  }
  return;
}


// ===== 008536b8  FUN_008536b8 =====

ulong FUN_008536b8(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  char *local_78;
  undefined8 uStack_70;
  undefined1 *local_68;
  char *pcStack_60;
  char **local_58;
  ulong local_50;
  char **ppcStack_48;
  undefined1 uStack_21;
  
  uVar1 = FUN_0088a2f4(param_1 + 0xc);
  if (uVar1 == 0) {
    uVar5 = 0;
  }
  else {
    lVar3 = param_1[4];
    if (lVar3 != 0) {
      lVar3 = *(long *)(param_1[5] + 0x20);
    }
    uVar5 = lVar3 + uVar1;
    lVar3 = (**(code **)(*(long *)*param_1 + 0x10))();
    if (((lVar3 == 0x7fffffffffffffff) || (lVar4 = param_1[0x15], lVar4 == -0x8000000000000000)) ||
       ((lVar3 != -0x8000000000000000 &&
        ((lVar4 != 0x7fffffffffffffff && (10000000 < lVar3 - lVar4)))))) {
      uVar2 = FUN_00417e08();
      if ((uVar2 & 1) == 0) {
        local_78 = "../../modules/rtp_rtcp/source/remote_ntp_time_estimator.cc";
        uStack_70 = 0x2f1;
        local_68 = &uStack_21;
        pcStack_60 = "RTP timestamp: ";
        local_58 = &local_78;
        ppcStack_48 = &pcStack_60;
        local_50 = param_2 & 0xffffffff;
        FUN_00623bb0(&DAT_0021f918,"../../modules/rtp_rtcp/source/remote_ntp_time_estimator.cc",
                     0x2f1,"RTP timestamp: ",param_2 & 0xffffffff," in NTP clock: ",
                     (long)((double)(uVar1 & 0xffffffff) / DAT_001f4ff8 + 0.5) +
                     (uVar1 >> 0x20) * 1000," estimated time in receiver NTP clock: ",
                     (long)((double)(uVar5 & 0xffffffff) / DAT_001f4ff8 + 0.5) +
                     (uVar5 >> 0x20) * 1000);
      }
      param_1[0x15] = lVar3;
    }
  }
  return uVar5;
}


// ===== 00853828  FUN_00853828 =====

undefined1  [16] FUN_00853828(long param_1)

{
  undefined1 auVar1 [16];
  
  if (*(ulong *)(param_1 + 0x50) < 3) {
    return ZEXT816(0);
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    auVar1._0_8_ = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x20);
    auVar1._8_8_ = 1;
    return auVar1;
  }
  return ZEXT816(1) << 0x40;
}


// ===== 00853868  FUN_00853868 =====

float * FUN_00853868(float *param_1,long *param_2)

{
  long lVar1;
  bool bVar2;
  float *pfVar3;
  long lVar4;
  float *pfVar5;
  long lVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  
  pfVar10 = param_1 + 4;
  pfVar3 = *(float **)pfVar10;
  if (pfVar3 != (float *)0x0) {
    pfVar7 = pfVar3;
    pfVar8 = pfVar10;
    do {
      lVar6 = 8;
      if (*param_2 <= *(long *)(pfVar7 + 8)) {
        lVar6 = 0;
        pfVar8 = pfVar7;
      }
      pfVar7 = *(float **)((long)pfVar7 + lVar6);
    } while (pfVar7 != (float *)0x0);
    if ((pfVar8 == pfVar10) || (pfVar10 = pfVar8 + 8, *(long *)pfVar10 != *param_2)) {
      pfVar3 = (float *)0x0;
    }
    else {
      pfVar7 = *(float **)(pfVar8 + 2);
      if (pfVar8 == *(float **)(param_1 + 8)) {
        pfVar5 = pfVar8;
        if (pfVar7 == (float *)0x0) {
          do {
            pfVar9 = *(float **)(pfVar5 + 4);
            bVar2 = pfVar5 != *(float **)pfVar9;
            pfVar5 = pfVar9;
          } while (bVar2);
        }
        else {
          do {
            pfVar9 = pfVar7;
            pfVar7 = *(float **)pfVar9;
          } while (*(float **)pfVar9 != (float *)0x0);
        }
        if (*(float **)(param_1 + 2) == pfVar8) {
          *(float **)(param_1 + 2) = pfVar9;
        }
        *(long *)(param_1 + 6) = *(long *)(param_1 + 6) + -1;
        FUN_005d5d48(pfVar3,pfVar8);
        if (pfVar10 == (float *)0x0) goto LAB_00853a98;
        operator_delete(pfVar8);
        *(float **)(param_1 + 8) = pfVar9;
      }
      else {
        pfVar5 = pfVar8;
        if (pfVar7 == (float *)0x0) {
          do {
            pfVar9 = *(float **)(pfVar5 + 4);
            bVar2 = pfVar5 != *(float **)pfVar9;
            pfVar5 = pfVar9;
          } while (bVar2);
        }
        else {
          do {
            pfVar9 = pfVar7;
            pfVar7 = *(float **)pfVar9;
          } while (*(float **)pfVar9 != (float *)0x0);
        }
        if (*(float **)(param_1 + 2) == pfVar8) {
          *(float **)(param_1 + 2) = pfVar9;
        }
        *(long *)(param_1 + 6) = *(long *)(param_1 + 6) + -1;
        FUN_005d5d48(pfVar3,pfVar8);
        if (pfVar10 == (float *)0x0) {
LAB_00853a98:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        operator_delete(pfVar8);
        pfVar9 = *(float **)(param_1 + 8);
        if (*param_2 <= *(long *)(pfVar9 + 8)) {
          *(long *)(param_1 + 10) = *(long *)(param_1 + 10) + -1;
        }
      }
      if (*(long *)(param_1 + 6) != 0) {
        lVar4 = (long)(*param_1 * (float)(*(long *)(param_1 + 6) - 1));
        lVar6 = lVar4 - *(long *)(param_1 + 10);
        if (lVar6 < 0) {
          do {
            pfVar3 = *(float **)pfVar9;
            pfVar10 = pfVar9;
            if (*(float **)pfVar9 == (float *)0x0) {
              do {
                pfVar9 = *(float **)(pfVar10 + 4);
                bVar2 = pfVar10 == *(float **)pfVar9;
                pfVar10 = pfVar9;
              } while (bVar2);
            }
            else {
              do {
                pfVar9 = pfVar3;
                pfVar3 = *(float **)(pfVar9 + 2);
              } while (*(float **)(pfVar9 + 2) != (float *)0x0);
            }
            bVar2 = lVar6 != -1;
            lVar6 = lVar6 + 1;
            *(float **)(param_1 + 8) = pfVar9;
          } while (bVar2);
        }
        else if (lVar6 != 0) {
          do {
            pfVar3 = *(float **)(pfVar9 + 2);
            pfVar10 = pfVar9;
            if (*(float **)(pfVar9 + 2) == (float *)0x0) {
              do {
                pfVar9 = *(float **)(pfVar10 + 4);
                bVar2 = pfVar10 != *(float **)pfVar9;
                pfVar10 = pfVar9;
              } while (bVar2);
            }
            else {
              do {
                pfVar9 = pfVar3;
                pfVar3 = *(float **)pfVar9;
              } while (*(float **)pfVar9 != (float *)0x0);
            }
            lVar1 = lVar6 + -1;
            *(float **)(param_1 + 8) = pfVar9;
            bVar2 = 0 < lVar6;
            lVar6 = lVar1;
          } while (lVar1 != 0 && bVar2);
        }
        *(long *)(param_1 + 10) = lVar4;
      }
      pfVar3 = (float *)0x1;
    }
  }
  return pfVar3;
}


// ===== 00853aac  FUN_00853aac =====

undefined8 * FUN_00853aac(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    if (puVar1 + 4 != (long *)0x0) {
      lVar4 = *param_2;
      plVar3 = param_1 + 1;
      plVar6 = (long *)*plVar3;
      puVar1[4] = lVar4;
      do {
        plVar5 = plVar3;
        if (plVar6 == (long *)0x0) {
LAB_00853b2c:
          *puVar1 = 0;
          puVar1[1] = 0;
          puVar1[2] = plVar3;
          *plVar5 = (long)puVar1;
          puVar2 = puVar1;
          if (*(long *)*param_1 != 0) {
            *param_1 = *(long *)*param_1;
            puVar2 = (undefined8 *)*plVar5;
          }
          FUN_005d5b94(param_1[1],puVar2);
          param_1[2] = param_1[2] + 1;
          return puVar1;
        }
        while (plVar3 = plVar6, plVar3[4] <= lVar4) {
          plVar6 = (long *)plVar3[1];
          if ((long *)plVar3[1] == (long *)0x0) {
            plVar5 = plVar3 + 1;
            goto LAB_00853b2c;
          }
        }
        plVar6 = (long *)*plVar3;
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00853b90  FUN_00853b90 =====

void FUN_00853b90(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  param_1[6] = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  return;
}


// ===== 00853bb0  FUN_00853bb0 =====

void FUN_00853bb0(long param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  pvVar1 = *(void **)(param_1 + 0x28);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  pvVar2 = *(void **)(param_1 + 0x30);
  uVar3 = (ulong)(((long)pvVar1 - (long)pvVar2) * 0x1555555555555555) >> 2;
  uVar4 = (long)pvVar2 * -0x1555555555555555 - 4U >> 2;
  if (uVar4 <= uVar3) {
    uVar3 = uVar4;
  }
  if ((1 < uVar3) && ((((int)pvVar1 - (int)pvVar2 | -(int)pvVar2) & 3U) == 0)) {
    uVar3 = uVar3 & 0x3ffffffffffffffe;
    pvVar2 = (void *)((long)pvVar2 + uVar3 * -0xc);
    do {
      uVar3 = uVar3 - 2;
    } while (uVar3 != 0);
  }
  do {
    if (pvVar2 == pvVar1) {
      *(void **)(param_1 + 0x30) = pvVar1;
      operator_delete(pvVar1);
      return;
    }
    pvVar2 = (void *)((long)pvVar2 + -0xc);
  } while (pvVar2 != (void *)0x0);
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00853c68  FUN_00853c68 =====

void FUN_00853c68(long *param_1,long *param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 local_90;
  undefined4 local_88 [6];
  undefined1 *local_70;
  undefined4 *local_68 [3];
  undefined4 *local_50;
  undefined1 auStack_48 [24];
  undefined1 uStack_11;
  
  lVar2 = *param_2;
  *param_1 = lVar2;
  if (lVar2 != 0) {
    FUN_00d0f740(1,lVar2 + 8);
  }
  lVar2 = param_2[3];
  lVar5 = param_2[2];
  lVar4 = param_2[1];
  param_1[4] = param_2[4];
  param_1[3] = lVar2;
  param_1[2] = lVar5;
  param_1[1] = lVar4;
  *(undefined1 *)(param_1 + 5) = *param_3;
  *(undefined4 *)((long)param_1 + 0x2c) = *(undefined4 *)(param_3 + 4);
  uVar1 = (**(code **)(*(long *)param_1[2] + 0x10))();
  FUN_00889c98(param_1 + 6,uVar1);
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = *(long *)(param_3 + 8);
  plVar3 = param_1 + 9;
  *plVar3 = *(long *)(param_3 + 0x40);
  (**(code **)(param_3 + 0x30))(1,param_3 + 0x20,param_1 + 10);
  param_1[0xc] = *(long *)(param_3 + 0x30);
  param_1[0xd] = *(long *)(param_3 + 0x38);
  *(code **)(param_3 + 0x30) = FUN_00433984;
  *(undefined8 *)(param_3 + 0x38) = 0;
  local_68[0] = (undefined4 *)&DAT_aaaaaaaaaaaaaaaa;
  pthread_mutexattr_init((pthread_mutexattr_t *)local_68);
  pthread_mutex_init((pthread_mutex_t *)(param_1 + 0xe),(pthread_mutexattr_t *)local_68);
  pthread_mutexattr_destroy((pthread_mutexattr_t *)local_68);
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  lVar2 = *(long *)(param_3 + 0x48);
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  param_1[0x1d] = lVar2;
  param_1[0x1e] = 0;
  FUN_00857cbc(param_1 + 0x22);
  param_1[0x2d] = 0x5c0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  *(undefined1 *)(param_1 + 0x2e) = param_3[0x10];
  lVar2 = *(long *)(param_3 + 0x50);
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  param_1[0x2f] = lVar2;
  FUN_00857f08((long)param_1 + 0x194);
  FUN_007cbe28(param_1 + 0x34);
  param_1[0x4a] = (long)(param_1 + 0x4b);
  *(undefined1 *)(param_1 + 0x4d) = 0xff;
  param_1[0x4f] = (long)(param_1 + 0x50);
  param_1[0x51] = 0;
  param_1[0x50] = 0;
  *(undefined1 *)(param_1 + 0x49) = 0;
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  param_1[0x54] = 0;
  param_1[0x53] = 0;
  param_1[0x52] = (long)(param_1 + 0x53);
  if (param_1[0xd] != 0) {
    if (0 < *plVar3) {
      local_88[0] = 2;
      local_68[0] = local_88;
      lVar2 = FUN_00857808(0,param_1 + 0x52,param_1 + 0x52,&DAT_001f94c3,local_68,auStack_48);
      *(code **)(lVar2 + 0x28) = FUN_0085413c;
      *(undefined8 *)(lVar2 + 0x30) = 0;
      local_88[0] = 4;
      local_68[0] = local_88;
      lVar2 = FUN_00857808(0,param_1 + 0x52,param_1 + 0x52,&DAT_001f94c3,local_68,auStack_48);
      *(code **)(lVar2 + 0x28) = FUN_0085465c;
      *(undefined8 *)(lVar2 + 0x30) = 0;
      local_88[0] = 8;
      local_68[0] = local_88;
      lVar2 = FUN_00857808(0,param_1 + 0x52,param_1 + 0x52,&DAT_001f94c3,local_68,auStack_48);
      *(code **)(lVar2 + 0x28) = FUN_00854850;
      *(undefined8 *)(lVar2 + 0x30) = 0;
      local_88[0] = 0x20;
      local_68[0] = local_88;
      lVar2 = FUN_00857808(0,param_1 + 0x52,param_1 + 0x52,&DAT_001f94c3,local_68,auStack_48);
      *(code **)(lVar2 + 0x28) = FUN_00854914;
      *(undefined8 *)(lVar2 + 0x30) = 0;
      local_88[0] = 0x80;
      local_68[0] = local_88;
      lVar2 = FUN_00857808(0,param_1 + 0x52,param_1 + 0x52,&DAT_001f94c3,local_68,auStack_48);
      *(code **)(lVar2 + 0x28) = FUN_00854994;
      *(undefined8 *)(lVar2 + 0x30) = 0;
      local_88[0] = 0x10000;
      local_68[0] = local_88;
      lVar2 = FUN_00857808(0,param_1 + 0x52,param_1 + 0x52,&DAT_001f94c3,local_68,auStack_48);
      *(code **)(lVar2 + 0x28) = FUN_00854a84;
      *(undefined8 *)(lVar2 + 0x30) = 0;
      local_88[0] = 0x10;
      local_68[0] = local_88;
      lVar2 = FUN_00857808(0,param_1 + 0x52,param_1 + 0x52,&DAT_001f94c3,local_68,auStack_48);
      *(code **)(lVar2 + 0x28) = FUN_00854be4;
      *(undefined8 *)(lVar2 + 0x30) = 0;
      local_88[0] = 0x2000;
      local_68[0] = local_88;
      lVar2 = FUN_00857808(0,param_1 + 0x52,param_1 + 0x52,&DAT_001f94c3,local_68,auStack_48);
      *(code **)(lVar2 + 0x28) = FUN_00854d3c;
      *(undefined8 *)(lVar2 + 0x30) = 0;
      local_88[0] = 0x100;
      local_68[0] = local_88;
      lVar2 = FUN_00857808(0,param_1 + 0x52,param_1 + 0x52,&DAT_001f94c3,local_68,auStack_48);
      *(code **)(lVar2 + 0x28) = FUN_00854d70;
      *(undefined8 *)(lVar2 + 0x30) = 0;
      local_88[0] = 0x200;
      local_68[0] = local_88;
      lVar2 = FUN_00857808(0,param_1 + 0x52,param_1 + 0x52,&DAT_001f94c3,local_68,auStack_48);
      *(code **)(lVar2 + 0x28) = FUN_00855104;
      *(undefined8 *)(lVar2 + 0x30) = 0;
      local_88[0] = 0x40;
      local_68[0] = local_88;
      lVar2 = FUN_00857808(0,param_1 + 0x52,param_1 + 0x52,&DAT_001f94c3,local_68,auStack_48);
      *(code **)(lVar2 + 0x28) = FUN_008551b0;
      *(undefined8 *)(lVar2 + 0x30) = 0;
      local_68[0] = (undefined4 *)&DAT_0021f920;
      lVar2 = FUN_00857910(0,param_1 + 0x52,param_1 + 0x52,&DAT_001f94c3,local_68,local_88);
      *(code **)(lVar2 + 0x28) = FUN_0085527c;
      *(undefined8 *)(lVar2 + 0x30) = 0;
      return;
    }
    FUN_0085765c(local_68,plVar3);
    FUN_008577dc(local_88,local_68);
    local_70 = &uStack_11;
    FUN_00857104(local_68);
    local_90 = 0;
    FUN_0085765c(auStack_48,&local_90);
    FUN_008577dc(local_68,auStack_48);
    local_50 = local_88;
    FUN_00857104(auStack_48);
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../modules/rtp_rtcp/source/rtcp_sender.cc",0x9a,
                 "report_interval_ > TimeDelta::Zero()",&DAT_0021f924,local_50,local_68);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../modules/rtp_rtcp/source/rtcp_sender.cc",0x99,
               "schedule_next_rtcp_send_evaluation_",&DAT_001f5fa0);
}


// ===== 0085413c  FUN_0085413c =====

/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffec8 : 0x0085457c */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0085413c(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  char *pcVar10;
  char **ppcVar11;
  int extraout_var;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  int iVar18;
  char *pcVar19;
  int iVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 *puVar23;
  undefined4 *puVar24;
  undefined1 uStack_1f9;
  char *local_1f8;
  char **ppcStack_1f0;
  ulong local_1e8;
  char **local_1e0;
  undefined *local_1d8;
  ulong *puStack_1d0;
  char *local_1c8;
  undefined **ppuStack_1c0;
  ulong local_1b8;
  char **local_1b0;
  undefined *local_1a8;
  ulong *puStack_1a0;
  ulong local_198;
  undefined **local_190;
  undefined *local_188;
  ulong *puStack_180;
  char *local_178;
  undefined **ppuStack_170;
  ulong local_168;
  char **local_160;
  undefined *local_158;
  ulong *puStack_150;
  char *local_148;
  undefined **ppuStack_140;
  ulong local_138;
  char **local_130;
  undefined *local_128;
  ulong *puStack_120;
  char *local_118;
  undefined **ppuStack_110;
  ulong local_108;
  char **ppcStack_100;
  undefined *local_f8;
  ulong *puStack_f0;
  char *local_e8;
  char *local_e0;
  undefined1 *puStack_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 *local_c0;
  undefined8 uStack_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  char *local_88;
  char *local_80;
  undefined1 *puStack_78;
  
  local_d0 = (undefined1 *)(param_1 + 0x268);
  lVar12 = FUN_00857a18(0,param_1 + 0x250,param_1 + 0x250,&DAT_001f94c3,&local_d0,&local_88);
  iVar18 = *(int *)(lVar12 + 0x20);
  if ((iVar18 < 1) && (iVar18 = 8, *(char *)(param_1 + 0x28) == '\0')) {
    iVar18 = 0x5a;
  }
  uVar21 = local_138;
  ppcVar11 = local_130;
  if ((*(byte *)(param_1 + 0xc0) & 1) == 0) {
LAB_00854648:
    local_130 = ppcVar11;
    local_138 = uVar21;
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
              );
  }
  uVar21 = *(ulong *)(param_1 + 0xb8);
  lVar12 = param_2[3] + 500;
  iVar1 = *(int *)(param_1 + 0xb0);
  iVar2 = *(int *)(param_1 + 0xb4);
  if ((long)uVar21 < 0) {
    iVar20 = -(int)(-uVar21 / 1000) - (uint)(500 < -uVar21 % 1000);
  }
  else {
    iVar20 = (int)(uVar21 / 1000);
    if (499 < uVar21 % 1000) {
      iVar20 = iVar20 + 1;
    }
  }
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
  local_d0 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_007d10f0(&local_d0);
  puStack_c8 = (undefined1 *)CONCAT44(puStack_c8._4_4_,*(undefined4 *)(param_1 + 0x2c));
  local_c0 = (undefined1 *)
             (**(code **)(**(long **)(param_1 + 0x10) + 0x18))
                       (*(long **)(param_1 + 0x10),param_2[3]);
  puVar24 = (undefined4 *)*param_2;
  plVar13 = *(long **)(param_1 + 0xe8);
  uStack_b8 = (undefined1 *)
              CONCAT44(*puVar24,iVar2 + iVar1 +
                                iVar18 * ((((int)(lVar12 / 1000) + (int)(lVar12 >> 0x3f)) -
                                          (SUB164(SEXT816(lVar12) * SEXT816(0x20c49ba5e353f7cf),0xc)
                                          >> 0x1f)) - iVar20));
  local_e0 = (char *)0x0;
  puStack_d8 = (undefined1 *)0x0;
  local_e8 = (char *)0x0;
  local_b0 = (undefined1 *)CONCAT44(local_b0._4_4_,(int)*(undefined8 *)(puVar24 + 2));
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x10))(&local_88,plVar13,0x1f);
    pcVar10 = local_80;
    pcVar19 = local_88;
    puStack_d8 = puStack_78;
    local_e0 = local_80;
    local_e8 = local_88;
    if ((local_88 != local_80) && (*(long *)(puVar24 + 8) != 0)) {
      plVar13 = *(long **)(param_1 + 0x10);
      uVar14 = (**(code **)(*plVar13 + 0x10))(plVar13);
      (**(code **)(*plVar13 + 0x18))(plVar13,uVar14);
      iVar1 = *(int *)((long)puVar24 + 0x22);
      do {
        *(undefined4 *)(pcVar19 + 0x14) = puVar24[6];
        *(int *)(pcVar19 + 0x18) = extraout_var - iVar1;
        pcVar19 = pcVar19 + 0x1c;
      } while (pcVar19 != pcVar10);
    }
  }
  FUN_007d15e8(&local_d0,&local_e8);
  if (local_e8 != (char *)0x0) {
    uVar21 = (ulong)(((long)local_e8 - (long)local_e0) * 0x1249249249249249) >> 2;
    uVar22 = (long)local_e0 * -0x1249249249249249 - 4U >> 2;
    if (uVar22 <= uVar21) {
      uVar21 = uVar22;
    }
    pcVar19 = local_e0;
    if ((1 < uVar21) && ((((int)local_e8 - (int)local_e0 | -(int)local_e0) & 3U) == 0)) {
      uVar21 = uVar21 & 0x3ffffffffffffffe;
      pcVar19 = local_e0 + uVar21 * -0x1c;
      do {
        uVar21 = uVar21 - 2;
      } while (uVar21 != 0);
    }
    while (pcVar19 != local_e8) {
      pcVar19 = pcVar19 + -0x1c;
      if (pcVar19 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    local_e0 = local_e8;
    operator_delete(local_e8);
  }
  (**(code **)(local_d0 + 0x18))(&local_d0,param_3 + 4,param_3 + 3,param_3[2],*param_3,param_3[1]);
  if (30000000 < param_2[3] - *(long *)(param_1 + 0x270)) {
    *(undefined8 *)(param_1 + 0x270) = param_2[3];
    uVar21 = FUN_00417e08();
    if ((uVar21 & 1) == 0) {
      local_88 = "../../modules/rtp_rtcp/source/rtcp_sender.cc";
      local_80 = (char *)0xbd1;
      puStack_78 = &uStack_1f9;
      ppcStack_1f0 = &local_88;
      local_1e8 = (ulong)*(uint *)(param_1 + 0x2c);
      local_1f8 = "Sender Report {ssrc: ";
      local_1e0 = &local_1f8;
      puStack_1d0 = &local_1e8;
      ppuStack_1c0 = &local_1d8;
      local_1d8 = &DAT_001e1644;
      local_1b8 = (ulong)local_c0 >> 0x20;
      local_1c8 = "ntp: ";
      local_1b0 = &local_1c8;
      puStack_1a0 = &local_1b8;
      local_1a8 = &DAT_001ca603;
      local_198 = (ulong)local_c0 & 0xffffffff;
      local_190 = &local_1a8;
      puStack_180 = &local_198;
      ppuStack_170 = &local_188;
      local_188 = &DAT_001e1644;
      local_168 = (ulong)uStack_b8 & 0xffffffff;
      local_178 = "rtp_timestamp: ";
      puStack_150 = &local_168;
      local_158 = &DAT_001e1644;
      ppuStack_140 = &local_158;
      local_148 = "last_rtp_timestamp: ";
      puStack_120 = &local_138;
      ppuStack_110 = &local_128;
      local_128 = &DAT_001e1644;
      local_118 = "last_frame_capture_time_ms: ";
      local_160 = &local_178;
      uVar21 = (ulong)*(uint *)(param_1 + 0xb4);
      ppcVar11 = &local_148;
      if ((*(byte *)(param_1 + 0xc0) & 1) == 0) goto LAB_00854648;
      uVar21 = *(ulong *)(param_1 + 0xb8);
      if ((long)uVar21 < 0) {
        local_108 = -(-uVar21 / 1000) - (ulong)(500 < -uVar21 % 1000);
      }
      else {
        local_108 = uVar21 / 1000;
        if (499 < uVar21 % 1000) {
          local_108 = local_108 + 1;
        }
      }
      ppcStack_100 = &local_118;
      puStack_f0 = &local_108;
      local_f8 = &DAT_001e1644;
      uVar9 = (undefined4)local_138;
      pcVar19 = *local_130;
      ppcVar11 = local_130 + 1;
      puVar24 = *(undefined4 **)(*ppcVar11 + 8);
      puVar23 = *(undefined8 **)(puVar24 + 2);
      puVar3 = (undefined8 *)puVar23[1];
      puVar4 = (undefined4 *)puVar3[1];
      puVar15 = *(undefined8 **)(puVar4 + 2);
      puVar5 = (undefined4 *)puVar15[1];
      puVar16 = *(undefined8 **)(puVar5 + 2);
      puVar6 = (undefined8 *)puVar16[1];
      puVar7 = (undefined4 *)puVar6[1];
      puVar17 = *(undefined8 **)(puVar7 + 2);
      puVar8 = (undefined8 *)puVar17[1];
      local_138 = (ulong)*(uint *)(param_1 + 0xb4);
      local_130 = &local_148;
      FUN_00623bb0(&DAT_0021f92c,*puVar8,*(undefined4 *)(puVar8 + 1),*puVar17,*puVar7,*puVar6,
                   *puVar16,*puVar5,*puVar15,*puVar4,*puVar3,*puVar23,*puVar24,
                   *(undefined8 *)*ppcVar11,pcVar19,uVar9,&DAT_001e1644,
                   "last_frame_capture_time_ms: ",local_108,&DAT_001e1644,"now_us: ",param_2[3],
                   &DAT_001e1644,"rtp_rate: ",iVar18,&DAT_001b0cbb);
    }
  }
  FUN_007d1118(&local_d0);
  return;
}


// ===== 0085465c  FUN_0085465c =====

void FUN_0085465c(long param_1,long *param_2,undefined8 *param_3)

{
  int iVar1;
  int extraout_var;
  long *plVar2;
  undefined8 uVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  void *local_98;
  void *local_90;
  undefined8 uStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  void *local_58;
  void *local_50;
  undefined8 uStack_48;
  
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_007cef74(&local_80);
  plVar2 = *(long **)(param_1 + 0xe8);
  lVar7 = *param_2;
  local_90 = (void *)0x0;
  uStack_88 = 0;
  puStack_78 = (undefined1 *)CONCAT44(puStack_78._4_4_,*(undefined4 *)(param_1 + 0x2c));
  local_98 = (void *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x10))(&local_58,plVar2,0x1f);
    uStack_88 = uStack_48;
    local_90 = local_50;
    local_98 = local_58;
    if ((local_58 != local_50) && (*(long *)(lVar7 + 0x20) != 0)) {
      plVar2 = *(long **)(param_1 + 0x10);
      uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
      (**(code **)(*plVar2 + 0x18))(plVar2,uVar3);
      iVar1 = *(int *)(lVar7 + 0x22);
      do {
        *(undefined4 *)((long)local_58 + 0x14) = *(undefined4 *)(lVar7 + 0x18);
        *(int *)((long)local_58 + 0x18) = extraout_var - iVar1;
        local_58 = (void *)((long)local_58 + 0x1c);
      } while (local_58 != local_50);
    }
  }
  FUN_007cf68c(&local_80,&local_98);
  if (local_98 != (void *)0x0) {
    uVar5 = (ulong)(((long)local_98 - (long)local_90) * 0x1249249249249249) >> 2;
    uVar6 = (long)local_90 * -0x1249249249249249 - 4U >> 2;
    if (uVar6 <= uVar5) {
      uVar5 = uVar6;
    }
    pvVar4 = local_90;
    if ((1 < uVar5) && ((((int)local_98 - (int)local_90 | -(int)local_90) & 3U) == 0)) {
      uVar5 = uVar5 & 0x3ffffffffffffffe;
      pvVar4 = (void *)((long)local_90 + uVar5 * -0x1c);
      do {
        uVar5 = uVar5 - 2;
      } while (uVar5 != 0);
    }
    while (pvVar4 != local_98) {
      pvVar4 = (void *)((long)pvVar4 + -0x1c);
      if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    local_90 = local_98;
    operator_delete(local_98);
  }
  if ((*(int *)(param_1 + 0x38) == 1) || (local_70 != puStack_68)) {
    (**(code **)(local_80 + 0x18))(&local_80,param_3 + 4,param_3 + 3,param_3[2],*param_3,param_3[1])
    ;
  }
  FUN_007cef94(&local_80);
  return;
}


// ===== 00854850  FUN_00854850 =====

void FUN_00854850(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *puStack_30;
  undefined1 *puStack_28;
  
  if ((*(char *)(param_1 + 0xe7) < '\0') && (0xff < *(ulong *)(param_1 + 0xd8))) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../modules/rtp_rtcp/source/rtcp_sender.cc",0x186,"length_cname < 256",
                 &DAT_001fbca2,*(ulong *)(param_1 + 0xd8),0x100);
  }
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_28 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_30 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_007d02a0(&local_50);
  lVar2 = (long)*(char *)(param_1 + 0xe7);
  if (lVar2 < 0) {
    lVar1 = *(long *)(param_1 + 0xd0);
    lVar2 = *(long *)(param_1 + 0xd8);
  }
  else {
    lVar1 = param_1 + 0xd0;
  }
  FUN_007d0a18(&local_50,*(undefined4 *)(param_1 + 0x2c),lVar1,lVar2);
  (**(code **)(local_50 + 0x18))(&local_50,param_3 + 4,param_3 + 3,param_3[2],*param_3,param_3[1]);
  FUN_007d02c4(&local_50);
  return;
}


// ===== 00854914  FUN_00854914 =====

void FUN_00854914(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 *local_30;
  undefined8 uStack_28;
  
  uStack_28 = &DAT_aaaaaaaaaaaaaaaa;
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_007ceda8(&local_30);
  *(int *)(param_1 + 0x188) = *(int *)(param_1 + 0x188) + 1;
  uStack_28 = (undefined1 *)CONCAT44(*(undefined4 *)(param_1 + 200),*(undefined4 *)(param_1 + 0x2c))
  ;
  (**(code **)(local_30 + 0x18))(&local_30,param_3 + 4,param_3 + 3,param_3[2],*param_3,param_3[1]);
  FUN_007cedbc(&local_30);
  return;
}


// ===== 00854994  FUN_00854994 =====

void FUN_00854994(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined4 *local_48;
  undefined4 *local_40;
  undefined1 local_18 [4];
  undefined4 local_14;
  
  *(char *)(param_1 + 0x108) = *(char *)(param_1 + 0x108) + '\x01';
  local_40 = (undefined4 *)&DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = (undefined4 *)&DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00857f6c(&local_60);
  local_14 = *(undefined4 *)(param_1 + 200);
  local_18[0] = *(undefined1 *)(param_1 + 0x108);
  puStack_58 = (undefined1 *)CONCAT44(puStack_58._4_4_,*(undefined4 *)(param_1 + 0x2c));
  if (local_48 < local_40) {
    if (local_48 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *local_48 = local_14;
    puVar1 = local_48 + 2;
    *(undefined1 *)(local_48 + 1) = local_18[0];
  }
  else {
    puVar1 = (undefined4 *)FUN_008571d8(&puStack_50,&local_14,local_18);
  }
  *(int *)(param_1 + 0x184) = *(int *)(param_1 + 0x184) + 1;
  local_48 = puVar1;
  (**(code **)(local_60 + 0x18))(&local_60,param_3 + 4,param_3 + 3,param_3[2],*param_3,param_3[1]);
  FUN_00857f90(&local_60);
  return;
}


// ===== 00854a84  FUN_00854a84 =====

void FUN_00854a84(long param_1,undefined8 param_2,undefined8 *param_3)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  void *local_78;
  void *local_70;
  void *local_68;
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
  FUN_007cf824(&local_60);
  local_50 = *(undefined1 **)(param_1 + 0x128);
  pvVar2 = *(void **)(param_1 + 0x130);
  local_70 = (void *)0x0;
  local_68 = (void *)0x0;
  puStack_58 = (undefined1 *)CONCAT44(puStack_58._4_4_,*(undefined4 *)(param_1 + 0x2c));
  uVar3 = *(long *)(param_1 + 0x138) - (long)pvVar2;
  local_78 = (void *)0x0;
  if (uVar3 != 0) {
    if ((long)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005da79c();
    }
    local_78 = operator_new(uVar3);
    pvVar1 = (void *)((long)local_78 + uVar3);
    local_68 = pvVar1;
    memcpy(local_78,pvVar2,uVar3);
    local_70 = pvVar1;
  }
  FUN_007cfc6c(&local_60,&local_78);
  if (local_78 != (void *)0x0) {
    uVar4 = (ulong)((long)local_70 + (-4 - ((long)local_70 << 0x3e))) >> 2;
    uVar3 = (ulong)(((long)local_78 - (long)local_70 << 0x3e) - ((long)local_78 - (long)local_70))
            >> 2;
    if (uVar4 <= uVar3) {
      uVar3 = uVar4;
    }
    pvVar2 = local_70;
    if ((1 < uVar3) && ((((int)local_78 - (int)local_70 | -(int)local_70) & 3U) == 0)) {
      uVar3 = uVar3 & 0x3ffffffffffffffe;
      pvVar2 = (void *)((long)local_70 + uVar3 * -4);
      do {
        uVar3 = uVar3 - 2;
      } while (uVar3 != 0);
    }
    while (pvVar2 != local_78) {
      pvVar2 = (void *)((long)pvVar2 + -4);
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    local_70 = local_78;
    operator_delete(local_78);
  }
  (**(code **)(local_60 + 0x18))(&local_60,param_3 + 4,param_3 + 3,param_3[2],*param_3,param_3[1]);
  FUN_007cf840(&local_60);
  return;
}


// ===== 00854be4  FUN_00854be4 =====

void FUN_00854be4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  void *local_88;
  void *local_80;
  void *local_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00858564(&local_70);
  pvVar2 = *(void **)(param_1 + 0xf0);
  local_80 = (void *)0x0;
  local_78 = (void *)0x0;
  puStack_68 = (undefined1 *)CONCAT44(puStack_68._4_4_,*(undefined4 *)(param_1 + 0x2c));
  uVar3 = *(long *)(param_1 + 0xf8) - (long)pvVar2;
  local_88 = (void *)0x0;
  if (uVar3 != 0) {
    if ((long)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005da79c();
    }
    local_88 = operator_new(uVar3);
    pvVar1 = (void *)((long)local_88 + uVar3);
    local_78 = pvVar1;
    memcpy(local_88,pvVar2,uVar3);
    local_80 = pvVar1;
  }
  FUN_00858b4c(&local_70,&local_88);
  if (local_88 != (void *)0x0) {
    uVar4 = (ulong)((long)local_80 + (-4 - ((long)local_80 << 0x3e))) >> 2;
    uVar3 = (ulong)(((long)local_88 - (long)local_80 << 0x3e) - ((long)local_88 - (long)local_80))
            >> 2;
    if (uVar4 <= uVar3) {
      uVar3 = uVar4;
    }
    pvVar2 = local_80;
    if ((1 < uVar3) && ((((int)local_88 - (int)local_80 | -(int)local_80) & 3U) == 0)) {
      uVar3 = uVar3 & 0x3ffffffffffffffe;
      pvVar2 = (void *)((long)local_80 + uVar3 * -4);
      do {
        uVar3 = uVar3 - 2;
      } while (uVar3 != 0);
    }
    while (pvVar2 != local_88) {
      pvVar2 = (void *)((long)pvVar2 + -4);
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    local_80 = local_88;
    operator_delete(local_88);
  }
  (**(code **)(local_70 + 0x18))(&local_70,param_3 + 4,param_3 + 3,param_3[2],*param_3,param_3[1]);
  FUN_00858588(&local_70);
  return;
}


// ===== 00854d3c  FUN_00854d3c =====

void FUN_00854d3c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_1 + 200);
                    /* WARNING: Could not recover jumptable at 0x00854d6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x110) + 0x18))
            (param_1 + 0x110,param_3 + 4,param_3 + 3,param_3[2],*param_3,param_3[1]);
  return;
}


// ===== 00854d70  FUN_00854d70 =====

void FUN_00854d70(long param_1,long *param_2,undefined8 *param_3)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 local_b0;
  undefined4 uStack_ac;
  ulong uStack_a8;
  undefined8 local_a0;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  byte local_14 [4];
  
  if (*(long *)(*param_2 + 0x40) == 0) {
    return;
  }
  local_14[0] = 0;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_0085c3f0(&local_50,*(long *)(*param_2 + 0x40),local_14);
  puVar2 = puStack_48;
  if (local_50 == puStack_48) {
LAB_00854e08:
    if (*(int *)(param_1 + 0x160) != 0) {
      puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
      local_90 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
      local_80 = &DAT_aaaaaaaaaaaaaaaa;
      local_70 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_00862e2c(&local_90);
      puStack_88 = (undefined1 *)CONCAT44(puStack_88._4_4_,*(undefined4 *)(param_1 + 0x2c));
      uStack_a8 = (ulong)*(uint *)(param_1 + 0x160);
      local_a0 = 0xaaaaaaaaaaaa0000;
      _local_b0 = CONCAT44(0xaaaaaaaa,*(undefined4 *)(param_1 + 200));
      FUN_00863764(&local_b0,*(undefined4 *)(param_1 + 0x164));
      FUN_0086331c(&local_90,&local_b0);
      (**(code **)(local_90 + 0x18))
                (&local_90,param_3 + 4,param_3 + 3,param_3[2],*param_3,param_3[1]);
      FUN_00862e50(&local_90);
    }
  }
  else {
    puVar3 = local_50;
    do {
      if ((*(ulong *)(puVar3 + 8) == (ulong)*(uint *)(param_1 + 0x160)) &&
         (*(uint *)(param_1 + 0x164) == (uint)*(ushort *)(puVar3 + 0x10))) goto LAB_00854e8c;
      puVar3 = puVar3 + 0x18;
    } while (puVar3 != puStack_48);
    if ((local_14[0] & 1) != 0) goto LAB_00854e08;
    if (puStack_48 < local_40) {
      if (puStack_48 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      FUN_00863614(puStack_48,*(undefined4 *)(param_1 + 0x2c),(ulong)*(uint *)(param_1 + 0x160),
                   *(uint *)(param_1 + 0x164));
      local_60 = puVar2 + 0x18;
    }
    else {
      local_60 = (undefined1 *)
                 FUN_008572f8(&local_50,param_1 + 0x2c,param_1 + 0x160,param_1 + 0x164);
    }
    local_58 = local_40;
    local_40 = (undefined1 *)0x0;
    local_68 = local_50;
    local_50 = (undefined1 *)0x0;
    local_80 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
    local_90 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_48 = (undefined1 *)0x0;
    FUN_0087560c(&local_90,&local_68);
    if (local_68 != (undefined1 *)0x0) {
      uVar4 = (ulong)(((long)local_68 - (long)local_60) * 0x1555555555555555) >> 3;
      uVar5 = (long)local_60 * -0x1555555555555555 - 8U >> 3;
      if (uVar5 <= uVar4) {
        uVar4 = uVar5;
      }
      puVar2 = local_60;
      if ((1 < uVar4) && ((((int)local_68 - (int)local_60 | -(int)local_60) & 7U) == 0)) {
        uVar4 = uVar4 & 0x1ffffffffffffffe;
        puVar2 = local_60 + uVar4 * -0x18;
        do {
          uVar4 = uVar4 - 2;
        } while (uVar4 != 0);
      }
      do {
        if (puVar2 == local_68) {
          local_60 = local_68;
          operator_delete(local_68);
          goto LAB_00855018;
        }
        puVar2 = puVar2 + -0x18;
      } while (puVar2 != (undefined1 *)0x0);
      goto LAB_008550ac;
    }
LAB_00855018:
    bVar1 = FUN_00875df8(&local_90,*(undefined4 *)(param_1 + 0x2c));
    local_14[0] = bVar1 & 1;
    if (local_90 != (undefined1 *)0x0) {
      uVar4 = (ulong)(((long)local_90 - (long)puStack_88) * 0x1555555555555555) >> 3;
      uVar5 = (long)puStack_88 * -0x1555555555555555 - 8U >> 3;
      if (uVar5 <= uVar4) {
        uVar4 = uVar5;
      }
      puVar2 = puStack_88;
      if ((1 < uVar4) && ((((int)local_90 - (int)puStack_88 | -(int)puStack_88) & 7U) == 0)) {
        uVar4 = uVar4 & 0x1ffffffffffffffe;
        puVar2 = puStack_88 + uVar4 * -0x18;
        do {
          uVar4 = uVar4 - 2;
        } while (uVar4 != 0);
      }
      do {
        if (puVar2 == local_90) {
          puStack_88 = local_90;
          operator_delete(local_90);
          goto LAB_008550d0;
        }
        puVar2 = puVar2 + -0x18;
      } while (puVar2 != (undefined1 *)0x0);
      goto LAB_008550ac;
    }
LAB_008550d0:
    if ((bVar1 & 1) != 0) goto LAB_00854e08;
  }
LAB_00854e8c:
  if (local_50 == (undefined1 *)0x0) {
    return;
  }
  uVar4 = (ulong)(((long)local_50 - (long)puStack_48) * 0x1555555555555555) >> 3;
  uVar5 = (long)puStack_48 * -0x1555555555555555 - 8U >> 3;
  if (uVar5 <= uVar4) {
    uVar4 = uVar5;
  }
  puVar2 = puStack_48;
  if ((1 < uVar4) && ((((int)local_50 - (int)puStack_48 | -(int)puStack_48) & 7U) == 0)) {
    uVar4 = uVar4 & 0x1ffffffffffffffe;
    puVar2 = puStack_48 + uVar4 * -0x18;
    do {
      uVar4 = uVar4 - 2;
    } while (uVar4 != 0);
  }
  do {
    if (puVar2 == local_50) {
      puStack_48 = local_50;
      operator_delete(local_50);
      return;
    }
    puVar2 = puVar2 + -0x18;
  } while (puVar2 != (undefined1 *)0x0);
LAB_008550ac:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00855104  FUN_00855104 =====

void FUN_00855104(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00863770(&local_60);
  lVar1 = *(long *)(param_1 + 0x148);
  lVar2 = *(long *)(param_1 + 0x150);
  puStack_58 = (undefined1 *)CONCAT44(puStack_58._4_4_,*(undefined4 *)(param_1 + 0x2c));
  for (; lVar1 != lVar2; lVar1 = lVar1 + 0x18) {
    if (*(long *)(lVar1 + 8) != 0) {
      FUN_00863a3c(&local_60,lVar1);
    }
  }
  (**(code **)(local_60 + 0x18))(&local_60,param_3 + 4,param_3 + 3,param_3[2],*param_3,param_3[1]);
  FUN_00863794(&local_60);
  return;
}


// ===== 008551b0  FUN_008551b0 =====

void FUN_008551b0(long param_1,long param_2,undefined8 *param_3)

{
  undefined2 *puVar1;
  long lVar2;
  undefined1 *local_70;
  undefined8 uStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  
  uStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_007ce040(&local_70);
  uStack_68 = (undefined1 *)CONCAT44(*(undefined4 *)(param_1 + 200),*(undefined4 *)(param_1 + 0x2c))
  ;
  FUN_007ce940(&local_70,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
  lVar2 = *(long *)(param_2 + 0x10) << 1;
  if (lVar2 != 0) {
    puVar1 = *(undefined2 **)(param_2 + 8);
    do {
      FUN_00857f18(param_1 + 0x194,*puVar1);
      lVar2 = lVar2 + -2;
      puVar1 = puVar1 + 1;
    } while (lVar2 != 0);
  }
  *(undefined8 *)(param_1 + 0x18c) = *(undefined8 *)(param_1 + 0x198);
  *(int *)(param_1 + 0x180) = *(int *)(param_1 + 0x180) + 1;
  (**(code **)(local_70 + 0x18))(&local_70,param_3 + 4,param_3 + 3,param_3[2],*param_3,param_3[1]);
  FUN_007ce060(&local_70);
  return;
}


// ===== 0085527c  FUN_0085527c =====

void FUN_0085527c(long param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00860a10(&local_90);
  puStack_88 = (undefined1 *)CONCAT44(puStack_88._4_4_,*(undefined4 *)(param_1 + 0x2c));
  if (((*(byte *)(param_1 + 0x98) & 1) == 0) && (*(char *)(param_1 + 0x170) == '\x01')) {
    local_b0 = (undefined1 *)
               (**(code **)(**(long **)(param_1 + 0x10) + 0x18))
                         (*(long **)(param_1 + 0x10),param_2[3]);
    FUN_00860eac(&local_90,&local_b0);
  }
  lVar2 = *(long *)(*param_2 + 0x30);
  for (lVar1 = *(long *)(*param_2 + 0x28); lVar1 != lVar2; lVar1 = lVar1 + 0xc) {
    FUN_00860f4c(&local_90,lVar1);
  }
  if ((*(byte *)(param_1 + 0x248) & 1) != 0) {
    puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
    local_b0 = &DAT_aaaaaaaaaaaaaaaa;
    local_a0 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00861a38(&local_b0);
    uVar4 = 0;
    do {
      uVar3 = FUN_007cbfa0(param_1 + 0x1a0,uVar4,0);
      if ((uVar3 & 1) != 0) {
        uVar3 = FUN_007cc028(param_1 + 0x1a0,uVar4,0);
        FUN_00861cdc(&local_b0,uVar4 & 0xffffffff,0,(uVar3 & 0xffffffff) / 1000);
      }
      uVar3 = FUN_007cbfa0(param_1 + 0x1a0,uVar4,1);
      if ((uVar3 & 1) != 0) {
        uVar3 = FUN_007cc028(param_1 + 0x1a0,uVar4,1);
        FUN_00861cdc(&local_b0,uVar4 & 0xffffffff,1,(uVar3 & 0xffffffff) / 1000);
      }
      uVar3 = FUN_007cbfa0(param_1 + 0x1a0,uVar4,2);
      if ((uVar3 & 1) != 0) {
        uVar3 = FUN_007cc028(param_1 + 0x1a0,uVar4,2);
        FUN_00861cdc(&local_b0,uVar4 & 0xffffffff,2,(uVar3 & 0xffffffff) / 1000);
      }
      uVar3 = FUN_007cbfa0(param_1 + 0x1a0,uVar4,3);
      if ((uVar3 & 1) != 0) {
        uVar3 = FUN_007cc028(param_1 + 0x1a0,uVar4,3);
        FUN_00861cdc(&local_b0,uVar4 & 0xffffffff,3,(uVar3 & 0xffffffff) / 1000);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != 5);
    FUN_00861008(&local_90,&local_b0);
    *(undefined1 *)(param_1 + 0x248) = 0;
    FUN_00861afc(&local_b0);
  }
  (**(code **)(local_90 + 0x18))(&local_90,param_3 + 4,param_3 + 3,param_3[2],*param_3,param_3[1]);
  FUN_00860a5c(&local_90);
  return;
}


// ===== 008554a8  FUN_008554a8 =====

void FUN_008554a8(undefined8 *param_1)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *local_8;
  
  local_8 = param_1 + 0x52;
  FUN_008575e8(&local_8,param_1[0x53]);
  local_8 = param_1 + 0x4f;
  FUN_00857574(&local_8,param_1[0x50]);
  local_8 = param_1 + 0x4a;
  FUN_00857500(&local_8,param_1[0x4b]);
  pvVar2 = (void *)param_1[0x29];
  if (pvVar2 == (void *)0x0) {
LAB_00855588:
    pvVar2 = (void *)param_1[0x26];
    if (pvVar2 == (void *)0x0) {
LAB_00855608:
      FUN_00857cd8(param_1 + 0x22);
      pvVar2 = (void *)param_1[0x1e];
      if (pvVar2 == (void *)0x0) {
LAB_008556a0:
        if (*(char *)((long)param_1 + 0xe7) < '\0') {
          operator_delete((void *)param_1[0x1a]);
        }
        pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0xe));
        (*(code *)param_1[0xc])(0,param_1 + 10,param_1 + 10);
        plVar6 = (long *)*param_1;
        if ((plVar6 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar6 + 1), iVar1 == 1)) {
          (**(code **)(*plVar6 + 8))(plVar6);
        }
        return;
      }
      pvVar3 = (void *)param_1[0x1f];
      uVar5 = (ulong)((long)pvVar3 + (-4 - ((long)pvVar3 << 0x3e))) >> 2;
      uVar4 = (ulong)(((long)pvVar2 - (long)pvVar3 << 0x3e) - ((long)pvVar2 - (long)pvVar3)) >> 2;
      if (uVar5 <= uVar4) {
        uVar4 = uVar5;
      }
      if ((1 < uVar4) && ((((int)pvVar2 - (int)pvVar3 | -(int)pvVar3) & 3U) == 0)) {
        uVar4 = uVar4 & 0x3ffffffffffffffe;
        pvVar3 = (void *)((long)pvVar3 + uVar4 * -4);
        do {
          uVar4 = uVar4 - 2;
        } while (uVar4 != 0);
      }
      do {
        if (pvVar3 == pvVar2) {
          param_1[0x1f] = pvVar2;
          operator_delete(pvVar2);
          goto LAB_008556a0;
        }
        pvVar3 = (void *)((long)pvVar3 + -4);
      } while (pvVar3 != (void *)0x0);
    }
    else {
      pvVar3 = (void *)param_1[0x27];
      uVar5 = (ulong)((long)pvVar3 + (-4 - ((long)pvVar3 << 0x3e))) >> 2;
      uVar4 = (ulong)(((long)pvVar2 - (long)pvVar3 << 0x3e) - ((long)pvVar2 - (long)pvVar3)) >> 2;
      if (uVar5 <= uVar4) {
        uVar4 = uVar5;
      }
      if ((1 < uVar4) && ((((int)pvVar2 - (int)pvVar3 | -(int)pvVar3) & 3U) == 0)) {
        uVar4 = uVar4 & 0x3ffffffffffffffe;
        pvVar3 = (void *)((long)pvVar3 + uVar4 * -4);
        do {
          uVar4 = uVar4 - 2;
        } while (uVar4 != 0);
      }
      do {
        if (pvVar3 == pvVar2) {
          param_1[0x27] = pvVar2;
          operator_delete(pvVar2);
          goto LAB_00855608;
        }
        pvVar3 = (void *)((long)pvVar3 + -4);
      } while (pvVar3 != (void *)0x0);
    }
  }
  else {
    pvVar3 = (void *)param_1[0x2a];
    uVar4 = (ulong)(((long)pvVar2 - (long)pvVar3) * 0x1555555555555555) >> 3;
    uVar5 = (long)pvVar3 * -0x1555555555555555 - 8U >> 3;
    if (uVar5 <= uVar4) {
      uVar4 = uVar5;
    }
    if ((1 < uVar4) && ((((int)pvVar2 - (int)pvVar3 | -(int)pvVar3) & 7U) == 0)) {
      uVar4 = uVar4 & 0x1ffffffffffffffe;
      pvVar3 = (void *)((long)pvVar3 + uVar4 * -0x18);
      do {
        uVar4 = uVar4 - 2;
      } while (uVar4 != 0);
    }
    do {
      if (pvVar3 == pvVar2) {
        param_1[0x2a] = pvVar2;
        operator_delete(pvVar2);
        goto LAB_00855588;
      }
      pvVar3 = (void *)((long)pvVar3 + -0x18);
    } while (pvVar3 != (void *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00855710  FUN_00855710 =====

undefined4 FUN_00855710(long param_1)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x70));
  uVar1 = *(undefined4 *)(param_1 + 0x38);
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x70));
  return uVar1;
}


// ===== 0085574c  FUN_0085574c =====

int FUN_0085574c(long param_1,int param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long local_18;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x70));
  if (param_2 == 0) {
    if (*(char *)(param_1 + 0xa8) == '\x01') {
      *(undefined1 *)(param_1 + 0xa8) = 0;
    }
  }
  else if (*(int *)(param_1 + 0x38) == 0) {
    lVar4 = *(long *)(param_1 + 0x48) / 2;
    lVar3 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
    lVar1 = lVar3;
    if (lVar3 != -0x8000000000000000) {
      lVar1 = lVar3 + lVar4;
    }
    if (lVar3 != 0x7fffffffffffffff) {
      lVar3 = lVar1;
    }
    if (*(char *)(param_1 + 0xa8) == '\x01') {
      *(long *)(param_1 + 0xa0) = lVar3;
    }
    else {
      if ((long *)(param_1 + 0xa0) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      *(long *)(param_1 + 0xa0) = lVar3;
      *(undefined1 *)(param_1 + 0xa8) = 1;
    }
    local_18 = lVar4;
    (**(code **)(param_1 + 0x68))(param_1 + 0x50,&local_18);
  }
  *(int *)(param_1 + 0x38) = param_2;
  iVar2 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x70));
  return iVar2;
}


// ===== 00855838  FUN_00855838 =====

undefined1 FUN_00855838(long param_1)

{
  undefined1 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x70));
  uVar1 = *(undefined1 *)(param_1 + 0x98);
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x70));
  return uVar1;
}


// ===== 00855874  FUN_00855874 =====

int FUN_00855874(long param_1,undefined8 param_2,undefined1 param_3)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x70));
  *(undefined1 *)(param_1 + 0x98) = param_3;
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x70));
  return iVar1;
}


// ===== 008558ac  FUN_008558ac =====

int FUN_008558ac(long param_1,undefined1 param_2)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x70));
  *(undefined1 *)(param_1 + 0x170) = param_2;
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x70));
  return iVar1;
}


// ===== 008558e4  FUN_008558e4 =====

/* WARNING: Type propagation algorithm not settling */

ulong FUN_008558e4(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,ulong param_6)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long local_690;
  uint *puStack_688;
  uint local_67c [2];
  undefined1 local_674;
  undefined1 *local_670;
  code *pcStack_668;
  ulong local_660;
  long local_658;
  undefined1 auStack_650 [1504];
  byte local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar4 = 0xffffffff;
  puStack_688 = local_67c;
  local_67c[0] = 0xffffffff;
  local_690 = param_1;
  memset(auStack_650,0xaa,0x5e8);
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x70));
  uVar3 = FUN_00857edc(param_1 + 0x110,param_3,param_4,param_5);
  if ((uVar3 & 1) != 0) {
    local_67c[1] = 0x2000;
    local_674 = 1;
    FUN_00857b1c(0,param_1 + 0x278,param_1 + 0x278,local_67c + 1);
    if ((param_6 & 1) == 0) {
      local_660 = *(ulong *)(param_1 + 0x168);
      pcStack_668 = FUN_00857128;
      local_658 = 0;
      if (0x5dc < local_660) {
        local_670 = (undefined1 *)&local_690;
                    /* WARNING: Subroutine does not return */
        FUN_0061fd88("../../modules/rtp_rtcp/source/rtcp_sender.cc",0x4e,"max_packet_size <= 1500",
                     &DAT_001fbca2,local_660,0x5dc);
      }
      local_70 = 1;
      local_670 = (undefined1 *)&local_690;
      uVar4 = FUN_00855a9c(param_1,param_2,0x2000,0,0,&local_670);
      if (uVar4 >> 0x20 == 0) {
        uVar2 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x70));
        uVar3 = (ulong)uVar2;
        if ((local_70 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                    );
        }
        if (local_658 != 0) {
          uVar3 = (*pcStack_668)(local_670,auStack_650);
        }
        uVar4 = (ulong)local_67c[0];
        goto LAB_00855a28;
      }
    }
    else {
      uVar4 = 0;
    }
  }
  uVar2 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x70));
  uVar3 = (ulong)uVar2;
LAB_00855a28:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return uVar4 & 0xffffffff;
}


// ===== 00855a9c  FUN_00855a9c =====

undefined8
FUN_00855a9c(long param_1,undefined8 param_2,uint param_3,undefined8 param_4,undefined8 param_5,
            undefined8 param_6)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  code *pcVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if (*(int *)(param_1 + 0x38) == 0) {
    uVar5 = FUN_004022fc();
    if ((uVar5 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../modules/rtp_rtcp/source/rtcp_sender.cc",0x12fa,
                   "Can\'t send RTCP if it is disabled.");
      return 0x1ffffffff;
    }
LAB_00855bfc:
    uVar6 = 0x1ffffffff;
  }
  else {
    if ((param_3 & 0x2c0000) == 0) {
      local_80 = CONCAT44(local_80._4_4_,param_3);
    }
    else {
      local_80 = CONCAT44(local_80._4_4_,0x2c0000);
    }
    local_80._0_5_ = CONCAT14(1,(undefined4)local_80);
    FUN_00857b1c(0,param_1 + 0x278,param_1 + 0x278,&local_80);
    if ((*(byte *)(param_1 + 0xc0) & 1) == 0) {
      uVar3 = FUN_0085601c(param_1,2,0);
      if (*(char *)(param_1 + 0x98) == '\x01') {
        uVar4 = FUN_0085601c(param_1,1,0);
        uVar3 = uVar3 | uVar4;
      }
      if ((uVar3 & 1) != 0) {
        plVar7 = *(long **)(param_1 + 0x278);
        while( true ) {
          if (plVar7 == (long *)(param_1 + 0x280)) {
            return 0x100000000;
          }
          if ((*(byte *)(plVar7 + 4) & 1) != 0) break;
          plVar10 = plVar7;
          plVar8 = (long *)plVar7[1];
          if ((long *)plVar7[1] == (long *)0x0) {
            do {
              plVar7 = (long *)plVar10[2];
              bVar1 = plVar10 != (long *)*plVar7;
              plVar10 = plVar7;
            } while (bVar1);
          }
          else {
            do {
              plVar7 = plVar8;
              plVar8 = (long *)*plVar7;
            } while ((long *)*plVar7 != (long *)0x0);
          }
        }
      }
      if ((*(char *)(param_1 + 0x98) == '\x01') && (*(int *)(param_1 + 0x38) == 1))
      goto LAB_00855bfc;
    }
    uStack_68 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
    local_80 = param_2;
    uStack_78 = param_4;
    local_70 = param_5;
    FUN_008566a4(param_1,param_2);
    plVar7 = (long *)(param_1 + 0x280);
    if (*(long **)(param_1 + 0x278) != plVar7) {
      bVar1 = false;
      plVar10 = *(long **)(param_1 + 0x278);
      do {
        while( true ) {
          uVar3 = *(uint *)((long)plVar10 + 0x1c);
          plVar8 = (long *)plVar10[1];
          if ((char)plVar10[4] == '\x01') {
            plVar11 = plVar8;
            plVar12 = plVar10;
            if (plVar8 == (long *)0x0) {
              do {
                plVar13 = (long *)plVar12[2];
                bVar2 = plVar12 != (long *)*plVar13;
                plVar8 = plVar10;
                plVar12 = plVar13;
              } while (bVar2);
              do {
                plVar11 = (long *)plVar8[2];
                bVar2 = plVar8 != (long *)*plVar11;
                plVar8 = plVar11;
              } while (bVar2);
            }
            else {
              do {
                plVar13 = plVar11;
                plVar11 = (long *)*plVar13;
              } while ((long *)*plVar13 != (long *)0x0);
              do {
                plVar11 = plVar8;
                plVar8 = (long *)*plVar11;
              } while ((long *)*plVar11 != (long *)0x0);
            }
            if (*(long **)(param_1 + 0x278) == plVar10) {
              *(long **)(param_1 + 0x278) = plVar11;
            }
            *(long *)(param_1 + 0x288) = *(long *)(param_1 + 0x288) + -1;
            FUN_005d5d48(*(undefined8 *)(param_1 + 0x280),plVar10);
            if ((uint *)((long)plVar10 + 0x1c) == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                        );
            }
            operator_delete(plVar10);
          }
          else if (plVar8 == (long *)0x0) {
            do {
              plVar13 = (long *)plVar10[2];
              bVar2 = plVar10 != (long *)*plVar13;
              plVar10 = plVar13;
            } while (bVar2);
          }
          else {
            do {
              plVar13 = plVar8;
              plVar8 = (long *)*plVar13;
            } while ((long *)*plVar13 != (long *)0x0);
          }
          plVar10 = plVar13;
          if (uVar3 == 0x10) break;
          for (plVar8 = *(long **)(param_1 + 0x298); plVar8 != (long *)0x0; plVar8 = (long *)*plVar8
              ) {
            while (*(uint *)(plVar8 + 4) <= uVar3) {
              if (uVar3 == *(uint *)(plVar8 + 4)) {
                if (plVar8 != (long *)(param_1 + 0x298)) {
                  pcVar9 = (code *)plVar8[5];
                  plVar11 = (long *)(param_1 + (plVar8[6] >> 1));
                  if ((plVar8[6] & 1U) != 0) {
                    pcVar9 = *(code **)(pcVar9 + *plVar11);
                  }
                  (*pcVar9)(plVar11,&local_80,param_6);
                }
                goto LAB_00855c50;
              }
              plVar8 = (long *)plVar8[1];
              if (plVar8 == (long *)0x0) goto LAB_00855c50;
            }
          }
LAB_00855c50:
          if (plVar13 == plVar7) {
            if (!bVar1) goto LAB_00855da4;
            goto LAB_00855d98;
          }
        }
        bVar1 = true;
      } while (plVar13 != plVar7);
LAB_00855d98:
      FUN_00854be4(param_1);
    }
LAB_00855da4:
    plVar7 = *(long **)(param_1 + 0x178);
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,*(undefined4 *)(param_1 + 200),param_1 + 0x180);
    }
    uVar6 = 0;
  }
  return uVar6;
}


// ===== 00855dfc  FUN_00855dfc =====

int FUN_00855dfc(long param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 local_18;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../modules/rtp_rtcp/source/rtcp_sender.cc",0xf7,"bitrate_bps >= 0",
                 &DAT_0021f928,param_2,0);
  }
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x70));
  if (*(int *)(param_1 + 0x38) == 0) {
    uVar5 = FUN_004022fc(iVar1);
    if ((uVar5 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../modules/rtp_rtcp/source/rtcp_sender.cc",0x7d2,
                   "Can\'t send RTCP if it is disabled.");
    }
  }
  else {
    pvVar2 = *(void **)(param_1 + 0x130);
    *(long *)(param_1 + 0x128) = param_2;
    if (pvVar2 != (void *)0x0) {
      pvVar4 = *(void **)(param_1 + 0x138);
      uVar6 = (ulong)((long)pvVar4 + (-4 - ((long)pvVar4 << 0x3e))) >> 2;
      uVar5 = (ulong)(((long)pvVar2 - (long)pvVar4 << 0x3e) - ((long)pvVar2 - (long)pvVar4)) >> 2;
      if (uVar6 <= uVar5) {
        uVar5 = uVar6;
      }
      if ((1 < uVar5) && ((((int)pvVar2 - (int)pvVar4 | -(int)pvVar4) & 3U) == 0)) {
        uVar5 = uVar5 & 0x3ffffffffffffffe;
        pvVar4 = (void *)((long)pvVar4 + uVar5 * -4);
        do {
          uVar5 = uVar5 - 2;
        } while (uVar5 != 0);
      }
      while (pvVar4 != pvVar2) {
        pvVar4 = (void *)((long)pvVar4 + -4);
        if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      *(void **)(param_1 + 0x138) = pvVar2;
      operator_delete(pvVar2);
      *(undefined8 *)(param_1 + 0x130) = 0;
      *(undefined8 *)(param_1 + 0x138) = 0;
      *(undefined8 *)(param_1 + 0x140) = 0;
    }
    uVar5 = (ulong)local_18 >> 0x20;
    *(undefined8 *)(param_1 + 0x130) = *param_3;
    *(undefined8 *)(param_1 + 0x138) = param_3[1];
    local_18 = CONCAT44((uint)uVar5 & 0xffffff00,0x10000);
    *(undefined8 *)(param_1 + 0x140) = param_3[2];
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    FUN_00857b1c(0,param_1 + 0x278,param_1 + 0x278,&local_18);
    uVar3 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
    if (*(char *)(param_1 + 0xa8) == '\x01') {
      *(undefined8 *)(param_1 + 0xa0) = uVar3;
    }
    else {
      if ((undefined8 *)(param_1 + 0xa0) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      *(undefined8 *)(param_1 + 0xa0) = uVar3;
      *(undefined1 *)(param_1 + 0xa8) = 1;
    }
    local_18 = 0;
    (**(code **)(param_1 + 0x68))(param_1 + 0x50,&local_18);
  }
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x70));
  return iVar1;
}


// ===== 00855fdc  FUN_00855fdc =====

int FUN_00855fdc(long param_1)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x70));
  FUN_0085601c(param_1,0x10000,1);
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x70));
  return iVar1;
}


// ===== 0085601c  FUN_0085601c =====

long * FUN_0085601c(long param_1,uint param_2,uint param_3)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  plVar3 = *(long **)(param_1 + 0x280);
  if (plVar3 != (long *)0x0) {
    plVar6 = plVar3;
    do {
      while (*(uint *)((long)plVar6 + 0x1c) <= param_2) {
        if (param_2 <= *(uint *)((long)plVar6 + 0x1c)) {
          if (plVar6 != (long *)(param_1 + 0x280)) {
            if (((param_3 & 1) != 0) || ((*(byte *)(plVar6 + 4) & 1) != 0)) {
              plVar4 = plVar6;
              plVar1 = (long *)plVar6[1];
              if ((long *)plVar6[1] == (long *)0x0) {
                do {
                  plVar5 = (long *)plVar4[2];
                  bVar2 = plVar4 != (long *)*plVar5;
                  plVar4 = plVar5;
                } while (bVar2);
              }
              else {
                do {
                  plVar5 = plVar1;
                  plVar1 = (long *)*plVar5;
                } while ((long *)*plVar5 != (long *)0x0);
              }
              if (*(long **)(param_1 + 0x278) == plVar6) {
                *(long **)(param_1 + 0x278) = plVar5;
              }
              *(long *)(param_1 + 0x288) = *(long *)(param_1 + 0x288) + -1;
              FUN_005d5d48(plVar3,plVar6);
              if (plVar6 == (long *)0xffffffffffffffe4) {
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s",
                           "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                          );
              }
              operator_delete(plVar6);
            }
            return (long *)0x1;
          }
          goto LAB_0085609c;
        }
        plVar6 = (long *)plVar6[1];
        if (plVar6 == (long *)0x0) goto LAB_0085609c;
      }
      plVar6 = (long *)*plVar6;
    } while (plVar6 != (long *)0x0);
LAB_0085609c:
    plVar3 = (long *)0x0;
  }
  return plVar3;
}


// ===== 00856118  FUN_00856118 =====

int FUN_00856118(long param_1,undefined8 param_2)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x70));
  *(undefined8 *)(param_1 + 0x168) = param_2;
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x70));
  return iVar1;
}


// ===== 00856150  FUN_00856150 =====

int FUN_00856150(long param_1,undefined4 param_2)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x70));
  *(undefined4 *)(param_1 + 0xb0) = param_2;
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x70));
  return iVar1;
}


// ===== 00856188  FUN_00856188 =====

int FUN_00856188(long param_1,undefined4 param_2,undefined8 param_3,ulong param_4,uint param_5)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x70));
  if ((param_5 >> 8 & 1) != 0) {
    *(char *)(param_1 + 0x268) = (char)param_5;
  }
  *(undefined4 *)(param_1 + 0xb4) = param_2;
  if ((param_4 & 1) == 0) {
    uVar3 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
    bVar1 = *(byte *)(param_1 + 0xc0);
    *(undefined8 *)(param_1 + 0xb8) = uVar3;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0xc0);
    *(undefined8 *)(param_1 + 0xb8) = param_3;
  }
  if ((bVar1 & 1) == 0) {
    *(undefined1 *)(param_1 + 0xc0) = 1;
  }
  iVar2 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x70));
  return iVar2;
}


// ===== 0085621c  FUN_0085621c =====

int FUN_0085621c(long param_1,undefined1 param_2,int param_3)

{
  int iVar1;
  long lVar2;
  undefined1 local_2c [3];
  undefined1 uStack_29;
  undefined1 *local_28;
  
  local_2c[0] = param_2;
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x70));
  local_28 = local_2c;
  lVar2 = FUN_00857a18(0,param_1 + 0x250,param_1 + 0x250,&DAT_001f94c3,&local_28,&uStack_29);
  *(int *)(lVar2 + 0x20) = param_3 / 1000;
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x70));
  return iVar1;
}


// ===== 008562a4  FUN_008562a4 =====

undefined4 FUN_008562a4(long param_1)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x70));
  uVar1 = *(undefined4 *)(param_1 + 0x2c);
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x70));
  return uVar1;
}


// ===== 008562e0  FUN_008562e0 =====

int FUN_008562e0(long param_1,undefined4 param_2)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x70));
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x70));
  return iVar1;
}


// ===== 00856318  FUN_00856318 =====

int FUN_00856318(long param_1,undefined4 param_2)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x70));
  *(undefined4 *)(param_1 + 200) = param_2;
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x70));
  return iVar1;
}


// ===== 00856350  FUN_00856350 =====

undefined8 FUN_00856350(long param_1,undefined8 ***param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  char cVar3;
  int iVar4;
  undefined8 ***__dest;
  undefined8 **local_58;
  ulong uStack_50;
  undefined8 local_48;
  
  iVar4 = pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x70));
  if (0x7ffffffffffffff6 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec(iVar4);
  }
  if (param_3 < 0x17) {
    local_48 = CONCAT17((char)param_3,(undefined7)local_48);
    __dest = &local_58;
  }
  else {
    uVar1 = (param_3 & 0x7ffffffffffffff8) + 8;
    uVar2 = 0x19;
    if (uVar1 != 0x18) {
      uVar2 = uVar1;
    }
    __dest = (undefined8 ***)operator_new(uVar2);
    local_48 = uVar2 | 0x8000000000000000;
    local_58 = __dest;
    uStack_50 = param_3;
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
    cVar3 = *(char *)(param_1 + 0xe7);
    *(undefined1 *)((long)__dest + param_3) = 0;
    if (cVar3 < '\0') {
      operator_delete(*(void **)(param_1 + 0xd0));
    }
    *(ulong *)(param_1 + 0xd8) = uStack_50;
    *(undefined8 ***)(param_1 + 0xd0) = local_58;
    *(ulong *)(param_1 + 0xe0) = local_48;
    pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x70));
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
            );
}


// ===== 0085647c  FUN_0085647c =====

bool FUN_0085647c(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  lVar3 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x70));
  if (*(int *)(param_1 + 0x38) == 0) {
    bVar4 = false;
  }
  else {
    lVar2 = lVar3;
    if (lVar3 != -0x8000000000000000) {
      lVar2 = lVar3 + 100000;
    }
    lVar1 = 0x7fffffffffffffff;
    if (lVar3 != 0x7fffffffffffffff) {
      lVar1 = lVar2;
    }
    lVar2 = lVar3;
    if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
      lVar2 = lVar1;
    }
    if ((param_2 & 1) != 0) {
      lVar3 = lVar2;
    }
    if ((*(byte *)(param_1 + 0xa8) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1064: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                );
    }
    bVar4 = *(long *)(param_1 + 0xa0) <= lVar3;
  }
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x70));
  return bVar4;
}


// ===== 00856540  FUN_00856540 =====

ulong FUN_00856540(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long local_678;
  uint *puStack_670;
  uint local_664;
  long *local_660;
  code *pcStack_658;
  ulong local_650;
  long local_648;
  undefined1 auStack_640 [1504];
  byte local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  puStack_670 = &local_664;
  local_664 = 0xffffffff;
  local_678 = param_1;
  memset(auStack_640,0xaa,0x5e8);
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x70));
  local_650 = *(ulong *)(param_1 + 0x168);
  local_660 = &local_678;
  pcStack_658 = FUN_00857448;
  local_648 = 0;
  if (0x5dc < local_650) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../modules/rtp_rtcp/source/rtcp_sender.cc",0x4e,"max_packet_size <= 1500",
                 &DAT_001fbca2,local_650,0x5dc);
  }
  local_60 = 1;
  uVar3 = FUN_00855a9c(param_1,param_2,param_3,param_4,param_5,&local_660);
  if (uVar3 >> 0x20 == 0) {
    uVar2 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x70));
    uVar4 = (ulong)uVar2;
    if ((local_60 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                );
    }
    if (local_648 != 0) {
      uVar4 = (*pcStack_658)(local_660,auStack_640);
    }
    uVar3 = (ulong)local_664;
  }
  else {
    uVar2 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x70));
    uVar4 = (ulong)uVar2;
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


// ===== 008566a4  FUN_008566a4 =====

void FUN_008566a4(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  undefined4 uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long local_28;
  
  plVar8 = *(long **)(param_1 + 0x280);
  plVar2 = (long *)(param_1 + 0x280);
  plVar9 = plVar8;
  if (plVar8 != (long *)0x0) {
    do {
      while (2 < *(uint *)((long)plVar9 + 0x1c)) {
        plVar9 = (long *)*plVar9;
        if (plVar9 == (long *)0x0) goto LAB_00856714;
      }
      if (*(uint *)((long)plVar9 + 0x1c) == 2) {
        if (plVar9 != plVar2) goto LAB_008567a0;
        break;
      }
      plVar1 = plVar9 + 1;
      plVar9 = (long *)*plVar1;
    } while ((long *)*plVar1 != (long *)0x0);
LAB_00856714:
    do {
      if (4 < *(uint *)((long)plVar8 + 0x1c)) {
        plVar8 = (long *)*plVar8;
        if (plVar8 == (long *)0x0) break;
        goto LAB_00856714;
      }
      if (*(uint *)((long)plVar8 + 0x1c) == 4) {
        if (plVar8 != plVar2) goto LAB_008567a0;
        break;
      }
      plVar8 = (long *)plVar8[1];
    } while (plVar8 != (long *)0x0);
  }
  bVar5 = FUN_0085601c(param_1,1,0);
  if (((bVar5 & *(int *)(param_1 + 0x38) == 2) != 0) ||
     (bVar4 = false, *(int *)(param_1 + 0x38) == 1)) {
    local_28 = CONCAT35(local_28._5_3_,0x100000000);
    uVar11 = 2;
    if (*(char *)(param_1 + 0x98) == '\0') {
      uVar11 = 4;
    }
    local_28 = CONCAT44(local_28._4_4_,uVar11);
    FUN_00857b1c(0,param_1 + 0x278,param_1 + 0x278,&local_28);
LAB_008567a0:
    bVar4 = true;
  }
  plVar9 = (long *)*plVar2;
  plVar8 = plVar9;
  if (plVar9 != (long *)0x0) {
    do {
      while (2 < *(uint *)((long)plVar8 + 0x1c)) {
        plVar8 = (long *)*plVar8;
        if (plVar8 == (long *)0x0) goto LAB_008567f0;
      }
      if (*(uint *)((long)plVar8 + 0x1c) == 2) {
        if (plVar8 != plVar2) goto LAB_00856828;
        break;
      }
      plVar1 = plVar8 + 1;
      plVar8 = (long *)*plVar1;
    } while ((long *)*plVar1 != (long *)0x0);
LAB_008567f0:
    do {
      if (*(uint *)((long)plVar9 + 0x1c) < 5) {
        if (*(uint *)((long)plVar9 + 0x1c) == 4) {
          if (plVar9 != plVar2) {
            lVar14 = (long)*(char *)(param_1 + 0xe7);
            if (lVar14 < 0) {
              lVar14 = *(long *)(param_1 + 0xd8);
            }
            if (lVar14 != 0) {
LAB_00856828:
              local_28 = CONCAT35(local_28._5_3_,0x100000008);
              FUN_00857b1c(0,param_1 + 0x278,param_1 + 0x278,&local_28);
            }
          }
          break;
        }
        plVar9 = (long *)plVar9[1];
      }
      else {
        plVar9 = (long *)*plVar9;
      }
    } while (plVar9 != (long *)0x0);
  }
  if (!bVar4) {
    return;
  }
  if (((((*(byte *)(param_1 + 0x98) & 1) == 0) && ((*(byte *)(param_1 + 0x170) & 1) != 0)) ||
      (*(long *)(param_2 + 0x28) != *(long *)(param_2 + 0x30))) ||
     (*(char *)(param_1 + 0x248) == '\x01')) {
    local_28 = CONCAT35(local_28._5_3_,0x1002c0000);
    FUN_00857b1c(0,param_1 + 0x278,param_1 + 0x278,&local_28);
  }
  uVar10 = *(ulong *)(param_1 + 0x48);
  if ((((*(byte *)(param_1 + 0x28) & 1) == 0) && (*(char *)(param_1 + 0x98) == '\x01')) &&
     (uVar12 = *(ulong *)(param_2 + 0x10), 72000 < (long)uVar12)) {
    uVar13 = uVar12 / 1000;
    if (499 < uVar12 % 1000) {
      uVar13 = uVar13 + 1;
    }
    uVar12 = 0;
    if (uVar13 != 0) {
      uVar12 = 360000000 / uVar13;
    }
    if ((long)uVar10 < (long)uVar12) goto LAB_008568a8;
  }
  else {
LAB_008568a8:
    uVar12 = uVar10;
    if ((long)uVar10 < 0) {
      iVar6 = -(int)(-uVar10 / 1000) - (uint)(500 < -uVar10 % 1000);
      goto LAB_00856978;
    }
  }
  iVar6 = (int)(uVar12 / 1000);
  if (499 < uVar12 % 1000) {
    iVar6 = iVar6 + 1;
  }
LAB_00856978:
  iVar6 = FUN_00889ce0(param_1 + 0x30,iVar6 / 2,(iVar6 * 3) / 2);
  lVar14 = (long)iVar6 * 1000;
  if (lVar14 < 0x3e9) {
    lVar14 = 1000;
  }
  lVar7 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))(*(long **)(param_1 + 0x10));
  lVar3 = lVar7;
  if (lVar7 != -0x8000000000000000) {
    lVar3 = lVar7 + lVar14;
  }
  if (lVar7 != 0x7fffffffffffffff) {
    lVar7 = lVar3;
  }
  if (*(char *)(param_1 + 0xa8) == '\x01') {
    *(long *)(param_1 + 0xa0) = lVar7;
  }
  else {
    if ((long *)(param_1 + 0xa0) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *(long *)(param_1 + 0xa0) = lVar7;
    *(undefined1 *)(param_1 + 0xa8) = 1;
  }
  local_28 = lVar14;
  (**(code **)(param_1 + 0x68))(param_1 + 0x50,&local_28);
  return;
}


// ===== 00856a3c  FUN_00856a3c =====

int FUN_00856a3c(long param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 local_28;
  undefined1 local_24;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x70));
  pvVar2 = *(void **)(param_1 + 0x148);
  if (pvVar2 != (void *)0x0) {
    pvVar3 = *(void **)(param_1 + 0x150);
    uVar4 = (ulong)(((long)pvVar2 - (long)pvVar3) * 0x1555555555555555) >> 3;
    uVar5 = (long)pvVar3 * -0x1555555555555555 - 8U >> 3;
    if (uVar5 <= uVar4) {
      uVar4 = uVar5;
    }
    if ((1 < uVar4) && ((((int)pvVar2 - (int)pvVar3 | -(int)pvVar3) & 7U) == 0)) {
      uVar4 = uVar4 & 0x1ffffffffffffffe;
      pvVar3 = (void *)((long)pvVar3 + uVar4 * -0x18);
      do {
        uVar4 = uVar4 - 2;
      } while (uVar4 != 0);
    }
    while (pvVar3 != pvVar2) {
      pvVar3 = (void *)((long)pvVar3 + -0x18);
      if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    *(void **)(param_1 + 0x150) = pvVar2;
    operator_delete(pvVar2);
    *(undefined8 *)(param_1 + 0x148) = 0;
    *(undefined8 *)(param_1 + 0x150) = 0;
    *(undefined8 *)(param_1 + 0x158) = 0;
  }
  *(undefined8 *)(param_1 + 0x148) = *param_2;
  *(undefined8 *)(param_1 + 0x150) = param_2[1];
  local_28 = 0x200;
  local_24 = 1;
  *(undefined8 *)(param_1 + 0x158) = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  FUN_00857b1c(0,param_1 + 0x278,param_1 + 0x278,&local_28);
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x70));
  return iVar1;
}


// ===== 00856b68  FUN_00856b68 =====

int FUN_00856b68(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  void *local_118 [2];
  char cStack_101;
  undefined1 uStack_f9;
  char *local_f8;
  ulong local_f0;
  undefined1 *local_e8;
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
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint uStack_38;
  
  iVar2 = pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x70));
  if (*(int *)(param_1 + 0x38) == 0) {
    uVar3 = FUN_004022fc(iVar2);
    if ((uVar3 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../modules/rtp_rtcp/source/rtcp_sender.cc",0x197a,
                   "Can\'t send RTCP if it is disabled.");
    }
  }
  else {
    uStack_3c = 0xaaaaaaaa;
    uStack_38 = 0xaaaaaaaa;
    uStack_40 = 0xaaaaaaaa;
    puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
    local_80 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    uStack_48 = 0xaaaaaaaa;
    local_44 = 0xaaaaaaaa;
    puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
    local_90 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
    local_d0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
    local_c0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
    local_b0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
    local_a0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
    local_e0 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00856d88(&local_e0,param_1,param_2);
    if ((uStack_38 & 1) == 0) {
      uVar6 = param_2[4];
      uVar5 = param_2[7];
      uVar4 = param_2[6];
      uVar8 = param_2[1];
      uVar7 = *param_2;
      uVar10 = param_2[3];
      uVar9 = param_2[2];
      *(undefined8 *)(param_1 + 0x1c8) = param_2[5];
      *(undefined8 *)(param_1 + 0x1c0) = uVar6;
      *(undefined8 *)(param_1 + 0x1d8) = uVar5;
      *(undefined8 *)(param_1 + 0x1d0) = uVar4;
      *(undefined8 *)(param_1 + 0x1a8) = uVar8;
      *(undefined8 *)(param_1 + 0x1a0) = uVar7;
      *(undefined8 *)(param_1 + 0x1b8) = uVar10;
      *(undefined8 *)(param_1 + 0x1b0) = uVar9;
      uVar6 = param_2[0xc];
      uVar5 = param_2[0xf];
      uVar4 = param_2[0xe];
      uVar8 = param_2[9];
      uVar7 = param_2[8];
      uVar10 = param_2[0xb];
      uVar9 = param_2[10];
      *(undefined8 *)(param_1 + 0x208) = param_2[0xd];
      *(undefined8 *)(param_1 + 0x200) = uVar6;
      *(undefined8 *)(param_1 + 0x218) = uVar5;
      *(undefined8 *)(param_1 + 0x210) = uVar4;
      *(undefined8 *)(param_1 + 0x1e8) = uVar8;
      *(undefined8 *)(param_1 + 0x1e0) = uVar7;
      *(undefined8 *)(param_1 + 0x1f8) = uVar10;
      *(undefined8 *)(param_1 + 0x1f0) = uVar9;
      uVar7 = param_2[0x11];
      uVar6 = param_2[0x10];
      uVar5 = param_2[0x13];
      uVar4 = param_2[0x12];
      *(undefined8 *)(param_1 + 0x23d) = *(undefined8 *)((long)param_2 + 0x9d);
      *(undefined8 *)(param_1 + 0x228) = uVar7;
      *(undefined8 *)(param_1 + 0x220) = uVar6;
      *(undefined8 *)(param_1 + 0x238) = uVar5;
      *(undefined8 *)(param_1 + 0x230) = uVar4;
    }
    else {
      *(undefined1 **)(param_1 + 0x228) = puStack_58;
      *(undefined1 **)(param_1 + 0x220) = local_60;
      *(ulong *)(param_1 + 0x238) = CONCAT44(local_44,uStack_48);
      *(undefined1 **)(param_1 + 0x230) = puStack_50;
      *(undefined1 **)(param_1 + 0x208) = puStack_78;
      *(undefined1 **)(param_1 + 0x200) = local_80;
      *(undefined1 **)(param_1 + 0x218) = puStack_68;
      *(undefined1 **)(param_1 + 0x210) = puStack_70;
      *(undefined1 **)(param_1 + 0x1e8) = puStack_98;
      *(undefined1 **)(param_1 + 0x1e0) = local_a0;
      *(undefined1 **)(param_1 + 0x1f8) = puStack_88;
      *(undefined1 **)(param_1 + 0x1f0) = local_90;
      *(ulong *)(param_1 + 0x23d) =
           CONCAT17((undefined1)uStack_3c,CONCAT43(uStack_40,local_44._1_3_));
      *(undefined1 **)(param_1 + 0x1a8) = puStack_d8;
      *(undefined8 *)(param_1 + 0x1a0) = local_e0;
      *(undefined1 **)(param_1 + 0x1b8) = puStack_c8;
      *(undefined1 **)(param_1 + 0x1b0) = local_d0;
      *(undefined1 **)(param_1 + 0x1c8) = puStack_b8;
      *(undefined1 **)(param_1 + 0x1c0) = local_c0;
      *(undefined1 **)(param_1 + 0x1d8) = puStack_a8;
      *(undefined1 **)(param_1 + 0x1d0) = local_b0;
      uVar3 = FUN_00417e08();
      if ((uVar3 & 1) == 0) {
        local_f8 = "../../modules/rtp_rtcp/source/rtcp_sender.cc";
        local_f0 = 0x19c9;
        local_e8 = &uStack_f9;
        uVar1 = *(undefined4 *)(param_1 + 0x2c);
        FUN_007cc70c(local_118,param_1 + 0x1a0);
        FUN_00623bb0(&DAT_0021f945,local_f8,local_f0 & 0xffffffff,
                     "Emitting TargetBitrate XR for SSRC ",uVar1,
                     " with new layers enabled/disabled: ",local_118);
        if (cStack_101 < '\0') {
          operator_delete(local_118[0]);
        }
      }
      uVar4 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
      if (*(char *)(param_1 + 0xa8) == '\x01') {
        *(undefined8 *)(param_1 + 0xa0) = uVar4;
      }
      else {
        if ((undefined8 *)(param_1 + 0xa0) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        *(undefined8 *)(param_1 + 0xa0) = uVar4;
        *(undefined1 *)(param_1 + 0xa8) = 1;
      }
      local_f8 = (char *)0x0;
      (**(code **)(param_1 + 0x68))(param_1 + 0x50,&local_f8);
    }
    *(undefined1 *)(param_1 + 0x248) = 1;
    local_f8 = (char *)CONCAT35(local_f8._5_3_,0x1002c0000);
    FUN_00857b1c(0,param_1 + 0x278,param_1 + 0x278,&local_f8);
  }
  iVar2 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x70));
  return iVar2;
}


// ===== 00856d88  FUN_00856d88 =====

void FUN_00856d88(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar7 = 0;
  *(undefined1 **)((long)param_1 + 0xa4) = &DAT_aaaaaaaaaaaaaaaa;
  *(undefined1 **)((long)param_1 + 0x9c) = &DAT_aaaaaaaaaaaaaaaa;
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
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  do {
    lVar8 = 0;
    do {
      if ((*(byte *)(param_1 + 0x15) & 1) == 0) {
        uVar1 = FUN_007cbfa0(param_3,lVar7,lVar8);
        uVar2 = FUN_007cbfa0(param_2 + 0x1a0,lVar7,lVar8);
        if (((uVar1 ^ uVar2) & 1) == 0) {
          iVar3 = FUN_007cc028(param_3,lVar7,lVar8);
          iVar4 = FUN_007cc028(param_2 + 0x1a0,lVar7,lVar8);
          if ((iVar3 == 0) != (iVar4 != 0)) goto LAB_00856ec8;
        }
        if (*(char *)(param_1 + 0x15) == '\x01') {
          uVar6 = param_3[0x10];
          uVar10 = param_3[0x13];
          uVar9 = param_3[0x12];
          uVar5 = *(undefined8 *)((long)param_3 + 0x9d);
          param_1[0x11] = param_3[0x11];
          param_1[0x10] = uVar6;
          param_1[0x13] = uVar10;
          param_1[0x12] = uVar9;
          uVar9 = param_3[9];
          uVar6 = param_3[8];
          uVar11 = param_3[0xb];
          uVar10 = param_3[10];
          *(undefined8 *)((long)param_1 + 0x9d) = uVar5;
        }
        else {
          if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          uVar10 = param_3[0x11];
          uVar9 = param_3[0x10];
          uVar5 = param_3[0x13];
          uVar11 = param_3[0x12];
          uVar6 = param_3[0x14];
          *(undefined1 *)(param_1 + 0x15) = 1;
          param_1[0x14] = uVar6;
          param_1[0x11] = uVar10;
          param_1[0x10] = uVar9;
          param_1[0x13] = uVar5;
          param_1[0x12] = uVar11;
          uVar9 = param_3[9];
          uVar6 = param_3[8];
          uVar11 = param_3[0xb];
          uVar10 = param_3[10];
        }
        param_1[9] = uVar9;
        param_1[8] = uVar6;
        param_1[0xb] = uVar11;
        param_1[10] = uVar10;
        uVar10 = param_3[0xc];
        uVar9 = param_3[0xf];
        uVar6 = param_3[0xe];
        param_1[0xd] = param_3[0xd];
        param_1[0xc] = uVar10;
        param_1[0xf] = uVar9;
        param_1[0xe] = uVar6;
        uVar10 = *param_3;
        uVar9 = param_3[3];
        uVar6 = param_3[2];
        param_1[1] = param_3[1];
        *param_1 = uVar10;
        param_1[3] = uVar9;
        param_1[2] = uVar6;
        uVar10 = param_3[4];
        uVar9 = param_3[7];
        uVar6 = param_3[6];
        param_1[5] = param_3[5];
        param_1[4] = uVar10;
        param_1[7] = uVar9;
        param_1[6] = uVar6;
      }
LAB_00856ec8:
      iVar3 = FUN_007cc028(param_2 + 0x1a0,lVar7,lVar8);
      if ((iVar3 != 0) && (iVar3 = FUN_007cc028(param_3,lVar7,lVar8), iVar3 == 0)) {
        if ((*(byte *)(param_1 + 0x15) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                    );
        }
        FUN_007cbed8(param_1,lVar7,lVar8,0);
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 != 4);
    lVar7 = lVar7 + 1;
    if (lVar7 == 5) {
      return;
    }
  } while( true );
}


// ===== 00856f54  FUN_00856f54 =====

void * FUN_00856f54(long param_1,long *param_2)

{
  long *plVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  uint uVar6;
  void *pvVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long local_660;
  undefined1 *local_658;
  code *local_650;
  ulong local_648;
  long local_640;
  undefined1 auStack_638 [1504];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  iVar5 = pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x70));
  if (*(int *)(param_1 + 0x38) == 0) {
    uVar8 = FUN_004022fc(iVar5);
    if ((uVar8 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../modules/rtp_rtcp/source/rtcp_sender.cc",0x1b1a,
                   "Can\'t send RTCP if it is disabled.");
    }
    if (*(long *)(lVar3 + 0x28) == local_58) {
      uVar6 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x70));
      return (void *)(ulong)uVar6;
    }
  }
  else {
    uVar8 = *(ulong *)(param_1 + 0x168);
    uVar2 = *(undefined4 *)(param_1 + 0x2c);
    pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x70));
    local_660 = param_1;
    pvVar7 = memset(auStack_638,0xaa,0x5e0);
    local_650 = FUN_00857c18;
    local_640 = 0;
    local_648 = uVar8;
    if (0x5dc < uVar8) {
      local_658 = (undefined1 *)&local_660;
                    /* WARNING: Subroutine does not return */
      FUN_0061fd88("../../modules/rtp_rtcp/source/rtcp_sender.cc",0x4e,"max_packet_size <= 1500",
                   &DAT_001fbca2,uVar8,0x5dc);
    }
    plVar9 = (long *)*param_2;
    plVar1 = (long *)param_2[1];
    local_658 = (undefined1 *)&local_660;
    plVar4 = &local_660;
    if (plVar9 != plVar1) {
      do {
        local_658 = (undefined1 *)plVar4;
        *(undefined4 *)(*plVar9 + 8) = uVar2;
        plVar10 = plVar9 + 1;
        pvVar7 = (void *)(**(code **)(*(long *)*plVar9 + 0x18))
                                   ((long *)*plVar9,auStack_638,&local_640,local_648,local_658,
                                    local_650);
        plVar9 = plVar10;
        plVar4 = (long *)local_658;
      } while (plVar10 != plVar1);
      if (local_640 != 0) {
        pvVar7 = (void *)(*local_650)(local_658,auStack_638);
      }
    }
    if (*(long *)(lVar3 + 0x28) == local_58) {
      return pvVar7;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008570ec  FUN_008570ec =====

void FUN_008570ec(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00857104  FUN_00857104 =====

void FUN_00857104(undefined8 *param_1)

{
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
  operator_delete((void *)*param_1);
  return;
}


// ===== 00857128  FUN_00857128 =====

void FUN_00857128(long *param_1,undefined8 param_2,undefined8 param_3)

{
  void *pvVar1;
  long *plVar2;
  long lVar3;
  undefined1 auStack_50 [16];
  
  lVar3 = *param_1;
  plVar2 = *(long **)(lVar3 + 0x40);
  FUN_005d34d8(auStack_50);
  (**(code **)(*plVar2 + 8))(plVar2,param_2,param_3,auStack_50);
  FUN_005d3508(auStack_50);
  *(undefined4 *)param_1[1] = 0;
  plVar2 = *(long **)(lVar3 + 0x20);
  pvVar1 = operator_new(0x28);
  FUN_00889a80(pvVar1,param_2,param_3);
  (**(code **)(*plVar2 + 0x28))(plVar2,pvVar1);
  return;
}


// ===== 008571d8  FUN_008571d8 =====

undefined4 * FUN_008571d8(long *param_1,undefined4 *param_2,undefined1 *param_3)

{
  ulong uVar1;
  undefined1 uVar2;
  void *pvVar3;
  void *pvVar4;
  size_t __n;
  ulong uVar5;
  ulong uVar6;
  void *__dest;
  undefined4 *puVar7;
  
  puVar7 = (undefined4 *)(param_1[1] - *param_1);
  uVar1 = ((long)puVar7 >> 3) + 1;
  if (uVar1 >> 0x3d != 0) {
    FUN_008572e0();
LAB_008572dc:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  uVar5 = param_1[2] - *param_1;
  uVar6 = (long)uVar5 >> 2;
  if (uVar6 <= uVar1) {
    uVar6 = uVar1;
  }
  if (0x7ffffffffffffff7 < uVar5) {
    uVar6 = 0x1fffffffffffffff;
  }
  if (uVar6 == 0) {
    pvVar3 = (void *)0x0;
  }
  else {
    if (uVar6 >> 0x3d != 0) goto LAB_008572dc;
    pvVar3 = operator_new(uVar6 << 3);
    puVar7 = (undefined4 *)((long)pvVar3 + (long)puVar7);
  }
  if (puVar7 != (undefined4 *)0x0) {
    uVar2 = *param_3;
    *puVar7 = *param_2;
    *(undefined1 *)(puVar7 + 1) = uVar2;
    __n = param_1[1] - *param_1;
    __dest = (void *)((long)puVar7 - __n);
    memcpy(__dest,(void *)*param_1,__n);
    pvVar4 = (void *)*param_1;
    *param_1 = (long)__dest;
    param_1[1] = (long)(puVar7 + 2);
    param_1[2] = (long)((long)pvVar3 + uVar6 * 8);
    if (pvVar4 != (void *)0x0) {
      operator_delete(pvVar4);
    }
    return puVar7 + 2;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 008572e0  FUN_008572e0 =====

void FUN_008572e0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 008572f8  FUN_008572f8 =====

long FUN_008572f8(long *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  void *pvVar1;
  void *pvVar2;
  size_t __n;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  void *__dest;
  long lVar6;
  
  lVar6 = param_1[1] - *param_1;
  uVar3 = (lVar6 >> 3) * -0x5555555555555555 + 1;
  if (0xaaaaaaaaaaaaaaa < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_00857430();
  }
  lVar4 = param_1[2] - *param_1 >> 3;
  uVar5 = lVar4 * 0x5555555555555556;
  if (uVar5 < uVar3 || uVar5 - uVar3 == 0) {
    uVar5 = uVar3;
  }
  if (0x555555555555554 < (ulong)(lVar4 * -0x5555555555555555)) {
    uVar5 = 0xaaaaaaaaaaaaaaa;
  }
  if (uVar5 == 0) {
    pvVar1 = (void *)0x0;
  }
  else {
    if (0xaaaaaaaaaaaaaaa < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    pvVar1 = operator_new(uVar5 * 0x18);
    lVar6 = (long)pvVar1 + lVar6;
  }
  if (lVar6 != 0) {
    FUN_00863614(lVar6,*param_2,*param_3,*param_4);
    __n = param_1[1] - *param_1;
    __dest = (void *)(lVar6 - __n);
    memcpy(__dest,(void *)*param_1,__n);
    pvVar2 = (void *)*param_1;
    *param_1 = (long)__dest;
    param_1[1] = lVar6 + 0x18;
    param_1[2] = (long)((long)pvVar1 + uVar5 * 0x18);
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
    return lVar6 + 0x18;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00857430  FUN_00857430 =====

void FUN_00857430(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00857448  FUN_00857448 =====

void FUN_00857448(long *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  void *pvVar2;
  long *plVar3;
  long lVar4;
  undefined1 auStack_50 [16];
  
  lVar4 = *param_1;
  plVar3 = *(long **)(lVar4 + 0x40);
  FUN_005d34d8(auStack_50);
  uVar1 = (**(code **)(*plVar3 + 8))(plVar3,param_2,param_3,auStack_50);
  FUN_005d3508(auStack_50);
  if ((uVar1 & 1) != 0) {
    *(undefined4 *)param_1[1] = 0;
    plVar3 = *(long **)(lVar4 + 0x20);
    pvVar2 = operator_new(0x28);
    FUN_00889a80(pvVar2,param_2,param_3);
    (**(code **)(*plVar3 + 0x28))(plVar3,pvVar2);
  }
  return;
}


// ===== 00857500  FUN_00857500 =====

void FUN_00857500(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_00857500(param_1,*param_2);
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


// ===== 00857574  FUN_00857574 =====

void FUN_00857574(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_00857574(param_1,*param_2);
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


// ===== 008575e8  FUN_008575e8 =====

void FUN_008575e8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_008575e8(param_1,*param_2);
      if (param_2 == (undefined8 *)0xffffffffffffffe0) {
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


// ===== 0085765c  FUN_0085765c =====

void FUN_0085765c(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong __n;
  ulong uVar2;
  undefined8 ***pppuVar3;
  undefined8 **__src;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *__dest;
  undefined8 *local_70;
  ulong uStack_68;
  ulong local_60;
  undefined8 **local_58;
  ulong uStack_50;
  byte bStack_41;
  
  local_70 = (undefined8 *)0x0;
  uStack_68 = 0;
  local_60 = 0;
  FUN_006224f8(&local_58,*param_2);
  pppuVar3 = (undefined8 ***)local_58;
  if (-1 < (char)bStack_41) {
    uStack_50 = (ulong)bStack_41;
    pppuVar3 = &local_58;
  }
  thunk_FUN_00547cac(&local_70,pppuVar3,uStack_50);
  if ((char)bStack_41 < '\0') {
    operator_delete(local_58);
  }
  uVar5 = local_60;
  puVar4 = local_70;
  __n = uStack_68;
  __src = (undefined8 **)local_70;
  if (-1 < (long)local_60) {
    __n = local_60 >> 0x38;
    __src = &local_70;
  }
  if ((__src == (undefined8 **)0x0) && (__n != 0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/string:1081: libc++ Hardening assertion __n == 0 || __s != nullptr failed: basic_string(const char*, n) detected nullptr\n"
              );
  }
  if (0x7ffffffffffffff6 < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  if (__n < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)__n;
    __dest = param_1;
  }
  else {
    uVar1 = (__n & 0x7ffffffffffffff8) + 8;
    uVar2 = 0x19;
    if (uVar1 != 0x18) {
      uVar2 = uVar1;
    }
    __dest = (undefined8 *)operator_new(uVar2);
    *param_1 = __dest;
    param_1[1] = __n;
    param_1[2] = uVar2 | 0x8000000000000000;
  }
  if ((undefined8 *)((long)__dest + __n) < __dest) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
              );
  }
  if ((__dest <= __src) && (__src < (undefined8 *)((long)__dest + __n))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
              );
  }
  memmove(__dest,__src,__n);
  *(undefined1 *)((long)__dest + __n) = 0;
  if ((long)uVar5 < 0) {
    operator_delete(puVar4);
  }
  return;
}


// ===== 008577dc  FUN_008577dc =====

void FUN_008577dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
    return;
  }
  FUN_005478d8(param_1,*param_2,param_2[1]);
  return;
}


// ===== 00857808  FUN_00857808 =====

undefined1  [16]
FUN_00857808(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  uint *puVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  
  puVar6 = (uint *)*param_5;
  plVar4 = param_2 + 1;
  plVar7 = plVar4;
  if ((long *)*plVar4 != (long *)0x0) {
    uVar1 = *puVar6;
    plVar2 = (long *)*plVar4;
    do {
      while (plVar3 = plVar2, plVar4 = plVar3, uVar1 < *(uint *)(plVar3 + 4)) {
        plVar2 = (long *)*plVar3;
        plVar7 = plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_00857870;
      }
      if (uVar1 == *(uint *)(plVar3 + 4)) {
        uVar5 = 0;
        goto LAB_008578e0;
      }
      plVar2 = (long *)plVar3[1];
    } while ((long *)plVar3[1] != (long *)0x0);
    plVar7 = plVar3 + 1;
  }
LAB_00857870:
  plVar3 = (long *)operator_new(0x38);
  if ((plVar3 == (long *)0x0) || (*plVar3 = 0, plVar3 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  uVar1 = *puVar6;
  plVar3[5] = 0;
  plVar3[6] = 0;
  *plVar3 = 0;
  plVar3[1] = 0;
  *(uint *)(plVar3 + 4) = uVar1;
  plVar3[2] = (long)plVar4;
  *plVar7 = (long)plVar3;
  plVar4 = plVar3;
  if (*(long *)*param_2 != 0) {
    *param_2 = *(long *)*param_2;
    plVar4 = (long *)*plVar7;
  }
  FUN_005d5b94(param_2[1],plVar4);
  uVar5 = 1;
  param_2[2] = param_2[2] + 1;
LAB_008578e0:
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = plVar3;
  return auVar8;
}


// ===== 00857910  FUN_00857910 =====

undefined1  [16]
FUN_00857910(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  uint *puVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  
  puVar6 = (uint *)*param_5;
  plVar4 = param_2 + 1;
  plVar7 = plVar4;
  if ((long *)*plVar4 != (long *)0x0) {
    uVar1 = *puVar6;
    plVar2 = (long *)*plVar4;
    do {
      while (plVar3 = plVar2, plVar4 = plVar3, uVar1 < *(uint *)(plVar3 + 4)) {
        plVar2 = (long *)*plVar3;
        plVar7 = plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_00857978;
      }
      if (uVar1 == *(uint *)(plVar3 + 4)) {
        uVar5 = 0;
        goto LAB_008579e8;
      }
      plVar2 = (long *)plVar3[1];
    } while ((long *)plVar3[1] != (long *)0x0);
    plVar7 = plVar3 + 1;
  }
LAB_00857978:
  plVar3 = (long *)operator_new(0x38);
  if ((plVar3 == (long *)0x0) || (*plVar3 = 0, plVar3 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  uVar1 = *puVar6;
  plVar3[5] = 0;
  plVar3[6] = 0;
  *plVar3 = 0;
  plVar3[1] = 0;
  *(uint *)(plVar3 + 4) = uVar1;
  plVar3[2] = (long)plVar4;
  *plVar7 = (long)plVar3;
  plVar4 = plVar3;
  if (*(long *)*param_2 != 0) {
    *param_2 = *(long *)*param_2;
    plVar4 = (long *)*plVar7;
  }
  FUN_005d5b94(param_2[1],plVar4);
  uVar5 = 1;
  param_2[2] = param_2[2] + 1;
LAB_008579e8:
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = plVar3;
  return auVar8;
}


// ===== 00857a18  FUN_00857a18 =====

undefined1  [16]
FUN_00857a18(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5)

{
  char cVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  char *pcVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  
  pcVar6 = (char *)*param_5;
  plVar4 = param_2 + 1;
  plVar7 = plVar4;
  if ((long *)*plVar4 != (long *)0x0) {
    cVar1 = *pcVar6;
    plVar2 = (long *)*plVar4;
    do {
      while (plVar3 = plVar2, plVar4 = plVar3, cVar1 < *(char *)((long)plVar3 + 0x1c)) {
        plVar2 = (long *)*plVar3;
        plVar7 = plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_00857a88;
      }
      if (cVar1 == *(char *)((long)plVar3 + 0x1c)) {
        uVar5 = 0;
        goto LAB_00857aec;
      }
      plVar2 = (long *)plVar3[1];
    } while ((long *)plVar3[1] != (long *)0x0);
    plVar7 = plVar3 + 1;
  }
LAB_00857a88:
  plVar3 = (long *)operator_new(0x28);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  cVar1 = *pcVar6;
  *(undefined4 *)(plVar3 + 4) = 0;
  *plVar3 = 0;
  plVar3[1] = 0;
  *(char *)((long)plVar3 + 0x1c) = cVar1;
  plVar3[2] = (long)plVar4;
  *plVar7 = (long)plVar3;
  plVar4 = plVar3;
  if (*(long *)*param_2 != 0) {
    *param_2 = *(long *)*param_2;
    plVar4 = (long *)*plVar7;
  }
  FUN_005d5b94(param_2[1],plVar4);
  uVar5 = 1;
  param_2[2] = param_2[2] + 1;
LAB_00857aec:
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = plVar3;
  return auVar8;
}


// ===== 00857b1c  FUN_00857b1c =====

undefined1  [16] FUN_00857b1c(undefined8 param_1,long *param_2,undefined8 param_3,uint *param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  
  plVar3 = param_2 + 1;
  plVar5 = plVar3;
  if ((long *)*plVar3 != (long *)0x0) {
    plVar1 = (long *)*plVar3;
    do {
      while (plVar2 = plVar1, plVar3 = plVar2, *param_4 < *(uint *)((long)plVar2 + 0x1c)) {
        plVar1 = (long *)*plVar2;
        plVar5 = plVar2;
        if ((long *)*plVar2 == (long *)0x0) goto LAB_00857b88;
      }
      if (*param_4 <= *(uint *)((long)plVar2 + 0x1c)) {
        uVar4 = 0;
        goto LAB_00857be8;
      }
      plVar1 = (long *)plVar2[1];
    } while ((long *)plVar2[1] != (long *)0x0);
    plVar5 = plVar2 + 1;
  }
LAB_00857b88:
  plVar2 = (long *)operator_new(0x28);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  uVar4 = *(undefined8 *)param_4;
  *plVar2 = 0;
  plVar2[1] = 0;
  plVar2[2] = (long)plVar3;
  *(undefined8 *)((long)plVar2 + 0x1c) = uVar4;
  *plVar5 = (long)plVar2;
  plVar3 = plVar2;
  if (*(long *)*param_2 != 0) {
    *param_2 = *(long *)*param_2;
    plVar3 = (long *)*plVar5;
  }
  FUN_005d5b94(param_2[1],plVar3);
  uVar4 = 1;
  param_2[2] = param_2[2] + 1;
LAB_00857be8:
  auVar6._8_8_ = uVar4;
  auVar6._0_8_ = plVar2;
  return auVar6;
}


// ===== 00857c18  FUN_00857c18 =====

void FUN_00857c18(long *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  void *pvVar2;
  long *plVar3;
  long lVar4;
  undefined1 auStack_40 [16];
  
  lVar4 = *param_1;
  plVar3 = *(long **)(lVar4 + 0x40);
  FUN_005d34d8(auStack_40);
  uVar1 = (**(code **)(*plVar3 + 8))(plVar3,param_2,param_3,auStack_40);
  FUN_005d3508(auStack_40);
  if ((uVar1 & 1) != 0) {
    plVar3 = *(long **)(lVar4 + 0x20);
    pvVar2 = operator_new(0x28);
    FUN_00889a80(pvVar2,param_2,param_3);
    (**(code **)(*plVar3 + 0x28))(plVar3,pvVar2);
  }
  return;
}


// ===== 00857cbc  FUN_00857cbc =====

void FUN_00857cbc(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_00d3a760;
  param_1[1] = 0;
  *(undefined1 *)((long)param_1 + 0x14) = 0;
  return;
}


// ===== 00857cd8  FUN_00857cd8 =====

void FUN_00857cd8(void)

{
  return;
}


// ===== 00857ce0  FUN_00857ce0 =====

void FUN_00857ce0(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00857cec  FUN_00857cec =====

undefined8 FUN_00857cec(void)

{
  return 0x14;
}


// ===== 00857cf8  FUN_00857cf8 =====

bool FUN_00857cf8(long *param_1,long param_2,long *param_3,ulong param_4,undefined8 param_5,
                 undefined8 param_6)

{
  undefined1 *puVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  do {
    lVar8 = *param_3;
    lVar4 = (**(code **)(*param_1 + 0x10))(param_1);
    if ((ulong)(lVar4 + lVar8) <= param_4) {
      (**(code **)(*param_1 + 0x10))(param_1);
      uVar6 = FUN_007cd5b4(param_1);
      FUN_007cd5e0(0xf,0xce,uVar6,param_2,param_3);
      FUN_007cef34(param_1,param_2 + *param_3);
      uVar6 = DAT_001f4f30;
      lVar7 = *param_3;
      *param_3 = lVar7 + 8;
      *(int *)(param_2 + lVar7 + 8) = (int)uVar6;
      lVar7 = *param_3;
      *param_3 = lVar7 + 4;
      *(ushort *)(param_2 + lVar7 + 4) =
           *(ushort *)(param_1 + 2) >> 8 | (ushort)((*(ushort *)(param_1 + 2) & 0xff00ff) << 8);
      lVar7 = *param_3;
      *param_3 = lVar7 + 2;
      puVar1 = (undefined1 *)(param_2 + lVar7 + 2);
      bVar2 = *(byte *)((long)param_1 + 0x14);
      uVar3 = (uint)*(ushort *)((long)param_1 + 0x12) - (uint)*(ushort *)(param_1 + 2);
      *puVar1 = (char)(uVar3 >> 7);
      puVar1[1] = bVar2 | (char)uVar3 * '\x02';
      *param_3 = *param_3 + 2;
      break;
    }
    uVar5 = FUN_007cd570(param_1,param_2,param_3,param_5,param_6);
  } while ((uVar5 & 1) != 0);
  return (ulong)(lVar4 + lVar8) <= param_4;
}


// ===== 00857e40  FUN_00857e40 =====

bool FUN_00857e40(long param_1,long param_2)

{
  undefined1 uVar1;
  byte bVar2;
  uint uVar3;
  ushort uVar4;
  bool bVar5;
  long lVar6;
  
  if (0xf < *(uint *)(param_2 + 4)) {
    lVar6 = *(long *)(param_2 + 8);
    uVar3 = (*(uint *)(lVar6 + 8) & 0xff00ff00) >> 8 | (*(uint *)(lVar6 + 8) & 0xff00ff) << 8;
    bVar5 = (uVar3 >> 0x10 | uVar3 << 0x10) == 0x4c4e5446;
    if (bVar5) {
      FUN_007cef14(param_1,lVar6);
      uVar4 = *(ushort *)(lVar6 + 0xc) >> 8 | (ushort)((*(ushort *)(lVar6 + 0xc) & 0xff00ff) << 8);
      *(ushort *)(param_1 + 0x10) = uVar4;
      uVar1 = *(undefined1 *)(lVar6 + 0xe);
      bVar2 = *(byte *)(lVar6 + 0xf);
      *(byte *)(param_1 + 0x14) = bVar2 & 1;
      *(ushort *)(param_1 + 0x12) = uVar4 + (CONCAT11(uVar1,bVar2) >> 1);
    }
    return bVar5;
  }
  return false;
}


// ===== 00857edc  FUN_00857edc =====

uint FUN_00857edc(long param_1,int param_2,int param_3,byte param_4)

{
  if (((uint)(param_3 - param_2) >> 0xf & 1) == 0) {
    *(short *)(param_1 + 0x12) = (short)param_3;
    *(short *)(param_1 + 0x10) = (short)param_2;
    *(byte *)(param_1 + 0x14) = param_4 & 1;
  }
  return (uint)(int)(short)(param_3 - param_2) >> 0xf & 1 ^ 1;
}


// ===== 00857f08  FUN_00857f08 =====

void FUN_00857f08(undefined2 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


// ===== 00857f18  FUN_00857f18 =====

void FUN_00857f18(ushort *param_1,ushort param_2)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  
  uVar1 = (uint)param_2;
  if (*(int *)(param_1 + 2) != 0) {
    uVar2 = *param_1;
    uVar3 = uVar1 - uVar2;
    if (uVar3 == 0x8000) {
      if (uVar1 <= uVar2) goto LAB_00857f60;
    }
    else if ((uVar1 == uVar2) || ((uVar3 >> 0xf & 1) != 0)) goto LAB_00857f60;
  }
  *param_1 = param_2;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
LAB_00857f60:
  *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + 1;
  return;
}


// ===== 00857f6c  FUN_00857f6c =====

void FUN_00857f6c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d3a790;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}


// ===== 00857f90  FUN_00857f90 =====

void FUN_00857f90(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  pvVar1 = (void *)param_1[2];
  *param_1 = &PTR_FUN_00d3a790;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  pvVar2 = (void *)param_1[3];
  uVar4 = (ulong)((long)pvVar2 + (-8 - ((long)pvVar2 << 0x3d))) >> 3;
  uVar3 = (ulong)(((long)pvVar1 - (long)pvVar2 << 0x3d) - ((long)pvVar1 - (long)pvVar2)) >> 3;
  if (uVar4 <= uVar3) {
    uVar3 = uVar4;
  }
  if ((1 < uVar3) && ((((int)pvVar1 - (int)pvVar2 | -(int)pvVar2) & 7U) == 0)) {
    uVar3 = uVar3 & 0x1ffffffffffffffe;
    pvVar2 = (void *)((long)pvVar2 + uVar3 * -8);
    do {
      uVar3 = uVar3 - 2;
    } while (uVar3 != 0);
  }
  do {
    if (pvVar2 == pvVar1) {
      param_1[3] = pvVar1;
      operator_delete(pvVar1);
      return;
    }
    pvVar2 = (void *)((long)pvVar2 + -8);
  } while (pvVar2 != (void *)0x0);
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00858044  FUN_00858044 =====

void FUN_00858044(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  pvVar1 = (void *)param_1[2];
  *param_1 = &PTR_FUN_00d3a790;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[3];
    uVar4 = (ulong)((long)pvVar2 + (-8 - ((long)pvVar2 << 0x3d))) >> 3;
    uVar3 = (ulong)(((long)pvVar1 - (long)pvVar2 << 0x3d) - ((long)pvVar1 - (long)pvVar2)) >> 3;
    if (uVar4 <= uVar3) {
      uVar3 = uVar4;
    }
    if ((1 < uVar3) && ((((int)pvVar1 - (int)pvVar2 | -(int)pvVar2) & 7U) == 0)) {
      uVar3 = uVar3 & 0x1ffffffffffffffe;
      pvVar2 = (void *)((long)pvVar2 + uVar3 * -8);
      do {
        uVar3 = uVar3 - 2;
      } while (uVar3 != 0);
    }
    while (pvVar2 != pvVar1) {
      pvVar2 = (void *)((long)pvVar2 + -8);
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    param_1[3] = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 0085810c  FUN_0085810c =====

undefined8 FUN_0085810c(long param_1,long param_2)

{
  uint *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  char *pcVar5;
  uint *puVar6;
  undefined1 *puVar7;
  long lVar8;
  
  if (*(uint *)(param_2 + 4) < 0x10) {
    uVar3 = FUN_004022fc();
    if ((uVar3 & 1) != 0) {
      return 0;
    }
    pcVar5 = "Packet is too small to be a valid FIR packet.";
    uVar4 = 0x1f2;
  }
  else {
    if ((*(uint *)(param_2 + 4) & 7) == 0) {
      FUN_007cef14(param_1,*(undefined8 *)(param_2 + 8));
      lVar8 = *(long *)(param_2 + 8);
      FUN_008581f4(param_1 + 0x10,(ulong)*(uint *)(param_2 + 4) - 8 >> 3);
      puVar6 = *(uint **)(param_1 + 0x10);
      puVar1 = *(uint **)(param_1 + 0x18);
      if (puVar6 != puVar1) {
        puVar7 = (undefined1 *)(lVar8 + 0xc);
        do {
          uVar2 = (*(uint *)(puVar7 + -4) & 0xff00ff00) >> 8 |
                  (*(uint *)(puVar7 + -4) & 0xff00ff) << 8;
          *puVar6 = uVar2 >> 0x10 | uVar2 << 0x10;
          *(undefined1 *)(puVar6 + 1) = *puVar7;
          puVar6 = puVar6 + 2;
          puVar7 = puVar7 + 8;
        } while (puVar6 != puVar1);
      }
      return 1;
    }
    uVar3 = FUN_004022fc();
    if ((uVar3 & 1) != 0) {
      return 0;
    }
    pcVar5 = "Invalid size for a valid FIR packet.";
    uVar4 = 0x21a;
  }
  FUN_00623bb0(&DAT_001f4e98,"../../modules/rtp_rtcp/source/rtcp_packet/fir.cc",uVar4,pcVar5);
  return 0;
}


// ===== 008581f4  FUN_008581f4 =====

void FUN_008581f4(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  void *__src;
  void *pvVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  ulong uVar5;
  ulong uVar6;
  size_t __n;
  ulong uVar7;
  void *__dest;
  
  __src = (void *)*param_1;
  puVar3 = (undefined4 *)param_1[1];
  __n = (long)puVar3 - (long)__src;
  uVar7 = (long)__n >> 3;
  uVar5 = param_2 - uVar7;
  if (param_2 < uVar7 || uVar5 == 0) {
    if (param_2 < uVar7) {
      puVar4 = (undefined4 *)((long)__src + param_2 * 8);
      uVar5 = (ulong)(((long)puVar4 - (long)puVar3 << 0x3d) - ((long)puVar4 - (long)puVar3)) >> 3;
      uVar7 = (ulong)((long)puVar3 + (-8 - ((long)puVar3 << 0x3d))) >> 3;
      if (uVar7 <= uVar5) {
        uVar5 = uVar7;
      }
      if ((1 < uVar5) && ((((int)__src - (int)puVar3 | -(int)puVar3) & 7U) == 0)) {
        uVar5 = uVar5 & 0x1ffffffffffffffe;
        puVar3 = puVar3 + uVar5 * -2;
        do {
          uVar5 = uVar5 - 2;
        } while (uVar5 != 0);
      }
      while (puVar3 != puVar4) {
        puVar3 = puVar3 + -2;
        if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      param_1[1] = puVar4;
    }
  }
  else {
    uVar6 = param_1[2] - (long)__src;
    if ((ulong)((long)uVar6 >> 3) < param_2) {
      if (param_2 >> 0x3d == 0) {
        uVar1 = (long)uVar6 >> 2;
        if ((ulong)((long)uVar6 >> 2) <= param_2) {
          uVar1 = param_2;
        }
        if (0x7ffffffffffffff7 < uVar6) {
          uVar1 = 0x1fffffffffffffff;
        }
        if (uVar1 >> 0x3d == 0) {
          pvVar2 = operator_new(uVar1 * 8);
          if (uVar5 * 8 == 0) {
            puVar3 = (undefined4 *)((long)pvVar2 + __n);
          }
          else {
            puVar3 = (undefined4 *)((long)pvVar2 + uVar5 * 8 + __n);
            puVar4 = (undefined4 *)((long)pvVar2 + __n);
            do {
              if (puVar4 == (undefined4 *)0x0) goto LAB_008583b8;
              *puVar4 = 0;
              *(undefined1 *)(puVar4 + 1) = 0;
              puVar4 = puVar4 + 2;
            } while (puVar4 != puVar3);
          }
          __dest = (void *)((long)pvVar2 + uVar7 * -8 + __n);
          memcpy(__dest,__src,__n);
          *param_1 = __dest;
          param_1[1] = puVar3;
          param_1[2] = (void *)((long)pvVar2 + uVar1 * 8);
          if (__src == (void *)0x0) {
            return;
          }
          operator_delete(__src);
          return;
        }
      }
      else {
        FUN_008572e0();
      }
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    puVar4 = puVar3;
    if ((uVar5 & 0x1fffffffffffffff) != 0) {
      puVar4 = puVar3 + uVar5 * 2;
      do {
        if (puVar3 == (undefined4 *)0x0) {
LAB_008583b8:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        *puVar3 = 0;
        *(undefined1 *)(puVar3 + 1) = 0;
        puVar3 = puVar3 + 2;
      } while (puVar3 != puVar4);
    }
    param_1[1] = puVar4;
  }
  return;
}


// ===== 008583d4  FUN_008583d4 =====

long FUN_008583d4(long param_1)

{
  return (*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10)) + 0xc;
}


// ===== 008583e8  FUN_008583e8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_008583e8(long *param_1,long param_2,long *param_3,ulong param_4,undefined8 param_5,
                 undefined8 param_6)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auVar13 [16];
  
  while( true ) {
    lVar12 = *param_3;
    lVar5 = (**(code **)(*param_1 + 0x10))(param_1);
    if ((ulong)(lVar5 + lVar12) <= param_4) break;
    uVar6 = FUN_007cd570(param_1,param_2,param_3,param_5,param_6);
    if ((uVar6 & 1) == 0) goto LAB_0085851c;
  }
  lVar11 = *param_3;
  lVar7 = (**(code **)(*param_1 + 0x10))(param_1);
  uVar8 = FUN_007cd5b4(param_1);
  FUN_007cd5e0(4,0xce,uVar8,param_2,param_3);
  FUN_007cef34(param_1,param_2 + *param_3);
  lVar10 = *param_3 + 8;
  *param_3 = lVar10;
  puVar2 = (undefined4 *)param_1[3];
  if ((undefined4 *)param_1[2] != puVar2) {
    auVar4._8_8_ = _UNK_001f3918;
    auVar4._0_8_ = _DAT_001f3910;
    puVar9 = (undefined4 *)param_1[2];
    do {
      puVar1 = puVar9 + 2;
      uVar3 = *puVar9;
      auVar13._4_4_ = uVar3;
      auVar13._0_4_ = uVar3;
      auVar13._8_4_ = uVar3;
      auVar13._12_4_ = uVar3;
      auVar13 = NEON_ushl(auVar13,auVar4,4);
      *(uint *)(param_2 + lVar10) =
           CONCAT13(auVar13[0xc],CONCAT12(auVar13[8],CONCAT11(auVar13[4],auVar13[0])));
      *(undefined1 *)(param_2 + *param_3 + 4) = *(undefined1 *)(puVar9 + 1);
      lVar10 = *param_3;
      *(undefined2 *)(param_2 + lVar10 + 5) = 0;
      *(undefined1 *)(param_2 + lVar10 + 7) = 0;
      lVar10 = *param_3 + 8;
      *param_3 = lVar10;
      puVar9 = puVar1;
    } while (puVar1 != puVar2);
  }
  if (lVar10 != lVar7 + lVar11) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../modules/rtp_rtcp/source/rtcp_packet/fir.cc",0x70,"*index == index_end",
                 &DAT_001fb920,lVar10,lVar7 + lVar11);
  }
LAB_0085851c:
  return (ulong)(lVar5 + lVar12) <= param_4;
}


// ===== 00858564  FUN_00858564 =====

void FUN_00858564(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_00d3a7c0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  return;
}


// ===== 00858588  FUN_00858588 =====

void FUN_00858588(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  *param_1 = &PTR_FUN_00d3a7c0;
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
    pvVar1 = (void *)param_1[2];
  }
  else {
    pvVar1 = (void *)param_1[2];
  }
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[3];
    uVar4 = (ulong)((long)pvVar2 + (-4 - ((long)pvVar2 << 0x3e))) >> 2;
    uVar3 = (ulong)(((long)pvVar1 - (long)pvVar2 << 0x3e) - ((long)pvVar1 - (long)pvVar2)) >> 2;
    if (uVar4 <= uVar3) {
      uVar3 = uVar4;
    }
    if ((1 < uVar3) && ((((int)pvVar1 - (int)pvVar2 | -(int)pvVar2) & 3U) == 0)) {
      uVar3 = uVar3 & 0x3ffffffffffffffe;
      pvVar2 = (void *)((long)pvVar2 + uVar3 * -4);
      do {
        uVar3 = uVar3 - 2;
      } while (uVar3 != 0);
    }
    do {
      if (pvVar2 == pvVar1) {
        param_1[3] = pvVar1;
        operator_delete(pvVar1);
        return;
      }
      pvVar2 = (void *)((long)pvVar2 + -4);
    } while (pvVar2 != (void *)0x0);
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
  return;
}


// ===== 00858674  FUN_00858674 =====

void FUN_00858674(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  *param_1 = &PTR_FUN_00d3a7c0;
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
    pvVar1 = (void *)param_1[2];
  }
  else {
    pvVar1 = (void *)param_1[2];
  }
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[3];
    uVar4 = (ulong)((long)pvVar2 + (-4 - ((long)pvVar2 << 0x3e))) >> 2;
    uVar3 = (ulong)(((long)pvVar1 - (long)pvVar2 << 0x3e) - ((long)pvVar1 - (long)pvVar2)) >> 2;
    if (uVar4 <= uVar3) {
      uVar3 = uVar4;
    }
    if ((1 < uVar3) && ((((int)pvVar1 - (int)pvVar2 | -(int)pvVar2) & 3U) == 0)) {
      uVar3 = uVar3 & 0x3ffffffffffffffe;
      pvVar2 = (void *)((long)pvVar2 + uVar3 * -4);
      do {
        uVar3 = uVar3 - 2;
      } while (uVar3 != 0);
    }
    while (pvVar2 != pvVar1) {
      pvVar2 = (void *)((long)pvVar2 + -4);
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    param_1[3] = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 00858760  FUN_00858760 =====

undefined8 FUN_00858760(long param_1,long param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  byte bVar10;
  uint uVar11;
  uint *puVar12;
  ulong uVar13;
  
  bVar3 = *(byte *)(param_2 + 1);
  uVar13 = (ulong)bVar3;
  uVar2 = *(uint *)(param_2 + 4);
  uVar11 = (uint)(uVar13 * 4);
  if (uVar2 < uVar11) {
    uVar13 = FUN_004022fc();
    if ((uVar13 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../modules/rtp_rtcp/source/rtcp_packet/bye.cc",0x18a,
                   "Packet is too small to contain CSRCs it promise to have.");
      return 0;
    }
LAB_00858794:
    uVar5 = 0;
  }
  else {
    puVar12 = *(uint **)(param_2 + 8);
    if (uVar11 < uVar2) {
      bVar10 = (byte)puVar12[uVar13];
      if (uVar2 - uVar11 <= (uint)bVar10) {
        uVar13 = FUN_004022fc();
        if ((uVar13 & 1) == 0) {
          FUN_00623bb0(&DAT_001f4e94,"../../modules/rtp_rtcp/source/rtcp_packet/bye.cc",0x1da,
                       "Invalid reason length: ",bVar10);
          return 0;
        }
        goto LAB_00858794;
      }
    }
    else {
      bVar10 = 0;
    }
    if (bVar3 == 0) {
      lVar8 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(param_1 + 0x18);
      *(undefined4 *)(param_1 + 8) = 0;
      uVar9 = (lVar7 - (lVar7 << 0x3e)) - 4U >> 2;
      uVar6 = (ulong)((lVar8 - lVar7 << 0x3e) - (lVar8 - lVar7)) >> 2;
      if (uVar9 <= uVar6) {
        uVar6 = uVar9;
      }
      if ((1 < uVar6) && ((((int)lVar8 - (int)lVar7 | -(int)lVar7) & 3U) == 0)) {
        uVar6 = uVar6 & 0x3ffffffffffffffe;
        lVar7 = lVar7 + uVar6 * -4;
        do {
          uVar6 = uVar6 - 2;
        } while (uVar6 != 0);
      }
      while (lVar7 != lVar8) {
        lVar7 = lVar7 + -4;
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      *(long *)(param_1 + 0x18) = lVar8;
    }
    else {
      uVar4 = (*puVar12 & 0xff00ff00) >> 8 | (*puVar12 & 0xff00ff) << 8;
      *(uint *)(param_1 + 8) = uVar4 >> 0x10 | uVar4 << 0x10;
      FUN_007121a4(param_1 + 0x10,bVar3 - 1);
      if (bVar3 != 1) {
        uVar6 = 0;
        lVar8 = (long)puVar12 + 7;
        do {
          if ((ulong)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10) >> 2) <= uVar6) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                      );
          }
          puVar1 = (uint *)(lVar8 + -3);
          lVar8 = lVar8 + 4;
          uVar4 = (*puVar1 & 0xff00ff00) >> 8 | (*puVar1 & 0xff00ff) << 8;
          *(uint *)(*(long *)(param_1 + 0x10) + uVar6 * 4) = uVar4 >> 0x10 | uVar4 << 0x10;
          uVar6 = uVar6 + 1;
        } while (uVar13 - 1 != uVar6);
      }
    }
    if (uVar11 < uVar2) {
      lVar8 = (long)puVar12 + uVar13 * 4 + 1;
      if ((lVar8 == 0) && (bVar10 != 0)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/string:2845: libc++ Hardening assertion __n == 0 || __s != nullptr failed: string::assign received nullptr\n"
                  );
      }
      FUN_00547b08(param_1 + 0x28,lVar8,bVar10);
      uVar5 = 1;
    }
    else if (*(char *)(param_1 + 0x3f) < '\0') {
      uVar5 = 1;
      **(undefined1 **)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
    else {
      uVar5 = 1;
      *(undefined1 *)(param_1 + 0x28) = 0;
      *(undefined1 *)(param_1 + 0x3f) = 0;
    }
  }
  return uVar5;
}


// ===== 00858990  FUN_00858990 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00858990(long *param_1,long param_2,long *param_3,ulong param_4,undefined8 param_5,
                 undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined4 *puVar3;
  size_t __n;
  undefined4 uVar4;
  undefined1 auVar5 [16];
  undefined4 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long *__src;
  long lVar11;
  long lVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  while( true ) {
    lVar12 = *param_3;
    lVar7 = (**(code **)(*param_1 + 0x10))(param_1);
    if ((ulong)(lVar7 + lVar12) <= param_4) break;
    uVar8 = FUN_007cd570(param_1,param_2,param_3,param_5,param_6);
    if ((uVar8 & 1) == 0) goto LAB_00858b28;
  }
  lVar11 = *param_3;
  lVar9 = (**(code **)(*param_1 + 0x10))(param_1);
  lVar1 = param_1[2];
  lVar2 = param_1[3];
  uVar10 = FUN_007cd5b4(param_1);
  FUN_007cd5e0((lVar2 - lVar1 >> 2) + 1,0xcb,uVar10,param_2,param_3);
  auVar5 = _DAT_001f3910;
  uVar4 = (undefined4)param_1[1];
  auVar13._4_4_ = uVar4;
  auVar13._0_4_ = uVar4;
  auVar13._8_4_ = uVar4;
  auVar13._12_4_ = uVar4;
  auVar13 = NEON_ushl(auVar13,_DAT_001f3910,4);
  *(uint *)(param_2 + *param_3) =
       CONCAT13(auVar13[0xc],CONCAT12(auVar13[8],CONCAT11(auVar13[4],auVar13[0])));
  lVar1 = *param_3 + 4;
  *param_3 = lVar1;
  puVar6 = (undefined4 *)param_1[2];
  puVar3 = (undefined4 *)param_1[3];
  while (puVar6 != puVar3) {
    uVar4 = *puVar6;
    auVar14._4_4_ = uVar4;
    auVar14._0_4_ = uVar4;
    auVar14._8_4_ = uVar4;
    auVar14._12_4_ = uVar4;
    puVar6 = puVar6 + 1;
    auVar13 = NEON_ushl(auVar14,auVar5,4);
    *(uint *)(param_2 + lVar1) =
         CONCAT13(auVar13[0xc],CONCAT12(auVar13[8],CONCAT11(auVar13[4],auVar13[0])));
    lVar1 = *param_3 + 4;
    *param_3 = lVar1;
  }
  uVar8 = (ulong)*(char *)((long)param_1 + 0x3f);
  if ((long)uVar8 < 0) {
    uVar8 = param_1[6];
    if (uVar8 == 0) goto LAB_00858b28;
  }
  else if (*(char *)((long)param_1 + 0x3f) == '\0') goto LAB_00858b28;
  __src = param_1 + 5;
  *param_3 = lVar1 + 1;
  *(char *)(param_2 + lVar1) = (char)uVar8;
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    __src = (long *)*__src;
  }
  memcpy((void *)(param_2 + *param_3),__src,uVar8 & 0xff);
  lVar1 = *param_3 + (uVar8 & 0xff);
  __n = (lVar9 + lVar11) - lVar1;
  *param_3 = lVar1;
  if (__n != 0) {
    memset((void *)(param_2 + lVar1),0,__n);
    *param_3 = *param_3 + __n;
  }
LAB_00858b28:
  return (ulong)(lVar7 + lVar12) <= param_4;
}


// ===== 00858b4c  FUN_00858b4c =====

bool FUN_00858b4c(long param_1,long *param_2)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar3 = *param_2;
  uVar6 = param_2[1] - lVar3;
  if (uVar6 < 0x7c) {
    pvVar1 = *(void **)(param_1 + 0x10);
    if (pvVar1 != (void *)0x0) {
      pvVar2 = *(void **)(param_1 + 0x18);
      uVar5 = (ulong)((long)pvVar2 + (-4 - ((long)pvVar2 << 0x3e))) >> 2;
      uVar4 = (ulong)(((long)pvVar1 - (long)pvVar2 << 0x3e) - ((long)pvVar1 - (long)pvVar2)) >> 2;
      if (uVar5 <= uVar4) {
        uVar4 = uVar5;
      }
      if ((1 < uVar4) && ((((int)pvVar1 - (int)pvVar2 | -(int)pvVar2) & 3U) == 0)) {
        uVar4 = uVar4 & 0x3ffffffffffffffe;
        pvVar2 = (void *)((long)pvVar2 + uVar4 * -4);
        do {
          uVar4 = uVar4 - 2;
        } while (uVar4 != 0);
      }
      while (pvVar2 != pvVar1) {
        pvVar2 = (void *)((long)pvVar2 + -4);
        if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      *(void **)(param_1 + 0x18) = pvVar1;
      operator_delete(pvVar1);
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      lVar3 = *param_2;
    }
    *(long *)(param_1 + 0x10) = lVar3;
    *(long *)(param_1 + 0x18) = param_2[1];
    *(long *)(param_1 + 0x20) = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  else {
    uVar4 = FUN_004022fc();
    if ((uVar4 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../modules/rtp_rtcp/source/rtcp_packet/bye.cc",0x3d2,
                   "Too many CSRCs for Bye packet.");
    }
  }
  return uVar6 < 0x7c;
}


// ===== 00858c7c  FUN_00858c7c =====

long FUN_00858c7c(long param_1)

{
  ulong uVar1;
  
  uVar1 = (ulong)*(char *)(param_1 + 0x3f);
  if ((long)uVar1 < 0) {
    uVar1 = *(ulong *)(param_1 + 0x30);
    if (uVar1 == 0) goto LAB_00858ca8;
  }
  else if (*(char *)(param_1 + 0x3f) == '\0') {
    uVar1 = 0;
    goto LAB_00858ca8;
  }
  uVar1 = (uVar1 >> 2) + 1;
LAB_00858ca8:
  return (uVar1 + ((ulong)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10)) >> 2)) * 4 + 8;
}


// ===== 00858cbc  FUN_00858cbc =====

void FUN_00858cbc(ulong *param_1,long param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined4 local_28;
  undefined4 local_24;
  
  puVar5 = param_1 + 1;
  *param_1 = 0;
  if (puVar5 != (ulong *)0x0) {
    uVar2 = *(undefined4 *)(param_2 + 0xb4);
    *param_1 = 2;
    *(undefined4 *)(param_1 + 1) = uVar2;
    if (*(char *)(param_2 + 0xbc) == '\x01') {
      uVar2 = *(undefined4 *)(param_2 + 0xb8);
      *param_1 = 4;
      *(undefined4 *)((long)param_1 + 0xc) = uVar2;
    }
    if (*(long **)(param_2 + 0x68) != (long *)0x0) {
      local_24 = 0xaaaaaaaa;
      uVar3 = (**(code **)(**(long **)(param_2 + 0x68) + 0x18))();
      local_28 = (undefined4)uVar3;
      local_24 = CONCAT31(local_24._1_3_,(char)(uVar3 >> 0x20));
      if ((uVar3 >> 0x20 & 1) != 0) {
        if ((*param_1 & 1) == 0) {
          uVar3 = 4;
        }
        else {
          puVar5 = (ulong *)param_1[1];
          uVar3 = param_1[2];
        }
        uVar4 = *param_1 >> 1;
        if (uVar4 == uVar3) {
          FUN_0085db54(param_1,&local_28);
        }
        else {
          puVar1 = (undefined4 *)((long)puVar5 + uVar4 * 4);
          if (puVar1 == (undefined4 *)0x0) goto LAB_00858d84;
          *puVar1 = local_28;
          *param_1 = *param_1 + 2;
        }
      }
    }
    return;
  }
LAB_00858d84:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00858da8  FUN_00858da8 =====

void FUN_00858da8(long *param_1,long *param_2,char *param_3,long param_4)

{
  int *****pppppiVar1;
  ulong uVar2;
  char cVar3;
  uint uVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int ****local_48;
  ulong local_40;
  byte bStack_31;
  
  lVar6 = *param_2;
  *param_1 = lVar6;
  if (lVar6 != 0) {
    FUN_00d0f740(1,lVar6 + 8);
  }
  lVar6 = param_2[3];
  lVar8 = param_2[2];
  lVar7 = param_2[1];
  param_1[4] = param_2[4];
  param_1[3] = lVar6;
  param_1[2] = lVar8;
  param_1[1] = lVar7;
  *(char *)(param_1 + 5) = param_3[1];
  (**(code **)(*(long *)param_1[1] + 0x10))
            (&local_48,(long *)param_1[1],"WebRTC-RFC8888CongestionControlFeedback",0x27);
  if (-1 < (char)bStack_31) {
    local_40 = (ulong)bStack_31;
  }
  if (local_40 < 7) {
    bVar5 = false;
  }
  else {
    pppppiVar1 = (int *****)local_48;
    if (-1 < (char)bStack_31) {
      pppppiVar1 = &local_48;
    }
    bVar5 = *(int *)pppppiVar1 == 0x62616e45 && *(int *)((long)pppppiVar1 + 3) == 0x64656c62;
  }
  if ((char)bStack_31 < '\0') {
    operator_delete(local_48);
  }
  *(bool *)((long)param_1 + 0x29) = bVar5;
  param_1[6] = param_4;
  FUN_00858cbc(param_1 + 7,param_3);
  param_1[10] = *(long *)(param_3 + 0x28);
  param_1[0xb] = *(long *)(param_3 + 0x18);
  param_1[0xc] = *(long *)(param_3 + 0x20);
  param_1[0xd] = *(long *)(param_3 + 0x30);
  param_1[0xe] = *(long *)(param_3 + 0x38);
  uVar4 = 5000000;
  if (*param_3 == '\0') {
    uVar4 = 1000000;
  }
  uVar2 = (ulong)*(uint *)(param_3 + 0x98) * 1000;
  if ((int)*(uint *)(param_3 + 0x98) < 1) {
    uVar2 = (ulong)uVar4;
  }
  param_1[0xf] = uVar2;
  local_48 = (int ****)&DAT_aaaaaaaaaaaaaaaa;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_48);
  pthread_mutex_init((pthread_mutex_t *)(param_1 + 0x10),(pthread_mutexattr_t *)&local_48);
  pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_48);
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x1c] = (long)(param_1 + 0x1c);
  param_1[0x1d] = (long)(param_1 + 0x1c);
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  cVar3 = param_3[0xc1];
  *(undefined1 *)(param_1 + 0x23) = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(char *)(param_1 + 0x22) = cVar3;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  param_1[0x30] = 0;
  param_1[0x2f] = 0;
  param_1[0x32] = 0;
  param_1[0x31] = 0;
  param_1[0x34] = 0;
  param_1[0x33] = 0;
  param_1[0x35] = 0x7fffffffffffffff;
  param_1[0x36] = 0x7fffffffffffffff;
  param_1[0x37] = *(long *)(param_3 + 0x50);
  param_1[0x38] = *(long *)(param_3 + 0x58);
  lVar6 = *(long *)(param_3 + 0x48);
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  param_1[0x39] = lVar6;
  FUN_00857f08((long)param_1 + 0x1e4);
  param_1[0x3e] = 0;
  lVar6 = (**(code **)(*(long *)param_1[2] + 0x10))();
  param_1[0x3f] = lVar6;
  return;
}


// ===== 00858fc4  FUN_00858fc4 =====

void FUN_00858fc4(undefined8 *param_1)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  
  pvVar2 = (void *)param_1[0x32];
  if (pvVar2 == (void *)0x0) {
LAB_0085906c:
    pvVar2 = (void *)param_1[0x2f];
    if (pvVar2 == (void *)0x0) {
LAB_0085910c:
      pvVar2 = (void *)param_1[0x2c];
      if (pvVar2 == (void *)0x0) {
LAB_0085919c:
        pvVar2 = (void *)param_1[0x29];
        if (pvVar2 == (void *)0x0) {
LAB_0085921c:
          if (param_1[0x26] != 0) {
            FUN_0085d4dc(param_1 + 0x26);
            operator_delete((void *)param_1[0x26]);
          }
          pvVar2 = (void *)param_1[0x1f];
          if (pvVar2 == (void *)0x0) {
LAB_008592cc:
            if (param_1[0x1e] != 0) {
              plVar7 = (long *)param_1[0x1d];
              plVar4 = *(long **)(param_1[0x1c] + 8);
              *(long **)(*plVar7 + 8) = plVar4;
              *plVar4 = *plVar7;
              param_1[0x1e] = 0;
              while (plVar7 != param_1 + 0x1c) {
                if ((plVar7 == (long *)0xfffffffffffffff0) || (plVar7 == (long *)0x0))
                goto LAB_008592a8;
                plVar4 = (long *)plVar7[1];
                operator_delete(plVar7);
                plVar7 = plVar4;
              }
            }
            pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x10));
            if ((*(byte *)(param_1 + 7) & 1) != 0) {
              operator_delete((void *)param_1[8]);
            }
            plVar7 = (long *)*param_1;
            if ((plVar7 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar7 + 1), iVar1 == 1)
               ) {
                    /* WARNING: Could not recover jumptable at 0x00859374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*plVar7 + 8))(plVar7);
              return;
            }
            return;
          }
          pvVar3 = (void *)param_1[0x20];
          uVar6 = (ulong)((long)pvVar3 + (-0x10 - ((long)pvVar3 << 0x3c))) >> 4;
          uVar5 = (ulong)(((long)pvVar2 - (long)pvVar3 << 0x3c) - ((long)pvVar2 - (long)pvVar3)) >>
                  4;
          if (uVar6 <= uVar5) {
            uVar5 = uVar6;
          }
          if ((1 < uVar5) && ((((int)pvVar2 - (int)pvVar3 | -(int)pvVar3) & 0xfU) == 0)) {
            uVar5 = uVar5 & 0xffffffffffffffe;
            pvVar3 = (void *)((long)pvVar3 + uVar5 * -0x10);
            do {
              uVar5 = uVar5 - 2;
            } while (uVar5 != 0);
          }
          do {
            if (pvVar3 == pvVar2) {
              param_1[0x20] = pvVar2;
              operator_delete(pvVar2);
              goto LAB_008592cc;
            }
            pvVar3 = (void *)((long)pvVar3 + -0x10);
          } while (pvVar3 != (void *)0x0);
        }
        else {
          pvVar3 = (void *)param_1[0x2a];
          uVar6 = (ulong)((long)pvVar3 + (-0x20 - ((long)pvVar3 << 0x3b))) >> 5;
          uVar5 = (ulong)(((long)pvVar2 - (long)pvVar3 << 0x3b) - ((long)pvVar2 - (long)pvVar3)) >>
                  5;
          if (uVar6 <= uVar5) {
            uVar5 = uVar6;
          }
          if ((1 < uVar5) && ((((int)pvVar2 - (int)pvVar3 | -(int)pvVar3) & 0x1fU) == 0)) {
            uVar5 = uVar5 & 0x7fffffffffffffe;
            pvVar3 = (void *)((long)pvVar3 + uVar5 * -0x20);
            do {
              uVar5 = uVar5 - 2;
            } while (uVar5 != 0);
          }
          do {
            if (pvVar3 == pvVar2) {
              param_1[0x2a] = pvVar2;
              operator_delete(pvVar2);
              goto LAB_0085921c;
            }
            pvVar3 = (void *)((long)pvVar3 + -0x20);
          } while (pvVar3 != (void *)0x0);
        }
      }
      else {
        pvVar3 = (void *)param_1[0x2d];
        uVar5 = (ulong)(((long)pvVar2 - (long)pvVar3) * 0x1333333333333333) >> 3;
        uVar6 = (long)pvVar3 * -0x1333333333333333 - 8U >> 3;
        if (uVar6 <= uVar5) {
          uVar5 = uVar6;
        }
        if ((1 < uVar5) && ((((int)pvVar2 - (int)pvVar3 | -(int)pvVar3) & 7U) == 0)) {
          uVar5 = uVar5 & 0x1ffffffffffffffe;
          pvVar3 = (void *)((long)pvVar3 + uVar5 * -0x28);
          do {
            uVar5 = uVar5 - 2;
          } while (uVar5 != 0);
        }
        do {
          if (pvVar3 == pvVar2) {
            param_1[0x2d] = pvVar2;
            operator_delete(pvVar2);
            goto LAB_0085919c;
          }
          pvVar3 = (void *)((long)pvVar3 + -0x28);
        } while (pvVar3 != (void *)0x0);
      }
    }
    else {
      pvVar3 = (void *)param_1[0x30];
      uVar5 = (ulong)(((long)pvVar2 - (long)pvVar3) * 0x11c71c71c71c71c7) >> 3;
      uVar6 = (long)pvVar3 * -0x11c71c71c71c71c7 - 8U >> 3;
      if (uVar6 <= uVar5) {
        uVar5 = uVar6;
      }
      if ((1 < uVar5) && ((((int)pvVar2 - (int)pvVar3 | -(int)pvVar3) & 7U) == 0)) {
        uVar5 = uVar5 & 0x1ffffffffffffffe;
        pvVar3 = (void *)((long)pvVar3 + uVar5 * -0x48);
        do {
          uVar5 = uVar5 - 2;
        } while (uVar5 != 0);
      }
      do {
        if (pvVar3 == pvVar2) {
          param_1[0x30] = pvVar2;
          operator_delete(pvVar2);
          goto LAB_0085910c;
        }
        pvVar3 = (void *)((long)pvVar3 + -0x48);
      } while (pvVar3 != (void *)0x0);
    }
  }
  else {
    pvVar3 = (void *)param_1[0x33];
    uVar5 = (ulong)(((long)pvVar2 - (long)pvVar3) * 0x1555555555555555) >> 3;
    uVar6 = (long)pvVar3 * -0x1555555555555555 - 8U >> 3;
    if (uVar6 <= uVar5) {
      uVar5 = uVar6;
    }
    if ((1 < uVar5) && ((((int)pvVar2 - (int)pvVar3 | -(int)pvVar3) & 7U) == 0)) {
      uVar5 = uVar5 & 0x1ffffffffffffffe;
      pvVar3 = (void *)((long)pvVar3 + uVar5 * -0x18);
      do {
        uVar5 = uVar5 - 2;
      } while (uVar5 != 0);
    }
    do {
      if (pvVar3 == pvVar2) {
        param_1[0x33] = pvVar2;
        operator_delete(pvVar2);
        goto LAB_0085906c;
      }
      pvVar3 = (void *)((long)pvVar3 + -0x18);
    } while (pvVar3 != (void *)0x0);
  }
LAB_008592a8:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 0085938c  FUN_0085938c =====

void FUN_0085938c(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined1 uStack_1e8;
  undefined7 uStack_1e7;
  undefined1 uStack_1e0;
  undefined8 uStack_1df;
  undefined1 local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c0;
  undefined1 local_1b8;
  undefined1 local_188;
  undefined1 local_180;
  undefined1 local_d8;
  undefined1 local_d0;
  undefined1 local_48;
  undefined8 local_40;
  
  if (param_3 == 0) {
    uVar1 = FUN_004022fc();
    if ((uVar1 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../modules/rtp_rtcp/source/rtcp_receiver.cc",0x5ea,
                   "Incoming empty RTCP packet");
      return;
    }
  }
  else {
    memcpy(&local_210,&DAT_0021f950,0x1d0);
    local_1d0 = 0;
    local_1c8 = 0;
    local_1c0 = 0;
    local_1b8 = 0;
    local_188 = 0;
    local_180 = 0;
    local_d8 = 0;
    local_d0 = 0;
    local_48 = 0;
    local_40 = 0;
    uStack_208 = 0;
    local_210 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    uStack_1e8 = 0;
    local_1f0 = 0;
    uStack_1df = 0;
    uStack_1e7 = 0;
    uStack_1e0 = 0;
    uVar1 = FUN_00859484(param_1,param_2,param_3,&local_210);
    if ((uVar1 & 1) != 0) {
      FUN_00859b94(param_1,&local_210);
    }
    FUN_00859efc(&local_210);
  }
  return;
}


// ===== 00859484  FUN_00859484 =====

/* WARNING: Removing unreachable block (ram,0x0085998c) */
/* WARNING: Removing unreachable block (ram,0x00859970) */
/* WARNING: Removing unreachable block (ram,0x00859ab4) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_00859484(long param_1,long param_2,long param_3,uint *param_4)

{
  undefined1 *puVar1;
  char **ppcVar2;
  code *pcVar3;
  ulong uVar4;
  undefined1 *puVar5;
  long lVar6;
  long *plVar7;
  char **ppcVar8;
  char *pcVar9;
  int *piVar10;
  long lVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  ulong uVar15;
  int iVar16;
  char **ppcVar17;
  long *plVar18;
  undefined1 uStack_109;
  char *local_108;
  undefined8 local_100;
  undefined1 *local_f8;
  undefined8 local_f0;
  char **local_e8;
  char *local_e0;
  undefined8 *puStack_d8;
  uint *local_d0;
  uint *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  long local_b0;
  char local_a8;
  undefined7 uStack_a7;
  undefined1 *puStack_a0;
  undefined7 local_98;
  undefined1 uStack_91;
  undefined1 *local_90;
  undefined8 uStack_88;
  char **local_80;
  char **ppcStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x80));
  plVar18 = (long *)(param_1 + 0x40);
  iVar16 = 1;
  local_b0 = 0;
  local_b8 = 0xaa000000;
  local_d0 = (uint *)0x0;
  local_c8 = (uint *)0x0;
  local_c0 = 0;
  if (param_3 == 0) goto LAB_008598a4;
  param_3 = param_2 + param_3;
  puVar1 = PTR_DAT_00d52d00 + 0x10;
LAB_00859530:
  uVar4 = FUN_007cd9ac(&local_b8,param_2,param_3 - param_2);
  if ((uVar4 & 1) == 0) {
LAB_008598a0:
    iVar16 = 0;
    goto LAB_008598a4;
  }
  if ((byte)local_b8 < 0xcc) {
    if ((byte)local_b8 < 0xca) {
      if ((byte)local_b8 == 200) {
        uVar4 = FUN_0085aa68(param_1,&local_b8,param_4);
        puVar5 = (undefined1 *)FUN_0085ac10(&local_d0,param_4 + 1);
        *puVar5 = 1;
      }
      else {
        if ((byte)local_b8 != 0xc9) goto LAB_0085986c;
        uVar4 = FUN_0085ae8c(param_1,&local_b8,param_4);
      }
    }
    else {
      if ((byte)local_b8 == 0xca) {
        ppcStack_78 = (char **)&DAT_aaaaaaaaaaaaaaaa;
        local_80 = (char **)&DAT_aaaaaaaaaaaaaaaa;
        puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
        uStack_88 = &DAT_aaaaaaaaaaaaaaaa;
        local_90 = &DAT_aaaaaaaaaaaaaaaa;
        FUN_007d02a0(&local_90);
        uVar4 = FUN_007d0434(&local_90,&local_b8);
        ppcVar2 = ppcStack_78;
        ppcVar17 = local_80;
        if ((uVar4 & 1) != 0) {
          for (; ppcVar17 != ppcVar2; ppcVar17 = ppcVar17 + 4) {
            plVar7 = *(long **)(param_1 + 0x1b8);
            if (plVar7 != (long *)0x0) {
              pcVar9 = (char *)(long)*(char *)((long)ppcVar17 + 0x1f);
              if ((long)pcVar9 < 0) {
                ppcVar8 = (char **)ppcVar17[1];
                pcVar9 = ppcVar17[2];
              }
              else {
                ppcVar8 = ppcVar17 + 1;
              }
              (**(code **)(*plVar7 + 0x10))(plVar7,*(undefined4 *)ppcVar17,ppcVar8,pcVar9);
            }
          }
          *param_4 = *param_4 | 8;
          FUN_007d02c4(&local_90);
          goto LAB_00859514;
        }
        FUN_007d02c4(&local_90);
        goto LAB_008598a0;
      }
      if ((byte)local_b8 != 0xcb) goto LAB_0085986c;
      uVar4 = FUN_0085b0c0(param_1,&local_b8);
    }
    goto joined_r0x0085977c;
  }
  if ((byte)local_b8 < 0xce) {
    if ((byte)local_b8 == 0xcc) {
      uVar4 = FUN_0085b4dc(uVar4,&local_b8,param_4);
      goto joined_r0x0085977c;
    }
    if ((byte)local_b8 == 0xcd) {
      if (local_b8._1_1_ < 5) {
        if (local_b8._1_1_ == 1) {
          uVar4 = FUN_0085b648(param_1,&local_b8,param_4);
        }
        else if (local_b8._1_1_ == 3) {
          uVar4 = FUN_0085b75c(param_1,&local_b8,param_4);
        }
        else {
          if (local_b8._1_1_ != 4) goto LAB_0085986c;
          uVar4 = FUN_0085b8c0(param_1,&local_b8,param_4);
        }
        goto joined_r0x0085977c;
      }
      if (local_b8._1_1_ != 5) {
        if (local_b8._1_1_ == 0xb) {
          if (*(char *)(param_1 + 0x29) == '\x01') {
            uVar4 = FUN_0085ba98(param_1,&local_b8,param_4);
            goto joined_r0x0085977c;
          }
        }
        else if (local_b8._1_1_ == 0xf) {
          FUN_0085b998(param_1,&local_b8,param_4);
          goto LAB_00859514;
        }
        goto LAB_0085986c;
      }
      uStack_88 = (undefined1 *)0x0;
      local_90 = puVar1;
      uVar4 = FUN_00860018(&local_90,&local_b8);
      if ((uVar4 & 1) == 0) goto LAB_008598a0;
      *param_4 = *param_4 | 0x400;
      param_2 = local_b0 + (local_b8 >> 0x20) + (local_b8 >> 0x10 & 0xff);
    }
    else {
LAB_0085986c:
      *(long *)(param_1 + 0x1f0) = *(long *)(param_1 + 0x1f0) + 1;
      param_2 = local_b0 + (local_b8 >> 0x20) + (local_b8 >> 0x10 & 0xff);
    }
    goto LAB_00859528;
  }
  if ((byte)local_b8 == 0xce) {
    if (local_b8._1_1_ != 0xf) {
      if (local_b8._1_1_ != 4) {
        if (local_b8._1_1_ != 1) goto LAB_0085986c;
        uStack_88 = &DAT_aaaaaaaaaaaaaaaa;
        local_90 = &DAT_aaaaaaaaaaaaaaaa;
        FUN_007ceda8(&local_90);
        uVar4 = FUN_007cedd0(&local_90,&local_b8);
        if ((uVar4 & 1) != 0) {
          if (*(ulong *)(param_1 + 0x38) < 2) goto LAB_00859b90;
          piVar10 = (int *)(param_1 + 0x40);
          if ((*(ulong *)(param_1 + 0x38) & 1) != 0) {
            piVar10 = (int *)*plVar18;
          }
          if (*piVar10 == uStack_88._4_4_) {
            *(int *)(param_1 + 0x1d8) = *(int *)(param_1 + 0x1d8) + 1;
            *param_4 = *param_4 | 0x20;
          }
        }
        FUN_007cedbc(&local_90);
        goto joined_r0x0085977c;
      }
      uVar4 = FUN_0085bc40(param_1,&local_b8,param_4);
      goto joined_r0x0085977c;
    }
    FUN_0085be40(param_1,&local_b8,param_4);
  }
  else {
    if ((byte)local_b8 != 0xcf) goto LAB_0085986c;
    local_a8 = '\0';
    local_90 = (undefined1 *)((ulong)local_90 & 0xffffffff00000000);
    uVar4 = FUN_0085afb8(param_1,&local_b8,param_4,&local_a8,&local_90);
    if (local_a8 == '\x01') {
      lVar6 = FUN_0085ac10(&local_d0,&local_90);
      *(undefined1 *)(lVar6 + 1) = 1;
    }
joined_r0x0085977c:
    if ((uVar4 & 1) == 0) goto LAB_008598a0;
  }
LAB_00859514:
  param_2 = local_b0 + (local_b8 >> 0x20) + (local_b8 >> 0x10 & 0xff);
LAB_00859528:
  if (param_2 == param_3) goto LAB_00859890;
  goto LAB_00859530;
LAB_00859890:
  iVar16 = 1;
LAB_008598a4:
  if ((*(long *)(param_1 + 0x1f0) != 0) &&
     (((lVar6 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))(), lVar6 == 0x7fffffffffffffff ||
       (lVar11 = *(long *)(param_1 + 0x1f8), lVar11 == -0x8000000000000000)) ||
      ((lVar6 != -0x8000000000000000 &&
       ((lVar11 != 0x7fffffffffffffff && (9999999 < lVar6 - lVar11)))))))) {
    *(long *)(param_1 + 0x1f8) = lVar6;
    uVar4 = FUN_004022fc();
    if ((uVar4 & 1) == 0) {
      local_108 = "../../modules/rtp_rtcp/source/rtcp_receiver.cc";
      local_100 = 0xe4a;
      local_f0 = *(undefined8 *)(param_1 + 0x1f0);
      local_f8 = &uStack_109;
      local_e8 = &local_108;
      puStack_d8 = &local_f0;
      local_e0 = 
      " RTCP blocks were skipped due to being malformed or of unrecognized/unsupported type, during the past "
      ;
      FUN_005f3380(&local_a8,&DAT_0021fbe8);
      local_90 = (undefined1 *)CONCAT71(uStack_a7,local_a8);
      local_80 = (char **)CONCAT17(uStack_91,local_98);
      ppcStack_78 = &local_e0;
      uStack_88 = puStack_a0;
      FUN_00623bb0(&DAT_0021fbf0,*(undefined8 *)puStack_d8[1],
                   *(undefined4 *)((undefined8 *)puStack_d8[1] + 1),*puStack_d8,local_e0,&local_90,
                   " period.");
    }
  }
  puVar12 = local_d0;
  if (iVar16 == 0) {
    *(long *)(param_1 + 0x1f0) = *(long *)(param_1 + 0x1f0) + 1;
  }
  else {
    for (; puVar12 != local_c8; puVar12 = puVar12 + 2) {
      if (((char)puVar12[1] == '\x01') && ((*(byte *)((long)puVar12 + 5) & 1) == 0)) {
        puVar14 = *(uint **)(param_1 + 0x160);
        lVar6 = (long)*(uint **)(param_1 + 0x168) - (long)puVar14;
        if (lVar6 != 0) {
          uVar4 = (lVar6 >> 3) * -0x3333333333333333;
          puVar13 = puVar14;
          do {
            uVar15 = uVar4 >> 1;
            puVar14 = puVar13 + uVar15 * 10 + 10;
            uVar4 = uVar4 + ~uVar15;
            if (*puVar12 <= puVar13[uVar15 * 10]) {
              puVar14 = puVar13;
              uVar4 = uVar15;
            }
            puVar13 = puVar14;
          } while (uVar4 != 0);
        }
        if (((puVar14 != *(uint **)(param_1 + 0x168)) && (*puVar14 <= *puVar12)) &&
           ((char)puVar14[4] == '\x01')) {
          *(undefined1 *)(puVar14 + 4) = 0;
        }
      }
    }
    plVar7 = *(long **)(param_1 + 0x1c8);
    if (plVar7 != (long *)0x0) {
      if (*(ulong *)(param_1 + 0x38) < 2) {
LAB_00859b90:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x859b94);
        (*pcVar3)();
      }
      if ((*(ulong *)(param_1 + 0x38) & 1) != 0) {
        plVar18 = (long *)*plVar18;
      }
      (**(code **)(*plVar7 + 0x10))(plVar7,*(undefined4 *)plVar18,param_1 + 0x1d0);
    }
  }
  if (local_d0 != (uint *)0x0) {
    uVar15 = (ulong)((long)local_c8 + (-8 - ((long)local_c8 << 0x3d))) >> 3;
    uVar4 = (ulong)(((long)local_d0 - (long)local_c8 << 0x3d) - ((long)local_d0 - (long)local_c8))
            >> 3;
    if (uVar15 <= uVar4) {
      uVar4 = uVar15;
    }
    puVar12 = local_c8;
    if ((1 < uVar4) && ((((int)local_d0 - (int)local_c8 | -(int)local_c8) & 7U) == 0)) {
      uVar4 = uVar4 & 0x1ffffffffffffffe;
      puVar12 = local_c8 + uVar4 * -2;
      do {
        uVar4 = uVar4 - 2;
      } while (uVar4 != 0);
    }
    while (puVar12 != local_d0) {
      puVar12 = puVar12 + -2;
      if (puVar12 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    operator_delete(local_d0);
  }
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x80));
  return iVar16;
}


// ===== 00859b94  FUN_00859b94 =====

void FUN_00859b94(long param_1,uint *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  char *pcVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
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
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if ((*param_2 & 0x100) != 0) {
    FUN_0085cf70(param_1);
  }
  if (((*(byte *)(param_1 + 0x28) & 1) == 0) &&
     (((((*(byte *)((long)param_2 + 1) >> 2 & 1) == 0 ||
        ((**(code **)(**(long **)(param_1 + 0x30) + 8))(), (*(byte *)(param_1 + 0x28) & 1) == 0)) &&
       (((byte)*param_2 >> 6 & 1) != 0)) && (*(long *)(param_2 + 2) != *(long *)(param_2 + 4))))) {
    uVar5 = FUN_0044075c();
    if ((uVar5 & 1) == 0) {
      FUN_00623bb0(&DAT_001f6643,"../../modules/rtp_rtcp/source/rtcp_receiver.cc",0x21f0,
                   "Incoming NACK length: ",*(long *)(param_2 + 4) - *(long *)(param_2 + 2) >> 1);
    }
    (**(code **)(**(long **)(param_1 + 0x30) + 0x10))(*(long **)(param_1 + 0x30),param_2 + 2);
  }
  if ((*(long *)(param_1 + 0x58) != 0) && (uVar2 = *param_2, (uVar2 & 0xa0) != 0)) {
    uVar5 = FUN_0044075c();
    if ((uVar2 >> 5 & 1) == 0) {
      if ((uVar5 & 1) == 0) {
        uVar2 = param_2[1];
        pcVar8 = "Incoming FIR from SSRC ";
        uVar7 = 0x2280;
LAB_00859cb8:
        FUN_00623bb0(&DAT_001f6220,"../../modules/rtp_rtcp/source/rtcp_receiver.cc",uVar7,pcVar8,
                     uVar2);
      }
    }
    else if ((uVar5 & 1) == 0) {
      uVar2 = param_2[1];
      pcVar8 = "Incoming PLI from SSRC ";
      uVar7 = 0x2268;
      goto LAB_00859cb8;
    }
    if (*(ulong *)(param_1 + 0x38) < 2) goto LAB_00859ef8;
    plVar9 = (long *)(param_1 + 0x40);
    if ((*(ulong *)(param_1 + 0x38) & 1) != 0) {
      plVar9 = (long *)*plVar9;
    }
    (**(code **)(**(long **)(param_1 + 0x58) + 0x10))
              (*(long **)(param_1 + 0x58),*(undefined4 *)plVar9);
  }
  plVar9 = *(long **)(param_1 + 0x60);
  if ((plVar9 != (long *)0x0) && ((*(byte *)((long)param_2 + 1) >> 5 & 1) != 0)) {
    if (*(ulong *)(param_1 + 0x38) < 2) {
LAB_00859ef8:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x859efc);
      (*pcVar4)();
    }
    lVar10 = *(long *)(param_2 + 0x74);
    plVar11 = (long *)(param_1 + 0x40);
    if ((*(ulong *)(param_1 + 0x38) & 1) != 0) {
      plVar11 = (long *)*plVar11;
    }
    if (*(int *)(lVar10 + 0xc) == *(int *)plVar11) {
      (**(code **)(*plVar9 + 0x10))
                (plVar9,*(int *)(lVar10 + 0xc),*(undefined2 *)(lVar10 + 0x10),
                 *(undefined2 *)(lVar10 + 0x12),*(undefined1 *)(lVar10 + 0x14));
    }
  }
  puVar6 = *(undefined8 **)(param_1 + 0x68);
  if ((puVar6 != (undefined8 *)0x0) && ((param_2[0x72] & 1) != 0)) {
    uStack_78 = *(undefined8 *)(param_2 + 0x62);
    local_80 = *(undefined8 *)(param_2 + 0x60);
    uStack_68 = *(undefined8 *)(param_2 + 0x66);
    uStack_70 = *(undefined8 *)(param_2 + 100);
    local_40 = *(undefined8 *)(param_2 + 0x70);
    uStack_58 = *(undefined8 *)(param_2 + 0x6a);
    local_60 = *(undefined8 *)(param_2 + 0x68);
    uStack_48 = *(undefined8 *)(param_2 + 0x6e);
    uStack_50 = *(undefined8 *)(param_2 + 0x6c);
    uStack_b8 = *(undefined8 *)(param_2 + 0x52);
    local_c0 = *(undefined8 *)(param_2 + 0x50);
    uStack_a8 = *(undefined8 *)(param_2 + 0x56);
    uStack_b0 = *(undefined8 *)(param_2 + 0x54);
    uStack_98 = *(undefined8 *)(param_2 + 0x5a);
    local_a0 = *(undefined8 *)(param_2 + 0x58);
    uStack_88 = *(undefined8 *)(param_2 + 0x5e);
    uStack_90 = *(undefined8 *)(param_2 + 0x5c);
    (**(code **)*puVar6)(puVar6,&local_c0);
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    uVar7 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
    if ((*param_2 & 0x10000) != 0) {
      (**(code **)(**(long **)(param_1 + 0x50) + 0x20))
                (*(long **)(param_1 + 0x50),uVar7,param_2[0x12]);
    }
    lVar10 = *(long *)(param_2 + 8);
    if (lVar10 != *(long *)(param_2 + 10)) {
      (**(code **)(**(long **)(param_1 + 0x50) + 0x28))
                (*(long **)(param_1 + 0x50),uVar7,lVar10,*(long *)(param_2 + 10) - lVar10 >> 6);
    }
    if ((char)param_2[0x10] == '\x01') {
      (**(code **)(**(long **)(param_1 + 0x50) + 0x30))
                (*(long **)(param_1 + 0x50),uVar7,*(undefined8 *)(param_2 + 0xe));
    }
    if (*(long *)(param_2 + 0x14) != 0) {
      (**(code **)(**(long **)(param_1 + 0x50) + 0x10))(*(long **)(param_1 + 0x50),uVar7);
    }
    if ((char)param_2[0x22] == '\x01') {
      (**(code **)(**(long **)(param_1 + 0x50) + 0x18))
                (*(long **)(param_1 + 0x50),uVar7,param_2 + 0x16);
    }
  }
  if ((*param_2 & 6) != 0) {
    lVar3 = *(long *)(param_2 + 10) - *(long *)(param_2 + 8);
    lVar10 = 0;
    if (lVar3 != 0) {
      lVar10 = *(long *)(param_2 + 8);
    }
    (**(code **)(**(long **)(param_1 + 0x30) + 0x18))(*(long **)(param_1 + 0x30),lVar10,lVar3 >> 6);
  }
  plVar9 = *(long **)(param_1 + 0x70);
  if ((plVar9 != (long *)0x0) && ((param_2[0x4e] & 1) != 0)) {
    (**(code **)(*plVar9 + 0x10))(plVar9,param_2 + 0x24);
  }
  if (((*(byte *)(param_1 + 0x28) & 1) == 0) && (*(long *)(param_1 + 0x1c0) != 0)) {
    puVar1 = *(undefined8 **)(param_2 + 10);
    for (puVar6 = *(undefined8 **)(param_2 + 8); puVar6 != puVar1; puVar6 = puVar6 + 8) {
      uStack_d8 = puVar6[5];
      local_e0 = puVar6[4];
      uStack_c8 = puVar6[7];
      uStack_d0 = puVar6[6];
      uStack_f8 = puVar6[1];
      local_100 = *puVar6;
      uStack_e8 = puVar6[3];
      uStack_f0 = puVar6[2];
      (**(code **)(**(long **)(param_1 + 0x1c0) + 0x10))(*(long **)(param_1 + 0x1c0),&local_100);
    }
  }
  return;
}


// ===== 00859efc  FUN_00859efc =====

void FUN_00859efc(long param_1)

{
  long *plVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  
  plVar1 = *(long **)(param_1 + 0x1d0);
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (*(char *)(param_1 + 0x88) == '\x01') {
    pvVar2 = *(void **)(param_1 + 0x68);
    *(undefined ***)(param_1 + 0x58) = &PTR_FUN_00d3a820;
    if (pvVar2 != (void *)0x0) {
      pvVar3 = *(void **)(param_1 + 0x70);
      uVar4 = (ulong)(((long)pvVar2 - (long)pvVar3) * 0x1555555555555555) >> 3;
      uVar5 = (long)pvVar3 * -0x1555555555555555 - 8U >> 3;
      if (uVar5 <= uVar4) {
        uVar4 = uVar5;
      }
      if ((1 < uVar4) && ((((int)pvVar2 - (int)pvVar3 | -(int)pvVar3) & 7U) == 0)) {
        uVar4 = uVar4 & 0x1ffffffffffffffe;
        pvVar3 = (void *)((long)pvVar3 + uVar4 * -0x18);
        do {
          uVar4 = uVar4 - 2;
        } while (uVar4 != 0);
      }
      do {
        if (pvVar3 == pvVar2) {
          *(void **)(param_1 + 0x70) = pvVar2;
          operator_delete(pvVar2);
          goto LAB_00859fd4;
        }
        pvVar3 = (void *)((long)pvVar3 + -0x18);
      } while (pvVar3 != (void *)0x0);
      goto LAB_0085a0d0;
    }
  }
LAB_00859fd4:
  plVar1 = *(long **)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  pvVar2 = *(void **)(param_1 + 0x20);
  if (pvVar2 == (void *)0x0) {
LAB_0085a06c:
    pvVar2 = *(void **)(param_1 + 8);
    if (pvVar2 == (void *)0x0) {
      return;
    }
    pvVar3 = *(void **)(param_1 + 0x10);
    uVar5 = (ulong)((long)pvVar3 + ((long)pvVar3 << 0x3f) + -2) >> 1;
    uVar4 = (ulong)(((long)pvVar2 - (long)pvVar3 << 0x3f) - ((long)pvVar2 - (long)pvVar3)) >> 1;
    if (uVar5 <= uVar4) {
      uVar4 = uVar5;
    }
    if ((1 < uVar4) && ((((int)pvVar2 - (uint)pvVar3 | (uint)pvVar3) & 1) == 0)) {
      uVar4 = uVar4 & 0x7ffffffffffffffe;
      pvVar3 = (void *)((long)pvVar3 + uVar4 * -2);
      do {
        uVar4 = uVar4 - 2;
      } while (uVar4 != 0);
    }
    do {
      if (pvVar3 == pvVar2) {
        *(void **)(param_1 + 0x10) = pvVar2;
        operator_delete(pvVar2);
        return;
      }
      pvVar3 = (void *)((long)pvVar3 + -2);
    } while (pvVar3 != (void *)0x0);
  }
  else {
    pvVar3 = *(void **)(param_1 + 0x28);
    uVar5 = (ulong)((long)pvVar3 + (-0x40 - ((long)pvVar3 << 0x3a))) >> 6;
    uVar4 = (ulong)(((long)pvVar2 - (long)pvVar3 << 0x3a) - ((long)pvVar2 - (long)pvVar3)) >> 6;
    if (uVar5 <= uVar4) {
      uVar4 = uVar5;
    }
    if ((1 < uVar4) && ((((int)pvVar2 - (int)pvVar3 | -(int)pvVar3) & 0x3fU) == 0)) {
      uVar4 = uVar4 & 0x3fffffffffffffe;
      pvVar3 = (void *)((long)pvVar3 + uVar4 * -0x40);
      do {
        uVar4 = uVar4 - 2;
      } while (uVar4 != 0);
    }
    do {
      if (pvVar3 == pvVar2) {
        *(void **)(param_1 + 0x28) = pvVar2;
        operator_delete(pvVar2);
        goto LAB_0085a06c;
      }
      pvVar3 = (void *)((long)pvVar3 + -0x40);
    } while (pvVar3 != (void *)0x0);
  }
LAB_0085a0d0:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 0085a110  FUN_0085a110 =====

int FUN_0085a110(long param_1,undefined4 param_2)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x80));
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xa8) = param_2;
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x80));
  return iVar1;
}


// ===== 0085a14c  FUN_0085a14c =====

void FUN_0085a14c(long param_1,undefined4 param_2)

{
  code *pcVar1;
  long *plVar2;
  
  if (1 < *(ulong *)(param_1 + 0x38)) {
    plVar2 = (long *)(param_1 + 0x40);
    if ((*(ulong *)(param_1 + 0x38) & 1) != 0) {
      plVar2 = (long *)*plVar2;
    }
    *(undefined4 *)plVar2 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x85a174);
  (*pcVar1)();
}


// ===== 0085a174  FUN_0085a174 =====

undefined4 FUN_0085a174(long param_1)

{
  code *pcVar1;
  long *plVar2;
  
  if (1 < *(ulong *)(param_1 + 0x38)) {
    plVar2 = (long *)(param_1 + 0x40);
    if ((*(ulong *)(param_1 + 0x38) & 1) != 0) {
      plVar2 = (long *)*plVar2;
    }
    return *(undefined4 *)plVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x85a19c);
  (*pcVar1)();
}


// ===== 0085a19c  FUN_0085a19c =====

undefined1  [16] FUN_0085a19c(long param_1)

{
  long lVar1;
  uint *puVar2;
  uint *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x80));
  puVar3 = *(uint **)(param_1 + 0x148);
  lVar1 = (long)*(uint **)(param_1 + 0x150) - (long)puVar3;
  if (lVar1 != 0) {
    uVar4 = lVar1 >> 5;
    puVar2 = puVar3;
    do {
      uVar5 = uVar4 >> 1;
      puVar3 = puVar2 + uVar5 * 8 + 8;
      uVar4 = uVar4 + ~uVar5;
      if (*(uint *)(param_1 + 0xa8) <= puVar2[uVar5 * 8]) {
        puVar3 = puVar2;
        uVar4 = uVar5;
      }
      puVar2 = puVar3;
    } while (uVar4 != 0);
  }
  if ((puVar3 == *(uint **)(param_1 + 0x150)) || (*(uint *)(param_1 + 0xa8) < *puVar3)) {
    uVar6 = 0;
    uVar4 = 0;
  }
  else {
    uVar6 = 1;
    uVar4 = 0;
    if (*(ulong *)(puVar3 + 6) != 0) {
      uVar4 = *(ulong *)(puVar3 + 4) / *(ulong *)(puVar3 + 6);
    }
  }
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x80));
  auVar7._8_8_ = uVar6;
  auVar7._0_8_ = uVar4;
  return auVar7;
}


// ===== 0085a248  FUN_0085a248 =====

undefined1  [16] FUN_0085a248(long param_1)

{
  long lVar1;
  uint *puVar2;
  uint *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x80));
  puVar3 = *(uint **)(param_1 + 0x148);
  lVar1 = (long)*(uint **)(param_1 + 0x150) - (long)puVar3;
  if (lVar1 != 0) {
    uVar4 = lVar1 >> 5;
    puVar2 = puVar3;
    do {
      uVar5 = uVar4 >> 1;
      puVar3 = puVar2 + uVar5 * 8 + 8;
      uVar4 = uVar4 + ~uVar5;
      if (*(uint *)(param_1 + 0xa8) <= puVar2[uVar5 * 8]) {
        puVar3 = puVar2;
        uVar4 = uVar5;
      }
      puVar2 = puVar3;
    } while (uVar4 != 0);
  }
  if ((puVar3 == *(uint **)(param_1 + 0x150)) || (*(uint *)(param_1 + 0xa8) < *puVar3)) {
    uVar6 = 0;
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(puVar3 + 2);
    uVar6 = 1;
  }
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x80));
  auVar8._8_8_ = uVar6;
  auVar8._0_8_ = uVar7;
  return auVar8;
}


// ===== 0085a2f0  FUN_0085a2f0 =====

int FUN_0085a2f0(undefined8 *param_1,long param_2)

{
  long lVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_2 + 0x80));
  puVar4 = *(uint **)(param_2 + 0x160);
  lVar1 = (long)*(uint **)(param_2 + 0x168) - (long)puVar4;
  if (lVar1 != 0) {
    uVar5 = (lVar1 >> 3) * -0x3333333333333333;
    puVar3 = puVar4;
    do {
      uVar6 = uVar5 >> 1;
      puVar4 = puVar3 + uVar6 * 10 + 10;
      uVar5 = uVar5 + ~uVar6;
      if (*(uint *)(param_2 + 0xa8) <= puVar3[uVar6 * 10]) {
        puVar4 = puVar3;
        uVar5 = uVar6;
      }
      puVar3 = puVar4;
    } while (uVar5 != 0);
  }
  if ((puVar4 == *(uint **)(param_2 + 0x168)) || (*(uint *)(param_2 + 0xa8) < *puVar4)) {
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  else {
    uVar8 = *(undefined8 *)(puVar4 + 8);
    uVar7 = *(undefined8 *)(puVar4 + 6);
    uVar9 = *(undefined8 *)(puVar4 + 2);
    param_1[1] = *(undefined8 *)(puVar4 + 4);
    *param_1 = uVar9;
    param_1[3] = uVar8;
    param_1[2] = uVar7;
  }
  iVar2 = pthread_mutex_unlock((pthread_mutex_t *)(param_2 + 0x80));
  return iVar2;
}


// ===== 0085a39c  FUN_0085a39c =====

int FUN_0085a39c(long param_1,undefined1 param_2)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x80));
  *(undefined1 *)(param_1 + 0x110) = param_2;
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x80));
  return iVar1;
}


// ===== 0085a3d4  FUN_0085a3d4 =====

undefined1  [16] FUN_0085a3d4(long param_1,long param_2,ulong param_3)

{
  ulong *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  char *pcVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x80));
  if ((param_3 & 1) == 0) {
    uVar8 = *(ulong *)(param_1 + 0x118);
    uVar13 = *(ulong *)(param_1 + 0x120) & 0xff;
    if ((*(ulong *)(param_1 + 0x120) & 1) != 0) {
      *(undefined1 *)(param_1 + 0x120) = 0;
    }
    pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x80));
    uVar14 = uVar8 & 0xffffffffffffff00;
    goto LAB_0085a640;
  }
  if ((*(long *)(param_1 + 0x1a8) + 0x8000000000000001U < 2) ||
     (param_2 < *(long *)(param_1 + 0x1a8))) {
    lVar4 = *(long *)(param_1 + 0x148);
    lVar3 = *(long *)(param_1 + 0x150);
    if (lVar4 == lVar3) goto LAB_0085a51c;
    uVar8 = (lVar3 - lVar4) - 0x20;
    if (uVar8 < 0x80) {
      lVar9 = lVar4;
      uVar13 = 0x8000000000000000;
    }
    else {
      uVar8 = (uVar8 >> 5) + 1;
      uVar13 = uVar8 & 3;
      auVar15._8_8_ = 0x8000000000000000;
      auVar15._0_8_ = 0x8000000000000000;
      uVar14 = 4;
      if (uVar13 != 0) {
        uVar14 = uVar13;
      }
      lVar10 = uVar8 - uVar14;
      lVar9 = lVar4 + lVar10 * 0x20;
      puVar11 = (undefined8 *)(lVar4 + 0x48);
      auVar16._8_8_ = 0x8000000000000000;
      auVar16._0_8_ = 0x8000000000000000;
      do {
        auVar17._0_8_ = puVar11[-8];
        uVar6 = *puVar11;
        puVar12 = puVar11 + -4;
        puVar2 = puVar11 + 4;
        lVar10 = lVar10 + -4;
        puVar11 = puVar11 + 0x10;
        auVar17._8_8_ = *puVar12;
        auVar18 = NEON_cmgt(auVar17,auVar15,8);
        auVar19._8_8_ = *puVar2;
        auVar19._0_8_ = uVar6;
        auVar19 = NEON_cmgt(auVar19,auVar16,8);
        auVar15 = NEON_bit(auVar15,auVar17,auVar18,1);
        auVar18._8_8_ = *puVar2;
        auVar18._0_8_ = uVar6;
        auVar16 = NEON_bit(auVar16,auVar18,auVar19,1);
      } while (lVar10 != 0);
      auVar19 = NEON_cmgt(auVar15,auVar16,8);
      auVar15 = NEON_bif(auVar15,auVar16,auVar19,1);
      auVar16 = NEON_ext(auVar15,auVar15,8,1);
      uVar6 = NEON_cmgt(auVar15._0_8_,auVar16._0_8_);
      uVar13 = NEON_bif(auVar15._0_8_,auVar16._0_8_,uVar6,1);
    }
    do {
      puVar1 = (ulong *)(lVar9 + 8);
      lVar9 = lVar9 + 0x20;
      uVar8 = *puVar1;
      if ((long)*puVar1 <= (long)uVar13) {
        uVar8 = uVar13;
      }
      uVar13 = uVar8;
    } while (lVar9 != lVar3);
    if (0xfffffffffffffffd < uVar8 + 0x7fffffffffffffff) goto LAB_0085a51c;
    uVar14 = uVar8 & 0xffffffffffffff00;
    uVar13 = 1;
  }
  else {
LAB_0085a51c:
    uVar8 = 0;
    uVar13 = 0;
    uVar14 = 0xaaaaaaaaaaaaaa00;
  }
  lVar4 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
  if ((*(long *)(param_1 + 0x1a8) + 0x8000000000000001U < 2) ||
     (lVar3 = *(long *)(param_1 + 0x78) * 3, lVar3 == 0x7fffffffffffffff)) {
LAB_0085a5bc:
    if ((1 < *(long *)(param_1 + 0x1b0) + 0x8000000000000001U) &&
       (lVar3 = *(long *)(param_1 + 0x78) * 3, lVar3 != 0x7fffffffffffffff)) {
      if (lVar3 != -0x8000000000000000) {
        lVar3 = lVar3 + *(long *)(param_1 + 0x1b0);
      }
      if (lVar3 < lVar4) {
        *(undefined8 *)(param_1 + 0x1b0) = 0x7fffffffffffffff;
        uVar5 = FUN_004022fc();
        if ((uVar5 & 1) == 0) {
          pcVar7 = "Timeout: No increase in RTCP RR extended highest sequence number.";
          uVar6 = 0x952;
          goto LAB_0085a634;
        }
      }
    }
  }
  else {
    if (lVar3 != -0x8000000000000000) {
      lVar3 = lVar3 + *(long *)(param_1 + 0x1a8);
    }
    if (lVar4 <= lVar3) goto LAB_0085a5bc;
    *(undefined8 *)(param_1 + 0x1a8) = 0x7fffffffffffffff;
    uVar5 = FUN_004022fc();
    if ((uVar5 & 1) == 0) {
      pcVar7 = "Timeout: No RTCP RR received.";
      uVar6 = 0x942;
LAB_0085a634:
      FUN_00623bb0(&DAT_001f4ead,"../../modules/rtp_rtcp/source/rtcp_receiver.cc",uVar6,
                   "OnPeriodicRttUpdate",&DAT_001c4dc3,pcVar7);
    }
  }
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x80));
LAB_0085a640:
  auVar20._0_8_ = uVar14 | uVar8 & 0xff;
  auVar20._8_8_ = uVar13 | 0xaaaaaaaaaaaaaa00;
  return auVar20;
}


// ===== 0085a664  FUN_0085a664 =====

int FUN_0085a664(undefined8 *param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_2 + 0x80));
  bVar1 = *(long *)(param_2 + 0xb8) == 0;
  if (bVar1) {
    *(undefined1 *)param_1 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0xb0);
    uVar5 = *(undefined8 *)(param_2 + 200);
    uVar4 = *(undefined8 *)(param_2 + 0xc0);
    uVar7 = *(undefined8 *)(param_2 + 0xd8);
    uVar6 = *(undefined8 *)(param_2 + 0xd0);
    param_1[1] = *(undefined8 *)(param_2 + 0xb8);
    *param_1 = uVar3;
    param_1[3] = uVar5;
    param_1[2] = uVar4;
    param_1[5] = uVar7;
    param_1[4] = uVar6;
  }
  *(bool *)(param_1 + 6) = !bVar1;
  iVar2 = pthread_mutex_unlock((pthread_mutex_t *)(param_2 + 0x80));
  return iVar2;
}


// ===== 0085a6c0  FUN_0085a6c0 =====

int FUN_0085a6c0(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  int iVar3;
  int extraout_var;
  void *pvVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  int local_24;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_2 + 0x80));
  uVar9 = *(ulong *)(param_2 + 0xf0);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = uVar9;
  if (0x31 < uVar9) {
    uVar1 = 0x32;
  }
  if (uVar9 != 0) {
    pvVar4 = operator_new(uVar1 * 0xc);
    *param_1 = pvVar4;
    param_1[1] = pvVar4;
    param_1[2] = (void *)((long)pvVar4 + uVar1 * 0xc);
  }
  plVar8 = *(long **)(param_2 + 0x10);
  uVar5 = (**(code **)(*plVar8 + 0x10))(plVar8);
  (**(code **)(*plVar8 + 0x18))(plVar8,uVar5);
  while( true ) {
    if (uVar9 == 0) {
      iVar3 = pthread_mutex_unlock((pthread_mutex_t *)(param_2 + 0x80));
      return iVar3;
    }
    if (*(long *)(param_2 + 0xf0) == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/list:830: libc++ Hardening assertion !empty() failed: list::front called on empty list\n"
                );
    }
    lVar10 = *(long *)(param_2 + 0xe8);
    puVar2 = (undefined8 *)param_1[1];
    local_24 = extraout_var - *(int *)(lVar10 + 0x18);
    if (puVar2 < (undefined8 *)param_1[2]) {
      if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      uVar5 = *(undefined8 *)(lVar10 + 0x10);
      *(int *)(puVar2 + 1) = local_24;
      lVar7 = (long)puVar2 + 0xc;
      *puVar2 = uVar5;
    }
    else {
      lVar7 = FUN_0085d674(param_1,lVar10 + 0x10,lVar10 + 0x14,&local_24);
    }
    param_1[1] = lVar7;
    FUN_0085a86c(param_2 + 0xf8,lVar10 + 0x10);
    if (*(long *)(param_2 + 0xf0) == 0) break;
    plVar6 = *(long **)(param_2 + 0xe8);
    plVar8 = (long *)plVar6[1];
    *(long **)(*plVar6 + 8) = plVar8;
    *plVar8 = *plVar6;
    *(long *)(param_2 + 0xf0) = *(long *)(param_2 + 0xf0) + -1;
    if ((plVar6 == (long *)0xfffffffffffffff0) || (plVar6 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    operator_delete(plVar6);
    uVar1 = uVar1 - 1;
    uVar9 = uVar1;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/list:1394: libc++ Hardening assertion !empty() failed: list::pop_front() called with empty list\n"
            );
}


// ===== 0085a86c  FUN_0085a86c =====

long FUN_0085a86c(long *param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  puVar3 = (uint *)*param_1;
  puVar4 = (uint *)param_1[1];
  if ((long)puVar4 - (long)puVar3 != 0) {
    uVar6 = (long)puVar4 - (long)puVar3 >> 4;
    puVar2 = puVar3;
    do {
      uVar7 = uVar6 >> 1;
      puVar3 = puVar2 + uVar7 * 4 + 4;
      uVar6 = uVar6 + ~uVar7;
      if (*param_2 <= puVar2[uVar7 * 4]) {
        puVar3 = puVar2;
        uVar6 = uVar7;
      }
      puVar2 = puVar3;
    } while (uVar6 != 0);
  }
  puVar2 = puVar3;
  if (puVar3 == puVar4) {
    lVar5 = 0;
  }
  else {
    if (*puVar3 <= *param_2) {
      puVar2 = puVar3 + 4;
    }
    lVar5 = (long)puVar2 - (long)puVar3;
    if (puVar2 < puVar3) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__vector/vector.h:1170: libc++ Hardening assertion __first <= __last failed: vector::erase(first, last) called with invalid range\n"
                );
    }
  }
  if (puVar3 != puVar2) {
    puVar2 = (uint *)((long)puVar3 + lVar5);
    if (puVar2 != puVar4) {
      do {
        *puVar3 = *puVar2;
        puVar1 = puVar2 + 2;
        puVar2 = puVar2 + 4;
        *(undefined8 *)(puVar3 + 2) = *(undefined8 *)puVar1;
        puVar3 = puVar3 + 4;
      } while (puVar2 != puVar4);
      puVar4 = (uint *)param_1[1];
    }
    uVar7 = (ulong)((long)puVar4 + (-0x10 - ((long)puVar4 << 0x3c))) >> 4;
    uVar6 = (ulong)(((long)puVar3 - (long)puVar4 << 0x3c) - ((long)puVar3 - (long)puVar4)) >> 4;
    if (uVar7 <= uVar6) {
      uVar6 = uVar7;
    }
    if ((1 < uVar6) && ((((int)puVar3 - (int)puVar4 | -(int)puVar4) & 0xfU) == 0)) {
      uVar6 = uVar6 & 0xffffffffffffffe;
      puVar4 = puVar4 + uVar6 * -4;
      do {
        uVar6 = uVar6 - 2;
      } while (uVar6 != 0);
    }
    while (puVar4 != puVar3) {
      puVar4 = puVar4 + -4;
      if (puVar4 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    param_1[1] = (long)puVar3;
  }
  return lVar5 >> 4;
}


// ===== 0085a9b4  FUN_0085a9b4 =====

int FUN_0085a9b4(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  pthread_mutex_lock((pthread_mutex_t *)(param_2 + 0x80));
  puVar2 = *(undefined8 **)(param_2 + 0x180);
  if (*(undefined8 **)(param_2 + 0x178) != puVar2) {
    puVar6 = *(undefined8 **)(param_2 + 0x178) + 1;
    puVar4 = (undefined8 *)0x0;
    do {
      if (puVar4 < (undefined8 *)param_1[2]) {
        if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        uVar9 = puVar6[4];
        uVar8 = puVar6[7];
        uVar7 = puVar6[6];
        uVar11 = puVar6[1];
        uVar10 = *puVar6;
        uVar13 = puVar6[3];
        uVar12 = puVar6[2];
        puVar4[5] = puVar6[5];
        puVar4[4] = uVar9;
        puVar4[7] = uVar8;
        puVar4[6] = uVar7;
        puVar5 = puVar4 + 8;
        puVar4[1] = uVar11;
        *puVar4 = uVar10;
        puVar4[3] = uVar13;
        puVar4[2] = uVar12;
      }
      else {
        puVar5 = (undefined8 *)FUN_0085d7ac(param_1,puVar6);
      }
      puVar1 = puVar6 + 8;
      puVar6 = puVar6 + 9;
      param_1[1] = puVar5;
      puVar4 = puVar5;
    } while (puVar1 != puVar2);
  }
  iVar3 = pthread_mutex_unlock((pthread_mutex_t *)(param_2 + 0x80));
  return iVar3;
}


// ===== 0085aa68  FUN_0085aa68 =====

uint FUN_0085aa68(long param_1,undefined8 param_2,uint *param_3)

{
  long lVar1;
  bool bVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  uint *puVar12;
  uint *puVar13;
  long *plVar14;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_007d10f0(&local_80);
  uVar8 = FUN_007d12d4(&local_80,param_2);
  puVar6 = puStack_78;
  if ((uVar8 & 1) != 0) {
    uVar5 = (uint)puStack_78;
    param_3[1] = (uint)puStack_78;
    puVar13 = *(uint **)(param_1 + 0x130);
    lVar1 = (long)*(uint **)(param_1 + 0x138) - (long)puVar13;
    if (lVar1 != 0) {
      uVar10 = (lVar1 >> 3) * -0x71c71c71c71c71c7;
      puVar12 = puVar13;
      do {
        uVar11 = uVar10 >> 1;
        puVar13 = puVar12 + uVar11 * 0x12 + 0x12;
        uVar10 = uVar10 + ~uVar11;
        if ((uint)puStack_78 <= puVar12[uVar11 * 0x12]) {
          puVar13 = puVar12;
          uVar10 = uVar11;
        }
        puVar12 = puVar13;
      } while (uVar10 != 0);
    }
    if ((puVar13 != *(uint **)(param_1 + 0x138)) && (*puVar13 <= (uint)puStack_78)) {
      uVar9 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
      *(undefined8 *)(puVar13 + 2) = uVar9;
    }
    if (*(uint *)(param_1 + 0xa8) == uVar5) {
      *param_3 = *param_3 | 2;
      *(undefined1 **)(param_1 + 0xc0) = local_70;
      *(undefined4 *)(param_1 + 200) = (undefined4)local_68;
      uVar9 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
      plVar14 = *(long **)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0xb0) = uVar9;
      uVar9 = (**(code **)(*plVar14 + 0x10))(plVar14);
      uVar9 = (**(code **)(*plVar14 + 0x18))(plVar14,uVar9);
      *(undefined8 *)(param_1 + 0xb8) = uVar9;
      *(undefined4 *)(param_1 + 0xcc) = local_68._4_4_;
      *(ulong *)(param_1 + 0xd0) = (ulong)local_60 & 0xffffffff;
      *(long *)(param_1 + 0xd8) = *(long *)(param_1 + 0xd8) + 1;
      puVar3 = puStack_58;
      puVar4 = puStack_50;
    }
    else {
      *param_3 = *param_3 | 4;
      puVar3 = puStack_58;
      puVar4 = puStack_50;
    }
    for (; puVar7 = puStack_50, bVar2 = puVar3 != puStack_50, puStack_50 = puVar4, bVar2;
        puVar3 = puVar3 + 0x1c) {
      FUN_0085bf64(param_1,puVar3,param_3,(ulong)puVar6 & 0xffffffff);
      puVar4 = puStack_50;
      puStack_50 = puVar7;
    }
  }
  FUN_007d1118(&local_80);
  return uVar8 & 1;
}


// ===== 0085ac10  FUN_0085ac10 =====

uint * FUN_0085ac10(ulong *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  uint *puVar4;
  size_t __n;
  long lVar5;
  ulong uVar6;
  uint *puVar7;
  ulong uVar8;
  uint *puVar9;
  ulong uVar10;
  uint *puVar11;
  uint *puVar12;
  
  puVar11 = (uint *)*param_1;
  puVar12 = (uint *)param_1[1];
  uVar6 = (long)puVar12 - (long)puVar11 >> 3;
  if ((long)puVar12 - (long)puVar11 == 0) {
    puVar4 = puVar11;
    if (puVar11 != puVar12) goto LAB_0085ac78;
LAB_0085ad10:
    puVar7 = (uint *)param_1[2];
    puVar9 = puVar4;
    if (puVar12 < puVar7) {
      if (puVar12 == (uint *)0x0) goto LAB_0085ae70;
      uVar1 = *param_2;
      *(undefined2 *)(puVar12 + 1) = 0;
      *puVar12 = uVar1;
      param_1[1] = (ulong)(puVar12 + 2);
      goto LAB_0085ae2c;
    }
  }
  else {
    uVar10 = uVar6;
    puVar9 = puVar11;
    do {
      uVar8 = uVar10 >> 1;
      puVar4 = puVar9 + uVar8 * 2 + 2;
      uVar10 = uVar10 + ~uVar8;
      if (*param_2 <= puVar9[uVar8 * 2]) {
        puVar4 = puVar9;
        uVar10 = uVar8;
      }
      puVar9 = puVar4;
    } while (uVar10 != 0);
    if (puVar4 == puVar12) goto LAB_0085ad10;
LAB_0085ac78:
    uVar1 = *param_2;
    if (*puVar4 <= uVar1) goto LAB_0085ae2c;
    puVar7 = (uint *)param_1[2];
    puVar9 = puVar4;
    if (puVar12 < puVar7) {
      puVar11 = puVar12;
      for (puVar9 = puVar12 + -2; puVar9 < puVar12; puVar9 = puVar9 + 2) {
        if (puVar11 == (uint *)0x0) goto LAB_0085ae70;
        *(undefined8 *)puVar11 = *(undefined8 *)puVar9;
        puVar11 = puVar11 + 2;
      }
      param_1[1] = (ulong)puVar11;
      if (puVar12 != puVar4 + 2) {
        lVar5 = 0;
        do {
          lVar2 = lVar5 + -0x10;
          *(undefined4 *)((long)puVar12 + lVar5 + -8) =
               *(undefined4 *)((long)puVar12 + lVar5 + -0x10);
          *(undefined2 *)((long)puVar12 + lVar5 + -4) =
               *(undefined2 *)((long)puVar12 + lVar5 + -0xc);
          lVar5 = lVar5 + -8;
        } while ((uint *)((long)puVar12 + lVar2) != puVar4);
      }
      *puVar4 = uVar1;
      *(undefined2 *)(puVar4 + 1) = 0;
      goto LAB_0085ae2c;
    }
  }
  uVar10 = (long)puVar9 - (long)puVar11;
  uVar6 = uVar6 + 1;
  if (uVar6 >> 0x3d != 0) {
    FUN_0085dce4();
LAB_0085ae88:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  uVar8 = (long)puVar7 - (long)puVar11 >> 2;
  if (uVar8 <= uVar6) {
    uVar8 = uVar6;
  }
  if (0x7ffffffffffffff7 < (ulong)((long)puVar7 - (long)puVar11)) {
    uVar8 = 0x1fffffffffffffff;
  }
  if (uVar8 == 0) {
    uVar8 = 0;
    pvVar3 = (void *)0x0;
  }
  else {
    if (uVar8 >> 0x3d != 0) goto LAB_0085ae88;
    uVar8 = uVar8 << 3;
    pvVar3 = operator_new(uVar8);
  }
  puVar12 = (uint *)((long)pvVar3 + uVar10);
  puVar4 = puVar12;
  if (uVar8 == uVar10) {
    if (puVar9 != puVar11) {
      lVar5 = ((long)uVar10 >> 3) + 1;
      puVar4 = puVar12 + ((ulong)(lVar5 - (lVar5 >> 0x3f)) >> 1) * -2;
      goto LAB_0085adbc;
    }
    puVar4 = (uint *)operator_new(8);
    if (puVar12 == (uint *)0x0) goto LAB_0085ae70;
    puVar11 = puVar4 + 2;
    operator_delete(pvVar3);
  }
  else {
LAB_0085adbc:
    if (puVar4 == (uint *)0x0) {
LAB_0085ae70:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    puVar11 = (uint *)((long)pvVar3 + uVar8);
    puVar12 = puVar4;
  }
  uVar1 = *param_2;
  *(undefined2 *)(puVar12 + 1) = 0;
  *puVar12 = uVar1;
  memcpy(puVar12 + 2,puVar9,param_1[1] - (long)puVar9);
  uVar6 = param_1[1];
  param_1[1] = (ulong)puVar9;
  __n = (long)puVar9 - (long)*param_1;
  memcpy((void *)((long)puVar4 - __n),(void *)*param_1,__n);
  pvVar3 = (void *)*param_1;
  *param_1 = (long)puVar4 - __n;
  param_1[1] = (long)(puVar12 + 2) + (uVar6 - (long)puVar9);
  param_1[2] = (ulong)puVar11;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
LAB_0085ae2c:
  return puVar4 + 1;
}


// ===== 0085ae8c  FUN_0085ae8c =====

uint FUN_0085ae8c(long param_1,undefined8 param_2,uint *param_3)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  uint *puVar9;
  uint *puVar10;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_007cef74(&local_70);
  uVar5 = FUN_007cf150(&local_70,param_2);
  puVar3 = puStack_68;
  if ((uVar5 & 1) != 0) {
    param_3[1] = (uint)puStack_68;
    puVar10 = *(uint **)(param_1 + 0x130);
    lVar2 = (long)*(uint **)(param_1 + 0x138) - (long)puVar10;
    if (lVar2 != 0) {
      uVar7 = (lVar2 >> 3) * -0x71c71c71c71c71c7;
      puVar9 = puVar10;
      do {
        uVar8 = uVar7 >> 1;
        puVar10 = puVar9 + uVar8 * 0x12 + 0x12;
        uVar7 = uVar7 + ~uVar8;
        if ((uint)puStack_68 <= puVar9[uVar8 * 0x12]) {
          puVar10 = puVar9;
          uVar7 = uVar8;
        }
        puVar9 = puVar10;
      } while (uVar7 != 0);
    }
    if ((puVar10 != *(uint **)(param_1 + 0x138)) && (*puVar10 <= (uint)puStack_68)) {
      uVar6 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
      *(undefined8 *)(puVar10 + 2) = uVar6;
    }
    puVar4 = puStack_58;
    *param_3 = *param_3 | 4;
    for (puVar1 = local_60; puVar1 != puVar4; puVar1 = puVar1 + 0x1c) {
      FUN_0085bf64(param_1,puVar1,param_3,(ulong)puVar3 & 0xffffffff);
    }
  }
  FUN_007cef94(&local_70);
  return uVar5 & 1;
}


// ===== 0085afb8  FUN_0085afb8 =====

uint FUN_0085afb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 *param_5)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *local_b0;
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
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00860a10(&local_b0);
  uVar1 = FUN_00860af8(&local_b0,param_2);
  if ((uVar1 & 1) != 0) {
    *param_5 = puStack_a8._0_4_;
    *(bool *)param_4 = local_90 != puStack_88;
    puVar2 = local_90;
    puVar3 = puStack_88;
    if ((char)puStack_98 == '\x01') {
      FUN_0085c804(param_1,(ulong)puStack_a8 & 0xffffffff,&local_a0);
      puVar2 = local_90;
      puVar3 = puStack_88;
    }
    for (; puVar2 != puVar3; puVar2 = puVar2 + 0xc) {
      FUN_0085c9ec(param_1,(ulong)puStack_a8 & 0xffffffff,puVar2);
    }
    if (((ulong)local_60 & 1) != 0) {
      FUN_0085cc44(param_1,(ulong)puStack_a8 & 0xffffffff,&puStack_78,param_3);
    }
  }
  FUN_00860a5c(&local_b0);
  return uVar1 & 1;
}


// ===== 0085b0c0  FUN_0085b0c0 =====

/* WARNING: Removing unreachable block (ram,0x0085b1c8) */
/* WARNING: Removing unreachable block (ram,0x0085b200) */

uint FUN_0085b0c0(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  undefined4 *puVar5;
  uint *puVar6;
  undefined4 *puVar7;
  uint *puVar8;
  uint *puVar9;
  undefined4 *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  uint local_74;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00858564(&local_70);
  uVar3 = FUN_00858760(&local_70,param_2);
  if ((uVar3 & 1) != 0) {
    local_74 = (uint)puStack_68;
    FUN_0085c538(param_1 + 0x148,&local_74);
    puVar5 = *(undefined4 **)(param_1 + 0x178);
    puVar7 = *(undefined4 **)(param_1 + 0x180);
    if (puVar5 == puVar7) {
LAB_0085b148:
      if (puVar5 != puVar7) {
        puVar10 = puVar5 + 0x12;
        if (puVar10 != puVar7) {
          do {
            if (puVar10[2] != (uint)puStack_68) {
              *puVar5 = *puVar10;
              uVar15 = *(undefined8 *)(puVar10 + 0xc);
              uVar14 = *(undefined8 *)(puVar10 + 10);
              uVar13 = *(undefined8 *)(puVar10 + 0xe);
              uVar17 = *(undefined8 *)(puVar10 + 4);
              uVar16 = *(undefined8 *)(puVar10 + 2);
              uVar19 = *(undefined8 *)(puVar10 + 8);
              uVar18 = *(undefined8 *)(puVar10 + 6);
              *(undefined8 *)(puVar5 + 0x10) = *(undefined8 *)(puVar10 + 0x10);
              *(undefined8 *)(puVar5 + 0xe) = uVar13;
              *(undefined8 *)(puVar5 + 0xc) = uVar15;
              *(undefined8 *)(puVar5 + 10) = uVar14;
              *(undefined8 *)(puVar5 + 8) = uVar19;
              *(undefined8 *)(puVar5 + 6) = uVar18;
              *(undefined8 *)(puVar5 + 4) = uVar17;
              *(undefined8 *)(puVar5 + 2) = uVar16;
              puVar5 = puVar5 + 0x12;
            }
            puVar10 = puVar10 + 0x12;
          } while (puVar10 != puVar7);
          puVar7 = *(undefined4 **)(param_1 + 0x180);
        }
        if (puVar7 < puVar5) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__vector/vector.h:1170: libc++ Hardening assertion __first <= __last failed: vector::erase(first, last) called with invalid range\n"
                    );
        }
        if (puVar5 != puVar7) {
          uVar11 = (ulong)(((long)puVar5 - (long)puVar7) * 0x11c71c71c71c71c7) >> 3;
          uVar12 = (long)puVar7 * -0x11c71c71c71c71c7 - 8U >> 3;
          if (uVar12 <= uVar11) {
            uVar11 = uVar12;
          }
          if ((1 < uVar11) && ((((int)puVar5 - (int)puVar7 | -(int)puVar7) & 7U) == 0)) {
            uVar11 = uVar11 & 0x1ffffffffffffffe;
            puVar7 = puVar7 + uVar11 * -0x12;
            do {
              uVar11 = uVar11 - 2;
            } while (uVar11 != 0);
          }
          do {
            if (puVar7 == puVar5) {
              *(undefined4 **)(param_1 + 0x180) = puVar5;
              goto LAB_0085b28c;
            }
            puVar7 = puVar7 + -0x12;
          } while (puVar7 != (undefined4 *)0x0);
          goto LAB_0085b478;
        }
      }
    }
    else {
      do {
        if (puVar5[2] == (uint)puStack_68) goto LAB_0085b148;
        puVar5 = puVar5 + 0x12;
      } while (puVar5 != puVar7);
    }
LAB_0085b28c:
    puVar9 = *(uint **)(param_1 + 0x130);
    puVar6 = *(uint **)(param_1 + 0x138);
    if ((long)puVar6 - (long)puVar9 != 0) {
      uVar11 = ((long)puVar6 - (long)puVar9 >> 3) * -0x71c71c71c71c71c7;
      puVar8 = puVar9;
      do {
        uVar12 = uVar11 >> 1;
        puVar9 = puVar8 + uVar12 * 0x12 + 0x12;
        uVar11 = uVar11 + ~uVar12;
        if ((uint)puStack_68 <= puVar8[uVar12 * 0x12]) {
          puVar9 = puVar8;
          uVar11 = uVar12;
        }
        puVar8 = puVar9;
      } while (uVar11 != 0);
    }
    if (puVar9 != puVar6) {
      if (*puVar9 <= (uint)puStack_68) {
        puVar6 = puVar9;
      }
      if (*puVar9 <= (uint)puStack_68 && puVar6 != (uint *)0xfffffffffffffff8) {
        *(undefined1 *)(puVar6 + 4) = 1;
      }
    }
    local_74 = (uint)puStack_68;
    FUN_0085c688(param_1 + 400,&local_74);
    puVar9 = *(uint **)(param_1 + 0xf8);
    lVar2 = (long)*(uint **)(param_1 + 0x100) - (long)puVar9;
    if (lVar2 != 0) {
      uVar11 = lVar2 >> 4;
      puVar6 = puVar9;
      do {
        uVar12 = uVar11 >> 1;
        puVar9 = puVar6 + uVar12 * 4 + 4;
        uVar11 = uVar11 + ~uVar12;
        if ((uint)puStack_68 <= puVar6[uVar12 * 4]) {
          puVar9 = puVar6;
          uVar11 = uVar12;
        }
        puVar6 = puVar9;
      } while (uVar11 != 0);
    }
    if ((puVar9 != *(uint **)(param_1 + 0x100)) && (*puVar9 <= (uint)puStack_68)) {
      plVar4 = *(long **)(puVar9 + 2);
      if (plVar4 == (long *)(param_1 + 0xe0)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/list:1412: libc++ Hardening assertion __p != end() failed: list::erase(iterator) called with a non-dereferenceable iterator\n"
                  );
      }
      plVar1 = (long *)plVar4[1];
      *(long **)(*plVar4 + 8) = plVar1;
      *plVar1 = *plVar4;
      *(long *)(param_1 + 0xf0) = *(long *)(param_1 + 0xf0) + -1;
      if ((plVar4 != (long *)0xfffffffffffffff0) && (plVar4 != (long *)0x0)) {
        operator_delete(plVar4);
        puVar6 = *(uint **)(param_1 + 0x100);
        if (puVar9 == puVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_0061fd88("../../rtc_base/containers/flat_tree.h",0x378,"position != body_.end()",
                       &DAT_001f5fa0);
        }
        puVar8 = puVar9 + 4;
        if (puVar9 + 4 != puVar6) {
          do {
            puVar9 = puVar8;
            puVar9[-4] = *puVar9;
            *(undefined8 *)(puVar9 + -2) = *(undefined8 *)(puVar9 + 2);
            puVar8 = puVar9 + 4;
          } while (puVar9 + 4 != puVar6);
          puVar6 = *(uint **)(param_1 + 0x100);
        }
        uVar12 = (ulong)((long)puVar6 + (-0x10 - ((long)puVar6 << 0x3c))) >> 4;
        uVar11 = (ulong)(((long)puVar9 - (long)puVar6 << 0x3c) - ((long)puVar9 - (long)puVar6)) >> 4
        ;
        if (uVar12 <= uVar11) {
          uVar11 = uVar12;
        }
        if ((1 < uVar11) && ((((int)puVar9 - (int)puVar6 | -(int)puVar6) & 0xfU) == 0)) {
          uVar11 = uVar11 & 0xffffffffffffffe;
          puVar6 = puVar6 + uVar11 * -4;
          do {
            uVar11 = uVar11 - 2;
          } while (uVar11 != 0);
        }
        do {
          if (puVar6 == puVar9) {
            *(uint **)(param_1 + 0x100) = puVar9;
            goto LAB_0085b368;
          }
          puVar6 = puVar6 + -4;
        } while (puVar6 != (uint *)0x0);
      }
LAB_0085b478:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
LAB_0085b368:
    if (*(char *)(param_1 + 0x120) == '\x01') {
      *(undefined1 *)(param_1 + 0x120) = 0;
    }
  }
  FUN_00858588(&local_70);
  return uVar3 & 1;
}


// ===== 0085b4dc  FUN_0085b4dc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0085b4dc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 *local_60;
  undefined8 uStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_007cd680(&local_60);
  uVar2 = FUN_007cd718(&local_60,param_2);
  if ((((uVar2 & 1) != 0) && ((int)local_50 == 0x676f6f67)) && (uStack_58._4_1_ == '\r')) {
    uStack_98 = _UNK_0021fbb0;
    local_a0 = _DAT_0021fba8;
    uStack_88 = _UNK_0021fbc0;
    local_90 = _DAT_0021fbb8;
    uStack_78 = _UNK_0021fbd0;
    local_80 = _DAT_0021fbc8;
    uStack_68 = _UNK_0021fbe0;
    local_70 = _DAT_0021fbd8;
    uStack_d8 = _UNK_0021fb70;
    local_e0 = _DAT_0021fb68;
    uStack_c8 = _UNK_0021fb80;
    local_d0 = _DAT_0021fb78;
    uStack_b8 = _UNK_0021fb90;
    local_c0 = _DAT_0021fb88;
    uStack_a8 = _UNK_0021fba0;
    local_b0 = _DAT_0021fb98;
    uStack_118 = _UNK_0021fb30;
    local_120 = _DAT_0021fb28;
    uStack_108 = _UNK_0021fb40;
    uStack_110 = _DAT_0021fb38;
    uStack_f8 = _UNK_0021fb50;
    local_100 = _DAT_0021fb48;
    uStack_e8 = _UNK_0021fb60;
    local_f0 = _DAT_0021fb58;
    FUN_00862854(&local_120,&local_60);
    uVar3 = FUN_00862910(&local_120);
    if ((uVar3 & 1) != 0) {
      puVar1 = (undefined8 *)(param_3 + 0x140);
      if (*(char *)(param_3 + 0x1c8) == '\x01') {
        *(undefined8 *)(param_3 + 0x1c0) = local_70;
        *(undefined8 *)(param_3 + 0x188) = uStack_a8;
        *(undefined8 *)(param_3 + 0x180) = local_b0;
        *(undefined8 *)(param_3 + 0x198) = uStack_98;
        *(undefined8 *)(param_3 + 400) = local_a0;
        *(undefined8 *)(param_3 + 0x1a8) = uStack_88;
        *(undefined8 *)(param_3 + 0x1a0) = local_90;
        *(undefined8 *)(param_3 + 0x1b8) = uStack_78;
        *(undefined8 *)(param_3 + 0x1b0) = local_80;
        *(undefined8 *)(param_3 + 0x148) = uStack_e8;
        *puVar1 = local_f0;
        *(undefined8 *)(param_3 + 0x158) = uStack_d8;
        *(undefined8 *)(param_3 + 0x150) = local_e0;
        *(undefined8 *)(param_3 + 0x168) = uStack_c8;
        *(undefined8 *)(param_3 + 0x160) = local_d0;
        *(undefined8 *)(param_3 + 0x178) = uStack_b8;
        *(undefined8 *)(param_3 + 0x170) = local_c0;
      }
      else {
        if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        *(undefined8 *)(param_3 + 0x1c0) = local_70;
        *(undefined8 *)(param_3 + 0x188) = uStack_a8;
        *(undefined8 *)(param_3 + 0x180) = local_b0;
        *(undefined8 *)(param_3 + 0x198) = uStack_98;
        *(undefined8 *)(param_3 + 400) = local_a0;
        *(undefined1 *)(param_3 + 0x1c8) = 1;
        *(undefined8 *)(param_3 + 0x1a8) = uStack_88;
        *(undefined8 *)(param_3 + 0x1a0) = local_90;
        *(undefined8 *)(param_3 + 0x1b8) = uStack_78;
        *(undefined8 *)(param_3 + 0x1b0) = local_80;
        *(undefined8 *)(param_3 + 0x148) = uStack_e8;
        *puVar1 = local_f0;
        *(undefined8 *)(param_3 + 0x158) = uStack_d8;
        *(undefined8 *)(param_3 + 0x150) = local_e0;
        *(undefined8 *)(param_3 + 0x168) = uStack_c8;
        *(undefined8 *)(param_3 + 0x160) = local_d0;
        *(undefined8 *)(param_3 + 0x178) = uStack_b8;
        *(undefined8 *)(param_3 + 0x170) = local_c0;
      }
    }
    FUN_007cd6a8(&local_120);
  }
  FUN_007cd6a8(&local_60);
  return uVar2 & 1;
}


// ===== 0085b648  FUN_0085b648 =====

uint FUN_0085b648(long param_1,undefined8 param_2,uint *param_3)

{
  undefined2 *puVar1;
  code *pcVar2;
  uint uVar3;
  long *plVar4;
  undefined2 *puVar5;
  undefined1 *local_80;
  undefined8 uStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined2 *puStack_58;
  undefined2 *puStack_50;
  undefined1 *puStack_48;
  undefined2 *puVar6;
  
  uStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = (undefined2 *)&DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = (undefined2 *)&DAT_aaaaaaaaaaaaaaaa;
  FUN_007ce040(&local_80);
  uVar3 = FUN_007ce1d4(&local_80,param_2);
  if (((uVar3 & 1) != 0) && ((*(byte *)(param_1 + 0x28) & 1) == 0)) {
    if (*(ulong *)(param_1 + 0x38) < 2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x85b75c);
      (*pcVar2)();
    }
    plVar4 = (long *)(param_1 + 0x40);
    if ((*(ulong *)(param_1 + 0x38) & 1) != 0) {
      plVar4 = (long *)*plVar4;
    }
    if (*(int *)plVar4 == uStack_78._4_4_) {
      FUN_0060a120(param_3 + 2,*(undefined8 *)(param_3 + 4),puStack_58,puStack_50,
                   (long)puStack_50 - (long)puStack_58 >> 1);
      puVar1 = puStack_50;
      puVar5 = puStack_58;
      if (puStack_58 != puStack_50) {
        do {
          puVar6 = puVar5 + 1;
          FUN_00857f18(param_1 + 0x1e4,*puVar5);
          puVar5 = puVar6;
        } while (puVar6 != puVar1);
        if (puStack_58 != puStack_50) {
          *param_3 = *param_3 | 0x40;
          *(undefined8 *)(param_1 + 0x1dc) = *(undefined8 *)(param_1 + 0x1e8);
          *(int *)(param_1 + 0x1d0) = *(int *)(param_1 + 0x1d0) + 1;
        }
      }
    }
  }
  FUN_007ce060(&local_80);
  return uVar3 & 1;
}


// ===== 0085b75c  FUN_0085b75c =====

uint FUN_0085b75c(long param_1,undefined8 param_2,uint *param_3)

{
  code *pcVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  int *piVar6;
  int *piVar7;
  int *local_80;
  undefined8 uStack_78;
  undefined2 local_70;
  int local_64;
  undefined1 *local_60;
  undefined8 uStack_58;
  int *local_50;
  int *piStack_48;
  undefined1 *local_40;
  undefined1 uStack_31;
  
  uStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  piStack_48 = (int *)&DAT_aaaaaaaaaaaaaaaa;
  local_50 = (int *)&DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00862e2c(&local_60);
  uVar2 = FUN_00862fec(&local_60,param_2);
  if ((uVar2 & 1) != 0) {
    local_64 = (int)uStack_58;
    if (uStack_58._4_4_ != 0) {
      local_64 = uStack_58._4_4_;
    }
    if (local_50 != piStack_48) {
      if (*(ulong *)(param_1 + 0x38) < 2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x85b8c0);
        (*pcVar1)();
      }
      piVar7 = local_50;
      do {
        piVar6 = (int *)(param_1 + 0x40);
        if ((*(ulong *)(param_1 + 0x38) & 1) != 0) {
          piVar6 = *(int **)(param_1 + 0x40);
        }
        if ((*piVar6 == *piVar7) && (*(long *)(piVar7 + 2) != 0)) {
          local_80 = (int *)CONCAT44(local_80._4_4_,(int)uStack_58);
          puVar3 = (undefined8 *)FUN_0085c27c(param_1 + 0x130,&local_80);
          uVar4 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))(*(long **)(param_1 + 0x10));
          local_80 = &local_64;
          *puVar3 = uVar4;
          lVar5 = FUN_0085fa50(0,puVar3 + 5,puVar3 + 5,&DAT_001f94c3,&local_80,&uStack_31);
          FUN_00863614(&local_80,local_64,*(undefined8 *)(piVar7 + 2),(short)piVar7[4]);
          *(undefined2 *)(lVar5 + 0x38) = local_70;
          *(undefined8 *)(lVar5 + 0x30) = uStack_78;
          *(int **)(lVar5 + 0x28) = local_80;
          *(undefined8 *)(lVar5 + 0x40) = *puVar3;
          *param_3 = *param_3 | 0x100;
          break;
        }
        piVar7 = piVar7 + 6;
      } while (piVar7 != piStack_48);
    }
  }
  FUN_00862e50(&local_60);
  return uVar2 & 1;
}


// ===== 0085b8c0  FUN_0085b8c0 =====

uint FUN_0085b8c0(long param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined4 local_34;
  
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00863770(&local_60);
  uVar1 = FUN_00863930(&local_60,param_2);
  if ((uVar1 & 1) != 0) {
    local_34 = puStack_58._0_4_;
    puVar2 = (undefined8 *)FUN_0085c27c(param_1 + 0x130,&local_34);
    uVar3 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))(*(long **)(param_1 + 0x10));
    *puVar2 = uVar3;
    *param_3 = *param_3 | 0x200;
    if ((undefined1 **)puVar2 != &local_60) {
      FUN_0085d8c0(puVar2 + 2,local_50,puStack_48,
                   ((long)puStack_48 - (long)local_50 >> 3) * -0x5555555555555555);
    }
  }
  FUN_00863794(&local_60);
  return uVar1 & 1;
}


// ===== 0085b998  FUN_0085b998 =====

void FUN_0085b998(long param_1,undefined8 param_2,uint *param_3)

{
  wchar_t *__s;
  code *pcVar1;
  long *plVar2;
  ulong uVar3;
  wchar_t *pwVar4;
  long *plVar5;
  
  plVar2 = (long *)operator_new(0x98);
  FUN_007d1f70();
  uVar3 = FUN_007d2be0(plVar2,param_2);
  if ((uVar3 & 1) == 0) {
    *(long *)(param_1 + 0x1f0) = *(long *)(param_1 + 0x1f0) + 1;
  }
  else {
    uVar3 = *(ulong *)(param_1 + 0x38);
    if (uVar3 < 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x85ba98);
      (*pcVar1)();
    }
    __s = (wchar_t *)(param_1 + 0x40);
    pwVar4 = __s;
    if ((uVar3 & 1) != 0) {
      pwVar4 = *(wchar_t **)__s;
    }
    if (*(wchar_t *)((long)plVar2 + 0xc) != *pwVar4) {
      if ((uVar3 & 1) != 0) {
        __s = *(wchar_t **)__s;
      }
      pwVar4 = wmemchr(__s,*(wchar_t *)((long)plVar2 + 0xc),(long)(uVar3 << 1) >> 2);
      if ((pwVar4 == (wchar_t *)0x0) ||
         (pwVar4 == (wchar_t *)((long)__s + (uVar3 & 0x7ffffffffffffffe) * 2)))
      goto joined_r0x0085ba70;
    }
    plVar5 = *(long **)(param_3 + 0x14);
    *(long **)(param_3 + 0x14) = plVar2;
    *param_3 = *param_3 | 0x100000;
    plVar2 = plVar5;
  }
joined_r0x0085ba70:
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0085ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))(plVar2);
    return;
  }
  return;
}


// ===== 0085ba98  FUN_0085ba98 =====

uint FUN_0085ba98(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  code *pcVar2;
  uint uVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *local_70;
  undefined8 local_68;
  wchar_t *pwStack_60;
  wchar_t *local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  puVar1 = PTR_DAT_00d52cf8;
  local_58 = (wchar_t *)0x0;
  local_50 = 0;
  local_70 = PTR_DAT_00d52cf8 + 0x10;
  local_48 = 0xaaaaaaaa00000000;
  pwStack_60 = (wchar_t *)0x0;
  local_68 = 0;
  uVar3 = FUN_00860588(&local_70);
  if ((uVar3 & 1) != 0) {
    if (local_58 == pwStack_60) {
      uVar3 = 0;
    }
    else {
      uVar7 = *(ulong *)(param_1 + 0x38);
      if (uVar7 < 2) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x85bc40);
        (*pcVar2)();
      }
      pwVar4 = (wchar_t *)(param_1 + 0x40);
      pwVar5 = pwVar4;
      if ((uVar7 & 1) != 0) {
        pwVar5 = *(wchar_t **)pwVar4;
      }
      if (*pwStack_60 != *pwVar5) {
        if ((uVar7 & 1) != 0) {
          pwVar4 = *(wchar_t **)pwVar4;
        }
        pwVar5 = wmemchr(pwVar4,*pwStack_60,(long)(uVar7 << 1) >> 2);
        if ((pwVar5 == (wchar_t *)0x0) ||
           (pwVar5 == (wchar_t *)((long)pwVar4 + (uVar7 & 0x7ffffffffffffffe) * 2)))
        goto LAB_0085bb70;
      }
      FUN_0085cdfc(param_3 + 0x58,&local_70);
    }
  }
LAB_0085bb70:
  local_70 = puVar1 + 0x10;
  if (pwStack_60 != (wchar_t *)0x0) {
    uVar7 = (ulong)(((long)pwStack_60 - (long)local_58) * 0x1555555555555555) >> 3;
    uVar6 = (long)local_58 * -0x1555555555555555 - 8U >> 3;
    if (uVar6 <= uVar7) {
      uVar7 = uVar6;
    }
    pwVar4 = local_58;
    if ((1 < uVar7) && ((((int)pwStack_60 - (int)local_58 | -(int)local_58) & 7U) == 0)) {
      uVar7 = uVar7 & 0x1ffffffffffffffe;
      pwVar4 = local_58 + uVar7 * -6;
      do {
        uVar7 = uVar7 - 2;
      } while (uVar7 != 0);
    }
    while (pwVar4 != pwStack_60) {
      pwVar4 = pwVar4 + -6;
      if (pwVar4 == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    local_58 = pwStack_60;
    operator_delete(pwStack_60);
  }
  return uVar3 & 1;
}


// ===== 0085bc40  FUN_0085bc40 =====

uint FUN_0085bc40(long param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  int *piVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  int *piVar10;
  uint local_ac;
  long local_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  int *local_90;
  int *piStack_88;
  undefined1 *local_80;
  long *local_78;
  int *local_70;
  uint *puStack_68;
  
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  piStack_88 = (int *)&DAT_aaaaaaaaaaaaaaaa;
  local_90 = (int *)&DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00857f6c(&local_a0);
  uVar3 = FUN_0085810c(&local_a0,param_2);
  if ((((uVar3 & 1) != 0) && (local_90 != piStack_88)) &&
     (local_a8 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))(), piVar1 = piStack_88,
     local_90 != piStack_88)) {
    piVar10 = local_90;
    do {
      if (*(ulong *)(param_1 + 0x38) < 2) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x85be40);
        (*pcVar2)();
      }
      piVar6 = (int *)(param_1 + 0x40);
      if ((*(ulong *)(param_1 + 0x38) & 1) != 0) {
        piVar6 = *(int **)(param_1 + 0x40);
      }
      if (*piVar6 == *piVar10) {
        puVar5 = *(uint **)(param_1 + 400);
        local_ac = (uint)puStack_98;
        *(int *)(param_1 + 0x1d4) = *(int *)(param_1 + 0x1d4) + 1;
        local_70 = piVar10 + 1;
        lVar7 = (long)*(uint **)(param_1 + 0x198) - (long)puVar5;
        if (lVar7 != 0) {
          uVar8 = (lVar7 >> 3) * -0x5555555555555555;
          puVar4 = puVar5;
          do {
            uVar9 = uVar8 >> 1;
            puVar5 = puVar4 + uVar9 * 6 + 6;
            uVar8 = uVar8 + ~uVar9;
            if ((uint)puStack_98 <= puVar4[uVar9 * 6]) {
              puVar5 = puVar4;
              uVar8 = uVar9;
            }
            puVar4 = puVar5;
          } while (uVar8 != 0);
        }
        local_78 = &local_a8;
        puStack_68 = &local_ac;
        if ((puVar5 == *(uint **)(param_1 + 0x198)) || ((uint)puStack_98 < *puVar5)) {
          FUN_0085fb60(param_1 + 400,puVar5,&DAT_001f94c3,&puStack_68,&local_78);
        }
        else {
          if (((char)*local_70 == (char)puVar5[4]) ||
             (((local_a8 != 0x7fffffffffffffff &&
               (lVar7 = *(long *)(puVar5 + 2), lVar7 != -0x8000000000000000)) &&
              ((local_a8 == -0x8000000000000000 ||
               ((lVar7 == 0x7fffffffffffffff || (local_a8 - lVar7 < 17000)))))))) goto LAB_0085bd00;
          *(long *)(puVar5 + 2) = local_a8;
          *(char *)(puVar5 + 4) = (char)*local_70;
        }
        *param_3 = *param_3 | 0x80;
      }
LAB_0085bd00:
      piVar10 = piVar10 + 2;
    } while (piVar10 != piVar1);
  }
  FUN_00857f90(&local_a0);
  return uVar3 & 1;
}


// ===== 0085be40  FUN_0085be40 =====

void FUN_0085be40(long param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
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
  FUN_007cf824(&local_60);
  uVar2 = FUN_007cf9bc(&local_60,param_2);
  if ((uVar2 & 1) == 0) {
    FUN_007cf840(&local_60);
    plVar3 = (long *)operator_new(0x18);
    FUN_00857cbc();
    uVar2 = FUN_00857e40(plVar3,param_2);
    if ((uVar2 & 1) == 0) {
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))(plVar3);
      }
      uVar2 = FUN_004022fc();
      if ((uVar2 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../modules/rtp_rtcp/source/rtcp_receiver.cc",0x1e5a,
                     "Unknown PSFB-APP packet.");
      }
      *(long *)(param_1 + 0x1f0) = *(long *)(param_1 + 0x1f0) + 1;
    }
    else {
      plVar4 = *(long **)(param_3 + 0x74);
      *(long **)(param_3 + 0x74) = plVar3;
      *param_3 = *param_3 | 0x2000;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  else {
    *param_3 = *param_3 | 0x10000;
    uVar1 = param_3[0x12];
    if (param_3[0x12] <= (uint)local_50) {
      uVar1 = (uint)local_50;
    }
    param_3[0x12] = uVar1;
    FUN_007cf840(&local_60);
  }
  return;
}


// ===== 0085bf64  FUN_0085bf64 =====

void FUN_0085bf64(long param_1,wchar_t *param_2,long param_3,uint param_4)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  code *pcVar5;
  wchar_t *pwVar6;
  undefined8 uVar7;
  wchar_t *pwVar8;
  long lVar9;
  uint *puVar10;
  undefined8 *puVar11;
  uint *puVar12;
  ulong uVar13;
  ulong uVar14;
  wchar_t *pwVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  wchar_t local_38;
  uint local_34;
  
  pwVar15 = (wchar_t *)(param_1 + 0x40);
  uVar14 = *(ulong *)(param_1 + 0x38);
  pwVar8 = pwVar15;
  if ((uVar14 & 1) != 0) {
    pwVar8 = *(wchar_t **)pwVar15;
  }
  local_34 = param_4;
  pwVar6 = wmemchr(pwVar8,*param_2,(long)(uVar14 << 1) >> 2);
  if ((pwVar6 != (wchar_t *)0x0) &&
     (pwVar6 != (wchar_t *)((long)pwVar8 + (uVar14 & 0x7ffffffffffffffe) * 2))) {
    uVar7 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
    pwVar8 = *(wchar_t **)(param_1 + 0x178);
    *(undefined8 *)(param_1 + 0x1a8) = uVar7;
    local_38 = *param_2;
    lVar9 = (long)*(wchar_t **)(param_1 + 0x180) - (long)pwVar8;
    if (lVar9 != 0) {
      uVar14 = (lVar9 >> 3) * -0x71c71c71c71c71c7;
      pwVar6 = pwVar8;
      do {
        uVar13 = uVar14 >> 1;
        pwVar8 = pwVar6 + uVar13 * 0x12 + 0x12;
        uVar14 = uVar14 + ~uVar13;
        if ((uint)local_38 <= (uint)pwVar6[uVar13 * 0x12]) {
          pwVar8 = pwVar6;
          uVar14 = uVar13;
        }
        pwVar6 = pwVar8;
      } while (uVar14 != 0);
    }
    if ((pwVar8 == *(wchar_t **)(param_1 + 0x180)) || ((uint)local_38 < (uint)*pwVar8)) {
      uStack_88 = 0;
      local_90 = 0;
      uStack_78 = 0;
      local_80 = 0;
      uStack_68 = 0;
      local_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      pwVar8 = (wchar_t *)FUN_0085dcfc(param_1 + 0x178,pwVar8,&local_38,&local_90);
    }
    if ((uint)pwVar8[6] < (uint)param_2[3]) {
      *(undefined8 *)(param_1 + 0x1b0) = *(undefined8 *)(param_1 + 0x1a8);
    }
    uVar14 = (**(code **)(**(long **)(param_1 + 0x10) + 0x18))(*(long **)(param_1 + 0x10),uVar7);
    uVar13 = (uVar14 & 0xffffffff) * 1000000;
    lVar9 = -0x8000000000000000;
    if (uVar14 != 0) {
      lVar9 = (uVar13 >> 0x1f & 1) + (uVar13 >> 0x20) +
              ((uVar14 >> 0x20) + 0x7c558180 & 0xffffffff) * 1000000;
    }
    FUN_007cccd8(pwVar8 + 2,local_34,param_2,lVar9,uVar7);
    if (param_2[5] != L'\0') {
      lVar9 = FUN_00889940((int)(uVar14 >> 0x10) - (param_2[5] + param_2[6]));
      FUN_007ccd10(pwVar8 + 2,lVar9);
      if (*(ulong *)(param_1 + 0x38) < 2) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x85c27c);
        (*pcVar5)();
      }
      if ((*(ulong *)(param_1 + 0x38) & 1) != 0) {
        pwVar15 = *(wchar_t **)pwVar15;
      }
      if (*param_2 == *pwVar15) {
        puVar10 = *(uint **)(param_1 + 0x148);
        lVar4 = (long)*(uint **)(param_1 + 0x150) - (long)puVar10;
        if (lVar4 != 0) {
          uVar14 = lVar4 >> 5;
          puVar12 = puVar10;
          do {
            uVar13 = uVar14 >> 1;
            puVar10 = puVar12 + uVar13 * 8 + 8;
            uVar14 = uVar14 + ~uVar13;
            if (local_34 <= puVar12[uVar13 * 8]) {
              puVar10 = puVar12;
              uVar14 = uVar13;
            }
            puVar12 = puVar10;
          } while (uVar14 != 0);
        }
        if ((puVar10 == *(uint **)(param_1 + 0x150)) || (local_34 < *puVar10)) {
          local_90 = 0;
          uStack_88 = 0;
          local_80 = 0;
          puVar10 = (uint *)FUN_0085e268(param_1 + 0x148,puVar10,&local_34,&local_90);
        }
        lVar2 = *(long *)(puVar10 + 4);
        lVar4 = -0x8000000000000000;
        if (lVar9 != -0x8000000000000000 && lVar2 != -0x8000000000000000) {
          lVar4 = lVar2 + lVar9;
        }
        lVar1 = 0x7fffffffffffffff;
        if (lVar2 != 0x7fffffffffffffff && lVar9 != 0x7fffffffffffffff) {
          lVar1 = lVar4;
        }
        *(long *)(puVar10 + 2) = lVar9;
        *(long *)(puVar10 + 4) = lVar1;
        *(long *)(puVar10 + 6) = *(long *)(puVar10 + 6) + 1;
      }
      if (*(char *)(param_3 + 0x40) == '\x01') {
        *(long *)(param_3 + 0x38) = lVar9;
      }
      else {
        if ((long *)(param_3 + 0x38) == (long *)0x0) goto LAB_0085c254;
        *(long *)(param_3 + 0x38) = lVar9;
        *(undefined1 *)(param_3 + 0x40) = 1;
      }
    }
    puVar3 = *(undefined8 **)(param_3 + 0x28);
    if (puVar3 < *(undefined8 **)(param_3 + 0x30)) {
      if (puVar3 == (undefined8 *)0x0) {
LAB_0085c254:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      uVar16 = *(undefined8 *)(pwVar8 + 0x10);
      uVar7 = *(undefined8 *)(pwVar8 + 0xe);
      uVar17 = *(undefined8 *)(pwVar8 + 10);
      puVar11 = puVar3 + 8;
      uVar19 = *(undefined8 *)(pwVar8 + 4);
      uVar18 = *(undefined8 *)(pwVar8 + 2);
      uVar21 = *(undefined8 *)(pwVar8 + 8);
      uVar20 = *(undefined8 *)(pwVar8 + 6);
      puVar3[5] = *(undefined8 *)(pwVar8 + 0xc);
      puVar3[4] = uVar17;
      puVar3[7] = uVar16;
      puVar3[6] = uVar7;
      puVar3[1] = uVar19;
      *puVar3 = uVar18;
      puVar3[3] = uVar21;
      puVar3[2] = uVar20;
    }
    else {
      puVar11 = (undefined8 *)FUN_0085d7ac(param_3 + 0x20,pwVar8 + 2);
    }
    *(undefined8 **)(param_3 + 0x28) = puVar11;
  }
  return;
}


// ===== 0085c27c  FUN_0085c27c =====

uint * FUN_0085c27c(long *param_1,uint *param_2)

{
  long lVar1;
  uint *puVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  uint *puVar6;
  undefined8 local_70;
  undefined8 uStack_68;
  void *local_60;
  void *local_58;
  undefined8 local_50;
  undefined8 *puStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 **local_28;
  
  puVar2 = (uint *)*param_1;
  lVar1 = param_1[1] - (long)puVar2;
  if (lVar1 != 0) {
    uVar4 = (lVar1 >> 3) * -0x71c71c71c71c71c7;
    puVar6 = puVar2;
    do {
      uVar5 = uVar4 >> 1;
      puVar2 = puVar6 + uVar5 * 0x12 + 0x12;
      uVar4 = uVar4 + ~uVar5;
      if (*param_2 <= puVar6[uVar5 * 0x12]) {
        puVar2 = puVar6;
        uVar4 = uVar5;
      }
      puVar6 = puVar2;
    } while (uVar4 != 0);
  }
  if ((puVar2 == (uint *)param_1[1]) || (*param_2 < *puVar2)) {
    puStack_48 = &local_40;
    uStack_68 = 0;
    local_70 = 0;
    local_58 = (void *)0x0;
    local_60 = (void *)0x0;
    local_50 = 0;
    uStack_38 = 0;
    local_40 = 0;
    puVar2 = (uint *)FUN_0085e6bc(param_1,puVar2,param_2,&local_70);
    local_28 = &puStack_48;
    FUN_0085d600(&local_28,local_40);
    if (local_60 != (void *)0x0) {
      uVar4 = (ulong)(((long)local_60 - (long)local_58) * 0x1555555555555555) >> 3;
      uVar5 = (long)local_58 * -0x1555555555555555 - 8U >> 3;
      if (uVar5 <= uVar4) {
        uVar4 = uVar5;
      }
      pvVar3 = local_58;
      if ((1 < uVar4) && ((((int)local_60 - (int)local_58 | -(int)local_58) & 7U) == 0)) {
        uVar4 = uVar4 & 0x1ffffffffffffffe;
        pvVar3 = (void *)((long)local_58 + uVar4 * -0x18);
        do {
          uVar4 = uVar4 - 2;
        } while (uVar4 != 0);
      }
      while (pvVar3 != local_60) {
        pvVar3 = (void *)((long)pvVar3 + -0x18);
        if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      local_58 = local_60;
      operator_delete(local_60);
    }
  }
  return puVar2 + 2;
}


// ===== 0085c3f0  FUN_0085c3f0 =====

int FUN_0085c3f0(undefined8 *param_1,long param_2,byte *param_3)

{
  void *__src;
  long lVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  void *__dest;
  uint *puVar5;
  uint *puVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_2 + 0x80));
  puVar6 = *(uint **)(param_2 + 0x130);
  lVar1 = (long)*(uint **)(param_2 + 0x138) - (long)puVar6;
  if (lVar1 != 0) {
    uVar8 = (lVar1 >> 3) * -0x71c71c71c71c71c7;
    puVar5 = puVar6;
    do {
      uVar9 = uVar8 >> 1;
      puVar6 = puVar5 + uVar9 * 0x12 + 0x12;
      uVar8 = uVar8 + ~uVar9;
      if (*(uint *)(param_2 + 0xa8) <= puVar5[uVar9 * 0x12]) {
        puVar6 = puVar5;
        uVar8 = uVar9;
      }
      puVar5 = puVar6;
    } while (uVar8 != 0);
  }
  if (((puVar6 == *(uint **)(param_2 + 0x138)) || (*(uint *)(param_2 + 0xa8) < *puVar6)) ||
     (puVar6 == (uint *)0xfffffffffffffff8)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    if (*(ulong *)(param_2 + 0x38) < 2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x85c534);
      (*pcVar2)();
    }
    plVar7 = (long *)(param_2 + 0x40);
    if ((*(ulong *)(param_2 + 0x38) & 1) != 0) {
      plVar7 = (long *)*plVar7;
    }
    bVar3 = FUN_00875df8(puVar6 + 6,*(undefined4 *)plVar7);
    param_1[1] = 0;
    param_1[2] = 0;
    *param_3 = bVar3 & 1;
    *param_1 = 0;
    __src = *(void **)(puVar6 + 6);
    uVar8 = *(long *)(puVar6 + 8) - (long)__src;
    if (uVar8 != 0) {
      if (0xaaaaaaaaaaaaaaa < (ulong)(((long)uVar8 >> 3) * -0x5555555555555555)) {
                    /* WARNING: Subroutine does not return */
        FUN_00857430();
      }
      __dest = operator_new(uVar8);
      *param_1 = __dest;
      param_1[2] = (long)__dest + uVar8;
      memcpy(__dest,__src,uVar8 - 6);
      param_1[1] = (long)__dest + uVar8;
    }
  }
  iVar4 = pthread_mutex_unlock((pthread_mutex_t *)(param_2 + 0x80));
  return iVar4;
}


// ===== 0085c538  FUN_0085c538 =====

long FUN_0085c538(long *param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar3 = (uint *)*param_1;
  puVar4 = (uint *)param_1[1];
  if ((long)puVar4 - (long)puVar3 != 0) {
    uVar6 = (long)puVar4 - (long)puVar3 >> 5;
    puVar2 = puVar3;
    do {
      uVar7 = uVar6 >> 1;
      puVar3 = puVar2 + uVar7 * 8 + 8;
      uVar6 = uVar6 + ~uVar7;
      if (*param_2 <= puVar2[uVar7 * 8]) {
        puVar3 = puVar2;
        uVar6 = uVar7;
      }
      puVar2 = puVar3;
    } while (uVar6 != 0);
  }
  puVar2 = puVar3;
  if (puVar3 == puVar4) {
    lVar5 = 0;
  }
  else {
    if (*puVar3 <= *param_2) {
      puVar2 = puVar3 + 8;
    }
    lVar5 = (long)puVar2 - (long)puVar3;
    if (puVar2 < puVar3) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__vector/vector.h:1170: libc++ Hardening assertion __first <= __last failed: vector::erase(first, last) called with invalid range\n"
                );
    }
  }
  if (puVar3 != puVar2) {
    puVar2 = (uint *)((long)puVar3 + lVar5);
    if (puVar2 != puVar4) {
      do {
        *puVar3 = *puVar2;
        puVar1 = puVar2 + 6;
        uVar9 = *(undefined8 *)(puVar2 + 4);
        uVar8 = *(undefined8 *)(puVar2 + 2);
        puVar2 = puVar2 + 8;
        *(undefined8 *)(puVar3 + 6) = *(undefined8 *)puVar1;
        *(undefined8 *)(puVar3 + 4) = uVar9;
        *(undefined8 *)(puVar3 + 2) = uVar8;
        puVar3 = puVar3 + 8;
      } while (puVar2 != puVar4);
      puVar4 = (uint *)param_1[1];
    }
    uVar7 = (ulong)((long)puVar4 + (-0x20 - ((long)puVar4 << 0x3b))) >> 5;
    uVar6 = (ulong)(((long)puVar3 - (long)puVar4 << 0x3b) - ((long)puVar3 - (long)puVar4)) >> 5;
    if (uVar7 <= uVar6) {
      uVar6 = uVar7;
    }
    if ((1 < uVar6) && ((((int)puVar3 - (int)puVar4 | -(int)puVar4) & 0x1fU) == 0)) {
      uVar6 = uVar6 & 0x7fffffffffffffe;
      puVar4 = puVar4 + uVar6 * -8;
      do {
        uVar6 = uVar6 - 2;
      } while (uVar6 != 0);
    }
    while (puVar4 != puVar3) {
      puVar4 = puVar4 + -8;
      if (puVar4 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    param_1[1] = (long)puVar3;
  }
  return lVar5 >> 5;
}


// ===== 0085c688  FUN_0085c688 =====

long FUN_0085c688(long *param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  puVar3 = (uint *)*param_1;
  puVar4 = (uint *)param_1[1];
  if ((long)puVar4 - (long)puVar3 != 0) {
    uVar6 = ((long)puVar4 - (long)puVar3 >> 3) * -0x5555555555555555;
    puVar2 = puVar3;
    do {
      uVar7 = uVar6 >> 1;
      puVar3 = puVar2 + uVar7 * 6 + 6;
      uVar6 = uVar6 + ~uVar7;
      if (*param_2 <= puVar2[uVar7 * 6]) {
        puVar3 = puVar2;
        uVar6 = uVar7;
      }
      puVar2 = puVar3;
    } while (uVar6 != 0);
  }
  puVar2 = puVar3;
  if (puVar3 == puVar4) {
    lVar5 = 0;
  }
  else {
    if (*puVar3 <= *param_2) {
      puVar2 = puVar3 + 6;
    }
    lVar5 = (long)puVar2 - (long)puVar3;
    if (puVar2 < puVar3) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__vector/vector.h:1170: libc++ Hardening assertion __first <= __last failed: vector::erase(first, last) called with invalid range\n"
                );
    }
  }
  if (puVar3 != puVar2) {
    puVar2 = (uint *)((long)puVar3 + lVar5);
    if (puVar2 != puVar4) {
      do {
        *puVar3 = *puVar2;
        puVar1 = puVar2 + 4;
        uVar8 = *(undefined8 *)(puVar2 + 2);
        puVar2 = puVar2 + 6;
        *(char *)(puVar3 + 4) = (char)*puVar1;
        *(undefined8 *)(puVar3 + 2) = uVar8;
        puVar3 = puVar3 + 6;
      } while (puVar2 != puVar4);
      puVar4 = (uint *)param_1[1];
    }
    uVar6 = (ulong)(((long)puVar3 - (long)puVar4) * 0x1555555555555555) >> 3;
    uVar7 = (long)puVar4 * -0x1555555555555555 - 8U >> 3;
    if (uVar7 <= uVar6) {
      uVar6 = uVar7;
    }
    if ((1 < uVar6) && ((((int)puVar3 - (int)puVar4 | -(int)puVar4) & 7U) == 0)) {
      uVar6 = uVar6 & 0x1ffffffffffffffe;
      puVar4 = puVar4 + uVar6 * -6;
      do {
        uVar6 = uVar6 - 2;
      } while (uVar6 != 0);
    }
    while (puVar4 != puVar3) {
      puVar4 = puVar4 + -6;
      if (puVar4 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    param_1[1] = (long)puVar3;
  }
  return (lVar5 >> 3) * -0x5555555555555555;
}


// ===== 0085c804  FUN_0085c804 =====

void FUN_0085c804(long param_1,uint param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 extraout_var;
  undefined8 uVar2;
  uint *puVar3;
  uint *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  uint local_4c;
  undefined8 local_48;
  
  plVar8 = *(long **)(param_1 + 0x10);
  uVar1 = *(undefined4 *)(param_3 + 2);
  local_4c = param_2;
  uVar2 = (**(code **)(*plVar8 + 0x10))(plVar8);
  (**(code **)(*plVar8 + 0x18))(plVar8,uVar2);
  puVar3 = *(uint **)(param_1 + 0xf8);
  lVar5 = (long)*(uint **)(param_1 + 0x100) - (long)puVar3;
  if (lVar5 != 0) {
    uVar6 = lVar5 >> 4;
    puVar4 = puVar3;
    do {
      uVar7 = uVar6 >> 1;
      puVar3 = puVar4 + uVar7 * 4 + 4;
      uVar6 = uVar6 + ~uVar7;
      if (param_2 <= puVar4[uVar7 * 4]) {
        puVar3 = puVar4;
        uVar6 = uVar7;
      }
      puVar4 = puVar3;
    } while (uVar6 != 0);
  }
  if ((puVar3 == *(uint **)(param_1 + 0x100)) || (param_2 < *puVar3)) {
    if (*(ulong *)(param_1 + 0xf0) < 300) {
      plVar8 = (long *)operator_new(0x20);
      if ((plVar8 == (long *)0x0) || (plVar8 == (long *)0xfffffffffffffff0)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      lVar5 = *(long *)(param_1 + 0xe0);
      *(uint *)(plVar8 + 2) = param_2;
      *(undefined4 *)((long)plVar8 + 0x14) = uVar1;
      *(undefined4 *)(plVar8 + 3) = extraout_var;
      *plVar8 = lVar5;
      plVar8[1] = param_1 + 0xe0;
      *(long **)(lVar5 + 8) = plVar8;
      puVar3 = *(uint **)(param_1 + 0xf8);
      *(long **)(param_1 + 0xe0) = plVar8;
      *(long *)(param_1 + 0xf0) = *(long *)(param_1 + 0xf0) + 1;
      lVar5 = (long)*(uint **)(param_1 + 0x100) - (long)puVar3;
      if (lVar5 != 0) {
        uVar6 = lVar5 >> 4;
        puVar4 = puVar3;
        do {
          uVar7 = uVar6 >> 1;
          puVar3 = puVar4 + uVar7 * 4 + 4;
          uVar6 = uVar6 + ~uVar7;
          if (param_2 <= puVar4[uVar7 * 4]) {
            puVar3 = puVar4;
            uVar6 = uVar7;
          }
          puVar4 = puVar3;
        } while (uVar6 != 0);
      }
      if ((puVar3 == *(uint **)(param_1 + 0x100)) || (param_2 < *puVar3)) {
        local_48 = 0;
        puVar3 = (uint *)FUN_0085f1b8((long *)(param_1 + 0xf8),puVar3,&local_4c,&local_48);
      }
      *(long **)(puVar3 + 2) = plVar8;
    }
    else {
      uVar6 = FUN_004022fc();
      if ((uVar6 & 1) == 0) {
        FUN_00623bb0(&DAT_001fcbd8,"../../modules/rtp_rtcp/source/rtcp_receiver.cc",0x1982,
                     "Discarding received RRTR for ssrc ",param_2,
                     ", reached maximum number of stored RRTRs.");
        return;
      }
    }
  }
  else {
    *(undefined4 *)(*(long *)(puVar3 + 2) + 0x14) = uVar1;
    *(undefined4 *)(*(long *)(puVar3 + 2) + 0x18) = extraout_var;
  }
  return;
}


// ===== 0085c9ec  FUN_0085c9ec =====

void FUN_0085c9ec(long param_1,uint param_2,wchar_t *param_3)

{
  wchar_t *__s;
  long lVar1;
  wchar_t wVar2;
  wchar_t wVar3;
  long lVar4;
  int extraout_var;
  wchar_t *pwVar5;
  undefined8 uVar6;
  long lVar7;
  uint *puVar8;
  uint *puVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  uint local_24;
  
  uVar13 = *(ulong *)(param_1 + 0x38);
  __s = (wchar_t *)(param_1 + 0x40);
  if ((uVar13 & 1) != 0) {
    __s = *(wchar_t **)(param_1 + 0x40);
  }
  local_24 = param_2;
  pwVar5 = wmemchr(__s,*param_3,(long)(uVar13 << 1) >> 2);
  if (((pwVar5 != (wchar_t *)0x0) &&
      (pwVar5 != (wchar_t *)((long)__s + (uVar13 & 0x7ffffffffffffffe) * 2))) &&
     (*(char *)(param_1 + 0x110) == '\x01')) {
    wVar2 = param_3[1];
    if (wVar2 == L'\0') {
      puVar8 = *(uint **)(param_1 + 0x160);
      lVar7 = (long)*(uint **)(param_1 + 0x168) - (long)puVar8;
      if (lVar7 != 0) {
        uVar13 = (lVar7 >> 3) * -0x3333333333333333;
        puVar9 = puVar8;
        do {
          uVar11 = uVar13 >> 1;
          puVar8 = puVar9 + uVar11 * 10 + 10;
          uVar13 = uVar13 + ~uVar11;
          if (param_2 <= puVar9[uVar11 * 10]) {
            puVar8 = puVar9;
            uVar13 = uVar11;
          }
          puVar9 = puVar8;
        } while (uVar13 != 0);
      }
      if (puVar8 == *(uint **)(param_1 + 0x168)) {
        return;
      }
      if (param_2 < *puVar8) {
        return;
      }
      if ((char)puVar8[4] != '\x01') {
        return;
      }
      *(undefined1 *)(puVar8 + 4) = 0;
      return;
    }
    plVar12 = *(long **)(param_1 + 0x10);
    wVar3 = param_3[2];
    uVar6 = (**(code **)(*plVar12 + 0x10))(plVar12);
    (**(code **)(*plVar12 + 0x18))(plVar12,uVar6);
    lVar7 = FUN_00889940(extraout_var - (wVar3 + wVar2));
    if (*(char *)(param_1 + 0x120) == '\x01') {
      *(long *)(param_1 + 0x118) = lVar7;
    }
    else {
      if ((long *)(param_1 + 0x118) == (long *)0x0) goto LAB_0085cc30;
      *(long *)(param_1 + 0x118) = lVar7;
      *(undefined1 *)(param_1 + 0x120) = 1;
    }
    puVar8 = *(uint **)(param_1 + 0x160);
    lVar4 = (long)*(uint **)(param_1 + 0x168) - (long)puVar8;
    if (lVar4 != 0) {
      uVar13 = (lVar4 >> 3) * -0x3333333333333333;
      puVar9 = puVar8;
      do {
        uVar11 = uVar13 >> 1;
        puVar8 = puVar9 + uVar11 * 10 + 10;
        uVar13 = uVar13 + ~uVar11;
        if (param_2 <= puVar9[uVar11 * 10]) {
          puVar8 = puVar9;
          uVar13 = uVar11;
        }
        puVar9 = puVar8;
      } while (uVar13 != 0);
    }
    if ((puVar8 == *(uint **)(param_1 + 0x168)) || (param_2 < *puVar8)) {
      uStack_58 = 0;
      local_60 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      puVar8 = (uint *)FUN_0085f5a8(param_1 + 0x160,puVar8,&local_24,&local_60);
    }
    if ((char)puVar8[4] == '\x01') {
      *(long *)(puVar8 + 2) = lVar7;
    }
    else {
      if (puVar8 + 2 == (uint *)0x0) {
LAB_0085cc30:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      *(long *)(puVar8 + 2) = lVar7;
      *(undefined1 *)(puVar8 + 4) = 1;
    }
    lVar10 = *(long *)(puVar8 + 6);
    lVar4 = -0x8000000000000000;
    if (lVar7 != -0x8000000000000000 && lVar10 != -0x8000000000000000) {
      lVar4 = lVar10 + lVar7;
    }
    lVar1 = 0x7fffffffffffffff;
    if (lVar10 != 0x7fffffffffffffff && lVar7 != 0x7fffffffffffffff) {
      lVar1 = lVar4;
    }
    *(long *)(puVar8 + 6) = lVar1;
    puVar8[8] = puVar8[8] + 1;
  }
  return;
}


// ===== 0085cc44  FUN_0085cc44 =====

void FUN_0085cc44(long param_1,int param_2,undefined8 param_3,long param_4)

{
  byte *pbVar1;
  long *plVar2;
  ulong uVar3;
  ulong unaff_x19;
  byte *pbVar4;
  undefined1 uStack_139;
  char *local_138;
  undefined8 uStack_130;
  undefined1 *local_128;
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
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  
  if (param_2 == *(int *)(param_1 + 0xa8)) {
    puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
    local_a0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
    local_b0 = &DAT_aaaaaaaaaaaaaaaa;
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
    puStack_118 = &DAT_aaaaaaaaaaaaaaaa;
    local_120 = &DAT_aaaaaaaaaaaaaaaa;
    local_80 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_007cbe28(&local_120);
    plVar2 = (long *)FUN_00861d50(param_3);
    pbVar4 = (byte *)*plVar2;
    pbVar1 = (byte *)plVar2[1];
    if (pbVar4 != pbVar1) {
      do {
        if ((*pbVar4 < 5) && (pbVar4[1] < 4)) {
          FUN_007cbed8(&local_120,*pbVar4,pbVar4[1],*(int *)(pbVar4 + 4) * 1000);
        }
        else {
          uVar3 = FUN_004022fc();
          if ((uVar3 & 1) == 0) {
            unaff_x19 = unaff_x19 & 0xffffffff00000000;
            local_138 = "../../modules/rtp_rtcp/source/rtcp_receiver.cc";
            uStack_130 = 0x1b0a;
            local_128 = &uStack_139;
            FUN_00623bb0(unaff_x19,&DAT_001f4ea6,"../../modules/rtp_rtcp/source/rtcp_receiver.cc",
                         0x1b0a,"Invalid layer in XR target bitrate pack: spatial index ",*pbVar4,
                         ", temporal index ",pbVar4[1],", dropping.");
          }
        }
        pbVar4 = pbVar4 + 8;
      } while (pbVar4 != pbVar1);
    }
    if (*(char *)(param_4 + 0x138) == '\x01') {
      *(undefined1 *)(param_4 + 0x138) = 0;
    }
    if ((undefined8 *)(param_4 + 0x90) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *(undefined1 **)(param_4 + 0x118) = puStack_98;
    *(undefined1 **)(param_4 + 0x110) = local_a0;
    *(undefined1 **)(param_4 + 0x128) = puStack_88;
    *(undefined1 **)(param_4 + 0x120) = puStack_90;
    *(undefined1 **)(param_4 + 0x130) = local_80;
    *(undefined1 *)(param_4 + 0x138) = 1;
    *(undefined1 **)(param_4 + 0xd8) = puStack_d8;
    *(undefined1 **)(param_4 + 0xd0) = local_e0;
    *(undefined1 **)(param_4 + 0xe8) = puStack_c8;
    *(undefined1 **)(param_4 + 0xe0) = local_d0;
    *(undefined1 **)(param_4 + 0xf8) = puStack_b8;
    *(undefined1 **)(param_4 + 0xf0) = local_c0;
    *(undefined1 **)(param_4 + 0x108) = puStack_a8;
    *(undefined1 **)(param_4 + 0x100) = local_b0;
    *(undefined1 **)(param_4 + 0x98) = puStack_118;
    *(undefined8 *)(param_4 + 0x90) = local_120;
    *(undefined1 **)(param_4 + 0xa8) = puStack_108;
    *(undefined1 **)(param_4 + 0xa0) = local_110;
    *(undefined1 **)(param_4 + 0xb8) = puStack_f8;
    *(undefined1 **)(param_4 + 0xb0) = local_100;
    *(undefined1 **)(param_4 + 200) = puStack_e8;
    *(undefined1 **)(param_4 + 0xc0) = local_f0;
  }
  return;
}


// ===== 0085cdfc  FUN_0085cdfc =====

long * FUN_0085cdfc(long *param_1,long param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  void *pvVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  
  puVar2 = PTR_DAT_00d52cf8;
  if ((char)param_1[6] == '\x01') {
    pvVar3 = (void *)param_1[2];
    *param_1 = (long)(PTR_DAT_00d52cf8 + 0x10);
    if (pvVar3 != (void *)0x0) {
      pvVar4 = (void *)param_1[3];
      uVar5 = (ulong)(((long)pvVar3 - (long)pvVar4) * 0x1555555555555555) >> 3;
      uVar6 = (long)pvVar4 * -0x1555555555555555 - 8U >> 3;
      if (uVar6 <= uVar5) {
        uVar5 = uVar6;
      }
      if ((1 < uVar5) && ((((int)pvVar3 - (int)pvVar4 | -(int)pvVar4) & 7U) == 0)) {
        uVar5 = uVar5 & 0x1ffffffffffffffe;
        pvVar4 = (void *)((long)pvVar4 + uVar5 * -0x18);
        do {
          uVar5 = uVar5 - 2;
        } while (uVar5 != 0);
      }
      while (pvVar4 != pvVar3) {
        pvVar4 = (void *)((long)pvVar4 + -0x18);
        if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      param_1[3] = (long)pvVar3;
      operator_delete(pvVar3);
    }
    *(undefined1 *)(param_1 + 6) = 0;
  }
  if (param_1 != (long *)0x0) {
    *param_1 = (long)&PTR_FUN_00d37c18;
    uVar1 = *(undefined4 *)(param_2 + 8);
    *param_1 = (long)&PTR_FUN_00d37be8;
    *(undefined4 *)(param_1 + 1) = uVar1;
    uVar1 = *(undefined4 *)(param_2 + 0xc);
    *param_1 = (long)(puVar2 + 0x10);
    param_1[3] = 0;
    param_1[4] = 0;
    *(undefined4 *)((long)param_1 + 0xc) = uVar1;
    param_1[2] = 0;
    param_1[2] = *(long *)(param_2 + 0x10);
    param_1[3] = *(long *)(param_2 + 0x18);
    param_1[4] = *(long *)(param_2 + 0x20);
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 0x28);
    *(undefined1 *)(param_1 + 6) = 1;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0085cf70  FUN_0085cf70 =====

void FUN_0085cf70(long param_1)

{
  undefined8 uVar1;
  void *pvVar2;
  undefined1 *puVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  void *local_68;
  void *local_60;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_0085d208(&local_68);
  FUN_0087560c(&local_50,&local_68);
  if (local_68 == (void *)0x0) {
LAB_0085d03c:
    if (((local_50 != puStack_48) && (*(long *)(param_1 + 0x50) != 0)) &&
       (uVar4 = FUN_00875e34(&local_50), uVar4 < 0x7fffffffffffffff)) {
      plVar6 = *(long **)(param_1 + 0x50);
      uVar1 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
      (**(code **)(*plVar6 + 0x20))(plVar6,uVar1,uVar4);
    }
    local_70 = local_40;
    puStack_78 = puStack_48;
    puStack_48 = (undefined1 *)0x0;
    local_40 = (undefined1 *)0x0;
    local_80 = local_50;
    local_50 = (undefined1 *)0x0;
    (**(code **)**(undefined8 **)(param_1 + 0x30))(*(undefined8 **)(param_1 + 0x30),&local_80);
    if (local_80 == (undefined1 *)0x0) {
LAB_0085d150:
      if (local_50 == (undefined1 *)0x0) {
        return;
      }
      uVar4 = (ulong)(((long)local_50 - (long)puStack_48) * 0x1555555555555555) >> 3;
      uVar5 = (long)puStack_48 * -0x1555555555555555 - 8U >> 3;
      if (uVar5 <= uVar4) {
        uVar4 = uVar5;
      }
      puVar3 = puStack_48;
      if ((1 < uVar4) && ((((int)local_50 - (int)puStack_48 | -(int)puStack_48) & 7U) == 0)) {
        uVar4 = uVar4 & 0x1ffffffffffffffe;
        puVar3 = puStack_48 + uVar4 * -0x18;
        do {
          uVar4 = uVar4 - 2;
        } while (uVar4 != 0);
      }
      do {
        if (puVar3 == local_50) {
          puStack_48 = local_50;
          operator_delete(local_50);
          return;
        }
        puVar3 = puVar3 + -0x18;
      } while (puVar3 != (undefined1 *)0x0);
    }
    else {
      uVar4 = (ulong)(((long)local_80 - (long)puStack_78) * 0x1555555555555555) >> 3;
      uVar5 = (long)puStack_78 * -0x1555555555555555 - 8U >> 3;
      if (uVar5 <= uVar4) {
        uVar4 = uVar5;
      }
      puVar3 = puStack_78;
      if ((1 < uVar4) && ((((int)local_80 - (int)puStack_78 | -(int)puStack_78) & 7U) == 0)) {
        uVar4 = uVar4 & 0x1ffffffffffffffe;
        puVar3 = puStack_78 + uVar4 * -0x18;
        do {
          uVar4 = uVar4 - 2;
        } while (uVar4 != 0);
      }
      do {
        if (puVar3 == local_80) {
          puStack_78 = local_80;
          operator_delete(local_80);
          goto LAB_0085d150;
        }
        puVar3 = puVar3 + -0x18;
      } while (puVar3 != (undefined1 *)0x0);
    }
  }
  else {
    uVar4 = (ulong)(((long)local_68 - (long)local_60) * 0x1555555555555555) >> 3;
    uVar5 = (long)local_60 * -0x1555555555555555 - 8U >> 3;
    if (uVar5 <= uVar4) {
      uVar4 = uVar5;
    }
    pvVar2 = local_60;
    if ((1 < uVar4) && ((((int)local_68 - (int)local_60 | -(int)local_60) & 7U) == 0)) {
      uVar4 = uVar4 & 0x1ffffffffffffffe;
      pvVar2 = (void *)((long)local_60 + uVar4 * -0x18);
      do {
        uVar4 = uVar4 - 2;
      } while (uVar4 != 0);
    }
    do {
      if (pvVar2 == local_68) {
        local_60 = local_68;
        operator_delete(local_68);
        goto LAB_0085d03c;
      }
      pvVar2 = (void *)((long)pvVar2 + -0x18);
    } while (pvVar2 != (void *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 0085d208  FUN_0085d208 =====

int FUN_0085d208(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  void *pvVar7;
  void *pvVar8;
  size_t __n;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_2 + 0x80));
  plVar5 = *(long **)(param_2 + 0x10);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  lVar6 = (**(code **)(*plVar5 + 0x10))();
  lVar1 = *(long *)(param_2 + 0x130);
  lVar2 = *(long *)(param_2 + 0x138);
  do {
    if (lVar1 == lVar2) {
      iVar4 = pthread_mutex_unlock((pthread_mutex_t *)(param_2 + 0x80));
      return iVar4;
    }
    plVar5 = *(long **)(lVar1 + 0x30);
    while (plVar5 != (long *)(lVar1 + 0x38)) {
      if (((lVar6 == 0x7fffffffffffffff) || (lVar9 = plVar5[8], lVar9 == -0x8000000000000000)) ||
         ((lVar6 != -0x8000000000000000 &&
          ((lVar9 != 0x7fffffffffffffff && (25000000 < lVar6 - lVar9)))))) {
        plVar15 = (long *)plVar5[1];
        plVar13 = plVar5;
        if ((long *)plVar5[1] == (long *)0x0) {
          do {
            plVar14 = (long *)plVar13[2];
            bVar3 = plVar13 != (long *)*plVar14;
            plVar13 = plVar14;
          } while (bVar3);
        }
        else {
          do {
            plVar14 = plVar15;
            plVar15 = (long *)*plVar14;
          } while ((long *)*plVar14 != (long *)0x0);
        }
        if (*(long **)(lVar1 + 0x30) == plVar5) {
          *(long **)(lVar1 + 0x30) = plVar14;
        }
        *(long *)(lVar1 + 0x40) = *(long *)(lVar1 + 0x40) + -1;
        FUN_005d5d48(*(undefined8 *)(lVar1 + 0x38),plVar5);
        if (plVar5 == (long *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        operator_delete(plVar5);
        plVar5 = plVar14;
      }
      else {
        plVar15 = (long *)param_1[1];
        if (plVar15 < (long *)param_1[2]) {
          if (plVar15 == (long *)0x0) {
LAB_0085d4c0:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          lVar10 = plVar5[6];
          lVar9 = plVar5[5];
          plVar15[2] = plVar5[7];
          plVar15[1] = lVar10;
          *plVar15 = lVar9;
        }
        else {
          lVar9 = (long)plVar15 - *param_1;
          uVar11 = (lVar9 >> 3) * -0x5555555555555555 + 1;
          if (0xaaaaaaaaaaaaaaa < uVar11) {
                    /* WARNING: Subroutine does not return */
            FUN_00857430();
          }
          lVar10 = param_1[2] - *param_1 >> 3;
          uVar12 = lVar10 * 0x5555555555555556;
          if (uVar12 < uVar11 || uVar12 - uVar11 == 0) {
            uVar12 = uVar11;
          }
          if (0x555555555555554 < (ulong)(lVar10 * -0x5555555555555555)) {
            uVar12 = 0xaaaaaaaaaaaaaaa;
          }
          if (uVar12 == 0) {
            pvVar7 = (void *)0x0;
          }
          else {
            if (0xaaaaaaaaaaaaaaa < uVar12) {
                    /* WARNING: Subroutine does not return */
              FUN_005d55a4();
            }
            pvVar7 = operator_new(uVar12 * 0x18);
          }
          plVar15 = (long *)((long)pvVar7 + lVar9);
          if (plVar15 == (long *)0x0) goto LAB_0085d4c0;
          lVar10 = plVar5[6];
          lVar9 = plVar5[5];
          plVar15[2] = plVar5[7];
          plVar15[1] = lVar10;
          *plVar15 = lVar9;
          __n = param_1[1] - *param_1;
          memcpy((void *)((long)plVar15 - __n),(void *)*param_1,__n);
          pvVar8 = (void *)*param_1;
          *param_1 = (long)plVar15 - __n;
          param_1[2] = (long)((long)pvVar7 + uVar12 * 0x18);
          if (pvVar8 != (void *)0x0) {
            operator_delete(pvVar8);
          }
        }
        param_1[1] = (long)(plVar15 + 3);
        plVar15 = (long *)plVar5[1];
        plVar13 = plVar5;
        if ((long *)plVar5[1] == (long *)0x0) {
          do {
            plVar5 = (long *)plVar13[2];
            bVar3 = plVar13 != (long *)*plVar5;
            plVar13 = plVar5;
          } while (bVar3);
        }
        else {
          do {
            plVar5 = plVar15;
            plVar15 = (long *)*plVar5;
          } while ((long *)*plVar5 != (long *)0x0);
        }
      }
    }
    lVar1 = lVar1 + 0x48;
  } while( true );
}


// ===== 0085d4dc  FUN_0085d4dc =====

void FUN_0085d4dc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  long local_58;
  
  lVar1 = *(long *)(param_1 + 8);
  while( true ) {
    lVar2 = lVar1;
    if (param_2 == lVar2) {
      *(long *)(param_1 + 8) = param_2;
      return;
    }
    lVar1 = lVar2 + -0x48;
    if (lVar1 == 0) break;
    local_58 = lVar2 + -0x18;
    FUN_0085d600(&local_58,*(undefined8 *)(lVar2 + -0x10));
    pvVar3 = *(void **)(lVar2 + -0x30);
    if (pvVar3 != (void *)0x0) {
      pvVar4 = *(void **)(lVar2 + -0x28);
      uVar6 = (long)pvVar4 * -0x1555555555555555 - 8U >> 3;
      uVar5 = (ulong)(((long)pvVar3 - (long)pvVar4) * 0x1555555555555555) >> 3;
      if (uVar6 <= uVar5) {
        uVar5 = uVar6;
      }
      if ((1 < uVar5) && ((((int)pvVar3 - (int)pvVar4 | -(int)pvVar4) & 7U) == 0)) {
        uVar5 = uVar5 & 0x1ffffffffffffffe;
        pvVar4 = (void *)((long)pvVar4 + uVar5 * -0x18);
        do {
          uVar5 = uVar5 - 2;
        } while (uVar5 != 0);
      }
      while (pvVar4 != pvVar3) {
        pvVar4 = (void *)((long)pvVar4 + -0x18);
        if (pvVar4 == (void *)0x0) goto LAB_0085d5ec;
      }
      *(void **)(lVar2 + -0x28) = pvVar3;
      operator_delete(pvVar3);
    }
  }
LAB_0085d5ec:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 0085d600  FUN_0085d600 =====

void FUN_0085d600(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_0085d600(param_1,*param_2);
      if (param_2 == (undefined8 *)0xffffffffffffffe0) {
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


// ===== 0085d674  FUN_0085d674 =====

undefined4 * FUN_0085d674(long *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  void *pvVar3;
  void *pvVar4;
  size_t __n;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  void *__dest;
  undefined4 *puVar8;
  
  puVar8 = (undefined4 *)(param_1[1] - *param_1);
  uVar5 = ((long)puVar8 >> 2) * -0x5555555555555555 + 1;
  if (0x1555555555555555 < uVar5) {
    FUN_008570ec();
LAB_0085d7a8:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  lVar6 = param_1[2] - *param_1 >> 2;
  uVar7 = lVar6 * 0x5555555555555556;
  if (uVar7 < uVar5 || uVar7 - uVar5 == 0) {
    uVar7 = uVar5;
  }
  if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar6 * -0x5555555555555555)) {
    uVar7 = 0x1555555555555555;
  }
  if (uVar7 == 0) {
    pvVar3 = (void *)0x0;
  }
  else {
    if (0x1555555555555555 < uVar7) goto LAB_0085d7a8;
    pvVar3 = operator_new(uVar7 * 0xc);
    puVar8 = (undefined4 *)((long)pvVar3 + (long)puVar8);
  }
  if (puVar8 != (undefined4 *)0x0) {
    uVar1 = *param_3;
    uVar2 = *param_4;
    *puVar8 = *param_2;
    puVar8[1] = uVar1;
    puVar8[2] = uVar2;
    __n = param_1[1] - *param_1;
    __dest = (void *)((long)puVar8 - __n);
    memcpy(__dest,(void *)*param_1,__n);
    pvVar4 = (void *)*param_1;
    *param_1 = (long)__dest;
    param_1[1] = (long)(puVar8 + 3);
    param_1[2] = (long)((long)pvVar3 + uVar7 * 0xc);
    if (pvVar4 != (void *)0x0) {
      operator_delete(pvVar4);
    }
    return puVar8 + 3;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0085d7ac  FUN_0085d7ac =====

undefined8 * FUN_0085d7ac(long *param_1,undefined8 *param_2)

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
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  puVar6 = (undefined8 *)(param_1[1] - *param_1);
  uVar1 = ((long)puVar6 >> 6) + 1;
  if (uVar1 >> 0x3a != 0) {
    FUN_0085d8a8();
LAB_0085d8a4:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  uVar4 = param_1[2] - *param_1;
  uVar5 = (long)uVar4 >> 5;
  if (uVar5 <= uVar1) {
    uVar5 = uVar1;
  }
  if (0x7fffffffffffffbf < uVar4) {
    uVar5 = 0x3ffffffffffffff;
  }
  if (uVar5 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (uVar5 >> 0x3a != 0) goto LAB_0085d8a4;
    pvVar2 = operator_new(uVar5 << 6);
    puVar6 = (undefined8 *)((long)pvVar2 + (long)puVar6);
  }
  if (puVar6 != (undefined8 *)0x0) {
    uVar9 = param_2[4];
    uVar8 = param_2[7];
    uVar7 = param_2[6];
    uVar11 = param_2[1];
    uVar10 = *param_2;
    uVar13 = param_2[3];
    uVar12 = param_2[2];
    puVar6[5] = param_2[5];
    puVar6[4] = uVar9;
    puVar6[7] = uVar8;
    puVar6[6] = uVar7;
    puVar6[1] = uVar11;
    *puVar6 = uVar10;
    puVar6[3] = uVar13;
    puVar6[2] = uVar12;
    __n = param_1[1] - *param_1;
    __dest = (void *)((long)puVar6 - __n);
    memcpy(__dest,(void *)*param_1,__n);
    pvVar3 = (void *)*param_1;
    *param_1 = (long)__dest;
    param_1[1] = (long)(puVar6 + 8);
    param_1[2] = (long)((long)pvVar2 + uVar5 * 0x40);
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    return puVar6 + 8;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0085d8a8  FUN_0085d8a8 =====

void FUN_0085d8a8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 0085d8c0  FUN_0085d8c0 =====

void FUN_0085d8c0(undefined8 *param_1,void *param_2,long param_3,ulong param_4)

{
  void *pvVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  void *__dest;
  
  lVar2 = param_1[2];
  __dest = (void *)*param_1;
  if ((ulong)((lVar2 - (long)__dest >> 3) * -0x5555555555555555) < param_4) {
    if (__dest == (void *)0x0) {
LAB_0085dab0:
      if (param_4 < 0xaaaaaaaaaaaaaab) {
        uVar4 = (lVar2 >> 3) * 0x5555555555555556;
        if (uVar4 < param_4 || uVar4 - param_4 == 0) {
          uVar4 = param_4;
        }
        if (0x555555555555554 < (ulong)((lVar2 >> 3) * -0x5555555555555555)) {
          uVar4 = 0xaaaaaaaaaaaaaaa;
        }
        if (uVar4 < 0xaaaaaaaaaaaaaab) {
          pvVar1 = operator_new(uVar4 * 0x18);
          param_3 = param_3 - (long)param_2;
          *param_1 = pvVar1;
          param_1[1] = pvVar1;
          param_1[2] = (void *)((long)pvVar1 + uVar4 * 0x18);
          if (param_3 != 0) {
            memcpy(pvVar1,param_2,param_3 - 6);
          }
          pvVar1 = (void *)((long)pvVar1 + param_3);
          goto LAB_0085db30;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_00857430();
    }
    pvVar3 = (void *)param_1[1];
    uVar4 = (ulong)(((long)__dest - (long)pvVar3) * 0x1555555555555555) >> 3;
    uVar5 = (long)pvVar3 * -0x1555555555555555 - 8U >> 3;
    if (uVar5 <= uVar4) {
      uVar4 = uVar5;
    }
    if ((1 < uVar4) && ((((int)__dest - (int)pvVar3 | -(int)pvVar3) & 7U) == 0)) {
      uVar4 = uVar4 & 0x1ffffffffffffffe;
      pvVar3 = (void *)((long)pvVar3 + uVar4 * -0x18);
      do {
        uVar4 = uVar4 - 2;
      } while (uVar4 != 0);
    }
    do {
      if (pvVar3 == __dest) {
        param_1[1] = __dest;
        operator_delete(__dest);
        lVar2 = 0;
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        goto LAB_0085dab0;
      }
      pvVar3 = (void *)((long)pvVar3 + -0x18);
    } while (pvVar3 != (void *)0x0);
  }
  else {
    pvVar3 = (void *)param_1[1];
    lVar2 = (long)pvVar3 - (long)__dest;
    if ((ulong)((lVar2 >> 3) * -0x5555555555555555) < param_4) {
      if (pvVar3 != __dest) {
        memmove(__dest,param_2,lVar2 - 6);
        pvVar3 = (void *)param_1[1];
      }
      param_3 = param_3 - ((long)param_2 + lVar2);
      if (param_3 != 0) {
        memmove(pvVar3,(void *)((long)param_2 + lVar2),param_3 - 6);
      }
      pvVar1 = (void *)((long)pvVar3 + param_3);
LAB_0085db30:
      param_1[1] = pvVar1;
      return;
    }
    lVar2 = param_3 - (long)param_2;
    if (lVar2 != 0) {
      memmove(__dest,param_2,lVar2 - 6);
      pvVar3 = (void *)param_1[1];
    }
    uVar4 = (ulong)(((long)__dest + (param_3 - ((long)pvVar3 + (long)param_2))) * 0x1555555555555555
                   ) >> 3;
    uVar5 = (long)pvVar3 * -0x1555555555555555 - 8U >> 3;
    if (uVar5 <= uVar4) {
      uVar4 = uVar5;
    }
    pvVar1 = (void *)((long)__dest + lVar2);
    if ((1 < uVar4) &&
       (((((int)__dest + (int)param_3) - ((int)pvVar3 + (int)param_2) | -(int)pvVar3) & 7U) == 0)) {
      uVar4 = uVar4 & 0x1ffffffffffffffe;
      pvVar3 = (void *)((long)pvVar3 + uVar4 * -0x18);
      do {
        uVar4 = uVar4 - 2;
      } while (uVar4 != 0);
    }
    do {
      if (pvVar3 == pvVar1) goto LAB_0085db30;
      pvVar3 = (void *)((long)pvVar3 + -0x18);
    } while (pvVar3 != (void *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 0085db54  FUN_0085db54 =====

undefined4 * FUN_0085db54(ulong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  ulong *puVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong uVar14;
  ulong uVar15;
  
  puVar13 = param_1 + 1;
  uVar12 = *param_1;
  if ((uVar12 & 1) == 0) {
    uVar11 = 8;
  }
  else {
    if ((param_1[2] >> 0x3d & 3) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    puVar13 = (ulong *)param_1[1];
    uVar11 = param_1[2] << 1;
  }
  uVar14 = uVar12 >> 1;
  pvVar3 = operator_new(uVar11 << 2);
  puVar1 = (undefined4 *)((long)pvVar3 + uVar14 * 4);
  if (puVar1 == (undefined4 *)0x0) {
LAB_0085dccc:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  *puVar1 = *param_2;
  if (uVar14 != 0) {
    uVar7 = uVar14 - 1;
    uVar15 = (ulong)-(long)pvVar3 >> 2;
    if (uVar7 <= (ulong)-(long)pvVar3 >> 2) {
      uVar15 = uVar7;
    }
    if (uVar15 < 0x20) {
      lVar4 = 0;
    }
    else {
      lVar4 = 0;
      uVar10 = (ulong)-(long)pvVar3 >> 2;
      if (uVar7 <= uVar10) {
        uVar10 = uVar7;
      }
      if (((((-(long)pvVar3 & 3U) == 0) && (pvVar3 <= (void *)((long)pvVar3 + uVar10 * 4))) &&
          (puVar13 <= (ulong *)((long)puVar13 + uVar10 * 4))) &&
         (0x1f < (ulong)((long)pvVar3 - (long)puVar13))) {
        puVar9 = (ulong *)((long)pvVar3 + 0x10);
        uVar7 = uVar15 + 1 & 7;
        uVar10 = 8;
        if (uVar7 != 0) {
          uVar10 = uVar7;
        }
        puVar8 = puVar13 + 2;
        lVar4 = (uVar15 + 1) - uVar10;
        puVar13 = (ulong *)((long)puVar13 + lVar4 * 4);
        lVar5 = lVar4;
        do {
          puVar2 = puVar8 + -1;
          uVar15 = puVar8[-2];
          uVar10 = puVar8[1];
          uVar7 = *puVar8;
          lVar5 = lVar5 + -8;
          puVar8 = puVar8 + 4;
          puVar9[-1] = *puVar2;
          puVar9[-2] = uVar15;
          puVar9[1] = uVar10;
          *puVar9 = uVar7;
          puVar9 = puVar9 + 4;
        } while (lVar5 != 0);
      }
    }
    lVar5 = uVar14 - lVar4;
    puVar6 = (undefined4 *)((long)pvVar3 + lVar4 * 4);
    do {
      if (puVar6 == (undefined4 *)0x0) goto LAB_0085dccc;
      lVar5 = lVar5 + -1;
      *puVar6 = (int)*puVar13;
      puVar6 = puVar6 + 1;
      puVar13 = (ulong *)((long)puVar13 + 4);
    } while (lVar5 != 0);
  }
  if ((uVar12 & 1) != 0) {
    operator_delete((void *)param_1[1]);
    uVar12 = *param_1;
  }
  param_1[1] = (ulong)pvVar3;
  param_1[2] = uVar11;
  *param_1 = (uVar12 | 1) + 2;
  return puVar1;
}


// ===== 0085dce4  FUN_0085dce4 =====

void FUN_0085dce4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 0085dcfc  FUN_0085dcfc =====

undefined8 * FUN_0085dcfc(long *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  long lVar4;
  void *pvVar5;
  size_t __n;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  void *__dest;
  undefined8 *puVar10;
  long lVar11;
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
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 local_7c;
  undefined8 uStack_74;
  undefined8 local_6c;
  undefined8 uStack_64;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < (undefined8 *)param_1[2]) {
    puVar10 = param_2;
    if (param_2 == puVar2) {
      if (param_2 == (undefined8 *)0x0) {
LAB_0085dfa8:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      *(undefined4 *)puVar2 = *param_3;
      uVar16 = param_4[5];
      uVar14 = param_4[4];
      uVar12 = param_4[6];
      uVar13 = param_4[1];
      uVar18 = *param_4;
      uVar17 = param_4[3];
      uVar15 = param_4[2];
      puVar2[8] = param_4[7];
      puVar2[7] = uVar12;
      puVar2[6] = uVar16;
      puVar2[5] = uVar14;
      puVar2[4] = uVar17;
      puVar2[3] = uVar15;
      puVar2[2] = uVar13;
      puVar2[1] = uVar18;
      param_1[1] = (long)(puVar2 + 9);
    }
    else {
      uVar14 = param_4[1];
      uVar12 = *param_4;
      uVar18 = param_4[3];
      uVar16 = param_4[2];
      uVar3 = *param_3;
      uStack_98._4_4_ = (undefined4)uVar14;
      uStack_90._0_4_ = (undefined4)((ulong)uVar14 >> 0x20);
      uStack_9c = (undefined4)uVar12;
      uStack_98._0_4_ = (undefined4)((ulong)uVar12 >> 0x20);
      uStack_74 = param_4[5];
      local_7c = param_4[4];
      uStack_64 = param_4[7];
      local_6c = param_4[6];
      uStack_88._4_4_ = (undefined4)uVar18;
      uStack_80 = (undefined4)((ulong)uVar18 >> 0x20);
      uStack_90._4_4_ = (undefined4)uVar16;
      uStack_88._0_4_ = (undefined4)((ulong)uVar16 >> 0x20);
      puVar1 = puVar2;
      for (puVar7 = puVar2 + -9; puVar7 < puVar2; puVar7 = puVar7 + 9) {
        if (puVar1 == (undefined8 *)0x0) goto LAB_0085dfa8;
        uVar17 = puVar7[4];
        uVar15 = puVar7[7];
        uVar13 = puVar7[6];
        uVar20 = puVar7[1];
        uVar19 = *puVar7;
        uVar22 = puVar7[3];
        uVar21 = puVar7[2];
        puVar1[5] = puVar7[5];
        puVar1[4] = uVar17;
        puVar1[7] = uVar15;
        puVar1[6] = uVar13;
        puVar1[1] = uVar20;
        *puVar1 = uVar19;
        puVar1[3] = uVar22;
        puVar1[2] = uVar21;
        puVar1[8] = puVar7[8];
        puVar1 = puVar1 + 9;
      }
      param_1[1] = (long)puVar1;
      if (puVar2 != param_2 + 9) {
        lVar11 = 0;
        do {
          *(undefined4 *)((long)puVar2 + lVar11 + -0x48) =
               *(undefined4 *)((long)puVar2 + lVar11 + -0x90);
          *(undefined8 *)((long)puVar2 + lVar11 + -0x18) =
               *(undefined8 *)((long)puVar2 + lVar11 + -0x60);
          *(undefined8 *)((long)puVar2 + lVar11 + -0x20) =
               *(undefined8 *)((long)puVar2 + lVar11 + -0x68);
          *(undefined8 *)((long)puVar2 + lVar11 + -8) =
               *(undefined8 *)((long)puVar2 + lVar11 + -0x50);
          *(undefined8 *)((long)puVar2 + lVar11 + -0x10) =
               *(undefined8 *)((long)puVar2 + lVar11 + -0x58);
          lVar6 = lVar11 + -0x90;
          *(undefined8 *)((long)puVar2 + lVar11 + -0x38) =
               *(undefined8 *)((long)puVar2 + lVar11 + -0x80);
          *(undefined8 *)((long)puVar2 + lVar11 + -0x40) =
               *(undefined8 *)((long)puVar2 + lVar11 + -0x88);
          *(undefined8 *)((long)puVar2 + lVar11 + -0x28) =
               *(undefined8 *)((long)puVar2 + lVar11 + -0x70);
          *(undefined8 *)((long)puVar2 + lVar11 + -0x30) =
               *(undefined8 *)((long)puVar2 + lVar11 + -0x78);
          lVar11 = lVar11 + -0x48;
        } while ((undefined8 *)((long)puVar2 + lVar6) != param_2);
      }
      *(undefined4 *)param_2 = uVar3;
      param_2[2] = uVar14;
      param_2[1] = uVar12;
      param_2[4] = uVar18;
      param_2[3] = uVar16;
      param_2[6] = uStack_74;
      param_2[5] = local_7c;
      param_2[8] = uStack_64;
      param_2[7] = local_6c;
    }
  }
  else {
    lVar11 = *param_1;
    uVar8 = ((long)puVar2 - lVar11 >> 3) * -0x71c71c71c71c71c7 + 1;
    if (0x38e38e38e38e38e < uVar8) {
      FUN_0085e250();
LAB_0085dfc4:
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    local_a0 = 0;
    uStack_9c = 0;
    lVar6 = param_1[2] - lVar11 >> 3;
    uVar9 = lVar6 * 0x1c71c71c71c71c72;
    if (uVar9 < uVar8 || uVar9 - uVar8 == 0) {
      uVar9 = uVar8;
    }
    if (0x1c71c71c71c71c6 < (ulong)(lVar6 * -0x71c71c71c71c71c7)) {
      uVar9 = 0x38e38e38e38e38e;
    }
    if (uVar9 == 0) {
      pvVar5 = (void *)0x0;
    }
    else {
      if (0x38e38e38e38e38e < uVar9) goto LAB_0085dfc4;
      pvVar5 = operator_new(uVar9 * 0x48);
      local_a0 = SUB84(pvVar5,0);
      uStack_9c = (undefined4)((ulong)pvVar5 >> 0x20);
    }
    uStack_88 = (void *)((long)pvVar5 + uVar9 * 0x48);
    uStack_98 = (undefined8 *)((long)pvVar5 + ((long)param_2 - lVar11));
    uStack_90 = uStack_98;
    FUN_0085dfc8(&local_a0,param_3,param_4);
    puVar10 = uStack_98;
    memcpy(uStack_90,param_2,param_1[1] - (long)param_2);
    lVar11 = param_1[1];
    param_1[1] = (long)param_2;
    __n = (long)param_2 - *param_1;
    __dest = (void *)((long)uStack_98 - __n);
    uStack_90 = (undefined8 *)((long)uStack_90 + (lVar11 - (long)param_2));
    memcpy(__dest,(void *)*param_1,__n);
    pvVar5 = (void *)*param_1;
    lVar11 = param_1[2];
    *param_1 = (long)__dest;
    param_1[2] = (long)uStack_88;
    param_1[1] = (long)uStack_90;
    local_a0 = SUB84(pvVar5,0);
    uStack_9c = (undefined4)((ulong)pvVar5 >> 0x20);
    uStack_88._0_4_ = (undefined4)lVar11;
    uStack_88._4_4_ = (undefined4)((ulong)lVar11 >> 0x20);
    uStack_98._0_4_ = local_a0;
    uStack_98._4_4_ = uStack_9c;
    uStack_90._0_4_ = local_a0;
    uStack_90._4_4_ = uStack_9c;
    if (pvVar5 != (void *)0x0) {
      operator_delete(pvVar5);
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return puVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0085dfc8  FUN_0085dfc8 =====

void FUN_0085dfc8(undefined8 *param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  puVar11 = (undefined8 *)param_1[2];
  if ((undefined8 *)param_1[3] == puVar11) {
    pvVar2 = (void *)*param_1;
    puVar12 = (undefined8 *)param_1[1];
    if ((long)puVar12 - (long)pvVar2 == 0) {
      uVar5 = ((long)param_1[3] - (long)pvVar2 >> 3) * 0x1c71c71c71c71c72;
      if (puVar11 == puVar12) {
        uVar5 = 1;
      }
      if (0x38e38e38e38e38e < uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      pvVar3 = operator_new(uVar5 * 0x48);
      lVar4 = (long)puVar11 - (long)puVar12;
      puVar6 = (undefined8 *)((long)pvVar3 + (uVar5 >> 2) * 0x48);
      puVar7 = puVar6;
      if (lVar4 != 0) {
        puVar7 = (undefined8 *)((long)puVar6 + lVar4);
        puVar9 = puVar6;
        puVar10 = puVar12;
        do {
          if (puVar9 == (undefined8 *)0x0) goto LAB_0085e238;
          uVar15 = puVar10[4];
          uVar14 = puVar10[7];
          uVar13 = puVar10[6];
          lVar4 = lVar4 + -0x48;
          uVar17 = puVar10[1];
          uVar16 = *puVar10;
          uVar19 = puVar10[3];
          uVar18 = puVar10[2];
          puVar9[5] = puVar10[5];
          puVar9[4] = uVar15;
          puVar9[7] = uVar14;
          puVar9[6] = uVar13;
          puVar9[1] = uVar17;
          *puVar9 = uVar16;
          puVar9[3] = uVar19;
          puVar9[2] = uVar18;
          puVar1 = puVar10 + 8;
          puVar10 = puVar10 + 9;
          puVar9[8] = *puVar1;
          puVar9 = puVar9 + 9;
        } while (lVar4 != 0);
      }
      *param_1 = pvVar3;
      param_1[1] = puVar6;
      uVar8 = (ulong)(((long)puVar12 - (long)puVar11) * 0x11c71c71c71c71c7) >> 3;
      param_1[2] = puVar7;
      param_1[3] = (void *)((long)pvVar3 + uVar5 * 0x48);
      uVar5 = (long)puVar11 * -0x11c71c71c71c71c7 - 8U >> 3;
      if (uVar5 <= uVar8) {
        uVar8 = uVar5;
      }
      puVar7 = puVar11;
      if ((1 < uVar8) && ((((int)puVar12 - (int)puVar11 | -(int)puVar11) & 7U) == 0)) {
        uVar8 = uVar8 & 0x1ffffffffffffffe;
        puVar7 = puVar11 + uVar8 * -9;
        do {
          uVar8 = uVar8 - 2;
        } while (uVar8 != 0);
      }
      while (puVar7 != puVar12) {
        puVar7 = puVar7 + -9;
        if (puVar7 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      if (puVar12 != (undefined8 *)0x0) {
        operator_delete(pvVar2);
      }
    }
    else {
      lVar4 = (((long)puVar12 - (long)pvVar2 >> 3) * -0x71c71c71c71c71c7 + 1) / 2;
      puVar7 = puVar12 + lVar4 * -9;
      if (puVar12 != puVar11) {
        do {
          *(undefined4 *)puVar7 = *(undefined4 *)puVar12;
          puVar6 = puVar12 + 8;
          uVar13 = puVar12[7];
          uVar15 = puVar12[6];
          uVar14 = puVar12[5];
          uVar17 = puVar12[2];
          uVar16 = puVar12[1];
          uVar19 = puVar12[4];
          uVar18 = puVar12[3];
          puVar12 = puVar12 + 9;
          puVar7[8] = *puVar6;
          puVar7[7] = uVar13;
          puVar7[6] = uVar15;
          puVar7[5] = uVar14;
          puVar7[4] = uVar19;
          puVar7[3] = uVar18;
          puVar7[2] = uVar17;
          puVar7[1] = uVar16;
          puVar7 = puVar7 + 9;
        } while (puVar12 != puVar11);
        puVar12 = (undefined8 *)param_1[1];
      }
      param_1[1] = puVar12 + lVar4 * -9;
      param_1[2] = puVar7;
      puVar11 = puVar7;
    }
  }
  if (puVar11 != (undefined8 *)0x0) {
    *(undefined4 *)puVar11 = *param_2;
    uVar15 = param_3[5];
    uVar14 = param_3[4];
    uVar13 = param_3[6];
    uVar17 = param_3[1];
    uVar16 = *param_3;
    uVar19 = param_3[3];
    uVar18 = param_3[2];
    puVar11[8] = param_3[7];
    puVar11[7] = uVar13;
    puVar11[6] = uVar15;
    puVar11[5] = uVar14;
    puVar11[4] = uVar19;
    puVar11[3] = uVar18;
    puVar11[2] = uVar17;
    puVar11[1] = uVar16;
    param_1[2] = puVar11 + 9;
    return;
  }
LAB_0085e238:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0085e250  FUN_0085e250 =====

void FUN_0085e250(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 0085e268  FUN_0085e268 =====

undefined8 * FUN_0085e268(long *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  void *pvVar7;
  size_t __n;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  void *__dest;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < (undefined8 *)param_1[2]) {
    puVar12 = param_2;
    if (param_2 == puVar2) {
      if (param_2 == (undefined8 *)0x0) {
LAB_0085e498:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      *(undefined4 *)puVar2 = *param_3;
      uVar14 = param_4[1];
      uVar11 = *param_4;
      puVar2[3] = param_4[2];
      puVar2[2] = uVar14;
      puVar2[1] = uVar11;
      param_1[1] = (long)(puVar2 + 4);
    }
    else {
      uVar11 = param_4[2];
      uVar16 = param_4[1];
      uVar14 = *param_4;
      uVar3 = *param_3;
      uStack_68._4_4_ = (undefined4)uVar11;
      uStack_60._0_4_ = (undefined4)((ulong)uVar11 >> 0x20);
      uStack_70._4_4_ = (undefined4)uVar16;
      uStack_68._0_4_ = (undefined4)((ulong)uVar16 >> 0x20);
      uStack_74 = (undefined4)uVar14;
      uStack_70._0_4_ = (undefined4)((ulong)uVar14 >> 0x20);
      puVar6 = puVar2;
      for (puVar9 = puVar2 + -4; puVar9 < puVar2; puVar9 = puVar9 + 4) {
        if (puVar6 == (undefined8 *)0x0) goto LAB_0085e498;
        uVar18 = *puVar9;
        uVar17 = puVar9[3];
        uVar15 = puVar9[2];
        puVar6[1] = puVar9[1];
        *puVar6 = uVar18;
        puVar6[3] = uVar17;
        puVar6[2] = uVar15;
        puVar6 = puVar6 + 4;
      }
      param_1[1] = (long)puVar6;
      if (puVar2 != param_2 + 4) {
        lVar13 = 0;
        do {
          lVar5 = lVar13 + -0x40;
          *(undefined4 *)((long)puVar2 + lVar13 + -0x20) =
               *(undefined4 *)((long)puVar2 + lVar13 + -0x40);
          *(undefined8 *)((long)puVar2 + lVar13 + -8) =
               *(undefined8 *)((long)puVar2 + lVar13 + -0x28);
          *(undefined8 *)((long)puVar2 + lVar13 + -0x10) =
               *(undefined8 *)((long)puVar2 + lVar13 + -0x30);
          *(undefined8 *)((long)puVar2 + lVar13 + -0x18) =
               *(undefined8 *)((long)puVar2 + lVar13 + -0x38);
          lVar13 = lVar13 + -0x20;
        } while ((undefined8 *)((long)puVar2 + lVar5) != param_2);
      }
      *(undefined4 *)param_2 = uVar3;
      param_2[2] = uVar16;
      param_2[1] = uVar14;
      param_2[3] = uVar11;
    }
  }
  else {
    lVar13 = *param_1;
    uVar1 = ((long)puVar2 - lVar13 >> 5) + 1;
    if (uVar1 >> 0x3b != 0) {
      FUN_0085e6a4();
LAB_0085e4b4:
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    uVar8 = param_1[2] - lVar13;
    local_78 = 0;
    uStack_74 = 0;
    uVar10 = (long)uVar8 >> 4;
    if (uVar10 <= uVar1) {
      uVar10 = uVar1;
    }
    if (0x7fffffffffffffdf < uVar8) {
      uVar10 = 0x7ffffffffffffff;
    }
    if (uVar10 == 0) {
      pvVar7 = (void *)0x0;
    }
    else {
      if (uVar10 >> 0x3b != 0) goto LAB_0085e4b4;
      pvVar7 = operator_new(uVar10 << 5);
      local_78 = SUB84(pvVar7,0);
      uStack_74 = (undefined4)((ulong)pvVar7 >> 0x20);
    }
    uStack_60 = (void *)((long)pvVar7 + uVar10 * 0x20);
    uStack_70 = (undefined8 *)((long)pvVar7 + ((long)param_2 - lVar13));
    uStack_68 = uStack_70;
    FUN_0085e4b8(&local_78,param_3,param_4);
    puVar12 = uStack_70;
    memcpy(uStack_68,param_2,param_1[1] - (long)param_2);
    lVar13 = param_1[1];
    param_1[1] = (long)param_2;
    __n = (long)param_2 - *param_1;
    __dest = (void *)((long)uStack_70 - __n);
    uStack_68 = (undefined8 *)((long)uStack_68 + (lVar13 - (long)param_2));
    memcpy(__dest,(void *)*param_1,__n);
    pvVar7 = (void *)*param_1;
    lVar13 = param_1[2];
    *param_1 = (long)__dest;
    param_1[2] = (long)uStack_60;
    param_1[1] = (long)uStack_68;
    local_78 = SUB84(pvVar7,0);
    uStack_74 = (undefined4)((ulong)pvVar7 >> 0x20);
    uStack_60._0_4_ = (undefined4)lVar13;
    uStack_60._4_4_ = (undefined4)((ulong)lVar13 >> 0x20);
    uStack_70._0_4_ = local_78;
    uStack_70._4_4_ = uStack_74;
    uStack_68._0_4_ = local_78;
    uStack_68._4_4_ = uStack_74;
    if (pvVar7 != (void *)0x0) {
      operator_delete(pvVar7);
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return puVar12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0085e4b8  FUN_0085e4b8 =====

void FUN_0085e4b8(undefined8 *param_1,undefined4 *param_2,undefined8 *param_3)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar11 = (undefined8 *)param_1[2];
  if ((undefined8 *)param_1[3] == puVar11) {
    pvVar1 = (void *)*param_1;
    puVar12 = (undefined8 *)param_1[1];
    if ((long)puVar12 - (long)pvVar1 == 0) {
      uVar3 = (long)param_1[3] - (long)pvVar1 >> 4;
      if (puVar11 == puVar12) {
        uVar3 = 1;
      }
      if (uVar3 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      pvVar2 = operator_new(uVar3 * 0x20);
      lVar5 = (long)puVar11 - (long)puVar12;
      puVar4 = (undefined8 *)((long)pvVar2 + (uVar3 >> 2) * 0x20);
      puVar6 = puVar4;
      if (lVar5 != 0) {
        puVar6 = (undefined8 *)((long)puVar4 + lVar5);
        puVar8 = puVar4;
        puVar10 = puVar12;
        do {
          if (puVar8 == (undefined8 *)0x0) goto LAB_0085e68c;
          uVar15 = *puVar10;
          uVar14 = puVar10[3];
          uVar13 = puVar10[2];
          lVar5 = lVar5 + -0x20;
          puVar8[1] = puVar10[1];
          *puVar8 = uVar15;
          puVar8[3] = uVar14;
          puVar8[2] = uVar13;
          puVar8 = puVar8 + 4;
          puVar10 = puVar10 + 4;
        } while (lVar5 != 0);
      }
      *param_1 = pvVar2;
      param_1[1] = puVar4;
      uVar9 = (ulong)((long)puVar11 + (-0x20 - ((long)puVar11 << 0x3b))) >> 5;
      uVar7 = (ulong)(((long)puVar12 - (long)puVar11 << 0x3b) - ((long)puVar12 - (long)puVar11)) >>
              5;
      param_1[2] = puVar6;
      param_1[3] = (void *)((long)pvVar2 + uVar3 * 0x20);
      if (uVar9 <= uVar7) {
        uVar7 = uVar9;
      }
      puVar4 = puVar11;
      if ((1 < uVar7) && ((((int)puVar12 - (int)puVar11 | -(int)puVar11) & 0x1fU) == 0)) {
        uVar7 = uVar7 & 0x7fffffffffffffe;
        puVar4 = puVar11 + uVar7 * -4;
        do {
          uVar7 = uVar7 - 2;
        } while (uVar7 != 0);
      }
      while (puVar4 != puVar12) {
        puVar4 = puVar4 + -4;
        if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      if (puVar12 != (undefined8 *)0x0) {
        operator_delete(pvVar1);
      }
    }
    else {
      lVar5 = (((long)puVar12 - (long)pvVar1 >> 5) + 1) / 2;
      puVar4 = puVar12 + lVar5 * -4;
      if (puVar12 != puVar11) {
        do {
          *(undefined4 *)puVar4 = *(undefined4 *)puVar12;
          puVar6 = puVar12 + 3;
          uVar14 = puVar12[2];
          uVar13 = puVar12[1];
          puVar12 = puVar12 + 4;
          puVar4[3] = *puVar6;
          puVar4[2] = uVar14;
          puVar4[1] = uVar13;
          puVar4 = puVar4 + 4;
        } while (puVar12 != puVar11);
        puVar12 = (undefined8 *)param_1[1];
      }
      param_1[1] = puVar12 + lVar5 * -4;
      param_1[2] = puVar4;
      puVar11 = puVar4;
    }
  }
  if (puVar11 != (undefined8 *)0x0) {
    *(undefined4 *)puVar11 = *param_2;
    uVar14 = param_3[1];
    uVar13 = *param_3;
    puVar11[3] = param_3[2];
    puVar11[2] = uVar14;
    puVar11[1] = uVar13;
    param_1[2] = puVar11 + 4;
    return;
  }
LAB_0085e68c:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0085e6a4  FUN_0085e6a4 =====

void FUN_0085e6a4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 0085e6bc  FUN_0085e6bc =====

undefined4 * FUN_0085e6bc(long *param_1,undefined4 *param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined1 uVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined4 *puVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined8 local_a0;
  undefined4 *puStack_98;
  undefined4 *local_90;
  void *pvStack_88;
  void *pvStack_80;
  undefined8 local_78;
  long *local_70;
  long local_68;
  long lStack_60;
  long *local_58;
  long **local_48;
  
  puVar9 = (undefined4 *)param_1[1];
  if (puVar9 < (undefined4 *)param_1[2]) {
    puVar13 = param_2;
    if (param_2 == puVar9) {
      if (param_2 == (undefined4 *)0x0) {
LAB_0085eadc:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      *puVar9 = *param_3;
      uVar4 = *param_4;
      uVar2 = *(undefined1 *)(param_4 + 1);
      *(undefined8 *)(puVar9 + 8) = 0;
      *(undefined8 *)(puVar9 + 10) = 0;
      *(undefined8 *)(puVar9 + 6) = 0;
      *(undefined1 *)(puVar9 + 4) = uVar2;
      *(undefined8 *)(puVar9 + 2) = uVar4;
      *(undefined8 *)(puVar9 + 6) = param_4[2];
      *(undefined8 *)(puVar9 + 8) = param_4[3];
      *(undefined8 *)(puVar9 + 10) = param_4[4];
      param_4[2] = 0;
      param_4[3] = 0;
      param_4[4] = 0;
      *(undefined8 *)(puVar9 + 0xc) = param_4[5];
      plVar10 = param_4 + 6;
      lVar8 = *plVar10;
      plVar11 = (long *)(puVar9 + 0xe);
      *plVar11 = lVar8;
      lVar12 = param_4[7];
      *(long *)(puVar9 + 0x10) = lVar12;
      if (lVar12 == 0) {
        *(long **)(puVar9 + 0xc) = plVar11;
      }
      else {
        *(long **)(lVar8 + 0x10) = plVar11;
        param_4[5] = plVar10;
        *plVar10 = 0;
        param_4[7] = 0;
      }
      param_1[1] = (long)(puVar9 + 0x12);
    }
    else {
      puStack_98 = (undefined4 *)*param_4;
      local_a0 = (void *)CONCAT44(0xaaaaaaaa,*param_3);
      local_78 = param_4[4];
      plVar10 = (long *)param_4[5];
      pvStack_80 = (void *)param_4[3];
      pvStack_88 = (void *)param_4[2];
      local_90 = (undefined4 *)CONCAT71(0xaaaaaaaaaaaaaa,*(undefined1 *)(param_4 + 1));
      plVar11 = param_4 + 6;
      local_68 = *plVar11;
      lStack_60 = param_4[7];
      local_70 = &local_68;
      param_4[2] = 0;
      param_4[3] = 0;
      param_4[4] = 0;
      if (lStack_60 != 0) {
        *(long **)(local_68 + 0x10) = local_70;
        param_4[5] = plVar11;
        *plVar11 = 0;
        param_4[7] = 0;
        local_70 = plVar10;
      }
      puVar5 = (undefined4 *)param_1[1];
      puVar14 = puVar5 + -0x12;
      puVar9 = puVar5;
      local_58 = param_1;
      if (puVar14 < puVar5) {
        lVar8 = 0;
        do {
          if ((long)puVar5 + lVar8 == 0) goto LAB_0085eadc;
          puVar9 = (undefined4 *)((long)puVar5 + lVar8);
          *(undefined8 *)(puVar9 + 8) = 0;
          *(undefined8 *)(puVar9 + 10) = 0;
          *puVar9 = puVar9[-0x12];
          *(undefined1 *)(puVar9 + 4) = *(undefined1 *)(puVar9 + -0xe);
          uVar4 = *(undefined8 *)(puVar9 + -0xc);
          uVar1 = *(undefined8 *)(puVar9 + -10);
          *(undefined8 *)(puVar9 + 2) = *(undefined8 *)(puVar9 + -0x10);
          *(undefined8 *)(puVar9 + -0xc) = 0;
          *(undefined8 *)(puVar9 + -10) = 0;
          *(undefined8 *)(puVar9 + 6) = 0;
          *(undefined8 *)(puVar9 + 8) = uVar1;
          *(undefined8 *)(puVar9 + 6) = uVar4;
          *(undefined8 *)(puVar9 + 10) = *(undefined8 *)(puVar9 + -8);
          *(undefined8 *)(puVar9 + 0xc) = *(undefined8 *)(puVar9 + -6);
          plVar10 = (long *)((long)puVar5 + lVar8 + -0x10);
          lVar12 = *plVar10;
          *(undefined8 *)(puVar9 + -8) = 0;
          plVar11 = (long *)((long)puVar5 + lVar8 + 0x38);
          *plVar11 = lVar12;
          *(long *)(puVar9 + 0x10) = *(long *)(puVar9 + -2);
          if (*(long *)(puVar9 + -2) == 0) {
            *(long **)(puVar9 + 0xc) = plVar11;
          }
          else {
            *(long **)(lVar12 + 0x10) = plVar11;
            *(long **)(puVar9 + -6) = plVar10;
            *plVar10 = 0;
            *(undefined8 *)((long)puVar5 + lVar8 + -8) = 0;
          }
          lVar12 = lVar8 + 0x48;
          puVar9 = (undefined4 *)((long)puVar5 + lVar8);
          lVar8 = lVar12;
        } while (puVar9 < puVar5);
        puVar9 = (undefined4 *)((long)puVar5 + lVar12);
      }
      param_1[1] = (long)puVar9;
      puVar9 = puVar14;
      if (puVar5 != param_2 + 0x12) {
        do {
          puVar14 = puVar14 + -0x12;
          FUN_0085eaf8(puVar9,puVar14);
          puVar9 = puVar9 + -0x12;
        } while (puVar14 != param_2);
      }
      FUN_0085eaf8(param_2,&local_a0);
      local_48 = &local_70;
      FUN_0085d600(&local_48,local_68);
      if (pvStack_88 != (void *)0x0) {
        uVar6 = (ulong)(((long)pvStack_88 - (long)pvStack_80) * 0x1555555555555555) >> 3;
        uVar7 = (long)pvStack_80 * -0x1555555555555555 - 8U >> 3;
        if (uVar7 <= uVar6) {
          uVar6 = uVar7;
        }
        pvVar3 = pvStack_80;
        if ((1 < uVar6) && ((((int)pvStack_88 - (int)pvStack_80 | -(int)pvStack_80) & 7U) == 0)) {
          uVar6 = uVar6 & 0x1ffffffffffffffe;
          pvVar3 = (void *)((long)pvStack_80 + uVar6 * -0x18);
          do {
            uVar6 = uVar6 - 2;
          } while (uVar6 != 0);
        }
        while (pvVar3 != pvStack_88) {
          pvVar3 = (void *)((long)pvVar3 + -0x18);
          if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
        }
        pvStack_80 = pvStack_88;
        operator_delete(pvStack_88);
      }
    }
  }
  else {
    lVar8 = *param_1;
    uVar6 = ((long)puVar9 - lVar8 >> 3) * -0x71c71c71c71c71c7 + 1;
    if (0x38e38e38e38e38e < uVar6) {
      FUN_0085efdc();
LAB_0085eaf4:
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    local_a0 = (void *)0x0;
    lVar12 = param_1[2] - lVar8 >> 3;
    uVar7 = lVar12 * 0x1c71c71c71c71c72;
    if (uVar7 < uVar6 || uVar7 - uVar6 == 0) {
      uVar7 = uVar6;
    }
    if (0x1c71c71c71c71c6 < (ulong)(lVar12 * -0x71c71c71c71c71c7)) {
      uVar7 = 0x38e38e38e38e38e;
    }
    if (uVar7 != 0) {
      if (0x38e38e38e38e38e < uVar7) goto LAB_0085eaf4;
      local_a0 = operator_new(uVar7 * 0x48);
    }
    pvStack_88 = (void *)((long)local_a0 + uVar7 * 0x48);
    puStack_98 = (undefined4 *)((long)local_a0 + ((long)param_2 - lVar8));
    local_90 = puStack_98;
    FUN_0085ec64(&local_a0,param_3,param_4);
    puVar13 = puStack_98;
    FUN_0085eff4(param_1,param_2,param_1[1],local_90);
    lVar8 = param_1[1];
    param_1[1] = (long)param_2;
    local_90 = (undefined4 *)((long)local_90 + (lVar8 - (long)param_2));
    lVar8 = (long)puStack_98 + (*param_1 - (long)param_2);
    FUN_0085eff4(param_1,*param_1,param_2,lVar8);
    local_a0 = (void *)*param_1;
    lVar12 = param_1[2];
    *param_1 = lVar8;
    param_1[2] = (long)pvStack_88;
    param_1[1] = (long)local_90;
    if (local_a0 != (void *)0x0) {
      puStack_98 = (undefined4 *)local_a0;
      local_90 = (undefined4 *)local_a0;
      pvStack_88 = (void *)lVar12;
      operator_delete(local_a0);
    }
  }
  return puVar13;
}


// ===== 0085eaf8  FUN_0085eaf8 =====

undefined4 * FUN_0085eaf8(undefined4 *param_1,undefined4 *param_2)

{
  void *pvVar1;
  void *pvVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *local_38;
  
  *param_1 = *param_2;
  pvVar1 = *(void **)(param_1 + 6);
  uVar4 = *(undefined8 *)(param_2 + 2);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 2) = uVar4;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = *(void **)(param_1 + 8);
    uVar5 = (ulong)(((long)pvVar1 - (long)pvVar2) * 0x1555555555555555) >> 3;
    uVar7 = (long)pvVar2 * -0x1555555555555555 - 8U >> 3;
    if (uVar7 <= uVar5) {
      uVar5 = uVar7;
    }
    if ((1 < uVar5) && ((((int)pvVar1 - (int)pvVar2 | -(int)pvVar2) & 7U) == 0)) {
      uVar5 = uVar5 & 0x1ffffffffffffffe;
      pvVar2 = (void *)((long)pvVar2 + uVar5 * -0x18);
      do {
        uVar5 = uVar5 - 2;
      } while (uVar5 != 0);
    }
    while (pvVar2 != pvVar1) {
      pvVar2 = (void *)((long)pvVar2 + -0x18);
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    *(void **)(param_1 + 8) = pvVar1;
    operator_delete(pvVar1);
    *(undefined8 *)(param_1 + 6) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 10) = 0;
  }
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 10) = 0;
  plVar9 = (long *)(param_1 + 0xe);
  local_38 = (undefined8 *)(param_1 + 0xc);
  FUN_0085d600(&local_38,*plVar9);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  plVar3 = (long *)(param_2 + 0xe);
  lVar6 = *plVar3;
  *plVar9 = lVar6;
  lVar8 = *(long *)(param_2 + 0x10);
  *(long *)(param_1 + 0x10) = lVar8;
  if (lVar8 == 0) {
    *(long **)(param_1 + 0xc) = plVar9;
  }
  else {
    *(long **)(lVar6 + 0x10) = plVar9;
    *(long **)(param_2 + 0xc) = plVar3;
    *plVar3 = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
  }
  return param_1;
}


// ===== 0085ec64  FUN_0085ec64 =====

void FUN_0085ec64(long *param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  void *pvVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  void *pvVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  undefined4 *puVar15;
  void *pvVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  long local_68;
  
  puVar18 = (undefined4 *)param_1[2];
  if ((undefined4 *)param_1[3] == puVar18) {
    pvVar16 = (void *)*param_1;
    puVar17 = (undefined4 *)param_1[1];
    if ((long)puVar17 - (long)pvVar16 == 0) {
      uVar8 = (param_1[3] - (long)pvVar16 >> 3) * 0x1c71c71c71c71c72;
      if (puVar18 == puVar17) {
        uVar8 = 1;
      }
      if (0x38e38e38e38e38e < uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      pvVar3 = operator_new(uVar8 * 0x48);
      lVar6 = (long)puVar18 - (long)puVar17;
      pvVar4 = (void *)((long)pvVar3 + uVar8 * 0x48);
      pvVar9 = (void *)((long)pvVar3 + (uVar8 >> 2) * 0x48);
      if (lVar6 == 0) {
        *param_1 = (long)pvVar3;
        param_1[1] = (long)pvVar9;
        param_1[2] = (long)pvVar9;
        param_1[3] = (long)pvVar4;
      }
      else {
        lVar11 = 0;
        do {
          if ((long)pvVar9 + lVar11 == 0) goto LAB_0085efc4;
          puVar15 = (undefined4 *)((long)puVar17 + lVar11);
          puVar1 = (undefined4 *)((long)pvVar9 + lVar11);
          *puVar1 = *puVar15;
          uVar7 = *(undefined8 *)(puVar15 + 2);
          *(undefined1 *)(puVar1 + 4) = *(undefined1 *)(puVar15 + 4);
          *(undefined8 *)(puVar1 + 2) = uVar7;
          *(undefined8 *)(puVar1 + 6) = *(undefined8 *)(puVar15 + 6);
          *(undefined8 *)(puVar1 + 8) = *(undefined8 *)(puVar15 + 8);
          *(undefined8 *)(puVar1 + 10) = *(undefined8 *)(puVar15 + 10);
          *(undefined8 *)(puVar15 + 6) = 0;
          *(undefined8 *)(puVar15 + 8) = 0;
          *(undefined8 *)(puVar15 + 10) = 0;
          *(undefined8 *)(puVar1 + 0xc) = *(undefined8 *)(puVar15 + 0xc);
          plVar12 = (long *)((long)puVar17 + lVar11 + 0x38);
          lVar14 = *plVar12;
          plVar13 = (long *)((long)pvVar9 + lVar11 + 0x38);
          *plVar13 = lVar14;
          lVar5 = *(long *)(puVar15 + 0x10);
          *(long *)(puVar1 + 0x10) = lVar5;
          if (lVar5 == 0) {
            *(long **)(puVar1 + 0xc) = plVar13;
          }
          else {
            *(long **)(lVar14 + 0x10) = plVar13;
            *(long **)(puVar15 + 0xc) = plVar12;
            *plVar12 = 0;
            *(undefined8 *)((long)puVar17 + lVar11 + 0x40) = 0;
          }
          lVar11 = lVar11 + 0x48;
        } while (lVar6 != lVar11);
        pvVar16 = (void *)*param_1;
        lVar5 = param_1[1];
        *param_1 = (long)pvVar3;
        param_1[1] = (long)pvVar9;
        lVar11 = param_1[2];
        param_1[2] = (long)pvVar9 + lVar6;
        param_1[3] = (long)pvVar4;
        while (lVar6 = lVar11, lVar5 != lVar6) {
          lVar11 = lVar6 + -0x48;
          if (lVar11 == 0) {
LAB_0085ef90:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
          local_68 = lVar6 + -0x18;
          FUN_0085d600(&local_68,*(undefined8 *)(lVar6 + -0x10));
          pvVar4 = *(void **)(lVar6 + -0x30);
          if (pvVar4 != (void *)0x0) {
            pvVar3 = *(void **)(lVar6 + -0x28);
            uVar8 = (ulong)(((long)pvVar4 - (long)pvVar3) * 0x1555555555555555) >> 3;
            uVar10 = (long)pvVar3 * -0x1555555555555555 - 8U >> 3;
            if (uVar10 <= uVar8) {
              uVar8 = uVar10;
            }
            if ((1 < uVar8) && ((((int)pvVar4 - (int)pvVar3 | -(int)pvVar3) & 7U) == 0)) {
              uVar8 = uVar8 & 0x1ffffffffffffffe;
              pvVar3 = (void *)((long)pvVar3 + uVar8 * -0x18);
              do {
                uVar8 = uVar8 - 2;
              } while (uVar8 != 0);
            }
            while (pvVar3 != pvVar4) {
              pvVar3 = (void *)((long)pvVar3 + -0x18);
              if (pvVar3 == (void *)0x0) goto LAB_0085ef90;
            }
            *(void **)(lVar6 + -0x28) = pvVar4;
            operator_delete(pvVar4);
          }
        }
      }
      if (pvVar16 != (void *)0x0) {
        operator_delete(pvVar16);
      }
    }
    else {
      lVar6 = (((long)puVar17 - (long)pvVar16 >> 3) * -0x71c71c71c71c71c7 + 1) / 2;
      puVar15 = puVar17 + lVar6 * -0x12;
      if (puVar17 != puVar18) {
        do {
          FUN_0085eaf8(puVar15,puVar17);
          puVar17 = puVar17 + 0x12;
          puVar15 = puVar15 + 0x12;
        } while (puVar17 != puVar18);
        puVar17 = (undefined4 *)param_1[1];
      }
      param_1[1] = (long)(puVar17 + lVar6 * -0x12);
      param_1[2] = (long)puVar15;
      puVar18 = puVar15;
    }
  }
  if (puVar18 != (undefined4 *)0x0) {
    *puVar18 = *param_2;
    uVar7 = *param_3;
    uVar2 = *(undefined1 *)(param_3 + 1);
    *(undefined8 *)(puVar18 + 8) = 0;
    *(undefined8 *)(puVar18 + 10) = 0;
    *(undefined8 *)(puVar18 + 6) = 0;
    *(undefined1 *)(puVar18 + 4) = uVar2;
    *(undefined8 *)(puVar18 + 2) = uVar7;
    *(undefined8 *)(puVar18 + 6) = param_3[2];
    *(undefined8 *)(puVar18 + 8) = param_3[3];
    *(undefined8 *)(puVar18 + 10) = param_3[4];
    param_3[2] = 0;
    param_3[3] = 0;
    param_3[4] = 0;
    *(undefined8 *)(puVar18 + 0xc) = param_3[5];
    plVar12 = param_3 + 6;
    lVar6 = *plVar12;
    plVar13 = (long *)(puVar18 + 0xe);
    *plVar13 = lVar6;
    lVar11 = param_3[7];
    *(long *)(puVar18 + 0x10) = lVar11;
    if (lVar11 == 0) {
      *(long **)(puVar18 + 0xc) = plVar13;
    }
    else {
      *(long **)(lVar6 + 0x10) = plVar13;
      param_3[5] = plVar12;
      *plVar12 = 0;
      param_3[7] = 0;
    }
    param_1[2] = (long)(puVar18 + 0x12);
    return;
  }
LAB_0085efc4:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0085efdc  FUN_0085efdc =====

void FUN_0085efdc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 0085eff4  FUN_0085eff4 =====

void FUN_0085eff4(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  void *pvVar4;
  long lVar5;
  void *pvVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long local_48;
  
  if (param_2 != param_3) {
    lVar5 = 0;
    do {
      if (param_4 + lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      puVar1 = (undefined4 *)(param_2 + lVar5);
      puVar2 = (undefined4 *)(param_4 + lVar5);
      *puVar2 = *puVar1;
      uVar9 = *(undefined8 *)(puVar1 + 2);
      uVar3 = *(undefined1 *)(puVar1 + 4);
      *(undefined8 *)(puVar2 + 8) = 0;
      *(undefined8 *)(puVar2 + 10) = 0;
      *(undefined8 *)(puVar2 + 6) = 0;
      *(undefined1 *)(puVar2 + 4) = uVar3;
      *(undefined8 *)(puVar2 + 2) = uVar9;
      *(undefined8 *)(puVar2 + 6) = *(undefined8 *)(puVar1 + 6);
      *(undefined8 *)(puVar2 + 8) = *(undefined8 *)(puVar1 + 8);
      *(undefined8 *)(puVar2 + 10) = *(undefined8 *)(puVar1 + 10);
      *(undefined8 *)(puVar1 + 6) = 0;
      *(undefined8 *)(puVar1 + 8) = 0;
      *(undefined8 *)(puVar1 + 10) = 0;
      *(undefined8 *)(puVar2 + 0xc) = *(undefined8 *)(puVar1 + 0xc);
      plVar10 = (long *)(param_2 + lVar5 + 0x38);
      lVar12 = *plVar10;
      plVar11 = (long *)(param_4 + lVar5 + 0x38);
      *plVar11 = lVar12;
      lVar13 = *(long *)(puVar1 + 0x10);
      *(long *)(puVar2 + 0x10) = lVar13;
      if (lVar13 == 0) {
        *(long **)(puVar2 + 0xc) = plVar11;
      }
      else {
        *(long **)(lVar12 + 0x10) = plVar11;
        *(long **)(puVar1 + 0xc) = plVar10;
        *plVar10 = 0;
        *(undefined8 *)(param_2 + lVar5 + 0x40) = 0;
      }
      lVar5 = lVar5 + 0x48;
    } while (param_2 + lVar5 != param_3);
    do {
      if (param_2 == 0) {
LAB_0085f190:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      local_48 = param_2 + 0x30;
      FUN_0085d600(&local_48,*(undefined8 *)(param_2 + 0x38));
      pvVar4 = *(void **)(param_2 + 0x18);
      if (pvVar4 != (void *)0x0) {
        pvVar6 = *(void **)(param_2 + 0x20);
        uVar8 = (long)pvVar6 * -0x1555555555555555 - 8U >> 3;
        uVar7 = (ulong)(((long)pvVar4 - (long)pvVar6) * 0x1555555555555555) >> 3;
        if (uVar8 <= uVar7) {
          uVar7 = uVar8;
        }
        if ((1 < uVar7) && ((((int)pvVar4 - (int)pvVar6 | -(int)pvVar6) & 7U) == 0)) {
          uVar7 = uVar7 & 0x1ffffffffffffffe;
          pvVar6 = (void *)((long)pvVar6 + uVar7 * -0x18);
          do {
            uVar7 = uVar7 - 2;
          } while (uVar7 != 0);
        }
        while (pvVar6 != pvVar4) {
          pvVar6 = (void *)((long)pvVar6 + -0x18);
          if (pvVar6 == (void *)0x0) goto LAB_0085f190;
        }
        *(void **)(param_2 + 0x20) = pvVar4;
        operator_delete(pvVar4);
      }
      param_2 = param_2 + 0x48;
    } while (param_2 != param_3);
  }
  return;
}


// ===== 0085f1b8  FUN_0085f1b8 =====

undefined8 * FUN_0085f1b8(long *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 *puVar5;
  size_t __n;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  void *__dest;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  void *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  void *pvStack_48;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < (undefined8 *)param_1[2]) {
    puVar10 = param_2;
    if (param_2 == puVar2) {
      if (param_2 == (undefined8 *)0x0) {
LAB_0085f398:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      *(undefined4 *)puVar2 = *param_3;
      puVar2[1] = *param_4;
      param_1[1] = (long)(puVar2 + 2);
    }
    else {
      uVar3 = *param_3;
      uVar7 = *param_4;
      puVar5 = puVar2;
      for (puVar9 = puVar2 + -2; puVar9 < puVar2; puVar9 = puVar9 + 2) {
        if (puVar5 == (undefined8 *)0x0) goto LAB_0085f398;
        uVar12 = *puVar9;
        puVar5[1] = puVar9[1];
        *puVar5 = uVar12;
        puVar5 = puVar5 + 2;
      }
      param_1[1] = (long)puVar5;
      if (puVar2 != param_2 + 2) {
        lVar11 = 0;
        do {
          lVar4 = lVar11 + -0x20;
          *(undefined4 *)((long)puVar2 + lVar11 + -0x10) =
               *(undefined4 *)((long)puVar2 + lVar11 + -0x20);
          *(undefined8 *)((long)puVar2 + lVar11 + -8) =
               *(undefined8 *)((long)puVar2 + lVar11 + -0x18);
          lVar11 = lVar11 + -0x10;
        } while ((undefined8 *)((long)puVar2 + lVar4) != param_2);
      }
      *(undefined4 *)param_2 = uVar3;
      param_2[1] = uVar7;
    }
  }
  else {
    lVar11 = *param_1;
    uVar1 = ((long)puVar2 - lVar11 >> 4) + 1;
    if (uVar1 >> 0x3c != 0) {
      FUN_0085f590();
LAB_0085f3b0:
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    uVar6 = param_1[2] - lVar11;
    local_60 = (void *)0x0;
    uVar8 = (long)uVar6 >> 3;
    if (uVar8 <= uVar1) {
      uVar8 = uVar1;
    }
    if (0x7fffffffffffffef < uVar6) {
      uVar8 = 0xfffffffffffffff;
    }
    if (uVar8 != 0) {
      if (uVar8 >> 0x3c != 0) goto LAB_0085f3b0;
      local_60 = operator_new(uVar8 << 4);
    }
    pvStack_48 = (void *)((long)local_60 + uVar8 * 0x10);
    local_58 = (undefined8 *)((long)local_60 + ((long)param_2 - lVar11));
    local_50 = local_58;
    FUN_0085f3b4(&local_60,param_3,param_4);
    puVar10 = local_58;
    memcpy(local_50,param_2,param_1[1] - (long)param_2);
    lVar11 = param_1[1];
    param_1[1] = (long)param_2;
    __n = (long)param_2 - *param_1;
    __dest = (void *)((long)local_58 - __n);
    local_50 = (undefined8 *)((long)local_50 + (lVar11 - (long)param_2));
    memcpy(__dest,(void *)*param_1,__n);
    local_60 = (void *)*param_1;
    lVar11 = param_1[2];
    *param_1 = (long)__dest;
    param_1[2] = (long)pvStack_48;
    param_1[1] = (long)local_50;
    if (local_60 != (void *)0x0) {
      local_58 = (undefined8 *)local_60;
      local_50 = (undefined8 *)local_60;
      pvStack_48 = (void *)lVar11;
      operator_delete(local_60);
    }
  }
  return puVar10;
}


// ===== 0085f3b4  FUN_0085f3b4 =====

void FUN_0085f3b4(undefined8 *param_1,undefined4 *param_2,undefined8 *param_3)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  
  puVar11 = (undefined8 *)param_1[2];
  if ((undefined8 *)param_1[3] == puVar11) {
    pvVar1 = (void *)*param_1;
    puVar12 = (undefined8 *)param_1[1];
    if ((long)puVar12 - (long)pvVar1 == 0) {
      uVar3 = (long)param_1[3] - (long)pvVar1 >> 3;
      if (puVar11 == puVar12) {
        uVar3 = 1;
      }
      if (uVar3 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      pvVar2 = operator_new(uVar3 * 0x10);
      lVar5 = (long)puVar11 - (long)puVar12;
      puVar4 = (undefined8 *)((long)pvVar2 + (uVar3 >> 2) * 0x10);
      puVar6 = puVar4;
      if (lVar5 != 0) {
        puVar6 = (undefined8 *)((long)puVar4 + lVar5);
        puVar8 = puVar4;
        puVar10 = puVar12;
        do {
          if (puVar8 == (undefined8 *)0x0) goto LAB_0085f578;
          uVar13 = *puVar10;
          lVar5 = lVar5 + -0x10;
          puVar8[1] = puVar10[1];
          *puVar8 = uVar13;
          puVar8 = puVar8 + 2;
          puVar10 = puVar10 + 2;
        } while (lVar5 != 0);
      }
      *param_1 = pvVar2;
      param_1[1] = puVar4;
      uVar9 = (ulong)((long)puVar11 + (-0x10 - ((long)puVar11 << 0x3c))) >> 4;
      uVar7 = (ulong)(((long)puVar12 - (long)puVar11 << 0x3c) - ((long)puVar12 - (long)puVar11)) >>
              4;
      param_1[2] = puVar6;
      param_1[3] = (void *)((long)pvVar2 + uVar3 * 0x10);
      if (uVar9 <= uVar7) {
        uVar7 = uVar9;
      }
      puVar4 = puVar11;
      if ((1 < uVar7) && ((((int)puVar12 - (int)puVar11 | -(int)puVar11) & 0xfU) == 0)) {
        uVar7 = uVar7 & 0xffffffffffffffe;
        puVar4 = puVar11 + uVar7 * -2;
        do {
          uVar7 = uVar7 - 2;
        } while (uVar7 != 0);
      }
      while (puVar4 != puVar12) {
        puVar4 = puVar4 + -2;
        if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      if (puVar12 != (undefined8 *)0x0) {
        operator_delete(pvVar1);
      }
    }
    else {
      lVar5 = (((long)puVar12 - (long)pvVar1 >> 4) + 1) / 2;
      puVar4 = puVar12 + lVar5 * -2;
      if (puVar12 != puVar11) {
        do {
          *(undefined4 *)puVar4 = *(undefined4 *)puVar12;
          puVar6 = puVar12 + 1;
          puVar12 = puVar12 + 2;
          puVar4[1] = *puVar6;
          puVar4 = puVar4 + 2;
        } while (puVar12 != puVar11);
        puVar12 = (undefined8 *)param_1[1];
      }
      param_1[1] = puVar12 + lVar5 * -2;
      param_1[2] = puVar4;
      puVar11 = puVar4;
    }
  }
  if (puVar11 != (undefined8 *)0x0) {
    *(undefined4 *)puVar11 = *param_2;
    puVar11[1] = *param_3;
    param_1[2] = puVar11 + 2;
    return;
  }
LAB_0085f578:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0085f590  FUN_0085f590 =====

void FUN_0085f590(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 0085f5a8  FUN_0085f5a8 =====

undefined8 * FUN_0085f5a8(long *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  void *pvVar4;
  size_t __n;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  void *__dest;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < (undefined8 *)param_1[2]) {
    puVar9 = param_2;
    if (param_2 == puVar2) {
      if (param_2 == (undefined8 *)0x0) {
LAB_0085f7e0:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      *(undefined4 *)puVar2 = *param_3;
      uVar12 = param_4[1];
      uVar13 = *param_4;
      uVar11 = param_4[2];
      puVar2[4] = param_4[3];
      puVar2[3] = uVar11;
      puVar2[2] = uVar12;
      puVar2[1] = uVar13;
      param_1[1] = (long)(puVar2 + 5);
    }
    else {
      uVar13 = param_4[1];
      uVar11 = *param_4;
      uVar3 = *param_3;
      uStack_60._4_4_ = (undefined4)uVar13;
      uStack_58._0_4_ = (undefined4)((ulong)uVar13 >> 0x20);
      uStack_64 = (undefined4)uVar11;
      uStack_60._0_4_ = (undefined4)((ulong)uVar11 >> 0x20);
      uStack_50._4_4_ = (undefined4)param_4[3];
      uStack_48 = (undefined4)((ulong)param_4[3] >> 0x20);
      uStack_58._4_4_ = (undefined4)param_4[2];
      uStack_50._0_4_ = (undefined4)((ulong)param_4[2] >> 0x20);
      puVar1 = puVar2;
      for (puVar6 = puVar2 + -5; puVar6 < puVar2; puVar6 = puVar6 + 5) {
        if (puVar1 == (undefined8 *)0x0) goto LAB_0085f7e0;
        uVar16 = puVar6[1];
        uVar15 = *puVar6;
        uVar14 = puVar6[3];
        uVar12 = puVar6[2];
        puVar1[4] = puVar6[4];
        puVar1[1] = uVar16;
        *puVar1 = uVar15;
        puVar1[3] = uVar14;
        puVar1[2] = uVar12;
        puVar1 = puVar1 + 5;
      }
      param_1[1] = (long)puVar1;
      if (puVar2 != param_2 + 5) {
        lVar10 = 0;
        do {
          lVar5 = lVar10 + -0x50;
          *(undefined4 *)((long)puVar2 + lVar10 + -0x28) =
               *(undefined4 *)((long)puVar2 + lVar10 + -0x50);
          *(undefined8 *)((long)puVar2 + lVar10 + -0xc) =
               *(undefined8 *)((long)puVar2 + lVar10 + -0x34);
          *(undefined8 *)((long)puVar2 + lVar10 + -0x14) =
               *(undefined8 *)((long)puVar2 + lVar10 + -0x3c);
          *(undefined8 *)((long)puVar2 + lVar10 + -0x18) =
               *(undefined8 *)((long)puVar2 + lVar10 + -0x40);
          *(undefined8 *)((long)puVar2 + lVar10 + -0x20) =
               *(undefined8 *)((long)puVar2 + lVar10 + -0x48);
          lVar10 = lVar10 + -0x28;
        } while ((undefined8 *)((long)puVar2 + lVar5) != param_2);
      }
      *(undefined4 *)param_2 = uVar3;
      param_2[2] = uVar13;
      param_2[1] = uVar11;
      *(ulong *)((long)param_2 + 0x1c) = CONCAT44(uStack_50._4_4_,(undefined4)uStack_50);
      *(ulong *)((long)param_2 + 0x14) = CONCAT44(uStack_58._4_4_,(undefined4)uStack_58);
    }
  }
  else {
    lVar10 = *param_1;
    uVar7 = ((long)puVar2 - lVar10 >> 3) * -0x3333333333333333 + 1;
    if (0x666666666666666 < uVar7) {
      FUN_0085fa38();
LAB_0085f7f8:
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    local_68 = 0;
    uStack_64 = 0;
    lVar5 = param_1[2] - lVar10 >> 3;
    uVar8 = lVar5 * -0x6666666666666666;
    if (uVar8 < uVar7 || uVar8 - uVar7 == 0) {
      uVar8 = uVar7;
    }
    if (0x333333333333332 < (ulong)(lVar5 * -0x3333333333333333)) {
      uVar8 = 0x666666666666666;
    }
    if (uVar8 == 0) {
      pvVar4 = (void *)0x0;
    }
    else {
      if (0x666666666666666 < uVar8) goto LAB_0085f7f8;
      pvVar4 = operator_new(uVar8 * 0x28);
      local_68 = SUB84(pvVar4,0);
      uStack_64 = (undefined4)((ulong)pvVar4 >> 0x20);
    }
    uStack_50 = (void *)((long)pvVar4 + uVar8 * 0x28);
    uStack_60 = (undefined8 *)((long)pvVar4 + ((long)param_2 - lVar10));
    uStack_58 = uStack_60;
    FUN_0085f7fc(&local_68,param_3,param_4);
    puVar9 = uStack_60;
    memcpy(uStack_58,param_2,param_1[1] - (long)param_2);
    lVar10 = param_1[1];
    param_1[1] = (long)param_2;
    __n = (long)param_2 - *param_1;
    __dest = (void *)((long)uStack_60 - __n);
    uStack_58 = (undefined8 *)((long)uStack_58 + (lVar10 - (long)param_2));
    memcpy(__dest,(void *)*param_1,__n);
    pvVar4 = (void *)*param_1;
    lVar10 = param_1[2];
    *param_1 = (long)__dest;
    param_1[2] = (long)uStack_50;
    param_1[1] = (long)uStack_58;
    local_68 = SUB84(pvVar4,0);
    uStack_64 = (undefined4)((ulong)pvVar4 >> 0x20);
    uStack_50._0_4_ = (undefined4)lVar10;
    uStack_50._4_4_ = (undefined4)((ulong)lVar10 >> 0x20);
    if (pvVar4 != (void *)0x0) {
      uStack_60._0_4_ = local_68;
      uStack_60._4_4_ = uStack_64;
      uStack_58._0_4_ = local_68;
      uStack_58._4_4_ = uStack_64;
      operator_delete(pvVar4);
    }
  }
  return puVar9;
}


// ===== 0085f7fc  FUN_0085f7fc =====

void FUN_0085f7fc(undefined8 *param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar11 = (undefined8 *)param_1[2];
  if ((undefined8 *)param_1[3] == puVar11) {
    pvVar2 = (void *)*param_1;
    puVar12 = (undefined8 *)param_1[1];
    if ((long)puVar12 - (long)pvVar2 == 0) {
      uVar5 = ((long)param_1[3] - (long)pvVar2 >> 3) * -0x6666666666666666;
      if (puVar11 == puVar12) {
        uVar5 = 1;
      }
      if (0x666666666666666 < uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      pvVar3 = operator_new(uVar5 * 0x28);
      lVar4 = (long)puVar11 - (long)puVar12;
      puVar6 = (undefined8 *)((long)pvVar3 + (uVar5 >> 2) * 0x28);
      puVar7 = puVar6;
      if (lVar4 != 0) {
        puVar7 = (undefined8 *)((long)puVar6 + lVar4);
        puVar8 = puVar6;
        puVar10 = puVar12;
        do {
          if (puVar8 == (undefined8 *)0x0) goto LAB_0085fa20;
          uVar16 = puVar10[1];
          uVar15 = *puVar10;
          uVar14 = puVar10[3];
          uVar13 = puVar10[2];
          lVar4 = lVar4 + -0x28;
          puVar1 = puVar10 + 4;
          puVar10 = puVar10 + 5;
          puVar8[4] = *puVar1;
          puVar8[1] = uVar16;
          *puVar8 = uVar15;
          puVar8[3] = uVar14;
          puVar8[2] = uVar13;
          puVar8 = puVar8 + 5;
        } while (lVar4 != 0);
      }
      *param_1 = pvVar3;
      param_1[1] = puVar6;
      param_1[2] = puVar7;
      param_1[3] = (void *)((long)pvVar3 + uVar5 * 0x28);
      uVar5 = (ulong)(((long)puVar12 - (long)puVar11) * 0x1333333333333333) >> 3;
      uVar9 = (long)puVar11 * -0x1333333333333333 - 8U >> 3;
      if (uVar9 <= uVar5) {
        uVar5 = uVar9;
      }
      puVar7 = puVar11;
      if ((1 < uVar5) && ((((int)puVar12 - (int)puVar11 | -(int)puVar11) & 7U) == 0)) {
        uVar5 = uVar5 & 0x1ffffffffffffffe;
        puVar7 = puVar11 + uVar5 * -5;
        do {
          uVar5 = uVar5 - 2;
        } while (uVar5 != 0);
      }
      while (puVar7 != puVar12) {
        puVar7 = puVar7 + -5;
        if (puVar7 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      if (puVar12 != (undefined8 *)0x0) {
        operator_delete(pvVar2);
      }
    }
    else {
      lVar4 = (((long)puVar12 - (long)pvVar2 >> 3) * -0x3333333333333333 + 1) / 2;
      puVar7 = puVar12 + lVar4 * -5;
      if (puVar12 != puVar11) {
        do {
          *(undefined4 *)puVar7 = *(undefined4 *)puVar12;
          puVar6 = (undefined8 *)((long)puVar12 + 0x1c);
          uVar13 = *(undefined8 *)((long)puVar12 + 0x14);
          uVar15 = puVar12[2];
          uVar14 = puVar12[1];
          puVar12 = puVar12 + 5;
          *(undefined8 *)((long)puVar7 + 0x1c) = *puVar6;
          *(undefined8 *)((long)puVar7 + 0x14) = uVar13;
          puVar7[2] = uVar15;
          puVar7[1] = uVar14;
          puVar7 = puVar7 + 5;
        } while (puVar12 != puVar11);
        puVar12 = (undefined8 *)param_1[1];
      }
      param_1[1] = puVar12 + lVar4 * -5;
      param_1[2] = puVar7;
      puVar11 = puVar7;
    }
  }
  if (puVar11 != (undefined8 *)0x0) {
    *(undefined4 *)puVar11 = *param_2;
    uVar15 = param_3[1];
    uVar14 = *param_3;
    uVar13 = param_3[2];
    puVar11[4] = param_3[3];
    puVar11[3] = uVar13;
    puVar11[2] = uVar15;
    puVar11[1] = uVar14;
    param_1[2] = puVar11 + 5;
    return;
  }
LAB_0085fa20:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0085fa38  FUN_0085fa38 =====

void FUN_0085fa38(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 0085fa50  FUN_0085fa50 =====

undefined1  [16]
FUN_0085fa50(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  uint *puVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  
  puVar6 = (uint *)*param_5;
  plVar4 = param_2 + 1;
  plVar7 = plVar4;
  if ((long *)*plVar4 != (long *)0x0) {
    uVar1 = *puVar6;
    plVar2 = (long *)*plVar4;
    do {
      while (plVar3 = plVar2, plVar4 = plVar3, uVar1 < *(uint *)(plVar3 + 4)) {
        plVar2 = (long *)*plVar3;
        plVar7 = plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_0085fab8;
      }
      if (uVar1 == *(uint *)(plVar3 + 4)) {
        uVar5 = 0;
        goto LAB_0085fb30;
      }
      plVar2 = (long *)plVar3[1];
    } while ((long *)plVar3[1] != (long *)0x0);
    plVar7 = plVar3 + 1;
  }
LAB_0085fab8:
  plVar3 = (long *)operator_new(0x48);
  if ((plVar3 == (long *)0x0) || (*plVar3 = 0, plVar3 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  uVar1 = *puVar6;
  *plVar3 = 0;
  plVar3[1] = 0;
  plVar3[2] = (long)plVar4;
  *(uint *)(plVar3 + 4) = uVar1;
  plVar3[6] = 0;
  plVar3[5] = 0;
  plVar3[8] = 0;
  plVar3[7] = 0;
  *plVar7 = (long)plVar3;
  plVar4 = plVar3;
  if (*(long *)*param_2 != 0) {
    *param_2 = *(long *)*param_2;
    plVar4 = (long *)*plVar7;
  }
  FUN_005d5b94(param_2[1],plVar4);
  uVar5 = 1;
  param_2[2] = param_2[2] + 1;
LAB_0085fb30:
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = plVar3;
  return auVar8;
}


// ===== 0085fb60  FUN_0085fb60 =====

undefined8 *
FUN_0085fb60(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
            undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  size_t __n;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  void *__dest;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  void *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  void *pvStack_58;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    puVar11 = param_2;
    if (param_2 == puVar1) {
      if (param_2 == (undefined8 *)0x0) {
LAB_0085fda4:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      puVar2 = (undefined8 *)*param_5;
      puVar3 = (undefined1 *)param_5[1];
      *(undefined4 *)puVar1 = *(undefined4 *)*param_4;
      uVar5 = *puVar3;
      puVar1[1] = *puVar2;
      *(undefined1 *)(puVar1 + 2) = uVar5;
      param_1[1] = (long)(puVar1 + 3);
    }
    else {
      uVar4 = *(undefined4 *)*param_4;
      uVar7 = *(undefined8 *)*param_5;
      uVar5 = *(undefined1 *)param_5[1];
      puVar2 = puVar1;
      for (puVar10 = puVar1 + -3; puVar10 < puVar1; puVar10 = puVar10 + 3) {
        if (puVar2 == (undefined8 *)0x0) goto LAB_0085fda4;
        uVar14 = puVar10[1];
        uVar13 = *puVar10;
        puVar2[2] = puVar10[2];
        puVar2[1] = uVar14;
        *puVar2 = uVar13;
        puVar2 = puVar2 + 3;
      }
      param_1[1] = (long)puVar2;
      if (puVar1 != param_2 + 3) {
        lVar12 = 0;
        do {
          lVar6 = lVar12 + -0x30;
          *(undefined4 *)((long)puVar1 + lVar12 + -0x18) =
               *(undefined4 *)((long)puVar1 + lVar12 + -0x30);
          *(undefined1 *)((long)puVar1 + lVar12 + -8) =
               *(undefined1 *)((long)puVar1 + lVar12 + -0x20);
          *(undefined8 *)((long)puVar1 + lVar12 + -0x10) =
               *(undefined8 *)((long)puVar1 + lVar12 + -0x28);
          lVar12 = lVar12 + -0x18;
        } while ((undefined8 *)((long)puVar1 + lVar6) != param_2);
      }
      *(undefined4 *)param_2 = uVar4;
      param_2[1] = uVar7;
      *(undefined1 *)(param_2 + 2) = uVar5;
    }
  }
  else {
    lVar12 = *param_1;
    uVar8 = ((long)puVar1 - lVar12 >> 3) * -0x5555555555555555 + 1;
    if (0xaaaaaaaaaaaaaaa < uVar8) {
      FUN_00860000();
LAB_0085fdbc:
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    lVar6 = param_1[2] - lVar12 >> 3;
    local_70 = (void *)0x0;
    uVar9 = lVar6 * 0x5555555555555556;
    if (uVar9 < uVar8 || uVar9 - uVar8 == 0) {
      uVar9 = uVar8;
    }
    if (0x555555555555554 < (ulong)(lVar6 * -0x5555555555555555)) {
      uVar9 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar9 != 0) {
      if (0xaaaaaaaaaaaaaaa < uVar9) goto LAB_0085fdbc;
      local_70 = operator_new(uVar9 * 0x18);
    }
    pvStack_58 = (void *)((long)local_70 + uVar9 * 0x18);
    local_68 = (undefined8 *)((long)local_70 + ((long)param_2 - lVar12));
    local_60 = local_68;
    FUN_0085fdc0(&local_70,param_3,param_4,param_5);
    puVar11 = local_68;
    memcpy(local_60,param_2,param_1[1] - (long)param_2);
    lVar12 = param_1[1];
    param_1[1] = (long)param_2;
    __n = (long)param_2 - *param_1;
    __dest = (void *)((long)local_68 - __n);
    local_60 = (undefined8 *)((long)local_60 + (lVar12 - (long)param_2));
    memcpy(__dest,(void *)*param_1,__n);
    local_70 = (void *)*param_1;
    lVar12 = param_1[2];
    *param_1 = (long)__dest;
    param_1[2] = (long)pvStack_58;
    param_1[1] = (long)local_60;
    if (local_70 != (void *)0x0) {
      local_68 = (undefined8 *)local_70;
      local_60 = (undefined8 *)local_70;
      pvStack_58 = (void *)lVar12;
      operator_delete(local_70);
    }
  }
  return puVar11;
}


// ===== 0085fdc0  FUN_0085fdc0 =====

void FUN_0085fdc0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  void *pvVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  void *pvVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  
  puVar13 = (undefined8 *)param_1[2];
  if ((undefined8 *)param_1[3] == puVar13) {
    pvVar1 = (void *)*param_1;
    puVar14 = (undefined8 *)param_1[1];
    if ((long)puVar14 - (long)pvVar1 == 0) {
      uVar6 = ((long)param_1[3] - (long)pvVar1 >> 3) * 0x5555555555555556;
      if (puVar13 == puVar14) {
        uVar6 = 1;
      }
      if (0xaaaaaaaaaaaaaaa < uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      pvVar4 = operator_new(uVar6 * 0x18);
      lVar5 = (long)puVar13 - (long)puVar14;
      puVar7 = (undefined8 *)((long)pvVar4 + (uVar6 >> 2) * 0x18);
      puVar8 = puVar7;
      if (lVar5 != 0) {
        puVar8 = (undefined8 *)((long)puVar7 + lVar5);
        puVar10 = puVar7;
        puVar12 = puVar14;
        do {
          if (puVar10 == (undefined8 *)0x0) goto LAB_0085ffe8;
          uVar15 = puVar12[1];
          uVar9 = *puVar12;
          lVar5 = lVar5 + -0x18;
          puVar10[2] = puVar12[2];
          puVar10[1] = uVar15;
          *puVar10 = uVar9;
          puVar10 = puVar10 + 3;
          puVar12 = puVar12 + 3;
        } while (lVar5 != 0);
      }
      *param_1 = pvVar4;
      param_1[1] = puVar7;
      param_1[2] = puVar8;
      param_1[3] = (void *)((long)pvVar4 + uVar6 * 0x18);
      uVar6 = (ulong)(((long)puVar14 - (long)puVar13) * 0x1555555555555555) >> 3;
      uVar11 = (long)puVar13 * -0x1555555555555555 - 8U >> 3;
      if (uVar11 <= uVar6) {
        uVar6 = uVar11;
      }
      puVar8 = puVar13;
      if ((1 < uVar6) && ((((int)puVar14 - (int)puVar13 | -(int)puVar13) & 7U) == 0)) {
        uVar6 = uVar6 & 0x1ffffffffffffffe;
        puVar8 = puVar13 + uVar6 * -3;
        do {
          uVar6 = uVar6 - 2;
        } while (uVar6 != 0);
      }
      while (puVar8 != puVar14) {
        puVar8 = puVar8 + -3;
        if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      if (puVar14 != (undefined8 *)0x0) {
        operator_delete(pvVar1);
      }
    }
    else {
      lVar5 = (((long)puVar14 - (long)pvVar1 >> 3) * -0x5555555555555555 + 1) / 2;
      puVar8 = puVar14 + lVar5 * -3;
      if (puVar14 != puVar13) {
        do {
          *(undefined4 *)puVar8 = *(undefined4 *)puVar14;
          puVar7 = puVar14 + 2;
          uVar9 = puVar14[1];
          puVar14 = puVar14 + 3;
          *(undefined1 *)(puVar8 + 2) = *(undefined1 *)puVar7;
          puVar8[1] = uVar9;
          puVar8 = puVar8 + 3;
        } while (puVar14 != puVar13);
        puVar14 = (undefined8 *)param_1[1];
      }
      param_1[1] = puVar14 + lVar5 * -3;
      param_1[2] = puVar8;
      puVar13 = puVar8;
    }
  }
  if (puVar13 != (undefined8 *)0x0) {
    puVar14 = (undefined8 *)*param_4;
    puVar2 = (undefined1 *)param_4[1];
    *(undefined4 *)puVar13 = *(undefined4 *)*param_3;
    uVar3 = *puVar2;
    puVar13[1] = *puVar14;
    *(undefined1 *)(puVar13 + 2) = uVar3;
    param_1[2] = puVar13 + 3;
    return;
  }
LAB_0085ffe8:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00860000  FUN_00860000 =====

void FUN_00860000(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00860018  FUN_00860018 =====

bool FUN_00860018(undefined8 param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = *(int *)(param_2 + 4);
  if (iVar1 == 8) {
    FUN_007d0240(param_1,*(undefined8 *)(param_2 + 8));
  }
  else {
    uVar2 = FUN_004022fc();
    if ((uVar2 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4ef8,"../../modules/rtp_rtcp/source/rtcp_packet/rapid_resync_request.cc"
                   ,0x13a,"Packet payload size should be ",8," instead of ",
                   *(undefined4 *)(param_2 + 4)," to be a valid Rapid Resynchronisation Request");
    }
  }
  return iVar1 == 8;
}


// ===== 0086009c  FUN_0086009c =====

undefined8 FUN_0086009c(void)

{
  return 0xc;
}


// ===== 008600a8  FUN_008600a8 =====

bool FUN_008600a8(long *param_1,long param_2,long *param_3,ulong param_4,undefined8 param_5,
                 undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  do {
    lVar4 = *param_3;
    lVar1 = (**(code **)(*param_1 + 0x10))(param_1);
    if ((ulong)(lVar1 + lVar4) <= param_4) {
      uVar3 = FUN_007cd5b4(param_1);
      FUN_007cd5e0(5,0xcd,uVar3,param_2,param_3);
      FUN_007d0260(param_1,param_2 + *param_3);
      *param_3 = *param_3 + 8;
      break;
    }
    uVar2 = FUN_007cd570(param_1,param_2,param_3,param_5,param_6);
  } while ((uVar2 & 1) != 0);
  return (ulong)(lVar1 + lVar4) <= param_4;
}


// ===== 00860178  FUN_00860178 =====

void FUN_00860178(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00860184  FUN_00860184 =====

void FUN_00860184(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  *param_1 = &PTR_FUN_00d3a820;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[2] = *param_2;
  param_1[3] = param_2[1];
  param_1[4] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_1 + 5) = param_3;
  return;
}


// ===== 008601cc  FUN_008601cc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_008601cc(long *param_1,long param_2,long *param_3,ulong param_4,undefined8 param_5,
                 undefined8 param_6)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  byte bVar9;
  int *piVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  byte *pbVar17;
  long lVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  
  do {
    lVar18 = *param_3;
    lVar4 = (**(code **)(*param_1 + 0x10))(param_1);
    if ((ulong)(lVar4 + lVar18) <= param_4) {
      (**(code **)(*param_1 + 0x10))(param_1);
      uVar6 = FUN_007cd5b4(param_1);
      FUN_007cd5e0(0xb,0xcd,uVar6,param_2,param_3);
      auVar19 = _DAT_001f3910;
      uVar3 = (undefined4)param_1[1];
      auVar20._4_4_ = uVar3;
      auVar20._0_4_ = uVar3;
      auVar20._8_4_ = uVar3;
      auVar20._12_4_ = uVar3;
      auVar20 = NEON_ushl(auVar20,_DAT_001f3910,4);
      *(uint *)(param_2 + *param_3) =
           CONCAT13(auVar20[0xc],CONCAT12(auVar20[8],CONCAT11(auVar20[4],auVar20[0])));
      lVar12 = *param_3 + 4;
      *param_3 = lVar12;
      piVar10 = (int *)param_1[2];
      if (param_1[3] - (long)piVar10 == 0) goto LAB_00860454;
      uVar5 = (param_1[3] - (long)piVar10 >> 3) * -0x5555555555555555;
      goto LAB_008602d4;
    }
    uVar5 = FUN_007cd570(param_1,param_2,param_3,param_5,param_6);
  } while ((uVar5 & 1) != 0);
  goto LAB_00860478;
  while (piVar10 = piVar10 + (long)(int)uVar13 * 6, uVar5 != 0) {
LAB_008602d4:
    lVar14 = uVar5 * 0x18;
    if (lVar14 == 0) {
      uVar13 = 0;
LAB_0086031c:
      uVar15 = uVar13;
      if (uVar5 < uVar13) goto LAB_0086049c;
    }
    else {
      iVar11 = 0;
      piVar16 = piVar10;
      do {
        if (*piVar16 != *piVar10) goto LAB_00860308;
        lVar14 = lVar14 + -0x18;
        iVar11 = iVar11 + 1;
        piVar16 = piVar16 + 6;
      } while (lVar14 != 0);
      iVar11 = (int)uVar5;
LAB_00860308:
      if (iVar11 != -1) {
        uVar13 = (ulong)iVar11;
        goto LAB_0086031c;
      }
      uVar13 = 0xffffffffffffffff;
      uVar15 = uVar5;
    }
    piVar16 = (int *)0x0;
    if (uVar15 != 0) {
      piVar16 = piVar10;
    }
    iVar11 = *piVar16;
    auVar22._4_4_ = iVar11;
    auVar22._0_4_ = iVar11;
    auVar22._8_4_ = iVar11;
    auVar22._12_4_ = iVar11;
    auVar20 = NEON_ushl(auVar22,auVar19,4);
    *(uint *)(param_2 + lVar12) =
         CONCAT13(auVar20[0xc],CONCAT12(auVar20[8],CONCAT11(auVar20[4],auVar20[0])));
    lVar12 = *param_3;
    *param_3 = lVar12 + 4;
    *(ushort *)(param_2 + lVar12 + 4) =
         *(ushort *)(piVar16 + 1) >> 8 | (ushort)((*(ushort *)(piVar16 + 1) & 0xff00ff) << 8);
    lVar12 = *param_3 + 2;
    *param_3 = lVar12;
    if (((uint)uVar15 & 0xffff) < 0x4001) {
      *(ushort *)(param_2 + lVar12) =
           (ushort)(uVar15 >> 8) & 0xff | (ushort)(((uint)uVar15 & 0xff00ff) << 8);
      lVar14 = uVar15 * 0x18;
      lVar12 = *param_3 + 2;
      *param_3 = lVar12;
      if (lVar14 != 0) {
        pbVar17 = (byte *)(piVar16 + 4);
        do {
          uVar7 = *(ulong *)(pbVar17 + -8);
          if (uVar7 + 0x7fffffffffffffff < 0xfffffffffffffffe) {
            if ((long)uVar7 < 0) {
              uVar3 = 0x1fff;
            }
            else {
              lVar8 = (long)((float)uVar7 * 1e-06 * 1024.0);
              if (0x1ffd < lVar8) {
                lVar8 = 0x1ffe;
              }
              uVar3 = (undefined4)lVar8;
            }
            bVar9 = (byte)((uint)uVar3 >> 8) | (byte)(((uint)*pbVar17 << 0xd) >> 8) | 0x80;
          }
          else {
            uVar3 = 0;
            bVar9 = 0;
          }
          lVar14 = lVar14 + -0x18;
          pbVar17 = pbVar17 + 0x18;
          *(byte *)(param_2 + lVar12) = bVar9;
          ((byte *)(param_2 + lVar12))[1] = (byte)uVar3;
          lVar12 = *param_3 + 2;
          *param_3 = lVar12;
        } while (lVar14 != 0);
      }
      if ((uVar15 & 1) != 0) {
        *(undefined2 *)(param_2 + lVar12) = 0;
        lVar12 = *param_3 + 2;
        *param_3 = lVar12;
      }
    }
    bVar2 = uVar5 < uVar13;
    uVar5 = uVar5 - uVar13;
    if (bVar2) {
LAB_0086049c:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x8604a0);
      (*pcVar1)();
    }
  }
LAB_00860454:
  uVar3 = (undefined4)param_1[5];
  auVar21._4_4_ = uVar3;
  auVar21._0_4_ = uVar3;
  auVar21._8_4_ = uVar3;
  auVar21._12_4_ = uVar3;
  auVar19 = NEON_ushl(auVar21,auVar19,4);
  *(uint *)(param_2 + lVar12) =
       CONCAT13(auVar19[0xc],CONCAT12(auVar19[8],CONCAT11(auVar19[4],auVar19[0])));
  *param_3 = *param_3 + 4;
LAB_00860478:
  return (ulong)(lVar4 + lVar18) <= param_4;
}


// ===== 008604a0  FUN_008604a0 =====

long FUN_008604a0(long param_1)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  ushort *puVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  
  piVar2 = *(int **)(param_1 + 0x10);
  piVar3 = *(int **)(param_1 + 0x18);
  if (piVar2 == piVar3) {
    lVar4 = 0xc;
  }
  else {
    iVar10 = *piVar2;
    uVar8 = 0xffffffffffffffff;
    lVar4 = 0xc;
    uVar5 = ((long)piVar3 - (long)piVar2 >> 3) * -0x5555555555555555;
    puVar7 = (ushort *)(piVar2 + 1);
    uVar6 = (uint)*puVar7;
    uVar9 = uVar5;
    do {
      if (*(int *)(puVar7 + -2) != iVar10) {
        if (uVar5 <= uVar8) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                    );
        }
        iVar10 = puVar7[-0xc] - uVar6;
        uVar6 = (uint)*puVar7;
        uVar1 = iVar10 * 2 + 2;
        lVar4 = lVar4 + (ulong)((uVar1 & 0x1fffe) + (uVar1 & 2) + 8);
        iVar10 = *(int *)(puVar7 + -2);
      }
      uVar9 = uVar9 - 1;
      puVar7 = puVar7 + 0xc;
      uVar8 = uVar8 + 1;
    } while (uVar9 != 0);
    uVar6 = (*(ushort *)(piVar3 + -5) - uVar6) * 2 + 2;
    lVar4 = lVar4 + (ulong)((uVar6 & 0x1fffe) + (uVar6 & 2) + 8);
  }
  return lVar4;
}


// ===== 00860588  FUN_00860588 =====

bool FUN_00860588(long param_1,long param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  bool bVar7;
  undefined8 *puVar8;
  uint *puVar9;
  uint *puVar10;
  int iVar11;
  ulong uVar12;
  uint *puVar13;
  uint uVar14;
  uint local_78;
  short sStack_74;
  undefined2 uStack_72;
  ulong uStack_70;
  byte local_68;
  undefined7 uStack_67;
  
  uVar2 = *(uint *)(param_2 + 4);
  bVar7 = false;
  if ((7 < uVar2) && ((uVar2 & 3) == 0)) {
    puVar9 = *(uint **)(param_2 + 8);
    puVar10 = puVar9 + 1;
    uVar3 = (*puVar9 & 0xff00ff00) >> 8 | (*puVar9 & 0xff00ff) << 8;
    *(uint *)(param_1 + 8) = uVar3 >> 0x10 | uVar3 << 0x10;
    puVar13 = (uint *)((long)puVar9 + ((ulong)uVar2 - 4));
    uVar2 = (*puVar13 & 0xff00ff00) >> 8 | (*puVar13 & 0xff00ff) << 8;
    *(uint *)(param_1 + 0x28) = uVar2 >> 0x10 | uVar2 << 0x10;
    puVar9 = puVar9 + 3;
    while (puVar9 < puVar13) {
      uVar3 = (uint)(*(ushort *)((long)puVar10 + 6) >> 8);
      uVar2 = uVar3 | (*(ushort *)((long)puVar10 + 6) & 0xff00ff) << 8;
      if (puVar13 < (uint *)((long)puVar9 + (ulong)uVar2 * 2)) {
        return false;
      }
      if (uVar2 != 0) {
        uVar6 = puVar10[1];
        uVar14 = 0;
        uVar4 = (*puVar10 & 0xff00ff00) >> 8 | (*puVar10 & 0xff00ff) << 8;
        uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
        do {
          puVar10 = puVar9;
          sStack_74 = ((ushort)uVar6 >> 8 | (ushort)(((ushort)uVar6 & 0xff00ff) << 8)) +
                      (short)uVar14;
          uVar12 = (ulong)(byte)*puVar10 << 8;
          if ((uint)uVar12 >> 0xf == 0) {
LAB_0086066c:
            uStack_70 = 0x8000000000000000;
          }
          else {
            uVar12 = uVar12 & 0x1f00 | (ulong)*(byte *)((long)puVar10 + 1);
            iVar11 = (int)uVar12;
            if (iVar11 == 0x1ffe) {
              uStack_70 = 0x7fffffffffffffff;
            }
            else {
              if (iVar11 == 0x1fff) goto LAB_0086066c;
              uStack_70 = uVar12 * 1000000 >> 10;
            }
          }
          puVar1 = *(undefined8 **)(param_1 + 0x18);
          bVar5 = (byte)*puVar10 >> 5;
          local_68 = bVar5 & 3;
          local_78 = uVar4;
          if (puVar1 < *(undefined8 **)(param_1 + 0x20)) {
            if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                        );
            }
            puVar8 = puVar1 + 3;
            puVar1[2] = CONCAT71(uStack_67,bVar5) & 0xffffffffffffff03;
            puVar1[1] = uStack_70;
            *puVar1 = CONCAT26(uStack_72,CONCAT24(sStack_74,uVar4));
          }
          else {
            puVar8 = (undefined8 *)FUN_008608d8(param_1 + 0x10,&local_78);
          }
          uVar14 = uVar14 + 1;
          *(undefined8 **)(param_1 + 0x18) = puVar8;
          puVar9 = (uint *)((long)puVar10 + 2);
        } while (uVar2 != uVar14);
        puVar9 = (uint *)((long)puVar10 + 2);
      }
      puVar10 = (uint *)((long)puVar9 + (ulong)((uVar3 & 1) << 1));
      puVar9 = puVar10 + 2;
    }
    bVar7 = puVar10 == puVar13;
  }
  return bVar7;
}


// ===== 0086073c  FUN_0086073c =====

void FUN_0086073c(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  pvVar1 = (void *)param_1[2];
  *param_1 = &PTR_FUN_00d3a820;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  pvVar2 = (void *)param_1[3];
  uVar3 = (ulong)(((long)pvVar1 - (long)pvVar2) * 0x1555555555555555) >> 3;
  uVar4 = (long)pvVar2 * -0x1555555555555555 - 8U >> 3;
  if (uVar4 <= uVar3) {
    uVar3 = uVar4;
  }
  if ((1 < uVar3) && ((((int)pvVar1 - (int)pvVar2 | -(int)pvVar2) & 7U) == 0)) {
    uVar3 = uVar3 & 0x1ffffffffffffffe;
    pvVar2 = (void *)((long)pvVar2 + uVar3 * -0x18);
    do {
      uVar3 = uVar3 - 2;
    } while (uVar3 != 0);
  }
  do {
    if (pvVar2 == pvVar1) {
      param_1[3] = pvVar1;
      operator_delete(pvVar1);
      return;
    }
    pvVar2 = (void *)((long)pvVar2 + -0x18);
  } while (pvVar2 != (void *)0x0);
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00860800  FUN_00860800 =====

void FUN_00860800(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  pvVar1 = (void *)param_1[2];
  *param_1 = &PTR_FUN_00d3a820;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[3];
    uVar3 = (ulong)(((long)pvVar1 - (long)pvVar2) * 0x1555555555555555) >> 3;
    uVar4 = (long)pvVar2 * -0x1555555555555555 - 8U >> 3;
    if (uVar4 <= uVar3) {
      uVar3 = uVar4;
    }
    if ((1 < uVar3) && ((((int)pvVar1 - (int)pvVar2 | -(int)pvVar2) & 7U) == 0)) {
      uVar3 = uVar3 & 0x1ffffffffffffffe;
      pvVar2 = (void *)((long)pvVar2 + uVar3 * -0x18);
      do {
        uVar3 = uVar3 - 2;
      } while (uVar3 != 0);
    }
    while (pvVar2 != pvVar1) {
      pvVar2 = (void *)((long)pvVar2 + -0x18);
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    param_1[3] = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 008608d8  FUN_008608d8 =====

undefined8 * FUN_008608d8(long *param_1,undefined8 *param_2)

{
  void *pvVar1;
  void *pvVar2;
  size_t __n;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  void *__dest;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar6 = (undefined8 *)(param_1[1] - *param_1);
  uVar3 = ((long)puVar6 >> 3) * -0x5555555555555555 + 1;
  if (0xaaaaaaaaaaaaaaa < uVar3) {
    FUN_008609f8();
LAB_008609f4:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  lVar4 = param_1[2] - *param_1 >> 3;
  uVar5 = lVar4 * 0x5555555555555556;
  if (uVar5 < uVar3 || uVar5 - uVar3 == 0) {
    uVar5 = uVar3;
  }
  if (0x555555555555554 < (ulong)(lVar4 * -0x5555555555555555)) {
    uVar5 = 0xaaaaaaaaaaaaaaa;
  }
  if (uVar5 == 0) {
    pvVar1 = (void *)0x0;
  }
  else {
    if (0xaaaaaaaaaaaaaaa < uVar5) goto LAB_008609f4;
    pvVar1 = operator_new(uVar5 * 0x18);
    puVar6 = (undefined8 *)((long)pvVar1 + (long)puVar6);
  }
  if (puVar6 != (undefined8 *)0x0) {
    uVar8 = param_2[1];
    uVar7 = *param_2;
    puVar6[2] = param_2[2];
    puVar6[1] = uVar8;
    *puVar6 = uVar7;
    __n = param_1[1] - *param_1;
    __dest = (void *)((long)puVar6 - __n);
    memcpy(__dest,(void *)*param_1,__n);
    pvVar2 = (void *)*param_1;
    *param_1 = (long)__dest;
    param_1[1] = (long)(puVar6 + 3);
    param_1[2] = (long)((long)pvVar1 + uVar5 * 0x18);
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
    return puVar6 + 3;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 008609f8  FUN_008609f8 =====

void FUN_008609f8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00860a10  FUN_00860a10 =====

void FUN_00860a10(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_00d3a850;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  FUN_0086141c(param_1 + 4);
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  return;
}


// ===== 00860a5c  FUN_00860a5c =====

void FUN_00860a5c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d3a850;
  if (*(char *)(param_1 + 10) == '\x01') {
    FUN_00861afc(param_1 + 7);
  }
  FUN_0086142c(param_1 + 4);
  return;
}


// ===== 00860aa4  FUN_00860aa4 =====

void FUN_00860aa4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d3a850;
  if (*(char *)(param_1 + 10) == '\x01') {
    FUN_00861afc(param_1 + 7);
  }
  FUN_0086142c(param_1 + 4);
  operator_delete(param_1);
  return;
}


// ===== 00860af8  FUN_00860af8 =====

undefined8 FUN_00860af8(long param_1,long param_2)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  ushort uVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  char *pcVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  char *pcVar12;
  
  if (*(uint *)(param_2 + 4) < 4) {
    uVar6 = FUN_004022fc();
    if ((uVar6 & 1) == 0) {
      pcVar8 = "Packet is too small to be an ExtendedReports packet.";
      uVar7 = 0x1d2;
LAB_00860b48:
      FUN_00623bb0(&DAT_001f4e98,"../../modules/rtp_rtcp/source/rtcp_packet/extended_reports.cc",
                   uVar7,pcVar8);
    }
LAB_00860b4c:
    uVar7 = 0;
  }
  else {
    uVar5 = (**(uint **)(param_2 + 8) & 0xff00ff00) >> 8 |
            (**(uint **)(param_2 + 8) & 0xff00ff) << 8;
    *(uint *)(param_1 + 8) = uVar5 >> 0x10 | uVar5 << 0x10;
    if (*(char *)(param_1 + 0x18) == '\x01') {
      *(undefined1 *)(param_1 + 0x18) = 0;
    }
    lVar10 = *(long *)(param_1 + 0x20);
    lVar9 = *(long *)(param_1 + 0x28);
    uVar6 = (ulong)((lVar10 - lVar9) * 0x1555555555555555) >> 2;
    uVar11 = lVar9 * -0x1555555555555555 - 4U >> 2;
    if (uVar11 <= uVar6) {
      uVar6 = uVar11;
    }
    if ((1 < uVar6) && ((((int)lVar10 - (int)lVar9 | -(int)lVar9) & 3U) == 0)) {
      uVar6 = uVar6 & 0x3ffffffffffffffe;
      lVar9 = lVar9 + uVar6 * -0xc;
      do {
        uVar6 = uVar6 - 2;
      } while (uVar6 != 0);
    }
    while (lVar9 != lVar10) {
      lVar9 = lVar9 + -0xc;
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    *(long *)(param_1 + 0x28) = lVar10;
    if (*(char *)(param_1 + 0x50) == '\x01') {
      FUN_00861afc(param_1 + 0x38);
      *(undefined1 *)(param_1 + 0x50) = 0;
    }
    lVar10 = *(long *)(param_2 + 8);
    uVar7 = 1;
    pcVar2 = (char *)(lVar10 + (ulong)*(uint *)(param_2 + 4));
    pcVar8 = (char *)(lVar10 + 8);
    if (pcVar8 <= pcVar2) {
      pcVar12 = (char *)(lVar10 + 4);
      do {
        uVar4 = *(ushort *)(pcVar12 + 2);
        pcVar1 = pcVar8 + (ulong)((uint)(uVar4 >> 8) | (uVar4 & 0xff00ff) << 8) * 4;
        if (pcVar2 < pcVar1) {
          uVar6 = FUN_004022fc(1);
          if ((uVar6 & 1) != 0) goto LAB_00860b4c;
          pcVar8 = "Report block in extended report packet is too big.";
          uVar7 = 0x27a;
          goto LAB_00860b48;
        }
        cVar3 = *pcVar12;
        uVar5 = (uint)(uVar4 >> 8) | (uVar4 & 0xff00ff) << 8;
        if (cVar3 == '*') {
          if (*(char *)(param_1 + 0x50) == '\x01') {
            FUN_00861afc(param_1 + 0x38);
            *(undefined1 *)(param_1 + 0x50) = 0;
          }
          if (param_1 == -0x38) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          FUN_00861a38(param_1 + 0x38);
          *(undefined1 *)(param_1 + 0x50) = 1;
          FUN_00861ba4(param_1 + 0x38,pcVar12,uVar5);
        }
        else if (cVar3 == '\x05') {
          if (*(long *)(param_1 + 0x20) == *(long *)(param_1 + 0x28)) {
            FUN_008614e4((long *)(param_1 + 0x20),pcVar12,uVar5);
          }
          else {
            uVar6 = FUN_004022fc(1);
            if ((uVar6 & 1) == 0) {
              FUN_00623bb0(&DAT_001f4e98,
                           "../../modules/rtp_rtcp/source/rtcp_packet/extended_reports.cc",0x5d2,
                           "Two Dlrr blocks found in same Extended Report packet");
            }
          }
        }
        else if (cVar3 == '\x04') {
          FUN_00860dbc(param_1,pcVar12,uVar5);
        }
        else {
          uVar6 = FUN_004022fc(1);
          if ((uVar6 & 1) == 0) {
            FUN_00623bb0(&DAT_001f4e94,
                         "../../modules/rtp_rtcp/source/rtcp_packet/extended_reports.cc",0x2fa,
                         "Unknown extended report block type ",cVar3);
          }
        }
        pcVar8 = pcVar1 + 4;
        uVar7 = 1;
        pcVar12 = pcVar1;
      } while (pcVar8 <= pcVar2);
    }
  }
  return uVar7;
}


// ===== 00860dbc  FUN_00860dbc =====

void FUN_00860dbc(long param_1,undefined8 param_2,short param_3)

{
  ulong uVar1;
  
  if (param_3 == 2) {
    if (*(char *)(param_1 + 0x18) != '\x01') {
      if (param_1 != -0x10) {
        *(undefined8 *)(param_1 + 0x10) = 0;
        *(undefined1 *)(param_1 + 0x18) = 1;
        FUN_00862468();
        return;
      }
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    uVar1 = FUN_004022fc();
    if ((uVar1 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../modules/rtp_rtcp/source/rtcp_packet/extended_reports.cc",
                   0x57a,"Two rrtr blocks found in same Extended Report packet");
      return;
    }
  }
  else {
    uVar1 = FUN_004022fc();
    if ((uVar1 & 1) == 0) {
      FUN_00623bb0(&DAT_001f6148,"../../modules/rtp_rtcp/source/rtcp_packet/extended_reports.cc",
                   0x552,"Incorrect rrtr block size ",param_3," Should be ",2);
      return;
    }
  }
  return;
}


// ===== 00860eac  FUN_00860eac =====

void FUN_00860eac(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  if ((*(char *)(param_1 + 0x18) == '\x01') && (uVar1 = FUN_004022fc(), (uVar1 & 1) == 0)) {
    FUN_00623bb0(&DAT_001f4e98,"../../modules/rtp_rtcp/source/rtcp_packet/extended_reports.cc",0x35a
                 ,"Rrtr already set, overwriting.");
  }
  if (*(char *)(param_1 + 0x18) == '\x01') {
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  if (param_1 != -0x10) {
    *(undefined8 *)(param_1 + 0x10) = *param_2;
    *(undefined1 *)(param_1 + 0x18) = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00860f4c  FUN_00860f4c =====

bool FUN_00860f4c(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  uVar5 = ((long)puVar1 - *(long *)(param_1 + 0x20) >> 2) * -0x5555555555555555;
  if (uVar5 < 0x32) {
    if (puVar1 < *(undefined8 **)(param_1 + 0x30)) {
      if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      uVar4 = *param_2;
      lVar3 = (long)puVar1 + 0xc;
      *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_2 + 1);
      *puVar1 = uVar4;
    }
    else {
      lVar3 = FUN_008612fc();
    }
    *(long *)(param_1 + 0x28) = lVar3;
  }
  else {
    uVar2 = FUN_004022fc();
    if ((uVar2 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../modules/rtp_rtcp/source/rtcp_packet/extended_reports.cc",
                   0x38a,"Reached maximum number of DLRR items.");
    }
  }
  return uVar5 < 0x32;
}


// ===== 00861008  FUN_00861008 =====

void FUN_00861008(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  if ((*(char *)(param_1 + 0x50) == '\x01') && (uVar1 = FUN_004022fc(), (uVar1 & 1) == 0)) {
    FUN_00623bb0(&DAT_001f4e98,"../../modules/rtp_rtcp/source/rtcp_packet/extended_reports.cc",0x3d2
                 ,"TargetBitrate already set, overwriting.");
  }
  if (*(char *)(param_1 + 0x50) == '\x01') {
    FUN_00861ab4(param_1 + 0x38,param_2);
    return;
  }
  if (param_1 + 0x38 != 0) {
    FUN_00861a48(param_1 + 0x38,param_2);
    *(undefined1 *)(param_1 + 0x50) = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 008610c4  FUN_008610c4 =====

long FUN_008610c4(long param_1)

{
  long lVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  
  cVar2 = *(char *)(param_1 + 0x18);
  lVar3 = FUN_00861980(param_1 + 0x20);
  if (*(char *)(param_1 + 0x50) == '\x01') {
    lVar4 = FUN_00861d58(param_1 + 0x38);
  }
  else {
    lVar4 = 0;
  }
  lVar1 = 0x14;
  if (cVar2 == '\0') {
    lVar1 = 8;
  }
  return lVar1 + lVar3 + lVar4;
}


// ===== 00861134  FUN_00861134 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00861134(long *param_1,long param_2,long *param_3,ulong param_4,undefined8 param_5,
                 undefined8 param_6)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  do {
    lVar8 = *param_3;
    lVar2 = (**(code **)(*param_1 + 0x10))(param_1);
    if ((ulong)(lVar2 + lVar8) <= param_4) {
      lVar9 = *param_3;
      lVar4 = (**(code **)(*param_1 + 0x10))(param_1);
      uVar5 = FUN_007cd5b4(param_1);
      FUN_007cd5e0(0,0xcf,uVar5,param_2,param_3);
      uVar1 = (undefined4)param_1[1];
      auVar10._4_4_ = uVar1;
      auVar10._0_4_ = uVar1;
      auVar10._8_4_ = uVar1;
      auVar10._12_4_ = uVar1;
      auVar11._8_8_ = _UNK_001f3918;
      auVar11._0_8_ = _DAT_001f3910;
      auVar11 = NEON_ushl(auVar10,auVar11,4);
      *(uint *)(param_2 + *param_3) =
           CONCAT13(auVar11[0xc],CONCAT12(auVar11[8],CONCAT11(auVar11[4],auVar11[0])));
      lVar6 = *param_3 + 4;
      *param_3 = lVar6;
      if ((char)param_1[3] == '\x01') {
        FUN_0086247c(param_1 + 2,param_2 + lVar6);
        lVar6 = *param_3 + 0xc;
        *param_3 = lVar6;
      }
      plVar7 = param_1 + 4;
      if (*plVar7 != param_1[5]) {
        FUN_00861998(plVar7,param_2 + lVar6);
        lVar6 = FUN_00861980(plVar7);
        lVar6 = *param_3 + lVar6;
        *param_3 = lVar6;
      }
      if ((char)param_1[10] == '\x01') {
        FUN_00861d70(param_1 + 7,param_2 + lVar6);
        if ((*(byte *)(param_1 + 10) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/optional:1054: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                    );
        }
        lVar6 = FUN_00861d58(param_1 + 7);
        lVar6 = *param_3 + lVar6;
        *param_3 = lVar6;
      }
      if (lVar6 != lVar4 + lVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_0061fd88("../../modules/rtp_rtcp/source/rtcp_packet/extended_reports.cc",0x9d,
                     "*index == index_end",&DAT_001fb920);
      }
      break;
    }
    uVar3 = FUN_007cd570(param_1,param_2,param_3,param_5,param_6);
  } while ((uVar3 & 1) != 0);
  return (ulong)(lVar2 + lVar8) <= param_4;
}


// ===== 008612fc  FUN_008612fc =====

long FUN_008612fc(long *param_1,undefined8 *param_2)

{
  void *pvVar1;
  void *pvVar2;
  size_t __n;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  void *__dest;
  
  puVar7 = (undefined8 *)(param_1[1] - *param_1);
  uVar3 = ((long)puVar7 >> 2) * -0x5555555555555555 + 1;
  if (0x1555555555555555 < uVar3) {
    FUN_008570ec();
LAB_00861418:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  lVar4 = param_1[2] - *param_1 >> 2;
  uVar6 = lVar4 * 0x5555555555555556;
  if (uVar6 < uVar3 || uVar6 - uVar3 == 0) {
    uVar6 = uVar3;
  }
  if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar4 * -0x5555555555555555)) {
    uVar6 = 0x1555555555555555;
  }
  if (uVar6 == 0) {
    pvVar1 = (void *)0x0;
  }
  else {
    if (0x1555555555555555 < uVar6) goto LAB_00861418;
    pvVar1 = operator_new(uVar6 * 0xc);
    puVar7 = (undefined8 *)((long)pvVar1 + (long)puVar7);
  }
  if (puVar7 != (undefined8 *)0x0) {
    uVar5 = *param_2;
    *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(param_2 + 1);
    *puVar7 = uVar5;
    __n = param_1[1] - *param_1;
    __dest = (void *)((long)puVar7 - __n);
    memcpy(__dest,(void *)*param_1,__n);
    pvVar2 = (void *)*param_1;
    *param_1 = (long)__dest;
    param_1[1] = (long)puVar7 + 0xc;
    param_1[2] = (long)((long)pvVar1 + uVar6 * 0xc);
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
    return (long)puVar7 + 0xc;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0086141c  FUN_0086141c =====

void FUN_0086141c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// ===== 0086142c  FUN_0086142c =====

void FUN_0086142c(undefined8 *param_1)

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
  uVar3 = (ulong)(((long)pvVar1 - (long)pvVar2) * 0x1555555555555555) >> 2;
  uVar4 = (long)pvVar2 * -0x1555555555555555 - 4U >> 2;
  if (uVar4 <= uVar3) {
    uVar3 = uVar4;
  }
  if ((1 < uVar3) && ((((int)pvVar1 - (int)pvVar2 | -(int)pvVar2) & 3U) == 0)) {
    uVar3 = uVar3 & 0x3ffffffffffffffe;
    pvVar2 = (void *)((long)pvVar2 + uVar3 * -0xc);
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
    pvVar2 = (void *)((long)pvVar2 + -0xc);
  } while (pvVar2 != (void *)0x0);
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 008614e4  FUN_008614e4 =====

bool FUN_008614e4(long *param_1,long param_2,uint param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  ulong uVar4;
  uint *puVar5;
  uint *puVar6;
  
  param_3 = param_3 + ((param_3 & 0xffff) / 3) * -3;
  if ((param_3 & 0xffff) == 0) {
    FUN_008615b0();
    puVar5 = (uint *)*param_1;
    puVar2 = (uint *)param_1[1];
    if (puVar5 != puVar2) {
      puVar6 = (uint *)(param_2 + 4);
      do {
        uVar3 = (*puVar6 & 0xff00ff00) >> 8 | (*puVar6 & 0xff00ff) << 8;
        *puVar5 = uVar3 >> 0x10 | uVar3 << 0x10;
        uVar3 = (puVar6[1] & 0xff00ff00) >> 8 | (puVar6[1] & 0xff00ff) << 8;
        puVar5[1] = uVar3 >> 0x10 | uVar3 << 0x10;
        puVar1 = puVar6 + 2;
        puVar6 = puVar6 + 3;
        uVar3 = (*puVar1 & 0xff00ff00) >> 8 | (*puVar1 & 0xff00ff) << 8;
        puVar5[2] = uVar3 >> 0x10 | uVar3 << 0x10;
        puVar5 = puVar5 + 3;
      } while (puVar5 != puVar2);
    }
  }
  else {
    uVar4 = FUN_004022fc();
    if ((uVar4 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../modules/rtp_rtcp/source/rtcp_packet/dlrr.cc",0x1a2,
                   "Invalid size for dlrr block.");
    }
  }
  return (param_3 & 0xffff) == 0;
}


// ===== 008615b0  FUN_008615b0 =====

void FUN_008615b0(undefined8 *param_1,ulong param_2)

{
  void *__src;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  bool bVar3;
  void *pvVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  size_t __n;
  int iVar16;
  
  __src = (void *)*param_1;
  puVar10 = (undefined8 *)param_1[1];
  __n = (long)puVar10 - (long)__src;
  bVar3 = param_2 < (ulong)(((long)__n >> 2) * -0x5555555555555555);
  lVar9 = param_2 + ((long)__n >> 2) * 0x5555555555555555;
  iVar16 = (int)puVar10;
  if (bVar3 || lVar9 == 0) {
    if (bVar3) {
      puVar6 = (undefined8 *)((long)__src + param_2 * 0xc);
      uVar5 = (ulong)(((long)puVar6 - (long)puVar10) * 0x1555555555555555) >> 2;
      uVar11 = (long)puVar10 * -0x1555555555555555 - 4U >> 2;
      if (uVar11 <= uVar5) {
        uVar5 = uVar11;
      }
      if ((1 < uVar5) && ((((int)__src - iVar16 | -iVar16) & 3U) == 0)) {
        uVar5 = uVar5 & 0x3ffffffffffffffe;
        puVar10 = (undefined8 *)((long)puVar10 + uVar5 * -0xc);
        do {
          uVar5 = uVar5 - 2;
        } while (uVar5 != 0);
      }
      while (puVar10 != puVar6) {
        puVar10 = (undefined8 *)((long)puVar10 + -0xc);
        if (puVar10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      param_1[1] = puVar6;
    }
  }
  else {
    lVar7 = param_1[2] - (long)__src >> 2;
    uVar5 = lVar7 * -0x5555555555555555;
    if (uVar5 < param_2) {
      if (param_2 < 0x1555555555555556) {
        uVar11 = lVar7 * 0x5555555555555556;
        if (uVar11 < param_2 || uVar11 - param_2 == 0) {
          uVar11 = param_2;
        }
        if (0xaaaaaaaaaaaaaa9 < uVar5) {
          uVar11 = 0x1555555555555555;
        }
        if (uVar11 < 0x1555555555555556) {
          pvVar4 = operator_new(uVar11 * 0xc);
          uVar5 = (long)pvVar4 + __n;
          if (lVar9 * 0xc == 0) {
            puVar6 = (undefined8 *)((long)pvVar4 + __n);
          }
          else {
            puVar6 = (undefined8 *)(uVar5 + lVar9 * 0xc);
            uVar14 = (long)__src + (-(long)pvVar4 - (long)puVar10);
            uVar15 = uVar14 * 0x2aaaaaaaaaaaaaab >> 2;
            uVar12 = (-__n + param_2 * 0xc) * 0x2aaaaaaaaaaaaaab - 4 >> 2;
            uVar8 = uVar15;
            if (uVar12 <= uVar15) {
              uVar8 = uVar12;
            }
            if (uVar8 < 0x1c) {
              puVar10 = (undefined8 *)((long)pvVar4 + __n);
            }
            else {
              uVar12 = (-__n + param_2 * 0xc + -0xc) * 0x2aaaaaaaaaaaaaab >> 2;
              if (uVar12 <= uVar15) {
                uVar15 = uVar12;
              }
              auVar2._8_8_ = 0;
              auVar2._0_8_ = uVar15;
              if ((uVar14 & 3) == 0) {
                if (uVar5 + uVar15 * 0xc < uVar5) {
                  puVar10 = (undefined8 *)((long)pvVar4 + __n);
                }
                else if (SUB168(auVar2 * ZEXT816(0xc),8) == 0) {
                  uVar15 = uVar8 + 1 & 7;
                  uVar12 = 8;
                  if (uVar15 != 0) {
                    uVar12 = uVar15;
                  }
                  lVar9 = ~uVar8 + uVar12;
                  puVar13 = (undefined8 *)((long)pvVar4 + __n);
                  puVar10 = (undefined8 *)(uVar5 + ((uVar8 + 1) - uVar12) * 0xc);
                  do {
                    puVar13[1] = 0;
                    *puVar13 = 0;
                    puVar13[3] = 0;
                    puVar13[2] = 0;
                    lVar9 = lVar9 + 8;
                    puVar13[5] = 0;
                    puVar13[4] = 0;
                    puVar13[7] = 0;
                    puVar13[6] = 0;
                    puVar13[9] = 0;
                    puVar13[8] = 0;
                    puVar13[0xb] = 0;
                    puVar13[10] = 0;
                    puVar13 = puVar13 + 0xc;
                  } while (lVar9 != 0);
                }
                else {
                  puVar10 = (undefined8 *)((long)pvVar4 + __n);
                }
              }
              else {
                puVar10 = (undefined8 *)((long)pvVar4 + __n);
              }
            }
            do {
              if (puVar10 == (undefined8 *)0x0) goto LAB_00861964;
              *puVar10 = 0;
              *(undefined4 *)(puVar10 + 1) = 0;
              puVar10 = (undefined8 *)((long)puVar10 + 0xc);
            } while (puVar10 != puVar6);
          }
          memcpy((void *)(uVar5 - __n),__src,__n);
          *param_1 = (void *)(uVar5 - __n);
          param_1[1] = puVar6;
          param_1[2] = (void *)((long)pvVar4 + uVar11 * 0xc);
          if (__src == (void *)0x0) {
            return;
          }
          operator_delete(__src);
          return;
        }
      }
      else {
        FUN_008570ec();
      }
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    puVar6 = puVar10;
    if (lVar9 * 0xc != 0) {
      puVar6 = (undefined8 *)((long)puVar10 + lVar9 * 0xc);
      uVar11 = (ulong)((long)puVar10 * -0x2aaaaaaaaaaaaaab) >> 2;
      uVar8 = (-__n + param_2 * 0xc) * 0x2aaaaaaaaaaaaaab - 4 >> 2;
      uVar5 = uVar11;
      if (uVar8 <= uVar11) {
        uVar5 = uVar8;
      }
      puVar13 = puVar10;
      if (0x17 < uVar5) {
        uVar8 = (-__n + param_2 * 0xc + -0xc) * 0x2aaaaaaaaaaaaaab >> 2;
        if (uVar8 <= uVar11) {
          uVar11 = uVar8;
        }
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar11;
        if ((((-iVar16 & 3U) == 0) && (puVar10 <= (undefined8 *)((long)puVar10 + uVar11 * 0xc))) &&
           (SUB168(auVar1 * ZEXT816(0xc),8) == 0)) {
          uVar11 = uVar5 + 1 & 7;
          uVar8 = 8;
          if (uVar11 != 0) {
            uVar8 = uVar11;
          }
          lVar9 = ~uVar5 + uVar8;
          puVar13 = (undefined8 *)((long)puVar10 + ((uVar5 + 1) - uVar8) * 0xc);
          do {
            puVar10[1] = 0;
            *puVar10 = 0;
            puVar10[3] = 0;
            puVar10[2] = 0;
            lVar9 = lVar9 + 8;
            puVar10[5] = 0;
            puVar10[4] = 0;
            puVar10[7] = 0;
            puVar10[6] = 0;
            puVar10[9] = 0;
            puVar10[8] = 0;
            puVar10[0xb] = 0;
            puVar10[10] = 0;
            puVar10 = puVar10 + 0xc;
          } while (lVar9 != 0);
        }
      }
      do {
        if (puVar13 == (undefined8 *)0x0) {
LAB_00861964:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        *puVar13 = 0;
        *(undefined4 *)(puVar13 + 1) = 0;
        puVar13 = (undefined8 *)((long)puVar13 + 0xc);
      } while (puVar13 != puVar6);
    }
    param_1[1] = puVar6;
  }
  return;
}


// ===== 00861980  FUN_00861980 =====

long FUN_00861980(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_1[1] - *param_1 != 0) {
    lVar1 = (param_1[1] - *param_1) + 4;
  }
  return lVar1;
}


// ===== 00861998  FUN_00861998 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00861998(long *param_1,undefined2 *param_2)

{
  undefined4 *puVar1;
  long lVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined1 auVar6 [16];
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  if (*param_1 != param_1[1]) {
    *param_2 = 5;
    lVar2 = *param_1;
    lVar3 = param_1[1];
    *(char *)(param_2 + 1) = (char)((ulong)(lVar3 - lVar2) >> 10);
    *(char *)((long)param_2 + 3) = (char)((ulong)(lVar3 - lVar2) >> 2);
    auVar6 = _DAT_001f3910;
    puVar7 = (undefined4 *)*param_1;
    puVar4 = (undefined4 *)param_1[1];
    if (puVar7 != puVar4) {
      puVar8 = (undefined4 *)(param_2 + 2);
      do {
        uVar5 = *puVar7;
        auVar9._4_4_ = uVar5;
        auVar9._0_4_ = uVar5;
        auVar9._8_4_ = uVar5;
        auVar9._12_4_ = uVar5;
        auVar9 = NEON_ushl(auVar9,auVar6,4);
        *puVar8 = CONCAT13(auVar9[0xc],CONCAT12(auVar9[8],CONCAT11(auVar9[4],auVar9[0])));
        uVar5 = puVar7[1];
        auVar10._4_4_ = uVar5;
        auVar10._0_4_ = uVar5;
        auVar10._8_4_ = uVar5;
        auVar10._12_4_ = uVar5;
        puVar1 = puVar7 + 2;
        puVar7 = puVar7 + 3;
        auVar9 = NEON_ushl(auVar10,auVar6,4);
        puVar8[1] = CONCAT13(auVar9[0xc],CONCAT12(auVar9[8],CONCAT11(auVar9[4],auVar9[0])));
        uVar5 = *puVar1;
        auVar11._4_4_ = uVar5;
        auVar11._0_4_ = uVar5;
        auVar11._8_4_ = uVar5;
        auVar11._12_4_ = uVar5;
        auVar9 = NEON_ushl(auVar11,auVar6,4);
        puVar8[2] = CONCAT13(auVar9[0xc],CONCAT12(auVar9[8],CONCAT11(auVar9[4],auVar9[0])));
        puVar8 = puVar8 + 3;
      } while (puVar7 != puVar4);
    }
  }
  return;
}


// ===== 00861a38  FUN_00861a38 =====

void FUN_00861a38(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// ===== 00861a48  FUN_00861a48 =====

long * FUN_00861a48(long *param_1,undefined8 *param_2)

{
  void *__src;
  ulong __n;
  void *__dest;
  long *plVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  __src = (void *)*param_2;
  __n = param_2[1] - (long)__src;
  plVar1 = param_1;
  if (__n != 0) {
    if ((long)__n < 0) {
      auVar3 = FUN_00862134();
      plVar2 = auVar3._8_8_;
      plVar1 = auVar3._0_8_;
      if (plVar1 != plVar2) {
        FUN_0086214c(plVar1,*plVar2,plVar2[1],plVar2[1] - *plVar2 >> 3);
      }
      return plVar1;
    }
    __dest = operator_new(__n);
    *param_1 = (long)__dest;
    param_1[1] = (long)__dest;
    param_1[2] = (long)__dest + __n;
    plVar1 = (long *)memcpy(__dest,__src,__n);
    param_1[1] = (long)__dest + __n;
  }
  return plVar1;
}


// ===== 00861ab4  FUN_00861ab4 =====

long * FUN_00861ab4(long *param_1,long *param_2)

{
  if (param_1 != param_2) {
    FUN_0086214c(param_1,*param_2,param_2[1],param_2[1] - *param_2 >> 3);
  }
  return param_1;
}


// ===== 00861afc  FUN_00861afc =====

void FUN_00861afc(undefined8 *param_1)

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
  uVar4 = (ulong)((long)pvVar2 + (-8 - ((long)pvVar2 << 0x3d))) >> 3;
  uVar3 = (ulong)(((long)pvVar1 - (long)pvVar2 << 0x3d) - ((long)pvVar1 - (long)pvVar2)) >> 3;
  if (uVar4 <= uVar3) {
    uVar3 = uVar4;
  }
  if ((1 < uVar3) && ((((int)pvVar1 - (int)pvVar2 | -(int)pvVar2) & 7U) == 0)) {
    uVar3 = uVar3 & 0x1ffffffffffffffe;
    pvVar2 = (void *)((long)pvVar2 + uVar3 * -8);
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
    pvVar2 = (void *)((long)pvVar2 + -8);
  } while (pvVar2 != (void *)0x0);
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00861ba4  FUN_00861ba4 =====

void FUN_00861ba4(long *param_1,long param_2,ushort param_3)

{
  byte bVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  byte local_18;
  byte bStack_17;
  undefined2 uStack_16;
  uint uStack_14;
  
  puVar2 = (ulong *)*param_1;
  puVar3 = (ulong *)param_1[1];
  uVar6 = (ulong)param_3;
  uVar5 = (ulong)((long)puVar3 + (-8 - ((long)puVar3 << 0x3d))) >> 3;
  uVar4 = (ulong)(((long)puVar2 - (long)puVar3 << 0x3d) - ((long)puVar2 - (long)puVar3)) >> 3;
  if (uVar5 <= uVar4) {
    uVar4 = uVar5;
  }
  if ((1 < uVar4) && ((((int)puVar2 - (int)puVar3 | -(int)puVar3) & 7U) == 0)) {
    uVar4 = uVar4 & 0x1ffffffffffffffe;
    puVar3 = puVar3 + -uVar4;
    do {
      uVar4 = uVar4 - 2;
    } while (uVar4 != 0);
  }
  do {
    if (puVar3 == puVar2) {
      param_1[1] = (long)puVar2;
      if (param_3 != 0) {
        pbVar7 = (byte *)(param_2 + 7);
        do {
          bVar1 = pbVar7[-3];
          local_18 = bVar1 >> 4;
          bStack_17 = bVar1 & 0xf;
          uStack_14 = (uint)pbVar7[-2] << 0x10 | (uint)pbVar7[-1] << 8 | (uint)*pbVar7;
          if (puVar2 < (ulong *)param_1[2]) {
            if (puVar2 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                        );
            }
            puVar3 = puVar2 + 1;
            *puVar2 = CONCAT44(uStack_14,CONCAT22(uStack_16,CONCAT11(bVar1,local_18))) &
                      0xffffffffffff0fff;
          }
          else {
            puVar3 = (ulong *)FUN_00862374(param_1,&local_18);
          }
          uVar6 = uVar6 - 1;
          pbVar7 = pbVar7 + 4;
          param_1[1] = (long)puVar3;
          puVar2 = puVar3;
        } while (uVar6 != 0);
      }
      return;
    }
    puVar3 = puVar3 + -1;
  } while (puVar3 != (ulong *)0x0);
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00861cdc  FUN_00861cdc =====

void FUN_00861cdc(long param_1,undefined1 param_2,undefined1 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_8;
  undefined1 uStack_7;
  undefined2 uStack_6;
  undefined4 uStack_4;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  local_8 = param_2;
  uStack_7 = param_3;
  uStack_4 = param_4;
  if (puVar1 < *(undefined8 **)(param_1 + 0x10)) {
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    puVar2 = puVar1 + 1;
    *puVar1 = CONCAT44(param_4,CONCAT22(uStack_6,CONCAT11(param_3,param_2)));
  }
  else {
    puVar2 = (undefined8 *)FUN_00862374(param_1,&local_8);
  }
  *(undefined8 **)(param_1 + 8) = puVar2;
  return;
}


// ===== 00861d50  FUN_00861d50 =====

void FUN_00861d50(void)

{
  return;
}


// ===== 00861d58  FUN_00861d58 =====

long FUN_00861d58(long *param_1)

{
  return (param_1[1] - *param_1 >> 1) + 4;
}


// ===== 00861d70  FUN_00861d70 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00861d70(int *param_1,undefined2 *param_2)

{
  char *pcVar1;
  byte *pbVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulong uVar9;
  char *pcVar10;
  undefined4 uVar11;
  uint uVar12;
  char *pcVar13;
  undefined1 auVar14 [16];
  uint3 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  uint uVar18;
  undefined1 auVar19 [16];
  undefined8 uVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined1 auVar29 [16];
  undefined8 uVar30;
  undefined8 uVar31;
  undefined1 auVar32 [16];
  undefined8 uVar33;
  undefined8 uVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  uint uVar37;
  uint7 uVar38;
  uint7 uVar39;
  uint7 uVar40;
  uint7 uVar41;
  uint7 uVar42;
  uint7 uVar43;
  undefined1 auVar44 [16];
  byte *pbVar45;
  ulong uVar46;
  long lVar47;
  undefined1 *puVar48;
  char *pcVar49;
  long lVar50;
  long lVar51;
  char *pcVar52;
  ulong uVar53;
  char cVar54;
  char cVar55;
  undefined1 uVar56;
  char cVar57;
  char cVar58;
  char cVar59;
  char cVar60;
  char cVar61;
  char cVar62;
  char cVar63;
  char cVar64;
  char cVar65;
  char cVar66;
  char cVar67;
  char cVar68;
  char cVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  byte bVar82;
  byte bVar83;
  byte bVar84;
  undefined2 uVar85;
  uint uVar86;
  uint uVar87;
  uint uVar88;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  
  *param_2 = 0x2a;
  uVar12 = (((uint)(param_1[2] - *param_1) >> 1) + 4 >> 2) - 1;
  param_2[1] = (ushort)(uVar12 >> 8) & 0xff | (ushort)((uVar12 & 0xff00ff) << 8);
  auVar44 = _DAT_001f25b0;
  pcVar52 = *(char **)param_1;
  pcVar10 = *(char **)(param_1 + 2);
  if (pcVar52 == pcVar10) {
    return;
  }
  pcVar49 = pcVar10 + (-8 - (long)pcVar52);
  if (((pcVar49 < (char *)0x40) || (pcVar52 + ((ulong)pcVar49 & 0xfffffffffffffff8) < pcVar52)) ||
     ((uVar46 = (ulong)pcVar49 >> 3,
      param_2 + 2 < pcVar52 + ((ulong)pcVar49 & 0xfffffffffffffff8) + 8 &&
      (pcVar52 < param_2 + uVar46 * 2 + 4)))) {
    lVar47 = 4;
    pcVar49 = pcVar52;
  }
  else {
    uVar6 = uVar46 + 1;
    if (pcVar49 < (char *)0x80) {
      lVar51 = 0;
    }
    else {
      uVar9 = 0x10;
      if ((uVar6 & 0xf) != 0) {
        uVar9 = uVar6 & 0xf;
      }
      pbVar45 = (byte *)(param_2 + 2);
      pcVar49 = pcVar52 + 0x40;
      lVar51 = uVar6 - uVar9;
      uVar53 = uVar46 + 1;
      do {
        pcVar1 = pcVar49 + -0x40;
        cVar63 = pcVar49[-0x38];
        uVar53 = uVar53 - 0x10;
        cVar64 = pcVar49[-0x30];
        cVar65 = pcVar49[-0x28];
        cVar66 = pcVar49[-0x20];
        cVar67 = pcVar49[-0x18];
        cVar68 = pcVar49[-0x10];
        cVar69 = pcVar49[-8];
        cVar54 = *pcVar49;
        pbVar2 = (byte *)(pcVar49 + -0x3f);
        uVar17 = *(undefined8 *)(pcVar49 + 0x2c);
        uVar16 = *(undefined8 *)(pcVar49 + 0x24);
        uVar21 = *(undefined8 *)(pcVar49 + 0x1c);
        uVar20 = *(undefined8 *)(pcVar49 + 0x14);
        uVar24 = *(undefined8 *)(pcVar49 + 0xc);
        uVar23 = *(undefined8 *)(pcVar49 + 4);
        bVar78 = pcVar49[-0x37];
        uVar26 = *(undefined8 *)(pcVar49 + -4);
        uVar25 = *(undefined8 *)(pcVar49 + -0xc);
        uVar28 = *(undefined8 *)(pcVar49 + -0x14);
        uVar27 = *(undefined8 *)(pcVar49 + -0x1c);
        uVar31 = *(undefined8 *)(pcVar49 + -0x24);
        uVar30 = *(undefined8 *)(pcVar49 + -0x2c);
        uVar34 = *(undefined8 *)(pcVar49 + -0x34);
        uVar33 = *(undefined8 *)(pcVar49 + -0x3c);
        bVar79 = pcVar49[-0x2f];
        uVar12 = *(uint *)(pcVar49 + 0x34);
        bVar80 = pcVar49[-0x27];
        auVar92._0_4_ = (uint)uVar23 >> 0x10;
        auVar92._4_4_ = (uint)uVar24 >> 0x10;
        auVar92._8_4_ = (uint)uVar20 >> 0x10;
        auVar92._12_4_ = (uint)(((uint6)(ushort)((ulong)uVar21 >> 0x10) << 0x20) >> 0x20);
        bVar81 = pcVar49[-0x1f];
        bVar82 = pcVar49[-0x17];
        bVar83 = pcVar49[-0xf];
        bVar84 = pcVar49[-7];
        cVar55 = pcVar49[8];
        bVar70 = pcVar49[1];
        cVar57 = pcVar49[0x10];
        bVar71 = pcVar49[9];
        cVar58 = pcVar49[0x18];
        bVar72 = pcVar49[0x11];
        cVar59 = pcVar49[0x20];
        uVar18 = *(uint *)(pcVar49 + 0x3c);
        bVar73 = pcVar49[0x19];
        cVar60 = pcVar49[0x28];
        auVar90._0_4_ = (uint)uVar16 >> 0x10;
        auVar90._4_4_ = (uint)uVar17 >> 0x10;
        auVar90._8_4_ = uVar12 >> 0x10;
        auVar90._12_4_ = uVar18 >> 0x10;
        bVar74 = pcVar49[0x21];
        cVar61 = pcVar49[0x30];
        bVar75 = pcVar49[0x29];
        pbVar7 = (byte *)(pcVar49 + 0x31);
        cVar62 = pcVar49[0x38];
        pbVar8 = (byte *)(pcVar49 + 0x39);
        pcVar49 = pcVar49 + 0x80;
        bVar76 = *pbVar7;
        bVar77 = *pbVar8;
        auVar89._4_4_ = (uint)uVar34 >> 0x10;
        auVar89._0_4_ = (uint)uVar33 >> 0x10;
        auVar89._8_4_ = (uint)uVar30 >> 0x10;
        auVar89._12_4_ = (uint)uVar31 >> 0x10;
        auVar91[4] = (char)((ulong)uVar28 >> 0x10);
        auVar91._0_4_ = (uint)uVar27 >> 0x10;
        auVar91[5] = (char)((ulong)uVar28 >> 0x18);
        auVar91._6_2_ = 0;
        auVar91._8_4_ = (uint)uVar25 >> 0x10;
        auVar91._12_4_ = (uint)(((uint6)(ushort)((ulong)uVar26 >> 0x10) << 0x20) >> 0x20);
        auVar89 = a64_TBL(ZEXT816(0),auVar89,auVar91,auVar92,auVar90,auVar44);
        uVar15 = CONCAT12((char)uVar24,(short)uVar23) & 0xff00ff;
        *pbVar45 = *pcVar1 << 4 | *pbVar2;
        pbVar45[1] = auVar89[0];
        pbVar45[2] = (byte)((ulong)uVar33 >> 8);
        pbVar45[3] = (byte)uVar33;
        pbVar45[4] = cVar63 << 4 | bVar78;
        pbVar45[5] = auVar89[1];
        pbVar45[6] = (byte)((ulong)uVar34 >> 8);
        pbVar45[7] = (byte)uVar34;
        pbVar45[8] = cVar64 << 4 | bVar79;
        pbVar45[9] = auVar89[2];
        pbVar45[10] = (byte)((ulong)uVar30 >> 8);
        pbVar45[0xb] = (byte)uVar30;
        pbVar45[0xc] = cVar65 << 4 | bVar80;
        pbVar45[0xd] = auVar89[3];
        pbVar45[0xe] = (byte)((ulong)uVar31 >> 8);
        pbVar45[0xf] = (byte)uVar31;
        pbVar45[0x10] = cVar66 << 4 | bVar81;
        pbVar45[0x11] = auVar89[4];
        pbVar45[0x12] = (byte)((ulong)uVar27 >> 8);
        pbVar45[0x13] = (byte)uVar27;
        pbVar45[0x14] = cVar67 << 4 | bVar82;
        pbVar45[0x15] = auVar89[5];
        pbVar45[0x16] = (byte)((ulong)uVar28 >> 8);
        pbVar45[0x17] = (byte)uVar28;
        pbVar45[0x18] = cVar68 << 4 | bVar83;
        pbVar45[0x19] = auVar89[6];
        pbVar45[0x1a] = (byte)((ulong)uVar25 >> 8);
        pbVar45[0x1b] = (byte)uVar25;
        pbVar45[0x1c] = cVar69 << 4 | bVar84;
        pbVar45[0x1d] = auVar89[7];
        pbVar45[0x1e] = (byte)((ulong)uVar26 >> 8);
        pbVar45[0x1f] = (byte)uVar26;
        pbVar45[0x20] = cVar54 << 4 | bVar70;
        pbVar45[0x21] = auVar89[8];
        pbVar45[0x22] = (byte)((ulong)uVar23 >> 8);
        pbVar45[0x23] = (byte)uVar15;
        pbVar45[0x24] = cVar55 << 4 | bVar71;
        pbVar45[0x25] = auVar89[9];
        pbVar45[0x26] = (byte)((ulong)uVar24 >> 8);
        pbVar45[0x27] = (byte)(uVar15 >> 0x10);
        pbVar45[0x28] = cVar57 << 4 | bVar72;
        pbVar45[0x29] = auVar89[10];
        pbVar45[0x2a] = (byte)((ulong)uVar20 >> 8);
        pbVar45[0x2b] = (byte)uVar20;
        pbVar45[0x2c] = cVar58 << 4 | bVar73;
        pbVar45[0x2d] = auVar89[0xb];
        pbVar45[0x2e] = (byte)((ulong)uVar21 >> 8);
        pbVar45[0x2f] = (byte)uVar21;
        pbVar45[0x30] = cVar59 << 4 | bVar74;
        pbVar45[0x31] = auVar89[0xc];
        pbVar45[0x32] = (byte)((ulong)uVar16 >> 8);
        pbVar45[0x33] = (byte)uVar16;
        pbVar45[0x34] = cVar60 << 4 | bVar75;
        pbVar45[0x35] = auVar89[0xd];
        pbVar45[0x36] = (byte)((ulong)uVar17 >> 8);
        pbVar45[0x37] = (byte)uVar17;
        pbVar45[0x38] = cVar61 << 4 | bVar76;
        pbVar45[0x39] = auVar89[0xe];
        pbVar45[0x3a] = (byte)(uVar12 >> 8);
        pbVar45[0x3b] = (byte)uVar12;
        pbVar45[0x3c] = cVar62 << 4 | bVar77;
        pbVar45[0x3d] = auVar89[0xf];
        pbVar45[0x3e] = (byte)(uVar18 >> 8);
        pbVar45[0x3f] = (byte)uVar18;
        pbVar45 = pbVar45 + 0x40;
      } while (uVar9 != uVar53);
      if (uVar9 < 9) {
        pcVar49 = pcVar52 + lVar51 * 8;
        lVar47 = lVar51 * 4 + 4;
        goto LAB_00861df8;
      }
    }
    auVar44 = _DAT_001f25b0;
    uVar9 = 8;
    if ((uVar6 & 7) != 0) {
      uVar9 = uVar6 & 7;
    }
    pcVar49 = pcVar52 + (uVar6 - uVar9) * 8;
    uVar56 = (undefined1)_UNK_001f36e9;
    uVar38 = (uint7)_UNK_001f36e9 >> 8;
    uVar39 = (uint7)_UNK_001f36e9 >> 0x10;
    uVar40 = (uint7)_UNK_001f36e9 >> 0x18;
    uVar41 = (uint7)_UNK_001f36e9 >> 0x20;
    uVar42 = (uint7)_UNK_001f36e9 >> 0x28;
    uVar43 = (uint7)_UNK_001f36e9 >> 0x30;
    auVar14[8] = UNK_001f36e8;
    auVar14._0_8_ = _DAT_001f36e0;
    pbVar45 = (byte *)(param_2 + lVar51 * 2 + 2);
    lVar47 = (uVar6 - uVar9) * 4 + 4;
    lVar50 = ~uVar46 + lVar51 + uVar9;
    pcVar52 = pcVar52 + lVar51 * 8 + 0x20;
    do {
      pcVar1 = pcVar52 + -0x20;
      lVar50 = lVar50 + 8;
      cVar63 = pcVar52[-0x18];
      cVar64 = pcVar52[-0x10];
      cVar65 = pcVar52[-8];
      cVar66 = *pcVar52;
      pbVar2 = (byte *)(pcVar52 + -0x1f);
      pcVar3 = pcVar52 + -0xc;
      pcVar13 = pcVar52 + -4;
      pcVar4 = pcVar52 + -0x1c;
      uVar16 = *(undefined8 *)(pcVar52 + -0x14);
      pcVar5 = pcVar52 + 4;
      uVar17 = *(undefined8 *)(pcVar52 + 0xc);
      uVar86 = (uint)*(undefined8 *)pcVar5;
      bVar78 = pcVar52[-0x17];
      uVar12 = (uint)*(undefined8 *)pcVar3;
      uVar37 = (uint)*(undefined8 *)pcVar13;
      uVar18 = (uint)*(undefined8 *)pcVar4;
      uVar85 = (undefined2)((ulong)uVar16 >> 0x10);
      bVar79 = pcVar52[-0xf];
      bVar80 = pcVar52[-7];
      cVar67 = pcVar52[8];
      bVar81 = pcVar52[1];
      cVar68 = pcVar52[0x10];
      uVar87 = *(uint *)(pcVar52 + 0x14);
      bVar82 = pcVar52[9];
      pbVar7 = (byte *)(pcVar52 + 0x11);
      cVar69 = pcVar52[0x18];
      uVar88 = *(uint *)(pcVar52 + 0x1c);
      pbVar8 = (byte *)(pcVar52 + 0x19);
      pcVar52 = pcVar52 + 0x40;
      bVar83 = *pbVar7;
      bVar84 = *pbVar8;
      auVar14[9] = uVar56;
      auVar14[10] = (char)uVar38;
      auVar14[0xb] = (char)uVar39;
      auVar14[0xc] = (char)uVar40;
      auVar14[0xd] = (char)uVar41;
      auVar14[0xe] = (char)uVar42;
      auVar14[0xf] = (char)uVar43;
      auVar19._4_2_ = uVar85;
      auVar19._0_4_ = uVar18 >> 0x10;
      auVar19._6_2_ = 0;
      auVar19._8_2_ = (short)((ulong)*(undefined8 *)pcVar3 >> 0x10);
      auVar19._10_2_ = 0;
      auVar19._12_2_ = (short)((ulong)*(undefined8 *)pcVar13 >> 0x10);
      auVar19._14_2_ = 0;
      auVar22._4_2_ = (short)((ulong)uVar17 >> 0x10);
      auVar22._0_4_ = uVar86 >> 0x10;
      auVar22._6_2_ = 0;
      auVar22._8_4_ = uVar87 >> 0x10;
      auVar22._12_4_ = uVar88 >> 0x10;
      auVar89 = a64_TBL(ZEXT816(0),auVar19,auVar22,auVar14);
      auVar29[3] = 0;
      auVar29._0_3_ = (uint3)((ulong)*(undefined8 *)pcVar4 >> 8);
      auVar29._4_2_ = (short)((ulong)uVar16 >> 8);
      auVar29[6] = (char)((ulong)uVar16 >> 0x18);
      auVar29[7] = 0;
      auVar29._8_4_ = uVar12 >> 8;
      auVar29._12_4_ = uVar37 >> 8;
      auVar32[3] = 0;
      auVar32._0_3_ = (uint3)((ulong)*(undefined8 *)pcVar5 >> 8);
      auVar32._4_2_ = (short)((ulong)uVar17 >> 8);
      auVar32[6] = (char)((ulong)uVar17 >> 0x18);
      auVar32[7] = 0;
      auVar32._8_4_ = uVar87 >> 8;
      auVar32._12_4_ = uVar88 >> 8;
      auVar35._4_2_ = (short)uVar16;
      auVar35._0_4_ = uVar18;
      auVar35._6_2_ = uVar85;
      auVar35._8_4_ = uVar12;
      auVar35._12_4_ = uVar37;
      auVar36._4_4_ = (int)uVar17;
      auVar36._0_4_ = uVar86;
      auVar36._8_4_ = uVar87;
      auVar36._12_4_ = uVar88;
      auVar91 = a64_TBL(ZEXT816(0),auVar29,auVar32,auVar35,auVar36,auVar44);
      auVar92 = NEON_ext(auVar91,auVar91,8,1);
      *pbVar45 = *pcVar1 << 4 | *pbVar2;
      pbVar45[1] = auVar89[0];
      pbVar45[2] = auVar91[0];
      pbVar45[3] = auVar92[0];
      pbVar45[4] = cVar63 << 4 | bVar78;
      pbVar45[5] = auVar89[1];
      pbVar45[6] = auVar91[1];
      pbVar45[7] = auVar92[1];
      pbVar45[8] = cVar64 << 4 | bVar79;
      pbVar45[9] = auVar89[2];
      pbVar45[10] = auVar91[2];
      pbVar45[0xb] = auVar92[2];
      pbVar45[0xc] = cVar65 << 4 | bVar80;
      pbVar45[0xd] = auVar89[3];
      pbVar45[0xe] = auVar91[3];
      pbVar45[0xf] = auVar92[3];
      pbVar45[0x10] = cVar66 << 4 | bVar81;
      pbVar45[0x11] = auVar89[4];
      pbVar45[0x12] = auVar91[4];
      pbVar45[0x13] = auVar92[4];
      pbVar45[0x14] = cVar67 << 4 | bVar82;
      pbVar45[0x15] = auVar89[5];
      pbVar45[0x16] = auVar91[5];
      pbVar45[0x17] = auVar92[5];
      pbVar45[0x18] = cVar68 << 4 | bVar83;
      pbVar45[0x19] = auVar89[6];
      pbVar45[0x1a] = auVar91[6];
      pbVar45[0x1b] = auVar92[6];
      pbVar45[0x1c] = cVar69 << 4 | bVar84;
      pbVar45[0x1d] = auVar89[7];
      pbVar45[0x1e] = auVar91[7];
      pbVar45[0x1f] = auVar92[7];
      pbVar45 = pbVar45 + 0x20;
    } while (lVar50 != 0);
  }
LAB_00861df8:
  puVar48 = (undefined1 *)((long)param_2 + lVar47 + 3);
  do {
    puVar48[-3] = pcVar49[1] | *pcVar49 << 4;
    uVar11 = *(undefined4 *)(pcVar49 + 4);
    pcVar49 = pcVar49 + 8;
    puVar48[-2] = (char)((uint)uVar11 >> 0x10);
    puVar48[-1] = (char)((uint)uVar11 >> 8);
    *puVar48 = (char)uVar11;
    puVar48 = puVar48 + 4;
  } while (pcVar49 != pcVar10);
  return;
}


// ===== 00862134  FUN_00862134 =====

void FUN_00862134(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 0086214c  FUN_0086214c =====

undefined8 * FUN_0086214c(undefined8 *param_1,void *param_2,long param_3,ulong param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  size_t sVar3;
  long lVar4;
  ulong uVar5;
  void *pvVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  size_t __n;
  void *__dest;
  void *pvVar10;
  undefined1 auVar11 [16];
  
  uVar5 = param_1[2];
  pvVar10 = (void *)*param_1;
  if ((ulong)((long)(uVar5 - (long)pvVar10) >> 3) < param_4) {
    if (pvVar10 == (void *)0x0) {
LAB_008622f0:
      if (param_4 >> 0x3d == 0) {
        uVar9 = (long)uVar5 >> 2;
        if ((ulong)((long)uVar5 >> 2) <= param_4) {
          uVar9 = param_4;
        }
        if (0x7ffffffffffffff7 < uVar5) {
          uVar9 = 0x1fffffffffffffff;
        }
        if (uVar9 >> 0x3d == 0) {
          pvVar10 = operator_new(uVar9 * 8);
          *param_1 = pvVar10;
          param_1[1] = pvVar10;
          param_1[2] = (void *)((long)pvVar10 + uVar9 * 8);
          puVar1 = (undefined8 *)memcpy(pvVar10,param_2,param_3 - (long)param_2);
          lVar4 = (long)pvVar10 + (param_3 - (long)param_2);
          goto LAB_0086234c;
        }
      }
      auVar11 = FUN_00862134();
      plVar2 = auVar11._0_8_;
      puVar1 = (undefined8 *)(plVar2[1] - *plVar2);
      uVar5 = ((long)puVar1 >> 3) + 1;
      if (uVar5 >> 0x3d != 0) {
        FUN_00862134();
LAB_00862464:
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      uVar8 = plVar2[2] - *plVar2;
      uVar9 = (long)uVar8 >> 2;
      if (uVar9 <= uVar5) {
        uVar9 = uVar5;
      }
      if (0x7ffffffffffffff7 < uVar8) {
        uVar9 = 0x1fffffffffffffff;
      }
      if (uVar9 == 0) {
        pvVar10 = (void *)0x0;
      }
      else {
        if (uVar9 >> 0x3d != 0) goto LAB_00862464;
        pvVar10 = operator_new(uVar9 << 3);
        puVar1 = (undefined8 *)((long)pvVar10 + (long)puVar1);
      }
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = *auVar11._8_8_;
        sVar3 = plVar2[1] - *plVar2;
        __dest = (void *)((long)puVar1 - sVar3);
        memcpy(__dest,(void *)*plVar2,sVar3);
        pvVar6 = (void *)*plVar2;
        *plVar2 = (long)__dest;
        plVar2[1] = (long)(puVar1 + 1);
        plVar2[2] = (long)((long)pvVar10 + uVar9 * 8);
        if (pvVar6 != (void *)0x0) {
          operator_delete(pvVar6);
        }
        return puVar1 + 1;
      }
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    pvVar6 = (void *)param_1[1];
    uVar9 = (ulong)((long)pvVar6 + (-8 - ((long)pvVar6 << 0x3d))) >> 3;
    uVar5 = (ulong)(((long)pvVar10 - (long)pvVar6 << 0x3d) - ((long)pvVar10 - (long)pvVar6)) >> 3;
    if (uVar9 <= uVar5) {
      uVar5 = uVar9;
    }
    if ((1 < uVar5) && ((((int)pvVar10 - (int)pvVar6 | -(int)pvVar6) & 7U) == 0)) {
      uVar5 = uVar5 & 0x1ffffffffffffffe;
      pvVar6 = (void *)((long)pvVar6 + uVar5 * -8);
      do {
        uVar5 = uVar5 - 2;
      } while (uVar5 != 0);
    }
    do {
      if (pvVar6 == pvVar10) {
        param_1[1] = pvVar10;
        operator_delete(pvVar10);
        uVar5 = 0;
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        goto LAB_008622f0;
      }
      pvVar6 = (void *)((long)pvVar6 + -8);
    } while (pvVar6 != (void *)0x0);
  }
  else {
    sVar3 = param_1[1] - (long)pvVar10;
    if ((ulong)((long)sVar3 >> 3) < param_4) {
      memmove(pvVar10,param_2,sVar3);
      pvVar10 = (void *)param_1[1];
      __n = param_3 - (long)((long)param_2 + sVar3);
      puVar1 = (undefined8 *)memmove(pvVar10,(void *)((long)param_2 + sVar3),__n);
      lVar4 = (long)pvVar10 + __n;
LAB_0086234c:
      param_1[1] = lVar4;
      return puVar1;
    }
    puVar1 = (undefined8 *)memmove(pvVar10,param_2,param_3 - (long)param_2);
    lVar4 = param_1[1];
    lVar7 = (long)pvVar10 + (param_3 - (lVar4 + (long)param_2));
    uVar5 = (ulong)((lVar7 << 0x3d) - lVar7) >> 3;
    uVar9 = (lVar4 - (lVar4 << 0x3d)) - 8U >> 3;
    if (uVar9 <= uVar5) {
      uVar5 = uVar9;
    }
    lVar7 = (long)pvVar10 + (param_3 - (long)param_2);
    if ((1 < uVar5) &&
       (((((int)pvVar10 + (int)param_3) - ((int)lVar4 + (int)param_2) | -(int)lVar4) & 7U) == 0)) {
      uVar5 = uVar5 & 0x1ffffffffffffffe;
      lVar4 = lVar4 + uVar5 * -8;
      do {
        uVar5 = uVar5 - 2;
      } while (uVar5 != 0);
    }
    do {
      if (lVar4 == lVar7) {
        param_1[1] = lVar7;
        return puVar1;
      }
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00862374  FUN_00862374 =====

undefined8 * FUN_00862374(long *param_1,undefined8 *param_2)

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
    FUN_00862134();
LAB_00862464:
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
    if (uVar5 >> 0x3d != 0) goto LAB_00862464;
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


// ===== 00862468  FUN_00862468 =====

void FUN_00862468(ulong *param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = (*(ulong *)(param_2 + 4) & 0xff00ff00ff00ff00) >> 8 |
          (*(ulong *)(param_2 + 4) & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  *param_1 = uVar1 >> 0x20 | uVar1 << 0x20;
  return;
}


// ===== 0086247c  FUN_0086247c =====

void FUN_0086247c(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  *param_2 = (int)DAT_001f5bc0;
  uVar2 = *(undefined8 *)param_1;
  *(char *)(param_2 + 1) = (char)((ulong)uVar2 >> 0x38);
  *(char *)((long)param_2 + 5) = (char)((ulong)uVar2 >> 0x30);
  *(char *)((long)param_2 + 6) = (char)((ulong)uVar2 >> 0x28);
  *(char *)((long)param_2 + 7) = (char)((ulong)uVar2 >> 0x20);
  uVar1 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
  param_2[2] = uVar1 >> 0x10 | uVar1 << 0x10;
  return;
}


// ===== 008624c0  FUN_008624c0 =====

void * FUN_008624c0(void)

{
  int iVar1;
  void *pvVar2;
  undefined1 local_88 [8];
  undefined8 local_80;
  code *local_70;
  undefined *local_68;
  undefined1 local_60;
  undefined8 local_58;
  code *local_48;
  undefined *local_40;
  undefined1 auStack_38 [24];
  
  if (((DAT_00d803c0 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d803c0), iVar1 != 0)) {
    pvVar2 = operator_new(0x20);
    local_88[0] = 1;
    local_70 = FUN_00862e14;
    local_68 = &DAT_0021fc00;
    local_60 = 2;
    local_48 = FUN_00862e20;
    local_40 = &DAT_0021fc20;
    FUN_008625bc(auStack_38,local_88,2);
    FUN_008626b4(pvVar2,auStack_38);
    FUN_008627a8(auStack_38);
    if (*(code **)(local_40 + 8) != (code *)0x0) {
      (**(code **)(local_40 + 8))(local_58);
    }
    if (*(code **)(local_68 + 8) != (code *)0x0) {
      (**(code **)(local_68 + 8))(local_80);
    }
    DAT_00d803b8 = pvVar2;
    FUN_0054ff1c(&DAT_00d803c0);
  }
  return DAT_00d803b8;
}


// ===== 008625bc  FUN_008625bc =====

void FUN_008625bc(undefined8 *param_1,long param_2,ulong param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  undefined8 *puVar7;
  code *pcVar8;
  void *pvVar9;
  void *pvVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_3 != 0) {
    if (0x666666666666666 < param_3) {
      auVar12 = FUN_0086296c();
      puVar5 = auVar12._0_8_;
      puVar5[2] = 0;
      puVar5[3] = 0;
      *puVar5 = &PTR_FUN_00d3a8b0;
      puVar5[1] = 0;
      puVar2 = (undefined1 *)*auVar12._8_8_;
      puVar1 = (undefined1 *)auVar12._8_8_[1];
      uVar11 = (long)puVar1 - (long)puVar2;
      if (uVar11 != 0) {
        if (0x666666666666666 < (ulong)(((long)uVar11 >> 3) * -0x3333333333333333)) {
          puVar5 = (undefined8 *)FUN_0086296c();
          pvVar10 = (void *)*puVar5;
          if (pvVar10 == (void *)0x0) {
            return;
          }
          pvVar6 = pvVar10;
          pvVar9 = (void *)puVar5[1];
          if (pvVar10 != (void *)puVar5[1]) {
            do {
              pvVar6 = (void *)((long)pvVar9 + -0x28);
              if (pvVar6 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s",
                           "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                          );
              }
              pcVar8 = *(code **)(*(long *)((long)pvVar9 + -8) + 8);
              if (pcVar8 != (code *)0x0) {
                (*pcVar8)(*(undefined8 *)((long)pvVar9 + -0x20));
              }
              pvVar9 = pvVar6;
            } while (pvVar6 != pvVar10);
            pvVar6 = (void *)*puVar5;
          }
          puVar5[1] = pvVar10;
          operator_delete(pvVar6);
          return;
        }
        puVar4 = (undefined1 *)operator_new(uVar11);
        puVar5[1] = puVar4;
        puVar5[2] = puVar4;
        puVar5[3] = puVar4 + uVar11;
        do {
          if (puVar4 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          *puVar4 = *puVar2;
          uVar3 = *(undefined8 *)(puVar2 + 8);
          *(undefined8 *)(puVar4 + 0x10) = *(undefined8 *)(puVar2 + 0x10);
          *(undefined8 *)(puVar4 + 8) = uVar3;
          *(undefined8 *)(puVar4 + 0x18) = *(undefined8 *)(puVar2 + 0x18);
          puVar7 = *(undefined8 **)(puVar2 + 0x20);
          *(undefined8 **)(puVar4 + 0x20) = puVar7;
          pcVar8 = (code *)*puVar7;
          if (pcVar8 != (code *)0x0) {
            uVar3 = (*pcVar8)(*(undefined8 *)(puVar2 + 8));
            *(undefined8 *)(puVar4 + 8) = uVar3;
          }
          puVar2 = puVar2 + 0x28;
          puVar4 = puVar4 + 0x28;
        } while (puVar2 != puVar1);
        puVar5[2] = puVar4;
      }
      return;
    }
    uVar11 = param_3 * 0x28;
    puVar2 = (undefined1 *)operator_new(uVar11);
    *param_1 = puVar2;
    param_1[1] = puVar2;
    param_1[2] = puVar2 + param_3 * 0x28;
    if (uVar11 != 0) {
      puVar5 = (undefined8 *)(param_2 + 0x18);
      do {
        if (puVar2 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        *puVar2 = *(undefined1 *)(puVar5 + -3);
        uVar3 = puVar5[-2];
        *(undefined8 *)(puVar2 + 0x10) = puVar5[-1];
        *(undefined8 *)(puVar2 + 8) = uVar3;
        *(undefined8 *)(puVar2 + 0x18) = *puVar5;
        puVar7 = (undefined8 *)puVar5[1];
        *(undefined8 **)(puVar2 + 0x20) = puVar7;
        pcVar8 = (code *)*puVar7;
        if (pcVar8 != (code *)0x0) {
          uVar3 = (*pcVar8)(puVar5[-2]);
          *(undefined8 *)(puVar2 + 8) = uVar3;
        }
        uVar11 = uVar11 - 0x28;
        puVar5 = puVar5 + 5;
        puVar2 = puVar2 + 0x28;
      } while (uVar11 != 0);
    }
    param_1[1] = puVar2;
  }
  return;
}


// ===== 008626b4  FUN_008626b4 =====

void FUN_008626b4(undefined8 *param_1,long *param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  void *pvVar5;
  undefined8 *puVar6;
  code *pcVar7;
  void *pvVar8;
  void *pvVar9;
  undefined1 *puVar10;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_00d3a8b0;
  param_1[1] = 0;
  puVar10 = (undefined1 *)*param_2;
  puVar1 = (undefined1 *)param_2[1];
  uVar2 = (long)puVar1 - (long)puVar10;
  if (uVar2 != 0) {
    if (0x666666666666666 < (ulong)(((long)uVar2 >> 3) * -0x3333333333333333)) {
      puVar6 = (undefined8 *)FUN_0086296c();
      pvVar9 = (void *)*puVar6;
      if (pvVar9 == (void *)0x0) {
        return;
      }
      pvVar5 = pvVar9;
      pvVar8 = (void *)puVar6[1];
      if (pvVar9 != (void *)puVar6[1]) {
        do {
          pvVar5 = (void *)((long)pvVar8 + -0x28);
          if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
          pcVar7 = *(code **)(*(long *)((long)pvVar8 + -8) + 8);
          if (pcVar7 != (code *)0x0) {
            (*pcVar7)(*(undefined8 *)((long)pvVar8 + -0x20));
          }
          pvVar8 = pvVar5;
        } while (pvVar5 != pvVar9);
        pvVar5 = (void *)*puVar6;
      }
      puVar6[1] = pvVar9;
      operator_delete(pvVar5);
      return;
    }
    puVar3 = (undefined1 *)operator_new(uVar2);
    param_1[1] = puVar3;
    param_1[2] = puVar3;
    param_1[3] = puVar3 + uVar2;
    do {
      if (puVar3 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      *puVar3 = *puVar10;
      uVar4 = *(undefined8 *)(puVar10 + 8);
      *(undefined8 *)(puVar3 + 0x10) = *(undefined8 *)(puVar10 + 0x10);
      *(undefined8 *)(puVar3 + 8) = uVar4;
      *(undefined8 *)(puVar3 + 0x18) = *(undefined8 *)(puVar10 + 0x18);
      puVar6 = *(undefined8 **)(puVar10 + 0x20);
      *(undefined8 **)(puVar3 + 0x20) = puVar6;
      pcVar7 = (code *)*puVar6;
      if (pcVar7 != (code *)0x0) {
        uVar4 = (*pcVar7)(*(undefined8 *)(puVar10 + 8));
        *(undefined8 *)(puVar3 + 8) = uVar4;
      }
      puVar10 = puVar10 + 0x28;
      puVar3 = puVar3 + 0x28;
    } while (puVar10 != puVar1);
    param_1[2] = puVar3;
  }
  return;
}


// ===== 008627a8  FUN_008627a8 =====

void FUN_008627a8(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  code *pcVar3;
  void *pvVar4;
  
  pvVar4 = (void *)*param_1;
  if (pvVar4 == (void *)0x0) {
    return;
  }
  pvVar1 = pvVar4;
  pvVar2 = (void *)param_1[1];
  if (pvVar4 != (void *)param_1[1]) {
    do {
      pvVar1 = (void *)((long)pvVar2 + -0x28);
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      pcVar3 = *(code **)(*(long *)((long)pvVar2 + -8) + 8);
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(*(undefined8 *)((long)pvVar2 + -0x20));
      }
      pvVar2 = pvVar1;
    } while (pvVar1 != pvVar4);
    pvVar1 = (void *)*param_1;
  }
  param_1[1] = pvVar4;
  operator_delete(pvVar1);
  return;
}


// ===== 00862854  FUN_00862854 =====

void FUN_00862854(long *param_1,long param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR_DAT_00d52cf0;
  *param_1 = (long)&PTR_FUN_00d37c18;
  uVar1 = *(undefined4 *)(param_2 + 8);
  *param_1 = (long)(puVar2 + 0x10);
  *(undefined4 *)(param_1 + 1) = uVar1;
  *(undefined8 *)((long)param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  param_1[3] = *(long *)(param_2 + 0x18);
  param_1[4] = *(long *)(param_2 + 0x20);
  lVar3 = *(long *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  param_1[5] = lVar3;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *param_1 = (long)&PTR_FUN_00d3a880;
  param_1[6] = 0x7ff8000000000000;
  param_1[8] = -0x8000000000000000;
  param_1[7] = -0x8000000000000000;
  param_1[10] = -0x8000000000000000;
  param_1[9] = -0x8000000000000000;
  param_1[0xc] = -0x8000000000000000;
  param_1[0xb] = -0x8000000000000000;
  param_1[0xe] = -0x8000000000000000;
  param_1[0xd] = -0x8000000000000000;
  param_1[0x10] = -0x8000000000000000;
  param_1[0xf] = -0x8000000000000000;
  param_1[0x11] = -0x8000000000000000;
  param_1[0x13] = 0x7ff8000000000000;
  param_1[0x12] = 0x7ff8000000000000;
  param_1[0x15] = -0x8000000000000000;
  param_1[0x14] = -0x8000000000000000;
  param_1[0x16] = 0x7ff8000000000000;
  lVar3 = FUN_008624c0();
  param_1[0x17] = lVar3;
  return;
}


// ===== 00862910  FUN_00862910 =====

void FUN_00862910(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
  }
                    /* WARNING: Could not recover jumptable at 0x00862938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 0xb8))
            (*(undefined8 **)(param_1 + 0xb8),uVar1,*(long *)(param_1 + 0x18),param_1 + 0x30);
  return;
}


// ===== 0086293c  FUN_0086293c =====

void FUN_0086293c(void *param_1)

{
  FUN_007cd6a8();
  operator_delete(param_1);
  return;
}


// ===== 0086296c  FUN_0086296c =====

void FUN_0086296c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00862984  FUN_00862984 =====

bool FUN_00862984(long param_1,char *param_2,ulong param_3,undefined8 param_4)

{
  char *pcVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  char *pcVar5;
  
  if (((param_3 & 3) == 0) && (pcVar1 = param_2 + param_3, param_2 < pcVar1)) {
    do {
      pcVar5 = *(char **)(param_1 + 8);
      if (pcVar5 != *(char **)(param_1 + 0x10)) {
        do {
          if (*pcVar5 == *param_2) {
            uVar3 = (uint)(byte)param_2[1] << 0x10 | (uint)(byte)param_2[2] << 8 |
                    (uint)(byte)param_2[3];
            lVar2 = 0x7fffffffffffffff;
            if (uVar3 != 0xffffff) {
              lVar2 = (ulong)uVar3 * 1000;
            }
            plVar4 = (long *)(**(code **)(pcVar5 + 0x18))(pcVar5 + 8,param_4);
            *plVar4 = lVar2;
            break;
          }
          pcVar5 = pcVar5 + 0x28;
        } while (pcVar5 != *(char **)(param_1 + 0x10));
      }
      param_2 = param_2 + 4;
    } while (param_2 < pcVar1);
  }
  return (param_3 & 3) == 0;
}


// ===== 00862a6c  FUN_00862a6c =====

void FUN_00862a6c(ulong *param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  void *__src;
  void *__dest;
  long *plVar4;
  ulong uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong __n;
  undefined1 *puVar9;
  long lVar10;
  void *local_a0 [2];
  char cStack_89;
  void *local_88 [2];
  char cStack_71;
  
  puVar9 = *(undefined1 **)(param_2 + 8);
  puVar3 = *(undefined1 **)(param_2 + 0x10);
  *param_1 = 0;
  lVar10 = (long)puVar3 - (long)puVar9;
  uVar8 = (lVar10 >> 3) * 0x3333333333333334;
  param_1[1] = uVar8;
  param_1[2] = (ulong)&DAT_aaaaaaaaaaaaaaaa;
  if (lVar10 == 0) {
    __dest = (void *)0x0;
  }
  else {
    __src = operator_new__(uVar8);
    __n = 0;
    param_1[2] = (ulong)__src;
    do {
      uVar5 = __n + 4;
      __dest = __src;
      if (uVar8 < uVar5) {
        uVar1 = uVar8 + (uVar8 >> 1);
        uVar8 = uVar5;
        if (uVar5 <= uVar1) {
          uVar8 = uVar1;
        }
        __dest = operator_new__(uVar8);
        if (__src != (void *)0x0) {
          memcpy(__dest,__src,__n);
          operator_delete__(__src);
        }
      }
      pcVar6 = *(code **)(puVar9 + 0x18);
      *param_1 = uVar5;
      plVar4 = (long *)(*pcVar6)(puVar9 + 8,param_3);
      lVar10 = *plVar4;
      if (lVar10 == -0x8000000000000000) {
        uVar5 = FUN_004022fc();
        if ((uVar5 & 1) == 0) {
          FUN_00623bb0(&DAT_001f4e98,"../../modules/rtp_rtcp/source/rtcp_packet/remote_estimate.cc",
                       0x1ca,"Trying to serialize MinusInfinity");
        }
        lVar10 = 0;
      }
      else {
        puVar2 = (undefined1 *)((long)__dest + __n);
        *puVar2 = *puVar9;
        if (lVar10 == 0x7fffffffffffffff) {
LAB_00862bac:
          lVar7 = 0xffffff;
        }
        else {
          lVar7 = (long)((double)lVar10 / 1000.0);
          if (0xfffffe < lVar7) {
            uVar5 = FUN_004022fc();
            if ((uVar5 & 1) == 0) {
              FUN_00665ccc(local_88,lVar10);
              FUN_00665ccc(local_a0,0x3e7fffc18);
              FUN_00623bb0("\r\n\t\n\t",
                           "../../modules/rtp_rtcp/source/rtcp_packet/remote_estimate.cc",0x222,
                           local_88," is larger than max (",local_a0,"), encoded as PlusInfinity.");
              if (cStack_89 < '\0') {
                operator_delete(local_a0[0]);
              }
              if (cStack_71 < '\0') {
                operator_delete(local_88[0]);
              }
            }
            goto LAB_00862bac;
          }
        }
        puVar2[3] = (char)lVar7;
        lVar10 = 4;
        puVar2[1] = (char)((ulong)lVar7 >> 0x10);
        puVar2[2] = (char)((ulong)lVar7 >> 8);
      }
      puVar9 = puVar9 + 0x28;
      __n = lVar10 + __n;
      *param_1 = __n;
      __src = __dest;
    } while (puVar9 != puVar3);
  }
  param_1[1] = uVar8;
  param_1[2] = (ulong)__dest;
  return;
}


// ===== 00862cac  FUN_00862cac =====

void FUN_00862cac(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  code *pcVar3;
  void *pvVar4;
  
  pvVar4 = (void *)param_1[1];
  *param_1 = &PTR_FUN_00d3a8b0;
  if (pvVar4 == (void *)0x0) {
    return;
  }
  pvVar1 = pvVar4;
  pvVar2 = (void *)param_1[2];
  if (pvVar4 != (void *)param_1[2]) {
    do {
      pvVar1 = (void *)((long)pvVar2 + -0x28);
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      pcVar3 = *(code **)(*(long *)((long)pvVar2 + -8) + 8);
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(*(undefined8 *)((long)pvVar2 + -0x20));
      }
      pvVar2 = pvVar1;
    } while (pvVar1 != pvVar4);
    pvVar1 = (void *)param_1[1];
  }
  param_1[2] = pvVar4;
  operator_delete(pvVar1);
  return;
}


// ===== 00862d64  FUN_00862d64 =====

void FUN_00862d64(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  code *pcVar3;
  void *pvVar4;
  
  pvVar4 = (void *)param_1[1];
  *param_1 = &PTR_FUN_00d3a8b0;
  if (pvVar4 != (void *)0x0) {
    pvVar1 = pvVar4;
    pvVar2 = (void *)param_1[2];
    if (pvVar4 != (void *)param_1[2]) {
      do {
        pvVar1 = (void *)((long)pvVar2 + -0x28);
        if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        pcVar3 = *(code **)(*(long *)((long)pvVar2 + -8) + 8);
        if (pcVar3 != (code *)0x0) {
          (*pcVar3)(*(undefined8 *)((long)pvVar2 + -0x20));
        }
        pvVar2 = pvVar1;
      } while (pvVar1 != pvVar4);
      pvVar1 = (void *)param_1[1];
    }
    param_1[2] = pvVar4;
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 00862e14  FUN_00862e14 =====

long FUN_00862e14(undefined8 param_1,long param_2)

{
  return param_2 + 0x28;
}


// ===== 00862e20  FUN_00862e20 =====

long FUN_00862e20(undefined8 param_1,long param_2)

{
  return param_2 + 0x30;
}


// ===== 00862e2c  FUN_00862e2c =====

void FUN_00862e2c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d3a8e0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}


// ===== 00862e50  FUN_00862e50 =====

void FUN_00862e50(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  pvVar1 = (void *)param_1[2];
  *param_1 = &PTR_FUN_00d3a8e0;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  pvVar2 = (void *)param_1[3];
  uVar3 = (ulong)(((long)pvVar1 - (long)pvVar2) * 0x1555555555555555) >> 3;
  uVar4 = (long)pvVar2 * -0x1555555555555555 - 8U >> 3;
  if (uVar4 <= uVar3) {
    uVar3 = uVar4;
  }
  if ((1 < uVar3) && ((((int)pvVar1 - (int)pvVar2 | -(int)pvVar2) & 7U) == 0)) {
    uVar3 = uVar3 & 0x1ffffffffffffffe;
    pvVar2 = (void *)((long)pvVar2 + uVar3 * -0x18);
    do {
      uVar3 = uVar3 - 2;
    } while (uVar3 != 0);
  }
  do {
    if (pvVar2 == pvVar1) {
      param_1[3] = pvVar1;
      operator_delete(pvVar1);
      return;
    }
    pvVar2 = (void *)((long)pvVar2 + -0x18);
  } while (pvVar2 != (void *)0x0);
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00862f14  FUN_00862f14 =====

void FUN_00862f14(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  pvVar1 = (void *)param_1[2];
  *param_1 = &PTR_FUN_00d3a8e0;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[3];
    uVar3 = (ulong)(((long)pvVar1 - (long)pvVar2) * 0x1555555555555555) >> 3;
    uVar4 = (long)pvVar2 * -0x1555555555555555 - 8U >> 3;
    if (uVar4 <= uVar3) {
      uVar3 = uVar4;
    }
    if ((1 < uVar3) && ((((int)pvVar1 - (int)pvVar2 | -(int)pvVar2) & 7U) == 0)) {
      uVar3 = uVar3 & 0x1ffffffffffffffe;
      pvVar2 = (void *)((long)pvVar2 + uVar3 * -0x18);
      do {
        uVar3 = uVar3 - 2;
      } while (uVar3 != 0);
    }
    while (pvVar2 != pvVar1) {
      pvVar2 = (void *)((long)pvVar2 + -0x18);
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    param_1[3] = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 00862fec  FUN_00862fec =====

uint FUN_00862fec(long param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  
  uVar3 = *(uint *)(param_2 + 4);
  if (uVar3 < 0x10) {
    uVar4 = FUN_004022fc();
    if ((uVar4 & 1) == 0) {
      uVar2 = *(undefined4 *)(param_2 + 4);
      pcVar6 = " is too small for a TMMBR.";
      uVar5 = 0x1da;
LAB_0086307c:
      FUN_00623bb0(&DAT_001f6d4b,"../../modules/rtp_rtcp/source/rtcp_packet/tmmbr.cc",uVar5,
                   "Payload length ",uVar2,pcVar6);
    }
  }
  else {
    if ((uVar3 & 7) == 0) {
      FUN_007d0240(param_1,*(undefined8 *)(param_2 + 8));
      lVar8 = *(long *)(param_2 + 8);
      FUN_008630f8(param_1 + 0x10,(ulong)uVar3 - 8 >> 3);
      lVar7 = *(long *)(param_1 + 0x10);
      lVar1 = *(long *)(param_1 + 0x18);
      if (lVar7 == lVar1) {
        uVar3 = 1;
      }
      else {
        do {
          lVar8 = lVar8 + 8;
          uVar3 = FUN_00863628(lVar7,lVar8);
          lVar7 = lVar7 + 0x18;
          if (lVar7 == lVar1) break;
        } while ((uVar3 & 1) != 0);
      }
      goto LAB_00863084;
    }
    uVar4 = FUN_004022fc();
    if ((uVar4 & 1) == 0) {
      uVar2 = *(undefined4 *)(param_2 + 4);
      pcVar6 = " is not valid for a TMMBR.";
      uVar5 = 0x20a;
      goto LAB_0086307c;
    }
  }
  uVar3 = 0;
LAB_00863084:
  return uVar3 & 1;
}


// ===== 008630f8  FUN_008630f8 =====

void FUN_008630f8(undefined8 *param_1,ulong param_2)

{
  void *__src;
  long lVar1;
  bool bVar2;
  void *__dest;
  undefined4 *puVar3;
  ulong uVar4;
  undefined4 *puVar5;
  long lVar6;
  ulong uVar7;
  size_t __n;
  
  __src = (void *)*param_1;
  puVar3 = (undefined4 *)param_1[1];
  __n = (long)puVar3 - (long)__src;
  bVar2 = param_2 < (ulong)(((long)__n >> 3) * -0x5555555555555555);
  lVar1 = param_2 + ((long)__n >> 3) * 0x5555555555555555;
  if (bVar2 || lVar1 == 0) {
    if (bVar2) {
      puVar5 = (undefined4 *)((long)__src + param_2 * 0x18);
      uVar4 = (ulong)(((long)puVar5 - (long)puVar3) * 0x1555555555555555) >> 3;
      uVar7 = (long)puVar3 * -0x1555555555555555 - 8U >> 3;
      if (uVar7 <= uVar4) {
        uVar4 = uVar7;
      }
      if ((1 < uVar4) && ((((int)__src - (int)puVar3 | -(int)puVar3) & 7U) == 0)) {
        uVar4 = uVar4 & 0x1ffffffffffffffe;
        puVar3 = puVar3 + uVar4 * -6;
        do {
          uVar4 = uVar4 - 2;
        } while (uVar4 != 0);
      }
      while (puVar3 != puVar5) {
        puVar3 = puVar3 + -6;
        if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      param_1[1] = puVar5;
    }
  }
  else {
    lVar6 = param_1[2] - (long)__src >> 3;
    uVar4 = lVar6 * -0x5555555555555555;
    if (uVar4 < param_2) {
      if (0xaaaaaaaaaaaaaaa < param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_00857430();
      }
      uVar7 = lVar6 * 0x5555555555555556;
      if (uVar7 < param_2 || uVar7 - param_2 == 0) {
        uVar7 = param_2;
      }
      if (0x555555555555554 < uVar4) {
        uVar7 = 0xaaaaaaaaaaaaaaa;
      }
      if (0xaaaaaaaaaaaaaaa < uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      __dest = operator_new(uVar7 * 0x18);
      if (lVar1 * 0x18 == 0) {
        puVar3 = (undefined4 *)((long)__dest + __n);
      }
      else {
        puVar3 = (undefined4 *)((long)__dest + lVar1 * 0x18 + __n);
        puVar5 = (undefined4 *)((long)__dest + __n);
        do {
          if (puVar5 == (undefined4 *)0x0) {
LAB_00863300:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          *puVar5 = 0;
          *(undefined8 *)(puVar5 + 2) = 0;
          *(undefined2 *)(puVar5 + 4) = 0;
          puVar5 = puVar5 + 6;
        } while (puVar5 != puVar3);
      }
      memcpy(__dest,__src,__n);
      *param_1 = __dest;
      param_1[1] = puVar3;
      param_1[2] = (void *)((long)__dest + uVar7 * 0x18);
      if (__src != (void *)0x0) {
        operator_delete(__src);
        return;
      }
    }
    else {
      puVar5 = puVar3;
      if (lVar1 * 0x18 != 0) {
        puVar5 = puVar3 + lVar1 * 6;
        do {
          if (puVar3 == (undefined4 *)0x0) goto LAB_00863300;
          *puVar3 = 0;
          *(undefined8 *)(puVar3 + 2) = 0;
          *(undefined2 *)(puVar3 + 4) = 0;
          puVar3 = puVar3 + 6;
        } while (puVar3 != puVar5);
      }
      param_1[1] = puVar5;
    }
  }
  return;
}


// ===== 0086331c  FUN_0086331c =====

void FUN_0086331c(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  if (puVar1 < *(undefined8 **)(param_1 + 0x20)) {
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    uVar4 = param_2[1];
    uVar3 = *param_2;
    puVar2 = puVar1 + 3;
    puVar1[2] = param_2[2];
    puVar1[1] = uVar4;
    *puVar1 = uVar3;
  }
  else {
    puVar2 = (undefined8 *)FUN_008634f4(param_1 + 0x10);
  }
  *(undefined8 **)(param_1 + 0x18) = puVar2;
  return;
}


// ===== 00863388  FUN_00863388 =====

long FUN_00863388(long param_1)

{
  return ((ulong)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10)) >> 3) * 0x5555555555555558
         + 0xc;
}


// ===== 008633ac  FUN_008633ac =====

bool FUN_008633ac(long *param_1,long param_2,long *param_3,ulong param_4,undefined8 param_5,
                 undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  while( true ) {
    lVar9 = *param_3;
    lVar4 = (**(code **)(*param_1 + 0x10))(param_1);
    if ((ulong)(lVar4 + lVar9) <= param_4) break;
    uVar5 = FUN_007cd570(param_1,param_2,param_3,param_5,param_6);
    if ((uVar5 & 1) == 0) goto LAB_008634ac;
  }
  lVar8 = *param_3;
  lVar6 = (**(code **)(*param_1 + 0x10))(param_1);
  uVar7 = FUN_007cd5b4(param_1);
  FUN_007cd5e0(3,0xcd,uVar7,param_2,param_3);
  FUN_007d0260(param_1,param_2 + *param_3);
  lVar1 = *param_3 + 8;
  *param_3 = lVar1;
  lVar3 = param_1[3];
  for (lVar2 = param_1[2]; lVar2 != lVar3; lVar2 = lVar2 + 0x18) {
    FUN_008636e8(lVar2,param_2 + lVar1);
    lVar1 = *param_3 + 8;
    *param_3 = lVar1;
  }
  if (lVar6 + lVar8 != lVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../modules/rtp_rtcp/source/rtcp_packet/tmmbr.cc",0x6f,"index_end == *index",
                 &DAT_001fb920,lVar6 + lVar8);
  }
LAB_008634ac:
  return (ulong)(lVar4 + lVar9) <= param_4;
}


// ===== 008634f4  FUN_008634f4 =====

undefined8 * FUN_008634f4(long *param_1,undefined8 *param_2)

{
  void *pvVar1;
  void *pvVar2;
  size_t __n;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  void *__dest;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar6 = (undefined8 *)(param_1[1] - *param_1);
  uVar3 = ((long)puVar6 >> 3) * -0x5555555555555555 + 1;
  if (0xaaaaaaaaaaaaaaa < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_00857430();
  }
  lVar4 = param_1[2] - *param_1 >> 3;
  uVar5 = lVar4 * 0x5555555555555556;
  if (uVar5 < uVar3 || uVar5 - uVar3 == 0) {
    uVar5 = uVar3;
  }
  if (0x555555555555554 < (ulong)(lVar4 * -0x5555555555555555)) {
    uVar5 = 0xaaaaaaaaaaaaaaa;
  }
  if (uVar5 == 0) {
    pvVar1 = (void *)0x0;
  }
  else {
    if (0xaaaaaaaaaaaaaaa < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    pvVar1 = operator_new(uVar5 * 0x18);
    puVar6 = (undefined8 *)((long)pvVar1 + (long)puVar6);
  }
  if (puVar6 != (undefined8 *)0x0) {
    uVar8 = param_2[1];
    uVar7 = *param_2;
    puVar6[2] = param_2[2];
    puVar6[1] = uVar8;
    *puVar6 = uVar7;
    __n = param_1[1] - *param_1;
    __dest = (void *)((long)puVar6 - __n);
    memcpy(__dest,(void *)*param_1,__n);
    pvVar2 = (void *)*param_1;
    *param_1 = (long)__dest;
    param_1[1] = (long)(puVar6 + 3);
    param_1[2] = (long)((long)pvVar1 + uVar5 * 0x18);
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
    return puVar6 + 3;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00863614  FUN_00863614 =====

void FUN_00863614(undefined4 *param_1,undefined4 param_2,undefined8 param_3,undefined2 param_4)

{
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = param_3;
  *(undefined2 *)(param_1 + 4) = param_4;
  return;
}


// ===== 00863628  FUN_00863628 =====

bool FUN_00863628(uint *param_1,uint *param_2)

{
  undefined1 uVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar3 = (*param_2 & 0xff00ff00) >> 8 | (*param_2 & 0xff00ff) << 8;
  *param_1 = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar4 = (ulong)(byte)((byte)param_2[1] >> 2);
  uVar1 = *(undefined1 *)((long)param_2 + 7);
  bVar2 = *(byte *)((long)param_2 + 6);
  uVar6 = (ulong)(((uint)(byte)param_2[1] << 0x18 | (uint)*(byte *)((long)param_2 + 5) << 0x10 |
                  (uint)bVar2 << 8) >> 9 & 0x1ffff);
  uVar7 = (uVar6 << uVar4) >> uVar4;
  *(ulong *)(param_1 + 2) = uVar6 << uVar4;
  if (uVar7 == uVar6) {
    *(ushort *)(param_1 + 4) = CONCAT11(bVar2,uVar1) & 0x1ff;
  }
  else {
    uVar5 = FUN_004249b0();
    if ((uVar5 & 1) == 0) {
      FUN_00623bb0(&DAT_00214e34,"../../modules/rtp_rtcp/source/rtcp_packet/tmmb_item.cc",0x173,
                   "Invalid tmmb bitrate value : ",uVar6,&DAT_001a6bc7,uVar4);
    }
  }
  return uVar7 == uVar6;
}


// ===== 008636e8  FUN_008636e8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008636e8(undefined4 *param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  uVar4 = *(ulong *)(param_1 + 2);
  if (uVar4 < 0x20000) {
    iVar5 = 0;
  }
  else {
    iVar5 = 0;
    do {
      uVar6 = uVar4 >> 0x12;
      uVar4 = uVar4 >> 1;
      iVar5 = iVar5 + 0x4000000;
    } while (uVar6 != 0);
  }
  uVar3 = *param_1;
  auVar7._4_4_ = uVar3;
  auVar7._0_4_ = uVar3;
  auVar7._8_4_ = uVar3;
  auVar7._12_4_ = uVar3;
  iVar2 = (int)uVar4 * 0x200;
  auVar7 = NEON_ushl(auVar7,_DAT_001f3910,4);
  *param_2 = CONCAT13(auVar7[0xc],CONCAT12(auVar7[8],CONCAT11(auVar7[4],auVar7[0])));
  uVar1 = *(undefined2 *)(param_1 + 4);
  *(char *)(param_2 + 1) = (char)((uint)(iVar2 + iVar5) >> 0x18);
  *(char *)((long)param_2 + 5) = (char)(uVar4 >> 7);
  *(char *)((long)param_2 + 7) = (char)uVar1;
  *(byte *)((long)param_2 + 6) = (byte)((uint)iVar2 >> 8) | (byte)((ushort)uVar1 >> 8);
  return;
}


// ===== 00863764  FUN_00863764 =====

void FUN_00863764(long param_1,undefined2 param_2)

{
  *(undefined2 *)(param_1 + 0x10) = param_2;
  return;
}


// ===== 00863770  FUN_00863770 =====

void FUN_00863770(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d3a910;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}


// ===== 00863794  FUN_00863794 =====

void FUN_00863794(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  pvVar1 = (void *)param_1[2];
  *param_1 = &PTR_FUN_00d3a910;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  pvVar2 = (void *)param_1[3];
  uVar3 = (ulong)(((long)pvVar1 - (long)pvVar2) * 0x1555555555555555) >> 3;
  uVar4 = (long)pvVar2 * -0x1555555555555555 - 8U >> 3;
  if (uVar4 <= uVar3) {
    uVar3 = uVar4;
  }
  if ((1 < uVar3) && ((((int)pvVar1 - (int)pvVar2 | -(int)pvVar2) & 7U) == 0)) {
    uVar3 = uVar3 & 0x1ffffffffffffffe;
    pvVar2 = (void *)((long)pvVar2 + uVar3 * -0x18);
    do {
      uVar3 = uVar3 - 2;
    } while (uVar3 != 0);
  }
  do {
    if (pvVar2 == pvVar1) {
      param_1[3] = pvVar1;
      operator_delete(pvVar1);
      return;
    }
    pvVar2 = (void *)((long)pvVar2 + -0x18);
  } while (pvVar2 != (void *)0x0);
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00863858  FUN_00863858 =====

void FUN_00863858(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  pvVar1 = (void *)param_1[2];
  *param_1 = &PTR_FUN_00d3a910;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[3];
    uVar3 = (ulong)(((long)pvVar1 - (long)pvVar2) * 0x1555555555555555) >> 3;
    uVar4 = (long)pvVar2 * -0x1555555555555555 - 8U >> 3;
    if (uVar4 <= uVar3) {
      uVar3 = uVar4;
    }
    if ((1 < uVar3) && ((((int)pvVar1 - (int)pvVar2 | -(int)pvVar2) & 7U) == 0)) {
      uVar3 = uVar3 & 0x1ffffffffffffffe;
      pvVar2 = (void *)((long)pvVar2 + uVar3 * -0x18);
      do {
        uVar3 = uVar3 - 2;
      } while (uVar3 != 0);
    }
    while (pvVar2 != pvVar1) {
      pvVar2 = (void *)((long)pvVar2 + -0x18);
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    param_1[3] = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 00863930  FUN_00863930 =====

uint FUN_00863930(long param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  
  uVar3 = *(uint *)(param_2 + 4);
  if (uVar3 < 8) {
    uVar4 = FUN_004022fc();
    if ((uVar4 & 1) == 0) {
      uVar2 = *(undefined4 *)(param_2 + 4);
      pcVar6 = " is too small for TMMBN.";
      uVar5 = 0x1d2;
LAB_008639c0:
      FUN_00623bb0(&DAT_001f6d4b,"../../modules/rtp_rtcp/source/rtcp_packet/tmmbn.cc",uVar5,
                   "Payload length ",uVar2,pcVar6);
    }
  }
  else {
    if ((uVar3 & 7) == 0) {
      FUN_007d0240(param_1,*(undefined8 *)(param_2 + 8));
      lVar8 = *(long *)(param_2 + 8);
      FUN_008630f8(param_1 + 0x10,(ulong)uVar3 - 8 >> 3);
      lVar7 = *(long *)(param_1 + 0x10);
      lVar1 = *(long *)(param_1 + 0x18);
      if (lVar7 == lVar1) {
        uVar3 = 1;
      }
      else {
        do {
          lVar8 = lVar8 + 8;
          uVar3 = FUN_00863628(lVar7,lVar8);
          lVar7 = lVar7 + 0x18;
          if (lVar7 == lVar1) break;
        } while ((uVar3 & 1) != 0);
      }
      goto LAB_008639c8;
    }
    uVar4 = FUN_004022fc();
    if ((uVar4 & 1) == 0) {
      uVar2 = *(undefined4 *)(param_2 + 4);
      pcVar6 = " is not valid for TMMBN.";
      uVar5 = 0x202;
      goto LAB_008639c0;
    }
  }
  uVar3 = 0;
LAB_008639c8:
  return uVar3 & 1;
}


// ===== 00863a3c  FUN_00863a3c =====

void FUN_00863a3c(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  if (puVar1 < *(undefined8 **)(param_1 + 0x20)) {
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    uVar4 = param_2[1];
    uVar3 = *param_2;
    puVar2 = puVar1 + 3;
    puVar1[2] = param_2[2];
    puVar1[1] = uVar4;
    *puVar1 = uVar3;
  }
  else {
    puVar2 = (undefined8 *)FUN_008634f4(param_1 + 0x10);
  }
  *(undefined8 **)(param_1 + 0x18) = puVar2;
  return;
}


// ===== 00863aa8  FUN_00863aa8 =====

long FUN_00863aa8(long param_1)

{
  return ((ulong)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10)) >> 3) * 0x5555555555555558
         + 0xc;
}


// ===== 00863acc  FUN_00863acc =====

bool FUN_00863acc(long *param_1,long param_2,long *param_3,ulong param_4,undefined8 param_5,
                 undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  while( true ) {
    lVar9 = *param_3;
    lVar4 = (**(code **)(*param_1 + 0x10))(param_1);
    if ((ulong)(lVar4 + lVar9) <= param_4) break;
    uVar5 = FUN_007cd570(param_1,param_2,param_3,param_5,param_6);
    if ((uVar5 & 1) == 0) goto LAB_00863bcc;
  }
  lVar8 = *param_3;
  lVar6 = (**(code **)(*param_1 + 0x10))(param_1);
  uVar7 = FUN_007cd5b4(param_1);
  FUN_007cd5e0(4,0xcd,uVar7,param_2,param_3);
  FUN_007d0260(param_1,param_2 + *param_3);
  lVar1 = *param_3 + 8;
  *param_3 = lVar1;
  lVar3 = param_1[3];
  for (lVar2 = param_1[2]; lVar2 != lVar3; lVar2 = lVar2 + 0x18) {
    FUN_008636e8(lVar2,param_2 + lVar1);
    lVar1 = *param_3 + 8;
    *param_3 = lVar1;
  }
  if (lVar6 + lVar8 != lVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../modules/rtp_rtcp/source/rtcp_packet/tmmbn.cc",0x6d,"index_end == *index",
                 &DAT_001fb920,lVar6 + lVar8);
  }
LAB_00863bcc:
  return (ulong)(lVar4 + lVar9) <= param_4;
}


// ===== 00863c14  FUN_00863c14 =====

void FUN_00863c14(undefined8 *param_1,int *param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  int *piVar9;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  
  if (((((*(byte *)(param_2 + 0x24) & 1) == 0) || (param_2[2] < 0)) ||
      (7 < (uint)(param_2[3] | param_2[2]))) || (0x11 < *(ulong *)(param_2 + 0x10))) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
    local_40 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_007d7f20(&local_60);
    local_60 = (undefined1 *)CONCAT62(local_60._2_6_,1);
    FUN_007d7f50(&local_60,param_2[3]);
    FUN_007d7f94(&local_60,1 << (ulong)(param_2[2] & 0x1f));
    FUN_007d7fb8(&local_60,(short)*param_2);
    uVar2 = *(ulong *)(param_2 + 0x10);
    piVar9 = param_2 + 0x12;
    if ((uVar2 & 1) != 0) {
      piVar9 = *(int **)(param_2 + 0x12);
    }
    lVar7 = (uVar2 & 0x3ffffffffffffffe) << 2;
    if ((uVar2 & 0x3ffffffffffffffe) != 0) {
      do {
        FUN_007d7fdc(&local_60,*param_2 - *piVar9);
        lVar7 = lVar7 + -8;
        piVar9 = piVar9 + 2;
      } while (lVar7 != 0);
      uVar2 = *(ulong *)(param_2 + 0x10);
    }
    if (uVar2 < 2) {
      FUN_007d7fa0(&local_60,(short)param_2[0x27],*(undefined2 *)((long)param_2 + 0x9e));
    }
    uVar2 = FUN_007d8148(&local_60);
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    if (uVar2 == 0) {
      puVar4 = (undefined1 *)0x0;
      puVar1 = (undefined1 *)0x0;
    }
    else {
      if ((long)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d34c0();
      }
      puVar1 = (undefined1 *)operator_new(uVar2);
      uVar3 = uVar2 - 1;
      *param_1 = puVar1;
      if ((ulong)-(long)puVar1 < uVar3) {
        uVar3 = -(long)puVar1;
      }
      uVar3 = uVar3 + 1;
      puVar4 = puVar1 + uVar2;
      param_1[2] = puVar4;
      puVar5 = puVar1;
      if (0x20 < uVar3) {
        uVar2 = 0x20;
        if ((uVar3 & 0x1f) != 0) {
          uVar2 = uVar3 & 0x1f;
        }
        puVar8 = (undefined8 *)(puVar1 + 0x10);
        lVar7 = uVar3 - uVar2;
        puVar5 = puVar1 + lVar7;
        do {
          lVar7 = lVar7 + -0x20;
          puVar8[-1] = 0;
          puVar8[-2] = 0;
          puVar8[1] = 0;
          *puVar8 = 0;
          puVar8 = puVar8 + 4;
        } while (lVar7 != 0);
      }
      do {
        if (puVar5 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        puVar6 = puVar5 + 1;
        *puVar5 = 0;
        puVar5 = puVar6;
      } while (puVar6 != puVar4);
      param_1[1] = puVar4;
    }
    puVar5 = (undefined1 *)0x0;
    if ((long)puVar4 - (long)puVar1 != 0) {
      puVar5 = puVar1;
    }
    FUN_007d83dc(puVar5,(long)puVar4 - (long)puVar1,&local_60);
    FUN_007d7f3c(&local_60);
  }
  return;
}


// ===== 00863de8  FUN_00863de8 =====

int FUN_00863de8(long param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  
  param_2 = param_2 << 3;
  if (param_2 != 0) {
    iVar4 = 0;
    iVar5 = 0;
    piVar8 = (int *)(param_1 + 4);
    iVar7 = 1;
    do {
      if (0x15 < (uint)piVar8[-1]) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/array:282: libc++ Hardening assertion __n < _Size failed: out-of-bounds access in std::array<T, N>\n"
                  );
      }
      bVar3 = *(byte *)(param_3 + (ulong)(uint)piVar8[-1]);
      iVar6 = iVar7;
      if (bVar3 != 0) {
        iVar5 = iVar5 + 1;
        iVar4 = *piVar8 + iVar4;
        iVar6 = 2;
        if (*piVar8 < 0x11 && bVar3 < 0xf) {
          iVar6 = iVar7;
        }
      }
      param_2 = param_2 + -8;
      piVar8 = piVar8 + 2;
      iVar7 = iVar6;
    } while (param_2 != 0);
    if (iVar4 != 0) {
      uVar1 = iVar4 + iVar5 * iVar6 + 7;
      uVar2 = uVar1 & 3;
      if ((int)uVar1 < 1) {
        uVar2 = -(-uVar1 & 3);
      }
      return uVar1 - uVar2;
    }
  }
  return 0;
}


// ===== 00863e98  FUN_00863e98 =====

void FUN_00863e98(undefined8 *param_1,long *param_2,byte *param_3)

{
  uint uVar1;
  long lVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  void *pvVar7;
  long lVar8;
  void *pvVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined1 uStack_f1;
  undefined8 *local_f0 [2];
  code *local_e0;
  code *pcStack_d8;
  undefined1 *local_c8;
  byte local_c0 [4];
  undefined4 local_bc;
  undefined8 local_b8;
  byte local_b0;
  undefined8 *local_a0 [2];
  code *local_90;
  code *pcStack_88;
  ulong local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  param_1[1] = &PTR_FUN_00d3aba8;
  *param_1 = &PTR_FUN_00d3a940;
  lVar8 = *param_2;
  plVar11 = param_1 + 2;
  *plVar11 = lVar8;
  if (lVar8 != 0) {
    FUN_00d0f740(1,lVar8 + 8);
  }
  lVar8 = param_2[3];
  lVar13 = param_2[2];
  lVar12 = param_2[1];
  param_1[6] = param_2[4];
  param_1[5] = lVar8;
  param_1[4] = lVar13;
  param_1[3] = lVar12;
  uVar6 = FUN_005d6490();
  param_1[7] = uVar6;
  param_1[8] = 0;
  local_c0[0] = *param_3;
  local_bc = *(undefined4 *)(param_3 + 0xb4);
  local_b0 = param_3[0xc1];
  uStack_78 = *(undefined8 *)(param_3 + 8);
  local_b8 = *(undefined8 *)(param_3 + 0x10);
  uVar1 = 5000000;
  if (local_c0[0] == 0) {
    uVar1 = 1000000;
  }
  local_80 = (ulong)*(uint *)(param_3 + 0x98) * 1000;
  if ((int)*(uint *)(param_3 + 0x98) < 1) {
    local_80 = (ulong)uVar1;
  }
  local_70 = *(undefined8 *)(param_3 + 0x48);
  local_90 = FUN_004473ec;
  pcStack_88 = FUN_00866014;
  local_a0[0] = param_1;
  FUN_00853c68(param_1 + 10,plVar11,local_c0);
  (*local_90)(0,local_a0,local_a0);
  FUN_00858da8(param_1 + 0x60,plVar11,param_3,param_1 + 1);
  param_1[0xa1] = 0;
  *(undefined2 *)(param_1 + 0xa0) = 0x1c;
  *(undefined2 *)(param_1 + 0xa2) = 0;
  uVar6 = *(undefined8 *)(param_3 + 0x40);
  param_1[0xa4] = 0;
  local_c8 = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xa3] = uVar6;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_c8);
  pthread_mutex_init((pthread_mutex_t *)(param_1 + 0xa5),(pthread_mutexattr_t *)&local_c8);
  iVar4 = pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_c8);
  param_1[0xaa] = 0;
  FUN_007ebca0(param_1 + 0xab,iVar4);
  if ((param_3[1] & 1) == 0) {
    uVar6 = param_1[7];
    pvVar7 = operator_new(0x550);
    FUN_00866154(pvVar7,plVar11,1);
    FUN_0086831c((long)pvVar7 + 0x168,*(undefined4 *)(param_3 + 0xb4),
                 *(undefined8 *)(param_3 + 0xb8),(*param_3 ^ 0xff) & 1,param_1[4]);
    FUN_0086c198((long)pvVar7 + 0x1a8,plVar11,param_3,pvVar7);
    FUN_0086b7c4((long)pvVar7 + 0x410,uVar6,(long)pvVar7 + 0x1a8,(long)pvVar7 + 0x168);
    lVar8 = (long)pvVar7 + 0x410;
    if (*(long *)(param_3 + 0x60) != 0) {
      lVar8 = *(long *)(param_3 + 0x60);
    }
    FUN_0086876c((long)pvVar7 + 0x440,plVar11,param_3,pvVar7,lVar8);
    pvVar9 = (void *)param_1[8];
    param_1[8] = pvVar7;
    if (pvVar9 != (void *)0x0) {
      FUN_00868b5c((long)pvVar9 + 0x440);
      FUN_0086b7f8((long)pvVar9 + 0x410);
      FUN_0086c458((long)pvVar9 + 0x1a8);
      FUN_008661cc(pvVar9);
      operator_delete(pvVar9);
      pvVar7 = (void *)param_1[8];
    }
    uVar5 = FUN_00869cbc((long)pvVar7 + 0x440);
    FUN_00856150(param_1 + 10,uVar5);
    lVar8 = param_1[8];
    uVar5 = FUN_00869cbc(lVar8 + 0x440);
    FUN_0086d160(lVar8 + 0x1a8,uVar5);
  }
  FUN_00856118(param_1 + 10,0x5b4);
  if (param_1[8] != 0) {
    FUN_00868d54(param_1[8] + 0x440,0x5b4);
  }
  uVar10 = param_1[7];
  local_e0 = FUN_004473ec;
  pcStack_d8 = FUN_00866024;
  local_f0[0] = param_1;
  uVar6 = FUN_00622394();
  FUN_00841954(&local_c8,uVar10,1000000,local_f0,0,uVar6,&uStack_f1);
  puVar3 = local_c8;
  pvVar7 = (void *)param_1[0xa4];
  local_c8 = (undefined1 *)0x0;
  param_1[0xa4] = puVar3;
  if (pvVar7 != (void *)0x0) {
    iVar4 = FUN_00d0f7a0(0xffffffff,pvVar7);
    if (iVar4 == 1) {
      operator_delete(pvVar7);
    }
    puVar3 = local_c8;
    if ((local_c8 != (undefined1 *)0x0) && (iVar4 = FUN_00d0f7a0(0xffffffff,local_c8), iVar4 == 1))
    {
      operator_delete(puVar3);
    }
  }
  (*local_e0)(0,local_f0,local_f0);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0086420c  FUN_0086420c =====

void FUN_0086420c(long param_1,undefined8 param_2)

{
  FUN_00856118(param_1 + 0x50);
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_00868d54(*(long *)(param_1 + 0x40) + 0x440,param_2);
    return;
  }
  return;
}


// ===== 0086425c  FUN_0086425c =====

void FUN_0086425c(long param_1)

{
  int iVar1;
  long *plVar2;
  void *pvVar3;
  
  FUN_00841cf8(param_1 + 0x520);
  FUN_007ebdcc(*(undefined8 *)(param_1 + 0x558));
  pvVar3 = *(void **)(param_1 + 0x558);
  if ((pvVar3 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar3), iVar1 == 1)) {
    operator_delete(pvVar3);
  }
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x528));
  pvVar3 = *(void **)(param_1 + 0x520);
  if ((pvVar3 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar3), iVar1 == 1)) {
    operator_delete(pvVar3);
  }
  FUN_00858fc4(param_1 + 0x300);
  FUN_008554a8(param_1 + 0x50);
  pvVar3 = *(void **)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (pvVar3 != (void *)0x0) {
    FUN_00868b5c((long)pvVar3 + 0x440);
    FUN_0086b7f8((long)pvVar3 + 0x410);
    FUN_0086c458((long)pvVar3 + 0x1a8);
    FUN_008661cc(pvVar3);
    operator_delete(pvVar3);
  }
  plVar2 = *(long **)(param_1 + 0x10);
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar2 + 1), iVar1 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x00864354. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))(plVar2);
    return;
  }
  return;
}


// ===== 00864368  FUN_00864368 =====

void FUN_00864368(long param_1)

{
  FUN_0086425c(param_1 + -8);
  return;
}


// ===== 00864374  FUN_00864374 =====

void FUN_00864374(void *param_1)

{
  FUN_0086425c();
  operator_delete(param_1);
  return;
}


// ===== 008643a4  FUN_008643a4 =====

void FUN_008643a4(long param_1)

{
  FUN_0086425c((void *)(param_1 + -8));
  operator_delete((void *)(param_1 + -8));
  return;
}


// ===== 008643d8  FUN_008643d8 =====

void FUN_008643d8(long param_1)

{
  FUN_00868d98(*(long *)(param_1 + 0x40) + 0x440);
  return;
}


// ===== 008643e8  FUN_008643e8 =====

undefined8 FUN_008643e8(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    uVar1 = FUN_00868e14(*(long *)(param_1 + 0x40) + 0x440);
    return uVar1;
  }
  return 0;
}


// ===== 00864404  FUN_00864404 =====

void FUN_00864404(long param_1)

{
  FUN_00868e50(*(long *)(param_1 + 0x40) + 0x440);
  return;
}


// ===== 00864414  FUN_00864414 =====

ulong FUN_00864414(long param_1)

{
  if (*(long *)(param_1 + 0x40) != 0) {
    return *(ulong *)(*(long *)(param_1 + 0x40) + 0x458) & 0xffffffffff;
  }
  return 0;
}


// ===== 00864434  FUN_00864434 =====

ulong FUN_00864434(long param_1)

{
  if (*(long *)(param_1 + 0x40) != 0) {
    return *(ulong *)(*(long *)(param_1 + 0x40) + 0x460) & 0xffffffffff;
  }
  return 0;
}


// ===== 00864454  FUN_00864454 =====

void FUN_00864454(long param_1)

{
  FUN_0085938c(param_1 + 0x300);
  return;
}


// ===== 00864460  FUN_00864460 =====

void FUN_00864460(long param_1)

{
  FUN_0085621c(param_1 + 0x50);
  return;
}


// ===== 0086446c  FUN_0086446c =====

undefined8 FUN_0086446c(void)

{
  return 0;
}


// ===== 00864478  FUN_00864478 =====

void FUN_00864478(long param_1)

{
  FUN_00869cbc(*(long *)(param_1 + 0x40) + 0x440);
  return;
}


// ===== 00864488  FUN_00864488 =====

void FUN_00864488(long param_1,undefined4 param_2)

{
  FUN_00856150(param_1 + 0x50);
  FUN_00869c84(*(long *)(param_1 + 0x40) + 0x440,param_2);
  FUN_0086d160(*(long *)(param_1 + 0x40) + 0x1a8,param_2);
  return;
}


// ===== 008644d4  FUN_008644d4 =====

undefined2 FUN_008644d4(long param_1)

{
  return *(undefined2 *)(*(long *)(param_1 + 0x40) + 0x180);
}


// ===== 008644e4  FUN_008644e4 =====

void FUN_008644e4(long param_1,short param_2)

{
  if (*(short *)(*(long *)(param_1 + 0x40) + 0x180) == param_2) {
    return;
  }
  *(short *)(*(long *)(param_1 + 0x40) + 0x180) = param_2;
  FUN_008671d8(*(undefined8 *)(param_1 + 0x40));
  return;
}


// ===== 00864508  FUN_00864508 =====

void FUN_00864508(long param_1,long param_2)

{
  FUN_0086a1dc(*(long *)(param_1 + 0x40) + 0x440);
  FUN_008686e4(*(long *)(param_1 + 0x40) + 0x168,param_2);
  FUN_00856150(param_1 + 0x50,*(undefined4 *)(param_2 + 4));
  FUN_0086d160(*(long *)(param_1 + 0x40) + 0x1a8,*(undefined4 *)(param_2 + 4));
  return;
}


// ===== 00864564  FUN_00864564 =====

void FUN_00864564(long param_1,undefined2 *param_2)

{
  FUN_0086a284(*(long *)(param_1 + 0x40) + 0x440);
  *(undefined2 *)(*(long *)(param_1 + 0x40) + 0x182) = *param_2;
  return;
}


// ===== 008645a4  FUN_008645a4 =====

void FUN_008645a4(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x40);
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  *param_1 = &DAT_aaaaaaaaaaaaaaaa;
  param_1[3] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[4] = &DAT_aaaaaaaaaaaaaaaa;
  FUN_0086a228(param_1,lVar1 + 0x440);
  FUN_0086870c(*(long *)(param_2 + 0x40) + 0x168,param_1);
  return;
}


// ===== 008645f4  FUN_008645f4 =====

void FUN_008645f4(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x40);
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  *param_1 = &DAT_aaaaaaaaaaaaaaaa;
  param_1[3] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[4] = &DAT_aaaaaaaaaaaaaaaa;
  FUN_0086a2c0(param_1,lVar1 + 0x440);
  *(undefined2 *)param_1 = *(undefined2 *)(*(long *)(param_2 + 0x40) + 0x182);
  return;
}


// ===== 00864644  FUN_00864644 =====

void FUN_00864644(long param_1,undefined4 param_2)

{
  FUN_008558ac(param_1 + 0x50);
  FUN_0085a39c(param_1 + 0x300,param_2);
  return;
}


// ===== 0086467c  FUN_0086467c =====

void FUN_0086467c(long param_1)

{
  FUN_0085a174(param_1 + 0x300);
  return;
}


// ===== 00864688  FUN_00864688 =====

void FUN_00864688(long param_1)

{
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_00869cf8(*(long *)(param_1 + 0x40) + 0x440);
    return;
  }
  return;
}


// ===== 008646a0  FUN_008646a0 =====

void FUN_008646a0(int *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  void *pvVar5;
  void *pvVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long local_1c8;
  long local_1c0;
  long local_1b8;
  long local_1b0;
  long local_1a8;
  undefined1 *local_1a0;
  undefined1 *puStack_198;
  undefined1 *local_190;
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
  undefined8 local_e0;
  undefined1 *puStack_d8;
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
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  
  *(undefined1 **)(param_1 + 2) = &DAT_aaaaaaaaaaaaaaaa;
  *(undefined1 **)param_1 = &DAT_aaaaaaaaaaaaaaaa;
  *(undefined1 **)(param_1 + 6) = &DAT_aaaaaaaaaaaaaaaa;
  *(undefined1 **)(param_1 + 4) = &DAT_aaaaaaaaaaaaaaaa;
  *(undefined1 **)(param_1 + 10) = &DAT_aaaaaaaaaaaaaaaa;
  *(undefined1 **)(param_1 + 8) = &DAT_aaaaaaaaaaaaaaaa;
  *(undefined1 **)(param_1 + 0xe) = &DAT_aaaaaaaaaaaaaaaa;
  *(undefined1 **)(param_1 + 0xc) = &DAT_aaaaaaaaaaaaaaaa;
  *(undefined1 **)(param_1 + 0x10) = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00853b90(param_1);
  if (*(long *)(param_2 + 0x40) != 0) {
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
    puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
    local_80 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
    local_f0 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_007ccda0(&local_f0);
    puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
    local_130 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_118 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_120 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
    local_110 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_100 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
    local_140 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_198 = &DAT_aaaaaaaaaaaaaaaa;
    local_1a0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_188 = &DAT_aaaaaaaaaaaaaaaa;
    local_190 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_178 = &DAT_aaaaaaaaaaaaaaaa;
    local_180 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_168 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_170 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_158 = &DAT_aaaaaaaaaaaaaaaa;
    local_160 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_150 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_007ccda0(&local_1a0);
    FUN_0086d008(*(long *)(param_2 + 0x40) + 0x1a8,&local_f0,&local_1a0);
    plVar3 = *(long **)(param_2 + 0x20);
    lVar9 = *(long *)(param_2 + 0x40);
    *param_1 = (int)local_180 + (int)local_d0;
    *(undefined1 **)(param_1 + 2) = local_190 + (long)local_e0;
    uVar4 = (**(code **)(*plVar3 + 0x10))();
    FUN_0086cebc(&local_1c8,lVar9 + 0x1a8,uVar4);
    lVar9 = 0x7fffffffffffffff;
    if ((local_1c8 != 0x7fffffffffffffff) && (local_1c0 != 0x7fffffffffffffff)) {
      lVar2 = -0x8000000000000000;
      if (local_1c0 != -0x8000000000000000 && local_1c8 != -0x8000000000000000) {
        lVar2 = local_1c0 + local_1c8;
      }
      lVar9 = 0x7fffffffffffffff;
      if ((lVar2 != 0x7fffffffffffffff) && (local_1b8 != 0x7fffffffffffffff)) {
        lVar1 = -0x8000000000000000;
        if (local_1b8 != -0x8000000000000000 && lVar2 != -0x8000000000000000) {
          lVar1 = local_1b8 + lVar2;
        }
        lVar9 = 0x7fffffffffffffff;
        if ((lVar1 != 0x7fffffffffffffff) && (local_1b0 != 0x7fffffffffffffff)) {
          lVar2 = -0x8000000000000000;
          if (local_1b0 != -0x8000000000000000 && lVar1 != -0x8000000000000000) {
            lVar2 = local_1b0 + lVar1;
          }
          lVar9 = 0x7fffffffffffffff;
          if ((lVar2 != 0x7fffffffffffffff) && (local_1a8 != 0x7fffffffffffffff)) {
            lVar9 = -0x8000000000000000;
            if (local_1a8 != -0x8000000000000000 && lVar2 != -0x8000000000000000) {
              lVar9 = local_1a8 + lVar2;
            }
          }
        }
      }
    }
    *(long *)(param_1 + 4) = lVar9;
  }
  param_2 = param_2 + 0x300;
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  *(long *)(param_1 + 0x10) = param_2;
  puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
  local_e0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
  local_d0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
  local_f0 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_0085a664(&local_f0,param_2);
  if (((ulong)local_c0 & 1) != 0) {
    param_1[6] = local_e0._2_4_;
    *(undefined1 **)(param_1 + 8) = puStack_e8;
  }
  FUN_0085a6c0(&local_f0,param_2);
  pvVar5 = *(void **)(param_1 + 10);
  if (pvVar5 != (void *)0x0) {
    pvVar6 = *(void **)(param_1 + 0xc);
    uVar7 = (ulong)(((long)pvVar5 - (long)pvVar6) * 0x1555555555555555) >> 2;
    uVar8 = (long)pvVar6 * -0x1555555555555555 - 4U >> 2;
    if (uVar8 <= uVar7) {
      uVar7 = uVar8;
    }
    if ((1 < uVar7) && ((((int)pvVar5 - (int)pvVar6 | -(int)pvVar6) & 3U) == 0)) {
      uVar7 = uVar7 & 0x3ffffffffffffffe;
      pvVar6 = (void *)((long)pvVar6 + uVar7 * -0xc);
      do {
        uVar7 = uVar7 - 2;
      } while (uVar7 != 0);
    }
    while (pvVar6 != pvVar5) {
      pvVar6 = (void *)((long)pvVar6 + -0xc);
      if (pvVar6 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    *(void **)(param_1 + 0xc) = pvVar5;
    operator_delete(pvVar5);
  }
  *(undefined1 **)(param_1 + 0xc) = puStack_e8;
  *(undefined1 **)(param_1 + 10) = local_f0;
  *(undefined1 **)(param_1 + 0xe) = local_e0;
  return;
}


