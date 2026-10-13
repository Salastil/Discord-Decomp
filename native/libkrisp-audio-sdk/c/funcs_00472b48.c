// ===== 00472b48  FUN_00472b48 =====

undefined8 FUN_00472b48(long param_1,long param_2,long param_3,ulong param_4)

{
  undefined4 local_48;
  undefined4 local_44;
  
  if (param_4 >> 0x1e != 0) {
    local_48 = *(undefined4 *)(param_1 + 0xa0);
    do {
      FUN_003db200(param_3,param_2,0x40000000,*(undefined8 *)(param_1 + 0xb0),param_1 + 0x20,
                   &local_48,*(undefined8 *)(param_1 + 0x30));
      param_4 = param_4 - 0x40000000;
      param_3 = param_3 + 0x40000000;
      param_2 = param_2 + 0x40000000;
      *(undefined4 *)(param_1 + 0xa0) = local_48;
    } while (param_4 >> 0x1e != 0);
  }
  if (param_4 != 0) {
    local_44 = *(undefined4 *)(param_1 + 0xa0);
    FUN_003db200(param_3,param_2,param_4,*(undefined8 *)(param_1 + 0xb0),param_1 + 0x20,&local_44,
                 *(undefined8 *)(param_1 + 0x30));
    *(undefined4 *)(param_1 + 0xa0) = local_44;
  }
  return 1;
}


// ===== 00472c14  FUN_00472c14 =====

undefined8 FUN_00472c14(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_003cb140(param_1,"blocksize");
  if ((lVar2 == 0) || (iVar1 = thunk_FUN_003cc2a4(lVar2,param_2), iVar1 != 0)) {
    lVar2 = FUN_003cb140(param_1,&DAT_001f543b);
    if ((lVar2 == 0) || (iVar1 = thunk_FUN_003cc2a4(lVar2,param_3), iVar1 != 0)) {
      lVar2 = FUN_003cb140(param_1,&DAT_001f95c2);
      if ((lVar2 == 0) || (iVar1 = thunk_FUN_003cb490(lVar2,param_4 & 1), iVar1 != 0)) {
        lVar2 = FUN_003cb140(param_1,"algid-absent");
        if ((lVar2 == 0) || (iVar1 = thunk_FUN_003cb490(lVar2,param_4 >> 1 & 1), iVar1 != 0)) {
          return 1;
        }
        uVar3 = 0x26;
      }
      else {
        uVar3 = 0x20;
      }
    }
    else {
      uVar3 = 0x1a;
    }
  }
  else {
    uVar3 = 0x15;
  }
  FUN_00379868();
  FUN_0037995c("providers/implementations/digests/digestcommon.c",uVar3,
               "ossl_digest_default_get_params");
  FUN_00379a5c(0x39,0x68,0);
  return 0;
}


// ===== 00472d20  FUN_00472d20 =====

undefined ** FUN_00472d20(void)

{
  return &PTR_s_blocksize_0078f268;
}


// ===== 00472d2c  FUN_00472d2c =====

undefined8
FUN_00472d2c(ulong *param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5,
            long param_6,long param_7)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = *param_1;
  if (uVar5 < param_7 + 1U) {
    return 0;
  }
  uVar6 = (ulong)*(byte *)(param_3 + uVar5 + -1);
  lVar1 = param_7 + 1U + uVar6;
  uVar6 = uVar6 + 1;
  uVar2 = (uint)((ulong)lVar1 >> 0x20);
  uVar3 = (uint)(uVar5 >> 0x20);
  *param_1 = uVar5 - ((uint)~((int)(((uint)(uVar5 - lVar1 >> 0x20) ^ uVar2 | uVar2 ^ uVar3) ^ uVar3
                                   | (uint)(param_6 - uVar6 >> 0x20) &
                                     ((uint)((ulong)param_6 >> 0x20) ^ 0xffffffff)) >> 0x1f) & uVar6
                     );
  uVar4 = FUN_00472db4();
  return uVar4;
}


// ===== 00472db4  FUN_00472db4 =====

byte * FUN_00472db4(ulong *param_1,ulong param_2,long param_3,long *param_4,undefined4 *param_5,
                   long param_6,ulong param_7,long param_8,undefined8 param_9)

{
  byte *__s;
  ulong uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  byte *pbVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  byte *pbVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  byte *pbVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  byte abStack_12c [64];
  byte abStack_ec [128];
  uint local_6c;
  
  pbVar5 = (byte *)0x0;
  if ((param_7 <= param_2) && (param_7 < 0x41)) {
    if (param_7 != 0) {
      uVar15 = *param_1;
      uVar14 = uVar15 - param_7;
      *param_1 = uVar14;
      if (param_6 == 1) {
        if (param_4 != (long *)0x0) {
          *param_4 = param_3 + uVar14;
        }
        if (param_5 != (undefined4 *)0x0) {
          *param_5 = 0;
        }
        pbVar5 = (byte *)0x1;
      }
      else {
        iVar4 = FUN_003edc30(param_9,abStack_12c,param_7,0);
        if (iVar4 < 1) {
          pbVar5 = (byte *)0x0;
        }
        else {
          pbVar5 = (byte *)0x0;
          if ((param_4 != (long *)0x0) && (param_5 != (undefined4 *)0x0)) {
            pbVar5 = (byte *)FUN_003c83a4(param_7,"ssl/record/methods/tls_pad.c",0xf5);
            *param_4 = (long)pbVar5;
            if (pbVar5 != (byte *)0x0) {
              uVar16 = param_7 | 0x100;
              *param_5 = 1;
              __s = abStack_ec + ((ulong)(uint)-(int)abStack_ec & 0x3f);
              uVar11 = 0;
              if (uVar16 <= param_2) {
                uVar11 = param_2 - uVar16;
              }
              memset(__s,0,param_7);
              uVar6 = 0;
              if (uVar11 < param_2) {
                uVar7 = 0;
                uVar11 = param_2;
                if (uVar16 <= param_2) {
                  uVar11 = uVar16;
                }
                uVar6 = 0;
                uVar16 = 0;
                lVar8 = -uVar11;
                do {
                  uVar11 = param_2 + lVar8;
                  uVar1 = (param_2 - uVar15) + lVar8;
                  uVar12 = (long)((uVar11 ^ uVar14) - 1 & (uVar11 ^ uVar14 ^ 0xffffffffffffffff)) >>
                           0x3f;
                  pbVar9 = (byte *)(param_3 + param_2 + lVar8);
                  bVar3 = lVar8 != -1;
                  lVar8 = lVar8 + 1;
                  uVar7 = (uVar12 | uVar7) &
                          (long)((uVar1 ^ uVar15 | uVar11 ^ uVar15) ^ uVar11) >> 0x3f;
                  uVar6 = uVar12 & uVar16 | uVar6;
                  __s[uVar16] = *pbVar9 & (byte)uVar7 | __s[uVar16];
                  uVar16 = uVar16 + 1 & (long)((uVar16 + 1) - param_7 & -uVar16 - 2) >> 0x3f;
                } while (bVar3);
              }
              pbVar9 = abStack_12c;
              uVar2 = ~((uint)param_8 & 0xff);
              uVar14 = param_7;
              pbVar13 = pbVar5;
              if (param_7 < 2) {
                uVar14 = 1;
              }
              do {
                uVar15 = uVar6 & 0xffffffffffffffdf;
                uVar11 = uVar6 | 0x20;
                uVar10 = 0xff;
                if ((uVar6 & 0x20) != 0) {
                  uVar10 = 0;
                }
                uVar14 = uVar14 - 1;
                local_6c = ~uVar10;
                local_6c = uVar2;
                uVar6 = uVar6 + 1 & (long)((uVar6 + 1) - param_7 & -uVar6 - 2) >> 0x3f;
                pbVar5 = (byte *)0x1;
                *pbVar13 = (byte)uVar2 & *pbVar9 |
                           (byte)param_8 &
                           ((byte)~uVar10 & __s[uVar11] | (byte)uVar10 & __s[uVar15]);
                pbVar9 = pbVar9 + 1;
                pbVar13 = pbVar13 + 1;
              } while (uVar14 != 0);
            }
          }
        }
      }
      return pbVar5;
    }
    pbVar5 = (byte *)(ulong)(param_8 != 0);
  }
  return pbVar5;
}


// ===== 00473024  FUN_00473024 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_00473024(ulong *param_1,ulong param_2,long param_3,long *param_4,undefined4 *param_5,
            long param_6,ulong param_7,int param_8)

{
  ulong uVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  long lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  uint3 uVar18;
  undefined1 auVar19 [11];
  undefined1 auVar20 [13];
  undefined8 uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  undefined8 *puVar26;
  byte *pbVar27;
  long lVar28;
  ulong uVar29;
  ulong uVar30;
  undefined1 (*pauVar31) [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
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
  undefined1 uVar52;
  byte bVar53;
  undefined1 uVar54;
  byte bVar55;
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
  byte bVar69;
  undefined1 uVar70;
  byte bVar71;
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
  byte bVar85;
  byte bVar86;
  undefined1 uVar87;
  undefined1 uVar88;
  undefined1 uVar89;
  undefined1 uVar90;
  undefined1 uVar91;
  undefined1 uVar92;
  byte bVar93;
  byte bVar94;
  undefined1 uVar95;
  undefined1 uVar96;
  undefined1 uVar97;
  undefined1 uVar98;
  undefined1 uVar99;
  undefined1 uVar100;
  byte bVar101;
  undefined1 uVar102;
  byte bVar103;
  undefined1 uVar104;
  undefined1 uVar105;
  undefined1 uVar106;
  undefined1 uVar107;
  undefined1 uVar108;
  undefined1 uVar109;
  undefined1 uVar110;
  undefined1 uVar111;
  undefined1 uVar112;
  undefined1 uVar113;
  undefined1 uVar114;
  undefined1 uVar115;
  undefined1 uVar116;
  byte bVar117;
  undefined1 uVar118;
  byte bVar119;
  undefined1 uVar120;
  undefined1 uVar121;
  undefined1 uVar122;
  undefined1 uVar123;
  undefined1 uVar124;
  undefined1 uVar125;
  undefined1 uVar126;
  undefined1 uVar127;
  undefined1 uVar128;
  undefined1 uVar129;
  undefined1 uVar130;
  undefined1 uVar131;
  undefined1 uVar132;
  byte bVar133;
  undefined1 uVar134;
  undefined1 uVar135;
  undefined1 uVar136;
  undefined1 uVar137;
  undefined1 uVar138;
  undefined1 uVar139;
  undefined1 uVar140;
  undefined1 uVar141;
  byte bVar142;
  undefined1 uVar143;
  undefined1 uVar144;
  undefined1 uVar145;
  undefined1 uVar146;
  undefined1 uVar147;
  undefined1 uVar148;
  undefined1 uVar149;
  undefined1 uVar150;
  uint3 uVar151;
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  byte bVar156;
  byte bVar157;
  byte bVar158;
  byte bVar159;
  byte bVar160;
  byte bVar161;
  byte bVar162;
  byte bVar163;
  byte bVar164;
  byte bVar165;
  byte bVar166;
  byte bVar167;
  byte bVar169;
  byte bVar170;
  byte bVar171;
  byte bVar172;
  byte bVar173;
  undefined8 uVar168;
  byte bVar174;
  byte bVar175;
  byte bVar176;
  undefined1 uVar177;
  undefined1 uVar178;
  undefined1 uVar179;
  undefined1 uVar180;
  undefined1 uVar181;
  undefined1 uVar182;
  byte bVar183;
  byte bVar184;
  undefined1 uVar185;
  undefined1 uVar186;
  undefined1 uVar187;
  undefined1 uVar188;
  undefined1 uVar189;
  undefined1 uVar190;
  byte bVar191;
  byte bVar192;
  byte bVar193;
  byte bVar194;
  byte bVar195;
  byte bVar196;
  byte bVar197;
  byte bVar198;
  byte bVar199;
  byte bVar200;
  byte bVar201;
  byte bVar202;
  byte bVar203;
  byte bVar204;
  byte bVar205;
  byte bVar206;
  byte bVar207;
  byte bVar210;
  byte bVar211;
  byte bVar212;
  byte bVar213;
  byte bVar214;
  byte bVar215;
  undefined8 uVar208;
  undefined8 uVar209;
  byte bVar216;
  byte bVar217;
  byte bVar219;
  byte bVar220;
  byte bVar221;
  byte bVar222;
  byte bVar223;
  byte bVar224;
  undefined8 uVar218;
  byte bVar225;
  byte bVar227;
  byte bVar228;
  byte bVar229;
  byte bVar230;
  byte bVar231;
  byte bVar232;
  undefined8 uVar226;
  byte bVar233;
  byte bVar234;
  byte bVar236;
  byte bVar237;
  byte bVar238;
  byte bVar239;
  byte bVar240;
  byte bVar241;
  undefined8 uVar235;
  byte bVar242;
  byte bVar243;
  undefined1 auVar244 [16];
  undefined1 auVar245 [16];
  byte bVar246;
  undefined1 auVar247 [16];
  undefined1 auVar248 [16];
  byte bVar251;
  byte bVar252;
  byte bVar253;
  undefined1 auVar249 [16];
  undefined1 auVar250 [16];
  byte bVar254;
  byte bVar256;
  byte bVar257;
  byte bVar258;
  byte bVar259;
  byte bVar260;
  byte bVar261;
  undefined8 uVar255;
  byte bVar262;
  byte bVar263;
  byte bVar265;
  byte bVar266;
  byte bVar267;
  byte bVar268;
  byte bVar269;
  byte bVar270;
  undefined8 uVar264;
  byte bVar271;
  undefined1 auVar272 [16];
  undefined1 auVar273 [16];
  byte bStack_58;
  byte bStack_57;
  byte bStack_56;
  byte bStack_55;
  byte bStack_54;
  byte bStack_53;
  byte bStack_52;
  byte bStack_51;
  
  uVar24 = *param_1;
  uVar1 = param_7;
  if (param_6 != 1) {
    uVar1 = param_7 + 1;
  }
  if (uVar24 < uVar1) {
    return 0;
  }
  if (param_6 == 1) {
    if (param_2 < param_7) {
      return 0;
    }
    if (0x40 < param_7) {
      return 0;
    }
    if (param_7 != 0) {
      *param_1 = uVar24 - param_7;
      if (param_4 != (long *)0x0) {
        *param_4 = param_3 + (uVar24 - param_7);
      }
      if (param_5 != (undefined4 *)0x0) {
        *param_5 = 0;
      }
    }
    return 1;
  }
  bVar2 = *(byte *)(param_3 + uVar24 + -1);
  uVar23 = (ulong)bVar2;
  if (param_8 != 0) {
    *param_1 = (uVar24 + ~param_7) - uVar23;
    return 1;
  }
  uVar1 = uVar1 + uVar23;
  uVar30 = (long)((uVar24 - uVar1 ^ uVar1 | uVar1 ^ uVar24) ^ uVar24 ^ 0xffffffffffffffff) >> 0x3f;
  uVar1 = uVar24;
  if (0xff < uVar24) {
    uVar1 = 0x100;
  }
  if (uVar24 == 0) goto LAB_004733cc;
  if (uVar24 < 8) {
    uVar25 = 0;
  }
  else {
    bVar103 = (byte)((ulong)_DAT_00200740 >> 8);
    uVar105 = (undefined1)((ulong)_DAT_00200740 >> 0x10);
    uVar107 = (undefined1)((ulong)_DAT_00200740 >> 0x18);
    uVar109 = (undefined1)((ulong)_DAT_00200740 >> 0x20);
    uVar111 = (undefined1)((ulong)_DAT_00200740 >> 0x28);
    uVar113 = (undefined1)((ulong)_DAT_00200740 >> 0x30);
    uVar115 = (undefined1)((ulong)_DAT_00200740 >> 0x38);
    bVar119 = (byte)((ulong)_UNK_00200748 >> 8);
    uVar121 = (undefined1)((ulong)_UNK_00200748 >> 0x10);
    uVar123 = (undefined1)((ulong)_UNK_00200748 >> 0x18);
    uVar125 = (undefined1)((ulong)_UNK_00200748 >> 0x20);
    uVar127 = (undefined1)((ulong)_UNK_00200748 >> 0x28);
    uVar129 = (undefined1)((ulong)_UNK_00200748 >> 0x30);
    uVar131 = (undefined1)((ulong)_UNK_00200748 >> 0x38);
    bVar176 = (byte)((ulong)_DAT_002003a0 >> 8);
    uVar177 = (undefined1)((ulong)_DAT_002003a0 >> 0x10);
    uVar178 = (undefined1)((ulong)_DAT_002003a0 >> 0x18);
    uVar179 = (undefined1)((ulong)_DAT_002003a0 >> 0x20);
    uVar180 = (undefined1)((ulong)_DAT_002003a0 >> 0x28);
    uVar181 = (undefined1)((ulong)_DAT_002003a0 >> 0x30);
    uVar182 = (undefined1)((ulong)_DAT_002003a0 >> 0x38);
    bVar243 = (byte)((ulong)_UNK_002003a8 >> 8);
    uVar185 = (undefined1)((ulong)_UNK_002003a8 >> 0x10);
    uVar186 = (undefined1)((ulong)_UNK_002003a8 >> 0x18);
    uVar187 = (undefined1)((ulong)_UNK_002003a8 >> 0x20);
    uVar188 = (undefined1)((ulong)_UNK_002003a8 >> 0x28);
    uVar189 = (undefined1)((ulong)_UNK_002003a8 >> 0x30);
    uVar190 = (undefined1)((ulong)_UNK_002003a8 >> 0x38);
    if (uVar24 < 0x10) {
      uVar22 = 0;
    }
    else {
      uVar21 = 0xffffffffffffffff;
      bVar101 = 0xff;
      bVar117 = 0xff;
      bVar133 = 0xff;
      bVar142 = 0xff;
      bVar183 = 0xff;
      uVar45 = (undefined1)_UNK_002003d8;
      uVar46 = (undefined1)((ulong)_UNK_002003d8 >> 8);
      uVar47 = (undefined1)((ulong)_UNK_002003d8 >> 0x10);
      uVar48 = (undefined1)((ulong)_UNK_002003d8 >> 0x18);
      uVar49 = (undefined1)((ulong)_UNK_002003d8 >> 0x20);
      uVar50 = (undefined1)((ulong)_UNK_002003d8 >> 0x28);
      uVar51 = (undefined1)((ulong)_UNK_002003d8 >> 0x30);
      uVar52 = (undefined1)((ulong)_UNK_002003d8 >> 0x38);
      uVar37 = (undefined1)_DAT_002003d0;
      uVar38 = (undefined1)((ulong)_DAT_002003d0 >> 8);
      uVar39 = (undefined1)((ulong)_DAT_002003d0 >> 0x10);
      uVar40 = (undefined1)((ulong)_DAT_002003d0 >> 0x18);
      uVar41 = (undefined1)((ulong)_DAT_002003d0 >> 0x20);
      uVar42 = (undefined1)((ulong)_DAT_002003d0 >> 0x28);
      uVar43 = (undefined1)((ulong)_DAT_002003d0 >> 0x30);
      uVar44 = (undefined1)((ulong)_DAT_002003d0 >> 0x38);
      bVar175 = 0xff;
      bVar184 = 0xff;
      bVar156 = 0xff;
      uVar70 = (undefined1)_UNK_00200858;
      uVar72 = (undefined1)((ulong)_UNK_00200858 >> 8);
      uVar74 = (undefined1)((ulong)_UNK_00200858 >> 0x10);
      uVar76 = (undefined1)((ulong)_UNK_00200858 >> 0x18);
      uVar78 = (undefined1)((ulong)_UNK_00200858 >> 0x20);
      uVar80 = (undefined1)((ulong)_UNK_00200858 >> 0x28);
      uVar82 = (undefined1)((ulong)_UNK_00200858 >> 0x30);
      uVar84 = (undefined1)((ulong)_UNK_00200858 >> 0x38);
      uVar54 = (undefined1)_DAT_00200850;
      uVar56 = (undefined1)((ulong)_DAT_00200850 >> 8);
      uVar58 = (undefined1)((ulong)_DAT_00200850 >> 0x10);
      uVar60 = (undefined1)((ulong)_DAT_00200850 >> 0x18);
      uVar62 = (undefined1)((ulong)_DAT_00200850 >> 0x20);
      uVar64 = (undefined1)((ulong)_DAT_00200850 >> 0x28);
      uVar66 = (undefined1)((ulong)_DAT_00200850 >> 0x30);
      uVar68 = (undefined1)((ulong)_DAT_00200850 >> 0x38);
      uVar255 = 0xffffffffffffffff;
      uVar264 = 0xffffffffffffffff;
      uVar118 = (undefined1)_UNK_00200368;
      uVar120 = (undefined1)((ulong)_UNK_00200368 >> 8);
      uVar122 = (undefined1)((ulong)_UNK_00200368 >> 0x10);
      uVar124 = (undefined1)((ulong)_UNK_00200368 >> 0x18);
      uVar126 = (undefined1)((ulong)_UNK_00200368 >> 0x20);
      uVar128 = (undefined1)((ulong)_UNK_00200368 >> 0x28);
      uVar130 = (undefined1)((ulong)_UNK_00200368 >> 0x30);
      uVar132 = (undefined1)((ulong)_UNK_00200368 >> 0x38);
      uVar102 = (undefined1)_DAT_00200360;
      uVar104 = (undefined1)((ulong)_DAT_00200360 >> 8);
      uVar106 = (undefined1)((ulong)_DAT_00200360 >> 0x10);
      uVar108 = (undefined1)((ulong)_DAT_00200360 >> 0x18);
      uVar110 = (undefined1)((ulong)_DAT_00200360 >> 0x20);
      uVar112 = (undefined1)((ulong)_DAT_00200360 >> 0x28);
      uVar114 = (undefined1)((ulong)_DAT_00200360 >> 0x30);
      uVar116 = (undefined1)((ulong)_DAT_00200360 >> 0x38);
      uVar226 = 0xffffffffffffffff;
      uVar235 = 0xffffffffffffffff;
      uVar143 = (undefined1)_UNK_00200798;
      uVar144 = (undefined1)((ulong)_UNK_00200798 >> 8);
      uVar145 = (undefined1)((ulong)_UNK_00200798 >> 0x10);
      uVar146 = (undefined1)((ulong)_UNK_00200798 >> 0x18);
      uVar147 = (undefined1)((ulong)_UNK_00200798 >> 0x20);
      uVar148 = (undefined1)((ulong)_UNK_00200798 >> 0x28);
      uVar149 = (undefined1)((ulong)_UNK_00200798 >> 0x30);
      uVar150 = (undefined1)((ulong)_UNK_00200798 >> 0x38);
      uVar134 = (undefined1)_DAT_00200790;
      uVar135 = (undefined1)((ulong)_DAT_00200790 >> 8);
      uVar136 = (undefined1)((ulong)_DAT_00200790 >> 0x10);
      uVar137 = (undefined1)((ulong)_DAT_00200790 >> 0x18);
      uVar138 = (undefined1)((ulong)_DAT_00200790 >> 0x20);
      uVar139 = (undefined1)((ulong)_DAT_00200790 >> 0x28);
      uVar140 = (undefined1)((ulong)_DAT_00200790 >> 0x30);
      uVar141 = (undefined1)((ulong)_DAT_00200790 >> 0x38);
      uVar168 = 0xffffffffffffffff;
      uVar208 = 0xffffffffffffffff;
      bVar158 = 0xff;
      bVar157 = 0xff;
      uVar209 = 0xffffffffffffffff;
      uVar218 = 0xffffffffffffffff;
      uVar25 = uVar1 & 0x1f0;
      pauVar31 = (undefined1 (*) [16])(uVar24 + param_3);
      auVar245._8_8_ = _UNK_002009b8;
      auVar245._0_8_ = _DAT_002009b0;
      auVar244._8_8_ = _UNK_002008c8;
      auVar244._0_8_ = _DAT_002008c0;
      uVar22 = uVar25;
      bVar53 = (byte)_DAT_00200740;
      bVar55 = bVar103;
      uVar57 = uVar105;
      uVar59 = uVar107;
      uVar61 = uVar109;
      uVar63 = uVar111;
      uVar65 = uVar113;
      uVar67 = uVar115;
      bVar69 = (byte)_UNK_00200748;
      bVar71 = bVar119;
      uVar73 = uVar121;
      uVar75 = uVar123;
      uVar77 = uVar125;
      uVar79 = uVar127;
      uVar81 = uVar129;
      uVar83 = uVar131;
      bVar85 = (byte)_DAT_002003a0;
      bVar86 = bVar176;
      uVar87 = uVar177;
      uVar88 = uVar178;
      uVar89 = uVar179;
      uVar90 = uVar180;
      uVar91 = uVar181;
      uVar92 = uVar182;
      bVar93 = (byte)_UNK_002003a8;
      bVar94 = bVar243;
      uVar95 = uVar185;
      uVar96 = uVar186;
      uVar97 = uVar187;
      uVar98 = uVar188;
      uVar99 = uVar189;
      uVar100 = uVar190;
      do {
        pauVar31 = pauVar31 + -1;
        auVar247._1_7_ = 0;
        auVar247[0] = bVar2;
        auVar247[8] = bVar2;
        auVar247._9_7_ = 0;
        auVar272[1] = uVar38;
        auVar272[0] = uVar37;
        auVar272[2] = uVar39;
        auVar272[3] = uVar40;
        auVar272[4] = uVar41;
        auVar272[5] = uVar42;
        auVar272[6] = uVar43;
        auVar272[7] = uVar44;
        auVar272[8] = uVar45;
        auVar272[9] = uVar46;
        auVar272[10] = uVar47;
        auVar272[0xb] = uVar48;
        auVar272[0xc] = uVar49;
        auVar272[0xd] = uVar50;
        auVar272[0xe] = uVar51;
        auVar272[0xf] = uVar52;
        auVar272 = NEON_cmhi(auVar272,auVar247,8);
        auVar248._1_7_ = 0;
        auVar248[0] = bVar2;
        auVar248[8] = bVar2;
        auVar248._9_7_ = 0;
        auVar273[1] = uVar56;
        auVar273[0] = uVar54;
        auVar273[2] = uVar58;
        auVar273[3] = uVar60;
        auVar273[4] = uVar62;
        auVar273[5] = uVar64;
        auVar273[6] = uVar66;
        auVar273[7] = uVar68;
        auVar273[8] = uVar70;
        auVar273[9] = uVar72;
        auVar273[10] = uVar74;
        auVar273[0xb] = uVar76;
        auVar273[0xc] = uVar78;
        auVar273[0xd] = uVar80;
        auVar273[0xe] = uVar82;
        auVar273[0xf] = uVar84;
        auVar273 = NEON_cmhi(auVar273,auVar248,8);
        auVar249 = NEON_rev64(*pauVar31,1);
        auVar152._1_7_ = 0;
        auVar152[0] = bVar2;
        auVar152[8] = bVar2;
        auVar152._9_7_ = 0;
        auVar248 = NEON_cmhi(auVar245,auVar152,8);
        auVar153._1_7_ = 0;
        auVar153[0] = bVar2;
        auVar153[8] = bVar2;
        auVar153._9_7_ = 0;
        auVar13[1] = uVar104;
        auVar13[0] = uVar102;
        auVar13[2] = uVar106;
        auVar13[3] = uVar108;
        auVar13[4] = uVar110;
        auVar13[5] = uVar112;
        auVar13[6] = uVar114;
        auVar13[7] = uVar116;
        auVar13[8] = uVar118;
        auVar13[9] = uVar120;
        auVar13[10] = uVar122;
        auVar13[0xb] = uVar124;
        auVar13[0xc] = uVar126;
        auVar13[0xd] = uVar128;
        auVar13[0xe] = uVar130;
        auVar13[0xf] = uVar132;
        auVar247 = NEON_cmhi(auVar13,auVar153,8);
        auVar154._1_7_ = 0;
        auVar154[0] = bVar2;
        auVar154[8] = bVar2;
        auVar154._9_7_ = 0;
        auVar14[1] = uVar135;
        auVar14[0] = uVar134;
        auVar14[2] = uVar136;
        auVar14[3] = uVar137;
        auVar14[4] = uVar138;
        auVar14[5] = uVar139;
        auVar14[6] = uVar140;
        auVar14[7] = uVar141;
        auVar14[8] = uVar143;
        auVar14[9] = uVar144;
        auVar14[10] = uVar145;
        auVar14[0xb] = uVar146;
        auVar14[0xc] = uVar147;
        auVar14[0xd] = uVar148;
        auVar14[0xe] = uVar149;
        auVar14[0xf] = uVar150;
        auVar153 = NEON_cmhi(auVar14,auVar154,8);
        auVar155._1_7_ = 0;
        auVar155[0] = bVar2;
        auVar155[8] = bVar2;
        auVar155._9_7_ = 0;
        auVar154 = NEON_cmhi(auVar244,auVar155,8);
        auVar250._1_7_ = 0;
        auVar250[0] = bVar2;
        auVar250[8] = bVar2;
        auVar250._9_7_ = 0;
        auVar17[1] = bVar86;
        auVar17[0] = bVar85;
        auVar17[2] = uVar87;
        auVar17[3] = uVar88;
        auVar17[4] = uVar89;
        auVar17[5] = uVar90;
        auVar17[6] = uVar91;
        auVar17[7] = uVar92;
        auVar17[8] = bVar93;
        auVar17[9] = bVar94;
        auVar17[10] = uVar95;
        auVar17[0xb] = uVar96;
        auVar17[0xc] = uVar97;
        auVar17[0xd] = uVar98;
        auVar17[0xe] = uVar99;
        auVar17[0xf] = uVar100;
        auVar155 = NEON_cmhi(auVar17,auVar250,8);
        lVar28 = auVar244._8_8_;
        auVar244._0_8_ = auVar244._0_8_ + 0x10;
        auVar244._8_8_ = lVar28 + 0x10;
        uVar22 = uVar22 - 0x10;
        lVar28 = CONCAT17(uVar92,CONCAT16(uVar91,CONCAT15(uVar90,CONCAT14(uVar89,CONCAT13(uVar88,
                                                  CONCAT12(uVar87,CONCAT11(bVar86,bVar85))))))) +
                 0x10;
        bVar85 = (byte)lVar28;
        bVar86 = (byte)((ulong)lVar28 >> 8);
        uVar87 = (undefined1)((ulong)lVar28 >> 0x10);
        uVar88 = (undefined1)((ulong)lVar28 >> 0x18);
        uVar89 = (undefined1)((ulong)lVar28 >> 0x20);
        uVar90 = (undefined1)((ulong)lVar28 >> 0x28);
        uVar91 = (undefined1)((ulong)lVar28 >> 0x30);
        uVar92 = (undefined1)((ulong)lVar28 >> 0x38);
        lVar28 = CONCAT17(uVar100,CONCAT16(uVar99,CONCAT15(uVar98,CONCAT14(uVar97,CONCAT13(uVar96,
                                                  CONCAT12(uVar95,CONCAT11(bVar94,bVar93))))))) +
                 0x10;
        bVar93 = (byte)lVar28;
        bVar94 = (byte)((ulong)lVar28 >> 8);
        uVar95 = (undefined1)((ulong)lVar28 >> 0x10);
        uVar96 = (undefined1)((ulong)lVar28 >> 0x18);
        uVar97 = (undefined1)((ulong)lVar28 >> 0x20);
        uVar98 = (undefined1)((ulong)lVar28 >> 0x28);
        uVar99 = (undefined1)((ulong)lVar28 >> 0x30);
        uVar100 = (undefined1)((ulong)lVar28 >> 0x38);
        lVar28 = auVar245._8_8_;
        auVar245._0_8_ = auVar245._0_8_ + 0x10;
        auVar245._8_8_ = lVar28 + 0x10;
        lVar28 = CONCAT17(uVar141,CONCAT16(uVar140,CONCAT15(uVar139,CONCAT14(uVar138,CONCAT13(
                                                  uVar137,CONCAT12(uVar136,CONCAT11(uVar135,uVar134)
                                                                  )))))) + 0x10;
        uVar134 = (undefined1)lVar28;
        uVar135 = (undefined1)((ulong)lVar28 >> 8);
        uVar136 = (undefined1)((ulong)lVar28 >> 0x10);
        uVar137 = (undefined1)((ulong)lVar28 >> 0x18);
        uVar138 = (undefined1)((ulong)lVar28 >> 0x20);
        uVar139 = (undefined1)((ulong)lVar28 >> 0x28);
        uVar140 = (undefined1)((ulong)lVar28 >> 0x30);
        uVar141 = (undefined1)((ulong)lVar28 >> 0x38);
        lVar28 = CONCAT17(uVar150,CONCAT16(uVar149,CONCAT15(uVar148,CONCAT14(uVar147,CONCAT13(
                                                  uVar146,CONCAT12(uVar145,CONCAT11(uVar144,uVar143)
                                                                  )))))) + 0x10;
        uVar143 = (undefined1)lVar28;
        uVar144 = (undefined1)((ulong)lVar28 >> 8);
        uVar145 = (undefined1)((ulong)lVar28 >> 0x10);
        uVar146 = (undefined1)((ulong)lVar28 >> 0x18);
        uVar147 = (undefined1)((ulong)lVar28 >> 0x20);
        uVar148 = (undefined1)((ulong)lVar28 >> 0x28);
        uVar149 = (undefined1)((ulong)lVar28 >> 0x30);
        uVar150 = (undefined1)((ulong)lVar28 >> 0x38);
        auVar250 = NEON_ext(auVar249,auVar249,8,1);
        lVar28 = CONCAT17(uVar116,CONCAT16(uVar114,CONCAT15(uVar112,CONCAT14(uVar110,CONCAT13(
                                                  uVar108,CONCAT12(uVar106,CONCAT11(uVar104,uVar102)
                                                                  )))))) + 0x10;
        uVar102 = (undefined1)lVar28;
        uVar104 = (undefined1)((ulong)lVar28 >> 8);
        uVar106 = (undefined1)((ulong)lVar28 >> 0x10);
        uVar108 = (undefined1)((ulong)lVar28 >> 0x18);
        uVar110 = (undefined1)((ulong)lVar28 >> 0x20);
        uVar112 = (undefined1)((ulong)lVar28 >> 0x28);
        uVar114 = (undefined1)((ulong)lVar28 >> 0x30);
        uVar116 = (undefined1)((ulong)lVar28 >> 0x38);
        lVar28 = CONCAT17(uVar132,CONCAT16(uVar130,CONCAT15(uVar128,CONCAT14(uVar126,CONCAT13(
                                                  uVar124,CONCAT12(uVar122,CONCAT11(uVar120,uVar118)
                                                                  )))))) + 0x10;
        uVar118 = (undefined1)lVar28;
        uVar120 = (undefined1)((ulong)lVar28 >> 8);
        uVar122 = (undefined1)((ulong)lVar28 >> 0x10);
        uVar124 = (undefined1)((ulong)lVar28 >> 0x18);
        uVar126 = (undefined1)((ulong)lVar28 >> 0x20);
        uVar128 = (undefined1)((ulong)lVar28 >> 0x28);
        uVar130 = (undefined1)((ulong)lVar28 >> 0x30);
        uVar132 = (undefined1)((ulong)lVar28 >> 0x38);
        lVar28 = CONCAT17(uVar68,CONCAT16(uVar66,CONCAT15(uVar64,CONCAT14(uVar62,CONCAT13(uVar60,
                                                  CONCAT12(uVar58,CONCAT11(uVar56,uVar54))))))) +
                 0x10;
        uVar54 = (undefined1)lVar28;
        uVar56 = (undefined1)((ulong)lVar28 >> 8);
        uVar58 = (undefined1)((ulong)lVar28 >> 0x10);
        uVar60 = (undefined1)((ulong)lVar28 >> 0x18);
        uVar62 = (undefined1)((ulong)lVar28 >> 0x20);
        uVar64 = (undefined1)((ulong)lVar28 >> 0x28);
        uVar66 = (undefined1)((ulong)lVar28 >> 0x30);
        uVar68 = (undefined1)((ulong)lVar28 >> 0x38);
        lVar28 = CONCAT17(uVar84,CONCAT16(uVar82,CONCAT15(uVar80,CONCAT14(uVar78,CONCAT13(uVar76,
                                                  CONCAT12(uVar74,CONCAT11(uVar72,uVar70))))))) +
                 0x10;
        uVar70 = (undefined1)lVar28;
        uVar72 = (undefined1)((ulong)lVar28 >> 8);
        uVar74 = (undefined1)((ulong)lVar28 >> 0x10);
        uVar76 = (undefined1)((ulong)lVar28 >> 0x18);
        uVar78 = (undefined1)((ulong)lVar28 >> 0x20);
        uVar80 = (undefined1)((ulong)lVar28 >> 0x28);
        uVar82 = (undefined1)((ulong)lVar28 >> 0x30);
        uVar84 = (undefined1)((ulong)lVar28 >> 0x38);
        lVar28 = CONCAT17(uVar44,CONCAT16(uVar43,CONCAT15(uVar42,CONCAT14(uVar41,CONCAT13(uVar40,
                                                  CONCAT12(uVar39,CONCAT11(uVar38,uVar37))))))) +
                 0x10;
        uVar37 = (undefined1)lVar28;
        uVar38 = (undefined1)((ulong)lVar28 >> 8);
        uVar39 = (undefined1)((ulong)lVar28 >> 0x10);
        uVar40 = (undefined1)((ulong)lVar28 >> 0x18);
        uVar41 = (undefined1)((ulong)lVar28 >> 0x20);
        uVar42 = (undefined1)((ulong)lVar28 >> 0x28);
        uVar43 = (undefined1)((ulong)lVar28 >> 0x30);
        uVar44 = (undefined1)((ulong)lVar28 >> 0x38);
        lVar28 = CONCAT17(uVar52,CONCAT16(uVar51,CONCAT15(uVar50,CONCAT14(uVar49,CONCAT13(uVar48,
                                                  CONCAT12(uVar47,CONCAT11(uVar46,uVar45))))))) +
                 0x10;
        uVar45 = (undefined1)lVar28;
        uVar46 = (undefined1)((ulong)lVar28 >> 8);
        uVar47 = (undefined1)((ulong)lVar28 >> 0x10);
        uVar48 = (undefined1)((ulong)lVar28 >> 0x18);
        uVar49 = (undefined1)((ulong)lVar28 >> 0x20);
        uVar50 = (undefined1)((ulong)lVar28 >> 0x28);
        uVar51 = (undefined1)((ulong)lVar28 >> 0x30);
        uVar52 = (undefined1)((ulong)lVar28 >> 0x38);
        bVar251 = auVar250[3] ^ bVar2;
        bVar252 = auVar250[5] ^ bVar2;
        bVar253 = auVar250[7] ^ bVar2;
        bVar159 = auVar250[9] ^ bStack_57;
        uVar18 = CONCAT12(bVar159,(short)(CONCAT12(bVar159,CONCAT11(auVar250[8] ^ bStack_58,bVar253)
                                                  ) >> 8)) & 0xff00ff;
        auVar19[10] = bVar252;
        auVar19._0_10_ = (unkuint10)(byte)(auVar250[4] ^ bVar2) << 0x40;
        auVar20[0xc] = bVar251;
        auVar20._0_12_ = ZEXT112((byte)(auVar250[2] ^ bVar2)) << 0x40;
        uVar151 = auVar19._8_3_ & 0xffff;
        uVar29 = (ulong)auVar20._8_5_ & 0xffffffff;
        auVar249._1_7_ = 0;
        auVar249[0] = bVar2;
        auVar249[8] = bVar2;
        auVar249._9_7_ = 0;
        auVar16[1] = bVar55;
        auVar16[0] = bVar53;
        auVar16[2] = uVar57;
        auVar16[3] = uVar59;
        auVar16[4] = uVar61;
        auVar16[5] = uVar63;
        auVar16[6] = uVar65;
        auVar16[7] = uVar67;
        auVar16[8] = bVar69;
        auVar16[9] = bVar71;
        auVar16[10] = uVar73;
        auVar16[0xb] = uVar75;
        auVar16[0xc] = uVar77;
        auVar16[0xd] = uVar79;
        auVar16[0xe] = uVar81;
        auVar16[0xf] = uVar83;
        auVar152 = NEON_cmhi(auVar16,auVar249,8);
        lVar28 = CONCAT17(uVar67,CONCAT16(uVar65,CONCAT15(uVar63,CONCAT14(uVar61,CONCAT13(uVar59,
                                                  CONCAT12(uVar57,CONCAT11(bVar55,bVar53))))))) +
                 0x10;
        bVar53 = (byte)lVar28;
        bVar55 = (byte)((ulong)lVar28 >> 8);
        uVar57 = (undefined1)((ulong)lVar28 >> 0x10);
        uVar59 = (undefined1)((ulong)lVar28 >> 0x18);
        uVar61 = (undefined1)((ulong)lVar28 >> 0x20);
        uVar63 = (undefined1)((ulong)lVar28 >> 0x28);
        uVar65 = (undefined1)((ulong)lVar28 >> 0x30);
        uVar67 = (undefined1)((ulong)lVar28 >> 0x38);
        lVar28 = CONCAT17(uVar83,CONCAT16(uVar81,CONCAT15(uVar79,CONCAT14(uVar77,CONCAT13(uVar75,
                                                  CONCAT12(uVar73,CONCAT11(bVar71,bVar69))))))) +
                 0x10;
        bVar69 = (byte)lVar28;
        bVar71 = (byte)((ulong)lVar28 >> 8);
        uVar73 = (undefined1)((ulong)lVar28 >> 0x10);
        uVar75 = (undefined1)((ulong)lVar28 >> 0x18);
        uVar77 = (undefined1)((ulong)lVar28 >> 0x20);
        uVar79 = (undefined1)((ulong)lVar28 >> 0x28);
        uVar81 = (undefined1)((ulong)lVar28 >> 0x30);
        uVar83 = (undefined1)((ulong)lVar28 >> 0x38);
        bVar157 = (auVar273[0] | ~(auVar250[0xc] ^ bStack_54)) & bVar157;
        bVar158 = (auVar273[8] | ~(auVar250[0xd] ^ bStack_53)) & bVar158;
        bVar207 = (auVar272[0] | ~(auVar250[0xe] ^ bStack_52)) & (byte)uVar209;
        bVar210 = (byte)((ulong)uVar209 >> 8);
        bVar211 = (byte)((ulong)uVar209 >> 0x10);
        bVar212 = (byte)((ulong)uVar209 >> 0x18);
        bVar213 = (byte)((ulong)uVar209 >> 0x20);
        bVar214 = (byte)((ulong)uVar209 >> 0x28);
        bVar215 = (byte)((ulong)uVar209 >> 0x30);
        bVar216 = (byte)((ulong)uVar209 >> 0x38);
        uVar209 = CONCAT17(bVar216,CONCAT16(bVar215,CONCAT15(bVar214,CONCAT14(bVar213,CONCAT13(
                                                  bVar212,CONCAT12(bVar211,CONCAT11(bVar210,bVar207)
                                                                  ))))));
        bVar217 = (auVar272[8] | ~(auVar250[0xf] ^ bStack_51)) & (byte)uVar218;
        bVar219 = (byte)((ulong)uVar218 >> 8);
        bVar220 = (byte)((ulong)uVar218 >> 0x10);
        bVar221 = (byte)((ulong)uVar218 >> 0x18);
        bVar222 = (byte)((ulong)uVar218 >> 0x20);
        bVar223 = (byte)((ulong)uVar218 >> 0x28);
        bVar224 = (byte)((ulong)uVar218 >> 0x30);
        bVar225 = (byte)((ulong)uVar218 >> 0x38);
        uVar218 = CONCAT17(bVar225,CONCAT16(bVar224,CONCAT15(bVar223,CONCAT14(bVar222,CONCAT13(
                                                  bVar221,CONCAT12(bVar220,CONCAT11(bVar219,bVar217)
                                                                  ))))));
        bVar191 = (auVar247[0] | ~(auVar250[10] ^ bStack_56)) & (byte)uVar168;
        bVar192 = (byte)((ulong)uVar168 >> 8);
        bVar193 = (byte)((ulong)uVar168 >> 0x10);
        bVar194 = (byte)((ulong)uVar168 >> 0x18);
        bVar195 = (byte)((ulong)uVar168 >> 0x20);
        bVar196 = (byte)((ulong)uVar168 >> 0x28);
        bVar197 = (byte)((ulong)uVar168 >> 0x30);
        bVar198 = (byte)((ulong)uVar168 >> 0x38);
        uVar168 = CONCAT17(bVar198,CONCAT16(bVar197,CONCAT15(bVar196,CONCAT14(bVar195,CONCAT13(
                                                  bVar194,CONCAT12(bVar193,CONCAT11(bVar192,bVar191)
                                                                  ))))));
        bVar199 = (auVar247[8] | ~(auVar250[0xb] ^ bStack_55)) & (byte)uVar208;
        bVar200 = (byte)((ulong)uVar208 >> 8);
        bVar201 = (byte)((ulong)uVar208 >> 0x10);
        bVar202 = (byte)((ulong)uVar208 >> 0x18);
        bVar203 = (byte)((ulong)uVar208 >> 0x20);
        bVar204 = (byte)((ulong)uVar208 >> 0x28);
        bVar205 = (byte)((ulong)uVar208 >> 0x30);
        bVar206 = (byte)((ulong)uVar208 >> 0x38);
        uVar208 = CONCAT17(bVar206,CONCAT16(bVar205,CONCAT15(bVar204,CONCAT14(bVar203,CONCAT13(
                                                  bVar202,CONCAT12(bVar201,CONCAT11(bVar200,bVar199)
                                                                  ))))));
        bVar159 = (auVar155[0] | ~(auVar250[0] ^ bVar2)) & (byte)uVar30;
        bVar160 = (byte)(uVar30 >> 8);
        bVar162 = (byte)(uVar30 >> 0x10);
        bVar164 = (byte)(uVar30 >> 0x18);
        bVar166 = (byte)(uVar30 >> 0x20);
        bVar161 = (byte)(uVar30 >> 0x28);
        bVar163 = (byte)(uVar30 >> 0x30);
        bVar165 = (byte)(uVar30 >> 0x38);
        uVar30 = CONCAT17(bVar165,CONCAT16(bVar163,CONCAT15(bVar161,CONCAT14(bVar166,CONCAT13(
                                                  bVar164,CONCAT12(bVar162,CONCAT11(bVar160,bVar159)
                                                                  ))))));
        bVar167 = (auVar155[8] | ~(auVar250[1] ^ bVar2)) & (byte)uVar21;
        bVar169 = (byte)((ulong)uVar21 >> 8);
        bVar170 = (byte)((ulong)uVar21 >> 0x10);
        bVar171 = (byte)((ulong)uVar21 >> 0x18);
        bVar246 = (byte)((ulong)uVar21 >> 0x20);
        bVar172 = (byte)((ulong)uVar21 >> 0x28);
        bVar173 = (byte)((ulong)uVar21 >> 0x30);
        bVar174 = (byte)((ulong)uVar21 >> 0x38);
        uVar21 = CONCAT17(bVar174,CONCAT16(bVar173,CONCAT15(bVar172,CONCAT14(bVar246,CONCAT13(
                                                  bVar171,CONCAT12(bVar170,CONCAT11(bVar169,bVar167)
                                                                  ))))));
        bVar254 = (auVar248[0] | ~(auVar250[6] ^ bVar2)) & (byte)uVar255;
        bVar256 = (byte)((ulong)uVar255 >> 8);
        bVar257 = (byte)((ulong)uVar255 >> 0x10);
        bVar258 = (byte)((ulong)uVar255 >> 0x18);
        bVar259 = (byte)((ulong)uVar255 >> 0x20);
        bVar260 = (byte)((ulong)uVar255 >> 0x28);
        bVar261 = (byte)((ulong)uVar255 >> 0x30);
        bVar262 = (byte)((ulong)uVar255 >> 0x38);
        uVar255 = CONCAT17(bVar262,CONCAT16(bVar261,CONCAT15(bVar260,CONCAT14(bVar259,CONCAT13(
                                                  bVar258,CONCAT12(bVar257,CONCAT11(bVar256,bVar254)
                                                                  ))))));
        bVar263 = (auVar248[8] | ~bVar253) & (byte)uVar264;
        bVar265 = (byte)((ulong)uVar264 >> 8);
        bVar266 = (byte)((ulong)uVar264 >> 0x10);
        bVar267 = (byte)((ulong)uVar264 >> 0x18);
        bVar268 = (byte)((ulong)uVar264 >> 0x20);
        bVar269 = (byte)((ulong)uVar264 >> 0x28);
        bVar270 = (byte)((ulong)uVar264 >> 0x30);
        bVar271 = (byte)((ulong)uVar264 >> 0x38);
        uVar264 = CONCAT17(bVar271,CONCAT16(bVar270,CONCAT15(bVar269,CONCAT14(bVar268,CONCAT13(
                                                  bVar267,CONCAT12(bVar266,CONCAT11(bVar265,bVar263)
                                                                  ))))));
        bVar253 = (auVar153[0] | ~(byte)uVar18) & (byte)uVar226;
        bVar227 = (byte)((ulong)uVar226 >> 8);
        bVar228 = (byte)((ulong)uVar226 >> 0x10);
        bVar229 = (byte)((ulong)uVar226 >> 0x18);
        bVar230 = (byte)((ulong)uVar226 >> 0x20);
        bVar231 = (byte)((ulong)uVar226 >> 0x28);
        bVar232 = (byte)((ulong)uVar226 >> 0x30);
        bVar233 = (byte)((ulong)uVar226 >> 0x38);
        uVar226 = CONCAT17(bVar233,CONCAT16(bVar232,CONCAT15(bVar231,CONCAT14(bVar230,CONCAT13(
                                                  bVar229,CONCAT12(bVar228,CONCAT11(bVar227,bVar253)
                                                                  ))))));
        bVar234 = (auVar153[8] | ~(byte)(uVar18 >> 0x10)) & (byte)uVar235;
        bVar236 = (byte)((ulong)uVar235 >> 8);
        bVar237 = (byte)((ulong)uVar235 >> 0x10);
        bVar238 = (byte)((ulong)uVar235 >> 0x18);
        bVar239 = (byte)((ulong)uVar235 >> 0x20);
        bVar240 = (byte)((ulong)uVar235 >> 0x28);
        bVar241 = (byte)((ulong)uVar235 >> 0x30);
        bVar242 = (byte)((ulong)uVar235 >> 0x38);
        uVar235 = CONCAT17(bVar242,CONCAT16(bVar241,CONCAT15(bVar240,CONCAT14(bVar239,CONCAT13(
                                                  bVar238,CONCAT12(bVar237,CONCAT11(bVar236,bVar234)
                                                                  ))))));
        bVar175 = (auVar154[0] | ~(byte)uVar151) & bVar175;
        bVar184 = (auVar154[1] | ~(byte)(uVar151 >> 8)) & bVar184;
        bVar156 = (auVar154[8] | ~bVar252) & bVar156;
        bVar101 = (auVar152[0] | ~(byte)uVar29) & bVar101;
        bVar117 = (auVar152[1] | ~(byte)(uVar29 >> 8)) & bVar117;
        bVar133 = (auVar152[2] | ~(byte)(uVar29 >> 0x10)) & bVar133;
        bVar142 = (auVar152[3] | ~(byte)(uVar29 >> 0x18)) & bVar142;
        bVar183 = (auVar152[8] | ~bVar251) & bVar183;
      } while (uVar22 != 0);
      auVar34._0_8_ =
           CONCAT17(bVar165 & bVar233 & bVar198 & bVar262 & bVar216,
                    CONCAT16(bVar163 & bVar232 & bVar197 & bVar261 & bVar215,
                             CONCAT15(bVar161 & bVar231 & bVar196 & bVar260 & bVar214,
                                      CONCAT14(bVar166 & bVar230 & bVar195 & bVar259 & bVar213,
                                               CONCAT13(bVar164 & bVar229 &
                                                        bVar142 & bVar194 & bVar258 & bVar212,
                                                        CONCAT12(bVar162 & bVar228 &
                                                                 bVar133 & bVar193 &
                                                                 bVar257 & bVar211,
                                                                 CONCAT11(bVar160 & bVar227 &
                                                                          bVar184 & bVar117 & 
                                                  bVar192 & bVar256 & bVar210,
                                                  bVar159 & bVar253 & bVar175 & bVar157 &
                                                  bVar101 & bVar191 & bVar254 & bVar207)))))));
      auVar34[8] = bVar167 & bVar234 & bVar156 & bVar158 & bVar183 & bVar199 & bVar263 & bVar217;
      auVar34[9] = bVar169 & bVar236 & bVar200 & bVar265 & bVar219;
      auVar34[10] = bVar170 & bVar237 & bVar201 & bVar266 & bVar220;
      auVar34[0xb] = bVar171 & bVar238 & bVar202 & bVar267 & bVar221;
      auVar34[0xc] = bVar246 & bVar239 & bVar203 & bVar268 & bVar222;
      auVar34[0xd] = bVar172 & bVar240 & bVar204 & bVar269 & bVar223;
      auVar34[0xe] = bVar173 & bVar241 & bVar205 & bVar270 & bVar224;
      auVar34[0xf] = bVar174 & bVar242 & bVar206 & bVar271 & bVar225;
      auVar244 = NEON_ext(auVar34,auVar34,8,1);
      uVar30 = auVar34._0_8_ & auVar244._0_8_;
      if (uVar1 == uVar25) goto LAB_004733cc;
      uVar22 = uVar25;
      if (((uint)uVar1 >> 3 & 1) == 0) goto LAB_0047339c;
    }
    bVar183 = (byte)uVar22;
    bVar184 = (byte)(uVar22 >> 8);
    uVar73 = (undefined1)((ulong)_UNK_002009b8 >> 0x10);
    uVar75 = (undefined1)((ulong)_UNK_002009b8 >> 0x18);
    uVar77 = (undefined1)((ulong)_UNK_002009b8 >> 0x20);
    uVar79 = (undefined1)((ulong)_UNK_002009b8 >> 0x28);
    uVar81 = (undefined1)((ulong)_UNK_002009b8 >> 0x30);
    uVar83 = (undefined1)((ulong)_UNK_002009b8 >> 0x38);
    uVar57 = (undefined1)((ulong)_DAT_002009b0 >> 0x10);
    uVar59 = (undefined1)((ulong)_DAT_002009b0 >> 0x18);
    uVar61 = (undefined1)((ulong)_DAT_002009b0 >> 0x20);
    uVar63 = (undefined1)((ulong)_DAT_002009b0 >> 0x28);
    uVar65 = (undefined1)((ulong)_DAT_002009b0 >> 0x30);
    uVar67 = (undefined1)((ulong)_DAT_002009b0 >> 0x38);
    uVar95 = (undefined1)((ulong)_UNK_002008c8 >> 0x10);
    uVar96 = (undefined1)((ulong)_UNK_002008c8 >> 0x18);
    uVar97 = (undefined1)((ulong)_UNK_002008c8 >> 0x20);
    uVar98 = (undefined1)((ulong)_UNK_002008c8 >> 0x28);
    uVar99 = (undefined1)((ulong)_UNK_002008c8 >> 0x30);
    uVar100 = (undefined1)((ulong)_UNK_002008c8 >> 0x38);
    uVar87 = (undefined1)((ulong)_DAT_002008c0 >> 0x10);
    uVar88 = (undefined1)((ulong)_DAT_002008c0 >> 0x18);
    uVar89 = (undefined1)((ulong)_DAT_002008c0 >> 0x20);
    uVar90 = (undefined1)((ulong)_DAT_002008c0 >> 0x28);
    uVar91 = (undefined1)((ulong)_DAT_002008c0 >> 0x30);
    uVar92 = (undefined1)((ulong)_DAT_002008c0 >> 0x38);
    auVar35._8_8_ = 0xffffffffffffffff;
    auVar35._0_8_ = 0xffffffffffffffff;
    bVar133 = 0xff;
    bVar142 = 0xff;
    uVar21 = 0xffffffffffffffff;
    uVar168 = 0xffffffffffffffff;
    auVar32._8_8_ = 0xffffffffffffffff;
    auVar32._0_8_ = uVar30;
    bVar53 = bVar183 | (byte)_DAT_002009b0;
    bVar55 = bVar184 | (byte)((ulong)_DAT_002009b0 >> 8);
    bVar69 = bVar183 | (byte)_UNK_002009b8;
    bVar71 = bVar184 | (byte)((ulong)_UNK_002009b8 >> 8);
    bVar85 = bVar183 | (byte)_DAT_002008c0;
    bVar86 = bVar184 | (byte)((ulong)_DAT_002008c0 >> 8);
    bVar93 = bVar183 | (byte)_UNK_002008c8;
    bVar94 = bVar184 | (byte)((ulong)_UNK_002008c8 >> 8);
    bVar101 = bVar183 | (byte)_DAT_00200740;
    bVar103 = bVar184 | bVar103;
    bVar117 = bVar183 | (byte)_UNK_00200748;
    bVar119 = bVar184 | bVar119;
    bVar175 = bVar183 | (byte)_DAT_002003a0;
    bVar176 = bVar184 | bVar176;
    bVar183 = bVar183 | (byte)_UNK_002003a8;
    bVar184 = bVar184 | bVar243;
    uVar25 = uVar1 & 0x1f8;
    puVar26 = (undefined8 *)((uVar24 - uVar22) + param_3);
    lVar28 = uVar22 - uVar25;
    do {
      puVar26 = puVar26 + -1;
      auVar3._1_7_ = 0;
      auVar3[0] = bVar2;
      auVar3[8] = bVar2;
      auVar3._9_7_ = 0;
      auVar9[1] = bVar55;
      auVar9[0] = bVar53;
      auVar9[2] = uVar57;
      auVar9[3] = uVar59;
      auVar9[4] = uVar61;
      auVar9[5] = uVar63;
      auVar9[6] = uVar65;
      auVar9[7] = uVar67;
      auVar9[8] = bVar69;
      auVar9[9] = bVar71;
      auVar9[10] = uVar73;
      auVar9[0xb] = uVar75;
      auVar9[0xc] = uVar77;
      auVar9[0xd] = uVar79;
      auVar9[0xe] = uVar81;
      auVar9[0xf] = uVar83;
      auVar244 = NEON_cmhi(auVar9,auVar3,8);
      auVar4._1_7_ = 0;
      auVar4[0] = bVar2;
      auVar4[8] = bVar2;
      auVar4._9_7_ = 0;
      auVar10[1] = bVar86;
      auVar10[0] = bVar85;
      auVar10[2] = uVar87;
      auVar10[3] = uVar88;
      auVar10[4] = uVar89;
      auVar10[5] = uVar90;
      auVar10[6] = uVar91;
      auVar10[7] = uVar92;
      auVar10[8] = bVar93;
      auVar10[9] = bVar94;
      auVar10[10] = uVar95;
      auVar10[0xb] = uVar96;
      auVar10[0xc] = uVar97;
      auVar10[0xd] = uVar98;
      auVar10[0xe] = uVar99;
      auVar10[0xf] = uVar100;
      auVar245 = NEON_cmhi(auVar10,auVar4,8);
      auVar5._1_7_ = 0;
      auVar5[0] = bVar2;
      auVar5[8] = bVar2;
      auVar5._9_7_ = 0;
      auVar12[1] = bVar103;
      auVar12[0] = bVar101;
      auVar12[2] = uVar105;
      auVar12[3] = uVar107;
      auVar12[4] = uVar109;
      auVar12[5] = uVar111;
      auVar12[6] = uVar113;
      auVar12[7] = uVar115;
      auVar12[8] = bVar117;
      auVar12[9] = bVar119;
      auVar12[10] = uVar121;
      auVar12[0xb] = uVar123;
      auVar12[0xc] = uVar125;
      auVar12[0xd] = uVar127;
      auVar12[0xe] = uVar129;
      auVar12[0xf] = uVar131;
      auVar247 = NEON_cmhi(auVar12,auVar5,8);
      auVar6._1_7_ = 0;
      auVar6[0] = bVar2;
      auVar6[8] = bVar2;
      auVar6._9_7_ = 0;
      auVar15[1] = bVar176;
      auVar15[0] = bVar175;
      auVar15[2] = uVar177;
      auVar15[3] = uVar178;
      auVar15[4] = uVar179;
      auVar15[5] = uVar180;
      auVar15[6] = uVar181;
      auVar15[7] = uVar182;
      auVar15[8] = bVar183;
      auVar15[9] = bVar184;
      auVar15[10] = uVar185;
      auVar15[0xb] = uVar186;
      auVar15[0xc] = uVar187;
      auVar15[0xd] = uVar188;
      auVar15[0xe] = uVar189;
      auVar15[0xf] = uVar190;
      auVar248 = NEON_cmhi(auVar15,auVar6,8);
      uVar208 = NEON_rev64(*puVar26,1);
      lVar11 = CONCAT17(uVar92,CONCAT16(uVar91,CONCAT15(uVar90,CONCAT14(uVar89,CONCAT13(uVar88,
                                                  CONCAT12(uVar87,CONCAT11(bVar86,bVar85))))))) + 8;
      bVar85 = (byte)lVar11;
      bVar86 = (byte)((ulong)lVar11 >> 8);
      uVar87 = (undefined1)((ulong)lVar11 >> 0x10);
      uVar88 = (undefined1)((ulong)lVar11 >> 0x18);
      uVar89 = (undefined1)((ulong)lVar11 >> 0x20);
      uVar90 = (undefined1)((ulong)lVar11 >> 0x28);
      uVar91 = (undefined1)((ulong)lVar11 >> 0x30);
      uVar92 = (undefined1)((ulong)lVar11 >> 0x38);
      lVar11 = CONCAT17(uVar100,CONCAT16(uVar99,CONCAT15(uVar98,CONCAT14(uVar97,CONCAT13(uVar96,
                                                  CONCAT12(uVar95,CONCAT11(bVar94,bVar93))))))) + 8;
      bVar93 = (byte)lVar11;
      bVar94 = (byte)((ulong)lVar11 >> 8);
      uVar95 = (undefined1)((ulong)lVar11 >> 0x10);
      uVar96 = (undefined1)((ulong)lVar11 >> 0x18);
      uVar97 = (undefined1)((ulong)lVar11 >> 0x20);
      uVar98 = (undefined1)((ulong)lVar11 >> 0x28);
      uVar99 = (undefined1)((ulong)lVar11 >> 0x30);
      uVar100 = (undefined1)((ulong)lVar11 >> 0x38);
      lVar28 = lVar28 + 8;
      lVar11 = CONCAT17(uVar115,CONCAT16(uVar113,CONCAT15(uVar111,CONCAT14(uVar109,CONCAT13(uVar107,
                                                  CONCAT12(uVar105,CONCAT11(bVar103,bVar101))))))) +
               8;
      bVar101 = (byte)lVar11;
      bVar103 = (byte)((ulong)lVar11 >> 8);
      uVar105 = (undefined1)((ulong)lVar11 >> 0x10);
      uVar107 = (undefined1)((ulong)lVar11 >> 0x18);
      uVar109 = (undefined1)((ulong)lVar11 >> 0x20);
      uVar111 = (undefined1)((ulong)lVar11 >> 0x28);
      uVar113 = (undefined1)((ulong)lVar11 >> 0x30);
      uVar115 = (undefined1)((ulong)lVar11 >> 0x38);
      lVar11 = CONCAT17(uVar131,CONCAT16(uVar129,CONCAT15(uVar127,CONCAT14(uVar125,CONCAT13(uVar123,
                                                  CONCAT12(uVar121,CONCAT11(bVar119,bVar117))))))) +
               8;
      bVar117 = (byte)lVar11;
      bVar119 = (byte)((ulong)lVar11 >> 8);
      uVar121 = (undefined1)((ulong)lVar11 >> 0x10);
      uVar123 = (undefined1)((ulong)lVar11 >> 0x18);
      uVar125 = (undefined1)((ulong)lVar11 >> 0x20);
      uVar127 = (undefined1)((ulong)lVar11 >> 0x28);
      uVar129 = (undefined1)((ulong)lVar11 >> 0x30);
      uVar131 = (undefined1)((ulong)lVar11 >> 0x38);
      lVar11 = CONCAT17(uVar182,CONCAT16(uVar181,CONCAT15(uVar180,CONCAT14(uVar179,CONCAT13(uVar178,
                                                  CONCAT12(uVar177,CONCAT11(bVar176,bVar175))))))) +
               8;
      bVar175 = (byte)lVar11;
      bVar176 = (byte)((ulong)lVar11 >> 8);
      uVar177 = (undefined1)((ulong)lVar11 >> 0x10);
      uVar178 = (undefined1)((ulong)lVar11 >> 0x18);
      uVar179 = (undefined1)((ulong)lVar11 >> 0x20);
      uVar180 = (undefined1)((ulong)lVar11 >> 0x28);
      uVar181 = (undefined1)((ulong)lVar11 >> 0x30);
      uVar182 = (undefined1)((ulong)lVar11 >> 0x38);
      lVar11 = CONCAT17(uVar190,CONCAT16(uVar189,CONCAT15(uVar188,CONCAT14(uVar187,CONCAT13(uVar186,
                                                  CONCAT12(uVar185,CONCAT11(bVar184,bVar183))))))) +
               8;
      bVar183 = (byte)lVar11;
      bVar184 = (byte)((ulong)lVar11 >> 8);
      uVar185 = (undefined1)((ulong)lVar11 >> 0x10);
      uVar186 = (undefined1)((ulong)lVar11 >> 0x18);
      uVar187 = (undefined1)((ulong)lVar11 >> 0x20);
      uVar188 = (undefined1)((ulong)lVar11 >> 0x28);
      uVar189 = (undefined1)((ulong)lVar11 >> 0x30);
      uVar190 = (undefined1)((ulong)lVar11 >> 0x38);
      lVar11 = CONCAT17(uVar67,CONCAT16(uVar65,CONCAT15(uVar63,CONCAT14(uVar61,CONCAT13(uVar59,
                                                  CONCAT12(uVar57,CONCAT11(bVar55,bVar53))))))) + 8;
      bVar53 = (byte)lVar11;
      bVar55 = (byte)((ulong)lVar11 >> 8);
      uVar57 = (undefined1)((ulong)lVar11 >> 0x10);
      uVar59 = (undefined1)((ulong)lVar11 >> 0x18);
      uVar61 = (undefined1)((ulong)lVar11 >> 0x20);
      uVar63 = (undefined1)((ulong)lVar11 >> 0x28);
      uVar65 = (undefined1)((ulong)lVar11 >> 0x30);
      uVar67 = (undefined1)((ulong)lVar11 >> 0x38);
      lVar11 = CONCAT17(uVar83,CONCAT16(uVar81,CONCAT15(uVar79,CONCAT14(uVar77,CONCAT13(uVar75,
                                                  CONCAT12(uVar73,CONCAT11(bVar71,bVar69))))))) + 8;
      bVar69 = (byte)lVar11;
      bVar71 = (byte)((ulong)lVar11 >> 8);
      uVar73 = (undefined1)((ulong)lVar11 >> 0x10);
      uVar75 = (undefined1)((ulong)lVar11 >> 0x18);
      uVar77 = (undefined1)((ulong)lVar11 >> 0x20);
      uVar79 = (undefined1)((ulong)lVar11 >> 0x28);
      uVar81 = (undefined1)((ulong)lVar11 >> 0x30);
      uVar83 = (undefined1)((ulong)lVar11 >> 0x38);
      bVar243 = auVar244[0] | ~((byte)((ulong)uVar208 >> 0x30) ^ bVar2);
      uVar30 = CONCAT17(auVar244[7],
                        CONCAT16(auVar244[6],
                                 CONCAT15(auVar244[5],
                                          CONCAT14(auVar244[4],
                                                   CONCAT13(auVar244[3],
                                                            CONCAT12(auVar244[2],
                                                                     CONCAT11(auVar244[1],bVar243)))
                                                  )))) | 0xffffffffffffff00;
      bVar246 = auVar247[0] | ~((byte)((ulong)uVar208 >> 0x10) ^ bVar2);
      uVar22 = CONCAT17(auVar247[7],
                        CONCAT16(auVar247[6],
                                 CONCAT15(auVar247[5],
                                          CONCAT14(auVar247[4],
                                                   CONCAT13(auVar247[3],
                                                            CONCAT12(auVar247[2],
                                                                     CONCAT11(auVar247[1],bVar246)))
                                                  )))) | 0xffffffffffffff00;
      bVar243 = bVar243 & (byte)uVar21;
      bVar156 = (byte)(uVar30 >> 8) & (byte)((ulong)uVar21 >> 8);
      bVar157 = (byte)(uVar30 >> 0x10) & (byte)((ulong)uVar21 >> 0x10);
      bVar158 = (byte)(uVar30 >> 0x18) & (byte)((ulong)uVar21 >> 0x18);
      bVar159 = (byte)(uVar30 >> 0x20) & (byte)((ulong)uVar21 >> 0x20);
      bVar160 = (byte)(uVar30 >> 0x28) & (byte)((ulong)uVar21 >> 0x28);
      bVar162 = (byte)(uVar30 >> 0x30) & (byte)((ulong)uVar21 >> 0x30);
      bVar164 = (byte)(uVar30 >> 0x38) & (byte)((ulong)uVar21 >> 0x38);
      uVar21 = CONCAT17(bVar164,CONCAT16(bVar162,CONCAT15(bVar160,CONCAT14(bVar159,CONCAT13(bVar158,
                                                  CONCAT12(bVar157,CONCAT11(bVar156,bVar243)))))));
      bVar166 = (auVar244[8] | ~((byte)((ulong)uVar208 >> 0x38) ^ bVar2)) & (byte)uVar168;
      bVar161 = (byte)((ulong)uVar168 >> 8);
      bVar163 = (byte)((ulong)uVar168 >> 0x10);
      bVar165 = (byte)((ulong)uVar168 >> 0x18);
      bVar167 = (byte)((ulong)uVar168 >> 0x20);
      bVar169 = (byte)((ulong)uVar168 >> 0x28);
      bVar170 = (byte)((ulong)uVar168 >> 0x30);
      bVar171 = (byte)((ulong)uVar168 >> 0x38);
      uVar168 = CONCAT17(bVar171,CONCAT16(bVar170,CONCAT15(bVar169,CONCAT14(bVar167,CONCAT13(bVar165
                                                  ,CONCAT12(bVar163,CONCAT11(bVar161,bVar166)))))));
      bVar133 = (auVar245[0] | ~((byte)((ulong)uVar208 >> 0x20) ^ bVar2)) & bVar133;
      bVar142 = (auVar245[8] | ~((byte)((ulong)uVar208 >> 0x28) ^ bVar2)) & bVar142;
      auVar36[0] = bVar246 & auVar35[0];
      auVar36[1] = (byte)(uVar22 >> 8) & auVar35[1];
      auVar36[2] = (byte)(uVar22 >> 0x10) & auVar35[2];
      auVar36[3] = (byte)(uVar22 >> 0x18) & auVar35[3];
      auVar36[4] = (byte)(uVar22 >> 0x20) & auVar35[4];
      auVar36[5] = (byte)(uVar22 >> 0x28) & auVar35[5];
      auVar36[6] = (byte)(uVar22 >> 0x30) & auVar35[6];
      auVar36[7] = (byte)(uVar22 >> 0x38) & auVar35[7];
      auVar36[8] = (auVar247[8] | ~((byte)((ulong)uVar208 >> 0x18) ^ bVar2)) & auVar35[8];
      auVar36[9] = auVar35[9];
      auVar36[10] = auVar35[10];
      auVar36[0xb] = auVar35[0xb];
      auVar36[0xc] = auVar35[0xc];
      auVar36[0xd] = auVar35[0xd];
      auVar36[0xe] = auVar35[0xe];
      auVar36[0xf] = auVar35[0xf];
      auVar33[0] = (auVar248[0] | ~((byte)uVar208 ^ bVar2)) & auVar32[0];
      auVar33[1] = auVar32[1];
      auVar33[2] = auVar32[2];
      auVar33[3] = auVar32[3];
      auVar33[4] = auVar32[4];
      auVar33[5] = auVar32[5];
      auVar33[6] = auVar32[6];
      auVar33[7] = auVar32[7];
      auVar33[8] = (auVar248[8] | ~((byte)((ulong)uVar208 >> 8) ^ bVar2)) & auVar32[8];
      auVar33[9] = auVar32[9];
      auVar33[10] = auVar32[10];
      auVar33[0xb] = auVar32[0xb];
      auVar33[0xc] = auVar32[0xc];
      auVar33[0xd] = auVar32[0xd];
      auVar33[0xe] = auVar32[0xe];
      auVar33[0xf] = auVar32[0xf];
      auVar32 = auVar33;
      auVar35 = auVar36;
    } while (lVar28 != 0);
    bVar103 = auVar33[0] & bVar133 & auVar36[0] & bVar243;
    bVar119 = auVar33[1] & auVar36[1] & bVar156;
    bVar176 = auVar33[2] & auVar36[2] & bVar157;
    bVar243 = auVar33[3] & auVar36[3] & bVar158;
    bVar53 = auVar33[4] & auVar36[4] & bVar159;
    bVar55 = auVar33[5] & auVar36[5] & bVar160;
    bVar69 = auVar33[6] & auVar36[6] & bVar162;
    bVar71 = auVar33[7] & auVar36[7] & bVar164;
    bVar85 = auVar33[8] & bVar142 & auVar36[8] & bVar166;
    bVar86 = auVar33[9] & auVar36[9] & bVar161;
    bVar93 = auVar33[10] & auVar36[10] & bVar163;
    bVar94 = auVar33[0xb] & auVar36[0xb] & bVar165;
    bVar101 = auVar33[0xc] & auVar36[0xc] & bVar167;
    bVar117 = auVar33[0xd] & auVar36[0xd] & bVar169;
    bVar133 = auVar33[0xe] & auVar36[0xe] & bVar170;
    bVar142 = auVar33[0xf] & auVar36[0xf] & bVar171;
    auVar7[1] = bVar119;
    auVar7[0] = bVar103;
    auVar7[2] = bVar176;
    auVar7[3] = bVar243;
    auVar7[4] = bVar53;
    auVar7[5] = bVar55;
    auVar7[6] = bVar69;
    auVar7[7] = bVar71;
    auVar7[8] = bVar85;
    auVar7[9] = bVar86;
    auVar7[10] = bVar93;
    auVar7[0xb] = bVar94;
    auVar7[0xc] = bVar101;
    auVar7[0xd] = bVar117;
    auVar7[0xe] = bVar133;
    auVar7[0xf] = bVar142;
    auVar8[1] = bVar119;
    auVar8[0] = bVar103;
    auVar8[2] = bVar176;
    auVar8[3] = bVar243;
    auVar8[4] = bVar53;
    auVar8[5] = bVar55;
    auVar8[6] = bVar69;
    auVar8[7] = bVar71;
    auVar8[8] = bVar85;
    auVar8[9] = bVar86;
    auVar8[10] = bVar93;
    auVar8[0xb] = bVar94;
    auVar8[0xc] = bVar101;
    auVar8[0xd] = bVar117;
    auVar8[0xe] = bVar133;
    auVar8[0xf] = bVar142;
    auVar244 = NEON_ext(auVar7,auVar8,8,1);
    uVar30 = (ulong)(bVar103 & auVar244[0]);
    if (uVar1 == uVar25) goto LAB_004733cc;
  }
LAB_0047339c:
  pbVar27 = (byte *)(param_3 + ~uVar25 + uVar24);
  do {
    uVar22 = uVar25 + 1;
    uVar29 = (ulong)((uint)*pbVar27 ^ bVar2 ^ 0xffffffff);
    if (uVar23 < uVar25) {
      uVar29 = 0xffffffffffffffff;
    }
    uVar30 = uVar29 & uVar30;
    uVar25 = uVar22;
    pbVar27 = pbVar27 + -1;
  } while (uVar1 != uVar22);
LAB_004733cc:
  uVar1 = 0;
  if ((uVar30 & 0xff) == 0xff) {
    uVar1 = ~uVar23;
  }
  *param_1 = uVar1 + uVar24;
  uVar21 = FUN_00472db4();
  return uVar21;
}


// ===== 004733fc  FUN_004733fc =====

undefined8 * FUN_004733fc(double param_1,double param_2,int param_3)

{
  undefined1 (*pauVar1) [12];
  uint uVar2;
  uint uVar3;
  size_t __size;
  undefined1 auVar4 [16];
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar8;
  double dVar9;
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  double dVar12;
  undefined1 (*pauVar13) [12];
  void *pvVar14;
  float *pfVar15;
  void *pvVar16;
  int iVar17;
  size_t sVar18;
  float *pfVar19;
  undefined1 (*pauVar20) [12];
  ulong uVar21;
  long lVar22;
  undefined8 *puVar23;
  uint uVar24;
  uint uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  double dVar33;
  undefined1 auVar34 [16];
  float fVar35;
  float fVar36;
  
  puVar23 = (undefined8 *)0x0;
  if (((param_1 <= param_2) && (0.0 < param_1)) && (0.0 < param_2)) {
    puVar23 = (undefined8 *)malloc(0x68);
    iVar17 = 0xb;
    if (param_3 != 0) {
      iVar17 = 0x23;
    }
    puVar23[4] = param_1;
    puVar23[5] = param_2;
    uVar3 = iVar17 * 0x1000 - 0x1000U >> 1;
    *(undefined4 *)(puVar23 + 2) = 0x3f800000;
    *(int *)((long)puVar23 + 0x14) = iVar17;
    __size = (ulong)uVar3 << 3;
    *(uint *)(puVar23 + 3) = uVar3;
    pvVar14 = malloc(__size);
    FUN_00473cb8((int)DAT_001b71d8,0,pvVar14,uVar3,0x1000);
    sVar18 = (ulong)uVar3 << 2;
    pfVar15 = (float *)malloc(sVar18);
    *puVar23 = pfVar15;
    pvVar16 = malloc(sVar18);
    sVar18 = 0;
    pfVar19 = pfVar15 + 4;
    puVar23[1] = pvVar16;
    do {
      pauVar20 = (undefined1 (*) [12])((long)pvVar14 + sVar18);
      sVar18 = sVar18 + 0x40;
      auVar10 = *pauVar20;
      auVar11 = *(undefined1 (*) [12])(pauVar20[2] + 8);
      dVar5 = *(double *)pauVar20[4];
      dVar33 = *(double *)(pauVar20[4] + 8);
      auVar31._12_4_ = (int)((ulong)*(undefined8 *)(*pauVar20 + 8) >> 0x20);
      auVar31._0_12_ = auVar10;
      auVar34._12_4_ = (int)((ulong)*(undefined8 *)(pauVar20[3] + 4) >> 0x20);
      auVar34._0_12_ = auVar11;
      *(ulong *)(pfVar19 + -2) =
           CONCAT44((float)*(double *)pauVar20[2],(float)*(double *)(pauVar20[1] + 4));
      *(ulong *)(pfVar19 + -4) = CONCAT44((float)auVar31._8_8_,(float)auVar10._0_8_);
      *(ulong *)(pfVar19 + 2) = CONCAT44((float)dVar33,(float)dVar5);
      *(ulong *)pfVar19 = CONCAT44((float)auVar34._8_8_,(float)auVar11._0_8_);
      pfVar19 = pfVar19 + 8;
    } while (__size != sVar18);
    uVar21 = (ulong)(uVar3 - 1);
    pauVar20 = (undefined1 (*) [12])(pfVar15 + 5);
    fVar26 = *pfVar15;
    pfVar19 = (float *)((long)pvVar16 + 0x10);
    lVar22 = 7 - uVar21;
    fVar27 = fVar26;
    fVar29 = fVar26;
    fVar28 = fVar26;
    do {
      auVar30._12_4_ = fVar28;
      auVar30._8_4_ = fVar29;
      auVar30._4_4_ = fVar27;
      auVar30._0_4_ = fVar26;
      pauVar1 = (undefined1 (*) [12])(pauVar20[-2] + 8);
      pauVar13 = pauVar20 + -1;
      fVar32 = (float)((ulong)*(undefined8 *)(*pauVar13 + 4) >> 0x20);
      uVar8 = *(undefined8 *)*pauVar1;
      fVar29 = (float)*(undefined8 *)(*pauVar20 + 8);
      fVar28 = (float)((ulong)*(undefined8 *)(*pauVar20 + 8) >> 0x20);
      auVar10 = *pauVar20;
      fVar26 = (float)*(undefined8 *)*pauVar20;
      fVar27 = (float)((ulong)*(undefined8 *)*pauVar20 >> 0x20);
      lVar22 = lVar22 + 8;
      pauVar20 = (undefined1 (*) [12])(pauVar20[2] + 8);
      auVar6._12_4_ = fVar32;
      auVar6._0_12_ = *pauVar1;
      auVar31 = NEON_ext(auVar30,auVar6,0xc,1);
      auVar4._12_4_ = fVar28;
      auVar4._0_12_ = auVar10;
      auVar7._12_4_ = fVar32;
      auVar7._0_12_ = *pauVar1;
      auVar34 = NEON_ext(auVar7,auVar4,0xc,1);
      *(ulong *)(pfVar19 + -2) =
           CONCAT44(fVar32 - auVar31._12_4_,(float)*(undefined8 *)(*pauVar13 + 4) - auVar31._8_4_);
      *(ulong *)(pfVar19 + -4) =
           CONCAT44((float)((ulong)uVar8 >> 0x20) - auVar31._4_4_,(float)uVar8 - auVar31._0_4_);
      pfVar19[4] = fVar29 - auVar34._8_4_;
      pfVar19[5] = fVar28 - auVar34._12_4_;
      *pfVar19 = fVar26 - auVar34._0_4_;
      pfVar19[1] = fVar27 - auVar34._4_4_;
      pfVar19 = pfVar19 + 8;
    } while (lVar22 != 0);
    lVar22 = uVar21 * 4;
    fVar29 = pfVar15[uVar21 - 6];
    fVar26 = pfVar15[uVar21 - 5];
    fVar32 = pfVar15[uVar21 - 4];
    fVar35 = pfVar15[uVar21 - 3];
    fVar36 = pfVar15[uVar21 - 2];
    *(float *)((long)pvVar16 + (uVar21 - 7) * 4) = fVar29 - fVar28;
    fVar27 = pfVar15[uVar21 - 1];
    *(float *)((long)pvVar16 + lVar22 + -0x18) = fVar26 - fVar29;
    fVar29 = pfVar15[uVar21];
    *(float *)((long)pvVar16 + lVar22 + -0x14) = fVar32 - fVar26;
    *(float *)((long)pvVar16 + lVar22 + -0x10) = fVar35 - fVar32;
    *(float *)((long)pvVar16 + lVar22 + -0xc) = fVar36 - fVar35;
    *(float *)((long)pvVar16 + lVar22 + -8) = fVar27 - fVar36;
    *(float *)((long)pvVar16 + lVar22 + -4) = fVar29 - fVar27;
    *(float *)((long)pvVar16 + lVar22) = -fVar29;
    free(pvVar14);
    dVar33 = (double)(iVar17 + 1) / 2.0;
    dVar5 = 1.0;
    if (1.0 <= 1.0 / param_1) {
      dVar5 = 1.0 / param_1;
    }
    dVar12 = 1.0;
    if (1.0 <= 1.0 / param_2) {
      dVar12 = 1.0 / param_2;
    }
    dVar9 = (double)NEON_fmadd(dVar33,dVar5,0x4024000000000000);
    dVar5 = (double)NEON_fmadd(dVar33,dVar12,0x4024000000000000);
    uVar24 = (uint)dVar9;
    uVar25 = (uint)dVar5;
    uVar3 = uVar24;
    if (uVar24 <= uVar25) {
      uVar3 = uVar25;
    }
    *(uint *)(puVar23 + 9) = uVar3;
    uVar2 = uVar3 * 2 + 10;
    if (uVar2 < 0x1001) {
      uVar2 = 0x1000;
    }
    *(uint *)(puVar23 + 6) = uVar2;
    pvVar14 = malloc((ulong)(uVar2 + uVar3) << 2);
    *(uint *)(puVar23 + 8) = uVar3;
    *(uint *)((long)puVar23 + 0x44) = uVar3;
    puVar23[7] = pvVar14;
    if (uVar3 != 0) {
      if (uVar25 <= uVar24) {
        uVar25 = uVar24;
      }
      memset(pvVar14,0,(ulong)uVar25 << 2);
    }
    dVar5 = (double)NEON_fmadd((double)uVar2,param_2,0x4000000000000000);
    *(int *)((long)puVar23 + 0x4c) = (int)dVar5;
    pvVar14 = malloc((ulong)(uint)(int)dVar5 << 2);
    puVar23[10] = pvVar14;
    *(undefined4 *)(puVar23 + 0xb) = 0;
    puVar23[0xc] = (double)uVar3;
  }
  return puVar23;
}


// ===== 0047369c  FUN_0047369c =====

ulong FUN_0047369c(double param_1,undefined8 *param_2,long param_3,int param_4,int param_5,
                  int *param_6,long param_7,uint param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  int iVar15;
  uint uVar16;
  undefined4 *puVar17;
  undefined8 *puVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  ulong uVar22;
  float fVar23;
  double dVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  float fVar28;
  
  dVar24 = (double)param_2[4];
  uVar4 = *(undefined4 *)(param_2 + 3);
  uVar2 = *param_2;
  uVar3 = param_2[1];
  *param_6 = 0;
  fVar23 = *(float *)(param_2 + 2);
  if ((dVar24 != param_1 && dVar24 < param_1 == (NAN(dVar24) || NAN(param_1))) ||
     ((double)param_2[5] < param_1)) {
    return 0xffffffff;
  }
  uVar8 = *(uint *)(param_2 + 0xb);
  uVar22 = 0;
  if (((int)param_8 < 1) || (uVar8 == 0)) goto LAB_0047383c;
  lVar9 = param_2[10];
  uVar12 = 0;
  uVar16 = uVar8;
  if (param_8 <= uVar8) {
    uVar16 = param_8;
  }
  uVar22 = (ulong)uVar16;
  if ((uVar16 < 8) || ((ulong)(param_7 - lVar9) < 0x20)) {
LAB_004737a8:
    lVar13 = uVar22 - uVar12;
    puVar11 = (undefined4 *)(lVar9 + uVar12 * 4);
    puVar17 = (undefined4 *)(param_7 + uVar12 * 4);
    do {
      lVar13 = lVar13 + -1;
      *puVar17 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar17 = puVar17 + 1;
    } while (lVar13 != 0);
  }
  else {
    uVar12 = uVar22 & 0x7ffffff8;
    puVar10 = (undefined8 *)(lVar9 + 0x10);
    puVar18 = (undefined8 *)(param_7 + 0x10);
    uVar14 = uVar12;
    do {
      puVar1 = puVar10 + -1;
      uVar25 = puVar10[-2];
      uVar27 = puVar10[1];
      uVar26 = *puVar10;
      uVar14 = uVar14 - 8;
      puVar10 = puVar10 + 4;
      puVar18[-1] = *puVar1;
      puVar18[-2] = uVar25;
      puVar18[1] = uVar27;
      *puVar18 = uVar26;
      puVar18 = puVar18 + 4;
    } while (uVar14 != 0);
    if (uVar12 != uVar22) goto LAB_004737a8;
  }
  uVar8 = uVar8 - uVar16;
  uVar12 = (ulong)uVar8;
  if (uVar8 != 0) {
    puVar10 = (undefined8 *)param_2[10];
    if (uVar8 < 8) {
      uVar14 = 0;
    }
    else {
      uVar14 = 0;
      if (0x1f < uVar22 * -4) {
        uVar14 = uVar12 & 0xfffffff8;
        uVar19 = uVar14;
        puVar18 = puVar10;
        do {
          puVar1 = (undefined8 *)((long)puVar18 + uVar22 * 4);
          uVar19 = uVar19 - 8;
          uVar25 = *puVar1;
          uVar27 = puVar1[3];
          uVar26 = puVar1[2];
          puVar18[1] = puVar1[1];
          *puVar18 = uVar25;
          puVar18[3] = uVar27;
          puVar18[2] = uVar26;
          puVar18 = puVar18 + 4;
        } while (uVar19 != 0);
        if (uVar14 == uVar12) goto LAB_00473838;
      }
    }
    lVar9 = uVar12 - uVar14;
    puVar11 = (undefined4 *)((long)puVar10 + uVar14 * 4);
    do {
      lVar9 = lVar9 + -1;
      *puVar11 = puVar11[uVar22];
      puVar11 = puVar11 + 1;
    } while (lVar9 != 0);
  }
LAB_00473838:
  *(uint *)(param_2 + 0xb) = uVar8;
LAB_0047383c:
  if (uVar8 == 0) {
    uVar12 = (ulong)*(uint *)((long)param_2 + 0x44);
    fVar28 = (float)((double)fVar23 * param_1);
    if (1.0 <= param_1) {
      fVar28 = fVar23;
    }
    do {
      do {
        iVar15 = *param_6;
        uVar8 = (uint)uVar12;
        uVar16 = *(int *)(param_2 + 6) - uVar8;
        if (param_4 - iVar15 <= (int)(*(int *)(param_2 + 6) - uVar8)) {
          uVar16 = param_4 - iVar15;
        }
        uVar14 = (ulong)uVar16;
        if (0 < (int)uVar16) {
          lVar9 = param_2[7];
          if (uVar16 < 0xc) {
LAB_004738a8:
            uVar19 = 0;
          }
          else {
            uVar19 = 0;
            if ((!CARRY4(uVar8,(uint)(uVar14 - 1))) && (uVar14 - 1 >> 0x20 == 0)) {
              lVar13 = (long)iVar15 * 4;
              if ((lVar9 + uVar12 * 4) - (lVar13 + param_3) < 0x20) goto LAB_004738a8;
              uVar19 = uVar14 & 0x7ffffff8;
              puVar10 = (undefined8 *)(param_3 + 0x10 + lVar13);
              uVar21 = uVar19;
              do {
                puVar1 = puVar10 + -1;
                uVar25 = puVar10[-2];
                uVar27 = puVar10[1];
                uVar26 = *puVar10;
                puVar18 = (undefined8 *)(lVar9 + uVar12 * 4);
                uVar21 = uVar21 - 8;
                puVar10 = puVar10 + 4;
                uVar12 = (ulong)((int)uVar12 + 8);
                puVar18[1] = *puVar1;
                *puVar18 = uVar25;
                puVar18[3] = uVar27;
                puVar18[2] = uVar26;
              } while (uVar21 != 0);
              if (uVar19 == uVar14) goto LAB_004738d8;
            }
          }
          uVar8 = uVar8 + (int)uVar19;
          lVar13 = uVar14 - uVar19;
          puVar11 = (undefined4 *)(param_3 + uVar19 * 4 + (long)iVar15 * 4);
          do {
            lVar13 = lVar13 + -1;
            *(undefined4 *)(lVar9 + (ulong)uVar8 * 4) = *puVar11;
            uVar8 = uVar8 + 1;
            puVar11 = puVar11 + 1;
          } while (lVar13 != 0);
        }
LAB_004738d8:
        *param_6 = uVar16 + iVar15;
        uVar16 = *(int *)((long)param_2 + 0x44) + uVar16;
        *(uint *)((long)param_2 + 0x44) = uVar16;
        if ((param_5 == 0) || (*param_6 != param_4)) {
          uVar8 = *(int *)(param_2 + 9) << 1;
        }
        else {
          uVar8 = *(uint *)(param_2 + 9);
          uVar12 = (ulong)uVar8;
          if (uVar8 != 0) {
            lVar9 = param_2[7];
            if (uVar8 < 0xc) {
              uVar14 = 0;
            }
            else {
              uVar14 = 0;
              if ((!CARRY4(uVar16,(uint)(uVar12 - 1))) && (uVar12 - 1 >> 0x20 == 0)) {
                uVar14 = uVar12 & 0xfffffff8;
                uVar19 = uVar14;
                uVar6 = uVar16;
                do {
                  puVar10 = (undefined8 *)(lVar9 + (ulong)uVar6 * 4);
                  uVar19 = uVar19 - 8;
                  uVar6 = uVar6 + 8;
                  puVar10[1] = 0;
                  *puVar10 = 0;
                  puVar10[3] = 0;
                  puVar10[2] = 0;
                } while (uVar19 != 0);
                if (uVar14 == uVar12) goto LAB_00473934;
              }
            }
            do {
              iVar15 = (int)uVar14;
              uVar14 = uVar14 + 1;
              *(undefined4 *)(lVar9 + (ulong)(uVar16 + iVar15) * 4) = 0;
            } while (uVar12 != uVar14);
          }
        }
LAB_00473934:
        iVar15 = uVar16 - uVar8;
        if (iVar15 < 1) {
          return uVar22;
        }
        if (param_1 < 1.0 == NAN(param_1)) {
          uVar8 = FUN_004740a0(param_1,fVar28,param_2[7],param_2[10],param_2 + 0xc,iVar15,uVar4,
                               uVar2,uVar3,0);
        }
        else {
          uVar8 = FUN_004741b8();
        }
        iVar5 = *(int *)(param_2 + 9);
        uVar16 = *(int *)(param_2 + 8) + iVar15;
        dVar24 = (double)param_2[0xc] - (double)iVar15;
        param_2[0xc] = dVar24;
        uVar6 = (int)dVar24 - iVar5;
        if (uVar6 != 0) {
          uVar16 = uVar6 + uVar16;
          param_2[0xc] = dVar24 - (double)uVar6;
        }
        uVar6 = (iVar5 - uVar16) + *(int *)((long)param_2 + 0x44);
        uVar12 = (ulong)uVar6;
        if (uVar6 != 0) {
          lVar9 = param_2[7];
          if (uVar6 < 0xc) {
            uVar14 = 0;
          }
          else {
            uVar14 = 0;
            if (((uint)(uVar12 - 1) <= iVar5 + ~uVar16) && (uVar12 - 1 >> 0x20 == 0)) {
              uVar14 = 0;
              uVar20 = uVar16 - iVar5;
              if (0x1f < (ulong)uVar20 * -4) {
                uVar14 = uVar12 & 0xfffffff8;
                puVar10 = (undefined8 *)(lVar9 + 0x10);
                uVar19 = uVar14;
                do {
                  puVar18 = (undefined8 *)(lVar9 + (ulong)uVar20 * 4);
                  uVar19 = uVar19 - 8;
                  uVar20 = uVar20 + 8;
                  uVar25 = *puVar18;
                  uVar27 = puVar18[3];
                  uVar26 = puVar18[2];
                  puVar10[-1] = puVar18[1];
                  puVar10[-2] = uVar25;
                  puVar10[1] = uVar27;
                  *puVar10 = uVar26;
                  puVar10 = puVar10 + 4;
                } while (uVar19 != 0);
                if (uVar14 == uVar12) goto LAB_00473a08;
              }
            }
          }
          lVar13 = uVar12 - uVar14;
          uVar16 = (uVar16 + (int)uVar14) - iVar5;
          puVar11 = (undefined4 *)(lVar9 + uVar14 * 4);
          do {
            uVar14 = (ulong)uVar16;
            lVar13 = lVar13 + -1;
            uVar16 = uVar16 + 1;
            *puVar11 = *(undefined4 *)(lVar9 + uVar14 * 4);
            puVar11 = puVar11 + 1;
          } while (lVar13 != 0);
        }
LAB_00473a08:
        *(int *)(param_2 + 8) = iVar5;
        *(uint *)((long)param_2 + 0x44) = uVar6;
        if (*(uint *)((long)param_2 + 0x4c) < uVar8) {
          fwrite("libresample: Output array overflow!\n",0x24,1,*(FILE **)PTR_stderr_007a1438);
          return 0xffffffff;
        }
        *(uint *)(param_2 + 0xb) = uVar8;
      } while (uVar8 == 0);
      iVar15 = (int)uVar22;
      uVar16 = param_8 - iVar15;
      if ((int)uVar16 < 1) {
        return uVar22;
      }
      lVar9 = param_2[10];
      if (uVar8 <= uVar16) {
        uVar16 = uVar8;
      }
      uVar22 = (ulong)uVar16;
      if ((uVar16 < 8) || (lVar13 = (long)iVar15 * 4, (ulong)((lVar13 + param_7) - lVar9) < 0x20)) {
        uVar14 = 0;
LAB_00473a5c:
        lVar13 = uVar22 - uVar14;
        puVar11 = (undefined4 *)(lVar9 + uVar14 * 4);
        puVar17 = (undefined4 *)(param_7 + uVar14 * 4 + (long)iVar15 * 4);
        do {
          lVar13 = lVar13 + -1;
          *puVar17 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar17 = puVar17 + 1;
        } while (lVar13 != 0);
      }
      else {
        uVar14 = uVar22 & 0x7ffffff8;
        puVar10 = (undefined8 *)(lVar9 + 0x10);
        puVar18 = (undefined8 *)(param_7 + 0x10 + lVar13);
        uVar19 = uVar14;
        do {
          puVar1 = puVar10 + -1;
          uVar25 = puVar10[-2];
          uVar27 = puVar10[1];
          uVar26 = *puVar10;
          uVar19 = uVar19 - 8;
          puVar10 = puVar10 + 4;
          puVar18[-1] = *puVar1;
          puVar18[-2] = uVar25;
          puVar18[1] = uVar27;
          *puVar18 = uVar26;
          puVar18 = puVar18 + 4;
        } while (uVar19 != 0);
        if (uVar14 != uVar22) goto LAB_00473a5c;
      }
      uVar8 = uVar8 - uVar16;
      uVar14 = (ulong)uVar8;
      if (uVar8 != 0) {
        puVar10 = (undefined8 *)param_2[10];
        if (uVar8 < 8) {
          uVar19 = 0;
        }
        else {
          uVar19 = 0;
          if (0x1f < uVar22 * -4) {
            uVar19 = uVar14 & 0xfffffff8;
            uVar21 = uVar19;
            puVar18 = puVar10;
            do {
              puVar1 = (undefined8 *)((long)puVar18 + uVar22 * 4);
              uVar21 = uVar21 - 8;
              uVar25 = *puVar1;
              uVar27 = puVar1[3];
              uVar26 = puVar1[2];
              puVar18[1] = puVar1[1];
              *puVar18 = uVar25;
              puVar18[3] = uVar27;
              puVar18[2] = uVar26;
              puVar18 = puVar18 + 4;
            } while (uVar21 != 0);
            if (uVar19 == uVar14) goto LAB_00473c44;
          }
        }
        lVar9 = uVar19 - uVar14;
        puVar11 = (undefined4 *)((long)puVar10 + uVar19 * 4);
        do {
          bVar7 = lVar9 != -1;
          lVar9 = lVar9 + 1;
          *puVar11 = puVar11[uVar22];
          puVar11 = puVar11 + 1;
        } while (bVar7);
      }
LAB_00473c44:
      uVar22 = (ulong)(uVar16 + iVar15);
      *(uint *)(param_2 + 0xb) = uVar8;
    } while (uVar8 == 0);
  }
  return uVar22;
}


// ===== 00473c78  FUN_00473c78 =====

void FUN_00473c78(undefined8 *param_1)

{
  free((void *)param_1[7]);
  free((void *)param_1[10]);
  free((void *)*param_1);
  free((void *)param_1[1]);
  free(param_1);
  return;
}


// ===== 00473cb8  FUN_00473cb8 =====

void FUN_00473cb8(double param_1,double param_2,double *param_3,uint param_4,int param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  double *pdVar4;
  ulong uVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  double dVar14;
  
  uVar1 = (ulong)param_4;
  *param_3 = param_1 + param_1;
  if (1 < (int)param_4) {
    dVar7 = (double)param_5;
    if (param_4 == 2) {
      uVar2 = 1;
      dVar10 = DAT_001b7050;
    }
    else {
      uVar3 = uVar1 - 1;
      uVar2 = uVar3 | 1;
      pdVar4 = param_3 + 1;
      uVar5 = uVar3 & 0xfffffffffffffffe;
      uVar13 = DAT_001b70b8;
      do {
        auVar9._0_8_ = (long)(int)uVar13;
        iVar6 = (int)((ulong)uVar13 >> 0x20);
        auVar9._8_8_ = (long)iVar6;
        auVar9 = NEON_scvtf(auVar9,8);
        dVar10 = (auVar9._0_8_ * 3.1415926535897922) / dVar7;
        dVar11 = (auVar9._8_8_ * 3.1415926535897922) / dVar7;
        dVar8 = sin((dVar11 + dVar11) * param_1);
        dVar14 = sin((dVar10 + dVar10) * param_1);
        uVar13 = CONCAT44(iVar6 + 2,(int)uVar13 + 2);
        uVar5 = uVar5 - 2;
        pdVar4[1] = dVar8 / dVar11;
        *pdVar4 = dVar14 / dVar10;
        pdVar4 = pdVar4 + 2;
      } while (uVar5 != 0);
      dVar10 = DAT_001b7050;
      if (uVar3 == (uVar3 & 0xfffffffffffffffe)) goto LAB_00473dfc;
    }
    do {
      dVar14 = ((double)(int)uVar2 * dVar10) / dVar7;
      dVar8 = sin((dVar14 + dVar14) * param_1);
      param_3[uVar2] = dVar8 / dVar14;
      uVar2 = uVar2 + 1;
    } while (uVar1 != uVar2);
  }
LAB_00473dfc:
  dVar7 = DAT_001b70c0;
  dVar8 = 1.0;
  dVar10 = 1.0;
  iVar6 = 1;
  do {
    dVar14 = (double)iVar6;
    iVar6 = iVar6 + 1;
    dVar14 = (param_2 * 0.5) / dVar14;
    dVar8 = dVar8 * dVar14 * dVar14;
    dVar10 = dVar10 + dVar8;
  } while (dVar8 < dVar10 * DAT_001b70c0 == (NAN(dVar8) || NAN(dVar10 * DAT_001b70c0)));
  if (1 < (int)param_4) {
    uVar2 = 1;
    do {
      dVar12 = 1.0;
      iVar6 = 1;
      dVar8 = (1.0 / (double)(int)(param_4 - 1)) * (double)(int)uVar2;
      dVar14 = 1.0;
      dVar11 = (double)NEON_fmsub(dVar8,dVar8,0x3ff0000000000000);
      dVar8 = 0.0;
      if (0.0 <= dVar11) {
        dVar8 = dVar11;
      }
      do {
        dVar11 = (double)iVar6;
        iVar6 = iVar6 + 1;
        dVar11 = (SQRT(dVar8) * param_2 * 0.5) / dVar11;
        dVar14 = dVar14 * dVar11 * dVar11;
        dVar12 = dVar12 + dVar14;
      } while (dVar14 < dVar12 * dVar7 == (NAN(dVar14) || NAN(dVar12 * dVar7)));
      uVar5 = uVar2 + 1;
      param_3[uVar2] = (1.0 / dVar10) * dVar12 * param_3[uVar2];
      uVar2 = uVar5;
    } while (uVar5 != uVar1);
  }
  return;
}


// ===== 00473ef8  FUN_00473ef8 =====

float FUN_00473ef8(double param_1,long param_2,long param_3,uint param_4,char param_5,float *param_6
                  ,uint param_7)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  ulong uVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  double dVar10;
  float fVar11;
  
  pfVar1 = (float *)(param_2 + (ulong)param_4 * 4);
  dVar10 = param_1 * 4096.0;
  uVar4 = -(ulong)((uint)(int)(param_1 * 4096.0) >> 0x1f) & 0xfffffffc00000000 |
          (ulong)(uint)(int)(param_1 * 4096.0) << 2;
  pfVar5 = (float *)(param_2 + uVar4);
  pfVar6 = (float *)0x0;
  if (param_5 != '\0') {
    pfVar6 = (float *)(param_3 + uVar4);
  }
  dVar8 = 0.0;
  if (param_5 != '\0') {
    dVar8 = dVar10 - (double)(long)dVar10;
  }
  fVar7 = 0.0;
  pfVar2 = pfVar6;
  pfVar3 = pfVar5;
  if (dVar10 == 0.0) {
    pfVar2 = pfVar6 + 0x1000;
    pfVar3 = pfVar5 + 0x1000;
  }
  if (param_7 == 1) {
    pfVar1 = pfVar1 + -1;
    pfVar5 = pfVar3;
    pfVar6 = pfVar2;
  }
  if (param_5 == '\0') {
    if (pfVar5 < pfVar1) {
      do {
        fVar9 = *pfVar5;
        fVar11 = *param_6;
        pfVar5 = pfVar5 + 0x1000;
        param_6 = (float *)((long)param_6 +
                           (-(ulong)(param_7 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_7 << 2));
        fVar7 = fVar7 + fVar9 * fVar11;
      } while (pfVar5 < pfVar1);
    }
  }
  else if (pfVar5 < pfVar1) {
    do {
      fVar9 = *pfVar5;
      fVar11 = *pfVar6;
      pfVar5 = pfVar5 + 0x1000;
      pfVar6 = pfVar6 + 0x1000;
      dVar10 = (double)NEON_fmadd((double)fVar11,dVar8,(double)fVar9);
      fVar9 = *param_6;
      param_6 = (float *)((long)param_6 +
                         (-(ulong)(param_7 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_7 << 2));
      fVar7 = fVar7 + fVar9 * (float)dVar10;
    } while (pfVar5 < pfVar1);
  }
  return fVar7;
}


// ===== 00473fdc  FUN_00473fdc =====

float FUN_00473fdc(double param_1,double param_2,long param_3,long param_4,uint param_5,char param_6
                  ,float *param_7,uint param_8)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  long lVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  
  dVar6 = param_1 * param_2;
  pfVar1 = (float *)(param_3 + (ulong)param_5 * 4);
  if ((param_8 == 1) && (pfVar1 = pfVar1 + -1, param_1 == 0.0)) {
    dVar6 = dVar6 + param_2;
  }
  iVar3 = (int)dVar6;
  fVar5 = 0.0;
  pfVar2 = (float *)(param_3 + (long)iVar3 * 4);
  if (param_6 == '\0') {
    if (pfVar2 < pfVar1) {
      do {
        dVar6 = dVar6 + param_2;
        fVar7 = *param_7;
        param_7 = (float *)((long)param_7 +
                           (-(ulong)(param_8 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_8 << 2));
        fVar5 = fVar5 + *pfVar2 * fVar7;
        pfVar2 = (float *)(param_3 + (long)(int)dVar6 * 4);
      } while (pfVar2 < pfVar1);
    }
  }
  else if (pfVar2 < pfVar1) {
    do {
      lVar4 = (long)iVar3;
      dVar8 = dVar6 - (double)(long)dVar6;
      dVar6 = dVar6 + param_2;
      iVar3 = (int)dVar6;
      fVar7 = (float)NEON_fmadd(*(undefined4 *)(param_4 + lVar4 * 4),(float)dVar8,
                                *(undefined4 *)(param_3 + lVar4 * 4));
      fVar9 = *param_7;
      param_7 = (float *)((long)param_7 +
                         (-(ulong)(param_8 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_8 << 2));
      fVar5 = fVar5 + fVar7 * fVar9;
    } while ((float *)(param_3 + (long)iVar3 * 4) < pfVar1);
  }
  return fVar5;
}


// ===== 004740a0  FUN_004740a0 =====

ulong FUN_004740a0(double param_1,float param_2,long param_3,float *param_4,double *param_5,
                  uint param_6,undefined4 param_7,undefined8 param_8,undefined8 param_9,
                  undefined4 param_10)

{
  long lVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  
  dVar6 = *param_5;
  dVar7 = dVar6 + (double)param_6;
  pfVar3 = param_4;
  if (dVar6 < dVar7) {
    pfVar2 = param_4;
    do {
      lVar1 = param_3 + (long)(int)dVar6 * 4;
      fVar4 = (float)FUN_00473ef8(dVar6 - (double)(long)dVar6,param_8,param_9,param_7,param_10,lVar1
                                  ,0xffffffff);
      fVar5 = (float)FUN_00473ef8(1.0 - (dVar6 - (double)(long)dVar6),param_8,param_9,param_7,
                                  param_10,lVar1 + 4,1);
      dVar6 = 1.0 / param_1 + dVar6;
      pfVar3 = pfVar2 + 1;
      *pfVar2 = (fVar4 + fVar5) * param_2;
      pfVar2 = pfVar3;
    } while (dVar6 < dVar7);
  }
  *param_5 = dVar6;
  return (ulong)((long)pfVar3 - (long)param_4) >> 2;
}


// ===== 004741b8  FUN_004741b8 =====

ulong FUN_004741b8(double param_1,float param_2,long param_3,float *param_4,double *param_5,
                  uint param_6,undefined4 param_7,undefined8 param_8,undefined8 param_9,
                  undefined4 param_10)

{
  long lVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar8 = *param_5;
  dVar6 = param_1 * 4096.0;
  dVar9 = dVar8 + (double)param_6;
  dVar7 = 4096.0;
  if (dVar6 == 4096.0 || dVar6 < 4096.0 != NAN(dVar6)) {
    dVar7 = dVar6;
  }
  pfVar3 = param_4;
  if (dVar8 < dVar9) {
    pfVar2 = param_4;
    do {
      lVar1 = param_3 + (long)(int)dVar8 * 4;
      fVar4 = (float)FUN_00473fdc(dVar8 - (double)(long)dVar8,dVar7,param_8,param_9,param_7,param_10
                                  ,lVar1,0xffffffff);
      fVar5 = (float)FUN_00473fdc(1.0 - (dVar8 - (double)(long)dVar8),dVar7,param_8,param_9,param_7,
                                  param_10,lVar1 + 4,1);
      dVar8 = 1.0 / param_1 + dVar8;
      pfVar3 = pfVar2 + 1;
      *pfVar2 = (fVar4 + fVar5) * param_2;
      pfVar2 = pfVar3;
    } while (dVar8 < dVar9);
  }
  *param_5 = dVar8;
  return (ulong)((long)pfVar3 - (long)param_4) >> 2;
}


// ===== 004742ec  FUN_004742ec =====

void FUN_004742ec(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x13) = 0x3f800000;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  return;
}


// ===== 00474330  FUN_00474330 =====

void FUN_00474330(long *param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  long local_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  long local_e0;
  long *local_d8;
  undefined8 local_d0;
  long *local_90;
  undefined8 *puStack_88;
  undefined8 local_80;
  char *local_78;
  char *pcStack_70;
  undefined *local_68;
  char *pcStack_60;
  long local_58;
  ulong uStack_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_e0 = ((long)(param_2[2] - param_2[1]) >> 3) * -0x5555555555555555;
  auVar6 = FUN_00476894(param_2 + 4,param_3,param_3,&local_e0);
  local_58 = auVar6._0_8_;
  local_90 = &local_58;
  uStack_50 = auVar6._8_8_ & 0xff;
  puStack_88 = param_2;
  local_80 = param_3;
  if (*(long *)(param_4 + 0x10) == 0) {
LAB_00474440:
    FUN_004746c8(&local_90,param_4);
LAB_0047444c:
    if (param_2[7] != ((long)(param_2[2] - param_2[1]) >> 3) * -0x5555555555555555) {
      uVar5 = FUN_00753a74(0x88);
                    /* try { // try from 004744e8 to 004744ef has its CatchHandler @ 00474644 */
      FUN_00645c30(auStack_f8);
                    /* try { // try from 004744f0 to 0047450f has its CatchHandler @ 00474624 */
      FUN_0047488c(&local_e0,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/IOBinding.cc"
                   ,0x27,
                   "common::Status onnxruntime::IOBinding::BindInput(const std::string &, const OrtValue &)"
                   ,auStack_f8);
      uStack_118 = param_2[7];
      local_120 = ((long)(param_2[2] - param_2[1]) >> 3) * -0x5555555555555555;
      local_68 = &DAT_001d41e9;
      pcStack_60 = "Size mismatch:";
      local_78 = " it.second=";
      pcStack_70 = " index=";
      FUN_00477184(auStack_110,&pcStack_60,&uStack_118,&local_68,&local_120,&pcStack_70,
                   local_58 + 0x28,&local_78,&uStack_50);
                    /* try { // try from 00474588 to 004745cb has its CatchHandler @ 004745cc */
      FUN_00474a40(uVar5,&local_e0,"mapped_feed_names_.size() == feed_names_.size()",auStack_110);
      if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar5,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
      }
      goto LAB_00474680;
    }
    *param_1 = 0;
  }
  else {
    iVar1 = *(int *)(*(long *)(param_4 + 0x10) + 8);
    if ((iVar1 != 4) && (iVar1 != 2)) goto LAB_00474440;
    local_e0 = 0;
    local_d8 = (long *)0x0;
    local_d0 = 0;
                    /* try { // try from 004743d4 to 004743e3 has its CatchHandler @ 00474664 */
    FUN_005db84c(param_1,*param_2,param_3,param_4,&local_e0);
    if (*param_1 == 0) {
                    /* try { // try from 0047449c to 004744a7 has its CatchHandler @ 00474664 */
      FUN_004746c8(&local_90,&local_e0);
      plVar3 = local_d8;
      if ((local_d8 != (long *)0x0) &&
         (lVar4 = FUN_00755c50(0xffffffffffffffff,local_d8 + 1), lVar4 == 0)) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        FUN_0071245c(plVar3);
      }
      goto LAB_0047444c;
    }
                    /* try { // try from 004743ec to 0047440b has its CatchHandler @ 00474634 */
    FUN_00645c3c(0,param_1,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/IOBinding.cc"
                 ,"BindInput",0x21);
    plVar3 = local_d8;
    if ((local_d8 != (long *)0x0) &&
       (lVar4 = FUN_00755c50(0xffffffffffffffff,local_d8 + 1), lVar4 == 0)) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      FUN_0071245c(plVar3);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
LAB_00474680:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00474684  FUN_00474684 =====

void FUN_00474684(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)*param_1;
  *param_1 = 0;
  if (__ptr != (void *)0x0) {
    if ((*(byte *)((long)__ptr + 8) & 1) != 0) {
      free(*(void **)((long)__ptr + 0x18));
    }
    free(__ptr);
    return;
  }
  return;
}


// ===== 004746c8  FUN_004746c8 =====

void FUN_004746c8(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  byte *pbVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  
  lVar2 = param_1[1];
  if ((char)((long *)*param_1)[1] == '\0') {
    uVar3 = *param_2;
    lVar1 = param_2[1];
    puVar7 = (undefined8 *)(*(long *)(lVar2 + 0x48) + *(long *)(*(long *)*param_1 + 0x28) * 0x18);
    if (lVar1 != 0) {
      FUN_00755c20(1,lVar1 + 8);
    }
    plVar5 = (long *)puVar7[1];
    *puVar7 = uVar3;
    puVar7[1] = lVar1;
    if ((plVar5 != (long *)0x0) && (lVar2 = FUN_00755c50(0xffffffffffffffff,plVar5 + 1), lVar2 == 0)
       ) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      FUN_0071245c(plVar5);
    }
    puVar7[2] = param_2[2];
    return;
  }
  puVar7 = *(undefined8 **)(lVar2 + 0x10);
  pbVar4 = (byte *)param_1[2];
  if (puVar7 < *(undefined8 **)(lVar2 + 0x18)) {
    if ((*pbVar4 & 1) == 0) {
      uVar8 = *(undefined8 *)(pbVar4 + 8);
      uVar3 = *(undefined8 *)pbVar4;
      puVar7[2] = *(undefined8 *)(pbVar4 + 0x10);
      puVar7[1] = uVar8;
      *puVar7 = uVar3;
    }
    else {
                    /* try { // try from 004747ec to 004747f7 has its CatchHandler @ 00474834 */
      FUN_002fb36c(puVar7,*(undefined8 *)(pbVar4 + 0x10),*(undefined8 *)(pbVar4 + 8));
    }
    *(undefined8 **)(lVar2 + 0x10) = puVar7 + 3;
    puVar6 = *(undefined8 **)(lVar2 + 0x50);
    *(undefined8 **)(lVar2 + 0x10) = puVar7 + 3;
    if (puVar6 < *(undefined8 **)(lVar2 + 0x58)) {
LAB_004747ac:
      lVar1 = param_2[1];
      *puVar6 = *param_2;
      puVar6[1] = lVar1;
      if (lVar1 != 0) {
        FUN_00755c20(1,lVar1 + 8);
      }
      uVar3 = param_2[2];
      *(undefined8 **)(lVar2 + 0x50) = puVar6 + 3;
      puVar6[2] = uVar3;
      return;
    }
  }
  else {
    uVar3 = FUN_0034e788(lVar2 + 8);
    puVar6 = *(undefined8 **)(lVar2 + 0x50);
    *(undefined8 *)(lVar2 + 0x10) = uVar3;
    if (puVar6 < *(undefined8 **)(lVar2 + 0x58)) goto LAB_004747ac;
  }
  uVar3 = FUN_00476fb0(lVar2 + 0x48,param_2);
  *(undefined8 *)(lVar2 + 0x50) = uVar3;
  return;
}


// ===== 0047483c  FUN_0047483c =====

void FUN_0047483c(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 0047488c  FUN_0047488c =====

void FUN_0047488c(ulong *param_1,char *param_2,undefined4 param_3,char *param_4)

{
  ulong uVar1;
  size_t sVar2;
  undefined1 *puVar3;
  
  sVar2 = strlen(param_2);
  if (0xfffffffffffffff7 < sVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_002fb400(param_1);
  }
  if (sVar2 < 0x17) {
    puVar3 = (undefined1 *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)sVar2 << 1);
    if (sVar2 != 0) goto LAB_00474918;
  }
  else {
    uVar1 = (sVar2 & 0xfffffffffffffff8) + 8;
    if ((sVar2 | 7) != 0x17) {
      uVar1 = sVar2 | 7;
    }
    puVar3 = (undefined1 *)FUN_00759c3c(uVar1 + 1);
    param_1[1] = sVar2;
    param_1[2] = (ulong)puVar3;
    *param_1 = uVar1 + 1 | 1;
LAB_00474918:
    memmove(puVar3,param_2,sVar2);
  }
  puVar3[sVar2] = 0;
  *(undefined4 *)(param_1 + 3) = param_3;
  sVar2 = strlen(param_4);
  if (0xfffffffffffffff7 < sVar2) {
                    /* try { // try from 004749ec to 004749f3 has its CatchHandler @ 00474a24 */
                    /* WARNING: Subroutine does not return */
    FUN_002fb400(param_1 + 4);
  }
  if (sVar2 < 0x17) {
    puVar3 = (undefined1 *)((long)param_1 + 0x21);
    *(char *)(param_1 + 4) = (char)((int)sVar2 << 1);
    if (sVar2 == 0) goto LAB_004749a0;
  }
  else {
    uVar1 = (sVar2 & 0xfffffffffffffff8) + 8;
    if ((sVar2 | 7) != 0x17) {
      uVar1 = sVar2 | 7;
    }
                    /* try { // try from 00474978 to 0047497f has its CatchHandler @ 00474a24 */
    puVar3 = (undefined1 *)FUN_00759c3c(uVar1 + 1);
    param_1[5] = sVar2;
    param_1[6] = (ulong)puVar3;
    param_1[4] = uVar1 + 1 | 1;
  }
  memmove(puVar3,param_4,sVar2);
LAB_004749a0:
  puVar3[sVar2] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
                    /* try { // try from 004749c8 to 004749cb has its CatchHandler @ 004749f4 */
  FUN_00475d88();
  return;
}


// ===== 00474a40  FUN_00474a40 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00474a40(long *param_1,long param_2,char *param_3,byte *param_4)

{
  undefined *puVar1;
  ulong uVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  long lVar6;
  undefined7 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  size_t sVar11;
  long lVar12;
  byte local_190;
  undefined7 uStack_18f;
  ulong uStack_188;
  undefined7 *local_180;
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
  
  lVar6 = tpidr_el0;
  local_70 = *(long *)(lVar6 + 0x28);
  *param_1 = (long)(PTR_DAT_007a1e38 + 0x10);
                    /* try { // try from 00474a94 to 00474a9f has its CatchHandler @ 00474d68 */
  FUN_00475ef4(param_1 + 1);
  puVar9 = PTR_PTR_007a1e48;
  puVar8 = PTR_DAT_007a1e40;
  local_d8 = 0;
  puVar1 = PTR_DAT_007a1e40 + 0x40;
  local_178[0] = *(undefined **)(PTR_PTR_007a1e48 + 8);
  uVar10 = *(undefined8 *)(PTR_PTR_007a1e48 + 0x10);
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  local_108[0] = puVar1;
  *(undefined8 *)((long)local_178 + *(long *)(local_178[0] + -0x18)) = uVar10;
  lVar12 = *(long *)(local_178[0] + -0x18);
                    /* try { // try from 00474ae8 to 00474af3 has its CatchHandler @ 00474d58 */
  FUN_00715fc0((long)local_178 + lVar12,local_178 + 1);
  local_178[0] = puVar8 + 0x18;
  *(undefined8 *)((long)&uStack_f0 + lVar12) = 0;
  *(undefined4 *)((long)auStack_e8 + lVar12) = 0xffffffff;
                    /* try { // try from 00474b0c to 00474b13 has its CatchHandler @ 00474d44 */
  local_108[0] = puVar1;
  FUN_007160dc(local_178 + 1);
  puVar1 = PTR_DAT_007a10f8;
  local_178[1] = PTR_DAT_007a10f8 + 0x10;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_110 = 0x10;
                    /* try { // try from 00474b34 to 00474b47 has its CatchHandler @ 00474d40 */
  FUN_00475ff4(&local_190,param_2,1);
  uVar2 = uStack_188;
  puVar7 = local_180;
  if ((local_190 & 1) == 0) {
    uVar2 = (ulong)(local_190 >> 1);
    puVar7 = &uStack_18f;
  }
                    /* try { // try from 00474b60 to 00474b67 has its CatchHandler @ 00474d28 */
  FUN_00303e0c(local_178,puVar7,uVar2);
  if ((local_190 & 1) != 0) {
    free(local_180);
  }
  if (param_3 != (char *)0x0) {
                    /* try { // try from 00474b7c to 00474c1b has its CatchHandler @ 00474d70 */
    uVar10 = FUN_00303e0c(local_178,&DAT_001bc0af,1);
    sVar11 = strlen(param_3);
    uVar10 = FUN_00303e0c(uVar10,param_3,sVar11);
    FUN_00303e0c(uVar10," was false.",0xb);
  }
  uVar10 = FUN_00303e0c(local_178,&DAT_001bc0af,1);
  uVar2 = *(ulong *)(param_4 + 8);
  pbVar3 = *(byte **)(param_4 + 0x10);
  if ((*param_4 & 1) == 0) {
    pbVar3 = param_4 + 1;
    uVar2 = (ulong)(*param_4 >> 1);
  }
  uVar10 = FUN_00303e0c(uVar10,pbVar3,uVar2);
  FUN_00303e0c(uVar10,&DAT_001e2980,1);
  if (*(long *)(param_2 + 0x38) != *(long *)(param_2 + 0x40)) {
    FUN_00303e0c(local_178,"Stacktrace:\n",0xc);
    pbVar4 = *(byte **)(param_2 + 0x40);
    for (pbVar3 = (byte *)(*(long *)(param_2 + 0x38) + 0x18); pbVar3 != pbVar4;
        pbVar3 = pbVar3 + 0x18) {
      uVar2 = *(ulong *)(pbVar3 + 8);
      pbVar5 = *(byte **)(pbVar3 + 0x10);
      if ((*pbVar3 & 1) == 0) {
        pbVar5 = pbVar3 + 1;
        uVar2 = (ulong)(*pbVar3 >> 1);
      }
                    /* try { // try from 00474c4c to 00474c63 has its CatchHandler @ 00474d74 */
      FUN_00303e0c(local_178,pbVar5,uVar2);
      FUN_00303e0c(local_178,&DAT_001e2980,1);
    }
  }
                    /* try { // try from 00474c74 to 00474c7f has its CatchHandler @ 00474d24 */
  FUN_00718470(&local_190,local_178 + 1);
  if ((*(byte *)(param_1 + 0xe) & 1) != 0) {
    free((void *)param_1[0x10]);
  }
  local_178[0] = *(undefined **)puVar9;
  param_1[0xf] = uStack_188;
  param_1[0xe] = CONCAT71(uStack_18f,local_190);
  param_1[0x10] = (long)local_180;
  *(undefined8 *)((long)local_178 + *(long *)(local_178[0] + -0x18)) =
       *(undefined8 *)(puVar9 + 0x18);
  local_178[1] = puVar1 + 0x10;
  if ((local_130 & 1) != 0) {
    free(local_120);
  }
  FUN_00716098(local_178 + 1);
  FUN_00716ee4(local_178,puVar9 + 8);
  thunk_FUN_00715e00(local_108);
  if (*(long *)(lVar6 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00474dcc  FUN_00474dcc =====

void FUN_00474dcc(long *param_1)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  *param_1 = (long)(PTR_DAT_007a1e38 + 0x10);
  if ((*(byte *)(param_1 + 0xe) & 1) != 0) {
    free((void *)param_1[0x10]);
  }
  pbVar3 = (byte *)param_1[0xb];
  if (pbVar3 != (byte *)0x0) {
    pbVar2 = (byte *)param_1[0xc];
    pbVar4 = pbVar3;
    if (pbVar2 != pbVar3) {
      do {
        pbVar4 = pbVar2 + -0x18;
        if ((*pbVar4 & 1) != 0) {
          free(*(void **)(pbVar2 + -8));
        }
        pbVar2 = pbVar4;
      } while (pbVar4 != pbVar3);
      pbVar4 = (byte *)param_1[0xb];
    }
    param_1[0xc] = (long)pbVar3;
    free(pbVar4);
  }
  pbVar3 = (byte *)param_1[8];
  if (pbVar3 != (byte *)0x0) {
    pbVar2 = (byte *)param_1[9];
    pbVar4 = pbVar3;
    if (pbVar2 != pbVar3) {
      do {
        pbVar4 = pbVar2 + -0x18;
        if ((*pbVar4 & 1) != 0) {
          free(*(void **)(pbVar2 + -8));
        }
        pbVar2 = pbVar4;
      } while (pbVar4 != pbVar3);
      pbVar4 = (byte *)param_1[8];
    }
    param_1[9] = (long)pbVar3;
    free(pbVar4);
  }
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 1);
  }
  else {
    free((void *)param_1[7]);
    bVar1 = *(byte *)(param_1 + 1);
  }
  if ((bVar1 & 1) != 0) {
    free((void *)param_1[3]);
    FUN_0073a174(param_1);
    return;
  }
  FUN_0073a174(param_1);
  return;
}


// ===== 00474ee8  FUN_00474ee8 =====

void FUN_00474ee8(byte *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar2 = *(byte **)(param_1 + 0x38);
  if (pbVar2 != (byte *)0x0) {
    pbVar1 = *(byte **)(param_1 + 0x40);
    pbVar3 = pbVar2;
    if (pbVar1 != pbVar2) {
      do {
        pbVar3 = pbVar1 + -0x18;
        if ((*pbVar3 & 1) != 0) {
          free(*(void **)(pbVar1 + -8));
        }
        pbVar1 = pbVar3;
      } while (pbVar3 != pbVar2);
      pbVar3 = *(byte **)(param_1 + 0x38);
    }
    *(byte **)(param_1 + 0x40) = pbVar2;
    free(pbVar3);
  }
  if ((param_1[0x20] & 1) != 0) {
    free(*(void **)(param_1 + 0x30));
  }
  if ((*param_1 & 1) != 0) {
    free(*(void **)(param_1 + 0x10));
    return;
  }
  return;
}


// ===== 00474f84  FUN_00474f84 =====

void FUN_00474f84(long param_1)

{
  byte *pbVar1;
  undefined8 *__ptr;
  byte *pbVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  byte *pbVar7;
  void *pvVar8;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    __ptr = (undefined8 *)*(void **)(param_1 + 0x30);
    while (__ptr != (undefined8 *)0x0) {
      pvVar8 = (void *)*__ptr;
      if ((*(byte *)(__ptr + 2) & 1) != 0) {
        free((void *)__ptr[4]);
      }
      free(__ptr);
      __ptr = (undefined8 *)pvVar8;
    }
    lVar4 = *(long *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x30) = 0;
    if (lVar4 != 0) {
      lVar5 = 0;
      do {
        *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar5 * 8) = 0;
        lVar5 = lVar5 + 1;
      } while (lVar4 != lVar5);
    }
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  pbVar1 = *(byte **)(param_1 + 8);
  pbVar7 = *(byte **)(param_1 + 0x10);
  while (pbVar2 = pbVar7, pbVar2 != pbVar1) {
    pbVar7 = pbVar2 + -0x18;
    if ((*pbVar7 & 1) != 0) {
      free(*(void **)(pbVar2 + -8));
    }
  }
  lVar4 = *(long *)(param_1 + 0x48);
  lVar5 = *(long *)(param_1 + 0x50);
  *(byte **)(param_1 + 0x10) = pbVar1;
  for (; lVar5 != lVar4; lVar5 = lVar5 + -0x18) {
    plVar6 = *(long **)(lVar5 + -0x10);
    if ((plVar6 != (long *)0x0) && (lVar3 = FUN_00755c50(0xffffffffffffffff,plVar6 + 1), lVar3 == 0)
       ) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_0071245c(plVar6);
    }
  }
  *(long *)(param_1 + 0x50) = lVar4;
  return;
}


// ===== 00475090  FUN_00475090 =====

void FUN_00475090(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0059e154(*param_2);
  FUN_00475104(param_1,*puVar1,puVar1[1],*param_2);
  if (*param_1 != 0) {
                    /* try { // try from 004750c4 to 004750e3 has its CatchHandler @ 004750f0 */
    FUN_00645c3c(0,param_1,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/IOBinding.cc"
                 ,"SynchronizeInputs",0x48);
  }
  return;
}


// ===== 00475104  FUN_00475104 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00475104(long *param_1,ulong *param_2,long param_3,long param_4)

{
  long *plVar1;
  void *__s1;
  long ******__n;
  byte bVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *******ppppppplVar7;
  long lVar8;
  uint uVar9;
  long *******ppppppplVar10;
  long ******pppppplVar11;
  ulong uVar12;
  long ******pppppplVar13;
  long *******ppppppplVar14;
  long ******pppppplVar15;
  long *****ppppplVar16;
  long *plVar17;
  long lVar18;
  long *******local_98;
  long *******local_90;
  long local_88;
  long *******local_80;
  long *******ppppppplStack_78;
  undefined1 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  cVar4 = (char)*param_2;
  local_90 = (long *******)0x0;
  local_88 = 0;
  if (cVar4 < -1) {
    do {
      uVar12 = ((*param_2 | *param_2 >> 7 ^ 0xffffffffffffffff) & 0x101010101010101) << 7;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = (ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3;
      param_2 = (ulong *)((long)param_2 + uVar12);
      param_3 = param_3 + uVar12 * 0x48;
      cVar4 = (char)*param_2;
    } while (cVar4 + 1 < 0 != SCARRY4((int)cVar4,1));
  }
  local_98 = (long *******)&local_90;
  if (cVar4 != -1) {
    do {
      uVar12 = *(ulong *)(param_3 + 0x18);
      plVar17 = (long *)(param_3 + 0x20);
      if ((uVar12 & 1) != 0) {
        plVar17 = (long *)*(long *)(param_3 + 0x20);
      }
      if (1 < uVar12) {
        lVar8 = (long)(plVar17 + (uVar12 >> 1) * 5);
        do {
          lVar18 = *(long *)((long)plVar17 + 8);
          if (lVar18 != 0) {
            bVar2 = *(byte *)(lVar18 + 0x128);
            pppppplVar11 = (long ******)(ulong)(bVar2 >> 1);
            if ((bVar2 & 1) != 0) {
              pppppplVar11 = *(long *******)(lVar18 + 0x130);
            }
            if (pppppplVar11 == (long ******)0x14) {
              plVar1 = (long *)(lVar18 + 0x129);
              if ((bVar2 & 1) != 0) {
                plVar1 = *(long **)(lVar18 + 0x138);
              }
              if ((*plVar1 == 0x7563657845555043 && plVar1[1] == 0x766f72506e6f6974) &&
                  (int)plVar1[2] == 0x72656469) goto LAB_00475264;
            }
            ppppppplVar10 = (long *******)&local_90;
            ppppppplVar14 = (long *******)&local_90;
            if (local_90 != (long *******)0x0) {
              ppppppplVar7 = local_90;
              __s1 = (void *)(lVar18 + 0x129);
              if ((bVar2 & 1) != 0) {
                __s1 = *(void **)(lVar18 + 0x138);
              }
              do {
                while( true ) {
                  ppppppplVar14 = ppppppplVar7;
                  pppppplVar15 = (long ******)(ulong)(*(byte *)(ppppppplVar14 + 4) >> 1);
                  pppppplVar13 = (long ******)((long)ppppppplVar14 + 0x21);
                  if ((*(byte *)(ppppppplVar14 + 4) & 1) != 0) {
                    pppppplVar15 = ppppppplVar14[5];
                    pppppplVar13 = ppppppplVar14[6];
                  }
                  __n = pppppplVar15;
                  if (pppppplVar11 <= pppppplVar15) {
                    __n = pppppplVar11;
                  }
                  iVar6 = memcmp(__s1,pppppplVar13,(size_t)__n);
                  bVar5 = pppppplVar11 < pppppplVar15;
                  if (iVar6 != 0) {
                    bVar5 = iVar6 < 0;
                  }
                  if (bVar5) break;
                  iVar6 = memcmp(pppppplVar13,__s1,(size_t)__n);
                  bVar5 = pppppplVar15 < pppppplVar11;
                  if (iVar6 != 0) {
                    bVar5 = iVar6 < 0;
                  }
                  if (!bVar5) goto LAB_00475264;
                  ppppppplVar7 = (long *******)ppppppplVar14[1];
                  if ((long *******)ppppppplVar14[1] == (long *******)0x0) {
                    ppppppplVar10 = ppppppplVar14 + 1;
                    goto LAB_004753a8;
                  }
                }
                ppppppplVar7 = (long *******)*ppppppplVar14;
                ppppppplVar10 = ppppppplVar14;
              } while ((long *******)*ppppppplVar14 != (long *******)0x0);
            }
LAB_004753a8:
                    /* try { // try from 004753a8 to 004753af has its CatchHandler @ 004756c8 */
            ppppppplVar7 = (long *******)FUN_00759c3c(0x38);
            local_70 = 0;
            local_80 = ppppppplVar7;
            ppppppplStack_78 = (long *******)&local_90;
            if ((*(byte *)(lVar18 + 0x128) & 1) == 0) {
              pppppplVar15 = *(long *******)(lVar18 + 0x130);
              pppppplVar11 = *(long *******)(lVar18 + 0x128);
              ppppppplVar7[6] = *(long *******)(lVar18 + 0x138);
              ppppppplVar7[5] = pppppplVar15;
              ppppppplVar7[4] = pppppplVar11;
            }
            else {
                    /* try { // try from 004753e4 to 004753eb has its CatchHandler @ 004756b8 */
              FUN_002fb36c(ppppppplVar7 + 4,*(undefined8 *)(lVar18 + 0x138),
                           *(undefined8 *)(lVar18 + 0x130));
            }
            *ppppppplVar7 = (long ******)0x0;
            ppppppplVar7[1] = (long ******)0x0;
            ppppppplVar7[2] = (long ******)ppppppplVar14;
            *ppppppplVar10 = (long ******)ppppppplVar7;
            if ((long *******)*local_98 != (long *******)0x0) {
              ppppppplVar7 = (long *******)*ppppppplVar10;
              local_98 = (long *******)*local_98;
            }
            bVar5 = ppppppplVar7 == local_90;
            *(bool *)(ppppppplVar7 + 3) = bVar5;
            while( true ) {
              if ((bVar5) || (pppppplVar11 = ppppppplVar7[2], ((ulong)pppppplVar11[3] & 1) != 0))
              goto LAB_00475258;
              ppppppplVar10 = (long *******)pppppplVar11[2];
              pppppplVar15 = *ppppppplVar10;
              if (pppppplVar15 != pppppplVar11) break;
              if ((ppppppplVar10[1] == (long ******)0x0) ||
                 (pppppplVar15 = ppppppplVar10[1] + 3, *(char *)pppppplVar15 != '\0')) {
                if ((long *******)*pppppplVar11 == ppppppplVar7) {
                  *(undefined1 *)(pppppplVar11 + 3) = 1;
                  pppppplVar13 = (long ******)pppppplVar11[1];
                  *(undefined1 *)(ppppppplVar10 + 3) = 0;
                  *ppppppplVar10 = pppppplVar13;
                  pppppplVar15 = pppppplVar11;
                }
                else {
                  pppppplVar13 = (long ******)pppppplVar11[1];
                  ppppplVar16 = *pppppplVar13;
                  pppppplVar11[1] = ppppplVar16;
                  pppppplVar15 = pppppplVar11;
                  if (ppppplVar16 != (long *****)0x0) {
                    ppppplVar16[2] = (long ****)pppppplVar11;
                    ppppppplVar10 = (long *******)pppppplVar11[2];
                    pppppplVar15 = *ppppppplVar10;
                  }
                  pppppplVar13[2] = (long *****)ppppppplVar10;
                  ppppppplVar10[pppppplVar15 != pppppplVar11] = pppppplVar13;
                  pppppplVar11[2] = (long *****)pppppplVar13;
                  ppppppplVar10 = (long *******)pppppplVar13[2];
                  *pppppplVar13 = (long *****)pppppplVar11;
                  pppppplVar15 = *ppppppplVar10;
                  *(undefined1 *)(pppppplVar13 + 3) = 1;
                  pppppplVar13 = (long ******)pppppplVar15[1];
                  *(undefined1 *)(ppppppplVar10 + 3) = 0;
                  *ppppppplVar10 = pppppplVar13;
                }
                if (pppppplVar13 != (long ******)0x0) {
                  pppppplVar13[2] = (long *****)ppppppplVar10;
                }
                pppppplVar11 = ppppppplVar10[2];
                ppppppplVar14 = (long *******)*pppppplVar11;
                pppppplVar15[2] = (long *****)pppppplVar11;
                pppppplVar11[ppppppplVar14 != ppppppplVar10] = (long *****)pppppplVar15;
                pppppplVar15[1] = (long *****)ppppppplVar10;
                goto LAB_00475254;
              }
LAB_00475428:
              bVar5 = ppppppplVar10 == local_90;
              *(undefined1 *)(pppppplVar11 + 3) = 1;
              *(bool *)(ppppppplVar10 + 3) = bVar5;
              *(char *)pppppplVar15 = '\x01';
              ppppppplVar7 = ppppppplVar10;
            }
            if ((pppppplVar15 != (long ******)0x0) &&
               (pppppplVar15 = pppppplVar15 + 3, *(char *)pppppplVar15 == '\0')) goto LAB_00475428;
            if ((long *******)*pppppplVar11 == ppppppplVar7) {
              pppppplVar15 = ppppppplVar7[1];
              *pppppplVar11 = (long *****)pppppplVar15;
              if (pppppplVar15 != (long ******)0x0) {
                pppppplVar15[2] = (long *****)pppppplVar11;
                ppppppplVar10 = (long *******)pppppplVar11[2];
              }
              pppppplVar15 = *ppppppplVar10;
              ppppppplVar7[2] = (long ******)ppppppplVar10;
              ppppppplVar10[pppppplVar15 != pppppplVar11] = (long ******)ppppppplVar7;
              pppppplVar11[2] = (long *****)ppppppplVar7;
              ppppppplVar10 = (long *******)ppppppplVar7[2];
              ppppppplVar7[1] = pppppplVar11;
              pppppplVar15 = ppppppplVar10[1];
              *(undefined1 *)(ppppppplVar7 + 3) = 1;
              *(undefined1 *)(ppppppplVar10 + 3) = 0;
              pppppplVar11 = (long ******)*pppppplVar15;
              ppppppplVar10[1] = pppppplVar11;
            }
            else {
              pppppplVar15 = ppppppplVar10[1];
              *(undefined1 *)(pppppplVar11 + 3) = 1;
              *(undefined1 *)(ppppppplVar10 + 3) = 0;
              pppppplVar11 = (long ******)*pppppplVar15;
              ppppppplVar10[1] = pppppplVar11;
            }
            if (pppppplVar11 != (long ******)0x0) {
              pppppplVar11[2] = (long *****)ppppppplVar10;
            }
            pppppplVar11 = ppppppplVar10[2];
            ppppppplVar14 = (long *******)*pppppplVar11;
            pppppplVar15[2] = (long *****)pppppplVar11;
            pppppplVar11[ppppppplVar14 != ppppppplVar10] = (long *****)pppppplVar15;
            *pppppplVar15 = (long *****)ppppppplVar10;
LAB_00475254:
            ppppppplVar10[2] = pppppplVar15;
LAB_00475258:
            local_88 = local_88 + 1;
          }
LAB_00475264:
          plVar17 = (long *)((long)plVar17 + 0x28);
        } while (plVar17 != (long *)lVar8);
      }
      param_2 = (ulong *)((long)param_2 + 1);
      param_3 = param_3 + 0x48;
      uVar9 = (uint)*(char *)param_2;
      if (uVar9 == 0xfffffffe || (int)(uVar9 + 2) < 0 != SCARRY4(uVar9,2)) {
        do {
          uVar12 = ((*param_2 | *param_2 >> 7 ^ 0xffffffffffffffff) & 0x101010101010101) << 7;
          uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
          uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
          uVar12 = (ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3;
          param_2 = (ulong *)((long)param_2 + uVar12);
          param_3 = param_3 + uVar12 * 0x48;
          uVar9 = (uint)(char)*param_2;
        } while ((int)(uVar9 + 1) < 0 != SCARRY4(uVar9,1));
      }
      ppppppplVar10 = local_98;
    } while ((uVar9 & 0xff) != 0xff);
    while ((long ********)ppppppplVar10 != &local_90) {
      plVar17 = *(long **)(param_4 + 0x1f0);
                    /* try { // try from 0047560c to 0047563f has its CatchHandler @ 004756b4 */
      lVar8 = FUN_004764cc(plVar17 + 0xb,ppppppplVar10 + 4);
      if (((lVar8 != 0) &&
          (plVar17 = *(long **)(*plVar17 + *(long *)(lVar8 + 0x28) * 0x10), plVar17 != (long *)0x0))
         && ((**(code **)(*plVar17 + 0x48))(param_1), *param_1 != 0)) {
                    /* try { // try from 0047567c to 0047569f has its CatchHandler @ 004756a4 */
        FUN_00645c3c(0,param_1,
                     "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/IOBinding.cc"
                     ,"SyncProviders",0x42);
        goto LAB_004755b4;
      }
      ppppppplVar14 = (long *******)ppppppplVar10[1];
      ppppppplVar7 = ppppppplVar10;
      if ((long *******)ppppppplVar10[1] == (long *******)0x0) {
        do {
          ppppppplVar10 = (long *******)ppppppplVar7[2];
          bVar5 = (long *******)*ppppppplVar10 != ppppppplVar7;
          ppppppplVar7 = ppppppplVar10;
        } while (bVar5);
      }
      else {
        do {
          ppppppplVar10 = ppppppplVar14;
          ppppppplVar14 = (long *******)*ppppppplVar10;
        } while ((long *******)*ppppppplVar10 != (long *******)0x0);
      }
    }
  }
  *param_1 = 0;
LAB_004755b4:
  FUN_0047647c(&local_98,local_90);
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004756f8  FUN_004756f8 =====

void FUN_004756f8(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0059e3ac(*param_2);
  FUN_00475104(param_1,*puVar1,puVar1[1],*param_2);
  if (*param_1 != 0) {
                    /* try { // try from 0047572c to 0047574b has its CatchHandler @ 00475758 */
    FUN_00645c3c(0,param_1,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/IOBinding.cc"
                 ,"SynchronizeOutputs",0x4d);
  }
  return;
}


// ===== 0047576c  FUN_0047576c =====

void FUN_0047576c(void)

{
  FUN_00475774();
  return;
}


// ===== 00475774  FUN_00475774 =====

void FUN_00475774(undefined8 *param_1,long param_2,byte *param_3,undefined8 *param_4,
                 undefined4 param_5)

{
  ulong uVar1;
  long lVar2;
  void *__dest;
  undefined8 uVar3;
  undefined4 *puVar4;
  ulong uVar5;
  void *__src;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  long lVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  long local_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  long local_d0 [10];
  undefined *local_80;
  char *pcStack_78;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  local_d0[0] = (*(long *)(param_2 + 0x68) - *(long *)(param_2 + 0x60) >> 3) * -0x5555555555555555;
  auVar14 = FUN_00476894(param_2 + 0x78,param_3,param_3,local_d0);
  if ((auVar14 & (undefined1  [16])0xff) == (undefined1  [16])0x0) {
    lVar8 = *(long *)(auVar14._0_8_ + 0x28);
    uVar3 = *param_4;
    lVar11 = param_4[1];
    puVar9 = (undefined8 *)(*(long *)(param_2 + 0xa0) + lVar8 * 0x18);
    if (lVar11 != 0) {
      FUN_00755c20(1,lVar11 + 8);
    }
    plVar6 = (long *)puVar9[1];
    *puVar9 = uVar3;
    puVar9[1] = lVar11;
    if ((plVar6 != (long *)0x0) &&
       (lVar11 = FUN_00755c50(0xffffffffffffffff,plVar6 + 1), lVar11 == 0)) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_0071245c(plVar6);
    }
    puVar9[2] = param_4[2];
    *(undefined4 *)(*(long *)(param_2 + 0xb8) + lVar8 * 4) = param_5;
  }
  else {
    puVar9 = *(undefined8 **)(param_2 + 0x68);
    if (puVar9 < *(undefined8 **)(param_2 + 0x70)) {
      if ((*param_3 & 1) == 0) {
        uVar13 = *(undefined8 *)(param_3 + 8);
        uVar3 = *(undefined8 *)param_3;
        puVar9[2] = *(undefined8 *)(param_3 + 0x10);
        puVar9[1] = uVar13;
        *puVar9 = uVar3;
      }
      else {
                    /* try { // try from 00475934 to 0047593b has its CatchHandler @ 00475afc */
        FUN_002fb36c(puVar9,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 8));
      }
      *(undefined8 **)(param_2 + 0x68) = puVar9 + 3;
      puVar7 = *(undefined8 **)(param_2 + 0xa8);
      *(undefined8 **)(param_2 + 0x68) = puVar9 + 3;
      if (*(undefined8 **)(param_2 + 0xb0) <= puVar7) goto LAB_00475954;
LAB_004758a0:
      *puVar7 = *param_4;
      lVar11 = param_4[1];
      puVar7[1] = lVar11;
      if (lVar11 != 0) {
        FUN_00755c20(1,lVar11 + 8);
      }
      puVar7[2] = param_4[2];
      puVar10 = *(undefined4 **)(param_2 + 0xc0);
      puVar4 = *(undefined4 **)(param_2 + 200);
      *(undefined8 **)(param_2 + 0xa8) = puVar7 + 3;
      if (puVar4 <= puVar10) goto LAB_004758dc;
LAB_00475970:
      puVar12 = puVar10 + 1;
      *puVar10 = param_5;
    }
    else {
      uVar3 = FUN_0034e788((long *)(param_2 + 0x60),param_3);
      puVar7 = *(undefined8 **)(param_2 + 0xa8);
      *(undefined8 *)(param_2 + 0x68) = uVar3;
      if (puVar7 < *(undefined8 **)(param_2 + 0xb0)) goto LAB_004758a0;
LAB_00475954:
      uVar3 = FUN_00476fb0(param_2 + 0xa0,param_4);
      puVar10 = *(undefined4 **)(param_2 + 0xc0);
      puVar4 = *(undefined4 **)(param_2 + 200);
      *(undefined8 *)(param_2 + 0xa8) = uVar3;
      if (puVar10 < puVar4) goto LAB_00475970;
LAB_004758dc:
      __src = *(void **)(param_2 + 0xb8);
      lVar11 = (long)puVar10 - (long)__src >> 2;
      uVar1 = lVar11 + 1;
      if (uVar1 >> 0x3e != 0) {
        if (*(long *)(lVar2 + 0x28) != local_70) goto LAB_00475b9c;
        FUN_0047749c(param_2 + 0xb8);
LAB_00475ae8:
        if (*(long *)(lVar2 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
          FUN_002f9ee0();
        }
        goto LAB_00475b9c;
      }
      uVar5 = (long)puVar4 - (long)__src >> 1;
      if (uVar5 <= uVar1) {
        uVar5 = uVar1;
      }
      if (0x7ffffffffffffffb < (ulong)((long)puVar4 - (long)__src)) {
        uVar5 = 0x3fffffffffffffff;
      }
      if (uVar5 == 0) {
        __dest = (void *)0x0;
      }
      else {
        if (uVar5 >> 0x3e != 0) goto LAB_00475ae8;
        __dest = (void *)FUN_00759c3c(uVar5 << 2);
      }
      puVar4 = (undefined4 *)((long)__dest + lVar11 * 4);
      puVar12 = puVar4 + 1;
      *puVar4 = param_5;
      memcpy(__dest,__src,(long)puVar10 - (long)__src);
      *(void **)(param_2 + 0xb8) = __dest;
      *(undefined4 **)(param_2 + 0xc0) = puVar12;
      *(void **)(param_2 + 200) = (void *)((long)__dest + uVar5 * 4);
      if (__src != (void *)0x0) {
        free(__src);
      }
    }
    *(undefined4 **)(param_2 + 0xc0) = puVar12;
  }
  if (*(long *)(param_2 + 0x90) ==
      (*(long *)(param_2 + 0x68) - *(long *)(param_2 + 0x60) >> 3) * -0x5555555555555555) {
    *param_1 = 0;
    if (*(long *)(lVar2 + 0x28) == local_70) {
      return;
    }
  }
  else {
    uVar3 = FUN_00753a74(0x88);
                    /* try { // try from 00475a14 to 00475a1b has its CatchHandler @ 00475b80 */
    FUN_00645c30(auStack_e8);
                    /* try { // try from 00475a1c to 00475a3b has its CatchHandler @ 00475b70 */
    FUN_0047488c(local_d0,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/IOBinding.cc"
                 ,0x65,
                 "common::Status onnxruntime::IOBinding::BindOutputImpl(const std::string &, const OrtValue &, OrtDevice)"
                 ,auStack_e8);
    local_110 = (*(long *)(param_2 + 0x68) - *(long *)(param_2 + 0x60) >> 3) * -0x5555555555555555;
    uStack_108 = *(undefined8 *)(param_2 + 0x90);
    local_80 = &DAT_001d41e9;
    pcStack_78 = "Size mismatch";
    FUN_004774b0(auStack_100,&pcStack_78,&uStack_108,&local_80,&local_110);
                    /* try { // try from 00475a8c to 00475acf has its CatchHandler @ 00475b18 */
    FUN_00474a40(uVar3,local_d0,"mapped_output_names_.size() == output_names_.size()",auStack_100);
    if (*(long *)(lVar2 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar3,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
  }
LAB_00475b9c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00475ba0  FUN_00475ba0 =====

void FUN_00475ba0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 local_40;
  long *local_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = 0;
  local_38 = (long *)0x0;
  local_30 = 0;
                    /* try { // try from 00475bc8 to 00475bd3 has its CatchHandler @ 00475c24 */
  FUN_00475774(param_1,param_2,&local_40,param_3);
  plVar2 = local_38;
  if ((local_38 != (long *)0x0) &&
     (lVar3 = FUN_00755c50(0xffffffffffffffff,local_38 + 1), lVar3 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00475c4c  FUN_00475c4c =====

void FUN_00475c4c(long param_1)

{
  byte *pbVar1;
  undefined8 *__ptr;
  byte *pbVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  byte *pbVar7;
  void *pvVar8;
  
  if (*(long *)(param_1 + 0x90) != 0) {
    __ptr = (undefined8 *)*(void **)(param_1 + 0x88);
    while (__ptr != (undefined8 *)0x0) {
      pvVar8 = (void *)*__ptr;
      if ((*(byte *)(__ptr + 2) & 1) != 0) {
        free((void *)__ptr[4]);
      }
      free(__ptr);
      __ptr = (undefined8 *)pvVar8;
    }
    lVar4 = *(long *)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x88) = 0;
    if (lVar4 != 0) {
      lVar5 = 0;
      do {
        *(undefined8 *)(*(long *)(param_1 + 0x78) + lVar5 * 8) = 0;
        lVar5 = lVar5 + 1;
      } while (lVar4 != lVar5);
    }
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  pbVar1 = *(byte **)(param_1 + 0x60);
  pbVar7 = *(byte **)(param_1 + 0x68);
  while (pbVar2 = pbVar7, pbVar2 != pbVar1) {
    pbVar7 = pbVar2 + -0x18;
    if ((*pbVar7 & 1) != 0) {
      free(*(void **)(pbVar2 + -8));
    }
  }
  lVar4 = *(long *)(param_1 + 0xa0);
  lVar5 = *(long *)(param_1 + 0xa8);
  *(byte **)(param_1 + 0x68) = pbVar1;
  for (; lVar5 != lVar4; lVar5 = lVar5 + -0x18) {
    plVar6 = *(long **)(lVar5 + -0x10);
    if ((plVar6 != (long *)0x0) && (lVar3 = FUN_00755c50(0xffffffffffffffff,plVar6 + 1), lVar3 == 0)
       ) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_0071245c(plVar6);
    }
  }
  *(long *)(param_1 + 0xa8) = lVar4;
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_1 + 0xb8);
  return;
}


// ===== 00475d60  FUN_00475d60 =====

long FUN_00475d60(long param_1)

{
  return param_1 + 0x60;
}


// ===== 00475d68  FUN_00475d68 =====

long FUN_00475d68(long param_1)

{
  return param_1 + 0xa0;
}


// ===== 00475d70  FUN_00475d70 =====

long FUN_00475d70(long param_1)

{
  return param_1 + 0xb8;
}


// ===== 00475d78  FUN_00475d78 =====

long FUN_00475d78(long param_1)

{
  return param_1 + 8;
}


// ===== 00475d80  FUN_00475d80 =====

long FUN_00475d80(long param_1)

{
  return param_1 + 0x48;
}


// ===== 00475d88  FUN_00475d88 =====

void FUN_00475d88(long *param_1,byte *param_2,byte *param_3,ulong param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  byte *pbVar4;
  undefined8 uVar5;
  undefined8 *local_88;
  undefined8 *local_80;
  long *local_78;
  undefined1 local_70;
  long *local_68;
  undefined8 **ppuStack_60;
  undefined8 **local_58;
  undefined1 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_70 = 0;
  local_78 = param_1;
  if (param_4 != 0) {
    if (0xaaaaaaaaaaaaaaa < param_4) {
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 00475eb0 to 00475eb7 has its CatchHandler @ 00475eb8 */
        uVar3 = FUN_00304228(param_1);
                    /* catch() { ... } // from try @ 00475de4 with catch @ 00475eb8
                       catch() { ... } // from try @ 00475eb0 with catch @ 00475eb8 */
        FUN_0030419c(&local_78);
        if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
          FUN_00755eac(uVar3);
        }
      }
      goto LAB_00475ef0;
    }
                    /* try { // try from 00475de4 to 00475de7 has its CatchHandler @ 00475eb8 */
    local_88 = (undefined8 *)FUN_00759c3c(param_4 * 0x18);
    *param_1 = (long)local_88;
    param_1[1] = (long)local_88;
    local_50 = 0;
    local_68 = param_1 + 2;
    *local_68 = (long)(local_88 + param_4 * 3);
    ppuStack_60 = &local_88;
    local_58 = &local_80;
    local_80 = local_88;
    if (param_2 != param_3) {
      do {
        while ((*param_2 & 1) == 0) {
          pbVar4 = param_2 + 0x18;
          uVar5 = *(undefined8 *)(param_2 + 8);
          uVar3 = *(undefined8 *)param_2;
          local_80[2] = *(undefined8 *)(param_2 + 0x10);
          puVar2 = local_80 + 3;
          local_80[1] = uVar5;
          *local_80 = uVar3;
          param_2 = pbVar4;
          local_80 = puVar2;
          if (pbVar4 == param_3) goto LAB_00475e74;
        }
                    /* try { // try from 00475e50 to 00475e53 has its CatchHandler @ 00475ec0 */
        FUN_002fb36c(local_80,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 8));
        param_2 = param_2 + 0x18;
        local_80 = local_80 + 3;
      } while (param_2 != param_3);
    }
LAB_00475e74:
    param_1[1] = (long)local_80;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_00475ef0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00475ef4  FUN_00475ef4 =====

void FUN_00475ef4(undefined8 *param_1,byte *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((*param_2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_2 + 8);
    uVar2 = *(undefined8 *)param_2;
    param_1[2] = *(undefined8 *)(param_2 + 0x10);
    param_1[1] = uVar3;
    *param_1 = uVar2;
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
    bVar1 = param_2[0x20];
  }
  else {
    FUN_002fb36c(param_1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 8));
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
    bVar1 = param_2[0x20];
  }
  if ((bVar1 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    param_1[6] = *(undefined8 *)(param_2 + 0x30);
    param_1[5] = uVar3;
    param_1[4] = uVar2;
  }
  else {
                    /* try { // try from 00475f38 to 00475f3f has its CatchHandler @ 00475fa8 */
    FUN_002fb36c(param_1 + 4,*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x28));
  }
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
                    /* try { // try from 00475f98 to 00475f9b has its CatchHandler @ 00475fb8 */
  FUN_00475d88();
  return;
}


// ===== 00475ff4  FUN_00475ff4 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00475ff4(undefined8 param_1,ulong *param_2,int param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  void *pvVar4;
  byte *pbVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 local_190;
  ulong uStack_188;
  void *local_180;
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
  
  puVar7 = PTR_PTR_007a1e48;
  puVar6 = PTR_DAT_007a1e40;
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  puVar1 = PTR_DAT_007a1e40 + 0x40;
  local_170[0] = *(undefined **)(PTR_PTR_007a1e48 + 8);
  local_d0 = 0;
  local_100[0] = puVar1;
  *(undefined8 *)((long)local_170 + *(long *)(local_170[0] + -0x18)) =
       *(undefined8 *)(PTR_PTR_007a1e48 + 0x10);
  lVar9 = *(long *)(local_170[0] + -0x18);
                    /* try { // try from 00476068 to 00476073 has its CatchHandler @ 00476218 */
  FUN_00715fc0((long)local_170 + lVar9,local_170 + 1);
  local_170[0] = puVar6 + 0x18;
  *(undefined8 *)((long)&uStack_e8 + lVar9) = 0;
  *(undefined4 *)((long)auStack_e0 + lVar9) = 0xffffffff;
                    /* try { // try from 0047608c to 00476093 has its CatchHandler @ 00476204 */
  local_100[0] = puVar1;
  FUN_007160dc(local_170 + 1);
  puVar1 = PTR_DAT_007a10f8;
  local_170[1] = PTR_DAT_007a10f8 + 0x10;
  uStack_120 = 0;
  local_128 = 0;
  uStack_110 = 0;
  local_118 = (void *)0x0;
  local_108 = 0x10;
  if (param_3 == 0) {
                    /* try { // try from 004760d8 to 004760f3 has its CatchHandler @ 004761f8 */
    FUN_00476318(&local_190,param_2);
  }
  else if ((*param_2 & 1) == 0) {
    uStack_188 = param_2[1];
    local_190 = *param_2;
    local_180 = (void *)param_2[2];
  }
  else {
    FUN_002fb36c(&local_190,param_2[2],param_2[1]);
  }
  uVar2 = uStack_188;
  pvVar4 = local_180;
  if ((local_190 & 1) == 0) {
    uVar2 = local_190 >> 1 & 0x7f;
    pvVar4 = (void *)((long)&local_190 + 1);
  }
                    /* try { // try from 00476110 to 0047615f has its CatchHandler @ 00476228 */
  uVar8 = FUN_00303e0c(local_170,pvVar4,uVar2);
  uVar8 = FUN_00303e0c(uVar8,&DAT_001d9efd,1);
  uVar8 = FUN_00717214(uVar8,(int)param_2[3]);
  uVar8 = FUN_00303e0c(uVar8,&DAT_001bc0af,1);
  uVar2 = (ulong)(byte)((byte)param_2[4] >> 1);
  pbVar5 = (byte *)((long)param_2 + 0x21);
  if (((byte)param_2[4] & 1) != 0) {
    uVar2 = param_2[5];
    pbVar5 = (byte *)param_2[6];
  }
  FUN_00303e0c(uVar8,pbVar5,uVar2);
  if ((local_190 & 1) != 0) {
    free(local_180);
  }
                    /* try { // try from 00476170 to 0047617b has its CatchHandler @ 004761fc */
  FUN_00718470(param_1,local_170 + 1);
  local_170[0] = *(undefined **)puVar7;
  *(undefined8 *)((long)local_170 + *(long *)(local_170[0] + -0x18)) =
       *(undefined8 *)(puVar7 + 0x18);
  local_170[1] = puVar1 + 0x10;
  if ((local_128 & 1) != 0) {
    free(local_118);
  }
  FUN_00716098(local_170 + 1);
  FUN_00716ee4(local_170,puVar7 + 8);
  thunk_FUN_00715e00(local_100);
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00476260  FUN_00476260 =====

void FUN_00476260(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar2 = PTR_PTR_007a1e48;
  lVar3 = *(long *)PTR_PTR_007a1e48;
  uVar4 = *(undefined8 *)(PTR_PTR_007a1e48 + 0x18);
  *param_1 = lVar3;
  puVar1 = PTR_DAT_007a10f8;
  *(undefined8 *)((long)param_1 + *(long *)(lVar3 + -0x18)) = uVar4;
  param_1[1] = (long)(puVar1 + 0x10);
  if ((*(byte *)(param_1 + 9) & 1) != 0) {
    free((void *)param_1[0xb]);
  }
  FUN_00716098(param_1 + 1);
  FUN_00716ee4(param_1,puVar2 + 8);
  thunk_FUN_00715e00(param_1 + 0xe);
  return;
}


// ===== 004762dc  FUN_004762dc =====

void FUN_004762dc(void *param_1)

{
  FUN_00474dcc();
  free(param_1);
  return;
}


// ===== 00476300  FUN_00476300 =====

long FUN_00476300(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x71;
  if ((*(byte *)(param_1 + 0x70) & 1) != 0) {
    lVar1 = *(long *)(param_1 + 0x80);
  }
  return lVar1;
}


// ===== 00476318  FUN_00476318 =====

void FUN_00476318(ulong *param_1,byte *param_2)

{
  ulong uVar1;
  byte *pbVar2;
  ulong uVar3;
  undefined1 *__dest;
  ulong uVar4;
  
  uVar1 = *(ulong *)(param_2 + 8);
  pbVar2 = *(byte **)(param_2 + 0x10);
  uVar3 = (ulong)(*param_2 >> 1);
  uVar4 = uVar1;
  if ((*param_2 & 1) == 0) {
    pbVar2 = param_2 + 1;
    uVar4 = uVar3;
    uVar1 = uVar3;
  }
  do {
    uVar3 = uVar4;
    if (uVar3 == 0) {
      uVar3 = 0;
      uVar4 = uVar1;
      goto joined_r0x00476418;
    }
  } while ((pbVar2[uVar3 - 1] != 0x5c) && (uVar4 = uVar3 - 1, pbVar2[uVar3 - 1] != 0x2f));
  if (uVar1 < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_0030b8f4(param_1);
  }
  uVar4 = uVar1 - uVar3;
joined_r0x00476418:
  if (0xfffffffffffffff7 < uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_002fb400(param_1);
  }
  if (uVar4 < 0x17) {
    __dest = (undefined1 *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)uVar4 << 1);
    if (uVar1 == uVar3) {
      __dest[uVar4] = 0;
      return;
    }
  }
  else {
    uVar1 = (uVar4 & 0xfffffffffffffff8) + 8;
    if ((uVar4 | 7) != 0x17) {
      uVar1 = uVar4 | 7;
    }
    __dest = (undefined1 *)FUN_00759c3c(uVar1 + 1);
    param_1[1] = uVar4;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar1 + 1 | 1;
  }
  memmove(__dest,pbVar2 + uVar3,uVar4);
  __dest[uVar4] = 0;
  return;
}


// ===== 0047642c  FUN_0047642c =====

void FUN_0047642c(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)*param_1;
  *param_1 = 0;
  if (__ptr != (void *)0x0) {
    if ((*(char *)(param_1 + 2) != '\0') && ((*(byte *)((long)__ptr + 0x20) & 1) != 0)) {
      free(*(void **)((long)__ptr + 0x30));
    }
    free(__ptr);
    return;
  }
  return;
}


// ===== 0047647c  FUN_0047647c =====

void FUN_0047647c(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_0047647c(param_1,*param_2);
    FUN_0047647c(param_1,param_2[1]);
    if ((*(byte *)(param_2 + 4) & 1) != 0) {
      free((void *)param_2[6]);
    }
    free(param_2);
    return;
  }
  return;
}


// ===== 004764cc  FUN_004764cc =====

long * FUN_004764cc(long *param_1,byte *param_2)

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
                    /* try { // try from 00476514 to 0047651b has its CatchHandler @ 0047671c */
  uVar8 = FUN_0034bfb4(&uStack_59,pbVar3,uVar8);
  uVar12 = param_1[1];
  if (uVar12 == 0) {
LAB_004766e4:
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
                  if (bVar4 >> 1 == uVar10) goto LAB_004766e8;
                }
              }
              else {
                iVar7 = memcmp((void *)plVar9[4],pbVar3,plVar9[3]);
                if (iVar7 == 0) break;
              }
            }
          }
          else if ((plVar9[1] & uVar12 - 1) != uVar11) goto LAB_004766e4;
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
                  if (bVar4 >> 1 == uVar10) goto LAB_004766e8;
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
            if (uVar10 != uVar11) goto LAB_004766e4;
          }
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
    }
  }
LAB_004766e8:
  if (*(long *)(lVar6 + 0x28) == local_58) {
    return plVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00476720  FUN_00476720 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00476720(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *local_160 [9];
  ulong local_118;
  undefined8 uStack_110;
  void *local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined *local_f0 [3];
  undefined8 uStack_d8;
  undefined4 auStack_d0 [4];
  undefined8 local_c0;
  long local_58;
  
  puVar4 = PTR_PTR_007a1e48;
  puVar3 = PTR_DAT_007a1e40;
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  puVar1 = PTR_DAT_007a1e40 + 0x40;
  local_160[0] = *(undefined **)(PTR_PTR_007a1e48 + 8);
  local_c0 = 0;
  local_f0[0] = puVar1;
  *(undefined8 *)((long)local_160 + *(long *)(local_160[0] + -0x18)) =
       *(undefined8 *)(PTR_PTR_007a1e48 + 0x10);
  lVar5 = *(long *)(local_160[0] + -0x18);
                    /* try { // try from 00476788 to 00476793 has its CatchHandler @ 00476880 */
  FUN_00715fc0((long)local_160 + lVar5,local_160 + 1);
  local_160[0] = puVar3 + 0x18;
  *(undefined8 *)((long)&uStack_d8 + lVar5) = 0;
  *(undefined4 *)((long)auStack_d0 + lVar5) = 0xffffffff;
                    /* try { // try from 004767ac to 004767b3 has its CatchHandler @ 00476860 */
  local_f0[0] = puVar1;
  FUN_007160dc(local_160 + 1);
  puVar1 = PTR_DAT_007a10f8 + 0x10;
  uStack_110 = 0;
  local_118 = 0;
  uStack_100 = 0;
  local_108 = (void *)0x0;
  local_f8 = 0x10;
                    /* try { // try from 004767d8 to 004767e3 has its CatchHandler @ 0047685c */
  local_160[1] = puVar1;
  FUN_00718470(param_1,local_160 + 1);
  local_160[0] = *(undefined **)puVar4;
  *(undefined8 *)((long)local_160 + *(long *)(local_160[0] + -0x18)) =
       *(undefined8 *)(puVar4 + 0x18);
  local_160[1] = puVar1;
  if ((local_118 & 1) != 0) {
    free(local_108);
  }
  FUN_00716098(local_160 + 1);
  FUN_00716ee4(local_160,puVar4 + 8);
  thunk_FUN_00715e00(local_f0);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00476894  FUN_00476894 =====

void FUN_00476894(long *param_1,byte *param_2,byte *param_3,long *param_4)

{
  long *plVar1;
  size_t sVar2;
  size_t sVar3;
  byte *pbVar4;
  byte bVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong unaff_x26;
  undefined2 uVar16;
  undefined8 uVar17;
  long lVar18;
  float fVar19;
  long *local_80;
  long *plStack_78;
  undefined1 local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  uVar15 = *(ulong *)(param_2 + 8);
  pbVar4 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar4 = param_2 + 1;
    uVar15 = (ulong)(*param_2 >> 1);
  }
                    /* try { // try from 004768e8 to 004768ef has its CatchHandler @ 00476d84 */
  uVar8 = FUN_0034bfb4(&local_80,pbVar4,uVar15);
  uVar15 = param_1[1];
  if (uVar15 != 0) {
    uVar17 = NEON_cnt(uVar15,1);
    uVar16 = NEON_uaddlv(uVar17,1);
    uVar14 = CONCAT62((int6)((ulong)uVar17 >> 0x10),uVar16) & 0xffffffff;
    if (uVar14 < 2) {
      unaff_x26 = uVar15 - 1 & uVar8;
    }
    else {
      unaff_x26 = uVar8;
      if (uVar15 <= uVar8) {
        uVar10 = 0;
        if (uVar15 != 0) {
          uVar10 = uVar8 / uVar15;
        }
        unaff_x26 = uVar8 - uVar10 * uVar15;
      }
    }
    puVar13 = *(undefined8 **)(*param_1 + unaff_x26 * 8);
    if ((puVar13 != (undefined8 *)0x0) && (plVar9 = (long *)*puVar13, plVar9 != (long *)0x0)) {
      sVar2 = (ulong)(*param_2 >> 1);
      pbVar4 = param_2 + 1;
      if ((*param_2 & 1) != 0) {
        sVar2 = *(size_t *)(param_2 + 8);
        pbVar4 = *(byte **)(param_2 + 0x10);
      }
      if (uVar14 < 2) {
        do {
          if (plVar9[1] == uVar8) {
            bVar5 = *(byte *)(plVar9 + 2);
            sVar3 = (ulong)(bVar5 >> 1);
            if ((bVar5 & 1) != 0) {
              sVar3 = plVar9[3];
            }
            if (sVar3 == sVar2) {
              if ((bVar5 & 1) == 0) {
                if (bVar5 < 2) {
LAB_00476ac4:
                  uVar17 = 0;
                  if (*(long *)(lVar6 + 0x28) == local_68) {
                    return;
                  }
                  goto LAB_00476d80;
                }
                uVar14 = 0;
                while (*(byte *)((long)plVar9 + uVar14 + 0x11) == pbVar4[uVar14]) {
                  uVar14 = uVar14 + 1;
                  if (bVar5 >> 1 == uVar14) goto LAB_00476ac4;
                }
              }
              else {
                iVar7 = memcmp((void *)plVar9[4],pbVar4,plVar9[3]);
                if (iVar7 == 0) goto LAB_00476ac4;
              }
            }
          }
          else if ((plVar9[1] & uVar15 - 1) != unaff_x26) break;
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
      else {
        do {
          uVar14 = plVar9[1];
          if (uVar14 == uVar8) {
            bVar5 = *(byte *)(plVar9 + 2);
            sVar3 = (ulong)(bVar5 >> 1);
            if ((bVar5 & 1) != 0) {
              sVar3 = plVar9[3];
            }
            if (sVar3 == sVar2) {
              if ((bVar5 & 1) == 0) {
                if (bVar5 < 2) {
LAB_00476a1c:
                  uVar17 = 0;
                  if (*(long *)(lVar6 + 0x28) == local_68) {
                    return;
                  }
                  goto LAB_00476d80;
                }
                uVar14 = 0;
                while (*(byte *)((long)plVar9 + uVar14 + 0x11) == pbVar4[uVar14]) {
                  uVar14 = uVar14 + 1;
                  if (bVar5 >> 1 == uVar14) goto LAB_00476a1c;
                }
              }
              else {
                iVar7 = memcmp((void *)plVar9[4],pbVar4,plVar9[3]);
                if (iVar7 == 0) goto LAB_00476a1c;
              }
            }
          }
          else {
            if (uVar15 <= uVar14) {
              uVar10 = 0;
              if (uVar15 != 0) {
                uVar10 = uVar14 / uVar15;
              }
              uVar14 = uVar14 - uVar10 * uVar15;
            }
            if (uVar14 != unaff_x26) break;
          }
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
    }
  }
  plVar1 = param_1 + 2;
  plVar9 = (long *)FUN_00759c3c(0x30);
  bVar5 = *param_3;
  local_70 = 0;
  *plVar9 = 0;
  plVar9[1] = uVar8;
  local_80 = plVar9;
  plStack_78 = plVar1;
  if ((bVar5 & 1) == 0) {
    lVar18 = *(long *)param_3;
    lVar11 = *(long *)(param_3 + 0x10);
    plVar9[3] = *(long *)(param_3 + 8);
    plVar9[2] = lVar18;
    plVar9[4] = lVar11;
  }
  else {
                    /* try { // try from 00476b20 to 00476b27 has its CatchHandler @ 00476d5c */
    FUN_002fb36c(plVar9 + 2,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 8));
  }
  lVar11 = param_1[3];
  fVar19 = *(float *)(param_1 + 4);
  plVar9[5] = *param_4;
  local_70 = 1;
  if ((uVar15 != 0) && ((float)(lVar11 + 1) <= fVar19 * (float)uVar15)) {
    plVar12 = *(long **)(*param_1 + unaff_x26 * 8);
    plVar9 = local_80;
    goto joined_r0x00476cd8;
  }
  if (uVar15 < 3) {
    uVar14 = 1;
  }
  else {
    uVar14 = (ulong)((uVar15 & uVar15 - 1) != 0);
  }
  uVar14 = uVar14 | uVar15 << 1;
  uVar15 = (ulong)((float)(lVar11 + 1) / fVar19);
  if (uVar14 <= uVar15) {
    uVar14 = uVar15;
  }
  if (uVar14 - 1 == 0) {
    uVar14 = 2;
  }
  else if ((uVar14 & uVar14 - 1) != 0) {
                    /* try { // try from 00476bcc to 00476c4f has its CatchHandler @ 00476d58 */
    uVar14 = FUN_00711ce0(uVar14);
  }
  uVar15 = param_1[1];
  if (uVar15 < uVar14) {
LAB_00476be4:
    FUN_00476dd8(param_1,uVar14);
  }
  else if (uVar14 < uVar15) {
    uVar10 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if (uVar15 < 3) {
LAB_00476c4c:
      uVar10 = FUN_00711ce0();
    }
    else {
      uVar17 = NEON_cnt(uVar15,1);
      uVar16 = NEON_uaddlv(uVar17,1);
      if (1 < (CONCAT62((int6)((ulong)uVar17 >> 0x10),uVar16) & 0xffffffff)) goto LAB_00476c4c;
      if (1 < uVar10) {
        uVar10 = 1L << (-LZCOUNT(uVar10 - 1) & 0x3fU);
      }
    }
    if (uVar14 <= uVar10) {
      uVar14 = uVar10;
    }
    if (uVar14 < uVar15) goto LAB_00476be4;
  }
  uVar15 = param_1[1];
  plVar9 = local_80;
  if ((uVar15 & uVar15 - 1) == 0) {
    unaff_x26 = uVar15 - 1 & uVar8;
    plVar12 = *(long **)(*param_1 + unaff_x26 * 8);
  }
  else if (uVar8 < uVar15) {
    plVar12 = *(long **)(*param_1 + uVar8 * 8);
    unaff_x26 = uVar8;
  }
  else {
    uVar14 = 0;
    if (uVar15 != 0) {
      uVar14 = uVar8 / uVar15;
    }
    unaff_x26 = uVar8 - uVar14 * uVar15;
    plVar12 = *(long **)(*param_1 + unaff_x26 * 8);
  }
joined_r0x00476cd8:
  if (plVar12 == (long *)0x0) {
    *plVar9 = param_1[2];
    param_1[2] = (long)plVar9;
    *(long **)(*param_1 + unaff_x26 * 8) = plVar1;
    if (*plVar9 != 0) {
      uVar8 = *(ulong *)(*plVar9 + 8);
      if ((uVar15 & uVar15 - 1) == 0) {
        uVar8 = uVar8 & uVar15 - 1;
      }
      else if (uVar15 <= uVar8) {
        uVar14 = 0;
        if (uVar15 != 0) {
          uVar14 = uVar8 / uVar15;
        }
        uVar8 = uVar8 - uVar14 * uVar15;
      }
      *(long **)(*param_1 + uVar8 * 8) = plVar9;
    }
  }
  else {
    *plVar9 = *plVar12;
    *plVar12 = (long)plVar9;
  }
  uVar17 = 1;
  param_1[3] = param_1[3] + 1;
  local_80 = plVar9;
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
LAB_00476d80:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar9,uVar17);
}


// ===== 00476d88  FUN_00476d88 =====

void FUN_00476d88(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)*param_1;
  *param_1 = 0;
  if (__ptr != (void *)0x0) {
    if ((*(char *)(param_1 + 2) != '\0') && ((*(byte *)((long)__ptr + 0x10) & 1) != 0)) {
      free(*(void **)((long)__ptr + 0x20));
    }
    free(__ptr);
    return;
  }
  return;
}


// ===== 00476dd8  FUN_00476dd8 =====

void FUN_00476dd8(long *param_1,ulong param_2)

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
LAB_00476f5c:
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
          goto LAB_00476f5c;
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


// ===== 00476fb0  FUN_00476fb0 =====

undefined8 * FUN_00476fb0(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *__ptr;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  __ptr = (undefined8 *)*param_1;
  puVar9 = (undefined8 *)param_1[1];
  lVar10 = (long)puVar9 - (long)__ptr;
  lVar4 = lVar10 >> 3;
  uVar1 = lVar4 * -0x5555555555555555 + 1;
  if (uVar1 < 0xaaaaaaaaaaaaaab) {
    lVar5 = param_1[2] - (long)__ptr >> 3;
    uVar6 = lVar5 * 0x5555555555555556;
    if (uVar6 < uVar1 || uVar6 - uVar1 == 0) {
      uVar6 = uVar1;
    }
    if (0x555555555555554 < (ulong)(lVar5 * -0x5555555555555555)) {
      uVar6 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar6 == 0) {
      lVar3 = 0;
      lVar5 = param_2[1];
      puVar11 = (undefined8 *)(lVar4 * 8);
      *puVar11 = *param_2;
      puVar11[1] = lVar5;
    }
    else {
      if (0xaaaaaaaaaaaaaaa < uVar6) goto LAB_0047716c;
      lVar3 = FUN_00759c3c(uVar6 * 0x18);
      lVar5 = param_2[1];
      puVar11 = (undefined8 *)(lVar3 + lVar4 * 8);
      *puVar11 = *param_2;
      puVar11[1] = lVar5;
    }
    if (lVar5 != 0) {
      FUN_00755c20(1,lVar5 + 8);
      __ptr = (undefined8 *)*param_1;
      puVar9 = (undefined8 *)param_1[1];
      lVar10 = (long)puVar9 - (long)__ptr;
    }
    puVar11[2] = param_2[2];
    puVar7 = (undefined8 *)((long)puVar11 - lVar10);
    puVar12 = __ptr;
    if (__ptr != puVar9) {
      do {
        lVar4 = puVar12[1];
        *puVar7 = *puVar12;
        puVar7[1] = lVar4;
        if (lVar4 != 0) {
          FUN_00755c20(1,lVar4 + 8);
        }
        puVar2 = puVar12 + 3;
        puVar7[2] = puVar12[2];
        puVar7 = puVar7 + 3;
        puVar12 = puVar2;
      } while (puVar2 != puVar9);
      do {
        plVar8 = (long *)__ptr[1];
        if ((plVar8 != (long *)0x0) &&
           (lVar4 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1), lVar4 == 0)) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          FUN_0071245c(plVar8);
        }
        __ptr = __ptr + 3;
      } while (__ptr != puVar9);
      __ptr = (undefined8 *)*param_1;
    }
    *param_1 = (long)puVar11 - lVar10;
    param_1[1] = (long)(puVar11 + 3);
    param_1[2] = lVar3 + uVar6 * 0x18;
    if (__ptr != (undefined8 *)0x0) {
      free(__ptr);
    }
    return puVar11 + 3;
  }
  FUN_00477170(param_1);
LAB_0047716c:
                    /* WARNING: Subroutine does not return */
  FUN_002f9ee0();
}


// ===== 00477170  FUN_00477170 =====

void FUN_00477170(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_002f9e60("vector");
}


// ===== 00477184  FUN_00477184 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00477184(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
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
  
  puVar4 = PTR_PTR_007a1e48;
  puVar3 = PTR_DAT_007a1e40;
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  local_178[0] = *(undefined **)(PTR_PTR_007a1e48 + 8);
  puVar1 = PTR_DAT_007a1e40 + 0x40;
  local_d8 = 0;
  local_108[0] = puVar1;
  *(undefined8 *)((long)local_178 + *(long *)(local_178[0] + -0x18)) =
       *(undefined8 *)(PTR_PTR_007a1e48 + 0x10);
  lVar5 = *(long *)(local_178[0] + -0x18);
                    /* try { // try from 00477208 to 00477213 has its CatchHandler @ 00477324 */
  FUN_00715fc0((long)local_178 + lVar5,local_178 + 1);
  local_178[0] = puVar3 + 0x18;
  *(undefined8 *)((long)&uStack_f0 + lVar5) = 0;
  *(undefined4 *)((long)auStack_e8 + lVar5) = 0xffffffff;
                    /* try { // try from 0047722c to 00477233 has its CatchHandler @ 00477304 */
  local_108[0] = puVar1;
  FUN_007160dc(local_178 + 1);
  puVar1 = PTR_DAT_007a10f8 + 0x10;
  local_110 = 0x10;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_178[1] = puVar1;
  FUN_00477338(local_178,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
                    /* try { // try from 0047727c to 00477287 has its CatchHandler @ 00477300 */
  FUN_00718470(param_1,local_178 + 1);
  local_178[0] = *(undefined **)puVar4;
  *(undefined8 *)((long)local_178 + *(long *)(local_178[0] + -0x18)) =
       *(undefined8 *)(puVar4 + 0x18);
  local_178[1] = puVar1;
  if ((local_130 & 1) != 0) {
    free(local_120);
  }
  FUN_00716098(local_178 + 1);
  FUN_00716ee4(local_178,puVar4 + 8);
  thunk_FUN_00715e00(local_108);
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00477338  FUN_00477338 =====

void FUN_00477338(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9)

{
  size_t sVar1;
  char *pcVar2;
  
  pcVar2 = (char *)*param_2;
  sVar1 = strlen(pcVar2);
                    /* try { // try from 00477384 to 0047738f has its CatchHandler @ 00477400 */
  FUN_00303e0c(param_1,pcVar2,sVar1);
                    /* try { // try from 00477394 to 0047739b has its CatchHandler @ 004773fc */
  FUN_007176ec(param_1,*param_3);
  pcVar2 = (char *)*param_4;
  sVar1 = strlen(pcVar2);
                    /* try { // try from 004773ac to 004773b7 has its CatchHandler @ 004773f8 */
  FUN_00303e0c(param_1,pcVar2,sVar1);
                    /* try { // try from 004773bc to 004773c3 has its CatchHandler @ 004773f4 */
  FUN_007176ec(param_1,*param_5);
  FUN_00477404(param_1,param_6,param_7,param_8,param_9);
  return;
}


// ===== 00477404  FUN_00477404 =====

void FUN_00477404(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined1 *param_5)

{
  size_t sVar1;
  char *pcVar2;
  
  pcVar2 = (char *)*param_2;
  sVar1 = strlen(pcVar2);
                    /* try { // try from 00477438 to 00477443 has its CatchHandler @ 00477498 */
  FUN_00303e0c(param_1,pcVar2,sVar1);
                    /* try { // try from 00477448 to 0047744f has its CatchHandler @ 00477494 */
  FUN_007176ec(param_1,*param_3);
  pcVar2 = (char *)*param_4;
  sVar1 = strlen(pcVar2);
                    /* try { // try from 00477460 to 0047746b has its CatchHandler @ 00477490 */
  FUN_00303e0c(param_1,pcVar2,sVar1);
                    /* try { // try from 00477470 to 00477477 has its CatchHandler @ 0047748c */
  FUN_00717084(param_1,*param_5);
  return;
}


// ===== 0047749c  FUN_0047749c =====

void FUN_0047749c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_002f9e60("vector");
}


// ===== 004774b0  FUN_004774b0 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_004774b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
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
  
  puVar4 = PTR_PTR_007a1e48;
  puVar3 = PTR_DAT_007a1e40;
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  puVar1 = PTR_DAT_007a1e40 + 0x40;
  local_178[0] = *(undefined **)(PTR_PTR_007a1e48 + 8);
  local_d8 = 0;
  local_108[0] = puVar1;
  *(undefined8 *)((long)local_178 + *(long *)(local_178[0] + -0x18)) =
       *(undefined8 *)(PTR_PTR_007a1e48 + 0x10);
  lVar5 = *(long *)(local_178[0] + -0x18);
                    /* try { // try from 0047752c to 00477537 has its CatchHandler @ 0047763c */
  FUN_00715fc0((long)local_178 + lVar5,local_178 + 1);
  local_178[0] = puVar3 + 0x18;
  *(undefined8 *)((long)&uStack_f0 + lVar5) = 0;
  *(undefined4 *)((long)auStack_e8 + lVar5) = 0xffffffff;
                    /* try { // try from 00477550 to 00477557 has its CatchHandler @ 0047761c */
  local_108[0] = puVar1;
  FUN_007160dc(local_178 + 1);
  puVar1 = PTR_DAT_007a10f8 + 0x10;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_110 = 0x10;
  local_178[1] = puVar1;
  FUN_00477650(local_178,param_2,param_3,param_4,param_5);
                    /* try { // try from 00477594 to 0047759f has its CatchHandler @ 00477618 */
  FUN_00718470(param_1,local_178 + 1);
  local_178[0] = *(undefined **)puVar4;
  *(undefined8 *)((long)local_178 + *(long *)(local_178[0] + -0x18)) =
       *(undefined8 *)(puVar4 + 0x18);
  local_178[1] = puVar1;
  if ((local_130 & 1) != 0) {
    free(local_120);
  }
  FUN_00716098(local_178 + 1);
  FUN_00716ee4(local_178,puVar4 + 8);
  thunk_FUN_00715e00(local_108);
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00477650  FUN_00477650 =====

void FUN_00477650(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  size_t sVar1;
  char *pcVar2;
  
  pcVar2 = (char *)*param_2;
  sVar1 = strlen(pcVar2);
                    /* try { // try from 00477684 to 0047768f has its CatchHandler @ 004776e4 */
  FUN_00303e0c(param_1,pcVar2,sVar1);
                    /* try { // try from 00477694 to 0047769b has its CatchHandler @ 004776e0 */
  FUN_007176ec(param_1,*param_3);
  pcVar2 = (char *)*param_4;
  sVar1 = strlen(pcVar2);
                    /* try { // try from 004776ac to 004776b7 has its CatchHandler @ 004776dc */
  FUN_00303e0c(param_1,pcVar2,sVar1);
                    /* try { // try from 004776bc to 004776c3 has its CatchHandler @ 004776d8 */
  FUN_007176ec(param_1,*param_5);
  return;
}


// ===== 004776e8  FUN_004776e8 =====

void FUN_004776e8(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  long lVar1;
  void *__ptr;
  undefined8 uVar2;
  void *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_60 = (void *)0x0;
                    /* try { // try from 0047771c to 00477737 has its CatchHandler @ 00477788 */
  local_58 = param_1;
  uStack_50 = param_2;
  local_48 = param_3;
  local_40 = param_4;
  uVar2 = FUN_004a7084(&local_58,&local_60,0);
  *param_5 = uVar2;
  uVar2 = FUN_0058044c(&local_60);
  __ptr = local_60;
  local_60 = (void *)0x0;
  if (__ptr != (void *)0x0) {
    if ((*(byte *)((long)__ptr + 8) & 1) != 0) {
      free(*(void **)((long)__ptr + 0x18));
    }
    free(__ptr);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


// ===== 00477830  FUN_00477830 =====

void FUN_00477830(undefined4 param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  void *__ptr;
  undefined8 uVar2;
  void *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_58 = 0;
  uStack_50 = 0;
  local_60 = (void *)0x0;
                    /* try { // try from 00477864 to 0047787f has its CatchHandler @ 004778d0 */
  local_48 = param_1;
  local_40 = param_2;
  uVar2 = FUN_004a7084(&local_58,&local_60,0);
  *param_3 = uVar2;
  uVar2 = FUN_0058044c(&local_60);
  __ptr = local_60;
  local_60 = (void *)0x0;
  if (__ptr != (void *)0x0) {
    if ((*(byte *)((long)__ptr + 8) & 1) != 0) {
      free(*(void **)((long)__ptr + 0x18));
    }
    free(__ptr);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


// ===== 00477978  FUN_00477978 =====

void FUN_00477978(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  void *__ptr;
  undefined8 uVar2;
  void *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_58 = 0;
  uStack_50 = 0;
  local_60 = (void *)0x0;
                    /* try { // try from 004779ac to 004779c3 has its CatchHandler @ 00477a14 */
  local_48 = param_1;
  local_40 = param_2;
  uVar2 = FUN_004a7084(&local_58,&local_60);
  *param_4 = uVar2;
  uVar2 = FUN_0058044c(&local_60);
  __ptr = local_60;
  local_60 = (void *)0x0;
  if (__ptr != (void *)0x0) {
    if ((*(byte *)((long)__ptr + 8) & 1) != 0) {
      free(*(void **)((long)__ptr + 0x18));
    }
    free(__ptr);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


// ===== 00477abc  FUN_00477abc =====

void FUN_00477abc(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 *param_6)

{
  long lVar1;
  void *__ptr;
  undefined8 uVar2;
  void *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_60 = (void *)0x0;
                    /* try { // try from 00477af0 to 00477b0b has its CatchHandler @ 00477b5c */
  local_58 = param_1;
  uStack_50 = param_2;
  local_48 = param_3;
  local_40 = param_4;
  uVar2 = FUN_004a7084(&local_58,&local_60,param_5);
  *param_6 = uVar2;
  uVar2 = FUN_0058044c(&local_60);
  __ptr = local_60;
  local_60 = (void *)0x0;
  if (__ptr != (void *)0x0) {
    if ((*(byte *)((long)__ptr + 8) & 1) != 0) {
      free(*(void **)((long)__ptr + 0x18));
    }
    free(__ptr);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


// ===== 00477c04  FUN_00477c04 =====

undefined8 FUN_00477c04(void)

{
  long *plVar1;
  
                    /* try { // try from 00477c10 to 00477c2b has its CatchHandler @ 00477c3c */
  plVar1 = (long *)FUN_00641af0();
  plVar1 = (long *)(**(code **)(*plVar1 + 200))();
  (**(code **)(*plVar1 + 0x10))();
  return 0;
}


// ===== 00477ccc  FUN_00477ccc =====

undefined8 FUN_00477ccc(void)

{
  long *plVar1;
  
                    /* try { // try from 00477cd8 to 00477cf3 has its CatchHandler @ 00477d04 */
  plVar1 = (long *)FUN_00641af0();
  plVar1 = (long *)(**(code **)(*plVar1 + 200))();
  (**(code **)(*plVar1 + 0x18))();
  return 0;
}


// ===== 00477d94  FUN_00477d94 =====

undefined8 FUN_00477d94(undefined8 param_1,undefined4 param_2)

{
                    /* try { // try from 00477da4 to 00477da7 has its CatchHandler @ 00477dc4 */
  FUN_004a7738();
                    /* try { // try from 00477da8 to 00477daf has its CatchHandler @ 00477dc0 */
  FUN_00477e54(param_2);
  return 0;
}


// ===== 00477e54  FUN_00477e54 =====

void FUN_00477e54(undefined4 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [80];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(long *)PTR_DAT_007a1f08 == 0) {
    uVar2 = FUN_00753a74(0x88);
                    /* try { // try from 00477ebc to 00477ec3 has its CatchHandler @ 00477f7c */
    FUN_00645c30(auStack_a0);
                    /* try { // try from 00477ec4 to 00477ee3 has its CatchHandler @ 00477f6c */
    FUN_0047488c(auStack_88,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/include/onnxruntime/core/common/logging/logging.h"
                 ,0x149,
                 "static void onnxruntime::logging::LoggingManager::SetDefaultLoggerSeverity(Severity)"
                 ,auStack_a0);
                    /* try { // try from 00477ee4 to 00477ef3 has its CatchHandler @ 00477f4c */
    FUN_00479eac(auStack_b8,"Attempt to use DefaultLogger but none has been registered.");
    FUN_004792b8(uVar2,auStack_88,auStack_b8);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00477f18 to 00477f2f has its CatchHandler @ 00477f30 */
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar2,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
  }
  else {
    *(undefined4 *)(*(long *)PTR_DAT_007a1f08 + 0x20) = param_1;
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00477fa8  FUN_00477fa8 =====

undefined8
FUN_00477fa8(undefined8 param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  void *__ptr;
  long *plVar3;
  long lVar4;
  long *local_a8;
  long *local_a0;
  undefined8 local_98;
  long *local_90;
  undefined1 auStack_88 [56];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((param_3 == -1) || ((param_2 == 0 && (param_3 != 0)))) {
                    /* WARNING: Subroutine does not return */
    FUN_004839bc();
  }
  FUN_005ca9a8(auStack_88,param_3,param_2);
                    /* try { // try from 00477ffc to 00478003 has its CatchHandler @ 00478118 */
  plVar3 = (long *)FUN_00759c3c(0x40);
  puVar2 = PTR_DAT_007a1e78;
  plVar3[1] = 0;
  plVar3[2] = 0;
  *plVar3 = (long)(puVar2 + 0x10);
                    /* try { // try from 00478020 to 0047802b has its CatchHandler @ 00478100 */
  FUN_00487870(plVar3 + 3,param_4);
  local_98 = 0;
  local_90 = (long *)0x0;
                    /* try { // try from 00478034 to 00478047 has its CatchHandler @ 004780e8 */
  local_a8 = plVar3 + 3;
  local_a0 = plVar3;
  FUN_005c8610(param_1,auStack_88,&local_a8,param_5);
  plVar3 = local_a0;
  if ((local_a0 != (long *)0x0) &&
     (lVar4 = FUN_00755c50(0xffffffffffffffff,local_a0 + 1), lVar4 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_0071245c(plVar3);
  }
  plVar3 = local_90;
  if ((local_90 != (long *)0x0) &&
     (lVar4 = FUN_00755c50(0xffffffffffffffff,local_90 + 1), lVar4 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_0071245c(plVar3);
  }
  __ptr = local_50;
  local_50 = (void *)0x0;
  if (__ptr != (void *)0x0) {
    free(__ptr);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00478148  FUN_00478148 =====

void FUN_00478148(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 00478198  FUN_00478198 =====

void FUN_00478198(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 004781e8  FUN_004781e8 =====

/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_004781e8(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
            ulong param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  void *__ptr;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  char *pcVar10;
  byte local_1c0;
  undefined1 auStack_1bf [15];
  undefined1 *local_1b0;
  ulong local_1a8;
  undefined *local_1a0 [9];
  ulong local_158;
  undefined8 uStack_150;
  void *local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined *local_130 [3];
  undefined8 uStack_118;
  undefined4 auStack_110 [4];
  undefined8 local_100;
  long local_98;
  long *local_90;
  void *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if ((param_3 != -1) && ((param_2 != 0 || (param_3 == 0)))) {
    FUN_005ca9a8(&local_98,param_3,param_2);
    if ((local_98 != -1) && ((local_98 == 0 || (local_90 != (long *)0x0)))) {
      if (local_90 == (long *)0x0) {
        if (local_98 != 0) goto LAB_00478498;
      }
      else if (local_98 != 0) {
        plVar9 = local_90 + local_98;
        local_98 = local_98 << 3;
        do {
          if (plVar9 <= local_90) goto LAB_00478498;
          if (*local_90 < 0) {
            pcVar10 = "tried creating tensor with negative value in shape";
            goto LAB_0047841c;
          }
          local_98 = local_98 + -8;
          local_90 = local_90 + 1;
        } while (local_98 != 0);
      }
                    /* try { // try from 0047828c to 00478297 has its CatchHandler @ 00478514 */
      lVar6 = FUN_005cabcc(&local_98);
      if (lVar6 < 0) {
        plVar9 = (long *)FUN_00753a74(8);
        *plVar9 = (long)(PTR_DAT_007a1ef8 + 0x10);
        if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* try { // try from 004784c4 to 004784d7 has its CatchHandler @ 00478514 */
                    /* WARNING: Subroutine does not return */
          FUN_00753c5c(plVar9,PTR_PTR_007a1f00,PTR_FUN_007a11e0);
        }
      }
      else {
        uVar7 = FUN_00560650(*(undefined8 *)(param_1 + 0x10),lVar6,0,&local_1a8);
        puVar5 = PTR_PTR_007a1e48;
        puVar4 = PTR_DAT_007a1e40;
        if ((uVar7 & 1) == 0) {
          pcVar10 = "size overflow";
LAB_0047841c:
          uVar8 = FUN_00580398(2,pcVar10);
        }
        else if (param_6 < local_1a8) {
          local_100 = 0;
          local_1a0[0] = *(undefined **)(PTR_PTR_007a1e48 + 8);
          puVar1 = PTR_DAT_007a1e40 + 0x40;
          local_130[0] = puVar1;
          *(undefined8 *)((long)local_1a0 + *(long *)(local_1a0[0] + -0x18)) =
               *(undefined8 *)(PTR_PTR_007a1e48 + 0x10);
          lVar6 = *(long *)(local_1a0[0] + -0x18);
                    /* try { // try from 004782f8 to 00478303 has its CatchHandler @ 004784f4 */
          FUN_00715fc0((long)local_1a0 + lVar6,local_1a0 + 1);
          local_1a0[0] = puVar4 + 0x18;
          *(undefined8 *)((long)&uStack_118 + lVar6) = 0;
          *(undefined4 *)((long)auStack_110 + lVar6) = 0xffffffff;
                    /* try { // try from 0047831c to 00478323 has its CatchHandler @ 004784dc */
          local_130[0] = puVar1;
          FUN_007160dc(local_1a0 + 1);
          puVar4 = PTR_DAT_007a10f8;
          local_1a0[1] = PTR_DAT_007a10f8 + 0x10;
          uStack_150 = 0;
          local_158 = 0;
          uStack_140 = 0;
          local_148 = (void *)0x0;
          local_138 = 0x10;
                    /* try { // try from 00478348 to 0047837b has its CatchHandler @ 00478504 */
          uVar8 = FUN_00303e0c(local_1a0,"not enough space: expected ",0x1b);
          uVar8 = FUN_007176ec(uVar8,local_1a8);
          uVar8 = FUN_00303e0c(uVar8,", got ",6);
          FUN_007176ec(uVar8,param_6);
                    /* try { // try from 0047837c to 0047838b has its CatchHandler @ 004784d8 */
          FUN_00718470(&local_1c0,local_1a0 + 1);
          puVar2 = local_1b0;
          if ((local_1c0 & 1) == 0) {
            puVar2 = auStack_1bf;
          }
          uVar8 = FUN_00580398(2,puVar2);
          if ((local_1c0 & 1) != 0) {
            free(local_1b0);
          }
          local_1a0[0] = *(undefined **)puVar5;
          *(undefined8 *)((long)local_1a0 + *(long *)(local_1a0[0] + -0x18)) =
               *(undefined8 *)(puVar5 + 0x18);
          local_1a0[1] = puVar4 + 0x10;
          if ((local_158 & 1) != 0) {
            free(local_148);
          }
          FUN_00716098(local_1a0 + 1);
          FUN_00716ee4(local_1a0,puVar5 + 8);
          thunk_FUN_00715e00(local_130);
        }
        else {
                    /* try { // try from 0047842c to 0047844f has its CatchHandler @ 004784f0 */
          FUN_005c872c(param_1,&local_98,param_5,param_4,param_7,0,0,0);
          uVar8 = 0;
        }
        __ptr = local_60;
        local_60 = (void *)0x0;
        if (__ptr != (void *)0x0) {
          free(__ptr);
        }
        if (*(long *)(lVar3 + 0x28) == local_58) {
          return uVar8;
        }
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
LAB_00478498:
                    /* WARNING: Subroutine does not return */
  FUN_004839bc();
}


// ===== 00478544  FUN_00478544 =====

void FUN_00478544(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined4 param_6,undefined8 *param_7,undefined8 param_8)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *__ptr;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = tpidr_el0;
  lVar5 = *(long *)(lVar6 + 0x28);
                    /* try { // try from 00478588 to 0047859b has its CatchHandler @ 00478680 */
  plVar1 = (long *)FUN_00576d3c(param_6);
  uVar2 = (**(code **)(*plVar1 + 0x28))();
                    /* try { // try from 0047859c to 004785a7 has its CatchHandler @ 0047867c */
  __ptr = (undefined8 *)FUN_00759c3c(0x18);
  *__ptr = 0;
  __ptr[1] = 0;
  __ptr[2] = 0;
                    /* try { // try from 004785b8 to 004785d7 has its CatchHandler @ 00478668 */
  lVar3 = FUN_004781e8(uVar2,param_4,param_5,param_1,param_2,param_3,__ptr,param_8,__ptr);
  if (lVar3 == 0) {
    *param_7 = __ptr;
    lVar6 = *(long *)(lVar6 + 0x28);
  }
  else {
    plVar1 = (long *)__ptr[1];
    if ((plVar1 != (long *)0x0) && (lVar4 = FUN_00755c50(0xffffffffffffffff,plVar1 + 1), lVar4 == 0)
       ) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      FUN_0071245c(plVar1);
    }
    free(__ptr);
    lVar6 = *(long *)(lVar6 + 0x28);
  }
  if (lVar6 != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar3);
  }
  return;
}


// ===== 00478720  FUN_00478720 =====

void FUN_00478720(undefined8 *param_1)

{
  long lVar1;
  void *__ptr;
  long *plVar2;
  
  __ptr = (void *)*param_1;
  *param_1 = 0;
  if (__ptr == (void *)0x0) {
    return;
  }
  plVar2 = *(long **)((long)__ptr + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    free(__ptr);
    return;
  }
  free(__ptr);
  return;
}


// ===== 00478794  FUN_00478794 =====

void FUN_00478794(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 *param_5)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 004787cc to 004787df has its CatchHandler @ 00478860 */
  plVar2 = (long *)FUN_00576d3c(param_4);
  uVar3 = (**(code **)(*plVar2 + 0x28))();
                    /* try { // try from 004787e0 to 004787eb has its CatchHandler @ 0047885c */
  puVar4 = (undefined8 *)FUN_00759c3c(0x18);
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
                    /* try { // try from 004787fc to 00478813 has its CatchHandler @ 00478848 */
  FUN_00477fa8(uVar3,param_2,param_3,param_1,puVar4);
  *param_5 = puVar4;
  if (*(long *)(lVar1 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0);
}


// ===== 00478900  FUN_00478900 =====

undefined8
FUN_00478900(undefined8 param_1,long param_2,long param_3,undefined4 param_4,undefined8 *param_5)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  void *__ptr;
  long *local_b0;
  long *local_a8;
  undefined8 *local_a0;
  long *local_98;
  long *local_90;
  long local_88;
  long *local_80;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00478934 to 0047893b has its CatchHandler @ 00478b5c */
  plVar3 = (long *)FUN_005774f4(param_4);
                    /* try { // try from 00478944 to 00478947 has its CatchHandler @ 00478b58 */
  uVar4 = (**(code **)(*plVar3 + 0x28))();
                    /* try { // try from 0047895c to 0047896b has its CatchHandler @ 00478b54 */
  if ((param_3 != -1) &&
     ((((param_2 != 0 || (param_3 == 0)) &&
       (FUN_005ca9a8(&local_88,param_3,param_2), local_88 != -1)) &&
      ((local_88 == 0 || (local_80 != (long *)0x0)))))) {
    if (local_80 == (long *)0x0) {
      if (local_88 != 0) goto LAB_00478ae4;
    }
    else if (local_88 != 0) {
      plVar3 = local_80 + local_88;
      local_88 = local_88 << 3;
      do {
        if (plVar3 <= local_80) goto LAB_00478ae4;
        if (*local_80 < 0) {
          uVar4 = FUN_00580398(2,"tried creating tensor with negative value in shape");
          __ptr = local_50;
          local_50 = (void *)0x0;
          if (__ptr == (void *)0x0) goto LAB_00478ab4;
          goto LAB_00478ab0;
        }
        local_88 = local_88 + -8;
        local_80 = local_80 + 1;
      } while (local_88 != 0);
    }
                    /* try { // try from 004789b0 to 004789b7 has its CatchHandler @ 00478b38 */
    plVar5 = (long *)FUN_00759c3c(0x40);
    puVar2 = PTR_DAT_007a1e78;
    plVar3 = plVar5 + 3;
    plVar5[1] = 0;
    plVar5[2] = 0;
    *plVar5 = (long)(puVar2 + 0x10);
                    /* try { // try from 004789d4 to 004789df has its CatchHandler @ 00478b1c */
    FUN_00487870(plVar3,param_1);
    local_98 = plVar3;
    local_90 = plVar5;
                    /* try { // try from 004789e4 to 004789eb has its CatchHandler @ 00478b08 */
    local_a0 = (undefined8 *)FUN_00759c3c(0x18);
    *local_a0 = 0;
    local_a0[1] = 0;
    local_a0[2] = 0;
    local_98 = (long *)0x0;
    local_90 = (long *)0x0;
                    /* try { // try from 00478a04 to 00478a13 has its CatchHandler @ 00478aec */
    local_b0 = plVar3;
    local_a8 = plVar5;
    FUN_005bda78(uVar4,&local_88,&local_b0,local_a0);
    plVar3 = local_a8;
    if ((local_a8 != (long *)0x0) &&
       (lVar6 = FUN_00755c50(0xffffffffffffffff,local_a8 + 1), lVar6 == 0)) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      FUN_0071245c(plVar3);
    }
    plVar3 = local_90;
    *param_5 = local_a0;
    if ((local_90 != (long *)0x0) &&
       (lVar6 = FUN_00755c50(0xffffffffffffffff,local_90 + 1), lVar6 == 0)) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      FUN_0071245c(plVar3);
    }
    __ptr = local_50;
    uVar4 = 0;
    local_50 = (void *)0x0;
    if (__ptr != (void *)0x0) {
LAB_00478ab0:
      local_50 = (void *)0x0;
      free(__ptr);
    }
LAB_00478ab4:
    if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return uVar4;
  }
LAB_00478ae4:
                    /* WARNING: Subroutine does not return */
  FUN_004839bc();
}


// ===== 00478be8  FUN_00478be8 =====

void FUN_00478be8(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                 long param_6,long param_7)

{
  long lVar1;
  void *__ptr;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long local_138;
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [80];
  long *local_b0;
  undefined1 auStack_a8 [56];
  void *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if ((param_4 == -1) || ((param_3 == 0 && (param_4 != 0)))) {
LAB_00478d50:
                    /* WARNING: Subroutine does not return */
    FUN_004839bc();
  }
                    /* try { // try from 00478c38 to 00478c43 has its CatchHandler @ 00478fc0 */
  FUN_005ca9a8(auStack_a8,param_4);
                    /* try { // try from 00478c44 to 00478c53 has its CatchHandler @ 00478fbc */
  lVar2 = FUN_0047907c(param_1,auStack_a8,param_2);
                    /* try { // try from 00478c54 to 00478c5f has its CatchHandler @ 00478fcc */
  lVar3 = FUN_005cabcc(auStack_a8);
  if (lVar3 < 0) {
    plVar4 = (long *)FUN_00753a74(8);
    *plVar4 = (long)(PTR_DAT_007a1ef8 + 0x10);
    if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* try { // try from 00478d7c to 00478d8f has its CatchHandler @ 00478fcc */
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(plVar4,PTR_PTR_007a1f00,PTR_FUN_007a11e0);
    }
    goto LAB_00479074;
  }
  if ((param_7 == -1) || ((param_6 == 0 && (param_7 != 0)))) goto LAB_00478d50;
  if (*(int *)(*(long *)(lVar2 + 0x48) + 0x18) == 8) {
                    /* try { // try from 00478c88 to 00478ca3 has its CatchHandler @ 00478fb8 */
    FUN_005bf980(&local_b0,lVar2,lVar3,param_5,param_7,param_6);
    __ptr = local_70;
    if (local_b0 != (long *)0x0) {
                    /* try { // try from 00478d90 to 00478daf has its CatchHandler @ 00478f80 */
      FUN_00645c3c(0,&local_b0,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/onnxruntime_c_api.cc"
                   ,"FillSparseTensorCoo",0x153);
      uVar5 = FUN_00753a74(0x88);
                    /* try { // try from 00478dbc to 00478dc3 has its CatchHandler @ 00478f58 */
      FUN_00645c30(auStack_118);
                    /* try { // try from 00478dc4 to 00478de3 has its CatchHandler @ 00478f30 */
      FUN_0047488c(auStack_100,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/onnxruntime_c_api.cc"
                   ,0x153,
                   "OrtStatusPtr OrtApis::FillSparseTensorCoo(OrtValue *, const OrtMemoryInfo *, const int64_t *, size_t, const void *, const int64_t *, size_t)"
                   ,auStack_118);
      FUN_00486664(auStack_130,&local_b0);
      plVar4 = (long *)FUN_004792b8(uVar5,auStack_100,auStack_130);
      if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* try { // try from 00478e10 to 00478e27 has its CatchHandler @ 00478f04 */
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar5,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
      }
      goto LAB_00479074;
    }
  }
  else {
                    /* try { // try from 00478cf8 to 00478cff has its CatchHandler @ 00478fb4 */
    FUN_004792d8(&local_b0,*(undefined4 *)(param_2 + 0x14),*(undefined4 *)(lVar2 + 0x74));
                    /* try { // try from 00478d04 to 00478d27 has its CatchHandler @ 00478f94 */
    FUN_005bec80(&local_138,lVar2,local_b0,param_2,lVar3,param_5,param_7,param_6);
    if (local_138 != 0) {
                    /* try { // try from 00478e2c to 00478e4b has its CatchHandler @ 00478f6c */
      FUN_00645c3c(0,&local_138,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/onnxruntime_c_api.cc"
                   ,"FillSparseTensorCoo",0x157);
      uVar5 = FUN_00753a74(0x88);
                    /* try { // try from 00478e58 to 00478e5f has its CatchHandler @ 00478f44 */
      FUN_00645c30(auStack_118);
                    /* try { // try from 00478e60 to 00478e7f has its CatchHandler @ 00478ef0 */
      FUN_0047488c(auStack_100,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/onnxruntime_c_api.cc"
                   ,0x157,
                   "OrtStatusPtr OrtApis::FillSparseTensorCoo(OrtValue *, const OrtMemoryInfo *, const int64_t *, size_t, const void *, const int64_t *, size_t)"
                   ,auStack_118);
      FUN_00486664(auStack_130,&local_138);
      plVar4 = (long *)FUN_004792b8(uVar5,auStack_100,auStack_130);
      if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* try { // try from 00478eac to 00478ec3 has its CatchHandler @ 00478ec4 */
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar5,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
      }
      goto LAB_00479074;
    }
    (**(code **)(*local_b0 + 8))(local_b0);
    __ptr = local_70;
  }
  local_70 = (void *)0x0;
  if (__ptr != (void *)0x0) {
    local_70 = (void *)0x0;
    free(__ptr);
  }
  plVar4 = (long *)0x0;
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
LAB_00479074:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar4);
}


// ===== 0047907c  FUN_0047907c =====

void FUN_0047907c(undefined8 param_1,long *param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [80];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar3 = FUN_005bdd88();
  if ((*(int *)(*(long *)(lVar3 + 0x48) + 0x18) == 8) &&
     (*(char *)(param_3 + 0x14) != '\0' || *(char *)(lVar3 + 0x74) != '\0')) {
    uVar4 = FUN_00753a74(0x88);
                    /* try { // try from 004791c4 to 004791cb has its CatchHandler @ 00479240 */
    FUN_00645c30(auStack_a0);
                    /* try { // try from 004791cc to 004791eb has its CatchHandler @ 0047923c */
    FUN_0047488c(auStack_88,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/onnxruntime_c_api.cc"
                 ,0x132,
                 "SparseTensor &(anonymous namespace)::ValidateFillInputArgs(OrtValue *, const TensorShape &, const OrtMemoryInfo *)"
                 ,auStack_a0);
                    /* try { // try from 004791ec to 004791fb has its CatchHandler @ 00479238 */
    FUN_00479eac(auStack_b8,"Strings can only reside in CPU memory");
    FUN_004792b8(uVar4,auStack_88,auStack_b8);
    if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* try { // try from 0047921c to 00479233 has its CatchHandler @ 00479234 */
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar4,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
  }
  else {
    lVar3 = *param_2;
    if ((lVar3 == -1) || ((plVar5 = (long *)param_2[1], lVar3 != 0 && (plVar5 == (long *)0x0)))) {
LAB_00479134:
                    /* WARNING: Subroutine does not return */
      FUN_004839bc();
    }
    if (plVar5 == (long *)0x0) {
      if (lVar3 != 0) goto LAB_00479134;
    }
    else if (lVar3 != 0) {
      plVar1 = plVar5 + lVar3;
      lVar3 = lVar3 << 3;
      do {
        if (plVar1 <= plVar5) goto LAB_00479134;
        if (*plVar5 < 0) {
          uVar4 = FUN_00753a74(0x88);
                    /* try { // try from 00479144 to 0047914b has its CatchHandler @ 00479290 */
          FUN_00645c30(auStack_a0);
                    /* try { // try from 0047914c to 0047916b has its CatchHandler @ 00479280 */
          FUN_0047488c(auStack_88,
                       "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/onnxruntime_c_api.cc"
                       ,0x137,
                       "SparseTensor &(anonymous namespace)::ValidateFillInputArgs(OrtValue *, const TensorShape &, const OrtMemoryInfo *)"
                       ,auStack_a0);
                    /* try { // try from 0047916c to 0047917b has its CatchHandler @ 00479260 */
          FUN_00479eac(auStack_b8,"tried Filling sparse tensor with negative value in values shape")
          ;
          FUN_004792b8(uVar4,auStack_88,auStack_b8);
          if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* try { // try from 0047919c to 004791b3 has its CatchHandler @ 00479244 */
                    /* WARNING: Subroutine does not return */
            FUN_00753c5c(uVar4,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
          }
          goto LAB_004792b4;
        }
        lVar3 = lVar3 + -8;
        plVar5 = plVar5 + 1;
      } while (lVar3 != 0);
    }
    if (*(long *)(lVar2 + 0x28) == local_38) {
      return;
    }
  }
LAB_004792b4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004792b8  FUN_004792b8 =====

void FUN_004792b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* try { // try from 004792c4 to 004792cb has its CatchHandler @ 004792d4 */
  FUN_00474a40(param_1,param_2,0,param_3);
  return;
}


// ===== 004792d8  FUN_004792d8 =====

void FUN_004792d8(undefined8 *param_1,char param_2,char param_3)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [80];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_2 == '\0' && param_3 == '\0') {
    plVar3 = (long *)FUN_00759c3c(8);
    puVar2 = PTR_DAT_007a1f10;
    *param_1 = plVar3;
    *plVar3 = (long)(puVar2 + 0x10);
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
  }
  else {
    uVar4 = FUN_00753a74(0x88);
                    /* try { // try from 00479358 to 0047935f has its CatchHandler @ 00479418 */
    FUN_00645c30(auStack_a0);
                    /* try { // try from 00479360 to 0047937f has its CatchHandler @ 00479408 */
    FUN_0047488c(auStack_88,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/onnxruntime_c_api.cc"
                 ,299,
                 "std::unique_ptr<IDataTransfer> (anonymous namespace)::GetDataTransfer(const OrtDevice &, const OrtDevice &)"
                 ,auStack_a0);
                    /* try { // try from 00479380 to 0047938f has its CatchHandler @ 004793e8 */
    FUN_00479eac(auStack_b8,"Not able to find appropriate IDataTransfer to copy sparse data");
    FUN_004792b8(uVar4,auStack_88,auStack_b8);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 004793b4 to 004793cb has its CatchHandler @ 004793cc */
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar4,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00479444  FUN_00479444 =====

void FUN_00479444(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                 long param_6,long param_7,long param_8,long param_9)

{
  long lVar1;
  void *__ptr;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long local_140;
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [80];
  long *local_b8;
  undefined1 auStack_b0 [56];
  void *local_78;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  if ((param_4 == -1) || ((param_3 == 0 && (param_4 != 0)))) {
LAB_004795d0:
                    /* WARNING: Subroutine does not return */
    FUN_004839bc();
  }
                    /* try { // try from 00479498 to 004794a3 has its CatchHandler @ 00479840 */
  FUN_005ca9a8(auStack_b0,param_4);
                    /* try { // try from 004794a4 to 004794b3 has its CatchHandler @ 0047983c */
  lVar2 = FUN_0047907c(param_1,auStack_b0,param_2);
                    /* try { // try from 004794b4 to 004794bf has its CatchHandler @ 0047984c */
  lVar3 = FUN_005cabcc(auStack_b0);
  if (lVar3 < 0) {
    plVar4 = (long *)FUN_00753a74(8);
    *plVar4 = (long)(PTR_DAT_007a1ef8 + 0x10);
    if (*(long *)(lVar1 + 0x28) == local_70) {
                    /* try { // try from 004795fc to 0047960f has its CatchHandler @ 0047984c */
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(plVar4,PTR_PTR_007a1f00,PTR_FUN_007a11e0);
    }
    goto LAB_004798f4;
  }
  if (((param_7 == -1) || (((param_6 == 0 && (param_7 != 0)) || (param_9 == -1)))) ||
     ((param_8 == 0 && (param_9 != 0)))) goto LAB_004795d0;
  if (*(int *)(*(long *)(lVar2 + 0x48) + 0x18) == 8) {
                    /* try { // try from 004794fc to 0047951f has its CatchHandler @ 00479838 */
    FUN_005c13b8(&local_b8,lVar2,lVar3,param_5,param_7,param_6,param_9,param_8);
    __ptr = local_78;
    if (local_b8 != (long *)0x0) {
                    /* try { // try from 00479610 to 0047962f has its CatchHandler @ 00479800 */
      FUN_00645c3c(0,&local_b8,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/onnxruntime_c_api.cc"
                   ,"FillSparseTensorCsr",0x176);
      uVar5 = FUN_00753a74(0x88);
                    /* try { // try from 0047963c to 00479643 has its CatchHandler @ 004797d8 */
      FUN_00645c30(auStack_120);
                    /* try { // try from 00479644 to 00479663 has its CatchHandler @ 004797b0 */
      FUN_0047488c(auStack_108,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/onnxruntime_c_api.cc"
                   ,0x176,
                   "OrtStatusPtr OrtApis::FillSparseTensorCsr(OrtValue *, const OrtMemoryInfo *, const int64_t *, size_t, const void *, const int64_t *, size_t, const int64_t *, size_t)"
                   ,auStack_120);
      FUN_00486664(auStack_138,&local_b8);
      plVar4 = (long *)FUN_004792b8(uVar5,auStack_108,auStack_138);
      if (*(long *)(lVar1 + 0x28) == local_70) {
                    /* try { // try from 00479690 to 004796a7 has its CatchHandler @ 00479770 */
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar5,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
      }
      goto LAB_004798f4;
    }
  }
  else {
                    /* try { // try from 00479574 to 0047957b has its CatchHandler @ 00479834 */
    FUN_004792d8(&local_b8,*(undefined4 *)(param_2 + 0x14),*(undefined4 *)(lVar2 + 0x74));
                    /* try { // try from 00479580 to 004795a7 has its CatchHandler @ 00479814 */
    FUN_005c0a0c(&local_140,lVar2,local_b8,param_2,lVar3,param_5,param_7,param_6);
    if (local_140 != 0) {
                    /* try { // try from 004796ac to 004796cb has its CatchHandler @ 004797ec */
      FUN_00645c3c(0,&local_140,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/onnxruntime_c_api.cc"
                   ,"FillSparseTensorCsr",0x17a);
      uVar5 = FUN_00753a74(0x88);
                    /* try { // try from 004796d8 to 004796df has its CatchHandler @ 004797c4 */
      FUN_00645c30(auStack_120);
                    /* try { // try from 004796e0 to 004796ff has its CatchHandler @ 0047979c */
      FUN_0047488c(auStack_108,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/onnxruntime_c_api.cc"
                   ,0x17a,
                   "OrtStatusPtr OrtApis::FillSparseTensorCsr(OrtValue *, const OrtMemoryInfo *, const int64_t *, size_t, const void *, const int64_t *, size_t, const int64_t *, size_t)"
                   ,auStack_120);
      FUN_00486664(auStack_138,&local_140);
      plVar4 = (long *)FUN_004792b8(uVar5,auStack_108,auStack_138);
      if (*(long *)(lVar1 + 0x28) == local_70) {
                    /* try { // try from 0047972c to 00479743 has its CatchHandler @ 00479744 */
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar5,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
      }
      goto LAB_004798f4;
    }
    (**(code **)(*local_b8 + 8))(local_b8);
    __ptr = local_78;
  }
  local_78 = (void *)0x0;
  if (__ptr != (void *)0x0) {
    local_78 = (void *)0x0;
    free(__ptr);
  }
  plVar4 = (long *)0x0;
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return;
  }
LAB_004798f4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar4);
}


// ===== 004798fc  FUN_004798fc =====

void FUN_004798fc(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                 long param_6,long param_7,undefined8 param_8)

{
  long *plVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long local_168;
  long *local_160;
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [80];
  long local_d8;
  long *local_d0;
  void *local_a0;
  undefined1 auStack_98 [56];
  void *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if ((param_4 == -1) || ((param_3 == 0 && (param_4 != 0)))) {
LAB_00479ab8:
                    /* WARNING: Subroutine does not return */
    FUN_004839bc();
  }
                    /* try { // try from 0047994c to 00479957 has its CatchHandler @ 00479d80 */
  FUN_005ca9a8(auStack_98,param_4);
                    /* try { // try from 00479958 to 00479967 has its CatchHandler @ 00479d74 */
  lVar4 = FUN_0047907c(param_1,auStack_98,param_2);
                    /* try { // try from 0047997c to 0047998b has its CatchHandler @ 00479d70 */
  if ((param_7 == -1) ||
     ((((param_6 == 0 && (param_7 != 0)) ||
       (FUN_005ca9a8(&local_d8,param_7,param_6), local_d8 == -1)) ||
      ((local_d8 != 0 && (local_d0 == (long *)0x0)))))) goto LAB_00479ab8;
  if (local_d0 == (long *)0x0) {
    if (local_d8 != 0) goto LAB_00479ab8;
  }
  else if (local_d8 != 0) {
    plVar1 = local_d0 + local_d8;
    local_d8 = local_d8 << 3;
    do {
      if (plVar1 <= local_d0) goto LAB_00479ab8;
      if (*local_d0 < 0) {
        uVar6 = FUN_00753a74(0x88);
                    /* try { // try from 00479ac8 to 00479acf has its CatchHandler @ 00479de4 */
        FUN_00645c30(auStack_140);
                    /* try { // try from 00479ad0 to 00479aef has its CatchHandler @ 00479dd0 */
        FUN_0047488c(auStack_128,
                     "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/onnxruntime_c_api.cc"
                     ,0x198,
                     "OrtStatusPtr OrtApis::FillSparseTensorBlockSparse(OrtValue *, const OrtMemoryInfo *, const int64_t *, size_t, const void *, const int64_t *, size_t, const int32_t *)"
                     ,auStack_140);
                    /* try { // try from 00479af0 to 00479aff has its CatchHandler @ 00479dac */
        FUN_00479eac(auStack_158,
                     "tried Filling sparse tensor with negative value in block sparse indices shape"
                    );
        uVar5 = FUN_004792b8(uVar6,auStack_128,auStack_158);
        if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 00479b20 to 00479b37 has its CatchHandler @ 00479d8c */
                    /* WARNING: Subroutine does not return */
          FUN_00753c5c(uVar6,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
        }
        goto LAB_00479ea4;
      }
      local_d8 = local_d8 + -8;
      local_d0 = local_d0 + 1;
    } while (local_d8 != 0);
  }
  if (*(int *)(*(long *)(lVar4 + 0x48) + 0x18) == 8) {
                    /* try { // try from 004799e0 to 004799fb has its CatchHandler @ 00479d64 */
    FUN_005c2f68(&local_160,lVar4,auStack_98,param_5,&local_d8,param_8);
    pvVar3 = local_a0;
    if (local_160 != (long *)0x0) {
                    /* try { // try from 00479b3c to 00479b5b has its CatchHandler @ 00479d2c */
      FUN_00645c3c(0,&local_160,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/onnxruntime_c_api.cc"
                   ,"FillSparseTensorBlockSparse",0x19d);
      uVar6 = FUN_00753a74(0x88);
                    /* try { // try from 00479b68 to 00479b6f has its CatchHandler @ 00479d04 */
      FUN_00645c30(auStack_140);
                    /* try { // try from 00479b70 to 00479b8f has its CatchHandler @ 00479cdc */
      FUN_0047488c(auStack_128,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/onnxruntime_c_api.cc"
                   ,0x19d,
                   "OrtStatusPtr OrtApis::FillSparseTensorBlockSparse(OrtValue *, const OrtMemoryInfo *, const int64_t *, size_t, const void *, const int64_t *, size_t, const int32_t *)"
                   ,auStack_140);
      FUN_00486664(auStack_158,&local_160);
      uVar5 = FUN_004792b8(uVar6,auStack_128,auStack_158);
      if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 00479bbc to 00479bd3 has its CatchHandler @ 00479cb0 */
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar6,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
      }
      goto LAB_00479ea4;
    }
  }
  else {
                    /* try { // try from 00479a5c to 00479a63 has its CatchHandler @ 00479d60 */
    FUN_004792d8(&local_160,*(undefined4 *)(param_2 + 0x14),*(undefined4 *)(lVar4 + 0x74));
                    /* try { // try from 00479a68 to 00479a8b has its CatchHandler @ 00479d40 */
    FUN_005c2558(&local_168,lVar4,local_160,param_2,auStack_98,param_5,&local_d8,param_8);
    if (local_168 != 0) {
                    /* try { // try from 00479bd8 to 00479bf7 has its CatchHandler @ 00479d18 */
      FUN_00645c3c(0,&local_168,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/onnxruntime_c_api.cc"
                   ,"FillSparseTensorBlockSparse",0x1a1);
      uVar6 = FUN_00753a74(0x88);
                    /* try { // try from 00479c04 to 00479c0b has its CatchHandler @ 00479cf0 */
      FUN_00645c30(auStack_140);
                    /* try { // try from 00479c0c to 00479c2b has its CatchHandler @ 00479c9c */
      FUN_0047488c(auStack_128,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/onnxruntime_c_api.cc"
                   ,0x1a1,
                   "OrtStatusPtr OrtApis::FillSparseTensorBlockSparse(OrtValue *, const OrtMemoryInfo *, const int64_t *, size_t, const void *, const int64_t *, size_t, const int32_t *)"
                   ,auStack_140);
      FUN_00486664(auStack_158,&local_168);
      uVar5 = FUN_004792b8(uVar6,auStack_128,auStack_158);
      if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 00479c58 to 00479c6f has its CatchHandler @ 00479c70 */
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar6,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
      }
      goto LAB_00479ea4;
    }
    (**(code **)(*local_160 + 8))(local_160);
    pvVar3 = local_a0;
  }
  local_a0 = (void *)0x0;
  if (pvVar3 != (void *)0x0) {
    local_a0 = (void *)0x0;
    free(pvVar3);
  }
  pvVar3 = local_60;
  local_60 = (void *)0x0;
  if (pvVar3 != (void *)0x0) {
    free(pvVar3);
  }
  uVar5 = 0;
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
LAB_00479ea4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


// ===== 00479eac  FUN_00479eac =====

void FUN_00479eac(ulong *param_1,char *param_2)

{
  ulong uVar1;
  size_t __n;
  undefined1 *__dest;
  
  __n = strlen(param_2);
  if (0xfffffffffffffff7 < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_002fb400(param_1);
  }
  if (__n < 0x17) {
    __dest = (undefined1 *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)__n << 1);
    if (__n == 0) {
      *__dest = 0;
      return;
    }
  }
  else {
    uVar1 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar1 = __n | 7;
    }
    __dest = (undefined1 *)FUN_00759c3c(uVar1 + 1);
    param_1[1] = __n;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar1 + 1 | 1;
  }
  memcpy(__dest,param_2,__n);
  __dest[__n] = 0;
  return;
}


// ===== 00479f58  FUN_00479f58 =====

undefined8
FUN_00479f58(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
            long param_6,undefined4 param_7,undefined8 *param_8)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  void *pvVar6;
  long local_e8;
  long *local_e0;
  void *local_b0;
  undefined1 auStack_a8 [56];
  void *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00479fa0 to 00479fa7 has its CatchHandler @ 0047a1a8 */
  plVar2 = (long *)FUN_005774f4(param_7);
                    /* try { // try from 00479fb0 to 00479fb3 has its CatchHandler @ 0047a1a4 */
  lVar3 = (**(code **)(*plVar2 + 0x28))();
  if (((lVar3 == 0) || (*(int *)(lVar3 + 8) != 6)) || (*(int *)(lVar3 + 0x18) != 8)) {
                    /* try { // try from 0047a020 to 0047a02f has its CatchHandler @ 0047a1a0 */
                    /* try { // try from 0047a040 to 0047a04f has its CatchHandler @ 0047a184 */
    if ((((param_4 == -1) || ((param_3 == 0 && (param_4 != 0)))) ||
        (FUN_005ca9a8(auStack_a8,param_4,param_3), param_6 == -1)) ||
       (((param_5 == 0 && (param_6 != 0)) ||
        ((FUN_005ca9a8(&local_e8,param_6,param_5), local_e8 == -1 ||
         ((local_e8 != 0 && (local_e0 == (long *)0x0)))))))) {
LAB_0047a14c:
                    /* WARNING: Subroutine does not return */
      FUN_004839bc();
    }
    if (local_e0 == (long *)0x0) {
      if (local_e8 != 0) goto LAB_0047a14c;
    }
    else if (local_e8 != 0) {
      plVar2 = local_e0 + local_e8;
      local_e8 = local_e8 << 3;
      do {
        if (plVar2 <= local_e0) goto LAB_0047a14c;
        if (*local_e0 < 0) {
          uVar4 = FUN_00580398(2,"tried creating tensor with negative value in shape");
          pvVar6 = local_b0;
          local_b0 = (void *)0x0;
          if (pvVar6 == (void *)0x0) goto LAB_0047a0e0;
          goto LAB_0047a0dc;
        }
        local_e8 = local_e8 + -8;
        local_e0 = local_e0 + 1;
      } while (local_e8 != 0);
    }
                    /* try { // try from 0047a094 to 0047a09b has its CatchHandler @ 0047a168 */
    puVar5 = (undefined8 *)FUN_00759c3c(0x18);
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
                    /* try { // try from 0047a0ac to 0047a0c7 has its CatchHandler @ 0047a154 */
    FUN_005bd9b4(lVar3,auStack_a8,&local_e8,param_2,param_1,puVar5);
    pvVar6 = local_b0;
    uVar4 = 0;
    *param_8 = puVar5;
    local_b0 = (void *)0x0;
    if (pvVar6 != (void *)0x0) {
LAB_0047a0dc:
      local_b0 = (void *)0x0;
      free(pvVar6);
    }
LAB_0047a0e0:
    pvVar6 = local_70;
    local_70 = (void *)0x0;
    if (pvVar6 != (void *)0x0) {
      free(pvVar6);
    }
    if (*(long *)(lVar1 + 0x28) == local_68) {
      return uVar4;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_68) {
    uVar4 = FUN_00580398(2,
                         "Can not use strings in pre-allocated memory. Use CreateSparseTensorAsOrtValue() to allocate memory inside and copy"
                        );
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0047a234  FUN_0047a234 =====

void FUN_0047a234(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [80];
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0047a25c to 0047a25f has its CatchHandler @ 0047a3c0 */
  uVar2 = FUN_005bdd88();
  lVar4 = 0;
  lVar5 = 0;
  if (((param_2 != 0) && (param_3 != 0)) && (lVar4 = param_3, lVar5 = param_2, param_3 == -1)) {
                    /* WARNING: Subroutine does not return */
    FUN_004839bc(uVar2,0,0);
  }
                    /* try { // try from 0047a280 to 0047a287 has its CatchHandler @ 0047a3bc */
  FUN_005be924(&local_40,uVar2,lVar4,lVar5);
  if (local_40 == 0) {
    uVar3 = 0;
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
  }
  else {
                    /* try { // try from 0047a2bc to 0047a2db has its CatchHandler @ 0047a3a8 */
    FUN_00645c3c(0,&local_40,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/onnxruntime_c_api.cc"
                 ,"UseCooIndices",0x1e3);
    uVar2 = FUN_00753a74(0x88);
                    /* try { // try from 0047a2e8 to 0047a2ef has its CatchHandler @ 0047a394 */
    FUN_00645c30(auStack_a8);
                    /* try { // try from 0047a2f0 to 0047a30f has its CatchHandler @ 0047a380 */
    FUN_0047488c(auStack_90,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/onnxruntime_c_api.cc"
                 ,0x1e3,"OrtStatusPtr OrtApis::UseCooIndices(OrtValue *, int64_t *, size_t)",
                 auStack_a8);
    FUN_00486664(auStack_c0,&local_40);
    uVar3 = FUN_004792b8(uVar2,auStack_90,auStack_c0);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 0047a33c to 0047a353 has its CatchHandler @ 0047a354 */
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar2,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 0047a460  FUN_0047a460 =====

void FUN_0047a460(undefined8 param_1,long param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [80];
  long local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0047a494 to 0047a497 has its CatchHandler @ 0047a61c */
  uVar2 = FUN_005bdd88();
  lVar4 = 0;
  lVar6 = 0;
  lVar5 = lVar4;
  lVar7 = lVar6;
  if ((((param_2 == 0) || (param_3 == 0)) || (lVar5 = param_3, lVar7 = param_2, param_3 != -1)) &&
     (((param_4 == 0 || (param_5 == 0)) || (lVar4 = lVar5, lVar6 = lVar7, param_5 != -1)))) {
                    /* try { // try from 0047a4d8 to 0047a4df has its CatchHandler @ 0047a618 */
    FUN_005c06b4(&local_50);
    if (local_50 == 0) {
      uVar3 = 0;
      if (*(long *)(lVar1 + 0x28) == local_48) {
        return;
      }
    }
    else {
                    /* try { // try from 0047a518 to 0047a537 has its CatchHandler @ 0047a604 */
      FUN_00645c3c(0,&local_50,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/onnxruntime_c_api.cc"
                   ,"UseCsrIndices",0x1fb);
      uVar2 = FUN_00753a74(0x88);
                    /* try { // try from 0047a544 to 0047a54b has its CatchHandler @ 0047a5f0 */
      FUN_00645c30(auStack_b8);
                    /* try { // try from 0047a54c to 0047a56b has its CatchHandler @ 0047a5dc */
      FUN_0047488c(auStack_a0,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/onnxruntime_c_api.cc"
                   ,0x1fb,
                   "OrtStatusPtr OrtApis::UseCsrIndices(OrtValue *, int64_t *, size_t, int64_t *, size_t)"
                   ,auStack_b8);
      FUN_00486664(auStack_d0,&local_50);
      uVar3 = FUN_004792b8(uVar2,auStack_a0,auStack_d0);
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 0047a598 to 0047a5af has its CatchHandler @ 0047a5b0 */
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar2,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
      }
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_004839bc(uVar2,lVar4,lVar6);
}


// ===== 0047a6bc  FUN_0047a6bc =====

void FUN_0047a6bc(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  void *__ptr;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [80];
  long local_90;
  undefined1 auStack_88 [56];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0047a6ec to 0047a6ef has its CatchHandler @ 0047a890 */
  uVar2 = FUN_005bdd88();
  if ((param_3 == -1) || ((param_2 == 0 && (param_3 != 0)))) {
                    /* WARNING: Subroutine does not return */
    FUN_004839bc();
  }
                    /* try { // try from 0047a704 to 0047a713 has its CatchHandler @ 0047a88c */
  FUN_005ca9a8(auStack_88,param_3,param_2);
                    /* try { // try from 0047a714 to 0047a727 has its CatchHandler @ 0047a870 */
  FUN_005c222c(&local_90,uVar2,auStack_88,param_4);
  __ptr = local_50;
  if (local_90 == 0) {
    local_50 = (void *)0x0;
    if (__ptr != (void *)0x0) {
      free(__ptr);
    }
    uVar3 = 0;
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
  else {
                    /* try { // try from 0047a770 to 0047a78f has its CatchHandler @ 0047a85c */
    FUN_00645c3c(0,&local_90,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/onnxruntime_c_api.cc"
                 ,"UseBlockSparseIndices",0x20f);
    uVar2 = FUN_00753a74(0x88);
                    /* try { // try from 0047a79c to 0047a7a3 has its CatchHandler @ 0047a848 */
    FUN_00645c30(auStack_f8);
                    /* try { // try from 0047a7a4 to 0047a7c3 has its CatchHandler @ 0047a834 */
    FUN_0047488c(auStack_e0,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/onnxruntime_c_api.cc"
                 ,0x20f,
                 "OrtStatusPtr OrtApis::UseBlockSparseIndices(OrtValue *, const int64_t *, size_t, int32_t *)"
                 ,auStack_f8);
    FUN_00486664(auStack_110,&local_90);
    uVar3 = FUN_004792b8(uVar2,auStack_e0,auStack_110);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 0047a7f0 to 0047a807 has its CatchHandler @ 0047a808 */
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar2,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 0047a930  FUN_0047a930 =====

undefined8 FUN_0047a930(long *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  if ((*param_1 != 0) && (param_1[2] != 0)) {
                    /* try { // try from 0047a94c to 0047a953 has its CatchHandler @ 0047a988 */
    puVar1 = (undefined4 *)FUN_0047aa18();
    *param_2 = *puVar1;
    return 0;
  }
  uVar2 = FUN_00580398(2,"the ort_value must contain a constructed tensor");
  return uVar2;
}


// ===== 0047aa18  FUN_0047aa18 =====

void FUN_0047aa18(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_c8;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [80];
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((param_1[2] == 0) || (*(int *)(param_1[2] + 8) != 4)) {
    uVar3 = FUN_00753a74(0x88);
                    /* try { // try from 0047aa88 to 0047aa8f has its CatchHandler @ 0047abb0 */
    FUN_00645c30(auStack_a8);
                    /* try { // try from 0047aa90 to 0047aaaf has its CatchHandler @ 0047aba0 */
    FUN_0047488c(auStack_90,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/include/onnxruntime/core/framework/ort_value.h"
                 ,0x6e,"const onnxruntime::SparseTensor &OrtValue::Get() const",auStack_a8);
                    /* try { // try from 0047aab4 to 0047aab7 has its CatchHandler @ 0047ab80 */
    local_c8 = FUN_00576cac(param_1[2]);
    local_40 = "Trying to get a SparseTensor, but got: ";
    FUN_004839f8(auStack_c0,&local_40,&local_c8);
                    /* try { // try from 0047aadc to 0047ab23 has its CatchHandler @ 0047ab24 */
    uVar2 = FUN_00474a40(uVar3,auStack_90,"IsSparseTensor()",auStack_c0);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar3,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
  }
  else {
    uVar2 = *param_1;
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


// ===== 0047abd4  FUN_0047abd4 =====

undefined8 FUN_0047abd4(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
                    /* try { // try from 0047abe4 to 0047abe7 has its CatchHandler @ 0047ac34 */
  lVar1 = FUN_005bdb94();
  if (*(int *)(*(long *)(lVar1 + 0x48) + 0x18) == 8) {
    uVar2 = FUN_00580398(2,"Use GetStringTensor*() API to retrieve strings");
    return uVar2;
  }
  *param_2 = *(long *)(lVar1 + 0x88) + *(long *)(lVar1 + 0x100);
  return 0;
}


// ===== 0047acdc  FUN_0047acdc =====

void FUN_0047acdc(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0047ad04 to 0047ad0b has its CatchHandler @ 0047ad68 */
  puVar2 = (undefined8 *)FUN_00759c3c(0x30);
  puVar2[3] = 0;
  puVar2[2] = 0;
  puVar2[5] = 0;
  puVar2[4] = 0;
  puVar2[1] = 0;
  *puVar2 = 0;
                    /* try { // try from 0047ad20 to 0047ad27 has its CatchHandler @ 0047ad54 */
  FUN_0071396c(puVar2,param_1);
  *param_2 = puVar2;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0);
}


// ===== 0047ae08  FUN_0047ae08 =====

void FUN_0047ae08(undefined8 *param_1)

{
  void *__ptr;
  byte *__ptr_00;
  
  __ptr_00 = (byte *)*param_1;
  *param_1 = 0;
  if (__ptr_00 != (byte *)0x0) {
    __ptr = *(void **)(__ptr_00 + 0x18);
    if (__ptr != (void *)0x0) {
      *(void **)(__ptr_00 + 0x20) = __ptr;
      free(__ptr);
    }
    if ((*__ptr_00 & 1) != 0) {
      free(*(void **)(__ptr_00 + 0x10));
    }
    free(__ptr_00);
    return;
  }
  return;
}


// ===== 0047ae5c  FUN_0047ae5c =====

void FUN_0047ae5c(byte *param_1)

{
  void *__ptr;
  
  if (param_1 != (byte *)0x0) {
    __ptr = *(void **)(param_1 + 0x18);
    if (__ptr != (void *)0x0) {
      *(void **)(param_1 + 0x20) = __ptr;
      free(__ptr);
    }
    if ((*param_1 & 1) != 0) {
      free(*(void **)(param_1 + 0x10));
    }
    free(param_1);
    return;
  }
  return;
}


// ===== 0047aea4  FUN_0047aea4 =====

undefined8 FUN_0047aea4(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *__dest;
  ulong uVar4;
  ulong uVar5;
  void *__src;
  long lVar6;
  undefined8 *puVar7;
  
  puVar3 = *(undefined8 **)(param_1 + 0x20);
  if (puVar3 < *(undefined8 **)(param_1 + 0x28)) {
    puVar7 = puVar3 + 1;
    *puVar3 = param_2;
  }
  else {
    __src = *(void **)(param_1 + 0x18);
    lVar6 = (long)puVar3 - (long)__src >> 3;
    uVar1 = lVar6 + 1;
    if (uVar1 >> 0x3d != 0) {
                    /* try { // try from 0047af84 to 0047af8f has its CatchHandler @ 0047af90 */
      FUN_004868a0(param_1 + 0x18);
LAB_0047af8c:
                    /* WARNING: Subroutine does not return */
      FUN_002f9ee0();
    }
    uVar4 = (long)*(undefined8 **)(param_1 + 0x28) - (long)__src;
    uVar5 = (long)uVar4 >> 2;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar4) {
      uVar5 = 0x1fffffffffffffff;
    }
    if (uVar5 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if (uVar5 >> 0x3d != 0) goto LAB_0047af8c;
                    /* try { // try from 0047af20 to 0047af23 has its CatchHandler @ 0047af90 */
      __dest = (void *)FUN_00759c3c(uVar5 << 3);
    }
    puVar2 = (undefined8 *)((long)__dest + lVar6 * 8);
    puVar7 = puVar2 + 1;
    *puVar2 = param_2;
    memcpy(__dest,__src,(long)puVar3 - (long)__src);
    *(void **)(param_1 + 0x18) = __dest;
    *(undefined8 **)(param_1 + 0x20) = puVar7;
    *(void **)(param_1 + 0x28) = (void *)((long)__dest + uVar5 * 8);
    if (__src != (void *)0x0) {
      free(__src);
    }
  }
  *(undefined8 **)(param_1 + 0x20) = puVar7;
  return 0;
}


// ===== 0047b02c  FUN_0047b02c =====

undefined8 FUN_0047b02c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *__dest;
  ulong uVar4;
  ulong uVar5;
  void *__src;
  long lVar6;
  undefined8 *puVar7;
  
  puVar3 = *(undefined8 **)(param_1 + 0x1b0);
  if (puVar3 < *(undefined8 **)(param_1 + 0x1b8)) {
    puVar7 = puVar3 + 1;
    *puVar3 = param_2;
  }
  else {
    __src = *(void **)(param_1 + 0x1a8);
    lVar6 = (long)puVar3 - (long)__src >> 3;
    uVar1 = lVar6 + 1;
    if (uVar1 >> 0x3d != 0) {
                    /* try { // try from 0047b10c to 0047b117 has its CatchHandler @ 0047b118 */
      FUN_004868b4(param_1 + 0x1a8);
LAB_0047b114:
                    /* WARNING: Subroutine does not return */
      FUN_002f9ee0();
    }
    uVar4 = (long)*(undefined8 **)(param_1 + 0x1b8) - (long)__src;
    uVar5 = (long)uVar4 >> 2;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar4) {
      uVar5 = 0x1fffffffffffffff;
    }
    if (uVar5 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if (uVar5 >> 0x3d != 0) goto LAB_0047b114;
                    /* try { // try from 0047b0a8 to 0047b0ab has its CatchHandler @ 0047b118 */
      __dest = (void *)FUN_00759c3c(uVar5 << 3);
    }
    puVar2 = (undefined8 *)((long)__dest + lVar6 * 8);
    puVar7 = puVar2 + 1;
    *puVar2 = param_2;
    memcpy(__dest,__src,(long)puVar3 - (long)__src);
    *(void **)(param_1 + 0x1a8) = __dest;
    *(undefined8 **)(param_1 + 0x1b0) = puVar7;
    *(void **)(param_1 + 0x1b8) = (void *)((long)__dest + uVar5 * 8);
    if (__src != (void *)0x0) {
      free(__src);
    }
  }
  *(undefined8 **)(param_1 + 0x1b0) = puVar7;
  return 0;
}


// ===== 0047b1b4  FUN_0047b1b4 =====

undefined8 FUN_0047b1b4(undefined8 param_1,char *param_2,long *param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  void *__ptr;
  size_t __n;
  long *plVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined1 *__dest;
  void *local_98;
  code *local_90;
  byte local_88;
  undefined7 uStack_87;
  char cStack_80;
  undefined7 uStack_7f;
  char local_78;
  undefined2 uStack_77;
  undefined5 uStack_75;
  ulong local_70;
  undefined8 uStack_68;
  void *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  __n = strlen(param_2);
  if (0xfffffffffffffff7 < __n) {
    if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* try { // try from 0047b400 to 0047b407 has its CatchHandler @ 0047b4b0 */
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_88);
    }
    goto LAB_0047b408;
  }
  if (__n < 0x17) {
    __dest = (undefined1 *)((ulong)&local_88 | 1);
    local_88 = (byte)((int)__n << 1);
    if (__n != 0) goto LAB_0047b268;
    *__dest = 0;
LAB_0047b224:
    uStack_68 = CONCAT71(uStack_7f,cStack_80);
    local_70 = CONCAT71(uStack_87,local_88);
    local_60 = (void *)CONCAT53(uStack_75,CONCAT21(uStack_77,local_78));
  }
  else {
    uVar2 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar2 = __n | 7;
    }
    lVar1 = uVar2 + 1;
                    /* try { // try from 0047b250 to 0047b257 has its CatchHandler @ 0047b4b0 */
    __dest = (undefined1 *)FUN_00759c3c(lVar1);
    local_88 = (byte)lVar1 | 1;
    cStack_80 = (char)__n;
    uStack_7f = (undefined7)(__n >> 8);
    local_78 = (char)__dest;
    uStack_77 = (undefined2)((ulong)__dest >> 8);
    uStack_75 = (undefined5)((ulong)__dest >> 0x18);
    uStack_87 = (undefined7)((ulong)lVar1 >> 8);
LAB_0047b268:
    memcpy(__dest,param_2,__n);
    __dest[__n] = 0;
    if ((local_88 & 1) == 0) goto LAB_0047b224;
                    /* try { // try from 0047b288 to 0047b293 has its CatchHandler @ 0047b484 */
    FUN_002fb36c(&local_70,CONCAT53(uStack_75,CONCAT21(uStack_77,local_78)),
                 CONCAT71(uStack_7f,cStack_80));
    free((void *)CONCAT53(uStack_75,CONCAT21(uStack_77,local_78)));
  }
                    /* try { // try from 0047b29c to 0047b2bb has its CatchHandler @ 0047b4c4 */
  plVar4 = (long *)FUN_00641af0();
  (**(code **)(*plVar4 + 0xa0))(&local_88,plVar4,&local_70,0,param_3);
  if (CONCAT71(uStack_87,local_88) == 0) {
    if (*param_3 == 0) {
      pcVar6 = "RegisterCustomOpsLibrary: Failed to load library";
LAB_0047b37c:
      uVar5 = FUN_00580398(1,pcVar6);
    }
    else {
                    /* try { // try from 0047b300 to 0047b303 has its CatchHandler @ 0047b480 */
      plVar4 = (long *)FUN_00641af0();
      local_88 = 0x22;
      uStack_77 = 0x73;
      uStack_7f = (undefined7)s_RegisterCustomOps_001c1a46._8_8_;
      local_78 = SUB81(s_RegisterCustomOps_001c1a46._8_8_,7);
      uStack_87 = (undefined7)s_RegisterCustomOps_001c1a46._0_8_;
      cStack_80 = SUB81(s_RegisterCustomOps_001c1a46._0_8_,7);
                    /* try { // try from 0047b330 to 0047b33f has its CatchHandler @ 0047b420 */
      (**(code **)(*plVar4 + 0xb8))(&local_98,plVar4,*param_3,&local_88,&local_90);
      if ((local_88 & 1) != 0) {
        free((void *)CONCAT53(uStack_75,CONCAT21(uStack_77,local_78)));
      }
      if (local_98 != (void *)0x0) {
                    /* try { // try from 0047b358 to 0047b35f has its CatchHandler @ 0047b410 */
        uVar5 = FUN_0058044c(&local_98);
        __ptr = local_98;
        local_98 = (void *)0x0;
        goto joined_r0x0047b36c;
      }
      if (local_90 == (code *)0x0) {
        pcVar6 = "RegisterCustomOpsLibrary: Entry point RegisterCustomOps not found in library";
        goto LAB_0047b37c;
      }
                    /* try { // try from 0047b390 to 0047b39f has its CatchHandler @ 0047b40c */
      uVar5 = (*local_90)(param_1,&PTR_FUN_0078fc48);
    }
  }
  else {
                    /* try { // try from 0047b2c4 to 0047b2cb has its CatchHandler @ 0047b494 */
    uVar5 = FUN_0058044c(&local_88);
    __ptr = (void *)CONCAT71(uStack_87,local_88);
    local_88 = 0;
    uStack_87 = 0;
joined_r0x0047b36c:
    if (__ptr != (void *)0x0) {
      if ((*(byte *)((long)__ptr + 8) & 1) != 0) {
        free(*(void **)((long)__ptr + 0x18));
      }
      free(__ptr);
    }
  }
  if ((local_70 & 1) != 0) {
    free(local_60);
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return uVar5;
  }
LAB_0047b408:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0047b538  FUN_0047b538 =====

undefined ** FUN_0047b538(void)

{
  return &PTR_FUN_0078fc48;
}


// ===== 0047b544  FUN_0047b544 =====

void FUN_0047b544(void)

{
  FUN_00580398(9,"Custom operator libraries are not supported in this build");
  return;
}


// ===== 0047b554  FUN_0047b554 =====

void FUN_0047b554(void)

{
  FUN_00580398(9,"Custom operator libraries are not supported in this build");
  return;
}


// ===== 0047b564  FUN_0047b564 =====

void FUN_0047b564(long param_1)

{
  if (param_1 != 0) {
    FUN_00580398(1,"EnableOrtCustomOps: Custom operators in onnxruntime-extensions are not enabled")
    ;
    return;
  }
  return;
}


// ===== 0047b57c  FUN_0047b57c =====

void FUN_0047b57c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = (long *)0x0;
  *param_4 = 0;
                    /* try { // try from 0047b5b4 to 0047b5c7 has its CatchHandler @ 0047b640 */
  lVar2 = FUN_0047b730(param_3,param_1,param_2,0,0,&local_40);
                    /* try { // try from 0047b5cc to 0047b5db has its CatchHandler @ 0047b634 */
  if ((lVar2 == 0) && (lVar2 = FUN_0047bb64(param_3,&local_40,0), lVar2 == 0)) {
    *param_4 = local_40;
  }
  else if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 8))(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar2);
}


// ===== 0047b730  FUN_0047b730 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047b730(long param_1,undefined8 *param_2,char *param_3,undefined8 param_4,
                 undefined4 param_5,long *param_6)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  void *__ptr;
  undefined8 uVar4;
  bool bVar5;
  long *plVar6;
  size_t sVar7;
  long lVar8;
  char *pcVar9;
  undefined8 uVar10;
  void *local_230;
  undefined8 uStack_228;
  char *local_220;
  undefined8 local_210;
  size_t sStack_208;
  char *local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined1 local_1e0;
  undefined7 uStack_1df;
  char cStack_1d8;
  undefined7 uStack_1d7;
  char cStack_1d0;
  undefined4 local_1cf;
  undefined3 uStack_1cb;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 local_180;
  undefined7 uStack_17f;
  undefined1 uStack_178;
  undefined7 uStack_177;
  undefined1 uStack_170;
  undefined7 uStack_16f;
  undefined8 local_168;
  undefined8 local_160;
  undefined5 uStack_158;
  undefined3 uStack_153;
  undefined5 uStack_150;
  undefined1 local_14b;
  undefined2 uStack_14a;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined1 uStack_130;
  undefined7 uStack_12f;
  undefined1 uStack_128;
  undefined7 uStack_127;
  undefined1 local_120;
  undefined7 uStack_11f;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  plVar6 = (long *)FUN_00641af0();
  local_220 = (char *)FUN_00759c3c(0x20);
  uStack_228 = _UNK_00200668;
  local_230 = _DAT_00200660;
  uVar4 = s_ORT_LOAD_CONFIG_FROM_MODEL_001e790f._0_8_;
  uVar3 = CONCAT26(s_ORT_LOAD_CONFIG_FROM_MODEL_001e790f._16_2_,
                   s_ORT_LOAD_CONFIG_FROM_MODEL_001e790f._10_6_);
  uVar10 = CONCAT62(s_ORT_LOAD_CONFIG_FROM_MODEL_001e790f._10_6_,
                    s_ORT_LOAD_CONFIG_FROM_MODEL_001e790f._8_2_);
  *(undefined8 *)(local_220 + 0x12) = s_ORT_LOAD_CONFIG_FROM_MODEL_001e790f._18_8_;
  *(undefined8 *)(local_220 + 10) = uVar3;
  *(undefined8 *)(local_220 + 8) = uVar10;
  *(undefined8 *)local_220 = uVar4;
  local_220[0x1a] = '\0';
                    /* try { // try from 0047b7b8 to 0047b7c7 has its CatchHandler @ 0047bb34 */
  (**(code **)(*plVar6 + 0xd0))(&local_210,plVar6,&local_230);
  sVar7 = (ulong)local_210 >> 1 & 0x7f;
  if (((ulong)local_210 & 1) != 0) {
    sVar7 = sStack_208;
  }
  if (sVar7 == 1) {
    pcVar9 = local_200;
    if (((ulong)local_210 & 1) == 0) {
      pcVar9 = (char *)((long)&local_210 + 1);
    }
    bVar5 = *pcVar9 == '1';
  }
  else {
    bVar5 = false;
  }
  if (((ulong)local_210 & 1) != 0) {
    free(local_200);
  }
  if (((ulong)local_230 & 1) == 0) {
    if (!bVar5) goto LAB_0047b844;
LAB_0047b824:
    sVar7 = FUN_00580398(1,"Loading config from ONNX models is not supported in this build.");
  }
  else {
    free(local_220);
    if (bVar5) goto LAB_0047b824;
LAB_0047b844:
    if (param_1 == 0) {
      local_70 = 0;
      uStack_1f8 = 0;
      local_200 = (char *)0x0;
      uStack_1f0 = 0;
      uStack_1cb = 0;
      local_1e0 = 0x28;
      local_1cf = 0x5f656c69;
      uStack_1d7 = (undefined7)s_onnxruntime_profile__001d2566._8_8_;
      cStack_1d0 = SUB81(s_onnxruntime_profile__001d2566._8_8_,7);
      uStack_1df = (undefined7)s_onnxruntime_profile__001d2566._0_8_;
      cStack_1d8 = SUB81(s_onnxruntime_profile__001d2566._0_8_,7);
      local_1e8 = 0x10101;
      local_1b0 = 0xffffffff;
      uStack_16f = 0;
      uStack_14a = 0;
      local_14b = 1;
      local_1a0 = 0x10000000000;
      local_e8 = 0x101;
      uStack_11f = 0;
      sStack_208 = 0;
      local_210 = (void *)0x0;
      local_1c0 = 0;
      uStack_1b8 = 0;
      local_1c8 = 0;
      local_1a8 = DAT_001b7090;
      uStack_190 = 0;
      uStack_198 = 0;
      local_180 = 0;
      uStack_188 = 0;
      uStack_177 = 0;
      uStack_170 = 0;
      uStack_17f = 0;
      uStack_178 = 0;
      local_160 = 0;
      uStack_158 = 0;
      uStack_153 = 0;
      uStack_150 = 0;
      local_168 = 0;
      local_140 = 0;
      uStack_148 = 0;
      uStack_130 = 0;
      uStack_138 = 0;
      uStack_127 = 0;
      local_120 = 0;
      uStack_12f = 0;
      uStack_128 = 0;
      local_100 = 0;
      uStack_108 = 0;
      uStack_f0 = 0;
      uStack_f8 = 0;
      uStack_110 = 0;
      uStack_118 = 0;
      uStack_d8 = 0;
      local_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      local_c0 = 0x3f800000;
      local_b0 = 0;
      uStack_b8 = 0;
      uStack_a0 = 0;
      uStack_a8 = 0;
      local_98 = 0x3f800000;
      uStack_88 = 0;
      local_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
    }
    else {
      FUN_00483bc0(&local_210,param_1);
    }
    uVar10 = *param_2;
                    /* try { // try from 0047b94c to 0047b953 has its CatchHandler @ 0047bb24 */
    lVar8 = FUN_00759c3c(0x7a8);
                    /* try { // try from 0047b954 to 0047b963 has its CatchHandler @ 0047bb14 */
    FUN_0048a980(lVar8,&local_210,uVar10);
    plVar6 = (long *)*param_6;
    *param_6 = lVar8;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    FUN_00483e64(&local_210);
    if (param_3 == (char *)0x0) {
      FUN_0048c988(&local_210,*param_6,param_4,param_5);
      if (local_210 == (void *)0x0) goto LAB_0047ba98;
                    /* try { // try from 0047b9dc to 0047b9e3 has its CatchHandler @ 0047bae4 */
      sVar7 = FUN_0058044c(&local_210);
      __ptr = local_210;
      local_210 = (void *)0x0;
    }
    else {
      lVar8 = *param_6;
      sVar7 = strlen(param_3);
      if (0xfffffffffffffff7 < sVar7) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_002fb400(&local_210);
        }
        goto LAB_0047bb60;
      }
      if (sVar7 < 0x17) {
        pcVar9 = (char *)((ulong)&local_210 | 1);
        local_210 = (void *)CONCAT71(local_210._1_7_,(char)((int)sVar7 << 1));
        if (sVar7 != 0) goto LAB_0047ba24;
      }
      else {
        uVar1 = (sVar7 & 0xfffffffffffffff8) + 8;
        if ((sVar7 | 7) != 0x17) {
          uVar1 = sVar7 | 7;
        }
        pcVar9 = (char *)FUN_00759c3c(uVar1 + 1);
        local_210 = (void *)(uVar1 + 1 | 1);
        sStack_208 = sVar7;
        local_200 = pcVar9;
LAB_0047ba24:
        memcpy(pcVar9,param_3,sVar7);
      }
      pcVar9[sVar7] = '\0';
                    /* try { // try from 0047ba38 to 0047ba47 has its CatchHandler @ 0047bb00 */
      FUN_0048c704(&local_230,lVar8,&local_210);
      if (((ulong)local_210 & 1) != 0) {
        free(local_200);
      }
      if (local_230 == (void *)0x0) {
LAB_0047ba98:
        sVar7 = 0;
        goto LAB_0047ba9c;
      }
                    /* try { // try from 0047ba60 to 0047ba67 has its CatchHandler @ 0047baf0 */
      sVar7 = FUN_0058044c(&local_230);
      __ptr = local_230;
      local_230 = (void *)0x0;
    }
    if (__ptr != (void *)0x0) {
      if ((*(byte *)((long)__ptr + 8) & 1) != 0) {
        free(*(void **)((long)__ptr + 0x18));
      }
      free(__ptr);
    }
  }
LAB_0047ba9c:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_0047bb60:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(sVar7);
}


// ===== 0047bb64  FUN_0047bb64 =====

undefined8 FUN_0047bb64(long param_1,undefined8 *param_2,long param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  size_t __n;
  long *plVar10;
  undefined8 *puVar11;
  long *local_98;
  long *local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  long *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  local_80 = (long *)0x0;
  local_78 = (long *)0x0;
  local_70 = (long *)0x0;
  if (param_1 != 0) {
    puVar11 = *(undefined8 **)(param_1 + 0x1c0);
    puVar2 = *(undefined8 **)(param_1 + 0x1c8);
    if (puVar11 != puVar2) {
      do {
                    /* try { // try from 0047bbd8 to 0047bbdf has its CatchHandler @ 0047bef8 */
        (**(code **)(*(long *)*puVar11 + 0x10))(&local_98);
        plVar4 = local_80;
        plVar5 = local_98;
        if (local_78 < local_70) {
          local_98 = (long *)0x0;
          plVar10 = local_78 + 1;
          *local_78 = (long)plVar5;
        }
        else {
          __n = (long)local_78 - (long)local_80;
          lVar6 = (long)__n >> 3;
          uVar1 = lVar6 + 1;
          if (uVar1 >> 0x3d != 0) {
            if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* try { // try from 0047be68 to 0047be87 has its CatchHandler @ 0047bed8 */
              FUN_00484cd4(&local_80);
LAB_0047be70:
              if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                FUN_002f9ee0();
              }
            }
            goto LAB_0047bf20;
          }
          uVar7 = (long)local_70 - (long)local_80 >> 2;
          if (uVar7 <= uVar1) {
            uVar7 = uVar1;
          }
          if (0x7ffffffffffffff7 < (ulong)((long)local_70 - (long)local_80)) {
            uVar7 = 0x1fffffffffffffff;
          }
          if (uVar7 == 0) {
            plVar5 = (long *)0x0;
          }
          else {
            if (uVar7 >> 0x3d != 0) goto LAB_0047be70;
                    /* try { // try from 0047bc3c to 0047bc3f has its CatchHandler @ 0047bed4 */
            plVar5 = (long *)FUN_00759c3c(uVar7 << 3);
          }
          plVar8 = local_98;
          local_98 = (long *)0x0;
          plVar10 = plVar5 + lVar6 + 1;
          plVar5[lVar6] = (long)plVar8;
          memcpy(plVar5,plVar4,__n);
          local_80 = plVar5;
          local_70 = plVar5 + uVar7;
          if (plVar4 != (long *)0x0) {
            local_78 = plVar10;
            free(plVar4);
          }
        }
        plVar5 = local_98;
        local_98 = (long *)0x0;
        local_78 = plVar10;
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 8))();
        }
        plVar4 = local_78;
        puVar11 = puVar11 + 2;
        plVar5 = local_80;
      } while (puVar11 != puVar2);
      for (; plVar5 != plVar4; plVar5 = plVar5 + 1) {
        plVar8 = (long *)*plVar5;
        if (plVar8 != (long *)0x0) {
          uVar9 = *param_2;
          local_98 = plVar8;
                    /* try { // try from 0047bce8 to 0047bcef has its CatchHandler @ 0047bec0 */
          local_90 = (long *)FUN_00759c3c(0x20);
          *local_90 = (long)&PTR_FUN_0078fca8;
          local_90[1] = 0;
          local_90[2] = 0;
          local_90[3] = (long)plVar8;
          *plVar5 = 0;
                    /* try { // try from 0047bd00 to 0047bd0f has its CatchHandler @ 0047bec4 */
          FUN_0048bc20(&local_88,uVar9,&local_98);
          plVar8 = local_90;
          if ((local_90 != (long *)0x0) &&
             (lVar6 = FUN_00755c50(0xffffffffffffffff,local_90 + 1), lVar6 == 0)) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
            FUN_0071245c(plVar8);
          }
          if (local_88 != (long *)0x0) {
                    /* try { // try from 0047be38 to 0047be3f has its CatchHandler @ 0047be88 */
            uVar9 = FUN_0058044c(&local_88);
            plVar5 = local_88;
            local_88 = (long *)0x0;
            goto joined_r0x0047be4c;
          }
        }
      }
    }
  }
                    /* try { // try from 0047bd4c to 0047bd57 has its CatchHandler @ 0047beb8 */
  if ((param_3 == 0) || (FUN_0048dc84(&local_98,*param_2,param_3), local_98 == (long *)0x0)) {
                    /* try { // try from 0047bd70 to 0047bd77 has its CatchHandler @ 0047beb0 */
    FUN_0048ddd8(&local_98,*param_2);
    if (local_98 == (long *)0x0) {
      uVar9 = 0;
      goto LAB_0047bdb8;
    }
                    /* try { // try from 0047bd80 to 0047bd87 has its CatchHandler @ 0047be98 */
    uVar9 = FUN_0058044c(&local_98);
  }
  else {
                    /* try { // try from 0047bd60 to 0047bd67 has its CatchHandler @ 0047be9c */
    uVar9 = FUN_0058044c(&local_98);
  }
  plVar5 = local_98;
  local_98 = (long *)0x0;
joined_r0x0047be4c:
  if (plVar5 != (long *)0x0) {
    if ((*(byte *)(plVar5 + 1) & 1) != 0) {
      free((void *)plVar5[3]);
    }
    free(plVar5);
  }
LAB_0047bdb8:
  plVar4 = local_80;
  plVar5 = local_78;
  if (local_80 != (long *)0x0) {
    while (plVar5 != plVar4) {
      plVar5 = plVar5 + -1;
      plVar8 = (long *)*plVar5;
      *plVar5 = 0;
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 8))();
      }
    }
    local_78 = plVar4;
    free(local_80);
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return uVar9;
  }
LAB_0047bf20:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0047bf24  FUN_0047bf24 =====

void FUN_0047bf24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  long lVar1;
  long lVar2;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = (long *)0x0;
  *param_5 = 0;
                    /* try { // try from 0047bf60 to 0047bf6f has its CatchHandler @ 0047bfe8 */
  lVar2 = FUN_0047b730(param_4,param_1,0,param_2,param_3,&local_40);
                    /* try { // try from 0047bf74 to 0047bf83 has its CatchHandler @ 0047bfdc */
  if ((lVar2 == 0) && (lVar2 = FUN_0047bb64(param_4,&local_40,0), lVar2 == 0)) {
    *param_5 = local_40;
  }
  else if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 8))(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar2);
}


// ===== 0047c0d8  FUN_0047c0d8 =====

void FUN_0047c0d8(undefined8 param_1,long param_2,long param_3,long param_4,long param_5,
                 long param_6,long param_7,long param_8)

{
  undefined8 *puVar1;
  byte bVar2;
  long lVar3;
  void *pvVar4;
  undefined8 uVar5;
  void *pvVar6;
  void *local_98;
  void *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  uint local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined2 uStack_70;
  undefined2 uStack_6e;
  undefined4 uStack_6c;
  undefined2 uStack_68;
  void *local_60;
  undefined8 uStack_58;
  undefined8 *local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (((((param_5 == -1) || ((param_3 == 0 && (param_5 != 0)))) ||
       ((param_4 == 0 && (param_5 != 0)))) ||
      ((param_7 == -1 || ((param_6 == 0 && (param_7 != 0)))))) || ((param_7 != 0 && (param_8 == 0)))
     ) {
                    /* WARNING: Subroutine does not return */
    FUN_004839bc();
  }
  local_90 = (void *)0x0;
  if (param_2 == 0) {
    uStack_84 = 0;
    local_80 = 0;
    local_88 = 0xffffffff;
    local_74 = 0;
    uStack_70 = 0;
    local_7c = 0;
    uStack_58 = 0;
    local_60 = (void *)0x0;
    uStack_48 = 0;
    local_50 = (undefined8 *)0x0;
    uStack_6e = 0;
    uStack_6c = 0;
    uStack_68 = 0;
    local_40 = 0x3f800000;
                    /* try { // try from 0047c1c0 to 0047c1d7 has its CatchHandler @ 0047c2e8 */
    FUN_00493764(&local_98,param_1,&local_88,param_5);
    pvVar6 = local_90;
    local_90 = local_98;
    local_98 = (void *)0x0;
    pvVar4 = local_60;
    puVar1 = local_50;
    if (pvVar6 != (void *)0x0) {
      if ((*(byte *)((long)pvVar6 + 8) & 1) != 0) {
        free(*(void **)((long)pvVar6 + 0x18));
      }
      free(pvVar6);
      pvVar6 = local_98;
      local_98 = (void *)0x0;
      pvVar4 = local_60;
      puVar1 = local_50;
      if (pvVar6 != (void *)0x0) {
        if ((*(byte *)((long)pvVar6 + 8) & 1) != 0) {
          free(*(void **)((long)pvVar6 + 0x18));
        }
        free(pvVar6);
        pvVar4 = local_60;
        puVar1 = local_50;
      }
    }
    while (puVar1 != (undefined8 *)0x0) {
      pvVar6 = (void *)*puVar1;
      local_60 = pvVar4;
      if ((*(byte *)(puVar1 + 5) & 1) == 0) {
        bVar2 = *(byte *)(puVar1 + 2);
      }
      else {
        free((void *)puVar1[7]);
        bVar2 = *(byte *)(puVar1 + 2);
      }
      if ((bVar2 & 1) != 0) {
        free((void *)puVar1[4]);
      }
      free(puVar1);
      pvVar4 = local_60;
      puVar1 = (undefined8 *)pvVar6;
    }
    local_60 = (void *)0x0;
    if (pvVar4 != (void *)0x0) {
      free(pvVar4);
    }
    pvVar4 = local_90;
    if ((local_80 & 1) == 0) goto LAB_0047c248;
    pvVar6 = (void *)CONCAT44(uStack_6c,CONCAT22(uStack_6e,uStack_70));
  }
  else {
                    /* try { // try from 0047c13c to 0047c14f has its CatchHandler @ 0047c2fc */
    FUN_00493764(&local_88,param_1,param_2,param_5);
    pvVar6 = local_90;
    pvVar4 = (void *)CONCAT44(uStack_84,local_88);
    local_88 = 0;
    uStack_84 = 0;
    if (local_90 == (void *)0x0) goto LAB_0047c248;
    if ((*(byte *)((long)local_90 + 8) & 1) != 0) {
      puVar1 = (undefined8 *)((long)local_90 + 0x18);
      local_90 = pvVar4;
      free((void *)*puVar1);
      pvVar4 = local_90;
    }
    local_90 = pvVar4;
    free(pvVar6);
    pvVar6 = (void *)CONCAT44(uStack_84,local_88);
    local_88 = 0;
    uStack_84 = 0;
    pvVar4 = local_90;
    if (pvVar6 == (void *)0x0) goto LAB_0047c248;
    if ((*(byte *)((long)pvVar6 + 8) & 1) != 0) {
      free(*(void **)((long)pvVar6 + 0x18));
    }
  }
  free(pvVar6);
  pvVar4 = local_90;
LAB_0047c248:
                    /* try { // try from 0047c248 to 0047c24f has its CatchHandler @ 0047c300 */
  local_90 = pvVar4;
  uVar5 = FUN_0058044c(&local_90);
  pvVar4 = local_90;
  local_90 = (void *)0x0;
  if (pvVar4 != (void *)0x0) {
    if ((*(byte *)((long)pvVar4 + 8) & 1) != 0) {
      free(*(void **)((long)pvVar4 + 0x18));
    }
    free(pvVar4);
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}


// ===== 0047c3a8  FUN_0047c3a8 =====

void FUN_0047c3a8(long param_1)

{
  byte bVar1;
  undefined8 *__ptr;
  void *pvVar2;
  
  __ptr = (undefined8 *)*(void **)(param_1 + 0x38);
  while (__ptr != (undefined8 *)0x0) {
    pvVar2 = (void *)*__ptr;
    if ((*(byte *)(__ptr + 5) & 1) == 0) {
      bVar1 = *(byte *)(__ptr + 2);
    }
    else {
      free((void *)__ptr[7]);
      bVar1 = *(byte *)(__ptr + 2);
    }
    if ((bVar1 & 1) != 0) {
      free((void *)__ptr[4]);
    }
    free(__ptr);
    __ptr = (undefined8 *)pvVar2;
  }
  pvVar2 = *(void **)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (pvVar2 != (void *)0x0) {
    free(pvVar2);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    free(*(void **)(param_1 + 0x18));
    return;
  }
  return;
}


// ===== 0047c444  FUN_0047c444 =====

void FUN_0047c444(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                 long param_6,long param_7,long param_8)

{
  long lVar1;
  void *__ptr;
  undefined8 uVar2;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((((param_5 == -1) || ((param_3 == 0 && (param_5 != 0)))) ||
       ((param_4 == 0 && (param_5 != 0)))) ||
      ((param_7 == -1 || ((param_6 == 0 && (param_7 != 0)))))) || ((param_7 != 0 && (param_8 == 0)))
     ) {
                    /* WARNING: Subroutine does not return */
    FUN_004839bc();
  }
                    /* try { // try from 0047c4a0 to 0047c4bb has its CatchHandler @ 0047c52c */
  FUN_004941a4(&local_40,param_1,param_2,param_5);
                    /* try { // try from 0047c4bc to 0047c4c3 has its CatchHandler @ 0047c518 */
  uVar2 = FUN_0058044c(&local_40);
  __ptr = local_40;
  local_40 = (void *)0x0;
  if (__ptr != (void *)0x0) {
    if ((*(byte *)((long)__ptr + 8) & 1) != 0) {
      free(*(void **)((long)__ptr + 0x18));
    }
    free(__ptr);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


// ===== 0047c5cc  FUN_0047c5cc =====

void FUN_0047c5cc(long *param_1,long param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  long lVar3;
  void *pvVar4;
  undefined8 uVar5;
  void *pvVar6;
  void *local_98;
  void *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  uint local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined2 uStack_70;
  undefined2 uStack_6e;
  undefined4 uStack_6c;
  undefined2 uStack_68;
  void *local_60;
  undefined8 uStack_58;
  undefined8 *local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  local_90 = (void *)0x0;
  if (param_2 == 0) {
    local_74 = 0;
    uStack_70 = 0;
    local_7c = 0;
    uStack_6e = 0;
    uStack_6c = 0;
    uStack_68 = 0;
    uStack_58 = 0;
    local_60 = (void *)0x0;
    uStack_48 = 0;
    local_50 = (undefined8 *)0x0;
    local_40 = 0x3f800000;
    local_88 = 0xffffffff;
    uStack_84 = 0;
    local_80 = 0;
                    /* try { // try from 0047c684 to 0047c68f has its CatchHandler @ 0047c7bc */
    (**(code **)(*param_1 + 0x10))(&local_98,param_1,&local_88,*param_3);
    pvVar6 = local_90;
    local_90 = local_98;
    local_98 = (void *)0x0;
    pvVar4 = local_60;
    puVar1 = local_50;
    if (pvVar6 != (void *)0x0) {
      if ((*(byte *)((long)pvVar6 + 8) & 1) != 0) {
        free(*(void **)((long)pvVar6 + 0x18));
      }
      free(pvVar6);
      pvVar6 = local_98;
      local_98 = (void *)0x0;
      pvVar4 = local_60;
      puVar1 = local_50;
      if (pvVar6 != (void *)0x0) {
        if ((*(byte *)((long)pvVar6 + 8) & 1) != 0) {
          free(*(void **)((long)pvVar6 + 0x18));
        }
        free(pvVar6);
        pvVar4 = local_60;
        puVar1 = local_50;
      }
    }
    while (puVar1 != (undefined8 *)0x0) {
      pvVar6 = (void *)*puVar1;
      local_60 = pvVar4;
      if ((*(byte *)(puVar1 + 5) & 1) == 0) {
        bVar2 = *(byte *)(puVar1 + 2);
      }
      else {
        free((void *)puVar1[7]);
        bVar2 = *(byte *)(puVar1 + 2);
      }
      if ((bVar2 & 1) != 0) {
        free((void *)puVar1[4]);
      }
      free(puVar1);
      pvVar4 = local_60;
      puVar1 = (undefined8 *)pvVar6;
    }
    local_60 = (void *)0x0;
    if (pvVar4 != (void *)0x0) {
      free(pvVar4);
    }
    pvVar4 = local_90;
    if ((local_80 & 1) != 0) {
      pvVar6 = (void *)CONCAT44(uStack_6c,CONCAT22(uStack_6e,uStack_70));
LAB_0047c6fc:
      free(pvVar6);
      pvVar4 = local_90;
    }
  }
  else {
                    /* try { // try from 0047c600 to 0047c607 has its CatchHandler @ 0047c7d4 */
    (**(code **)(*param_1 + 0x10))(&local_88,param_1,param_2,*param_3);
    pvVar6 = local_90;
    pvVar4 = (void *)CONCAT44(uStack_84,local_88);
    local_88 = 0;
    uStack_84 = 0;
    if (local_90 != (void *)0x0) {
      if ((*(byte *)((long)local_90 + 8) & 1) != 0) {
        puVar1 = (undefined8 *)((long)local_90 + 0x18);
        local_90 = pvVar4;
        free((void *)*puVar1);
        pvVar4 = local_90;
      }
      local_90 = pvVar4;
      free(pvVar6);
      pvVar6 = (void *)CONCAT44(uStack_84,local_88);
      local_88 = 0;
      uStack_84 = 0;
      pvVar4 = local_90;
      if (pvVar6 != (void *)0x0) {
        if ((*(byte *)((long)pvVar6 + 8) & 1) != 0) {
          free(*(void **)((long)pvVar6 + 0x18));
        }
        goto LAB_0047c6fc;
      }
    }
  }
  local_90 = pvVar4;
  if (local_90 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
                    /* try { // try from 0047c708 to 0047c70f has its CatchHandler @ 0047c7d0 */
    uVar5 = FUN_0058044c(&local_90);
    pvVar4 = local_90;
    local_90 = (void *)0x0;
    if (pvVar4 != (void *)0x0) {
      if ((*(byte *)((long)pvVar4 + 8) & 1) != 0) {
        free(*(void **)((long)pvVar4 + 0x18));
      }
      free(pvVar4);
      if (*(long *)(lVar3 + 0x28) == local_38) {
        return;
      }
      goto LAB_0047c874;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
LAB_0047c874:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


// ===== 0047c87c  FUN_0047c87c =====

undefined8 FUN_0047c87c(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  void *local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = (void *)0x0;
                    /* try { // try from 0047c8a4 to 0047c8af has its CatchHandler @ 0047c964 */
  FUN_00494cb8(&local_48,param_1,&local_40);
  if (local_48 == (void *)0x0) {
                    /* try { // try from 0047c908 to 0047c90f has its CatchHandler @ 0047c94c */
    puVar4 = (undefined8 *)FUN_00759c3c(8);
    uVar3 = 0;
    *param_2 = puVar4;
    *puVar4 = local_40;
  }
  else {
                    /* try { // try from 0047c8b8 to 0047c8bf has its CatchHandler @ 0047c950 */
    uVar3 = FUN_0058044c(&local_48);
    pvVar2 = local_48;
    local_48 = (void *)0x0;
    if (pvVar2 != (void *)0x0) {
      if ((*(byte *)((long)pvVar2 + 8) & 1) != 0) {
        free(*(void **)((long)pvVar2 + 0x18));
      }
      free(pvVar2);
    }
    pvVar2 = local_40;
    local_40 = (void *)0x0;
    if (pvVar2 != (void *)0x0) {
      FUN_004868c8(pvVar2);
      free(pvVar2);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0047c9f8  FUN_0047c9f8 =====

void FUN_0047c9f8(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)*param_1;
  *param_1 = 0;
  if (__ptr != (void *)0x0) {
    FUN_004868c8(__ptr);
    free(__ptr);
    return;
  }
  return;
}


// ===== 0047ca34  FUN_0047ca34 =====

void FUN_0047ca34(undefined8 *param_1)

{
  void *__ptr;
  
  if (param_1 != (undefined8 *)0x0) {
    __ptr = (void *)*param_1;
    *param_1 = 0;
    if (__ptr != (void *)0x0) {
      FUN_004868c8(__ptr);
      free(__ptr);
    }
    free(param_1);
    return;
  }
  return;
}


// ===== 0047ca78  FUN_0047ca78 =====

void FUN_0047ca78(undefined8 *param_1,char *param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  size_t __n;
  undefined8 uVar3;
  void *pvVar4;
  ulong local_78;
  size_t local_70;
  void *local_68;
  void *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar3 = *param_1;
  __n = strlen(param_2);
  if (0xfffffffffffffff7 < __n) {
    if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 0047cbd8 to 0047cbdf has its CatchHandler @ 0047cc10 */
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_78);
    }
    goto LAB_0047cca8;
  }
  if (__n < 0x17) {
    pvVar4 = (void *)((ulong)&local_78 | 1);
    local_78 = CONCAT71(local_78._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_0047cb10;
  }
  else {
    uVar1 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar1 = __n | 7;
    }
                    /* try { // try from 0047caf8 to 0047caff has its CatchHandler @ 0047cc10 */
    pvVar4 = (void *)FUN_00759c3c(uVar1 + 1);
    local_78 = uVar1 + 1 | 1;
    local_70 = __n;
    local_68 = pvVar4;
LAB_0047cb10:
    memcpy(pvVar4,param_2,__n);
  }
  *(undefined1 *)((long)pvVar4 + __n) = 0;
                    /* try { // try from 0047cb24 to 0047cb37 has its CatchHandler @ 0047cbf4 */
  FUN_00474330(&local_60,uVar3,&local_78,param_3);
  if ((local_78 & 1) != 0) {
    free(local_68);
  }
  if (local_60 == (void *)0x0) {
    __n = 0;
  }
  else {
                    /* try { // try from 0047cb50 to 0047cb57 has its CatchHandler @ 0047cbe0 */
    __n = FUN_0058044c(&local_60);
    pvVar4 = local_60;
    local_60 = (void *)0x0;
    if (pvVar4 != (void *)0x0) {
      if ((*(byte *)((long)pvVar4 + 8) & 1) != 0) {
        free(*(void **)((long)pvVar4 + 0x18));
      }
      free(pvVar4);
      if (*(long *)(lVar2 + 0x28) == local_58) {
        return;
      }
      goto LAB_0047cca8;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
LAB_0047cca8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(__n);
}


// ===== 0047ccb0  FUN_0047ccb0 =====

void FUN_0047ccb0(undefined8 *param_1,char *param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  size_t __n;
  undefined8 uVar3;
  void *pvVar4;
  ulong local_78;
  size_t local_70;
  void *local_68;
  void *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar3 = *param_1;
  __n = strlen(param_2);
  if (0xfffffffffffffff7 < __n) {
    if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 0047ce10 to 0047ce17 has its CatchHandler @ 0047ce48 */
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_78);
    }
    goto LAB_0047cee0;
  }
  if (__n < 0x17) {
    pvVar4 = (void *)((ulong)&local_78 | 1);
    local_78 = CONCAT71(local_78._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_0047cd48;
  }
  else {
    uVar1 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar1 = __n | 7;
    }
                    /* try { // try from 0047cd30 to 0047cd37 has its CatchHandler @ 0047ce48 */
    pvVar4 = (void *)FUN_00759c3c(uVar1 + 1);
    local_78 = uVar1 + 1 | 1;
    local_70 = __n;
    local_68 = pvVar4;
LAB_0047cd48:
    memcpy(pvVar4,param_2,__n);
  }
  *(undefined1 *)((long)pvVar4 + __n) = 0;
                    /* try { // try from 0047cd5c to 0047cd6f has its CatchHandler @ 0047ce2c */
  FUN_0047576c(&local_60,uVar3,&local_78,param_3);
  if ((local_78 & 1) != 0) {
    free(local_68);
  }
  if (local_60 == (void *)0x0) {
    __n = 0;
  }
  else {
                    /* try { // try from 0047cd88 to 0047cd8f has its CatchHandler @ 0047ce18 */
    __n = FUN_0058044c(&local_60);
    pvVar4 = local_60;
    local_60 = (void *)0x0;
    if (pvVar4 != (void *)0x0) {
      if ((*(byte *)((long)pvVar4 + 8) & 1) != 0) {
        free(*(void **)((long)pvVar4 + 0x18));
      }
      free(pvVar4);
      if (*(long *)(lVar2 + 0x28) == local_58) {
        return;
      }
      goto LAB_0047cee0;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
LAB_0047cee0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(__n);
}


// ===== 0047cee8  FUN_0047cee8 =====

void FUN_0047cee8(undefined8 *param_1,char *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  size_t __n;
  undefined8 uVar3;
  void *pvVar4;
  ulong local_78;
  size_t local_70;
  void *local_68;
  void *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar3 = *param_1;
  __n = strlen(param_2);
  if (0xfffffffffffffff7 < __n) {
    if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 0047d048 to 0047d04f has its CatchHandler @ 0047d080 */
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_78);
    }
    goto LAB_0047d118;
  }
  if (__n < 0x17) {
    pvVar4 = (void *)((ulong)&local_78 | 1);
    local_78 = CONCAT71(local_78._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_0047cf80;
  }
  else {
    uVar1 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar1 = __n | 7;
    }
                    /* try { // try from 0047cf68 to 0047cf6f has its CatchHandler @ 0047d080 */
    pvVar4 = (void *)FUN_00759c3c(uVar1 + 1);
    local_78 = uVar1 + 1 | 1;
    local_70 = __n;
    local_68 = pvVar4;
LAB_0047cf80:
    memcpy(pvVar4,param_2,__n);
  }
  *(undefined1 *)((long)pvVar4 + __n) = 0;
                    /* try { // try from 0047cf98 to 0047cfa7 has its CatchHandler @ 0047d064 */
  FUN_00475ba0(&local_60,uVar3,&local_78,*(undefined4 *)(param_3 + 0x14));
  if ((local_78 & 1) != 0) {
    free(local_68);
  }
  if (local_60 == (void *)0x0) {
    __n = 0;
  }
  else {
                    /* try { // try from 0047cfc0 to 0047cfc7 has its CatchHandler @ 0047d050 */
    __n = FUN_0058044c(&local_60);
    pvVar4 = local_60;
    local_60 = (void *)0x0;
    if (pvVar4 != (void *)0x0) {
      if ((*(byte *)((long)pvVar4 + 8) & 1) != 0) {
        free(*(void **)((long)pvVar4 + 0x18));
      }
      free(pvVar4);
      if (*(long *)(lVar2 + 0x28) == local_58) {
        return;
      }
      goto LAB_0047d118;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
LAB_0047d118:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(__n);
}


// ===== 0047d120  FUN_0047d120 =====

undefined8
FUN_0047d120(undefined8 *param_1,long param_2,undefined8 *param_3,undefined8 *param_4,long *param_5)

{
  ulong *puVar1;
  ulong uVar2;
  size_t __n;
  byte *pbVar3;
  byte *__src;
  byte bVar4;
  long lVar5;
  ulong *puVar6;
  long *plVar7;
  ulong *puVar8;
  undefined ***pppuVar9;
  long lVar10;
  byte *pbVar11;
  undefined8 uVar12;
  undefined ***pppuVar13;
  ulong *local_f8;
  ulong *local_f0 [2];
  undefined **local_e0;
  long lStack_d8;
  undefined ***local_c0;
  ulong *local_b0;
  undefined **local_a0;
  long lStack_98;
  undefined ***local_80;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
                    /* try { // try from 0047d160 to 0047d163 has its CatchHandler @ 0047d410 */
  plVar7 = (long *)FUN_00475d60(*param_1);
  if (*plVar7 == plVar7[1]) {
    uVar12 = 0;
    *param_3 = 0;
    *param_4 = 0;
    *param_5 = 0;
  }
  else {
                    /* try { // try from 0047d18c to 0047d193 has its CatchHandler @ 0047d408 */
    local_b0 = (ulong *)(**(code **)(param_2 + 8))
                                  (param_2,(plVar7[1] - *plVar7 >> 3) * 0x5555555555555558);
    pppuVar9 = &local_a0;
    local_a0 = &PTR_FUN_0078fd50;
    lStack_98 = param_2;
    local_80 = pppuVar9;
    if (local_b0 != (ulong *)0x0) {
      pbVar11 = (byte *)*plVar7;
      pbVar3 = (byte *)plVar7[1];
      if (pbVar11 == pbVar3) {
        lVar10 = 0;
      }
      else {
        lVar10 = 0;
        puVar8 = local_b0;
        do {
          bVar4 = *pbVar11;
          puVar1 = (ulong *)(pbVar11 + 8);
          pbVar11 = pbVar11 + 0x18;
          uVar2 = (ulong)(bVar4 >> 1);
          if ((bVar4 & 1) != 0) {
            uVar2 = *puVar1;
          }
          lVar10 = uVar2 + lVar10;
          *puVar8 = uVar2;
          puVar8 = puVar8 + 1;
        } while (pbVar11 != pbVar3);
      }
                    /* try { // try from 0047d224 to 0047d22b has its CatchHandler @ 0047d3f4 */
      puVar8 = (ulong *)(**(code **)(param_2 + 8))(param_2,lVar10);
      local_e0 = &PTR_FUN_0078fd98;
      lStack_d8 = param_2;
      local_c0 = &local_e0;
      local_f0[0] = puVar8;
      if (puVar8 != (ulong *)0x0) {
        pbVar3 = (byte *)plVar7[1];
        puVar1 = puVar8;
        puVar6 = local_b0;
        for (pbVar11 = (byte *)*plVar7; pbVar11 != pbVar3; pbVar11 = pbVar11 + 0x18) {
          __n = *(size_t *)(pbVar11 + 8);
          __src = *(byte **)(pbVar11 + 0x10);
          if ((*pbVar11 & 1) == 0) {
            __src = pbVar11 + 1;
            __n = (ulong)(*pbVar11 >> 1);
          }
          local_b0 = puVar6;
          memcpy(puVar1,__src,__n);
          puVar1 = (ulong *)((long)puVar1 + __n);
          puVar6 = local_b0;
        }
        *param_3 = puVar8;
        uVar12 = 0;
        local_b0 = (ulong *)0x0;
        *param_4 = puVar6;
        local_f0[0] = (ulong *)0x0;
        *param_5 = (plVar7[1] - *plVar7 >> 3) * -0x5555555555555555;
LAB_0047d2d0:
        lVar10 = 0x20;
        pppuVar13 = &local_e0;
LAB_0047d2d4:
        (**(code **)((long)*pppuVar13 + lVar10))(pppuVar13);
        goto LAB_0047d2e4;
      }
      uVar12 = FUN_00580398(1,"string buffer allocation failed");
      puVar8 = local_f0[0];
      local_f0[0] = (ulong *)0x0;
      if (puVar8 == (ulong *)0x0) {
LAB_0047d3ac:
        if (local_c0 == &local_e0) goto LAB_0047d2d0;
        if (local_c0 == (undefined ***)0x0) goto LAB_0047d2e4;
        lVar10 = 0x28;
        pppuVar13 = local_c0;
        goto LAB_0047d2d4;
      }
      local_f8 = puVar8;
      if (local_c0 != (undefined ***)0x0) {
                    /* try { // try from 0047d3a0 to 0047d3a7 has its CatchHandler @ 0047d3f0 */
        (*(code *)(*local_c0)[6])(local_c0,&local_f8);
        goto LAB_0047d3ac;
      }
LAB_0047d3d8:
      if (*(long *)(lVar5 + 0x28) == local_68) {
                    /* try { // try from 0047d3e8 to 0047d3eb has its CatchHandler @ 0047d3f0 */
        FUN_0030be88();
      }
      goto LAB_0047d3ec;
    }
    uVar12 = FUN_00580398(1,"lengths allocation failed");
LAB_0047d2e4:
    puVar8 = local_b0;
    local_b0 = (ulong *)0x0;
    if (puVar8 != (ulong *)0x0) {
      local_f0[0] = puVar8;
      if (local_80 == (undefined ***)0x0) {
        if (*(long *)(lVar5 + 0x28) != local_68) goto LAB_0047d3ec;
                    /* try { // try from 0047d3d4 to 0047d3d7 has its CatchHandler @ 0047d40c */
        FUN_0030be88();
        goto LAB_0047d3d8;
      }
                    /* try { // try from 0047d304 to 0047d30b has its CatchHandler @ 0047d40c */
      (*(code *)(*local_80)[6])(local_80,local_f0);
    }
    if (local_80 == pppuVar9) {
      lVar10 = 0x20;
    }
    else {
      if (local_80 == (undefined ***)0x0) goto LAB_0047d338;
      lVar10 = 0x28;
      pppuVar9 = local_80;
    }
    (**(code **)((long)*pppuVar9 + lVar10))();
  }
LAB_0047d338:
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return uVar12;
  }
LAB_0047d3ec:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0047d49c  FUN_0047d49c =====

void FUN_0047d49c(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar3 = *param_1;
  *param_1 = 0;
  if (lVar3 != 0) {
    plVar2 = (long *)param_1[6];
    local_30 = lVar3;
    if (plVar2 == (long *)0x0) {
      if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 0047d544 to 0047d547 has its CatchHandler @ 0047d54c */
        FUN_0030be88();
      }
      goto LAB_0047d548;
    }
                    /* try { // try from 0047d4dc to 0047d4e3 has its CatchHandler @ 0047d54c */
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_30);
  }
  plVar2 = (long *)param_1[6];
  param_1 = param_1 + 2;
  if (plVar2 == param_1) {
    lVar3 = 0x20;
LAB_0047d508:
    (**(code **)(*param_1 + lVar3))();
  }
  else if (plVar2 != (long *)0x0) {
    lVar3 = 0x28;
    param_1 = plVar2;
    goto LAB_0047d508;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
LAB_0047d548:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0047d550  FUN_0047d550 =====

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_0047d550(undefined8 *param_1,long param_2,undefined8 *param_3,long *param_4)

{
  undefined8 *******pppppppuVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 ******ppppppuVar5;
  long lVar6;
  undefined ***pppuVar7;
  undefined8 *****pppppuVar8;
  ulong uVar9;
  undefined8 *******pppppppuVar10;
  undefined8 *******pppppppuVar11;
  undefined8 *******pppppppuVar12;
  undefined8 *******pppppppuVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined8 ******ppppppuVar19;
  undefined8 ******ppppppuVar20;
  undefined8 ******ppppppuVar21;
  undefined1 auVar22 [12];
  long local_f8;
  undefined8 ******local_f0;
  undefined8 *******local_e8;
  undefined8 *******local_e0;
  ulong local_d8;
  undefined8 *******local_b0 [2];
  undefined **local_a0;
  long lStack_98;
  undefined ***local_80;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 0047d58c to 0047d58f has its CatchHandler @ 0047d900 */
  plVar4 = (long *)FUN_00475d68(*param_1);
  if (*plVar4 == plVar4[1]) {
    *param_3 = 0;
    *param_4 = 0;
    if (*(long *)(lVar3 + 0x28) == local_68) {
      return 0;
    }
    goto LAB_0047d9b8;
  }
                    /* try { // try from 0047d5b8 to 0047d5bf has its CatchHandler @ 0047d8f8 */
  local_b0[0] = (undefined8 *******)
                (**(code **)(param_2 + 8))(param_2,(plVar4[1] - *plVar4 >> 3) * 0x5555555555555558);
  pppuVar7 = &local_a0;
  local_a0 = &PTR_FUN_0078fde0;
  lStack_98 = param_2;
  local_80 = pppuVar7;
  if (local_b0[0] == (undefined8 *******)0x0) {
    uVar17 = FUN_00580398(1,"Output buffer allocation failed");
    pppppppuVar12 = local_b0[0];
    local_b0[0] = (undefined8 *******)0x0;
    pppppppuVar1 = local_e8;
    local_e8 = pppppppuVar12;
  }
  else {
    local_e8 = (undefined8 *******)0x0;
                    /* try { // try from 0047d600 to 0047d607 has its CatchHandler @ 0047d8f4 */
    FUN_00486d0c(&local_e8,(plVar4[1] - *plVar4 >> 3) * -0x5555555555555555);
    puVar18 = (undefined8 *)*plVar4;
    puVar2 = (undefined8 *)plVar4[1];
    if (puVar18 != puVar2) {
      do {
                    /* try { // try from 0047d638 to 0047d63f has its CatchHandler @ 0047d910 */
        ppppppuVar5 = (undefined8 ******)FUN_00759c3c(0x18);
        *ppppppuVar5 = (undefined8 *****)*puVar18;
        pppppuVar8 = (undefined8 *****)puVar18[1];
        ppppppuVar5[1] = pppppuVar8;
        if (pppppuVar8 != (undefined8 *****)0x0) {
          FUN_00755c20(1,pppppuVar8 + 1);
        }
        uVar9 = (ulong)local_e8 >> 1;
        ppppppuVar5[2] = (undefined8 *****)puVar18[2];
        uVar14 = 6;
        if (((ulong)local_e8 & 1) != 0) {
          uVar14 = local_d8;
        }
        if (uVar9 == uVar14) {
                    /* try { // try from 0047d6e8 to 0047d6f3 has its CatchHandler @ 0047d8dc */
          local_f0 = ppppppuVar5;
          FUN_00486e9c(&local_e8,&local_f0);
        }
        else {
          uVar14 = (ulong)local_e8 & 1;
          local_e8 = (undefined8 *******)((long)local_e8 + 2);
          local_f0 = (undefined8 ******)0x0;
          pppppppuVar1 = &local_e0;
          if (uVar14 != 0) {
            pppppppuVar1 = local_e0;
          }
          pppppppuVar1[uVar9] = ppppppuVar5;
        }
        ppppppuVar5 = local_f0;
        local_f0 = (undefined8 ******)0x0;
        if (ppppppuVar5 != (undefined8 ******)0x0) {
          pppppuVar8 = ppppppuVar5[1];
          if ((pppppuVar8 != (undefined8 *****)0x0) &&
             (lVar6 = FUN_00755c50(0xffffffffffffffff,pppppuVar8 + 1), lVar6 == 0)) {
            (*(code *)(*pppppuVar8)[2])(pppppuVar8);
            FUN_0071245c(pppppuVar8);
          }
          free(ppppppuVar5);
        }
        puVar18 = puVar18 + 3;
      } while (puVar18 != puVar2);
    }
    pppppppuVar1 = &local_e0;
    if (((ulong)local_e8 & 1) != 0) {
      pppppppuVar1 = local_e0;
    }
    pppppppuVar12 = local_b0[0];
    if ((undefined8 *******)0x1 < local_e8) {
      uVar9 = (ulong)local_e8 >> 1;
      uVar14 = uVar9 - 1 & 0x1fffffffffffffff;
      pppppppuVar11 = local_b0[0];
      pppppppuVar10 = pppppppuVar1;
      if ((10 < uVar14) &&
         ((local_b0[0] + uVar9 <= pppppppuVar1 || (pppppppuVar1 + uVar9 <= local_b0[0])))) {
        uVar14 = uVar14 + 1;
        pppppppuVar12 = pppppppuVar1 + 2;
        uVar15 = uVar14 & 0x3ffffffffffffffc;
        pppppppuVar11 = local_b0[0] + uVar15;
        pppppppuVar10 = local_b0[0] + 2;
        uVar16 = uVar15;
        do {
          ppppppuVar19 = pppppppuVar12[-1];
          ppppppuVar5 = pppppppuVar12[-2];
          ppppppuVar21 = pppppppuVar12[1];
          ppppppuVar20 = *pppppppuVar12;
          uVar16 = uVar16 - 4;
          pppppppuVar12[-1] = (undefined8 ******)0x0;
          pppppppuVar12[-2] = (undefined8 ******)0x0;
          pppppppuVar12[1] = (undefined8 ******)0x0;
          *pppppppuVar12 = (undefined8 ******)0x0;
          pppppppuVar12 = pppppppuVar12 + 4;
          pppppppuVar10[-1] = ppppppuVar19;
          pppppppuVar10[-2] = ppppppuVar5;
          pppppppuVar10[1] = ppppppuVar21;
          *pppppppuVar10 = ppppppuVar20;
          pppppppuVar10 = pppppppuVar10 + 4;
        } while (uVar16 != 0);
        pppppppuVar12 = local_b0[0];
        pppppppuVar10 = pppppppuVar1 + uVar15;
        if (uVar14 == uVar15) goto LAB_0047d80c;
      }
      do {
        ppppppuVar5 = *pppppppuVar10;
        pppppppuVar13 = pppppppuVar10 + 1;
        *pppppppuVar10 = (undefined8 ******)0x0;
        *pppppppuVar11 = ppppppuVar5;
        pppppppuVar11 = pppppppuVar11 + 1;
        pppppppuVar12 = local_b0[0];
        pppppppuVar10 = pppppppuVar13;
      } while (pppppppuVar13 != pppppppuVar1 + uVar9);
    }
LAB_0047d80c:
    local_b0[0] = (undefined8 *******)0x0;
    *param_3 = pppppppuVar12;
    *param_4 = (plVar4[1] - *plVar4 >> 3) * -0x5555555555555555;
    if (local_e8 != (undefined8 *******)0x0) {
                    /* try { // try from 0047d834 to 0047d83b has its CatchHandler @ 0047d8f0 */
      FUN_00486c40(&local_e8);
    }
    pppppppuVar12 = local_b0[0];
    uVar17 = 0;
    local_b0[0] = (undefined8 *******)0x0;
    pppppppuVar1 = local_e8;
    local_e8 = pppppppuVar12;
    local_f8 = lVar3;
  }
  local_b0[0] = (undefined8 *******)0x0;
  if (local_e8 != (undefined8 *******)0x0) {
    local_b0[0] = (undefined8 *******)0x0;
    if (local_80 == (undefined ***)0x0) {
      if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* try { // try from 0047d8d8 to 0047d8db has its CatchHandler @ 0047d8fc */
        auVar22 = FUN_0030be88();
                    /* catch(type#3 @ 0078f370, type#2 @ 0079dd20) { ... } // from try @ 0047d6e8
                       with catch @ 0047d8dc */
        FUN_00478720(&local_f0);
        FUN_0047d9c0(&local_e8);
        FUN_0047d9e0(local_b0);
        if (auVar22._8_4_ == 3) {
          plVar4 = (long *)FUN_00753ac4(auVar22._0_8_);
          uVar17 = (**(code **)(*plVar4 + 0x10))();
          uVar17 = FUN_00580398(9,uVar17);
                    /* try { // try from 0047d954 to 0047d957 has its CatchHandler @ 0047d9bc */
          FUN_00753cdc();
        }
        else {
          plVar4 = (long *)FUN_00753ac4(auVar22._0_8_);
          if (auVar22._8_4_ == 2) {
            uVar17 = (**(code **)(*plVar4 + 0x10))();
            uVar17 = FUN_00580398(6,uVar17);
                    /* try { // try from 0047d984 to 0047d9a3 has its CatchHandler @ 0047d9bc */
            FUN_00753cdc();
          }
          else {
            uVar17 = FUN_00580398(1,"Unknown Exception");
            FUN_00753cdc();
          }
        }
        if (*(long *)(local_f8 + 0x28) == local_68) {
          return uVar17;
        }
      }
      goto LAB_0047d9b8;
    }
                    /* try { // try from 0047d860 to 0047d867 has its CatchHandler @ 0047d8fc */
    (*(code *)(*local_80)[6])(local_80,&local_e8);
    pppppppuVar1 = local_e8;
  }
  local_e8 = pppppppuVar1;
  if (local_80 == pppuVar7) {
    lVar6 = 0x20;
LAB_0047d888:
    (**(code **)((long)*pppuVar7 + lVar6))();
  }
  else if (local_80 != (undefined ***)0x0) {
    lVar6 = 0x28;
    pppuVar7 = local_80;
    goto LAB_0047d888;
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return uVar17;
  }
LAB_0047d9b8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0047d9c0  FUN_0047d9c0 =====

void FUN_0047d9c0(long *param_1)

{
  if (*param_1 != 0) {
                    /* try { // try from 0047d9d0 to 0047d9d3 has its CatchHandler @ 0047d9dc */
    FUN_00486c40();
  }
  return;
}


// ===== 0047d9e0  FUN_0047d9e0 =====

void FUN_0047d9e0(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar3 = *param_1;
  *param_1 = 0;
  if (lVar3 != 0) {
    plVar2 = (long *)param_1[6];
    local_30 = lVar3;
    if (plVar2 == (long *)0x0) {
      if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 0047da88 to 0047da8b has its CatchHandler @ 0047da90 */
        FUN_0030be88();
      }
      goto LAB_0047da8c;
    }
                    /* try { // try from 0047da20 to 0047da27 has its CatchHandler @ 0047da90 */
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_30);
  }
  plVar2 = (long *)param_1[6];
  param_1 = param_1 + 2;
  if (plVar2 == param_1) {
    lVar3 = 0x20;
LAB_0047da4c:
    (**(code **)(*param_1 + lVar3))();
  }
  else if (plVar2 != (long *)0x0) {
    lVar3 = 0x28;
    param_1 = plVar2;
    goto LAB_0047da4c;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
LAB_0047da8c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0047da94  FUN_0047da94 =====

void FUN_0047da94(undefined8 *param_1)

{
                    /* try { // try from 0047daa0 to 0047daa3 has its CatchHandler @ 0047daac */
  FUN_00474f84(*param_1);
  return;
}


// ===== 0047dab0  FUN_0047dab0 =====

void FUN_0047dab0(undefined8 *param_1)

{
                    /* try { // try from 0047dabc to 0047dabf has its CatchHandler @ 0047dac8 */
  FUN_00475c4c(*param_1);
  return;
}


// ===== 0047dacc  FUN_0047dacc =====

void FUN_0047dacc(undefined8 *param_1)

{
  long lVar1;
  void *__ptr;
  undefined8 uVar2;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0047daf0 to 0047daf7 has its CatchHandler @ 0047db84 */
  FUN_00475090(&local_40,*param_1);
  if (local_40 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
                    /* try { // try from 0047db00 to 0047db07 has its CatchHandler @ 0047db70 */
    uVar2 = FUN_0058044c(&local_40);
    __ptr = local_40;
    local_40 = (void *)0x0;
    if (__ptr != (void *)0x0) {
      if ((*(byte *)((long)__ptr + 8) & 1) != 0) {
        free(*(void **)((long)__ptr + 0x18));
      }
      free(__ptr);
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return;
      }
      goto LAB_0047dc1c;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_0047dc1c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


// ===== 0047dc24  FUN_0047dc24 =====

void FUN_0047dc24(undefined8 *param_1)

{
  long lVar1;
  void *__ptr;
  undefined8 uVar2;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0047dc48 to 0047dc4f has its CatchHandler @ 0047dcdc */
  FUN_004756f8(&local_40,*param_1);
  if (local_40 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
                    /* try { // try from 0047dc58 to 0047dc5f has its CatchHandler @ 0047dcc8 */
    uVar2 = FUN_0058044c(&local_40);
    __ptr = local_40;
    local_40 = (void *)0x0;
    if (__ptr != (void *)0x0) {
      if ((*(byte *)((long)__ptr + 8) & 1) != 0) {
        free(*(void **)((long)__ptr + 0x18));
      }
      free(__ptr);
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return;
      }
      goto LAB_0047dd74;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_0047dd74:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


// ===== 0047dd7c  FUN_0047dd7c =====

undefined8 FUN_0047dd7c(long param_1,undefined4 *param_2)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  if (uVar1 != 0) {
    uVar1 = (ulong)(*(int *)(uVar1 + 8) == 2);
  }
  *param_2 = (int)uVar1;
  return 0;
}


// ===== 0047dd9c  FUN_0047dd9c =====

undefined8 FUN_0047dd9c(long *param_1,uint *param_2)

{
  *param_2 = (uint)(*param_1 != 0 && param_1[2] != 0);
  return 0;
}


// ===== 0047ddbc  FUN_0047ddbc =====

undefined8 FUN_0047ddbc(long param_1,undefined4 *param_2)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  if (uVar1 != 0) {
    uVar1 = (ulong)(*(int *)(uVar1 + 8) == 4);
  }
  *param_2 = (int)uVar1;
  return 0;
}


// ===== 0047dddc  FUN_0047dddc =====

undefined8 FUN_0047dddc(undefined8 param_1,long *param_2)

{
  long *plVar1;
  
                    /* try { // try from 0047ddec to 0047ddef has its CatchHandler @ 0047de14 */
  plVar1 = (long *)FUN_0047dea4();
  *param_2 = *plVar1 + plVar1[0xf];
  return 0;
}


// ===== 0047dea4  FUN_0047dea4 =====

void FUN_0047dea4(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_c8;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [80];
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((param_1[2] == 0) || (*(int *)(param_1[2] + 8) != 2)) {
    uVar3 = FUN_00753a74(0x88);
                    /* try { // try from 0047df14 to 0047df1b has its CatchHandler @ 0047e03c */
    FUN_00645c30(auStack_a8);
                    /* try { // try from 0047df1c to 0047df3b has its CatchHandler @ 0047e02c */
    FUN_0047488c(auStack_90,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/include/onnxruntime/core/framework/ort_value.h"
                 ,0x5b,"onnxruntime::Tensor *OrtValue::GetMutable()",auStack_a8);
                    /* try { // try from 0047df40 to 0047df43 has its CatchHandler @ 0047e00c */
    local_c8 = FUN_00576cac(param_1[2]);
    local_40 = "Trying to get a Tensor, but got: ";
    FUN_004839f8(auStack_c0,&local_40,&local_c8);
                    /* try { // try from 0047df68 to 0047dfaf has its CatchHandler @ 0047dfb0 */
    uVar2 = FUN_00474a40(uVar3,auStack_90,"IsTensor()",auStack_c0);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar3,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
  }
  else {
    uVar2 = *param_1;
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


// ===== 0047e060  FUN_0047e060 =====

undefined8 FUN_0047e060(undefined8 param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
                    /* try { // try from 0047e078 to 0047e07b has its CatchHandler @ 0047e0f0 */
  lVar1 = FUN_0047dea4();
                    /* try { // try from 0047e07c to 0047e083 has its CatchHandler @ 0047e0ec */
  lVar2 = FUN_0047e188();
                    /* try { // try from 0047e084 to 0047e08f has its CatchHandler @ 0047e0e8 */
  lVar1 = FUN_005cabcc(lVar1 + 0x18);
  if (lVar1 == param_3) {
    if (param_3 != 0) {
      do {
                    /* try { // try from 0047e0a0 to 0047e0a7 has its CatchHandler @ 0047e0f4 */
        FUN_0071396c(lVar2,*param_2);
        param_3 = param_3 + -1;
        lVar2 = lVar2 + 0x18;
        param_2 = param_2 + 1;
      } while (param_3 != 0);
    }
    return 0;
  }
  uVar3 = FUN_00580398(2,"input array doesn\'t equal tensor size");
  return uVar3;
}


// ===== 0047e188  FUN_0047e188 =====

long FUN_0047e188(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [80];
  undefined *local_50;
  undefined *local_48;
  char *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_1[0xb] + 0x18) == 8) {
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return *param_1 + param_1[0xf];
    }
  }
  else {
    uVar2 = FUN_00753a74(0x88);
                    /* try { // try from 0047e1fc to 0047e203 has its CatchHandler @ 0047e314 */
    FUN_00645c30(auStack_b8);
                    /* try { // try from 0047e204 to 0047e223 has its CatchHandler @ 0047e304 */
    FUN_0047488c(auStack_a0,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/include/onnxruntime/core/framework/tensor.h"
                 ,0xbe,"T *onnxruntime::Tensor::MutableData() [T = std::string]",auStack_b8);
    local_48 = &DAT_001f1ce2;
    pcStack_40 = "Tensor type mismatch. ";
    local_50 = &DAT_001d41e9;
    FUN_00484ef4(auStack_d0,&pcStack_40,&local_48,&local_50,param_1 + 0xb);
                    /* try { // try from 0047e260 to 0047e2a7 has its CatchHandler @ 0047e2a8 */
    FUN_00474a40(uVar2,auStack_a0,"utils::IsPrimitiveDataType<T>(dtype_)",auStack_d0);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar2,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0047e338  FUN_0047e338 =====

undefined8 FUN_0047e338(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
                    /* try { // try from 0047e350 to 0047e353 has its CatchHandler @ 0047e3b4 */
  lVar1 = FUN_0047dea4();
                    /* try { // try from 0047e354 to 0047e35b has its CatchHandler @ 0047e3b0 */
  lVar2 = FUN_0047e188();
                    /* try { // try from 0047e35c to 0047e37f has its CatchHandler @ 0047e3b8 */
  uVar3 = FUN_005cabcc(lVar1 + 0x18);
  if (param_3 < uVar3) {
    FUN_0071396c(lVar2 + param_3 * 0x18,param_2);
    return 0;
  }
  uVar4 = FUN_00580398(2,"element index is out of bounds");
  return uVar4;
}


// ===== 0047e44c  FUN_0047e44c =====

undefined8 FUN_0047e44c(undefined8 param_1,ulong param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  byte *pbVar5;
  byte *pbVar6;
  
                    /* try { // try from 0047e46c to 0047e46f has its CatchHandler @ 0047e4fc */
  lVar1 = FUN_0047dea4();
                    /* try { // try from 0047e470 to 0047e477 has its CatchHandler @ 0047e4f8 */
  lVar2 = FUN_0047e188();
                    /* try { // try from 0047e478 to 0047e483 has its CatchHandler @ 0047e4f4 */
  uVar3 = FUN_005cabcc(lVar1 + 0x18);
  if (param_2 < uVar3) {
    pbVar6 = (byte *)(lVar2 + param_2 * 0x18);
                    /* try { // try from 0047e494 to 0047e4a3 has its CatchHandler @ 0047e4f0 */
    FUN_00713cc0(pbVar6,param_3,0);
    pbVar5 = *(byte **)(pbVar6 + 0x10);
    if ((*pbVar6 & 1) == 0) {
      pbVar5 = pbVar6 + 1;
    }
    *param_4 = (long)pbVar5;
    return 0;
  }
  uVar4 = FUN_00580398(2,"element index is out of bounds");
  return uVar4;
}


// ===== 0047e594  FUN_0047e594 =====

void FUN_0047e594(undefined8 param_1,long *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  byte *pbVar6;
  long lVar7;
  long local_38;
  byte *local_30;
  long local_28;
  
  lVar4 = tpidr_el0;
  local_28 = *(long *)(lVar4 + 0x28);
  local_38 = 0;
  local_30 = (byte *)0x0;
                    /* try { // try from 0047e5b8 to 0047e5bf has its CatchHandler @ 0047e638 */
  lVar5 = FUN_0047e6d0(param_1,&local_38);
  if (lVar5 == 0) {
    lVar7 = local_38;
    if (local_38 != 0) {
      if (local_30 == (byte *)0x0) {
LAB_0047e634:
                    /* WARNING: Subroutine does not return */
        FUN_004839bc();
      }
      lVar7 = 0;
      pbVar6 = local_30;
      do {
        if (local_30 + local_38 * 0x18 <= pbVar6) goto LAB_0047e634;
        bVar3 = *pbVar6;
        puVar1 = (ulong *)(pbVar6 + 8);
        pbVar6 = pbVar6 + 0x18;
        uVar2 = (ulong)(bVar3 >> 1);
        if ((bVar3 & 1) != 0) {
          uVar2 = *puVar1;
        }
        lVar7 = uVar2 + lVar7;
      } while (pbVar6 != local_30 + local_38 * 0x18);
    }
    lVar5 = 0;
    *param_2 = lVar7;
  }
  if (*(long *)(lVar4 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar5);
}


// ===== 0047e6d0  FUN_0047e6d0 =====

undefined8 FUN_0047e6d0(long *param_1,undefined1 (*param_2) [16])

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  if ((*param_1 == 0) || (param_1[2] == 0)) {
    uVar4 = FUN_00580398(2,"OrtValue should contain a Tensor or a Sparse Tensor");
    return uVar4;
  }
  iVar1 = *(int *)(param_1[2] + 8);
  if (iVar1 == 4) {
    piVar2 = (int *)FUN_0047aa18();
    if (*piVar2 == 0) {
      uVar4 = FUN_00580398(2,"Sparse Tensor does not contain sparse data");
      return uVar4;
    }
    lVar3 = FUN_005cabcc(piVar2 + 0x28);
    if (-1 < lVar3) {
      piVar2 = piVar2 + 0x22;
      goto LAB_0047e758;
    }
  }
  else {
    if (iVar1 != 2) {
      uVar4 = FUN_00580398(9,"This API supports Tensors or SparseTensors");
      return uVar4;
    }
    piVar2 = (int *)FUN_00483570();
    lVar3 = FUN_005cabcc(piVar2 + 6);
    if (-1 < lVar3) {
LAB_0047e758:
      auVar5 = FUN_00484d28(piVar2);
      *param_2 = auVar5;
      return 0;
    }
  }
  uVar4 = FUN_00580398(2,"shape is invalid");
  return uVar4;
}


// ===== 0047e7c0  FUN_0047e7c0 =====

void FUN_0047e7c0(undefined8 param_1,ulong param_2,ulong *param_3)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  byte *pbVar5;
  ulong local_48;
  long local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  local_48 = 0;
  local_40 = 0;
                    /* try { // try from 0047e7ec to 0047e7f3 has its CatchHandler @ 0047e874 */
  lVar4 = FUN_0047e6d0(param_1,&local_48);
  if (lVar4 == 0) {
    if (param_2 < local_48) {
      lVar4 = 0;
      pbVar5 = (byte *)(local_40 + param_2 * 0x18);
      bVar2 = *pbVar5;
      uVar1 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar1 = *(ulong *)(pbVar5 + 8);
      }
      *param_3 = uVar1;
      if (*(long *)(lVar3 + 0x28) == local_38) {
        return;
      }
      goto LAB_0047e904;
    }
    lVar4 = FUN_00580398(2,"index is out of bounds");
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
LAB_0047e904:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar4);
}


// ===== 0047e90c  FUN_0047e90c =====

void FUN_0047e90c(undefined8 param_1,void *param_2,ulong param_3,long *param_4,long param_5)

{
  ulong *puVar1;
  size_t __n;
  byte *__src;
  byte bVar2;
  byte bVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;
  ulong uVar7;
  byte *pbVar8;
  ulong uVar9;
  byte *pbVar10;
  long local_68;
  byte *local_60;
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  local_68 = 0;
  local_60 = (byte *)0x0;
                    /* try { // try from 0047e948 to 0047e94f has its CatchHandler @ 0047eab0 */
  lVar4 = FUN_0047e6d0(param_1,&local_68);
  if (lVar4 != 0) {
    lVar6 = *(long *)(lVar6 + 0x28);
joined_r0x0047e960:
    if (lVar6 == local_58) {
      return;
    }
    goto LAB_0047ea08;
  }
  if (local_68 == param_5) {
    if (param_5 != 0) {
      if (local_60 == (byte *)0x0) {
LAB_0047eaac:
                    /* WARNING: Subroutine does not return */
        FUN_004839bc();
      }
      uVar7 = 0;
      pbVar10 = local_60 + param_5 * 0x18;
      pbVar8 = local_60;
      do {
        if (pbVar10 <= pbVar8) goto LAB_0047eaac;
        bVar2 = *pbVar8;
        puVar1 = (ulong *)(pbVar8 + 8);
        pbVar8 = pbVar8 + 0x18;
        uVar9 = (ulong)(bVar2 >> 1);
        if ((bVar2 & 1) != 0) {
          uVar9 = *puVar1;
        }
        uVar7 = uVar9 + uVar7;
      } while (pbVar8 != pbVar10);
      if (param_3 < uVar7) {
        pcVar5 = "output buffer is too small. Use GetStringTensorDataLength.";
        goto LAB_0047e9f0;
      }
      if (param_5 == 0) {
        lVar4 = 0;
        lVar6 = *(long *)(lVar6 + 0x28);
        goto joined_r0x0047e960;
      }
      lVar4 = 0;
      pbVar8 = local_60;
      do {
        if (pbVar10 <= pbVar8) goto LAB_0047eaac;
        __n = *(size_t *)(pbVar8 + 8);
        __src = *(byte **)(pbVar8 + 0x10);
        if ((*pbVar8 & 1) == 0) {
          __src = pbVar8 + 1;
          __n = (ulong)(*pbVar8 >> 1);
        }
        memcpy(param_2,__src,__n);
        bVar2 = *pbVar8;
        uVar9 = *(ulong *)(pbVar8 + 8);
        *param_4 = lVar4;
        bVar3 = *pbVar8;
        puVar1 = (ulong *)(pbVar8 + 8);
        pbVar8 = pbVar8 + 0x18;
        uVar7 = (ulong)(bVar2 >> 1);
        if ((bVar2 & 1) != 0) {
          uVar7 = uVar9;
        }
        param_2 = (void *)((long)param_2 + uVar7);
        uVar7 = (ulong)(bVar3 >> 1);
        if ((bVar3 & 1) != 0) {
          uVar7 = *puVar1;
        }
        lVar4 = uVar7 + lVar4;
        param_4 = param_4 + 1;
      } while (pbVar8 != pbVar10);
    }
    lVar4 = 0;
    if (*(long *)(lVar6 + 0x28) != local_58) {
LAB_0047ea08:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(lVar4);
    }
  }
  else {
    pcVar5 = "offsets buffer is not equal to tensor size";
LAB_0047e9f0:
    lVar4 = FUN_00580398(1,pcVar5);
    if (*(long *)(lVar6 + 0x28) != local_58) goto LAB_0047ea08;
  }
  return;
}


// ===== 0047eb48  FUN_0047eb48 =====

void FUN_0047eb48(undefined8 param_1,ulong param_2,ulong param_3,void *param_4)

{
  ulong __n;
  byte bVar1;
  long lVar2;
  long lVar3;
  byte *pbVar4;
  byte *__src;
  ulong local_48;
  long local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_48 = 0;
  local_40 = 0;
                    /* try { // try from 0047eb78 to 0047eb7f has its CatchHandler @ 0047ec40 */
  lVar3 = FUN_0047e6d0(param_1,&local_48);
  if (lVar3 == 0) {
    if (local_48 <= param_3) {
      lVar3 = FUN_00580398(2,"element index is out of bounds");
      if (*(long *)(lVar2 + 0x28) == local_38) {
        return;
      }
      goto LAB_0047ecd0;
    }
    pbVar4 = (byte *)(local_40 + param_3 * 0x18);
    bVar1 = *pbVar4;
    __n = (ulong)(bVar1 >> 1);
    if ((bVar1 & 1) != 0) {
      __n = *(ulong *)(pbVar4 + 8);
    }
    if (param_2 < __n) {
      lVar3 = FUN_00580398(1,"buffer size is too small for string element");
      if (*(long *)(lVar2 + 0x28) == local_38) {
        return;
      }
      goto LAB_0047ecd0;
    }
    __src = *(byte **)(pbVar4 + 0x10);
    if ((bVar1 & 1) == 0) {
      __src = pbVar4 + 1;
    }
    memcpy(param_4,__src,__n);
    lVar3 = 0;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
LAB_0047ecd0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar3);
}


// ===== 0047ecd8  FUN_0047ecd8 =====

void FUN_0047ecd8(undefined8 param_1,long *param_2)

{
  long lVar1;
  void *__ptr;
  undefined8 uVar2;
  void *local_48;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0047ecfc to 0047ed03 has its CatchHandler @ 0047eda4 */
  FUN_00494724(&local_48);
  if (local_48 == (void *)0x0) {
    uVar2 = 0;
    *param_2 = local_40[1] - *local_40 >> 3;
  }
  else {
                    /* try { // try from 0047ed0c to 0047ed13 has its CatchHandler @ 0047ed90 */
    uVar2 = FUN_0058044c(&local_48);
    __ptr = local_48;
    local_48 = (void *)0x0;
    if (__ptr != (void *)0x0) {
      if ((*(byte *)((long)__ptr + 8) & 1) != 0) {
        free(*(void **)((long)__ptr + 0x18));
      }
      free(__ptr);
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return;
      }
      goto LAB_0047ee3c;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_0047ee3c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


// ===== 0047ee44  FUN_0047ee44 =====

void FUN_0047ee44(undefined8 param_1,long *param_2)

{
  long lVar1;
  void *__ptr;
  undefined8 uVar2;
  void *local_48;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0047ee68 to 0047ee6f has its CatchHandler @ 0047ef10 */
  FUN_00494adc(&local_48);
  if (local_48 == (void *)0x0) {
    uVar2 = 0;
    *param_2 = local_40[1] - *local_40 >> 3;
  }
  else {
                    /* try { // try from 0047ee78 to 0047ee7f has its CatchHandler @ 0047eefc */
    uVar2 = FUN_0058044c(&local_48);
    __ptr = local_48;
    local_48 = (void *)0x0;
    if (__ptr != (void *)0x0) {
      if ((*(byte *)((long)__ptr + 8) & 1) != 0) {
        free(*(void **)((long)__ptr + 0x18));
      }
      free(__ptr);
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return;
      }
      goto LAB_0047efa8;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_0047efa8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


// ===== 0047efb0  FUN_0047efb0 =====

void FUN_0047efb0(undefined8 param_1,long *param_2)

{
  long lVar1;
  void *__ptr;
  undefined8 uVar2;
  void *local_48;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0047efd4 to 0047efdb has its CatchHandler @ 0047f07c */
  FUN_00494900(&local_48);
  if (local_48 == (void *)0x0) {
    uVar2 = 0;
    *param_2 = local_40[1] - *local_40 >> 3;
  }
  else {
                    /* try { // try from 0047efe4 to 0047efeb has its CatchHandler @ 0047f068 */
    uVar2 = FUN_0058044c(&local_48);
    __ptr = local_48;
    local_48 = (void *)0x0;
    if (__ptr != (void *)0x0) {
      if ((*(byte *)((long)__ptr + 8) & 1) != 0) {
        free(*(void **)((long)__ptr + 0x18));
      }
      free(__ptr);
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return;
      }
      goto LAB_0047f114;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_0047f114:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


// ===== 0047f11c  FUN_0047f11c =====

void FUN_0047f11c(undefined8 param_1,ulong param_2,undefined8 *param_3)

{
  long lVar1;
  void *__ptr;
  undefined8 uVar2;
  undefined8 local_50;
  void *local_48;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0047f144 to 0047f14b has its CatchHandler @ 0047f21c */
  FUN_00494724(&local_48);
  if (local_48 == (void *)0x0) {
    if (param_2 < (ulong)(local_40[1] - *local_40 >> 3)) {
      FUN_005de664(*(undefined8 *)(*local_40 + param_2 * 8));
                    /* try { // try from 0047f17c to 0047f183 has its CatchHandler @ 0047f204 */
      FUN_0058c458(&local_50);
      uVar2 = 0;
      *param_3 = local_50;
      __ptr = local_48;
    }
    else {
      uVar2 = FUN_00580398(1,"out of index");
      __ptr = local_48;
    }
  }
  else {
                    /* try { // try from 0047f154 to 0047f15b has its CatchHandler @ 0047f208 */
    uVar2 = FUN_0058044c(&local_48);
    __ptr = local_48;
  }
  local_48 = (void *)0x0;
  if (__ptr != (void *)0x0) {
    local_48 = (void *)0x0;
    if ((*(byte *)((long)__ptr + 8) & 1) != 0) {
      free(*(void **)((long)__ptr + 0x18));
    }
    free(__ptr);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}


// ===== 0047f2ac  FUN_0047f2ac =====

void FUN_0047f2ac(undefined8 param_1,ulong param_2,undefined8 *param_3)

{
  long lVar1;
  void *__ptr;
  undefined8 uVar2;
  undefined8 local_50;
  void *local_48;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0047f2d4 to 0047f2db has its CatchHandler @ 0047f3ac */
  FUN_00494adc(&local_48);
  if (local_48 == (void *)0x0) {
    if (param_2 < (ulong)(local_40[1] - *local_40 >> 3)) {
      FUN_005de664(*(undefined8 *)(*local_40 + param_2 * 8));
                    /* try { // try from 0047f30c to 0047f313 has its CatchHandler @ 0047f394 */
      FUN_0058c458(&local_50);
      uVar2 = 0;
      *param_3 = local_50;
      __ptr = local_48;
    }
    else {
      uVar2 = FUN_00580398(1,"out of index");
      __ptr = local_48;
    }
  }
  else {
                    /* try { // try from 0047f2e4 to 0047f2eb has its CatchHandler @ 0047f398 */
    uVar2 = FUN_0058044c(&local_48);
    __ptr = local_48;
  }
  local_48 = (void *)0x0;
  if (__ptr != (void *)0x0) {
    local_48 = (void *)0x0;
    if ((*(byte *)((long)__ptr + 8) & 1) != 0) {
      free(*(void **)((long)__ptr + 0x18));
    }
    free(__ptr);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}


// ===== 0047f43c  FUN_0047f43c =====

void FUN_0047f43c(undefined8 param_1,ulong param_2,undefined8 *param_3)

{
  long lVar1;
  void *__ptr;
  undefined8 uVar2;
  undefined8 local_50;
  void *local_48;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0047f464 to 0047f46b has its CatchHandler @ 0047f53c */
  FUN_00494900(&local_48);
  if (local_48 == (void *)0x0) {
    if (param_2 < (ulong)(local_40[1] - *local_40 >> 3)) {
      FUN_005de664(*(undefined8 *)(*local_40 + param_2 * 8));
                    /* try { // try from 0047f49c to 0047f4a3 has its CatchHandler @ 0047f524 */
      FUN_0058c458(&local_50);
      uVar2 = 0;
      *param_3 = local_50;
      __ptr = local_48;
    }
    else {
      uVar2 = FUN_00580398(1,"out of index");
      __ptr = local_48;
    }
  }
  else {
                    /* try { // try from 0047f474 to 0047f47b has its CatchHandler @ 0047f528 */
    uVar2 = FUN_0058044c(&local_48);
    __ptr = local_48;
  }
  local_48 = (void *)0x0;
  if (__ptr != (void *)0x0) {
    local_48 = (void *)0x0;
    if ((*(byte *)((long)__ptr + 8) & 1) != 0) {
      free(*(void **)((long)__ptr + 0x18));
    }
    free(__ptr);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}


// ===== 0047f5cc  FUN_0047f5cc =====

void FUN_0047f5cc(undefined8 param_1,long param_2,undefined8 *param_3)

{
  size_t sVar1;
  long lVar2;
  undefined1 *__src;
  void *__dest;
  byte local_50;
  undefined1 auStack_4f [7];
  size_t local_48;
  undefined1 *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 0047f5f4 to 0047f5fb has its CatchHandler @ 0047f6b4 */
  FUN_0048b7f4(&local_50);
  sVar1 = (ulong)(local_50 >> 1);
  if ((local_50 & 1) != 0) {
    sVar1 = local_48;
  }
                    /* try { // try from 0047f614 to 0047f61f has its CatchHandler @ 0047f698 */
  __dest = (void *)(**(code **)(param_2 + 8))(param_2,sVar1 + 1);
  sVar1 = local_48;
  __src = local_40;
  if ((local_50 & 1) == 0) {
    sVar1 = (ulong)(local_50 >> 1);
    __src = auStack_4f;
  }
  memcpy(__dest,__src,sVar1);
  sVar1 = (ulong)(local_50 >> 1);
  if ((local_50 & 1) != 0) {
    sVar1 = local_48;
  }
  *(undefined1 *)((long)__dest + sVar1) = 0;
  *param_3 = __dest;
  if ((local_50 & 1) != 0) {
    free(local_40);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0);
}


// ===== 0047f754  FUN_0047f754 =====

undefined8 FUN_0047f754(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  void *__ptr;
  undefined8 uVar2;
  undefined8 uVar3;
  void *local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0047f778 to 0047f77f has its CatchHandler @ 0047f840 */
  FUN_00494550(&local_48);
  if (local_48 == (void *)0x0) {
                    /* try { // try from 0047f7a8 to 0047f7af has its CatchHandler @ 0047f828 */
    uVar3 = FUN_00759c3c(0xa8);
                    /* try { // try from 0047f7b0 to 0047f7bb has its CatchHandler @ 0047f814 */
    FUN_00487044(uVar3,local_40);
    uVar2 = 0;
    *param_2 = uVar3;
    __ptr = local_48;
  }
  else {
                    /* try { // try from 0047f788 to 0047f78f has its CatchHandler @ 0047f82c */
    uVar2 = FUN_0058044c(&local_48);
    __ptr = local_48;
  }
  local_48 = (void *)0x0;
  if (__ptr != (void *)0x0) {
    local_48 = (void *)0x0;
    if ((*(byte *)((long)__ptr + 8) & 1) != 0) {
      free(*(void **)((long)__ptr + 0x18));
    }
    free(__ptr);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0047f8cc  FUN_0047f8cc =====

void FUN_0047f8cc(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)*param_1;
  *param_1 = 0;
  if (__ptr != (void *)0x0) {
    if ((*(byte *)((long)__ptr + 8) & 1) != 0) {
      free(*(void **)((long)__ptr + 0x18));
    }
    free(__ptr);
    return;
  }
  return;
}


// ===== 0047f910  FUN_0047f910 =====

void FUN_0047f910(ulong *param_1,long param_2,undefined8 *param_3)

{
  size_t sVar1;
  long lVar2;
  void *__src;
  void *__dest;
  undefined8 local_50;
  size_t sStack_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if ((*param_1 & 1) == 0) {
    sStack_48 = param_1[1];
    local_50 = *param_1;
    local_40 = (void *)param_1[2];
  }
  else {
                    /* try { // try from 0047f958 to 0047f95f has its CatchHandler @ 0047f9fc */
    FUN_002fb36c(&local_50,param_1[2],param_1[1]);
  }
  sVar1 = local_50 >> 1 & 0x7f;
  if ((local_50 & 1) != 0) {
    sVar1 = sStack_48;
  }
                    /* try { // try from 0047f978 to 0047f983 has its CatchHandler @ 0047fa08 */
  __dest = (void *)(**(code **)(param_2 + 8))(param_2,sVar1 + 1);
  sVar1 = sStack_48;
  __src = local_40;
  if ((local_50 & 1) == 0) {
    sVar1 = local_50 >> 1 & 0x7f;
    __src = (void *)((long)&local_50 + 1);
  }
  memcpy(__dest,__src,sVar1);
  sVar1 = local_50 >> 1 & 0x7f;
  if ((local_50 & 1) != 0) {
    sVar1 = sStack_48;
  }
  *(undefined1 *)((long)__dest + sVar1) = 0;
  *param_3 = __dest;
  if ((local_50 & 1) != 0) {
    free(local_40);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0);
}


// ===== 0047fab8  FUN_0047fab8 =====

void FUN_0047fab8(long param_1,long param_2,undefined8 *param_3)

{
  size_t sVar1;
  long lVar2;
  void *__src;
  void *__dest;
  undefined8 local_50;
  size_t sStack_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    sStack_48 = *(size_t *)(param_1 + 0x20);
    local_50 = *(ulong *)(param_1 + 0x18);
    local_40 = *(void **)(param_1 + 0x28);
  }
  else {
                    /* try { // try from 0047fb04 to 0047fb0b has its CatchHandler @ 0047fba8 */
    FUN_002fb36c(&local_50,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  }
  sVar1 = local_50 >> 1 & 0x7f;
  if ((local_50 & 1) != 0) {
    sVar1 = sStack_48;
  }
                    /* try { // try from 0047fb24 to 0047fb2f has its CatchHandler @ 0047fbb4 */
  __dest = (void *)(**(code **)(param_2 + 8))(param_2,sVar1 + 1);
  sVar1 = sStack_48;
  __src = local_40;
  if ((local_50 & 1) == 0) {
    sVar1 = local_50 >> 1 & 0x7f;
    __src = (void *)((long)&local_50 + 1);
  }
  memcpy(__dest,__src,sVar1);
  sVar1 = local_50 >> 1 & 0x7f;
  if ((local_50 & 1) != 0) {
    sVar1 = sStack_48;
  }
  *(undefined1 *)((long)__dest + sVar1) = 0;
  *param_3 = __dest;
  if ((local_50 & 1) != 0) {
    free(local_40);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0);
}


// ===== 0047fc64  FUN_0047fc64 =====

void FUN_0047fc64(long param_1,long param_2,undefined8 *param_3)

{
  size_t sVar1;
  long lVar2;
  void *__src;
  void *__dest;
  undefined8 local_50;
  size_t sStack_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    sStack_48 = *(size_t *)(param_1 + 0x38);
    local_50 = *(ulong *)(param_1 + 0x30);
    local_40 = *(void **)(param_1 + 0x40);
  }
  else {
                    /* try { // try from 0047fcb0 to 0047fcb7 has its CatchHandler @ 0047fd54 */
    FUN_002fb36c(&local_50,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x38));
  }
  sVar1 = local_50 >> 1 & 0x7f;
  if ((local_50 & 1) != 0) {
    sVar1 = sStack_48;
  }
                    /* try { // try from 0047fcd0 to 0047fcdb has its CatchHandler @ 0047fd60 */
  __dest = (void *)(**(code **)(param_2 + 8))(param_2,sVar1 + 1);
  sVar1 = sStack_48;
  __src = local_40;
  if ((local_50 & 1) == 0) {
    sVar1 = local_50 >> 1 & 0x7f;
    __src = (void *)((long)&local_50 + 1);
  }
  memcpy(__dest,__src,sVar1);
  sVar1 = local_50 >> 1 & 0x7f;
  if ((local_50 & 1) != 0) {
    sVar1 = sStack_48;
  }
  *(undefined1 *)((long)__dest + sVar1) = 0;
  *param_3 = __dest;
  if ((local_50 & 1) != 0) {
    free(local_40);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0);
}


// ===== 0047fe10  FUN_0047fe10 =====

void FUN_0047fe10(long param_1,long param_2,undefined8 *param_3)

{
  size_t sVar1;
  long lVar2;
  void *__src;
  void *__dest;
  undefined8 local_50;
  size_t sStack_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
    sStack_48 = *(size_t *)(param_1 + 0x50);
    local_50 = *(ulong *)(param_1 + 0x48);
    local_40 = *(void **)(param_1 + 0x58);
  }
  else {
                    /* try { // try from 0047fe5c to 0047fe63 has its CatchHandler @ 0047ff00 */
    FUN_002fb36c(&local_50,*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x50));
  }
  sVar1 = local_50 >> 1 & 0x7f;
  if ((local_50 & 1) != 0) {
    sVar1 = sStack_48;
  }
                    /* try { // try from 0047fe7c to 0047fe87 has its CatchHandler @ 0047ff0c */
  __dest = (void *)(**(code **)(param_2 + 8))(param_2,sVar1 + 1);
  sVar1 = sStack_48;
  __src = local_40;
  if ((local_50 & 1) == 0) {
    sVar1 = local_50 >> 1 & 0x7f;
    __src = (void *)((long)&local_50 + 1);
  }
  memcpy(__dest,__src,sVar1);
  sVar1 = local_50 >> 1 & 0x7f;
  if ((local_50 & 1) != 0) {
    sVar1 = sStack_48;
  }
  *(undefined1 *)((long)__dest + sVar1) = 0;
  *param_3 = __dest;
  if ((local_50 & 1) != 0) {
    free(local_40);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0);
}


// ===== 0047ffbc  FUN_0047ffbc =====

void FUN_0047ffbc(long param_1,long param_2,undefined8 *param_3)

{
  size_t sVar1;
  long lVar2;
  void *__src;
  void *__dest;
  undefined8 local_50;
  size_t sStack_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
    sStack_48 = *(size_t *)(param_1 + 0x68);
    local_50 = *(ulong *)(param_1 + 0x60);
    local_40 = *(void **)(param_1 + 0x70);
  }
  else {
                    /* try { // try from 00480008 to 0048000f has its CatchHandler @ 004800ac */
    FUN_002fb36c(&local_50,*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x68));
  }
  sVar1 = local_50 >> 1 & 0x7f;
  if ((local_50 & 1) != 0) {
    sVar1 = sStack_48;
  }
                    /* try { // try from 00480028 to 00480033 has its CatchHandler @ 004800b8 */
  __dest = (void *)(**(code **)(param_2 + 8))(param_2,sVar1 + 1);
  sVar1 = sStack_48;
  __src = local_40;
  if ((local_50 & 1) == 0) {
    sVar1 = local_50 >> 1 & 0x7f;
    __src = (void *)((long)&local_50 + 1);
  }
  memcpy(__dest,__src,sVar1);
  sVar1 = local_50 >> 1 & 0x7f;
  if ((local_50 & 1) != 0) {
    sVar1 = sStack_48;
  }
  *(undefined1 *)((long)__dest + sVar1) = 0;
  *param_3 = __dest;
  if ((local_50 & 1) != 0) {
    free(local_40);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0);
}


// ===== 00480168  FUN_00480168 =====

void FUN_00480168(long param_1,long param_2,char *param_3,undefined8 *param_4)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  void *pvVar4;
  undefined8 *__ptr;
  size_t sVar5;
  long lVar6;
  void *pvVar7;
  undefined1 *__dest;
  ulong local_98;
  size_t local_90;
  undefined1 *local_88;
  void *local_80 [2];
  undefined8 *local_70;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 004801a0 to 004801ab has its CatchHandler @ 00480390 */
  FUN_00480444(local_80,param_1 + 0x80);
  sVar5 = strlen(param_3);
  if (0xfffffffffffffff7 < sVar5) {
    if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* try { // try from 0048036c to 00480373 has its CatchHandler @ 0048039c */
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_98);
    }
    goto LAB_0048043c;
  }
  if (sVar5 < 0x17) {
    __dest = (undefined1 *)((ulong)&local_98 | 1);
    local_98 = CONCAT71(local_98._1_7_,(char)((int)sVar5 << 1));
    if (sVar5 != 0) goto LAB_00480324;
    *__dest = 0;
    lVar6 = FUN_00487224(local_80,&local_98);
    if (lVar6 == 0) goto LAB_00480348;
LAB_004801f0:
    uVar1 = (ulong)(*(byte *)(lVar6 + 0x28) >> 1);
    if ((*(byte *)(lVar6 + 0x28) & 1) != 0) {
      uVar1 = *(ulong *)(lVar6 + 0x30);
    }
                    /* try { // try from 0048020c to 00480217 has its CatchHandler @ 00480374 */
    pvVar7 = (void *)(**(code **)(param_2 + 8))(param_2,uVar1 + 1);
    sVar5 = (ulong)(*(byte *)(lVar6 + 0x28) >> 1);
    pvVar4 = (void *)(lVar6 + 0x29);
    if ((*(byte *)(lVar6 + 0x28) & 1) != 0) {
      sVar5 = *(size_t *)(lVar6 + 0x30);
      pvVar4 = *(void **)(lVar6 + 0x38);
    }
    memcpy(pvVar7,pvVar4,sVar5);
    uVar1 = (ulong)(*(byte *)(lVar6 + 0x28) >> 1);
    if ((*(byte *)(lVar6 + 0x28) & 1) != 0) {
      uVar1 = *(ulong *)(lVar6 + 0x30);
    }
    *(undefined1 *)((long)pvVar7 + uVar1) = 0;
    *param_4 = pvVar7;
  }
  else {
    uVar1 = (sVar5 & 0xfffffffffffffff8) + 8;
    if ((sVar5 | 7) != 0x17) {
      uVar1 = sVar5 | 7;
    }
                    /* try { // try from 0048030c to 00480313 has its CatchHandler @ 0048039c */
    __dest = (undefined1 *)FUN_00759c3c(uVar1 + 1);
    local_98 = uVar1 + 1 | 1;
    local_90 = sVar5;
    local_88 = __dest;
LAB_00480324:
    memcpy(__dest,param_3,sVar5);
    __dest[sVar5] = 0;
    lVar6 = FUN_00487224(local_80,&local_98);
    if (lVar6 != 0) goto LAB_004801f0;
LAB_00480348:
    *param_4 = 0;
  }
  pvVar4 = local_80[0];
  __ptr = local_70;
  if ((local_98 & 1) != 0) {
    free(local_88);
    pvVar4 = local_80[0];
    __ptr = local_70;
  }
  while (__ptr != (undefined8 *)0x0) {
    pvVar7 = (void *)*__ptr;
    local_80[0] = pvVar4;
    if ((*(byte *)(__ptr + 5) & 1) == 0) {
      bVar2 = *(byte *)(__ptr + 2);
    }
    else {
      free((void *)__ptr[7]);
      bVar2 = *(byte *)(__ptr + 2);
    }
    if ((bVar2 & 1) != 0) {
      free((void *)__ptr[4]);
    }
    free(__ptr);
    pvVar4 = local_80[0];
    __ptr = (undefined8 *)pvVar7;
  }
  local_80[0] = (void *)0x0;
  if (pvVar4 != (void *)0x0) {
    free(pvVar4);
  }
  sVar5 = 0;
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
LAB_0048043c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(sVar5);
}


// ===== 00480444  FUN_00480444 =====

void FUN_00480444(undefined8 *param_1,long param_2)

{
  bool bVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  undefined2 uVar6;
  undefined8 uVar7;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  uVar4 = *(ulong *)(param_2 + 8);
  if (uVar4 - 1 == 0) {
    uVar4 = 2;
  }
  else if ((uVar4 & uVar4 - 1) == 0) {
    uVar5 = 0;
    bVar1 = true;
    if (uVar4 == 0) {
LAB_004804b0:
      if (bVar1) goto LAB_00480528;
      uVar2 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar5 < 3) {
LAB_00480508:
        uVar2 = FUN_00711ce0();
      }
      else {
        uVar7 = NEON_cnt(uVar5,1);
        uVar6 = NEON_uaddlv(uVar7,1);
        if (1 < (CONCAT62((int6)((ulong)uVar7 >> 0x10),uVar6) & 0xffffffff)) goto LAB_00480508;
        if (1 < uVar2) {
          uVar2 = 1L << (-LZCOUNT(uVar2 - 1) & 0x3fU);
        }
      }
      if (uVar4 <= uVar2) {
        uVar4 = uVar2;
      }
      if (uVar5 <= uVar4) goto LAB_00480528;
    }
  }
  else {
                    /* try { // try from 00480498 to 00480527 has its CatchHandler @ 00480558 */
    uVar4 = FUN_00711ce0(uVar4);
    uVar5 = param_1[1];
    bVar1 = uVar5 <= uVar4;
    if (uVar4 <= uVar5) goto LAB_004804b0;
  }
  FUN_00485ed4(param_1,uVar4);
LAB_00480528:
  for (plVar3 = *(long **)(param_2 + 0x10); plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
                    /* try { // try from 00480530 to 0048053f has its CatchHandler @ 0048056c */
    FUN_004860ac(param_1,plVar3 + 2,plVar3 + 2);
  }
  return;
}


// ===== 00480580  FUN_00480580 =====

void FUN_00480580(undefined8 *param_1)

{
  byte bVar1;
  undefined8 *__ptr;
  void *pvVar2;
  
  __ptr = (undefined8 *)param_1[2];
  while (__ptr != (undefined8 *)0x0) {
    pvVar2 = (void *)*__ptr;
    if ((*(byte *)(__ptr + 5) & 1) == 0) {
      bVar1 = *(byte *)(__ptr + 2);
    }
    else {
      free((void *)__ptr[7]);
      bVar1 = *(byte *)(__ptr + 2);
    }
    if ((bVar1 & 1) != 0) {
      free((void *)__ptr[4]);
    }
    free(__ptr);
    __ptr = (undefined8 *)pvVar2;
  }
  pvVar2 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  free(pvVar2);
  return;
}


// ===== 0048060c  FUN_0048060c =====

void FUN_0048060c(long param_1,undefined8 ***param_2,undefined8 *param_3,ulong *param_4)

{
  size_t __n;
  undefined8 ****ppppuVar1;
  ulong uVar2;
  long lVar3;
  void *__src;
  undefined8 *puVar4;
  undefined8 ***__dest;
  long lVar5;
  ulong uVar6;
  undefined8 ****ppppuVar7;
  ulong uVar9;
  ulong uVar10;
  undefined8 **ppuVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 **local_b0;
  undefined8 **local_a8;
  ulong local_a0;
  undefined8 ***local_98;
  ulong local_90;
  long local_68;
  undefined8 ****ppppuVar8;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar10 = *(ulong *)(param_1 + 0x98);
  if (uVar10 == 0) {
    *param_3 = 0;
    goto LAB_00480810;
  }
  local_a0 = 0;
                    /* try { // try from 00480654 to 0048065f has its CatchHandler @ 00480874 */
  FUN_00487514(&local_a0,uVar10);
  ppuVar11 = param_2[1];
  if (uVar10 >> 0x3d == 0) {
    lVar5 = uVar10 << 3;
  }
  else {
                    /* try { // try from 0048066c to 0048068f has its CatchHandler @ 00480878 */
    FUN_00485180();
    lVar5 = 0;
  }
  puVar4 = (undefined8 *)(*(code *)ppuVar11)(param_2,lVar5);
  plVar13 = *(long **)(param_1 + 0x90);
  if (plVar13 != (long *)0x0) {
    puVar12 = puVar4;
    do {
      uVar2 = (ulong)(*(byte *)(plVar13 + 2) >> 1);
      if ((*(byte *)(plVar13 + 2) & 1) != 0) {
        uVar2 = plVar13[3];
      }
                    /* try { // try from 004806d0 to 004806db has its CatchHandler @ 00480888 */
      __dest = (undefined8 ***)(*(code *)param_2[1])(param_2,uVar2 + 1);
      __n = (ulong)(*(byte *)(plVar13 + 2) >> 1);
      __src = (void *)((long)plVar13 + 0x11);
      if ((*(byte *)(plVar13 + 2) & 1) != 0) {
        __n = plVar13[3];
        __src = (void *)plVar13[4];
      }
      memcpy(__dest,__src,__n);
      uVar2 = (ulong)(*(byte *)(plVar13 + 2) >> 1);
      if ((*(byte *)(plVar13 + 2) & 1) != 0) {
        uVar2 = plVar13[3];
      }
      *(undefined1 *)((long)__dest + uVar2) = 0;
      uVar6 = local_a0 >> 1;
      uVar2 = 3;
      if ((local_a0 & 1) != 0) {
        uVar2 = local_90;
      }
      local_a8 = param_2;
      if (uVar6 == uVar2) {
                    /* try { // try from 0048077c to 00480787 has its CatchHandler @ 00480848 */
        local_b0 = __dest;
        FUN_00487620(&local_a0,&local_b0);
      }
      else {
        uVar2 = local_a0 & 1;
        local_b0 = (undefined8 ***)0x0;
        local_a0 = local_a0 + 2;
        ppppuVar1 = &local_98;
        if (uVar2 != 0) {
          ppppuVar1 = (undefined8 ****)local_98;
        }
        ppppuVar1[uVar6 * 2] = __dest;
        (ppppuVar1 + uVar6 * 2)[1] = param_2;
      }
      ppuVar11 = local_b0;
      local_b0 = (undefined8 **)0x0;
      if ((undefined8 ***)ppuVar11 != (undefined8 ***)0x0) {
                    /* try { // try from 00480774 to 00480777 has its CatchHandler @ 00480884 */
        (*(code *)local_a8[2])();
      }
      *puVar12 = __dest;
      plVar13 = (long *)*plVar13;
      puVar12 = puVar12 + 1;
    } while (plVar13 != (long *)0x0);
  }
  ppppuVar1 = &local_98;
  if ((local_a0 & 1) != 0) {
    ppppuVar1 = (undefined8 ****)local_98;
  }
  if (1 < local_a0) {
    uVar2 = (local_a0 >> 1) - 1 & 0xfffffffffffffff;
    ppppuVar7 = ppppuVar1;
    if (uVar2 != 0) {
      uVar2 = uVar2 + 1;
      uVar9 = uVar2 & 0x1ffffffffffffffe;
      ppppuVar7 = ppppuVar1 + 2;
      uVar6 = uVar9;
      do {
        uVar6 = uVar6 - 2;
        ppppuVar7[-2] = (undefined8 ***)0x0;
        *ppppuVar7 = (undefined8 ***)0x0;
        ppppuVar7 = ppppuVar7 + 4;
      } while (uVar6 != 0);
      ppppuVar7 = ppppuVar1 + uVar9 * 2;
      if (uVar2 == uVar9) goto LAB_004807fc;
    }
    do {
      ppppuVar8 = ppppuVar7 + 2;
      *ppppuVar7 = (undefined8 ***)0x0;
      ppppuVar7 = ppppuVar8;
    } while (ppppuVar8 != ppppuVar1 + (local_a0 >> 1) * 2);
  }
LAB_004807fc:
  *param_3 = puVar4;
  if (local_a0 != 0) {
                    /* try { // try from 00480808 to 0048080f has its CatchHandler @ 00480870 */
    FUN_00487478(&local_a0);
  }
LAB_00480810:
  *param_4 = uVar10;
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0);
}


// ===== 0048094c  FUN_0048094c =====

void FUN_0048094c(long *param_1)

{
  if (*param_1 != 0) {
                    /* try { // try from 0048095c to 0048095f has its CatchHandler @ 00480968 */
    FUN_00487478();
  }
  return;
}


// ===== 0048096c  FUN_0048096c =====

undefined8 FUN_0048096c(long param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x78);
  return 0;
}


// ===== 0048097c  FUN_0048097c =====

void FUN_0048097c(undefined8 param_1,ulong param_2,long param_3,undefined8 *param_4)

{
  ulong uVar1;
  size_t __n;
  byte *__src;
  long lVar2;
  undefined8 uVar3;
  byte *pbVar4;
  void *pvVar5;
  char *pcVar6;
  void *local_48;
  long *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 004809a8 to 004809af has its CatchHandler @ 00480ad4 */
  FUN_00494724(&local_48);
  if (local_48 == (void *)0x0) {
    if (local_40 == (long *)0x0) {
      pcVar6 = "internal error";
    }
    else {
      if (param_2 < (ulong)(local_40[1] - *local_40 >> 3)) {
        pbVar4 = (byte *)FUN_005de650(*(undefined8 *)(*local_40 + param_2 * 8));
        uVar1 = (ulong)(*pbVar4 >> 1);
        if ((*pbVar4 & 1) != 0) {
          uVar1 = *(ulong *)(pbVar4 + 8);
        }
                    /* try { // try from 00480a00 to 00480a0b has its CatchHandler @ 00480abc */
        pvVar5 = (void *)(**(code **)(param_3 + 8))(param_3,uVar1 + 1);
        __n = *(size_t *)(pbVar4 + 8);
        __src = *(byte **)(pbVar4 + 0x10);
        if ((*pbVar4 & 1) == 0) {
          __src = pbVar4 + 1;
          __n = (ulong)(*pbVar4 >> 1);
        }
        memcpy(pvVar5,__src,__n);
        uVar3 = 0;
        uVar1 = (ulong)(*pbVar4 >> 1);
        if ((*pbVar4 & 1) != 0) {
          uVar1 = *(ulong *)(pbVar4 + 8);
        }
        *(undefined1 *)((long)pvVar5 + uVar1) = 0;
        *param_4 = pvVar5;
        goto LAB_00480a6c;
      }
      pcVar6 = "index out of range";
    }
    uVar3 = FUN_00580398(1,pcVar6);
  }
  else {
                    /* try { // try from 004809b8 to 004809bf has its CatchHandler @ 00480ac0 */
    uVar3 = FUN_0058044c(&local_48);
  }
LAB_00480a6c:
  pvVar5 = local_48;
  local_48 = (void *)0x0;
  if (pvVar5 != (void *)0x0) {
    if ((*(byte *)((long)pvVar5 + 8) & 1) != 0) {
      free(*(void **)((long)pvVar5 + 0x18));
    }
    free(pvVar5);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 00480b74  FUN_00480b74 =====

void FUN_00480b74(undefined8 param_1,ulong param_2,long param_3,undefined8 *param_4)

{
  ulong uVar1;
  size_t __n;
  byte *__src;
  long lVar2;
  undefined8 uVar3;
  byte *pbVar4;
  void *pvVar5;
  char *pcVar6;
  void *local_48;
  long *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 00480ba0 to 00480ba7 has its CatchHandler @ 00480ccc */
  FUN_00494adc(&local_48);
  if (local_48 == (void *)0x0) {
    if (local_40 == (long *)0x0) {
      pcVar6 = "internal error";
    }
    else {
      if (param_2 < (ulong)(local_40[1] - *local_40 >> 3)) {
        pbVar4 = (byte *)FUN_005de650(*(undefined8 *)(*local_40 + param_2 * 8));
        uVar1 = (ulong)(*pbVar4 >> 1);
        if ((*pbVar4 & 1) != 0) {
          uVar1 = *(ulong *)(pbVar4 + 8);
        }
                    /* try { // try from 00480bf8 to 00480c03 has its CatchHandler @ 00480cb4 */
        pvVar5 = (void *)(**(code **)(param_3 + 8))(param_3,uVar1 + 1);
        __n = *(size_t *)(pbVar4 + 8);
        __src = *(byte **)(pbVar4 + 0x10);
        if ((*pbVar4 & 1) == 0) {
          __src = pbVar4 + 1;
          __n = (ulong)(*pbVar4 >> 1);
        }
        memcpy(pvVar5,__src,__n);
        uVar3 = 0;
        uVar1 = (ulong)(*pbVar4 >> 1);
        if ((*pbVar4 & 1) != 0) {
          uVar1 = *(ulong *)(pbVar4 + 8);
        }
        *(undefined1 *)((long)pvVar5 + uVar1) = 0;
        *param_4 = pvVar5;
        goto LAB_00480c64;
      }
      pcVar6 = "index out of range";
    }
    uVar3 = FUN_00580398(1,pcVar6);
  }
  else {
                    /* try { // try from 00480bb0 to 00480bb7 has its CatchHandler @ 00480cb8 */
    uVar3 = FUN_0058044c(&local_48);
  }
LAB_00480c64:
  pvVar5 = local_48;
  local_48 = (void *)0x0;
  if (pvVar5 != (void *)0x0) {
    if ((*(byte *)((long)pvVar5 + 8) & 1) != 0) {
      free(*(void **)((long)pvVar5 + 0x18));
    }
    free(pvVar5);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 00480d6c  FUN_00480d6c =====

void FUN_00480d6c(undefined8 param_1,ulong param_2,long param_3,undefined8 *param_4)

{
  ulong uVar1;
  size_t __n;
  byte *__src;
  long lVar2;
  undefined8 uVar3;
  byte *pbVar4;
  void *pvVar5;
  char *pcVar6;
  void *local_48;
  long *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 00480d98 to 00480d9f has its CatchHandler @ 00480ec4 */
  FUN_00494900(&local_48);
  if (local_48 == (void *)0x0) {
    if (local_40 == (long *)0x0) {
      pcVar6 = "internal error";
    }
    else {
      if (param_2 < (ulong)(local_40[1] - *local_40 >> 3)) {
        pbVar4 = (byte *)FUN_005de650(*(undefined8 *)(*local_40 + param_2 * 8));
        uVar1 = (ulong)(*pbVar4 >> 1);
        if ((*pbVar4 & 1) != 0) {
          uVar1 = *(ulong *)(pbVar4 + 8);
        }
                    /* try { // try from 00480df0 to 00480dfb has its CatchHandler @ 00480eac */
        pvVar5 = (void *)(**(code **)(param_3 + 8))(param_3,uVar1 + 1);
        __n = *(size_t *)(pbVar4 + 8);
        __src = *(byte **)(pbVar4 + 0x10);
        if ((*pbVar4 & 1) == 0) {
          __src = pbVar4 + 1;
          __n = (ulong)(*pbVar4 >> 1);
        }
        memcpy(pvVar5,__src,__n);
        uVar3 = 0;
        uVar1 = (ulong)(*pbVar4 >> 1);
        if ((*pbVar4 & 1) != 0) {
          uVar1 = *(ulong *)(pbVar4 + 8);
        }
        *(undefined1 *)((long)pvVar5 + uVar1) = 0;
        *param_4 = pvVar5;
        goto LAB_00480e5c;
      }
      pcVar6 = "index out of range";
    }
    uVar3 = FUN_00580398(1,pcVar6);
  }
  else {
                    /* try { // try from 00480da8 to 00480daf has its CatchHandler @ 00480eb0 */
    uVar3 = FUN_0058044c(&local_48);
  }
LAB_00480e5c:
  pvVar5 = local_48;
  local_48 = (void *)0x0;
  if (pvVar5 != (void *)0x0) {
    if ((*(byte *)((long)pvVar5 + 8) & 1) != 0) {
      free(*(void **)((long)pvVar5 + 0x18));
    }
    free(pvVar5);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 00480f64  FUN_00480f64 =====

undefined8 FUN_00480f64(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
                    /* try { // try from 00480f78 to 00480f7b has its CatchHandler @ 00480f94 */
  uVar1 = (**(code **)(param_1 + 8))();
  *param_3 = uVar1;
  return 0;
}


// ===== 00481024  FUN_00481024 =====

undefined8 FUN_00481024(long param_1)

{
                    /* try { // try from 00481034 to 00481037 has its CatchHandler @ 00481048 */
  (**(code **)(param_1 + 0x10))();
  return 0;
}


// ===== 004810d8  FUN_004810d8 =====

undefined8 FUN_004810d8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
                    /* try { // try from 004810ec to 004810ef has its CatchHandler @ 00481108 */
  uVar1 = (**(code **)(param_1 + 0x18))();
  *param_2 = uVar1;
  return 0;
}


// ===== 00481198  FUN_00481198 =====

void FUN_00481198(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_005ccbc4(param_1,&local_3c);
  if (lVar2 == 0) {
    if (local_3c == 2) {
      if ((*(long *)(param_1 + 0x10) != 0) && (*(int *)(*(long *)(param_1 + 0x10) + 8) == 3)) {
                    /* try { // try from 00481200 to 00481207 has its CatchHandler @ 00481274 */
        lVar3 = FUN_0048537c(param_1);
        lVar2 = 0;
        *param_2 = (*(long *)(lVar3 + 0x10) - *(long *)(lVar3 + 8) >> 3) * -0x5555555555555555;
        if (*(long *)(lVar1 + 0x28) == local_38) {
          return;
        }
        goto LAB_00481304;
      }
LAB_00481240:
      pcVar4 = "Map type is not supported in this build.";
    }
    else {
      if (local_3c == 3) goto LAB_00481240;
      pcVar4 = "Input is not of type sequence or map.";
    }
    lVar2 = FUN_00580398(1,pcVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_00481304:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar2);
}


// ===== 0048130c  FUN_0048130c =====

undefined8 FUN_0048130c(long *param_1,ulong param_2,void *param_3,ulong param_4,long param_5)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  void *local_a0;
  void *pvStack_98;
  void *local_90;
  void *pvStack_88;
  void *local_80;
  void *pvStack_78;
  undefined1 uStack_69;
  undefined1 auStack_68 [32];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_005cabcc(param_1 + 3);
  if ((long)uVar2 < 0) {
    if (*(long *)(lVar1 + 0x28) == local_48) {
      plVar4 = (long *)FUN_00753a74(8);
      *plVar4 = (long)(PTR_DAT_007a1ef8 + 0x10);
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(plVar4,PTR_PTR_007a1f00,PTR_FUN_007a11e0);
    }
  }
  else if (param_4 < uVar2) {
    if (*(long *)(lVar1 + 0x28) == local_48) {
      uVar3 = FUN_00580398(2,"input array is too short");
      return uVar3;
    }
  }
  else {
    if ((param_2 & 1) == 0) {
      memcpy((void *)(*param_1 + param_1[0xf]),param_3,param_5 * param_4);
    }
    else {
      if ((param_4 == 0xffffffffffffffff) || ((param_3 == (void *)0x0 && (param_4 != 0)))) {
                    /* WARNING: Subroutine does not return */
        FUN_004839bc();
      }
      uVar3 = FUN_0047e188(param_1);
      pvStack_98 = (void *)((long)param_3 + param_4 * 0x18);
      local_a0 = param_3;
      local_90 = pvStack_98;
      pvStack_88 = param_3;
      local_80 = pvStack_98;
      pvStack_78 = param_3;
      FUN_00487748(auStack_68,&uStack_69,&pvStack_88,&local_a0,uVar3);
    }
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00481460  FUN_00481460 =====

void FUN_00481460(long param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  bool bVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *__ptr;
  long lVar5;
  char *pcVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int local_74;
  undefined8 *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)FUN_005ccbc4(param_1,&local_74);
  if (plVar3 == (long *)0x0) {
    if (local_74 == 2) {
      if ((*(long *)(param_1 + 0x10) == 0) || (*(int *)(*(long *)(param_1 + 0x10) + 8) != 3))
      goto LAB_004815dc;
                    /* try { // try from 004814dc to 004814fb has its CatchHandler @ 00481668 */
      uVar4 = FUN_0048537c(param_1);
      FUN_00485538(uVar4,(long)param_2);
      plVar3 = (long *)FUN_00483570();
      __ptr = (undefined8 *)FUN_00759c3c(0x18);
      lVar9 = plVar3[3];
      *__ptr = 0;
      __ptr[1] = 0;
      __ptr[2] = 0;
      local_70 = __ptr;
      if (lVar9 == -1) {
LAB_00481624:
                    /* WARNING: Subroutine does not return */
        FUN_004839bc();
      }
      lVar8 = plVar3[0xb];
      lVar10 = plVar3[4];
      if ((lVar9 != 0) && (lVar10 == 0)) goto LAB_00481624;
      lVar11 = *plVar3;
      lVar12 = plVar3[0xf];
                    /* try { // try from 00481530 to 0048158f has its CatchHandler @ 00481674 */
      lVar5 = FUN_005cabcc(plVar3 + 3);
      if (lVar5 < 0) {
        plVar3 = (long *)FUN_00753a74(8);
        *plVar3 = (long)(PTR_DAT_007a1ef8 + 0x10);
        if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* try { // try from 00481650 to 00481663 has its CatchHandler @ 00481674 */
                    /* WARNING: Subroutine does not return */
          FUN_00753c5c(plVar3,PTR_PTR_007a1f00,PTR_FUN_007a11e0);
        }
        goto LAB_00481664;
      }
      FUN_00477fa8(lVar8,lVar10,lVar9,param_3,__ptr);
      uVar4 = FUN_0047dea4(__ptr);
      bVar2 = false;
      if ((lVar8 != 0) && (*(int *)(lVar8 + 8) == 6)) {
        bVar2 = *(int *)(lVar8 + 0x18) == 8;
      }
      plVar3 = (long *)FUN_0048130c(uVar4,bVar2,lVar11 + lVar12,lVar5,*(undefined8 *)(lVar8 + 0x10))
      ;
      if (plVar3 == (long *)0x0) {
        *param_4 = __ptr;
      }
      else {
        plVar7 = (long *)__ptr[1];
        local_70 = (undefined8 *)0x0;
        if ((plVar7 != (long *)0x0) &&
           (lVar9 = FUN_00755c50(0xffffffffffffffff,plVar7 + 1), lVar9 == 0)) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          FUN_0071245c(plVar7);
        }
        free(__ptr);
      }
    }
    else {
      if (local_74 == 3) {
LAB_004815dc:
        pcVar6 = "Map type is not supported in this build.";
      }
      else {
        pcVar6 = "Input is not of type sequence or map.";
      }
      plVar3 = (long *)FUN_00580398(1,pcVar6);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
LAB_00481664:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar3);
}


// ===== 0048170c  FUN_0048170c =====

void FUN_0048170c(long *param_1,long param_2,int param_3,undefined8 *param_4)

{
  long lVar1;
  long *plVar2;
  undefined8 *__ptr;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  void *__ptr_00;
  char *pcVar6;
  long lVar7;
  void *pvVar8;
  void *pvVar9;
  uint local_f4;
  undefined8 local_f0;
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined8 *local_b8 [10];
  undefined8 *local_68;
  char *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (param_2 == 0) {
    if (*(long *)(lVar1 + 0x28) == local_58) {
      pcVar6 = "Number of values should be at least 1.";
      goto LAB_004818e0;
    }
  }
  else if (param_3 == 2) {
    plVar2 = (long *)FUN_005ccbc4(*param_1,&local_f4);
    if (plVar2 == (long *)0x0) {
      if ((local_f4 & 0xfffffffd) == 1) {
        lVar7 = 0;
        do {
          plVar2 = (long *)FUN_005ccbc4(param_1[lVar7],local_b8);
          if (plVar2 != (long *)0x0) goto LAB_00481934;
          if ((uint)local_b8[0] != local_f4) {
            pcVar6 = "At least one element in the sequence is of a type different from others.";
            goto LAB_0048192c;
          }
          lVar7 = lVar7 + 1;
        } while (param_2 != lVar7);
        if ((uint)local_b8[0] == 3) {
          pcVar6 = "Map type is not supported in this build.";
        }
        else {
          if ((uint)local_b8[0] == 1) {
                    /* try { // try from 004817f4 to 00481803 has its CatchHandler @ 00481ac8 */
            lVar7 = FUN_00483570(*param_1);
            lVar7 = *(long *)(lVar7 + 0x58);
            __ptr = (undefined8 *)FUN_00759c3c(0x20);
            __ptr[1] = 0;
            *__ptr = 0;
            __ptr[3] = 0;
            __ptr[2] = 0;
                    /* try { // try from 00481810 to 00481817 has its CatchHandler @ 00481ab0 */
            FUN_00485950(__ptr,lVar7);
                    /* try { // try from 0048181c to 00481827 has its CatchHandler @ 00481aac */
            local_68 = __ptr;
            FUN_00485aec(__ptr + 1,param_2);
            do {
              if ((*(long *)(*param_1 + 0x10) == 0) ||
                 (*(int *)(*(long *)(*param_1 + 0x10) + 8) != 2)) {
                uVar5 = FUN_00753a74(0x88);
                    /* try { // try from 00481a0c to 00481a13 has its CatchHandler @ 00481b28 */
                FUN_00645c30(auStack_d0);
                    /* try { // try from 00481a14 to 00481a33 has its CatchHandler @ 00481b14 */
                FUN_0047488c(local_b8,
                             "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/onnxruntime_c_api.cc"
                             ,0x71e,
                             "OrtStatus *OrtCreateValueImplSeqHelper(const OrtValue *const *, size_t, OrtValue **)"
                             ,auStack_d0);
                    /* try { // try from 00481a3c to 00481a3f has its CatchHandler @ 00481af0 */
                local_f0 = FUN_00576cac(*(undefined8 *)(*param_1 + 0x10));
                local_60 = "Expecting all elements to be tensors. Got: ";
                FUN_004839f8(auStack_e8,&local_60,&local_f0);
                    /* try { // try from 00481a64 to 00481aa7 has its CatchHandler @ 00481ad4 */
                param_1 = (long *)FUN_00474a40(uVar5,local_b8,"in[idx]->IsTensor()",auStack_e8);
                if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
                  FUN_00753c5c(uVar5,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
                }
                goto LAB_004819fc;
              }
                    /* try { // try from 00481840 to 0048185b has its CatchHandler @ 00481b3c */
              lVar3 = FUN_00483570();
              if (*(long *)(lVar3 + 0x58) != lVar7) {
                param_1 = (long *)FUN_00580398(1,
                                               "Sequences must have tensors of the same data type. There was at least one tensor in the input that was different."
                                              );
                pvVar8 = (void *)__ptr[1];
                local_68 = (undefined8 *)0x0;
                if (pvVar8 != (void *)0x0) {
                  pvVar9 = (void *)__ptr[2];
                  __ptr_00 = pvVar8;
                  if (pvVar9 != pvVar8) {
                    do {
                      plVar2 = *(long **)((long)pvVar9 + -0x10);
                      if ((plVar2 != (long *)0x0) &&
                         (lVar7 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar7 == 0)) {
                        (**(code **)(*plVar2 + 0x10))(plVar2);
                        FUN_0071245c(plVar2);
                      }
                      pvVar9 = (void *)((long)pvVar9 + -0x18);
                    } while (pvVar9 != pvVar8);
                    __ptr_00 = (void *)__ptr[1];
                  }
                  __ptr[2] = pvVar8;
                  free(__ptr_00);
                }
                free(__ptr);
                if (*(long *)(lVar1 + 0x28) == local_58) {
                  return;
                }
                goto LAB_004819fc;
              }
              FUN_004856c0(__ptr,*param_1);
              param_2 = param_2 + -1;
              param_1 = param_1 + 1;
            } while (param_2 != 0);
                    /* try { // try from 00481868 to 0048186f has its CatchHandler @ 00481aa8 */
            puVar4 = (undefined8 *)FUN_00759c3c(0x18);
            *puVar4 = 0;
            puVar4[1] = 0;
            puVar4[2] = 0;
            local_b8[0] = puVar4;
                    /* try { // try from 00481880 to 004818a7 has its CatchHandler @ 00481ab4 */
            plVar2 = (long *)FUN_0056bb70();
            local_68 = (undefined8 *)0x0;
            uVar5 = (**(code **)(*plVar2 + 0x18))();
            FUN_00485c34(puVar4,__ptr,uVar5);
            param_1 = (long *)0x0;
            puVar4[2] = plVar2;
            *param_4 = puVar4;
            if (*(long *)(lVar1 + 0x28) == local_58) {
              return;
            }
            goto LAB_004819fc;
          }
          pcVar6 = "Unsupported input type";
        }
      }
      else {
        pcVar6 = "Each element of the sequence should be either tensor or map.";
      }
LAB_0048192c:
      plVar2 = (long *)FUN_00580398(1,pcVar6);
    }
LAB_00481934:
    param_1 = plVar2;
    if (*(long *)(lVar1 + 0x28) == local_58) {
      return;
    }
  }
  else if (param_3 == 3) {
    if (*(long *)(lVar1 + 0x28) == local_58) {
      pcVar6 = "Map type is not supported in this build.";
LAB_004818e0:
      FUN_00580398(1,pcVar6);
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_58) {
    pcVar6 = "Input is not of type sequence or map.";
    goto LAB_004818e0;
  }
LAB_004819fc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00481bd0  FUN_00481bd0 =====

void FUN_00481bd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined8 *local_b0 [10];
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60[0] = 0xe;
  local_60[8] = 0;
  local_60[1] = 0x6f;
  local_60[2] = 0x70;
  local_60[3] = 0x61;
  local_60[4] = 0x71;
  local_60[5] = 0x75;
  local_60[6] = 0x65;
  local_60[7] = 0x28;
                    /* try { // try from 00481c2c to 00481c53 has its CatchHandler @ 00481f08 */
  uVar2 = FUN_00713bdc(local_60,param_1);
  uVar2 = FUN_00713bdc(uVar2,&DAT_001ce2ff);
  uVar2 = FUN_00713bdc(uVar2,param_2);
  FUN_00713bdc(uVar2,&DAT_001d047f);
                    /* try { // try from 00481c54 to 00481c5b has its CatchHandler @ 00481f04 */
  plVar3 = (long *)FUN_00576bc0(local_60);
  if (plVar3 == (long *)0x0) {
    uVar2 = FUN_00753a74(0x88);
                    /* try { // try from 00481cf0 to 00481cf7 has its CatchHandler @ 00481ec8 */
    FUN_00645c30(auStack_c8);
                    /* try { // try from 00481cf8 to 00481d17 has its CatchHandler @ 00481eb0 */
    FUN_0047488c(local_b0,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/onnxruntime_c_api.cc"
                 ,0x7e0,
                 "OrtStatusPtr OrtApis::CreateOpaqueValue(const char *, const char *, const void *, size_t, OrtValue **)"
                 ,auStack_c8);
                    /* try { // try from 00481d18 to 00481d27 has its CatchHandler @ 00481e88 */
    FUN_00479eac(auStack_e0,
                 "Specified domain and type names combination does not refer to a registered opaque type"
                );
                    /* try { // try from 00481d2c to 00481d6f has its CatchHandler @ 00481e08 */
    uVar5 = FUN_00474a40(uVar2,local_b0,"ml_type != nullptr",auStack_e0);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar2,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
  }
  else if ((int)plVar3[1] == 1) {
                    /* try { // try from 00481c70 to 00481c77 has its CatchHandler @ 00481f00 */
    puVar4 = (undefined8 *)FUN_00759c3c(0x18);
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    local_b0[0] = puVar4;
                    /* try { // try from 00481c90 to 00481ca3 has its CatchHandler @ 00481ee4 */
    (**(code **)(*plVar3 + 0x30))(plVar3,param_3,param_4,puVar4);
    *param_5 = puVar4;
    if ((local_60[0] & 1) != 0) {
      free(local_50);
    }
    uVar5 = 0;
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
  else {
    uVar2 = FUN_00753a74(0x88);
                    /* try { // try from 00481d80 to 00481d87 has its CatchHandler @ 00481ec4 */
    FUN_00645c30(auStack_c8);
                    /* try { // try from 00481d88 to 00481da7 has its CatchHandler @ 00481eac */
    FUN_0047488c(local_b0,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/onnxruntime_c_api.cc"
                 ,0x7e2,
                 "OrtStatusPtr OrtApis::CreateOpaqueValue(const char *, const char *, const void *, size_t, OrtValue **)"
                 ,auStack_c8);
                    /* try { // try from 00481da8 to 00481db7 has its CatchHandler @ 00481e04 */
    FUN_00479eac(auStack_e0,"Opaque type is not a non_tensor type!!!");
                    /* try { // try from 00481dbc to 00481dff has its CatchHandler @ 00481e00 */
    uVar5 = FUN_00474a40(uVar2,local_b0,"non_tensor_base != nullptr",auStack_e0);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar2,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


// ===== 00481f90  FUN_00481f90 =====

void FUN_00481f90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [80];
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60[0] = 0xe;
  local_60[8] = 0;
  local_60[1] = 0x6f;
  local_60[2] = 0x70;
  local_60[3] = 0x61;
  local_60[4] = 0x71;
  local_60[5] = 0x75;
  local_60[6] = 0x65;
  local_60[7] = 0x28;
                    /* try { // try from 00481fec to 00482013 has its CatchHandler @ 00482288 */
  uVar2 = FUN_00713bdc(local_60,param_1);
  uVar2 = FUN_00713bdc(uVar2,&DAT_001ce2ff);
  uVar2 = FUN_00713bdc(uVar2,param_2);
  FUN_00713bdc(uVar2,&DAT_001d047f);
                    /* try { // try from 00482014 to 0048201b has its CatchHandler @ 00482284 */
  plVar3 = (long *)FUN_00576bc0(local_60);
  if (plVar3 == (long *)0x0) {
    uVar2 = FUN_00753a74(0x88);
                    /* try { // try from 0048208c to 00482093 has its CatchHandler @ 00482264 */
    FUN_00645c30(auStack_c8);
                    /* try { // try from 00482094 to 004820b3 has its CatchHandler @ 0048224c */
    FUN_0047488c(auStack_b0,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/onnxruntime_c_api.cc"
                 ,0x7f1,
                 "OrtStatusPtr OrtApis::GetOpaqueValue(const char *, const char *, const OrtValue *, void *, size_t)"
                 ,auStack_c8);
                    /* try { // try from 004820b4 to 004820c3 has its CatchHandler @ 00482224 */
    FUN_00479eac(auStack_e0,
                 "Specified domain and type names combination does not refer to a registered opaque type"
                );
                    /* try { // try from 004820c8 to 0048210b has its CatchHandler @ 004821a4 */
    uVar4 = FUN_00474a40(uVar2,auStack_b0,"ml_type != nullptr",auStack_e0);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar2,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
  }
  else if ((int)plVar3[1] == 1) {
                    /* try { // try from 00482034 to 00482043 has its CatchHandler @ 00482280 */
    (**(code **)(*plVar3 + 0x38))(plVar3,param_3,param_5,param_4);
    if ((local_60[0] & 1) != 0) {
      free(local_50);
    }
    uVar4 = 0;
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
  else {
    uVar2 = FUN_00753a74(0x88);
                    /* try { // try from 0048211c to 00482123 has its CatchHandler @ 00482260 */
    FUN_00645c30(auStack_c8);
                    /* try { // try from 00482124 to 00482143 has its CatchHandler @ 00482248 */
    FUN_0047488c(auStack_b0,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/onnxruntime_c_api.cc"
                 ,0x7f3,
                 "OrtStatusPtr OrtApis::GetOpaqueValue(const char *, const char *, const OrtValue *, void *, size_t)"
                 ,auStack_c8);
                    /* try { // try from 00482144 to 00482153 has its CatchHandler @ 004821a0 */
    FUN_00479eac(auStack_e0,"Opaque type is not a non_tensor type!!!");
                    /* try { // try from 00482158 to 0048219b has its CatchHandler @ 0048219c */
    uVar4 = FUN_00474a40(uVar2,auStack_b0,"non_tensor_base != nullptr",auStack_e0);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar2,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


// ===== 00482310  FUN_00482310 =====

undefined8 FUN_00482310(undefined8 *param_1,int *param_2)

{
  ulong uVar1;
  ulong uVar2;
  size_t __n;
  byte bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  void *__s;
  byte *pbVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong *puVar12;
  ulong uVar13;
  undefined1 *__dest;
  int iVar14;
  ulong uVar15;
  ulong uVar16;
  byte *pbVar17;
  
                    /* try { // try from 00482334 to 00482337 has its CatchHandler @ 00482528 */
  plVar5 = (long *)FUN_004ab6e8();
  pbVar17 = (byte *)*plVar5;
  lVar4 = plVar5[1] - (long)pbVar17;
  if (lVar4 == 0) {
    *param_2 = 0;
    uVar6 = FUN_00580398(1,"Invalid build with no providers available");
    return uVar6;
  }
  lVar9 = lVar4 >> 3;
  uVar15 = lVar9 * -0x5555555555555555;
  if (lVar4 - 0x18U < 0x18) {
    lVar8 = 0;
    pbVar7 = pbVar17;
  }
  else {
    lVar11 = 0;
    lVar8 = 0;
    uVar16 = (lVar4 - 0x18U) / 0x18 + 1;
    uVar10 = uVar16 & 0x1ffffffffffffffe;
    pbVar7 = pbVar17 + uVar10 * 0x18;
    puVar12 = (ulong *)(pbVar17 + 0x20);
    uVar13 = uVar10;
    do {
      uVar1 = (ulong)(byte)((byte)puVar12[-4] >> 1);
      if (((byte)puVar12[-4] & 1) != 0) {
        uVar1 = puVar12[-3];
      }
      uVar2 = (ulong)(byte)((byte)puVar12[-1] >> 1);
      if (((byte)puVar12[-1] & 1) != 0) {
        uVar2 = *puVar12;
      }
      uVar13 = uVar13 - 2;
      lVar11 = lVar11 + uVar1 + 1;
      lVar8 = lVar8 + uVar2 + 1;
      puVar12 = puVar12 + 6;
    } while (uVar13 != 0);
    lVar8 = lVar8 + lVar11;
    if (uVar16 == uVar10) goto LAB_00482434;
  }
  do {
    bVar3 = *pbVar7;
    puVar12 = (ulong *)(pbVar7 + 8);
    pbVar7 = pbVar7 + 0x18;
    uVar16 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      uVar16 = *puVar12;
    }
    lVar8 = lVar8 + uVar16 + 1;
  } while (pbVar7 != (byte *)plVar5[1]);
LAB_00482434:
  uVar16 = lVar8 + lVar9 * 0x5555555555555558 + 7;
                    /* try { // try from 0048243c to 00482443 has its CatchHandler @ 00482524 */
  __s = (void *)thunk_FUN_00759c3c(uVar16 & 0xfffffffffffffff8);
  memset(__s,0,uVar16 & 0xfffffffffffffff8);
  uVar16 = 0;
  uVar13 = uVar15;
  if (uVar15 < 2) {
    uVar13 = 1;
  }
  pbVar17 = pbVar17 + 0x10;
  __dest = (undefined1 *)((long)__s + lVar9 * 0x5555555555555558);
  do {
    __n = (ulong)(pbVar17[-0x10] >> 1);
    pbVar7 = pbVar17 + -0xf;
    if ((pbVar17[-0x10] & 1) != 0) {
      __n = *(size_t *)(pbVar17 + -8);
      pbVar7 = *(byte **)pbVar17;
    }
    memcpy(__dest,pbVar7,__n);
    pbVar17 = pbVar17 + 0x18;
    __dest[__n] = 0;
    *(undefined1 **)((long)__s + uVar16 * 8) = __dest;
    uVar16 = uVar16 + 1;
    __dest = __dest + __n + 1;
  } while (uVar13 != uVar16);
  iVar14 = (int)uVar15;
  if ((uVar15 - (long)iVar14 == 0) && (-1 < iVar14)) {
    *param_2 = iVar14;
    *param_1 = __s;
    return 0;
  }
  plVar5 = (long *)FUN_00753a74(8);
  *plVar5 = (long)(PTR_DAT_007a1ef8 + 0x10);
                    /* try { // try from 004824fc to 0048250f has its CatchHandler @ 00482510 */
                    /* WARNING: Subroutine does not return */
  FUN_00753c5c(plVar5,PTR_PTR_007a1f00,PTR_FUN_007a11e0);
}


// ===== 004825b8  FUN_004825b8 =====

undefined8 FUN_004825b8(void *param_1)

{
  if (param_1 != (void *)0x0) {
    free(param_1);
  }
  return 0;
}


// ===== 004825d4  FUN_004825d4 =====

void FUN_004825d4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_3 = 0;
  FUN_00580398(2,"Specified provider is not supported.");
  return;
}


// ===== 004825e8  FUN_004825e8 =====

void FUN_004825e8(undefined8 param_1,long param_2,ulong param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  void *__s;
  char *pcVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
                    /* try { // try from 0048261c to 0048261f has its CatchHandler @ 00482870 */
  plVar6 = (long *)FUN_0047dea4();
  lVar14 = plVar6[0xb];
  if (*(int *)(lVar14 + 0x18) == 8) {
    if (*(long *)(lVar5 + 0x28) == local_58) {
      pcVar7 = "this API does not support strings";
LAB_00482758:
      FUN_00580398(2,pcVar7);
      return;
    }
    goto LAB_00482908;
  }
  if (plVar6[3] != param_3) {
    if (*(long *)(lVar5 + 0x28) == local_58) {
      pcVar7 = "location dimensions do not match shape size";
      goto LAB_00482758;
    }
    goto LAB_00482908;
  }
  if (param_3 == 0) {
    lVar14 = *plVar6;
    plVar12 = plVar6 + 0xf;
    plVar6 = (long *)0x0;
    *param_4 = lVar14 + *plVar12;
    if (*(long *)(lVar5 + 0x28) == local_58) {
      return;
    }
    goto LAB_00482908;
  }
  uVar8 = 0;
  do {
    lVar11 = *(long *)(param_2 + uVar8 * 8);
    if ((lVar11 < 0) || (*(long *)(plVar6[4] + uVar8 * 8) <= lVar11)) {
      if (*(long *)(lVar5 + 0x28) != local_58) goto LAB_00482908;
      pcVar7 = "invalid location range";
      goto LAB_00482758;
    }
    uVar8 = uVar8 + 1;
  } while (param_3 != uVar8);
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  if (param_3 >> 0x3d != 0) {
    if (*(long *)(lVar5 + 0x28) == local_58) {
                    /* try { // try from 00482848 to 0048284f has its CatchHandler @ 00482850 */
                    /* WARNING: Subroutine does not return */
      FUN_0034e528(&local_70);
    }
    goto LAB_00482908;
  }
                    /* try { // try from 004826a0 to 004826a7 has its CatchHandler @ 00482850 */
  __s = (void *)FUN_00759c3c(param_3 << 3);
  memset(__s,0,param_3 << 3);
  uVar8 = param_3 - 1;
  lVar11 = 1;
  do {
    *(long *)((long)__s + uVar8 * 8) = lVar11;
    if (param_3 <= uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_004839bc();
    }
    lVar10 = uVar8 * 8;
    uVar8 = uVar8 - 1;
    lVar11 = *(long *)(plVar6[4] + lVar10) * lVar11;
  } while (uVar8 != 0xffffffffffffffff);
  if (param_3 == 1) {
    uVar9 = 0;
    lVar11 = 0;
LAB_004827bc:
    lVar10 = param_3 - uVar9;
    plVar12 = (long *)(param_2 + uVar9 * 8);
    plVar13 = (long *)((long)__s + uVar9 * 8);
    do {
      lVar10 = lVar10 + -1;
      lVar11 = lVar11 + *plVar13 * *plVar12;
      plVar12 = plVar12 + 1;
      plVar13 = plVar13 + 1;
    } while (lVar10 != 0);
  }
  else {
    uVar9 = param_3 & 0x1ffffffffffffffe;
    lVar10 = 0;
    lVar11 = 0;
    plVar12 = (long *)(param_2 + 8);
    plVar13 = (long *)((long)__s + 8);
    uVar8 = uVar9;
    do {
      plVar1 = plVar13 + -1;
      lVar3 = *plVar13;
      uVar8 = uVar8 - 2;
      plVar2 = plVar12 + -1;
      lVar4 = *plVar12;
      plVar12 = plVar12 + 2;
      plVar13 = plVar13 + 2;
      lVar10 = lVar10 + *plVar1 * *plVar2;
      lVar11 = lVar11 + lVar3 * lVar4;
    } while (uVar8 != 0);
    lVar11 = lVar11 + lVar10;
    if (uVar9 != param_3) goto LAB_004827bc;
  }
  *param_4 = *plVar6 + plVar6[0xf] + *(long *)(lVar14 + 0x10) * lVar11;
  free(__s);
  plVar6 = (long *)0x0;
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
LAB_00482908:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar6);
}


// ===== 00482910  FUN_00482910 =====

undefined8 FUN_00482910(undefined8 param_1,undefined4 param_2)

{
  long *plVar1;
  
                    /* try { // try from 00482920 to 0048293f has its CatchHandler @ 00482950 */
  plVar1 = (long *)FUN_00641af0();
  plVar1 = (long *)(**(code **)(*plVar1 + 200))();
  (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
  return 0;
}


// ===== 004829e0  FUN_004829e0 =====

undefined8 FUN_004829e0(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  
                    /* try { // try from 004829f0 to 004829f3 has its CatchHandler @ 00482a10 */
  lVar1 = FUN_00495308();
  *param_2 = *(undefined8 *)(lVar1 + 0x188);
  return 0;
}


// ===== 00482aa0  FUN_00482aa0 =====

undefined8
FUN_00482aa0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
            undefined8 *param_5)

{
  undefined8 *puVar1;
  
                    /* try { // try from 00482ac0 to 00482ac7 has its CatchHandler @ 00482af4 */
  puVar1 = (undefined8 *)FUN_00759c3c(0x20);
  puVar1[2] = 0xffffffffffffffff;
  puVar1[3] = 0xffffffffffffffff;
  *puVar1 = param_1;
  *(undefined4 *)(puVar1 + 1) = param_2;
  *(undefined4 *)((long)puVar1 + 0xc) = param_3;
  *param_5 = puVar1;
  return 0;
}


// ===== 00482b88  FUN_00482b88 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00482b88(undefined8 *param_1,undefined8 *param_2,long param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 *__ptr;
  undefined8 uVar7;
  size_t sVar8;
  long lVar9;
  char *pcVar10;
  byte local_190;
  undefined1 auStack_18f [15];
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
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 00482bc4 to 00482bcb has its CatchHandler @ 00482eb0 */
  __ptr = (undefined8 *)FUN_00759c3c(0x20);
  *__ptr = 0;
  __ptr[1] = 0xffffffffffffffff;
  __ptr[2] = 0xffffffffffffffff;
  __ptr[3] = 0xffffffffffffffff;
  if (param_3 != 0) {
    do {
      pcVar10 = (char *)*param_1;
      iVar6 = strcmp(pcVar10,"max_mem");
      if (iVar6 == 0) {
        *__ptr = *param_2;
      }
      else {
        iVar6 = strcmp(pcVar10,"arena_extend_strategy");
        if (iVar6 == 0) {
          *(int *)(__ptr + 1) = (int)*param_2;
        }
        else {
          iVar6 = strcmp(pcVar10,"initial_chunk_size_bytes");
          if (iVar6 == 0) {
            *(int *)((long)__ptr + 0xc) = (int)*param_2;
          }
          else {
            iVar6 = strcmp(pcVar10,"max_dead_bytes_per_chunk");
            if (iVar6 == 0) {
              *(int *)(__ptr + 2) = (int)*param_2;
            }
            else {
              iVar6 = strcmp(pcVar10,"initial_growth_chunk_size_bytes");
              if (iVar6 == 0) {
                *(int *)((long)__ptr + 0x14) = (int)*param_2;
              }
              else {
                iVar6 = strcmp(pcVar10,"max_power_of_two_extend_bytes");
                puVar5 = PTR_PTR_007a1e48;
                puVar4 = PTR_DAT_007a1e40;
                if (iVar6 != 0) {
                  local_d8 = 0;
                  local_178[0] = *(undefined **)(PTR_PTR_007a1e48 + 8);
                  puVar1 = PTR_DAT_007a1e40 + 0x40;
                  local_108[0] = puVar1;
                  *(undefined8 *)((long)local_178 + *(long *)(local_178[0] + -0x18)) =
                       *(undefined8 *)(PTR_PTR_007a1e48 + 0x10);
                  lVar9 = *(long *)(local_178[0] + -0x18);
                    /* try { // try from 00482d48 to 00482d53 has its CatchHandler @ 00482e80 */
                  FUN_00715fc0((long)local_178 + lVar9,local_178 + 1);
                  local_178[0] = puVar4 + 0x18;
                  *(undefined8 *)((long)&uStack_f0 + lVar9) = 0;
                  *(undefined4 *)((long)auStack_e8 + lVar9) = 0xffffffff;
                    /* try { // try from 00482d6c to 00482d73 has its CatchHandler @ 00482e68 */
                  local_108[0] = puVar1;
                  FUN_007160dc(local_178 + 1);
                  puVar4 = PTR_DAT_007a10f8;
                  local_178[1] = PTR_DAT_007a10f8 + 0x10;
                  uStack_128 = 0;
                  local_130 = 0;
                  uStack_118 = 0;
                  local_120 = (void *)0x0;
                  local_110 = 0x10;
                    /* try { // try from 00482d94 to 00482dc7 has its CatchHandler @ 00482e94 */
                  uVar7 = FUN_00303e0c(local_178,"Invalid key found: ",0x13);
                  pcVar10 = (char *)*param_1;
                  sVar8 = strlen(pcVar10);
                  FUN_00303e0c(uVar7,pcVar10,sVar8);
                    /* try { // try from 00482dc8 to 00482dd7 has its CatchHandler @ 00482e64 */
                  FUN_00718470(&local_190,local_178 + 1);
                  puVar2 = local_180;
                  if ((local_190 & 1) == 0) {
                    puVar2 = auStack_18f;
                  }
                  uVar7 = FUN_00580398(2,puVar2);
                  if ((local_190 & 1) != 0) {
                    free(local_180);
                  }
                  local_178[0] = *(undefined **)puVar5;
                  *(undefined8 *)((long)local_178 + *(long *)(local_178[0] + -0x18)) =
                       *(undefined8 *)(puVar5 + 0x18);
                  local_178[1] = puVar4 + 0x10;
                  if ((local_130 & 1) != 0) {
                    free(local_120);
                  }
                  FUN_00716098(local_178 + 1);
                  FUN_00716ee4(local_178,puVar5 + 8);
                  thunk_FUN_00715e00(local_108);
                  free(__ptr);
                  goto LAB_00482cd8;
                }
                __ptr[3] = *param_2;
              }
            }
          }
        }
      }
      param_3 = param_3 + -1;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  uVar7 = 0;
  *param_4 = __ptr;
LAB_00482cd8:
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}


// ===== 00482f40  FUN_00482f40 =====

void FUN_00482f40(void *param_1)

{
  if (param_1 != (void *)0x0) {
    free(param_1);
    return;
  }
  return;
}


// ===== 00482f4c  FUN_00482f4c =====

undefined8 FUN_00482f4c(undefined8 *param_1)

{
  undefined4 *puVar1;
  
                    /* try { // try from 00482f5c to 00482f63 has its CatchHandler @ 00482fa4 */
  puVar1 = (undefined4 *)FUN_00759c3c(0x60);
  *puVar1 = 0;
  *(undefined8 *)(puVar1 + 10) = 0;
  puVar1[0xc] = 0x3f800000;
  *(undefined8 *)(puVar1 + 4) = 0;
  *(undefined8 *)(puVar1 + 2) = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined8 *)(puVar1 + 6) = 0;
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0xe) = 0;
  *(undefined8 *)(puVar1 + 0x14) = 0;
  *(undefined8 *)(puVar1 + 0x12) = 0;
  puVar1[0x16] = 0x3f800000;
  *param_1 = puVar1;
  return 0;
}


// ===== 00483034  FUN_00483034 =====

void FUN_00483034(void *param_1)

{
  if (param_1 != (void *)0x0) {
    FUN_00483060();
    free(param_1);
    return;
  }
  return;
}


// ===== 00483060  FUN_00483060 =====

void FUN_00483060(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  long lVar3;
  void *pvVar4;
  long *plVar5;
  
  puVar2 = (undefined8 *)*(void **)(param_1 + 0x48);
  while (puVar2 != (undefined8 *)0x0) {
    pvVar4 = (void *)*puVar2;
    FUN_00485d28(puVar2 + 2);
    free(puVar2);
    puVar2 = (undefined8 *)pvVar4;
  }
  pvVar4 = *(void **)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (pvVar4 != (void *)0x0) {
    free(pvVar4);
  }
  puVar2 = (undefined8 *)*(void **)(param_1 + 0x20);
  while (puVar2 != (undefined8 *)0x0) {
    plVar5 = (long *)puVar2[6];
    pvVar4 = (void *)*puVar2;
    if ((plVar5 == (long *)0x0) || (lVar3 = FUN_00755c50(0xffffffffffffffff,plVar5 + 1), lVar3 != 0)
       ) {
      bVar1 = *(byte *)(puVar2 + 2);
    }
    else {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      FUN_0071245c(plVar5);
      bVar1 = *(byte *)(puVar2 + 2);
    }
    if ((bVar1 & 1) != 0) {
      free((void *)puVar2[4]);
    }
    free(puVar2);
    puVar2 = (undefined8 *)pvVar4;
  }
  pvVar4 = *(void **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (pvVar4 == (void *)0x0) {
    return;
  }
  free(pvVar4);
  return;
}


// ===== 00483140  FUN_00483140 =====

void FUN_00483140(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  long lVar1;
  long lVar2;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = (long *)0x0;
  *param_5 = 0;
                    /* try { // try from 0048317c to 0048318f has its CatchHandler @ 00483208 */
  lVar2 = FUN_0047b730(param_3,param_1,param_2,0,0,&local_40);
                    /* try { // try from 00483194 to 004831a3 has its CatchHandler @ 004831fc */
  if ((lVar2 == 0) && (lVar2 = FUN_0047bb64(param_3,&local_40,param_4), lVar2 == 0)) {
    *param_5 = local_40;
  }
  else if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 8))(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar2);
}


// ===== 004832f8  FUN_004832f8 =====

void FUN_004832f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 *param_6)

{
  long lVar1;
  long lVar2;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = (long *)0x0;
  *param_6 = 0;
                    /* try { // try from 00483338 to 00483347 has its CatchHandler @ 004833c0 */
  lVar2 = FUN_0047b730(param_4,param_1,0,param_2,param_3,&local_40);
                    /* try { // try from 0048334c to 0048335b has its CatchHandler @ 004833b4 */
  if ((lVar2 == 0) && (lVar2 = FUN_0047bb64(param_4,&local_40,param_5), lVar2 == 0)) {
    *param_6 = local_40;
  }
  else if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 8))(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar2);
}


// ===== 004834b0  FUN_004834b0 =====

undefined8 FUN_004834b0(undefined8 param_1,long *param_2)

{
  long lVar1;
  
                    /* try { // try from 004834c0 to 004834c3 has its CatchHandler @ 004834e0 */
  lVar1 = FUN_00483570();
  *param_2 = lVar1 + 0x60;
  return 0;
}


// ===== 00483570  FUN_00483570 =====

void FUN_00483570(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_c8;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [80];
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((param_1[2] == 0) || (*(int *)(param_1[2] + 8) != 2)) {
    uVar3 = FUN_00753a74(0x88);
                    /* try { // try from 004835e0 to 004835e7 has its CatchHandler @ 00483708 */
    FUN_00645c30(auStack_a8);
                    /* try { // try from 004835e8 to 00483607 has its CatchHandler @ 004836f8 */
    FUN_0047488c(auStack_90,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/include/onnxruntime/core/framework/ort_value.h"
                 ,0x55,"const onnxruntime::Tensor &OrtValue::Get() const",auStack_a8);
                    /* try { // try from 0048360c to 0048360f has its CatchHandler @ 004836d8 */
    local_c8 = FUN_00576cac(param_1[2]);
    local_40 = "Trying to get a Tensor, but got: ";
    FUN_004839f8(auStack_c0,&local_40,&local_c8);
                    /* try { // try from 00483634 to 0048367b has its CatchHandler @ 0048367c */
    uVar2 = FUN_00474a40(uVar3,auStack_90,"IsTensor()",auStack_c0);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar3,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
  }
  else {
    uVar2 = *param_1;
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


// ===== 0048372c  FUN_0048372c =====

undefined8 FUN_0048372c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x180) = param_2;
  return 0;
}


// ===== 0048373c  FUN_0048373c =====

undefined8 FUN_0048373c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x188) = param_2;
  return 0;
}


// ===== 0048374c  FUN_0048374c =====

undefined8 FUN_0048374c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 400) = param_2;
  return 0;
}


// ===== 0048375c  FUN_0048375c =====

undefined8 FUN_0048375c(void)

{
  return 0;
}


// ===== 00483764  FUN_00483764 =====

undefined ** FUN_00483764(uint param_1)

{
  if (param_1 - 1 < 0x12) {
    return &PTR_FUN_0078f388;
  }
  fprintf(*(FILE **)PTR_stderr_007a1438,
          "The requested API version [%u] is not available, only API versions [1, %u] are supported in this build. Current ORT Version is: %s\n"
          ,(ulong)param_1,0x12,"1.18.1");
  return (undefined **)0x0;
}


// ===== 004837b8  FUN_004837b8 =====

char * FUN_004837b8(void)

{
  return "1.18.1";
}


// ===== 004837c4  FUN_004837c4 =====

char * FUN_004837c4(void)

{
  return 
  "ORT Build Info: git-branch=HEAD, git-commit-id=387127404e, build type=Release, cmake cxx flags: -g -DANDROID -fdata-sections -ffunction-sections -funwind-tables -fstack-protector-strong -no-canonical-prefixes -D_FORTIFY_SOURCE=2 -Wformat -Werror=format-security   -ffunction-sections -fdata-sections"
  ;
}


// ===== 004837d0  FUN_004837d0 =====

void FUN_004837d0(void)

{
                    /* try { // try from 004837d8 to 004837db has its CatchHandler @ 004837e4 */
  FUN_004a758c();
  return;
}


// ===== 004837e8  FUN_004837e8 =====

void FUN_004837e8(void *param_1)

{
  long lVar1;
  long *plVar2;
  
  if (param_1 == (void *)0x0) {
    return;
  }
  plVar2 = *(long **)((long)param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    free(param_1);
    return;
  }
  free(param_1);
  return;
}


// ===== 00483854  FUN_00483854 =====

void FUN_00483854(void *param_1)

{
  if (param_1 != (void *)0x0) {
    FUN_0047c3a8();
    free(param_1);
    return;
  }
  return;
}


// ===== 00483880  FUN_00483880 =====

void FUN_00483880(long *param_1)

{
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0048388c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))();
    return;
  }
  return;
}


// ===== 00483894  FUN_00483894 =====

void FUN_00483894(void *param_1)

{
  if (param_1 != (void *)0x0) {
    FUN_004838c0();
    free(param_1);
    return;
  }
  return;
}


// ===== 004838c0  FUN_004838c0 =====

void FUN_004838c0(byte *param_1)

{
  byte bVar1;
  undefined8 *__ptr;
  void *pvVar2;
  
  __ptr = (undefined8 *)*(void **)(param_1 + 0x90);
  while (__ptr != (undefined8 *)0x0) {
    pvVar2 = (void *)*__ptr;
    if ((*(byte *)(__ptr + 5) & 1) == 0) {
      bVar1 = *(byte *)(__ptr + 2);
    }
    else {
      free((void *)__ptr[7]);
      bVar1 = *(byte *)(__ptr + 2);
    }
    if ((bVar1 & 1) != 0) {
      free((void *)__ptr[4]);
    }
    free(__ptr);
    __ptr = (undefined8 *)pvVar2;
  }
  pvVar2 = *(void **)(param_1 + 0x80);
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  if (pvVar2 != (void *)0x0) {
    free(pvVar2);
  }
  if ((param_1[0x60] & 1) == 0) {
    bVar1 = param_1[0x48];
  }
  else {
    free(*(void **)(param_1 + 0x70));
    bVar1 = param_1[0x48];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = param_1[0x30];
  }
  else {
    free(*(void **)(param_1 + 0x58));
    bVar1 = param_1[0x30];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = param_1[0x18];
  }
  else {
    free(*(void **)(param_1 + 0x40));
    bVar1 = param_1[0x18];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *param_1;
  }
  else {
    free(*(void **)(param_1 + 0x28));
    bVar1 = *param_1;
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  free(*(void **)(param_1 + 0x10));
  return;
}


// ===== 004839bc  FUN_004839bc =====

void FUN_004839bc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00739f00();
}


// ===== 004839c8  FUN_004839c8 =====

void FUN_004839c8(void *param_1)

{
  FUN_0073a174();
  free(param_1);
  return;
}


// ===== 004839ec  FUN_004839ec =====

char * FUN_004839ec(void)

{
  return "narrowing_error";
}


// ===== 004839f8  FUN_004839f8 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_004839f8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  size_t sVar5;
  long lVar6;
  char *pcVar7;
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
                    /* try { // try from 00483a6c to 00483a77 has its CatchHandler @ 00483bac */
  FUN_00715fc0((long)local_170 + lVar6,local_170 + 1);
  local_170[0] = puVar3 + 0x18;
  *(undefined8 *)((long)&uStack_e8 + lVar6) = 0;
  *(undefined4 *)((long)auStack_e0 + lVar6) = 0xffffffff;
                    /* try { // try from 00483a90 to 00483a97 has its CatchHandler @ 00483b8c */
  local_100[0] = puVar1;
  FUN_007160dc(local_170 + 1);
  puVar1 = PTR_DAT_007a10f8;
  pcVar7 = (char *)*param_2;
  local_170[1] = PTR_DAT_007a10f8 + 0x10;
  uStack_120 = 0;
  local_128 = 0;
  uStack_110 = 0;
  local_118 = (void *)0x0;
  local_108 = 0x10;
  sVar5 = strlen(pcVar7);
                    /* try { // try from 00483acc to 00483ad7 has its CatchHandler @ 00483b88 */
  FUN_00303e0c(local_170,pcVar7,sVar5);
  pcVar7 = (char *)*param_3;
  sVar5 = strlen(pcVar7);
                    /* try { // try from 00483ae8 to 00483af3 has its CatchHandler @ 00483b84 */
  FUN_00303e0c(local_170,pcVar7,sVar5);
                    /* try { // try from 00483af4 to 00483aff has its CatchHandler @ 00483b80 */
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


// ===== 00483bc0  FUN_00483bc0 =====

void FUN_00483bc0(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar3 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar3;
  if ((*(byte *)(param_2 + 2) & 1) == 0) {
    uVar4 = param_2[3];
    uVar3 = param_2[2];
    param_1[4] = param_2[4];
    param_1[3] = uVar4;
    param_1[2] = uVar3;
  }
  else {
    FUN_002fb36c(param_1 + 2,param_2[4],param_2[3]);
  }
  uVar1 = *(undefined1 *)((long)param_2 + 0x2a);
  *(undefined2 *)(param_1 + 5) = *(undefined2 *)(param_2 + 5);
  *(undefined1 *)((long)param_1 + 0x2a) = uVar1;
  if ((*(byte *)(param_2 + 6) & 1) == 0) {
    uVar4 = param_2[7];
    uVar3 = param_2[6];
    param_1[8] = param_2[8];
    param_1[7] = uVar4;
    param_1[6] = uVar3;
  }
  else {
                    /* try { // try from 00483c44 to 00483c4b has its CatchHandler @ 00483db0 */
    FUN_002fb36c(param_1 + 6,param_2[8],param_2[7]);
  }
  if ((*(byte *)(param_2 + 9) & 1) == 0) {
    uVar4 = param_2[10];
    uVar3 = param_2[9];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar4;
    param_1[9] = uVar3;
  }
  else {
                    /* try { // try from 00483c70 to 00483c77 has its CatchHandler @ 00483da0 */
    FUN_002fb36c(param_1 + 9,param_2[0xb],param_2[10]);
  }
  uVar3 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar3;
  uVar3 = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar3;
  if ((*(byte *)(param_2 + 0x10) & 1) == 0) {
    uVar4 = param_2[0x11];
    uVar3 = param_2[0x10];
    param_1[0x12] = param_2[0x12];
    param_1[0x11] = uVar4;
    param_1[0x10] = uVar3;
  }
  else {
                    /* try { // try from 00483cac to 00483cb3 has its CatchHandler @ 00483d90 */
    FUN_002fb36c(param_1 + 0x10,param_2[0x12],param_2[0x11]);
  }
  uVar4 = param_2[0x16];
  uVar3 = param_2[0x15];
  uVar6 = param_2[0x14];
  uVar5 = param_2[0x13];
  param_1[0x17] = param_2[0x17];
  param_1[0x16] = uVar4;
  param_1[0x15] = uVar3;
  param_1[0x14] = uVar6;
  param_1[0x13] = uVar5;
  uVar3 = param_2[0x18];
  param_1[0x19] = param_2[0x19];
  param_1[0x18] = uVar3;
  if ((*(byte *)(param_2 + 0x1a) & 1) == 0) {
    uVar4 = param_2[0x1b];
    uVar3 = param_2[0x1a];
    param_1[0x1c] = param_2[0x1c];
    param_1[0x1b] = uVar4;
    param_1[0x1a] = uVar3;
  }
  else {
                    /* try { // try from 00483cf8 to 00483cff has its CatchHandler @ 00483d80 */
    FUN_002fb36c(param_1 + 0x1a,param_2[0x1c],param_2[0x1b]);
  }
  uVar5 = param_2[0x20];
  uVar4 = param_2[0x1f];
  uVar7 = param_2[0x1e];
  uVar6 = param_2[0x1d];
  uVar3 = param_2[0x21];
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x20] = uVar5;
  param_1[0x1f] = uVar4;
  param_1[0x1e] = uVar7;
  param_1[0x1d] = uVar6;
  param_1[0x21] = uVar3;
  param_1[0x22] = 0;
                    /* try { // try from 00483d34 to 00483d3b has its CatchHandler @ 00483de0 */
  FUN_00484230(param_1 + 0x22,param_2[0x22],param_2[0x23],
               ((long)(param_2[0x23] - param_2[0x22]) >> 3) * -0x3333333333333333);
  uVar2 = *(undefined2 *)(param_2 + 0x25);
  *(undefined1 *)((long)param_1 + 0x12a) = *(undefined1 *)((long)param_2 + 0x12a);
  *(undefined2 *)(param_1 + 0x25) = uVar2;
                    /* try { // try from 00483d4c to 00483d57 has its CatchHandler @ 00483dd0 */
  FUN_00480444(param_1 + 0x26,param_2 + 0x26);
                    /* try { // try from 00483d58 to 00483d63 has its CatchHandler @ 00483dc0 */
  FUN_00483fec(param_1 + 0x2b,param_2 + 0x2b);
  uVar6 = param_2[0x31];
  uVar5 = param_2[0x30];
  uVar4 = param_2[0x33];
  uVar3 = param_2[0x32];
  param_1[0x34] = param_2[0x34];
  param_1[0x31] = uVar6;
  param_1[0x30] = uVar5;
  param_1[0x33] = uVar4;
  param_1[0x32] = uVar3;
  return;
}


// ===== 00483e64  FUN_00483e64 =====

void FUN_00483e64(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  void *pvVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  puVar2 = (undefined8 *)*(void **)(param_1 + 0x168);
  while (puVar2 != (undefined8 *)0x0) {
    pvVar3 = (void *)*puVar2;
    if ((*(byte *)(puVar2 + 2) & 1) != 0) {
      free((void *)puVar2[4]);
    }
    free(puVar2);
    puVar2 = (undefined8 *)pvVar3;
  }
  pvVar3 = *(void **)(param_1 + 0x158);
  *(undefined8 *)(param_1 + 0x158) = 0;
  if (pvVar3 != (void *)0x0) {
    free(pvVar3);
  }
  puVar2 = (undefined8 *)*(void **)(param_1 + 0x140);
  while (puVar2 != (undefined8 *)0x0) {
    pvVar3 = (void *)*puVar2;
    if ((*(byte *)(puVar2 + 5) & 1) == 0) {
      bVar1 = *(byte *)(puVar2 + 2);
    }
    else {
      free((void *)puVar2[7]);
      bVar1 = *(byte *)(puVar2 + 2);
    }
    if ((bVar1 & 1) != 0) {
      free((void *)puVar2[4]);
    }
    free(puVar2);
    puVar2 = (undefined8 *)pvVar3;
  }
  pvVar3 = *(void **)(param_1 + 0x130);
  *(undefined8 *)(param_1 + 0x130) = 0;
  if (pvVar3 != (void *)0x0) {
    free(pvVar3);
  }
  pbVar5 = *(byte **)(param_1 + 0x110);
  if (pbVar5 != (byte *)0x0) {
    pbVar4 = *(byte **)(param_1 + 0x118);
    pbVar6 = pbVar5;
    if (pbVar4 != pbVar5) {
      do {
        pbVar6 = pbVar4 + -0x28;
        if ((*pbVar6 & 1) != 0) {
          free(*(void **)(pbVar4 + -0x18));
        }
        pbVar4 = pbVar6;
      } while (pbVar6 != pbVar5);
      pbVar6 = *(byte **)(param_1 + 0x110);
    }
    *(byte **)(param_1 + 0x118) = pbVar5;
    free(pbVar6);
  }
  if ((*(byte *)(param_1 + 0xd0) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x80);
  }
  else {
    free(*(void **)(param_1 + 0xe0));
    bVar1 = *(byte *)(param_1 + 0x80);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x48);
  }
  else {
    free(*(void **)(param_1 + 0x90));
    bVar1 = *(byte *)(param_1 + 0x48);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x30);
  }
  else {
    free(*(void **)(param_1 + 0x58));
    bVar1 = *(byte *)(param_1 + 0x30);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x10);
  }
  else {
    free(*(void **)(param_1 + 0x40));
    bVar1 = *(byte *)(param_1 + 0x10);
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  free(*(void **)(param_1 + 0x20));
  return;
}


// ===== 00483fec  FUN_00483fec =====

void FUN_00483fec(undefined8 *param_1,long param_2)

{
  bool bVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  undefined2 uVar6;
  undefined8 uVar7;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  uVar4 = *(ulong *)(param_2 + 8);
  if (uVar4 - 1 == 0) {
    uVar4 = 2;
  }
  else if ((uVar4 & uVar4 - 1) == 0) {
    uVar5 = 0;
    bVar1 = true;
    if (uVar4 == 0) {
LAB_00484058:
      if (bVar1) goto LAB_004840d0;
      uVar2 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar5 < 3) {
LAB_004840b0:
        uVar2 = FUN_00711ce0();
      }
      else {
        uVar7 = NEON_cnt(uVar5,1);
        uVar6 = NEON_uaddlv(uVar7,1);
        if (1 < (CONCAT62((int6)((ulong)uVar7 >> 0x10),uVar6) & 0xffffffff)) goto LAB_004840b0;
        if (1 < uVar2) {
          uVar2 = 1L << (-LZCOUNT(uVar2 - 1) & 0x3fU);
        }
      }
      if (uVar4 <= uVar2) {
        uVar4 = uVar2;
      }
      if (uVar5 <= uVar4) goto LAB_004840d0;
    }
  }
  else {
                    /* try { // try from 00484040 to 004840cf has its CatchHandler @ 00484100 */
    uVar4 = FUN_00711ce0(uVar4);
    uVar5 = param_1[1];
    bVar1 = uVar5 <= uVar4;
    if (uVar4 <= uVar5) goto LAB_00484058;
  }
  FUN_00484510(param_1,uVar4);
LAB_004840d0:
  for (plVar3 = *(long **)(param_2 + 0x10); plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
                    /* try { // try from 004840d8 to 004840e7 has its CatchHandler @ 00484114 */
    FUN_004846e8(param_1,plVar3 + 2,plVar3 + 2);
  }
  return;
}


// ===== 00484128  FUN_00484128 =====

void FUN_00484128(undefined8 *param_1)

{
  byte bVar1;
  undefined8 *__ptr;
  void *pvVar2;
  
  __ptr = (undefined8 *)param_1[2];
  while (__ptr != (undefined8 *)0x0) {
    pvVar2 = (void *)*__ptr;
    if ((*(byte *)(__ptr + 5) & 1) == 0) {
      bVar1 = *(byte *)(__ptr + 2);
    }
    else {
      free((void *)__ptr[7]);
      bVar1 = *(byte *)(__ptr + 2);
    }
    if ((bVar1 & 1) != 0) {
      free((void *)__ptr[4]);
    }
    free(__ptr);
    __ptr = (undefined8 *)pvVar2;
  }
  pvVar2 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  free(pvVar2);
  return;
}


// ===== 004841b4  FUN_004841b4 =====

void FUN_004841b4(undefined8 *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar2 = (byte *)*param_1;
  if (pbVar2 == (byte *)0x0) {
    return;
  }
  pbVar1 = (byte *)param_1[1];
  pbVar3 = pbVar2;
  if (pbVar1 != pbVar2) {
    do {
      pbVar3 = pbVar1 + -0x28;
      if ((*pbVar3 & 1) != 0) {
        free(*(void **)(pbVar1 + -0x18));
      }
      pbVar1 = pbVar3;
    } while (pbVar3 != pbVar2);
    pbVar3 = (byte *)*param_1;
  }
  param_1[1] = pbVar2;
  free(pbVar3);
  return;
}


// ===== 00484230  FUN_00484230 =====

void FUN_00484230(long *param_1,byte *param_2,byte *param_3,ulong param_4)

{
  long lVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *local_88;
  undefined8 *local_80;
  long *local_78;
  undefined1 local_70;
  long *local_68;
  undefined8 **ppuStack_60;
  undefined8 **local_58;
  undefined1 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_70 = 0;
  local_78 = param_1;
  if (param_4 != 0) {
    if (0x666666666666666 < param_4) {
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 0048435c to 00484363 has its CatchHandler @ 00484364 */
        uVar4 = FUN_0048442c(param_1);
                    /* catch() { ... } // from try @ 0048428c with catch @ 00484364
                       catch() { ... } // from try @ 0048435c with catch @ 00484364 */
        FUN_004843a0(&local_78);
        if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
          FUN_00755eac(uVar4);
        }
      }
      goto LAB_0048439c;
    }
                    /* try { // try from 0048428c to 0048428f has its CatchHandler @ 00484364 */
    puVar3 = (undefined8 *)FUN_00759c3c(param_4 * 0x28);
    *param_1 = (long)puVar3;
    param_1[1] = (long)puVar3;
    local_50 = 0;
    local_68 = param_1 + 2;
    *local_68 = (long)(puVar3 + param_4 * 5);
    ppuStack_60 = &local_88;
    local_58 = &local_80;
    local_88 = puVar3;
    if (param_2 != param_3) {
      do {
        local_80 = puVar3;
        if ((*param_2 & 1) == 0) {
          uVar5 = *(undefined8 *)(param_2 + 8);
          uVar4 = *(undefined8 *)param_2;
          puVar3[2] = *(undefined8 *)(param_2 + 0x10);
          puVar3[1] = uVar5;
          *puVar3 = uVar4;
        }
        else {
                    /* try { // try from 0048430c to 00484313 has its CatchHandler @ 0048436c */
          FUN_002fb36c(puVar3,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 8));
        }
        pbVar2 = param_2 + 0x20;
        uVar4 = *(undefined8 *)(param_2 + 0x18);
        param_2 = param_2 + 0x28;
        puVar3[4] = *(undefined8 *)pbVar2;
        puVar3[3] = uVar4;
        puVar3 = local_80 + 5;
      } while (param_2 != param_3);
    }
    param_1[1] = (long)puVar3;
    local_80 = puVar3;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_0048439c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004843a0  FUN_004843a0 =====

void FUN_004843a0(undefined8 *param_1)

{
  byte *pbVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    puVar2 = (undefined8 *)*param_1;
    pbVar3 = (byte *)*puVar2;
    if (pbVar3 != (byte *)0x0) {
      pbVar1 = (byte *)puVar2[1];
      pbVar4 = pbVar3;
      if (pbVar1 != pbVar3) {
        do {
          pbVar4 = pbVar1 + -0x28;
          if ((*pbVar4 & 1) != 0) {
            free(*(void **)(pbVar1 + -0x18));
          }
          pbVar1 = pbVar4;
        } while (pbVar4 != pbVar3);
        pbVar4 = *(byte **)*param_1;
      }
      puVar2[1] = pbVar3;
      free(pbVar4);
      return;
    }
  }
  return;
}


// ===== 0048442c  FUN_0048442c =====

void FUN_0048442c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_002f9e60("vector");
}


// ===== 00484440  FUN_00484440 =====

void FUN_00484440(long param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    pbVar2 = (byte *)**(undefined8 **)(param_1 + 8);
    pbVar3 = (byte *)**(undefined8 **)(param_1 + 0x10);
    while (pbVar1 = pbVar3, pbVar1 != pbVar2) {
      pbVar3 = pbVar1 + -0x28;
      if ((*pbVar3 & 1) != 0) {
        free(*(void **)(pbVar1 + -0x18));
      }
    }
    return;
  }
  return;
}


// ===== 004844a0  FUN_004844a0 =====

void FUN_004844a0(undefined8 *param_1)

{
  undefined8 *__ptr;
  void *pvVar1;
  
  __ptr = (undefined8 *)param_1[2];
  while (__ptr != (undefined8 *)0x0) {
    pvVar1 = (void *)*__ptr;
    if ((*(byte *)(__ptr + 2) & 1) != 0) {
      free((void *)__ptr[4]);
    }
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


// ===== 00484510  FUN_00484510 =====

void FUN_00484510(long *param_1,ulong param_2)

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
LAB_00484694:
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
          goto LAB_00484694;
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


// ===== 004846e8  FUN_004846e8 =====

void FUN_004846e8(long *param_1,byte *param_2,byte *param_3)

{
  size_t sVar1;
  size_t sVar2;
  byte *pbVar3;
  byte bVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong unaff_x25;
  undefined2 uVar15;
  undefined8 uVar16;
  long lVar17;
  float fVar18;
  long *local_80;
  long *plStack_78;
  undefined1 local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  uVar14 = *(ulong *)(param_2 + 8);
  pbVar3 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar3 = param_2 + 1;
    uVar14 = (ulong)(*param_2 >> 1);
  }
                    /* try { // try from 00484738 to 0048473f has its CatchHandler @ 00484ba4 */
  uVar7 = FUN_0034bfb4(&local_80,pbVar3,uVar14);
  uVar14 = param_1[1];
  if (uVar14 != 0) {
    uVar16 = NEON_cnt(uVar14,1);
    uVar15 = NEON_uaddlv(uVar16,1);
    uVar13 = CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff;
    if (uVar13 < 2) {
      unaff_x25 = uVar14 - 1 & uVar7;
    }
    else {
      unaff_x25 = uVar7;
      if (uVar14 <= uVar7) {
        uVar10 = 0;
        if (uVar14 != 0) {
          uVar10 = uVar7 / uVar14;
        }
        unaff_x25 = uVar7 - uVar10 * uVar14;
      }
    }
    puVar12 = *(undefined8 **)(*param_1 + unaff_x25 * 8);
    if ((puVar12 != (undefined8 *)0x0) && (plVar8 = (long *)*puVar12, plVar8 != (long *)0x0)) {
      sVar1 = (ulong)(*param_2 >> 1);
      pbVar3 = param_2 + 1;
      if ((*param_2 & 1) != 0) {
        sVar1 = *(size_t *)(param_2 + 8);
        pbVar3 = *(byte **)(param_2 + 0x10);
      }
      if (uVar13 < 2) {
        do {
          if (plVar8[1] == uVar7) {
            bVar4 = *(byte *)(plVar8 + 2);
            sVar2 = (ulong)(bVar4 >> 1);
            if ((bVar4 & 1) != 0) {
              sVar2 = plVar8[3];
            }
            if (sVar2 == sVar1) {
              if ((bVar4 & 1) == 0) {
                if (bVar4 < 2) goto LAB_004848fc;
                uVar13 = 0;
                while (*(byte *)((long)plVar8 + uVar13 + 0x11) == pbVar3[uVar13]) {
                  uVar13 = uVar13 + 1;
                  if (bVar4 >> 1 == uVar13) goto LAB_004848fc;
                }
              }
              else {
                iVar6 = memcmp((void *)plVar8[4],pbVar3,plVar8[3]);
                if (iVar6 == 0) goto LAB_004848fc;
              }
            }
          }
          else if ((plVar8[1] & uVar14 - 1) != unaff_x25) break;
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar8[1];
          if (uVar13 == uVar7) {
            bVar4 = *(byte *)(plVar8 + 2);
            sVar2 = (ulong)(bVar4 >> 1);
            if ((bVar4 & 1) != 0) {
              sVar2 = plVar8[3];
            }
            if (sVar2 == sVar1) {
              if ((bVar4 & 1) == 0) {
                if (bVar4 < 2) goto LAB_004848fc;
                uVar13 = 0;
                while (*(byte *)((long)plVar8 + uVar13 + 0x11) == pbVar3[uVar13]) {
                  uVar13 = uVar13 + 1;
                  if (bVar4 >> 1 == uVar13) goto LAB_004848fc;
                }
              }
              else {
                iVar6 = memcmp((void *)plVar8[4],pbVar3,plVar8[3]);
                if (iVar6 == 0) goto LAB_004848fc;
              }
            }
          }
          else {
            if (uVar14 <= uVar13) {
              uVar10 = 0;
              if (uVar14 != 0) {
                uVar10 = uVar13 / uVar14;
              }
              uVar13 = uVar13 - uVar10 * uVar14;
            }
            if (uVar13 != unaff_x25) break;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
  }
  plVar8 = param_1 + 2;
  plVar9 = (long *)FUN_00759c3c(0x30);
  bVar4 = *param_3;
  local_70 = 0;
  *plVar9 = 0;
  plVar9[1] = uVar7;
  local_80 = plVar9;
  plStack_78 = plVar8;
  if ((bVar4 & 1) == 0) {
    lVar17 = *(long *)param_3;
    lVar11 = *(long *)(param_3 + 0x10);
    plVar9[3] = *(long *)(param_3 + 8);
    plVar9[2] = lVar17;
    plVar9[4] = lVar11;
  }
  else {
                    /* try { // try from 00484940 to 00484947 has its CatchHandler @ 00484b7c */
    FUN_002fb36c(plVar9 + 2,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 8));
  }
  lVar11 = param_1[3];
  fVar18 = *(float *)(param_1 + 4);
  plVar9[5] = *(long *)(param_3 + 0x18);
  local_70 = 1;
  if ((uVar14 == 0) || (fVar18 * (float)uVar14 < (float)(lVar11 + 1))) {
    if (uVar14 < 3) {
      uVar13 = 1;
    }
    else {
      uVar13 = (ulong)((uVar14 & uVar14 - 1) != 0);
    }
    uVar13 = uVar13 | uVar14 << 1;
    uVar14 = (ulong)((float)(lVar11 + 1) / fVar18);
    if (uVar13 <= uVar14) {
      uVar13 = uVar14;
    }
    if (uVar13 - 1 == 0) {
      uVar13 = 2;
    }
    else if ((uVar13 & uVar13 - 1) != 0) {
                    /* try { // try from 004849ec to 00484a6f has its CatchHandler @ 00484b78 */
      uVar13 = FUN_00711ce0(uVar13);
    }
    uVar14 = param_1[1];
    if (uVar14 < uVar13) {
LAB_00484a04:
      FUN_00484510(param_1,uVar13);
    }
    else if (uVar13 < uVar14) {
      uVar10 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar14 < 3) {
LAB_00484a6c:
        uVar10 = FUN_00711ce0();
      }
      else {
        uVar16 = NEON_cnt(uVar14,1);
        uVar15 = NEON_uaddlv(uVar16,1);
        if (1 < (CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff)) goto LAB_00484a6c;
        if (1 < uVar10) {
          uVar10 = 1L << (-LZCOUNT(uVar10 - 1) & 0x3fU);
        }
      }
      if (uVar13 <= uVar10) {
        uVar13 = uVar10;
      }
      if (uVar13 < uVar14) goto LAB_00484a04;
    }
    uVar14 = param_1[1];
    if ((uVar14 & uVar14 - 1) == 0) {
      unaff_x25 = uVar14 - 1 & uVar7;
      plVar9 = *(long **)(*param_1 + unaff_x25 * 8);
      goto joined_r0x00484af8;
    }
    if (uVar7 < uVar14) {
      plVar9 = *(long **)(*param_1 + uVar7 * 8);
      unaff_x25 = uVar7;
      goto joined_r0x00484af8;
    }
    uVar13 = 0;
    if (uVar14 != 0) {
      uVar13 = uVar7 / uVar14;
    }
    unaff_x25 = uVar7 - uVar13 * uVar14;
    plVar9 = *(long **)(*param_1 + unaff_x25 * 8);
    if (plVar9 == (long *)0x0) goto LAB_00484aa4;
LAB_0048498c:
    *local_80 = *plVar9;
    *plVar9 = (long)local_80;
  }
  else {
    plVar9 = *(long **)(*param_1 + unaff_x25 * 8);
joined_r0x00484af8:
    if (plVar9 != (long *)0x0) goto LAB_0048498c;
LAB_00484aa4:
    *local_80 = param_1[2];
    param_1[2] = (long)local_80;
    *(long **)(*param_1 + unaff_x25 * 8) = plVar8;
    if (*local_80 != 0) {
      uVar7 = *(ulong *)(*local_80 + 8);
      if ((uVar14 & uVar14 - 1) == 0) {
        uVar7 = uVar7 & uVar14 - 1;
      }
      else if (uVar14 <= uVar7) {
        uVar13 = 0;
        if (uVar14 != 0) {
          uVar13 = uVar7 / uVar14;
        }
        uVar7 = uVar7 - uVar13 * uVar14;
      }
      *(long **)(*param_1 + uVar7 * 8) = local_80;
    }
  }
  uVar16 = 1;
  param_1[3] = param_1[3] + 1;
  plVar8 = local_80;
LAB_00484b48:
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar8,uVar16);
LAB_004848fc:
  uVar16 = 0;
  goto LAB_00484b48;
}


// ===== 00484ba8  FUN_00484ba8 =====

void FUN_00484ba8(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)*param_1;
  *param_1 = 0;
  if (__ptr != (void *)0x0) {
    if ((*(char *)(param_1 + 2) != '\0') && ((*(byte *)((long)__ptr + 0x10) & 1) != 0)) {
      free(*(void **)((long)__ptr + 0x20));
    }
    free(__ptr);
    return;
  }
  return;
}


// ===== 00484bf8  FUN_00484bf8 =====

void FUN_00484bf8(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 00484c48  FUN_00484c48 =====

void FUN_00484c48(undefined8 *param_1)

{
  long *plVar1;
  long *__ptr;
  long *plVar2;
  
  __ptr = (long *)*param_1;
  if (__ptr == (long *)0x0) {
    return;
  }
  plVar2 = (long *)param_1[1];
  if (plVar2 == __ptr) {
    param_1[1] = __ptr;
    free(__ptr);
    return;
  }
  do {
    plVar2 = plVar2 + -1;
    plVar1 = (long *)*plVar2;
    *plVar2 = 0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
  } while (plVar2 != __ptr);
  param_1[1] = __ptr;
  free((void *)*param_1);
  return;
}


// ===== 00484cd4  FUN_00484cd4 =====

void FUN_00484cd4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_002f9e60("vector");
}


// ===== 00484ce8  FUN_00484ce8 =====

void FUN_00484ce8(void *param_1)

{
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 00484d0c  FUN_00484d0c =====

void FUN_00484d0c(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00484d1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}


// ===== 00484d24  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00484d28  FUN_00484d28 =====

void FUN_00484d28(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [80];
  undefined *local_50;
  undefined *local_48;
  char *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_1[0xb] + 0x18) == 8) {
    lVar4 = *param_1;
    lVar2 = FUN_005cabcc(param_1 + 3);
    if ((lVar2 == -1) || ((lVar4 == 0 && (lVar2 != 0)))) {
                    /* WARNING: Subroutine does not return */
      FUN_004839bc();
    }
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
  }
  else {
    uVar3 = FUN_00753a74(0x88);
                    /* try { // try from 00484db8 to 00484dbf has its CatchHandler @ 00484ed0 */
    FUN_00645c30(auStack_b8);
                    /* try { // try from 00484dc0 to 00484ddf has its CatchHandler @ 00484ec0 */
    FUN_0047488c(auStack_a0,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/include/onnxruntime/core/framework/tensor.h"
                 ,0xda,
                 "gsl::span<const T> onnxruntime::Tensor::DataAsSpan() const [T = std::string]",
                 auStack_b8);
    local_48 = &DAT_001f1ce2;
    pcStack_40 = "Tensor type mismatch. ";
    local_50 = &DAT_001d41e9;
    FUN_00484ef4(auStack_d0,&pcStack_40,&local_48,&local_50,param_1 + 0xb);
                    /* try { // try from 00484e1c to 00484e63 has its CatchHandler @ 00484e64 */
    FUN_00474a40(uVar3,auStack_a0,"utils::IsPrimitiveDataType<T>(dtype_)",auStack_d0);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar3,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00484ef4  FUN_00484ef4 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00484ef4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
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
  
  puVar4 = PTR_PTR_007a1e48;
  puVar3 = PTR_DAT_007a1e40;
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  puVar1 = PTR_DAT_007a1e40 + 0x40;
  local_178[0] = *(undefined **)(PTR_PTR_007a1e48 + 8);
  local_d8 = 0;
  local_108[0] = puVar1;
  *(undefined8 *)((long)local_178 + *(long *)(local_178[0] + -0x18)) =
       *(undefined8 *)(PTR_PTR_007a1e48 + 0x10);
  lVar5 = *(long *)(local_178[0] + -0x18);
                    /* try { // try from 00484f70 to 00484f7b has its CatchHandler @ 00485080 */
  FUN_00715fc0((long)local_178 + lVar5,local_178 + 1);
  local_178[0] = puVar3 + 0x18;
  *(undefined8 *)((long)&uStack_f0 + lVar5) = 0;
  *(undefined4 *)((long)auStack_e8 + lVar5) = 0xffffffff;
                    /* try { // try from 00484f94 to 00484f9b has its CatchHandler @ 00485060 */
  local_108[0] = puVar1;
  FUN_007160dc(local_178 + 1);
  puVar1 = PTR_DAT_007a10f8 + 0x10;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_110 = 0x10;
  local_178[1] = puVar1;
  FUN_00485094(local_178,param_2,param_3,param_4,param_5);
                    /* try { // try from 00484fd8 to 00484fe3 has its CatchHandler @ 0048505c */
  FUN_00718470(param_1,local_178 + 1);
  local_178[0] = *(undefined **)puVar4;
  *(undefined8 *)((long)local_178 + *(long *)(local_178[0] + -0x18)) =
       *(undefined8 *)(puVar4 + 0x18);
  local_178[1] = puVar1;
  if ((local_130 & 1) != 0) {
    free(local_120);
  }
  FUN_00716098(local_178 + 1);
  FUN_00716ee4(local_178,puVar4 + 8);
  thunk_FUN_00715e00(local_108);
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00485094  FUN_00485094 =====

void FUN_00485094(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  size_t sVar1;
  char *pcVar2;
  
  pcVar2 = (char *)*param_2;
  sVar1 = strlen(pcVar2);
                    /* try { // try from 004850c8 to 004850d3 has its CatchHandler @ 00485138 */
  FUN_00303e0c(param_1,pcVar2,sVar1);
  pcVar2 = (char *)*param_3;
  sVar1 = strlen(pcVar2);
                    /* try { // try from 004850e4 to 004850ef has its CatchHandler @ 00485134 */
  FUN_00303e0c(param_1,pcVar2,sVar1);
  pcVar2 = (char *)*param_4;
  sVar1 = strlen(pcVar2);
                    /* try { // try from 00485100 to 0048510b has its CatchHandler @ 00485130 */
  FUN_00303e0c(param_1,pcVar2,sVar1);
                    /* try { // try from 00485110 to 00485117 has its CatchHandler @ 0048512c */
  FUN_0057a134(param_1,*param_5);
  return;
}


// ===== 0048513c  FUN_0048513c =====

void FUN_0048513c(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)*param_1;
  *param_1 = 0;
  if (__ptr != (void *)0x0) {
    if ((*(byte *)((long)__ptr + 8) & 1) != 0) {
      free(*(void **)((long)__ptr + 0x18));
    }
    free(__ptr);
    return;
  }
  return;
}


// ===== 00485180  FUN_00485180 =====

void FUN_00485180(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 local_c8;
  char local_c7 [8];
  char acStack_bf [8];
  undefined1 local_b7;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [80];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00753a74(0x88);
                    /* try { // try from 004851b0 to 004851b7 has its CatchHandler @ 00485354 */
  FUN_00645c30(auStack_b0);
                    /* try { // try from 004851b8 to 004851d7 has its CatchHandler @ 004852f8 */
  FUN_0047488c(auStack_98,
               "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/common/safeint.h"
               ,0x11,
               "static void SafeIntExceptionHandler<onnxruntime::OnnxRuntimeException>::SafeIntOnOverflow()"
               ,auStack_b0);
  local_c8 = 0x20;
  local_b7 = 0;
  acStack_bf[0] = s_Integer_overflow_001bab39[8];
  acStack_bf[1] = s_Integer_overflow_001bab39[9];
  acStack_bf[2] = s_Integer_overflow_001bab39[10];
  acStack_bf[3] = s_Integer_overflow_001bab39[0xb];
  acStack_bf[4] = s_Integer_overflow_001bab39[0xc];
  acStack_bf[5] = s_Integer_overflow_001bab39[0xd];
  acStack_bf[6] = s_Integer_overflow_001bab39[0xe];
  acStack_bf[7] = s_Integer_overflow_001bab39[0xf];
  local_c7[0] = s_Integer_overflow_001bab39[0];
  local_c7[1] = s_Integer_overflow_001bab39[1];
  local_c7[2] = s_Integer_overflow_001bab39[2];
  local_c7[3] = s_Integer_overflow_001bab39[3];
  local_c7[4] = s_Integer_overflow_001bab39[4];
  local_c7[5] = s_Integer_overflow_001bab39[5];
  local_c7[6] = s_Integer_overflow_001bab39[6];
  local_c7[7] = s_Integer_overflow_001bab39[7];
                    /* try { // try from 004851f4 to 00485207 has its CatchHandler @ 004852f4 */
  FUN_00474a40(uVar2,auStack_98,0,&local_c8);
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 00485218 to 0048522f has its CatchHandler @ 00485230 */
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(uVar2,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0048537c  FUN_0048537c =====

void FUN_0048537c(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_c8;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [80];
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((param_1[2] == 0) || (*(int *)(param_1[2] + 8) != 3)) {
    uVar3 = FUN_00753a74(0x88);
                    /* try { // try from 004853ec to 004853f3 has its CatchHandler @ 00485514 */
    FUN_00645c30(auStack_a8);
                    /* try { // try from 004853f4 to 00485413 has its CatchHandler @ 00485504 */
    FUN_0047488c(auStack_90,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/include/onnxruntime/core/framework/ort_value.h"
                 ,0x61,"const onnxruntime::TensorSeq &OrtValue::Get() const",auStack_a8);
                    /* try { // try from 00485418 to 0048541b has its CatchHandler @ 004854e4 */
    local_c8 = FUN_00576cac(param_1[2]);
    local_40 = "Trying to get a TensorSeq, but got: ";
    FUN_004839f8(auStack_c0,&local_40,&local_c8);
                    /* try { // try from 00485440 to 00485487 has its CatchHandler @ 00485488 */
    uVar2 = FUN_00474a40(uVar3,auStack_90,"IsTensorSequence()",auStack_c0);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar3,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
  }
  else {
    uVar2 = *param_1;
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


// ===== 00485538  FUN_00485538 =====

long FUN_00485538(long param_1,ulong param_2)

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
  uVar3 = (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3) * -0x5555555555555555;
  if (uVar3 < param_2 || uVar3 - param_2 == 0) {
    uVar2 = FUN_00753a74(0x88);
                    /* try { // try from 004855b4 to 004855bb has its CatchHandler @ 0048569c */
    FUN_00645c30(auStack_a0);
                    /* try { // try from 004855bc to 004855db has its CatchHandler @ 0048568c */
    FUN_0047488c(auStack_88,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/TensorSeq.h"
                 ,0x4d,"const OrtValue &onnxruntime::TensorSeq::GetAt(size_t) const",auStack_a0);
    FUN_00476720(auStack_b8);
                    /* try { // try from 004855e8 to 0048562f has its CatchHandler @ 00485630 */
    FUN_00474a40(uVar2,auStack_88,"i < tensors_.size()",auStack_b8);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar2,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_38) {
    return *(long *)(param_1 + 8) + param_2 * 0x18;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004856c0  FUN_004856c0 =====

void FUN_004856c0(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [80];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar3 = FUN_00483570(param_2);
  lVar3 = *(long *)(lVar3 + 0x58);
  if (*(int *)(lVar3 + 8) != 6) {
    lVar3 = 0;
  }
  if (*param_1 == lVar3) {
    puVar1 = (undefined8 *)param_1[2];
    if (puVar1 < (undefined8 *)param_1[3]) {
      lVar3 = param_2[1];
      *puVar1 = *param_2;
      puVar1[1] = lVar3;
      if (lVar3 != 0) {
        FUN_00755c20(1,lVar3 + 8);
      }
      puVar4 = puVar1 + 3;
      puVar1[2] = param_2[2];
    }
    else {
      puVar4 = (undefined8 *)FUN_00476fb0(param_1 + 1,param_2);
    }
    param_1[2] = (long)puVar4;
    if (*(long *)(lVar2 + 0x28) == local_38) {
      return;
    }
  }
  else {
    uVar5 = FUN_00753a74(0x88);
                    /* try { // try from 00485780 to 00485787 has its CatchHandler @ 00485888 */
    FUN_00645c30(auStack_a0);
                    /* try { // try from 00485788 to 004857a7 has its CatchHandler @ 00485878 */
    FUN_0047488c(auStack_88,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/TensorSeq.h"
                 ,0x53,"void onnxruntime::TensorSeq::Add(const OrtValue &)",auStack_a0);
                    /* try { // try from 004857a8 to 004857b7 has its CatchHandler @ 00485858 */
    FUN_00479eac(auStack_b8,"TensorSeq: tensor to be added has a different data type.");
                    /* try { // try from 004857bc to 004857ff has its CatchHandler @ 00485800 */
    FUN_00474a40(uVar5,auStack_88,"IsSameDataType(tensor.Get<Tensor>())",auStack_b8);
    if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar5,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004858a8  FUN_004858a8 =====

void FUN_004858a8(undefined8 *param_1)

{
  long lVar1;
  void *__ptr;
  void *__ptr_00;
  long *plVar2;
  void *pvVar3;
  void *pvVar4;
  
  __ptr_00 = (void *)*param_1;
  *param_1 = 0;
  if (__ptr_00 == (void *)0x0) {
    return;
  }
  pvVar3 = *(void **)((long)__ptr_00 + 8);
  if (pvVar3 != (void *)0x0) {
    pvVar4 = *(void **)((long)__ptr_00 + 0x10);
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
      __ptr = *(void **)((long)__ptr_00 + 8);
    }
    *(void **)((long)__ptr_00 + 0x10) = pvVar3;
    free(__ptr);
  }
  free(__ptr_00);
  return;
}


// ===== 00485950  FUN_00485950 =====

void FUN_00485950(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [80];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_2 + 8) != 6) {
    param_2 = 0;
  }
  *param_1 = param_2;
  if (param_2 == 0) {
    uVar2 = FUN_00753a74(0x88);
                    /* try { // try from 004859b8 to 004859bf has its CatchHandler @ 00485ac8 */
    FUN_00645c30(auStack_a0);
                    /* try { // try from 004859c0 to 004859df has its CatchHandler @ 00485ab8 */
    FUN_0047488c(auStack_88,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/TensorSeq.h"
                 ,0x1e,"void onnxruntime::TensorSeq::SetType(MLDataType)",auStack_a0);
                    /* try { // try from 004859e0 to 004859ef has its CatchHandler @ 00485a98 */
    FUN_00479eac(auStack_b8,"Tensor sequence must contain only primitive types");
                    /* try { // try from 004859f4 to 00485a3b has its CatchHandler @ 00485a3c */
    FUN_00474a40(uVar2,auStack_88,"elem_type_ != nullptr",auStack_b8);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar2,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00485aec  FUN_00485aec =====

void FUN_00485aec(undefined8 *param_1,ulong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auVar10 [16];
  
  puVar6 = (undefined8 *)*param_1;
  if ((ulong)((param_1[2] - (long)puVar6 >> 3) * -0x5555555555555555) < param_2) {
    if (0xaaaaaaaaaaaaaaa < param_2) {
      auVar10 = FUN_00477170(param_1);
      puVar6 = auVar10._0_8_;
      puVar4 = (undefined8 *)FUN_00759c3c(0x28);
      puVar4[4] = param_3;
      plVar7 = (long *)puVar6[1];
      puVar4[2] = 0;
      puVar4[3] = auVar10._8_8_;
      *puVar6 = auVar10._8_8_;
      puVar6[1] = puVar4;
      *puVar4 = &PTR_FUN_0078fce0;
      puVar4[1] = 0;
      if ((plVar7 != (long *)0x0) &&
         (lVar5 = FUN_00755c50(0xffffffffffffffff,plVar7 + 1), lVar5 == 0)) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        FUN_0071245c(plVar7);
        return;
      }
      return;
    }
    puVar8 = (undefined8 *)param_1[1];
    puVar2 = (undefined8 *)FUN_00759c3c(param_2 * 0x18);
    lVar5 = (long)puVar8 - (long)puVar6;
    puVar4 = puVar2;
    puVar9 = puVar6;
    if (lVar5 != 0) {
      do {
        lVar3 = puVar9[1];
        *puVar4 = *puVar9;
        puVar4[1] = lVar3;
        if (lVar3 != 0) {
          FUN_00755c20(1,lVar3 + 8);
        }
        puVar1 = puVar9 + 3;
        puVar4[2] = puVar9[2];
        puVar4 = puVar4 + 3;
        puVar9 = puVar1;
      } while (puVar1 != puVar8);
      do {
        plVar7 = (long *)puVar6[1];
        if ((plVar7 != (long *)0x0) &&
           (lVar3 = FUN_00755c50(0xffffffffffffffff,plVar7 + 1), lVar3 == 0)) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          FUN_0071245c(plVar7);
        }
        puVar6 = puVar6 + 3;
      } while (puVar6 != puVar8);
      puVar6 = (undefined8 *)*param_1;
    }
    *param_1 = puVar2;
    param_1[1] = (long)puVar2 + lVar5;
    param_1[2] = puVar2 + param_2 * 3;
    if (puVar6 != (undefined8 *)0x0) {
      free(puVar6);
      return;
    }
  }
  return;
}


// ===== 00485c34  FUN_00485c34 =====

void FUN_00485c34(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  
                    /* try { // try from 00485c50 to 00485c57 has its CatchHandler @ 00485cc0 */
  puVar1 = (undefined8 *)FUN_00759c3c(0x28);
  puVar1[4] = param_3;
  plVar3 = (long *)param_1[1];
  puVar1[2] = 0;
  puVar1[3] = param_2;
  *param_1 = param_2;
  param_1[1] = puVar1;
  *puVar1 = &PTR_FUN_0078fce0;
  puVar1[1] = 0;
  if ((plVar3 != (long *)0x0) && (lVar2 = FUN_00755c50(0xffffffffffffffff,plVar3 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_0071245c(plVar3);
    return;
  }
  return;
}


// ===== 00485ce4  FUN_00485ce4 =====

void FUN_00485ce4(void *param_1)

{
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 00485d08  FUN_00485d08 =====

void FUN_00485d08(long param_1)

{
                    /* try { // try from 00485d14 to 00485d17 has its CatchHandler @ 00485d20 */
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return;
}


// ===== 00485d24  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00485d28  FUN_00485d28 =====

void FUN_00485d28(byte *param_1)

{
  long lVar1;
  void *__ptr;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __ptr = *(void **)(param_1 + 0x30);
  if (__ptr != (void *)0x0) {
    *(void **)(param_1 + 0x38) = __ptr;
    free(__ptr);
  }
  plVar5 = *(long **)(param_1 + 0x18);
  if (plVar5 != (long *)0x0) {
    plVar6 = *(long **)(param_1 + 0x20);
    plVar3 = plVar5;
    if (plVar6 != plVar5) {
      do {
        plVar3 = plVar6 + -8;
        lVar4 = *plVar3;
        *plVar3 = 0;
        if (lVar4 != 0) {
          plVar2 = (long *)plVar6[-2];
          local_50 = lVar4;
          if (plVar2 == (long *)0x0) {
            if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 00485e38 to 00485e3b has its CatchHandler @ 00485e44 */
              FUN_0030be88();
            }
            goto LAB_00485e3c;
          }
                    /* try { // try from 00485dc0 to 00485dc7 has its CatchHandler @ 00485e40 */
          (**(code **)(*plVar2 + 0x30))(plVar2,&local_50);
        }
        plVar2 = (long *)plVar6[-2];
        plVar6 = plVar6 + -6;
        if (plVar6 == plVar2) {
          lVar4 = 0x20;
LAB_00485d88:
          (**(code **)(*plVar6 + lVar4))();
        }
        else if (plVar2 != (long *)0x0) {
          lVar4 = 0x28;
          plVar6 = plVar2;
          goto LAB_00485d88;
        }
        plVar6 = plVar3;
      } while (plVar3 != plVar5);
      plVar3 = *(long **)(param_1 + 0x18);
    }
    *(long **)(param_1 + 0x20) = plVar5;
    free(plVar3);
  }
  if ((*param_1 & 1) != 0) {
    free(*(void **)(param_1 + 0x10));
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_00485e3c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00485e48  FUN_00485e48 =====

void FUN_00485e48(undefined8 *param_1)

{
  byte bVar1;
  undefined8 *__ptr;
  void *pvVar2;
  
  __ptr = (undefined8 *)param_1[2];
  while (__ptr != (undefined8 *)0x0) {
    pvVar2 = (void *)*__ptr;
    if ((*(byte *)(__ptr + 5) & 1) == 0) {
      bVar1 = *(byte *)(__ptr + 2);
    }
    else {
      free((void *)__ptr[7]);
      bVar1 = *(byte *)(__ptr + 2);
    }
    if ((bVar1 & 1) != 0) {
      free((void *)__ptr[4]);
    }
    free(__ptr);
    __ptr = (undefined8 *)pvVar2;
  }
  pvVar2 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  free(pvVar2);
  return;
}


// ===== 00485ed4  FUN_00485ed4 =====

void FUN_00485ed4(long *param_1,ulong param_2)

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
LAB_00486058:
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
          goto LAB_00486058;
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


// ===== 004860ac  FUN_004860ac =====

void FUN_004860ac(long *param_1,byte *param_2,undefined8 param_3)

{
  size_t sVar1;
  size_t sVar2;
  byte *pbVar3;
  byte bVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong unaff_x25;
  undefined2 uVar12;
  undefined8 uVar13;
  long *local_80 [3];
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  uVar11 = *(ulong *)(param_2 + 8);
  pbVar3 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar3 = param_2 + 1;
    uVar11 = (ulong)(*param_2 >> 1);
  }
                    /* try { // try from 004860fc to 00486103 has its CatchHandler @ 00486520 */
  uVar7 = FUN_0034bfb4(local_80,pbVar3,uVar11);
  uVar11 = param_1[1];
  if (uVar11 != 0) {
    uVar13 = NEON_cnt(uVar11,1);
    uVar12 = NEON_uaddlv(uVar13,1);
    uVar10 = CONCAT62((int6)((ulong)uVar13 >> 0x10),uVar12) & 0xffffffff;
    if (uVar10 < 2) {
      unaff_x25 = uVar11 - 1 & uVar7;
    }
    else {
      unaff_x25 = uVar7;
      if (uVar11 <= uVar7) {
        uVar8 = 0;
        if (uVar11 != 0) {
          uVar8 = uVar7 / uVar11;
        }
        unaff_x25 = uVar7 - uVar8 * uVar11;
      }
    }
    plVar9 = *(long **)(*param_1 + unaff_x25 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      sVar1 = (ulong)(*param_2 >> 1);
      pbVar3 = param_2 + 1;
      if ((*param_2 & 1) != 0) {
        sVar1 = *(size_t *)(param_2 + 8);
        pbVar3 = *(byte **)(param_2 + 0x10);
      }
      if (uVar10 < 2) {
        do {
          if (plVar9[1] == uVar7) {
            bVar4 = *(byte *)(plVar9 + 2);
            sVar2 = (ulong)(bVar4 >> 1);
            if ((bVar4 & 1) != 0) {
              sVar2 = plVar9[3];
            }
            if (sVar2 == sVar1) {
              if ((bVar4 & 1) == 0) {
                if (bVar4 < 2) goto LAB_004862c0;
                uVar10 = 0;
                while (*(byte *)((long)plVar9 + uVar10 + 0x11) == pbVar3[uVar10]) {
                  uVar10 = uVar10 + 1;
                  if (bVar4 >> 1 == uVar10) goto LAB_004862c0;
                }
              }
              else {
                iVar6 = memcmp((void *)plVar9[4],pbVar3,plVar9[3]);
                if (iVar6 == 0) goto LAB_004862c0;
              }
            }
          }
          else if ((plVar9[1] & uVar11 - 1) != unaff_x25) break;
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
      else {
        do {
          uVar10 = plVar9[1];
          if (uVar10 == uVar7) {
            bVar4 = *(byte *)(plVar9 + 2);
            sVar2 = (ulong)(bVar4 >> 1);
            if ((bVar4 & 1) != 0) {
              sVar2 = plVar9[3];
            }
            if (sVar2 == sVar1) {
              if ((bVar4 & 1) == 0) {
                if (bVar4 < 2) goto LAB_004862c0;
                uVar10 = 0;
                while (*(byte *)((long)plVar9 + uVar10 + 0x11) == pbVar3[uVar10]) {
                  uVar10 = uVar10 + 1;
                  if (bVar4 >> 1 == uVar10) goto LAB_004862c0;
                }
              }
              else {
                iVar6 = memcmp((void *)plVar9[4],pbVar3,plVar9[3]);
                if (iVar6 == 0) goto LAB_004862c0;
              }
            }
          }
          else {
            if (uVar11 <= uVar10) {
              uVar8 = 0;
              if (uVar11 != 0) {
                uVar8 = uVar10 / uVar11;
              }
              uVar10 = uVar10 - uVar8 * uVar11;
            }
            if (uVar10 != unaff_x25) break;
          }
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
    }
  }
  FUN_00486524(local_80,param_1,uVar7,param_3);
  if ((uVar11 == 0) || (*(float *)(param_1 + 4) * (float)uVar11 < (float)(param_1[3] + 1))) {
    if (uVar11 < 3) {
      uVar10 = 1;
    }
    else {
      uVar10 = (ulong)((uVar11 & uVar11 - 1) != 0);
    }
    uVar10 = uVar10 | uVar11 << 1;
    uVar11 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar10 <= uVar11) {
      uVar10 = uVar11;
    }
    if (uVar10 - 1 == 0) {
      uVar10 = 2;
    }
    else if ((uVar10 & uVar10 - 1) != 0) {
                    /* try { // try from 00486370 to 004863f3 has its CatchHandler @ 004864f8 */
      uVar10 = FUN_00711ce0(uVar10);
    }
    uVar11 = param_1[1];
    if (uVar11 < uVar10) {
LAB_00486388:
      FUN_00485ed4(param_1,uVar10);
    }
    else if (uVar10 < uVar11) {
      uVar8 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar11 < 3) {
LAB_004863f0:
        uVar8 = FUN_00711ce0();
      }
      else {
        uVar13 = NEON_cnt(uVar11,1);
        uVar12 = NEON_uaddlv(uVar13,1);
        if (1 < (CONCAT62((int6)((ulong)uVar13 >> 0x10),uVar12) & 0xffffffff)) goto LAB_004863f0;
        if (1 < uVar8) {
          uVar8 = 1L << (-LZCOUNT(uVar8 - 1) & 0x3fU);
        }
      }
      if (uVar10 <= uVar8) {
        uVar10 = uVar8;
      }
      if (uVar10 < uVar11) goto LAB_00486388;
    }
    uVar11 = param_1[1];
    if ((uVar11 & uVar11 - 1) == 0) {
      unaff_x25 = uVar11 - 1 & uVar7;
      plVar9 = *(long **)(*param_1 + unaff_x25 * 8);
      goto joined_r0x0048647c;
    }
    if (uVar7 < uVar11) {
      plVar9 = *(long **)(*param_1 + uVar7 * 8);
      unaff_x25 = uVar7;
      goto joined_r0x0048647c;
    }
    uVar10 = 0;
    if (uVar11 != 0) {
      uVar10 = uVar7 / uVar11;
    }
    unaff_x25 = uVar7 - uVar10 * uVar11;
    plVar9 = *(long **)(*param_1 + unaff_x25 * 8);
    if (plVar9 == (long *)0x0) goto LAB_00486424;
LAB_0048630c:
    *local_80[0] = *plVar9;
    *plVar9 = (long)local_80[0];
    plVar9 = local_80[0];
  }
  else {
    plVar9 = *(long **)(*param_1 + unaff_x25 * 8);
joined_r0x0048647c:
    if (plVar9 != (long *)0x0) goto LAB_0048630c;
LAB_00486424:
    plVar9 = param_1 + 2;
    *local_80[0] = *plVar9;
    *plVar9 = (long)local_80[0];
    *(long **)(*param_1 + unaff_x25 * 8) = plVar9;
    plVar9 = local_80[0];
    if (*local_80[0] != 0) {
      uVar7 = *(ulong *)(*local_80[0] + 8);
      if ((uVar11 & uVar11 - 1) == 0) {
        uVar7 = uVar7 & uVar11 - 1;
      }
      else if (uVar11 <= uVar7) {
        uVar10 = 0;
        if (uVar11 != 0) {
          uVar10 = uVar7 / uVar11;
        }
        uVar7 = uVar7 - uVar10 * uVar11;
      }
      *(long **)(*param_1 + uVar7 * 8) = local_80[0];
    }
  }
  uVar13 = 1;
  param_1[3] = param_1[3] + 1;
LAB_004864c8:
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar9,uVar13);
LAB_004862c0:
  uVar13 = 0;
  goto LAB_004864c8;
}


// ===== 00486524  FUN_00486524 =====

void FUN_00486524(undefined8 *param_1,long param_2,undefined8 param_3,byte *param_4)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)FUN_00759c3c(0x40);
  bVar1 = *param_4;
  *param_1 = puVar2;
  param_1[1] = param_2 + 0x10;
  *(undefined1 *)(param_1 + 2) = 0;
  *puVar2 = 0;
  puVar2[1] = param_3;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)param_4;
    uVar3 = *(undefined8 *)(param_4 + 0x10);
    puVar2[3] = *(undefined8 *)(param_4 + 8);
    puVar2[2] = uVar4;
    puVar2[4] = uVar3;
  }
  else {
                    /* try { // try from 00486580 to 00486587 has its CatchHandler @ 004865f4 */
    FUN_002fb36c(puVar2 + 2,*(undefined8 *)(param_4 + 0x10),*(undefined8 *)(param_4 + 8));
  }
  if ((param_4[0x18] & 1) == 0) {
    uVar4 = *(undefined8 *)(param_4 + 0x18);
    uVar3 = *(undefined8 *)(param_4 + 0x28);
    puVar2[6] = *(undefined8 *)(param_4 + 0x20);
    puVar2[5] = uVar4;
    puVar2[7] = uVar3;
  }
  else {
                    /* try { // try from 004865ac to 004865b3 has its CatchHandler @ 004865d0 */
    FUN_002fb36c(puVar2 + 5,*(undefined8 *)(param_4 + 0x28),*(undefined8 *)(param_4 + 0x20));
  }
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}


// ===== 00486608  FUN_00486608 =====

void FUN_00486608(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)*param_1;
  *param_1 = 0;
  if (__ptr != (void *)0x0) {
    if (*(char *)(param_1 + 2) != '\0') {
      if ((*(byte *)((long)__ptr + 0x28) & 1) != 0) {
        free(*(void **)((long)__ptr + 0x38));
      }
      if ((*(byte *)((long)__ptr + 0x10) & 1) != 0) {
        free(*(void **)((long)__ptr + 0x20));
      }
    }
    free(__ptr);
    return;
  }
  return;
}


// ===== 00486664  FUN_00486664 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00486664(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  byte local_188;
  undefined1 auStack_187 [7];
  ulong local_180;
  undefined1 *local_178;
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
  
  puVar5 = PTR_PTR_007a1e48;
  puVar4 = PTR_DAT_007a1e40;
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  puVar1 = PTR_DAT_007a1e40 + 0x40;
  local_170[0] = *(undefined **)(PTR_PTR_007a1e48 + 8);
  local_d0 = 0;
  local_100[0] = puVar1;
  *(undefined8 *)((long)local_170 + *(long *)(local_170[0] + -0x18)) =
       *(undefined8 *)(PTR_PTR_007a1e48 + 0x10);
  lVar6 = *(long *)(local_170[0] + -0x18);
                    /* try { // try from 004866d4 to 004866df has its CatchHandler @ 0048683c */
  FUN_00715fc0((long)local_170 + lVar6,local_170 + 1);
  local_170[0] = puVar4 + 0x18;
  *(undefined8 *)((long)&uStack_e8 + lVar6) = 0;
  *(undefined4 *)((long)auStack_e0 + lVar6) = 0xffffffff;
                    /* try { // try from 004866f8 to 004866ff has its CatchHandler @ 0048681c */
  local_100[0] = puVar1;
  FUN_007160dc(local_170 + 1);
  puVar1 = PTR_DAT_007a10f8;
  local_170[1] = PTR_DAT_007a10f8 + 0x10;
  uStack_120 = 0;
  local_128 = 0;
  uStack_110 = 0;
  local_118 = (void *)0x0;
  local_108 = 0x10;
                    /* try { // try from 00486724 to 00486733 has its CatchHandler @ 00486810 */
  FUN_0063b074(&local_188,param_2);
  puVar3 = local_178;
  if ((local_188 & 1) == 0) {
    local_180 = (ulong)(local_188 >> 1);
    puVar3 = auStack_187;
  }
                    /* try { // try from 0048674c to 00486753 has its CatchHandler @ 004867f4 */
  FUN_00303e0c(local_170,puVar3,local_180);
  if ((local_188 & 1) != 0) {
    free(local_178);
  }
                    /* try { // try from 00486764 to 0048676f has its CatchHandler @ 004867f0 */
  FUN_00718470(param_1,local_170 + 1);
  local_170[0] = *(undefined **)puVar5;
  *(undefined8 *)((long)local_170 + *(long *)(local_170[0] + -0x18)) =
       *(undefined8 *)(puVar5 + 0x18);
  local_170[1] = puVar1 + 0x10;
  if ((local_128 & 1) != 0) {
    free(local_118);
  }
  FUN_00716098(local_170 + 1);
  FUN_00716ee4(local_170,puVar5 + 8);
  thunk_FUN_00715e00(local_100);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00486850  FUN_00486850 =====

void FUN_00486850(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0078fd18;
  FUN_00712454();
  return;
}


// ===== 00486864  FUN_00486864 =====

void FUN_00486864(long *param_1)

{
  *param_1 = (long)(PTR_DAT_007a1e78 + 0x10);
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 00486898  FUN_00486898 =====

void FUN_00486898(void)

{
  return;
}


// ===== 0048689c  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 004868a0  FUN_004868a0 =====

void FUN_004868a0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_002f9e60("vector");
}


// ===== 004868b4  FUN_004868b4 =====

void FUN_004868b4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_002f9e60("vector");
}


// ===== 004868c8  FUN_004868c8 =====

void FUN_004868c8(long param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  long lVar3;
  void *pvVar4;
  byte *pbVar5;
  byte *pbVar6;
  long *plVar7;
  byte *pbVar8;
  void *pvVar9;
  
  pvVar2 = *(void **)(param_1 + 0xb8);
  if (pvVar2 != (void *)0x0) {
    *(void **)(param_1 + 0xc0) = pvVar2;
    free(pvVar2);
  }
  pvVar2 = *(void **)(param_1 + 0xa0);
  if (pvVar2 != (void *)0x0) {
    pvVar9 = *(void **)(param_1 + 0xa8);
    pvVar4 = pvVar2;
    if (pvVar9 != pvVar2) {
      do {
        plVar7 = *(long **)((long)pvVar9 + -0x10);
        if ((plVar7 != (long *)0x0) &&
           (lVar3 = FUN_00755c50(0xffffffffffffffff,plVar7 + 1), lVar3 == 0)) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          FUN_0071245c(plVar7);
        }
        pvVar9 = (void *)((long)pvVar9 + -0x18);
      } while (pvVar9 != pvVar2);
      pvVar4 = *(void **)(param_1 + 0xa0);
    }
    *(void **)(param_1 + 0xa8) = pvVar2;
    free(pvVar4);
  }
  puVar1 = (undefined8 *)*(void **)(param_1 + 0x88);
  while (puVar1 != (undefined8 *)0x0) {
    pvVar2 = (void *)*puVar1;
    if ((*(byte *)(puVar1 + 2) & 1) != 0) {
      free((void *)puVar1[4]);
    }
    free(puVar1);
    puVar1 = (undefined8 *)pvVar2;
  }
  pvVar2 = *(void **)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = 0;
  if (pvVar2 != (void *)0x0) {
    free(pvVar2);
  }
  pbVar6 = *(byte **)(param_1 + 0x60);
  if (pbVar6 != (byte *)0x0) {
    pbVar5 = *(byte **)(param_1 + 0x68);
    pbVar8 = pbVar6;
    if (pbVar5 != pbVar6) {
      do {
        pbVar8 = pbVar5 + -0x18;
        if ((*pbVar8 & 1) != 0) {
          free(*(void **)(pbVar5 + -8));
        }
        pbVar5 = pbVar8;
      } while (pbVar8 != pbVar6);
      pbVar8 = *(byte **)(param_1 + 0x60);
    }
    *(byte **)(param_1 + 0x68) = pbVar6;
    free(pbVar8);
  }
  pvVar2 = *(void **)(param_1 + 0x48);
  if (pvVar2 != (void *)0x0) {
    pvVar9 = *(void **)(param_1 + 0x50);
    pvVar4 = pvVar2;
    if (pvVar9 != pvVar2) {
      do {
        plVar7 = *(long **)((long)pvVar9 + -0x10);
        if ((plVar7 != (long *)0x0) &&
           (lVar3 = FUN_00755c50(0xffffffffffffffff,plVar7 + 1), lVar3 == 0)) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          FUN_0071245c(plVar7);
        }
        pvVar9 = (void *)((long)pvVar9 + -0x18);
      } while (pvVar9 != pvVar2);
      pvVar4 = *(void **)(param_1 + 0x48);
    }
    *(void **)(param_1 + 0x50) = pvVar2;
    free(pvVar4);
  }
  puVar1 = (undefined8 *)*(void **)(param_1 + 0x30);
  while (puVar1 != (undefined8 *)0x0) {
    pvVar2 = (void *)*puVar1;
    if ((*(byte *)(puVar1 + 2) & 1) != 0) {
      free((void *)puVar1[4]);
    }
    free(puVar1);
    puVar1 = (undefined8 *)pvVar2;
  }
  pvVar2 = *(void **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (pvVar2 != (void *)0x0) {
    free(pvVar2);
  }
  pbVar6 = *(byte **)(param_1 + 8);
  if (pbVar6 != (byte *)0x0) {
    pbVar5 = *(byte **)(param_1 + 0x10);
    pbVar8 = pbVar6;
    if (pbVar5 != pbVar6) {
      do {
        pbVar8 = pbVar5 + -0x18;
        if ((*pbVar8 & 1) != 0) {
          free(*(void **)(pbVar5 + -8));
        }
        pbVar5 = pbVar8;
      } while (pbVar8 != pbVar6);
      pbVar8 = *(byte **)(param_1 + 8);
    }
    *(byte **)(param_1 + 0x10) = pbVar6;
    free(pbVar8);
    return;
  }
  return;
}


// ===== 00486af0  FUN_00486af0 =====

void FUN_00486af0(void)

{
  return;
}


// ===== 00486af4  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00486af8  FUN_00486af8 =====

void FUN_00486af8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00759c3c(0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_0078fd50;
  puVar1[1] = uVar2;
  return;
}


// ===== 00486b2c  FUN_00486b2c =====

void FUN_00486b2c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_0078fd50;
  param_2[1] = uVar1;
  return;
}


// ===== 00486b40  FUN_00486b40 =====

void FUN_00486b40(void)

{
  return;
}


// ===== 00486b44  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00486b48  FUN_00486b48 =====

void FUN_00486b48(long param_1,long *param_2)

{
  if (*param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00486b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 8) + 0x10))();
    return;
  }
  return;
}


// ===== 00486b60  FUN_00486b60 =====

void FUN_00486b60(void)

{
  return;
}


// ===== 00486b64  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00486b68  FUN_00486b68 =====

void FUN_00486b68(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00759c3c(0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_0078fd98;
  puVar1[1] = uVar2;
  return;
}


// ===== 00486b9c  FUN_00486b9c =====

void FUN_00486b9c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_0078fd98;
  param_2[1] = uVar1;
  return;
}


// ===== 00486bb0  FUN_00486bb0 =====

void FUN_00486bb0(void)

{
  return;
}


// ===== 00486bb4  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00486bb8  FUN_00486bb8 =====

void FUN_00486bb8(long param_1,long *param_2)

{
  if (*param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00486bc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 8) + 0x10))();
    return;
  }
  return;
}


// ===== 00486bd0  FUN_00486bd0 =====

void FUN_00486bd0(void)

{
  return;
}


// ===== 00486bd4  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00486bd8  FUN_00486bd8 =====

void FUN_00486bd8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00759c3c(0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_0078fde0;
  puVar1[1] = uVar2;
  return;
}


// ===== 00486c0c  FUN_00486c0c =====

void FUN_00486c0c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_0078fde0;
  param_2[1] = uVar1;
  return;
}


// ===== 00486c20  FUN_00486c20 =====

void FUN_00486c20(void)

{
  return;
}


// ===== 00486c24  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00486c28  FUN_00486c28 =====

void FUN_00486c28(long param_1,long *param_2)

{
  if (*param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00486c38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 8) + 0x10))();
    return;
  }
  return;
}


// ===== 00486c40  FUN_00486c40 =====

void FUN_00486c40(ulong *param_1)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  void *__ptr;
  long *plVar5;
  ulong *puVar6;
  
  uVar4 = *param_1;
  puVar6 = param_1 + 1;
  uVar3 = uVar4 & 1;
  puVar1 = puVar6;
  if (uVar3 != 0) {
    puVar1 = (ulong *)*puVar6;
  }
  if (1 < uVar4) {
    uVar4 = uVar4 >> 1;
    do {
      __ptr = (void *)puVar1[uVar4 - 1];
      puVar1[uVar4 - 1] = 0;
      if (__ptr != (void *)0x0) {
        plVar5 = *(long **)((long)__ptr + 8);
        if ((plVar5 != (long *)0x0) &&
           (lVar2 = FUN_00755c50(0xffffffffffffffff,plVar5 + 1), lVar2 == 0)) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
          FUN_0071245c(plVar5);
        }
        free(__ptr);
      }
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
    uVar3 = *param_1 & 1;
  }
  if (uVar3 != 0) {
    free((void *)*puVar6);
    return;
  }
  return;
}


// ===== 00486d0c  FUN_00486d0c =====

void FUN_00486d0c(ulong *param_1,ulong param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  void *__ptr;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  uVar8 = *param_1;
  uVar10 = uVar8 & 1;
  puVar1 = param_1 + 1;
  uVar4 = 6;
  if (uVar10 != 0) {
    puVar1 = (ulong *)param_1[1];
    uVar4 = param_1[2];
  }
  if (param_2 <= uVar4) {
    return;
  }
  uVar4 = uVar4 * 2;
  if (uVar4 < param_2 || uVar4 - param_2 == 0) {
    uVar4 = param_2;
  }
  if (uVar4 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_002f9ee0();
  }
  puVar2 = (ulong *)FUN_00759c3c(uVar4 << 3);
  if (uVar8 < 2) goto LAB_00486e64;
  uVar10 = uVar8 >> 1;
  if ((uVar8 < 0xc) || (puVar1 < puVar2 + uVar10 && puVar2 < puVar1 + uVar10)) {
    uVar8 = 0;
    puVar5 = puVar1;
LAB_00486de4:
    lVar3 = uVar10 - uVar8;
    puVar6 = puVar2 + uVar8;
    do {
      uVar8 = *puVar5;
      lVar3 = lVar3 + -1;
      *puVar5 = 0;
      *puVar6 = uVar8;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    } while (lVar3 != 0);
  }
  else {
    uVar8 = uVar10 & 0x7ffffffffffffffc;
    puVar5 = puVar2 + 2;
    puVar6 = puVar1 + 2;
    uVar7 = uVar8;
    do {
      uVar12 = puVar6[-1];
      uVar11 = puVar6[-2];
      uVar14 = puVar6[1];
      uVar13 = *puVar6;
      uVar7 = uVar7 - 4;
      puVar6[-1] = 0;
      puVar6[-2] = 0;
      puVar6[1] = 0;
      *puVar6 = 0;
      puVar6 = puVar6 + 4;
      puVar5[-1] = uVar12;
      puVar5[-2] = uVar11;
      puVar5[1] = uVar14;
      *puVar5 = uVar13;
      puVar5 = puVar5 + 4;
    } while (uVar7 != 0);
    puVar5 = puVar1 + uVar8;
    if (uVar10 != uVar8) goto LAB_00486de4;
  }
  do {
    __ptr = (void *)puVar1[uVar10 - 1];
    puVar1[uVar10 - 1] = 0;
    if (__ptr != (void *)0x0) {
      plVar9 = *(long **)((long)__ptr + 8);
      if ((plVar9 != (long *)0x0) &&
         (lVar3 = FUN_00755c50(0xffffffffffffffff,plVar9 + 1), lVar3 == 0)) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        FUN_0071245c(plVar9);
      }
      free(__ptr);
    }
    uVar10 = uVar10 - 1;
  } while (uVar10 != 0);
  uVar8 = *param_1;
  uVar10 = uVar8 & 1;
LAB_00486e64:
  if (uVar10 != 0) {
    free((void *)param_1[1]);
    uVar8 = *param_1;
  }
  param_1[1] = (ulong)puVar2;
  param_1[2] = uVar4;
  *param_1 = uVar8 | 1;
  return;
}


// ===== 00486e9c  FUN_00486e9c =====

ulong * FUN_00486e9c(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  long lVar8;
  ulong *puVar9;
  ulong *puVar10;
  void *__ptr;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  
  uVar13 = *param_1;
  uVar7 = uVar13 & 1;
  uVar2 = 0xc;
  if (uVar7 != 0) {
    uVar2 = param_1[2] << 1;
  }
  puVar3 = param_1 + 1;
  if (uVar7 != 0) {
    puVar3 = (ulong *)param_1[1];
  }
  if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_002f9ee0();
  }
  uVar12 = uVar13 >> 1;
  puVar4 = (ulong *)FUN_00759c3c(uVar2 << 3);
  uVar5 = *param_2;
  puVar1 = puVar4 + uVar12;
  *param_2 = 0;
  *puVar1 = uVar5;
  if (uVar13 < 2) goto LAB_00486fc0;
  if ((uVar13 < 0xc) || ((puVar3 < puVar4 + uVar12 && (puVar4 < puVar3 + uVar12)))) {
    uVar7 = 0;
    puVar6 = puVar3;
LAB_00486f40:
    lVar8 = uVar12 - uVar7;
    puVar9 = puVar4 + uVar7;
    do {
      uVar7 = *puVar6;
      lVar8 = lVar8 + -1;
      *puVar6 = 0;
      *puVar9 = uVar7;
      puVar6 = puVar6 + 1;
      puVar9 = puVar9 + 1;
    } while (lVar8 != 0);
  }
  else {
    uVar7 = uVar12 & 0x7ffffffffffffffc;
    puVar9 = puVar4 + 2;
    puVar6 = puVar3 + uVar7;
    puVar10 = puVar3 + 2;
    uVar13 = uVar7;
    do {
      uVar14 = puVar10[-1];
      uVar5 = puVar10[-2];
      uVar16 = puVar10[1];
      uVar15 = *puVar10;
      uVar13 = uVar13 - 4;
      puVar10[-1] = 0;
      puVar10[-2] = 0;
      puVar10[1] = 0;
      *puVar10 = 0;
      puVar10 = puVar10 + 4;
      puVar9[-1] = uVar14;
      puVar9[-2] = uVar5;
      puVar9[1] = uVar16;
      *puVar9 = uVar15;
      puVar9 = puVar9 + 4;
    } while (uVar13 != 0);
    if (uVar12 != uVar7) goto LAB_00486f40;
  }
  do {
    __ptr = (void *)puVar3[uVar12 - 1];
    puVar3[uVar12 - 1] = 0;
    if (__ptr != (void *)0x0) {
      plVar11 = *(long **)((long)__ptr + 8);
      if ((plVar11 != (long *)0x0) &&
         (lVar8 = FUN_00755c50(0xffffffffffffffff,plVar11 + 1), lVar8 == 0)) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        FUN_0071245c(plVar11);
      }
      free(__ptr);
    }
    uVar12 = uVar12 - 1;
  } while (uVar12 != 0);
  uVar13 = *param_1;
  uVar7 = uVar13 & 1;
LAB_00486fc0:
  if (uVar7 != 0) {
    free((void *)param_1[1]);
    uVar13 = *param_1;
  }
  param_1[1] = (ulong)puVar4;
  param_1[2] = uVar2;
  *param_1 = (uVar13 | 1) + 2;
  return puVar1;
}


// ===== 00487044  FUN_00487044 =====

void FUN_00487044(undefined8 *param_1,byte *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((*param_2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_2 + 8);
    uVar2 = *(undefined8 *)param_2;
    param_1[2] = *(undefined8 *)(param_2 + 0x10);
    param_1[1] = uVar3;
    *param_1 = uVar2;
    bVar1 = param_2[0x18];
  }
  else {
    FUN_002fb36c(param_1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 8));
    bVar1 = param_2[0x18];
  }
  if ((bVar1 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_2 + 0x20);
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    param_1[5] = *(undefined8 *)(param_2 + 0x28);
    param_1[4] = uVar3;
    param_1[3] = uVar2;
    bVar1 = param_2[0x30];
  }
  else {
                    /* try { // try from 00487080 to 00487087 has its CatchHandler @ 00487190 */
    FUN_002fb36c(param_1 + 3,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x20));
    bVar1 = param_2[0x30];
  }
  if ((bVar1 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_2 + 0x38);
    uVar2 = *(undefined8 *)(param_2 + 0x30);
    param_1[8] = *(undefined8 *)(param_2 + 0x40);
    param_1[7] = uVar3;
    param_1[6] = uVar2;
  }
  else {
                    /* try { // try from 004870e0 to 004870e7 has its CatchHandler @ 00487180 */
    FUN_002fb36c(param_1 + 6,*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(param_2 + 0x38));
  }
  if ((param_2[0x48] & 1) == 0) {
    uVar3 = *(undefined8 *)(param_2 + 0x50);
    uVar2 = *(undefined8 *)(param_2 + 0x48);
    param_1[0xb] = *(undefined8 *)(param_2 + 0x58);
    param_1[10] = uVar3;
    param_1[9] = uVar2;
  }
  else {
                    /* try { // try from 0048710c to 00487113 has its CatchHandler @ 00487170 */
    FUN_002fb36c(param_1 + 9,*(undefined8 *)(param_2 + 0x58),*(undefined8 *)(param_2 + 0x50));
  }
  if ((param_2[0x60] & 1) == 0) {
    uVar3 = *(undefined8 *)(param_2 + 0x68);
    uVar2 = *(undefined8 *)(param_2 + 0x60);
    param_1[0xe] = *(undefined8 *)(param_2 + 0x70);
    param_1[0xd] = uVar3;
    param_1[0xc] = uVar2;
  }
  else {
                    /* try { // try from 00487138 to 0048713f has its CatchHandler @ 00487160 */
    FUN_002fb36c(param_1 + 0xc,*(undefined8 *)(param_2 + 0x70),*(undefined8 *)(param_2 + 0x68));
  }
  param_1[0xf] = *(undefined8 *)(param_2 + 0x78);
                    /* try { // try from 00487148 to 00487153 has its CatchHandler @ 004871a0 */
  FUN_00480444(param_1 + 0x10,param_2 + 0x80);
  return;
}


// ===== 00487224  FUN_00487224 =====

long * FUN_00487224(long *param_1,byte *param_2)

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
                    /* try { // try from 0048726c to 00487273 has its CatchHandler @ 00487474 */
  uVar8 = FUN_0034bfb4(&uStack_59,pbVar3,uVar8);
  uVar12 = param_1[1];
  if (uVar12 == 0) {
LAB_0048743c:
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
          if (plVar9[1] == uVar8) {
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
                  if (bVar4 >> 1 == uVar10) goto LAB_00487440;
                }
              }
              else {
                iVar7 = memcmp((void *)plVar9[4],pbVar3,plVar9[3]);
                if (iVar7 == 0) break;
              }
            }
          }
          else if ((plVar9[1] & uVar12 - 1) != uVar11) goto LAB_0048743c;
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
      else {
        do {
          uVar10 = plVar9[1];
          if (uVar10 == uVar8) {
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
                  if (bVar4 >> 1 == uVar10) goto LAB_00487440;
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
            if (uVar10 != uVar11) goto LAB_0048743c;
          }
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
    }
  }
LAB_00487440:
  if (*(long *)(lVar6 + 0x28) == local_58) {
    return plVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00487478  FUN_00487478 =====

void FUN_00487478(ulong *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  
  uVar3 = *param_1;
  puVar4 = param_1 + 1;
  uVar2 = uVar3 & 1;
  puVar1 = puVar4;
  if (uVar2 != 0) {
    puVar1 = (ulong *)*puVar4;
  }
  if (1 < uVar3) {
    uVar3 = uVar3 >> 1;
    puVar1 = puVar1 + uVar3 * 2;
    do {
      puVar5 = puVar1 + -2;
      uVar2 = *puVar5;
      *puVar5 = 0;
      if (uVar2 != 0) {
                    /* try { // try from 004874d8 to 004874db has its CatchHandler @ 00487510 */
        (**(code **)(puVar1[-1] + 0x10))();
      }
      uVar3 = uVar3 - 1;
      puVar1 = puVar5;
    } while (uVar3 != 0);
    uVar2 = *param_1 & 1;
  }
  if (uVar2 != 0) {
    free((void *)*puVar4);
    return;
  }
  return;
}


// ===== 00487514  FUN_00487514 =====

void FUN_00487514(ulong *param_1,ulong param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar9 = *param_1;
  uVar4 = uVar9 & 1;
  puVar2 = param_1 + 1;
  uVar5 = 3;
  if (uVar4 != 0) {
    puVar2 = (ulong *)param_1[1];
    uVar5 = param_1[2];
  }
  if (uVar5 < param_2) {
    uVar5 = uVar5 * 2;
    if (uVar5 < param_2 || uVar5 - param_2 == 0) {
      uVar5 = param_2;
    }
    if (uVar5 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_002f9ee0();
    }
    uVar3 = FUN_00759c3c(uVar5 << 4);
    if (1 < uVar9) {
      uVar9 = uVar9 >> 1;
      puVar6 = (ulong *)(uVar3 + 8);
      uVar4 = uVar9;
      puVar7 = puVar2;
      do {
        uVar8 = *puVar7;
        *puVar7 = 0;
        uVar4 = uVar4 - 1;
        puVar6[-1] = uVar8;
        puVar1 = puVar7 + 1;
        puVar7 = puVar7 + 2;
        *puVar6 = *puVar1;
        puVar6 = puVar6 + 2;
      } while (uVar4 != 0);
      puVar2 = puVar2 + uVar9 * 2;
      do {
        puVar7 = puVar2 + -2;
        uVar4 = *puVar7;
        *puVar7 = 0;
        if (uVar4 != 0) {
                    /* try { // try from 004875d8 to 004875db has its CatchHandler @ 0048761c */
          (**(code **)(puVar2[-1] + 0x10))();
        }
        uVar9 = uVar9 - 1;
        puVar2 = puVar7;
      } while (uVar9 != 0);
      uVar9 = *param_1;
      uVar4 = uVar9 & 1;
    }
    if (uVar4 != 0) {
      free((void *)param_1[1]);
      uVar9 = *param_1;
    }
    param_1[1] = uVar3;
    param_1[2] = uVar5;
    *param_1 = uVar9 | 1;
  }
  return;
}


// ===== 00487620  FUN_00487620 =====

undefined8 * FUN_00487620(ulong *param_1,undefined8 *param_2)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  
  uVar12 = *param_1;
  uVar8 = uVar12 & 1;
  uVar3 = 6;
  if (uVar8 != 0) {
    uVar3 = param_1[2] << 1;
  }
  puVar4 = param_1 + 1;
  if (uVar8 != 0) {
    puVar4 = (ulong *)param_1[1];
  }
  if (uVar3 >> 0x3c == 0) {
    uVar11 = uVar12 >> 1;
    uVar7 = FUN_00759c3c(uVar3 << 4);
    uVar5 = *param_2;
    uVar6 = param_2[1];
    puVar2 = (undefined8 *)(uVar7 + uVar11 * 0x10);
    *param_2 = 0;
    *puVar2 = uVar5;
    puVar2[1] = uVar6;
    if (1 < uVar12) {
      puVar9 = (ulong *)(uVar7 + 8);
      uVar8 = uVar11;
      puVar10 = puVar4;
      do {
        uVar12 = *puVar10;
        *puVar10 = 0;
        uVar8 = uVar8 - 1;
        puVar9[-1] = uVar12;
        puVar1 = puVar10 + 1;
        puVar10 = puVar10 + 2;
        *puVar9 = *puVar1;
        puVar9 = puVar9 + 2;
      } while (uVar8 != 0);
      puVar4 = puVar4 + uVar11 * 2;
      do {
        puVar10 = puVar4 + -2;
        uVar8 = *puVar10;
        *puVar10 = 0;
        if (uVar8 != 0) {
                    /* try { // try from 004876f0 to 004876f3 has its CatchHandler @ 00487744 */
          (**(code **)(puVar4[-1] + 0x10))();
        }
        uVar11 = uVar11 - 1;
        puVar4 = puVar10;
      } while (uVar11 != 0);
      uVar12 = *param_1;
      uVar8 = uVar12 & 1;
    }
    if (uVar8 != 0) {
      free((void *)param_1[1]);
      uVar12 = *param_1;
    }
    param_1[1] = uVar7;
    param_1[2] = uVar3;
    *param_1 = (uVar12 | 1) + 2;
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_002f9ee0();
}


// ===== 00487748  FUN_00487748 =====

void FUN_00487748(ulong *param_1,undefined8 param_2,ulong *param_3,ulong *param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = *param_3;
  if ((uVar3 == *param_4) && (uVar2 = param_3[1], uVar2 == param_4[1])) {
    uVar1 = param_3[2];
    while( true ) {
      if (uVar1 == param_4[2]) {
        uVar2 = *param_3;
        uVar3 = param_3[2];
        param_1[1] = param_3[1];
        *param_1 = uVar2;
        param_1[2] = uVar3;
        param_1[3] = param_5;
        return;
      }
      if ((((uVar3 == 0) || (uVar2 == 0)) || (uVar1 < uVar3)) || (uVar2 <= uVar1)) break;
      FUN_007139b0(param_5);
      uVar3 = *param_3;
      if (((uVar3 == 0) || (uVar1 = param_3[2], uVar1 == 0)) ||
         ((uVar2 = param_3[1], uVar2 == 0 || (uVar2 <= uVar1)))) break;
      uVar4 = *param_4;
      uVar1 = uVar1 + 0x18;
      param_3[2] = uVar1;
      if ((uVar3 != uVar4) || (param_5 = param_5 + 0x18, uVar2 != param_4[1])) break;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_004839bc();
}


// ===== 00487820  FUN_00487820 =====

void FUN_00487820(long *param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *param_2;
  puVar1 = PTR_DAT_007a1e60 + 0x10;
  param_1[7] = param_2[1];
  param_1[6] = lVar2;
  *param_1 = (long)puVar1;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_1 + 1) = 0x12;
  param_1[2] = (long)FUN_0048832c;
  param_1[3] = (long)FUN_0048833c;
  param_1[4] = (long)FUN_0048834c;
  param_1[5] = (long)FUN_00488358;
  return;
}


// ===== 00487870  FUN_00487870 =====

void FUN_00487870(long *param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  plVar2 = (long *)(**(code **)(param_2 + 0x18))(param_2);
  puVar1 = PTR_DAT_007a1e70;
  *param_1 = (long)(PTR_DAT_007a1e68 + 0x10);
  lVar5 = plVar2[1];
  lVar4 = *plVar2;
  lVar3 = plVar2[2];
  *param_1 = (long)(puVar1 + 0x10);
  param_1[2] = lVar5;
  param_1[1] = lVar4;
  param_1[3] = lVar3;
  param_1[4] = param_2;
  return;
}


// ===== 004878cc  FUN_004878cc =====

void FUN_004878cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004878d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 8))();
  return;
}


// ===== 004878d8  FUN_004878d8 =====

void FUN_004878d8(long param_1)

{
  uint *puVar1;
  
  puVar1 = *(uint **)(param_1 + 0x20);
  if ((0x11 < *puVar1) && (*(code **)(puVar1 + 8) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x004878f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(puVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004878f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(puVar1 + 2))();
  return;
}


// ===== 004878fc  FUN_004878fc =====

void FUN_004878fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00487904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}


// ===== 00487908  FUN_00487908 =====

undefined8 FUN_00487908(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long local_48;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0048792c to 00487933 has its CatchHandler @ 00487a00 */
  FUN_00495310(&local_48);
  if (local_48 == 0) {
    uVar4 = FUN_00580398(2,"No requested allocator available");
    plVar2 = local_40;
  }
  else {
                    /* try { // try from 0048793c to 00487943 has its CatchHandler @ 004879ec */
    lVar3 = FUN_00759c3c(0x40);
                    /* try { // try from 00487944 to 0048794f has its CatchHandler @ 004879d8 */
    FUN_00487820(lVar3,&local_48);
    uVar4 = 0;
    *param_3 = lVar3 + 8;
    plVar2 = local_40;
  }
  if ((plVar2 != (long *)0x0) && (lVar3 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar3 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00487a8c  FUN_00487a8c =====

void FUN_00487a8c(long param_1,long param_2)

{
  long lVar1;
  void *__ptr;
  byte *pbVar2;
  byte *pbVar3;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 == 0) {
    if (*(long *)(lVar1 + 0x28) == local_38) {
      FUN_00580398(2,"Env is null");
      return;
    }
  }
  else if (param_2 == 0) {
    if (*(long *)(lVar1 + 0x28) == local_38) {
      FUN_00580398(2,"OrtMemoryInfo is null");
      return;
    }
  }
  else {
                    /* try { // try from 00487ab4 to 00487abb has its CatchHandler @ 00487ba0 */
    FUN_004a7810(&local_40);
    if (local_40 == (void *)0x0) {
      param_1 = 0;
    }
    else {
      pbVar2 = (byte *)FUN_0063afd8(&local_40);
      pbVar3 = *(byte **)(pbVar2 + 0x10);
      if ((*pbVar2 & 1) == 0) {
        pbVar3 = pbVar2 + 1;
      }
      param_1 = FUN_00580398(2,pbVar3);
      __ptr = local_40;
      local_40 = (void *)0x0;
      if (__ptr != (void *)0x0) {
        if ((*(byte *)((long)__ptr + 8) & 1) != 0) {
          free(*(void **)((long)__ptr + 0x18));
        }
        free(__ptr);
      }
    }
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00487ba4  FUN_00487ba4 =====

undefined8 FUN_00487ba4(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  void *__ptr;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  byte *pbVar7;
  char *pcVar8;
  byte *pbVar9;
  long *plVar10;
  long *local_60;
  long *local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_1 == 0) {
    if (*(long *)(lVar1 + 0x28) == local_48) {
      pcVar8 = "Env is null";
LAB_00487c40:
      uVar5 = FUN_00580398(2,pcVar8);
      return uVar5;
    }
  }
  else if (param_2 == 0) {
    if (*(long *)(lVar1 + 0x28) == local_48) {
      pcVar8 = "Provided allocator is null";
      goto LAB_00487c40;
    }
  }
  else {
                    /* try { // try from 00487bd8 to 00487c63 has its CatchHandler @ 00487dcc */
    lVar4 = (**(code **)(param_2 + 0x18))(param_2);
    if (*(int *)(lVar4 + 0x10) == 1) {
      if (*(long *)(lVar1 + 0x28) == local_48) {
        pcVar8 = 
        "Please register the allocator as OrtDeviceAllocator even if the provided allocator has arena logic built-in. OrtArenaAllocator is reserved for internal arena logic based allocators only."
        ;
        goto LAB_00487c40;
      }
    }
    else {
      plVar6 = (long *)FUN_00759c3c(0x40);
      puVar2 = PTR_DAT_007a1e78;
      plVar6[2] = 0;
      plVar10 = plVar6 + 1;
      *plVar10 = 0;
      *plVar6 = (long)(puVar2 + 0x10);
                    /* try { // try from 00487c88 to 00487c93 has its CatchHandler @ 00487db0 */
      FUN_00487870(plVar6 + 3,param_2);
      local_60 = plVar6 + 3;
      local_58 = plVar6;
      FUN_00755c20(1,plVar6 + 1);
                    /* try { // try from 00487ca4 to 00487cb3 has its CatchHandler @ 00487dcc */
      FUN_004a7744(&local_50,param_1,&local_60);
      plVar3 = local_58;
      if ((local_58 != (long *)0x0) &&
         (lVar4 = FUN_00755c50(0xffffffffffffffff,local_58 + 1), lVar4 == 0)) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        FUN_0071245c(plVar3);
      }
      if (local_50 == (void *)0x0) {
        uVar5 = 0;
        lVar4 = FUN_00755c50(0xffffffffffffffff,plVar10);
      }
      else {
        pbVar7 = (byte *)FUN_0063afd8(&local_50);
        pbVar9 = *(byte **)(pbVar7 + 0x10);
        if ((*pbVar7 & 1) == 0) {
          pbVar9 = pbVar7 + 1;
        }
        uVar5 = FUN_00580398(2,pbVar9);
        __ptr = local_50;
        local_50 = (void *)0x0;
        if (__ptr != (void *)0x0) {
          if ((*(byte *)((long)__ptr + 8) & 1) != 0) {
            free(*(void **)((long)__ptr + 0x18));
          }
          free(__ptr);
        }
        lVar4 = FUN_00755c50(0xffffffffffffffff,plVar10);
      }
      if (lVar4 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        FUN_0071245c(plVar6);
        if (*(long *)(lVar1 + 0x28) == local_48) {
          return uVar5;
        }
      }
      else if (*(long *)(lVar1 + 0x28) == local_48) {
        return uVar5;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00487dd0  FUN_00487dd0 =====

void FUN_00487dd0(long param_1,long param_2)

{
  long lVar1;
  void *__ptr;
  byte *pbVar2;
  byte *pbVar3;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 == 0) {
    if (*(long *)(lVar1 + 0x28) == local_38) {
      FUN_00580398(2,"Env is null");
      return;
    }
  }
  else if (param_2 == 0) {
    if (*(long *)(lVar1 + 0x28) == local_38) {
      FUN_00580398(2,"Provided OrtMemoryInfo is null");
      return;
    }
  }
  else {
                    /* try { // try from 00487df8 to 00487dff has its CatchHandler @ 00487ee4 */
    FUN_004a7818(&local_40);
    if (local_40 == (void *)0x0) {
      param_1 = 0;
    }
    else {
      pbVar2 = (byte *)FUN_0063afd8(&local_40);
      pbVar3 = *(byte **)(pbVar2 + 0x10);
      if ((*pbVar2 & 1) == 0) {
        pbVar3 = pbVar2 + 1;
      }
      param_1 = FUN_00580398(2,pbVar3);
      __ptr = local_40;
      local_40 = (void *)0x0;
      if (__ptr != (void *)0x0) {
        if ((*(byte *)((long)__ptr + 8) & 1) != 0) {
          free(*(void **)((long)__ptr + 0x18));
        }
        free(__ptr);
      }
    }
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00487ee8  FUN_00487ee8 =====

void FUN_00487ee8(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00487ef4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + -8) + 8))();
    return;
  }
  return;
}


// ===== 00487efc  FUN_00487efc =====

undefined8
FUN_00487efc(long param_1,char *param_2,long param_3,undefined8 param_4,undefined8 *param_5,
            undefined8 *param_6,long param_7)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  undefined8 *__ptr;
  ulong *__ptr_00;
  char *pcVar4;
  size_t sVar5;
  long lVar6;
  byte *pbVar7;
  undefined8 uVar8;
  byte *pbVar9;
  void *pvVar10;
  void *pvVar11;
  char *__s;
  ulong local_b8;
  size_t local_b0;
  void *local_a8;
  undefined1 uStack_99;
  ulong *local_98;
  void *local_90;
  undefined8 uStack_88;
  undefined8 *local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uStack_88 = 0;
  local_90 = (void *)0x0;
  uStack_78 = 0;
  local_80 = (undefined8 *)0x0;
  local_70 = 0x3f800000;
  if (param_7 != 0) {
    pvVar11 = (void *)((ulong)&local_b8 | 1);
    do {
      pcVar4 = (char *)*param_5;
      if ((((pcVar4 == (char *)0x0) || (*pcVar4 == '\0')) ||
          (__s = (char *)*param_6, __s == (char *)0x0)) || (*__s == '\0')) {
        pcVar4 = "Provider options key/value cannot be empty";
        goto LAB_004880d8;
      }
      sVar5 = strlen(pcVar4);
      if ((0x400 < sVar5) || (sVar5 = strlen(__s), 0x400 < sVar5)) {
        pcVar4 = "Maximum string length for a provider options key/value is 1024.";
        goto LAB_004880d8;
      }
      pcVar4 = (char *)*param_5;
      sVar5 = strlen(pcVar4);
      if (0xfffffffffffffff7 < sVar5) goto LAB_00488248;
      if (sVar5 < 0x17) {
        local_b8 = CONCAT71(local_b8._1_7_,(char)((int)sVar5 << 1));
        pvVar10 = pvVar11;
        if (sVar5 != 0) goto LAB_00488010;
      }
      else {
        uVar1 = (sVar5 & 0xfffffffffffffff8) + 8;
        if ((sVar5 | 7) != 0x17) {
          uVar1 = sVar5 | 7;
        }
                    /* try { // try from 00487ff8 to 00487fff has its CatchHandler @ 0048826c */
        pvVar10 = (void *)FUN_00759c3c(uVar1 + 1);
        local_b8 = uVar1 + 1 | 1;
        local_b0 = sVar5;
        local_a8 = pvVar10;
LAB_00488010:
        memmove(pvVar10,pcVar4,sVar5);
      }
      *(undefined1 *)((long)pvVar10 + sVar5) = 0;
                    /* try { // try from 00488028 to 0048804f has its CatchHandler @ 0048826c */
      local_98 = &local_b8;
      lVar6 = FUN_00488378(&local_90,&local_b8,PTR_DAT_007a10e8,&local_98,&uStack_99);
      FUN_0071396c(lVar6 + 0x28,__s);
      if ((local_b8 & 1) != 0) {
        free(local_a8);
      }
      param_7 = param_7 + -1;
      param_6 = param_6 + 1;
      param_5 = param_5 + 1;
    } while (param_7 != 0);
  }
  if (param_1 == 0) {
    pcVar4 = "Env is null";
LAB_004880d8:
    uVar8 = FUN_00580398(2,pcVar4);
    pvVar11 = local_90;
    __ptr = local_80;
  }
  else {
    if (param_3 == 0) {
      pcVar4 = "OrtMemoryInfo is null";
      goto LAB_004880d8;
    }
    sVar5 = strlen(param_2);
    if (0xfffffffffffffff7 < sVar5) {
LAB_00488248:
      if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_002fb400(&local_b8);
      }
      goto LAB_00488264;
    }
    if (sVar5 < 0x17) {
      pvVar11 = (void *)((ulong)&local_b8 | 1);
      local_b8 = CONCAT71(local_b8._1_7_,(char)((int)sVar5 << 1));
      if (sVar5 != 0) goto LAB_004881a8;
    }
    else {
      uVar1 = (sVar5 & 0xfffffffffffffff8) + 8;
      if ((sVar5 | 7) != 0x17) {
        uVar1 = sVar5 | 7;
      }
                    /* try { // try from 00488190 to 00488197 has its CatchHandler @ 00488268 */
      pvVar11 = (void *)FUN_00759c3c(uVar1 + 1);
      local_b8 = uVar1 + 1 | 1;
      local_b0 = sVar5;
      local_a8 = pvVar11;
LAB_004881a8:
      memcpy(pvVar11,param_2,sVar5);
    }
    *(undefined1 *)((long)pvVar11 + sVar5) = 0;
                    /* try { // try from 004881bc to 00488263 has its CatchHandler @ 00488268 */
    FUN_004a7820(&local_98,param_1,&local_b8,param_3,&local_90,param_4);
    if ((local_b8 & 1) != 0) {
      free(local_a8);
    }
    if (local_98 == (ulong *)0x0) {
      uVar8 = 0;
      local_98 = (ulong *)0x0;
      pvVar11 = local_90;
      __ptr = local_80;
    }
    else {
      pbVar7 = (byte *)FUN_0063afd8(&local_98);
      pbVar9 = *(byte **)(pbVar7 + 0x10);
      if ((*pbVar7 & 1) == 0) {
        pbVar9 = pbVar7 + 1;
      }
      uVar8 = FUN_00580398(2,pbVar9);
      __ptr_00 = local_98;
      local_98 = (ulong *)0x0;
      pvVar11 = local_90;
      __ptr = local_80;
      if (__ptr_00 != (ulong *)0x0) {
        if ((__ptr_00[1] & 1) != 0) {
          free((void *)__ptr_00[3]);
        }
        free(__ptr_00);
        pvVar11 = local_90;
        __ptr = local_80;
      }
    }
  }
  while (__ptr != (undefined8 *)0x0) {
    pvVar10 = (void *)*__ptr;
    local_90 = pvVar11;
    if ((*(byte *)(__ptr + 5) & 1) == 0) {
      bVar2 = *(byte *)(__ptr + 2);
    }
    else {
      free((void *)__ptr[7]);
      bVar2 = *(byte *)(__ptr + 2);
    }
    if ((bVar2 & 1) != 0) {
      free((void *)__ptr[4]);
    }
    free(__ptr);
    pvVar11 = local_90;
    __ptr = (undefined8 *)pvVar10;
  }
  local_90 = (void *)0x0;
  if (pvVar11 != (void *)0x0) {
    free(pvVar11);
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return uVar8;
  }
LAB_00488264:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00488270  FUN_00488270 =====

void FUN_00488270(void)

{
  return;
}


// ===== 00488274  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00488278  FUN_00488278 =====

void FUN_00488278(void)

{
  return;
}


// ===== 0048827c  FUN_0048827c =====

void FUN_0048827c(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x38);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 004882cc  FUN_004882cc =====

void FUN_004882cc(void *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)((long)param_1 + 0x38);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    free(param_1);
    return;
  }
  free(param_1);
  return;
}


// ===== 0048832c  FUN_0048832c =====

void FUN_0048832c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00488338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x28) + 0x10))();
  return;
}


// ===== 0048833c  FUN_0048833c =====

void FUN_0048833c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00488348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x28) + 0x18))();
  return;
}


// ===== 0048834c  FUN_0048834c =====

long FUN_0048834c(long param_1)

{
  return *(long *)(param_1 + 0x28) + 8;
}


// ===== 00488358  FUN_00488358 =====

void FUN_00488358(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00488364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x28) + 0x20))();
  return;
}


// ===== 00488368  FUN_00488368 =====

void FUN_00488368(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x48836c);
  (*pcVar1)();
}


// ===== 0048836c  FUN_0048836c =====

void FUN_0048836c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00488374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}


// ===== 00488378  FUN_00488378 =====

long * FUN_00488378(long *param_1,byte *param_2,undefined8 param_3,undefined8 *param_4)

{
  size_t sVar1;
  size_t sVar2;
  byte *pbVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  long *unaff_x26;
  undefined2 uVar18;
  undefined8 uVar19;
  float fVar20;
  long *local_80;
  long *plStack_78;
  undefined1 local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  uVar15 = *(ulong *)(param_2 + 8);
  pbVar3 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar3 = param_2 + 1;
    uVar15 = (ulong)(*param_2 >> 1);
  }
                    /* try { // try from 004883c8 to 004883cf has its CatchHandler @ 004887e0 */
  plVar8 = (long *)FUN_0034bfb4(&local_80,pbVar3,uVar15);
  plVar17 = (long *)param_1[1];
  if (plVar17 != (long *)0x0) {
    uVar19 = NEON_cnt(plVar17,1);
    uVar18 = NEON_uaddlv(uVar19,1);
    uVar15 = CONCAT62((int6)((ulong)uVar19 >> 0x10),uVar18) & 0xffffffff;
    if (uVar15 < 2) {
      unaff_x26 = (long *)((long)plVar17 - 1U & (ulong)plVar8);
    }
    else {
      unaff_x26 = plVar8;
      if (plVar17 <= plVar8) {
        uVar5 = 0;
        if (plVar17 != (long *)0x0) {
          uVar5 = (ulong)plVar8 / (ulong)plVar17;
        }
        unaff_x26 = (long *)((long)plVar8 - uVar5 * (long)plVar17);
      }
    }
    puVar14 = *(undefined8 **)(*param_1 + (long)unaff_x26 * 8);
    if ((puVar14 != (undefined8 *)0x0) && (plVar16 = (long *)*puVar14, plVar16 != (long *)0x0)) {
      sVar1 = (ulong)(*param_2 >> 1);
      pbVar3 = param_2 + 1;
      if ((*param_2 & 1) != 0) {
        sVar1 = *(size_t *)(param_2 + 8);
        pbVar3 = *(byte **)(param_2 + 0x10);
      }
      plVar10 = plVar8;
      if (uVar15 < 2) {
        do {
          if ((long *)plVar16[1] == plVar8) {
            bVar4 = *(byte *)(plVar16 + 2);
            sVar2 = (ulong)(bVar4 >> 1);
            if ((bVar4 & 1) != 0) {
              sVar2 = plVar16[3];
            }
            if (sVar2 == sVar1) {
              if ((bVar4 & 1) == 0) {
                if (bVar4 < 2) goto LAB_0048856c;
                uVar15 = 0;
                while (*(byte *)((long)plVar16 + uVar15 + 0x11) == pbVar3[uVar15]) {
                  uVar15 = uVar15 + 1;
                  if (bVar4 >> 1 == uVar15) goto LAB_0048856c;
                }
              }
              else {
                uVar7 = memcmp((void *)plVar16[4],pbVar3,plVar16[3]);
                plVar10 = (long *)(ulong)uVar7;
                if (uVar7 == 0) goto LAB_0048856c;
              }
            }
          }
          else if ((long *)((ulong)plVar16[1] & (long)plVar17 - 1U) != unaff_x26) break;
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
      else {
        do {
          plVar9 = (long *)plVar16[1];
          if (plVar9 == plVar8) {
            bVar4 = *(byte *)(plVar16 + 2);
            sVar2 = (ulong)(bVar4 >> 1);
            if ((bVar4 & 1) != 0) {
              sVar2 = plVar16[3];
            }
            if (sVar2 == sVar1) {
              if ((bVar4 & 1) == 0) {
                if (bVar4 < 2) goto LAB_0048856c;
                uVar15 = 0;
                while (*(byte *)((long)plVar16 + uVar15 + 0x11) == pbVar3[uVar15]) {
                  uVar15 = uVar15 + 1;
                  if (bVar4 >> 1 == uVar15) goto LAB_0048856c;
                }
              }
              else {
                uVar7 = memcmp((void *)plVar16[4],pbVar3,plVar16[3]);
                plVar10 = (long *)(ulong)uVar7;
                if (uVar7 == 0) goto LAB_0048856c;
              }
            }
          }
          else {
            if (plVar17 <= plVar9) {
              uVar15 = 0;
              if (plVar17 != (long *)0x0) {
                uVar15 = (ulong)plVar9 / (ulong)plVar17;
              }
              plVar9 = (long *)((long)plVar9 - uVar15 * (long)plVar17);
            }
            if (plVar9 != unaff_x26) break;
          }
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
    }
  }
  plVar9 = param_1 + 2;
  plVar16 = (long *)FUN_00759c3c(0x40);
  plVar10 = (long *)*param_4;
  *plVar16 = 0;
  plVar16[1] = (long)plVar8;
  lVar13 = plVar10[1];
  lVar11 = *plVar10;
  plVar16[4] = plVar10[2];
  plVar16[3] = lVar13;
  plVar16[2] = lVar11;
  plVar10[1] = 0;
  plVar10[2] = 0;
  *plVar10 = 0;
  lVar11 = param_1[3];
  fVar20 = *(float *)(param_1 + 4);
  plVar16[6] = 0;
  plVar16[7] = 0;
  plVar16[5] = 0;
  local_70 = 1;
  plVar10 = plVar16;
  local_80 = plVar16;
  plStack_78 = plVar9;
  if ((plVar17 == (long *)0x0) || (fVar20 * (float)plVar17 < (float)(lVar11 + 1))) {
    if (plVar17 < (long *)0x3) {
      uVar15 = 1;
    }
    else {
      uVar15 = (ulong)(((ulong)plVar17 & (long)plVar17 - 1U) != 0);
    }
    plVar17 = (long *)(uVar15 | (long)plVar17 << 1);
    plVar12 = (long *)(long)((float)(lVar11 + 1) / fVar20);
    if (plVar17 <= plVar12) {
      plVar17 = plVar12;
    }
    if ((long)plVar17 - 1U == 0) {
      plVar17 = (long *)0x2;
    }
    else if (((ulong)plVar17 & (long)plVar17 - 1U) != 0) {
                    /* try { // try from 00488640 to 004886c3 has its CatchHandler @ 004887b8 */
      plVar10 = (long *)FUN_00711ce0(plVar17);
      plVar17 = plVar10;
    }
    plVar12 = (long *)param_1[1];
    if (plVar12 < plVar17) {
LAB_00488658:
      plVar10 = (long *)FUN_00485ed4(param_1,plVar17);
    }
    else if (plVar17 < plVar12) {
      plVar10 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (plVar12 < (long *)0x3) {
LAB_004886c0:
        plVar10 = (long *)FUN_00711ce0();
      }
      else {
        uVar19 = NEON_cnt(plVar12,1);
        uVar18 = NEON_uaddlv(uVar19,1);
        if (1 < (CONCAT62((int6)((ulong)uVar19 >> 0x10),uVar18) & 0xffffffff)) goto LAB_004886c0;
        if ((long *)0x1 < plVar10) {
          plVar10 = (long *)(1L << (-LZCOUNT((long)plVar10 + -1) & 0x3fU));
        }
      }
      if (plVar17 <= plVar10) {
        plVar17 = plVar10;
      }
      if (plVar17 < plVar12) goto LAB_00488658;
    }
    plVar17 = (long *)param_1[1];
    if (((ulong)plVar17 & (long)plVar17 - 1U) == 0) {
      unaff_x26 = (long *)((long)plVar17 - 1U & (ulong)plVar8);
      lVar11 = *param_1;
      plVar12 = *(long **)(lVar11 + (long)unaff_x26 * 8);
      goto joined_r0x00488738;
    }
    if (plVar8 < plVar17) {
      lVar11 = *param_1;
      plVar12 = *(long **)(lVar11 + (long)plVar8 * 8);
      unaff_x26 = plVar8;
      goto joined_r0x00488738;
    }
    uVar15 = 0;
    if (plVar17 != (long *)0x0) {
      uVar15 = (ulong)plVar8 / (ulong)plVar17;
    }
    unaff_x26 = (long *)((long)plVar8 - uVar15 * (long)plVar17);
    lVar11 = *param_1;
    plVar12 = *(long **)(lVar11 + (long)unaff_x26 * 8);
    if (plVar12 == (long *)0x0) goto LAB_004886f4;
LAB_004885e8:
    *plVar16 = *plVar12;
LAB_00488770:
    *plVar12 = (long)plVar16;
  }
  else {
    lVar11 = *param_1;
    plVar12 = *(long **)(lVar11 + (long)unaff_x26 * 8);
joined_r0x00488738:
    if (plVar12 != (long *)0x0) goto LAB_004885e8;
LAB_004886f4:
    lVar13 = *plVar9;
    *plVar9 = (long)plVar16;
    *plVar16 = lVar13;
    *(long **)(lVar11 + (long)unaff_x26 * 8) = plVar9;
    if (*plVar16 != 0) {
      plVar8 = *(long **)(*plVar16 + 8);
      if (((ulong)plVar17 & (long)plVar17 - 1U) == 0) {
        plVar8 = (long *)((ulong)plVar8 & (long)plVar17 - 1U);
      }
      else if (plVar17 <= plVar8) {
        uVar15 = 0;
        if (plVar17 != (long *)0x0) {
          uVar15 = (ulong)plVar8 / (ulong)plVar17;
        }
        plVar8 = (long *)((long)plVar8 - uVar15 * (long)plVar17);
      }
      plVar12 = (long *)(*param_1 + (long)plVar8 * 8);
      goto LAB_00488770;
    }
  }
  uVar19 = 1;
  param_1[3] = param_1[3] + 1;
LAB_00488784:
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return plVar16;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar10,uVar19);
LAB_0048856c:
  uVar19 = 0;
  goto LAB_00488784;
}


// ===== 004887e4  FUN_004887e4 =====

void FUN_004887e4(long param_1)

{
  FUN_004a05f4(param_1,*(undefined8 *)(param_1 + 8));
  return;
}


// ===== 004887ec  FUN_004887ec =====

void FUN_004887ec(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [80];
  char *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar1 = *(uint *)(param_1 + 0x60);
  uVar3 = (ulong)uVar1;
  if (uVar1 == 0xffffffff) {
    lVar4 = FUN_00488994();
    uVar3 = (ulong)*(uint *)(lVar4 + 0x20);
    if (*(long *)(lVar2 + 0x28) == local_38) {
      return;
    }
  }
  else if (uVar1 < 5) {
    if (*(long *)(lVar2 + 0x28) == local_38) {
      return;
    }
  }
  else {
    uVar5 = FUN_00753a74(0x88);
                    /* try { // try from 00488874 to 0048887b has its CatchHandler @ 00488970 */
    FUN_00645c30(auStack_a8);
                    /* try { // try from 0048887c to 0048889b has its CatchHandler @ 00488960 */
    FUN_0047488c(auStack_90,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/inference_session.cc"
                 ,0x14c,"logging::Severity onnxruntime::GetSeverity(const SessionOptions &)",
                 auStack_a8);
    local_40 = 
    "Invalid session log severity level. Not a valid onnxruntime::logging::Severity value: ";
    FUN_004a0638(auStack_c0,&local_40,(uint *)(param_1 + 0x60));
                    /* try { // try from 004888bc to 00488903 has its CatchHandler @ 00488904 */
    uVar3 = FUN_00474a40(uVar5,auStack_90,
                         "session_options.session_log_severity_level >= 0 && session_options.session_log_severity_level <= static_cast<int>(logging::Severity::kFATAL)"
                         ,auStack_c0);
    if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar5,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 00488994  FUN_00488994 =====

void FUN_00488994(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [80];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(long *)PTR_DAT_007a1f08 == 0) {
    uVar2 = FUN_00753a74(0x88);
                    /* try { // try from 004889f8 to 004889ff has its CatchHandler @ 00488ab8 */
    FUN_00645c30(auStack_a0);
                    /* try { // try from 00488a00 to 00488a1f has its CatchHandler @ 00488aa8 */
    FUN_0047488c(auStack_88,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/include/onnxruntime/core/common/logging/logging.h"
                 ,0x140,"static const Logger &onnxruntime::logging::LoggingManager::DefaultLogger()"
                 ,auStack_a0);
                    /* try { // try from 00488a20 to 00488a2f has its CatchHandler @ 00488a88 */
    FUN_00479eac(auStack_b8,"Attempt to use DefaultLogger but none has been registered.");
    FUN_004792b8(uVar2,auStack_88,auStack_b8);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00488a54 to 00488a6b has its CatchHandler @ 00488a6c */
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar2,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00488ae4  FUN_00488ae4 =====

void FUN_00488ae4(long param_1,long param_2,undefined8 *param_3)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  void *__ptr;
  long lVar8;
  long *local_68;
  long *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  *(undefined8 *)(param_1 + 0x288) = *param_3;
  lVar8 = *(long *)(param_2 + 0x198);
  if (lVar8 != 0) {
    plVar6 = (long *)FUN_00759c3c(0x18);
    puVar1 = PTR_DAT_007a1ea8 + 0x10;
    plVar6[2] = *(long *)(param_2 + 0x1a0);
    *plVar6 = (long)puVar1;
    plVar6[1] = lVar8;
                    /* try { // try from 00488b48 to 00488b4f has its CatchHandler @ 00488c74 */
    iVar4 = FUN_004887ec(param_2);
                    /* try { // try from 00488b50 to 00488b57 has its CatchHandler @ 00488c70 */
    iVar5 = FUN_00638aa0();
                    /* try { // try from 00488b60 to 00488b73 has its CatchHandler @ 00488c58 */
    local_68 = plVar6;
    FUN_00638a90(&local_60,&local_68,iVar4,iVar5);
    plVar3 = local_60;
    plVar6 = local_68;
    local_68 = (long *)0x0;
    local_60 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x10))();
    }
                    /* try { // try from 00488b8c to 00488b93 has its CatchHandler @ 00488c4c */
    uVar7 = FUN_00759c3c(0x18);
    if (iVar4 <= iVar5) {
      iVar5 = iVar4;
    }
                    /* try { // try from 00488ba4 to 00488bbb has its CatchHandler @ 00488c24 */
    local_60 = plVar3;
    FUN_00638204(uVar7,&local_60,iVar5,0,1,param_2 + 0x48,0xffffffff);
    plVar6 = local_60;
    local_60 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x10))();
    }
    __ptr = *(void **)(param_1 + 0x290);
    *(undefined8 *)(param_1 + 0x290) = uVar7;
    if (__ptr != (void *)0x0) {
      FUN_006386f8(__ptr);
      free(__ptr);
      uVar7 = *(undefined8 *)(param_1 + 0x290);
    }
    *(undefined8 *)(param_1 + 0x288) = uVar7;
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00488ca4  FUN_00488ca4 =====

void FUN_00488ca4(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)*param_1;
  *param_1 = 0;
  if (__ptr != (void *)0x0) {
    FUN_006386f8(__ptr);
    free(__ptr);
    return;
  }
  return;
}


// ===== 00488ce0  FUN_00488ce0 =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00488ce0(ulong param_1,long param_2,long param_3)

{
  ulong uVar1;
  char *pcVar2;
  int iVar3;
  long lVar4;
  byte *pbVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  byte *pbVar10;
  undefined1 *puVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  undefined4 uVar15;
  size_t sVar16;
  ulong uVar17;
  undefined8 uVar18;
  void *pvVar19;
  byte *pbVar20;
  long lVar21;
  ulong local_470;
  ulong uStack_468;
  void *local_460;
  ulong uStack_458;
  void *local_450;
  long local_448;
  undefined8 uStack_440;
  long local_438;
  undefined8 uStack_430;
  ulong local_428;
  ulong local_420;
  ulong uStack_418;
  void *local_410;
  ulong uStack_408;
  void *local_400;
  long local_3f8;
  undefined8 uStack_3f0;
  long local_3e8;
  undefined8 uStack_3e0;
  ulong local_3d8;
  ulong local_3d0;
  undefined8 uStack_3c8;
  char *local_3c0;
  byte local_3b0;
  void *local_3a0;
  byte *local_398;
  byte *local_390;
  ushort local_378;
  undefined1 local_376;
  void *local_368;
  undefined8 local_360;
  ulong uStack_358;
  void *local_350;
  ulong uStack_348;
  void *local_340;
  char *local_338;
  undefined8 uStack_330;
  long local_328;
  undefined8 uStack_320;
  ulong local_318;
  undefined1 local_30c [4];
  void *local_308;
  char *local_300 [4];
  byte local_2e0;
  void *local_2d0;
  byte *local_2c8;
  byte *local_2c0;
  byte local_2a8;
  void *local_298;
  undefined1 auStack_280 [160];
  undefined8 local_1e0;
  ulong uStack_1d8;
  char *local_1d0;
  undefined1 auStack_170 [264];
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  FUN_00495e8c(param_1 + 0xe0);
  local_308 = (void *)0x0;
  uVar15 = FUN_00755bf0(1,PTR_DAT_007a1eb0);
  *(undefined4 *)(param_1 + 0x674) = uVar15;
                    /* try { // try from 00488d38 to 00488d63 has its CatchHandler @ 0048a0fc */
  FUN_00488ae4(param_1,param_2,param_3);
  FUN_0048a124(param_1,*(undefined8 *)(param_1 + 0x288));
  FUN_0048a20c(param_1,param_2,0);
                    /* try { // try from 00488d64 to 00488d6b has its CatchHandler @ 0048a0d4 */
  local_300[2] = (char *)FUN_00759c3c(0x20);
  local_300[1] = (char *)_UNK_00200bb8;
  local_300[0] = _DAT_00200bb0;
  uVar7 = s_session_set_denormal_as_zero_001e59bc._20_8_;
  uVar6 = s_session_set_denormal_as_zero_001e59bc._0_8_;
  uVar18 = CONCAT44(s_session_set_denormal_as_zero_001e59bc._16_4_,
                    s_session_set_denormal_as_zero_001e59bc._12_4_);
  *(ulong *)(local_300[2] + 8) =
       CONCAT44(s_session_set_denormal_as_zero_001e59bc._12_4_,
                s_session_set_denormal_as_zero_001e59bc._8_4_);
  *(undefined8 *)local_300[2] = uVar6;
  *(undefined8 *)(local_300[2] + 0x14) = uVar7;
  *(undefined8 *)(local_300[2] + 0xc) = uVar18;
  local_300[2][0x1c] = '\0';
  local_360 = (char **)CONCAT53(local_360._3_5_,0x3002);
  FUN_00569aa4(&local_1e0,param_1 + 0x210,local_300,&local_360);
  bVar13 = false;
  uVar17 = (ulong)((byte)local_1e0 >> 1);
  if (((byte)local_1e0 & 1) != 0) {
    uVar17 = uStack_1d8;
  }
  if (uVar17 == 1) {
    pcVar2 = local_1d0;
    if (((byte)local_1e0 & 1) == 0) {
      pcVar2 = (char *)((long)&local_1e0 + 1);
    }
    bVar13 = *pcVar2 == '1';
  }
  if (((byte)local_1e0 & 1) != 0) {
    free(local_1d0);
  }
  if (((ulong)local_360 & 1) != 0) {
    free(local_350);
  }
  if (((ulong)local_300[0] & 1) != 0) {
    free(local_300[2]);
  }
  local_1e0 = local_30c;
  local_30c[0] = bVar13;
  uStack_1d8 = param_1;
  if (DAT_007ad128 != -1) {
    local_300[0] = (char *)&local_1e0;
    local_360 = local_300;
                    /* try { // try from 00488e6c to 00488e83 has its CatchHandler @ 0048a0c8 */
    FUN_00710f84(&DAT_007ad128,&local_360,FUN_004a0b4c);
  }
  *(undefined1 *)(param_1 + 0x4e0) = *(undefined1 *)(param_2 + 0x128);
                    /* try { // try from 00488e8c to 00488e93 has its CatchHandler @ 0048a0d0 */
  local_300[2] = (char *)FUN_00759c3c(0x20);
  local_300[1] = (char *)_UNK_00200448;
  local_300[0] = _DAT_00200440;
  uVar7 = s_session_force_spinning_stop_001f64c9._19_8_;
  uVar6 = s_session_force_spinning_stop_001f64c9._0_8_;
  uVar18 = CONCAT35(s_session_force_spinning_stop_001f64c9._16_3_,
                    s_session_force_spinning_stop_001f64c9._11_5_);
  *(ulong *)(local_300[2] + 8) =
       CONCAT53(s_session_force_spinning_stop_001f64c9._11_5_,
                s_session_force_spinning_stop_001f64c9._8_3_);
  *(undefined8 *)local_300[2] = uVar6;
  *(undefined8 *)(local_300[2] + 0x13) = uVar7;
  *(undefined8 *)(local_300[2] + 0xb) = uVar18;
  local_300[2][0x1b] = '\0';
  local_360 = (char **)CONCAT53(local_360._3_5_,0x3002);
  FUN_00569aa4(&local_1e0,param_1 + 0x210,local_300,&local_360);
  uVar17 = (ulong)local_1e0 >> 1 & 0x7f;
  if (((ulong)local_1e0 & 1) != 0) {
    uVar17 = uStack_1d8;
  }
  if (uVar17 == 1) {
    pcVar2 = local_1d0;
    if (((ulong)local_1e0 & 1) == 0) {
      pcVar2 = (char *)((long)&local_1e0 + 1);
    }
    *(bool *)(param_1 + 0x4a8) = *pcVar2 == '1';
    if (((ulong)local_1e0 & 1) == 0) goto LAB_00489010;
LAB_00488f24:
    free(local_1d0);
    if (((ulong)local_360 & 1) == 0) goto LAB_00489018;
LAB_00488f34:
    free(local_350);
    if (((ulong)local_300[0] & 1) == 0) goto LAB_00489020;
LAB_00488f44:
    free(local_300[2]);
    lVar21 = *(long *)(param_1 + 8);
    iVar3 = *(int *)(lVar21 + 0x20);
    bVar12 = SBORROW4(iVar3,1);
    bVar13 = iVar3 + -1 < 0;
    bVar14 = iVar3 == 1;
    if (*(char *)(param_1 + 0x4e0) != '\0') goto LAB_00489034;
LAB_00488f60:
    if (bVar14 || bVar13 != bVar12) {
      uVar18 = *(undefined8 *)PTR_PTR_s_onnxruntime_007a1f28;
                    /* try { // try from 00488f70 to 00488f8b has its CatchHandler @ 00489fd4 */
      FUN_0048a3f4(local_300,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/inference_session.cc"
                   ,0x202,"ConstructorCommon");
                    /* try { // try from 00488f8c to 00488fab has its CatchHandler @ 00489fd0 */
      FUN_0048a554(&local_1e0,lVar21,1,uVar18,0,local_300);
                    /* try { // try from 00488fac to 00488fbf has its CatchHandler @ 00489fbc */
      FUN_00303e0c(auStack_170,
                   "Using global/env threadpools since use_per_session_threads_ is false",0x44);
      FUN_00637fac(&local_1e0);
      pbVar10 = local_2c8;
      if (local_2c8 != (byte *)0x0) {
        while (pbVar20 = local_2c0, pbVar20 != pbVar10) {
          local_2c0 = pbVar20 + -0x18;
          if ((*local_2c0 & 1) != 0) {
            free(*(void **)(pbVar20 + -8));
          }
        }
        local_2c0 = pbVar10;
        free(local_2c8);
      }
      if ((local_2e0 & 1) != 0) {
        free(local_2d0);
      }
      if (((ulong)local_300[0] & 1) != 0) {
        free(local_300[2]);
      }
    }
    *(undefined8 *)(param_1 + 0x4c0) = *(undefined8 *)(param_3 + 8);
    *(undefined8 *)(param_1 + 0x4c8) = *(undefined8 *)(param_3 + 0x10);
    if ((*(byte *)(param_3 + 0x18) & 1) == 0) {
      uVar18 = FUN_00753a74(0x88);
                    /* try { // try from 004894d0 to 004894d7 has its CatchHandler @ 00489fc0 */
      FUN_00645c30(local_300);
                    /* try { // try from 004894d8 to 004894f7 has its CatchHandler @ 00489f84 */
      FUN_0047488c(&local_1e0,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/inference_session.cc"
                   ,0x207,
                   "void onnxruntime::InferenceSession::ConstructorCommon(const SessionOptions &, const Environment &)"
                   ,local_300);
                    /* try { // try from 004894f8 to 00489507 has its CatchHandler @ 00489f3c */
      FUN_00479eac(&local_360,
                   "When the session is not configured to use per session threadpools, the env must be created with the the CreateEnvWithGlobalThreadPools API."
                  );
                    /* try { // try from 0048950c to 0048954f has its CatchHandler @ 00489f24 */
      FUN_00474a40(uVar18,&local_1e0,"session_env.EnvCreatedWithGlobalThreadPools()",&local_360);
      if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar18,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
      }
      goto LAB_0048a120;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x4a8) = 0;
    if (((ulong)local_1e0 & 1) != 0) goto LAB_00488f24;
LAB_00489010:
    if (((ulong)local_360 & 1) != 0) goto LAB_00488f34;
LAB_00489018:
    if (((ulong)local_300[0] & 1) != 0) goto LAB_00488f44;
LAB_00489020:
    lVar21 = *(long *)(param_1 + 8);
    iVar3 = *(int *)(lVar21 + 0x20);
    bVar12 = SBORROW4(iVar3,1);
    bVar13 = iVar3 + -1 < 0;
    bVar14 = iVar3 == 1;
    if (*(char *)(param_1 + 0x4e0) == '\0') goto LAB_00488f60;
LAB_00489034:
    if (bVar14 || bVar13 != bVar12) {
      uVar18 = *(undefined8 *)PTR_PTR_s_onnxruntime_007a1f28;
                    /* try { // try from 00489044 to 0048905f has its CatchHandler @ 0048a0bc */
      FUN_0048a3f4(local_300,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/inference_session.cc"
                   ,0x1b9,"ConstructorCommon");
                    /* try { // try from 00489060 to 0048907f has its CatchHandler @ 0048a0ac */
      FUN_0048a554(&local_1e0,lVar21,1,uVar18,0,local_300);
                    /* try { // try from 00489080 to 00489093 has its CatchHandler @ 0048a09c */
      FUN_00303e0c(auStack_170,
                   "Creating and using per session threadpools since use_per_session_threads_ is true"
                   ,0x51);
      FUN_00637fac(&local_1e0);
      pbVar10 = local_2c8;
      if (local_2c8 != (byte *)0x0) {
        while (pbVar20 = local_2c0, pbVar20 != pbVar10) {
          local_2c0 = pbVar20 + -0x18;
          if ((*local_2c0 & 1) != 0) {
            free(*(void **)(pbVar20 + -8));
          }
        }
        local_2c0 = pbVar10;
        free(local_2c8);
      }
      if ((local_2e0 & 1) != 0) {
        free(local_2d0);
      }
      if (((ulong)local_300[0] & 1) != 0) {
        free(local_300[2]);
      }
    }
    if (*(long *)(param_1 + 0x4d0) == 0) {
                    /* try { // try from 00489114 to 0048911b has its CatchHandler @ 0048a048 */
      local_300[2] = (char *)FUN_00759c3c(0x20);
      local_300[1] = (char *)_UNK_00200638;
      local_300[0] = _DAT_00200630;
      uVar7 = s_session_intra_op_allow_spinning_001e59d9._23_8_;
      uVar6 = s_session_intra_op_allow_spinning_001e59d9._0_8_;
      uVar18 = CONCAT71(s_session_intra_op_allow_spinning_001e59d9._16_7_,
                        s_session_intra_op_allow_spinning_001e59d9[0xf]);
      *(ulong *)(local_300[2] + 8) =
           CONCAT17(s_session_intra_op_allow_spinning_001e59d9[0xf],
                    s_session_intra_op_allow_spinning_001e59d9._8_7_);
      *(undefined8 *)local_300[2] = uVar6;
      *(undefined8 *)(local_300[2] + 0x17) = uVar7;
      *(undefined8 *)(local_300[2] + 0xf) = uVar18;
      local_300[2][0x1f] = '\0';
      local_360 = (char **)CONCAT53(local_360._3_5_,0x3102);
      FUN_00569aa4(&local_1e0,param_1 + 0x210,local_300,&local_360);
      bVar13 = false;
      uVar17 = (ulong)local_1e0 >> 1 & 0x7f;
      if (((ulong)local_1e0 & 1) != 0) {
        uVar17 = uStack_1d8;
      }
      if (uVar17 == 1) {
        pcVar2 = local_1d0;
        if (((ulong)local_1e0 & 1) == 0) {
          pcVar2 = (char *)((long)&local_1e0 + 1);
        }
        bVar13 = *pcVar2 == '1';
        if (((ulong)local_1e0 & 1) == 0) goto LAB_004891f8;
LAB_004891a8:
        free(local_1d0);
        if (((ulong)local_360 & 1) == 0) goto LAB_00489200;
LAB_004891b8:
        free(local_350);
        if (((ulong)local_300[0] & 1) == 0) goto LAB_00489208;
LAB_004891c8:
        free(local_300[2]);
        uStack_358 = *(undefined8 *)(param_1 + 0x158);
        local_360 = *(char ***)(param_1 + 0x150);
        if ((*(byte *)(param_1 + 0x160) & 1) == 0) goto LAB_0048921c;
LAB_004891e4:
                    /* try { // try from 004891e8 to 004891ef has its CatchHandler @ 00489fa4 */
        FUN_002fb36c(&local_350,*(undefined8 *)(param_1 + 0x170),*(undefined8 *)(param_1 + 0x168));
      }
      else {
        if (((ulong)local_1e0 & 1) != 0) goto LAB_004891a8;
LAB_004891f8:
        if (((ulong)local_360 & 1) != 0) goto LAB_004891b8;
LAB_00489200:
        if (((ulong)local_300[0] & 1) != 0) goto LAB_004891c8;
LAB_00489208:
        uStack_358 = *(undefined8 *)(param_1 + 0x158);
        local_360 = *(char ***)(param_1 + 0x150);
        if ((*(byte *)(param_1 + 0x160) & 1) != 0) goto LAB_004891e4;
LAB_0048921c:
        uStack_348 = *(ulong *)(param_1 + 0x168);
        local_350 = *(void **)(param_1 + 0x160);
        local_340 = *(void **)(param_1 + 0x170);
      }
      local_318 = *(undefined8 *)(param_1 + 0x198);
      uStack_330 = *(undefined8 *)(param_1 + 0x180);
      local_338 = *(char **)(param_1 + 0x178);
      uStack_320 = *(undefined8 *)(param_1 + 400);
      local_328 = *(undefined8 *)(param_1 + 0x188);
                    /* try { // try from 00489244 to 0048924b has its CatchHandler @ 0048a040 */
      FUN_00303c58(local_300);
      pcVar2 = local_338;
      if (local_338 != (char *)0x0) {
        sVar16 = strlen(local_338);
                    /* try { // try from 00489264 to 004892af has its CatchHandler @ 0048a0cc */
        uVar18 = FUN_00303e0c(local_300 + 2,pcVar2,sVar16);
        FUN_00303e0c(uVar18,&DAT_001eb31a,1);
      }
      uVar18 = FUN_00303e0c(local_300 + 2,"session-",8);
      uVar18 = FUN_007173cc(uVar18,*(undefined4 *)(param_1 + 0x674));
      FUN_00303e0c(uVar18,"-intra-op",9);
                    /* try { // try from 004892b4 to 004892bf has its CatchHandler @ 0048a03c */
      FUN_00718470(&local_1e0,local_300 + 3);
      if ((*(byte *)(param_1 + 0x478) & 1) != 0) {
        free(*(void **)(param_1 + 0x488));
      }
      local_360._0_6_ = CONCAT15(bVar13,(uint5)local_360);
      *(ulong *)(param_1 + 0x480) = uStack_1d8;
      *(undefined1 **)(param_1 + 0x478) = local_1e0;
      *(char **)(param_1 + 0x488) = local_1d0;
      uStack_330 = CONCAT71(uStack_330._1_7_,local_30c[0]);
      local_338 = (char *)(param_1 + 0x479);
      if ((*(byte *)(param_1 + 0x478) & 1) != 0) {
        local_338 = (char *)*(long *)(param_1 + 0x488);
      }
                    /* try { // try from 00489308 to 0048930f has its CatchHandler @ 0048a038 */
      local_3c0 = (char *)FUN_00759c3c(0x20);
      uStack_3c8 = _UNK_00200668;
      local_3d0 = _DAT_00200660;
      uVar7 = s_session_dynamic_block_base_001dafde._18_8_;
      uVar6 = s_session_dynamic_block_base_001dafde._0_8_;
      uVar18 = CONCAT26(s_session_dynamic_block_base_001dafde._16_2_,
                        s_session_dynamic_block_base_001dafde._10_6_);
      *(ulong *)(local_3c0 + 8) =
           CONCAT62(s_session_dynamic_block_base_001dafde._10_6_,
                    s_session_dynamic_block_base_001dafde._8_2_);
      *(undefined8 *)local_3c0 = uVar6;
      *(undefined8 *)(local_3c0 + 0x12) = uVar7;
      *(undefined8 *)(local_3c0 + 10) = uVar18;
      local_3c0[0x1a] = '\0';
      local_378 = 0x3002;
      local_376 = 0;
      FUN_00569aa4(&local_1e0,param_1 + 0x210,&local_3d0,&local_378);
                    /* try { // try from 0048935c to 0048936b has its CatchHandler @ 0048a008 */
      uVar15 = FUN_0071463c(&local_1e0,0,10);
      uStack_358 = CONCAT44(uStack_358._4_4_,uVar15);
      if (((ulong)local_1e0 & 1) == 0) {
        if ((local_378 & 1) != 0) goto LAB_004893ac;
LAB_00489380:
        if ((local_3d0 & 1) != 0) goto LAB_004893bc;
LAB_00489388:
        lVar21 = *(long *)(param_1 + 8);
        iVar3 = *(int *)(lVar21 + 0x20);
      }
      else {
        free(local_1d0);
        if ((local_378 & 1) == 0) goto LAB_00489380;
LAB_004893ac:
        free(local_368);
        if ((local_3d0 & 1) == 0) goto LAB_00489388;
LAB_004893bc:
        free(local_3c0);
        lVar21 = *(long *)(param_1 + 8);
        iVar3 = *(int *)(lVar21 + 0x20);
      }
      if (iVar3 < 2) {
        uVar18 = *(undefined8 *)PTR_PTR_s_onnxruntime_007a1f28;
                    /* try { // try from 004893e0 to 004893fb has its CatchHandler @ 00489fa0 */
        FUN_0048a3f4(&local_3d0,
                     "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/inference_session.cc"
                     ,0x1cb,"ConstructorCommon");
                    /* try { // try from 004893fc to 0048941b has its CatchHandler @ 00489f98 */
        FUN_0048a554(&local_1e0,lVar21,1,uVar18,0,&local_3d0);
                    /* try { // try from 0048941c to 00489437 has its CatchHandler @ 00489fec */
        uVar18 = FUN_00303e0c(auStack_170,"Dynamic block base set to ",0x1a);
        FUN_00717214(uVar18,uStack_358 & 0xffffffff);
        FUN_00637fac(&local_1e0);
        pbVar10 = local_398;
        if (local_398 != (byte *)0x0) {
          while (pbVar20 = local_390, pbVar20 != pbVar10) {
            local_390 = pbVar20 + -0x18;
            if ((*local_390 & 1) != 0) {
              free(*(void **)(pbVar20 + -8));
            }
          }
          local_390 = pbVar10;
          free(local_398);
        }
        if ((local_3b0 & 1) != 0) {
          free(local_3a0);
        }
        if ((local_3d0 & 1) != 0) {
          free(local_3c0);
        }
      }
      local_328 = *(long *)(param_1 + 0x260);
      uStack_320 = *(undefined8 *)(param_2 + 0x188);
      local_318 = *(ulong *)(param_1 + 0x270);
                    /* try { // try from 00489594 to 0048959b has its CatchHandler @ 0048a004 */
      local_1d0 = (char *)FUN_00759c3c(0x28);
      uStack_1d8 = _UNK_00200b78;
      local_1e0 = _DAT_00200b70;
      uVar8 = s_session_intra_op_thread_affiniti_001f4122._24_8_;
      uVar7 = s_session_intra_op_thread_affiniti_001f4122._16_8_;
      uVar6 = s_session_intra_op_thread_affiniti_001f4122._8_8_;
      uVar18 = s_session_intra_op_thread_affiniti_001f4122._0_8_;
      local_1d0[0x20] = 'e';
      local_1d0[0x21] = 's';
      *(undefined8 *)(local_1d0 + 8) = uVar6;
      *(undefined8 *)local_1d0 = uVar18;
      *(undefined8 *)(local_1d0 + 0x18) = uVar8;
      *(undefined8 *)(local_1d0 + 0x10) = uVar7;
      local_1d0[0x22] = '\0';
      uVar17 = FUN_005699d0(param_1 + 0x210,&local_1e0,&local_350);
      if (((ulong)local_1e0 & 1) != 0) {
        free(local_1d0);
      }
      if ((uVar17 & 1) != 0) {
        uVar17 = (ulong)((byte)local_350 >> 1);
        if (((ulong)local_350 & 1) != 0) {
          uVar17 = uStack_348;
        }
        if (uVar17 == 0) {
          uVar18 = FUN_00753a74(0x88);
                    /* try { // try from 00489e58 to 00489e5f has its CatchHandler @ 00489f6c */
          FUN_00645c30(&local_3d0);
                    /* try { // try from 00489e60 to 00489e7f has its CatchHandler @ 00489ee0 */
          FUN_0047488c(&local_1e0,
                       "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/inference_session.cc"
                       ,0x1d2,
                       "void onnxruntime::InferenceSession::ConstructorCommon(const SessionOptions &, const Environment &)"
                       ,&local_3d0);
                    /* try { // try from 00489e80 to 00489e8f has its CatchHandler @ 00489edc */
          FUN_00479eac(&local_378,"Affinity string must not be empty");
                    /* try { // try from 00489e94 to 00489ed7 has its CatchHandler @ 00489ed8 */
          FUN_00474a40(uVar18,&local_1e0,"!to.affinity_str.empty()",&local_378);
          if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_00753c5c(uVar18,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
          }
          goto LAB_0048a120;
        }
      }
      if ((uint)local_360 == 0 && *(int *)(param_1 + 0xe0) == 0) {
        uVar1 = (ulong)((byte)local_350 >> 1);
        if (((ulong)local_350 & 1) != 0) {
          uVar1 = uStack_348;
        }
        uVar17 = (ulong)(uVar1 == 0);
        local_360._0_5_ = CONCAT14(uVar1 == 0,(uint)local_360);
      }
      else {
        uVar17 = 0;
        local_360._0_5_ = (uint5)(uint)local_360;
      }
      if ((local_328 != 0) && (uVar17 = local_318, local_318 == 0)) {
        uVar18 = FUN_00753a74(0x88);
                    /* try { // try from 00489dc8 to 00489dcf has its CatchHandler @ 00489f94 */
        FUN_00645c30(&local_3d0);
                    /* try { // try from 00489dd0 to 00489def has its CatchHandler @ 00489f70 */
        FUN_0047488c(&local_1e0,
                     "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/inference_session.cc"
                     ,0x1d9,
                     "void onnxruntime::InferenceSession::ConstructorCommon(const SessionOptions &, const Environment &)"
                     ,&local_3d0);
                    /* try { // try from 00489df0 to 00489dff has its CatchHandler @ 00489ee8 */
        FUN_00479eac(&local_378,"custom join thread function not set for intra op thread pool");
                    /* try { // try from 00489e04 to 00489e47 has its CatchHandler @ 00489ee4 */
        FUN_00474a40(uVar18,&local_1e0,"to.custom_join_thread_fn",&local_378);
        if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_00753c5c(uVar18,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
        }
        goto LAB_0048a120;
      }
                    /* try { // try from 0048965c to 0048969b has its CatchHandler @ 0048a0c0 */
      uVar18 = FUN_00641af0(uVar17);
      uStack_418 = uStack_358;
      local_420 = (ulong)local_360;
      if (((ulong)local_350 & 1) == 0) {
        uStack_408 = uStack_348;
        local_410 = local_350;
        local_400 = local_340;
      }
      else {
        FUN_002fb36c(&local_410,local_340,uStack_348);
      }
      uStack_3f0 = uStack_330;
      local_3f8 = (long)local_338;
      uStack_3e0 = uStack_320;
      local_3e8 = local_328;
      local_3d8 = local_318;
                    /* try { // try from 004896b8 to 004896c7 has its CatchHandler @ 00489fd8 */
      FUN_00603f64(&local_1e0,uVar18,&local_420,0);
      puVar11 = local_1e0;
      pvVar19 = *(void **)(param_1 + 0x4b0);
      local_1e0 = (undefined1 *)0x0;
      *(undefined1 **)(param_1 + 0x4b0) = puVar11;
      if (pvVar19 != (void *)0x0) {
        FUN_0063b594(pvVar19);
        free(pvVar19);
        puVar11 = local_1e0;
        local_1e0 = (undefined1 *)0x0;
        if (puVar11 != (undefined1 *)0x0) {
          FUN_0063b594(puVar11);
          free(puVar11);
        }
      }
      if (((ulong)local_410 & 1) != 0) {
        free(local_400);
      }
      puVar9 = PTR_PTR_007a10f0;
      local_300[0] = *(char **)PTR_PTR_007a10f0;
      pcVar2 = *(char **)(PTR_PTR_007a10f0 + 0x48);
      *(undefined8 *)((long)local_300 + *(long *)(local_300[0] + -0x18)) =
           *(undefined8 *)(PTR_PTR_007a10f0 + 0x40);
      local_300[3] = PTR_DAT_007a10f8 + 0x10;
      local_300[2] = pcVar2;
      if ((local_2a8 & 1) != 0) {
        free(local_298);
      }
      FUN_00716098(local_300 + 3);
      FUN_00717d80(local_300,puVar9 + 8);
      thunk_FUN_00715e00(auStack_280);
      if (((ulong)local_350 & 1) != 0) {
        free(local_340);
      }
    }
    if ((*(int *)(param_1 + 0xe0) == 1) && (*(long *)(param_1 + 0x4d8) == 0)) {
                    /* try { // try from 00489798 to 0048979f has its CatchHandler @ 0048a098 */
      local_300[2] = (char *)FUN_00759c3c(0x20);
      local_300[1] = (char *)_UNK_00200638;
      local_300[0] = _DAT_00200630;
      uVar7 = s_session_inter_op_allow_spinning_001e3722._23_8_;
      uVar6 = s_session_inter_op_allow_spinning_001e3722._0_8_;
      uVar18 = CONCAT71(s_session_inter_op_allow_spinning_001e3722._16_7_,
                        s_session_inter_op_allow_spinning_001e3722[0xf]);
      *(ulong *)(local_300[2] + 8) =
           CONCAT17(s_session_inter_op_allow_spinning_001e3722[0xf],
                    s_session_inter_op_allow_spinning_001e3722._8_7_);
      *(undefined8 *)local_300[2] = uVar6;
      *(undefined8 *)(local_300[2] + 0x17) = uVar7;
      *(undefined8 *)(local_300[2] + 0xf) = uVar18;
      local_300[2][0x1f] = '\0';
      local_360 = (char **)CONCAT53(local_360._3_5_,0x3102);
      FUN_00569aa4(&local_1e0,param_1 + 0x210,local_300,&local_360);
      bVar13 = false;
      uVar17 = (ulong)local_1e0 >> 1 & 0x7f;
      if (((ulong)local_1e0 & 1) != 0) {
        uVar17 = uStack_1d8;
      }
      if (uVar17 == 1) {
        pcVar2 = local_1d0;
        if (((ulong)local_1e0 & 1) == 0) {
          pcVar2 = (char *)((long)&local_1e0 + 1);
        }
        bVar13 = *pcVar2 == '1';
        if (((ulong)local_1e0 & 1) == 0) goto LAB_0048987c;
LAB_0048982c:
        free(local_1d0);
        if (((ulong)local_360 & 1) == 0) goto LAB_00489884;
LAB_0048983c:
        free(local_350);
        if (((ulong)local_300[0] & 1) == 0) goto LAB_0048988c;
LAB_0048984c:
        free(local_300[2]);
        uStack_358 = *(undefined8 *)(param_1 + 0x1a8);
        local_360 = *(char ***)(param_1 + 0x1a0);
        if ((*(byte *)(param_1 + 0x1b0) & 1) == 0) goto LAB_004898a0;
LAB_00489868:
                    /* try { // try from 0048986c to 00489873 has its CatchHandler @ 00489fb8 */
        FUN_002fb36c(&local_350,*(undefined8 *)(param_1 + 0x1c0),*(undefined8 *)(param_1 + 0x1b8));
      }
      else {
        if (((ulong)local_1e0 & 1) != 0) goto LAB_0048982c;
LAB_0048987c:
        if (((ulong)local_360 & 1) != 0) goto LAB_0048983c;
LAB_00489884:
        if (((ulong)local_300[0] & 1) != 0) goto LAB_0048984c;
LAB_0048988c:
        uStack_358 = *(undefined8 *)(param_1 + 0x1a8);
        local_360 = *(char ***)(param_1 + 0x1a0);
        if ((*(byte *)(param_1 + 0x1b0) & 1) != 0) goto LAB_00489868;
LAB_004898a0:
        uStack_348 = *(ulong *)(param_1 + 0x1b8);
        local_350 = *(void **)(param_1 + 0x1b0);
        local_340 = *(void **)(param_1 + 0x1c0);
      }
      uStack_330 = *(undefined8 *)(param_1 + 0x1d0);
      local_338 = *(char **)(param_1 + 0x1c8);
      uStack_320 = *(undefined8 *)(param_1 + 0x1e0);
      local_328 = *(undefined8 *)(param_1 + 0x1d8);
      local_318 = *(undefined8 *)(param_1 + 0x1e8);
      local_360._0_5_ =
           CONCAT14((uint)local_360 == 0 && *(int *)(param_1 + 0xe0) == 0,(uint)local_360);
                    /* try { // try from 004898e0 to 004898e7 has its CatchHandler @ 0048a090 */
      FUN_00303c58(local_300);
      pcVar2 = local_338;
      if (local_338 != (char *)0x0) {
        sVar16 = strlen(local_338);
                    /* try { // try from 00489900 to 0048994b has its CatchHandler @ 0048a0d8 */
        uVar18 = FUN_00303e0c(local_300 + 2,pcVar2,sVar16);
        FUN_00303e0c(uVar18,&DAT_001eb31a,1);
      }
      uVar18 = FUN_00303e0c(local_300 + 2,"session-",8);
      uVar18 = FUN_007173cc(uVar18,*(undefined4 *)(param_1 + 0x674));
      FUN_00303e0c(uVar18,"-inter-op",9);
                    /* try { // try from 00489950 to 0048995b has its CatchHandler @ 0048a08c */
      FUN_00718470(&local_1e0,local_300 + 3);
      if ((*(byte *)(param_1 + 0x490) & 1) != 0) {
        free(*(void **)(param_1 + 0x4a0));
      }
      local_360._0_6_ = CONCAT15(bVar13,(uint5)local_360);
      *(ulong *)(param_1 + 0x498) = uStack_1d8;
      *(undefined1 **)(param_1 + 0x490) = local_1e0;
      *(char **)(param_1 + 0x4a0) = local_1d0;
      uStack_330 = CONCAT71(uStack_330._1_7_,local_30c[0]);
      local_338 = (char *)(param_1 + 0x491);
      if ((*(byte *)(param_1 + 0x490) & 1) != 0) {
        local_338 = (char *)*(long *)(param_1 + 0x4a0);
      }
                    /* try { // try from 004899a4 to 004899ab has its CatchHandler @ 0048a088 */
      local_3c0 = (char *)FUN_00759c3c(0x20);
      uStack_3c8 = _UNK_00200668;
      local_3d0 = _DAT_00200660;
      uVar7 = s_session_dynamic_block_base_001dafde._18_8_;
      uVar6 = s_session_dynamic_block_base_001dafde._0_8_;
      uVar18 = CONCAT26(s_session_dynamic_block_base_001dafde._16_2_,
                        s_session_dynamic_block_base_001dafde._10_6_);
      *(ulong *)(local_3c0 + 8) =
           CONCAT62(s_session_dynamic_block_base_001dafde._10_6_,
                    s_session_dynamic_block_base_001dafde._8_2_);
      *(undefined8 *)local_3c0 = uVar6;
      *(undefined8 *)(local_3c0 + 0x12) = uVar7;
      *(undefined8 *)(local_3c0 + 10) = uVar18;
      local_3c0[0x1a] = '\0';
      local_378 = 0x3002;
      local_376 = 0;
      FUN_00569aa4(&local_1e0,param_1 + 0x210,&local_3d0,&local_378);
                    /* try { // try from 004899f8 to 00489a07 has its CatchHandler @ 0048a060 */
      uVar15 = FUN_0071463c(&local_1e0,0,10);
      uStack_358 = CONCAT44(uStack_358._4_4_,uVar15);
      if (((ulong)local_1e0 & 1) == 0) {
        if ((local_378 & 1) != 0) goto LAB_00489a50;
LAB_00489a1c:
        if ((local_3d0 & 1) != 0) goto LAB_00489a60;
LAB_00489a24:
        local_328 = *(long *)(param_1 + 0x260);
        uStack_320 = *(undefined8 *)(param_2 + 0x188);
        local_318 = *(ulong *)(param_1 + 0x270);
      }
      else {
        free(local_1d0);
        if ((local_378 & 1) == 0) goto LAB_00489a1c;
LAB_00489a50:
        free(local_368);
        if ((local_3d0 & 1) == 0) goto LAB_00489a24;
LAB_00489a60:
        free(local_3c0);
        local_328 = *(long *)(param_1 + 0x260);
        uStack_320 = *(undefined8 *)(param_2 + 0x188);
        local_318 = *(ulong *)(param_1 + 0x270);
      }
      if ((local_328 != 0) && (local_318 == 0)) {
        uVar18 = FUN_00753a74(0x88);
                    /* try { // try from 00489d38 to 00489d3f has its CatchHandler @ 00489fa8 */
        FUN_00645c30(&local_3d0);
                    /* try { // try from 00489d40 to 00489d5f has its CatchHandler @ 00489f74 */
        FUN_0047488c(&local_1e0,
                     "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/inference_session.cc"
                     ,0x1f7,
                     "void onnxruntime::InferenceSession::ConstructorCommon(const SessionOptions &, const Environment &)"
                     ,&local_3d0);
                    /* try { // try from 00489d60 to 00489d6f has its CatchHandler @ 00489f04 */
        FUN_00479eac(&local_378,"custom join thread function not set for inter op thread pool");
                    /* try { // try from 00489d74 to 00489db7 has its CatchHandler @ 00489eec */
        FUN_00474a40(uVar18,&local_1e0,"to.custom_join_thread_fn",&local_378);
        if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_00753c5c(uVar18,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
        }
        goto LAB_0048a120;
      }
                    /* try { // try from 00489a84 to 00489ac3 has its CatchHandler @ 0048a0c4 */
      uVar18 = FUN_00641af0();
      uStack_468 = uStack_358;
      local_470 = (ulong)local_360;
      if (((ulong)local_350 & 1) == 0) {
        uStack_458 = uStack_348;
        local_460 = local_350;
        local_450 = local_340;
      }
      else {
        FUN_002fb36c(&local_460,local_340,uStack_348);
      }
      uStack_440 = uStack_330;
      local_448 = (long)local_338;
      uStack_430 = uStack_320;
      local_438 = local_328;
      local_428 = local_318;
                    /* try { // try from 00489ae0 to 00489aef has its CatchHandler @ 0048a04c */
      FUN_00603f64(&local_1e0,uVar18,&local_470,1);
      puVar11 = local_1e0;
      pvVar19 = *(void **)(param_1 + 0x4b8);
      local_1e0 = (undefined1 *)0x0;
      *(undefined1 **)(param_1 + 0x4b8) = puVar11;
      if (pvVar19 != (void *)0x0) {
        FUN_0063b594(pvVar19);
        free(pvVar19);
        puVar11 = local_1e0;
        local_1e0 = (undefined1 *)0x0;
        if (puVar11 != (undefined1 *)0x0) {
          FUN_0063b594(puVar11);
          free(puVar11);
        }
      }
      if (((ulong)local_460 & 1) != 0) {
        free(local_450);
      }
      if (*(long *)(param_1 + 0x4b8) == 0) {
        lVar21 = *(long *)(param_1 + 8);
        if (*(int *)(lVar21 + 0x20) < 2) {
          uVar18 = *(undefined8 *)PTR_PTR_s_onnxruntime_007a1f28;
                    /* try { // try from 00489b64 to 00489b7f has its CatchHandler @ 00489f68 */
          FUN_0048a3f4(&local_3d0,
                       "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/inference_session.cc"
                       ,0x1fc,"ConstructorCommon");
                    /* try { // try from 00489b80 to 00489b9f has its CatchHandler @ 00489f60 */
          FUN_0048a554(&local_1e0,lVar21,1,uVar18,0,&local_3d0);
                    /* try { // try from 00489ba0 to 00489bb3 has its CatchHandler @ 00489f5c */
          FUN_00303e0c(auStack_170,
                       "Failed to create the inter-op thread pool for the parallel executor, setting ExecutionMode to SEQUENTIAL"
                       ,0x68);
          FUN_00637fac(&local_1e0);
          pbVar10 = local_398;
          pbVar20 = local_390;
          if (local_398 != (byte *)0x0) {
            while (pbVar5 = pbVar20, pbVar5 != pbVar10) {
              pbVar20 = pbVar5 + -0x18;
              if ((*pbVar20 & 1) != 0) {
                free(*(void **)(pbVar5 + -8));
              }
            }
            local_390 = pbVar10;
            free(local_398);
          }
          if ((local_3b0 & 1) != 0) {
            free(local_3a0);
          }
          if ((local_3d0 & 1) != 0) {
            free(local_3c0);
          }
        }
        *(undefined4 *)(param_1 + 0xe0) = 0;
      }
      puVar9 = PTR_PTR_007a10f0;
      local_300[0] = *(char **)PTR_PTR_007a10f0;
      pcVar2 = *(char **)(PTR_PTR_007a10f0 + 0x48);
      *(undefined8 *)((long)local_300 + *(long *)(local_300[0] + -0x18)) =
           *(undefined8 *)(PTR_PTR_007a10f0 + 0x40);
      local_300[3] = PTR_DAT_007a10f8 + 0x10;
      local_300[2] = pcVar2;
      if ((local_2a8 & 1) != 0) {
        free(local_298);
      }
      FUN_00716098(local_300 + 3);
      FUN_00717d80(local_300,puVar9 + 8);
      thunk_FUN_00715e00(auStack_280);
      if (((ulong)local_350 & 1) != 0) {
        free(local_340);
      }
    }
  }
                    /* try { // try from 00489c9c to 00489cb7 has its CatchHandler @ 0048a0f8 */
  FUN_0063928c(param_1 + 0x2a0,*(undefined8 *)(param_1 + 8));
  if (*(char *)(param_1 + 0xe8) != '\0') {
    FUN_00494fe4(param_1,param_1 + 0x110);
  }
  *(undefined4 *)(param_1 + 0x678) = 0;
  *(undefined8 *)(param_1 + 0x680) = 0;
  if ((*(byte *)(param_1 + 0x688) & 1) != 0) {
    free(*(void **)(param_1 + 0x698));
  }
  pvVar19 = local_308;
  *(undefined8 *)(param_1 + 0x690) = 0;
  *(undefined8 *)(param_1 + 0x688) = 0;
  *(undefined8 *)(param_1 + 0x6a0) = 0;
  *(undefined8 *)(param_1 + 0x698) = 0;
  if (local_308 != (void *)0x0) {
    if ((*(byte *)((long)local_308 + 8) & 1) != 0) {
      free(*(void **)((long)local_308 + 0x18));
    }
    free(pvVar19);
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
LAB_0048a120:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0048a124  FUN_0048a124 =====

void FUN_0048a124(long param_1,long param_2)

{
  long lVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  void *__ptr;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_2 == 0) {
    uVar4 = FUN_00488994();
    *(undefined8 *)(param_1 + 8) = uVar4;
    if (*(long *)(lVar1 + 0x28) != local_38) goto LAB_0048a208;
  }
  else {
    uVar3 = FUN_004887ec(param_1 + 0xe0);
    FUN_006387a0(&local_40,*(undefined8 *)(param_1 + 0x288),param_1 + 0x128,uVar3,0,
                 *(undefined4 *)(param_1 + 0x144));
    pvVar2 = local_40;
    __ptr = *(void **)(param_1 + 0x298);
    local_40 = (void *)0x0;
    *(void **)(param_1 + 0x298) = pvVar2;
    if (__ptr != (void *)0x0) {
      if ((*(byte *)((long)__ptr + 8) & 1) != 0) {
        free(*(void **)((long)__ptr + 0x18));
      }
      free(__ptr);
      pvVar2 = local_40;
      local_40 = (void *)0x0;
      if (pvVar2 != (void *)0x0) {
        if ((*(byte *)((long)pvVar2 + 8) & 1) != 0) {
          free(*(void **)((long)pvVar2 + 0x18));
        }
        free(pvVar2);
      }
    }
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x298);
    if (*(long *)(lVar1 + 0x28) != local_38) {
LAB_0048a208:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  return;
}


// ===== 0048a20c  FUN_0048a20c =====

void FUN_0048a20c(long param_1,undefined8 param_2)

{
  long lVar1;
  byte *pbVar2;
  byte *pbVar3;
  long lVar4;
  undefined8 uVar5;
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
  lVar4 = *(long *)(param_1 + 8);
  if (*(int *)(lVar4 + 0x20) < 2) {
    uVar5 = *(undefined8 *)PTR_PTR_s_onnxruntime_007a1f28;
    FUN_0048a3f4(local_210,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/inference_session.cc"
                 ,0x215,"TraceSessionOptions");
                    /* try { // try from 0048a26c to 0048a28b has its CatchHandler @ 0048a344 */
    FUN_0048a554(auStack_1c0,lVar4,1,uVar5,0,local_210);
                    /* try { // try from 0048a28c to 0048a297 has its CatchHandler @ 0048a334 */
    FUN_0048a6b4(auStack_150,param_2);
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
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0048a36c  FUN_0048a36c =====

bool FUN_0048a36c(byte *param_1,char *param_2)

{
  size_t sVar1;
  byte bVar2;
  int iVar3;
  size_t __n;
  byte *__s1;
  
  __n = strlen(param_2);
  bVar2 = *param_1;
  sVar1 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    sVar1 = *(size_t *)(param_1 + 8);
  }
  if (__n == sVar1) {
    if (__n != 0xffffffffffffffff) {
      __s1 = *(byte **)(param_1 + 0x10);
      if ((bVar2 & 1) == 0) {
        __s1 = param_1 + 1;
      }
      iVar3 = memcmp(__s1,param_2,__n);
      return iVar3 == 0;
    }
                    /* try { // try from 0048a3e8 to 0048a3ef has its CatchHandler @ 0048a3f0 */
                    /* WARNING: Subroutine does not return */
    FUN_0030b8f4(param_1);
  }
  return false;
}


// ===== 0048a3f4  FUN_0048a3f4 =====

void FUN_0048a3f4(ulong *param_1,char *param_2,undefined4 param_3,char *param_4)

{
  ulong uVar1;
  size_t sVar2;
  undefined1 *puVar3;
  
  sVar2 = strlen(param_2);
  if (0xfffffffffffffff7 < sVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_002fb400(param_1);
  }
  if (sVar2 < 0x17) {
    puVar3 = (undefined1 *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)sVar2 << 1);
    if (sVar2 != 0) goto LAB_0048a47c;
  }
  else {
    uVar1 = (sVar2 & 0xfffffffffffffff8) + 8;
    if ((sVar2 | 7) != 0x17) {
      uVar1 = sVar2 | 7;
    }
    puVar3 = (undefined1 *)FUN_00759c3c(uVar1 + 1);
    param_1[1] = sVar2;
    param_1[2] = (ulong)puVar3;
    *param_1 = uVar1 + 1 | 1;
LAB_0048a47c:
    memmove(puVar3,param_2,sVar2);
  }
  puVar3[sVar2] = 0;
  *(undefined4 *)(param_1 + 3) = param_3;
  sVar2 = strlen(param_4);
  if (0xfffffffffffffff7 < sVar2) {
                    /* try { // try from 0048a530 to 0048a537 has its CatchHandler @ 0048a538 */
                    /* WARNING: Subroutine does not return */
    FUN_002fb400(param_1 + 4);
  }
  if (sVar2 < 0x17) {
    puVar3 = (undefined1 *)((long)param_1 + 0x21);
    *(char *)(param_1 + 4) = (char)((int)sVar2 << 1);
    if (sVar2 == 0) goto LAB_0048a504;
  }
  else {
    uVar1 = (sVar2 & 0xfffffffffffffff8) + 8;
    if ((sVar2 | 7) != 0x17) {
      uVar1 = sVar2 | 7;
    }
                    /* try { // try from 0048a4dc to 0048a4e3 has its CatchHandler @ 0048a538 */
    puVar3 = (undefined1 *)FUN_00759c3c(uVar1 + 1);
    param_1[5] = sVar2;
    param_1[6] = (ulong)puVar3;
    param_1[4] = uVar1 + 1 | 1;
  }
  memmove(puVar3,param_4,sVar2);
LAB_0048a504:
  puVar3[sVar2] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  return;
}


// ===== 0048a554  FUN_0048a554 =====

void FUN_0048a554(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 undefined4 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long *plVar5;
  
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = param_3;
  param_1[2] = param_4;
  *(undefined4 *)(param_1 + 3) = param_5;
  FUN_00475ef4(param_1 + 4,param_6);
  puVar4 = PTR_DAT_007a1e40;
  lVar2 = *(long *)(PTR_PTR_007a1e48 + 8);
  uVar3 = *(undefined8 *)(PTR_PTR_007a1e48 + 0x10);
  puVar1 = PTR_DAT_007a1e40 + 0x40;
  plVar5 = param_1 + 0xe;
  *plVar5 = lVar2;
  param_1[0x1c] = puVar1;
  param_1[0x22] = 0;
  *(undefined8 *)((long)plVar5 + *(long *)(lVar2 + -0x18)) = uVar3;
  lVar2 = (long)plVar5 + *(long *)(*plVar5 + -0x18);
                    /* try { // try from 0048a5cc to 0048a5d7 has its CatchHandler @ 0048a65c */
  FUN_00715fc0(lVar2,param_1 + 0xf);
  *(undefined8 *)(lVar2 + 0x88) = 0;
  *(undefined4 *)(lVar2 + 0x90) = 0xffffffff;
  *plVar5 = (long)(puVar4 + 0x18);
  param_1[0x1c] = puVar1;
                    /* try { // try from 0048a5f0 to 0048a5f7 has its CatchHandler @ 0048a634 */
  FUN_007160dc(param_1 + 0xf);
  param_1[0xf] = PTR_DAT_007a10f8 + 0x10;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0x10;
  return;
}


// ===== 0048a678  FUN_0048a678 =====

void FUN_0048a678(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)*param_1;
  *param_1 = 0;
  if (__ptr != (void *)0x0) {
    FUN_0063b594(__ptr);
    free(__ptr);
    return;
  }
  return;
}


// ===== 0048a6b4  FUN_0048a6b4 =====

undefined8 FUN_0048a6b4(undefined8 param_1,undefined4 *param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 uVar6;
  
  uVar4 = FUN_00303e0c(param_1,"Session Options { ",0x12);
  uVar4 = FUN_00303e0c(uVar4," execution_mode:",0x10);
  uVar4 = FUN_00717214(uVar4,*param_2);
  uVar4 = FUN_00303e0c(uVar4," execution_order:",0x11);
  iVar2 = param_2[1];
  if (iVar2 == 2) {
    pcVar5 = "MEMORY_EFFICIENT";
    uVar6 = 0x10;
  }
  else if (iVar2 == 1) {
    pcVar5 = "PRIORITY_BASED";
    uVar6 = 0xe;
  }
  else {
    if (iVar2 == 0) {
      pcVar5 = "DEFAULT";
    }
    else {
      pcVar5 = "UNKNOWN";
    }
    uVar6 = 7;
  }
  FUN_00303e0c(uVar4,pcVar5,uVar6);
  uVar4 = FUN_00303e0c(uVar4," enable_profiling:",0x12);
  uVar4 = FUN_00717084(uVar4,*(undefined1 *)(param_2 + 2));
  uVar4 = FUN_00303e0c(uVar4," optimized_model_filepath:",0x1a);
  uVar1 = (ulong)(*(byte *)(param_2 + 4) >> 1);
  lVar3 = (long)param_2 + 0x11;
  if ((*(byte *)(param_2 + 4) & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 6);
    lVar3 = *(long *)(param_2 + 8);
  }
  uVar4 = FUN_00303e0c(uVar4,lVar3,uVar1);
  uVar4 = FUN_00303e0c(uVar4," enable_mem_pattern:",0x14);
  uVar4 = FUN_00717084(uVar4,*(undefined1 *)(param_2 + 10));
  uVar4 = FUN_00303e0c(uVar4," enable_mem_reuse:",0x12);
  uVar4 = FUN_00717084(uVar4,*(undefined1 *)((long)param_2 + 0x29));
  uVar4 = FUN_00303e0c(uVar4," enable_cpu_mem_arena:",0x16);
  uVar4 = FUN_00717084(uVar4,*(undefined1 *)((long)param_2 + 0x2a));
  uVar4 = FUN_00303e0c(uVar4," profile_file_prefix:",0x15);
  uVar1 = (ulong)(*(byte *)(param_2 + 0xc) >> 1);
  lVar3 = (long)param_2 + 0x31;
  if ((*(byte *)(param_2 + 0xc) & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 0xe);
    lVar3 = *(long *)(param_2 + 0x10);
  }
  uVar4 = FUN_00303e0c(uVar4,lVar3,uVar1);
  uVar4 = FUN_00303e0c(uVar4," session_logid:",0xf);
  uVar1 = (ulong)(*(byte *)(param_2 + 0x12) >> 1);
  lVar3 = (long)param_2 + 0x49;
  if ((*(byte *)(param_2 + 0x12) & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 0x14);
    lVar3 = *(long *)(param_2 + 0x16);
  }
  uVar4 = FUN_00303e0c(uVar4,lVar3,uVar1);
  uVar4 = FUN_00303e0c(uVar4," session_log_severity_level:",0x1c);
  uVar4 = FUN_00717214(uVar4,param_2[0x18]);
  uVar4 = FUN_00303e0c(uVar4," session_log_verbosity_level:",0x1d);
  uVar4 = FUN_00717214(uVar4,param_2[0x19]);
  uVar4 = FUN_00303e0c(uVar4," max_num_graph_transformation_steps:",0x24);
  uVar4 = FUN_007173cc(uVar4,param_2[0x1a]);
  uVar4 = FUN_00303e0c(uVar4," graph_optimization_level:",0x1a);
  uVar4 = FUN_00717214(uVar4,param_2[0x1b]);
  uVar4 = FUN_00303e0c(uVar4," intra_op_param:",0x10);
  uVar4 = FUN_00603e40(uVar4,param_2 + 0x1c);
  uVar4 = FUN_00303e0c(uVar4," inter_op_param:",0x10);
  uVar4 = FUN_00603e40(uVar4,param_2 + 0x30);
  uVar4 = FUN_00303e0c(uVar4," use_per_session_threads:",0x19);
  uVar4 = FUN_00717084(uVar4,*(undefined1 *)(param_2 + 0x4a));
  uVar4 = FUN_00303e0c(uVar4," thread_pool_allow_spinning:",0x1c);
  uVar4 = FUN_00717084(uVar4,*(undefined1 *)((long)param_2 + 0x129));
  uVar4 = FUN_00303e0c(uVar4," use_deterministic_compute:",0x1b);
  uVar4 = FUN_00717084(uVar4,*(undefined1 *)((long)param_2 + 0x12a));
  uVar4 = FUN_00303e0c(uVar4," config_options: { ",0x13);
  uVar4 = FUN_0056a074(uVar4,param_2 + 0x4c);
  uVar4 = FUN_00303e0c(uVar4,&DAT_001f651f,2);
  FUN_00303e0c(uVar4,&DAT_001f651f,2);
  return param_1;
}


// ===== 0048a980  FUN_0048a980 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0048a980(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  puVar1 = PTR_DAT_007a1eb8;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0x3f800000;
  param_1[3] = 0;
  param_1[2] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  puVar1 = PTR_DAT_007a1f30;
  *(undefined1 *)(param_1 + 0x22) = 0x28;
  *(undefined4 *)(param_1 + 0x16) = 0x3f800000;
  uVar3 = s_onnxruntime_profile__001d2566._8_8_;
  uVar2 = s_onnxruntime_profile__001d2566._0_8_;
  puVar1 = puVar1 + 0x10;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined4 *)((long)param_1 + 0x121) = 0x5f656c69;
  *(undefined8 *)((long)param_1 + 0x119) = uVar3;
  *(undefined8 *)((long)param_1 + 0x111) = uVar2;
  lVar5 = _UNK_00200108;
  lVar4 = _DAT_00200100;
  *(undefined2 *)((long)param_1 + 0x154) = 0x100;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  *(undefined8 *)((long)param_1 + 0x179) = 0;
  *(undefined8 *)((long)param_1 + 0x171) = 0;
  param_1[0x1e] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  *(undefined2 *)(param_1 + 0x21) = 0x101;
  *(undefined1 *)((long)param_1 + 0x10a) = 1;
  *(undefined1 *)((long)param_1 + 0x125) = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x29] = lVar5;
  param_1[0x28] = lVar4;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x33] = 0;
  *(undefined8 *)((long)param_1 + 0x19d) = 0;
  param_1[0x32] = 0;
  param_1[0x31] = 0;
  *(undefined1 *)((long)param_1 + 0x1a5) = 1;
  *(undefined2 *)(param_1 + 0x41) = 0x101;
  *(undefined1 *)((long)param_1 + 0x20a) = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x46) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x4b) = 0x3f800000;
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  param_1[0x50] = 0;
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  param_1[0x18] = (long)puVar1;
  param_1[0x36] = 0;
  param_1[0x35] = 0;
  param_1[0x38] = 0;
  param_1[0x37] = 0;
  *(undefined8 *)((long)param_1 + 0x1c9) = 0;
  *(undefined8 *)((long)param_1 + 0x1c1) = 0;
  param_1[0x3e] = 0;
  param_1[0x3d] = 0;
  param_1[0x40] = 0;
  param_1[0x3f] = 0;
  param_1[0x3c] = 0;
  param_1[0x3b] = 0;
  param_1[0x48] = 0;
  param_1[0x47] = 0;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  FUN_0048ace8(param_1 + 0x54);
  param_1[0xa2] = (long)(param_1 + 0xa2);
  param_1[0xa3] = (long)(param_1 + 0xa2);
  param_1[0x9e] = 0;
  param_1[0x9d] = 0;
  param_1[0xa0] = 0;
  param_1[0x9f] = 0;
  param_1[0x8f] = 0;
  param_1[0x8e] = 0;
  param_1[0x91] = 0;
  param_1[0x90] = 0;
  param_1[0x93] = 0;
  param_1[0x92] = 0;
  *(undefined8 *)((long)param_1 + 0x4a1) = 0;
  *(undefined8 *)((long)param_1 + 0x499) = 0;
  param_1[0x97] = 0;
  param_1[0x96] = 0;
  param_1[0x99] = 0;
  param_1[0x98] = 0;
  param_1[0x9b] = 0;
  param_1[0x9a] = 0;
  puVar6 = PTR_DAT_007a1f38;
  *(undefined4 *)(param_1 + 0xa1) = 0x3f800000;
  param_1[0xa4] = 0;
  param_1[0xa6] = (long)puVar1;
  param_1[0xa5] = (long)(puVar6 + 0x10);
  param_1[0xc2] = 0;
  param_1[0xc1] = 0;
  param_1[0xa7] = 0;
  param_1[0xa9] = 0;
  param_1[0xa8] = 0;
  *(undefined4 *)(param_1 + 0xaa) = 0;
  param_1[0xac] = 0;
  param_1[0xab] = 0;
  param_1[0xae] = 0;
  param_1[0xad] = 0;
  param_1[0xb0] = 0;
  param_1[0xaf] = 0;
  param_1[0xb2] = 0;
  param_1[0xb1] = 0;
  param_1[0xb4] = 0;
  param_1[0xb3] = 0;
  param_1[0xb6] = 0;
  param_1[0xb5] = 0;
  param_1[0xb8] = 0;
  param_1[0xb7] = 0;
  param_1[0xba] = 0;
  param_1[0xb9] = 0;
  param_1[0xbc] = 0;
  param_1[0xbb] = 0;
  param_1[0xbe] = 0;
  param_1[0xbd] = 0;
  *(undefined4 *)(param_1 + 0xbf) = 0x3f800000;
  param_1[0xc0] = (long)puVar1;
  param_1[0xc3] = 0;
  param_1[0xc4] = (long)puVar1;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  param_1[0xcd] = 0;
  *(undefined2 *)(param_1 + 0xce) = 0;
  *(undefined4 *)(param_1 + 0xcb) = 0;
  param_1[200] = 0;
  param_1[199] = 0;
  param_1[0xca] = 0;
  param_1[0xc9] = 0;
  param_1[0xc6] = 0;
  param_1[0xc5] = 0;
  *(undefined1 *)((long)param_1 + 0x672) = 1;
  *(undefined4 *)(param_1 + 0xcf) = 0;
  param_1[0xd1] = 0;
  param_1[0xd0] = 0;
  param_1[0xd3] = 0;
  param_1[0xd2] = 0;
  param_1[0xd4] = 0;
                    /* try { // try from 0048aba0 to 0048abaf has its CatchHandler @ 0048ac24 */
  FUN_006535ec(param_1 + 0xd5,0,0);
  *(undefined1 *)(param_1 + 0xeb) = 0;
  param_1[0xec] = param_3;
  param_1[0xee] = 0;
  param_1[0xed] = 0;
  param_1[0xf0] = 0;
  param_1[0xef] = 0;
  *(undefined8 *)((long)param_1 + 0x789) = 0;
  *(undefined8 *)((long)param_1 + 0x781) = 0;
  param_1[0xf4] = 0;
  param_1[0xf3] = 0;
                    /* try { // try from 0048abd0 to 0048abdf has its CatchHandler @ 0048ac00 */
  FUN_00488ce0(param_1,param_2,param_3);
  return;
}


// ===== 0048ace8  FUN_0048ace8 =====

void FUN_0048ace8(undefined4 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long *plVar5;
  
  puVar1 = PTR_PTR_007a1910;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  puVar4 = PTR_DAT_007a1918;
  lVar2 = *(long *)(puVar1 + 8);
  uVar3 = *(undefined8 *)(puVar1 + 0x10);
  *(undefined1 *)(param_1 + 4) = 0;
  puVar1 = puVar4 + 0x40;
  *(undefined8 *)(param_1 + 0x3e) = 0;
  plVar5 = (long *)(param_1 + 6);
  *plVar5 = lVar2;
  *(undefined **)(param_1 + 0x32) = puVar1;
  *(undefined8 *)((long)plVar5 + *(long *)(lVar2 + -0x18)) = uVar3;
  lVar2 = (long)plVar5 + *(long *)(*plVar5 + -0x18);
                    /* try { // try from 0048ad50 to 0048ad5b has its CatchHandler @ 0048ade0 */
  FUN_00715fc0(lVar2,param_1 + 8);
  *(undefined8 *)(lVar2 + 0x88) = 0;
  *(undefined4 *)(lVar2 + 0x90) = 0xffffffff;
  *plVar5 = (long)(puVar4 + 0x18);
  *(undefined **)(param_1 + 0x32) = puVar1;
                    /* try { // try from 0048ad74 to 0048ad7b has its CatchHandler @ 0048adc0 */
  FUN_00718b7c(param_1 + 8);
  *(undefined8 *)(param_1 + 0x62) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x66) = 0;
  *(undefined8 *)(param_1 + 100) = 0;
  *(undefined8 *)(param_1 + 0x5e) = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  puVar1 = PTR_DAT_007a1f40;
  *(undefined8 *)(param_1 + 0x5a) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)((long)param_1 + 0x1a2) = 0;
  *(undefined8 *)((long)param_1 + 0x19a) = 0;
  *(undefined8 *)(param_1 + 0x6c) = *(undefined8 *)puVar1;
  *(undefined8 *)(param_1 + 0x6e) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x72) = 0;
  return;
}


// ===== 0048adf4  FUN_0048adf4 =====

void FUN_0048adf4(undefined8 *param_1)

{
  long *plVar1;
  long *__ptr;
  long *plVar2;
  
  __ptr = (long *)*param_1;
  if (__ptr == (long *)0x0) {
    return;
  }
  plVar2 = (long *)param_1[1];
  if (plVar2 == __ptr) {
    param_1[1] = __ptr;
    free(__ptr);
    return;
  }
  do {
    plVar2 = plVar2 + -1;
    plVar1 = (long *)*plVar2;
    *plVar2 = 0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
  } while (plVar2 != __ptr);
  param_1[1] = __ptr;
  free((void *)*param_1);
  return;
}


// ===== 0048ae80  FUN_0048ae80 =====

void FUN_0048ae80(long *param_1)

{
  void *__ptr;
  long lVar1;
  char *pcVar2;
  undefined8 *puVar3;
  
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)(param_1[1] + 0x58);
    pcVar2 = (char *)*param_1;
    do {
      if ((-1 < *pcVar2) && (*(char *)(puVar3 + 1) != '\0')) {
        __ptr = (void *)*puVar3;
        *puVar3 = 0;
        if (__ptr != (void *)0x0) {
          free(__ptr);
        }
      }
      lVar1 = lVar1 + -1;
      puVar3 = puVar3 + 0xd;
      pcVar2 = pcVar2 + 1;
    } while (lVar1 != 0);
    free((void *)((*param_1 - (param_1[3] & 1U)) + -8));
    return;
  }
  return;
}


// ===== 0048af0c  FUN_0048af0c =====

void FUN_0048af0c(undefined8 *param_1)

{
  byte bVar1;
  undefined8 *__ptr;
  void *pvVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  char *pcVar7;
  long *plVar8;
  
  if ((*(int *)(param_1 + 0xd) != -1) && (lVar5 = param_1[0xb], lVar5 != 0)) {
    lVar4 = param_1[10];
    pcVar7 = (char *)param_1[9];
    do {
      if (-1 < *pcVar7) {
        FUN_0049e03c(lVar4);
      }
      lVar5 = lVar5 + -1;
      lVar4 = lVar4 + 0x58;
      pcVar7 = pcVar7 + 1;
    } while (lVar5 != 0);
    free((void *)((param_1[9] - (param_1[0xc] & 1)) + -8));
  }
  *(undefined4 *)(param_1 + 0xd) = 0xffffffff;
  if (param_1[7] != 0) {
    plVar6 = (long *)param_1[6];
    param_1[7] = 0;
    plVar3 = *(long **)(param_1[5] + 8);
    lVar5 = *plVar6;
    *(long **)(lVar5 + 8) = plVar3;
    *plVar3 = lVar5;
    while (plVar6 != param_1 + 5) {
      plVar3 = (long *)plVar6[3];
      plVar8 = (long *)plVar6[1];
      if ((plVar3 != (long *)0x0) &&
         (lVar5 = FUN_00755c50(0xffffffffffffffff,plVar3 + 1), lVar5 == 0)) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        FUN_0071245c(plVar3);
      }
      free(plVar6);
      plVar6 = plVar8;
    }
  }
  __ptr = (undefined8 *)param_1[2];
  while (__ptr != (undefined8 *)0x0) {
    plVar6 = (long *)__ptr[6];
    pvVar2 = (void *)*__ptr;
    if ((plVar6 == (long *)0x0) || (lVar5 = FUN_00755c50(0xffffffffffffffff,plVar6 + 1), lVar5 != 0)
       ) {
      bVar1 = *(byte *)(__ptr + 2);
    }
    else {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_0071245c(plVar6);
      bVar1 = *(byte *)(__ptr + 2);
    }
    if ((bVar1 & 1) != 0) {
      free((void *)__ptr[4]);
    }
    free(__ptr);
    __ptr = (undefined8 *)pvVar2;
  }
  pvVar2 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  free(pvVar2);
  return;
}


// ===== 0048b098  FUN_0048b098 =====

void FUN_0048b098(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)*param_1;
  *param_1 = 0;
  if (__ptr != (void *)0x0) {
    FUN_004a0cf0(__ptr);
    free(__ptr);
    return;
  }
  return;
}


// ===== 0048b0d4  FUN_0048b0d4 =====

void FUN_0048b0d4(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)*param_1;
  *param_1 = 0;
  if (__ptr != (void *)0x0) {
    if ((*(byte *)((long)__ptr + 8) & 1) != 0) {
      free(*(void **)((long)__ptr + 0x18));
    }
    free(__ptr);
    return;
  }
  return;
}


// ===== 0048b118  FUN_0048b118 =====

void FUN_0048b118(long *param_1)

{
  long lVar1;
  char *pcVar2;
  undefined8 *puVar3;
  
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)(param_1[1] + 0x10);
    pcVar2 = (char *)*param_1;
    do {
      if ((-1 < *pcVar2) && ((*(byte *)(puVar3 + -2) & 1) != 0)) {
        free((void *)*puVar3);
      }
      lVar1 = lVar1 + -1;
      puVar3 = puVar3 + 3;
      pcVar2 = pcVar2 + 1;
    } while (lVar1 != 0);
    free((void *)((*param_1 - (param_1[3] & 1U)) + -8));
    return;
  }
  return;
}


// ===== 0048b19c  FUN_0048b19c =====

void FUN_0048b19c(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  long *plVar6;
  byte *pbVar7;
  void *pvVar8;
  
  puVar1 = (undefined8 *)param_1[0xd];
  while (puVar1 != (undefined8 *)0x0) {
    pvVar2 = (void *)*puVar1;
    if ((*(byte *)(puVar1 + 2) & 1) != 0) {
      free((void *)puVar1[4]);
    }
    free(puVar1);
    puVar1 = (undefined8 *)pvVar2;
  }
  pvVar2 = (void *)param_1[0xb];
  param_1[0xb] = 0;
  if (pvVar2 != (void *)0x0) {
    free(pvVar2);
  }
  puVar1 = (undefined8 *)param_1[8];
  while (puVar1 != (undefined8 *)0x0) {
    pvVar2 = (void *)*puVar1;
    FUN_00496e2c(puVar1 + 2);
    free(puVar1);
    puVar1 = (undefined8 *)pvVar2;
  }
  pvVar2 = (void *)param_1[6];
  param_1[6] = 0;
  if (pvVar2 != (void *)0x0) {
    free(pvVar2);
  }
  pbVar5 = (byte *)param_1[3];
  if (pbVar5 != (byte *)0x0) {
    pbVar4 = (byte *)param_1[4];
    pbVar7 = pbVar5;
    if (pbVar4 != pbVar5) {
      do {
        pbVar7 = pbVar4 + -0x18;
        if ((*pbVar7 & 1) != 0) {
          free(*(void **)(pbVar4 + -8));
        }
        pbVar4 = pbVar7;
      } while (pbVar7 != pbVar5);
      pbVar7 = (byte *)param_1[3];
    }
    param_1[4] = pbVar5;
    free(pbVar7);
  }
  pvVar2 = (void *)*param_1;
  if (pvVar2 != (void *)0x0) {
    pvVar8 = (void *)param_1[1];
    if (pvVar8 == pvVar2) {
      param_1[1] = pvVar2;
      free(pvVar2);
      return;
    }
    do {
      plVar6 = *(long **)((long)pvVar8 + -8);
      if ((plVar6 != (long *)0x0) &&
         (lVar3 = FUN_00755c50(0xffffffffffffffff,plVar6 + 1), lVar3 == 0)) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        FUN_0071245c(plVar6);
      }
      pvVar8 = (void *)((long)pvVar8 + -0x10);
    } while (pvVar8 != pvVar2);
    param_1[1] = pvVar2;
    free((void *)*param_1);
    return;
  }
  return;
}


// ===== 0048b304  FUN_0048b304 =====

void FUN_0048b304(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 0048b354  FUN_0048b354 =====

void FUN_0048b354(long *param_1)

{
  byte bVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  bool bVar5;
  undefined8 *puVar6;
  void *pvVar7;
  long *plVar8;
  undefined8 *__ptr;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  char *pcVar14;
  byte local_1d8 [16];
  void *local_1c8;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  *param_1 = (long)(PTR_DAT_007a1eb8 + 0x10);
                    /* try { // try from 0048b394 to 0048b39f has its CatchHandler @ 0048b74c */
  if (((char)param_1[0x1d] != '\0') && (FUN_0048b7f4(local_1d8,param_1), (local_1d8[0] & 1) != 0)) {
    free(local_1c8);
  }
  puVar3 = PTR_DAT_007a1ec0;
  puVar6 = *(undefined8 **)(PTR_DAT_007a1ec0 + 8);
  if (puVar6 != (undefined8 *)0x0) {
    __ptr = (undefined8 *)(PTR_DAT_007a1ec0 + 8);
    puVar10 = puVar6;
    do {
      lVar12 = 8;
      if ((uint)*(undefined8 *)PTR_DAT_007a1eb0 <= *(uint *)(puVar10 + 4)) {
        lVar12 = 0;
        __ptr = puVar10;
      }
      puVar10 = *(undefined8 **)((long)puVar10 + lVar12);
    } while (puVar10 != (undefined8 *)0x0);
    if ((__ptr != (undefined8 *)(PTR_DAT_007a1ec0 + 8)) &&
       (*(uint *)(__ptr + 4) <= (uint)*(undefined8 *)PTR_DAT_007a1eb0)) {
      puVar10 = __ptr;
      puVar4 = (undefined8 *)__ptr[1];
      if ((undefined8 *)__ptr[1] == (undefined8 *)0x0) {
        do {
          puVar9 = (undefined8 *)puVar10[2];
          bVar5 = (undefined8 *)*puVar9 != puVar10;
          puVar10 = puVar9;
        } while (bVar5);
      }
      else {
        do {
          puVar9 = puVar4;
          puVar4 = (undefined8 *)*puVar9;
        } while ((undefined8 *)*puVar9 != (undefined8 *)0x0);
      }
      if (*(undefined8 **)PTR_DAT_007a1ec0 == __ptr) {
        *(undefined8 **)PTR_DAT_007a1ec0 = puVar9;
      }
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + -1;
      FUN_00328dd0(puVar6,__ptr);
      free(__ptr);
    }
  }
  pvVar7 = (void *)param_1[0xef];
  if (pvVar7 != (void *)0x0) {
    param_1[0xf0] = (long)pvVar7;
    free(pvVar7);
  }
  FUN_0065364c(param_1 + 0xd5);
  if ((*(byte *)(param_1 + 0xd1) & 1) != 0) {
    free((void *)param_1[0xd3]);
  }
  plVar11 = (long *)param_1[200];
  if (plVar11 != (long *)0x0) {
    plVar13 = (long *)param_1[0xc9];
    plVar8 = plVar11;
    if (plVar13 != plVar11) {
      do {
        plVar13 = plVar13 + -1;
        plVar8 = (long *)*plVar13;
        *plVar13 = 0;
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 8))();
        }
      } while (plVar13 != plVar11);
      plVar8 = (long *)param_1[200];
    }
    param_1[0xc9] = (long)plVar11;
    free(plVar8);
  }
  lVar12 = param_1[0xc6];
  if (lVar12 != 0) {
    puVar6 = (undefined8 *)(param_1[0xc5] + 0x58);
    pcVar14 = (char *)param_1[0xc4];
    do {
      if ((-1 < *pcVar14) && (*(char *)(puVar6 + 1) != '\0')) {
        pvVar7 = (void *)*puVar6;
        *puVar6 = 0;
        if (pvVar7 != (void *)0x0) {
          free(pvVar7);
        }
      }
      lVar12 = lVar12 + -1;
      puVar6 = puVar6 + 0xd;
      pcVar14 = pcVar14 + 1;
    } while (lVar12 != 0);
    free((void *)((param_1[0xc4] - (param_1[199] & 1U)) + -8));
  }
  lVar12 = param_1[0xc2];
  if (lVar12 != 0) {
    puVar6 = (undefined8 *)(param_1[0xc1] + 0x58);
    pcVar14 = (char *)param_1[0xc0];
    do {
      if ((-1 < *pcVar14) && (*(char *)(puVar6 + 1) != '\0')) {
        pvVar7 = (void *)*puVar6;
        *puVar6 = 0;
        if (pvVar7 != (void *)0x0) {
          free(pvVar7);
        }
      }
      lVar12 = lVar12 + -1;
      puVar6 = puVar6 + 0xd;
      pcVar14 = pcVar14 + 1;
    } while (lVar12 != 0);
    free((void *)((param_1[0xc0] - (param_1[0xc3] & 1U)) + -8));
  }
  FUN_004838c0(param_1 + 0xab);
  FUN_0048af0c(param_1 + 0x9d);
  pvVar7 = (void *)param_1[0x97];
  param_1[0x97] = 0;
  if (pvVar7 != (void *)0x0) {
    FUN_0063b594(pvVar7);
    free(pvVar7);
  }
  pvVar7 = (void *)param_1[0x96];
  param_1[0x96] = 0;
  if (pvVar7 != (void *)0x0) {
    FUN_0063b594(pvVar7);
    free(pvVar7);
  }
  if ((*(byte *)(param_1 + 0x92) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x8f);
  }
  else {
    free((void *)param_1[0x94]);
    bVar1 = *(byte *)(param_1 + 0x8f);
  }
  if ((bVar1 & 1) == 0) {
    pvVar7 = (void *)param_1[0x8e];
    param_1[0x8e] = 0;
  }
  else {
    free((void *)param_1[0x91]);
    pvVar7 = (void *)param_1[0x8e];
    param_1[0x8e] = 0;
  }
  if (pvVar7 != (void *)0x0) {
    FUN_004a0cf0(pvVar7);
    free(pvVar7);
  }
  FUN_00638fe0(param_1 + 0x54);
  pvVar7 = (void *)param_1[0x53];
  param_1[0x53] = 0;
  if (pvVar7 != (void *)0x0) {
    if ((*(byte *)((long)pvVar7 + 8) & 1) != 0) {
      free(*(void **)((long)pvVar7 + 0x18));
    }
    free(pvVar7);
  }
  pvVar7 = (void *)param_1[0x52];
  param_1[0x52] = 0;
  if (pvVar7 != (void *)0x0) {
    FUN_006386f8(pvVar7);
    free(pvVar7);
  }
  FUN_00483e64(param_1 + 0x1c);
  lVar12 = param_1[0x1a];
  if (lVar12 != 0) {
    puVar6 = (undefined8 *)(param_1[0x19] + 0x10);
    pcVar14 = (char *)param_1[0x18];
    do {
      if ((-1 < *pcVar14) && ((*(byte *)(puVar6 + -2) & 1) != 0)) {
        free((void *)*puVar6);
      }
      lVar12 = lVar12 + -1;
      puVar6 = puVar6 + 3;
      pcVar14 = pcVar14 + 1;
    } while (lVar12 != 0);
    free((void *)((param_1[0x18] - (param_1[0x1b] & 1U)) + -8));
  }
  FUN_0048b19c(param_1 + 7);
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    free((void *)param_1[6]);
  }
  plVar11 = (long *)param_1[3];
  if ((plVar11 != (long *)0x0) &&
     (lVar12 = FUN_00755c50(0xffffffffffffffff,plVar11 + 1), lVar12 == 0)) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
    FUN_0071245c(plVar11);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0048b7f4  FUN_0048b7f4 =====

void FUN_0048b7f4(undefined8 *param_1,long param_2)

{
  long lVar1;
  byte *pbVar2;
  byte *pbVar3;
  long lVar4;
  undefined8 uVar5;
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
  if (*(char *)(param_2 + 0x670) == '\0') {
    lVar4 = *(long *)(param_2 + 8);
    if (*(int *)(lVar4 + 0x20) < 4) {
      uVar5 = *(undefined8 *)PTR_PTR_s_onnxruntime_007a1f28;
      FUN_0048a3f4(local_210,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/inference_session.cc"
                   ,0xb1f,"EndProfiling");
                    /* try { // try from 0048b890 to 0048b8af has its CatchHandler @ 0048ba3c */
      FUN_0048a554(auStack_1c0,lVar4,3,uVar5,0,local_210);
                    /* try { // try from 0048b8b0 to 0048b8c3 has its CatchHandler @ 0048ba2c */
      FUN_00303e0c(auStack_150,"Could not write a profile because no model was loaded.",0x36);
      FUN_00637fac(auStack_1c0);
      pbVar3 = local_1d8;
      if (local_1d8 != (byte *)0x0) {
        while (pbVar2 = local_1d0, pbVar2 != pbVar3) {
          local_1d0 = pbVar2 + -0x18;
          if ((*local_1d0 & 1) != 0) {
            free(*(void **)(pbVar2 + -8));
          }
        }
LAB_0048b9c8:
        free(local_1d8);
      }
LAB_0048b9d0:
      if ((local_1f0 & 1) != 0) {
        free(local_1e0);
      }
      if ((local_210[0] & 1) != 0) {
        free(local_200);
      }
    }
  }
  else {
    if (*(char *)(param_2 + 0x2b0) != '\0') {
      if (*(long *)(lVar1 + 0x28) == local_48) {
        FUN_00639994(param_2 + 0x2a0);
        return;
      }
      goto LAB_0048ba60;
    }
    lVar4 = *(long *)(param_2 + 8);
    if (*(int *)(lVar4 + 0x20) < 1) {
      uVar5 = *(undefined8 *)PTR_PTR_s_onnxruntime_007a1f28;
      FUN_0048a3f4(local_210,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/inference_session.cc"
                   ,0xb1b,"EndProfiling");
                    /* try { // try from 0048b948 to 0048b967 has its CatchHandler @ 0048ba28 */
      FUN_0048a554(auStack_1c0,lVar4,0,uVar5,0,local_210);
                    /* try { // try from 0048b968 to 0048b97b has its CatchHandler @ 0048ba24 */
      FUN_00303e0c(auStack_150,"Profiler is disabled.",0x15);
      FUN_00637fac(auStack_1c0);
      pbVar3 = local_1d8;
      if (local_1d8 != (byte *)0x0) {
        while (pbVar2 = local_1d0, pbVar2 != pbVar3) {
          local_1d0 = pbVar2 + -0x18;
          if ((*local_1d0 & 1) != 0) {
            free(*(void **)(pbVar2 + -8));
          }
        }
        goto LAB_0048b9c8;
      }
      goto LAB_0048b9d0;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_0048ba60:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0048ba64  FUN_0048ba64 =====

void FUN_0048ba64(long *param_1)

{
  long lVar1;
  byte *pbVar2;
  byte *pbVar3;
  char *__s;
  size_t sVar4;
  long lVar5;
  undefined8 uVar6;
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
  lVar5 = *(long *)(*param_1 + 8);
  if (*(int *)(lVar5 + 0x20) < 4) {
    uVar6 = *(undefined8 *)PTR_PTR_s_onnxruntime_007a1f28;
    FUN_0048a3f4(local_210,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/inference_session.cc"
                 ,0x29c,"operator()");
                    /* try { // try from 0048bac8 to 0048bae7 has its CatchHandler @ 0048bbc4 */
    FUN_0048a554(auStack_1c0,lVar5,3,uVar6,0,local_210);
                    /* try { // try from 0048bae8 to 0048bafb has its CatchHandler @ 0048bbcc */
    uVar6 = FUN_00303e0c(auStack_150,"Error during EndProfiling(): ",0x1d);
    __s = (char *)(**(code **)(*(long *)param_1[1] + 0x10))();
    sVar4 = strlen(__s);
                    /* try { // try from 0048bb1c to 0048bb27 has its CatchHandler @ 0048bbcc */
    FUN_00303e0c(uVar6,__s,sVar4);
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
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0048bbfc  FUN_0048bbfc =====

void FUN_0048bbfc(void *param_1)

{
  FUN_0048b354();
  free(param_1);
  return;
}


// ===== 0048bc20  FUN_0048bc20 =====

void FUN_0048bc20(long *param_1,long param_2,long *param_3)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  undefined *puVar4;
  byte *pbVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  byte *pbVar11;
  long *local_230;
  long *local_228;
  byte local_220 [16];
  void *local_210;
  byte local_200;
  void *local_1f0;
  byte *local_1e8;
  byte *local_1e0;
  long *local_1d0 [14];
  undefined1 auStack_160 [264];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (*param_3 == 0) {
    if (*(long *)(lVar2 + 0x28) == local_58) {
      FUN_0063acd8(param_1,2,1,"Received nullptr for exec provider");
      return;
    }
    goto LAB_0048c1dc;
  }
  FUN_007073d8(param_2 + 0x660);
  puVar4 = PTR_s_onnxruntime_007a9878;
  if (*(char *)(param_2 + 0x671) == '\0') {
    lVar9 = *param_3;
    bVar1 = *(byte *)(lVar9 + 0x10);
    uVar7 = (ulong)(bVar1 >> 1);
    if ((bVar1 & 1) != 0) {
      uVar7 = *(ulong *)(lVar9 + 0x18);
    }
    if (uVar7 == 0x14) {
      plVar8 = (long *)(lVar9 + 0x11);
      if ((bVar1 & 1) != 0) {
        plVar8 = *(long **)(lVar9 + 0x20);
      }
      if ((*plVar8 == 0x75636578456c6d44 && plVar8[1] == 0x766f72506e6f6974) &&
          (int)plVar8[2] == 0x72656469) {
        if (*(char *)(param_2 + 0x108) != '\0') {
          lVar10 = *(long *)(param_2 + 8);
          if (*(int *)(lVar10 + 0x20) < 2) {
                    /* try { // try from 0048bdf8 to 0048be13 has its CatchHandler @ 0048c12c */
            FUN_0048a3f4(local_220,
                         "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/inference_session.cc"
                         ,0x2c9,"RegisterExecutionProvider");
                    /* try { // try from 0048be14 to 0048be33 has its CatchHandler @ 0048c128 */
            FUN_0048a554(local_1d0,lVar10,1,puVar4,0,local_220);
                    /* try { // try from 0048be34 to 0048be57 has its CatchHandler @ 0048c134 */
            uVar6 = FUN_00303e0c(auStack_160,
                                 "Having memory pattern enabled is not supported while using the DML Execution Provider. "
                                 ,0x57);
            FUN_00303e0c(uVar6,
                         "So disabling it for this session since it uses the DML Execution Provider."
                         ,0x4a);
            FUN_00637fac(local_1d0);
            pbVar5 = local_1e8;
            if (local_1e8 != (byte *)0x0) {
              while (pbVar11 = local_1e0, pbVar11 != pbVar5) {
                local_1e0 = pbVar11 + -0x18;
                if ((*local_1e0 & 1) != 0) {
                  free(*(void **)(pbVar11 + -8));
                }
              }
              local_1e0 = pbVar5;
              free(local_1e8);
            }
            if ((local_200 & 1) != 0) {
              free(local_1f0);
            }
            if ((local_220[0] & 1) != 0) {
              free(local_210);
            }
          }
          *(undefined1 *)(param_2 + 0x108) = 0;
        }
        puVar4 = PTR_s_onnxruntime_007a9878;
        if (*(int *)(param_2 + 0xe0) != 0) {
          lVar10 = *(long *)(param_2 + 8);
          if (*(int *)(lVar10 + 0x20) < 2) {
                    /* try { // try from 0048bf3c to 0048bf57 has its CatchHandler @ 0048c124 */
            FUN_0048a3f4(local_220,
                         "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/inference_session.cc"
                         ,0x2d1,"RegisterExecutionProvider");
                    /* try { // try from 0048bf58 to 0048bf77 has its CatchHandler @ 0048c120 */
            FUN_0048a554(local_1d0,lVar10,1,puVar4,0,local_220);
                    /* try { // try from 0048bf78 to 0048bf9b has its CatchHandler @ 0048c130 */
            uVar6 = FUN_00303e0c(auStack_160,
                                 "Parallel execution mode does not support the DML Execution Provider. "
                                 ,0x45);
            FUN_00303e0c(uVar6,
                         "So making the execution mode sequential for this session since it uses the DML Execution Provider."
                         ,0x62);
            FUN_00637fac(local_1d0);
            pbVar5 = local_1e8;
            pbVar11 = local_1e0;
            if (local_1e8 != (byte *)0x0) {
              while (pbVar3 = pbVar11, pbVar3 != pbVar5) {
                pbVar11 = pbVar3 + -0x18;
                if ((*pbVar11 & 1) != 0) {
                  free(*(void **)(pbVar3 + -8));
                }
              }
              local_1e0 = pbVar5;
              free(local_1e8);
            }
            if ((local_200 & 1) != 0) {
              free(local_1f0);
            }
            if ((local_220[0] & 1) != 0) {
              free(local_210);
            }
          }
          *(undefined4 *)(param_2 + 0xe0) = 0;
        }
      }
    }
                    /* try { // try from 0048c020 to 0048c023 has its CatchHandler @ 0048c194 */
    uVar7 = (**(code **)(*(long *)*param_3 + 0xa0))();
    if ((uVar7 & 1) == 0) {
      *(undefined1 *)(param_2 + 0x672) = 0;
    }
                    /* try { // try from 0048c038 to 0048c03f has its CatchHandler @ 0048c190 */
    (**(code **)(*(long *)*param_3 + 0x10))(local_1d0);
    plVar8 = local_1d0[0];
    if (local_1d0[0] == (long *)0x0) {
LAB_0048c080:
      plVar8 = (long *)*param_3;
      plVar8[5] = *(long *)(param_2 + 8);
                    /* try { // try from 0048c094 to 0048c09b has its CatchHandler @ 0048c198 */
      (**(code **)(*plVar8 + 0x88))(&local_230);
                    /* try { // try from 0048c09c to 0048c0a7 has its CatchHandler @ 0048c138 */
      FUN_0048c1e8(param_2 + 0x2a0,&local_230);
      plVar8 = local_230;
      local_230 = (long *)0x0;
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 8))();
      }
                    /* try { // try from 0048c0c0 to 0048c0d3 has its CatchHandler @ 0048c198 */
      FUN_0048c30c(param_1,param_2 + 0x38,(byte *)(lVar9 + 0x10),param_3);
    }
    else {
      local_1d0[0] = (long *)0x0;
      local_228 = plVar8;
                    /* try { // try from 0048c050 to 0048c05f has its CatchHandler @ 0048c14c */
      FUN_0056aad4(param_1,param_2 + 0x640,&local_228);
      plVar8 = local_228;
      local_228 = (long *)0x0;
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 8))();
      }
      if (*param_1 == 0) goto LAB_0048c080;
    }
    plVar8 = local_1d0[0];
    local_1d0[0] = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 8))();
    }
  }
  else {
    lVar9 = *(long *)(param_2 + 8);
    if (*(int *)(lVar9 + 0x20) < 4) {
                    /* try { // try from 0048bc88 to 0048bca3 has its CatchHandler @ 0048c18c */
      FUN_0048a3f4(local_220,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/inference_session.cc"
                   ,0x2bd,"RegisterExecutionProvider");
                    /* try { // try from 0048bca4 to 0048bcc3 has its CatchHandler @ 0048c17c */
      FUN_0048a554(local_1d0,lVar9,3,puVar4,0,local_220);
                    /* try { // try from 0048bcc4 to 0048bcd7 has its CatchHandler @ 0048c16c */
      FUN_00303e0c(auStack_160,
                   "Execution providers must be registered before the session is initialized. ",0x4a
                  );
      FUN_00637fac(local_1d0);
      pbVar5 = local_1e8;
      if (local_1e8 != (byte *)0x0) {
        while (pbVar11 = local_1e0, pbVar11 != pbVar5) {
          local_1e0 = pbVar11 + -0x18;
          if ((*local_1e0 & 1) != 0) {
            free(*(void **)(pbVar11 + -8));
          }
        }
        local_1e0 = pbVar5;
        free(local_1e8);
      }
      if ((local_200 & 1) != 0) {
        free(local_1f0);
      }
      if ((local_220[0] & 1) != 0) {
        free(local_210);
      }
    }
                    /* try { // try from 0048becc to 0048bee3 has its CatchHandler @ 0048c1b8 */
    FUN_0063acd8(param_1,2,1,
                 "Execution providers must be registered before the session is initialized.");
  }
                    /* try { // try from 0048c0ec to 0048c0f3 has its CatchHandler @ 0048c1e0 */
  FUN_00707c00(param_2 + 0x660);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
LAB_0048c1dc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0048c1e8  FUN_0048c1e8 =====

void FUN_0048c1e8(long param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  void *__src;
  long lVar3;
  size_t __n;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  void *__dest;
  long lVar7;
  long *plVar8;
  
  lVar7 = *param_2;
  if (lVar7 != 0) {
    plVar2 = *(long **)(param_1 + 0x1c0);
    if (plVar2 < *(long **)(param_1 + 0x1c8)) {
      *param_2 = 0;
      plVar8 = plVar2 + 1;
      *plVar2 = lVar7;
    }
    else {
      lVar6 = (long)plVar2 - *(long *)(param_1 + 0x1b8) >> 3;
      uVar1 = lVar6 + 1;
      if (uVar1 >> 0x3d != 0) {
        FUN_00496ec8(param_1 + 0x1b8);
LAB_0048c308:
                    /* WARNING: Subroutine does not return */
        FUN_002f9ee0();
      }
      uVar4 = (long)*(long **)(param_1 + 0x1c8) - *(long *)(param_1 + 0x1b8);
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
        if (uVar5 >> 0x3d != 0) goto LAB_0048c308;
        lVar3 = FUN_00759c3c(uVar5 << 3);
      }
      *param_2 = 0;
      plVar2 = (long *)(lVar3 + lVar6 * 8);
      __src = *(void **)(param_1 + 0x1b8);
      lVar6 = *(long *)(param_1 + 0x1c0);
      plVar8 = plVar2 + 1;
      *plVar2 = lVar7;
      __n = lVar6 - (long)__src;
      __dest = (void *)((long)plVar2 - __n);
      memcpy(__dest,__src,__n);
      *(void **)(param_1 + 0x1b8) = __dest;
      *(long **)(param_1 + 0x1c0) = plVar8;
      *(ulong *)(param_1 + 0x1c8) = lVar3 + uVar5 * 8;
      if (__src != (void *)0x0) {
        free(__src);
      }
    }
    *(long **)(param_1 + 0x1c0) = plVar8;
    if (*(char *)(param_1 + 0x10) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0048c2e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)plVar8[-1] + 0x10))((long *)plVar8[-1],*(undefined8 *)(param_1 + 0x188))
      ;
      return;
    }
  }
  return;
}


// ===== 0048c30c  FUN_0048c30c =====

void FUN_0048c30c(undefined8 *param_1,long *param_2,byte *param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  long lVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  byte *pbVar9;
  undefined8 *puVar10;
  void *pvVar11;
  undefined8 uVar12;
  byte *local_228 [2];
  void *local_218;
  byte local_208;
  void *local_1f8;
  byte *local_1f0;
  byte *local_1e8;
  char *local_1d8;
  void *local_1d0;
  undefined8 uStack_1c8;
  void *local_1c0;
  long local_1b8;
  undefined4 local_1b0;
  undefined1 auStack_160 [264];
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  lVar7 = FUN_00496edc(param_2 + 0xb);
  if (lVar7 == 0) {
    lVar7 = *param_2;
    lVar4 = param_2[1];
    if ((*param_3 & 1) == 0) {
      uStack_1c8 = *(undefined8 *)(param_3 + 8);
      local_1d0 = *(void **)param_3;
      local_1c0 = *(void **)(param_3 + 0x10);
    }
    else {
      FUN_002fb36c(&local_1d0,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 8));
    }
                    /* try { // try from 0048c4a8 to 0048c4b7 has its CatchHandler @ 0048c6b0 */
    local_1b8 = lVar4 - lVar7 >> 4;
    FUN_00497358(param_2 + 0xb,&local_1d0,&local_1d0);
    if (((ulong)local_1d0 & 1) != 0) {
      free(local_1c0);
    }
    (**(code **)(*(long *)*param_4 + 0x30))(&local_1d0);
                    /* try { // try from 0048c4e4 to 0048c557 has its CatchHandler @ 0048c6dc */
    local_228[0] = param_3;
    lVar7 = FUN_00497818(param_2 + 6,param_3,PTR_DAT_007a10e8,local_228,&local_1d8);
    if ((void **)(lVar7 + 0x28) != &local_1d0) {
      *(undefined4 *)(lVar7 + 0x48) = local_1b0;
      FUN_0049f994((void **)(lVar7 + 0x28),local_1c0,0);
    }
    puVar2 = (undefined8 *)param_2[4];
    if (puVar2 < (undefined8 *)param_2[5]) {
      if ((*param_3 & 1) == 0) {
        uVar12 = *(undefined8 *)(param_3 + 8);
        uVar8 = *(undefined8 *)param_3;
        puVar2[2] = *(undefined8 *)(param_3 + 0x10);
        puVar2[1] = uVar12;
        *puVar2 = uVar8;
      }
      else {
                    /* try { // try from 0048c5c0 to 0048c5c7 has its CatchHandler @ 0048c67c */
        FUN_002fb36c(puVar2,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 8));
      }
      param_2[4] = (long)(puVar2 + 3);
      puVar10 = (undefined8 *)param_2[1];
      param_2[4] = (long)(puVar2 + 3);
      if (puVar10 < (undefined8 *)param_2[2]) goto LAB_0048c568;
LAB_0048c5e0:
                    /* try { // try from 0048c5e0 to 0048c5eb has its CatchHandler @ 0048c6dc */
      puVar10 = (undefined8 *)FUN_00497f04(param_2,param_4);
    }
    else {
      lVar7 = FUN_0034e788(param_2 + 3,param_3);
      puVar10 = (undefined8 *)param_2[1];
      param_2[4] = lVar7;
      if ((undefined8 *)param_2[2] <= puVar10) goto LAB_0048c5e0;
LAB_0048c568:
      *puVar10 = *param_4;
      lVar7 = param_4[1];
      puVar10[1] = lVar7;
      if (lVar7 != 0) {
        FUN_00755c20(1,lVar7 + 8);
      }
      puVar10 = puVar10 + 2;
    }
    param_2[1] = (long)puVar10;
    *param_1 = 0;
    local_218 = local_1d0;
    puVar2 = (undefined8 *)local_1c0;
    while (puVar2 != (undefined8 *)0x0) {
      pvVar11 = (void *)*puVar2;
      local_1d0 = local_218;
      if ((*(byte *)(puVar2 + 5) & 1) == 0) {
        bVar5 = *(byte *)(puVar2 + 2);
      }
      else {
        free((void *)puVar2[7]);
        bVar5 = *(byte *)(puVar2 + 2);
      }
      if ((bVar5 & 1) != 0) {
        free((void *)puVar2[4]);
      }
      free(puVar2);
      local_218 = local_1d0;
      puVar2 = (undefined8 *)pvVar11;
    }
    local_1d0 = (void *)0x0;
    pvVar11 = local_218;
  }
  else {
    local_228[0] = (byte *)0x1f8708;
    local_1d8 = " has already been registered.";
    FUN_00497130(&local_1d0,local_228,param_3,&local_1d8);
                    /* try { // try from 0048c37c to 0048c38f has its CatchHandler @ 0048c6c4 */
    FUN_0063aa48(param_1,2,1,&local_1d0);
    if (((ulong)local_1d0 & 1) != 0) {
      free(local_1c0);
    }
                    /* try { // try from 0048c3a0 to 0048c3a3 has its CatchHandler @ 0048c6b4 */
    lVar7 = FUN_00488994();
    if (3 < *(int *)(lVar7 + 0x20)) goto LAB_0048c60c;
                    /* try { // try from 0048c3b0 to 0048c3b3 has its CatchHandler @ 0048c6ac */
    uVar8 = FUN_00488994();
    uVar12 = *(undefined8 *)PTR_PTR_s_onnxruntime_007a1f28;
                    /* try { // try from 0048c3c4 to 0048c3df has its CatchHandler @ 0048c6a8 */
    FUN_0048a3f4(local_228,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/execution_providers.h"
                 ,0x22,&DAT_001e9ca6);
                    /* try { // try from 0048c3e0 to 0048c3ff has its CatchHandler @ 0048c698 */
    FUN_0048a554(&local_1d0,uVar8,3,uVar12,0,local_228);
    pbVar9 = (byte *)FUN_0063afd8(param_1);
    uVar1 = *(ulong *)(pbVar9 + 8);
    pbVar3 = *(byte **)(pbVar9 + 0x10);
    if ((*pbVar9 & 1) == 0) {
      pbVar3 = pbVar9 + 1;
      uVar1 = (ulong)(*pbVar9 >> 1);
    }
                    /* try { // try from 0048c420 to 0048c427 has its CatchHandler @ 0048c688 */
    FUN_00303e0c(auStack_160,pbVar3,uVar1);
    FUN_00637fac(&local_1d0);
    pbVar3 = local_1f0;
    if (local_1f0 != (byte *)0x0) {
      while (pbVar9 = local_1e8, pbVar9 != pbVar3) {
        local_1e8 = pbVar9 + -0x18;
        if ((*local_1e8 & 1) != 0) {
          free(*(void **)(pbVar9 + -8));
        }
      }
      local_1e8 = pbVar3;
      free(local_1f0);
    }
    if ((local_208 & 1) != 0) {
      free(local_1f8);
    }
    pvVar11 = (void *)((ulong)local_228[0] & 1);
  }
  if (pvVar11 != (void *)0x0) {
    free(local_218);
  }
LAB_0048c60c:
  if (*(long *)(lVar6 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0048c704  FUN_0048c704 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0048c704(undefined8 param_1,long param_2,char *param_3)

{
  short *psVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined ***pppuVar10;
  long lVar11;
  ushort local_b0 [8];
  void *local_a0;
  byte local_98;
  short asStack_97 [3];
  ulong local_90;
  short *local_88;
  undefined **local_80;
  long lStack_78;
  char *local_70;
  undefined ***local_60;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_70 = (char *)FUN_00759c3c(0x20);
  lStack_78 = _UNK_00200518;
  local_80 = _DAT_00200510;
  uVar5 = s_session_load_model_format_001bd279._17_8_;
  uVar4 = s_session_load_model_format_001bd279._0_8_;
  uVar3 = CONCAT17(s_session_load_model_format_001bd279[0x10],
                   s_session_load_model_format_001bd279._9_7_);
  *(ulong *)(local_70 + 8) =
       CONCAT71(s_session_load_model_format_001bd279._9_7_,s_session_load_model_format_001bd279[8]);
  *(undefined8 *)local_70 = uVar4;
  *(undefined8 *)(local_70 + 0x11) = uVar5;
  *(undefined8 *)(local_70 + 9) = uVar3;
  local_70[0x19] = '\0';
  local_b0[0] = 0;
  FUN_00569aa4(&local_98,param_2 + 0x210,&local_80,local_b0);
  if ((local_b0[0] & 1) == 0) {
    if (((ulong)local_80 & 1) == 0) goto LAB_0048c790;
LAB_0048c84c:
    free(local_70);
    uVar9 = (ulong)(local_98 >> 1);
    if ((local_98 & 1) != 0) {
      uVar9 = local_90;
    }
    if (uVar9 == 0) goto LAB_0048c86c;
LAB_0048c7a8:
    if (uVar9 == 3) {
      psVar1 = local_88;
      if ((local_98 & 1) == 0) {
        psVar1 = asStack_97;
      }
      if (*psVar1 == 0x524f && (char)psVar1[1] == 'T') {
LAB_0048c878:
        local_80 = &PTR_FUN_0078ffc0;
                    /* try { // try from 0048c890 to 0048c89f has its CatchHandler @ 0048c904 */
        lStack_78 = param_2;
        local_70 = param_3;
        local_60 = &local_80;
        FUN_0048cc24(param_1,param_2,&local_80);
        if (local_60 == &local_80) {
          lVar11 = 0x20;
          pppuVar10 = &local_80;
        }
        else {
          if (local_60 == (undefined ***)0x0) goto LAB_0048c8cc;
          lVar11 = 0x28;
          pppuVar10 = local_60;
        }
        (**(code **)((long)*pppuVar10 + lVar11))();
        goto LAB_0048c8cc;
      }
    }
  }
  else {
    free(local_a0);
    if (((ulong)local_80 & 1) != 0) goto LAB_0048c84c;
LAB_0048c790:
    uVar9 = (ulong)(local_98 >> 1);
    if ((local_98 & 1) != 0) {
      uVar9 = local_90;
    }
    if (uVar9 != 0) goto LAB_0048c7a8;
LAB_0048c86c:
                    /* try { // try from 0048c86c to 0048c873 has its CatchHandler @ 0048c93c */
    uVar9 = FUN_00647928(param_3);
    if ((uVar9 & 1) != 0) goto LAB_0048c878;
  }
                    /* try { // try from 0048c7dc to 0048c7e3 has its CatchHandler @ 0048c958 */
  local_70 = (char *)FUN_00759c3c(0x38);
  uVar8 = s_ONNX_format_model_is_not_support_001ca796._40_8_;
  uVar7 = s_ONNX_format_model_is_not_support_001ca796._32_8_;
  uVar6 = s_ONNX_format_model_is_not_support_001ca796._24_8_;
  uVar5 = s_ONNX_format_model_is_not_support_001ca796._16_8_;
  uVar4 = s_ONNX_format_model_is_not_support_001ca796._8_8_;
  uVar3 = s_ONNX_format_model_is_not_support_001ca796._0_8_;
  lStack_78 = _UNK_00200598;
  local_80 = _DAT_00200590;
  local_70[0x30] = '.';
  local_70[0x31] = '\0';
  *(undefined8 *)(local_70 + 8) = uVar4;
  *(undefined8 *)local_70 = uVar3;
  *(undefined8 *)(local_70 + 0x18) = uVar6;
  *(undefined8 *)(local_70 + 0x10) = uVar5;
  *(undefined8 *)(local_70 + 0x28) = uVar8;
  *(undefined8 *)(local_70 + 0x20) = uVar7;
                    /* try { // try from 0048c814 to 0048c827 has its CatchHandler @ 0048c940 */
  FUN_0063aa48(param_1,2,2,&local_80);
  if (((ulong)local_80 & 1) != 0) {
    free(local_70);
  }
LAB_0048c8cc:
  if ((local_98 & 1) != 0) {
    free(local_88);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0048c988  FUN_0048c988 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0048c988(undefined8 param_1,long param_2,ulong param_3,undefined4 param_4)

{
  short *psVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined ***pppuVar10;
  long lVar11;
  ulong local_b8 [2];
  void *local_a8;
  byte local_a0;
  short asStack_9f [3];
  ulong local_98;
  short *local_90;
  undefined4 local_84;
  undefined **local_80;
  long lStack_78;
  char *local_70;
  ulong *puStack_68;
  undefined ***local_60;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_70 = (char *)FUN_00759c3c(0x20);
  lStack_78 = _UNK_00200518;
  local_80 = _DAT_00200510;
  uVar5 = s_session_load_model_format_001bd279._17_8_;
  uVar4 = s_session_load_model_format_001bd279._0_8_;
  uVar3 = CONCAT17(s_session_load_model_format_001bd279[0x10],
                   s_session_load_model_format_001bd279._9_7_);
  *(ulong *)(local_70 + 8) =
       CONCAT71(s_session_load_model_format_001bd279._9_7_,s_session_load_model_format_001bd279[8]);
  *(undefined8 *)local_70 = uVar4;
  *(undefined8 *)(local_70 + 0x11) = uVar5;
  *(undefined8 *)(local_70 + 9) = uVar3;
  local_70[0x19] = '\0';
  local_b8[0] = local_b8[0] & 0xffffffffffff0000;
  FUN_00569aa4(&local_a0,param_2 + 0x210,&local_80,local_b8);
  if ((local_b8[0] & 1) == 0) {
    if (((ulong)local_80 & 1) == 0) goto LAB_0048ca18;
LAB_0048cad4:
    free(local_70);
    uVar9 = (ulong)(local_a0 >> 1);
    if ((local_a0 & 1) != 0) {
      uVar9 = local_98;
    }
    if (uVar9 == 0) goto LAB_0048caf4;
LAB_0048ca30:
    if (uVar9 == 3) {
      psVar1 = local_90;
      if ((local_a0 & 1) == 0) {
        psVar1 = asStack_9f;
      }
      if (*psVar1 == 0x524f && (char)psVar1[1] == 'T') {
LAB_0048cb04:
        local_80 = &PTR_FUN_00790008;
        local_70 = (char *)&local_84;
        puStack_68 = local_b8;
                    /* try { // try from 0048cb2c to 0048cb3b has its CatchHandler @ 0048cba0 */
        local_b8[0] = param_3;
        local_84 = param_4;
        lStack_78 = param_2;
        local_60 = &local_80;
        FUN_0048cc24(param_1,param_2,&local_80);
        if (local_60 == &local_80) {
          lVar11 = 0x20;
          pppuVar10 = &local_80;
        }
        else {
          if (local_60 == (undefined ***)0x0) goto LAB_0048cb68;
          lVar11 = 0x28;
          pppuVar10 = local_60;
        }
        (**(code **)((long)*pppuVar10 + lVar11))();
        goto LAB_0048cb68;
      }
    }
  }
  else {
    free(local_a8);
    if (((ulong)local_80 & 1) != 0) goto LAB_0048cad4;
LAB_0048ca18:
    uVar9 = (ulong)(local_a0 >> 1);
    if ((local_a0 & 1) != 0) {
      uVar9 = local_98;
    }
    if (uVar9 != 0) goto LAB_0048ca30;
LAB_0048caf4:
                    /* try { // try from 0048caf4 to 0048caff has its CatchHandler @ 0048cbd8 */
    uVar9 = FUN_006479c4(param_3,param_4);
    if ((uVar9 & 1) != 0) goto LAB_0048cb04;
  }
                    /* try { // try from 0048ca64 to 0048ca6b has its CatchHandler @ 0048cbf4 */
  local_70 = (char *)FUN_00759c3c(0x38);
  uVar8 = s_ONNX_format_model_is_not_support_001ca796._40_8_;
  uVar7 = s_ONNX_format_model_is_not_support_001ca796._32_8_;
  uVar6 = s_ONNX_format_model_is_not_support_001ca796._24_8_;
  uVar5 = s_ONNX_format_model_is_not_support_001ca796._16_8_;
  uVar4 = s_ONNX_format_model_is_not_support_001ca796._8_8_;
  uVar3 = s_ONNX_format_model_is_not_support_001ca796._0_8_;
  lStack_78 = _UNK_00200598;
  local_80 = _DAT_00200590;
  local_70[0x30] = '.';
  local_70[0x31] = '\0';
  *(undefined8 *)(local_70 + 8) = uVar4;
  *(undefined8 *)local_70 = uVar3;
  *(undefined8 *)(local_70 + 0x18) = uVar6;
  *(undefined8 *)(local_70 + 0x10) = uVar5;
  *(undefined8 *)(local_70 + 0x28) = uVar8;
  *(undefined8 *)(local_70 + 0x20) = uVar7;
                    /* try { // try from 0048ca9c to 0048caaf has its CatchHandler @ 0048cbdc */
  FUN_0063aa48(param_1,2,2,&local_80);
  if (((ulong)local_80 & 1) != 0) {
    free(local_70);
  }
LAB_0048cb68:
  if ((local_a0 & 1) != 0) {
    free(local_90);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0048cc24  FUN_0048cc24 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_0048cc24(long *param_1,long param_2,long param_3)

{
  int *piVar1;
  uint uVar2;
  long lVar3;
  byte bVar4;
  int iVar5;
  wchar_t __c;
  byte *pbVar6;
  undefined **ppuVar7;
  byte *pbVar8;
  long lVar9;
  uint *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined *__n;
  void *pvVar13;
  uint *local_288;
  ulong uStack_280;
  char *local_278;
  undefined2 local_26c;
  byte local_268 [16];
  void *local_258;
  ulong local_250 [2];
  void *local_240;
  char *local_238;
  uint *local_230;
  ulong uStack_228;
  void *local_220;
  undefined2 local_218;
  ulong local_210;
  undefined1 local_208;
  void *local_200;
  byte *local_1f8;
  byte *local_1f0;
  uint *local_1e0;
  undefined *local_1d8;
  void *local_1d0;
  undefined8 local_1c8;
  ulong local_1c0;
  void *local_1b0;
  byte *local_1a8;
  byte *local_1a0;
  undefined1 auStack_170 [264];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  FUN_007073d8(param_2 + 0x660);
  if (*(char *)(param_2 + 0x670) == '\0') {
    if (*(char *)(param_2 + 0x671) == '\0') {
      if (*(long **)(param_3 + 0x20) == (long *)0x0) {
        if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* try { // try from 0048d5b8 to 0048d5bb has its CatchHandler @ 0048d6ec */
          uVar11 = FUN_0030be88();
                    /* catch() { ... } // from try @ 0048d550 with catch @ 0048d5bc */
          FUN_00474684(param_1);
          FUN_0048dbd0(&local_1e0);
          FUN_0048dc48(local_250);
                    /* try { // try from 0048d6f0 to 0048d6f7 has its CatchHandler @ 0048d714 */
          FUN_00707c00(param_2 + 0x660);
          if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_00755eac(uVar11);
          }
        }
        goto LAB_0048d710;
      }
                    /* try { // try from 0048ce74 to 0048ce7b has its CatchHandler @ 0048d6ec */
      (**(code **)(**(long **)(param_3 + 0x20) + 0x30))(param_1);
      if (*param_1 != 0) {
                    /* try { // try from 0048ce84 to 0048cea3 has its CatchHandler @ 0048d6a8 */
        FUN_00645c3c(0,param_1,
                     "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/inference_session.cc"
                     ,"LoadOrtModelWithLoader",0x549);
        goto LAB_0048d000;
      }
      uVar12 = *(ulong *)(param_2 + 0x768);
      puVar10 = *(uint **)(param_2 + 0x770);
      local_218 = 0x101;
      local_220 = DAT_001b7000;
      local_210 = 0x7fffffff;
      local_208 = 0;
      local_1f8 = (byte *)0x0;
      local_1f0 = (byte *)0x0;
      local_200 = (void *)0x0;
      local_230 = puVar10;
      uStack_228 = uVar12;
                    /* try { // try from 0048d058 to 0048d063 has its CatchHandler @ 0048d668 */
      if ((((uVar12 < 0xc) || (iVar5 = strncmp((char *)(puVar10 + 1),"ORTM",4), iVar5 != 0)) ||
          (uVar2 = *puVar10, (int)uVar2 < 1)) ||
         ((uVar12 - 1 < (ulong)uVar2 ||
          (uVar12 = FUN_00498088((long)puVar10 + (ulong)uVar2,&local_230), (uVar12 & 1) == 0)))) {
                    /* try { // try from 0048cefc to 0048cf17 has its CatchHandler @ 0048d6a4 */
        FUN_0048a3f4(&local_1e0,
                     "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/inference_session.cc"
                     ,0x54d,"LoadOrtModelWithLoader");
                    /* try { // try from 0048cf18 to 0048cf27 has its CatchHandler @ 0048d694 */
        FUN_00475ff4(local_268,&local_1e0,0);
        local_288 = (uint *)&DAT_001bc0af;
        local_238 = "ORT model verification failed.";
        FUN_004a2c0c(local_250,local_268,&local_288,&local_238);
                    /* try { // try from 0048cf54 to 0048cf67 has its CatchHandler @ 0048d66c */
        FUN_0063aa48(param_1,2,1,local_250);
        if ((local_250[0] & 1) != 0) {
          free(local_240);
        }
        pbVar8 = local_1a8;
        if ((local_268[0] & 1) != 0) {
          free(local_258);
          pbVar8 = local_1a8;
        }
        local_1a8 = pbVar8;
        if (pbVar8 != (byte *)0x0) {
          while (pbVar6 = local_1a0, pbVar6 != pbVar8) {
            local_1a0 = pbVar6 + -0x18;
            if ((*local_1a0 & 1) != 0) {
              free(*(void **)(pbVar6 + -8));
            }
          }
          free(local_1a8);
        }
        pvVar13 = local_1d0;
        puVar10 = local_1e0;
        if ((local_1c0 & 1) != 0) {
          free(local_1b0);
          pvVar13 = local_1d0;
          puVar10 = local_1e0;
        }
        goto joined_r0x0048cffc;
      }
      puVar10 = *(uint **)(param_2 + 0x770);
      if (puVar10 == (uint *)0x0) {
                    /* try { // try from 0048d138 to 0048d153 has its CatchHandler @ 0048d658 */
        FUN_0048a3f4(&local_1e0,
                     "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/inference_session.cc"
                     ,0x550,"LoadOrtModelWithLoader");
                    /* try { // try from 0048d154 to 0048d163 has its CatchHandler @ 0048d654 */
        FUN_00475ff4(local_268,&local_1e0,0);
        local_288 = (uint *)&DAT_001bc0af;
        local_238 = "InferenceSession is null. Invalid ORT format model.";
        FUN_004a2c0c(local_250,local_268,&local_288,&local_238);
                    /* try { // try from 0048d190 to 0048d1a3 has its CatchHandler @ 0048d650 */
        FUN_0063aa48(param_1,2,1,local_250);
      }
      else {
        piVar1 = (int *)((long)puVar10 + (ulong)*puVar10);
        if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
           (uVar12 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar12 == 0)) {
                    /* try { // try from 0048d0c8 to 0048d0e3 has its CatchHandler @ 0048d664 */
          FUN_0048a3f4(&local_1e0,
                       "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/inference_session.cc"
                       ,0x554,"LoadOrtModelWithLoader");
                    /* try { // try from 0048d0e4 to 0048d0f3 has its CatchHandler @ 0048d660 */
          FUN_00475ff4(local_268,&local_1e0,0);
          local_288 = (uint *)&DAT_001bc0af;
          local_238 = "Serialized version info is null. Invalid ORT format model.";
          FUN_004a2c0c(local_250,local_268,&local_288,&local_238);
                    /* try { // try from 0048d120 to 0048d133 has its CatchHandler @ 0048d65c */
          FUN_0063aa48(param_1,2,1,local_250);
        }
        else {
          puVar10 = (uint *)((long)piVar1 + uVar12);
          puVar10 = (uint *)((long)puVar10 + (ulong)*puVar10);
          uVar2 = *puVar10;
          __n = (undefined *)(ulong)uVar2;
          if (uVar2 < 0x17) {
            pvVar13 = (void *)((ulong)&local_1e0 | 1);
            local_1e0 = (uint *)CONCAT71(local_1e0._1_7_,(char)(uVar2 << 1));
            if (uVar2 != 0) goto LAB_0048d1e0;
          }
          else {
            uVar12 = ((ulong)__n & 0xfffffff8) + 8;
            if (((ulong)__n | 7) != 0x17) {
              uVar12 = (ulong)__n | 7;
            }
                    /* try { // try from 0048d1c4 to 0048d1cb has its CatchHandler @ 0048d634 */
            pvVar13 = (void *)FUN_00759c3c(uVar12 + 1);
            local_1e0 = (uint *)(uVar12 + 1 | 1);
            local_1d8 = __n;
            local_1d0 = pvVar13;
LAB_0048d1e0:
            memcpy(pvVar13,puVar10 + 1,(size_t)__n);
          }
          *(undefined1 *)((long)pvVar13 + (long)__n) = 0;
                    /* try { // try from 0048d1f4 to 0048d203 has its CatchHandler @ 0048d638 */
          __c = FUN_0071463c(&local_1e0,0,10);
          if (((ulong)local_1e0 & 1) != 0) {
            free(local_1d0);
          }
          local_1e0 = (uint *)0x600000005;
          ppuVar7 = (undefined **)wmemchr((wchar_t *)&local_1e0,__c,2);
          local_26c = 1;
          local_278 = 
          "This build doesn\'t support ORT format models older than version 5. See: https://github.com/microsoft/onnxruntime/blob/rel-1.14.0/docs/ORT_Format_Update_in_1.13.md"
          ;
          if ((ppuVar7 == (undefined **)0x0) || (ppuVar7 == &local_1d8)) {
                    /* try { // try from 0048d29c to 0048d2b7 has its CatchHandler @ 0048d630 */
            FUN_0048a3f4(&local_1e0,
                         "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/inference_session.cc"
                         ,0x565,"LoadOrtModelWithLoader");
                    /* try { // try from 0048d2b8 to 0048d2c7 has its CatchHandler @ 0048d62c */
            FUN_00475ff4(local_268,&local_1e0,0);
            uStack_280 = (ulong)*puVar10;
            local_288 = puVar10 + 1;
            FUN_0048d734(local_250,local_268,&DAT_001bc0af,"The ORT format model version [",
                         &local_288,"] is not supported in this build ","1.18.1",&DAT_001d0878,
                         &local_278);
                    /* try { // try from 0048d30c to 0048d31f has its CatchHandler @ 0048d628 */
            FUN_0063aa48(param_1,2,1,local_250);
          }
          else {
            if ((6 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
               (uVar12 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar12 != 0)) {
              puVar10 = (uint *)((long)piVar1 + uVar12);
              uVar2 = *puVar10;
              if (*(long *)(param_2 + 0x778) == *(long *)(param_2 + 0x780)) {
                    /* try { // try from 0048d3bc to 0048d3cb has its CatchHandler @ 0048d5f8 */
                FUN_002fd2b0(local_250,"session.use_ort_model_bytes_for_initializers");
                    /* try { // try from 0048d3cc to 0048d3db has its CatchHandler @ 0048d5e0 */
                FUN_002fd2b0(local_268,&DAT_001e8c6a);
                FUN_00569aa4(&local_1e0,param_2 + 0x210,local_250,local_268);
                bVar4 = FUN_0048a36c(&local_1e0,&DAT_001dd1d3);
                local_26c = CONCAT11(local_26c._1_1_,bVar4) & 0xff01;
                *(byte *)(param_2 + 0x790) = bVar4 & 1;
                if (((ulong)local_1e0 & 1) != 0) {
                  free(local_1d0);
                }
                if ((local_268[0] & 1) != 0) {
                  free(local_258);
                }
                if (((byte)local_250[0] & 1) != 0) {
                  free(local_240);
                }
              }
              else {
                local_26c = 0;
                *(undefined1 *)(param_2 + 0x790) = 0;
              }
              local_250[0] = 0;
                    /* try { // try from 0048d434 to 0048d447 has its CatchHandler @ 0048d60c */
              FUN_005ef39c(param_1,(long)puVar10 + (ulong)uVar2,&local_26c,
                           *(undefined8 *)(param_2 + 8),local_250);
              if (*param_1 == 0) {
                FUN_00474684(param_1);
                    /* try { // try from 0048d480 to 0048d48b has its CatchHandler @ 0048d60c */
                FUN_0048d798(param_1,param_2,local_250[0]);
                if (*param_1 == 0) {
                  FUN_00474684(param_1);
                    /* try { // try from 0048d4e4 to 0048d4ef has its CatchHandler @ 0048d60c */
                  FUN_0048daf4(param_2 + 0x10,local_250);
                  local_1c8 = 0;
                  local_1c0 = 0;
                  local_1d0 = (void *)0x0;
                  local_1e0 = (uint *)(PTR_DAT_007a1f38 + 0x10);
                  local_1d8 = PTR_DAT_007a1f30 + 0x10;
                  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0xb) ||
                     (uVar12 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[5], uVar12 == 0)) {
LAB_0048d57c:
                    FUN_0048dba8(param_2 + 0x4e8,&local_1e0);
                    *param_1 = 0;
                    *(undefined1 *)(param_2 + 0x670) = 1;
                  }
                  else {
                    puVar10 = (uint *)((long)piVar1 + uVar12);
                    /* try { // try from 0048d538 to 0048d547 has its CatchHandler @ 0048d5cc */
                    FUN_005882b8(param_1,&local_1e0,(long)puVar10 + (ulong)*puVar10);
                    if (*param_1 == 0) {
                      FUN_00474684(param_1);
                      goto LAB_0048d57c;
                    }
                    /* try { // try from 0048d550 to 0048d56f has its CatchHandler @ 0048d5bc */
                    FUN_00645c3c(0,param_1,
                                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/inference_session.cc"
                                 ,"LoadOrtModelWithLoader",0x5a0);
                  }
                  FUN_0048dbd0(&local_1e0);
                }
                else {
                    /* try { // try from 0048d494 to 0048d4b3 has its CatchHandler @ 0048d5dc */
                  FUN_00645c3c(0,param_1,
                               "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/inference_session.cc"
                               ,"LoadOrtModelWithLoader",0x59a);
                }
              }
              else {
                    /* try { // try from 0048d450 to 0048d46f has its CatchHandler @ 0048d5fc */
                FUN_00645c3c(0,param_1,
                             "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/inference_session.cc"
                             ,"LoadOrtModelWithLoader",0x597);
              }
              FUN_0048dc48(local_250);
              goto LAB_0048d000;
            }
                    /* try { // try from 0048d324 to 0048d33f has its CatchHandler @ 0048d624 */
            FUN_0048a3f4(&local_1e0,
                         "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/inference_session.cc"
                         ,0x584,"LoadOrtModelWithLoader");
                    /* try { // try from 0048d340 to 0048d34f has its CatchHandler @ 0048d620 */
            FUN_00475ff4(local_268,&local_1e0,0);
            local_288 = (uint *)&DAT_001bc0af;
            local_238 = "Missing Model. Invalid ORT format model.";
            FUN_004a2c0c(local_250,local_268,&local_288,&local_238);
                    /* try { // try from 0048d37c to 0048d38f has its CatchHandler @ 0048d61c */
            FUN_0063aa48(param_1,2,1,local_250);
          }
        }
      }
      if ((local_250[0] & 1) != 0) {
        free(local_240);
      }
      if ((local_268[0] & 1) != 0) {
        free(local_258);
      }
      FUN_00474ee8(&local_1e0);
    }
    else {
                    /* try { // try from 0048cd54 to 0048cd6b has its CatchHandler @ 0048d6ec */
      FUN_0063acd8(param_1,2,8,"This session has already been initialized.");
      lVar9 = *(long *)(param_2 + 8);
      if (*(int *)(lVar9 + 0x20) < 4) {
        uVar11 = *(undefined8 *)PTR_PTR_s_onnxruntime_007a1f28;
                    /* try { // try from 0048cd88 to 0048cda3 has its CatchHandler @ 0048d6b4 */
        FUN_0048a3f4(&local_230,
                     "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/inference_session.cc"
                     ,0x545,"LoadOrtModelWithLoader");
                    /* try { // try from 0048cda4 to 0048cdc3 has its CatchHandler @ 0048d6b0 */
        FUN_0048a554(&local_1e0,lVar9,3,uVar11,0,&local_230);
        pbVar6 = (byte *)FUN_0063afd8(param_1);
        uVar12 = *(ulong *)(pbVar6 + 8);
        pbVar8 = *(byte **)(pbVar6 + 0x10);
        if ((*pbVar6 & 1) == 0) {
          pbVar8 = pbVar6 + 1;
          uVar12 = (ulong)(*pbVar6 >> 1);
        }
                    /* try { // try from 0048cde4 to 0048cdeb has its CatchHandler @ 0048d6ac */
        FUN_00303e0c(auStack_170,pbVar8,uVar12);
        FUN_00637fac(&local_1e0);
        pbVar8 = local_1f8;
        if (local_1f8 != (byte *)0x0) {
          while (pbVar6 = local_1f0, pbVar6 != pbVar8) {
            local_1f0 = pbVar6 + -0x18;
            if ((*local_1f0 & 1) != 0) {
              free(*(void **)(pbVar6 + -8));
            }
          }
          goto LAB_0048ce38;
        }
        goto LAB_0048ce40;
      }
    }
  }
  else {
                    /* try { // try from 0048cc6c to 0048cc83 has its CatchHandler @ 0048d6ec */
    FUN_0063acd8(param_1,2,8,"This session already contains a loaded model.");
    lVar9 = *(long *)(param_2 + 8);
    if (*(int *)(lVar9 + 0x20) < 4) {
      uVar11 = *(undefined8 *)PTR_PTR_s_onnxruntime_007a1f28;
                    /* try { // try from 0048cca0 to 0048ccbb has its CatchHandler @ 0048d6d8 */
      FUN_0048a3f4(&local_230,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/inference_session.cc"
                   ,0x53f,"LoadOrtModelWithLoader");
                    /* try { // try from 0048ccbc to 0048ccdb has its CatchHandler @ 0048d6c8 */
      FUN_0048a554(&local_1e0,lVar9,3,uVar11,0,&local_230);
      pbVar6 = (byte *)FUN_0063afd8(param_1);
      uVar12 = *(ulong *)(pbVar6 + 8);
      pbVar8 = *(byte **)(pbVar6 + 0x10);
      if ((*pbVar6 & 1) == 0) {
        pbVar8 = pbVar6 + 1;
        uVar12 = (ulong)(*pbVar6 >> 1);
      }
                    /* try { // try from 0048ccfc to 0048cd03 has its CatchHandler @ 0048d6b8 */
      FUN_00303e0c(auStack_170,pbVar8,uVar12);
      FUN_00637fac(&local_1e0);
      pbVar8 = local_1f8;
      if (local_1f8 != (byte *)0x0) {
        while (pbVar6 = local_1f0, pbVar6 != pbVar8) {
          local_1f0 = pbVar6 + -0x18;
          if ((*local_1f0 & 1) != 0) {
            free(*(void **)(pbVar6 + -8));
          }
        }
LAB_0048ce38:
        local_1f0 = pbVar8;
        free(local_1f8);
      }
LAB_0048ce40:
      pvVar13 = local_220;
      puVar10 = local_230;
      if ((local_210 & 1) != 0) {
        free(local_200);
        pvVar13 = local_220;
        puVar10 = local_230;
      }
joined_r0x0048cffc:
      if (((ulong)puVar10 & 1) != 0) {
        free(pvVar13);
      }
    }
  }
LAB_0048d000:
                    /* try { // try from 0048d000 to 0048d007 has its CatchHandler @ 0048d6e8 */
  FUN_00707c00(param_2 + 0x660);
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
LAB_0048d710:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0048d718  FUN_0048d718 =====

void FUN_0048d718(undefined8 param_1,byte *param_2)

{
  ulong uVar1;
  byte *pbVar2;
  
  uVar1 = *(ulong *)(param_2 + 8);
  pbVar2 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar2 = param_2 + 1;
    uVar1 = (ulong)(*param_2 >> 1);
  }
  FUN_00303e0c(param_1,pbVar2,uVar1);
  return;
}


// ===== 0048d734  FUN_0048d734 =====

void FUN_0048d734(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_50 = param_7;
  uStack_48 = param_6;
  local_40 = param_5;
  uStack_38 = param_3;
  local_30 = param_2;
  FUN_004a2e30(param_1,&local_30,&uStack_38,param_4,&local_40,&uStack_48,&local_50);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0048d798  FUN_0048d798 =====

void FUN_0048d798(undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  void *pvVar6;
  undefined8 *puVar7;
  ulong uVar8;
  char *pcVar9;
  long lVar10;
  char *local_c0;
  long lStack_b8;
  void *local_b0;
  ulong local_a8;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar3 = FUN_005ef35c(param_3);
  if ((*(byte *)(param_3 + 0x18) & 1) == 0) {
    lStack_b8 = *(undefined8 *)(param_3 + 0x20);
    local_c0 = *(char **)(param_3 + 0x18);
    local_b0 = *(void **)(param_3 + 0x28);
  }
  else {
    FUN_002fb36c(&local_c0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x20));
  }
                    /* try { // try from 0048d804 to 0048d80f has its CatchHandler @ 0048dac4 */
  FUN_007139b0(param_2 + 0x558,&local_c0);
  if (((ulong)local_c0 & 1) != 0) {
    free(local_b0);
  }
  if ((*(byte *)(param_3 + 0x58) & 1) == 0) {
    lStack_b8 = *(undefined8 *)(param_3 + 0x60);
    local_c0 = *(char **)(param_3 + 0x58);
    local_b0 = *(void **)(param_3 + 0x68);
  }
  else {
    FUN_002fb36c(&local_c0,*(undefined8 *)(param_3 + 0x68),*(undefined8 *)(param_3 + 0x60));
  }
                    /* try { // try from 0048d84c to 0048d857 has its CatchHandler @ 0048dac0 */
  FUN_007139b0(param_2 + 0x5a0,&local_c0);
  if (((ulong)local_c0 & 1) != 0) {
    free(local_b0);
  }
  if ((*(byte *)(param_3 + 0x70) & 1) == 0) {
    lStack_b8 = *(undefined8 *)(param_3 + 0x78);
    local_c0 = *(char **)(param_3 + 0x70);
    local_b0 = *(void **)(param_3 + 0x80);
  }
  else {
    FUN_002fb36c(&local_c0,*(undefined8 *)(param_3 + 0x80),*(undefined8 *)(param_3 + 0x78));
  }
                    /* try { // try from 0048d894 to 0048d89f has its CatchHandler @ 0048dabc */
  FUN_007139b0(param_2 + 0x5b8,&local_c0);
  if (((ulong)local_c0 & 1) != 0) {
    free(local_b0);
  }
  if ((*(byte *)(param_3 + 0x40) & 1) == 0) {
    lStack_b8 = *(undefined8 *)(param_3 + 0x48);
    local_c0 = *(char **)(param_3 + 0x40);
    local_b0 = *(void **)(param_3 + 0x50);
  }
  else {
    FUN_002fb36c(&local_c0,*(undefined8 *)(param_3 + 0x50),*(undefined8 *)(param_3 + 0x48));
  }
                    /* try { // try from 0048d8dc to 0048d8e7 has its CatchHandler @ 0048dab8 */
  FUN_007139b0(param_2 + 0x588,&local_c0);
  if (((ulong)local_c0 & 1) != 0) {
    free(local_b0);
  }
  *(undefined8 *)(param_2 + 0x5d0) = *(undefined8 *)(param_3 + 0x30);
  lVar4 = FUN_005ef34c(param_3);
  if (param_2 + 0x5d8 != lVar4) {
    *(undefined4 *)(param_2 + 0x5f8) = *(undefined4 *)(lVar4 + 0x20);
    FUN_0049f994(param_2 + 0x5d8,*(undefined8 *)(lVar4 + 0x10),0);
  }
  uVar5 = FUN_005e0914(lVar3);
  FUN_007139b0(param_2 + 0x570,uVar5);
  puVar2 = PTR_DAT_007a1f30;
  local_b0 = (void *)0x0;
  local_a8 = 0;
  local_c0 = PTR_DAT_007a1f30 + 0x10;
  lStack_b8 = 0;
  lVar4 = 0x1d0;
  if (*(long *)(lVar3 + 0x2b8) < 4) {
    lVar4 = 0x1f0;
  }
                    /* try { // try from 0048d968 to 0048d973 has its CatchHandler @ 0048daa8 */
  FUN_00495bf0(lVar3 + lVar4,&local_c0);
  uVar8 = *(ulong *)(param_2 + 0x618);
  lVar4 = *(long *)(param_2 + 0x610);
  lVar10 = *(long *)(param_2 + 0x608);
  pcVar9 = *(char **)(param_2 + 0x600);
  *(long *)(param_2 + 0x608) = lStack_b8;
  *(char **)(param_2 + 0x600) = local_c0;
  *(ulong *)(param_2 + 0x618) = local_a8;
  *(void **)(param_2 + 0x610) = local_b0;
  if (lVar4 != 0) {
    puVar7 = (undefined8 *)(lVar10 + 0x58);
    local_c0 = pcVar9;
    lStack_b8 = lVar10;
    local_b0 = (void *)lVar4;
    local_a8 = uVar8;
    do {
      if ((-1 < *pcVar9) && (*(char *)(puVar7 + 1) != '\0')) {
        pvVar6 = (void *)*puVar7;
        *puVar7 = 0;
        if (pvVar6 != (void *)0x0) {
          free(pvVar6);
        }
      }
      lVar4 = lVar4 + -1;
      puVar7 = puVar7 + 0xd;
      pcVar9 = pcVar9 + 1;
    } while (lVar4 != 0);
    free(local_c0 + (-8 - (local_a8 & 1)));
  }
  local_c0 = puVar2 + 0x10;
  local_b0 = (void *)0x0;
  local_a8 = 0;
  lStack_b8 = 0;
                    /* try { // try from 0048d9f4 to 0048d9ff has its CatchHandler @ 0048daa4 */
  FUN_00495bf0(lVar3 + 0x220,&local_c0);
  uVar8 = *(ulong *)(param_2 + 0x638);
  lVar3 = *(long *)(param_2 + 0x630);
  lVar4 = *(long *)(param_2 + 0x628);
  pcVar9 = *(char **)(param_2 + 0x620);
  *(long *)(param_2 + 0x628) = lStack_b8;
  *(char **)(param_2 + 0x620) = local_c0;
  *(ulong *)(param_2 + 0x638) = local_a8;
  *(void **)(param_2 + 0x630) = local_b0;
  local_c0 = pcVar9;
  lStack_b8 = lVar4;
  local_b0 = (void *)lVar3;
  local_a8 = uVar8;
  if (lVar3 != 0) {
    puVar7 = (undefined8 *)(lVar4 + 0x58);
    do {
      if ((-1 < *pcVar9) && (*(char *)(puVar7 + 1) != '\0')) {
        pvVar6 = (void *)*puVar7;
        *puVar7 = 0;
        if (pvVar6 != (void *)0x0) {
          free(pvVar6);
        }
      }
      lVar3 = lVar3 + -1;
      puVar7 = puVar7 + 0xd;
      pcVar9 = pcVar9 + 1;
    } while (lVar3 != 0);
    free(local_c0 + (-8 - (local_a8 & 1)));
  }
  *param_1 = 0;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0048daf4  FUN_0048daf4 =====

long * FUN_0048daf4(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = *param_2;
  if (lVar3 == 0) {
    *param_2 = 0;
    plVar2 = (long *)param_1[1];
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    puVar1 = (undefined8 *)FUN_00759c3c(0x20);
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = lVar3;
    *puVar1 = &PTR_FUN_00790050;
    *param_2 = 0;
    plVar2 = (long *)param_1[1];
    *param_1 = lVar3;
    param_1[1] = (long)puVar1;
  }
  if ((plVar2 != (long *)0x0) && (lVar3 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar3 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return param_1;
  }
  return param_1;
}


// ===== 0048dba8  FUN_0048dba8 =====

void FUN_0048dba8(long param_1,undefined8 param_2)

{
                    /* try { // try from 0048dbb8 to 0048dbc3 has its CatchHandler @ 0048dbcc */
  FUN_0049df08(param_1 + 0x40,param_1 + 0x40,param_2);
  return;
}


// ===== 0048dbd0  FUN_0048dbd0 =====

void FUN_0048dbd0(long param_1)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 != 0) {
    lVar1 = *(long *)(param_1 + 0x10);
    pcVar3 = *(char **)(param_1 + 8);
    do {
      if (-1 < *pcVar3) {
        FUN_0049e03c(lVar1);
      }
      lVar2 = lVar2 + -1;
      lVar1 = lVar1 + 0x58;
      pcVar3 = pcVar3 + 1;
    } while (lVar2 != 0);
    free((void *)((*(long *)(param_1 + 8) - (*(ulong *)(param_1 + 0x20) & 1)) + -8));
    return;
  }
  return;
}


// ===== 0048dc48  FUN_0048dc48 =====

void FUN_0048dc48(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)*param_1;
  *param_1 = 0;
  if (__ptr != (void *)0x0) {
    FUN_004a30c8(__ptr);
    free(__ptr);
    return;
  }
  return;
}


// ===== 0048dc84  FUN_0048dc84 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0048dc84(undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong local_40;
  undefined8 uStack_38;
  char *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_3 == 0) {
    local_30 = (char *)FUN_00759c3c(0x58);
    uStack_38 = _UNK_00200258;
    local_40 = _DAT_00200250;
    local_30[0x52] = '\0';
    local_30[0x50] = 'l';
    uVar6 = s_The_provided_PrePackedWeightsCon_001d26a6._72_8_;
    uVar5 = s_The_provided_PrePackedWeightsCon_001d26a6._64_8_;
    uVar4 = s_The_provided_PrePackedWeightsCon_001d26a6._56_8_;
    uVar3 = s_The_provided_PrePackedWeightsCon_001d26a6._48_8_;
    uVar2 = s_The_provided_PrePackedWeightsCon_001d26a6._32_8_;
    local_30[0x51] = 'l';
    *(undefined8 *)(local_30 + 0x28) = s_The_provided_PrePackedWeightsCon_001d26a6._40_8_;
    *(undefined8 *)(local_30 + 0x20) = uVar2;
    *(undefined8 *)(local_30 + 0x38) = uVar4;
    *(undefined8 *)(local_30 + 0x30) = uVar3;
    *(undefined8 *)(local_30 + 0x48) = uVar6;
    *(undefined8 *)(local_30 + 0x40) = uVar5;
    uVar4 = s_The_provided_PrePackedWeightsCon_001d26a6._24_8_;
    uVar3 = s_The_provided_PrePackedWeightsCon_001d26a6._16_8_;
    uVar2 = s_The_provided_PrePackedWeightsCon_001d26a6._0_8_;
    *(undefined8 *)(local_30 + 8) = s_The_provided_PrePackedWeightsCon_001d26a6._8_8_;
    *(undefined8 *)local_30 = uVar2;
    *(undefined8 *)(local_30 + 0x18) = uVar4;
    *(undefined8 *)(local_30 + 0x10) = uVar3;
                    /* try { // try from 0048dd48 to 0048dd5b has its CatchHandler @ 0048dda8 */
    FUN_0063aa48(param_1,2,2,&local_40);
  }
  else {
    if (*(long *)(param_2 + 0x798) == 0) {
      *(long *)(param_2 + 0x798) = param_3;
      *param_1 = 0;
      if (*(long *)(lVar1 + 0x28) == local_28) {
        return;
      }
      goto LAB_0048dda4;
    }
    local_30 = (char *)FUN_00759c3c(0x40);
    uVar6 = s_The_session_already_has_a_PrePac_001e7988._32_8_;
    uVar5 = s_The_session_already_has_a_PrePac_001e7988._24_8_;
    uVar4 = s_The_session_already_has_a_PrePac_001e7988._16_8_;
    uVar3 = s_The_session_already_has_a_PrePac_001e7988._8_8_;
    uVar2 = s_The_session_already_has_a_PrePac_001e7988._0_8_;
    *(ulong *)(local_30 + 0x28) =
         CONCAT44(s_The_session_already_has_a_PrePac_001e7988._44_4_,
                  s_The_session_already_has_a_PrePac_001e7988._40_4_);
    *(undefined8 *)(local_30 + 0x20) = uVar6;
    *(undefined8 *)(local_30 + 8) = uVar3;
    *(undefined8 *)local_30 = uVar2;
    *(undefined8 *)(local_30 + 0x18) = uVar5;
    *(undefined8 *)(local_30 + 0x10) = uVar4;
    uStack_38 = _UNK_002007f8;
    local_40 = _DAT_002007f0;
    local_30[0x3c] = '\0';
    uVar2 = CONCAT44(s_The_session_already_has_a_PrePac_001e7988._48_4_,
                     s_The_session_already_has_a_PrePac_001e7988._44_4_);
    *(undefined8 *)(local_30 + 0x34) = s_The_session_already_has_a_PrePac_001e7988._52_8_;
    *(undefined8 *)(local_30 + 0x2c) = uVar2;
                    /* try { // try from 0048dcec to 0048dcff has its CatchHandler @ 0048ddac */
    FUN_0063aa48(param_1,2,2,&local_40);
  }
  if ((local_40 & 1) != 0) {
    free(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
LAB_0048dda4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0048ddd8  FUN_0048ddd8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0048ddd8(long *param_1,long param_2)

{
  undefined **ppuVar1;
  short *psVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  byte *pbVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  bool bVar12;
  byte bVar13;
  long *plVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  char *pcVar19;
  byte *pbVar20;
  ulong uVar21;
  undefined **ppuVar22;
  ulong *puVar23;
  byte bVar24;
  ulong uVar25;
  long lVar26;
  byte *pbVar27;
  long lVar28;
  void *pvVar29;
  undefined1 uVar30;
  long lVar31;
  undefined8 uVar32;
  ulong uVar33;
  ulong uVar34;
  undefined8 local_270;
  void *local_268;
  undefined8 local_260;
  ulong uStack_258;
  short *local_250;
  ulong local_240;
  ulong uStack_238;
  char *local_230;
  ulong *local_220;
  void *local_210;
  byte *local_208;
  byte *local_200;
  byte local_1f0;
  undefined7 uStack_1ef;
  char cStack_1e8;
  char acStack_1e7 [6];
  char cStack_1e1;
  char cStack_1e0;
  undefined4 uStack_1df;
  char cStack_1db;
  char cStack_1da;
  undefined1 uStack_1d9;
  byte *local_1d0;
  undefined1 auStack_180 [264];
  long local_78;
  
  lVar6 = tpidr_el0;
  local_78 = *(long *)(lVar6 + 0x28);
  local_270 = 0;
  local_268 = (void *)0x0;
  if (*(char *)(param_2 + 0x2b0) != '\0') {
                    /* try { // try from 0048de18 to 0048de1f has its CatchHandler @ 0048f0e0 */
    local_270 = FUN_006390d0(param_2 + 0x2a0);
  }
  puVar8 = PTR_s_onnxruntime_007a9878;
  lVar26 = *(long *)(param_2 + 8);
  if (*(int *)(lVar26 + 0x20) < 2) {
                    /* try { // try from 0048de44 to 0048de5f has its CatchHandler @ 0048f0d8 */
    FUN_0048a3f4(&local_240,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/inference_session.cc"
                 ,0x642,"Initialize");
                    /* try { // try from 0048de60 to 0048de7f has its CatchHandler @ 0048f0c0 */
    FUN_0048a554(&local_1f0,lVar26,1,puVar8,0,&local_240);
                    /* try { // try from 0048de80 to 0048de93 has its CatchHandler @ 0048f0a8 */
    FUN_00303e0c(auStack_180,"Initializing session.",0x15);
    FUN_00637fac(&local_1f0);
    pbVar20 = local_208;
    if (local_208 != (byte *)0x0) {
      while (pbVar27 = local_200, pbVar27 != pbVar20) {
        local_200 = pbVar27 + -0x18;
        if ((*local_200 & 1) != 0) {
          free(*(void **)(pbVar27 + -8));
        }
      }
      local_200 = pbVar20;
      free(local_208);
    }
    if (((ulong)local_220 & 1) != 0) {
      free(local_210);
    }
    if ((local_240 & 1) != 0) {
      free(local_230);
    }
  }
                    /* try { // try from 0048df08 to 0048df27 has its CatchHandler @ 0048f118 */
  plVar14 = (long *)FUN_00641af0();
  plVar15 = (long *)(**(code **)(*plVar14 + 200))();
  (**(code **)(*plVar15 + 0x48))();
                    /* try { // try from 0048df28 to 0048df2f has its CatchHandler @ 0048f114 */
  FUN_007073d8(param_2 + 0x660);
  puVar8 = PTR_s_onnxruntime_007a9878;
  if ((*(byte *)(param_2 + 0x670) & 1) == 0) {
    lVar26 = *(long *)(param_2 + 8);
    if (*(int *)(lVar26 + 0x20) < 4) {
                    /* try { // try from 0048e010 to 0048e02b has its CatchHandler @ 0048efa8 */
      FUN_0048a3f4(&local_240,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/inference_session.cc"
                   ,0x64c,"Initialize");
                    /* try { // try from 0048e02c to 0048e04b has its CatchHandler @ 0048efa4 */
      FUN_0048a554(&local_1f0,lVar26,3,puVar8,0,&local_240);
                    /* try { // try from 0048e04c to 0048e05f has its CatchHandler @ 0048efa0 */
      FUN_00303e0c(auStack_180,"Model was not loaded",0x14);
      FUN_00637fac(&local_1f0);
      pbVar20 = local_208;
      pbVar27 = local_200;
      if (local_208 != (byte *)0x0) {
        while (pbVar7 = pbVar27, pbVar7 != pbVar20) {
          pbVar27 = pbVar7 + -0x18;
          if ((*pbVar27 & 1) != 0) {
            free(*(void **)(pbVar7 + -8));
          }
        }
        local_200 = pbVar20;
        free(local_208);
      }
      if (((ulong)local_220 & 1) != 0) {
        free(local_210);
      }
      if ((local_240 & 1) != 0) {
        free(local_230);
      }
    }
                    /* try { // try from 0048e190 to 0048e1a7 has its CatchHandler @ 0048f08c */
    FUN_0063acd8(param_1,2,1,"Model was not loaded.");
    bVar12 = false;
    bVar11 = false;
  }
  else if (*(char *)(param_2 + 0x671) == '\0') {
    local_1f0 = 0x28;
    uStack_1df = 0x72656469;
    acStack_1e7 = SUB86(s_CPUExecutionProvider_001d47e8._8_8_,0);
    cStack_1e1 = SUB81(s_CPUExecutionProvider_001d47e8._8_8_,6);
    cStack_1e0 = SUB81(s_CPUExecutionProvider_001d47e8._8_8_,7);
    uStack_1ef = (undefined7)s_CPUExecutionProvider_001d47e8._0_8_;
    cStack_1e8 = SUB81(s_CPUExecutionProvider_001d47e8._0_8_,7);
    cStack_1db = '\0';
                    /* try { // try from 0048e0d0 to 0048e0db has its CatchHandler @ 0048eff8 */
    lVar26 = FUN_00496edc(param_2 + 0x90,&local_1f0);
    if (lVar26 == 0) {
      bVar11 = false;
    }
    else {
      bVar11 = *(long *)(*(long *)(param_2 + 0x38) + *(long *)(lVar26 + 0x28) * 0x10) != 0;
    }
    if ((local_1f0 & 1) != 0) {
      free((void *)CONCAT17(uStack_1d9,
                            CONCAT16(cStack_1da,CONCAT15(cStack_1db,CONCAT41(uStack_1df,cStack_1e0))
                                    )));
    }
    bVar12 = true;
  }
  else {
    lVar26 = *(long *)(param_2 + 8);
    if (*(int *)(lVar26 + 0x20) < 2) {
                    /* try { // try from 0048df5c to 0048df77 has its CatchHandler @ 0048efdc */
      FUN_0048a3f4(&local_240,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/inference_session.cc"
                   ,0x651,"Initialize");
                    /* try { // try from 0048df78 to 0048df97 has its CatchHandler @ 0048efc4 */
      FUN_0048a554(&local_1f0,lVar26,1,puVar8,0,&local_240);
                    /* try { // try from 0048df98 to 0048dfab has its CatchHandler @ 0048efac */
      FUN_00303e0c(auStack_180,"Session has already been initialized.",0x25);
      FUN_00637fac(&local_1f0);
      pbVar20 = local_208;
      pbVar27 = local_200;
      if (local_208 != (byte *)0x0) {
        while (pbVar7 = pbVar27, pbVar7 != pbVar20) {
          pbVar27 = pbVar7 + -0x18;
          if ((*pbVar27 & 1) != 0) {
            free(*(void **)(pbVar7 + -8));
          }
        }
        local_200 = pbVar20;
        free(local_208);
      }
      if (((ulong)local_220 & 1) != 0) {
        free(local_210);
      }
      if ((local_240 & 1) != 0) {
        free(local_230);
      }
    }
    bVar12 = false;
    bVar11 = false;
    *param_1 = 0;
  }
                    /* try { // try from 0048e1b0 to 0048e1b7 has its CatchHandler @ 0048f110 */
  FUN_00707c00(param_2 + 0x660);
  if (bVar12) {
    lVar26 = FUN_005ef354(*(undefined8 *)(param_2 + 0x10));
    puVar8 = PTR_s_onnxruntime_007a9878;
    if (!bVar11) {
      lVar28 = *(long *)(param_2 + 8);
      if (*(int *)(lVar28 + 0x20) < 2) {
                    /* try { // try from 0048e1e8 to 0048e203 has its CatchHandler @ 0048ef80 */
        FUN_0048a3f4(&local_240,
                     "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/inference_session.cc"
                     ,0x667,"Initialize");
                    /* try { // try from 0048e204 to 0048e223 has its CatchHandler @ 0048ef7c */
        FUN_0048a554(&local_1f0,lVar28,1,puVar8,0,&local_240);
                    /* try { // try from 0048e224 to 0048e237 has its CatchHandler @ 0048ef78 */
        FUN_00303e0c(auStack_180,"Adding default CPU execution provider.",0x26);
        FUN_00637fac(&local_1f0);
        pbVar20 = local_208;
        pbVar27 = local_200;
        if (local_208 != (byte *)0x0) {
          while (pbVar7 = pbVar27, pbVar7 != pbVar20) {
            pbVar27 = pbVar7 + -0x18;
            if ((*pbVar27 & 1) != 0) {
              free(*(void **)(pbVar7 + -8));
            }
          }
          local_200 = pbVar20;
          free(local_208);
        }
        if (((ulong)local_220 & 1) != 0) {
          free(local_210);
        }
        if ((local_240 & 1) != 0) {
          free(local_230);
        }
      }
      local_240 = CONCAT71(local_240._1_7_,*(undefined1 *)(param_2 + 0x10a));
                    /* try { // try from 0048e2b4 to 0048e2bb has its CatchHandler @ 0048f068 */
      uVar16 = FUN_00759c3c(0x50);
                    /* try { // try from 0048e2bc to 0048e2c7 has its CatchHandler @ 0048f050 */
      FUN_004abb14(uVar16,&local_240);
      local_1f0 = (byte)uVar16;
      uStack_1ef = (undefined7)((ulong)uVar16 >> 8);
                    /* try { // try from 0048e2cc to 0048e2d3 has its CatchHandler @ 0048f030 */
      puVar17 = (undefined8 *)FUN_00759c3c(0x20);
      puVar17[2] = 0;
      puVar17[3] = uVar16;
      cStack_1e8 = (char)puVar17;
      acStack_1e7 = SUB86((ulong)puVar17 >> 8,0);
      cStack_1e1 = (char)((ulong)puVar17 >> 0x38);
      *puVar17 = &PTR_FUN_00790088;
      puVar17[1] = 0;
                    /* try { // try from 0048e2ec to 0048e2fb has its CatchHandler @ 0048f018 */
      FUN_0048bc20(param_1,param_2,&local_1f0);
      plVar15 = (long *)CONCAT17(cStack_1e1,CONCAT61(acStack_1e7,cStack_1e8));
      if ((plVar15 == (long *)0x0) ||
         (lVar28 = FUN_00755c50(0xffffffffffffffff,plVar15 + 1), lVar28 != 0)) {
        lVar28 = *param_1;
      }
      else {
        (**(code **)(*plVar15 + 0x10))(plVar15);
        FUN_0071245c(plVar15);
        lVar28 = *param_1;
      }
      if (lVar28 != 0) {
                    /* try { // try from 0048e320 to 0048e33b has its CatchHandler @ 0048ef88 */
        FUN_00645c3c(*(undefined4 *)(param_2 + 0x674),param_1,
                     "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/inference_session.cc"
                     ,"Initialize",0x66a);
        goto LAB_0048e968;
      }
      *(undefined1 *)(param_2 + 0xb8) = 1;
    }
                    /* try { // try from 0048e368 to 0048e373 has its CatchHandler @ 0048f088 */
    FUN_007073d8(param_2 + 0x660);
    uVar16 = FUN_005ef354(*(undefined8 *)(param_2 + 0x10));
    if (*(char *)(param_2 + 0x208) == '\0') {
      lVar28 = *(long *)(param_2 + 0x4c0);
      lVar31 = *(long *)(param_2 + 0x4c8);
    }
    else {
      lVar31 = *(long *)(param_2 + 0x4d8);
      lVar28 = *(long *)(param_2 + 0x4b0);
      if (*(long *)(param_2 + 0x4d0) != 0) {
        lVar28 = *(long *)(param_2 + 0x4d0);
      }
      if (lVar31 == 0) {
        lVar31 = *(long *)(param_2 + 0x4b8);
      }
    }
    uVar32 = *(undefined8 *)(param_2 + 8);
                    /* try { // try from 0048e3b4 to 0048e3bb has its CatchHandler @ 0048f084 */
    uVar18 = FUN_00759c3c(0x620);
    uVar21 = param_2 + 0x38;
                    /* try { // try from 0048e3cc to 0048e3f3 has its CatchHandler @ 0048f070 */
    FUN_00598300(uVar18,uVar16,uVar21,lVar28,lVar31,param_2 + 0x640,uVar32,param_2 + 0x2a0,
                 param_2 + 0xe0,*(undefined8 *)(param_2 + 0x798),0);
    pvVar29 = *(void **)(param_2 + 0x470);
    *(undefined8 *)(param_2 + 0x470) = uVar18;
    if (pvVar29 != (void *)0x0) {
      FUN_004a0cf0(pvVar29);
      free(pvVar29);
    }
                    /* try { // try from 0048e410 to 0048e417 has its CatchHandler @ 0048f06c */
    local_230 = (char *)FUN_00759c3c(0x20);
    uStack_238 = _UNK_00200668;
    local_240 = _DAT_00200660;
    uVar32 = s_session_use_env_allocators_001d8ce6._18_8_;
    uVar18 = s_session_use_env_allocators_001d8ce6._0_8_;
    uVar16 = CONCAT26(s_session_use_env_allocators_001d8ce6._16_2_,
                      s_session_use_env_allocators_001d8ce6._10_6_);
    *(ulong *)(local_230 + 8) =
         CONCAT62(s_session_use_env_allocators_001d8ce6._10_6_,
                  s_session_use_env_allocators_001d8ce6._8_2_);
    *(undefined8 *)local_230 = uVar18;
    *(undefined8 *)(local_230 + 0x12) = uVar32;
    *(undefined8 *)(local_230 + 10) = uVar16;
    local_230[0x1a] = '\0';
    local_260 = CONCAT53(local_260._3_5_,0x3002);
    FUN_00569aa4(&local_1f0,param_2 + 0x210,&local_240,&local_260);
    bVar12 = false;
    uVar25 = (ulong)(local_1f0 >> 1);
    if ((local_1f0 & 1) != 0) {
      uVar25 = CONCAT17(cStack_1e1,CONCAT61(acStack_1e7,cStack_1e8));
    }
    if (uVar25 == 1) {
      pcVar19 = (char *)CONCAT17(uStack_1d9,
                                 CONCAT16(cStack_1da,
                                          CONCAT15(cStack_1db,CONCAT41(uStack_1df,cStack_1e0))));
      if ((local_1f0 & 1) == 0) {
        pcVar19 = (char *)&uStack_1ef;
      }
      bVar12 = *pcVar19 == '1';
      if ((local_1f0 & 1) != 0) goto LAB_0048e4a4;
LAB_0048e4d8:
      if ((local_260 & 1) == 0) goto LAB_0048e4e0;
LAB_0048e4b4:
      free(local_250);
      if ((local_240 & 1) != 0) goto LAB_0048e4c4;
LAB_0048e4e8:
      if (bVar12) goto LAB_0048e4ec;
    }
    else {
      if ((local_1f0 & 1) == 0) goto LAB_0048e4d8;
LAB_0048e4a4:
      free((void *)CONCAT17(uStack_1d9,
                            CONCAT16(cStack_1da,CONCAT15(cStack_1db,CONCAT41(uStack_1df,cStack_1e0))
                                    )));
      if ((local_260 & 1) != 0) goto LAB_0048e4b4;
LAB_0048e4e0:
      if ((local_240 & 1) == 0) goto LAB_0048e4e8;
LAB_0048e4c4:
      free(local_230);
      if (bVar12) {
LAB_0048e4ec:
        puVar8 = PTR_s_onnxruntime_007a9878;
        lVar28 = *(long *)(param_2 + 8);
        if (*(int *)(lVar28 + 0x20) < 2) {
                    /* try { // try from 0048e508 to 0048e523 has its CatchHandler @ 0048ef70 */
          FUN_0048a3f4(&local_240,
                       "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/inference_session.cc"
                       ,0x693,"Initialize");
                    /* try { // try from 0048e524 to 0048e543 has its CatchHandler @ 0048ef5c */
          FUN_0048a554(&local_1f0,lVar28,1,puVar8,0,&local_240);
                    /* try { // try from 0048e544 to 0048e557 has its CatchHandler @ 0048ef48 */
          FUN_00303e0c(auStack_180,
                       "This session will use the allocator registered with the environment.",0x44);
          FUN_00637fac(&local_1f0);
          pbVar20 = local_208;
          pbVar27 = local_200;
          if (local_208 != (byte *)0x0) {
            while (pbVar7 = pbVar27, pbVar7 != pbVar20) {
              pbVar27 = pbVar7 + -0x18;
              if ((*pbVar27 & 1) != 0) {
                free(*(void **)(pbVar7 + -8));
              }
            }
            local_200 = pbVar20;
            free(local_208);
          }
          if (((ulong)local_220 & 1) != 0) {
            free(local_210);
          }
          if ((local_240 & 1) != 0) {
            free(local_230);
          }
        }
                    /* try { // try from 0048e5d4 to 0048e5db has its CatchHandler @ 0048f0dc */
        FUN_005991ac(*(undefined8 *)(param_2 + 0x470),*(long *)(param_2 + 0x760) + 0x20);
      }
    }
    puVar3 = *(undefined8 **)(param_2 + 0x40);
    for (puVar17 = *(undefined8 **)(param_2 + 0x38); puVar17 != puVar3; puVar17 = puVar17 + 2) {
                    /* try { // try from 0048e5fc to 0048e5ff has its CatchHandler @ 0048f128 */
      lVar28 = (**(code **)(*(long *)*puVar17 + 0xa8))();
      if (lVar28 != 0) {
        *(undefined8 *)(lVar28 + 0x10) = *(undefined8 *)(*(long *)(param_2 + 0x470) + 0x200);
      }
    }
    uVar25 = param_2 + 0x4e8;
                    /* try { // try from 0048e618 to 0048e627 has its CatchHandler @ 0048f0dc */
    FUN_005867c8(param_1,uVar25,uVar21);
    if (*param_1 == 0) {
      bVar13 = *(byte *)(param_2 + 0xf0);
      lVar28 = *(long *)(param_2 + 0x768);
      uVar33 = (ulong)(bVar13 >> 1);
      if ((bVar13 & 1) != 0) {
        uVar33 = *(ulong *)(param_2 + 0xf8);
      }
      if (uVar33 == 0) {
        bVar13 = 0;
      }
      else {
                    /* try { // try from 0048e680 to 0048e687 has its CatchHandler @ 0048ef40 */
        pcVar19 = (char *)FUN_00759c3c(0x20);
        uVar10 = _UNK_00200518;
        uVar9 = _DAT_00200510;
        uVar32 = s_session_save_model_format_001fa64b._17_8_;
        uVar18 = s_session_save_model_format_001fa64b._0_8_;
        uVar16 = CONCAT17(s_session_save_model_format_001fa64b[0x10],
                          s_session_save_model_format_001fa64b._9_7_);
        cStack_1e0 = (char)pcVar19;
        uStack_1df = (undefined4)((ulong)pcVar19 >> 8);
        cStack_1db = (char)((ulong)pcVar19 >> 0x28);
        cStack_1da = (char)((ulong)pcVar19 >> 0x30);
        uStack_1d9 = (undefined1)((ulong)pcVar19 >> 0x38);
        *(ulong *)(pcVar19 + 8) =
             CONCAT71(s_session_save_model_format_001fa64b._9_7_,
                      s_session_save_model_format_001fa64b[8]);
        *(undefined8 *)pcVar19 = uVar18;
        *(undefined8 *)(pcVar19 + 0x11) = uVar32;
        *(undefined8 *)(pcVar19 + 9) = uVar16;
        pcVar19[0x19] = '\0';
        cStack_1e8 = (char)uVar10;
        acStack_1e7 = SUB86((ulong)uVar10 >> 8,0);
        cStack_1e1 = (char)((ulong)uVar10 >> 0x38);
        local_1f0 = (byte)uVar9;
        uStack_1ef = (undefined7)((ulong)uVar9 >> 8);
        local_240 = local_240 & 0xffffffffffff0000;
        FUN_00569aa4(&local_260,param_2 + 0x210,&local_1f0,&local_240);
        if ((local_240 & 1) == 0) {
          if ((local_1f0 & 1) == 0) goto LAB_0048e6dc;
LAB_0048e744:
          free((void *)CONCAT17(uStack_1d9,
                                CONCAT16(cStack_1da,
                                         CONCAT15(cStack_1db,CONCAT41(uStack_1df,cStack_1e0)))));
          uVar34 = (ulong)((byte)local_260 >> 1);
          if ((local_260 & 1) != 0) {
            uVar34 = uStack_258;
          }
          if (uVar34 == 0) goto LAB_0048e764;
LAB_0048e6f4:
          bVar24 = (byte)local_260 & 1;
          if (uVar34 == 3) {
            psVar2 = local_250;
            if (((byte)local_260 & 1) == 0) {
              psVar2 = (short *)((long)&local_260 + 1);
            }
            bVar13 = *psVar2 == 0x524f && (char)psVar2[1] == 'T';
          }
          else {
            bVar13 = 0;
          }
        }
        else {
          free(local_230);
          if ((local_1f0 & 1) != 0) goto LAB_0048e744;
LAB_0048e6dc:
          uVar34 = (ulong)((byte)local_260 >> 1);
          if ((local_260 & 1) != 0) {
            uVar34 = uStack_258;
          }
          if (uVar34 != 0) goto LAB_0048e6f4;
LAB_0048e764:
                    /* try { // try from 0048e764 to 0048e76b has its CatchHandler @ 0048ee6c */
          bVar13 = FUN_00647928((byte *)(param_2 + 0xf0));
          bVar24 = (byte)local_260 & 1;
        }
        if (bVar24 != 0) {
          free(local_250);
        }
      }
      if (lVar28 == 0) {
                    /* try { // try from 0048e7e4 to 0048e7eb has its CatchHandler @ 0048eea4 */
        pcVar19 = (char *)FUN_00759c3c(0x50);
        uVar32 = s_Loading_anything_other_than_ORT_f_001fa599._48_8_;
        uVar18 = s_Loading_anything_other_than_ORT_f_001fa599._32_8_;
        uVar16 = CONCAT53(s_Loading_anything_other_than_ORT_f_001fa599._59_5_,
                          s_Loading_anything_other_than_ORT_f_001fa599._56_3_);
        cStack_1e0 = (char)pcVar19;
        uStack_1df = (undefined4)((ulong)pcVar19 >> 8);
        cStack_1db = (char)((ulong)pcVar19 >> 0x28);
        cStack_1da = (char)((ulong)pcVar19 >> 0x30);
        uStack_1d9 = (undefined1)((ulong)pcVar19 >> 0x38);
        cStack_1e8 = (char)_UNK_00200828;
        acStack_1e7 = SUB86((ulong)_UNK_00200828 >> 8,0);
        cStack_1e1 = (char)((ulong)_UNK_00200828 >> 0x38);
        local_1f0 = (byte)_DAT_00200820;
        uStack_1ef = (undefined7)((ulong)_DAT_00200820 >> 8);
        *(undefined8 *)(pcVar19 + 0x28) = s_Loading_anything_other_than_ORT_f_001fa599._40_8_;
        *(undefined8 *)(pcVar19 + 0x20) = uVar18;
        *(undefined8 *)(pcVar19 + 0x38) = uVar16;
        *(undefined8 *)(pcVar19 + 0x30) = uVar32;
        uVar18 = s_Loading_anything_other_than_ORT_f_001fa599._67_8_;
        uVar16 = CONCAT35(s_Loading_anything_other_than_ORT_f_001fa599._64_3_,
                          s_Loading_anything_other_than_ORT_f_001fa599._59_5_);
        pcVar19[0x4b] = '\0';
        *(undefined8 *)(pcVar19 + 0x43) = uVar18;
        *(undefined8 *)(pcVar19 + 0x3b) = uVar16;
        uVar32 = s_Loading_anything_other_than_ORT_f_001fa599._24_8_;
        uVar18 = s_Loading_anything_other_than_ORT_f_001fa599._16_8_;
        uVar16 = s_Loading_anything_other_than_ORT_f_001fa599._0_8_;
        *(undefined8 *)(pcVar19 + 8) = s_Loading_anything_other_than_ORT_f_001fa599._8_8_;
        *(undefined8 *)pcVar19 = uVar16;
        *(undefined8 *)(pcVar19 + 0x18) = uVar32;
        *(undefined8 *)(pcVar19 + 0x10) = uVar18;
                    /* try { // try from 0048e820 to 0048e833 has its CatchHandler @ 0048ee8c */
        FUN_0063aa48(param_1,2,1,&local_1f0);
        if ((local_1f0 & 1) != 0) {
          free((void *)CONCAT17(uStack_1d9,
                                CONCAT16(cStack_1da,
                                         CONCAT15(cStack_1db,CONCAT41(uStack_1df,cStack_1e0)))));
        }
        if (*param_1 == 0) goto LAB_0048e910;
                    /* try { // try from 0048e850 to 0048e86f has its CatchHandler @ 0048ee88 */
        FUN_00645c3c(*(undefined4 *)(param_2 + 0x674),param_1,
                     "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/inference_session.cc"
                     ,"Initialize",0x79b);
      }
      else {
        local_1d0 = (byte *)0x0;
        local_220 = (ulong *)0x0;
                    /* try { // try from 0048e7a4 to 0048e7cb has its CatchHandler @ 0048eed4 */
        local_260 = uVar25;
        uStack_258 = uVar21;
        FUN_00581fc0(param_1,&local_260,lVar26,*(long *)(param_2 + 0x470) + 0x28,&local_1f0,
                     param_2 + 0x210,*(undefined8 *)(param_2 + 8),2,&local_240);
        if (local_220 == &local_240) {
          lVar28 = 0x20;
          puVar23 = &local_240;
LAB_0048e87c:
          (**(code **)(*puVar23 + lVar28))();
        }
        else if (local_220 != (ulong *)0x0) {
          lVar28 = 0x28;
          puVar23 = local_220;
          goto LAB_0048e87c;
        }
        if (*param_1 != 0) {
                    /* try { // try from 0048e890 to 0048e8af has its CatchHandler @ 0048eeac */
          FUN_00645c3c(0,param_1,
                       "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/inference_session.cc"
                       ,"PartitionOrtFormatModel",0x610);
        }
        if (local_1d0 == &local_1f0) {
          lVar28 = 0x20;
          pbVar20 = &local_1f0;
LAB_0048e8d4:
          (**(code **)(*(long *)pbVar20 + lVar28))();
        }
        else if (local_1d0 != (byte *)0x0) {
          lVar28 = 0x28;
          pbVar20 = local_1d0;
          goto LAB_0048e8d4;
        }
        if (*param_1 == 0) {
LAB_0048e910:
          uVar16 = *(undefined8 *)(param_2 + 0x470);
          *param_1 = 0;
                    /* try { // try from 0048e920 to 0048e937 has its CatchHandler @ 0048ef44 */
          FUN_0059ef84(param_1,uVar16,param_2 + 0x20,uVar25,uVar33 == 0,bVar13 & 1);
          if (*param_1 == 0) {
                    /* try { // try from 0048e9c0 to 0048e9fb has its CatchHandler @ 0048ef44 */
            FUN_0048f2e4(*(undefined8 *)(param_2 + 0x470));
            *(undefined1 *)(param_2 + 0x671) = 1;
            if ((*(byte *)(param_2 + 0x790) & 1) == 0) {
              pvVar29 = *(void **)(param_2 + 0x778);
              *(undefined8 *)(param_2 + 0x788) = 0;
              *(undefined8 *)(param_2 + 0x768) = 0;
              *(undefined8 *)(param_2 + 0x770) = 0;
              *(undefined8 *)(param_2 + 0x780) = 0;
              *(undefined8 *)(param_2 + 0x778) = 0;
              if (pvVar29 != (void *)0x0) {
                free(pvVar29);
              }
            }
            FUN_0059b058(*(undefined8 *)(param_2 + 0x470));
            puVar17 = *(undefined8 **)(lVar26 + 0x1f0);
            puVar3 = *(undefined8 **)(lVar26 + 0x1f8);
            if (puVar17 != puVar3) {
              do {
                uVar21 = FUN_005de738(*puVar17);
                if ((uVar21 & 1) != 0) {
                  ppuVar22 = (undefined **)FUN_005de664(*puVar17);
                  iVar4 = *(int *)(ppuVar22 + 5);
                  while (iVar4 - 4U < 2) {
                    ppuVar1 = ppuVar22 + 4;
                    ppuVar22 = &PTR_PTR_FUN_007a9f68;
                    if (*(undefined ***)(*ppuVar1 + 0x18) != (undefined **)0x0) {
                      ppuVar22 = *(undefined ***)(*ppuVar1 + 0x18);
                    }
                    iVar4 = *(int *)(ppuVar22 + 5);
                  }
                  if ((iVar4 == 1) && (*(int *)(ppuVar22[4] + 0x20) == 10)) {
                    uVar30 = 1;
                    goto LAB_0048ea88;
                  }
                }
                puVar17 = puVar17 + 1;
              } while (puVar17 != puVar3);
            }
            uVar30 = 0;
LAB_0048ea88:
                    /* try { // try from 0048ea90 to 0048ea97 has its CatchHandler @ 0048ee68 */
            plVar14 = (long *)(**(code **)(*plVar14 + 200))(plVar14);
            puVar23 = *(ulong **)(param_2 + 0x10);
            uVar5 = *(undefined4 *)(param_2 + 0x674);
            uVar21 = puVar23[7];
            if ((puVar23[3] & 1) == 0) {
              uVar34 = puVar23[4];
              uVar33 = puVar23[3];
              uVar25 = puVar23[5];
              cStack_1e8 = (char)uVar34;
              acStack_1e7 = SUB86(uVar34 >> 8,0);
              cStack_1e1 = (char)(uVar34 >> 0x38);
              local_1f0 = (byte)uVar33;
              uStack_1ef = (undefined7)(uVar33 >> 8);
              cStack_1e0 = (char)uVar25;
              uStack_1df = (undefined4)(uVar25 >> 8);
              cStack_1db = (char)(uVar25 >> 0x28);
              cStack_1da = (char)(uVar25 >> 0x30);
              uStack_1d9 = (undefined1)(uVar25 >> 0x38);
            }
            else {
                    /* try { // try from 0048eacc to 0048ead3 has its CatchHandler @ 0048ee0c */
              FUN_002fb36c(&local_1f0,puVar23[5],puVar23[4]);
              puVar23 = *(ulong **)(param_2 + 0x10);
            }
            if ((*puVar23 & 1) == 0) {
              local_230 = (char *)puVar23[2];
              uStack_238 = puVar23[1];
              local_240 = *puVar23;
            }
            else {
                    /* try { // try from 0048eaf8 to 0048eaff has its CatchHandler @ 0048edf8 */
              FUN_002fb36c(&local_240,puVar23[2],puVar23[1]);
              puVar23 = *(ulong **)(param_2 + 0x10);
            }
            if ((puVar23[8] & 1) == 0) {
              uStack_258 = puVar23[9];
              local_260 = puVar23[8];
              local_250 = (short *)puVar23[10];
            }
            else {
                    /* try { // try from 0048eb28 to 0048eb2f has its CatchHandler @ 0048edd4 */
              FUN_002fb36c(&local_260,puVar23[10],puVar23[9]);
              puVar23 = *(ulong **)(param_2 + 0x10);
            }
            lVar26 = FUN_005ef354(puVar23);
            FUN_005ef354(*(undefined8 *)(param_2 + 0x10));
            uVar16 = FUN_005e0914();
            uVar18 = FUN_005ef34c(*(undefined8 *)(param_2 + 0x10));
                    /* try { // try from 0048eb70 to 0048eb9f has its CatchHandler @ 0048ee30 */
            (**(code **)(*plVar14 + 0x60))
                      (plVar14,uVar5,uVar21,&local_1f0,&local_240,&local_260,lVar26 + 0x290,uVar16,
                       uVar18,param_2 + 0x688,param_2 + 0x50,uVar30);
            if ((local_260 & 1) == 0) {
              if ((local_240 & 1) == 0) goto LAB_0048ebb8;
LAB_0048ebe4:
              free(local_230);
              if ((local_1f0 & 1) != 0) goto LAB_0048ebf4;
LAB_0048ebc0:
              lVar26 = *(long *)(param_2 + 8);
              iVar4 = *(int *)(lVar26 + 0x20);
              puVar8 = PTR_s_onnxruntime_007a9878;
            }
            else {
              free(local_250);
              if ((local_240 & 1) != 0) goto LAB_0048ebe4;
LAB_0048ebb8:
              if ((local_1f0 & 1) == 0) goto LAB_0048ebc0;
LAB_0048ebf4:
              free((void *)CONCAT17(uStack_1d9,
                                    CONCAT16(cStack_1da,
                                             CONCAT15(cStack_1db,CONCAT41(uStack_1df,cStack_1e0)))))
              ;
              lVar26 = *(long *)(param_2 + 8);
              iVar4 = *(int *)(lVar26 + 0x20);
              puVar8 = PTR_s_onnxruntime_007a9878;
            }
            PTR_s_onnxruntime_007a9878 = puVar8;
            if (iVar4 < 2) {
                    /* try { // try from 0048ec18 to 0048ec33 has its CatchHandler @ 0048edd0 */
              FUN_0048a3f4(&local_240,
                           "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/inference_session.cc"
                           ,0x7f1,"Initialize");
                    /* try { // try from 0048ec34 to 0048ec53 has its CatchHandler @ 0048edcc */
              FUN_0048a554(&local_1f0,lVar26,1,puVar8,0,&local_240);
                    /* try { // try from 0048ec54 to 0048ec67 has its CatchHandler @ 0048edc8 */
              FUN_00303e0c(auStack_180,"Session successfully initialized.",0x21);
              FUN_00637fac(&local_1f0);
              pbVar20 = local_208;
              pbVar27 = local_200;
              if (local_208 != (byte *)0x0) {
                while (pbVar7 = pbVar27, pbVar7 != pbVar20) {
                  pbVar27 = pbVar7 + -0x18;
                  if ((*pbVar27 & 1) != 0) {
                    free(*(void **)(pbVar7 + -8));
                  }
                }
                local_200 = pbVar20;
                free(local_208);
              }
              if (((ulong)local_220 & 1) != 0) {
                free(local_210);
              }
              if ((local_240 & 1) != 0) {
                free(local_230);
              }
            }
                    /* try { // try from 0048ecdc to 0048ece3 has its CatchHandler @ 0048ee2c */
            FUN_00707c00(param_2 + 0x660);
            if (*(char *)(param_2 + 0x2b0) != '\0') {
              local_1f0 = 0x2c;
              uStack_1d9 = 0;
              acStack_1e7[0] = s_session_initialization_001bacc3[8];
              acStack_1e7[1] = s_session_initialization_001bacc3[9];
              acStack_1e7[2] = s_session_initialization_001bacc3[10];
              acStack_1e7[3] = s_session_initialization_001bacc3[0xb];
              acStack_1e7[4] = s_session_initialization_001bacc3[0xc];
              acStack_1e7[5] = s_session_initialization_001bacc3[0xd];
              uStack_1ef = (undefined7)s_session_initialization_001bacc3._0_8_;
              cStack_1e8 = SUB81(s_session_initialization_001bacc3._0_8_,7);
              cStack_1e1 = (char)s_session_initialization_001bacc3._14_2_;
              cStack_1e0 = SUB21(s_session_initialization_001bacc3._14_2_,1);
              uStack_1df = (undefined4)s_session_initialization_001bacc3._16_6_;
              cStack_1db = SUB61(s_session_initialization_001bacc3._16_6_,4);
              cStack_1da = SUB61(s_session_initialization_001bacc3._16_6_,5);
              local_240 = 0;
              uStack_238 = 0;
                    /* try { // try from 0048ed14 to 0048ed2f has its CatchHandler @ 0048ee10 */
              FUN_006393f4(param_2 + 0x2a0,0,&local_1f0,&local_270,&local_240,0);
              if ((local_1f0 & 1) != 0) {
                free((void *)CONCAT17(uStack_1d9,
                                      CONCAT16(cStack_1da,
                                               CONCAT15(cStack_1db,CONCAT41(uStack_1df,cStack_1e0)))
                                     ));
              }
            }
            if (local_268 == (void *)0x0) {
              puVar17 = *(undefined8 **)(param_2 + 0x38);
              puVar3 = *(undefined8 **)(param_2 + 0x40);
              if (puVar17 == puVar3) {
                *param_1 = 0;
                goto LAB_0048e98c;
              }
              do {
                    /* try { // try from 0048ed80 to 0048ed87 has its CatchHandler @ 0048ef84 */
                (**(code **)(*(long *)*puVar17 + 0x78))(&local_1f0);
                if (local_268 == (void *)0x0) {
                    /* try { // try from 0048ed90 to 0048ed9b has its CatchHandler @ 0048eec0 */
                  FUN_0048f7fc(&local_268,&local_1f0);
                }
                pvVar29 = (void *)CONCAT71(uStack_1ef,local_1f0);
                local_1f0 = 0;
                uStack_1ef = 0;
                if (pvVar29 != (void *)0x0) {
                  if ((*(byte *)((long)pvVar29 + 8) & 1) != 0) {
                    free(*(void **)((long)pvVar29 + 0x18));
                  }
                  free(pvVar29);
                }
                puVar17 = puVar17 + 2;
              } while (puVar17 != puVar3);
            }
            *param_1 = (long)local_268;
            goto LAB_0048e98c;
          }
                    /* try { // try from 0048e944 to 0048e95f has its CatchHandler @ 0048ee84 */
          FUN_00645c3c(*(undefined4 *)(param_2 + 0x674),param_1,
                       "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/inference_session.cc"
                       ,"Initialize",0x7ac);
        }
        else {
                    /* try { // try from 0048e8ec to 0048e90b has its CatchHandler @ 0048eea8 */
          FUN_00645c3c(*(undefined4 *)(param_2 + 0x674),param_1,
                       "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/inference_session.cc"
                       ,"Initialize",0x79f);
        }
      }
                    /* try { // try from 0048e960 to 0048e967 has its CatchHandler @ 0048ef74 */
      FUN_00707c00(param_2 + 0x660);
    }
    else {
                    /* try { // try from 0048e634 to 0048e64f has its CatchHandler @ 0048efe4 */
      FUN_00645c3c(*(undefined4 *)(param_2 + 0x674),param_1,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/inference_session.cc"
                   ,"Initialize",0x6ab);
                    /* try { // try from 0048e650 to 0048e657 has its CatchHandler @ 0048efe0 */
      FUN_00707c00(param_2 + 0x660);
    }
  }
LAB_0048e968:
  pvVar29 = local_268;
  local_268 = (void *)0x0;
  if (pvVar29 != (void *)0x0) {
    if ((*(byte *)((long)pvVar29 + 8) & 1) != 0) {
      free(*(void **)((long)pvVar29 + 0x18));
    }
    free(pvVar29);
  }
LAB_0048e98c:
  if (*(long *)(lVar6 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0048f2e4  FUN_0048f2e4 =====

void FUN_0048f2e4(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  FUN_0059d7a8();
  for (plVar1 = *(long **)(param_1 + 0x528); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    for (plVar2 = (long *)plVar1[5]; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      FUN_0048f2e4(plVar2[5]);
    }
  }
  return;
}


// ===== 0048f330  FUN_0048f330 =====

undefined8 * FUN_0048f330(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  void *__ptr;
  
  uVar1 = *param_2;
  *param_2 = 0;
  __ptr = (void *)*param_1;
  *param_1 = uVar1;
  if (__ptr != (void *)0x0) {
    if ((*(byte *)((long)__ptr + 8) & 1) != 0) {
      free(*(void **)((long)__ptr + 0x18));
    }
    free(__ptr);
  }
  return param_1;
}


// ===== 0048f37c  FUN_0048f37c =====

void FUN_0048f37c(undefined8 *param_1)

{
  ulong uVar1;
  byte *pbVar2;
  long lVar3;
  void *pvVar4;
  byte *pbVar5;
  void *__ptr;
  long lVar6;
  undefined8 uVar7;
  char *local_220 [2];
  void *local_210;
  byte local_200;
  void *local_1f0;
  byte *local_1e8;
  byte *local_1e0;
  undefined8 local_1d0;
  void *local_1c8;
  byte local_1c0 [16];
  void *local_1b0;
  undefined1 auStack_150 [264];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  lVar6 = param_1[2];
  local_1d0 = (**(code **)(*(long *)param_1[1] + 0x10))();
  local_220[0] = "Exception during initialization: ";
  FUN_004839f8(local_1c0,local_220,&local_1d0);
                    /* try { // try from 0048f3d8 to 0048f3eb has its CatchHandler @ 0048f58c */
  FUN_0063aa48(&local_1c8,2,6,local_1c0);
  pvVar4 = local_1c8;
  local_1c8 = (void *)0x0;
  __ptr = *(void **)*param_1;
  *(void **)*param_1 = pvVar4;
  if (__ptr != (void *)0x0) {
    if ((*(byte *)((long)__ptr + 8) & 1) != 0) {
      free(*(void **)((long)__ptr + 0x18));
    }
    free(__ptr);
  }
  pvVar4 = local_1c8;
  local_1c8 = (void *)0x0;
  if (pvVar4 != (void *)0x0) {
    if ((*(byte *)((long)pvVar4 + 8) & 1) != 0) {
      free(*(void **)((long)pvVar4 + 0x18));
    }
    free(pvVar4);
  }
  if ((local_1c0[0] & 1) != 0) {
    free(local_1b0);
  }
  lVar6 = *(long *)(lVar6 + 8);
  if (*(int *)(lVar6 + 0x20) < 4) {
    uVar7 = *(undefined8 *)PTR_PTR_s_onnxruntime_007a1f28;
    FUN_0048a3f4(local_220,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/inference_session.cc"
                 ,0x7fc,"operator()");
                    /* try { // try from 0048f488 to 0048f4a7 has its CatchHandler @ 0048f57c */
    FUN_0048a554(local_1c0,lVar6,3,uVar7,0,local_220);
    pbVar5 = (byte *)FUN_0063afd8(*param_1);
    uVar1 = *(ulong *)(pbVar5 + 8);
    pbVar2 = *(byte **)(pbVar5 + 0x10);
    if ((*pbVar5 & 1) == 0) {
      pbVar2 = pbVar5 + 1;
      uVar1 = (ulong)(*pbVar5 >> 1);
    }
                    /* try { // try from 0048f4c8 to 0048f4cf has its CatchHandler @ 0048f56c */
    FUN_00303e0c(auStack_150,pbVar2,uVar1);
    FUN_00637fac(local_1c0);
    pbVar2 = local_1e8;
    if (local_1e8 != (byte *)0x0) {
      while (pbVar5 = local_1e0, pbVar5 != pbVar2) {
        local_1e0 = pbVar5 + -0x18;
        if ((*local_1e0 & 1) != 0) {
          free(*(void **)(pbVar5 + -8));
        }
      }
      local_1e0 = pbVar2;
      free(local_1e8);
    }
    if ((local_200 & 1) != 0) {
      free(local_1f0);
    }
    if (((ulong)local_220[0] & 1) != 0) {
      free(local_210);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0048f5bc  FUN_0048f5bc =====

void FUN_0048f5bc(undefined8 *param_1)

{
  ulong uVar1;
  byte *pbVar2;
  long lVar3;
  void *pvVar4;
  byte *pbVar5;
  void *__ptr;
  long lVar6;
  undefined8 uVar7;
  char *local_220 [2];
  void *local_210;
  byte local_200;
  void *local_1f0;
  byte *local_1e8;
  byte *local_1e0;
  undefined8 local_1d0;
  void *local_1c8;
  byte local_1c0 [16];
  void *local_1b0;
  undefined1 auStack_150 [264];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  lVar6 = param_1[2];
  local_1d0 = (**(code **)(*(long *)param_1[1] + 0x10))();
  local_220[0] = "Exception during initialization: ";
  FUN_004839f8(local_1c0,local_220,&local_1d0);
                    /* try { // try from 0048f618 to 0048f62b has its CatchHandler @ 0048f7cc */
  FUN_0063aa48(&local_1c8,2,9,local_1c0);
  pvVar4 = local_1c8;
  local_1c8 = (void *)0x0;
  __ptr = *(void **)*param_1;
  *(void **)*param_1 = pvVar4;
  if (__ptr != (void *)0x0) {
    if ((*(byte *)((long)__ptr + 8) & 1) != 0) {
      free(*(void **)((long)__ptr + 0x18));
    }
    free(__ptr);
  }
  pvVar4 = local_1c8;
  local_1c8 = (void *)0x0;
  if (pvVar4 != (void *)0x0) {
    if ((*(byte *)((long)pvVar4 + 8) & 1) != 0) {
      free(*(void **)((long)pvVar4 + 0x18));
    }
    free(pvVar4);
  }
  if ((local_1c0[0] & 1) != 0) {
    free(local_1b0);
  }
  lVar6 = *(long *)(lVar6 + 8);
  if (*(int *)(lVar6 + 0x20) < 4) {
    uVar7 = *(undefined8 *)PTR_PTR_s_onnxruntime_007a1f28;
    FUN_0048a3f4(local_220,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/inference_session.cc"
                 ,0x7f6,"operator()");
                    /* try { // try from 0048f6c8 to 0048f6e7 has its CatchHandler @ 0048f7bc */
    FUN_0048a554(local_1c0,lVar6,3,uVar7,0,local_220);
    pbVar5 = (byte *)FUN_0063afd8(*param_1);
    uVar1 = *(ulong *)(pbVar5 + 8);
    pbVar2 = *(byte **)(pbVar5 + 0x10);
    if ((*pbVar5 & 1) == 0) {
      pbVar2 = pbVar5 + 1;
      uVar1 = (ulong)(*pbVar5 >> 1);
    }
                    /* try { // try from 0048f708 to 0048f70f has its CatchHandler @ 0048f7ac */
    FUN_00303e0c(auStack_150,pbVar2,uVar1);
    FUN_00637fac(local_1c0);
    pbVar2 = local_1e8;
    if (local_1e8 != (byte *)0x0) {
      while (pbVar5 = local_1e0, pbVar5 != pbVar2) {
        local_1e0 = pbVar5 + -0x18;
        if ((*local_1e0 & 1) != 0) {
          free(*(void **)(pbVar5 + -8));
        }
      }
      local_1e0 = pbVar2;
      free(local_1e8);
    }
    if ((local_200 & 1) != 0) {
      free(local_1f0);
    }
    if (((ulong)local_220[0] & 1) != 0) {
      free(local_210);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0048f7fc  FUN_0048f7fc =====

long * FUN_0048f7fc(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *__ptr;
  undefined8 uVar2;
  undefined8 uVar3;
  
  __ptr = (undefined8 *)*param_1;
  param_2 = (undefined8 *)*param_2;
  if (__ptr != param_2) {
    if (param_2 == (undefined8 *)0x0) {
      *param_1 = 0;
    }
    else {
      puVar1 = (undefined8 *)FUN_00759c3c(0x20);
      *puVar1 = *param_2;
      if ((*(byte *)(param_2 + 1) & 1) == 0) {
        uVar3 = param_2[2];
        uVar2 = param_2[1];
        puVar1[3] = param_2[3];
        puVar1[2] = uVar3;
        puVar1[1] = uVar2;
        *param_1 = (long)puVar1;
      }
      else {
                    /* try { // try from 0048f880 to 0048f883 has its CatchHandler @ 0048f8bc */
        FUN_002fb36c(puVar1 + 1,param_2[3],param_2[2]);
        __ptr = (undefined8 *)*param_1;
        *param_1 = (long)puVar1;
      }
    }
    if (__ptr != (undefined8 *)0x0) {
      if ((*(byte *)(__ptr + 1) & 1) != 0) {
        free((void *)__ptr[3]);
      }
      free(__ptr);
      return param_1;
    }
  }
  return param_1;
}


// ===== 0048f8d0  FUN_0048f8d0 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_0048f8d0(undefined8 *param_1,undefined8 param_2,byte *param_3,undefined8 *param_4,
                 undefined8 *param_5,char *param_6)

{
  undefined *puVar1;
  undefined8 *******pppppppuVar2;
  byte *pbVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  size_t sVar7;
  undefined8 ****ppppuVar8;
  long lVar9;
  undefined8 ******ppppppuVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *local_1f8 [2];
  void *local_1e8;
  undefined8 ******local_1e0;
  undefined8 ******local_1d8;
  char *pcStack_1d0;
  char *local_1c8;
  char *local_1c0;
  char *pcStack_1b8;
  undefined8 *******local_1b0 [9];
  ulong local_168;
  undefined8 uStack_160;
  void *local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined *local_140 [3];
  undefined8 uStack_128;
  undefined4 auStack_120 [4];
  undefined8 local_110;
  undefined8 ******local_a8;
  undefined8 *******local_a0;
  ulong local_98;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  ppppppuVar10 = (undefined8 ******)*param_4;
  local_1e0 = (undefined8 ******)*param_5;
  local_1d8 = ppppppuVar10;
  pcStack_1d0 = param_6;
  if (ppppppuVar10 == local_1e0) {
    local_a8 = (undefined8 ******)0x0;
    local_1b0[0] = (undefined8 *******)0x0;
    if (ppppppuVar10 != (undefined8 ******)0x0) {
      do {
        if ((undefined8 ******)*param_5 <= local_1b0[0]) goto LAB_0048fd34;
        lVar9 = *(long *)(param_5[1] + (long)local_1b0[0] * 8);
        if (-1 < lVar9) {
          if ((undefined8 ******)*param_4 <= local_1b0[0]) goto LAB_0048fd34;
          if (*(long *)(param_4[1] + (long)local_1b0[0] * 8) != lVar9) {
            uVar12 = 6;
            if (((ulong)local_a8 & 1) != 0) {
              uVar12 = local_98;
            }
            if ((ulong)local_a8 >> 1 == uVar12) {
                    /* try { // try from 0048f9c8 to 0048f9d3 has its CatchHandler @ 0048fd38 */
              FUN_004a3618(&local_a8,local_1b0);
            }
            else {
              pppppppuVar2 = &local_a0;
              if (((ulong)local_a8 & 1) != 0) {
                pppppppuVar2 = local_a0;
              }
              pppppppuVar2[(ulong)local_a8 >> 1] = local_1b0[0];
              local_a8 = (undefined8 ******)((long)local_a8 + 2);
            }
          }
        }
        puVar5 = PTR_DAT_007a1e40;
        local_1b0[0] = (undefined8 *******)((long)local_1b0[0] + 1);
      } while (local_1b0[0] < ppppppuVar10);
      if ((undefined8 ******)0x1 < local_a8) {
        local_110 = 0;
        local_1b0[0] = *(undefined8 ********)(PTR_PTR_007a1e48 + 8);
        puVar1 = PTR_DAT_007a1e40 + 0x40;
        local_140[0] = puVar1;
        *(undefined8 *)((long)local_1b0 + (long)local_1b0[0][-3]) =
             *(undefined8 *)(PTR_PTR_007a1e48 + 0x10);
        ppppuVar8 = local_1b0[0][-3];
                    /* try { // try from 0048faac to 0048fabb has its CatchHandler @ 0048fd7c */
        FUN_00715fc0((long)local_1b0 + (long)ppppuVar8,local_1b0 + 1);
        local_1b0[0] = (undefined8 *******)(puVar5 + 0x18);
        *(undefined8 *)((long)&uStack_128 + (long)ppppuVar8) = 0;
        *(undefined4 *)((long)auStack_120 + (long)ppppuVar8) = 0xffffffff;
                    /* try { // try from 0048fad4 to 0048fadf has its CatchHandler @ 0048fd60 */
        local_140[0] = puVar1;
        FUN_007160dc(local_1b0 + 1);
        local_1b0[1] = (undefined8 *******)(PTR_DAT_007a10f8 + 0x10);
        uStack_160 = 0;
        local_168 = 0;
        uStack_150 = 0;
        local_158 = (void *)0x0;
        local_148 = 0x10;
                    /* try { // try from 0048fb0c to 0048fb77 has its CatchHandler @ 0048fda8 */
        uVar6 = FUN_00303e0c(local_1b0,"Got invalid dimensions for ",0x1b);
        sVar7 = strlen(param_6);
        uVar6 = FUN_00303e0c(uVar6,param_6,sVar7);
        uVar6 = FUN_00303e0c(uVar6,&DAT_001f2fbc,2);
        uVar12 = *(ulong *)(param_3 + 8);
        pbVar3 = *(byte **)(param_3 + 0x10);
        if ((*param_3 & 1) == 0) {
          pbVar3 = param_3 + 1;
          uVar12 = (ulong)(*param_3 >> 1);
        }
        uVar6 = FUN_00303e0c(uVar6,pbVar3,uVar12);
        FUN_00303e0c(uVar6," for the following indices\n",0x1b);
        if ((undefined8 ******)0x1 < local_a8) {
          uVar11 = (ulong)local_a8 >> 1;
          uVar12 = 0;
          do {
            pppppppuVar2 = &local_a0;
            if (((ulong)local_a8 & 1) != 0) {
              pppppppuVar2 = local_a0;
            }
            ppppppuVar10 = pppppppuVar2[uVar12];
                    /* try { // try from 0048fbc4 to 0048fc2f has its CatchHandler @ 0048fdac */
            uVar6 = FUN_00303e0c(local_1b0," index: ",8);
            uVar6 = FUN_007176ec(uVar6,ppppppuVar10);
            uVar6 = FUN_00303e0c(uVar6," Got: ",6);
            if ((undefined8 ******)*param_4 <= ppppppuVar10) {
LAB_0048fd34:
                    /* WARNING: Subroutine does not return */
              FUN_004839bc();
            }
            uVar6 = FUN_0071755c(uVar6,*(undefined8 *)(param_4[1] + (long)ppppppuVar10 * 8));
            uVar6 = FUN_00303e0c(uVar6," Expected: ",0xb);
            if ((undefined8 ******)*param_5 <= ppppppuVar10) goto LAB_0048fd34;
            uVar6 = FUN_0071755c(uVar6,*(undefined8 *)(param_5[1] + (long)ppppppuVar10 * 8));
            FUN_00303e0c(uVar6,&DAT_001e2980,1);
            uVar12 = uVar12 + 1;
          } while (uVar11 != uVar12);
        }
                    /* try { // try from 0048fc3c to 0048fc4f has its CatchHandler @ 0048fda8 */
        FUN_00303e0c(local_1b0," Please fix either the inputs/outputs or the model.",0x33);
                    /* try { // try from 0048fc50 to 0048fc63 has its CatchHandler @ 0048fd5c */
        FUN_00718470(local_1f8,local_1b0 + 1);
                    /* try { // try from 0048fc68 to 0048fc77 has its CatchHandler @ 0048fd44 */
        FUN_0063aa48(param_1,2,2,local_1f8);
        puVar5 = PTR_PTR_007a1e48;
        if (((ulong)local_1f8[0] & 1) != 0) {
          free(local_1e8);
        }
        local_1b0[0] = *(undefined8 ********)puVar5;
        *(undefined8 *)((long)local_1b0 + (long)local_1b0[0][-3]) = *(undefined8 *)(puVar5 + 0x18);
        local_1b0[1] = (undefined8 *******)(PTR_DAT_007a10f8 + 0x10);
        if ((local_168 & 1) != 0) {
          free(local_158);
        }
        FUN_00716098(local_1b0 + 1);
        FUN_00716ee4(local_1b0,puVar5 + 8);
        thunk_FUN_00715e00(local_140);
        pppppppuVar2 = (undefined8 *******)local_a8;
        goto joined_r0x0048fa58;
      }
    }
    *param_1 = 0;
    pppppppuVar2 = (undefined8 *******)local_a8;
  }
  else {
    local_a8 = (undefined8 ******)0x1cea58;
    local_1f8[0] = &DAT_001f2fbc;
    local_1c0 = " Expected: ";
    pcStack_1b8 = " Got: ";
    local_1c8 = " Please fix either the inputs/outputs or the model.";
    FUN_004a32d8(local_1b0,&local_a8,&pcStack_1d0,local_1f8,param_3,&pcStack_1b8,&local_1d8,
                 &local_1c0,&local_1e0,&local_1c8);
                    /* try { // try from 0048fa40 to 0048fa53 has its CatchHandler @ 0048fd90 */
    FUN_0063aa48(param_1,2,2,local_1b0);
    local_a0 = local_1b0[2];
    pppppppuVar2 = local_1b0[0];
  }
joined_r0x0048fa58:
  if (((ulong)pppppppuVar2 & 1) != 0) {
    free(local_a0);
  }
  if (*(long *)(lVar4 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0048fde8  FUN_0048fde8 =====

void FUN_0048fde8(long *param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                 ulong *param_7,byte param_8)

{
  size_t __n;
  ulong uVar1;
  byte *pbVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  long lVar6;
  undefined1 uVar7;
  void *pvVar8;
  void *pvVar9;
  bool bVar10;
  int iVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined8 *puVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  long *plVar23;
  byte *pbVar24;
  long *plVar25;
  ulong uVar26;
  undefined8 uVar27;
  long local_140;
  long lStack_138;
  char *local_130;
  char *local_128;
  char *local_120 [3];
  char *local_108 [3];
  void *local_f0;
  undefined1 local_e2;
  void *local_e0;
  char *local_a0;
  char *local_98;
  long local_90;
  
  lVar6 = tpidr_el0;
  local_90 = *(long *)(lVar6 + 0x28);
  if (param_8 < 2) {
    local_128 = "input";
    if (param_8 != 0) {
      local_128 = "output";
    }
    local_130 = "feed";
    if (param_8 != 0) {
      local_130 = "fetch";
    }
    if (param_3 == param_5) {
      if (param_3 != 0) {
        lVar19 = 0;
        puVar16 = (undefined8 *)((ulong)&local_f0 | 1);
        puVar12 = PTR_LOOP_007a1f58;
code_r0x0048fec0:
        pbVar24 = (byte *)(param_4 + lVar19 * 0x18);
        Hint_Prefetch(*param_7,0,2,0);
        uVar17 = *(ulong *)(pbVar24 + 8);
        pbVar2 = *(byte **)(pbVar24 + 0x10);
        if ((*pbVar24 & 1) == 0) {
          pbVar2 = pbVar24 + 1;
          uVar17 = (ulong)(*pbVar24 >> 1);
        }
        lVar13 = FUN_0049e0f0(puVar12,pbVar2,uVar17);
        uVar21 = param_7[2];
        pbVar2 = *(byte **)(pbVar24 + 0x10);
        bVar10 = (*pbVar24 & 1) == 0;
        lVar22 = 0;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = lVar13 + uVar17;
        uVar1 = *param_7;
        uVar3 = param_7[1];
        if (bVar10) {
          pbVar2 = pbVar24 + 1;
        }
        uVar17 = SUB168(auVar5 * ZEXT816(0x9ddfea08eb382d69),8) ^
                 (lVar13 + uVar17) * -0x622015f714c7d297;
        uVar7 = (undefined1)uVar17;
        uVar26 = CONCAT17(uVar7,CONCAT16(uVar7,CONCAT15(uVar7,CONCAT14(uVar7,CONCAT13(uVar7,CONCAT12
                                                  (uVar7,CONCAT11(uVar7,uVar7))))))) &
                 0x7f7f7f7f7f7f7f7f;
        __n = (ulong)(*pbVar24 >> 1);
        if (!bVar10) {
          __n = *(size_t *)(pbVar24 + 8);
        }
        uVar20 = (uVar17 >> 7 ^ uVar1 >> 0xc) & uVar21;
        uVar27 = *(undefined8 *)(uVar1 + uVar20);
        uVar17 = NEON_cmeq(uVar27,uVar26,1);
        while( true ) {
          while (uVar17 == 0) {
            lVar13 = NEON_cmeq(uVar27,0x8080808080808080,1);
            if (lVar13 != 0) goto LAB_00490524;
            lVar22 = lVar22 + 8;
            uVar20 = lVar22 + uVar20 & uVar21;
            uVar27 = *(undefined8 *)(uVar1 + uVar20);
            uVar17 = NEON_cmeq(uVar27,uVar26,1);
          }
          uVar4 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
          uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
          uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
          uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
          puVar18 = (undefined8 *)
                    (uVar3 + (uVar20 + ((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3) & uVar21
                             ) * 0x68);
          if ((puVar18[1] == __n) &&
             (iVar11 = memcmp((void *)*puVar18,pbVar2,__n), puVar12 = PTR_LOOP_007a1f58, iVar11 == 0
             )) break;
          uVar17 = (uVar17 & 0x8080808080808080) - 1 & uVar17 & 0x8080808080808080;
        }
        if (uVar1 == 0) {
LAB_00490524:
          local_108[0] = "Invalid ";
          local_120[0] = " name: ";
          FUN_004a3a6c(&local_f0,local_108,&local_128,local_120,pbVar24);
                    /* try { // try from 00490554 to 00490567 has its CatchHandler @ 0049097c */
          FUN_0063aa48(param_1,2,2,&local_f0);
          goto joined_r0x0049051c;
        }
        plVar23 = (long *)(param_6 + lVar19 * 0x18);
        if (param_8 == 0) {
          lVar22 = plVar23[2];
          plVar25 = (long *)puVar18[3];
          if (lVar22 == 0) {
LAB_00490194:
            local_f0 = (void *)((ulong)local_f0 & 0xffffffffffff0000);
                    /* try { // try from 0049019c to 004901ab has its CatchHandler @ 00490930 */
            FUN_00490ba4(param_1,lVar22,plVar25,&local_f0,local_128);
            if (((ulong)local_f0 & 1) != 0) {
              free(local_e0);
            }
            if (*param_1 != 0) {
                    /* try { // try from 004905bc to 004905db has its CatchHandler @ 00490910 */
              FUN_00645c3c(*(undefined4 *)(param_2 + 0x674),param_1,
                           "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/inference_session.cc"
                           ,"ValidateInputsOutputs",0x8dc);
              goto LAB_0049057c;
            }
          }
          else {
            iVar11 = *(int *)(lVar22 + 8);
            if (iVar11 != 4) goto LAB_00490028;
LAB_004900b4:
            lVar22 = FUN_0047aa18(plVar23);
            if ((int)plVar25[1] != 4) {
              local_108[0] = (char *)CONCAT44(local_108[0]._4_4_,0xffffffff);
              uVar17 = (ulong)(*pbVar24 >> 1);
              pbVar2 = pbVar24 + 1;
              if ((*pbVar24 & 1) != 0) {
                uVar17 = *(ulong *)(pbVar24 + 8);
                pbVar2 = *(byte **)(pbVar24 + 0x10);
              }
              FUN_0049e62c(&local_f0,*(long *)(param_2 + 0x470) + 0x208,pbVar2,uVar17,local_108);
              pvVar8 = local_f0;
              local_f0 = (void *)0x0;
              if (pvVar8 == (void *)0x0) {
                uVar17 = FUN_0059bc24(*(undefined8 *)(param_2 + 0x470),
                                      (ulong)local_108[0] & 0xffffffff);
                if (((uVar17 & 1) != 0) && ((int)plVar25[1] == 2)) {
                  uVar15 = (**(code **)(*plVar25 + 0x28))(plVar25);
                  local_f0 = (void *)CONCAT71(local_f0._1_7_,0x1a);
                  uVar27 = CONCAT53(s_sparse_tensor_001ebabf._8_5_,s_sparse_tensor_001ebabf._5_3_);
                  uVar14 = *(undefined8 *)(lVar22 + 0x48);
                  local_e2 = 0;
                  *puVar16 = CONCAT35(s_sparse_tensor_001ebabf._5_3_,s_sparse_tensor_001ebabf._0_5_)
                  ;
                  *(undefined8 *)((long)puVar16 + 5) = uVar27;
                    /* try { // try from 004902c8 to 004902d3 has its CatchHandler @ 00490920 */
                  FUN_00490ba4(param_1,uVar14,uVar15,&local_f0,local_128);
                  if (((ulong)local_f0 & 1) != 0) {
                    free(local_e0);
                  }
                  if (*param_1 != 0) {
                    /* try { // try from 004907a8 to 004907c7 has its CatchHandler @ 004908f4 */
                    FUN_00645c3c(*(undefined4 *)(param_2 + 0x674),param_1,
                                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/inference_session.cc"
                                 ,"ValidateInputsOutputs",0x8b5);
                    goto LAB_0049057c;
                  }
                  if (*(char *)(puVar18 + 0xc) != '\0') {
                    lVar13 = puVar18[4];
                    if ((lVar13 == -1) || ((lVar13 != 0 && (puVar18[5] == 0)))) goto LAB_00490850;
                    if (lVar13 == 0) goto LAB_00490480;
                    FUN_0048f8d0(param_1,puVar12,pbVar24,lVar22 + 8,puVar18 + 4,local_128);
                    if (*param_1 != 0) {
                    /* try { // try from 0049082c to 0049084b has its CatchHandler @ 004908e8 */
                      FUN_00645c3c(*(undefined4 *)(param_2 + 0x674),param_1,
                                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/inference_session.cc"
                                   ,"ValidateInputsOutputs",0x8ba);
                      goto LAB_0049057c;
                    }
                    FUN_00474684(param_1);
                  }
                  goto LAB_00490480;
                }
              }
              else {
                if ((*(byte *)((long)pvVar8 + 8) & 1) != 0) {
                  free(*(void **)((long)pvVar8 + 0x18));
                }
                free(pvVar8);
              }
              local_108[0] = " with name: \'";
              local_a0 = (char *)CONCAT44(local_a0._4_4_,(int)plVar25[1]);
              local_98 = " but received a sparse tensor";
              local_120[0] = "\' expected to be of type: ";
              FUN_004a3cbc(&local_f0,&local_128,local_108,pbVar24,local_120,&local_a0,&local_98);
                    /* try { // try from 0049075c to 0049076f has its CatchHandler @ 0049090c */
              FUN_0063aa48(param_1,2,2,&local_f0);
              goto joined_r0x0049051c;
            }
            uVar15 = (**(code **)(*plVar25 + 0x28))(plVar25);
            local_f0 = (void *)CONCAT71(local_f0._1_7_,0x1a);
            uVar27 = CONCAT53(s_sparse_tensor_001ebabf._8_5_,s_sparse_tensor_001ebabf._5_3_);
            uVar14 = *(undefined8 *)(lVar22 + 0x48);
            local_e2 = 0;
            *puVar16 = CONCAT35(s_sparse_tensor_001ebabf._5_3_,s_sparse_tensor_001ebabf._0_5_);
            *(undefined8 *)((long)puVar16 + 5) = uVar27;
                    /* try { // try from 00490110 to 0049011b has its CatchHandler @ 00490924 */
            FUN_00490ba4(param_1,uVar14,uVar15,&local_f0,local_128);
            if (((ulong)local_f0 & 1) != 0) {
              free(local_e0);
            }
            if (*param_1 != 0) {
                    /* try { // try from 0049077c to 0049079b has its CatchHandler @ 004908f8 */
              FUN_00645c3c(*(undefined4 *)(param_2 + 0x674),param_1,
                           "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/inference_session.cc"
                           ,"ValidateInputsOutputs",0x8a9);
              goto LAB_0049057c;
            }
            if (*(char *)(puVar18 + 0xc) != '\0') {
              lVar13 = puVar18[4];
              if ((lVar13 == -1) || ((lVar13 != 0 && (puVar18[5] == 0)))) goto LAB_00490850;
              if ((lVar13 != 0) &&
                 (FUN_0048f8d0(param_1,puVar12,pbVar24,lVar22 + 8,puVar18 + 4,local_128),
                 *param_1 != 0)) {
                    /* try { // try from 00490800 to 0049081f has its CatchHandler @ 004908ec */
                FUN_00645c3c(*(undefined4 *)(param_2 + 0x674),param_1,
                             "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/inference_session.cc"
                             ,"ValidateInputsOutputs",0x8ae);
                goto LAB_0049057c;
              }
            }
          }
        }
        else if ((*plVar23 != 0) && (lVar22 = plVar23[2], lVar22 != 0)) {
          plVar25 = (long *)puVar18[3];
          iVar11 = *(int *)(lVar22 + 8);
          if (iVar11 == 4) goto LAB_004900b4;
LAB_00490028:
          if (iVar11 == 3) {
            iVar11 = (int)plVar25[1];
            if (iVar11 != 3) {
              if (iVar11 == 5) {
                lVar22 = (**(code **)(*plVar25 + 0x28))(plVar25);
                iVar11 = (int)plVar25[1];
                if (*(int *)(lVar22 + 8) == 3) {
                  if (iVar11 == 3) goto LAB_0049020c;
                  uVar27 = FUN_00490ce4(plVar25);
                  goto LAB_00490358;
                }
              }
              local_a0 = (char *)CONCAT44(local_a0._4_4_,iVar11);
              local_108[0] = " with name: \'";
              local_120[0] = "\' expected to be of type: ";
              local_98 = " but received a tensor sequence";
              FUN_004a3cbc(&local_f0,&local_128,local_108,pbVar24,local_120,&local_a0,&local_98);
                    /* try { // try from 00490628 to 0049063b has its CatchHandler @ 00490908 */
              FUN_0063aa48(param_1,2,2,&local_f0);
              goto joined_r0x0049051c;
            }
LAB_0049020c:
            uVar27 = (**(code **)(*plVar25 + 0x28))(plVar25);
LAB_00490358:
            puVar18 = (undefined8 *)FUN_0048537c(plVar23);
            pvVar8 = local_f0;
            uVar15 = *puVar18;
            local_f0 = (void *)CONCAT71(local_f0._1_7_,6);
            pvVar9 = local_f0;
            local_f0._5_3_ = SUB83(pvVar8,5);
            local_f0._0_5_ = (uint5)(uint)pvVar9;
            *(undefined2 *)puVar16 = 0x6573;
            *(undefined1 *)((long)puVar16 + 2) = 0x71;
                    /* try { // try from 0049038c to 0049039b has its CatchHandler @ 0049092c */
            FUN_00490ba4(param_1,uVar15,uVar27,&local_f0,local_128);
            if (((ulong)local_f0 & 1) != 0) {
              free(local_e0);
            }
            if (*param_1 != 0) {
                    /* try { // try from 004906d4 to 004906f3 has its CatchHandler @ 004908fc */
              FUN_00645c3c(*(undefined4 *)(param_2 + 0x674),param_1,
                           "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/inference_session.cc"
                           ,"ValidateInputsOutputs",0x8d9);
              goto LAB_0049057c;
            }
          }
          else {
            if (iVar11 != 2) goto LAB_00490194;
            iVar11 = (int)plVar25[1];
            if (iVar11 != 2) {
              if (iVar11 == 5) {
                lVar22 = (**(code **)(*plVar25 + 0x28))(plVar25);
                iVar11 = (int)plVar25[1];
                if (*(int *)(lVar22 + 8) == 2) {
                  if (iVar11 == 2) goto LAB_00490074;
                  uVar27 = FUN_004909c8(plVar25);
                  goto LAB_004903c8;
                }
              }
              local_a0 = (char *)CONCAT44(local_a0._4_4_,iVar11);
              local_108[0] = " with name: \'";
              local_120[0] = "\' expected to be of type: ";
              local_98 = " but received a tensor";
              FUN_004a3cbc(&local_f0,&local_128,local_108,pbVar24,local_120,&local_a0,&local_98);
                    /* try { // try from 00490688 to 0049069b has its CatchHandler @ 00490904 */
              FUN_0063aa48(param_1,2,2,&local_f0);
              goto joined_r0x0049051c;
            }
LAB_00490074:
            uVar27 = (**(code **)(*plVar25 + 0x28))(plVar25);
LAB_004903c8:
            lVar22 = FUN_00483570(plVar23);
            uVar15 = *(undefined8 *)(lVar22 + 0x58);
            local_f0 = (void *)CONCAT71(local_f0._1_7_,0xc);
            local_f0 = (void *)((ulong)local_f0 & 0xffffffffffffff);
            *(undefined4 *)puVar16 = 0x736e6574;
            *(undefined2 *)((long)puVar16 + 4) = 0x726f;
                    /* try { // try from 00490404 to 00490413 has its CatchHandler @ 00490928 */
            FUN_00490ba4(param_1,uVar15,uVar27,&local_f0,local_128);
            if (((ulong)local_f0 & 1) != 0) {
              free(local_e0);
            }
            if (*param_1 != 0) {
                    /* try { // try from 004906a8 to 004906c7 has its CatchHandler @ 00490900 */
              FUN_00645c3c(*(undefined4 *)(param_2 + 0x674),param_1,
                           "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/inference_session.cc"
                           ,"ValidateInputsOutputs",0x89a);
              goto LAB_0049057c;
            }
            if (*(char *)(puVar18 + 0xc) != '\0') {
              lVar13 = puVar18[4];
              if ((lVar13 == -1) || ((lVar13 != 0 && (puVar18[5] == 0)))) {
LAB_00490850:
                    /* WARNING: Subroutine does not return */
                FUN_004839bc();
              }
              if ((lVar13 != 0) &&
                 (FUN_0048f8d0(param_1,puVar12,pbVar24,lVar22 + 0x18,puVar18 + 4,local_128),
                 *param_1 != 0)) {
                    /* try { // try from 004907d4 to 004907f3 has its CatchHandler @ 004908f0 */
                FUN_00645c3c(*(undefined4 *)(param_2 + 0x674),param_1,
                             "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/inference_session.cc"
                             ,"ValidateInputsOutputs",0x8a0);
                goto LAB_0049057c;
              }
            }
          }
        }
LAB_00490480:
        lVar19 = lVar19 + 1;
        if (lVar19 == param_3) goto LAB_004904a0;
        goto code_r0x0048fec0;
      }
LAB_004904a0:
      *param_1 = 0;
    }
    else {
      local_108[0] = " names has ";
      local_120[0] = " elements, but ";
      local_a0 = " elements.";
      local_98 = " has ";
      local_140 = param_5;
      lStack_138 = param_3;
      FUN_004a3734(&local_f0,&local_130,local_108,&lStack_138,local_120,&local_130,&local_98,
                   &local_140,&local_a0);
                    /* try { // try from 00490504 to 00490517 has its CatchHandler @ 00490980 */
      FUN_0063aa48(param_1,2,2,&local_f0);
joined_r0x0049051c:
      if (((ulong)local_f0 & 1) != 0) {
        free(local_e0);
      }
    }
LAB_0049057c:
    if (*(long *)(lVar6 + 0x28) == local_90) {
      return;
    }
  }
  else {
    uVar27 = FUN_00753a74(0x88);
                    /* try { // try from 00490864 to 0049086b has its CatchHandler @ 0049099c */
    FUN_00645c30(local_108);
                    /* try { // try from 0049086c to 0049088b has its CatchHandler @ 0049096c */
    FUN_0047488c(&local_f0,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/inference_session.cc"
                 ,0x85c,
                 "common::Status onnxruntime::InferenceSession::ValidateInputsOutputs(gsl::span<const std::string>, gsl::span<const OrtValue>, const InputOutputDefMetaMap &, ArgType) const"
                 ,local_108);
                    /* try { // try from 0049088c to 0049089b has its CatchHandler @ 0049094c */
    FUN_00479eac(local_120,"Valid values kInput, kOutput");
                    /* try { // try from 004908a0 to 004908e7 has its CatchHandler @ 00490934 */
    FUN_00474a40(uVar27,&local_f0,"arg_type == ArgType::kInput || arg_type == ArgType::kOutput",
                 local_120);
    if (*(long *)(lVar6 + 0x28) == local_90) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar27,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004909c8  FUN_004909c8 =====

void FUN_004909c8(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [80];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((int)param_1[1] == 5) {
    lVar2 = (**(code **)(*param_1 + 0x28))();
    if (*(int *)(lVar2 + 8) == 2) {
      if ((int)param_1[1] != 5) {
        param_1 = (long *)0x0;
      }
      plVar3 = (long *)(**(code **)(*param_1 + 0x28))();
      if ((int)plVar3[1] != 2) {
        plVar3 = (long *)0x0;
      }
      if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Could not recover jumptable at 0x00490a5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x28))();
        return;
      }
      goto LAB_00490ba0;
    }
  }
  uVar4 = FUN_00753a74(0x88);
                    /* try { // try from 00490a70 to 00490a77 has its CatchHandler @ 00490b80 */
  FUN_00645c30(auStack_a0);
                    /* try { // try from 00490a78 to 00490a97 has its CatchHandler @ 00490b70 */
  FUN_0047488c(auStack_88,
               "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/mldata_type_utils.h"
               ,0x16,"MLDataType onnxruntime::utils::GetElementTypeFromOptionalTensor(MLDataType)",
               auStack_a0);
                    /* try { // try from 00490a98 to 00490aa7 has its CatchHandler @ 00490b50 */
  FUN_00479eac(auStack_b8,"Provided type is not an optional tensor");
                    /* try { // try from 00490aac to 00490af3 has its CatchHandler @ 00490af4 */
  FUN_00474a40(uVar4,auStack_88,"IsOptionalTensor(type)",auStack_b8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(uVar4,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
  }
LAB_00490ba0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00490ba4  FUN_00490ba4 =====

void FUN_00490ba4(undefined8 *param_1,long param_2,long param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 local_98;
  undefined8 local_90;
  byte local_88 [16];
  void *local_78;
  undefined8 local_70;
  undefined *local_68;
  undefined *puStack_60;
  char *local_58;
  undefined *puStack_50;
  char *local_48;
  char *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_70 = param_5;
  if (param_2 == param_3) {
    *param_1 = 0;
  }
  else {
    local_90 = FUN_00576cac(param_2);
    local_98 = FUN_00576cac(param_3);
    local_48 = " data type. Actual: (";
    pcStack_40 = "Unexpected ";
    local_58 = ")) , expected: (";
    puStack_50 = &DAT_001d8d1c;
    local_68 = &DAT_001e16f4;
    puStack_60 = &DAT_001d8d1c;
    FUN_0049e214(local_88,&pcStack_40,&local_70,&local_48,param_4,&puStack_50,&local_90,&local_58,
                 param_4,&puStack_60,&local_98,&local_68);
                    /* try { // try from 00490c64 to 00490c77 has its CatchHandler @ 00490cb4 */
    FUN_0063aa48(param_1,2,2,local_88);
    if ((local_88[0] & 1) != 0) {
      free(local_78);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00490ce4  FUN_00490ce4 =====

void FUN_00490ce4(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [80];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((int)param_1[1] == 5) {
    lVar2 = (**(code **)(*param_1 + 0x28))();
    if (*(int *)(lVar2 + 8) == 3) {
      if ((int)param_1[1] != 5) {
        param_1 = (long *)0x0;
      }
      plVar3 = (long *)(**(code **)(*param_1 + 0x28))();
      if ((int)plVar3[1] != 3) {
        plVar3 = (long *)0x0;
      }
      if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Could not recover jumptable at 0x00490d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x28))();
        return;
      }
      goto LAB_00490ebc;
    }
  }
  uVar4 = FUN_00753a74(0x88);
                    /* try { // try from 00490d8c to 00490d93 has its CatchHandler @ 00490e9c */
  FUN_00645c30(auStack_a0);
                    /* try { // try from 00490d94 to 00490db3 has its CatchHandler @ 00490e8c */
  FUN_0047488c(auStack_88,
               "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/mldata_type_utils.h"
               ,0x25,
               "MLDataType onnxruntime::utils::GetElementTypeFromOptionalSeqTensor(MLDataType)",
               auStack_a0);
                    /* try { // try from 00490db4 to 00490dc3 has its CatchHandler @ 00490e6c */
  FUN_00479eac(auStack_b8,"Provided type is not an optional sequence tensor");
                    /* try { // try from 00490dc8 to 00490e0f has its CatchHandler @ 00490e10 */
  FUN_00474a40(uVar4,auStack_88,"IsOptionalSeqTensor(type)",auStack_b8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(uVar4,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
  }
LAB_00490ebc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00490ec0  FUN_00490ec0 =====

void FUN_00490ec0(undefined8 *param_1,long param_2,long param_3,byte *param_4,long *param_5)

{
  size_t __n;
  byte *pbVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  long lVar4;
  undefined1 uVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  byte *pbVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  byte local_a8 [16];
  void *local_98;
  char *local_90;
  long local_88;
  
  lVar4 = tpidr_el0;
  local_88 = *(long *)(lVar4 + 0x28);
  if (param_3 == 0) {
    if (*(long *)(lVar4 + 0x28) == local_88) {
      FUN_0063acd8(param_1,2,2,"At least one output should be requested.");
      return;
    }
    goto LAB_004911c4;
  }
  if (param_5 != (long *)0x0) {
    lVar12 = *param_5;
    lVar8 = param_5[1];
    if ((lVar8 - lVar12 == -0x18) || ((lVar12 == 0 && (lVar8 != 0)))) goto LAB_00491194;
    if (lVar8 != lVar12) {
      if (*(long *)(lVar4 + 0x28) == local_88) {
        FUN_0048fde8(param_1,param_2,param_3,param_4,(lVar8 - lVar12 >> 3) * -0x5555555555555555,
                     lVar12,param_2 + 0x620,1);
        return;
      }
      goto LAB_004911c4;
    }
  }
  if (param_4 != (byte *)0x0) {
    pbVar9 = param_4 + param_3 * 0x18;
    while (param_4 < pbVar9) {
      Hint_Prefetch(*(undefined8 *)(param_2 + 0x620),0,2,0);
      uVar10 = *(ulong *)(param_4 + 8);
      pbVar1 = *(byte **)(param_4 + 0x10);
      if ((*param_4 & 1) == 0) {
        pbVar1 = param_4 + 1;
        uVar10 = (ulong)(*param_4 >> 1);
      }
      lVar8 = FUN_0049e0f0(PTR_LOOP_007a1f58,pbVar1,uVar10);
      uVar16 = *(ulong *)(param_2 + 0x620);
      pbVar1 = *(byte **)(param_4 + 0x10);
      uVar15 = *(ulong *)(param_2 + 0x630);
      lVar14 = *(long *)(param_2 + 0x628);
      lVar12 = 0;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = lVar8 + uVar10;
      bVar6 = (*param_4 & 1) == 0;
      if (bVar6) {
        pbVar1 = param_4 + 1;
      }
      uVar10 = SUB168(auVar3 * ZEXT816(0x9ddfea08eb382d69),8) ^
               (lVar8 + uVar10) * -0x622015f714c7d297;
      uVar5 = (undefined1)uVar10;
      uVar17 = CONCAT17(uVar5,CONCAT16(uVar5,CONCAT15(uVar5,CONCAT14(uVar5,CONCAT13(uVar5,CONCAT12(
                                                  uVar5,CONCAT11(uVar5,uVar5))))))) &
               0x7f7f7f7f7f7f7f7f;
      __n = (ulong)(*param_4 >> 1);
      if (!bVar6) {
        __n = *(size_t *)(param_4 + 8);
      }
      uVar13 = (uVar10 >> 7 ^ uVar16 >> 0xc) & uVar15;
      uVar18 = *(undefined8 *)(uVar16 + uVar13);
      uVar10 = NEON_cmeq(uVar18,uVar17,1);
      while( true ) {
        while (uVar10 == 0) {
          lVar8 = NEON_cmeq(uVar18,0x8080808080808080,1);
          if (lVar8 != 0) goto LAB_0049111c;
          lVar12 = lVar12 + 8;
          uVar13 = lVar12 + uVar13 & uVar15;
          uVar18 = *(undefined8 *)(uVar16 + uVar13);
          uVar10 = NEON_cmeq(uVar18,uVar17,1);
        }
        uVar2 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
        uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
        uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
        uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
        puVar11 = (undefined8 *)
                  (lVar14 + (uVar13 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) & uVar15)
                            * 0x68);
        if ((puVar11[1] == __n) && (iVar7 = memcmp((void *)*puVar11,pbVar1,__n), iVar7 == 0)) break;
        uVar10 = (uVar10 & 0x8080808080808080) - 1 & uVar10 & 0x8080808080808080;
      }
      if (uVar16 == 0) {
LAB_0049111c:
        local_90 = "Invalid output name:";
        FUN_004a0980(local_a8,&local_90,param_4);
                    /* try { // try from 00491138 to 0049114b has its CatchHandler @ 00491198 */
        FUN_0063aa48(param_1,2,2,local_a8);
        if ((local_a8[0] & 1) != 0) {
          free(local_98);
        }
        goto LAB_0049115c;
      }
      param_4 = param_4 + 0x18;
      if (param_4 == pbVar9) goto code_r0x004910cc;
    }
  }
LAB_00491194:
                    /* WARNING: Subroutine does not return */
  FUN_004839bc();
code_r0x004910cc:
  *param_1 = 0;
LAB_0049115c:
  if (*(long *)(lVar4 + 0x28) == local_88) {
    return;
  }
LAB_004911c4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004911c8  FUN_004911c8 =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004911c8(ulong *param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 param_7,long param_8,undefined8 param_9,
                 undefined8 param_10,long *param_11)

{
  undefined8 *puVar1;
  bool bVar2;
  char *pcVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *pvVar9;
  byte *pbVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  byte *pbVar15;
  undefined1 uVar16;
  int iVar17;
  long *plVar18;
  long *plVar19;
  ulong uVar20;
  undefined8 uVar21;
  long lVar22;
  void *pvVar23;
  ulong uVar24;
  undefined8 ******ppppppuVar25;
  long lVar26;
  long lVar27;
  undefined8 *puVar28;
  undefined8 *******pppppppuVar29;
  ushort local_540;
  undefined1 local_53e;
  void *local_530;
  void *local_528;
  void *local_520;
  undefined8 uStack_518;
  char *local_510;
  byte local_500;
  void *local_4f0;
  byte *local_4e8;
  byte *local_4e0;
  byte local_4d0 [8];
  ulong local_4c8;
  void *local_4c0;
  long local_4b8;
  long local_4b0;
  long local_4a8;
  byte local_4a0;
  undefined1 auStack_49f [7];
  ulong local_498;
  undefined1 *local_490;
  int local_484;
  void *local_480;
  long local_478;
  ulong local_470;
  char local_468;
  byte local_460;
  undefined7 uStack_45f;
  char cStack_458;
  undefined2 uStack_457;
  undefined2 uStack_455;
  undefined1 uStack_453;
  undefined2 uStack_452;
  char *local_450;
  undefined1 auStack_3f0 [264];
  char *local_2e8;
  undefined8 local_2e0;
  void *local_2d8;
  byte local_2c8;
  void *local_2b8;
  byte *local_2b0;
  byte *local_2a8;
  long local_1e0;
  long local_1c8 [7];
  long local_190 [7];
  byte local_158;
  void *local_150;
  byte local_120;
  void *local_118;
  ulong local_e8;
  undefined8 *******local_e0 [6];
  ulong local_b0;
  undefined8 *******local_a8;
  ulong local_a0;
  long local_78;
  
  lVar6 = tpidr_el0;
  local_78 = *(long *)(lVar6 + 0x28);
  local_478 = 0;
  if (*(char *)(param_2 + 0x2b0) != '\0') {
    local_478 = FUN_006390d0(param_2 + 0x2a0);
  }
  local_480 = (void *)0x0;
                    /* try { // try from 00491230 to 00491237 has its CatchHandler @ 004923f0 */
  plVar18 = (long *)FUN_00641af0();
  local_460 = 0x18;
  local_484 = 0;
  uStack_45f = (undefined7)s_gpu_graph_id_001d6b6c._0_8_;
  cStack_458 = SUB81(s_gpu_graph_id_001d6b6c._0_8_,7);
  uStack_457 = 0x5f68;
  uStack_455 = 0x6469;
  uStack_453 = 0;
  local_2e8 = (char *)((ulong)local_2e8 & 0xffffffffffff0000);
  FUN_00569aa4(&local_4a0,param_3 + 0x28,&local_460,&local_2e8);
  if (((ulong)local_2e8 & 1) == 0) {
    if ((local_460 & 1) == 0) goto LAB_00491290;
LAB_004912bc:
    free(local_450);
    uVar20 = (ulong)(local_4a0 >> 1);
    if ((local_4a0 & 1) != 0) {
      uVar20 = local_498;
    }
    if (uVar20 != 0) goto LAB_004912dc;
LAB_004912f8:
                    /* try { // try from 0049131c to 0049131f has its CatchHandler @ 00492320 */
    if (((*(char *)(param_2 + 0x4e0) == '\0') || (*(char *)(param_2 + 0x4a8) == '\0')) ||
       ((plVar19 = *(long **)(param_2 + 0x7a0), plVar19 != (long *)0x0 &&
        (uVar20 = (**(code **)(*plVar19 + 0x68))(plVar19,local_484), (uVar20 & 1) != 0)))) {
      local_4a8 = param_2 + 0x658;
      local_4b8 = 0;
      local_4b0 = 0;
      FUN_00755bc0(1);
    }
    else {
      lVar22 = *(long *)(param_2 + 0x4b0);
      lVar26 = *(long *)(param_2 + 0x4b8);
      local_4a8 = param_2 + 0x658;
      local_4b8 = lVar22;
      local_4b0 = lVar26;
      iVar17 = FUN_00755bc0(1);
      if (iVar17 == 0) {
        if (lVar22 != 0) {
                    /* try { // try from 004913a4 to 004913b7 has its CatchHandler @ 004922d4 */
          FUN_0063c608(lVar22);
        }
        if (lVar26 != 0) {
          FUN_0063c608(lVar26);
        }
      }
    }
    plVar19 = *(long **)(param_2 + 0x7a0);
                    /* try { // try from 004913dc to 004913df has its CatchHandler @ 004923cc */
    if ((plVar19 == (long *)0x0) ||
       (uVar20 = (**(code **)(*plVar19 + 0x68))(plVar19,local_484),
       puVar14 = PTR_s_onnxruntime_007a9878, (uVar20 & 1) == 0)) {
      local_b0 = 0;
      uVar20 = *(long *)(param_2 + 0x40) - *(long *)(param_2 + 0x38) >> 4;
      if (6 < uVar20) {
        uVar24 = uVar20 >> 0x3d;
        if (uVar20 < 0xd) {
          uVar20 = 0xc;
        }
        if (uVar24 != 0) {
          if (*(long *)(lVar6 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00492190 to 00492193 has its CatchHandler @ 004923b0 */
            FUN_002f9ee0();
          }
          goto LAB_0049241c;
        }
                    /* try { // try from 00491538 to 0049153b has its CatchHandler @ 004923b0 */
        local_a8 = (undefined8 *******)FUN_00759c3c(uVar20 << 3);
        local_b0 = 1;
        local_a0 = uVar20;
      }
      puVar14 = PTR_s_onnxruntime_007a9878;
      local_e8 = 0;
      if ((*(byte *)(param_2 + 0x671) & 1) == 0) {
        lVar26 = *(long *)(param_2 + 8);
        if (*(int *)(lVar26 + 0x20) < 4) {
                    /* try { // try from 004915d8 to 004915f3 has its CatchHandler @ 004922c0 */
          FUN_0048a3f4(&local_2e8,
                       "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/inference_session.cc"
                       ,0x994,&DAT_001f1d64);
                    /* try { // try from 004915f4 to 00491613 has its CatchHandler @ 004922a0 */
          FUN_0048a554(&local_460,lVar26,3,puVar14,0,&local_2e8);
                    /* try { // try from 00491614 to 00491627 has its CatchHandler @ 00492280 */
          FUN_00303e0c(auStack_3f0,"Session was not initialized",0x1b);
          FUN_00637fac(&local_460);
          pbVar15 = local_2b0;
          if (local_2b0 != (byte *)0x0) {
            while (pbVar10 = local_2a8, pbVar10 != pbVar15) {
              local_2a8 = pbVar10 + -0x18;
              if ((*local_2a8 & 1) != 0) {
                free(*(void **)(pbVar10 + -8));
              }
            }
            local_2a8 = pbVar15;
            free(local_2b0);
          }
          if ((local_2c8 & 1) != 0) {
            free(local_2b8);
          }
          if (((ulong)local_2e8 & 1) != 0) {
            free(local_2d8);
          }
        }
                    /* try { // try from 00491840 to 00491857 has its CatchHandler @ 00492420 */
        FUN_0063acd8(param_1,2,1,"Session not initialized.");
      }
      else {
                    /* try { // try from 00491560 to 0049158f has its CatchHandler @ 00492420 */
        plVar19 = (long *)(**(code **)(*plVar18 + 200))();
        (**(code **)(*plVar19 + 0x58))();
        FUN_0048fde8(param_1,param_2,param_4,param_5,param_6,param_7,param_2 + 0x600,0);
        if (*param_1 == 0) {
                    /* try { // try from 00491674 to 0049168b has its CatchHandler @ 00492420 */
          FUN_00490ec0(param_1,param_2,param_8,param_9,param_10);
          if (*param_1 == 0) {
                    /* try { // try from 00491794 to 0049179b has its CatchHandler @ 00492254 */
            local_450 = (char *)FUN_00759c3c(0x28);
            uVar13 = _UNK_00200808;
            uVar12 = _DAT_00200800;
            uVar11 = s_memory_enable_memory_arena_shrin_001bd299._24_8_;
            uVar8 = s_memory_enable_memory_arena_shrin_001bd299._16_8_;
            uVar7 = s_memory_enable_memory_arena_shrin_001bd299._8_8_;
            uVar21 = s_memory_enable_memory_arena_shrin_001bd299._0_8_;
            local_450[0x20] = 'k';
            local_450[0x21] = 'a';
            local_450[0x22] = 'g';
            local_450[0x23] = 'e';
            *(undefined8 *)(local_450 + 8) = uVar7;
            *(undefined8 *)local_450 = uVar21;
            *(undefined8 *)(local_450 + 0x18) = uVar11;
            *(undefined8 *)(local_450 + 0x10) = uVar8;
            local_450[0x24] = '\0';
            cStack_458 = (char)uVar13;
            uStack_457 = (undefined2)((ulong)uVar13 >> 8);
            uStack_455 = (undefined2)((ulong)uVar13 >> 0x18);
            uStack_453 = (undefined1)((ulong)uVar13 >> 0x28);
            uStack_452 = (undefined2)((ulong)uVar13 >> 0x30);
            local_460 = (byte)uVar12;
            uStack_45f = (undefined7)((ulong)uVar12 >> 8);
            local_2e8 = (char *)((ulong)local_2e8 & 0xffffffffffff0000);
            FUN_00569aa4(local_4d0,param_3 + 0x28,&local_460,&local_2e8);
            if (((ulong)local_2e8 & 1) == 0) {
              if ((local_460 & 1) == 0) goto LAB_004917f4;
LAB_0049188c:
              free(local_450);
              uVar20 = (ulong)(local_4d0[0] >> 1);
              if ((local_4d0[0] & 1) != 0) {
                uVar20 = local_4c8;
              }
            }
            else {
              free(local_2d8);
              if ((local_460 & 1) != 0) goto LAB_0049188c;
LAB_004917f4:
              uVar20 = (ulong)(local_4d0[0] >> 1);
              if ((local_4d0[0] & 1) != 0) {
                uVar20 = local_4c8;
              }
            }
                    /* try { // try from 004918ac to 004918bf has its CatchHandler @ 0049223c */
            if ((uVar20 == 0) || (FUN_004927b4(param_1,param_2,local_4d0,&local_e8), *param_1 == 0))
            {
                    /* try { // try from 00491900 to 00491923 has its CatchHandler @ 00492238 */
              FUN_00492d00(local_1c8,param_4,param_5,param_8,param_9,
                           *(long *)(param_2 + 0x470) + 0x208);
                    /* try { // try from 00491924 to 0049192f has its CatchHandler @ 0049222c */
              FUN_00581974(&local_2e8,local_1c8);
              if ((param_11 != (long *)0x0) && (param_8 != 0)) {
                lVar26 = 0;
                lVar22 = 4;
                do {
                  lVar27 = lVar26 * 4;
                  lVar26 = lVar26 + 1;
                  *(undefined4 *)(local_1e0 + lVar22) = *(undefined4 *)(*param_11 + lVar27);
                  lVar22 = lVar22 + 0xc;
                } while (param_8 != lVar26);
              }
              puVar14 = PTR_s_onnxruntime_007a9878;
              uVar20 = (ulong)(*(byte *)(param_3 + 8) >> 1);
              if ((*(byte *)(param_3 + 8) & 1) != 0) {
                uVar20 = *(ulong *)(param_3 + 0x10);
              }
              if ((uVar20 != 0) && (lVar26 = *(long *)(param_2 + 8), *(int *)(lVar26 + 0x20) < 2)) {
                    /* try { // try from 00491998 to 004919b3 has its CatchHandler @ 004921c4 */
                FUN_0048a3f4(&local_520,
                             "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/inference_session.cc"
                             ,0x9b4,&DAT_001f1d64);
                    /* try { // try from 004919b4 to 004919d3 has its CatchHandler @ 004921b8 */
                FUN_0048a554(&local_460,lVar26,1,puVar14,0,&local_520);
                    /* try { // try from 004919d4 to 00491a07 has its CatchHandler @ 004921e4 */
                uVar21 = FUN_00303e0c(auStack_3f0,"Running with tag: ",0x12);
                uVar20 = (ulong)(*(byte *)(param_3 + 8) >> 1);
                lVar26 = param_3 + 9;
                if ((*(byte *)(param_3 + 8) & 1) != 0) {
                  uVar20 = *(ulong *)(param_3 + 0x10);
                  lVar26 = *(long *)(param_3 + 0x18);
                }
                FUN_00303e0c(uVar21,lVar26,uVar20);
                FUN_00637fac(&local_460);
                pbVar15 = local_4e8;
                if (local_4e8 != (byte *)0x0) {
                  while (pbVar10 = local_4e0, pbVar10 != pbVar15) {
                    local_4e0 = pbVar10 + -0x18;
                    if ((*local_4e0 & 1) != 0) {
                      free(*(void **)(pbVar10 + -8));
                    }
                  }
                  local_4e0 = pbVar15;
                  free(local_4e8);
                }
                if ((local_500 & 1) != 0) {
                  free(local_4f0);
                }
                if (((ulong)local_520 & 1) != 0) {
                  free(local_510);
                }
              }
              local_528 = (void *)0x0;
                    /* try { // try from 00491a80 to 00491a8f has its CatchHandler @ 00492220 */
              uVar21 = FUN_00492f44(param_2,param_3,&local_528);
              local_470 = local_470 & 0xffffffffffffff00;
              local_468 = 0;
              bVar2 = (*(byte *)(param_2 + 0x672) & 1) == 0;
              if (bVar2) {
                local_470 = param_2 + 0x660;
                    /* try { // try from 00491aac to 00491aaf has its CatchHandler @ 004921d0 */
                FUN_007073d8();
              }
              puVar28 = *(undefined8 **)(param_2 + 0x38);
              puVar5 = *(undefined8 **)(param_2 + 0x40);
              local_468 = bVar2;
              if (puVar28 == puVar5) {
LAB_00491bb8:
                pvVar23 = local_480;
                if (local_480 == (void *)0x0) {
                    /* try { // try from 00492100 to 0049211b has its CatchHandler @ 004921b4 */
                  FUN_005de008(&local_460,*(undefined8 *)(param_2 + 0x470),&local_2e8,param_6,
                               param_7,param_10,*(undefined4 *)(param_2 + 0xe0),param_3,uVar21);
                  pvVar9 = local_480;
                  pvVar23 = (void *)CONCAT71(uStack_45f,local_460);
                  local_460 = 0;
                  uStack_45f = 0;
                  if (local_480 != (void *)0x0) {
                    if ((*(byte *)((long)local_480 + 8) & 1) != 0) {
                      puVar28 = (undefined8 *)((long)local_480 + 0x18);
                      local_480 = pvVar23;
                      free((void *)*puVar28);
                      pvVar23 = local_480;
                    }
                    local_480 = pvVar23;
                    free(pvVar9);
                    pvVar9 = (void *)CONCAT71(uStack_45f,local_460);
                    local_460 = 0;
                    uStack_45f = 0;
                    pvVar23 = local_480;
                    if (pvVar9 != (void *)0x0) {
                      if ((*(byte *)((long)pvVar9 + 8) & 1) != 0) {
                        free(*(void **)((long)pvVar9 + 0x18));
                      }
                      free(pvVar9);
                      pvVar23 = local_480;
                    }
                  }
                }
              }
              else {
                pvVar23 = local_480;
                if (local_480 == (void *)0x0) {
                  do {
                    pvVar23 = local_480;
                    if (local_480 == (void *)0x0) {
                    /* try { // try from 00491b0c to 00491b17 has its CatchHandler @ 00492260 */
                      (**(code **)(*(long *)*puVar28 + 0x50))(&local_520,(long *)*puVar28,param_3);
                      pvVar23 = local_520;
                      if (local_520 == (void *)0x0) {
                        ppppppuVar25 = (undefined8 ******)*puVar28;
                        uVar24 = local_b0 >> 1;
                        local_460 = (byte)ppppppuVar25;
                        uStack_45f = (undefined7)((ulong)ppppppuVar25 >> 8);
                        uVar20 = 6;
                        if ((local_b0 & 1) != 0) {
                          uVar20 = local_a0;
                        }
                        if (uVar24 == uVar20) {
                    /* try { // try from 00491ba8 to 00491bb3 has its CatchHandler @ 00492194 */
                          FUN_0049ed78(&local_b0,&local_460);
                          pvVar23 = local_520;
                        }
                        else {
                          uVar20 = local_b0 & 1;
                          local_b0 = local_b0 + 2;
                          pppppppuVar29 = &local_a8;
                          if (uVar20 != 0) {
                            pppppppuVar29 = local_a8;
                          }
                          pppppppuVar29[uVar24] = ppppppuVar25;
                        }
                      }
                      pvVar9 = local_480;
                      local_520 = (void *)0x0;
                      if (local_480 != (void *)0x0) {
                        if ((*(byte *)((long)local_480 + 8) & 1) != 0) {
                          puVar1 = (undefined8 *)((long)local_480 + 0x18);
                          local_480 = pvVar23;
                          free((void *)*puVar1);
                          pvVar23 = local_480;
                        }
                        local_480 = pvVar23;
                        free(pvVar9);
                        pvVar9 = local_520;
                        local_520 = (void *)0x0;
                        pvVar23 = local_480;
                        if (pvVar9 != (void *)0x0) {
                          if ((*(byte *)((long)pvVar9 + 8) & 1) != 0) {
                            free(*(void **)((long)pvVar9 + 0x18));
                          }
                          free(pvVar9);
                          pvVar23 = local_480;
                        }
                      }
                    }
                    local_480 = pvVar23;
                    puVar28 = puVar28 + 2;
                  } while (puVar28 != puVar5);
                  goto LAB_00491bb8;
                }
              }
              local_480 = pvVar23;
              uVar21 = _UNK_002001f8;
              pvVar23 = _DAT_002001f0;
              pppppppuVar29 = &local_a8;
              if ((local_b0 & 1) != 0) {
                pppppppuVar29 = local_a8;
              }
              if (1 < local_b0) {
                lVar26 = (local_b0 >> 1) << 3;
                do {
                  ppppppuVar25 = *pppppppuVar29;
                    /* try { // try from 00491c7c to 00491c83 has its CatchHandler @ 00492344 */
                  local_510 = (char *)FUN_00759c3c(0x28);
                  uVar13 = s_disable_synchronize_execution_pr_001e5a8b._16_8_;
                  uVar12 = s_disable_synchronize_execution_pr_001e5a8b._8_8_;
                  uVar11 = s_disable_synchronize_execution_pr_001e5a8b._0_8_;
                  uVar8 = CONCAT71(s_disable_synchronize_execution_pr_001e5a8b._32_7_,
                                   s_disable_synchronize_execution_pr_001e5a8b[0x1f]);
                  uStack_518 = uVar21;
                  local_520 = pvVar23;
                  uVar7 = CONCAT17(s_disable_synchronize_execution_pr_001e5a8b[0x1f],
                                   s_disable_synchronize_execution_pr_001e5a8b._24_7_);
                  local_510[0x27] = '\0';
                  local_540 = 0x3002;
                  *(undefined8 *)(local_510 + 8) = uVar12;
                  *(undefined8 *)local_510 = uVar11;
                  *(undefined8 *)(local_510 + 0x18) = uVar7;
                  *(undefined8 *)(local_510 + 0x10) = uVar13;
                  *(undefined8 *)(local_510 + 0x1f) = uVar8;
                  local_53e = 0;
                  FUN_00569aa4(&local_460,param_3 + 0x28,&local_520,&local_540);
                  uVar16 = false;
                  uVar20 = (ulong)(local_460 >> 1);
                  if ((local_460 & 1) != 0) {
                    uVar20 = CONCAT26(uStack_452,
                                      CONCAT15(uStack_453,
                                               CONCAT23(uStack_455,CONCAT21(uStack_457,cStack_458)))
                                     );
                  }
                  if (uVar20 == 1) {
                    pcVar3 = (char *)((ulong)&local_460 | 1);
                    if ((local_460 & 1) != 0) {
                      pcVar3 = local_450;
                    }
                    uVar16 = *pcVar3 == '0';
                  }
                  if ((local_460 & 1) != 0) {
                    free(local_450);
                  }
                  if ((local_540 & 1) != 0) {
                    free(local_530);
                  }
                  if (((ulong)local_520 & 1) != 0) {
                    free(local_510);
                  }
                    /* try { // try from 00491d04 to 00491d17 has its CatchHandler @ 00492348 */
                  (*(code *)(*ppppppuVar25)[0xb])(&local_460,ppppppuVar25,uVar16,param_3);
                  if (local_480 == (void *)0x0) {
                    /* try { // try from 00491d20 to 00491d2b has its CatchHandler @ 004922ec */
                    FUN_0048f7fc(&local_480,&local_460);
                  }
                  pvVar9 = (void *)CONCAT71(uStack_45f,local_460);
                  local_460 = 0;
                  uStack_45f = 0;
                  if (pvVar9 != (void *)0x0) {
                    if ((*(byte *)((long)pvVar9 + 8) & 1) != 0) {
                      free(*(void **)((long)pvVar9 + 0x18));
                    }
                    free(pvVar9);
                  }
                  lVar26 = lVar26 + -8;
                  pppppppuVar29 = pppppppuVar29 + 1;
                } while (lVar26 != 0);
              }
              if (local_468 != '\0') {
                    /* try { // try from 00491bdc to 00491bdf has its CatchHandler @ 004921e0 */
                FUN_00707c00(local_470);
              }
              pvVar23 = local_528;
              local_528 = (void *)0x0;
              if (pvVar23 != (void *)0x0) {
                if ((*(byte *)((long)pvVar23 + 8) & 1) != 0) {
                  free(*(void **)((long)pvVar23 + 0x18));
                }
                free(pvVar23);
              }
              FUN_00493250(&local_2e8);
              if ((local_120 & 1) != 0) {
                free(local_118);
              }
              if ((local_158 & 1) != 0) {
                free(local_150);
              }
              if (local_190[0] != 0) {
                    /* try { // try from 00491db4 to 00491dbf has its CatchHandler @ 004921dc */
                FUN_004a044c(local_190);
              }
              if (local_1c8[0] != 0) {
                    /* try { // try from 00491dc8 to 00491dcf has its CatchHandler @ 004921d8 */
                FUN_004a044c(local_1c8);
              }
              if ((local_4d0[0] & 1) != 0) {
                free(local_4c0);
              }
              if (1 < local_e8) {
                pppppppuVar29 = local_e0;
                if ((local_e8 & 1) != 0) {
                  pppppppuVar29 = local_e0[0];
                }
                if (pppppppuVar29 == (undefined8 *******)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_004839bc();
                }
                    /* try { // try from 00491e08 to 00491e0f has its CatchHandler @ 004924c8 */
                FUN_00493424(param_2,local_e8 >> 1);
              }
              if (local_e8 != 0) {
                    /* try { // try from 00491e18 to 00491e1f has its CatchHandler @ 004921d4 */
                FUN_004a3f40(&local_e8);
              }
              if ((local_b0 & 1) != 0) {
                free(local_a8);
              }
              goto LAB_00491e30;
            }
                    /* try { // try from 004918cc to 004918e7 has its CatchHandler @ 00492200 */
            FUN_00645c3c(*(undefined4 *)(param_2 + 0x674),param_1,
                         "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/inference_session.cc"
                         ,&DAT_001f1d64,0x9a3);
            if ((local_4d0[0] & 1) != 0) {
              free(local_4c0);
            }
          }
          else {
                    /* try { // try from 00491698 to 004916b3 has its CatchHandler @ 0049225c */
            FUN_00645c3c(*(undefined4 *)(param_2 + 0x674),param_1,
                         "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/inference_session.cc"
                         ,&DAT_001f1d64,0x99c);
          }
        }
        else {
                    /* try { // try from 0049159c to 004915b7 has its CatchHandler @ 00492300 */
          FUN_00645c3c(*(undefined4 *)(param_2 + 0x674),param_1,
                       "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/inference_session.cc"
                       ,&DAT_001f1d64,0x99b);
        }
      }
      if (local_e8 != 0) {
                    /* try { // try from 00491860 to 00491867 has its CatchHandler @ 00492324 */
        FUN_004a3f40(&local_e8);
      }
      if ((local_b0 & 1) != 0) {
        free(local_a8);
      }
    }
    else {
      lVar26 = *(long *)(param_2 + 8);
      if (*(int *)(lVar26 + 0x20) < 2) {
                    /* try { // try from 00491400 to 0049141b has its CatchHandler @ 004922d0 */
        FUN_0048a3f4(&local_2e8,
                     "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/inference_session.cc"
                     ,0x987,&DAT_001f1d64);
                    /* try { // try from 0049141c to 0049143b has its CatchHandler @ 004922c4 */
        FUN_0048a554(&local_460,lVar26,1,puVar14,0,&local_2e8);
                    /* try { // try from 0049143c to 004914bb has its CatchHandler @ 00492394 */
        uVar21 = FUN_00303e0c(auStack_3f0,"Replaying the captured ",0x17);
        lVar22 = *(long *)(param_2 + 0x7a0);
        uVar20 = (ulong)(*(byte *)(lVar22 + 0x10) >> 1);
        lVar26 = lVar22 + 0x11;
        if ((*(byte *)(lVar22 + 0x10) & 1) != 0) {
          uVar20 = *(ulong *)(lVar22 + 0x18);
          lVar26 = *(long *)(lVar22 + 0x20);
        }
        uVar21 = FUN_00303e0c(uVar21,lVar26,uVar20);
        uVar21 = FUN_00303e0c(uVar21," CUDA Graph for this model with tag: ",0x25);
        uVar20 = (ulong)(*(byte *)(param_3 + 8) >> 1);
        lVar26 = param_3 + 9;
        if ((*(byte *)(param_3 + 8) & 1) != 0) {
          uVar20 = *(ulong *)(param_3 + 0x10);
          lVar26 = *(long *)(param_3 + 0x18);
        }
        uVar21 = FUN_00303e0c(uVar21,lVar26,uVar20);
        uVar21 = FUN_00303e0c(uVar21," with graph annotation id: ",0x1b);
        FUN_00717214(uVar21,local_484);
        FUN_00637fac(&local_460);
        pbVar15 = local_2b0;
        if (local_2b0 != (byte *)0x0) {
          while (pbVar10 = local_2a8, pbVar10 != pbVar15) {
            local_2a8 = pbVar10 + -0x18;
            if ((*local_2a8 & 1) != 0) {
              free(*(void **)(pbVar10 + -8));
            }
          }
          local_2a8 = pbVar15;
          free(local_2b0);
        }
        if ((local_2c8 & 1) != 0) {
          free(local_2b8);
        }
        if (((ulong)local_2e8 & 1) != 0) {
          free(local_2d8);
        }
      }
      plVar19 = *(long **)(param_2 + 0x7a0);
      if (plVar19 == (long *)0x0) {
        local_450 = (char *)FUN_00759c3c(0x50);
        uVar8 = s_Cached_EP_instance_for_graph_rep_001d8d1e._48_8_;
        uVar7 = s_Cached_EP_instance_for_graph_rep_001d8d1e._32_8_;
        uVar21 = CONCAT17(s_Cached_EP_instance_for_graph_rep_001d8d1e[0x3f],
                          s_Cached_EP_instance_for_graph_rep_001d8d1e._56_7_);
        cStack_458 = (char)_UNK_00200a68;
        uStack_457 = (undefined2)((ulong)_UNK_00200a68 >> 8);
        uStack_455 = (undefined2)((ulong)_UNK_00200a68 >> 0x18);
        uStack_453 = (undefined1)((ulong)_UNK_00200a68 >> 0x28);
        uStack_452 = (undefined2)((ulong)_UNK_00200a68 >> 0x30);
        local_460 = (byte)_DAT_00200a60;
        uStack_45f = (undefined7)((ulong)_DAT_00200a60 >> 8);
        *(undefined8 *)(local_450 + 0x28) = s_Cached_EP_instance_for_graph_rep_001d8d1e._40_8_;
        *(undefined8 *)(local_450 + 0x20) = uVar7;
        *(undefined8 *)(local_450 + 0x38) = uVar21;
        *(undefined8 *)(local_450 + 0x30) = uVar8;
        uVar7 = s_Cached_EP_instance_for_graph_rep_001d8d1e._71_8_;
        uVar21 = CONCAT71(s_Cached_EP_instance_for_graph_rep_001d8d1e._64_7_,
                          s_Cached_EP_instance_for_graph_rep_001d8d1e[0x3f]);
        local_450[0x4f] = '\0';
        *(undefined8 *)(local_450 + 0x47) = uVar7;
        *(undefined8 *)(local_450 + 0x3f) = uVar21;
        uVar8 = s_Cached_EP_instance_for_graph_rep_001d8d1e._24_8_;
        uVar7 = s_Cached_EP_instance_for_graph_rep_001d8d1e._16_8_;
        uVar21 = s_Cached_EP_instance_for_graph_rep_001d8d1e._0_8_;
        *(undefined8 *)(local_450 + 8) = s_Cached_EP_instance_for_graph_rep_001d8d1e._8_8_;
        *(undefined8 *)local_450 = uVar21;
        *(undefined8 *)(local_450 + 0x18) = uVar8;
        *(undefined8 *)(local_450 + 0x10) = uVar7;
                    /* try { // try from 00491744 to 00491757 has its CatchHandler @ 00492264 */
        FUN_0063aa48(param_1,2,1,&local_460);
        if ((local_460 & 1) != 0) {
          free(local_450);
        }
      }
      else {
                    /* try { // try from 004916fc to 0049170f has its CatchHandler @ 004923cc */
        (**(code **)(*plVar19 + 0x70))(param_1,plVar19,local_484);
      }
      if (*param_1 == 0) {
LAB_00491e30:
        lVar26 = local_478;
        *(int *)(param_2 + 0x678) = *(int *)(param_2 + 0x678) + 1;
        lVar22 = FUN_00711194();
        lVar27 = *(long *)(param_2 + 0x6a0);
        *(long *)(param_2 + 0x680) = (lVar22 - lVar26) / 1000 + *(long *)(param_2 + 0x680);
        lVar26 = FUN_00711194();
        if (0x8bb2c973e7 < lVar26 - lVar27) {
                    /* try { // try from 00491e9c to 00491ee3 has its CatchHandler @ 004923cc */
          plVar19 = (long *)(**(code **)(*plVar18 + 200))();
          (**(code **)(*plVar19 + 0x70))
                    (plVar19,*(undefined4 *)(param_2 + 0x674),*(undefined4 *)(param_2 + 0x678),
                     *(undefined8 *)(param_2 + 0x680));
          uVar21 = FUN_00711194();
          *(undefined4 *)(param_2 + 0x678) = 0;
          *(undefined8 *)(param_2 + 0x6a0) = uVar21;
          *(undefined8 *)(param_2 + 0x680) = 0;
        }
        plVar18 = (long *)(**(code **)(*plVar18 + 200))();
        (**(code **)(*plVar18 + 0x50))();
        if (*(char *)(param_2 + 0x2b0) != '\0') {
          local_460 = 0x12;
          local_2e0 = 0;
          uStack_457 = 0x6e;
          uStack_45f = (undefined7)s_model_run_001d2705._0_8_;
          cStack_458 = SUB81(s_model_run_001d2705._0_8_,7);
          local_2e8 = (char *)0x0;
                    /* try { // try from 00491f18 to 00491f33 has its CatchHandler @ 00492258 */
          FUN_006393f4(param_2 + 0x2a0,0,&local_460,&local_478,&local_2e8,0);
          if ((local_460 & 1) != 0) {
            free(local_450);
          }
        }
                    /* try { // try from 00491ff8 to 0049201f has its CatchHandler @ 004923cc */
        if ((((local_480 == (void *)0x0) && (*(long **)(param_2 + 0x7a0) != (long *)0x0)) &&
            (uVar20 = (**(code **)(**(long **)(param_2 + 0x7a0) + 0x60))(), (uVar20 & 1) != 0)) &&
           (((local_484 != -1 && (*(long **)(param_2 + 0x7a0) != (long *)0x0)) &&
            (uVar20 = (**(code **)(**(long **)(param_2 + 0x7a0) + 0x68))(),
            puVar14 = PTR_s_onnxruntime_007a9878, (uVar20 & 1) == 0)))) {
          lVar26 = *(long *)(param_2 + 8);
          if (*(int *)(lVar26 + 0x20) < 2) {
                    /* try { // try from 00492040 to 0049205b has its CatchHandler @ 004921ac */
            FUN_0048a3f4(&local_2e8,
                         "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/inference_session.cc"
                         ,0xa2f,&DAT_001f1d64);
                    /* try { // try from 0049205c to 0049207b has its CatchHandler @ 004921a8 */
            FUN_0048a554(&local_460,lVar26,1,puVar14,0,&local_2e8);
                    /* try { // try from 0049207c to 0049208f has its CatchHandler @ 004921a4 */
            FUN_00303e0c(auStack_3f0,
                         "Start another run for necessary memory allocation or graph capture.",0x43)
            ;
            FUN_00637fac(&local_460);
            FUN_00474ee8(&local_2e8);
          }
                    /* try { // try from 004920a0 to 004920cb has its CatchHandler @ 004923cc */
          FUN_004911c8(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                       param_10,param_11);
          if (*param_1 != 0) {
                    /* try { // try from 004920d4 to 004920f3 has its CatchHandler @ 004921b0 */
            FUN_00645c3c(0,param_1,
                         "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/inference_session.cc"
                         ,&DAT_001f1d64,0xa30);
            goto LAB_00491f58;
          }
          FUN_00474684(param_1);
        }
        pvVar23 = local_480;
        local_480 = (void *)0x0;
        *param_1 = (ulong)pvVar23;
      }
      else {
                    /* try { // try from 00491774 to 0049178f has its CatchHandler @ 004922d8 */
        FUN_00645c3c(*(undefined4 *)(param_2 + 0x674),param_1,
                     "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/inference_session.cc"
                     ,&DAT_001f1d64,0x98b);
      }
    }
LAB_00491f58:
    iVar17 = FUN_00755bf0(0xffffffff,local_4a8);
    if (iVar17 == 1) {
      if (local_4b8 != 0) {
                    /* try { // try from 00491f74 to 00491f83 has its CatchHandler @ 00492384 */
        FUN_0063c620();
      }
      if (local_4b0 != 0) {
        FUN_0063c620();
      }
    }
  }
  else {
    free(local_2d8);
    if ((local_460 & 1) != 0) goto LAB_004912bc;
LAB_00491290:
    uVar20 = (ulong)(local_4a0 >> 1);
    if ((local_4a0 & 1) != 0) {
      uVar20 = local_498;
    }
    if (uVar20 == 0) goto LAB_004912f8;
LAB_004912dc:
    puVar4 = local_490;
    if ((local_4a0 & 1) == 0) {
      puVar4 = auStack_49f;
    }
                    /* try { // try from 004912ec to 004912f3 has its CatchHandler @ 00492388 */
    uVar20 = FUN_004924e4(puVar4,uVar20,&local_484);
    if ((uVar20 & 1) != 0) goto LAB_004912f8;
    local_2e8 = "Failed to parse the cuda graph annotation id: ";
    FUN_004a0980(&local_460,&local_2e8,&local_4a0);
                    /* try { // try from 00491358 to 0049136b has its CatchHandler @ 00492328 */
    FUN_0063aa48(param_1,2,2,&local_460);
    if ((local_460 & 1) != 0) {
      free(local_450);
    }
  }
  if ((local_4a0 & 1) != 0) {
    free(local_490);
  }
  pvVar23 = local_480;
  local_480 = (void *)0x0;
  if (pvVar23 != (void *)0x0) {
    if ((*(byte *)((long)pvVar23 + 8) & 1) != 0) {
      free(*(void **)((long)pvVar23 + 0x18));
    }
    free(pvVar23);
  }
  if (*(long *)(lVar6 + 0x28) == local_78) {
    return;
  }
LAB_0049241c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004924e4  FUN_004924e4 =====

undefined4 FUN_004924e4(char *param_1,ulong param_2,undefined4 *param_3)

{
  ulong uVar1;
  char cVar2;
  long lVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 uVar8;
  long lVar9;
  long *plVar10;
  void *__dest;
  undefined1 auStack_190 [8];
  ulong local_188;
  ulong local_180;
  void *local_178;
  undefined1 auStack_170 [8];
  long local_168 [2];
  undefined **local_158 [3];
  undefined8 auStack_140 [5];
  byte local_118;
  void *local_108;
  undefined1 auStack_f0 [152];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if (param_2 == 0) {
    local_188 = local_188 & 0xffffffffffffff00;
    __dest = (void *)((ulong)&local_188 | 1);
  }
  else {
    cVar2 = *param_1;
    uVar6 = FUN_00731e20();
    lVar7 = FUN_0073220c(uVar6,&DAT_007b0ad0);
    if ((-1 < (long)cVar2) && ((*(ulong *)(*(long *)(lVar7 + 0x10) + (long)cVar2 * 8) & 1) != 0)) {
      if (*(long *)(lVar3 + 0x28) == local_58) {
        return 0;
      }
      goto LAB_00492738;
    }
    if (0xfffffffffffffff7 < param_2) {
      if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_002fb400(&local_188);
      }
      goto LAB_00492738;
    }
    if (param_2 < 0x17) {
      __dest = (void *)((ulong)&local_188 | 1);
      local_188 = CONCAT71(local_188._1_7_,(char)((int)param_2 << 1));
    }
    else {
      uVar1 = (param_2 & 0xfffffffffffffff8) + 8;
      if ((param_2 | 7) != 0x17) {
        uVar1 = param_2 | 7;
      }
      __dest = (void *)FUN_00759c3c(uVar1 + 1);
      local_188 = uVar1 + 1 | 1;
      local_180 = param_2;
      local_178 = __dest;
    }
    memmove(__dest,param_1,param_2);
  }
  *(undefined1 *)((long)__dest + param_2) = 0;
                    /* try { // try from 004925b8 to 004925c7 has its CatchHandler @ 00492764 */
  FUN_00495318(local_168,&local_188,8);
  if ((local_188 & 1) != 0) {
    free(local_178);
  }
  lVar9 = *(long *)(local_168[0] + -0x18);
                    /* try { // try from 004925e0 to 004925fb has its CatchHandler @ 00492790 */
  uVar6 = FUN_00731e20();
  lVar7 = (long)local_168 + lVar9;
  FUN_00715df0(auStack_190,lVar7);
                    /* try { // try from 004925fc to 0049262f has its CatchHandler @ 00492780 */
  FUN_00715d60(&local_188,lVar7,uVar6);
  FUN_00732094(&local_188);
  plVar10 = *(long **)((long)auStack_140 + lVar9);
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x10))(plVar10,uVar6);
    FUN_00732054(auStack_170,plVar10 + 1);
    FUN_007320f4(plVar10 + 1,uVar6);
    FUN_00732094(auStack_170);
  }
  FUN_00732094(auStack_190);
  local_188 = local_188 & 0xffffffff00000000;
                    /* try { // try from 0049265c to 0049268b has its CatchHandler @ 0049277c */
  plVar10 = (long *)FUN_0071683c(local_168,&local_188);
  if (((*(byte *)((long)plVar10 + *(long *)(*plVar10 + -0x18) + 0x20) & 5) == 0) &&
     (iVar5 = FUN_007169b8(local_168), iVar5 == -1)) {
    *param_3 = (undefined4)local_188;
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
  }
  puVar4 = PTR_PTR_007a1f60;
  local_168[0] = *(long *)PTR_PTR_007a1f60;
  *(undefined8 *)((long)local_168 + *(long *)(local_168[0] + -0x18)) =
       *(undefined8 *)(PTR_PTR_007a1f60 + 0x18);
  local_158[0] = &PTR_FUN_0079be30;
  if ((local_118 & 1) != 0) {
    free(local_108);
  }
  FUN_00716098(local_158);
  FUN_00716374(local_168,puVar4 + 8);
  thunk_FUN_00715e00(auStack_f0);
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return uVar8;
  }
LAB_00492738:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004927b4  FUN_004927b4 =====

void FUN_004927b4(undefined8 *param_1,long param_2,undefined8 param_3,ulong *param_4)

{
  short *psVar1;
  ulong *puVar2;
  long lVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  uint uVar12;
  char *local_300;
  long *local_2f8;
  uint local_2f0 [4];
  void *local_2e0;
  ushort local_2d4 [2];
  ulong local_2d0;
  ulong local_2c8;
  short *local_2c0;
  ulong local_2b8;
  undefined8 local_2b0;
  void *local_2a8;
  char *local_2a0;
  char *pcStack_298;
  long local_290 [2];
  undefined **local_280 [8];
  byte local_240;
  void *local_230;
  undefined1 auStack_218 [152];
  long local_180 [2];
  undefined *local_170 [8];
  byte local_130;
  void *local_120;
  undefined1 auStack_108 [152];
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  FUN_004a5094(param_4,5);
  FUN_00495318(local_180,param_3,8);
  local_2b0 = 0;
  local_2b8 = 0;
  uVar8 = *(undefined8 *)(PTR_PTR_007a1f60 + 0x18);
  local_2a8 = (void *)0x0;
  lVar11 = *(long *)PTR_PTR_007a1f60;
  do {
                    /* try { // try from 00492888 to 00492897 has its CatchHandler @ 00492ca4 */
    plVar5 = (long *)FUN_00495450(local_180,&local_2b8,0x3b);
    if ((*(byte *)((long)plVar5 + *(long *)(*plVar5 + -0x18) + 0x20) & 5) != 0) {
      *param_1 = 0;
      break;
    }
                    /* try { // try from 004928b0 to 004928bf has its CatchHandler @ 00492ca0 */
    FUN_00495318(local_290,&local_2b8,8);
    iVar10 = 0;
    uVar12 = 0xff;
    local_2d0 = 0;
    local_2c8 = 0;
    local_2c0 = (short *)0x0;
    local_2d4[0] = 0;
                    /* try { // try from 004928e0 to 0049298f has its CatchHandler @ 00492cac */
    while (plVar5 = (long *)FUN_00495450(local_290,&local_2d0,0x3a),
          (*(byte *)((long)plVar5 + *(long *)(*plVar5 + -0x18) + 0x20) & 5) == 0) {
      if (iVar10 == 1) {
        uVar6 = (ulong)((byte)local_2d0 >> 1);
        psVar1 = (short *)((ulong)&local_2d0 | 1);
        if ((local_2d0 & 1) != 0) {
          uVar6 = local_2c8;
          psVar1 = local_2c0;
        }
        uVar6 = FUN_00495604(psVar1,uVar6,local_2d4);
        if ((uVar6 & 1) == 0) {
          local_300 = "Unsupported device id in the memory arena shrink list: ";
          FUN_004a0980(local_2f0,&local_300,&local_2d0);
                    /* try { // try from 004929b0 to 004929c3 has its CatchHandler @ 00492c64 */
          FUN_0063aa48(param_1,2,2,local_2f0);
LAB_00492a8c:
          if ((local_2f0[0] & 1) != 0) {
            free(local_2e0);
          }
          bVar4 = true;
          goto LAB_00492b64;
        }
LAB_004928dc:
        iVar10 = iVar10 + 1;
      }
      else {
        if (iVar10 != 0) goto LAB_004928dc;
        uVar6 = (ulong)((byte)local_2d0 >> 1);
        if ((local_2d0 & 1) != 0) {
          uVar6 = local_2c8;
        }
        if (uVar6 != 3) {
LAB_00492a5c:
          local_300 = "Unsupported device specified in the memory arena shrink list: ";
          FUN_004a0980(local_2f0,&local_300,&local_2d0);
                    /* try { // try from 00492a78 to 00492a8b has its CatchHandler @ 00492c88 */
          FUN_0063aa48(param_1,2,2,local_2f0);
          goto LAB_00492a8c;
        }
        psVar1 = (short *)((ulong)&local_2d0 | 1);
        if ((local_2d0 & 1) != 0) {
          psVar1 = local_2c0;
        }
        if (*psVar1 == 0x7063 && (char)psVar1[1] == 'u') {
          uVar12 = 0;
          goto LAB_004928dc;
        }
        if (*psVar1 != 0x7067 || (char)psVar1[1] != 'u') goto LAB_00492a5c;
        uVar12 = 1;
        iVar10 = 1;
      }
    }
    local_2f0[0] = uVar12 | (uint)local_2d4[0] << 0x10;
    FUN_005990d4(&local_300,*(undefined8 *)(param_2 + 0x470),local_2f0);
    if (local_300 == (char *)0x0) {
      local_2a0 = " combination in the memory arena shrink list: ";
      pcStack_298 = "Did not find an arena based allocator registered for device-id ";
      FUN_004a52b0(local_2f0,&pcStack_298,&local_2a0,&local_2b8);
                    /* try { // try from 00492acc to 00492adf has its CatchHandler @ 00492c68 */
      FUN_0063aa48(param_1,2,2,local_2f0);
LAB_00492b20:
      if ((local_2f0[0] & 1) != 0) {
        free(local_2e0);
      }
      bVar4 = true;
      plVar5 = local_2f8;
joined_r0x00492b38:
      local_2f8 = plVar5;
      if ((plVar5 != (long *)0x0) &&
         (lVar7 = FUN_00755c50(0xffffffffffffffff,plVar5 + 1), lVar7 == 0)) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        FUN_0071245c(plVar5);
      }
    }
    else {
      if (*(int *)(local_300 + 0x18) != 1) {
        local_2a0 = " combination is not an arena based allocator: ";
        pcStack_298 = "The registered allocator for device-id ";
        FUN_004a52b0(local_2f0,&pcStack_298,&local_2a0,&local_2b8);
                    /* try { // try from 00492b0c to 00492b1f has its CatchHandler @ 00492c60 */
        FUN_0063aa48(param_1,2,2,local_2f0);
        goto LAB_00492b20;
      }
      uVar9 = *param_4;
      uVar6 = 3;
      if ((uVar9 & 1) != 0) {
        uVar6 = param_4[2];
      }
      if (uVar9 >> 1 == uVar6) {
                    /* try { // try from 00492b9c to 00492ba3 has its CatchHandler @ 00492c58 */
        FUN_004a5448(param_4,&local_300);
        bVar4 = false;
        plVar5 = local_2f8;
        goto joined_r0x00492b38;
      }
      bVar4 = false;
      puVar2 = param_4 + 1;
      if ((uVar9 & 1) != 0) {
        puVar2 = (ulong *)param_4[1];
      }
      puVar2[(uVar9 >> 1) * 2] = (ulong)local_300;
      (puVar2 + (uVar9 >> 1) * 2)[1] = (ulong)local_2f8;
      local_300 = (char *)0x0;
      local_2f8 = (long *)0x0;
      *param_4 = uVar9 + 2;
    }
LAB_00492b64:
    if ((local_2d0 & 1) != 0) {
      free(local_2c0);
    }
    local_290[0] = lVar11;
    *(undefined8 *)((long)local_290 + *(long *)(lVar11 + -0x18)) = uVar8;
    local_280[0] = &PTR_FUN_0079be30;
    if ((local_240 & 1) != 0) {
      free(local_230);
    }
    FUN_00716098(local_280);
    FUN_00716374(local_290,PTR_PTR_007a1f60 + 8);
    thunk_FUN_00715e00(auStack_218);
  } while (!bVar4);
  if ((local_2b8 & 1) != 0) {
    free(local_2a8);
  }
  local_180[0] = lVar11;
  *(undefined8 *)((long)local_180 + *(long *)(lVar11 + -0x18)) = uVar8;
  local_170[0] = PTR_DAT_007a10f8 + 0x10;
  if ((local_130 & 1) != 0) {
    free(local_120);
  }
  FUN_00716098(local_170);
  FUN_00716374(local_180,PTR_PTR_007a1f60 + 8);
  thunk_FUN_00715e00(auStack_108);
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00492d00  FUN_00492d00 =====

void FUN_00492d00(undefined8 *param_1,long param_2,long param_3,long param_4,long param_5,
                 undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  long local_b0;
  long lStack_a8;
  long local_a0;
  long local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  *param_1 = 0;
  puVar3 = param_1 + 7;
  *puVar3 = 0;
  param_1[0xe] = 0;
  param_1[0x15] = 0;
                    /* try { // try from 00492d54 to 00492dbb has its CatchHandler @ 00492ef4 */
  FUN_004a04e0();
  lStack_a8 = param_3 + param_2 * 0x18;
  local_b0 = param_3;
  local_a0 = param_3;
  FUN_0049ea20(param_1,&local_b0,(param_2 * 0x18 >> 3) * -0x5555555555555555);
  FUN_004a04e0(puVar3,param_4);
  lStack_a8 = param_5 + param_4 * 0x18;
  local_b0 = param_5;
  local_a0 = param_5;
  FUN_0049ea20(puVar3,&local_b0,(param_4 * 0x18 >> 3) * -0x5555555555555555);
                    /* try { // try from 00492dbc to 00492dcb has its CatchHandler @ 00492ef0 */
  FUN_00581550(&local_60,param_1,param_6);
  if (local_60 == 0) {
    if (*(long *)(lVar1 + 0x28) == local_58) {
      return;
    }
  }
  else {
                    /* try { // try from 00492e00 to 00492e1f has its CatchHandler @ 00492ee0 */
    FUN_00645c3c(0,&local_60,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/feeds_fetches_manager.h"
                 ,"FeedsFetchesInfo",0x2c);
    uVar2 = FUN_00753a74(0x88);
                    /* try { // try from 00492e2c to 00492e33 has its CatchHandler @ 00492ed0 */
    FUN_00645c30(auStack_c8);
                    /* try { // try from 00492e34 to 00492e53 has its CatchHandler @ 00492ec0 */
    FUN_0047488c(&local_b0,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/feeds_fetches_manager.h"
                 ,0x2c,
                 "onnxruntime::FeedsFetchesInfo::FeedsFetchesInfo(gsl::span<const std::string>, gsl::span<const std::string>, const OrtValueNameIdxMap &)"
                 ,auStack_c8);
    FUN_00486664(auStack_e0,&local_60);
    FUN_004792b8(uVar2,&local_b0,auStack_e0);
    if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* try { // try from 00492e80 to 00492e97 has its CatchHandler @ 00492e98 */
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar2,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00492f44  FUN_00492f44 =====

void FUN_00492f44(long param_1,uint *param_2,undefined8 *param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  void *__ptr;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  void *local_b0 [10];
  ulong local_60;
  undefined8 uStack_58;
  void *local_50;
  char *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (*(long *)(param_1 + 0x288) == 0) {
    uVar6 = *(undefined8 *)(param_1 + 8);
  }
  else {
    if ((*(byte *)(param_1 + 0x128) & 1) == 0) {
      uStack_58 = *(undefined8 *)(param_1 + 0x130);
      local_60 = *(ulong *)(param_1 + 0x128);
      local_50 = *(void **)(param_1 + 0x138);
      if (*(byte *)(param_1 + 0x128) >> 1 != 0) {
LAB_00492fcc:
        uVar1 = (ulong)(byte)((byte)param_2[2] >> 1);
        if (((byte)param_2[2] & 1) != 0) {
          uVar1 = *(ulong *)(param_2 + 4);
        }
        if (uVar1 != 0) {
                    /* try { // try from 00492fe4 to 00493017 has its CatchHandler @ 00493204 */
          FUN_00713bdc(&local_60,&DAT_001d9efd);
        }
      }
    }
    else {
      FUN_002fb36c(&local_60,*(undefined8 *)(param_1 + 0x138),*(undefined8 *)(param_1 + 0x130));
      uVar1 = (ulong)(*(byte *)(param_1 + 0x128) >> 1);
      if ((*(byte *)(param_1 + 0x128) & 1) != 0) {
        uVar1 = *(ulong *)(param_1 + 0x130);
      }
      if (uVar1 != 0) goto LAB_00492fcc;
    }
    uVar1 = (ulong)(byte)((byte)param_2[2] >> 1);
    lVar3 = (long)param_2 + 9;
    if (((byte)param_2[2] & 1) != 0) {
      uVar1 = *(ulong *)(param_2 + 4);
      lVar3 = *(long *)(param_2 + 6);
    }
    FUN_0071302c(&local_60,lVar3,uVar1);
    uVar7 = *param_2;
    if (uVar7 == 0xffffffff) {
      uVar7 = *(uint *)(*(long *)(param_1 + 8) + 0x20);
    }
    else if (4 < uVar7) {
      uVar5 = FUN_00753a74(0x88);
                    /* try { // try from 00493038 to 0049303f has its CatchHandler @ 004931e8 */
      FUN_00645c30(auStack_c8);
                    /* try { // try from 00493040 to 0049305f has its CatchHandler @ 004931d8 */
      FUN_0047488c(local_b0,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/inference_session.cc"
                   ,0xbfd,
                   "const logging::Logger &onnxruntime::InferenceSession::CreateLoggerForRun(const RunOptions &, std::unique_ptr<logging::Logger> &)"
                   ,auStack_c8);
      local_40 = 
      "Invalid run log severity level. Not a valid onnxruntime::logging::Severity value: ";
      FUN_004a0638(auStack_e0,&local_40,param_2);
                    /* try { // try from 00493080 to 004930c3 has its CatchHandler @ 00493178 */
      uVar6 = FUN_00474a40(uVar5,local_b0,
                           "run_options.run_log_severity_level >= 0 && run_options.run_log_severity_level <= static_cast<int>(logging::Severity::kFATAL)"
                           ,auStack_e0);
      if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar5,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
      }
      goto LAB_00493228;
    }
                    /* try { // try from 004930d4 to 004930e3 has its CatchHandler @ 00493200 */
    FUN_006387a0(local_b0,*(undefined8 *)(param_1 + 0x288),&local_60,uVar7,0,param_2[1]);
    pvVar4 = local_b0[0];
    __ptr = (void *)*param_3;
    local_b0[0] = (void *)0x0;
    *param_3 = pvVar4;
    if (__ptr != (void *)0x0) {
      if ((*(byte *)((long)__ptr + 8) & 1) != 0) {
        free(*(void **)((long)__ptr + 0x18));
      }
      free(__ptr);
      pvVar4 = local_b0[0];
      local_b0[0] = (void *)0x0;
      if (pvVar4 != (void *)0x0) {
        if ((*(byte *)((long)pvVar4 + 8) & 1) != 0) {
          free(*(void **)((long)pvVar4 + 0x18));
        }
        free(pvVar4);
      }
    }
    uVar6 = *param_3;
    if ((local_60 & 1) != 0) {
      free(local_50);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
LAB_00493228:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


// ===== 0049322c  FUN_0049322c =====

void FUN_0049322c(undefined8 *param_1)

{
  if (*(char *)(param_1 + 1) != '\0') {
                    /* try { // try from 00493240 to 00493243 has its CatchHandler @ 0049324c */
    FUN_00707c00(*param_1);
  }
  return;
}


// ===== 00493250  FUN_00493250 =====

void FUN_00493250(long param_1)

{
  byte bVar1;
  void *pvVar2;
  long lVar3;
  
  pvVar2 = *(void **)(param_1 + 0x108);
  if (pvVar2 != (void *)0x0) {
    *(void **)(param_1 + 0x110) = pvVar2;
    free(pvVar2);
  }
  pvVar2 = *(void **)(param_1 + 0xf0);
  if (pvVar2 != (void *)0x0) {
    *(void **)(param_1 + 0xf8) = pvVar2;
    free(pvVar2);
  }
  if ((*(byte *)(param_1 + 0xb8) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x80);
  }
  else {
    free(*(void **)(param_1 + 0xc0));
    bVar1 = *(byte *)(param_1 + 0x80);
  }
  if ((bVar1 & 1) == 0) {
    lVar3 = *(long *)(param_1 + 0x48);
  }
  else {
    free(*(void **)(param_1 + 0x88));
    lVar3 = *(long *)(param_1 + 0x48);
  }
  if (lVar3 != 0) {
                    /* try { // try from 004932c4 to 004932c7 has its CatchHandler @ 004932e8 */
    FUN_004a044c();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* try { // try from 004932d0 to 004932d7 has its CatchHandler @ 004932e4 */
    FUN_004a044c(param_1 + 0x10);
  }
  return;
}


// ===== 004932ec  FUN_004932ec =====

void FUN_004932ec(long *param_1)

{
  byte bVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x15) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0xe);
  }
  else {
    free((void *)param_1[0x16]);
    bVar1 = *(byte *)(param_1 + 0xe);
  }
  if ((bVar1 & 1) == 0) {
    lVar2 = param_1[7];
  }
  else {
    free((void *)param_1[0xf]);
    lVar2 = param_1[7];
  }
  if (lVar2 != 0) {
                    /* try { // try from 00493340 to 00493343 has its CatchHandler @ 00493364 */
    FUN_004a044c();
  }
  if (*param_1 != 0) {
                    /* try { // try from 0049334c to 00493353 has its CatchHandler @ 00493360 */
    FUN_004a044c(param_1);
  }
  return;
}


// ===== 00493368  FUN_00493368 =====

void FUN_00493368(undefined8 *param_1)

{
  long lVar1;
  void *pvVar2;
  undefined8 uVar3;
  void *__ptr;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar3 = (**(code **)(*(long *)param_1[1] + 0x10))();
  FUN_0063acd8(&local_30,2,1,uVar3);
  pvVar2 = local_30;
  local_30 = (void *)0x0;
  __ptr = *(void **)*param_1;
  *(void **)*param_1 = pvVar2;
  if (__ptr != (void *)0x0) {
    if ((*(byte *)((long)__ptr + 8) & 1) != 0) {
      free(*(void **)((long)__ptr + 0x18));
    }
    free(__ptr);
  }
  pvVar2 = local_30;
  local_30 = (void *)0x0;
  if (pvVar2 != (void *)0x0) {
    if ((*(byte *)((long)pvVar2 + 8) & 1) != 0) {
      free(*(void **)((long)pvVar2 + 0x18));
    }
    free(pvVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00493424  FUN_00493424 =====

void FUN_00493424(long param_1,long param_2,long *param_3)

{
  long *plVar1;
  ulong uVar2;
  byte *pbVar3;
  long lVar4;
  byte *pbVar5;
  undefined *puVar6;
  undefined8 uVar7;
  byte *pbVar8;
  void *pvVar9;
  long lVar10;
  byte local_258 [8];
  ulong local_250;
  void *local_248;
  byte local_240 [16];
  void *local_230;
  byte local_220;
  void *local_210;
  byte *local_208;
  byte *local_200;
  void *local_1f0;
  undefined1 auStack_1e8 [112];
  undefined1 auStack_178 [264];
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  if (param_2 != 0) {
    if (param_3 == (long *)0x0) {
LAB_00493688:
                    /* WARNING: Subroutine does not return */
      FUN_004839bc();
    }
    plVar1 = param_3 + param_2 * 2;
    do {
      if (plVar1 <= param_3) goto LAB_00493688;
      FUN_00565988(&local_1f0,*param_3);
      puVar6 = PTR_s_onnxruntime_007a9878;
      if (local_1f0 != (void *)0x0) {
        lVar10 = *(long *)(param_1 + 8);
        pvVar9 = local_1f0;
        if (*(int *)(lVar10 + 0x20) < 3) {
                    /* try { // try from 004934e8 to 004934fb has its CatchHandler @ 0049368c */
          FUN_0048a3f4(local_240,
                       "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/inference_session.cc"
                       ,0xb9f,"ShrinkMemoryArenas");
                    /* try { // try from 004934fc to 00493517 has its CatchHandler @ 004936a4 */
          FUN_0048a554(auStack_1e8,lVar10,2,puVar6,0,local_240);
                    /* try { // try from 00493518 to 0049352b has its CatchHandler @ 0049369c */
          uVar7 = FUN_00303e0c(auStack_178,"Unable to shrink arena: ",0x18);
                    /* try { // try from 00493534 to 0049353f has its CatchHandler @ 00493694 */
          FUN_00495950(local_258,*param_3 + 8);
          uVar2 = (ulong)(local_258[0] >> 1);
          pvVar9 = (void *)((ulong)local_258 | 1);
          if ((local_258[0] & 1) != 0) {
            uVar2 = local_250;
            pvVar9 = local_248;
          }
                    /* try { // try from 00493558 to 00493597 has its CatchHandler @ 004936ac */
          uVar7 = FUN_00303e0c(uVar7,pvVar9,uVar2);
          uVar7 = FUN_00303e0c(uVar7," error message: ",0x10);
          pbVar8 = (byte *)FUN_0063afd8(&local_1f0);
          uVar2 = *(ulong *)(pbVar8 + 8);
          pbVar3 = *(byte **)(pbVar8 + 0x10);
          if ((*pbVar8 & 1) == 0) {
            pbVar3 = pbVar8 + 1;
            uVar2 = (ulong)(*pbVar8 >> 1);
          }
          FUN_00303e0c(uVar7,pbVar3,uVar2);
          if ((local_258[0] & 1) != 0) {
            free(local_248);
          }
          FUN_00637fac(auStack_1e8);
          pbVar3 = local_208;
          pbVar8 = local_200;
          if (local_208 != (byte *)0x0) {
            while (pbVar5 = pbVar8, pbVar5 != pbVar3) {
              pbVar8 = pbVar5 + -0x18;
              if ((*pbVar8 & 1) != 0) {
                free(*(void **)(pbVar5 + -8));
              }
            }
            local_200 = pbVar3;
            free(local_208);
          }
          if ((local_220 & 1) != 0) {
            free(local_210);
          }
          pvVar9 = local_1f0;
          if ((local_240[0] & 1) != 0) {
            free(local_230);
            pvVar9 = local_1f0;
          }
          local_1f0 = (void *)0x0;
          if (pvVar9 == (void *)0x0) goto LAB_0049349c;
        }
        local_1f0 = (void *)0x0;
        if ((*(byte *)((long)pvVar9 + 8) & 1) != 0) {
          free(*(void **)((long)pvVar9 + 0x18));
        }
        free(pvVar9);
      }
LAB_0049349c:
      param_3 = param_3 + 2;
    } while (param_3 != plVar1);
  }
  if (*(long *)(lVar4 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004936f8  FUN_004936f8 =====

void FUN_004936f8(long *param_1)

{
  if (*param_1 != 0) {
                    /* try { // try from 00493708 to 0049370b has its CatchHandler @ 00493714 */
    FUN_004a3f40();
  }
  return;
}


// ===== 00493718  FUN_00493718 =====

void FUN_00493718(long *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00755bf0(0xffffffff,param_1[2]);
  if (iVar1 == 1) {
    if (*param_1 != 0) {
                    /* try { // try from 00493744 to 00493753 has its CatchHandler @ 00493760 */
      FUN_0063c620();
    }
    if (param_1[1] != 0) {
      FUN_0063c620();
    }
  }
  return;
}


// ===== 00493764  FUN_00493764 =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00493764(ulong *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 undefined8 *param_5,long param_6,long *param_7,long param_8,undefined8 *param_9,
                 long param_10,long *param_11)

{
  undefined8 *******pppppppuVar1;
  undefined8 *******pppppppuVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  size_t __n;
  undefined8 uVar7;
  long lVar8;
  char *pcVar9;
  undefined8 ******ppppppuVar10;
  long lVar11;
  undefined8 *****pppppuVar12;
  undefined8 *******pppppppuVar13;
  ulong uVar14;
  long *plVar15;
  char *pcVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined1 auStack_1f0 [24];
  undefined1 auStack_1d8 [24];
  undefined8 ******local_1c0;
  size_t sStack_1b8;
  char *local_1b0;
  undefined8 *****local_170;
  char *local_168;
  char *local_160;
  char *local_158;
  char *local_150;
  undefined8 *******local_148;
  ulong local_140;
  undefined8 local_118;
  undefined8 *******pppppppuStack_110;
  char *local_108;
  ulong local_e0;
  undefined8 *******local_d8;
  ulong local_d0;
  ulong local_a8;
  undefined8 *******apppppppuStack_a0 [6];
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  local_a8 = 0;
                    /* try { // try from 004937b8 to 004937c3 has its CatchHandler @ 00494060 */
  FUN_004a04e0(&local_a8,param_4);
  local_e0 = 0;
                    /* try { // try from 004937cc to 004937d7 has its CatchHandler @ 0049405c */
  FUN_004a40bc(&local_e0,param_4);
  if (param_4 != 0) {
    do {
      if (((char *)*param_5 == (char *)0x0) || (*(char *)*param_5 == '\0')) {
                    /* try { // try from 00493994 to 0049399b has its CatchHandler @ 00494020 */
        local_1b0 = (char *)FUN_00759c3c(0x20);
        sStack_1b8 = _UNK_00200668;
        local_1c0 = (undefined8 ******)_DAT_00200660;
        uVar6 = s_input_name_cannot_be_empty_001c3df1._18_8_;
        uVar5 = s_input_name_cannot_be_empty_001c3df1._0_8_;
        uVar7 = CONCAT26(s_input_name_cannot_be_empty_001c3df1._16_2_,
                         s_input_name_cannot_be_empty_001c3df1._10_6_);
        *(ulong *)(local_1b0 + 8) =
             CONCAT62(s_input_name_cannot_be_empty_001c3df1._10_6_,
                      s_input_name_cannot_be_empty_001c3df1._8_2_);
        *(undefined8 *)local_1b0 = uVar5;
        *(undefined8 *)(local_1b0 + 0x12) = uVar6;
        *(undefined8 *)(local_1b0 + 10) = uVar7;
        local_1b0[0x1a] = '\0';
                    /* try { // try from 004939c8 to 004939db has its CatchHandler @ 00494008 */
        FUN_0063aa48(param_1,2,2,&local_1c0);
        local_108 = local_1b0;
        ppppppuVar10 = local_1c0;
joined_r0x004939e0:
        if (((ulong)ppppppuVar10 & 1) != 0) {
          free(local_108);
        }
        goto LAB_00493ee4;
      }
      if (param_6 == 0) goto LAB_00493f38;
      if (*param_7 == 0) {
        local_150 = "NULL input supplied for input ";
        FUN_004839f8(&local_118,&local_150,param_5);
        pcVar9 = local_108;
        if (((ulong)local_118 & 1) == 0) {
          pcVar9 = (char *)((long)&local_118 + 1);
        }
        __n = strlen(pcVar9);
        if (__n < 0xfffffffffffffff8) {
          if (__n < 0x17) {
            pcVar16 = (char *)((ulong)&local_1c0 | 1);
            local_1c0 = (undefined8 ******)CONCAT71(local_1c0._1_7_,(char)((int)__n << 1));
            if (__n != 0) goto LAB_00493cdc;
          }
          else {
            uVar3 = (__n & 0xfffffffffffffff8) + 8;
            if ((__n | 7) != 0x17) {
              uVar3 = __n | 7;
            }
                    /* try { // try from 00493cc4 to 00493ccb has its CatchHandler @ 00493fe4 */
            pcVar16 = (char *)FUN_00759c3c(uVar3 + 1);
            local_1c0 = (undefined8 ******)(uVar3 + 1 | 1);
            sStack_1b8 = __n;
            local_1b0 = pcVar16;
LAB_00493cdc:
            memcpy(pcVar16,pcVar9,__n);
          }
          pcVar16[__n] = '\0';
                    /* try { // try from 00493cf0 to 00493d03 has its CatchHandler @ 00493f74 */
          FUN_0063aa48(param_1,2,2,&local_1c0);
          ppppppuVar10 = (undefined8 ******)local_118;
          if (((ulong)local_1c0 & 1) != 0) {
            free(local_1b0);
            ppppppuVar10 = (undefined8 ******)local_118;
          }
          goto joined_r0x004939e0;
        }
        if (*(long *)(lVar4 + 0x28) == local_70) {
                    /* try { // try from 00493f50 to 00493f57 has its CatchHandler @ 00493fe4 */
                    /* WARNING: Subroutine does not return */
          FUN_002fb400(&local_1c0);
        }
        goto LAB_004940b8;
      }
                    /* try { // try from 00493804 to 0049380f has its CatchHandler @ 00494088 */
      FUN_004a420c(&local_a8,param_5);
      uVar14 = local_e0;
      puVar18 = (undefined8 *)*param_7;
      uVar3 = 2;
      if ((local_e0 & 1) != 0) {
        uVar3 = local_d0;
      }
      if (local_e0 >> 1 == uVar3) {
                    /* try { // try from 0049388c to 00493897 has its CatchHandler @ 00494088 */
        FUN_004a44f8(&local_e0,puVar18);
      }
      else {
        pppppppuVar13 = &local_d8;
        if ((local_e0 & 1) != 0) {
          pppppppuVar13 = local_d8;
        }
        pppppppuVar13 = pppppppuVar13 + (local_e0 >> 1) * 3;
        *pppppppuVar13 = (undefined8 ******)*puVar18;
        ppppppuVar10 = (undefined8 ******)puVar18[1];
        pppppppuVar13[1] = ppppppuVar10;
        if (ppppppuVar10 != (undefined8 ******)0x0) {
          FUN_00755c20(1,ppppppuVar10 + 1);
        }
        local_e0 = uVar14 + 2;
        pppppppuVar13[2] = (undefined8 ******)puVar18[2];
      }
      param_4 = param_4 + -1;
      param_6 = param_6 + -1;
      param_5 = param_5 + 1;
      param_7 = param_7 + 1;
    } while (param_4 != 0);
  }
  local_118 = (undefined8 *****)0x0;
                    /* try { // try from 004938a0 to 004938af has its CatchHandler @ 00494038 */
  FUN_004a04e0(&local_118,param_8);
  lVar8 = param_8;
  if (param_8 != 0) {
    do {
      if (((char *)*param_9 == (char *)0x0) || (*(char *)*param_9 == '\0')) {
                    /* try { // try from 00493a8c to 00493a93 has its CatchHandler @ 00493fe0 */
        local_1b0 = (char *)FUN_00759c3c(0x20);
        sStack_1b8 = _UNK_00200448;
        local_1c0 = (undefined8 ******)_DAT_00200440;
        uVar6 = s_output_name_cannot_be_empty_001d08b4._19_8_;
        uVar5 = s_output_name_cannot_be_empty_001d08b4._0_8_;
        uVar7 = CONCAT35(s_output_name_cannot_be_empty_001d08b4._16_3_,
                         s_output_name_cannot_be_empty_001d08b4._11_5_);
        *(ulong *)(local_1b0 + 8) =
             CONCAT53(s_output_name_cannot_be_empty_001d08b4._11_5_,
                      s_output_name_cannot_be_empty_001d08b4._8_3_);
        *(undefined8 *)local_1b0 = uVar5;
        *(undefined8 *)(local_1b0 + 0x13) = uVar6;
        *(undefined8 *)(local_1b0 + 0xb) = uVar7;
        local_1b0[0x1b] = '\0';
                    /* try { // try from 00493ac0 to 00493ad3 has its CatchHandler @ 00493fc8 */
        FUN_0063aa48(param_1,2,2,&local_1c0);
        pcVar9 = local_1b0;
        if (((ulong)local_1c0 & 1) != 0) goto LAB_00493ed0;
        goto LAB_00493ed4;
      }
                    /* try { // try from 004938c8 to 004938d3 has its CatchHandler @ 00494078 */
      FUN_004a420c(&local_118,param_9);
      lVar8 = lVar8 + -1;
      param_9 = param_9 + 1;
    } while (lVar8 != 0);
  }
  local_168 = (char *)0x0;
  local_160 = (char *)0x0;
  local_158 = (char *)0x0;
                    /* try { // try from 004938e8 to 004938f3 has its CatchHandler @ 00494004 */
  FUN_00485aec(&local_168,param_8);
  plVar15 = param_11;
  lVar8 = param_8;
  lVar17 = param_10;
  if (param_8 != 0) {
    do {
      pcVar9 = local_160;
      if (lVar17 == 0) goto LAB_00493f38;
      puVar18 = (undefined8 *)*plVar15;
      if (puVar18 == (undefined8 *)0x0) {
        if (local_158 <= local_160) {
                    /* try { // try from 00493988 to 0049398f has its CatchHandler @ 00494068 */
          local_160 = (char *)FUN_004a4830(&local_168);
        }
        else {
          pcVar9[0] = '\0';
          pcVar9[1] = '\0';
          pcVar9[2] = '\0';
          pcVar9[3] = '\0';
          pcVar9[4] = '\0';
          pcVar9[5] = '\0';
          pcVar9[6] = '\0';
          pcVar9[7] = '\0';
          pcVar9[8] = '\0';
          pcVar9[9] = '\0';
          pcVar9[10] = '\0';
          pcVar9[0xb] = '\0';
          pcVar9[0xc] = '\0';
          pcVar9[0xd] = '\0';
          pcVar9[0xe] = '\0';
          pcVar9[0xf] = '\0';
          local_160 = local_160 + 0x18;
          pcVar9[0x10] = '\0';
          pcVar9[0x11] = '\0';
          pcVar9[0x12] = '\0';
          pcVar9[0x13] = '\0';
          pcVar9[0x14] = '\0';
          pcVar9[0x15] = '\0';
          pcVar9[0x16] = '\0';
          pcVar9[0x17] = '\0';
        }
      }
      else if (local_158 <= local_160) {
                    /* try { // try from 0049390c to 00493917 has its CatchHandler @ 00494068 */
        local_160 = (char *)FUN_004a4670(&local_168,puVar18);
      }
      else {
        *(undefined8 *)local_160 = *puVar18;
        lVar11 = puVar18[1];
        *(long *)(local_160 + 8) = lVar11;
        if (lVar11 != 0) {
          FUN_00755c20(1,lVar11 + 8);
        }
        local_160 = pcVar9 + 0x18;
        *(undefined8 *)(pcVar9 + 0x10) = puVar18[2];
      }
      lVar8 = lVar8 + -1;
      plVar15 = plVar15 + 1;
      lVar17 = lVar17 + -1;
    } while (lVar8 != 0);
  }
  local_170 = (undefined8 *****)0x0;
  pppppppuVar13 = apppppppuStack_a0;
  if ((local_a8 & 1) != 0) {
    pppppppuVar13 = apppppppuStack_a0[0];
  }
  if ((local_a8 < 2) || (pppppppuVar13 != (undefined8 *******)0x0)) {
    pppppppuVar1 = &local_d8;
    if ((local_e0 & 1) != 0) {
      pppppppuVar1 = local_d8;
    }
    if ((local_e0 < 2) || (pppppppuVar1 != (undefined8 *******)0x0)) {
      pppppppuVar2 = &pppppppuStack_110;
      if (((ulong)local_118 & 1) != 0) {
        pppppppuVar2 = pppppppuStack_110;
      }
      if ((local_118 < (undefined8 *****)0x2) || (pppppppuVar2 != (undefined8 *******)0x0)) {
                    /* try { // try from 00493a60 to 00493a73 has its CatchHandler @ 00493ffc */
        FUN_004911c8(&local_1c0,param_2,param_3,local_a8 >> 1,pppppppuVar13,local_e0 >> 1,
                     pppppppuVar1,(ulong)local_118 >> 1,pppppppuVar2,&local_168,0);
        local_170 = local_1c0;
        if (local_1c0 == (undefined8 ******)0x0) {
          local_150 = (char *)0x0;
                    /* try { // try from 00493b4c to 00493b57 has its CatchHandler @ 00493f70 */
          FUN_00486d0c(&local_150,param_8);
          if (param_8 != 0) {
            lVar17 = 0;
            lVar8 = 0;
            do {
              pcVar9 = local_168;
              if (param_10 == lVar8) goto LAB_00493f38;
              if (param_11[lVar8] == 0) {
                    /* try { // try from 00493bdc to 00493be3 has its CatchHandler @ 00494044 */
                ppppppuVar10 = (undefined8 ******)FUN_00759c3c(0x18);
                pcVar9 = pcVar9 + lVar17;
                *ppppppuVar10 = *(undefined8 ******)pcVar9;
                pppppuVar12 = *(undefined8 ******)(pcVar9 + 8);
                ppppppuVar10[1] = pppppuVar12;
                if (pppppuVar12 != (undefined8 *****)0x0) {
                  FUN_00755c20(1,pppppuVar12 + 1);
                }
                uVar14 = (ulong)local_150 >> 1;
                ppppppuVar10[2] = *(undefined8 ******)(pcVar9 + 0x10);
                uVar3 = 6;
                if (((ulong)local_150 & 1) != 0) {
                  uVar3 = local_140;
                }
                if (uVar14 == uVar3) {
                    /* try { // try from 00493c9c to 00493ca7 has its CatchHandler @ 00493f58 */
                  local_1c0 = ppppppuVar10;
                  FUN_00486e9c(&local_150,&local_1c0);
                }
                else {
                  uVar3 = (ulong)local_150 & 1;
                  local_150 = local_150 + 2;
                  local_1c0 = (undefined8 ******)0x0;
                  pppppppuVar13 = &local_148;
                  if (uVar3 != 0) {
                    pppppppuVar13 = local_148;
                  }
                  pppppppuVar13[uVar14] = ppppppuVar10;
                }
                ppppppuVar10 = local_1c0;
                local_1c0 = (undefined8 ******)0x0;
                if (ppppppuVar10 != (undefined8 ******)0x0) {
                  pppppuVar12 = ppppppuVar10[1];
                  if ((pppppuVar12 != (undefined8 *****)0x0) &&
                     (lVar11 = FUN_00755c50(0xffffffffffffffff,pppppuVar12 + 1), lVar11 == 0)) {
                    (*(code *)(*pppppuVar12)[2])(pppppuVar12);
                    FUN_0071245c(pppppuVar12);
                  }
                  free(ppppppuVar10);
                }
              }
              else {
                uVar14 = (ulong)local_150 >> 1;
                uVar3 = 6;
                if (((ulong)local_150 & 1) != 0) {
                  uVar3 = local_140;
                }
                if (uVar14 == uVar3) {
                    /* try { // try from 00493c90 to 00493c97 has its CatchHandler @ 00493f68 */
                  FUN_004a49a8(&local_150);
                }
                else {
                  uVar3 = (ulong)local_150 & 1;
                  local_150 = local_150 + 2;
                  pppppppuVar13 = &local_148;
                  if (uVar3 != 0) {
                    pppppppuVar13 = local_148;
                  }
                  pppppppuVar13[uVar14] = (undefined8 ******)0x0;
                }
              }
              lVar8 = lVar8 + 1;
              lVar17 = lVar17 + 0x18;
            } while (param_8 != lVar8);
            if (((ulong)local_150 & 1) == 0) {
              pppppppuVar13 = &local_148;
              do {
                if (param_10 == 0) goto LAB_00493f38;
                if (*param_11 == 0) {
                  ppppppuVar10 = *pppppppuVar13;
                  if (ppppppuVar10 == (undefined8 ******)0x0) goto LAB_00493dac;
                  *pppppppuVar13 = (undefined8 ******)0x0;
                  *param_11 = (long)ppppppuVar10;
                }
                param_8 = param_8 + -1;
                param_10 = param_10 + -1;
                pppppppuVar13 = pppppppuVar13 + 1;
                param_11 = param_11 + 1;
              } while (param_8 != 0);
            }
            else {
              lVar8 = 0;
              do {
                if (param_10 == lVar8) goto LAB_00493f38;
                if (param_11[lVar8] == 0) {
                  ppppppuVar10 = local_148[lVar8];
                  if (ppppppuVar10 == (undefined8 ******)0x0) goto LAB_00493dac;
                  local_148[lVar8] = (undefined8 ******)0x0;
                  param_11[lVar8] = (long)ppppppuVar10;
                }
                lVar8 = lVar8 + 1;
              } while (param_8 != lVar8);
            }
          }
          *param_1 = 0;
          if (local_150 != (char *)0x0) {
                    /* try { // try from 00493e44 to 00493e4b has its CatchHandler @ 00493f6c */
            FUN_00486c40(&local_150);
          }
          pppppuVar12 = local_170;
          if (local_170 != (undefined8 *****)0x0) {
            if (((ulong)local_170[1] & 1) != 0) {
              free(local_170[3]);
            }
            free(pppppuVar12);
          }
        }
        else {
          *param_1 = (ulong)local_1c0;
        }
        pcVar16 = local_168;
        pcVar9 = local_160;
        if (local_168 != (char *)0x0) {
          for (; pcVar9 != pcVar16; pcVar9 = pcVar9 + -0x18) {
            plVar15 = *(long **)(pcVar9 + -0x10);
            if ((plVar15 != (long *)0x0) &&
               (lVar8 = FUN_00755c50(0xffffffffffffffff,plVar15 + 1), lVar8 == 0)) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
              FUN_0071245c(plVar15);
            }
          }
          local_160 = pcVar16;
          pcVar9 = local_168;
LAB_00493ed0:
          free(pcVar9);
        }
LAB_00493ed4:
        if (local_118 != (undefined8 *****)0x0) {
                    /* try { // try from 00493edc to 00493ee3 has its CatchHandler @ 00494024 */
          FUN_004a044c(&local_118);
        }
LAB_00493ee4:
        if (local_e0 != 0) {
                    /* try { // try from 00493eec to 00493ef3 has its CatchHandler @ 00494040 */
          FUN_004a3ffc(&local_e0);
        }
        if (local_a8 != 0) {
                    /* try { // try from 00493efc to 00493f03 has its CatchHandler @ 0049403c */
          FUN_004a044c(&local_a8);
        }
        if (*(long *)(lVar4 + 0x28) == local_70) {
          return;
        }
        goto LAB_004940b8;
      }
    }
  }
LAB_00493f38:
                    /* WARNING: Subroutine does not return */
  FUN_004839bc();
LAB_00493dac:
  uVar7 = FUN_00753a74(0x88);
                    /* try { // try from 00493db8 to 00493dbf has its CatchHandler @ 00494028 */
  FUN_00645c30(auStack_1d8);
                    /* try { // try from 00493dc0 to 00493ddf has its CatchHandler @ 00493fb8 */
  FUN_0047488c(&local_1c0,
               "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/inference_session.cc"
               ,0xa75,
               "Status onnxruntime::InferenceSession::Run(const RunOptions &, gsl::span<const char *const>, gsl::span<const OrtValue *const>, gsl::span<const char *const>, gsl::span<OrtValue *>)"
               ,auStack_1d8);
  FUN_00476720(auStack_1f0);
                    /* try { // try from 00493dec to 00493e33 has its CatchHandler @ 00493f8c */
  FUN_00474a40(uVar7,&local_1c0,"fetch_unique_ptrs[i] != nullptr",auStack_1f0);
  if (*(long *)(lVar4 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(uVar7,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
  }
LAB_004940b8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004940bc  FUN_004940bc =====

void FUN_004940bc(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  void *__ptr;
  void *pvVar3;
  
  __ptr = (void *)*param_1;
  if (__ptr == (void *)0x0) {
    return;
  }
  pvVar3 = (void *)param_1[1];
  if (pvVar3 == __ptr) {
    param_1[1] = __ptr;
    free(__ptr);
    return;
  }
  do {
    plVar2 = *(long **)((long)pvVar3 + -0x10);
    if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0)
       ) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_0071245c(plVar2);
    }
    pvVar3 = (void *)((long)pvVar3 + -0x18);
  } while (pvVar3 != __ptr);
  param_1[1] = __ptr;
  free((void *)*param_1);
  return;
}


// ===== 00494164  FUN_00494164 =====

void FUN_00494164(long *param_1)

{
  if (*param_1 != 0) {
                    /* try { // try from 00494174 to 00494177 has its CatchHandler @ 00494180 */
    FUN_004a044c();
  }
  return;
}


// ===== 00494184  FUN_00494184 =====

void FUN_00494184(long *param_1)

{
  if (*param_1 != 0) {
                    /* try { // try from 00494194 to 00494197 has its CatchHandler @ 004941a0 */
    FUN_004a3ffc();
  }
  return;
}


// ===== 004941a4  FUN_004941a4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004941a4(undefined8 *param_1,long param_2,ulong param_3,long param_4,long param_5,
                 long param_6,long param_7,long param_8,long param_9,long param_10,long param_11,
                 long param_12,long param_13)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  long *plVar8;
  ulong *puVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  long local_100 [4];
  long *local_e0;
  long local_d0 [4];
  long *local_b0;
  ulong local_a0;
  undefined8 uStack_98;
  char *local_90;
  ulong *local_80;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  if (*(char *)(param_2 + 0x208) == '\0') {
    lVar12 = *(long *)(param_2 + 0x4c0);
joined_r0x0049421c:
    if (lVar12 != 0) goto LAB_00494220;
  }
  else {
    lVar12 = *(long *)(param_2 + 0x4d0);
    if (lVar12 == 0) {
      lVar12 = *(long *)(param_2 + 0x4b0);
      goto joined_r0x0049421c;
    }
LAB_00494220:
    iVar7 = FUN_0063bb14(lVar12);
    if (1 < iVar7) {
      plVar8 = (long *)FUN_00759c3c(0x70);
      *plVar8 = (long)&PTR_FUN_007900c0;
      plVar8[2] = param_2;
      plVar8[3] = param_4;
      puVar9 = (ulong *)(plVar8 + 1);
      *puVar9 = param_3;
      plVar8[6] = param_7;
      plVar8[7] = param_8;
      plVar8[8] = param_9;
      plVar8[9] = param_10;
      plVar8[4] = param_5;
      plVar8[5] = param_6;
      plVar8[10] = param_11;
      plVar8[0xb] = param_12;
      plVar8[0xc] = param_13;
      plVar8[0xd] = param_8;
      local_b0 = plVar8;
                    /* try { // try from 00494300 to 00494307 has its CatchHandler @ 004944fc */
      local_e0 = (long *)FUN_00759c3c(0x70);
      lVar15 = plVar8[8];
      lVar13 = plVar8[7];
      lVar19 = plVar8[10];
      lVar17 = plVar8[9];
      lVar10 = plVar8[0xd];
      *local_e0 = (long)&PTR_FUN_007900c0;
      local_e0[8] = lVar15;
      local_e0[7] = lVar13;
      lVar15 = plVar8[0xc];
      lVar13 = plVar8[0xb];
      local_e0[10] = lVar19;
      local_e0[9] = lVar17;
      lVar17 = plVar8[2];
      uVar11 = *puVar9;
      local_e0[0xc] = lVar15;
      local_e0[0xb] = lVar13;
      lVar15 = plVar8[4];
      lVar13 = plVar8[3];
      lVar21 = plVar8[6];
      lVar19 = plVar8[5];
      local_e0[2] = lVar17;
      local_e0[1] = uVar11;
      local_e0[0xd] = lVar10;
      local_e0[4] = lVar15;
      local_e0[3] = lVar13;
      local_e0[6] = lVar21;
      local_e0[5] = lVar19;
                    /* try { // try from 0049434c to 00494353 has its CatchHandler @ 004944c0 */
      local_80 = (ulong *)FUN_00759c3c(0x70);
      uVar16 = plVar8[8];
      uVar14 = plVar8[7];
      uVar20 = plVar8[10];
      uVar18 = plVar8[9];
      uVar11 = plVar8[0xd];
      *local_80 = (ulong)&PTR_FUN_007900c0;
      local_80[0xd] = uVar11;
      local_80[8] = uVar16;
      local_80[7] = uVar14;
      uVar14 = plVar8[0xc];
      uVar11 = plVar8[0xb];
      local_80[10] = uVar20;
      local_80[9] = uVar18;
      uVar18 = plVar8[2];
      uVar16 = *puVar9;
      local_80[0xc] = uVar14;
      local_80[0xb] = uVar11;
      uVar14 = plVar8[4];
      uVar11 = plVar8[3];
      uVar22 = plVar8[6];
      uVar20 = plVar8[5];
      local_80[2] = uVar18;
      local_80[1] = uVar16;
      local_80[4] = uVar14;
      local_80[3] = uVar11;
      local_80[6] = uVar22;
      local_80[5] = uVar20;
                    /* try { // try from 0049438c to 0049439b has its CatchHandler @ 00494468 */
      FUN_0063c054(lVar12,&local_a0);
      if (local_80 == &local_a0) {
        lVar12 = 0x20;
        puVar9 = &local_a0;
LAB_004943c8:
        (**(code **)(*puVar9 + lVar12))();
      }
      else if (local_80 != (ulong *)0x0) {
        lVar12 = 0x28;
        puVar9 = local_80;
        goto LAB_004943c8;
      }
      if (local_e0 == local_100) {
        lVar12 = 0x20;
        plVar8 = local_100;
LAB_004943f8:
        (**(code **)(*plVar8 + lVar12))();
      }
      else if (local_e0 != (long *)0x0) {
        lVar12 = 0x28;
        plVar8 = local_e0;
        goto LAB_004943f8;
      }
      *param_1 = 0;
      if (local_b0 == local_d0) {
        lVar12 = 0x20;
        plVar8 = local_d0;
      }
      else {
        if (local_b0 == (long *)0x0) goto LAB_00494438;
        lVar12 = 0x28;
        plVar8 = local_b0;
      }
      (**(code **)(*plVar8 + lVar12))();
      goto LAB_00494438;
    }
  }
  local_90 = (char *)FUN_00759c3c(0x40);
  uVar6 = s_intra_op_thread_pool_must_have_a_001c1bb4._32_8_;
  uVar5 = s_intra_op_thread_pool_must_have_a_001c1bb4._24_8_;
  uVar4 = s_intra_op_thread_pool_must_have_a_001c1bb4._16_8_;
  uVar3 = s_intra_op_thread_pool_must_have_a_001c1bb4._8_8_;
  uVar2 = s_intra_op_thread_pool_must_have_a_001c1bb4._0_8_;
  *(ulong *)(local_90 + 0x28) =
       CONCAT17(s_intra_op_thread_pool_must_have_a_001c1bb4[0x2f],
                s_intra_op_thread_pool_must_have_a_001c1bb4._40_7_);
  *(undefined8 *)(local_90 + 0x20) = uVar6;
  *(undefined8 *)(local_90 + 8) = uVar3;
  *(undefined8 *)local_90 = uVar2;
  *(undefined8 *)(local_90 + 0x18) = uVar5;
  *(undefined8 *)(local_90 + 0x10) = uVar4;
  uStack_98 = _UNK_00200238;
  local_a0 = _DAT_00200230;
  local_90[0x3f] = '\0';
  uVar2 = CONCAT71(s_intra_op_thread_pool_must_have_a_001c1bb4._48_7_,
                   s_intra_op_thread_pool_must_have_a_001c1bb4[0x2f]);
  *(undefined8 *)(local_90 + 0x37) = s_intra_op_thread_pool_must_have_a_001c1bb4._55_8_;
  *(undefined8 *)(local_90 + 0x2f) = uVar2;
                    /* try { // try from 0049426c to 0049427f has its CatchHandler @ 00494518 */
  FUN_0063aa48(param_1,2,2,&local_a0);
  if ((local_a0 & 1) != 0) {
    free(local_90);
  }
LAB_00494438:
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00494550  FUN_00494550 =====

void FUN_00494550(undefined8 *param_1,long param_2)

{
  char cVar1;
  long lVar2;
  byte *pbVar3;
  undefined *puVar4;
  byte *pbVar5;
  long lVar6;
  byte local_220 [16];
  void *local_210;
  byte local_200;
  void *local_1f0;
  byte *local_1e8;
  byte *local_1e0;
  undefined8 local_1d0 [14];
  undefined1 auStack_160 [264];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  FUN_007073d8(param_2 + 0x660);
  puVar4 = PTR_s_onnxruntime_007a9878;
  cVar1 = *(char *)(param_2 + 0x670);
  if (cVar1 == '\0') {
    lVar6 = *(long *)(param_2 + 8);
    if (*(int *)(lVar6 + 0x20) < 4) {
                    /* try { // try from 004945ac to 004945c7 has its CatchHandler @ 004946f0 */
      FUN_0048a3f4(local_220,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/inference_session.cc"
                   ,0xaba,"GetModelMetadata");
                    /* try { // try from 004945c8 to 004945e7 has its CatchHandler @ 004946e0 */
      FUN_0048a554(local_1d0,lVar6,3,puVar4,0,local_220);
                    /* try { // try from 004945e8 to 004945fb has its CatchHandler @ 004946d0 */
      FUN_00303e0c(auStack_160,"Model was not loaded",0x14);
      FUN_00637fac(local_1d0);
      pbVar5 = local_1e8;
      if (local_1e8 != (byte *)0x0) {
        while (pbVar3 = local_1e0, pbVar3 != pbVar5) {
          local_1e0 = pbVar3 + -0x18;
          if ((*local_1e0 & 1) != 0) {
            free(*(void **)(pbVar3 + -8));
          }
        }
        local_1e0 = pbVar5;
        free(local_1e8);
      }
      if ((local_200 & 1) != 0) {
        free(local_1f0);
      }
      if ((local_220[0] & 1) != 0) {
        free(local_210);
      }
    }
                    /* try { // try from 00494670 to 00494687 has its CatchHandler @ 004946f4 */
    FUN_0063acd8(local_1d0,2,1,"Model was not loaded.");
    *param_1 = local_1d0[0];
    param_1[1] = 0;
  }
                    /* try { // try from 00494690 to 00494697 has its CatchHandler @ 00494720 */
  FUN_00707c00(param_2 + 0x660);
  if (cVar1 != '\0') {
    *param_1 = 0;
    param_1[1] = param_2 + 0x558;
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00494724  FUN_00494724 =====

void FUN_00494724(undefined8 *param_1,long param_2)

{
  char cVar1;
  long lVar2;
  byte *pbVar3;
  undefined *puVar4;
  byte *pbVar5;
  long lVar6;
  byte local_220 [16];
  void *local_210;
  byte local_200;
  void *local_1f0;
  byte *local_1e8;
  byte *local_1e0;
  undefined8 local_1d0 [14];
  undefined1 auStack_160 [264];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  FUN_007073d8(param_2 + 0x660);
  puVar4 = PTR_s_onnxruntime_007a9878;
  cVar1 = *(char *)(param_2 + 0x670);
  if (cVar1 == '\0') {
    lVar6 = *(long *)(param_2 + 8);
    if (*(int *)(lVar6 + 0x20) < 4) {
                    /* try { // try from 00494780 to 0049479b has its CatchHandler @ 004948cc */
      FUN_0048a3f4(local_220,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/inference_session.cc"
                   ,0xac6,"GetModelInputs");
                    /* try { // try from 0049479c to 004947bb has its CatchHandler @ 004948bc */
      FUN_0048a554(local_1d0,lVar6,3,puVar4,0,local_220);
                    /* try { // try from 004947bc to 004947cf has its CatchHandler @ 004948ac */
      FUN_00303e0c(auStack_160,"Model was not loaded",0x14);
      FUN_00637fac(local_1d0);
      pbVar5 = local_1e8;
      if (local_1e8 != (byte *)0x0) {
        while (pbVar3 = local_1e0, pbVar3 != pbVar5) {
          local_1e0 = pbVar3 + -0x18;
          if ((*local_1e0 & 1) != 0) {
            free(*(void **)(pbVar3 + -8));
          }
        }
        local_1e0 = pbVar5;
        free(local_1e8);
      }
      if ((local_200 & 1) != 0) {
        free(local_1f0);
      }
      if ((local_220[0] & 1) != 0) {
        free(local_210);
      }
    }
                    /* try { // try from 00494844 to 0049485b has its CatchHandler @ 004948d0 */
    FUN_0063acd8(local_1d0,2,1,"Model was not loaded.");
    *param_1 = local_1d0[0];
    param_1[1] = 0;
  }
                    /* try { // try from 00494864 to 0049486b has its CatchHandler @ 004948fc */
  FUN_00707c00(param_2 + 0x660);
  if (cVar1 != '\0') {
    lVar6 = FUN_005ef354(*(undefined8 *)(param_2 + 0x10));
    *param_1 = 0;
    param_1[1] = lVar6 + 0x1f0;
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00494900  FUN_00494900 =====

void FUN_00494900(undefined8 *param_1,long param_2)

{
  char cVar1;
  long lVar2;
  byte *pbVar3;
  undefined *puVar4;
  byte *pbVar5;
  long lVar6;
  byte local_220 [16];
  void *local_210;
  byte local_200;
  void *local_1f0;
  byte *local_1e8;
  byte *local_1e0;
  undefined8 local_1d0 [14];
  undefined1 auStack_160 [264];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  FUN_007073d8(param_2 + 0x660);
  puVar4 = PTR_s_onnxruntime_007a9878;
  cVar1 = *(char *)(param_2 + 0x670);
  if (cVar1 == '\0') {
    lVar6 = *(long *)(param_2 + 8);
    if (*(int *)(lVar6 + 0x20) < 4) {
                    /* try { // try from 0049495c to 00494977 has its CatchHandler @ 00494aa8 */
      FUN_0048a3f4(local_220,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/inference_session.cc"
                   ,0xad3,"GetOverridableInitializers");
                    /* try { // try from 00494978 to 00494997 has its CatchHandler @ 00494a98 */
      FUN_0048a554(local_1d0,lVar6,3,puVar4,0,local_220);
                    /* try { // try from 00494998 to 004949ab has its CatchHandler @ 00494a88 */
      FUN_00303e0c(auStack_160,"Model was not loaded",0x14);
      FUN_00637fac(local_1d0);
      pbVar5 = local_1e8;
      if (local_1e8 != (byte *)0x0) {
        while (pbVar3 = local_1e0, pbVar3 != pbVar5) {
          local_1e0 = pbVar3 + -0x18;
          if ((*local_1e0 & 1) != 0) {
            free(*(void **)(pbVar3 + -8));
          }
        }
        local_1e0 = pbVar5;
        free(local_1e8);
      }
      if ((local_200 & 1) != 0) {
        free(local_1f0);
      }
      if ((local_220[0] & 1) != 0) {
        free(local_210);
      }
    }
                    /* try { // try from 00494a20 to 00494a37 has its CatchHandler @ 00494aac */
    FUN_0063acd8(local_1d0,2,1,"Model was not loaded.");
    *param_1 = local_1d0[0];
    param_1[1] = 0;
  }
                    /* try { // try from 00494a40 to 00494a47 has its CatchHandler @ 00494ad8 */
  FUN_00707c00(param_2 + 0x660);
  if (cVar1 != '\0') {
    lVar6 = FUN_005ef354(*(undefined8 *)(param_2 + 0x10));
    *param_1 = 0;
    param_1[1] = lVar6 + 0x208;
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00494adc  FUN_00494adc =====

void FUN_00494adc(undefined8 *param_1,long param_2)

{
  char cVar1;
  long lVar2;
  byte *pbVar3;
  undefined *puVar4;
  byte *pbVar5;
  long lVar6;
  byte local_220 [16];
  void *local_210;
  byte local_200;
  void *local_1f0;
  byte *local_1e8;
  byte *local_1e0;
  undefined8 local_1d0 [14];
  undefined1 auStack_160 [264];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  FUN_007073d8(param_2 + 0x660);
  puVar4 = PTR_s_onnxruntime_007a9878;
  cVar1 = *(char *)(param_2 + 0x670);
  if (cVar1 == '\0') {
    lVar6 = *(long *)(param_2 + 8);
    if (*(int *)(lVar6 + 0x20) < 4) {
                    /* try { // try from 00494b38 to 00494b53 has its CatchHandler @ 00494c84 */
      FUN_0048a3f4(local_220,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/inference_session.cc"
                   ,0xae0,"GetModelOutputs");
                    /* try { // try from 00494b54 to 00494b73 has its CatchHandler @ 00494c74 */
      FUN_0048a554(local_1d0,lVar6,3,puVar4,0,local_220);
                    /* try { // try from 00494b74 to 00494b87 has its CatchHandler @ 00494c64 */
      FUN_00303e0c(auStack_160,"Model was not loaded",0x14);
      FUN_00637fac(local_1d0);
      pbVar5 = local_1e8;
      if (local_1e8 != (byte *)0x0) {
        while (pbVar3 = local_1e0, pbVar3 != pbVar5) {
          local_1e0 = pbVar3 + -0x18;
          if ((*local_1e0 & 1) != 0) {
            free(*(void **)(pbVar3 + -8));
          }
        }
        local_1e0 = pbVar5;
        free(local_1e8);
      }
      if ((local_200 & 1) != 0) {
        free(local_1f0);
      }
      if ((local_220[0] & 1) != 0) {
        free(local_210);
      }
    }
                    /* try { // try from 00494bfc to 00494c13 has its CatchHandler @ 00494c88 */
    FUN_0063acd8(local_1d0,2,1,"Model was not loaded.");
    *param_1 = local_1d0[0];
    param_1[1] = 0;
  }
                    /* try { // try from 00494c1c to 00494c23 has its CatchHandler @ 00494cb4 */
  FUN_00707c00(param_2 + 0x660);
  if (cVar1 != '\0') {
    lVar6 = FUN_005ef354(*(undefined8 *)(param_2 + 0x10));
    *param_1 = 0;
    param_1[1] = lVar6 + 0x220;
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00494cb8  FUN_00494cb8 =====

void FUN_00494cb8(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  char cVar1;
  long lVar2;
  byte *pbVar3;
  undefined *puVar4;
  byte *pbVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  void *__ptr;
  byte local_220 [16];
  void *local_210;
  byte local_200;
  void *local_1f0;
  byte *local_1e8;
  byte *local_1e0;
  undefined1 auStack_1d0 [112];
  undefined1 auStack_160 [264];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  FUN_007073d8(param_2 + 0x660);
  puVar4 = PTR_s_onnxruntime_007a9878;
  cVar1 = *(char *)(param_2 + 0x671);
  if (cVar1 == '\0') {
    lVar7 = *(long *)(param_2 + 8);
    if (*(int *)(lVar7 + 0x20) < 4) {
                    /* try { // try from 00494d18 to 00494d33 has its CatchHandler @ 00494e84 */
      FUN_0048a3f4(local_220,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/session/inference_session.cc"
                   ,0xaec,"NewIOBinding");
                    /* try { // try from 00494d34 to 00494d53 has its CatchHandler @ 00494e74 */
      FUN_0048a554(auStack_1d0,lVar7,3,puVar4,0,local_220);
                    /* try { // try from 00494d54 to 00494d67 has its CatchHandler @ 00494e64 */
      FUN_00303e0c(auStack_160,"Session was not initialized",0x1b);
      FUN_00637fac(auStack_1d0);
      pbVar5 = local_1e8;
      if (local_1e8 != (byte *)0x0) {
        while (pbVar3 = local_1e0, pbVar3 != pbVar5) {
          local_1e0 = pbVar3 + -0x18;
          if ((*local_1e0 & 1) != 0) {
            free(*(void **)(pbVar3 + -8));
          }
        }
        local_1e0 = pbVar5;
        free(local_1e8);
      }
      if ((local_200 & 1) != 0) {
        free(local_1f0);
      }
      if ((local_220[0] & 1) != 0) {
        free(local_210);
      }
    }
                    /* try { // try from 00494ddc to 00494df3 has its CatchHandler @ 00494e88 */
    FUN_0063acd8(param_1,2,1,"Session not initialized.");
  }
                    /* try { // try from 00494df4 to 00494dfb has its CatchHandler @ 00494ec4 */
  FUN_00707c00(param_2 + 0x660);
  if (cVar1 != '\0') {
    uVar8 = *(undefined8 *)(param_2 + 0x470);
    uVar6 = FUN_00759c3c(0xd0);
                    /* try { // try from 00494e10 to 00494e17 has its CatchHandler @ 00494e9c */
    FUN_004742ec(uVar6,uVar8);
    __ptr = (void *)*param_3;
    *param_3 = uVar6;
    if (__ptr != (void *)0x0) {
      FUN_004868c8(__ptr);
      free(__ptr);
    }
    *param_1 = 0;
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00494ec8  FUN_00494ec8 =====

void FUN_00494ec8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  plVar4 = (long *)FUN_00475d78(param_4);
  lVar1 = *plVar4;
  lVar8 = plVar4[1] - lVar1;
  if ((lVar8 != -0x18) && ((lVar1 != 0 || (plVar4[1] == 0)))) {
    plVar4 = (long *)FUN_00475d80(param_4);
    lVar2 = *plVar4;
    lVar9 = plVar4[1] - lVar2;
    if ((lVar9 != -0x18) && ((lVar2 != 0 || (plVar4[1] == 0)))) {
      plVar4 = (long *)FUN_00475d60(param_4);
      lVar3 = *plVar4;
      lVar7 = plVar4[1] - lVar3;
      if ((lVar7 != -0x18) && ((lVar3 != 0 || (plVar4[1] == 0)))) {
        uVar5 = FUN_00475d68(param_4);
        uVar6 = FUN_00475d70(param_4);
        FUN_004911c8(param_1,param_2,param_3,(lVar8 >> 3) * -0x5555555555555555,lVar1,
                     (lVar9 >> 3) * -0x5555555555555555,lVar2,(lVar7 >> 3) * -0x5555555555555555,
                     lVar3,uVar5,uVar6);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_004839bc();
}


// ===== 00494fe4  FUN_00494fe4 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00494fe4(long param_1,byte *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  byte *pbVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  undefined8 uVar8;
  size_t sVar9;
  long lVar10;
  void *pvVar11;
  undefined8 local_1f0;
  size_t local_1e8;
  void *local_1e0;
  undefined1 local_1d8 [56];
  time_t local_1a0;
  undefined8 local_198;
  undefined *local_190 [9];
  ulong local_148;
  undefined8 uStack_140;
  void *local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined *local_120 [3];
  undefined8 uStack_108;
  undefined4 auStack_100 [4];
  undefined8 local_f0;
  char acStack_88 [32];
  long local_68;
  
  puVar6 = PTR_PTR_007a1e48;
  puVar5 = PTR_DAT_007a1e40;
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  local_190[0] = *(undefined **)(PTR_PTR_007a1e48 + 8);
  puVar1 = PTR_DAT_007a1e40 + 0x40;
  local_f0 = 0;
  local_120[0] = puVar1;
  *(undefined8 *)((long)local_190 + *(long *)(local_190[0] + -0x18)) =
       *(undefined8 *)(PTR_PTR_007a1e48 + 0x10);
  lVar10 = *(long *)(local_190[0] + -0x18);
                    /* try { // try from 00495054 to 0049505f has its CatchHandler @ 004952b4 */
  FUN_00715fc0((long)local_190 + lVar10,local_190 + 1);
  local_190[0] = puVar5 + 0x18;
  *(undefined8 *)((long)&uStack_108 + lVar10) = 0;
  *(undefined4 *)((long)auStack_100 + lVar10) = 0xffffffff;
                    /* try { // try from 00495078 to 0049507f has its CatchHandler @ 004952a0 */
  local_120[0] = puVar1;
  FUN_007160dc(local_190 + 1);
  puVar1 = PTR_DAT_007a10f8;
  local_128 = 0x10;
  pbVar3 = *(byte **)(param_2 + 0x10);
  local_190[1] = PTR_DAT_007a10f8 + 0x10;
  bVar7 = (*param_2 & 1) == 0;
  if (bVar7) {
    pbVar3 = param_2 + 1;
  }
  uStack_140 = 0;
  local_148 = 0;
  uStack_130 = 0;
  local_138 = (void *)0x0;
  uVar2 = (ulong)(*param_2 >> 1);
  if (!bVar7) {
    uVar2 = *(ulong *)(param_2 + 8);
  }
                    /* try { // try from 004950bc to 004950d3 has its CatchHandler @ 004952dc */
  uVar8 = FUN_00303e0c(local_190,pbVar3,uVar2);
  uVar8 = FUN_00303e0c(uVar8,&DAT_001dd23d,1);
  local_198 = FUN_007110f4();
  local_1a0 = FUN_0071116c(&local_198);
                    /* try { // try from 004950ec to 00495163 has its CatchHandler @ 004952e0 */
  localtime_r(&local_1a0,(tm *)local_1d8);
  strftime(acStack_88,0x20,"%Y-%m-%d_%H-%M-%S",(tm *)local_1d8);
  sVar9 = strlen(acStack_88);
  if (0xfffffffffffffff7 < sVar9) {
    if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* try { // try from 00495280 to 00495287 has its CatchHandler @ 004952e0 */
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_1f0);
    }
    goto LAB_00495304;
  }
  if (sVar9 < 0x17) {
    pvVar11 = (void *)((ulong)&local_1f0 | 1);
    local_1f0 = CONCAT71(local_1f0._1_7_,(char)((int)sVar9 << 1));
    if (sVar9 != 0) goto LAB_00495174;
  }
  else {
    uVar2 = (sVar9 & 0xfffffffffffffff8) + 8;
    if ((sVar9 | 7) != 0x17) {
      uVar2 = sVar9 | 7;
    }
    pvVar11 = (void *)FUN_00759c3c(uVar2 + 1);
    local_1f0 = uVar2 + 1 | 1;
    local_1e8 = sVar9;
    local_1e0 = pvVar11;
LAB_00495174:
    memcpy(pvVar11,acStack_88,sVar9);
  }
  *(undefined1 *)((long)pvVar11 + sVar9) = 0;
  sVar9 = local_1e8;
  pvVar11 = local_1e0;
  if ((local_1f0 & 1) == 0) {
    sVar9 = local_1f0 >> 1 & 0x7f;
    pvVar11 = (void *)((long)&local_1f0 + 1);
  }
                    /* try { // try from 004951a4 to 004951bb has its CatchHandler @ 004952c4 */
  uVar8 = FUN_00303e0c(uVar8,pvVar11,sVar9);
  FUN_00303e0c(uVar8,".json",5);
  if ((local_1f0 & 1) != 0) {
    free(local_1e0);
  }
                    /* try { // try from 004951cc to 004951d7 has its CatchHandler @ 0049529c */
  FUN_00718470(local_1d8,local_190 + 1);
                    /* try { // try from 004951d8 to 004951e3 has its CatchHandler @ 00495288 */
  FUN_00638efc(param_1 + 0x2a0,local_1d8);
  if ((local_1d8[0] & 1) != 0) {
    free((void *)local_1d8._16_8_);
  }
  local_190[0] = *(undefined **)puVar6;
  *(undefined8 *)((long)local_190 + *(long *)(local_190[0] + -0x18)) =
       *(undefined8 *)(puVar6 + 0x18);
  local_190[1] = puVar1 + 0x10;
  if ((local_148 & 1) != 0) {
    free(local_138);
  }
  FUN_00716098(local_190 + 1);
  FUN_00716ee4(local_190,puVar6 + 8);
  thunk_FUN_00715e00(local_120);
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
LAB_00495304:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00495308  FUN_00495308 =====

long FUN_00495308(long param_1)

{
  return param_1 + 0x2a0;
}


// ===== 00495310  FUN_00495310 =====

void FUN_00495310(long param_1)

{
  FUN_00598ffc(*(undefined8 *)(param_1 + 0x470));
  return;
}


// ===== 00495318  FUN_00495318 =====

void FUN_00495318(long *param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar3 = PTR_DAT_007a1f68;
  puVar1 = PTR_PTR_007a1f60;
  param_1[0x15] = 0;
  lVar4 = *(long *)(puVar1 + 8);
  uVar2 = *(undefined8 *)(puVar1 + 0x10);
  puVar1 = puVar3 + 0x40;
  param_1[0xf] = (long)puVar1;
  *param_1 = lVar4;
  lVar4 = *(long *)(lVar4 + -0x18);
  param_1[1] = 0;
  *(undefined8 *)((long)param_1 + lVar4) = uVar2;
  lVar4 = (long)param_1 + *(long *)(*param_1 + -0x18);
                    /* try { // try from 0049537c to 00495387 has its CatchHandler @ 00495404 */
  FUN_00715fc0(lVar4,param_1 + 2);
  *(undefined8 *)(lVar4 + 0x88) = 0;
  *(undefined4 *)(lVar4 + 0x90) = 0xffffffff;
  *param_1 = (long)(puVar3 + 0x18);
  param_1[0xf] = (long)puVar1;
                    /* try { // try from 004953a0 to 004953a7 has its CatchHandler @ 004953fc */
  FUN_007160dc(param_1 + 2);
  puVar1 = PTR_DAT_007a10f8 + 0x10;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[2] = (long)puVar1;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  *(uint *)(param_1 + 0xe) = param_3 | 8;
                    /* try { // try from 004953d0 to 004953e3 has its CatchHandler @ 00495418 */
  FUN_007139b0(param_1 + 10,param_2);
  FUN_004a51a8(param_1 + 2);
  return;
}


// ===== 00495450  FUN_00495450 =====

long * FUN_00495450(long *param_1,byte *param_2,byte param_3)

{
  byte *pbVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  char local_4c [4];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_00716408(local_4c,param_1,1);
  if (local_4c[0] != '\0') {
    if ((*param_2 & 1) == 0) {
      param_2[0] = 0;
      param_2[1] = 0;
    }
    else {
      **(undefined1 **)(param_2 + 0x10) = 0;
      param_2[8] = 0;
      param_2[9] = 0;
      param_2[10] = 0;
      param_2[0xb] = 0;
      param_2[0xc] = 0;
      param_2[0xd] = 0;
      param_2[0xe] = 0;
      param_2[0xf] = 0;
    }
    lVar5 = 0;
    do {
      plVar4 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x28);
      pbVar1 = (byte *)plVar4[3];
      if (pbVar1 == (byte *)plVar4[4]) {
                    /* try { // try from 004954ec to 004954f3 has its CatchHandler @ 0049558c */
        uVar3 = (**(code **)(*plVar4 + 0x50))();
        if (uVar3 == 0xffffffff) {
          uVar3 = 6;
          if (lVar5 != 0) {
            uVar3 = 2;
          }
          goto LAB_00495548;
        }
      }
      else {
        plVar4[3] = (long)(pbVar1 + 1);
        uVar3 = (uint)*pbVar1;
      }
      if ((uVar3 & 0xff) == (uint)param_3) {
        uVar3 = 0;
        goto LAB_00495548;
      }
                    /* try { // try from 00495508 to 0049550f has its CatchHandler @ 00495590 */
      FUN_007132e8(param_2);
      lVar5 = lVar5 + -1;
    } while (((*param_2 & 1) == 0) || (*(long *)(param_2 + 8) != -9));
    uVar3 = 4;
LAB_00495548:
    lVar5 = (long)param_1 + *(long *)(*param_1 + -0x18);
    FUN_00715ee0(lVar5,*(uint *)(lVar5 + 0x20) | uVar3);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}


// ===== 00495604  FUN_00495604 =====

undefined4 FUN_00495604(char *param_1,ulong param_2,undefined2 *param_3)

{
  ulong uVar1;
  char cVar2;
  long lVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 uVar8;
  long lVar9;
  long *plVar10;
  void *__dest;
  undefined1 auStack_190 [8];
  ulong local_188;
  ulong local_180;
  void *local_178;
  undefined1 auStack_170 [8];
  long local_168 [2];
  undefined **local_158 [3];
  undefined8 auStack_140 [5];
  byte local_118;
  void *local_108;
  undefined1 auStack_f0 [152];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if (param_2 == 0) {
    local_188 = local_188 & 0xffffffffffffff00;
    __dest = (void *)((ulong)&local_188 | 1);
  }
  else {
    cVar2 = *param_1;
    uVar6 = FUN_00731e20();
    lVar7 = FUN_0073220c(uVar6,&DAT_007b0ad0);
    if ((-1 < (long)cVar2) && ((*(ulong *)(*(long *)(lVar7 + 0x10) + (long)cVar2 * 8) & 1) != 0)) {
      if (*(long *)(lVar3 + 0x28) == local_58) {
        return 0;
      }
      goto LAB_00495858;
    }
    if (0xfffffffffffffff7 < param_2) {
      if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_002fb400(&local_188);
      }
      goto LAB_00495858;
    }
    if (param_2 < 0x17) {
      __dest = (void *)((ulong)&local_188 | 1);
      local_188 = CONCAT71(local_188._1_7_,(char)((int)param_2 << 1));
    }
    else {
      uVar1 = (param_2 & 0xfffffffffffffff8) + 8;
      if ((param_2 | 7) != 0x17) {
        uVar1 = param_2 | 7;
      }
      __dest = (void *)FUN_00759c3c(uVar1 + 1);
      local_188 = uVar1 + 1 | 1;
      local_180 = param_2;
      local_178 = __dest;
    }
    memmove(__dest,param_1,param_2);
  }
  *(undefined1 *)((long)__dest + param_2) = 0;
                    /* try { // try from 004956d8 to 004956e7 has its CatchHandler @ 00495884 */
  FUN_00495318(local_168,&local_188,8);
  if ((local_188 & 1) != 0) {
    free(local_178);
  }
  lVar9 = *(long *)(local_168[0] + -0x18);
                    /* try { // try from 00495700 to 0049571b has its CatchHandler @ 004958b0 */
  uVar6 = FUN_00731e20();
  lVar7 = (long)local_168 + lVar9;
  FUN_00715df0(auStack_190,lVar7);
                    /* try { // try from 0049571c to 0049574f has its CatchHandler @ 004958a0 */
  FUN_00715d60(&local_188,lVar7,uVar6);
  FUN_00732094(&local_188);
  plVar10 = *(long **)((long)auStack_140 + lVar9);
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x10))(plVar10,uVar6);
    FUN_00732054(auStack_170,plVar10 + 1);
    FUN_007320f4(plVar10 + 1,uVar6);
    FUN_00732094(auStack_170);
  }
  FUN_00732094(auStack_190);
  local_188 = local_188 & 0xffffffffffff0000;
                    /* try { // try from 0049577c to 004957ab has its CatchHandler @ 0049589c */
  plVar10 = (long *)FUN_007166c4(local_168,&local_188);
  if (((*(byte *)((long)plVar10 + *(long *)(*plVar10 + -0x18) + 0x20) & 5) == 0) &&
     (iVar5 = FUN_007169b8(local_168), iVar5 == -1)) {
    *param_3 = (undefined2)local_188;
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
  }
  puVar4 = PTR_PTR_007a1f60;
  local_168[0] = *(long *)PTR_PTR_007a1f60;
  *(undefined8 *)((long)local_168 + *(long *)(local_168[0] + -0x18)) =
       *(undefined8 *)(PTR_PTR_007a1f60 + 0x18);
  local_158[0] = &PTR_FUN_0079be30;
  if ((local_118 & 1) != 0) {
    free(local_108);
  }
  FUN_00716098(local_158);
  FUN_00716374(local_168,puVar4 + 8);
  thunk_FUN_00715e00(auStack_f0);
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return uVar8;
  }
LAB_00495858:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004958d4  FUN_004958d4 =====

void FUN_004958d4(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar2 = PTR_PTR_007a1f60;
  lVar3 = *(long *)PTR_PTR_007a1f60;
  uVar4 = *(undefined8 *)(PTR_PTR_007a1f60 + 0x18);
  *param_1 = lVar3;
  puVar1 = PTR_DAT_007a10f8;
  *(undefined8 *)((long)param_1 + *(long *)(lVar3 + -0x18)) = uVar4;
  param_1[2] = (long)(puVar1 + 0x10);
  if ((*(byte *)(param_1 + 10) & 1) != 0) {
    free((void *)param_1[0xc]);
  }
  FUN_00716098(param_1 + 2);
  FUN_00716374(param_1,puVar2 + 8);
  thunk_FUN_00715e00(param_1 + 0xf);
  return;
}


// ===== 00495950  FUN_00495950 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00495950(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  size_t sVar7;
  long lVar8;
  char *__s;
  byte local_188;
  undefined1 auStack_187 [7];
  ulong local_180;
  undefined1 *local_178;
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
  
  puVar5 = PTR_PTR_007a1e48;
  puVar4 = PTR_DAT_007a1e40;
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  puVar1 = PTR_DAT_007a1e40 + 0x40;
  local_170[0] = *(undefined **)(PTR_PTR_007a1e48 + 8);
  local_d0 = 0;
  local_100[0] = puVar1;
  *(undefined8 *)((long)local_170 + *(long *)(local_170[0] + -0x18)) =
       *(undefined8 *)(PTR_PTR_007a1e48 + 0x10);
  lVar8 = *(long *)(local_170[0] + -0x18);
                    /* try { // try from 004959c0 to 004959cb has its CatchHandler @ 00495ba0 */
  FUN_00715fc0((long)local_170 + lVar8,local_170 + 1);
  local_170[0] = puVar4 + 0x18;
  *(undefined8 *)((long)&uStack_e8 + lVar8) = 0;
  *(undefined4 *)((long)auStack_e0 + lVar8) = 0xffffffff;
                    /* try { // try from 004959e4 to 004959eb has its CatchHandler @ 00495b8c */
  local_100[0] = puVar1;
  FUN_007160dc(local_170 + 1);
  puVar1 = PTR_DAT_007a10f8;
  local_170[1] = PTR_DAT_007a10f8 + 0x10;
  uStack_120 = 0;
  local_128 = 0;
  uStack_110 = 0;
  local_118 = (void *)0x0;
  local_108 = 0x10;
                    /* try { // try from 00495a10 to 00495aab has its CatchHandler @ 00495bc8 */
  uVar6 = FUN_00303e0c(local_170,"OrtMemoryInfo:[",0xf);
  uVar6 = FUN_00303e0c(uVar6,"name:",5);
  __s = (char *)*param_2;
  sVar7 = strlen(__s);
  uVar6 = FUN_00303e0c(uVar6,__s,sVar7);
  uVar6 = FUN_00303e0c(uVar6,&DAT_001d6c0a,4);
  uVar6 = FUN_00717214(uVar6,*(undefined4 *)(param_2 + 1));
  uVar6 = FUN_00303e0c(uVar6," OrtMemType:",0xc);
  uVar6 = FUN_00717214(uVar6,*(undefined4 *)((long)param_2 + 0xc));
  uVar6 = FUN_00303e0c(uVar6," OrtAllocatorType:",0x12);
  uVar6 = FUN_00717214(uVar6,*(undefined4 *)(param_2 + 2));
  uVar6 = FUN_00303e0c(uVar6,&DAT_001bc0af,1);
                    /* try { // try from 00495aac to 00495abf has its CatchHandler @ 00495b88 */
  FUN_0049ee94(&local_188,(long)param_2 + 0x14);
  puVar3 = local_178;
  if ((local_188 & 1) == 0) {
    local_180 = (ulong)(local_188 >> 1);
    puVar3 = auStack_187;
  }
                    /* try { // try from 00495ad8 to 00495aef has its CatchHandler @ 00495bb0 */
  uVar6 = FUN_00303e0c(uVar6,puVar3,local_180);
  FUN_00303e0c(uVar6,&DAT_001e1051,1);
  if ((local_188 & 1) != 0) {
    free(local_178);
  }
                    /* try { // try from 00495b00 to 00495b0b has its CatchHandler @ 00495bc8 */
  FUN_00718470(param_1,local_170 + 1);
  local_170[0] = *(undefined **)puVar5;
  *(undefined8 *)((long)local_170 + *(long *)(local_170[0] + -0x18)) =
       *(undefined8 *)(puVar5 + 0x18);
  local_170[1] = puVar1 + 0x10;
  if ((local_128 & 1) != 0) {
    free(local_118);
  }
  FUN_00716098(local_170 + 1);
  FUN_00716ee4(local_170,puVar5 + 8);
  thunk_FUN_00715e00(local_100);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00495bf0  FUN_00495bf0 =====

void FUN_00495bf0(long *param_1,long *param_2)

{
  long lVar1;
  void *pvVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *local_138;
  long *local_130;
  undefined8 *local_128;
  long *local_120;
  undefined8 *apuStack_118 [2];
  undefined1 auStack_108 [56];
  void *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  ulong local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  void *local_80;
  char local_78;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  puVar9 = (undefined8 *)*param_1;
  puVar10 = (undefined8 *)param_1[1];
  uVar7 = (long)puVar10 - (long)puVar9 >> 3;
  if (*(long *)(*param_2 + -8) + ((ulong)param_2[3] >> 1) < uVar7) {
    if ((long)puVar10 - (long)puVar9 == 0x38) {
      uVar7 = 0xf;
    }
    else {
      lVar5 = (long)(uVar7 - 1) / 7 + uVar7;
      uVar7 = 0xffffffffffffffff >> (LZCOUNT(lVar5) & 0x3fU);
      if (lVar5 == 0) {
        uVar7 = 1;
      }
    }
    FUN_0049f098(param_2,uVar7);
    puVar9 = (undefined8 *)*param_1;
    puVar10 = (undefined8 *)param_1[1];
  }
  puVar3 = PTR_DAT_007a10e8;
  if (puVar9 != puVar10) {
    do {
      uVar8 = *puVar9;
      uVar4 = FUN_0058ad04(uVar8);
      lVar5 = FUN_005de688(uVar8);
      plVar6 = (long *)FUN_005de650(uVar8);
      if (lVar5 == 0) {
        local_b8 = local_b8 & 0xffffffffffffff00;
        local_78 = '\0';
                    /* try { // try from 00495d84 to 00495da3 has its CatchHandler @ 00495df0 */
        local_130 = param_2;
        local_120 = plVar6;
        apuStack_118[0] = &local_c8;
        local_c8 = uVar8;
        uStack_c0 = uVar4;
        FUN_0049f3f8(auStack_108,&local_130,plVar6,puVar3,&local_120,apuStack_118);
        pvVar2 = local_80;
        if (local_78 != '\0') {
          local_80 = (void *)0x0;
          goto joined_r0x00495db4;
        }
      }
      else {
        FUN_005cf088(auStack_108,lVar5);
        uStack_b0 = 0;
        local_b8 = 0;
        uStack_a0 = 0;
        uStack_a8 = 0;
        uStack_90 = 0;
        local_98 = 0;
        local_80 = (void *)0x0;
        uStack_88 = 0;
        local_c8 = uVar8;
        uStack_c0 = uVar4;
        FUN_005cab64(&local_b8,auStack_108);
        local_78 = '\x01';
                    /* try { // try from 00495d28 to 00495d47 has its CatchHandler @ 00495e0c */
        local_138 = param_2;
        local_130 = plVar6;
        local_128 = &local_c8;
        FUN_0049f3f8(&local_120,&local_138,plVar6,puVar3,&local_130,&local_128);
        pvVar2 = local_80;
        if ((local_78 != '\0') && (local_80 = (void *)0x0, pvVar2 != (void *)0x0)) {
          free(pvVar2);
        }
        pvVar2 = local_d0;
        local_d0 = (void *)0x0;
joined_r0x00495db4:
        if (pvVar2 != (void *)0x0) {
          free(pvVar2);
        }
      }
      puVar9 = puVar9 + 1;
    } while (puVar9 != puVar10);
  }
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00495e58  FUN_00495e58 =====

void FUN_00495e58(undefined8 *param_1)

{
                    /* try { // try from 00495e68 to 00495e6b has its CatchHandler @ 00495e88 */
  FUN_0071259c();
  *param_1 = &PTR_FUN_0078ff10;
  return;
}


// ===== 00495e8c  FUN_00495e8c =====

undefined8 * FUN_00495e8c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar3 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar3;
  FUN_007139b0(param_1 + 2,param_2 + 2);
  uVar1 = *(undefined1 *)((long)param_2 + 0x2a);
  *(undefined2 *)(param_1 + 5) = *(undefined2 *)(param_2 + 5);
  *(undefined1 *)((long)param_1 + 0x2a) = uVar1;
  FUN_007139b0(param_1 + 6,param_2 + 6);
  FUN_007139b0(param_1 + 9,param_2 + 9);
  uVar3 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar3;
  uVar3 = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar3;
  FUN_007139b0(param_1 + 0x10,param_2 + 0x10);
  uVar4 = param_2[0x13];
  uVar3 = param_2[0x17];
  uVar6 = param_2[0x16];
  uVar5 = param_2[0x15];
  param_1[0x14] = param_2[0x14];
  param_1[0x13] = uVar4;
  param_1[0x17] = uVar3;
  param_1[0x16] = uVar6;
  param_1[0x15] = uVar5;
  uVar3 = param_2[0x18];
  param_1[0x19] = param_2[0x19];
  param_1[0x18] = uVar3;
  FUN_007139b0(param_1 + 0x1a,param_2 + 0x1a);
  uVar4 = param_2[0x1d];
  uVar6 = param_2[0x20];
  uVar5 = param_2[0x1f];
  uVar3 = param_2[0x21];
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1d] = uVar4;
  param_1[0x20] = uVar6;
  param_1[0x1f] = uVar5;
  param_1[0x21] = uVar3;
  if (param_1 == param_2) {
    uVar2 = *(undefined2 *)(param_2 + 0x25);
    *(undefined1 *)((long)param_1 + 0x12a) = *(undefined1 *)((long)param_2 + 0x12a);
    *(undefined2 *)(param_1 + 0x25) = uVar2;
  }
  else {
    FUN_00495fd8(param_1 + 0x22,param_2[0x22],param_2[0x23],
                 ((long)(param_2[0x23] - param_2[0x22]) >> 3) * -0x3333333333333333);
    uVar2 = *(undefined2 *)(param_2 + 0x25);
    *(undefined1 *)((long)param_1 + 0x12a) = *(undefined1 *)((long)param_2 + 0x12a);
    *(undefined2 *)(param_1 + 0x25) = uVar2;
    uVar3 = param_2[0x28];
    *(undefined4 *)(param_1 + 0x2a) = *(undefined4 *)(param_2 + 0x2a);
    FUN_0049f994(param_1 + 0x26,uVar3,0);
    uVar3 = param_2[0x2d];
    *(undefined4 *)(param_1 + 0x2f) = *(undefined4 *)(param_2 + 0x2f);
    FUN_00496320(param_1 + 0x2b,uVar3,0);
  }
  uVar6 = param_2[0x31];
  uVar5 = param_2[0x30];
  uVar4 = param_2[0x33];
  uVar3 = param_2[0x32];
  param_1[0x34] = param_2[0x34];
  param_1[0x31] = uVar6;
  param_1[0x30] = uVar5;
  param_1[0x33] = uVar4;
  param_1[0x32] = uVar3;
  return param_1;
}


// ===== 00495fd8  FUN_00495fd8 =====

void FUN_00495fd8(undefined8 *param_1,byte *param_2,byte *param_3,ulong param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  byte *pbVar4;
  ulong uVar5;
  byte *pbVar6;
  long *plVar7;
  byte *pbVar8;
  undefined8 uVar9;
  byte *local_88;
  byte *local_80;
  long *local_78;
  byte **ppbStack_70;
  byte **local_68;
  undefined1 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  plVar7 = param_1 + 2;
  lVar3 = *plVar7;
  pbVar6 = (byte *)*param_1;
  if ((ulong)((lVar3 - (long)pbVar6 >> 3) * -0x3333333333333333) < param_4) {
    if (pbVar6 != (byte *)0x0) {
      pbVar4 = (byte *)param_1[1];
      pbVar8 = pbVar6;
      if (pbVar4 != pbVar6) {
        do {
          pbVar8 = pbVar4 + -0x28;
          if ((*pbVar8 & 1) != 0) {
            free(*(void **)(pbVar4 + -0x18));
          }
          pbVar4 = pbVar8;
        } while (pbVar8 != pbVar6);
        pbVar8 = (byte *)*param_1;
      }
      param_1[1] = pbVar6;
      free(pbVar8);
      lVar3 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    if (param_4 < 0x666666666666667) {
      uVar5 = (lVar3 >> 3) * -0x6666666666666666;
      if (uVar5 < param_4 || uVar5 - param_4 == 0) {
        uVar5 = param_4;
      }
      if (0x333333333333332 < (ulong)((lVar3 >> 3) * -0x3333333333333333)) {
        uVar5 = 0x666666666666666;
      }
      if (uVar5 < 0x666666666666667) {
        pbVar6 = (byte *)FUN_00759c3c(uVar5 * 0x28);
        ppbStack_70 = &local_88;
        param_1[2] = pbVar6 + uVar5 * 0x28;
        local_68 = &local_80;
        *param_1 = pbVar6;
        param_1[1] = pbVar6;
        local_60 = 0;
        local_88 = pbVar6;
        local_78 = plVar7;
        if (param_2 != param_3) {
          do {
            local_80 = pbVar6;
            if ((*param_2 & 1) == 0) {
              uVar9 = *(undefined8 *)(param_2 + 8);
              uVar2 = *(undefined8 *)param_2;
              *(undefined8 *)(pbVar6 + 0x10) = *(undefined8 *)(param_2 + 0x10);
              *(undefined8 *)(pbVar6 + 8) = uVar9;
              *(undefined8 *)pbVar6 = uVar2;
            }
            else {
                    /* try { // try from 00496294 to 0049629b has its CatchHandler @ 004962f4 */
              FUN_002fb36c(pbVar6,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 8));
            }
            pbVar8 = param_2 + 0x20;
            uVar2 = *(undefined8 *)(param_2 + 0x18);
            param_2 = param_2 + 0x28;
            *(undefined8 *)(pbVar6 + 0x20) = *(undefined8 *)pbVar8;
            *(undefined8 *)(pbVar6 + 0x18) = uVar2;
            pbVar6 = local_80 + 0x28;
          } while (param_2 != param_3);
        }
        param_1[1] = pbVar6;
        local_80 = pbVar6;
        goto LAB_004962ac;
      }
    }
    if (*(long *)(lVar1 + 0x28) == local_58) {
      uVar2 = FUN_0048442c(param_1);
                    /* catch() { ... } // from try @ 00496128 with catch @ 004962f0 */
                    /* catch() { ... } // from try @ 00496294 with catch @ 004962f4 */
      FUN_00484440(&local_78);
      param_1[1] = pbVar6;
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_00755eac(uVar2);
      }
    }
  }
  else {
    pbVar8 = (byte *)param_1[1];
    if ((ulong)(((long)pbVar8 - (long)pbVar6 >> 3) * -0x3333333333333333) < param_4) {
      pbVar4 = param_2 + ((long)pbVar8 - (long)pbVar6);
      if (pbVar8 != pbVar6) {
        do {
          FUN_007139b0(pbVar6,param_2);
          pbVar8 = param_2 + 0x20;
          uVar2 = *(undefined8 *)(param_2 + 0x18);
          param_2 = param_2 + 0x28;
          *(undefined8 *)(pbVar6 + 0x20) = *(undefined8 *)pbVar8;
          *(undefined8 *)(pbVar6 + 0x18) = uVar2;
          pbVar6 = pbVar6 + 0x28;
        } while (param_2 != pbVar4);
        pbVar6 = (byte *)param_1[1];
      }
      ppbStack_70 = &local_88;
      local_68 = &local_80;
      local_60 = 0;
      local_78 = plVar7;
      local_88 = pbVar6;
      for (; local_80 = pbVar6, pbVar4 != param_3; pbVar4 = pbVar4 + 0x28) {
        if ((*pbVar4 & 1) == 0) {
          uVar9 = *(undefined8 *)(pbVar4 + 8);
          uVar2 = *(undefined8 *)pbVar4;
          *(undefined8 *)(pbVar6 + 0x10) = *(undefined8 *)(pbVar4 + 0x10);
          *(undefined8 *)(pbVar6 + 8) = uVar9;
          *(undefined8 *)pbVar6 = uVar2;
        }
        else {
                    /* try { // try from 00496128 to 0049612f has its CatchHandler @ 004962f0 */
          FUN_002fb36c(pbVar6,*(undefined8 *)(pbVar4 + 0x10),*(undefined8 *)(pbVar4 + 8));
        }
        uVar2 = *(undefined8 *)(pbVar4 + 0x18);
        *(undefined8 *)(pbVar6 + 0x20) = *(undefined8 *)(pbVar4 + 0x20);
        *(undefined8 *)(pbVar6 + 0x18) = uVar2;
        pbVar6 = local_80 + 0x28;
      }
      param_1[1] = pbVar6;
    }
    else {
      if (param_2 != param_3) {
        do {
          FUN_007139b0(pbVar6,param_2);
          pbVar8 = param_2 + 0x20;
          uVar2 = *(undefined8 *)(param_2 + 0x18);
          param_2 = param_2 + 0x28;
          *(undefined8 *)(pbVar6 + 0x20) = *(undefined8 *)pbVar8;
          *(undefined8 *)(pbVar6 + 0x18) = uVar2;
          pbVar6 = pbVar6 + 0x28;
        } while (param_2 != param_3);
        pbVar8 = (byte *)param_1[1];
      }
      while (pbVar4 = pbVar8, pbVar4 != pbVar6) {
        pbVar8 = pbVar4 + -0x28;
        if ((*pbVar8 & 1) != 0) {
          free(*(void **)(pbVar4 + -0x18));
        }
      }
      param_1[1] = pbVar6;
    }
LAB_004962ac:
    if (*(long *)(lVar1 + 0x28) == local_58) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00496320  FUN_00496320 =====

void FUN_00496320(long *param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *__ptr;
  undefined8 local_60 [3];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    lVar3 = 0;
    do {
      *(undefined8 *)(*param_1 + lVar3 * 8) = 0;
      lVar3 = lVar3 + 1;
    } while (lVar2 != lVar3);
    __ptr = (long *)param_1[2];
    param_1[2] = 0;
    param_1[3] = 0;
    while (__ptr != (long *)0x0) {
      if (param_2 == param_3) goto LAB_00496418;
                    /* try { // try from 00496384 to 0049638f has its CatchHandler @ 00496434 */
      FUN_007139b0(__ptr + 2,param_2 + 2);
      lVar2 = *__ptr;
      __ptr[5] = param_2[5];
                    /* try { // try from 0049639c to 004963a7 has its CatchHandler @ 00496430 */
      FUN_00496490(param_1,__ptr);
      param_2 = (long *)*param_2;
      __ptr = (long *)lVar2;
    }
  }
  for (; param_2 != param_3; param_2 = (long *)*param_2) {
    FUN_00496cc8(local_60,param_1,param_2 + 2);
                    /* try { // try from 004963cc to 004963d3 has its CatchHandler @ 00496468 */
    FUN_00496490(param_1,local_60[0]);
  }
LAB_004963e0:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00496418:
  do {
    plVar4 = (long *)*__ptr;
    if ((*(byte *)(__ptr + 2) & 1) != 0) {
      free((void *)__ptr[4]);
    }
    free(__ptr);
    __ptr = plVar4;
  } while (plVar4 != (long *)0x0);
  goto LAB_004963e0;
}


// ===== 00496490  FUN_00496490 =====

long FUN_00496490(long *param_1,long *param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  undefined1 uStack_39;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  bVar1 = *(byte *)(param_2 + 2);
  uVar5 = param_2[3];
  lVar3 = param_2[4];
  if ((bVar1 & 1) == 0) {
    lVar3 = (long)param_2 + 0x11;
    uVar5 = (ulong)(bVar1 >> 1);
  }
                    /* try { // try from 004964d4 to 004964df has its CatchHandler @ 00496600 */
  lVar3 = FUN_0034bfb4(&uStack_39,lVar3,uVar5);
  param_2[1] = lVar3;
  plVar4 = (long *)FUN_00496650(param_1,lVar3,param_2 + 2);
  uVar5 = param_1[1];
  uVar6 = param_2[1];
  uVar10 = NEON_cnt(uVar5,1);
  uVar9 = NEON_uaddlv(uVar10,1);
  uVar7 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
  if (uVar7 < 2) {
    uVar6 = uVar5 - 1 & uVar6;
  }
  else if (uVar5 <= uVar6) {
    uVar8 = 0;
    if (uVar5 != 0) {
      uVar8 = uVar6 / uVar5;
    }
    uVar6 = uVar6 - uVar8 * uVar5;
  }
  if (plVar4 == (long *)0x0) {
    plVar4 = param_1 + 2;
    *param_2 = *plVar4;
    *plVar4 = (long)param_2;
    *(long **)(*param_1 + uVar6 * 8) = plVar4;
    if (*param_2 == 0) goto LAB_004965c8;
    uVar8 = *(ulong *)(*param_2 + 8);
    if (uVar7 < 2) {
      uVar8 = uVar8 & uVar5 - 1;
    }
    else if (uVar5 <= uVar8) {
      uVar6 = 0;
      if (uVar5 != 0) {
        uVar6 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar6 * uVar5;
    }
  }
  else {
    *param_2 = *plVar4;
    *plVar4 = (long)param_2;
    if (*param_2 == 0) goto LAB_004965c8;
    uVar8 = *(ulong *)(*param_2 + 8);
    if (uVar7 < 2) {
      uVar8 = uVar8 & uVar5 - 1;
    }
    else if (uVar5 <= uVar8) {
      uVar7 = 0;
      if (uVar5 != 0) {
        uVar7 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar7 * uVar5;
    }
    if (uVar8 == uVar6) goto LAB_004965c8;
  }
  *(long **)(*param_1 + uVar8 * 8) = param_2;
LAB_004965c8:
  param_1[3] = param_1[3] + 1;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return (long)param_2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00496604  FUN_00496604 =====

void FUN_00496604(undefined8 param_1,undefined8 *param_2)

{
  void *pvVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      pvVar1 = (void *)*param_2;
      if ((*(byte *)(param_2 + 2) & 1) != 0) {
        free((void *)param_2[4]);
      }
      free(param_2);
      param_2 = (undefined8 *)pvVar1;
    } while (pvVar1 != (void *)0x0);
  }
  return;
}


// ===== 00496650  FUN_00496650 =====

long * FUN_00496650(long *param_1,ulong param_2,byte *param_3)

{
  bool bVar1;
  size_t sVar2;
  size_t sVar3;
  byte *__s2;
  byte bVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  byte bVar15;
  undefined2 uVar16;
  undefined8 uVar17;
  
  uVar12 = param_1[1];
  if ((uVar12 != 0) && ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)uVar12)) {
    uVar17 = NEON_cnt(uVar12,1);
    uVar16 = NEON_uaddlv(uVar17,1);
    uVar7 = CONCAT62((int6)((ulong)uVar17 >> 0x10),uVar16);
    goto joined_r0x004967cc;
  }
  if (uVar12 < 3) {
    uVar7 = 1;
  }
  else {
    uVar7 = (ulong)((uVar12 & uVar12 - 1) != 0);
  }
  uVar7 = uVar7 | uVar12 << 1;
  uVar13 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (uVar7 <= uVar13) {
    uVar7 = uVar13;
  }
  if (uVar7 - 1 == 0) {
    uVar7 = 2;
  }
  else if ((uVar7 & uVar7 - 1) != 0) {
    uVar7 = FUN_00711ce0(uVar7);
    uVar12 = param_1[1];
  }
  if (uVar12 < uVar7) {
LAB_00496724:
    FUN_004969b8(param_1);
  }
  else if (uVar7 < uVar12) {
    uVar13 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if (uVar12 < 3) {
LAB_00496798:
      uVar13 = FUN_00711ce0();
      if (uVar7 <= uVar13) {
        uVar7 = uVar13;
      }
    }
    else {
      uVar17 = NEON_cnt(uVar12,1);
      uVar16 = NEON_uaddlv(uVar17,1);
      if (1 < (CONCAT62((int6)((ulong)uVar17 >> 0x10),uVar16) & 0xffffffff)) goto LAB_00496798;
      if (1 < uVar13) {
        uVar13 = 1L << (-LZCOUNT(uVar13 - 1) & 0x3fU);
      }
      if (uVar7 <= uVar13) {
        uVar7 = uVar13;
      }
    }
    if (uVar7 < uVar12) goto LAB_00496724;
  }
  uVar12 = param_1[1];
  uVar17 = NEON_cnt(uVar12,1);
  uVar16 = NEON_uaddlv(uVar17,1);
  uVar7 = CONCAT62((int6)((ulong)uVar17 >> 0x10),uVar16);
joined_r0x004967cc:
  if ((uVar7 & 0xffffffff) < 2) {
    uVar13 = uVar12 - 1 & param_2;
  }
  else {
    uVar13 = param_2;
    if (uVar12 <= param_2) {
      uVar13 = 0;
      if (uVar12 != 0) {
        uVar13 = param_2 / uVar12;
      }
      uVar13 = param_2 - uVar13 * uVar12;
    }
  }
  plVar14 = *(long **)(*param_1 + uVar13 * 8);
  if (plVar14 == (long *)0x0) {
    plVar11 = (long *)0x0;
  }
  else {
    sVar3 = *(size_t *)(param_3 + 8);
    __s2 = *(byte **)(param_3 + 0x10);
    if ((*param_3 & 1) == 0) {
      __s2 = param_3 + 1;
      sVar3 = (ulong)(*param_3 >> 1);
    }
    if ((uVar7 & 0xffffffff) < 2) {
      bVar15 = 0;
      do {
        plVar11 = plVar14;
        plVar14 = (long *)*plVar11;
        if (plVar14 == (long *)0x0) {
          return plVar11;
        }
        if ((plVar14[1] & uVar12 - 1) != uVar13) {
          return plVar11;
        }
        if (plVar14[1] == param_2) {
          bVar4 = *(byte *)(plVar14 + 2);
          uVar7 = (ulong)(bVar4 >> 1);
          sVar2 = uVar7;
          if ((bVar4 & 1) != 0) {
            sVar2 = plVar14[3];
          }
          if (sVar2 != sVar3) goto LAB_0049681c;
          if ((bVar4 & 1) == 0) {
            if (bVar4 < 2) {
              bVar5 = true;
            }
            else {
              pbVar9 = (byte *)((long)plVar14 + 0x11);
              pbVar10 = __s2;
              do {
                uVar7 = uVar7 - 1;
                bVar5 = *pbVar9 == *pbVar10;
                if (!bVar5) break;
                pbVar9 = pbVar9 + 1;
                pbVar10 = pbVar10 + 1;
              } while (uVar7 != 0);
            }
          }
          else {
            iVar6 = memcmp((void *)plVar14[4],__s2,plVar14[3]);
            bVar5 = iVar6 == 0;
          }
        }
        else {
LAB_0049681c:
          bVar5 = false;
        }
        bVar1 = (bool)(bVar15 & (bVar5 ^ 1U));
        bVar15 = bVar15 | bVar5;
      } while (!bVar1);
    }
    else {
      bVar15 = 0;
      do {
        plVar11 = plVar14;
        plVar14 = (long *)*plVar11;
        if (plVar14 == (long *)0x0) {
          return plVar11;
        }
        uVar8 = plVar14[1];
        uVar7 = uVar8;
        if (uVar12 <= uVar8) {
          uVar7 = 0;
          if (uVar12 != 0) {
            uVar7 = uVar8 / uVar12;
          }
          uVar7 = uVar8 - uVar7 * uVar12;
        }
        if (uVar7 != uVar13) {
          return plVar11;
        }
        if (uVar8 == param_2) {
          bVar4 = *(byte *)(plVar14 + 2);
          uVar7 = (ulong)(bVar4 >> 1);
          sVar2 = uVar7;
          if ((bVar4 & 1) != 0) {
            sVar2 = plVar14[3];
          }
          if (sVar2 != sVar3) goto LAB_004968f4;
          if ((bVar4 & 1) == 0) {
            if (bVar4 < 2) {
              bVar5 = true;
            }
            else {
              pbVar9 = (byte *)((long)plVar14 + 0x11);
              pbVar10 = __s2;
              do {
                uVar7 = uVar7 - 1;
                bVar5 = *pbVar9 == *pbVar10;
                if (!bVar5) break;
                pbVar9 = pbVar9 + 1;
                pbVar10 = pbVar10 + 1;
              } while (uVar7 != 0);
            }
          }
          else {
            iVar6 = memcmp((void *)plVar14[4],__s2,plVar14[3]);
            bVar5 = iVar6 == 0;
          }
        }
        else {
LAB_004968f4:
          bVar5 = false;
        }
        bVar1 = (bool)(bVar15 & (bVar5 ^ 1U));
        bVar15 = bVar15 | bVar5;
      } while (!bVar1);
    }
  }
  return plVar11;
}


// ===== 004969b8  FUN_004969b8 =====

void FUN_004969b8(long *param_1,ulong param_2)

{
  void *__s2;
  byte bVar1;
  ulong uVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  void *pvVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  char *pcVar13;
  char *pcVar14;
  ulong uVar15;
  size_t __n;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  ulong uVar19;
  undefined2 uVar20;
  undefined8 uVar21;
  
  if (param_2 == 0) {
    pvVar6 = (void *)*param_1;
    *param_1 = 0;
    if (pvVar6 != (void *)0x0) {
      free(pvVar6);
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_002f9ee0();
    }
    lVar5 = FUN_00759c3c(param_2 << 3);
    pvVar6 = (void *)*param_1;
    *param_1 = lVar5;
    if (pvVar6 != (void *)0x0) {
      free(pvVar6);
    }
    uVar7 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar7 * 8) = 0;
      uVar7 = uVar7 + 1;
    } while (param_2 != uVar7);
    plVar18 = (long *)param_1[2];
    if (plVar18 != (long *)0x0) {
      uVar7 = plVar18[1];
      uVar21 = NEON_cnt(param_2,1);
      uVar20 = NEON_uaddlv(uVar21,1);
      uVar11 = CONCAT62((int6)((ulong)uVar21 >> 0x10),uVar20) & 0xffffffff;
      if (uVar11 < 2) {
        uVar7 = uVar7 & param_2 - 1;
      }
      else if (param_2 <= uVar7) {
        uVar19 = 0;
        if (param_2 != 0) {
          uVar19 = uVar7 / param_2;
        }
        uVar7 = uVar7 - uVar19 * param_2;
      }
      *(long **)(*param_1 + uVar7 * 8) = param_1 + 2;
      plVar17 = (long *)*plVar18;
      if (plVar17 != (long *)0x0) {
        do {
          uVar19 = plVar17[1];
          if (uVar11 < 2) {
            uVar19 = uVar19 & param_2 - 1;
          }
          else if (param_2 <= uVar19) {
            uVar2 = 0;
            if (param_2 != 0) {
              uVar2 = uVar19 / param_2;
            }
            uVar19 = uVar19 - uVar2 * param_2;
          }
          plVar8 = plVar17;
          if (uVar19 != uVar7) {
            if (*(long *)(*param_1 + uVar19 * 8) == 0) {
              *(long **)(*param_1 + uVar19 * 8) = plVar18;
              uVar7 = uVar19;
            }
            else {
              plVar8 = (long *)*plVar17;
              plVar16 = plVar17;
              if (plVar8 != (long *)0x0) {
                bVar1 = *(byte *)(plVar17 + 2);
                __n = plVar17[3];
                uVar10 = (ulong)(bVar1 >> 1);
                uVar2 = uVar10;
                if ((bVar1 & 1) != 0) {
                  uVar2 = __n;
                }
                if ((bVar1 & 1) == 0) {
                  if (bVar1 < 2) {
                    uVar15 = (ulong)(*(byte *)(plVar8 + 2) >> 1);
                    if ((*(byte *)(plVar8 + 2) & 1) != 0) {
                      uVar15 = plVar8[3];
                    }
                    if (uVar15 == uVar10) {
                      do {
                        plVar16 = plVar8;
                        plVar8 = (long *)*plVar16;
                        if (plVar8 == (long *)0x0) break;
                        uVar10 = (ulong)(*(byte *)(plVar8 + 2) >> 1);
                        if ((*(byte *)(plVar8 + 2) & 1) != 0) {
                          uVar10 = plVar8[3];
                        }
                      } while (uVar2 == uVar10);
                    }
                  }
                  else {
                    plVar9 = plVar8;
                    while( true ) {
                      plVar12 = plVar9;
                      bVar1 = *(byte *)(plVar12 + 2);
                      uVar15 = (ulong)(bVar1 >> 1);
                      if ((bVar1 & 1) != 0) {
                        uVar15 = plVar12[3];
                      }
                      plVar8 = plVar12;
                      if (uVar2 != uVar15) break;
                      pcVar13 = (char *)((long)plVar12 + 0x11);
                      pcVar14 = (char *)((long)plVar17 + 0x11);
                      uVar15 = uVar10;
                      if ((bVar1 & 1) != 0) {
                        pcVar13 = (char *)plVar12[4];
                      }
                      do {
                        if (*pcVar14 != *pcVar13) goto LAB_00496bf0;
                        uVar15 = uVar15 - 1;
                        pcVar13 = pcVar13 + 1;
                        pcVar14 = pcVar14 + 1;
                      } while (uVar15 != 0);
                      plVar8 = (long *)0x0;
                      plVar9 = (long *)*plVar12;
                      plVar16 = plVar12;
                      if ((long *)*plVar12 == (long *)0x0) break;
                    }
                  }
                }
                else {
                  bVar3 = (*(byte *)(plVar8 + 2) & 1) == 0;
                  uVar10 = (ulong)(*(byte *)(plVar8 + 2) >> 1);
                  if (!bVar3) {
                    uVar10 = plVar8[3];
                  }
                  if (uVar2 == uVar10) {
                    pvVar6 = (void *)plVar17[4];
                    do {
                      plVar9 = plVar8;
                      __s2 = (void *)((long)plVar9 + 0x11);
                      if (!bVar3) {
                        __s2 = (void *)plVar9[4];
                      }
                      iVar4 = memcmp(pvVar6,__s2,__n);
                      plVar8 = plVar9;
                      if ((iVar4 != 0) ||
                         (plVar8 = (long *)*plVar9, plVar16 = plVar9, plVar8 == (long *)0x0)) break;
                      bVar3 = (*(byte *)(plVar8 + 2) & 1) == 0;
                      uVar10 = (ulong)(*(byte *)(plVar8 + 2) >> 1);
                      if (!bVar3) {
                        uVar10 = plVar8[3];
                      }
                    } while (uVar2 == uVar10);
                  }
                }
              }
LAB_00496bf0:
              *plVar18 = (long)plVar8;
              *plVar16 = **(long **)(*param_1 + uVar19 * 8);
              **(undefined8 **)(*param_1 + uVar19 * 8) = plVar17;
              plVar8 = plVar18;
            }
          }
          plVar17 = (long *)*plVar8;
          plVar18 = plVar8;
        } while (plVar17 != (long *)0x0);
      }
    }
  }
  return;
}


// ===== 00496cc8  FUN_00496cc8 =====

void FUN_00496cc8(undefined8 *param_1,long param_2,byte *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 uStack_49;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  puVar7 = (undefined8 *)FUN_00759c3c(0x30);
  bVar4 = *param_3;
  *param_1 = puVar7;
  param_1[1] = param_2 + 0x10;
  *(undefined1 *)(param_1 + 2) = 0;
  *puVar7 = 0;
  puVar7[1] = 0;
  if ((bVar4 & 1) == 0) {
    uVar9 = *(undefined8 *)param_3;
    uVar8 = *(undefined8 *)(param_3 + 0x10);
    puVar7[3] = *(undefined8 *)(param_3 + 8);
    puVar7[2] = uVar9;
    puVar7[4] = uVar8;
  }
  else {
                    /* try { // try from 00496d30 to 00496d37 has its CatchHandler @ 00496d98 */
    FUN_002fb36c(puVar7 + 2,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 8));
  }
  bVar4 = *(byte *)(puVar7 + 2);
  puVar7[5] = *(undefined8 *)(param_3 + 0x18);
  uVar2 = puVar7[3];
  lVar3 = puVar7[4];
  *(undefined1 *)(param_1 + 2) = 1;
  uVar1 = (ulong)(bVar4 >> 1);
  lVar6 = (long)puVar7 + 0x11;
  if ((bVar4 & 1) != 0) {
    uVar1 = uVar2;
    lVar6 = lVar3;
  }
                    /* try { // try from 00496d64 to 00496d6b has its CatchHandler @ 00496dc0 */
  uVar8 = FUN_0034bfb4(&uStack_49,lVar6,uVar1);
  puVar7[1] = uVar8;
  if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00496dc4  FUN_00496dc4 =====

void FUN_00496dc4(undefined8 param_1,undefined8 *param_2)

{
  byte bVar1;
  void *pvVar2;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      pvVar2 = (void *)*param_2;
      if ((*(byte *)(param_2 + 5) & 1) == 0) {
        bVar1 = *(byte *)(param_2 + 2);
      }
      else {
        free((void *)param_2[7]);
        bVar1 = *(byte *)(param_2 + 2);
      }
      if ((bVar1 & 1) != 0) {
        free((void *)param_2[4]);
      }
      free(param_2);
      param_2 = (undefined8 *)pvVar2;
    } while (pvVar2 != (void *)0x0);
  }
  return;
}


// ===== 00496e2c  FUN_00496e2c =====

void FUN_00496e2c(byte *param_1)

{
  byte bVar1;
  undefined8 *__ptr;
  void *pvVar2;
  
  __ptr = (undefined8 *)*(void **)(param_1 + 0x28);
  while (__ptr != (undefined8 *)0x0) {
    pvVar2 = (void *)*__ptr;
    if ((*(byte *)(__ptr + 5) & 1) == 0) {
      bVar1 = *(byte *)(__ptr + 2);
    }
    else {
      free((void *)__ptr[7]);
      bVar1 = *(byte *)(__ptr + 2);
    }
    if ((bVar1 & 1) != 0) {
      free((void *)__ptr[4]);
    }
    free(__ptr);
    __ptr = (undefined8 *)pvVar2;
  }
  pvVar2 = *(void **)(param_1 + 0x18);
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  if (pvVar2 != (void *)0x0) {
    free(pvVar2);
  }
  if ((*param_1 & 1) != 0) {
    free(*(void **)(param_1 + 0x10));
    return;
  }
  return;
}


// ===== 00496ec8  FUN_00496ec8 =====

void FUN_00496ec8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_002f9e60("vector");
}


// ===== 00496edc  FUN_00496edc =====

long * FUN_00496edc(long *param_1,byte *param_2)

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
                    /* try { // try from 00496f24 to 00496f2b has its CatchHandler @ 0049712c */
  uVar8 = FUN_0034bfb4(&uStack_59,pbVar3,uVar8);
  uVar12 = param_1[1];
  if (uVar12 == 0) {
LAB_004970f4:
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
          if (plVar9[1] == uVar8) {
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
                  if (bVar4 >> 1 == uVar10) goto LAB_004970f8;
                }
              }
              else {
                iVar7 = memcmp((void *)plVar9[4],pbVar3,plVar9[3]);
                if (iVar7 == 0) break;
              }
            }
          }
          else if ((plVar9[1] & uVar12 - 1) != uVar11) goto LAB_004970f4;
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
      else {
        do {
          uVar10 = plVar9[1];
          if (uVar10 == uVar8) {
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
                  if (bVar4 >> 1 == uVar10) goto LAB_004970f8;
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
            if (uVar10 != uVar11) goto LAB_004970f4;
          }
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
    }
  }
LAB_004970f8:
  if (*(long *)(lVar6 + 0x28) == local_58) {
    return plVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00497130  FUN_00497130 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00497130(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
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
  
  puVar4 = PTR_PTR_007a1e48;
  puVar3 = PTR_DAT_007a1e40;
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  puVar1 = PTR_DAT_007a1e40 + 0x40;
  local_178[0] = *(undefined **)(PTR_PTR_007a1e48 + 8);
  local_d8 = 0;
  local_108[0] = puVar1;
  *(undefined8 *)((long)local_178 + *(long *)(local_178[0] + -0x18)) =
       *(undefined8 *)(PTR_PTR_007a1e48 + 0x10);
  lVar5 = *(long *)(local_178[0] + -0x18);
                    /* try { // try from 004971a8 to 004971b3 has its CatchHandler @ 004972b4 */
  FUN_00715fc0((long)local_178 + lVar5,local_178 + 1);
  local_178[0] = puVar3 + 0x18;
  *(undefined8 *)((long)&uStack_f0 + lVar5) = 0;
  *(undefined4 *)((long)auStack_e8 + lVar5) = 0xffffffff;
                    /* try { // try from 004971cc to 004971d3 has its CatchHandler @ 00497294 */
  local_108[0] = puVar1;
  FUN_007160dc(local_178 + 1);
  puVar1 = PTR_DAT_007a10f8 + 0x10;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_110 = 0x10;
  local_178[1] = puVar1;
  FUN_004972c8(local_178,param_2,param_3,param_4);
                    /* try { // try from 0049720c to 00497217 has its CatchHandler @ 00497290 */
  FUN_00718470(param_1,local_178 + 1);
  local_178[0] = *(undefined **)puVar4;
  *(undefined8 *)((long)local_178 + *(long *)(local_178[0] + -0x18)) =
       *(undefined8 *)(puVar4 + 0x18);
  local_178[1] = puVar1;
  if ((local_130 & 1) != 0) {
    free(local_120);
  }
  FUN_00716098(local_178 + 1);
  FUN_00716ee4(local_178,puVar4 + 8);
  thunk_FUN_00715e00(local_108);
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


