// ===== 005827b0  FUN_005827b0 =====

long FUN_005827b0(ulong param_1)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  
  if (param_1 - 0x7fffff00 < 0xffffffff80000101) {
    lVar4 = 0;
  }
  else {
    if (DAT_00b0d9f0 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00582894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar4 = (*DAT_00b0da10)(param_1 & 0xffffffff);
      return lVar4;
    }
    if (DAT_00b103d8 != 0) {
      (*DAT_00b0da70)();
    }
    iVar3 = (*DAT_00b0da30)(param_1 & 0xffffffff);
    if ((long)DAT_00b10630 < (long)param_1) {
      DAT_00b10630 = param_1;
    }
    if (0 < DAT_00b103e0) {
      if (DAT_00b105b8 < DAT_00b103e0 - iVar3) {
        DAT_00b103f0 = 0;
      }
      else {
        DAT_00b103f0 = 1;
        if (DAT_00b103d8 != 0) {
          (*DAT_00b0da80)();
        }
        sqlite3_release_memory(iVar3);
        if (DAT_00b103d8 != 0) {
          (*DAT_00b0da70)();
        }
        if ((DAT_00b103e8 != 0) && (DAT_00b103e8 - iVar3 <= DAT_00b105b8)) {
          lVar4 = 0;
          if (DAT_00b103d8 == 0) {
            return 0;
          }
          goto LAB_005829c0;
        }
      }
    }
    lVar4 = (*DAT_00b0da10)(iVar3);
    if ((lVar4 == 0) && (0 < DAT_00b103e0)) {
      if (DAT_00b103d8 != 0) {
        (*DAT_00b0da80)();
      }
      sqlite3_release_memory(iVar3);
      if (DAT_00b103d8 != 0) {
        (*DAT_00b0da70)();
      }
      lVar4 = (*DAT_00b0da10)(iVar3);
    }
    if (lVar4 != 0) {
      iVar3 = (*DAT_00b0da28)();
      DAT_00b105b8 = DAT_00b105b8 + iVar3;
      if (DAT_00b10608 < DAT_00b105b8) {
        DAT_00b10608 = DAT_00b105b8;
      }
      lVar2 = DAT_00b10600 + 1;
      bVar1 = DAT_00b10650 <= DAT_00b10600;
      DAT_00b10600 = lVar2;
      if (bVar1) {
        DAT_00b10650 = lVar2;
      }
    }
    if (DAT_00b103d8 != 0) {
LAB_005829c0:
      (*DAT_00b0da80)(DAT_00b103d8);
      return lVar4;
    }
  }
  return lVar4;
}


// ===== 005829fc  sqlite3_malloc64 =====

undefined8 sqlite3_malloc64(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = sqlite3_initialize();
  if (iVar1 != 0) {
    return 0;
  }
  uVar2 = FUN_005827b0(param_1);
  return uVar2;
}


// ===== 00582a34  sqlite3_free =====

void sqlite3_free(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (param_1 == 0) {
    return;
  }
  puVar2 = &DAT_00b0da18;
  if (DAT_00b0d9f0 != 0) {
    if (DAT_00b103d8 != 0) {
      (*DAT_00b0da70)(DAT_00b103d8);
    }
    iVar1 = (*DAT_00b0da28)();
    DAT_00b105b8 = DAT_00b105b8 - iVar1;
    DAT_00b10600 = DAT_00b10600 + -1;
    (*DAT_00b0da18)(param_1);
    if (DAT_00b103d8 == 0) {
      return;
    }
    puVar2 = &DAT_00b0da80;
  }
                    /* WARNING: Could not recover jumptable at 0x00582ad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)();
  return;
}


// ===== 00582aec  sqlite3_realloc =====

undefined8 sqlite3_realloc(undefined8 param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = sqlite3_initialize();
  if (iVar1 != 0) {
    return 0;
  }
  uVar2 = FUN_00582b2c(param_1,param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU));
  return uVar2;
}


// ===== 00582b2c  FUN_00582b2c =====

long FUN_00582b2c(long param_1,ulong param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  code *pcVar6;
  ulong uVar7;
  
  if (param_1 == 0) {
    lVar4 = FUN_005827b0(param_2);
    return lVar4;
  }
  if (param_2 != 0) {
    if (param_2 < 0x7fffff00) {
      iVar2 = (*DAT_00b0da28)();
      iVar3 = (*DAT_00b0da30)(param_2 & 0xffffffff);
      uVar1 = iVar3 - iVar2;
      uVar7 = (ulong)uVar1;
      if (uVar1 == 0) {
        return param_1;
      }
      if (DAT_00b0d9f0 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00582df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar4 = (*DAT_00b0da20)(param_1,iVar3);
        return lVar4;
      }
      if (DAT_00b103d8 != 0) {
        (*DAT_00b0da70)();
      }
      lVar4 = DAT_00b105b8;
      if ((long)DAT_00b10630 < (long)param_2) {
        DAT_00b10630 = param_2;
      }
      if (((((int)uVar1 < 1) || (DAT_00b105b8 < (long)(DAT_00b103e0 - uVar7))) ||
          (FUN_005a74dc(uVar7), DAT_00b103e8 < 1)) || (lVar4 < (long)(DAT_00b103e8 - uVar7))) {
        lVar4 = (*DAT_00b0da20)(param_1,iVar3);
        if ((lVar4 == 0) && (0 < DAT_00b103e0)) {
          if (DAT_00b103d8 != 0) {
            (*DAT_00b0da80)();
          }
          sqlite3_release_memory(param_2 & 0xffffffff);
          if (DAT_00b103d8 != 0) {
            (*DAT_00b0da70)();
          }
          lVar4 = (*DAT_00b0da20)(param_1,iVar3);
        }
        if (lVar4 != 0) {
          iVar3 = (*DAT_00b0da28)();
          DAT_00b105b8 = DAT_00b105b8 + (iVar3 - iVar2);
          if (DAT_00b10608 < DAT_00b105b8) {
            DAT_00b10608 = DAT_00b105b8;
          }
        }
        if (DAT_00b103d8 != 0) {
          (*DAT_00b0da80)(DAT_00b103d8);
          return lVar4;
        }
      }
      else {
        lVar4 = DAT_00b103d8;
        pcVar6 = DAT_00b0da80;
        if (DAT_00b103d8 != 0) goto LAB_00582c1c;
      }
    }
    else {
      lVar4 = 0;
    }
    return lVar4;
  }
  puVar5 = &DAT_00b0da18;
  if (DAT_00b0d9f0 != 0) {
    if (DAT_00b103d8 != 0) {
      (*DAT_00b0da70)(DAT_00b103d8);
    }
    iVar2 = (*DAT_00b0da28)();
    DAT_00b105b8 = DAT_00b105b8 - iVar2;
    DAT_00b10600 = DAT_00b10600 + -1;
    (*DAT_00b0da18)(param_1);
    if (DAT_00b103d8 == 0) {
      return 0;
    }
    puVar5 = &DAT_00b0da80;
  }
  pcVar6 = (code *)*puVar5;
LAB_00582c1c:
  (*pcVar6)();
  return 0;
}


// ===== 00582e30  sqlite3_realloc64 =====

undefined8 sqlite3_realloc64(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = sqlite3_initialize();
  if (iVar1 != 0) {
    return 0;
  }
  uVar2 = FUN_00582b2c(param_1,param_2);
  return uVar2;
}


// ===== 00582e70  sqlite3_str_vappendf =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sqlite3_str_vappendf(long *param_1,byte *param_2,long *param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  ulong *puVar4;
  byte *pbVar5;
  undefined4 uVar6;
  byte bVar7;
  char cVar8;
  ushort uVar9;
  undefined1 uVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  uint3 uVar14;
  uint3 uVar15;
  ulong *puVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  ulong *puVar21;
  byte *pbVar22;
  byte *pbVar23;
  byte *pbVar24;
  byte *pbVar25;
  byte *pbVar26;
  byte *pbVar27;
  byte *pbVar28;
  ulong uVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  bool bVar44;
  uint uVar45;
  uint uVar46;
  int iVar47;
  double *pdVar48;
  size_t sVar49;
  double dVar50;
  ulong uVar51;
  void *__src;
  uint uVar52;
  undefined8 *puVar53;
  long lVar54;
  uint *puVar55;
  int *piVar56;
  byte *pbVar57;
  byte *pbVar58;
  byte bVar59;
  byte bVar60;
  uint uVar61;
  long lVar62;
  uint uVar63;
  undefined1 (*pauVar64) [16];
  ulong *puVar65;
  byte bVar66;
  long lVar67;
  bool bVar68;
  long lVar69;
  int *piVar70;
  bool bVar71;
  bool bVar72;
  uint uVar73;
  long *plVar74;
  char *pcVar75;
  char *pcVar76;
  ulong uVar77;
  byte *pbVar78;
  byte *pbVar79;
  char cVar80;
  ulong uVar81;
  ulong uVar82;
  double dVar83;
  int iVar84;
  int iVar85;
  int iVar86;
  int iVar88;
  undefined8 uVar87;
  int iVar89;
  int iVar90;
  int iVar91;
  int iVar93;
  undefined8 uVar92;
  int iVar94;
  int iVar95;
  int iVar96;
  int iVar97;
  int iVar98;
  int iVar99;
  int iVar100;
  int iVar101;
  int iVar102;
  int iVar103;
  int iVar104;
  undefined8 uVar105;
  int iVar106;
  int iVar107;
  int iVar108;
  int iVar109;
  int iVar110;
  int iVar111;
  int iVar112;
  int iVar113;
  int iVar114;
  int iVar115;
  int iVar116;
  int iVar117;
  int iVar118;
  int iVar119;
  int iVar122;
  int iVar123;
  int iVar124;
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  int iVar125;
  int iVar128;
  int iVar129;
  int iVar130;
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  int iVar131;
  int iVar132;
  int iVar133;
  int iVar134;
  int iVar135;
  int iVar136;
  int iVar137;
  int iVar138;
  int iVar139;
  int iVar140;
  int iVar141;
  int iVar142;
  int iVar143;
  int iVar144;
  int iVar145;
  int iVar146;
  int iVar147;
  int iVar148;
  int iVar149;
  int iVar150;
  int iVar151;
  int iVar152;
  int iVar153;
  int iVar154;
  uint5 uVar155;
  uint5 uVar156;
  undefined1 auVar157 [16];
  uint5 uVar158;
  uint5 uVar159;
  undefined1 auVar160 [16];
  byte local_160 [4];
  undefined8 local_15c;
  undefined8 local_150;
  char acStack_148 [24];
  undefined4 local_130;
  undefined1 local_12c;
  byte abStack_eb [3];
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  undefined8 local_b8;
  double local_b0;
  
  bVar7 = *(byte *)((long)param_1 + 0x1d);
  if ((bVar7 >> 1 & 1) == 0) {
    piVar70 = (int *)0x0;
  }
  else {
    uVar45 = *(uint *)(param_3 + 3);
    if (((int)uVar45 < 0) && (*(uint *)(param_3 + 3) = uVar45 + 8, uVar45 < 0xfffffff9)) {
      puVar53 = (undefined8 *)(param_3[1] + (long)(int)uVar45);
    }
    else {
      puVar53 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar53 + 1);
    }
    piVar70 = (int *)*puVar53;
  }
  dVar43 = DAT_002a19c8;
  dVar42 = DAT_002a1900;
  dVar41 = DAT_002a18f8;
  dVar40 = _s__002a1708;
  dVar39 = DAT_002a1540;
  dVar38 = DAT_002a1538;
  dVar37 = DAT_002a14e8;
  uVar36 = DAT_002a14b8;
  uVar35 = DAT_002a1468;
  uVar34 = DAT_002a1410;
  dVar33 = DAT_002a1398;
  dVar32 = DAT_002a1340;
  dVar31 = DAT_002a1280;
  dVar30 = DAT_002a10d8;
  auVar121[8] = 0x20;
  auVar121._0_8_ = 0x2020202020202020;
  auVar121[9] = 0x20;
  auVar121[10] = 0x20;
  auVar121[0xb] = 0x20;
  auVar121[0xc] = 0x20;
  auVar121[0xd] = 0x20;
  auVar121[0xe] = 0x20;
  auVar121[0xf] = 0x20;
  pbVar78 = (byte *)0x0;
LAB_00582fd0:
  pbVar79 = param_2;
  if (*param_2 != 0x25) {
    if (*param_2 == 0) {
      return;
    }
    lVar54 = 0;
    uVar81 = 0;
    do {
      uVar77 = uVar81 + 1;
      lVar54 = lVar54 + 0x100000000;
      lVar67 = uVar81 + 1;
      uVar81 = uVar77;
    } while (param_2[lVar67] != 0x25 && param_2[lVar67] != 0);
    uVar45 = *(uint *)(param_1 + 3);
    uVar63 = uVar45 + (int)uVar77;
    if (uVar63 < *(uint *)(param_1 + 2)) {
      if ((int)uVar77 != 0) {
        *(uint *)(param_1 + 3) = uVar63;
        memcpy((void *)(param_1[1] + (ulong)uVar45),param_2,lVar54 >> 0x20);
      }
    }
    else {
      FUN_00586adc(param_1,param_2,uVar77 & 0xffffffff);
    }
    pbVar79 = param_2 + uVar77;
    auVar121[8] = 0x20;
    auVar121._0_8_ = 0x2020202020202020;
    auVar121[9] = 0x20;
    auVar121[10] = 0x20;
    auVar121[0xb] = 0x20;
    auVar121[0xc] = 0x20;
    auVar121[0xd] = 0x20;
    auVar121[0xe] = 0x20;
    auVar121[0xf] = 0x20;
    pbVar78 = param_2;
    if (*pbVar79 == 0) {
      return;
    }
  }
  pbVar79 = pbVar79 + 1;
  bVar59 = *pbVar79;
  if (bVar59 == 0) {
    uVar63 = *(uint *)(param_1 + 3);
    uVar45 = uVar63 + 1;
    if (uVar45 < *(uint *)(param_1 + 2)) {
      *(uint *)(param_1 + 3) = uVar45;
      *(undefined1 *)(param_1[1] + (ulong)uVar63) = 0x25;
      return;
    }
    FUN_00586adc(param_1,&DAT_002a468a,1);
    return;
  }
  bVar71 = false;
  bVar68 = false;
  bVar44 = false;
  uVar52 = 0;
  bVar72 = false;
  uVar45 = 0;
  uVar63 = 0xffffffff;
  bVar60 = 0;
  do {
    uVar61 = (uint)bVar59;
    param_2 = pbVar79;
    uVar73 = uVar52;
    if (bVar59 < 0x30) {
      if (uVar61 == 0x2a || bVar59 < 0x2a) {
        if (uVar61 == 0x22 || bVar59 < 0x22) {
          uVar73 = uVar61;
          if (uVar61 != 0x20) {
            if (uVar61 != 0x21) {
LAB_005834ec:
              iVar47 = 0;
              goto LAB_00583508;
            }
            bVar71 = true;
            uVar73 = uVar52;
          }
        }
        else if (uVar61 == 0x23) {
          bVar44 = true;
        }
        else {
          if (uVar61 != 0x2a) goto LAB_005834ec;
          if ((bVar7 >> 1 & 1) == 0) {
            uVar45 = *(uint *)(param_3 + 3);
            if (((int)uVar45 < 0) && (*(uint *)(param_3 + 3) = uVar45 + 8, uVar45 < 0xfffffff9)) {
              puVar55 = (uint *)(param_3[1] + (long)(int)uVar45);
            }
            else {
              puVar55 = (uint *)*param_3;
              *param_3 = (long)(puVar55 + 2);
            }
            uVar45 = *puVar55;
          }
          else {
            iVar47 = piVar70[1];
            if (iVar47 < *piVar70) {
              piVar70[1] = iVar47 + 1;
              pdVar48 = *(double **)(*(long *)(piVar70 + 2) + (long)iVar47 * 8);
              uVar9 = *(ushort *)((long)pdVar48 + 0x14);
              if ((uVar9 & 0x24) == 0) {
                if ((uVar9 >> 3 & 1) == 0) {
                  if (((uVar9 & 0x12) == 0) || (pdVar48[1] == 0.0)) goto LAB_00583370;
                  uVar45 = FUN_005c27b0();
                  auVar121[8] = 0x20;
                  auVar121._0_8_ = 0x2020202020202020;
                  auVar121[9] = 0x20;
                  auVar121[10] = 0x20;
                  auVar121[0xb] = 0x20;
                  auVar121[0xc] = 0x20;
                  auVar121[0xd] = 0x20;
                  auVar121[0xe] = 0x20;
                  auVar121[0xf] = 0x20;
                }
                else {
                  dVar83 = *pdVar48;
                  if (-9.223372036854775e+18 <= dVar83) {
                    if (dVar83 == 9.223372036854775e+18 ||
                        dVar83 < 9.223372036854775e+18 != NAN(dVar83)) {
                      uVar45 = (uint)(long)dVar83;
                    }
                    else {
                      uVar45 = 0xffffffff;
                    }
                  }
                  else {
                    uVar45 = 0;
                  }
                }
              }
              else {
                uVar45 = SUB84(*pdVar48,0);
              }
            }
            else {
LAB_00583370:
              uVar45 = 0;
            }
          }
          uVar61 = (uint)pbVar79[1];
          uVar46 = 0;
          if (uVar45 != 0x80000000) {
            uVar46 = -uVar45;
          }
          if ((int)uVar45 < 0) {
            bVar72 = true;
            uVar45 = uVar46;
          }
          if ((uVar61 != 0x2e) && (uVar61 != 0x6c)) {
            iVar47 = 0;
            param_2 = pbVar79 + 1;
            goto LAB_00583508;
          }
        }
      }
      else if (uVar61 == 0x2c || bVar59 < 0x2c) {
        uVar73 = uVar61;
        if (uVar61 != 0x2b) {
          if (uVar61 != 0x2c) goto LAB_005834ec;
          bVar60 = 0x2c;
          uVar73 = uVar52;
        }
      }
      else if (uVar61 == 0x2d) {
        bVar72 = true;
      }
      else {
        if (uVar61 != 0x2e) goto LAB_005834ec;
        param_2 = pbVar79 + 1;
        uVar61 = (uint)*param_2;
        if (uVar61 == 0x2a) {
          if ((bVar7 >> 1 & 1) == 0) {
            uVar63 = *(uint *)(param_3 + 3);
            if (((int)uVar63 < 0) && (*(uint *)(param_3 + 3) = uVar63 + 8, uVar63 < 0xfffffff9)) {
              puVar55 = (uint *)(param_3[1] + (long)(int)uVar63);
            }
            else {
              puVar55 = (uint *)*param_3;
              *param_3 = (long)(puVar55 + 2);
            }
            uVar46 = *puVar55;
          }
          else {
            iVar47 = piVar70[1];
            if (iVar47 < *piVar70) {
              piVar70[1] = iVar47 + 1;
              pdVar48 = *(double **)(*(long *)(piVar70 + 2) + (long)iVar47 * 8);
              uVar9 = *(ushort *)((long)pdVar48 + 0x14);
              if ((uVar9 & 0x24) == 0) {
                if ((uVar9 >> 3 & 1) == 0) {
                  if (((uVar9 & 0x12) == 0) || (pdVar48[1] == 0.0)) goto LAB_00583418;
                  uVar46 = FUN_005c27b0();
                  auVar121[8] = 0x20;
                  auVar121._0_8_ = 0x2020202020202020;
                  auVar121[9] = 0x20;
                  auVar121[10] = 0x20;
                  auVar121[0xb] = 0x20;
                  auVar121[0xc] = 0x20;
                  auVar121[0xd] = 0x20;
                  auVar121[0xe] = 0x20;
                  auVar121[0xf] = 0x20;
                }
                else {
                  dVar83 = *pdVar48;
                  if (-9.223372036854775e+18 <= dVar83) {
                    if (dVar83 == 9.223372036854775e+18 ||
                        dVar83 < 9.223372036854775e+18 != NAN(dVar83)) {
                      uVar46 = (uint)(long)dVar83;
                    }
                    else {
                      uVar46 = 0xffffffff;
                    }
                  }
                  else {
                    uVar46 = 0;
                  }
                }
              }
              else {
                uVar46 = SUB84(*pdVar48,0);
              }
            }
            else {
LAB_00583418:
              uVar46 = 0;
            }
          }
          uVar63 = 0xffffffff;
          if (uVar46 != 0x80000000) {
            uVar63 = -uVar46;
          }
          param_2 = pbVar79 + 2;
          uVar61 = (uint)*param_2;
          if (-1 < (int)uVar46) {
            uVar63 = uVar46;
          }
        }
        else {
          if (uVar61 - 0x30 < 10) {
            uVar63 = 0;
            do {
              iVar47 = uVar61 + uVar63 * 10;
              param_2 = param_2 + 1;
              uVar61 = (uint)*param_2;
              uVar63 = iVar47 - 0x30;
            } while (uVar61 - 0x30 < 10);
          }
          else {
            uVar63 = 0;
          }
          uVar63 = uVar63 & 0x7fffffff;
        }
        if (uVar61 != 0x6c) goto LAB_005834ec;
        pbVar79 = param_2 + -1;
      }
    }
    else if (uVar61 - 0x31 < 9) {
      bVar59 = pbVar79[1];
      pbVar57 = pbVar79 + 1;
      uVar45 = uVar61;
      while( true ) {
        param_2 = pbVar57;
        uVar61 = (uint)bVar59;
        if (9 < uVar61 - 0x30) break;
        uVar45 = uVar61 + (uVar45 - 0x30) * 10;
        bVar59 = param_2[1];
        pbVar57 = param_2 + 1;
        pbVar79 = param_2;
      }
      uVar45 = uVar45 - 0x30 & 0x7fffffff;
      if ((uVar61 != 0x2e) && (uVar61 != 0x6c)) break;
    }
    else {
      if (uVar61 != 0x30) {
        if (uVar61 != 0x6c) goto LAB_005834ec;
        param_2 = pbVar79 + 1;
        uVar61 = (uint)*param_2;
        if (uVar61 == 0x6c) {
          param_2 = pbVar79 + 2;
          uVar61 = (uint)*param_2;
          iVar47 = 2;
        }
        else {
          iVar47 = 1;
        }
        goto LAB_00583508;
      }
      bVar68 = true;
    }
    uVar52 = uVar73;
    pbVar79 = pbVar79 + 1;
    bVar59 = *pbVar79;
    if (bVar59 == 0) {
      return;
    }
  } while( true );
  iVar47 = 0;
LAB_00583508:
  lVar54 = 0;
  switch(uVar61) {
  case 0x25:
    lVar54 = 0x12;
    break;
  default:
    if (uVar61 == 0x53) {
      lVar54 = 0x15;
    }
    else {
      if (uVar61 != 0x72) {
        return;
      }
      lVar54 = 0x16;
    }
    break;
  case 0x45:
    lVar54 = 0xe;
    break;
  case 0x47:
    lVar54 = 0xf;
    break;
  case 0x51:
    lVar54 = 5;
    break;
  case 0x54:
    lVar54 = 0x14;
    break;
  case 0x58:
    lVar54 = 0xb;
    break;
  case 99:
    lVar54 = 7;
    break;
  case 100:
    break;
  case 0x65:
    lVar54 = 0xd;
    break;
  case 0x66:
    lVar54 = 0xc;
    break;
  case 0x67:
    lVar54 = 2;
    break;
  case 0x69:
    lVar54 = 0x10;
    break;
  case 0x6e:
    lVar54 = 0x11;
    break;
  case 0x6f:
    lVar54 = 8;
    break;
  case 0x70:
    lVar54 = 0x13;
    break;
  case 0x71:
    lVar54 = 4;
    break;
  case 0x73:
    lVar54 = 1;
    break;
  case 0x75:
    lVar54 = 9;
    break;
  case 0x77:
    lVar54 = 6;
    break;
  case 0x78:
    lVar54 = 10;
    break;
  case 0x7a:
    lVar54 = 3;
  }
  cVar80 = (&DAT_002c7820)[lVar54 * 6];
  iVar84 = (int)lVar54;
  switch(cVar80) {
  case '\0':
  case '\x0f':
    bVar60 = 0;
  case '\x10':
joined_r0x0058383c:
    bVar71 = bVar44;
    if ((0x3e0ffaU >> lVar54 & 1) == 0) {
      uVar73 = uVar52;
      if ((bVar7 >> 1 & 1) == 0) {
        uVar61 = *(uint *)(param_3 + 3);
        if (iVar47 == 0) {
          if (((int)uVar61 < 0) && (*(uint *)(param_3 + 3) = uVar61 + 8, uVar61 < 0xfffffff9)) {
            piVar56 = (int *)(param_3[1] + (long)(int)uVar61);
          }
          else {
            piVar56 = (int *)*param_3;
            *param_3 = (long)(piVar56 + 2);
          }
          dVar50 = (double)(long)*piVar56;
          goto LAB_0058414c;
        }
        if (iVar47 == 2) {
          if ((-1 < (int)uVar61) || (*(uint *)(param_3 + 3) = uVar61 + 8, 0xfffffff8 < uVar61))
          goto LAB_005840bc;
LAB_005840b0:
          pdVar48 = (double *)(param_3[1] + (long)(int)uVar61);
        }
        else {
          if (((int)uVar61 < 0) && (*(uint *)(param_3 + 3) = uVar61 + 8, uVar61 < 0xfffffff9))
          goto LAB_005840b0;
LAB_005840bc:
          pdVar48 = (double *)*param_3;
          *param_3 = (long)(pdVar48 + 1);
        }
        dVar50 = *pdVar48;
LAB_0058414c:
        uVar73 = 0x2d;
        if (-1 < (long)dVar50) {
          uVar73 = uVar52;
        }
      }
      else {
        iVar47 = piVar70[1];
        if (iVar47 < *piVar70) {
          piVar70[1] = iVar47 + 1;
          pdVar48 = *(double **)(*(long *)(piVar70 + 2) + (long)iVar47 * 8);
          uVar9 = *(ushort *)((long)pdVar48 + 0x14);
          if ((uVar9 & 0x24) == 0) {
            if ((uVar9 >> 3 & 1) != 0) {
              dVar83 = *pdVar48;
              if (-9.223372036854775e+18 <= dVar83) {
                if (dVar83 == 9.223372036854775e+18 || dVar83 < 9.223372036854775e+18 != NAN(dVar83)
                   ) {
                  dVar50 = (double)(long)dVar83;
                  goto LAB_0058414c;
                }
                dVar50 = NAN;
              }
              else {
                dVar50 = -0.0;
                uVar73 = 0x2d;
              }
              goto LAB_005847bc;
            }
            if (((uVar9 & 0x12) == 0) || (pdVar48[1] == 0.0)) goto LAB_005847b8;
            dVar50 = (double)FUN_005c27b0();
          }
          else {
            dVar50 = *pdVar48;
          }
          goto LAB_0058414c;
        }
LAB_005847b8:
        dVar50 = 0.0;
      }
LAB_005847bc:
      dVar83 = (double)-(long)dVar50;
      if (-1 < (long)dVar50) {
        dVar83 = dVar50;
      }
LAB_005847c4:
      bVar71 = false;
      if (dVar83 != 0.0) {
        bVar71 = bVar44;
      }
    }
    else {
      if ((bVar7 >> 1 & 1) == 0) {
        uVar52 = *(uint *)(param_3 + 3);
        if (iVar47 == 0) {
          if (((int)uVar52 < 0) && (*(uint *)(param_3 + 3) = uVar52 + 8, uVar52 < 0xfffffff9)) {
            puVar55 = (uint *)(param_3[1] + (long)(int)uVar52);
          }
          else {
            puVar55 = (uint *)*param_3;
            *param_3 = (long)(puVar55 + 2);
          }
          dVar83 = (double)(ulong)*puVar55;
        }
        else if (((int)uVar52 < 0) && (*(uint *)(param_3 + 3) = uVar52 + 8, uVar52 < 0xfffffff9)) {
          dVar83 = *(double *)(param_3[1] + (long)(int)uVar52);
        }
        else {
          pdVar48 = (double *)*param_3;
          *param_3 = (long)(pdVar48 + 1);
          dVar83 = *pdVar48;
        }
LAB_0058416c:
        uVar73 = 0;
        goto LAB_005847c4;
      }
      iVar47 = piVar70[1];
      if (iVar47 < *piVar70) {
        piVar70[1] = iVar47 + 1;
        pdVar48 = *(double **)(*(long *)(piVar70 + 2) + (long)iVar47 * 8);
        uVar9 = *(ushort *)((long)pdVar48 + 0x14);
        if ((uVar9 & 0x24) == 0) {
          if ((uVar9 >> 3 & 1) != 0) {
            dVar83 = *pdVar48;
            if (-9.223372036854775e+18 <= dVar83) {
              if (dVar83 == 9.223372036854775e+18 || dVar83 < 9.223372036854775e+18 != NAN(dVar83))
              {
                dVar83 = (double)(long)dVar83;
                goto LAB_0058416c;
              }
              uVar73 = 0;
              dVar83 = NAN;
            }
            else {
              uVar73 = 0;
              dVar83 = -0.0;
            }
            goto LAB_005847cc;
          }
          if (((uVar9 & 0x12) == 0) || (pdVar48[1] == 0.0)) goto LAB_00584b48;
          dVar83 = (double)FUN_005c27b0();
        }
        else {
          dVar83 = *pdVar48;
        }
        goto LAB_0058416c;
      }
LAB_00584b48:
      dVar83 = 0.0;
      uVar73 = 0;
      bVar71 = false;
    }
LAB_005847cc:
    if ((bVar68) && (uVar52 = uVar45 - (uVar73 != 0), (int)uVar63 <= (int)uVar52)) {
      uVar63 = uVar52;
    }
    if ((int)uVar63 < 0x25) {
      pbVar79 = (byte *)0x0;
      uVar81 = 0x46;
      pbVar78 = (byte *)&local_130;
      pbVar57 = abStack_eb;
    }
    else {
      uVar81 = (ulong)(uVar63 + 10);
      if (bVar60 != 0) {
        uVar81 = uVar81 + (ulong)uVar63 / 3;
      }
      if (*(char *)((long)param_1 + 0x1c) != '\0') {
        return;
      }
      if ((*(uint *)(param_1 + 2) < uVar81) &&
         (uVar61 = *(uint *)((long)param_1 + 0x14), uVar61 < uVar81)) {
LAB_005864c8:
        *(undefined1 *)((long)param_1 + 0x1c) = 0x12;
        if (uVar61 != 0) {
          if ((*(byte *)((long)param_1 + 0x1d) >> 2 & 1) != 0) {
            FUN_005869c8(*param_1,param_1[1]);
            *(byte *)((long)param_1 + 0x1d) = *(byte *)((long)param_1 + 0x1d) & 0xfb;
          }
          *(undefined4 *)(param_1 + 2) = 0;
          *(undefined4 *)(param_1 + 3) = 0;
          param_1[1] = 0;
        }
        if ((*param_1 != 0) && (lVar54 = *(long *)(*param_1 + 0x158), lVar54 != 0)) {
          *(undefined4 *)(lVar54 + 0x18) = 0x12;
          *(int *)(lVar54 + 0x34) = *(int *)(lVar54 + 0x34) + 1;
        }
switchD_0058361c_default:
        return;
      }
      if (*param_1 == 0) {
        pbVar79 = (byte *)FUN_005827b0(uVar81);
      }
      else {
        pbVar79 = (byte *)FUN_005a76c8(*param_1,uVar81);
      }
      if (pbVar79 == (byte *)0x0) {
LAB_0058648c:
        *(undefined1 *)((long)param_1 + 0x1c) = 7;
        if (*(int *)((long)param_1 + 0x14) == 0) {
          return;
        }
        if ((*(byte *)((long)param_1 + 0x1d) >> 2 & 1) != 0) {
          FUN_005869c8(*param_1,param_1[1]);
          *(byte *)((long)param_1 + 0x1d) = *(byte *)((long)param_1 + 0x1d) & 0xfb;
        }
        *(undefined4 *)(param_1 + 2) = 0;
        *(undefined4 *)(param_1 + 3) = 0;
        param_1[1] = 0;
        return;
      }
      pbVar57 = pbVar79 + ((int)uVar81 + -1);
      pbVar78 = pbVar79;
    }
    iVar47 = (int)pbVar78;
    iVar85 = (int)uVar81;
    pbVar78 = pbVar57;
    if (iVar84 == 0x16) {
      uVar81 = ((ulong)dVar83 / 10) * -0x3333333333333333 + 0x3333333333333333;
      uVar61 = SUB84(dVar83,0) + (int)((ulong)dVar83 / 10) * -10;
      uVar52 = 0;
      if (0x1999999999999999 < (uVar81 >> 1 | uVar81 << 0x3f) && uVar61 < 4) {
        uVar52 = uVar61;
      }
      bVar59 = "hstndrd"[(ulong)uVar52 * 2 & 0xfffffffe];
      pbVar78 = pbVar57 + -2;
      *pbVar78 = "t"[(ulong)uVar52 * 2];
      pbVar57[-1] = bVar59;
    }
    uVar61 = (uint)pbVar78;
    bVar59 = (&UNK_002c7821)[lVar54 * 6];
    dVar50 = (double)(ulong)(byte)(&UNK_002c781e)[lVar54 * 6];
    uVar52 = ((uVar63 + uVar61) - iVar85) - iVar47;
    lVar67 = 0;
    do {
      dVar11 = 0.0;
      if (dVar50 != 0.0) {
        dVar11 = (double)((ulong)dVar83 / (ulong)dVar50);
      }
      bVar44 = (ulong)dVar50 <= (ulong)dVar83;
      lVar62 = lVar67 + -1;
      uVar52 = uVar52 - 1;
      pbVar78[lVar67 + -1] =
           "0123456789ABCDEF0123456789abcdef"
           [((long)dVar83 - (long)dVar11 * (long)dVar50) + (ulong)bVar59];
      lVar67 = lVar62;
      dVar83 = dVar11;
    } while (bVar44);
    uVar46 = (~uVar61 + iVar85 + iVar47) - (int)lVar62;
    if ((int)uVar46 < (int)uVar63) {
      pbVar78 = pbVar78 + (lVar62 - (ulong)uVar52) + -1;
      memset(pbVar78,0x30,(ulong)((((uVar63 + uVar61) - iVar85) - iVar47) + (int)lVar62) + 1);
      uVar46 = uVar63;
    }
    else {
      pbVar78 = pbVar78 + lVar62;
    }
    if (bVar60 != 0) {
      iVar47 = (int)(uVar46 - 1) / 3;
      pbVar78 = pbVar78 + -iVar47;
      if (3 < (int)uVar46) {
        uVar81 = 0;
        iVar84 = (uVar46 - 1) % 3 + 1;
        do {
          lVar67 = (long)(int)uVar81;
          iVar84 = iVar84 + -1;
          pbVar78[lVar67] = pbVar78[lVar67 + iVar47];
          if (iVar84 == 0) {
            uVar81 = lVar67 + 1;
            iVar47 = iVar47 + -1;
            pbVar78[uVar81] = bVar60;
            iVar84 = 3;
          }
          uVar81 = (ulong)((int)uVar81 + 1);
        } while (0 < iVar47);
      }
    }
    if (uVar73 != 0) {
      pbVar78 = pbVar78 + -1;
      *pbVar78 = (byte)uVar73;
    }
    if ((bVar71) && ((0x77f2ffU >> lVar54 & 1) == 0)) {
      pbVar58 = &DAT_002c78a7 + (byte)(&UNK_002c7822)[lVar54 * 6];
      bVar59 = *pbVar58;
      do {
        pbVar58 = pbVar58 + 1;
        pbVar78 = pbVar78 + -1;
        *pbVar78 = bVar59;
        bVar59 = *pbVar58;
      } while (bVar59 != 0);
    }
    uVar63 = (int)pbVar57 - (int)pbVar78;
    uVar81 = (ulong)uVar63;
    uVar45 = uVar45 - uVar63;
    break;
  case '\x01':
  case '\x02':
  case '\x03':
    if ((bVar7 >> 1 & 1) == 0) {
      uVar61 = *(uint *)((long)param_3 + 0x1c);
      if (((int)uVar61 < 0) &&
         (*(uint *)((long)param_3 + 0x1c) = uVar61 + 0x10, uVar61 < 0xfffffff1)) {
        pdVar48 = (double *)(param_3[2] + (long)(int)uVar61);
      }
      else {
        pdVar48 = (double *)*param_3;
        *param_3 = (long)(pdVar48 + 1);
      }
      dVar83 = *pdVar48;
    }
    else {
      iVar47 = piVar70[1];
      dVar83 = 0.0;
      if (iVar47 < *piVar70) {
        piVar70[1] = iVar47 + 1;
        pdVar48 = *(double **)(*(long *)(piVar70 + 2) + (long)iVar47 * 8);
        uVar9 = *(ushort *)((long)pdVar48 + 0x14);
        if ((uVar9 >> 3 & 1) == 0) {
          if ((uVar9 & 0x24) == 0) {
            if ((uVar9 & 0x12) != 0) {
              dVar83 = (double)FUN_005c1da8();
            }
          }
          else {
            dVar83 = (double)(long)*pdVar48;
          }
        }
        else {
          dVar83 = *pdVar48;
        }
      }
    }
    uVar61 = uVar63;
    if (99999999 < (int)uVar63) {
      uVar61 = 100000000;
    }
    uVar73 = 6;
    if (-1 < (int)uVar63) {
      uVar73 = uVar61;
    }
    if (cVar80 == '\x03') {
      uVar63 = uVar73;
      if (uVar73 < 2) {
        uVar63 = 1;
        uVar73 = uVar63;
      }
    }
    else if (cVar80 == '\x01') {
      uVar63 = -uVar73;
    }
    else {
      uVar63 = uVar73 + 1;
    }
    uVar61 = 0x10;
    if (bVar71) {
      uVar61 = 0x1a;
    }
    local_160[1] = '\0';
    local_150 = acStack_148;
    if (0.0 <= dVar83) {
      local_160[0] = 0x2b;
      if (dVar83 != 0.0) goto LAB_00583a78;
      local_150 = "0";
      local_15c = 0x100000001;
    }
    else {
      dVar83 = -dVar83;
      local_160[0] = 0x2d;
LAB_00583a78:
      if ((((ulong)dVar83 ^ 0xffffffffffffffff) & 0x7ff0000000000000) == 0) {
        local_15c = 0;
        local_160[1] = '\x01';
        if (dVar83 != INFINITY) {
          local_160[1] = '\x02';
        }
      }
      else {
        local_e0 = dVar83;
        local_e8 = 0.0;
        if (dVar83 == 9.223372036854775e+18 || dVar83 < 9.223372036854775e+18 != NAN(dVar83)) {
          if (dVar37 <= dVar83) {
            iVar47 = 0;
          }
          else {
            iVar47 = 0;
            do {
              iVar47 = iVar47 + -100;
              dVar83 = (double)((ulong)local_e0 & 0xfffffffffc000000);
              local_b0 = local_e0 - dVar83;
              local_c0 = dVar83 * dVar41;
              local_b8 = 0x52f94c37d0000000;
              local_c8 = (double)NEON_fmadd(dVar83,0x52f94c37d0000000,local_b0 * dVar41);
              local_d0 = local_c0 + local_c8;
              local_d8 = (double)NEON_fmadd(local_b0,0x52f94c37d0000000,
                                            (local_c0 - local_d0) + local_c8);
              dVar83 = (double)NEON_fmadd(local_e0,DAT_002a1968,local_e8 * dVar30);
              local_d8 = local_d8 + dVar83;
              dVar83 = local_d0 + local_d8;
              local_e0 = dVar83;
              local_e8 = local_d8 + (local_d0 - dVar83);
            } while (dVar83 < dVar37);
          }
          while (local_e0 = dVar83, dVar83 < DAT_002a14b0) {
            iVar47 = iVar47 + -10;
            dVar50 = (double)((ulong)dVar83 & 0xfffffffffc000000);
            local_b0 = dVar83 - dVar50;
            local_c0 = dVar50 * DAT_002a15a0;
            local_b8 = 0;
            local_c8 = (double)NEON_fmadd(dVar50,0,local_b0 * DAT_002a15a0);
            local_d0 = local_c0 + local_c8;
            local_d8 = (double)NEON_fmadd(local_b0,0,(local_c0 - local_d0) + local_c8);
            dVar83 = (double)NEON_fmadd(dVar83,0,local_e8 * DAT_002a15a0);
            local_d8 = local_d8 + dVar83;
            dVar83 = local_d0 + local_d8;
            local_e0 = dVar83;
            local_e8 = local_d8 + (local_d0 - dVar83);
          }
          while (local_e0 < 9.223372036854775e+17) {
            iVar47 = iVar47 + -1;
            dVar83 = (double)((ulong)local_e0 & 0xfffffffffc000000);
            local_b0 = local_e0 - dVar83;
            local_c0 = dVar83 * 10.0;
            local_b8 = 0;
            local_c8 = (double)NEON_fmadd(dVar83,0,local_b0 * 10.0);
            local_d0 = local_c0 + local_c8;
            local_d8 = (double)NEON_fmadd(local_b0,0,(local_c0 - local_d0) + local_c8);
            dVar83 = (double)NEON_fmadd(local_e0,0,local_e8 * 10.0);
            local_d8 = local_d8 + dVar83;
            local_e0 = local_d0 + local_d8;
            local_e8 = local_d8 + (local_d0 - local_e0);
          }
        }
        else {
          if (dVar83 == dVar43 || dVar83 < dVar43 != (NAN(dVar83) || NAN(dVar43))) {
            iVar47 = 0;
          }
          else {
            iVar47 = 0;
            do {
              iVar47 = iVar47 + 100;
              dVar83 = (double)((ulong)local_e0 & 0xfffffffffc000000);
              local_b0 = local_e0 - dVar83;
              local_c0 = dVar83 * dVar32;
              local_b8 = 0x2951c0a600000000;
              local_c8 = (double)NEON_fmadd(dVar83,0x2951c0a600000000,local_b0 * dVar32);
              local_d0 = local_c0 + local_c8;
              local_d8 = (double)NEON_fmadd(local_b0,0x2951c0a600000000,
                                            (local_c0 - local_d0) + local_c8);
              dVar83 = (double)NEON_fmadd(local_e0,uVar34,local_e8 * dVar31);
              local_d8 = local_d8 + dVar83;
              dVar83 = local_d0 + local_d8;
              local_e0 = dVar83;
              local_e8 = local_d8 + (local_d0 - dVar83);
            } while (dVar83 != dVar43 && dVar83 < dVar43 == (NAN(dVar83) || NAN(dVar43)));
          }
          local_e0 = dVar83;
          if (dVar83 != dVar33 && dVar83 < dVar33 == (NAN(dVar83) || NAN(dVar33))) {
            do {
              iVar47 = iVar47 + 10;
              dVar83 = (double)((ulong)local_e0 & 0xfffffffffc000000);
              local_b0 = local_e0 - dVar83;
              local_c0 = dVar83 * dVar40;
              local_b8 = 0x3c1d7bdbb0000000;
              local_c8 = (double)NEON_fmadd(dVar83,0x3c1d7bdbb0000000,local_b0 * dVar40);
              local_d0 = local_c0 + local_c8;
              local_d8 = (double)NEON_fmadd(local_b0,0x3c1d7bdbb0000000,
                                            (local_c0 - local_d0) + local_c8);
              dVar83 = (double)NEON_fmadd(local_e0,uVar35,local_e8 * dVar38);
              local_d8 = local_d8 + dVar83;
              local_e0 = local_d0 + local_d8;
              local_e8 = local_d8 + (local_d0 - local_e0);
            } while (local_e0 != dVar33 && local_e0 < dVar33 == (NAN(local_e0) || NAN(dVar33)));
          }
          if (local_e0 != 9.223372036854775e+18 && local_e0 < 9.223372036854775e+18 == NAN(local_e0)
             ) {
            do {
              iVar47 = iVar47 + 1;
              dVar83 = (double)((ulong)local_e0 & 0xfffffffffc000000);
              local_b0 = local_e0 - dVar83;
              local_c0 = dVar83 * dVar42;
              local_b8 = 0x3df99999a0000000;
              local_c8 = (double)NEON_fmadd(dVar83,0x3df99999a0000000,local_b0 * dVar42);
              local_d0 = local_c0 + local_c8;
              local_d8 = (double)NEON_fmadd(local_b0,0x3df99999a0000000,
                                            (local_c0 - local_d0) + local_c8);
              dVar83 = (double)NEON_fmadd(local_e0,uVar36,local_e8 * dVar39);
              local_d8 = local_d8 + dVar83;
              local_e0 = local_d0 + local_d8;
              local_e8 = local_d8 + (local_d0 - local_e0);
            } while (local_e0 != 9.223372036854775e+18 &&
                     local_e0 < 9.223372036854775e+18 == NAN(local_e0));
          }
        }
        lVar67 = (long)local_e8;
        if (local_e8 < 0.0) {
          lVar67 = -(long)-local_e8;
        }
        if (lVar67 + (long)local_e0 == 0) {
          iVar85 = 0x17;
        }
        else {
          lVar62 = 0x2f;
          uVar81 = lVar67 + (long)local_e0;
          do {
            local_160[lVar62] = (char)uVar81 + (char)(uVar81 / 10) * -10 | 0x30;
            lVar62 = lVar62 + -1;
            bVar2 = 9 < uVar81;
            uVar81 = uVar81 / 10;
          } while (bVar2);
          iVar85 = (int)lVar62 + -0x18;
        }
        iVar86 = -iVar85;
        uVar46 = iVar86 + 0x17;
        iVar47 = uVar46 + iVar47;
        local_15c = CONCAT44(iVar47,uVar46);
        if ((int)uVar63 < 1) {
          uVar63 = iVar47 - uVar63;
          if (uVar63 == 0) {
            if (0x34 < (byte)acStack_148[(long)iVar85 + 1]) {
              acStack_148[iVar85] = '0';
              iVar85 = iVar85 + -1;
              uVar63 = 1;
              uVar46 = iVar86 + 0x18;
              local_15c = CONCAT44(iVar47 + 1,uVar46);
              goto LAB_00584580;
            }
          }
          else if (0 < (int)uVar63) goto LAB_00584580;
        }
        else {
LAB_00584580:
          if (((int)uVar61 < (int)uVar46) || ((int)uVar63 < (int)uVar46)) {
            lVar67 = (long)iVar85;
            uVar46 = uVar63;
            if ((int)uVar61 <= (int)uVar63) {
              uVar46 = uVar61;
            }
            local_15c = CONCAT44(local_15c._4_4_,uVar46);
            if (0x34 < (byte)acStack_148[(ulong)uVar46 + lVar67 + 1]) {
              uVar63 = uVar46 - 1;
              do {
                uVar81 = (ulong)uVar63;
                cVar8 = acStack_148[uVar81 + lVar67 + 1];
                acStack_148[uVar81 + lVar67 + 1] = cVar8 + 1U;
                if ((byte)(cVar8 + 1U) < 0x3a) goto LAB_005850fc;
                uVar63 = uVar63 - 1;
                acStack_148[uVar81 + lVar67 + 1] = '0';
              } while (uVar63 != 0xffffffff);
              iVar85 = iVar85 + -1;
              local_150[lVar67] = '1';
              uVar46 = uVar46 + 1;
              local_15c = CONCAT44(local_15c._4_4_ + 1,uVar46);
            }
          }
        }
LAB_005850fc:
        local_150 = acStack_148 + (long)iVar85 + 1;
        if ((acStack_148 + (long)iVar85 + 1)[(long)(int)uVar46 + -1] == '0') {
          pcVar76 = acStack_148 + (long)(int)uVar46 + (long)iVar85 + -1;
          do {
            uVar46 = uVar46 - 1;
            local_15c = CONCAT44(local_15c._4_4_,uVar46);
            cVar8 = *pcVar76;
            pcVar76 = pcVar76 + -1;
          } while (cVar8 == '0');
        }
      }
    }
    if (local_160[1] == '\x02') {
      pbVar78 = &DAT_002b0624;
      if (bVar68) {
        pbVar78 = &DAT_002a8f7b;
      }
      uVar63 = 3;
      if (bVar68) {
        uVar63 = 4;
      }
      uVar81 = (ulong)uVar63;
      uVar45 = uVar45 - uVar63;
      goto joined_r0x005838f4;
    }
    if (local_160[1] == '\0') {
      iVar47 = local_15c._4_4_;
    }
    else {
      if (!bVar68) {
        local_12c = 0;
        local_130 = 0x666e492d;
        if (local_160[0] == 0x2d) {
          pbVar78 = (byte *)&local_130;
        }
        else {
          pbVar78 = (byte *)((ulong)&local_130 | 1);
          if (uVar52 != 0) {
            pbVar78 = (byte *)&local_130;
            local_130 = CONCAT31(0x666e49,(char)uVar52);
          }
        }
        sVar49 = strlen((char *)pbVar78);
        uVar63 = (uint)sVar49 & 0x3fffffff;
        goto LAB_00585544;
      }
      *local_150 = '9';
      iVar47 = 1000;
      local_15c = DAT_002a1180;
    }
    uVar63 = (uint)local_160[0];
    if (local_160[0] != 0x2d) {
      uVar63 = uVar52;
    }
    if ((iVar84 == 0xf) || (bVar2 = bVar71, iVar84 == 2)) {
      bVar2 = iVar47 + 3 < 0 == SCARRY4(iVar47,3);
      iVar84 = -1;
      if (bVar2 && iVar47 <= (int)uVar73) {
        iVar84 = -iVar47;
      }
      cVar80 = '\x01';
      if (!bVar2 || (int)uVar73 < iVar47) {
        cVar80 = '\x02';
      }
      uVar73 = iVar84 + uVar73;
      bVar2 = !bVar44;
    }
    uVar46 = iVar47 - 1;
    lVar67 = (long)(int)uVar45;
    uVar52 = 0;
    if (cVar80 != '\x02') {
      uVar52 = uVar46;
    }
    uVar81 = lVar67 + (int)uVar73 + (ulong)(uVar52 & ((int)uVar52 >> 0x1f ^ 0xffffffffU)) + 0xf;
    if ((bVar60 != 0) && (0 < (int)uVar52)) {
      uVar81 = uVar81 + (ulong)(uVar52 + 2) / 3;
    }
    if ((long)uVar81 < 0x47) {
      pbVar79 = (byte *)0x0;
      pbVar78 = (byte *)&local_130;
    }
    else {
      if (*(char *)((long)param_1 + 0x1c) != '\0') {
        return;
      }
      if ((*(uint *)(param_1 + 2) < uVar81) &&
         (uVar61 = *(uint *)((long)param_1 + 0x14), uVar61 < uVar81)) goto LAB_005864c8;
      if (*param_1 == 0) {
        pbVar79 = (byte *)FUN_005827b0(uVar81);
      }
      else {
        pbVar79 = (byte *)FUN_005a76c8();
      }
      pbVar78 = pbVar79;
      if (pbVar79 == (byte *)0x0) goto LAB_0058648c;
    }
    bVar3 = 0 < (int)uVar73;
    pbVar57 = pbVar78;
    if (uVar63 != 0) {
      pbVar57 = pbVar78 + 1;
      *pbVar78 = (byte)uVar63;
    }
    iVar47 = 0;
    if ((int)uVar52 < 0) {
      pbVar58 = pbVar57 + 1;
      *pbVar57 = 0x30;
    }
    else {
      do {
        if (iVar47 < (int)local_15c) {
          lVar62 = (long)iVar47;
          iVar47 = iVar47 + 1;
          *pbVar57 = local_150[lVar62];
        }
        else {
          *pbVar57 = 0x30;
        }
        pbVar58 = pbVar57 + 1;
        if (((bVar60 != 0) && (pbVar58 = pbVar57 + 1, 1 < uVar52)) && ((uVar52 / 3) * 3 == uVar52))
        {
          pbVar58 = pbVar57 + 2;
          pbVar57[1] = 0x2c;
        }
        bVar1 = 0 < (int)uVar52;
        pbVar57 = pbVar58;
        uVar52 = uVar52 - 1;
      } while (bVar1);
      uVar46 = 0xffffffff;
    }
    pbVar57 = pbVar58;
    if ((bVar71 || bVar44) || bVar3) {
      pbVar57 = pbVar58 + 1;
      *pbVar58 = 0x2e;
    }
    uVar52 = uVar73 - 1;
    pbVar58 = pbVar57;
    if ((0 < (int)uVar73) && (uVar46 == 0xfffffffe || (int)(uVar46 + 2) < 0 != SCARRY4(uVar46,2))) {
      uVar46 = -uVar46 - 2;
      uVar61 = uVar52;
      if (uVar46 <= uVar52) {
        uVar61 = uVar46;
      }
      uVar73 = 0;
      if (uVar46 <= uVar52) {
        uVar73 = uVar52 - uVar46;
      }
      pbVar58 = pbVar57 + (ulong)uVar61 + 1;
      memset(pbVar57,0x30,(ulong)uVar61 + 1);
    }
    if (0 < (int)uVar73) {
      uVar73 = uVar73 + 1;
      pbVar57 = pbVar58;
      do {
        while (iVar47 < (int)local_15c) {
          lVar62 = (long)iVar47;
          iVar47 = iVar47 + 1;
          uVar73 = uVar73 - 1;
          pbVar58 = pbVar57 + 1;
          *pbVar57 = local_150[lVar62];
          pbVar57 = pbVar58;
          if (uVar73 < 2) goto LAB_005854a8;
        }
        uVar73 = uVar73 - 1;
        pbVar58 = pbVar57 + 1;
        *pbVar57 = 0x30;
        pbVar57 = pbVar58;
      } while (1 < uVar73);
    }
LAB_005854a8:
    if ((bVar2) && ((bVar71 || bVar44) || bVar3)) {
      bVar59 = pbVar58[-1];
      pbVar58 = pbVar58 + -1;
      while (bVar59 == 0x30) {
        *pbVar58 = 0;
        bVar59 = pbVar58[-1];
        pbVar58 = pbVar58 + -1;
      }
      if (bVar59 == 0x2e) {
        if (bVar71) {
          pbVar58[1] = 0x30;
          pbVar58 = pbVar58 + 2;
        }
        else {
          *pbVar58 = 0;
        }
      }
      else {
        pbVar58 = pbVar58 + 1;
      }
    }
    if (cVar80 == '\x02') {
      uVar52 = 1 - local_15c._4_4_;
      if (0 < local_15c._4_4_) {
        uVar52 = local_15c._4_4_ - 1;
      }
      bVar59 = 0x2d;
      if (0 < local_15c._4_4_) {
        bVar59 = 0x2b;
      }
      *pbVar58 = "0123456789ABCDEF0123456789abcdef"[(byte)(&UNK_002c7821)[lVar54 * 6]];
      pbVar58[1] = bVar59;
      if (uVar52 < 100) {
        pbVar57 = pbVar58 + 2;
      }
      else {
        uVar61 = uVar52 / 100;
        uVar52 = uVar52 % 100;
        pbVar57 = pbVar58 + 3;
        pbVar58[2] = (char)uVar61 + 0x30;
      }
      pbVar58 = pbVar57 + 2;
      bVar59 = (byte)((uVar52 & 0xff) / 10);
      *pbVar57 = bVar59 | 0x30;
      pbVar57[1] = (char)uVar52 + bVar59 * -10 | 0x30;
    }
    uVar52 = (uint)pbVar58 - (int)pbVar78;
    uVar81 = (ulong)uVar52;
    *pbVar58 = 0;
    if (((bVar68) && (!bVar72)) && (uVar45 - uVar52 != 0 && (int)uVar52 <= (int)uVar45)) {
      if (-1 < (int)uVar52) {
        lVar62 = (long)(int)(uVar45 - uVar52);
        lVar54 = lVar67;
        if (lVar62 <= lVar67) {
          lVar54 = lVar62;
        }
        uVar81 = (lVar67 - lVar54) + 1;
        if (7 < uVar81) {
          lVar54 = lVar67;
          if (lVar62 <= lVar67) {
            lVar54 = lVar62;
          }
          if (((pbVar78 + lVar67 + -(lVar67 - lVar54) <= pbVar78 + lVar67) &&
              (pbVar78 + (lVar67 - lVar62) + -(lVar67 - lVar54) <= pbVar78 + (lVar67 - lVar62))) &&
             (0x1f < lVar62 + 0x1fU)) {
            if (uVar81 < 0x20) {
              uVar51 = 0;
            }
            else {
              uVar51 = uVar81 & 0xffffffffffffffe0;
              pbVar57 = pbVar78 + lVar67 + -0xf;
              uVar77 = uVar51;
              do {
                pbVar5 = pbVar57 + -lVar62;
                uVar77 = uVar77 - 0x20;
                uVar87 = *(undefined8 *)(pbVar5 + -0x10);
                uVar105 = *(undefined8 *)(pbVar5 + 8);
                uVar92 = *(undefined8 *)pbVar5;
                *(undefined8 *)(pbVar57 + -8) = *(undefined8 *)(pbVar5 + -8);
                *(undefined8 *)(pbVar57 + -0x10) = uVar87;
                *(undefined8 *)(pbVar57 + 8) = uVar105;
                *(undefined8 *)pbVar57 = uVar92;
                pbVar57 = pbVar57 + -0x20;
              } while (uVar77 != 0);
              if (uVar81 == uVar51) goto LAB_0058566c;
              if ((uVar81 & 0x18) == 0) {
                lVar67 = lVar67 - uVar51;
                goto LAB_00585650;
              }
            }
            lVar69 = lVar67 - uVar51;
            uVar77 = uVar81 & 0xfffffffffffffff8;
            lVar67 = lVar67 - uVar77;
            lVar54 = uVar51 - uVar77;
            pbVar57 = pbVar78 + lVar69 + -7;
            do {
              lVar54 = lVar54 + 8;
              *(undefined8 *)pbVar57 = *(undefined8 *)(pbVar57 + -lVar62);
              pbVar57 = pbVar57 + -8;
            } while (lVar54 != 0);
            if (uVar81 == uVar77) goto LAB_0058566c;
          }
        }
LAB_00585650:
        do {
          pbVar78[lVar67] = pbVar78[lVar67 - lVar62];
          bVar72 = lVar62 < lVar67;
          lVar67 = lVar67 + -1;
        } while (bVar72);
      }
LAB_0058566c:
      if (uVar45 == uVar52) {
        uVar81 = (ulong)uVar45;
      }
      else {
        pbVar57 = pbVar78;
        if (uVar63 != 0) {
          pbVar57 = pbVar78 + 1;
        }
        memset(pbVar57,0x30,(ulong)(~(uint)pbVar58 + uVar45 + (int)pbVar78) + 1);
        uVar81 = (ulong)uVar45;
      }
      goto LAB_00584a90;
    }
    goto LAB_00585c64;
  case '\x04':
    if ((bVar7 >> 1 & 1) != 0) goto LAB_0058603c;
    uVar45 = *(uint *)(param_3 + 3);
    lVar54 = param_1[3];
    if (((int)uVar45 < 0) && (*(uint *)(param_3 + 3) = uVar45 + 8, uVar45 < 0xfffffff9)) {
      puVar53 = (undefined8 *)(param_3[1] + (long)(int)uVar45);
    }
    else {
      puVar53 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar53 + 1);
    }
    pbVar79 = (byte *)0x0;
    uVar81 = 0;
    *(int *)*puVar53 = (int)lVar54;
    goto LAB_00584a90;
  case '\x05':
  case '\x06':
    if ((bVar7 >> 1 & 1) == 0) {
      uVar52 = *(uint *)(param_3 + 3);
      if ((-1 < (int)uVar52) || (*(uint *)(param_3 + 3) = uVar52 + 8, 0xfffffff8 < uVar52)) {
        puVar53 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar53 + 1);
        pbVar78 = (byte *)*puVar53;
joined_r0x00583ba8:
        if (pbVar78 != (byte *)0x0) goto LAB_00583bac;
        goto LAB_0058469c;
      }
      pbVar78 = *(byte **)(param_3[1] + (long)(int)uVar52);
joined_r0x005836b0:
      if (pbVar78 == (byte *)0x0) goto LAB_0058469c;
LAB_00583bac:
      if (cVar80 != '\x06') {
        pbVar79 = (byte *)0x0;
        goto LAB_005846a8;
      }
      pbVar79 = pbVar78;
      if (((((int)param_1[3] != 0) || (*(int *)((long)param_1 + 0x14) == 0)) || (uVar45 != 0)) ||
         (-1 < (int)uVar63)) goto LAB_005846a8;
      if (*(char *)((long)param_1 + 0x1c) == '\0') {
        lVar54 = *param_1;
        param_1[1] = (long)pbVar78;
        if ((lVar54 == 0) || (*(byte **)(lVar54 + 0x1f0) <= pbVar78)) {
LAB_005862c0:
          uVar45 = (*DAT_00b0da28)(pbVar78);
        }
        else if (pbVar78 < *(byte **)(lVar54 + 0x1d8)) {
          if (pbVar78 < *(byte **)(lVar54 + 0x1e0)) goto LAB_005862c0;
          uVar45 = (uint)*(ushort *)(lVar54 + 0x19e);
        }
        else {
          uVar45 = 0x80;
        }
        *(uint *)(param_1 + 2) = uVar45;
        sVar49 = strlen((char *)pbVar78);
        uVar45 = 0;
        *(uint *)(param_1 + 3) = (uint)sVar49 & 0x7fffffff;
        *(byte *)((long)param_1 + 0x1d) = *(byte *)((long)param_1 + 0x1d) | 4;
        goto LAB_0058626c;
      }
LAB_00584708:
      sVar49 = strlen((char *)pbVar78);
      uVar81 = (ulong)((uint)sVar49 & 0x7fffffff);
      goto LAB_00585a80;
    }
    iVar47 = piVar70[1];
    if (iVar47 < *piVar70) {
      piVar70[1] = iVar47 + 1;
      lVar54 = *(long *)(*(long *)(piVar70 + 2) + (long)iVar47 * 8);
      if (lVar54 != 0) {
        if ((((*(ushort *)(lVar54 + 0x14) ^ 0xffff) & 0x202) == 0) &&
           (*(char *)(lVar54 + 0x16) == '\x01')) {
          pbVar78 = *(byte **)(lVar54 + 8);
          cVar80 = '\x05';
          goto joined_r0x00583ba8;
        }
        if ((*(ushort *)(lVar54 + 0x14) & 1) == 0) {
          pbVar78 = (byte *)FUN_005c17b0(lVar54,1);
          cVar80 = '\x05';
          goto joined_r0x005836b0;
        }
      }
    }
LAB_0058469c:
    pbVar78 = &DAT_002a8138;
    pbVar79 = (byte *)0x0;
LAB_005846a8:
    if ((int)uVar63 < 0) goto LAB_00584708;
    if (bVar71) {
      pbVar57 = pbVar78;
      if (uVar63 != 0) {
        do {
          if (*pbVar57 == 0) break;
          if (*pbVar57 < 0xc0) {
            pbVar57 = pbVar57 + 1;
          }
          else {
            do {
              pbVar57 = pbVar57 + 1;
            } while ((*pbVar57 & 0xc0) == 0x80);
          }
          bVar44 = 1 < (int)uVar63;
          uVar63 = uVar63 - 1;
        } while (bVar44);
      }
      uVar81 = (ulong)(uint)((int)pbVar57 - (int)pbVar78);
      bVar71 = true;
      goto LAB_00585a80;
    }
    if (uVar63 != 0) {
      uVar81 = 0;
      do {
        if (pbVar78[uVar81] == 0) {
          uVar45 = uVar45 - (int)uVar81;
          uVar77 = (ulong)uVar45;
          goto joined_r0x00584768;
        }
        uVar81 = uVar81 + 1;
      } while (uVar63 != uVar81);
      uVar45 = uVar45 - uVar63;
      uVar77 = (ulong)uVar45;
      uVar81 = (ulong)uVar63;
      goto joined_r0x00584768;
    }
    uVar81 = 0;
    break;
  case '\a':
    pbVar78 = (byte *)&local_130;
    local_130 = CONCAT31(local_130._1_3_,0x25);
    uVar81 = 1;
    uVar45 = uVar45 - 1;
joined_r0x005838f4:
    pbVar79 = (byte *)0x0;
    break;
  case '\b':
    if ((bVar7 >> 1 & 1) == 0) {
      uVar52 = *(uint *)(param_3 + 3);
      if (((int)uVar52 < 0) && (*(uint *)(param_3 + 3) = uVar52 + 8, uVar52 < 0xfffffff9)) {
        puVar55 = (uint *)(param_3[1] + (long)(int)uVar52);
      }
      else {
        puVar55 = (uint *)*param_3;
        *param_3 = (long)(puVar55 + 2);
      }
      uVar52 = *puVar55;
      uVar10 = (undefined1)uVar52;
      if (uVar52 < 0x80) {
        local_130 = CONCAT31(local_130._1_3_,uVar10);
        uVar81 = 1;
      }
      else if (uVar52 < 0x800) {
        uVar81 = 2;
        local_130 = CONCAT22(local_130._2_2_,CONCAT11(uVar10,(char)(uVar52 >> 6))) & 0xffff3fff |
                    0x80c0;
      }
      else if (uVar52 >> 0x10 == 0) {
        uVar81 = 3;
        uVar52 = CONCAT22(local_130._2_2_,CONCAT11((char)(uVar52 >> 6),(char)(uVar52 >> 0xc))) &
                 0xffff3fff;
        local_130._3_1_ = (undefined1)(uVar52 >> 0x18);
        local_130 = CONCAT13(local_130._3_1_,CONCAT12(uVar10,(short)uVar52)) & 0xff3fffff | 0x8080e0
        ;
      }
      else {
        local_130 = CONCAT13(uVar10,CONCAT12((char)(uVar52 >> 6),
                                             CONCAT11((char)(uVar52 >> 0xc),(char)(uVar52 >> 0x12)))
                            ) & 0x3f3f3f07 | 0x808080f0;
LAB_005860c8:
        uVar81 = 4;
      }
    }
    else {
      iVar47 = piVar70[1];
      if (iVar47 < *piVar70) {
        piVar70[1] = iVar47 + 1;
        lVar54 = *(long *)(*(long *)(piVar70 + 2) + (long)iVar47 * 8);
        if (lVar54 != 0) {
          if ((((*(ushort *)(lVar54 + 0x14) ^ 0xffff) & 0x202) == 0) &&
             (*(char *)(lVar54 + 0x16) == '\x01')) {
            pbVar78 = *(byte **)(lVar54 + 8);
          }
          else {
            if ((*(ushort *)(lVar54 + 0x14) & 1) != 0) goto LAB_00584eec;
            pbVar78 = (byte *)FUN_005c17b0(lVar54,1);
          }
          uVar52 = local_130;
          if (pbVar78 != (byte *)0x0) {
            bVar59 = *pbVar78;
            local_130 = CONCAT31(local_130._1_3_,bVar59);
            if ((bVar59 < 0xc0) || ((pbVar78[1] & 0xc0) != 0x80)) {
              uVar81 = 1;
            }
            else {
              local_130._2_2_ = SUB42(uVar52,2);
              local_130._0_2_ = CONCAT11(pbVar78[1],bVar59);
              if ((pbVar78[2] & 0xc0) == 0x80) {
                local_130._3_1_ = SUB41(uVar52,3);
                local_130._0_3_ = CONCAT12(pbVar78[2],(undefined2)local_130);
                if ((pbVar78[3] & 0xc0) == 0x80) {
                  local_130 = CONCAT13(pbVar78[3],(undefined3)local_130);
                  goto LAB_005860c8;
                }
                uVar81 = 3;
              }
              else {
                uVar81 = 2;
              }
            }
            goto LAB_00584efc;
          }
        }
      }
LAB_00584eec:
      local_130 = local_130 & 0xffffff00;
      uVar81 = 1;
    }
LAB_00584efc:
    if (1 < (int)uVar63) {
      iVar47 = uVar63 - 1;
      uVar45 = uVar45 - iVar47;
      if ((1 < (int)uVar45) && (!bVar72)) {
        uVar45 = uVar45 - 1;
        if (((ulong)*(uint *)(param_1 + 3) + (ulong)uVar45 < (ulong)*(uint *)(param_1 + 2)) ||
           (uVar45 = FUN_005865d8(param_1), 0 < (int)uVar45)) {
          uVar45 = uVar45 + 1;
          do {
            uVar52 = *(uint *)(param_1 + 3);
            uVar45 = uVar45 - 1;
            *(uint *)(param_1 + 3) = uVar52 + 1;
            *(undefined1 *)(param_1[1] + (ulong)uVar52) = 0x20;
          } while (1 < uVar45);
        }
        uVar45 = 0;
      }
      uVar61 = *(uint *)(param_1 + 3);
      uVar52 = uVar61 + (int)uVar81;
      if (uVar52 < *(uint *)(param_1 + 2)) {
        *(uint *)(param_1 + 3) = uVar52;
        memcpy((void *)(param_1[1] + (ulong)uVar61),&local_130,uVar81);
      }
      else {
        FUN_00586adc(param_1,&local_130,uVar81);
      }
      if (uVar63 != 2) {
        uVar77 = 1;
        do {
          if ((long)(ulong)(iVar47 - 1) <= (long)uVar77) {
            uVar77 = (ulong)(iVar47 - 1);
          }
          uVar51 = uVar77 * uVar81;
          if ((long)(ulong)*(uint *)(param_1 + 2) <= (long)(uVar51 + *(uint *)(param_1 + 3))) {
            FUN_005865d8(param_1,uVar51);
          }
          if (*(char *)((long)param_1 + 0x1c) != '\0') {
            pbVar79 = (byte *)0x0;
            pbVar78 = (byte *)&local_130;
            bVar71 = true;
            goto LAB_00585a80;
          }
          uVar63 = *(uint *)(param_1 + 3);
          lVar54 = param_1[1];
          iVar84 = (int)uVar51;
          lVar67 = uVar63 - uVar51;
          if (uVar63 + iVar84 < *(uint *)(param_1 + 2)) {
            if (iVar84 != 0) {
              *(uint *)(param_1 + 3) = uVar63 + iVar84;
              memcpy((void *)(lVar54 + (ulong)uVar63),(void *)(lVar54 + lVar67),(long)iVar84);
            }
          }
          else {
            FUN_00586adc(param_1,lVar54 + lVar67,uVar51 & 0xffffffff);
          }
          iVar47 = iVar47 - (int)uVar77;
          uVar77 = uVar77 << 1;
          pbVar78 = (byte *)&local_130;
          bVar71 = true;
        } while (1 < iVar47);
        pbVar79 = (byte *)0x0;
        goto LAB_00585a80;
      }
    }
    pbVar79 = (byte *)0x0;
    pbVar78 = (byte *)&local_130;
    bVar71 = true;
    goto LAB_00585a80;
  case '\t':
  case '\n':
  case '\x0e':
    if ((bVar7 >> 1 & 1) == 0) {
      uVar52 = *(uint *)(param_3 + 3);
      if (((int)uVar52 < 0) && (*(uint *)(param_3 + 3) = uVar52 + 8, uVar52 < 0xfffffff9)) {
        puVar53 = (undefined8 *)(param_3[1] + (long)(int)uVar52);
      }
      else {
        puVar53 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar53 + 1);
      }
      pbVar78 = (byte *)*puVar53;
    }
    else {
      iVar47 = piVar70[1];
      if (iVar47 < *piVar70) {
        piVar70[1] = iVar47 + 1;
        pbVar78 = *(byte **)(*(long *)(piVar70 + 2) + (long)iVar47 * 8);
        if (pbVar78 != (byte *)0x0) {
          if ((((*(ushort *)(pbVar78 + 0x14) ^ 0xffff) & 0x202) == 0) && (pbVar78[0x16] == 1)) {
            pbVar78 = *(byte **)(pbVar78 + 8);
          }
          else {
            if ((*(ushort *)(pbVar78 + 0x14) & 1) != 0) goto LAB_00583f44;
            pbVar78 = (byte *)FUN_005c17b0(pbVar78,1);
            auVar121[8] = 0x20;
            auVar121._0_8_ = 0x2020202020202020;
            auVar121[9] = 0x20;
            auVar121[10] = 0x20;
            auVar121[0xb] = 0x20;
            auVar121[0xc] = 0x20;
            auVar121[0xd] = 0x20;
            auVar121[0xe] = 0x20;
            auVar121[0xf] = 0x20;
          }
        }
      }
      else {
LAB_00583f44:
        pbVar78 = (byte *)0x0;
      }
    }
    pbVar57 = &DAT_002a1c46;
    if (iVar84 != 5) {
      pbVar57 = &UNK_002ab6dd;
    }
    uVar52 = 0;
    if (pbVar78 != (byte *)0x0) {
      uVar52 = (uint)(iVar84 == 5);
      pbVar57 = pbVar78;
    }
    bVar59 = 0x22;
    if (iVar84 != 6) {
      bVar59 = 0x27;
    }
    if (uVar63 == 0) {
      uVar77 = 0;
      bVar68 = true;
      if ((iVar84 != 6) && (bVar44)) {
        iVar85 = 0;
        iVar47 = 0;
        lVar54 = 0;
        goto LAB_0058584c;
      }
      lVar54 = 0;
    }
    else {
      lVar67 = (long)(int)uVar63;
      lVar54 = 0;
      uVar77 = 0;
      do {
        bVar60 = pbVar57[uVar77];
        if (bVar60 == 0) break;
        if (bVar59 == bVar60) {
          lVar54 = lVar54 + 1;
        }
        if ((bVar71) && ((bVar60 & 0xc0) == 0xc0)) {
          do {
            lVar62 = uVar77 + 1;
            uVar77 = uVar77 + 1;
          } while ((pbVar57[lVar62] & 0xc0) == 0x80);
        }
        else {
          uVar77 = uVar77 + 1;
        }
        lVar67 = lVar67 + -1;
      } while (lVar67 != 0);
      bVar68 = true;
      if ((iVar84 != 6) && (bVar44)) {
        if ((long)uVar77 < 1) {
          iVar85 = 0;
          iVar47 = 0;
        }
        else {
          if (uVar77 < 8) {
            iVar47 = 0;
            iVar85 = 0;
            uVar81 = 0;
          }
          else {
            if (uVar77 < 0x20) {
              iVar47 = 0;
              iVar85 = 0;
              uVar51 = 0;
            }
            else {
              iVar47 = 0;
              iVar86 = 0;
              iVar88 = 0;
              iVar89 = 0;
              iVar95 = 0;
              iVar96 = 0;
              iVar97 = 0;
              iVar98 = 0;
              iVar90 = 0;
              iVar91 = 0;
              iVar93 = 0;
              iVar94 = 0;
              iVar99 = 0;
              iVar100 = 0;
              iVar101 = 0;
              iVar102 = 0;
              uVar81 = uVar77 & 0x7fffffffffffffe0;
              iVar103 = 0;
              iVar104 = 0;
              iVar106 = 0;
              iVar107 = 0;
              iVar112 = 0;
              iVar113 = 0;
              iVar115 = 0;
              iVar117 = 0;
              iVar108 = 0;
              iVar109 = 0;
              iVar110 = 0;
              iVar111 = 0;
              iVar119 = 0;
              iVar114 = 0;
              iVar116 = 0;
              iVar118 = 0;
              iVar85 = 0;
              iVar122 = 0;
              iVar123 = 0;
              iVar124 = 0;
              iVar131 = 0;
              iVar132 = 0;
              iVar133 = 0;
              iVar134 = 0;
              iVar125 = 0;
              iVar128 = 0;
              iVar129 = 0;
              iVar130 = 0;
              iVar135 = 0;
              iVar136 = 0;
              iVar137 = 0;
              iVar138 = 0;
              iVar139 = 0;
              iVar140 = 0;
              iVar141 = 0;
              iVar142 = 0;
              iVar147 = 0;
              iVar148 = 0;
              iVar149 = 0;
              iVar150 = 0;
              iVar143 = 0;
              iVar144 = 0;
              iVar145 = 0;
              iVar146 = 0;
              iVar151 = 0;
              iVar152 = 0;
              iVar153 = 0;
              iVar154 = 0;
              pauVar64 = (undefined1 (*) [16])(pbVar57 + 0x10);
              uVar51 = uVar81;
              do {
                auVar160[8] = 0x20;
                auVar160._0_8_ = 0x2020202020202020;
                auVar160[9] = 0x20;
                auVar160[10] = 0x20;
                auVar160[0xb] = 0x20;
                auVar160[0xc] = 0x20;
                auVar160[0xd] = 0x20;
                auVar160[0xe] = 0x20;
                auVar160[0xf] = 0x20;
                uVar51 = uVar51 - 0x20;
                auVar157 = NEON_cmhi(auVar121,pauVar64[-1],1);
                auVar127[8] = 0x5c;
                auVar127._0_8_ = 0x5c5c5c5c5c5c5c5c;
                auVar127[9] = 0x5c;
                auVar127[10] = 0x5c;
                auVar127[0xb] = 0x5c;
                auVar127[0xc] = 0x5c;
                auVar127[0xd] = 0x5c;
                auVar127[0xe] = 0x5c;
                auVar127[0xf] = 0x5c;
                auVar121 = NEON_cmeq(pauVar64[-1],auVar127,1);
                auVar160 = NEON_cmhi(auVar160,*pauVar64,1);
                auVar13[8] = 0x5c;
                auVar13._0_8_ = 0x5c5c5c5c5c5c5c5c;
                auVar13[9] = 0x5c;
                auVar13[10] = 0x5c;
                auVar13[0xb] = 0x5c;
                auVar13[0xc] = 0x5c;
                auVar13[0xd] = 0x5c;
                auVar13[0xe] = 0x5c;
                auVar13[0xf] = 0x5c;
                auVar127 = NEON_cmeq(*pauVar64,auVar13,1);
                uVar14 = CONCAT12(auVar121[1],auVar121._0_2_) & 0xff00ff;
                uVar155 = CONCAT14(auVar157[1],(uint)(auVar157[0] & 1)) & 0x1ffffffff;
                iVar99 = iVar99 + (uint)(auVar157[0xc] & 1);
                iVar100 = iVar100 + (uint)(auVar157[0xd] & 1);
                iVar101 = iVar101 + (uint)(auVar157[0xe] & 1);
                iVar102 = iVar102 + (uint)(auVar157[0xf] & 1);
                iVar90 = iVar90 + (uint)(auVar157[8] & 1);
                iVar91 = iVar91 + (uint)(auVar157[9] & 1);
                iVar93 = iVar93 + (uint)(auVar157[10] & 1);
                iVar94 = iVar94 + (uint)(auVar157[0xb] & 1);
                iVar47 = iVar47 + (int)uVar155;
                iVar86 = iVar86 + (uint)(byte)(uVar155 >> 0x20);
                iVar88 = iVar88 + (uint)(auVar157[2] & 1);
                iVar89 = iVar89 + (uint)(auVar157[3] & 1);
                iVar95 = iVar95 + (uint)(auVar157[4] & 1);
                iVar96 = iVar96 + (uint)(auVar157[5] & 1);
                iVar97 = iVar97 + (uint)(auVar157[6] & 1);
                iVar98 = iVar98 + (uint)(auVar157[7] & 1);
                iVar119 = iVar119 + (uint)(auVar160[0xc] & 1);
                iVar114 = iVar114 + (uint)(auVar160[0xd] & 1);
                iVar116 = iVar116 + (uint)(auVar160[0xe] & 1);
                iVar118 = iVar118 + (uint)(auVar160[0xf] & 1);
                uVar155 = CONCAT14(auVar160[5],(uint)(auVar160[4] & 1)) & 0x1ffffffff;
                iVar108 = iVar108 + (uint)(auVar160[8] & 1);
                iVar109 = iVar109 + (uint)(auVar160[9] & 1);
                iVar110 = iVar110 + (uint)(auVar160[10] & 1);
                iVar111 = iVar111 + (uint)(auVar160[0xb] & 1);
                iVar112 = iVar112 + (int)uVar155;
                iVar113 = iVar113 + (uint)(byte)(uVar155 >> 0x20);
                iVar115 = iVar115 + (uint)(auVar160[6] & 1);
                iVar117 = iVar117 + (uint)(auVar160[7] & 1);
                uVar158 = CONCAT14(auVar121[9],(uint)(auVar121[8] & 1)) & 0x1ffffffff;
                uVar155 = CONCAT14(auVar121[0xd],(uint)(auVar121[0xc] & 1)) & 0x1ffffffff;
                uVar159 = CONCAT14((char)(uVar14 >> 0x10),(uint)((byte)uVar14 & 1)) & 0x1ffffffff;
                uVar156 = CONCAT14(auVar127[5],(uint)(auVar127[4] & 1)) & 0x1ffffffff;
                iVar103 = iVar103 + (uint)(auVar160[0] & 1);
                iVar104 = iVar104 + (uint)(auVar160[1] & 1);
                iVar106 = iVar106 + (uint)(auVar160[2] & 1);
                iVar107 = iVar107 + (uint)(auVar160[3] & 1);
                iVar135 = iVar135 + (int)uVar155;
                iVar136 = iVar136 + (uint)(byte)(uVar155 >> 0x20);
                iVar137 = iVar137 + (uint)(auVar121[0xe] & 1);
                iVar138 = iVar138 + (uint)(auVar121[0xf] & 1);
                iVar125 = iVar125 + (int)uVar158;
                iVar128 = iVar128 + (uint)(byte)(uVar158 >> 0x20);
                iVar129 = iVar129 + (uint)(auVar121[10] & 1);
                iVar130 = iVar130 + (uint)(auVar121[0xb] & 1);
                iVar85 = iVar85 + (int)uVar159;
                iVar122 = iVar122 + (uint)(byte)(uVar159 >> 0x20);
                iVar123 = iVar123 + (uint)(auVar121[2] & 1);
                iVar124 = iVar124 + (uint)(auVar121[3] & 1);
                iVar131 = iVar131 + (uint)(auVar121[4] & 1);
                iVar132 = iVar132 + (uint)(auVar121[5] & 1);
                iVar133 = iVar133 + (uint)(auVar121[6] & 1);
                iVar134 = iVar134 + (uint)(auVar121[7] & 1);
                auVar121[8] = 0x20;
                auVar121._0_8_ = 0x2020202020202020;
                auVar121[9] = 0x20;
                auVar121[10] = 0x20;
                auVar121[0xb] = 0x20;
                auVar121[0xc] = 0x20;
                auVar121[0xd] = 0x20;
                auVar121[0xe] = 0x20;
                auVar121[0xf] = 0x20;
                iVar151 = iVar151 + (uint)(auVar127[0xc] & 1);
                iVar152 = iVar152 + (uint)(auVar127[0xd] & 1);
                iVar153 = iVar153 + (uint)(auVar127[0xe] & 1);
                iVar154 = iVar154 + (uint)(auVar127[0xf] & 1);
                iVar143 = iVar143 + (uint)(auVar127[8] & 1);
                iVar144 = iVar144 + (uint)(auVar127[9] & 1);
                iVar145 = iVar145 + (uint)(auVar127[10] & 1);
                iVar146 = iVar146 + (uint)(auVar127[0xb] & 1);
                iVar147 = iVar147 + (int)uVar156;
                iVar148 = iVar148 + (uint)(byte)(uVar156 >> 0x20);
                iVar149 = iVar149 + (uint)(auVar127[6] & 1);
                iVar150 = iVar150 + (uint)(auVar127[7] & 1);
                iVar139 = iVar139 + (uint)(auVar127[0] & 1);
                iVar140 = iVar140 + (uint)(auVar127[1] & 1);
                iVar141 = iVar141 + (uint)(auVar127[2] & 1);
                iVar142 = iVar142 + (uint)(auVar127[3] & 1);
                pauVar64 = pauVar64 + 2;
              } while (uVar51 != 0);
              iVar85 = iVar139 + iVar85 + iVar143 + iVar125 + iVar147 + iVar131 + iVar151 + iVar135
                       + iVar140 + iVar122 + iVar144 + iVar128 +
                         iVar148 + iVar132 + iVar152 + iVar136 +
                       iVar141 + iVar123 + iVar145 + iVar129 + iVar149 + iVar133 + iVar153 + iVar137
                       + iVar142 + iVar124 + iVar146 + iVar130 +
                         iVar150 + iVar134 + iVar154 + iVar138;
              iVar47 = iVar103 + iVar47 + iVar108 + iVar90 + iVar112 + iVar95 + iVar119 + iVar99 +
                       iVar104 + iVar86 + iVar109 + iVar91 + iVar113 + iVar96 + iVar114 + iVar100 +
                       iVar106 + iVar88 + iVar110 + iVar93 + iVar115 + iVar97 + iVar116 + iVar101 +
                       iVar107 + iVar89 + iVar111 + iVar94 + iVar117 + iVar98 + iVar118 + iVar102;
              if (uVar77 == uVar81) goto LAB_0058584c;
              uVar51 = uVar81;
              if ((uVar77 & 0x18) == 0) goto LAB_0058582c;
            }
            iVar88 = 0;
            iVar89 = 0;
            iVar96 = 0;
            iVar97 = 0;
            iVar90 = 0;
            iVar91 = 0;
            iVar93 = 0;
            iVar94 = 0;
            iVar98 = 0;
            iVar99 = 0;
            iVar100 = 0;
            iVar101 = 0;
            iVar86 = 0;
            iVar95 = 0;
            uVar81 = uVar77 & 0x7ffffffffffffff8;
            lVar67 = uVar51 - uVar81;
            pbVar78 = pbVar57 + uVar51;
            do {
              lVar67 = lVar67 + 8;
              uVar105 = NEON_cmhi(0x2020202020202020,*(undefined8 *)pbVar78,1);
              uVar92 = NEON_cmeq(*(undefined8 *)pbVar78,0x5c5c5c5c5c5c5c5c,1);
              uVar14 = CONCAT12((char)((ulong)uVar105 >> 8),(short)uVar105) & 0xff00ff;
              uVar15 = CONCAT12((char)((ulong)uVar92 >> 8),(short)uVar92) & 0xff00ff;
              iVar90 = iVar90 + (uint)((byte)((ulong)uVar105 >> 0x20) & 1);
              iVar91 = iVar91 + (uint)((byte)((ulong)uVar105 >> 0x28) & 1);
              iVar93 = iVar93 + (uint)((byte)((ulong)uVar105 >> 0x30) & 1);
              iVar94 = iVar94 + (uint)((byte)((ulong)uVar105 >> 0x38) & 1);
              iVar47 = iVar47 + (uint)((byte)uVar14 & 1);
              iVar86 = iVar86 + (uint)((byte)(uVar14 >> 0x10) & 1);
              iVar88 = iVar88 + (uint)((byte)((ulong)uVar105 >> 0x10) & 1);
              iVar89 = iVar89 + (uint)((byte)((ulong)uVar105 >> 0x18) & 1);
              iVar85 = iVar85 + (uint)((byte)uVar15 & 1);
              iVar95 = iVar95 + (uint)((byte)(uVar15 >> 0x10) & 1);
              iVar96 = iVar96 + (uint)((byte)((ulong)uVar92 >> 0x10) & 1);
              iVar97 = iVar97 + (uint)((byte)((ulong)uVar92 >> 0x18) & 1);
              iVar98 = iVar98 + (uint)((byte)((ulong)uVar92 >> 0x20) & 1);
              iVar99 = iVar99 + (uint)((byte)((ulong)uVar92 >> 0x28) & 1);
              iVar100 = iVar100 + (uint)((byte)((ulong)uVar92 >> 0x30) & 1);
              iVar101 = iVar101 + (uint)((byte)((ulong)uVar92 >> 0x38) & 1);
              pbVar78 = pbVar78 + 8;
            } while (lVar67 != 0);
            iVar85 = iVar85 + iVar98 + iVar95 + iVar99 + iVar96 + iVar100 + iVar97 + iVar101;
            iVar47 = iVar47 + iVar90 + iVar86 + iVar91 + iVar88 + iVar93 + iVar89 + iVar94;
            if (uVar77 == uVar81) goto LAB_0058584c;
          }
LAB_0058582c:
          do {
            pbVar78 = pbVar57 + uVar81;
            uVar81 = uVar81 + 1;
            if (*pbVar78 < 0x20) {
              iVar47 = iVar47 + 1;
            }
            if (*pbVar78 == 0x5c) {
              iVar85 = iVar85 + 1;
            }
          } while (uVar77 != uVar81);
        }
LAB_0058584c:
        if ((iVar84 == 4) || (iVar47 != 0)) {
          bVar68 = false;
          lVar67 = lVar54 + (ulong)(uint)(iVar47 * 5 + iVar85);
          uVar52 = (uint)(iVar84 == 5) << 1;
          lVar54 = lVar67 + 10;
          if (iVar84 != 5) {
            lVar54 = lVar67;
          }
        }
        else {
          bVar68 = true;
        }
      }
    }
    uVar81 = uVar77 + lVar54 + 3;
    if ((long)uVar81 < 0x47) {
      pbVar79 = (byte *)0x0;
      pbVar78 = (byte *)&local_130;
    }
    else {
      if (*(char *)((long)param_1 + 0x1c) != '\0') {
        return;
      }
      if ((*(uint *)(param_1 + 2) < uVar81) &&
         (uVar61 = *(uint *)((long)param_1 + 0x14), uVar61 < uVar81)) goto LAB_005864c8;
      if (*param_1 == 0) {
        pbVar78 = (byte *)FUN_005827b0(uVar81);
      }
      else {
        pbVar78 = (byte *)FUN_005a76c8();
      }
      pbVar79 = pbVar78;
      if (pbVar78 == (byte *)0x0) goto LAB_0058648c;
    }
    if (uVar52 == 0) {
      uVar51 = 0;
      uVar82 = 0;
joined_r0x00585964:
      bVar44 = (long)(uVar77 - 1) < 0;
      uVar81 = uVar51;
      if (bVar68) goto LAB_00585968;
LAB_005859b8:
      uVar81 = uVar82;
      if (bVar44 == SBORROW8(uVar77,1)) {
        do {
          bVar60 = *pbVar57;
          uVar81 = uVar51 + 1;
          pbVar78[uVar51] = bVar60;
          if (bVar59 == bVar60) {
LAB_005859f0:
            lVar54 = 2;
LAB_005859f4:
            pbVar78[uVar81] = bVar60;
            uVar81 = lVar54 + uVar51;
          }
          else {
            if (bVar60 == 0x5c) {
              bVar60 = 0x5c;
              goto LAB_005859f0;
            }
            if (bVar60 < 0x20) {
              bVar66 = 0x30;
              if (0xf < bVar60) {
                bVar66 = 0x31;
              }
              (pbVar78 + uVar51)[4] = bVar66;
              uVar81 = uVar51 + 5;
              *(int *)(pbVar78 + uVar51) = (int)DAT_002a17e0;
              bVar60 = "0123456789abcdef"[(ulong)bVar60 & 0xf];
              lVar54 = 6;
              goto LAB_005859f4;
            }
          }
          uVar51 = uVar81;
          uVar77 = uVar77 - 1;
          pbVar57 = pbVar57 + 1;
          uVar81 = uVar51;
        } while (uVar77 != 0);
      }
    }
    else {
      if (uVar52 != 2) {
        *pbVar78 = 0x27;
        uVar51 = 1;
        uVar82 = 1;
        goto joined_r0x00585964;
      }
      pbVar78[0] = 0x75;
      pbVar78[1] = 0x6e;
      pbVar78[2] = 0x69;
      pbVar78[3] = 0x73;
      pbVar78[4] = 0x74;
      pbVar78[5] = 0x72;
      pbVar78[6] = 0x28;
      pbVar78[7] = 0x27;
      uVar51 = 8;
      bVar44 = (long)(uVar77 - 1) < 0;
      uVar82 = 8;
      uVar81 = uVar82;
      if (!bVar68) goto LAB_005859b8;
LAB_00585968:
      if (bVar44 == SBORROW8(uVar77,1)) {
        do {
          bVar60 = *pbVar57;
          pbVar78[uVar81] = bVar60;
          uVar51 = uVar81 + 1;
          if (bVar59 == bVar60) {
            pbVar78[uVar81 + 1] = bVar60;
            uVar51 = uVar81 + 2;
          }
          uVar81 = uVar51;
          uVar77 = uVar77 - 1;
          pbVar57 = pbVar57 + 1;
        } while (uVar77 != 0);
      }
    }
    if (uVar52 == 0) {
      pbVar78[uVar81] = 0;
    }
    else {
      uVar77 = uVar81 + 1;
      pbVar78[uVar81] = 0x27;
      if (uVar52 == 2) {
        pbVar78[uVar77] = 0x29;
        pbVar78[uVar81 + 2] = 0;
        uVar81 = uVar81 + 2;
      }
      else {
        pbVar78[uVar77] = 0;
        uVar81 = uVar77;
      }
    }
LAB_00585a80:
    if (((bVar71) && (0 < (int)uVar45)) && (uVar63 = (uint)uVar81, 0 < (int)uVar63)) {
      uVar77 = uVar81 & 0xffffffff;
      if (7 < uVar63) {
        if (uVar63 < 0x20) {
          uVar82 = 0;
        }
        else {
          iVar84 = 0;
          iVar85 = 0;
          iVar86 = 0;
          iVar88 = 0;
          iVar89 = 0;
          iVar90 = 0;
          uVar82 = uVar81 & 0x7fffffe0;
          iVar91 = 0;
          iVar93 = 0;
          iVar94 = 0;
          iVar95 = 0;
          iVar96 = 0;
          iVar97 = 0;
          iVar98 = 0;
          iVar99 = 0;
          iVar100 = 0;
          iVar101 = 0;
          iVar102 = 0;
          iVar103 = 0;
          iVar109 = 0;
          iVar110 = 0;
          iVar111 = 0;
          iVar112 = 0;
          puVar65 = (ulong *)(pbVar78 + (uVar77 - 0x10));
          iVar104 = 0;
          iVar106 = 0;
          iVar107 = 0;
          iVar108 = 0;
          iVar113 = 0;
          iVar115 = 0;
          iVar117 = 0;
          iVar119 = 0;
          iVar47 = 0;
          uVar51 = uVar82;
          do {
            puVar4 = puVar65 + -2;
            puVar21 = puVar65 + -1;
            pbVar22 = (byte *)((long)puVar65 + -7);
            pbVar23 = (byte *)((long)puVar65 + -6);
            pbVar24 = (byte *)((long)puVar65 + -5);
            pbVar25 = (byte *)((long)puVar65 + -4);
            pbVar26 = (byte *)((long)puVar65 + -3);
            pbVar27 = (byte *)((long)puVar65 + -2);
            pbVar28 = (byte *)((long)puVar65 + -1);
            uVar29 = *puVar65;
            puVar16 = puVar65 + 1;
            pbVar57 = (byte *)((long)puVar65 + 9);
            pbVar58 = (byte *)((long)puVar65 + 10);
            pbVar5 = (byte *)((long)puVar65 + 0xb);
            pbVar17 = (byte *)((long)puVar65 + 0xc);
            pbVar18 = (byte *)((long)puVar65 + 0xd);
            pbVar19 = (byte *)((long)puVar65 + 0xe);
            pbVar20 = (byte *)((long)puVar65 + 0xf);
            uVar51 = uVar51 - 0x20;
            puVar65 = puVar65 + -4;
            auVar120._0_8_ = uVar29 & 0xc0c0c0c0c0c0c0c0;
            auVar120[8] = (byte)*puVar16 & 0xc0;
            auVar120[9] = *pbVar57 & 0xc0;
            auVar120[10] = *pbVar58 & 0xc0;
            auVar120[0xb] = *pbVar5 & 0xc0;
            auVar120[0xc] = *pbVar17 & 0xc0;
            auVar120[0xd] = *pbVar18 & 0xc0;
            auVar120[0xe] = *pbVar19 & 0xc0;
            auVar120[0xf] = *pbVar20 & 0xc0;
            auVar126._0_8_ = *puVar4 & 0xc0c0c0c0c0c0c0c0;
            auVar126[8] = (byte)*puVar21 & 0xc0;
            auVar126[9] = *pbVar22 & 0xc0;
            auVar126[10] = *pbVar23 & 0xc0;
            auVar126[0xb] = *pbVar24 & 0xc0;
            auVar126[0xc] = *pbVar25 & 0xc0;
            auVar126[0xd] = *pbVar26 & 0xc0;
            auVar126[0xe] = *pbVar27 & 0xc0;
            auVar126[0xf] = *pbVar28 & 0xc0;
            auVar121 = NEON_rev64(auVar120,1);
            auVar127 = NEON_rev64(auVar126,1);
            auVar121 = NEON_ext(auVar121,auVar121,8,1);
            auVar127 = NEON_ext(auVar127,auVar127,8,1);
            auVar157[8] = 0x80;
            auVar157._0_8_ = 0x8080808080808080;
            auVar157[9] = 0x80;
            auVar157[10] = 0x80;
            auVar157[0xb] = 0x80;
            auVar157[0xc] = 0x80;
            auVar157[0xd] = 0x80;
            auVar157[0xe] = 0x80;
            auVar157[0xf] = 0x80;
            auVar121 = NEON_cmeq(auVar121,auVar157,1);
            auVar12[8] = 0x80;
            auVar12._0_8_ = 0x8080808080808080;
            auVar12[9] = 0x80;
            auVar12[10] = 0x80;
            auVar12[0xb] = 0x80;
            auVar12[0xc] = 0x80;
            auVar12[0xd] = 0x80;
            auVar12[0xe] = 0x80;
            auVar12[0xf] = 0x80;
            auVar127 = NEON_cmeq(auVar127,auVar12,1);
            uVar14 = CONCAT12(auVar121[9],auVar121._8_2_) & 0xff00ff;
            uVar15 = CONCAT12(auVar127[9],auVar127._8_2_) & 0xff00ff;
            iVar96 = iVar96 + (uint)(auVar121[0xc] & 1);
            iVar97 = iVar97 + (uint)(auVar121[0xd] & 1);
            iVar98 = iVar98 + (uint)(auVar121[0xe] & 1);
            iVar99 = iVar99 + (uint)(auVar121[0xf] & 1);
            iVar91 = iVar91 + (uint)((byte)uVar14 & 1);
            iVar93 = iVar93 + (uint)((byte)(uVar14 >> 0x10) & 1);
            iVar94 = iVar94 + (uint)(auVar121[10] & 1);
            iVar95 = iVar95 + (uint)(auVar121[0xb] & 1);
            uVar45 = uVar45 + (auVar121[0] & 1);
            iVar47 = iVar47 + (uint)(auVar121[1] & 1);
            iVar84 = iVar84 + (uint)(auVar121[2] & 1);
            iVar85 = iVar85 + (uint)(auVar121[3] & 1);
            iVar86 = iVar86 + (uint)(auVar121[4] & 1);
            iVar88 = iVar88 + (uint)(auVar121[5] & 1);
            iVar89 = iVar89 + (uint)(auVar121[6] & 1);
            iVar90 = iVar90 + (uint)(auVar121[7] & 1);
            iVar113 = iVar113 + (uint)(auVar127[0xc] & 1);
            iVar115 = iVar115 + (uint)(auVar127[0xd] & 1);
            iVar117 = iVar117 + (uint)(auVar127[0xe] & 1);
            iVar119 = iVar119 + (uint)(auVar127[0xf] & 1);
            iVar100 = iVar100 + (uint)(auVar127[0] & 1);
            iVar101 = iVar101 + (uint)(auVar127[1] & 1);
            iVar102 = iVar102 + (uint)(auVar127[2] & 1);
            iVar103 = iVar103 + (uint)(auVar127[3] & 1);
            iVar104 = iVar104 + (uint)((byte)uVar15 & 1);
            iVar106 = iVar106 + (uint)((byte)(uVar15 >> 0x10) & 1);
            iVar107 = iVar107 + (uint)(auVar127[10] & 1);
            iVar108 = iVar108 + (uint)(auVar127[0xb] & 1);
            iVar109 = iVar109 + (uint)(auVar127[4] & 1);
            iVar110 = iVar110 + (uint)(auVar127[5] & 1);
            iVar111 = iVar111 + (uint)(auVar127[6] & 1);
            iVar112 = iVar112 + (uint)(auVar127[7] & 1);
          } while (uVar51 != 0);
          uVar45 = iVar100 + uVar45 + iVar104 + iVar91 + iVar109 + iVar86 + iVar113 + iVar96 +
                   iVar101 + iVar47 + iVar106 + iVar93 + iVar110 + iVar88 + iVar115 + iVar97 +
                   iVar102 + iVar84 + iVar107 + iVar94 + iVar111 + iVar89 + iVar117 + iVar98 +
                   iVar103 + iVar85 + iVar108 + iVar95 + iVar112 + iVar90 + iVar119 + iVar99;
          if (uVar82 == uVar77) goto LAB_00585c64;
          if ((uVar81 & 0x18) == 0) {
            uVar77 = uVar81 & 0x1f;
            goto LAB_00585c44;
          }
        }
        iVar84 = 0;
        iVar85 = 0;
        iVar86 = 0;
        iVar88 = 0;
        iVar89 = 0;
        iVar90 = 0;
        lVar67 = uVar77 - uVar82;
        lVar54 = uVar82 - (uVar81 & 0x7ffffff8);
        iVar47 = 0;
        do {
          lVar67 = lVar67 + -8;
          lVar54 = lVar54 + 8;
          uVar92 = NEON_rev64(*(ulong *)(pbVar78 + lVar67) & 0xc0c0c0c0c0c0c0c0,1);
          uVar92 = NEON_cmeq(uVar92,0x8080808080808080,1);
          uVar14 = CONCAT12((char)((ulong)uVar92 >> 8),(short)uVar92) & 0xff00ff;
          iVar86 = iVar86 + (uint)((byte)((ulong)uVar92 >> 0x20) & 1);
          iVar88 = iVar88 + (uint)((byte)((ulong)uVar92 >> 0x28) & 1);
          iVar89 = iVar89 + (uint)((byte)((ulong)uVar92 >> 0x30) & 1);
          iVar90 = iVar90 + (uint)((byte)((ulong)uVar92 >> 0x38) & 1);
          uVar45 = uVar45 + ((byte)uVar14 & 1);
          iVar47 = iVar47 + (uint)((byte)(uVar14 >> 0x10) & 1);
          iVar84 = iVar84 + (uint)((byte)((ulong)uVar92 >> 0x10) & 1);
          iVar85 = iVar85 + (uint)((byte)((ulong)uVar92 >> 0x18) & 1);
        } while (lVar54 != 0);
        bVar44 = (uVar81 & 0x7ffffff8) == uVar77;
        uVar45 = uVar45 + iVar86 + iVar47 + iVar88 + iVar84 + iVar89 + iVar85 + iVar90;
        uVar77 = uVar81 & 7;
        if (bVar44) goto LAB_00585c64;
      }
LAB_00585c44:
      do {
        if ((pbVar78[uVar77 - 1] & 0xc0) == 0x80) {
          uVar45 = uVar45 + 1;
        }
        bVar44 = 1 < uVar77;
        uVar77 = uVar77 - 1;
      } while (bVar44);
    }
LAB_00585c64:
    uVar45 = uVar45 - (int)uVar81;
    break;
  case '\v':
    if ((*(byte *)((long)param_1 + 0x1d) & 1) == 0) {
      return;
    }
    uVar45 = *(uint *)(param_3 + 3);
    if (bVar44) {
      if (((int)uVar45 < 0) && (*(uint *)(param_3 + 3) = uVar45 + 8, uVar45 < 0xfffffff9)) {
        plVar74 = (long *)(param_3[1] + (long)(int)uVar45);
      }
      else {
        plVar74 = (long *)*param_3;
        *param_3 = (long)(plVar74 + 1);
      }
      lVar54 = *plVar74;
      if ((lVar54 != 0) && ((*(byte *)(lVar54 + 5) >> 3 & 1) == 0)) {
        pcVar76 = *(char **)(lVar54 + 8);
        if (pcVar76 == (char *)0x0) {
          if (*(uint *)(param_1 + 2) <= *(uint *)(param_1 + 3)) {
            uVar45 = 0;
            goto LAB_00585f94;
          }
        }
        else {
          sVar49 = strlen(pcVar76);
          uVar52 = *(uint *)(param_1 + 3);
          uVar45 = (uint)sVar49 & 0x3fffffff;
          uVar63 = uVar45 + uVar52;
          if (uVar63 < *(uint *)(param_1 + 2)) {
            if ((sVar49 & 0x3fffffff) != 0) {
              *(uint *)(param_1 + 3) = uVar63;
              memcpy((void *)(param_1[1] + (ulong)uVar52),pcVar76,sVar49 & 0x3fffffff);
            }
          }
          else {
LAB_00585f94:
            FUN_00586adc(param_1,pcVar76,uVar45);
          }
        }
        do {
          if (((*(uint *)(lVar54 + 4) & 3) == 0) && (0 < *(int *)(lVar54 + 0x34))) {
            if ((*(uint *)(lVar54 + 4) >> 0x1e & 1) == 0) {
              pbVar79 = (byte *)0x0;
              uVar81 = 0;
              *(int *)(*param_1 + 0x54) = *(int *)(lVar54 + 0x34);
              goto LAB_00584a90;
            }
            break;
          }
          lVar54 = *(long *)(lVar54 + 0x10);
        } while (lVar54 != 0);
      }
LAB_00586338:
      pbVar79 = (byte *)0x0;
      uVar81 = 0;
    }
    else {
      if (((int)uVar45 < 0) && (*(uint *)(param_3 + 3) = uVar45 + 8, uVar45 < 0xfffffff9)) {
        puVar53 = (undefined8 *)(param_3[1] + (long)(int)uVar45);
      }
      else {
        puVar53 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar53 + 1);
      }
      puVar65 = (ulong *)*puVar53;
      if (puVar65 == (ulong *)0x0) goto LAB_00586338;
      iVar47 = (int)puVar65[1];
      if (iVar47 == 0) {
        pbVar79 = (byte *)0x0;
        uVar81 = 0;
        goto LAB_00584a90;
      }
      uVar63 = *(uint *)(param_1 + 3);
      __src = (void *)*puVar65;
      uVar45 = uVar63 + iVar47;
      if (uVar45 < *(uint *)(param_1 + 2)) {
        *(uint *)(param_1 + 3) = uVar45;
        memcpy((void *)(param_1[1] + (ulong)uVar63),__src,(long)iVar47);
      }
      else {
        FUN_00586adc(param_1);
      }
      lVar54 = *param_1;
      if (((lVar54 == 0) || (*(int *)(lVar54 + 0x54) != -2)) || (*(long *)(lVar54 + 0x158) == 0)) {
LAB_0058603c:
        pbVar79 = (byte *)0x0;
        uVar81 = 0;
        goto LAB_00584a90;
      }
      pcVar76 = *(char **)(*(long *)(lVar54 + 0x158) + 0x150);
      uVar45 = (uint)pcVar76;
      if (pcVar76 != (char *)0x0) {
        pcVar75 = (char *)*puVar65;
        if (pcVar76 <= pcVar75) {
          sVar49 = strlen(pcVar76);
          if (pcVar75 < pcVar76 + sVar49) {
            *(uint *)(lVar54 + 0x54) = (int)pcVar75 - uVar45;
          }
          uVar81 = 0;
          pbVar79 = (byte *)0x0;
          goto LAB_00584a90;
        }
        goto LAB_0058603c;
      }
      uVar81 = 0;
      uVar77 = 0;
joined_r0x00586370:
      pbVar79 = (byte *)0x0;
joined_r0x00584768:
      if (0 < (int)uVar45) goto LAB_00585c70;
    }
    goto LAB_00584a90;
  case '\f':
    if ((*(byte *)((long)param_1 + 0x1d) & 1) == 0) {
      return;
    }
    uVar45 = *(uint *)(param_3 + 3);
    if (((int)uVar45 < 0) && (*(uint *)(param_3 + 3) = uVar45 + 8, uVar45 < 0xfffffff9)) {
      puVar53 = (undefined8 *)(param_3[1] + (long)(int)uVar45);
    }
    else {
      puVar53 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar53 + 1);
    }
    plVar74 = (long *)*puVar53;
    pcVar76 = (char *)plVar74[1];
    if ((pcVar76 == (char *)0x0) || (bVar71)) {
      if (*plVar74 != 0) {
        if (((*(uint3 *)((long)plVar74 + 0x19) & 0x10004) == 0) &&
           (pcVar76 = (char *)plVar74[8], pcVar76 != (char *)0x0)) {
          sVar49 = strlen(pcVar76);
          uVar63 = *(uint *)(param_1 + 3);
          uVar45 = ((uint)sVar49 & 0x3fffffff) + uVar63;
          if (uVar45 < *(uint *)(param_1 + 2)) {
            if ((sVar49 & 0x3fffffff) != 0) {
              *(uint *)(param_1 + 3) = uVar45;
              memcpy((void *)(param_1[1] + (ulong)uVar63),pcVar76,sVar49 & 0x3fffffff);
            }
          }
          else {
            FUN_00586adc(param_1,pcVar76);
          }
          uVar63 = *(uint *)(param_1 + 3);
          uVar45 = uVar63 + 1;
          if (uVar45 < *(uint *)(param_1 + 2)) {
            *(uint *)(param_1 + 3) = uVar45;
            *(undefined1 *)(param_1[1] + (ulong)uVar63) = 0x2e;
          }
          else {
            FUN_00586adc(param_1,&DAT_002a8139,1);
          }
        }
        pcVar76 = (char *)*plVar74;
        if (pcVar76 == (char *)0x0) {
          uVar45 = 0;
          if (*(uint *)(param_1 + 3) < *(uint *)(param_1 + 2)) {
            pbVar79 = (byte *)0x0;
            uVar81 = 0;
            goto LAB_00584a90;
          }
LAB_0058625c:
          FUN_00586adc(param_1,pcVar76,uVar45);
          goto LAB_00586260;
        }
        sVar49 = strlen(pcVar76);
        uVar52 = *(uint *)(param_1 + 3);
        uVar45 = (uint)sVar49 & 0x3fffffff;
        uVar63 = uVar45 + uVar52;
        if (*(uint *)(param_1 + 2) <= uVar63) goto LAB_0058625c;
        if ((sVar49 & 0x3fffffff) != 0) {
          *(uint *)(param_1 + 3) = uVar63;
          memcpy((void *)(param_1[1] + (ulong)uVar52),pcVar76,sVar49 & 0x3fffffff);
          goto LAB_00586260;
        }
        goto LAB_0058626c;
      }
      if (pcVar76 != (char *)0x0) {
        uVar81 = strlen(pcVar76);
        uVar52 = *(uint *)(param_1 + 3);
        uVar45 = (uint)uVar81 & 0x3fffffff;
        uVar63 = uVar45 + uVar52;
        if (uVar63 < *(uint *)(param_1 + 2)) goto LAB_00583c0c;
        goto LAB_0058625c;
      }
      if ((*(ushort *)((long)plVar74 + 0x19) >> 2 & 1) == 0) goto LAB_00586338;
      lVar54 = *(long *)plVar74[8];
      if ((*(uint *)(lVar54 + 4) >> 0xb & 1) != 0) {
        sqlite3_str_appendf(param_1,"(join-%u)",*(undefined4 *)(lVar54 + 0x10));
        goto LAB_00586338;
      }
      if ((*(uint *)(lVar54 + 4) >> 10 & 1) == 0) {
        uVar6 = *(undefined4 *)(lVar54 + 0x10);
        pcVar76 = "(subquery-%u)";
      }
      else {
        uVar6 = (undefined4)plVar74[5];
        pcVar76 = "%u-ROW VALUES CLAUSE";
      }
      sqlite3_str_appendf(param_1,pcVar76,uVar6);
      uVar45 = 0;
      uVar63 = 0;
LAB_00585544:
      uVar81 = (ulong)uVar63;
      uVar45 = uVar45 - uVar63;
      uVar77 = (ulong)uVar45;
      goto joined_r0x00586370;
    }
    uVar81 = strlen(pcVar76);
    uVar52 = *(uint *)(param_1 + 3);
    uVar45 = (uint)uVar81 & 0x3fffffff;
    uVar63 = uVar45 + uVar52;
    if (*(uint *)(param_1 + 2) <= uVar63) goto LAB_0058625c;
LAB_00583c0c:
    if (uVar45 != 0) {
      *(uint *)(param_1 + 3) = uVar63;
      memcpy((void *)(param_1[1] + (ulong)uVar52),pcVar76,uVar81 & 0x3fffffff);
    }
LAB_00586260:
    uVar45 = 0;
LAB_0058626c:
    uVar81 = 0;
    pbVar79 = (byte *)0x0;
    uVar77 = (ulong)uVar45;
    if (uVar45 == 0) goto LAB_00584a90;
    goto LAB_00585c70;
  case '\r':
    bVar60 = 0;
    iVar47 = 2;
    goto joined_r0x0058383c;
  default:
    goto switchD_0058361c_default;
  }
  uVar77 = (ulong)uVar45;
  if ((int)uVar45 < 1) {
LAB_00584a90:
    uVar63 = *(uint *)(param_1 + 3);
    iVar47 = (int)uVar81;
    uVar45 = uVar63 + iVar47;
    if (uVar45 < *(uint *)(param_1 + 2)) goto LAB_00584aa4;
LAB_00585d14:
    FUN_00586adc(param_1,pbVar78,uVar81 & 0xffffffff);
  }
  else {
LAB_00585c70:
    iVar47 = (int)uVar81;
    uVar45 = *(uint *)(param_1 + 3);
    if (bVar72) {
      if (uVar45 + iVar47 < *(uint *)(param_1 + 2)) {
        if (iVar47 != 0) {
          *(uint *)(param_1 + 3) = uVar45 + iVar47;
          memcpy((void *)(param_1[1] + (ulong)uVar45),pbVar78,(long)iVar47);
        }
      }
      else {
        FUN_00586adc(param_1,pbVar78,uVar81 & 0xffffffff);
      }
      if ((ulong)*(uint *)(param_1 + 2) <= *(uint *)(param_1 + 3) + uVar77) {
        uVar81 = FUN_005865d8(param_1,uVar77);
        uVar77 = uVar81 & 0xffffffff;
        if ((int)uVar81 < 1) goto LAB_00585da0;
      }
      uVar45 = (int)uVar77 + 1;
      do {
        uVar63 = *(uint *)(param_1 + 3);
        uVar45 = uVar45 - 1;
        *(uint *)(param_1 + 3) = uVar63 + 1;
        *(undefined1 *)(param_1[1] + (ulong)uVar63) = 0x20;
      } while (1 < uVar45);
    }
    else {
      if (uVar45 + uVar77 < (ulong)*(uint *)(param_1 + 2)) {
LAB_00585cdc:
        uVar45 = (int)uVar77 + 1;
        do {
          uVar63 = *(uint *)(param_1 + 3);
          uVar45 = uVar45 - 1;
          *(uint *)(param_1 + 3) = uVar63 + 1;
          *(undefined1 *)(param_1[1] + (ulong)uVar63) = 0x20;
        } while (1 < uVar45);
      }
      else {
        uVar51 = FUN_005865d8(param_1,uVar77);
        uVar77 = uVar51 & 0xffffffff;
        if (0 < (int)uVar51) goto LAB_00585cdc;
      }
      uVar63 = *(uint *)(param_1 + 3);
      uVar45 = uVar63 + iVar47;
      if (*(uint *)(param_1 + 2) <= uVar45) goto LAB_00585d14;
LAB_00584aa4:
      if (iVar47 != 0) {
        *(uint *)(param_1 + 3) = uVar45;
        memcpy((void *)(param_1[1] + (ulong)uVar63),pbVar78,(long)iVar47);
      }
    }
  }
LAB_00585da0:
  auVar121[8] = 0x20;
  auVar121._0_8_ = 0x2020202020202020;
  auVar121[9] = 0x20;
  auVar121[10] = 0x20;
  auVar121[0xb] = 0x20;
  auVar121[0xc] = 0x20;
  auVar121[0xd] = 0x20;
  auVar121[0xe] = 0x20;
  auVar121[0xf] = 0x20;
  if (pbVar79 != (byte *)0x0) {
    lVar54 = *param_1;
    if (lVar54 != 0) {
      if (pbVar79 < *(byte **)(lVar54 + 0x1e8)) {
        if (*(byte **)(lVar54 + 0x1d8) <= pbVar79) {
          *(undefined8 *)pbVar79 = *(undefined8 *)(lVar54 + 0x1d0);
          *(byte **)(lVar54 + 0x1d0) = pbVar79;
          param_2 = param_2 + 1;
          goto LAB_00582fd0;
        }
        if (*(byte **)(lVar54 + 0x1e0) <= pbVar79) {
          *(undefined8 *)pbVar79 = *(undefined8 *)(lVar54 + 0x1c0);
          *(byte **)(lVar54 + 0x1c0) = pbVar79;
          param_2 = param_2 + 1;
          goto LAB_00582fd0;
        }
      }
      if (*(long *)(lVar54 + 0x300) != 0) {
        FUN_005a7654(lVar54,pbVar79);
        auVar121[8] = 0x20;
        auVar121._0_8_ = 0x2020202020202020;
        auVar121[9] = 0x20;
        auVar121[10] = 0x20;
        auVar121[0xb] = 0x20;
        auVar121[0xc] = 0x20;
        auVar121[0xd] = 0x20;
        auVar121[0xe] = 0x20;
        auVar121[0xf] = 0x20;
        param_2 = param_2 + 1;
        goto LAB_00582fd0;
      }
    }
    puVar53 = &DAT_00b0da18;
    if (DAT_00b0d9f0 != 0) {
      if (DAT_00b103d8 != (byte *)0x0) {
        (*DAT_00b0da70)();
      }
      iVar47 = (*DAT_00b0da28)(pbVar79);
      DAT_00b105b8 = DAT_00b105b8 - iVar47;
      DAT_00b10600 = DAT_00b10600 + -1;
      (*DAT_00b0da18)(pbVar79);
      auVar121[8] = 0x20;
      auVar121._0_8_ = 0x2020202020202020;
      auVar121[9] = 0x20;
      auVar121[10] = 0x20;
      auVar121[0xb] = 0x20;
      auVar121[0xc] = 0x20;
      auVar121[0xd] = 0x20;
      auVar121[0xe] = 0x20;
      auVar121[0xf] = 0x20;
      if (DAT_00b103d8 == (byte *)0x0) goto LAB_00585f4c;
      puVar53 = &DAT_00b0da80;
      pbVar79 = DAT_00b103d8;
    }
    (*(code *)*puVar53)(pbVar79);
    auVar121[8] = 0x20;
    auVar121._0_8_ = 0x2020202020202020;
    auVar121[9] = 0x20;
    auVar121[10] = 0x20;
    auVar121[0xb] = 0x20;
    auVar121[0xc] = 0x20;
    auVar121[0xd] = 0x20;
    auVar121[0xe] = 0x20;
    auVar121[0xf] = 0x20;
  }
LAB_00585f4c:
  param_2 = param_2 + 1;
  goto LAB_00582fd0;
}


// ===== 00586524  sqlite3_str_append =====

void sqlite3_str_append(long param_1,void *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x18);
  uVar1 = uVar2 + param_3;
  if (*(uint *)(param_1 + 0x10) <= uVar1) {
    FUN_00586adc();
    return;
  }
  if (param_3 != 0) {
    *(uint *)(param_1 + 0x18) = uVar1;
    memcpy((void *)(*(long *)(param_1 + 8) + (ulong)uVar2),param_2,(long)param_3);
    return;
  }
  return;
}


// ===== 00586558  sqlite3_str_appendchar =====

void sqlite3_str_appendchar(long param_1,int param_2,undefined1 param_3)

{
  uint uVar1;
  uint uVar2;
  
  if ((long)((ulong)*(uint *)(param_1 + 0x18) + (long)param_2) <
      (long)(ulong)*(uint *)(param_1 + 0x10)) {
    if (param_2 < 1) {
      return;
    }
  }
  else {
    param_2 = FUN_005865d8(param_1,(long)param_2);
    if (param_2 < 1) {
      return;
    }
  }
  uVar2 = param_2 + 1;
  do {
    uVar1 = *(uint *)(param_1 + 0x18);
    uVar2 = uVar2 - 1;
    *(uint *)(param_1 + 0x18) = uVar1 + 1;
    *(undefined1 *)(*(long *)(param_1 + 8) + (ulong)uVar1) = param_3;
  } while (1 < uVar2);
  return;
}


// ===== 005865d8  FUN_005865d8 =====

ulong FUN_005865d8(long *param_1,ulong param_2)

{
  ulong uVar1;
  byte bVar2;
  uint uVar3;
  void *__dest;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  
  if (*(char *)((long)param_1 + 0x1c) != '\0') {
    return 0;
  }
  uVar3 = *(uint *)((long)param_1 + 0x14);
  if (uVar3 == 0) {
    *(undefined1 *)((long)param_1 + 0x1c) = 0x12;
    if ((*param_1 != 0) && (lVar5 = *(long *)(*param_1 + 0x158), lVar5 != 0)) {
      *(undefined4 *)(lVar5 + 0x18) = 0x12;
      *(int *)(lVar5 + 0x34) = *(int *)(lVar5 + 0x34) + 1;
    }
    return (ulong)((int)param_1[2] + ~*(uint *)(param_1 + 3));
  }
  bVar2 = *(byte *)((long)param_1 + 0x1d);
  uVar6 = (uint)bVar2;
  if ((bVar2 >> 2 & 1) == 0) {
    __dest = (void *)0x0;
  }
  else {
    __dest = (void *)param_1[1];
  }
  lVar5 = param_2 + *(uint *)(param_1 + 3);
  uVar1 = lVar5 + 1 + (ulong)*(uint *)(param_1 + 3);
  if ((long)(ulong)uVar3 < (long)uVar1) {
    uVar1 = lVar5 + 1;
  }
  if ((long)(ulong)uVar3 < (long)uVar1) {
    if ((bVar2 >> 2 & 1) == 0) {
      *(undefined1 *)((long)param_1 + 0x1c) = 0x12;
    }
    else {
      FUN_005869c8(*param_1,param_1[1]);
      *(undefined4 *)(param_1 + 2) = 0;
      *(undefined4 *)(param_1 + 3) = 0;
      param_1[1] = 0;
      *(byte *)((long)param_1 + 0x1d) = *(byte *)((long)param_1 + 0x1d) & 0xfb;
      *(undefined1 *)((long)param_1 + 0x1c) = 0x12;
      if (*(int *)((long)param_1 + 0x14) == 0) goto LAB_00586740;
    }
    *(undefined4 *)(param_1 + 2) = 0;
    *(undefined4 *)(param_1 + 3) = 0;
    param_1[1] = 0;
LAB_00586740:
    if ((*param_1 != 0) && (lVar5 = *(long *)(*param_1 + 0x158), lVar5 != 0)) {
      *(undefined4 *)(lVar5 + 0x18) = 0x12;
      *(int *)(lVar5 + 0x34) = *(int *)(lVar5 + 0x34) + 1;
      return 0;
    }
    return 0;
  }
  lVar5 = *param_1;
  uVar4 = uVar1 & 0xffffffff;
  *(int *)(param_1 + 2) = (int)uVar1;
  if (lVar5 == 0) {
    __dest = (void *)FUN_00582b2c(__dest,uVar4);
LAB_005867ac:
    uVar6 = (uint)*(byte *)((long)param_1 + 0x1d);
    if (__dest == (void *)0x0) {
      if ((*(byte *)((long)param_1 + 0x1d) >> 2 & 1) != 0) {
        FUN_005869c8(*param_1,param_1[1]);
        uVar6 = *(byte *)((long)param_1 + 0x1d) & 0xfffffffb;
        *(char *)((long)param_1 + 0x1d) = (char)uVar6;
      }
      *(undefined4 *)(param_1 + 2) = 0;
      *(undefined4 *)(param_1 + 3) = 0;
      param_1[1] = 0;
      *(undefined1 *)((long)param_1 + 0x1c) = 7;
      if (*(int *)((long)param_1 + 0x14) == 0) {
        return 0;
      }
      if ((uVar6 >> 2 & 1) != 0) {
        *(byte *)((long)param_1 + 0x1d) = (byte)uVar6 & 0xfb;
      }
      *(undefined4 *)(param_1 + 2) = 0;
      *(undefined4 *)(param_1 + 3) = 0;
      param_1[1] = 0;
      return 0;
    }
  }
  else {
    if (__dest == (void *)0x0) {
      __dest = (void *)FUN_005a76c8(lVar5,uVar4);
      goto LAB_005867ac;
    }
    if (*(void **)(lVar5 + 0x1e8) <= __dest) {
LAB_005867a0:
      __dest = (void *)FUN_005a77a4(lVar5,__dest);
      goto LAB_005867ac;
    }
    if (__dest < *(void **)(lVar5 + 0x1d8)) {
      if ((__dest < *(void **)(lVar5 + 0x1e0)) || (*(ushort *)(lVar5 + 0x19e) < uVar4))
      goto LAB_005867a0;
    }
    else if (0x80 < uVar4) goto LAB_005867a0;
  }
  if (((uVar6 >> 2 & 1) == 0) && (*(uint *)(param_1 + 3) != 0)) {
    memcpy(__dest,(void *)param_1[1],(ulong)*(uint *)(param_1 + 3));
  }
  lVar5 = *param_1;
  param_1[1] = (long)__dest;
  if ((lVar5 != 0) && (__dest < *(void **)(lVar5 + 0x1f0))) {
    if (*(void **)(lVar5 + 0x1d8) <= __dest) {
      uVar3 = 0x80;
      goto LAB_00586820;
    }
    if (*(void **)(lVar5 + 0x1e0) <= __dest) {
      uVar3 = (uint)*(ushort *)(lVar5 + 0x19e);
      goto LAB_00586820;
    }
  }
  uVar3 = (*DAT_00b0da28)();
LAB_00586820:
  *(uint *)(param_1 + 2) = uVar3;
  *(byte *)((long)param_1 + 0x1d) = *(byte *)((long)param_1 + 0x1d) | 4;
  return param_2 & 0xffffffff;
}


// ===== 005868c0  sqlite3_str_appendall =====

void sqlite3_str_appendall(long param_1,char *param_2)

{
  uint uVar1;
  uint uVar2;
  size_t sVar3;
  
  if (param_2 == (char *)0x0) {
    if (*(uint *)(param_1 + 0x10) <= *(uint *)(param_1 + 0x18)) {
      FUN_00586adc(param_1,0,0);
      return;
    }
  }
  else {
    sVar3 = strlen(param_2);
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar1 = ((uint)sVar3 & 0x3fffffff) + uVar2;
    if (*(uint *)(param_1 + 0x10) <= uVar1) {
      FUN_00586adc(param_1,param_2);
      return;
    }
    if ((sVar3 & 0x3fffffff) != 0) {
      *(uint *)(param_1 + 0x18) = uVar1;
      memcpy((void *)(*(long *)(param_1 + 8) + (ulong)uVar2),param_2,sVar3 & 0x3fffffff);
      return;
    }
  }
  return;
}


// ===== 00586960  sqlite3_str_appendf =====

void sqlite3_str_appendf(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        ,undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8
                        )

{
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 *local_50;
  undefined1 **ppuStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  puStack_40 = &local_80;
  ppuStack_48 = &local_50;
  uStack_38 = 0xffffff80ffffffd0;
  local_80 = param_3;
  uStack_78 = param_4;
  local_70 = param_5;
  uStack_68 = param_6;
  local_60 = param_7;
  uStack_58 = param_8;
  local_50 = (undefined1 *)register0x00000008;
  sqlite3_str_vappendf(param_1,param_2,&local_50);
  return;
}


// ===== 005869c8  FUN_005869c8 =====

void FUN_005869c8(long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  if (param_1 != 0) {
    if (param_2 < *(undefined8 **)(param_1 + 0x1e8)) {
      if (*(undefined8 **)(param_1 + 0x1d8) <= param_2) {
        uVar3 = *(undefined8 *)(param_1 + 0x1d0);
        *(undefined8 **)(param_1 + 0x1d0) = param_2;
LAB_00586ac8:
        *param_2 = uVar3;
        return;
      }
      if (*(undefined8 **)(param_1 + 0x1e0) <= param_2) {
        uVar3 = *(undefined8 *)(param_1 + 0x1c0);
        *(undefined8 **)(param_1 + 0x1c0) = param_2;
        goto LAB_00586ac8;
      }
    }
    if (*(long *)(param_1 + 0x300) != 0) {
      FUN_005a7654();
      return;
    }
  }
  puVar2 = &DAT_00b0da18;
  if (DAT_00b0d9f0 != 0) {
    if (DAT_00b103d8 != (undefined8 *)0x0) {
      (*DAT_00b0da70)();
    }
    iVar1 = (*DAT_00b0da28)(param_2);
    DAT_00b105b8 = DAT_00b105b8 - iVar1;
    DAT_00b10600 = DAT_00b10600 + -1;
    (*DAT_00b0da18)(param_2);
    if (DAT_00b103d8 == (undefined8 *)0x0) {
      return;
    }
    puVar2 = &DAT_00b0da80;
    param_2 = DAT_00b103d8;
  }
                    /* WARNING: Could not recover jumptable at 0x00586ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(param_2);
  return;
}


// ===== 00586adc  FUN_00586adc =====

void FUN_00586adc(long param_1,void *param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = FUN_005865d8(param_1,(long)param_3);
  if (0 < (int)uVar1) {
    memcpy((void *)(*(long *)(param_1 + 8) + (ulong)*(uint *)(param_1 + 0x18)),param_2,(ulong)uVar1)
    ;
    *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + uVar1;
  }
  return;
}


// ===== 00586b3c  sqlite3_str_finish =====

undefined8 sqlite3_str_finish(undefined *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  if ((param_1 != (undefined *)0x0) && (param_1 != &DAT_00b0d538)) {
    if ((*(long *)(param_1 + 8) == 0) ||
       ((*(undefined1 *)(*(long *)(param_1 + 8) + (ulong)*(uint *)(param_1 + 0x18)) = 0,
        *(int *)(param_1 + 0x14) == 0 || (((byte)param_1[0x1d] >> 2 & 1) != 0)))) {
      uVar3 = *(undefined8 *)(param_1 + 8);
    }
    else {
      uVar3 = FUN_005a7ad8();
    }
    puVar2 = &DAT_00b0da18;
    if (DAT_00b0d9f0 != 0) {
      if (DAT_00b103d8 != 0) {
        (*DAT_00b0da70)(DAT_00b103d8);
      }
      iVar1 = (*DAT_00b0da28)();
      DAT_00b105b8 = DAT_00b105b8 - iVar1;
      DAT_00b10600 = DAT_00b10600 + -1;
      (*DAT_00b0da18)(param_1);
      if (DAT_00b103d8 == 0) {
        return uVar3;
      }
      puVar2 = &DAT_00b0da80;
    }
    (*(code *)*puVar2)();
  }
  return uVar3;
}


// ===== 00586c48  sqlite3_str_errcode =====

undefined1 sqlite3_str_errcode(long param_1)

{
  if (param_1 != 0) {
    return *(undefined1 *)(param_1 + 0x1c);
  }
  return 7;
}


// ===== 00586c5c  sqlite3_str_length =====

ulong sqlite3_str_length(ulong param_1)

{
  if (param_1 != 0) {
    param_1 = (ulong)*(uint *)(param_1 + 0x18);
  }
  return param_1;
}


// ===== 00586c68  sqlite3_str_value =====

long sqlite3_str_value(long param_1)

{
  if (param_1 != 0) {
    if (*(uint *)(param_1 + 0x18) != 0) {
      *(undefined1 *)(*(long *)(param_1 + 8) + (ulong)*(uint *)(param_1 + 0x18)) = 0;
      return *(long *)(param_1 + 8);
    }
    param_1 = 0;
  }
  return param_1;
}


// ===== 00586c8c  sqlite3_str_reset =====

void sqlite3_str_reset(undefined8 *param_1)

{
  if ((*(byte *)((long)param_1 + 0x1d) >> 2 & 1) != 0) {
    FUN_005869c8(*param_1,param_1[1]);
    *(byte *)((long)param_1 + 0x1d) = *(byte *)((long)param_1 + 0x1d) & 0xfb;
  }
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  return;
}


// ===== 00586cd0  sqlite3_str_new =====

undefined8 * sqlite3_str_new(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  
  iVar1 = sqlite3_initialize();
  if ((iVar1 == 0) && (puVar2 = (undefined8 *)FUN_005827b0(0x20), puVar2 != (undefined8 *)0x0)) {
    if (param_1 == 0) {
      uVar3 = 1000000000;
    }
    else {
      uVar3 = *(undefined4 *)(param_1 + 0x88);
    }
    *puVar2 = 0;
    puVar2[1] = 0;
    *(undefined4 *)(puVar2 + 2) = 0;
    *(undefined4 *)((long)puVar2 + 0x14) = uVar3;
    *(undefined4 *)(puVar2 + 3) = 0;
    *(undefined2 *)((long)puVar2 + 0x1c) = 0;
    return puVar2;
  }
  return (undefined8 *)&DAT_00b0d538;
}


// ===== 00586d38  sqlite3_vmprintf =====

undefined1 * sqlite3_vmprintf(long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_88;
  undefined1 *local_80;
  undefined8 local_78;
  uint local_70;
  undefined2 local_6c;
  undefined1 auStack_66 [70];
  
  if (param_1 == 0) {
    sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x809a,
                "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
    return (undefined1 *)0x0;
  }
  iVar1 = sqlite3_initialize();
  if (iVar1 != 0) {
    return (undefined1 *)0x0;
  }
  local_80 = auStack_66;
  local_70 = 0;
  local_78 = DAT_002a14c0;
  uStack_a8 = param_2[1];
  local_b0 = *param_2;
  uStack_98 = param_2[3];
  uStack_a0 = param_2[2];
  local_88 = 0;
  local_6c = 0;
  sqlite3_str_vappendf(&local_88,param_1,&local_b0);
  if (((local_80 != (undefined1 *)0x0) && (local_80[local_70] = 0, local_78._4_4_ != 0)) &&
     ((local_6c._1_1_ >> 2 & 1) == 0)) {
    puVar2 = (undefined1 *)FUN_005a7ad8(&local_88);
    return puVar2;
  }
  return local_80;
}


// ===== 00586e28  sqlite3_mprintf =====

undefined8
sqlite3_mprintf(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined1 **ppuStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  
  local_98 = param_2;
  uStack_90 = param_3;
  local_88 = param_4;
  uStack_80 = param_5;
  local_78 = param_6;
  uStack_70 = param_7;
  local_68 = param_8;
  iVar1 = sqlite3_initialize();
  if (iVar1 != 0) {
    return 0;
  }
  ppuStack_58 = &local_60;
  puStack_50 = auStack_a0;
  uStack_48 = 0xffffff80ffffffc8;
  local_60 = (undefined1 *)register0x00000008;
  uVar2 = sqlite3_vmprintf(param_1,&local_60);
  return uVar2;
}


// ===== 00586ec0  sqlite3_vsnprintf =====

undefined1 * sqlite3_vsnprintf(int param_1,undefined1 *param_2,long param_3,undefined8 *param_4)

{
  undefined1 *puVar1;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined1 *puStack_38;
  int local_30;
  ulong local_2c;
  undefined2 local_24;
  
  if (0 < param_1) {
    if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
      sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x80c9,
                  "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
      puVar1 = param_2;
      if (param_2 == (undefined1 *)0x0) {
        return (undefined1 *)0x0;
      }
    }
    else {
      uStack_58 = param_4[1];
      local_60 = *param_4;
      uStack_48 = param_4[3];
      uStack_50 = param_4[2];
      local_40 = 0;
      local_2c = 0;
      local_24 = 0;
      puStack_38 = param_2;
      local_30 = param_1;
      sqlite3_str_vappendf(&local_40,param_3,&local_60);
      puVar1 = param_2 + (local_2c >> 0x20);
    }
    *puVar1 = 0;
  }
  return param_2;
}


// ===== 00586f5c  sqlite3_snprintf =====

undefined1 *
sqlite3_snprintf(int param_1,undefined1 *param_2,long param_3,undefined8 param_4,undefined8 param_5,
                undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 *puVar1;
  undefined1 auStack_b0 [8];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 *local_80;
  undefined1 **ppuStack_78;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  undefined8 local_40;
  undefined1 *puStack_38;
  int local_30;
  ulong local_2c;
  undefined2 local_24;
  
  if (0 < param_1) {
    local_a8 = param_4;
    uStack_a0 = param_5;
    local_98 = param_6;
    uStack_90 = param_7;
    local_88 = param_8;
    if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
      sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x80d9,
                  "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
      puVar1 = param_2;
      if (param_2 == (undefined1 *)0x0) {
        return (undefined1 *)0x0;
      }
    }
    else {
      ppuStack_78 = &local_80;
      puStack_70 = auStack_b0;
      local_40 = 0;
      local_2c = 0;
      local_24 = 0;
      uStack_68 = 0xffffff80ffffffd8;
      local_80 = (undefined1 *)register0x00000008;
      puStack_38 = param_2;
      local_30 = param_1;
      sqlite3_str_vappendf(&local_40,param_3,&local_80);
      puVar1 = param_2 + (local_2c >> 0x20);
    }
    *puVar1 = 0;
  }
  return param_2;
}


// ===== 00587038  sqlite3_log =====

void sqlite3_log(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined1 *local_330;
  undefined1 *puStack_328;
  undefined8 *puStack_320;
  undefined8 uStack_318;
  undefined1 auStack_30c [700];
  undefined8 local_50;
  undefined1 *local_48;
  undefined4 local_40;
  ulong local_3c;
  undefined2 local_34;
  
  if (DAT_00b0db68 != (code *)0x0) {
    puStack_328 = &stack0xfffffffffffffcb0;
    puStack_320 = &local_380;
    local_3c = 0;
    local_48 = auStack_30c;
    local_50 = 0;
    local_34 = 0;
    local_40 = 700;
    uStack_318 = 0xffffff80ffffffd0;
    local_380 = param_3;
    uStack_378 = param_4;
    local_370 = param_5;
    uStack_368 = param_6;
    local_360 = param_7;
    uStack_358 = param_8;
    local_330 = (undefined1 *)register0x00000008;
    sqlite3_str_vappendf(&local_50,param_2,&local_330);
    uVar2 = DAT_00b0db70;
    pcVar1 = DAT_00b0db68;
    puVar3 = local_48;
    if (local_48 != (undefined1 *)0x0) {
      local_48[local_3c >> 0x20] = 0;
      if (((int)local_3c != 0) && ((local_34._1_1_ >> 2 & 1) == 0)) {
        puVar3 = (undefined1 *)FUN_005a7ad8(&local_50);
      }
    }
    (*pcVar1)(uVar2,param_1,puVar3);
  }
  return;
}


// ===== 0058712c  sqlite3_randomness =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sqlite3_randomness(uint param_1,void *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  long lVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  void *local_b0;
  
  iVar6 = sqlite3_initialize();
  if (iVar6 != 0) {
    return;
  }
  if (DAT_00b0d9f4 == '\0') {
    if (((int)param_1 < 1) || (param_2 == (void *)0x0)) {
LAB_0058721c:
      _DAT_00b10420 = _DAT_00b10420 & 0xffffffff00000000;
      return;
    }
    lVar7 = 0;
    bVar5 = true;
  }
  else {
    lVar7 = (*DAT_00b0da60)(5);
    bVar5 = lVar7 == 0;
    if (lVar7 == 0) {
      if (((int)param_1 < 1) || (param_2 == (void *)0x0)) goto LAB_0058721c;
    }
    else {
      (*DAT_00b0da70)(lVar7);
      if (((int)param_1 < 1) || (param_2 == (void *)0x0)) {
        _DAT_00b10420 = _DAT_00b10420 & 0xffffffff00000000;
        goto LAB_005875a0;
      }
      bVar5 = false;
    }
  }
  local_b0 = param_2;
  if (DAT_00b10420 == 0) {
    iVar6 = sqlite3_initialize();
    if (iVar6 == 0) {
      lVar20 = DAT_00b10370;
      if ((DAT_00b0d9f4 != '\0') && (lVar8 = (*DAT_00b0da60)(2), lVar20 = DAT_00b10370, lVar8 != 0))
      {
        (*DAT_00b0da70)();
        lVar20 = DAT_00b10370;
        (*DAT_00b0da80)(lVar8);
      }
      _DAT_00b10428 = _UNK_0029f858;
      _DAT_00b10420 = _DAT_0029f850;
      if (lVar20 == 0) goto LAB_00587260;
      if (DAT_00b0dba0 == 0) {
        (**(code **)(lVar20 + 0x68))(lVar20,0x2c,&DAT_00b10430);
        DAT_00b1045c = DAT_00b10450;
      }
      else {
        DAT_00b10454 = 0;
        DAT_00b1044c = 0;
        DAT_00b10444 = 0;
        DAT_00b10448 = 0;
        DAT_00b1043c = 0;
        DAT_00b10440 = 0;
        DAT_00b10434 = 0;
        DAT_00b10438 = 0;
        DAT_00b1045c = 0;
        DAT_00b10430 = DAT_00b0dba0;
      }
    }
    else {
LAB_00587260:
      DAT_00b10454 = 0;
      DAT_00b10438 = 0;
      DAT_00b1043c = 0;
      DAT_00b10430 = 0;
      DAT_00b10434 = 0;
      DAT_00b10448 = 0;
      DAT_00b1044c = 0;
      DAT_00b10440 = 0;
      DAT_00b10444 = 0;
      DAT_00b1045c = 0;
      _DAT_00b10420 = _DAT_0029f850;
      _DAT_00b10428 = _UNK_0029f858;
    }
    uVar14 = 0;
    DAT_00b10450 = 0;
    DAT_00b104a0._0_1_ = 0;
    if (param_1 != 0) goto LAB_005872b0;
  }
  else {
    uVar14 = (uint)(byte)DAT_00b104a0;
    if ((byte)DAT_00b104a0 < param_1) {
LAB_005872b0:
      do {
        if (uVar14 != 0) {
          memcpy(local_b0,&DAT_00b10460,(ulong)uVar14);
          param_1 = param_1 - (byte)DAT_00b104a0;
          local_b0 = (void *)((long)local_b0 + (ulong)(byte)DAT_00b104a0);
        }
        DAT_00b10450 = DAT_00b10450 + 1;
        iVar6 = 10;
        uVar23 = (uint)DAT_00b10454;
        uVar18 = DAT_00b10420;
        uVar17 = DAT_00b10424;
        uVar15 = DAT_00b10430;
        uVar16 = DAT_00b10434;
        uVar22 = DAT_00b10440;
        uVar19 = DAT_00b10444;
        uVar12 = DAT_00b10428;
        uVar11 = DAT_00b1042c;
        uVar10 = DAT_00b10438;
        uVar9 = DAT_00b1043c;
        uVar14 = DAT_00b10448;
        uVar25 = DAT_00b1044c;
        uVar24 = DAT_00b10454._4_4_;
        uVar21 = DAT_00b1045c;
        uVar13 = DAT_00b10450;
        do {
          uVar13 = uVar13 ^ uVar18 + uVar15;
          uVar23 = uVar23 ^ uVar17 + uVar16;
          uVar24 = uVar24 ^ uVar12 + uVar10;
          uVar1 = uVar13 >> 0x10 | uVar13 << 0x10;
          uVar21 = uVar21 ^ uVar11 + uVar9;
          uVar2 = uVar23 >> 0x10 | uVar23 << 0x10;
          uVar3 = uVar24 >> 0x10 | uVar24 << 0x10;
          uVar21 = uVar21 >> 0x10 | uVar21 << 0x10;
          uVar22 = uVar1 + uVar22;
          iVar6 = iVar6 + -1;
          uVar19 = uVar2 + uVar19;
          uVar14 = uVar3 + uVar14;
          uVar13 = uVar22 ^ uVar15;
          uVar23 = uVar19 ^ uVar16;
          uVar25 = uVar21 + uVar25;
          uVar24 = uVar14 ^ uVar10;
          uVar4 = uVar13 >> 0x14 | uVar13 << 0xc;
          uVar23 = uVar23 >> 0x14 | uVar23 << 0xc;
          uVar13 = uVar25 ^ uVar9;
          uVar24 = uVar24 >> 0x14 | uVar24 << 0xc;
          uVar13 = uVar13 >> 0x14 | uVar13 << 0xc;
          uVar18 = uVar4 + uVar18 + uVar15;
          uVar17 = uVar23 + uVar17 + uVar16;
          uVar12 = uVar24 + uVar12 + uVar10;
          uVar11 = uVar13 + uVar11 + uVar9;
          uVar1 = uVar18 ^ uVar1;
          uVar2 = uVar17 ^ uVar2;
          uVar3 = uVar12 ^ uVar3;
          uVar16 = uVar1 >> 0x18 | uVar1 << 8;
          uVar21 = uVar11 ^ uVar21;
          uVar10 = uVar2 >> 0x18 | uVar2 << 8;
          uVar9 = uVar3 >> 0x18 | uVar3 << 8;
          uVar21 = uVar21 >> 0x18 | uVar21 << 8;
          uVar22 = uVar16 + uVar22;
          uVar19 = uVar10 + uVar19;
          uVar14 = uVar9 + uVar14;
          uVar4 = uVar22 ^ uVar4;
          uVar23 = uVar19 ^ uVar23;
          uVar25 = uVar21 + uVar25;
          uVar24 = uVar14 ^ uVar24;
          uVar23 = uVar23 >> 0x19 | uVar23 << 7;
          uVar13 = uVar25 ^ uVar13;
          uVar24 = uVar24 >> 0x19 | uVar24 << 7;
          uVar13 = uVar13 >> 0x19 | uVar13 << 7;
          uVar15 = uVar4 >> 0x19 | uVar4 << 7;
          uVar18 = uVar23 + uVar18;
          uVar17 = uVar24 + uVar17;
          uVar12 = uVar13 + uVar12;
          uVar11 = uVar11 + uVar15;
          uVar21 = uVar21 ^ uVar18;
          uVar16 = uVar17 ^ uVar16;
          uVar10 = uVar12 ^ uVar10;
          uVar21 = uVar21 >> 0x10 | uVar21 << 0x10;
          uVar9 = uVar11 ^ uVar9;
          uVar10 = uVar10 >> 0x10 | uVar10 << 0x10;
          uVar16 = uVar16 >> 0x10 | uVar16 << 0x10;
          uVar9 = uVar9 >> 0x10 | uVar9 << 0x10;
          uVar14 = uVar21 + uVar14;
          uVar22 = uVar10 + uVar22;
          uVar25 = uVar16 + uVar25;
          uVar23 = uVar14 ^ uVar23;
          uVar13 = uVar22 ^ uVar13;
          uVar19 = uVar9 + uVar19;
          uVar24 = uVar25 ^ uVar24;
          uVar1 = uVar23 >> 0x14 | uVar23 << 0xc;
          uVar15 = uVar19 ^ uVar15;
          uVar2 = uVar13 >> 0x14 | uVar13 << 0xc;
          uVar3 = uVar24 >> 0x14 | uVar24 << 0xc;
          uVar15 = uVar15 >> 0x14 | uVar15 << 0xc;
          uVar18 = uVar1 + uVar18;
          uVar12 = uVar2 + uVar12;
          uVar17 = uVar3 + uVar17;
          uVar11 = uVar15 + uVar11;
          uVar21 = uVar18 ^ uVar21;
          uVar10 = uVar12 ^ uVar10;
          uVar16 = uVar17 ^ uVar16;
          uVar21 = uVar21 >> 0x18 | uVar21 << 8;
          uVar9 = uVar11 ^ uVar9;
          uVar23 = uVar10 >> 0x18 | uVar10 << 8;
          uVar13 = uVar16 >> 0x18 | uVar16 << 8;
          uVar24 = uVar9 >> 0x18 | uVar9 << 8;
          uVar14 = uVar21 + uVar14;
          uVar22 = uVar23 + uVar22;
          uVar25 = uVar13 + uVar25;
          uVar1 = uVar14 ^ uVar1;
          uVar2 = uVar22 ^ uVar2;
          uVar19 = uVar24 + uVar19;
          uVar3 = uVar25 ^ uVar3;
          uVar16 = uVar1 >> 0x19 | uVar1 << 7;
          uVar15 = uVar19 ^ uVar15;
          uVar10 = uVar3 >> 0x19 | uVar3 << 7;
          uVar9 = uVar2 >> 0x19 | uVar2 << 7;
          uVar15 = uVar15 >> 0x19 | uVar15 << 7;
        } while (iVar6 != 0);
        DAT_00b10460 = uVar18 + DAT_00b10420;
        DAT_00b10464 = uVar17 + DAT_00b10424;
        DAT_00b10468 = uVar12 + DAT_00b10428;
        DAT_00b1046c = uVar11 + DAT_00b1042c;
        DAT_00b10470 = uVar15 + DAT_00b10430;
        DAT_00b10474 = uVar16 + DAT_00b10434;
        DAT_00b10478 = uVar10 + DAT_00b10438;
        DAT_00b1047c = uVar9 + DAT_00b1043c;
        DAT_00b10480 = uVar22 + DAT_00b10440;
        DAT_00b10484 = uVar19 + DAT_00b10444;
        DAT_00b10488 = uVar14 + DAT_00b10448;
        DAT_00b1048c = uVar25 + DAT_00b1044c;
        DAT_00b10490 = uVar13 + DAT_00b10450;
        DAT_00b10494 = uVar23 + (uint)DAT_00b10454;
        DAT_00b10498 = uVar24 + DAT_00b10454._4_4_;
        DAT_00b1049c = uVar21 + DAT_00b1045c;
        uVar14 = 0x40;
        DAT_00b104a0._0_1_ = 0x40;
      } while (0x40 < (int)param_1);
    }
  }
  memcpy(local_b0,(void *)((long)&DAT_00b10460 + (long)(int)(uVar14 - param_1)),(long)(int)param_1);
  DAT_00b104a0._0_1_ = (byte)DAT_00b104a0 - (char)param_1;
  if (bVar5) {
    return;
  }
LAB_005875a0:
                    /* WARNING: Could not recover jumptable at 0x005875bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00b0da80)(lVar7);
  return;
}


// ===== 00587690  sqlite3_stricmp =====

ulong sqlite3_stricmp(byte *param_1,byte *param_2)

{
  byte bVar1;
  
  if (param_1 == (byte *)0x0) {
    return (ulong)-(uint)(param_2 != (byte *)0x0);
  }
  if (param_2 != (byte *)0x0) {
    do {
      bVar1 = *param_1;
      if (bVar1 == *param_2) {
        if (bVar1 == 0) {
          return (ulong)bVar1;
        }
      }
      else if ((uint)(byte)(&DAT_002c78ae)[bVar1] - (uint)(byte)(&DAT_002c78ae)[*param_2] != 0) {
        return (ulong)((uint)(byte)(&DAT_002c78ae)[bVar1] - (uint)(byte)(&DAT_002c78ae)[*param_2]);
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    } while( true );
  }
  return 1;
}


// ===== 005876f0  sqlite3_strnicmp =====

int sqlite3_strnicmp(byte *param_1,byte *param_2,int param_3)

{
  byte *pbVar1;
  uint uVar2;
  ulong uVar3;
  
  if (param_1 == (byte *)0x0) {
    return -(uint)(param_2 != (byte *)0x0);
  }
  if (param_2 != (byte *)0x0) {
    if (0 < param_3) {
      uVar2 = param_3 + 1;
      do {
        uVar3 = (ulong)*param_1;
        if ((uVar3 == 0) ||
           (pbVar1 = &DAT_002c78ae + uVar3, uVar3 = (ulong)*pbVar1,
           *pbVar1 != (&DAT_002c78ae)[*param_2])) {
          return (int)uVar3 - (uint)(byte)(&DAT_002c78ae)[*param_2];
        }
        uVar2 = uVar2 - 1;
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
      } while (1 < uVar2);
    }
    return 0;
  }
  return 1;
}


// ===== 00587768  sqlite3_os_init =====

undefined8 sqlite3_os_init(void)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  iVar2 = sqlite3_initialize();
  if (iVar2 == 0) {
    if (DAT_00b0d9f4 == '\0') {
      lVar3 = 0;
LAB_005877bc:
      bVar1 = true;
    }
    else {
      lVar3 = (*DAT_00b0da60)(2);
      if (lVar3 == 0) goto LAB_005877bc;
      (*DAT_00b0da70)();
      bVar1 = false;
    }
    puVar4 = &DAT_00b10370;
    if (DAT_00b10370 == &DAT_00b0dba8) {
LAB_00587804:
      *puVar4 = DAT_00b0dbb8;
      puVar7 = DAT_00b10370;
    }
    else {
      puVar7 = DAT_00b10370;
      puVar6 = DAT_00b10370;
      if (DAT_00b10370 != (undefined *)0x0) {
        do {
          puVar5 = puVar6;
          puVar6 = *(undefined **)(puVar5 + 0x10);
          if (puVar6 == (undefined *)0x0) break;
        } while (puVar6 != &DAT_00b0dba8);
        if (puVar6 == &DAT_00b0dba8) {
          puVar4 = (undefined8 *)(puVar5 + 0x10);
          goto LAB_00587804;
        }
      }
    }
    DAT_00b10370 = &DAT_00b0dba8;
    DAT_00b0dbb8 = puVar7;
    if (!bVar1) {
      (*DAT_00b0da80)(lVar3);
    }
  }
  iVar2 = sqlite3_initialize();
  if (iVar2 == 0) {
    if (DAT_00b0d9f4 == '\0') {
      lVar3 = 0;
LAB_00587878:
      bVar1 = true;
    }
    else {
      lVar3 = (*DAT_00b0da60)(2);
      if (lVar3 == 0) goto LAB_00587878;
      (*DAT_00b0da70)();
      bVar1 = false;
    }
    puVar4 = &DAT_00b10370;
    if (DAT_00b10370 == &DAT_00b0dc50) {
LAB_005878c0:
      *puVar4 = DAT_00b0dc60;
LAB_005878d4:
      if (DAT_00b10370 == (undefined *)0x0) goto LAB_005878ec;
      DAT_00b0dc60 = *(undefined8 *)(DAT_00b10370 + 0x10);
      *(undefined **)(DAT_00b10370 + 0x10) = &DAT_00b0dc50;
    }
    else {
      puVar7 = DAT_00b10370;
      if (DAT_00b10370 != (undefined *)0x0) {
        do {
          puVar6 = puVar7;
          puVar7 = *(undefined **)(puVar6 + 0x10);
          if (puVar7 == (undefined *)0x0) break;
        } while (puVar7 != &DAT_00b0dc50);
        if (puVar7 == &DAT_00b0dc50) {
          puVar4 = (undefined8 *)(puVar6 + 0x10);
          goto LAB_005878c0;
        }
        goto LAB_005878d4;
      }
LAB_005878ec:
      DAT_00b0dc60 = 0;
      DAT_00b10370 = &DAT_00b0dc50;
    }
    if (!bVar1) {
      (*DAT_00b0da80)(lVar3);
    }
  }
  iVar2 = sqlite3_initialize();
  if (iVar2 == 0) {
    if (DAT_00b0d9f4 == '\0') {
      lVar3 = 0;
LAB_00587954:
      bVar1 = true;
    }
    else {
      lVar3 = (*DAT_00b0da60)(2);
      if (lVar3 == 0) goto LAB_00587954;
      (*DAT_00b0da70)();
      bVar1 = false;
    }
    puVar4 = &DAT_00b10370;
    if (DAT_00b10370 == &DAT_00b0dcf8) {
LAB_0058799c:
      *puVar4 = DAT_00b0dd08;
LAB_005879b0:
      if (DAT_00b10370 == (undefined *)0x0) goto LAB_005879c8;
      DAT_00b0dd08 = *(undefined8 *)(DAT_00b10370 + 0x10);
      *(undefined **)(DAT_00b10370 + 0x10) = &DAT_00b0dcf8;
    }
    else {
      puVar7 = DAT_00b10370;
      if (DAT_00b10370 != (undefined *)0x0) {
        do {
          puVar6 = puVar7;
          puVar7 = *(undefined **)(puVar6 + 0x10);
          if (puVar7 == (undefined *)0x0) break;
        } while (puVar7 != &DAT_00b0dcf8);
        if (puVar7 == &DAT_00b0dcf8) {
          puVar4 = (undefined8 *)(puVar6 + 0x10);
          goto LAB_0058799c;
        }
        goto LAB_005879b0;
      }
LAB_005879c8:
      DAT_00b0dd08 = 0;
      DAT_00b10370 = &DAT_00b0dcf8;
    }
    if (!bVar1) {
      (*DAT_00b0da80)(lVar3);
    }
  }
  iVar2 = sqlite3_initialize();
  if (iVar2 != 0) goto LAB_00587ac8;
  if (DAT_00b0d9f4 == '\0') {
    lVar3 = 0;
LAB_00587a30:
    bVar1 = true;
  }
  else {
    lVar3 = (*DAT_00b0da60)(2);
    if (lVar3 == 0) goto LAB_00587a30;
    (*DAT_00b0da70)();
    bVar1 = false;
  }
  puVar4 = &DAT_00b10370;
  if (DAT_00b10370 == &DAT_00b0dda0) {
LAB_00587a78:
    *puVar4 = DAT_00b0ddb0;
LAB_00587a8c:
    if (DAT_00b10370 == (undefined *)0x0) goto LAB_00587aa4;
    DAT_00b0ddb0 = *(undefined8 *)(DAT_00b10370 + 0x10);
    *(undefined **)(DAT_00b10370 + 0x10) = &DAT_00b0dda0;
  }
  else {
    puVar7 = DAT_00b10370;
    if (DAT_00b10370 != (undefined *)0x0) {
      do {
        puVar6 = puVar7;
        puVar7 = *(undefined **)(puVar6 + 0x10);
        if (puVar7 == (undefined *)0x0) break;
      } while (puVar7 != &DAT_00b0dda0);
      if (puVar7 == &DAT_00b0dda0) {
        puVar4 = (undefined8 *)(puVar6 + 0x10);
        goto LAB_00587a78;
      }
      goto LAB_00587a8c;
    }
LAB_00587aa4:
    DAT_00b0ddb0 = 0;
    DAT_00b10370 = &DAT_00b0dda0;
  }
  if (!bVar1) {
    (*DAT_00b0da80)(lVar3);
  }
LAB_00587ac8:
  if (DAT_00b0d9f4 == '\0') {
    DAT_00b10378 = 0;
  }
  else {
    DAT_00b10378 = (*DAT_00b0da60)(0xb);
  }
  DAT_00b10390 = getenv("SQLITE_TMPDIR");
  DAT_00b10398 = getenv("TMPDIR");
  return 0;
}


// ===== 00587b28  FUN_00587b28 =====

/* WARNING: Removing unreachable block (ram,0x00587e28) */
/* WARNING: Removing unreachable block (ram,0x00587ffc) */

undefined8 FUN_00587b28(long param_1,char *param_2,undefined8 *param_3,uint param_4,uint *param_5)

{
  uint uVar1;
  undefined1 *puVar2;
  uint uVar3;
  bool bVar4;
  ulong uVar5;
  __pid_t _Var6;
  int iVar7;
  int iVar8;
  long lVar9;
  int *piVar10;
  size_t sVar11;
  undefined *puVar12;
  undefined4 *puVar13;
  int *piVar14;
  undefined8 uVar15;
  uint uVar16;
  undefined8 uVar17;
  char *pcVar18;
  char *pcVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  uint uVar24;
  long *plVar25;
  char *pcVar26;
  uint uVar27;
  undefined1 *puVar28;
  long *plVar29;
  ulong uVar30;
  char acStack_502 [513];
  undefined1 uStack_301;
  long local_300;
  long lStack_2f8;
  uint local_2f0;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  long local_f0;
  long lStack_e8;
  uint local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  
  iVar7 = DAT_00b10364;
  uVar1 = param_4 & 0xfff00;
  if (((param_4 >> 2 & 1) == 0) ||
     (((bVar4 = true, uVar1 != 0x800 && (uVar1 != 0x4000)) && (uVar1 != 0x80000)))) {
    bVar4 = false;
  }
  _Var6 = getpid();
  if (iVar7 != _Var6) {
    DAT_00b10364 = getpid();
    iVar7 = sqlite3_initialize();
    if (iVar7 == 0) {
      if ((DAT_00b0d9f4 == '\0') || (lVar9 = (*DAT_00b0da60)(5), lVar9 == 0)) {
        DAT_00b10420 = 0;
      }
      else {
        (*DAT_00b0da70)();
        DAT_00b10420 = 0;
        (*DAT_00b0da80)(lVar9);
      }
    }
  }
  param_3[0xe] = 0;
  param_3[3] = 0;
  param_3[2] = 0;
  param_3[5] = 0;
  param_3[4] = 0;
  param_3[7] = 0;
  param_3[6] = 0;
  param_3[9] = 0;
  param_3[8] = 0;
  param_3[0xb] = 0;
  param_3[10] = 0;
  param_3[0xd] = 0;
  param_3[0xc] = 0;
  param_3[1] = 0;
  *param_3 = 0;
  pcVar26 = param_2;
  uVar27 = param_4;
  if (uVar1 == 0x100) {
    piVar10 = (int *)FUN_005aafa4(param_2,param_4);
    if (piVar10 == (int *)0x0) {
      iVar7 = sqlite3_initialize();
      if ((iVar7 != 0) || (lVar9 = FUN_005827b0(0x10), lVar9 == 0)) {
        return 7;
      }
      param_3[6] = lVar9;
      goto LAB_00587c64;
    }
    iVar7 = *piVar10;
    param_3[6] = piVar10;
    uVar24 = param_4 & 1;
    if (iVar7 < 0) goto LAB_00587c64;
LAB_00587ed4:
    if (param_5 != (uint *)0x0) {
      *param_5 = uVar27;
    }
    piVar10 = (int *)param_3[6];
    if (piVar10 != (int *)0x0) {
      *piVar10 = iVar7;
      piVar10[1] = uVar27 & 3;
    }
    if ((param_4 & 8) != 0) {
      (*(code *)PTR_unlink_00b0dfd0)(pcVar26);
    }
    *(int *)(param_3 + 3) = iVar7;
    param_3[1] = param_1;
    uVar16 = (param_4 & 8) << 2;
    if (uVar24 != 0) {
      uVar16 = (param_4 & 8) << 2 | 2;
    }
    param_3[7] = param_2;
    if (uVar1 != 0x100) {
      uVar16 = uVar16 | 0x80;
    }
    uVar1 = uVar16 | 8;
    if (!bVar4) {
      uVar1 = uVar16;
    }
    *(ushort *)((long)param_3 + 0x1e) = (ushort)uVar1 | (ushort)(uVar27 & 0x40);
    pcVar26 = (char *)0x0;
    if ((uVar27 & 0x40) != 0) {
      pcVar26 = param_2;
    }
    param_3[0xc] = DAT_00b0db18;
    iVar8 = sqlite3_uri_boolean(pcVar26,&DAT_002bb587,1);
    if (iVar8 != 0) {
      *(ushort *)((long)param_3 + 0x1e) = *(ushort *)((long)param_3 + 0x1e) | 0x10;
    }
    iVar8 = strcmp(*(char **)(param_1 + 0x18),"unix-excl");
    if (iVar8 != 0) {
      if (uVar1 >> 7 == 0) goto LAB_00587f98;
LAB_00588010:
      puVar12 = &DAT_00ad2608;
LAB_00588018:
      *(undefined4 *)(param_3 + 4) = 0;
      goto LAB_0058801c;
    }
    *(ushort *)((long)param_3 + 0x1e) = *(ushort *)((long)param_3 + 0x1e) | 1;
    if (uVar1 >> 7 != 0) goto LAB_00588010;
LAB_00587f98:
    puVar12 = (undefined *)(*(code *)**(undefined8 **)(param_1 + 0x20))(param_2,param_3);
    if (puVar12 == &DAT_00ad2570) {
      if (DAT_00b10378 != 0) {
        (*DAT_00b0da70)();
      }
      iVar8 = (*(code *)PTR_fstat_00b0dec8)(*(undefined4 *)(param_3 + 3),&local_300);
      if (iVar8 == 0) {
        lStack_e8 = lStack_2f8;
        local_f0 = local_300;
        for (plVar25 = DAT_00b10388; plVar25 != (long *)0x0; plVar25 = (long *)plVar25[8]) {
          if (local_300 == *plVar25 && lStack_2f8 == plVar25[1]) {
            *(int *)(plVar25 + 6) = (int)plVar25[6] + 1;
            plVar29 = DAT_00b10388;
            goto LAB_0058852c;
          }
        }
        iVar8 = sqlite3_initialize();
        if ((iVar8 != 0) || (plVar25 = (long *)FUN_005827b0(0x50), plVar25 == (long *)0x0)) {
LAB_0058814c:
          uVar20 = 7;
          iVar7 = (*(code *)PTR_close_00b0de68)(iVar7);
          goto joined_r0x00588160;
        }
        plVar29 = plVar25 + 2;
        plVar25[3] = 0;
        *plVar29 = 0;
        plVar25[7] = 0;
        plVar25[6] = 0;
        plVar25[9] = 0;
        plVar25[8] = 0;
        plVar25[5] = 0;
        plVar25[4] = 0;
        plVar25[1] = lStack_e8;
        *plVar25 = local_f0;
        if (DAT_00b0d9f4 != '\0') {
          iVar8 = sqlite3_initialize();
          if (iVar8 == 0) {
            lVar9 = (*DAT_00b0da60)();
            *plVar29 = lVar9;
            if (lVar9 != 0) goto LAB_00588510;
          }
          else {
            *plVar29 = 0;
          }
          puVar21 = &DAT_00b0da18;
          if (DAT_00b0d9f0 != 0) {
            if (DAT_00b103d8 != (long *)0x0) {
              (*DAT_00b0da70)();
            }
            iVar8 = (*DAT_00b0da28)(plVar25);
            DAT_00b105b8 = DAT_00b105b8 - iVar8;
            DAT_00b10600 = DAT_00b10600 + -1;
            (*DAT_00b0da18)(plVar25);
            if (DAT_00b103d8 == (long *)0x0) goto LAB_0058814c;
            puVar21 = &DAT_00b0da80;
            plVar25 = DAT_00b103d8;
          }
          (*(code *)*puVar21)(plVar25);
          goto LAB_0058814c;
        }
LAB_00588510:
        *(undefined4 *)(plVar25 + 6) = 1;
        plVar25[8] = (long)DAT_00b10388;
        plVar25[9] = 0;
        plVar29 = plVar25;
        if (DAT_00b10388 != (long *)0x0) {
          DAT_00b10388[9] = (long)plVar25;
        }
LAB_0058852c:
        DAT_00b10388 = plVar29;
        uVar20 = 0;
        param_3[2] = plVar25;
      }
      else {
        puVar13 = (undefined4 *)__errno();
        uVar20 = 10;
        *(undefined4 *)(param_3 + 4) = *puVar13;
        iVar7 = (*(code *)PTR_close_00b0de68)(iVar7);
joined_r0x00588160:
        if (iVar7 != 0) {
          if (param_3 == (undefined8 *)0x0) {
            puVar28 = (undefined1 *)0x0;
          }
          else {
            puVar28 = (undefined1 *)param_3[7];
          }
          puVar13 = (undefined4 *)__errno();
          puVar2 = &DAT_002a8138;
          if (puVar28 != (undefined1 *)0x0) {
            puVar2 = puVar28;
          }
          sqlite3_log(0x100a,"os_unix.c:%d: (%d) %s(%s) - %s",0xaeb0,*puVar13,"close",puVar2);
        }
        iVar7 = -1;
      }
      if (DAT_00b10378 != 0) {
        (*DAT_00b0da80)();
      }
      puVar12 = &DAT_00ad2570;
      *(undefined4 *)(param_3 + 4) = 0;
      if ((int)uVar20 == 0) {
LAB_0058801c:
        *param_3 = puVar12;
        FUN_005a9ee4(param_3);
        return 0;
      }
    }
    else {
      if (puVar12 != &DAT_00ad26a0) goto LAB_00588018;
      sVar11 = strlen(param_2);
      iVar8 = sqlite3_initialize();
      if (iVar8 == 0) {
        iVar8 = (int)sVar11 + 6;
        lVar9 = FUN_005827b0((long)iVar8);
        if (lVar9 != 0) {
          sqlite3_snprintf(iVar8,lVar9,"%s.lock",param_2);
          puVar12 = &DAT_00ad26a0;
          param_3[5] = lVar9;
          *(undefined4 *)(param_3 + 4) = 0;
          goto LAB_0058801c;
        }
      }
      else {
        lVar9 = 0;
      }
      uVar20 = 7;
      param_3[5] = lVar9;
      *(undefined4 *)(param_3 + 4) = 0;
    }
    if ((iVar7 < 0) || (iVar7 = (*(code *)PTR_close_00b0de68)(iVar7), iVar7 == 0))
    goto LAB_00588420;
    pcVar26 = (char *)param_3[7];
    piVar10 = (int *)__errno();
    iVar7 = *piVar10;
    pcVar19 = "";
    if (pcVar26 != (char *)0x0) {
      pcVar19 = pcVar26;
    }
    pcVar26 = "close";
    uVar15 = 0x100a;
    uVar17 = 0xaf05;
  }
  else {
    if (param_2 == (char *)0x0) {
      uVar20 = FUN_005aa614(*(undefined4 *)(param_1 + 8),acStack_502);
      pcVar26 = acStack_502;
      if ((int)uVar20 != 0) {
        return uVar20;
      }
    }
LAB_00587c64:
    uVar24 = param_4 & 1;
    if ((param_4 & 0x80800) == 0) {
      uVar22 = 0;
      if ((param_4 & 8) == 0) {
        uVar23 = 0;
        uVar16 = 0;
        if (((param_4 >> 6 & 1) != 0) && (pcVar19 = pcVar26, pcVar26 != (char *)0x0)) {
          do {
            do {
              pcVar18 = pcVar19;
              pcVar19 = pcVar18 + -1;
            } while (*pcVar19 != '\0');
          } while (((pcVar18[-2] != '\0') || (pcVar18[-3] != '\0')) || (pcVar18[-4] != '\0'));
          sVar11 = strlen(pcVar18);
          pcVar18 = pcVar18 + (sVar11 & 0x3fffffff);
          while( true ) {
            pcVar18 = pcVar18 + 1;
            if ((pcVar18 == (char *)0x0) || (*pcVar18 == '\0')) goto LAB_00587d70;
            iVar7 = strcmp(pcVar18,"modeof");
            sVar11 = strlen(pcVar18);
            pcVar18 = pcVar18 + (sVar11 & 0x3fffffff) + 1;
            if (iVar7 == 0) break;
            sVar11 = strlen(pcVar18);
            pcVar18 = pcVar18 + (sVar11 & 0x3fffffff);
          }
          if (pcVar18 != (char *)0x0) {
            uVar20 = (*(code *)PTR_stat_00b0deb0)(pcVar18,&local_300);
            if ((int)uVar20 == 0) {
              uVar16 = local_2f0 & 0x1ff;
              uVar22 = uStack_2e4;
              uVar23 = local_2e8;
            }
            else {
              uVar16 = 0;
              uVar20 = 0x70a;
              uVar22 = 0;
              uVar23 = 0;
            }
            if ((int)uVar20 != 0) {
              return uVar20;
            }
            goto LAB_00587e4c;
          }
LAB_00587d70:
          uVar22 = 0;
          uVar23 = 0;
          uVar16 = 0;
        }
      }
      else {
        uVar23 = 0;
        uVar16 = 0x180;
      }
    }
    else {
      if (pcVar26 == (char *)0x0) {
        uVar5 = 0;
      }
      else {
        sVar11 = strlen(pcVar26);
        uVar5 = sVar11 & 0x3fffffff;
      }
      do {
        uVar30 = uVar5;
        if (((long)uVar30 < 2) || (pcVar26[uVar30 - 1] == '.')) {
          uVar16 = 0;
          uVar23 = 0;
          uVar22 = 0;
          goto LAB_00587e4c;
        }
        uVar5 = uVar30 - 1;
      } while (pcVar26[uVar30 - 1] != '-');
      memcpy(&local_300,pcVar26,uVar30 - 1);
      (&uStack_301)[uVar30] = 0;
      iVar7 = (*(code *)PTR_stat_00b0deb0)(&local_300,&local_f0);
      if (iVar7 != 0) {
        return 0x70a;
      }
      uVar16 = local_e0 & 0x1ff;
      uVar22 = local_d4;
      uVar23 = local_d8;
    }
LAB_00587e4c:
    uVar3 = (param_4 & 0x10) << 3 | (param_4 & 4) << 4 | param_4 & 2 | 0x28000;
    iVar7 = FUN_005aa2a8(pcVar26,uVar3);
    if (-1 < iVar7) {
joined_r0x00587ea0:
      if (((uVar16 != 0) && ((param_4 & 0x80800) != 0)) &&
         (iVar8 = (*(code *)PTR_geteuid_00b0e048)(), iVar8 == 0)) {
        (*(code *)PTR_fchown_00b0e030)(iVar7,uVar23,uVar22);
      }
      goto LAB_00587ed4;
    }
    piVar10 = (int *)__errno();
    if (((bVar4) && (*piVar10 == 0xd)) &&
       (iVar7 = (*(code *)PTR_access_00b0de80)(pcVar26,0), iVar7 != 0)) {
      uVar20 = 0x608;
    }
    else {
      uVar20 = 0xe;
      if (((param_4 & 2) != 0) && (*piVar10 != 0x15)) {
        piVar14 = (int *)FUN_005aafa4(pcVar26);
        if (piVar14 == (int *)0x0) {
          iVar7 = FUN_005aa2a8(pcVar26,uVar3 & 0x28080,uVar16);
        }
        else {
          iVar7 = *piVar14;
          sqlite3_free();
        }
        if (-1 < iVar7) {
          uVar24 = 1;
          uVar27 = param_4 & 0xfffffff8 | 1;
          goto joined_r0x00587ea0;
        }
        uVar20 = 0xe;
      }
    }
    sqlite3_log(uVar20,0xe,"%s at line %d of [%.10s]","cannot open file",0xb0c5,
                "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
    iVar7 = *piVar10;
    pcVar19 = "";
    if (pcVar26 != (char *)0x0) {
      pcVar19 = pcVar26;
    }
    pcVar26 = "open";
    uVar15 = 0xe;
    uVar17 = 0xb0c5;
  }
  sqlite3_log(uVar15,"os_unix.c:%d: (%d) %s(%s) - %s",uVar17,iVar7,pcVar26,pcVar19);
LAB_00588420:
  plVar25 = (long *)param_3[6];
  if (plVar25 != (long *)0x0) {
    puVar21 = &DAT_00b0da18;
    if (DAT_00b0d9f0 != 0) {
      if (DAT_00b103d8 != (long *)0x0) {
        (*DAT_00b0da70)();
      }
      iVar7 = (*DAT_00b0da28)(plVar25);
      DAT_00b105b8 = DAT_00b105b8 - iVar7;
      DAT_00b10600 = DAT_00b10600 + -1;
      (*DAT_00b0da18)(plVar25);
      if (DAT_00b103d8 == (long *)0x0) {
        return uVar20;
      }
      puVar21 = &DAT_00b0da80;
      plVar25 = DAT_00b103d8;
    }
    (*(code *)*puVar21)(plVar25);
  }
  return uVar20;
}


// ===== 0058855c  FUN_0058855c =====

undefined8 FUN_0058855c(undefined8 param_1,undefined1 *param_2,ulong param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  int local_24;
  
  iVar2 = (*(code *)PTR_unlink_00b0dfd0)(param_2);
  if (iVar2 == -1) {
    piVar3 = (int *)__errno();
    if (*piVar3 == 2) {
      return 0x170a;
    }
    puVar1 = &DAT_002a8138;
    if (param_2 != (undefined1 *)0x0) {
      puVar1 = param_2;
    }
    sqlite3_log(0xa0a,"os_unix.c:%d: (%d) %s(%s) - %s",0xb150,*piVar3,"unlink",puVar1);
    return 0xa0a;
  }
  if ((param_3 & 1) != 0) {
    iVar2 = (*(code *)PTR_FUN_00b0dfe8)(param_2,&local_24);
    if (iVar2 == 0) {
      iVar2 = fsync(local_24);
      if (iVar2 == 0) {
        uVar5 = 0;
        iVar2 = (*(code *)PTR_close_00b0de68)(local_24);
      }
      else {
        puVar4 = (undefined4 *)__errno();
        puVar1 = &DAT_002a8138;
        if (param_2 != (undefined1 *)0x0) {
          puVar1 = param_2;
        }
        uVar5 = 0x50a;
        sqlite3_log(0x50a,"os_unix.c:%d: (%d) %s(%s) - %s",0xb15a,*puVar4,"fsync",puVar1);
        iVar2 = (*(code *)PTR_close_00b0de68)(local_24);
      }
      if (iVar2 != 0) {
        puVar4 = (undefined4 *)__errno();
        sqlite3_log(0x100a,"os_unix.c:%d: (%d) %s(%s) - %s",0xb15c,*puVar4,"close",&DAT_002a8138,
                    &DAT_002a8138);
      }
      return uVar5;
    }
    return 0;
  }
  return 0;
}


// ===== 005886ec  FUN_005886ec =====

undefined8 FUN_005886ec(undefined8 param_1,undefined8 param_2,int param_3,uint *param_4)

{
  int iVar1;
  undefined1 auStack_a0 [16];
  uint local_90;
  long local_70;
  
  if (param_3 != 0) {
    iVar1 = (*(code *)PTR_access_00b0de80)(param_2,6);
    *param_4 = (uint)(iVar1 == 0);
    return 0;
  }
  iVar1 = (*(code *)PTR_stat_00b0deb0)(param_2,auStack_a0);
  if (iVar1 != 0) {
    *param_4 = 0;
    return 0;
  }
  *param_4 = (uint)((local_90 & 0xf000) != 0x8000 || 0 < local_70);
  return 0;
}


// ===== 00588794  FUN_00588794 =====

int FUN_00588794(undefined8 param_1,char *param_2,undefined4 param_3,long param_4)

{
  long lVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 auStack_104a [4098];
  undefined8 local_48;
  long lStack_40;
  undefined4 local_38;
  int local_34;
  
  local_48 = 0;
  local_34 = 0;
  lStack_40 = param_4;
  local_38 = param_3;
  if (*param_2 != '/') {
    lVar1 = (*(code *)PTR_getcwd_00b0de98)(auStack_104a,0x1000);
    if (lVar1 == 0) {
      sqlite3_log(0xe,"%s at line %d of [%.10s]","cannot open file",0xb1ff,
                  "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
      puVar2 = (undefined4 *)__errno();
      sqlite3_log(0xe,"os_unix.c:%d: (%d) %s(%s) - %s",0xb1ff,*puVar2,"getcwd",param_2,&DAT_002a8138
                 );
      return 0xe;
    }
    FUN_005ab3d4(&local_48,auStack_104a);
  }
  FUN_005ab3d4(&local_48,param_2);
  *(undefined1 *)(param_4 + local_34) = 0;
  if ((local_34 < 2) || ((int)local_48 != 0)) {
    iVar3 = 0xe;
    sqlite3_log(0xe,"%s at line %d of [%.10s]","cannot open file",0xb205,
                "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
  }
  else {
    iVar3 = (uint)(local_48._4_4_ != 0) << 9;
  }
  return iVar3;
}


// ===== 005888c8  FUN_005888c8 =====

void FUN_005888c8(undefined8 param_1,undefined8 param_2)

{
  dlopen(param_2,0x102);
  return;
}


// ===== 005888d4  FUN_005888d4 =====

void FUN_005888d4(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  long lVar1;
  
  if (DAT_00b10378 != 0) {
    (*DAT_00b0da70)();
  }
  lVar1 = dlerror();
  if (lVar1 != 0) {
    sqlite3_snprintf(param_2,param_3,&DAT_002ad0ce,lVar1);
  }
  if (DAT_00b10378 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00588940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_00b0da80)();
    return;
  }
  return;
}


// ===== 00588954  FUN_00588954 =====

void FUN_00588954(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  dlsym(param_2,param_3);
  return;
}


// ===== 00588960  FUN_00588960 =====

void FUN_00588960(undefined8 param_1,undefined8 param_2)

{
  dlclose(param_2);
  return;
}


// ===== 00588968  FUN_00588968 =====

int FUN_00588968(undefined8 param_1,int param_2,time_t *param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  time_t local_68;
  
  memset(param_3,0,(long)param_2);
  DAT_00b10364 = getpid();
  do {
    while (uVar1 = (*(code *)PTR_open_00b0de50)("/dev/urandom",0x80000,0x1a4), (int)uVar1 < 0) {
      piVar3 = (int *)__errno();
      if (*piVar3 != 4) goto LAB_00588a44;
    }
    if (2 < uVar1) goto LAB_00588a68;
    (*(code *)PTR_close_00b0de68)(uVar1);
    sqlite3_log(0x1c,"attempt to open \"%s\" as file descriptor %d","/dev/urandom",uVar1);
    iVar2 = (*(code *)PTR_open_00b0de50)("/dev/null",0,0);
  } while (-1 < iVar2);
LAB_00588a44:
  time(&local_68);
  *param_3 = local_68;
  *(__pid_t *)(param_3 + 1) = DAT_00b10364;
  return 0xc;
  while (piVar3 = (int *)__errno(), *piVar3 == 4) {
LAB_00588a68:
    iVar2 = (*(code *)PTR_read_00b0df10)(uVar1,param_3,(long)param_2);
    if (-1 < iVar2) break;
  }
  iVar2 = (*(code *)PTR_close_00b0de68)(uVar1);
  if (iVar2 != 0) {
    puVar4 = (undefined4 *)__errno();
    sqlite3_log(0x100a,"os_unix.c:%d: (%d) %s(%s) - %s",0xb26a,*puVar4,"close",&DAT_002a8138,
                &DAT_002a8138);
  }
  return param_2;
}


// ===== 00588af8  FUN_00588af8 =====

int FUN_00588af8(undefined8 param_1,int param_2)

{
  timespec local_30;
  
  local_30.tv_sec = (__time_t)(param_2 / 1000000);
  local_30.tv_nsec = (long)((param_2 % 1000000) * 1000);
  nanosleep(&local_30,(timespec *)0x0);
  return param_2;
}


// ===== 00588b64  FUN_00588b64 =====

undefined8 FUN_00588b64(undefined8 param_1,double *param_2)

{
  timeval local_30;
  
  gettimeofday(&local_30,(__timezone_ptr_t)0x0);
  *param_2 = (double)(local_30.tv_usec / 1000 + local_30.tv_sec * 1000 + 0xbfc83e532200) /
             86400000.0;
  return 0;
}


// ===== 00588bec  FUN_00588bec =====

undefined4 FUN_00588bec(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)__errno();
  return *puVar1;
}


// ===== 00588c04  FUN_00588c04 =====

undefined8 FUN_00588c04(undefined8 param_1,long *param_2)

{
  timeval local_30;
  
  gettimeofday(&local_30,(__timezone_ptr_t)0x0);
  *param_2 = local_30.tv_usec / 1000 + local_30.tv_sec * 1000 + 0xbfc83e532200;
  return 0;
}


// ===== 00588c78  FUN_00588c78 =====

undefined8 FUN_00588c78(undefined8 param_1,char *param_2,undefined *param_3)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  
  if (param_2 != (char *)0x0) {
    iVar1 = strcmp(param_2,PTR_DAT_00b0de48);
    if (iVar1 == 0) {
      lVar2 = 0;
    }
    else {
      iVar1 = strcmp(param_2,PTR_s_close_00b0de60);
      if (iVar1 == 0) {
        lVar2 = 1;
      }
      else {
        iVar1 = strcmp(param_2,PTR_s_access_00b0de78);
        if (iVar1 == 0) {
          lVar2 = 2;
        }
        else {
          iVar1 = strcmp(param_2,PTR_s_getcwd_00b0de90);
          if (iVar1 == 0) {
            lVar2 = 3;
          }
          else {
            iVar1 = strcmp(param_2,PTR_DAT_00b0dea8);
            if (iVar1 == 0) {
              lVar2 = 4;
            }
            else {
              iVar1 = strcmp(param_2,PTR_s_fstat_00b0dec0);
              if (iVar1 == 0) {
                lVar2 = 5;
              }
              else {
                iVar1 = strcmp(param_2,PTR_s_ftruncate_00b0ded8);
                if (iVar1 == 0) {
                  lVar2 = 6;
                }
                else {
                  iVar1 = strcmp(param_2,PTR_s_fcntl_00b0def0);
                  if (iVar1 == 0) {
                    lVar2 = 7;
                  }
                  else {
                    iVar1 = strcmp(param_2,PTR_DAT_00b0df08);
                    if (iVar1 == 0) {
                      lVar2 = 8;
                    }
                    else {
                      iVar1 = strcmp(param_2,PTR_s_pread_00b0df20);
                      if (iVar1 == 0) {
                        lVar2 = 9;
                      }
                      else {
                        iVar1 = strcmp(param_2,PTR_s_pread64_00b0df38);
                        if (iVar1 == 0) {
                          lVar2 = 10;
                        }
                        else {
                          iVar1 = strcmp(param_2,PTR_s_write_00b0df50);
                          if (iVar1 == 0) {
                            lVar2 = 0xb;
                          }
                          else {
                            iVar1 = strcmp(param_2,PTR_s_pwrite_00b0df68);
                            if (iVar1 == 0) {
                              lVar2 = 0xc;
                            }
                            else {
                              iVar1 = strcmp(param_2,PTR_s_pwrite64_00b0df80);
                              if (iVar1 == 0) {
                                lVar2 = 0xd;
                              }
                              else {
                                iVar1 = strcmp(param_2,PTR_s_fchmod_00b0df98);
                                if (iVar1 == 0) {
                                  lVar2 = 0xe;
                                }
                                else {
                                  iVar1 = strcmp(param_2,PTR_s_fallocate_00b0dfb0);
                                  if (iVar1 == 0) {
                                    lVar2 = 0xf;
                                  }
                                  else {
                                    iVar1 = strcmp(param_2,PTR_s_unlink_00b0dfc8);
                                    if (iVar1 == 0) {
                                      lVar2 = 0x10;
                                    }
                                    else {
                                      iVar1 = strcmp(param_2,PTR_s_openDirectory_00b0dfe0);
                                      if (iVar1 == 0) {
                                        lVar2 = 0x11;
                                      }
                                      else {
                                        iVar1 = strcmp(param_2,PTR_s_mkdir_00b0dff8);
                                        if (iVar1 == 0) {
                                          lVar2 = 0x12;
                                        }
                                        else {
                                          iVar1 = strcmp(param_2,PTR_s_rmdir_00b0e010);
                                          if (iVar1 == 0) {
                                            lVar2 = 0x13;
                                          }
                                          else {
                                            iVar1 = strcmp(param_2,PTR_s_fchown_00b0e028);
                                            if (iVar1 == 0) {
                                              lVar2 = 0x14;
                                            }
                                            else {
                                              iVar1 = strcmp(param_2,PTR_s_geteuid_00b0e040);
                                              if (iVar1 == 0) {
                                                lVar2 = 0x15;
                                              }
                                              else {
                                                iVar1 = strcmp(param_2,PTR_DAT_00b0e058);
                                                if (iVar1 == 0) {
                                                  lVar2 = 0x16;
                                                }
                                                else {
                                                  iVar1 = strcmp(param_2,PTR_s_munmap_00b0e070);
                                                  if (iVar1 == 0) {
                                                    lVar2 = 0x17;
                                                  }
                                                  else {
                                                    iVar1 = strcmp(param_2,PTR_s_mremap_00b0e088);
                                                    if (iVar1 == 0) {
                                                      lVar2 = 0x18;
                                                    }
                                                    else {
                                                      iVar1 = strcmp(param_2,
                                                  PTR_s_getpagesize_00b0e0a0);
                                                  if (iVar1 == 0) {
                                                    lVar2 = 0x19;
                                                  }
                                                  else {
                                                    iVar1 = strcmp(param_2,PTR_s_readlink_00b0e0b8);
                                                    if (iVar1 == 0) {
                                                      lVar2 = 0x1a;
                                                    }
                                                    else {
                                                      iVar1 = strcmp(param_2,PTR_s_lstat_00b0e0d0);
                                                      if (iVar1 == 0) {
                                                        lVar2 = 0x1b;
                                                      }
                                                      else {
                                                        iVar1 = strcmp(param_2,PTR_s_ioctl_00b0e0e8)
                                                        ;
                                                        if (iVar1 != 0) {
                                                          return 0xc;
                                                        }
                                                        lVar2 = 0x1c;
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
    puVar3 = (&DAT_00b0de58)[lVar2 * 3];
    if (puVar3 == (undefined *)0x0) {
      puVar3 = (&PTR_open_00b0de50)[lVar2 * 3];
      (&DAT_00b0de58)[lVar2 * 3] = puVar3;
    }
    if (param_3 != (undefined *)0x0) {
      puVar3 = param_3;
    }
    (&PTR_open_00b0de50)[lVar2 * 3] = puVar3;
    return 0;
  }
  if (DAT_00b0de58 != (undefined *)0x0) {
    PTR_open_00b0de50 = DAT_00b0de58;
  }
  if (DAT_00b0de70 != (undefined *)0x0) {
    PTR_close_00b0de68 = DAT_00b0de70;
  }
  if (DAT_00b0de88 != (undefined *)0x0) {
    PTR_access_00b0de80 = DAT_00b0de88;
  }
  if (DAT_00b0dea0 != (undefined *)0x0) {
    PTR_getcwd_00b0de98 = DAT_00b0dea0;
  }
  if (DAT_00b0deb8 != (undefined *)0x0) {
    PTR_stat_00b0deb0 = DAT_00b0deb8;
  }
  if (DAT_00b0ded0 != (undefined *)0x0) {
    PTR_fstat_00b0dec8 = DAT_00b0ded0;
  }
  if (DAT_00b0dee8 != (undefined *)0x0) {
    PTR_ftruncate_00b0dee0 = DAT_00b0dee8;
  }
  if (DAT_00b0df00 != (undefined *)0x0) {
    PTR_fcntl_00b0def8 = DAT_00b0df00;
  }
  if (DAT_00b0df18 != (undefined *)0x0) {
    PTR_read_00b0df10 = DAT_00b0df18;
  }
  if (DAT_00b0df30 != (undefined *)0x0) {
    PTR_pread_00b0df28 = DAT_00b0df30;
  }
  if (DAT_00b0df48 != 0) {
    DAT_00b0df40 = DAT_00b0df48;
  }
  if (DAT_00b0df60 != (undefined *)0x0) {
    PTR_write_00b0df58 = DAT_00b0df60;
  }
  if (DAT_00b0df78 != (undefined *)0x0) {
    PTR_pwrite_00b0df70 = DAT_00b0df78;
  }
  if (DAT_00b0df90 != 0) {
    DAT_00b0df88 = DAT_00b0df90;
  }
  if (DAT_00b0dfa8 != (undefined *)0x0) {
    PTR_fchmod_00b0dfa0 = DAT_00b0dfa8;
  }
  if (DAT_00b0dfc0 != 0) {
    DAT_00b0dfb8 = DAT_00b0dfc0;
  }
  if (DAT_00b0dfd8 != (undefined *)0x0) {
    PTR_unlink_00b0dfd0 = DAT_00b0dfd8;
  }
  if (DAT_00b0dff0 != (undefined *)0x0) {
    PTR_FUN_00b0dfe8 = DAT_00b0dff0;
  }
  if (DAT_00b0e008 != (undefined *)0x0) {
    PTR_mkdir_00b0e000 = DAT_00b0e008;
  }
  if (DAT_00b0e020 != (undefined *)0x0) {
    PTR_rmdir_00b0e018 = DAT_00b0e020;
  }
  if (DAT_00b0e038 != (undefined *)0x0) {
    PTR_fchown_00b0e030 = DAT_00b0e038;
  }
  if (DAT_00b0e050 != (undefined *)0x0) {
    PTR_geteuid_00b0e048 = DAT_00b0e050;
  }
  if (DAT_00b0e068 != (undefined *)0x0) {
    PTR_mmap_00b0e060 = DAT_00b0e068;
  }
  if (DAT_00b0e080 != (undefined *)0x0) {
    PTR_munmap_00b0e078 = DAT_00b0e080;
  }
  if (DAT_00b0e098 != (undefined *)0x0) {
    PTR_mremap_00b0e090 = DAT_00b0e098;
  }
  if (DAT_00b0e0b0 != (undefined *)0x0) {
    PTR_FUN_00b0e0a8 = DAT_00b0e0b0;
  }
  if (DAT_00b0e0c8 != (undefined *)0x0) {
    PTR_readlink_00b0e0c0 = DAT_00b0e0c8;
  }
  if (DAT_00b0e0e0 != (undefined *)0x0) {
    PTR_lstat_00b0e0d8 = DAT_00b0e0e0;
  }
  if (DAT_00b0e0f8 != 0) {
    DAT_00b0e0f0 = DAT_00b0e0f8;
    return 0;
  }
  return 0;
}


// ===== 0058926c  FUN_0058926c =====

undefined * FUN_0058926c(undefined8 param_1,char *param_2)

{
  int iVar1;
  long lVar2;
  
  iVar1 = strcmp(param_2,PTR_DAT_00b0de48);
  if (iVar1 == 0) {
    lVar2 = 0;
  }
  else {
    iVar1 = strcmp(param_2,PTR_s_close_00b0de60);
    if (iVar1 == 0) {
      lVar2 = 1;
    }
    else {
      iVar1 = strcmp(param_2,PTR_s_access_00b0de78);
      if (iVar1 == 0) {
        lVar2 = 2;
      }
      else {
        iVar1 = strcmp(param_2,PTR_s_getcwd_00b0de90);
        if (iVar1 == 0) {
          lVar2 = 3;
        }
        else {
          iVar1 = strcmp(param_2,PTR_DAT_00b0dea8);
          if (iVar1 == 0) {
            lVar2 = 4;
          }
          else {
            iVar1 = strcmp(param_2,PTR_s_fstat_00b0dec0);
            if (iVar1 == 0) {
              lVar2 = 5;
            }
            else {
              iVar1 = strcmp(param_2,PTR_s_ftruncate_00b0ded8);
              if (iVar1 == 0) {
                lVar2 = 6;
              }
              else {
                iVar1 = strcmp(param_2,PTR_s_fcntl_00b0def0);
                if (iVar1 == 0) {
                  lVar2 = 7;
                }
                else {
                  iVar1 = strcmp(param_2,PTR_DAT_00b0df08);
                  if (iVar1 == 0) {
                    lVar2 = 8;
                  }
                  else {
                    iVar1 = strcmp(param_2,PTR_s_pread_00b0df20);
                    if (iVar1 == 0) {
                      lVar2 = 9;
                    }
                    else {
                      iVar1 = strcmp(param_2,PTR_s_pread64_00b0df38);
                      if (iVar1 == 0) {
                        lVar2 = 10;
                      }
                      else {
                        iVar1 = strcmp(param_2,PTR_s_write_00b0df50);
                        if (iVar1 == 0) {
                          lVar2 = 0xb;
                        }
                        else {
                          iVar1 = strcmp(param_2,PTR_s_pwrite_00b0df68);
                          if (iVar1 == 0) {
                            lVar2 = 0xc;
                          }
                          else {
                            iVar1 = strcmp(param_2,PTR_s_pwrite64_00b0df80);
                            if (iVar1 == 0) {
                              lVar2 = 0xd;
                            }
                            else {
                              iVar1 = strcmp(param_2,PTR_s_fchmod_00b0df98);
                              if (iVar1 == 0) {
                                lVar2 = 0xe;
                              }
                              else {
                                iVar1 = strcmp(param_2,PTR_s_fallocate_00b0dfb0);
                                if (iVar1 == 0) {
                                  lVar2 = 0xf;
                                }
                                else {
                                  iVar1 = strcmp(param_2,PTR_s_unlink_00b0dfc8);
                                  if (iVar1 == 0) {
                                    lVar2 = 0x10;
                                  }
                                  else {
                                    iVar1 = strcmp(param_2,PTR_s_openDirectory_00b0dfe0);
                                    if (iVar1 == 0) {
                                      lVar2 = 0x11;
                                    }
                                    else {
                                      iVar1 = strcmp(param_2,PTR_s_mkdir_00b0dff8);
                                      if (iVar1 == 0) {
                                        lVar2 = 0x12;
                                      }
                                      else {
                                        iVar1 = strcmp(param_2,PTR_s_rmdir_00b0e010);
                                        if (iVar1 == 0) {
                                          lVar2 = 0x13;
                                        }
                                        else {
                                          iVar1 = strcmp(param_2,PTR_s_fchown_00b0e028);
                                          if (iVar1 == 0) {
                                            lVar2 = 0x14;
                                          }
                                          else {
                                            iVar1 = strcmp(param_2,PTR_s_geteuid_00b0e040);
                                            if (iVar1 == 0) {
                                              lVar2 = 0x15;
                                            }
                                            else {
                                              iVar1 = strcmp(param_2,PTR_DAT_00b0e058);
                                              if (iVar1 == 0) {
                                                lVar2 = 0x16;
                                              }
                                              else {
                                                iVar1 = strcmp(param_2,PTR_s_munmap_00b0e070);
                                                if (iVar1 == 0) {
                                                  lVar2 = 0x17;
                                                }
                                                else {
                                                  iVar1 = strcmp(param_2,PTR_s_mremap_00b0e088);
                                                  if (iVar1 == 0) {
                                                    lVar2 = 0x18;
                                                  }
                                                  else {
                                                    iVar1 = strcmp(param_2,
                                                  PTR_s_getpagesize_00b0e0a0);
                                                  if (iVar1 == 0) {
                                                    lVar2 = 0x19;
                                                  }
                                                  else {
                                                    iVar1 = strcmp(param_2,PTR_s_readlink_00b0e0b8);
                                                    if (iVar1 == 0) {
                                                      lVar2 = 0x1a;
                                                    }
                                                    else {
                                                      iVar1 = strcmp(param_2,PTR_s_lstat_00b0e0d0);
                                                      if (iVar1 == 0) {
                                                        lVar2 = 0x1b;
                                                      }
                                                      else {
                                                        iVar1 = strcmp(param_2,PTR_s_ioctl_00b0e0e8)
                                                        ;
                                                        if (iVar1 != 0) {
                                                          return (undefined *)0x0;
                                                        }
                                                        lVar2 = 0x1c;
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
  return (&PTR_open_00b0de50)[lVar2 * 3];
}


// ===== 005895d8  FUN_005895d8 =====

undefined * FUN_005895d8(undefined8 param_1,char *param_2)

{
  undefined **ppuVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined **ppuVar6;
  
  if (param_2 == (char *)0x0) {
    lVar4 = -1;
  }
  else {
    iVar3 = strcmp(param_2,PTR_DAT_00b0de48);
    if (iVar3 == 0) {
      lVar4 = 0;
    }
    else {
      iVar3 = strcmp(param_2,PTR_s_close_00b0de60);
      if (iVar3 == 0) {
        lVar4 = 1;
      }
      else {
        iVar3 = strcmp(param_2,PTR_s_access_00b0de78);
        if (iVar3 == 0) {
          lVar4 = 2;
        }
        else {
          iVar3 = strcmp(param_2,PTR_s_getcwd_00b0de90);
          if (iVar3 == 0) {
            lVar4 = 3;
          }
          else {
            iVar3 = strcmp(param_2,PTR_DAT_00b0dea8);
            if (iVar3 == 0) {
              lVar4 = 4;
            }
            else {
              iVar3 = strcmp(param_2,PTR_s_fstat_00b0dec0);
              if (iVar3 == 0) {
                lVar4 = 5;
              }
              else {
                iVar3 = strcmp(param_2,PTR_s_ftruncate_00b0ded8);
                if (iVar3 == 0) {
                  lVar4 = 6;
                }
                else {
                  iVar3 = strcmp(param_2,PTR_s_fcntl_00b0def0);
                  if (iVar3 == 0) {
                    lVar4 = 7;
                  }
                  else {
                    iVar3 = strcmp(param_2,PTR_DAT_00b0df08);
                    if (iVar3 == 0) {
                      lVar4 = 8;
                    }
                    else {
                      iVar3 = strcmp(param_2,PTR_s_pread_00b0df20);
                      if (iVar3 == 0) {
                        lVar4 = 9;
                      }
                      else {
                        iVar3 = strcmp(param_2,PTR_s_pread64_00b0df38);
                        if (iVar3 == 0) {
                          lVar4 = 10;
                        }
                        else {
                          iVar3 = strcmp(param_2,PTR_s_write_00b0df50);
                          if (iVar3 == 0) {
                            lVar4 = 0xb;
                          }
                          else {
                            iVar3 = strcmp(param_2,PTR_s_pwrite_00b0df68);
                            if (iVar3 == 0) {
                              lVar4 = 0xc;
                            }
                            else {
                              iVar3 = strcmp(param_2,PTR_s_pwrite64_00b0df80);
                              if (iVar3 == 0) {
                                lVar4 = 0xd;
                              }
                              else {
                                iVar3 = strcmp(param_2,PTR_s_fchmod_00b0df98);
                                if (iVar3 == 0) {
                                  lVar4 = 0xe;
                                }
                                else {
                                  iVar3 = strcmp(param_2,PTR_s_fallocate_00b0dfb0);
                                  if (iVar3 == 0) {
                                    lVar4 = 0xf;
                                  }
                                  else {
                                    iVar3 = strcmp(param_2,PTR_s_unlink_00b0dfc8);
                                    if (iVar3 == 0) {
                                      lVar4 = 0x10;
                                    }
                                    else {
                                      iVar3 = strcmp(param_2,PTR_s_openDirectory_00b0dfe0);
                                      if (iVar3 == 0) {
                                        lVar4 = 0x11;
                                      }
                                      else {
                                        iVar3 = strcmp(param_2,PTR_s_mkdir_00b0dff8);
                                        if (iVar3 == 0) {
                                          lVar4 = 0x12;
                                        }
                                        else {
                                          iVar3 = strcmp(param_2,PTR_s_rmdir_00b0e010);
                                          if (iVar3 == 0) {
                                            lVar4 = 0x13;
                                          }
                                          else {
                                            iVar3 = strcmp(param_2,PTR_s_fchown_00b0e028);
                                            if (iVar3 == 0) {
                                              lVar4 = 0x14;
                                            }
                                            else {
                                              iVar3 = strcmp(param_2,PTR_s_geteuid_00b0e040);
                                              if (iVar3 == 0) {
                                                lVar4 = 0x15;
                                              }
                                              else {
                                                iVar3 = strcmp(param_2,PTR_DAT_00b0e058);
                                                if (iVar3 == 0) {
                                                  lVar4 = 0x16;
                                                }
                                                else {
                                                  iVar3 = strcmp(param_2,PTR_s_munmap_00b0e070);
                                                  if (iVar3 == 0) {
                                                    lVar4 = 0x17;
                                                  }
                                                  else {
                                                    iVar3 = strcmp(param_2,PTR_s_mremap_00b0e088);
                                                    if (iVar3 == 0) {
                                                      lVar4 = 0x18;
                                                    }
                                                    else {
                                                      iVar3 = strcmp(param_2,
                                                  PTR_s_getpagesize_00b0e0a0);
                                                  if (iVar3 == 0) {
                                                    lVar4 = 0x19;
                                                  }
                                                  else {
                                                    iVar3 = strcmp(param_2,PTR_s_readlink_00b0e0b8);
                                                    if (iVar3 == 0) {
                                                      lVar4 = 0x1a;
                                                    }
                                                    else {
                                                      iVar3 = strcmp(param_2,PTR_s_lstat_00b0e0d0);
                                                      lVar4 = 0x1b;
                                                      if (iVar3 != 0) {
                                                        lVar4 = 0x1c;
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
  uVar5 = lVar4 - 0x1d;
  ppuVar1 = &PTR_close_00b0de68 + lVar4 * 3;
  do {
    ppuVar6 = ppuVar1;
    bVar2 = 0xfffffffffffffffe < uVar5;
    uVar5 = uVar5 + 1;
    if (bVar2) {
      return (undefined *)0x0;
    }
    ppuVar1 = ppuVar6 + 3;
  } while (*ppuVar6 == (undefined *)0x0);
  return ppuVar6[-1];
}


// ===== 00589954  sqlite3_os_end =====

undefined8 sqlite3_os_end(void)

{
  DAT_00b10378 = 0;
  return 0;
}


// ===== 00589964  sqlite3_serialize =====

void * sqlite3_serialize(long param_1,byte *param_2,size_t *param_3,ulong param_4)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  long lVar6;
  char *pcVar7;
  undefined8 *puVar8;
  long *plVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  byte *pbVar13;
  byte *pbVar14;
  size_t sVar15;
  size_t *psVar16;
  size_t sVar17;
  void *__dest;
  long lVar18;
  undefined8 local_68;
  long *local_48;
  
  local_68 = 0;
  if (param_1 == 0) {
    pcVar7 = "NULL";
    goto LAB_00589ad4;
  }
  cVar1 = *(char *)(param_1 + 0x71);
  if (cVar1 != -0x46) {
    if (cVar1 == 'v') {
      if (param_2 == (byte *)0x0) {
        param_2 = (byte *)**(undefined8 **)(param_1 + 0x20);
      }
      local_48 = (long *)0x0;
      iVar3 = sqlite3_file_control(param_1,param_2,7,&local_48);
      plVar9 = (long *)0x0;
      if (iVar3 == 0) {
        if ((undefined *)*local_48 == &DAT_00ad2738) {
          lVar18 = local_48[1];
          if (*(long *)(lVar18 + 0x20) != 0) {
            (*DAT_00b0da70)();
          }
          if (*(long *)(lVar18 + 0x40) != 0) {
            local_48 = (long *)0x0;
          }
          plVar9 = local_48;
          if (*(long *)(lVar18 + 0x20) != 0) {
            (*DAT_00b0da80)();
            plVar9 = local_48;
          }
          goto joined_r0x00589d7c;
        }
        plVar9 = (long *)0x0;
        if (param_2 == (byte *)0x0) goto LAB_00589bb0;
LAB_00589a04:
        uVar12 = *(int *)(param_1 + 0x28) - 1;
        uVar11 = (ulong)uVar12;
        if (0 < *(int *)(param_1 + 0x28)) {
          puVar8 = (undefined8 *)(*(long *)(param_1 + 0x20) + uVar11 * 0x20);
          do {
            uVar10 = (uint)uVar11;
            pbVar13 = (byte *)*puVar8;
            pbVar14 = param_2;
            if (pbVar13 != (byte *)0x0) {
              do {
                bVar2 = *pbVar13;
                if (bVar2 == *pbVar14) {
                  uVar12 = uVar10;
                  if (bVar2 == 0) goto joined_r0x00589ac4;
                }
                else if ((&DAT_002c78ae)[bVar2] != (&DAT_002c78ae)[*pbVar14]) break;
                pbVar13 = pbVar13 + 1;
                pbVar14 = pbVar14 + 1;
              } while( true );
            }
            pbVar13 = param_2;
            pbVar14 = &DAT_002aeb89;
            if (uVar10 == 0) {
              do {
                bVar2 = *pbVar14;
                if (bVar2 == *pbVar13) {
                  if (bVar2 == 0) {
                    uVar12 = 0;
                    goto joined_r0x00589ac4;
                  }
                }
                else if ((&DAT_002c78ae)[bVar2] != (&DAT_002c78ae)[*pbVar13]) break;
                pbVar13 = pbVar13 + 1;
                pbVar14 = pbVar14 + 1;
              } while( true );
            }
            uVar11 = (ulong)(uVar10 - 1);
            puVar8 = puVar8 + -4;
            uVar12 = 0xffffffff;
          } while (0 < (int)uVar10);
        }
      }
      else {
joined_r0x00589d7c:
        if (param_2 != (byte *)0x0) goto LAB_00589a04;
LAB_00589bb0:
        uVar12 = 0xffffffff;
      }
joined_r0x00589ac4:
      if (param_3 != (size_t *)0x0) {
        *param_3 = 0xffffffffffffffff;
      }
      if ((int)uVar12 < 0) {
        return (void *)0x0;
      }
      if (plVar9 != (long *)0x0) {
        psVar16 = (size_t *)plVar9[1];
        if (param_3 != (size_t *)0x0) {
          *param_3 = *psVar16;
        }
        if ((param_4 & 1) != 0) {
          return (void *)psVar16[3];
        }
        sVar15 = *psVar16;
        iVar3 = sqlite3_initialize();
        if (iVar3 != 0) {
          return (void *)0x0;
        }
        pvVar5 = (void *)FUN_005827b0(sVar15);
        if (pvVar5 != (void *)0x0) {
          memcpy(pvVar5,(void *)psVar16[3],*psVar16);
          return pvVar5;
        }
        return (void *)0x0;
      }
      lVar18 = *(long *)(*(long *)(param_1 + 0x20) + (ulong)uVar12 * 0x20 + 8);
      if (lVar18 == 0) {
        return (void *)0x0;
      }
      sVar15 = (size_t)*(int *)(*(long *)(lVar18 + 8) + 0x34);
      lVar6 = sqlite3_mprintf("PRAGMA \"%w\".page_count");
      if (lVar6 == 0) {
        return (void *)0x0;
      }
      iVar3 = FUN_00598a9c(param_1,lVar6,0xffffffff,0x80,0,&local_68,0);
      puVar8 = &DAT_00b0da18;
      if (DAT_00b0d9f0 == 0) {
LAB_00589c88:
        (*(code *)*puVar8)(lVar6);
      }
      else {
        if (DAT_00b103d8 != 0) {
          (*DAT_00b0da70)();
        }
        iVar4 = (*DAT_00b0da28)(lVar6);
        DAT_00b105b8 = DAT_00b105b8 - iVar4;
        DAT_00b10600 = DAT_00b10600 + -1;
        (*DAT_00b0da18)(lVar6);
        if (DAT_00b103d8 != 0) {
          puVar8 = &DAT_00b0da80;
          lVar6 = DAT_00b103d8;
          goto LAB_00589c88;
        }
      }
      if (iVar3 != 0) {
        return (void *)0x0;
      }
      iVar3 = sqlite3_step(local_68);
      if (iVar3 == 100) {
        lVar6 = sqlite3_column_int64(local_68,0);
        sVar17 = lVar6 * sVar15;
        if (sVar17 == 0) {
          sqlite3_reset(local_68);
          sqlite3_exec(param_1,"BEGIN IMMEDIATE; COMMIT;",0,0,0);
          iVar3 = sqlite3_step(local_68);
          if (iVar3 == 100) {
            lVar6 = sqlite3_column_int64(local_68,0);
            sVar17 = lVar6 * sVar15;
          }
        }
        if (param_3 != (size_t *)0x0) {
          *param_3 = sVar17;
        }
        if ((((param_4 & 1) == 0) && (iVar3 = sqlite3_initialize(), iVar3 == 0)) &&
           (pvVar5 = (void *)FUN_005827b0(sVar17), pvVar5 != (void *)0x0)) {
          iVar3 = sqlite3_column_int(local_68,0);
          if (0 < iVar3) {
            uVar11 = 1;
            lVar18 = **(long **)(lVar18 + 8);
            __dest = pvVar5;
            do {
              local_48 = (long *)0x0;
              iVar4 = (**(code **)(lVar18 + 0x110))(lVar18,uVar11 & 0xffffffff,&local_48,0);
              plVar9 = local_48;
              if (iVar4 == 0) {
                memcpy(__dest,(void *)local_48[1],sVar15);
LAB_00589e28:
                if ((*(ushort *)((long)plVar9 + 0x34) >> 5 & 1) == 0) {
                  FUN_005ac2a8(plVar9);
                }
                else {
                  lVar6 = plVar9[5];
                  *(int *)(lVar6 + 0x98) = *(int *)(lVar6 + 0x98) + -1;
                  plVar9[4] = *(long *)(lVar6 + 0xa8);
                  *(long **)(lVar6 + 0xa8) = plVar9;
                  (**(code **)(**(long **)(lVar6 + 0x48) + 0x90))
                            (*(long **)(lVar6 + 0x48),
                             *(long *)(lVar6 + 200) * (ulong)((int)plVar9[6] - 1),plVar9[1]);
                }
              }
              else {
                memset(__dest,0,sVar15);
                plVar9 = local_48;
                if (local_48 != (long *)0x0) goto LAB_00589e28;
              }
              uVar11 = uVar11 + 1;
              __dest = (void *)((long)__dest + sVar15);
            } while (iVar3 + 1 != uVar11);
          }
          goto LAB_00589d18;
        }
      }
      pvVar5 = (void *)0x0;
LAB_00589d18:
      sqlite3_finalize(local_68);
      return pvVar5;
    }
    if (cVar1 != 'm') {
      pcVar7 = "invalid";
      goto LAB_00589ad4;
    }
  }
  pcVar7 = "unopened";
LAB_00589ad4:
  sqlite3_log(0x15,"API call with %s database connection pointer",pcVar7);
  sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0xd535,
              "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
  return (void *)0x0;
}


// ===== 00589e74  sqlite3_prepare_v2 =====

void sqlite3_prepare_v2(void)

{
  FUN_00598a9c();
  return;
}


// ===== 00589e88  sqlite3_step =====

/* WARNING: Type propagation algorithm not settling */

uint sqlite3_step(long *param_1,ulong param_2)

{
  int iVar1;
  long *plVar2;
  char cVar3;
  byte bVar4;
  ushort uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  size_t sVar13;
  void *__dest;
  int iVar14;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  ulong extraout_x1_03;
  ulong extraout_x1_04;
  ulong extraout_x1_05;
  undefined1 *puVar15;
  undefined1 *puVar16;
  long lVar17;
  undefined4 *puVar18;
  short *psVar19;
  undefined8 *puVar20;
  undefined4 uVar21;
  int iVar22;
  ulong uVar23;
  long *plVar24;
  ulong uVar25;
  long lVar26;
  int iVar27;
  int iVar28;
  long lVar29;
  long lVar30;
  undefined8 uVar31;
  uint *puVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  char *pcVar36;
  uint uVar37;
  int iVar38;
  ulong uVar39;
  undefined8 *puVar40;
  double local_90;
  long lStack_88;
  uint local_80;
  undefined8 local_7c;
  undefined2 local_74;
  
  if (param_1 == (long *)0x0) {
    pcVar36 = "API called with NULL prepared statement";
LAB_0058af88:
    sqlite3_log(0x15,pcVar36);
    sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x168c9,
                "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
    return 0x15;
  }
  lVar17 = *param_1;
  if (lVar17 == 0) {
    pcVar36 = "API called with finalized prepared statement";
    goto LAB_0058af88;
  }
  if (*(long *)(lVar17 + 0x18) != 0) {
    (*DAT_00b0da70)();
    param_2 = extraout_x1;
  }
  uVar7 = DAT_002a11d8;
  plVar2 = param_1 + 0x11;
  iVar11 = 0;
LAB_00589efc:
  cVar3 = *(char *)((long)param_1 + 199);
  puVar40 = (undefined8 *)*param_1;
  if (cVar3 != '\x02') {
    while (cVar3 == '\x03') {
      lVar33 = *param_1;
      if (*(long *)(lVar33 + 0x18) != 0) {
        (*DAT_00b0da70)();
      }
      if (0 < param_1[0x17]) {
        FUN_0058f57c(lVar33,param_1);
      }
      uVar8 = FUN_0058f640(param_1);
      param_2 = (ulong)uVar8;
      *(undefined1 *)((long)param_1 + 199) = 1;
      param_1[6] = 0xffffffff;
      *(undefined2 *)((long)param_1 + 0xc4) = 0xff02;
      param_1[7] = 0;
      *(undefined4 *)((long)param_1 + 0x2c) = 1;
      *(undefined4 *)(param_1 + 8) = 0;
      param_1[10] = 0;
      if ((uVar8 != 0) || (*(char *)(lVar33 + 0x67) != '\0')) {
        FUN_005c1188(lVar33);
        param_2 = extraout_x1_00;
      }
      if (*(long *)(lVar33 + 0x18) != 0) {
        (*DAT_00b0da80)();
        param_2 = extraout_x1_01;
      }
      cVar3 = *(char *)((long)param_1 + 199);
    }
    if (cVar3 != '\x01') goto LAB_0058a090;
    if ((*(ushort *)(param_1 + 0x19) & 3) == 0) {
      if (*(int *)(puVar40 + 0x1a) == 0) {
        *(undefined4 *)(puVar40 + 0x32) = 0;
      }
      if ((((*(byte *)((long)puVar40 + 0x6e) & 0x82) != 0) &&
          (*(char *)((long)puVar40 + 0xc5) == '\0')) && (param_1[0x1f] != 0)) {
        piVar12 = (int *)*puVar40;
        if ((*piVar12 < 2) || (*(code **)(piVar12 + 0x22) == (code *)0x0)) {
          (**(code **)(piVar12 + 0x1e))(piVar12,&local_90);
          param_1[0x17] = (long)(local_90 * 86400000.0);
          param_2 = extraout_x1_03;
        }
        else {
          (**(code **)(piVar12 + 0x22))(piVar12,param_1 + 0x17);
          param_2 = extraout_x1_02;
        }
      }
      *(int *)(puVar40 + 0x1a) = *(int *)(puVar40 + 0x1a) + 1;
      uVar5 = *(ushort *)(param_1 + 0x19);
      if ((uVar5 >> 6 & 1) == 0) {
        *(int *)(puVar40 + 0x1b) = *(int *)(puVar40 + 0x1b) + 1;
        uVar5 = *(ushort *)(param_1 + 0x19);
      }
      if ((uVar5 >> 7 & 1) != 0) {
        *(int *)((long)puVar40 + 0xd4) = *(int *)((long)puVar40 + 0xd4) + 1;
      }
      *(undefined4 *)(param_1 + 6) = 0;
      *(undefined1 *)((long)param_1 + 199) = 2;
      goto LAB_0058a090;
    }
    *(undefined4 *)((long)param_1 + 0x34) = 0x11;
    if (*(char *)((long)param_1 + 0xc6) < '\0') {
      uVar8 = FUN_005bce24(param_1);
    }
    else {
      uVar8 = 1;
    }
    goto LAB_0058adb4;
  }
LAB_0058a090:
  if ((*(ushort *)(param_1 + 0x19) & 0xc) == 0) {
    *(int *)((long)puVar40 + 0xdc) = *(int *)((long)puVar40 + 0xdc) + 1;
    uVar8 = FUN_005c32b4(param_1,param_2);
    *(int *)((long)puVar40 + 0xdc) = *(int *)((long)puVar40 + 0xdc) + -1;
    if (uVar8 == 100) goto LAB_0058b098;
    goto LAB_0058ac48;
  }
  lVar35 = param_1[0xd];
  lVar34 = *param_1;
  lVar33 = lVar35 + 0x38;
  if ((*(ushort *)(param_1 + 0x19) & 0xc) == 4) {
    FUN_005bba38(lVar33,8);
    if (*(int *)((long)param_1 + 0x34) != 7) {
LAB_0058a184:
      lVar30 = param_1[0xd];
      iVar10 = (int)param_1[0x12];
      if ((*(ushort *)(lVar30 + 0x20c) >> 4 & 1) == 0) {
        uVar39 = 0;
        puVar20 = (undefined8 *)0x0;
      }
      else {
        uVar8 = *(int *)(lVar30 + 0x208) >> 3;
        uVar39 = (ulong)uVar8;
        puVar20 = *(undefined8 **)(lVar30 + 0x200);
        if (0 < (int)uVar8) {
          if (uVar8 != 1) {
            uVar25 = 0;
            iVar38 = 0;
            uVar23 = uVar39 & 0x7ffffffe;
            do {
              plVar24 = puVar20 + uVar25;
              uVar25 = uVar25 + 2;
              iVar10 = *(int *)(*plVar24 + 8) + iVar10;
              iVar38 = *(int *)(plVar24[1] + 8) + iVar38;
              if (uVar23 == uVar25) goto LAB_0058af68;
            } while( true );
          }
          uVar23 = 0;
          do {
            plVar24 = puVar20 + uVar23;
            uVar23 = uVar23 + 1;
            iVar38 = *(int *)(*plVar24 + 8);
LAB_0058af68:
            iVar10 = iVar38 + iVar10;
          } while (uVar39 != uVar23);
        }
      }
      iVar14 = (int)param_1[6];
      iVar1 = iVar14 + 1;
      iVar38 = iVar1;
      if (iVar14 < iVar10) {
        uVar5 = *(ushort *)(param_1 + 0x19);
        do {
          iVar22 = iVar38;
          iVar38 = iVar14 - (int)param_1[0x12];
          plVar24 = plVar2;
          iVar27 = iVar14;
          if ((int)param_1[0x12] <= iVar14) {
            plVar24 = (long *)*puVar20;
            iVar28 = (int)plVar24[1];
            puVar6 = puVar20;
            iVar27 = iVar38;
            if (iVar28 <= iVar38) {
              do {
                plVar24 = (long *)puVar6[1];
                iVar38 = iVar38 - iVar28;
                iVar28 = (int)plVar24[1];
                puVar6 = puVar6 + 1;
                iVar27 = iVar38;
              } while (iVar28 <= iVar38);
            }
          }
          lVar29 = *plVar24;
          if (*(char *)(lVar29 + (long)iVar27 * 0x18 + 1) == -4) {
            iVar38 = (int)uVar39;
            if (iVar38 < 1) {
              uVar25 = 0;
LAB_0058ab58:
              if ((int)uVar25 != iVar38) goto LAB_0058abec;
            }
            else {
              uVar25 = 0;
              do {
                if (puVar20[uVar25] == *(long *)(lVar29 + (long)iVar27 * 0x18 + 0x10))
                goto LAB_0058ab58;
                uVar25 = uVar25 + 1;
              } while (uVar39 != uVar25);
            }
            iVar28 = (iVar38 + 1U) * 8;
            iVar9 = FUN_005c13c0(lVar30 + 0x1f8,iVar28,iVar38 != 0);
            *(int *)((long)param_1 + 0x34) = iVar9;
            if (iVar9 != 0) {
              uVar8 = 1;
              goto LAB_0058ac30;
            }
            lVar26 = lVar29 + (long)iVar27 * 0x18;
            puVar20 = *(undefined8 **)(lVar30 + 0x200);
            puVar20[iVar38] = *(undefined8 *)(lVar26 + 0x10);
            uVar39 = (ulong)(iVar38 + 1U);
            *(int *)(lVar30 + 0x208) = iVar28;
            *(ushort *)(lVar30 + 0x20c) = *(ushort *)(lVar30 + 0x20c) & 0xf240 | 0x10;
            iVar10 = *(int *)(*(long *)(lVar26 + 0x10) + 8) + iVar10;
          }
LAB_0058abec:
          iVar38 = iVar1;
          if ((((uVar5 & 0xc) != 8) ||
              (cVar3 = *(char *)(lVar29 + (long)iVar27 * 0x18), iVar38 = iVar22, cVar3 == -0x44)) ||
             ((0 < iVar14 && (cVar3 == '\b')))) {
            *(int *)(param_1 + 6) = iVar38;
            iVar10 = *(int *)(lVar34 + 400);
            goto joined_r0x0058a1e4;
          }
          iVar38 = iVar22 + 1;
          iVar14 = iVar22;
        } while (iVar22 < iVar10);
      }
      goto LAB_0058ac28;
    }
LAB_0058a11c:
    if (*(char *)(lVar34 + 0x67) == '\0') {
      if (*(char *)(lVar34 + 0x68) == '\0') {
        *(undefined1 *)(lVar34 + 0x67) = 1;
        if (0 < *(int *)(lVar34 + 0xdc)) {
          *(undefined4 *)(lVar34 + 400) = 1;
        }
        *(undefined2 *)(lVar34 + 0x19c) = 0;
        *(int *)(lVar34 + 0x198) = *(int *)(lVar34 + 0x198) + 1;
        if (*(long *)(lVar34 + 0x158) != 0) {
          FUN_00595b78(*(long *)(lVar34 + 0x158),"out of memory");
          lVar33 = *(long *)(*(long *)(lVar34 + 0x158) + 0xd8);
          *(undefined4 *)(*(long *)(lVar34 + 0x158) + 0x18) = 7;
          if (lVar33 != 0) {
            do {
              uVar8 = 1;
              *(int *)(lVar33 + 0x34) = *(int *)(lVar33 + 0x34) + 1;
              *(undefined4 *)(lVar33 + 0x18) = 7;
              lVar33 = *(long *)(lVar33 + 0xd8);
            } while (lVar33 != 0);
            goto LAB_0058ac48;
          }
        }
      }
      uVar8 = 1;
      lVar33 = param_1[0x17];
    }
    else {
      uVar8 = 1;
      lVar33 = param_1[0x17];
    }
    goto joined_r0x0058a204;
  }
  uVar31 = *(undefined8 *)(lVar34 + 0x30);
  FUN_005bba38(lVar33,8);
  if (*(int *)((long)param_1 + 0x34) == 7) goto LAB_0058a11c;
  if (((uint)uVar31 >> 0x18 & 1) != 0) goto LAB_0058a184;
  iVar10 = (int)param_1[0x12];
  iVar27 = (int)param_1[6];
  iVar38 = iVar27 + 1;
  if (iVar10 <= iVar27) {
LAB_0058ac28:
    uVar8 = 0x65;
    *(undefined4 *)((long)param_1 + 0x34) = 0;
    iVar22 = iVar38;
LAB_0058ac30:
    *(int *)(param_1 + 6) = iVar22;
    goto LAB_0058ac48;
  }
  if ((*(ushort *)(param_1 + 0x19) & 0xc) == 8) {
    lVar30 = (long)iVar27;
    lVar29 = *plVar2;
    lVar26 = lVar30 * 0x18;
    iVar38 = iVar10 + 1;
    do {
      if ((*(char *)(lVar29 + lVar26) == -0x44) ||
         ((0 < lVar30 && (*(char *)(lVar29 + lVar26) == '\b')))) {
        iVar27 = (int)lVar30;
        *(int *)(param_1 + 6) = iVar27 + 1;
        iVar10 = *(int *)(lVar34 + 400);
        goto joined_r0x0058a1e4;
      }
      lVar30 = lVar30 + 1;
      lVar26 = lVar26 + 0x18;
    } while (iVar10 != (int)lVar30);
    goto LAB_0058ac28;
  }
  lVar29 = *plVar2;
  *(int *)(param_1 + 6) = iVar38;
  iVar10 = *(int *)(lVar34 + 400);
joined_r0x0058a1e4:
  if (iVar10 != 0) {
    *(undefined4 *)((long)param_1 + 0x34) = 9;
    FUN_005c0890(param_1,"interrupted");
    uVar8 = 1;
    lVar33 = param_1[0x17];
    goto joined_r0x0058a204;
  }
  local_80 = 0;
  local_7c = uVar7;
  local_74 = 0;
  lStack_88 = 0;
  local_90 = 0.0;
  pcVar36 = "program";
  switch(*(undefined1 *)(lVar29 + (long)iVar27 * 0x18 + 1)) {
  case 0xffffffef:
    puVar18 = *(undefined4 **)(lVar29 + (long)iVar27 * 0x18 + 0x10);
    sqlite3_str_appendf(&local_90,"subrtnsig:%d,%s",*puVar18,*(undefined8 *)(puVar18 + 2));
    break;
  default:
    plVar24 = (long *)(lVar29 + (long)iVar27 * 0x18 + 0x10);
    goto LAB_0058a67c;
  case 0xfffffff1:
    psVar19 = *(short **)(*(long *)(lVar29 + (long)iVar27 * 0x18 + 0x10) + 8);
    goto LAB_0058a538;
  case 0xfffffff2:
    puVar32 = *(uint **)(lVar29 + (long)iVar27 * 0x18 + 0x10);
    uVar8 = *puVar32;
    if (uVar8 != 0) {
      uVar37 = 1;
      do {
        uVar21 = 0x5b;
        if (uVar37 != 1) {
          uVar21 = 0x2c;
        }
        sqlite3_str_appendf(&local_90,&DAT_002adfad,uVar21,puVar32[uVar37]);
        uVar37 = uVar37 + 1;
      } while (uVar37 <= uVar8);
      uVar39 = (ulong)local_7c._4_4_;
      if (local_7c._4_4_ + 1 < local_80) {
        local_7c = CONCAT44(local_7c._4_4_ + 1,(int)local_7c);
        *(undefined1 *)(lStack_88 + uVar39) = 0x5d;
        break;
      }
    }
    FUN_00586adc(&local_90,&DAT_002b2166,1);
    break;
  case 0xfffffff3:
    puVar20 = *(undefined8 **)(lVar29 + (long)iVar27 * 0x18 + 0x10);
LAB_0058a514:
    sqlite3_str_appendf(&local_90,&DAT_002a46e4,*puVar20);
    break;
  case 0xfffffff4:
    puVar20 = *(undefined8 **)(lVar29 + (long)iVar27 * 0x18 + 0x10);
LAB_0058a3f4:
    sqlite3_str_appendf(*puVar20,&local_90,"%.16g");
    break;
  case 0xfffffff5:
    sqlite3_str_appendf(&local_90,"vtab:%p",
                        *(undefined8 *)(*(long *)(lVar29 + (long)iVar27 * 0x18 + 0x10) + 0x10));
    break;
  case 0xfffffff6:
    puVar20 = *(undefined8 **)(lVar29 + (long)iVar27 * 0x18 + 0x10);
    uVar5 = *(ushort *)((long)puVar20 + 0x14);
    if ((uVar5 >> 1 & 1) != 0) {
      plVar24 = puVar20 + 1;
      goto LAB_0058a67c;
    }
    if ((uVar5 & 0x24) != 0) goto LAB_0058a514;
    if ((uVar5 >> 3 & 1) != 0) goto LAB_0058a3f4;
    pcVar36 = "(blob)";
    if ((uVar5 & 1) != 0) {
      pcVar36 = "NULL";
    }
  case 0xfffffffc:
switchD_0058a35c_caseD_fffffffc:
    sVar13 = strlen(pcVar36);
    FUN_00586adc(&local_90,pcVar36,(uint)sVar13 & 0x3fffffff);
    break;
  case 0xfffffff8:
    lVar30 = *(long *)(lVar29 + (long)iVar27 * 0x18 + 0x10);
    sqlite3_str_appendf(&local_90,&DAT_002ac4a2,*(undefined2 *)(lVar30 + 6));
    if (*(short *)(lVar30 + 6) != 0) {
      uVar39 = 0;
      do {
        puVar20 = *(undefined8 **)(lVar30 + 0x20 + uVar39 * 8);
        if (puVar20 == (undefined8 *)0x0) {
          pcVar36 = "";
          iVar10 = strcmp("","B");
        }
        else {
          pcVar36 = (char *)*puVar20;
          iVar10 = strcmp(pcVar36,"B");
        }
        if (iVar10 == 0) {
          pcVar36 = "B";
        }
        bVar4 = *(byte *)(*(long *)(lVar30 + 0x18) + uVar39);
        if ((bVar4 & 1) == 0) {
          puVar15 = &DAT_002a8138;
          if ((bVar4 >> 1 & 1) == 0) goto LAB_0058a608;
LAB_0058a59c:
          puVar16 = &DAT_002ac4af;
        }
        else {
          puVar15 = &DAT_002b68c9;
          if ((bVar4 >> 1 & 1) != 0) goto LAB_0058a59c;
LAB_0058a608:
          puVar16 = &DAT_002a8138;
        }
        sqlite3_str_appendf(&local_90,",%s%s%s",puVar15,puVar16,pcVar36);
        uVar39 = uVar39 + 1;
      } while (uVar39 < *(ushort *)(lVar30 + 6));
    }
    uVar39 = (ulong)local_7c._4_4_;
    if (local_7c._4_4_ + 1 < local_80) {
      local_7c = CONCAT44(local_7c._4_4_ + 1,(int)local_7c);
      *(undefined1 *)(lStack_88 + uVar39) = 0x29;
    }
    else {
      FUN_00586adc(&local_90,&DAT_002ab6ff,1);
    }
    break;
  case 0xfffffff9:
    psVar19 = *(short **)(lVar29 + (long)iVar27 * 0x18 + 0x10);
LAB_0058a538:
    sqlite3_str_appendf(&local_90,"%s(%d)",*(undefined8 *)(psVar19 + 0x1c),(long)*psVar19);
    break;
  case 0xfffffffb:
    plVar24 = *(long **)(lVar29 + (long)iVar27 * 0x18 + 0x10);
LAB_0058a67c:
    pcVar36 = (char *)*plVar24;
    if ((char *)*plVar24 != (char *)0x0) goto switchD_0058a35c_caseD_fffffffc;
    break;
  case 0xfffffffd:
    sqlite3_str_appendf(&local_90,&DAT_002b3e52,*(undefined4 *)(lVar29 + (long)iVar27 * 0x18 + 0x10)
                       );
    break;
  case 0xfffffffe:
    puVar20 = *(undefined8 **)(lVar29 + (long)iVar27 * 0x18 + 0x10);
    sqlite3_str_appendf(&local_90,"%.18s-%s",*puVar20,
                        &DAT_002c8208 + *(int *)(&DAT_002c8208 + (ulong)*(byte *)(puVar20 + 1) * 4))
    ;
  }
  if ((((local_74 & 7) != 0) && (*(char *)(lVar34 + 0x67) == '\0')) &&
     (*(char *)(lVar34 + 0x68) == '\0')) {
    *(undefined1 *)(lVar34 + 0x67) = 1;
    if (0 < *(int *)(lVar34 + 0xdc)) {
      *(undefined4 *)(lVar34 + 400) = 1;
    }
    *(undefined2 *)(lVar34 + 0x19c) = 0;
    *(int *)(lVar34 + 0x198) = *(int *)(lVar34 + 0x198) + 1;
    if (*(long *)(lVar34 + 0x158) != 0) {
      FUN_00595b78(*(long *)(lVar34 + 0x158),"out of memory");
      lVar30 = *(long *)(*(long *)(lVar34 + 0x158) + 0xd8);
      *(undefined4 *)(*(long *)(lVar34 + 0x158) + 0x18) = 7;
      for (; lVar30 != 0; lVar30 = *(long *)(lVar30 + 0xd8)) {
        *(int *)(lVar30 + 0x34) = *(int *)(lVar30 + 0x34) + 1;
        *(undefined4 *)(lVar30 + 0x18) = 7;
      }
    }
  }
  if (lStack_88 == 0) {
LAB_0058a72c:
    lVar30 = lStack_88;
    if ((*(ushort *)(param_1 + 0x19) & 0xc) == 8) goto LAB_0058a744;
LAB_0058a704:
    if ((*(ushort *)(lVar35 + 0x4c) & 0x9000) == 0) {
      *(long *)(lVar35 + 0x38) = (long)iVar27;
      *(undefined2 *)(lVar35 + 0x4c) = 4;
    }
    else {
      FUN_005c2a94(lVar33,(long)iVar27);
    }
    FUN_00590724(lVar35 + 0x70,
                 &DAT_002c8218 +
                 *(int *)(&DAT_002c8218 + (ulong)*(byte *)(lVar29 + (long)iVar27 * 0x18) * 4),
                 0xffffffffffffffff,1,0);
    if ((*(ushort *)(lVar35 + 0xbc) & 0x9000) == 0) {
      *(long *)(lVar35 + 0xa8) = (long)*(int *)(lVar29 + (long)iVar27 * 0x18 + 4);
      *(undefined2 *)(lVar35 + 0xbc) = 4;
    }
    else {
      FUN_005c2a94(lVar35 + 0xa8);
    }
    if ((*(ushort *)(lVar35 + 0xf4) & 0x9000) == 0) {
      *(long *)(lVar35 + 0xe0) = (long)*(int *)(lVar29 + (long)iVar27 * 0x18 + 8);
      *(undefined2 *)(lVar35 + 0xf4) = 4;
    }
    else {
      FUN_005c2a94(lVar35 + 0xe0);
    }
    if ((*(ushort *)(lVar35 + 300) & 0x9000) == 0) {
      *(long *)(lVar35 + 0x118) = (long)*(int *)(lVar29 + (long)iVar27 * 0x18 + 0xc);
      *(undefined2 *)(lVar35 + 300) = 4;
    }
    else {
      FUN_005c2a94(lVar35 + 0x118);
    }
    if ((*(ushort *)(lVar35 + 0x19c) & 0x9000) == 0) {
      *(ulong *)(lVar35 + 0x188) = (ulong)*(ushort *)(lVar29 + (long)iVar27 * 0x18 + 2);
      *(undefined2 *)(lVar35 + 0x19c) = 4;
      if ((*(ushort *)(lVar35 + 0x1d4) & 0x9000) != 0) goto LAB_0058a930;
LAB_0058a958:
      *(undefined2 *)(lVar35 + 0x1d4) = 1;
    }
    else {
      FUN_005c2a94(lVar35 + 0x188);
      if ((*(ushort *)(lVar35 + 0x1d4) & 0x9000) == 0) goto LAB_0058a958;
LAB_0058a930:
      FUN_005c1258(lVar35 + 0x1c0);
    }
    lVar29 = 6;
  }
  else {
    *(undefined1 *)(lStack_88 + (local_7c >> 0x20)) = 0;
    if (((int)local_7c == 0) || ((local_74._1_1_ >> 2 & 1) != 0)) goto LAB_0058a72c;
    lVar30 = FUN_005a7ad8(&local_90);
    if ((*(ushort *)(param_1 + 0x19) & 0xc) != 8) goto LAB_0058a704;
LAB_0058a744:
    if ((*(ushort *)(lVar35 + 0x4c) & 0x9000) == 0) {
      *(long *)(lVar35 + 0x38) = (long)*(int *)(lVar29 + (long)iVar27 * 0x18 + 4);
      *(undefined2 *)(lVar35 + 0x4c) = 4;
    }
    else {
      FUN_005c2a94(lVar33);
    }
    if ((*(ushort *)(lVar35 + 0x84) & 0x9000) == 0) {
      *(long *)(lVar35 + 0x70) = (long)*(int *)(lVar29 + (long)iVar27 * 0x18 + 8);
      *(undefined2 *)(lVar35 + 0x84) = 4;
    }
    else {
      FUN_005c2a94(lVar35 + 0x70);
    }
    if ((*(ushort *)(lVar35 + 0xbc) & 0x9000) == 0) {
      *(long *)(lVar35 + 0xa8) = (long)*(int *)(lVar29 + (long)iVar27 * 0x18 + 0xc);
      lVar29 = 4;
      *(undefined2 *)(lVar35 + 0xbc) = 4;
    }
    else {
      FUN_005c2a94(lVar35 + 0xa8);
      lVar29 = 4;
    }
  }
  uVar8 = 1;
  FUN_00590724(lVar35 + lVar29 * 0x38,lVar30,0xffffffffffffffff,1,PTR_sqlite3_free_00b00da8);
  param_1[0x14] = lVar33;
  cVar3 = *(char *)(lVar34 + 0x67);
  uVar21 = 0;
  if (cVar3 != '\0') {
    uVar21 = 7;
  }
  *(undefined4 *)((long)param_1 + 0x34) = uVar21;
  if (cVar3 == '\0') {
LAB_0058b098:
    uVar8 = 100;
    *(undefined4 *)(puVar40 + 10) = 100;
    lVar17 = *(long *)(lVar17 + 0x18);
    goto joined_r0x0058afcc;
  }
LAB_0058ac48:
  lVar33 = param_1[0x17];
joined_r0x0058a204:
  if (0 < lVar33) {
    FUN_0058f57c(puVar40,param_1);
  }
  param_1[0x14] = 0;
  if (uVar8 == 0x65) {
    if (*(char *)((long)puVar40 + 0x65) == '\0') {
      *(undefined4 *)(puVar40 + 10) = 0x65;
      iVar10 = *(int *)((long)param_1 + 0x34);
      lVar33 = *param_1;
    }
    else {
      if (*(int *)(puVar40 + 5) < 1) {
        *(undefined4 *)((long)param_1 + 0x34) = 0;
      }
      else {
        lVar35 = 0;
        lVar33 = 0;
        iVar10 = 0;
        do {
          lVar34 = *(long *)(puVar40[4] + lVar35 + 8);
          if (lVar34 != 0) {
            if ((*(char *)(lVar34 + 0x11) == '\0') ||
               (*(int *)(lVar34 + 0x14) = *(int *)(lVar34 + 0x14) + 1,
               *(char *)(lVar34 + 0x12) != '\0')) {
              lVar30 = *(long *)(**(long **)(lVar34 + 8) + 0x128);
              if (lVar30 == 0) goto LAB_0058ad10;
LAB_0058ace4:
              iVar38 = *(int *)(lVar30 + 0x18);
              *(undefined4 *)(lVar30 + 0x18) = 0;
              cVar3 = *(char *)(lVar34 + 0x11);
            }
            else {
              FUN_005ac65c(lVar34);
              lVar30 = *(long *)(**(long **)(lVar34 + 8) + 0x128);
              if (lVar30 != 0) goto LAB_0058ace4;
LAB_0058ad10:
              iVar38 = 0;
              cVar3 = *(char *)(lVar34 + 0x11);
            }
            if ((cVar3 != '\0') &&
               (iVar1 = *(int *)(lVar34 + 0x14) + -1, *(int *)(lVar34 + 0x14) = iVar1, iVar1 == 0))
            {
              FUN_005ac750(lVar34);
            }
            if (((0 < iVar38) && (iVar10 == 0)) && ((code *)puVar40[0x2c] != (code *)0x0)) {
              iVar10 = (*(code *)puVar40[0x2c])
                                 (puVar40[0x2d],puVar40,*(undefined8 *)(puVar40[4] + lVar35),iVar38)
              ;
            }
          }
          lVar33 = lVar33 + 1;
          lVar35 = lVar35 + 0x20;
        } while (lVar33 < *(int *)(puVar40 + 5));
        *(int *)((long)param_1 + 0x34) = iVar10;
        if (iVar10 != 0) {
          uVar8 = 1;
          *(undefined4 *)(puVar40 + 10) = 1;
          iVar10 = *(int *)((long)param_1 + 0x34);
          lVar33 = *param_1;
          goto joined_r0x0058aecc;
        }
      }
      *(undefined4 *)(puVar40 + 10) = 0x65;
      iVar10 = *(int *)((long)param_1 + 0x34);
      lVar33 = *param_1;
    }
    uVar8 = 0x65;
joined_r0x0058ad88:
    if (iVar10 != 0) goto LAB_0058ad94;
LAB_0058ad8c:
    if (*(char *)(lVar33 + 0x67) != '\0') goto LAB_0058ad94;
  }
  else {
    if (-1 < *(char *)((long)param_1 + 0xc6)) {
      *(uint *)(puVar40 + 10) = uVar8;
      iVar10 = *(int *)((long)param_1 + 0x34);
      lVar33 = *param_1;
      goto joined_r0x0058ad88;
    }
    uVar8 = FUN_005bce24(param_1);
    *(uint *)(puVar40 + 10) = uVar8;
    iVar10 = *(int *)((long)param_1 + 0x34);
    lVar33 = *param_1;
joined_r0x0058aecc:
    if (iVar10 == 0) goto LAB_0058ad8c;
LAB_0058ad94:
    iVar10 = FUN_005c1188();
    if (iVar10 == 7) {
      if (*(char *)((long)param_1 + 0xc6) < '\0') {
        uVar8 = 7;
      }
      *(undefined4 *)((long)param_1 + 0x34) = 7;
    }
  }
LAB_0058adb4:
  uVar8 = *(uint *)(puVar40 + 0xb) & uVar8;
  if (uVar8 != 0x11) goto LAB_0058b184;
  if (iVar11 == 0x32) {
    uVar8 = 0x11;
    lVar17 = *(long *)(lVar17 + 0x18);
    goto joined_r0x0058afcc;
  }
  lVar33 = param_1[6];
  iVar10 = FUN_005918b4(param_1);
  if (iVar10 == 0) {
    lVar35 = *param_1;
    if (*(long *)(lVar35 + 0x18) != 0) {
      (*DAT_00b0da70)();
    }
    if (0 < param_1[0x17]) {
      FUN_0058f57c(lVar35,param_1);
    }
    uVar8 = FUN_0058f640(param_1);
    param_2 = (ulong)uVar8;
    *(undefined1 *)((long)param_1 + 199) = 1;
    param_1[6] = 0xffffffff;
    *(undefined2 *)((long)param_1 + 0xc4) = 0xff02;
    param_1[7] = 0;
    *(undefined4 *)((long)param_1 + 0x2c) = 1;
    *(undefined4 *)(param_1 + 8) = 0;
    param_1[10] = 0;
    if ((uVar8 != 0) || (*(char *)(lVar35 + 0x67) != '\0')) {
      FUN_005c1188(lVar35);
      param_2 = extraout_x1_04;
    }
    if (*(long *)(lVar35 + 0x18) != 0) {
      (*DAT_00b0da80)();
      param_2 = extraout_x1_05;
    }
    iVar11 = iVar11 + 1;
    if (-1 < (int)lVar33) {
      *(undefined1 *)((long)param_1 + 0xc5) = 0xfe;
    }
    goto LAB_00589efc;
  }
  lVar33 = *(long *)(lVar17 + 0x188);
  if (lVar33 == 0) {
LAB_0058b03c:
    pcVar36 = (char *)0x0;
    puVar40 = (undefined8 *)param_1[0x15];
  }
  else if ((((*(ushort *)(lVar33 + 0x14) ^ 0xffff) & 0x202) == 0) &&
          (*(char *)(lVar33 + 0x16) == '\x01')) {
    pcVar36 = *(char **)(lVar33 + 8);
    puVar40 = (undefined8 *)param_1[0x15];
  }
  else {
    if ((*(ushort *)(lVar33 + 0x14) & 1) != 0) goto LAB_0058b03c;
    pcVar36 = (char *)FUN_005c17b0(lVar33,1);
    puVar40 = (undefined8 *)param_1[0x15];
  }
  if (puVar40 == (undefined8 *)0x0) goto LAB_0058b170;
  if (puVar40 < *(undefined8 **)(lVar17 + 0x1e8)) {
    if (*(undefined8 **)(lVar17 + 0x1d8) <= puVar40) {
      *puVar40 = *(undefined8 *)(lVar17 + 0x1d0);
      *(undefined8 **)(lVar17 + 0x1d0) = puVar40;
      goto LAB_0058b170;
    }
    if (*(undefined8 **)(lVar17 + 0x1e0) <= puVar40) {
      *puVar40 = *(undefined8 *)(lVar17 + 0x1c0);
      *(undefined8 **)(lVar17 + 0x1c0) = puVar40;
      goto LAB_0058b170;
    }
  }
  if (*(long *)(lVar17 + 0x300) == 0) {
    puVar20 = &DAT_00b0da18;
    if (DAT_00b0d9f0 != 0) {
      if (DAT_00b103d8 != (undefined8 *)0x0) {
        (*DAT_00b0da70)();
      }
      iVar11 = (*DAT_00b0da28)(puVar40);
      DAT_00b105b8 = DAT_00b105b8 - iVar11;
      DAT_00b10600 = DAT_00b10600 + -1;
      (*DAT_00b0da18)(puVar40);
      if (DAT_00b103d8 == (undefined8 *)0x0) goto LAB_0058b170;
      puVar20 = &DAT_00b0da80;
      puVar40 = DAT_00b103d8;
    }
    (*(code *)*puVar20)(puVar40);
  }
  else {
    FUN_005a7654(lVar17,puVar40);
  }
LAB_0058b170:
  if (*(char *)(lVar17 + 0x67) == '\0') {
    if (pcVar36 == (char *)0x0) {
      __dest = (void *)0x0;
    }
    else {
      sVar13 = strlen(pcVar36);
      __dest = (void *)FUN_005a76c8(lVar17,sVar13 + 1);
      if (__dest != (void *)0x0) {
        memcpy(__dest,pcVar36,sVar13 + 1);
      }
    }
    param_1[0x15] = (long)__dest;
    uVar8 = FUN_005c1188(lVar17,iVar10);
    *(uint *)((long)param_1 + 0x34) = uVar8;
    lVar17 = *(long *)(lVar17 + 0x18);
  }
  else {
    uVar8 = 7;
    param_1[0x15] = 0;
    *(undefined4 *)((long)param_1 + 0x34) = 7;
LAB_0058b184:
    lVar17 = *(long *)(lVar17 + 0x18);
  }
joined_r0x0058afcc:
  if (lVar17 == 0) {
    return uVar8;
  }
  (*DAT_00b0da80)();
  return uVar8;
}


// ===== 0058b228  sqlite3_column_int64 =====

double sqlite3_column_int64(long *param_1,uint param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  double *pdVar3;
  double dVar4;
  long lVar5;
  
  if (param_1 != (long *)0x0) {
    if (*(long *)(*param_1 + 0x18) != 0) {
      (*DAT_00b0da70)();
    }
    if ((param_1[0x14] != 0) && (param_2 < *(ushort *)(param_1 + 0x18))) {
      pdVar3 = (double *)(param_1[0x14] + (ulong)param_2 * 0x38);
      uVar1 = *(ushort *)((long)pdVar3 + 0x14);
      goto joined_r0x0058b2d0;
    }
    lVar5 = *param_1;
    *(undefined4 *)(lVar5 + 0x50) = 0x19;
    FUN_005ac5c0(lVar5,0x19);
  }
  pdVar3 = (double *)&DAT_002c8608;
  uVar1 = DAT_002c861c;
joined_r0x0058b2d0:
  if ((uVar1 & 0x24) == 0) {
    if ((uVar1 >> 3 & 1) == 0) {
      if (((uVar1 & 0x12) == 0) || (pdVar3[1] == 0.0)) {
        dVar4 = 0.0;
      }
      else {
        dVar4 = (double)FUN_005c27b0();
      }
    }
    else {
      dVar4 = *pdVar3;
      if (-9.223372036854775e+18 <= dVar4) {
        if (dVar4 == 9.223372036854775e+18 || dVar4 < 9.223372036854775e+18 != NAN(dVar4)) {
          dVar4 = (double)(long)dVar4;
        }
        else {
          dVar4 = NAN;
        }
      }
      else {
        dVar4 = -0.0;
      }
    }
  }
  else {
    dVar4 = *pdVar3;
  }
  if (param_1 != (long *)0x0) {
    lVar5 = *param_1;
    if ((*(int *)((long)param_1 + 0x34) == 0) && (*(char *)(lVar5 + 0x67) == '\0')) {
      lVar5 = *(long *)(lVar5 + 0x18);
      *(undefined4 *)((long)param_1 + 0x34) = 0;
    }
    else {
      uVar2 = FUN_005c1188(lVar5);
      lVar5 = *(long *)(*param_1 + 0x18);
      *(undefined4 *)((long)param_1 + 0x34) = uVar2;
    }
    if (lVar5 != 0) {
      (*DAT_00b0da80)(lVar5);
    }
  }
  return dVar4;
}


// ===== 0058b380  sqlite3_reset =====

long * sqlite3_reset(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  if (param_1 != (long *)0x0) {
    lVar2 = *param_1;
    if (*(long *)(lVar2 + 0x18) != 0) {
      (*DAT_00b0da70)();
    }
    if (0 < param_1[0x17]) {
      FUN_0058f57c(lVar2,param_1);
    }
    plVar1 = (long *)FUN_0058f640(param_1);
    param_1[7] = 0;
    *(undefined1 *)((long)param_1 + 199) = 1;
    *(undefined2 *)((long)param_1 + 0xc4) = 0xff02;
    *(undefined4 *)((long)param_1 + 0x2c) = 1;
    param_1[6] = 0xffffffff;
    *(undefined4 *)(param_1 + 8) = 0;
    param_1[10] = 0;
    if (((int)plVar1 != 0) || (param_1 = plVar1, *(char *)(lVar2 + 0x67) != '\0')) {
      param_1 = (long *)FUN_005c1188(lVar2,(ulong)plVar1 & 0xffffffff);
    }
    if (*(long *)(lVar2 + 0x18) != 0) {
      param_1 = (long *)((ulong)param_1 & 0xffffffff);
      (*DAT_00b0da80)(*(long *)(lVar2 + 0x18));
    }
  }
  return param_1;
}


// ===== 0058b438  sqlite3_exec =====

/* WARNING: Type propagation algorithm not settling */

int sqlite3_exec(long param_1,byte *param_2,code *param_3,undefined8 param_4,undefined8 *param_5)

{
  ulong uVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  bool bVar5;
  long *plVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  long lVar10;
  char *pcVar11;
  size_t sVar12;
  void *__dest;
  byte *pbVar13;
  undefined2 uVar14;
  long lVar15;
  undefined8 uVar16;
  bool bVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined *puVar20;
  long lVar21;
  ulong uVar22;
  uint uVar23;
  ushort uVar24;
  undefined8 *puVar25;
  long *local_70;
  byte *local_68;
  
  local_70 = (long *)0x0;
  if (param_1 == 0) {
    pcVar11 = "NULL";
    goto LAB_0058bb10;
  }
  cVar2 = *(char *)(param_1 + 0x71);
  if (cVar2 != -0x46) {
    if (cVar2 == 'v') {
      pbVar13 = &DAT_002a8138;
      if (param_2 != (byte *)0x0) {
        pbVar13 = param_2;
      }
      if (*(long *)(param_1 + 0x18) != 0) {
        (*DAT_00b0da70)();
      }
      *(undefined4 *)(param_1 + 0x50) = 0;
      if (*(long *)(param_1 + 0x188) == 0) {
        *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
      }
      else {
        FUN_005ac5c0(param_1,0);
      }
      if (param_3 != (code *)0x0) {
LAB_0058b508:
        if (*pbVar13 == 0) goto LAB_0058bc38;
        local_70 = (long *)0x0;
        iVar7 = FUN_00598a9c(param_1,pbVar13,0xffffffff,0x80,0,&local_70,&local_68);
        if (iVar7 == 0) {
          if (local_70 != (long *)0x0) {
            puVar19 = (undefined8 *)0x0;
            bVar5 = false;
            uVar23 = 0;
            puVar25 = (undefined8 *)0x0;
            bVar17 = true;
LAB_0058b550:
            iVar7 = sqlite3_step(local_70);
            if (iVar7 == 100) {
              if (bVar17) goto LAB_0058b584;
LAB_0058b750:
              if (uVar23 != 0) {
                lVar21 = 0;
                lVar18 = 0;
                uVar22 = 0;
LAB_0058b7c0:
                plVar6 = local_70;
                if (local_70 == (long *)0x0) {
LAB_0058b820:
                  puVar25 = &DAT_002c8608;
                  uVar24 = DAT_002c861c;
                  if (((DAT_002c861c ^ 0xffff) & 0x202) != 0) goto LAB_0058b850;
LAB_0058b838:
                  if (*(char *)((long)puVar25 + 0x16) != '\x01') goto LAB_0058b850;
                  lVar10 = puVar25[1];
                }
                else {
                  if (*(long *)(*local_70 + 0x18) != 0) {
                    (*DAT_00b0da70)();
                  }
                  if ((plVar6[0x14] == 0) || (*(ushort *)(plVar6 + 0x18) <= uVar22)) {
                    lVar10 = *plVar6;
                    *(undefined4 *)(lVar10 + 0x50) = 0x19;
                    FUN_005ac5c0(lVar10,0x19);
                    goto LAB_0058b820;
                  }
                  puVar25 = (undefined8 *)(plVar6[0x14] + lVar21);
                  uVar24 = *(ushort *)((long)puVar25 + 0x14);
                  if (((uVar24 ^ 0xffff) & 0x202) == 0) goto LAB_0058b838;
LAB_0058b850:
                  if ((uVar24 & 1) == 0) {
                    lVar10 = FUN_005c17b0(puVar25,1);
                  }
                  else {
                    lVar10 = 0;
                  }
                }
                if (plVar6 != (long *)0x0) {
                  lVar15 = *plVar6;
                  if ((*(int *)((long)plVar6 + 0x34) == 0) && (*(char *)(lVar15 + 0x67) == '\0')) {
                    lVar15 = *(long *)(lVar15 + 0x18);
                    *(undefined4 *)((long)plVar6 + 0x34) = 0;
                  }
                  else {
                    uVar8 = FUN_005c1188(lVar15);
                    lVar15 = *(long *)(*plVar6 + 0x18);
                    *(undefined4 *)((long)plVar6 + 0x34) = uVar8;
                  }
                  if (lVar15 != 0) {
                    (*DAT_00b0da80)(lVar15);
                  }
                }
                plVar6 = local_70;
                *(long *)((long)puVar19 + lVar18 + (ulong)uVar23 * 8) = lVar10;
                if ((lVar10 != 0) || (local_70 == (long *)0x0)) goto LAB_0058b7ac;
                if (*(long *)(*local_70 + 0x18) != 0) {
                  (*DAT_00b0da70)();
                }
                if ((plVar6[0x14] == 0) || (*(ushort *)(plVar6 + 0x18) <= uVar22)) {
                  lVar10 = *plVar6;
                  *(undefined4 *)(lVar10 + 0x50) = 0x19;
                  FUN_005ac5c0(lVar10,0x19);
                  lVar10 = *plVar6;
                  uVar24 = DAT_002c861c;
                  if (*(int *)((long)plVar6 + 0x34) == 0) goto LAB_0058b940;
LAB_0058b774:
                  uVar8 = FUN_005c1188(lVar10);
                  lVar10 = *(long *)(*plVar6 + 0x18);
                  *(undefined4 *)((long)plVar6 + 0x34) = uVar8;
                }
                else {
                  uVar24 = *(ushort *)(plVar6[0x14] + lVar21 + 0x14);
                  lVar10 = *plVar6;
                  if (*(int *)((long)plVar6 + 0x34) != 0) goto LAB_0058b774;
LAB_0058b940:
                  if (*(char *)(lVar10 + 0x67) != '\0') goto LAB_0058b774;
                  lVar10 = *(long *)(lVar10 + 0x18);
                  *(undefined4 *)((long)plVar6 + 0x34) = 0;
                }
                if (lVar10 != 0) {
                  (*DAT_00b0da80)(lVar10);
                }
                if ((0xaaaaaaaaaaaaaaaaU >> (uVar24 & 0x3f) & 1) != 0) goto LAB_0058b7ac;
                if ((*(char *)(param_1 + 0x67) == '\0') && (*(char *)(param_1 + 0x68) == '\0')) {
                  *(undefined1 *)(param_1 + 0x67) = 1;
                  if (0 < *(int *)(param_1 + 0xdc)) {
                    *(undefined4 *)(param_1 + 400) = 1;
                  }
                  *(undefined2 *)(param_1 + 0x19c) = 0;
                  *(int *)(param_1 + 0x198) = *(int *)(param_1 + 0x198) + 1;
                  if (*(long *)(param_1 + 0x158) == 0) goto LAB_0058bc30;
                  FUN_00595b78(*(long *)(param_1 + 0x158),"out of memory");
                  iVar7 = 100;
                  lVar18 = *(long *)(*(long *)(param_1 + 0x158) + 0xd8);
                  *(undefined4 *)(*(long *)(param_1 + 0x158) + 0x18) = 7;
                  for (; lVar18 != 0; lVar18 = *(long *)(lVar18 + 0xd8)) {
                    *(undefined4 *)(lVar18 + 0x18) = 7;
                    *(int *)(lVar18 + 0x34) = *(int *)(lVar18 + 0x34) + 1;
                  }
                }
                else {
LAB_0058bc30:
                  iVar7 = 100;
                }
                goto LAB_0058bc48;
              }
              uVar22 = 0;
              goto LAB_0058b96c;
            }
            if ((!bVar5 && iVar7 == 0x65) && ((*(byte *)(param_1 + 0x31) & 1) != 0)) {
LAB_0058b584:
              if (local_70 == (long *)0x0) {
                uVar23 = 0;
                puVar19 = (undefined8 *)FUN_005a76c8(param_1,8);
              }
              else {
                uVar23 = (uint)*(ushort *)(local_70 + 0x18);
                puVar19 = (undefined8 *)FUN_005a76c8(param_1,uVar23 << 4 | 8);
              }
              if (puVar19 == (undefined8 *)0x0) goto LAB_0058bc48;
              if (uVar23 != 0) {
                uVar22 = 0;
                lVar18 = 0x16;
                do {
                  plVar6 = local_70;
                  if (local_70 == (long *)0x0) {
                    sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x16b0a,
                                "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
                    puVar20 = (undefined *)0x0;
                  }
                  else {
                    lVar21 = *local_70;
                    if (*(long *)(lVar21 + 0x18) != 0) {
                      (*DAT_00b0da70)();
                    }
                    uVar4 = *(ushort *)(plVar6 + 0x19) >> 2 & 3;
                    if ((*(ushort *)(plVar6 + 0x19) >> 2 & 3) == 0) {
                      if ((*(ushort *)(plVar6 + 0x18) <= uVar22) ||
                         (lVar10 = plVar6[0x13], lVar10 == 0)) goto LAB_0058b6ec;
                      bVar3 = *(byte *)(lVar21 + 0x67);
                      uVar24 = *(ushort *)(lVar10 + lVar18 + -2);
                      if ((((uVar24 ^ 0xffff) & 0x202) == 0) &&
                         (*(char *)(lVar10 + lVar18) == '\x01')) {
                        puVar20 = *(undefined **)(lVar10 + lVar18 + -0xe);
                        lVar21 = *(long *)(lVar21 + 0x18);
                      }
                      else {
                        if ((uVar24 & 1) != 0) goto LAB_0058b6ec;
                        puVar20 = (undefined *)FUN_005c17b0(lVar10 + lVar18 + -0x16,1);
                        if (bVar3 < *(byte *)(lVar21 + 0x67)) {
                          if (*(int *)(lVar21 + 0xdc) != 0) goto LAB_0058b6ec;
                          *(undefined1 *)(lVar21 + 0x67) = 0;
                          *(undefined4 *)(lVar21 + 400) = 0;
                          iVar9 = *(int *)(lVar21 + 0x198) + -1;
                          *(int *)(lVar21 + 0x198) = iVar9;
                          uVar14 = 0;
                          if (iVar9 == 0) {
                            uVar14 = *(undefined2 *)(lVar21 + 0x19e);
                          }
                          puVar20 = (undefined *)0x0;
                          *(undefined2 *)(lVar21 + 0x19c) = uVar14;
                          lVar21 = *(long *)(lVar21 + 0x18);
                        }
                        else {
                          lVar21 = *(long *)(lVar21 + 0x18);
                        }
                      }
                    }
                    else {
                      uVar1 = 8;
                      if (uVar4 != 1) {
                        uVar1 = 4;
                      }
                      if (uVar22 < uVar1) {
                        puVar20 = (&PTR_DAT_00ad2898)[((int)uVar22 + uVar4 * 8) - 8];
                        lVar21 = *(long *)(lVar21 + 0x18);
                        goto joined_r0x0058b710;
                      }
LAB_0058b6ec:
                      puVar20 = (undefined *)0x0;
                      lVar21 = *(long *)(lVar21 + 0x18);
                    }
joined_r0x0058b710:
                    if (lVar21 != 0) {
                      (*DAT_00b0da80)();
                    }
                  }
                  puVar19[uVar22] = puVar20;
                  uVar22 = uVar22 + 1;
                  lVar18 = lVar18 + 0x38;
                } while (uVar23 != uVar22);
              }
              if (iVar7 == 100) goto LAB_0058b750;
              iVar7 = (*param_3)(param_4,uVar23,puVar25,puVar19);
              if (iVar7 != 0) goto LAB_0058bd38;
            }
            goto LAB_0058b9c8;
          }
          iVar7 = 0;
          pbVar13 = local_68;
          goto LAB_0058b9a8;
        }
        goto LAB_0058bc44;
      }
      do {
        if (*pbVar13 == 0) goto LAB_0058bc38;
        local_70 = (long *)0x0;
        iVar7 = FUN_00598a9c(param_1,pbVar13,0xffffffff,0x80,0,&local_70,&local_68);
        if (iVar7 != 0) break;
        if (local_70 == (long *)0x0) {
          iVar7 = 0;
          pbVar13 = local_68;
        }
        else {
          do {
            iVar7 = sqlite3_step(local_70);
            plVar6 = local_70;
          } while (iVar7 == 100);
          if (*(char *)((long)local_70 + 199) == '\0') {
            iVar7 = 0;
          }
          else {
            iVar7 = FUN_0058f640(local_70);
          }
          FUN_0058077c(plVar6);
          local_70 = (long *)0x0;
          pbVar13 = local_68 + -1;
          do {
            pbVar13 = pbVar13 + 1;
          } while (((&DAT_002c7a08)[*pbVar13] & 1) != 0);
        }
      } while (iVar7 == 0);
      goto LAB_0058bc44;
    }
    if (cVar2 != 'm') {
      pcVar11 = "invalid";
      goto LAB_0058bb10;
    }
  }
  pcVar11 = "unopened";
LAB_0058bb10:
  sqlite3_log(0x15,"API call with %s database connection pointer",pcVar11);
  sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x21bf1,
              "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
  return 0x15;
LAB_0058b7ac:
  lVar18 = lVar18 + 8;
  uVar22 = uVar22 + 1;
  lVar21 = lVar21 + 0x38;
  if ((ulong)uVar23 * 8 - lVar18 == 0) goto LAB_0058b95c;
  goto LAB_0058b7c0;
LAB_0058b95c:
  uVar22 = (ulong)uVar23;
LAB_0058b96c:
  puVar25 = puVar19 + uVar23;
  puVar25[uVar22] = 0;
  iVar9 = (*param_3)(param_4,uVar23,puVar25,puVar19);
  if (iVar9 != 0) {
LAB_0058bd38:
    plVar6 = local_70;
    if (*(char *)((long)local_70 + 199) != '\0') {
      FUN_0058f640(local_70);
    }
    FUN_0058077c(plVar6);
    iVar7 = 4;
    local_70 = (long *)0x0;
    *(undefined4 *)(param_1 + 0x50) = 4;
    FUN_005ac5c0(param_1,4);
    goto LAB_0058bc48;
  }
  bVar17 = false;
  bVar5 = true;
  if (iVar7 != 100) goto LAB_0058b9c8;
  goto LAB_0058b550;
LAB_0058b9c8:
  plVar6 = local_70;
  if (*(char *)((long)local_70 + 199) == '\0') {
    iVar7 = 0;
  }
  else {
    iVar7 = FUN_0058f640(local_70);
  }
  FUN_0058077c(plVar6);
  local_70 = (long *)0x0;
  pbVar13 = local_68 + -1;
  do {
    pbVar13 = pbVar13 + 1;
  } while (((&DAT_002c7a08)[*pbVar13] & 1) != 0);
  if (puVar19 == (undefined8 *)0x0) goto LAB_0058b9a8;
  if (puVar19 < *(undefined8 **)(param_1 + 0x1e8)) {
    if (*(undefined8 **)(param_1 + 0x1d8) <= puVar19) {
      uVar16 = *(undefined8 *)(param_1 + 0x1d0);
      *(undefined8 **)(param_1 + 0x1d0) = puVar19;
      *puVar19 = uVar16;
      goto LAB_0058b9a8;
    }
    if (*(undefined8 **)(param_1 + 0x1e0) <= puVar19) {
      uVar16 = *(undefined8 *)(param_1 + 0x1c0);
      *(undefined8 **)(param_1 + 0x1c0) = puVar19;
      *puVar19 = uVar16;
      goto LAB_0058b9a8;
    }
  }
  if (*(long *)(param_1 + 0x300) == 0) {
    puVar25 = &DAT_00b0da18;
    if (DAT_00b0d9f0 != 0) {
      if (DAT_00b103d8 != (undefined8 *)0x0) {
        (*DAT_00b0da70)();
      }
      iVar9 = (*DAT_00b0da28)(puVar19);
      DAT_00b105b8 = DAT_00b105b8 - iVar9;
      DAT_00b10600 = DAT_00b10600 + -1;
      (*DAT_00b0da18)(puVar19);
      if (DAT_00b103d8 == (undefined8 *)0x0) goto LAB_0058b9a8;
      puVar25 = &DAT_00b0da80;
      puVar19 = DAT_00b103d8;
    }
    (*(code *)*puVar25)(puVar19);
  }
  else {
    FUN_005a7654(param_1,puVar19);
  }
LAB_0058b9a8:
  if (iVar7 != 0) goto LAB_0058bc44;
  goto LAB_0058b508;
LAB_0058bc38:
  iVar7 = 0;
LAB_0058bc44:
  puVar19 = (undefined8 *)0x0;
LAB_0058bc48:
  plVar6 = local_70;
  if (local_70 != (long *)0x0) {
    if (*(char *)((long)local_70 + 199) != '\0') {
      FUN_0058f640(local_70);
    }
    FUN_0058077c(plVar6);
  }
  if (puVar19 != (undefined8 *)0x0) {
    if (puVar19 < *(undefined8 **)(param_1 + 0x1e8)) {
      if (puVar19 < *(undefined8 **)(param_1 + 0x1d8)) {
        if (puVar19 < *(undefined8 **)(param_1 + 0x1e0)) goto LAB_0058bc90;
        uVar16 = *(undefined8 *)(param_1 + 0x1c0);
        *(undefined8 **)(param_1 + 0x1c0) = puVar19;
      }
      else {
        uVar16 = *(undefined8 *)(param_1 + 0x1d0);
        *(undefined8 **)(param_1 + 0x1d0) = puVar19;
      }
      *puVar19 = uVar16;
    }
    else {
LAB_0058bc90:
      if (*(long *)(param_1 + 0x300) == 0) {
        puVar25 = &DAT_00b0da18;
        if (DAT_00b0d9f0 != 0) {
          if (DAT_00b103d8 != (undefined8 *)0x0) {
            (*DAT_00b0da70)();
          }
          iVar9 = (*DAT_00b0da28)(puVar19);
          DAT_00b105b8 = DAT_00b105b8 - iVar9;
          DAT_00b10600 = DAT_00b10600 + -1;
          (*DAT_00b0da18)(puVar19);
          if (DAT_00b103d8 == (undefined8 *)0x0) goto LAB_0058bd7c;
          puVar25 = &DAT_00b0da80;
          puVar19 = DAT_00b103d8;
        }
        (*(code *)*puVar25)(puVar19);
      }
      else {
        FUN_005a7654(param_1,puVar19);
      }
    }
  }
LAB_0058bd7c:
  if ((iVar7 == 0) && (*(char *)(param_1 + 0x67) == '\0')) {
    iVar7 = 0;
  }
  else {
    iVar7 = FUN_005c1188(param_1,iVar7);
    if ((param_5 != (undefined8 *)0x0) && (iVar7 != 0)) {
      pcVar11 = (char *)sqlite3_errmsg(param_1);
      if (pcVar11 != (char *)0x0) {
        sVar12 = strlen(pcVar11);
        __dest = (void *)FUN_005827b0(sVar12 + 1);
        if (__dest != (void *)0x0) {
          memcpy(__dest,pcVar11,sVar12 + 1);
          *param_5 = __dest;
          lVar18 = *(long *)(param_1 + 0x18);
          goto joined_r0x0058be0c;
        }
      }
      iVar7 = 7;
      *(undefined4 *)(param_1 + 0x50) = 7;
      *param_5 = 0;
      FUN_005ac5c0(param_1,7);
      lVar18 = *(long *)(param_1 + 0x18);
      goto joined_r0x0058be0c;
    }
  }
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = 0;
  }
  lVar18 = *(long *)(param_1 + 0x18);
joined_r0x0058be0c:
  if (lVar18 != 0) {
    (*DAT_00b0da80)();
  }
  return iVar7;
}


// ===== 0058beb4  sqlite3_column_int =====

ulong sqlite3_column_int(long *param_1,uint param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  double *pdVar3;
  double dVar4;
  long lVar5;
  
  if (param_1 != (long *)0x0) {
    if (*(long *)(*param_1 + 0x18) != 0) {
      (*DAT_00b0da70)();
    }
    if ((param_1[0x14] != 0) && (param_2 < *(ushort *)(param_1 + 0x18))) {
      pdVar3 = (double *)(param_1[0x14] + (ulong)param_2 * 0x38);
      uVar1 = *(ushort *)((long)pdVar3 + 0x14);
      goto joined_r0x0058bf5c;
    }
    lVar5 = *param_1;
    *(undefined4 *)(lVar5 + 0x50) = 0x19;
    FUN_005ac5c0(lVar5,0x19);
  }
  pdVar3 = (double *)&DAT_002c8608;
  uVar1 = DAT_002c861c;
joined_r0x0058bf5c:
  if ((uVar1 & 0x24) == 0) {
    if ((uVar1 >> 3 & 1) == 0) {
      if (((uVar1 & 0x12) == 0) || (pdVar3[1] == 0.0)) {
        dVar4 = 0.0;
      }
      else {
        dVar4 = (double)FUN_005c27b0();
      }
    }
    else {
      dVar4 = *pdVar3;
      if (-9.223372036854775e+18 <= dVar4) {
        if (dVar4 == 9.223372036854775e+18 || dVar4 < 9.223372036854775e+18 != NAN(dVar4)) {
          dVar4 = (double)(long)dVar4;
        }
        else {
          dVar4 = NAN;
        }
      }
      else {
        dVar4 = 0.0;
      }
    }
  }
  else {
    dVar4 = *pdVar3;
  }
  if (param_1 != (long *)0x0) {
    lVar5 = *param_1;
    if ((*(int *)((long)param_1 + 0x34) == 0) && (*(char *)(lVar5 + 0x67) == '\0')) {
      lVar5 = *(long *)(lVar5 + 0x18);
      *(undefined4 *)((long)param_1 + 0x34) = 0;
    }
    else {
      uVar2 = FUN_005c1188(lVar5);
      lVar5 = *(long *)(*param_1 + 0x18);
      *(undefined4 *)((long)param_1 + 0x34) = uVar2;
    }
    if (lVar5 != 0) {
      (*DAT_00b0da80)(lVar5);
    }
  }
  return (ulong)dVar4 & 0xffffffff;
}


// ===== 0058c00c  sqlite3_finalize =====

ulong sqlite3_finalize(long *param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  
  if (param_1 != (long *)0x0) {
    lVar3 = *param_1;
    if (lVar3 != 0) {
      if (*(long *)(lVar3 + 0x18) != 0) {
        (*DAT_00b0da70)();
      }
      if (0 < param_1[0x17]) {
        FUN_0058f57c(lVar3,param_1);
      }
      iVar1 = FUN_0058f640(param_1);
      FUN_0058077c(param_1);
      if ((iVar1 == 0) && (*(char *)(lVar3 + 0x67) == '\0')) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_005c1188(lVar3,iVar1);
      }
      FUN_0058eb1c(lVar3);
      return (ulong)uVar2;
    }
    param_1 = (long *)0x15;
    sqlite3_log(0x15,"API called with finalized prepared statement");
    sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x165af,
                "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
  }
  return (ulong)param_1 & 0xffffffff;
}


// ===== 0058c0fc  sqlite3_deserialize =====

int sqlite3_deserialize(long param_1,long param_2,long param_3,long param_4,long param_5,
                       uint param_6)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 local_70;
  long *local_68;
  
  local_70 = 0;
  if (param_1 == 0) {
    pcVar5 = "NULL";
  }
  else {
    cVar1 = *(char *)(param_1 + 0x71);
    if (cVar1 != -0x46) {
      if (cVar1 == 'v') {
        if (param_4 < 0) {
          uVar6 = 0xd58e;
          goto LAB_0058c2a8;
        }
        if (param_5 < 0) {
          uVar6 = 0xd58f;
          goto LAB_0058c2a8;
        }
        if (*(long *)(param_1 + 0x18) != 0) {
          (*DAT_00b0da70)(*(long *)(param_1 + 0x18));
        }
        if ((param_2 == 0) && (param_2 = **(long **)(param_1 + 0x20), param_2 == 0)) {
LAB_0058c31c:
          uVar10 = 0xffffffff;
        }
        else {
          uVar10 = *(int *)(param_1 + 0x28) - 1;
          uVar11 = (ulong)uVar10;
          if (0 < *(int *)(param_1 + 0x28)) {
            plVar7 = (long *)(*(long *)(param_1 + 0x20) + uVar11 * 0x20);
            do {
              uVar10 = (uint)uVar11;
              if (*plVar7 != 0) {
                lVar9 = 0;
                do {
                  bVar2 = *(byte *)(*plVar7 + lVar9);
                  if (bVar2 == *(byte *)(param_2 + lVar9)) {
                    if (bVar2 == 0) goto LAB_0058c320;
                  }
                  else if ((&DAT_002c78ae)[bVar2] != (&DAT_002c78ae)[*(byte *)(param_2 + lVar9)])
                  break;
                  lVar9 = lVar9 + 1;
                } while( true );
              }
              if (uVar10 == 0) {
                lVar9 = 0;
                do {
                  bVar2 = (&DAT_002aeb89)[lVar9];
                  if (bVar2 == *(byte *)(param_2 + lVar9)) {
                    if (bVar2 == 0) {
                      uVar10 = 0;
                      goto LAB_0058c338;
                    }
                  }
                  else if ((&DAT_002c78ae)[bVar2] != (&DAT_002c78ae)[*(byte *)(param_2 + lVar9)])
                  break;
                  lVar9 = lVar9 + 1;
                } while( true );
              }
              plVar7 = plVar7 + -4;
              uVar11 = (ulong)(uVar10 - 1);
            } while (0 < (int)uVar10);
            goto LAB_0058c31c;
          }
        }
LAB_0058c320:
        if (((int)uVar10 < 2) && (uVar10 != 0)) {
LAB_0058c330:
          iVar3 = 1;
        }
        else {
LAB_0058c338:
          lVar9 = sqlite3_mprintf("ATTACH x AS %Q");
          if (lVar9 == 0) {
            iVar3 = 7;
          }
          else {
            iVar3 = FUN_00598a9c(param_1,lVar9,0xffffffff,0x80,0,&local_70,0);
            puVar8 = &DAT_00b0da18;
            if (DAT_00b0d9f0 == 0) {
LAB_0058c3f0:
              (*(code *)*puVar8)(lVar9);
            }
            else {
              if (DAT_00b103d8 != 0) {
                (*DAT_00b0da70)();
              }
              iVar4 = (*DAT_00b0da28)(lVar9);
              DAT_00b105b8 = DAT_00b105b8 - iVar4;
              DAT_00b10600 = DAT_00b10600 + -1;
              (*DAT_00b0da18)(lVar9);
              if (DAT_00b103d8 != 0) {
                puVar8 = &DAT_00b0da80;
                lVar9 = DAT_00b103d8;
                goto LAB_0058c3f0;
              }
            }
            if (iVar3 == 0) {
              *(char *)(param_1 + 0xc4) = (char)uVar10;
              *(byte *)(param_1 + 0xc6) = *(byte *)(param_1 + 0xc6) | 4;
              iVar3 = sqlite3_step(local_70);
              *(byte *)(param_1 + 0xc6) = *(byte *)(param_1 + 0xc6) & 0xfb;
              if (iVar3 == 0x65) {
                local_68 = (long *)0x0;
                iVar3 = sqlite3_file_control(param_1,param_2,7,&local_68);
                if ((iVar3 == 0) && ((undefined *)*local_68 == &DAT_00ad2738)) {
                  lVar9 = local_68[1];
                  if (*(long *)(lVar9 + 0x20) != 0) {
                    (*DAT_00b0da70)();
                  }
                  if (*(long *)(lVar9 + 0x40) != 0) {
                    local_68 = (long *)0x0;
                  }
                  if (*(long *)(lVar9 + 0x20) != 0) {
                    (*DAT_00b0da80)();
                  }
                  lVar9 = DAT_00b0db78;
                  if (local_68 != (long *)0x0) {
                    plVar7 = (long *)local_68[1];
                    iVar3 = 0;
                    *plVar7 = param_4;
                    plVar7[1] = param_5;
                    *(uint *)((long)plVar7 + 0x2c) = param_6;
                    if (lVar9 <= param_5) {
                      lVar9 = param_5;
                    }
                    plVar7[2] = lVar9;
                    plVar7[3] = param_3;
                    param_3 = 0;
                    goto LAB_0058c4d8;
                  }
                }
              }
              goto LAB_0058c330;
            }
          }
        }
LAB_0058c4d8:
        sqlite3_finalize(local_70);
        if (((param_6 & 1) != 0) && (param_3 != 0)) {
          puVar8 = &DAT_00b0da18;
          if (DAT_00b0d9f0 != 0) {
            if (DAT_00b103d8 != 0) {
              (*DAT_00b0da70)(DAT_00b103d8);
            }
            iVar4 = (*DAT_00b0da28)();
            DAT_00b105b8 = DAT_00b105b8 - iVar4;
            DAT_00b10600 = DAT_00b10600 + -1;
            (*DAT_00b0da18)(param_3);
            if (DAT_00b103d8 == 0) goto LAB_0058c570;
            puVar8 = &DAT_00b0da80;
          }
          (*(code *)*puVar8)();
        }
LAB_0058c570:
        if (*(long *)(param_1 + 0x18) == 0) {
          return iVar3;
        }
        (*DAT_00b0da80)();
        return iVar3;
      }
      if (cVar1 != 'm') {
        pcVar5 = "invalid";
        goto LAB_0058c274;
      }
    }
    pcVar5 = "unopened";
  }
LAB_0058c274:
  sqlite3_log(0x15,"API call with %s database connection pointer",pcVar5);
  uVar6 = 0xd58c;
LAB_0058c2a8:
  sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",uVar6,
              "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
  return 0x15;
}


// ===== 0058c588  sqlite3_database_file_object =====

undefined8 sqlite3_database_file_object(long param_1)

{
  char *pcVar1;
  
  for (pcVar1 = (char *)(param_1 + -4);
      (((pcVar1[3] != '\0' || (pcVar1[2] != '\0')) || (pcVar1[1] != '\0')) || (*pcVar1 != '\0'));
      pcVar1 = pcVar1 + -1) {
  }
  return *(undefined8 *)(*(long *)(pcVar1 + -8) + 0x48);
}


// ===== 0058c5c0  sqlite3_enable_shared_cache =====

undefined8 sqlite3_enable_shared_cache(undefined4 param_1)

{
  DAT_00b0db3c = param_1;
  return 0;
}


// ===== 0058c5d4  sqlite3_backup_init =====

long * sqlite3_backup_init(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  char *pcVar5;
  undefined8 *puVar6;
  long lVar7;
  
  if (param_3 == 0) {
LAB_0058c644:
    pcVar5 = "NULL";
  }
  else {
    cVar1 = *(char *)(param_3 + 0x71);
    if (cVar1 != -0x46) {
      if (cVar1 == 'v') {
        if (param_1 == 0) goto LAB_0058c644;
        cVar1 = *(char *)(param_1 + 0x71);
        if (cVar1 == -0x46) goto LAB_0058c60c;
        if (cVar1 == 'v') {
          if (*(long *)(param_3 + 0x18) != 0) {
            (*DAT_00b0da70)(*(long *)(param_3 + 0x18));
          }
          if (*(long *)(param_1 + 0x18) != 0) {
            (*DAT_00b0da70)(*(long *)(param_1 + 0x18));
          }
          if (param_3 == param_1) {
            FUN_0058c8b8(param_3,1,"source and destination must be distinct");
          }
          else {
            plVar3 = (long *)FUN_005827b0(0x48);
            if (plVar3 == (long *)0x0) {
              *(undefined4 *)(param_1 + 0x50) = 7;
              FUN_005ac5c0(param_1,7);
              plVar3 = (long *)0x0;
              goto LAB_0058c864;
            }
            plVar3[8] = 0;
            plVar3[1] = 0;
            *plVar3 = 0;
            plVar3[3] = 0;
            plVar3[2] = 0;
            plVar3[5] = 0;
            plVar3[4] = 0;
            plVar3[7] = 0;
            plVar3[6] = 0;
            lVar4 = FUN_0058ca88(param_1,param_3,param_4);
            plVar3[5] = lVar4;
            lVar4 = FUN_0058ca88(param_1,param_1,param_2);
            lVar7 = plVar3[5];
            *plVar3 = param_1;
            plVar3[1] = lVar4;
            plVar3[4] = param_3;
            *(undefined4 *)(plVar3 + 3) = 1;
            *(undefined4 *)((long)plVar3 + 0x3c) = 0;
            if ((lVar7 != 0) && (lVar4 != 0)) {
              if (*(char *)(lVar4 + 0x10) == '\0') {
                *(int *)(lVar7 + 0x18) = *(int *)(lVar7 + 0x18) + 1;
                goto LAB_0058c864;
              }
              FUN_0058c8b8(param_1,1,"destination database is in use");
            }
            puVar6 = &DAT_00b0da18;
            if (DAT_00b0d9f0 != 0) {
              if (DAT_00b103d8 != 0) {
                (*DAT_00b0da70)(DAT_00b103d8);
              }
              iVar2 = (*DAT_00b0da28)();
              DAT_00b105b8 = DAT_00b105b8 - iVar2;
              DAT_00b10600 = DAT_00b10600 + -1;
              (*DAT_00b0da18)(plVar3);
              if (DAT_00b103d8 == 0) {
                plVar3 = (long *)0x0;
                goto LAB_0058c864;
              }
              puVar6 = &DAT_00b0da80;
            }
            (*(code *)*puVar6)();
          }
          plVar3 = (long *)0x0;
LAB_0058c864:
          if (*(long *)(param_1 + 0x18) != 0) {
            (*DAT_00b0da80)(*(long *)(param_1 + 0x18));
          }
          if (*(long *)(param_3 + 0x18) == 0) {
            return plVar3;
          }
          (*DAT_00b0da80)(*(long *)(param_3 + 0x18));
          return plVar3;
        }
      }
      if (cVar1 != 'm') {
        pcVar5 = "invalid";
        goto LAB_0058c64c;
      }
    }
LAB_0058c60c:
    pcVar5 = "unopened";
  }
LAB_0058c64c:
  sqlite3_log(0x15,"API call with %s database connection pointer",pcVar5);
  sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x1450f,
              "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
  return (long *)0x0;
}


// ===== 0058c8b8  FUN_0058c8b8 =====

void FUN_0058c8b8(long *param_1,uint param_2,long param_3,undefined8 param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
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
  
  *(uint *)(param_1 + 10) = param_2;
  local_98 = param_4;
  uStack_90 = param_5;
  local_88 = param_6;
  uStack_80 = param_7;
  local_78 = param_8;
  if ((param_2 != 0xc0a) && ((param_2 & 0xfb) == 10)) {
    pcVar4 = *(code **)(*param_1 + 0x80);
    if (pcVar4 == (code *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (*pcVar4)(*param_1,0,0);
    }
    *(undefined4 *)((long)param_1 + 0x5c) = uVar1;
  }
  if (param_3 != 0) {
    if (param_1[0x31] == 0) {
      puVar2 = (undefined8 *)FUN_005a76c8(param_1,0x38);
      if (puVar2 == (undefined8 *)0x0) {
        param_1[0x31] = 0;
        return;
      }
      puVar2[6] = 0;
      puVar2[3] = 0;
      puVar2[2] = 0;
      puVar2[5] = 0;
      puVar2[4] = 0;
      puVar2[1] = 0;
      *puVar2 = 0;
      *(undefined2 *)((long)puVar2 + 0x14) = 1;
      puVar2[3] = param_1;
      param_1[0x31] = (long)puVar2;
    }
    ppuStack_68 = &local_70;
    puStack_60 = auStack_a0;
    uStack_58 = 0xffffff80ffffffd8;
    local_70 = (undefined1 *)register0x00000008;
    uVar3 = FUN_005ac498(param_1,param_3,&local_70);
    if (param_1[0x31] != 0) {
      FUN_00590724(param_1[0x31],uVar3,0xffffffffffffffff,1,FUN_005a151c);
    }
    return;
  }
  *(uint *)(param_1 + 10) = param_2;
  if (param_2 != 0) {
    FUN_005ac5c0(param_1);
    return;
  }
  if (param_1[0x31] != 0) {
    FUN_005ac5c0(param_1,0);
    return;
  }
  *(undefined4 *)((long)param_1 + 0x54) = 0xffffffff;
  return;
}


// ===== 0058ca60  FUN_0058ca60 =====

void FUN_0058ca60(long param_1,int param_2)

{
  *(int *)(param_1 + 0x50) = param_2;
  if (param_2 != 0) {
    FUN_005ac5c0();
    return;
  }
  if (*(long *)(param_1 + 0x188) != 0) {
    FUN_005ac5c0(param_1,0);
    return;
  }
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  return;
}


// ===== 0058ca88  FUN_0058ca88 =====

undefined8 FUN_0058ca88(undefined8 param_1,long param_2,byte *param_3)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  byte *pbVar7;
  long local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  ulong local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_f8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if ((param_3 != (byte *)0x0) &&
     (uVar4 = (ulong)(*(int *)(param_2 + 0x28) - 1), 0 < *(int *)(param_2 + 0x28))) {
    lVar3 = *(long *)(param_2 + 0x20);
    puVar5 = (undefined8 *)(lVar3 + uVar4 * 0x20);
    do {
      pbVar6 = (byte *)*puVar5;
      iVar2 = (int)uVar4;
      pbVar7 = param_3;
      if (pbVar6 != (byte *)0x0) {
        do {
          bVar1 = *pbVar6;
          if (bVar1 == *pbVar7) {
            if (bVar1 == 0) {
              if (iVar2 != 1) {
                if (-1 < iVar2) goto LAB_0058cc80;
                goto LAB_0058cc3c;
              }
              local_38 = 0;
              uStack_b0 = 0;
              local_b8 = 0;
              uStack_a0 = 0;
              uStack_a8 = 0;
              uStack_90 = 0;
              local_98 = 0;
              uStack_80 = 0;
              uStack_88 = 0;
              uStack_70 = 0;
              local_78 = 0;
              uStack_60 = 0;
              uStack_68 = 0;
              uStack_50 = 0;
              local_58 = 0;
              uStack_40 = 0;
              uStack_48 = 0;
              local_f8 = *(undefined8 *)(param_2 + 0x158);
              uStack_120 = 0;
              local_128 = 0;
              uStack_130 = 0;
              local_138 = 0;
              uStack_140 = 0;
              local_148 = 0;
              uStack_150 = 0;
              local_158 = 0;
              uStack_160 = 0;
              local_168 = 0;
              uStack_170 = 0;
              local_178 = 0;
              uStack_180 = 0;
              local_188 = 0;
              uStack_190 = 0;
              local_198 = 0;
              uStack_1a0 = 0;
              local_1a8 = 0;
              uStack_1b0 = 0;
              local_1b8 = 0;
              uStack_1c0 = 0;
              local_1c8 = 0;
              *(long **)(param_2 + 0x158) = &local_1d0;
              local_1d0 = param_2;
              if (*(char *)(param_2 + 0x67) != '\0') {
                FUN_00595b78(&local_1d0,"out of memory");
              }
              iVar2 = FUN_00595f38(&local_1d0);
              if (iVar2 != 0) {
                FUN_0058c8b8(param_1,local_1b8 & 0xffffffff,&DAT_002ad0ce,local_1c8);
                FUN_005869c8(param_1,local_1c8);
                FUN_00596a64(&local_1d0);
                return 0;
              }
              FUN_005869c8(param_1,local_1c8);
              FUN_00596a64(&local_1d0);
              lVar3 = *(long *)(param_2 + 0x20);
              uVar4 = 1;
              goto LAB_0058cc80;
            }
          }
          else if ((&DAT_002c78ae)[bVar1] != (&DAT_002c78ae)[*pbVar7]) break;
          pbVar6 = pbVar6 + 1;
          pbVar7 = pbVar7 + 1;
        } while( true );
      }
      pbVar6 = param_3;
      pbVar7 = &DAT_002aeb89;
      if (iVar2 == 0) {
        do {
          bVar1 = *pbVar7;
          if (bVar1 == *pbVar6) {
            if (bVar1 == 0) {
              uVar4 = 0;
LAB_0058cc80:
              return *(undefined8 *)(lVar3 + uVar4 * 0x20 + 8);
            }
          }
          else if ((&DAT_002c78ae)[bVar1] != (&DAT_002c78ae)[*pbVar6]) break;
          pbVar6 = pbVar6 + 1;
          pbVar7 = pbVar7 + 1;
        } while( true );
      }
      uVar4 = (ulong)(iVar2 - 1);
      puVar5 = puVar5 + -4;
    } while (0 < iVar2);
  }
LAB_0058cc3c:
  FUN_0058c8b8(param_1,1,"unknown database %s");
  return 0;
}


// ===== 0058cca0  sqlite3_backup_step =====

/* WARNING: Removing unreachable block (ram,0x0058cef0) */

uint sqlite3_backup_step(long *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  long local_68;
  
  if (param_1 == (long *)0x0) {
    sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x145ba,
                "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
    return 0x15;
  }
  if (*(long *)(param_1[4] + 0x18) != 0) {
    (*DAT_00b0da70)();
  }
  lVar9 = param_1[5];
  if ((*(char *)(lVar9 + 0x11) != '\0') &&
     (*(int *)(lVar9 + 0x14) = *(int *)(lVar9 + 0x14) + 1, *(char *)(lVar9 + 0x12) == '\0')) {
    FUN_005ac65c();
  }
  if ((*param_1 != 0) && (*(long *)(*param_1 + 0x18) != 0)) {
    (*DAT_00b0da70)();
  }
  uVar8 = *(uint *)(param_1 + 6);
  if ((6 < uVar8) || ((1 << (ulong)(uVar8 & 0x1f) & 0x61U) == 0)) goto LAB_0058d468;
  lVar9 = param_1[5];
  lVar15 = **(long **)(lVar9 + 8);
  lVar17 = **(long **)(param_1[1] + 8);
  if ((*param_1 == 0) || (*(char *)((long)*(long **)(lVar9 + 8) + 0x24) != '\x02')) {
    bVar5 = *(char *)(lVar9 + 0x10) != '\0';
    if (*(char *)(lVar9 + 0x10) == '\0') {
      uVar7 = FUN_005ac788(lVar9,0,0);
      iVar10 = *(int *)((long)param_1 + 0x14);
      if (iVar10 != 0 || uVar7 != 0) goto LAB_0058ce14;
LAB_0058cdcc:
      uVar7 = FUN_005a4724(param_1[1],*(undefined4 *)(*(long *)(param_1[5] + 8) + 0x34),0,0);
      if (uVar7 == 7) goto LAB_0058cea0;
      iVar10 = *(int *)((long)param_1 + 0x14);
    }
    else {
      uVar7 = 0;
      iVar10 = *(int *)((long)param_1 + 0x14);
      if (iVar10 == 0) goto LAB_0058cdcc;
LAB_0058ce14:
      if (uVar7 != 0) goto LAB_0058cea0;
    }
    if (iVar10 == 0) {
      plVar18 = (long *)param_1[1];
      if ((*(char *)((long)plVar18 + 0x11) == '\0') && (1 < *(byte *)(plVar18 + 2))) {
        plVar12 = (long *)plVar18[1];
        uVar8 = *(uint *)(*(long *)(plVar12[3] + 0x50) + 0x28);
        uVar8 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
        *(uint *)(param_1 + 2) = uVar8 >> 0x10 | uVar8 << 0x10;
        lVar9 = *plVar12;
        if ((*(int *)(lVar9 + 0x80) < *(int *)(*plVar18 + 0x2e8)) && (*(char *)(lVar9 + 10) != '\0')
           ) {
          uVar7 = FUN_005b546c(lVar9);
          goto joined_r0x0058ce48;
        }
      }
      else {
        uVar7 = FUN_005ac788(plVar18,2,param_1 + 2);
joined_r0x0058ce48:
        if (uVar7 != 0) goto LAB_0058cea0;
      }
      uVar7 = 0;
      *(undefined4 *)((long)param_1 + 0x14) = 1;
    }
    else {
      uVar7 = 0;
    }
  }
  else {
    uVar7 = 5;
    bVar5 = true;
  }
LAB_0058cea0:
  iVar2 = *(int *)(*(long *)(param_1[5] + 8) + 0x34);
  lVar9 = (long)iVar2;
  iVar10 = *(int *)((long)*(long **)(param_1[1] + 8) + 0x34);
  cVar1 = *(char *)(**(long **)(param_1[1] + 8) + 9);
  if (uVar7 == 0) {
    if (cVar1 == '\x05') {
      if (iVar2 == iVar10) {
        uVar7 = 0;
      }
      else {
LAB_0058cf10:
        uVar7 = 8;
      }
    }
    else if (((*(char *)(lVar17 + 0x10) != '\0') || (uVar7 = 0, *(char *)(lVar17 + 0x14) != '\0'))
            && (uVar7 = 0, iVar2 != iVar10)) goto LAB_0058cf10;
  }
  uVar8 = *(uint *)(*(long *)(param_1[5] + 8) + 0x40);
  if (param_2 != 0) {
    uVar16 = *(uint *)(param_1 + 3);
    iVar3 = 1;
    do {
      iVar11 = iVar3;
      if ((uVar8 < uVar16) || (uVar7 != 0)) break;
      uVar7 = *(uint *)(*(long *)(param_1[5] + 8) + 0x34);
      uVar4 = 0;
      if (uVar7 != 0) {
        uVar4 = DAT_00b0d530 / uVar7;
      }
      if (uVar16 == uVar4 + 1) {
        uVar7 = 0;
        uVar16 = uVar16 + 1;
        *(uint *)(param_1 + 3) = uVar16;
      }
      else {
        uVar7 = (**(code **)(lVar15 + 0x110))(lVar15,uVar16,&local_68,2);
        if ((uVar7 == 0) &&
           (uVar7 = FUN_0058d570(param_1,uVar16,*(undefined8 *)(local_68 + 8),0), local_68 != 0)) {
          if ((*(ushort *)(local_68 + 0x34) >> 5 & 1) == 0) {
            FUN_005ac2a8(local_68);
          }
          else {
            lVar20 = *(long *)(local_68 + 0x28);
            *(int *)(lVar20 + 0x98) = *(int *)(lVar20 + 0x98) + -1;
            *(undefined8 *)(local_68 + 0x20) = *(undefined8 *)(lVar20 + 0xa8);
            *(long *)(lVar20 + 0xa8) = local_68;
            (**(code **)(**(long **)(lVar20 + 0x48) + 0x90))
                      (*(long **)(lVar20 + 0x48),
                       *(long *)(lVar20 + 200) * (ulong)(*(int *)(local_68 + 0x30) - 1),
                       *(undefined8 *)(local_68 + 8));
          }
        }
        uVar16 = (int)param_1[3] + 1;
        *(uint *)(param_1 + 3) = uVar16;
      }
      iVar3 = iVar11 + 1;
    } while ((param_2 < 0) || (iVar3 = iVar11 + 1, iVar11 < param_2));
  }
  if (uVar7 == 0x65) {
LAB_0058d048:
    if (uVar8 == 0) {
      lVar20 = param_1[1];
      if ((*(char *)(lVar20 + 0x11) != '\0') &&
         (*(int *)(lVar20 + 0x14) = *(int *)(lVar20 + 0x14) + 1, *(char *)(lVar20 + 0x12) == '\0'))
      {
        FUN_005ac65c(lVar20);
      }
      *(undefined4 *)(*(long *)(lVar20 + 8) + 0x40) = 0;
      uVar7 = FUN_005ad0f4();
      if ((*(char *)(lVar20 + 0x11) != '\0') &&
         (iVar3 = *(int *)(lVar20 + 0x14) + -1, *(int *)(lVar20 + 0x14) = iVar3, iVar3 == 0)) {
        FUN_005ac750(lVar20);
      }
      uVar8 = 1;
      if ((uVar7 != 0x65) && (uVar7 != 0)) goto LAB_0058d42c;
    }
    uVar7 = FUN_0058d798(param_1[1],1,(int)param_1[2] + 1);
    if (uVar7 == 0) {
      if (*param_1 != 0) {
        FUN_0058d8d8();
      }
      if ((cVar1 != '\x05') || (uVar7 = FUN_0058dc38(param_1[1],2), uVar7 == 0)) {
        if (iVar2 < iVar10) {
          iVar3 = 0;
          if (iVar2 != 0) {
            iVar3 = iVar10 / iVar2;
          }
          uVar7 = *(uint *)(*(long *)(param_1[1] + 8) + 0x34);
          uVar16 = 0;
          if (uVar7 != 0) {
            uVar16 = DAT_00b0d530 / uVar7;
          }
          lVar20 = (long)iVar2 * (long)(int)uVar8;
          iVar11 = 0;
          if (iVar3 != 0) {
            iVar11 = (int)(uVar8 + iVar3 + -1) / iVar3;
          }
          uVar4 = *(uint *)(lVar17 + 0x20);
          plVar18 = *(long **)(lVar17 + 0x48);
          uVar8 = iVar11 - (uint)(iVar11 == uVar16 + 1);
          if (uVar4 < uVar8) {
LAB_0058d200:
            uVar7 = FUN_0058ddf4(lVar17,0,1);
          }
          else {
            do {
              uVar7 = *(uint *)(*(long *)(param_1[1] + 8) + 0x34);
              uVar16 = 0;
              if (uVar7 != 0) {
                uVar16 = DAT_00b0d530 / uVar7;
              }
              if (uVar8 == uVar16 + 1) {
                uVar7 = 0;
              }
              else {
                uVar7 = (**(code **)(lVar17 + 0x110))(lVar17,uVar8,&local_68,0);
                if (uVar7 == 0) {
                  lVar13 = *(long *)(local_68 + 0x28);
                  if (((*(ushort *)(local_68 + 0x34) >> 2 & 1) == 0) ||
                     (*(uint *)(lVar13 + 0x20) < *(uint *)(local_68 + 0x30))) {
                    uVar7 = *(uint *)(lVar13 + 0x30);
                    if (uVar7 == 0) {
                      if (*(uint *)(lVar13 + 200) < *(uint *)(lVar13 + 0xb8)) {
                        uVar7 = FUN_005b597c();
                      }
                      else {
                        uVar7 = FUN_005b5d54(local_68);
                      }
                    }
                  }
                  else if (*(int *)(lVar13 + 0x80) == 0) {
                    uVar7 = 0;
                  }
                  else {
                    uVar7 = FUN_005b5628(local_68);
                  }
                  if (local_68 != 0) {
                    if ((*(ushort *)(local_68 + 0x34) >> 5 & 1) == 0) {
                      FUN_005ac2a8(local_68);
                    }
                    else {
                      lVar13 = *(long *)(local_68 + 0x28);
                      *(int *)(lVar13 + 0x98) = *(int *)(lVar13 + 0x98) + -1;
                      *(undefined8 *)(local_68 + 0x20) = *(undefined8 *)(lVar13 + 0xa8);
                      *(long *)(lVar13 + 0xa8) = local_68;
                      (**(code **)(**(long **)(lVar13 + 0x48) + 0x90))
                                (*(long **)(lVar13 + 0x48),
                                 *(long *)(lVar13 + 200) * (ulong)(*(int *)(local_68 + 0x30) - 1),
                                 *(undefined8 *)(local_68 + 8));
                    }
                  }
                }
              }
            } while ((uVar7 == 0) && (uVar8 = uVar8 + 1, uVar8 <= uVar4));
            if (uVar7 == 0) goto LAB_0058d200;
          }
          lVar13 = lVar20;
          if ((int)(DAT_00b0d530 + iVar10) <= lVar20) {
            lVar13 = (long)(int)(DAT_00b0d530 + iVar10);
          }
          bVar6 = uVar7 == 0;
          if ((uVar7 == 0) && (lVar19 = (long)(int)(DAT_00b0d530 + iVar2), lVar19 < lVar13)) {
            do {
              iVar10 = 0;
              if (lVar9 != 0) {
                iVar10 = (int)(lVar19 / lVar9);
              }
              local_68 = 0;
              uVar7 = (**(code **)(lVar15 + 0x110))(lVar15,iVar10 + 1,&local_68,0);
              if (uVar7 == 0) {
                uVar7 = (**(code **)(*plVar18 + 0x18))
                                  (plVar18,*(undefined8 *)(local_68 + 8),iVar2,lVar19);
              }
              if (local_68 != 0) {
                if ((*(ushort *)(local_68 + 0x34) >> 5 & 1) == 0) {
                  FUN_005ac2a8(local_68);
                }
                else {
                  lVar14 = *(long *)(local_68 + 0x28);
                  *(int *)(lVar14 + 0x98) = *(int *)(lVar14 + 0x98) + -1;
                  *(undefined8 *)(local_68 + 0x20) = *(undefined8 *)(lVar14 + 0xa8);
                  *(long *)(lVar14 + 0xa8) = local_68;
                  (**(code **)(**(long **)(lVar14 + 0x48) + 0x90))
                            (*(long **)(lVar14 + 0x48),
                             *(long *)(lVar14 + 200) * (ulong)(*(int *)(local_68 + 0x30) - 1),
                             *(undefined8 *)(local_68 + 8));
                }
              }
              lVar19 = lVar19 + lVar9;
              bVar6 = uVar7 == 0;
            } while (bVar6 && lVar19 < lVar13);
          }
          if (((!bVar6) || (uVar7 = (**(code **)(*plVar18 + 0x30))(plVar18,&local_68), uVar7 != 0))
             || ((lVar20 < local_68 &&
                 (uVar7 = (**(code **)(*plVar18 + 0x20))(plVar18,lVar20), uVar7 != 0))))
          goto LAB_0058d42c;
          uVar7 = FUN_0058e0e8(lVar17,0);
        }
        else {
          iVar3 = 0;
          if (iVar10 != 0) {
            iVar3 = iVar2 / iVar10;
          }
          *(uint *)(lVar17 + 0x20) = iVar3 * uVar8;
          uVar7 = FUN_0058ddf4(lVar17,0,0);
        }
        if (uVar7 == 0) {
          uVar8 = FUN_0058e158(param_1[1],0);
          uVar7 = 0x65;
          if (uVar8 != 0) {
            uVar7 = uVar8;
          }
        }
      }
    }
  }
  else if (uVar7 == 0) {
    *(uint *)((long)param_1 + 0x34) = (uVar8 - *(uint *)(param_1 + 3)) + 1;
    *(uint *)(param_1 + 7) = uVar8;
    if (uVar8 < *(uint *)(param_1 + 3)) goto LAB_0058d048;
    if (*(int *)((long)param_1 + 0x3c) == 0) {
      lVar9 = **(long **)(param_1[5] + 8);
      param_1[8] = *(long *)(lVar9 + 0x70);
      *(long **)(lVar9 + 0x70) = param_1;
      *(undefined4 *)((long)param_1 + 0x3c) = 1;
      uVar7 = 0;
    }
    else {
      uVar7 = 0;
    }
  }
LAB_0058d42c:
  if (!bVar5) {
    FUN_0058e32c(param_1[5],0);
    FUN_0058e158(param_1[5],0);
  }
  uVar8 = 7;
  if (uVar7 != 0xc0a) {
    uVar8 = uVar7;
  }
  *(uint *)(param_1 + 6) = uVar8;
LAB_0058d468:
  if ((*param_1 != 0) && (*(long *)(*param_1 + 0x18) != 0)) {
    (*DAT_00b0da80)();
  }
  lVar9 = param_1[5];
  if ((*(char *)(lVar9 + 0x11) != '\0') &&
     (iVar10 = *(int *)(lVar9 + 0x14) + -1, *(int *)(lVar9 + 0x14) = iVar10, iVar10 == 0)) {
    FUN_005ac750();
  }
  if (*(long *)(param_1[4] + 0x18) != 0) {
    (*DAT_00b0da80)();
  }
  return uVar8;
}


// ===== 0058d4dc  FUN_0058d4dc =====

void FUN_0058d4dc(long param_1)

{
  if (*(char *)(param_1 + 0x11) != '\0') {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    if (*(char *)(param_1 + 0x12) == '\0') {
      FUN_005ac65c();
      return;
    }
  }
  return;
}


// ===== 0058d500  FUN_0058d500 =====

undefined8 FUN_0058d500(long *param_1,int param_2,uint *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  
  if (*(char *)((long)param_1 + 0x11) == '\0') {
    if (((char)param_1[2] != '\0') && ((param_2 == 0 || ((char)param_1[2] != '\x01')))) {
      plVar3 = (long *)param_1[1];
      if (param_3 != (uint *)0x0) {
        uVar1 = *(uint *)(*(long *)(plVar3[3] + 0x50) + 0x28);
        uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
        *param_3 = uVar1 >> 0x10 | uVar1 << 0x10;
      }
      if (param_2 != 0) {
        lVar4 = *plVar3;
        if ((*(int *)(lVar4 + 0x80) < *(int *)(*param_1 + 0x2e8)) && (*(char *)(lVar4 + 10) != '\0')
           ) {
          uVar2 = FUN_005b546c(lVar4);
          return uVar2;
        }
      }
      return 0;
    }
  }
  uVar2 = FUN_005ac788();
  return uVar2;
}


// ===== 0058d570  FUN_0058d570 =====

/* WARNING: Removing unreachable block (ram,0x0058d60c) */

int FUN_0058d570(long param_1,ulong param_2,long param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  code *pcVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long local_68;
  
  iVar3 = *(int *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x34);
  lVar14 = (long)iVar3;
  if (iVar3 < 1) {
    iVar5 = 0;
  }
  else {
    lVar15 = lVar14 * (param_2 & 0xffffffff);
    plVar7 = *(long **)(*(long *)(param_1 + 8) + 8);
    iVar5 = *(int *)((long)plVar7 + 0x34);
    lVar16 = (long)iVar5;
    lVar13 = *plVar7;
    lVar17 = lVar15 - lVar14;
    if (iVar5 <= iVar3) {
      iVar3 = iVar5;
    }
    do {
      lVar12 = 0;
      if (lVar16 != 0) {
        lVar12 = lVar17 / lVar16;
      }
      local_68 = 0;
      uVar1 = *(uint *)(*(long *)(*(long *)(param_1 + 8) + 8) + 0x34);
      uVar4 = 0;
      if (uVar1 != 0) {
        uVar4 = DAT_00b0d530 / uVar1;
      }
      if (uVar4 == (uint)lVar12) {
        iVar5 = 0;
      }
      else {
        iVar5 = (**(code **)(lVar13 + 0x110))(lVar13,(uint)lVar12 + 1,&local_68,0);
        if (iVar5 == 0) {
          lVar8 = *(long *)(local_68 + 0x28);
          if (((*(ushort *)(local_68 + 0x34) >> 2 & 1) == 0) ||
             (*(uint *)(lVar8 + 0x20) < *(uint *)(local_68 + 0x30))) {
            iVar5 = *(int *)(lVar8 + 0x30);
            if (iVar5 == 0) {
              if (*(uint *)(lVar8 + 200) < *(uint *)(lVar8 + 0xb8)) {
                iVar5 = FUN_005b597c();
              }
              else {
                iVar5 = FUN_005b5d54();
              }
              goto joined_r0x0058d698;
            }
          }
          else {
            if (*(int *)(lVar8 + 0x80) != 0) {
              iVar5 = FUN_005b5628();
joined_r0x0058d698:
              if (iVar5 != 0) goto LAB_0058d6fc;
            }
            lVar8 = 0;
            if (lVar14 != 0) {
              lVar8 = lVar17 / lVar14;
            }
            lVar12 = *(long *)(local_68 + 8) - lVar16 * lVar12;
            memcpy((void *)(lVar12 + lVar17),(void *)(param_3 + (lVar17 - lVar8 * lVar14)),
                   (long)iVar3);
            iVar5 = 0;
            **(undefined1 **)(local_68 + 0x10) = 0;
            if ((param_4 == 0) && (lVar17 == 0)) {
              iVar5 = 0;
              uVar1 = *(uint *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x40);
              uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
              *(uint *)(lVar12 + 0x1c) = uVar1 >> 0x10 | uVar1 << 0x10;
            }
          }
        }
LAB_0058d6fc:
        if (local_68 != 0) {
          if ((*(ushort *)(local_68 + 0x34) >> 5 & 1) != 0) {
            lVar12 = *(long *)(local_68 + 0x28);
            iVar2 = *(int *)(local_68 + 0x30);
            uVar6 = *(undefined8 *)(local_68 + 8);
            lVar8 = *(long *)(lVar12 + 200);
            plVar7 = *(long **)(lVar12 + 0x48);
            lVar11 = *plVar7;
            uVar10 = *(undefined8 *)(lVar12 + 0xa8);
            *(int *)(lVar12 + 0x98) = *(int *)(lVar12 + 0x98) + -1;
            pcVar9 = *(code **)(lVar11 + 0x90);
            *(long *)(lVar12 + 0xa8) = local_68;
            *(undefined8 *)(local_68 + 0x20) = uVar10;
            (*pcVar9)(plVar7,lVar8 * (ulong)(iVar2 - 1),uVar6);
            if (iVar5 != 0) {
              return iVar5;
            }
            goto LAB_0058d714;
          }
          FUN_005ac2a8();
        }
        if (iVar5 != 0) {
          return iVar5;
        }
      }
LAB_0058d714:
      lVar17 = lVar17 + lVar16;
    } while (lVar17 < lVar15);
  }
  return iVar5;
}


// ===== 0058d798  FUN_0058d798 =====

ulong FUN_0058d798(long param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)(param_1 + 8);
  if ((*(char *)(param_1 + 0x11) == '\0') ||
     (*(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1, *(char *)(param_1 + 0x12) != '\0')) {
    lVar4 = *(long *)(*(long *)(lVar6 + 0x18) + 0x70);
    lVar7 = *(long *)(*(long *)(lVar6 + 0x18) + 0x50);
    lVar5 = *(long *)(lVar4 + 0x28);
    if ((*(ushort *)(lVar4 + 0x34) >> 2 & 1) != 0) goto LAB_0058d7f0;
LAB_0058d838:
    uVar3 = (ulong)*(uint *)(lVar5 + 0x30);
    if (*(uint *)(lVar5 + 0x30) != 0) goto LAB_0058d888;
    if (*(uint *)(lVar5 + 200) < *(uint *)(lVar5 + 0xb8)) {
      uVar3 = FUN_005b597c();
      iVar2 = (int)uVar3;
    }
    else {
      uVar3 = FUN_005b5d54(lVar4);
      iVar2 = (int)uVar3;
    }
joined_r0x0058d858:
    if (iVar2 != 0) goto LAB_0058d888;
  }
  else {
    FUN_005ac65c(param_1);
    lVar4 = *(long *)(*(long *)(lVar6 + 0x18) + 0x70);
    lVar7 = *(long *)(*(long *)(lVar6 + 0x18) + 0x50);
    lVar5 = *(long *)(lVar4 + 0x28);
    if ((*(ushort *)(lVar4 + 0x34) >> 2 & 1) == 0) goto LAB_0058d838;
LAB_0058d7f0:
    if (*(uint *)(lVar5 + 0x20) < *(uint *)(lVar4 + 0x30)) goto LAB_0058d838;
    if (*(int *)(lVar5 + 0x80) != 0) {
      uVar3 = FUN_005b5628(lVar4);
      iVar2 = (int)uVar3;
      goto joined_r0x0058d858;
    }
  }
  uVar1 = (param_3 & 0xff00ff00) >> 8 | (param_3 & 0xff00ff) << 8;
  uVar3 = 0;
  *(uint *)(lVar7 + (param_2 << 2) + 0x24) = uVar1 >> 0x10 | uVar1 << 0x10;
  if (param_2 == 7) {
    *(char *)(lVar6 + 0x22) = (char)param_3;
  }
LAB_0058d888:
  if ((*(char *)(param_1 + 0x11) != '\0') &&
     (iVar2 = *(int *)(param_1 + 0x14) + -1, *(int *)(param_1 + 0x14) = iVar2, iVar2 == 0)) {
    FUN_005ac750(param_1);
    return uVar3 & 0xffffffff;
  }
  return uVar3;
}


// ===== 0058d8d8  FUN_0058d8d8 =====

void FUN_0058d8d8(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  if (*(char *)(param_1 + 0x6f) == '\0') {
    FUN_005ac38c(param_1);
  }
  iVar2 = *(int *)(param_1 + 0x28);
  if (0 < iVar2) {
    lVar6 = 0;
    lVar9 = 0x18;
    do {
      lVar3 = *(long *)(*(long *)(param_1 + 0x20) + lVar9);
      if (lVar3 != 0) {
        if (*(int *)(param_1 + 0x48) == 0) {
          FUN_005d5618();
          iVar2 = *(int *)(param_1 + 0x28);
        }
        else {
          *(ushort *)(lVar3 + 0x72) = *(ushort *)(lVar3 + 0x72) | 8;
        }
      }
      lVar6 = lVar6 + 1;
      lVar9 = lVar9 + 0x20;
    } while (lVar6 < iVar2);
  }
  lVar6 = *(long *)(param_1 + 0x248);
  *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) & 0xffffffee;
  if (lVar6 != 0) {
    *(undefined8 *)(param_1 + 0x248) = 0;
    do {
      lVar6 = *(long *)(lVar6 + 0x28);
      FUN_005bc430();
    } while (lVar6 != 0);
  }
  if (*(char *)(param_1 + 0x6f) == '\0') {
    FUN_005ac41c(param_1);
    iVar2 = *(int *)(param_1 + 0x48);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x48);
  }
  if (iVar2 != 0) {
    return;
  }
  if (*(int *)(param_1 + 0x28) < 3) {
    *(undefined4 *)(param_1 + 0x28) = 2;
  }
  else {
    lVar6 = 2;
    lVar9 = 0;
    iVar2 = 2;
    do {
      lVar3 = *(long *)(param_1 + 0x20) + lVar9;
      if (*(long *)(lVar3 + 0x48) != 0) {
        if (iVar2 < lVar6) {
          uVar11 = *(undefined8 *)(lVar3 + 0x40);
          uVar10 = *(undefined8 *)(lVar3 + 0x58);
          uVar5 = *(undefined8 *)(lVar3 + 0x50);
          puVar7 = (undefined8 *)(*(long *)(param_1 + 0x20) + (long)iVar2 * 0x20);
          puVar7[1] = *(undefined8 *)(lVar3 + 0x48);
          *puVar7 = uVar11;
          puVar7[3] = uVar10;
          puVar7[2] = uVar5;
        }
        iVar2 = iVar2 + 1;
        goto LAB_0058d9e8;
      }
      puVar7 = *(undefined8 **)(lVar3 + 0x40);
      if (puVar7 == (undefined8 *)0x0) {
LAB_0058daec:
        *(undefined8 *)(lVar3 + 0x40) = 0;
      }
      else if (puVar7 < *(undefined8 **)(param_1 + 0x1e8)) {
        if (puVar7 < *(undefined8 **)(param_1 + 0x1d8)) {
          if (puVar7 < *(undefined8 **)(param_1 + 0x1e0)) goto LAB_0058da54;
          uVar5 = *(undefined8 *)(param_1 + 0x1c0);
          *(undefined8 **)(param_1 + 0x1c0) = puVar7;
          *(undefined8 *)(lVar3 + 0x40) = 0;
          *puVar7 = uVar5;
        }
        else {
          uVar5 = *(undefined8 *)(param_1 + 0x1d0);
          *(undefined8 **)(param_1 + 0x1d0) = puVar7;
          *(undefined8 *)(lVar3 + 0x40) = 0;
          *puVar7 = uVar5;
        }
      }
      else {
LAB_0058da54:
        if (*(long *)(param_1 + 0x300) == 0) {
          puVar8 = &DAT_00b0da18;
          if (DAT_00b0d9f0 != 0) {
            if (DAT_00b103d8 != (undefined8 *)0x0) {
              (*DAT_00b0da70)();
            }
            iVar1 = (*DAT_00b0da28)(puVar7);
            DAT_00b105b8 = DAT_00b105b8 - iVar1;
            DAT_00b10600 = DAT_00b10600 + -1;
            (*DAT_00b0da18)(puVar7);
            if (DAT_00b103d8 == (undefined8 *)0x0) goto LAB_0058daec;
            puVar8 = &DAT_00b0da80;
            puVar7 = DAT_00b103d8;
          }
          (*(code *)*puVar8)(puVar7);
          goto LAB_0058daec;
        }
        FUN_005a7654(param_1,puVar7);
        *(undefined8 *)(lVar3 + 0x40) = 0;
      }
LAB_0058d9e8:
      lVar6 = lVar6 + 1;
      lVar9 = lVar9 + 0x20;
    } while (lVar6 < *(int *)(param_1 + 0x28));
    *(int *)(param_1 + 0x28) = iVar2;
    if (2 < iVar2) {
      return;
    }
  }
  puVar8 = *(undefined8 **)(param_1 + 0x20);
  puVar7 = (undefined8 *)(param_1 + 0x298);
  if (puVar8 == puVar7) {
    return;
  }
  uVar11 = puVar8[4];
  uVar10 = puVar8[7];
  uVar5 = puVar8[6];
  uVar13 = puVar8[1];
  uVar12 = *puVar8;
  uVar15 = puVar8[3];
  uVar14 = puVar8[2];
  *(undefined8 *)(param_1 + 0x2c0) = puVar8[5];
  *(undefined8 *)(param_1 + 0x2b8) = uVar11;
  *(undefined8 *)(param_1 + 0x2d0) = uVar10;
  *(undefined8 *)(param_1 + 0x2c8) = uVar5;
  *(undefined8 *)(param_1 + 0x2a0) = uVar13;
  *puVar7 = uVar12;
  *(undefined8 *)(param_1 + 0x2b0) = uVar15;
  *(undefined8 *)(param_1 + 0x2a8) = uVar14;
  if (puVar8 < *(undefined8 **)(param_1 + 0x1e8)) {
    if (puVar8 < *(undefined8 **)(param_1 + 0x1d8)) {
      if (puVar8 < *(undefined8 **)(param_1 + 0x1e0)) goto LAB_0058db64;
      uVar5 = *(undefined8 *)(param_1 + 0x1c0);
      *(undefined8 **)(param_1 + 0x1c0) = puVar8;
    }
    else {
      uVar5 = *(undefined8 *)(param_1 + 0x1d0);
      *(undefined8 **)(param_1 + 0x1d0) = puVar8;
    }
    *puVar8 = uVar5;
  }
  else {
LAB_0058db64:
    if (*(long *)(param_1 + 0x300) == 0) {
      puVar4 = &DAT_00b0da18;
      if (DAT_00b0d9f0 != 0) {
        if (DAT_00b103d8 != (undefined8 *)0x0) {
          (*DAT_00b0da70)();
        }
        iVar2 = (*DAT_00b0da28)(puVar8);
        DAT_00b105b8 = DAT_00b105b8 - iVar2;
        DAT_00b10600 = DAT_00b10600 + -1;
        (*DAT_00b0da18)(puVar8);
        if (DAT_00b103d8 == (undefined8 *)0x0) goto LAB_0058dc18;
        puVar4 = &DAT_00b0da80;
        puVar8 = DAT_00b103d8;
      }
      (*(code *)*puVar4)(puVar8);
    }
    else {
      FUN_005a7654(param_1,puVar8);
    }
  }
LAB_0058dc18:
  *(undefined8 **)(param_1 + 0x20) = puVar7;
  return;
}


// ===== 0058dc38  FUN_0058dc38 =====

ulong FUN_0058dc38(long *param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = param_1[1];
  cVar1 = *(char *)((long)param_1 + 0x11);
  *(ushort *)(lVar6 + 0x28) = *(ushort *)(lVar6 + 0x28) & 0xffdf | (ushort)(param_2 == 1) << 5;
  if (((cVar1 != '\0') || ((char)param_1[2] == '\0')) &&
     (uVar3 = FUN_005ac788(param_1,0,0), (int)uVar3 != 0)) goto LAB_0058dd88;
  lVar4 = *(long *)(lVar6 + 0x18);
  lVar7 = *(long *)(lVar4 + 0x50);
  if (((uint)*(byte *)(lVar7 + 0x12) == (param_2 & 0xff)) &&
     ((uint)*(byte *)(lVar7 + 0x13) == (uint)*(byte *)(lVar7 + 0x12))) {
    uVar3 = 0;
    goto LAB_0058dd88;
  }
  if ((*(char *)((long)param_1 + 0x11) == '\0') && (1 < *(byte *)(param_1 + 2))) {
    if ((*(int *)(*(long *)param_1[1] + 0x80) < *(int *)(*param_1 + 0x2e8)) &&
       (*(char *)(*(long *)param_1[1] + 10) != '\0')) {
      uVar3 = FUN_005b546c();
      iVar2 = (int)uVar3;
      goto joined_r0x0058dce4;
    }
  }
  else {
    uVar3 = FUN_005ac788(param_1,2,0);
    iVar2 = (int)uVar3;
joined_r0x0058dce4:
    if (iVar2 != 0) goto LAB_0058dd88;
    lVar4 = *(long *)(lVar6 + 0x18);
  }
  lVar4 = *(long *)(lVar4 + 0x70);
  lVar5 = *(long *)(lVar4 + 0x28);
  if (((*(ushort *)(lVar4 + 0x34) >> 2 & 1) == 0) ||
     (*(uint *)(lVar5 + 0x20) < *(uint *)(lVar4 + 0x30))) {
    uVar3 = (ulong)*(uint *)(lVar5 + 0x30);
    if (*(uint *)(lVar5 + 0x30) != 0) goto LAB_0058dd88;
    if (*(uint *)(lVar5 + 200) < *(uint *)(lVar5 + 0xb8)) {
      uVar3 = FUN_005b597c();
    }
    else {
      uVar3 = FUN_005b5d54(lVar4);
    }
LAB_0058dd78:
    if ((int)uVar3 != 0) goto LAB_0058dd88;
  }
  else if (*(int *)(lVar5 + 0x80) != 0) {
    uVar3 = FUN_005b5628(lVar4);
    goto LAB_0058dd78;
  }
  uVar3 = 0;
  *(char *)(lVar7 + 0x12) = (char)param_2;
  *(char *)(lVar7 + 0x13) = (char)param_2;
LAB_0058dd88:
  *(ushort *)(lVar6 + 0x28) = *(ushort *)(lVar6 + 0x28) & 0xffdf;
  return uVar3;
}


// ===== 0058dda4  FUN_0058dda4 =====

ulong FUN_0058dda4(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x28);
  if (((*(ushort *)(param_1 + 0x34) >> 2 & 1) == 0) ||
     (*(uint *)(lVar3 + 0x20) < *(uint *)(param_1 + 0x30))) {
    uVar1 = *(uint *)(lVar3 + 0x30);
    if (uVar1 == 0) {
      if (*(uint *)(lVar3 + 200) < *(uint *)(lVar3 + 0xb8)) {
        uVar2 = FUN_005b597c();
        return uVar2;
      }
      uVar2 = FUN_005b5d54();
      return uVar2;
    }
  }
  else {
    uVar1 = *(uint *)(lVar3 + 0x80);
    if (uVar1 != 0) {
      uVar2 = FUN_005b5628();
      return uVar2;
    }
  }
  return (ulong)uVar1;
}


// ===== 0058ddf4  FUN_0058ddf4 =====

int FUN_0058ddf4(long param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  undefined8 uVar9;
  long lVar10;
  long local_38;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    return *(int *)(param_1 + 0x30);
  }
  if ((DAT_00b0db80 != (code *)0x0) && (iVar3 = (*DAT_00b0db80)(400), iVar3 != 0)) {
    return 10;
  }
  if (*(byte *)(param_1 + 0x15) < 3) {
    return 0;
  }
  if (*(char *)(param_1 + 0x10) == '\0') {
LAB_0058df1c:
    if (*(long *)(param_1 + 0x128) == 0) {
      iVar3 = FUN_005b7170();
      if (iVar3 != 0) {
        return iVar3;
      }
      iVar3 = FUN_005b72ec(param_1,param_2);
      if (iVar3 != 0) {
        return iVar3;
      }
      iVar3 = FUN_005b7500(param_1,0);
      if (iVar3 != 0) {
        return iVar3;
      }
      uVar4 = FUN_005b274c(*(undefined8 *)(param_1 + 0x120));
      iVar3 = FUN_005b779c(param_1,uVar4);
      if (iVar3 != 0) {
        return iVar3;
      }
      FUN_005b0838(*(undefined8 *)(param_1 + 0x120));
      uVar1 = *(uint *)(param_1 + 0x20);
      if ((*(uint *)(param_1 + 0x28) < uVar1) &&
         (iVar3 = FUN_005af098(param_1,uVar1 - (uVar1 == *(uint *)(param_1 + 0xc0))), iVar3 != 0)) {
        return iVar3;
      }
      if (param_3 != 0) goto LAB_0058e0a0;
      iVar3 = FUN_0058e0e8(param_1,param_2);
    }
    else {
      local_38 = 0;
      lVar7 = FUN_005b274c(*(undefined8 *)(param_1 + 0x120));
      if (lVar7 == 0) {
        (**(code **)(param_1 + 0x110))(param_1,1,&local_38,0);
        *(undefined8 *)(local_38 + 0x20) = 0;
        lVar7 = local_38;
      }
      iVar3 = FUN_005b6750(param_1,lVar7,*(undefined4 *)(param_1 + 0x20),1);
      if (local_38 != 0) {
        if ((*(ushort *)(local_38 + 0x34) >> 5 & 1) == 0) {
          FUN_005ac2a8(local_38);
        }
        else {
          lVar7 = *(long *)(local_38 + 0x28);
          iVar2 = *(int *)(local_38 + 0x30);
          uVar4 = *(undefined8 *)(local_38 + 8);
          lVar6 = *(long *)(lVar7 + 200);
          plVar5 = *(long **)(lVar7 + 0x48);
          lVar10 = *plVar5;
          uVar9 = *(undefined8 *)(lVar7 + 0xa8);
          *(int *)(lVar7 + 0x98) = *(int *)(lVar7 + 0x98) + -1;
          pcVar8 = *(code **)(lVar10 + 0x90);
          *(long *)(lVar7 + 0xa8) = local_38;
          *(undefined8 *)(local_38 + 0x20) = uVar9;
          (*pcVar8)(plVar5,lVar6 * (ulong)(iVar2 - 1),uVar4);
        }
      }
      if (iVar3 == 0) {
        FUN_005b0838(*(undefined8 *)(param_1 + 0x120));
      }
    }
    if (iVar3 != 0) {
      return iVar3;
    }
  }
  else {
    if (**(long **)(param_1 + 0x48) != 0) {
      plVar5 = *(long **)(param_1 + 0x120);
      iVar3 = (int)plVar5[4];
      if (iVar3 < 0) {
        lVar7 = (long)(int)plVar5[6] + (long)(int)plVar5[5];
        lVar6 = 0;
        if (lVar7 != 0) {
          lVar6 = ((long)iVar3 * -0x400) / lVar7;
        }
        if (999999999 < lVar6) {
          lVar6 = 1000000000;
        }
        iVar3 = (int)lVar6;
      }
      lVar7 = *plVar5;
      if (lVar7 == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = 0;
        do {
          lVar7 = *(long *)(lVar7 + 0x40);
          lVar6 = lVar6 + 100;
        } while (lVar7 != 0);
      }
      if (iVar3 != 0) {
        iVar2 = 0;
        if ((long)iVar3 != 0) {
          iVar2 = (int)(lVar6 / (long)iVar3);
        }
        if (0x18 < iVar2) goto LAB_0058df1c;
      }
    }
    for (lVar7 = *(long *)(param_1 + 0x70); lVar7 != 0; lVar7 = *(long *)(lVar7 + 0x40)) {
      *(undefined4 *)(lVar7 + 0x18) = 1;
    }
  }
LAB_0058e0a0:
  if (*(long *)(param_1 + 0x128) != 0) {
    return 0;
  }
  *(undefined1 *)(param_1 + 0x15) = 5;
  return 0;
}


// ===== 0058e0e8  FUN_0058e0e8 =====

undefined8 FUN_0058e0e8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = **(long **)(param_1 + 0x48);
  if ((lVar2 == 0) ||
     (uVar1 = (**(code **)(lVar2 + 0x50))(*(long **)(param_1 + 0x48),0x15,param_2),
     (int)uVar1 == 0xc || (int)uVar1 == 0)) {
    if ((*(char *)(param_1 + 0xb) == '\0') && (*(char *)(param_1 + 0xe) != '\0')) {
                    /* WARNING: Could not recover jumptable at 0x0058e154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(**(long **)(param_1 + 0x48) + 0x28))();
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 0058e158  FUN_0058e158 =====

ulong FUN_0058e158(long param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    return 0;
  }
  if ((*(char *)(param_1 + 0x11) == '\0') ||
     (*(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1, *(char *)(param_1 + 0x12) != '\0')) {
    if (*(char *)(param_1 + 0x10) == '\x02') goto LAB_0058e198;
LAB_0058e1fc:
    FUN_005b7da8(param_1);
    cVar1 = *(char *)(param_1 + 0x11);
  }
  else {
    FUN_005ac65c(param_1);
    if (*(char *)(param_1 + 0x10) != '\x02') goto LAB_0058e1fc;
LAB_0058e198:
    plVar7 = *(long **)(param_1 + 8);
    lVar6 = *plVar7;
    uVar4 = (ulong)*(uint *)(lVar6 + 0x30);
    if (*(uint *)(lVar6 + 0x30) == 0) {
      *(int *)(lVar6 + 0x84) = *(int *)(lVar6 + 0x84) + 1;
      if (((*(char *)(lVar6 + 0x15) != '\x02') || (*(char *)(lVar6 + 8) == '\0')) ||
         (*(char *)(lVar6 + 9) != '\x01')) {
        uVar4 = FUN_005af7e8(lVar6,*(undefined1 *)(lVar6 + 0x18),1);
        uVar3 = (uint)uVar4;
        if (((uVar3 & 0xff) == 0xd) || ((uVar3 & 0xff) == 10)) {
          *(uint *)(lVar6 + 0x30) = uVar3;
          *(undefined1 *)(lVar6 + 0x15) = 6;
          if (uVar3 == 0) {
            if (*(char *)(lVar6 + 0x1b) == '\0') {
              pcVar5 = FUN_005b1458;
            }
            else {
              pcVar5 = FUN_005b11d0;
            }
            *(code **)(lVar6 + 0x110) = pcVar5;
            goto LAB_0058e2e8;
          }
          *(code **)(lVar6 + 0x110) = FUN_005b11c4;
        }
        goto LAB_0058e1a8;
      }
      *(undefined1 *)(lVar6 + 0x15) = 1;
    }
    else {
LAB_0058e1a8:
      if ((param_2 == 0) && ((int)uVar4 != 0)) {
        if (*(char *)(param_1 + 0x11) == '\0') {
          return uVar4;
        }
        iVar2 = *(int *)(param_1 + 0x14) + -1;
        *(int *)(param_1 + 0x14) = iVar2;
        goto joined_r0x0058e1c4;
      }
    }
LAB_0058e2e8:
    iVar2 = *(int *)(param_1 + 0x1c);
    lVar6 = plVar7[0xc];
    *(undefined1 *)((long)plVar7 + 0x24) = 1;
    *(int *)(param_1 + 0x1c) = iVar2 + -1;
    FUN_005b058c(lVar6);
    plVar7[0xc] = 0;
    FUN_005b7da8(param_1);
    cVar1 = *(char *)(param_1 + 0x11);
  }
  if (cVar1 == '\0') {
    return 0;
  }
  uVar4 = 0;
  iVar2 = *(int *)(param_1 + 0x14) + -1;
  *(int *)(param_1 + 0x14) = iVar2;
joined_r0x0058e1c4:
  if (iVar2 != 0) {
    return uVar4;
  }
  FUN_005ac750(param_1);
  return uVar4 & 0xffffffff;
}


// ===== 0058e32c  FUN_0058e32c =====

/* WARNING: Type propagation algorithm not settling */

ulong FUN_0058e32c(long *param_1,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  uint uVar19;
  long *plVar20;
  
  if ((char)param_1[2] != '\x02') {
    return 0;
  }
  plVar20 = (long *)param_1[1];
  if ((*(char *)((long)param_1 + 0x11) == '\0') ||
     (*(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + 1,
     *(char *)((long)param_1 + 0x12) != '\0')) {
    cVar2 = *(char *)((long)plVar20 + 0x21);
  }
  else {
    FUN_005ac65c(param_1);
    cVar2 = *(char *)((long)plVar20 + 0x21);
  }
  if (cVar2 != '\0') {
    puVar18 = (undefined8 *)param_1[1];
    uVar17 = *puVar18;
    for (lVar10 = puVar18[2]; lVar10 != 0; lVar10 = *(long *)(lVar10 + 0x28)) {
      *(byte *)(lVar10 + 1) = *(byte *)(lVar10 + 1) & 0xfb;
    }
    if (*(char *)((long)puVar18 + 0x22) == '\0') {
      uVar19 = *(uint *)(puVar18 + 8);
      if (uVar19 < 2) {
        uVar7 = 0;
        if (uVar19 == 0) goto LAB_0058e488;
LAB_0058e46c:
        uVar7 = 0;
        if (*(uint *)((long)puVar18 + 0x34) != 0) {
          uVar7 = DAT_00b0d530 / *(uint *)((long)puVar18 + 0x34);
        }
        uVar7 = uVar7 + 1;
        if (uVar19 == uVar7) goto LAB_0058e488;
        lVar10 = *param_1;
        uVar7 = *(uint *)(*(long *)(puVar18[3] + 0x50) + 0x24);
        uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
        uVar3 = uVar7 >> 0x10 | uVar7 << 0x10;
        uVar7 = uVar3;
        if (*(code **)(lVar10 + 0x150) != (code *)0x0) {
          uVar7 = *(uint *)(lVar10 + 0x28);
          if ((int)uVar7 < 1) {
            uVar9 = 0;
          }
          else {
            uVar15 = 0;
            puVar16 = (undefined8 *)(*(long *)(lVar10 + 0x20) + 8);
            do {
              uVar9 = uVar15;
              if ((long *)*puVar16 == param_1) break;
              uVar15 = uVar15 + 1;
              puVar16 = puVar16 + 4;
              uVar9 = (ulong)uVar7;
            } while (uVar7 != uVar15);
          }
          uVar7 = (**(code **)(lVar10 + 0x150))
                            (*(undefined8 *)(lVar10 + 0x140),
                             *(undefined8 *)(*(long *)(lVar10 + 0x20) + uVar9 * 0x20),uVar19,uVar3);
          if (uVar3 <= uVar7) {
            uVar7 = uVar3;
          }
          if (uVar7 == 0) goto LAB_0058e3ac;
        }
        uVar8 = *(uint *)(puVar18 + 7) / 5;
        if (uVar19 < 2) {
          iVar11 = 0;
          uVar12 = 0;
          if (*(uint *)((long)puVar18 + 0x34) != 0) {
            uVar12 = DAT_00b0d530 / *(uint *)((long)puVar18 + 0x34);
          }
        }
        else {
          uVar4 = uVar8 + 1;
          uVar13 = 0;
          if (uVar4 != 0) {
            uVar13 = (uVar19 - 2) / uVar4;
          }
          uVar12 = 0;
          if (*(uint *)((long)puVar18 + 0x34) != 0) {
            uVar12 = DAT_00b0d530 / *(uint *)((long)puVar18 + 0x34);
          }
          iVar11 = 2;
          if (uVar13 * uVar4 + 1 == uVar12) {
            iVar11 = 3;
          }
          iVar11 = iVar11 + uVar13 * uVar4;
        }
        uVar8 = uVar8 + 1;
        uVar13 = *(uint *)(puVar18 + 7) / 5;
        uVar4 = 0;
        if (uVar13 != 0) {
          uVar4 = ((uVar7 - uVar19) + uVar13 + iVar11) / uVar13;
        }
        uVar13 = uVar12 + 1;
        uVar4 = (uVar19 - uVar7) - uVar4;
        uVar4 = uVar4 - (uVar13 < uVar19 && uVar4 < uVar13);
LAB_0058e60c:
        do {
          uVar14 = uVar4;
          if (uVar14 < 2) {
            uVar4 = uVar14 - 1;
            if (uVar14 == 0) goto LAB_0058e60c;
          }
          else {
            uVar5 = 0;
            if (uVar8 != 0) {
              uVar5 = (uVar14 - 2) / uVar8;
            }
            iVar11 = 2;
            if (uVar5 * uVar8 + 1 == uVar12) {
              iVar11 = 3;
            }
            uVar4 = uVar14 - 1;
            if (uVar14 == iVar11 + uVar5 * uVar8) goto LAB_0058e60c;
          }
          uVar4 = uVar14 - 1;
        } while (uVar14 == uVar13);
        if (uVar19 < uVar14) {
          uVar9 = 0xb;
          sqlite3_log(0xb,"%s at line %d of [%.10s]","database corruption",0x12800,
                      "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
          cVar2 = *(char *)((long)param_1 + 0x11);
        }
        else {
          if (uVar14 < uVar19) {
            uVar8 = FUN_005b7fb0(puVar18,0,0);
            if (uVar8 == 0) {
              do {
                uVar8 = FUN_005b800c(puVar18,uVar14,uVar19,uVar7 == uVar3);
                uVar19 = uVar19 - 1;
                bVar6 = uVar8 == 0;
                if (uVar19 <= uVar14) break;
              } while (uVar8 == 0);
            }
            else {
              bVar6 = false;
            }
          }
          else {
            uVar8 = 0;
            bVar6 = true;
          }
          bVar1 = false;
          if (uVar8 != 0x65) {
            bVar1 = (bool)(bVar6 ^ 1);
          }
          if ((!bVar1) && (uVar3 != 0)) {
            uVar8 = FUN_0058dda4(*(undefined8 *)(puVar18[3] + 0x70),param_2);
            if (uVar7 == uVar3) {
              *(undefined4 *)(*(long *)(puVar18[3] + 0x50) + 0x20) = 0;
              *(undefined4 *)(*(long *)(puVar18[3] + 0x50) + 0x24) = 0;
            }
            uVar19 = (uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8;
            *(uint *)(*(long *)(puVar18[3] + 0x50) + 0x1c) = uVar19 >> 0x10 | uVar19 << 0x10;
            *(undefined1 *)((long)puVar18 + 0x23) = 1;
            *(uint *)(puVar18 + 8) = uVar14;
          }
          if (uVar8 == 0) goto LAB_0058e3ac;
          uVar9 = (ulong)uVar8;
          FUN_005b1d80(uVar17,param_2);
          cVar2 = *(char *)((long)param_1 + 0x11);
        }
      }
      else {
        uVar7 = 0;
        if (*(uint *)((long)puVar18 + 0x34) != 0) {
          uVar7 = DAT_00b0d530 / *(uint *)((long)puVar18 + 0x34);
        }
        uVar3 = *(uint *)(puVar18 + 7) / 5 + 1;
        uVar8 = 0;
        if (uVar3 != 0) {
          uVar8 = (uVar19 - 2) / uVar3;
        }
        iVar11 = 2;
        if (uVar8 * uVar3 + 1 == uVar7) {
          iVar11 = 3;
        }
        uVar7 = iVar11 + uVar8 * uVar3;
        if (uVar7 != uVar19) goto LAB_0058e46c;
LAB_0058e488:
        uVar9 = 0xb;
        sqlite3_log(uVar7,0xb,"%s at line %d of [%.10s]","database corruption",0x127e5,
                    "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
        cVar2 = *(char *)((long)param_1 + 0x11);
      }
      if (cVar2 == '\0') {
        return uVar9;
      }
      iVar11 = *(int *)((long)param_1 + 0x14) + -1;
      *(int *)((long)param_1 + 0x14) = iVar11;
      goto joined_r0x0058e3dc;
    }
  }
LAB_0058e3ac:
  lVar10 = *plVar20;
  if (*(char *)((long)plVar20 + 0x23) != '\0') {
    *(int *)(lVar10 + 0x20) = (int)plVar20[8];
  }
  uVar9 = FUN_0058ddf4(lVar10,param_2,0);
  if (*(char *)((long)param_1 + 0x11) == '\0') {
    return uVar9;
  }
  iVar11 = *(int *)((long)param_1 + 0x14) + -1;
  *(int *)((long)param_1 + 0x14) = iVar11;
joined_r0x0058e3dc:
  if (iVar11 == 0) {
    uVar9 = uVar9 & 0xffffffff;
    FUN_005ac750(param_1);
  }
  return uVar9;
}


// ===== 0058e7a0  sqlite3_backup_finish =====

int sqlite3_backup_finish(long *param_1)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  
  if (param_1 == (long *)0x0) {
    return 0;
  }
  lVar8 = param_1[4];
  if (*(long *)(lVar8 + 0x18) != 0) {
    (*DAT_00b0da70)();
  }
  lVar4 = param_1[5];
  if (*(char *)(lVar4 + 0x11) != '\0') {
    *(int *)(lVar4 + 0x14) = *(int *)(lVar4 + 0x14) + 1;
    if (*(char *)(lVar4 + 0x12) == '\0') {
      FUN_005ac65c();
    }
  }
  if ((*param_1 != 0) && ((*(long *)(*param_1 + 0x18) == 0 || ((*DAT_00b0da70)(), *param_1 != 0))))
  {
    *(int *)(param_1[5] + 0x18) = *(int *)(param_1[5] + 0x18) + -1;
  }
  if (*(int *)((long)param_1 + 0x3c) != 0) {
    plVar2 = (long *)(**(long **)(param_1[5] + 8) + 0x70);
    do {
      plVar6 = plVar2;
      plVar7 = (long *)*plVar6;
      plVar2 = plVar7 + 8;
    } while (plVar7 != param_1);
    *plVar6 = param_1[8];
  }
  FUN_0058e998(param_1[1],0,0);
  lVar4 = *param_1;
  iVar1 = 0;
  if ((int)param_1[6] != 0x65) {
    iVar1 = (int)param_1[6];
  }
  if (lVar4 != 0) {
    *(int *)(lVar4 + 0x50) = iVar1;
    if (iVar1 == 0) {
      if (*(long *)(lVar4 + 0x188) == 0) {
        *(undefined4 *)(lVar4 + 0x54) = 0xffffffff;
      }
      else {
        FUN_005ac5c0(lVar4,0);
      }
    }
    else {
      FUN_005ac5c0(lVar4,iVar1);
    }
    FUN_0058eb1c(*param_1);
  }
  lVar4 = param_1[5];
  if (*(char *)(lVar4 + 0x11) != '\0') {
    iVar3 = *(int *)(lVar4 + 0x14) + -1;
    *(int *)(lVar4 + 0x14) = iVar3;
    if (iVar3 == 0) {
      FUN_005ac750();
    }
  }
  if (*param_1 != 0) {
    puVar5 = &DAT_00b0da18;
    if (DAT_00b0d9f0 != 0) {
      if (DAT_00b103d8 != (long *)0x0) {
        (*DAT_00b0da70)();
      }
      iVar3 = (*DAT_00b0da28)(param_1);
      DAT_00b105b8 = DAT_00b105b8 - iVar3;
      DAT_00b10600 = DAT_00b10600 + -1;
      (*DAT_00b0da18)(param_1);
      if (DAT_00b103d8 == (long *)0x0) goto LAB_0058e978;
      puVar5 = &DAT_00b0da80;
      param_1 = DAT_00b103d8;
    }
    (*(code *)*puVar5)(param_1);
  }
LAB_0058e978:
  FUN_0058eb1c(lVar8);
  return iVar1;
}


// ===== 0058e998  FUN_0058e998 =====

void FUN_0058e998(long param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long local_38;
  
  plVar5 = *(long **)(param_1 + 8);
  iVar1 = (int)param_2;
  if ((*(char *)(param_1 + 0x11) != '\0') &&
     (*(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1, *(char *)(param_1 + 0x12) == '\0')) {
    param_3 = param_3 & 0xffffffff;
    param_2 = param_2 & 0xffffffff;
    FUN_005ac65c(param_1);
  }
  if (iVar1 == 0) {
    if ((plVar5[2] == 0) || (uVar2 = FUN_005b84c4(plVar5[2],0,0), uVar2 == 0)) goto LAB_0058e9dc;
    param_2 = (ulong)uVar2;
    param_3 = 0;
  }
  FUN_005bb4dc(param_1,param_2,param_3);
LAB_0058e9dc:
  if (*(char *)(param_1 + 0x10) == '\x02') {
    FUN_005b1d80(*plVar5);
    iVar1 = (**(code **)(*plVar5 + 0x110))(*plVar5,1,&local_38,0);
    if (iVar1 == 0) {
      lVar3 = *(long *)(local_38 + 0x10);
      if (*(int *)(lVar3 + 4) != 1) {
        uVar4 = *(undefined8 *)(local_38 + 8);
        *(long *)(lVar3 + 0x70) = local_38;
        *(undefined4 *)(lVar3 + 4) = 1;
        *(long **)(lVar3 + 0x48) = plVar5;
        *(undefined8 *)(lVar3 + 0x50) = uVar4;
        *(undefined1 *)(lVar3 + 9) = 100;
      }
      uVar2 = *(uint *)(*(long *)(lVar3 + 0x50) + 0x1c);
      uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
      uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
      if (uVar2 == 0) {
        uVar2 = *(uint *)(*plVar5 + 0x20);
      }
      lVar3 = *(long *)(lVar3 + 0x70);
      *(uint *)(plVar5 + 8) = uVar2;
      lVar3 = *(long *)(lVar3 + 0x28);
      FUN_005ac2a8();
      if (*(long *)(*(long *)(lVar3 + 0x120) + 0x18) == 0) {
        FUN_005b1c90(lVar3);
      }
    }
    *(undefined1 *)((long)plVar5 + 0x24) = 1;
    FUN_005b058c(plVar5[0xc]);
    plVar5[0xc] = 0;
  }
  FUN_005b7da8(param_1);
  if ((*(char *)(param_1 + 0x11) != '\0') &&
     (iVar1 = *(int *)(param_1 + 0x14) + -1, *(int *)(param_1 + 0x14) = iVar1, iVar1 == 0)) {
    FUN_005ac750(param_1);
    return;
  }
  return;
}


// ===== 0058eb1c  FUN_0058eb1c =====

void FUN_0058eb1c(long *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  
  if ((*(char *)((long)param_1 + 0x71) != -0x59) || (param_1[1] != 0)) {
LAB_0058eb50:
    param_1 = (long *)param_1[3];
    if (param_1 == (long *)0x0) {
      return;
    }
    puVar10 = &DAT_00b0da80;
    goto LAB_0058eb60;
  }
  uVar4 = (ulong)*(uint *)(param_1 + 5);
  if (0 < (int)*(uint *)(param_1 + 5)) {
    plVar11 = (long *)(param_1[4] + 8);
    do {
      if ((*plVar11 != 0) && (*(int *)(*plVar11 + 0x18) != 0)) goto LAB_0058eb50;
      uVar4 = uVar4 - 1;
      plVar11 = plVar11 + 4;
    } while (uVar4 != 0);
  }
  FUN_005bcff0(param_1,0);
  FUN_005bd18c(param_1);
  if (0 < (int)param_1[5]) {
    lVar6 = param_1[4];
    if (*(long *)(lVar6 + 8) != 0) {
      FUN_005beb90();
      *(undefined8 *)(lVar6 + 8) = 0;
      *(undefined8 *)(lVar6 + 0x18) = 0;
    }
    if (1 < (int)param_1[5]) {
      lVar6 = param_1[4];
      if (*(long *)(lVar6 + 0x28) != 0) {
        FUN_005beb90();
        *(undefined8 *)(lVar6 + 0x28) = 0;
      }
      if (2 < (int)param_1[5]) {
        lVar7 = 0;
        lVar6 = 2;
        do {
          lVar15 = param_1[4] + lVar7;
          if (*(long *)(lVar15 + 0x48) != 0) {
            FUN_005beb90();
            *(undefined8 *)(lVar15 + 0x48) = 0;
            *(undefined8 *)(lVar15 + 0x58) = 0;
          }
          lVar6 = lVar6 + 1;
          lVar7 = lVar7 + 0x20;
        } while (lVar6 < (int)param_1[5]);
      }
    }
  }
  if (*(long *)(param_1[4] + 0x38) != 0) {
    FUN_005d5618();
  }
  lVar6 = param_1[0x49];
  if (lVar6 != 0) {
    param_1[0x49] = 0;
    do {
      lVar6 = *(long *)(lVar6 + 0x28);
      FUN_005bc430();
    } while (lVar6 != 0);
  }
  if ((int)param_1[5] < 3) {
    *(int *)(param_1 + 5) = 2;
LAB_0058ee08:
    plVar8 = (long *)param_1[4];
    plVar11 = param_1 + 0x53;
    if (plVar8 != plVar11) {
      lVar15 = plVar8[4];
      lVar7 = plVar8[7];
      lVar6 = plVar8[6];
      lVar16 = plVar8[1];
      lVar5 = *plVar8;
      lVar18 = plVar8[3];
      lVar17 = plVar8[2];
      param_1[0x58] = plVar8[5];
      param_1[0x57] = lVar15;
      param_1[0x5a] = lVar7;
      param_1[0x59] = lVar6;
      param_1[0x54] = lVar16;
      *plVar11 = lVar5;
      param_1[0x56] = lVar18;
      param_1[0x55] = lVar17;
      if (plVar8 < (long *)param_1[0x3d]) {
        if (plVar8 < (long *)param_1[0x3b]) {
          if (plVar8 < (long *)param_1[0x3c]) goto LAB_0058ee4c;
          lVar6 = param_1[0x38];
          param_1[0x38] = (long)plVar8;
        }
        else {
          lVar6 = param_1[0x3a];
          param_1[0x3a] = (long)plVar8;
        }
        *plVar8 = lVar6;
      }
      else {
LAB_0058ee4c:
        if (param_1[0x60] == 0) {
          puVar10 = &DAT_00b0da18;
          if (DAT_00b0d9f0 != 0) {
            if (DAT_00b103d8 != (long *)0x0) {
              (*DAT_00b0da70)();
            }
            iVar3 = (*DAT_00b0da28)(plVar8);
            DAT_00b105b8 = DAT_00b105b8 - iVar3;
            DAT_00b10600 = DAT_00b10600 + -1;
            (*DAT_00b0da18)(plVar8);
            if (DAT_00b103d8 == (long *)0x0) goto LAB_0058eee4;
            puVar10 = &DAT_00b0da80;
            plVar8 = DAT_00b103d8;
          }
          (*(code *)*puVar10)(plVar8);
        }
        else {
          FUN_005a7654(param_1,plVar8);
        }
      }
LAB_0058eee4:
      param_1[4] = (long)plVar11;
    }
  }
  else {
    lVar6 = 2;
    lVar7 = 0;
    iVar3 = 2;
    do {
      lVar15 = param_1[4] + lVar7;
      if (*(long *)(lVar15 + 0x48) != 0) {
        if (iVar3 < lVar6) {
          uVar14 = *(undefined8 *)(lVar15 + 0x40);
          uVar13 = *(undefined8 *)(lVar15 + 0x58);
          uVar12 = *(undefined8 *)(lVar15 + 0x50);
          puVar10 = (undefined8 *)(param_1[4] + (long)iVar3 * 0x20);
          puVar10[1] = *(undefined8 *)(lVar15 + 0x48);
          *puVar10 = uVar14;
          puVar10[3] = uVar13;
          puVar10[2] = uVar12;
        }
        iVar3 = iVar3 + 1;
        goto LAB_0058eccc;
      }
      plVar11 = *(long **)(lVar15 + 0x40);
      if (plVar11 == (long *)0x0) {
LAB_0058edd0:
        *(undefined8 *)(lVar15 + 0x40) = 0;
      }
      else if (plVar11 < (long *)param_1[0x3d]) {
        if (plVar11 < (long *)param_1[0x3b]) {
          if (plVar11 < (long *)param_1[0x3c]) goto LAB_0058ed38;
          lVar5 = param_1[0x38];
          param_1[0x38] = (long)plVar11;
          *(undefined8 *)(lVar15 + 0x40) = 0;
          *plVar11 = lVar5;
        }
        else {
          lVar5 = param_1[0x3a];
          param_1[0x3a] = (long)plVar11;
          *(undefined8 *)(lVar15 + 0x40) = 0;
          *plVar11 = lVar5;
        }
      }
      else {
LAB_0058ed38:
        if (param_1[0x60] == 0) {
          puVar10 = &DAT_00b0da18;
          if (DAT_00b0d9f0 != 0) {
            if (DAT_00b103d8 != (long *)0x0) {
              (*DAT_00b0da70)();
            }
            iVar2 = (*DAT_00b0da28)(plVar11);
            DAT_00b105b8 = DAT_00b105b8 - iVar2;
            DAT_00b10600 = DAT_00b10600 + -1;
            (*DAT_00b0da18)(plVar11);
            if (DAT_00b103d8 == (long *)0x0) goto LAB_0058edd0;
            puVar10 = &DAT_00b0da80;
            plVar11 = DAT_00b103d8;
          }
          (*(code *)*puVar10)(plVar11);
          goto LAB_0058edd0;
        }
        FUN_005a7654(param_1,plVar11);
        *(undefined8 *)(lVar15 + 0x40) = 0;
      }
LAB_0058eccc:
      lVar6 = lVar6 + 1;
      lVar7 = lVar7 + 0x20;
    } while (lVar6 < (int)param_1[5]);
    *(int *)(param_1 + 5) = iVar3;
    if (iVar3 < 3) goto LAB_0058ee08;
  }
  for (plVar11 = (long *)param_1[0x4b]; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
    plVar8 = (long *)plVar11[2];
    do {
      plVar9 = (long *)plVar8[8];
      if ((plVar9 != (long *)0x0) && (iVar3 = (int)*plVar9 + -1, *(int *)plVar9 = iVar3, iVar3 == 0)
         ) {
        (*(code *)plVar9[1])(plVar9[2]);
        if (plVar9 < (long *)param_1[0x3d]) {
          if (plVar9 < (long *)param_1[0x3b]) {
            if (plVar9 < (long *)param_1[0x3c]) goto LAB_0058f064;
            lVar6 = param_1[0x38];
            param_1[0x38] = (long)plVar9;
            *plVar9 = lVar6;
          }
          else {
            lVar6 = param_1[0x3a];
            param_1[0x3a] = (long)plVar9;
            *plVar9 = lVar6;
          }
        }
        else {
LAB_0058f064:
          if (param_1[0x60] == 0) {
            puVar10 = &DAT_00b0da18;
            if (DAT_00b0d9f0 != 0) {
              if (DAT_00b103d8 != (long *)0x0) {
                (*DAT_00b0da70)();
              }
              iVar3 = (*DAT_00b0da28)(plVar9);
              DAT_00b105b8 = DAT_00b105b8 - iVar3;
              DAT_00b10600 = DAT_00b10600 + -1;
              (*DAT_00b0da18)(plVar9);
              if (DAT_00b103d8 == (long *)0x0) goto LAB_0058ef8c;
              puVar10 = &DAT_00b0da80;
              plVar9 = DAT_00b103d8;
            }
            (*(code *)*puVar10)(plVar9);
          }
          else {
            FUN_005a7654(param_1,plVar9);
          }
        }
      }
LAB_0058ef8c:
      plVar9 = (long *)plVar8[2];
      if (plVar8 < (long *)param_1[0x3d]) {
        if (plVar8 < (long *)param_1[0x3b]) {
          if (plVar8 < (long *)param_1[0x3c]) goto LAB_0058ef58;
          lVar6 = param_1[0x38];
          param_1[0x38] = (long)plVar8;
        }
        else {
          lVar6 = param_1[0x3a];
          param_1[0x3a] = (long)plVar8;
        }
        *plVar8 = lVar6;
      }
      else {
LAB_0058ef58:
        if (param_1[0x60] == 0) {
          puVar10 = &DAT_00b0da18;
          if (DAT_00b0d9f0 != 0) {
            if (DAT_00b103d8 != (long *)0x0) {
              (*DAT_00b0da70)();
            }
            iVar3 = (*DAT_00b0da28)(plVar8);
            DAT_00b105b8 = DAT_00b105b8 - iVar3;
            DAT_00b10600 = DAT_00b10600 + -1;
            (*DAT_00b0da18)(plVar8);
            if (DAT_00b103d8 == (long *)0x0) goto LAB_0058ef6c;
            puVar10 = &DAT_00b0da80;
            plVar8 = DAT_00b103d8;
          }
          (*(code *)*puVar10)(plVar8);
        }
        else {
          FUN_005a7654(param_1,plVar8);
        }
      }
LAB_0058ef6c:
      plVar8 = plVar9;
    } while (plVar9 != (long *)0x0);
  }
  FUN_005e2eb0(param_1 + 0x4a);
  for (plVar11 = (long *)param_1[0x4e]; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
    lVar6 = plVar11[2];
    if (*(code **)(lVar6 + 0x20) != (code *)0x0) {
      (**(code **)(lVar6 + 0x20))(*(undefined8 *)(lVar6 + 0x10));
    }
    if (*(code **)(lVar6 + 0x48) != (code *)0x0) {
      (**(code **)(lVar6 + 0x48))(*(undefined8 *)(lVar6 + 0x38));
    }
    if (*(code **)(lVar6 + 0x70) != (code *)0x0) {
      (**(code **)(lVar6 + 0x70))(*(undefined8 *)(lVar6 + 0x60));
    }
    FUN_005869c8(param_1,lVar6);
  }
  FUN_005e2eb0(param_1 + 0x4d);
  for (plVar11 = (long *)param_1[0x45]; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
    plVar8 = (long *)plVar11[2];
    lVar6 = plVar8[5];
    if (lVar6 != 0) {
      lVar7 = param_1[0x60];
      *(uint *)(lVar6 + 0x30) = *(uint *)(lVar6 + 0x30) | 0x4000;
      if ((lVar7 != 0) ||
         (iVar3 = *(int *)(lVar6 + 0x2c) + -1, *(int *)(lVar6 + 0x2c) = iVar3, iVar3 == 0)) {
        FUN_005e9fb0(param_1);
      }
      plVar8[5] = 0;
    }
    iVar3 = (int)plVar8[2] + -1;
    *(int *)(plVar8 + 2) = iVar3;
    if (iVar3 == 0) {
      if ((code *)plVar8[4] != (code *)0x0) {
        (*(code *)plVar8[4])(plVar8[3]);
      }
      if (plVar8 < (long *)param_1[0x3d]) {
        if (plVar8 < (long *)param_1[0x3b]) {
          if (plVar8 < (long *)param_1[0x3c]) goto LAB_0058f150;
          lVar6 = param_1[0x38];
          param_1[0x38] = (long)plVar8;
        }
        else {
          lVar6 = param_1[0x3a];
          param_1[0x3a] = (long)plVar8;
        }
        *plVar8 = lVar6;
      }
      else {
LAB_0058f150:
        if (param_1[0x60] == 0) {
          puVar10 = &DAT_00b0da18;
          if (DAT_00b0d9f0 != 0) {
            if (DAT_00b103d8 != (long *)0x0) {
              (*DAT_00b0da70)();
            }
            iVar3 = (*DAT_00b0da28)(plVar8);
            DAT_00b105b8 = DAT_00b105b8 - iVar3;
            DAT_00b10600 = DAT_00b10600 + -1;
            (*DAT_00b0da18)(plVar8);
            if (DAT_00b103d8 == (long *)0x0) goto LAB_0058f164;
            puVar10 = &DAT_00b0da80;
            plVar8 = DAT_00b103d8;
          }
          (*(code *)*puVar10)(plVar8);
        }
        else {
          FUN_005a7654(param_1,plVar8);
        }
      }
    }
LAB_0058f164:
  }
  FUN_005e2eb0(param_1 + 0x44);
  *(int *)(param_1 + 10) = 0;
  if (param_1[0x31] == 0) {
    *(int *)((long)param_1 + 0x54) = -1;
    FUN_005900cc(0);
    iVar3 = *(int *)((long)param_1 + 0xe4);
  }
  else {
    FUN_005ac5c0(param_1,0);
    FUN_005900cc(param_1[0x31]);
    iVar3 = *(int *)((long)param_1 + 0xe4);
  }
  if (0 < iVar3) {
    lVar6 = 0;
    do {
      (**(code **)(*param_1 + 0x60))(*param_1,*(undefined8 *)(param_1[0x1d] + lVar6 * 8));
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)((long)param_1 + 0xe4));
  }
  plVar11 = (long *)param_1[0x1d];
  if (plVar11 != (long *)0x0) {
    if (plVar11 < (long *)param_1[0x3d]) {
      if (plVar11 < (long *)param_1[0x3b]) {
        if (plVar11 < (long *)param_1[0x3c]) goto LAB_0058f2e4;
        lVar6 = param_1[0x38];
        param_1[0x38] = (long)plVar11;
      }
      else {
        lVar6 = param_1[0x3a];
        param_1[0x3a] = (long)plVar11;
      }
      *plVar11 = lVar6;
    }
    else {
LAB_0058f2e4:
      if (param_1[0x60] == 0) {
        puVar10 = &DAT_00b0da18;
        if (DAT_00b0d9f0 != 0) {
          if (DAT_00b103d8 != (long *)0x0) {
            (*DAT_00b0da70)();
          }
          iVar3 = (*DAT_00b0da28)(plVar11);
          DAT_00b105b8 = DAT_00b105b8 - iVar3;
          DAT_00b10600 = DAT_00b10600 + -1;
          (*DAT_00b0da18)(plVar11);
          if (DAT_00b103d8 == (long *)0x0) goto LAB_0058f37c;
          puVar10 = &DAT_00b0da80;
          plVar11 = DAT_00b103d8;
        }
        (*(code *)*puVar10)(plVar11);
      }
      else {
        FUN_005a7654(param_1,plVar11);
      }
    }
  }
LAB_0058f37c:
  *(undefined1 *)((long)param_1 + 0x71) = 0xd5;
  FUN_005869c8(param_1,*(undefined8 *)(param_1[4] + 0x38));
  if ((code *)param_1[0x29] != (code *)0x0) {
    (*(code *)param_1[0x29])(param_1[0x28]);
  }
  if (param_1[3] == 0) {
    *(undefined1 *)((long)param_1 + 0x71) = 0xce;
    cVar1 = (char)param_1[0x34];
  }
  else {
    (*DAT_00b0da80)();
    *(undefined1 *)((long)param_1 + 0x71) = 0xce;
    if (param_1[3] != 0) {
      (*DAT_00b0da68)();
    }
    cVar1 = (char)param_1[0x34];
  }
  if ((cVar1 != '\0') && (plVar11 = (long *)param_1[0x3c], plVar11 != (long *)0x0)) {
    puVar10 = &DAT_00b0da18;
    if (DAT_00b0d9f0 != 0) {
      if (DAT_00b103d8 != (long *)0x0) {
        (*DAT_00b0da70)();
      }
      iVar3 = (*DAT_00b0da28)(plVar11);
      DAT_00b105b8 = DAT_00b105b8 - iVar3;
      DAT_00b10600 = DAT_00b10600 + -1;
      (*DAT_00b0da18)(plVar11);
      if (DAT_00b103d8 == (long *)0x0) goto LAB_0058f45c;
      puVar10 = &DAT_00b0da80;
      plVar11 = DAT_00b103d8;
    }
    (*(code *)*puVar10)(plVar11);
  }
LAB_0058f45c:
  puVar10 = &DAT_00b0da18;
  if (DAT_00b0d9f0 != 0) {
    if (DAT_00b103d8 != (long *)0x0) {
      (*DAT_00b0da70)();
    }
    iVar3 = (*DAT_00b0da28)(param_1);
    DAT_00b105b8 = DAT_00b105b8 - iVar3;
    DAT_00b10600 = DAT_00b10600 + -1;
    (*DAT_00b0da18)(param_1);
    if (DAT_00b103d8 == (long *)0x0) {
      return;
    }
    puVar10 = &DAT_00b0da80;
    param_1 = DAT_00b103d8;
  }
LAB_0058eb60:
                    /* WARNING: Could not recover jumptable at 0x0058eb80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar10)(param_1);
  return;
}


// ===== 0058f4d0  sqlite3_backup_remaining =====

undefined4 sqlite3_backup_remaining(long param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 0x34);
  }
  sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x146ed,
              "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
  return 0;
}


// ===== 0058f518  sqlite3_backup_pagecount =====

undefined4 sqlite3_backup_pagecount(long param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 0x38);
  }
  sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x146fb,
              "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
  return 0;
}


// ===== 0058f560  sqlite3_expired =====

bool sqlite3_expired(long param_1)

{
  if (param_1 != 0) {
    return (*(ushort *)(param_1 + 200) & 3) != 0;
  }
  return true;
}


// ===== 0058f57c  FUN_0058f57c =====

void FUN_0058f57c(undefined8 *param_1,long param_2)

{
  int *piVar1;
  long local_30;
  double local_28;
  
  piVar1 = (int *)*param_1;
  if ((*piVar1 < 2) || (*(code **)(piVar1 + 0x22) == (code *)0x0)) {
    (**(code **)(piVar1 + 0x1e))(piVar1,&local_28);
    local_30 = (long)(local_28 * 86400000.0);
  }
  else {
    (**(code **)(piVar1 + 0x22))(piVar1,&local_30);
  }
  local_28 = (double)((local_30 - *(long *)(param_2 + 0xb8)) * 1000000);
  if ((code *)param_1[0x20] != (code *)0x0) {
    (*(code *)param_1[0x20])(param_1[0x21],*(undefined8 *)(param_2 + 0xf8));
  }
  if ((*(byte *)((long)param_1 + 0x6e) >> 1 & 1) != 0) {
    (*(code *)param_1[0x1e])(2,param_1[0x1f],param_2,&local_28);
  }
  *(undefined8 *)(param_2 + 0xb8) = 0;
  return;
}


// ===== 0058f640  FUN_0058f640 =====

uint FUN_0058f640(long *param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  lVar5 = *param_1;
  if (*(char *)((long)param_1 + 199) == '\x02') {
    FUN_005bc6b0(param_1);
  }
  if ((int)param_1[6] < 0) {
LAB_0058f690:
    puVar6 = (undefined8 *)param_1[0x15];
  }
  else {
    if ((*(long *)(lVar5 + 0x188) != 0) || (param_1[0x15] != 0)) {
      FUN_005bce24(param_1);
      goto LAB_0058f690;
    }
    *(undefined4 *)(lVar5 + 0x50) = *(undefined4 *)((long)param_1 + 0x34);
    puVar6 = (undefined8 *)param_1[0x15];
  }
  if (puVar6 == (undefined8 *)0x0) goto LAB_0058f78c;
  if (lVar5 == 0) {
LAB_0058f6d8:
    puVar3 = &DAT_00b0da18;
    if (DAT_00b0d9f0 != 0) {
      if (DAT_00b103d8 != (undefined8 *)0x0) {
        (*DAT_00b0da70)();
      }
      iVar2 = (*DAT_00b0da28)(puVar6);
      DAT_00b105b8 = DAT_00b105b8 - iVar2;
      DAT_00b10600 = DAT_00b10600 + -1;
      (*DAT_00b0da18)(puVar6);
      if (DAT_00b103d8 == (undefined8 *)0x0) goto LAB_0058f788;
      puVar3 = &DAT_00b0da80;
      puVar6 = DAT_00b103d8;
    }
    (*(code *)*puVar3)(puVar6);
  }
  else if (puVar6 < *(undefined8 **)(lVar5 + 0x1e8)) {
    if (puVar6 < *(undefined8 **)(lVar5 + 0x1d8)) {
      if (puVar6 < *(undefined8 **)(lVar5 + 0x1e0)) goto LAB_0058f6c0;
      uVar4 = *(undefined8 *)(lVar5 + 0x1c0);
      *(undefined8 **)(lVar5 + 0x1c0) = puVar6;
    }
    else {
      uVar4 = *(undefined8 *)(lVar5 + 0x1d0);
      *(undefined8 **)(lVar5 + 0x1d0) = puVar6;
    }
    *puVar6 = uVar4;
  }
  else {
LAB_0058f6c0:
    if (*(long *)(lVar5 + 0x300) == 0) goto LAB_0058f6d8;
    FUN_005a7654(lVar5,puVar6);
  }
LAB_0058f788:
  param_1[0x15] = 0;
LAB_0058f78c:
  uVar1 = *(uint *)(lVar5 + 0x58);
  param_1[0x14] = 0;
  return uVar1 & *(uint *)((long)param_1 + 0x34);
}


// ===== 0058f7b0  sqlite3_clear_bindings =====

ulong sqlite3_clear_bindings(long *param_1)

{
  long lVar1;
  short sVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  if (param_1 == (long *)0x0) {
    sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x165e1,
                "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
    return 0x15;
  }
  uVar4 = *(ulong *)(*param_1 + 0x18);
  if (uVar4 != 0) {
    (*DAT_00b0da70)(uVar4);
  }
  sVar2 = (short)param_1[4];
  if (0 < sVar2) {
    lVar3 = param_1[0x10];
    lVar5 = 0;
    lVar6 = 0;
    do {
      if (((*(ushort *)(lVar3 + lVar5 + 0x14) & 0x9000) != 0) ||
         (*(int *)(lVar3 + lVar5 + 0x20) != 0)) {
        FUN_005c1208();
        lVar3 = param_1[0x10];
        sVar2 = (short)param_1[4];
      }
      lVar6 = lVar6 + 1;
      lVar1 = lVar3 + lVar5;
      lVar5 = lVar5 + 0x38;
      *(undefined2 *)(lVar1 + 0x14) = 1;
    } while (lVar6 < sVar2);
  }
  if (*(int *)((long)param_1 + 0x11c) != 0) {
    *(ushort *)(param_1 + 0x19) = *(ushort *)(param_1 + 0x19) & 0xfffc | 1;
  }
  if (uVar4 != 0) {
    (*DAT_00b0da80)(uVar4);
    uVar4 = 0;
  }
  return uVar4 & 0xffffffff;
}


// ===== 0058f8d8  sqlite3_value_blob =====

undefined8 sqlite3_value_blob(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  ushort uVar4;
  
  uVar4 = *(ushort *)(param_1 + 5);
  if ((uVar4 & 0x12) == 0) {
    if ((((uVar4 ^ 0xffff) & 0x202) != 0) || (*(char *)((long)param_1 + 0x16) != '\x01')) {
      if ((uVar4 & 1) != 0) {
        return 0;
      }
      uVar3 = FUN_005c17b0(param_1,1);
      return uVar3;
    }
    goto LAB_0058f98c;
  }
  iVar2 = param_1[4];
  if ((uVar4 >> 10 & 1) != 0) {
    iVar1 = *param_1 + iVar2;
    if (iVar1 == 0 || iVar1 < 0 != SCARRY4(*param_1,iVar2)) {
      if ((uVar4 >> 4 & 1) == 0) goto LAB_0058f980;
      iVar2 = FUN_005c13c0(param_1,1,1);
    }
    else {
      iVar2 = FUN_005c13c0(param_1,iVar1,1);
    }
    if (iVar2 != 0) {
      return 0;
    }
    memset((void *)(*(long *)(param_1 + 2) + (long)param_1[4]),0,(long)*param_1);
    iVar2 = param_1[4] + *param_1;
    uVar4 = *(ushort *)(param_1 + 5) & 63999;
    param_1[4] = iVar2;
  }
LAB_0058f980:
  *(ushort *)(param_1 + 5) = uVar4 | 0x10;
  if (iVar2 == 0) {
    return 0;
  }
LAB_0058f98c:
  return *(undefined8 *)(param_1 + 2);
}


// ===== 0058f9c0  FUN_0058f9c0 =====

undefined8 FUN_0058f9c0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1 + param_1[4];
  if (iVar1 == 0 || iVar1 < 0 != SCARRY4(*param_1,param_1[4])) {
    if ((*(ushort *)(param_1 + 5) >> 4 & 1) == 0) {
      return 0;
    }
    iVar1 = FUN_005c13c0(param_1,1,1);
  }
  else {
    iVar1 = FUN_005c13c0(param_1,iVar1,1);
  }
  if (iVar1 != 0) {
    return 7;
  }
  memset((void *)(*(long *)(param_1 + 2) + (long)param_1[4]),0,(long)*param_1);
  param_1[4] = param_1[4] + *param_1;
  *(ushort *)(param_1 + 5) = *(ushort *)(param_1 + 5) & 63999;
  return 0;
}


// ===== 0058fa70  sqlite3_value_text =====

long sqlite3_value_text(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    if ((((*(ushort *)(param_1 + 0x14) ^ 0xffff) & 0x202) == 0) &&
       (*(char *)(param_1 + 0x16) == '\x01')) {
      return *(long *)(param_1 + 8);
    }
    if ((*(ushort *)(param_1 + 0x14) & 1) == 0) {
      lVar1 = FUN_005c17b0(param_1,1);
      return lVar1;
    }
    param_1 = 0;
  }
  return param_1;
}


// ===== 0058faac  sqlite3_value_bytes =====

ulong sqlite3_value_bytes(int *param_1)

{
  ushort uVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar1 = *(ushort *)(param_1 + 5);
  if (((uVar1 >> 1 & 1) != 0) && (*(char *)((long)param_1 + 0x16) == '\x01')) {
    return (ulong)(uint)param_1[4];
  }
  if ((uVar1 >> 4 & 1) == 0) {
    if ((uVar1 & 1) == 0) {
      uVar2 = FUN_005c1788(param_1,1);
      return uVar2;
    }
    uVar3 = 0;
  }
  else {
    uVar3 = param_1[4];
    if ((uVar1 >> 10 & 1) != 0) {
      return (ulong)(*param_1 + uVar3);
    }
  }
  return (ulong)uVar3;
}


// ===== 0058faf8  sqlite3_value_bytes16 =====

ulong sqlite3_value_bytes16(int *param_1)

{
  ushort uVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar1 = *(ushort *)(param_1 + 5);
  if (((uVar1 >> 1 & 1) != 0) && (*(char *)((long)param_1 + 0x16) != '\x01')) {
    return (ulong)(uint)param_1[4];
  }
  if ((uVar1 >> 4 & 1) == 0) {
    if ((uVar1 & 1) == 0) {
      uVar2 = FUN_005c1788(param_1,2);
      return uVar2;
    }
    uVar3 = 0;
  }
  else {
    uVar3 = param_1[4];
    if ((uVar1 >> 10 & 1) != 0) {
      return (ulong)(*param_1 + uVar3);
    }
  }
  return (ulong)uVar3;
}


// ===== 0058fb48  sqlite3_value_double =====

undefined1  [16] sqlite3_value_double(ulong *param_1)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  uVar1 = *(ushort *)((long)param_1 + 0x14);
  if ((uVar1 >> 3 & 1) != 0) {
    auVar3._0_8_ = *param_1;
    auVar3._8_8_ = 0;
    return auVar3;
  }
  if ((uVar1 & 0x24) != 0) {
    auVar2._0_8_ = (double)(long)*param_1;
    auVar2._8_8_ = 0;
    return auVar2;
  }
  if ((uVar1 & 0x12) != 0) {
    auVar3 = FUN_005c1da8();
    return auVar3;
  }
  return ZEXT816(0);
}


// ===== 0058fb88  sqlite3_value_int =====

double sqlite3_value_int(double *param_1)

{
  double dVar1;
  ushort uVar2;
  double dVar3;
  
  uVar2 = *(ushort *)((long)param_1 + 0x14);
  if ((uVar2 & 0x24) != 0) {
    return *param_1;
  }
  if ((uVar2 >> 3 & 1) == 0) {
    if (((uVar2 & 0x12) != 0) && (param_1[1] != 0.0)) {
      dVar3 = (double)FUN_005c27b0();
      return dVar3;
    }
    return 0.0;
  }
  dVar3 = *param_1;
  if (dVar3 < -9.223372036854775e+18) {
    return -0.0;
  }
  dVar1 = NAN;
  if (dVar3 == 9.223372036854775e+18 || dVar3 < 9.223372036854775e+18 != NAN(dVar3)) {
    dVar1 = (double)(long)dVar3;
  }
  return dVar1;
}


// ===== 0058fc0c  FUN_0058fc0c =====

double FUN_0058fc0c(double *param_1)

{
  double dVar1;
  ushort uVar2;
  double dVar3;
  
  uVar2 = *(ushort *)((long)param_1 + 0x14);
  if ((uVar2 & 0x24) != 0) {
    return *param_1;
  }
  if ((uVar2 >> 3 & 1) == 0) {
    if (((uVar2 & 0x12) != 0) && (param_1[1] != 0.0)) {
      dVar3 = (double)FUN_005c27b0();
      return dVar3;
    }
    return 0.0;
  }
  dVar3 = *param_1;
  if (dVar3 < -9.223372036854775e+18) {
    return -0.0;
  }
  dVar1 = NAN;
  if (dVar3 == 9.223372036854775e+18 || dVar3 < 9.223372036854775e+18 != NAN(dVar3)) {
    dVar1 = (double)(long)dVar3;
  }
  return dVar1;
}


// ===== 0058fc80  sqlite3_value_int64 =====

double sqlite3_value_int64(double *param_1)

{
  double dVar1;
  ushort uVar2;
  double dVar3;
  
  uVar2 = *(ushort *)((long)param_1 + 0x14);
  if ((uVar2 & 0x24) != 0) {
    return *param_1;
  }
  if ((uVar2 >> 3 & 1) == 0) {
    if (((uVar2 & 0x12) != 0) && (param_1[1] != 0.0)) {
      dVar3 = (double)FUN_005c27b0();
      return dVar3;
    }
    return 0.0;
  }
  dVar3 = *param_1;
  if (dVar3 < -9.223372036854775e+18) {
    return -0.0;
  }
  dVar1 = NAN;
  if (dVar3 == 9.223372036854775e+18 || dVar3 < 9.223372036854775e+18 != NAN(dVar3)) {
    dVar1 = (double)(long)dVar3;
  }
  return dVar1;
}


// ===== 0058fcf4  sqlite3_value_subtype =====

undefined1 sqlite3_value_subtype(long param_1)

{
  if ((*(ushort *)(param_1 + 0x14) >> 0xb & 1) == 0) {
    return 0;
  }
  return *(undefined1 *)(param_1 + 0x17);
}


// ===== 0058fd0c  sqlite3_value_pointer =====

undefined8 sqlite3_value_pointer(undefined8 *param_1,char *param_2)

{
  int iVar1;
  
  if (((param_2 != (char *)0x0) && ((*(ushort *)((long)param_1 + 0x14) & 0xfbf) == 0xa01)) &&
     (*(char *)((long)param_1 + 0x17) == 'p')) {
    iVar1 = strcmp((char *)*param_1,param_2);
    if (iVar1 == 0) {
      return param_1[1];
    }
    return 0;
  }
  return 0;
}


// ===== 0058fd7c  FUN_0058fd7c =====

long FUN_0058fd7c(long param_1,char param_2)

{
  long lVar1;
  
  if (param_1 != 0) {
    if ((((*(ushort *)(param_1 + 0x14) ^ 0xffff) & 0x202) == 0) &&
       (*(char *)(param_1 + 0x16) == param_2)) {
      return *(long *)(param_1 + 8);
    }
    if ((*(ushort *)(param_1 + 0x14) & 1) == 0) {
      lVar1 = FUN_005c17b0();
      return lVar1;
    }
    param_1 = 0;
  }
  return param_1;
}


// ===== 0058fdb4  sqlite3_value_text16 =====

long sqlite3_value_text16(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    if ((((*(ushort *)(param_1 + 0x14) ^ 0xffff) & 0x202) == 0) &&
       (*(char *)(param_1 + 0x16) == '\x02')) {
      return *(long *)(param_1 + 8);
    }
    if ((*(ushort *)(param_1 + 0x14) & 1) == 0) {
      lVar1 = FUN_005c17b0(param_1,2);
      return lVar1;
    }
    param_1 = 0;
  }
  return param_1;
}


// ===== 0058fdf0  sqlite3_value_text16be =====

long sqlite3_value_text16be(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    if ((((*(ushort *)(param_1 + 0x14) ^ 0xffff) & 0x202) == 0) &&
       (*(char *)(param_1 + 0x16) == '\x03')) {
      return *(long *)(param_1 + 8);
    }
    if ((*(ushort *)(param_1 + 0x14) & 1) == 0) {
      lVar1 = FUN_005c17b0(param_1,3);
      return lVar1;
    }
    param_1 = 0;
  }
  return param_1;
}


// ===== 0058fe2c  sqlite3_value_text16le =====

long sqlite3_value_text16le(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    if ((((*(ushort *)(param_1 + 0x14) ^ 0xffff) & 0x202) == 0) &&
       (*(char *)(param_1 + 0x16) == '\x02')) {
      return *(long *)(param_1 + 8);
    }
    if ((*(ushort *)(param_1 + 0x14) & 1) == 0) {
      lVar1 = FUN_005c17b0(param_1,2);
      return lVar1;
    }
    param_1 = 0;
  }
  return param_1;
}


// ===== 0058fe68  sqlite3_value_type =====

undefined1 sqlite3_value_type(long param_1)

{
  return (&DAT_002c79c0)[(ulong)*(ushort *)(param_1 + 0x14) & 0x3f];
}


// ===== 0058fe80  sqlite3_value_encoding =====

undefined1 sqlite3_value_encoding(long param_1)

{
  return *(undefined1 *)(param_1 + 0x16);
}


// ===== 0058fe88  sqlite3_value_nochange =====

bool sqlite3_value_nochange(long param_1)

{
  return ((*(ushort *)(param_1 + 0x14) ^ 0xffff) & 0x401) == 0;
}


// ===== 0058fe9c  sqlite3_value_frombind =====

ushort sqlite3_value_frombind(long param_1)

{
  return *(ushort *)(param_1 + 0x14) >> 6 & 1;
}


// ===== 0058fea8  sqlite3_value_dup =====

int * sqlite3_value_dup(undefined8 *param_1)

{
  ulong uVar1;
  int iVar2;
  int *piVar3;
  ulong uVar4;
  ushort uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (param_1 == (undefined8 *)0x0) {
    return (int *)0x0;
  }
  iVar2 = sqlite3_initialize();
  if (iVar2 != 0) {
    return (int *)0x0;
  }
  piVar3 = (int *)FUN_005827b0(0x38);
  if (piVar3 == (int *)0x0) {
    return (int *)0x0;
  }
  piVar3[0xc] = 0;
  piVar3[0xd] = 0;
  piVar3[6] = 0;
  piVar3[7] = 0;
  piVar3[4] = 0;
  piVar3[5] = 0;
  piVar3[10] = 0;
  piVar3[0xb] = 0;
  piVar3[8] = 0;
  piVar3[9] = 0;
  piVar3[2] = 0;
  piVar3[3] = 0;
  piVar3[0] = 0;
  piVar3[1] = 0;
  uVar4 = param_1[2];
  uVar7 = param_1[1];
  uVar6 = *param_1;
  *(ulong *)(piVar3 + 4) = uVar4;
  piVar3[6] = 0;
  piVar3[7] = 0;
  uVar1 = uVar4 >> 0x20;
  *(undefined8 *)(piVar3 + 2) = uVar7;
  *(undefined8 *)piVar3 = uVar6;
  uVar5 = (ushort)(uVar4 >> 0x20);
  *(ushort *)(piVar3 + 5) = uVar5 & 0xefff;
  if ((uVar1 & 0x12) == 0) {
    if ((uVar1 & 1) != 0) {
      *(ushort *)(piVar3 + 5) = uVar5 & 0xe5ed;
      return piVar3;
    }
    return piVar3;
  }
  uVar5 = uVar5 & 0x8fff | 0x4000;
  *(ushort *)(piVar3 + 5) = uVar5;
  if ((uVar1 & 0x12) == 0) goto LAB_0058ff44;
  if ((uVar4 & 0x40000000000) != 0) {
    iVar2 = *piVar3 + piVar3[4];
    if (iVar2 == 0 || iVar2 < 0 != SCARRY4(*piVar3,piVar3[4])) {
      if ((((uint)(uVar4 >> 0x20) & 0xffff) >> 4 & 1) == 0) goto LAB_0058ff30;
      iVar2 = 1;
    }
    iVar2 = FUN_005c13c0(piVar3,iVar2,1);
    if (iVar2 != 0) goto LAB_0058ff8c;
    memset((void *)(*(long *)(piVar3 + 2) + (long)piVar3[4]),0,(long)*piVar3);
    uVar5 = *(ushort *)(piVar3 + 5) & 63999;
    piVar3[4] = piVar3[4] + *piVar3;
    *(ushort *)(piVar3 + 5) = uVar5;
    if ((piVar3[8] != 0) && (*(long *)(piVar3 + 2) == *(long *)(piVar3 + 10))) goto LAB_0058ff44;
  }
LAB_0058ff30:
  iVar2 = FUN_005c1cf8();
  if (iVar2 == 0) {
    uVar5 = *(ushort *)(piVar3 + 5);
LAB_0058ff44:
    *(ushort *)(piVar3 + 5) = uVar5 & 0xbfff;
    return piVar3;
  }
LAB_0058ff8c:
  FUN_005900cc(piVar3);
  return (int *)0x0;
}


// ===== 0058ffec  FUN_0058ffec =====

undefined8 FUN_0058ffec(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  ushort uVar3;
  
  uVar3 = *(ushort *)(param_1 + 5);
  if ((uVar3 & 0x12) == 0) goto LAB_005900b4;
  if ((uVar3 >> 10 & 1) != 0) {
    iVar1 = *param_1 + param_1[4];
    if (iVar1 == 0 || iVar1 < 0 != SCARRY4(*param_1,param_1[4])) {
      if ((uVar3 >> 4 & 1) == 0) goto LAB_0059008c;
      iVar1 = FUN_005c13c0(param_1,1,1);
    }
    else {
      iVar1 = FUN_005c13c0(param_1,iVar1,1);
    }
    if (iVar1 != 0) {
      return 7;
    }
    memset((void *)(*(long *)(param_1 + 2) + (long)param_1[4]),0,(long)*param_1);
    uVar3 = *(ushort *)(param_1 + 5) & 63999;
    param_1[4] = param_1[4] + *param_1;
    *(ushort *)(param_1 + 5) = uVar3;
  }
LAB_0059008c:
  if ((param_1[8] == 0) || (*(long *)(param_1 + 2) != *(long *)(param_1 + 10))) {
    uVar2 = FUN_005c1cf8(param_1);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uVar3 = *(ushort *)(param_1 + 5);
  }
LAB_005900b4:
  *(ushort *)(param_1 + 5) = uVar3 & 0xbfff;
  return 0;
}


// ===== 005900cc  FUN_005900cc =====

void FUN_005900cc(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  if (((*(ushort *)((long)param_1 + 0x14) & 0x9000) != 0) || (*(int *)(param_1 + 4) != 0)) {
    FUN_005c1208(param_1);
  }
  lVar2 = param_1[3];
  if (lVar2 != 0) {
    if (param_1 < *(undefined8 **)(lVar2 + 0x1e8)) {
      if (*(undefined8 **)(lVar2 + 0x1d8) <= param_1) {
        uVar4 = *(undefined8 *)(lVar2 + 0x1d0);
        *(undefined8 **)(lVar2 + 0x1d0) = param_1;
LAB_005901ec:
        *param_1 = uVar4;
        return;
      }
      if (*(undefined8 **)(lVar2 + 0x1e0) <= param_1) {
        uVar4 = *(undefined8 *)(lVar2 + 0x1c0);
        *(undefined8 **)(lVar2 + 0x1c0) = param_1;
        goto LAB_005901ec;
      }
    }
    if (*(long *)(lVar2 + 0x300) != 0) {
      FUN_005a7654(lVar2,param_1);
      return;
    }
  }
  puVar3 = &DAT_00b0da18;
  if (DAT_00b0d9f0 != 0) {
    if (DAT_00b103d8 != (undefined8 *)0x0) {
      (*DAT_00b0da70)();
    }
    iVar1 = (*DAT_00b0da28)(param_1);
    DAT_00b105b8 = DAT_00b105b8 - iVar1;
    DAT_00b10600 = DAT_00b10600 + -1;
    (*DAT_00b0da18)(param_1);
    if (DAT_00b103d8 == (undefined8 *)0x0) {
      return;
    }
    puVar3 = &DAT_00b0da80;
    param_1 = DAT_00b103d8;
  }
                    /* WARNING: Could not recover jumptable at 0x005901d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(param_1);
  return;
}


// ===== 00590200  sqlite3_value_free =====

void sqlite3_value_free(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  if (((*(ushort *)((long)param_1 + 0x14) & 0x9000) != 0) || (*(int *)(param_1 + 4) != 0)) {
    FUN_005c1208(param_1);
  }
  lVar2 = param_1[3];
  if (lVar2 != 0) {
    if (param_1 < *(undefined8 **)(lVar2 + 0x1e8)) {
      if (*(undefined8 **)(lVar2 + 0x1d8) <= param_1) {
        uVar4 = *(undefined8 *)(lVar2 + 0x1d0);
        *(undefined8 **)(lVar2 + 0x1d0) = param_1;
LAB_005901ec:
        *param_1 = uVar4;
        return;
      }
      if (*(undefined8 **)(lVar2 + 0x1e0) <= param_1) {
        uVar4 = *(undefined8 *)(lVar2 + 0x1c0);
        *(undefined8 **)(lVar2 + 0x1c0) = param_1;
        goto LAB_005901ec;
      }
    }
    if (*(long *)(lVar2 + 0x300) != 0) {
      FUN_005a7654(lVar2,param_1);
      return;
    }
  }
  puVar3 = &DAT_00b0da18;
  if (DAT_00b0d9f0 != 0) {
    if (DAT_00b103d8 != (undefined8 *)0x0) {
      (*DAT_00b0da70)();
    }
    iVar1 = (*DAT_00b0da28)(param_1);
    DAT_00b105b8 = DAT_00b105b8 - iVar1;
    DAT_00b10600 = DAT_00b10600 + -1;
    (*DAT_00b0da18)(param_1);
    if (DAT_00b103d8 == (undefined8 *)0x0) {
      return;
    }
    puVar3 = &DAT_00b0da80;
    param_1 = DAT_00b103d8;
  }
                    /* WARNING: Could not recover jumptable at 0x005901d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(param_1);
  return;
}


// ===== 00590204  sqlite3_result_blob =====

void sqlite3_result_blob(long *param_1,undefined8 param_2,int param_3,code *param_4)

{
  long lVar1;
  long lVar2;
  
  if ((param_1 != (long *)0x0) && (-1 < param_3)) {
    FUN_0059031c();
    return;
  }
  if (&DAT_00000001 < param_4 + 1) {
    (*param_4)(param_2);
  }
  if (param_1 != (long *)0x0) {
    lVar2 = *param_1;
    *(undefined4 *)((long)param_1 + 0x24) = 0x12;
    lVar1 = *(long *)(lVar2 + 0x18);
    if ((lVar1 == 0) || (0x15 < *(int *)(lVar1 + 0x88))) {
      if (((*(ushort *)(lVar2 + 0x14) & 0x9000) != 0) || (*(int *)(lVar2 + 0x20) != 0)) {
        FUN_005c1208(lVar2);
      }
      *(undefined8 *)(lVar2 + 0x30) = 0;
      *(char **)(lVar2 + 8) = "string or blob too big";
      *(undefined4 *)(lVar2 + 0x10) = 0x16;
      *(undefined2 *)(lVar2 + 0x14) = 0x2202;
      *(undefined1 *)(lVar2 + 0x16) = 1;
      return;
    }
    if ((*(ushort *)(lVar2 + 0x14) & 0x9000) == 0) {
      *(undefined2 *)(lVar2 + 0x14) = 1;
    }
    else {
      FUN_005c1258(lVar2);
      lVar1 = *(long *)(lVar2 + 0x18);
      if (lVar1 == 0) {
        return;
      }
    }
    lVar1 = *(long *)(lVar1 + 0x158);
    if (lVar1 != 0) {
      *(undefined4 *)(lVar1 + 0x18) = 0x12;
      *(int *)(lVar1 + 0x34) = *(int *)(lVar1 + 0x34) + 1;
      return;
    }
  }
  return;
}


// ===== 0059031c  FUN_0059031c =====

void FUN_0059031c(long *param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  int *piVar6;
  
  piVar6 = (int *)*param_1;
  iVar2 = FUN_00590724(piVar6,param_2,(long)param_3);
  if (iVar2 == 0) {
    uVar4 = (uint)*(ushort *)(piVar6 + 5);
    if ((*(ushort *)(piVar6 + 5) >> 1 & 1) == 0) {
      *(char *)((long)piVar6 + 0x16) = (char)param_1[5];
    }
    else if (*(char *)((long)piVar6 + 0x16) != (char)param_1[5]) {
      FUN_005c2adc(piVar6);
      uVar4 = (uint)*(ushort *)(piVar6 + 5);
    }
    if ((uVar4 & 0x12) == 0) {
      return;
    }
    iVar2 = piVar6[4];
    if ((uVar4 >> 10 & 1) != 0) {
      iVar2 = *piVar6 + iVar2;
    }
    if (iVar2 <= *(int *)(*(long *)(piVar6 + 6) + 0x88)) {
      return;
    }
  }
  else if (iVar2 != 0x12) {
    lVar3 = *param_1;
    if ((*(ushort *)(lVar3 + 0x14) & 0x9000) == 0) {
      *(undefined2 *)(lVar3 + 0x14) = 1;
      lVar3 = *(long *)(lVar3 + 0x18);
      *(undefined4 *)((long)param_1 + 0x24) = 7;
      cVar1 = *(char *)(lVar3 + 0x67);
    }
    else {
      FUN_005c1258();
      lVar3 = *(long *)(*param_1 + 0x18);
      *(undefined4 *)((long)param_1 + 0x24) = 7;
      cVar1 = *(char *)(lVar3 + 0x67);
    }
    if (cVar1 != '\0') {
      return;
    }
    if (*(char *)(lVar3 + 0x68) != '\0') {
      return;
    }
    *(undefined1 *)(lVar3 + 0x67) = 1;
    if (0 < *(int *)(lVar3 + 0xdc)) {
      *(undefined4 *)(lVar3 + 400) = 1;
    }
    *(undefined2 *)(lVar3 + 0x19c) = 0;
    *(int *)(lVar3 + 0x198) = *(int *)(lVar3 + 0x198) + 1;
    if (*(long *)(lVar3 + 0x158) == 0) {
      return;
    }
    FUN_00595b78(*(long *)(lVar3 + 0x158),"out of memory");
    lVar5 = *(long *)(*(long *)(lVar3 + 0x158) + 0xd8);
    *(undefined4 *)(*(long *)(lVar3 + 0x158) + 0x18) = 7;
    for (; lVar5 != 0; lVar5 = *(long *)(lVar5 + 0xd8)) {
      *(undefined4 *)(lVar5 + 0x18) = 7;
      *(int *)(lVar5 + 0x34) = *(int *)(lVar5 + 0x34) + 1;
    }
    return;
  }
  lVar5 = *param_1;
  *(undefined4 *)((long)param_1 + 0x24) = 0x12;
  lVar3 = *(long *)(lVar5 + 0x18);
  if ((lVar3 == 0) || (0x15 < *(int *)(lVar3 + 0x88))) {
    if (((*(ushort *)(lVar5 + 0x14) & 0x9000) != 0) || (*(int *)(lVar5 + 0x20) != 0)) {
      FUN_005c1208(lVar5);
    }
    *(undefined8 *)(lVar5 + 0x30) = 0;
    *(char **)(lVar5 + 8) = "string or blob too big";
    *(undefined4 *)(lVar5 + 0x10) = 0x16;
    *(undefined2 *)(lVar5 + 0x14) = 0x2202;
    *(undefined1 *)(lVar5 + 0x16) = 1;
    return;
  }
  if ((*(ushort *)(lVar5 + 0x14) & 0x9000) == 0) {
    *(undefined2 *)(lVar5 + 0x14) = 1;
    lVar3 = *(long *)(lVar3 + 0x158);
  }
  else {
    FUN_005c1258(lVar5);
    if (*(long *)(lVar5 + 0x18) == 0) {
      return;
    }
    lVar3 = *(long *)(*(long *)(lVar5 + 0x18) + 0x158);
  }
  if (lVar3 == 0) {
    return;
  }
  *(undefined4 *)(lVar3 + 0x18) = 0x12;
  *(int *)(lVar3 + 0x34) = *(int *)(lVar3 + 0x34) + 1;
  return;
}


// ===== 0059053c  sqlite3_result_blob64 =====

void sqlite3_result_blob64
               (long *param_1,undefined8 param_2,ulong param_3,code *UNRECOVERED_JUMPTABLE)

{
  long lVar1;
  long lVar2;
  
  if (param_1 == (long *)0x0) {
    if (&DAT_00000001 < UNRECOVERED_JUMPTABLE + 1) {
                    /* WARNING: Could not recover jumptable at 0x005905b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_2);
      return;
    }
  }
  else {
    if (param_3 >> 0x1f == 0) {
      FUN_0059031c();
      return;
    }
    if (&DAT_00000001 < UNRECOVERED_JUMPTABLE + 1) {
      (*UNRECOVERED_JUMPTABLE)(param_2);
      lVar2 = *param_1;
      *(undefined4 *)((long)param_1 + 0x24) = 0x12;
      lVar1 = *(long *)(lVar2 + 0x18);
    }
    else {
      lVar2 = *param_1;
      *(undefined4 *)((long)param_1 + 0x24) = 0x12;
      lVar1 = *(long *)(lVar2 + 0x18);
    }
    if ((lVar1 == 0) || (0x15 < *(int *)(lVar1 + 0x88))) {
      if (((*(ushort *)(lVar2 + 0x14) & 0x9000) != 0) || (*(int *)(lVar2 + 0x20) != 0)) {
        FUN_005c1208(lVar2);
      }
      *(undefined8 *)(lVar2 + 0x30) = 0;
      *(char **)(lVar2 + 8) = "string or blob too big";
      *(undefined4 *)(lVar2 + 0x10) = 0x16;
      *(undefined2 *)(lVar2 + 0x14) = 0x2202;
      *(undefined1 *)(lVar2 + 0x16) = 1;
      return;
    }
    if ((*(ushort *)(lVar2 + 0x14) & 0x9000) == 0) {
      *(undefined2 *)(lVar2 + 0x14) = 1;
    }
    else {
      FUN_005c1258(lVar2);
      lVar1 = *(long *)(lVar2 + 0x18);
      if (lVar1 == 0) {
        return;
      }
    }
    lVar2 = *(long *)(lVar1 + 0x158);
    if (lVar2 != 0) {
      *(undefined4 *)(lVar2 + 0x18) = 0x12;
      *(int *)(lVar2 + 0x34) = *(int *)(lVar2 + 0x34) + 1;
      return;
    }
  }
  return;
}


// ===== 0059068c  sqlite3_result_double =====

void sqlite3_result_double(double param_1,long *param_2)

{
  double *pdVar1;
  
  if (param_2 != (long *)0x0) {
    pdVar1 = (double *)*param_2;
    if ((*(ushort *)((long)pdVar1 + 0x14) & 0x9000) == 0) {
      *(undefined2 *)((long)pdVar1 + 0x14) = 1;
    }
    else {
      FUN_005c1258(pdVar1);
    }
    if (!NAN(param_1)) {
      *pdVar1 = param_1;
      *(undefined2 *)((long)pdVar1 + 0x14) = 8;
    }
  }
  return;
}


// ===== 005906f8  sqlite3_result_error =====

void sqlite3_result_error(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)param_1 + 0x24) = 1;
    FUN_00590724(*param_1,param_2,(long)param_3,1,0xffffffffffffffff);
    return;
  }
  return;
}


// ===== 00590724  FUN_00590724 =====

/* WARNING: Removing unreachable block (ram,0x00590ab0) */
/* WARNING: Removing unreachable block (ram,0x00590abc) */
/* WARNING: Removing unreachable block (ram,0x00590ac0) */
/* WARNING: Removing unreachable block (ram,0x00590ac4) */
/* WARNING: Removing unreachable block (ram,0x00590ad4) */

undefined8 FUN_00590724(long param_1,char *param_2,size_t param_3,byte param_4,code *param_5)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  size_t sVar4;
  void *__dest;
  ushort uVar5;
  char *__dest_00;
  undefined8 *puVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined1 uVar9;
  size_t sVar10;
  long lVar11;
  ushort uVar12;
  ulong uVar13;
  
  if (param_2 == (char *)0x0) {
    if ((*(ushort *)(param_1 + 0x14) & 0x9000) != 0) {
      FUN_005c1258(param_1);
      return 0;
    }
    *(undefined2 *)(param_1 + 0x14) = 1;
    return 0;
  }
  lVar11 = *(long *)(param_1 + 0x18);
  if (lVar11 == 0) {
    uVar13 = 1000000000;
    if ((long)param_3 < 0) goto LAB_00590814;
LAB_00590750:
    uVar12 = 0x10;
    if (param_4 != 0) {
      uVar12 = 2;
    }
    if (param_4 < 2) {
      param_4 = 1;
    }
    sVar4 = param_3;
    if ((long)param_3 <= (long)uVar13) goto LAB_00590854;
  }
  else {
    uVar13 = (ulong)*(int *)(lVar11 + 0x88);
    if (-1 < (long)param_3) goto LAB_00590750;
LAB_00590814:
    if (param_4 == 1) {
      sVar4 = strlen(param_2);
      param_4 = 1;
    }
    else {
      sVar10 = 0;
      sVar4 = sVar10;
      if (-1 < (long)uVar13) {
        do {
          sVar4 = sVar10;
          if ((param_2 + sVar10)[1] == '\0' && param_2[sVar10] == '\0') break;
          sVar10 = sVar10 + 2;
          sVar4 = (uVar13 & 0x7ffffffffffffffe) + 2;
        } while ((long)sVar10 <= (long)uVar13);
      }
    }
    uVar12 = 0x202;
    if ((long)sVar4 <= (long)uVar13) {
LAB_00590854:
      if (param_5 == (code *)0xffffffffffffffff) {
        lVar11 = 1;
        if (param_4 != 1) {
          lVar11 = 2;
        }
        lVar1 = 0;
        if ((long)param_3 < 0) {
          lVar1 = lVar11;
        }
        sVar10 = lVar1 + sVar4;
        uVar13 = sVar10;
        if ((long)sVar10 < 0x21) {
          uVar13 = 0x20;
        }
        if (*(int *)(param_1 + 0x20) < (int)uVar13) {
          iVar3 = FUN_005c13c0(param_1,uVar13 & 0xffffffff,0);
          if (iVar3 != 0) {
            return 7;
          }
          __dest = *(void **)(param_1 + 8);
        }
        else {
          __dest = *(void **)(param_1 + 0x28);
          *(void **)(param_1 + 8) = __dest;
          *(ushort *)(param_1 + 0x14) = *(ushort *)(param_1 + 0x14) & 0x2d;
        }
        memcpy(__dest,param_2,sVar10);
      }
      else {
        if (((*(ushort *)(param_1 + 0x14) & 0x9000) != 0) || (*(int *)(param_1 + 0x20) != 0)) {
          FUN_005c1208(param_1);
        }
        *(char **)(param_1 + 8) = param_2;
        if (param_5 == FUN_005a151c) {
          lVar11 = *(long *)(param_1 + 0x18);
          *(char **)(param_1 + 0x28) = param_2;
          if ((lVar11 != 0) && (param_2 < *(char **)(lVar11 + 0x1f0))) {
            if (*(char **)(lVar11 + 0x1d8) <= param_2) {
              *(undefined4 *)(param_1 + 0x20) = 0x80;
              goto LAB_00590a30;
            }
            if (*(char **)(lVar11 + 0x1e0) <= param_2) {
              *(uint *)(param_1 + 0x20) = (uint)*(ushort *)(lVar11 + 0x19e);
              goto LAB_00590a30;
            }
          }
          uVar2 = (*DAT_00b0da28)(param_2);
          *(undefined4 *)(param_1 + 0x20) = uVar2;
        }
        else {
          uVar5 = 0x2000;
          if (param_5 != (code *)0x0) {
            uVar5 = 0x1000;
          }
          *(code **)(param_1 + 0x30) = param_5;
          uVar12 = uVar12 | uVar5;
        }
      }
LAB_00590a30:
      uVar8 = (uint)sVar4 & 0x7fffffff;
      *(uint *)(param_1 + 0x10) = uVar8;
      *(ushort *)(param_1 + 0x14) = uVar12;
      *(byte *)(param_1 + 0x16) = param_4;
      if (param_4 < 2) {
        return 0;
      }
      if (uVar8 < 2) {
        return 0;
      }
      __dest_00 = *(char **)(param_1 + 8);
      if ((*__dest_00 == -1) && (__dest_00[1] == -2)) {
        uVar9 = 2;
      }
      else {
        if (*__dest_00 != -2) {
          return 0;
        }
        if (__dest_00[1] != -1) {
          return 0;
        }
        uVar9 = 3;
      }
      if (((uVar12 & 0x12) != 0) &&
         ((*(int *)(param_1 + 0x20) == 0 ||
          (__dest_00 = *(char **)(param_1 + 8), __dest_00 != *(char **)(param_1 + 0x28))))) {
        iVar3 = FUN_005c1cf8(param_1);
        if (iVar3 != 0) {
          return 7;
        }
        uVar12 = *(ushort *)(param_1 + 0x14);
        uVar8 = *(uint *)(param_1 + 0x10);
        __dest_00 = *(char **)(param_1 + 8);
      }
      *(ushort *)(param_1 + 0x14) = uVar12 & 0xbfff;
      *(uint *)(param_1 + 0x10) = uVar8 - 2;
      memmove(__dest_00,__dest_00 + 2,(long)(int)(uVar8 - 2));
      *(undefined1 *)(*(long *)(param_1 + 8) + (long)*(int *)(param_1 + 0x10)) = 0;
      *(undefined1 *)(*(long *)(param_1 + 8) + (long)*(int *)(param_1 + 0x10) + 1) = 0;
      *(undefined1 *)(param_1 + 0x16) = uVar9;
      *(ushort *)(param_1 + 0x14) = *(ushort *)(param_1 + 0x14) | 0x200;
      return 0;
    }
  }
  if (&DAT_00000001 < param_5 + 1) {
    if (param_5 == FUN_005a151c) {
      if (lVar11 != 0) {
        if (param_2 < *(char **)(lVar11 + 0x1e8)) {
          if (*(char **)(lVar11 + 0x1d8) <= param_2) {
            uVar7 = *(undefined8 *)(lVar11 + 0x1d0);
            *(char **)(lVar11 + 0x1d0) = param_2;
            *(undefined8 *)param_2 = uVar7;
            goto LAB_00590798;
          }
          if (*(char **)(lVar11 + 0x1e0) <= param_2) {
            uVar7 = *(undefined8 *)(lVar11 + 0x1c0);
            *(char **)(lVar11 + 0x1c0) = param_2;
            *(undefined8 *)param_2 = uVar7;
            goto LAB_00590798;
          }
        }
        if (*(long *)(lVar11 + 0x300) != 0) {
          FUN_005a7654(lVar11);
          goto LAB_00590798;
        }
      }
      puVar6 = &DAT_00b0da18;
      if (DAT_00b0d9f0 != 0) {
        if (DAT_00b103d8 != (char *)0x0) {
          (*DAT_00b0da70)();
        }
        iVar3 = (*DAT_00b0da28)(param_2);
        DAT_00b105b8 = DAT_00b105b8 - iVar3;
        DAT_00b10600 = DAT_00b10600 + -1;
        (*DAT_00b0da18)(param_2);
        if (DAT_00b103d8 == (char *)0x0) goto LAB_00590798;
        puVar6 = &DAT_00b0da80;
        param_2 = DAT_00b103d8;
      }
      (*(code *)*puVar6)(param_2);
    }
    else {
      (*param_5)(param_2);
    }
  }
LAB_00590798:
  if ((*(ushort *)(param_1 + 0x14) & 0x9000) == 0) {
    *(undefined2 *)(param_1 + 0x14) = 1;
    lVar11 = *(long *)(param_1 + 0x18);
  }
  else {
    FUN_005c1258(param_1);
    lVar11 = *(long *)(param_1 + 0x18);
  }
  if (lVar11 != 0) {
    lVar11 = *(long *)(lVar11 + 0x158);
    if (lVar11 == 0) {
      return 0x12;
    }
    *(undefined4 *)(lVar11 + 0x18) = 0x12;
    *(int *)(lVar11 + 0x34) = *(int *)(lVar11 + 0x34) + 1;
    return 0x12;
  }
  return 0x12;
}


// ===== 00590ccc  sqlite3_result_error16 =====

void sqlite3_result_error16(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)param_1 + 0x24) = 1;
    FUN_00590724(*param_1,param_2,(long)param_3,2,0xffffffffffffffff);
    return;
  }
  return;
}


// ===== 00590cf8  sqlite3_result_int =====

void sqlite3_result_int(long *param_1,int param_2)

{
  if (param_1 != (long *)0x0) {
    param_1 = (long *)*param_1;
    if ((*(ushort *)((long)param_1 + 0x14) & 0x9000) != 0) {
      FUN_005c2a94();
      return;
    }
    *param_1 = (long)param_2;
    *(undefined2 *)((long)param_1 + 0x14) = 4;
  }
  return;
}


// ===== 00590d28  sqlite3_result_int64 =====

void sqlite3_result_int64(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  if (param_1 != (long *)0x0) {
    puVar1 = (undefined8 *)*param_1;
    if ((*(ushort *)((long)puVar1 + 0x14) & 0x9000) != 0) {
      FUN_005c2a94();
      return;
    }
    *puVar1 = param_2;
    *(undefined2 *)((long)puVar1 + 0x14) = 4;
  }
  return;
}


// ===== 00590d54  sqlite3_result_null =====

void sqlite3_result_null(long *param_1)

{
  if (param_1 != (long *)0x0) {
    if ((*(ushort *)(*param_1 + 0x14) & 0x9000) != 0) {
      FUN_005c1258();
      return;
    }
    *(undefined2 *)(*param_1 + 0x14) = 1;
  }
  return;
}


// ===== 00590d7c  sqlite3_result_pointer =====

void sqlite3_result_pointer
               (undefined8 *param_1,undefined8 param_2,undefined1 *param_3,
               code *UNRECOVERED_JUMPTABLE)

{
  undefined1 *puVar1;
  code *pcVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    param_1 = (undefined8 *)*param_1;
    if (((*(ushort *)((long)param_1 + 0x14) & 0x9000) != 0) || (*(int *)(param_1 + 4) != 0)) {
      FUN_005c1208(param_1);
    }
    *(undefined2 *)((long)param_1 + 0x14) = 1;
    FUN_005c1208(param_1);
    puVar1 = &DAT_002a8138;
    if (param_3 != (undefined1 *)0x0) {
      puVar1 = param_3;
    }
    *param_1 = puVar1;
    param_1[1] = param_2;
    *(undefined1 *)((long)param_1 + 0x17) = 0x70;
    *(undefined2 *)((long)param_1 + 0x14) = 0x1a01;
    pcVar2 = FUN_005c2ad8;
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
      pcVar2 = UNRECOVERED_JUMPTABLE;
    }
    param_1[6] = pcVar2;
    return;
  }
  if (UNRECOVERED_JUMPTABLE + 1 < (code *)0x2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00590e48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2);
  return;
}


// ===== 00590e4c  sqlite3_result_subtype =====

void sqlite3_result_subtype(long *param_1,undefined1 param_2)

{
  long lVar1;
  
  if (param_1 != (long *)0x0) {
    lVar1 = *param_1;
    *(undefined1 *)(lVar1 + 0x17) = param_2;
    *(ushort *)(lVar1 + 0x14) = *(ushort *)(lVar1 + 0x14) | 0x800;
  }
  return;
}


// ===== 00590e68  sqlite3_result_text =====

void sqlite3_result_text(long param_1,undefined8 param_2,undefined8 param_3,
                        code *UNRECOVERED_JUMPTABLE)

{
  if (param_1 != 0) {
    FUN_0059031c();
    return;
  }
  if (UNRECOVERED_JUMPTABLE + 1 < (code *)0x2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00590e8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2);
  return;
}


// ===== 00590e90  sqlite3_result_text64 =====

void sqlite3_result_text64
               (long *param_1,undefined8 param_2,ulong param_3,code *UNRECOVERED_JUMPTABLE,
               char param_5)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  
  if (param_1 == (long *)0x0) {
    if (UNRECOVERED_JUMPTABLE + 1 <= &DAT_00000001) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00590f5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_2);
    return;
  }
  if (param_5 != '\x01') {
    param_3 = param_3 & 0xfffffffffffffffe;
  }
  if (param_3 >> 0x1f != 0) {
    if (&DAT_00000001 < UNRECOVERED_JUMPTABLE + 1) {
      (*UNRECOVERED_JUMPTABLE)(param_2);
      lVar5 = *param_1;
      *(undefined4 *)((long)param_1 + 0x24) = 0x12;
      lVar2 = *(long *)(lVar5 + 0x18);
    }
    else {
      lVar5 = *param_1;
      *(undefined4 *)((long)param_1 + 0x24) = 0x12;
      lVar2 = *(long *)(lVar5 + 0x18);
    }
    if ((lVar2 == 0) || (0x15 < *(int *)(lVar2 + 0x88))) {
      if (((*(ushort *)(lVar5 + 0x14) & 0x9000) != 0) || (*(int *)(lVar5 + 0x20) != 0)) {
        FUN_005c1208(lVar5);
      }
      *(undefined8 *)(lVar5 + 0x30) = 0;
      *(char **)(lVar5 + 8) = "string or blob too big";
      *(undefined4 *)(lVar5 + 0x10) = 0x16;
      *(undefined2 *)(lVar5 + 0x14) = 0x2202;
      *(undefined1 *)(lVar5 + 0x16) = 1;
      return;
    }
    if ((*(ushort *)(lVar5 + 0x14) & 0x9000) == 0) {
      *(undefined2 *)(lVar5 + 0x14) = 1;
    }
    else {
      FUN_005c1258(lVar5);
      lVar2 = *(long *)(lVar5 + 0x18);
      if (lVar2 == 0) {
        return;
      }
    }
    lVar5 = *(long *)(lVar2 + 0x158);
    if (lVar5 == 0) {
      return;
    }
    *(undefined4 *)(lVar5 + 0x18) = 0x12;
    *(int *)(lVar5 + 0x34) = *(int *)(lVar5 + 0x34) + 1;
    return;
  }
  FUN_0059031c();
  lVar5 = *param_1;
  if ((*(ushort *)(lVar5 + 0x14) & 0x6202) != 2) {
    return;
  }
  if (*(char *)(lVar5 + 0x16) != '\x01') {
    return;
  }
  if ((*(ushort *)(lVar5 + 0x14) >> 0xc & 1) == 0) {
    iVar1 = *(int *)(lVar5 + 0x10);
    if (*(int *)(lVar5 + 0x20) <= iVar1) {
      return;
    }
LAB_00591098:
    *(undefined1 *)(*(long *)(lVar5 + 8) + (long)iVar1) = 0;
  }
  else {
    pcVar3 = *(code **)(lVar5 + 0x30);
    if (pcVar3 == (code *)PTR_sqlite3_free_00b00da8) {
      if (*(long *)(lVar5 + 8) == 0) {
        uVar4 = 0;
      }
      else {
        iVar1 = (*DAT_00b0da28)();
        uVar4 = (ulong)iVar1;
      }
      iVar1 = *(int *)(lVar5 + 0x10);
      if ((long)iVar1 + 1U <= uVar4) goto LAB_00591098;
      pcVar3 = *(code **)(lVar5 + 0x30);
    }
    if (pcVar3 != FUN_005be444) {
      return;
    }
  }
  *(ushort *)(lVar5 + 0x14) = *(ushort *)(lVar5 + 0x14) | 0x200;
  return;
}


// ===== 005910b8  sqlite3_result_text16 =====

void sqlite3_result_text16(undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  FUN_0059031c(param_1,param_2,param_3 & 0xfffffffe,2,param_4);
  return;
}


// ===== 005910c8  sqlite3_result_text16be =====

void sqlite3_result_text16be(undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  FUN_0059031c(param_1,param_2,param_3 & 0xfffffffe,3,param_4);
  return;
}


// ===== 005910d8  sqlite3_result_text16le =====

void sqlite3_result_text16le(undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  FUN_0059031c(param_1,param_2,param_3 & 0xfffffffe,2,param_4);
  return;
}


// ===== 005910e8  sqlite3_result_value =====

void sqlite3_result_value(long *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  
  if (param_1 != (long *)0x0) {
    piVar4 = (int *)*param_1;
    if (param_2 == 0) {
      if ((*(ushort *)(piVar4 + 5) & 0x9000) != 0) {
        FUN_005c1258(piVar4);
        return;
      }
      *(undefined2 *)(piVar4 + 5) = 1;
    }
    else {
      FUN_00591260(piVar4);
      uVar1 = (uint)*(ushort *)(piVar4 + 5);
      if ((*(ushort *)(piVar4 + 5) >> 1 & 1) == 0) {
        *(char *)((long)piVar4 + 0x16) = (char)param_1[5];
      }
      else if (*(char *)((long)piVar4 + 0x16) != (char)param_1[5]) {
        FUN_005c2adc(piVar4);
        uVar1 = (uint)*(ushort *)(piVar4 + 5);
      }
      if ((uVar1 & 0x12) != 0) {
        iVar3 = piVar4[4];
        if ((uVar1 >> 10 & 1) != 0) {
          iVar3 = *piVar4 + iVar3;
        }
        if (*(int *)(*(long *)(piVar4 + 6) + 0x88) < iVar3) {
          lVar5 = *param_1;
          *(undefined4 *)((long)param_1 + 0x24) = 0x12;
          lVar2 = *(long *)(lVar5 + 0x18);
          if ((lVar2 == 0) || (0x15 < *(int *)(lVar2 + 0x88))) {
            if (((*(ushort *)(lVar5 + 0x14) & 0x9000) != 0) || (*(int *)(lVar5 + 0x20) != 0)) {
              FUN_005c1208(lVar5);
            }
            *(undefined8 *)(lVar5 + 0x30) = 0;
            *(char **)(lVar5 + 8) = "string or blob too big";
            *(undefined4 *)(lVar5 + 0x10) = 0x16;
            *(undefined2 *)(lVar5 + 0x14) = 0x2202;
            *(undefined1 *)(lVar5 + 0x16) = 1;
            return;
          }
          if ((*(ushort *)(lVar5 + 0x14) & 0x9000) == 0) {
            *(undefined2 *)(lVar5 + 0x14) = 1;
          }
          else {
            FUN_005c1258(lVar5);
            lVar2 = *(long *)(lVar5 + 0x18);
            if (lVar2 == 0) {
              return;
            }
          }
          lVar2 = *(long *)(lVar2 + 0x158);
          if (lVar2 != 0) {
            *(undefined4 *)(lVar2 + 0x18) = 0x12;
            *(int *)(lVar2 + 0x34) = *(int *)(lVar2 + 0x34) + 1;
            return;
          }
        }
      }
    }
  }
  return;
}


// ===== 00591260  FUN_00591260 =====

undefined8 FUN_00591260(int *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  ushort uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  if ((*(ushort *)(param_1 + 5) & 0x9000) != 0) {
    FUN_005c1258(param_1);
  }
  uVar4 = param_2[2];
  uVar5 = param_2[1];
  uVar2 = *param_2;
  *(ulong *)(param_1 + 4) = uVar4;
  *(undefined8 *)(param_1 + 2) = uVar5;
  *(undefined8 *)param_1 = uVar2;
  uVar3 = (ushort)(uVar4 >> 0x20) & 0xefff;
  *(ushort *)(param_1 + 5) = uVar3;
  if (((uVar4 & 0x1200000000) == 0) || ((*(ushort *)((long)param_2 + 0x14) >> 0xd & 1) != 0)) {
    return 0;
  }
  uVar3 = uVar3 | 0x4000;
  *(ushort *)(param_1 + 5) = uVar3;
  if ((uVar4 & 0x1200000000) == 0) goto LAB_00591384;
  if ((uVar4 & 0x40000000000) != 0) {
    iVar1 = *param_1 + param_1[4];
    if (iVar1 == 0 || iVar1 < 0 != SCARRY4(*param_1,param_1[4])) {
      if ((((uint)(uVar4 >> 0x20) & 0xffff) >> 4 & 1) == 0) goto LAB_00591350;
      iVar1 = 1;
    }
    iVar1 = FUN_005c13c0(param_1,iVar1,1);
    if (iVar1 != 0) {
      return 7;
    }
    memset((void *)(*(long *)(param_1 + 2) + (long)param_1[4]),0,(long)*param_1);
    uVar3 = *(ushort *)(param_1 + 5) & 63999;
    param_1[4] = param_1[4] + *param_1;
    *(ushort *)(param_1 + 5) = uVar3;
  }
LAB_00591350:
  if ((param_1[8] == 0) || (*(long *)(param_1 + 2) != *(long *)(param_1 + 10))) {
    uVar2 = FUN_005c1cf8(param_1);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uVar3 = *(ushort *)(param_1 + 5);
  }
LAB_00591384:
  *(ushort *)(param_1 + 5) = uVar3 & 0xbfff;
  return 0;
}


// ===== 0059139c  sqlite3_result_error_toobig =====

void sqlite3_result_error_toobig(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1 != (long *)0x0) {
    lVar2 = *param_1;
    *(undefined4 *)((long)param_1 + 0x24) = 0x12;
    lVar1 = *(long *)(lVar2 + 0x18);
    if ((lVar1 == 0) || (0x15 < *(int *)(lVar1 + 0x88))) {
      if (((*(ushort *)(lVar2 + 0x14) & 0x9000) != 0) || (*(int *)(lVar2 + 0x20) != 0)) {
        FUN_005c1208(lVar2);
      }
      *(undefined8 *)(lVar2 + 0x30) = 0;
      *(char **)(lVar2 + 8) = "string or blob too big";
      *(undefined4 *)(lVar2 + 0x10) = 0x16;
      *(undefined2 *)(lVar2 + 0x14) = 0x2202;
      *(undefined1 *)(lVar2 + 0x16) = 1;
    }
    else {
      if ((*(ushort *)(lVar2 + 0x14) & 0x9000) == 0) {
        *(undefined2 *)(lVar2 + 0x14) = 1;
        lVar1 = *(long *)(lVar1 + 0x158);
      }
      else {
        FUN_005c1258(lVar2);
        if (*(long *)(lVar2 + 0x18) == 0) {
          return;
        }
        lVar1 = *(long *)(*(long *)(lVar2 + 0x18) + 0x158);
      }
      if (lVar1 != 0) {
        *(undefined4 *)(lVar1 + 0x18) = 0x12;
        *(int *)(lVar1 + 0x34) = *(int *)(lVar1 + 0x34) + 1;
      }
    }
  }
  return;
}


// ===== 00591474  sqlite3_result_zeroblob =====

void sqlite3_result_zeroblob(undefined8 param_1,uint param_2)

{
  sqlite3_result_zeroblob64(param_1,param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU));
  return;
}


// ===== 0059147c  sqlite3_result_zeroblob64 =====

undefined8 sqlite3_result_zeroblob64(undefined8 *param_1,ulong param_2)

{
  uint uVar1;
  long lVar2;
  uint *puVar3;
  
  if (param_1 == (undefined8 *)0x0) {
    sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x167d0,
                "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
    return 0x15;
  }
  puVar3 = (uint *)*param_1;
  lVar2 = *(long *)(puVar3 + 6);
  if (param_2 <= (ulong)(long)*(int *)(lVar2 + 0x88)) {
    if (((puVar3[5] & 0x9000) != 0) || (puVar3[8] != 0)) {
      FUN_005c1208(puVar3);
    }
    *(undefined2 *)(puVar3 + 5) = 0x410;
    puVar3[4] = 0;
    *puVar3 = (uint)param_2 & ((int)(uint)param_2 >> 0x1f ^ 0xffffffffU);
    *(undefined1 *)((long)puVar3 + 0x16) = 1;
    puVar3[2] = 0;
    puVar3[3] = 0;
    return 0;
  }
  uVar1 = puVar3[5];
  *(undefined4 *)((long)param_1 + 0x24) = 0x12;
  if (0x15 < *(int *)(lVar2 + 0x88)) {
    if (((uVar1 & 0x9000) != 0) || (puVar3[8] != 0)) {
      FUN_005c1208(puVar3);
    }
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    *(char **)(puVar3 + 2) = "string or blob too big";
    puVar3[4] = 0x16;
    *(undefined2 *)(puVar3 + 5) = 0x2202;
    *(undefined1 *)((long)puVar3 + 0x16) = 1;
    return 0x12;
  }
  if ((uVar1 & 0x9000) == 0) {
    *(undefined2 *)(puVar3 + 5) = 1;
  }
  else {
    FUN_005c1258(puVar3);
    lVar2 = *(long *)(puVar3 + 6);
    if (lVar2 == 0) {
      return 0x12;
    }
  }
  lVar2 = *(long *)(lVar2 + 0x158);
  if (lVar2 == 0) {
    return 0x12;
  }
  *(undefined4 *)(lVar2 + 0x18) = 0x12;
  *(int *)(lVar2 + 0x34) = *(int *)(lVar2 + 0x34) + 1;
  return 0x12;
}


// ===== 00591604  FUN_00591604 =====

void FUN_00591604(uint *param_1,uint param_2)

{
  if (((param_1[5] & 0x9000) != 0) || (param_1[8] != 0)) {
    FUN_005c1208(param_1);
  }
  param_1[4] = 0;
  *(undefined2 *)(param_1 + 5) = 0x410;
  *param_1 = param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU);
  *(undefined1 *)((long)param_1 + 0x16) = 1;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}


// ===== 00591664  sqlite3_result_error_code =====

void sqlite3_result_error_code(long *param_1,uint param_2)

{
  uint uVar1;
  ushort uVar2;
  
  if (param_1 != (long *)0x0) {
    uVar1 = param_2;
    if (param_2 == 0) {
      uVar1 = 0xffffffff;
    }
    uVar2 = *(ushort *)(*param_1 + 0x14);
    *(uint *)((long)param_1 + 0x24) = uVar1;
    if ((uVar2 & 1) != 0) {
      if (param_2 == 0x204) {
        FUN_0059031c(param_1,"abort due to ROLLBACK",0xffffffff,1,0);
        return;
      }
      if (param_2 == 0x65) {
        FUN_0059031c(param_1,"no more rows available",0xffffffff,1,0);
        return;
      }
      if (param_2 == 100) {
        FUN_0059031c(param_1,"another row available",0xffffffff,1,0);
        return;
      }
      param_2 = param_2 & 0xff;
      if ((param_2 < 0x1d) && ((0x1410004U >> ((ulong)param_2 & 0x3f) & 1) == 0)) {
        FUN_0059031c(param_1,(&PTR_s_not_an_error_00ad3f40)[param_2],0xffffffff,1,0);
        return;
      }
      FUN_0059031c(param_1,"unknown error",0xffffffff,1,0);
      return;
    }
  }
  return;
}


// ===== 00591734  sqlite3_result_error_nomem =====

void sqlite3_result_error_nomem(long *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  if (param_1 != (long *)0x0) {
    lVar2 = *param_1;
    if ((*(ushort *)(lVar2 + 0x14) & 0x9000) == 0) {
      *(undefined2 *)(lVar2 + 0x14) = 1;
      lVar2 = *(long *)(lVar2 + 0x18);
      *(undefined4 *)((long)param_1 + 0x24) = 7;
      cVar1 = *(char *)(lVar2 + 0x67);
    }
    else {
      FUN_005c1258();
      lVar2 = *(long *)(*param_1 + 0x18);
      *(undefined4 *)((long)param_1 + 0x24) = 7;
      cVar1 = *(char *)(lVar2 + 0x67);
    }
    if ((cVar1 == '\0') && (*(char *)(lVar2 + 0x68) == '\0')) {
      *(undefined1 *)(lVar2 + 0x67) = 1;
      if (0 < *(int *)(lVar2 + 0xdc)) {
        *(undefined4 *)(lVar2 + 400) = 1;
      }
      *(undefined2 *)(lVar2 + 0x19c) = 0;
      *(int *)(lVar2 + 0x198) = *(int *)(lVar2 + 0x198) + 1;
      if (*(long *)(lVar2 + 0x158) != 0) {
        FUN_00595b78(*(long *)(lVar2 + 0x158),"out of memory");
        lVar3 = *(long *)(*(long *)(lVar2 + 0x158) + 0xd8);
        *(undefined4 *)(*(long *)(lVar2 + 0x158) + 0x18) = 7;
        for (; lVar3 != 0; lVar3 = *(long *)(lVar3 + 0xd8)) {
          *(undefined4 *)(lVar3 + 0x18) = 7;
          *(int *)(lVar3 + 0x34) = *(int *)(lVar3 + 0x34) + 1;
        }
      }
    }
  }
  return;
}


// ===== 00591818  FUN_00591818 =====

void FUN_00591818(long param_1)

{
  long lVar1;
  
  if ((*(char *)(param_1 + 0x67) == '\0') && (*(char *)(param_1 + 0x68) == '\0')) {
    *(undefined1 *)(param_1 + 0x67) = 1;
    if (0 < *(int *)(param_1 + 0xdc)) {
      *(undefined4 *)(param_1 + 400) = 1;
    }
    *(undefined2 *)(param_1 + 0x19c) = 0;
    *(int *)(param_1 + 0x198) = *(int *)(param_1 + 0x198) + 1;
    if (*(long *)(param_1 + 0x158) != 0) {
      FUN_00595b78(*(long *)(param_1 + 0x158),"out of memory");
      lVar1 = *(long *)(*(long *)(param_1 + 0x158) + 0xd8);
      *(undefined4 *)(*(long *)(param_1 + 0x158) + 0x18) = 7;
      for (; lVar1 != 0; lVar1 = *(long *)(lVar1 + 0xd8)) {
        *(undefined4 *)(lVar1 + 0x18) = 7;
        *(int *)(lVar1 + 0x34) = *(int *)(lVar1 + 0x34) + 1;
      }
      return;
    }
  }
  return;
}


// ===== 005918b4  FUN_005918b4 =====

undefined8 FUN_005918b4(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  short sVar5;
  void *__dest;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auStack_190 [304];
  void *local_48;
  
  if (param_1 == (long *)0x0) {
    lVar7 = 0;
  }
  else {
    lVar7 = param_1[0x1f];
  }
  lVar8 = *param_1;
  uVar6 = FUN_00598a9c(lVar8,lVar7,0xffffffff,*(undefined1 *)((long)param_1 + 0xc6),param_1,
                       &local_48,0);
  __dest = local_48;
  if ((int)uVar6 == 0) {
    memcpy(auStack_190,local_48,0x130);
    memcpy(__dest,param_1,0x130);
    memcpy(param_1,auStack_190,0x130);
    lVar7 = param_1[1];
    lVar9 = *(long *)((long)__dest + 0x10);
    lVar8 = *(long *)((long)__dest + 8);
    uVar3 = *(undefined4 *)((long)__dest + 0x11c);
    uVar4 = *(undefined1 *)((long)__dest + 0xc6);
    *(long *)((long)__dest + 0x10) = param_1[2];
    *(long *)((long)__dest + 8) = lVar7;
    param_1[2] = lVar9;
    param_1[1] = lVar8;
    *(undefined4 *)((long)param_1 + 0x11c) = uVar3;
    *(undefined1 *)((long)param_1 + 0xc6) = uVar4;
    lVar7 = *(long *)((long)__dest + 0xf8);
    *(long *)((long)__dest + 0xf8) = param_1[0x1f];
    param_1[0x1f] = lVar7;
    uVar10 = *(undefined8 *)((long)__dest + 0xec);
    uVar6 = *(undefined8 *)((long)__dest + 0xe4);
    uVar12 = *(undefined8 *)((long)__dest + 0xdc);
    uVar11 = *(undefined8 *)((long)__dest + 0xd4);
    *(undefined4 *)((long)param_1 + 0xf4) = *(undefined4 *)((long)__dest + 0xf4);
    *(undefined8 *)((long)param_1 + 0xec) = uVar10;
    *(undefined8 *)((long)param_1 + 0xe4) = uVar6;
    *(undefined8 *)((long)param_1 + 0xdc) = uVar12;
    *(undefined8 *)((long)param_1 + 0xd4) = uVar11;
    lVar7 = *(long *)(*param_1 + 0x18);
    *(int *)(param_1 + 0x1d) = (int)param_1[0x1d] + 1;
    if (lVar7 != 0) {
      (*DAT_00b0da70)();
    }
    if (0 < *(short *)((long)__dest + 0x20)) {
      lVar8 = 0;
      lVar7 = 0;
      do {
        lVar9 = *(long *)((long)__dest + 0x80);
        puVar2 = (undefined8 *)(param_1[0x10] + lVar8);
        if (((*(ushort *)((long)puVar2 + 0x14) & 0x9000) != 0) || (*(int *)(puVar2 + 4) != 0)) {
          FUN_005c1208(puVar2);
        }
        puVar1 = (undefined8 *)(lVar9 + lVar8);
        lVar7 = lVar7 + 1;
        uVar14 = puVar1[3];
        uVar13 = puVar1[2];
        uVar10 = puVar1[5];
        uVar6 = puVar1[4];
        uVar12 = puVar1[1];
        uVar11 = *puVar1;
        puVar2[6] = puVar1[6];
        lVar9 = lVar9 + lVar8;
        lVar8 = lVar8 + 0x38;
        puVar2[3] = uVar14;
        puVar2[2] = uVar13;
        puVar2[5] = uVar10;
        puVar2[4] = uVar6;
        puVar2[1] = uVar12;
        *puVar2 = uVar11;
        sVar5 = *(short *)((long)__dest + 0x20);
        *(undefined2 *)(lVar9 + 0x14) = 1;
        *(undefined4 *)(lVar9 + 0x20) = 0;
      } while (lVar7 < sVar5);
    }
    if (*(long *)(*param_1 + 0x18) != 0) {
      (*DAT_00b0da80)();
    }
    *(undefined4 *)((long)local_48 + 0x34) = 0;
    if (*(char *)((long)local_48 + 199) != '\0') {
      FUN_0058f640(local_48);
    }
    FUN_0058077c(local_48);
    uVar6 = 0;
  }
  else if ((int)uVar6 == 7) {
    if ((*(char *)(lVar8 + 0x67) == '\0') && (*(char *)(lVar8 + 0x68) == '\0')) {
      *(undefined1 *)(lVar8 + 0x67) = 1;
      if (0 < *(int *)(lVar8 + 0xdc)) {
        *(undefined4 *)(lVar8 + 400) = 1;
      }
      uVar6 = 7;
      *(undefined2 *)(lVar8 + 0x19c) = 0;
      *(int *)(lVar8 + 0x198) = *(int *)(lVar8 + 0x198) + 1;
      if (*(long *)(lVar8 + 0x158) != 0) {
        FUN_00595b78(*(long *)(lVar8 + 0x158),"out of memory");
        uVar6 = 7;
        lVar7 = *(long *)(*(long *)(lVar8 + 0x158) + 0xd8);
        *(undefined4 *)(*(long *)(lVar8 + 0x158) + 0x18) = 7;
        for (; lVar7 != 0; lVar7 = *(long *)(lVar7 + 0xd8)) {
          *(undefined4 *)(lVar7 + 0x18) = 7;
          *(int *)(lVar7 + 0x34) = *(int *)(lVar7 + 0x34) + 1;
        }
      }
    }
    else {
      uVar6 = 7;
    }
  }
  return uVar6;
}


// ===== 00591b24  FUN_00591b24 =====

void * FUN_00591b24(long param_1,char *param_2)

{
  size_t sVar1;
  void *__dest;
  
  if (param_2 != (char *)0x0) {
    sVar1 = strlen(param_2);
    if (param_1 == 0) {
      __dest = (void *)FUN_005827b0(sVar1 + 1);
    }
    else {
      __dest = (void *)FUN_005a76c8(param_1,sVar1 + 1);
    }
    if (__dest != (void *)0x0) {
      memcpy(__dest,param_2,sVar1 + 1);
    }
    return __dest;
  }
  return (void *)0x0;
}


// ===== 00591b9c  sqlite3_user_data =====

long sqlite3_user_data(long param_1)

{
  if (param_1 != 0) {
    param_1 = *(long *)(*(long *)(param_1 + 8) + 8);
  }
  return param_1;
}


// ===== 00591bac  sqlite3_context_db_handle =====

long * sqlite3_context_db_handle(long *param_1)

{
  if (param_1 != (long *)0x0) {
    param_1 = *(long **)(*param_1 + 0x18);
  }
  return param_1;
}


// ===== 00591bbc  sqlite3_vtab_nochange =====

long * sqlite3_vtab_nochange(long *param_1)

{
  if (param_1 != (long *)0x0) {
    param_1 = (long *)(ulong)(((*(ushort *)(*param_1 + 0x14) ^ 0xffff) & 0x401) == 0);
  }
  return param_1;
}


// ===== 00591bd8  sqlite3_vtab_in_first =====

void sqlite3_vtab_in_first(undefined8 param_1,undefined8 param_2)

{
  FUN_00591be0(param_1,param_2,0);
  return;
}


// ===== 00591be0  FUN_00591be0 =====

ulong FUN_00591be0(long param_1,long *param_2,int param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  uint local_74;
  undefined8 local_70;
  long lStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  *param_2 = 0;
  if (param_1 == 0) {
    sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x16942,
                "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
    return 0x15;
  }
  if ((*(ushort *)(param_1 + 0x14) >> 0xc & 1) == 0) {
    return 1;
  }
  if (*(code **)(param_1 + 0x30) != FUN_005d8c68) {
    return 1;
  }
  plVar10 = *(long **)(param_1 + 8);
  lVar8 = *plVar10;
  if (param_3 == 0) {
    uVar6 = FUN_005d98cc(lVar8);
    iVar5 = (int)uVar6;
    if (iVar5 == 0x10) {
LAB_00591d68:
      uVar6 = 0;
    }
    else {
      while (iVar5 == 0) {
        lVar9 = *(long *)(lVar8 + 0x88);
        if (*(char *)(lVar9 + 8) != '\0') goto LAB_00591d68;
        puVar1 = (undefined1 *)(*(long *)(lVar9 + 0x60) + (ulong)*(ushort *)(lVar8 + 0x56) * 2);
        uVar7 = *(uint *)(*(long *)(lVar9 + 0x50) +
                         (ulong)(CONCAT11(*puVar1,puVar1[1]) & *(ushort *)(lVar9 + 0x1a)));
        uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
        uVar6 = FUN_005d9bc0(lVar8,uVar7 >> 0x10 | uVar7 << 0x10);
        iVar5 = (int)uVar6;
      }
    }
    if (*(char *)*plVar10 != '\0') {
      return 0x65;
    }
  }
  else {
    uVar6 = FUN_005d295c(lVar8);
  }
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  local_40 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  local_50 = 0;
  lStack_68 = 0;
  local_70 = 0;
  lVar9 = *plVar10;
  FUN_005b88ac(lVar9);
  lVar8 = *plVar10;
  uVar2 = *(uint *)(lVar9 + 0x40);
  lStack_68 = *(long *)(lVar8 + 0x38);
  uVar4 = *(int *)(*(long *)(lVar8 + 0x88) + 0x58) - (int)lStack_68;
  uVar7 = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
  if ((int)(uint)*(ushort *)(lVar8 + 0x44) <= (int)uVar4) {
    uVar7 = (uint)*(ushort *)(lVar8 + 0x44);
  }
  if (uVar7 < uVar2) {
    uVar6 = FUN_005d95bc(lVar8,0,uVar2,&local_70);
    if ((int)uVar6 != 0) goto LAB_00591e0c;
  }
  else {
    local_60._0_6_ = CONCAT24(0x4010,uVar2);
  }
  lVar8 = lStack_68;
  lVar9 = plVar10[1];
  bVar3 = *(byte *)(lStack_68 + 1);
  if ((char)bVar3 < '\0') {
    iVar5 = FUN_005cf014((byte *)(lStack_68 + 1),&local_74);
    uVar6 = (ulong)(iVar5 + 1) & 0xff;
  }
  else {
    uVar6 = 2;
    local_74 = (uint)bVar3;
  }
  FUN_005cf0ec(lVar8 + uVar6,local_74,lVar9);
  *(undefined1 *)(lVar9 + 0x16) = *(undefined1 *)(*(long *)(lVar9 + 0x18) + 100);
  if (((*(byte *)(lVar9 + 0x15) >> 6 & 1) == 0) || (iVar5 = FUN_0058ffec(lVar9), iVar5 == 0)) {
    uVar6 = 0;
    *param_2 = lVar9;
  }
  else {
    uVar6 = 7;
  }
LAB_00591e0c:
  if ((local_60 & 0x900000000000) == 0 && (int)local_50 == 0) {
    return uVar6;
  }
  FUN_005c1208(&local_70);
  return uVar6 & 0xffffffff;
}


// ===== 00591e48  sqlite3_vtab_in_next =====

void sqlite3_vtab_in_next(undefined8 param_1,undefined8 param_2)

{
  FUN_00591be0(param_1,param_2,1);
  return;
}


// ===== 00591e50  sqlite3_aggregate_context =====

undefined8 sqlite3_aggregate_context(long param_1)

{
  undefined8 uVar1;
  
  if (-1 < *(short *)(*(long *)(param_1 + 0x10) + 0x14)) {
    uVar1 = FUN_00591e68();
    return uVar1;
  }
  return *(undefined8 *)(*(long *)(param_1 + 0x10) + 8);
}


// ===== 00591e68  FUN_00591e68 =====

undefined8 FUN_00591e68(long param_1,uint param_2)

{
  void *__s;
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  if ((int)param_2 < 1) {
    if ((*(ushort *)((long)puVar2 + 0x14) & 0x9000) == 0) {
      *(undefined2 *)((long)puVar2 + 0x14) = 1;
      puVar2[1] = 0;
      return 0;
    }
    FUN_005c1258(puVar2);
    puVar2[1] = 0;
    return 0;
  }
  if (*(int *)(puVar2 + 4) < (int)param_2) {
    FUN_005c13c0(puVar2,(ulong)param_2,0);
    __s = (void *)puVar2[1];
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined2 *)((long)puVar2 + 0x14) = 0x8000;
    *puVar2 = uVar1;
  }
  else {
    __s = (void *)puVar2[5];
    puVar2[1] = __s;
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined2 *)((long)puVar2 + 0x14) = 0x8000;
    *puVar2 = uVar1;
  }
  if (__s != (void *)0x0) {
    memset(__s,0,(ulong)param_2);
    return puVar2[1];
  }
  return 0;
}


// ===== 00591f68  sqlite3_get_auxdata =====

long sqlite3_get_auxdata(long param_1,int param_2)

{
  int *piVar1;
  
  if (param_1 != 0) {
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (piVar1 = *(int **)(*(long *)(param_1 + 0x18) + 0x128), piVar1 != (int *)0x0)) {
      if (param_2 < 0) {
        do {
          if (piVar1[1] == param_2) {
LAB_00591fc0:
            return *(long *)(piVar1 + 2);
          }
          piVar1 = *(int **)(piVar1 + 6);
        } while (piVar1 != (int *)0x0);
      }
      else {
        do {
          if ((piVar1[1] == param_2) && (*piVar1 == *(int *)(param_1 + 0x20))) goto LAB_00591fc0;
          piVar1 = *(int **)(piVar1 + 6);
        } while (piVar1 != (int *)0x0);
      }
    }
    param_1 = 0;
  }
  return param_1;
}


// ===== 00591fd0  sqlite3_set_auxdata =====

void sqlite3_set_auxdata(long param_1,int param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  long *plVar4;
  
  if (param_1 == 0) {
    return;
  }
  plVar4 = *(long **)(param_1 + 0x18);
  if (plVar4 != (long *)0x0) {
    piVar2 = (int *)plVar4[0x25];
    if (piVar2 != (int *)0x0) {
      if (param_2 < 0) {
        do {
          if (piVar2[1] == param_2) goto LAB_00592044;
          piVar2 = *(int **)(piVar2 + 6);
        } while (piVar2 != (int *)0x0);
      }
      else {
        do {
          if ((piVar2[1] == param_2) && (*piVar2 == *(int *)(param_1 + 0x20))) goto LAB_00592044;
          piVar2 = *(int **)(piVar2 + 6);
        } while (piVar2 != (int *)0x0);
      }
    }
    if (*plVar4 == 0) {
      piVar2 = (int *)FUN_005827b0(0x20);
    }
    else {
      piVar2 = (int *)FUN_005a76c8(*plVar4,0x20);
    }
    if (piVar2 != (int *)0x0) {
      piVar2[2] = 0;
      piVar2[3] = 0;
      piVar2[0] = 0;
      piVar2[1] = 0;
      piVar2[6] = 0;
      piVar2[7] = 0;
      piVar2[4] = 0;
      piVar2[5] = 0;
      *piVar2 = *(int *)(param_1 + 0x20);
      piVar2[1] = param_2;
      lVar3 = plVar4[0x25];
      iVar1 = *(int *)(param_1 + 0x24);
      plVar4[0x25] = (long)piVar2;
      *(long *)(piVar2 + 6) = lVar3;
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
      }
      goto LAB_005920c4;
    }
  }
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x005920f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_3);
  return;
LAB_00592044:
  if (*(code **)(piVar2 + 4) != (code *)0x0) {
    (**(code **)(piVar2 + 4))(*(undefined8 *)(piVar2 + 2));
  }
LAB_005920c4:
  *(undefined8 *)(piVar2 + 2) = param_3;
  *(code **)(piVar2 + 4) = UNRECOVERED_JUMPTABLE;
  return;
}


// ===== 00592110  FUN_00592110 =====

void * FUN_00592110(long param_1,size_t param_2)

{
  void *__s;
  
  if (param_1 == 0) {
    __s = (void *)FUN_005827b0(param_2);
  }
  else {
    __s = (void *)FUN_005a76c8(param_1,param_2);
  }
  if (__s != (void *)0x0) {
    memset(__s,0,param_2);
  }
  return __s;
}


// ===== 00592160  sqlite3_aggregate_count =====

undefined4 sqlite3_aggregate_count(long param_1)

{
  return *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x10);
}


// ===== 0059216c  sqlite3_column_count =====

ulong sqlite3_column_count(ulong param_1)

{
  if (param_1 != 0) {
    param_1 = (ulong)*(ushort *)(param_1 + 0xc0);
  }
  return param_1;
}


// ===== 00592178  sqlite3_data_count =====

ulong sqlite3_data_count(ulong param_1)

{
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0xa0) == 0) {
      return 0;
    }
    param_1 = (ulong)*(ushort *)(param_1 + 0xc0);
  }
  return param_1;
}


// ===== 00592194  sqlite3_column_blob =====

undefined8 sqlite3_column_blob(long *param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    if (*(long *)(*param_1 + 0x18) != 0) {
      (*DAT_00b0da70)();
    }
    if ((param_1[0x14] == 0) || (*(ushort *)(param_1 + 0x18) <= param_2)) {
      lVar4 = *param_1;
      *(undefined4 *)(lVar4 + 0x50) = 0x19;
      FUN_005ac5c0(lVar4,0x19);
      uVar3 = sqlite3_value_blob(&DAT_002c8608);
      iVar1 = *(int *)((long)param_1 + 0x34);
      lVar4 = *param_1;
    }
    else {
      uVar3 = sqlite3_value_blob(param_1[0x14] + (ulong)param_2 * 0x38);
      iVar1 = *(int *)((long)param_1 + 0x34);
      lVar4 = *param_1;
    }
    if ((iVar1 == 0) && (*(char *)(lVar4 + 0x67) == '\0')) {
      lVar4 = *(long *)(lVar4 + 0x18);
      *(undefined4 *)((long)param_1 + 0x34) = 0;
    }
    else {
      uVar2 = FUN_005c1188(lVar4);
      lVar4 = *(long *)(*param_1 + 0x18);
      *(undefined4 *)((long)param_1 + 0x34) = uVar2;
    }
    if (lVar4 != 0) {
      (*DAT_00b0da80)(lVar4);
    }
    return uVar3;
  }
  uVar3 = sqlite3_value_blob(&DAT_002c8608);
  return uVar3;
}


// ===== 00592288  sqlite3_column_bytes =====

int sqlite3_column_bytes(long *param_1,uint param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  long lVar5;
  
  if (param_1 != (long *)0x0) {
    if (*(long *)(*param_1 + 0x18) != 0) {
      (*DAT_00b0da70)();
    }
    if ((param_1[0x14] != 0) && (param_2 < *(ushort *)(param_1 + 0x18))) {
      piVar4 = (int *)(param_1[0x14] + (ulong)param_2 * 0x38);
      uVar1 = *(ushort *)(piVar4 + 5);
      goto joined_r0x00592300;
    }
    lVar5 = *param_1;
    *(undefined4 *)(lVar5 + 0x50) = 0x19;
    FUN_005ac5c0(lVar5,0x19);
  }
  piVar4 = (int *)&DAT_002c8608;
  uVar1 = DAT_002c861c;
joined_r0x00592300:
  if (((uVar1 >> 1 & 1) == 0) || (*(char *)((long)piVar4 + 0x16) != '\x01')) {
    if ((uVar1 >> 4 & 1) == 0) {
      if ((uVar1 & 1) == 0) {
        iVar2 = FUN_005c1788(piVar4,1);
      }
      else {
        iVar2 = 0;
      }
    }
    else {
      iVar2 = piVar4[4];
      if ((uVar1 >> 10 & 1) != 0) {
        iVar2 = *piVar4 + iVar2;
      }
    }
  }
  else {
    iVar2 = piVar4[4];
  }
  if (param_1 != (long *)0x0) {
    lVar5 = *param_1;
    if ((*(int *)((long)param_1 + 0x34) == 0) && (*(char *)(lVar5 + 0x67) == '\0')) {
      lVar5 = *(long *)(lVar5 + 0x18);
      *(undefined4 *)((long)param_1 + 0x34) = 0;
    }
    else {
      uVar3 = FUN_005c1188(lVar5);
      lVar5 = *(long *)(*param_1 + 0x18);
      *(undefined4 *)((long)param_1 + 0x34) = uVar3;
    }
    if (lVar5 != 0) {
      (*DAT_00b0da80)(lVar5);
      return iVar2;
    }
  }
  return iVar2;
}


// ===== 005923c4  sqlite3_column_bytes16 =====

int sqlite3_column_bytes16(long *param_1,uint param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  long lVar5;
  
  if (param_1 != (long *)0x0) {
    if (*(long *)(*param_1 + 0x18) != 0) {
      (*DAT_00b0da70)();
    }
    if ((param_1[0x14] != 0) && (param_2 < *(ushort *)(param_1 + 0x18))) {
      piVar4 = (int *)(param_1[0x14] + (ulong)param_2 * 0x38);
      uVar1 = *(ushort *)(piVar4 + 5);
      goto joined_r0x0059243c;
    }
    lVar5 = *param_1;
    *(undefined4 *)(lVar5 + 0x50) = 0x19;
    FUN_005ac5c0(lVar5,0x19);
  }
  piVar4 = (int *)&DAT_002c8608;
  uVar1 = DAT_002c861c;
joined_r0x0059243c:
  if (((uVar1 >> 1 & 1) == 0) || (*(char *)((long)piVar4 + 0x16) == '\x01')) {
    if ((uVar1 >> 4 & 1) == 0) {
      if ((uVar1 & 1) == 0) {
        iVar2 = FUN_005c1788(piVar4,2);
      }
      else {
        iVar2 = 0;
      }
    }
    else {
      iVar2 = piVar4[4];
      if ((uVar1 >> 10 & 1) != 0) {
        iVar2 = *piVar4 + iVar2;
      }
    }
  }
  else {
    iVar2 = piVar4[4];
  }
  if (param_1 != (long *)0x0) {
    lVar5 = *param_1;
    if ((*(int *)((long)param_1 + 0x34) == 0) && (*(char *)(lVar5 + 0x67) == '\0')) {
      lVar5 = *(long *)(lVar5 + 0x18);
      *(undefined4 *)((long)param_1 + 0x34) = 0;
    }
    else {
      uVar3 = FUN_005c1188(lVar5);
      lVar5 = *(long *)(*param_1 + 0x18);
      *(undefined4 *)((long)param_1 + 0x34) = uVar3;
    }
    if (lVar5 != 0) {
      (*DAT_00b0da80)(lVar5);
      return iVar2;
    }
  }
  return iVar2;
}


// ===== 00592504  sqlite3_column_double =====

undefined8 * sqlite3_column_double(long *param_1,uint param_2)

{
  ushort uVar1;
  undefined8 *puVar2;
  long lVar3;
  
  if (param_1 != (long *)0x0) {
    if (*(long *)(*param_1 + 0x18) != 0) {
      (*DAT_00b0da70)();
    }
    if ((param_1[0x14] != 0) && (param_2 < *(ushort *)(param_1 + 0x18))) {
      puVar2 = (undefined8 *)(param_1[0x14] + (ulong)param_2 * 0x38);
      uVar1 = *(ushort *)((long)puVar2 + 0x14);
      goto joined_r0x00592588;
    }
    lVar3 = *param_1;
    *(undefined4 *)(lVar3 + 0x50) = 0x19;
    FUN_005ac5c0(lVar3,0x19);
  }
  puVar2 = &DAT_002c8608;
  uVar1 = DAT_002c861c;
joined_r0x00592588:
  if ((((uVar1 >> 3 & 1) == 0) && ((uVar1 & 0x24) == 0)) && ((uVar1 & 0x12) != 0)) {
    puVar2 = (undefined8 *)FUN_005c1da8();
  }
  if (param_1 != (long *)0x0) {
    lVar3 = *param_1;
    if ((*(int *)((long)param_1 + 0x34) == 0) && (*(char *)(lVar3 + 0x67) == '\0')) {
      puVar2 = (undefined8 *)0x0;
      lVar3 = *(long *)(lVar3 + 0x18);
      *(undefined4 *)((long)param_1 + 0x34) = 0;
    }
    else {
      puVar2 = (undefined8 *)FUN_005c1188(lVar3);
      lVar3 = *(long *)(*param_1 + 0x18);
      *(int *)((long)param_1 + 0x34) = (int)puVar2;
    }
    if (lVar3 != 0) {
      puVar2 = (undefined8 *)(*DAT_00b0da80)(lVar3);
      return puVar2;
    }
  }
  return puVar2;
}


// ===== 00592640  sqlite3_column_text =====

undefined8 sqlite3_column_text(long *param_1,uint param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (param_1 != (long *)0x0) {
    if (*(long *)(*param_1 + 0x18) != 0) {
      (*DAT_00b0da70)();
    }
    if ((param_1[0x14] != 0) && (param_2 < *(ushort *)(param_1 + 0x18))) {
      puVar3 = (undefined8 *)(param_1[0x14] + (ulong)param_2 * 0x38);
      uVar1 = *(ushort *)((long)puVar3 + 0x14);
      goto joined_r0x005926c8;
    }
    lVar5 = *param_1;
    *(undefined4 *)(lVar5 + 0x50) = 0x19;
    FUN_005ac5c0(lVar5,0x19);
  }
  puVar3 = &DAT_002c8608;
  uVar1 = DAT_002c861c;
joined_r0x005926c8:
  if ((((uVar1 ^ 0xffff) & 0x202) == 0) && (*(char *)((long)puVar3 + 0x16) == '\x01')) {
    uVar4 = puVar3[1];
  }
  else if ((uVar1 & 1) == 0) {
    uVar4 = FUN_005c17b0(puVar3,1);
  }
  else {
    uVar4 = 0;
  }
  if (param_1 != (long *)0x0) {
    lVar5 = *param_1;
    if ((*(int *)((long)param_1 + 0x34) == 0) && (*(char *)(lVar5 + 0x67) == '\0')) {
      lVar5 = *(long *)(lVar5 + 0x18);
      *(undefined4 *)((long)param_1 + 0x34) = 0;
    }
    else {
      uVar2 = FUN_005c1188(lVar5);
      lVar5 = *(long *)(*param_1 + 0x18);
      *(undefined4 *)((long)param_1 + 0x34) = uVar2;
    }
    if (lVar5 != 0) {
      (*DAT_00b0da80)(lVar5);
      return uVar4;
    }
  }
  return uVar4;
}


// ===== 00592770  sqlite3_column_value =====

undefined8 * sqlite3_column_value(long *param_1,uint param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_1 != (long *)0x0) {
    if (*(long *)(*param_1 + 0x18) != 0) {
      (*DAT_00b0da70)();
    }
    if ((param_1[0x14] != 0) && (param_2 < *(ushort *)(param_1 + 0x18))) {
      puVar4 = (undefined8 *)(param_1[0x14] + (ulong)param_2 * 0x38);
      uVar1 = *(ushort *)((long)puVar4 + 0x14);
      goto joined_r0x005927e8;
    }
    lVar3 = *param_1;
    *(undefined4 *)(lVar3 + 0x50) = 0x19;
    FUN_005ac5c0(lVar3,0x19);
  }
  puVar4 = &DAT_002c8608;
  uVar1 = DAT_002c861c;
joined_r0x005927e8:
  if ((uVar1 >> 0xd & 1) != 0) {
    *(ushort *)((long)puVar4 + 0x14) = uVar1 & 0x9fff | 0x4000;
  }
  if (param_1 != (long *)0x0) {
    lVar3 = *param_1;
    if ((*(int *)((long)param_1 + 0x34) == 0) && (*(char *)(lVar3 + 0x67) == '\0')) {
      lVar3 = *(long *)(lVar3 + 0x18);
      *(undefined4 *)((long)param_1 + 0x34) = 0;
    }
    else {
      uVar2 = FUN_005c1188(lVar3);
      lVar3 = *(long *)(*param_1 + 0x18);
      *(undefined4 *)((long)param_1 + 0x34) = uVar2;
    }
    if (lVar3 != 0) {
      (*DAT_00b0da80)(lVar3);
    }
  }
  return puVar4;
}


// ===== 0059285c  sqlite3_column_text16 =====

undefined8 sqlite3_column_text16(long *param_1,uint param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (param_1 != (long *)0x0) {
    if (*(long *)(*param_1 + 0x18) != 0) {
      (*DAT_00b0da70)();
    }
    if ((param_1[0x14] != 0) && (param_2 < *(ushort *)(param_1 + 0x18))) {
      puVar3 = (undefined8 *)(param_1[0x14] + (ulong)param_2 * 0x38);
      uVar1 = *(ushort *)((long)puVar3 + 0x14);
      goto joined_r0x005928e4;
    }
    lVar5 = *param_1;
    *(undefined4 *)(lVar5 + 0x50) = 0x19;
    FUN_005ac5c0(lVar5,0x19);
  }
  puVar3 = &DAT_002c8608;
  uVar1 = DAT_002c861c;
joined_r0x005928e4:
  if ((((uVar1 ^ 0xffff) & 0x202) == 0) && (*(char *)((long)puVar3 + 0x16) == '\x02')) {
    uVar4 = puVar3[1];
  }
  else if ((uVar1 & 1) == 0) {
    uVar4 = FUN_005c17b0(puVar3,2);
  }
  else {
    uVar4 = 0;
  }
  if (param_1 != (long *)0x0) {
    lVar5 = *param_1;
    if ((*(int *)((long)param_1 + 0x34) == 0) && (*(char *)(lVar5 + 0x67) == '\0')) {
      lVar5 = *(long *)(lVar5 + 0x18);
      *(undefined4 *)((long)param_1 + 0x34) = 0;
    }
    else {
      uVar2 = FUN_005c1188(lVar5);
      lVar5 = *(long *)(*param_1 + 0x18);
      *(undefined4 *)((long)param_1 + 0x34) = uVar2;
    }
    if (lVar5 != 0) {
      (*DAT_00b0da80)(lVar5);
      return uVar4;
    }
  }
  return uVar4;
}


// ===== 0059298c  sqlite3_column_type =====

undefined1 sqlite3_column_type(long *param_1,uint param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (param_1 == (long *)0x0) {
    return 5;
  }
  if (*(long *)(*param_1 + 0x18) != 0) {
    (*DAT_00b0da70)();
  }
  if ((param_1[0x14] == 0) || (*(ushort *)(param_1 + 0x18) <= param_2)) {
    lVar4 = *param_1;
    *(undefined4 *)(lVar4 + 0x50) = 0x19;
    FUN_005ac5c0(lVar4,0x19);
    puVar3 = &DAT_002c8608;
  }
  else {
    puVar3 = (undefined8 *)(param_1[0x14] + (ulong)param_2 * 0x38);
  }
  uVar1 = (&DAT_002c79c0)[(ulong)*(ushort *)((long)puVar3 + 0x14) & 0x3f];
  lVar4 = *param_1;
  if ((*(int *)((long)param_1 + 0x34) == 0) && (*(char *)(lVar4 + 0x67) == '\0')) {
    lVar4 = *(long *)(lVar4 + 0x18);
    *(undefined4 *)((long)param_1 + 0x34) = 0;
  }
  else {
    uVar2 = FUN_005c1188(lVar4);
    lVar4 = *(long *)(*param_1 + 0x18);
    *(undefined4 *)((long)param_1 + 0x34) = uVar2;
  }
  if (lVar4 == 0) {
    return uVar1;
  }
  (*DAT_00b0da80)(lVar4);
  return uVar1;
}


// ===== 00592a8c  sqlite3_column_name =====

void sqlite3_column_name(undefined8 param_1,undefined8 param_2)

{
  FUN_00592a98(param_1,param_2,0,0);
  return;
}


// ===== 00592a98  FUN_00592a98 =====

undefined * FUN_00592a98(long *param_1,uint param_2,int param_3,uint param_4)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined2 uVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  
  if (param_1 == (long *)0x0) {
    sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x16b0a,
                "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
    return (undefined *)0x0;
  }
  if ((int)param_2 < 0) {
    return (undefined *)0x0;
  }
  lVar11 = *param_1;
  if (*(long *)(lVar11 + 0x18) != 0) {
    (*DAT_00b0da70)(*(long *)(lVar11 + 0x18));
  }
  uVar4 = *(ushort *)(param_1 + 0x19) >> 2 & 3;
  if ((*(ushort *)(param_1 + 0x19) >> 2 & 3) == 0) {
    if (*(ushort *)(param_1 + 0x18) <= param_2) goto LAB_00592c8c;
    lVar8 = (ulong)param_2 + (ulong)*(ushort *)(param_1 + 0x18) * (ulong)param_4;
    lVar10 = param_1[0x13];
    bVar1 = *(byte *)(lVar11 + 0x67);
    if (param_3 == 0) {
      if (lVar10 != 0) {
        uVar2 = *(ushort *)(lVar10 + lVar8 * 0x38 + 0x14);
        if ((((uVar2 ^ 0xffff) & 0x202) == 0) && (*(char *)(lVar10 + lVar8 * 0x38 + 0x16) == '\x01')
           ) goto LAB_00592c3c;
        if ((uVar2 & 1) == 0) {
          uVar6 = 1;
          goto LAB_00592c6c;
        }
      }
LAB_00592c74:
      puVar5 = (undefined *)0x0;
    }
    else {
      if (lVar10 == 0) goto LAB_00592c74;
      uVar2 = *(ushort *)(lVar10 + lVar8 * 0x38 + 0x14);
      if ((((uVar2 ^ 0xffff) & 0x202) == 0) && (*(char *)(lVar10 + lVar8 * 0x38 + 0x16) == '\x02'))
      {
LAB_00592c3c:
        puVar5 = *(undefined **)(lVar10 + lVar8 * 0x38 + 8);
      }
      else {
        if ((uVar2 & 1) != 0) goto LAB_00592c74;
        uVar6 = 2;
LAB_00592c6c:
        puVar5 = (undefined *)FUN_005c17b0(lVar10 + lVar8 * 0x38,uVar6);
      }
    }
    if (bVar1 < *(byte *)(lVar11 + 0x67)) {
      if (*(int *)(lVar11 + 0xdc) == 0) {
        *(undefined1 *)(lVar11 + 0x67) = 0;
        *(undefined4 *)(lVar11 + 400) = 0;
        iVar3 = *(int *)(lVar11 + 0x198) + -1;
        *(int *)(lVar11 + 0x198) = iVar3;
        uVar7 = 0;
        if (iVar3 == 0) {
          uVar7 = *(undefined2 *)(lVar11 + 0x19e);
        }
        puVar5 = (undefined *)0x0;
        *(undefined2 *)(lVar11 + 0x19c) = uVar7;
        lVar11 = *(long *)(lVar11 + 0x18);
        goto joined_r0x00592b44;
      }
      goto LAB_00592c8c;
    }
  }
  else {
    if ((int)param_4 < 1) {
      uVar9 = 8;
      if (uVar4 != 1) {
        uVar9 = 4;
      }
      if (param_2 < uVar9) {
        uVar4 = (param_2 + uVar4 * 8) - 8;
        if (param_3 == 0) {
          puVar5 = (&PTR_DAT_00ad2898)[uVar4];
          lVar11 = *(long *)(lVar11 + 0x18);
        }
        else {
          puVar5 = &UNK_002c864c + (ulong)(byte)(&DAT_002c8640)[uVar4] * 2;
          lVar11 = *(long *)(lVar11 + 0x18);
        }
        goto joined_r0x00592b44;
      }
    }
LAB_00592c8c:
    puVar5 = (undefined *)0x0;
  }
  lVar11 = *(long *)(lVar11 + 0x18);
joined_r0x00592b44:
  if (lVar11 != 0) {
    (*DAT_00b0da80)(lVar11);
    return puVar5;
  }
  return puVar5;
}


// ===== 00592d04  sqlite3_column_name16 =====

void sqlite3_column_name16(undefined8 param_1,undefined8 param_2)

{
  FUN_00592a98(param_1,param_2,1,0);
  return;
}


// ===== 00592d10  sqlite3_column_decltype =====

void sqlite3_column_decltype(undefined8 param_1,undefined8 param_2)

{
  FUN_00592a98(param_1,param_2,0,1);
  return;
}


// ===== 00592d1c  sqlite3_column_decltype16 =====

void sqlite3_column_decltype16(undefined8 param_1,undefined8 param_2)

{
  FUN_00592a98(param_1,param_2,1,1);
  return;
}


// ===== 00592d28  sqlite3_column_database_name =====

void sqlite3_column_database_name(undefined8 param_1,undefined8 param_2)

{
  FUN_00592a98(param_1,param_2,0,2);
  return;
}


// ===== 00592d34  sqlite3_column_database_name16 =====

void sqlite3_column_database_name16(undefined8 param_1,undefined8 param_2)

{
  FUN_00592a98(param_1,param_2,1,2);
  return;
}


// ===== 00592d40  sqlite3_column_table_name =====

void sqlite3_column_table_name(undefined8 param_1,undefined8 param_2)

{
  FUN_00592a98(param_1,param_2,0,3);
  return;
}


// ===== 00592d4c  sqlite3_column_table_name16 =====

void sqlite3_column_table_name16(undefined8 param_1,undefined8 param_2)

{
  FUN_00592a98(param_1,param_2,1,3);
  return;
}


// ===== 00592d58  sqlite3_column_origin_name =====

void sqlite3_column_origin_name(undefined8 param_1,undefined8 param_2)

{
  FUN_00592a98(param_1,param_2,0,4);
  return;
}


// ===== 00592d64  sqlite3_column_origin_name16 =====

void sqlite3_column_origin_name16(undefined8 param_1,undefined8 param_2)

{
  FUN_00592a98(param_1,param_2,1,4);
  return;
}


// ===== 00592d70  sqlite3_bind_blob =====

undefined8 sqlite3_bind_blob(void)

{
  undefined8 uVar1;
  int in_w3;
  
  if (-1 < in_w3) {
    uVar1 = FUN_00592dbc();
    return uVar1;
  }
  sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x16bfe,
              "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
  return 0x15;
}


// ===== 00592dbc  FUN_00592dbc =====

ulong FUN_00592dbc(long *param_1,int param_2,long param_3,undefined8 param_4,code *param_5,
                  uint param_6)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = (long)param_2 - 1;
  uVar1 = FUN_00592fec(param_1,uVar2 & 0xffffffff);
  if ((int)uVar1 != 0) {
    if (param_5 + 1 < (code *)0x2) {
      return uVar1;
    }
    (*param_5)(param_3);
    goto LAB_00592ed8;
  }
  if (param_3 == 0) {
LAB_00592e80:
    uVar1 = 0;
  }
  else {
    lVar4 = param_1[0x10];
    lVar3 = lVar4 + uVar2 * 0x38;
    uVar1 = FUN_00590724(lVar3,param_3,param_4,param_6,param_5);
    if (((param_6 & 0xff) != 0) && ((int)uVar1 == 0)) {
      lVar4 = lVar4 + uVar2 * 0x38;
      if ((*(ushort *)(lVar4 + 0x14) >> 1 & 1) == 0) {
        uVar1 = 0;
        *(char *)(lVar4 + 0x16) = *(char *)(*param_1 + 100);
        goto LAB_00592eb8;
      }
      if (*(char *)(lVar4 + 0x16) == *(char *)(*param_1 + 100)) goto LAB_00592e80;
      uVar1 = FUN_005c2adc(lVar3);
    }
    if ((int)uVar1 != 0) {
      lVar4 = *param_1;
      *(int *)(lVar4 + 0x50) = (int)uVar1;
      FUN_005ac5c0(lVar4,uVar1 & 0xffffffff);
      uVar1 = FUN_005c1188(*param_1,uVar1 & 0xffffffff);
    }
  }
LAB_00592eb8:
  if (*(long *)(*param_1 + 0x18) == 0) {
    return uVar1;
  }
  (*DAT_00b0da80)(*(long *)(*param_1 + 0x18));
LAB_00592ed8:
  return uVar1 & 0xffffffff;
}


// ===== 00592f0c  sqlite3_bind_blob64 =====

void sqlite3_bind_blob64(void)

{
  FUN_00592dbc();
  return;
}


// ===== 00592f14  sqlite3_bind_double =====

ulong sqlite3_bind_double(double param_1,long *param_2,int param_3)

{
  ulong uVar1;
  double *pdVar2;
  ushort *puVar3;
  
  uVar1 = FUN_00592fec(param_2,(long)param_3 - 1U & 0xffffffff);
  if ((int)uVar1 == 0) {
    pdVar2 = (double *)(param_2[0x10] + ((long)param_3 - 1U) * 0x38);
    puVar3 = (ushort *)((long)pdVar2 + 0x14);
    if ((*puVar3 & 0x9000) == 0) {
      *puVar3 = 1;
    }
    else {
      uVar1 = uVar1 & 0xffffffff;
      FUN_005c1258(pdVar2);
    }
    if (!NAN(param_1)) {
      *pdVar2 = param_1;
      *puVar3 = 8;
    }
    if (*(long *)(*param_2 + 0x18) != 0) {
      (*DAT_00b0da80)(*(long *)(*param_2 + 0x18));
      return uVar1 & 0xffffffff;
    }
  }
  return uVar1;
}


// ===== 00592fec  FUN_00592fec =====

undefined4 FUN_00592fec(long *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  long lVar4;
  ushort *puVar5;
  
  if (param_1 == (long *)0x0) {
    pcVar3 = "API called with NULL prepared statement";
  }
  else {
    if (*param_1 != 0) {
      if (*(long *)(*param_1 + 0x18) != 0) {
        (*DAT_00b0da70)();
      }
      if (*(char *)((long)param_1 + 199) == '\x01') {
        if ((uint)(int)(short)param_1[4] <= param_2) {
          lVar4 = *param_1;
          *(undefined4 *)(lVar4 + 0x50) = 0x19;
          FUN_005ac5c0(lVar4,0x19);
          if (*(long *)(*param_1 + 0x18) == 0) {
            return 0x19;
          }
          (*DAT_00b0da80)();
          return 0x19;
        }
        puVar5 = (ushort *)(param_1[0x10] + (ulong)param_2 * 0x38 + 0x14);
        if (((*puVar5 & 0x9000) != 0) ||
           (*(int *)(param_1[0x10] + (ulong)param_2 * 0x38 + 0x20) != 0)) {
          FUN_005c1208();
        }
        lVar4 = *param_1;
        uVar2 = *(uint *)((long)param_1 + 0x11c);
        *puVar5 = 1;
        *(undefined4 *)(lVar4 + 0x50) = 0;
        if (uVar2 != 0) {
          uVar1 = 0x80000000;
          if (param_2 < 0x1f) {
            uVar1 = 1 << (ulong)(param_2 & 0x1f);
          }
          if ((uVar2 & uVar1) != 0) {
            *(ushort *)(param_1 + 0x19) = *(ushort *)(param_1 + 0x19) & 0xfffc | 1;
            return 0;
          }
        }
        return 0;
      }
      lVar4 = *param_1;
      sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x16bae,
                  "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
      *(undefined4 *)(lVar4 + 0x50) = 0x15;
      FUN_005ac5c0(lVar4,0x15);
      if (*(long *)(*param_1 + 0x18) != 0) {
        (*DAT_00b0da80)();
      }
      sqlite3_log(0x15,"bind on a busy prepared statement: [%s]",param_1[0x1f]);
      sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x16bb2,
                  "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
      return 0x15;
    }
    pcVar3 = "API called with finalized prepared statement";
  }
  sqlite3_log(0x15,pcVar3);
  sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x16baa,
              "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
  return 0x15;
}


// ===== 0059323c  sqlite3_bind_int =====

ulong sqlite3_bind_int(long *param_1,int param_2,int param_3)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  
  uVar1 = FUN_00592fec(param_1,(long)param_2 - 1U & 0xffffffff);
  if ((int)uVar1 == 0) {
    plVar2 = (long *)(param_1[0x10] + ((long)param_2 - 1U) * 0x38);
    if ((*(ushort *)((long)plVar2 + 0x14) & 0x9000) == 0) {
      *plVar2 = (long)param_3;
      *(ushort *)((long)plVar2 + 0x14) = 4;
      lVar3 = *(long *)(*param_1 + 0x18);
    }
    else {
      uVar1 = uVar1 & 0xffffffff;
      FUN_005c2a94(plVar2);
      lVar3 = *(long *)(*param_1 + 0x18);
    }
    if (lVar3 != 0) {
      (*DAT_00b0da80)(lVar3);
      return uVar1 & 0xffffffff;
    }
  }
  return uVar1;
}


// ===== 005932fc  sqlite3_bind_int64 =====

ulong sqlite3_bind_int64(long *param_1,int param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  
  uVar1 = FUN_00592fec(param_1,(long)param_2 - 1U & 0xffffffff);
  if ((int)uVar1 == 0) {
    puVar2 = (undefined8 *)(param_1[0x10] + ((long)param_2 - 1U) * 0x38);
    if ((*(ushort *)((long)puVar2 + 0x14) & 0x9000) == 0) {
      *puVar2 = param_3;
      *(ushort *)((long)puVar2 + 0x14) = 4;
      lVar3 = *(long *)(*param_1 + 0x18);
    }
    else {
      uVar1 = uVar1 & 0xffffffff;
      FUN_005c2a94(puVar2,param_3);
      lVar3 = *(long *)(*param_1 + 0x18);
    }
    if (lVar3 != 0) {
      (*DAT_00b0da80)(lVar3);
      return uVar1 & 0xffffffff;
    }
  }
  return uVar1;
}


// ===== 005933bc  sqlite3_bind_null =====

ulong sqlite3_bind_null(long *param_1,int param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00592fec(param_1,param_2 + -1);
  if (((int)uVar1 == 0) && (*(long *)(*param_1 + 0x18) != 0)) {
    (*DAT_00b0da80)(*(long *)(*param_1 + 0x18));
    return uVar1 & 0xffffffff;
  }
  return uVar1;
}


// ===== 00593414  sqlite3_bind_pointer =====

int sqlite3_bind_pointer
              (long *param_1,int param_2,undefined8 param_3,undefined1 *param_4,code *param_5)

{
  undefined1 *puVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  
  iVar3 = FUN_00592fec(param_1,(long)param_2 - 1U & 0xffffffff);
  if (iVar3 == 0) {
    puVar5 = (undefined8 *)(param_1[0x10] + ((long)param_2 - 1U) * 0x38);
    FUN_005c1208(puVar5);
    puVar1 = &DAT_002a8138;
    if (param_4 != (undefined1 *)0x0) {
      puVar1 = param_4;
    }
    *puVar5 = puVar1;
    puVar5[1] = param_3;
    lVar4 = *param_1;
    *(undefined2 *)((long)puVar5 + 0x14) = 0x1a01;
    *(undefined1 *)((long)puVar5 + 0x17) = 0x70;
    lVar4 = *(long *)(lVar4 + 0x18);
    pcVar2 = FUN_005c2ad8;
    if (param_5 != (code *)0x0) {
      pcVar2 = param_5;
    }
    puVar5[6] = pcVar2;
    if (lVar4 != 0) {
      (*DAT_00b0da80)();
      return 0;
    }
  }
  else if (param_5 != (code *)0x0) {
    (*param_5)(param_3);
  }
  return iVar3;
}


// ===== 005934f4  sqlite3_bind_text =====

void sqlite3_bind_text(void)

{
  FUN_00592dbc();
  return;
}


// ===== 00593500  sqlite3_bind_text64 =====

void sqlite3_bind_text64(void)

{
  FUN_00592dbc();
  return;
}


// ===== 00593520  sqlite3_bind_text16 =====

void sqlite3_bind_text16(void)

{
  FUN_00592dbc();
  return;
}


// ===== 00593530  sqlite3_bind_value =====

ulong sqlite3_bind_value(long *param_1,undefined8 param_2,double *param_3)

{
  uint uVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  double *pdVar9;
  ushort *puVar10;
  uint *puVar11;
  double dVar12;
  
  uVar3 = *(ushort *)((long)param_3 + 0x14);
  bVar2 = (&DAT_002c79c0)[(ulong)uVar3 & 0x3f];
  iVar4 = (int)param_2;
  if (bVar2 < 3) {
    if (bVar2 == 1) {
      dVar12 = *param_3;
      uVar8 = FUN_00592fec(param_1,(long)iVar4 - 1U & 0xffffffff);
      if ((int)uVar8 != 0) {
        return uVar8;
      }
      pdVar9 = (double *)(param_1[0x10] + ((long)iVar4 - 1U) * 0x38);
      if ((*(ushort *)((long)pdVar9 + 0x14) & 0x9000) == 0) {
        *pdVar9 = dVar12;
        *(ushort *)((long)pdVar9 + 0x14) = 4;
        if (*(long *)(*param_1 + 0x18) == 0) {
          return 0;
        }
      }
      else {
        FUN_005c2a94(pdVar9,dVar12);
        if (*(long *)(*param_1 + 0x18) == 0) {
          return 0;
        }
      }
      goto LAB_00593814;
    }
    if (bVar2 != 2) goto LAB_00593638;
    if ((uVar3 >> 3 & 1) == 0) {
      dVar12 = (double)(long)*param_3;
      uVar8 = (long)iVar4 - 1;
      uVar5 = FUN_00592fec(param_1,uVar8 & 0xffffffff);
      iVar4 = (int)uVar5;
    }
    else {
      dVar12 = *param_3;
      uVar8 = (long)iVar4 - 1;
      uVar5 = FUN_00592fec(param_1,uVar8 & 0xffffffff);
      iVar4 = (int)uVar5;
    }
    if (iVar4 != 0) {
      return uVar5;
    }
    pdVar9 = (double *)(param_1[0x10] + uVar8 * 0x38);
    puVar10 = (ushort *)((long)pdVar9 + 0x14);
    if ((*puVar10 & 0x9000) == 0) {
      *puVar10 = 1;
    }
    else {
      FUN_005c1258(pdVar9);
    }
    if (!NAN(dVar12)) {
      *pdVar9 = dVar12;
      *puVar10 = 8;
    }
  }
  else {
    if (bVar2 == 3) {
      uVar8 = FUN_00592dbc(param_1,param_2,param_3[1],(long)(int)*(uint *)(param_3 + 2),
                           0xffffffffffffffff,*(undefined1 *)((long)param_3 + 0x16));
      return uVar8;
    }
    if (bVar2 == 4) {
      if ((uVar3 >> 10 & 1) == 0) {
        uVar1 = *(uint *)(param_3 + 2);
        if ((int)uVar1 < 0) {
          sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x16bfe,
                      "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
          return 0x15;
        }
        dVar12 = param_3[1];
        uVar8 = FUN_00592fec(param_1,(long)iVar4 - 1U & 0xffffffff);
        if ((int)uVar8 != 0) {
          return uVar8;
        }
        if (dVar12 == 0.0) {
          uVar8 = 0;
        }
        else {
          uVar8 = FUN_00590724(param_1[0x10] + ((long)iVar4 - 1U) * 0x38,dVar12,uVar1,0,
                               0xffffffffffffffff);
          if ((int)uVar8 != 0) {
            lVar6 = *param_1;
            *(int *)(lVar6 + 0x50) = (int)uVar8;
            FUN_005ac5c0(lVar6,uVar8 & 0xffffffff);
            uVar8 = FUN_005c1188(*param_1,uVar8 & 0xffffffff);
          }
        }
        if (*(long *)(*param_1 + 0x18) == 0) {
          return uVar8;
        }
        (*DAT_00b0da80)(*(long *)(*param_1 + 0x18));
        return uVar8 & 0xffffffff;
      }
      uVar1 = *(uint *)param_3;
      uVar5 = (long)iVar4 - 1;
      uVar8 = FUN_00592fec(param_1,uVar5 & 0xffffffff);
      if ((int)uVar8 != 0) {
        return uVar8;
      }
      lVar6 = param_1[0x10];
      puVar11 = (uint *)(lVar6 + uVar5 * 0x38);
      if (((puVar11[5] & 0x9000) != 0) || (*(int *)(lVar6 + uVar5 * 0x38 + 0x20) != 0)) {
        FUN_005c1208(puVar11);
      }
      lVar6 = lVar6 + uVar5 * 0x38;
      *puVar11 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
      lVar7 = *param_1;
      *(undefined2 *)(puVar11 + 5) = 0x410;
      lVar7 = *(long *)(lVar7 + 0x18);
      *(undefined4 *)(lVar6 + 0x10) = 0;
      *(undefined1 *)(lVar6 + 0x16) = 1;
      *(undefined8 *)(lVar6 + 8) = 0;
      if (lVar7 == 0) {
        return 0;
      }
      goto LAB_00593814;
    }
LAB_00593638:
    uVar8 = FUN_00592fec(param_1,iVar4 + -1);
    if ((int)uVar8 != 0) {
      return uVar8;
    }
  }
  if (*(long *)(*param_1 + 0x18) == 0) {
    return 0;
  }
LAB_00593814:
  (*DAT_00b0da80)();
  return 0;
}


// ===== 00593898  sqlite3_bind_zeroblob =====

ulong sqlite3_bind_zeroblob(long *param_1,int param_2,uint param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  uint *puVar4;
  long lVar5;
  
  uVar3 = (long)param_2 - 1;
  uVar1 = FUN_00592fec(param_1,uVar3 & 0xffffffff);
  if ((int)uVar1 == 0) {
    lVar5 = param_1[0x10];
    puVar4 = (uint *)(lVar5 + uVar3 * 0x38);
    if (((puVar4[5] & 0x9000) != 0) || (*(int *)(lVar5 + uVar3 * 0x38 + 0x20) != 0)) {
      uVar1 = uVar1 & 0xffffffff;
      FUN_005c1208(puVar4);
    }
    lVar5 = lVar5 + uVar3 * 0x38;
    *puVar4 = param_3 & ((int)param_3 >> 0x1f ^ 0xffffffffU);
    lVar2 = *param_1;
    *(undefined2 *)(puVar4 + 5) = 0x410;
    lVar2 = *(long *)(lVar2 + 0x18);
    *(undefined4 *)(lVar5 + 0x10) = 0;
    *(undefined1 *)(lVar5 + 0x16) = 1;
    *(undefined8 *)(lVar5 + 8) = 0;
    if (lVar2 != 0) {
      (*DAT_00b0da80)(lVar2);
      return uVar1 & 0xffffffff;
    }
  }
  return uVar1;
}


// ===== 00593988  sqlite3_bind_zeroblob64 =====

undefined4 sqlite3_bind_zeroblob64(long *param_1,int param_2,ulong param_3)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  uint *puVar6;
  long lVar7;
  
  if (param_1 == (long *)0x0) {
    sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x16c9a,
                "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
    return 0x15;
  }
  lVar4 = *param_1;
  if (*(long *)(lVar4 + 0x18) != 0) {
    (*DAT_00b0da70)();
    lVar4 = *param_1;
  }
  if ((ulong)(long)*(int *)(lVar4 + 0x88) < param_3) {
    iVar1 = 0x12;
  }
  else {
    uVar5 = (long)param_2 - 1;
    iVar1 = FUN_00592fec(param_1,uVar5 & 0xffffffff);
    if (iVar1 == 0) {
      lVar7 = param_1[0x10];
      puVar6 = (uint *)(lVar7 + uVar5 * 0x38);
      if (((puVar6[5] & 0x9000) != 0) || (*(int *)(lVar7 + uVar5 * 0x38 + 0x20) != 0)) {
        FUN_005c1208(puVar6);
      }
      lVar7 = lVar7 + uVar5 * 0x38;
      *puVar6 = (uint)param_3 & ((int)(uint)param_3 >> 0x1f ^ 0xffffffffU);
      lVar4 = *param_1;
      *(undefined2 *)(puVar6 + 5) = 0x410;
      lVar3 = *(long *)(lVar4 + 0x18);
      *(undefined4 *)(lVar7 + 0x10) = 0;
      *(undefined1 *)(lVar7 + 0x16) = 1;
      *(undefined8 *)(lVar7 + 8) = 0;
      if (lVar3 != 0) {
        (*DAT_00b0da80)();
        lVar4 = *param_1;
      }
      iVar1 = 0;
      uVar2 = 0;
      if (*(char *)(lVar4 + 0x67) == '\0') goto LAB_00593ae0;
    }
    else {
      lVar4 = *param_1;
    }
  }
  uVar2 = FUN_005c1188(lVar4,iVar1);
  lVar4 = *param_1;
LAB_00593ae0:
  if (*(long *)(lVar4 + 0x18) == 0) {
    return uVar2;
  }
  (*DAT_00b0da80)();
  return uVar2;
}


// ===== 00593b0c  sqlite3_bind_parameter_count =====

long sqlite3_bind_parameter_count(long param_1)

{
  if (param_1 != 0) {
    param_1 = (long)*(short *)(param_1 + 0x20);
  }
  return param_1;
}


// ===== 00593b18  sqlite3_bind_parameter_name =====

int * sqlite3_bind_parameter_name(int *param_1,int param_2)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  
  if (param_1 != (int *)0x0) {
    lVar2 = *(long *)(param_1 + 0x2c);
    if (lVar2 != 0) {
      iVar3 = 2;
      do {
        piVar1 = (int *)(lVar2 + (long)iVar3 * 4);
        if (*piVar1 == param_2) {
          return piVar1 + 2;
        }
        iVar3 = piVar1[1] + iVar3;
      } while (iVar3 < *(int *)(lVar2 + 4));
    }
    param_1 = (int *)0x0;
  }
  return param_1;
}


// ===== 00593b5c  sqlite3_bind_parameter_index =====

undefined4 sqlite3_bind_parameter_index(long param_1,char *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  long lVar5;
  int iVar6;
  
  if (param_2 == (char *)0x0) {
    return 0;
  }
  sVar4 = strlen(param_2);
  if ((param_1 != 0) && (lVar5 = *(long *)(param_1 + 0xb0), lVar5 != 0)) {
    iVar2 = *(int *)(lVar5 + 4);
    iVar6 = 2;
    do {
      puVar1 = (undefined4 *)(lVar5 + (long)iVar6 * 4);
      iVar3 = strncmp((char *)(puVar1 + 2),param_2,sVar4 & 0x3fffffff);
      if ((iVar3 == 0) && (*(char *)((long)(puVar1 + 2) + (sVar4 & 0x3fffffff)) == '\0')) {
        return *puVar1;
      }
      iVar6 = puVar1[1] + iVar6;
    } while (iVar6 < iVar2);
  }
  return 0;
}


// ===== 00593c18  sqlite3_transfer_bindings =====

long sqlite3_transfer_bindings(long param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  short sVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if (*(short *)(param_1 + 0x20) != (short)param_2[4]) {
    return 1;
  }
  if (*(int *)((long)param_2 + 0x11c) != 0) {
    *(ushort *)(param_2 + 0x19) = *(ushort *)(param_2 + 0x19) & 0xfffc | 1;
  }
  if (*(int *)(param_1 + 0x11c) != 0) {
    *(ushort *)(param_1 + 200) = *(ushort *)(param_1 + 200) & 0xfffc | 1;
  }
  if (*(long *)(*param_2 + 0x18) != 0) {
    (*DAT_00b0da70)();
  }
  if (0 < *(short *)(param_1 + 0x20)) {
    lVar4 = 0;
    lVar5 = 0;
    do {
      lVar6 = *(long *)(param_1 + 0x80);
      puVar2 = (undefined8 *)(param_2[0x10] + lVar4);
      if (((*(ushort *)((long)puVar2 + 0x14) & 0x9000) != 0) || (*(int *)(puVar2 + 4) != 0)) {
        FUN_005c1208(puVar2);
      }
      puVar1 = (undefined8 *)(lVar6 + lVar4);
      lVar5 = lVar5 + 1;
      uVar12 = puVar1[3];
      uVar11 = puVar1[2];
      uVar8 = puVar1[5];
      uVar7 = puVar1[4];
      uVar10 = puVar1[1];
      uVar9 = *puVar1;
      puVar2[6] = puVar1[6];
      lVar6 = lVar6 + lVar4;
      lVar4 = lVar4 + 0x38;
      puVar2[3] = uVar12;
      puVar2[2] = uVar11;
      puVar2[5] = uVar8;
      puVar2[4] = uVar7;
      puVar2[1] = uVar10;
      *puVar2 = uVar9;
      sVar3 = *(short *)(param_1 + 0x20);
      *(undefined2 *)(lVar6 + 0x14) = 1;
      *(undefined4 *)(lVar6 + 0x20) = 0;
    } while (lVar5 < sVar3);
  }
  lVar5 = *(long *)(*param_2 + 0x18);
  if (lVar5 != 0) {
    (*DAT_00b0da80)();
    lVar5 = 0;
  }
  return lVar5;
}


// ===== 00593d54  sqlite3_db_handle =====

long * sqlite3_db_handle(long *param_1)

{
  if (param_1 != (long *)0x0) {
    param_1 = (long *)*param_1;
  }
  return param_1;
}


// ===== 00593d60  sqlite3_stmt_readonly =====

ushort sqlite3_stmt_readonly(long param_1)

{
  if (param_1 != 0) {
    return *(ushort *)(param_1 + 200) >> 6 & 1;
  }
  return 1;
}


// ===== 00593d78  sqlite3_stmt_isexplain =====

ulong sqlite3_stmt_isexplain(ulong param_1)

{
  if (param_1 != 0) {
    param_1 = (ulong)(*(ushort *)(param_1 + 200) >> 2 & 3);
  }
  return param_1;
}


// ===== 00593d88  sqlite3_stmt_explain =====

undefined4 sqlite3_stmt_explain(long *param_1,uint param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  long lVar3;
  uint uVar4;
  
  if (param_1 == (long *)0x0) {
    sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x16d1b,
                "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
    return 0x15;
  }
  if (*(long *)(*param_1 + 0x18) != 0) {
    (*DAT_00b0da70)();
  }
  uVar1 = *(ushort *)(param_1 + 0x19);
  if ((uVar1 >> 2 & 3) == param_2) {
    uVar2 = 0;
joined_r0x00593ee8:
    uVar4 = uVar1 >> 2 & 3;
    if ((uVar1 >> 2 & 3) == 0) {
LAB_00593e54:
      *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)((long)param_1 + 0xc2);
      lVar3 = *(long *)(*param_1 + 0x18);
      goto joined_r0x00593e64;
    }
  }
  else {
    if ((2 < param_2) || (-1 < *(char *)((long)param_1 + 0xc6))) {
      uVar2 = 1;
      goto joined_r0x00593ee8;
    }
    if (*(char *)((long)param_1 + 199) != '\x01') {
      uVar2 = 5;
      goto joined_r0x00593ee8;
    }
    if ((*(int *)((long)param_1 + 0x24) < 10) || ((param_2 == 2 && ((uVar1 >> 8 & 1) == 0)))) {
      *(ushort *)(param_1 + 0x19) = uVar1 & 0xfff3 | (ushort)(param_2 << 2);
      uVar2 = FUN_005918b4(param_1);
      uVar1 = *(ushort *)(param_1 + 0x19);
      *(ushort *)(param_1 + 0x19) = uVar1 & 0xfe00 | uVar1 & 0xff | (ushort)(param_2 == 2) << 8;
      uVar4 = (uVar1 & 0xc) >> 2;
      if (uVar4 != 0) goto LAB_00593dd4;
      goto LAB_00593e54;
    }
    uVar2 = 0;
    *(ushort *)(param_1 + 0x19) = uVar1 & 0xfff3 | (ushort)(param_2 << 2);
    uVar4 = (param_2 << 2 & 0xc) >> 2;
    if (uVar4 == 0) goto LAB_00593e54;
  }
LAB_00593dd4:
  *(ushort *)(param_1 + 0x18) = (ushort)(uVar4 << 2) ^ 0xc;
  lVar3 = *(long *)(*param_1 + 0x18);
joined_r0x00593e64:
  if (lVar3 != 0) {
    (*DAT_00b0da80)();
    return uVar2;
  }
  return uVar2;
}


// ===== 00593f0c  sqlite3_stmt_busy =====

ulong sqlite3_stmt_busy(ulong param_1)

{
  if (param_1 != 0) {
    param_1 = (ulong)(*(char *)(param_1 + 199) == '\x02');
  }
  return param_1;
}


// ===== 00593f20  sqlite3_next_stmt =====

undefined8 sqlite3_next_stmt(long param_1,long param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 uVar3;
  char *pcVar4;
  
  if (param_1 == 0) {
    pcVar4 = "NULL";
  }
  else {
    cVar2 = *(char *)(param_1 + 0x71);
    if (cVar2 != -0x46) {
      if (cVar2 == 'v') {
        if (*(long *)(param_1 + 0x18) != 0) {
          (*DAT_00b0da70)(*(long *)(param_1 + 0x18));
          puVar1 = (undefined8 *)(param_1 + 8);
          if (param_2 != 0) {
            puVar1 = (undefined8 *)(param_2 + 0x10);
          }
          uVar3 = *puVar1;
          if (*(long *)(param_1 + 0x18) != 0) {
            (*DAT_00b0da80)(*(long *)(param_1 + 0x18));
          }
          return uVar3;
        }
        puVar1 = (undefined8 *)(param_1 + 8);
        if (param_2 != 0) {
          puVar1 = (undefined8 *)(param_2 + 0x10);
        }
        return *puVar1;
      }
      if (cVar2 != 'm') {
        pcVar4 = "invalid";
        goto LAB_00593fcc;
      }
    }
    pcVar4 = "unopened";
  }
LAB_00593fcc:
  sqlite3_log(0x15,"API call with %s database connection pointer",pcVar4);
  sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x16d4a,
              "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
  return 0;
}


// ===== 00594034  sqlite3_stmt_status =====

undefined4 sqlite3_stmt_status(long *param_1,uint param_2,int param_3)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 local_24;
  
  if ((param_1 != (long *)0x0) && ((param_2 == 99 || (param_2 < 9)))) {
    if (param_2 == 99) {
      lVar2 = *param_1;
      if (*(long *)(lVar2 + 0x18) != 0) {
        (*DAT_00b0da70)(*(long *)(lVar2 + 0x18));
      }
      local_24 = 0;
      *(undefined4 **)(lVar2 + 0x300) = &local_24;
      *(undefined8 *)(lVar2 + 0x1e8) = *(undefined8 *)(lVar2 + 0x1e0);
      FUN_0058077c(param_1);
      *(undefined8 *)(lVar2 + 0x300) = 0;
      *(undefined8 *)(lVar2 + 0x1e8) = *(undefined8 *)(lVar2 + 0x1f0);
      if (*(long *)(lVar2 + 0x18) != 0) {
        (*DAT_00b0da80)();
      }
    }
    else {
      puVar1 = (undefined4 *)((long)param_1 + (ulong)param_2 * 4 + 0xd4);
      local_24 = *puVar1;
      if (param_3 != 0) {
        *puVar1 = 0;
        return local_24;
      }
    }
    return local_24;
  }
  sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x16d62,
              "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
  return 0;
}


// ===== 00594134  sqlite3_sql =====

long sqlite3_sql(long param_1)

{
  if (param_1 != 0) {
    param_1 = *(long *)(param_1 + 0xf8);
  }
  return param_1;
}


// ===== 00594140  sqlite3_expanded_sql =====

long * sqlite3_expanded_sql(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = param_1;
  if (param_1 != (long *)0x0) {
    lVar2 = param_1[0x1f];
    if (lVar2 == 0) {
      plVar1 = (long *)0x0;
    }
    else {
      if (*(long *)(*param_1 + 0x18) != 0) {
        (*DAT_00b0da70)();
      }
      plVar1 = (long *)FUN_005941b8(param_1,lVar2);
      if (*(long *)(*param_1 + 0x18) != 0) {
        (*DAT_00b0da80)(*(long *)(*param_1 + 0x18));
      }
    }
  }
  return plVar1;
}


// ===== 005941b8  FUN_005941b8 =====

long FUN_005941b8(long *param_1,char *param_2)

{
  int *piVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  size_t sVar7;
  undefined *puVar8;
  uint uVar9;
  undefined8 uVar10;
  char cVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  char *pcVar16;
  long lVar17;
  int iVar18;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  long lStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  uint local_78;
  int local_74;
  uint local_70;
  undefined2 local_6c;
  int local_68;
  int local_64;
  
  lVar14 = *param_1;
  local_68 = 0;
  local_88 = 0;
  local_80 = 0;
  local_74 = *(int *)(lVar14 + 0x88);
  local_70 = 0;
  local_6c = 0;
  local_78 = 0;
  if (*(int *)(lVar14 + 0xdc) < 2) {
    if ((short)param_1[4] == 0) {
      if (param_2 == (char *)0x0) {
        uVar9 = 0;
      }
      else {
        sVar7 = strlen(param_2);
        uVar9 = (uint)sVar7 & 0x3fffffff;
      }
      FUN_00586adc(&local_88,param_2,uVar9);
    }
    else if (*param_2 != '\0') {
      iVar18 = 1;
      do {
        iVar6 = 0;
        pcVar16 = param_2;
        do {
          iVar4 = FUN_0059a0fc(pcVar16,&local_64);
          if (local_64 == 0x9d) goto LAB_00594368;
          pcVar16 = pcVar16 + iVar4;
          iVar6 = iVar4 + iVar6;
        } while (*pcVar16 != '\0');
        iVar4 = 0;
LAB_00594368:
        uVar12 = (ulong)local_70;
        if (local_70 + iVar6 < local_78) {
          if (iVar6 != 0) {
            local_70 = local_70 + iVar6;
            memcpy((void *)(local_80 + uVar12),param_2,(long)iVar6);
          }
        }
        else {
          FUN_00586adc(&local_88,param_2,iVar6);
        }
        if (iVar4 == 0) break;
        param_2 = param_2 + iVar6;
        if (*param_2 == '?') {
          iVar6 = iVar18;
          if (1 < iVar4) {
            FUN_005e4e64(param_2 + 1,&local_68);
            iVar6 = local_68;
          }
        }
        else {
          lVar17 = param_1[0x16];
          if (lVar17 == 0) {
            iVar6 = 0;
          }
          else {
            iVar2 = *(int *)(lVar17 + 4);
            iVar6 = 2;
            do {
              piVar1 = (int *)(lVar17 + (long)iVar6 * 4);
              iVar5 = strncmp((char *)(piVar1 + 2),param_2,(long)iVar4);
              if ((iVar5 == 0) && (*(char *)((long)(piVar1 + 2) + (long)iVar4) == '\0')) {
                iVar6 = *piVar1;
                goto LAB_00594468;
              }
              iVar6 = piVar1[1] + iVar6;
            } while (iVar6 < iVar2);
            iVar6 = 0;
          }
        }
LAB_00594468:
        local_68 = iVar6;
        lVar17 = param_1[0x10] + (long)local_68 * 0x38;
        if (iVar18 < local_68 + 1) {
          iVar18 = local_68 + 1;
        }
        uVar3 = *(ushort *)(lVar17 + -0x24);
        if ((uVar3 & 1) == 0) {
          if ((uVar3 & 0x24) == 0) {
            if ((uVar3 >> 3 & 1) == 0) {
              if ((uVar3 >> 1 & 1) == 0) {
                if ((uVar3 >> 10 & 1) == 0) {
                  if (local_70 + 2 < local_78) {
                    *(undefined2 *)(local_80 + (ulong)local_70) = 0x2778;
                    local_70 = local_70 + 2;
                  }
                  else {
                    FUN_00586adc(&local_88,&DAT_002b3f25,2);
                  }
                  uVar9 = *(uint *)(lVar17 + -0x28);
                  if (0 < (int)uVar9) {
                    uVar12 = 0;
                    do {
                      sqlite3_str_appendf(&local_88,&DAT_002baa2f,
                                          *(undefined1 *)(*(long *)(lVar17 + -0x30) + uVar12));
                      uVar12 = uVar12 + 1;
                    } while (uVar9 != uVar12);
                  }
                  if (local_78 <= local_70 + 1) {
                    puVar8 = &DAT_002a8231;
                    uVar10 = 1;
                    goto LAB_005944d0;
                  }
                  *(undefined1 *)(local_80 + (ulong)local_70) = 0x27;
                  local_70 = local_70 + 1;
                }
                else {
                  sqlite3_str_appendf(&local_88,"zeroblob(%d)",*(undefined4 *)(lVar17 + -0x38));
                }
              }
              else if (*(char *)(lVar14 + 100) == '\x01') {
                sqlite3_str_appendf(&local_88,"\'%.*q\'",*(undefined4 *)(lVar17 + -0x28),
                                    *(undefined8 *)(lVar17 + -0x30));
              }
              else {
                local_90 = 0;
                local_b0 = 0;
                uStack_98 = 0;
                local_a0 = 0;
                uStack_b8 = 0;
                local_c0 = 0;
                lStack_a8 = lVar14;
                FUN_00590724(&local_c0,*(undefined8 *)(lVar17 + -0x30),
                             (long)*(int *)(lVar17 + -0x28),*(char *)(lVar14 + 100),0);
                if ((local_b0._4_2_ >> 1 & 1) == 0) {
                  local_b0._0_7_ = CONCAT16(1,(undefined6)local_b0);
                }
                else if ((local_b0._6_1_ != '\x01') &&
                        (iVar6 = FUN_005c2adc(&local_c0,1), iVar6 == 7)) {
                  local_78 = 0;
                  local_6c = CONCAT11(local_6c._1_1_,7);
                }
                sqlite3_str_appendf(&local_88,"\'%.*q\'",local_b0 & 0xffffffff,uStack_b8);
                if ((local_b0 & 0x900000000000) != 0 || (int)local_a0 != 0) {
                  FUN_005c1208(&local_c0);
                }
              }
            }
            else {
              sqlite3_str_appendf(*(undefined8 *)(lVar17 + -0x38),&local_88,"%!.15g");
            }
          }
          else {
            sqlite3_str_appendf(&local_88,&DAT_002a46e4,*(undefined8 *)(lVar17 + -0x38));
          }
        }
        else if (local_70 + 4 < local_78) {
          *(undefined4 *)(local_80 + (ulong)local_70) = 0x4c4c554e;
          local_70 = local_70 + 4;
        }
        else {
          puVar8 = &DAT_002a1c46;
          uVar10 = 4;
LAB_005944d0:
          FUN_00586adc(&local_88,puVar8,uVar10);
        }
        param_2 = param_2 + iVar4;
      } while (*param_2 != '\0');
    }
  }
  else {
    cVar11 = *param_2;
    while (cVar11 != '\0') {
      lVar14 = 0x100000000;
      uVar12 = 1;
      do {
        uVar15 = uVar12;
        lVar17 = lVar14;
        if (cVar11 == '\n') break;
        cVar11 = param_2[uVar15];
        lVar14 = lVar17 + 0x100000000;
        uVar12 = uVar15 + 1;
      } while (cVar11 != '\0');
      uVar9 = local_70 + 3;
      iVar18 = (int)uVar15;
      if (uVar9 < local_78) {
        *(undefined1 *)((undefined2 *)(local_80 + (ulong)local_70) + 1) = 0x20;
        *(undefined2 *)(local_80 + (ulong)local_70) = 0x2d2d;
        uVar13 = iVar18 + uVar9;
        local_70 = uVar9;
        if (uVar13 < local_78) goto LAB_005942c4;
LAB_00594224:
        FUN_00586adc(&local_88,param_2,uVar15 & 0xffffffff);
      }
      else {
        FUN_00586adc(&local_88,&DAT_002ad1ad,3);
        uVar13 = iVar18 + local_70;
        if (local_78 <= uVar13) goto LAB_00594224;
LAB_005942c4:
        uVar12 = (ulong)local_70;
        if (iVar18 != 0) {
          local_70 = uVar13;
          memcpy((void *)(local_80 + uVar12),param_2,lVar17 >> 0x20);
        }
      }
      param_2 = param_2 + uVar15;
      cVar11 = *param_2;
    }
  }
  if ((char)local_6c == '\0') {
    if (((local_80 != 0) && (*(undefined1 *)(local_80 + (ulong)local_70) = 0, local_74 != 0)) &&
       ((local_6c._1_1_ >> 2 & 1) == 0)) {
      local_80 = FUN_005a7ad8(&local_88);
    }
  }
  else {
    if ((local_6c._1_1_ >> 2 & 1) != 0) {
      FUN_005869c8(local_88,local_80);
    }
    local_80 = 0;
  }
  return local_80;
}


// ===== 0059471c  sqlite3_value_numeric_type =====

undefined1 sqlite3_value_numeric_type(double *param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  ushort uVar3;
  int iVar4;
  double dVar5;
  ulong uVar6;
  double dVar7;
  uint uVar8;
  ulong uVar9;
  double local_48;
  
  uVar3 = *(ushort *)((long)param_1 + 0x14);
  uVar8 = (uint)uVar3;
  uVar9 = (ulong)uVar3 & 0x3f;
  if ((0x4000000040004U >> ((ulong)uVar3 & 0x3f) & 1) == 0) goto LAB_00594834;
  uVar2 = *(undefined1 *)((long)param_1 + 0x16);
  dVar7 = param_1[1];
  uVar1 = *(undefined4 *)(param_1 + 2);
  iVar4 = FUN_005c1de0(dVar7,&local_48,uVar1,uVar2);
  if (iVar4 < 1) goto LAB_00594834;
  if (iVar4 == 1) {
    if (-9.223372036854775e+18 <= local_48) {
      if (local_48 == 9.223372036854775e+18 || local_48 < 9.223372036854775e+18 != NAN(local_48)) {
        dVar5 = (double)(long)local_48;
      }
      else {
        dVar5 = NAN;
      }
    }
    else {
      dVar5 = -0.0;
    }
    if ((local_48 == 0.0) ||
       ((0xffe < (long)dVar5 + 0xfff8000000000000U >> 0x34 && (local_48 == (double)(long)dVar5)))) {
      *param_1 = dVar5;
      uVar6 = (ulong)(uVar3 | 4);
    }
    else {
      iVar4 = FUN_005c27e8(dVar7,param_1,uVar1,uVar2);
      uVar8 = (uint)*(ushort *)((long)param_1 + 0x14);
      if (iVar4 != 0) goto LAB_0059481c;
      uVar6 = (ulong)(uVar8 | 4);
    }
  }
  else {
LAB_0059481c:
    uVar6 = (ulong)(uVar8 | 8);
    *param_1 = local_48;
  }
  uVar9 = uVar6 & 0x3d;
  *(ushort *)((long)param_1 + 0x14) = (ushort)uVar6 & 0xfffd;
LAB_00594834:
  return (&DAT_002c79c0)[uVar9];
}


// ===== 00594860  FUN_00594860 =====

void FUN_00594860(double *param_1,int param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  ushort uVar3;
  int iVar4;
  ushort uVar5;
  double dVar6;
  double dVar7;
  double local_48;
  
  uVar2 = *(undefined1 *)((long)param_1 + 0x16);
  dVar7 = param_1[1];
  uVar1 = *(undefined4 *)(param_1 + 2);
  iVar4 = FUN_005c1de0(dVar7,&local_48,uVar1,uVar2);
  if (iVar4 < 1) {
    return;
  }
  if (iVar4 == 1) {
    if (-9.223372036854775e+18 <= local_48) {
      if (local_48 == 9.223372036854775e+18 || local_48 < 9.223372036854775e+18 != NAN(local_48)) {
        dVar6 = (double)(long)local_48;
      }
      else {
        dVar6 = NAN;
      }
    }
    else {
      dVar6 = -0.0;
    }
    if ((local_48 == 0.0) ||
       ((0xffe < (long)dVar6 + 0xfff8000000000000U >> 0x34 && (local_48 == (double)(long)dVar6)))) {
      *param_1 = dVar6;
      uVar5 = *(ushort *)((long)param_1 + 0x14);
    }
    else {
      iVar4 = FUN_005c27e8(dVar7,param_1,uVar1,uVar2);
      if (iVar4 != 0) goto LAB_0059494c;
      uVar5 = *(ushort *)((long)param_1 + 0x14);
    }
  }
  else {
LAB_0059494c:
    uVar3 = *(ushort *)((long)param_1 + 0x14);
    *param_1 = local_48;
    uVar5 = uVar3 | 8;
    if (param_2 == 0) goto LAB_005949b4;
    if ((uVar3 >> 5 & 1) == 0) {
      if ((((local_48 < -9.223372036854775e+18) ||
           (local_48 != 9.223372036854775e+18 && local_48 < 9.223372036854775e+18 == NAN(local_48)))
          || (local_48 != (double)(long)local_48)) ||
         (0xfffffffffffffffd < (long)local_48 + 0x7fffffffffffffffU)) goto LAB_005949b4;
      *param_1 = (double)(long)local_48;
    }
    uVar5 = uVar3 & 0xf240;
  }
  uVar5 = uVar5 | 4;
LAB_005949b4:
  *(ushort *)((long)param_1 + 0x14) = uVar5 & 0xfffd;
  return;
}


// ===== 005949e0  sqlite3_blob_open =====

undefined4
sqlite3_blob_open(long param_1,undefined8 param_2,long param_3,byte *param_4,undefined8 param_5,
                 int param_6,undefined8 *param_7)

{
  undefined *puVar1;
  byte bVar2;
  char cVar3;
  short sVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  char *pcVar13;
  uint uVar14;
  uint uVar15;
  undefined4 *puVar16;
  long lVar17;
  ulong uVar18;
  int *piVar19;
  short *psVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  byte *pbVar24;
  byte *pbVar25;
  undefined1 *puVar26;
  char *pcVar27;
  char *pcVar28;
  uint uVar29;
  ulong uVar30;
  long *local_258;
  uint local_23c;
  char *local_230;
  long local_220;
  long local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_148;
  undefined8 local_108;
  undefined8 uStack_100;
  ulong local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  long local_80 [2];
  
  local_80[0] = 0;
  if (param_7 == (undefined8 *)0x0) {
    uVar9 = 0x19525;
    goto LAB_0059511c;
  }
  *param_7 = 0;
  if (param_1 == 0) {
    pcVar13 = "NULL";
LAB_005950e4:
    sqlite3_log(0x15,"API call with %s database connection pointer",pcVar13);
  }
  else {
    cVar3 = *(char *)(param_1 + 0x71);
    if (cVar3 == -0x46) {
LAB_00594a34:
      pcVar13 = "unopened";
      goto LAB_005950e4;
    }
    if (cVar3 != 'v') {
      if (cVar3 != 'm') {
        pcVar13 = "invalid";
        goto LAB_005950e4;
      }
      goto LAB_00594a34;
    }
    if ((param_3 != 0) && (param_4 != (byte *)0x0)) {
      uVar14 = (uint)(param_6 != 0);
      if (*(long *)(param_1 + 0x18) != 0) {
        (*DAT_00b0da70)();
      }
      puVar10 = (undefined8 *)FUN_005a76c8(param_1,0x38);
      local_220 = param_1;
      if (puVar10 != (undefined8 *)0x0) {
        pcVar13 = (char *)(param_1 + 0x67);
        iVar8 = 0;
        local_258 = puVar10 + 3;
        local_23c = 0;
        puVar10[6] = 0;
        puVar10[3] = 0;
        puVar10[2] = 0;
        puVar10[5] = 0;
        puVar10[4] = 0;
        puVar10[1] = 0;
        *puVar10 = 0;
LAB_00594b28:
        local_88 = 0;
        uStack_170 = 0;
        local_178 = 0;
        uStack_180 = 0;
        local_188 = 0;
        uStack_190 = 0;
        local_198 = 0;
        uStack_1a0 = 0;
        local_1a8 = 0;
        uStack_1b0 = 0;
        local_1b8 = 0;
        uStack_1c0 = 0;
        local_1c8 = 0;
        uStack_1d0 = 0;
        local_1d8 = 0;
        uStack_1e0 = 0;
        local_1e8 = 0;
        uStack_1f0 = 0;
        local_1f8 = 0;
        uStack_200 = 0;
        local_208 = 0;
        uStack_210 = 0;
        local_218 = 0;
        uStack_100 = 0;
        local_108 = 0;
        uStack_f0 = 0;
        local_f8 = 0;
        uStack_e0 = 0;
        local_e8 = 0;
        uStack_d0 = 0;
        uStack_d8 = 0;
        uStack_c0 = 0;
        local_c8 = 0;
        uStack_b0 = 0;
        uStack_b8 = 0;
        uStack_a0 = 0;
        local_a8 = 0;
        uStack_90 = 0;
        uStack_98 = 0;
        local_148 = *(undefined8 *)(param_1 + 0x158);
        *(long **)(param_1 + 0x158) = &local_220;
        local_220 = param_1;
        if (*(char *)(param_1 + 0x67) != '\0') {
          FUN_00595b78(&local_220,"out of memory");
        }
        FUN_005869c8(param_1,local_80[0]);
        local_80[0] = 0;
        if (*(char *)(param_1 + 0x6f) == '\0') {
          FUN_005ac38c(param_1);
        }
        puVar11 = (undefined8 *)FUN_005953a0(&local_220,0,param_3,param_2);
        if (puVar11 == (undefined8 *)0x0) {
LAB_00595290:
          if (local_218 != 0) {
            FUN_005869c8(param_1,0);
            local_80[0] = local_218;
            local_218 = 0;
          }
          cVar3 = *(char *)(param_1 + 0x6f);
        }
        else {
          if (*(char *)((long)puVar11 + 0x3f) == '\x01') {
            pcVar13 = "cannot open virtual table: %s";
LAB_00595288:
            FUN_00595b78(&local_220,pcVar13,param_3);
            goto LAB_00595290;
          }
          if ((*(uint *)(puVar11 + 6) >> 7 & 1) != 0) {
            pcVar13 = "cannot open table without rowid: %s";
            goto LAB_00595288;
          }
          if ((*(uint *)(puVar11 + 6) & 0x60) != 0) {
            pcVar13 = "cannot open table with generated columns: %s";
            goto LAB_00595288;
          }
          if (*(char *)((long)puVar11 + 0x3f) == '\x02') {
            pcVar13 = "cannot open view: %s";
            goto LAB_00595288;
          }
          lVar17 = *(long *)(param_1 + 0x20);
          if (puVar11[0xc] == 0) {
            bVar5 = false;
            uVar30 = 0xffff8000;
LAB_00594c5c:
            puVar10[5] = *(undefined8 *)
                          (lVar17 + (-(uVar30 >> 0x1f) & 0xffffffe000000000 | uVar30 << 5));
            puVar10[6] = puVar11;
            uVar22 = (ulong)*param_4;
            bVar6 = bVar5;
            if (*param_4 != 0) goto LAB_00594c78;
LAB_00594cb0:
            uVar18 = 0;
          }
          else {
            uVar30 = 0xffffffff;
            lVar21 = 0x18;
            do {
              plVar12 = (long *)(lVar17 + lVar21);
              uVar29 = (int)uVar30 + 1;
              uVar30 = (ulong)uVar29;
              lVar21 = lVar21 + 0x20;
            } while (*plVar12 != puVar11[0xc]);
            if (uVar29 == 1) {
              iVar7 = FUN_00595f38(&local_220);
              if (iVar7 != 0) goto LAB_00595290;
              lVar17 = *(long *)(param_1 + 0x20);
              bVar5 = true;
              uVar30 = 1;
              goto LAB_00594c5c;
            }
            bVar5 = false;
            puVar10[5] = *(undefined8 *)
                          (lVar17 + (-(ulong)(uVar29 >> 0x1f) & 0xffffffe000000000 | uVar30 << 5));
            puVar10[6] = puVar11;
            uVar22 = (ulong)*param_4;
            bVar6 = false;
            if (*param_4 == 0) goto LAB_00594cb0;
LAB_00594c78:
            bVar5 = bVar6;
            uVar18 = 0;
            pbVar24 = param_4 + 1;
            uVar23 = uVar22;
            do {
              pbVar25 = &DAT_002c78ae + uVar23;
              bVar2 = *pbVar24;
              uVar23 = (ulong)bVar2;
              uVar18 = (ulong)((uint)*pbVar25 + (int)uVar18);
              pbVar24 = pbVar24 + 1;
            } while (bVar2 != 0);
          }
          lVar17 = puVar11[1];
          uVar23 = (ulong)*(byte *)((long)puVar11 + (uVar18 & 0xf) + 0x68);
          if (*(char *)(lVar17 + uVar23 * 0x10 + 0xb) == (char)uVar18) {
            pbVar24 = *(byte **)(lVar17 + uVar23 * 0x10);
            pbVar25 = param_4 + 1;
            do {
              if ((uint)*pbVar24 == (uint)uVar22) {
                if ((uint)uVar22 == 0) goto LAB_00594d88;
              }
              else if ((&DAT_002c78ae)[*pbVar24] != (&DAT_002c78ae)[uVar22]) break;
              uVar22 = (ulong)*pbVar25;
              pbVar24 = pbVar24 + 1;
              pbVar25 = pbVar25 + 1;
            } while( true );
          }
          uVar29 = (uint)*(short *)((long)puVar11 + 0x36);
          uVar22 = 0;
          if ((int)uVar29 < 2) {
            uVar29 = 1;
          }
          do {
            if (*(char *)(lVar17 + uVar22 * 0x10 + 0xb) == (char)uVar18) {
              pbVar24 = *(byte **)(lVar17 + uVar22 * 0x10);
              pbVar25 = param_4;
              do {
                bVar2 = *pbVar24;
                if (bVar2 == *pbVar25) {
                  if (bVar2 == 0) {
                    uVar23 = uVar22 & 0xffffffff;
                    if (-1 < (int)uVar22) goto LAB_00594d88;
                    goto LAB_0059521c;
                  }
                }
                else if ((&DAT_002c78ae)[bVar2] != (&DAT_002c78ae)[*pbVar25]) break;
                pbVar24 = pbVar24 + 1;
                pbVar25 = pbVar25 + 1;
              } while( true );
            }
            uVar22 = uVar22 + 1;
          } while (uVar22 != uVar29);
LAB_0059521c:
          FUN_005869c8(param_1,0);
          local_80[0] = FUN_00596068(param_1,"no such column: \"%s\"",param_4);
          cVar3 = *(char *)(param_1 + 0x6f);
        }
        goto joined_r0x005952b4;
      }
      local_88 = 0;
      uStack_170 = 0;
      local_178 = 0;
      uStack_180 = 0;
      local_188 = 0;
      uStack_190 = 0;
      local_198 = 0;
      uStack_1a0 = 0;
      local_1a8 = 0;
      uStack_100 = 0;
      local_108 = 0;
      uStack_f0 = 0;
      local_f8 = 0;
      uStack_e0 = 0;
      local_e8 = 0;
      uStack_d0 = 0;
      uStack_d8 = 0;
      uStack_c0 = 0;
      local_c8 = 0;
      uStack_b0 = 0;
      uStack_b8 = 0;
      uStack_a0 = 0;
      local_a8 = 0;
      uStack_90 = 0;
      uStack_98 = 0;
      local_148 = *(undefined8 *)(param_1 + 0x158);
      uStack_1b0 = 0;
      local_1b8 = 0;
      uStack_1c0 = 0;
      local_1c8 = 0;
      uStack_1d0 = 0;
      local_1d8 = 0;
      uStack_1e0 = 0;
      local_1e8 = 0;
      uStack_1f0 = 0;
      local_1f8 = 0;
      uStack_200 = 0;
      local_208 = 0;
      uStack_210 = 0;
      local_218 = 0;
      *(long **)(param_1 + 0x158) = &local_220;
      if (*(char *)(param_1 + 0x67) != '\0') {
        local_258 = (long *)&DAT_00000018;
        FUN_00595b78(&local_220,"out of memory");
        goto LAB_005951d4;
      }
      goto LAB_005951e8;
    }
  }
  uVar9 = 0x1952b;
LAB_0059511c:
  sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",uVar9,
              "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
  return 0x15;
LAB_00594d88:
  if (param_6 != 0) {
    if (((*(byte *)(param_1 + 0x31) >> 6 & 1) == 0) || (lVar17 = puVar11[9], lVar17 == 0)) {
      pcVar27 = (char *)0x0;
    }
    else {
      pcVar27 = (char *)0x0;
      do {
        uVar22 = (ulong)*(uint *)(lVar17 + 0x28);
        if (0 < (int)*(uint *)(lVar17 + 0x28)) {
          piVar19 = (int *)(lVar17 + 0x40);
          pcVar28 = pcVar27;
          do {
            pcVar27 = "foreign key";
            if (*piVar19 != (int)uVar23) {
              pcVar27 = pcVar28;
            }
            uVar22 = uVar22 - 1;
            piVar19 = piVar19 + 4;
            pcVar28 = pcVar27;
          } while (uVar22 != 0);
        }
        lVar17 = *(long *)(lVar17 + 8);
      } while (lVar17 != 0);
    }
    for (lVar17 = puVar11[2]; lVar17 != 0; lVar17 = *(long *)(lVar17 + 0x28)) {
      uVar22 = (ulong)*(ushort *)(lVar17 + 0x5e);
      if (uVar22 != 0) {
        psVar20 = *(short **)(lVar17 + 8);
        pcVar28 = pcVar27;
        do {
          pcVar27 = "indexed";
          if ((int)uVar23 != (int)*psVar20 && *psVar20 != -2) {
            pcVar27 = pcVar28;
          }
          uVar22 = uVar22 - 1;
          psVar20 = psVar20 + 1;
          pcVar28 = pcVar27;
        } while (uVar22 != 0);
      }
    }
    if (pcVar27 != (char *)0x0) {
      FUN_005869c8(param_1,0);
      local_80[0] = FUN_00596068(param_1,"cannot open %s column for writing",pcVar27);
      cVar3 = *(char *)(param_1 + 0x6f);
joined_r0x005952b4:
      if (cVar3 == '\0') {
        FUN_005ac41c(param_1);
      }
      iVar8 = 1;
      goto LAB_005952c4;
    }
  }
  plVar12 = (long *)FUN_005960d0(&local_220);
  *local_258 = (long)plVar12;
  if (plVar12 == (long *)0x0) goto LAB_00595070;
  iVar7 = (int)plVar12[0x12];
  uVar22 = *(ulong *)puVar11[0xc];
  uVar29 = (uint)uVar30;
  if (iVar7 < *(int *)((long)plVar12 + 0x94)) {
    puVar16 = (undefined4 *)(plVar12[0x11] + (long)iVar7 * 0x18);
    *(int *)(plVar12 + 0x12) = iVar7 + 1;
    *puVar16 = 0xfd02;
    puVar16[1] = uVar29;
    *(ulong *)(puVar16 + 3) = uVar22;
    puVar16[2] = uVar14;
  }
  else {
    FUN_005e87d8(plVar12,2,uVar30,uVar14,uVar22 & 0xffffffff,(int)(uVar22 >> 0x20));
  }
  uVar15 = *(uint *)(plVar12 + 0x12);
  if (0 < (int)uVar15) {
    *(undefined2 *)(plVar12[0x11] + (ulong)uVar15 * 0x18 + -0x16) = 1;
  }
  if (*(int *)((long)plVar12 + 0x94) < (int)(uVar15 + 6)) {
    iVar7 = FUN_005e8600(plVar12,param_5);
    if (iVar7 == 0) {
      uVar15 = *(uint *)(plVar12 + 0x12);
      goto LAB_00594ef4;
    }
    puVar26 = (undefined1 *)0x0;
  }
  else {
LAB_00594ef4:
    puVar26 = (undefined1 *)(plVar12[0x11] + (long)(int)uVar15 * 0x18);
    *(undefined8 *)(puVar26 + 9) = 0;
    *(undefined8 *)(puVar26 + 1) = 0;
    *(undefined8 *)(puVar26 + 0x10) = 0;
    *(undefined8 *)(puVar26 + 0x21) = 0;
    *(undefined8 *)(puVar26 + 0x19) = 0;
    *(undefined8 *)(puVar26 + 0x28) = 0;
    *(undefined8 *)(puVar26 + 0x30) = 0x1f;
    lVar17 = plVar12[0x12];
    *(undefined8 *)(puVar26 + 0x40) = 0;
    *(undefined4 *)(puVar26 + 0x4c) = 0;
    *(undefined4 *)(puVar26 + 0x50) = 0;
    *(undefined8 *)(puVar26 + 0x58) = 0;
    *(int *)(puVar26 + 0x38) = (int)lVar17 + 5;
    *(undefined4 *)(puVar26 + 0x3c) = 1;
    puVar26[0x48] = 0x5e;
    *(undefined8 *)(puVar26 + 0x68) = 0;
    *(undefined8 *)(puVar26 + 0x70) = 0;
    *(undefined8 *)(puVar26 + 0x88) = 0;
    *(undefined8 *)(puVar26 + 0x79) = 0;
    *(undefined8 *)(puVar26 + 0x81) = 0;
    puVar26[0x60] = 0x54;
    lVar17 = plVar12[0x12];
    *puVar26 = 0xa9;
    puVar26[0x18] = 0x66;
    *(undefined4 *)(puVar26 + 0x54) = 1;
    puVar26[0x49] = 0;
    *(undefined2 *)(puVar26 + 0x4a) = 0;
    *(undefined4 *)(puVar26 + 100) = 1;
    puVar26[0x61] = 0;
    *(undefined2 *)(puVar26 + 0x62) = 0;
    puVar26[0x78] = 0x46;
    *(int *)(plVar12 + 0x12) = (int)lVar17 + 6;
  }
  uVar15 = 1 << (ulong)(uVar29 & 0x1f);
  *(uint *)((long)plVar12 + 0xcc) = *(uint *)((long)plVar12 + 0xcc) | uVar15;
  if ((!bVar5) &&
     (*(char *)(*(long *)(*(long *)(*plVar12 + 0x20) + (long)(int)uVar29 * 0x20 + 8) + 0x11) != '\0'
     )) {
    *(uint *)(plVar12 + 0x1a) = *(uint *)(plVar12 + 0x1a) | uVar15;
  }
  if (*pcVar13 == '\0') {
    uVar9 = *(undefined4 *)(puVar11 + 5);
    cVar3 = *(char *)(*plVar12 + 0x67);
    *(uint *)(puVar26 + 4) = uVar29;
    *(undefined4 *)(puVar26 + 8) = uVar9;
    *(uint *)(puVar26 + 0xc) = uVar14;
    if ((cVar3 != '\0') || (FUN_005e8888(plVar12,plVar12[0x11] + 0x30,*puVar11,0), *pcVar13 == '\0')
       ) {
      if (param_6 != 0) {
        puVar26[0x18] = 0x71;
      }
      sVar4 = *(short *)((long)puVar11 + 0x36);
      uVar9 = *(undefined4 *)(puVar11 + 5);
      puVar26[0x19] = 0xfd;
      *(undefined4 *)(puVar26 + 0x20) = uVar9;
      *(uint *)(puVar26 + 0x24) = uVar29;
      *(int *)(puVar26 + 0x28) = sVar4 + 1;
      local_f8 = local_f8 & 0xffffffffffff0000;
      local_1e8 = 0x100000001;
      *(int *)(puVar26 + 0x50) = (int)*(short *)((long)puVar11 + 0x36);
      FUN_00596468(plVar12,&local_220);
    }
  }
LAB_00595070:
  cVar3 = *(char *)(param_1 + 0x6f);
  *(short *)(puVar10 + 1) = (short)uVar23;
  puVar10[4] = param_1;
  if (cVar3 == '\0') {
    FUN_005ac41c(param_1,param_5);
  }
  if (((*pcVar13 != '\0') || (iVar8 = FUN_00596840(puVar10,param_5,local_80), 0x30 < local_23c)) ||
     (iVar8 != 0x11)) goto LAB_00595250;
  local_23c = local_23c + 1;
  FUN_00596a64(&local_220);
  iVar8 = 0x11;
  goto LAB_00594b28;
LAB_00595250:
  if (iVar8 == 0) {
LAB_005951d4:
    local_230 = (char *)(param_1 + 0x67);
    if (*local_230 == '\0') {
LAB_005951e8:
      lVar17 = local_80[0];
      *param_7 = puVar10;
      puVar1 = (undefined *)0x0;
      if (local_80[0] != 0) {
        puVar1 = &DAT_002ad0ce;
      }
      FUN_0058c8b8(param_1,0,puVar1,local_80[0]);
      iVar8 = 0;
      goto LAB_0059531c;
    }
    iVar8 = 0;
LAB_005952c4:
    if (puVar10 != (undefined8 *)0x0) goto LAB_005952c8;
  }
  else {
LAB_005952c8:
    lVar17 = *local_258;
    if (lVar17 != 0) {
      if (*(char *)(lVar17 + 199) != '\0') {
        FUN_0058f640(lVar17);
      }
      FUN_0058077c(lVar17);
    }
  }
  FUN_005869c8(param_1,puVar10);
  lVar17 = local_80[0];
  puVar1 = (undefined *)0x0;
  if (local_80[0] != 0) {
    puVar1 = &DAT_002ad0ce;
  }
  FUN_0058c8b8(param_1,iVar8,puVar1,local_80[0]);
LAB_0059531c:
  FUN_005869c8(param_1,lVar17);
  FUN_00596a64(&local_220);
  if ((iVar8 == 0) && (*(char *)(param_1 + 0x67) == '\0')) {
    uVar9 = 0;
  }
  else {
    uVar9 = FUN_005c1188(param_1,iVar8);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    (*DAT_00b0da80)();
  }
  return uVar9;
}


// ===== 005953a0  FUN_005953a0 =====

/* WARNING: Type propagation algorithm not settling */

long FUN_005953a0(long *param_1,uint param_2,byte *param_3,long param_4)

{
  bool bVar1;
  int *piVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  size_t sVar9;
  char *__s;
  void *pvVar10;
  long *plVar11;
  uint uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  uint uVar16;
  int *piVar17;
  byte *pbVar18;
  byte *pbVar19;
  long lVar20;
  ulong uVar21;
  char *pcVar22;
  undefined8 local_68;
  
  lVar20 = *param_1;
  uVar16 = *(uint *)(lVar20 + 0x2c);
  if (((uVar16 >> 4 & 1) == 0) && (*(char *)(lVar20 + 0xc5) == '\0')) {
    lVar7 = *(long *)(*(long *)(lVar20 + 0x20) + 0x18);
    *(undefined1 *)(lVar20 + 100) = *(undefined1 *)(lVar7 + 0x71);
    if (((*(byte *)(lVar7 + 0x72) & 1) == 0) &&
       (iVar6 = FUN_005d5720(lVar20,0,param_1 + 1,0), iVar6 != 0)) {
LAB_005954ec:
      *(int *)(param_1 + 3) = iVar6;
      *(int *)((long)param_1 + 0x34) = *(int *)((long)param_1 + 0x34) + 1;
      return 0;
    }
    uVar12 = *(uint *)(lVar20 + 0x28);
    if (1 < (int)uVar12) {
      lVar7 = (ulong)uVar12 * 0x20 + -8;
      uVar21 = (ulong)uVar12;
      do {
        if (((*(ushort *)(*(long *)(*(long *)(lVar20 + 0x20) + lVar7) + 0x72) & 1) == 0) &&
           (iVar6 = FUN_005d5720(lVar20,(int)uVar21 + -1,param_1 + 1,0), iVar6 != 0))
        goto LAB_005954ec;
        lVar7 = lVar7 + -0x20;
        bVar1 = 2 < uVar21;
        uVar21 = uVar21 - 1;
      } while (bVar1);
    }
    if ((uVar16 & 1) == 0) {
      *(uint *)(lVar20 + 0x2c) = *(uint *)(lVar20 + 0x2c) & 0xfffffffe;
    }
    if (*(char *)(lVar20 + 0x6f) != '\0') {
      *(uint *)(lVar20 + 0x2c) = *(uint *)(lVar20 + 0x2c) | 0x10;
    }
  }
  lVar7 = FUN_005a34f8(lVar20,param_3,param_4);
  if (lVar7 != 0) {
    if (*(char *)(lVar7 + 0x3f) != '\x01') {
      return lVar7;
    }
    if ((*(byte *)((long)param_1 + 0x24) >> 2 & 1) == 0) {
      return lVar7;
    }
    goto LAB_00595430;
  }
  if (((*(byte *)((long)param_1 + 0x24) >> 2 & 1) == 0) && (*(char *)(lVar20 + 0xc5) == '\0')) {
    uVar16 = (uint)*param_3;
    if (*param_3 == 0) {
      uVar12 = 0;
      lVar7 = *(long *)(lVar20 + 0x230);
      if (lVar7 != 0) goto LAB_005955a0;
LAB_00595630:
      piVar17 = (int *)(lVar20 + 0x228);
      iVar6 = *(int *)(lVar20 + 0x224);
      if (iVar6 != 0) goto LAB_005955d8;
LAB_00595640:
      piVar17 = (int *)0xb103f8;
LAB_00595648:
      plVar11 = *(long **)(piVar17 + 4);
    }
    else {
      uVar12 = 0;
      pbVar18 = param_3 + 1;
      do {
        uVar3 = uVar16 & 0xdf;
        uVar16 = (uint)*pbVar18;
        uVar12 = (uVar12 + uVar3) * -0x61c8864f;
        pbVar18 = pbVar18 + 1;
      } while (uVar16 != 0);
      lVar7 = *(long *)(lVar20 + 0x230);
      if (lVar7 == 0) goto LAB_00595630;
LAB_005955a0:
      uVar16 = *(uint *)(lVar20 + 0x220);
      uVar3 = 0;
      if (uVar16 != 0) {
        uVar3 = uVar12 / uVar16;
      }
      piVar2 = (int *)(lVar7 + (ulong)(uVar12 - uVar3 * uVar16) * 0x10);
      piVar17 = piVar2 + 2;
      iVar6 = *piVar2;
      if (iVar6 == 0) goto LAB_00595640;
LAB_005955d8:
      do {
        piVar17 = *(int **)piVar17;
        if (uVar12 == piVar17[8]) {
          pbVar18 = *(byte **)(piVar17 + 6);
          pbVar19 = param_3;
          do {
            bVar4 = *pbVar18;
            if (bVar4 == *pbVar19) {
              if (bVar4 == 0) goto LAB_00595648;
            }
            else if ((&DAT_002c78ae)[bVar4] != (&DAT_002c78ae)[*pbVar19]) break;
            pbVar18 = pbVar18 + 1;
            pbVar19 = pbVar19 + 1;
          } while( true );
        }
        iVar6 = iVar6 + -1;
        plVar11 = DAT_00b10408;
      } while (iVar6 != 0);
    }
    if (plVar11 == (long *)0x0) {
      bVar4 = *param_3;
      if (bVar4 == 0) {
        cVar5 = (&DAT_002c78ae)[DAT_002bb644];
joined_r0x005957a4:
        if (cVar5 != '\0') goto LAB_00595420;
      }
      else if ((bVar4 & 0xdf) == 0x50) {
        bVar4 = param_3[1];
        if (bVar4 == 0) {
          cVar5 = (&DAT_002c78ae)[DAT_002bb645];
          goto joined_r0x005957a4;
        }
        if ((bVar4 & 0xdf) != 0x52) {
          pcVar22 = &DAT_002c78ae + bVar4;
          pbVar18 = &DAT_002bb645;
          goto LAB_00595b20;
        }
        bVar4 = param_3[2];
        if (bVar4 == 0) {
          cVar5 = (&DAT_002c78ae)[DAT_002bb646];
          goto joined_r0x005957a4;
        }
        if ((bVar4 & 0xdf) != 0x41) {
          pcVar22 = &DAT_002c78ae + bVar4;
          pbVar18 = &DAT_002bb646;
          goto LAB_00595b20;
        }
        bVar4 = param_3[3];
        if (bVar4 == 0) {
          cVar5 = (&DAT_002c78ae)[DAT_002bb647];
          goto joined_r0x005957a4;
        }
        if ((bVar4 & 0xdf) != 0x47) {
          pcVar22 = &DAT_002c78ae + bVar4;
          pbVar18 = &DAT_002bb647;
          goto LAB_00595b20;
        }
        bVar4 = param_3[4];
        if (bVar4 == 0) {
          cVar5 = (&DAT_002c78ae)[DAT_002bb648];
          goto joined_r0x005957a4;
        }
        if ((bVar4 & 0xdf) != 0x4d) {
          pcVar22 = &DAT_002c78ae + bVar4;
          pbVar18 = &DAT_002bb648;
          goto LAB_00595b20;
        }
        bVar4 = param_3[5];
        if (bVar4 == 0) {
          cVar5 = (&DAT_002c78ae)[DAT_002bb649];
          goto joined_r0x005957a4;
        }
        if ((bVar4 & 0xdf) != 0x41) {
          pcVar22 = &DAT_002c78ae + bVar4;
          pbVar18 = &DAT_002bb649;
          goto LAB_00595b20;
        }
        bVar4 = param_3[6];
        if (bVar4 == 0) {
          cVar5 = (&DAT_002c78ae)[DAT_002bb64a];
          goto joined_r0x005957a4;
        }
        if (bVar4 != 0x5f) {
          pcVar22 = &DAT_002c78ae + bVar4;
          pbVar18 = &DAT_002bb64a;
          goto LAB_00595b20;
        }
      }
      else {
        pcVar22 = &DAT_002c78ae + bVar4;
        pbVar18 = &DAT_002bb644;
LAB_00595b20:
        if (*pcVar22 != (&DAT_002c78ae)[*pbVar18]) goto LAB_00595420;
      }
      plVar11 = (long *)FUN_005e8e04(lVar20,param_3);
      if (plVar11 == (long *)0x0) goto LAB_00595420;
    }
    lVar20 = *plVar11;
    local_68 = 0;
    if (plVar11[5] != 0) {
      return plVar11[5];
    }
    lVar7 = *param_1;
    if ((*(long *)(lVar20 + 8) == 0) || (*(long *)(lVar20 + 8) == *(long *)(lVar20 + 0x10))) {
      if (lVar7 == 0) {
        puVar8 = (undefined8 *)FUN_005827b0(0x78);
      }
      else {
        puVar8 = (undefined8 *)FUN_005a76c8(lVar7,0x78);
      }
      if (puVar8 != (undefined8 *)0x0) {
        puVar8[0xe] = 0;
        puVar8[3] = 0;
        puVar8[2] = 0;
        puVar8[5] = 0;
        puVar8[4] = 0;
        puVar8[7] = 0;
        puVar8[6] = 0;
        puVar8[9] = 0;
        puVar8[8] = 0;
        puVar8[0xb] = 0;
        puVar8[10] = 0;
        puVar8[0xd] = 0;
        puVar8[0xc] = 0;
        puVar8[1] = 0;
        *puVar8 = 0;
        pcVar22 = (char *)plVar11[1];
        if (pcVar22 != (char *)0x0) {
          sVar9 = strlen(pcVar22);
          if (lVar7 == 0) {
            __s = (char *)FUN_005827b0(sVar9 + 1);
          }
          else {
            __s = (char *)FUN_005a76c8(lVar7,sVar9 + 1);
          }
          if (__s != (char *)0x0) {
            memcpy(__s,pcVar22,sVar9 + 1);
            lVar13 = *(long *)(lVar7 + 0x20);
            uVar16 = *(uint *)(puVar8 + 6);
            *puVar8 = __s;
            uVar14 = *(undefined8 *)(lVar13 + 0x18);
            plVar11[5] = (long)puVar8;
            *(undefined1 *)((long)puVar8 + 0x3f) = 1;
            puVar8[0xc] = uVar14;
            *(undefined2 *)((long)puVar8 + 0x34) = 0xffff;
            *(undefined4 *)((long)puVar8 + 0x2c) = 1;
            *(uint *)(puVar8 + 6) = uVar16 | 0x8000;
            sVar9 = strlen(__s);
            pvVar10 = (void *)FUN_005a76c8(lVar7,sVar9 + 1);
            if (pvVar10 != (void *)0x0) {
              memcpy(pvVar10,__s,sVar9 + 1);
            }
            FUN_005e9eb8(param_1,puVar8,pvVar10);
            FUN_005e9eb8(param_1,puVar8,0);
            pcVar22 = (char *)*puVar8;
            if (pcVar22 == (char *)0x0) {
              pvVar10 = (void *)0x0;
            }
            else {
              sVar9 = strlen(pcVar22);
              pvVar10 = (void *)FUN_005a76c8(lVar7,sVar9 + 1);
              if (pvVar10 != (void *)0x0) {
                memcpy(pvVar10,pcVar22,sVar9 + 1);
              }
            }
            FUN_005e9eb8(param_1,puVar8,pvVar10);
            iVar6 = FUN_005e7960(lVar7,puVar8,plVar11,*(undefined8 *)(lVar20 + 0x10),&local_68);
            uVar14 = local_68;
            if (iVar6 != 0) {
              FUN_00595b78(param_1,&DAT_002ad0ce,local_68);
              FUN_005869c8(lVar7,uVar14);
              lVar20 = plVar11[5];
              if (lVar20 == 0) {
                return 0;
              }
              lVar13 = *(long *)(lVar7 + 0x300);
              *(uint *)(lVar20 + 0x30) = *(uint *)(lVar20 + 0x30) | 0x4000;
              if ((lVar13 != 0) ||
                 (iVar6 = *(int *)(lVar20 + 0x2c) + -1, *(int *)(lVar20 + 0x2c) = iVar6, iVar6 == 0)
                 ) {
                FUN_005e9fb0(lVar7);
              }
              plVar11[5] = 0;
              return 0;
            }
            return plVar11[5];
          }
        }
        *puVar8 = 0;
        if (lVar7 == 0) {
LAB_00595914:
          puVar15 = &DAT_00b0da18;
          if (DAT_00b0d9f0 != 0) {
            if (DAT_00b103d8 != (undefined8 *)0x0) {
              (*DAT_00b0da70)();
            }
            iVar6 = (*DAT_00b0da28)(puVar8);
            DAT_00b105b8 = DAT_00b105b8 - iVar6;
            DAT_00b10600 = DAT_00b10600 + -1;
            (*DAT_00b0da18)(puVar8);
            if (DAT_00b103d8 == (undefined8 *)0x0) goto LAB_00595420;
            puVar15 = &DAT_00b0da80;
            puVar8 = DAT_00b103d8;
          }
          (*(code *)*puVar15)(puVar8);
        }
        else if (puVar8 < *(undefined8 **)(lVar7 + 0x1e8)) {
          if (puVar8 < *(undefined8 **)(lVar7 + 0x1d8)) {
            if (puVar8 < *(undefined8 **)(lVar7 + 0x1e0)) goto LAB_005958fc;
            uVar14 = *(undefined8 *)(lVar7 + 0x1c0);
            *(undefined8 **)(lVar7 + 0x1c0) = puVar8;
          }
          else {
            uVar14 = *(undefined8 *)(lVar7 + 0x1d0);
            *(undefined8 **)(lVar7 + 0x1d0) = puVar8;
          }
          *puVar8 = uVar14;
        }
        else {
LAB_005958fc:
          if (*(long *)(lVar7 + 0x300) == 0) goto LAB_00595914;
          FUN_005a7654(lVar7,puVar8);
        }
      }
    }
  }
LAB_00595420:
  if ((param_2 >> 1 & 1) != 0) {
    return 0;
  }
  *(byte *)((long)param_1 + 0x2b) = *(byte *)((long)param_1 + 0x2b) | 8;
LAB_00595430:
  pcVar22 = "no such table";
  if ((param_2 & 1) != 0) {
    pcVar22 = "no such view";
  }
  if (param_4 == 0) {
    FUN_00595b78(param_1,"%s: %s",pcVar22,param_3);
  }
  else {
    FUN_00595b78(param_1,"%s: %s.%s",pcVar22,param_4,param_3);
  }
  return 0;
}


// ===== 00595b78  FUN_00595b78 =====

void FUN_00595b78(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  long local_a8;
  undefined8 *local_a0;
  undefined4 local_98;
  int local_94;
  uint local_90;
  undefined2 local_8c;
  undefined8 auStack_86 [8];
  
  puStack_c8 = &stack0xffffffffffffff10;
  puStack_c0 = &local_120;
  lVar8 = *param_1;
  *(undefined4 *)(lVar8 + 0x54) = 0xfffffffe;
  local_a0 = auStack_86;
  local_94 = *(int *)(lVar8 + 0x88);
  local_90 = 0;
  local_98 = 0x46;
  uStack_b8 = 0xffffff80ffffffd0;
  local_8c = 0x100;
  local_120 = param_3;
  uStack_118 = param_4;
  local_110 = param_5;
  uStack_108 = param_6;
  local_100 = param_7;
  uStack_f8 = param_8;
  local_d0 = (undefined1 *)register0x00000008;
  local_a8 = lVar8;
  sqlite3_str_vappendf(&local_a8,param_2,&local_d0);
  if (((local_a0 == (undefined8 *)0x0) ||
      (*(undefined1 *)((long)local_a0 + (ulong)local_90) = 0, local_94 == 0)) ||
     ((local_8c._1_1_ >> 2 & 1) != 0)) {
    puVar3 = local_a0;
  }
  else {
    puVar3 = (undefined8 *)FUN_005a7ad8(&local_a8);
  }
  if ((((char)local_8c == '\a') && (*(char *)(lVar8 + 0x67) == '\0')) &&
     (*(char *)(lVar8 + 0x68) == '\0')) {
    *(undefined1 *)(lVar8 + 0x67) = 1;
    if (0 < *(int *)(lVar8 + 0xdc)) {
      *(undefined4 *)(lVar8 + 400) = 1;
    }
    *(undefined2 *)(lVar8 + 0x19c) = 0;
    *(int *)(lVar8 + 0x198) = *(int *)(lVar8 + 0x198) + 1;
    if (*(long *)(lVar8 + 0x158) != 0) {
      FUN_00595b78(*(long *)(lVar8 + 0x158),"out of memory");
      lVar5 = *(long *)(*(long *)(lVar8 + 0x158) + 0xd8);
      *(undefined4 *)(*(long *)(lVar8 + 0x158) + 0x18) = 7;
      for (; lVar5 != 0; lVar5 = *(long *)(lVar5 + 0xd8)) {
        *(undefined4 *)(lVar5 + 0x18) = 7;
        *(int *)(lVar5 + 0x34) = *(int *)(lVar5 + 0x34) + 1;
      }
    }
  }
  iVar2 = *(int *)(lVar8 + 0x54);
  if (iVar2 == -2 || iVar2 + 2 < 0 != SCARRY4(iVar2,2)) {
    *(undefined4 *)(lVar8 + 0x54) = 0xffffffff;
  }
  if (*(char *)(lVar8 + 0x6b) != '\0') {
    if (puVar3 != (undefined8 *)0x0) {
      if (puVar3 < *(undefined8 **)(lVar8 + 0x1e8)) {
        if (*(undefined8 **)(lVar8 + 0x1d8) <= puVar3) {
          uVar7 = *(undefined8 *)(lVar8 + 0x1d0);
          *(undefined8 **)(lVar8 + 0x1d0) = puVar3;
          *puVar3 = uVar7;
          cVar1 = *(char *)(lVar8 + 0x67);
          goto joined_r0x00595d34;
        }
        if (*(undefined8 **)(lVar8 + 0x1e0) <= puVar3) {
          uVar7 = *(undefined8 *)(lVar8 + 0x1c0);
          *(undefined8 **)(lVar8 + 0x1c0) = puVar3;
          *puVar3 = uVar7;
          cVar1 = *(char *)(lVar8 + 0x67);
          goto joined_r0x00595d34;
        }
      }
      if (*(long *)(lVar8 + 0x300) != 0) {
        FUN_005a7654(lVar8,puVar3);
        cVar1 = *(char *)(lVar8 + 0x67);
        goto joined_r0x00595d34;
      }
      puVar4 = &DAT_00b0da18;
      if (DAT_00b0d9f0 != 0) {
        if (DAT_00b103d8 != (undefined8 *)0x0) {
          (*DAT_00b0da70)();
        }
        iVar2 = (*DAT_00b0da28)(puVar3);
        DAT_00b105b8 = DAT_00b105b8 - iVar2;
        DAT_00b10600 = DAT_00b10600 + -1;
        (*DAT_00b0da18)(puVar3);
        if (DAT_00b103d8 == (undefined8 *)0x0) goto LAB_00595dbc;
        puVar4 = &DAT_00b0da80;
        puVar3 = DAT_00b103d8;
      }
      (*(code *)*puVar4)(puVar3);
    }
LAB_00595dbc:
    cVar1 = *(char *)(lVar8 + 0x67);
joined_r0x00595d34:
    if (cVar1 != '\0') {
      *(undefined4 *)(param_1 + 3) = 7;
      *(int *)((long)param_1 + 0x34) = *(int *)((long)param_1 + 0x34) + 1;
    }
    return;
  }
  puVar4 = (undefined8 *)param_1[1];
  *(int *)((long)param_1 + 0x34) = *(int *)((long)param_1 + 0x34) + 1;
  if (puVar4 == (undefined8 *)0x0) goto LAB_00595f10;
  if (puVar4 < *(undefined8 **)(lVar8 + 0x1e8)) {
    if (puVar4 < *(undefined8 **)(lVar8 + 0x1d8)) {
      if (puVar4 < *(undefined8 **)(lVar8 + 0x1e0)) goto LAB_00595d0c;
      uVar7 = *(undefined8 *)(lVar8 + 0x1c0);
      *(undefined8 **)(lVar8 + 0x1c0) = puVar4;
    }
    else {
      uVar7 = *(undefined8 *)(lVar8 + 0x1d0);
      *(undefined8 **)(lVar8 + 0x1d0) = puVar4;
    }
    *puVar4 = uVar7;
  }
  else {
LAB_00595d0c:
    if (*(long *)(lVar8 + 0x300) == 0) {
      puVar6 = &DAT_00b0da18;
      if (DAT_00b0d9f0 != 0) {
        if (DAT_00b103d8 != (undefined8 *)0x0) {
          (*DAT_00b0da70)();
        }
        iVar2 = (*DAT_00b0da28)(puVar4);
        DAT_00b105b8 = DAT_00b105b8 - iVar2;
        DAT_00b10600 = DAT_00b10600 + -1;
        (*DAT_00b0da18)(puVar4);
        if (DAT_00b103d8 == (undefined8 *)0x0) goto LAB_00595f10;
        puVar6 = &DAT_00b0da80;
        puVar4 = DAT_00b103d8;
      }
      (*(code *)*puVar6)(puVar4);
    }
    else {
      FUN_005a7654(lVar8,puVar4);
    }
  }
LAB_00595f10:
  param_1[1] = (long)puVar3;
  *(undefined4 *)(param_1 + 3) = 1;
  param_1[0x32] = 0;
  return;
}


// ===== 00595f38  FUN_00595f38 =====

undefined8 FUN_00595f38(undefined8 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_18;
  
  puVar4 = (undefined8 *)*param_1;
  if ((*(long *)(puVar4[4] + 0x28) == 0) && (*(char *)((long)param_1 + 299) == '\0')) {
    iVar2 = FUN_005d0350(*puVar4,0,puVar4,&local_18,0,0x21e);
    if (iVar2 == 0) {
      uVar1 = *(undefined4 *)((long)puVar4 + 0x74);
      *(undefined8 *)(puVar4[4] + 0x28) = local_18;
      iVar2 = FUN_005a4724(local_18,uVar1,0,0);
      if (iVar2 != 7) {
        return 0;
      }
      if ((*(char *)((long)puVar4 + 0x67) == '\0') && (*(char *)(puVar4 + 0xd) == '\0')) {
        *(undefined1 *)((long)puVar4 + 0x67) = 1;
        if (0 < *(int *)((long)puVar4 + 0xdc)) {
          *(undefined4 *)(puVar4 + 0x32) = 1;
        }
        *(undefined2 *)((long)puVar4 + 0x19c) = 0;
        *(int *)(puVar4 + 0x33) = *(int *)(puVar4 + 0x33) + 1;
        if (puVar4[0x2b] != 0) {
          FUN_00595b78(puVar4[0x2b],"out of memory");
          lVar3 = *(long *)(puVar4[0x2b] + 0xd8);
          *(undefined4 *)(puVar4[0x2b] + 0x18) = 7;
          for (; lVar3 != 0; lVar3 = *(long *)(lVar3 + 0xd8)) {
            *(undefined4 *)(lVar3 + 0x18) = 7;
            *(int *)(lVar3 + 0x34) = *(int *)(lVar3 + 0x34) + 1;
          }
        }
      }
    }
    else {
      FUN_00595b78(param_1,"unable to open a temporary database file for storing temporary tables");
      *(int *)(param_1 + 3) = iVar2;
    }
    return 1;
  }
  return 0;
}


// ===== 00596068  FUN_00596068 =====

void FUN_00596068(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 *local_50;
  undefined1 **ppuStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  puStack_40 = &local_80;
  ppuStack_48 = &local_50;
  uStack_38 = 0xffffff80ffffffd0;
  local_80 = param_3;
  uStack_78 = param_4;
  local_70 = param_5;
  uStack_68 = param_6;
  local_60 = param_7;
  uStack_58 = param_8;
  local_50 = (undefined1 *)register0x00000008;
  FUN_005ac498(param_1,param_2,&local_50);
  return;
}


// ===== 005960d0  FUN_005960d0 =====

long * FUN_005960d0(long *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  lVar3 = *param_1;
  if (*(ushort *)(lVar3 + 0x19c) < 0x130) {
    if (*(int *)(lVar3 + 0x198) == 0) {
      *(int *)(lVar3 + 0x1ac) = *(int *)(lVar3 + 0x1ac) + 1;
    }
    else if (*(char *)(lVar3 + 0x67) != '\0') {
      return (long *)0x0;
    }
    plVar2 = (long *)FUN_005a7a28(lVar3,0x130);
joined_r0x0059620c:
    if (plVar2 == (long *)0x0) {
      return (long *)0x0;
    }
  }
  else {
    plVar2 = *(long **)(lVar3 + 0x1c0);
    if (plVar2 == (long *)0x0) {
      plVar2 = *(long **)(lVar3 + 0x1b8);
      if (plVar2 == (long *)0x0) {
        *(int *)(lVar3 + 0x1b0) = *(int *)(lVar3 + 0x1b0) + 1;
        plVar2 = (long *)FUN_005a7a28(lVar3,0x130);
        goto joined_r0x0059620c;
      }
      plVar4 = (long *)(lVar3 + 0x1b8);
    }
    else {
      plVar4 = (long *)(lVar3 + 0x1c0);
    }
    iVar1 = *(int *)(lVar3 + 0x1a8);
    *plVar4 = *plVar2;
    *(int *)(lVar3 + 0x1a8) = iVar1 + 1;
  }
  plVar2[0x25] = 0;
  *plVar2 = lVar3;
  plVar2[0x20] = 0;
  plVar2[0x1f] = 0;
  plVar2[0x1e] = 0;
  plVar2[0x1d] = 0;
  plVar2[0x1c] = 0;
  plVar2[0x1b] = 0;
  plVar2[0x1a] = 0;
  plVar2[0x19] = 0;
  plVar2[0x18] = 0;
  plVar2[0x17] = 0;
  plVar2[0x16] = 0;
  plVar2[0x15] = 0;
  plVar2[0x14] = 0;
  plVar2[0x13] = 0;
  plVar2[0x12] = 0;
  plVar2[0x11] = 0;
  plVar2[0x22] = 0;
  plVar2[0x21] = 0;
  plVar2[0x24] = 0;
  plVar2[0x23] = 0;
  plVar4 = (long *)(lVar3 + 8);
  lVar3 = *plVar4;
  if (lVar3 != 0) {
    *(long **)(lVar3 + 8) = plVar2 + 2;
  }
  plVar2[1] = (long)plVar4;
  plVar2[2] = lVar3;
  *plVar4 = (long)plVar2;
  plVar2[3] = (long)param_1;
  param_1[2] = (long)plVar2;
  FUN_005e8560(plVar2,8,0,1,0);
  return plVar2;
}


// ===== 00596214  FUN_00596214 =====

void FUN_00596214(long param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = *(int *)(param_1 + 0x90);
  if (iVar1 < *(int *)(param_1 + 0x94)) {
    puVar2 = (undefined1 *)(*(long *)(param_1 + 0x88) + (long)iVar1 * 0x18);
    *(int *)(param_1 + 0x90) = iVar1 + 1;
    *puVar2 = param_2;
    *(undefined2 *)(puVar2 + 2) = 0;
    *(undefined4 *)(puVar2 + 4) = param_3;
    *(undefined4 *)(puVar2 + 8) = param_4;
    *(undefined4 *)(puVar2 + 0xc) = param_5;
    *(undefined4 *)(puVar2 + 0x10) = param_6;
    puVar2[1] = 0xfd;
    return;
  }
  FUN_005e87d8(param_1);
  return;
}


// ===== 00596264  FUN_00596264 =====

long FUN_00596264(long param_1,int param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  int *piVar6;
  long lVar7;
  
  iVar5 = *(int *)(param_1 + 0x90);
  if (*(int *)(param_1 + 0x94) < iVar5 + param_2) {
    iVar5 = FUN_005e8600();
    if (iVar5 != 0) {
      return 0;
    }
    iVar5 = *(int *)(param_1 + 0x90);
  }
  lVar7 = *(long *)(param_1 + 0x88);
  lVar4 = (long)iVar5;
  if (0 < param_2) {
    piVar6 = (int *)(lVar7 + (long)iVar5 * 0x18 + 8);
    iVar5 = param_2;
    do {
      bVar1 = *param_3;
      bVar2 = param_3[1];
      bVar3 = param_3[2];
      *(byte *)(piVar6 + -2) = bVar1;
      piVar6[-1] = (int)(char)bVar2;
      *piVar6 = (int)(char)bVar3;
      if ((((&DAT_002c86c4)[bVar1] & 1) != 0) && (0 < (char)bVar3)) {
        *piVar6 = *(int *)(param_1 + 0x90) + (int)(char)bVar3;
      }
      bVar1 = param_3[3];
      *(undefined1 *)((long)piVar6 + -7) = 0;
      iVar5 = iVar5 + -1;
      piVar6[2] = 0;
      piVar6[3] = 0;
      param_3 = param_3 + 4;
      piVar6[1] = (int)(char)bVar1;
      *(undefined2 *)((long)piVar6 + -6) = 0;
      piVar6 = piVar6 + 6;
    } while (iVar5 != 0);
    iVar5 = *(int *)(param_1 + 0x90);
  }
  *(int *)(param_1 + 0x90) = iVar5 + param_2;
  return lVar7 + lVar4 * 0x18;
}


// ===== 0059636c  FUN_0059636c =====

void FUN_0059636c(long *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 1 << (ulong)(param_2 & 0x1f);
  *(uint *)((long)param_1 + 0xcc) = *(uint *)((long)param_1 + 0xcc) | uVar1;
  if ((param_2 != 1) &&
     (*(char *)(*(long *)(*(long *)(*param_1 + 0x20) + (long)(int)param_2 * 0x20 + 8) + 0x11) !=
      '\0')) {
    *(uint *)(param_1 + 0x1a) = *(uint *)(param_1 + 0x1a) | uVar1;
  }
  return;
}


// ===== 005963b4  FUN_005963b4 =====

void FUN_005963b4(long *param_1,int param_2,long param_3,int param_4)

{
  long lVar1;
  char *pcVar2;
  
  if (*(char *)(*param_1 + 0x67) == '\0') {
    if (param_2 < 0) {
      param_2 = (int)param_1[0x12] + -1;
      lVar1 = param_1[0x11];
    }
    else {
      lVar1 = param_1[0x11];
    }
    if ((-1 < param_4) || (pcVar2 = (char *)(lVar1 + (long)param_2 * 0x18 + 1), *pcVar2 != '\0')) {
      FUN_005e8888(param_1,lVar1 + (long)param_2 * 0x18);
      return;
    }
    if (param_4 == -3) {
      *pcVar2 = -3;
      *(int *)(lVar1 + (long)param_2 * 0x18 + 0x10) = (int)param_3;
      return;
    }
    if (param_3 != 0) {
      *pcVar2 = (char)param_4;
      *(long *)(lVar1 + (long)param_2 * 0x18 + 0x10) = param_3;
      if (param_4 == -0xb) {
        *(int *)(param_3 + 0x18) = *(int *)(param_3 + 0x18) + 1;
        return;
      }
    }
  }
  else if (param_4 != -0xb) {
    FUN_005bbd24(*param_1,param_4);
    return;
  }
  return;
}


// ===== 00596468  FUN_00596468 =====

void FUN_00596468(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  size_t sVar5;
  long lVar6;
  int iVar7;
  byte bVar8;
  char cVar9;
  short sVar10;
  long lVar11;
  long lVar12;
  undefined4 *puVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  ushort uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined2 *puVar20;
  long lVar21;
  long lVar22;
  size_t __n;
  long lVar23;
  int iVar24;
  uint uVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  int local_64;
  
  lVar23 = param_1[0x12];
  iVar24 = *(int *)(param_2 + 0x38);
  iVar7 = *(int *)(param_2 + 0x3c);
  param_1[0x16] = *(long *)(param_2 + 0x140);
  local_64 = *(int *)(param_2 + 0x78);
  lVar27 = (long)iVar24;
  lVar22 = *param_1;
  sVar10 = *(short *)(param_2 + 0x128);
  uVar26 = (ulong)sVar10;
  lVar28 = param_1[0x11];
  *(undefined8 *)(param_2 + 0x140) = 0;
  uVar14 = iVar24 + iVar7;
  lVar23 = (long)((int)lVar23 * 0x18);
  iVar7 = *(int *)(param_2 + 0x40);
  if (lVar27 == 0 && 0 < (int)uVar14) {
    uVar14 = uVar14 + 1;
  }
  FUN_005e8a34(param_1,&local_64);
  uVar17 = (ushort)*(byte *)(param_2 + 0x20);
  if (*(byte *)(param_2 + 0x20) != 0) {
    uVar17 = (ushort)(*(char *)(param_2 + 0x21) != '\0') << 5;
  }
  uVar17 = *(ushort *)(param_1 + 0x19) & 0xffdf | uVar17;
  lVar28 = lVar28 + lVar23;
  uVar15 = iVar7 - lVar23 & 0xfffffffffffffff8;
  *(ushort *)(param_1 + 0x19) = uVar17;
  bVar8 = *(byte *)(param_2 + 299);
  if (bVar8 != 0) {
    uVar17 = uVar17 & 0xfff0 | (ushort)((bVar8 & 3) << 2);
    if ((int)uVar14 < 0xb) {
      uVar14 = 10;
    }
    *(ushort *)(param_1 + 0x18) = (ushort)((bVar8 & 3) << 2) ^ 0xc;
  }
  lVar21 = (long)local_64;
  lVar12 = (long)(int)uVar14;
  lVar30 = lVar12 * 0x38;
  __n = lVar27 * 8;
  uVar19 = uVar15 + (long)(int)uVar14 * -0x38;
  lVar16 = uVar26 * 0x38;
  lVar29 = lVar21 * 8;
  *(ushort *)(param_1 + 0x19) = uVar17 & 0xfffc;
  lVar23 = lVar30;
  uVar18 = uVar15;
  if (lVar30 <= (long)uVar15) {
    lVar23 = 0;
    uVar18 = uVar19;
  }
  lVar6 = 0;
  if ((long)(uVar15 + lVar12 * -0x38) < 0 == SBORROW8(uVar15,lVar30)) {
    lVar6 = lVar28 + uVar19;
  }
  uVar15 = uVar18 + uVar26 * -0x38;
  lVar1 = lVar16;
  uVar19 = uVar18;
  if ((long)uVar15 < 0 == SBORROW8(uVar18,lVar16)) {
    lVar1 = 0;
    uVar19 = uVar15;
  }
  lVar2 = 0;
  if ((long)uVar15 < 0 == SBORROW8(uVar18,lVar16)) {
    lVar2 = lVar28 + uVar15;
  }
  uVar18 = uVar19 + lVar21 * -8;
  uVar15 = uVar19;
  lVar3 = lVar29;
  if ((long)uVar18 < 0 == SBORROW8(uVar19,lVar29)) {
    lVar3 = 0;
    uVar15 = uVar18;
  }
  lVar4 = 0;
  if ((long)uVar18 < 0 == SBORROW8(uVar19,lVar29)) {
    lVar4 = lVar28 + uVar18;
  }
  lVar11 = uVar15 + lVar27 * -8;
  sVar5 = __n;
  if (lVar11 < 0 == SBORROW8(uVar15,__n)) {
    sVar5 = 0;
  }
  param_1[0xd] = lVar6;
  param_1[0xe] = lVar4;
  lVar23 = lVar1 + lVar23 + lVar3 + sVar5;
  lVar6 = 0;
  if (lVar11 < 0 == SBORROW8(uVar15,__n)) {
    lVar6 = lVar28 + lVar11;
  }
  param_1[0xf] = lVar6;
  param_1[0x10] = lVar2;
  if (lVar23 == 0) {
    if (*(char *)(lVar22 + 0x67) != '\0') goto LAB_00596624;
  }
  else {
    lVar28 = FUN_005a76c8(lVar22,lVar23);
    cVar9 = *(char *)(lVar22 + 0x67);
    param_1[0x20] = lVar28;
    if (cVar9 != '\0') {
LAB_00596624:
      *(undefined2 *)(param_1 + 4) = 0;
      *(undefined4 *)((long)param_1 + 0x24) = 0;
      *(undefined4 *)(param_1 + 5) = 0;
      goto LAB_005967f8;
    }
    if (param_1[0xd] == 0) {
      lVar12 = lVar23 + lVar12 * -0x38;
      if (lVar30 <= lVar23) {
        lVar30 = param_1[0x10];
        param_1[0xd] = lVar28 + lVar12;
        lVar23 = lVar12;
        goto joined_r0x00596664;
      }
      lVar30 = param_1[0x10];
      param_1[0xd] = 0;
      if (lVar30 == 0) goto LAB_00596668;
LAB_005965f4:
      lVar16 = param_1[0xe];
      param_1[0x10] = lVar30;
joined_r0x00596694:
      if (lVar16 == 0) goto LAB_00596698;
LAB_00596600:
      lVar12 = param_1[0xf];
      param_1[0xe] = lVar16;
    }
    else {
      lVar30 = param_1[0x10];
      param_1[0xd] = param_1[0xd];
joined_r0x00596664:
      if (lVar30 != 0) goto LAB_005965f4;
LAB_00596668:
      lVar12 = lVar23 + uVar26 * -0x38;
      if (lVar12 < 0 == SBORROW8(lVar23,lVar16)) {
        lVar16 = param_1[0xe];
        param_1[0x10] = lVar28 + lVar12;
        lVar23 = lVar12;
        goto joined_r0x00596694;
      }
      lVar16 = param_1[0xe];
      param_1[0x10] = 0;
      if (lVar16 != 0) goto LAB_00596600;
LAB_00596698:
      lVar16 = lVar23 + lVar21 * -8;
      if (lVar16 < 0 == SBORROW8(lVar23,lVar29)) {
        lVar12 = param_1[0xf];
        param_1[0xe] = lVar28 + lVar16;
        lVar23 = lVar16;
      }
      else {
        lVar12 = param_1[0xf];
        param_1[0xe] = 0;
      }
    }
    if (lVar12 == 0) {
      lVar12 = lVar23 + lVar27 * -8;
      if (lVar12 < 0 == SBORROW8(lVar23,__n)) {
        lVar12 = lVar28 + lVar12;
      }
      else {
        lVar12 = 0;
      }
    }
    param_1[0xf] = lVar12;
  }
  *(int *)(param_1 + 5) = iVar24;
  uVar25 = (uint)sVar10;
  *(short *)(param_1 + 4) = sVar10;
  if (0 < sVar10) {
    lVar28 = param_1[0x10];
    if (uVar25 != 1) {
      uVar18 = (ulong)uVar25 & 0x7ffe;
      uVar26 = (ulong)(uVar25 - (int)uVar18);
      puVar20 = (undefined2 *)(lVar28 + 0x4c);
      uVar15 = uVar18;
      do {
        puVar20[-0x1c] = 1;
        uVar15 = uVar15 - 2;
        *puVar20 = 1;
        *(long *)(puVar20 + -0x1a) = lVar22;
        *(long *)(puVar20 + 2) = lVar22;
        *(undefined4 *)(puVar20 + -0x16) = 0;
        *(undefined4 *)(puVar20 + 6) = 0;
        puVar20 = puVar20 + 0x38;
      } while (uVar15 != 0);
      lVar28 = lVar28 + uVar18 * 0x38;
      if (uVar18 == uVar25) goto LAB_00596760;
    }
    uVar25 = (int)uVar26 + 1;
    puVar13 = (undefined4 *)(lVar28 + 0x20);
    do {
      uVar25 = uVar25 - 1;
      *(undefined2 *)(puVar13 + -3) = 1;
      *(long *)(puVar13 + -2) = lVar22;
      *puVar13 = 0;
      puVar13 = puVar13 + 0xe;
    } while (1 < uVar25);
  }
LAB_00596760:
  *(uint *)((long)param_1 + 0x24) = uVar14;
  if (0 < (int)uVar14) {
    lVar28 = param_1[0xd];
    if (uVar14 == 1) {
      iVar24 = 1;
      lVar23 = lVar28;
    }
    else {
      uVar15 = (ulong)uVar14 & 0x7ffffffe;
      lVar23 = lVar28 + uVar15 * 0x38;
      iVar24 = uVar14 - (int)uVar15;
      puVar20 = (undefined2 *)(lVar28 + 0x4c);
      uVar26 = uVar15;
      do {
        puVar20[-0x1c] = 0;
        uVar26 = uVar26 - 2;
        *puVar20 = 0;
        *(long *)(puVar20 + -0x1a) = lVar22;
        *(long *)(puVar20 + 2) = lVar22;
        *(undefined4 *)(puVar20 + -0x16) = 0;
        *(undefined4 *)(puVar20 + 6) = 0;
        puVar20 = puVar20 + 0x38;
      } while (uVar26 != 0);
      if (uVar15 == uVar14) goto LAB_005967e8;
    }
    uVar14 = iVar24 + 1;
    puVar13 = (undefined4 *)(lVar23 + 0x20);
    do {
      uVar14 = uVar14 - 1;
      *(undefined2 *)(puVar13 + -3) = 0;
      *(long *)(puVar13 + -2) = lVar22;
      *puVar13 = 0;
      puVar13 = puVar13 + 0xe;
    } while (1 < uVar14);
  }
LAB_005967e8:
  memset((void *)param_1[0xf],0,__n);
LAB_005967f8:
  param_1[7] = 0;
  *(undefined1 *)((long)param_1 + 199) = 1;
  *(undefined2 *)((long)param_1 + 0xc4) = 0xff02;
  *(undefined4 *)((long)param_1 + 0x2c) = 1;
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[10] = 0;
  return;
}


// ===== 00596840  FUN_00596840 =====

ulong FUN_00596840(uint *param_1,undefined8 param_2,undefined8 *param_3)

{
  char *pcVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char *pcVar9;
  long lVar10;
  long lVar11;
  
  lVar11 = *(long *)(param_1 + 6);
  lVar10 = *(long *)(lVar11 + 0x68);
  if ((*(ushort *)(lVar10 + 0x4c) & 0x9000) == 0) {
    *(undefined8 *)(lVar10 + 0x38) = param_2;
    *(undefined2 *)(lVar10 + 0x4c) = 4;
    iVar4 = *(int *)(lVar11 + 0x30);
  }
  else {
    FUN_005c2a94(lVar10 + 0x38,param_2);
    iVar4 = *(int *)(lVar11 + 0x30);
  }
  if (iVar4 < 5) {
    uVar6 = sqlite3_step(*(undefined8 *)(param_1 + 6));
    iVar4 = (int)uVar6;
  }
  else {
    *(undefined4 *)(lVar11 + 0x30) = 4;
    uVar6 = FUN_005c32b4(lVar11);
    iVar4 = (int)uVar6;
  }
  if (iVar4 == 100) {
    uVar3 = (ushort)param_1[2];
    lVar10 = **(long **)(lVar11 + 0x78);
    pcVar9 = "null";
    if (uVar3 < *(ushort *)(lVar10 + 0x42)) {
      uVar5 = *(uint *)(lVar10 + (ulong)uVar3 * 4 + 0x70);
      if (0xb < uVar5) {
        param_1[1] = *(uint *)(lVar10 + ((long)*(short *)(lVar10 + 0x40) + (ulong)uVar3) * 4 + 0x70)
        ;
        if (uVar5 < 0x80) {
          uVar5 = (uint)(byte)(&DAT_002c853e)[uVar5];
        }
        else {
          uVar5 = uVar5 - 0xc >> 1;
        }
        *param_1 = uVar5;
        lVar10 = *(long *)(lVar10 + 0x28);
        bVar2 = *(byte *)(lVar10 + 1);
        lVar11 = *(long *)(lVar10 + 8);
        *(long *)(param_1 + 4) = lVar10;
        *(undefined1 *)(lVar11 + 0x13) = 1;
        *(byte *)(lVar10 + 1) = bVar2 | 0x10;
        *param_3 = 0;
        return 0;
      }
      pcVar1 = "real";
      if (uVar5 != 7) {
        pcVar1 = "integer";
      }
      if (uVar5 != 0) {
        pcVar9 = pcVar1;
      }
    }
    uVar7 = FUN_00596068(*(undefined8 *)(param_1 + 8),"cannot open value of type %s",pcVar9);
    sqlite3_finalize(*(undefined8 *)(param_1 + 6));
    param_1[6] = 0;
    param_1[7] = 0;
    *param_3 = uVar7;
    return 1;
  }
  if (*(long *)(param_1 + 6) == 0) {
    *param_3 = 0;
    return uVar6;
  }
  uVar5 = sqlite3_finalize(*(long *)(param_1 + 6));
  uVar7 = *(undefined8 *)(param_1 + 8);
  param_1[6] = 0;
  param_1[7] = 0;
  if (uVar5 != 0) {
    uVar8 = sqlite3_errmsg();
    uVar7 = FUN_00596068(uVar7,&DAT_002ad0ce,uVar8);
    *param_3 = uVar7;
    return (ulong)uVar5;
  }
  uVar7 = FUN_00596068(uVar7,"no such rowid: %lld",param_2);
  *param_3 = uVar7;
  return 1;
}


// ===== 00596a64  FUN_00596a64 =====

void FUN_00596a64(long *param_1)

{
  int iVar1;
  long lVar2;
  undefined2 uVar3;
  undefined8 *puVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  
  plVar7 = (long *)param_1[0x11];
  lVar6 = *param_1;
  if (plVar7 == (long *)0x0) {
LAB_00596b68:
    plVar7 = (long *)param_1[0x16];
  }
  else if (plVar7 < *(long **)(lVar6 + 0x1e8)) {
    if (plVar7 < *(long **)(lVar6 + 0x1d8)) {
      if (plVar7 < *(long **)(lVar6 + 0x1e0)) goto LAB_00596ab0;
      lVar2 = *(long *)(lVar6 + 0x1c0);
      *(long **)(lVar6 + 0x1c0) = plVar7;
      *plVar7 = lVar2;
      plVar7 = (long *)param_1[0x16];
    }
    else {
      lVar2 = *(long *)(lVar6 + 0x1d0);
      *(long **)(lVar6 + 0x1d0) = plVar7;
      *plVar7 = lVar2;
      plVar7 = (long *)param_1[0x16];
    }
  }
  else {
LAB_00596ab0:
    if (*(long *)(lVar6 + 0x300) == 0) {
      puVar4 = &DAT_00b0da18;
      if (DAT_00b0d9f0 != 0) {
        if (DAT_00b103d8 != (long *)0x0) {
          (*DAT_00b0da70)();
        }
        iVar1 = (*DAT_00b0da28)(plVar7);
        DAT_00b105b8 = DAT_00b105b8 - iVar1;
        DAT_00b10600 = DAT_00b10600 + -1;
        (*DAT_00b0da18)(plVar7);
        if (DAT_00b103d8 == (long *)0x0) goto LAB_00596b68;
        puVar4 = &DAT_00b0da80;
        plVar7 = DAT_00b103d8;
      }
      (*(code *)*puVar4)(plVar7);
      goto LAB_00596b68;
    }
    FUN_005a7654(lVar6,plVar7);
    plVar7 = (long *)param_1[0x16];
  }
  while (plVar7 != (long *)0x0) {
    lVar2 = plVar7[1];
    pcVar5 = (code *)plVar7[2];
    param_1[0x16] = *plVar7;
    (*pcVar5)(lVar6,lVar2);
    if (plVar7 < *(long **)(lVar6 + 0x1e8)) {
      if (plVar7 < *(long **)(lVar6 + 0x1d8)) {
        if (plVar7 < *(long **)(lVar6 + 0x1e0)) goto LAB_00596b94;
        lVar2 = *(long *)(lVar6 + 0x1c0);
        *(long **)(lVar6 + 0x1c0) = plVar7;
      }
      else {
        lVar2 = *(long *)(lVar6 + 0x1d0);
        *(long **)(lVar6 + 0x1d0) = plVar7;
      }
      *plVar7 = lVar2;
    }
    else {
LAB_00596b94:
      if (*(long *)(lVar6 + 0x300) == 0) {
        puVar4 = &DAT_00b0da18;
        if (DAT_00b0d9f0 != 0) {
          if (DAT_00b103d8 != (long *)0x0) {
            (*DAT_00b0da70)();
          }
          iVar1 = (*DAT_00b0da28)(plVar7);
          DAT_00b105b8 = DAT_00b105b8 - iVar1;
          DAT_00b10600 = DAT_00b10600 + -1;
          (*DAT_00b0da18)(plVar7);
          if (DAT_00b103d8 == (long *)0x0) goto LAB_00596ba8;
          puVar4 = &DAT_00b0da80;
          plVar7 = DAT_00b103d8;
        }
        (*(code *)*puVar4)(plVar7);
      }
      else {
        FUN_005a7654(lVar6,plVar7);
      }
    }
LAB_00596ba8:
    plVar7 = (long *)param_1[0x16];
  }
  plVar7 = (long *)param_1[10];
  if (plVar7 != (long *)0x0) {
    if (plVar7 < *(long **)(lVar6 + 0x1e8)) {
      if (*(long **)(lVar6 + 0x1d8) <= plVar7) {
        lVar2 = *(long *)(lVar6 + 0x1d0);
        *(long **)(lVar6 + 0x1d0) = plVar7;
        *plVar7 = lVar2;
        lVar2 = param_1[0xb];
        goto joined_r0x00596d68;
      }
      if (*(long **)(lVar6 + 0x1e0) <= plVar7) {
        lVar2 = *(long *)(lVar6 + 0x1c0);
        *(long **)(lVar6 + 0x1c0) = plVar7;
        *plVar7 = lVar2;
        lVar2 = param_1[0xb];
        goto joined_r0x00596d68;
      }
    }
    if (*(long *)(lVar6 + 0x300) != 0) {
      FUN_005a7654(lVar6,plVar7);
      lVar2 = param_1[0xb];
      goto joined_r0x00596d68;
    }
    puVar4 = &DAT_00b0da18;
    if (DAT_00b0d9f0 != 0) {
      if (DAT_00b103d8 != (long *)0x0) {
        (*DAT_00b0da70)();
      }
      iVar1 = (*DAT_00b0da28)(plVar7);
      DAT_00b105b8 = DAT_00b105b8 - iVar1;
      DAT_00b10600 = DAT_00b10600 + -1;
      (*DAT_00b0da18)(plVar7);
      if (DAT_00b103d8 == (long *)0x0) goto LAB_00596d64;
      puVar4 = &DAT_00b0da80;
      plVar7 = DAT_00b103d8;
    }
    (*(code *)*puVar4)(plVar7);
  }
LAB_00596d64:
  lVar2 = param_1[0xb];
joined_r0x00596d68:
  if (lVar2 != 0) {
    FUN_005eaac4(lVar6);
  }
  iVar1 = *(int *)(lVar6 + 0x198) - (uint)*(byte *)((long)param_1 + 0x23);
  *(int *)(lVar6 + 0x198) = iVar1;
  if (iVar1 == 0) {
    uVar3 = *(undefined2 *)(lVar6 + 0x19e);
  }
  else {
    uVar3 = 0;
  }
  lVar2 = param_1[0x1b];
  *(undefined2 *)(lVar6 + 0x19c) = uVar3;
  *(long *)(lVar6 + 0x158) = lVar2;
  return;
}


// ===== 00596dd0  sqlite3_blob_close =====

void sqlite3_blob_close(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  lVar5 = param_1[4];
  uVar4 = param_1[3];
  if (*(long *)(lVar5 + 0x18) != 0) {
    (*DAT_00b0da70)();
  }
  if (param_1 < *(undefined8 **)(lVar5 + 0x1e8)) {
    if (*(undefined8 **)(lVar5 + 0x1d8) <= param_1) {
      uVar3 = *(undefined8 *)(lVar5 + 0x1d0);
      *(undefined8 **)(lVar5 + 0x1d0) = param_1;
      *param_1 = uVar3;
      lVar5 = *(long *)(lVar5 + 0x18);
      goto joined_r0x00596e60;
    }
    if (*(undefined8 **)(lVar5 + 0x1e0) <= param_1) {
      uVar3 = *(undefined8 *)(lVar5 + 0x1c0);
      *(undefined8 **)(lVar5 + 0x1c0) = param_1;
      *param_1 = uVar3;
      lVar5 = *(long *)(lVar5 + 0x18);
      goto joined_r0x00596e60;
    }
  }
  if (*(long *)(lVar5 + 0x300) != 0) {
    FUN_005a7654(lVar5,param_1);
    lVar5 = *(long *)(lVar5 + 0x18);
    goto joined_r0x00596e60;
  }
  puVar2 = &DAT_00b0da18;
  if (DAT_00b0d9f0 == 0) {
LAB_00596edc:
    (*(code *)*puVar2)(param_1);
  }
  else {
    if (DAT_00b103d8 != (undefined8 *)0x0) {
      (*DAT_00b0da70)();
    }
    iVar1 = (*DAT_00b0da28)(param_1);
    DAT_00b105b8 = DAT_00b105b8 - iVar1;
    DAT_00b10600 = DAT_00b10600 + -1;
    (*DAT_00b0da18)(param_1);
    if (DAT_00b103d8 != (undefined8 *)0x0) {
      puVar2 = &DAT_00b0da80;
      param_1 = DAT_00b103d8;
      goto LAB_00596edc;
    }
  }
  lVar5 = *(long *)(lVar5 + 0x18);
joined_r0x00596e60:
  if (lVar5 != 0) {
    (*DAT_00b0da80)();
  }
  sqlite3_finalize(uVar4);
  return;
}


// ===== 00596f2c  sqlite3_blob_read =====

void sqlite3_blob_read(void)

{
  FUN_00596f38();
  return;
}


// ===== 00596f38  FUN_00596f38 =====

undefined4 FUN_00596f38(int *param_1,undefined8 param_2,ulong param_3,uint param_4,code *param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if (param_1 == (int *)0x0) {
    sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x19621,
                "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
    return 0x15;
  }
  lVar6 = *(long *)(param_1 + 8);
  if (*(long *)(lVar6 + 0x18) != 0) {
    param_3 = param_3 & 0xffffffff;
    (*DAT_00b0da70)();
  }
  if (((int)(param_4 | (uint)param_3) < 0) ||
     ((long)*param_1 < (long)((ulong)param_4 + (param_3 & 0xffffffff)))) {
    iVar2 = 1;
    *(undefined4 *)(lVar6 + 0x50) = 1;
LAB_00597094:
    FUN_005ac5c0(lVar6,iVar2);
  }
  else {
    lVar7 = *(long *)(param_1 + 6);
    if (lVar7 == 0) {
LAB_0059707c:
      iVar2 = 4;
      *(undefined4 *)(lVar6 + 0x50) = 4;
      goto LAB_00597094;
    }
    lVar4 = *(long *)(param_1 + 4);
    lVar5 = *(long *)(lVar4 + 8);
    if ((*(char *)(lVar5 + 0x11) != '\0') &&
       (*(int *)(lVar5 + 0x14) = *(int *)(lVar5 + 0x14) + 1, *(char *)(lVar5 + 0x12) == '\0')) {
      param_3 = param_3 & 0xffffffff;
      FUN_005ac65c(lVar5);
      lVar4 = *(long *)(param_1 + 4);
    }
    iVar2 = (*param_5)(lVar4,param_1[1] + param_4,param_3,param_2);
    lVar4 = *(long *)(*(long *)(param_1 + 4) + 8);
    if ((*(char *)(lVar4 + 0x11) != '\0') &&
       (iVar1 = *(int *)(lVar4 + 0x14) + -1, *(int *)(lVar4 + 0x14) = iVar1, iVar1 == 0)) {
      FUN_005ac750(lVar4);
    }
    if (iVar2 == 4) {
      if (*(char *)(lVar7 + 199) != '\0') {
        FUN_0058f640(lVar7);
      }
      FUN_0058077c(lVar7);
      param_1[6] = 0;
      param_1[7] = 0;
      goto LAB_0059707c;
    }
    *(int *)(lVar7 + 0x34) = iVar2;
    *(int *)(lVar6 + 0x50) = iVar2;
    if (iVar2 != 0) goto LAB_00597094;
    if (*(long *)(lVar6 + 0x188) == 0) {
      *(undefined4 *)(lVar6 + 0x54) = 0xffffffff;
    }
    else {
      FUN_005ac5c0(lVar6,0);
    }
    iVar2 = 0;
    uVar3 = 0;
    if (*(char *)(lVar6 + 0x67) == '\0') goto LAB_005970b0;
  }
  uVar3 = FUN_005c1188(lVar6,iVar2);
LAB_005970b0:
  if (*(long *)(lVar6 + 0x18) != 0) {
    (*DAT_00b0da80)();
  }
  return uVar3;
}


// ===== 00597114  FUN_00597114 =====

void FUN_00597114(char *param_1)

{
  if (*param_1 != '\0') {
    FUN_005e8c64();
    return;
  }
  FUN_005b8900();
  return;
}


// ===== 00597128  sqlite3_blob_write =====

void sqlite3_blob_write(void)

{
  FUN_00596f38();
  return;
}


// ===== 00597134  FUN_00597134 =====

undefined8 FUN_00597134(byte *param_1,ulong param_2,ulong param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  byte *pbVar3;
  byte bVar4;
  
  bVar4 = *param_1;
  if (2 < bVar4) {
    param_2 = param_2 & 0xffffffff;
    param_3 = param_3 & 0xffffffff;
    uVar2 = FUN_005d91e4(param_1);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    bVar4 = *param_1;
  }
  if (bVar4 != 0) {
    return 4;
  }
  pbVar3 = *(byte **)(*(long *)(param_1 + 0x20) + 0x10);
  if (pbVar3 != (byte *)0x0) {
    iVar1 = *(int *)(param_1 + 0x50);
    if (iVar1 == 0) {
      do {
        if (pbVar3 != param_1) goto LAB_005971ec;
        pbVar3 = *(byte **)(param_1 + 0x28);
      } while (pbVar3 != (byte *)0x0);
    }
    else {
      do {
        if ((pbVar3 != param_1) && (*(int *)(pbVar3 + 0x50) == iVar1)) goto LAB_005971ec;
        pbVar3 = *(byte **)(pbVar3 + 0x28);
      } while (pbVar3 != (byte *)0x0);
    }
  }
  bVar4 = param_1[1];
  param_1[1] = bVar4 & 0xdf;
joined_r0x0059723c:
  if ((bVar4 & 1) == 0) {
    return 8;
  }
  uVar2 = FUN_005b8900(param_1,param_2,param_3,param_4,1);
  return uVar2;
LAB_005971ec:
  param_2 = param_2 & 0xffffffff;
  param_3 = param_3 & 0xffffffff;
  FUN_005b84c4(pbVar3,iVar1,param_1,param_4);
  bVar4 = param_1[1];
  goto joined_r0x0059723c;
}


// ===== 00597254  sqlite3_blob_bytes =====

uint * sqlite3_blob_bytes(uint *param_1)

{
  if (param_1 != (uint *)0x0) {
    if (*(long *)(param_1 + 6) == 0) {
      return (uint *)0x0;
    }
    param_1 = (uint *)(ulong)*param_1;
  }
  return param_1;
}


// ===== 00597270  sqlite3_blob_reopen =====

undefined4 sqlite3_blob_reopen(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long local_18;
  
  if (param_1 == 0) {
    sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x19685,
                "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
    return 0x15;
  }
  lVar4 = *(long *)(param_1 + 0x20);
  if (*(long *)(lVar4 + 0x18) != 0) {
    (*DAT_00b0da70)(*(long *)(lVar4 + 0x18));
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    iVar2 = 4;
  }
  else {
    *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x34) = 0;
    iVar2 = FUN_00596840(param_1,param_2,&local_18);
    if (iVar2 == 0) {
      uVar3 = 0;
      if (*(char *)(lVar4 + 0x67) == '\0') goto LAB_00597364;
    }
    else {
      puVar1 = (undefined *)0x0;
      if (local_18 != 0) {
        puVar1 = &DAT_002ad0ce;
      }
      FUN_0058c8b8(lVar4,iVar2,puVar1,local_18);
      FUN_005869c8(lVar4,local_18);
    }
  }
  uVar3 = FUN_005c1188(lVar4,iVar2);
LAB_00597364:
  if (*(long *)(lVar4 + 0x18) == 0) {
    return uVar3;
  }
  (*DAT_00b0da80)();
  return uVar3;
}


// ===== 0059738c  sqlite3_set_authorizer =====

undefined8 sqlite3_set_authorizer(long param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  char *pcVar2;
  long lVar3;
  
  if (param_1 == 0) {
    pcVar2 = "NULL";
  }
  else {
    cVar1 = *(char *)(param_1 + 0x71);
    if (cVar1 != -0x46) {
      if (cVar1 == 'v') {
        if (*(long *)(param_1 + 0x18) != 0) {
          (*DAT_00b0da70)(*(long *)(param_1 + 0x18));
        }
        *(long *)(param_1 + 0x1f8) = param_2;
        *(undefined8 *)(param_1 + 0x200) = param_3;
        if (param_2 != 0) {
          for (lVar3 = *(long *)(param_1 + 8); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x10)) {
            *(ushort *)(lVar3 + 200) = *(ushort *)(lVar3 + 200) & 0xfffc | 2;
          }
        }
        if (*(long *)(param_1 + 0x18) != 0) {
          (*DAT_00b0da80)();
        }
        return 0;
      }
      if (cVar1 != 'm') {
        pcVar2 = "invalid";
        goto LAB_00597460;
      }
    }
    pcVar2 = "unopened";
  }
LAB_00597460:
  sqlite3_log(0x15,"API call with %s database connection pointer",pcVar2);
  sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x1dfa6,
              "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
  return 0x15;
}


// ===== 005974b0  sqlite3_strglob =====

ulong sqlite3_strglob(long param_1,long param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return (ulong)(param_1 != 0);
  }
  if (param_1 != 0) {
    uVar1 = FUN_005974dc(param_1,param_2,&DAT_002c7a00,0x5b);
    return uVar1;
  }
  return 1;
}


// ===== 005974dc  FUN_005974dc =====

uint FUN_005974dc(byte *param_1,byte *param_2,byte *param_3,ulong param_4)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  size_t sVar4;
  byte *pbVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  byte *pbVar9;
  bool bVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  byte bVar15;
  char local_5c;
  undefined1 local_5b;
  undefined1 local_5a;
  byte *local_58;
  
  pbVar9 = (byte *)0x0;
  bVar15 = param_3[3];
LAB_00597528:
  do {
    local_58 = param_1 + 1;
    uVar8 = (uint)*param_1;
    uVar13 = (uint)param_3[1];
    if ((char)*param_1 < '\0') {
      if (uVar8 < 0xc0) goto LAB_005975a0;
      uVar6 = (uint)*local_58;
      uVar8 = (uint)(byte)(&DAT_002c81c0)[uVar8 - 0xc0];
      if ((*local_58 & 0xc0) == 0x80) {
        do {
          local_58 = local_58 + 1;
          uVar8 = uVar6 & 0x3f | uVar8 << 6;
          uVar6 = (uint)*local_58;
        } while ((uVar6 & 0xc0) == 0x80);
      }
      uVar7 = 0xfffd;
      if (((uVar8 >> 1 != 0x7fff) && (0x7f < uVar8)) && ((uVar8 & 0xfffff800) != 0xd800))
      goto LAB_005975a0;
    }
    else {
      if (uVar8 == 0) {
        return (uint)(*param_2 != 0);
      }
LAB_005975a0:
      if (uVar8 == *param_3) {
        while( true ) {
          pbVar9 = local_58 + 1;
          bVar1 = *local_58;
          uVar8 = (uint)bVar1;
          local_58 = pbVar9;
          if (0xbf < bVar1) {
            uVar8 = (uint)*pbVar9;
            uVar6 = (uint)(byte)(&DAT_002c81c0)[bVar1 - 0xc0];
            if ((*pbVar9 & 0xc0) == 0x80) {
              do {
                pbVar9 = pbVar9 + 1;
                uVar6 = uVar8 & 0x3f | uVar6 << 6;
                uVar8 = (uint)*pbVar9;
              } while ((uVar8 & 0xc0) == 0x80);
            }
            uVar8 = 0xfffd;
            local_58 = pbVar9;
            if ((0x7f < uVar6 && uVar6 >> 1 != 0x7fff) && uVar6 >> 0xb != 0x1b) {
              uVar8 = uVar6;
            }
          }
          if ((uVar8 != *param_3) && (uVar13 == 0 || uVar8 != uVar13)) break;
          if (uVar8 == uVar13) {
            pbVar9 = param_2 + 1;
            bVar1 = *param_2;
            if (bVar1 < 0xc0) {
              param_2 = pbVar9;
              if (bVar1 == 0) {
                return 2;
              }
            }
            else {
              bVar1 = *pbVar9;
              while (param_2 = pbVar9, (bVar1 & 0xc0) == 0x80) {
                pbVar9 = pbVar9 + 1;
                bVar1 = *pbVar9;
              }
            }
          }
        }
        if (uVar8 == 0) {
          return 0;
        }
        uVar7 = param_4 & 0xffffffff;
        if (uVar8 == (uint)param_4) {
          if (param_3[2] != 0) {
            bVar15 = *param_2;
            if (bVar15 == 0) {
              return 2;
            }
            pbVar9 = local_58 + -1;
            do {
              uVar8 = FUN_005974dc(pbVar9,param_2,param_3,param_4);
              if (uVar8 != 1) {
                return uVar8;
              }
              if (bVar15 < 0xc0) {
                param_2 = param_2 + 1;
                bVar15 = *param_2;
              }
              else {
                do {
                  param_2 = param_2 + 1;
                  bVar15 = *param_2;
                } while ((bVar15 & 0xc0) == 0x80);
              }
              param_4 = uVar7;
            } while (bVar15 != 0);
            return 2;
          }
          uVar8 = FUN_005ea6c0(&local_58);
          if (uVar8 == 0) {
            return 2;
          }
        }
        pbVar9 = local_58;
        if (uVar8 < 0x80) {
          if (bVar15 == 0) {
            local_5b = 0;
          }
          else {
            local_5a = 0;
            local_5b = (&DAT_002c78ae)[uVar8];
            uVar8 = uVar8 & (~(uint)(byte)(&DAT_002c7a08)[uVar8] | 0xffffffdf);
          }
          local_5c = (char)uVar8;
          do {
            sVar4 = strcspn((char *)param_2,&local_5c);
            if (param_2[sVar4] == 0) {
              return 2;
            }
            param_2 = param_2 + sVar4 + 1;
            uVar8 = FUN_005974dc(pbVar9,param_2,param_3,uVar7);
          } while (uVar8 == 1);
          return uVar8;
        }
        do {
          pbVar5 = param_2 + 1;
          uVar13 = (uint)*param_2;
          if ((char)*param_2 < '\0') {
            if (0xbf < uVar13) {
              uVar14 = (uint)*pbVar5;
              uVar6 = (uint)(byte)(&DAT_002c81c0)[uVar13 - 0xc0];
              if ((*pbVar5 & 0xc0) == 0x80) {
                do {
                  pbVar5 = pbVar5 + 1;
                  uVar6 = uVar14 & 0x3f | uVar6 << 6;
                  uVar14 = (uint)*pbVar5;
                } while ((uVar14 & 0xc0) == 0x80);
              }
              uVar13 = 0xfffd;
              if ((0x7f < uVar6 && uVar6 >> 1 != 0x7fff) && uVar6 >> 0xb != 0x1b) {
                uVar13 = uVar6;
              }
            }
          }
          else if (uVar13 == 0) {
            return 2;
          }
          param_2 = pbVar5;
        } while ((uVar13 != uVar8) ||
                (uVar13 = FUN_005974dc(pbVar9,pbVar5,param_3,uVar7), uVar13 == 1));
        return uVar13;
      }
      uVar7 = (ulong)uVar8;
    }
    uVar8 = 0xfffd;
    param_1 = local_58;
    if ((uint)uVar7 == (uint)param_4) {
      if (param_3[2] != 0) {
        pbVar5 = param_2 + 1;
        bVar1 = *param_2;
        if (bVar1 < 0xc0) {
          uVar13 = (uint)bVar1;
          if (bVar1 == 0) {
            return 1;
          }
        }
        else {
          uVar13 = (uint)*pbVar5;
          uVar6 = (uint)(byte)(&DAT_002c81c0)[bVar1 - 0xc0];
          if ((*pbVar5 & 0xc0) == 0x80) {
            do {
              pbVar5 = pbVar5 + 1;
              uVar6 = uVar13 & 0x3f | uVar6 << 6;
              uVar13 = (uint)*pbVar5;
            } while ((uVar13 & 0xc0) == 0x80);
          }
          uVar13 = uVar8;
          if ((0x7f < uVar6 && uVar6 >> 1 != 0x7fff) && uVar6 >> 0xb != 0x1b) {
            uVar13 = uVar6;
          }
        }
        param_1 = local_58 + 1;
        bVar1 = *local_58;
        uVar6 = uVar8;
        if (bVar1 < 0xc0) {
          if (bVar1 == 0x5e) {
            pbVar3 = local_58 + 2;
            bVar1 = local_58[1];
            if (0xbf < bVar1) {
              uVar11 = (uint)*pbVar3;
              uVar14 = (uint)(byte)(&DAT_002c81c0)[bVar1 - 0xc0];
              if ((*pbVar3 & 0xc0) == 0x80) {
                do {
                  pbVar3 = pbVar3 + 1;
                  uVar14 = uVar11 & 0x3f | uVar14 << 6;
                  uVar11 = (uint)*pbVar3;
                } while ((uVar11 & 0xc0) == 0x80);
              }
              bVar2 = false;
              if ((0x7f < uVar14 && uVar14 >> 1 != 0x7fff) && uVar14 >> 0xb != 0x1b) {
                uVar6 = uVar14;
              }
              bVar10 = true;
              param_1 = pbVar3;
              goto LAB_00597784;
            }
            bVar10 = true;
          }
          else {
            bVar10 = false;
            pbVar3 = param_1;
          }
          if (bVar1 == 0x5d) {
            param_1 = pbVar3 + 1;
            bVar2 = uVar13 == 0x5d;
            bVar1 = *pbVar3;
            uVar6 = (uint)bVar1;
            if (0xbf < bVar1) {
              uVar6 = (uint)*param_1;
              uVar14 = (uint)(byte)(&DAT_002c81c0)[bVar1 - 0xc0];
              if ((*param_1 & 0xc0) == 0x80) {
                do {
                  param_1 = param_1 + 1;
                  uVar14 = uVar6 & 0x3f | uVar14 << 6;
                  uVar6 = (uint)*param_1;
                } while ((uVar6 & 0xc0) == 0x80);
              }
              uVar6 = uVar8;
              if ((0x7f < uVar14 && uVar14 >> 1 != 0x7fff) && uVar14 >> 0xb != 0x1b) {
                uVar6 = uVar14;
              }
            }
          }
          else {
            bVar2 = false;
            param_1 = pbVar3;
            uVar6 = (uint)bVar1;
          }
        }
        else {
          uVar11 = (uint)*param_1;
          uVar14 = (uint)(byte)(&DAT_002c81c0)[bVar1 - 0xc0];
          if ((*param_1 & 0xc0) == 0x80) {
            do {
              param_1 = param_1 + 1;
              uVar14 = uVar11 & 0x3f | uVar14 << 6;
              uVar11 = (uint)*param_1;
            } while ((uVar11 & 0xc0) == 0x80);
          }
          bVar10 = false;
          bVar2 = false;
          if ((0x7f < uVar14 && uVar14 >> 1 != 0x7fff) && uVar14 >> 0xb != 0x1b) {
            uVar6 = uVar14;
          }
        }
LAB_00597784:
        uVar14 = 0;
LAB_005977a4:
        if (uVar6 == 0x2d) {
          bVar1 = *param_1;
          if (((bVar1 == 0x5d) || (uVar14 == 0)) || (bVar1 == 0)) goto LAB_005977c8;
          param_1 = param_1 + 1;
          uVar6 = (uint)bVar1;
          if (0xbf < bVar1) {
            uVar6 = (uint)*param_1;
            uVar11 = (uint)(byte)(&DAT_002c81c0)[bVar1 - 0xc0];
            if ((*param_1 & 0xc0) == 0x80) {
              do {
                param_1 = param_1 + 1;
                uVar11 = uVar6 & 0x3f | uVar11 << 6;
                uVar6 = (uint)*param_1;
              } while ((uVar6 & 0xc0) == 0x80);
            }
            uVar6 = uVar8;
            if ((0x7f < uVar11 && uVar11 >> 1 != 0x7fff) && uVar11 >> 0xb != 0x1b) {
              uVar6 = uVar11;
            }
          }
          if (uVar13 <= uVar6 && uVar14 <= uVar13) {
            bVar2 = true;
          }
          bVar1 = *param_1;
          uVar14 = 0;
        }
        else {
          if (uVar6 == 0) {
            return 1;
          }
          if (uVar6 == 0x5d) break;
LAB_005977c8:
          if (uVar13 == uVar6) {
            bVar2 = true;
          }
          bVar1 = *param_1;
          uVar14 = uVar6;
        }
        param_1 = param_1 + 1;
        uVar6 = (uint)bVar1;
        if (0xbf < bVar1) {
          uVar6 = (uint)*param_1;
          uVar7 = (ulong)(byte)(&DAT_002c81c0)[bVar1 - 0xc0];
          if ((*param_1 & 0xc0) == 0x80) {
            do {
              param_1 = param_1 + 1;
              uVar11 = uVar6 & 0x3f;
              uVar6 = (uint)*param_1;
              uVar7 = (ulong)(uVar11 | (int)uVar7 << 6);
            } while ((uVar6 & 0xc0) == 0x80);
          }
          uVar11 = (uint)uVar7;
          uVar6 = uVar8;
          if ((0x7f < uVar11 && (int)(uVar7 >> 1) != 0x7fff) && uVar11 >> 0xb != 0x1b) {
            uVar6 = uVar11;
          }
        }
        goto LAB_005977a4;
      }
      pbVar9 = local_58 + 1;
      bVar1 = *local_58;
      uVar7 = (ulong)bVar1;
      if (bVar1 < 0xc0) {
        param_1 = pbVar9;
        if (bVar1 == 0) {
          return 1;
        }
      }
      else {
        uVar14 = (uint)*pbVar9;
        uVar6 = (uint)(byte)(&DAT_002c81c0)[bVar1 - 0xc0];
        if ((*pbVar9 & 0xc0) == 0x80) {
          do {
            pbVar9 = pbVar9 + 1;
            uVar6 = uVar14 & 0x3f | uVar6 << 6;
            uVar14 = (uint)*pbVar9;
          } while ((uVar14 & 0xc0) == 0x80);
        }
        uVar14 = uVar8;
        if ((0x7f < uVar6 && uVar6 >> 1 != 0x7fff) && uVar6 >> 0xb != 0x1b) {
          uVar14 = uVar6;
        }
        uVar7 = (ulong)uVar14;
        param_1 = pbVar9;
      }
    }
    pbVar5 = param_2 + 1;
    bVar1 = *param_2;
    uVar12 = (ulong)bVar1;
    param_2 = pbVar5;
    if (0xbf < bVar1) {
      uVar14 = (uint)*pbVar5;
      uVar6 = (uint)(byte)(&DAT_002c81c0)[bVar1 - 0xc0];
      if ((*pbVar5 & 0xc0) == 0x80) {
        do {
          pbVar5 = pbVar5 + 1;
          uVar6 = uVar14 & 0x3f | uVar6 << 6;
          uVar14 = (uint)*pbVar5;
        } while ((uVar14 & 0xc0) == 0x80);
      }
      if ((0x7f < uVar6 && uVar6 >> 1 != 0x7fff) && uVar6 >> 0xb != 0x1b) {
        uVar8 = uVar6;
      }
      uVar12 = (ulong)uVar8;
      param_2 = pbVar5;
    }
    uVar8 = (uint)uVar7;
    uVar6 = (uint)uVar12;
    if ((uVar8 != uVar6) &&
       (((bVar15 == 0 || (0x7f < (uVar6 | uVar8))) ||
        ((&DAT_002c78ae)[uVar7 & 0xff] != (&DAT_002c78ae)[uVar12 & 0xff])))) {
      if (uVar8 != uVar13) {
        return 1;
      }
      if (uVar6 == 0) {
        return 1;
      }
      if (param_1 == pbVar9) {
        return 1;
      }
    }
  } while( true );
  param_2 = pbVar5;
  if (bVar2 == bVar10) {
    return 1;
  }
  goto LAB_00597528;
}


// ===== 00597c88  sqlite3_strlike =====

ulong sqlite3_strlike(long param_1,long param_2,undefined4 param_3)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return (ulong)(param_1 != 0);
  }
  if (param_1 != 0) {
    uVar1 = FUN_005974dc(param_1,param_2,&DAT_002c7a04,param_3);
    return uVar1;
  }
  return 1;
}


// ===== 00597cb4  sqlite3_errmsg =====

char * sqlite3_errmsg(long param_1)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  char *pcVar5;
  
  if (param_1 == 0) {
    return "out of memory";
  }
  cVar1 = *(char *)(param_1 + 0x71);
  if (((cVar1 != 'm') && (cVar1 != 'v')) && (cVar1 != -0x46)) {
    sqlite3_log(0x15,"API call with %s database connection pointer","invalid");
    sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x2d3d0,
                "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
    return "bad parameter or other API misuse";
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    (*DAT_00b0da70)(*(long *)(param_1 + 0x18));
  }
  if (*(char *)(param_1 + 0x67) != '\0') {
    pcVar5 = "out of memory";
    goto LAB_00597d10;
  }
  uVar4 = *(uint *)(param_1 + 0x50);
  if (uVar4 == 0) {
    uVar3 = 0;
LAB_00597ddc:
    if ((0x1410004U >> (uVar3 & 0x3f) & 1) == 0) {
      pcVar5 = (&PTR_s_not_an_error_00ad3f40)[uVar3];
      goto LAB_00597d10;
    }
  }
  else {
    lVar2 = *(long *)(param_1 + 0x188);
    if (lVar2 != 0) {
      if ((((*(ushort *)(lVar2 + 0x14) ^ 0xffff) & 0x202) == 0) &&
         (*(char *)(lVar2 + 0x16) == '\x01')) {
        pcVar5 = *(char **)(lVar2 + 8);
      }
      else {
        if ((*(ushort *)(lVar2 + 0x14) & 1) != 0) goto LAB_00597e20;
        pcVar5 = (char *)FUN_005c17b0(lVar2,1);
      }
      if (pcVar5 != (char *)0x0) goto LAB_00597d10;
      uVar4 = *(uint *)(param_1 + 0x50);
    }
LAB_00597e20:
    if (uVar4 == 0x204) {
      pcVar5 = "abort due to ROLLBACK";
      goto LAB_00597d10;
    }
    if (uVar4 == 0x65) {
      pcVar5 = "no more rows available";
      goto LAB_00597d10;
    }
    if (uVar4 == 100) {
      pcVar5 = "another row available";
      goto LAB_00597d10;
    }
    uVar3 = (ulong)(uVar4 & 0xff);
    if ((uVar4 & 0xff) < 0x1d) goto LAB_00597ddc;
  }
  pcVar5 = "unknown error";
LAB_00597d10:
  if (*(long *)(param_1 + 0x18) != 0) {
    (*DAT_00b0da80)();
  }
  return pcVar5;
}


// ===== 00597e74  sqlite3_load_extension =====

ulong sqlite3_load_extension(long *param_1,byte *param_2,char *param_3,long *param_4)

{
  byte bVar1;
  int iVar2;
  size_t sVar3;
  code *pcVar4;
  size_t sVar5;
  long lVar6;
  long lVar7;
  char *pcVar8;
  void *__s;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  byte *pbVar12;
  undefined8 *puVar13;
  byte *pbVar14;
  char cVar15;
  int iVar16;
  char *pcVar17;
  long lVar18;
  uint uVar19;
  char *local_68;
  
  if (param_1[3] != 0) {
    (*DAT_00b0da70)();
  }
  lVar18 = *param_1;
  local_68 = (char *)0x0;
  sVar3 = strlen((char *)param_2);
  if (param_4 == (long *)0x0) {
    if ((*(byte *)((long)param_1 + 0x32) & 1) != 0) goto LAB_00597efc;
    goto LAB_00598574;
  }
  *param_4 = 0;
  if ((*(byte *)((long)param_1 + 0x32) & 1) == 0) {
    lVar18 = sqlite3_mprintf("not authorized");
    uVar10 = 1;
    *param_4 = lVar18;
  }
  else {
LAB_00597efc:
    pcVar17 = "sqlite3_extension_init";
    if (param_3 != (char *)0x0) {
      pcVar17 = param_3;
    }
    if (sVar3 - 0x1001 < 0xfffffffffffff000) {
LAB_00597f1c:
      if (param_4 != (long *)0x0) {
        iVar2 = sqlite3_initialize();
        if (iVar2 == 0) {
          lVar7 = FUN_005827b0(sVar3 + 300);
          *param_4 = lVar7;
          if (lVar7 != 0) {
            sqlite3_snprintf(sVar3 + 300 & 0xffffffff,lVar7,"unable to open shared library [%.*s]",
                             0x1000,param_2);
            (**(code **)(lVar18 + 0x50))(lVar18,(int)sVar3 + 299,lVar7);
          }
        }
        else {
          *param_4 = 0;
        }
      }
      goto LAB_00598574;
    }
    lVar7 = (**(code **)(lVar18 + 0x48))(lVar18,param_2);
    if (lVar7 == 0) {
      pcVar8 = (char *)sqlite3_mprintf("%s.%s",param_2,&DAT_002a825f);
      if (pcVar8 != (char *)0x0) {
        if (sVar3 < 0xffe) {
          lVar7 = (**(code **)(lVar18 + 0x48))(lVar18,pcVar8);
          puVar13 = &DAT_00b0da18;
          if (DAT_00b0d9f0 == 0) goto LAB_00598218;
LAB_005981a4:
          if (DAT_00b103d8 != (char *)0x0) {
            (*DAT_00b0da70)();
          }
          iVar2 = (*DAT_00b0da28)(pcVar8);
          DAT_00b105b8 = DAT_00b105b8 - iVar2;
          DAT_00b10600 = DAT_00b10600 + -1;
          (*DAT_00b0da18)(pcVar8);
          if (DAT_00b103d8 != (char *)0x0) {
            puVar13 = &DAT_00b0da80;
            pcVar8 = DAT_00b103d8;
            goto LAB_00598218;
          }
        }
        else {
          lVar7 = 0;
          puVar13 = &DAT_00b0da18;
          if (DAT_00b0d9f0 != 0) goto LAB_005981a4;
LAB_00598218:
          (*(code *)*puVar13)(pcVar8);
        }
        if (lVar7 == 0) goto LAB_00597f1c;
        goto LAB_00597f48;
      }
LAB_005982a4:
      uVar10 = 7;
    }
    else {
LAB_00597f48:
      pcVar4 = (code *)(**(code **)(lVar18 + 0x58))(lVar18,lVar7,pcVar17);
      if (param_3 == (char *)0x0 && pcVar4 == (code *)0x0) {
        if (param_2 == (byte *)0x0) {
          uVar19 = 0;
          iVar2 = sqlite3_initialize();
        }
        else {
          sVar5 = strlen((char *)param_2);
          uVar19 = (uint)sVar5 & 0x3fffffff;
          iVar2 = sqlite3_initialize();
        }
        if ((iVar2 != 0) || (pcVar8 = (char *)FUN_005827b0(uVar19 + 0x1e), pcVar8 == (char *)0x0)) {
          (**(code **)(lVar18 + 0x60))(lVar18,lVar7);
          uVar10 = 7;
          goto LAB_00598578;
        }
        builtin_strncpy(pcVar8,"sqlite3_",8);
        uVar9 = (ulong)uVar19;
        do {
          uVar11 = uVar9;
          if ((long)uVar11 < 1) {
            iVar2 = 0;
            pbVar14 = param_2;
            iVar16 = 0;
            if (param_2 == (byte *)0x0) goto LAB_005983dc;
            goto LAB_005982bc;
          }
          uVar9 = uVar11 - 1;
        } while (param_2[uVar11 - 1] != 0x2f);
        iVar2 = (int)uVar11;
        pbVar14 = param_2 + (uVar11 & 0xffffffff);
LAB_005982bc:
        bVar1 = *pbVar14;
        if (bVar1 == 0) {
          cVar15 = '\0';
          pbVar14 = &DAT_002a8262;
LAB_005983b8:
          iVar16 = iVar2 + 3;
          if (cVar15 != (&DAT_002c78ae)[*pbVar14]) {
            iVar16 = iVar2;
          }
        }
        else {
          if ((bVar1 & 0xdf) != 0x4c) {
            pcVar17 = &DAT_002c78ae + bVar1;
            pbVar14 = &DAT_002a8262;
LAB_005983b4:
            cVar15 = *pcVar17;
            goto LAB_005983b8;
          }
          bVar1 = pbVar14[1];
          if (bVar1 == 0) {
            cVar15 = '\0';
            pbVar14 = &DAT_002a8263;
            goto LAB_005983b8;
          }
          if ((bVar1 & 0xdf) != 0x49) {
            pcVar17 = &DAT_002c78ae + bVar1;
            pbVar14 = &DAT_002a8263;
            goto LAB_005983b4;
          }
          bVar1 = pbVar14[2];
          if (bVar1 == 0) {
            cVar15 = '\0';
            pbVar14 = &DAT_002a8264;
            goto LAB_005983b8;
          }
          if ((bVar1 & 0xdf) != 0x42) {
            pcVar17 = &DAT_002c78ae + bVar1;
            pbVar14 = &DAT_002a8264;
            goto LAB_005983b4;
          }
          iVar16 = iVar2 + 3;
        }
LAB_005983dc:
        pbVar14 = param_2 + iVar16;
        iVar2 = 8;
        while( true ) {
          pbVar12 = pbVar14 + 1;
          bVar1 = *pbVar14;
          if ((bVar1 == 0) || (bVar1 == 0x2e)) break;
          pbVar14 = pbVar12;
          if (((byte)(&DAT_002c7a08)[bVar1] >> 1 & 1) != 0) {
            pcVar8[iVar2] = (&DAT_002c78ae)[bVar1];
            iVar2 = iVar2 + 1;
          }
        }
        builtin_strncpy(pcVar8 + iVar2,"_init",6);
        pcVar4 = (code *)(**(code **)(lVar18 + 0x58))(lVar18,lVar7,pcVar8);
        pcVar17 = pcVar8;
        if (pcVar4 != (code *)0x0) {
          puVar13 = &DAT_00b0da18;
          if (DAT_00b0d9f0 != 0) {
            if (DAT_00b103d8 != (char *)0x0) {
              (*DAT_00b0da70)();
            }
            iVar2 = (*DAT_00b0da28)(pcVar8);
            DAT_00b105b8 = DAT_00b105b8 - iVar2;
            DAT_00b10600 = DAT_00b10600 + -1;
            (*DAT_00b0da18)(pcVar8);
            if (DAT_00b103d8 == (char *)0x0) goto LAB_00597f88;
            puVar13 = &DAT_00b0da80;
            pcVar8 = DAT_00b103d8;
          }
          (*(code *)*puVar13)(pcVar8);
          goto LAB_00597f88;
        }
joined_r0x00598170:
        if (param_4 != (long *)0x0) {
          sVar5 = strlen(pcVar17);
          iVar2 = sqlite3_initialize();
          if (iVar2 == 0) {
            uVar9 = sVar3 + sVar5 + 300;
            lVar6 = FUN_005827b0(uVar9);
            *param_4 = lVar6;
            if (lVar6 != 0) {
              sqlite3_snprintf(uVar9 & 0xffffffff,lVar6,"no entry point [%s] in shared library [%s]"
                               ,pcVar17,param_2);
              (**(code **)(lVar18 + 0x50))(lVar18,(int)uVar9 + -1,lVar6);
            }
          }
          else {
            *param_4 = 0;
          }
        }
        (**(code **)(lVar18 + 0x60))(lVar18,lVar7);
        if (pcVar8 != (char *)0x0) {
          puVar13 = &DAT_00b0da18;
          if (DAT_00b0d9f0 != 0) {
            if (DAT_00b103d8 != (char *)0x0) {
              (*DAT_00b0da70)();
            }
            iVar2 = (*DAT_00b0da28)(pcVar8);
            DAT_00b105b8 = DAT_00b105b8 - iVar2;
            DAT_00b10600 = DAT_00b10600 + -1;
            (*DAT_00b0da18)(pcVar8);
            if (DAT_00b103d8 == (char *)0x0) goto LAB_00598574;
            puVar13 = &DAT_00b0da80;
            pcVar8 = DAT_00b103d8;
          }
          (*(code *)*puVar13)(pcVar8);
        }
LAB_00598574:
        uVar10 = 1;
      }
      else {
        if (pcVar4 == (code *)0x0) {
          pcVar8 = (char *)0x0;
          goto joined_r0x00598170;
        }
LAB_00597f88:
        iVar2 = (*pcVar4)(param_1,&local_68,&PTR_sqlite3_aggregate_context_00ad31b8);
        if (iVar2 == 0) {
          lVar18 = (long)*(int *)((long)param_1 + 0xe4) * 8;
          __s = (void *)FUN_005a76c8(param_1,lVar18 + 8);
          if (__s == (void *)0x0) goto LAB_005982a4;
          memset(__s,0,lVar18 + 8);
          if (0 < (int)*(uint *)((long)param_1 + 0xe4)) {
            memcpy(__s,(void *)param_1[0x1d],(ulong)*(uint *)((long)param_1 + 0xe4) << 3);
          }
          FUN_005869c8(param_1,param_1[0x1d]);
          iVar2 = *(int *)((long)param_1 + 0xe4);
          param_1[0x1d] = (long)__s;
          *(long *)((long)__s + (long)iVar2 * 8) = lVar7;
          *(int *)((long)param_1 + 0xe4) = iVar2 + 1;
        }
        else if (iVar2 != 0x100) {
          if (param_4 != (long *)0x0) {
            lVar6 = sqlite3_mprintf("error during initialization: %s",local_68);
            *param_4 = lVar6;
          }
          pcVar17 = local_68;
          if (local_68 != (char *)0x0) {
            puVar13 = &DAT_00b0da18;
            if (DAT_00b0d9f0 != 0) {
              if (DAT_00b103d8 != (char *)0x0) {
                (*DAT_00b0da70)();
              }
              iVar2 = (*DAT_00b0da28)(pcVar17);
              DAT_00b105b8 = DAT_00b105b8 - iVar2;
              DAT_00b10600 = DAT_00b10600 + -1;
              (*DAT_00b0da18)(pcVar17);
              if (DAT_00b103d8 == (char *)0x0) goto LAB_00598048;
              puVar13 = &DAT_00b0da80;
              pcVar17 = DAT_00b103d8;
            }
            (*(code *)*puVar13)(pcVar17);
          }
LAB_00598048:
          (**(code **)(lVar18 + 0x60))(lVar18,lVar7);
          goto LAB_00598574;
        }
        uVar10 = 0;
        uVar9 = 0;
        if (*(char *)((long)param_1 + 0x67) == '\0') goto LAB_00598580;
      }
    }
  }
LAB_00598578:
  uVar9 = FUN_005c1188(param_1,uVar10);
LAB_00598580:
  if (param_1[3] != 0) {
    uVar9 = uVar9 & 0xffffffff;
    (*DAT_00b0da80)(param_1[3]);
  }
  return uVar9;
}


// ===== 005985c0  sqlite3_enable_load_extension =====

undefined8 sqlite3_enable_load_extension(long param_1,int param_2)

{
  ulong uVar1;
  char cVar2;
  char *pcVar3;
  
  if (param_1 == 0) {
    pcVar3 = "NULL";
  }
  else {
    cVar2 = *(char *)(param_1 + 0x71);
    if (cVar2 != -0x46) {
      if (cVar2 == 'v') {
        if (*(long *)(param_1 + 0x18) != 0) {
          (*DAT_00b0da70)(*(long *)(param_1 + 0x18));
        }
        uVar1 = 0;
        if (param_2 != 0) {
          uVar1 = 0x30000;
        }
        *(ulong *)(param_1 + 0x30) = *(ulong *)(param_1 + 0x30) & 0xfffffffffffcffff | uVar1;
        if (*(long *)(param_1 + 0x18) != 0) {
          (*DAT_00b0da80)(*(long *)(param_1 + 0x18));
        }
        return 0;
      }
      if (cVar2 != 'm') {
        pcVar3 = "invalid";
        goto LAB_0059867c;
      }
    }
    pcVar3 = "unopened";
  }
LAB_0059867c:
  sqlite3_log(0x15,"API call with %s database connection pointer",pcVar3);
  sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x22210,
              "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
  return 0x15;
}


// ===== 005986c8  sqlite3_auto_extension =====

undefined8 sqlite3_auto_extension(long param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_1 == 0) {
    sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x22244,
                "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
    return 0x15;
  }
  uVar3 = sqlite3_initialize();
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  if (DAT_00b0d9f4 == '\0') {
    lVar4 = 0;
joined_r0x005987c0:
    bVar1 = true;
    uVar7 = (ulong)DAT_00b10358;
    if (DAT_00b10358 != 0) goto LAB_00598788;
LAB_005987c4:
    uVar6 = 0;
LAB_005987c8:
    if ((int)uVar6 == (int)uVar7) goto LAB_005987d0;
  }
  else {
    lVar4 = (*DAT_00b0da60)(2);
    if (lVar4 == 0) goto joined_r0x005987c0;
    (*DAT_00b0da70)(lVar4);
    bVar1 = false;
    uVar7 = (ulong)DAT_00b10358;
    if (DAT_00b10358 == 0) goto LAB_005987c4;
LAB_00598788:
    uVar6 = 0;
    do {
      if (*(long *)(DAT_00b10380 + uVar6 * 8) == param_1) goto LAB_005987c8;
      uVar6 = uVar6 + 1;
    } while (uVar7 != uVar6);
LAB_005987d0:
    lVar5 = DAT_00b10380;
    iVar2 = sqlite3_initialize();
    if ((iVar2 != 0) || (lVar5 = FUN_00582b2c(lVar5,(ulong)((int)uVar7 + 1) << 3), lVar5 == 0)) {
      uVar3 = 7;
      goto joined_r0x005987e0;
    }
    DAT_00b10380 = lVar5;
    *(long *)(lVar5 + (ulong)DAT_00b10358 * 8) = param_1;
    DAT_00b10358 = DAT_00b10358 + 1;
  }
  uVar3 = 0;
joined_r0x005987e0:
  if (bVar1) {
    return uVar3;
  }
  (*DAT_00b0da80)(lVar4);
  return uVar3;
}


// ===== 00598874  sqlite3_cancel_auto_extension =====

ulong sqlite3_cancel_auto_extension(ulong param_1)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  
  if (DAT_00b0d9f4 == '\0') {
    if (param_1 == 0) goto LAB_00598938;
    lVar3 = 0;
LAB_005988cc:
    bVar2 = true;
  }
  else {
    lVar3 = (*DAT_00b0da60)(2);
    if (param_1 == 0) goto LAB_00598938;
    if (lVar3 == 0) goto LAB_005988cc;
    (*DAT_00b0da70)();
    bVar2 = false;
  }
  uVar4 = (ulong)DAT_00b10358;
  do {
    if ((int)uVar4 < 1) {
      param_1 = 0;
      if (bVar2) goto LAB_00598938;
      goto LAB_0059892c;
    }
    lVar1 = uVar4 * 8;
    uVar4 = uVar4 - 1;
  } while (*(ulong *)(DAT_00b10380 + lVar1 + -8) != param_1);
  DAT_00b10358 = DAT_00b10358 - 1;
  param_1 = 1;
  *(undefined8 *)(DAT_00b10380 + uVar4 * 8) =
       *(undefined8 *)(DAT_00b10380 + (ulong)DAT_00b10358 * 8);
  if (!bVar2) {
LAB_0059892c:
    (*DAT_00b0da80)(lVar3);
  }
LAB_00598938:
  return param_1 & 0xffffffff;
}


// ===== 00598948  sqlite3_reset_auto_extension =====

void sqlite3_reset_auto_extension(void)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  
  iVar2 = sqlite3_initialize();
  if (iVar2 != 0) {
    return;
  }
  if (DAT_00b0d9f4 == '\0') {
    lVar3 = 0;
LAB_005989b0:
    bVar1 = true;
    lVar5 = DAT_00b10380;
  }
  else {
    lVar3 = (*DAT_00b0da60)(2);
    if (lVar3 == 0) goto LAB_005989b0;
    (*DAT_00b0da70)(lVar3);
    bVar1 = false;
    lVar5 = DAT_00b10380;
  }
  if (lVar5 != 0) {
    puVar4 = &DAT_00b0da18;
    DAT_00b10380 = lVar5;
    if (DAT_00b0d9f0 != 0) {
      if (DAT_00b103d8 != 0) {
        (*DAT_00b0da70)();
      }
      iVar2 = (*DAT_00b0da28)(lVar5);
      DAT_00b105b8 = DAT_00b105b8 - iVar2;
      DAT_00b10600 = DAT_00b10600 + -1;
      (*DAT_00b0da18)(lVar5);
      if (DAT_00b103d8 == 0) goto LAB_00598a40;
      puVar4 = &DAT_00b0da80;
      lVar5 = DAT_00b103d8;
    }
    (*(code *)*puVar4)(lVar5);
  }
LAB_00598a40:
  DAT_00b10380 = 0;
  DAT_00b10358 = 0;
  if (bVar1) {
    DAT_00b10380 = 0;
    DAT_00b10358 = 0;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00598a84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00b0da80)(lVar3);
  return;
}


// ===== 00598a88  sqlite3_prepare =====

void sqlite3_prepare(void)

{
  FUN_00598a9c();
  return;
}


// ===== 00598a9c  FUN_00598a9c =====

undefined4
FUN_00598a9c(long param_1,long param_2,undefined4 param_3,undefined4 param_4,undefined8 param_5,
            undefined8 *param_6,undefined8 param_7)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  
  if (param_6 == (undefined8 *)0x0) {
    uVar3 = 0x234b9;
    goto LAB_00598c70;
  }
  *param_6 = 0;
  if (param_1 == 0) {
    pcVar4 = "NULL";
LAB_00598c38:
    sqlite3_log(0x15,"API call with %s database connection pointer",pcVar4);
  }
  else {
    cVar1 = *(char *)(param_1 + 0x71);
    if (cVar1 == -0x46) {
LAB_00598ae8:
      pcVar4 = "unopened";
      goto LAB_00598c38;
    }
    if (cVar1 != 'v') {
      if (cVar1 != 'm') {
        pcVar4 = "invalid";
        goto LAB_00598c38;
      }
      goto LAB_00598ae8;
    }
    if (param_2 != 0) {
      if (*(long *)(param_1 + 0x18) != 0) {
        (*DAT_00b0da70)();
      }
      if (*(char *)(param_1 + 0x6f) == '\0') {
        FUN_005ac38c(param_1);
      }
      iVar2 = FUN_005e3d24(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
      if (iVar2 != 0) {
        iVar5 = 0;
        do {
          if (*(char *)(param_1 + 0x67) != '\0') break;
          if (iVar2 == 0x11) {
            if ((*(int *)(param_1 + 0x48) == 0) && (iVar2 = *(int *)(param_1 + 0x28), 0 < iVar2)) {
              lVar6 = 0;
              lVar7 = 0x18;
              do {
                if ((*(ushort *)(*(long *)(*(long *)(param_1 + 0x20) + lVar7) + 0x72) >> 3 & 1) != 0
                   ) {
                  FUN_005d5618();
                  iVar2 = *(int *)(param_1 + 0x28);
                }
                lVar6 = lVar6 + 1;
                lVar7 = lVar7 + 0x20;
              } while (lVar6 < iVar2);
            }
            if (iVar5 != 0) {
              iVar2 = 0x11;
              break;
            }
            iVar5 = 1;
          }
          else {
            if (iVar2 != 0x201) break;
            if (0x18 < iVar5) {
              iVar2 = 0x201;
              break;
            }
            iVar5 = iVar5 + 1;
          }
          iVar2 = FUN_005e3d24(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
        } while (iVar2 != 0);
      }
      if (*(char *)(param_1 + 0x6f) == '\0') {
        FUN_005ac41c(param_1);
      }
      if ((iVar2 == 0) && (*(char *)(param_1 + 0x67) == '\0')) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_005c1188(param_1,iVar2);
      }
      *(undefined4 *)(param_1 + 0x290) = 0;
      if (*(long *)(param_1 + 0x18) == 0) {
        return uVar3;
      }
      (*DAT_00b0da80)();
      return uVar3;
    }
  }
  uVar3 = 0x234bd;
LAB_00598c70:
  sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",uVar3,
              "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
  return 0x15;
}


// ===== 00598cfc  sqlite3_prepare_v3 =====

void sqlite3_prepare_v3(void)

{
  FUN_00598a9c();
  return;
}


// ===== 00598d18  sqlite3_prepare16 =====

void sqlite3_prepare16(void)

{
  FUN_00598d28();
  return;
}


// ===== 00598d28  FUN_00598d28 =====

/* WARNING: Type propagation algorithm not settling */

undefined4
FUN_00598d28(long param_1,long param_2,int param_3,undefined4 param_4,undefined8 *param_5,
            long *param_6)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  byte *pbVar4;
  char *pcVar5;
  byte *pbVar6;
  byte bVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  ulong uVar12;
  long local_88 [2];
  byte *pbStack_78;
  undefined8 local_70;
  long lStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  byte *pbVar7;
  
  local_88[0] = 0;
  if (param_5 == (undefined8 *)0x0) {
    uVar2 = 0x2354e;
    goto LAB_00598eb4;
  }
  *param_5 = 0;
  if (param_1 == 0) {
    pcVar5 = "NULL";
LAB_00598e7c:
    sqlite3_log(0x15,"API call with %s database connection pointer",pcVar5);
  }
  else {
    cVar1 = *(char *)(param_1 + 0x71);
    if (cVar1 == -0x46) {
LAB_00598d6c:
      pcVar5 = "unopened";
      goto LAB_00598e7c;
    }
    if (cVar1 != 'v') {
      if (cVar1 != 'm') {
        pcVar5 = "invalid";
        goto LAB_00598e7c;
      }
      goto LAB_00598d6c;
    }
    if (param_2 != 0) {
      uVar12 = 0;
      if (param_3 < 0) {
        for (; (*(char *)(param_2 + uVar12) != '\0' || (*(char *)(param_2 + uVar12 + 1) != '\0'));
            uVar12 = uVar12 + 2) {
        }
      }
      else if (param_3 != 0) {
        do {
          if ((*(char *)(param_2 + uVar12) == '\0') && (*(char *)(param_2 + uVar12 + 1) == '\0'))
          break;
          uVar12 = uVar12 + 2;
        } while ((int)uVar12 < param_3);
      }
      if (*(long *)(param_1 + 0x18) != 0) {
        (*DAT_00b0da70)(*(long *)(param_1 + 0x18));
      }
      local_50 = 0;
      local_70 = 0;
      uStack_58 = 0;
      local_60 = 0;
      pbStack_78 = (byte *)0x0;
      local_88[1] = 0;
      lStack_68 = param_1;
      FUN_00590724(local_88 + 1,param_2,uVar12 & 0xffffffff,2,0);
      if ((local_70._4_2_ >> 1 & 1) == 0) {
        local_70._0_7_ = CONCAT16(1,(undefined6)local_70);
      }
      else if (local_70._6_1_ != '\x01') {
        FUN_005c2adc(local_88 + 1,1);
      }
      pbVar4 = pbStack_78;
      if (*(char *)(param_1 + 0x67) == '\0') {
        if (pbStack_78 == (byte *)0x0) {
          iVar3 = 0;
        }
        else {
          iVar3 = FUN_00598a9c(param_1,pbStack_78,0xffffffff,param_4,0,param_5,local_88);
          if ((param_6 != (long *)0x0) && (local_88[0] != 0)) {
            bVar8 = *pbVar4;
            pbVar6 = pbVar4 + (local_88[0] - (long)pbVar4 & 0xffffffff);
            if ((int)(local_88[0] - (long)pbVar4) < 0) {
              pbVar6 = (byte *)0xffffffffffffffff;
            }
            if ((bVar8 == 0) || (pbVar6 <= pbVar4)) {
              pbVar6 = (byte *)(param_2 + 1);
            }
            else {
              pbVar10 = pbVar4;
              uVar9 = 0;
              do {
                uVar11 = uVar9;
                if (bVar8 < 0xc0) {
                  pbVar10 = pbVar10 + 1;
                  bVar8 = *pbVar10;
                }
                else {
                  do {
                    pbVar10 = pbVar10 + 1;
                    bVar8 = *pbVar10;
                  } while ((bVar8 & 0xc0) == 0x80);
                }
              } while ((bVar8 != 0) && (uVar9 = uVar11 + 1, pbVar10 < pbVar6));
              pbVar6 = (byte *)(param_2 + 1);
              pbVar10 = (byte *)(param_2 + (uVar12 & 0xffffffff) + -1);
              if (pbVar6 <= pbVar10) {
                uVar9 = 0;
                pbVar7 = pbVar6;
                do {
                  pbVar6 = pbVar7 + 2;
                  if (((*pbVar7 & 0xfc) == 0xd8 && pbVar6 <= pbVar10) && ((*pbVar6 & 0xfc) == 0xdc))
                  {
                    pbVar6 = pbVar7 + 4;
                  }
                } while ((uVar9 < uVar11) && (uVar9 = uVar9 + 1, pbVar7 = pbVar6, pbVar6 <= pbVar10)
                        );
              }
            }
            *param_6 = param_2 + (int)((int)pbVar6 + ~(uint)param_2);
          }
        }
      }
      else {
        if ((local_70 & 0x900000000000) != 0 || (int)local_60 != 0) {
          FUN_005c1208(local_88 + 1);
        }
        iVar3 = 0;
        pbVar4 = (byte *)0x0;
      }
      FUN_005869c8(param_1,pbVar4);
      if ((iVar3 == 0) && (*(char *)(param_1 + 0x67) == '\0')) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_005c1188(param_1,iVar3);
      }
      if (*(long *)(param_1 + 0x18) == 0) {
        return uVar2;
      }
      (*DAT_00b0da80)();
      return uVar2;
    }
  }
  uVar2 = 0x23552;
LAB_00598eb4:
  sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",uVar2,
              "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
  return 0x15;
}


// ===== 005990a4  sqlite3_prepare16_v2 =====

void sqlite3_prepare16_v2(void)

{
  FUN_00598d28();
  return;
}


// ===== 005990b4  sqlite3_prepare16_v3 =====

void sqlite3_prepare16_v3(void)

{
  FUN_00598d28();
  return;
}


// ===== 005990c4  sqlite3_get_table =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint sqlite3_get_table(long param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4,
                      undefined4 *param_5,long *param_6)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  ulong *puVar4;
  char *pcVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong *local_78;
  long local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  
  if (param_1 == 0) {
    pcVar5 = "NULL";
  }
  else {
    cVar1 = *(char *)(param_1 + 0x71);
    if (cVar1 != -0x46) {
      if (cVar1 == 'v') {
        if (param_3 == (undefined8 *)0x0) goto LAB_00599190;
        *param_3 = 0;
        if (param_5 != (undefined4 *)0x0) {
          *param_5 = 0;
        }
        if (param_4 != (undefined4 *)0x0) {
          *param_4 = 0;
        }
        if (param_6 != (long *)0x0) {
          *param_6 = 0;
        }
        local_70 = 0;
        local_58 = 0;
        uStack_60 = _UNK_002a0978;
        local_68 = _DAT_002a0970;
        iVar2 = sqlite3_initialize();
        if ((iVar2 != 0) || (local_78 = (ulong *)FUN_005827b0(0xa0), local_78 == (ulong *)0x0))
        goto LAB_0059916c;
        *local_78 = 0;
        uVar3 = sqlite3_exec(param_1,param_2,FUN_00599478,&local_78,param_6);
        lVar7 = local_70;
        *local_78 = uStack_60 >> 0x20;
        if ((uVar3 & 0xff) == 4) {
          sqlite3_free_table(local_78 + 1);
          if (local_70 == 0) goto LAB_00599374;
          if (param_6 != (long *)0x0) {
            lVar7 = *param_6;
            if (lVar7 != 0) {
              puVar6 = &DAT_00b0da18;
              if (DAT_00b0d9f0 != 0) {
                if (DAT_00b103d8 != 0) {
                  (*DAT_00b0da70)();
                }
                iVar2 = (*DAT_00b0da28)(lVar7);
                DAT_00b105b8 = DAT_00b105b8 - iVar2;
                DAT_00b10600 = DAT_00b10600 + -1;
                (*DAT_00b0da18)(lVar7);
                if (DAT_00b103d8 == 0) goto LAB_005992cc;
                puVar6 = &DAT_00b0da80;
                lVar7 = DAT_00b103d8;
              }
              (*(code *)*puVar6)(lVar7);
            }
LAB_005992cc:
            lVar7 = sqlite3_mprintf(&DAT_002ad0ce,local_70);
            *param_6 = lVar7;
            if (local_70 == 0) goto LAB_00599374;
          }
          lVar7 = local_70;
          puVar6 = &DAT_00b0da18;
          if (DAT_00b0d9f0 != 0) {
            if (DAT_00b103d8 != 0) {
              (*DAT_00b0da70)();
            }
            iVar2 = (*DAT_00b0da28)(lVar7);
            DAT_00b105b8 = DAT_00b105b8 - iVar2;
            DAT_00b10600 = DAT_00b10600 + -1;
            (*DAT_00b0da18)(lVar7);
            if (DAT_00b103d8 == 0) goto LAB_00599374;
            puVar6 = &DAT_00b0da80;
            lVar7 = DAT_00b103d8;
          }
          (*(code *)*puVar6)(lVar7);
LAB_00599374:
          *(uint *)(param_1 + 0x50) = local_58;
          return local_58;
        }
        if (local_70 != 0) {
          puVar6 = &DAT_00b0da18;
          if (DAT_00b0d9f0 != 0) {
            if (DAT_00b103d8 != 0) {
              (*DAT_00b0da70)();
            }
            iVar2 = (*DAT_00b0da28)(lVar7);
            DAT_00b105b8 = DAT_00b105b8 - iVar2;
            DAT_00b10600 = DAT_00b10600 + -1;
            (*DAT_00b0da18)(lVar7);
            if (DAT_00b103d8 == 0) goto LAB_0059940c;
            puVar6 = &DAT_00b0da80;
            lVar7 = DAT_00b103d8;
          }
          (*(code *)*puVar6)(lVar7);
        }
LAB_0059940c:
        if (uVar3 != 0) {
          sqlite3_free_table(local_78 + 1);
          return uVar3;
        }
        puVar4 = local_78;
        if (((uint)local_68 <= uStack_60._4_4_) ||
           (puVar4 = (ulong *)FUN_00582b2c(local_78,(ulong)uStack_60._4_4_ << 3),
           puVar4 != (ulong *)0x0)) {
          *param_3 = puVar4 + 1;
          if (param_5 != (undefined4 *)0x0) {
            *param_5 = (undefined4)uStack_60;
          }
          if (param_4 == (undefined4 *)0x0) {
            return 0;
          }
          *param_4 = local_68._4_4_;
          return 0;
        }
        sqlite3_free_table(local_78 + 1);
LAB_0059916c:
        *(undefined4 *)(param_1 + 0x50) = 7;
        return 7;
      }
      if (cVar1 != 'm') {
        pcVar5 = "invalid";
        goto LAB_00599180;
      }
    }
    pcVar5 = "unopened";
  }
LAB_00599180:
  sqlite3_log(0x15,"API call with %s database connection pointer",pcVar5);
LAB_00599190:
  sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x258a4,
              "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
  return 0x15;
}


// ===== 00599478  FUN_00599478 =====

undefined8 FUN_00599478(long *param_1,uint param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  size_t sVar5;
  void *__dest;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  
  iVar3 = *(int *)((long)param_1 + 0x14);
  uVar7 = (ulong)param_2;
  iVar2 = param_2 << (param_3 != (undefined8 *)0x0 && iVar3 == 0);
  if (*(uint *)(param_1 + 2) < (uint)(iVar2 + *(int *)((long)param_1 + 0x1c))) {
    uVar1 = iVar2 + *(uint *)(param_1 + 2) * 2;
    *(uint *)(param_1 + 2) = uVar1;
    lVar4 = FUN_00582b2c(*param_1,(ulong)uVar1 << 3);
    if (lVar4 == 0) {
LAB_00599664:
      *(undefined4 *)(param_1 + 4) = 7;
      return 1;
    }
    iVar3 = *(int *)((long)param_1 + 0x14);
    *param_1 = lVar4;
  }
  if (iVar3 == 0) {
    *(uint *)(param_1 + 3) = param_2;
    if (0 < (int)param_2) {
      uVar8 = (ulong)param_2;
      do {
        lVar4 = sqlite3_mprintf(&DAT_002ad0ce,*param_4);
        if (lVar4 == 0) goto LAB_00599664;
        uVar1 = *(uint *)((long)param_1 + 0x1c);
        uVar8 = uVar8 - 1;
        param_4 = param_4 + 1;
        *(long *)(*param_1 + (ulong)uVar1 * 8) = lVar4;
        *(uint *)((long)param_1 + 0x1c) = uVar1 + 1;
      } while (uVar8 != 0);
    }
  }
  else if (*(uint *)(param_1 + 3) != param_2) {
    lVar4 = param_1[1];
    if (lVar4 != 0) {
      puVar6 = &DAT_00b0da18;
      if (DAT_00b0d9f0 != 0) {
        if (DAT_00b103d8 != 0) {
          (*DAT_00b0da70)();
        }
        iVar3 = (*DAT_00b0da28)(lVar4);
        DAT_00b105b8 = DAT_00b105b8 - iVar3;
        DAT_00b10600 = DAT_00b10600 + -1;
        (*DAT_00b0da18)(lVar4);
        if (DAT_00b103d8 == 0) goto LAB_00599578;
        puVar6 = &DAT_00b0da80;
        lVar4 = DAT_00b103d8;
      }
      (*(code *)*puVar6)(lVar4);
    }
LAB_00599578:
    lVar4 = sqlite3_mprintf("sqlite3_get_table() called with two or more incompatible queries");
    param_1[1] = lVar4;
    *(undefined4 *)(param_1 + 4) = 1;
    return 1;
  }
  if (param_3 == (undefined8 *)0x0) {
    return 0;
  }
  if (0 < (int)param_2) {
    do {
      if ((char *)*param_3 == (char *)0x0) {
        __dest = (void *)0x0;
      }
      else {
        sVar5 = strlen((char *)*param_3);
        iVar3 = sqlite3_initialize();
        if (iVar3 != 0) goto LAB_00599664;
        __dest = (void *)FUN_005827b0((sVar5 & 0x3fffffff) + 1);
        if (__dest == (void *)0x0) goto LAB_00599664;
        memcpy(__dest,(void *)*param_3,(sVar5 & 0x3fffffff) + 1);
      }
      uVar1 = *(uint *)((long)param_1 + 0x1c);
      uVar7 = uVar7 - 1;
      param_3 = param_3 + 1;
      *(void **)(*param_1 + (ulong)uVar1 * 8) = __dest;
      *(uint *)((long)param_1 + 0x1c) = uVar1 + 1;
    } while (uVar7 != 0);
  }
  *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + 1;
  return 0;
}


// ===== 005996c0  sqlite3_free_table =====

void sqlite3_free_table(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  long lVar5;
  
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  puVar3 = param_1 + -1;
  if (1 < (int)*puVar3) {
    lVar5 = (*puVar3 & 0xffffffff) - 1;
    do {
      puVar4 = (ulong *)*param_1;
      if (puVar4 != (ulong *)0x0) {
        puVar2 = &DAT_00b0da18;
        if (DAT_00b0d9f0 != 0) {
          if (DAT_00b103d8 != (ulong *)0x0) {
            (*DAT_00b0da70)();
          }
          iVar1 = (*DAT_00b0da28)(puVar4);
          DAT_00b105b8 = DAT_00b105b8 - iVar1;
          DAT_00b10600 = DAT_00b10600 + -1;
          (*DAT_00b0da18)(puVar4);
          if (DAT_00b103d8 == (ulong *)0x0) goto LAB_0059972c;
          puVar2 = &DAT_00b0da80;
          puVar4 = DAT_00b103d8;
        }
        (*(code *)*puVar2)(puVar4);
      }
LAB_0059972c:
      lVar5 = lVar5 + -1;
      param_1 = param_1 + 1;
    } while (lVar5 != 0);
  }
  puVar2 = &DAT_00b0da18;
  if (DAT_00b0d9f0 != 0) {
    if (DAT_00b103d8 != (ulong *)0x0) {
      (*DAT_00b0da70)();
    }
    iVar1 = (*DAT_00b0da28)(puVar3);
    DAT_00b105b8 = DAT_00b105b8 - iVar1;
    DAT_00b10600 = DAT_00b10600 + -1;
    (*DAT_00b0da18)(puVar3);
    if (DAT_00b103d8 == (ulong *)0x0) {
      return;
    }
    puVar2 = &DAT_00b0da80;
    puVar3 = DAT_00b103d8;
  }
                    /* WARNING: Could not recover jumptable at 0x00599814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(puVar3);
  return;
}


// ===== 00599834  sqlite3_create_module =====

undefined4 sqlite3_create_module(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  char *pcVar4;
  
  if (param_1 == 0) {
    pcVar4 = "NULL";
  }
  else {
    cVar1 = *(char *)(param_1 + 0x71);
    if (cVar1 != -0x46) {
      if (cVar1 == 'v') {
        if (param_2 != 0) {
          if (*(long *)(param_1 + 0x18) != 0) {
            (*DAT_00b0da70)(*(long *)(param_1 + 0x18));
          }
          FUN_005e8ec0(param_1,param_2,param_3,param_4,0);
          if (*(char *)(param_1 + 0x67) == '\0') {
            uVar2 = 0;
            lVar3 = *(long *)(param_1 + 0x18);
          }
          else {
            uVar2 = FUN_005c1188(param_1,0);
            lVar3 = *(long *)(param_1 + 0x18);
          }
          if (lVar3 == 0) {
            return uVar2;
          }
          (*DAT_00b0da80)();
          return uVar2;
        }
        goto LAB_00599910;
      }
      if (cVar1 != 'm') {
        pcVar4 = "invalid";
        goto LAB_00599900;
      }
    }
    pcVar4 = "unopened";
  }
LAB_00599900:
  sqlite3_log(0x15,"API call with %s database connection pointer",pcVar4);
LAB_00599910:
  sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x267ca,
              "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
  return 0x15;
}


// ===== 00599980  sqlite3_create_module_v2 =====

int sqlite3_create_module_v2
              (long param_1,long param_2,undefined8 param_3,undefined8 param_4,code *param_5)

{
  char cVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  
  if (param_1 == 0) {
    pcVar4 = "NULL";
  }
  else {
    cVar1 = *(char *)(param_1 + 0x71);
    if (cVar1 != -0x46) {
      if (cVar1 == 'v') {
        if (param_2 != 0) {
          if (*(long *)(param_1 + 0x18) != 0) {
            (*DAT_00b0da70)(*(long *)(param_1 + 0x18));
          }
          FUN_005e8ec0(param_1,param_2,param_3);
          if (*(char *)(param_1 + 0x67) == '\0') {
            iVar2 = 0;
            lVar3 = *(long *)(param_1 + 0x18);
          }
          else {
            iVar2 = FUN_005c1188(param_1,0);
            if ((param_5 != (code *)0x0) && (iVar2 != 0)) {
              (*param_5)(param_4);
            }
            lVar3 = *(long *)(param_1 + 0x18);
          }
          if (lVar3 == 0) {
            return iVar2;
          }
          (*DAT_00b0da80)();
          return iVar2;
        }
        goto LAB_00599a80;
      }
      if (cVar1 != 'm') {
        pcVar4 = "invalid";
        goto LAB_00599a70;
      }
    }
    pcVar4 = "unopened";
  }
LAB_00599a70:
  sqlite3_log(0x15,"API call with %s database connection pointer",pcVar4);
LAB_00599a80:
  sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x267da,
              "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
  return 0x15;
}


// ===== 00599af4  sqlite3_drop_modules =====

undefined8 sqlite3_drop_modules(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  undefined8 *puVar3;
  int iVar4;
  char *pcVar5;
  undefined8 uVar6;
  char *__s2;
  long *plVar7;
  
  if (param_1 == 0) {
    pcVar5 = "NULL";
  }
  else {
    cVar2 = *(char *)(param_1 + 0x71);
    if (cVar2 != -0x46) {
      if (cVar2 == 'v') {
        plVar7 = *(long **)(param_1 + 0x228);
        if (plVar7 != (long *)0x0) {
          if (param_2 == (undefined8 *)0x0) {
            do {
              plVar1 = plVar7 + 2;
              plVar7 = (long *)*plVar7;
              uVar6 = *(undefined8 *)(*plVar1 + 8);
              if (*(long *)(param_1 + 0x18) != 0) {
                (*DAT_00b0da70)();
              }
              FUN_005e8ec0(param_1,uVar6,0,0,0);
              if (*(char *)(param_1 + 0x67) != '\0') {
                FUN_005c1188(param_1,0);
              }
              if (*(long *)(param_1 + 0x18) != 0) {
                (*DAT_00b0da80)();
              }
            } while (plVar7 != (long *)0x0);
          }
          else {
            do {
              plVar1 = plVar7 + 2;
              plVar7 = (long *)*plVar7;
              __s2 = *(char **)(*plVar1 + 8);
              pcVar5 = (char *)*param_2;
              puVar3 = param_2 + 1;
              while (pcVar5 != (char *)0x0) {
                iVar4 = strcmp(pcVar5,__s2);
                if (iVar4 == 0) goto LAB_00599b68;
                pcVar5 = (char *)*puVar3;
                puVar3 = puVar3 + 1;
              }
              if (*(long *)(param_1 + 0x18) != 0) {
                (*DAT_00b0da70)();
              }
              FUN_005e8ec0(param_1,__s2,0,0,0);
              if (*(char *)(param_1 + 0x67) != '\0') {
                FUN_005c1188(param_1,0);
              }
              if (*(long *)(param_1 + 0x18) != 0) {
                (*DAT_00b0da80)();
              }
LAB_00599b68:
            } while (plVar7 != (long *)0x0);
          }
        }
        return 0;
      }
      if (cVar2 != 'm') {
        pcVar5 = "invalid";
        goto LAB_00599bf0;
      }
    }
    pcVar5 = "unopened";
  }
LAB_00599bf0:
  sqlite3_log(0x15,"API call with %s database connection pointer",pcVar5);
  sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x267e6,
              "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
  return 0x15;
}


// ===== 00599cbc  sqlite3_declare_vtab =====

undefined4 sqlite3_declare_vtab(ulong param_1,long param_2)

{
  undefined *puVar1;
  char cVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  long lVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  char *pcVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  ulong local_1f0;
  long local_1e8;
  long lStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_118;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [8];
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  if (param_1 == 0) {
    pcVar9 = "NULL";
LAB_00599e2c:
    sqlite3_log(0x15,"API call with %s database connection pointer",pcVar9);
  }
  else {
    cVar2 = *(char *)(param_1 + 0x71);
    if (cVar2 == -0x46) {
LAB_00599cf8:
      pcVar9 = "unopened";
      goto LAB_00599e2c;
    }
    if (cVar2 != 'v') {
      if (cVar2 != 'm') {
        pcVar9 = "invalid";
        goto LAB_00599e2c;
      }
      goto LAB_00599cf8;
    }
    if (param_2 != 0) {
      local_1f0 = local_1f0 & 0xffffffff00000000;
      lVar13 = param_2;
      do {
        iVar7 = FUN_0059a0fc(lVar13,&local_1f0);
        lVar13 = lVar13 + iVar7;
      } while (((uint)local_1f0 & 0xfffffffe) == 0xb8);
      if ((uint)local_1f0 != 0x11) {
LAB_00599e88:
        FUN_0058c8b8(param_1,1,"syntax error");
        return 1;
      }
      local_1f0 = local_1f0 & 0xffffffff00000000;
      do {
        iVar7 = FUN_0059a0fc(lVar13,&local_1f0);
        lVar13 = lVar13 + iVar7;
      } while (((uint)local_1f0 & 0xfffffffe) == 0xb8);
      if ((uint)local_1f0 != 0x10) goto LAB_00599e88;
      if (*(long *)(param_1 + 0x18) != 0) {
        (*DAT_00b0da70)();
      }
      plVar12 = *(long **)(param_1 + 0x238);
      if ((plVar12 != (long *)0x0) && ((int)plVar12[3] == 0)) {
        lVar13 = plVar12[1];
        local_58 = 0;
        uStack_d0 = 0;
        local_d8 = 0;
        uStack_c0 = 0;
        auStack_c8 = (undefined1  [8])0x0;
        uStack_b0 = 0;
        local_b8 = 0;
        uStack_a0 = 0;
        uStack_a8 = 0;
        uStack_90 = 0;
        local_98 = 0;
        uStack_80 = 0;
        uStack_88 = 0;
        uStack_70 = 0;
        local_78 = 0;
        uStack_60 = 0;
        uStack_68 = 0;
        local_118 = *(undefined8 *)(param_1 + 0x158);
        uStack_140 = 0;
        local_148 = 0;
        uStack_150 = 0;
        local_158 = 0;
        uStack_160 = 0;
        local_168 = 0;
        uStack_170 = 0;
        local_178 = 0;
        uStack_180 = 0;
        local_188 = 0;
        uStack_190 = 0;
        local_198 = 0;
        uStack_1a0 = 0;
        local_1a8 = 0;
        uStack_1b0 = 0;
        local_1b8 = 0;
        uStack_1c0 = 0;
        local_1c8 = 0;
        uStack_1d0 = 0;
        local_1d8 = 0;
        lStack_1e0 = 0;
        local_1e8 = 0;
        *(ulong **)(param_1 + 0x158) = &local_1f0;
        local_1f0 = param_1;
        if (*(char *)(param_1 + 0x67) != '\0') {
          FUN_00595b78(&local_1f0,"out of memory");
        }
        uVar3 = *(undefined1 *)(param_1 + 0xc5);
        auStack_c8[4] = 1;
        local_1c8._0_3_ = CONCAT12(1,(undefined2)local_1c8);
        *(undefined1 *)(param_1 + 0xc5) = 0;
        local_1d8._0_6_ = CONCAT24(1,(undefined4)local_1d8);
        iVar7 = FUN_0059aae0(&local_1f0,param_2);
        lVar5 = local_98;
        if (iVar7 == 0) {
          if (*(long *)(lVar13 + 8) == 0) {
            *(undefined8 *)(lVar13 + 8) = *(undefined8 *)(local_98 + 8);
            if (*(long *)(local_98 + 0x50) != 0) {
              FUN_005eaac4(param_1);
            }
            uVar4 = *(undefined2 *)(lVar5 + 0x36);
            bVar6 = false;
            *(undefined2 *)(lVar13 + 0x36) = uVar4;
            *(undefined2 *)(lVar13 + 0x38) = uVar4;
            *(uint *)(lVar13 + 0x30) = *(uint *)(lVar13 + 0x30) | *(uint *)(lVar5 + 0x30) & 0x280;
            *(undefined2 *)(lVar5 + 0x36) = 0;
            *(undefined8 *)(lVar5 + 8) = 0;
            if (*(char *)(lVar5 + 0x30) < '\0') {
              if (*(long *)(**(long **)(*plVar12 + 8) + 0x68) == 0) {
                bVar6 = false;
              }
              else {
                plVar11 = (long *)(lVar5 + 0x10);
                do {
                  lVar10 = *plVar11;
                  plVar11 = (long *)(lVar10 + 0x28);
                } while ((*(ushort *)(lVar10 + 99) & 3) != 2);
                bVar6 = *(short *)(lVar10 + 0x5e) != 1;
              }
            }
            lVar10 = *(long *)(lVar5 + 0x10);
            if (lVar10 != 0) {
              *(long *)(lVar13 + 0x10) = lVar10;
              *(undefined8 *)(lVar5 + 0x10) = 0;
              *(long *)(lVar10 + 0x18) = lVar13;
            }
          }
          else {
            bVar6 = false;
          }
          *(undefined4 *)(plVar12 + 3) = 1;
        }
        else {
          bVar6 = true;
          puVar1 = (undefined *)0x0;
          if (local_1e8 != 0) {
            puVar1 = &DAT_002ad0ce;
          }
          FUN_0058c8b8(param_1,1,puVar1);
          FUN_005869c8(param_1,local_1e8);
        }
        lVar13 = lStack_1e0;
        auStack_c8[4] = 0;
        if (lStack_1e0 != 0) {
          if (*(char *)(lStack_1e0 + 199) != '\0') {
            FUN_0058f640(lStack_1e0);
          }
          FUN_0058077c(lVar13);
        }
        if ((local_98 != 0) &&
           ((*(long *)(param_1 + 0x300) != 0 ||
            (iVar7 = *(int *)(local_98 + 0x2c) + -1, *(int *)(local_98 + 0x2c) = iVar7, iVar7 == 0))
           )) {
          FUN_005e9fb0(param_1);
        }
        FUN_00596a64(&local_1f0);
        *(undefined1 *)(param_1 + 0xc5) = uVar3;
        if ((bVar6 == false) && (*(char *)(param_1 + 0x67) == '\0')) {
          uVar8 = 0;
        }
        else {
          uVar8 = FUN_005c1188(param_1,bVar6);
        }
        if (*(long *)(param_1 + 0x18) == 0) {
          return uVar8;
        }
        (*DAT_00b0da80)();
        return uVar8;
      }
      sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x26aa5,
                  "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
      *(undefined4 *)(param_1 + 0x50) = 0x15;
      FUN_005ac5c0(param_1,0x15);
      if (*(long *)(param_1 + 0x18) != 0) {
        (*DAT_00b0da80)();
      }
      uVar8 = 0x26aa7;
      goto LAB_00599e60;
    }
  }
  uVar8 = 0x26a8e;
LAB_00599e60:
  sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",uVar8,
              "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
  return 0x15;
}


// ===== 0059a0fc  FUN_0059a0fc =====

ulong FUN_0059a0fc(byte *param_1,int *param_2)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  byte *pbVar4;
  long lVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  
  bVar6 = *param_1;
  lVar9 = 1;
  switch((&DAT_002c8929)[bVar6]) {
  case 0:
    if (param_1[1] == 0x27) {
      *param_2 = 0x9b;
      uVar11 = 2;
      do {
        uVar10 = uVar11;
        uVar11 = uVar10 + 1;
      } while (((byte)(&DAT_002c7a08)[param_1[uVar10]] >> 3 & 1) != 0);
      if ((param_1[uVar10] != 0x27) || ((uVar10 & 1) != 0)) {
        *param_2 = 0xba;
        bVar6 = param_1[uVar10];
        while ((bVar6 != 0 && (bVar6 != 0x27))) {
          uVar10 = uVar10 + 1;
          bVar6 = param_1[uVar10];
        }
      }
      uVar3 = (uint)uVar10;
      if (param_1[(int)uVar3] != 0) {
        uVar3 = uVar3 + 1;
      }
      return (ulong)uVar3;
    }
    break;
  case 1:
    if ((byte)(&DAT_002c8929)[param_1[1]] < 3) {
      lVar9 = 0x200000000;
      lVar5 = 2;
      do {
        pbVar4 = param_1 + lVar5;
        lVar5 = lVar5 + 1;
        lVar9 = lVar9 + 0x100000000;
      } while ((byte)(&DAT_002c8929)[*pbVar4] < 3);
      if (((&DAT_002c7a08)[*pbVar4] & 0x46) == 0) {
        uVar3 = (int)lVar5 - 1;
        *param_2 = 0x3c;
        FUN_005ecdf0(param_1,uVar3);
        return (ulong)uVar3;
      }
      lVar9 = lVar9 >> 0x20;
      goto switchD_0059a13c_caseD_2;
    }
    break;
  case 2:
  case 0x1b:
    goto switchD_0059a13c_caseD_2;
  case 4:
  case 5:
    *param_2 = 0x9d;
    bVar6 = param_1[1];
    if (bVar6 == 0) {
      uVar11 = 1;
    }
    else {
      iVar8 = 0;
      uVar11 = 1;
      do {
        if (((&DAT_002c7a08)[bVar6] & 0x46) == 0) {
          iVar7 = (int)uVar11;
          if ((bVar6 == 0x28) && (0 < iVar8)) {
            param_1 = param_1 + iVar7;
            uVar11 = (ulong)(iVar7 + 1);
            goto LAB_0059a908;
          }
          if ((bVar6 != 0x3a) || (uVar10 = (long)iVar7 + 1, param_1[uVar10] != 0x3a)) break;
        }
        else {
          iVar8 = iVar8 + 1;
          uVar10 = uVar11 & 0xffffffff;
        }
        uVar11 = (long)(int)uVar10 + 1;
        bVar6 = param_1[uVar11];
      } while (bVar6 != 0);
      if (iVar8 != 0) {
        return uVar11 & 0xffffffff;
      }
    }
    *param_2 = 0xba;
    return uVar11 & 0xffffffff;
  case 6:
    uVar11 = 0;
    *param_2 = 0x9d;
    do {
      lVar9 = uVar11 + 1;
      uVar11 = uVar11 + 1;
    } while (0xfffffffffffffff5 < (ulong)param_1[lVar9] - 0x3a);
    goto LAB_0059a9d4;
  case 7:
    uVar11 = 0;
    do {
      lVar9 = uVar11 + 1;
      uVar11 = uVar11 + 1;
    } while (((&DAT_002c7a08)[param_1[lVar9]] & 1) != 0);
    *param_2 = 0xb8;
    return uVar11 & 0xffffffff;
  case 8:
    bVar1 = param_1[1];
    if (bVar1 == 0) {
      uVar11 = 1;
    }
    else {
      uVar10 = 1;
      do {
        if ((bVar1 == bVar6) && (uVar10 = (long)(int)uVar10 + 1, param_1[uVar10] != bVar6)) {
          if (bVar6 == 0x27) {
            *param_2 = 0x76;
            return uVar10 & 0xffffffff;
          }
          goto LAB_0059a49c;
        }
        uVar11 = (long)(int)uVar10 + 1;
        bVar1 = param_1[uVar11];
        uVar10 = uVar11 & 0xffffffff;
      } while (bVar1 != 0);
    }
    *param_2 = 0xba;
    return uVar11 & 0xffffffff;
  case 9:
    if (bVar6 == 0x5d) {
      *param_2 = 0x3c;
      return 1;
    }
    uVar11 = 1;
    do {
      pbVar4 = param_1 + uVar11;
      if (*pbVar4 == 0) {
        *param_2 = 0xba;
        return uVar11 & 0xffffffff;
      }
      uVar11 = uVar11 + 1;
    } while (*pbVar4 != 0x5d);
    *param_2 = 0x3c;
    return uVar11 & 0xffffffff;
  case 10:
    if (param_1[1] != 0x7c) {
      *param_2 = 0x68;
      return 1;
    }
    *param_2 = 0x70;
    return 2;
  case 0xb:
    if (param_1[1] == 0x3e) {
      *param_2 = 0x71;
      uVar3 = 2;
      if (param_1[2] == 0x3e) {
        uVar3 = 3;
      }
      return (ulong)uVar3;
    }
    if (param_1[1] == 0x2d) {
      uVar11 = 2;
      bVar6 = param_1[2];
      while ((bVar6 != 0 && (bVar6 != 10))) {
        uVar11 = uVar11 + 1;
        bVar6 = param_1[uVar11];
      }
      *param_2 = 0xb9;
      return uVar11 & 0xffffffff;
    }
    *param_2 = 0x6c;
    return 1;
  case 0xc:
    bVar6 = param_1[1];
    if (bVar6 == 0x3c) {
      *param_2 = 0x69;
      return 2;
    }
    if (bVar6 != 0x3e) {
      if (bVar6 != 0x3d) {
        *param_2 = 0x39;
        return 1;
      }
      *param_2 = 0x38;
      return 2;
    }
    goto LAB_0059a5f4;
  case 0xd:
    if (param_1[1] == 0x3e) {
      *param_2 = 0x6a;
      return 2;
    }
    if (param_1[1] != 0x3d) {
      *param_2 = 0x37;
      return 1;
    }
    *param_2 = 0x3a;
    return 2;
  case 0xe:
    *param_2 = 0x36;
    uVar3 = 1;
    if (param_1[1] == 0x3d) {
      uVar3 = 2;
    }
    return (ulong)uVar3;
  case 0xf:
    if (param_1[1] != 0x3d) goto switchD_0059a13c_caseD_1c;
LAB_0059a5f4:
    *param_2 = 0x35;
    return 2;
  case 0x10:
    if ((param_1[1] != 0x2a) || (param_1[2] == 0)) {
      *param_2 = 0x6e;
      return 1;
    }
    if ((param_1[2] == 0x2a) && (param_1[3] == 0x2f)) {
      *param_2 = 0xb9;
      return 4;
    }
    lVar9 = 0;
    bVar6 = param_1[3];
    do {
      if (bVar6 == 0) {
        *param_2 = 0xb9;
        return (ulong)((int)lVar9 + 3);
      }
      bVar1 = param_1[lVar9 + 4];
      bVar2 = bVar6 != 0x2a;
      lVar9 = lVar9 + 1;
      bVar6 = bVar1;
    } while ((bVar2) || (bVar1 != 0x2f));
    *param_2 = 0xb9;
    return (ulong)((int)lVar9 + 4);
  case 0x11:
    *param_2 = 0x16;
    return 1;
  case 0x12:
    *param_2 = 0x17;
    return 1;
  case 0x13:
    *param_2 = 1;
    return 1;
  case 0x14:
    *param_2 = 0x6b;
    return 1;
  case 0x15:
    *param_2 = 0x6d;
    return 1;
  case 0x16:
    *param_2 = 0x6f;
    return 1;
  case 0x17:
    *param_2 = 0x19;
    return 1;
  case 0x18:
    *param_2 = 0x67;
    return 1;
  case 0x19:
    *param_2 = 0x73;
    return 1;
  case 0x1a:
    if ((ulong)param_1[1] - 0x3a < 0xfffffffffffffff6) {
      *param_2 = 0x8e;
      return 1;
    }
  case 3:
    *param_2 = 0x9c;
    bVar6 = *param_1;
    if (((bVar6 == 0x30) && ((param_1[1] | 0x20) == 0x78)) &&
       (((byte)(&DAT_002c7a08)[param_1[2]] >> 3 & 1) != 0)) {
      uVar11 = 3;
      do {
        if (((byte)(&DAT_002c7a08)[param_1[uVar11]] >> 3 & 1) == 0) {
          if (param_1[uVar11] != 0x5f) goto LAB_0059aa54;
          *param_2 = 0xb7;
        }
        uVar11 = uVar11 + 1;
      } while( true );
    }
    uVar11 = 0;
    iVar8 = 0x9c;
    do {
      if ((ulong)bVar6 - 0x3a < 0xfffffffffffffff6) {
        if (bVar6 != 0x5f) goto LAB_0059a6e4;
        iVar8 = 0xb7;
        *param_2 = 0xb7;
      }
      bVar6 = param_1[uVar11 + 1];
      uVar11 = uVar11 + 1;
    } while( true );
  default:
switchD_0059a13c_caseD_1c:
    *param_2 = 0xba;
    return 1;
  case 0x1d:
    *param_2 = 0xba;
    return 0;
  case 0x1e:
    if ((param_1[1] == 0xbb) && (param_1[2] == 0xbf)) {
      *param_2 = 0xb8;
      return 3;
    }
  }
  lVar9 = 1;
switchD_0059a13c_caseD_2:
  uVar10 = (ulong)((int)lVar9 - 1);
  pbVar4 = param_1 + lVar9;
  do {
    bVar6 = *pbVar4;
    uVar10 = (ulong)((int)uVar10 + 1);
    pbVar4 = pbVar4 + 1;
  } while (((&DAT_002c7a08)[bVar6] & 0x46) != 0);
LAB_0059a49c:
  *param_2 = 0x3c;
  return uVar10 & 0xffffffff;
  while( true ) {
    uVar11 = (ulong)((int)uVar10 + 1);
    if ((bVar6 == 0x29) || (((&DAT_002c7a08)[(uint)bVar6] & 1) != 0)) break;
LAB_0059a908:
    uVar10 = uVar11;
    param_1 = param_1 + 1;
    bVar6 = *param_1;
    if (bVar6 == 0) goto LAB_0059a930;
  }
  if (bVar6 == 0x29) {
    return uVar11;
  }
LAB_0059a930:
  *param_2 = 0xba;
  return uVar10;
LAB_0059a6e4:
  if (bVar6 == 0x2e) {
    if (iVar8 != 0x9c) goto LAB_0059a9f0;
    iVar7 = 0x9a;
    do {
      *param_2 = iVar7;
      iVar8 = iVar7;
LAB_0059a9f0:
      do {
        lVar9 = uVar11 + 1;
        uVar11 = uVar11 + 1;
      } while (0xfffffffffffffff5 < (ulong)param_1[lVar9] - 0x3a);
      iVar7 = 0xb7;
    } while (param_1[lVar9] == 0x5f);
  }
  pbVar4 = param_1 + (int)uVar11;
  if (((*pbVar4 | 0x20) == 0x65) &&
     ((bVar6 = pbVar4[1], 0xfffffffffffffff5 < (ulong)bVar6 - 0x3a ||
      (((bVar6 == 0x2d || (bVar6 == 0x2b)) && (0xfffffffffffffff5 < (ulong)pbVar4[2] - 0x3a)))))) {
    if (iVar8 == 0x9c) {
      *param_2 = 0x9a;
    }
    uVar11 = (ulong)((int)uVar11 + 2);
    do {
      if ((ulong)param_1[uVar11] - 0x3a < 0xfffffffffffffff6) {
        if (param_1[uVar11] != 0x5f) break;
        *param_2 = 0xb7;
      }
      uVar11 = uVar11 + 1;
    } while( true );
  }
LAB_0059aa54:
  if (((&DAT_002c7a08)[param_1[(int)uVar11]] & 0x46) != 0) {
    param_1 = param_1 + (int)uVar11;
    do {
      param_1 = param_1 + 1;
      *param_2 = 0xba;
      uVar11 = (ulong)((int)uVar11 + 1);
    } while (((&DAT_002c7a08)[*param_1] & 0x46) != 0);
    return uVar11;
  }
LAB_0059a9d4:
  return uVar11 & 0xffffffff;
}


// ===== 0059aae0  FUN_0059aae0 =====

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_0059aae0(long *param_1,char *param_2)

{
  ushort uVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  char *pcVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  ulong uVar19;
  ushort *puVar20;
  ushort *puVar21;
  long lVar22;
  ushort *local_a10;
  long *local_a08;
  ushort *local_a00;
  ushort *local_9f8;
  undefined4 local_9f0 [594];
  ushort auStack_a8 [14];
  uint local_8c;
  char *local_88;
  long lStack_80;
  char *local_78;
  long local_70;
  
  lVar22 = *param_1;
  iVar8 = *(int *)(lVar22 + 0x8c);
  if (*(int *)(lVar22 + 0xd0) == 0) {
    *(undefined4 *)(lVar22 + 400) = 0;
  }
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[0x2a] = (long)param_2;
  uVar18 = *(undefined8 *)(lVar22 + 0x158);
  local_a00 = auStack_a8;
  local_9f0[0] = 0;
  *(long **)(lVar22 + 0x158) = param_1;
  uVar16 = 0xffffffff;
  local_a10 = (ushort *)local_9f0;
  local_a08 = param_1;
  local_9f8 = (ushort *)local_9f0;
LAB_0059ab60:
  iVar6 = FUN_0059a0fc(param_2,&local_8c);
  iVar8 = iVar8 - iVar6;
  if (-1 < iVar8) {
LAB_0059ab98:
    uVar13 = (ulong)local_8c;
    if (0xa4 < (int)local_8c) {
      if (*(int *)(lVar22 + 400) != 0) {
        iVar8 = *(int *)((long)param_1 + 0x34);
        uVar17 = 9;
        goto LAB_0059b1b4;
      }
      if (local_8c == 0xb8) goto LAB_0059ab7c;
      iVar7 = (int)uVar16;
      if (*param_2 == '\0') {
        if (iVar7 == 1) {
          uVar13 = 0;
          iVar6 = 0;
        }
        else {
          puVar21 = local_a10;
          puVar20 = local_9f8;
          if (iVar7 == 0) goto LAB_0059b1f0;
          uVar13 = 1;
          iVar6 = 0;
        }
        goto LAB_0059ad74;
      }
      if (local_8c == 0xb9) {
        if ((*(char *)(lVar22 + 0xc5) != '\0') || ((*(byte *)(lVar22 + 0x34) >> 6 & 1) != 0))
        goto LAB_0059ab7c;
LAB_0059b1c4:
        local_70 = CONCAT44(local_70._4_4_,iVar6);
        local_78 = param_2;
        FUN_00595b78(param_1,"unrecognized token: \"%T\"",&local_78);
        puVar21 = local_a10;
        puVar20 = local_9f8;
        goto LAB_0059b1f0;
      }
      if ((int)local_8c < 0xa7) {
        if (local_8c == 0xa5) {
          pcVar10 = param_2 + 6;
          do {
            iVar7 = FUN_0059a0fc(pcVar10,&local_78);
            pcVar10 = pcVar10 + iVar7;
          } while ((uint)local_78 == 0xb8);
          if ((((uint)local_78 - 0x76 < 0x31) &&
              ((1L << ((ulong)((uint)local_78 - 0x76) & 0x3f) & 0x1800000000003U) != 0)) ||
             (((uint)local_78 == 0x3c ||
              ((*(short *)(&DAT_002c8a2a + (long)(int)(uint)local_78 * 2) == 0x3c ||
               ((uint)local_78 == 0x3c)))))) {
            do {
              iVar7 = FUN_0059a0fc(pcVar10,&local_78);
              pcVar10 = pcVar10 + iVar7;
            } while ((uint)local_78 == 0xb8);
            if ((((0x30 < (uint)local_78 - 0x76) ||
                 ((1L << ((ulong)((uint)local_78 - 0x76) & 0x3f) & 0x1800000000003U) == 0)) &&
                ((uint)local_78 != 0x3c)) &&
               (*(short *)(&DAT_002c8a2a + (long)(int)(uint)local_78 * 2) != 0x3c)) {
              uVar11 = 0xa5;
              if ((uint)local_78 != 0x18) {
                uVar11 = 0x3c;
              }
              uVar13 = (ulong)uVar11;
              goto LAB_0059ad74;
            }
          }
LAB_0059ad70:
          uVar13 = 0x3c;
        }
        else {
          if (local_8c != 0xa6) goto LAB_0059b1c4;
          if (iVar7 != 0x17) goto LAB_0059ad70;
          pcVar10 = param_2 + 4;
          do {
            iVar7 = FUN_0059a0fc(pcVar10,&local_78);
            pcVar10 = pcVar10 + iVar7;
          } while ((uint)local_78 == 0xb8);
          if ((((uint)local_78 - 0x76 < 0x31) &&
              ((1L << ((ulong)((uint)local_78 - 0x76) & 0x3f) & 0x1800000000003U) != 0)) ||
             ((uint)local_78 == 0x3c)) {
            uVar13 = 0xa6;
          }
          else {
            uVar11 = (uint)*(ushort *)(&DAT_002c8a2a + (long)(int)(uint)local_78 * 2);
            if (*(ushort *)(&DAT_002c8a2a + (long)(int)(uint)local_78 * 2) != 0x3c) {
              uVar11 = (uint)local_78;
            }
            uVar12 = 0xa6;
            if (uVar11 != 0x16 && uVar11 != 0x3c) {
              uVar12 = 0x3c;
            }
            uVar13 = (ulong)uVar12;
          }
        }
      }
      else {
        if (local_8c != 0xa7) {
          if (local_8c != 0xb7) goto LAB_0059b1c4;
          goto LAB_0059ad78;
        }
        if (iVar7 != 0x17) goto LAB_0059ad70;
        pcVar10 = param_2 + 6;
        do {
          iVar7 = FUN_0059a0fc(pcVar10,&local_78);
          pcVar10 = pcVar10 + iVar7;
        } while ((uint)local_78 == 0xb8);
        if (((((uint)local_78 - 0x76 < 0x31) &&
             ((1L << ((ulong)((uint)local_78 - 0x76) & 0x3f) & 0x1800000000003U) != 0)) ||
            ((uint)local_78 == 0x3c)) ||
           ((*(short *)(&DAT_002c8a2a + (long)(int)(uint)local_78 * 2) == 0x3c ||
            ((uint)local_78 != 0x16)))) goto LAB_0059ad70;
        uVar13 = 0xa7;
      }
LAB_0059ad74:
      local_8c = (uint)uVar13;
    }
LAB_0059ad78:
    plVar3 = local_a08;
    param_1[0x23] = (long)param_2;
    *(int *)(param_1 + 0x24) = iVar6;
    lVar9 = param_1[0x24];
    uVar5 = *local_a10;
    do {
      plVar4 = local_a08;
      if (uVar5 < 0x247) {
        uVar16 = uVar13;
        do {
          uVar19 = uVar16;
          lVar14 = (ulong)*(ushort *)(&DAT_002c8d3a + (ulong)uVar5 * 2) + (uVar19 & 0xffff);
          if (*(short *)(&DAT_002c91c8 + lVar14 * 2) == (short)uVar19) {
            puVar21 = (ushort *)(&DAT_002ca47c + lVar14 * 2);
            goto LAB_0059ae38;
          }
          uVar16 = (ulong)*(ushort *)(&DAT_002c8a2a + (uVar19 & 0xffff) * 2);
        } while (*(ushort *)(&DAT_002c8a2a + (uVar19 & 0xffff) * 2) != 0);
        if (((uVar19 & 0xffff) == 0) ||
           (lVar14 = (ulong)*(ushort *)(&DAT_002c8d3a + (ulong)uVar5 * 2) + 0x66,
           *(short *)(&DAT_002c91c8 + lVar14 * 2) != 0x66)) {
          puVar21 = (ushort *)(&DAT_002cb5ba + (ulong)uVar5 * 2);
        }
        else {
          puVar21 = (ushort *)(&DAT_002ca47c + lVar14 * 2);
        }
LAB_0059ae38:
        uVar5 = *puVar21;
      }
      uVar11 = (uint)uVar5;
      if (uVar11 < 0x4e9) {
        if (uVar11 < 0x4e6) {
          local_a10 = local_a10 + 0xc;
          if ((local_a00 < local_a10) &&
             (iVar7 = FUN_005ecf74(&local_a10), plVar3 = local_a08, iVar7 != 0)) {
            local_a10 = local_a10 + -0xc;
            if (local_9f8 < local_a10) {
              do {
                puVar20 = local_a10 + 4;
                puVar21 = local_a10 + 1;
                local_a10 = local_a10 + -0xc;
                FUN_005ef88c(local_a08,*puVar21,puVar20);
              } while (local_9f8 < local_a10);
            }
            lVar9 = *plVar3;
            if ((*(char *)(lVar9 + 0x67) == '\0') && (*(char *)(lVar9 + 0x68) == '\0')) {
              *(undefined1 *)(lVar9 + 0x67) = 1;
              if (0 < *(int *)(lVar9 + 0xdc)) {
                *(undefined4 *)(lVar9 + 400) = 1;
              }
              *(undefined2 *)(lVar9 + 0x19c) = 0;
              *(int *)(lVar9 + 0x198) = *(int *)(lVar9 + 0x198) + 1;
              if (*(long *)(lVar9 + 0x158) != 0) {
                FUN_00595b78(*(long *)(lVar9 + 0x158),"out of memory");
                lVar14 = *(long *)(*(long *)(lVar9 + 0x158) + 0xd8);
                *(undefined4 *)(*(long *)(lVar9 + 0x158) + 0x18) = 7;
                for (; lVar14 != 0; lVar14 = *(long *)(lVar14 + 0xd8)) {
                  *(int *)(lVar14 + 0x34) = *(int *)(lVar14 + 0x34) + 1;
                  *(undefined4 *)(lVar14 + 0x18) = 7;
                }
              }
            }
            iVar7 = (int)param_1[3];
            puVar21 = local_a10;
            local_a08 = plVar3;
            puVar20 = local_9f8;
          }
          else {
            *(char **)(local_a10 + 4) = param_2;
            *(long *)(local_a10 + 8) = lVar9;
            local_a10[1] = (ushort)uVar13;
            uVar1 = uVar5 + 0x19c;
            if (uVar5 < 0x247) {
              uVar1 = uVar5;
            }
            *local_a10 = uVar1;
            iVar7 = (int)param_1[3];
            puVar21 = local_a10;
            puVar20 = local_9f8;
          }
        }
        else if (uVar5 == 0x4e7) {
          iVar7 = (int)param_1[3];
          puVar21 = local_a10 + -0xc;
          puVar20 = local_9f8;
        }
        else {
          local_88 = param_2;
          lStack_80 = lVar9;
          local_70 = lVar9;
          if (*param_2 == '\0') {
            local_78 = param_2;
            FUN_00595b78(local_a08,"incomplete input");
          }
          else {
            local_78 = param_2;
            FUN_00595b78(local_a08,"near \"%T\": syntax error",&local_78);
          }
          local_a08 = plVar4;
          FUN_005ef88c(plVar4,uVar13,&local_88);
          iVar7 = (int)param_1[3];
          puVar21 = local_a10;
          puVar20 = local_9f8;
        }
        goto joined_r0x0059af9c;
      }
      if ((((&DAT_002c8ba0)[uVar11 - 0x4e9] == '\0') && (local_a00 <= local_a10)) &&
         (iVar7 = FUN_005ecf74(&local_a10), plVar4 = local_a08, iVar7 != 0)) goto code_r0x0059ae74;
      uVar5 = FUN_005ed094(&local_a10,(ulong)(uVar11 - 0x4e9),param_2,lVar9,plVar3);
    } while( true );
  }
LAB_0059b1a0:
  iVar8 = *(int *)((long)param_1 + 0x34);
  uVar17 = 0x12;
LAB_0059b1b4:
  *(undefined4 *)(param_1 + 3) = uVar17;
  *(int *)((long)param_1 + 0x34) = iVar8 + 1;
  puVar21 = local_a10;
  puVar20 = local_9f8;
LAB_0059b1f0:
  for (; puVar20 < puVar21; puVar21 = puVar21 + -0xc) {
    if (0xcd < puVar21[1]) {
      FUN_005ef88c(local_a08,puVar21[1],puVar21 + 4);
      puVar20 = local_9f8;
    }
  }
  if ((puVar20 != (ushort *)local_9f0) && (puVar20 != (ushort *)0x0)) {
    puVar15 = &DAT_00b0da18;
    if (DAT_00b0d9f0 != 0) {
      if (DAT_00b103d8 != (ushort *)0x0) {
        (*DAT_00b0da70)();
      }
      iVar8 = (*DAT_00b0da28)(puVar20);
      DAT_00b105b8 = DAT_00b105b8 - iVar8;
      DAT_00b10600 = DAT_00b10600 + -1;
      (*DAT_00b0da18)(puVar20);
      if (DAT_00b103d8 == (ushort *)0x0) goto LAB_0059b2ac;
      puVar15 = &DAT_00b0da80;
      puVar20 = DAT_00b103d8;
    }
    (*(code *)*puVar15)(puVar20);
  }
LAB_0059b2ac:
  if (*(char *)(lVar22 + 0x67) != '\0') {
    *(undefined4 *)(param_1 + 3) = 7;
  }
  lVar9 = param_1[1];
  if (lVar9 == 0) {
    uVar11 = *(uint *)(param_1 + 3);
    uVar17 = 0;
    if ((int)uVar11 < 0x65) {
      if (uVar11 != 0) {
        if (uVar11 == 100) {
          pcVar10 = "another row available";
        }
        else {
LAB_0059b508:
          uVar16 = (ulong)uVar11 & 0xff;
          if (((uint)uVar16 < 0x1d) && ((0x1410004U >> ((ulong)uVar11 & 0x3f) & 1) == 0)) {
            pcVar10 = (&PTR_s_not_an_error_00ad3f40)[uVar16];
          }
          else {
            pcVar10 = "unknown error";
          }
        }
LAB_0059b53c:
        lVar9 = FUN_00596068(lVar22,&DAT_002ad0ce,pcVar10);
        param_1[1] = lVar9;
        bVar2 = *(byte *)((long)param_1 + 0x24);
        goto joined_r0x0059b558;
      }
    }
    else if (uVar11 != 0x65) {
      if (uVar11 != 0x204) goto LAB_0059b508;
      pcVar10 = "abort due to ROLLBACK";
      goto LAB_0059b53c;
    }
  }
  else {
    bVar2 = *(byte *)((long)param_1 + 0x24);
joined_r0x0059b558:
    if ((bVar2 >> 4 & 1) == 0) {
      sqlite3_log((int)param_1[3],"%s in \"%s\"",lVar9,param_1[0x2a]);
    }
    uVar17 = 1;
  }
  puVar21 = (ushort *)param_1[0x31];
  param_1[0x2a] = (long)param_2;
  if (puVar21 != (ushort *)0x0) {
    puVar15 = &DAT_00b0da18;
    if (DAT_00b0d9f0 != 0) {
      if (DAT_00b103d8 != (ushort *)0x0) {
        (*DAT_00b0da70)();
      }
      iVar8 = (*DAT_00b0da28)(puVar21);
      DAT_00b105b8 = DAT_00b105b8 - iVar8;
      DAT_00b10600 = DAT_00b10600 + -1;
      (*DAT_00b0da18)(puVar21);
      if (DAT_00b103d8 == (ushort *)0x0) goto LAB_0059b36c;
      puVar15 = &DAT_00b0da80;
      puVar21 = DAT_00b103d8;
    }
    (*(code *)*puVar15)(puVar21);
  }
LAB_0059b36c:
  lVar9 = param_1[0x2b];
  if (((lVar9 != 0) && (*(char *)((long)param_1 + 300) == '\0')) &&
     ((*(long *)(lVar22 + 0x300) != 0 ||
      (iVar8 = *(int *)(lVar9 + 0x2c) + -1, *(int *)(lVar9 + 0x2c) = iVar8, iVar8 == 0)))) {
    FUN_005e9fb0(lVar22);
  }
  if ((param_1[0x2d] != 0) && (*(byte *)((long)param_1 + 300) < 2)) {
    FUN_00580600(lVar22);
  }
  puVar21 = (ushort *)param_1[0x28];
  if (puVar21 == (ushort *)0x0) goto LAB_0059b4dc;
  if (puVar21 < *(ushort **)(lVar22 + 0x1e8)) {
    if (*(ushort **)(lVar22 + 0x1d8) <= puVar21) {
      *(undefined8 *)puVar21 = *(undefined8 *)(lVar22 + 0x1d0);
      *(ushort **)(lVar22 + 0x1d0) = puVar21;
      goto LAB_0059b4dc;
    }
    if (*(ushort **)(lVar22 + 0x1e0) <= puVar21) {
      *(undefined8 *)puVar21 = *(undefined8 *)(lVar22 + 0x1c0);
      *(ushort **)(lVar22 + 0x1c0) = puVar21;
      goto LAB_0059b4dc;
    }
  }
  if (*(long *)(lVar22 + 0x300) == 0) {
    puVar15 = &DAT_00b0da18;
    if (DAT_00b0d9f0 != 0) {
      if (DAT_00b103d8 != (ushort *)0x0) {
        (*DAT_00b0da70)();
      }
      iVar8 = (*DAT_00b0da28)(puVar21);
      DAT_00b105b8 = DAT_00b105b8 - iVar8;
      DAT_00b10600 = DAT_00b10600 + -1;
      (*DAT_00b0da18)(puVar21);
      if (DAT_00b103d8 == (ushort *)0x0) goto LAB_0059b4dc;
      puVar15 = &DAT_00b0da80;
      puVar21 = DAT_00b103d8;
    }
    (*(code *)*puVar15)(puVar21);
  }
  else {
    FUN_005a7654(lVar22,puVar21);
  }
LAB_0059b4dc:
  *(undefined8 *)(lVar22 + 0x158) = uVar18;
  return uVar17;
LAB_0059ab7c:
  param_2 = param_2 + iVar6;
  iVar6 = FUN_0059a0fc(param_2,&local_8c);
  iVar8 = iVar8 - iVar6;
  if (iVar8 < 0) goto LAB_0059b1a0;
  goto LAB_0059ab98;
code_r0x0059ae74:
  if (local_9f8 < local_a10) {
    do {
      puVar20 = local_a10 + 4;
      puVar21 = local_a10 + 1;
      local_a10 = local_a10 + -0xc;
      FUN_005ef88c(local_a08,*puVar21,puVar20);
    } while (local_9f8 < local_a10);
  }
  lVar9 = *plVar4;
  if ((*(char *)(lVar9 + 0x67) == '\0') && (*(char *)(lVar9 + 0x68) == '\0')) {
    *(undefined1 *)(lVar9 + 0x67) = 1;
    if (0 < *(int *)(lVar9 + 0xdc)) {
      *(undefined4 *)(lVar9 + 400) = 1;
    }
    *(undefined2 *)(lVar9 + 0x19c) = 0;
    *(int *)(lVar9 + 0x198) = *(int *)(lVar9 + 0x198) + 1;
    if (*(long *)(lVar9 + 0x158) != 0) {
      FUN_00595b78(*(long *)(lVar9 + 0x158),"out of memory");
      lVar14 = *(long *)(*(long *)(lVar9 + 0x158) + 0xd8);
      *(undefined4 *)(*(long *)(lVar9 + 0x158) + 0x18) = 7;
      for (; lVar14 != 0; lVar14 = *(long *)(lVar14 + 0xd8)) {
        *(int *)(lVar14 + 0x34) = *(int *)(lVar14 + 0x34) + 1;
        *(undefined4 *)(lVar14 + 0x18) = 7;
      }
    }
  }
  iVar7 = (int)param_1[3];
  puVar21 = local_a10;
  local_a08 = plVar4;
  puVar20 = local_9f8;
joined_r0x0059af9c:
  param_2 = param_2 + iVar6;
  uVar16 = uVar13;
  local_a10 = puVar21;
  local_9f8 = puVar20;
  if (iVar7 != 0) goto LAB_0059b1f0;
  goto LAB_0059ab60;
}


// ===== 0059b560  sqlite3_vtab_on_conflict =====

undefined1 sqlite3_vtab_on_conflict(long param_1)

{
  char cVar1;
  char *pcVar2;
  
  if (param_1 == 0) {
    pcVar2 = "NULL";
  }
  else {
    cVar1 = *(char *)(param_1 + 0x71);
    if (cVar1 != -0x46) {
      if (cVar1 == 'v') {
        return (&DAT_002c7b07)[*(byte *)(param_1 + 0x6c)];
      }
      if (cVar1 != 'm') {
        pcVar2 = "invalid";
        goto LAB_0059b5d0;
      }
    }
    pcVar2 = "unopened";
  }
LAB_0059b5d0:
  sqlite3_log(0x15,"API call with %s database connection pointer",pcVar2);
  sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x26c7e,
              "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
  return 0x15;
}


// ===== 0059b61c  sqlite3_vtab_config =====

/* WARNING: Removing unreachable block (ram,0x0059b84c) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff90 : 0x0059b858 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 sqlite3_vtab_config(long param_1,int param_2,undefined1 param_3)

{
  char cVar1;
  char *pcVar2;
  long *plVar3;
  undefined4 uVar4;
  
  if (param_1 == 0) {
    pcVar2 = "NULL";
  }
  else {
    cVar1 = *(char *)(param_1 + 0x71);
    if (cVar1 != -0x46) {
      if (cVar1 == 'v') {
        if (*(long *)(param_1 + 0x18) != 0) {
          (*DAT_00b0da70)(*(long *)(param_1 + 0x18));
        }
        plVar3 = *(long **)(param_1 + 0x238);
        if (plVar3 == (long *)0x0) {
          uVar4 = 0x26c96;
        }
        else {
          if (param_2 < 3) {
            if (param_2 == 1) {
              uVar4 = 0;
              *(undefined1 *)(*plVar3 + 0x1c) = param_3;
              goto LAB_0059b7ec;
            }
            if (param_2 == 2) {
              uVar4 = 0;
              *(undefined1 *)(*plVar3 + 0x1e) = 0;
              goto LAB_0059b7ec;
            }
          }
          else {
            if (param_2 == 3) {
              uVar4 = 0;
              *(undefined1 *)(*plVar3 + 0x1e) = 2;
              goto LAB_0059b7ec;
            }
            if (param_2 == 4) {
              uVar4 = 0;
              *(undefined1 *)(*plVar3 + 0x1d) = 1;
              goto LAB_0059b7ec;
            }
          }
          uVar4 = 0x26cac;
        }
        sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",uVar4,
                    "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
        uVar4 = 0x15;
        *(undefined4 *)(param_1 + 0x50) = 0x15;
        FUN_005ac5c0(param_1,0x15);
LAB_0059b7ec:
        if (*(long *)(param_1 + 0x18) == 0) {
          return uVar4;
        }
        (*DAT_00b0da80)();
        return uVar4;
      }
      if (cVar1 != 'm') {
        pcVar2 = "invalid";
        goto LAB_0059b704;
      }
    }
    pcVar2 = "unopened";
  }
LAB_0059b704:
  sqlite3_log(0x15,"API call with %s database connection pointer",pcVar2);
  sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x26c91,
              "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
  return 0x15;
}


// ===== 0059b86c  sqlite3_vtab_collation =====

char * sqlite3_vtab_collation(int *param_1,uint param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  
  if (((int)param_2 < 0) || (*param_1 <= (int)param_2)) {
    return (char *)0x0;
  }
  lVar2 = *(long *)(param_1 + 0x18);
  iVar3 = *(int *)(*(long *)(param_1 + 2) + (ulong)param_2 * 0xc + 8);
  iVar4 = *(int *)(lVar2 + 0x14);
  if (iVar4 <= iVar3) {
    do {
      lVar2 = *(long *)(lVar2 + 8);
      iVar3 = iVar3 - iVar4;
      iVar4 = *(int *)(lVar2 + 0x14);
    } while (iVar4 <= iVar3);
  }
  if ((*(long *)(*(long *)(*(long *)(lVar2 + 0x20) + (long)iVar3 * 0x38) + 0x10) != 0) &&
     (puVar1 = (undefined8 *)FUN_0059b904(*(undefined8 *)(param_1 + 0x1a)),
     puVar1 != (undefined8 *)0x0)) {
    return (char *)*puVar1;
  }
  return "B";
}


// ===== 0059b904  FUN_0059b904 =====

void FUN_0059b904(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if ((*(byte *)(param_2 + 5) >> 2 & 1) == 0) {
    lVar1 = *(long *)(param_2 + 0x10);
    if ((*(byte *)(lVar1 + 5) >> 1 & 1) != 0) {
LAB_0059b968:
      FUN_005eacfc(param_1,lVar1);
      return;
    }
    lVar2 = *(long *)(param_2 + 0x18);
  }
  else {
    lVar1 = *(long *)(param_2 + 0x18);
    if ((*(byte *)(lVar1 + 5) >> 1 & 1) != 0) goto LAB_0059b968;
    lVar2 = *(long *)(param_2 + 0x10);
  }
  if ((lVar2 != 0) && ((*(byte *)(lVar2 + 5) >> 1 & 1) != 0)) {
    FUN_005eacfc(param_1,lVar2);
    return;
  }
  lVar1 = FUN_005eacfc(param_1,lVar1);
  if (lVar1 != 0) {
    return;
  }
  FUN_005eacfc(param_1,lVar2);
  return;
}


// ===== 0059b99c  sqlite3_vtab_in =====

undefined8 sqlite3_vtab_in(long param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = 1 << (ulong)(param_2 & 0x1f);
  if (0x1f < (int)param_2) {
    uVar1 = 0;
  }
  if ((*(uint *)(param_1 + 0x74) & uVar1) != 0) {
    if (param_3 == 0) {
      uVar1 = *(uint *)(param_1 + 0x78) & (uVar1 ^ 0xffffffff);
    }
    else {
      if (param_3 < 1) {
        return 1;
      }
      uVar1 = *(uint *)(param_1 + 0x78) | uVar1;
    }
    *(uint *)(param_1 + 0x78) = uVar1;
    return 1;
  }
  return 0;
}


// ===== 0059b9ec  sqlite3_vtab_rhs_value =====

int sqlite3_vtab_rhs_value(int *param_1,uint param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  
  if (((int)param_2 < 0) || (*param_1 <= (int)param_2)) {
    iVar1 = 0x15;
    sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x293de,
                "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
  }
  else {
    plVar4 = (long *)(param_1 + (ulong)param_2 * 2 + 0x20);
    lVar2 = *plVar4;
    if (lVar2 != 0) {
      iVar1 = 0;
      goto LAB_0059ba50;
    }
    lVar2 = *(long *)(param_1 + 0x18);
    iVar1 = *(int *)(*(long *)(param_1 + 2) + (ulong)param_2 * 0xc + 8);
    iVar3 = *(int *)(lVar2 + 0x14);
    if (iVar3 <= iVar1) {
      do {
        lVar2 = *(long *)(lVar2 + 8);
        iVar1 = iVar1 - iVar3;
        iVar3 = *(int *)(lVar2 + 0x14);
      } while (iVar3 <= iVar1);
    }
    lVar2 = *(long *)(*(long *)(*(long *)(lVar2 + 0x20) + (long)iVar1 * 0x38) + 0x18);
    if (lVar2 != 0) {
      iVar1 = FUN_005eb7a8(**(long **)(param_1 + 0x1a),lVar2,
                           *(undefined1 *)(**(long **)(param_1 + 0x1a) + 100),0x41,plVar4,0);
      lVar2 = *plVar4;
      goto LAB_0059ba50;
    }
    iVar1 = 0;
  }
  lVar2 = 0;
LAB_0059ba50:
  iVar3 = 0xc;
  if (lVar2 != 0 || iVar1 != 0) {
    iVar3 = iVar1;
  }
  *param_3 = lVar2;
  return iVar3;
}


// ===== 0059baf4  sqlite3_vtab_distinct =====

undefined4 sqlite3_vtab_distinct(long param_1)

{
  return *(undefined4 *)(param_1 + 0x70);
}


// ===== 0059bafc  sqlite3_keyword_name =====

undefined8 sqlite3_keyword_name(uint param_1,long *param_2,uint *param_3)

{
  if (0x92 < param_1) {
    return 1;
  }
  *param_2 = (long)("R" + *(ushort *)(&DAT_002c7da8 + ((ulong)param_1 + 1) * 2));
  *param_3 = (uint)(byte)(&UNK_002c7ed1)[param_1];
  return 0;
}


// ===== 0059bb48  sqlite3_keyword_count =====

undefined8 sqlite3_keyword_count(void)

{
  return 0x93;
}


// ===== 0059bb50  sqlite3_keyword_check =====

bool sqlite3_keyword_check(undefined8 param_1,int param_2)

{
  int local_14;
  
  local_14 = 0x3c;
  if (1 < param_2) {
    FUN_005ecdf0(param_1,param_2,&local_14);
    return local_14 != 0x3c;
  }
  return false;
}


// ===== 0059bb9c  sqlite3_complete =====

/* WARNING: Type propagation algorithm not settling */

bool sqlite3_complete(byte *param_1)

{
  byte bVar1;
  char cVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  byte bVar8;
  long lVar9;
  ulong uVar10;
  
  if (param_1 == (byte *)0x0) {
    sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x2c84d,
                "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
    return false;
  }
  uVar7 = 0;
  do {
    bVar8 = *param_1;
    uVar4 = (uint)bVar8;
    if (bVar8 < 0x27) {
      if (bVar8 < 0xc) {
        if (1 < bVar8 - 9) {
          if (bVar8 == 0) {
LAB_0059c918:
            return uVar7 == 1;
          }
          goto LAB_0059bd90;
        }
      }
      else if ((1 < uVar4 - 0xc) && (uVar4 != 0x20)) {
        if (bVar8 == 0x22) goto LAB_0059bd28;
LAB_0059bd90:
        if (((&DAT_002c7a08)[bVar8] & 0x46) == 0) goto LAB_0059bd3c;
        lVar6 = 0;
        lVar9 = -0x100000000;
        do {
          lVar3 = lVar6 + 1;
          lVar9 = lVar9 + 0x100000000;
          lVar6 = lVar6 + 1;
        } while (((&DAT_002c7a08)[param_1[lVar3]] & 0x46) != 0);
        uVar10 = (ulong)(uVar4 - 0x43);
        if (uVar4 - 0x43 < 0x32) {
          iVar5 = (int)lVar6;
          if ((1L << (uVar10 & 0x3f) & 0x100000001U) != 0) {
            if (iVar5 == 6) {
              if ((uVar4 & 0xffffffdf) == 0x43) {
                bVar8 = param_1[1];
                if (bVar8 == 0) {
                  cVar2 = (&DAT_002c78ae)[(byte)s_r_002a290a[0]];
joined_r0x0059c630:
                  if (cVar2 == '\0') {
LAB_0059c72c:
                    lVar6 = 4;
                    goto LAB_0059c888;
                  }
                }
                else if ((bVar8 & 0xdf) == 0x52) {
                  bVar8 = param_1[2];
                  if (bVar8 == 0) {
                    cVar2 = (&DAT_002c78ae)[(byte)s_e_002a290b[0]];
                    goto joined_r0x0059c630;
                  }
                  if ((bVar8 & 0xdf) != 0x45) {
                    if ((&DAT_002c78ae)[bVar8] == (&DAT_002c78ae)[(byte)s_e_002a290b[0]])
                    goto LAB_0059c72c;
                    goto LAB_0059c884;
                  }
                  bVar8 = param_1[3];
                  if (bVar8 == 0) {
                    cVar2 = (&DAT_002c78ae)[(byte)s_a_002a290c[0]];
                    goto joined_r0x0059c630;
                  }
                  if ((bVar8 & 0xdf) != 0x41) {
                    if ((&DAT_002c78ae)[bVar8] == (&DAT_002c78ae)[(byte)s_a_002a290c[0]])
                    goto LAB_0059c72c;
                    goto LAB_0059c884;
                  }
                  bVar8 = param_1[4];
                  if (bVar8 == 0) {
                    cVar2 = (&DAT_002c78ae)[(byte)s_t_002a290d[0]];
                    goto joined_r0x0059c630;
                  }
                  if ((bVar8 & 0xdf) == 0x54) {
                    bVar8 = param_1[5];
                    if (bVar8 == 0) {
                      cVar2 = (&DAT_002c78ae)[(byte)s_e_002a290e[0]];
                      goto joined_r0x0059c630;
                    }
                    if (((bVar8 & 0xdf) == 0x45) ||
                       ((&DAT_002c78ae)[bVar8] == (&DAT_002c78ae)[(byte)s_e_002a290e[0]]))
                    goto LAB_0059c72c;
                  }
                  else if ((&DAT_002c78ae)[bVar8] == (&DAT_002c78ae)[(byte)s_t_002a290d[0]])
                  goto LAB_0059c72c;
                }
                else if ((&DAT_002c78ae)[bVar8] == (&DAT_002c78ae)[(byte)s_r_002a290a[0]])
                goto LAB_0059c72c;
              }
              else if ((&DAT_002c78ae)[bVar8] == (&DAT_002c78ae)[(byte)s_c_002a2909[0]])
              goto LAB_0059c72c;
            }
            goto LAB_0059c884;
          }
          if ((1L << (uVar10 & 0x3f) & 0x400000004U) != 0) {
            if (iVar5 == 7) {
              if ((bVar8 & 0xdf) == 0x45) {
                bVar8 = param_1[1];
                if (bVar8 == 0) {
                  cVar2 = (&DAT_002c78ae)[(byte)s_x_002a8f81[0]];
joined_r0x0059c670:
                  if (cVar2 == '\0') {
LAB_0059c804:
                    lVar6 = 3;
                    goto LAB_0059c888;
                  }
                }
                else if ((bVar8 & 0xdf) == 0x58) {
                  bVar8 = param_1[2];
                  if (bVar8 == 0) {
                    cVar2 = (&DAT_002c78ae)[(byte)s_p_002a8f82[0]];
                    goto joined_r0x0059c670;
                  }
                  if ((bVar8 & 0xdf) != 0x50) {
                    if ((&DAT_002c78ae)[bVar8] == (&DAT_002c78ae)[(byte)s_p_002a8f82[0]])
                    goto LAB_0059c804;
                    goto LAB_0059c884;
                  }
                  bVar8 = param_1[3];
                  if (bVar8 == 0) {
                    cVar2 = (&DAT_002c78ae)[(byte)s_l_002a8f83[0]];
                    goto joined_r0x0059c670;
                  }
                  if ((bVar8 & 0xdf) != 0x4c) {
                    if ((&DAT_002c78ae)[bVar8] == (&DAT_002c78ae)[(byte)s_l_002a8f83[0]])
                    goto LAB_0059c804;
                    goto LAB_0059c884;
                  }
                  bVar8 = param_1[4];
                  if (bVar8 == 0) {
                    cVar2 = (&DAT_002c78ae)[(byte)s_a_002a8f84[0]];
                    goto joined_r0x0059c670;
                  }
                  if ((bVar8 & 0xdf) != 0x41) {
                    if ((&DAT_002c78ae)[bVar8] == (&DAT_002c78ae)[(byte)s_a_002a8f84[0]])
                    goto LAB_0059c804;
                    goto LAB_0059c884;
                  }
                  bVar8 = param_1[5];
                  if (bVar8 == 0) {
                    cVar2 = (&DAT_002c78ae)[(byte)s_i_002a8f85[0]];
                    goto joined_r0x0059c670;
                  }
                  if ((bVar8 & 0xdf) == 0x49) {
                    bVar8 = param_1[6];
                    if (bVar8 == 0) {
                      cVar2 = (&DAT_002c78ae)[(byte)s_n_002a8f86[0]];
                      goto joined_r0x0059c670;
                    }
                    if (((bVar8 & 0xdf) == 0x4e) ||
                       ((&DAT_002c78ae)[bVar8] == (&DAT_002c78ae)[(byte)s_n_002a8f86[0]]))
                    goto LAB_0059c804;
                  }
                  else if ((&DAT_002c78ae)[bVar8] == (&DAT_002c78ae)[(byte)s_i_002a8f85[0]])
                  goto LAB_0059c804;
                }
                else if ((&DAT_002c78ae)[bVar8] == (&DAT_002c78ae)[(byte)s_x_002a8f81[0]])
                goto LAB_0059c804;
              }
              else if ((&DAT_002c78ae)[bVar8] == (&DAT_002c78ae)[(byte)s_e_002a8f80[0]])
              goto LAB_0059c804;
            }
            else if (iVar5 == 3) {
              if ((bVar8 & 0xdf) == 0x45) {
                bVar8 = param_1[1];
                if (bVar8 == 0) {
                  cVar2 = (&DAT_002c78ae)[DAT_002b83c0];
joined_r0x0059c2a0:
                  if (cVar2 == '\0') {
LAB_0059c408:
                    lVar6 = 7;
                    goto LAB_0059c888;
                  }
                }
                else if ((bVar8 & 0xdf) == 0x4e) {
                  bVar8 = param_1[2];
                  if (bVar8 == 0) {
                    cVar2 = (&DAT_002c78ae)[DAT_002b83c1];
                    goto joined_r0x0059c2a0;
                  }
                  if (((bVar8 & 0xdf) == 0x44) ||
                     ((&DAT_002c78ae)[bVar8] == (&DAT_002c78ae)[DAT_002b83c1])) goto LAB_0059c408;
                }
                else if ((&DAT_002c78ae)[bVar8] == (&DAT_002c78ae)[DAT_002b83c0]) goto LAB_0059c408;
              }
              else if ((&DAT_002c78ae)[bVar8] == (&DAT_002c78ae)[DAT_002b83bf]) goto LAB_0059c408;
            }
            goto LAB_0059c884;
          }
          lVar6 = 2;
          if ((1L << (uVar10 & 0x3f) & 0x2000000020000U) != 0) {
            if (iVar5 == 4) {
              if ((bVar8 & 0xdf) == 0x54) {
                bVar8 = param_1[1];
                if (bVar8 == 0) {
                  cVar2 = (&DAT_002c78ae)[DAT_002aeb9c];
joined_r0x0059c5b8:
                  if (cVar2 == '\0') {
LAB_0059c864:
                    lVar6 = 5;
                    goto LAB_0059c888;
                  }
                }
                else if ((bVar8 & 0xdf) == 0x45) {
                  bVar8 = param_1[2];
                  if (bVar8 == 0) {
                    cVar2 = (&DAT_002c78ae)[DAT_002aeb9d];
                    goto joined_r0x0059c5b8;
                  }
                  if ((bVar8 & 0xdf) == 0x4d) {
                    bVar8 = param_1[3];
                    if (bVar8 == 0) {
                      cVar2 = (&DAT_002c78ae)[DAT_002aeb9e];
                      goto joined_r0x0059c5b8;
                    }
                    if (((bVar8 & 0xdf) == 0x50) ||
                       ((&DAT_002c78ae)[bVar8] == (&DAT_002c78ae)[DAT_002aeb9e])) goto LAB_0059c864;
                  }
                  else if ((&DAT_002c78ae)[bVar8] == (&DAT_002c78ae)[DAT_002aeb9d])
                  goto LAB_0059c864;
                }
                else if ((&DAT_002c78ae)[bVar8] == (&DAT_002c78ae)[DAT_002aeb9c]) goto LAB_0059c864;
              }
              else if ((&DAT_002c78ae)[bVar8] == (&DAT_002c78ae)[DAT_002aeb9b]) goto LAB_0059c864;
            }
            else if (iVar5 == 9) {
              if ((bVar8 & 0xdf) == 0x54) {
                bVar8 = param_1[1];
                if (bVar8 == 0) {
                  cVar2 = (&DAT_002c78ae)[(byte)s_e_002ad0d2[0]];
                  goto joined_r0x0059c5b8;
                }
                if ((bVar8 & 0xdf) == 0x45) {
                  bVar8 = param_1[2];
                  if (bVar8 == 0) {
                    cVar2 = (&DAT_002c78ae)[(byte)s_m_002ad0d3[0]];
                    goto joined_r0x0059c5b8;
                  }
                  if ((bVar8 & 0xdf) == 0x4d) {
                    bVar8 = param_1[3];
                    if (bVar8 == 0) {
                      cVar2 = (&DAT_002c78ae)[(byte)s_p_002ad0d4[0]];
                      goto joined_r0x0059c5b8;
                    }
                    if ((bVar8 & 0xdf) == 0x50) {
                      bVar8 = param_1[4];
                      if (bVar8 == 0) {
                        cVar2 = (&DAT_002c78ae)[(byte)s_o_002ad0d5[0]];
                        goto joined_r0x0059c5b8;
                      }
                      if ((bVar8 & 0xdf) == 0x4f) {
                        bVar8 = param_1[5];
                        if (bVar8 == 0) {
                          cVar2 = (&DAT_002c78ae)[(byte)s_r_002ad0d6[0]];
                          goto joined_r0x0059c5b8;
                        }
                        if ((bVar8 & 0xdf) == 0x52) {
                          bVar8 = param_1[6];
                          if (bVar8 == 0) {
                            cVar2 = (&DAT_002c78ae)[(byte)s_a_002ad0d7[0]];
                            goto joined_r0x0059c5b8;
                          }
                          if ((bVar8 & 0xdf) == 0x41) {
                            bVar8 = param_1[7];
                            if (bVar8 == 0) {
                              cVar2 = (&DAT_002c78ae)[(byte)s_r_002ad0d8[0]];
                              goto joined_r0x0059c5b8;
                            }
                            if ((bVar8 & 0xdf) == 0x52) {
                              bVar8 = param_1[8];
                              if (bVar8 == 0) {
                                cVar2 = (&DAT_002c78ae)[(byte)s_y_002ad0d9[0]];
                                goto joined_r0x0059c5b8;
                              }
                              if (((bVar8 & 0xdf) == 0x59) ||
                                 ((&DAT_002c78ae)[bVar8] == (&DAT_002c78ae)[(byte)s_y_002ad0d9[0]]))
                              goto LAB_0059c864;
                            }
                            else if ((&DAT_002c78ae)[bVar8] ==
                                     (&DAT_002c78ae)[(byte)s_r_002ad0d8[0]]) goto LAB_0059c864;
                          }
                          else if ((&DAT_002c78ae)[bVar8] == (&DAT_002c78ae)[(byte)s_a_002ad0d7[0]])
                          goto LAB_0059c864;
                        }
                        else if ((&DAT_002c78ae)[bVar8] == (&DAT_002c78ae)[(byte)s_r_002ad0d6[0]])
                        goto LAB_0059c864;
                      }
                      else if ((&DAT_002c78ae)[bVar8] == (&DAT_002c78ae)[(byte)s_o_002ad0d5[0]])
                      goto LAB_0059c864;
                    }
                    else if ((&DAT_002c78ae)[bVar8] == (&DAT_002c78ae)[(byte)s_p_002ad0d4[0]])
                    goto LAB_0059c864;
                  }
                  else if ((&DAT_002c78ae)[bVar8] == (&DAT_002c78ae)[(byte)s_m_002ad0d3[0]])
                  goto LAB_0059c864;
                }
                else if ((&DAT_002c78ae)[bVar8] == (&DAT_002c78ae)[(byte)s_e_002ad0d2[0]])
                goto LAB_0059c864;
              }
              else if ((&DAT_002c78ae)[bVar8] == (&DAT_002c78ae)[(byte)s_t_002ad0d1[0]])
              goto LAB_0059c864;
            }
            else if (iVar5 == 7) {
              if ((uVar4 & 0xffffffdf) == 0x54) {
                bVar8 = param_1[1];
                if (bVar8 == 0) {
                  cVar2 = (&DAT_002c78ae)[(byte)s_r_002ab6e5[0]];
joined_r0x0059c6c8:
                  if (cVar2 == '\0') {
LAB_0059c83c:
                    lVar6 = 6;
                    goto LAB_0059c888;
                  }
                }
                else if ((bVar8 & 0xdf) == 0x52) {
                  bVar8 = param_1[2];
                  if (bVar8 == 0) {
                    cVar2 = (&DAT_002c78ae)[(byte)s_i_002ab6e6[0]];
                    goto joined_r0x0059c6c8;
                  }
                  if ((bVar8 & 0xdf) != 0x49) {
                    if ((&DAT_002c78ae)[bVar8] == (&DAT_002c78ae)[(byte)s_i_002ab6e6[0]])
                    goto LAB_0059c83c;
                    goto LAB_0059c884;
                  }
                  bVar8 = param_1[3];
                  if (bVar8 == 0) {
                    cVar2 = (&DAT_002c78ae)[(byte)s_g_002ab6e7[0]];
                    goto joined_r0x0059c6c8;
                  }
                  if ((bVar8 & 0xdf) != 0x47) {
                    if ((&DAT_002c78ae)[bVar8] == (&DAT_002c78ae)[(byte)s_g_002ab6e7[0]])
                    goto LAB_0059c83c;
                    goto LAB_0059c884;
                  }
                  bVar8 = param_1[4];
                  if (bVar8 == 0) {
                    cVar2 = (&DAT_002c78ae)[(byte)s_g_002ab6e8[0]];
                    goto joined_r0x0059c6c8;
                  }
                  if ((bVar8 & 0xdf) != 0x47) {
                    if ((&DAT_002c78ae)[bVar8] == (&DAT_002c78ae)[(byte)s_g_002ab6e8[0]])
                    goto LAB_0059c83c;
                    goto LAB_0059c884;
                  }
                  bVar8 = param_1[5];
                  if (bVar8 == 0) {
                    cVar2 = (&DAT_002c78ae)[(byte)s_e_002ab6e9[0]];
                    goto joined_r0x0059c6c8;
                  }
                  if ((bVar8 & 0xdf) == 0x45) {
                    bVar8 = param_1[6];
                    if (bVar8 == 0) {
                      cVar2 = (&DAT_002c78ae)[(byte)s_r_002ab6ea[0]];
                      goto joined_r0x0059c6c8;
                    }
                    if (((bVar8 & 0xdf) == 0x52) ||
                       ((&DAT_002c78ae)[bVar8] == (&DAT_002c78ae)[(byte)s_r_002ab6ea[0]]))
                    goto LAB_0059c83c;
                  }
                  else if ((&DAT_002c78ae)[bVar8] == (&DAT_002c78ae)[(byte)s_e_002ab6e9[0]])
                  goto LAB_0059c83c;
                }
                else if ((&DAT_002c78ae)[bVar8] == (&DAT_002c78ae)[(byte)s_r_002ab6e5[0]])
                goto LAB_0059c83c;
              }
              else if ((&DAT_002c78ae)[bVar8] == (&DAT_002c78ae)[(byte)s_t_002ab6e4[0]])
              goto LAB_0059c83c;
            }
            goto LAB_0059c884;
          }
        }
        else {
LAB_0059c884:
          lVar6 = 2;
        }
LAB_0059c888:
        param_1 = param_1 + (lVar9 >> 0x20);
        goto LAB_0059bc78;
      }
LAB_0059bc74:
      lVar6 = 1;
    }
    else {
      if (bVar8 < 0x3b) {
        if (bVar8 == 0x27) {
LAB_0059bd28:
          do {
            param_1 = param_1 + 1;
            bVar1 = *param_1;
            if (bVar1 == 0) break;
          } while (bVar1 != bVar8);
          if (bVar1 == 0) {
            return false;
          }
        }
        else if (uVar4 == 0x2d) {
          if (param_1[1] == 0x2d) {
            bVar8 = 0x2d;
            while (bVar8 != 10) {
              param_1 = param_1 + 1;
              bVar8 = *param_1;
              if (bVar8 == 0) goto LAB_0059c918;
            }
            goto LAB_0059bc74;
          }
        }
        else {
          if (uVar4 != 0x2f) goto LAB_0059bd90;
          if (param_1[1] == 0x2a) {
            param_1 = param_1 + 3;
            do {
              if (param_1[-1] == 0x2a) {
                if (*param_1 == 0x2f) goto LAB_0059bc74;
              }
              else if (param_1[-1] == 0) {
                return false;
              }
              param_1 = param_1 + 1;
            } while( true );
          }
        }
      }
      else {
        if (uVar4 == 0x3b) {
          lVar6 = 0;
          goto LAB_0059bc78;
        }
        if (uVar4 != 0x5b) {
          if (bVar8 != 0x60) goto LAB_0059bd90;
          goto LAB_0059bd28;
        }
        do {
          param_1 = param_1 + 1;
          if (*param_1 == 0) {
            return false;
          }
        } while (*param_1 != 0x5d);
      }
LAB_0059bd3c:
      lVar6 = 2;
    }
LAB_0059bc78:
    param_1 = param_1 + 1;
    uVar7 = (uint)(byte)(&DAT_002c7f64)[lVar6 + (ulong)uVar7 * 8];
  } while( true );
}


// ===== 0059c924  sqlite3_complete16 =====

ulong sqlite3_complete16(undefined8 param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  
  uVar2 = sqlite3_initialize();
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  puVar3 = (undefined8 *)FUN_005827b0(0x38);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[6] = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
    *(undefined2 *)((long)puVar3 + 0x14) = 1;
    FUN_00590724(puVar3,param_1,0xffffffffffffffff,2,0);
    if ((((*(ushort *)((long)puVar3 + 0x14) ^ 0xffff) & 0x202) == 0) &&
       (*(char *)((long)puVar3 + 0x16) == '\x01')) {
      lVar4 = puVar3[1];
    }
    else {
      if ((*(ushort *)((long)puVar3 + 0x14) & 1) != 0) goto LAB_0059c9e4;
      lVar4 = FUN_005c17b0(puVar3,1);
    }
    if (lVar4 != 0) {
      uVar1 = sqlite3_complete();
      FUN_005900cc(puVar3);
      return (ulong)(uVar1 & 0xff);
    }
  }
LAB_0059c9e4:
  FUN_005900cc(puVar3);
  return 7;
}


// ===== 0059ca00  sqlite3_libversion =====

undefined * sqlite3_libversion(void)

{
  return PTR_sqlite3_version_00b00db0;
}


// ===== 0059ca0c  sqlite3_libversion_number =====

undefined * sqlite3_libversion_number(void)

{
  return &DAT_002e8a12;
}


// ===== 0059ca18  sqlite3_threadsafe =====

undefined8 sqlite3_threadsafe(void)

{
  return 1;
}


// ===== 0059ca20  FUN_0059ca20 =====

void FUN_0059ca20(void)

{
  if (DAT_00b0daa8 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0059ca48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_00b0daa8)(DAT_00b0daa0);
    return;
  }
  sqlite3_config(0x12,&DAT_00ad3ed8);
                    /* WARNING: Could not recover jumptable at 0x0059ca70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00b0daa8)(DAT_00b0daa0);
  return;
}


// ===== 0059ca74  FUN_0059ca74 =====

undefined8 FUN_0059ca74(void)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  iVar2 = sqlite3_initialize();
  if (iVar2 != 0) {
    return 1;
  }
  uVar4 = DAT_00b0d5a8;
  puVar7 = DAT_00b10370;
  if ((DAT_00b0d9f4 != '\0') &&
     (lVar3 = (*DAT_00b0da60)(2), uVar4 = DAT_00b0d5a8, puVar7 = DAT_00b10370, lVar3 != 0)) {
    (*DAT_00b0da70)();
    puVar7 = DAT_00b10370;
    (*DAT_00b0da80)(lVar3);
    uVar4 = DAT_00b0d5a8;
  }
  DAT_00b0d5a8 = puVar7;
  if (DAT_00b0d5a8 == (undefined *)0x0) {
    DAT_00b0d5a8 = (undefined *)uVar4;
    return 1;
  }
  DAT_00b0d58c = *(uint *)(DAT_00b0d5a8 + 4);
  if (DAT_00b0d58c < 0x19) {
    DAT_00b0d58c = 0x18;
  }
  uVar4 = sqlite3_initialize();
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  if (DAT_00b0d9f4 == '\0') {
    lVar3 = 0;
LAB_0059cb70:
    bVar1 = true;
  }
  else {
    lVar3 = (*DAT_00b0da60)(2);
    if (lVar3 == 0) goto LAB_0059cb70;
    (*DAT_00b0da70)();
    bVar1 = false;
  }
  puVar5 = &DAT_00b10370;
  if (DAT_00b10370 == &DAT_00b0d588) {
LAB_0059cbb8:
    *puVar5 = DAT_00b0d598;
LAB_0059cbcc:
    if (DAT_00b10370 != (undefined *)0x0) {
      DAT_00b0d598 = *(undefined8 *)(DAT_00b10370 + 0x10);
      *(undefined **)(DAT_00b10370 + 0x10) = &DAT_00b0d588;
      goto joined_r0x0059cbdc;
    }
  }
  else {
    puVar7 = DAT_00b10370;
    if (DAT_00b10370 != (undefined *)0x0) {
      do {
        puVar6 = puVar7;
        puVar7 = *(undefined **)(puVar6 + 0x10);
        if (puVar7 == (undefined *)0x0) break;
      } while (puVar7 != &DAT_00b0d588);
      if (puVar7 == &DAT_00b0d588) {
        puVar5 = (undefined8 *)(puVar6 + 0x10);
        goto LAB_0059cbb8;
      }
      goto LAB_0059cbcc;
    }
  }
  DAT_00b0d598 = 0;
  DAT_00b10370 = &DAT_00b0d588;
joined_r0x0059cbdc:
  if (!bVar1) {
    (*DAT_00b0da80)(lVar3);
  }
  return 0;
}


// ===== 0059cc1c  FUN_0059cc1c =====

void FUN_0059cc1c(long *param_1,uint param_2,int param_3)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  
  if (DAT_00b10578 != 0) {
    iVar2 = 0;
    if (param_1 != (long *)0x0) {
      iVar2 = param_3;
    }
    DAT_00b10584 = 0;
    if (iVar2 != 0) {
      DAT_00b10584 = param_2 & 0xfffffff8;
    }
    if (iVar2 < 0x5b) {
      DAT_00b1058c = iVar2 / 10 + 1;
      if (iVar2 == 0) {
        DAT_00b10588 = iVar2;
        DAT_00b10590 = param_1;
        DAT_00b10598 = param_1;
        DAT_00b105a8 = 0;
        DAT_00b105b0 = iVar2;
        DAT_00b105b4 = 0;
        return;
      }
    }
    else {
      DAT_00b1058c = 10;
    }
    DAT_00b105b4 = 0;
    lVar3 = (long)(int)DAT_00b10584;
    plVar4 = (long *)0;
    DAT_00b10588 = iVar2;
    DAT_00b10590 = param_1;
    DAT_00b105b0 = iVar2;
    do {
      plVar1 = param_1;
      iVar2 = iVar2 + -1;
      *plVar1 = (long)plVar4;
      DAT_00b10598 = (long *)((long)plVar1 + lVar3);
      param_1 = DAT_00b10598;
      plVar4 = plVar1;
    } while (iVar2 != 0);
    DAT_00b105a8 = (long)DAT_00b10598 - lVar3;
  }
  return;
}


// ===== 0059ccdc  sqlite3_shutdown =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 sqlite3_shutdown(void)

{
  if (DAT_00b0db44 != 0) {
    DAT_00b10378 = 0;
    sqlite3_reset_auto_extension();
    DAT_00b0db44 = 0;
  }
  if (DAT_00b0db54 != 0) {
    if (DAT_00b0dab0 != (code *)0x0) {
      (*DAT_00b0dab0)(DAT_00b0daa0);
    }
    DAT_00b0db54 = 0;
  }
  if (DAT_00b0db50 != 0) {
    if (DAT_00b0da40 != (code *)0x0) {
      (*DAT_00b0da40)(DAT_00b0da48);
    }
    DAT_00b0db50 = 0;
    *(undefined8 *)PTR_sqlite3_data_directory_00b00db8 = 0;
    DAT_00b103e0 = 0;
    DAT_00b103d8 = 0;
    _DAT_00b103f0 = 0;
    DAT_00b103e8 = 0;
    *(undefined8 *)PTR_sqlite3_temp_directory_00b00dc0 = 0;
  }
  if (DAT_00b0db4c != 0) {
    if (DAT_00b0da58 != (code *)0x0) {
      (*DAT_00b0da58)();
    }
    DAT_00b0db4c = 0;
  }
  return 0;
}


// ===== 0059cdac  sqlite3_config =====

/* WARNING: Removing unreachable block (ram,0x0059d3a0) */
/* WARNING: Removing unreachable block (ram,0x0059d2c4) */
/* WARNING: Removing unreachable block (ram,0x0059d72c) */
/* WARNING: Removing unreachable block (ram,0x0059d418) */
/* WARNING: Removing unreachable block (ram,0x0059d294) */
/* WARNING: Removing unreachable block (ram,0x0059d6a0) */
/* WARNING: Removing unreachable block (ram,0x0059d6b0) */
/* WARNING: Removing unreachable block (ram,0x0059d6fc) */
/* WARNING: Removing unreachable block (ram,0x0059d570) */
/* WARNING: Removing unreachable block (ram,0x0059d2f4) */
/* WARNING: Removing unreachable block (ram,0x0059d3d0) */
/* WARNING: Removing unreachable block (ram,0x0059d3e0) */
/* WARNING: Removing unreachable block (ram,0x0059d488) */
/* WARNING: Removing unreachable block (ram,0x0059d4a0) */
/* WARNING: Removing unreachable block (ram,0x0059d350) */
/* WARNING: Removing unreachable block (ram,0x0059d620) */
/* WARNING: Removing unreachable block (ram,0x0059d670) */
/* WARNING: Removing unreachable block (ram,0x0059d510) */
/* WARNING: Removing unreachable block (ram,0x0059d528) */
/* WARNING: Removing unreachable block (ram,0x0059d540) */
/* WARNING: Removing unreachable block (ram,0x0059d448) */
/* WARNING: Removing unreachable block (ram,0x0059d324) */
/* WARNING: Removing unreachable block (ram,0x0059d4d0) */
/* WARNING: Removing unreachable block (ram,0x0059d5c8) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff88 : 0x0059d300 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 sqlite3_config(ulong param_1,long *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *local_78;
  ulong uStack_70;
  undefined4 local_68;
  
  lVar2 = DAT_00b0da50;
  if ((DAT_00b0db44 != 0) &&
     ((0x3f < (uint)param_1 || ((1L << (param_1 & 0x3f) & 0x1010000U) == 0)))) {
    sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x2cb00,
                "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
    return 0x15;
  }
  uVar1 = SUB81(local_78,0);
  switch((uint)param_1) {
  case 1:
    _DAT_00b0d9f4 = 0;
    return 0;
  case 2:
    _DAT_00b0d9f4 = 1;
    break;
  case 3:
    _DAT_00b0d9f4 = 0x101;
    break;
  case 4:
    DAT_00b0da38 = local_78[5];
    DAT_00b0da30 = local_78[4];
    DAT_00b0da48 = local_78[7];
    DAT_00b0da40 = local_78[6];
    DAT_00b0da18 = local_78[1];
    DAT_00b0da10 = *local_78;
    DAT_00b0da28 = local_78[3];
    DAT_00b0da20 = local_78[2];
    return 0;
  case 5:
    if (DAT_00b0da10 == 0) {
      sqlite3_config(4,&PTR_FUN_00ad3e98);
      local_78 = param_2;
    }
    lVar8 = DAT_00b0da48;
    lVar7 = DAT_00b0da40;
    lVar6 = DAT_00b0da30;
    lVar5 = DAT_00b0da28;
    lVar4 = DAT_00b0da20;
    lVar3 = DAT_00b0da18;
    lVar2 = DAT_00b0da10;
    local_78[5] = DAT_00b0da38;
    local_78[4] = lVar6;
    local_78[7] = lVar8;
    local_78[6] = lVar7;
    local_78[1] = lVar3;
    *local_78 = lVar2;
    local_78[3] = lVar5;
    local_78[2] = lVar4;
    return 0;
  default:
    return 1;
  case 7:
    DAT_00b0db30 = param_3;
    DAT_00b0db28 = param_2;
    DAT_00b0db34 = local_68;
    return 0;
  case 9:
    DAT_00b0d9f0 = local_78._0_4_;
    return 0;
  case 10:
    DAT_00b0da58 = local_78[1];
    DAT_00b0da50 = *local_78;
    DAT_00b0da90 = local_78[8];
    DAT_00b0da78 = local_78[5];
    DAT_00b0da70 = local_78[4];
    DAT_00b0da88 = local_78[7];
    DAT_00b0da80 = local_78[6];
    DAT_00b0da68 = local_78[3];
    DAT_00b0da60 = local_78[2];
    return 0;
  case 0xb:
    local_78[1] = DAT_00b0da58;
    *local_78 = lVar2;
    lVar7 = DAT_00b0da88;
    lVar6 = DAT_00b0da80;
    lVar5 = DAT_00b0da78;
    lVar4 = DAT_00b0da70;
    lVar3 = DAT_00b0da68;
    lVar2 = DAT_00b0da60;
    local_78[8] = DAT_00b0da90;
    local_78[5] = lVar5;
    local_78[4] = lVar4;
    local_78[7] = lVar7;
    local_78[6] = lVar6;
    local_78[3] = lVar3;
    local_78[2] = lVar2;
    return 0;
  case 0xd:
    local_78._0_4_ = SUB84(param_2,0);
    DAT_00b0da04 = local_78._0_4_;
    DAT_00b0da08 = (undefined4)uStack_70;
    return 0;
  case 0xe:
    return 0;
  case 0x10:
    DAT_00b0db68 = param_2;
    DAT_00b0db70 = uStack_70;
    return 0;
  case 0x11:
    DAT_00b0d9f6 = uVar1;
    return 0;
  case 0x12:
    DAT_00b0daa0 = local_78[1];
    _DAT_00b0da98 = *local_78;
    DAT_00b0dab0 = local_78[3];
    DAT_00b0daa8 = local_78[2];
    DAT_00b0dac0 = local_78[5];
    DAT_00b0dab8 = local_78[4];
    DAT_00b0daf8 = local_78[0xc];
    DAT_00b0dae0 = local_78[9];
    DAT_00b0dad8 = local_78[8];
    DAT_00b0daf0 = local_78[0xb];
    DAT_00b0dae8 = local_78[10];
    DAT_00b0dad0 = local_78[7];
    DAT_00b0dac8 = local_78[6];
    return 0;
  case 0x13:
    if (DAT_00b0daa8 == 0) {
      sqlite3_config(0x12,&DAT_00ad3ed8);
      local_78 = param_2;
    }
    lVar6 = DAT_00b0dac0;
    lVar5 = DAT_00b0dab8;
    lVar4 = DAT_00b0dab0;
    lVar3 = DAT_00b0daa8;
    lVar2 = _DAT_00b0da98;
    local_78[1] = DAT_00b0daa0;
    *local_78 = lVar2;
    local_78[3] = lVar4;
    local_78[2] = lVar3;
    local_78[5] = lVar6;
    local_78[4] = lVar5;
    lVar7 = DAT_00b0daf0;
    lVar6 = DAT_00b0dae8;
    lVar5 = DAT_00b0dae0;
    lVar4 = DAT_00b0dad8;
    lVar3 = DAT_00b0dad0;
    lVar2 = DAT_00b0dac8;
    local_78[0xc] = DAT_00b0daf8;
    local_78[9] = lVar5;
    local_78[8] = lVar4;
    local_78[0xb] = lVar7;
    local_78[10] = lVar6;
    local_78[7] = lVar3;
    local_78[6] = lVar2;
    return 0;
  case 0x14:
    DAT_00b0d9f7 = uVar1;
    return 0;
  case 0x16:
    DAT_00b0db18 = (ulong)param_2 & ((long)param_2 >> 0x3f ^ 0xffffffffffffffffU);
    if (0x7ffeffff < uStack_70) {
      uStack_70 = 0x7fff0000;
    }
    if (uStack_70 <= DAT_00b0db18) {
      DAT_00b0db18 = uStack_70;
    }
    DAT_00b0db20 = uStack_70;
    return 0;
  case 0x18:
    *(undefined4 *)local_78 = 0x110;
    return 0;
  case 0x19:
    DAT_00b0db40 = local_78._0_4_;
    return 0;
  case 0x1a:
    DAT_00b0da0c = local_78._0_4_;
    return 0;
  case 0x1b:
    DAT_00b0d9f8 = uVar1;
    return 0;
  case 0x1d:
    DAT_00b0db78 = local_78;
    return 0;
  case 0x1e:
    *(undefined4 *)local_78 = 0;
    return 0;
  }
  return 0;
}


// ===== 0059d75c  sqlite3_db_mutex =====

undefined8 sqlite3_db_mutex(long param_1)

{
  char cVar1;
  char *pcVar2;
  
  if (param_1 == 0) {
    pcVar2 = "NULL";
  }
  else {
    cVar1 = *(char *)(param_1 + 0x71);
    if (cVar1 != -0x46) {
      if (cVar1 == 'v') {
        return *(undefined8 *)(param_1 + 0x18);
      }
      if (cVar1 != 'm') {
        pcVar2 = "invalid";
        goto LAB_0059d7a4;
      }
    }
    pcVar2 = "unopened";
  }
LAB_0059d7a4:
  sqlite3_log(0x15,"API call with %s database connection pointer",pcVar2);
  sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x2ccbe,
              "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
  return 0;
}


// ===== 0059d7f0  sqlite3_db_release_memory =====

undefined8 sqlite3_db_release_memory(long param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if (param_1 == 0) {
    pcVar2 = "NULL";
  }
  else {
    cVar1 = *(char *)(param_1 + 0x71);
    if (cVar1 != -0x46) {
      if (cVar1 == 'v') {
        if (*(long *)(param_1 + 0x18) != 0) {
          (*DAT_00b0da70)();
        }
        if (*(char *)(param_1 + 0x6f) == '\0') {
          FUN_005ac38c(param_1);
        }
        iVar3 = *(int *)(param_1 + 0x28);
        if (0 < iVar3) {
          lVar5 = 0;
          lVar6 = 8;
          do {
            lVar4 = *(long *)(*(long *)(param_1 + 0x20) + lVar6);
            if (lVar4 != 0) {
              (*DAT_00b0daf8)(*(undefined8 *)(*(long *)(**(long **)(lVar4 + 8) + 0x120) + 0x48));
              iVar3 = *(int *)(param_1 + 0x28);
            }
            lVar5 = lVar5 + 1;
            lVar6 = lVar6 + 0x20;
          } while (lVar5 < iVar3);
        }
        if (*(char *)(param_1 + 0x6f) == '\0') {
          FUN_005ac41c(param_1);
        }
        if (*(long *)(param_1 + 0x18) != 0) {
          (*DAT_00b0da80)();
        }
        return 0;
      }
      if (cVar1 != 'm') {
        pcVar2 = "invalid";
        goto LAB_0059d8fc;
      }
    }
    pcVar2 = "unopened";
  }
LAB_0059d8fc:
  sqlite3_log(0x15,"API call with %s database connection pointer",pcVar2);
  sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x2cccd,
              "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
  return 0x15;
}


// ===== 0059d94c  sqlite3_db_cacheflush =====

/* WARNING: Removing unreachable block (ram,0x0059da7c) */

int sqlite3_db_cacheflush(long param_1)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  char *pcVar8;
  long lVar9;
  long lVar10;
  
  if (param_1 == 0) {
    pcVar8 = "NULL";
  }
  else {
    cVar3 = *(char *)(param_1 + 0x71);
    if (cVar3 != -0x46) {
      if (cVar3 == 'v') {
        if (*(long *)(param_1 + 0x18) != 0) {
          (*DAT_00b0da70)();
        }
        if (*(char *)(param_1 + 0x6f) == '\0') {
          FUN_005ac38c(param_1);
        }
        bVar5 = false;
        lVar10 = 0;
        do {
          while( true ) {
            lVar9 = lVar10;
            iVar4 = *(int *)(param_1 + 0x28);
            if (iVar4 <= lVar9) {
              iVar6 = 0;
              goto LAB_0059dae0;
            }
            lVar10 = *(long *)(*(long *)(param_1 + 0x20) + lVar9 * 0x20 + 8);
            if ((lVar10 != 0) && (*(char *)(lVar10 + 0x10) == '\x02')) break;
            lVar10 = lVar9 + 1;
          }
          lVar10 = **(long **)(lVar10 + 8);
          iVar6 = *(int *)(lVar10 + 0x30);
          if (*(char *)(lVar10 + 0x13) == '\0') {
            lVar7 = FUN_005b274c(*(undefined8 *)(lVar10 + 0x120));
            while (iVar6 == 0) {
              while( true ) {
                if (lVar7 == 0) goto LAB_0059da18;
                plVar1 = (long *)(lVar7 + 0x38);
                lVar7 = *(long *)(lVar7 + 0x20);
                if (*plVar1 == 0) break;
                iVar6 = 0;
              }
              iVar6 = FUN_005dbf10(lVar10);
            }
          }
LAB_0059da18:
          if (iVar6 == 5) {
            bVar5 = true;
            iVar6 = 0;
          }
          lVar10 = lVar9 + 1;
        } while (iVar6 == 0);
LAB_0059dae0:
        if (*(char *)(param_1 + 0x6f) == '\0') {
          FUN_005ac41c(param_1);
        }
        if (*(long *)(param_1 + 0x18) != 0) {
          (*DAT_00b0da80)();
        }
        iVar2 = 5;
        if (!bVar5 || lVar9 < iVar4) {
          iVar2 = iVar6;
        }
        return iVar2;
      }
      if (cVar3 != 'm') {
        pcVar8 = "invalid";
        goto LAB_0059da88;
      }
    }
    pcVar8 = "unopened";
  }
LAB_0059da88:
  sqlite3_log(0x15,"API call with %s database connection pointer",pcVar8);
  sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x2cce7,
              "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
  return 0x15;
}


// ===== 0059db2c  sqlite3_db_config =====

/* WARNING: Removing unreachable block (ram,0x0059ded0) */
/* WARNING: Removing unreachable block (ram,0x0059dee0) */
/* WARNING: Removing unreachable block (ram,0x0059def0) */
/* WARNING: Removing unreachable block (ram,0x0059deb0) */
/* WARNING: Removing unreachable block (ram,0x0059ddc4) */
/* WARNING: Removing unreachable block (ram,0x0059ddd4) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff90 : 0x0059debc */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4
sqlite3_db_config(long param_1,undefined4 param_2,undefined8 param_3,uint *param_4,
                 undefined4 param_5)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  int local_70;
  undefined4 uStack_68;
  
  if (param_1 == 0) {
    pcVar3 = "NULL";
    goto LAB_0059dc30;
  }
  cVar1 = *(char *)(param_1 + 0x71);
  if (cVar1 == -0x46) {
LAB_0059db78:
    pcVar3 = "unopened";
LAB_0059dc30:
    sqlite3_log(0x15,"API call with %s database connection pointer",pcVar3);
    sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x2cd03,
                "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
    return 0x15;
  }
  if (cVar1 != 'v') {
    if (cVar1 != 'm') {
      pcVar3 = "invalid";
      goto LAB_0059dc30;
    }
    goto LAB_0059db78;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    (*DAT_00b0da70)(*(long *)(param_1 + 0x18));
  }
  lVar4 = 0;
  switch(param_2) {
  case 1000:
    uVar2 = 0;
    **(undefined8 **)(param_1 + 0x20) = param_3;
    goto LAB_0059de80;
  case 0x3e9:
    uStack_68 = SUB84(param_4,0);
    uVar2 = FUN_0059df14(param_1,param_3,uStack_68,param_5);
    goto LAB_0059de80;
  case 0x3ea:
    break;
  case 0x3eb:
    lVar4 = 1;
    break;
  case 0x3ec:
    lVar4 = 3;
    break;
  case 0x3ed:
    lVar4 = 4;
    break;
  case 0x3ee:
    lVar4 = 5;
    break;
  case 0x3ef:
    lVar4 = 6;
    break;
  case 0x3f0:
    lVar4 = 7;
    break;
  case 0x3f1:
    lVar4 = 8;
    break;
  case 0x3f2:
    lVar4 = 9;
    break;
  case 0x3f3:
    lVar4 = 10;
    break;
  case 0x3f4:
    lVar4 = 0xb;
    break;
  case 0x3f5:
    lVar4 = 0xd;
    break;
  case 0x3f6:
    lVar4 = 0xc;
    break;
  case 0x3f7:
    lVar4 = 2;
    break;
  case 0x3f8:
    lVar4 = 0xe;
    break;
  case 0x3f9:
    lVar4 = 0xf;
    break;
  case 0x3fa:
    lVar4 = 0x10;
    break;
  case 0x3fb:
    lVar4 = 0x11;
    break;
  case 0x3fc:
    lVar4 = 0x12;
    break;
  case 0x3fd:
    lVar4 = 0x13;
    break;
  case 0x3fe:
    lVar4 = 0x14;
    break;
  default:
    uVar2 = 1;
    goto LAB_0059de80;
  }
  local_70 = (int)param_3;
  uVar7 = *(ulong *)(param_1 + 0x30);
  if (local_70 < 1) {
    if (local_70 == 0) {
      uVar5 = uVar7 & (*(ulong *)(&UNK_002c7fb0 + lVar4 * 0x10) ^ 0xffffffffffffffff);
      *(ulong *)(param_1 + 0x30) = uVar5;
      goto joined_r0x0059de54;
    }
  }
  else {
    uVar5 = *(ulong *)(&UNK_002c7fb0 + lVar4 * 0x10) | uVar7;
    *(ulong *)(param_1 + 0x30) = uVar5;
joined_r0x0059de54:
    if (uVar7 != uVar5) {
      for (lVar6 = *(long *)(param_1 + 8); lVar6 != 0; lVar6 = *(long *)(lVar6 + 0x10)) {
        *(ushort *)(lVar6 + 200) = *(ushort *)(lVar6 + 200) & 0xfffc | 1;
      }
    }
  }
  uVar2 = 0;
  if (param_4 != (uint *)0x0) {
    *param_4 = (uint)((*(ulong *)(&UNK_002c7fb0 + lVar4 * 0x10) & *(ulong *)(param_1 + 0x30)) != 0);
  }
LAB_0059de80:
  if (*(long *)(param_1 + 0x18) == 0) {
    return uVar2;
  }
  (*DAT_00b0da80)();
  return uVar2;
}


// ===== 0059df14  FUN_0059df14 =====

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_0059df14(long param_1,undefined8 *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  undefined2 uVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  int iVar10;
  undefined8 *puVar11;
  int iVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  
  plVar8 = *(long **)(param_1 + 0x1b8);
  if (plVar8 == (long *)0x0) {
    iVar5 = 0;
    plVar8 = *(long **)(param_1 + 0x1c0);
    if (plVar8 != (long *)0x0) goto LAB_0059df4c;
LAB_0059df9c:
    iVar7 = 0;
    plVar8 = *(long **)(param_1 + 0x1c8);
    if (plVar8 != (long *)0x0) goto LAB_0059df64;
LAB_0059dfa8:
    iVar10 = 0;
    plVar8 = *(long **)(param_1 + 0x1d0);
    if (plVar8 != (long *)0x0) goto LAB_0059df7c;
LAB_0059dfb4:
    iVar12 = 0;
  }
  else {
    iVar5 = 0;
    do {
      plVar8 = (long *)*plVar8;
      iVar5 = iVar5 + -1;
    } while (plVar8 != (long *)0x0);
    plVar8 = *(long **)(param_1 + 0x1c0);
    if (plVar8 == (long *)0x0) goto LAB_0059df9c;
LAB_0059df4c:
    iVar7 = 0;
    do {
      plVar8 = (long *)*plVar8;
      iVar7 = iVar7 + -1;
    } while (plVar8 != (long *)0x0);
    plVar8 = *(long **)(param_1 + 0x1c8);
    if (plVar8 == (long *)0x0) goto LAB_0059dfa8;
LAB_0059df64:
    iVar10 = 0;
    do {
      plVar8 = (long *)*plVar8;
      iVar10 = iVar10 + -1;
    } while (plVar8 != (long *)0x0);
    plVar8 = *(long **)(param_1 + 0x1d0);
    if (plVar8 == (long *)0x0) goto LAB_0059dfb4;
LAB_0059df7c:
    iVar12 = 0;
    do {
      plVar8 = (long *)*plVar8;
      iVar12 = iVar12 + -1;
    } while (plVar8 != (long *)0x0);
  }
  if (0 < iVar7 + iVar5 + iVar10 + iVar12 + *(int *)(param_1 + 0x1a4)) {
    return 5;
  }
  if ((*(char *)(param_1 + 0x1a0) != '\0') && (lVar13 = *(long *)(param_1 + 0x1e0), lVar13 != 0)) {
    puVar6 = &DAT_00b0da18;
    if (DAT_00b0d9f0 != 0) {
      if (DAT_00b103d8 != 0) {
        (*DAT_00b0da70)();
      }
      iVar5 = (*DAT_00b0da28)(lVar13);
      DAT_00b105b8 = DAT_00b105b8 - iVar5;
      DAT_00b10600 = DAT_00b10600 + -1;
      (*DAT_00b0da18)(lVar13);
      if (DAT_00b103d8 == 0) goto LAB_0059e09c;
      puVar6 = &DAT_00b0da80;
      lVar13 = DAT_00b103d8;
    }
    (*(code *)*puVar6)(lVar13);
  }
LAB_0059e09c:
  param_3 = param_3 & 0xfffffff8;
  uVar1 = param_3;
  if (0xfff7 < (int)param_3) {
    uVar1 = 0xfff8;
  }
  param_4 = param_4 & ((int)param_4 >> 0x1f ^ 0xffffffffU);
  uVar2 = 0;
  if (8 < (int)param_3) {
    uVar2 = uVar1;
  }
  uVar15 = (ulong)uVar2;
  if (0 < (int)uVar2) {
    uVar4 = 0;
    if (uVar1 != 0) {
      uVar4 = 0x7fff0000 / uVar1;
    }
    if (uVar4 <= param_4) {
      param_4 = uVar4;
    }
  }
  lVar13 = (ulong)param_4 * (long)(int)uVar2;
  if (lVar13 == 0) {
    *(undefined2 *)(param_1 + 0x19e) = 0;
    *(undefined8 *)(param_1 + 0x1b8) = 0;
    *(undefined8 *)(param_1 + 0x1c0) = 0;
  }
  else {
    uVar3 = (undefined2)uVar1;
    if (param_2 == (undefined8 *)0x0) {
      if (DAT_00b103a8 != (code *)0x0) {
        (*DAT_00b103a8)();
      }
      puVar6 = (undefined8 *)FUN_005827b0(lVar13);
      if (DAT_00b103b0 != (code *)0x0) {
        (*DAT_00b103b0)();
      }
      if (puVar6 != (undefined8 *)0x0) {
        iVar5 = (*DAT_00b0da28)(puVar6);
        lVar13 = (long)iVar5;
      }
      if (0x17f < (int)uVar2) goto LAB_0059e0f0;
LAB_0059e190:
      if ((int)uVar2 < 0x100) {
        if ((int)uVar2 < 1) {
          iVar5 = 0;
          *(undefined8 **)(param_1 + 0x1e0) = puVar6;
          *(undefined8 *)(param_1 + 0x1b8) = 0;
          *(undefined8 *)(param_1 + 0x1c0) = 0;
          *(short *)(param_1 + 0x19c) = (short)uVar2;
          *(short *)(param_1 + 0x19e) = (short)uVar2;
          uVar1 = uVar2;
        }
        else {
          iVar5 = 0;
          if (uVar15 != 0) {
            iVar5 = (int)(lVar13 / (long)uVar15);
          }
          *(undefined8 **)(param_1 + 0x1e0) = puVar6;
          *(undefined8 *)(param_1 + 0x1b8) = 0;
          *(undefined8 *)(param_1 + 0x1c0) = 0;
          *(undefined2 *)(param_1 + 0x19c) = uVar3;
          *(undefined2 *)(param_1 + 0x19e) = uVar3;
        }
        iVar7 = 0;
      }
      else {
        iVar5 = 0;
        if ((ulong)(uVar2 + 0x80) != 0) {
          iVar5 = (int)(lVar13 / (long)(ulong)(uVar2 + 0x80));
        }
        uVar9 = lVar13 - (long)iVar5 * uVar15;
        uVar15 = uVar9 + 0x7f;
        if (-1 < (long)uVar9) {
          uVar15 = uVar9;
        }
        iVar7 = (int)(uVar15 >> 7);
        *(undefined8 **)(param_1 + 0x1e0) = puVar6;
        *(undefined8 *)(param_1 + 0x1b8) = 0;
        *(undefined8 *)(param_1 + 0x1c0) = 0;
        *(undefined2 *)(param_1 + 0x19c) = uVar3;
        *(undefined2 *)(param_1 + 0x19e) = uVar3;
      }
    }
    else {
      puVar6 = param_2;
      if ((int)uVar2 < 0x180) goto LAB_0059e190;
LAB_0059e0f0:
      iVar5 = 0;
      if ((ulong)(uVar2 + 0x180) != 0) {
        iVar5 = (int)(lVar13 / (long)(ulong)(uVar2 + 0x180));
      }
      uVar9 = lVar13 - (long)iVar5 * uVar15;
      uVar15 = uVar9 + 0x7f;
      if (-1 < (long)uVar9) {
        uVar15 = uVar9;
      }
      iVar7 = (int)(uVar15 >> 7);
      *(undefined8 **)(param_1 + 0x1e0) = puVar6;
      *(undefined8 *)(param_1 + 0x1b8) = 0;
      *(undefined8 *)(param_1 + 0x1c0) = 0;
      *(undefined2 *)(param_1 + 0x19c) = uVar3;
      *(undefined2 *)(param_1 + 0x19e) = uVar3;
    }
    if (puVar6 != (undefined8 *)0x0) {
      if (0 < iVar5) {
        puVar11 = (undefined8 *)0x0;
        puVar14 = puVar6;
        iVar10 = iVar5;
        do {
          iVar10 = iVar10 + -1;
          *puVar14 = puVar11;
          puVar6 = (undefined8 *)((long)puVar14 + (long)(int)uVar1);
          puVar11 = puVar14;
          puVar14 = puVar6;
        } while (iVar10 != 0);
        *(long *)(param_1 + 0x1b8) = (long)puVar6 - (long)(int)uVar1;
      }
      *(undefined8 *)(param_1 + 0x1c8) = 0;
      *(undefined8 *)(param_1 + 0x1d0) = 0;
      *(undefined8 **)(param_1 + 0x1d8) = puVar6;
      if (0 < iVar7) {
        puVar11 = (undefined8 *)0x0;
        iVar10 = iVar7;
        do {
          puVar14 = puVar6;
          iVar10 = iVar10 + -1;
          puVar6 = puVar14 + 0x10;
          *puVar14 = puVar11;
          puVar11 = puVar14;
        } while (iVar10 != 0);
        *(undefined8 **)(param_1 + 0x1c8) = puVar14;
      }
      iVar7 = iVar7 + iVar5;
      *(undefined8 **)(param_1 + 0x1e8) = puVar6;
      *(undefined4 *)(param_1 + 0x198) = 0;
      *(bool *)(param_1 + 0x1a0) = param_2 == (undefined8 *)0x0;
      goto LAB_0059e2b8;
    }
  }
  puVar6 = (undefined8 *)0x0;
  iVar7 = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined4 *)(param_1 + 0x198) = 1;
  *(undefined2 *)(param_1 + 0x19c) = 0;
  *(undefined1 *)(param_1 + 0x1a0) = 0;
LAB_0059e2b8:
  *(int *)(param_1 + 0x1a4) = iVar7;
  *(undefined8 **)(param_1 + 0x1f0) = puVar6;
  return 0;
}


// ===== 0059e2e0  sqlite3_last_insert_rowid =====

undefined8 sqlite3_last_insert_rowid(long param_1)

{
  char cVar1;
  char *pcVar2;
  
  if (param_1 == 0) {
    pcVar2 = "NULL";
  }
  else {
    cVar1 = *(char *)(param_1 + 0x71);
    if (cVar1 != -0x46) {
      if (cVar1 == 'v') {
        return *(undefined8 *)(param_1 + 0x38);
      }
      if (cVar1 != 'm') {
        pcVar2 = "invalid";
        goto LAB_0059e328;
      }
    }
    pcVar2 = "unopened";
  }
LAB_0059e328:
  sqlite3_log(0x15,"API call with %s database connection pointer",pcVar2);
  sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x2cd9c,
              "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
  return 0;
}


// ===== 0059e374  sqlite3_set_last_insert_rowid =====

void sqlite3_set_last_insert_rowid(long param_1,undefined8 param_2)

{
  char cVar1;
  char *pcVar2;
  
  if (param_1 == 0) {
    pcVar2 = "NULL";
  }
  else {
    cVar1 = *(char *)(param_1 + 0x71);
    if (cVar1 != -0x46) {
      if (cVar1 == 'v') {
        if (*(long *)(param_1 + 0x18) == 0) {
          *(undefined8 *)(param_1 + 0x38) = param_2;
        }
        else {
          (*DAT_00b0da70)(*(long *)(param_1 + 0x18));
          *(undefined8 *)(param_1 + 0x38) = param_2;
          if (*(long *)(param_1 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0059e3f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*DAT_00b0da80)();
            return;
          }
        }
        return;
      }
      if (cVar1 != 'm') {
        pcVar2 = "invalid";
        goto LAB_0059e400;
      }
    }
    pcVar2 = "unopened";
  }
LAB_0059e400:
  sqlite3_log(0x15,"API call with %s database connection pointer",pcVar2);
  sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x2cda9,
              "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
  return;
}


// ===== 0059e450  sqlite3_changes64 =====

undefined8 sqlite3_changes64(long param_1)

{
  char cVar1;
  char *pcVar2;
  
  if (param_1 == 0) {
    pcVar2 = "NULL";
  }
  else {
    cVar1 = *(char *)(param_1 + 0x71);
    if (cVar1 != -0x46) {
      if (cVar1 == 'v') {
        return *(undefined8 *)(param_1 + 0x78);
      }
      if (cVar1 != 'm') {
        pcVar2 = "invalid";
        goto LAB_0059e498;
      }
    }
    pcVar2 = "unopened";
  }
LAB_0059e498:
  sqlite3_log(0x15,"API call with %s database connection pointer",pcVar2);
  sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x2cdb8,
              "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
  return 0;
}


// ===== 0059e4e4  sqlite3_changes =====

undefined4 sqlite3_changes(long param_1)

{
  char cVar1;
  char *pcVar2;
  
  if (param_1 == 0) {
    pcVar2 = "NULL";
  }
  else {
    cVar1 = *(char *)(param_1 + 0x71);
    if (cVar1 != -0x46) {
      if (cVar1 == 'v') {
        return *(undefined4 *)(param_1 + 0x78);
      }
      if (cVar1 != 'm') {
        pcVar2 = "invalid";
        goto LAB_0059e52c;
      }
    }
    pcVar2 = "unopened";
  }
LAB_0059e52c:
  sqlite3_log(0x15,"API call with %s database connection pointer",pcVar2);
  sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x2cdb8,
              "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
  return 0;
}


// ===== 0059e578  sqlite3_total_changes64 =====

undefined8 sqlite3_total_changes64(long param_1)

{
  char cVar1;
  char *pcVar2;
  
  if (param_1 == 0) {
    pcVar2 = "NULL";
  }
  else {
    cVar1 = *(char *)(param_1 + 0x71);
    if (cVar1 != -0x46) {
      if (cVar1 == 'v') {
        return *(undefined8 *)(param_1 + 0x80);
      }
      if (cVar1 != 'm') {
        pcVar2 = "invalid";
        goto LAB_0059e5c0;
      }
    }
    pcVar2 = "unopened";
  }
LAB_0059e5c0:
  sqlite3_log(0x15,"API call with %s database connection pointer",pcVar2);
  sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x2cdc8,
              "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
  return 0;
}


// ===== 0059e60c  sqlite3_total_changes =====

undefined4 sqlite3_total_changes(long param_1)

{
  char cVar1;
  char *pcVar2;
  
  if (param_1 == 0) {
    pcVar2 = "NULL";
  }
  else {
    cVar1 = *(char *)(param_1 + 0x71);
    if (cVar1 != -0x46) {
      if (cVar1 == 'v') {
        return *(undefined4 *)(param_1 + 0x80);
      }
      if (cVar1 != 'm') {
        pcVar2 = "invalid";
        goto LAB_0059e654;
      }
    }
    pcVar2 = "unopened";
  }
LAB_0059e654:
  sqlite3_log(0x15,"API call with %s database connection pointer",pcVar2);
  sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x2cdc8,
              "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
  return 0;
}


// ===== 0059e6a0  sqlite3_txn_state =====

int sqlite3_txn_state(long param_1,byte *param_2)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  int iVar4;
  ulong uVar5;
  ulong *puVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  
  if (param_1 == 0) {
    pcVar3 = "NULL";
  }
  else {
    cVar1 = *(char *)(param_1 + 0x71);
    if (cVar1 != -0x46) {
      if (cVar1 == 'v') {
        if (*(long *)(param_1 + 0x18) != 0) {
          (*DAT_00b0da70)(*(long *)(param_1 + 0x18));
        }
        iVar7 = *(int *)(param_1 + 0x28);
        if (param_2 == (byte *)0x0) {
          iVar7 = iVar7 + -1;
          iVar4 = 0;
          if (-1 < iVar7) {
LAB_0059e86c:
            iVar8 = (iVar7 - iVar4) + 1;
            puVar6 = (ulong *)(*(long *)(param_1 + 0x20) + (long)iVar4 * 0x20 + 8);
            iVar4 = -1;
            do {
              uVar5 = *puVar6;
              if (uVar5 != 0) {
                uVar5 = (ulong)*(byte *)(uVar5 + 0x10);
              }
              puVar6 = puVar6 + 4;
              iVar7 = (int)uVar5;
              if ((int)uVar5 <= iVar4) {
                iVar7 = iVar4;
              }
              iVar8 = iVar8 + -1;
              iVar4 = iVar7;
            } while (iVar8 != 0);
            goto LAB_0059e83c;
          }
        }
        else {
          uVar5 = (ulong)(iVar7 - 1);
          if (0 < iVar7) {
            iVar7 = -1;
            puVar9 = (undefined8 *)(*(long *)(param_1 + 0x20) + uVar5 * 0x20);
            do {
              pbVar10 = (byte *)*puVar9;
              iVar4 = (int)uVar5;
              pbVar11 = param_2;
              if (pbVar10 != (byte *)0x0) {
                do {
                  bVar2 = *pbVar10;
                  if (bVar2 == *pbVar11) {
                    if (bVar2 == 0) {
                      iVar7 = iVar4 + (iVar4 >> 0x1f);
                      if (iVar4 <= iVar7) goto LAB_0059e86c;
                      goto LAB_0059e838;
                    }
                  }
                  else if ((&DAT_002c78ae)[bVar2] != (&DAT_002c78ae)[*pbVar11]) break;
                  pbVar10 = pbVar10 + 1;
                  pbVar11 = pbVar11 + 1;
                } while( true );
              }
              pbVar10 = param_2;
              pbVar11 = &DAT_002aeb89;
              if (iVar4 == 0) {
                do {
                  bVar2 = *pbVar11;
                  if (bVar2 == *pbVar10) {
                    if (bVar2 == 0) {
                      iVar4 = 0;
                      iVar7 = 0;
                      goto LAB_0059e86c;
                    }
                  }
                  else if ((&DAT_002c78ae)[bVar2] != (&DAT_002c78ae)[*pbVar10]) break;
                  pbVar10 = pbVar10 + 1;
                  pbVar11 = pbVar11 + 1;
                } while( true );
              }
              uVar5 = (ulong)(iVar4 - 1);
              puVar9 = puVar9 + -4;
            } while (0 < iVar4);
            goto LAB_0059e83c;
          }
        }
LAB_0059e838:
        iVar7 = -1;
LAB_0059e83c:
        if (*(long *)(param_1 + 0x18) == 0) {
          return iVar7;
        }
        (*DAT_00b0da80)();
        return iVar7;
      }
      if (cVar1 != 'm') {
        pcVar3 = "invalid";
        goto LAB_0059e7dc;
      }
    }
    pcVar3 = "unopened";
  }
LAB_0059e7dc:
  sqlite3_log(0x15,"API call with %s database connection pointer",pcVar3);
  sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x2ce69,
              "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
  return -1;
}


// ===== 0059e8b0  sqlite3_close =====

void sqlite3_close(undefined8 param_1)

{
  FUN_0059e8b8(param_1,0);
  return;
}


// ===== 0059e8b8  FUN_0059e8b8 =====

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_0059e8b8(long param_1,int param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  
  if (param_1 == 0) {
    return 0;
  }
  cVar1 = *(char *)(param_1 + 0x71);
  if (((cVar1 != 'm') && (cVar1 != 'v')) && (cVar1 != -0x46)) {
    sqlite3_log(0x15,"API call with %s database connection pointer","invalid");
    sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x2ce2d,
                "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
    return 0x15;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    (*DAT_00b0da70)();
  }
  if ((*(byte *)(param_1 + 0x6e) >> 3 & 1) == 0) {
    cVar1 = *(char *)(param_1 + 0x6f);
  }
  else {
    (**(code **)(param_1 + 0xf0))(8,*(undefined8 *)(param_1 + 0xf8),param_1,0);
    cVar1 = *(char *)(param_1 + 0x6f);
  }
  if (cVar1 == '\0') {
    FUN_005ac38c(param_1);
    iVar2 = *(int *)(param_1 + 0x28);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x28);
  }
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      lVar8 = *(long *)(*(long *)(param_1 + 0x20) + lVar3 * 0x20 + 0x18);
      if ((lVar8 != 0) && (plVar10 = *(long **)(lVar8 + 0x10), plVar10 != (long *)0x0)) {
        do {
          if (*(char *)(plVar10[2] + 0x3f) == '\x01') {
            plVar5 = (long *)(plVar10[2] + 0x50);
            plVar4 = (long *)*plVar5;
            if (plVar4 != (long *)0x0) {
              if (*plVar4 != param_1) {
                do {
                  plVar5 = plVar4;
                  plVar4 = (long *)plVar5[5];
                  if (plVar4 == (long *)0x0) goto LAB_0059e9a0;
                } while (*plVar4 != param_1);
                plVar5 = plVar5 + 5;
              }
              *plVar5 = plVar4[5];
              FUN_005bc430();
            }
          }
LAB_0059e9a0:
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
        iVar2 = *(int *)(param_1 + 0x28);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  for (plVar10 = *(long **)(param_1 + 0x228); plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
    if (*(long *)(plVar10[2] + 0x28) != 0) {
      plVar5 = (long *)(*(long *)(plVar10[2] + 0x28) + 0x50);
      plVar4 = (long *)*plVar5;
      if (plVar4 != (long *)0x0) {
        if (*plVar4 != param_1) {
          do {
            plVar5 = plVar4;
            plVar4 = (long *)plVar5[5];
            if (plVar4 == (long *)0x0) goto LAB_0059ea38;
          } while (*plVar4 != param_1);
          plVar5 = plVar5 + 5;
        }
        *plVar5 = plVar4[5];
        FUN_005bc430();
      }
    }
LAB_0059ea38:
  }
  lVar3 = *(long *)(param_1 + 0x248);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x248) = 0;
    do {
      lVar3 = *(long *)(lVar3 + 0x28);
      FUN_005bc430();
    } while (lVar3 != 0);
  }
  if (*(char *)(param_1 + 0x6f) == '\0') {
    FUN_005ac41c(param_1);
    FUN_005c0728(param_1,0x88);
  }
  else {
    FUN_005c0728(param_1,0x88);
  }
  if (param_2 == 0) {
    if (*(long *)(param_1 + 8) != 0) {
LAB_0059eb64:
      FUN_0058c8b8(param_1,5,"unable to close due to unfinalized statements or unfinished backups");
      if (*(long *)(param_1 + 0x18) != 0) {
        (*DAT_00b0da80)();
      }
      return 5;
    }
    uVar7 = (ulong)*(uint *)(param_1 + 0x28);
    if (0 < (int)*(uint *)(param_1 + 0x28)) {
      plVar10 = (long *)(*(long *)(param_1 + 0x20) + 8);
      do {
        if ((*plVar10 != 0) && (*(int *)(*plVar10 + 0x18) != 0)) goto LAB_0059eb64;
        uVar7 = uVar7 - 1;
        plVar10 = plVar10 + 4;
      } while (uVar7 != 0);
    }
  }
  puVar9 = *(undefined8 **)(param_1 + 0x308);
  do {
    if (puVar9 == (undefined8 *)0x0) {
      *(undefined1 *)(param_1 + 0x71) = 0xa7;
      FUN_0058eb1c(param_1);
      return 0;
    }
    *(undefined8 *)(param_1 + 0x308) = *puVar9;
    if ((code *)puVar9[2] != (code *)0x0) {
      (*(code *)puVar9[2])(puVar9[1]);
    }
    puVar6 = &DAT_00b0da18;
    if (DAT_00b0d9f0 == 0) {
LAB_0059eabc:
      (*(code *)*puVar6)(puVar9);
    }
    else {
      if (DAT_00b103d8 != (undefined8 *)0x0) {
        (*DAT_00b0da70)();
      }
      iVar2 = (*DAT_00b0da28)(puVar9);
      DAT_00b105b8 = DAT_00b105b8 - iVar2;
      DAT_00b10600 = DAT_00b10600 + -1;
      (*DAT_00b0da18)(puVar9);
      if (DAT_00b103d8 != (undefined8 *)0x0) {
        puVar6 = &DAT_00b0da80;
        puVar9 = DAT_00b103d8;
        goto LAB_0059eabc;
      }
    }
    puVar9 = *(undefined8 **)(param_1 + 0x308);
  } while( true );
}


// ===== 0059ec28  sqlite3_close_v2 =====

void sqlite3_close_v2(undefined8 param_1)

{
  FUN_0059e8b8(param_1,1);
  return;
}


// ===== 0059ec30  sqlite3_busy_handler =====

undefined8 sqlite3_busy_handler(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  char *pcVar2;
  
  if (param_1 == 0) {
    pcVar2 = "NULL";
  }
  else {
    cVar1 = *(char *)(param_1 + 0x71);
    if (cVar1 != -0x46) {
      if (cVar1 == 'v') {
        if (*(long *)(param_1 + 0x18) != 0) {
          (*DAT_00b0da70)(*(long *)(param_1 + 0x18));
          *(undefined8 *)(param_1 + 0x280) = param_2;
          *(undefined8 *)(param_1 + 0x288) = param_3;
          *(undefined4 *)(param_1 + 0x290) = 0;
          *(undefined4 *)(param_1 + 0x2e4) = 0;
          if (*(long *)(param_1 + 0x18) != 0) {
            (*DAT_00b0da80)();
          }
          return 0;
        }
        *(undefined8 *)(param_1 + 0x280) = param_2;
        *(undefined8 *)(param_1 + 0x288) = param_3;
        *(undefined4 *)(param_1 + 0x290) = 0;
        *(undefined4 *)(param_1 + 0x2e4) = 0;
        return 0;
      }
      if (cVar1 != 'm') {
        pcVar2 = "invalid";
        goto LAB_0059ece0;
      }
    }
    pcVar2 = "unopened";
  }
LAB_0059ece0:
  sqlite3_log(0x15,"API call with %s database connection pointer",pcVar2);
  sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x2d03c,
              "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
  return 0x15;
}


// ===== 0059ed58  sqlite3_progress_handler =====

void sqlite3_progress_handler(long param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  char *pcVar2;
  
  if (param_1 == 0) {
    pcVar2 = "NULL";
  }
  else {
    cVar1 = *(char *)(param_1 + 0x71);
    if (cVar1 != -0x46) {
      if (cVar1 == 'v') {
        if (*(long *)(param_1 + 0x18) != 0) {
          (*DAT_00b0da70)(*(long *)(param_1 + 0x18));
        }
        if ((int)param_2 < 1) {
          param_3 = 0;
        }
        *(undefined8 *)(param_1 + 0x208) = param_3;
        if ((int)param_2 < 1) {
          param_4 = 0;
        }
        *(uint *)(param_1 + 0x218) = param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU);
        *(undefined8 *)(param_1 + 0x210) = param_4;
        if (*(long *)(param_1 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0059ee14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*DAT_00b0da80)(*(long *)(param_1 + 0x18));
          return;
        }
        return;
      }
      if (cVar1 != 'm') {
        pcVar2 = "invalid";
        goto LAB_0059ee20;
      }
    }
    pcVar2 = "unopened";
  }
LAB_0059ee20:
  sqlite3_log(0x15,"API call with %s database connection pointer",pcVar2);
  sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x2d058,
              "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
  return;
}


// ===== 0059ee74  sqlite3_busy_timeout =====

undefined8 sqlite3_busy_timeout(long param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  long lVar3;
  
  if (param_1 == 0) {
    pcVar2 = "NULL";
  }
  else {
    cVar1 = *(char *)(param_1 + 0x71);
    if (cVar1 != -0x46) {
      if (cVar1 == 'v') {
        lVar3 = *(long *)(param_1 + 0x18);
        if (param_2 < 1) {
          if (lVar3 != 0) {
            (*DAT_00b0da70)(lVar3);
            *(undefined4 *)(param_1 + 0x2e4) = 0;
            *(undefined4 *)(param_1 + 0x290) = 0;
            *(undefined8 *)(param_1 + 0x288) = 0;
            *(undefined8 *)(param_1 + 0x280) = 0;
            if (*(long *)(param_1 + 0x18) != 0) {
              (*DAT_00b0da80)();
            }
            return 0;
          }
          *(undefined4 *)(param_1 + 0x2e4) = 0;
          *(undefined4 *)(param_1 + 0x290) = 0;
          *(undefined8 *)(param_1 + 0x288) = 0;
          *(undefined8 *)(param_1 + 0x280) = 0;
          return 0;
        }
        if (lVar3 == 0) {
          *(long *)(param_1 + 0x288) = param_1;
          *(code **)(param_1 + 0x280) = FUN_0059f024;
          *(undefined4 *)(param_1 + 0x290) = 0;
        }
        else {
          (*DAT_00b0da70)(lVar3);
          *(code **)(param_1 + 0x280) = FUN_0059f024;
          *(long *)(param_1 + 0x288) = param_1;
          *(undefined4 *)(param_1 + 0x290) = 0;
          *(undefined4 *)(param_1 + 0x2e4) = 0;
          if (*(long *)(param_1 + 0x18) != 0) {
            (*DAT_00b0da80)(*(long *)(param_1 + 0x18));
            *(int *)(param_1 + 0x2e4) = param_2;
            return 0;
          }
        }
        *(int *)(param_1 + 0x2e4) = param_2;
        return 0;
      }
      if (cVar1 != 'm') {
        pcVar2 = "invalid";
        goto LAB_0059ef38;
      }
    }
    pcVar2 = "unopened";
  }
LAB_0059ef38:
  sqlite3_log(0x15,"API call with %s database connection pointer",pcVar2);
  sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x2d071,
              "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
  return 0x15;
}


// ===== 0059f024  FUN_0059f024 =====

undefined8 FUN_0059f024(long *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 < 0xc) {
    uVar2 = (uint)(byte)(&DAT_002cc53b)[param_2];
    uVar3 = (uint)(byte)(&DAT_002cc547)[param_2];
    iVar1 = (uint)(byte)(&DAT_002cc547)[param_2] + (uint)(byte)(&DAT_002cc53b)[param_2];
  }
  else {
    uVar2 = 100;
    uVar3 = param_2 * 100 - 0x368;
    iVar1 = param_2 * 100 + -0x304;
  }
  if ((*(int *)((long)param_1 + 0x2e4) < iVar1) &&
     (uVar2 = *(int *)((long)param_1 + 0x2e4) - uVar3, (int)uVar2 < 1)) {
    return 0;
  }
  (**(code **)(*param_1 + 0x70))(*param_1,uVar2 * 1000);
  return 1;
}


// ===== 0059f0ac  sqlite3_setlk_timeout =====

undefined4 sqlite3_setlk_timeout(long param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  if (param_1 == 0) {
    pcVar2 = "NULL";
  }
  else {
    cVar1 = *(char *)(param_1 + 0x71);
    if (cVar1 != -0x46) {
      if (cVar1 == 'v') {
        uVar3 = 0x19;
        if (param_2 + 1 < 0 == SCARRY4(param_2,1)) {
          uVar3 = 0;
        }
        return uVar3;
      }
      if (cVar1 != 'm') {
        pcVar2 = "invalid";
        goto LAB_0059f114;
      }
    }
    pcVar2 = "unopened";
  }
LAB_0059f114:
  sqlite3_log(0x15,"API call with %s database connection pointer",pcVar2);
  sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x2d089,
              "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
  return 0x15;
}


// ===== 0059f160  sqlite3_interrupt =====

void sqlite3_interrupt(long param_1)

{
  char cVar1;
  char *pcVar2;
  
  if (param_1 == 0) {
    sqlite3_log(0x15,"API call with %s database connection pointer",&DAT_002a1c46);
    goto LAB_0059f1f0;
  }
  cVar1 = *(char *)(param_1 + 0x71);
  if (cVar1 == -0x46) {
LAB_0059f190:
    pcVar2 = "unopened";
  }
  else {
    if (cVar1 == 'v') goto LAB_0059f1dc;
    if (cVar1 == 'm') goto LAB_0059f190;
    pcVar2 = "invalid";
  }
  sqlite3_log(0x15,"API call with %s database connection pointer",pcVar2);
  if (*(char *)(param_1 + 0x71) == -0x59) {
LAB_0059f1dc:
    *(undefined4 *)(param_1 + 400) = 1;
    return;
  }
LAB_0059f1f0:
  sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x2d0aa,
              "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
  return;
}


// ===== 0059f220  sqlite3_is_interrupted =====

bool sqlite3_is_interrupted(long param_1)

{
  char cVar1;
  char *pcVar2;
  
  if (param_1 == 0) {
    sqlite3_log(0x15,"API call with %s database connection pointer",&DAT_002a1c46);
    goto LAB_0059f2b4;
  }
  cVar1 = *(char *)(param_1 + 0x71);
  if (cVar1 == -0x46) {
LAB_0059f250:
    pcVar2 = "unopened";
  }
  else {
    if (cVar1 == 'v') goto LAB_0059f29c;
    if (cVar1 == 'm') goto LAB_0059f250;
    pcVar2 = "invalid";
  }
  sqlite3_log(0x15,"API call with %s database connection pointer",pcVar2);
  if (*(char *)(param_1 + 0x71) == -0x59) {
LAB_0059f29c:
    return *(int *)(param_1 + 400) != 0;
  }
LAB_0059f2b4:
  sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x2d0ba,
              "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
  return false;
}


// ===== 0059f2ec  sqlite3_create_function =====

void sqlite3_create_function(void)

{
  FUN_0059f310();
  return;
}


// ===== 0059f310  FUN_0059f310 =====

undefined4
FUN_0059f310(long param_1,undefined8 param_2,ulong param_3,ulong param_4,undefined8 param_5,
            undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
            undefined8 param_10,code *param_11)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  long lVar6;
  char *pcVar7;
  undefined8 *puVar8;
  
  if (param_1 == 0) {
    pcVar7 = "NULL";
    goto LAB_0059f4b8;
  }
  cVar1 = *(char *)(param_1 + 0x71);
  if (cVar1 != -0x46) {
    if (cVar1 == 'v') {
      if (*(long *)(param_1 + 0x18) != 0) {
        param_4 = param_4 & 0xffffffff;
        param_3 = param_3 & 0xffffffff;
        (*DAT_00b0da70)();
      }
      if (param_11 == (code *)0x0) {
        iVar2 = FUN_0059f89c(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9
                             ,param_10,0);
LAB_0059f52c:
        if ((iVar2 == 0) && (*(char *)(param_1 + 0x67) == '\0')) {
          uVar4 = 0;
          lVar6 = *(long *)(param_1 + 0x18);
          goto joined_r0x0059f540;
        }
      }
      else {
        piVar5 = (int *)FUN_005827b0(0x18);
        if (piVar5 != (int *)0x0) {
          *piVar5 = 0;
          *(code **)(piVar5 + 2) = param_11;
          *(undefined8 *)(piVar5 + 4) = param_5;
          iVar2 = FUN_0059f89c(param_1,param_2,param_3 & 0xffffffff,param_4 & 0xffffffff,param_5,
                               param_6,param_7,param_8,param_9,param_10,piVar5);
          if (*piVar5 == 0) {
            (*param_11)(param_5);
            puVar8 = &DAT_00b0da18;
            if (DAT_00b0d9f0 != 0) {
              if (DAT_00b103d8 != (int *)0x0) {
                (*DAT_00b0da70)();
              }
              iVar3 = (*DAT_00b0da28)(piVar5);
              DAT_00b105b8 = DAT_00b105b8 - iVar3;
              DAT_00b10600 = DAT_00b10600 + -1;
              (*DAT_00b0da18)(piVar5);
              if (DAT_00b103d8 == (int *)0x0) goto LAB_0059f52c;
              puVar8 = &DAT_00b0da80;
              piVar5 = DAT_00b103d8;
            }
            (*(code *)*puVar8)(piVar5);
          }
          goto LAB_0059f52c;
        }
        if ((*(char *)(param_1 + 0x67) == '\0') && (*(char *)(param_1 + 0x68) == '\0')) {
          *(undefined1 *)(param_1 + 0x67) = 1;
          if (0 < *(int *)(param_1 + 0xdc)) {
            *(undefined4 *)(param_1 + 400) = 1;
          }
          *(undefined2 *)(param_1 + 0x19c) = 0;
          *(int *)(param_1 + 0x198) = *(int *)(param_1 + 0x198) + 1;
          if (*(long *)(param_1 + 0x158) != 0) {
            FUN_00595b78(*(long *)(param_1 + 0x158),"out of memory");
            lVar6 = *(long *)(*(long *)(param_1 + 0x158) + 0xd8);
            *(undefined4 *)(*(long *)(param_1 + 0x158) + 0x18) = 7;
            for (; lVar6 != 0; lVar6 = *(long *)(lVar6 + 0xd8)) {
              *(undefined4 *)(lVar6 + 0x18) = 7;
              *(int *)(lVar6 + 0x34) = *(int *)(lVar6 + 0x34) + 1;
            }
          }
        }
        (*param_11)(param_5);
        iVar2 = 1;
      }
      uVar4 = FUN_005c1188(param_1,iVar2);
      lVar6 = *(long *)(param_1 + 0x18);
joined_r0x0059f540:
      if (lVar6 == 0) {
        return uVar4;
      }
      (*DAT_00b0da80)();
      return uVar4;
    }
    if (cVar1 != 'm') {
      pcVar7 = "invalid";
      goto LAB_0059f4b8;
    }
  }
  pcVar7 = "unopened";
LAB_0059f4b8:
  sqlite3_log(0x15,"API call with %s database connection pointer",pcVar7);
  sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x2d160,
              "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
  return 0x15;
}


// ===== 0059f600  sqlite3_create_function_v2 =====

void sqlite3_create_function_v2(void)

{
  FUN_0059f310();
  return;
}


// ===== 0059f628  sqlite3_create_window_function =====

void sqlite3_create_window_function(void)

{
  FUN_0059f310();
  return;
}


// ===== 0059f660  sqlite3_create_function16 =====

undefined4
sqlite3_create_function16
          (long param_1,long param_2,undefined4 param_3,undefined4 param_4,undefined8 param_5,
          undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long lStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  if (param_1 == 0) {
    pcVar5 = "NULL";
  }
  else {
    cVar1 = *(char *)(param_1 + 0x71);
    if (cVar1 != -0x46) {
      if (cVar1 == 'v') {
        if (param_2 != 0) {
          if (*(long *)(param_1 + 0x18) != 0) {
            (*DAT_00b0da70)();
          }
          local_60 = 0;
          local_80 = 0;
          uStack_68 = 0;
          local_70 = 0;
          uStack_88 = 0;
          local_90 = 0;
          lStack_78 = param_1;
          FUN_00590724(&local_90,param_2,0xffffffffffffffff,2,0);
          uVar4 = extraout_x1;
          if ((local_80._4_2_ >> 1 & 1) == 0) {
            local_80._0_7_ = CONCAT16(1,(undefined6)local_80);
          }
          else if (local_80._6_1_ != '\x01') {
            FUN_005c2adc(&local_90,1,param_3,param_4,param_5,param_6,param_7,param_8);
            uVar4 = extraout_x1_00;
          }
          uVar6 = uStack_88;
          if (*(char *)(param_1 + 0x67) != '\0') {
            if ((local_80 & 0x900000000000) != 0 || (int)local_70 != 0) {
              FUN_005c1208(&local_90,uVar4,param_3,param_4,param_5,param_6,param_7,param_8);
            }
            uVar6 = 0;
          }
          iVar2 = FUN_0059f89c(param_1,uVar6,param_3,param_4,param_5,param_6,param_7,param_8,0,0,0);
          FUN_005869c8(param_1,uVar6);
          if ((iVar2 == 0) && (*(char *)(param_1 + 0x67) == '\0')) {
            uVar3 = 0;
          }
          else {
            uVar3 = FUN_005c1188(param_1,iVar2);
          }
          if (*(long *)(param_1 + 0x18) == 0) {
            return uVar3;
          }
          (*DAT_00b0da80)();
          return uVar3;
        }
        goto LAB_0059f75c;
      }
      if (cVar1 != 'm') {
        pcVar5 = "invalid";
        goto LAB_0059f74c;
      }
    }
    pcVar5 = "unopened";
  }
LAB_0059f74c:
  sqlite3_log(0x15,"API call with %s database connection pointer",pcVar5);
LAB_0059f75c:
  sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x2d1bb,
              "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
  return 0x15;
}


// ===== 0059f89c  FUN_0059f89c =====

int FUN_0059f89c(long param_1,char *param_2,int param_3,uint param_4,undefined8 param_5,long param_6
                ,long param_7,long param_8,long param_9,long param_10,int *param_11)

{
  int iVar1;
  size_t sVar2;
  short *psVar3;
  undefined2 *puVar4;
  long lVar5;
  uint uVar6;
  
  if ((param_2 != (char *)0x0) &&
     (((param_6 == 0 || (param_8 == 0)) && ((param_7 != 0) != (param_8 == 0))))) {
    if (((0xfffffc15 < param_3 - 0x3e9U) && ((param_9 == 0) == (param_10 == 0))) &&
       (sVar2 = strlen(param_2), (sVar2 & 0x3fffff00) == 0)) {
      uVar6 = param_4 & 7;
      param_4 = param_4 & 0x3380800;
      if (2 < uVar6 - 1) {
        if (uVar6 == 5) {
          iVar1 = FUN_0059f89c(param_1,param_2,param_3,param_4 | 1,param_5,param_6,param_7,param_8,
                               param_9,param_10,param_11);
          if (iVar1 != 0) {
            return iVar1;
          }
          iVar1 = FUN_0059f89c(param_1,param_2,param_3,param_4 | 2,param_5,param_6,param_7,param_8,
                               param_9,param_10,param_11);
          if (iVar1 != 0) {
            return iVar1;
          }
          uVar6 = 3;
        }
        else if (uVar6 == 4) {
          uVar6 = 2;
        }
        else {
          uVar6 = 1;
        }
      }
      psVar3 = (short *)FUN_0059fd24(param_1,param_2,param_3,uVar6,0);
      if (((psVar3 == (short *)0x0) || ((*(uint *)(psVar3 + 2) & 3) != uVar6)) ||
         (*psVar3 != param_3)) {
        if (param_6 == 0 && param_8 == 0) {
          return 0;
        }
      }
      else {
        if (*(int *)(param_1 + 0xd0) != 0) {
          FUN_0058c8b8(param_1,5,"unable to delete/modify user-function due to active statements");
          return 5;
        }
        for (lVar5 = *(long *)(param_1 + 8); lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x10)) {
          *(ushort *)(lVar5 + 200) = *(ushort *)(lVar5 + 200) & 0xfffc | 1;
        }
      }
      puVar4 = (undefined2 *)FUN_0059fd24(param_1,param_2,param_3,uVar6,1);
      if (puVar4 != (undefined2 *)0x0) {
        FUN_0068565c(param_1,*(undefined8 *)(puVar4 + 0x20));
        if (param_11 != (int *)0x0) {
          *param_11 = *param_11 + 1;
        }
        *(int **)(puVar4 + 0x20) = param_11;
        if (param_6 == 0) {
          param_6 = param_7;
        }
        *(long *)(puVar4 + 0x14) = param_9;
        *(long *)(puVar4 + 0x18) = param_10;
        *(long *)(puVar4 + 0xc) = param_6;
        *(long *)(puVar4 + 0x10) = param_8;
        *(undefined8 *)(puVar4 + 4) = param_5;
        *(uint *)(puVar4 + 2) = (*(uint *)(puVar4 + 2) & 3 | param_4) ^ 0x200000;
        *puVar4 = (short)param_3;
        return 0;
      }
      return 7;
    }
  }
  sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x2d0e0,
              "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
  return 0x15;
}


// ===== 0059fb68  sqlite3_overload_function =====

undefined8 sqlite3_overload_function(long param_1,long param_2,ulong param_3)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  char *pcVar5;
  
  if (param_1 == 0) {
    pcVar5 = "NULL";
  }
  else {
    cVar1 = *(char *)(param_1 + 0x71);
    if (cVar1 != -0x46) {
      if (cVar1 == 'v') {
        if ((param_2 != 0) &&
           (iVar4 = (int)param_3, iVar4 != -3 && iVar4 + 3 < 0 == SCARRY4(iVar4,3))) {
          if (*(long *)(param_1 + 0x18) != 0) {
            param_3 = param_3 & 0xffffffff;
            (*DAT_00b0da70)(*(long *)(param_1 + 0x18));
          }
          lVar2 = FUN_0059fd24(param_1,param_2,param_3,1,0);
          if (*(long *)(param_1 + 0x18) != 0) {
            (*DAT_00b0da80)(*(long *)(param_1 + 0x18));
          }
          if (lVar2 != 0) {
            return 0;
          }
          lVar2 = sqlite3_mprintf(&DAT_002ad0ce,param_2);
          if (lVar2 != 0) {
            uVar3 = FUN_0059f310(param_1,param_2,param_3 & 0xffffffff,1,lVar2,FUN_005a02bc,0,0,0,0,
                                 PTR_sqlite3_free_00b00da8);
            return uVar3;
          }
          return 7;
        }
        goto LAB_0059fc60;
      }
      if (cVar1 != 'm') {
        pcVar5 = "invalid";
        goto LAB_0059fc50;
      }
    }
    pcVar5 = "unopened";
  }
LAB_0059fc50:
  sqlite3_log(0x15,"API call with %s database connection pointer",pcVar5);
LAB_0059fc60:
  sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x2d1f5,
              "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
  return 0x15;
}


// ===== 0059fd24  FUN_0059fd24 =====

short * FUN_0059fd24(long param_1,byte *param_2,int param_3,uint param_4,char param_5)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  size_t sVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  uint uVar11;
  long lVar12;
  int *piVar13;
  short *psVar14;
  uint uVar15;
  byte *pbVar16;
  ulong uVar17;
  byte *pbVar18;
  short *psVar19;
  short *psVar20;
  uint uVar21;
  
  if (param_2 == (byte *)0x0) {
    uVar21 = 0;
    uVar8 = (ulong)bRam0000000000000000;
    if (bRam0000000000000000 == 0) goto LAB_0059fef0;
LAB_0059fd68:
    uVar11 = 0;
    pbVar18 = param_2 + 1;
    uVar17 = uVar8;
    do {
      uVar15 = (uint)uVar17;
      bVar2 = *pbVar18;
      uVar17 = (ulong)bVar2;
      uVar11 = (uVar11 + (uVar15 & 0xdf)) * -0x61c8864f;
      pbVar18 = pbVar18 + 1;
    } while (bVar2 != 0);
    lVar12 = *(long *)(param_1 + 0x260);
    if (lVar12 != 0) goto LAB_0059fda0;
LAB_0059ff00:
    piVar13 = (int *)(param_1 + 600);
    iVar6 = *(int *)(param_1 + 0x254);
    if (iVar6 == 0) goto LAB_0059ff10;
LAB_0059fdd8:
    do {
      piVar13 = *(int **)piVar13;
      if (uVar11 == piVar13[8]) {
        pbVar18 = *(byte **)(piVar13 + 6);
        pbVar16 = param_2;
        do {
          bVar2 = *pbVar18;
          if (bVar2 == *pbVar16) {
            if (bVar2 == 0) {
              psVar14 = *(short **)(piVar13 + 4);
              goto joined_r0x0059fe24;
            }
          }
          else if ((&DAT_002c78ae)[bVar2] != (&DAT_002c78ae)[*pbVar16]) break;
          pbVar18 = pbVar18 + 1;
          pbVar16 = pbVar16 + 1;
        } while( true );
      }
      iVar6 = iVar6 + -1;
      psVar14 = DAT_00b10408;
    } while (iVar6 != 0);
joined_r0x0059fe24:
    if (psVar14 != (short *)0x0) goto LAB_0059fe28;
LAB_0059ff20:
    if (param_5 == '\0') {
      psVar20 = (short *)0x0;
      goto LAB_0059fff0;
    }
    goto LAB_0059ff28;
  }
  sVar7 = strlen((char *)param_2);
  uVar21 = (uint)sVar7 & 0x3fffffff;
  uVar8 = (ulong)*param_2;
  if (*param_2 != 0) goto LAB_0059fd68;
LAB_0059fef0:
  uVar11 = 0;
  lVar12 = *(long *)(param_1 + 0x260);
  if (lVar12 == 0) goto LAB_0059ff00;
LAB_0059fda0:
  uVar15 = *(uint *)(param_1 + 0x250);
  uVar5 = 0;
  if (uVar15 != 0) {
    uVar5 = uVar11 / uVar15;
  }
  piVar1 = (int *)(lVar12 + (ulong)(uVar11 - uVar5 * uVar15) * 0x10);
  piVar13 = piVar1 + 2;
  iVar6 = *piVar1;
  if (iVar6 != 0) goto LAB_0059fdd8;
LAB_0059ff10:
  psVar14 = DAT_00b10408;
  if (DAT_00b10408 == (short *)0x0) goto LAB_0059ff20;
LAB_0059fe28:
  psVar19 = (short *)0x0;
  uVar11 = 0;
  do {
    sVar4 = *psVar14;
    if (sVar4 == param_3) {
      uVar15 = 4;
LAB_0059fe70:
      if ((*(uint *)(psVar14 + 2) & 3) == (param_4 & 0xff)) {
        uVar15 = uVar15 | 2;
      }
      else {
        uVar15 = ((*(uint *)(psVar14 + 2) & param_4 & 0xff) >> 1 & 1) + uVar15;
      }
    }
    else if (param_3 == -2) {
      uVar15 = 0;
      if (*(long *)(psVar14 + 0xc) != 0) {
        uVar15 = 6;
      }
    }
    else {
      if (sVar4 < 0) {
        uVar15 = 1;
        if ((0xfffffffd < (uint)(int)sVar4) || (-2 - sVar4 <= param_3)) goto LAB_0059fe70;
      }
      uVar15 = 0;
    }
    psVar20 = psVar14;
    if (uVar15 <= uVar11) {
      psVar20 = psVar19;
    }
    psVar14 = *(short **)(psVar14 + 8);
    if (uVar15 <= uVar11) {
      uVar15 = uVar11;
    }
    psVar19 = psVar20;
    uVar11 = uVar15;
  } while (psVar14 != (short *)0x0);
  if (param_5 != '\0') goto LAB_0059fecc;
  if ((psVar20 != (short *)0x0) && ((*(byte *)(param_1 + 0x2c) >> 1 & 1) == 0)) {
    psVar14 = (short *)0x0;
    goto LAB_005a007c;
  }
LAB_0059fff0:
  psVar14 = (short *)(&DAT_00b10658)[(uVar21 + (byte)(&DAT_002c78ae)[uVar8]) % 0x17];
  if (psVar14 != (short *)0x0) {
LAB_005a002c:
    pbVar18 = *(byte **)(psVar14 + 0x1c);
    pbVar16 = param_2;
    do {
      bVar2 = *pbVar18;
      if (bVar2 == *pbVar16) {
        if (bVar2 == 0) {
          psVar19 = psVar20;
          uVar11 = 0;
          goto LAB_005a00c0;
        }
      }
      else if ((&DAT_002c78ae)[bVar2] != (&DAT_002c78ae)[*pbVar16]) goto LAB_005a0068;
      pbVar18 = pbVar18 + 1;
      pbVar16 = pbVar16 + 1;
    } while( true );
  }
  goto LAB_005a0078;
LAB_005a0068:
  psVar14 = *(short **)(psVar14 + 0x20);
  if (psVar14 == (short *)0x0) goto code_r0x005a0070;
  goto LAB_005a002c;
code_r0x005a0070:
  uVar15 = 0;
  goto LAB_0059fecc;
  while( true ) {
    psVar20 = psVar14;
    if (uVar15 <= uVar11) {
      psVar20 = psVar19;
    }
    psVar14 = *(short **)(psVar14 + 8);
    if (uVar15 <= uVar11) {
      uVar15 = uVar11;
    }
    psVar19 = psVar20;
    uVar11 = uVar15;
    if (psVar14 == (short *)0x0) break;
LAB_005a00c0:
    sVar4 = *psVar14;
    if (sVar4 == param_3) {
      uVar15 = 4;
LAB_005a00d0:
      if ((*(uint *)(psVar14 + 2) & 3) == (param_4 & 0xff)) {
        uVar15 = uVar15 | 2;
      }
      else {
        uVar15 = ((*(uint *)(psVar14 + 2) & param_4 & 0xff) >> 1 & 1) + uVar15;
      }
    }
    else if (param_3 == -2) {
      uVar15 = 0;
      if (*(long *)(psVar14 + 0xc) != 0) {
        uVar15 = 6;
      }
    }
    else {
      if (sVar4 < 0) {
        uVar15 = 1;
        if ((0xfffffffd < (uint)(int)sVar4) || (-2 - sVar4 <= param_3)) goto LAB_005a00d0;
      }
      uVar15 = 0;
    }
  }
LAB_0059fecc:
  psVar14 = (short *)(ulong)(param_5 != '\0');
  if ((param_5 == '\0') || (5 < uVar15)) {
LAB_005a0078:
    if (psVar20 == (short *)0x0) {
      return (short *)0x0;
    }
LAB_005a007c:
    if (((ulong)psVar14 & 1) != 0) {
      return psVar20;
    }
    if (*(long *)(psVar20 + 0xc) == 0) {
      return (short *)0x0;
    }
    return psVar20;
  }
LAB_0059ff28:
  uVar8 = (ulong)(uVar21 + 0x49);
  if (param_1 == 0) {
    psVar14 = (short *)FUN_005827b0(uVar8);
  }
  else {
    psVar14 = (short *)FUN_005a76c8(param_1,uVar8);
  }
  if (psVar14 == (short *)0x0) {
    return (short *)0x0;
  }
  memset(psVar14,0,uVar8);
  psVar20 = psVar14 + 0x24;
  *psVar14 = (short)param_3;
  *(short **)(psVar14 + 0x1c) = psVar20;
  *(uint *)(psVar14 + 2) = param_4 & 0xff;
  memcpy(psVar20,param_2,(ulong)(uVar21 + 1));
  bVar2 = *(byte *)(psVar14 + 0x24);
  if (bVar2 != 0) {
    pbVar18 = (byte *)((long)psVar14 + 0x49);
    do {
      uVar8 = (ulong)bVar2;
      bVar2 = *pbVar18;
      pbVar18[-1] = (&DAT_002c78ae)[uVar8];
      pbVar18 = pbVar18 + 1;
    } while (bVar2 != 0);
    psVar20 = *(short **)(psVar14 + 0x1c);
  }
  psVar20 = (short *)FUN_005e36d0(param_1 + 0x250,psVar20,psVar14);
  if (psVar20 != psVar14) {
    *(short **)(psVar14 + 8) = psVar20;
    return psVar14;
  }
  if (param_1 != 0) {
    if (psVar14 < *(short **)(param_1 + 0x1e8)) {
      if (psVar14 < *(short **)(param_1 + 0x1d8)) {
        if (psVar14 < *(short **)(param_1 + 0x1e0)) goto LAB_005a014c;
        uVar10 = *(undefined8 *)(param_1 + 0x1c0);
        *(short **)(param_1 + 0x1c0) = psVar14;
      }
      else {
        uVar10 = *(undefined8 *)(param_1 + 0x1d0);
        *(short **)(param_1 + 0x1d0) = psVar14;
      }
      *(undefined8 *)psVar14 = uVar10;
      cVar3 = *(char *)(param_1 + 0x67);
      goto joined_r0x005a0298;
    }
LAB_005a014c:
    if (*(long *)(param_1 + 0x300) != 0) {
      FUN_005a7654(param_1,psVar14);
      cVar3 = *(char *)(param_1 + 0x67);
      goto joined_r0x005a0298;
    }
  }
  puVar9 = &DAT_00b0da18;
  if (DAT_00b0d9f0 == 0) {
LAB_005a01e0:
    (*(code *)*puVar9)(psVar14);
  }
  else {
    if (DAT_00b103d8 != (short *)0x0) {
      (*DAT_00b0da70)();
    }
    iVar6 = (*DAT_00b0da28)(psVar14);
    DAT_00b105b8 = DAT_00b105b8 - iVar6;
    DAT_00b10600 = DAT_00b10600 + -1;
    (*DAT_00b0da18)(psVar14);
    if (DAT_00b103d8 != (short *)0x0) {
      puVar9 = &DAT_00b0da80;
      psVar14 = DAT_00b103d8;
      goto LAB_005a01e0;
    }
  }
  cVar3 = *(char *)(param_1 + 0x67);
joined_r0x005a0298:
  if ((cVar3 == '\0') && (*(char *)(param_1 + 0x68) == '\0')) {
    *(undefined1 *)(param_1 + 0x67) = 1;
    if (0 < *(int *)(param_1 + 0xdc)) {
      *(undefined4 *)(param_1 + 400) = 1;
    }
    *(undefined2 *)(param_1 + 0x19c) = 0;
    *(int *)(param_1 + 0x198) = *(int *)(param_1 + 0x198) + 1;
    if (*(long *)(param_1 + 0x158) != 0) {
      FUN_00595b78(*(long *)(param_1 + 0x158),"out of memory");
      lVar12 = *(long *)(*(long *)(param_1 + 0x158) + 0xd8);
      *(undefined4 *)(*(long *)(param_1 + 0x158) + 0x18) = 7;
      if (lVar12 != 0) {
        do {
          *(undefined4 *)(lVar12 + 0x18) = 7;
          *(int *)(lVar12 + 0x34) = *(int *)(lVar12 + 0x34) + 1;
          lVar12 = *(long *)(lVar12 + 0xd8);
        } while (lVar12 != 0);
        return (short *)0x0;
      }
    }
  }
  return (short *)0x0;
}


// ===== 005a02bc  FUN_005a02bc =====

void FUN_005a02bc(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  
  if (param_1 == (undefined8 *)0x0) {
    lVar2 = sqlite3_mprintf("unable to use function %s in the requested context",0);
  }
  else {
    lVar2 = sqlite3_mprintf("unable to use function %s in the requested context",
                            *(undefined8 *)(param_1[1] + 8));
    *(undefined4 *)((long)param_1 + 0x24) = 1;
    FUN_00590724(*param_1,lVar2,0xffffffffffffffff,1,0xffffffffffffffff);
  }
  if (lVar2 == 0) {
    return;
  }
  puVar3 = &DAT_00b0da18;
  if (DAT_00b0d9f0 != 0) {
    if (DAT_00b103d8 != 0) {
      (*DAT_00b0da70)();
    }
    iVar1 = (*DAT_00b0da28)(lVar2);
    DAT_00b105b8 = DAT_00b105b8 - iVar1;
    DAT_00b10600 = DAT_00b10600 + -1;
    (*DAT_00b0da18)(lVar2);
    if (DAT_00b103d8 == 0) {
      return;
    }
    puVar3 = &DAT_00b0da80;
    lVar2 = DAT_00b103d8;
  }
                    /* WARNING: Could not recover jumptable at 0x005a03b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(lVar2);
  return;
}


// ===== 005a03cc  sqlite3_trace =====

undefined8 sqlite3_trace(long param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  char *pcVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (param_1 == 0) {
    pcVar2 = "NULL";
  }
  else {
    cVar1 = *(char *)(param_1 + 0x71);
    if (cVar1 != -0x46) {
      if (cVar1 == 'v') {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != 0) {
          (*DAT_00b0da70)(lVar3);
          lVar3 = *(long *)(param_1 + 0x18);
        }
        uVar4 = *(undefined8 *)(param_1 + 0xf8);
        *(long *)(param_1 + 0xf0) = param_2;
        *(undefined8 *)(param_1 + 0xf8) = param_3;
        *(char *)(param_1 + 0x6e) = (param_2 != 0) << 6;
        if (lVar3 != 0) {
          (*DAT_00b0da80)(lVar3);
        }
        return uVar4;
      }
      if (cVar1 != 'm') {
        pcVar2 = "invalid";
        goto LAB_005a0490;
      }
    }
    pcVar2 = "unopened";
  }
LAB_005a0490:
  sqlite3_log(0x15,"API call with %s database connection pointer",pcVar2);
  sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x2d211,
              "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
  return 0;
}


// ===== 005a04dc  sqlite3_trace_v2 =====

undefined8 sqlite3_trace_v2(long param_1,int param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  char cVar3;
  char *pcVar4;
  long lVar5;
  
  if (param_1 == 0) {
    pcVar4 = "NULL";
  }
  else {
    cVar3 = *(char *)(param_1 + 0x71);
    if (cVar3 != -0x46) {
      if (cVar3 == 'v') {
        lVar5 = *(long *)(param_1 + 0x18);
        if (lVar5 != 0) {
          (*DAT_00b0da70)(lVar5);
          lVar5 = *(long *)(param_1 + 0x18);
        }
        lVar2 = 0;
        if (param_2 != 0) {
          lVar2 = param_3;
        }
        *(long *)(param_1 + 0xf0) = lVar2;
        *(undefined8 *)(param_1 + 0xf8) = param_4;
        iVar1 = 0;
        if (lVar2 != 0) {
          iVar1 = param_2;
        }
        *(char *)(param_1 + 0x6e) = (char)iVar1;
        if (lVar5 != 0) {
          (*DAT_00b0da80)(lVar5);
        }
        return 0;
      }
      if (cVar3 != 'm') {
        pcVar4 = "invalid";
        goto LAB_005a05ac;
      }
    }
    pcVar4 = "unopened";
  }
LAB_005a05ac:
  sqlite3_log(0x15,"API call with %s database connection pointer",pcVar4);
  sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x2d229,
              "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
  return 0x15;
}


// ===== 005a05fc  sqlite3_profile =====

undefined8 sqlite3_profile(long param_1,long param_2,undefined8 param_3)

{
  byte bVar1;
  char cVar2;
  char *pcVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (param_1 == 0) {
    pcVar3 = "NULL";
  }
  else {
    cVar2 = *(char *)(param_1 + 0x71);
    if (cVar2 != -0x46) {
      if (cVar2 == 'v') {
        lVar4 = *(long *)(param_1 + 0x18);
        if (lVar4 != 0) {
          (*DAT_00b0da70)(lVar4);
          lVar4 = *(long *)(param_1 + 0x18);
        }
        uVar5 = *(undefined8 *)(param_1 + 0x108);
        *(long *)(param_1 + 0x100) = param_2;
        *(undefined8 *)(param_1 + 0x108) = param_3;
        bVar1 = *(byte *)(param_1 + 0x6e) & 0xf;
        if (param_2 != 0) {
          bVar1 = *(byte *)(param_1 + 0x6e) & 0xf | 0x80;
        }
        *(byte *)(param_1 + 0x6e) = bVar1;
        if (lVar4 != 0) {
          (*DAT_00b0da80)(lVar4);
        }
        return uVar5;
      }
      if (cVar2 != 'm') {
        pcVar3 = "invalid";
        goto LAB_005a06cc;
      }
    }
    pcVar3 = "unopened";
  }
LAB_005a06cc:
  sqlite3_log(0x15,"API call with %s database connection pointer",pcVar3);
  sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x2d248,
              "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
  return 0;
}


// ===== 005a0718  sqlite3_commit_hook =====

undefined8 sqlite3_commit_hook(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  if (param_1 == 0) {
    pcVar3 = "NULL";
  }
  else {
    cVar1 = *(char *)(param_1 + 0x71);
    if (cVar1 != -0x46) {
      if (cVar1 == 'v') {
        if (*(long *)(param_1 + 0x18) != 0) {
          (*DAT_00b0da70)();
          uVar2 = *(undefined8 *)(param_1 + 0x110);
          *(undefined8 *)(param_1 + 0x110) = param_3;
          *(undefined8 *)(param_1 + 0x118) = param_2;
          if (*(long *)(param_1 + 0x18) != 0) {
            (*DAT_00b0da80)(*(long *)(param_1 + 0x18));
          }
          return uVar2;
        }
        uVar2 = *(undefined8 *)(param_1 + 0x110);
        *(undefined8 *)(param_1 + 0x110) = param_3;
        *(undefined8 *)(param_1 + 0x118) = param_2;
        return uVar2;
      }
      if (cVar1 != 'm') {
        pcVar3 = "invalid";
        goto LAB_005a07c4;
      }
    }
    pcVar3 = "unopened";
  }
LAB_005a07c4:
  sqlite3_log(0x15,"API call with %s database connection pointer",pcVar3);
  sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x2d266,
              "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
  return 0;
}


// ===== 005a0828  sqlite3_update_hook =====

undefined8 sqlite3_update_hook(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  if (param_1 == 0) {
    pcVar3 = "NULL";
  }
  else {
    cVar1 = *(char *)(param_1 + 0x71);
    if (cVar1 != -0x46) {
      if (cVar1 == 'v') {
        if (*(long *)(param_1 + 0x18) != 0) {
          (*DAT_00b0da70)();
          uVar2 = *(undefined8 *)(param_1 + 0x130);
          *(undefined8 *)(param_1 + 0x130) = param_3;
          *(undefined8 *)(param_1 + 0x138) = param_2;
          if (*(long *)(param_1 + 0x18) != 0) {
            (*DAT_00b0da80)(*(long *)(param_1 + 0x18));
          }
          return uVar2;
        }
        uVar2 = *(undefined8 *)(param_1 + 0x130);
        *(undefined8 *)(param_1 + 0x130) = param_3;
        *(undefined8 *)(param_1 + 0x138) = param_2;
        return uVar2;
      }
      if (cVar1 != 'm') {
        pcVar3 = "invalid";
        goto LAB_005a08d4;
      }
    }
    pcVar3 = "unopened";
  }
LAB_005a08d4:
  sqlite3_log(0x15,"API call with %s database connection pointer",pcVar3);
  sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x2d27f,
              "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
  return 0;
}


// ===== 005a0938  sqlite3_rollback_hook =====

undefined8 sqlite3_rollback_hook(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  if (param_1 == 0) {
    pcVar3 = "NULL";
  }
  else {
    cVar1 = *(char *)(param_1 + 0x71);
    if (cVar1 != -0x46) {
      if (cVar1 == 'v') {
        if (*(long *)(param_1 + 0x18) != 0) {
          (*DAT_00b0da70)();
          uVar2 = *(undefined8 *)(param_1 + 0x120);
          *(undefined8 *)(param_1 + 0x120) = param_3;
          *(undefined8 *)(param_1 + 0x128) = param_2;
          if (*(long *)(param_1 + 0x18) != 0) {
            (*DAT_00b0da80)(*(long *)(param_1 + 0x18));
          }
          return uVar2;
        }
        uVar2 = *(undefined8 *)(param_1 + 0x120);
        *(undefined8 *)(param_1 + 0x120) = param_3;
        *(undefined8 *)(param_1 + 0x128) = param_2;
        return uVar2;
      }
      if (cVar1 != 'm') {
        pcVar3 = "invalid";
        goto LAB_005a09e4;
      }
    }
    pcVar3 = "unopened";
  }
LAB_005a09e4:
  sqlite3_log(0x15,"API call with %s database connection pointer",pcVar3);
  sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x2d298,
              "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
  return 0;
}


// ===== 005a0a48  sqlite3_autovacuum_pages =====

undefined8
sqlite3_autovacuum_pages(long param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  char cVar1;
  
  if (param_1 == 0) {
    sqlite3_log(0x15,"API call with %s database connection pointer",&DAT_002a1c46);
  }
  else {
    cVar1 = *(char *)(param_1 + 0x71);
    if (cVar1 != -0x46) {
      if (cVar1 == 'v') {
        if (*(long *)(param_1 + 0x18) != 0) {
          (*DAT_00b0da70)(*(long *)(param_1 + 0x18));
        }
        if (*(code **)(param_1 + 0x148) != (code *)0x0) {
          (**(code **)(param_1 + 0x148))(*(undefined8 *)(param_1 + 0x140));
        }
        *(code **)(param_1 + 0x148) = param_4;
        *(undefined8 *)(param_1 + 0x150) = param_2;
        *(undefined8 *)(param_1 + 0x140) = param_3;
        if (*(long *)(param_1 + 0x18) != 0) {
          (*DAT_00b0da80)(*(long *)(param_1 + 0x18));
        }
        return 0;
      }
      if (cVar1 != 'm') {
        sqlite3_log(0x15,"API call with %s database connection pointer","invalid");
        goto joined_r0x005a0ba0;
      }
    }
    sqlite3_log(0x15,"API call with %s database connection pointer","unopened");
  }
joined_r0x005a0ba0:
  if (param_4 != (code *)0x0) {
    (*param_4)(param_3);
  }
  sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x2d2cc,
              "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
  return 0x15;
}


// ===== 005a0ba8  sqlite3_wal_autocheckpoint =====

undefined8 sqlite3_wal_autocheckpoint(long param_1,uint param_2)

{
  char cVar1;
  long lVar2;
  char *pcVar3;
  
  if (param_1 == 0) {
    pcVar3 = "NULL";
  }
  else {
    cVar1 = *(char *)(param_1 + 0x71);
    if (cVar1 != -0x46) {
      if (cVar1 == 'v') {
        if ((int)param_2 < 1) {
          if (*(long *)(param_1 + 0x18) == 0) {
            *(undefined8 *)(param_1 + 0x160) = 0;
            *(undefined8 *)(param_1 + 0x168) = 0;
            return 0;
          }
          (*DAT_00b0da70)(*(long *)(param_1 + 0x18));
          lVar2 = *(long *)(param_1 + 0x18);
          *(undefined8 *)(param_1 + 0x160) = 0;
          *(undefined8 *)(param_1 + 0x168) = 0;
        }
        else {
          if (*(long *)(param_1 + 0x18) == 0) {
            *(code **)(param_1 + 0x160) = FUN_005a0e10;
            *(ulong *)(param_1 + 0x168) = (ulong)param_2;
            return 0;
          }
          (*DAT_00b0da70)(*(long *)(param_1 + 0x18));
          lVar2 = *(long *)(param_1 + 0x18);
          *(code **)(param_1 + 0x160) = FUN_005a0e10;
          *(ulong *)(param_1 + 0x168) = (ulong)param_2;
        }
        if (lVar2 != 0) {
          (*DAT_00b0da80)();
        }
        return 0;
      }
      if (cVar1 != 'm') {
        pcVar3 = "invalid";
        goto LAB_005a0c50;
      }
    }
    pcVar3 = "unopened";
  }
LAB_005a0c50:
  sqlite3_log(0x15,"API call with %s database connection pointer",pcVar3);
  sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x2d302,
              "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
  return 0x15;
}


// ===== 005a0d00  sqlite3_wal_hook =====

undefined8 sqlite3_wal_hook(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  if (param_1 == 0) {
    pcVar3 = "NULL";
  }
  else {
    cVar1 = *(char *)(param_1 + 0x71);
    if (cVar1 != -0x46) {
      if (cVar1 == 'v') {
        if (*(long *)(param_1 + 0x18) != 0) {
          (*DAT_00b0da70)();
          uVar2 = *(undefined8 *)(param_1 + 0x168);
          *(undefined8 *)(param_1 + 0x160) = param_2;
          *(undefined8 *)(param_1 + 0x168) = param_3;
          if (*(long *)(param_1 + 0x18) != 0) {
            (*DAT_00b0da80)(*(long *)(param_1 + 0x18));
          }
          return uVar2;
        }
        uVar2 = *(undefined8 *)(param_1 + 0x168);
        *(undefined8 *)(param_1 + 0x160) = param_2;
        *(undefined8 *)(param_1 + 0x168) = param_3;
        return uVar2;
      }
      if (cVar1 != 'm') {
        pcVar3 = "invalid";
        goto LAB_005a0dac;
      }
    }
    pcVar3 = "unopened";
  }
LAB_005a0dac:
  sqlite3_log(0x15,"API call with %s database connection pointer",pcVar3);
  sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x2d31a,
              "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
  return 0;
}


// ===== 005a0e10  FUN_005a0e10 =====

undefined8 FUN_005a0e10(int param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  if (param_1 <= param_4) {
    if (DAT_00b103a8 != (code *)0x0) {
      (*DAT_00b103a8)();
    }
    sqlite3_wal_checkpoint_v2(param_2,param_3,0,0,0);
    if (DAT_00b103b0 != (code *)0x0) {
      (*DAT_00b103b0)();
    }
  }
  return 0;
}


// ===== 005a0e7c  sqlite3_wal_checkpoint_v2 =====

undefined4
sqlite3_wal_checkpoint_v2
          (long param_1,byte *param_2,uint param_3,undefined4 *param_4,undefined4 *param_5)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  char *pcVar9;
  ulong uVar10;
  undefined8 *puVar11;
  byte *pbVar12;
  byte *pbVar13;
  int *piVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  
  if (param_1 == 0) {
    pcVar9 = "NULL";
  }
  else {
    cVar1 = *(char *)(param_1 + 0x71);
    if (cVar1 != -0x46) {
      if (cVar1 == 'v') {
        if (param_4 != (undefined4 *)0x0) {
          *param_4 = 0xffffffff;
        }
        if (param_5 != (undefined4 *)0x0) {
          *param_5 = 0xffffffff;
        }
        if (param_3 < 4) {
          if (*(long *)(param_1 + 0x18) != 0) {
            (*DAT_00b0da70)();
          }
          if ((param_2 == (byte *)0x0) || (*param_2 == 0)) {
            uVar10 = 0xc;
LAB_005a1088:
            piVar14 = (int *)(param_1 + 0x28);
            iVar6 = *piVar14;
            *(undefined4 *)(param_1 + 0x290) = 0;
            if (iVar6 < 1) {
              iVar7 = 0;
              bVar4 = false;
              bVar5 = true;
            }
            else if ((int)uVar10 == 0xc) {
              iVar6 = FUN_006857b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),param_3,param_4,
                                   param_5);
              bVar4 = iVar6 == 5;
              iVar7 = 0;
              if (!bVar4) {
                iVar7 = iVar6;
              }
              bVar5 = iVar7 == 0;
              if ((1 < *piVar14) && (iVar7 == 0)) {
                lVar15 = 0x28;
                lVar17 = 2;
                do {
                  iVar7 = FUN_006857b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar15),param_3,0
                                       ,0);
                  lVar15 = lVar15 + 0x20;
                  if (iVar7 == 5) {
                    bVar4 = true;
                    iVar7 = 0;
                  }
                  bVar5 = iVar7 == 0;
                  bVar3 = lVar17 < *piVar14;
                  lVar17 = lVar17 + 1;
                } while (iVar7 == 0 && bVar3);
              }
            }
            else {
LAB_005a1134:
              uVar16 = 0;
              bVar4 = false;
              do {
                if (uVar10 == uVar16) {
                  iVar7 = FUN_006857b8(*(undefined8 *)
                                        (*(long *)(param_1 + 0x20) + uVar10 * 0x20 + 8),param_3,
                                       param_4,param_5);
                  iVar6 = *(int *)(param_1 + 0x28);
                  param_4 = (undefined4 *)0x0;
                  param_5 = (undefined4 *)0x0;
                  if (iVar7 == 5) {
                    bVar4 = true;
                    iVar7 = 0;
                  }
                }
                else {
                  iVar7 = 0;
                }
                uVar16 = uVar16 + 1;
                bVar5 = iVar7 == 0;
              } while (((long)uVar16 < (long)iVar6) && (iVar7 == 0));
            }
            iVar6 = 5;
            if (!(bool)(bVar5 & bVar4)) {
              iVar6 = iVar7;
            }
            *(int *)(param_1 + 0x50) = iVar6;
            if (iVar6 == 0) {
              if (*(long *)(param_1 + 0x188) == 0) {
                *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
              }
              else {
                FUN_005ac5c0(param_1,0);
              }
              iVar6 = 0;
              uVar8 = 0;
              if (*(char *)(param_1 + 0x67) == '\0') goto LAB_005a123c;
            }
            else {
              FUN_005ac5c0(param_1,iVar6);
            }
          }
          else {
            iVar6 = *(int *)(param_1 + 0x28);
            uVar10 = (ulong)(iVar6 - 1);
            if (0 < iVar6) {
              puVar11 = (undefined8 *)(*(long *)(param_1 + 0x20) + uVar10 * 0x20);
              do {
                pbVar12 = (byte *)*puVar11;
                iVar7 = (int)uVar10;
                pbVar13 = param_2;
                if (pbVar12 != (byte *)0x0) {
                  do {
                    bVar2 = *pbVar12;
                    if (bVar2 == *pbVar13) {
                      if (bVar2 == 0) {
                        if (iVar7 < 0) goto LAB_005a11f4;
                        goto LAB_005a1088;
                      }
                    }
                    else if ((&DAT_002c78ae)[bVar2] != (&DAT_002c78ae)[*pbVar13]) break;
                    pbVar12 = pbVar12 + 1;
                    pbVar13 = pbVar13 + 1;
                  } while( true );
                }
                pbVar12 = param_2;
                pbVar13 = &DAT_002aeb89;
                if (iVar7 == 0) {
                  do {
                    bVar2 = *pbVar13;
                    if (bVar2 == *pbVar12) {
                      if (bVar2 == 0) {
                        uVar10 = 0;
                        *(undefined4 *)(param_1 + 0x290) = 0;
                        goto LAB_005a1134;
                      }
                    }
                    else if ((&DAT_002c78ae)[bVar2] != (&DAT_002c78ae)[*pbVar12]) break;
                    pbVar12 = pbVar12 + 1;
                    pbVar13 = pbVar13 + 1;
                  } while( true );
                }
                uVar10 = (ulong)(iVar7 - 1);
                puVar11 = puVar11 + -4;
              } while (0 < iVar7);
            }
LAB_005a11f4:
            iVar6 = 1;
            FUN_0058c8b8(param_1,1,"unknown database: %s",param_2);
          }
          uVar8 = FUN_005c1188(param_1,iVar6);
LAB_005a123c:
          if (*(int *)(param_1 + 0xd0) == 0) {
            *(undefined4 *)(param_1 + 400) = 0;
          }
          if (*(long *)(param_1 + 0x18) == 0) {
            return uVar8;
          }
          (*DAT_00b0da80)();
          return uVar8;
        }
        uVar8 = 0x2d348;
        goto LAB_005a0f64;
      }
      if (cVar1 != 'm') {
        pcVar9 = "invalid";
        goto LAB_005a0f2c;
      }
    }
    pcVar9 = "unopened";
  }
LAB_005a0f2c:
  sqlite3_log(0x15,"API call with %s database connection pointer",pcVar9);
  uVar8 = 0x2d33a;
LAB_005a0f64:
  sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",uVar8,
              "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
  return 0x15;
}


// ===== 005a1260  sqlite3_wal_checkpoint =====

void sqlite3_wal_checkpoint(undefined8 param_1,undefined8 param_2)

{
  sqlite3_wal_checkpoint_v2(param_1,param_2,0,0,0);
  return;
}


// ===== 005a1270  sqlite3_error_offset =====

undefined4 sqlite3_error_offset(long param_1)

{
  undefined4 uVar1;
  char cVar2;
  
  if (param_1 != 0) {
    cVar2 = *(char *)(param_1 + 0x71);
    if (((cVar2 != 'm') && (cVar2 != 'v')) && (cVar2 != -0x46)) {
      sqlite3_log(0x15,"API call with %s database connection pointer","invalid");
      return 0xffffffff;
    }
    if (*(int *)(param_1 + 0x50) != 0) {
      if (*(long *)(param_1 + 0x18) != 0) {
        (*DAT_00b0da70)(*(long *)(param_1 + 0x18));
        uVar1 = *(undefined4 *)(param_1 + 0x54);
        if (*(long *)(param_1 + 0x18) != 0) {
          (*DAT_00b0da80)(*(long *)(param_1 + 0x18));
        }
        return uVar1;
      }
      return *(undefined4 *)(param_1 + 0x54);
    }
  }
  return 0xffffffff;
}


// ===== 005a1338  sqlite3_errmsg16 =====

char * sqlite3_errmsg16(long param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  char *pcVar5;
  ulong uVar6;
  undefined2 uVar7;
  
  if (param_1 == 0) {
    return "o";
  }
  cVar2 = *(char *)(param_1 + 0x71);
  if (((cVar2 != 'm') && (cVar2 != 'v')) && (cVar2 != -0x46)) {
    sqlite3_log(0x15,"API call with %s database connection pointer","invalid");
    return "b";
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    (*DAT_00b0da70)();
  }
  if (*(char *)(param_1 + 0x67) != '\0') {
    pcVar5 = "o";
    goto LAB_005a138c;
  }
  lVar4 = *(long *)(param_1 + 0x188);
  if (lVar4 == 0) {
LAB_005a142c:
    uVar1 = *(uint *)(param_1 + 0x50);
    uVar6 = (ulong)uVar1;
    if (uVar1 == 0x204) {
      pcVar5 = "abort due to ROLLBACK";
    }
    else if (uVar1 == 0x65) {
      pcVar5 = "no more rows available";
    }
    else if (uVar1 == 100) {
      pcVar5 = "another row available";
    }
    else if (((uint)(uVar6 & 0xff) < 0x1d) && ((0x1410004U >> (uVar6 & 0x3f) & 1) == 0)) {
      pcVar5 = (&PTR_s_not_an_error_00ad3f40)[uVar6 & 0xff];
    }
    else {
      pcVar5 = "unknown error";
    }
    FUN_0058c8b8(param_1,uVar6,pcVar5);
    pcVar5 = *(char **)(param_1 + 0x188);
    if (pcVar5 != (char *)0x0) {
      if ((((*(ushort *)(pcVar5 + 0x14) ^ 0xffff) & 0x202) == 0) && (pcVar5[0x16] == '\x02')) {
        pcVar5 = *(char **)(pcVar5 + 8);
      }
      else if ((*(ushort *)(pcVar5 + 0x14) & 1) == 0) {
        pcVar5 = (char *)FUN_005c17b0(pcVar5,2);
      }
      else {
        pcVar5 = (char *)0x0;
      }
    }
  }
  else {
    if ((((*(ushort *)(lVar4 + 0x14) ^ 0xffff) & 0x202) == 0) && (*(char *)(lVar4 + 0x16) == '\x02')
       ) {
      pcVar5 = *(char **)(lVar4 + 8);
    }
    else {
      if ((*(ushort *)(lVar4 + 0x14) & 1) != 0) goto LAB_005a142c;
      pcVar5 = (char *)FUN_005c17b0(lVar4,2);
    }
    if (pcVar5 == (char *)0x0) goto LAB_005a142c;
  }
  if ((*(char *)(param_1 + 0x67) != '\0') && (*(int *)(param_1 + 0xdc) == 0)) {
    *(undefined1 *)(param_1 + 0x67) = 0;
    *(undefined4 *)(param_1 + 400) = 0;
    iVar3 = *(int *)(param_1 + 0x198) + -1;
    *(int *)(param_1 + 0x198) = iVar3;
    uVar7 = 0;
    if (iVar3 == 0) {
      uVar7 = *(undefined2 *)(param_1 + 0x19e);
    }
    *(undefined2 *)(param_1 + 0x19c) = uVar7;
  }
LAB_005a138c:
  if (*(long *)(param_1 + 0x18) != 0) {
    (*DAT_00b0da80)(*(long *)(param_1 + 0x18));
  }
  return pcVar5;
}


// ===== 005a151c  FUN_005a151c =====

void FUN_005a151c(long param_1)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 0x67) != '\0') && (*(int *)(param_1 + 0xdc) == 0)) {
    *(undefined1 *)(param_1 + 0x67) = 0;
    *(undefined4 *)(param_1 + 400) = 0;
    iVar1 = *(int *)(param_1 + 0x198) + -1;
    *(int *)(param_1 + 0x198) = iVar1;
    if (iVar1 != 0) {
      *(undefined2 *)(param_1 + 0x19c) = 0;
      return;
    }
    *(undefined2 *)(param_1 + 0x19c) = *(undefined2 *)(param_1 + 0x19e);
    return;
  }
  return;
}


// ===== 005a155c  sqlite3_errcode =====

uint sqlite3_errcode(long param_1)

{
  char cVar1;
  
  if (param_1 != 0) {
    cVar1 = *(char *)(param_1 + 0x71);
    if (((cVar1 != 'm') && (cVar1 != 'v')) && (cVar1 != -0x46)) {
      sqlite3_log(0x15,"API call with %s database connection pointer","invalid");
      sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x2d41f,
                  "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
      return 0x15;
    }
    if (*(char *)(param_1 + 0x67) == '\0') {
      return *(uint *)(param_1 + 0x58) & *(uint *)(param_1 + 0x50);
    }
  }
  return 7;
}


// ===== 005a15f0  sqlite3_extended_errcode =====

undefined4 sqlite3_extended_errcode(long param_1)

{
  char cVar1;
  
  if (param_1 != 0) {
    cVar1 = *(char *)(param_1 + 0x71);
    if (((cVar1 != 'm') && (cVar1 != 'v')) && (cVar1 != -0x46)) {
      sqlite3_log(0x15,"API call with %s database connection pointer","invalid");
      sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x2d428,
                  "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
      return 0x15;
    }
    if (*(char *)(param_1 + 0x67) == '\0') {
      return *(undefined4 *)(param_1 + 0x50);
    }
  }
  return 7;
}


// ===== 005a167c  sqlite3_system_errno =====

ulong sqlite3_system_errno(ulong param_1)

{
  if (param_1 != 0) {
    param_1 = (ulong)*(uint *)(param_1 + 0x5c);
  }
  return param_1;
}


// ===== 005a1688  sqlite3_errstr =====

char * sqlite3_errstr(uint param_1)

{
  if (param_1 == 0x204) {
    return "abort due to ROLLBACK";
  }
  if (param_1 == 0x65) {
    return "no more rows available";
  }
  if (param_1 == 100) {
    return "another row available";
  }
  param_1 = param_1 & 0xff;
  if ((param_1 < 0x1d) && ((0x1410004U >> ((ulong)param_1 & 0x3f) & 1) == 0)) {
    return (&PTR_s_not_an_error_00ad3f40)[param_1];
  }
  return "unknown error";
}


// ===== 005a16fc  sqlite3_limit =====

uint sqlite3_limit(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  char *pcVar5;
  uint *puVar6;
  
  if (param_1 == 0) {
    pcVar5 = "NULL";
  }
  else {
    cVar4 = *(char *)(param_1 + 0x71);
    if (cVar4 != -0x46) {
      if (cVar4 == 'v') {
        if (0xb < param_2) {
          return 0xffffffff;
        }
        puVar6 = (uint *)(param_1 + (ulong)param_2 * 4 + 0x88);
        uVar3 = *puVar6;
        if (-1 < (int)param_3) {
          uVar1 = 0x1e;
          if (0x1d < param_3 || param_2 != 0) {
            uVar1 = param_3;
          }
          uVar2 = *(uint *)(&DAT_002c8158 + (ulong)param_2 * 4);
          if ((int)param_3 <= (int)*(uint *)(&DAT_002c8158 + (ulong)param_2 * 4)) {
            uVar2 = uVar1;
          }
          *puVar6 = uVar2;
        }
        return uVar3;
      }
      if (cVar4 != 'm') {
        pcVar5 = "invalid";
        goto LAB_005a174c;
      }
    }
    pcVar5 = "unopened";
  }
LAB_005a174c:
  sqlite3_log(0x15,"API call with %s database connection pointer",pcVar5);
  sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x2d4d1,
              "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
  return 0xffffffff;
}


// ===== 005a17d0  sqlite3_open =====

void sqlite3_open(undefined8 param_1,undefined8 param_2)

{
  FUN_005a17dc(param_1,param_2,6,0);
  return;
}


// ===== 005a17dc  FUN_005a17dc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005a17dc(char *param_1,undefined8 *param_2,uint param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined4 uVar16;
  char *pcVar17;
  char cVar18;
  char *local_70;
  long local_68;
  uint local_44;
  
  local_70 = (char *)0x0;
  local_68 = 0;
  if (param_2 == (undefined8 *)0x0) {
    sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x2d621,
                "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
    return 0x15;
  }
  *param_2 = 0;
  uVar8 = sqlite3_initialize();
  if (uVar8 != 0) {
    return uVar8;
  }
  cVar18 = '\0';
  if ((((param_3 >> 0xf & 1) == 0) && (DAT_00b0d9f4 != '\0')) &&
     (cVar18 = DAT_00b0d9f5, (param_3 >> 0x10 & 1) != 0)) {
    cVar18 = '\x01';
    if ((param_3 >> 0x12 & 1) == 0) goto LAB_005a1848;
LAB_005a189c:
    param_3 = param_3 & 0xfffdffff;
  }
  else {
    if ((param_3 >> 0x12 & 1) != 0) goto LAB_005a189c;
LAB_005a1848:
    if (DAT_00b0db3c != 0) {
      param_3 = param_3 | 0x20000;
    }
  }
  local_44 = param_3 & 0xfff600e7;
  pcVar10 = (char *)FUN_005827b0(0x310);
  if (pcVar10 == (char *)0x0) {
LAB_005a1b34:
    uVar8 = 7;
LAB_005a1b38:
    FUN_0059e8b8(pcVar10,0);
    pcVar10 = (char *)0x0;
  }
  else {
    memset(pcVar10,0,0x310);
    if (cVar18 != '\0') {
      if (DAT_00b0d9f4 != '\0') {
        lVar11 = (*DAT_00b0da60)(1);
        *(long *)(pcVar10 + 0x18) = lVar11;
        if (lVar11 != 0) {
          (*DAT_00b0da70)();
          goto LAB_005a1900;
        }
      }
      puVar14 = &DAT_00b0da18;
      if (DAT_00b0d9f0 != 0) {
        if (DAT_00b103d8 != (char *)0x0) {
          (*DAT_00b0da70)();
        }
        iVar9 = (*DAT_00b0da28)(pcVar10);
        DAT_00b105b8 = DAT_00b105b8 - iVar9;
        DAT_00b10600 = DAT_00b10600 + -1;
        (*DAT_00b0da18)(pcVar10);
        pcVar10 = DAT_00b103d8;
        if (DAT_00b103d8 == (char *)0x0) goto LAB_005a1b34;
        puVar14 = &DAT_00b0da80;
      }
      (*(code *)*puVar14)(pcVar10);
      pcVar10 = (char *)0x0;
      goto LAB_005a1b34;
    }
LAB_005a1900:
    uVar6 = _UNK_002c8180;
    uVar5 = _DAT_002c8178;
    uVar4 = _UNK_002c8170;
    uVar3 = _DAT_002c8168;
    uVar2 = _UNK_002c8160;
    uVar12 = _DAT_002c8158;
    uVar16 = 0xff;
    if ((param_3 & 0x2000000) != 0) {
      uVar16 = 0xffffffff;
    }
    pcVar10[0x6a] = -1;
    *(undefined4 *)(pcVar10 + 0x58) = uVar16;
    pcVar10[0x28] = '\x02';
    pcVar10[0x29] = '\0';
    pcVar10[0x2a] = '\0';
    pcVar10[0x2b] = '\0';
    pcVar10[0x71] = 'm';
    *(undefined8 *)(pcVar10 + 0xb0) = uVar6;
    *(undefined8 *)(pcVar10 + 0xa8) = uVar5;
    *(undefined8 *)(pcVar10 + 0x90) = uVar2;
    *(undefined8 *)(pcVar10 + 0x88) = uVar12;
    *(char **)(pcVar10 + 0x20) = pcVar10 + 0x298;
    *(undefined8 *)(pcVar10 + 0xa0) = uVar4;
    *(undefined8 *)(pcVar10 + 0x98) = uVar3;
    uVar12 = DAT_00b0db18;
    *(undefined ***)(pcVar10 + 200) = &PTR_DAT_00b0d558;
    *(undefined8 *)(pcVar10 + 0x40) = uVar12;
    pcVar10[0x198] = '\x01';
    pcVar10[0x199] = '\0';
    pcVar10[0x19a] = '\0';
    pcVar10[0x19b] = '\0';
    pcVar10[0x19c] = '\0';
    pcVar10[0x19d] = '\0';
    pcVar10[0xb4] = '\0';
    pcVar10[0xb5] = '\0';
    pcVar10[0xb6] = '\0';
    pcVar10[0xb7] = '\0';
    pcVar10[0x65] = '\x01';
    pcVar10[0x74] = '\0';
    pcVar10[0x75] = '\0';
    pcVar10[0x76] = '\0';
    pcVar10[0x77] = '\0';
    *(ulong *)(pcVar10 + 0x30) = *(ulong *)(pcVar10 + 0x30) | 0x70e005c0e0;
    pcVar10[0x268] = '\0';
    pcVar10[0x269] = '\0';
    pcVar10[0x26a] = '\0';
    pcVar10[0x26b] = '\0';
    pcVar10[0x26c] = '\0';
    pcVar10[0x26d] = '\0';
    pcVar10[0x26e] = '\0';
    pcVar10[0x26f] = '\0';
    pcVar10[0x278] = '\0';
    pcVar10[0x279] = '\0';
    pcVar10[0x27a] = '\0';
    pcVar10[0x27b] = '\0';
    pcVar10[0x27c] = '\0';
    pcVar10[0x27d] = '\0';
    pcVar10[0x27e] = '\0';
    pcVar10[0x27f] = '\0';
    pcVar10[0x270] = '\0';
    pcVar10[0x271] = '\0';
    pcVar10[0x272] = '\0';
    pcVar10[0x273] = '\0';
    pcVar10[0x274] = '\0';
    pcVar10[0x275] = '\0';
    pcVar10[0x276] = '\0';
    pcVar10[0x277] = '\0';
    pcVar10[0x220] = '\0';
    pcVar10[0x221] = '\0';
    pcVar10[0x222] = '\0';
    pcVar10[0x223] = '\0';
    pcVar10[0x224] = '\0';
    pcVar10[0x225] = '\0';
    pcVar10[0x226] = '\0';
    pcVar10[0x227] = '\0';
    pcVar10[0x230] = '\0';
    pcVar10[0x231] = '\0';
    pcVar10[0x232] = '\0';
    pcVar10[0x233] = '\0';
    pcVar10[0x234] = '\0';
    pcVar10[0x235] = '\0';
    pcVar10[0x236] = '\0';
    pcVar10[0x237] = '\0';
    pcVar10[0x228] = '\0';
    pcVar10[0x229] = '\0';
    pcVar10[0x22a] = '\0';
    pcVar10[0x22b] = '\0';
    pcVar10[0x22c] = '\0';
    pcVar10[0x22d] = '\0';
    pcVar10[0x22e] = '\0';
    pcVar10[0x22f] = '\0';
    FUN_005a228c(pcVar10,"B",1,0,FUN_00636adc,0);
    FUN_005a228c(pcVar10,"B",3,0,FUN_00636adc,0);
    FUN_005a228c(pcVar10,"B",2,0,FUN_00636adc,0);
    FUN_005a228c(pcVar10,"NOCASE",1,0,FUN_00685968,0);
    FUN_005a228c(pcVar10,"RTRIM",1,0,FUN_006859f8,0);
    if (pcVar10[0x67] != '\0') goto LAB_005a1a58;
    *(uint *)(pcVar10 + 0x4c) = param_3 & 0xfff600e7;
    if ((1 << (ulong)(param_3 & 7) & 0x46U) == 0) {
      iVar9 = 0x15;
      sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x2d6fb,
                  "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
      pcVar17 = (char *)0x0;
LAB_005a1d74:
      puVar13 = (undefined *)0x0;
      if (pcVar17 != (char *)0x0) {
        puVar13 = &DAT_002ad0ce;
      }
LAB_005a1d8c:
      FUN_0058c8b8(pcVar10,iVar9,puVar13,pcVar17);
      if (pcVar17 != (char *)0x0) {
        puVar14 = &DAT_00b0da18;
        if (DAT_00b0d9f0 != 0) {
          if (DAT_00b103d8 != (char *)0x0) {
            (*DAT_00b0da70)();
          }
          iVar9 = (*DAT_00b0da28)(pcVar17);
          DAT_00b105b8 = DAT_00b105b8 - iVar9;
          DAT_00b10600 = DAT_00b10600 + -1;
          (*DAT_00b0da18)(pcVar17);
          if (DAT_00b103d8 == (char *)0x0) goto LAB_005a1a58;
          puVar14 = &DAT_00b0da80;
          pcVar17 = DAT_00b103d8;
        }
        (*(code *)*puVar14)(pcVar17);
      }
    }
    else {
      pcVar17 = ":memory:";
      if (param_1 != (char *)0x0) {
        pcVar17 = param_1;
      }
      iVar9 = FUN_006625e4(param_4,pcVar17,&local_44,pcVar10,&local_68,&local_70);
      if (iVar9 != 0) {
        pcVar17 = local_70;
        if (iVar9 != 7) goto LAB_005a1d74;
        FUN_00591818(pcVar10);
        iVar9 = 7;
        puVar13 = (undefined *)0x0;
        pcVar17 = local_70;
        if (local_70 != (char *)0x0) {
          puVar13 = &DAT_002ad0ce;
        }
        goto LAB_005a1d8c;
      }
      iVar9 = FUN_005d0350(*(undefined8 *)pcVar10,local_68,pcVar10,*(long *)(pcVar10 + 0x20) + 8,0,
                           local_44 | 0x100);
      if (iVar9 == 0) {
        FUN_0058d4dc(*(undefined8 *)(*(long *)(pcVar10 + 0x20) + 8));
        lVar11 = FUN_00662414(pcVar10,*(undefined8 *)(*(long *)(pcVar10 + 0x20) + 8));
        lVar15 = *(long *)(pcVar10 + 0x20);
        cVar18 = pcVar10[0x67];
        *(long *)(lVar15 + 0x18) = lVar11;
        if (cVar18 == '\0') {
          FUN_005e3098(pcVar10,*(undefined1 *)(lVar11 + 0x71));
          lVar15 = *(long *)(pcVar10 + 0x20);
        }
        lVar11 = *(long *)(lVar15 + 8);
        if ((*(char *)(lVar11 + 0x11) != '\0') &&
           (iVar9 = *(int *)(lVar11 + 0x14) + -1, *(int *)(lVar11 + 0x14) = iVar9, iVar9 == 0)) {
          FUN_005ac750();
        }
        uVar12 = FUN_00662414(pcVar10,0);
        puVar14 = *(undefined8 **)(pcVar10 + 0x20);
        *puVar14 = &DAT_002aeb89;
        *(undefined1 *)(puVar14 + 2) = 3;
        cVar18 = pcVar10[0x67];
        puVar14[4] = &DAT_002aeb9b;
        puVar14[7] = uVar12;
        *(undefined1 *)(puVar14 + 6) = 1;
        pcVar10[0x71] = 'v';
        if (cVar18 == '\0') {
          pcVar10[0x50] = '\0';
          pcVar10[0x51] = '\0';
          pcVar10[0x52] = '\0';
          pcVar10[0x53] = '\0';
          if (*(long *)(pcVar10 + 0x188) == 0) {
            pcVar10[0x54] = -1;
            pcVar10[0x55] = -1;
            pcVar10[0x56] = -1;
            pcVar10[0x57] = -1;
          }
          else {
            FUN_005ac5c0(pcVar10,0);
          }
          FUN_00685aac(pcVar10);
          iVar9 = sqlite3_errcode(pcVar10);
          if (iVar9 == 0) {
            iVar9 = FUN_00685d24(pcVar10,0);
            bVar7 = iVar9 == 0;
            if (iVar9 == 0) {
              iVar9 = FUN_00686068(pcVar10);
              bVar7 = iVar9 == 0;
              if (iVar9 != 0) goto LAB_005a1f64;
              iVar9 = FUN_00686420(pcVar10);
              bVar7 = iVar9 == 0;
              if (iVar9 != 0) goto LAB_005a1f64;
              iVar9 = FUN_00686538(pcVar10);
              bVar7 = iVar9 == 0;
              if (iVar9 != 0) goto LAB_005a1f64;
              iVar9 = FUN_00686550(pcVar10);
              bVar7 = iVar9 == 0;
              if (iVar9 != 0) goto LAB_005a1f64;
              iVar9 = FUN_0068656c(pcVar10);
              if (iVar9 != 0) goto LAB_005a1f9c;
            }
            else {
LAB_005a1f64:
              if (!bVar7) goto LAB_005a1f9c;
            }
            FUN_00685b5c(pcVar10);
            iVar9 = sqlite3_errcode(pcVar10);
            if (iVar9 != 0) goto LAB_005a1a58;
          }
          else {
LAB_005a1f9c:
            FUN_0058ca60(pcVar10,iVar9);
          }
          FUN_0059df14(pcVar10,0,DAT_00b0da04,DAT_00b0da08);
          sqlite3_wal_autocheckpoint(pcVar10,1000);
        }
      }
      else {
        iVar1 = 7;
        if (iVar9 != 0xc0a) {
          iVar1 = iVar9;
        }
        FUN_0058ca60(pcVar10,iVar1);
      }
    }
LAB_005a1a58:
    if (*(long *)(pcVar10 + 0x18) != 0) {
      (*DAT_00b0da80)();
    }
    cVar18 = pcVar10[0x71];
    if (((cVar18 != 'm') && (cVar18 != 'v')) && (cVar18 != -0x46)) {
      uVar8 = 0x15;
      sqlite3_log(0x15,"API call with %s database connection pointer","invalid");
      sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x2d41f,
                  "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
LAB_005a1ce0:
      pcVar10[0x71] = -0x46;
      *param_2 = pcVar10;
      goto joined_r0x005a1b50;
    }
    if (pcVar10[0x67] != '\0') goto LAB_005a1b34;
    uVar8 = *(uint *)(pcVar10 + 0x58) & *(uint *)(pcVar10 + 0x50);
    if ((uVar8 & 0xff) == 7) goto LAB_005a1b38;
    if (uVar8 != 0) goto LAB_005a1ce0;
  }
  *param_2 = pcVar10;
joined_r0x005a1b50:
  if (local_68 != 0) {
    for (pcVar10 = (char *)(local_68 + -4);
        (((pcVar10[3] != '\0' || (pcVar10[2] != '\0')) || (pcVar10[1] != '\0')) ||
        (*pcVar10 != '\0')); pcVar10 = pcVar10 + -1) {
    }
    puVar14 = &DAT_00b0da18;
    if (DAT_00b0d9f0 != 0) {
      if (DAT_00b103d8 != (char *)0x0) {
        (*DAT_00b0da70)();
      }
      iVar9 = (*DAT_00b0da28)(pcVar10);
      DAT_00b105b8 = DAT_00b105b8 - iVar9;
      DAT_00b10600 = DAT_00b10600 + -1;
      (*DAT_00b0da18)(pcVar10);
      if (DAT_00b103d8 == (char *)0x0) {
        return uVar8;
      }
      puVar14 = &DAT_00b0da80;
      pcVar10 = DAT_00b103d8;
    }
    (*(code *)*puVar14)(pcVar10);
  }
  return uVar8;
}


// ===== 005a1fcc  sqlite3_open_v2 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint sqlite3_open_v2(char *param_1,undefined8 *param_2,uint param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined4 uVar16;
  char *pcVar17;
  char cVar18;
  char *pcStack_70;
  long lStack_68;
  uint uStack_44;
  
  pcStack_70 = (char *)0x0;
  lStack_68 = 0;
  if (param_2 == (undefined8 *)0x0) {
    sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x2d621,
                "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
    return 0x15;
  }
  *param_2 = 0;
  uVar8 = sqlite3_initialize();
  if (uVar8 != 0) {
    return uVar8;
  }
  cVar18 = '\0';
  if ((((param_3 >> 0xf & 1) == 0) && (DAT_00b0d9f4 != '\0')) &&
     (cVar18 = DAT_00b0d9f5, (param_3 >> 0x10 & 1) != 0)) {
    cVar18 = '\x01';
    if ((param_3 >> 0x12 & 1) == 0) goto LAB_005a1848;
LAB_005a189c:
    param_3 = param_3 & 0xfffdffff;
  }
  else {
    if ((param_3 >> 0x12 & 1) != 0) goto LAB_005a189c;
LAB_005a1848:
    if (DAT_00b0db3c != 0) {
      param_3 = param_3 | 0x20000;
    }
  }
  uStack_44 = param_3 & 0xfff600e7;
  pcVar10 = (char *)FUN_005827b0(0x310);
  if (pcVar10 == (char *)0x0) {
LAB_005a1b34:
    uVar8 = 7;
LAB_005a1b38:
    FUN_0059e8b8(pcVar10,0);
    pcVar10 = (char *)0x0;
  }
  else {
    memset(pcVar10,0,0x310);
    if (cVar18 != '\0') {
      if (DAT_00b0d9f4 != '\0') {
        lVar11 = (*DAT_00b0da60)(1);
        *(long *)(pcVar10 + 0x18) = lVar11;
        if (lVar11 != 0) {
          (*DAT_00b0da70)();
          goto LAB_005a1900;
        }
      }
      puVar14 = &DAT_00b0da18;
      if (DAT_00b0d9f0 != 0) {
        if (DAT_00b103d8 != (char *)0x0) {
          (*DAT_00b0da70)();
        }
        iVar9 = (*DAT_00b0da28)(pcVar10);
        DAT_00b105b8 = DAT_00b105b8 - iVar9;
        DAT_00b10600 = DAT_00b10600 + -1;
        (*DAT_00b0da18)(pcVar10);
        pcVar10 = DAT_00b103d8;
        if (DAT_00b103d8 == (char *)0x0) goto LAB_005a1b34;
        puVar14 = &DAT_00b0da80;
      }
      (*(code *)*puVar14)(pcVar10);
      pcVar10 = (char *)0x0;
      goto LAB_005a1b34;
    }
LAB_005a1900:
    uVar6 = _UNK_002c8180;
    uVar5 = _DAT_002c8178;
    uVar4 = _UNK_002c8170;
    uVar3 = _DAT_002c8168;
    uVar2 = _UNK_002c8160;
    uVar12 = _DAT_002c8158;
    uVar16 = 0xff;
    if ((param_3 & 0x2000000) != 0) {
      uVar16 = 0xffffffff;
    }
    pcVar10[0x6a] = -1;
    *(undefined4 *)(pcVar10 + 0x58) = uVar16;
    pcVar10[0x28] = '\x02';
    pcVar10[0x29] = '\0';
    pcVar10[0x2a] = '\0';
    pcVar10[0x2b] = '\0';
    pcVar10[0x71] = 'm';
    *(undefined8 *)(pcVar10 + 0xb0) = uVar6;
    *(undefined8 *)(pcVar10 + 0xa8) = uVar5;
    *(undefined8 *)(pcVar10 + 0x90) = uVar2;
    *(undefined8 *)(pcVar10 + 0x88) = uVar12;
    *(char **)(pcVar10 + 0x20) = pcVar10 + 0x298;
    *(undefined8 *)(pcVar10 + 0xa0) = uVar4;
    *(undefined8 *)(pcVar10 + 0x98) = uVar3;
    uVar12 = DAT_00b0db18;
    *(undefined ***)(pcVar10 + 200) = &PTR_DAT_00b0d558;
    *(undefined8 *)(pcVar10 + 0x40) = uVar12;
    pcVar10[0x198] = '\x01';
    pcVar10[0x199] = '\0';
    pcVar10[0x19a] = '\0';
    pcVar10[0x19b] = '\0';
    pcVar10[0x19c] = '\0';
    pcVar10[0x19d] = '\0';
    pcVar10[0xb4] = '\0';
    pcVar10[0xb5] = '\0';
    pcVar10[0xb6] = '\0';
    pcVar10[0xb7] = '\0';
    pcVar10[0x65] = '\x01';
    pcVar10[0x74] = '\0';
    pcVar10[0x75] = '\0';
    pcVar10[0x76] = '\0';
    pcVar10[0x77] = '\0';
    *(ulong *)(pcVar10 + 0x30) = *(ulong *)(pcVar10 + 0x30) | 0x70e005c0e0;
    pcVar10[0x268] = '\0';
    pcVar10[0x269] = '\0';
    pcVar10[0x26a] = '\0';
    pcVar10[0x26b] = '\0';
    pcVar10[0x26c] = '\0';
    pcVar10[0x26d] = '\0';
    pcVar10[0x26e] = '\0';
    pcVar10[0x26f] = '\0';
    pcVar10[0x278] = '\0';
    pcVar10[0x279] = '\0';
    pcVar10[0x27a] = '\0';
    pcVar10[0x27b] = '\0';
    pcVar10[0x27c] = '\0';
    pcVar10[0x27d] = '\0';
    pcVar10[0x27e] = '\0';
    pcVar10[0x27f] = '\0';
    pcVar10[0x270] = '\0';
    pcVar10[0x271] = '\0';
    pcVar10[0x272] = '\0';
    pcVar10[0x273] = '\0';
    pcVar10[0x274] = '\0';
    pcVar10[0x275] = '\0';
    pcVar10[0x276] = '\0';
    pcVar10[0x277] = '\0';
    pcVar10[0x220] = '\0';
    pcVar10[0x221] = '\0';
    pcVar10[0x222] = '\0';
    pcVar10[0x223] = '\0';
    pcVar10[0x224] = '\0';
    pcVar10[0x225] = '\0';
    pcVar10[0x226] = '\0';
    pcVar10[0x227] = '\0';
    pcVar10[0x230] = '\0';
    pcVar10[0x231] = '\0';
    pcVar10[0x232] = '\0';
    pcVar10[0x233] = '\0';
    pcVar10[0x234] = '\0';
    pcVar10[0x235] = '\0';
    pcVar10[0x236] = '\0';
    pcVar10[0x237] = '\0';
    pcVar10[0x228] = '\0';
    pcVar10[0x229] = '\0';
    pcVar10[0x22a] = '\0';
    pcVar10[0x22b] = '\0';
    pcVar10[0x22c] = '\0';
    pcVar10[0x22d] = '\0';
    pcVar10[0x22e] = '\0';
    pcVar10[0x22f] = '\0';
    FUN_005a228c(pcVar10,"B",1,0,FUN_00636adc,0);
    FUN_005a228c(pcVar10,"B",3,0,FUN_00636adc,0);
    FUN_005a228c(pcVar10,"B",2,0,FUN_00636adc,0);
    FUN_005a228c(pcVar10,"NOCASE",1,0,FUN_00685968,0);
    FUN_005a228c(pcVar10,"RTRIM",1,0,FUN_006859f8,0);
    if (pcVar10[0x67] != '\0') goto LAB_005a1a58;
    *(uint *)(pcVar10 + 0x4c) = param_3 & 0xfff600e7;
    if ((1 << (ulong)(param_3 & 7) & 0x46U) == 0) {
      iVar9 = 0x15;
      sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x2d6fb,
                  "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
      pcVar17 = (char *)0x0;
LAB_005a1d74:
      puVar13 = (undefined *)0x0;
      if (pcVar17 != (char *)0x0) {
        puVar13 = &DAT_002ad0ce;
      }
LAB_005a1d8c:
      FUN_0058c8b8(pcVar10,iVar9,puVar13,pcVar17);
      if (pcVar17 != (char *)0x0) {
        puVar14 = &DAT_00b0da18;
        if (DAT_00b0d9f0 != 0) {
          if (DAT_00b103d8 != (char *)0x0) {
            (*DAT_00b0da70)();
          }
          iVar9 = (*DAT_00b0da28)(pcVar17);
          DAT_00b105b8 = DAT_00b105b8 - iVar9;
          DAT_00b10600 = DAT_00b10600 + -1;
          (*DAT_00b0da18)(pcVar17);
          if (DAT_00b103d8 == (char *)0x0) goto LAB_005a1a58;
          puVar14 = &DAT_00b0da80;
          pcVar17 = DAT_00b103d8;
        }
        (*(code *)*puVar14)(pcVar17);
      }
    }
    else {
      pcVar17 = ":memory:";
      if (param_1 != (char *)0x0) {
        pcVar17 = param_1;
      }
      iVar9 = FUN_006625e4(param_4,pcVar17,&uStack_44,pcVar10,&lStack_68,&pcStack_70);
      if (iVar9 != 0) {
        pcVar17 = pcStack_70;
        if (iVar9 != 7) goto LAB_005a1d74;
        FUN_00591818(pcVar10);
        iVar9 = 7;
        puVar13 = (undefined *)0x0;
        pcVar17 = pcStack_70;
        if (pcStack_70 != (char *)0x0) {
          puVar13 = &DAT_002ad0ce;
        }
        goto LAB_005a1d8c;
      }
      iVar9 = FUN_005d0350(*(undefined8 *)pcVar10,lStack_68,pcVar10,*(long *)(pcVar10 + 0x20) + 8,0,
                           uStack_44 | 0x100);
      if (iVar9 == 0) {
        FUN_0058d4dc(*(undefined8 *)(*(long *)(pcVar10 + 0x20) + 8));
        lVar11 = FUN_00662414(pcVar10,*(undefined8 *)(*(long *)(pcVar10 + 0x20) + 8));
        lVar15 = *(long *)(pcVar10 + 0x20);
        cVar18 = pcVar10[0x67];
        *(long *)(lVar15 + 0x18) = lVar11;
        if (cVar18 == '\0') {
          FUN_005e3098(pcVar10,*(undefined1 *)(lVar11 + 0x71));
          lVar15 = *(long *)(pcVar10 + 0x20);
        }
        lVar11 = *(long *)(lVar15 + 8);
        if ((*(char *)(lVar11 + 0x11) != '\0') &&
           (iVar9 = *(int *)(lVar11 + 0x14) + -1, *(int *)(lVar11 + 0x14) = iVar9, iVar9 == 0)) {
          FUN_005ac750();
        }
        uVar12 = FUN_00662414(pcVar10,0);
        puVar14 = *(undefined8 **)(pcVar10 + 0x20);
        *puVar14 = &DAT_002aeb89;
        *(undefined1 *)(puVar14 + 2) = 3;
        cVar18 = pcVar10[0x67];
        puVar14[4] = &DAT_002aeb9b;
        puVar14[7] = uVar12;
        *(undefined1 *)(puVar14 + 6) = 1;
        pcVar10[0x71] = 'v';
        if (cVar18 == '\0') {
          pcVar10[0x50] = '\0';
          pcVar10[0x51] = '\0';
          pcVar10[0x52] = '\0';
          pcVar10[0x53] = '\0';
          if (*(long *)(pcVar10 + 0x188) == 0) {
            pcVar10[0x54] = -1;
            pcVar10[0x55] = -1;
            pcVar10[0x56] = -1;
            pcVar10[0x57] = -1;
          }
          else {
            FUN_005ac5c0(pcVar10,0);
          }
          FUN_00685aac(pcVar10);
          iVar9 = sqlite3_errcode(pcVar10);
          if (iVar9 == 0) {
            iVar9 = FUN_00685d24(pcVar10,0);
            bVar7 = iVar9 == 0;
            if (iVar9 == 0) {
              iVar9 = FUN_00686068(pcVar10);
              bVar7 = iVar9 == 0;
              if (iVar9 != 0) goto LAB_005a1f64;
              iVar9 = FUN_00686420(pcVar10);
              bVar7 = iVar9 == 0;
              if (iVar9 != 0) goto LAB_005a1f64;
              iVar9 = FUN_00686538(pcVar10);
              bVar7 = iVar9 == 0;
              if (iVar9 != 0) goto LAB_005a1f64;
              iVar9 = FUN_00686550(pcVar10);
              bVar7 = iVar9 == 0;
              if (iVar9 != 0) goto LAB_005a1f64;
              iVar9 = FUN_0068656c(pcVar10);
              if (iVar9 != 0) goto LAB_005a1f9c;
            }
            else {
LAB_005a1f64:
              if (!bVar7) goto LAB_005a1f9c;
            }
            FUN_00685b5c(pcVar10);
            iVar9 = sqlite3_errcode(pcVar10);
            if (iVar9 != 0) goto LAB_005a1a58;
          }
          else {
LAB_005a1f9c:
            FUN_0058ca60(pcVar10,iVar9);
          }
          FUN_0059df14(pcVar10,0,DAT_00b0da04,DAT_00b0da08);
          sqlite3_wal_autocheckpoint(pcVar10,1000);
        }
      }
      else {
        iVar1 = 7;
        if (iVar9 != 0xc0a) {
          iVar1 = iVar9;
        }
        FUN_0058ca60(pcVar10,iVar1);
      }
    }
LAB_005a1a58:
    if (*(long *)(pcVar10 + 0x18) != 0) {
      (*DAT_00b0da80)();
    }
    cVar18 = pcVar10[0x71];
    if (((cVar18 != 'm') && (cVar18 != 'v')) && (cVar18 != -0x46)) {
      uVar8 = 0x15;
      sqlite3_log(0x15,"API call with %s database connection pointer","invalid");
      sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x2d41f,
                  "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
LAB_005a1ce0:
      pcVar10[0x71] = -0x46;
      *param_2 = pcVar10;
      goto joined_r0x005a1b50;
    }
    if (pcVar10[0x67] != '\0') goto LAB_005a1b34;
    uVar8 = *(uint *)(pcVar10 + 0x58) & *(uint *)(pcVar10 + 0x50);
    if ((uVar8 & 0xff) == 7) goto LAB_005a1b38;
    if (uVar8 != 0) goto LAB_005a1ce0;
  }
  *param_2 = pcVar10;
joined_r0x005a1b50:
  if (lStack_68 != 0) {
    for (pcVar10 = (char *)(lStack_68 + -4);
        (((pcVar10[3] != '\0' || (pcVar10[2] != '\0')) || (pcVar10[1] != '\0')) ||
        (*pcVar10 != '\0')); pcVar10 = pcVar10 + -1) {
    }
    puVar14 = &DAT_00b0da18;
    if (DAT_00b0d9f0 != 0) {
      if (DAT_00b103d8 != (char *)0x0) {
        (*DAT_00b0da70)();
      }
      iVar9 = (*DAT_00b0da28)(pcVar10);
      DAT_00b105b8 = DAT_00b105b8 - iVar9;
      DAT_00b10600 = DAT_00b10600 + -1;
      (*DAT_00b0da18)(pcVar10);
      if (DAT_00b103d8 == (char *)0x0) {
        return uVar8;
      }
      puVar14 = &DAT_00b0da80;
      pcVar10 = DAT_00b103d8;
    }
    (*(code *)*puVar14)(pcVar10);
  }
  return uVar8;
}


// ===== 005a1fd0  sqlite3_open16 =====

ulong sqlite3_open16(undefined *param_1,long *param_2)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  
  if (param_2 == (long *)0x0) {
    sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x2d799,
                "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
    return 0x15;
  }
  *param_2 = 0;
  uVar3 = sqlite3_initialize();
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  puVar4 = (undefined8 *)FUN_005827b0(0x38);
  if (puVar4 != (undefined8 *)0x0) {
    puVar1 = &UNK_002c8188;
    if (param_1 != (undefined *)0x0) {
      puVar1 = param_1;
    }
    puVar4[6] = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    *(undefined2 *)((long)puVar4 + 0x14) = 1;
    FUN_00590724(puVar4,puVar1,0xffffffffffffffff,2,0);
    if ((((*(ushort *)((long)puVar4 + 0x14) ^ 0xffff) & 0x202) == 0) &&
       (*(char *)((long)puVar4 + 0x16) == '\x01')) {
      lVar5 = puVar4[1];
    }
    else {
      if ((*(ushort *)((long)puVar4 + 0x14) & 1) != 0) goto LAB_005a210c;
      lVar5 = FUN_005c17b0(puVar4,1);
    }
    if (lVar5 != 0) {
      uVar2 = FUN_005a17dc(lVar5,param_2,6,0);
      if (uVar2 == 0) {
        lVar5 = *(long *)(*(long *)(*param_2 + 0x20) + 0x18);
        if ((*(ushort *)(lVar5 + 0x72) & 1) == 0) {
          uVar2 = 0;
          *(undefined1 *)(*param_2 + 100) = 2;
          *(undefined1 *)(lVar5 + 0x71) = 2;
        }
        else {
          uVar2 = 0;
        }
      }
      goto LAB_005a2110;
    }
  }
LAB_005a210c:
  uVar2 = 7;
LAB_005a2110:
  FUN_005900cc(puVar4);
  return (ulong)(uVar2 & 0xff);
}


// ===== 005a2134  sqlite3_create_collation =====

void sqlite3_create_collation(void)

{
  sqlite3_create_collation_v2();
  return;
}


// ===== 005a213c  sqlite3_create_collation_v2 =====

undefined4
sqlite3_create_collation_v2
          (long param_1,long param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  if (param_1 == 0) {
    pcVar4 = "NULL";
  }
  else {
    cVar1 = *(char *)(param_1 + 0x71);
    if (cVar1 != -0x46) {
      if (cVar1 == 'v') {
        if (param_2 != 0) {
          if (*(long *)(param_1 + 0x18) != 0) {
            param_3 = param_3 & 0xffffffff;
            (*DAT_00b0da70)(*(long *)(param_1 + 0x18));
          }
          iVar2 = FUN_005a228c(param_1,param_2,param_3,param_4,param_5,param_6);
          if ((iVar2 == 0) && (*(char *)(param_1 + 0x67) == '\0')) {
            uVar3 = 0;
          }
          else {
            uVar3 = FUN_005c1188(param_1,iVar2);
          }
          if (*(long *)(param_1 + 0x18) == 0) {
            return uVar3;
          }
          (*DAT_00b0da80)();
          return uVar3;
        }
        goto LAB_005a220c;
      }
      if (cVar1 != 'm') {
        pcVar4 = "invalid";
        goto LAB_005a21fc;
      }
    }
    pcVar4 = "unopened";
  }
LAB_005a21fc:
  sqlite3_log(0x15,"API call with %s database connection pointer",pcVar4);
LAB_005a220c:
  sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x2d7cf,
              "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
  return 0x15;
}


// ===== 005a228c  FUN_005a228c =====

undefined4
FUN_005a228c(long param_1,byte *param_2,byte param_3,undefined8 param_4,undefined8 param_5,
            undefined8 param_6)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined4 uVar14;
  
  uVar7 = (uint)param_3;
  uVar2 = 2;
  if (uVar7 != 8 && uVar7 != 4) {
    uVar2 = uVar7;
  }
  if (uVar2 - 4 < 0xfffffffd) {
    sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x2d458,
                "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
    return 0x15;
  }
  if (param_2 == (byte *)0x0) {
    lVar8 = *(long *)(param_1 + 0x10);
  }
  else {
    uVar7 = (uint)*param_2;
    if (*param_2 == 0) {
      uVar5 = 0;
      lVar8 = *(long *)(param_1 + 0x278);
      if (lVar8 == 0) goto LAB_005a23e0;
LAB_005a2344:
      uVar7 = *(uint *)(param_1 + 0x268);
      uVar1 = 0;
      if (uVar7 != 0) {
        uVar1 = uVar5 / uVar7;
      }
      piVar11 = (int *)(lVar8 + (ulong)(uVar5 - uVar1 * uVar7) * 0x10);
      piVar9 = piVar11 + 2;
      iVar10 = *piVar11;
      if (iVar10 != 0) goto LAB_005a237c;
LAB_005a23f0:
      piVar9 = (int *)0xb103f8;
LAB_005a23f8:
      lVar8 = *(long *)(piVar9 + 4);
      if (*(long *)(piVar9 + 4) == 0) goto LAB_005a2610;
    }
    else {
      uVar5 = 0;
      pbVar12 = param_2 + 1;
      do {
        uVar1 = uVar7 & 0xdf;
        uVar7 = (uint)*pbVar12;
        uVar5 = (uVar5 + uVar1) * -0x61c8864f;
        pbVar12 = pbVar12 + 1;
      } while (uVar7 != 0);
      lVar8 = *(long *)(param_1 + 0x278);
      if (lVar8 != 0) goto LAB_005a2344;
LAB_005a23e0:
      piVar9 = (int *)(param_1 + 0x270);
      iVar10 = *(int *)(param_1 + 0x26c);
      if (iVar10 == 0) goto LAB_005a23f0;
LAB_005a237c:
      do {
        piVar9 = *(int **)piVar9;
        if (uVar5 == piVar9[8]) {
          pbVar12 = *(byte **)(piVar9 + 6);
          pbVar13 = param_2;
          do {
            bVar4 = *pbVar12;
            if (bVar4 == *pbVar13) {
              if (bVar4 == 0) goto LAB_005a23f8;
            }
            else if ((&DAT_002c78ae)[bVar4] != (&DAT_002c78ae)[*pbVar13]) break;
            pbVar12 = pbVar12 + 1;
            pbVar13 = pbVar13 + 1;
          } while( true );
        }
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
      lVar8 = DAT_00b10408;
      if (DAT_00b10408 == 0) goto LAB_005a2610;
    }
    lVar8 = lVar8 + (ulong)uVar2 * 0x28 + -0x28;
  }
  if ((lVar8 == 0) || (*(long *)(lVar8 + 0x18) == 0)) goto LAB_005a2610;
  if (*(int *)(param_1 + 0xd0) != 0) {
    FUN_0058c8b8(param_1,5,"unable to delete/modify collation sequence due to active statements");
    return 5;
  }
  for (lVar6 = *(long *)(param_1 + 8); lVar6 != 0; lVar6 = *(long *)(lVar6 + 0x10)) {
    *(ushort *)(lVar6 + 200) = *(ushort *)(lVar6 + 200) & 0xfffc | 1;
  }
  bVar4 = *(byte *)(lVar8 + 8);
  if (uVar2 != (bVar4 & 0xfffffff7)) goto LAB_005a2610;
  uVar7 = (uint)*param_2;
  if (*param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    pbVar12 = param_2 + 1;
    do {
      uVar1 = uVar7 & 0xdf;
      uVar7 = (uint)*pbVar12;
      uVar5 = (uVar5 + uVar1) * -0x61c8864f;
      pbVar12 = pbVar12 + 1;
    } while (uVar7 != 0);
  }
  if (*(long *)(param_1 + 0x278) == 0) {
    piVar11 = (int *)(param_1 + 0x270);
    piVar9 = (int *)(param_1 + 0x26c);
  }
  else {
    uVar7 = *(uint *)(param_1 + 0x268);
    uVar1 = 0;
    if (uVar7 != 0) {
      uVar1 = uVar5 / uVar7;
    }
    piVar9 = (int *)(*(long *)(param_1 + 0x278) + (ulong)(uVar5 - uVar1 * uVar7) * 0x10);
    piVar11 = piVar9 + 2;
  }
  iVar10 = *piVar9;
  if (iVar10 == 0) {
    piVar11 = (int *)0xb103f8;
LAB_005a2550:
    lVar6 = *(long *)(piVar11 + 4);
    if (*(byte *)(lVar6 + 8) == bVar4) goto LAB_005a2590;
LAB_005a2560:
    if (*(byte *)(lVar6 + 0x30) != bVar4) goto LAB_005a256c;
LAB_005a25c0:
    if (*(code **)(lVar6 + 0x48) != (code *)0x0) {
      (**(code **)(lVar6 + 0x48))(*(undefined8 *)(lVar6 + 0x38));
      bVar4 = *(byte *)(lVar8 + 8);
    }
    *(undefined8 *)(lVar6 + 0x40) = 0;
    if (*(byte *)(lVar6 + 0x58) != bVar4) goto LAB_005a2610;
  }
  else {
    do {
      piVar11 = *(int **)piVar11;
      if (uVar5 == piVar11[8]) {
        pbVar12 = *(byte **)(piVar11 + 6);
        pbVar13 = param_2;
        do {
          bVar3 = *pbVar12;
          if (bVar3 == *pbVar13) {
            if (bVar3 == 0) goto LAB_005a2550;
          }
          else if ((&DAT_002c78ae)[bVar3] != (&DAT_002c78ae)[*pbVar13]) break;
          pbVar12 = pbVar12 + 1;
          pbVar13 = pbVar13 + 1;
        } while( true );
      }
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    lVar6 = DAT_00b10408;
    if ((uint)*(byte *)(DAT_00b10408 + 8) != (uint)bVar4) goto LAB_005a2560;
LAB_005a2590:
    if (*(code **)(lVar6 + 0x20) != (code *)0x0) {
      (**(code **)(lVar6 + 0x20))(*(undefined8 *)(lVar6 + 0x10));
      bVar4 = *(byte *)(lVar8 + 8);
    }
    *(undefined8 *)(lVar6 + 0x18) = 0;
    if (*(byte *)(lVar6 + 0x30) == bVar4) goto LAB_005a25c0;
LAB_005a256c:
    if (*(byte *)(lVar6 + 0x58) != bVar4) goto LAB_005a2610;
  }
  if (*(code **)(lVar6 + 0x70) != (code *)0x0) {
    (**(code **)(lVar6 + 0x70))(*(undefined8 *)(lVar6 + 0x60));
  }
  *(undefined8 *)(lVar6 + 0x68) = 0;
LAB_005a2610:
  lVar8 = FUN_005e3244(param_1,uVar2,param_2,1);
  if (lVar8 == 0) {
    uVar14 = 7;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x188);
    *(undefined8 *)(lVar8 + 0x10) = param_4;
    *(undefined8 *)(lVar8 + 0x18) = param_5;
    *(undefined8 *)(lVar8 + 0x20) = param_6;
    *(byte *)(lVar8 + 8) = (byte)uVar2 | param_3 & 8;
    *(undefined4 *)(param_1 + 0x50) = 0;
    if (lVar6 == 0) {
      uVar14 = 0;
      *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
    }
    else {
      FUN_005ac5c0(param_1,0);
      uVar14 = 0;
    }
  }
  return uVar14;
}


// ===== 005a2694  sqlite3_create_collation16 =====

undefined4
sqlite3_create_collation16
          (long param_1,long param_2,undefined4 param_3,undefined8 param_4,undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 local_80;
  undefined8 *puStack_78;
  undefined8 local_70;
  long lStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if (param_1 == 0) {
    pcVar5 = "NULL";
  }
  else {
    cVar1 = *(char *)(param_1 + 0x71);
    if (cVar1 != -0x46) {
      if (cVar1 == 'v') {
        if (param_2 != 0) {
          if (*(long *)(param_1 + 0x18) != 0) {
            (*DAT_00b0da70)(*(long *)(param_1 + 0x18));
          }
          local_50 = 0;
          local_70 = 0;
          uStack_58 = 0;
          local_60 = 0;
          puStack_78 = (undefined8 *)0x0;
          local_80 = 0;
          lStack_68 = param_1;
          FUN_00590724(&local_80,param_2,0xffffffffffffffff,2,0);
          if ((local_70._4_2_ >> 1 & 1) == 0) {
            local_70._0_7_ = CONCAT16(1,(undefined6)local_70);
          }
          else if (local_70._6_1_ != '\x01') {
            FUN_005c2adc(&local_80,1,param_3,param_4,param_5);
          }
          puVar8 = puStack_78;
          if (*(char *)(param_1 + 0x67) == '\0') {
            if (puStack_78 != (undefined8 *)0x0) {
              iVar2 = FUN_005a228c(param_1,puStack_78,param_3,param_4,param_5,0);
              if (puVar8 < *(undefined8 **)(param_1 + 0x1e8)) {
                if (*(undefined8 **)(param_1 + 0x1d8) <= puVar8) {
                  uVar7 = *(undefined8 *)(param_1 + 0x1d0);
                  *(undefined8 **)(param_1 + 0x1d0) = puVar8;
                  *puVar8 = uVar7;
                  goto LAB_005a2894;
                }
                if (*(undefined8 **)(param_1 + 0x1e0) <= puVar8) {
                  uVar7 = *(undefined8 *)(param_1 + 0x1c0);
                  *(undefined8 **)(param_1 + 0x1c0) = puVar8;
                  *puVar8 = uVar7;
                  goto LAB_005a2894;
                }
              }
              if (*(long *)(param_1 + 0x300) == 0) {
                puVar6 = &DAT_00b0da18;
                if (DAT_00b0d9f0 != 0) {
                  if (DAT_00b103d8 != (undefined8 *)0x0) {
                    (*DAT_00b0da70)();
                  }
                  iVar4 = (*DAT_00b0da28)(puVar8);
                  DAT_00b105b8 = DAT_00b105b8 - iVar4;
                  DAT_00b10600 = DAT_00b10600 + -1;
                  (*DAT_00b0da18)(puVar8);
                  if (DAT_00b103d8 == (undefined8 *)0x0) goto LAB_005a2894;
                  puVar6 = &DAT_00b0da80;
                  puVar8 = DAT_00b103d8;
                }
                (*(code *)*puVar6)(puVar8);
              }
              else {
                FUN_005a7654(param_1,puVar8);
              }
              goto LAB_005a2894;
            }
          }
          else if ((local_70 & 0x900000000000) != 0 || (int)local_60 != 0) {
            FUN_005c1208(&local_80);
          }
          iVar2 = 0;
LAB_005a2894:
          if ((iVar2 == 0) && (*(char *)(param_1 + 0x67) == '\0')) {
            uVar3 = 0;
          }
          else {
            uVar3 = FUN_005c1188(param_1);
          }
          if (*(long *)(param_1 + 0x18) == 0) {
            return uVar3;
          }
          (*DAT_00b0da80)();
          return uVar3;
        }
        goto LAB_005a277c;
      }
      if (cVar1 != 'm') {
        pcVar5 = "invalid";
        goto LAB_005a276c;
      }
    }
    pcVar5 = "unopened";
  }
LAB_005a276c:
  sqlite3_log(0x15,"API call with %s database connection pointer",pcVar5);
LAB_005a277c:
  sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x2d7e8,
              "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
  return 0x15;
}


// ===== 005a2988  sqlite3_collation_needed =====

undefined8 sqlite3_collation_needed(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  char *pcVar2;
  
  if (param_1 == 0) {
    pcVar2 = "NULL";
  }
  else {
    cVar1 = *(char *)(param_1 + 0x71);
    if (cVar1 != -0x46) {
      if (cVar1 == 'v') {
        if (*(long *)(param_1 + 0x18) != 0) {
          (*DAT_00b0da70)(*(long *)(param_1 + 0x18));
          *(undefined8 *)(param_1 + 0x170) = param_3;
          *(undefined8 *)(param_1 + 0x178) = 0;
          *(undefined8 *)(param_1 + 0x180) = param_2;
          if (*(long *)(param_1 + 0x18) != 0) {
            (*DAT_00b0da80)();
          }
          return 0;
        }
        *(undefined8 *)(param_1 + 0x170) = param_3;
        *(undefined8 *)(param_1 + 0x178) = 0;
        *(undefined8 *)(param_1 + 0x180) = param_2;
        return 0;
      }
      if (cVar1 != 'm') {
        pcVar2 = "invalid";
        goto LAB_005a2a30;
      }
    }
    pcVar2 = "unopened";
  }
LAB_005a2a30:
  sqlite3_log(0x15,"API call with %s database connection pointer",pcVar2);
  sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x2d801,
              "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
  return 0x15;
}


// ===== 005a2aa0  sqlite3_collation_needed16 =====

undefined8 sqlite3_collation_needed16(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  char *pcVar2;
  
  if (param_1 == 0) {
    pcVar2 = "NULL";
  }
  else {
    cVar1 = *(char *)(param_1 + 0x71);
    if (cVar1 != -0x46) {
      if (cVar1 == 'v') {
        if (*(long *)(param_1 + 0x18) != 0) {
          (*DAT_00b0da70)(*(long *)(param_1 + 0x18));
          *(undefined8 *)(param_1 + 0x170) = 0;
          *(undefined8 *)(param_1 + 0x178) = param_3;
          *(undefined8 *)(param_1 + 0x180) = param_2;
          if (*(long *)(param_1 + 0x18) != 0) {
            (*DAT_00b0da80)();
          }
          return 0;
        }
        *(undefined8 *)(param_1 + 0x170) = 0;
        *(undefined8 *)(param_1 + 0x178) = param_3;
        *(undefined8 *)(param_1 + 0x180) = param_2;
        return 0;
      }
      if (cVar1 != 'm') {
        pcVar2 = "invalid";
        goto LAB_005a2b48;
      }
    }
    pcVar2 = "unopened";
  }
LAB_005a2b48:
  sqlite3_log(0x15,"API call with %s database connection pointer",pcVar2);
  sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x2d816,
              "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
  return 0x15;
}


// ===== 005a2bb8  sqlite3_get_clientdata =====

undefined8 sqlite3_get_clientdata(long param_1,char *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    (*DAT_00b0da70)();
  }
  plVar3 = (long *)(param_1 + 0x308);
  do {
    plVar3 = (long *)*plVar3;
    if (plVar3 == (long *)0x0) {
      uVar2 = 0;
      if (*(long *)(param_1 + 0x18) == 0) {
        return 0;
      }
      goto LAB_005a2c1c;
    }
    iVar1 = strcmp((char *)(plVar3 + 3),param_2);
  } while (iVar1 != 0);
  uVar2 = plVar3[1];
  if (*(long *)(param_1 + 0x18) != 0) {
LAB_005a2c1c:
    (*DAT_00b0da80)();
  }
  return uVar2;
}


// ===== 005a2c3c  sqlite3_set_clientdata =====

undefined4 sqlite3_set_clientdata(long param_1,char *param_2,long param_3,code *param_4)

{
  long *plVar1;
  int iVar2;
  size_t sVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  long *plVar6;
  long *plVar7;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    (*DAT_00b0da70)();
  }
  plVar1 = (long *)(param_1 + 0x308);
  plVar7 = plVar1;
  do {
    plVar6 = plVar7;
    plVar7 = (long *)*plVar6;
    if (plVar7 == (long *)0x0) {
      if (param_3 == 0) goto LAB_005a2d74;
      sVar3 = strlen(param_2);
      iVar2 = sqlite3_initialize();
      if ((iVar2 == 0) && (plVar7 = (long *)FUN_005827b0(sVar3 + 0x19), plVar7 != (long *)0x0)) {
        memcpy(plVar7 + 3,param_2,sVar3 + 1);
        *plVar7 = *plVar1;
        *plVar1 = (long)plVar7;
        goto LAB_005a2cb0;
      }
      if (param_4 != (code *)0x0) {
        (*param_4)(param_3);
      }
      uVar5 = 7;
      if (*(long *)(param_1 + 0x18) == 0) {
        return 7;
      }
      goto LAB_005a2d80;
    }
    iVar2 = strcmp((char *)(plVar7 + 3),param_2);
  } while (iVar2 != 0);
  if ((code *)plVar7[2] != (code *)0x0) {
    (*(code *)plVar7[2])(plVar7[1]);
  }
  iVar2 = DAT_00b0d9f0;
  if (param_3 == 0) {
    puVar4 = &DAT_00b0da18;
    *plVar6 = *plVar7;
    if (iVar2 != 0) {
      if (DAT_00b103d8 != (long *)0x0) {
        (*DAT_00b0da70)();
      }
      iVar2 = (*DAT_00b0da28)(plVar7);
      DAT_00b105b8 = DAT_00b105b8 - iVar2;
      DAT_00b10600 = DAT_00b10600 + -1;
      (*DAT_00b0da18)(plVar7);
      if (DAT_00b103d8 == (long *)0x0) goto LAB_005a2d74;
      puVar4 = &DAT_00b0da80;
      plVar7 = DAT_00b103d8;
    }
    (*(code *)*puVar4)(plVar7);
  }
  else {
LAB_005a2cb0:
    plVar7[1] = param_3;
    plVar7[2] = (long)param_4;
  }
LAB_005a2d74:
  uVar5 = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
LAB_005a2d80:
    (*DAT_00b0da80)();
  }
  return uVar5;
}


// ===== 005a2dd8  sqlite3_global_recover =====

undefined8 sqlite3_global_recover(void)

{
  return 0;
}


// ===== 005a2de0  sqlite3_get_autocommit =====

undefined1 sqlite3_get_autocommit(long param_1)

{
  char cVar1;
  char *pcVar2;
  
  if (param_1 == 0) {
    pcVar2 = "NULL";
  }
  else {
    cVar1 = *(char *)(param_1 + 0x71);
    if (cVar1 != -0x46) {
      if (cVar1 == 'v') {
        return *(undefined1 *)(param_1 + 0x65);
      }
      if (cVar1 != 'm') {
        pcVar2 = "invalid";
        goto LAB_005a2e28;
      }
    }
    pcVar2 = "unopened";
  }
LAB_005a2e28:
  sqlite3_log(0x15,"API call with %s database connection pointer",pcVar2);
  sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x2d873,
              "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
  return 0;
}


// ===== 005a2e74  sqlite3_thread_cleanup =====

void sqlite3_thread_cleanup(void)

{
  return;
}


// ===== 005a2e78  sqlite3_table_column_metadata =====

undefined4
sqlite3_table_column_metadata
          (long param_1,undefined8 param_2,long param_3,byte *param_4,long *param_5,
          undefined8 *param_6,uint *param_7,uint *param_8,uint *param_9)

{
  bool bVar1;
  long *plVar2;
  undefined *puVar3;
  byte bVar4;
  char cVar5;
  byte bVar6;
  ushort uVar7;
  bool bVar8;
  int iVar9;
  undefined4 uVar10;
  size_t sVar11;
  long lVar12;
  char *pcVar13;
  ulong uVar14;
  ulong uVar15;
  char *pcVar16;
  byte *pbVar17;
  ulong uVar18;
  uint uVar19;
  byte *pbVar20;
  char *pcVar21;
  long lVar22;
  uint uVar23;
  uint uVar24;
  long local_68;
  
  local_68 = 0;
  if (param_1 == 0) {
    pcVar16 = "NULL";
  }
  else {
    cVar5 = *(char *)(param_1 + 0x71);
    if (cVar5 != -0x46) {
      if (cVar5 == 'v') {
        if (param_3 == 0) goto LAB_005a2ff0;
        if (*(long *)(param_1 + 0x18) != 0) {
          (*DAT_00b0da70)();
        }
        if (*(char *)(param_1 + 0x6f) == '\0') {
          FUN_005ac38c(param_1);
        }
        uVar23 = *(uint *)(param_1 + 0x2c);
        lVar12 = *(long *)(*(long *)(param_1 + 0x20) + 0x18);
        *(undefined1 *)(param_1 + 100) = *(undefined1 *)(lVar12 + 0x71);
        if (((*(byte *)(lVar12 + 0x72) & 1) == 0) &&
           (iVar9 = FUN_005d5720(param_1,0,&local_68,0), iVar9 != 0)) {
LAB_005a2fa8:
          bVar1 = false;
          pcVar16 = (char *)0x0;
          pcVar21 = (char *)0x0;
          uVar24 = 0;
          uVar23 = 0;
          uVar19 = 0;
          bVar8 = true;
          cVar5 = *(char *)(param_1 + 0x6f);
          goto joined_r0x005a340c;
        }
        uVar24 = *(uint *)(param_1 + 0x28);
        if (1 < (int)uVar24) {
          lVar12 = (ulong)uVar24 * 0x20 + -8;
          uVar14 = (ulong)uVar24;
          do {
            if (((*(ushort *)(*(long *)(*(long *)(param_1 + 0x20) + lVar12) + 0x72) & 1) == 0) &&
               (iVar9 = FUN_005d5720(param_1,(int)uVar14 + -1,&local_68,0), iVar9 != 0))
            goto LAB_005a2fa8;
            lVar12 = lVar12 + -0x20;
            bVar1 = 2 < uVar14;
            uVar14 = uVar14 - 1;
          } while (bVar1);
        }
        if ((uVar23 & 1) == 0) {
          *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) & 0xfffffffe;
        }
        lVar12 = FUN_005a34f8(param_1,param_3,param_2);
        if ((lVar12 != 0) && (*(char *)(lVar12 + 0x3f) != '\x02')) {
          if (param_4 != (byte *)0x0) {
            uVar14 = 0;
            bVar6 = *param_4;
            pbVar17 = param_4;
            bVar4 = bVar6;
            while (bVar4 != 0) {
              pbVar17 = pbVar17 + 1;
              uVar14 = (ulong)((uint)(byte)(&DAT_002c78ae)[(uint)bVar4] + (int)uVar14);
              bVar4 = *pbVar17;
            }
            lVar22 = *(long *)(lVar12 + 8);
            uVar18 = (ulong)*(byte *)(lVar12 + (uVar14 & 0xf) + 0x68);
            if (*(char *)(lVar22 + uVar18 * 0x10 + 0xb) == (char)uVar14) {
              pbVar17 = *(byte **)(lVar22 + uVar18 * 0x10);
              pbVar20 = param_4;
              do {
                pbVar20 = pbVar20 + 1;
                if (*pbVar17 == bVar6) {
                  if (bVar6 == 0) goto LAB_005a317c;
                }
                else if ((&DAT_002c78ae)[*pbVar17] != (&DAT_002c78ae)[bVar6]) break;
                bVar6 = *pbVar20;
                pbVar17 = pbVar17 + 1;
              } while( true );
            }
            uVar23 = (uint)*(short *)(lVar12 + 0x36);
            uVar15 = 0;
            if ((int)uVar23 < 2) {
              uVar23 = 1;
            }
            do {
              if (*(char *)(lVar22 + uVar15 * 0x10 + 0xb) == (char)uVar14) {
                pbVar17 = *(byte **)(lVar22 + uVar15 * 0x10);
                pbVar20 = param_4;
                do {
                  bVar4 = *pbVar17;
                  if (bVar4 == *pbVar20) {
                    if (bVar4 == 0) {
                      uVar18 = uVar15 & 0xffffffff;
                      if (-1 < (int)uVar15) goto LAB_005a317c;
                      goto LAB_005a31ac;
                    }
                  }
                  else if ((&DAT_002c78ae)[bVar4] != (&DAT_002c78ae)[*pbVar20]) break;
                  pbVar17 = pbVar17 + 1;
                  pbVar20 = pbVar20 + 1;
                } while( true );
              }
              uVar15 = uVar15 + 1;
            } while (uVar15 != uVar23);
LAB_005a31ac:
            if ((*(char *)(lVar12 + 0x30) < '\0') || (iVar9 = FUN_005a3efc(param_4), iVar9 == 0))
            goto LAB_005a31e4;
            if ((-1 < (short)*(ushort *)(lVar12 + 0x34)) &&
               (uVar18 = (ulong)*(ushort *)(lVar12 + 0x34), lVar22 != 0)) goto LAB_005a3180;
          }
LAB_005a33d4:
          pcVar13 = (char *)0x0;
          uVar24 = 0;
          uVar19 = 0;
          uVar23 = 1;
          pcVar16 = "I";
          goto LAB_005a33ec;
        }
LAB_005a31e4:
        bVar1 = false;
        pcVar16 = (char *)0x0;
        pcVar21 = (char *)0x0;
        uVar24 = 0;
        uVar23 = 0;
        uVar19 = 0;
        cVar5 = *(char *)(param_1 + 0x6f);
        goto joined_r0x005a340c;
      }
      if (cVar5 != 'm') {
        pcVar16 = "invalid";
        goto LAB_005a2fe0;
      }
    }
    pcVar16 = "unopened";
  }
LAB_005a2fe0:
  sqlite3_log(0x15,"API call with %s database connection pointer",pcVar16);
LAB_005a2ff0:
  sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x2d8d2,
              "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
  return 0x15;
LAB_005a317c:
  if (lVar22 == 0) goto LAB_005a33d4;
LAB_005a3180:
  plVar2 = (long *)(lVar22 + uVar18 * 0x10);
  lVar22 = lVar22 + uVar18 * 0x10;
  uVar7 = *(ushort *)(lVar22 + 0xe);
  if ((uVar7 >> 2 & 1) == 0) {
    if (*(byte *)(lVar22 + 8) < 0x10) {
      pcVar16 = (char *)0x0;
    }
    else {
      pcVar16 = (&PTR_DAT_00b0d558)[(*(byte *)(lVar22 + 8) >> 4) - 1];
    }
  }
  else {
    pcVar16 = (char *)*plVar2;
    sVar11 = strlen(pcVar16);
    pcVar16 = pcVar16 + sVar11 + 1;
  }
  if ((uVar7 >> 9 & 1) == 0) {
    pcVar13 = (char *)0x0;
  }
  else {
    pcVar13 = (char *)(*plVar2 + -1);
    do {
      pcVar13 = pcVar13 + 1;
    } while (*pcVar13 != '\0');
    if ((uVar7 >> 2 & 1) != 0) {
      do {
        pcVar13 = pcVar13 + 1;
      } while (*pcVar13 != '\0');
    }
    pcVar13 = pcVar13 + 1;
  }
  uVar23 = uVar7 & 1;
  uVar24 = (uint)((*(byte *)(lVar22 + 8) & 0xf) != 0);
  if ((int)uVar18 == (int)*(short *)(lVar12 + 0x34)) {
    uVar19 = *(uint *)(lVar12 + 0x30) >> 3 & 1;
  }
  else {
    uVar19 = 0;
  }
LAB_005a33ec:
  pcVar21 = "B";
  if (pcVar13 != (char *)0x0) {
    pcVar21 = pcVar13;
  }
  bVar1 = true;
  cVar5 = *(char *)(param_1 + 0x6f);
joined_r0x005a340c:
  iVar9 = 0;
  bVar8 = false;
joined_r0x005a340c:
  if (cVar5 == '\0') {
    FUN_005ac41c(param_1);
  }
  if (param_5 != (long *)0x0) {
    *param_5 = (long)pcVar16;
  }
  if (param_6 != (undefined8 *)0x0) {
    *param_6 = pcVar21;
  }
  if (param_7 != (uint *)0x0) {
    *param_7 = uVar24;
  }
  if (param_8 != (uint *)0x0) {
    *param_8 = uVar23;
  }
  if (param_9 != (uint *)0x0) {
    *param_9 = uVar19;
  }
  if (!bVar8 && !bVar1) {
    FUN_005869c8(param_1,local_68);
    local_68 = FUN_00596068(param_1,"no such table column: %s.%s",param_3,param_4);
    iVar9 = 1;
  }
  puVar3 = (undefined *)0x0;
  if (local_68 != 0) {
    puVar3 = &DAT_002ad0ce;
  }
  FUN_0058c8b8(param_1,iVar9,puVar3);
  FUN_005869c8(param_1,local_68);
  if ((iVar9 == 0) && (*(char *)(param_1 + 0x67) == '\0')) {
    uVar10 = 0;
  }
  else {
    uVar10 = FUN_005c1188(param_1,iVar9);
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    return uVar10;
  }
  (*DAT_00b0da80)();
  return uVar10;
}


// ===== 005a3414  FUN_005a3414 =====

undefined8 FUN_005a3414(long param_1,undefined8 param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  
  uVar2 = *(uint *)(param_1 + 0x2c);
  lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 0x18);
  *(undefined1 *)(param_1 + 100) = *(undefined1 *)(lVar5 + 0x71);
  if (((*(byte *)(lVar5 + 0x72) & 1) != 0) ||
     (uVar4 = FUN_005d5720(param_1,0,param_2,0), (int)uVar4 == 0)) {
    uVar3 = *(uint *)(param_1 + 0x28);
    if (1 < (int)uVar3) {
      lVar5 = (ulong)uVar3 * 0x20 + -8;
      uVar6 = (ulong)uVar3;
      do {
        if (((*(ushort *)(*(long *)(*(long *)(param_1 + 0x20) + lVar5) + 0x72) & 1) == 0) &&
           (uVar4 = FUN_005d5720(param_1,(int)uVar6 + -1,param_2,0), (int)uVar4 != 0)) {
          return uVar4;
        }
        lVar5 = lVar5 + -0x20;
        bVar1 = 2 < uVar6;
        uVar6 = uVar6 - 1;
      } while (bVar1);
    }
    uVar4 = 0;
    if ((uVar2 & 1) == 0) {
      *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) & 0xfffffffe;
      return uVar4;
    }
  }
  return uVar4;
}


// ===== 005a34f8  FUN_005a34f8 =====

long FUN_005a34f8(long param_1,byte *param_2,byte *param_3)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  char *pcVar9;
  ulong uVar10;
  byte *pbVar11;
  long lVar12;
  uint uVar13;
  int *piVar14;
  uint uVar15;
  byte *pbVar16;
  long lVar17;
  
  if (param_3 != (byte *)0x0) {
    if (0 < (int)*(uint *)(param_1 + 0x28)) {
      lVar8 = *(long *)(param_1 + 0x20);
      uVar10 = 0;
LAB_005a3528:
      pbVar11 = *(byte **)(lVar8 + uVar10 * 0x20);
      pbVar16 = param_3;
      do {
        bVar2 = *pbVar16;
        if (bVar2 == *pbVar11) {
          if (bVar2 == 0) goto LAB_005a36b4;
        }
        else if ((&DAT_002c78ae)[bVar2] != (&DAT_002c78ae)[*pbVar11]) goto LAB_005a3568;
        pbVar16 = pbVar16 + 1;
        pbVar11 = pbVar11 + 1;
      } while( true );
    }
LAB_005a3574:
    pbVar16 = &DAT_002aeb89;
    do {
      uVar7 = (uint)*param_3;
      if (uVar7 == *pbVar16) {
        if (uVar7 == 0) {
          lVar8 = *(long *)(param_1 + 0x20);
          uVar10 = 0;
LAB_005a36b4:
          uVar13 = (uint)*param_2;
          lVar12 = *(long *)(lVar8 + (uVar10 & 0xffffffff) * 0x20 + 0x18);
          uVar7 = 0;
          if (*param_2 != 0) {
            pbVar16 = param_2 + 1;
            do {
              uVar15 = uVar13 & 0xdf;
              uVar13 = (uint)*pbVar16;
              uVar7 = (uVar7 + uVar15) * -0x61c8864f;
              pbVar16 = pbVar16 + 1;
            } while (uVar13 != 0);
          }
          if (*(long *)(lVar12 + 0x18) == 0) {
            piVar14 = (int *)(lVar12 + 0x10);
            iVar4 = *(int *)(lVar12 + 0xc);
            if (iVar4 != 0) goto LAB_005a3728;
LAB_005a3784:
            piVar14 = (int *)0xb103f8;
LAB_005a378c:
            if (*(long *)(piVar14 + 4) != 0) {
              return *(long *)(piVar14 + 4);
            }
          }
          else {
            uVar13 = *(uint *)(lVar12 + 8);
            uVar15 = 0;
            if (uVar13 != 0) {
              uVar15 = uVar7 / uVar13;
            }
            piVar5 = (int *)(*(long *)(lVar12 + 0x18) + (ulong)(uVar7 - uVar15 * uVar13) * 0x10);
            piVar14 = piVar5 + 2;
            iVar4 = *piVar5;
            if (iVar4 == 0) goto LAB_005a3784;
LAB_005a3728:
            do {
              piVar14 = *(int **)piVar14;
              if (uVar7 == piVar14[8]) {
                pbVar16 = *(byte **)(piVar14 + 6);
                pbVar11 = param_2;
                do {
                  bVar2 = *pbVar16;
                  if (bVar2 == *pbVar11) {
                    if (bVar2 == 0) goto LAB_005a378c;
                  }
                  else if ((&DAT_002c78ae)[bVar2] != (&DAT_002c78ae)[*pbVar11]) break;
                  pbVar16 = pbVar16 + 1;
                  pbVar11 = pbVar11 + 1;
                } while( true );
              }
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
            if (DAT_00b10408 != 0) {
              return DAT_00b10408;
            }
          }
          bVar2 = *param_2;
          if (bVar2 == 0) {
            cVar3 = (&DAT_002c78ae)[(byte)s_s_002b3040[0]];
joined_r0x005a3bac:
            if (cVar3 != '\0') {
              return 0;
            }
          }
          else if ((bVar2 & 0xdf) == 0x53) {
            bVar2 = param_2[1];
            if (bVar2 == 0) {
              cVar3 = (&DAT_002c78ae)[(byte)s_q_002b3041[0]];
              goto joined_r0x005a3bac;
            }
            if ((bVar2 & 0xdf) == 0x51) {
              bVar2 = param_2[2];
              if (bVar2 == 0) {
                cVar3 = (&DAT_002c78ae)[(byte)s_l_002b3042[0]];
                goto joined_r0x005a3bac;
              }
              if ((bVar2 & 0xdf) == 0x4c) {
                bVar2 = param_2[3];
                if (bVar2 == 0) {
                  cVar3 = (&DAT_002c78ae)[(byte)s_i_002b3043[0]];
                  goto joined_r0x005a3bac;
                }
                if ((bVar2 & 0xdf) == 0x49) {
                  bVar2 = param_2[4];
                  if (bVar2 == 0) {
                    cVar3 = (&DAT_002c78ae)[(byte)s_t_002b3044[0]];
                    goto joined_r0x005a3bac;
                  }
                  if ((bVar2 & 0xdf) == 0x54) {
                    bVar2 = param_2[5];
                    if (bVar2 == 0) {
                      cVar3 = (&DAT_002c78ae)[(byte)s_e_002b3045[0]];
                      goto joined_r0x005a3bac;
                    }
                    if ((bVar2 & 0xdf) == 0x45) {
                      bVar2 = param_2[6];
                      if (bVar2 == 0) {
                        cVar3 = (&DAT_002c78ae)[(byte)s___002b3046[0]];
                        goto joined_r0x005a3bac;
                      }
                      if ((bVar2 != 0x5f) &&
                         ((&DAT_002c78ae)[bVar2] != (&DAT_002c78ae)[(byte)s___002b3046[0]])) {
                        return 0;
                      }
                    }
                    else if ((&DAT_002c78ae)[bVar2] != (&DAT_002c78ae)[(byte)s_e_002b3045[0]]) {
                      return 0;
                    }
                  }
                  else if ((&DAT_002c78ae)[bVar2] != (&DAT_002c78ae)[(byte)s_t_002b3044[0]]) {
                    return 0;
                  }
                }
                else if ((&DAT_002c78ae)[bVar2] != (&DAT_002c78ae)[(byte)s_i_002b3043[0]]) {
                  return 0;
                }
              }
              else if ((&DAT_002c78ae)[bVar2] != (&DAT_002c78ae)[(byte)s_l_002b3042[0]]) {
                return 0;
              }
            }
            else if ((&DAT_002c78ae)[bVar2] != (&DAT_002c78ae)[(byte)s_q_002b3041[0]]) {
              return 0;
            }
          }
          else if ((&DAT_002c78ae)[bVar2] != (&DAT_002c78ae)[(byte)s_s_002b3040[0]]) {
            return 0;
          }
          param_2 = param_2 + 7;
          if ((int)uVar10 != 1) {
            pcVar9 = "s";
            do {
              uVar7 = (uint)*param_2;
              if (uVar7 == (byte)*pcVar9) {
                if (uVar7 == 0) {
                  lVar8 = FUN_005e35dc(lVar12 + 8,"sqlite_");
                  return lVar8;
                }
              }
              else if ((&DAT_002c78ae)[uVar7] != (&DAT_002c78ae)[(uint)(byte)*pcVar9]) {
                return 0;
              }
              param_2 = param_2 + 1;
              pcVar9 = (char *)((byte *)pcVar9 + 1);
            } while( true );
          }
          pcVar9 = "t";
          pbVar16 = param_2;
          do {
            uVar7 = (uint)*pbVar16;
            if (uVar7 == (byte)*pcVar9) {
              if (uVar7 == 0) {
LAB_005a3dec:
                lVar8 = *(long *)(lVar8 + 0x38);
                if (*(long *)(lVar8 + 0x18) == 0) {
                  piVar14 = (int *)(lVar8 + 0x10);
                  iVar4 = *(int *)(lVar8 + 0xc);
                }
                else {
                  uVar7 = *(uint *)(lVar8 + 8);
                  uVar13 = 0;
                  if (uVar7 != 0) {
                    uVar13 = 0x72df5832 / uVar7;
                  }
                  piVar5 = (int *)(*(long *)(lVar8 + 0x18) +
                                  (ulong)(0x72df5832 - uVar13 * uVar7) * 0x10);
                  piVar14 = piVar5 + 2;
                  iVar4 = *piVar5;
                }
                if (iVar4 == 0) {
                  return DAT_00b10408;
                }
                while (piVar14 = *(int **)piVar14, piVar14[8] != 0x72df5832) {
LAB_005a3e30:
                  iVar4 = iVar4 + -1;
                  if (iVar4 == 0) {
                    return DAT_00b10408;
                  }
                }
                pbVar16 = *(byte **)(piVar14 + 6);
                pbVar11 = (byte *)"s";
                do {
                  bVar2 = *pbVar16;
                  if (bVar2 == *pbVar11) {
                    if (bVar2 == 0) {
                      return *(long *)(piVar14 + 4);
                    }
                  }
                  else if ((&DAT_002c78ae)[bVar2] != (&DAT_002c78ae)[*pbVar11]) goto LAB_005a3e30;
                  pbVar16 = pbVar16 + 1;
                  pbVar11 = pbVar11 + 1;
                } while( true );
              }
            }
            else if ((&DAT_002c78ae)[uVar7] != (&DAT_002c78ae)[(uint)(byte)*pcVar9]) {
              pcVar9 = "s";
              pbVar16 = param_2;
              do {
                uVar7 = (uint)*pbVar16;
                if (uVar7 == (byte)*pcVar9) {
                  if (uVar7 == 0) goto LAB_005a3dec;
                }
                else if ((&DAT_002c78ae)[uVar7] != (&DAT_002c78ae)[(uint)(byte)*pcVar9]) {
                  pcVar9 = "m";
                  do {
                    uVar7 = (uint)*param_2;
                    if (uVar7 == (byte)*pcVar9) {
                      if (uVar7 == 0) goto LAB_005a3dec;
                    }
                    else if ((&DAT_002c78ae)[uVar7] != (&DAT_002c78ae)[(uint)(byte)*pcVar9]) {
                      return 0;
                    }
                    param_2 = param_2 + 1;
                    pcVar9 = (char *)((byte *)pcVar9 + 1);
                  } while( true );
                }
                pbVar16 = pbVar16 + 1;
                pcVar9 = (char *)((byte *)pcVar9 + 1);
              } while( true );
            }
            pbVar16 = pbVar16 + 1;
            pcVar9 = (char *)((byte *)pcVar9 + 1);
          } while( true );
        }
      }
      else if ((&DAT_002c78ae)[uVar7] != (&DAT_002c78ae)[(uint)*pbVar16]) {
        return 0;
      }
      param_3 = param_3 + 1;
      pbVar16 = pbVar16 + 1;
    } while( true );
  }
  lVar8 = *(long *)(param_1 + 0x20);
  uVar7 = 0;
  lVar12 = *(long *)(lVar8 + 0x38);
  uVar13 = (uint)*param_2;
  if (uVar13 != 0) {
    pbVar16 = param_2 + 1;
    do {
      uVar15 = uVar13 & 0xdf;
      uVar13 = (uint)*pbVar16;
      uVar7 = (uVar7 + uVar15) * -0x61c8864f;
      pbVar16 = pbVar16 + 1;
    } while (uVar13 != 0);
  }
  if (*(long *)(lVar12 + 0x18) == 0) {
    piVar14 = (int *)(lVar12 + 0x10);
    iVar4 = *(int *)(lVar12 + 0xc);
    if (iVar4 != 0) goto LAB_005a362c;
LAB_005a3688:
    piVar14 = (int *)0xb103f8;
LAB_005a3690:
    if (*(long *)(piVar14 + 4) != 0) {
      return *(long *)(piVar14 + 4);
    }
  }
  else {
    uVar13 = *(uint *)(lVar12 + 8);
    uVar15 = 0;
    if (uVar13 != 0) {
      uVar15 = uVar7 / uVar13;
    }
    piVar5 = (int *)(*(long *)(lVar12 + 0x18) + (ulong)(uVar7 - uVar15 * uVar13) * 0x10);
    piVar14 = piVar5 + 2;
    iVar4 = *piVar5;
    if (iVar4 == 0) goto LAB_005a3688;
LAB_005a362c:
    do {
      piVar14 = *(int **)piVar14;
      if (uVar7 == piVar14[8]) {
        pbVar16 = *(byte **)(piVar14 + 6);
        pbVar11 = param_2;
        do {
          bVar2 = *pbVar16;
          if (bVar2 == *pbVar11) {
            if (bVar2 == 0) goto LAB_005a3690;
          }
          else if ((&DAT_002c78ae)[bVar2] != (&DAT_002c78ae)[*pbVar11]) break;
          pbVar16 = pbVar16 + 1;
          pbVar11 = pbVar11 + 1;
        } while( true );
      }
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    if (DAT_00b10408 != 0) {
      return DAT_00b10408;
    }
  }
  lVar17 = *(long *)(lVar8 + 0x18);
  uVar7 = 0;
  uVar13 = (uint)*param_2;
  if (uVar13 != 0) {
    pbVar16 = param_2 + 1;
    uVar15 = uVar13;
    do {
      uVar1 = uVar15 & 0xdf;
      uVar15 = (uint)*pbVar16;
      uVar7 = (uVar7 + uVar1) * -0x61c8864f;
      pbVar16 = pbVar16 + 1;
    } while (uVar15 != 0);
  }
  if (*(long *)(lVar17 + 0x18) == 0) {
    piVar14 = (int *)(lVar17 + 0x10);
    iVar4 = *(int *)(lVar17 + 0xc);
  }
  else {
    uVar15 = *(uint *)(lVar17 + 8);
    uVar1 = 0;
    if (uVar15 != 0) {
      uVar1 = uVar7 / uVar15;
    }
    piVar5 = (int *)(*(long *)(lVar17 + 0x18) + (ulong)(uVar7 - uVar1 * uVar15) * 0x10);
    piVar14 = piVar5 + 2;
    iVar4 = *piVar5;
  }
  if (iVar4 == 0) {
    piVar14 = (int *)0xb103f8;
LAB_005a3998:
    lVar6 = *(long *)(piVar14 + 4);
    if (*(long *)(piVar14 + 4) == 0) goto LAB_005a39a0;
  }
  else {
    do {
      piVar14 = *(int **)piVar14;
      if (uVar7 == piVar14[8]) {
        pbVar16 = *(byte **)(piVar14 + 6);
        pbVar11 = param_2;
        do {
          bVar2 = *pbVar16;
          if (bVar2 == *pbVar11) {
            if (bVar2 == 0) goto LAB_005a3998;
          }
          else if ((&DAT_002c78ae)[bVar2] != (&DAT_002c78ae)[*pbVar11]) break;
          pbVar16 = pbVar16 + 1;
          pbVar11 = pbVar11 + 1;
        } while( true );
      }
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    lVar6 = DAT_00b10408;
    if (DAT_00b10408 == 0) {
LAB_005a39a0:
      if (2 < (int)*(uint *)(param_1 + 0x28)) {
        uVar10 = 2;
        do {
          uVar7 = 0;
          uVar15 = uVar13;
          pbVar16 = param_2 + 1;
          while (uVar15 != 0) {
            uVar7 = (uVar7 + (uVar15 & 0xdf)) * -0x61c8864f;
            uVar15 = (uint)*pbVar16;
            pbVar16 = pbVar16 + 1;
          }
          lVar6 = *(long *)(lVar8 + uVar10 * 0x20 + 0x18);
          if (*(long *)(lVar6 + 0x18) == 0) {
            piVar14 = (int *)(lVar6 + 0x10);
            iVar4 = *(int *)(lVar6 + 0xc);
          }
          else {
            uVar15 = *(uint *)(lVar6 + 8);
            uVar1 = 0;
            if (uVar15 != 0) {
              uVar1 = uVar7 / uVar15;
            }
            piVar5 = (int *)(*(long *)(lVar6 + 0x18) + (ulong)(uVar7 - uVar1 * uVar15) * 0x10);
            piVar14 = piVar5 + 2;
            iVar4 = *piVar5;
          }
          for (; piVar5 = (int *)0xb103f8, iVar4 != 0; iVar4 = iVar4 + -1) {
            piVar14 = *(int **)piVar14;
            if (uVar7 == piVar14[8]) {
              pbVar16 = *(byte **)(piVar14 + 6);
              pbVar11 = param_2;
              do {
                bVar2 = *pbVar16;
                if (bVar2 == *pbVar11) {
                  piVar5 = piVar14;
                  if (bVar2 == 0) goto LAB_005a3a8c;
                }
                else if ((&DAT_002c78ae)[bVar2] != (&DAT_002c78ae)[*pbVar11]) break;
                pbVar16 = pbVar16 + 1;
                pbVar11 = pbVar11 + 1;
              } while( true );
            }
          }
LAB_005a3a8c:
          if (*(long *)(piVar5 + 4) != 0) {
            return *(long *)(piVar5 + 4);
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 != *(uint *)(param_1 + 0x28));
      }
      iVar4 = sqlite3_strnicmp(param_2,"s",7);
      if (iVar4 != 0) {
        return 0;
      }
      param_2 = param_2 + 7;
      pcVar9 = "s";
      pbVar16 = param_2;
      do {
        uVar7 = (uint)*pbVar16;
        if (uVar7 == (byte)*pcVar9) {
          if (uVar7 == 0) {
            lVar8 = FUN_005e35dc(lVar17 + 8,"sqlite_");
            return lVar8;
          }
        }
        else if ((&DAT_002c78ae)[uVar7] != (&DAT_002c78ae)[(uint)(byte)*pcVar9]) {
          pcVar9 = "t";
          do {
            uVar7 = (uint)*param_2;
            if (uVar7 == (byte)*pcVar9) {
              if (uVar7 == 0) {
                lVar8 = FUN_005e35dc(lVar12 + 8,"s");
                return lVar8;
              }
            }
            else if ((&DAT_002c78ae)[uVar7] != (&DAT_002c78ae)[(uint)(byte)*pcVar9]) {
              return 0;
            }
            param_2 = param_2 + 1;
            pcVar9 = (char *)((byte *)pcVar9 + 1);
          } while( true );
        }
        pbVar16 = pbVar16 + 1;
        pcVar9 = (char *)((byte *)pcVar9 + 1);
      } while( true );
    }
  }
  return lVar6;
LAB_005a3568:
  uVar10 = uVar10 + 1;
  if (uVar10 == *(uint *)(param_1 + 0x28)) goto LAB_005a3574;
  goto LAB_005a3528;
}


// ===== 005a3efc  FUN_005a3efc =====

undefined8 FUN_005a3efc(byte *param_1)

{
  byte bVar1;
  char *pcVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  pbVar3 = &DAT_002b6968;
  pbVar4 = param_1;
  do {
    bVar1 = *pbVar4;
    if (bVar1 == *pbVar3) {
      if (bVar1 == 0) {
        return 1;
      }
    }
    else if ((&DAT_002c78ae)[bVar1] != (&DAT_002c78ae)[*pbVar3]) {
      pcVar2 = "R";
      pbVar3 = param_1;
      do {
        bVar1 = *pbVar3;
        if (bVar1 == *pcVar2) {
          if (bVar1 == 0) {
            return 1;
          }
        }
        else if ((&DAT_002c78ae)[bVar1] != (&DAT_002c78ae)[(byte)*pcVar2]) {
          pbVar3 = &DAT_002b2204;
          do {
            bVar1 = *param_1;
            if (bVar1 == *pbVar3) {
              if (bVar1 == 0) {
                return 1;
              }
            }
            else if ((&DAT_002c78ae)[bVar1] != (&DAT_002c78ae)[*pbVar3]) {
              return 0;
            }
            param_1 = param_1 + 1;
            pbVar3 = pbVar3 + 1;
          } while( true );
        }
        pbVar3 = pbVar3 + 1;
        pcVar2 = (char *)((byte *)pcVar2 + 1);
      } while( true );
    }
    pbVar4 = pbVar4 + 1;
    pbVar3 = pbVar3 + 1;
  } while( true );
}


// ===== 005a3fd4  FUN_005a3fd4 =====

char * FUN_005a3fd4(undefined8 *param_1,char *param_2)

{
  size_t sVar1;
  char *__s;
  
  if ((*(ushort *)((long)param_1 + 0xe) >> 2 & 1) == 0) {
    if (0xf < *(byte *)(param_1 + 1)) {
      param_2 = (&PTR_DAT_00b0d558)[(*(byte *)(param_1 + 1) >> 4) - 1];
    }
    return param_2;
  }
  __s = (char *)*param_1;
  sVar1 = strlen(__s);
  return __s + sVar1 + 1;
}


// ===== 005a4038  sqlite3_sleep =====

int sqlite3_sleep(int param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = sqlite3_initialize();
  if (iVar2 != 0) {
    return 0;
  }
  lVar1 = DAT_00b10370;
  if ((DAT_00b0d9f4 != '\0') && (lVar3 = (*DAT_00b0da60)(2), lVar1 = DAT_00b10370, lVar3 != 0)) {
    (*DAT_00b0da70)();
    lVar1 = DAT_00b10370;
    (*DAT_00b0da80)(lVar3);
  }
  if (lVar1 != 0) {
    iVar2 = 0;
    if (-1 < param_1) {
      iVar2 = param_1 * 1000;
    }
    iVar2 = (**(code **)(lVar1 + 0x70))(lVar1,iVar2);
    return iVar2 / 1000;
  }
  return 0;
}


// ===== 005a4118  sqlite3_extended_result_codes =====

undefined8 sqlite3_extended_result_codes(long param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  if (param_1 == 0) {
    pcVar2 = "NULL";
  }
  else {
    cVar1 = *(char *)(param_1 + 0x71);
    if (cVar1 != -0x46) {
      if (cVar1 == 'v') {
        if (*(long *)(param_1 + 0x18) != 0) {
          (*DAT_00b0da70)(*(long *)(param_1 + 0x18));
          uVar3 = 0xff;
          if (param_2 != 0) {
            uVar3 = 0xffffffff;
          }
          *(undefined4 *)(param_1 + 0x58) = uVar3;
          if (*(long *)(param_1 + 0x18) != 0) {
            (*DAT_00b0da80)();
          }
          return 0;
        }
        uVar3 = 0xff;
        if (param_2 != 0) {
          uVar3 = 0xffffffff;
        }
        *(undefined4 *)(param_1 + 0x58) = uVar3;
        return 0;
      }
      if (cVar1 != 'm') {
        pcVar2 = "invalid";
        goto LAB_005a41bc;
      }
    }
    pcVar2 = "unopened";
  }
LAB_005a41bc:
  sqlite3_log(0x15,"API call with %s database connection pointer",pcVar2);
  sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x2d93e,
              "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
  return 0x15;
}


// ===== 005a422c  sqlite3_file_control =====

undefined4 sqlite3_file_control(long param_1,byte *param_2,int param_3,uint *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  undefined4 uVar5;
  char *pcVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  byte *pbVar14;
  byte *pbVar15;
  uint uVar16;
  uint uVar17;
  undefined8 uVar18;
  
  if (param_1 == 0) {
    pcVar6 = "NULL";
    goto LAB_005a437c;
  }
  cVar3 = *(char *)(param_1 + 0x71);
  if (cVar3 != -0x46) {
    if (cVar3 == 'v') {
      if (*(long *)(param_1 + 0x18) != 0) {
        (*DAT_00b0da70)(*(long *)(param_1 + 0x18));
      }
      if (param_2 == (byte *)0x0) {
        lVar7 = *(long *)(param_1 + 0x20);
LAB_005a43d8:
        uVar11 = 0;
LAB_005a43e4:
        lVar7 = *(long *)(lVar7 + uVar11 * 0x20 + 8);
        if (lVar7 != 0) {
          if ((*(char *)(lVar7 + 0x11) != '\0') &&
             (*(int *)(lVar7 + 0x14) = *(int *)(lVar7 + 0x14) + 1, *(char *)(lVar7 + 0x12) == '\0'))
          {
            FUN_005ac65c(lVar7);
          }
          puVar13 = *(undefined8 **)(lVar7 + 8);
          puVar12 = (undefined8 *)*puVar13;
          plVar8 = (long *)puVar12[9];
          if (param_3 < 0x23) {
            if (param_3 == 7) {
              uVar5 = 0;
              *(long **)param_4 = plVar8;
            }
            else if (param_3 == 0x1b) {
              uVar5 = 0;
              *(undefined8 *)param_4 = *puVar12;
            }
            else if (param_3 == 0x1c) {
              uVar5 = 0;
              puVar13 = puVar12 + 10;
              if (puVar12[0x25] != 0) {
                puVar13 = (undefined8 *)(puVar12[0x25] + 0x10);
              }
              *(undefined8 *)param_4 = *puVar13;
            }
            else {
LAB_005a450c:
              uVar1 = *(undefined4 *)(param_1 + 0x290);
              if (*plVar8 == 0) {
                uVar5 = 0xc;
              }
              else {
                uVar5 = (**(code **)(*plVar8 + 0x50))(plVar8,param_3,param_4);
              }
              *(undefined4 *)(param_1 + 0x290) = uVar1;
            }
          }
          else if (param_3 == 0x23) {
            uVar5 = 0;
            *param_4 = *(uint *)((long)puVar12 + 0x84);
          }
          else {
            if (param_3 == 0x26) {
              uVar2 = *param_4;
              if (*(char *)(lVar7 + 0x11) == '\0') {
                uVar16 = (uint)*(byte *)((long)puVar13 + 0x26);
                uVar18 = *(undefined8 *)((long)puVar13 + 0x34);
              }
              else {
                iVar10 = *(int *)(lVar7 + 0x14);
                *(int *)(lVar7 + 0x14) = iVar10 + 1;
                if (*(char *)(lVar7 + 0x12) == '\0') {
                  FUN_005ac65c(lVar7);
                  bVar4 = *(byte *)(*(long *)(lVar7 + 8) + 0x26);
                  uVar16 = (uint)bVar4;
                  uVar18 = *(undefined8 *)(*(long *)(lVar7 + 8) + 0x34);
                  if (*(char *)(lVar7 + 0x11) == '\0') goto LAB_005a45f8;
                  iVar10 = *(int *)(lVar7 + 0x14) + -1;
                }
                else {
                  bVar4 = *(byte *)((long)puVar13 + 0x26);
                  uVar18 = *(undefined8 *)((long)puVar13 + 0x34);
                }
                uVar16 = (uint)bVar4;
                *(int *)(lVar7 + 0x14) = iVar10;
                if (iVar10 == 0) {
                  FUN_005ac750(lVar7);
                }
              }
LAB_005a45f8:
              uVar17 = (int)uVar18 - (int)((ulong)uVar18 >> 0x20);
              if ((int)uVar17 <= (int)uVar16) {
                uVar17 = uVar16;
              }
              *param_4 = uVar17;
              if (uVar2 < 0x100) {
                FUN_005a4724(lVar7,0,uVar2,0);
              }
            }
            else {
              if (param_3 != 0x2a) goto LAB_005a450c;
              if ((*(char *)((long)puVar13 + 0x24) == '\0') && (*(char *)(puVar12 + 2) == '\0')) {
                lVar9 = puVar12[0xe];
                *(int *)((long)puVar12 + 0x84) = *(int *)((long)puVar12 + 0x84) + 1;
                for (; lVar9 != 0; lVar9 = *(long *)(lVar9 + 0x40)) {
                  *(undefined4 *)(lVar9 + 0x18) = 1;
                }
                FUN_005b0930(puVar12[0x24],0);
                uVar5 = 0;
                goto LAB_005a4638;
              }
            }
            uVar5 = 0;
          }
LAB_005a4638:
          if ((*(char *)(lVar7 + 0x11) != '\0') &&
             (iVar10 = *(int *)(lVar7 + 0x14) + -1, *(int *)(lVar7 + 0x14) = iVar10, iVar10 == 0)) {
            FUN_005ac750(lVar7);
          }
          goto LAB_005a4660;
        }
      }
      else {
        uVar11 = (ulong)(*(int *)(param_1 + 0x28) - 1);
        if (0 < *(int *)(param_1 + 0x28)) {
          lVar7 = *(long *)(param_1 + 0x20);
          uVar5 = 1;
          puVar12 = (undefined8 *)(lVar7 + uVar11 * 0x20);
          do {
            pbVar14 = (byte *)*puVar12;
            iVar10 = (int)uVar11;
            pbVar15 = param_2;
            if (pbVar14 != (byte *)0x0) {
              do {
                bVar4 = *pbVar14;
                if (bVar4 == *pbVar15) {
                  if (bVar4 == 0) {
                    if (iVar10 < 0) goto LAB_005a4480;
                    goto LAB_005a43e4;
                  }
                }
                else if ((&DAT_002c78ae)[bVar4] != (&DAT_002c78ae)[*pbVar15]) break;
                pbVar14 = pbVar14 + 1;
                pbVar15 = pbVar15 + 1;
              } while( true );
            }
            pbVar14 = param_2;
            pbVar15 = &DAT_002aeb89;
            if (iVar10 == 0) {
              do {
                bVar4 = *pbVar15;
                if (bVar4 == *pbVar14) {
                  if (bVar4 == 0) goto LAB_005a43d8;
                }
                else if ((&DAT_002c78ae)[bVar4] != (&DAT_002c78ae)[*pbVar14]) break;
                pbVar14 = pbVar14 + 1;
                pbVar15 = pbVar15 + 1;
              } while( true );
            }
            uVar11 = (ulong)(iVar10 - 1);
            puVar12 = puVar12 + -4;
          } while (0 < iVar10);
          goto LAB_005a4660;
        }
      }
LAB_005a4480:
      uVar5 = 1;
LAB_005a4660:
      if (*(long *)(param_1 + 0x18) == 0) {
        return uVar5;
      }
      (*DAT_00b0da80)();
      return uVar5;
    }
    if (cVar3 != 'm') {
      pcVar6 = "invalid";
      goto LAB_005a437c;
    }
  }
  pcVar6 = "unopened";
LAB_005a437c:
  sqlite3_log(0x15,"API call with %s database connection pointer",pcVar6);
  sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x2d94e,
              "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
  return 0x15;
}


// ===== 005a4678  FUN_005a4678 =====

uint FUN_005a4678(long param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    uVar3 = (uint)*(byte *)(*(long *)(param_1 + 8) + 0x26);
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x34);
  }
  else {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    if (*(char *)(param_1 + 0x12) == '\0') {
      FUN_005ac65c();
      bVar1 = *(byte *)(*(long *)(param_1 + 8) + 0x26);
      uVar3 = (uint)bVar1;
      uVar5 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x34);
      if (*(char *)(param_1 + 0x11) == '\0') goto LAB_005a4700;
    }
    else {
      bVar1 = *(byte *)(*(long *)(param_1 + 8) + 0x26);
      uVar5 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x34);
    }
    uVar3 = (uint)bVar1;
    iVar2 = *(int *)(param_1 + 0x14) + -1;
    *(int *)(param_1 + 0x14) = iVar2;
    if (iVar2 == 0) {
      FUN_005ac750();
    }
  }
LAB_005a4700:
  uVar4 = (int)uVar5 - (int)((ulong)uVar5 >> 0x20);
  if ((int)uVar4 <= (int)uVar3) {
    uVar4 = uVar3;
  }
  return uVar4;
}


// ===== 005a4724  FUN_005a4724 =====

ulong FUN_005a4724(long param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  puVar5 = *(undefined8 **)(param_1 + 8);
  if ((*(char *)(param_1 + 0x11) != '\0') &&
     (*(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1, *(char *)(param_1 + 0x12) == '\0')) {
    FUN_005ac65c(param_1);
  }
  *(char *)((long)puVar5 + 0x26) = (char)param_3;
  uVar2 = *(int *)((long)puVar5 + 0x34) - *(int *)(puVar5 + 7);
  if ((int)uVar2 <= (int)param_3) {
    uVar2 = param_3;
  }
  if ((*(ushort *)(puVar5 + 5) >> 1 & 1) == 0) {
    if ((param_2 - 0x200 < 0xfe01) && ((param_2 + 0x1ffff & param_2) == 0)) {
      uVar1 = 0x400;
      if ((int)uVar2 < 0x21 || param_2 != 0x200) {
        uVar1 = param_2;
      }
      *(uint *)((long)puVar5 + 0x34) = uVar1;
      if (puVar5[0x11] != 0) {
        puVar5[0x11] = puVar5[0x11] + -4;
        FUN_005ac0d8();
        puVar5[0x11] = 0;
      }
    }
    uVar4 = FUN_005adbac(*puVar5,(int *)((long)puVar5 + 0x34),uVar2);
    *(uint *)(puVar5 + 7) = *(int *)((long)puVar5 + 0x34) - (uVar2 & 0xffff);
    if (param_4 != 0) {
      *(ushort *)(puVar5 + 5) = *(ushort *)(puVar5 + 5) | 2;
    }
    if (*(char *)(param_1 + 0x11) == '\0') {
      return uVar4;
    }
    iVar3 = *(int *)(param_1 + 0x14) + -1;
    *(int *)(param_1 + 0x14) = iVar3;
  }
  else {
    if (*(char *)(param_1 + 0x11) == '\0') {
      return 8;
    }
    uVar4 = 8;
    iVar3 = *(int *)(param_1 + 0x14) + -1;
    *(int *)(param_1 + 0x14) = iVar3;
  }
  if (iVar3 != 0) {
    return uVar4;
  }
  FUN_005ac750(param_1);
  return uVar4 & 0xffffffff;
}


// ===== 005a48a0  sqlite3_test_control =====

/* WARNING: Removing unreachable block (ram,0x005a5110) */
/* WARNING: Removing unreachable block (ram,0x005a4e68) */
/* WARNING: Removing unreachable block (ram,0x005a4e78) */
/* WARNING: Removing unreachable block (ram,0x005a4f3c) */
/* WARNING: Removing unreachable block (ram,0x005a4f48) */
/* WARNING: Removing unreachable block (ram,0x005a4e28) */
/* WARNING: Removing unreachable block (ram,0x005a5208) */
/* WARNING: Removing unreachable block (ram,0x005a5218) */
/* WARNING: Removing unreachable block (ram,0x005a4fa4) */
/* WARNING: Removing unreachable block (ram,0x005a4df4) */
/* WARNING: Removing unreachable block (ram,0x005a51dc) */
/* WARNING: Removing unreachable block (ram,0x005a51ec) */
/* WARNING: Removing unreachable block (ram,0x005a517c) */
/* WARNING: Removing unreachable block (ram,0x005a4e48) */
/* WARNING: Removing unreachable block (ram,0x005a4f64) */
/* WARNING: Removing unreachable block (ram,0x005a5008) */
/* WARNING: Removing unreachable block (ram,0x005a4eb4) */
/* WARNING: Removing unreachable block (ram,0x005a4ec4) */
/* WARNING: Removing unreachable block (ram,0x005a519c) */
/* WARNING: Removing unreachable block (ram,0x005a51ac) */
/* WARNING: Removing unreachable block (ram,0x005a51c8) */
/* WARNING: Removing unreachable block (ram,0x005a5160) */
/* WARNING: Removing unreachable block (ram,0x005a4fd4) */
/* WARNING: Removing unreachable block (ram,0x005a4fe4) */
/* WARNING: Removing unreachable block (ram,0x005a4f14) */
/* WARNING: Removing unreachable block (ram,0x005a502c) */
/* WARNING: Removing unreachable block (ram,0x005a503c) */
/* WARNING: Removing unreachable block (ram,0x005a4edc) */
/* WARNING: Removing unreachable block (ram,0x005a4eec) */
/* WARNING: Removing unreachable block (ram,0x005a5924) */
/* WARNING: Removing unreachable block (ram,0x005a4e20) */
/* WARNING: Removing unreachable block (ram,0x005a52c8) */
/* WARNING: Removing unreachable block (ram,0x005a528c) */
/* WARNING: Removing unreachable block (ram,0x005a5934) */
/* WARNING: Removing unreachable block (ram,0x005a5944) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffeb0 : 0x005a5120 */
/* WARNING: Removing unreachable block (ram,0x005a5618) */
/* WARNING: Removing unreachable block (ram,0x005a56cc) */
/* WARNING: Removing unreachable block (ram,0x005a5714) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulong sqlite3_test_control(int param_1,code *param_2,ulong *param_3,uint param_4,int param_5)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  ulong uVar10;
  uint *puVar11;
  void *__s;
  void *__dest;
  code **ppcVar12;
  uint uVar13;
  ulong uVar14;
  short sVar15;
  undefined8 *puVar16;
  uint uVar17;
  byte bVar18;
  byte *pbVar19;
  ulong *puVar20;
  long lVar21;
  uint uVar22;
  uint uVar23;
  uint *puVar24;
  long lVar25;
  double local_150;
  code *local_c8;
  ulong *puStack_c0;
  ulong *local_b8;
  uint local_6c [3];
  
  uVar10 = 0;
  if (0x1c < param_1 - 5U) {
    return 0;
  }
  local_c8._0_4_ = (uint)param_2;
  switch(param_1) {
  case 5:
    uVar10 = 0;
    uRam0000000000b1051c = _DAT_00b10498;
    _DAT_00b10514 = _DAT_00b10490;
    uRam0000000000b104fc = _DAT_00b10478;
    _DAT_00b104f4 = _DAT_00b10470;
    uRam0000000000b1050c = _DAT_00b10488;
    _DAT_00b10504 = _DAT_00b10480;
    DAT_00b10524 = DAT_00b104a0;
    uRam0000000000b104ac = _DAT_00b10428;
    _DAT_00b104a4 = _DAT_00b10420;
    uRam0000000000b104bc = _DAT_00b10438;
    _DAT_00b104b4 = _DAT_00b10430;
    uRam0000000000b104cc = _DAT_00b10448;
    _DAT_00b104c4 = _DAT_00b10440;
    uRam0000000000b104dc = ram0x00b10458;
    _DAT_00b104d4 = _DAT_00b10450;
    uRam0000000000b104ec = _DAT_00b10468;
    _DAT_00b104e4 = _DAT_00b10460;
    break;
  case 6:
    uVar10 = 0;
    _DAT_00b10488 = uRam0000000000b1050c;
    _DAT_00b10480 = _DAT_00b10504;
    _DAT_00b10498 = uRam0000000000b1051c;
    _DAT_00b10490 = _DAT_00b10514;
    DAT_00b104a0 = DAT_00b10524;
    _DAT_00b10448 = uRam0000000000b104cc;
    _DAT_00b10440 = _DAT_00b104c4;
    ram0x00b10458 = uRam0000000000b104dc;
    _DAT_00b10450 = _DAT_00b104d4;
    _DAT_00b10468 = uRam0000000000b104ec;
    _DAT_00b10460 = _DAT_00b104e4;
    _DAT_00b10478 = uRam0000000000b104fc;
    _DAT_00b10470 = _DAT_00b104f4;
    _DAT_00b10428 = uRam0000000000b104ac;
    _DAT_00b10420 = _DAT_00b104a4;
    _DAT_00b10438 = uRam0000000000b104bc;
    _DAT_00b10430 = _DAT_00b104b4;
    break;
  case 7:
    uVar10 = 0;
    if ((int)puStack_c0 == 0) {
      *(ulong *)(param_2 + 0x30) = *(ulong *)(param_2 + 0x30) & 0xfffffff7ffffffff;
    }
    else {
      *(ulong *)(param_2 + 0x30) = *(ulong *)(param_2 + 0x30) | 0x800000000;
    }
    break;
  case 8:
    puVar11 = (uint *)FUN_005827b0(0x200);
    if (puVar11 != (uint *)0x0) {
      *puVar11 = (uint)local_c8;
      puVar11[0x7e] = 0;
      puVar11[0x7f] = 0;
      puVar11[0x7c] = 0;
      puVar11[0x7d] = 0;
      puVar11[0x3f] = 0;
      puVar11[0x40] = 0;
      puVar11[0x3d] = 0;
      puVar11[0x3e] = 0;
      puVar11[0x3b] = 0;
      puVar11[0x3c] = 0;
      puVar11[0x39] = 0;
      puVar11[0x3a] = 0;
      puVar11[0x37] = 0;
      puVar11[0x38] = 0;
      puVar11[0x35] = 0;
      puVar11[0x36] = 0;
      puVar11[0x33] = 0;
      puVar11[0x34] = 0;
      puVar11[0x31] = 0;
      puVar11[0x32] = 0;
      puVar11[0x2f] = 0;
      puVar11[0x30] = 0;
      puVar11[0x2d] = 0;
      puVar11[0x2e] = 0;
      puVar11[0x2b] = 0;
      puVar11[0x2c] = 0;
      puVar11[0x29] = 0;
      puVar11[0x2a] = 0;
      puVar11[0x27] = 0;
      puVar11[0x28] = 0;
      puVar11[0x25] = 0;
      puVar11[0x26] = 0;
      puVar11[0x23] = 0;
      puVar11[0x24] = 0;
      puVar11[0x21] = 0;
      puVar11[0x22] = 0;
      puVar11[0x1f] = 0;
      puVar11[0x20] = 0;
      puVar11[0x1d] = 0;
      puVar11[0x1e] = 0;
      puVar11[0x1b] = 0;
      puVar11[0x1c] = 0;
      puVar11[0x19] = 0;
      puVar11[0x1a] = 0;
      puVar11[0x17] = 0;
      puVar11[0x18] = 0;
      puVar11[0x15] = 0;
      puVar11[0x16] = 0;
      puVar11[0x13] = 0;
      puVar11[0x14] = 0;
      puVar11[0x11] = 0;
      puVar11[0x12] = 0;
      puVar11[0xf] = 0;
      puVar11[0x10] = 0;
      puVar11[0xd] = 0;
      puVar11[0xe] = 0;
      puVar11[0xb] = 0;
      puVar11[0xc] = 0;
      puVar11[9] = 0;
      puVar11[10] = 0;
      puVar11[7] = 0;
      puVar11[8] = 0;
      puVar11[5] = 0;
      puVar11[6] = 0;
      puVar11[3] = 0;
      puVar11[4] = 0;
      puVar11[1] = 0;
      puVar11[2] = 0;
      puVar11[0x47] = 0;
      puVar11[0x48] = 0;
      puVar11[0x45] = 0;
      puVar11[0x46] = 0;
      puVar11[0x4b] = 0;
      puVar11[0x4c] = 0;
      puVar11[0x49] = 0;
      puVar11[0x4a] = 0;
      puVar11[0x4f] = 0;
      puVar11[0x50] = 0;
      puVar11[0x4d] = 0;
      puVar11[0x4e] = 0;
      puVar11[0x53] = 0;
      puVar11[0x54] = 0;
      puVar11[0x51] = 0;
      puVar11[0x52] = 0;
      puVar11[0x57] = 0;
      puVar11[0x58] = 0;
      puVar11[0x55] = 0;
      puVar11[0x56] = 0;
      puVar11[0x5b] = 0;
      puVar11[0x5c] = 0;
      puVar11[0x59] = 0;
      puVar11[0x5a] = 0;
      puVar11[0x5f] = 0;
      puVar11[0x60] = 0;
      puVar11[0x5d] = 0;
      puVar11[0x5e] = 0;
      puVar11[99] = 0;
      puVar11[100] = 0;
      puVar11[0x61] = 0;
      puVar11[0x62] = 0;
      puVar11[0x67] = 0;
      puVar11[0x68] = 0;
      puVar11[0x65] = 0;
      puVar11[0x66] = 0;
      puVar11[0x6b] = 0;
      puVar11[0x6c] = 0;
      puVar11[0x69] = 0;
      puVar11[0x6a] = 0;
      puVar11[0x6f] = 0;
      puVar11[0x70] = 0;
      puVar11[0x6d] = 0;
      puVar11[0x6e] = 0;
      puVar11[0x73] = 0;
      puVar11[0x74] = 0;
      puVar11[0x71] = 0;
      puVar11[0x72] = 0;
      puVar11[0x77] = 0;
      puVar11[0x78] = 0;
      puVar11[0x75] = 0;
      puVar11[0x76] = 0;
      puVar11[0x7b] = 0;
      puVar11[0x7c] = 0;
      puVar11[0x79] = 0;
      puVar11[0x7a] = 0;
      puVar11[0x43] = 0;
      puVar11[0x44] = 0;
      puVar11[0x41] = 0;
      puVar11[0x42] = 0;
    }
    lVar21 = (long)(int)(uint)local_c8;
    lVar25 = lVar21 + 0xe;
    if (lVar21 + 7 < 0 == SCARRY8(lVar21,7)) {
      lVar25 = lVar21 + 7;
    }
    __s = (void *)FUN_005827b0((lVar25 >> 3) + 1);
    if (__s != (void *)0x0) {
      memset(__s,0,(lVar25 >> 3) + 1);
    }
    iVar9 = sqlite3_initialize();
    if (iVar9 == 0) {
      __dest = (void *)FUN_005827b0(0x200);
      uVar13 = 0xffffffff;
      if (((puVar11 != (uint *)0x0) && (__s != (void *)0x0)) && (__dest != (void *)0x0)) {
        lVar25 = 0;
        local_6c[0] = 0;
LAB_005a5400:
        do {
          puVar24 = (uint *)((long)puStack_c0 + lVar25 * 4);
          uVar13 = *puVar24;
          if (uVar13 - 1 < 2 || uVar13 == 5) {
            local_6c[0] = puVar24[2] - 1;
            lVar21 = 4;
            puVar24[2] = puVar24[3] + puVar24[2];
          }
          else {
            if (uVar13 == 0) {
              uVar4 = *puVar11;
              puVar24 = puVar11;
              uVar13 = (uint)local_c8;
              if ((uint)local_c8 < uVar4) goto LAB_005a576c;
              goto LAB_005a5788;
            }
            sqlite3_randomness(4,local_6c);
            lVar21 = 2;
          }
          iVar9 = 0;
          if ((uint)local_c8 != 0) {
            iVar9 = (int)(local_6c[0] & 0x7fffffff) / (int)(uint)local_c8;
          }
          local_6c[0] = (local_6c[0] & 0x7fffffff) - iVar9 * (uint)local_c8;
          uVar4 = puVar24[1];
          uVar17 = uVar4 - 1;
          puVar24[1] = uVar17;
          uVar10 = (ulong)(local_6c[0] + 1 >> 3);
          lVar2 = 0;
          if (uVar17 == 0 || (int)uVar4 < 1) {
            lVar2 = lVar21;
          }
          lVar25 = lVar2 + lVar25;
          bVar18 = (byte)(1 << (ulong)(local_6c[0] + 1 & 7));
          if ((uVar13 & 1) == 0) {
            *(byte *)((long)__s + uVar10) = *(byte *)((long)__s + uVar10) & (bVar18 ^ 0xff);
            puVar24 = puVar11;
            uVar13 = local_6c[0];
            do {
              uVar4 = puVar24[2];
              if (uVar4 == 0) {
                if (*puVar24 < 0xf81) {
                  *(byte *)((long)puVar24 + (ulong)(uVar13 >> 3) + 0x10) =
                       *(byte *)((long)puVar24 + (ulong)(uVar13 >> 3) + 0x10) &
                       ((byte)(1 << (ulong)(uVar13 & 7)) ^ 0xff);
                }
                else {
                  puVar1 = puVar24 + 4;
                  memcpy(__dest,puVar1,0x1f0);
                  lVar21 = 0;
                  puVar24[1] = 0;
                  puVar24[6] = 0;
                  puVar24[7] = 0;
                  puVar24[4] = 0;
                  puVar24[5] = 0;
                  puVar24[10] = 0;
                  puVar24[0xb] = 0;
                  puVar24[8] = 0;
                  puVar24[9] = 0;
                  puVar24[0xe] = 0;
                  puVar24[0xf] = 0;
                  puVar24[0xc] = 0;
                  puVar24[0xd] = 0;
                  puVar24[0x12] = 0;
                  puVar24[0x13] = 0;
                  puVar24[0x10] = 0;
                  puVar24[0x11] = 0;
                  puVar24[0x16] = 0;
                  puVar24[0x17] = 0;
                  puVar24[0x14] = 0;
                  puVar24[0x15] = 0;
                  puVar24[0x1a] = 0;
                  puVar24[0x1b] = 0;
                  puVar24[0x18] = 0;
                  puVar24[0x19] = 0;
                  puVar24[0x1e] = 0;
                  puVar24[0x1f] = 0;
                  puVar24[0x1c] = 0;
                  puVar24[0x1d] = 0;
                  puVar24[0x22] = 0;
                  puVar24[0x23] = 0;
                  puVar24[0x20] = 0;
                  puVar24[0x21] = 0;
                  puVar24[0x26] = 0;
                  puVar24[0x27] = 0;
                  puVar24[0x24] = 0;
                  puVar24[0x25] = 0;
                  puVar24[0x2a] = 0;
                  puVar24[0x2b] = 0;
                  puVar24[0x28] = 0;
                  puVar24[0x29] = 0;
                  puVar24[0x2e] = 0;
                  puVar24[0x2f] = 0;
                  puVar24[0x2c] = 0;
                  puVar24[0x2d] = 0;
                  puVar24[0x32] = 0;
                  puVar24[0x33] = 0;
                  puVar24[0x30] = 0;
                  puVar24[0x31] = 0;
                  puVar24[0x36] = 0;
                  puVar24[0x37] = 0;
                  puVar24[0x34] = 0;
                  puVar24[0x35] = 0;
                  puVar24[0x3a] = 0;
                  puVar24[0x3b] = 0;
                  puVar24[0x38] = 0;
                  puVar24[0x39] = 0;
                  puVar24[0x3e] = 0;
                  puVar24[0x3f] = 0;
                  puVar24[0x3c] = 0;
                  puVar24[0x3d] = 0;
                  puVar24[0x42] = 0;
                  puVar24[0x43] = 0;
                  puVar24[0x40] = 0;
                  puVar24[0x41] = 0;
                  puVar24[0x46] = 0;
                  puVar24[0x47] = 0;
                  puVar24[0x44] = 0;
                  puVar24[0x45] = 0;
                  puVar24[0x4a] = 0;
                  puVar24[0x4b] = 0;
                  puVar24[0x48] = 0;
                  puVar24[0x49] = 0;
                  puVar24[0x4e] = 0;
                  puVar24[0x4f] = 0;
                  puVar24[0x4c] = 0;
                  puVar24[0x4d] = 0;
                  puVar24[0x52] = 0;
                  puVar24[0x53] = 0;
                  puVar24[0x50] = 0;
                  puVar24[0x51] = 0;
                  puVar24[0x56] = 0;
                  puVar24[0x57] = 0;
                  puVar24[0x54] = 0;
                  puVar24[0x55] = 0;
                  puVar24[0x5a] = 0;
                  puVar24[0x5b] = 0;
                  puVar24[0x58] = 0;
                  puVar24[0x59] = 0;
                  puVar24[0x5e] = 0;
                  puVar24[0x5f] = 0;
                  puVar24[0x5c] = 0;
                  puVar24[0x5d] = 0;
                  puVar24[0x62] = 0;
                  puVar24[99] = 0;
                  puVar24[0x60] = 0;
                  puVar24[0x61] = 0;
                  puVar24[0x66] = 0;
                  puVar24[0x67] = 0;
                  puVar24[100] = 0;
                  puVar24[0x65] = 0;
                  puVar24[0x6a] = 0;
                  puVar24[0x6b] = 0;
                  puVar24[0x68] = 0;
                  puVar24[0x69] = 0;
                  puVar24[0x6e] = 0;
                  puVar24[0x6f] = 0;
                  puVar24[0x6c] = 0;
                  puVar24[0x6d] = 0;
                  puVar24[0x72] = 0;
                  puVar24[0x73] = 0;
                  puVar24[0x70] = 0;
                  puVar24[0x71] = 0;
                  puVar24[0x76] = 0;
                  puVar24[0x77] = 0;
                  puVar24[0x74] = 0;
                  puVar24[0x75] = 0;
                  puVar24[0x7a] = 0;
                  puVar24[0x7b] = 0;
                  puVar24[0x78] = 0;
                  puVar24[0x79] = 0;
                  puVar24[0x7e] = 0;
                  puVar24[0x7f] = 0;
                  puVar24[0x7c] = 0;
                  puVar24[0x7d] = 0;
                  do {
                    iVar9 = *(int *)((long)__dest + lVar21 * 4);
                    if ((iVar9 != 0) && (iVar9 != uVar13 + 1)) {
                      uVar10 = (ulong)((iVar9 - 1U) % 0x7c);
                      uVar4 = puVar1[uVar10];
                      puVar24[1] = puVar24[1] + 1;
                      while (uVar4 != 0) {
                        uVar4 = 0;
                        if ((int)uVar10 + 1U < 0x7c) {
                          uVar4 = (int)uVar10 + 1;
                        }
                        uVar10 = (ulong)uVar4;
                        uVar4 = puVar1[uVar10];
                      }
                      puVar1[uVar10] = *(uint *)((long)__dest + lVar21 * 4);
                    }
                    lVar21 = lVar21 + 1;
                  } while (lVar21 != 0x7c);
                }
                break;
              }
              uVar17 = 0;
              if (uVar4 != 0) {
                uVar17 = uVar13 / uVar4;
              }
              uVar13 = uVar13 - uVar17 * uVar4;
              puVar24 = *(uint **)(puVar24 + (ulong)uVar17 * 2 + 4);
            } while (puVar24 != (uint *)0x0);
            goto LAB_005a5400;
          }
          *(byte *)((long)__s + uVar10) = *(byte *)((long)__s + uVar10) | bVar18;
        } while ((uVar13 == 5) || (iVar9 = FUN_005aff14(puVar11,local_6c[0] + 1), iVar9 == 0));
        uVar13 = 0xffffffff;
      }
      goto LAB_005a5a70;
    }
    uVar13 = 0xffffffff;
    goto LAB_005a5b04;
  case 9:
    DAT_00b0db80 = local_c8;
    uVar10 = 0;
    if (local_c8 != (code *)0x0) {
      uVar10 = (*local_c8)(0);
    }
    break;
  case 10:
    DAT_00b103b0 = puStack_c0;
    uVar10 = 0;
    DAT_00b103a8 = param_2;
    break;
  case 0xb:
    uVar10 = (ulong)DAT_00b0d530;
    if ((uint)local_c8 != 0) {
      DAT_00b0d530 = (uint)local_c8;
    }
    break;
  case 0xc:
    uVar10 = 0;
    break;
  case 0xd:
    uVar10 = (ulong)param_2 & 0xffffffff;
    break;
  case 0xf:
    uVar10 = 0;
    *(int *)(param_2 + 0x60) = (int)puStack_c0;
    break;
  case 0x10:
    iVar9 = *(int *)(param_2 + 0x60);
    goto LAB_005a5a64;
  case 0x11:
    uVar10 = 0;
    *(uint *)(local_c8 + 0x2c) = *(uint *)(local_c8 + 0x2c) ^ 0x20;
    break;
  case 0x12:
    DAT_00b0db88 = (uint)local_c8;
    if ((uint)local_c8 == 2) {
      DAT_00b0db90 = puStack_c0;
      uVar10 = 0;
    }
    else {
      uVar10 = 0;
      DAT_00b0db90 = (ulong *)0x0;
    }
    break;
  case 0x13:
    DAT_00b0db98 = (uint)local_c8;
    uVar10 = 0;
    break;
  case 0x14:
    DAT_00b0da00 = (uint)local_c8;
    uVar10 = 0;
    break;
  case 0x16:
    uVar10 = 0x1e212;
    break;
  case 0x17:
    uVar10 = (ulong)(DAT_00b0db44 == 0);
    break;
  case 0x18:
    uVar10 = 0;
    *(int *)(param_2 + 0xb8) = (int)puStack_c0;
    break;
  case 0x19:
    if (*(long *)(local_c8 + 0x18) != 0) {
      (*DAT_00b0da70)();
    }
    if ((param_3 != (ulong *)0x0) &&
       (uVar10 = (ulong)(*(int *)(local_c8 + 0x28) - 1), 0 < *(int *)(local_c8 + 0x28))) {
      puVar16 = (undefined8 *)(*(long *)(local_c8 + 0x20) + uVar10 * 0x20);
      do {
        pbVar19 = (byte *)*puVar16;
        iVar9 = (int)uVar10;
        puVar20 = param_3;
        if (pbVar19 != (byte *)0x0) {
          do {
            bVar18 = *pbVar19;
            if (bVar18 == (byte)*puVar20) {
              if (bVar18 == 0) {
                if (iVar9 < 0) goto LAB_005a5738;
                goto LAB_005a5610;
              }
            }
            else if ((&DAT_002c78ae)[bVar18] != (&DAT_002c78ae)[(byte)*puVar20]) break;
            pbVar19 = pbVar19 + 1;
            puVar20 = (ulong *)((long)puVar20 + 1);
          } while( true );
        }
        puVar20 = param_3;
        pbVar19 = &DAT_002aeb89;
        if (iVar9 == 0) {
LAB_005a537c:
          bVar18 = *pbVar19;
          if (bVar18 == (byte)*puVar20) {
            if (bVar18 != 0) goto LAB_005a5374;
            iVar9 = 0;
LAB_005a5610:
            local_c8[0xc4] = SUB41(iVar9,0);
            local_c8[0xc5] = SUB41(param_4 & 1,0);
            local_c8[0xc6] = (code)((byte)local_c8[0xc6] & 0xfd | (byte)((param_4 & 1) << 1));
            *(int *)(local_c8 + 0xc0) = param_5;
            if (((param_4 & 1) == 0) && (param_5 != 0)) {
              FUN_0058d8d8(local_c8);
            }
            break;
          }
          if ((&DAT_002c78ae)[bVar18] == (&DAT_002c78ae)[(byte)*puVar20]) goto LAB_005a5374;
        }
        uVar10 = (ulong)(iVar9 - 1);
        puVar16 = puVar16 + -4;
      } while (0 < iVar9);
    }
LAB_005a5738:
    uVar10 = *(ulong *)(local_c8 + 0x18);
    if (uVar10 != 0) {
      (*DAT_00b0da80)();
      uVar10 = 0;
    }
    break;
  case 0x1b:
    uVar5 = *(ushort *)(*(long *)local_c8 + 0x14);
    if ((uVar5 >> 2 & 1) != 0) {
      *(ushort *)(*(long *)local_c8 + 0x14) = uVar5 & 0xfffb | 0x20;
      return 0;
    }
    goto LAB_005a5250;
  case 0x1c:
    DAT_00b0dba0 = (uint)local_c8;
    if ((puStack_c0 != (ulong *)0x0) &&
       (DAT_00b0dba0 = (uint)local_c8, **(uint **)(puStack_c0[4] + 0x18) != 0)) {
      DAT_00b0dba0 = **(uint **)(puStack_c0[4] + 0x18);
    }
    iVar9 = sqlite3_initialize(0);
    if (iVar9 == 0) {
      if (DAT_00b0d9f4 == '\0') {
        uVar10 = 0;
      }
      else {
        uVar10 = (*DAT_00b0da60)(5);
        if (uVar10 != 0) {
          (*DAT_00b0da70)();
          _DAT_00b10420 = _DAT_00b10420 & 0xffffffff00000000;
          (*DAT_00b0da80)(uVar10);
          return 0;
        }
      }
      _DAT_00b10420 = _DAT_00b10420 & 0xffffffff00000000;
      return uVar10;
    }
LAB_005a5250:
    uVar10 = 0;
    break;
  case 0x1d:
    uVar10 = 0;
    DAT_00b0d9f9 = SUB81(param_2,0);
    break;
  case 0x1e:
    uVar10 = 0;
    *puStack_c0 = 0;
    break;
  case 0x1f:
    if ((int)(uint)local_c8 < 2) {
      iVar9 = DAT_00b1035c;
      if ((uint)local_c8 != 0) {
        if ((uint)local_c8 != 1) {
          return 0;
        }
        DAT_00b1035c = (int)*puStack_c0;
        return 0;
      }
    }
    else {
      iVar9 = DAT_00b10360;
      if ((uint)local_c8 != 2) {
        if ((uint)local_c8 != 3) {
          return 0;
        }
        DAT_00b10360 = (int)*puStack_c0;
        return 0;
      }
    }
    goto LAB_005a5a64;
  case 0x21:
    if (local_150 <= 1.0) {
LAB_005a5634:
      iVar9 = 0;
    }
    else if (local_150 <= 2000000000.0) {
      uVar10 = (ulong)local_150;
      if (uVar10 < 8) {
        if (uVar10 < 2) goto LAB_005a5634;
        iVar9 = 0x28;
        uVar14 = uVar10;
        do {
          uVar10 = uVar14 << 1;
          bVar8 = uVar14 < 4;
          iVar9 = iVar9 + -10;
          uVar14 = uVar10;
        } while (bVar8);
      }
      else {
        iVar9 = 0x28;
        uVar14 = uVar10;
        if (0xff < uVar10) {
          do {
            uVar10 = uVar14 >> 4;
            iVar9 = iVar9 + 0x28;
            bVar8 = 0xfff < uVar14;
            uVar14 = uVar10;
          } while (bVar8);
        }
        uVar14 = uVar10;
        if (0xf < uVar10) {
          do {
            uVar10 = uVar14 >> 1;
            iVar9 = iVar9 + 10;
            bVar8 = 0x1f < uVar14;
            uVar14 = uVar10;
          } while (bVar8);
        }
      }
      iVar9 = iVar9 + (uint)(ushort)(&DAT_0029f910)[uVar10 & 7] + -10;
    }
    else {
      iVar9 = (uint)((ulong)local_150 >> 0x34) * 10 + -0x27ec;
    }
    iVar6 = (int)(short)iVar9;
    *(int *)param_2 = iVar6;
    puStack_c0 = local_b8;
    if (iVar6 < 0x262) {
      iVar7 = iVar6 / 10;
      uVar13 = iVar9 + iVar7 * -10;
      lVar21 = (long)(short)uVar13;
      uVar13 = uVar13 & 0xffff;
      lVar25 = 0;
      if (uVar13 != 0) {
        lVar25 = lVar21 + -1;
      }
      lVar21 = lVar21 + -2;
      if (uVar13 < 5) {
        lVar21 = lVar25;
      }
      uVar10 = lVar21 + 8U << ((ulong)(iVar7 - 3) & 0x3f);
      if (iVar6 < 0x1e) {
        uVar10 = lVar21 + 8U >> ((ulong)(3 - iVar7) & 0x3f);
      }
      *param_3 = uVar10;
      if (7 < uVar10) {
        if (0xff < uVar10) goto LAB_005a596c;
        sVar15 = 0x28;
        goto joined_r0x005a5a28;
      }
      if (uVar10 < 2) {
        iVar9 = 0;
        goto LAB_005a5a64;
      }
      sVar15 = 0x28;
      uVar14 = uVar10;
      do {
        uVar10 = uVar14 << 1;
        bVar8 = uVar14 < 4;
        sVar15 = sVar15 + -10;
        uVar14 = uVar10;
      } while (bVar8);
    }
    else {
      uVar10 = 0x7fffffffffffffff;
      *param_3 = 0x7fffffffffffffff;
LAB_005a596c:
      sVar15 = 0x28;
      uVar14 = uVar10;
      do {
        uVar10 = uVar14 >> 4;
        sVar15 = sVar15 + 0x28;
        bVar8 = 0xfff < uVar14;
        uVar14 = uVar10;
      } while (bVar8);
joined_r0x005a5a28:
      uVar14 = uVar10;
      if (0xf < uVar10) {
        do {
          uVar10 = uVar14 >> 1;
          sVar15 = sVar15 + 10;
          bVar8 = 0x1f < uVar14;
          uVar14 = uVar10;
        } while (bVar8);
      }
    }
    iVar9 = (int)(short)(sVar15 + (&DAT_0029f910)[uVar10 & 7] + -10);
LAB_005a5a64:
    uVar10 = 0;
    *(int *)puStack_c0 = iVar9;
  }
  return uVar10;
LAB_005a5374:
  puVar20 = (ulong *)((long)puVar20 + 1);
  pbVar19 = pbVar19 + 1;
  goto LAB_005a537c;
  while( true ) {
    uVar23 = 0;
    if (uVar17 != 0) {
      uVar23 = uVar13 / uVar17;
    }
    puVar1 = puVar24 + (ulong)uVar23 * 2 + 4;
    puVar24 = *(uint **)puVar1;
    uVar13 = uVar13 - uVar23 * uVar17;
    if (*(uint **)puVar1 == (uint *)0x0) break;
LAB_005a576c:
    uVar17 = puVar24[2];
    if (uVar17 == 0) {
      if (*puVar24 < 0xf81) {
        uVar13 = *(byte *)((long)puVar24 + (ulong)(uVar13 >> 3) + 0x10) >> (ulong)(uVar13 & 7) & 1;
        goto LAB_005a578c;
      }
      uVar17 = puVar24[(ulong)(uVar13 % 0x7c) + 4];
      if (uVar17 != 0) {
        uVar23 = uVar13 % 0x7c;
        goto LAB_005a5c0c;
      }
      break;
    }
  }
  goto LAB_005a5788;
  while( true ) {
    uVar3 = 0;
    if (uVar22 != 0x7b) {
      uVar3 = uVar22 + 1;
    }
    uVar23 = puVar24[(ulong)uVar3 + 4];
    uVar22 = uVar3;
    if (uVar23 == 0) break;
LAB_005a585c:
    if (uVar23 == uVar13 + 1) {
      bVar18 = 1;
      goto LAB_005a57e0;
    }
  }
LAB_005a57dc:
  bVar18 = 0;
LAB_005a57e0:
  uVar13 = local_6c[0];
  if (((*(byte *)((long)__s + (ulong)(local_6c[0] >> 3)) >> (ulong)(local_6c[0] & 7) & 1) != bVar18)
     || (bVar8 = local_6c[0] == (uint)local_c8, local_6c[0] = local_6c[0] + 1, uVar13 = uVar17,
        bVar8)) goto LAB_005a5a70;
  goto LAB_005a57b0;
  while( true ) {
    uVar22 = 0;
    if (uVar23 != 0x7b) {
      uVar22 = uVar23 + 1;
    }
    uVar17 = puVar24[(ulong)uVar22 + 4];
    uVar23 = uVar22;
    if (uVar17 == 0) break;
LAB_005a5c0c:
    if (uVar17 == uVar13 + 1) {
      uVar13 = 1;
      goto LAB_005a578c;
    }
  }
LAB_005a5788:
  uVar13 = 0;
LAB_005a578c:
  uVar17 = (uVar13 - (uint)local_c8) + uVar4;
  local_6c[0] = 1;
  uVar13 = uVar17;
  if (0 < (int)(uint)local_c8) {
LAB_005a57b0:
    uVar13 = local_6c[0] - 1;
    puVar24 = puVar11;
    if (uVar13 < uVar4) {
      do {
        uVar23 = puVar24[2];
        if (uVar23 == 0) {
          if (*puVar24 < 0xf81) {
            bVar18 = *(byte *)((long)puVar24 + (ulong)(uVar13 >> 3) + 0x10) >> (ulong)(uVar13 & 7) &
                     1;
            goto LAB_005a57e0;
          }
          uVar23 = puVar24[(ulong)(uVar13 % 0x7c) + 4];
          if (uVar23 != 0) {
            uVar22 = uVar13 % 0x7c;
            goto LAB_005a585c;
          }
          break;
        }
        uVar22 = 0;
        if (uVar23 != 0) {
          uVar22 = uVar13 / uVar23;
        }
        uVar13 = uVar13 - uVar22 * uVar23;
        puVar1 = puVar24 + (ulong)uVar22 * 2 + 4;
        puVar24 = *(uint **)puVar1;
      } while (*(uint **)puVar1 != (uint *)0x0);
    }
    goto LAB_005a57dc;
  }
LAB_005a5a70:
  if (__dest != (void *)0x0) {
    ppcVar12 = &DAT_00b0da18;
    if (DAT_00b0d9f0 != 0) {
      if (DAT_00b103d8 != (void *)0x0) {
        (*DAT_00b0da70)();
      }
      iVar9 = (*DAT_00b0da28)(__dest);
      DAT_00b105b8 = DAT_00b105b8 - iVar9;
      DAT_00b10600 = DAT_00b10600 + -1;
      (*DAT_00b0da18)(__dest);
      if (DAT_00b103d8 == (void *)0x0) goto LAB_005a5b04;
      ppcVar12 = &DAT_00b0da80;
      __dest = DAT_00b103d8;
    }
    (**ppcVar12)(__dest);
  }
LAB_005a5b04:
  if (__s != (void *)0x0) {
    ppcVar12 = &DAT_00b0da18;
    if (DAT_00b0d9f0 != 0) {
      if (DAT_00b103d8 != (void *)0x0) {
        (*DAT_00b0da70)();
      }
      iVar9 = (*DAT_00b0da28)(__s);
      DAT_00b105b8 = DAT_00b105b8 - iVar9;
      DAT_00b10600 = DAT_00b10600 + -1;
      (*DAT_00b0da18)(__s);
      if (DAT_00b103d8 == (void *)0x0) goto LAB_005a5b8c;
      ppcVar12 = &DAT_00b0da80;
      __s = DAT_00b103d8;
    }
    (**ppcVar12)(__s);
  }
LAB_005a5b8c:
  FUN_005b058c(puVar11);
  return (ulong)uVar13;
}


// ===== 005a5c34  FUN_005a5c34 =====

int FUN_005a5c34(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  int iVar3;
  
  if (param_1 < 8) {
    if (param_1 < 2) {
      return 0;
    }
    iVar3 = 0x28;
    uVar2 = param_1;
    do {
      param_1 = uVar2 << 1;
      bVar1 = uVar2 < 4;
      iVar3 = iVar3 + -10;
      uVar2 = param_1;
    } while (bVar1);
  }
  else {
    iVar3 = 0x28;
    uVar2 = param_1;
    if (0xff < param_1) {
      do {
        param_1 = uVar2 >> 4;
        iVar3 = iVar3 + 0x28;
        bVar1 = 0xfff < uVar2;
        uVar2 = param_1;
      } while (bVar1);
    }
    uVar2 = param_1;
    if (0xf < param_1) {
      do {
        param_1 = uVar2 >> 1;
        iVar3 = iVar3 + 10;
        bVar1 = 0x1f < uVar2;
        uVar2 = param_1;
      } while (bVar1);
    }
  }
  return iVar3 + (uint)(ushort)(&DAT_0029f910)[param_1 & 7] + -10;
}


// ===== 005a5ccc  sqlite3_create_filename =====

undefined4 *
sqlite3_create_filename(char *param_1,char *param_2,char *param_3,int param_4,undefined8 *param_5)

{
  void *__dest;
  uint uVar1;
  uint uVar2;
  int iVar3;
  size_t sVar4;
  size_t sVar5;
  size_t sVar6;
  undefined4 *puVar7;
  undefined4 *__dest_00;
  long lVar8;
  char *__s;
  ulong uVar9;
  undefined8 *puVar10;
  
  sVar4 = strlen(param_1);
  sVar5 = strlen(param_2);
  sVar6 = strlen(param_3);
  uVar2 = param_4 * 2;
  lVar8 = sVar4 + sVar5 + sVar6 + 10;
  if (0 < param_4) {
    uVar1 = uVar2;
    if ((int)uVar2 < 2) {
      uVar1 = 1;
    }
    uVar9 = (ulong)uVar1;
    puVar10 = param_5;
    do {
      sVar4 = strlen((char *)*puVar10);
      uVar9 = uVar9 - 1;
      lVar8 = lVar8 + sVar4 + 1;
      puVar10 = puVar10 + 1;
    } while (uVar9 != 0);
  }
  iVar3 = sqlite3_initialize();
  if (iVar3 == 0) {
    puVar7 = (undefined4 *)FUN_005827b0(lVar8);
    __dest_00 = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      __dest_00 = puVar7 + 1;
      *puVar7 = 0;
      sVar4 = strlen(param_1);
      memcpy(__dest_00,param_1,sVar4 + 1);
      lVar8 = (long)__dest_00 + sVar4;
      if (0 < param_4) {
        if ((int)uVar2 < 2) {
          uVar2 = 1;
        }
        uVar9 = (ulong)uVar2;
        do {
          __s = (char *)*param_5;
          sVar4 = strlen(__s);
          memcpy((void *)(lVar8 + 1),__s,sVar4 + 1);
          lVar8 = lVar8 + 1 + sVar4;
          uVar9 = uVar9 - 1;
          param_5 = param_5 + 1;
        } while (uVar9 != 0);
      }
      *(undefined1 *)(lVar8 + 1) = 0;
      sVar4 = strlen(param_2);
      memcpy((void *)(lVar8 + 2),param_2,sVar4 + 1);
      __dest = (void *)(sVar4 + 1 + lVar8 + 2);
      sVar4 = strlen(param_3);
      memcpy(__dest,param_3,sVar4 + 1);
      *(undefined2 *)((long)__dest + sVar4 + 1) = 0;
    }
  }
  else {
    __dest_00 = (undefined4 *)0x0;
  }
  return __dest_00;
}


// ===== 005a5e4c  sqlite3_free_filename =====

void sqlite3_free_filename(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  char *pcVar3;
  
  if (param_1 == 0) {
    return;
  }
  for (pcVar3 = (char *)(param_1 + -4);
      (((pcVar3[3] != '\0' || (pcVar3[2] != '\0')) || (pcVar3[1] != '\0')) || (*pcVar3 != '\0'));
      pcVar3 = pcVar3 + -1) {
  }
  puVar2 = &DAT_00b0da18;
  if (DAT_00b0d9f0 != 0) {
    if (DAT_00b103d8 != (char *)0x0) {
      (*DAT_00b0da70)();
    }
    iVar1 = (*DAT_00b0da28)(pcVar3);
    DAT_00b105b8 = DAT_00b105b8 - iVar1;
    DAT_00b10600 = DAT_00b10600 + -1;
    (*DAT_00b0da18)(pcVar3);
    if (DAT_00b103d8 == (char *)0x0) {
      return;
    }
    puVar2 = &DAT_00b0da80;
    pcVar3 = DAT_00b103d8;
  }
                    /* WARNING: Could not recover jumptable at 0x005a5f14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(pcVar3);
  return;
}


// ===== 005a5f28  sqlite3_uri_parameter =====

char * sqlite3_uri_parameter(char *param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  
  pcVar3 = (char *)0x0;
  if ((param_1 != (char *)0x0) && (param_2 != (char *)0x0)) {
    do {
      do {
        pcVar3 = param_1;
        param_1 = pcVar3 + -1;
      } while (*param_1 != '\0');
    } while (((pcVar3[-2] != '\0') || (pcVar3[-3] != '\0')) || (pcVar3[-4] != '\0'));
    do {
      sVar2 = strlen(pcVar3);
      pcVar3 = pcVar3 + (sVar2 & 0x3fffffff) + 1;
      if (pcVar3 == (char *)0x0) {
        return (char *)0x0;
      }
      if (*pcVar3 == '\0') {
        return (char *)0x0;
      }
      iVar1 = strcmp(pcVar3,param_2);
      sVar2 = strlen(pcVar3);
      pcVar3 = pcVar3 + (sVar2 & 0x3fffffff) + 1;
    } while (iVar1 != 0);
  }
  return pcVar3;
}


// ===== 005a5fe4  sqlite3_uri_key =====

char * sqlite3_uri_key(long param_1,int param_2)

{
  bool bVar1;
  size_t sVar2;
  char *pcVar3;
  char *__s;
  
  pcVar3 = (char *)0x0;
  if ((param_1 != 0) && (-1 < param_2)) {
    for (param_1 = param_1 + 1;
        (((*(char *)(param_1 + -2) != '\0' || (*(char *)(param_1 + -3) != '\0')) ||
         (*(char *)(param_1 + -4) != '\0')) || (*(char *)(param_1 + -5) != '\0'));
        param_1 = param_1 + -1) {
    }
    sVar2 = strlen((char *)(param_1 + -1));
    __s = (char *)(param_1 + (sVar2 & 0x3fffffff));
    if ((*__s != '\0') && (0 < param_2)) {
      do {
        while( true ) {
          sVar2 = strlen(__s);
          pcVar3 = __s + (sVar2 & 0x3fffffff) + 1;
          if (pcVar3 != (char *)0x0) break;
          __s = __s + (sVar2 & 0x3fffffff) + 2;
          bVar1 = param_2 < 2;
          param_2 = param_2 + -1;
          if (*__s == '\0' || bVar1) goto LAB_005a60ac;
        }
        sVar2 = strlen(pcVar3);
        __s = pcVar3 + (sVar2 & 0x3fffffff) + 1;
        bVar1 = 1 < param_2;
        param_2 = param_2 + -1;
      } while (*__s != '\0' && bVar1);
    }
LAB_005a60ac:
    pcVar3 = (char *)0x0;
    if (*__s != '\0') {
      pcVar3 = __s;
    }
  }
  return pcVar3;
}


// ===== 005a60c4  sqlite3_uri_boolean =====

bool sqlite3_uri_boolean(char *param_1,char *param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  size_t sVar4;
  char *pcVar5;
  
  if ((param_1 == (char *)0x0) || (param_2 == (char *)0x0)) {
LAB_005a6154:
    bVar1 = param_3 == 0;
  }
  else {
    do {
      do {
        pcVar5 = param_1;
        param_1 = pcVar5 + -1;
      } while (*param_1 != '\0');
    } while (((pcVar5[-2] != '\0') || (pcVar5[-3] != '\0')) || (pcVar5[-4] != '\0'));
    do {
      sVar4 = strlen(pcVar5);
      pcVar5 = pcVar5 + (sVar4 & 0x3fffffff) + 1;
      if ((pcVar5 == (char *)0x0) || (*pcVar5 == '\0')) goto LAB_005a6154;
      iVar3 = strcmp(pcVar5,param_2);
      sVar4 = strlen(pcVar5);
      pcVar5 = pcVar5 + (sVar4 & 0x3fffffff) + 1;
    } while (iVar3 != 0);
    bVar1 = param_3 == 0;
    if (pcVar5 != (char *)0x0) {
      cVar2 = FUN_0065fec8(pcVar5,1,!bVar1);
      bVar1 = cVar2 == '\0';
    }
  }
  return !bVar1;
}


// ===== 005a6190  sqlite3_uri_int64 =====

undefined8 sqlite3_uri_int64(char *param_1,char *param_2,undefined8 param_3)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  undefined8 local_38;
  
  if ((param_1 != (char *)0x0) && (param_2 != (char *)0x0)) {
    do {
      do {
        pcVar3 = param_1;
        param_1 = pcVar3 + -1;
      } while (*param_1 != '\0');
    } while (((pcVar3[-2] != '\0') || (pcVar3[-3] != '\0')) || (pcVar3[-4] != '\0'));
    do {
      sVar2 = strlen(pcVar3);
      pcVar3 = pcVar3 + (sVar2 & 0x3fffffff) + 1;
      if (pcVar3 == (char *)0x0) {
        return param_3;
      }
      if (*pcVar3 == '\0') {
        return param_3;
      }
      iVar1 = strcmp(pcVar3,param_2);
      sVar2 = strlen(pcVar3);
      pcVar3 = pcVar3 + (sVar2 & 0x3fffffff) + 1;
    } while (iVar1 != 0);
    if (pcVar3 != (char *)0x0) {
      iVar1 = FUN_005a6270(pcVar3,&local_38);
      if (iVar1 != 0) {
        local_38 = param_3;
      }
      return local_38;
    }
  }
  return param_3;
}


// ===== 005a6270  FUN_005a6270 =====

ulong FUN_005a6270(char *param_1,ulong *param_2)

{
  uint uVar1;
  size_t sVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  
  if ((*param_1 != '0') || ((byte)(param_1[1] | 0x20U) != 0x78)) {
    sVar2 = strspn(param_1,"+- \n\t0123456789");
    uVar1 = (uint)sVar2 & 0x3fffffff;
    if (param_1[sVar2 & 0x3fffffff] != '\0') {
      uVar1 = uVar1 + 1;
    }
    uVar3 = FUN_005c27e8(param_1,param_2,uVar1,1);
    return uVar3;
  }
  uVar3 = 1;
  do {
    uVar4 = uVar3;
    uVar3 = uVar4 + 1;
  } while (param_1[uVar4 + 1] == '0');
  uVar6 = uVar3 & 0xffffffff;
  uVar8 = (ulong)(byte)param_1[uVar6];
  if (((byte)(&DAT_002c7a08)[uVar8] >> 3 & 1) == 0) {
    *param_2 = 0;
  }
  else {
    uVar5 = 0;
    uVar4 = uVar4 + 2;
    do {
      uVar6 = uVar4;
      iVar7 = (int)uVar8;
      uVar8 = (ulong)(byte)param_1[uVar6];
      uVar5 = (ulong)(((uint)(int)(char)(iVar7 << 1) >> 7 & 0xfffffff9) + iVar7 & 0xf) | uVar5 << 4;
      uVar4 = uVar6 + 1;
    } while (((byte)(&DAT_002c7a08)[uVar8] >> 3 & 1) != 0);
    *param_2 = uVar5;
    if (0x10 < (int)uVar6 - (int)uVar3) {
      return 2;
    }
  }
  return (ulong)(param_1[uVar6] != '\0');
}


// ===== 005a639c  sqlite3_filename_database =====

char * sqlite3_filename_database(char *param_1)

{
  char *pcVar1;
  
  if (param_1 != (char *)0x0) {
    do {
      do {
        pcVar1 = param_1;
        param_1 = pcVar1 + -1;
      } while (*param_1 != '\0');
    } while (((pcVar1[-2] != '\0') || (pcVar1[-3] != '\0')) || (pcVar1[-4] != '\0'));
    return pcVar1;
  }
  return (char *)0x0;
}


// ===== 005a63d8  sqlite3_filename_journal =====

char * sqlite3_filename_journal(char *param_1)

{
  char *__s;
  size_t sVar1;
  ulong uVar2;
  char *__s_00;
  
  if (param_1 == (char *)0x0) {
    return (char *)0x0;
  }
  do {
    do {
      __s_00 = param_1;
      param_1 = __s_00 + -1;
    } while (*param_1 != '\0');
  } while (((__s_00[-2] != '\0') || (__s_00[-3] != '\0')) || (__s_00[-4] != '\0'));
  do {
    sVar1 = strlen(__s_00);
    uVar2 = sVar1 & 0x3fffffff;
    while( true ) {
      __s = __s_00 + uVar2 + 1;
      if ((__s == (char *)0x0) || (*__s == '\0')) {
        return __s_00 + uVar2 + 2;
      }
      sVar1 = strlen(__s);
      __s_00 = __s + (sVar1 & 0x3fffffff) + 1;
      if (__s_00 != (char *)0x0) break;
      uVar2 = 0;
    }
  } while( true );
}


// ===== 005a6464  sqlite3_filename_wal =====

char * sqlite3_filename_wal(char *param_1)

{
  char *__s;
  size_t sVar1;
  ulong uVar2;
  char *pcVar3;
  
  if (param_1 == (char *)0x0) {
    return (char *)0x0;
  }
  do {
    do {
      pcVar3 = param_1;
      param_1 = pcVar3 + -1;
    } while (*param_1 != '\0');
  } while (((pcVar3[-2] != '\0') || (pcVar3[-3] != '\0')) || (pcVar3[-4] != '\0'));
  do {
    sVar1 = strlen(pcVar3);
    uVar2 = sVar1 & 0x3fffffff;
    while( true ) {
      __s = pcVar3 + uVar2 + 1;
      if ((__s == (char *)0x0) || (*__s == '\0')) {
        pcVar3 = pcVar3 + uVar2 + 2;
        if (pcVar3 != (char *)0x0) {
          sVar1 = strlen(pcVar3);
          return pcVar3 + (sVar1 & 0x3fffffff) + 1;
        }
        return (char *)0x0;
      }
      sVar1 = strlen(__s);
      pcVar3 = __s + (sVar1 & 0x3fffffff) + 1;
      if (pcVar3 != (char *)0x0) break;
      uVar2 = 0;
    }
  } while( true );
}


// ===== 005a6510  sqlite3_db_name =====

undefined8 sqlite3_db_name(long param_1,uint param_2)

{
  char cVar1;
  char *pcVar2;
  
  if (param_1 == 0) {
    pcVar2 = "NULL";
  }
  else {
    cVar1 = *(char *)(param_1 + 0x71);
    if (cVar1 != -0x46) {
      if (cVar1 == 'v') {
        if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x28))) {
          return *(undefined8 *)(*(long *)(param_1 + 0x20) + (ulong)param_2 * 0x20);
        }
        return 0;
      }
      if (cVar1 != 'm') {
        pcVar2 = "invalid";
        goto LAB_005a6570;
      }
    }
    pcVar2 = "unopened";
  }
LAB_005a6570:
  sqlite3_log(0x15,"API call with %s database connection pointer",pcVar2);
  sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x2dc6c,
              "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
  return 0;
}


// ===== 005a65c4  sqlite3_db_filename =====

undefined * sqlite3_db_filename(long param_1,byte *param_2)

{
  char cVar1;
  byte bVar2;
  undefined *puVar3;
  char *pcVar4;
  long lVar5;
  undefined8 *puVar6;
  int iVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  
  if (param_1 == 0) {
    pcVar4 = "NULL";
  }
  else {
    cVar1 = *(char *)(param_1 + 0x71);
    if (cVar1 != -0x46) {
      if (cVar1 == 'v') {
        if (param_2 == (byte *)0x0) {
          lVar5 = *(long *)(param_1 + 0x20);
LAB_005a6714:
          uVar8 = 0;
LAB_005a6720:
          lVar5 = *(long *)(lVar5 + uVar8 * 0x20 + 8);
          if (lVar5 == 0) {
            return (undefined *)0x0;
          }
          puVar6 = (undefined8 *)**(undefined8 **)(lVar5 + 8);
          if ((*(char *)((long)puVar6 + 0x13) != '\0') || ((undefined *)*puVar6 == &DAT_00b0d588)) {
            return &DAT_002c85fa;
          }
          puVar3 = (undefined *)puVar6[0x1b];
        }
        else {
          uVar8 = (ulong)(*(int *)(param_1 + 0x28) - 1);
          if (*(int *)(param_1 + 0x28) < 1) {
            return (undefined *)0x0;
          }
          lVar5 = *(long *)(param_1 + 0x20);
          puVar6 = (undefined8 *)(lVar5 + uVar8 * 0x20);
          do {
            pbVar9 = (byte *)*puVar6;
            iVar7 = (int)uVar8;
            pbVar10 = param_2;
            if (pbVar9 != (byte *)0x0) {
              do {
                bVar2 = *pbVar9;
                if (bVar2 == *pbVar10) {
                  if (bVar2 == 0) {
                    if (iVar7 < 0) {
                      return (undefined *)0x0;
                    }
                    goto LAB_005a6720;
                  }
                }
                else if ((&DAT_002c78ae)[bVar2] != (&DAT_002c78ae)[*pbVar10]) break;
                pbVar9 = pbVar9 + 1;
                pbVar10 = pbVar10 + 1;
              } while( true );
            }
            pbVar9 = param_2;
            pbVar10 = &DAT_002aeb89;
            if (iVar7 == 0) {
              do {
                bVar2 = *pbVar10;
                if (bVar2 == *pbVar9) {
                  if (bVar2 == 0) goto LAB_005a6714;
                }
                else if ((&DAT_002c78ae)[bVar2] != (&DAT_002c78ae)[*pbVar9]) break;
                pbVar9 = pbVar9 + 1;
                pbVar10 = pbVar10 + 1;
              } while( true );
            }
            puVar3 = (undefined *)0x0;
            uVar8 = (ulong)(iVar7 - 1);
            puVar6 = puVar6 + -4;
          } while (0 < iVar7);
        }
        return puVar3;
      }
      if (cVar1 != 'm') {
        pcVar4 = "invalid";
        goto LAB_005a66cc;
      }
    }
    pcVar4 = "unopened";
  }
LAB_005a66cc:
  sqlite3_log(0x15,"API call with %s database connection pointer",pcVar4);
  sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x2dc7f,
              "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
  return (undefined *)0x0;
}


// ===== 005a677c  sqlite3_db_readonly =====

uint sqlite3_db_readonly(long param_1,byte *param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  char *pcVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  
  if (param_1 == 0) {
    pcVar4 = "NULL";
  }
  else {
    cVar1 = *(char *)(param_1 + 0x71);
    if (cVar1 != -0x46) {
      if (cVar1 == 'v') {
        if (param_2 == (byte *)0x0) {
          lVar5 = *(long *)(param_1 + 0x20);
LAB_005a68cc:
          uVar7 = 0;
LAB_005a68d8:
          lVar5 = *(long *)(lVar5 + uVar7 * 0x20 + 8);
          if (lVar5 == 0) {
            return 0xffffffff;
          }
          uVar3 = *(ushort *)(*(long *)(lVar5 + 8) + 0x28) & 1;
        }
        else {
          uVar7 = (ulong)(*(int *)(param_1 + 0x28) - 1);
          if (*(int *)(param_1 + 0x28) < 1) {
            return 0xffffffff;
          }
          lVar5 = *(long *)(param_1 + 0x20);
          uVar3 = 0xffffffff;
          puVar8 = (undefined8 *)(lVar5 + uVar7 * 0x20);
          do {
            pbVar9 = (byte *)*puVar8;
            iVar6 = (int)uVar7;
            pbVar10 = param_2;
            if (pbVar9 != (byte *)0x0) {
              do {
                bVar2 = *pbVar9;
                if (bVar2 == *pbVar10) {
                  if (bVar2 == 0) {
                    if (iVar6 < 0) {
                      return 0xffffffff;
                    }
                    goto LAB_005a68d8;
                  }
                }
                else if ((&DAT_002c78ae)[bVar2] != (&DAT_002c78ae)[*pbVar10]) break;
                pbVar9 = pbVar9 + 1;
                pbVar10 = pbVar10 + 1;
              } while( true );
            }
            pbVar9 = param_2;
            pbVar10 = &DAT_002aeb89;
            if (iVar6 == 0) {
              do {
                bVar2 = *pbVar10;
                if (bVar2 == *pbVar9) {
                  if (bVar2 == 0) goto LAB_005a68cc;
                }
                else if ((&DAT_002c78ae)[bVar2] != (&DAT_002c78ae)[*pbVar9]) break;
                pbVar9 = pbVar9 + 1;
                pbVar10 = pbVar10 + 1;
              } while( true );
            }
            uVar7 = (ulong)(iVar6 - 1);
            puVar8 = puVar8 + -4;
          } while (0 < iVar6);
        }
        return uVar3;
      }
      if (cVar1 != 'm') {
        pcVar4 = "invalid";
        goto LAB_005a6884;
      }
    }
    pcVar4 = "unopened";
  }
LAB_005a6884:
  sqlite3_log(0x15,"API call with %s database connection pointer",pcVar4);
  sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x2dc8f,
              "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
  return 0xffffffff;
}


// ===== 005a6908  sqlite3_compileoption_used =====

undefined8 sqlite3_compileoption_used(byte *param_1)

{
  byte bVar1;
  char cVar2;
  size_t sVar3;
  long lVar4;
  char *pcVar5;
  char cVar6;
  char *pcVar7;
  long lVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  byte *pbVar12;
  
  if (param_1 == (byte *)0x0) {
    sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x2dd2f,
                "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
    return 0;
  }
  bVar1 = *param_1;
  if (bVar1 == 0) {
    cVar6 = '\0';
    pcVar5 = "S";
  }
  else {
    if ((bVar1 & 0xdf) == 0x53) {
      bVar1 = param_1[1];
      if (bVar1 == 0) {
        cVar6 = '\0';
        pcVar5 = "Q";
        goto LAB_005a6ac8;
      }
      if ((bVar1 & 0xdf) == 0x51) {
        bVar1 = param_1[2];
        if (bVar1 == 0) {
          cVar6 = '\0';
          pcVar5 = "L";
          goto LAB_005a6ac8;
        }
        if ((bVar1 & 0xdf) == 0x4c) {
          bVar1 = param_1[3];
          if (bVar1 == 0) {
            cVar6 = '\0';
            pcVar5 = "I";
            goto LAB_005a6ac8;
          }
          if ((bVar1 & 0xdf) == 0x49) {
            bVar1 = param_1[4];
            if (bVar1 == 0) {
              cVar6 = '\0';
              pcVar5 = "T";
              goto LAB_005a6ac8;
            }
            if ((bVar1 & 0xdf) == 0x54) {
              bVar1 = param_1[5];
              if (bVar1 == 0) {
                cVar6 = '\0';
                pcVar5 = "E";
                goto LAB_005a6ac8;
              }
              if ((bVar1 & 0xdf) == 0x45) {
                bVar1 = param_1[6];
                if (bVar1 == 0) {
                  cVar6 = '\0';
                  pcVar5 = "_";
                  goto LAB_005a6ac8;
                }
                if (bVar1 == 0x5f) {
                  lVar4 = 7;
                  goto LAB_005a6ae4;
                }
                pcVar7 = &DAT_002c78ae + bVar1;
                pcVar5 = "_";
              }
              else {
                pcVar7 = &DAT_002c78ae + bVar1;
                pcVar5 = "E";
              }
            }
            else {
              pcVar7 = &DAT_002c78ae + bVar1;
              pcVar5 = "T";
            }
          }
          else {
            pcVar7 = &DAT_002c78ae + bVar1;
            pcVar5 = "I";
          }
        }
        else {
          pcVar7 = &DAT_002c78ae + bVar1;
          pcVar5 = "L";
        }
      }
      else {
        pcVar7 = &DAT_002c78ae + bVar1;
        pcVar5 = "Q";
      }
    }
    else {
      pcVar7 = &DAT_002c78ae + bVar1;
      pcVar5 = "S";
    }
    cVar6 = *pcVar7;
  }
LAB_005a6ac8:
  lVar4 = 7;
  if (cVar6 != (&DAT_002c78ae)[(byte)*pcVar5]) {
    lVar4 = 0;
  }
LAB_005a6ae4:
  sVar3 = strlen((char *)(param_1 + lVar4));
  lVar8 = 0;
  if ((sVar3 & 0x3fffffff) == 0) {
    do {
      if ((*(long *)((long)&PTR_s_ATOMIC_INTRINSICS_1_00ad4840 + lVar8) != 0) &&
         (((&DAT_002c7a08)
           [*(byte *)(*(long *)((long)&PTR_s_ATOMIC_INTRINSICS_1_00ad4840 + lVar8) +
                     (sVar3 & 0x3fffffff))] & 0x46) == 0)) {
        return 1;
      }
      lVar8 = lVar8 + 8;
    } while (lVar8 != 0x198);
  }
  else {
    do {
      pbVar9 = (&PTR_s_ATOMIC_INTRINSICS_1_00ad4840)[lVar8];
      pbVar10 = pbVar9;
      pbVar12 = param_1 + lVar4;
      uVar11 = ((uint)sVar3 & 0x3fffffff) + 1;
      if (pbVar9 != (byte *)0x0) {
        do {
          if ((ulong)*pbVar12 == 0) {
            cVar6 = '\0';
            cVar2 = (&DAT_002c78ae)[*pbVar10];
LAB_005a6b8c:
            if (cVar6 != cVar2) goto LAB_005a6b2c;
            break;
          }
          cVar6 = (&DAT_002c78ae)[*pbVar12];
          cVar2 = (&DAT_002c78ae)[*pbVar10];
          if (cVar6 != cVar2) goto LAB_005a6b8c;
          uVar11 = uVar11 - 1;
          pbVar10 = pbVar10 + 1;
          pbVar12 = pbVar12 + 1;
        } while (1 < uVar11);
        if (((&DAT_002c7a08)[pbVar9[sVar3 & 0x3fffffff]] & 0x46) == 0) {
          return 1;
        }
      }
LAB_005a6b2c:
      lVar8 = lVar8 + 1;
    } while (lVar8 != 0x33);
  }
  return 0;
}


// ===== 005a6be4  sqlite3_compileoption_get =====

undefined * sqlite3_compileoption_get(uint param_1)

{
  if (param_1 < 0x33) {
    return (&PTR_s_ATOMIC_INTRINSICS_1_00ad4840)[param_1];
  }
  return (undefined *)0x0;
}


// ===== 005a6c04  sqlite3_rtree_geometry_callback =====

undefined8
sqlite3_rtree_geometry_callback
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  iVar1 = sqlite3_initialize();
  if ((iVar1 == 0) && (puVar2 = (undefined8 *)FUN_005827b0(0x20), puVar2 != (undefined8 *)0x0)) {
    *puVar2 = param_3;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = param_4;
    uVar3 = FUN_0059f310(param_1,param_2,0xffffffff,5,puVar2,FUN_005a6ca8,0,0,0,0,FUN_005a70dc);
    return uVar3;
  }
  return 7;
}


// ===== 005a6ca8  FUN_005a6ca8 =====

void FUN_005a6ca8(long *param_1,uint param_2,long param_3)

{
  char cVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  double *pdVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  if (param_1 == (long *)0x0) {
    puVar10 = (undefined8 *)0x0;
    iVar4 = sqlite3_initialize();
  }
  else {
    puVar10 = *(undefined8 **)(param_1[1] + 8);
    iVar4 = sqlite3_initialize();
  }
  if (iVar4 != 0) {
LAB_005a6dbc:
    if (param_1 != (long *)0x0) {
      lVar8 = *param_1;
      if ((*(ushort *)(lVar8 + 0x14) & 0x9000) == 0) {
        *(undefined2 *)(lVar8 + 0x14) = 1;
        lVar8 = *(long *)(lVar8 + 0x18);
        *(undefined4 *)((long)param_1 + 0x24) = 7;
        cVar1 = *(char *)(lVar8 + 0x67);
      }
      else {
        FUN_005c1258();
        lVar8 = *(long *)(*param_1 + 0x18);
        *(undefined4 *)((long)param_1 + 0x24) = 7;
        cVar1 = *(char *)(lVar8 + 0x67);
      }
      if ((cVar1 == '\0') && (*(char *)(lVar8 + 0x68) == '\0')) {
        *(undefined1 *)(lVar8 + 0x67) = 1;
        if (0 < *(int *)(lVar8 + 0xdc)) {
          *(undefined4 *)(lVar8 + 400) = 1;
        }
        *(undefined2 *)(lVar8 + 0x19c) = 0;
        *(int *)(lVar8 + 0x198) = *(int *)(lVar8 + 0x198) + 1;
        if (*(long *)(lVar8 + 0x158) != 0) {
          FUN_00595b78(*(long *)(lVar8 + 0x158),"out of memory");
          lVar9 = *(long *)(*(long *)(lVar8 + 0x158) + 0xd8);
          *(undefined4 *)(*(long *)(lVar8 + 0x158) + 0x18) = 7;
          for (; lVar9 != 0; lVar9 = *(long *)(lVar9 + 0xd8)) {
            *(undefined4 *)(lVar9 + 0x18) = 7;
            *(int *)(lVar9 + 0x34) = *(int *)(lVar9 + 0x34) + 1;
          }
        }
      }
    }
    return;
  }
  lVar8 = (-(ulong)(param_2 >> 0x1f) & 0xfffffff000000000 | (ulong)param_2 << 4) + 0x38;
  puVar5 = (undefined4 *)FUN_005827b0(lVar8);
  if (puVar5 == (undefined4 *)0x0) goto LAB_005a6dbc;
  *puVar5 = (int)lVar8;
  uVar14 = puVar10[1];
  uVar13 = *puVar10;
  uVar12 = puVar10[3];
  uVar6 = puVar10[2];
  puVar5[10] = param_2;
  *(undefined8 *)(puVar5 + 8) = uVar12;
  *(undefined8 *)(puVar5 + 6) = uVar6;
  *(undefined8 *)(puVar5 + 4) = uVar14;
  *(undefined8 *)(puVar5 + 2) = uVar13;
  *(undefined4 **)(puVar5 + 0xc) = puVar5 + (long)(int)param_2 * 2 + 0xe;
  if (0 < (int)param_2) {
    bVar3 = false;
    lVar8 = 0;
    do {
      uVar6 = sqlite3_value_dup(*(undefined8 *)(param_3 + lVar8));
      *(undefined8 *)(*(long *)(puVar5 + 0xc) + lVar8) = uVar6;
      pdVar7 = *(double **)(param_3 + lVar8);
      uVar2 = *(ushort *)((long)pdVar7 + 0x14);
      if (*(long *)(*(long *)(puVar5 + 0xc) + lVar8) == 0) {
        bVar3 = true;
      }
      if ((uVar2 >> 3 & 1) == 0) {
        if ((uVar2 & 0x24) == 0) {
          if ((uVar2 & 0x12) == 0) {
            dVar11 = 0.0;
          }
          else {
            dVar11 = (double)FUN_005c1da8();
          }
        }
        else {
          dVar11 = (double)(long)*pdVar7;
        }
      }
      else {
        dVar11 = *pdVar7;
      }
      lVar9 = lVar8 + 8;
      *(double *)((long)puVar5 + lVar8 + 0x38) = dVar11;
      lVar8 = lVar9;
    } while ((ulong)param_2 << 3 != lVar9);
    if (bVar3) {
      if (param_1 != (long *)0x0) {
        lVar8 = *param_1;
        if ((*(ushort *)(lVar8 + 0x14) & 0x9000) == 0) {
          *(undefined2 *)(lVar8 + 0x14) = 1;
          lVar8 = *(long *)(lVar8 + 0x18);
          *(undefined4 *)((long)param_1 + 0x24) = 7;
          cVar1 = *(char *)(lVar8 + 0x67);
        }
        else {
          FUN_005c1258();
          lVar8 = *(long *)(*param_1 + 0x18);
          *(undefined4 *)((long)param_1 + 0x24) = 7;
          cVar1 = *(char *)(lVar8 + 0x67);
        }
        if ((cVar1 == '\0') && (*(char *)(lVar8 + 0x68) == '\0')) {
          *(undefined1 *)(lVar8 + 0x67) = 1;
          if (0 < *(int *)(lVar8 + 0xdc)) {
            *(undefined4 *)(lVar8 + 400) = 1;
          }
          *(undefined2 *)(lVar8 + 0x19c) = 0;
          *(int *)(lVar8 + 0x198) = *(int *)(lVar8 + 0x198) + 1;
          if (*(long *)(lVar8 + 0x158) != 0) {
            FUN_00595b78(*(long *)(lVar8 + 0x158),"out of memory");
            lVar9 = *(long *)(*(long *)(lVar8 + 0x158) + 0xd8);
            *(undefined4 *)(*(long *)(lVar8 + 0x158) + 0x18) = 7;
            for (; lVar9 != 0; lVar9 = *(long *)(lVar9 + 0xd8)) {
              *(undefined4 *)(lVar9 + 0x18) = 7;
              *(int *)(lVar9 + 0x34) = *(int *)(lVar9 + 0x34) + 1;
            }
          }
        }
      }
      if (0 < (int)puVar5[10]) {
        lVar8 = 0;
        do {
          FUN_005900cc(*(undefined8 *)(*(long *)(puVar5 + 0xc) + lVar8 * 8));
          lVar8 = lVar8 + 1;
        } while (lVar8 < (int)puVar5[10]);
      }
      goto LAB_005a6fdc;
    }
  }
  if (param_1 != (long *)0x0) {
    puVar10 = (undefined8 *)*param_1;
    if (((*(ushort *)((long)puVar10 + 0x14) & 0x9000) != 0) || (*(int *)(puVar10 + 4) != 0)) {
      FUN_005c1208(puVar10);
    }
    *(undefined2 *)((long)puVar10 + 0x14) = 1;
    FUN_005c1208(puVar10);
    *puVar10 = "RtreeMatchArg";
    puVar10[1] = puVar5;
    *(undefined2 *)((long)puVar10 + 0x14) = 0x1a01;
    *(undefined1 *)((long)puVar10 + 0x17) = 0x70;
    puVar10[6] = FUN_006f53e8;
    return;
  }
  if (0 < (int)puVar5[10]) {
    lVar8 = 0;
    do {
      FUN_005900cc(*(undefined8 *)(*(long *)(puVar5 + 0xc) + lVar8 * 8));
      lVar8 = lVar8 + 1;
    } while (lVar8 < (int)puVar5[10]);
  }
LAB_005a6fdc:
  puVar10 = &DAT_00b0da18;
  if (DAT_00b0d9f0 != 0) {
    if (DAT_00b103d8 != (undefined4 *)0x0) {
      (*DAT_00b0da70)();
    }
    iVar4 = (*DAT_00b0da28)(puVar5);
    DAT_00b105b8 = DAT_00b105b8 - iVar4;
    DAT_00b10600 = DAT_00b10600 + -1;
    (*DAT_00b0da18)(puVar5);
    if (DAT_00b103d8 == (undefined4 *)0x0) {
      return;
    }
    puVar10 = &DAT_00b0da80;
    puVar5 = DAT_00b103d8;
  }
                    /* WARNING: Could not recover jumptable at 0x005a706c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar10)(puVar5);
  return;
}


// ===== 005a70dc  FUN_005a70dc =====

void FUN_005a70dc(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 0x18));
  }
  puVar2 = &DAT_00b0da18;
  if (DAT_00b0d9f0 != 0) {
    if (DAT_00b103d8 != 0) {
      (*DAT_00b0da70)();
    }
    iVar1 = (*DAT_00b0da28)(param_1);
    DAT_00b105b8 = DAT_00b105b8 - iVar1;
    DAT_00b10600 = DAT_00b10600 + -1;
    (*DAT_00b0da18)(param_1);
    if (DAT_00b103d8 == 0) {
      return;
    }
    puVar2 = &DAT_00b0da80;
    param_1 = DAT_00b103d8;
  }
                    /* WARNING: Could not recover jumptable at 0x005a7188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(param_1);
  return;
}


// ===== 005a719c  sqlite3_rtree_query_callback =====

undefined8
sqlite3_rtree_query_callback
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,code *param_5
          )

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  iVar1 = sqlite3_initialize();
  if ((iVar1 == 0) && (puVar2 = (undefined8 *)FUN_005827b0(0x20), puVar2 != (undefined8 *)0x0)) {
    *puVar2 = 0;
    puVar2[1] = param_3;
    puVar2[2] = param_5;
    puVar2[3] = param_4;
    uVar3 = FUN_0059f310(param_1,param_2,0xffffffff,5,puVar2,FUN_005a6ca8,0,0,0,0,FUN_005a70dc);
    return uVar3;
  }
  if (param_5 != (code *)0x0) {
    (*param_5)(param_4);
  }
  return 7;
}


// ===== 005a725c  sqlite3_sourceid =====

undefined * sqlite3_sourceid(void)

{
  return &DAT_002a7322;
}


// ===== 005a7268  FUN_005a7268 =====

undefined8 FUN_005a7268(void)

{
  return 0;
}


// ===== 005a7270  FUN_005a7270 =====

undefined8 FUN_005a7270(void)

{
  return 0;
}


// ===== 005a7278  FUN_005a7278 =====

pthread_mutex_t * FUN_005a7278(int param_1)

{
  pthread_mutex_t *__mutex;
  pthread_mutexattr_t apStack_28 [2];
  
  if (param_1 == 0) {
    __mutex = (pthread_mutex_t *)FUN_005827b0(0x2c);
    if (__mutex != (pthread_mutex_t *)0x0) {
      *(undefined8 *)((long)&(__mutex->__data).__list.__next + 4) = 0;
      *(undefined8 *)((long)&(__mutex->__data).__list.__prev + 4) = 0;
      *(int *)((long)__mutex + 8) = 0;
      *(uint *)((long)__mutex + 0xc) = 0;
      __mutex->__align = 0;
      (__mutex->__data).__list.__prev = (__pthread_internal_list *)0x0;
      *(int *)((long)__mutex + 0x10) = 0;
      *(int *)((long)__mutex + 0x14) = 0;
      pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
      __mutex[1].__data.__lock = 0;
      return __mutex;
    }
  }
  else {
    if (param_1 != 1) {
      if (param_1 - 0xeU < 0xfffffff4) {
        sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x7557,
                    "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
        return (pthread_mutex_t *)0x0;
      }
      return (pthread_mutex_t *)((ulong)(param_1 - 2) * 0x2c + 0xb0bd40);
    }
    __mutex = (pthread_mutex_t *)FUN_005827b0(0x2c);
    if (__mutex != (pthread_mutex_t *)0x0) {
      *(undefined8 *)((long)&(__mutex->__data).__list.__next + 4) = 0;
      *(undefined8 *)((long)&(__mutex->__data).__list.__prev + 4) = 0;
      *(int *)((long)__mutex + 8) = 0;
      *(uint *)((long)__mutex + 0xc) = 0;
      __mutex->__align = 0;
      (__mutex->__data).__list.__prev = (__pthread_internal_list *)0x0;
      *(int *)((long)__mutex + 0x10) = 0;
      *(int *)((long)__mutex + 0x14) = 0;
      pthread_mutexattr_init(apStack_28);
      pthread_mutexattr_settype(apStack_28,1);
      pthread_mutex_init(__mutex,apStack_28);
      pthread_mutexattr_destroy(apStack_28);
      __mutex[1].__data.__lock = 1;
    }
  }
  return __mutex;
}


// ===== 005a7398  FUN_005a7398 =====

void FUN_005a7398(pthread_mutex_t *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (1 < (uint)param_1[1].__data.__lock) {
    sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x7576,
                "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
    return;
  }
  pthread_mutex_destroy(param_1);
  puVar2 = &DAT_00b0da18;
  if (DAT_00b0d9f0 != 0) {
    if (DAT_00b103d8 != (pthread_mutex_t *)0x0) {
      (*DAT_00b0da70)();
    }
    iVar1 = (*DAT_00b0da28)(param_1);
    DAT_00b105b8 = DAT_00b105b8 - iVar1;
    DAT_00b10600 = DAT_00b10600 + -1;
    (*DAT_00b0da18)(param_1);
    if (DAT_00b103d8 == (pthread_mutex_t *)0x0) {
      return;
    }
    puVar2 = &DAT_00b0da80;
    param_1 = DAT_00b103d8;
  }
                    /* WARNING: Could not recover jumptable at 0x005a7444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(param_1);
  return;
}


// ===== 005a7488  <EXTERNAL>::pthread_mutex_lock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_lock_00b02d70)((int)__mutex);
  return iVar1;
}


// ===== 005a748c  FUN_005a748c =====

undefined4 FUN_005a748c(pthread_mutex_t *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = pthread_mutex_trylock(param_1);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = 5;
  }
  return uVar2;
}


// ===== 005a74ac  <EXTERNAL>::pthread_mutex_unlock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_unlock_00b02d80)((int)__mutex);
  return iVar1;
}


// ===== 005a74b0  FUN_005a74b0 =====

undefined8 FUN_005a74b0(void)

{
  return 0;
}


// ===== 005a74b8  FUN_005a74b8 =====

undefined8 FUN_005a74b8(void)

{
  return 0;
}


// ===== 005a74c0  FUN_005a74c0 =====

undefined8 FUN_005a74c0(void)

{
  return 8;
}


// ===== 005a74c8  FUN_005a74c8 =====

void FUN_005a74c8(void)

{
  return;
}


// ===== 005a74cc  FUN_005a74cc =====

void FUN_005a74cc(void)

{
  return;
}


// ===== 005a74d0  FUN_005a74d0 =====

undefined8 FUN_005a74d0(void)

{
  return 0;
}


// ===== 005a74d8  FUN_005a74d8 =====

void FUN_005a74d8(void)

{
  return;
}


// ===== 005a74dc  FUN_005a74dc =====

void FUN_005a74dc(ulong param_1)

{
  if (0 < DAT_00b103e0) {
    if (DAT_00b103d8 != 0) {
      param_1 = param_1 & 0xffffffff;
      (*DAT_00b0da80)(DAT_00b103d8);
    }
    sqlite3_release_memory(param_1);
    if (DAT_00b103d8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x005a7538. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_00b0da70)();
      return;
    }
  }
  return;
}


// ===== 005a7540  FUN_005a7540 =====

void FUN_005a7540(long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (param_1 != 0) {
    if (param_2 < *(undefined8 **)(param_1 + 0x1e8)) {
      if (*(undefined8 **)(param_1 + 0x1d8) <= param_2) {
        uVar3 = *(undefined8 *)(param_1 + 0x1d0);
        *(undefined8 **)(param_1 + 0x1d0) = param_2;
LAB_005a7640:
        *param_2 = uVar3;
        return;
      }
      if (*(undefined8 **)(param_1 + 0x1e0) <= param_2) {
        uVar3 = *(undefined8 *)(param_1 + 0x1c0);
        *(undefined8 **)(param_1 + 0x1c0) = param_2;
        goto LAB_005a7640;
      }
    }
    if (*(long *)(param_1 + 0x300) != 0) {
      FUN_005a7654();
      return;
    }
  }
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  puVar2 = &DAT_00b0da18;
  if (DAT_00b0d9f0 != 0) {
    if (DAT_00b103d8 != (undefined8 *)0x0) {
      (*DAT_00b0da70)();
    }
    iVar1 = (*DAT_00b0da28)(param_2);
    DAT_00b105b8 = DAT_00b105b8 - iVar1;
    DAT_00b10600 = DAT_00b10600 + -1;
    (*DAT_00b0da18)(param_2);
    if (DAT_00b103d8 == (undefined8 *)0x0) {
      return;
    }
    puVar2 = &DAT_00b0da80;
    param_2 = DAT_00b103d8;
  }
                    /* WARNING: Could not recover jumptable at 0x005a7628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(param_2);
  return;
}


// ===== 005a7654  FUN_005a7654 =====

void FUN_005a7654(long param_1,ulong param_2)

{
  uint uVar1;
  
  if ((param_1 != 0) && (param_2 < *(ulong *)(param_1 + 0x1f0))) {
    if (*(ulong *)(param_1 + 0x1d8) <= param_2) {
      uVar1 = 0x80;
      goto LAB_005a769c;
    }
    if (*(ulong *)(param_1 + 0x1e0) <= param_2) {
      uVar1 = (uint)*(ushort *)(param_1 + 0x19e);
      goto LAB_005a769c;
    }
  }
  uVar1 = (*DAT_00b0da28)(param_2);
LAB_005a769c:
  **(int **)(param_1 + 0x300) = **(int **)(param_1 + 0x300) + uVar1;
  return;
}


// ===== 005a76c8  FUN_005a76c8 =====

undefined8 * FUN_005a76c8(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (*(ushort *)(param_1 + 0x19c) < param_2) {
    if (*(int *)(param_1 + 0x198) == 0) {
      *(int *)(param_1 + 0x1ac) = *(int *)(param_1 + 0x1ac) + 1;
    }
    else if (*(char *)(param_1 + 0x67) != '\0') {
      return (undefined8 *)0x0;
    }
    puVar1 = (undefined8 *)FUN_005a7a28();
    return puVar1;
  }
  if (param_2 < 0x81) {
    puVar1 = *(undefined8 **)(param_1 + 0x1d0);
    if (puVar1 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x1d0) = *puVar1;
      *(int *)(param_1 + 0x1a8) = *(int *)(param_1 + 0x1a8) + 1;
      return puVar1;
    }
    puVar1 = *(undefined8 **)(param_1 + 0x1c8);
    if (puVar1 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x1c8) = *puVar1;
      *(int *)(param_1 + 0x1a8) = *(int *)(param_1 + 0x1a8) + 1;
      return puVar1;
    }
  }
  puVar1 = *(undefined8 **)(param_1 + 0x1c0);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x1c0) = *puVar1;
    *(int *)(param_1 + 0x1a8) = *(int *)(param_1 + 0x1a8) + 1;
    return puVar1;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x1b8);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x1b8) = *puVar1;
    *(int *)(param_1 + 0x1a8) = *(int *)(param_1 + 0x1a8) + 1;
    return puVar1;
  }
  *(int *)(param_1 + 0x1b0) = *(int *)(param_1 + 0x1b0) + 1;
  puVar1 = (undefined8 *)FUN_005a7a28();
  return puVar1;
}


// ===== 005a77a4  FUN_005a77a4 =====

void * FUN_005a77a4(long param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  void *__dest;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  if (*(char *)(param_1 + 0x67) != '\0') {
    return (void *)0x0;
  }
  if ((param_2 < *(undefined8 **)(param_1 + 0x1e0)) ||
     (*(undefined8 **)(param_1 + 0x1f0) <= param_2)) {
    __dest = (void *)FUN_00582b2c(param_2,param_3);
    if (__dest == (void *)0x0) {
      if ((*(char *)(param_1 + 0x67) != '\0') || (*(char *)(param_1 + 0x68) != '\0')) {
        return (void *)0x0;
      }
      *(undefined1 *)(param_1 + 0x67) = 1;
      if (0 < *(int *)(param_1 + 0xdc)) {
        *(undefined4 *)(param_1 + 400) = 1;
      }
      __dest = *(void **)(param_1 + 0x158);
      *(undefined2 *)(param_1 + 0x19c) = 0;
      *(int *)(param_1 + 0x198) = *(int *)(param_1 + 0x198) + 1;
      if (__dest != (void *)0x0) {
        FUN_00595b78(__dest,"out of memory");
        __dest = (void *)0x0;
        lVar2 = *(long *)(*(long *)(param_1 + 0x158) + 0xd8);
        *(undefined4 *)(*(long *)(param_1 + 0x158) + 0x18) = 7;
        for (; lVar2 != 0; lVar2 = *(long *)(lVar2 + 0xd8)) {
          *(undefined4 *)(lVar2 + 0x18) = 7;
          *(int *)(lVar2 + 0x34) = *(int *)(lVar2 + 0x34) + 1;
        }
      }
    }
  }
  else {
    __dest = (void *)FUN_005a76c8(param_1,param_3);
    if (__dest != (void *)0x0) {
      if (param_2 < *(undefined8 **)(param_1 + 0x1d8)) {
        memcpy(__dest,param_2,(ulong)*(ushort *)(param_1 + 0x19e));
      }
      else {
        memcpy(__dest,param_2,0x80);
      }
      if (param_2 == (undefined8 *)0x0) {
        return __dest;
      }
      if (param_2 < *(undefined8 **)(param_1 + 0x1e8)) {
        if (*(undefined8 **)(param_1 + 0x1d8) <= param_2) {
          uVar4 = *(undefined8 *)(param_1 + 0x1d0);
          *(undefined8 **)(param_1 + 0x1d0) = param_2;
          *param_2 = uVar4;
          return __dest;
        }
        if (*(undefined8 **)(param_1 + 0x1e0) <= param_2) {
          uVar4 = *(undefined8 *)(param_1 + 0x1c0);
          *(undefined8 **)(param_1 + 0x1c0) = param_2;
          *param_2 = uVar4;
          return __dest;
        }
      }
      if (*(long *)(param_1 + 0x300) != 0) {
        FUN_005a7654(param_1);
        return __dest;
      }
      puVar3 = &DAT_00b0da18;
      if (DAT_00b0d9f0 != 0) {
        if (DAT_00b103d8 != (undefined8 *)0x0) {
          (*DAT_00b0da70)();
        }
        iVar1 = (*DAT_00b0da28)(param_2);
        DAT_00b105b8 = DAT_00b105b8 - iVar1;
        DAT_00b10600 = DAT_00b10600 + -1;
        (*DAT_00b0da18)(param_2);
        if (DAT_00b103d8 == (undefined8 *)0x0) {
          return __dest;
        }
        puVar3 = &DAT_00b0da80;
        param_2 = DAT_00b103d8;
      }
      (*(code *)*puVar3)(param_2);
      return __dest;
    }
  }
  return __dest;
}


// ===== 005a7a28  FUN_005a7a28 =====

long FUN_005a7a28(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_005827b0(param_2);
  if (((lVar1 == 0) && (*(char *)(param_1 + 0x67) == '\0')) && (*(char *)(param_1 + 0x68) == '\0'))
  {
    *(undefined1 *)(param_1 + 0x67) = 1;
    if (0 < *(int *)(param_1 + 0xdc)) {
      *(undefined4 *)(param_1 + 400) = 1;
    }
    *(undefined2 *)(param_1 + 0x19c) = 0;
    *(int *)(param_1 + 0x198) = *(int *)(param_1 + 0x198) + 1;
    if (*(long *)(param_1 + 0x158) != 0) {
      FUN_00595b78(*(long *)(param_1 + 0x158),"out of memory");
      lVar2 = *(long *)(*(long *)(param_1 + 0x158) + 0xd8);
      *(undefined4 *)(*(long *)(param_1 + 0x158) + 0x18) = 7;
      for (; lVar2 != 0; lVar2 = *(long *)(lVar2 + 0xd8)) {
        *(undefined4 *)(lVar2 + 0x18) = 7;
        *(int *)(lVar2 + 0x34) = *(int *)(lVar2 + 0x34) + 1;
      }
    }
  }
  return lVar1;
}


// ===== 005a7ad8  FUN_005a7ad8 =====

void * FUN_005a7ad8(long *param_1)

{
  void *__dest;
  
  if (*param_1 == 0) {
    __dest = (void *)FUN_005827b0((ulong)*(uint *)(param_1 + 3) + 1);
  }
  else {
    __dest = (void *)FUN_005a76c8(*param_1,(ulong)*(uint *)(param_1 + 3) + 1);
  }
  if (__dest == (void *)0x0) {
    *(undefined1 *)((long)param_1 + 0x1c) = 7;
    if (*(int *)((long)param_1 + 0x14) != 0) {
      if ((*(byte *)((long)param_1 + 0x1d) >> 2 & 1) != 0) {
        FUN_005869c8(*param_1,param_1[1]);
        *(byte *)((long)param_1 + 0x1d) = *(byte *)((long)param_1 + 0x1d) & 0xfb;
      }
      *(undefined4 *)(param_1 + 2) = 0;
      *(undefined4 *)(param_1 + 3) = 0;
      param_1[1] = 0;
      return (void *)0x0;
    }
  }
  else {
    memcpy(__dest,(void *)param_1[1],(ulong)((int)param_1[3] + 1));
    *(byte *)((long)param_1 + 0x1d) = *(byte *)((long)param_1 + 0x1d) | 4;
  }
  param_1[1] = (long)__dest;
  return __dest;
}


// ===== 005a7b90  FUN_005a7b90 =====

undefined * FUN_005a7b90(void)

{
  return &DAT_00ad2570;
}


// ===== 005a7b9c  FUN_005a7b9c =====

undefined8 FUN_005a7b9c(long param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + 0x10);
  FUN_005a9ee4();
  FUN_005a880c(param_1,0);
  if (DAT_00b10378 != 0) {
    (*DAT_00b0da70)();
  }
  if (*(long *)(lVar7 + 0x10) != 0) {
    (*DAT_00b0da70)();
  }
  if (*(int *)(lVar7 + 0x1c) != 0) {
    lVar5 = *(long *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28);
    *(long *)(*(long *)(param_1 + 0x10) + 0x28) = lVar5;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(lVar5 + 8) = uVar6;
  }
  if (*(long *)(lVar7 + 0x10) != 0) {
    (*DAT_00b0da80)();
  }
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 != 0) {
    iVar3 = *(int *)(lVar7 + 0x30) + -1;
    *(int *)(lVar7 + 0x30) = iVar3;
    if (iVar3 == 0) {
      if (*(long *)(lVar7 + 0x10) != 0) {
        (*DAT_00b0da70)();
      }
      FUN_005aa4cc(param_1);
      if (*(long *)(lVar7 + 0x10) != 0) {
        (*DAT_00b0da80)();
      }
      lVar5 = *(long *)(lVar7 + 0x40);
      lVar2 = *(long *)(lVar7 + 0x48);
      plVar1 = &DAT_00b10388;
      if (lVar2 != 0) {
        plVar1 = (long *)(lVar2 + 0x40);
      }
      *plVar1 = lVar5;
      if (lVar5 != 0) {
        *(long *)(lVar5 + 0x48) = lVar2;
      }
      if (*(long *)(lVar7 + 0x10) != 0) {
        (*DAT_00b0da68)();
      }
      puVar4 = &DAT_00b0da18;
      if (DAT_00b0d9f0 != 0) {
        if (DAT_00b103d8 != 0) {
          (*DAT_00b0da70)();
        }
        iVar3 = (*DAT_00b0da28)(lVar7);
        DAT_00b105b8 = DAT_00b105b8 - iVar3;
        DAT_00b10600 = DAT_00b10600 + -1;
        (*DAT_00b0da18)(lVar7);
        if (DAT_00b103d8 == 0) goto LAB_005a7d20;
        puVar4 = &DAT_00b0da80;
        lVar7 = DAT_00b103d8;
      }
      (*(code *)*puVar4)(lVar7);
    }
  }
LAB_005a7d20:
  FUN_005a9fb0(param_1);
  if (DAT_00b10378 != 0) {
    (*DAT_00b0da80)();
  }
  return 0;
}


// ===== 005a7d50  FUN_005a7d50 =====

/* WARNING: Removing unreachable block (ram,0x005a7df8) */

undefined8 FUN_005a7d50(long param_1,void *param_2,uint param_3,long param_4)

{
  uint uVar1;
  int *piVar2;
  long lVar3;
  size_t __n;
  void *pvVar4;
  int iVar5;
  uint uVar6;
  
  lVar3 = *(long *)(param_1 + 0x50);
  if (lVar3 - param_4 != 0 && param_4 <= lVar3) {
    if ((int)param_3 + param_4 <= lVar3) {
      memcpy(param_2,(void *)(*(long *)(param_1 + 0x68) + param_4),(long)(int)param_3);
      return 0;
    }
    iVar5 = (int)(lVar3 - param_4);
    __n = (size_t)iVar5;
    memcpy(param_2,(void *)(*(long *)(param_1 + 0x68) + param_4),__n);
    param_2 = (void *)((long)param_2 + __n);
    param_3 = param_3 - iVar5;
    param_4 = __n + param_4;
  }
  uVar1 = (*(code *)PTR_pread_00b0df28)
                    (*(undefined4 *)(param_1 + 0x18),param_2,(long)(int)param_3,param_4);
  if (param_3 != uVar1) {
    iVar5 = 0;
    pvVar4 = param_2;
    uVar6 = param_3;
    do {
      if ((int)uVar1 < 0) {
        piVar2 = (int *)__errno();
        if (*piVar2 != 4) {
          *(int *)(param_1 + 0x20) = *piVar2;
          goto joined_r0x005a7ea4;
        }
      }
      else {
        if (uVar1 == 0) {
          uVar6 = 0;
          break;
        }
        uVar6 = uVar6 - uVar1;
        iVar5 = iVar5 + uVar1;
        param_4 = param_4 + (ulong)uVar1;
        pvVar4 = (void *)((long)pvVar4 + (ulong)uVar1);
      }
      uVar1 = (*(code *)PTR_pread_00b0df28)
                        (*(undefined4 *)(param_1 + 0x18),pvVar4,(long)(int)uVar6,param_4);
    } while (uVar6 != uVar1);
    uVar1 = iVar5 + uVar6;
joined_r0x005a7ea4:
    if (param_3 - uVar1 != 0) {
      if (-1 < (int)uVar1) {
        *(undefined4 *)(param_1 + 0x20) = 0;
        memset((void *)((long)param_2 + (ulong)uVar1),0,(long)(int)(param_3 - uVar1));
        return 0x20a;
      }
      if ((*(uint *)(param_1 + 0x20) < 0x23) &&
         ((1L << ((ulong)*(uint *)(param_1 + 0x20) & 0x3f) & 0x400000060U) != 0)) {
        return 0x210a;
      }
      return 0x10a;
    }
  }
  return 0;
}


// ===== 005a7f14  FUN_005a7f14 =====

undefined8 FUN_005a7f14(long param_1,long param_2,uint param_3,long param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  while( true ) {
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    while (uVar3 = (*(code *)PTR_pwrite_00b0df70)(uVar1,param_2,param_3 & 0x1ffff,param_4),
          (int)uVar3 < 0) {
      piVar4 = (int *)__errno();
      iVar2 = *piVar4;
      if (iVar2 != 4) {
        *(int *)(param_1 + 0x20) = iVar2;
        if ((int)param_3 <= (int)uVar3) {
          return 0;
        }
        if (iVar2 != 0x1c) {
          return 0x30a;
        }
        goto LAB_005a7fb0;
      }
    }
    if ((param_3 - uVar3 == 0 || (int)param_3 < (int)uVar3) || (uVar3 == 0)) break;
    param_4 = (ulong)uVar3 + param_4;
    param_2 = param_2 + (ulong)uVar3;
    param_3 = param_3 - uVar3;
  }
  if ((int)param_3 <= (int)uVar3) {
    return 0;
  }
LAB_005a7fb0:
  *(undefined4 *)(param_1 + 0x20) = 0;
  return 0xd;
}


// ===== 005a8018  FUN_005a8018 =====

undefined8 FUN_005a8018(long param_1,long param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  int *piVar5;
  ulong uVar6;
  
  uVar6 = (ulong)*(uint *)(param_1 + 0x48);
  if (0 < (int)*(uint *)(param_1 + 0x48)) {
    lVar3 = 0;
    if (uVar6 != 0) {
      lVar3 = (long)(param_2 + uVar6 + -1) / (long)uVar6;
    }
    param_2 = lVar3 * uVar6;
  }
  if (0x7fffffff < param_2) {
LAB_005a8058:
    if (*(long *)(param_1 + 0x50) <= param_2) {
      return 0;
    }
    *(long *)(param_1 + 0x50) = param_2;
    return 0;
  }
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  do {
    iVar4 = (*(code *)PTR_ftruncate_00b0dee0)(uVar2,param_2);
    if (-1 < iVar4) {
      if (iVar4 == 0) goto LAB_005a8058;
      piVar5 = (int *)__errno();
      break;
    }
    piVar5 = (int *)__errno();
  } while (*piVar5 == 4);
  iVar4 = *piVar5;
  puVar1 = &DAT_002a8138;
  if (*(undefined1 **)(param_1 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_1 + 0x38);
  }
  *(int *)(param_1 + 0x20) = iVar4;
  sqlite3_log(0x60a,"os_unix.c:%d: (%d) %s(%s) - %s",0xa6a8,iVar4,"ftruncate",puVar1);
  return 0x60a;
}


// ===== 005a8120  FUN_005a8120 =====

undefined8 FUN_005a8120(long param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  int local_24;
  
  iVar3 = fsync(*(int *)(param_1 + 0x18));
  if (iVar3 != 0) {
    puVar4 = (undefined4 *)__errno();
    uVar2 = *puVar4;
    puVar1 = &DAT_002a8138;
    if (*(undefined1 **)(param_1 + 0x38) != (undefined1 *)0x0) {
      puVar1 = *(undefined1 **)(param_1 + 0x38);
    }
    *(undefined4 *)(param_1 + 0x20) = uVar2;
    sqlite3_log(0x40a,"os_unix.c:%d: (%d) %s(%s) - %s",0xa67b,uVar2,"full_fsync",puVar1);
    return 0x40a;
  }
  if ((*(ushort *)(param_1 + 0x1e) >> 3 & 1) == 0) {
    return 0;
  }
  iVar3 = (*(code *)PTR_FUN_00b0dfe8)(*(undefined8 *)(param_1 + 0x38),&local_24);
  if (iVar3 == 0) {
    fsync(local_24);
    iVar3 = (*(code *)PTR_close_00b0de68)(local_24);
    if (iVar3 != 0) {
      puVar5 = *(undefined1 **)(param_1 + 0x38);
      puVar4 = (undefined4 *)__errno();
      puVar1 = &DAT_002a8138;
      if (puVar5 != (undefined1 *)0x0) {
        puVar1 = puVar5;
      }
      sqlite3_log(0x100a,"os_unix.c:%d: (%d) %s(%s) - %s",0xa689,*puVar4,"close",puVar1);
    }
  }
  *(ushort *)(param_1 + 0x1e) = *(ushort *)(param_1 + 0x1e) & 0xfff7;
  return 0;
}


// ===== 005a8244  FUN_005a8244 =====

undefined8 FUN_005a8244(long param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined1 auStack_a0 [48];
  long local_70;
  
  uVar2 = (*(code *)PTR_fstat_00b0dec8)(*(undefined4 *)(param_1 + 0x18),auStack_a0);
  if ((int)uVar2 != 0) {
    puVar3 = (undefined4 *)__errno();
    *(undefined4 *)(param_1 + 0x20) = *puVar3;
    return 0x70a;
  }
  lVar1 = 0;
  if (local_70 != 1) {
    lVar1 = local_70;
  }
  *param_2 = lVar1;
  return uVar2;
}


// ===== 005a82b8  FUN_005a82b8 =====

ulong FUN_005a82b8(long param_1,int param_2)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  uint *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  byte bVar10;
  ushort local_90;
  undefined2 local_8e;
  long local_88;
  undefined8 local_80;
  undefined4 local_70 [2];
  long local_68;
  undefined8 uStack_60;
  
  bVar10 = *(byte *)(param_1 + 0x1c);
  if (param_2 <= (int)(uint)bVar10) {
    return 0;
  }
  lVar8 = *(long *)(param_1 + 0x10);
  if (*(long *)(lVar8 + 0x10) != 0) {
    (*DAT_00b0da70)();
    bVar10 = *(byte *)(param_1 + 0x1c);
  }
  bVar2 = *(byte *)(lVar8 + 0x20);
  if ((bVar10 != bVar2) && ((uVar4 = 5, 1 < param_2 || (2 < bVar2)))) goto LAB_005a856c;
  if (param_2 == 1) {
    if (bVar2 - 1 < 2) {
      uVar4 = 0;
      *(undefined1 *)(param_1 + 0x1c) = 1;
      *(ulong *)(lVar8 + 0x18) =
           CONCAT44((int)((ulong)*(undefined8 *)(lVar8 + 0x18) >> 0x20) + 1,
                    (int)*(undefined8 *)(lVar8 + 0x18) + 1);
      goto LAB_005a856c;
    }
LAB_005a842c:
    local_80 = 1;
    local_8e = 0;
    local_88 = (long)DAT_00b0d530;
    local_90 = (ushort)(param_2 != 1);
    if ((*(ushort *)(param_1 + 0x1e) & 3) != 1) {
      iVar3 = (*(code *)PTR_fcntl_00b0def8)(*(undefined4 *)(param_1 + 0x18),6,&local_90);
LAB_005a84bc:
      if (iVar3 != 0) goto LAB_005a84c0;
LAB_005a8504:
      if (param_2 == 4) {
        *(undefined1 *)(param_1 + 0x1c) = 3;
        *(undefined1 *)(lVar8 + 0x20) = 3;
        iVar3 = *(int *)(lVar8 + 0x18);
        goto joined_r0x005a8520;
      }
      if (param_2 != 1) goto LAB_005a8398;
      local_88 = (long)DAT_00b0d530 + 2;
      local_80 = 0x1fe;
      if ((*(ushort *)(param_1 + 0x1e) & 3) == 1) {
        lVar9 = *(long *)(param_1 + 0x10);
        bVar10 = 1;
        if (*(char *)(lVar9 + 0x21) == '\0') {
          uStack_60 = 0x1fe;
          local_70[0] = 1;
          local_68 = local_88;
          uVar4 = (*(code *)PTR_fcntl_00b0def8)(*(undefined4 *)(param_1 + 0x18),6,local_70);
          if (-1 < (int)uVar4) {
            *(undefined1 *)(lVar9 + 0x21) = 1;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            if ((int)uVar4 == 0) goto LAB_005a86f4;
          }
LAB_005a866c:
          puVar5 = (uint *)__errno();
          uVar7 = *puVar5;
          bVar10 = 0;
          uVar4 = 5;
          if (uVar7 < 0x26) {
            if ((1L << ((ulong)uVar7 & 0x3f) & 0x2000012810U) == 0) {
              if ((ulong)uVar7 != 1) goto LAB_005a87a4;
              bVar10 = 0;
              uVar4 = 3;
            }
          }
          else {
LAB_005a87a4:
            if (uVar7 != 0x6e) {
              bVar10 = 0;
              uVar4 = 0xf0a;
            }
          }
        }
        else {
          uVar4 = 0;
          uVar7 = 0;
        }
      }
      else {
        uVar4 = (*(code *)PTR_fcntl_00b0def8)(*(undefined4 *)(param_1 + 0x18),6,&local_90);
        if ((int)uVar4 != 0) goto LAB_005a866c;
LAB_005a86f4:
        uVar7 = 0;
        bVar10 = 1;
      }
      local_88 = (long)DAT_00b0d530;
      local_80 = 1;
      local_90 = 2;
      if ((*(ushort *)(param_1 + 0x1e) & 3) == 1) {
        lVar9 = *(long *)(param_1 + 0x10);
        if (*(char *)(lVar9 + 0x21) == '\0') {
          local_68 = local_88 + 2;
          uStack_60 = 0x1fe;
          local_70[0] = 1;
          iVar3 = (*(code *)PTR_fcntl_00b0def8)(*(undefined4 *)(param_1 + 0x18),6,local_70);
          if (iVar3 < 0) {
            iVar3 = 1;
          }
          else {
            *(undefined1 *)(lVar9 + 0x21) = 1;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          }
          goto LAB_005a87c0;
        }
      }
      else {
        iVar3 = (*(code *)PTR_fcntl_00b0def8)(*(undefined4 *)(param_1 + 0x18),6,&local_90);
LAB_005a87c0:
        uVar4 = uVar4 & 0xffffffff;
        bVar1 = (bool)(bVar10 ^ 1);
        if (iVar3 == 0) {
          bVar1 = true;
        }
        if (!bVar1) {
          puVar6 = (undefined4 *)__errno();
          uVar4 = 0x80a;
          *(undefined4 *)(param_1 + 0x20) = *puVar6;
          goto LAB_005a856c;
        }
      }
      if ((int)uVar4 != 0) {
        if ((int)uVar4 != 5) {
          *(uint *)(param_1 + 0x20) = uVar7;
        }
        goto LAB_005a856c;
      }
      *(undefined4 *)(lVar8 + 0x18) = 1;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
LAB_005a8560:
      uVar4 = 0;
      *(char *)(param_1 + 0x1c) = (char)param_2;
      *(char *)(lVar8 + 0x20) = (char)param_2;
      goto LAB_005a856c;
    }
    lVar9 = *(long *)(param_1 + 0x10);
    if (*(char *)(lVar9 + 0x21) != '\0') goto LAB_005a8504;
    local_68 = local_88 + 2;
    uStack_60 = 0x1fe;
    local_70[0] = 1;
    iVar3 = (*(code *)PTR_fcntl_00b0def8)(*(undefined4 *)(param_1 + 0x18),6,local_70);
    if (-1 < iVar3) {
      *(undefined1 *)(lVar9 + 0x21) = 1;
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      goto LAB_005a84bc;
    }
LAB_005a84c0:
    puVar5 = (uint *)__errno();
    uVar7 = *puVar5;
    uVar4 = 5;
    if (uVar7 < 0x26) {
      if ((1L << ((ulong)uVar7 & 0x3f) & 0x2000012810U) != 0) goto LAB_005a856c;
      if ((ulong)uVar7 != 1) goto LAB_005a85f0;
LAB_005a84f8:
      uVar4 = 3;
      *(uint *)(param_1 + 0x20) = uVar7;
      goto LAB_005a856c;
    }
  }
  else {
    local_8e = 0;
    local_80 = 1;
    if (param_2 == 4) {
      if (bVar10 == 2) goto LAB_005a842c;
      iVar3 = *(int *)(lVar8 + 0x18);
joined_r0x005a8520:
      if (1 < iVar3) {
        uVar4 = 5;
        goto LAB_005a856c;
      }
LAB_005a8534:
      local_88 = (long)(DAT_00b0d530 + 2);
      local_80 = 0x1fe;
      if ((*(ushort *)(param_1 + 0x1e) & 3) != 1) goto LAB_005a83c8;
LAB_005a8554:
      local_90 = 1;
      lVar9 = *(long *)(param_1 + 0x10);
      if (*(char *)(lVar9 + 0x21) != '\0') goto LAB_005a8560;
      local_68 = (long)(DAT_00b0d530 + 2);
      local_70[0] = 1;
      uStack_60 = 0x1fe;
      iVar3 = (*(code *)PTR_fcntl_00b0def8)(*(undefined4 *)(param_1 + 0x18),6,local_70);
      if (-1 < iVar3) {
        *(undefined1 *)(lVar9 + 0x21) = 1;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        goto joined_r0x005a8648;
      }
    }
    else {
LAB_005a8398:
      if (param_2 != 2) goto LAB_005a8534;
      local_88 = (long)(DAT_00b0d530 + 1);
      local_80 = 1;
      if ((*(ushort *)(param_1 + 0x1e) & 3) == 1) goto LAB_005a8554;
LAB_005a83c8:
      local_90 = 1;
      iVar3 = (*(code *)PTR_fcntl_00b0def8)(*(undefined4 *)(param_1 + 0x18),6,&local_90);
joined_r0x005a8648:
      if (iVar3 == 0) goto LAB_005a8560;
    }
    puVar5 = (uint *)__errno();
    uVar7 = *puVar5;
    uVar4 = 5;
    if (uVar7 < 0x26) {
      if ((1L << ((ulong)uVar7 & 0x3f) & 0x2000012810U) != 0) goto LAB_005a856c;
      if ((ulong)uVar7 == 1) goto LAB_005a84f8;
    }
  }
LAB_005a85f0:
  uVar4 = 5;
  if (uVar7 != 0x6e) {
    uVar4 = 0xf0a;
    *(uint *)(param_1 + 0x20) = uVar7;
  }
LAB_005a856c:
  if (*(long *)(lVar8 + 0x10) != 0) {
    uVar4 = uVar4 & 0xffffffff;
    (*DAT_00b0da80)(*(long *)(lVar8 + 0x10));
  }
  return uVar4;
}


// ===== 005a880c  FUN_005a880c =====

int FUN_005a880c(long param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  long lVar5;
  long lVar6;
  undefined4 local_80 [2];
  long local_78;
  undefined8 uStack_70;
  undefined4 local_60 [2];
  long local_58;
  undefined8 uStack_50;
  
  bVar1 = *(byte *)(param_1 + 0x1c);
  if ((int)(uint)bVar1 <= param_2) {
    return 0;
  }
  lVar5 = *(long *)(param_1 + 0x10);
  if (*(long *)(lVar5 + 0x10) != 0) {
    (*DAT_00b0da70)();
    bVar1 = *(byte *)(param_1 + 0x1c);
  }
  if (1 < bVar1) {
    lVar6 = *(long *)(param_1 + 0x10);
    if (param_2 == 1) {
      local_80[0] = 0;
      local_78 = (long)DAT_00b0d530 + 2;
      uStack_70 = 0x1fe;
      if ((*(ushort *)(param_1 + 0x1e) & 3) == 1) {
        if (*(char *)(lVar6 + 0x21) != '\0') goto LAB_005a8918;
        uStack_50 = 0x1fe;
        local_60[0] = 1;
        local_58 = local_78;
        iVar3 = (*(code *)PTR_fcntl_00b0def8)(*(undefined4 *)(param_1 + 0x18),6,local_60);
        if (-1 < iVar3) {
          *(undefined1 *)(lVar6 + 0x21) = 1;
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          goto LAB_005a88fc;
        }
      }
      else {
        iVar3 = (*(code *)PTR_fcntl_00b0def8)(*(undefined4 *)(param_1 + 0x18),6,local_80);
LAB_005a88fc:
        if (iVar3 == 0) {
          lVar6 = *(long *)(param_1 + 0x10);
          goto LAB_005a8918;
        }
      }
      puVar4 = (undefined4 *)__errno();
      iVar3 = 0x90a;
    }
    else {
LAB_005a8918:
      local_78 = (long)DAT_00b0d530;
      local_80[0] = 2;
      uStack_70 = 2;
      if ((*(ushort *)(param_1 + 0x1e) & 3) == 1) {
        if (*(char *)(lVar6 + 0x21) != '\0') goto LAB_005a89c0;
        local_58 = (long)(DAT_00b0d530 + 2);
        local_60[0] = 1;
        uStack_50 = 0x1fe;
        iVar3 = (*(code *)PTR_fcntl_00b0def8)(*(undefined4 *)(param_1 + 0x18),6,local_60);
        if (-1 < iVar3) {
          *(undefined1 *)(lVar6 + 0x21) = 1;
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          goto LAB_005a89a4;
        }
      }
      else {
        iVar3 = (*(code *)PTR_fcntl_00b0def8)(*(undefined4 *)(param_1 + 0x18),6,local_80);
LAB_005a89a4:
        if (iVar3 == 0) {
LAB_005a89c0:
          *(undefined1 *)(lVar5 + 0x20) = 1;
          goto LAB_005a89c8;
        }
      }
      puVar4 = (undefined4 *)__errno();
      iVar3 = 0x80a;
    }
    *(undefined4 *)(param_1 + 0x20) = *puVar4;
    goto LAB_005a8ac4;
  }
LAB_005a89c8:
  if (param_2 != 0) {
    iVar3 = 0;
    goto LAB_005a8ac4;
  }
  iVar3 = *(int *)(lVar5 + 0x18) + -1;
  *(int *)(lVar5 + 0x18) = iVar3;
  if (iVar3 == 0) {
    local_78 = 0;
    uStack_70 = 0;
    local_80[0] = 2;
    if ((*(ushort *)(param_1 + 0x1e) & 3) == 1) {
      lVar6 = *(long *)(param_1 + 0x10);
      if (*(char *)(lVar6 + 0x21) != '\0') goto LAB_005a8a9c;
      local_58 = (long)DAT_00b0d530 + 2;
      local_60[0] = 1;
      uStack_50 = 0x1fe;
      iVar3 = (*(code *)PTR_fcntl_00b0def8)(*(undefined4 *)(param_1 + 0x18),6,local_60);
      if (-1 < iVar3) {
        *(undefined1 *)(lVar6 + 0x21) = 1;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        goto LAB_005a8a78;
      }
    }
    else {
      iVar3 = (*(code *)PTR_fcntl_00b0def8)(*(undefined4 *)(param_1 + 0x18),6,local_80);
LAB_005a8a78:
      if (iVar3 == 0) {
LAB_005a8a9c:
        iVar3 = 0;
        *(undefined1 *)(lVar5 + 0x20) = 0;
        goto LAB_005a8aa4;
      }
    }
    puVar4 = (undefined4 *)__errno();
    iVar3 = 0x80a;
    *(undefined4 *)(param_1 + 0x20) = *puVar4;
    *(undefined1 *)(lVar5 + 0x20) = 0;
    *(undefined1 *)(param_1 + 0x1c) = 0;
  }
  else {
    iVar3 = 0;
  }
LAB_005a8aa4:
  iVar2 = *(int *)(lVar5 + 0x1c) + -1;
  *(int *)(lVar5 + 0x1c) = iVar2;
  if (iVar2 == 0) {
    FUN_005aa4cc(param_1);
  }
LAB_005a8ac4:
  if (*(long *)(lVar5 + 0x10) != 0) {
    (*DAT_00b0da80)(*(long *)(lVar5 + 0x10));
  }
  if (iVar3 != 0) {
    return iVar3;
  }
  *(char *)(param_1 + 0x1c) = (char)param_2;
  return 0;
}


// ===== 005a8b1c  FUN_005a8b1c =====

undefined4 FUN_005a8b1c(long param_1,uint *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 local_50 [2];
  long local_48;
  undefined8 uStack_40;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (*(long *)(lVar3 + 0x10) != 0) {
    (*DAT_00b0da70)();
    lVar3 = *(long *)(param_1 + 0x10);
  }
  if (*(byte *)(lVar3 + 0x20) < 2) {
    if (*(char *)(lVar3 + 0x21) == '\0') {
      local_50[0] = 1;
      local_48 = (long)DAT_00b0d530 + 1;
      uStack_40 = 1;
      iVar1 = (*(code *)PTR_fcntl_00b0def8)(*(undefined4 *)(param_1 + 0x18),5,local_50);
      if (iVar1 == 0) {
        uVar4 = 0;
        uVar5 = (uint)((short)local_50[0] != 2);
        lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
      }
      else {
        puVar2 = (undefined4 *)__errno();
        uVar5 = 0;
        uVar4 = 0xe0a;
        *(undefined4 *)(param_1 + 0x20) = *puVar2;
        lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
      }
      goto joined_r0x005a8c24;
    }
    uVar5 = 0;
    lVar3 = *(long *)(lVar3 + 0x10);
  }
  else {
    uVar5 = 1;
    lVar3 = *(long *)(lVar3 + 0x10);
  }
  uVar4 = 0;
joined_r0x005a8c24:
  if (lVar3 != 0) {
    (*DAT_00b0da80)();
  }
  *param_2 = uVar5;
  return uVar4;
}


// ===== 005a8c2c  FUN_005a8c2c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_005a8c2c(long param_1,int param_2,uint *param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  int *piVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 local_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long local_b0;
  int local_a8;
  
  lVar11 = DAT_00b0db20;
  uVar5 = 0xc;
  if (param_2 < 0xd) {
    if (5 < param_2) {
      if (param_2 == 6) {
        uVar5 = 0;
        *(uint *)(param_1 + 0x48) = *param_3;
      }
      else if (param_2 == 10) {
        if ((int)*param_3 < 0) {
          uVar5 = 0;
          *param_3 = *(ushort *)(param_1 + 0x1e) >> 2 & 1;
        }
        else {
          uVar5 = 0;
          if (*param_3 == 0) {
            *(ushort *)(param_1 + 0x1e) = *(ushort *)(param_1 + 0x1e) & 0xfffb;
          }
          else {
            *(ushort *)(param_1 + 0x1e) = *(ushort *)(param_1 + 0x1e) | 4;
          }
        }
      }
      else if (param_2 == 0xc) {
        uVar7 = sqlite3_mprintf(&DAT_002ad0ce,*(undefined8 *)(*(long *)(param_1 + 8) + 0x18));
        uVar5 = 0;
        *(undefined8 *)param_3 = uVar7;
      }
      goto LAB_005a90b0;
    }
    if (param_2 == 1) {
      uVar5 = 0;
      *param_3 = (uint)*(byte *)(param_1 + 0x1c);
      goto LAB_005a90b0;
    }
    if (param_2 == 4) {
      uVar5 = 0;
      *param_3 = *(uint *)(param_1 + 0x20);
      goto LAB_005a90b0;
    }
    if (param_2 != 5) goto LAB_005a90b0;
    lVar11 = *(long *)param_3;
    if (0 < *(int *)(param_1 + 0x48)) {
      iVar3 = (*(code *)PTR_fstat_00b0dec8)(*(undefined4 *)(param_1 + 0x18),&local_e0);
      if (iVar3 != 0) {
        uVar5 = 0x70a;
        goto LAB_005a90b0;
      }
      lVar10 = (long)*(int *)(param_1 + 0x48);
      lVar12 = 0;
      if (lVar10 != 0) {
        lVar12 = (lVar11 + lVar10 + -1) / lVar10;
      }
      lVar12 = lVar12 * lVar10;
      if (lVar12 - local_b0 != 0 && local_b0 <= lVar12) {
        lVar13 = (long)local_a8;
        lVar10 = 0;
        if (lVar13 != 0) {
          lVar10 = local_b0 / lVar13;
        }
        for (lVar10 = local_b0 + lVar13 + ~(local_b0 - lVar10 * lVar13);
            lVar10 < lVar12 + -1 + lVar13; lVar10 = lVar10 + lVar13) {
          uVar2 = *(undefined4 *)(param_1 + 0x18);
          if (lVar12 <= lVar10) {
            lVar10 = lVar12 + -1;
          }
          while (iVar3 = (*(code *)PTR_pwrite_00b0df70)(uVar2,&DAT_002a8138,1,lVar10), iVar3 < 0) {
            piVar8 = (int *)__errno();
            if (*piVar8 != 4) {
              *(int *)(param_1 + 0x20) = *piVar8;
              uVar5 = 0x30a;
              goto LAB_005a90b0;
            }
          }
          if (iVar3 != 1) {
            uVar5 = 0x30a;
            goto LAB_005a90b0;
          }
        }
      }
    }
    if ((0 < *(long *)(param_1 + 0x60)) && (*(long *)(param_1 + 0x50) < lVar11)) {
      if ((*(int *)(param_1 + 0x48) < 1) && (lVar11 < 0x80000000)) {
        uVar2 = *(undefined4 *)(param_1 + 0x18);
        do {
          iVar3 = (*(code *)PTR_ftruncate_00b0dee0)(uVar2,lVar11);
          if (-1 < iVar3) {
            if (iVar3 == 0) goto LAB_005a9044;
            piVar8 = (int *)__errno(param_1);
            iVar3 = *piVar8;
            break;
          }
          piVar8 = (int *)__errno();
          iVar3 = *piVar8;
        } while (iVar3 == 4);
        puVar1 = &DAT_002a8138;
        if (*(undefined1 **)(param_1 + 0x38) != (undefined1 *)0x0) {
          puVar1 = *(undefined1 **)(param_1 + 0x38);
        }
        *(int *)(param_1 + 0x20) = iVar3;
        uVar5 = 0x60a;
        sqlite3_log(0x60a,"os_unix.c:%d: (%d) %s(%s) - %s",0xa721,iVar3,"ftruncate",puVar1);
      }
      else {
LAB_005a9044:
        uVar5 = FUN_005aa92c(param_1,lVar11);
      }
      goto LAB_005a90b0;
    }
  }
  else if (param_2 < 0x14) {
    if (param_2 == 0xd) {
      if ((int)*param_3 < 0) {
        uVar5 = 0;
        *param_3 = *(ushort *)(param_1 + 0x1e) >> 4 & 1;
      }
      else {
        uVar5 = 0;
        if (*param_3 == 0) {
          *(ushort *)(param_1 + 0x1e) = *(ushort *)(param_1 + 0x1e) & 0xffef;
        }
        else {
          *(ushort *)(param_1 + 0x1e) = *(ushort *)(param_1 + 0x1e) | 0x10;
        }
      }
      goto LAB_005a90b0;
    }
    if (param_2 == 0x10) {
      iVar3 = *(int *)(*(long *)(param_1 + 8) + 8);
      iVar4 = sqlite3_initialize();
      if ((iVar4 == 0) && (lVar11 = FUN_005827b0((long)iVar3), lVar11 != 0)) {
        FUN_005aa614(*(undefined4 *)(*(long *)(param_1 + 8) + 8),lVar11);
        uVar5 = 0;
        *(long *)param_3 = lVar11;
        goto LAB_005a90b0;
      }
    }
    else {
      if (param_2 != 0x12) goto LAB_005a90b0;
      lVar12 = *(long *)param_3;
      lVar10 = *(long *)(param_1 + 0x60);
      uVar5 = 0;
      *(long *)param_3 = lVar10;
      if (lVar11 <= lVar12) {
        lVar12 = lVar11;
      }
      if ((lVar12 < 0) || (lVar12 == lVar10)) goto LAB_005a90b0;
      if (*(int *)(param_1 + 0x4c) == 0) {
        *(long *)(param_1 + 0x60) = lVar12;
        if (0 < *(long *)(param_1 + 0x50)) {
          if (*(long *)(param_1 + 0x68) != 0) {
            (*(code *)PTR_munmap_00b0e078)
                      (*(long *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x58));
            *(undefined8 *)(param_1 + 0x68) = 0;
            *(long *)(param_1 + 0x50) = 0;
            *(undefined8 *)(param_1 + 0x58) = 0;
          }
          uVar6 = FUN_005aa92c(param_1,0xffffffffffffffff);
          return uVar6;
        }
      }
    }
  }
  else {
    if (param_2 == 0x14) {
      uVar6 = *(ulong *)(param_1 + 0x10);
      if (uVar6 != 0) {
        iVar3 = (*(code *)PTR_stat_00b0deb0)(*(undefined8 *)(param_1 + 0x38),&local_e0);
        if (iVar3 == 0) {
          uVar6 = (ulong)(lStack_d8 != *(long *)(*(long *)(param_1 + 0x10) + 8));
        }
        else {
          uVar6 = 1;
        }
      }
      uVar5 = 0;
      *param_3 = (uint)uVar6;
      goto LAB_005a90b0;
    }
    if (param_2 != 0x28) {
      if (param_2 == 0x2b) {
        (*(code *)PTR_close_00b0de68)(*(undefined4 *)(param_1 + 0x18));
        uVar5 = 0;
        *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
      }
      goto LAB_005a90b0;
    }
    plVar9 = *(long **)(param_1 + 0x40);
    *param_3 = 0;
    if (plVar9 != (long *)0x0) {
      lVar11 = *plVar9;
      uStack_c8 = 0;
      uStack_d0 = _UNK_0029f5e8;
      lStack_d8 = _DAT_0029f5e0;
      local_e0 = 1;
      if (*(long *)(lVar11 + 8) != 0) {
        (*DAT_00b0da70)();
      }
      iVar3 = (*(code *)PTR_fcntl_00b0def8)(*(undefined4 *)(lVar11 + 0x18),5,&local_e0);
      if (iVar3 < 0) {
        uVar5 = 0xf0a;
      }
      else {
        uVar5 = 0;
        *param_3 = (uint)((short)local_e0 != 2);
      }
      if (*(long *)(lVar11 + 8) != 0) {
        (*DAT_00b0da80)();
      }
      goto LAB_005a90b0;
    }
  }
  uVar5 = 0;
LAB_005a90b0:
  return (ulong)uVar5;
}


// ===== 005a916c  FUN_005a916c =====

int FUN_005a916c(long param_1)

{
  if (*(int *)(param_1 + 0x70) != 0) {
    return *(int *)(param_1 + 0x70);
  }
  *(undefined4 *)(param_1 + 0x70) = 0x1000;
  *(uint *)(param_1 + 0x74) =
       *(uint *)(param_1 + 0x74) | (*(ushort *)(param_1 + 0x1e) & 0x10) << 8 | 0x8000;
  return 0x1000;
}


// ===== 005a91a4  FUN_005a91a4 =====

uint FUN_005a91a4(long param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x70) != 0) {
    return *(uint *)(param_1 + 0x74);
  }
  uVar1 = *(uint *)(param_1 + 0x74) | (*(ushort *)(param_1 + 0x1e) & 0x10) << 8 | 0x8000;
  *(undefined4 *)(param_1 + 0x70) = 0x1000;
  *(uint *)(param_1 + 0x74) = uVar1;
  return uVar1;
}


// ===== 005a91dc  FUN_005a91dc =====

int FUN_005a91dc(long param_1,int param_2,int param_3,int param_4,undefined8 *param_5)

{
  long *plVar1;
  int iVar2;
  undefined1 *puVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  int *piVar10;
  void *pvVar11;
  undefined4 *puVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  uint uVar16;
  undefined1 *puVar17;
  long lVar18;
  size_t sVar19;
  undefined4 uVar20;
  long *__s;
  char *__s_00;
  undefined1 auStack_e0 [16];
  uint local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  long local_b0;
  
  uVar7 = (*(code *)PTR_FUN_00b0e0a8)();
  uVar16 = (uint)(uVar7 >> 0xf) & 0x1ffff;
  if ((int)uVar7 < 0x8000) {
    uVar16 = 1;
  }
  if (*(long **)(param_1 + 0x40) != (long *)0x0) {
    lVar18 = **(long **)(param_1 + 0x40);
    lVar8 = *(long *)(lVar18 + 8);
joined_r0x005a9238:
    if (lVar8 != 0) {
      (*DAT_00b0da70)();
    }
    if (*(char *)(lVar18 + 0x23) != '\0') {
      iVar5 = FUN_005aab18(param_1,lVar18);
      if (iVar5 != 0) goto LAB_005a94fc;
      *(undefined1 *)(lVar18 + 0x23) = 0;
    }
    iVar6 = 0;
    if (uVar16 != 0) {
      iVar6 = (int)(uVar16 + param_2) / (int)uVar16;
    }
    iVar6 = iVar6 * uVar16;
    if ((int)(uint)*(ushort *)(lVar18 + 0x20) < iVar6) {
      *(int *)(lVar18 + 0x1c) = param_3;
      if (-1 < *(int *)(lVar18 + 0x18)) {
        iVar5 = (*(code *)PTR_fstat_00b0dec8)(*(int *)(lVar18 + 0x18),auStack_e0);
        if (iVar5 != 0) {
          iVar5 = 0x130a;
          goto LAB_005a94fc;
        }
        iVar5 = iVar6 * param_3;
        if (local_b0 < iVar5) {
          if (param_4 == 0) goto LAB_005a94f8;
          lVar8 = local_b0 + 0xfff;
          if (-1 < local_b0) {
            lVar8 = local_b0;
          }
          iVar2 = iVar5 + 0xfff;
          if (-1 < iVar5) {
            iVar2 = iVar5;
          }
          iVar5 = (int)(lVar8 >> 0xc);
          if (iVar5 < iVar2 >> 0xc) {
            lVar8 = (long)iVar5;
            do {
              uVar20 = *(undefined4 *)(lVar18 + 0x18);
              while (iVar5 = (*(code *)PTR_pwrite_00b0df70)
                                       (uVar20,&DAT_002a8138,1,
                                        (long)(int)((int)lVar8 << 0xc | 0xfff)), iVar5 < 0) {
                piVar10 = (int *)__errno();
                if (*piVar10 != 4) goto LAB_005a9808;
              }
              if (iVar5 != 1) {
                piVar10 = (int *)__errno();
LAB_005a9808:
                puVar3 = &DAT_002a8138;
                if (*(undefined1 **)(lVar18 + 0x10) != (undefined1 *)0x0) {
                  puVar3 = *(undefined1 **)(lVar18 + 0x10);
                }
                sqlite3_log(0x130a,"os_unix.c:%d: (%d) %s(%s) - %s",0xaae2,*piVar10,"write",puVar3,
                            &DAT_002a8138);
                iVar5 = 0x130a;
                goto LAB_005a94fc;
              }
              lVar8 = lVar8 + 1;
            } while (lVar8 != iVar2 >> 0xc);
          }
        }
      }
      uVar14 = *(undefined8 *)(lVar18 + 0x28);
      iVar5 = sqlite3_initialize();
      if ((iVar5 == 0) &&
         (lVar8 = FUN_00582b2c(uVar14,iVar6 * 8 & (iVar6 * 8 >> 0x1f ^ 0xffffffffU)), lVar8 != 0)) {
        uVar13 = (uint)*(ushort *)(lVar18 + 0x20);
        *(long *)(lVar18 + 0x28) = lVar8;
        if (iVar6 <= (int)(uint)*(ushort *)(lVar18 + 0x20)) goto LAB_005a94f8;
        sVar19 = (size_t)(int)(uVar16 * param_3);
        if (uVar16 == 0) {
          do {
            while (-1 < *(int *)(lVar18 + 0x18)) {
              uVar20 = 3;
              if (*(char *)(lVar18 + 0x22) != '\0') {
                uVar20 = 1;
              }
              lVar8 = (*(code *)PTR_mmap_00b0e060)
                                (0,sVar19,uVar20,1,*(int *)(lVar18 + 0x18),
                                 (long)(int)uVar13 * (long)param_3);
              if (lVar8 == -1) goto LAB_005a9788;
              iVar5 = 0;
              uVar13 = (uint)*(ushort *)(lVar18 + 0x20);
              *(ushort *)(lVar18 + 0x20) = *(ushort *)(lVar18 + 0x20);
              if (iVar6 <= (int)uVar13) goto LAB_005a94fc;
            }
            iVar5 = sqlite3_initialize();
            if ((iVar5 != 0) || (pvVar11 = (void *)FUN_005827b0(sVar19), pvVar11 == (void *)0x0))
            goto LAB_005a9780;
            memset(pvVar11,0,sVar19);
            iVar5 = 0;
            uVar13 = (uint)*(ushort *)(lVar18 + 0x20);
            *(ushort *)(lVar18 + 0x20) = *(ushort *)(lVar18 + 0x20);
          } while ((int)uVar13 < iVar6);
        }
        else {
          do {
            if (*(int *)(lVar18 + 0x18) < 0) {
              iVar5 = sqlite3_initialize();
              if ((iVar5 != 0) || (pvVar11 = (void *)FUN_005827b0(sVar19), pvVar11 == (void *)0x0))
              goto LAB_005a9780;
              memset(pvVar11,0,sVar19);
            }
            else {
              uVar20 = 3;
              if (*(char *)(lVar18 + 0x22) != '\0') {
                uVar20 = 1;
              }
              pvVar11 = (void *)(*(code *)PTR_mmap_00b0e060)
                                          (0,sVar19,uVar20,1,*(int *)(lVar18 + 0x18),
                                           (long)(int)(uVar13 & 0xffff) * (long)param_3);
              if (pvVar11 == (void *)0xffffffffffffffff) goto LAB_005a9788;
            }
            uVar4 = *(ushort *)(lVar18 + 0x20);
            lVar8 = (ulong)uVar4 << 3;
            uVar7 = (ulong)uVar16;
            do {
              uVar7 = uVar7 - 1;
              *(void **)(*(long *)(lVar18 + 0x28) + lVar8) = pvVar11;
              lVar8 = lVar8 + 8;
              pvVar11 = (void *)((long)pvVar11 + (long)param_3);
            } while (uVar7 != 0);
            uVar13 = uVar4 + uVar16;
            iVar5 = 0;
            *(short *)(lVar18 + 0x20) = (short)uVar13;
          } while ((int)(uVar13 & 0xffff) < iVar6);
        }
      }
      else {
        iVar5 = 0xc0a;
      }
    }
    else {
LAB_005a94f8:
      iVar5 = 0;
    }
    goto LAB_005a94fc;
  }
  iVar6 = sqlite3_initialize();
  if ((iVar6 != 0) || (puVar9 = (undefined8 *)FUN_005827b0(0x18), puVar9 == (undefined8 *)0x0)) {
    return 7;
  }
  *puVar9 = 0;
  puVar9[1] = 0;
  puVar9[2] = 0;
  if (DAT_00b10378 != 0) {
    (*DAT_00b0da70)();
  }
  lVar18 = *(long *)(param_1 + 0x10);
  __s = *(long **)(lVar18 + 0x38);
  if (__s != (long *)0x0) {
LAB_005a92f0:
    iVar6 = 0;
LAB_005a92f4:
    *puVar9 = __s;
    lVar18 = DAT_00b10378;
    *(int *)(__s + 6) = (int)__s[6] + 1;
    *(undefined8 **)(param_1 + 0x40) = puVar9;
    if (lVar18 != 0) {
      (*DAT_00b0da80)();
    }
    if (__s[1] == 0) {
      puVar9[1] = __s[7];
      __s[7] = (long)puVar9;
    }
    else {
      (*DAT_00b0da70)();
      lVar18 = __s[1];
      puVar9[1] = __s[7];
      __s[7] = (long)puVar9;
      if (lVar18 != 0) {
        (*DAT_00b0da80)();
      }
    }
    if (iVar6 != 0) {
      return iVar6;
    }
    lVar18 = **(long **)(param_1 + 0x40);
    lVar8 = *(long *)(lVar18 + 8);
    goto joined_r0x005a9238;
  }
  __s_00 = *(char **)(param_1 + 0x38);
  iVar6 = (*(code *)PTR_fstat_00b0dec8)(*(undefined4 *)(param_1 + 0x18),auStack_e0);
  if (iVar6 == 0) {
    sVar19 = strlen(__s_00);
    iVar6 = sqlite3_initialize();
    if (iVar6 == 0) {
      iVar6 = (int)sVar19;
      __s = (long *)FUN_005827b0((long)iVar6 + 0x66);
      if (__s != (long *)0x0) {
        memset(__s,0,(long)iVar6 + 0x66);
        plVar1 = __s + 0xc;
        __s[2] = (long)plVar1;
        sqlite3_snprintf(iVar6 + 6,plVar1,"%s-shm",__s_00);
        *(undefined4 *)(__s + 3) = 0xffffffff;
        lVar8 = *(long *)(param_1 + 0x10);
        *(long **)(lVar8 + 0x38) = __s;
        *__s = lVar8;
        if (DAT_00b0d9f4 == '\0') {
LAB_005a97dc:
          if (*(char *)(lVar18 + 0x21) != '\0') goto LAB_005a92f0;
          iVar6 = sqlite3_uri_boolean(*(undefined8 *)(param_1 + 0x38),"readonly_shm",0);
          if (iVar6 == 0) {
            iVar6 = FUN_005aa2a8(plVar1,0x8042,local_d0 & 0x1ff);
            *(int *)(__s + 3) = iVar6;
          }
          else {
            iVar6 = (int)__s[3];
          }
          if (iVar6 < 0) {
            iVar6 = FUN_005aa2a8(plVar1,0x8000,local_d0 & 0x1ff);
            *(int *)(__s + 3) = iVar6;
            if (iVar6 < 0) {
              iVar6 = 0xe;
              sqlite3_log(0xe,"%s at line %d of [%.10s]","cannot open file",0xaa52,
                          "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
              FUN_005aa468(0xe,&DAT_002a53f3,plVar1,0xaa52);
              goto LAB_005a95d0;
            }
            *(undefined1 *)((long)__s + 0x22) = 1;
          }
          iVar5 = (*(code *)PTR_geteuid_00b0e048)();
          if (iVar5 == 0) {
            (*(code *)PTR_fchown_00b0e030)(iVar6,local_c8,uStack_c4);
          }
          iVar6 = FUN_005aab18(param_1,__s);
          if ((iVar6 == 0x508) || (iVar6 == 0)) goto LAB_005a92f4;
        }
        else {
          iVar6 = sqlite3_initialize();
          if (iVar6 == 0) {
            lVar8 = (*DAT_00b0da60)();
            __s[1] = lVar8;
            if (lVar8 != 0) goto LAB_005a97dc;
          }
          else {
            __s[1] = 0;
          }
          iVar6 = 7;
        }
        goto LAB_005a95d0;
      }
    }
    iVar6 = 7;
  }
  else {
    iVar6 = 0x70a;
  }
LAB_005a95d0:
  FUN_005aacf0(param_1);
  puVar15 = &DAT_00b0da18;
  if (DAT_00b0d9f0 == 0) {
LAB_005a964c:
    (*(code *)*puVar15)(puVar9);
  }
  else {
    if (DAT_00b103d8 != (undefined8 *)0x0) {
      (*DAT_00b0da70)();
    }
    iVar5 = (*DAT_00b0da28)(puVar9);
    DAT_00b105b8 = DAT_00b105b8 - iVar5;
    DAT_00b10600 = DAT_00b10600 + -1;
    (*DAT_00b0da18)(puVar9);
    if (DAT_00b103d8 != (undefined8 *)0x0) {
      puVar15 = &DAT_00b0da80;
      puVar9 = DAT_00b103d8;
      goto LAB_005a964c;
    }
  }
  lVar8 = DAT_00b10378;
  if (DAT_00b10378 == 0) {
    return iVar6;
  }
  goto LAB_005a9538;
LAB_005a9780:
  iVar5 = 7;
  goto LAB_005a94fc;
LAB_005a9788:
  puVar17 = *(undefined1 **)(lVar18 + 0x10);
  puVar12 = (undefined4 *)__errno();
  puVar3 = &DAT_002a8138;
  if (puVar17 != (undefined1 *)0x0) {
    puVar3 = puVar17;
  }
  sqlite3_log(0x150a,"os_unix.c:%d: (%d) %s(%s) - %s",0xaafd,*puVar12,&DAT_002aa89c,puVar3);
  iVar5 = 0x150a;
LAB_005a94fc:
  if (param_2 < (int)(uint)*(ushort *)(lVar18 + 0x20)) {
    uVar14 = *(undefined8 *)(*(long *)(lVar18 + 0x28) + (long)param_2 * 8);
  }
  else {
    uVar14 = 0;
  }
  *param_5 = uVar14;
  iVar6 = 8;
  if (*(char *)(lVar18 + 0x22) == '\0' || iVar5 != 0) {
    iVar6 = iVar5;
  }
  lVar8 = *(long *)(lVar18 + 8);
  if (*(long *)(lVar18 + 8) != 0) {
LAB_005a9538:
    (*DAT_00b0da80)(lVar8);
  }
  return iVar6;
}


// ===== 005a9920  FUN_005a9920 =====

undefined8 FUN_005a9920(long param_1,uint param_2,int param_3,uint param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined4 local_80 [2];
  long local_78;
  long lStack_70;
  
  plVar9 = *(long **)(param_1 + 0x40);
  if ((plVar9 == (long *)0x0) || (lVar8 = *plVar9, lVar8 == 0)) {
    return 0x140a;
  }
  uVar2 = param_3 + param_2;
  uVar3 = (1 << (ulong)(uVar2 & 0x1f)) + (-1 << (ulong)(param_2 & 0x1f));
  if (((((param_4 & 1) == 0) ||
       ((uVar3 & (*(ushort *)((long)plVar9 + 0x12) | *(ushort *)((long)plVar9 + 0x14))) == 0)) &&
      (param_4 != 10)) && ((param_4 != 6 || ((uVar3 & *(ushort *)((long)plVar9 + 0x12)) != 0)))) {
    return 0;
  }
  lVar1 = lVar8 + 0x40;
  if (*(long *)(lVar8 + 8) != 0) {
    (*DAT_00b0da70)(*(long *)(lVar8 + 8));
  }
  uVar4 = (ushort)uVar3;
  if ((param_4 & 1) == 0) {
    if ((param_4 >> 2 & 1) == 0) {
      if (0 < param_3) {
        lVar7 = (long)(int)param_2;
        do {
          if (*(int *)(lVar1 + lVar7 * 4) != 0) goto LAB_005a9bd8;
          lVar7 = lVar7 + 1;
        } while (lVar7 < (int)uVar2);
      }
      iVar5 = *(int *)(*(long *)(*(long *)(param_1 + 0x10) + 0x38) + 0x18);
      if (-1 < iVar5) {
        local_78 = (long)(int)(param_2 + 0x78);
        local_80[0] = 1;
        lStack_70 = (long)param_3;
        iVar5 = (*(code *)PTR_fcntl_00b0def8)(iVar5,6,local_80);
        if (iVar5 == -1) goto LAB_005a9bd8;
      }
      *(ushort *)((long)plVar9 + 0x14) = *(ushort *)((long)plVar9 + 0x14) | uVar4;
      if (0 < param_3) {
        if ((int)uVar2 <= (int)(param_2 + 1)) {
          uVar2 = param_2 + 1;
        }
        memset((void *)(lVar8 + (long)(int)param_2 * 4 + 0x40),0xff,
               (ulong)(uVar2 + ~param_2) * 4 + 4);
      }
      lVar8 = *(long *)(lVar8 + 8);
    }
    else {
      iVar5 = *(int *)(lVar1 + (long)(int)param_2 * 4);
      if (iVar5 < 0) {
LAB_005a9bd8:
        uVar6 = 5;
        lVar8 = *(long *)(lVar8 + 8);
        goto joined_r0x005a9ad4;
      }
      if (iVar5 == 0) {
        iVar5 = *(int *)(*(long *)(*(long *)(param_1 + 0x10) + 0x38) + 0x18);
        if (iVar5 < 0) {
          iVar5 = 0;
        }
        else {
          lStack_70 = (long)param_3;
          local_78 = (long)(int)(param_2 + 0x78);
          local_80[0] = 0;
          iVar5 = (*(code *)PTR_fcntl_00b0def8)(iVar5,6,local_80);
          if (iVar5 == -1) goto LAB_005a9bd8;
          iVar5 = *(int *)(lVar1 + (long)(int)param_2 * 4);
        }
      }
      *(ushort *)((long)plVar9 + 0x12) = *(ushort *)((long)plVar9 + 0x12) | uVar4;
      *(int *)(lVar1 + (long)(int)param_2 * 4) = iVar5 + 1;
      lVar8 = *(long *)(lVar8 + 8);
    }
  }
  else {
    if (((param_4 >> 2 & 1) != 0) && (iVar5 = *(int *)(lVar1 + (long)(int)param_2 * 4), 1 < iVar5))
    {
      *(int *)(lVar1 + (long)(int)param_2 * 4) = iVar5 + -1;
      uVar6 = 0;
      *(ushort *)((long)plVar9 + 0x12) = *(ushort *)((long)plVar9 + 0x12) & (uVar4 ^ 0xffff);
      lVar8 = *(long *)(lVar8 + 8);
      goto joined_r0x005a9ad4;
    }
    iVar5 = *(int *)(*(long *)(*(long *)(param_1 + 0x10) + 0x38) + 0x18);
    if (-1 < iVar5) {
      local_78 = (long)(int)(param_2 + 0x78);
      lStack_70 = (long)param_3;
      local_80[0] = 2;
      iVar5 = (*(code *)PTR_fcntl_00b0def8)(iVar5,6,local_80);
      if (iVar5 == -1) goto LAB_005a9bd8;
    }
    memset((void *)(lVar1 + (long)(int)param_2 * 4),0,(long)param_3 << 2);
    *(ushort *)((long)plVar9 + 0x12) = *(ushort *)((long)plVar9 + 0x12) & (uVar4 ^ 0xffff);
    *(ushort *)((long)plVar9 + 0x14) = *(ushort *)((long)plVar9 + 0x14) & (uVar4 ^ 0xffff);
    lVar8 = *(long *)(lVar8 + 8);
  }
  uVar6 = 0;
joined_r0x005a9ad4:
  if (lVar8 != 0) {
    (*DAT_00b0da80)(lVar8);
  }
  return uVar6;
}


// ===== 005a9c24  FUN_005a9c24 =====

void FUN_005a9c24(void)

{
  DataMemoryBarrier(2,3);
  if (DAT_00b10378 != 0) {
    (*DAT_00b0da70)();
    if (DAT_00b10378 != 0) {
                    /* WARNING: Could not recover jumptable at 0x005a9c64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_00b0da80)();
      return;
    }
  }
  return;
}


// ===== 005a9c74  FUN_005a9c74 =====

undefined8 FUN_005a9c74(long param_1,int param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  
  plVar7 = *(long **)(param_1 + 0x40);
  if (plVar7 == (long *)0x0) {
    return 0;
  }
  lVar8 = *plVar7;
  if (*(long *)(lVar8 + 8) != 0) {
    (*DAT_00b0da70)();
  }
  iVar2 = DAT_00b0d9f0;
  plVar1 = (long *)(lVar8 + 0x38);
  do {
    plVar4 = plVar1;
    plVar5 = (long *)*plVar4;
    plVar1 = plVar5 + 1;
  } while (plVar5 != plVar7);
  puVar6 = &DAT_00b0da18;
  *plVar4 = plVar7[1];
  if (iVar2 != 0) {
    if (DAT_00b103d8 != (long *)0x0) {
      (*DAT_00b0da70)();
    }
    iVar2 = (*DAT_00b0da28)(plVar7);
    DAT_00b105b8 = DAT_00b105b8 - iVar2;
    DAT_00b10600 = DAT_00b10600 + -1;
    (*DAT_00b0da18)(plVar7);
    if (DAT_00b103d8 == (long *)0x0) goto LAB_005a9d50;
    puVar6 = &DAT_00b0da80;
    plVar7 = DAT_00b103d8;
  }
  (*(code *)*puVar6)(plVar7);
LAB_005a9d50:
  lVar3 = *(long *)(lVar8 + 8);
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (lVar3 != 0) {
    (*DAT_00b0da80)();
  }
  if (DAT_00b10378 != 0) {
    (*DAT_00b0da70)();
  }
  iVar2 = *(int *)(lVar8 + 0x30) + -1;
  *(int *)(lVar8 + 0x30) = iVar2;
  if (iVar2 == 0) {
    if ((param_2 != 0) && (-1 < *(int *)(lVar8 + 0x18))) {
      (*(code *)PTR_unlink_00b0dfd0)(*(undefined8 *)(lVar8 + 0x10));
    }
    FUN_005aacf0(param_1);
  }
  if (DAT_00b10378 != 0) {
    (*DAT_00b0da80)();
  }
  return 0;
}


