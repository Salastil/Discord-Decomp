// ===== 006a8830  FUN_006a8830 =====

undefined8 FUN_006a8830(long param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  ulong __n;
  uint local_24;
  
  puVar4 = (uint *)&stack0xffffffffffffffe0;
  bVar1 = (byte)param_2;
  if (param_2 < 0x80) {
    puVar4 = (uint *)((ulong)&local_24 | 1);
    local_24 = param_2 & 0xff;
    __n = 1;
  }
  else {
    if (param_2 < 0x800) {
      puVar4 = (uint *)((ulong)&local_24 | 2);
      local_24 = (uint)(bVar1 & 0xffff3f | 0x80) << 8;
      __n = 2;
      bVar6 = (byte)(param_2 >> 6) | 0xc0;
    }
    else {
      bVar2 = (byte)(param_2 >> 6);
      if (param_2 >> 0x10 == 0) {
        local_24._0_2_ = (bVar2 & 0xff3f | 0x80) << 8;
        puVar4 = (uint *)((ulong)&local_24 | 3);
        local_24 = CONCAT12(bVar1,(short)local_24) & 0xff3fffff | 0x800000;
        __n = 3;
        bVar6 = (byte)(param_2 >> 0xc) | 0xe0;
      }
      else {
        __n = 4;
        bVar6 = (byte)(param_2 >> 0x12) | 0xf0;
        local_24 = (uint)(CONCAT21(CONCAT11(bVar1,bVar2),(char)(param_2 >> 0xc)) & 0x3f3f3f |
                         0x808080) << 8;
      }
    }
    local_24 = CONCAT31(local_24._1_3_,bVar6);
  }
  puVar5 = &local_24;
  do {
    if (puVar5 == puVar4) {
      if (0x28U - *(long *)(param_1 + 0x28) < __n) {
        return 1;
      }
      memcpy((void *)(param_1 + *(long *)(param_1 + 0x28)),&local_24,__n);
      *(ulong *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + __n;
      return 0;
    }
    uVar3 = *puVar5;
    if ((char)uVar3 == '\n') {
      return 1;
    }
    puVar5 = (uint *)((long)puVar5 + 1);
  } while ((char)uVar3 != ' ');
  return 1;
}


// ===== 006a895c  FUN_006a895c =====

void FUN_006a895c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  core::fmt::write(param_1,&DAT_00975ff0,param_2,param_3);
  return;
}


// ===== 006a8970  FUN_006a8970 =====

void FUN_006a8970(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x006a8978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0x30))(*param_1);
  return;
}


// ===== 006a897c  FUN_006a897c =====

void FUN_006a897c(byte *param_1)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  ulong local_88 [3];
  undefined8 local_70;
  ulong local_68;
  undefined8 local_60;
  long lStack_58;
  undefined8 local_50;
  undefined8 local_48;
  
  bVar2 = *param_1;
  if (bVar2 < 3) {
    if (2 < bVar2) {
LAB_006a89dc:
      lVar4 = *(long *)(param_1 + 8);
      if (lVar4 == 0) {
        local_48 = 0;
      }
      else {
        local_70 = *(undefined8 *)(param_1 + 0x10);
        local_48 = *(undefined8 *)(param_1 + 0x18);
        local_88[1] = 0;
        local_60 = 0;
        local_88[2] = lVar4;
        lStack_58 = lVar4;
        local_50 = local_70;
      }
      local_88[0] = (ulong)(lVar4 != 0);
      local_68 = local_88[0];
      FUN_006b41fc(local_88);
      return;
    }
  }
  else if (bVar2 == 3) {
    if (*(long *)(param_1 + 8) != 0) {
      __rustc::__rust_dealloc(*(undefined8 *)(param_1 + 0x10),*(long *)(param_1 + 8),1);
      return;
    }
  }
  else if (bVar2 == 4) {
    lVar1 = *(long *)(param_1 + 0x10);
    lVar4 = *(long *)(param_1 + 0x18) + 1;
    lVar3 = lVar1;
    while (lVar4 = lVar4 + -1, lVar4 != 0) {
                    /* try { // try from 006a8a40 to 006a8a43 has its CatchHandler @ 006a8aa8 */
      FUN_006b4318(lVar3);
      lVar3 = lVar3 + 0x20;
    }
    if (*(long *)(param_1 + 8) != 0) {
      __rustc::__rust_dealloc(lVar1,*(long *)(param_1 + 8) << 5,8);
      return;
    }
  }
  else if (bVar2 != 0xff) goto LAB_006a89dc;
  return;
}


// ===== 006a8aec  FUN_006a8aec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006a8aec(undefined8 *param_1,undefined8 param_2,long param_3,long param_4)

{
  byte bVar1;
  char cVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 local_68;
  undefined1 local_64;
  undefined1 local_63;
  undefined1 local_44;
  char local_43;
  
  uVar8 = *param_1;
  lVar6 = FUN_006ad434(uVar8,&DAT_00454994,1);
  puVar5 = PTR_HEX_DIGITS_0099f5b8;
  puVar4 = PTR_ESCAPE_0099f5b0;
  uVar3 = _s__u00_003752c8;
  do {
    if (lVar6 != 0) {
      return;
    }
    while( true ) {
      lVar6 = 0;
      do {
        lVar7 = lVar6;
        if (param_4 == lVar7) {
          if ((param_4 != 0) && (lVar6 = FUN_006ad434(uVar8,param_3,param_4), lVar6 != 0)) {
            return;
          }
          FUN_006ad434(uVar8,&DAT_00454994,1);
          return;
        }
        bVar1 = *(byte *)(param_3 + lVar7);
        lVar6 = lVar7 + 1;
        cVar2 = puVar4[bVar1];
      } while (cVar2 == '\0');
      if ((lVar7 != 0) && (lVar7 = FUN_006ad434(uVar8,param_3,lVar7), lVar7 != 0)) {
        return;
      }
      param_3 = param_3 + lVar6;
      param_4 = param_4 - lVar6;
      if (cVar2 != 'u') break;
      local_63 = puVar5[(ulong)bVar1 & 0xf];
      local_64 = puVar5[bVar1 >> 4];
      local_68 = (undefined4)uVar3;
      lVar6 = FUN_006ad434(uVar8,&local_68,6);
      if (lVar6 != 0) {
        return;
      }
    }
    local_44 = 0x5c;
    local_43 = cVar2;
    lVar6 = FUN_006ad434(uVar8,&local_44,2);
  } while( true );
}


// ===== 006a8c38  FUN_006a8c38 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006a8c38(undefined8 *param_1,undefined8 param_2,long param_3,long param_4)

{
  byte bVar1;
  char cVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 local_68;
  undefined1 local_64;
  undefined1 local_63;
  undefined1 local_44;
  char local_43;
  
  uVar8 = *param_1;
  lVar6 = FUN_006ad434(uVar8,&DAT_00454994,1);
  puVar5 = PTR_HEX_DIGITS_0099f5b8;
  puVar4 = PTR_ESCAPE_0099f5b0;
  uVar3 = _s__u00_003752c8;
  do {
    if (lVar6 != 0) {
      return;
    }
    while( true ) {
      lVar6 = 0;
      do {
        lVar7 = lVar6;
        if (param_4 == lVar7) {
          if ((param_4 != 0) && (lVar6 = FUN_006ad434(uVar8,param_3,param_4), lVar6 != 0)) {
            return;
          }
          FUN_006ad434(uVar8,&DAT_00454994,1);
          return;
        }
        bVar1 = *(byte *)(param_3 + lVar7);
        lVar6 = lVar7 + 1;
        cVar2 = puVar4[bVar1];
      } while (cVar2 == '\0');
      if ((lVar7 != 0) && (lVar7 = FUN_006ad434(uVar8,param_3,lVar7), lVar7 != 0)) {
        return;
      }
      param_3 = param_3 + lVar6;
      param_4 = param_4 - lVar6;
      if (cVar2 != 'u') break;
      local_63 = puVar5[(ulong)bVar1 & 0xf];
      local_64 = puVar5[bVar1 >> 4];
      local_68 = (undefined4)uVar3;
      lVar6 = FUN_006ad434(uVar8,&local_68,6);
      if (lVar6 != 0) {
        return;
      }
    }
    local_44 = 0x5c;
    local_43 = cVar2;
    lVar6 = FUN_006ad434(uVar8,&local_44,2);
  } while( true );
}


// ===== 006a8d84  FUN_006a8d84 =====

long FUN_006a8d84(byte *param_1,undefined8 *param_2)

{
  ushort *puVar1;
  byte bVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *local_40;
  char local_38;
  
  bVar2 = *param_1;
  if (bVar2 < 3) {
    if (bVar2 == 0) {
      lVar4 = FUN_006ad434(*param_2,&DAT_00377358,4);
      if (lVar4 != 0) {
        lVar4 = <serde_json::error::[0]::serde_json::error::Error>::io();
        return lVar4;
      }
    }
    else {
      if (bVar2 != 1) {
        lVar4 = FUN_006b1e50(param_1 + 8);
        return lVar4;
      }
      if ((param_1[1] & 1) == 0) {
        puVar5 = &DAT_00454995;
        uVar6 = 5;
      }
      else {
        puVar5 = &DAT_00377e48;
        uVar6 = 4;
      }
      lVar4 = FUN_006ad434(*param_2,puVar5,uVar6);
      if (lVar4 != 0) {
        lVar4 = <serde_json::error::[0]::serde_json::error::Error>::io();
        return lVar4;
      }
    }
  }
  else if (bVar2 == 3) {
    lVar4 = FUN_006a8c38(param_2,param_2,*(undefined8 *)(param_1 + 0x10),
                         *(undefined8 *)(param_1 + 0x18));
    if (lVar4 != 0) {
      lVar4 = <serde_json::error::[0]::serde_json::error::Error>::io();
      return lVar4;
    }
  }
  else {
    if (bVar2 == 4) {
      lVar4 = FUN_006a9588(param_2,param_1 + 8);
      return lVar4;
    }
    uVar6 = *param_2;
    lVar10 = *(long *)(param_1 + 0x18);
    lVar4 = FUN_006ad434(uVar6,&DAT_0045498e,1);
    if (lVar4 != 0) {
LAB_006a8fec:
      lVar4 = <serde_json::error::[0]::serde_json::error::Error>::io();
      return lVar4;
    }
    if (lVar10 == 0) {
      lVar4 = FUN_006ad434(uVar6,&DAT_0045498c,1);
      if (lVar4 != 0) goto LAB_006a8fec;
      local_38 = '\0';
    }
    else {
      local_38 = '\x01';
    }
    lVar8 = *(long *)(param_1 + 8);
    uVar7 = *(ulong *)(param_1 + 0x10);
    lVar11 = 0;
    bVar3 = lVar8 != 0;
    local_40 = param_2;
    if (!bVar3) {
      lVar10 = 0;
    }
    do {
      if (lVar10 == 0) {
        if (local_38 == '\0') {
          return 0;
        }
        lVar4 = FUN_006ad434(*local_40,&DAT_0045498c,1);
        if (lVar4 == 0) {
          return 0;
        }
        goto LAB_006a8fec;
      }
      if (!bVar3) {
                    /* WARNING: Subroutine does not return */
        core::option::unwrap_failed(&PTR_s__rustc_48a229ceaefd4985c50990b14_009764e0);
      }
      if (lVar11 == 0) {
        for (; lVar11 = lVar8, uVar7 != 0; uVar7 = uVar7 - 1) {
          lVar8 = *(long *)(lVar11 + 0x278);
        }
        lVar8 = 0;
        uVar7 = 0;
        lVar4 = lVar11;
        if (*(short *)(lVar11 + 0x272) == 0) goto LAB_006a8f84;
      }
      else {
        lVar4 = lVar11;
        if (*(ushort *)(lVar11 + 0x272) <= uVar7) {
LAB_006a8f84:
          do {
            lVar11 = *(long *)(lVar4 + 0x160);
            if (lVar11 == 0) {
                    /* try { // try from 006a9030 to 006a903b has its CatchHandler @ 006a904c */
                    /* WARNING: Subroutine does not return */
              core::option::unwrap_failed(&PTR_s__rustc_48a229ceaefd4985c50990b14_00976450);
            }
            puVar1 = (ushort *)(lVar4 + 0x270);
            uVar7 = (ulong)*puVar1;
            lVar8 = lVar8 + 1;
            lVar4 = lVar11;
          } while (*(ushort *)(lVar11 + 0x272) <= *puVar1);
        }
      }
      if (lVar8 == 0) {
        uVar13 = uVar7 + 1;
        lVar12 = lVar11;
      }
      else {
        plVar9 = (long *)(lVar11 + uVar7 * 8 + 0x280);
        do {
          lVar12 = *plVar9;
          lVar8 = lVar8 + -1;
          plVar9 = (long *)(lVar12 + 0x278);
        } while (lVar8 != 0);
        uVar13 = 0;
      }
      lVar10 = lVar10 + -1;
      lVar4 = FUN_006a94c8(&local_40,lVar11 + uVar7 * 0x18 + 0x168,lVar11 + uVar7 * 0x20);
      lVar8 = 0;
      bVar3 = true;
      uVar7 = uVar13;
      lVar11 = lVar12;
    } while (lVar4 == 0);
  }
  return lVar4;
}


// ===== 006a9050  FUN_006a9050 =====

long FUN_006a9050(byte *param_1,undefined8 *param_2)

{
  ushort *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 *puVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  undefined8 *local_50;
  char local_48;
  
  bVar4 = *param_1;
  if (bVar4 < 3) {
    if (bVar4 == 0) {
      lVar8 = FUN_006ad434(*param_2,&DAT_00377358,4);
      if (lVar8 == 0) {
        return 0;
      }
      lVar8 = <serde_json::error::[0]::serde_json::error::Error>::io();
      return lVar8;
    }
    if (bVar4 == 1) {
      if ((param_1[1] & 1) == 0) {
        puVar10 = &DAT_00454995;
        uVar11 = 5;
      }
      else {
        puVar10 = &DAT_00377e48;
        uVar11 = 4;
      }
      lVar8 = FUN_006ad434(*param_2,puVar10,uVar11);
      if (lVar8 == 0) {
        return 0;
      }
      lVar8 = <serde_json::error::[0]::serde_json::error::Error>::io();
      return lVar8;
    }
    lVar8 = FUN_006b2164(param_1 + 8);
    return lVar8;
  }
  if (bVar4 == 3) {
    lVar8 = FUN_006a8aec(param_2,param_2,*(undefined8 *)(param_1 + 0x10),
                         *(undefined8 *)(param_1 + 0x18));
    if (lVar8 == 0) {
      return 0;
    }
    lVar8 = <serde_json::error::[0]::serde_json::error::Error>::io();
    return lVar8;
  }
  if (bVar4 == 4) {
    lVar8 = FUN_006a9664(param_2,param_1 + 8);
    return lVar8;
  }
  lVar16 = param_2[3];
  uVar11 = *param_2;
  lVar8 = *(long *)(param_1 + 0x18);
  *(undefined1 *)(param_2 + 4) = 0;
  param_2[3] = lVar16 + 1;
  lVar7 = FUN_006ad434(uVar11,&DAT_0045498e,1);
  if (lVar7 == 0) {
    if (lVar8 == 0) {
      param_2[3] = lVar16;
      lVar7 = FUN_006ad434(uVar11,&DAT_0045498c,1);
      if (lVar7 != 0) goto LAB_006a931c;
      local_48 = '\0';
    }
    else {
      local_48 = '\x01';
    }
    lVar7 = *(long *)(param_1 + 8);
    uVar12 = *(ulong *)(param_1 + 0x10);
    lVar16 = 0;
    bVar6 = lVar7 != 0;
    local_50 = param_2;
    if (!bVar6) {
      lVar8 = 0;
    }
    while (puVar5 = local_50, lVar8 != 0) {
      if (!bVar6) {
                    /* WARNING: Subroutine does not return */
        core::option::unwrap_failed(&PTR_s__rustc_48a229ceaefd4985c50990b14_009764e0);
      }
      if (lVar16 == 0) {
        for (; lVar16 = lVar7, uVar12 != 0; uVar12 = uVar12 - 1) {
          lVar7 = *(long *)(lVar16 + 0x278);
        }
        lVar7 = 0;
        uVar12 = 0;
        lVar14 = lVar16;
        if (*(short *)(lVar16 + 0x272) == 0) goto LAB_006a9278;
      }
      else {
        lVar14 = lVar16;
        if (*(ushort *)(lVar16 + 0x272) <= uVar12) {
LAB_006a9278:
          do {
            lVar16 = *(long *)(lVar14 + 0x160);
            if (lVar16 == 0) {
                    /* try { // try from 006a9388 to 006a9393 has its CatchHandler @ 006a93a4 */
                    /* WARNING: Subroutine does not return */
              core::option::unwrap_failed(&PTR_s__rustc_48a229ceaefd4985c50990b14_00976450);
            }
            puVar1 = (ushort *)(lVar14 + 0x270);
            uVar12 = (ulong)*puVar1;
            lVar7 = lVar7 + 1;
            lVar14 = lVar16;
          } while (*(ushort *)(lVar16 + 0x272) <= *puVar1);
        }
      }
      if (lVar7 == 0) {
        uVar15 = uVar12 + 1;
        lVar14 = lVar16;
      }
      else {
        plVar13 = (long *)(lVar16 + uVar12 * 8 + 0x280);
        do {
          lVar14 = *plVar13;
          lVar7 = lVar7 + -1;
          plVar13 = (long *)(lVar14 + 0x278);
        } while (lVar7 != 0);
        uVar15 = 0;
      }
      lVar8 = lVar8 + -1;
      lVar9 = FUN_006a93a8(&local_50,lVar16 + uVar12 * 0x18 + 0x168,lVar16 + uVar12 * 0x20);
      lVar7 = 0;
      bVar6 = true;
      uVar12 = uVar15;
      lVar16 = lVar14;
      if (lVar9 != 0) {
        return lVar9;
      }
    }
    if (local_48 == '\0') {
      return 0;
    }
    lVar8 = local_50[3];
    uVar11 = *local_50;
    local_50[3] = lVar8 + -1;
    if (*(char *)(local_50 + 4) == '\x01') {
      lVar7 = FUN_006ad434(uVar11,&DAT_0045498b,1);
      if (lVar7 == 0) {
        uVar2 = puVar5[1];
        uVar3 = puVar5[2];
        do {
          lVar8 = lVar8 + -1;
          if (lVar8 == 0) goto LAB_006a9338;
          lVar7 = FUN_006ad434(uVar11,uVar2,uVar3);
        } while (lVar7 == 0);
      }
    }
    else {
LAB_006a9338:
      lVar8 = FUN_006ad434(uVar11,&DAT_0045498c,1);
      if (lVar8 == 0) {
        return 0;
      }
    }
  }
LAB_006a931c:
  lVar8 = <serde_json::error::[0]::serde_json::error::Error>::io();
  return lVar8;
}


// ===== 006a93a8  FUN_006a93a8 =====

void FUN_006a93a8(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  
  puVar6 = (undefined8 *)*param_1;
  uVar1 = *(undefined8 *)(param_2 + 8);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  uVar7 = *puVar6;
  if (*(char *)(param_1 + 1) == '\x01') {
    auVar9 = FUN_006ad434(uVar7,&DAT_0045498b,1);
  }
  else {
    auVar9 = FUN_006ad434(uVar7,&DAT_0045498f,2);
  }
  uVar5 = auVar9._8_8_;
  if (auVar9._0_8_ == 0) {
    uVar2 = puVar6[2];
    uVar8 = puVar6[1];
    lVar4 = puVar6[3] + 1;
    do {
      lVar4 = lVar4 + -1;
      if (lVar4 == 0) {
        *(undefined1 *)(param_1 + 1) = 2;
        lVar4 = FUN_006a8aec(puVar6,uVar5,uVar1,uVar3);
        if ((lVar4 == 0) && (lVar4 = FUN_006ad434(*puVar6,&DAT_00454991,2), lVar4 == 0)) {
          lVar4 = FUN_006a9050(param_3,puVar6);
          if (lVar4 == 0) {
            *(undefined1 *)(puVar6 + 4) = 1;
          }
          return;
        }
        break;
      }
      auVar9 = FUN_006ad434(uVar7,uVar8,uVar2);
      uVar5 = auVar9._8_8_;
    } while (auVar9._0_8_ == 0);
  }
  <serde_json::error::[0]::serde_json::error::Error>::io();
  return;
}


// ===== 006a94c8  FUN_006a94c8 =====

void FUN_006a94c8(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  puVar4 = (undefined8 *)*param_1;
  if ((*(char *)(param_1 + 1) == '\x01') ||
     (auVar5 = FUN_006ad434(*puVar4,&DAT_0045499a,1), param_2 = auVar5._8_8_, auVar5._0_8_ == 0)) {
    *(undefined1 *)(param_1 + 1) = 2;
    lVar3 = FUN_006a8c38(puVar4,param_2,uVar1,uVar2);
    if (lVar3 == 0) {
      lVar3 = FUN_006ad434(*puVar4,&DAT_0045499b,1);
      if (lVar3 == 0) {
        FUN_006a8d84(param_3,puVar4);
        return;
      }
      <serde_json::error::[0]::serde_json::error::Error>::io();
      return;
    }
  }
  <serde_json::error::[0]::serde_json::error::Error>::io();
  return;
}


// ===== 006a9588  FUN_006a9588 =====

void FUN_006a9588(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *param_1;
  lVar3 = *(long *)(param_2 + 8);
  lVar2 = *(long *)(param_2 + 0x10);
  lVar1 = FUN_006ad434(uVar4,&DAT_0045498d,1);
  if (lVar1 == 0) {
    if (lVar2 == 0) {
      lVar3 = FUN_006ad434(uVar4,&DAT_00454993,1);
joined_r0x006a962c:
      if (lVar3 != 0) goto LAB_006a9654;
    }
    else {
      lVar1 = FUN_006a8d84(lVar3,param_1);
      if (lVar1 == 0) {
        lVar2 = lVar2 * 0x20;
        do {
          lVar2 = lVar2 + -0x20;
          lVar3 = lVar3 + 0x20;
          if (lVar2 == 0) {
            lVar3 = FUN_006ad434(*param_1,&DAT_00454993,1);
            goto joined_r0x006a962c;
          }
          lVar1 = FUN_006ad434(*param_1,&DAT_0045499a,1);
          if (lVar1 != 0) goto LAB_006a9654;
          lVar1 = FUN_006a8d84(lVar3,param_1);
        } while (lVar1 == 0);
      }
    }
    return;
  }
LAB_006a9654:
  <serde_json::error::[0]::serde_json::error::Error>::io();
  return;
}


// ===== 006a9664  FUN_006a9664 =====

void FUN_006a9664(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  bool bVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  uint uVar16;
  long local_68;
  
  lVar9 = param_1[3];
  uVar11 = *param_1;
  lVar12 = *(long *)(param_2 + 8);
  lVar1 = *(long *)(param_2 + 0x10);
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[3] = lVar9 + 1;
  uVar4 = FUN_006ad434(uVar11,&DAT_0045498d,1);
  if (uVar4 == 0) {
    if (lVar1 == 0) {
      param_1[3] = lVar9;
      uVar4 = FUN_006ad434(uVar11,&DAT_00454993,1);
joined_r0x006a98dc:
      if (uVar4 == 0) {
        return;
      }
    }
    else {
      lVar1 = lVar12 + lVar1 * 0x20;
      bVar7 = true;
      do {
        puVar14 = (undefined8 *)*param_1;
        if (bVar7) {
          puVar6 = &DAT_0045498b;
          uVar11 = 1;
        }
        else {
          puVar6 = &DAT_0045498f;
          uVar11 = 2;
        }
        uVar4 = FUN_006ad434(puVar14,puVar6,uVar11);
        if (uVar4 != 0) goto LAB_006a98a0;
        lVar9 = param_1[3];
        if ((lVar9 != 0) && (lVar13 = param_1[2], lVar13 != 0)) {
          uVar15 = *puVar14;
          lVar10 = 0;
          uVar11 = param_1[1];
          do {
            iVar3 = <core::fmt::[a]::core::fmt::Formatter>::write_str(uVar15,uVar11,lVar13);
            if (iVar3 != 0) {
              do {
                while( true ) {
                  uVar4 = <alloc::io::error::core::io::error::Error>::new<&str>
                                    (0x29,&DAT_00454a72,9);
                  uVar8 = uVar4 & 3;
                  if (uVar8 < 2) break;
                  if (uVar8 == 2) {
                    /* try { // try from 006a97ec to 006a97ff has its CatchHandler @ 006a991c */
                    lVar5 = core::io::error::os_functions::get_os_functions();
                    iVar3 = (**(code **)(lVar5 + 0x10))(uVar4 >> 0x20);
                    if (iVar3 == 0) goto LAB_006a98a0;
                  }
                  else {
                    uVar16 = (uint)(uVar4 >> 0x20) & 0xff;
                    if (0x2a < uVar4 >> 0x20) {
                      uVar16 = 0xff;
                    }
                    if (uVar16 != 0x23) goto LAB_006a98a0;
                  }
LAB_006a9774:
                  uVar4 = <core::fmt::[a]::core::fmt::Formatter>::write_str(uVar15,uVar11,lVar13);
                  if ((uVar4 & 1) == 0) goto LAB_006a9744;
                }
                if (uVar8 == 0) {
                  if (*(char *)(uVar4 + 0x10) == '#') goto LAB_006a9774;
                  goto LAB_006a98a0;
                }
                if (*(char *)(uVar4 + 0x1f) != '#') goto LAB_006a98a0;
                local_68 = uVar4 - 1;
                <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_68);
                uVar4 = <core::fmt::[a]::core::fmt::Formatter>::write_str(uVar15,uVar11,lVar13);
              } while ((uVar4 & 1) != 0);
            }
LAB_006a9744:
            lVar10 = lVar10 + 1;
          } while (lVar10 != lVar9);
        }
        lVar9 = FUN_006a9050(lVar12,param_1);
        if (lVar9 != 0) {
          return;
        }
        lVar12 = lVar12 + 0x20;
        bVar7 = false;
        *(undefined1 *)(param_1 + 4) = 1;
      } while (lVar12 != lVar1);
      lVar12 = param_1[3];
      uVar11 = *param_1;
      param_1[3] = lVar12 + -1;
      uVar4 = FUN_006ad434(uVar11,&DAT_0045498b,1);
      if (uVar4 == 0) {
        uVar15 = param_1[1];
        uVar2 = param_1[2];
        do {
          lVar12 = lVar12 + -1;
          if (lVar12 == 0) {
            uVar4 = FUN_006ad434(uVar11,&DAT_00454993,1);
            goto joined_r0x006a98dc;
          }
          uVar4 = FUN_006ad434(uVar11,uVar15,uVar2);
        } while (uVar4 == 0);
      }
    }
  }
LAB_006a98a0:
  <serde_json::error::[0]::serde_json::error::Error>::io(uVar4);
  return;
}


// ===== 006a9934  serde_json::ser::key_must_be_a_string =====

/* WARNING: Unknown calling convention: __rustcall */
/* serde_json::ser::key_must_be_a_string */

void __rustcall serde_json::ser::key_must_be_a_string(void)

{
  undefined8 local_28 [3];
  
  local_28[0] = 0x11;
  <serde_json::error::[0]::serde_json::error::Error>::syntax(local_28,0,0);
  return;
}


// ===== 006a9964  serde_json::ser::float_key_must_be_finite =====

/* WARNING: Unknown calling convention: __rustcall */
/* serde_json::ser::float_key_must_be_finite */

void __rustcall serde_json::ser::float_key_must_be_finite(void)

{
  undefined8 local_28 [3];
  
  local_28[0] = 0x13;
  <serde_json::error::[0]::serde_json::error::Error>::syntax(local_28,0,0);
  return;
}


// ===== 006a9994  <serde_json::value::ser::SerializeTupleVariant_as_serde_core::ser::SerializeTupleVariant>::end =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::ser::SerializeTupleVariant as serde_core::ser::SerializeTupleVariant>::end */

void __rustcall
<serde_json::value::ser::SerializeTupleVariant_as_serde_core::ser::SerializeTupleVariant>::end
          (undefined1 *param_1,undefined8 *param_2)

{
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 auStack_80 [32];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined1 local_40;
  undefined6 uStack_3f;
  undefined1 uStack_39;
  undefined7 uStack_38;
  undefined1 uStack_31;
  undefined7 uStack_30;
  undefined1 uStack_29;
  undefined7 uStack_28;
  undefined1 uStack_21;
  
  local_50 = param_2[2];
  uStack_58 = param_2[1];
  local_60 = *param_2;
  local_98 = 0;
  local_88 = 0;
  uStack_30 = (undefined7)param_2[4];
  uStack_29 = (undefined1)((ulong)param_2[4] >> 0x38);
  uStack_38 = (undefined7)param_2[3];
  uStack_31 = (undefined1)((ulong)param_2[3] >> 0x38);
  uStack_28 = (undefined7)param_2[5];
  uStack_21 = (undefined1)((ulong)param_2[5] >> 0x38);
  local_40 = 4;
                    /* try { // try from 006a99d8 to 006a99f3 has its CatchHandler @ 006a9a2c */
  FUN_006b4b64(auStack_80,&local_98,&local_60,&local_40);
  FUN_006a897c(auStack_80);
  *param_1 = 5;
  uStack_31 = (undefined1)uStack_90;
  uStack_39 = (undefined1)local_98;
  uStack_38 = (undefined7)((ulong)local_98 >> 8);
  *(ulong *)(param_1 + 9) = CONCAT17(uStack_31,uStack_38);
  *(ulong *)(param_1 + 1) = CONCAT17(uStack_39,CONCAT61(uStack_3f,local_40));
  *(undefined8 *)(param_1 + 0x18) = local_88;
  *(undefined8 *)(param_1 + 0x10) = uStack_90;
  return;
}


// ===== 006a9a44  <serde_json::value::ser::SerializeMap_as_serde_core::ser::SerializeMap>::end =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::ser::SerializeMap as serde_core::ser::SerializeMap>::end */

void __rustcall
<serde_json::value::ser::SerializeMap_as_serde_core::ser::SerializeMap>::end
          (undefined1 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined7 uStack_20;
  undefined1 local_19;
  undefined7 uStack_18;
  undefined1 uStack_11;
  
  lVar4 = param_2[4];
  lVar3 = param_2[3];
  lVar2 = param_2[5];
  lVar1 = *param_2;
  *param_1 = 5;
  uStack_11 = (undefined1)lVar4;
  local_19 = (undefined1)lVar3;
  uStack_18 = (undefined7)((ulong)lVar3 >> 8);
  *(ulong *)(param_1 + 9) = CONCAT17(uStack_11,uStack_18);
  *(ulong *)(param_1 + 1) = CONCAT17(local_19,uStack_20);
  *(long *)(param_1 + 0x18) = lVar2;
  *(long *)(param_1 + 0x10) = lVar4;
  if ((lVar1 != -1) && (lVar1 != 0)) {
    __rustc::__rust_dealloc(param_2[1],lVar1,1);
    return;
  }
  return;
}


// ===== 006a9a98  <serde_json::value::ser::MapKeySerializer_as_serde_core::ser::Serializer>::serialize_i8 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::ser::MapKeySerializer as serde_core::ser::Serializer>::serialize_i8 */

void __rustcall
<serde_json::value::ser::MapKeySerializer_as_serde_core::ser::Serializer>::serialize_i8
          (size_t *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  void *__dest;
  size_t __n;
  long lVar3;
  long lVar4;
  undefined1 auStack_59 [3];
  ushort local_56;
  
  uVar2 = (uint)(char)param_2;
  uVar1 = -uVar2;
  if (-1 < (int)uVar2) {
    uVar1 = uVar2;
  }
  if (uVar1 < 100) {
    if ((uVar1 & 0xff) < 10) {
      lVar3 = 3;
      local_56 = CONCAT11((char)uVar1,(undefined1)local_56) | 0x3000;
    }
    else {
      local_56 = *(ushort *)(&DAT_0045499c + ((ulong)uVar1 & 0xff) * 2);
      lVar3 = 2;
    }
  }
  else {
    lVar3 = 1;
    local_56 = *(ushort *)(&DAT_0045499c + ((ulong)(uVar1 * 2 + 0x38) & 0xfe));
    auStack_59[2] = 0x31;
  }
  lVar4 = lVar3;
  if ((param_2 >> 7 & 1) != 0) {
    lVar4 = lVar3 + -1;
    auStack_59[lVar3] = 0x2d;
  }
  __n = 4 - lVar4;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  __dest = (void *)__rustc::__rust_alloc(__n,1);
  if (__dest != (void *)0x0) {
    memcpy(__dest,auStack_59 + lVar4 + 1,__n);
    *param_1 = __n;
    param_1[1] = (size_t)__dest;
    param_1[2] = __n;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(1,__n);
}


// ===== 006a9ba4  <serde_json::value::ser::MapKeySerializer_as_serde_core::ser::Serializer>::serialize_u8 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::ser::MapKeySerializer as serde_core::ser::Serializer>::serialize_u8 */

void __rustcall
<serde_json::value::ser::MapKeySerializer_as_serde_core::ser::Serializer>::serialize_u8
          (size_t *param_1,ulong param_2)

{
  uint uVar1;
  byte bVar2;
  void *__dest;
  size_t __n;
  ulong uVar3;
  byte local_58;
  undefined2 local_57;
  
  bVar2 = (byte)param_2;
  uVar1 = (uint)param_2 & 0xff;
  if (uVar1 < 100) {
    if (9 < uVar1) {
      local_57 = *(undefined2 *)(&DAT_0045499c + (param_2 & 0xff) * 2);
      uVar3 = 1;
      __n = 2;
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      __dest = (void *)__rustc::__rust_alloc(2,1);
      goto joined_r0x006a9c88;
    }
    uVar3 = 2;
  }
  else {
    uVar3 = 0;
    uVar1 = uVar1 * 0x29 >> 0xc;
    bVar2 = (byte)uVar1;
    local_57 = *(undefined2 *)(&DAT_0045499c + ((ulong)((uint)param_2 + uVar1 * -100) & 0xff) * 2);
  }
  (&local_58)[uVar3] = bVar2 | 0x30;
  __n = uVar3 ^ 3;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  __dest = (void *)__rustc::__rust_alloc(uVar3 ^ 3,1);
joined_r0x006a9c88:
  if (__dest != (void *)0x0) {
    memcpy(__dest,&local_58 + uVar3,__n);
    *param_1 = __n;
    param_1[1] = (size_t)__dest;
    param_1[2] = __n;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(1,__n);
}


// ===== 006a9c98  <serde_json::value::ser::MapKeySerializer_as_serde_core::ser::Serializer>::serialize_f32 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::ser::MapKeySerializer as serde_core::ser::Serializer>::serialize_f32 */

void __rustcall
<serde_json::value::ser::MapKeySerializer_as_serde_core::ser::Serializer>::serialize_f32
          (size_t *param_1,uint param_2)

{
  undefined8 *puVar1;
  void *__dest;
  size_t sVar2;
  undefined8 uVar3;
  undefined8 local_48 [3];
  
  if (0x7f7fffff < (param_2 & 0x7fffffff)) {
    local_48[0] = 0x13;
    sVar2 = <serde_json::error::[0]::serde_json::error::Error>::syntax(local_48,0,0);
    *param_1 = 0xffffffffffffffff;
    param_1[1] = sVar2;
    return;
  }
  puVar1 = (undefined8 *)<f32_as_zmij::private::Sealed>::write_to_zmij_buffer(local_48);
  sVar2 = (long)puVar1 - (long)local_48;
  if ((long)sVar2 < 0) {
    uVar3 = 0;
LAB_006a9cdc:
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(uVar3,sVar2);
  }
  if (puVar1 == local_48) {
    __dest = (void *)0x1;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar3 = 1;
    __dest = (void *)__rustc::__rust_alloc(sVar2,1);
    if (__dest == (void *)0x0) goto LAB_006a9cdc;
    memcpy(__dest,local_48,sVar2);
  }
  *param_1 = sVar2;
  param_1[1] = (size_t)__dest;
  param_1[2] = sVar2;
  return;
}


// ===== 006a9d70  <serde_json::value::ser::MapKeySerializer_as_serde_core::ser::Serializer>::serialize_f64 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::ser::MapKeySerializer as serde_core::ser::Serializer>::serialize_f64 */

void __rustcall
<serde_json::value::ser::MapKeySerializer_as_serde_core::ser::Serializer>::serialize_f64
          (size_t *param_1,ulong param_2)

{
  undefined8 *puVar1;
  void *__dest;
  size_t sVar2;
  undefined8 uVar3;
  undefined8 local_48 [3];
  
  if (0x7fefffffffffffff < (param_2 & 0x7fffffffffffffff)) {
    local_48[0] = 0x13;
    sVar2 = <serde_json::error::[0]::serde_json::error::Error>::syntax(local_48,0,0);
    *param_1 = 0xffffffffffffffff;
    param_1[1] = sVar2;
    return;
  }
  puVar1 = (undefined8 *)<f64_as_zmij::private::Sealed>::write_to_zmij_buffer(local_48);
  sVar2 = (long)puVar1 - (long)local_48;
  if ((long)sVar2 < 0) {
    uVar3 = 0;
LAB_006a9db4:
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(uVar3,sVar2);
  }
  if (puVar1 == local_48) {
    __dest = (void *)0x1;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar3 = 1;
    __dest = (void *)__rustc::__rust_alloc(sVar2,1);
    if (__dest == (void *)0x0) goto LAB_006a9db4;
    memcpy(__dest,local_48,sVar2);
  }
  *param_1 = sVar2;
  param_1[1] = (size_t)__dest;
  param_1[2] = sVar2;
  return;
}


// ===== 006a9e48  <serde_json::value::ser::MapKeySerializer_as_serde_core::ser::Serializer>::serialize_i16 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::ser::MapKeySerializer as serde_core::ser::Serializer>::serialize_i16 */

void __rustcall
<serde_json::value::ser::MapKeySerializer_as_serde_core::ser::Serializer>::serialize_i16
          (size_t *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  void *__dest;
  uint uVar3;
  long lVar4;
  size_t __n;
  long lVar5;
  undefined2 uStack_5a;
  byte local_58 [2];
  undefined2 local_56;
  undefined2 local_54;
  
  uVar3 = (uint)(short)param_2;
  uVar2 = -uVar3;
  if (-1 < (int)uVar3) {
    uVar2 = uVar3;
  }
  if (uVar2 >> 4 < 0x271) {
    if ((uVar2 & 0xffff) < 100) {
      lVar4 = 6;
      uVar3 = uVar2;
      uVar2 = uVar2 & 0xffff;
    }
    else {
      uVar3 = (uVar2 >> 2 & 0x3fff) / 0x19;
      local_54 = *(undefined2 *)(&DAT_0045499c + ((ulong)(uVar2 + uVar3 * -100) & 0xffff) * 2);
      lVar4 = 4;
      uVar2 = uVar3;
    }
    if (9 < uVar2) {
      lVar5 = lVar4 + -2;
      *(undefined2 *)((long)&uStack_5a + lVar4) =
           *(undefined2 *)(&DAT_0045499c + ((ulong)uVar3 & 0xffff) * 2);
      goto joined_r0x006a9f28;
    }
  }
  else {
    uVar3 = (uVar2 >> 4 & 0xfff) / 0x271;
    uVar2 = uVar2 + uVar3 * -10000;
    uVar1 = (uVar2 >> 2 & 0x3fff) / 0x19;
    local_56 = *(undefined2 *)(&DAT_0045499c + (ulong)uVar1 * 2);
    lVar4 = 2;
    local_54 = *(undefined2 *)(&DAT_0045499c + ((ulong)(uVar2 + uVar1 * -100) & 0xffff) * 2);
  }
  lVar5 = lVar4 + -1;
  *(byte *)((long)&uStack_5a + lVar4 + 1) = (byte)uVar3 | 0x30;
joined_r0x006a9f28:
  lVar4 = lVar5;
  if ((param_2 >> 0xf & 1) != 0) {
    lVar4 = lVar5 + -1;
    *(undefined1 *)((long)&uStack_5a + lVar5 + 1) = 0x2d;
  }
  __n = 6 - lVar4;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  __dest = (void *)__rustc::__rust_alloc(__n,1);
  if (__dest == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(1,__n);
  }
  memcpy(__dest,local_58 + lVar4,__n);
  *param_1 = __n;
  param_1[1] = (size_t)__dest;
  param_1[2] = __n;
  return;
}


// ===== 006a9fc0  <serde_json::value::ser::MapKeySerializer_as_serde_core::ser::Serializer>::serialize_i32 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::ser::MapKeySerializer as serde_core::ser::Serializer>::serialize_i32 */

void __rustcall
<serde_json::value::ser::MapKeySerializer_as_serde_core::ser::Serializer>::serialize_i32
          (size_t *param_1,uint param_2)

{
  uint uVar1;
  size_t __n;
  long lVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined2 *puVar7;
  void *__dest;
  undefined8 uVar8;
  long lVar9;
  undefined2 uStack_6a;
  undefined1 auStack_68 [7];
  undefined2 local_61 [16];
  
  uVar4 = -param_2;
  if (-1 < (int)param_2) {
    uVar4 = param_2;
  }
  uVar5 = (ulong)uVar4;
  if (uVar4 >> 4 < 0x271) {
    lVar2 = 0xb;
    if (99 < uVar4) goto LAB_006aa068;
  }
  else {
    lVar2 = 0xb;
    puVar7 = local_61 + 1;
    do {
      uVar6 = uVar5;
      lVar2 = lVar2 + -4;
      uVar3 = (uint)(uVar6 / 10000);
      uVar1 = (uint)uVar6 + uVar3 * -10000;
      uVar4 = (uVar1 >> 2 & 0x3fff) / 0x19;
      puVar7[-1] = *(undefined2 *)(&DAT_0045499c + (ulong)uVar4 * 2);
      *puVar7 = *(undefined2 *)(&DAT_0045499c + ((ulong)(uVar1 + uVar4 * -100) & 0xffff) * 2);
      uVar5 = uVar6 / 10000;
      puVar7 = puVar7 + -2;
    } while (99999999 < (uint)uVar6);
    uVar5 = uVar6 / 10000;
    uVar4 = (uint)uVar5;
    if (0x62 < uVar3 && uVar4 != 99) {
LAB_006aa068:
      uVar1 = (uVar4 >> 2 & 0x3fff) / 0x19;
      uVar5 = (ulong)uVar1;
      *(undefined2 *)((long)&uStack_6a + lVar2) =
           *(undefined2 *)(&DAT_0045499c + ((ulong)(uVar4 + uVar1 * -100) & 0xffff) * 2);
      lVar2 = lVar2 + -2;
    }
  }
  if (uVar5 < 10) {
    lVar9 = lVar2 + -1;
    *(byte *)((long)&uStack_6a + lVar2 + 1) = (byte)uVar5 | 0x30;
  }
  else {
    lVar9 = lVar2 + -2;
    *(undefined2 *)((long)&uStack_6a + lVar2) = *(undefined2 *)(&DAT_0045499c + uVar5 * 2);
  }
  if ((int)param_2 < 0) {
    *(undefined1 *)((long)&uStack_6a + lVar9 + 1) = 0x2d;
    lVar9 = lVar9 + -1;
  }
  __n = 0xb - lVar9;
  if (-1 < (long)__n) {
    if (lVar9 == 0xb) {
      __dest = (void *)0x1;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar8 = 1;
      __dest = (void *)__rustc::__rust_alloc(__n,1);
      if (__dest == (void *)0x0) goto LAB_006aa0f0;
      memcpy(__dest,auStack_68 + lVar9,__n);
    }
    *param_1 = __n;
    param_1[1] = (size_t)__dest;
    param_1[2] = __n;
    return;
  }
  uVar8 = 0;
LAB_006aa0f0:
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar8,__n);
}


// ===== 006aa17c  <serde_json::value::ser::MapKeySerializer_as_serde_core::ser::Serializer>::serialize_i64 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::ser::MapKeySerializer as serde_core::ser::Serializer>::serialize_i64 */

void __rustcall
<serde_json::value::ser::MapKeySerializer_as_serde_core::ser::Serializer>::serialize_i64
          (size_t *param_1,ulong param_2)

{
  bool bVar1;
  uint uVar2;
  size_t __n;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined2 *puVar8;
  void *__dest;
  undefined8 uVar9;
  undefined2 uStack_6a;
  undefined1 auStack_68 [16];
  undefined2 local_58 [12];
  
  uVar5 = -param_2;
  if (-1 < (long)param_2) {
    uVar5 = param_2;
  }
  if (uVar5 >> 4 < 0x271) {
    lVar6 = 0x14;
  }
  else {
    lVar6 = 0x14;
    uVar3 = uVar5;
    puVar8 = local_58 + 1;
    do {
      lVar6 = lVar6 + -4;
      uVar5 = uVar3 / 10000;
      uVar4 = (int)uVar3 + (int)uVar5 * -10000;
      uVar2 = (uVar4 >> 2 & 0x3fff) / 0x19;
      puVar8[-1] = *(undefined2 *)(&DAT_0045499c + (ulong)uVar2 * 2);
      *puVar8 = *(undefined2 *)(&DAT_0045499c + ((ulong)(uVar4 + uVar2 * -100) & 0xffff) * 2);
      bVar1 = 99999999 < uVar3;
      uVar3 = uVar5;
      puVar8 = puVar8 + -2;
    } while (bVar1);
  }
  lVar7 = lVar6;
  if (99 < uVar5) {
    uVar4 = (uint)uVar5;
    lVar7 = lVar6 + -2;
    uVar2 = (uVar4 >> 2 & 0x3fff) / 0x19;
    uVar5 = (ulong)uVar2;
    *(undefined2 *)((long)&uStack_6a + lVar6) =
         *(undefined2 *)(&DAT_0045499c + ((ulong)(uVar4 + uVar2 * -100) & 0xffff) * 2);
  }
  if (uVar5 < 10) {
    lVar6 = lVar7 + -1;
    *(byte *)((long)&uStack_6a + lVar7 + 1) = (byte)uVar5 | 0x30;
  }
  else {
    lVar6 = lVar7 + -2;
    *(undefined2 *)((long)&uStack_6a + lVar7) = *(undefined2 *)(&DAT_0045499c + uVar5 * 2);
  }
  if ((long)param_2 < 0) {
    *(undefined1 *)((long)&uStack_6a + lVar6 + 1) = 0x2d;
    lVar6 = lVar6 + -1;
  }
  __n = 0x14 - lVar6;
  if (-1 < (long)__n) {
    if (lVar6 == 0x14) {
      __dest = (void *)0x1;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar9 = 1;
      __dest = (void *)__rustc::__rust_alloc(__n,1);
      if (__dest == (void *)0x0) goto LAB_006aa2b0;
      memcpy(__dest,auStack_68 + lVar6,__n);
    }
    *param_1 = __n;
    param_1[1] = (size_t)__dest;
    param_1[2] = __n;
    return;
  }
  uVar9 = 0;
LAB_006aa2b0:
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar9,__n);
}


// ===== 006aa33c  <serde_json::value::ser::MapKeySerializer_as_serde_core::ser::Serializer>::serialize_seq =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::ser::MapKeySerializer as serde_core::ser::Serializer>::serialize_seq */

void __rustcall
<serde_json::value::ser::MapKeySerializer_as_serde_core::ser::Serializer>::serialize_seq(void)

{
  undefined8 local_28 [3];
  
  local_28[0] = 0x11;
  <serde_json::error::[0]::serde_json::error::Error>::syntax(local_28,0,0);
  return;
}


// ===== 006aa36c  <serde_json::value::ser::MapKeySerializer_as_serde_core::ser::Serializer>::serialize_u16 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::ser::MapKeySerializer as serde_core::ser::Serializer>::serialize_u16 */

void __rustcall
<serde_json::value::ser::MapKeySerializer_as_serde_core::ser::Serializer>::serialize_u16
          (size_t *param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  void *__dest;
  uint uVar3;
  long lVar4;
  size_t __n;
  long lVar5;
  undefined2 uStack_5a;
  byte local_58;
  undefined2 local_57;
  undefined2 local_55;
  
  uVar2 = (uint)param_2;
  uVar3 = uVar2 >> 4 & 0xfff;
  if (uVar3 < 0x271) {
    if ((uVar2 & 0xffff) < 100) {
      lVar4 = 5;
      param_2 = param_2 & 0xffffffff;
      uVar3 = uVar2;
      uVar2 = uVar2 & 0xffff;
    }
    else {
      uVar3 = (uVar2 >> 2 & 0x3fff) / 0x19;
      param_2 = (ulong)uVar3;
      local_55 = *(undefined2 *)(&DAT_0045499c + ((ulong)(uVar2 + uVar3 * -100) & 0xffff) * 2);
      lVar4 = 3;
      uVar2 = uVar3;
    }
    if (9 < uVar2) {
      lVar5 = lVar4 + -2;
      *(undefined2 *)((long)&uStack_5a + lVar4) =
           *(undefined2 *)(&DAT_0045499c + (param_2 & 0xffff) * 2);
      goto LAB_006aa464;
    }
  }
  else {
    uVar3 = uVar3 / 0x271;
    uVar2 = uVar2 + uVar3 * -10000;
    uVar1 = (uVar2 >> 2 & 0x3fff) / 0x19;
    local_57 = *(undefined2 *)(&DAT_0045499c + (ulong)uVar1 * 2);
    lVar4 = 1;
    local_55 = *(undefined2 *)(&DAT_0045499c + ((ulong)(uVar2 + uVar1 * -100) & 0xffff) * 2);
  }
  lVar5 = lVar4 + -1;
  *(byte *)((long)&uStack_5a + lVar4 + 1) = (byte)uVar3 | 0x30;
LAB_006aa464:
  __n = 5 - lVar5;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  __dest = (void *)__rustc::__rust_alloc(__n,1);
  if (__dest == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(1,__n);
  }
  memcpy(__dest,&local_58 + lVar5,__n);
  *param_1 = __n;
  param_1[1] = (size_t)__dest;
  param_1[2] = __n;
  return;
}


// ===== 006aa4bc  <serde_json::value::ser::MapKeySerializer_as_serde_core::ser::Serializer>::serialize_u32 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::ser::MapKeySerializer as serde_core::ser::Serializer>::serialize_u32 */

void __rustcall
<serde_json::value::ser::MapKeySerializer_as_serde_core::ser::Serializer>::serialize_u32
          (size_t *param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  size_t __n;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined2 *puVar7;
  void *__dest;
  undefined8 uVar8;
  long lVar9;
  undefined2 uStack_6a;
  undefined1 auStack_68 [6];
  undefined2 local_62 [17];
  
  if (((uint)(param_2 >> 4) & 0xfffffff) < 0x271) {
    lVar6 = 10;
    uVar5 = (uint)param_2;
    param_2 = param_2 & 0xffffffff;
    if (99 < uVar5) goto LAB_006aa55c;
  }
  else {
    lVar6 = 10;
    puVar7 = local_62 + 1;
    do {
      uVar3 = (uint)param_2;
      uVar2 = param_2 & 0xffffffff;
      lVar6 = lVar6 + -4;
      param_2 = uVar2 / 10000;
      uVar4 = (uint)(uVar2 / 10000);
      uVar1 = uVar3 + uVar4 * -10000;
      uVar5 = (uVar1 >> 2 & 0x3fff) / 0x19;
      puVar7[-1] = *(undefined2 *)(&DAT_0045499c + (ulong)uVar5 * 2);
      *puVar7 = *(undefined2 *)(&DAT_0045499c + ((ulong)(uVar1 + uVar5 * -100) & 0xffff) * 2);
      puVar7 = puVar7 + -2;
    } while (99999999 < uVar3);
    param_2 = uVar2 / 10000;
    uVar5 = (uint)param_2;
    if (0x62 < uVar4 && uVar5 != 99) {
LAB_006aa55c:
      uVar1 = (uVar5 >> 2 & 0x3fff) / 0x19;
      param_2 = (ulong)uVar1;
      *(undefined2 *)((long)&uStack_6a + lVar6) =
           *(undefined2 *)(&DAT_0045499c + ((ulong)(uVar5 + uVar1 * -100) & 0xffff) * 2);
      lVar6 = lVar6 + -2;
    }
  }
  if (param_2 < 10) {
    lVar9 = lVar6 + -1;
    *(byte *)((long)&uStack_6a + lVar6 + 1) = (byte)param_2 | 0x30;
  }
  else {
    lVar9 = lVar6 + -2;
    *(undefined2 *)((long)&uStack_6a + lVar6) = *(undefined2 *)(&DAT_0045499c + param_2 * 2);
  }
  __n = 10 - lVar9;
  if ((long)__n < 0) {
    uVar8 = 0;
LAB_006aa5f4:
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(uVar8,__n);
  }
  if (lVar9 == 10) {
    __dest = (void *)0x1;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar8 = 1;
    __dest = (void *)__rustc::__rust_alloc(__n,1);
    if (__dest == (void *)0x0) goto LAB_006aa5f4;
    memcpy(__dest,auStack_68 + lVar9,__n);
  }
  *param_1 = __n;
  param_1[1] = (size_t)__dest;
  param_1[2] = __n;
  return;
}


// ===== 006aa654  <serde_json::value::ser::MapKeySerializer_as_serde_core::ser::Serializer>::serialize_u64 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::ser::MapKeySerializer as serde_core::ser::Serializer>::serialize_u64 */

void __rustcall
<serde_json::value::ser::MapKeySerializer_as_serde_core::ser::Serializer>::serialize_u64
          (size_t *param_1,ulong param_2)

{
  bool bVar1;
  uint uVar2;
  size_t __n;
  uint uVar3;
  long lVar4;
  undefined2 *puVar5;
  ulong uVar6;
  void *__dest;
  undefined8 uVar7;
  long lVar8;
  undefined2 uStack_6a;
  undefined1 auStack_68 [16];
  undefined2 local_58 [12];
  
  if (param_2 >> 4 < 0x271) {
    lVar4 = 0x14;
    if (99 < param_2) goto LAB_006aa6fc;
  }
  else {
    lVar4 = 0x14;
    puVar5 = local_58 + 1;
    uVar6 = param_2;
    do {
      lVar4 = lVar4 + -4;
      param_2 = uVar6 / 10000;
      uVar3 = (int)uVar6 + (int)param_2 * -10000;
      uVar2 = (uVar3 >> 2 & 0x3fff) / 0x19;
      puVar5[-1] = *(undefined2 *)(&DAT_0045499c + (ulong)uVar2 * 2);
      *puVar5 = *(undefined2 *)(&DAT_0045499c + ((ulong)(uVar3 + uVar2 * -100) & 0xffff) * 2);
      bVar1 = 99999999 < uVar6;
      puVar5 = puVar5 + -2;
      uVar6 = param_2;
    } while (bVar1);
    if (99 < param_2) {
LAB_006aa6fc:
      uVar3 = (uint)param_2;
      uVar2 = (uVar3 >> 2 & 0x3fff) / 0x19;
      param_2 = (ulong)uVar2;
      *(undefined2 *)((long)&uStack_6a + lVar4) =
           *(undefined2 *)(&DAT_0045499c + ((ulong)(uVar3 + uVar2 * -100) & 0xffff) * 2);
      lVar4 = lVar4 + -2;
    }
  }
  if (param_2 < 10) {
    lVar8 = lVar4 + -1;
    *(byte *)((long)&uStack_6a + lVar4 + 1) = (byte)param_2 | 0x30;
  }
  else {
    lVar8 = lVar4 + -2;
    *(undefined2 *)((long)&uStack_6a + lVar4) = *(undefined2 *)(&DAT_0045499c + param_2 * 2);
  }
  __n = 0x14 - lVar8;
  if ((long)__n < 0) {
    uVar7 = 0;
LAB_006aa790:
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(uVar7,__n);
  }
  if (lVar8 == 0x14) {
    __dest = (void *)0x1;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar7 = 1;
    __dest = (void *)__rustc::__rust_alloc(__n,1);
    if (__dest == (void *)0x0) goto LAB_006aa790;
    memcpy(__dest,auStack_68 + lVar8,__n);
  }
  *param_1 = __n;
  param_1[1] = (size_t)__dest;
  param_1[2] = __n;
  return;
}


// ===== 006aa7f0  <serde_json::value::ser::MapKeySerializer_as_serde_core::ser::Serializer>::serialize_bool =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::ser::MapKeySerializer as serde_core::ser::Serializer>::serialize_bool */

void __rustcall
<serde_json::value::ser::MapKeySerializer_as_serde_core::ser::Serializer>::serialize_bool
          (size_t *param_1,int param_2)

{
  size_t __n;
  undefined *__src;
  void *__dest;
  
  __n = 4;
  if (param_2 == 0) {
    __n = 5;
  }
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  __dest = (void *)__rustc::__rust_alloc(__n,1);
  if (__dest != (void *)0x0) {
    __src = &DAT_00377e48;
    if (param_2 == 0) {
      __src = &DAT_00454995;
    }
    memcpy(__dest,__src,__n);
    *param_1 = __n;
    param_1[1] = (size_t)__dest;
    param_1[2] = __n;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(1,__n);
}


// ===== 006aa870  <serde_json::value::ser::MapKeySerializer_as_serde_core::ser::Serializer>::serialize_i128 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::ser::MapKeySerializer as serde_core::ser::Serializer>::serialize_i128 */

void __rustcall
<serde_json::value::ser::MapKeySerializer_as_serde_core::ser::Serializer>::serialize_i128
          (size_t *param_1,ulong param_2,ulong param_3)

{
  bool bVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  size_t __n;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined2 *puVar16;
  byte *pbVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  void *__dest;
  undefined8 uVar21;
  long lVar22;
  undefined2 uStack_79;
  undefined1 local_77;
  undefined2 auStack_76 [7];
  undefined1 local_67 [2];
  byte abStack_65 [17];
  undefined2 local_54 [2];
  
  uVar8 = (long)param_3 >> 0x3f;
  uVar10 = (param_2 ^ uVar8) - uVar8;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar10;
  uVar13 = SUB168(auVar3 * ZEXT816(0x9598f4f1e8361973),8);
  uVar9 = (param_3 ^ uVar8) - (uVar8 + ((param_2 ^ uVar8) < uVar8));
  uVar19 = uVar10 * 0x760f253edb4ab0d2;
  lVar22 = 0x7538dcfb76180000;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar10;
  uVar18 = SUB168(auVar4 * ZEXT816(0x760f253edb4ab0d2),8);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar9;
  uVar20 = SUB168(auVar5 * ZEXT816(0x760f253edb4ab0d2),8);
  uVar14 = uVar9 * 0x760f253edb4ab0d2;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar9;
  uVar8 = SUB168(auVar6 * ZEXT816(0x9598f4f1e8361973),8);
  uVar15 = uVar14 + uVar18 + (ulong)CARRY8(uVar13,uVar19);
  if (CARRY8(uVar14,uVar18) || CARRY8(uVar14 + uVar18,(ulong)CARRY8(uVar13,uVar19))) {
    uVar20 = uVar20 + 1;
  }
  if (CARRY8(uVar13 + uVar19,uVar9 * -0x6a670b0e17c9e68d)) {
    uVar8 = uVar8 + 1;
  }
  if (CARRY8(uVar15,uVar8)) {
    uVar20 = uVar20 + 1;
  }
  uVar13 = (uVar10 >> 0x13 | uVar9 << 0x2d) / 0x1158e460913d;
  if (0x7ffff < uVar9) {
    uVar13 = uVar15 + uVar8 >> 0x3e | uVar20 << 2;
  }
  uVar10 = uVar10 + uVar13 * 0x7538dcfb76180000;
  uVar8 = 0;
  if (0x7ffff < uVar9) {
    uVar8 = uVar20 >> 0x3e;
  }
  if (uVar10 >> 4 < 0x271) {
    lVar11 = 0x14;
  }
  else {
    lVar11 = 0x14;
    puVar16 = local_54 + 1;
    uVar20 = uVar10;
    do {
      lVar11 = lVar11 + -4;
      uVar10 = uVar20 / 10000;
      uVar7 = (int)uVar20 + (int)uVar10 * -10000;
      uVar2 = (uVar7 >> 2 & 0x3fff) / 0x19;
      puVar16[-1] = *(undefined2 *)(&DAT_0045499c + (ulong)uVar2 * 2);
      *puVar16 = *(undefined2 *)(&DAT_0045499c + ((ulong)(uVar7 + uVar2 * -100) & 0xffff) * 2);
      bVar1 = 99999999 < uVar20;
      puVar16 = puVar16 + -2;
      uVar20 = uVar10;
    } while (bVar1);
  }
  lVar12 = lVar11;
  if (99 < uVar10) {
    uVar7 = (uint)uVar10;
    lVar12 = lVar11 + -2;
    uVar2 = (uVar7 >> 2 & 0x3fff) / 0x19;
    uVar10 = (ulong)uVar2;
    *(undefined2 *)(local_67 + lVar11 + 1) =
         *(undefined2 *)(&DAT_0045499c + ((ulong)(uVar7 + uVar2 * -100) & 0xffff) * 2);
  }
  if (uVar10 < 10) {
    lVar11 = lVar12 + -1;
    abStack_65[lVar12] = (byte)uVar10 | 0x30;
    if (uVar13 == 0 && uVar8 == 0) goto LAB_006aab74;
LAB_006aaa1c:
    memset(abStack_65 + 2,0x30,lVar11 - 1);
    uVar8 = uVar13 >> 0x13 | uVar8 << 0x2d;
    if (uVar8 < 0x1158e460913d) {
      lVar22 = 0;
    }
    uVar13 = lVar22 + uVar13;
    if (uVar13 >> 4 < 0x271) {
      lVar22 = 0x14;
    }
    else {
      lVar22 = 0x14;
      pbVar17 = abStack_65;
      uVar20 = uVar13;
      do {
        lVar22 = lVar22 + -4;
        uVar13 = uVar20 / 10000;
        uVar7 = (int)uVar20 + (int)uVar13 * -10000;
        uVar2 = (uVar7 >> 2 & 0x3fff) / 0x19;
        *(undefined2 *)(pbVar17 + -2) = *(undefined2 *)(&DAT_0045499c + (ulong)uVar2 * 2);
        *(undefined2 *)pbVar17 =
             *(undefined2 *)(&DAT_0045499c + ((ulong)(uVar7 + uVar2 * -100) & 0xffff) * 2);
        bVar1 = 99999999 < uVar20;
        pbVar17 = pbVar17 + -4;
        uVar20 = uVar13;
      } while (bVar1);
    }
    lVar12 = lVar22;
    if (99 < uVar13) {
      uVar7 = (uint)uVar13;
      lVar12 = lVar22 + -2;
      uVar2 = (uVar7 >> 2 & 0x3fff) / 0x19;
      uVar13 = (ulong)uVar2;
      *(undefined2 *)((long)&uStack_79 + lVar22) =
           *(undefined2 *)(&DAT_0045499c + ((ulong)(uVar7 + uVar2 * -100) & 0xffff) * 2);
    }
    if (uVar13 < 10) {
      lVar11 = lVar12 + -1;
      *(byte *)((long)&uStack_79 + lVar12 + 1) = (byte)uVar13 | 0x30;
    }
    else {
      lVar11 = lVar12 + -2;
      *(undefined2 *)((long)&uStack_79 + lVar12) = *(undefined2 *)(&DAT_0045499c + uVar13 * 2);
    }
    if (uVar8 < 0x1158e460913d) {
      lVar11 = lVar11 + 1;
    }
    else {
      memset(auStack_76,0x30,lVar11 - 1);
      lVar11 = 1;
      local_77 = 0x31;
    }
  }
  else {
    lVar11 = lVar12 + -2;
    *(undefined2 *)(local_67 + lVar12 + 1) = *(undefined2 *)(&DAT_0045499c + uVar10 * 2);
    if (uVar13 != 0 || uVar8 != 0) goto LAB_006aaa1c;
LAB_006aab74:
    lVar11 = lVar11 + 0x14;
  }
  if ((long)param_3 < 0) {
    *(undefined1 *)((long)&uStack_79 + lVar11) = 0x2d;
    lVar11 = lVar11 + -1;
  }
  __n = 0x28 - lVar11;
  if (-1 < (long)__n) {
    if (lVar11 == 0x28) {
      __dest = (void *)0x1;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar21 = 1;
      __dest = (void *)__rustc::__rust_alloc(__n,1);
      if (__dest == (void *)0x0) goto LAB_006aab8c;
      memcpy(__dest,(void *)((long)&uStack_79 + lVar11 + 1),__n);
    }
    *param_1 = __n;
    param_1[1] = (size_t)__dest;
    param_1[2] = __n;
    return;
  }
  uVar21 = 0;
LAB_006aab8c:
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar21,__n);
}


// ===== 006aac48  <serde_json::value::ser::MapKeySerializer_as_serde_core::ser::Serializer>::serialize_none =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::ser::MapKeySerializer as serde_core::ser::Serializer>::serialize_none */

void __rustcall
<serde_json::value::ser::MapKeySerializer_as_serde_core::ser::Serializer>::serialize_none
          (undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 local_38 [3];
  
  local_38[0] = 0x11;
  uVar1 = <serde_json::error::[0]::serde_json::error::Error>::syntax(local_38,0,0);
  *param_1 = 0xffffffffffffffff;
  param_1[1] = uVar1;
  return;
}


// ===== 006aac8c  <serde_json::value::ser::MapKeySerializer_as_serde_core::ser::Serializer>::serialize_u128 =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::ser::MapKeySerializer as serde_core::ser::Serializer>::serialize_u128 */

void __rustcall
<serde_json::value::ser::MapKeySerializer_as_serde_core::ser::Serializer>::serialize_u128
          (size_t *param_1,ulong param_2,ulong param_3)

{
  bool bVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined2 *puVar16;
  byte *pbVar17;
  ulong uVar18;
  size_t __n;
  void *__dest;
  undefined8 uVar19;
  undefined2 uStack_7a;
  byte local_78 [16];
  undefined1 local_68 [2];
  byte abStack_66 [17];
  undefined2 local_55 [2];
  
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_2;
  uVar9 = SUB168(auVar3 * ZEXT816(0x9598f4f1e8361973),8);
  uVar15 = param_2 * 0x760f253edb4ab0d2;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_2;
  uVar14 = SUB168(auVar4 * ZEXT816(0x760f253edb4ab0d2),8);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = param_3;
  uVar18 = SUB168(auVar5 * ZEXT816(0x760f253edb4ab0d2),8);
  uVar12 = param_3 * 0x760f253edb4ab0d2;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_3;
  uVar8 = SUB168(auVar6 * ZEXT816(0x9598f4f1e8361973),8);
  uVar13 = uVar12 + uVar14 + (ulong)CARRY8(uVar9,uVar15);
  if (CARRY8(uVar12,uVar14) || CARRY8(uVar12 + uVar14,(ulong)CARRY8(uVar9,uVar15))) {
    uVar18 = uVar18 + 1;
  }
  if (CARRY8(uVar9 + uVar15,param_3 * -0x6a670b0e17c9e68d)) {
    uVar8 = uVar8 + 1;
  }
  if (CARRY8(uVar13,uVar8)) {
    uVar18 = uVar18 + 1;
  }
  uVar9 = (param_2 >> 0x13 | param_3 << 0x2d) / 0x1158e460913d;
  if (0x7ffff < param_3) {
    uVar9 = uVar13 + uVar8 >> 0x3e | uVar18 << 2;
  }
  uVar8 = 0;
  if (0x7ffff < param_3) {
    uVar8 = uVar18 >> 0x3e;
  }
  param_2 = param_2 + uVar9 * 0x7538dcfb76180000;
  if (param_2 >> 4 < 0x271) {
    lVar10 = 0x14;
  }
  else {
    lVar10 = 0x14;
    puVar16 = local_55 + 1;
    uVar18 = param_2;
    do {
      lVar10 = lVar10 + -4;
      param_2 = uVar18 / 10000;
      uVar7 = (int)uVar18 + (int)param_2 * -10000;
      uVar2 = (uVar7 >> 2 & 0x3fff) / 0x19;
      puVar16[-1] = *(undefined2 *)(&DAT_0045499c + (ulong)uVar2 * 2);
      *puVar16 = *(undefined2 *)(&DAT_0045499c + ((ulong)(uVar7 + uVar2 * -100) & 0xffff) * 2);
      bVar1 = 99999999 < uVar18;
      puVar16 = puVar16 + -2;
      uVar18 = param_2;
    } while (bVar1);
  }
  lVar11 = lVar10;
  if (99 < param_2) {
    uVar7 = (uint)param_2;
    lVar11 = lVar10 + -2;
    uVar2 = (uVar7 >> 2 & 0x3fff) / 0x19;
    param_2 = (ulong)uVar2;
    *(undefined2 *)(local_68 + lVar10 + 1) =
         *(undefined2 *)(&DAT_0045499c + ((ulong)(uVar7 + uVar2 * -100) & 0xffff) * 2);
  }
  if (param_2 < 10) {
    lVar10 = lVar11 + -1;
    abStack_66[lVar11] = (byte)param_2 | 0x30;
    if (uVar9 == 0 && uVar8 == 0) goto LAB_006aaf68;
LAB_006aae20:
    memset(abStack_66 + 2,0x30,lVar10 - 1);
    uVar8 = uVar9 >> 0x13 | uVar8 << 0x2d;
    uVar9 = uVar9 + (uVar8 / 0x1158e460913d) * 0x7538dcfb76180000;
    if (uVar9 >> 4 < 0x271) {
      lVar10 = 0x14;
    }
    else {
      lVar10 = 0x14;
      pbVar17 = abStack_66;
      uVar18 = uVar9;
      do {
        lVar10 = lVar10 + -4;
        uVar9 = uVar18 / 10000;
        uVar7 = (int)uVar18 + (int)uVar9 * -10000;
        uVar2 = (uVar7 >> 2 & 0x3fff) / 0x19;
        *(undefined2 *)(pbVar17 + -2) = *(undefined2 *)(&DAT_0045499c + (ulong)uVar2 * 2);
        *(undefined2 *)pbVar17 =
             *(undefined2 *)(&DAT_0045499c + ((ulong)(uVar7 + uVar2 * -100) & 0xffff) * 2);
        bVar1 = 99999999 < uVar18;
        pbVar17 = pbVar17 + -4;
        uVar18 = uVar9;
      } while (bVar1);
    }
    lVar11 = lVar10;
    if (99 < uVar9) {
      uVar7 = (uint)uVar9;
      lVar11 = lVar10 + -2;
      uVar2 = (uVar7 >> 2 & 0x3fff) / 0x19;
      uVar9 = (ulong)uVar2;
      *(undefined2 *)((long)&uStack_7a + lVar10) =
           *(undefined2 *)(&DAT_0045499c + ((ulong)(uVar7 + uVar2 * -100) & 0xffff) * 2);
    }
    if (uVar9 < 10) {
      lVar10 = lVar11 + -1;
      *(byte *)((long)&uStack_7a + lVar11 + 1) = (byte)uVar9 | 0x30;
    }
    else {
      lVar10 = lVar11 + -2;
      *(undefined2 *)((long)&uStack_7a + lVar11) = *(undefined2 *)(&DAT_0045499c + uVar9 * 2);
    }
    if (uVar8 < 0x1158e460913d) goto joined_r0x006aaf2c;
    pbVar17 = local_78;
    memset((void *)((ulong)pbVar17 | 1),0x30,lVar10 - 1);
    local_78[0] = (byte)(uVar8 / 0x1158e460913d) | 0x30;
    __n = 0x27;
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    __dest = (void *)__rustc::__rust_alloc(0x27,1);
  }
  else {
    lVar10 = lVar11 + -2;
    *(undefined2 *)(local_68 + lVar11 + 1) = *(undefined2 *)(&DAT_0045499c + param_2 * 2);
    if (uVar9 != 0 || uVar8 != 0) goto LAB_006aae20;
LAB_006aaf68:
    lVar10 = lVar10 + 0x13;
joined_r0x006aaf2c:
    __n = 0x27 - lVar10;
    if ((long)__n < 0) {
      uVar19 = 0;
      goto LAB_006aaf34;
    }
    if (lVar10 == 0x27) {
      __n = 0;
      __dest = (void *)0x1;
      goto LAB_006ab02c;
    }
    pbVar17 = local_78 + lVar10;
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    __dest = (void *)__rustc::__rust_alloc(__n,1);
  }
  uVar19 = 1;
  if (__dest != (void *)0x0) {
    memcpy(__dest,pbVar17,__n);
LAB_006ab02c:
    *param_1 = __n;
    param_1[1] = (size_t)__dest;
    param_1[2] = __n;
    return;
  }
LAB_006aaf34:
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar19,__n);
}


// ===== 006ab050  <serde_json::value::ser::MapKeySerializer_as_serde_core::ser::Serializer>::serialize_bytes =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::ser::MapKeySerializer as serde_core::ser::Serializer>::serialize_bytes */

void __rustcall
<serde_json::value::ser::MapKeySerializer_as_serde_core::ser::Serializer>::serialize_bytes
          (undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 local_38 [3];
  
  local_38[0] = 0x11;
  uVar1 = <serde_json::error::[0]::serde_json::error::Error>::syntax(local_38,0,0);
  *param_1 = 0xffffffffffffffff;
  param_1[1] = uVar1;
  return;
}


// ===== 006ab094  <serde_json::value::ser::MapKeySerializer_as_serde_core::ser::Serializer>::serialize_tuple =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::ser::MapKeySerializer as serde_core::ser::Serializer>::serialize_tuple */

void __rustcall
<serde_json::value::ser::MapKeySerializer_as_serde_core::ser::Serializer>::serialize_tuple(void)

{
  undefined8 local_28 [3];
  
  local_28[0] = 0x11;
  <serde_json::error::[0]::serde_json::error::Error>::syntax(local_28,0,0);
  return;
}


// ===== 006ab0c4  <serde_json::value::ser::MapKeySerializer_as_serde_core::ser::Serializer>::serialize_tuple_struct =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::ser::MapKeySerializer as serde_core::ser::Serializer>::serialize_tuple_struct
    */

void __rustcall
<serde_json::value::ser::MapKeySerializer_as_serde_core::ser::Serializer>::serialize_tuple_struct
          (void)

{
  undefined8 local_28 [3];
  
  local_28[0] = 0x11;
  <serde_json::error::[0]::serde_json::error::Error>::syntax(local_28,0,0);
  return;
}


// ===== 006ab0f4  <serde_json::value::ser::MapKeySerializer_as_serde_core::ser::Serializer>::serialize_unit_struct =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::ser::MapKeySerializer as serde_core::ser::Serializer>::serialize_unit_struct
    */

void __rustcall
<serde_json::value::ser::MapKeySerializer_as_serde_core::ser::Serializer>::serialize_unit_struct
          (undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 local_38 [3];
  
  local_38[0] = 0x11;
  uVar1 = <serde_json::error::[0]::serde_json::error::Error>::syntax(local_38,0,0);
  *param_1 = 0xffffffffffffffff;
  param_1[1] = uVar1;
  return;
}


// ===== 006ab138  <serde_json::value::ser::MapKeySerializer_as_serde_core::ser::Serializer>::serialize_struct_variant =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::ser::MapKeySerializer as
   serde_core::ser::Serializer>::serialize_struct_variant */

void __rustcall
<serde_json::value::ser::MapKeySerializer_as_serde_core::ser::Serializer>::serialize_struct_variant
          (void)

{
  undefined8 local_28 [3];
  
  local_28[0] = 0x11;
  <serde_json::error::[0]::serde_json::error::Error>::syntax(local_28,0,0);
  return;
}


// ===== 006ab168  <serde_json::value::ser::SerializeMap_as_serde_core::ser::SerializeStruct>::end =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::ser::SerializeMap as serde_core::ser::SerializeStruct>::end */

void __rustcall
<serde_json::value::ser::SerializeMap_as_serde_core::ser::SerializeStruct>::end
          (undefined1 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined7 uStack_20;
  undefined1 local_19;
  undefined7 uStack_18;
  undefined1 uStack_11;
  
  lVar4 = param_2[4];
  lVar3 = param_2[3];
  lVar2 = param_2[5];
  lVar1 = *param_2;
  *param_1 = 5;
  uStack_11 = (undefined1)lVar4;
  local_19 = (undefined1)lVar3;
  uStack_18 = (undefined7)((ulong)lVar3 >> 8);
  *(ulong *)(param_1 + 9) = CONCAT17(uStack_11,uStack_18);
  *(ulong *)(param_1 + 1) = CONCAT17(local_19,uStack_20);
  *(long *)(param_1 + 0x18) = lVar2;
  *(long *)(param_1 + 0x10) = lVar4;
  if ((lVar1 != -1) && (lVar1 != 0)) {
    __rustc::__rust_dealloc(param_2[1],lVar1,1);
    return;
  }
  return;
}


// ===== 006ab1bc  <serde_json::value::ser::SerializeStructVariant_as_serde_core::ser::SerializeStructVariant>::end =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::ser::SerializeStructVariant as serde_core::ser::SerializeStructVariant>::end
    */

void __rustcall
<serde_json::value::ser::SerializeStructVariant_as_serde_core::ser::SerializeStructVariant>::end
          (undefined1 *param_1,undefined8 *param_2)

{
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 auStack_80 [32];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined1 local_40;
  undefined6 uStack_3f;
  undefined1 uStack_39;
  undefined7 uStack_38;
  undefined1 uStack_31;
  undefined7 uStack_30;
  undefined1 uStack_29;
  undefined7 uStack_28;
  undefined1 uStack_21;
  
  local_50 = param_2[2];
  uStack_58 = param_2[1];
  local_60 = *param_2;
  local_98 = 0;
  local_88 = 0;
  uStack_30 = (undefined7)param_2[4];
  uStack_29 = (undefined1)((ulong)param_2[4] >> 0x38);
  uStack_38 = (undefined7)param_2[3];
  uStack_31 = (undefined1)((ulong)param_2[3] >> 0x38);
  uStack_28 = (undefined7)param_2[5];
  uStack_21 = (undefined1)((ulong)param_2[5] >> 0x38);
  local_40 = 5;
                    /* try { // try from 006ab200 to 006ab21b has its CatchHandler @ 006ab254 */
  FUN_006b4b64(auStack_80,&local_98,&local_60,&local_40);
  FUN_006a897c(auStack_80);
  *param_1 = 5;
  uStack_31 = (undefined1)uStack_90;
  uStack_39 = (undefined1)local_98;
  uStack_38 = (undefined7)((ulong)local_98 >> 8);
  *(ulong *)(param_1 + 9) = CONCAT17(uStack_31,uStack_38);
  *(ulong *)(param_1 + 1) = CONCAT17(uStack_39,CONCAT61(uStack_3f,local_40));
  *(undefined8 *)(param_1 + 0x18) = local_88;
  *(undefined8 *)(param_1 + 0x10) = uStack_90;
  return;
}


// ===== 006ab26c  <serde_json::value::ser::Serializer_as_serde_core::ser::Serializer>::serialize_seq =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::ser::Serializer as serde_core::ser::Serializer>::serialize_seq */

void __rustcall
<serde_json::value::ser::Serializer_as_serde_core::ser::Serializer>::serialize_seq
          (ulong *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  if ((param_2 & 1) == 0) {
    param_3 = 0;
  }
  uVar2 = param_3 * 0x20;
  if (param_3 >> 0x3b == 0 && uVar2 < 0x7ffffffffffffff9) {
    if (uVar2 == 0) {
      *param_1 = 0;
      param_1[1] = 8;
      param_1[2] = 0;
      return;
    }
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar3 = 8;
    uVar1 = __rustc::__rust_alloc(uVar2,8);
    if (uVar1 != 0) {
      *param_1 = param_3;
      param_1[1] = uVar1;
      param_1[2] = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar3,uVar2);
}


// ===== 006ab300  <serde_json::value::ser::Serializer_as_serde_core::ser::Serializer>::serialize_i128 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::ser::Serializer as serde_core::ser::Serializer>::serialize_i128 */

void __rustcall
<serde_json::value::ser::Serializer_as_serde_core::ser::Serializer>::serialize_i128
          (undefined1 *param_1,ulong param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 local_38 [3];
  
  if (param_3 == 0) {
    *(undefined8 *)(param_1 + 8) = 0;
    *(ulong *)(param_1 + 0x10) = param_2;
    *param_1 = 2;
    return;
  }
  if (CARRY8(param_3,(ulong)(0x7fffffffffffffff < param_2))) {
    *param_1 = 2;
    *(undefined8 *)(param_1 + 8) = 1;
    *(ulong *)(param_1 + 0x10) = param_2;
    return;
  }
  local_38[0] = 0xe;
  uVar1 = <serde_json::error::[0]::serde_json::error::Error>::syntax(local_38,0,0);
  *(undefined8 *)(param_1 + 8) = uVar1;
  *param_1 = 0xff;
  return;
}


// ===== 006ab384  <serde_json::value::ser::Serializer_as_serde_core::ser::Serializer>::serialize_u128 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::ser::Serializer as serde_core::ser::Serializer>::serialize_u128 */

void __rustcall
<serde_json::value::ser::Serializer_as_serde_core::ser::Serializer>::serialize_u128
          (undefined1 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 local_38 [3];
  
  if (param_3 == 0) {
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = param_2;
    *param_1 = 2;
    return;
  }
  local_38[0] = 0xe;
  uVar1 = <serde_json::error::[0]::serde_json::error::Error>::syntax(local_38,0,0);
  *(undefined8 *)(param_1 + 8) = uVar1;
  *param_1 = 0xff;
  return;
}


// ===== 006ab3e4  <serde_json::value::ser::Serializer_as_serde_core::ser::Serializer>::serialize_bytes =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::ser::Serializer as serde_core::ser::Serializer>::serialize_bytes */

void __rustcall
<serde_json::value::ser::Serializer_as_serde_core::ser::Serializer>::serialize_bytes
          (undefined1 *param_1,byte *param_2,ulong param_3)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  ulong *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  uVar5 = param_3 * 0x20;
  uVar6 = 0;
  if ((param_3 >> 0x3b == 0) && (uVar5 < 0x7ffffffffffffff9)) {
    if (uVar5 == 0) {
      lVar3 = 8;
      uVar2 = 0;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar6 = 8;
      lVar3 = __rustc::__rust_alloc(uVar5,8);
      uVar2 = param_3;
      if (lVar3 == 0) goto LAB_006ab458;
    }
    if (param_3 != 0) {
      puVar4 = (ulong *)(lVar3 + 0x10);
      uVar5 = param_3;
      do {
        bVar1 = *param_2;
        *(undefined1 *)(puVar4 + -2) = 2;
        uVar5 = uVar5 - 1;
        puVar4[-1] = 0;
        *puVar4 = (ulong)bVar1;
        puVar4 = puVar4 + 4;
        param_2 = param_2 + 1;
      } while (uVar5 != 0);
    }
    *(ulong *)(param_1 + 8) = uVar2;
    *(long *)(param_1 + 0x10) = lVar3;
    *param_1 = 4;
    *(ulong *)(param_1 + 0x18) = param_3;
    return;
  }
LAB_006ab458:
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar6,uVar5);
}


// ===== 006ab4b8  <serde_json::value::ser::Serializer_as_serde_core::ser::Serializer>::serialize_tuple =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::ser::Serializer as serde_core::ser::Serializer>::serialize_tuple */

void __rustcall
<serde_json::value::ser::Serializer_as_serde_core::ser::Serializer>::serialize_tuple
          (ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2 * 0x20;
  uVar3 = 0;
  if ((param_2 >> 0x3b == 0) && (uVar2 < 0x7ffffffffffffff9)) {
    if (uVar2 == 0) {
      *param_1 = 0;
      param_1[1] = 8;
      param_1[2] = 0;
      return;
    }
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar3 = 8;
    uVar1 = __rustc::__rust_alloc(uVar2,8);
    if (uVar1 != 0) {
      *param_1 = param_2;
      param_1[1] = uVar1;
      param_1[2] = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar3,uVar2);
}


// ===== 006ab548  <serde_json::value::ser::Serializer_as_serde_core::ser::Serializer>::serialize_tuple_struct =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::ser::Serializer as serde_core::ser::Serializer>::serialize_tuple_struct */

void __rustcall
<serde_json::value::ser::Serializer_as_serde_core::ser::Serializer>::serialize_tuple_struct
          (ulong *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = param_4 * 0x20;
  uVar3 = 0;
  if ((param_4 >> 0x3b == 0) && (uVar2 < 0x7ffffffffffffff9)) {
    if (uVar2 == 0) {
      *param_1 = 0;
      param_1[1] = 8;
      param_1[2] = 0;
      return;
    }
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar3 = 8;
    uVar1 = __rustc::__rust_alloc(uVar2,8);
    if (uVar1 != 0) {
      *param_1 = param_4;
      param_1[1] = uVar1;
      param_1[2] = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar3,uVar2);
}


// ===== 006ab5d8  <serde_json::value::ser::Serializer_as_serde_core::ser::Serializer>::serialize_tuple_variant =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::ser::Serializer as serde_core::ser::Serializer>::serialize_tuple_variant */

void __rustcall
<serde_json::value::ser::Serializer_as_serde_core::ser::Serializer>::serialize_tuple_variant
          (size_t *param_1)

{
  void *__dest;
  size_t sVar1;
  void *in_x3;
  size_t in_x4;
  ulong in_x5;
  ulong uVar2;
  undefined8 uVar3;
  
  if ((long)in_x4 < 0) {
    uVar3 = 0;
LAB_006ab5f8:
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(uVar3,in_x4);
  }
  if (in_x4 == 0) {
    __dest = (void *)0x1;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar3 = 1;
    __dest = (void *)__rustc::__rust_alloc(in_x4,1);
    if (__dest == (void *)0x0) goto LAB_006ab5f8;
    memcpy(__dest,in_x3,in_x4);
  }
  uVar3 = 0;
  uVar2 = in_x5 << 5;
  if (in_x5 >> 0x3b == 0) {
    uVar3 = 0;
    uVar2 = in_x5 * 0x20;
    if (uVar2 < 0x7ffffffffffffff9) {
      if (uVar2 == 0) {
        in_x5 = 0;
        sVar1 = 8;
      }
      else {
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        uVar3 = 8;
        sVar1 = __rustc::__rust_alloc(uVar2,8);
        if (sVar1 == 0) goto LAB_006ab68c;
      }
      *param_1 = in_x4;
      param_1[1] = (size_t)__dest;
      param_1[2] = in_x4;
      param_1[3] = in_x5;
      param_1[4] = sVar1;
      param_1[5] = 0;
      return;
    }
  }
LAB_006ab68c:
                    /* try { // try from 006ab68c to 006ab697 has its CatchHandler @ 006ab6c4 */
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar3,uVar2);
}


// ===== 006ab6e4  <serde_json::value::ser::Serializer_as_serde_core::ser::Serializer>::serialize_struct_variant =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::ser::Serializer as serde_core::ser::Serializer>::serialize_struct_variant */

void __rustcall
<serde_json::value::ser::Serializer_as_serde_core::ser::Serializer>::serialize_struct_variant
          (size_t *param_1)

{
  void *__dest;
  void *in_x3;
  size_t in_x4;
  undefined8 uVar1;
  
  if ((long)in_x4 < 0) {
    uVar1 = 0;
LAB_006ab704:
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(uVar1,in_x4);
  }
  if (in_x4 == 0) {
    __dest = (void *)0x1;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar1 = 1;
    __dest = (void *)__rustc::__rust_alloc(in_x4,1);
    if (__dest == (void *)0x0) goto LAB_006ab704;
    memcpy(__dest,in_x3,in_x4);
  }
  *param_1 = in_x4;
  param_1[1] = (size_t)__dest;
  param_1[2] = in_x4;
  param_1[3] = 0;
  param_1[5] = 0;
  return;
}


// ===== 006ab770  FUN_006ab770 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_006ab770(ulong *param_1,void *param_2,ulong param_3,undefined8 param_4,undefined1 param_5)

{
  char *pcVar1;
  byte *pbVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  char *pcVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  size_t sVar17;
  ulong uVar18;
  ulong local_e8;
  ulong uStack_e0;
  ulong local_d8;
  long local_d0;
  ulong uStack_c8;
  ulong local_b8;
  ulong local_b0;
  ulong uStack_a8;
  ulong local_98;
  long local_88;
  ulong uStack_80;
  long local_78;
  ulong uStack_70;
  
  local_e8 = 0;
  uStack_e0 = 1;
  local_d8 = 0;
                    /* try { // try from 006ab7a8 to 006ab7c3 has its CatchHandler @ 006abf48 */
  <core::str::pattern::[u]::core::str::pattern::StrSearcher>::new
            (&local_d0,param_2,param_3,param_4,2);
  if (local_d0 == 1) {
    uVar18 = 0;
    uVar14 = 0;
    lVar8 = 0;
    if (uStack_c8 <= uStack_70) {
      lVar8 = uStack_70 - uStack_c8;
    }
    uVar6 = uStack_a8 + (uStack_70 - 1);
    uVar15 = uStack_a8;
    uVar16 = local_98;
    while (uVar16 == 0xffffffffffffffff) {
      if (uStack_80 <= uVar6) goto LAB_006abad8;
      if (uStack_c8 - 1 < uStack_70) {
LAB_006ab974:
        if ((local_b0 >> ((ulong)*(byte *)(local_88 + uVar6) & 0x3f) & 1) == 0) {
          uVar15 = uVar15 + uStack_70;
        }
        else {
          lVar7 = -uVar15;
          lVar10 = uStack_c8 + uVar15;
          lVar12 = lVar8;
          pcVar13 = (char *)(local_78 + uStack_c8);
          do {
            if (lVar12 == 0) {
              uVar6 = uStack_c8;
              goto LAB_006ab9c4;
            }
            cVar3 = *pcVar13;
            pcVar1 = (char *)(local_88 + lVar10);
            lVar7 = lVar7 + -1;
            lVar10 = lVar10 + 1;
            lVar12 = lVar12 + -1;
            pcVar13 = pcVar13 + 1;
          } while (cVar3 == *pcVar1);
          uVar15 = -lVar7;
        }
        goto LAB_006ab964;
      }
LAB_006ab9fc:
      if ((local_b0 >> ((ulong)*(byte *)(local_88 + uVar6) & 0x3f) & 1) == 0) {
        uVar15 = uVar15 + uStack_70;
        uVar6 = uVar15 + (uStack_70 - 1);
        goto joined_r0x006aba48;
      }
      lVar7 = -uVar15;
      lVar10 = uStack_c8 + uVar15;
      lVar12 = lVar8;
      pcVar13 = (char *)(local_78 + uStack_c8);
      while (lVar12 != 0) {
        cVar3 = *pcVar13;
        pcVar1 = (char *)(local_88 + lVar10);
        lVar7 = lVar7 + -1;
        lVar10 = lVar10 + 1;
        lVar12 = lVar12 + -1;
        pcVar13 = pcVar13 + 1;
        if (cVar3 != *pcVar1) goto code_r0x006aba38;
      }
      uVar6 = uStack_c8 - 1;
      if (uStack_c8 != 0) goto LAB_006abf28;
LAB_006aba54:
      uVar16 = 0xffffffffffffffff;
      sVar17 = uVar15 - uVar14;
      if (local_e8 - uVar18 < sVar17) {
LAB_006aba6c:
                    /* try { // try from 006aba6c to 006abaaf has its CatchHandler @ 006abf40 */
        FUN_006b1db8(&local_e8,uVar18,uVar15 - uVar14,1,1);
        uVar18 = local_d8;
      }
joined_r0x006aba94:
      if (uVar15 != uVar14) {
        memcpy((void *)(uStack_e0 + uVar18),(void *)((long)param_2 + uVar14),sVar17);
      }
      local_d8 = uVar18 + sVar17;
      if (local_e8 == local_d8) {
        FUN_006b1db8(&local_e8,local_d8,1,1,1);
      }
      uVar14 = uVar15 + uStack_70;
      uVar18 = local_d8 + 1;
      *(undefined1 *)(uStack_e0 + local_d8) = param_5;
      uVar6 = uVar14 + (uStack_70 - 1);
      local_d8 = uVar18;
      uVar15 = uVar14;
    }
    if (uVar6 < uStack_80) {
LAB_006ab83c:
      if ((local_b0 >> ((ulong)*(byte *)(local_88 + uVar6) & 0x3f) & 1) == 0) {
        uVar16 = 0;
        uVar9 = uVar15 + uStack_70;
      }
      else {
        uVar6 = uVar16;
        if (uVar16 <= uStack_c8) {
          uVar6 = uStack_c8;
        }
        uVar9 = (uVar15 - uStack_c8) + uVar6;
        do {
          if (uStack_70 <= uVar6) {
            uVar9 = uStack_c8;
            goto LAB_006ab890;
          }
          pcVar13 = (char *)(local_78 + uVar6);
          pcVar1 = (char *)(local_88 + uVar15 + uVar6);
          uVar6 = uVar6 + 1;
          uVar9 = uVar9 + 1;
        } while (*pcVar13 == *pcVar1);
        uVar16 = 0;
      }
      goto LAB_006ab828;
    }
LAB_006abad8:
    sVar17 = param_3 - uVar14;
    uStack_80 = uVar14;
    if (sVar17 <= local_e8 - uVar18) goto joined_r0x006abaf8;
  }
  else {
    if (((uint)local_b8 >> 0x10 & 1) == 0) {
      uVar18 = uStack_c8;
      if (uStack_c8 != 0) {
        if (uStack_c8 < uStack_80) {
          if (*(char *)(local_88 + uStack_c8) + 0x40 < 0 !=
              SCARRY4((int)*(char *)(local_88 + uStack_c8),0x40)) goto LAB_006abf04;
        }
        else if (uStack_c8 != uStack_80) goto LAB_006abf04;
      }
      if (uStack_c8 == uStack_80) {
        if ((local_b8 & 1) == 0) goto LAB_006abb54;
      }
      else {
        pbVar2 = (byte *)(local_88 + uStack_c8);
        uVar5 = (uint)*pbVar2;
        if ((char)*pbVar2 < '\0') {
          if (uVar5 < 0xe0) {
            uVar5 = pbVar2[1] & 0x3f | (uVar5 & 0x1f) << 6;
          }
          else {
            uVar11 = pbVar2[2] & 0x3f | (pbVar2[1] & 0x3f) << 6;
            if (uVar5 < 0xf0) {
              uVar5 = uVar11 | (uVar5 & 0x1f) << 0xc;
            }
            else {
              uVar5 = pbVar2[3] & 0x3f | uVar11 << 6 | (uVar5 & 7) << 0x12;
            }
          }
        }
        if ((local_b8 & 1) == 0) {
          if (uVar5 < 0x80) {
            lVar8 = 1;
          }
          else if (uVar5 < 0x800) {
            lVar8 = 2;
          }
          else {
            lVar8 = 3;
            if (0xffff < uVar5) {
              lVar8 = 4;
            }
          }
          uStack_c8 = lVar8 + uStack_c8;
          uVar18 = uStack_c8;
          if (uStack_c8 != 0) {
            if (uStack_c8 < uStack_80) {
              if (*(char *)(local_88 + uStack_c8) + 0x40 < 0 !=
                  SCARRY4((int)*(char *)(local_88 + uStack_c8),0x40)) goto LAB_006abf04;
            }
            else if (uStack_c8 != uStack_80) goto LAB_006abf04;
          }
          uVar18 = uStack_80;
          if (uStack_c8 != uStack_80) {
            uVar18 = uStack_c8;
          }
        }
      }
      if (uVar18 == 0) {
        local_d8 = 0;
        if (local_e8 == 0) {
LAB_006abee4:
                    /* try { // try from 006abee4 to 006abef7 has its CatchHandler @ 006abf3c */
          FUN_006b1db8(&local_e8,local_d8,1,1,1);
        }
      }
      else {
                    /* try { // try from 006abea4 to 006abebb has its CatchHandler @ 006abf3c */
        FUN_006b1db8(&local_e8,0,uVar18,1,1);
        uVar14 = local_d8;
        memcpy((void *)(uStack_e0 + local_d8),param_2,uVar18);
        local_d8 = uVar14 + uVar18;
        if (local_e8 == local_d8) goto LAB_006abee4;
      }
      lVar8 = local_d8 + 1;
      *(undefined1 *)(uStack_e0 + local_d8) = param_5;
      uVar14 = uVar18;
      local_d8 = lVar8;
      if (uVar18 != 0) goto LAB_006abcec;
LAB_006abd08:
      do {
        do {
          if (uVar14 == uStack_80) {
            sVar17 = param_3 - uStack_80;
            uVar14 = uStack_80;
            uVar18 = local_d8;
            if (local_e8 - local_d8 < sVar17) goto LAB_006abb70;
            goto joined_r0x006abaf8;
          }
          pbVar2 = (byte *)(local_88 + uVar14);
          bVar4 = *pbVar2;
          if ((char)bVar4 < '\0') {
            if (bVar4 < 0xe0) {
              uVar5 = pbVar2[1] & 0x3f | (bVar4 & 0x1f) << 6;
            }
            else {
              uVar11 = (uint)bVar4;
              uVar5 = pbVar2[2] & 0x3f | (pbVar2[1] & 0x3f) << 6;
              if (uVar11 < 0xf0) {
                uVar5 = uVar5 | (uVar11 & 0x1f) << 0xc;
              }
              else {
                uVar5 = pbVar2[3] & 0x3f | uVar5 << 6 | (uVar11 & 7) << 0x12;
              }
            }
            if (uVar5 < 0x80) goto LAB_006abd1c;
            if (uVar5 < 0x800) {
              uVar6 = uVar14 + 2;
            }
            else {
              lVar8 = 3;
              if (0xffff < uVar5) {
                lVar8 = 4;
              }
              uVar6 = lVar8 + uVar14;
            }
          }
          else {
LAB_006abd1c:
            uVar6 = uVar14 + 1;
          }
          uVar18 = uVar6;
          if (uVar6 != 0) {
            if (uVar6 < uStack_80) {
              if (*(char *)(local_88 + uVar6) + 0x40 < 0 !=
                  SCARRY4((int)*(char *)(local_88 + uVar6),0x40)) goto LAB_006abf04;
            }
            else if (uVar6 != uStack_80) goto LAB_006abf04;
          }
          uVar18 = uStack_80;
          if (uVar6 != uStack_80) {
            uVar18 = uVar6;
          }
          uVar15 = uVar18 - uVar14;
          uVar6 = local_d8;
          if (local_e8 - local_d8 < uVar15) {
                    /* try { // try from 006abe2c to 006abe67 has its CatchHandler @ 006abf44 */
            FUN_006b1db8(&local_e8,local_d8,uVar18 - uVar14,1,1);
            uVar6 = local_d8;
          }
          if (uVar18 != uVar14) {
            local_d8 = uVar6;
            memcpy((void *)(uStack_e0 + uVar6),(void *)((long)param_2 + uVar14),uVar15);
          }
          local_d8 = uVar6 + uVar15;
          if (local_e8 == local_d8) {
            FUN_006b1db8(&local_e8,local_d8,1,1,1);
            *(undefined1 *)(uStack_e0 + local_d8) = param_5;
          }
          else {
            *(undefined1 *)(uStack_e0 + local_d8) = param_5;
          }
          local_d8 = local_d8 + 1;
          uVar14 = uVar18;
        } while (uVar18 == 0);
LAB_006abcec:
        uVar14 = uVar18;
        if (uVar18 < uStack_80) {
          if (*(char *)(local_88 + uVar18) + 0x40 < 0 !=
              SCARRY4((int)*(char *)(local_88 + uVar18),0x40)) break;
          goto LAB_006abd08;
        }
      } while (uVar18 == uStack_80);
LAB_006abf04:
                    /* try { // try from 006abf04 to 006abf37 has its CatchHandler @ 006abf4c */
                    /* WARNING: Subroutine does not return */
      core::str::slice_error_fail
                (local_88,uStack_80,uVar18,uStack_80,
                 &PTR_s__rustc_48a229ceaefd4985c50990b14_00976100);
    }
LAB_006abb54:
    uStack_80 = 0;
    uVar14 = uStack_80;
    sVar17 = param_3;
    uVar18 = 0;
    if (param_3 <= local_e8) goto joined_r0x006abaf8;
  }
LAB_006abb70:
                    /* try { // try from 006abb70 to 006abb87 has its CatchHandler @ 006abf48 */
  FUN_006b1db8(&local_e8,uVar18,param_3 - uVar14,1,1);
  uStack_80 = uVar14;
  uVar18 = local_d8;
joined_r0x006abaf8:
  if (param_3 != uStack_80) {
    memcpy((void *)(uStack_e0 + uVar18),(void *)((long)param_2 + uStack_80),sVar17);
  }
  param_1[1] = uStack_e0;
  *param_1 = local_e8;
  param_1[2] = uVar18 + sVar17;
  return;
  while (pcVar13 = (char *)(local_78 + -1 + uVar6),
        pcVar1 = (char *)(local_88 + -1 + uVar15 + uVar6), uVar6 = uVar6 - 1, *pcVar13 == *pcVar1) {
LAB_006ab9c4:
    if (uVar6 == 0) goto LAB_006aba54;
  }
  uVar15 = uVar15 + local_b8;
LAB_006ab964:
  uVar6 = uVar15 + (uStack_70 - 1);
  if (uStack_80 <= uVar6) goto LAB_006abad8;
  goto LAB_006ab974;
code_r0x006aba38:
  uVar15 = -lVar7;
  uVar6 = uVar15 + (uStack_70 - 1);
joined_r0x006aba48:
  if (uStack_80 <= uVar6) goto LAB_006abad8;
  goto LAB_006ab9fc;
LAB_006ab890:
  do {
    uVar6 = uVar9 - 1;
    if (uVar9 <= uVar16) {
      uVar16 = 0;
      sVar17 = uVar15 - uVar14;
      if (local_e8 - uVar18 < sVar17) goto LAB_006aba6c;
      goto joined_r0x006aba94;
    }
    if (uStack_70 <= uVar6) {
LAB_006abf28:
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                (uVar6,uStack_70,&PTR_s__rustc_48a229ceaefd4985c50990b14_009760b0);
    }
    uVar9 = uVar6;
  } while (*(char *)(local_78 + uVar6) == *(char *)(local_88 + uVar15 + uVar6));
  uVar9 = uVar15 + local_b8;
  uVar16 = uStack_70 - local_b8;
LAB_006ab828:
  uVar6 = uVar9 + (uStack_70 - 1);
  uVar15 = uVar9;
  if (uStack_80 <= uVar6) goto LAB_006abad8;
  goto LAB_006ab83c;
}


// ===== 006abf6c  FUN_006abf6c =====

void FUN_006abf6c(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  <serde_json::value::de::[m]::serde_json::value::Value>::unexpected(auStack_38);
  <serde_json::error::Error_as_serde_core::de::Error>::invalid_type
            (auStack_38,param_2,&DAT_009760c8);
  return;
}


// ===== 006abfac  FUN_006abfac =====

void FUN_006abfac(long *param_1)

{
  ulong uVar1;
  long local_28;
  
  if (*param_1 == 1) {
    uVar1 = param_1[1] & 3;
    if ((1 < uVar1 - 2) && (uVar1 != 0)) {
      local_28 = param_1[1] - 1;
                    /* try { // try from 006ac01c to 006ac023 has its CatchHandler @ 006ac044 */
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_28);
    }
  }
  else if ((*param_1 == 0) && (param_1[2] != 0)) {
    __rustc::__rust_dealloc(param_1[1],param_1[2],1);
  }
  __rustc::__rust_dealloc(param_1,0x28,8);
  return;
}


// ===== 006ac060  FUN_006ac060 =====

void FUN_006ac060(byte *param_1)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  ulong local_88 [3];
  undefined8 local_70;
  ulong local_68;
  undefined8 local_60;
  long lStack_58;
  undefined8 local_50;
  undefined8 local_48;
  
  bVar2 = *param_1;
  if (2 < bVar2) {
    if (bVar2 == 3) {
      if (*(long *)(param_1 + 8) != 0) {
        __rustc::__rust_dealloc(*(undefined8 *)(param_1 + 0x10),*(long *)(param_1 + 8),1);
        return;
      }
    }
    else if (bVar2 == 4) {
      lVar1 = *(long *)(param_1 + 0x10);
      lVar4 = *(long *)(param_1 + 0x18) + 1;
      lVar3 = lVar1;
      while (lVar4 = lVar4 + -1, lVar4 != 0) {
                    /* try { // try from 006ac0ac to 006ac0af has its CatchHandler @ 006ac160 */
        FUN_006b4318(lVar3);
        lVar3 = lVar3 + 0x20;
      }
      if (*(long *)(param_1 + 8) != 0) {
        __rustc::__rust_dealloc(lVar1,*(long *)(param_1 + 8) << 5,8);
        return;
      }
    }
    else {
      lVar4 = *(long *)(param_1 + 8);
      if (lVar4 == 0) {
        local_48 = 0;
      }
      else {
        local_70 = *(undefined8 *)(param_1 + 0x10);
        local_48 = *(undefined8 *)(param_1 + 0x18);
        local_88[1] = 0;
        local_60 = 0;
        local_88[2] = lVar4;
        lStack_58 = lVar4;
        local_50 = local_70;
      }
      local_88[0] = (ulong)(lVar4 != 0);
      local_68 = local_88[0];
      FUN_006b41fc(local_88);
    }
  }
  return;
}


// ===== 006ac1a4  FUN_006ac1a4 =====

void FUN_006ac1a4(ulong param_1)

{
  long local_18;
  
  if ((1 < (param_1 & 3) - 2) && ((param_1 & 3) != 0)) {
    local_18 = param_1 - 1;
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
  }
  return;
}


// ===== 006ac1ec  <serde_json::value::[0]::serde_json::value::Value>::pointer_mut =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::[0]::serde_json::value::Value>::pointer_mut */

char * __rustcall
<serde_json::value::[0]::serde_json::value::Value>::pointer_mut
          (char *param_1,char *param_2,long param_3)

{
  char cVar1;
  undefined8 *puVar2;
  size_t __n;
  long lVar3;
  byte bVar4;
  ushort uVar5;
  uint uVar6;
  byte *__s1;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  char *pcVar10;
  ulong uVar11;
  ulong uVar12;
  byte *pbVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  undefined1 auVar19 [16];
  undefined8 local_e0;
  undefined8 uStack_d8;
  long local_d0;
  char *pcStack_c8;
  long local_c0;
  undefined8 uStack_b8;
  long local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined2 local_98;
  long local_90;
  byte *pbStack_88;
  ulong local_80;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if (param_3 != 0) {
    if (*param_2 == '/') {
      uStack_b8 = 0;
      local_a8 = 0x2f0000002f;
      local_a0 = 1;
      local_98 = 1;
      local_e0 = 0;
      uStack_d8 = 0;
      local_d0 = param_3;
      pcStack_c8 = param_2;
      local_c0 = param_3;
      local_b0 = param_3;
      lVar9 = FUN_006b2a0c((ulong)&local_e0 | 8,0);
      if (lVar9 == 0) {
        pcVar10 = (char *)FUN_006acc2c((ulong)&local_e0 | 8);
        while (pcVar10 != (char *)0x0) {
          auVar19 = FUN_006acc2c((ulong)&local_e0 | 8);
          if (auVar19._0_8_ == 0) {
            return param_1;
          }
          FUN_006ab770(&local_78,auVar19._0_8_,auVar19._8_8_,&DAT_00454a6e,0x2f);
          uVar7 = local_70;
                    /* try { // try from 006ac2a0 to 006ac2b7 has its CatchHandler @ 006ac4a8 */
          FUN_006ab770(&local_90,local_70,uStack_68,&DAT_00454a70,0x7e);
          if (local_78 != 0) {
            __rustc::__rust_dealloc(uVar7,local_78,1);
          }
          uVar11 = local_80;
          __s1 = pbStack_88;
          lVar9 = local_90;
          if (*param_1 == '\x05') {
            lVar18 = *(long *)(param_1 + 8);
            if (lVar18 != 0) {
              lVar16 = *(long *)(param_1 + 0x10);
              do {
                uVar5 = *(ushort *)(lVar18 + 0x272);
                lVar15 = lVar18 + 0x168;
                pcVar10 = (char *)(lVar18 + -0x20);
                uVar17 = 0xffffffffffffffff;
                lVar14 = (ulong)uVar5 * 0x18;
                do {
                  uVar12 = (ulong)uVar5;
                  if (lVar14 == 0) goto LAB_006ac3ac;
                  puVar2 = (undefined8 *)(lVar15 + 8);
                  uVar12 = *(ulong *)(lVar15 + 0x10);
                  lVar15 = lVar15 + 0x18;
                  __n = uVar11;
                  if (uVar12 <= uVar11) {
                    __n = uVar12;
                  }
                  iVar8 = memcmp(__s1,(void *)*puVar2,__n);
                  pcVar10 = pcVar10 + 0x20;
                  uVar17 = uVar17 + 1;
                  lVar14 = lVar14 + -0x18;
                  lVar3 = uVar11 - uVar12;
                  if (iVar8 != 0) {
                    lVar3 = (long)iVar8;
                  }
                  cVar1 = 0 < lVar3;
                  if (lVar3 < 0) {
                    cVar1 = -1;
                  }
                } while (cVar1 == '\x01');
                uVar12 = uVar17;
                if (cVar1 == '\0') goto joined_r0x006ac46c;
LAB_006ac3ac:
                if (lVar16 == 0) break;
                lVar16 = lVar16 + -1;
                lVar18 = *(long *)(lVar18 + uVar12 * 8 + 0x278);
              } while( true );
            }
LAB_006ac45c:
            pcVar10 = (char *)0x0;
          }
          else {
            if ((((*param_1 != '\x04') || (local_80 == 0)) || (bVar4 = *pbStack_88, bVar4 == 0x2b))
               || ((local_80 != 1 && (bVar4 == 0x30)))) goto LAB_006ac45c;
            if (local_80 == 1) {
              if (bVar4 != 0x2d) goto LAB_006ac3c8;
              goto LAB_006ac45c;
            }
            if (local_80 < 0x11) {
LAB_006ac3c8:
              uVar11 = 0;
              pbVar13 = pbStack_88;
              uVar17 = local_80;
              do {
                if (9 < *pbVar13 - 0x30) goto LAB_006ac45c;
                uVar17 = uVar17 - 1;
                uVar11 = uVar11 * 10 + (ulong)(*pbVar13 - 0x30);
                pbVar13 = pbVar13 + 1;
              } while (uVar17 != 0);
LAB_006ac3f4:
              if (uVar11 < *(ulong *)(param_1 + 0x18)) {
                pcVar10 = (char *)(*(long *)(param_1 + 0x10) + uVar11 * 0x20);
              }
              else {
                pcVar10 = (char *)0x0;
              }
            }
            else {
              uVar11 = 0;
              pbVar13 = pbStack_88;
              uVar17 = local_80;
              do {
                if (uVar17 == 0) goto LAB_006ac3f4;
                auVar19._8_8_ = 0;
                auVar19._0_8_ = uVar11;
                if (SUB168(auVar19 * ZEXT816(10),8) != 0) goto LAB_006ac45c;
                uVar12 = uVar11 * 10;
                uVar6 = *pbVar13 - 0x30;
                uVar11 = uVar12 + uVar6;
                pcVar10 = (char *)0x0;
              } while ((uVar6 < 10) &&
                      (uVar17 = uVar17 - 1, pbVar13 = pbVar13 + 1, !CARRY8(uVar12,(ulong)uVar6)));
            }
          }
joined_r0x006ac46c:
          param_1 = pcVar10;
          pcVar10 = param_1;
          if (lVar9 != 0) {
            __rustc::__rust_dealloc(__s1,lVar9,1);
          }
        }
      }
    }
    else {
      param_1 = (char *)0x0;
    }
  }
  return param_1;
}


// ===== 006ac4c8  <serde_json::value::[0]::serde_json::value::Value>::pointer =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::[0]::serde_json::value::Value>::pointer */

char * __rustcall
<serde_json::value::[0]::serde_json::value::Value>::pointer
          (char *param_1,char *param_2,long param_3)

{
  char cVar1;
  undefined8 *puVar2;
  size_t __n;
  long lVar3;
  byte bVar4;
  ushort uVar5;
  uint uVar6;
  byte *__s1;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  char *pcVar10;
  ulong uVar11;
  ulong uVar12;
  byte *pbVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  undefined1 auVar19 [16];
  undefined8 local_e0;
  undefined8 uStack_d8;
  long local_d0;
  char *pcStack_c8;
  long local_c0;
  undefined8 uStack_b8;
  long local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined2 local_98;
  long local_90;
  byte *pbStack_88;
  ulong local_80;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if (param_3 != 0) {
    if (*param_2 == '/') {
      uStack_b8 = 0;
      local_a8 = 0x2f0000002f;
      local_a0 = 1;
      local_98 = 1;
      local_e0 = 0;
      uStack_d8 = 0;
      local_d0 = param_3;
      pcStack_c8 = param_2;
      local_c0 = param_3;
      local_b0 = param_3;
      lVar9 = FUN_006b2a0c((ulong)&local_e0 | 8,0);
      if (lVar9 == 0) {
        pcVar10 = (char *)FUN_006acc2c((ulong)&local_e0 | 8);
        while (pcVar10 != (char *)0x0) {
          auVar19 = FUN_006acc2c((ulong)&local_e0 | 8);
          if (auVar19._0_8_ == 0) {
            return param_1;
          }
          FUN_006ab770(&local_78,auVar19._0_8_,auVar19._8_8_,&DAT_00454a6e,0x2f);
          uVar7 = local_70;
                    /* try { // try from 006ac57c to 006ac593 has its CatchHandler @ 006ac784 */
          FUN_006ab770(&local_90,local_70,uStack_68,&DAT_00454a70,0x7e);
          if (local_78 != 0) {
            __rustc::__rust_dealloc(uVar7,local_78,1);
          }
          uVar11 = local_80;
          __s1 = pbStack_88;
          lVar9 = local_90;
          if (*param_1 == '\x05') {
            lVar18 = *(long *)(param_1 + 8);
            if (lVar18 != 0) {
              lVar16 = *(long *)(param_1 + 0x10);
              do {
                uVar5 = *(ushort *)(lVar18 + 0x272);
                lVar15 = lVar18 + 0x168;
                pcVar10 = (char *)(lVar18 + -0x20);
                uVar17 = 0xffffffffffffffff;
                lVar14 = (ulong)uVar5 * 0x18;
                do {
                  uVar12 = (ulong)uVar5;
                  if (lVar14 == 0) goto LAB_006ac688;
                  puVar2 = (undefined8 *)(lVar15 + 8);
                  uVar12 = *(ulong *)(lVar15 + 0x10);
                  lVar15 = lVar15 + 0x18;
                  __n = uVar11;
                  if (uVar12 <= uVar11) {
                    __n = uVar12;
                  }
                  iVar8 = memcmp(__s1,(void *)*puVar2,__n);
                  pcVar10 = pcVar10 + 0x20;
                  uVar17 = uVar17 + 1;
                  lVar14 = lVar14 + -0x18;
                  lVar3 = uVar11 - uVar12;
                  if (iVar8 != 0) {
                    lVar3 = (long)iVar8;
                  }
                  cVar1 = 0 < lVar3;
                  if (lVar3 < 0) {
                    cVar1 = -1;
                  }
                } while (cVar1 == '\x01');
                uVar12 = uVar17;
                if (cVar1 == '\0') goto joined_r0x006ac748;
LAB_006ac688:
                if (lVar16 == 0) break;
                lVar16 = lVar16 + -1;
                lVar18 = *(long *)(lVar18 + uVar12 * 8 + 0x278);
              } while( true );
            }
LAB_006ac738:
            pcVar10 = (char *)0x0;
          }
          else {
            if ((((*param_1 != '\x04') || (local_80 == 0)) || (bVar4 = *pbStack_88, bVar4 == 0x2b))
               || ((local_80 != 1 && (bVar4 == 0x30)))) goto LAB_006ac738;
            if (local_80 == 1) {
              if (bVar4 != 0x2d) goto LAB_006ac6a4;
              goto LAB_006ac738;
            }
            if (local_80 < 0x11) {
LAB_006ac6a4:
              uVar11 = 0;
              pbVar13 = pbStack_88;
              uVar17 = local_80;
              do {
                if (9 < *pbVar13 - 0x30) goto LAB_006ac738;
                uVar17 = uVar17 - 1;
                uVar11 = uVar11 * 10 + (ulong)(*pbVar13 - 0x30);
                pbVar13 = pbVar13 + 1;
              } while (uVar17 != 0);
LAB_006ac6d0:
              if (uVar11 < *(ulong *)(param_1 + 0x18)) {
                pcVar10 = (char *)(*(long *)(param_1 + 0x10) + uVar11 * 0x20);
              }
              else {
                pcVar10 = (char *)0x0;
              }
            }
            else {
              uVar11 = 0;
              pbVar13 = pbStack_88;
              uVar17 = local_80;
              do {
                if (uVar17 == 0) goto LAB_006ac6d0;
                auVar19._8_8_ = 0;
                auVar19._0_8_ = uVar11;
                if (SUB168(auVar19 * ZEXT816(10),8) != 0) goto LAB_006ac738;
                uVar12 = uVar11 * 10;
                uVar6 = *pbVar13 - 0x30;
                uVar11 = uVar12 + uVar6;
                pcVar10 = (char *)0x0;
              } while ((uVar6 < 10) &&
                      (uVar17 = uVar17 - 1, pbVar13 = pbVar13 + 1, !CARRY8(uVar12,(ulong)uVar6)));
            }
          }
joined_r0x006ac748:
          param_1 = pcVar10;
          pcVar10 = param_1;
          if (lVar9 != 0) {
            __rustc::__rust_dealloc(__s1,lVar9,1);
          }
        }
      }
    }
    else {
      param_1 = (char *)0x0;
    }
  }
  return param_1;
}


// ===== 006ac7a4  <serde_json::value::de::[m]::serde_json::value::Value>::unexpected =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::de::[m]::serde_json::value::Value>::unexpected */

void __rustcall
<serde_json::value::de::[m]::serde_json::value::Value>::unexpected
          (undefined1 *param_1,byte *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  
  bVar1 = *param_2;
  if (2 < bVar1) {
    if (bVar1 == 3) {
      uVar2 = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(param_1 + 0x10) = uVar2;
      *param_1 = 5;
      return;
    }
    if (bVar1 == 4) {
      *param_1 = 10;
      return;
    }
    *param_1 = 0xb;
    return;
  }
  if (bVar1 == 0) {
    *param_1 = 7;
    return;
  }
  if (bVar1 == 1) {
    bVar1 = param_2[1];
    *param_1 = 0;
    param_1[1] = bVar1;
    return;
  }
  if (*(long *)(param_2 + 8) == 2) {
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    *param_1 = 3;
    *(undefined8 *)(param_1 + 8) = uVar2;
    return;
  }
  if (*(long *)(param_2 + 8) == 1) {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 0x10);
    *param_1 = 2;
    return;
  }
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 0x10);
  *param_1 = 1;
  return;
}


// ===== 006ac864  <serde_json::value::Value_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::Value as core::fmt::Debug>::fmt */

undefined8 __rustcall
<serde_json::value::Value_as_core::fmt::Debug>::fmt(byte *param_1,undefined8 *param_2)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  byte *pbVar7;
  long lVar8;
  byte **local_40;
  code *pcStack_38;
  byte *local_18;
  
  bVar1 = *param_1;
  if (bVar1 < 3) {
    if (bVar1 == 0) {
      uVar4 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_00376600,4);
      return uVar4;
    }
    if (bVar1 == 1) {
      local_18 = param_1 + 1;
      uVar4 = *param_2;
      uVar5 = param_2[1];
      pcStack_38 = FUN_006b25c4;
      puVar6 = &DAT_0036bbb9;
    }
    else {
      local_18 = param_1 + 8;
      uVar4 = *param_2;
      uVar5 = param_2[1];
      pcStack_38 = FUN_006b25bc;
      puVar6 = &DAT_003652f7;
    }
  }
  else {
    if (bVar1 != 3) {
      if (bVar1 == 4) {
        uVar3 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_00454a7b,6);
        if ((uVar3 & 1) == 0) {
          pbVar7 = *(byte **)(param_1 + 0x10);
          lVar8 = *(long *)(param_1 + 0x18);
          <core::fmt::[a]::core::fmt::Formatter>::debug_list(&local_40,param_2);
          if (lVar8 != 0) {
            lVar8 = lVar8 << 5;
            do {
              local_18 = pbVar7;
              <core::fmt::builders::[4]::core::fmt::builders::DebugSet>::entry
                        (&local_40,&local_18,&DAT_009763e0);
              lVar8 = lVar8 + -0x20;
              pbVar7 = pbVar7 + 0x20;
            } while (lVar8 != 0);
          }
          uVar4 = <core::fmt::builders::[5]::core::fmt::builders::DebugList>::finish(&local_40);
          return uVar4;
        }
      }
      else {
        iVar2 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_00454a81,7);
        if (iVar2 == 0) {
          uVar4 = FUN_006b523c(param_1 + 8,param_2);
          return uVar4;
        }
      }
      return 1;
    }
    local_18 = param_1 + 8;
    uVar4 = *param_2;
    uVar5 = param_2[1];
    pcStack_38 = FUN_006b5214;
    puVar6 = &DAT_0036c1a2;
  }
  local_40 = &local_18;
  uVar4 = core::fmt::write(uVar4,uVar5,puVar6,&local_40);
  return uVar4;
}


// ===== 006aca2c  <serde_json::value::Value_as_core::convert::From<f32>>::from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::Value as core::convert::From<f32>>::from */

void __rustcall
<serde_json::value::Value_as_core::convert::From<f32>>::from(long *param_1,float param_2)

{
  undefined1 local_30;
  uint7 uStack_2f;
  long lStack_28;
  long lStack_20;
  long lStack_18;
  
  if (0x7f7fffff < (uint)ABS(param_2)) {
    param_1[1] = lStack_28;
    *param_1 = (ulong)uStack_2f << 8;
    param_1[3] = lStack_18;
    param_1[2] = lStack_20;
    return;
  }
  local_30 = 0;
  param_1[1] = 2;
  *(undefined1 *)param_1 = 2;
  param_1[2] = (long)(double)param_2;
  FUN_006ac060(&local_30);
  return;
}


// ===== 006aca90  <<serde_json::value::Value_as_core::fmt::Display>::fmt::WriterFormatter_as_std::io::Write>::write =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<serde_json::value::Value as core::fmt::Display>::fmt::WriterFormatter as std::io::Write>::write
    */

undefined1  [16] __rustcall
<<serde_json::value::Value_as_core::fmt::Display>::fmt::WriterFormatter_as_std::io::Write>::write
          (undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  int iVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  iVar2 = <core::fmt::[a]::core::fmt::Formatter>::write_str(*param_1);
  if (iVar2 != 0) {
    uVar3 = <alloc::io::error::core::io::error::Error>::new<&str>(0x29,&DAT_00454a72,9);
    auVar4._8_8_ = uVar3;
    auVar4._0_8_ = 1;
    return auVar4;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_3;
  return auVar1 << 0x40;
}


// ===== 006acaec  FUN_006acaec =====

void FUN_006acaec(undefined8 *param_1)

{
  <serde_json::value::Value_as_core::fmt::Debug>::fmt(*param_1);
  return;
}


// ===== 006acaf4  <serde_json::value::Value_as_core::convert::From<&str>>::from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::Value as core::convert::From<&str>>::from */

void __rustcall
<serde_json::value::Value_as_core::convert::From<&str>>::from
          (undefined1 *param_1,void *param_2,size_t param_3)

{
  void *__dest;
  undefined8 uVar1;
  
  if ((long)param_3 < 0) {
    uVar1 = 0;
LAB_006acb14:
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(uVar1,param_3);
  }
  if (param_3 == 0) {
    __dest = (void *)0x1;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar1 = 1;
    __dest = (void *)__rustc::__rust_alloc(param_3,1);
    if (__dest == (void *)0x0) goto LAB_006acb14;
    memcpy(__dest,param_2,param_3);
  }
  *(size_t *)(param_1 + 8) = param_3;
  *(void **)(param_1 + 0x10) = __dest;
  *(size_t *)(param_1 + 0x18) = param_3;
  *param_1 = 3;
  return;
}


// ===== 006acb84  <serde_json::value::Value_as_core::convert::From<alloc::borrow::Cow<str>>>::from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::Value as core::convert::From<alloc::borrow::Cow<str>>>::from */

void __rustcall
<serde_json::value::Value_as_core::convert::From<alloc::borrow::Cow<str>>>::from
          (undefined1 *param_1,size_t *param_2)

{
  void *__src;
  void *__dest;
  size_t sVar1;
  size_t __n;
  undefined8 uVar2;
  
  __src = (void *)param_2[1];
  __n = param_2[2];
  sVar1 = *param_2;
  __dest = __src;
  if (*param_2 == 0xffffffffffffffff) {
    if ((long)__n < 0) {
      uVar2 = 0;
LAB_006acbd4:
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(uVar2,__n);
    }
    if (__n == 0) {
      sVar1 = 0;
      __dest = (void *)0x1;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar2 = 1;
      __dest = (void *)__rustc::__rust_alloc(__n,1);
      if (__dest == (void *)0x0) goto LAB_006acbd4;
      memcpy(__dest,__src,__n);
      sVar1 = __n;
    }
  }
  *(size_t *)(param_1 + 8) = sVar1;
  *(void **)(param_1 + 0x10) = __dest;
  *(size_t *)(param_1 + 0x18) = __n;
  *param_1 = 3;
  return;
}


// ===== 006acc2c  FUN_006acc2c =====

undefined1  [16] FUN_006acc2c(ulong *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  char cVar3;
  long lVar4;
  undefined1 auVar5 [16];
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  ulong __n;
  ulong uVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  if ((*(byte *)((long)param_1 + 0x41) & 1) != 0) {
    auVar11._8_8_ = 0;
    auVar11._0_8_ = param_2;
    return auVar11 << 0x40;
  }
  uVar2 = param_1[2];
  uVar8 = param_1[3];
  uVar9 = param_1[5];
  if ((uVar9 <= uVar8) && (uVar10 = param_1[4], uVar10 <= uVar9)) {
    __n = (ulong)(byte)param_1[7];
    cVar3 = *(char *)((long)param_1 + __n + 0x2f);
    if (__n < 5) {
      do {
        if (uVar9 - uVar10 < 0x10) {
          uVar7 = 0;
          if (uVar9 == uVar10) goto LAB_006ace20;
          while (*(char *)(uVar2 + uVar10 + uVar7) != cVar3) {
            uVar7 = uVar7 + 1;
            if (uVar9 - uVar10 == uVar7) goto LAB_006ace20;
          }
        }
        else {
          auVar11 = core::slice::memchr::memchr_aligned(cVar3,uVar2 + uVar10,uVar9 - uVar10);
          uVar7 = auVar11._8_8_;
          if (auVar11._0_8_ != 1) goto LAB_006ace20;
        }
        uVar10 = uVar10 + uVar7 + 1;
        param_1[4] = uVar10;
        if (((__n <= uVar10) && (uVar10 <= uVar8)) &&
           (iVar6 = memcmp((void *)(uVar2 + (uVar10 - __n)),param_1 + 6,__n), iVar6 == 0)) {
          uVar8 = *param_1;
          *param_1 = uVar10;
          auVar12._8_8_ = (uVar10 - __n) - uVar8;
          auVar12._0_8_ = uVar2 + uVar8;
          return auVar12;
        }
      } while (uVar10 <= uVar9);
    }
    else {
      do {
        if (uVar9 - uVar10 < 0x10) {
          uVar7 = 0;
          if (uVar9 == uVar10) {
            auVar13 = ZEXT816(0);
          }
          else {
            do {
              if (*(char *)(uVar2 + uVar10 + uVar7) == cVar3) {
                auVar13._8_8_ = uVar7;
                auVar13._0_8_ = 1;
                goto LAB_006acde4;
              }
              uVar7 = uVar7 + 1;
            } while (uVar9 - uVar10 != uVar7);
            auVar5._8_8_ = 0;
            auVar5._0_8_ = uVar9 - uVar10;
            auVar13 = auVar5 << 0x40;
          }
        }
        else {
          auVar13 = core::slice::memchr::memchr_aligned(cVar3,uVar2 + uVar10,uVar9 - uVar10);
        }
LAB_006acde4:
        if (auVar13._0_8_ != 1) goto LAB_006ace20;
        uVar10 = uVar10 + auVar13._8_8_ + 1;
        param_1[4] = uVar10;
        if ((__n <= uVar10) && (uVar10 <= uVar8)) {
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (0,__n,4,&PTR_s__rustc_48a229ceaefd4985c50990b14_009760e8);
        }
      } while (uVar10 <= uVar9);
    }
  }
LAB_006ace24:
  lVar4 = param_1[1] - *param_1;
  lVar1 = uVar2 + *param_1;
  *(undefined1 *)((long)param_1 + 0x41) = 1;
  if ((param_1[8] & 1) == 0 && lVar4 == 0) {
    lVar1 = 0;
  }
  auVar14._8_8_ = lVar4;
  auVar14._0_8_ = lVar1;
  return auVar14;
LAB_006ace20:
  param_1[4] = uVar9;
  goto LAB_006ace24;
}


// ===== 006ace64  <serde_json::value::Value_as_core::fmt::Display>::fmt =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::Value as core::fmt::Display>::fmt */

long __rustcall
<serde_json::value::Value_as_core::fmt::Display>::fmt(byte *param_1,undefined8 ******param_2)

{
  undefined8 *******pppppppuVar1;
  ushort *puVar2;
  undefined8 ******ppppppuVar3;
  undefined8 ******ppppppuVar4;
  byte bVar5;
  undefined8 *******pppppppuVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined1 uVar13;
  ulong uVar14;
  long *plVar15;
  undefined8 ******ppppppuVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  undefined8 ******ppppppuVar20;
  undefined8 ******local_70;
  undefined8 *******local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined8 *******local_40;
  char local_38 [8];
  
  local_70 = param_2;
  if ((*(uint *)(param_2 + 2) >> 0x17 & 1) != 0) {
    bVar5 = *param_1;
    local_60 = &DAT_00454a64;
    uStack_50 = _UNK_00371c98;
    local_58 = _DAT_00371c90;
    local_48 = 0;
    if (bVar5 < 3) {
      if (bVar5 == 0) {
        local_68 = &local_70;
        lVar9 = FUN_006ad434(&local_70,&DAT_00377358,4);
      }
      else {
        if (bVar5 != 1) {
          local_68 = &local_70;
          lVar9 = FUN_006b2164(param_1 + 8,&local_68);
          goto LAB_006ad340;
        }
        if ((param_1[1] & 1) == 0) {
          puVar11 = &DAT_00454a69;
          uVar12 = 5;
        }
        else {
          puVar11 = &DAT_00377e48;
          uVar12 = 4;
        }
        local_68 = &local_70;
        lVar9 = FUN_006ad434(&local_70,puVar11,uVar12);
      }
    }
    else {
      if (bVar5 != 3) {
        if (bVar5 == 4) {
          local_68 = &local_70;
          lVar9 = FUN_006a9664(&local_68,param_1 + 8);
          goto LAB_006ad340;
        }
        lVar9 = *(long *)(param_1 + 0x18);
        uStack_50 = 1;
        local_48 = 0;
        local_68 = &local_70;
        lVar8 = FUN_006ad434(&local_70,&DAT_00454a68,1);
        if (lVar8 == 0) {
          if (lVar9 == 0) {
            uStack_50 = 0;
            lVar8 = FUN_006ad434(&local_70,&DAT_00454a67,1);
            if (lVar8 != 0) goto LAB_006ad374;
            local_38[0] = '\0';
          }
          else {
            local_38[0] = '\x01';
          }
          lVar8 = *(long *)(param_1 + 8);
          uVar14 = *(ulong *)(param_1 + 0x10);
          local_40 = &local_68;
          lVar17 = 0;
          bVar7 = lVar8 != 0;
          if (!bVar7) {
            lVar9 = 0;
          }
          do {
            pppppppuVar6 = local_40;
            if (lVar9 == 0) {
              if (local_38[0] == '\0') goto LAB_006ad320;
              ppppppuVar20 = local_40[3];
              pppppppuVar1 = local_40 + 4;
              ppppppuVar16 = *local_40;
              local_40[3] = (undefined8 ******)((long)ppppppuVar20 + -1);
              if (*(char *)pppppppuVar1 != '\x01') goto LAB_006ad328;
              lVar9 = FUN_006ad434(ppppppuVar16,&DAT_00454a66,1);
              if (lVar9 != 0) goto LAB_006ad318;
              ppppppuVar3 = pppppppuVar6[1];
              ppppppuVar4 = pppppppuVar6[2];
              goto LAB_006ad2fc;
            }
            if (!bVar7) goto LAB_006ad39c;
            if (lVar17 == 0) {
              for (; lVar17 = lVar8, uVar14 != 0; uVar14 = uVar14 - 1) {
                lVar8 = *(long *)(lVar17 + 0x278);
              }
              lVar8 = 0;
              uVar14 = 0;
              lVar18 = lVar17;
              if (*(short *)(lVar17 + 0x272) == 0) goto LAB_006ad274;
            }
            else {
              lVar18 = lVar17;
              if (*(ushort *)(lVar17 + 0x272) <= uVar14) {
LAB_006ad274:
                do {
                  lVar17 = *(long *)(lVar18 + 0x160);
                  if (lVar17 == 0) {
                    /* try { // try from 006ad37c to 006ad387 has its CatchHandler @ 006ad3ac */
                    /* WARNING: Subroutine does not return */
                    core::option::unwrap_failed(&PTR_s__rustc_48a229ceaefd4985c50990b14_00976450);
                  }
                  puVar2 = (ushort *)(lVar18 + 0x270);
                  uVar14 = (ulong)*puVar2;
                  lVar8 = lVar8 + 1;
                  lVar18 = lVar17;
                } while (*(ushort *)(lVar17 + 0x272) <= *puVar2);
              }
            }
            if (lVar8 == 0) {
              uVar19 = uVar14 + 1;
              lVar18 = lVar17;
            }
            else {
              plVar15 = (long *)(lVar17 + uVar14 * 8 + 0x280);
              do {
                lVar18 = *plVar15;
                lVar8 = lVar8 + -1;
                plVar15 = (long *)(lVar18 + 0x278);
              } while (lVar8 != 0);
              uVar19 = 0;
            }
            lVar9 = lVar9 + -1;
            lVar10 = FUN_006a93a8(&local_40,lVar17 + uVar14 * 0x18 + 0x168,lVar17 + uVar14 * 0x20);
            lVar8 = 0;
            bVar7 = true;
            uVar14 = uVar19;
            lVar17 = lVar18;
          } while (lVar10 == 0);
          goto LAB_006ad344;
        }
        goto LAB_006ad374;
      }
      local_68 = &local_70;
      lVar9 = FUN_006a8aec(&local_68,&local_60,*(undefined8 *)(param_1 + 0x10),
                           *(undefined8 *)(param_1 + 0x18));
    }
    if (lVar9 == 0) {
      return 0;
    }
    goto LAB_006ad374;
  }
  bVar5 = *param_1;
  if (bVar5 < 3) {
    if (bVar5 == 0) {
      local_40 = &local_70;
      lVar9 = FUN_006ad434(&local_70,&DAT_00377358,4);
    }
    else {
      if (bVar5 != 1) {
        local_40 = &local_70;
        lVar9 = FUN_006b1e50(param_1 + 8,&local_40);
        goto LAB_006ad340;
      }
      if ((param_1[1] & 1) == 0) {
        puVar11 = &DAT_00454a69;
        uVar12 = 5;
      }
      else {
        puVar11 = &DAT_00377e48;
        uVar12 = 4;
      }
      local_40 = &local_70;
      lVar9 = FUN_006ad434(&local_70,puVar11,uVar12);
    }
joined_r0x006acf6c:
    if (lVar9 == 0) {
      return 0;
    }
  }
  else {
    if (bVar5 == 3) {
      local_40 = &local_70;
      lVar9 = FUN_006a8c38(&local_40,local_38,*(undefined8 *)(param_1 + 0x10),
                           *(undefined8 *)(param_1 + 0x18));
      goto joined_r0x006acf6c;
    }
    if (bVar5 == 4) {
      local_40 = &local_70;
      lVar9 = FUN_006a9588(&local_40,param_1 + 8);
      goto LAB_006ad340;
    }
    lVar9 = *(long *)(param_1 + 0x18);
    local_40 = &local_70;
    lVar8 = FUN_006ad434(&local_70,&DAT_00454a68,1);
    if (lVar8 == 0) {
      if (lVar9 == 0) {
        lVar8 = FUN_006ad434(&local_70,&DAT_00454a67,1);
        if (lVar8 != 0) goto LAB_006ad374;
        uVar13 = 0;
      }
      else {
        uVar13 = 1;
      }
      local_60 = (undefined *)CONCAT71(local_60._1_7_,uVar13);
      lVar8 = *(long *)(param_1 + 8);
      uVar14 = *(ulong *)(param_1 + 0x10);
      local_68 = &local_40;
      lVar17 = 0;
      bVar7 = lVar8 != 0;
      if (!bVar7) {
        lVar9 = 0;
      }
      do {
        if (lVar9 == 0) {
          if ((char)local_60 == '\0') goto LAB_006ad320;
          lVar9 = FUN_006ad434(*local_68,&DAT_00454a67,1);
          goto joined_r0x006ad33c;
        }
        if (!bVar7) {
LAB_006ad39c:
                    /* WARNING: Subroutine does not return */
          core::option::unwrap_failed(&PTR_s__rustc_48a229ceaefd4985c50990b14_009764e0);
        }
        if (lVar17 == 0) {
          for (; lVar17 = lVar8, uVar14 != 0; uVar14 = uVar14 - 1) {
            lVar8 = *(long *)(lVar17 + 0x278);
          }
          lVar8 = 0;
          uVar14 = 0;
          lVar18 = lVar17;
          if (*(short *)(lVar17 + 0x272) == 0) goto LAB_006ad14c;
        }
        else {
          lVar18 = lVar17;
          if (*(ushort *)(lVar17 + 0x272) <= uVar14) {
LAB_006ad14c:
            do {
              lVar17 = *(long *)(lVar18 + 0x160);
              if (lVar17 == 0) {
                    /* try { // try from 006ad38c to 006ad397 has its CatchHandler @ 006ad3a8 */
                    /* WARNING: Subroutine does not return */
                core::option::unwrap_failed(&PTR_s__rustc_48a229ceaefd4985c50990b14_00976450);
              }
              puVar2 = (ushort *)(lVar18 + 0x270);
              uVar14 = (ulong)*puVar2;
              lVar8 = lVar8 + 1;
              lVar18 = lVar17;
            } while (*(ushort *)(lVar17 + 0x272) <= *puVar2);
          }
        }
        if (lVar8 == 0) {
          uVar19 = uVar14 + 1;
          lVar18 = lVar17;
        }
        else {
          plVar15 = (long *)(lVar17 + uVar14 * 8 + 0x280);
          do {
            lVar18 = *plVar15;
            lVar8 = lVar8 + -1;
            plVar15 = (long *)(lVar18 + 0x278);
          } while (lVar8 != 0);
          uVar19 = 0;
        }
        lVar9 = lVar9 + -1;
        lVar10 = FUN_006a94c8(&local_68,lVar17 + uVar14 * 0x18 + 0x168,lVar17 + uVar14 * 0x20);
        lVar8 = 0;
        bVar7 = true;
        uVar14 = uVar19;
        lVar17 = lVar18;
      } while (lVar10 == 0);
      goto LAB_006ad344;
    }
  }
LAB_006ad374:
  <serde_json::error::[0]::serde_json::error::Error>::io();
  goto LAB_006ad344;
  while (lVar9 = FUN_006ad434(ppppppuVar16,ppppppuVar3,ppppppuVar4), lVar9 == 0) {
LAB_006ad2fc:
    ppppppuVar20 = (undefined8 ******)((long)ppppppuVar20 + -1);
    if (ppppppuVar20 == (undefined8 ******)0x0) goto LAB_006ad328;
  }
LAB_006ad318:
  lVar9 = <serde_json::error::[0]::serde_json::error::Error>::io();
  goto LAB_006ad340;
LAB_006ad320:
  lVar9 = 0;
  goto LAB_006ad340;
LAB_006ad328:
  lVar9 = FUN_006ad434(ppppppuVar16,&DAT_00454a67,1);
joined_r0x006ad33c:
  if (lVar9 != 0) goto LAB_006ad318;
LAB_006ad340:
  if (lVar9 == 0) {
    return 0;
  }
LAB_006ad344:
  FUN_006abfac();
  return 1;
}


// ===== 006ad3b0  <serde_json::value::Value_as_core::str::traits::FromStr>::from_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::Value as core::str::traits::FromStr>::from_str */

void __rustcall
<serde_json::value::Value_as_core::str::traits::FromStr>::from_str
          (undefined8 param_1,undefined8 param_2)

{
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_18 = 0;
  local_28 = param_1;
  uStack_20 = param_2;
  FUN_006aff18(&local_28);
  return;
}


// ===== 006ad3d8  <serde_json::value::Value_as_core::convert::From<f64>>::from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::Value as core::convert::From<f64>>::from */

void __rustcall
<serde_json::value::Value_as_core::convert::From<f64>>::from(long *param_1,ulong param_2)

{
  undefined1 local_30;
  uint7 uStack_2f;
  long lStack_28;
  long lStack_20;
  long lStack_18;
  
  local_30 = 0;
  if (0x7fefffffffffffff < (param_2 & 0x7fffffffffffffff)) {
    param_1[1] = lStack_28;
    *param_1 = (ulong)uStack_2f << 8;
    param_1[3] = lStack_18;
    param_1[2] = lStack_20;
    return;
  }
  param_1[2] = param_2;
  param_1[1] = 2;
  *(undefined1 *)param_1 = 2;
  FUN_006ac060(&local_30);
  return;
}


// ===== 006ad434  FUN_006ad434 =====

ulong FUN_006ad434(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint uVar6;
  long local_58;
  
  if (param_3 != 0) {
    uVar5 = *param_1;
    iVar1 = <core::fmt::[a]::core::fmt::Formatter>::write_str(uVar5);
    if (iVar1 != 0) {
      do {
        while( true ) {
          uVar2 = <alloc::io::error::core::io::error::Error>::new<&str>(0x29,&DAT_00454a72,9);
          uVar4 = uVar2 & 3;
          if (uVar4 < 2) break;
          if (uVar4 == 2) {
                    /* try { // try from 006ad508 to 006ad51b has its CatchHandler @ 006ad564 */
            lVar3 = core::io::error::os_functions::get_os_functions();
            iVar1 = (**(code **)(lVar3 + 0x10))(uVar2 >> 0x20);
            if (iVar1 == 0) {
              return uVar2;
            }
          }
          else {
            uVar6 = (uint)(uVar2 >> 0x20) & 0xff;
            if (0x2a < uVar2 >> 0x20) {
              uVar6 = 0xff;
            }
            if (uVar6 != 0x23) {
              return uVar2;
            }
          }
LAB_006ad490:
          uVar2 = <core::fmt::[a]::core::fmt::Formatter>::write_str(uVar5,param_2,param_3);
          if ((uVar2 & 1) == 0) {
            return 0;
          }
        }
        if (uVar4 == 0) {
          if (*(char *)(uVar2 + 0x10) != '#') {
            return uVar2;
          }
          goto LAB_006ad490;
        }
        if (*(char *)(uVar2 + 0x1f) != '#') {
          return uVar2;
        }
        local_58 = uVar2 - 1;
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_58);
        uVar2 = <core::fmt::[a]::core::fmt::Formatter>::write_str(uVar5,param_2,param_3);
      } while ((uVar2 & 1) != 0);
    }
  }
  return 0;
}


// ===== 006ad57c  FUN_006ad57c =====

void FUN_006ad57c(long *param_1)

{
  ulong uVar1;
  long local_18;
  
  if (*param_1 == 0) {
    if (param_1[2] != 0) {
      __rustc::__rust_dealloc(param_1[1],param_1[2],1);
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


// ===== 006ad5f0  FUN_006ad5f0 =====

undefined8 FUN_006ad5f0(long *param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  long lVar5;
  byte local_58;
  byte local_57;
  undefined8 local_50;
  undefined8 local_48 [3];
  
  uVar1 = param_1[2];
  if (uVar1 < (ulong)param_1[1]) {
    local_57 = *(byte *)(*param_1 + uVar1);
    param_1[2] = uVar1 + 1;
  }
  else {
    param_2 = param_2 & 0xffffffff;
    local_48[0] = 4;
    FUN_006adf0c(&local_58,param_1,local_48);
    if ((local_58 & 1) != 0) {
      return local_50;
    }
  }
  if (local_57 < 0x66) {
    if (local_57 < 0x5c) {
      if (local_57 == 0x22) {
        lVar5 = param_3[2];
        if (lVar5 == *param_3) {
          <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<u8>>::grow_one(param_3,param_2);
        }
        lVar3 = param_3[1];
        uVar4 = 0x22;
      }
      else {
        if (local_57 != 0x2f) goto LAB_006ad834;
        lVar5 = param_3[2];
        if (lVar5 == *param_3) {
          <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<u8>>::grow_one(param_3,param_2);
        }
        lVar3 = param_3[1];
        uVar4 = 0x2f;
      }
    }
    else if (local_57 == 0x5c) {
      lVar5 = param_3[2];
      if (lVar5 == *param_3) {
        <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<u8>>::grow_one(param_3,param_2);
      }
      lVar3 = param_3[1];
      uVar4 = 0x5c;
    }
    else {
      if (local_57 != 0x62) goto LAB_006ad834;
      lVar5 = param_3[2];
      if (lVar5 == *param_3) {
        <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<u8>>::grow_one(param_3,param_2);
      }
      lVar3 = param_3[1];
      uVar4 = 8;
    }
  }
  else if (local_57 < 0x72) {
    if (local_57 == 0x66) {
      lVar5 = param_3[2];
      if (lVar5 == *param_3) {
        <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<u8>>::grow_one(param_3,param_2);
      }
      lVar3 = param_3[1];
      uVar4 = 0xc;
    }
    else {
      if (local_57 != 0x6e) goto LAB_006ad834;
      lVar5 = param_3[2];
      if (lVar5 == *param_3) {
        <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<u8>>::grow_one(param_3,param_2);
      }
      lVar3 = param_3[1];
      uVar4 = 10;
    }
  }
  else if (local_57 == 0x72) {
    lVar5 = param_3[2];
    if (lVar5 == *param_3) {
      <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<u8>>::grow_one(param_3,param_2);
    }
    lVar3 = param_3[1];
    uVar4 = 0xd;
  }
  else {
    if (local_57 != 0x74) {
      if (local_57 == 0x75) {
        uVar2 = FUN_006ad870(param_1,param_2,param_3);
        return uVar2;
      }
LAB_006ad834:
      local_48[0] = 0xc;
      uVar2 = FUN_006adfe4(param_1,local_48);
      return uVar2;
    }
    lVar5 = param_3[2];
    if (lVar5 == *param_3) {
      <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<u8>>::grow_one(param_3,param_2);
    }
    lVar3 = param_3[1];
    uVar4 = 9;
  }
  *(undefined1 *)(lVar3 + lVar5) = uVar4;
  param_3[2] = lVar5 + 1;
  return 0;
}


// ===== 006ad870  FUN_006ad870 =====

undefined8 FUN_006ad870(long *param_1,uint param_2,long *param_3)

{
  byte *pbVar1;
  undefined1 *puVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  undefined *puVar9;
  undefined *puVar10;
  ushort uVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  byte bVar15;
  long lVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  uint uVar20;
  undefined2 local_88;
  ushort local_86;
  undefined8 local_80;
  undefined8 local_78 [3];
  
  puVar10 = PTR_HEX0_0099f700;
  puVar9 = PTR_HEX1_0099f6f8;
  uVar3 = param_1[1];
  uVar13 = param_1[2];
  if (uVar3 < uVar13) {
LAB_006add58:
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (uVar13,uVar3,uVar3,&PTR_s__home_runner__cargo_registry_src_009761d8);
  }
  if (uVar3 - uVar13 < 4) {
    param_1[2] = uVar3;
    local_78[0] = 4;
    FUN_006adf78(&local_88,param_1,local_78);
    uVar19 = uVar3;
  }
  else {
    uVar19 = uVar13 + 4;
    param_1[2] = uVar19;
    pbVar1 = (byte *)(*param_1 + uVar13);
    uVar20 = (int)*(short *)(puVar9 + (ulong)pbVar1[2] * 2) |
             (int)(short)(*(ushort *)(puVar10 + (ulong)pbVar1[1] * 2) |
                         *(ushort *)(puVar9 + (ulong)*pbVar1 * 2)) << 8 |
             (int)*(short *)(puVar10 + (ulong)pbVar1[3] * 2);
    if ((int)uVar20 < 0) {
      local_78[0] = 0xc;
      FUN_006adf78(&local_88,param_1,local_78);
    }
    else {
      local_86 = (ushort)uVar20;
      local_88 = 0;
    }
  }
  if (local_88 == 1) {
    return local_80;
  }
  if ((param_2 != 0) && ((local_86 & 0xfc00) == 0xdc00)) {
LAB_006add24:
    local_78[0] = 0x14;
LAB_006add2c:
    uVar12 = FUN_006adfe4(param_1,local_78);
    return uVar12;
  }
  if ((local_86 + 0x2400 >> 10 & 0x3f) < 0x3f) {
    uVar17 = (uint)local_86;
  }
  else {
    lVar16 = *param_1;
    uVar20 = (uint)local_86;
    do {
      bVar15 = (byte)uVar20;
      if (uVar19 < uVar3) {
        if (*(char *)(lVar16 + uVar19) == '\\') goto LAB_006ad9a0;
LAB_006adbd8:
        if ((param_2 & 1) != 0) {
          lVar16 = uVar19 + 1;
LAB_006add48:
          param_1[2] = lVar16;
          local_78[0] = 0x17;
          goto LAB_006add2c;
        }
        lVar16 = param_3[2];
        if ((ulong)(*param_3 - lVar16) < 4) {
          FUN_006b1db8(param_3,lVar16,4,1,1);
          lVar16 = param_3[2];
        }
        puVar2 = (undefined1 *)(param_3[1] + lVar16);
        *puVar2 = 0xed;
        puVar2[1] = (byte)(uVar20 >> 6) & 0x2f | 0x80;
        puVar2[2] = bVar15 & 0x3f | 0x80;
        lVar16 = param_3[2] + 3;
        goto LAB_006addc8;
      }
      local_78[0] = 4;
      FUN_006adf0c(&local_88,param_1,local_78);
      if ((char)local_88 == '\x01') {
        return local_80;
      }
      if (local_88._1_1_ != '\\') goto LAB_006adbd8;
LAB_006ad9a0:
      uVar13 = uVar19 + 1;
      param_1[2] = uVar13;
      if (uVar13 < uVar3) {
        cVar8 = *(char *)(lVar16 + uVar13);
      }
      else {
        local_78[0] = 4;
        FUN_006adf0c(&local_88,param_1,local_78);
        if ((local_88 & 1) != 0) {
          return local_80;
        }
        cVar8 = local_88._1_1_;
      }
      if (cVar8 != 'u') {
        if ((param_2 & 1) == 0) {
          lVar16 = param_3[2];
          if ((ulong)(*param_3 - lVar16) < 4) {
            FUN_006b1db8(param_3,lVar16,4,1,1);
            lVar16 = param_3[2];
          }
          puVar2 = (undefined1 *)(param_3[1] + lVar16);
          *puVar2 = 0xed;
          puVar2[2] = bVar15 & 0x3f | 0x80;
          puVar2[1] = (byte)(uVar20 >> 6) & 0x2f | 0x80;
          param_3[2] = param_3[2] + 3;
          uVar12 = FUN_006ad5f0(param_1,0,param_3);
          return uVar12;
        }
        lVar16 = uVar19 + 2;
        goto LAB_006add48;
      }
      uVar13 = uVar19 + 2;
      param_1[2] = uVar13;
      if (uVar3 < uVar13) goto LAB_006add58;
      if (uVar3 - uVar13 < 4) {
        param_1[2] = uVar3;
        local_78[0] = 4;
        FUN_006adf78(&local_88,param_1,local_78);
        uVar19 = uVar3;
      }
      else {
        pbVar1 = (byte *)(lVar16 + uVar13);
        uVar19 = uVar19 + 6;
        bVar4 = *pbVar1;
        bVar5 = pbVar1[1];
        bVar6 = pbVar1[2];
        bVar7 = pbVar1[3];
        param_1[2] = uVar19;
        uVar17 = (int)*(short *)(puVar9 + (ulong)bVar6 * 2) |
                 (int)(short)(*(ushort *)(puVar10 + (ulong)bVar5 * 2) |
                             *(ushort *)(puVar9 + (ulong)bVar4 * 2)) << 8 |
                 (int)*(short *)(puVar10 + (ulong)bVar7 * 2);
        if ((int)uVar17 < 0) {
          local_78[0] = 0xc;
          FUN_006adf78(&local_88,param_1,local_78);
        }
        else {
          local_86 = (ushort)uVar17;
          local_88 = 0;
        }
      }
      uVar11 = local_86;
      if ((local_88 & 1) != 0) {
        return local_80;
      }
      uVar17 = (uint)local_86;
      uVar18 = (uint)local_86;
      if (0x3e < (uVar17 + 0x2000 >> 10 & 0x3f)) {
        lVar16 = param_3[2];
        uVar17 = uVar20 * 0x400 + 0xa00000 & 0x3fffc00 | uVar17 + 0x2400 & 0xffff;
        uVar20 = uVar17 + 0x10000;
        if ((ulong)(*param_3 - lVar16) < 4) {
          FUN_006b1db8(param_3,lVar16,4,1,1);
          lVar16 = param_3[2];
        }
        pbVar1 = (byte *)(param_3[1] + lVar16);
        *pbVar1 = (byte)(uVar20 >> 0x12) | 0xf0;
        pbVar1[1] = (byte)(uVar20 >> 0xc) & 0x3f | 0x80;
        pbVar1[2] = (byte)(uVar17 >> 6) & 0x3f | 0x80;
        pbVar1[3] = (byte)uVar11 & 0x3f | 0x80;
        lVar16 = param_3[2] + 4;
        goto LAB_006addc8;
      }
      if ((param_2 & 1) != 0) goto LAB_006add24;
      lVar14 = param_3[2];
      if ((ulong)(*param_3 - lVar14) < 4) {
        FUN_006b1db8(param_3,lVar14,4,1,1);
        lVar14 = param_3[2];
      }
      puVar2 = (undefined1 *)(param_3[1] + lVar14);
      *puVar2 = 0xed;
      puVar2[1] = (byte)(uVar20 >> 6) & 0x2f | 0x80;
      puVar2[2] = bVar15 & 0x3f | 0x80;
      param_3[2] = param_3[2] + 3;
      uVar20 = uVar18;
    } while (0x3e < (uVar18 + 0x2400 >> 10 & 0x3f));
  }
  if (uVar17 < 0x80) {
    lVar16 = param_3[2];
    if (lVar16 == *param_3) {
      <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<u8>>::grow_one(param_3);
    }
    *(byte *)(param_3[1] + lVar16) = (byte)uVar17;
    param_3[2] = lVar16 + 1;
    return 0;
  }
  lVar16 = param_3[2];
  if ((ulong)(*param_3 - lVar16) < 4) {
    FUN_006b1db8(param_3,lVar16,4,1,1);
    pbVar1 = (byte *)(param_3[1] + param_3[2]);
  }
  else {
    pbVar1 = (byte *)(param_3[1] + lVar16);
  }
  if (uVar17 < 0x800) {
    bVar15 = (byte)(uVar17 >> 6) | 0xc0;
    lVar16 = 2;
  }
  else {
    bVar15 = (byte)(uVar17 >> 0xc) | 0xe0;
    pbVar1[1] = (byte)(uVar17 >> 6) & 0x3f | 0x80;
    lVar16 = 3;
  }
  *pbVar1 = bVar15;
  pbVar1[lVar16 + -1] = (byte)uVar17 & 0x3f | 0x80;
  lVar16 = param_3[2] + lVar16;
LAB_006addc8:
  param_3[2] = lVar16;
  return 0;
}


// ===== 006ade40  FUN_006ade40 =====

void FUN_006ade40(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
                    /* try { // try from 006ade5c to 006ade63 has its CatchHandler @ 006ade90 */
  auVar2 = FUN_006ae320(*param_2,param_2[1],param_2[2]);
  uVar1 = <serde_json::error::[0]::serde_json::error::Error>::syntax
                    (param_3,auVar2._0_8_,auVar2._8_8_);
  *param_1 = 2;
  param_1[1] = uVar1;
  return;
}


// ===== 006adea8  FUN_006adea8 =====

void FUN_006adea8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
                    /* try { // try from 006adec4 to 006adecb has its CatchHandler @ 006adef4 */
  auVar2 = FUN_006ae320(*param_2,param_2[1],param_2[2]);
  uVar1 = <serde_json::error::[0]::serde_json::error::Error>::syntax
                    (param_3,auVar2._0_8_,auVar2._8_8_);
  *param_1 = 0;
  param_1[1] = uVar1;
  return;
}


// ===== 006adf0c  FUN_006adf0c =====

void FUN_006adf0c(undefined1 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
                    /* try { // try from 006adf28 to 006adf2f has its CatchHandler @ 006adf60 */
  auVar2 = FUN_006ae320(*param_2,param_2[1],param_2[2]);
  uVar1 = <serde_json::error::[0]::serde_json::error::Error>::syntax
                    (param_3,auVar2._0_8_,auVar2._8_8_);
  *(undefined8 *)(param_1 + 8) = uVar1;
  *param_1 = 1;
  return;
}


// ===== 006adf78  FUN_006adf78 =====

void FUN_006adf78(undefined2 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
                    /* try { // try from 006adf94 to 006adf9b has its CatchHandler @ 006adfcc */
  auVar2 = FUN_006ae320(*param_2,param_2[1],param_2[2]);
  uVar1 = <serde_json::error::[0]::serde_json::error::Error>::syntax
                    (param_3,auVar2._0_8_,auVar2._8_8_);
  *(undefined8 *)(param_1 + 4) = uVar1;
  *param_1 = 1;
  return;
}


// ===== 006adfe4  FUN_006adfe4 =====

void FUN_006adfe4(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  
                    /* try { // try from 006adffc to 006ae007 has its CatchHandler @ 006ae028 */
  auVar1 = FUN_006ae320(*param_1,param_1[1],param_1[2]);
  <serde_json::error::[0]::serde_json::error::Error>::syntax(param_2,auVar1._0_8_,auVar1._8_8_);
  return;
}


// ===== 006ae040  FUN_006ae040 =====

void FUN_006ae040(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 (*pauVar2) [16];
  undefined1 (*pauVar3) [16];
  ulong uVar4;
  undefined1 (*pauVar5) [16];
  long lVar6;
  undefined1 (*pauVar7) [16];
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ushort uVar15;
  undefined1 auVar20 [12];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  byte bVar32;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  undefined1 auVar34 [12];
  byte bVar48;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined4 uVar16;
  undefined6 uVar17;
  undefined8 uVar18;
  undefined1 auVar19 [12];
  undefined1 auVar21 [14];
  undefined1 auVar22 [14];
  undefined1 auVar27 [16];
  undefined1 auVar33 [12];
  undefined1 auVar35 [14];
  undefined1 auVar36 [14];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  ushort uVar49;
  undefined4 uVar50;
  undefined6 uVar51;
  undefined8 uVar52;
  undefined1 auVar53 [12];
  undefined1 auVar54 [14];
  undefined1 auVar55 [16];
  
  uVar4 = param_1[1];
  uVar13 = param_1[2];
  if (uVar13 != uVar4) {
    if (uVar4 <= uVar13) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                (uVar13,uVar4,&PTR_s__home_runner__cargo_registry_src_00976178);
    }
    lVar12 = *param_1;
    bVar32 = *(byte *)(lVar12 + uVar13);
    if ((bVar32 != 0x22) && (bVar32 != 0x5c)) {
      if ((param_2 & 1) == 0) {
        uVar1 = uVar13 + 1;
        uVar10 = uVar4 - uVar1;
        param_1[2] = uVar1;
        if (uVar1 <= uVar4 && uVar10 != 0) {
          pauVar2 = (undefined1 (*) [16])(lVar12 + uVar1);
          pauVar7 = pauVar2;
          uVar8 = uVar10;
          if (uVar10 < 0x10) {
            do {
              if (((*pauVar7)[0] == '\"') || ((*pauVar7)[0] == '\\')) goto LAB_006ae188;
              uVar8 = uVar8 - 1;
              pauVar7 = (undefined1 (*) [16])(*pauVar7 + 1);
            } while (uVar8 != 0);
          }
          else {
            auVar23[8] = 0x22;
            auVar23._0_8_ = 0x2222222222222222;
            auVar23[9] = 0x22;
            auVar23[10] = 0x22;
            auVar23[0xb] = 0x22;
            auVar23[0xc] = 0x22;
            auVar23[0xd] = 0x22;
            auVar23[0xe] = 0x22;
            auVar23[0xf] = 0x22;
            auVar28[8] = 0x5c;
            auVar28._0_8_ = 0x5c5c5c5c5c5c5c5c;
            auVar28[9] = 0x5c;
            auVar28[10] = 0x5c;
            auVar28[0xb] = 0x5c;
            auVar28[0xc] = 0x5c;
            auVar28[0xd] = 0x5c;
            auVar28[0xe] = 0x5c;
            auVar28[0xf] = 0x5c;
            auVar23 = NEON_cmeq(*pauVar2,auVar23,1);
            auVar28 = NEON_cmeq(*pauVar2,auVar28,1);
            uVar15 = CONCAT11(auVar23[1] | auVar28[1],auVar23[0] | auVar28[0]);
            uVar16 = CONCAT13(auVar23[3] | auVar28[3],CONCAT12(auVar23[2] | auVar28[2],uVar15));
            uVar17 = CONCAT15(auVar23[5] | auVar28[5],CONCAT14(auVar23[4] | auVar28[4],uVar16));
            uVar18 = CONCAT17(auVar23[7] | auVar28[7],CONCAT16(auVar23[6] | auVar28[6],uVar17));
            auVar19._0_10_ =
                 CONCAT19(auVar23[9] | auVar28[9],CONCAT18(auVar23[8] | auVar28[8],uVar18));
            auVar19[10] = auVar23[10] | auVar28[10];
            auVar19[0xb] = auVar23[0xb] | auVar28[0xb];
            auVar21[0xc] = auVar23[0xc] | auVar28[0xc];
            auVar21._0_12_ = auVar19;
            auVar21[0xd] = auVar23[0xd] | auVar28[0xd];
            auVar65[0xe] = auVar23[0xe] | auVar28[0xe];
            auVar65._0_14_ = auVar21;
            auVar65[0xf] = auVar23[0xf] | auVar28[0xf];
            uVar8 = CONCAT17((char)(auVar65._14_2_ >> 4),
                             CONCAT16((char)(auVar21._12_2_ >> 4),
                                      CONCAT15((char)(auVar19._10_2_ >> 4),
                                               CONCAT14((char)(ushort)((unkuint10)auVar19._0_10_ >>
                                                                      0x44),
                                                        CONCAT13((char)(ushort)((ulong)uVar18 >>
                                                                               0x34),
                                                                 CONCAT12((char)(ushort)((uint6)
                                                  uVar17 >> 0x24),
                                                  CONCAT11((char)(ushort)((uint)uVar16 >> 0x14),
                                                           (char)(uVar15 >> 4)))))))) &
                    0x8888888888888888;
            if (uVar8 == 0) {
              lVar14 = 0x10 - ((ulong)pauVar2 & 0xf);
              pauVar3 = (undefined1 (*) [16])(lVar12 + uVar4);
              pauVar7 = (undefined1 (*) [16])((long)pauVar2 + lVar14);
              if ((0x1f < uVar10) && ((long)(lVar14 + uVar1) <= (long)(uVar4 - 0x20))) {
                auVar24[8] = 0x22;
                auVar24._0_8_ = 0x2222222222222222;
                auVar24[9] = 0x22;
                auVar24[10] = 0x22;
                auVar24[0xb] = 0x22;
                auVar24[0xc] = 0x22;
                auVar24[0xd] = 0x22;
                auVar24[0xe] = 0x22;
                auVar24[0xf] = 0x22;
                auVar29[8] = 0x5c;
                auVar29._0_8_ = 0x5c5c5c5c5c5c5c5c;
                auVar29[9] = 0x5c;
                auVar29[10] = 0x5c;
                auVar29[0xb] = 0x5c;
                auVar29[0xc] = 0x5c;
                auVar29[0xd] = 0x5c;
                auVar29[0xe] = 0x5c;
                auVar29[0xf] = 0x5c;
                pauVar5 = (undefined1 (*) [16])((uVar13 - ((ulong)pauVar2 & 0xf)) + lVar12 + 0x21);
                do {
                  pauVar7 = pauVar5;
                  auVar28 = NEON_cmeq(*pauVar7,auVar24,1);
                  auVar66 = NEON_cmeq(*pauVar7,auVar29,1);
                  auVar65 = NEON_cmeq(pauVar7[-1],auVar24,1);
                  auVar23 = NEON_cmeq(pauVar7[-1],auVar29,1);
                  bVar48 = auVar23[0] | auVar65[0];
                  bVar56 = auVar23[1] | auVar65[1];
                  uVar49 = CONCAT11(bVar56,bVar48);
                  bVar57 = auVar23[2] | auVar65[2];
                  bVar58 = auVar23[3] | auVar65[3];
                  uVar50 = CONCAT13(bVar58,CONCAT12(bVar57,uVar49));
                  bVar59 = auVar23[4] | auVar65[4];
                  bVar60 = auVar23[5] | auVar65[5];
                  uVar51 = CONCAT15(bVar60,CONCAT14(bVar59,uVar50));
                  bVar61 = auVar23[6] | auVar65[6];
                  bVar62 = auVar23[7] | auVar65[7];
                  uVar52 = CONCAT17(bVar62,CONCAT16(bVar61,uVar51));
                  bVar63 = auVar23[8] | auVar65[8];
                  bVar64 = auVar23[9] | auVar65[9];
                  auVar53._0_10_ = CONCAT19(bVar64,CONCAT18(bVar63,uVar52));
                  auVar53[10] = auVar23[10] | auVar65[10];
                  auVar53[0xb] = auVar23[0xb] | auVar65[0xb];
                  auVar54[0xc] = auVar23[0xc] | auVar65[0xc];
                  auVar54._0_12_ = auVar53;
                  auVar54[0xd] = auVar23[0xd] | auVar65[0xd];
                  auVar55[0xe] = auVar23[0xe] | auVar65[0xe];
                  auVar55._0_14_ = auVar54;
                  auVar55[0xf] = auVar23[0xf] | auVar65[0xf];
                  bVar32 = auVar66[0] | auVar28[0];
                  bVar39 = auVar66[1] | auVar28[1];
                  uVar15 = CONCAT11(bVar39,bVar32);
                  bVar40 = auVar66[2] | auVar28[2];
                  bVar41 = auVar66[3] | auVar28[3];
                  uVar16 = CONCAT13(bVar41,CONCAT12(bVar40,uVar15));
                  bVar42 = auVar66[4] | auVar28[4];
                  bVar43 = auVar66[5] | auVar28[5];
                  uVar17 = CONCAT15(bVar43,CONCAT14(bVar42,uVar16));
                  bVar44 = auVar66[6] | auVar28[6];
                  bVar45 = auVar66[7] | auVar28[7];
                  uVar18 = CONCAT17(bVar45,CONCAT16(bVar44,uVar17));
                  bVar46 = auVar66[8] | auVar28[8];
                  bVar47 = auVar66[9] | auVar28[9];
                  auVar33._0_10_ = CONCAT19(bVar47,CONCAT18(bVar46,uVar18));
                  auVar33[10] = auVar66[10] | auVar28[10];
                  auVar33[0xb] = auVar66[0xb] | auVar28[0xb];
                  auVar35[0xc] = auVar66[0xc] | auVar28[0xc];
                  auVar35._0_12_ = auVar33;
                  auVar35[0xd] = auVar66[0xd] | auVar28[0xd];
                  auVar37[0xe] = auVar66[0xe] | auVar28[0xe];
                  auVar37._0_14_ = auVar35;
                  auVar37[0xf] = auVar66[0xf] | auVar28[0xf];
                  auVar66[0] = bVar32 | bVar48;
                  auVar66[1] = bVar39 | bVar56;
                  auVar66[2] = bVar40 | bVar57;
                  auVar66[3] = bVar41 | bVar58;
                  auVar66[4] = bVar42 | bVar59;
                  auVar66[5] = bVar43 | bVar60;
                  auVar66[6] = bVar44 | bVar61;
                  auVar66[7] = bVar45 | bVar62;
                  auVar66[8] = bVar46 | bVar63;
                  auVar66[9] = bVar47 | bVar64;
                  auVar66[10] = auVar33[10] | auVar53[10];
                  auVar66[0xb] = auVar33[0xb] | auVar53[0xb];
                  auVar66[0xc] = auVar35[0xc] | auVar54[0xc];
                  auVar66[0xd] = auVar35[0xd] | auVar54[0xd];
                  auVar66[0xe] = auVar37[0xe] | auVar55[0xe];
                  auVar66[0xf] = auVar37[0xf] | auVar55[0xf];
                  auVar23 = NEON_umaxp(auVar66,auVar66,1);
                  if (auVar23._0_8_ != 0) {
                    uVar4 = CONCAT17((char)(auVar55._14_2_ >> 4),
                                     CONCAT16((char)(auVar54._12_2_ >> 4),
                                              CONCAT15((char)(auVar53._10_2_ >> 4),
                                                       CONCAT14((char)(ushort)((unkuint10)
                                                                               auVar53._0_10_ >>
                                                                              0x44),
                                                                CONCAT13((char)(ushort)((ulong)
                                                  uVar52 >> 0x34),
                                                  CONCAT12((char)(ushort)((uint6)uVar51 >> 0x24),
                                                           CONCAT11((char)(ushort)((uint)uVar50 >>
                                                                                  0x14),
                                                                    (char)(uVar49 >> 4)))))))) &
                            0x8888888888888888;
                    if (uVar4 == 0) {
                      uVar4 = (CONCAT17((char)(auVar37._14_2_ >> 4),
                                        CONCAT16((char)(auVar35._12_2_ >> 4),
                                                 CONCAT15((char)(auVar33._10_2_ >> 4),
                                                          CONCAT14((char)(ushort)((unkuint10)
                                                                                  auVar33._0_10_ >>
                                                                                 0x44),
                                                                   CONCAT13((char)(ushort)((ulong)
                                                  uVar18 >> 0x34),
                                                  CONCAT12((char)(ushort)((uint6)uVar17 >> 0x24),
                                                           CONCAT11((char)(ushort)((uint)uVar16 >>
                                                                                  0x14),
                                                                    (char)(uVar15 >> 4)))))))) &
                              0x8888888888888888) >> 3;
                      uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
                      uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
                      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 |
                              (uVar4 & 0xffff0000ffff) << 0x10;
                      pauVar7 = (undefined1 (*) [16])
                                (*pauVar7 + ((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 2));
                    }
                    else {
                      uVar4 = uVar4 >> 3;
                      uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
                      uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
                      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 |
                              (uVar4 & 0xffff0000ffff) << 0x10;
                      pauVar7 = (undefined1 (*) [16])
                                (pauVar7[-1] + ((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 2))
                      ;
                    }
                    goto LAB_006ae188;
                  }
                  pauVar5 = pauVar7 + 2;
                } while (pauVar7 + 1 <= pauVar3 + -2);
                pauVar7 = pauVar7 + 1;
              }
              if (pauVar7 <= pauVar3 + -1) {
                auVar25[8] = 0x22;
                auVar25._0_8_ = 0x2222222222222222;
                auVar25[9] = 0x22;
                auVar25[10] = 0x22;
                auVar25[0xb] = 0x22;
                auVar25[0xc] = 0x22;
                auVar25[0xd] = 0x22;
                auVar25[0xe] = 0x22;
                auVar25[0xf] = 0x22;
                auVar30[8] = 0x5c;
                auVar30._0_8_ = 0x5c5c5c5c5c5c5c5c;
                auVar30[9] = 0x5c;
                auVar30[10] = 0x5c;
                auVar30[0xb] = 0x5c;
                auVar30[0xc] = 0x5c;
                auVar30[0xd] = 0x5c;
                auVar30[0xe] = 0x5c;
                auVar30[0xf] = 0x5c;
                do {
                  auVar65 = NEON_cmeq(*pauVar7,auVar25,1);
                  auVar23 = NEON_cmeq(*pauVar7,auVar30,1);
                  uVar15 = CONCAT11(auVar23[1] | auVar65[1],auVar23[0] | auVar65[0]);
                  uVar16 = CONCAT13(auVar23[3] | auVar65[3],CONCAT12(auVar23[2] | auVar65[2],uVar15)
                                   );
                  uVar17 = CONCAT15(auVar23[5] | auVar65[5],CONCAT14(auVar23[4] | auVar65[4],uVar16)
                                   );
                  uVar18 = CONCAT17(auVar23[7] | auVar65[7],CONCAT16(auVar23[6] | auVar65[6],uVar17)
                                   );
                  auVar34._0_10_ =
                       CONCAT19(auVar23[9] | auVar65[9],CONCAT18(auVar23[8] | auVar65[8],uVar18));
                  auVar34[10] = auVar23[10] | auVar65[10];
                  auVar34[0xb] = auVar23[0xb] | auVar65[0xb];
                  auVar36[0xc] = auVar23[0xc] | auVar65[0xc];
                  auVar36._0_12_ = auVar34;
                  auVar36[0xd] = auVar23[0xd] | auVar65[0xd];
                  auVar38[0xe] = auVar23[0xe] | auVar65[0xe];
                  auVar38._0_14_ = auVar36;
                  auVar38[0xf] = auVar23[0xf] | auVar65[0xf];
                  uVar4 = CONCAT17((char)(auVar38._14_2_ >> 4),
                                   CONCAT16((char)(auVar36._12_2_ >> 4),
                                            CONCAT15((char)(auVar34._10_2_ >> 4),
                                                     CONCAT14((char)(ushort)((unkuint10)
                                                                             auVar34._0_10_ >> 0x44)
                                                              ,CONCAT13((char)(ushort)((ulong)uVar18
                                                                                      >> 0x34),
                                                                        CONCAT12((char)(ushort)((
                                                  uint6)uVar17 >> 0x24),
                                                  CONCAT11((char)(ushort)((uint)uVar16 >> 0x14),
                                                           (char)(uVar15 >> 4)))))))) &
                          0x8888888888888888;
                  if (uVar4 != 0) {
                    uVar4 = uVar4 >> 3;
                    uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
                    uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
                    pauVar7 = (undefined1 (*) [16])
                              (*pauVar7 + ((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 2));
                    goto LAB_006ae188;
                  }
                  pauVar7 = pauVar7 + 1;
                } while (pauVar7 <= pauVar3 + -1);
              }
              if (pauVar3 <= pauVar7) goto LAB_006ae18c;
              auVar26[8] = 0x22;
              auVar26._0_8_ = 0x2222222222222222;
              auVar26[9] = 0x22;
              auVar26[10] = 0x22;
              auVar26[0xb] = 0x22;
              auVar26[0xc] = 0x22;
              auVar26[0xd] = 0x22;
              auVar26[0xe] = 0x22;
              auVar26[0xf] = 0x22;
              auVar31[8] = 0x5c;
              auVar31._0_8_ = 0x5c5c5c5c5c5c5c5c;
              auVar31[9] = 0x5c;
              auVar31[10] = 0x5c;
              auVar31[0xb] = 0x5c;
              auVar31[0xc] = 0x5c;
              auVar31[0xd] = 0x5c;
              auVar31[0xe] = 0x5c;
              auVar31[0xf] = 0x5c;
              auVar23 = pauVar3[-1];
              auVar65 = NEON_cmeq(auVar23,auVar26,1);
              auVar23 = NEON_cmeq(auVar23,auVar31,1);
              uVar15 = CONCAT11(auVar23[1] | auVar65[1],auVar23[0] | auVar65[0]);
              uVar16 = CONCAT13(auVar23[3] | auVar65[3],CONCAT12(auVar23[2] | auVar65[2],uVar15));
              uVar17 = CONCAT15(auVar23[5] | auVar65[5],CONCAT14(auVar23[4] | auVar65[4],uVar16));
              uVar18 = CONCAT17(auVar23[7] | auVar65[7],CONCAT16(auVar23[6] | auVar65[6],uVar17));
              auVar20._0_10_ =
                   CONCAT19(auVar23[9] | auVar65[9],CONCAT18(auVar23[8] | auVar65[8],uVar18));
              auVar20[10] = auVar23[10] | auVar65[10];
              auVar20[0xb] = auVar23[0xb] | auVar65[0xb];
              auVar22[0xc] = auVar23[0xc] | auVar65[0xc];
              auVar22._0_12_ = auVar20;
              auVar22[0xd] = auVar23[0xd] | auVar65[0xd];
              auVar27[0xe] = auVar23[0xe] | auVar65[0xe];
              auVar27._0_14_ = auVar22;
              auVar27[0xf] = auVar23[0xf] | auVar65[0xf];
              uVar4 = CONCAT17((char)(auVar27._14_2_ >> 4),
                               CONCAT16((char)(auVar22._12_2_ >> 4),
                                        CONCAT15((char)(auVar20._10_2_ >> 4),
                                                 CONCAT14((char)(ushort)((unkuint10)auVar20._0_10_
                                                                        >> 0x44),
                                                          CONCAT13((char)(ushort)((ulong)uVar18 >>
                                                                                 0x34),
                                                                   CONCAT12((char)(ushort)((uint6)
                                                  uVar17 >> 0x24),
                                                  CONCAT11((char)(ushort)((uint)uVar16 >> 0x14),
                                                           (char)(uVar15 >> 4)))))))) &
                      0x8888888888888888;
              if (uVar4 == 0) goto LAB_006ae18c;
              uVar4 = uVar4 >> 3;
              uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
              uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
              pauVar7 = (undefined1 (*) [16])
                        (pauVar3[-1] + ((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 2));
            }
            else {
              uVar8 = uVar8 >> 3;
              uVar4 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
              uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
              pauVar7 = (undefined1 (*) [16])
                        (*pauVar2 + ((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 2));
            }
LAB_006ae188:
            uVar10 = (long)pauVar7 - (long)pauVar2;
          }
        }
LAB_006ae18c:
        param_1[2] = uVar10 + uVar1;
        return;
      }
      if (0x1f < bVar32) {
        lVar14 = uVar13 + 1;
        lVar6 = 7 - uVar13;
        lVar11 = -(uVar4 - lVar14 & 0x7ffffffffffffff8);
        puVar9 = (ulong *)(lVar12 + lVar14);
        do {
          if (lVar11 == 0) {
            param_1[2] = (uVar4 - lVar14 & 0xfffffffffffffff8) + lVar14;
            FUN_006aec24();
            return;
          }
          uVar13 = *puVar9;
          lVar11 = lVar11 + 8;
          lVar6 = lVar6 + -8;
          uVar13 = ((uVar13 ^ 0x2222222222222222) + 0xfefefefefefefeff | uVar13 + 0xdfdfdfdfdfdfdfe0
                   | (uVar13 ^ 0x5c5c5c5c5c5c5c5c) + 0xfefefefefefefeff) &
                   (uVar13 ^ 0xffffffffffffffff) & 0x8080808080808080;
          puVar9 = puVar9 + 1;
        } while (uVar13 == 0);
        uVar13 = uVar13 >> 7;
        uVar4 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
        uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
        param_1[2] = ((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3) - lVar6;
        return;
      }
    }
  }
  return;
}


// ===== 006ae320  FUN_006ae320 =====

undefined1  [16] FUN_006ae320(undefined1 (*param_1) [16],ulong param_2,ulong param_3)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  uint3 uVar3;
  undefined1 auVar4 [11];
  uint3 uVar5;
  uint6 uVar6;
  uint6 uVar7;
  uint6 uVar8;
  uint6 uVar9;
  uint6 uVar10;
  undefined1 auVar11 [11];
  bool bVar12;
  ulong uVar13;
  undefined1 (*pauVar14) [16];
  ulong uVar15;
  undefined1 (*pauVar16) [16];
  undefined1 (*pauVar17) [16];
  undefined8 *puVar18;
  long lVar19;
  ulong uVar20;
  undefined1 *puVar21;
  ulong uVar22;
  undefined1 *puVar23;
  long lVar24;
  undefined1 *puVar25;
  long lVar26;
  int iVar27;
  undefined8 uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  long lVar32;
  undefined1 uVar33;
  long lVar34;
  long lVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  long lVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  long lVar43;
  long lVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  long lVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  long lVar50;
  long lVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  long lVar57;
  long lVar58;
  long lVar59;
  long lVar60;
  long lVar61;
  long lVar62;
  long lVar63;
  long lVar64;
  long lVar65;
  long lVar66;
  long lVar67;
  long lVar68;
  long lVar69;
  long lVar70;
  long lVar71;
  long lVar72;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  
  if (param_2 < param_3) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (0,param_3,param_2,&PTR_s__home_runner__cargo_registry_src_009761a8);
  }
  if (param_3 == 0) {
LAB_006ae898:
    uVar13 = 0;
LAB_006ae8a8:
    auVar45._8_8_ = param_3 - uVar13;
    auVar45._0_8_ = 1;
    return auVar45;
  }
  pauVar14 = (undefined1 (*) [16])(*param_1 + param_3);
  if (param_3 < 0x10) {
    do {
      if (pauVar14 <= param_1) goto LAB_006ae898;
      pauVar14 = (undefined1 (*) [16])(pauVar14[-1] + 0xf);
    } while ((*pauVar14)[0] != '\n');
  }
  else {
    auVar36[8] = 10;
    auVar36._0_8_ = 0xa0a0a0a0a0a0a0a;
    auVar36[9] = 10;
    auVar36[10] = 10;
    auVar36[0xb] = 10;
    auVar36[0xc] = 10;
    auVar36[0xd] = 10;
    auVar36[0xe] = 10;
    auVar36[0xf] = 10;
    pauVar17 = (undefined1 (*) [16])(param_1[-1] + param_3);
    auVar36 = NEON_cmeq(*pauVar17,auVar36,1);
    uVar13 = CONCAT17((char)(auVar36._14_2_ >> 4),
                      CONCAT16((char)(auVar36._12_2_ >> 4),
                               CONCAT15((char)(auVar36._10_2_ >> 4),
                                        CONCAT14((char)(auVar36._8_2_ >> 4),
                                                 CONCAT13((char)(auVar36._6_2_ >> 4),
                                                          CONCAT12((char)(auVar36._4_2_ >> 4),
                                                                   CONCAT11((char)(auVar36._2_2_ >>
                                                                                  4),(char)(auVar36.
                                                  _0_2_ >> 4)))))))) & 0x8888888888888888;
    if (uVar13 == 0) {
      uVar15 = param_3 - ((ulong)pauVar14 & 0xf);
      if ((0x3f < param_3) && (0x3f < uVar15)) {
        auVar40[8] = 10;
        auVar40._0_8_ = 0xa0a0a0a0a0a0a0a;
        auVar40[9] = 10;
        auVar40[10] = 10;
        auVar40[0xb] = 10;
        auVar40[0xc] = 10;
        auVar40[0xd] = 10;
        auVar40[0xe] = 10;
        auVar40[0xf] = 10;
        uVar13 = uVar15;
        do {
          auVar36 = NEON_cmeq(*(undefined1 (*) [16])(param_1[-4] + uVar13),auVar40,1);
          auVar46 = NEON_cmeq(*(undefined1 (*) [16])(param_1[-3] + uVar13),auVar40,1);
          auVar49 = NEON_cmeq(*(undefined1 (*) [16])(param_1[-2] + uVar13),auVar40,1);
          auVar45 = NEON_cmeq(*(undefined1 (*) [16])(param_1[-1] + uVar13),auVar40,1);
          auVar48[0] = auVar46[0] | auVar36[0] | auVar49[0] | auVar45[0];
          auVar48[1] = auVar46[1] | auVar36[1] | auVar49[1] | auVar45[1];
          auVar48[2] = auVar46[2] | auVar36[2] | auVar49[2] | auVar45[2];
          auVar48[3] = auVar46[3] | auVar36[3] | auVar49[3] | auVar45[3];
          auVar48[4] = auVar46[4] | auVar36[4] | auVar49[4] | auVar45[4];
          auVar48[5] = auVar46[5] | auVar36[5] | auVar49[5] | auVar45[5];
          auVar48[6] = auVar46[6] | auVar36[6] | auVar49[6] | auVar45[6];
          auVar48[7] = auVar46[7] | auVar36[7] | auVar49[7] | auVar45[7];
          auVar48[8] = auVar46[8] | auVar36[8] | auVar49[8] | auVar45[8];
          auVar48[9] = auVar46[9] | auVar36[9] | auVar49[9] | auVar45[9];
          auVar48[10] = auVar46[10] | auVar36[10] | auVar49[10] | auVar45[10];
          auVar48[0xb] = auVar46[0xb] | auVar36[0xb] | auVar49[0xb] | auVar45[0xb];
          auVar48[0xc] = auVar46[0xc] | auVar36[0xc] | auVar49[0xc] | auVar45[0xc];
          auVar48[0xd] = auVar46[0xd] | auVar36[0xd] | auVar49[0xd] | auVar45[0xd];
          auVar48[0xe] = auVar46[0xe] | auVar36[0xe] | auVar49[0xe] | auVar45[0xe];
          auVar48[0xf] = auVar46[0xf] | auVar36[0xf] | auVar49[0xf] | auVar45[0xf];
          auVar48 = NEON_umaxp(auVar48,auVar48,1);
          if (auVar48._0_8_ != 0) {
            uVar15 = CONCAT17((char)(auVar45._14_2_ >> 4),
                              CONCAT16((char)(auVar45._12_2_ >> 4),
                                       CONCAT15((char)(auVar45._10_2_ >> 4),
                                                CONCAT14((char)(auVar45._8_2_ >> 4),
                                                         CONCAT13((char)(auVar45._6_2_ >> 4),
                                                                  CONCAT12((char)(auVar45._4_2_ >> 4
                                                                                 ),CONCAT11((char)(
                                                  auVar45._2_2_ >> 4),(char)(auVar45._0_2_ >> 4)))))
                                               ))) & 0x8888888888888888;
            if (uVar15 == 0) {
              uVar15 = CONCAT17((char)(auVar49._14_2_ >> 4),
                                CONCAT16((char)(auVar49._12_2_ >> 4),
                                         CONCAT15((char)(auVar49._10_2_ >> 4),
                                                  CONCAT14((char)(auVar49._8_2_ >> 4),
                                                           CONCAT13((char)(auVar49._6_2_ >> 4),
                                                                    CONCAT12((char)(auVar49._4_2_ >>
                                                                                   4),CONCAT11((char
                                                  )(auVar49._2_2_ >> 4),(char)(auVar49._0_2_ >> 4)))
                                                  ))))) & 0x8888888888888888;
              if (uVar15 == 0) {
                uVar15 = CONCAT17((char)(auVar46._14_2_ >> 4),
                                  CONCAT16((char)(auVar46._12_2_ >> 4),
                                           CONCAT15((char)(auVar46._10_2_ >> 4),
                                                    CONCAT14((char)(auVar46._8_2_ >> 4),
                                                             CONCAT13((char)(auVar46._6_2_ >> 4),
                                                                      CONCAT12((char)(auVar46._4_2_
                                                                                     >> 4),
                                                                               CONCAT11((char)(
                                                  auVar46._2_2_ >> 4),(char)(auVar46._0_2_ >> 4)))))
                                                  ))) & 0x8888888888888888;
                if (uVar15 == 0) {
                  pauVar14 = (undefined1 (*) [16])
                             ((long)param_1 +
                             (uVar13 - ((ulong)LZCOUNT(CONCAT17((char)(auVar36._14_2_ >> 4),
                                                                CONCAT16((char)(auVar36._12_2_ >> 4)
                                                                         ,CONCAT15((char)(auVar36.
                                                  _10_2_ >> 4),
                                                  CONCAT14((char)(auVar36._8_2_ >> 4),
                                                           CONCAT13((char)(auVar36._6_2_ >> 4),
                                                                    CONCAT12((char)(auVar36._4_2_ >>
                                                                                   4),CONCAT11((char
                                                  )(auVar36._2_2_ >> 4),(char)(auVar36._0_2_ >> 4)))
                                                  ))))) & 0x8888888888888888) >> 2)) + -0x31);
                }
                else {
                  pauVar14 = (undefined1 (*) [16])
                             (param_1[-3] + ((ulong)LZCOUNT(uVar15) >> 2 ^ 0xf) + uVar13);
                }
              }
              else {
                pauVar14 = (undefined1 (*) [16])
                           (param_1[-2] + ((ulong)LZCOUNT(uVar15) >> 2 ^ 0xf) + uVar13);
              }
            }
            else {
              pauVar14 = (undefined1 (*) [16])
                         (param_1[-1] + ((ulong)LZCOUNT(uVar15) >> 2 ^ 0xf) + uVar13);
            }
            goto LAB_006ae390;
          }
          uVar15 = uVar13 - 0x40;
          bVar12 = 0x7f < uVar13;
          uVar13 = uVar15;
        } while (bVar12);
      }
      auVar46[8] = 10;
      auVar46._0_8_ = 0xa0a0a0a0a0a0a0a;
      auVar46[9] = 10;
      auVar46[10] = 10;
      auVar46[0xb] = 10;
      auVar46[0xc] = 10;
      auVar46[0xd] = 10;
      auVar46[0xe] = 10;
      auVar46[0xf] = 10;
      do {
        uVar20 = uVar15;
        if ((long)uVar20 < 0x10) {
          if ((long)uVar20 < 1) goto LAB_006ae898;
          auVar49[8] = 10;
          auVar49._0_8_ = 0xa0a0a0a0a0a0a0a;
          auVar49[9] = 10;
          auVar49[10] = 10;
          auVar49[0xb] = 10;
          auVar49[0xc] = 10;
          auVar49[0xd] = 10;
          auVar49[0xe] = 10;
          auVar49[0xf] = 10;
          auVar36 = NEON_cmeq(*param_1,auVar49,1);
          uVar13 = CONCAT17((char)(auVar36._14_2_ >> 4),
                            CONCAT16((char)(auVar36._12_2_ >> 4),
                                     CONCAT15((char)(auVar36._10_2_ >> 4),
                                              CONCAT14((char)(auVar36._8_2_ >> 4),
                                                       CONCAT13((char)(auVar36._6_2_ >> 4),
                                                                CONCAT12((char)(auVar36._4_2_ >> 4),
                                                                         CONCAT11((char)(auVar36.
                                                  _2_2_ >> 4),(char)(auVar36._0_2_ >> 4)))))))) &
                   0x8888888888888888;
          if (uVar13 == 0) goto LAB_006ae898;
          pauVar14 = (undefined1 (*) [16])((long)param_1 + (0xf - ((ulong)LZCOUNT(uVar13) >> 2)));
          goto LAB_006ae390;
        }
        auVar36 = NEON_cmeq(*(undefined1 (*) [16])(param_1[-1] + uVar20),auVar46,1);
        uVar13 = CONCAT17((char)(auVar36._14_2_ >> 4),
                          CONCAT16((char)(auVar36._12_2_ >> 4),
                                   CONCAT15((char)(auVar36._10_2_ >> 4),
                                            CONCAT14((char)(auVar36._8_2_ >> 4),
                                                     CONCAT13((char)(auVar36._6_2_ >> 4),
                                                              CONCAT12((char)(auVar36._4_2_ >> 4),
                                                                       CONCAT11((char)(auVar36._2_2_
                                                                                      >> 4),
                                                                                (char)(auVar36._0_2_
                                                                                      >> 4)))))))) &
                 0x8888888888888888;
        uVar15 = uVar20 - 0x10;
      } while (uVar13 == 0);
      pauVar17 = (undefined1 (*) [16])(param_1[-1] + uVar20);
    }
    pauVar14 = (undefined1 (*) [16])(*pauVar17 + ((ulong)LZCOUNT(uVar13) >> 2 ^ 0xf));
  }
LAB_006ae390:
  uVar13 = ((long)pauVar14 - (long)param_1) + 1;
  if (param_2 <= (ulong)((long)pauVar14 - (long)param_1)) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (0,uVar13,param_2,&PTR_s__home_runner__cargo_registry_src_00976190);
  }
  pauVar14 = (undefined1 (*) [16])((long)param_1 + uVar13);
  if (pauVar14 <= param_1) goto LAB_006ae8a8;
  if (uVar13 < 0x10) {
    if (uVar13 < 8) {
      uVar15 = 0;
    }
    else {
      uVar28 = NEON_cmeq(*(undefined8 *)*param_1,0xa0a0a0a0a0a0a0a,1);
      auVar29._0_2_ = (short)(char)uVar28;
      auVar29._2_2_ = (short)(char)((ulong)uVar28 >> 8);
      auVar29._4_2_ = (short)(char)((ulong)uVar28 >> 0x10);
      auVar29._6_2_ = (short)(char)((ulong)uVar28 >> 0x18);
      auVar29._8_2_ = (short)(char)((ulong)uVar28 >> 0x20);
      auVar29._10_2_ = (short)(char)((ulong)uVar28 >> 0x28);
      auVar29._12_2_ = (short)(char)((ulong)uVar28 >> 0x30);
      auVar29._14_2_ = (short)(char)((ulong)uVar28 >> 0x38);
      iVar27 = NEON_saddlv(auVar29,2);
      uVar15 = (ulong)(uint)-iVar27;
      if (uVar13 == (uVar13 & 8)) goto LAB_006ae438;
      param_1 = (undefined1 (*) [16])(*param_1 + (uVar13 & 8));
    }
    do {
      puVar21 = *param_1;
      if ((*param_1)[0] == '\n') {
        uVar15 = uVar15 + 1;
      }
      param_1 = (undefined1 (*) [16])(puVar21 + 1);
    } while ((undefined1 (*) [16])(puVar21 + 1) != pauVar14);
LAB_006ae438:
    auVar73._8_8_ = param_3 - uVar13;
    auVar73._0_8_ = uVar15 + 1;
    return auVar73;
  }
  pauVar17 = (undefined1 (*) [16])((long)param_1 + (0x10 - ((ulong)param_1 & 0xf)));
  pauVar16 = pauVar17;
  if (pauVar17 <= (undefined1 (*) [16])(*param_1 + 1)) {
    pauVar16 = (undefined1 (*) [16])(*param_1 + 1);
  }
  uVar15 = (long)pauVar16 - (long)param_1;
  if (uVar15 < 8) {
    lVar19 = 0;
    pauVar16 = param_1;
LAB_006ae74c:
    do {
      puVar21 = *pauVar16;
      if ((*pauVar16)[0] == '\n') {
        lVar19 = lVar19 + 1;
      }
      pauVar16 = (undefined1 (*) [16])(puVar21 + 1);
    } while ((undefined1 (*) [16])(puVar21 + 1) < pauVar17);
  }
  else if (uVar15 < 0x20) {
    uVar22 = 0;
    lVar19 = 0;
LAB_006ae6b4:
    lVar32 = 0;
    lVar34 = 0;
    lVar35 = 0;
    lVar38 = 0;
    lVar43 = 0;
    lVar44 = 0;
    lVar26 = 0;
    uVar20 = uVar15 & 0xfffffffffffffff8;
    pauVar16 = (undefined1 (*) [16])(*param_1 + uVar20);
    lVar24 = uVar22 - uVar20;
    puVar18 = (undefined8 *)(*param_1 + uVar22);
    do {
      lVar24 = lVar24 + 8;
      uVar28 = NEON_cmeq(*puVar18,0xa0a0a0a0a0a0a0a,1);
      uVar3 = CONCAT12((char)((ulong)uVar28 >> 8),(short)uVar28) & 0xff00ff;
      uVar33 = (undefined1)((ulong)uVar28 >> 0x28);
      uVar6 = (uint6)CONCAT14(uVar33,(uint)CONCAT12(uVar33,(ushort)(byte)((ulong)uVar28 >> 0x20))) &
              0xffff0000ffff;
      uVar7 = (uint6)CONCAT14((char)(uVar3 >> 0x10),(uint)uVar3) & 0xffff0000ffff;
      lVar43 = lVar43 + (ulong)((byte)((ulong)uVar28 >> 0x30) & 1);
      lVar44 = lVar44 + (ulong)((byte)((ulong)uVar28 >> 0x38) & 0xff01);
      lVar35 = lVar35 + (ulong)((byte)((ulong)uVar28 >> 0x10) & 1);
      lVar38 = lVar38 + (ulong)((byte)((ulong)uVar28 >> 0x18) & 1);
      lVar19 = lVar19 + (ulong)((byte)uVar7 & 1);
      lVar26 = lVar26 + (ulong)((byte)(uVar7 >> 0x20) & 1);
      lVar32 = lVar32 + (ulong)((byte)uVar6 & 1);
      lVar34 = lVar34 + (ulong)((byte)(uVar6 >> 0x20) & 1);
      puVar18 = puVar18 + 1;
    } while (lVar24 != 0);
    lVar19 = lVar19 + lVar32 + lVar35 + lVar43 + lVar26 + lVar34 + lVar38 + lVar44;
    if (uVar15 != uVar20) goto LAB_006ae74c;
  }
  else {
    lVar19 = 0;
    lVar24 = 0;
    auVar39[8] = 10;
    auVar39._0_8_ = 0xa0a0a0a0a0a0a0a;
    auVar39[9] = 10;
    auVar39[10] = 10;
    auVar39[0xb] = 10;
    auVar39[0xc] = 10;
    auVar39[0xd] = 10;
    auVar39[0xe] = 10;
    auVar39[0xf] = 10;
    lVar34 = 0;
    lVar35 = 0;
    lVar52 = 0;
    lVar53 = 0;
    lVar26 = 0;
    lVar32 = 0;
    lVar58 = 0;
    lVar59 = 0;
    uVar22 = uVar15 & 0xffffffffffffffe0;
    lVar44 = 0;
    lVar47 = 0;
    lVar50 = 0;
    lVar51 = 0;
    uVar20 = uVar15 & 0xffffffffffffffe0;
    lVar38 = 0;
    lVar43 = 0;
    lVar66 = 0;
    lVar67 = 0;
    lVar56 = 0;
    lVar57 = 0;
    lVar54 = 0;
    lVar55 = 0;
    lVar68 = 0;
    lVar69 = 0;
    lVar62 = 0;
    lVar63 = 0;
    lVar64 = 0;
    lVar65 = 0;
    lVar60 = 0;
    lVar61 = 0;
    lVar70 = 0;
    lVar71 = 0;
    pauVar16 = param_1 + 1;
    do {
      pauVar1 = pauVar16 + -1;
      auVar36 = *pauVar16;
      uVar20 = uVar20 - 0x20;
      pauVar16 = pauVar16 + 2;
      auVar40 = NEON_cmeq(*pauVar1,auVar39,1);
      auVar36 = NEON_cmeq(auVar36,auVar39,1);
      uVar3 = CONCAT12(auVar40[9],auVar40._8_2_) & 0xff00ff;
      auVar4[10] = auVar40[5];
      auVar4._0_10_ = (unkuint10)auVar40[4] << 0x40;
      uVar5 = CONCAT12(auVar36[9],auVar36._8_2_) & 0xff00ff;
      uVar6 = (uint6)CONCAT14(auVar40[0xd],(uint)CONCAT12(auVar40[0xd],(ushort)auVar40[0xc])) &
              0xffff0000ffff;
      uVar7 = (uint6)CONCAT14((char)(uVar3 >> 0x10),(uint)uVar3) & 0xffff0000ffff;
      uVar8 = (uint6)CONCAT14(auVar40[5],(uint)auVar4._8_3_) & 0xffff0000ffff;
      lVar38 = lVar38 + (ulong)((byte)uVar6 & 1);
      lVar43 = lVar43 + (ulong)((byte)(uVar6 >> 0x20) & 1);
      lVar66 = lVar66 + (ulong)(auVar40[0xe] & 1);
      lVar67 = lVar67 + (ulong)(auVar40[0xf] & 1);
      uVar6 = (uint6)CONCAT14((char)(uVar5 >> 0x10),(uint)uVar5) & 0xffff0000ffff;
      lVar50 = lVar50 + (ulong)(auVar40[10] & 1);
      lVar51 = lVar51 + (ulong)(auVar40[0xb] & 1);
      uVar9 = (uint6)CONCAT14(auVar36[1],(uint)CONCAT12(auVar36[1],(ushort)auVar36[0])) &
              0xffff0000ffff;
      uVar10 = (uint6)CONCAT14(auVar36[0xd],(uint)CONCAT12(auVar36[0xd],(ushort)auVar36[0xc])) &
               0xffff0000ffff;
      lVar58 = lVar58 + (ulong)(auVar40[6] & 1);
      lVar59 = lVar59 + (ulong)(auVar40[7] & 1);
      lVar44 = lVar44 + (ulong)((byte)uVar7 & 1);
      lVar47 = lVar47 + (ulong)((byte)(uVar7 >> 0x20) & 1);
      lVar26 = lVar26 + (ulong)((byte)uVar8 & 1);
      lVar32 = lVar32 + (ulong)((byte)(uVar8 >> 0x20) & 1);
      lVar52 = lVar52 + (ulong)(auVar40[2] & 1);
      lVar53 = lVar53 + (ulong)(auVar40[3] & 1);
      lVar34 = lVar34 + (ulong)(auVar40[0] & 1);
      lVar35 = lVar35 + (ulong)(auVar40[1] & 1);
      lVar62 = lVar62 + (ulong)((byte)uVar6 & 1);
      lVar63 = lVar63 + (ulong)((byte)(uVar6 >> 0x20) & 1);
      lVar70 = lVar70 + (ulong)(auVar36[0xe] & 1);
      lVar71 = lVar71 + (ulong)(auVar36[0xf] & 1);
      lVar60 = lVar60 + (ulong)((byte)uVar10 & 1);
      lVar61 = lVar61 + (ulong)((byte)(uVar10 >> 0x20) & 1);
      lVar68 = lVar68 + (ulong)(auVar36[6] & 1);
      lVar69 = lVar69 + (ulong)(auVar36[7] & 1);
      lVar64 = lVar64 + (ulong)(auVar36[10] & 1);
      lVar65 = lVar65 + (ulong)(auVar36[0xb] & 1);
      lVar19 = lVar19 + (ulong)(auVar36[2] & 1);
      lVar24 = lVar24 + (ulong)(auVar36[3] & 1);
      lVar56 = lVar56 + (ulong)((byte)uVar9 & 1);
      lVar57 = lVar57 + (ulong)((byte)(uVar9 >> 0x20) & 1);
      lVar54 = lVar54 + (ulong)(auVar36[4] & 1);
      lVar55 = lVar55 + (ulong)(auVar36[5] & 1);
    } while (uVar20 != 0);
    lVar19 = lVar56 + lVar34 + lVar62 + lVar44 + lVar54 + lVar26 + lVar60 + lVar38 +
             lVar19 + lVar52 + lVar64 + lVar50 + lVar68 + lVar58 + lVar70 + lVar66 +
             lVar57 + lVar35 + lVar63 + lVar47 + lVar55 + lVar32 + lVar61 + lVar43 +
             lVar24 + lVar53 + lVar65 + lVar51 + lVar69 + lVar59 + lVar71 + lVar67;
    if (uVar15 != uVar22) {
      if ((uVar15 & 0x18) == 0) {
        pauVar16 = (undefined1 (*) [16])(*param_1 + uVar22);
        goto LAB_006ae74c;
      }
      goto LAB_006ae6b4;
    }
  }
  if ((0x3f < uVar13) && (pauVar17 <= pauVar14 + -4)) {
    auVar30[8] = 10;
    auVar30._0_8_ = 0xa0a0a0a0a0a0a0a;
    auVar30[9] = 10;
    auVar30[10] = 10;
    auVar30[0xb] = 10;
    auVar30[0xc] = 10;
    auVar30[0xd] = 10;
    auVar30[0xe] = 10;
    auVar30[0xf] = 10;
    do {
      auVar36 = *pauVar17;
      pauVar1 = pauVar17 + 1;
      pauVar16 = pauVar17 + 2;
      pauVar2 = pauVar17 + 3;
      pauVar17 = pauVar17 + 4;
      auVar36 = NEON_cmeq(auVar36,auVar30,1);
      auVar40 = NEON_cmeq(*pauVar1,auVar30,1);
      auVar46 = NEON_cmeq(*pauVar16,auVar30,1);
      auVar49 = NEON_cmeq(*pauVar2,auVar30,1);
      auVar37._0_8_ =
           CONCAT17((char)(auVar36._14_2_ >> 4),
                    CONCAT16((char)(auVar36._12_2_ >> 4),
                             CONCAT15((char)(auVar36._10_2_ >> 4),
                                      CONCAT14((char)(auVar36._8_2_ >> 4),
                                               CONCAT13((char)(auVar36._6_2_ >> 4),
                                                        CONCAT12((char)(auVar36._4_2_ >> 4),
                                                                 CONCAT11((char)(auVar36._2_2_ >> 4)
                                                                          ,(char)(auVar36._0_2_ >> 4
                                                                                 )))))))) &
           0x8888888888888888;
      auVar37[8] = (byte)(auVar40._0_2_ >> 4) & 0x88;
      auVar37[9] = (byte)(auVar40._2_2_ >> 4) & 0x88;
      auVar37[10] = (byte)(auVar40._4_2_ >> 4) & 0x88;
      auVar37[0xb] = (byte)(auVar40._6_2_ >> 4) & 0x88;
      auVar37[0xc] = (byte)(auVar40._8_2_ >> 4) & 0x88;
      auVar37[0xd] = (byte)(auVar40._10_2_ >> 4) & 0x88;
      auVar37[0xe] = (byte)(auVar40._12_2_ >> 4) & 0x88;
      auVar37[0xf] = (byte)(auVar40._14_2_ >> 4) & 0x88;
      auVar41._0_8_ =
           CONCAT17((char)(auVar46._14_2_ >> 4),
                    CONCAT16((char)(auVar46._12_2_ >> 4),
                             CONCAT15((char)(auVar46._10_2_ >> 4),
                                      CONCAT14((char)(auVar46._8_2_ >> 4),
                                               CONCAT13((char)(auVar46._6_2_ >> 4),
                                                        CONCAT12((char)(auVar46._4_2_ >> 4),
                                                                 CONCAT11((char)(auVar46._2_2_ >> 4)
                                                                          ,(char)(auVar46._0_2_ >> 4
                                                                                 )))))))) &
           0x8888888888888888;
      auVar41[8] = (byte)(auVar49._0_2_ >> 4) & 0x88;
      auVar41[9] = (byte)(auVar49._2_2_ >> 4) & 0x88;
      auVar41[10] = (byte)(auVar49._4_2_ >> 4) & 0x88;
      auVar41[0xb] = (byte)(auVar49._6_2_ >> 4) & 0x88;
      auVar41[0xc] = (byte)(auVar49._8_2_ >> 4) & 0x88;
      auVar41[0xd] = (byte)(auVar49._10_2_ >> 4) & 0x88;
      auVar41[0xe] = (byte)(auVar49._12_2_ >> 4) & 0x88;
      auVar41[0xf] = (byte)(auVar49._14_2_ >> 4) & 0x88;
      auVar36 = NEON_cnt(auVar37,1);
      auVar40 = NEON_cnt(auVar41,1);
      lVar19 = (ulong)((uint)(ushort)((ushort)auVar36[0] + (ushort)auVar36[1]) +
                      (uint)(ushort)((ushort)auVar36[2] + (ushort)auVar36[3])) +
               (ulong)((uint)(ushort)((ushort)auVar36[4] + (ushort)auVar36[5]) +
                      (uint)(ushort)((ushort)auVar36[6] + (ushort)auVar36[7])) +
               (ulong)((uint)(ushort)((ushort)auVar40[0] + (ushort)auVar40[1]) +
                      (uint)(ushort)((ushort)auVar40[2] + (ushort)auVar40[3])) +
               (ulong)((uint)(ushort)((ushort)auVar40[4] + (ushort)auVar40[5]) +
                      (uint)(ushort)((ushort)auVar40[6] + (ushort)auVar40[7])) +
               (ulong)((uint)(ushort)((ushort)auVar36[8] + (ushort)auVar36[9]) +
                      (uint)(ushort)((ushort)auVar36[10] + (ushort)auVar36[0xb])) +
               (ulong)((uint)(ushort)((ushort)auVar36[0xc] + (ushort)auVar36[0xd]) +
                      (uint)(ushort)((ushort)auVar36[0xe] + (ushort)auVar36[0xf])) +
               (ulong)((uint)(ushort)((ushort)auVar40[8] + (ushort)auVar40[9]) +
                      (uint)(ushort)((ushort)auVar40[10] + (ushort)auVar40[0xb])) +
               (ulong)((uint)(ushort)((ushort)auVar40[0xc] + (ushort)auVar40[0xd]) +
                      (uint)(ushort)((ushort)auVar40[0xe] + (ushort)auVar40[0xf])) + lVar19;
    } while (pauVar17 <= pauVar14 + -4);
  }
  if (pauVar17 <= pauVar14 + -1) {
    auVar31[8] = 10;
    auVar31._0_8_ = 0xa0a0a0a0a0a0a0a;
    auVar31[9] = 10;
    auVar31[10] = 10;
    auVar31[0xb] = 10;
    auVar31[0xc] = 10;
    auVar31[0xd] = 10;
    auVar31[0xe] = 10;
    auVar31[0xf] = 10;
    pauVar16 = pauVar17;
    do {
      pauVar17 = pauVar16 + 1;
      auVar36 = NEON_cmeq(*pauVar16,auVar31,1);
      uVar28 = NEON_cnt(CONCAT17((char)(auVar36._14_2_ >> 4),
                                 CONCAT16((char)(auVar36._12_2_ >> 4),
                                          CONCAT15((char)(auVar36._10_2_ >> 4),
                                                   CONCAT14((char)(auVar36._8_2_ >> 4),
                                                            CONCAT13((char)(auVar36._6_2_ >> 4),
                                                                     CONCAT12((char)(auVar36._4_2_
                                                                                    >> 4),
                                                                              CONCAT11((char)(
                                                  auVar36._2_2_ >> 4),(char)(auVar36._0_2_ >> 4)))))
                                                  ))) & 0x8888888888888888,1);
      uVar33 = NEON_addv(uVar28,1);
      lVar19 = CONCAT71((int7)((ulong)uVar28 >> 8),uVar33) + lVar19;
      pauVar16 = pauVar17;
    } while (pauVar17 <= pauVar14 + -1);
  }
  if (pauVar14 <= pauVar17) {
    lVar24 = 0;
    goto LAB_006aeb24;
  }
  puVar21 = (undefined1 *)((long)param_1 + (uVar13 - (long)pauVar17));
  if (puVar21 < (undefined1 *)0x8) {
    lVar24 = 0;
    pauVar16 = pauVar17;
  }
  else {
    if (puVar21 < (undefined1 *)0x20) {
      puVar23 = (undefined1 *)0x0;
      lVar24 = 0;
    }
    else {
      lVar24 = 0;
      lVar26 = 0;
      auVar42[8] = 10;
      auVar42._0_8_ = 0xa0a0a0a0a0a0a0a;
      auVar42[9] = 10;
      auVar42[10] = 10;
      auVar42[0xb] = 10;
      auVar42[0xc] = 10;
      auVar42[0xd] = 10;
      auVar42[0xe] = 10;
      auVar42[0xf] = 10;
      lVar35 = 0;
      lVar38 = 0;
      lVar53 = 0;
      lVar54 = 0;
      lVar32 = 0;
      lVar34 = 0;
      lVar59 = 0;
      lVar60 = 0;
      pauVar16 = pauVar17 + 1;
      lVar47 = 0;
      lVar50 = 0;
      lVar51 = 0;
      lVar52 = 0;
      uVar15 = (ulong)puVar21 & 0xffffffffffffffe0;
      lVar43 = 0;
      lVar44 = 0;
      lVar67 = 0;
      lVar68 = 0;
      lVar57 = 0;
      lVar58 = 0;
      lVar55 = 0;
      lVar56 = 0;
      lVar69 = 0;
      lVar70 = 0;
      lVar63 = 0;
      lVar64 = 0;
      lVar65 = 0;
      lVar66 = 0;
      lVar61 = 0;
      lVar62 = 0;
      lVar71 = 0;
      lVar72 = 0;
      puVar23 = (undefined1 *)((ulong)puVar21 & 0xffffffffffffffe0);
      do {
        pauVar1 = pauVar16 + -1;
        auVar36 = *pauVar16;
        uVar15 = uVar15 - 0x20;
        pauVar16 = pauVar16 + 2;
        auVar40 = NEON_cmeq(*pauVar1,auVar42,1);
        auVar36 = NEON_cmeq(auVar36,auVar42,1);
        uVar3 = CONCAT12(auVar40[9],auVar40._8_2_) & 0xff00ff;
        auVar11[10] = auVar40[5];
        auVar11._0_10_ = (unkuint10)auVar40[4] << 0x40;
        uVar5 = CONCAT12(auVar36[9],auVar36._8_2_) & 0xff00ff;
        uVar6 = (uint6)CONCAT14(auVar40[0xd],(uint)CONCAT12(auVar40[0xd],(ushort)auVar40[0xc])) &
                0xffff0000ffff;
        uVar7 = (uint6)CONCAT14((char)(uVar3 >> 0x10),(uint)uVar3) & 0xffff0000ffff;
        uVar8 = (uint6)CONCAT14(auVar40[5],(uint)auVar11._8_3_) & 0xffff0000ffff;
        lVar43 = lVar43 + (ulong)((byte)uVar6 & 1);
        lVar44 = lVar44 + (ulong)((byte)(uVar6 >> 0x20) & 1);
        lVar67 = lVar67 + (ulong)(auVar40[0xe] & 1);
        lVar68 = lVar68 + (ulong)(auVar40[0xf] & 1);
        uVar6 = (uint6)CONCAT14((char)(uVar5 >> 0x10),(uint)uVar5) & 0xffff0000ffff;
        lVar51 = lVar51 + (ulong)(auVar40[10] & 1);
        lVar52 = lVar52 + (ulong)(auVar40[0xb] & 1);
        uVar9 = (uint6)CONCAT14(auVar36[1],(uint)CONCAT12(auVar36[1],(ushort)auVar36[0])) &
                0xffff0000ffff;
        uVar10 = (uint6)CONCAT14(auVar36[0xd],(uint)CONCAT12(auVar36[0xd],(ushort)auVar36[0xc])) &
                 0xffff0000ffff;
        lVar59 = lVar59 + (ulong)(auVar40[6] & 1);
        lVar60 = lVar60 + (ulong)(auVar40[7] & 1);
        lVar47 = lVar47 + (ulong)((byte)uVar7 & 1);
        lVar50 = lVar50 + (ulong)((byte)(uVar7 >> 0x20) & 1);
        lVar32 = lVar32 + (ulong)((byte)uVar8 & 1);
        lVar34 = lVar34 + (ulong)((byte)(uVar8 >> 0x20) & 1);
        lVar53 = lVar53 + (ulong)(auVar40[2] & 1);
        lVar54 = lVar54 + (ulong)(auVar40[3] & 1);
        lVar35 = lVar35 + (ulong)(auVar40[0] & 1);
        lVar38 = lVar38 + (ulong)(auVar40[1] & 1);
        lVar63 = lVar63 + (ulong)((byte)uVar6 & 1);
        lVar64 = lVar64 + (ulong)((byte)(uVar6 >> 0x20) & 1);
        lVar71 = lVar71 + (ulong)(auVar36[0xe] & 1);
        lVar72 = lVar72 + (ulong)(auVar36[0xf] & 1);
        lVar61 = lVar61 + (ulong)((byte)uVar10 & 1);
        lVar62 = lVar62 + (ulong)((byte)(uVar10 >> 0x20) & 1);
        lVar69 = lVar69 + (ulong)(auVar36[6] & 1);
        lVar70 = lVar70 + (ulong)(auVar36[7] & 1);
        lVar65 = lVar65 + (ulong)(auVar36[10] & 1);
        lVar66 = lVar66 + (ulong)(auVar36[0xb] & 1);
        lVar24 = lVar24 + (ulong)(auVar36[2] & 1);
        lVar26 = lVar26 + (ulong)(auVar36[3] & 1);
        lVar57 = lVar57 + (ulong)((byte)uVar9 & 1);
        lVar58 = lVar58 + (ulong)((byte)(uVar9 >> 0x20) & 1);
        lVar55 = lVar55 + (ulong)(auVar36[4] & 1);
        lVar56 = lVar56 + (ulong)(auVar36[5] & 1);
      } while (uVar15 != 0);
      lVar24 = lVar57 + lVar35 + lVar63 + lVar47 + lVar55 + lVar32 + lVar61 + lVar43 +
               lVar24 + lVar53 + lVar65 + lVar51 + lVar69 + lVar59 + lVar71 + lVar67 +
               lVar58 + lVar38 + lVar64 + lVar50 + lVar56 + lVar34 + lVar62 + lVar44 +
               lVar26 + lVar54 + lVar66 + lVar52 + lVar70 + lVar60 + lVar72 + lVar68;
      if (puVar21 == puVar23) goto LAB_006aeb24;
      if (((ulong)puVar21 & 0x18) == 0) {
        pauVar16 = (undefined1 (*) [16])(*pauVar17 + (long)puVar23);
        goto LAB_006aeb10;
      }
    }
    lVar34 = 0;
    lVar35 = 0;
    lVar38 = 0;
    lVar43 = 0;
    lVar44 = 0;
    lVar47 = 0;
    lVar32 = 0;
    puVar25 = (undefined1 *)((ulong)puVar21 & 0xfffffffffffffff8);
    pauVar16 = (undefined1 (*) [16])(*pauVar17 + (long)puVar25);
    lVar26 = (long)puVar23 - (long)puVar25;
    puVar18 = (undefined8 *)(*pauVar17 + (long)puVar23);
    do {
      lVar26 = lVar26 + 8;
      uVar28 = NEON_cmeq(*puVar18,0xa0a0a0a0a0a0a0a,1);
      uVar3 = CONCAT12((char)((ulong)uVar28 >> 8),(short)uVar28) & 0xff00ff;
      uVar33 = (undefined1)((ulong)uVar28 >> 0x28);
      uVar6 = (uint6)CONCAT14(uVar33,(uint)CONCAT12(uVar33,(ushort)(byte)((ulong)uVar28 >> 0x20))) &
              0xffff0000ffff;
      uVar7 = (uint6)CONCAT14((char)(uVar3 >> 0x10),(uint)uVar3) & 0xffff0000ffff;
      lVar44 = lVar44 + (ulong)((byte)((ulong)uVar28 >> 0x30) & 1);
      lVar47 = lVar47 + (ulong)((byte)((ulong)uVar28 >> 0x38) & 0xff01);
      lVar38 = lVar38 + (ulong)((byte)((ulong)uVar28 >> 0x10) & 1);
      lVar43 = lVar43 + (ulong)((byte)((ulong)uVar28 >> 0x18) & 1);
      lVar24 = lVar24 + (ulong)((byte)uVar7 & 1);
      lVar32 = lVar32 + (ulong)((byte)(uVar7 >> 0x20) & 1);
      lVar34 = lVar34 + (ulong)((byte)uVar6 & 1);
      lVar35 = lVar35 + (ulong)((byte)(uVar6 >> 0x20) & 1);
      puVar18 = puVar18 + 1;
    } while (lVar26 != 0);
    lVar24 = lVar24 + lVar34 + lVar38 + lVar44 + lVar32 + lVar35 + lVar43 + lVar47;
    if (puVar21 == puVar25) goto LAB_006aeb24;
  }
LAB_006aeb10:
  do {
    puVar21 = *pauVar16;
    if ((*pauVar16)[0] == '\n') {
      lVar24 = lVar24 + 1;
    }
    pauVar16 = (undefined1 (*) [16])(puVar21 + 1);
  } while ((undefined1 (*) [16])(puVar21 + 1) != pauVar14);
LAB_006aeb24:
  auVar74._8_8_ = param_3 - uVar13;
  auVar74._0_8_ = lVar24 + lVar19 + 1;
  return auVar74;
}


// ===== 006aec24  FUN_006aec24 =====

void FUN_006aec24(long *param_1)

{
  byte bVar1;
  ulong uVar2;
  
  uVar2 = param_1[2];
  if (uVar2 < (ulong)param_1[1]) {
    do {
      bVar1 = *(byte *)(*param_1 + uVar2);
      if (bVar1 == 0x22) {
        return;
      }
      if (bVar1 == 0x5c) {
        return;
      }
      if (bVar1 < 0x20) {
        return;
      }
      uVar2 = uVar2 + 1;
      param_1[2] = uVar2;
    } while (param_1[1] != uVar2);
  }
  return;
}


// ===== 006aec64  <serde_json::read::SliceRead_as_serde_json::read::Read>::ignore_str =====

/* WARNING: Removing unreachable block (ram,0x006aedac) */
/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::read::SliceRead as serde_json::read::Read>::ignore_str */

undefined8 __rustcall
<serde_json::read::SliceRead_as_serde_json::read::Read>::ignore_str(long *param_1)

{
  byte *pbVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 uVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  undefined2 local_88;
  undefined8 local_80;
  undefined8 local_78 [3];
  
  FUN_006ae040(param_1,1);
  puVar8 = PTR_HEX0_0099f700;
  puVar7 = PTR_HEX1_0099f6f8;
  uVar14 = param_1[1];
  uVar10 = param_1[2];
  if (uVar10 != uVar14) {
    do {
      if (uVar14 <= uVar10) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check
                  (uVar10,uVar14,&PTR_s__home_runner__cargo_registry_src_009761c0);
      }
      lVar16 = *param_1;
      if (*(char *)(lVar16 + uVar10) != '\\') {
        if (*(char *)(lVar16 + uVar10) == '\"') {
          param_1[2] = uVar10 + 1;
          return 0;
        }
        local_78[0] = 0x10;
        goto LAB_006aee5c;
      }
      uVar15 = uVar10 + 1;
      param_1[2] = uVar15;
      if (uVar15 < uVar14) {
        bVar2 = *(byte *)(lVar16 + uVar15);
        uVar12 = (uint)bVar2;
        uVar15 = uVar10 + 2;
        param_1[2] = uVar15;
        uVar13 = bVar2 - 0x62;
        uVar9 = uVar12;
        if (0x13 < uVar13) goto LAB_006aed2c;
LAB_006aecc8:
        uVar12 = uVar9;
        if ((1 << (ulong)(uVar13 & 0x1f) & 0x51011U) == 0) {
          if (uVar13 != 0x13) goto LAB_006aed2c;
          if (uVar14 < uVar15) {
                    /* WARNING: Subroutine does not return */
            core::slice::index::slice_index_fail
                      (uVar15,uVar14,uVar14,&PTR_s__home_runner__cargo_registry_src_009761d8);
          }
          if (uVar14 - uVar15 < 4) {
            param_1[2] = uVar14;
            local_78[0] = 4;
          }
          else {
            pbVar1 = (byte *)(lVar16 + uVar15);
            uVar3 = *(ushort *)(puVar7 + (ulong)*pbVar1 * 2);
            uVar4 = *(ushort *)(puVar8 + (ulong)pbVar1[1] * 2);
            uVar5 = *(ushort *)(puVar7 + (ulong)pbVar1[2] * 2);
            uVar6 = *(ushort *)(puVar8 + (ulong)pbVar1[3] * 2);
            param_1[2] = uVar15 + 4;
            if (-1 < (short)(uVar4 | uVar3 | uVar5 | uVar6)) {
              local_88 = 0;
              goto LAB_006aecd4;
            }
            local_78[0] = 0xc;
          }
          FUN_006adf78(&local_88,param_1,local_78);
          if (local_88 == 1) {
            return local_80;
          }
        }
      }
      else {
        local_78[0] = 4;
        FUN_006adf0c(&local_88,param_1,local_78);
        if ((local_88 & 1) != 0) {
          return local_80;
        }
        uVar12 = (uint)local_88._1_1_;
        uVar13 = local_88._1_1_ - 0x62;
        uVar9 = (uint)local_88._1_1_;
        if (uVar13 < 0x14) goto LAB_006aecc8;
LAB_006aed2c:
        if ((0x3a < uVar12 - 0x22) ||
           ((1L << ((ulong)(uVar12 - 0x22) & 0x3f) & 0x400000000002001U) == 0)) {
          local_78[0] = 0xc;
          goto LAB_006aee5c;
        }
      }
LAB_006aecd4:
      FUN_006ae040(param_1,1);
      uVar14 = param_1[1];
      uVar10 = param_1[2];
    } while (uVar10 != uVar14);
  }
  local_78[0] = 4;
LAB_006aee5c:
  uVar11 = FUN_006adfe4(param_1,local_78);
  return uVar11;
}


// ===== 006aeea4  <serde_json::read::SliceRead_as_serde_json::read::Read>::parse_str_raw =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::read::SliceRead as serde_json::read::Read>::parse_str_raw */

void __rustcall
<serde_json::read::SliceRead_as_serde_json::read::Read>::parse_str_raw
          (undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 local_68 [3];
  
  do {
    uVar5 = param_2[2];
    FUN_006ae040(param_2,0);
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    if (uVar2 == uVar1) {
      local_68[0] = 4;
LAB_006af03c:
      FUN_006ade40(param_1,param_2,local_68);
      return;
    }
    if (uVar1 <= uVar2) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                (uVar2,uVar1,&PTR_s__home_runner__cargo_registry_src_00976118);
    }
    lVar6 = *param_2;
    if (*(char *)(lVar6 + uVar2) != '\\') {
      if (*(char *)(lVar6 + uVar2) == '\"') {
        lVar4 = param_3[2];
        if (lVar4 == 0) {
          if (uVar5 <= uVar2) {
            param_1[2] = uVar2 - uVar5;
            param_2[2] = uVar2 + 1;
            *param_1 = 0;
            param_1[1] = lVar6 + uVar5;
            return;
          }
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (uVar5,uVar2,uVar1,&PTR_s__home_runner__cargo_registry_src_00976130);
        }
        uVar3 = uVar2 - uVar5;
        if (uVar5 <= uVar2) {
          if ((ulong)(*param_3 - lVar4) < uVar3) {
            FUN_006b1db8(param_3,lVar4,uVar3,1,1);
            lVar4 = param_3[2];
          }
          if (uVar2 != uVar5) {
            memcpy((void *)(param_3[1] + lVar4),(void *)(lVar6 + uVar5),uVar3);
            lVar4 = param_3[2];
          }
          lVar6 = param_3[1];
          param_3[2] = lVar4 + uVar3;
          param_2[2] = uVar2 + 1;
          *param_1 = 1;
          param_1[1] = lVar6;
          param_1[2] = lVar4 + uVar3;
          return;
        }
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (uVar5,uVar2,uVar1,&PTR_s__home_runner__cargo_registry_src_00976148);
      }
      param_2[2] = uVar2 + 1;
      local_68[0] = 0x10;
      goto LAB_006af03c;
    }
    uVar3 = uVar2 - uVar5;
    if (uVar2 < uVar5) {
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (uVar5,uVar2,uVar1,&PTR_s__home_runner__cargo_registry_src_00976160);
    }
    lVar4 = param_3[2];
    if ((ulong)(*param_3 - lVar4) < uVar3) {
      FUN_006b1db8(param_3,lVar4,uVar3,1,1);
      lVar4 = param_3[2];
    }
    if (uVar2 != uVar5) {
      memcpy((void *)(param_3[1] + lVar4),(void *)(lVar6 + uVar5),uVar3);
      lVar4 = param_3[2];
    }
    param_3[2] = lVar4 + uVar3;
    param_2[2] = uVar2 + 1;
    lVar6 = FUN_006ad5f0(param_2,0,param_3);
    if (lVar6 != 0) {
      *param_1 = 2;
      param_1[1] = lVar6;
      return;
    }
  } while( true );
}


// ===== 006af0e0  <serde_json::read::SliceRead_as_serde_json::read::Read>::peek_position =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::read::SliceRead as serde_json::read::Read>::peek_position */

void __rustcall
<serde_json::read::SliceRead_as_serde_json::read::Read>::peek_position(undefined8 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = param_1[1];
  uVar1 = uVar2;
  if (param_1[2] + 1 < uVar2) {
    uVar1 = param_1[2] + 1;
  }
  FUN_006ae320(*param_1,uVar2,uVar1);
  return;
}


// ===== 006af0f8  <serde_json::read::SliceRead_as_serde_json::read::Read>::position =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::read::SliceRead as serde_json::read::Read>::position */

void __rustcall
<serde_json::read::SliceRead_as_serde_json::read::Read>::position(undefined8 *param_1)

{
  FUN_006ae320(*param_1,param_1[1],param_1[2]);
  return;
}


// ===== 006af108  <serde_json::read::SliceRead_as_serde_json::read::Read>::parse_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::read::SliceRead as serde_json::read::Read>::parse_str */

void __rustcall
<serde_json::read::SliceRead_as_serde_json::read::Read>::parse_str
          (undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long local_90;
  undefined8 local_88;
  uint local_80 [2];
  long local_78;
  undefined8 uStack_70;
  undefined8 local_68 [3];
  
  do {
    uVar5 = param_2[2];
    FUN_006ae040(param_2,1);
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    if (uVar2 == uVar1) {
      local_68[0] = 4;
LAB_006af2dc:
      FUN_006ade40(param_1,param_2,local_68);
      return;
    }
    if (uVar1 <= uVar2) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                (uVar2,uVar1,&PTR_s__home_runner__cargo_registry_src_00976118);
    }
    lVar6 = *param_2;
    if (*(char *)(lVar6 + uVar2) != '\\') {
      if (*(char *)(lVar6 + uVar2) == '\"') {
        lVar4 = param_3[2];
        if (lVar4 == 0) {
          if (uVar2 < uVar5) {
                    /* WARNING: Subroutine does not return */
            core::slice::index::slice_index_fail
                      (uVar5,uVar2,uVar1,&PTR_s__home_runner__cargo_registry_src_00976130);
          }
          param_2[2] = uVar2 + 1;
          core::str::converts::from_utf8(local_80,lVar6 + uVar5,uVar2 - uVar5);
          if ((local_80[0] & 1) != 0) {
            local_68[0] = 0xf;
            FUN_006adea8(&local_90,param_2,local_68);
            local_78 = local_90;
            uStack_70 = local_88;
            if (local_90 == 0) goto LAB_006af354;
          }
          *param_1 = 0;
        }
        else {
          uVar3 = uVar2 - uVar5;
          if (uVar2 < uVar5) {
                    /* WARNING: Subroutine does not return */
            core::slice::index::slice_index_fail
                      (uVar5,uVar2,uVar1,&PTR_s__home_runner__cargo_registry_src_00976148);
          }
          if ((ulong)(*param_3 - lVar4) < uVar3) {
            FUN_006b1db8(param_3,lVar4,uVar3,1,1);
            lVar4 = param_3[2];
          }
          if (uVar2 != uVar5) {
            memcpy((void *)(param_3[1] + lVar4),(void *)(lVar6 + uVar5),uVar3);
            lVar4 = param_3[2];
          }
          lVar6 = param_3[1];
          param_2[2] = uVar2 + 1;
          param_3[2] = lVar4 + uVar3;
          core::str::converts::from_utf8(local_80,lVar6);
          if ((local_80[0] & 1) != 0) {
            local_68[0] = 0xf;
            FUN_006adea8(&local_90,param_2,local_68);
            local_78 = local_90;
            uStack_70 = local_88;
            if (local_90 == 0) {
LAB_006af354:
              *param_1 = 2;
              param_1[1] = local_88;
              return;
            }
          }
          *param_1 = 1;
        }
        param_1[1] = local_78;
        param_1[2] = uStack_70;
        return;
      }
      param_2[2] = uVar2 + 1;
      local_68[0] = 0x10;
      goto LAB_006af2dc;
    }
    uVar3 = uVar2 - uVar5;
    if (uVar2 < uVar5) {
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (uVar5,uVar2,uVar1,&PTR_s__home_runner__cargo_registry_src_00976160);
    }
    lVar4 = param_3[2];
    if ((ulong)(*param_3 - lVar4) < uVar3) {
      FUN_006b1db8(param_3,lVar4,uVar3,1,1);
      lVar4 = param_3[2];
    }
    if (uVar2 != uVar5) {
      memcpy((void *)(param_3[1] + lVar4),(void *)(lVar6 + uVar5),uVar3);
      lVar4 = param_3[2];
    }
    param_3[2] = lVar4 + uVar3;
    param_2[2] = uVar2 + 1;
    lVar6 = FUN_006ad5f0(param_2,1,param_3);
    if (lVar6 != 0) {
      *param_1 = 2;
      param_1[1] = lVar6;
      return;
    }
  } while( true );
}


// ===== 006af3c8  <serde_json::read::StrRead_as_serde_json::read::Read>::ignore_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::read::StrRead as serde_json::read::Read>::ignore_str */

void __rustcall <serde_json::read::StrRead_as_serde_json::read::Read>::ignore_str(void)

{
  (*(code *)PTR_ignore_str_009a1308)();
  return;
}


// ===== 006af3cc  <serde_json::read::StrRead_as_serde_json::read::Read>::parse_str_raw =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::read::StrRead as serde_json::read::Read>::parse_str_raw */

void __rustcall <serde_json::read::StrRead_as_serde_json::read::Read>::parse_str_raw(void)

{
  (*(code *)PTR_parse_str_raw_009a1310)();
  return;
}


// ===== 006af3d0  <serde_json::read::StrRead_as_serde_json::read::Read>::peek_position =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::read::StrRead as serde_json::read::Read>::peek_position */

void __rustcall
<serde_json::read::StrRead_as_serde_json::read::Read>::peek_position(undefined8 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = param_1[1];
  uVar1 = uVar2;
  if (param_1[2] + 1 < uVar2) {
    uVar1 = param_1[2] + 1;
  }
  FUN_006ae320(*param_1,uVar2,uVar1);
  return;
}


// ===== 006af3e8  <serde_json::read::StrRead_as_serde_json::read::Read>::decode_hex_escape =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::read::StrRead as serde_json::read::Read>::decode_hex_escape */

void __rustcall
<serde_json::read::StrRead_as_serde_json::read::Read>::decode_hex_escape
          (undefined2 *param_1,long *param_2)

{
  byte *pbVar1;
  ulong uVar2;
  ulong uVar3;
  ushort uVar4;
  ushort uVar5;
  short sVar6;
  short sVar7;
  uint uVar8;
  undefined8 local_28 [3];
  
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  if (uVar2 < uVar3) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (uVar3,uVar2,uVar2,&PTR_s__home_runner__cargo_registry_src_009761d8);
  }
  if (uVar2 - uVar3 < 4) {
    param_2[2] = uVar2;
    local_28[0] = 4;
  }
  else {
    pbVar1 = (byte *)(*param_2 + uVar3);
    uVar4 = *(ushort *)(PTR_HEX1_0099f6f8 + (ulong)*pbVar1 * 2);
    uVar5 = *(ushort *)(PTR_HEX0_0099f700 + (ulong)pbVar1[1] * 2);
    sVar6 = *(short *)(PTR_HEX1_0099f6f8 + (ulong)pbVar1[2] * 2);
    sVar7 = *(short *)(PTR_HEX0_0099f700 + (ulong)pbVar1[3] * 2);
    param_2[2] = uVar3 + 4;
    uVar8 = (int)sVar6 | (int)(short)(uVar5 | uVar4) << 8 | (int)sVar7;
    if (-1 < (int)uVar8) {
      param_1[1] = (short)uVar8;
      *param_1 = 0;
      return;
    }
    local_28[0] = 0xc;
  }
  FUN_006adf78(param_1,param_2,local_28);
  return;
}


// ===== 006af4b0  <serde_json::read::StrRead_as_serde_json::read::Read>::position =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::read::StrRead as serde_json::read::Read>::position */

void __rustcall <serde_json::read::StrRead_as_serde_json::read::Read>::position(undefined8 *param_1)

{
  FUN_006ae320(*param_1,param_1[1],param_1[2]);
  return;
}


// ===== 006af4c0  <serde_json::read::StrRead_as_serde_json::read::Read>::parse_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::read::StrRead as serde_json::read::Read>::parse_str */

void __rustcall
<serde_json::read::StrRead_as_serde_json::read::Read>::parse_str
          (undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 local_68 [3];
  
  do {
    uVar5 = param_2[2];
    FUN_006ae040(param_2,1);
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    if (uVar2 == uVar1) {
      local_68[0] = 4;
LAB_006af658:
      FUN_006ade40(param_1,param_2,local_68);
      return;
    }
    if (uVar1 <= uVar2) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                (uVar2,uVar1,&PTR_s__home_runner__cargo_registry_src_00976118);
    }
    lVar6 = *param_2;
    if (*(char *)(lVar6 + uVar2) != '\\') {
      if (*(char *)(lVar6 + uVar2) == '\"') {
        lVar4 = param_3[2];
        if (lVar4 == 0) {
          if (uVar5 <= uVar2) {
            param_1[2] = uVar2 - uVar5;
            param_2[2] = uVar2 + 1;
            *param_1 = 0;
            param_1[1] = lVar6 + uVar5;
            return;
          }
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (uVar5,uVar2,uVar1,&PTR_s__home_runner__cargo_registry_src_00976130);
        }
        uVar3 = uVar2 - uVar5;
        if (uVar5 <= uVar2) {
          if ((ulong)(*param_3 - lVar4) < uVar3) {
            FUN_006b1db8(param_3,lVar4,uVar3,1,1);
            lVar4 = param_3[2];
          }
          if (uVar2 != uVar5) {
            memcpy((void *)(param_3[1] + lVar4),(void *)(lVar6 + uVar5),uVar3);
            lVar4 = param_3[2];
          }
          lVar6 = param_3[1];
          param_3[2] = lVar4 + uVar3;
          param_2[2] = uVar2 + 1;
          *param_1 = 1;
          param_1[1] = lVar6;
          param_1[2] = lVar4 + uVar3;
          return;
        }
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (uVar5,uVar2,uVar1,&PTR_s__home_runner__cargo_registry_src_00976148);
      }
      param_2[2] = uVar2 + 1;
      local_68[0] = 0x10;
      goto LAB_006af658;
    }
    uVar3 = uVar2 - uVar5;
    if (uVar2 < uVar5) {
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (uVar5,uVar2,uVar1,&PTR_s__home_runner__cargo_registry_src_00976160);
    }
    lVar4 = param_3[2];
    if ((ulong)(*param_3 - lVar4) < uVar3) {
      FUN_006b1db8(param_3,lVar4,uVar3,1,1);
      lVar4 = param_3[2];
    }
    if (uVar2 != uVar5) {
      memcpy((void *)(param_3[1] + lVar4),(void *)(lVar6 + uVar5),uVar3);
      lVar4 = param_3[2];
    }
    param_3[2] = lVar4 + uVar3;
    param_2[2] = uVar2 + 1;
    lVar6 = FUN_006ad5f0(param_2,1,param_3);
    if (lVar6 != 0) {
      *param_1 = 2;
      param_1[1] = lVar6;
      return;
    }
  } while( true );
}


// ===== 006af6fc  FUN_006af6fc =====

void FUN_006af6fc(long *param_1)

{
  long lVar1;
  ulong local_58 [3];
  long local_40;
  ulong local_38;
  undefined8 local_30;
  long lStack_28;
  long local_20;
  long local_18;
  
  if (*param_1 != 0) {
    FUN_006af834(param_1[1]);
    return;
  }
  lVar1 = param_1[1];
  if (lVar1 == 0) {
    local_18 = 0;
  }
  else {
    local_40 = param_1[2];
    local_18 = param_1[3];
    local_58[1] = 0;
    local_30 = 0;
    local_58[2] = lVar1;
    lStack_28 = lVar1;
    local_20 = local_40;
  }
  local_58[0] = (ulong)(lVar1 != 0);
  local_38 = local_58[0];
  FUN_006b41fc(local_58);
  return;
}


// ===== 006af760  FUN_006af760 =====

void FUN_006af760(char *param_1)

{
  if (*param_1 != -1) {
    FUN_006af95c();
    return;
  }
  FUN_006af834(*(undefined8 *)(param_1 + 8));
  return;
}


// ===== 006af778  FUN_006af778 =====

void FUN_006af778(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1[1];
  lVar3 = param_1[2] + 1;
  lVar2 = lVar1;
  while (lVar3 = lVar3 + -1, lVar3 != 0) {
                    /* try { // try from 006af7a8 to 006af7ab has its CatchHandler @ 006af7f0 */
    FUN_006b4318(lVar2);
    lVar2 = lVar2 + 0x20;
  }
  if (*param_1 != 0) {
    __rustc::__rust_dealloc(lVar1,*param_1 << 5,8);
    return;
  }
  return;
}


// ===== 006af834  FUN_006af834 =====

void FUN_006af834(long *param_1)

{
  ulong uVar1;
  long local_28;
  
  if (*param_1 == 1) {
    uVar1 = param_1[1] & 3;
    if ((1 < uVar1 - 2) && (uVar1 != 0)) {
      local_28 = param_1[1] - 1;
                    /* try { // try from 006af8a4 to 006af8ab has its CatchHandler @ 006af8cc */
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_28);
    }
  }
  else if ((*param_1 == 0) && (param_1[2] != 0)) {
    __rustc::__rust_dealloc(param_1[1],param_1[2],1);
  }
  __rustc::__rust_dealloc(param_1,0x28,8);
  return;
}


// ===== 006af8e8  FUN_006af8e8 =====

void FUN_006af8e8(long *param_1)

{
  ulong uVar1;
  long local_18;
  
  if (*param_1 == 0) {
    if (param_1[2] != 0) {
      __rustc::__rust_dealloc(param_1[1],param_1[2],1);
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


// ===== 006af95c  FUN_006af95c =====

void FUN_006af95c(byte *param_1)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  ulong local_88 [3];
  undefined8 local_70;
  ulong local_68;
  undefined8 local_60;
  long lStack_58;
  undefined8 local_50;
  undefined8 local_48;
  
  bVar2 = *param_1;
  if (2 < bVar2) {
    if (bVar2 == 3) {
      if (*(long *)(param_1 + 8) != 0) {
        __rustc::__rust_dealloc(*(undefined8 *)(param_1 + 0x10),*(long *)(param_1 + 8),1);
        return;
      }
    }
    else if (bVar2 == 4) {
      lVar1 = *(long *)(param_1 + 0x10);
      lVar4 = *(long *)(param_1 + 0x18) + 1;
      lVar3 = lVar1;
      while (lVar4 = lVar4 + -1, lVar4 != 0) {
                    /* try { // try from 006af9a8 to 006af9ab has its CatchHandler @ 006afa5c */
        FUN_006b4318(lVar3);
        lVar3 = lVar3 + 0x20;
      }
      if (*(long *)(param_1 + 8) != 0) {
        __rustc::__rust_dealloc(lVar1,*(long *)(param_1 + 8) << 5,8);
        return;
      }
    }
    else {
      lVar4 = *(long *)(param_1 + 8);
      if (lVar4 == 0) {
        local_48 = 0;
      }
      else {
        local_70 = *(undefined8 *)(param_1 + 0x10);
        local_48 = *(undefined8 *)(param_1 + 0x18);
        local_88[1] = 0;
        local_60 = 0;
        local_88[2] = lVar4;
        lStack_58 = lVar4;
        local_50 = local_70;
      }
      local_88[0] = (ulong)(lVar4 != 0);
      local_68 = local_88[0];
      FUN_006b41fc(local_88);
    }
  }
  return;
}


// ===== 006afaa0  FUN_006afaa0 =====

void FUN_006afaa0(undefined8 *param_1,long *param_2)

{
  byte bVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long local_158;
  undefined8 local_150;
  undefined8 local_148;
  long local_140;
  ulong uStack_138;
  ulong local_130;
  char local_128;
  ulong local_120;
  ulong uStack_118;
  long *local_110;
  undefined1 local_108;
  ulong local_100;
  ulong local_f8;
  ulong uStack_f0;
  ulong local_e8;
  ulong uStack_e0;
  ulong local_d8;
  ulong local_d0;
  ulong uStack_c8;
  ulong local_c0;
  ulong uStack_b8;
  undefined8 local_b0;
  ulong uStack_a8;
  ulong local_a0;
  ulong uStack_98;
  ulong local_90;
  undefined8 local_88;
  ulong uStack_80;
  ulong local_78;
  ulong local_70;
  undefined1 uStack_61;
  
  uStack_138 = param_2[1];
  local_140 = *param_2;
  local_130 = param_2[2];
  local_148 = 0;
  local_158 = 0;
  local_150 = 1;
  local_128 = -0x80;
  if (local_130 < uStack_138) {
    do {
      bVar1 = *(byte *)(local_140 + local_130);
      if ((0x20 < bVar1) || ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) == 0)) {
        if (bVar1 == 0x7b) {
          local_130 = local_130 + 1;
          local_128 = '\x7f';
          local_110 = &local_158;
          local_108 = 1;
          local_100 = 0;
          uStack_f0 = 0;
          goto LAB_006afb80;
        }
                    /* try { // try from 006afe78 to 006afe97 has its CatchHandler @ 006afec8 */
        uVar5 = FUN_006b1320(&local_158,&uStack_61);
        goto LAB_006afda0;
      }
      local_130 = local_130 + 1;
    } while (uStack_138 != local_130);
  }
  local_b0 = 5;
                    /* try { // try from 006afb38 to 006afb43 has its CatchHandler @ 006afec8 */
  uVar4 = FUN_006b0bac(&local_158,&local_b0);
  goto LAB_006afdac;
LAB_006afb80:
                    /* try { // try from 006afb80 to 006afbb3 has its CatchHandler @ 006afeec */
  FUN_006b0038(&local_b0,&local_110);
  plVar2 = local_110;
  uVar5 = uStack_a8;
  if ((char)local_b0 != '\x01') {
    if (local_b0._1_1_ != '\x01') {
      uStack_118 = uStack_f0;
      local_120 = local_f8;
      local_d0 = 0;
      uStack_c8 = local_100;
      goto LAB_006afce0;
    }
    FUN_006b48a4(&local_b0,local_110);
    uVar3 = local_a0;
    uVar7 = uStack_a8;
    uVar6 = local_b0;
    uVar5 = uStack_a8;
    if (local_b0 == 0xffffffffffffffff) goto joined_r0x006afcc0;
    uVar5 = plVar2[5];
    if ((ulong)plVar2[4] <= uVar5) {
LAB_006afc64:
      local_d0 = 3;
                    /* try { // try from 006afc6c to 006afc77 has its CatchHandler @ 006afeb0 */
      uVar5 = FUN_006b0bac(plVar2,&local_d0);
joined_r0x006afe00:
      if (uVar6 != 0) {
        __rustc::__rust_dealloc(uVar7,uVar6,1);
      }
      goto joined_r0x006afcc0;
    }
    while( true ) {
      bVar1 = *(byte *)(plVar2[3] + uVar5);
      if (0x3a < bVar1) goto LAB_006afe60;
      if ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) == 0) break;
      uVar5 = uVar5 + 1;
      plVar2[5] = uVar5;
      if (plVar2[4] == uVar5) goto LAB_006afc64;
    }
    if ((ulong)bVar1 != 0x3a) {
LAB_006afe60:
      local_d0 = 6;
                    /* try { // try from 006afe68 to 006afe73 has its CatchHandler @ 006afeb0 */
      uVar5 = FUN_006b0bac(plVar2,&local_d0);
      goto joined_r0x006afe00;
    }
    plVar2[5] = uVar5 + 1;
                    /* try { // try from 006afc10 to 006afc1b has its CatchHandler @ 006afed0 */
    FUN_006b01cc(&local_b0,plVar2);
    uVar5 = uStack_a8;
    if ((char)local_b0 == -1) goto joined_r0x006afe00;
    local_e8 = uVar6;
    uStack_e0 = uVar7;
    local_d8 = uVar3;
    uStack_c8 = uStack_a8;
    local_d0 = local_b0;
    uStack_b8 = uStack_98;
    local_c0 = local_a0;
                    /* try { // try from 006afc38 to 006afc5f has its CatchHandler @ 006afeec */
    FUN_006b4b64(&local_b0,&local_100,&local_e8,&local_d0);
    if ((char)local_b0 != -1) {
      FUN_006af95c(&local_b0);
    }
    goto LAB_006afb80;
  }
joined_r0x006afcc0:
  if (local_100 != 0) {
    uStack_a8 = 0;
    local_88 = 0;
    local_70 = uStack_f0;
    local_a0 = local_100;
    uStack_80 = local_100;
    local_78 = local_f8;
  }
  else {
    local_70 = 0;
  }
  local_b0 = (ulong)(local_100 != 0);
                    /* try { // try from 006afcd4 to 006afcdb has its CatchHandler @ 006afec8 */
  local_90 = local_b0;
  FUN_006b41fc(&local_b0);
  local_d0 = 1;
  uStack_c8 = uVar5;
LAB_006afce0:
  local_128 = local_128 + '\x01';
  uStack_b8 = uStack_118;
  local_c0 = local_120;
                    /* try { // try from 006afcf8 to 006afcff has its CatchHandler @ 006afeb4 */
  uVar6 = FUN_006b1be4(&local_158);
  uVar5 = uStack_c8;
  uStack_a8 = uStack_c8;
  local_b0 = local_d0;
  uStack_98 = uStack_b8;
  local_a0 = local_c0;
  local_90 = uVar6;
  if ((local_d0 & 1) == 0) {
    if (uVar6 == 0) {
      *param_1 = 0;
      param_1[3] = uStack_b8;
      param_1[2] = local_c0;
      param_1[1] = uStack_c8;
      if (local_130 < uStack_138) {
        uVar6 = param_1[2];
        uVar7 = param_1[3];
        do {
          if (0x20 < *(byte *)(local_140 + local_130) ||
              (1L << ((ulong)*(byte *)(local_140 + local_130) & 0x3f) & 0x100002600U) == 0) {
            local_b0 = 0x16;
                    /* try { // try from 006afe10 to 006afe1b has its CatchHandler @ 006afe9c */
            uVar4 = FUN_006b0bac(&local_158,&local_b0);
            *param_1 = 1;
            param_1[1] = uVar4;
            if (uVar5 == 0) {
              uVar7 = 0;
            }
            else {
              uStack_a8 = 0;
              local_a0 = uVar5;
              local_88 = 0;
              uStack_80 = uVar5;
              uStack_98 = uVar6;
              local_78 = uVar6;
            }
            local_b0 = (ulong)(uVar5 != 0);
                    /* try { // try from 006afe54 to 006afe5b has its CatchHandler @ 006afec8 */
            local_90 = local_b0;
            local_70 = uVar7;
            FUN_006b41fc(&local_b0);
            goto LAB_006afdb4;
          }
          local_130 = local_130 + 1;
        } while (uStack_138 != local_130);
      }
      *param_1 = 0;
      goto LAB_006afdb4;
    }
    FUN_006b4f94((ulong)&local_b0 | 8);
    uVar5 = uVar6;
  }
  else if (uVar6 != 0) {
                    /* try { // try from 006afd20 to 006afdab has its CatchHandler @ 006afec8 */
    FUN_006af834(uVar6);
  }
LAB_006afda0:
  uVar4 = FUN_006b2da0(uVar5,&local_158);
LAB_006afdac:
  *param_1 = 1;
  param_1[1] = uVar4;
LAB_006afdb4:
  if (local_158 != 0) {
    __rustc::__rust_dealloc(local_150,local_158,1);
  }
  return;
}


// ===== 006aff18  FUN_006aff18 =====

void FUN_006aff18(char *param_1,long *param_2)

{
  undefined8 uVar1;
  long local_98;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  ulong uStack_78;
  ulong local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_38 [3];
  
  uStack_78 = param_2[1];
  local_80 = *param_2;
  local_70 = param_2[2];
  local_98 = 0;
  local_90 = 1;
  local_88 = 0;
  local_68 = 0x80;
                    /* try { // try from 006aff50 to 006aff5b has its CatchHandler @ 006b0018 */
  FUN_006b01cc(param_1,&local_98);
  if (*param_1 != -1) {
    uStack_58 = *(undefined8 *)(param_1 + 8);
    local_60 = *(undefined8 *)param_1;
    uStack_48 = *(undefined8 *)(param_1 + 0x18);
    uStack_50 = *(undefined8 *)(param_1 + 0x10);
    if (local_70 < uStack_78) {
      do {
        if (0x20 < *(byte *)(local_80 + local_70) ||
            (1L << ((ulong)*(byte *)(local_80 + local_70) & 0x3f) & 0x100002600U) == 0) {
          local_38[0] = 0x16;
                    /* try { // try from 006affc0 to 006affcb has its CatchHandler @ 006b0004 */
          uVar1 = FUN_006b0bac(&local_98,local_38);
          *(undefined8 *)(param_1 + 8) = uVar1;
          *param_1 = -1;
                    /* try { // try from 006affd8 to 006affdf has its CatchHandler @ 006b0018 */
          FUN_006af95c(&local_60);
          break;
        }
        local_70 = local_70 + 1;
      } while (uStack_78 != local_70);
    }
  }
  if (local_98 != 0) {
    __rustc::__rust_dealloc(local_90,local_98,1);
  }
  return;
}


// ===== 006b0038  FUN_006b0038 =====

void FUN_006b0038(undefined1 *param_1,long *param_2)

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
            if (uVar5 < uVar1) goto LAB_006b0128;
            goto LAB_006b0150;
          }
          local_38[0] = 8;
        }
        else {
          *(undefined1 *)(param_2 + 1) = 0;
          if (bVar2 == 0x22) goto LAB_006b0160;
          local_38[0] = 0x11;
        }
        goto LAB_006b0094;
      }
      uVar5 = uVar5 + 1;
      *(ulong *)(lVar4 + 0x28) = uVar5;
    } while (uVar1 != uVar5);
  }
  local_38[0] = 3;
  goto LAB_006b0094;
  while( true ) {
    uVar5 = uVar5 + 1;
    *(ulong *)(lVar4 + 0x28) = uVar5;
    if (uVar1 == uVar5) break;
LAB_006b0128:
    bVar2 = *(byte *)(*(long *)(lVar4 + 0x18) + uVar5);
    if (0x22 < bVar2) {
LAB_006b017c:
      if (bVar2 == 0x7d) {
        local_38[0] = 0x15;
      }
      else {
        local_38[0] = 0x11;
      }
      uVar3 = FUN_006b0bac(lVar4,local_38);
      *(undefined8 *)(param_1 + 8) = uVar3;
      *param_1 = 1;
      return;
    }
    if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
      if ((ulong)bVar2 == 0x22) {
LAB_006b0160:
        param_1[1] = 1;
        *param_1 = 0;
        return;
      }
      goto LAB_006b017c;
    }
  }
LAB_006b0150:
  local_38[0] = 5;
LAB_006b0094:
  uVar3 = FUN_006b0bac(lVar4,local_38);
  *(undefined8 *)(param_1 + 8) = uVar3;
  *param_1 = 1;
  return;
}


// ===== 006b01cc  FUN_006b01cc =====

void FUN_006b01cc(char *param_1,long param_2)

{
  long *plVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  char cVar7;
  long lVar8;
  ulong extraout_x9;
  ulong extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  ulong extraout_x9_04;
  ulong extraout_x9_05;
  long extraout_x9_06;
  ulong uVar9;
  ulong extraout_x9_07;
  long extraout_x9_08;
  long lVar10;
  bool bVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  long *unaff_x22;
  long *unaff_x23;
  undefined1 *puVar16;
  undefined4 local_108;
  undefined2 local_104;
  long *local_100;
  long *plStack_f8;
  char local_f0;
  byte bStack_ef;
  undefined4 uStack_ee;
  undefined2 uStack_ea;
  long *plStack_e8;
  long *plStack_e0;
  long *local_d8;
  undefined8 local_d0;
  long *plStack_c8;
  long *local_c0;
  long *plStack_b8;
  long *local_b0;
  undefined4 uStack_a8;
  undefined3 uStack_a4;
  char local_a0;
  undefined7 uStack_9f;
  long *plStack_98;
  long *local_90;
  long *plStack_88;
  long *local_80;
  long *local_78;
  long *plStack_70;
  
  uVar6 = *(ulong *)(param_2 + 0x20);
  if (*(ulong *)(param_2 + 0x28) < uVar6) {
    lVar8 = *(ulong *)(param_2 + 0x28) + 5;
    plVar15 = (long *)(param_2 + 0x18);
    lVar10 = *plVar15;
    while (bVar3 = *(byte *)(lVar10 + lVar8 + -5),
          bVar3 < 0x21 && (1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) != 0) {
      lVar13 = lVar8 + -4;
      lVar8 = lVar8 + 1;
      *(long *)(param_2 + 0x28) = lVar13;
      if (lVar8 - uVar6 == 5) goto LAB_006b0250;
    }
    uVar12 = (uint)bVar3;
    if (bVar3 < 0x66) {
      if (bVar3 == 0x22) {
        *(long *)(param_2 + 0x28) = lVar8 + -4;
        *(undefined8 *)(param_2 + 0x10) = 0;
        <serde_json::read::StrRead_as_serde_json::read::Read>::parse_str(&local_d0,plVar15,param_2);
        if (local_d0 == 2) {
          *(long **)(param_1 + 8) = plStack_c8;
          goto LAB_006b07e0;
        }
        if ((long)local_c0 < 0) {
          uVar4 = 0;
LAB_006b07fc:
                    /* WARNING: Subroutine does not return */
          alloc::raw_vec::handle_error(uVar4,local_c0);
        }
        if (local_c0 == (long *)0x0) {
          plVar15 = (long *)0x0;
          unaff_x22 = (long *)0x1;
          lVar13 = extraout_x9_01;
        }
        else {
          __rustc::__rust_no_alloc_shim_is_unstable_v2();
          uVar4 = 1;
          unaff_x22 = (long *)__rustc::__rust_alloc(local_c0,1);
          if (unaff_x22 == (long *)0x0) goto LAB_006b07fc;
          memcpy(unaff_x22,plStack_c8,(size_t)local_c0);
          lVar13 = extraout_x9_06;
          plVar15 = local_c0;
        }
        local_f0 = '\x03';
        unaff_x23 = local_c0;
      }
      else {
        if (bVar3 != 0x2d) {
          if (uVar12 != 0x5b) goto LAB_006b056c;
          cVar7 = *(char *)(param_2 + 0x30) + -1;
          *(char *)(param_2 + 0x30) = cVar7;
          if (cVar7 == '\0') goto LAB_006b0914;
          uVar9 = lVar8 - 4;
          plStack_70 = (long *)0x0;
          *(ulong *)(param_2 + 0x28) = uVar9;
          local_80 = (long *)0x0;
          local_78 = (long *)&DAT_00000008;
          if (uVar6 <= uVar9) goto LAB_006b0488;
          bVar11 = true;
          goto LAB_006b0374;
        }
        *(long *)(param_2 + 0x28) = lVar8 + -4;
        FUN_006b0e14(&local_a0,param_2,0);
        lVar8 = CONCAT71(uStack_9f,local_a0);
        if (lVar8 == -1) goto LAB_006b07b4;
        unaff_x22 = plStack_98;
        if (lVar8 == 0) goto LAB_006b0808;
        lVar13 = extraout_x9_03;
        if (lVar8 != 1) {
          plVar15 = (long *)((ulong)plStack_98 >> 0x3f);
          local_f0 = '\x02';
          goto LAB_006b08c4;
        }
LAB_006b06ec:
        plVar15 = (long *)0x0;
        local_f0 = '\x02';
      }
LAB_006b08c4:
      cVar7 = (char)lVar13;
      goto LAB_006b09d8;
    }
    if (uVar12 == 0x73 || bVar3 < 0x73) {
      if (uVar12 != 0x66) {
        if (uVar12 != 0x6e) goto LAB_006b056c;
        uVar14 = lVar8 - 4;
        *(ulong *)(param_2 + 0x28) = uVar14;
        uVar9 = uVar14;
        if (uVar14 <= uVar6) {
          uVar9 = uVar6;
        }
        if (uVar14 < uVar6) {
          cVar7 = *(char *)(lVar10 + lVar8 + -4);
          *(ulong *)(param_2 + 0x28) = lVar8 - 3U;
          if (cVar7 == 'u') {
            if (lVar8 - 3U == uVar9) goto LAB_006b07c8;
            cVar7 = *(char *)(lVar10 + lVar8 + -3);
            *(ulong *)(param_2 + 0x28) = lVar8 - 2U;
            if (cVar7 == 'l') {
              if (lVar8 - 2U == uVar9) goto LAB_006b07c8;
              lVar13 = lVar8 + -1;
              cVar7 = *(char *)(lVar10 + lVar8 + -2);
              *(long *)(param_2 + 0x28) = lVar13;
              if (cVar7 == 'l') {
                local_f0 = '\0';
                goto LAB_006b08c4;
              }
            }
          }
          goto LAB_006b0904;
        }
        goto LAB_006b07c8;
      }
      uVar14 = lVar8 - 4;
      *(ulong *)(param_2 + 0x28) = uVar14;
      uVar9 = uVar14;
      if (uVar14 <= uVar6) {
        uVar9 = uVar6;
      }
      if (uVar6 <= uVar14) goto LAB_006b07c8;
      cVar7 = *(char *)(lVar10 + lVar8 + -4);
      *(ulong *)(param_2 + 0x28) = lVar8 - 3U;
      if (cVar7 == 'a') {
        if (lVar8 - 3U == uVar9) goto LAB_006b07c8;
        cVar7 = *(char *)(lVar10 + lVar8 + -3);
        *(ulong *)(param_2 + 0x28) = lVar8 - 2U;
        if (cVar7 == 'l') {
          if (lVar8 - 2U == uVar9) goto LAB_006b07c8;
          cVar7 = *(char *)(lVar10 + lVar8 + -2);
          *(ulong *)(param_2 + 0x28) = lVar8 - 1U;
          if (cVar7 == 's') {
            if (lVar8 - 1U == uVar9) goto LAB_006b07c8;
            cVar7 = *(char *)(lVar10 + lVar8 + -1);
            *(long *)(param_2 + 0x28) = lVar8;
            if (cVar7 == 'e') {
              cVar7 = '\0';
              local_f0 = '\x01';
              goto LAB_006b09d8;
            }
          }
        }
      }
    }
    else {
      if (uVar12 != 0x74) {
        if (uVar12 != 0x7b) {
LAB_006b056c:
          if (uVar12 - 0x30 < 10) {
            FUN_006b0e14(&local_a0,param_2,1);
            lVar8 = CONCAT71(uStack_9f,local_a0);
            if (lVar8 == -1) {
LAB_006b07b4:
              *param_1 = -1;
              *(long **)(param_1 + 8) = plStack_98;
              return;
            }
            lVar13 = extraout_x9_02;
            unaff_x22 = plStack_98;
            if (lVar8 == 2) {
              plVar15 = (long *)((ulong)plStack_98 >> 0x3f);
              local_f0 = '\x02';
            }
            else {
              if (lVar8 == 1) goto LAB_006b06ec;
LAB_006b0808:
              lVar13 = 0x7fefffffffffffff;
              if (((ulong)unaff_x22 & 0x7fffffffffffffff) < 0x7ff0000000000000) {
                local_d0 = local_d0 & 0xffffffffffffff00;
                FUN_006af95c(&local_d0);
                local_f0 = '\x02';
                lVar13 = extraout_x9_08;
              }
              else {
                local_f0 = '\0';
              }
              plVar15 = (long *)&DAT_00000002;
            }
            goto LAB_006b08c4;
          }
          local_d0 = 10;
          plVar15 = (long *)FUN_006b0bac(param_2,&local_d0);
          goto LAB_006b0a18;
        }
        cVar7 = *(char *)(param_2 + 0x30) + -1;
        *(char *)(param_2 + 0x30) = cVar7;
        if (cVar7 == '\0') {
LAB_006b0914:
          local_d0 = 0x18;
          goto LAB_006b0254;
        }
        *(long *)(param_2 + 0x28) = lVar8 + -4;
        FUN_006b44e4(&local_f0,param_2,1);
        *(char *)(param_2 + 0x30) = *(char *)(param_2 + 0x30) + '\x01';
                    /* try { // try from 006b0508 to 006b050f has its CatchHandler @ 006b0ae4 */
        plVar15 = (long *)FUN_006b1be4(param_2);
        local_d0 = CONCAT26(uStack_ea,CONCAT42(uStack_ee,CONCAT11(bStack_ef,local_f0)));
        plStack_c8 = plStack_e8;
        plStack_b8 = local_d8;
        local_c0 = plStack_e0;
        local_b0 = plVar15;
        if (local_f0 == -1) {
          uVar9 = extraout_x9;
          if (plVar15 != (long *)0x0) {
            FUN_006af834();
            uVar9 = extraout_x9_05;
          }
        }
        else {
          local_100 = plStack_e0;
          plStack_f8 = local_d8;
          if (plVar15 == (long *)0x0) goto LAB_006b09c8;
          FUN_006af95c(&local_d0);
          uVar9 = extraout_x9_00;
          plStack_e8 = plVar15;
        }
        local_f0 = -1;
        plVar15 = plStack_e8;
        goto LAB_006b09d0;
      }
      uVar14 = lVar8 - 4;
      *(ulong *)(param_2 + 0x28) = uVar14;
      uVar9 = uVar14;
      if (uVar14 <= uVar6) {
        uVar9 = uVar6;
      }
      if (uVar6 <= uVar14) {
LAB_006b07c8:
        local_d0 = 5;
        goto LAB_006b07cc;
      }
      cVar7 = *(char *)(lVar10 + lVar8 + -4);
      *(ulong *)(param_2 + 0x28) = lVar8 - 3U;
      if (cVar7 != 'r') goto LAB_006b0904;
      if (lVar8 - 3U == uVar9) goto LAB_006b07c8;
      cVar7 = *(char *)(lVar10 + lVar8 + -3);
      *(ulong *)(param_2 + 0x28) = lVar8 - 2U;
      if (cVar7 == 'u') {
        if (lVar8 - 2U == uVar9) goto LAB_006b07c8;
        cVar7 = *(char *)(lVar10 + lVar8 + -2);
        *(long *)(param_2 + 0x28) = lVar8 + -1;
        if (cVar7 == 'e') {
          cVar7 = '\x01';
          local_f0 = '\x01';
          goto LAB_006b09d8;
        }
      }
    }
LAB_006b0904:
    local_d0 = 9;
LAB_006b07cc:
    uVar4 = FUN_006b1b88(param_2,&local_d0);
    *(undefined8 *)(param_1 + 8) = uVar4;
LAB_006b07e0:
    *param_1 = -1;
    return;
  }
LAB_006b0250:
  local_d0 = 5;
LAB_006b0254:
  uVar4 = FUN_006b0bac(param_2,&local_d0);
  goto LAB_006b0264;
LAB_006b0374:
  do {
    while( true ) {
      bVar3 = *(byte *)(*plVar15 + uVar9);
      if ((0x20 < bVar3) || ((1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) == 0)) break;
      uVar9 = uVar9 + 1;
      *(ulong *)(param_2 + 0x28) = uVar9;
      if (uVar6 == uVar9) goto LAB_006b0488;
    }
    if (bVar3 == 0x5d) {
      plStack_f8 = plStack_70;
      local_100 = local_78;
      local_f0 = '\x04';
      unaff_x22 = local_80;
      goto LAB_006b0718;
    }
    if (!bVar11) {
      if (bVar3 != 0x2c) {
        local_d0 = 7;
                    /* try { // try from 006b0a80 to 006b0aa3 has its CatchHandler @ 006b0ad0 */
        unaff_x22 = (long *)FUN_006b0bac(param_2,&local_d0);
        goto LAB_006b04a0;
      }
      uVar9 = uVar9 + 1;
      *(ulong *)(param_2 + 0x28) = uVar9;
      if (uVar6 <= uVar9) {
LAB_006b08ec:
        local_d0 = 5;
                    /* try { // try from 006b08f4 to 006b08ff has its CatchHandler @ 006b0ad0 */
        unaff_x22 = (long *)FUN_006b0bac(param_2,&local_d0);
        goto LAB_006b04a0;
      }
      while( true ) {
        bVar3 = *(byte *)(*plVar15 + uVar9);
        if ((0x20 < bVar3) || ((1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) == 0)) break;
        uVar9 = uVar9 + 1;
        *(ulong *)(param_2 + 0x28) = uVar9;
        if (uVar6 == uVar9) goto LAB_006b08ec;
      }
      if (bVar3 == 0x5d) {
        local_d0 = 0x15;
        unaff_x22 = (long *)FUN_006b0bac(param_2,&local_d0);
        goto LAB_006b04a0;
      }
    }
                    /* try { // try from 006b03fc to 006b0407 has its CatchHandler @ 006b0abc */
    FUN_006b01cc(&local_d0,param_2);
    plVar5 = plStack_70;
    unaff_x22 = plStack_c8;
    if ((char)local_d0 == -1) goto LAB_006b04a0;
    uVar2 = *(undefined4 *)((ulong)&local_d0 | 1);
    local_a0 = (char)local_d0;
    uStack_a4 = (undefined3)((uint)*(undefined4 *)((long)((ulong)&local_d0 | 1) + 3) >> 8);
    uStack_a8._3_1_ = (undefined1)((uint)uVar2 >> 0x18);
    *(undefined4 *)((ulong)&local_a0 | 1) = uVar2;
    plStack_88 = plStack_b8;
    local_90 = local_c0;
    *(uint *)((long)((ulong)&local_a0 | 1) + 3) = CONCAT31(uStack_a4,uStack_a8._3_1_);
    plStack_98 = plStack_c8;
    uStack_a8 = uVar2;
    if (plStack_70 == local_80) {
                    /* try { // try from 006b0454 to 006b045b has its CatchHandler @ 006b0aa8 */
      <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<serde_json::value::Value>>::grow_one(&local_80);
    }
    bVar11 = false;
    plStack_70 = (long *)((long)plVar5 + 1);
    plVar1 = local_78 + (long)plVar5 * 4;
    plVar1[1] = (long)plStack_98;
    *plVar1 = CONCAT71(uStack_9f,local_a0);
    plVar1[3] = (long)plStack_88;
    plVar1[2] = (long)local_90;
    uVar6 = *(ulong *)(param_2 + 0x20);
    uVar9 = *(ulong *)(param_2 + 0x28);
    unaff_x23 = plVar5;
  } while (uVar9 < uVar6);
LAB_006b0488:
  local_d0 = 2;
                    /* try { // try from 006b0490 to 006b049b has its CatchHandler @ 006b0ad0 */
  unaff_x22 = (long *)FUN_006b0bac(param_2,&local_d0);
LAB_006b04a0:
  puVar16 = (undefined1 *)((long)plStack_70 + 1);
  plVar5 = local_78;
  while (puVar16 = puVar16 + -1, puVar16 != (undefined1 *)0x0) {
    plVar5 = plVar5 + 4;
                    /* try { // try from 006b04b4 to 006b04b7 has its CatchHandler @ 006b0af8 */
    FUN_006b4318();
    unaff_x23 = plVar5;
  }
  if (local_80 != (long *)0x0) {
    __rustc::__rust_dealloc(local_78,(long)local_80 << 5,8);
  }
  uVar6 = *(ulong *)(param_2 + 0x20);
  uVar9 = *(ulong *)(param_2 + 0x28);
  local_f0 = -1;
LAB_006b0718:
  *(char *)(param_2 + 0x30) = *(char *)(param_2 + 0x30) + '\x01';
  plStack_88 = plStack_f8;
  local_90 = local_100;
  local_a0 = local_f0;
  plStack_98 = unaff_x22;
  if (uVar9 < uVar6) {
    do {
      bVar3 = *(byte *)(*plVar15 + uVar9);
      if (0x2c < bVar3) {
LAB_006b0988:
        if (bVar3 == 0x5d) {
          uVar9 = uVar9 + 1;
          *(ulong *)(param_2 + 0x28) = uVar9;
          plStack_b8 = plStack_f8;
          local_c0 = local_100;
          plVar15 = unaff_x22;
          local_d0 = CONCAT71(uStack_9f,local_f0);
          plStack_c8 = unaff_x22;
          if (local_f0 != -1) {
            local_d0._2_4_ = (undefined4)((uint7)uStack_9f >> 8);
            local_d0._1_1_ = (byte)uStack_9f;
            local_d0._6_2_ = (undefined2)((uint7)uStack_9f >> 0x28);
            uStack_ee = local_d0._2_4_;
            bStack_ef = local_d0._1_1_;
            uStack_ea = local_d0._6_2_;
LAB_006b09c8:
            uVar9 = (ulong)bStack_ef;
            plVar15 = plStack_c8;
            unaff_x22 = local_100;
            unaff_x23 = plStack_f8;
            local_108 = uStack_ee;
            local_104 = uStack_ea;
            local_c0 = local_100;
            plStack_b8 = plStack_f8;
          }
          goto LAB_006b09d0;
        }
        local_80 = (long *)0x16;
                    /* try { // try from 006b0a30 to 006b0a73 has its CatchHandler @ 006b0ac0 */
        plVar5 = (long *)FUN_006b0bac(param_2,&local_80);
        goto LAB_006b0788;
      }
      if ((1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) == 0) {
        if ((ulong)bVar3 != 0x2c) goto LAB_006b0988;
        uVar9 = uVar9 + 1;
        *(ulong *)(param_2 + 0x28) = uVar9;
        if (uVar9 < uVar6) goto LAB_006b095c;
        goto LAB_006b0a60;
      }
      uVar9 = uVar9 + 1;
      *(ulong *)(param_2 + 0x28) = uVar9;
    } while (uVar6 != uVar9);
  }
  local_80 = (long *)&DAT_00000002;
                    /* try { // try from 006b077c to 006b0787 has its CatchHandler @ 006b0ac0 */
  plVar5 = (long *)FUN_006b0bac(param_2,&local_80);
  goto LAB_006b0788;
  while( true ) {
    uVar9 = uVar9 + 1;
    *(ulong *)(param_2 + 0x28) = uVar9;
    if (uVar6 == uVar9) break;
LAB_006b095c:
    bVar3 = *(byte *)(*plVar15 + uVar9);
    if ((0x20 < bVar3) || ((1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) == 0)) {
      if (bVar3 == 0x5d) {
        local_80 = (long *)0x15;
        plVar5 = (long *)FUN_006b0bac(param_2,&local_80);
        goto LAB_006b0788;
      }
      break;
    }
  }
LAB_006b0a60:
  local_80 = (long *)0x16;
  plVar5 = (long *)FUN_006b0bac(param_2,&local_80);
LAB_006b0788:
  plVar15 = plStack_98;
  local_d0 = CONCAT71(uStack_9f,local_a0);
  plStack_c8 = plStack_98;
  plStack_b8 = plStack_88;
  local_c0 = local_90;
  local_b0 = plVar5;
  if (local_a0 == -1) {
    FUN_006af834(plVar5);
    local_f0 = -1;
    uVar9 = extraout_x9_07;
  }
  else {
    FUN_006af95c(&local_d0);
    local_f0 = -1;
    uVar9 = extraout_x9_04;
    plVar15 = plVar5;
  }
LAB_006b09d0:
  cVar7 = (char)uVar9;
  if (local_f0 == -1) {
LAB_006b0a18:
    uVar4 = FUN_006b2da0(plVar15,param_2);
LAB_006b0264:
    *(undefined8 *)(param_1 + 8) = uVar4;
    *param_1 = -1;
  }
  else {
LAB_006b09d8:
    *param_1 = local_f0;
    param_1[1] = cVar7;
    *(undefined4 *)(param_1 + 2) = local_108;
    *(undefined2 *)(param_1 + 6) = local_104;
    *(long **)(param_1 + 8) = plVar15;
    *(long **)(param_1 + 0x10) = unaff_x22;
    *(long **)(param_1 + 0x18) = unaff_x23;
  }
  return;
}


// ===== 006b0b3c  <serde_json::de::[2]::serde_json::de::ParserNumber>::invalid_type =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::de::[2]::serde_json::de::ParserNumber>::invalid_type */

void __rustcall <serde_json::de::[2]::serde_json::de::ParserNumber>::invalid_type(long *param_1)

{
  undefined1 local_28 [8];
  long local_20;
  
  if (*param_1 != 0) {
    if (*param_1 == 1) {
      local_20 = param_1[1];
      local_28[0] = 1;
    }
    else {
      local_20 = param_1[1];
      local_28[0] = 2;
    }
    <serde_json::error::Error_as_serde_core::de::Error>::invalid_type(local_28);
    return;
  }
  local_20 = param_1[1];
  local_28[0] = 3;
  <serde_json::error::Error_as_serde_core::de::Error>::invalid_type(local_28);
  return;
}


// ===== 006b0bac  FUN_006b0bac =====

void FUN_006b0bac(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  uVar1 = uVar2;
  if (*(long *)(param_1 + 0x28) + 1U < uVar2) {
    uVar1 = *(long *)(param_1 + 0x28) + 1;
  }
                    /* try { // try from 006b0bd0 to 006b0bd3 has its CatchHandler @ 006b0bf4 */
  auVar3 = FUN_006ae320(*(undefined8 *)(param_1 + 0x18),uVar2,uVar1);
  <serde_json::error::[0]::serde_json::error::Error>::syntax(param_2,auVar3._0_8_,auVar3._8_8_);
  return;
}


// ===== 006b0c0c  FUN_006b0c0c =====

void FUN_006b0c0c(undefined8 *param_1,long param_2,int param_3,ulong param_4,ulong param_5)

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
          goto LAB_006b0de4;
        }
        uVar7 = (param_5 & 0xffffffff) - lVar8;
        if ((uVar9 | 0x20) == 0x65) {
          FUN_006b10dc();
          return;
        }
        goto LAB_006b0d08;
      }
      if ((0x1999999999999998 < param_4) &&
         ((param_4 != 0x1999999999999999 || (5 < (uVar5 & 0xff))))) {
        <serde_json::de::[3]::serde_json::de::Deserializer<serde_json::read::StrRead>>::
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
LAB_006b0d08:
      dVar10 = (double)param_4;
      uVar5 = (uint)uVar7;
      uVar9 = -uVar5;
      if (-1 < (int)uVar5) {
        uVar9 = uVar5;
      }
      while (0x134 < uVar9) {
        if (dVar10 == 0.0) goto LAB_006b0db4;
        iVar6 = (int)uVar7;
        if (-1 < iVar6) goto LAB_006b0d7c;
        dVar10 = dVar10 / DAT_003736a8;
        uVar5 = iVar6 + 0x134;
        uVar9 = uVar5;
        if ((int)uVar5 < 0) {
          uVar9 = -iVar6 - 0x134;
        }
        uVar7 = (ulong)uVar5;
      }
      if ((int)uVar5 < 0) {
        dVar10 = dVar10 / *(double *)(PTR_POW10_0099f468 + (ulong)uVar9 * 8);
      }
      else {
        dVar10 = dVar10 * *(double *)(PTR_POW10_0099f468 + (ulong)uVar9 * 8);
        if (ABS(dVar10) == INFINITY) {
LAB_006b0d7c:
          local_38[0] = 0xe;
          uVar4 = FUN_006b1b88(param_2,local_38);
          *param_1 = 1;
          param_1[1] = uVar4;
          return;
        }
      }
LAB_006b0db4:
      *param_1 = 0;
      if (param_3 == 0) {
        dVar10 = -dVar10;
      }
      param_1[1] = dVar10;
      return;
    }
  }
  local_38[0] = 5;
LAB_006b0de4:
  uVar4 = FUN_006b0bac(param_2,local_38);
  *param_1 = 1;
  param_1[1] = uVar4;
  return;
}


// ===== 006b0e14  FUN_006b0e14 =====

void FUN_006b0e14(ulong *param_1,long param_2,ulong param_3)

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
LAB_006b1084:
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
        uVar5 = FUN_006b0bac(param_2,&local_38);
        *param_1 = 0xffffffffffffffff;
        param_1[1] = uVar5;
        return;
      }
      if (bVar2 == 0x2e) {
        FUN_006b0c0c(&local_38,param_2,param_3,0,0);
      }
      else {
        if ((bVar2 != 0x45) && (bVar2 != 0x65)) goto LAB_006b1084;
        FUN_006b10dc(&local_38,param_2,param_3,0,0);
      }
      if (((uint)local_38 & 1) == 0) {
        *param_1 = 0;
        param_1[1] = local_30;
        return;
      }
LAB_006b1018:
      *param_1 = 0xffffffffffffffff;
      param_1[1] = local_30;
      return;
    }
    if (bVar2 - 0x31 < 9) {
      uVar6 = (ulong)uVar4 & 0xff;
      if (uVar5 < uVar1) {
        do {
          uVar4 = *(byte *)(lVar7 + uVar5) - 0x30;
          if (9 < uVar4) goto LAB_006b0f40;
          if ((0x1999999999999998 < uVar6) &&
             ((uVar6 != 0x1999999999999999 || (5 < (uVar4 & 0xff))))) {
            <serde_json::de::[3]::serde_json::de::Deserializer<serde_json::read::StrRead>>::
            parse_long_integer(&local_38,param_2,param_3 & 0xffffffff,uVar6);
            if (local_38 != 1) {
              *param_1 = 0;
              param_1[1] = local_30;
              return;
            }
            goto LAB_006b1018;
          }
          uVar6 = ((ulong)uVar4 & 0xff) + uVar6 * 10;
          uVar5 = uVar5 + 1;
          *(ulong *)(param_2 + 0x28) = uVar5;
        } while (uVar1 != uVar5);
      }
      else {
LAB_006b0f40:
        if (uVar5 < uVar1) {
          cVar3 = *(char *)(lVar7 + uVar5);
          if (cVar3 == '.') {
            FUN_006b0c0c(&local_38);
          }
          else {
            if ((cVar3 != 'E') && (cVar3 != 'e')) goto LAB_006b0f7c;
            FUN_006b10dc(&local_38);
          }
          if ((local_38 & 1) == 0) {
            *param_1 = 0;
            param_1[1] = local_30;
            return;
          }
          goto LAB_006b1018;
        }
      }
LAB_006b0f7c:
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
  uVar5 = FUN_006b1b88(param_2,&local_38);
  *param_1 = 0xffffffffffffffff;
  param_1[1] = uVar5;
  return;
}


// ===== 006b10dc  FUN_006b10dc =====

void FUN_006b10dc(undefined8 *param_1,long param_2,int param_3,ulong param_4,int param_5)

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
      if (cVar4 != '-') goto LAB_006b1130;
      iVar7 = 0;
    }
    uVar9 = lVar3 + 2;
    *(ulong *)(param_2 + 0x28) = uVar9;
  }
  else {
    iVar7 = 1;
  }
LAB_006b1130:
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
        if (dVar10 == 0.0) goto LAB_006b12c0;
        if (-1 < (int)uVar5) goto LAB_006b1280;
        dVar10 = dVar10 / DAT_003736a8;
        uVar8 = uVar5 + 0x134;
        iVar7 = -uVar5;
        uVar5 = uVar8;
        if ((int)uVar8 < 0) {
          uVar8 = iVar7 - 0x134;
        }
      }
      if ((int)uVar5 < 0) {
        dVar10 = dVar10 / *(double *)(PTR_POW10_0099f468 + (ulong)uVar8 * 8);
      }
      else {
        dVar10 = dVar10 * *(double *)(PTR_POW10_0099f468 + (ulong)uVar8 * 8);
        if (ABS(dVar10) == INFINITY) {
LAB_006b1280:
          local_38[0] = 0xe;
          uVar6 = FUN_006b1b88(param_2,local_38);
          param_1[1] = uVar6;
          *param_1 = 1;
          return;
        }
      }
LAB_006b12c0:
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
  uVar6 = FUN_006b1b88(param_2,local_38);
  *param_1 = 1;
  param_1[1] = uVar6;
  return;
}


// ===== 006b1320  FUN_006b1320 =====

undefined8 FUN_006b1320(long param_1,undefined8 param_2)

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
  long local_70;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  long local_50;
  undefined8 uStack_48;
  long local_38 [3];
  
  plVar7 = &local_70;
  uVar2 = *(ulong *)(param_1 + 0x20);
  uVar3 = *(ulong *)(param_1 + 0x28);
  if (uVar2 <= uVar3) goto LAB_006b165c;
  lVar9 = *(long *)(param_1 + 0x18);
  bVar4 = *(byte *)(lVar9 + uVar3);
  uVar10 = (uint)bVar4;
  if (0x65 < bVar4) {
    if (bVar4 < 0x74) {
      if (bVar4 == 0x66) {
        uVar1 = uVar3 + 1;
        *(ulong *)(param_1 + 0x28) = uVar1;
        if (uVar1 < uVar2) {
          cVar5 = *(char *)(lVar9 + uVar1);
          uVar1 = uVar3 + 2;
          *(ulong *)(param_1 + 0x28) = uVar1;
          if (cVar5 == 'a') {
            if (uVar2 == uVar1) goto LAB_006b14f4;
            cVar5 = *(char *)(lVar9 + uVar1);
            uVar1 = uVar3 + 3;
            *(ulong *)(param_1 + 0x28) = uVar1;
            if (cVar5 == 'l') {
              if (uVar1 == uVar2) goto LAB_006b14f4;
              cVar5 = *(char *)(lVar9 + uVar1);
              uVar1 = uVar3 + 4;
              *(ulong *)(param_1 + 0x28) = uVar1;
              if (cVar5 == 's') {
                if (uVar1 == uVar2) goto LAB_006b14f4;
                cVar5 = *(char *)(lVar9 + uVar1);
                *(ulong *)(param_1 + 0x28) = uVar3 + 5;
                if (cVar5 == 'e') {
                  local_38[0] = (ulong)local_38[0]._2_6_ << 0x10;
                  goto LAB_006b157c;
                }
              }
            }
          }
          goto LAB_006b159c;
        }
      }
      else {
        if (uVar10 != 0x6e) goto LAB_006b1618;
        uVar1 = uVar3 + 1;
        *(ulong *)(param_1 + 0x28) = uVar1;
        if (uVar1 < uVar2) {
          cVar5 = *(char *)(lVar9 + uVar1);
          uVar1 = uVar3 + 2;
          *(ulong *)(param_1 + 0x28) = uVar1;
          if (cVar5 == 'u') {
            if (uVar2 == uVar1) goto LAB_006b14f4;
            cVar5 = *(char *)(lVar9 + uVar1);
            uVar1 = uVar3 + 3;
            *(ulong *)(param_1 + 0x28) = uVar1;
            if (cVar5 == 'l') {
              if (uVar1 == uVar2) goto LAB_006b14f4;
              cVar5 = *(char *)(lVar9 + uVar1);
              *(ulong *)(param_1 + 0x28) = uVar3 + 4;
              if (cVar5 == 'l') {
                uVar8 = 7;
                goto LAB_006b1570;
              }
            }
          }
          goto LAB_006b159c;
        }
      }
    }
    else {
      if (uVar10 != 0x74) {
        if (bVar4 != 0x7b) {
LAB_006b1618:
          if (uVar10 - 0x30 < 10) {
            FUN_006b0e14(&local_60,param_1,1);
            if (local_60 == -1) {
              return local_58;
            }
            plVar7 = &local_60;
LAB_006b15d8:
            uVar6 = <serde_json::de::[2]::serde_json::de::ParserNumber>::invalid_type
                              (plVar7,param_2,&DAT_009761f0);
            uVar6 = FUN_006b2da0(uVar6,param_1);
            return uVar6;
          }
LAB_006b165c:
          local_38[0] = 10;
          uVar6 = FUN_006b0bac(param_1,local_38);
          uVar6 = FUN_006b2da0(uVar6,param_1);
          return uVar6;
        }
        uVar8 = 0xb;
        goto LAB_006b1570;
      }
      uVar1 = uVar3 + 1;
      *(ulong *)(param_1 + 0x28) = uVar1;
      if (uVar1 < uVar2) {
        cVar5 = *(char *)(lVar9 + uVar1);
        uVar1 = uVar3 + 2;
        *(ulong *)(param_1 + 0x28) = uVar1;
        if (cVar5 == 'r') {
          if (uVar2 == uVar1) goto LAB_006b14f4;
          cVar5 = *(char *)(lVar9 + uVar1);
          uVar1 = uVar3 + 3;
          *(ulong *)(param_1 + 0x28) = uVar1;
          if (cVar5 == 'u') {
            if (uVar1 == uVar2) goto LAB_006b14f4;
            cVar5 = *(char *)(lVar9 + uVar1);
            *(ulong *)(param_1 + 0x28) = uVar3 + 4;
            if (cVar5 == 'e') {
              local_38[0] = CONCAT62(local_38[0]._2_6_,0x100);
              goto LAB_006b157c;
            }
          }
        }
LAB_006b159c:
        local_38[0] = 9;
        goto LAB_006b14f8;
      }
    }
LAB_006b14f4:
    local_38[0] = 5;
LAB_006b14f8:
    uVar6 = FUN_006b1b88(param_1,local_38);
    return uVar6;
  }
  if (uVar10 == 0x22) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(ulong *)(param_1 + 0x28) = uVar3 + 1;
    <serde_json::read::StrRead_as_serde_json::read::Read>::parse_str(&local_50,param_1 + 0x18);
    if (local_50 == 2) {
      return uStack_48;
    }
    local_38[0] = CONCAT71(local_38[0]._1_7_,5);
    goto LAB_006b157c;
  }
  if (uVar10 == 0x2d) {
    *(ulong *)(param_1 + 0x28) = uVar3 + 1;
    FUN_006b0e14(&local_70,param_1,0);
    if (local_70 == -1) {
      return local_68;
    }
    goto LAB_006b15d8;
  }
  if (bVar4 != 0x5b) goto LAB_006b1618;
  uVar8 = 10;
LAB_006b1570:
  local_38[0] = CONCAT71(local_38[0]._1_7_,uVar8);
LAB_006b157c:
  uVar6 = <serde_json::error::Error_as_serde_core::de::Error>::invalid_type
                    (local_38,param_2,&DAT_009761f0);
  uVar6 = FUN_006b2da0(uVar6,param_1);
  return uVar6;
}


// ===== 006b1698  <serde_json::de::[3]::serde_json::de::Deserializer<serde_json::read::StrRead>>::parse_long_integer =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::de::[3]::serde_json::de::Deserializer<serde_json::read::StrRead>>::parse_long_integer
    */

void __rustcall
<serde_json::de::[3]::serde_json::de::Deserializer<serde_json::read::StrRead>>::parse_long_integer
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
          FUN_006b0c0c(param_1);
          return;
        }
        if ((bVar5 == 0x45) || (bVar5 == 0x65)) {
          FUN_006b10dc(param_1);
          return;
        }
        uVar8 = (uint)lVar9;
        uVar1 = -uVar8;
        if (-1 < (int)uVar8) {
          uVar1 = uVar8;
        }
        goto joined_r0x006b1774;
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
joined_r0x006b1774:
  dVar10 = (double)param_4;
  while (0x134 < uVar1) {
    if (dVar10 == 0.0) goto LAB_006b1804;
    if (-1 < (int)uVar8) goto LAB_006b17d0;
    dVar10 = dVar10 / DAT_003736a8;
    uVar1 = uVar8 + 0x134;
    iVar6 = -uVar8;
    uVar8 = uVar1;
    if ((int)uVar1 < 0) {
      uVar1 = iVar6 - 0x134;
    }
  }
  if ((int)uVar8 < 0) {
    dVar10 = dVar10 / *(double *)(PTR_POW10_0099f468 + (ulong)uVar1 * 8);
  }
  else {
    dVar10 = dVar10 * *(double *)(PTR_POW10_0099f468 + (ulong)uVar1 * 8);
    if (ABS(dVar10) == INFINITY) {
LAB_006b17d0:
      local_38[0] = 0xe;
      uVar7 = FUN_006b1b88(param_2,local_38);
      param_1[1] = uVar7;
      *param_1 = 1;
      return;
    }
  }
LAB_006b1804:
  if (param_3 == 0) {
    dVar10 = -dVar10;
  }
  param_1[1] = dVar10;
  *param_1 = 0;
  return;
}


// ===== 006b1828  <serde_json::de::[3]::serde_json::de::Deserializer<serde_json::read::StrRead>>::parse_decimal_overflow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::de::[3]::serde_json::de::Deserializer<serde_json::read::StrRead>>::parse_decimal_overflow
    */

void __rustcall
<serde_json::de::[3]::serde_json::de::Deserializer<serde_json::read::StrRead>>::
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
          FUN_006b10dc(param_1,param_2);
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
    if (dVar5 == 0.0) goto LAB_006b1944;
    if (-1 < (int)param_5) goto LAB_006b1910;
    dVar5 = dVar5 / DAT_003736a8;
    uVar4 = param_5 + 0x134;
    iVar1 = -param_5;
    param_5 = uVar4;
    if ((int)uVar4 < 0) {
      uVar4 = iVar1 - 0x134;
    }
  }
  if ((int)param_5 < 0) {
    dVar5 = dVar5 / *(double *)(PTR_POW10_0099f468 + (ulong)uVar4 * 8);
  }
  else {
    dVar5 = dVar5 * *(double *)(PTR_POW10_0099f468 + (ulong)uVar4 * 8);
    if (ABS(dVar5) == INFINITY) {
LAB_006b1910:
      local_38[0] = 0xe;
      uVar2 = FUN_006b1b88(param_2,local_38);
      param_1[1] = uVar2;
      *param_1 = 1;
      return;
    }
  }
LAB_006b1944:
  if (param_3 == 0) {
    dVar5 = -dVar5;
  }
  param_1[1] = dVar5;
  *param_1 = 0;
  return;
}


// ===== 006b1968  FUN_006b1968 =====

void FUN_006b1968(long *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long local_58;
  long local_50;
  undefined8 local_48 [3];
  
  uVar4 = *(ulong *)(param_2 + 0x28);
  if (*(ulong *)(param_2 + 0x20) <= uVar4) {
    local_48[0] = 5;
    lVar1 = FUN_006b0bac(param_2,local_48);
    *param_1 = -1;
    param_1[1] = lVar1;
    return;
  }
  uVar2 = (uint)*(byte *)(*(long *)(param_2 + 0x18) + uVar4);
  if (uVar2 == 0x2d) {
    *(ulong *)(param_2 + 0x28) = uVar4 + 1;
    FUN_006b0e14(&local_58,param_2,0);
    uVar4 = *(ulong *)(param_2 + 0x20);
    uVar3 = *(ulong *)(param_2 + 0x28);
    if (uVar3 < uVar4) goto LAB_006b19f0;
  }
  else if (uVar2 - 0x30 < 10) {
    FUN_006b0e14(&local_58,param_2,1);
    uVar4 = *(ulong *)(param_2 + 0x20);
    uVar3 = *(ulong *)(param_2 + 0x28);
    if (uVar3 < uVar4) {
LAB_006b19f0:
      local_48[0] = 0xd;
                    /* try { // try from 006b19f8 to 006b1a03 has its CatchHandler @ 006b1ad0 */
      lVar1 = FUN_006b0bac(param_2,local_48);
      goto LAB_006b1a04;
    }
  }
  else {
    local_48[0] = 0xd;
    local_50 = FUN_006b0bac(param_2,local_48);
    local_58 = -1;
    uVar4 = *(ulong *)(param_2 + 0x20);
    uVar3 = *(ulong *)(param_2 + 0x28);
    if (uVar3 < uVar4) goto LAB_006b19f0;
  }
  lVar1 = local_50;
  if (local_58 != -1) {
    *param_1 = local_58;
    param_1[1] = local_50;
    return;
  }
LAB_006b1a04:
                    /* try { // try from 006b1a04 to 006b1a0b has its CatchHandler @ 006b1ac0 */
  lVar1 = FUN_006b2da0(lVar1,param_2);
  *param_1 = -1;
  param_1[1] = lVar1;
  if ((uVar3 < uVar4) && (local_58 == -1)) {
    FUN_006af834(local_50);
  }
  return;
}


// ===== 006b1af4  <serde_json::de::[3]::serde_json::de::Deserializer<serde_json::read::StrRead>>::parse_exponent_overflow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::de::[3]::serde_json::de::Deserializer<serde_json::read::StrRead>>::parse_exponent_overflow
    */

void __rustcall
<serde_json::de::[3]::serde_json::de::Deserializer<serde_json::read::StrRead>>::
parse_exponent_overflow(undefined8 *param_1,long param_2,int param_3,uint param_4,int param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 auStack_28 [3];
  
  if (((param_4 & 1) == 0) && (param_5 != 0)) {
    auStack_28[0] = 0xe;
    uVar2 = FUN_006b1b88(param_2,auStack_28);
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


// ===== 006b1b88  FUN_006b1b88 =====

void FUN_006b1b88(long param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  
                    /* try { // try from 006b1ba0 to 006b1bab has its CatchHandler @ 006b1bcc */
  auVar1 = FUN_006ae320(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28));
  <serde_json::error::[0]::serde_json::error::Error>::syntax(param_2,auVar1._0_8_,auVar1._8_8_);
  return;
}


// ===== 006b1be4  FUN_006b1be4 =====

undefined8 FUN_006b1be4(long param_1)

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
LAB_006b1c60:
        if (bVar1 == 0x7d) {
          *(ulong *)(param_1 + 0x28) = uVar3 + 1;
          return 0;
        }
        local_28[0] = 0x16;
        goto LAB_006b1c38;
      }
      if ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) == 0) {
        if ((ulong)bVar1 != 0x2c) goto LAB_006b1c60;
        local_28[0] = 0x15;
        goto LAB_006b1c38;
      }
      uVar3 = uVar3 + 1;
      *(ulong *)(param_1 + 0x28) = uVar3;
    } while (*(ulong *)(param_1 + 0x20) != uVar3);
  }
  local_28[0] = 3;
LAB_006b1c38:
  uVar2 = FUN_006b0bac(param_1,local_28);
  return uVar2;
}


// ===== 006b1c8c  <alloc::io::error::core::io::error::Error>::new<serde_json::error::Error> =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::io::error::core::io::error::Error>::new<serde_json::error::Error> */

void __rustcall
<alloc::io::error::core::io::error::Error>::new<serde_json::error::Error>
          (undefined4 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined8 *)__rustc::__rust_alloc(8,8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_2;
    alloc::io::error::custom_owner_from_box(param_1,puVar1,&PTR_FUN_00976248);
    <core::io::error::repr::[0]::core::io::error::repr::Repr>::new_custom();
    return;
  }
                    /* try { // try from 006b1ce4 to 006b1cef has its CatchHandler @ 006b1cf4 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,8);
}


// ===== 006b1d0c  FUN_006b1d0c =====

void FUN_006b1d0c(undefined8 *param_1)

{
  ulong uVar1;
  long *plVar2;
  long local_28;
  
  plVar2 = (long *)*param_1;
  if (*plVar2 == 1) {
    uVar1 = plVar2[1] & 3;
    if (1 < uVar1 - 2 && uVar1 != 0) {
      local_28 = plVar2[1] - 1;
                    /* try { // try from 006b1d74 to 006b1d7b has its CatchHandler @ 006b1d9c */
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_28);
    }
  }
  else if ((*plVar2 == 0) && (plVar2[2] != 0)) {
    __rustc::__rust_dealloc(plVar2[1],plVar2[2],1);
  }
  __rustc::__rust_dealloc(plVar2,0x28,8);
  return;
}


// ===== 006b1db8  FUN_006b1db8 =====

void FUN_006b1db8(ulong *param_1,ulong param_2,ulong param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long local_38;
  ulong local_30;
  undefined8 uStack_28;
  
  if ((param_5 == 0) || (CARRY8(param_3,param_2))) {
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(0);
  }
  uVar3 = *param_1 * 2;
  uVar2 = param_3 + param_2;
  if (param_3 + param_2 <= uVar3) {
    uVar2 = uVar3;
  }
  uVar3 = 4;
  if (0x400 < param_5) {
    uVar3 = 1;
  }
  uVar1 = 8;
  if (param_5 != 1) {
    uVar1 = uVar3;
  }
  if (uVar2 <= uVar1) {
    uVar2 = uVar1;
  }
  FUN_006b24e0(&local_38,*param_1,param_1[1],uVar2,param_4);
  if (local_38 != 1) {
    *param_1 = uVar2;
    param_1[1] = local_30;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(local_30,uStack_28);
}


// ===== 006b1e50  FUN_006b1e50 =====

void FUN_006b1e50(long *param_1,undefined8 *param_2)

{
  bool bVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined2 *puVar10;
  undefined2 uStack_4a;
  undefined2 auStack_48 [8];
  undefined2 local_38 [12];
  
  uVar3 = *param_2;
  if (*param_1 == 0) {
    uVar7 = param_1[1];
    if (uVar7 >> 4 < 0x271) {
      lVar8 = 0x14;
    }
    else {
      lVar8 = 0x14;
      puVar10 = local_38 + 1;
      uVar5 = uVar7;
      do {
        lVar8 = lVar8 + -4;
        uVar7 = uVar5 / 10000;
        uVar6 = (int)uVar5 + (int)uVar7 * -10000;
        uVar2 = (uVar6 >> 2 & 0x3fff) / 0x19;
        puVar10[-1] = *(undefined2 *)
                       (
                       "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                       + (ulong)uVar2 * 2);
        *puVar10 = *(undefined2 *)
                    (
                    "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                    + ((ulong)(uVar6 + uVar2 * -100) & 0xffff) * 2);
        bVar1 = 99999999 < uVar5;
        puVar10 = puVar10 + -2;
        uVar5 = uVar7;
      } while (bVar1);
    }
    lVar9 = lVar8;
    if (99 < uVar7) {
      uVar6 = (uint)uVar7;
      lVar9 = lVar8 + -2;
      uVar2 = (uVar6 >> 2 & 0x3fff) / 0x19;
      uVar7 = (ulong)uVar2;
      *(undefined2 *)((long)&uStack_4a + lVar8) =
           *(undefined2 *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
            + ((ulong)(uVar6 + uVar2 * -100) & 0xffff) * 2);
    }
    if (uVar7 < 10) {
      lVar8 = lVar9 + -1;
      *(byte *)((long)&uStack_4a + lVar9 + 1) = (byte)uVar7 | 0x30;
    }
    else {
      lVar8 = lVar9 + -2;
      *(undefined2 *)((long)&uStack_4a + lVar9) =
           *(undefined2 *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
            + uVar7 * 2);
    }
    lVar8 = FUN_006ad434(uVar3,(long)auStack_48 + lVar8,0x14 - lVar8);
  }
  else if (*param_1 == 1) {
    uVar5 = param_1[1];
    uVar7 = -uVar5;
    if (-1 < (long)uVar5) {
      uVar7 = uVar5;
    }
    if (uVar7 >> 4 < 0x271) {
      lVar8 = 0x14;
    }
    else {
      lVar8 = 0x14;
      uVar4 = uVar7;
      puVar10 = local_38 + 1;
      do {
        lVar8 = lVar8 + -4;
        uVar7 = uVar4 / 10000;
        uVar6 = (int)uVar4 + (int)uVar7 * -10000;
        uVar2 = (uVar6 >> 2 & 0x3fff) / 0x19;
        puVar10[-1] = *(undefined2 *)
                       (
                       "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                       + (ulong)uVar2 * 2);
        *puVar10 = *(undefined2 *)
                    (
                    "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                    + ((ulong)(uVar6 + uVar2 * -100) & 0xffff) * 2);
        bVar1 = 99999999 < uVar4;
        uVar4 = uVar7;
        puVar10 = puVar10 + -2;
      } while (bVar1);
    }
    lVar9 = lVar8;
    if (99 < uVar7) {
      uVar6 = (uint)uVar7;
      lVar9 = lVar8 + -2;
      uVar2 = (uVar6 >> 2 & 0x3fff) / 0x19;
      uVar7 = (ulong)uVar2;
      *(undefined2 *)((long)&uStack_4a + lVar8) =
           *(undefined2 *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
            + ((ulong)(uVar6 + uVar2 * -100) & 0xffff) * 2);
    }
    if (uVar7 < 10) {
      lVar8 = lVar9 + -1;
      *(byte *)((long)&uStack_4a + lVar9 + 1) = (byte)uVar7 | 0x30;
    }
    else {
      lVar8 = lVar9 + -2;
      *(undefined2 *)((long)&uStack_4a + lVar9) =
           *(undefined2 *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
            + uVar7 * 2);
    }
    lVar9 = lVar8;
    if ((long)uVar5 < 0) {
      lVar9 = lVar8 + -1;
      *(undefined1 *)((long)&uStack_4a + lVar8 + 1) = 0x2d;
    }
    lVar8 = FUN_006ad434(uVar3,(long)auStack_48 + lVar9,0x14 - lVar9);
  }
  else {
    if (0x7fefffffffffffff < (param_1[1] & 0x7fffffffffffffffU)) {
      lVar8 = FUN_006ad434(uVar3,&DAT_00377358,4);
      if (lVar8 == 0) {
        return;
      }
      <serde_json::error::[0]::serde_json::error::Error>::io();
      return;
    }
    lVar8 = <f64_as_zmij::private::Sealed>::write_to_zmij_buffer(auStack_48);
    lVar8 = FUN_006ad434(uVar3,auStack_48,lVar8 - (long)auStack_48);
  }
  if (lVar8 == 0) {
    return;
  }
  <serde_json::error::[0]::serde_json::error::Error>::io();
  return;
}


// ===== 006b2164  FUN_006b2164 =====

void FUN_006b2164(long *param_1,undefined8 *param_2)

{
  bool bVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined2 *puVar10;
  undefined2 uStack_4a;
  undefined2 auStack_48 [8];
  undefined2 local_38 [12];
  
  uVar3 = *param_2;
  if (*param_1 == 0) {
    uVar7 = param_1[1];
    if (uVar7 >> 4 < 0x271) {
      lVar8 = 0x14;
    }
    else {
      lVar8 = 0x14;
      puVar10 = local_38 + 1;
      uVar5 = uVar7;
      do {
        lVar8 = lVar8 + -4;
        uVar7 = uVar5 / 10000;
        uVar6 = (int)uVar5 + (int)uVar7 * -10000;
        uVar2 = (uVar6 >> 2 & 0x3fff) / 0x19;
        puVar10[-1] = *(undefined2 *)
                       (
                       "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                       + (ulong)uVar2 * 2);
        *puVar10 = *(undefined2 *)
                    (
                    "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                    + ((ulong)(uVar6 + uVar2 * -100) & 0xffff) * 2);
        bVar1 = 99999999 < uVar5;
        puVar10 = puVar10 + -2;
        uVar5 = uVar7;
      } while (bVar1);
    }
    lVar9 = lVar8;
    if (99 < uVar7) {
      uVar6 = (uint)uVar7;
      lVar9 = lVar8 + -2;
      uVar2 = (uVar6 >> 2 & 0x3fff) / 0x19;
      uVar7 = (ulong)uVar2;
      *(undefined2 *)((long)&uStack_4a + lVar8) =
           *(undefined2 *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
            + ((ulong)(uVar6 + uVar2 * -100) & 0xffff) * 2);
    }
    if (uVar7 < 10) {
      lVar8 = lVar9 + -1;
      *(byte *)((long)&uStack_4a + lVar9 + 1) = (byte)uVar7 | 0x30;
    }
    else {
      lVar8 = lVar9 + -2;
      *(undefined2 *)((long)&uStack_4a + lVar9) =
           *(undefined2 *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
            + uVar7 * 2);
    }
    lVar8 = FUN_006ad434(uVar3,(long)auStack_48 + lVar8,0x14 - lVar8);
  }
  else if (*param_1 == 1) {
    uVar5 = param_1[1];
    uVar7 = -uVar5;
    if (-1 < (long)uVar5) {
      uVar7 = uVar5;
    }
    if (uVar7 >> 4 < 0x271) {
      lVar8 = 0x14;
    }
    else {
      lVar8 = 0x14;
      uVar4 = uVar7;
      puVar10 = local_38 + 1;
      do {
        lVar8 = lVar8 + -4;
        uVar7 = uVar4 / 10000;
        uVar6 = (int)uVar4 + (int)uVar7 * -10000;
        uVar2 = (uVar6 >> 2 & 0x3fff) / 0x19;
        puVar10[-1] = *(undefined2 *)
                       (
                       "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                       + (ulong)uVar2 * 2);
        *puVar10 = *(undefined2 *)
                    (
                    "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                    + ((ulong)(uVar6 + uVar2 * -100) & 0xffff) * 2);
        bVar1 = 99999999 < uVar4;
        uVar4 = uVar7;
        puVar10 = puVar10 + -2;
      } while (bVar1);
    }
    lVar9 = lVar8;
    if (99 < uVar7) {
      uVar6 = (uint)uVar7;
      lVar9 = lVar8 + -2;
      uVar2 = (uVar6 >> 2 & 0x3fff) / 0x19;
      uVar7 = (ulong)uVar2;
      *(undefined2 *)((long)&uStack_4a + lVar8) =
           *(undefined2 *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
            + ((ulong)(uVar6 + uVar2 * -100) & 0xffff) * 2);
    }
    if (uVar7 < 10) {
      lVar8 = lVar9 + -1;
      *(byte *)((long)&uStack_4a + lVar9 + 1) = (byte)uVar7 | 0x30;
    }
    else {
      lVar8 = lVar9 + -2;
      *(undefined2 *)((long)&uStack_4a + lVar9) =
           *(undefined2 *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
            + uVar7 * 2);
    }
    lVar9 = lVar8;
    if ((long)uVar5 < 0) {
      lVar9 = lVar8 + -1;
      *(undefined1 *)((long)&uStack_4a + lVar8 + 1) = 0x2d;
    }
    lVar8 = FUN_006ad434(uVar3,(long)auStack_48 + lVar9,0x14 - lVar9);
  }
  else {
    if (0x7fefffffffffffff < (param_1[1] & 0x7fffffffffffffffU)) {
      lVar8 = FUN_006ad434(uVar3,&DAT_00377358,4);
      if (lVar8 == 0) {
        return;
      }
      <serde_json::error::[0]::serde_json::error::Error>::io();
      return;
    }
    lVar8 = <f64_as_zmij::private::Sealed>::write_to_zmij_buffer(auStack_48);
    lVar8 = FUN_006ad434(uVar3,auStack_48,lVar8 - (long)auStack_48);
  }
  if (lVar8 == 0) {
    return;
  }
  <serde_json::error::[0]::serde_json::error::Error>::io();
  return;
}


// ===== 006b2478  <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<serde_json::value::Value>>::grow_one =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<serde_json::value::Value>>::grow_one */

void __rustcall
<alloc::raw_vec::[4]::alloc::raw_vec::RawVec<serde_json::value::Value>>::grow_one(ulong *param_1)

{
  ulong uVar1;
  long local_38;
  ulong local_30;
  undefined8 uStack_28;
  
  uVar1 = *param_1 * 2;
  if (uVar1 < 5) {
    uVar1 = 4;
  }
  FUN_006b24e0(&local_38,*param_1,param_1[1],uVar1,8,0x20);
  if (local_38 != 1) {
    *param_1 = uVar1;
    param_1[1] = local_30;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(local_30,uStack_28);
}


// ===== 006b24e0  FUN_006b24e0 =====

void FUN_006b24e0(undefined8 *param_1,long param_2,undefined8 param_3,ulong param_4,long param_5,
                 ulong param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_6;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_4;
  lVar5 = 8;
  uVar3 = 1;
  uVar4 = 0;
  if ((SUB168(auVar1 * auVar2,8) != 0) ||
     (param_4 = param_6 * param_4,
     0x8000000000000000U - param_5 <= param_4 && param_4 - (0x8000000000000000U - param_5) != 0))
  goto LAB_006b257c;
  if (param_2 == 0) {
    lVar5 = param_5;
    if (param_4 != 0) {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      lVar5 = __rustc::__rust_alloc(param_4,param_5);
      if (lVar5 == 0) goto LAB_006b255c;
    }
LAB_006b256c:
    uVar3 = 0;
    param_1[1] = lVar5;
  }
  else {
    lVar5 = __rustc::__rust_realloc(param_3,param_6 * param_2,param_5,param_4);
    if (lVar5 != 0) goto LAB_006b256c;
LAB_006b255c:
    uVar3 = 1;
    param_1[1] = param_5;
  }
  lVar5 = 0x10;
  uVar4 = param_4;
LAB_006b257c:
  *(ulong *)((long)param_1 + lVar5) = uVar4;
  *param_1 = uVar3;
  return;
}


// ===== 006b2594  <<serde_json[b3499e235aa4f7be]::number::Number_as_serde_core[fd83d7a2bf1ac210]::de::Deserialize>::deserialize::NumberVisitor_as_serde_core[fd83d7a2bf1ac210]::de::Visitor>::expecting =====

/* <<serde_json[b3499e235aa4f7be]::number::Number as
   serde_core[fd83d7a2bf1ac210]::de::Deserialize>::deserialize::NumberVisitor as
   serde_core[fd83d7a2bf1ac210]::de::Visitor>::expecting */

void <<serde_json[b3499e235aa4f7be]::number::Number_as_serde_core[fd83d7a2bf1ac210]::de::Deserialize>::deserialize::NumberVisitor_as_serde_core[fd83d7a2bf1ac210]::de::Visitor>
     ::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"a JSON number",0xd);
  return;
}


// ===== 006b25a8  FUN_006b25a8 =====

void FUN_006b25a8(undefined8 *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Debug>::fmt(*param_1,param_1[1],param_2);
  return;
}


// ===== 006b25bc  FUN_006b25bc =====

void FUN_006b25bc(undefined8 *param_1)

{
  <serde_json::number::Number_as_core::fmt::Display>::fmt(*param_1);
  return;
}


// ===== 006b25c4  FUN_006b25c4 =====

void FUN_006b25c4(undefined8 *param_1)

{
  <bool_as_core::fmt::Display>::fmt(*param_1);
  return;
}


// ===== 006b25cc  FUN_006b25cc =====

void FUN_006b25cc(undefined8 *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt(*param_1,param_1[1],param_2);
  return;
}


// ===== 006b25e0  FUN_006b25e0 =====

void FUN_006b25e0(undefined8 *param_1)

{
  <usize_as_core::fmt::Display>::fmt(*param_1);
  return;
}


// ===== 006b25e8  <serde_json::number::Number_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::number::Number as core::fmt::Display>::fmt */

void __rustcall
<serde_json::number::Number_as_core::fmt::Display>::fmt(long *param_1,undefined8 param_2)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined2 *puVar9;
  undefined2 uStack_4a;
  undefined2 auStack_48 [8];
  undefined2 local_38 [12];
  
  if (*param_1 == 0) {
    uVar6 = param_1[1];
    if (uVar6 >> 4 < 0x271) {
      lVar7 = 0x14;
    }
    else {
      lVar7 = 0x14;
      uVar4 = uVar6;
      puVar9 = local_38 + 1;
      do {
        lVar7 = lVar7 + -4;
        uVar6 = uVar4 / 10000;
        uVar5 = (int)uVar4 + (int)uVar6 * -10000;
        uVar2 = (uVar5 >> 2 & 0x3fff) / 0x19;
        puVar9[-1] = *(undefined2 *)
                      (
                      "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                      + (ulong)uVar2 * 2);
        *puVar9 = *(undefined2 *)
                   (
                   "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                   + ((ulong)(uVar5 + uVar2 * -100) & 0xffff) * 2);
        bVar1 = 99999999 < uVar4;
        uVar4 = uVar6;
        puVar9 = puVar9 + -2;
      } while (bVar1);
    }
    lVar8 = lVar7;
    if (99 < uVar6) {
      uVar5 = (uint)uVar6;
      lVar8 = lVar7 + -2;
      uVar2 = (uVar5 >> 2 & 0x3fff) / 0x19;
      uVar6 = (ulong)uVar2;
      *(undefined2 *)((long)&uStack_4a + lVar7) =
           *(undefined2 *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
            + ((ulong)(uVar5 + uVar2 * -100) & 0xffff) * 2);
    }
    if (uVar6 < 10) {
      lVar7 = lVar8 + -1;
      *(byte *)((long)&uStack_4a + lVar8 + 1) = (byte)uVar6 | 0x30;
    }
    else {
      lVar7 = lVar8 + -2;
      *(undefined2 *)((long)&uStack_4a + lVar8) =
           *(undefined2 *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
            + uVar6 * 2);
    }
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,(long)auStack_48 + lVar7,0x14 - lVar7)
    ;
    return;
  }
  if (*param_1 != 1) {
    lVar7 = <f64_as_zmij::private::Sealed>::write_to_zmij_buffer(param_1[1],auStack_48);
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,auStack_48,lVar7 - (long)auStack_48);
    return;
  }
  uVar4 = param_1[1];
  uVar6 = -uVar4;
  if (-1 < (long)uVar4) {
    uVar6 = uVar4;
  }
  if (uVar6 >> 4 < 0x271) {
    lVar7 = 0x14;
  }
  else {
    lVar7 = 0x14;
    uVar3 = uVar6;
    puVar9 = local_38 + 1;
    do {
      lVar7 = lVar7 + -4;
      uVar6 = uVar3 / 10000;
      uVar5 = (int)uVar3 + (int)uVar6 * -10000;
      uVar2 = (uVar5 >> 2 & 0x3fff) / 0x19;
      puVar9[-1] = *(undefined2 *)
                    (
                    "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                    + (ulong)uVar2 * 2);
      *puVar9 = *(undefined2 *)
                 (
                 "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                 + ((ulong)(uVar5 + uVar2 * -100) & 0xffff) * 2);
      bVar1 = 99999999 < uVar3;
      uVar3 = uVar6;
      puVar9 = puVar9 + -2;
    } while (bVar1);
  }
  lVar8 = lVar7;
  if (99 < uVar6) {
    uVar5 = (uint)uVar6;
    lVar8 = lVar7 + -2;
    uVar2 = (uVar5 >> 2 & 0x3fff) / 0x19;
    uVar6 = (ulong)uVar2;
    *(undefined2 *)((long)&uStack_4a + lVar7) =
         *(undefined2 *)
          (
          "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
          + ((ulong)(uVar5 + uVar2 * -100) & 0xffff) * 2);
  }
  if (uVar6 < 10) {
    lVar7 = lVar8 + -1;
    *(byte *)((long)&uStack_4a + lVar8 + 1) = (byte)uVar6 | 0x30;
  }
  else {
    lVar7 = lVar8 + -2;
    *(undefined2 *)((long)&uStack_4a + lVar8) =
         *(undefined2 *)
          (
          "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
          + uVar6 * 2);
  }
  lVar8 = lVar7;
  if ((long)uVar4 < 0) {
    lVar8 = lVar7 + -1;
    *(undefined1 *)((long)&uStack_4a + lVar7 + 1) = 0x2d;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,(long)auStack_48 + lVar8,0x14 - lVar8);
  return;
}


// ===== 006b28bc  <serde_json::number::Number_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::number::Number as core::fmt::Debug>::fmt */

void __rustcall
<serde_json::number::Number_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_28;
  undefined8 *puStack_20;
  code *local_18;
  
  puStack_20 = &local_28;
  local_18 = FUN_006b25bc;
  local_28 = param_1;
  core::fmt::write(*param_2,param_2[1],&DAT_003652f7,&puStack_20);
  return;
}


// ===== 006b28fc  <serde_json::number::Number_as_core::str::traits::FromStr>::from_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::number::Number as core::str::traits::FromStr>::from_str */

void __rustcall
<serde_json::number::Number_as_core::str::traits::FromStr>::from_str
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long local_68;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  
  uStack_30 = 0;
  local_58 = 0;
  local_50 = 1;
  local_48 = 0;
  local_28 = 0x80;
                    /* try { // try from 006b2928 to 006b2933 has its CatchHandler @ 006b2988 */
  uStack_40 = param_2;
  local_38 = param_3;
  FUN_006b1968(&local_68,&local_58);
  if (local_68 == -1) {
    *param_1 = 0xffffffffffffffff;
    param_1[1] = local_60;
  }
  else {
    *param_1 = *(undefined8 *)(&DAT_00455930 + local_68 * 8);
    param_1[1] = local_60;
  }
  if (local_58 != 0) {
    __rustc::__rust_dealloc(local_50,local_58,1);
  }
  return;
}


// ===== 006b29a8  <core[188d2c0002da36d0]::io::error::Error_as_core[188d2c0002da36d0]::convert::From<serde_json[b3499e235aa4f7be]::error::Error>>::from =====

/* <core[188d2c0002da36d0]::io::error::Error as
   core[188d2c0002da36d0]::convert::From<serde_json[b3499e235aa4f7be]::error::Error>>::from */

ulong <core[188d2c0002da36d0]::io::error::Error_as_core[188d2c0002da36d0]::convert::From<serde_json[b3499e235aa4f7be]::error::Error>>
      ::from(ulong *param_1)

{
  ulong uVar1;
  
  if (*param_1 == 1) {
    uVar1 = param_1[1];
    __rustc::__rust_dealloc(param_1,0x28,8);
    return uVar1;
  }
  if ((1L << (*param_1 & 0x3f) & 0x1ffffc1U) != 0) {
    uVar1 = <alloc::io::error::core::io::error::Error>::new<serde_json::error::Error>(0x15);
    return uVar1;
  }
  uVar1 = <alloc::io::error::core::io::error::Error>::new<serde_json::error::Error>(0x25);
  return uVar1;
}


// ===== 006b2a0c  FUN_006b2a0c =====

long FUN_006b2a0c(ulong *param_1,long param_2)

{
  byte bVar1;
  ulong uVar2;
  char cVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  byte bVar9;
  ulong __n;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  if (param_2 == 0) {
    return 0;
  }
  uVar11 = param_1[3];
  uVar10 = param_1[5];
  uVar8 = *param_1;
  uVar2 = param_1[1];
  bVar9 = *(byte *)((long)param_1 + 0x41);
  bVar1 = (byte)param_1[8];
  if (uVar11 < uVar10) {
    if (uVar2 != uVar8) {
      bVar1 = 1;
    }
    if (bVar1 == 1) {
      if ((bVar9 & 1) != 0) {
        return param_2;
      }
      param_2 = param_2 + -1;
    }
    else if ((bVar9 & 1) != 0) {
      return param_2;
    }
  }
  else {
    __n = (ulong)(byte)param_1[7];
    uVar12 = param_1[2];
    uVar13 = param_1[4];
    if ((byte)param_1[7] < 5) {
      do {
        if ((bVar9 & 1) != 0) {
          return param_2;
        }
        if (uVar13 <= uVar10) {
          cVar3 = *(char *)((long)param_1 + __n + 0x2f);
          do {
            if (uVar10 - uVar13 < 0x10) {
              uVar7 = 0;
              if (uVar10 == uVar13) {
LAB_006b2b9c:
                param_1[4] = uVar10;
                uVar13 = uVar10;
                break;
              }
              while (*(char *)(uVar12 + uVar13 + uVar7) != cVar3) {
                uVar7 = uVar7 + 1;
                if (uVar10 - uVar13 == uVar7) goto LAB_006b2b9c;
              }
            }
            else {
              auVar14 = core::slice::memchr::memchr_aligned(cVar3,uVar12 + uVar13,uVar10 - uVar13);
              uVar7 = auVar14._8_8_;
              if (auVar14._0_8_ != 1) goto LAB_006b2b9c;
            }
            uVar13 = uVar13 + uVar7 + 1;
            param_1[4] = uVar13;
            if (((__n <= uVar13) && (uVar13 <= uVar11)) &&
               (iVar6 = memcmp((void *)(uVar12 + (uVar13 - __n)),param_1 + 6,__n), iVar6 == 0)) {
              bVar9 = 0;
              *param_1 = uVar13;
              uVar8 = uVar13;
              goto LAB_006b2ab8;
            }
          } while (uVar13 <= uVar10);
        }
        bVar9 = 1;
        *(undefined1 *)((long)param_1 + 0x41) = 1;
        if (((bVar1 & 1) == 0) && (uVar2 == uVar8)) {
          return param_2;
        }
LAB_006b2ab8:
        param_2 = param_2 + -1;
        if (param_2 == 0) {
          return 0;
        }
      } while( true );
    }
    if (uVar2 != uVar8) {
      bVar1 = 1;
    }
    if (bVar1 == 1) {
      do {
        if ((bVar9 & 1) != 0) {
          return param_2;
        }
        if (uVar13 <= uVar10) {
          cVar3 = *(char *)((long)param_1 + __n + 0x2f);
          do {
            if (uVar10 - uVar13 < 0x10) {
              uVar8 = 0;
              if (uVar10 == uVar13) {
                auVar14 = ZEXT816(0);
              }
              else {
                do {
                  if (*(char *)(uVar12 + uVar13 + uVar8) == cVar3) {
                    auVar14._8_8_ = uVar8;
                    auVar14._0_8_ = 1;
                    goto LAB_006b2c88;
                  }
                  uVar8 = uVar8 + 1;
                } while (uVar10 - uVar13 != uVar8);
                auVar4._8_8_ = 0;
                auVar4._0_8_ = uVar10 - uVar13;
                auVar14 = auVar4 << 0x40;
              }
            }
            else {
              auVar14 = core::slice::memchr::memchr_aligned(cVar3,uVar12 + uVar13,uVar10 - uVar13);
            }
LAB_006b2c88:
            if (auVar14._0_8_ != 1) {
              param_1[4] = uVar10;
              uVar13 = uVar10;
              break;
            }
            uVar13 = uVar13 + auVar14._8_8_ + 1;
            param_1[4] = uVar13;
            if ((__n <= uVar13) && (uVar13 <= uVar11)) goto LAB_006b2cac;
          } while (uVar13 <= uVar10);
        }
        bVar9 = 1;
        param_2 = param_2 + -1;
        *(undefined1 *)((long)param_1 + 0x41) = 1;
        if (param_2 == 0) {
          return 0;
        }
      } while( true );
    }
    if ((bVar9 & 1) != 0) {
      return param_2;
    }
    if (uVar13 <= uVar10) {
      cVar3 = *(char *)((long)param_1 + __n + 0x2f);
      do {
        if (uVar10 - uVar13 < 0x10) {
          uVar8 = 0;
          if (uVar10 == uVar13) {
            auVar15 = ZEXT816(0);
          }
          else {
            do {
              if (*(char *)(uVar12 + uVar13 + uVar8) == cVar3) {
                auVar15._8_8_ = uVar8;
                auVar15._0_8_ = 1;
                goto LAB_006b2d40;
              }
              uVar8 = uVar8 + 1;
            } while (uVar10 - uVar13 != uVar8);
            auVar5._8_8_ = 0;
            auVar5._0_8_ = uVar10 - uVar13;
            auVar15 = auVar5 << 0x40;
          }
        }
        else {
          auVar15 = core::slice::memchr::memchr_aligned(cVar3,uVar12 + uVar13,uVar10 - uVar13);
        }
LAB_006b2d40:
        if (auVar15._0_8_ != 1) {
          param_1[4] = uVar10;
          break;
        }
        uVar13 = uVar13 + auVar15._8_8_ + 1;
        param_1[4] = uVar13;
        if ((__n <= uVar13) && (uVar13 <= uVar11)) {
LAB_006b2cac:
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (0,__n,4,&PTR_s__rustc_48a229ceaefd4985c50990b14_00976210);
        }
      } while (uVar13 <= uVar10);
    }
  }
  *(undefined1 *)((long)param_1 + 0x41) = 1;
  return param_2;
}


// ===== 006b2d78  FUN_006b2d78 =====

undefined1  [16] FUN_006b2d78(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x28;
  auVar1._0_8_ = "description() is deprecated; use Display";
  return auVar1;
}


// ===== 006b2d88  FUN_006b2d88 =====

void FUN_006b2d88(void)

{
  return;
}


// ===== 006b2d8c  FUN_006b2d8c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006b2d8c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_00372c50;
  param_1[1] = _UNK_00372c58;
  *param_1 = uVar1;
  return;
}


// ===== 006b2da0  FUN_006b2da0 =====

long FUN_006b2da0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    return param_1;
  }
                    /* try { // try from 006b2dc0 to 006b2dd3 has its CatchHandler @ 006b2df8 */
  lVar1 = FUN_006b1b88(param_2,param_1);
  __rustc::__rust_dealloc(param_1,0x28,8);
  return lVar1;
}


// ===== 006b2e14  FUN_006b2e14 =====

void FUN_006b2e14(long *param_1)

{
  ulong uVar1;
  long local_18;
  
  if (*param_1 == 1) {
    uVar1 = param_1[1] & 3;
    if ((1 < uVar1 - 2) && (uVar1 != 0)) {
      local_18 = param_1[1] - 1;
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
    }
  }
  else if ((*param_1 == 0) && (param_1[2] != 0)) {
    __rustc::__rust_dealloc(param_1[1],param_1[2],1);
    return;
  }
  return;
}


// ===== 006b2e84  FUN_006b2e84 =====

void FUN_006b2e84(long *param_1)

{
  if (*param_1 != 0) {
    __rustc::__rust_dealloc(param_1[1],*param_1,1);
    return;
  }
  return;
}


// ===== 006b2e9c  FUN_006b2e9c =====

void FUN_006b2e9c(void *param_1,ulong param_2)

{
  void *__dest;
  ulong local_48;
  void *pvStack_40;
  ulong local_38;
  
  if ((param_2 & 1) == 0) {
    alloc::fmt::format::format_inner(&local_48);
  }
  else {
    param_2 = param_2 >> 1;
    local_48 = param_2;
    local_38 = param_2;
    if (param_2 == 0) {
      pvStack_40 = (void *)0x1;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      __dest = (void *)__rustc::__rust_alloc(param_2,1);
      if (__dest == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        alloc::raw_vec::handle_error(1,param_2);
      }
      memcpy(__dest,param_1,param_2);
      pvStack_40 = __dest;
    }
  }
  serde_json::error::make_error(&local_48);
  return;
}


// ===== 006b2f28  <serde_json::error::serde_json::error::Error>::io_error_kind =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::error::serde_json::error::Error>::io_error_kind */

ulong __rustcall <serde_json::error::serde_json::error::Error>::io_error_kind(long *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (*(long *)*param_1 != 1) {
    return 0xff;
  }
  uVar2 = ((long *)*param_1)[1];
  uVar3 = uVar2 & 3;
  if (uVar3 < 2) {
    if (uVar3 == 0) {
      return (ulong)*(byte *)(uVar2 + 0x10);
    }
    return (ulong)*(byte *)(uVar2 + 0x1f);
  }
  if (uVar3 == 2) {
    lVar1 = core::io::error::os_functions::get_os_functions();
                    /* WARNING: Could not recover jumptable at 0x006b2f88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(lVar1 + 8))(uVar2 >> 0x20);
    return uVar2;
  }
  return uVar2 >> 0x20;
}


// ===== 006b2f9c  <serde_json::error::[0]::serde_json::error::Error>::io =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::error::[0]::serde_json::error::Error>::io */

void __rustcall <serde_json::error::[0]::serde_json::error::Error>::io(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_38;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined8 *)__rustc::__rust_alloc(0x28,8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = 1;
    puVar1[3] = 0;
    puVar1[2] = local_38;
    puVar1[4] = 0;
    return;
  }
                    /* try { // try from 006b2ff0 to 006b2ffb has its CatchHandler @ 006b3000 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x28);
}


// ===== 006b3018  <serde_json::error::[0]::serde_json::error::Error>::syntax =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::error::[0]::serde_json::error::Error>::syntax */

void __rustcall
<serde_json::error::[0]::serde_json::error::Error>::syntax
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = param_1[1];
  uVar3 = *param_1;
  uVar2 = param_1[2];
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined8 *)__rustc::__rust_alloc(0x28,8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = uVar4;
    *puVar1 = uVar3;
    puVar1[3] = param_2;
    puVar1[2] = uVar2;
    puVar1[4] = param_3;
    return;
  }
                    /* try { // try from 006b3070 to 006b307b has its CatchHandler @ 006b3080 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x28);
}


// ===== 006b3098  serde_json::error::make_error =====

/* WARNING: Removing unreachable block (ram,0x006b331c) */
/* WARNING: Removing unreachable block (ram,0x006b3394) */
/* WARNING: Removing unreachable block (ram,0x006b33a4) */
/* WARNING: Removing unreachable block (ram,0x006b3328) */
/* WARNING: Removing unreachable block (ram,0x006b344c) */
/* WARNING: Removing unreachable block (ram,0x006b3338) */
/* WARNING: Removing unreachable block (ram,0x006b3450) */
/* WARNING: Removing unreachable block (ram,0x006b33f4) */
/* WARNING: Unknown calling convention: __rustcall */
/* serde_json::error::make_error */

void __rustcall serde_json::error::make_error(ulong *param_1)

{
  char *pcVar1;
  char cVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  char *pcVar12;
  undefined **ppuVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  int iVar17;
  ulong uVar18;
  byte *pbVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  undefined8 local_a8;
  ulong uStack_a0;
  ulong local_98;
  ulong uStack_90;
  ulong local_88;
  ulong local_78;
  long local_70;
  ulong local_68;
  ulong local_60;
  ulong uStack_58;
  char *local_50;
  ulong uStack_48;
  
  uVar7 = param_1[1];
  uVar21 = param_1[2];
                    /* try { // try from 006b30b8 to 006b30d3 has its CatchHandler @ 006b3904 */
  <core::str::pattern::[u]::core::str::pattern::StrSearcher>::new
            (&local_a8,uVar7,uVar21,
             " at line EOF while parsing a listEOF while parsing an objectEOF while parsing a stringEOF while parsing a valueexpected `:`expected `,` or `]`expected `,` or `}`expected identexpected valueexpected `\"`invalid escapeinvalid numbernumber out of rangeinvalid unicode code pointcontrol character (\\u0000-\\u001F) found while parsing a stringkey must be a stringinvalid value: expected key to be a number in quotesfloat key must be finite (got NaN or +/-inf)lone leading surrogate in hex escapetrailing commatrailing charactersunexpected end of hex escaperecursion limit exceeded"
             ,9);
  uVar22 = uVar21;
  if (((uint)local_a8 & 1) == 0) {
    if ((uStack_90 & 0x10000) == 0) {
      if (local_98 == 0) {
        uVar9 = 0;
        if ((uStack_90 & 0x100) == 0) {
          uVar23 = 0;
          uVar6 = 0;
          goto LAB_006b3538;
        }
        goto LAB_006b3468;
      }
      if (local_98 < uStack_58) {
        if (*(char *)(local_60 + local_98) + 0x40 < 0 ==
            SCARRY4((int)*(char *)(local_60 + local_98),0x40)) {
LAB_006b32f8:
          uVar15 = (uint)*(byte *)(local_60 + local_98 + -1);
          uVar9 = local_98;
          if ((uStack_90 & 0x100) == 0) {
            if (uVar15 < 0x80) {
              lVar16 = -1;
            }
            else if (uVar15 < 0x800) {
              lVar16 = -2;
            }
            else {
              lVar16 = -4;
              if (uVar15 < 0x10000) {
                lVar16 = -3;
              }
            }
            local_98 = lVar16 + local_98;
            uVar9 = local_98;
            if (local_98 != 0) {
              if (local_98 < uStack_58) {
                if (*(char *)(local_60 + local_98) + 0x40 < 0 !=
                    SCARRY4((int)*(char *)(local_60 + local_98),0x40)) goto LAB_006b33d0;
              }
              else if (local_98 != uStack_58) goto LAB_006b33d0;
            }
          }
LAB_006b3468:
          uVar24 = uVar9 + 9;
          ppuVar13 = &PTR_s__home_runner__cargo_registry_src_009762f0;
          uVar6 = uVar9 + 9;
          while( true ) {
            local_98 = uVar21;
            if (uVar6 != 0) {
              if (uVar6 < uVar21) {
                if (*(char *)(uVar7 + uVar6) + 0x40 < 0 !=
                    SCARRY4((int)*(char *)(uVar7 + uVar6),0x40)) goto LAB_006b3890;
              }
              else if (uVar21 != uVar6) goto LAB_006b3890;
            }
            uVar10 = uVar21;
            if ((uVar21 == uVar6) || (uVar10 = uVar6, 9 < *(byte *)(uVar7 + uVar6) - 0x30)) break;
            uVar6 = uVar6 + 1;
          }
          if (uVar6 != 0) {
            if (uVar10 < uVar21) {
              iVar17 = (int)*(char *)(uVar7 + uVar10);
              if (iVar17 == -0x41 || iVar17 + 0x41 < 0 != SCARRY4(iVar17,0x41)) {
LAB_006b34e8:
                ppuVar13 = &PTR_s__home_runner__cargo_registry_src_00976308;
                uVar6 = uVar10;
                goto LAB_006b3890;
              }
            }
            else if (uVar21 != uVar10) goto LAB_006b34e8;
          }
          if ((7 < uVar21 - uVar10) && (*(long *)(uVar7 + uVar10) == 0x206e6d756c6f6320)) {
            uVar20 = uVar10 + 8;
            ppuVar13 = &PTR_s__home_runner__cargo_registry_src_00976320;
            uVar6 = uVar10 + 8;
            while( true ) {
              if (uVar6 != 0) {
                if (uVar6 < uVar21) {
                  if (*(char *)(uVar7 + uVar6) + 0x40 < 0 !=
                      SCARRY4((int)*(char *)(uVar7 + uVar6),0x40)) goto LAB_006b3890;
                }
                else if (uVar21 != uVar6) goto LAB_006b3890;
              }
              if (uVar21 == uVar6) goto LAB_006b3644;
              if (9 < *(byte *)(uVar7 + uVar6) - 0x30) break;
              uVar6 = uVar6 + 1;
            }
            local_98 = uVar6;
            if (uVar21 <= uVar6) {
LAB_006b3644:
              if ((uVar10 < uVar24) ||
                 (((uVar24 != 0 &&
                   (*(char *)(uVar7 + uVar24) + 0x40 < 0 !=
                    SCARRY4((int)*(char *)(uVar7 + uVar24),0x40))) ||
                  (*(char *)(uVar7 + uVar10) + 0x40 < 0 !=
                   SCARRY4((int)*(char *)(uVar7 + uVar10),0x40))))) {
                ppuVar13 = &PTR_s__home_runner__cargo_registry_src_00976338;
                uVar6 = uVar24;
                local_98 = uVar10;
                goto LAB_006b3890;
              }
              uVar18 = uVar10 - uVar24;
              uVar23 = uVar18;
              uVar6 = uVar18;
              if (uVar18 == 0) goto LAB_006b3538;
              pbVar19 = (byte *)(uVar7 + uVar24);
              if (uVar18 == 1) {
                bVar3 = *pbVar19;
                uVar23 = 0;
                uVar6 = uVar23;
                if ((bVar3 == 0x2b) || (bVar3 == 0x2d)) goto LAB_006b3538;
              }
              else {
                bVar3 = *pbVar19;
              }
              if (bVar3 == 0x2b) {
                pbVar19 = pbVar19 + 1;
              }
              uVar18 = uVar18 - (bVar3 == 0x2b);
              if (uVar18 < 0x11) {
                uVar24 = 0;
                for (; uVar18 != 0; uVar18 = uVar18 - 1) {
                  if (9 < *pbVar19 - 0x30) goto LAB_006b3530;
                  uVar24 = uVar24 * 10 + (ulong)(*pbVar19 - 0x30);
                  pbVar19 = pbVar19 + 1;
                }
LAB_006b36e4:
                ppuVar13 = &PTR_s__home_runner__cargo_registry_src_00976350;
                uVar6 = uVar20;
                if (((local_98 < uVar20) || (uVar21 < local_98)) ||
                   ((uVar20 != uVar21 &&
                    ((uVar20 != 0 &&
                     (*(char *)(uVar7 + uVar20) + 0x40 < 0 !=
                      SCARRY4((int)*(char *)(uVar7 + uVar20),0x40))))))) goto LAB_006b3890;
                lVar16 = local_98 - uVar20;
                if (lVar16 == 0) {
                  uVar23 = 0;
                  uVar6 = 0;
                  goto LAB_006b3538;
                }
                pbVar19 = (byte *)(uVar7 + uVar20);
                if (lVar16 == 1) {
                  bVar3 = *pbVar19;
                  uVar6 = 0;
                  uVar23 = uVar6;
                  if ((bVar3 == 0x2b) || (bVar3 == 0x2d)) goto LAB_006b3538;
                }
                else {
                  bVar3 = *pbVar19;
                }
                if (bVar3 == 0x2b) {
                  pbVar19 = pbVar19 + 1;
                }
                uVar23 = lVar16 - (ulong)(bVar3 == 0x2b);
                if (uVar23 < 0x11) {
                  uVar6 = 0;
                  for (; uVar23 != 0; uVar23 = uVar23 - 1) {
                    if (9 < *pbVar19 - 0x30) goto LAB_006b3530;
                    uVar6 = uVar6 * 10 + (ulong)(*pbVar19 - 0x30);
                    pbVar19 = pbVar19 + 1;
                  }
LAB_006b37e0:
                  uVar23 = uVar24;
                  if ((((uVar9 <= uVar21) && (uVar22 = uVar9, uVar9 != 0)) && (uVar9 < uVar21)) &&
                     (iVar17 = (int)*(char *)(uVar7 + uVar9),
                     iVar17 == -0x41 || iVar17 + 0x41 < 0 != SCARRY4(iVar17,0x41))) {
                    /* try { // try from 006b3804 to 006b381b has its CatchHandler @ 006b3904 */
                    /* WARNING: Subroutine does not return */
                    core::panicking::panic
                              ("assertion failed: self.is_char_boundary(new_len)",0x30,
                               &PTR_s__home_runner__cargo_registry_src_00976368,uVar10,
                               &PTR_s__home_runner__cargo_registry_src_00976350);
                  }
                  goto LAB_006b3538;
                }
                uVar6 = 0;
                while( true ) {
                  if (uVar23 == 0) goto LAB_006b37e0;
                  auVar5._8_8_ = 0;
                  auVar5._0_8_ = uVar6;
                  if (SUB168(auVar5 * ZEXT816(10),8) != 0) break;
                  uVar20 = uVar6 * 10;
                  uVar15 = *pbVar19 - 0x30;
                  uVar6 = uVar20 + uVar15;
                  if ((9 < uVar15) ||
                     (uVar23 = uVar23 - 1, pbVar19 = pbVar19 + 1, CARRY8(uVar20,(ulong)uVar15)))
                  break;
                }
              }
              else {
                uVar24 = 0;
                while( true ) {
                  if (uVar18 == 0) goto LAB_006b36e4;
                  auVar4._8_8_ = 0;
                  auVar4._0_8_ = uVar24;
                  if (SUB168(auVar4 * ZEXT816(10),8) != 0) break;
                  uVar6 = uVar24 * 10;
                  uVar15 = *pbVar19 - 0x30;
                  uVar24 = uVar6 + uVar15;
                  if ((9 < uVar15) ||
                     (uVar18 = uVar18 - 1, pbVar19 = pbVar19 + 1, CARRY8(uVar6,(ulong)uVar15)))
                  break;
                }
              }
            }
          }
          goto LAB_006b3530;
        }
      }
      else if (local_98 == uStack_58) goto LAB_006b32f8;
LAB_006b33d0:
      ppuVar13 = &PTR_s__rustc_48a229ceaefd4985c50990b14_009763c8;
      uVar7 = local_60;
      uVar21 = uStack_58;
      uVar6 = 0;
LAB_006b3890:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 006b3890 to 006b38b3 has its CatchHandler @ 006b3904 */
      core::str::slice_error_fail(uVar7,uVar21,uVar6,local_98,ppuVar13);
    }
  }
  else if (local_70 == -1) {
    uVar9 = local_78 - uStack_48;
    if (uVar9 < uStack_58) {
      uVar6 = local_98 - 1;
      uVar23 = local_98;
      if (local_98 <= uStack_48) {
        uVar23 = uStack_48;
      }
      if (uVar6 < uStack_48) {
LAB_006b3274:
        uVar6 = uVar9;
        if ((local_88 >> ((ulong)*(byte *)(local_60 + uVar9) & 0x3f) & 1) != 0) {
          uVar6 = local_78;
          uVar24 = local_98;
          do {
            if (uVar24 == 0) {
              lVar16 = local_98 + uVar9;
              lVar14 = uVar23 - local_98;
              pcVar12 = local_50 + local_98;
              goto LAB_006b32b8;
            }
            lVar16 = uVar24 - 1;
            pcVar12 = (char *)((local_60 - 1) + uVar9 + uVar24);
            uVar24 = uVar24 - 1;
            uVar6 = uVar6 - 1;
          } while (local_50[lVar16] == *pcVar12);
        }
        goto LAB_006b3264;
      }
      if (local_98 != 0) {
        if ((local_88 >> ((ulong)*(byte *)(local_60 + uVar9) & 0x3f) & 1) == 0) {
          local_78 = local_78 + uStack_48 * -2;
          do {
            if (uStack_58 <= local_78) goto LAB_006b3530;
            pbVar19 = (byte *)(local_60 + local_78);
            local_78 = local_78 - uStack_48;
            ppuVar13 = &PTR_s__rustc_48a229ceaefd4985c50990b14_009762b8;
          } while ((local_88 >> ((ulong)*pbVar19 & 0x3f) & 1) == 0);
        }
        else {
          ppuVar13 = &PTR_s__rustc_48a229ceaefd4985c50990b14_009762b8;
        }
LAB_006b38b0:
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check(uVar6,uStack_48,ppuVar13);
      }
      do {
        uVar10 = uVar9;
        uVar6 = uVar23;
        uVar24 = uVar10;
        pcVar12 = local_50;
        if ((local_88 >> ((ulong)*(byte *)(local_60 + uVar10) & 0x3f) & 1) != 0) {
          do {
            uVar9 = uVar10;
            if (uVar6 == 0) goto LAB_006b3468;
            cVar2 = *pcVar12;
            pcVar1 = (char *)(local_60 + uVar24);
            uVar6 = uVar6 - 1;
            uVar24 = uVar24 + 1;
            pcVar12 = pcVar12 + 1;
          } while (cVar2 == *pcVar1);
          uVar10 = local_78 - uStack_90;
        }
        uVar9 = uVar10 - uStack_48;
        local_78 = uVar10;
      } while (uVar10 - uStack_48 < uStack_58);
    }
  }
  else {
    uVar9 = local_78 - uStack_48;
    if (uVar9 < uStack_58) {
      uVar23 = local_98;
      if (local_98 <= uStack_48) {
        uVar23 = uStack_48;
      }
LAB_006b3144:
      do {
        uVar6 = uVar9;
        if ((local_88 >> ((ulong)*(byte *)(local_60 + uVar9) & 0x3f) & 1) != 0) {
          uVar6 = local_68;
          if (local_98 <= local_68) {
            uVar6 = local_98;
          }
          uVar6 = uVar6 - 1;
          do {
            if (uVar6 == 0xffffffffffffffff) {
              lVar16 = local_98 + uVar9;
              lVar14 = uVar23 - local_98;
              if (local_68 <= local_98) {
                local_68 = local_98;
              }
              lVar11 = local_68 - local_98;
              pcVar12 = local_50 + local_98;
              goto LAB_006b31ac;
            }
            ppuVar13 = &PTR_s__rustc_48a229ceaefd4985c50990b14_009762b8;
            if (uStack_48 <= uVar6) goto LAB_006b38b0;
            pcVar12 = local_50 + uVar6;
            pcVar1 = (char *)(local_60 + uVar9 + uVar6);
            uVar6 = uVar6 - 1;
          } while (*pcVar12 == *pcVar1);
          uVar6 = (local_78 - local_98) + uVar6 + 1;
        }
        uVar9 = uVar6 - uStack_48;
        local_68 = uStack_48;
        local_78 = uVar6;
      } while (uVar9 < uStack_58);
    }
  }
LAB_006b3530:
  uVar23 = 0;
  uVar6 = 0;
LAB_006b3538:
  uVar21 = *param_1;
  if (uVar22 < uVar21) {
    if (uVar22 == 0) {
      __rustc::__rust_dealloc(uVar7,uVar21,1);
      uVar7 = 1;
    }
    else {
      uVar7 = __rustc::__rust_realloc(uVar7,uVar21,1,uVar22);
      if (uVar7 == 0) {
                    /* try { // try from 006b3564 to 006b356f has its CatchHandler @ 006b38e8 */
                    /* WARNING: Subroutine does not return */
        alloc::raw_vec::handle_error(1,uVar22);
      }
    }
  }
  local_a8 = 0;
  uStack_a0 = uVar7;
  local_98 = uVar22;
  uStack_90 = uVar23;
  local_88 = uVar6;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar8 = (undefined8 *)__rustc::__rust_alloc(0x28,8);
  if (puVar8 != (undefined8 *)0x0) {
    puVar8[1] = uStack_a0;
    *puVar8 = local_a8;
    puVar8[3] = uStack_90;
    puVar8[2] = local_98;
    puVar8[4] = local_88;
    return;
  }
                    /* try { // try from 006b3864 to 006b386f has its CatchHandler @ 006b3928 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x28);
  while( true ) {
    cVar2 = *pcVar12;
    pcVar1 = (char *)(local_60 + lVar16);
    lVar16 = lVar16 + 1;
    lVar14 = lVar14 + -1;
    pcVar12 = pcVar12 + 1;
    if (cVar2 != *pcVar1) break;
LAB_006b32b8:
    if (lVar14 == 0) goto LAB_006b3468;
  }
  uVar6 = local_78 - uStack_90;
LAB_006b3264:
  uVar9 = uVar6 - uStack_48;
  local_78 = uVar6;
  if (uStack_58 <= uVar9) goto LAB_006b3530;
  goto LAB_006b3274;
  while( true ) {
    uVar6 = uVar23;
    ppuVar13 = &PTR_s__rustc_48a229ceaefd4985c50990b14_009762a0;
    if (lVar14 == 0) goto LAB_006b38b0;
    cVar2 = *pcVar12;
    pcVar1 = (char *)(local_60 + lVar16);
    lVar16 = lVar16 + 1;
    lVar14 = lVar14 + -1;
    lVar11 = lVar11 + -1;
    pcVar12 = pcVar12 + 1;
    if (cVar2 != *pcVar1) break;
LAB_006b31ac:
    if (lVar11 == 0) goto LAB_006b3468;
  }
  local_78 = local_78 - uStack_90;
  uVar9 = local_78 - uStack_48;
  local_68 = uStack_90;
  if (uStack_58 <= uVar9) goto LAB_006b3530;
  goto LAB_006b3144;
}


// ===== 006b3940  <serde_json::error::ErrorCode_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::error::ErrorCode as core::fmt::Display>::fmt */

void __rustcall <serde_json::error::ErrorCode_as_core::fmt::Display>::fmt(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x006b3958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_006b395c + (ulong)(byte)(&DAT_00455948)[*param_1] * 4))();
  return;
}


// ===== 006b3b9c  <serde_json::error::Error_as_core::error::Error>::source =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::error::Error as core::error::Error>::source */

undefined8 __rustcall <serde_json::error::Error_as_core::error::Error>::source(long *param_1)

{
  undefined8 uVar1;
  
  if (*(long *)*param_1 == 1) {
    uVar1 = <core::io::error::Error_as_core::error::Error>::source((long *)*param_1 + 1);
    return uVar1;
  }
  return 0;
}


// ===== 006b3bcc  <serde_json::error::Error_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::error::Error as core::fmt::Display>::fmt */

void __rustcall
<serde_json::error::Error_as_core::fmt::Display>::fmt(long *param_1,undefined8 *param_2)

{
  long local_40;
  undefined *local_38;
  long *plStack_30;
  undefined *local_28;
  long lStack_20;
  undefined *local_18;
  
  local_40 = *param_1;
  plStack_30 = (long *)(local_40 + 0x18);
  if (*plStack_30 != 0) {
    local_38 = PTR_fmt_0099f708;
    lStack_20 = local_40 + 0x20;
    local_28 = PTR_fmt_0099f458;
    local_18 = PTR_fmt_0099f458;
    core::fmt::write(*param_2,param_2[1],&DAT_0036db37,&local_40);
    return;
  }
  <serde_json::error::ErrorCode_as_core::fmt::Display>::fmt();
  return;
}


// ===== 006b3c30  <serde_json::error::ErrorImpl_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::error::ErrorImpl as core::fmt::Display>::fmt */

void __rustcall
<serde_json::error::ErrorImpl_as_core::fmt::Display>::fmt(long param_1,undefined8 *param_2)

{
  long local_40;
  undefined *local_38;
  long *plStack_30;
  undefined *local_28;
  long lStack_20;
  undefined *local_18;
  
  plStack_30 = (long *)(param_1 + 0x18);
  if (*plStack_30 != 0) {
    local_38 = PTR_fmt_0099f708;
    lStack_20 = param_1 + 0x20;
    local_28 = PTR_fmt_0099f458;
    local_18 = PTR_fmt_0099f458;
    local_40 = param_1;
    core::fmt::write(*param_2,param_2[1],&DAT_0036db37,&local_40);
    return;
  }
  <serde_json::error::ErrorCode_as_core::fmt::Display>::fmt();
  return;
}


// ===== 006b3c90  <serde_json::error::Error_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::error::Error as core::fmt::Debug>::fmt */

ulong __rustcall
<serde_json::error::Error_as_core::fmt::Debug>::fmt(long *param_1,undefined8 *param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long *local_70;
  undefined **ppuStack_68;
  long local_60;
  undefined *puStack_58;
  long local_50;
  undefined *puStack_48;
  long local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined1 uStack_21;
  
  lVar3 = *param_1;
  local_40 = 0;
  uStack_38 = 1;
  local_30 = 0;
  local_60 = 0x60000020;
  local_70 = &local_40;
  ppuStack_68 = &PTR_FUN_00976380;
                    /* try { // try from 006b3cd0 to 006b3cdb has its CatchHandler @ 006b3d98 */
  iVar1 = <serde_json::error::ErrorCode_as_core::fmt::Display>::fmt(lVar3,&local_70);
  if (iVar1 == 0) {
    local_60 = lVar3 + 0x18;
    local_80 = local_30;
    uStack_88 = uStack_38;
    local_90 = local_40;
    ppuStack_68 = (undefined **)FUN_006b4164;
    puStack_58 = PTR_fmt_0099f458;
    local_50 = lVar3 + 0x20;
    puStack_48 = PTR_fmt_0099f458;
                    /* try { // try from 006b3d1c to 006b3d2b has its CatchHandler @ 006b3d84 */
    local_70 = &local_90;
    uVar2 = core::fmt::write(*param_2,param_2[1],&DAT_00366ba5,&local_70);
    if (local_90 != 0) {
      uVar2 = uVar2 & 0xffffffff;
      __rustc::__rust_dealloc(uStack_88,local_90,1);
    }
    return uVar2;
  }
                    /* try { // try from 006b3d5c to 006b3d7f has its CatchHandler @ 006b3d98 */
                    /* WARNING: Subroutine does not return */
  core::result::unwrap_failed
            ("a Display implementation returned an error unexpectedly",0x37,&uStack_21,&DAT_009762d0
             ,&PTR_s__rustc_48a229ceaefd4985c50990b14_009763b0);
}


// ===== 006b3dbc  <serde_json::error::Error_as_serde_core::de::Error>::invalid_type =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::error::Error as serde_core::de::Error>::invalid_type */

void __rustcall
<serde_json::error::Error_as_serde_core::de::Error>::invalid_type
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 *local_30;
  undefined *puStack_28;
  undefined1 *local_20;
  code *pcStack_18;
  
  local_20 = (undefined1 *)&local_60;
  uStack_48 = param_1[1];
  local_50 = *param_1;
  local_40 = param_1[2];
  local_30 = &local_50;
  puStack_28 = PTR_fmt_0099f718;
  pcStack_18 = FUN_006b5228;
  local_60 = param_2;
  uStack_58 = param_3;
  FUN_006b2e9c(&DAT_003707ed,&local_30);
  return;
}


// ===== 006b3e18  <serde_json::error::Error_as_serde_core::de::Error>::invalid_value =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::error::Error as serde_core::de::Error>::invalid_value */

void __rustcall
<serde_json::error::Error_as_serde_core::de::Error>::invalid_value
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 *local_30;
  undefined *puStack_28;
  undefined1 *local_20;
  code *pcStack_18;
  
  local_20 = (undefined1 *)&local_60;
  uStack_48 = param_1[1];
  local_50 = *param_1;
  local_40 = param_1[2];
  local_30 = &local_50;
  puStack_28 = PTR_fmt_0099f718;
  pcStack_18 = FUN_006b5228;
  local_60 = param_2;
  uStack_58 = param_3;
  FUN_006b2e9c(&DAT_0036ce97,&local_30);
  return;
}


// ===== 006b3e74  <serde_json::error::JsonUnexpected_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::error::JsonUnexpected as core::fmt::Display>::fmt */

void __rustcall
<serde_json::error::JsonUnexpected_as_core::fmt::Display>::fmt(char *param_1,undefined8 *param_2)

{
  bool bVar1;
  ulong uVar2;
  char *local_60;
  long lStack_58;
  undefined1 *local_50;
  code *pcStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  if (*param_1 == '\x03') {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 0x7fffffffffffffff) < 0x7ff0000000000000) {
      lStack_58 = <f64_as_zmij::private::Sealed>::write_to_zmij_buffer(&local_40);
      lStack_58 = lStack_58 - (long)&local_40;
      local_60 = (char *)&local_40;
    }
    else {
      lStack_58 = 3;
      local_60 = "inf";
      if (uVar2 == 0xffffffffffffffff || (long)(uVar2 + 1) < 0 != SCARRY8(uVar2,1)) {
        lStack_58 = 4;
        local_60 = &UNK_00378a98;
      }
      bVar1 = (uVar2 & 0xfffffffffffff) != 0;
      if (bVar1) {
        lStack_58 = 3;
      }
      if (bVar1) {
        local_60 = "NaN";
      }
    }
    pcStack_48 = FUN_006b25cc;
    local_50 = (undefined1 *)&local_60;
    core::fmt::write(*param_2,param_2[1],&DAT_00364acf,&local_50);
    return;
  }
  if (*param_1 == '\a') {
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_00377358,4);
    return;
  }
  uStack_38 = *(undefined8 *)(param_1 + 8);
  local_40 = *(undefined8 *)param_1;
  local_30 = *(undefined8 *)(param_1 + 0x10);
  <serde_core::de::Unexpected_as_core::fmt::Display>::fmt(&local_40);
  return;
}


// ===== 006b3f88  FUN_006b3f88 =====

void FUN_006b3f88(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"Error",5);
  return;
}


// ===== 006b3f9c  FUN_006b3f9c =====

undefined8 FUN_006b3f9c(long *param_1,uint param_2)

{
  byte *pbVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = param_1[2];
  if (param_2 < 0x80) {
    if (*param_1 == lVar7) {
      FUN_006b1db8(param_1,lVar7,1,1,1);
    }
    *(byte *)(param_1[1] + lVar7) = (byte)param_2;
    lVar6 = 1;
  }
  else {
    uVar2 = 3;
    if (0xffff < param_2) {
      uVar2 = 4;
    }
    uVar3 = 2;
    if (0x7ff < param_2) {
      uVar3 = uVar2;
    }
    if ((ulong)(*param_1 - lVar7) < uVar3) {
      FUN_006b1db8(param_1,lVar7,uVar3,1,1);
    }
    bVar4 = (byte)param_2 & 0x3f | 0x80;
    pbVar1 = (byte *)(param_1[1] + lVar7);
    if (param_2 < 0x800) {
      pbVar1[1] = bVar4;
      lVar6 = 2;
      *pbVar1 = (byte)(param_2 >> 6) | 0xc0;
    }
    else {
      bVar5 = (byte)(param_2 >> 6) & 0x3f | 0x80;
      if (param_2 >> 0x10 == 0) {
        pbVar1[1] = bVar5;
        pbVar1[2] = bVar4;
        lVar6 = 3;
        *pbVar1 = (byte)(param_2 >> 0xc) | 0xe0;
      }
      else {
        pbVar1[2] = bVar5;
        pbVar1[3] = bVar4;
        lVar6 = 4;
        pbVar1[1] = (byte)(param_2 >> 0xc) & 0x3f | 0x80;
        *pbVar1 = (byte)(param_2 >> 0x12) | 0xf0;
      }
    }
  }
  param_1[2] = lVar6 + lVar7;
  return 0;
}


// ===== 006b40e0  FUN_006b40e0 =====

undefined8 FUN_006b40e0(long *param_1,void *param_2,ulong param_3)

{
  long lVar1;
  
  lVar1 = param_1[2];
  if ((ulong)(*param_1 - lVar1) < param_3) {
    FUN_006b1db8(param_1,lVar1,param_3,1,1);
    lVar1 = param_1[2];
  }
  else if (param_3 == 0) goto LAB_006b4120;
  memcpy((void *)(param_1[1] + lVar1),param_2,param_3);
LAB_006b4120:
  param_1[2] = lVar1 + param_3;
  return 0;
}


// ===== 006b4164  FUN_006b4164 =====

void FUN_006b4164(long param_1,undefined8 param_2)

{
  <str_as_core::fmt::Debug>::fmt
            (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),param_2);
  return;
}


// ===== 006b4178  FUN_006b4178 =====

undefined8 FUN_006b4178(long *param_1)

{
  undefined8 uVar1;
  
  if (*(long *)*param_1 == 1) {
    uVar1 = <core::io::error::Error_as_core::error::Error>::source((long *)*param_1 + 1);
    return uVar1;
  }
  return 0;
}


// ===== 006b41a8  FUN_006b41a8 =====

void FUN_006b41a8(long *param_1)

{
  long lVar1;
  ulong local_58 [3];
  long local_40;
  ulong local_38;
  undefined8 local_30;
  long lStack_28;
  long local_20;
  long local_18;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    local_18 = 0;
  }
  else {
    local_40 = param_1[1];
    local_18 = param_1[2];
    local_58[1] = 0;
    local_30 = 0;
    local_58[2] = lVar1;
    lStack_28 = lVar1;
    local_20 = local_40;
  }
  local_58[0] = (ulong)(lVar1 != 0);
  local_38 = local_58[0];
  FUN_006b41fc(local_58);
  return;
}


// ===== 006b41fc  FUN_006b41fc =====

void FUN_006b41fc(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long local_50 [2];
  long local_40;
  undefined8 local_38;
  
  FUN_006b4cc8(local_50,param_1);
  lVar1 = local_50[0];
  lVar2 = local_40;
  while (lVar1 != 0) {
    lVar4 = lVar1 + lVar2 * 0x18;
    lVar3 = *(long *)(lVar4 + 0x168);
    local_50[0] = lVar1;
    local_40 = lVar2;
    local_38 = param_1;
    if (lVar3 != 0) {
      __rustc::__rust_dealloc(*(undefined8 *)(lVar4 + 0x170),lVar3,1);
    }
                    /* try { // try from 006b4250 to 006b4253 has its CatchHandler @ 006b427c */
    FUN_006b4318(lVar1 + lVar2 * 0x20);
    FUN_006b4cc8(local_50,param_1);
    lVar1 = local_50[0];
    lVar2 = local_40;
  }
  return;
}


// ===== 006b4294  FUN_006b4294 =====

void FUN_006b4294(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long local_48 [2];
  long local_38;
  
  uVar5 = *param_1;
  FUN_006b4cc8(local_48,uVar5);
  lVar1 = local_48[0];
  lVar2 = local_38;
  while (lVar1 != 0) {
    lVar4 = lVar1 + lVar2 * 0x18;
    lVar3 = *(long *)(lVar4 + 0x168);
    local_48[0] = lVar1;
    local_38 = lVar2;
    if (lVar3 != 0) {
      __rustc::__rust_dealloc(*(undefined8 *)(lVar4 + 0x170),lVar3,1);
    }
    FUN_006b4318(lVar1 + lVar2 * 0x20);
    FUN_006b4cc8(local_48,uVar5);
    lVar1 = local_48[0];
    lVar2 = local_38;
  }
  return;
}


// ===== 006b4318  FUN_006b4318 =====

void FUN_006b4318(byte *param_1)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong local_a8;
  undefined8 local_a0;
  long lStack_98;
  undefined8 local_90;
  ulong local_88;
  undefined8 local_80;
  long lStack_78;
  undefined8 local_70;
  undefined8 local_68;
  long local_60 [2];
  long local_50;
  ulong *local_48;
  
  bVar2 = *param_1;
  if (2 < bVar2) {
    if (bVar2 == 3) {
      if (*(long *)(param_1 + 8) != 0) {
        __rustc::__rust_dealloc(*(undefined8 *)(param_1 + 0x10),*(long *)(param_1 + 8),1);
        return;
      }
    }
    else if (bVar2 == 4) {
      lVar1 = *(long *)(param_1 + 0x10);
      lVar5 = *(long *)(param_1 + 0x18) + 1;
      lVar3 = lVar1;
      while (lVar5 = lVar5 + -1, lVar5 != 0) {
                    /* try { // try from 006b437c to 006b437f has its CatchHandler @ 006b4480 */
        FUN_006b4318(lVar3);
        lVar3 = lVar3 + 0x20;
      }
      if (*(long *)(param_1 + 8) != 0) {
        __rustc::__rust_dealloc(lVar1,*(long *)(param_1 + 8) << 5,8);
        return;
      }
    }
    else {
      lVar5 = *(long *)(param_1 + 8);
      if (lVar5 == 0) {
        local_68 = 0;
      }
      else {
        local_90 = *(undefined8 *)(param_1 + 0x10);
        local_68 = *(undefined8 *)(param_1 + 0x18);
        local_a0 = 0;
        local_80 = 0;
        lStack_98 = lVar5;
        lStack_78 = lVar5;
        local_70 = local_90;
      }
      local_a8 = (ulong)(lVar5 != 0);
      local_88 = local_a8;
      FUN_006b4cc8(local_60,&local_a8);
      lVar5 = local_60[0];
      lVar1 = local_50;
      while (lVar5 != 0) {
        lVar4 = lVar5 + lVar1 * 0x18;
        lVar3 = *(long *)(lVar4 + 0x168);
        local_60[0] = lVar5;
        local_50 = lVar1;
        local_48 = &local_a8;
        if (lVar3 != 0) {
          __rustc::__rust_dealloc(*(undefined8 *)(lVar4 + 0x170),lVar3,1);
        }
                    /* try { // try from 006b4450 to 006b4453 has its CatchHandler @ 006b446c */
        FUN_006b4318(lVar5 + lVar1 * 0x20);
        FUN_006b4cc8(local_60,&local_a8);
        lVar5 = local_60[0];
        lVar1 = local_50;
      }
    }
  }
  return;
}


// ===== 006b44cc  FUN_006b44cc =====

void FUN_006b44cc(long *param_1)

{
  if (*param_1 != 0) {
    __rustc::__rust_dealloc(param_1[1],*param_1,1);
    return;
  }
  return;
}


// ===== 006b44e4  FUN_006b44e4 =====

void FUN_006b44e4(char *param_1,long param_2,undefined1 param_3)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long local_100;
  undefined1 local_f8;
  long local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined1 local_d8 [24];
  undefined8 local_c0 [5];
  char local_98;
  char cStack_97;
  undefined5 uStack_96;
  undefined1 uStack_91;
  undefined7 uStack_90;
  undefined1 uStack_89;
  undefined7 local_88;
  undefined1 uStack_81;
  undefined7 uStack_80;
  undefined1 uStack_79;
  ulong local_78;
  undefined8 local_70;
  long lStack_68;
  undefined8 local_58;
  
  local_100 = param_2;
  local_f8 = param_3;
  FUN_006b0038(&local_98,&local_100);
  lVar3 = local_100;
  if (local_98 == '\x01') {
    uVar6 = CONCAT17(uStack_89,uStack_90);
  }
  else {
    if (cStack_97 != '\x01') {
      param_1[8] = '\0';
      param_1[9] = '\0';
      param_1[10] = '\0';
      param_1[0xb] = '\0';
      param_1[0xc] = '\0';
      param_1[0xd] = '\0';
      param_1[0xe] = '\0';
      param_1[0xf] = '\0';
      *param_1 = '\x05';
      param_1[0x18] = '\0';
      param_1[0x19] = '\0';
      param_1[0x1a] = '\0';
      param_1[0x1b] = '\0';
      param_1[0x1c] = '\0';
      param_1[0x1d] = '\0';
      param_1[0x1e] = '\0';
      param_1[0x1f] = '\0';
      return;
    }
    FUN_006b48a4(&local_98,local_100);
    lVar2 = CONCAT17(uStack_91,CONCAT52(uStack_96,CONCAT11(cStack_97,local_98)));
    uVar6 = CONCAT17(uStack_89,uStack_90);
    if (lVar2 != -1) {
      uVar5 = *(ulong *)(lVar3 + 0x28);
      local_f0 = 0;
      local_e0 = 0;
      if (uVar5 < *(ulong *)(lVar3 + 0x20)) {
        do {
          bVar1 = *(byte *)(*(long *)(lVar3 + 0x18) + uVar5);
          if (0x3a < bVar1) {
LAB_006b484c:
            local_c0[0] = 6;
                    /* try { // try from 006b4854 to 006b485f has its CatchHandler @ 006b4870 */
            uVar4 = FUN_006b0bac(lVar3,local_c0);
            goto LAB_006b45c8;
          }
          if ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) == 0) {
            if ((ulong)bVar1 != 0x3a) goto LAB_006b484c;
            *(ulong *)(lVar3 + 0x28) = uVar5 + 1;
            FUN_006b01cc(param_1,lVar3);
            if (*param_1 == -1) goto LAB_006b4730;
                    /* try { // try from 006b4614 to 006b463b has its CatchHandler @ 006b4868 */
            FUN_006b4b64(&local_98,&local_f0,local_d8,param_1);
            if (local_98 != -1) {
              FUN_006b4318(&local_98);
            }
            goto LAB_006b4648;
          }
          uVar5 = uVar5 + 1;
          *(ulong *)(lVar3 + 0x28) = uVar5;
        } while (*(ulong *)(lVar3 + 0x20) != uVar5);
      }
      local_c0[0] = 3;
                    /* try { // try from 006b45bc to 006b4607 has its CatchHandler @ 006b4870 */
      uVar4 = FUN_006b0bac(lVar3,local_c0);
LAB_006b45c8:
      *(undefined8 *)(param_1 + 8) = uVar4;
      *param_1 = -1;
LAB_006b4730:
      if (lVar2 != 0) {
        __rustc::__rust_dealloc(uVar6,lVar2,1);
      }
      goto joined_r0x006b47f4;
    }
  }
  *(undefined8 *)(param_1 + 8) = uVar6;
  *param_1 = -1;
  return;
LAB_006b4648:
                    /* try { // try from 006b4648 to 006b467b has its CatchHandler @ 006b488c */
  FUN_006b0038(&local_98,&local_100);
  lVar3 = local_100;
  if (local_98 != '\x01') {
    if (cStack_97 != '\x01') {
      *param_1 = '\x05';
      uStack_89 = (undefined1)uStack_e8;
      uStack_91 = (undefined1)local_f0;
      uStack_90 = (undefined7)((ulong)local_f0 >> 8);
      *(ulong *)(param_1 + 9) = CONCAT17(uStack_89,uStack_90);
      *(ulong *)(param_1 + 1) = CONCAT17(uStack_91,CONCAT52(uStack_96,CONCAT11(cStack_97,local_98)))
      ;
      *(undefined8 *)(param_1 + 0x18) = local_e0;
      *(undefined8 *)(param_1 + 0x10) = uStack_e8;
      return;
    }
    FUN_006b48a4(&local_98,local_100);
    lVar2 = CONCAT17(uStack_91,CONCAT52(uStack_96,CONCAT11(cStack_97,local_98)));
    uVar6 = CONCAT17(uStack_89,uStack_90);
    uVar4 = uVar6;
    if (lVar2 == -1) {
LAB_006b4798:
      *(undefined8 *)(param_1 + 8) = uVar4;
      *param_1 = -1;
      goto joined_r0x006b47f4;
    }
    uVar5 = *(ulong *)(lVar3 + 0x28);
    if (*(ulong *)(lVar3 + 0x20) <= uVar5) {
LAB_006b4768:
      local_c0[0] = 3;
                    /* try { // try from 006b4770 to 006b477b has its CatchHandler @ 006b4864 */
      uVar4 = FUN_006b0bac(lVar3,local_c0);
LAB_006b477c:
      if (lVar2 != 0) {
LAB_006b4784:
        __rustc::__rust_dealloc(uVar6,lVar2,1);
      }
      goto LAB_006b4798;
    }
    while( true ) {
      bVar1 = *(byte *)(*(long *)(lVar3 + 0x18) + uVar5);
      if (0x3a < bVar1) goto LAB_006b4834;
      if ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) == 0) break;
      uVar5 = uVar5 + 1;
      *(ulong *)(lVar3 + 0x28) = uVar5;
      if (*(ulong *)(lVar3 + 0x20) == uVar5) goto LAB_006b4768;
    }
    if ((ulong)bVar1 != 0x3a) {
LAB_006b4834:
      local_c0[0] = 6;
                    /* try { // try from 006b483c to 006b4847 has its CatchHandler @ 006b4864 */
      uVar4 = FUN_006b0bac(lVar3,local_c0);
      goto LAB_006b477c;
    }
    *(ulong *)(lVar3 + 0x28) = uVar5 + 1;
                    /* try { // try from 006b46d8 to 006b46e3 has its CatchHandler @ 006b486c */
    FUN_006b01cc(&local_98,lVar3);
    if (local_98 == -1) {
      uVar4 = CONCAT17(uStack_89,uStack_90);
      if (lVar2 == 0) goto LAB_006b4798;
      goto LAB_006b4784;
    }
    local_c0[0] = CONCAT17(uStack_91,CONCAT52(uStack_96,CONCAT11(cStack_97,local_98)));
                    /* try { // try from 006b4704 to 006b472b has its CatchHandler @ 006b488c */
    FUN_006b4b64(&local_98,&local_f0,local_d8,local_c0);
    if (local_98 != -1) {
      FUN_006b4318(&local_98);
    }
    goto LAB_006b4648;
  }
  *(ulong *)(param_1 + 8) = CONCAT17(uStack_89,uStack_90);
  *param_1 = -1;
joined_r0x006b47f4:
  if (local_f0 == 0) {
    local_58 = 0;
  }
  else {
    uStack_90 = 0;
    uStack_89 = 0;
    local_88 = (undefined7)local_f0;
    uStack_81 = (undefined1)((ulong)local_f0 >> 0x38);
    local_70 = 0;
    uStack_80 = (undefined7)uStack_e8;
    uStack_79 = (undefined1)((ulong)uStack_e8 >> 0x38);
    local_58 = local_e0;
    lStack_68 = local_f0;
  }
  local_98 = local_f0 != 0;
  local_78 = (ulong)(byte)local_98;
  cStack_97 = 0;
  uStack_96 = 0;
  uStack_91 = 0;
  FUN_006b41fc(&local_98);
  return;
}


// ===== 006b48a4  FUN_006b48a4 =====

void FUN_006b48a4(size_t *param_1,long param_2)

{
  void *__dest;
  size_t sVar1;
  undefined8 uVar2;
  long local_58;
  void *pvStack_50;
  size_t local_48;
  
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(long *)(param_2 + 0x28) = *(long *)(param_2 + 0x28) + 1;
  <serde_json::read::StrRead_as_serde_json::read::Read>::parse_str(&local_58,param_2 + 0x18,param_2)
  ;
  if (local_58 == 2) {
    *param_1 = 0xffffffffffffffff;
    param_1[1] = (size_t)pvStack_50;
    return;
  }
  if ((long)local_48 < 0) {
    uVar2 = 0;
LAB_006b491c:
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(uVar2,local_48);
  }
  if (local_48 == 0) {
    sVar1 = 0;
    __dest = (void *)0x1;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar2 = 1;
    __dest = (void *)__rustc::__rust_alloc(local_48,1);
    if (__dest == (void *)0x0) goto LAB_006b491c;
    memcpy(__dest,pvStack_50,local_48);
    sVar1 = local_48;
  }
  *param_1 = sVar1;
  param_1[1] = (size_t)__dest;
  param_1[2] = local_48;
  return;
}


// ===== 006b4984  FUN_006b4984 =====

void FUN_006b4984(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *local_88;
  long local_80;
  long lStack_78;
  long local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if (param_2[4] == 0) {
    plVar3 = (long *)param_2[3];
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    local_88 = (undefined8 *)__rustc::__rust_alloc(0x278,8);
    if (local_88 == (undefined8 *)0x0) {
                    /* try { // try from 006b4a74 to 006b4a7f has its CatchHandler @ 006b4a84 */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0x278);
    }
    local_88[0x2c] = 0;
    *plVar3 = (long)local_88;
    plVar3[1] = 0;
    uVar6 = param_3[1];
    uVar5 = *param_3;
    uVar8 = param_3[3];
    uVar7 = param_3[2];
    uVar4 = param_2[1];
    uVar1 = *param_2;
    *(undefined2 *)((long)local_88 + 0x272) = 1;
    local_88[0x2e] = uVar4;
    local_88[0x2d] = uVar1;
    local_80 = 0;
    lStack_78 = 0;
    uVar1 = param_2[2];
    local_88[1] = uVar6;
    *local_88 = uVar5;
    local_88[3] = uVar8;
    local_88[2] = uVar7;
    local_88[0x2f] = uVar1;
  }
  else {
    uStack_68 = param_2[5];
    local_70 = param_2[4];
    local_60 = param_2[6];
    uStack_48 = param_2[1];
    local_50 = *param_2;
    local_40 = param_2[2];
    FUN_006b5ad0(&local_88,&local_70,&local_50,param_3,param_2 + 3,param_2 + 7);
    plVar3 = (long *)param_2[3];
  }
  lVar2 = plVar3[2];
  *param_1 = (long)local_88;
  param_1[2] = lStack_78;
  param_1[1] = local_80;
  plVar3[2] = lVar2 + 1;
  param_1[3] = param_2[3];
  return;
}


// ===== 006b4ab0  <serde_json::map::[d]::serde_json::map::Entry>::key =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::map::[d]::serde_json::map::Entry>::key */

long * __rustcall <serde_json::map::[d]::serde_json::map::Entry>::key(long *param_1)

{
  if (*param_1 != -1) {
    return param_1;
  }
  return (long *)(param_1[1] + param_1[3] * 0x18 + 0x168);
}


// ===== 006b4ad8  <serde_json::map::[d]::serde_json::map::Entry>::or_insert =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::map::[d]::serde_json::map::Entry>::or_insert */

long __rustcall
<serde_json::map::[d]::serde_json::map::Entry>::or_insert(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long local_80 [2];
  long local_70;
  long local_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long local_40;
  long lStack_38;
  long local_30;
  
  if (*param_1 != -1) {
    lStack_58 = param_1[1];
    local_60 = *param_1;
    lStack_48 = param_1[3];
    lStack_50 = param_1[2];
    lStack_38 = param_1[5];
    local_40 = param_1[4];
    local_30 = param_1[6];
    FUN_006b4984(local_80,&local_60);
    return local_80[0] + local_70 * 0x20;
  }
  lVar1 = param_1[1];
  lVar2 = param_1[3];
  FUN_006b4318(param_2);
  return lVar1 + lVar2 * 0x20;
}


// ===== 006b4b64  FUN_006b4b64 =====

void FUN_006b4b64(undefined8 *param_1,undefined8 *param_2,long *param_3,undefined8 *param_4)

{
  char cVar1;
  undefined8 *puVar2;
  size_t __n;
  long lVar3;
  void *__s1;
  ulong uVar4;
  ulong uVar5;
  ushort uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  void *pvVar10;
  undefined8 *unaff_x25;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long local_b8;
  void *pvStack_b0;
  long local_a8;
  undefined8 *puStack_a0;
  void *local_98;
  undefined8 uStack_90;
  undefined8 *local_88;
  undefined1 auStack_80 [32];
  
  pvVar10 = (void *)*param_2;
  if (pvVar10 != (void *)0x0) {
    __s1 = (void *)param_3[1];
    uVar4 = param_3[2];
    lVar12 = param_2[1];
    do {
      uVar6 = *(ushort *)((long)pvVar10 + 0x272);
      lVar9 = (long)pvVar10 + 0x168;
      puVar11 = (undefined8 *)0xffffffffffffffff;
      lVar8 = (long)(ulong)uVar6 * 0x18;
      do {
        local_88 = (undefined8 *)(ulong)uVar6;
        if (lVar8 == 0) goto LAB_006b4c0c;
        puVar2 = (undefined8 *)(lVar9 + 8);
        uVar5 = *(ulong *)(lVar9 + 0x10);
        lVar9 = lVar9 + 0x18;
        __n = uVar4;
        if (uVar5 <= uVar4) {
          __n = uVar5;
        }
        iVar7 = memcmp(__s1,(void *)*puVar2,__n);
        puVar11 = (undefined8 *)((long)puVar11 + 1);
        lVar8 = lVar8 + -0x18;
        lVar3 = uVar4 - uVar5;
        if (iVar7 != 0) {
          lVar3 = (long)iVar7;
        }
        cVar1 = 0 < lVar3;
        if (lVar3 < 0) {
          cVar1 = -1;
        }
      } while (cVar1 == '\x01');
      local_88 = puVar11;
      if (cVar1 == '\0') {
        param_2 = puVar11;
        if (*param_3 != 0) {
          __rustc::__rust_dealloc(__s1,*param_3,1);
        }
        goto LAB_006b4c94;
      }
LAB_006b4c0c:
      if (lVar12 == 0) goto LAB_006b4c7c;
      lVar12 = lVar12 + -1;
      pvVar10 = *(void **)((long)pvVar10 + (long)local_88 * 8 + 0x278);
    } while( true );
  }
  local_b8 = *param_3;
  local_98 = pvVar10;
  pvVar10 = (void *)param_3[1];
  local_88 = unaff_x25;
joined_r0x006b4c4c:
  if (local_b8 == -1) {
LAB_006b4c94:
    puVar11 = (undefined8 *)((long)pvVar10 + (long)param_2 * 0x20);
    uVar15 = *puVar11;
    uVar14 = puVar11[3];
    uVar13 = puVar11[2];
    param_1[1] = puVar11[1];
    *param_1 = uVar15;
    param_1[3] = uVar14;
    param_1[2] = uVar13;
    uVar15 = *param_4;
    uVar14 = param_4[3];
    uVar13 = param_4[2];
    puVar11[1] = param_4[1];
    *puVar11 = uVar15;
    puVar11[3] = uVar14;
    puVar11[2] = uVar13;
  }
  else {
    local_a8 = param_3[2];
    uStack_90 = 0;
    pvStack_b0 = pvVar10;
    puStack_a0 = param_2;
    FUN_006b4984(auStack_80,&local_b8);
    *(undefined1 *)param_1 = 0xff;
  }
  return;
LAB_006b4c7c:
  local_b8 = *param_3;
  local_98 = pvVar10;
  pvVar10 = __s1;
  goto joined_r0x006b4c4c;
}


// ===== 006b4cc8  FUN_006b4cc8 =====

void FUN_006b4cc8(long *param_1,long *param_2)

{
  undefined8 uVar1;
  ushort uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  
  if (param_2[8] == 0) {
    lVar3 = *param_2;
    lVar8 = param_2[1];
    *param_2 = 0;
    lVar5 = param_2[2];
    lVar4 = param_2[3];
    if (lVar3 == 1) {
      if (lVar8 == 0) {
        for (; lVar4 != 0; lVar4 = lVar4 + -1) {
          lVar5 = *(long *)(lVar5 + 0x278);
        }
        lVar3 = 0;
        lVar8 = lVar5;
        lVar5 = *(long *)(lVar5 + 0x160);
      }
      else {
        lVar3 = lVar5;
        lVar5 = *(long *)(lVar8 + 0x160);
      }
      for (; lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x160)) {
        uVar1 = 0x278;
        if (lVar3 != 0) {
          uVar1 = 0x2d8;
        }
        lVar3 = lVar3 + 1;
        __rustc::__rust_dealloc(lVar8,uVar1,8);
        lVar8 = lVar5;
      }
      uVar1 = 0x278;
      if (lVar3 != 0) {
        uVar1 = 0x2d8;
      }
      __rustc::__rust_dealloc(lVar8,uVar1,8);
    }
    *param_1 = 0;
    return;
  }
  param_2[8] = param_2[8] + -1;
  if (*param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__rustc_48a229ceaefd4985c50990b14_00976420);
  }
  lVar3 = param_2[1];
  if (lVar3 == 0) {
    lVar3 = param_2[2];
    for (lVar5 = param_2[3]; lVar5 != 0; lVar5 = lVar5 + -1) {
      lVar3 = *(long *)(lVar3 + 0x278);
    }
    param_2[2] = 0;
    param_2[3] = 0;
    *param_2 = 1;
    param_2[1] = lVar3;
    lVar5 = param_2[2];
    uVar7 = param_2[3];
    lVar8 = lVar3;
    if (uVar7 < *(ushort *)(lVar3 + 0x272)) goto joined_r0x006b4d20;
  }
  else {
    lVar5 = param_2[2];
    uVar7 = param_2[3];
    lVar8 = lVar3;
    if (uVar7 < *(ushort *)(lVar3 + 0x272)) goto joined_r0x006b4d20;
  }
  do {
    lVar8 = *(long *)(lVar3 + 0x160);
    if (lVar8 == 0) {
      uVar1 = 0x278;
      if (lVar5 != 0) {
        uVar1 = 0x2d8;
      }
      __rustc::__rust_dealloc(lVar3,uVar1,8);
                    /* try { // try from 006b4ebc to 006b4ec7 has its CatchHandler @ 006b4ed8 */
                    /* WARNING: Subroutine does not return */
      core::option::unwrap_failed(&PTR_s__rustc_48a229ceaefd4985c50990b14_00976438);
    }
    uVar2 = *(ushort *)(lVar3 + 0x270);
    uVar7 = (ulong)uVar2;
    uVar1 = 0x278;
    if (lVar5 != 0) {
      uVar1 = 0x2d8;
    }
    lVar5 = lVar5 + 1;
    __rustc::__rust_dealloc(lVar3,uVar1,8);
    lVar3 = lVar8;
  } while (*(ushort *)(lVar8 + 0x272) <= uVar2);
joined_r0x006b4d20:
  if (lVar5 == 0) {
    lVar3 = uVar7 + 1;
    lVar4 = lVar8;
  }
  else {
    plVar6 = (long *)(lVar8 + uVar7 * 8 + 0x280);
    lVar3 = lVar5;
    do {
      lVar4 = *plVar6;
      lVar3 = lVar3 + -1;
      plVar6 = (long *)(lVar4 + 0x278);
    } while (lVar3 != 0);
    lVar3 = 0;
  }
  *param_1 = lVar8;
  param_1[1] = lVar5;
  param_1[2] = uVar7;
  param_2[1] = lVar4;
  param_2[2] = 0;
  param_2[3] = lVar3;
  return;
}


// ===== 006b4edc  <usize_as_serde_json::value::index::Index>::index_or_insert =====

/* WARNING: Unknown calling convention: __rustcall */
/* <usize as serde_json::value::index::Index>::index_or_insert */

long __rustcall
<usize_as_serde_json::value::index::Index>::index_or_insert(ulong *param_1,char *param_2)

{
  ulong *local_40;
  char *local_38;
  undefined1 *local_30;
  code *local_28;
  char **local_20;
  undefined *puStack_18;
  
  local_30 = (undefined1 *)&local_40;
  local_40 = param_1;
  if (*param_2 != '\x04') {
    local_20 = &local_38;
    local_28 = FUN_006b25e0;
    puStack_18 = PTR_fmt_0099f720;
    local_38 = param_2;
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt
              (&DAT_0036c1ae,&local_30,&PTR_s__home_runner__cargo_registry_src_00976480);
  }
  local_38 = *(char **)(param_2 + 0x18);
  if ((char *)*param_1 < local_38) {
    return *(long *)(param_2 + 0x10) + (long)*param_1 * 0x20;
  }
  local_28 = FUN_006b25e0;
  local_20 = &local_38;
  puStack_18 = PTR_fmt_0099f458;
  local_30 = (undefined1 *)&local_40;
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_0036bbc3,&local_30,&PTR_s__home_runner__cargo_registry_src_00976468);
}


// ===== 006b4f94  FUN_006b4f94 =====

void FUN_006b4f94(long *param_1)

{
  long lVar1;
  ulong local_58 [3];
  long local_40;
  ulong local_38;
  undefined8 local_30;
  long lStack_28;
  long local_20;
  long local_18;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    local_18 = 0;
  }
  else {
    local_40 = param_1[1];
    local_18 = param_1[2];
    local_58[1] = 0;
    local_30 = 0;
    local_58[2] = lVar1;
    lStack_28 = lVar1;
    local_20 = local_40;
  }
  local_58[0] = (ulong)(lVar1 != 0);
  local_38 = local_58[0];
  FUN_006b41fc(local_58);
  return;
}


// ===== 006b4fe8  <<serde_json[b3499e235aa4f7be]::value::Value_as_serde_core[fd83d7a2bf1ac210]::de::Deserialize>::deserialize::ValueVisitor_as_serde_core[fd83d7a2bf1ac210]::de::Visitor>::expecting =====

/* <<serde_json[b3499e235aa4f7be]::value::Value as
   serde_core[fd83d7a2bf1ac210]::de::Deserialize>::deserialize::ValueVisitor as
   serde_core[fd83d7a2bf1ac210]::de::Visitor>::expecting */

void <<serde_json[b3499e235aa4f7be]::value::Value_as_serde_core[fd83d7a2bf1ac210]::de::Deserialize>::deserialize::ValueVisitor_as_serde_core[fd83d7a2bf1ac210]::de::Visitor>
     ::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"any valid JSON value",0x14);
  return;
}


// ===== 006b4ffc  <<serde_json[b3499e235aa4f7be]::map::Map<alloc[cc0d62b833a55794]::string::String,serde_json[b3499e235aa4f7be]::value::Value>as_serde_core[fd83d7a2bf1ac210]::de::Deserialize>::deserialize::Visitor_as_serde_core[fd83d7a2bf1ac210]::de::Visitor>::expecting =====

/* <<serde_json[b3499e235aa4f7be]::map::Map<alloc[cc0d62b833a55794]::string::String,
   serde_json[b3499e235aa4f7be]::value::Value> as
   serde_core[fd83d7a2bf1ac210]::de::Deserialize>::deserialize::Visitor as
   serde_core[fd83d7a2bf1ac210]::de::Visitor>::expecting */

void <<serde_json[b3499e235aa4f7be]::map::Map<alloc[cc0d62b833a55794]::string::String,serde_json[b3499e235aa4f7be]::value::Value>as_serde_core[fd83d7a2bf1ac210]::de::Deserialize>::deserialize::Visitor_as_serde_core[fd83d7a2bf1ac210]::de::Visitor>
     ::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"a map",5);
  return;
}


// ===== 006b5010  <serde_json::map::Map<alloc::string::String,serde_json::value::Value>as_core::str::traits::FromStr>::from_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::map::Map<alloc::string::String, serde_json::value::Value> as
   core::str::traits::FromStr>::from_str */

void __rustcall
<serde_json::map::Map<alloc::string::String,serde_json::value::Value>as_core::str::traits::FromStr>
::from_str(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_18 = 0;
  local_28 = param_1;
  uStack_20 = param_2;
  FUN_006afaa0(&local_28);
  return;
}


// ===== 006b5038  <alloc::string::String_as_serde_json::value::index::Index>::index_into =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::string::String as serde_json::value::index::Index>::index_into */

long __rustcall
<alloc::string::String_as_serde_json::value::index::Index>::index_into(long param_1,char *param_2)

{
  char cVar1;
  undefined8 *puVar2;
  size_t __n;
  long lVar3;
  void *__s1;
  ulong uVar4;
  ushort uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  
  if ((*param_2 != '\x05') || (lVar9 = *(long *)(param_2 + 8), lVar9 == 0)) {
    return 0;
  }
  __s1 = *(void **)(param_1 + 8);
  uVar4 = *(ulong *)(param_1 + 0x10);
  lVar10 = *(long *)(param_2 + 0x10);
  do {
    uVar5 = *(ushort *)(lVar9 + 0x272);
    lVar8 = lVar9 + -0x20;
    uVar11 = 0xffffffffffffffff;
    lVar13 = (ulong)uVar5 * 0x18;
    lVar7 = lVar9 + 0x168;
    do {
      uVar12 = (ulong)uVar5;
      if (lVar13 == 0) goto LAB_006b50e4;
      puVar2 = (undefined8 *)(lVar7 + 8);
      uVar12 = *(ulong *)(lVar7 + 0x10);
      lVar7 = lVar7 + 0x18;
      __n = uVar4;
      if (uVar12 <= uVar4) {
        __n = uVar12;
      }
      iVar6 = memcmp(__s1,(void *)*puVar2,__n);
      lVar8 = lVar8 + 0x20;
      uVar11 = uVar11 + 1;
      lVar13 = lVar13 + -0x18;
      lVar3 = uVar4 - uVar12;
      if (iVar6 != 0) {
        lVar3 = (long)iVar6;
      }
      cVar1 = 0 < lVar3;
      if (lVar3 < 0) {
        cVar1 = -1;
      }
    } while (cVar1 == '\x01');
    uVar12 = uVar11;
    if (cVar1 == '\0') {
      return lVar8;
    }
LAB_006b50e4:
    if (lVar10 == 0) {
      return 0;
    }
    lVar10 = lVar10 + -1;
    lVar9 = *(long *)(lVar9 + uVar12 * 8 + 0x278);
  } while( true );
}


// ===== 006b511c  <alloc::string::String_as_serde_json::value::index::Index>::index_into_mut =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::string::String as serde_json::value::index::Index>::index_into_mut */

long __rustcall
<alloc::string::String_as_serde_json::value::index::Index>::index_into_mut
          (long param_1,char *param_2)

{
  char cVar1;
  undefined8 *puVar2;
  size_t __n;
  long lVar3;
  void *__s1;
  ulong uVar4;
  ushort uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  
  if ((*param_2 != '\x05') || (lVar9 = *(long *)(param_2 + 8), lVar9 == 0)) {
    return 0;
  }
  __s1 = *(void **)(param_1 + 8);
  uVar4 = *(ulong *)(param_1 + 0x10);
  lVar10 = *(long *)(param_2 + 0x10);
  do {
    uVar5 = *(ushort *)(lVar9 + 0x272);
    lVar8 = lVar9 + -0x20;
    uVar11 = 0xffffffffffffffff;
    lVar13 = (ulong)uVar5 * 0x18;
    lVar7 = lVar9 + 0x168;
    do {
      uVar12 = (ulong)uVar5;
      if (lVar13 == 0) goto LAB_006b51c8;
      puVar2 = (undefined8 *)(lVar7 + 8);
      uVar12 = *(ulong *)(lVar7 + 0x10);
      lVar7 = lVar7 + 0x18;
      __n = uVar4;
      if (uVar12 <= uVar4) {
        __n = uVar12;
      }
      iVar6 = memcmp(__s1,(void *)*puVar2,__n);
      lVar8 = lVar8 + 0x20;
      uVar11 = uVar11 + 1;
      lVar13 = lVar13 + -0x18;
      lVar3 = uVar4 - uVar12;
      if (iVar6 != 0) {
        lVar3 = (long)iVar6;
      }
      cVar1 = 0 < lVar3;
      if (lVar3 < 0) {
        cVar1 = -1;
      }
    } while (cVar1 == '\x01');
    uVar12 = uVar11;
    if (cVar1 == '\0') {
      return lVar8;
    }
LAB_006b51c8:
    if (lVar10 == 0) {
      return 0;
    }
    lVar10 = lVar10 + -1;
    lVar9 = *(long *)(lVar9 + uVar12 * 8 + 0x278);
  } while( true );
}


// ===== 006b5200  <alloc::string::String_as_serde_json::value::index::Index>::index_or_insert =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::string::String as serde_json::value::index::Index>::index_or_insert */

void __rustcall
<alloc::string::String_as_serde_json::value::index::Index>::index_or_insert
          (long param_1,undefined8 param_2)

{
  <str_as_serde_json::value::index::Index>::index_or_insert
            (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),param_2);
  return;
}


// ===== 006b5214  FUN_006b5214 =====

void FUN_006b5214(long *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Debug>::fmt
            (*(undefined8 *)(*param_1 + 8),*(undefined8 *)(*param_1 + 0x10),param_2);
  return;
}


// ===== 006b5228  FUN_006b5228 =====

void FUN_006b5228(undefined8 *param_1,undefined8 param_2)

{
  <dyn_Trait<Assoc=X>+serde_core::de::Expected_as_core::fmt::Display>::fmt
            (*param_1,param_1[1],param_2);
  return;
}


// ===== 006b523c  FUN_006b523c =====

void FUN_006b523c(long *param_1,undefined8 param_2)

{
  ushort *puVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined1 auStack_60 [16];
  long local_50;
  long local_48;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_map(auStack_60,param_2);
  lVar4 = *param_1;
  bVar2 = lVar4 != 0;
  if ((lVar4 != 0) && (lVar7 = param_1[2], lVar7 != 0)) {
    uVar3 = param_1[1];
    lVar5 = 0;
    do {
      if (!bVar2) {
                    /* WARNING: Subroutine does not return */
        core::option::unwrap_failed(&PTR_s__rustc_48a229ceaefd4985c50990b14_009764e0);
      }
      if (lVar5 == 0) {
        for (; lVar5 = lVar4, uVar3 != 0; uVar3 = uVar3 - 1) {
          lVar4 = *(long *)(lVar5 + 0x278);
        }
        lVar4 = 0;
        uVar3 = 0;
        lVar8 = lVar5;
        if (*(short *)(lVar5 + 0x272) == 0) goto LAB_006b5324;
      }
      else {
        lVar8 = lVar5;
        if (*(ushort *)(lVar5 + 0x272) <= uVar3) {
LAB_006b5324:
          do {
            lVar5 = *(long *)(lVar8 + 0x160);
            if (lVar5 == 0) {
                    /* try { // try from 006b5388 to 006b5393 has its CatchHandler @ 006b53a4 */
                    /* WARNING: Subroutine does not return */
              core::option::unwrap_failed(&PTR_s__rustc_48a229ceaefd4985c50990b14_00976450);
            }
            puVar1 = (ushort *)(lVar8 + 0x270);
            uVar3 = (ulong)*puVar1;
            lVar4 = lVar4 + 1;
            lVar8 = lVar5;
          } while (*(ushort *)(lVar5 + 0x272) <= *puVar1);
        }
      }
      if (lVar4 == 0) {
        uVar9 = uVar3 + 1;
        lVar8 = lVar5;
      }
      else {
        plVar6 = (long *)(lVar5 + uVar3 * 8 + 0x280);
        do {
          lVar8 = *plVar6;
          lVar4 = lVar4 + -1;
          plVar6 = (long *)(lVar8 + 0x278);
        } while (lVar4 != 0);
        uVar9 = 0;
      }
      local_48 = lVar5 + uVar3 * 0x20;
      lVar7 = lVar7 + -1;
      local_50 = lVar5 + uVar3 * 0x18 + 0x168;
      <core::fmt::builders::[6]::core::fmt::builders::DebugMap>::entry
                (auStack_60,&local_50,&DAT_00976400,&local_48,&DAT_009763e0);
      lVar4 = 0;
      bVar2 = true;
      uVar3 = uVar9;
      lVar5 = lVar8;
    } while (lVar7 != 0);
  }
  <core::fmt::builders::[6]::core::fmt::builders::DebugMap>::finish(auStack_60);
  return;
}


// ===== 006b53a8  <serde_json::value::index::Type_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::index::Type as core::fmt::Display>::fmt */

void __rustcall
<serde_json::value::index::Type_as_core::fmt::Display>::fmt(undefined8 *param_1,undefined8 param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)*param_1;
  if (2 < bVar1) {
    if (bVar1 == 3) {
      <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"string",6);
      return;
    }
    if (bVar1 == 4) {
      <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"array",5);
      return;
    }
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"objectinf",6);
    return;
  }
  if (bVar1 == 0) {
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_00377358,4);
    return;
  }
  if (bVar1 == 1) {
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"boolean",7);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"number",6);
  return;
}


// ===== 006b5438  <serde_json::value::de::VariantDeserializer_as_serde_core::de::VariantAccess>::unit_variant =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::de::VariantDeserializer as serde_core::de::VariantAccess>::unit_variant */

undefined8 __rustcall
<serde_json::value::de::VariantDeserializer_as_serde_core::de::VariantAccess>::unit_variant
          (char *param_1)

{
  undefined8 uVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 uStack_1;
  
  if (*param_1 != -1) {
    uStack_38 = *(undefined8 *)(param_1 + 8);
    local_40 = *(undefined8 *)param_1;
    uStack_28 = *(undefined8 *)(param_1 + 0x18);
    uStack_30 = *(undefined8 *)(param_1 + 0x10);
    if ((char)local_40 == '\0') {
      uVar1 = 0;
    }
    else {
                    /* try { // try from 006b549c to 006b54a3 has its CatchHandler @ 006b54ac */
      uVar1 = FUN_006abf6c(param_1,&uStack_1);
    }
    FUN_006ac060(&local_40);
    return uVar1;
  }
  return 0;
}


// ===== 006b54c4  <serde_json::value::de::SeqDeserializer_as_serde_core::de::SeqAccess>::size_hint =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::de::SeqDeserializer as serde_core::de::SeqAccess>::size_hint */

undefined1  [16] __rustcall
<serde_json::value::de::SeqDeserializer_as_serde_core::de::SeqAccess>::size_hint(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = (ulong)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 8)) >> 5;
  auVar1._0_8_ = 1;
  return auVar1;
}


// ===== 006b54e0  FUN_006b54e0 =====

undefined8 FUN_006b54e0(long *param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  lVar5 = param_1[2];
  if (param_2 < 0x80) {
    uVar6 = 1;
  }
  else if (param_2 < 0x800) {
    uVar6 = 2;
  }
  else {
    uVar6 = 3;
    if (0xffff < param_2) {
      uVar6 = 4;
    }
  }
  if ((ulong)(*param_1 - lVar5) < uVar6) {
    FUN_006b1db8(param_1,lVar5,uVar6,1,1);
    lVar4 = param_1[1];
  }
  else {
    lVar4 = param_1[1];
  }
  pbVar3 = (byte *)(lVar4 + lVar5);
  if (param_2 < 0x80) {
    *pbVar3 = (byte)param_2;
  }
  else {
    bVar1 = (byte)param_2 & 0x3f | 0x80;
    if (param_2 < 0x800) {
      pbVar3[1] = bVar1;
      *pbVar3 = (byte)(param_2 >> 6) | 0xc0;
    }
    else {
      bVar2 = (byte)(param_2 >> 6) & 0x3f | 0x80;
      if (param_2 >> 0x10 == 0) {
        pbVar3[1] = bVar2;
        pbVar3[2] = bVar1;
        *pbVar3 = (byte)(param_2 >> 0xc) | 0xe0;
      }
      else {
        pbVar3[2] = bVar2;
        pbVar3[3] = bVar1;
        pbVar3[1] = (byte)(param_2 >> 0xc) & 0x3f | 0x80;
        *pbVar3 = (byte)(param_2 >> 0x12) | 0xf0;
      }
    }
  }
  param_1[2] = uVar6 + lVar5;
  return 0;
}


// ===== 006b5604  FUN_006b5604 =====

undefined8 FUN_006b5604(long *param_1,void *param_2,ulong param_3)

{
  long lVar1;
  
  lVar1 = param_1[2];
  if ((ulong)(*param_1 - lVar1) < param_3) {
    FUN_006b1db8(param_1,lVar1,param_3,1,1);
    lVar1 = param_1[2];
  }
  else if (param_3 == 0) goto LAB_006b5644;
  memcpy((void *)(param_1[1] + lVar1),param_2,param_3);
LAB_006b5644:
  param_1[2] = lVar1 + param_3;
  return 0;
}


// ===== 006b5688  <serde_core::de::impls::UnitVisitor_as_serde_core::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <serde_core::de::impls::UnitVisitor_as_serde_core::de::Visitor>::expecting(void)

{
  (*(code *)PTR_expecting_009a07c8)();
  return;
}


// ===== 006b568c  <str_as_serde_json::value::index::Index>::index_into =====

/* WARNING: Unknown calling convention: __rustcall */
/* <str as serde_json::value::index::Index>::index_into */

long __rustcall
<str_as_serde_json::value::index::Index>::index_into(void *param_1,ulong param_2,char *param_3)

{
  char cVar1;
  undefined8 *puVar2;
  size_t __n;
  long lVar3;
  ushort uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  
  if ((*param_3 != '\x05') || (lVar8 = *(long *)(param_3 + 8), lVar8 == 0)) {
    return 0;
  }
  lVar9 = *(long *)(param_3 + 0x10);
  do {
    uVar4 = *(ushort *)(lVar8 + 0x272);
    lVar7 = lVar8 + -0x20;
    uVar10 = 0xffffffffffffffff;
    lVar12 = (ulong)uVar4 * 0x18;
    lVar6 = lVar8 + 0x168;
    do {
      uVar11 = (ulong)uVar4;
      if (lVar12 == 0) goto LAB_006b573c;
      puVar2 = (undefined8 *)(lVar6 + 8);
      uVar11 = *(ulong *)(lVar6 + 0x10);
      lVar6 = lVar6 + 0x18;
      __n = param_2;
      if (uVar11 <= param_2) {
        __n = uVar11;
      }
      iVar5 = memcmp(param_1,(void *)*puVar2,__n);
      lVar7 = lVar7 + 0x20;
      uVar10 = uVar10 + 1;
      lVar12 = lVar12 + -0x18;
      lVar3 = param_2 - uVar11;
      if (iVar5 != 0) {
        lVar3 = (long)iVar5;
      }
      cVar1 = 0 < lVar3;
      if (lVar3 < 0) {
        cVar1 = -1;
      }
    } while (cVar1 == '\x01');
    uVar11 = uVar10;
    if (cVar1 == '\0') {
      return lVar7;
    }
LAB_006b573c:
    if (lVar9 == 0) {
      return 0;
    }
    lVar9 = lVar9 + -1;
    lVar8 = *(long *)(lVar8 + uVar11 * 8 + 0x278);
  } while( true );
}


// ===== 006b5774  <str_as_serde_json::value::index::Index>::index_into_mut =====

/* WARNING: Unknown calling convention: __rustcall */
/* <str as serde_json::value::index::Index>::index_into_mut */

long __rustcall
<str_as_serde_json::value::index::Index>::index_into_mut(void *param_1,ulong param_2,char *param_3)

{
  char cVar1;
  undefined8 *puVar2;
  size_t __n;
  long lVar3;
  ushort uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  
  if ((*param_3 != '\x05') || (lVar8 = *(long *)(param_3 + 8), lVar8 == 0)) {
    return 0;
  }
  lVar9 = *(long *)(param_3 + 0x10);
  do {
    uVar4 = *(ushort *)(lVar8 + 0x272);
    lVar7 = lVar8 + -0x20;
    uVar10 = 0xffffffffffffffff;
    lVar12 = (ulong)uVar4 * 0x18;
    lVar6 = lVar8 + 0x168;
    do {
      uVar11 = (ulong)uVar4;
      if (lVar12 == 0) goto LAB_006b5824;
      puVar2 = (undefined8 *)(lVar6 + 8);
      uVar11 = *(ulong *)(lVar6 + 0x10);
      lVar6 = lVar6 + 0x18;
      __n = param_2;
      if (uVar11 <= param_2) {
        __n = uVar11;
      }
      iVar5 = memcmp(param_1,(void *)*puVar2,__n);
      lVar7 = lVar7 + 0x20;
      uVar10 = uVar10 + 1;
      lVar12 = lVar12 + -0x18;
      lVar3 = param_2 - uVar11;
      if (iVar5 != 0) {
        lVar3 = (long)iVar5;
      }
      cVar1 = 0 < lVar3;
      if (lVar3 < 0) {
        cVar1 = -1;
      }
    } while (cVar1 == '\x01');
    uVar11 = uVar10;
    if (cVar1 == '\0') {
      return lVar7;
    }
LAB_006b5824:
    if (lVar9 == 0) {
      return 0;
    }
    lVar9 = lVar9 + -1;
    lVar8 = *(long *)(lVar8 + uVar11 * 8 + 0x278);
  } while( true );
}


// ===== 006b585c  <str_as_serde_json::value::index::Index>::index_or_insert =====

/* WARNING: Unknown calling convention: __rustcall */
/* <str as serde_json::value::index::Index>::index_or_insert */

char * __rustcall
<str_as_serde_json::value::index::Index>::index_or_insert
          (void *param_1,void **param_2,char *param_3)

{
  char cVar1;
  undefined8 *puVar2;
  void **__n;
  long lVar3;
  void **ppvVar4;
  ushort uVar5;
  int iVar6;
  void *__dest;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  ulong unaff_x24;
  ulong uVar11;
  long lVar12;
  long lVar13;
  void *local_e8;
  void **ppvStack_e0;
  undefined1 local_d8 [32];
  char *local_b8 [2];
  long local_a8;
  void **local_98;
  code *pcStack_90;
  char **local_88;
  char *pcStack_80;
  long local_78;
  undefined8 uStack_70;
  ulong local_68;
  
  local_e8 = param_1;
  ppvStack_e0 = param_2;
  if (*param_3 == '\0') {
                    /* try { // try from 006b5894 to 006b589b has its CatchHandler @ 006b5a60 */
    FUN_006b4318(param_3);
    param_3[8] = '\0';
    param_3[9] = '\0';
    param_3[10] = '\0';
    param_3[0xb] = '\0';
    param_3[0xc] = '\0';
    param_3[0xd] = '\0';
    param_3[0xe] = '\0';
    param_3[0xf] = '\0';
    *param_3 = '\x05';
    param_3[0x18] = '\0';
    param_3[0x19] = '\0';
    param_3[0x1a] = '\0';
    param_3[0x1b] = '\0';
    param_3[0x1c] = '\0';
    param_3[0x1d] = '\0';
    param_3[0x1e] = '\0';
    param_3[0x1f] = '\0';
  }
  else if (*param_3 != '\x05') {
    local_98 = &local_e8;
    pcStack_90 = FUN_006b25a8;
    local_88 = local_b8;
    pcStack_80 = PTR_fmt_0099f720;
    local_b8[0] = param_3;
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt
              (&DAT_00370216,&local_98,&PTR_s__home_runner__cargo_registry_src_00976498);
  }
  if ((long)param_2 < 0) {
    uVar9 = 0;
LAB_006b58c0:
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(uVar9,param_2);
  }
  if (param_2 == (void **)0x0) {
    __dest = (void *)0x1;
    lVar8 = *(long *)(param_3 + 8);
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar9 = 1;
    __dest = (void *)__rustc::__rust_alloc(param_2,1);
    if (__dest == (void *)0x0) goto LAB_006b58c0;
    memcpy(__dest,param_1,(size_t)param_2);
    lVar8 = *(long *)(param_3 + 8);
  }
  if (lVar8 != 0) {
    lVar7 = *(long *)(param_3 + 0x10);
    do {
      uVar5 = *(ushort *)(lVar8 + 0x272);
      lVar10 = lVar8 + 0x168;
      uVar11 = 0xffffffffffffffff;
      lVar12 = 0x20;
      lVar13 = (ulong)uVar5 * 0x18;
      do {
        unaff_x24 = (ulong)uVar5;
        if (lVar13 == 0) goto LAB_006b597c;
        puVar2 = (undefined8 *)(lVar10 + 8);
        ppvVar4 = *(void ***)(lVar10 + 0x10);
        lVar10 = lVar10 + 0x18;
        __n = param_2;
        if (ppvVar4 <= param_2) {
          __n = ppvVar4;
        }
        iVar6 = memcmp(__dest,(void *)*puVar2,(size_t)__n);
        lVar12 = lVar12 + -0x20;
        uVar11 = uVar11 + 1;
        lVar13 = lVar13 + -0x18;
        lVar3 = (long)param_2 - (long)ppvVar4;
        if (iVar6 != 0) {
          lVar3 = (long)iVar6;
        }
        cVar1 = 0 < lVar3;
        if (lVar3 < 0) {
          cVar1 = -1;
        }
      } while (cVar1 == '\x01');
      unaff_x24 = uVar11;
      if (cVar1 == '\0') {
        if (param_2 != (void **)0x0) {
          __rustc::__rust_dealloc(__dest,param_2,1);
        }
        local_d8[0] = 0;
        FUN_006b4318(local_d8);
        return (char *)(lVar8 - lVar12);
      }
LAB_006b597c:
      if (lVar7 == 0) break;
      lVar7 = lVar7 + -1;
      lVar8 = *(long *)(lVar8 + unaff_x24 * 8 + 0x278);
    } while( true );
  }
  pcStack_80 = param_3 + 8;
  local_d8[0] = 0;
  uStack_70 = 0;
  local_98 = param_2;
  pcStack_90 = (code *)__dest;
  local_88 = (char **)param_2;
  local_78 = lVar8;
  local_68 = unaff_x24;
  FUN_006b4984(local_b8,&local_98,local_d8);
  return local_b8[0] + local_a8 * 0x20;
}


// ===== 006b5a74  <serde_json::value::de::VariantRefDeserializer_as_serde_core::de::VariantAccess>::unit_variant =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::de::VariantRefDeserializer as serde_core::de::VariantAccess>::unit_variant */

char * __rustcall
<serde_json::value::de::VariantRefDeserializer_as_serde_core::de::VariantAccess>::unit_variant
          (char *param_1)

{
  undefined1 uStack_11;
  
  if (param_1 != (char *)0x0) {
    if (*param_1 == '\0') {
      return (char *)0x0;
    }
    param_1 = (char *)FUN_006abf6c(param_1,&uStack_11);
  }
  return param_1;
}


// ===== 006b5aa8  <serde_json::value::de::KeyClassifier_as_serde_core::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::value::de::KeyClassifier as serde_core::de::Visitor>::expecting */

void __rustcall
<serde_json::value::de::KeyClassifier_as_serde_core::de::Visitor>::expecting
          (undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"a string key",0xc);
  return;
}


// ===== 006b5abc  FUN_006b5abc =====

void FUN_006b5abc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  core::fmt::write(param_1,&PTR_FUN_009764b0,param_2,param_3);
  return;
}


// ===== 006b5ad0  FUN_006b5ad0 =====

void FUN_006b5ad0(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  void *pvVar4;
  bool bVar5;
  void *__dest;
  undefined8 *puVar6;
  undefined8 uVar7;
  void *pvVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  void *pvVar15;
  void *pvVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  void *pvVar22;
  undefined8 *puVar23;
  long lVar24;
  ulong uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  ulong local_1a0;
  ulong local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  
  pvVar15 = (void *)*param_2;
  uVar1 = *(ushort *)((long)pvVar15 + 0x272);
  uVar18 = (ulong)uVar1;
  if (uVar1 < 0xb) {
    local_1a0 = param_2[2];
    puVar23 = (undefined8 *)((long)pvVar15 + local_1a0 * 0x18 + 0x168);
    uVar12 = local_1a0 + 1;
    puVar6 = (undefined8 *)((long)pvVar15 + local_1a0 * 0x20);
    if (uVar18 < uVar12) {
      uVar26 = *param_3;
      uVar7 = param_3[2];
      puVar23[1] = param_3[1];
      *puVar23 = uVar26;
      uStack_108 = param_4[1];
      local_110 = *param_4;
      local_f8 = param_4[3];
      local_100 = param_4[2];
      puVar23[2] = uVar7;
    }
    else {
      memmove((void *)((long)pvVar15 + uVar12 * 0x18 + 0x168),puVar23,(uVar18 - local_1a0) * 0x18);
      uVar26 = *param_3;
      uVar7 = param_3[2];
      puVar23[1] = param_3[1];
      *puVar23 = uVar26;
      uStack_108 = param_4[1];
      local_110 = *param_4;
      local_f8 = param_4[3];
      local_100 = param_4[2];
      puVar23[2] = uVar7;
      memmove((void *)((long)pvVar15 + uVar12 * 0x20),puVar6,(uVar18 - local_1a0) * 0x20);
    }
    uVar18 = param_2[1];
    puVar6[1] = uStack_108;
    *puVar6 = local_110;
    puVar6[3] = local_f8;
    puVar6[2] = local_100;
    *(ushort *)((long)pvVar15 + 0x272) = uVar1 + 1;
    pvVar16 = pvVar15;
  }
  else {
    local_1a0 = param_2[2];
    if (local_1a0 < 5) {
      bVar5 = false;
      uVar18 = 4;
    }
    else if (local_1a0 == 5) {
      bVar5 = false;
      uVar18 = 5;
    }
    else if (local_1a0 == 6) {
      bVar5 = true;
      uVar18 = 5;
      local_1a0 = 0;
    }
    else {
      local_1a0 = local_1a0 - 7;
      bVar5 = true;
      uVar18 = 6;
    }
    local_158 = param_2[1];
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    __dest = (void *)__rustc::__rust_alloc(0x278,8);
    if (__dest == (void *)0x0) {
                    /* try { // try from 006b6310 to 006b631b has its CatchHandler @ 006b63dc */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0x278);
    }
    *(undefined8 *)((long)__dest + 0x160) = 0;
    plVar9 = (long *)((long)pvVar15 + uVar18 * 0x18 + 0x168);
    puVar6 = (undefined8 *)((long)pvVar15 + uVar18 * 0x20);
    uVar12 = (ulong)*(ushort *)((long)pvVar15 + 0x272) + ~uVar18;
    *(short *)((long)__dest + 0x272) = (short)uVar12;
    lVar21 = *plVar9;
    lVar14 = plVar9[1];
    lVar10 = plVar9[2];
    if (0xb < uVar12) {
                    /* try { // try from 006b62f4 to 006b630b has its CatchHandler @ 006b63e4 */
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (0,uVar12,0xb,&PTR_s__rustc_48a229ceaefd4985c50990b14_00976570);
    }
    memcpy((void *)((long)__dest + 0x168),(void *)((long)pvVar15 + (uVar18 + 1) * 0x18 + 0x168),
           uVar12 * 0x18);
    memcpy(__dest,(void *)((long)pvVar15 + (uVar18 + 1) * 0x20),uVar12 * 0x20);
    *(short *)((long)pvVar15 + 0x272) = (short)uVar18;
    uStack_148 = puVar6[1];
    local_150 = *puVar6;
    uStack_138 = puVar6[3];
    uStack_140 = puVar6[2];
    pvVar16 = __dest;
    if (!bVar5) {
      pvVar16 = pvVar15;
    }
    uVar18 = 0;
    if (!bVar5) {
      uVar18 = local_158;
    }
    puVar23 = (undefined8 *)((long)pvVar16 + local_1a0 * 0x18 + 0x168);
    uVar1 = *(ushort *)((long)pvVar16 + 0x272);
    puVar6 = (undefined8 *)((long)pvVar16 + local_1a0 * 0x20);
    lVar17 = uVar1 - local_1a0;
    if (uVar1 < local_1a0 || lVar17 == 0) {
      uVar26 = *param_3;
      uVar7 = param_3[2];
      puVar23[1] = param_3[1];
      *puVar23 = uVar26;
      uStack_108 = param_4[1];
      local_110 = *param_4;
      local_f8 = param_4[3];
      local_100 = param_4[2];
      puVar23[2] = uVar7;
    }
    else {
      memmove((void *)((long)pvVar16 + (local_1a0 + 1) * 0x18 + 0x168),puVar23,lVar17 * 0x18);
      uVar26 = *param_3;
      uVar7 = param_3[2];
      puVar23[1] = param_3[1];
      *puVar23 = uVar26;
      uStack_108 = param_4[1];
      local_110 = *param_4;
      local_f8 = param_4[3];
      local_100 = param_4[2];
      puVar23[2] = uVar7;
      memmove((void *)((long)pvVar16 + (local_1a0 + 1) * 0x20),puVar6,lVar17 * 0x20);
    }
    puVar6[1] = uStack_108;
    *puVar6 = local_110;
    puVar6[3] = local_f8;
    puVar6[2] = local_100;
    *(ushort *)((long)pvVar16 + 0x272) = uVar1 + 1;
    if (lVar21 != -1) {
      if (*(void **)((long)pvVar15 + 0x160) == (void *)0x0) {
        local_158 = 0;
      }
      else {
        bVar5 = local_158 == 0;
        pvVar4 = *(void **)((long)pvVar15 + 0x160);
        lVar17 = lVar21;
        lVar13 = lVar14;
        pvVar22 = __dest;
        lVar24 = lVar10;
        do {
          pvVar8 = pvVar4;
          if (!bVar5) {
                    /* try { // try from 006b62ac to 006b62c3 has its CatchHandler @ 006b6444 */
                    /* WARNING: Subroutine does not return */
            core::panicking::panic
                      ("assertion failed: edge.height == self.node.height - 1",0x35,
                       &PTR_s__rustc_48a229ceaefd4985c50990b14_00976510);
          }
          uVar1 = *(ushort *)((long)pvVar8 + 0x272);
          uVar12 = (ulong)uVar1;
          uVar2 = *(ushort *)((long)pvVar15 + 0x270);
          uVar25 = (ulong)uVar2;
          if (uVar1 < 0xb) {
            plVar9 = (long *)((long)pvVar8 + uVar25 * 0x18 + 0x168);
            uVar20 = uVar25 + 1;
            if (uVar2 < uVar1) {
              lVar21 = uVar12 - uVar25;
              memmove((void *)((long)pvVar8 + uVar20 * 0x18 + 0x168),plVar9,lVar21 * 0x18);
              *plVar9 = lVar17;
              plVar9[1] = lVar13;
              puVar6 = (undefined8 *)((long)pvVar8 + uVar25 * 0x20);
              plVar9[2] = lVar24;
              memmove((void *)((long)pvVar8 + uVar20 * 0x20),puVar6,lVar21 * 0x20);
              puVar6[1] = uStack_148;
              *puVar6 = local_150;
              puVar6[3] = uStack_138;
              puVar6[2] = uStack_140;
              memmove((void *)((long)pvVar8 + uVar25 * 8 + 0x288),
                      (void *)((long)pvVar8 + uVar20 * 8 + 0x278),lVar21 * 8);
            }
            else {
              puVar6 = (undefined8 *)((long)pvVar8 + uVar25 * 0x20);
              *plVar9 = lVar17;
              plVar9[1] = lVar13;
              plVar9[2] = lVar24;
              puVar6[1] = uStack_148;
              *puVar6 = local_150;
              puVar6[3] = uStack_138;
              puVar6[2] = uStack_140;
            }
            *(ushort *)((long)pvVar8 + 0x272) = uVar1 + 1;
            *(void **)((long)pvVar8 + uVar20 * 8 + 0x278) = pvVar22;
            if (uVar20 < uVar12 + 2) {
              lVar21 = uVar25 + 0x50;
              do {
                sVar3 = (short)lVar21;
                lVar14 = *(long *)((long)pvVar8 + lVar21 * 8);
                lVar21 = lVar21 + 1;
                *(void **)(lVar14 + 0x160) = pvVar8;
                *(short *)(lVar14 + 0x270) = sVar3 + -0x4f;
              } while (lVar21 - uVar12 != 0x51);
            }
LAB_006b6244:
            *param_1 = (long)pvVar16;
            param_1[1] = uVar18;
            param_1[2] = local_1a0;
            return;
          }
          if (uVar2 < 5) {
            bVar5 = false;
            uVar20 = 4;
          }
          else if (uVar2 == 5) {
            bVar5 = false;
            uVar20 = uVar25;
          }
          else if (uVar2 == 6) {
            uVar25 = 0;
            bVar5 = true;
            uVar20 = 5;
          }
          else {
            uVar25 = uVar25 - 7;
            bVar5 = true;
            uVar20 = 6;
          }
          __rustc::__rust_no_alloc_shim_is_unstable_v2();
          __dest = (void *)__rustc::__rust_alloc(0x2d8,8);
          if (__dest == (void *)0x0) {
                    /* try { // try from 006b62c8 to 006b62d3 has its CatchHandler @ 006b6440 */
                    /* WARNING: Subroutine does not return */
            alloc::alloc::handle_alloc_error(8,0x2d8);
          }
          *(undefined8 *)((long)__dest + 0x160) = 0;
          *(undefined2 *)((long)__dest + 0x272) = 0;
          plVar9 = (long *)((long)pvVar8 + uVar20 * 0x18 + 0x168);
          puVar6 = (undefined8 *)((long)pvVar8 + uVar20 * 0x20);
          uVar19 = (ulong)*(ushort *)((long)pvVar8 + 0x272) + ~uVar20;
          *(short *)((long)__dest + 0x272) = (short)uVar19;
          uVar26 = puVar6[1];
          uVar7 = *puVar6;
          uVar28 = puVar6[3];
          uVar27 = puVar6[2];
          lVar10 = plVar9[2];
          lVar21 = *plVar9;
          lVar14 = plVar9[1];
          if (0xb < uVar19) {
                    /* try { // try from 006b6278 to 006b628f has its CatchHandler @ 006b644c */
                    /* WARNING: Subroutine does not return */
            core::slice::index::slice_index_fail
                      (0,uVar19,0xb,&PTR_s__rustc_48a229ceaefd4985c50990b14_00976570);
          }
          memcpy((void *)((long)__dest + 0x168),(void *)((long)pvVar8 + (uVar20 + 1) * 0x18 + 0x168)
                 ,uVar19 * 0x18);
          memcpy(__dest,(void *)((long)pvVar8 + (uVar20 + 1) * 0x20),uVar19 * 0x20);
          *(short *)((long)pvVar8 + 0x272) = (short)uVar20;
          uVar19 = (ulong)*(ushort *)((long)__dest + 0x272);
          lVar11 = uVar19 + 1;
          if (0xb < uVar19) {
                    /* try { // try from 006b6294 to 006b62a7 has its CatchHandler @ 006b6478 */
                    /* WARNING: Subroutine does not return */
            core::slice::index::slice_index_fail
                      (0,lVar11,0xc,&PTR_s__rustc_48a229ceaefd4985c50990b14_00976528);
          }
          if (uVar12 - uVar20 != lVar11) {
                    /* try { // try from 006b62d8 to 006b62ef has its CatchHandler @ 006b6478 */
                    /* WARNING: Subroutine does not return */
            core::panicking::panic
                      ("assertion failed: src.len() == dst.len()",0x28,
                       &PTR_s__rustc_48a229ceaefd4985c50990b14_00976540);
          }
          local_158 = local_158 + 1;
          memcpy((void *)((long)__dest + 0x278),(void *)((long)pvVar8 + uVar20 * 8 + 0x280),
                 lVar11 * 8);
          uVar12 = 0;
          do {
            lVar11 = *(long *)((long)__dest + uVar12 * 8 + 0x278);
            uVar20 = uVar12;
            if (uVar12 < uVar19) {
              uVar20 = uVar12 + 1;
            }
            *(void **)(lVar11 + 0x160) = __dest;
            *(short *)(lVar11 + 0x270) = (short)uVar12;
          } while ((uVar12 < uVar19) && (uVar12 = uVar20, uVar20 <= uVar19));
          pvVar15 = __dest;
          if (!bVar5) {
            pvVar15 = pvVar8;
          }
          uVar1 = *(ushort *)((long)pvVar15 + 0x272);
          uVar20 = (ulong)uVar1;
          plVar9 = (long *)((long)pvVar15 + (long)(int)uVar25 * 0x18 + 0x168);
          puVar6 = (undefined8 *)((long)pvVar15 + uVar25 * 0x20);
          uVar12 = uVar25 + 1;
          lVar11 = uVar20 - uVar25;
          if (uVar20 < uVar25 || lVar11 == 0) {
            *plVar9 = lVar17;
            plVar9[1] = lVar13;
            plVar9[2] = lVar24;
            puVar6[1] = uStack_148;
            *puVar6 = local_150;
            puVar6[3] = uStack_138;
            puVar6[2] = uStack_140;
          }
          else {
            memmove((void *)((long)pvVar15 + (long)(int)uVar12 * 0x18 + 0x168),plVar9,lVar11 * 0x18)
            ;
            *plVar9 = lVar17;
            plVar9[1] = lVar13;
            plVar9[2] = lVar24;
            memmove((void *)((long)pvVar15 + uVar12 * 0x20),puVar6,lVar11 * 0x20);
            puVar6[1] = uStack_148;
            *puVar6 = local_150;
            puVar6[3] = uStack_138;
            puVar6[2] = uStack_140;
            memmove((void *)((long)pvVar15 + uVar25 * 8 + 0x288),
                    (void *)((long)pvVar15 + uVar12 * 8 + 0x278),lVar11 * 8);
          }
          *(void **)((long)pvVar15 + uVar12 * 8 + 0x278) = pvVar22;
          *(ushort *)((long)pvVar15 + 0x272) = uVar1 + 1;
          if (uVar12 < uVar20 + 2) {
            lVar17 = uVar25 + 0x50;
            do {
              sVar3 = (short)lVar17;
              lVar13 = *(long *)((long)pvVar15 + lVar17 * 8);
              lVar17 = lVar17 + 1;
              *(void **)(lVar13 + 0x160) = pvVar15;
              *(short *)(lVar13 + 0x270) = sVar3 + -0x4f;
            } while (lVar17 - uVar20 != 0x51);
          }
          if (lVar21 == -1) goto LAB_006b6244;
          bVar5 = true;
          pvVar4 = *(void **)((long)pvVar8 + 0x160);
          pvVar15 = pvVar8;
          lVar17 = lVar21;
          lVar13 = lVar14;
          pvVar22 = __dest;
          lVar24 = lVar10;
          local_150 = uVar7;
          uStack_148 = uVar26;
          uStack_140 = uVar27;
          uStack_138 = uVar28;
        } while (*(void **)((long)pvVar8 + 0x160) != (void *)0x0);
      }
      plVar9 = (long *)*param_5;
      lVar17 = *plVar9;
      if (lVar17 == 0) {
                    /* try { // try from 006b6320 to 006b632f has its CatchHandler @ 006b63b4 */
                    /* WARNING: Subroutine does not return */
        core::option::unwrap_failed(&PTR_s__rustc_48a229ceaefd4985c50990b14_00976558);
      }
      uVar12 = plVar9[1];
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      puVar6 = (undefined8 *)__rustc::__rust_alloc(0x2d8,8);
      if (puVar6 == (undefined8 *)0x0) {
                    /* try { // try from 006b6334 to 006b633f has its CatchHandler @ 006b63b0 */
                    /* WARNING: Subroutine does not return */
        alloc::alloc::handle_alloc_error(8,0x2d8);
      }
      puVar6[0x2c] = 0;
      *(undefined2 *)((long)puVar6 + 0x272) = 0;
      puVar6[0x4f] = lVar17;
      if (0xfffffffffffffffe < uVar12) {
                    /* try { // try from 006b6344 to 006b634f has its CatchHandler @ 006b639c */
                    /* WARNING: Subroutine does not return */
        core::option::unwrap_failed(&PTR_s__rustc_48a229ceaefd4985c50990b14_009764f8);
      }
      *(undefined8 **)(lVar17 + 0x160) = puVar6;
      *(undefined2 *)(lVar17 + 0x270) = 0;
      *plVar9 = (long)puVar6;
      plVar9[1] = uVar12 + 1;
      if (local_158 == uVar12) {
        puVar6[0x50] = __dest;
        puVar6[0x2e] = lVar14;
        puVar6[0x2d] = lVar21;
        *(undefined2 *)((long)puVar6 + 0x272) = 1;
        puVar6[0x2f] = lVar10;
        *(undefined2 *)((long)__dest + 0x270) = 1;
        puVar6[1] = uStack_148;
        *puVar6 = local_150;
        puVar6[3] = uStack_138;
        puVar6[2] = uStack_140;
        *(undefined8 **)((long)__dest + 0x160) = puVar6;
        *param_1 = (long)pvVar16;
        param_1[1] = uVar18;
        param_1[2] = local_1a0;
        return;
      }
                    /* try { // try from 006b6354 to 006b636b has its CatchHandler @ 006b6370 */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("assertion failed: edge.height == self.height - 1",0x30,
                 &PTR_s__rustc_48a229ceaefd4985c50990b14_00976588);
    }
  }
  *param_1 = (long)pvVar16;
  param_1[1] = uVar18;
  param_1[2] = local_1a0;
  return;
}


// ===== 006b64cc  FUN_006b64cc =====

void FUN_006b64cc(byte *param_1)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  ulong local_88 [3];
  undefined8 local_70;
  ulong local_68;
  undefined8 local_60;
  long lStack_58;
  undefined8 local_50;
  undefined8 local_48;
  
  bVar2 = *param_1;
  if (2 < bVar2) {
    if (bVar2 == 3) {
      if (*(long *)(param_1 + 8) != 0) {
        __rustc::__rust_dealloc(*(undefined8 *)(param_1 + 0x10),*(long *)(param_1 + 8),1);
        return;
      }
    }
    else if (bVar2 == 4) {
      lVar1 = *(long *)(param_1 + 0x10);
      lVar4 = *(long *)(param_1 + 0x18) + 1;
      lVar3 = lVar1;
      while (lVar4 = lVar4 + -1, lVar4 != 0) {
                    /* try { // try from 006b6518 to 006b651b has its CatchHandler @ 006b65cc */
        FUN_006b4318(lVar3);
        lVar3 = lVar3 + 0x20;
      }
      if (*(long *)(param_1 + 8) != 0) {
        __rustc::__rust_dealloc(lVar1,*(long *)(param_1 + 8) << 5,8);
        return;
      }
    }
    else {
      lVar4 = *(long *)(param_1 + 8);
      if (lVar4 == 0) {
        local_48 = 0;
      }
      else {
        local_70 = *(undefined8 *)(param_1 + 0x10);
        local_48 = *(undefined8 *)(param_1 + 0x18);
        local_88[1] = 0;
        local_60 = 0;
        local_88[2] = lVar4;
        lStack_58 = lVar4;
        local_50 = local_70;
      }
      local_88[0] = (ulong)(lVar4 != 0);
      local_68 = local_88[0];
      FUN_006b41fc(local_88);
    }
  }
  return;
}


// ===== 006b6610  FUN_006b6610 =====

void FUN_006b6610(long *param_1)

{
  if (*param_1 != 0) {
    __rustc::__rust_dealloc(param_1[1],*param_1,1);
  }
  FUN_006b64cc(param_1 + 3);
  return;
}


// ===== 006b6644  <memchr::arch::all::twoway::[0]::memchr::arch::all::twoway::Shift>::forward =====

/* WARNING: Unknown calling convention: __rustcall */
/* <memchr::arch::all::twoway::[0]::memchr::arch::all::twoway::Shift>::forward */

undefined1  [16] __rustcall
<memchr::arch::all::twoway::[0]::memchr::arch::all::twoway::Shift>::forward
          (int *param_1,ulong param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  int *piVar4;
  ulong uVar5;
  int *piVar6;
  int *piVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  uVar5 = param_2 - param_4;
  uVar1 = uVar5;
  if (uVar5 <= param_4) {
    uVar1 = param_4;
  }
  if (param_4 * 2 < param_2) {
    if (param_2 < param_4) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt("mid > len",0x13,&PTR_s__home_runner__cargo_registry_src_009766d8);
    }
    if (uVar5 < param_3) {
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (0,param_3,uVar5,&PTR_s__home_runner__cargo_registry_src_009766f0);
    }
    if (param_4 <= param_3) {
      piVar6 = (int *)((long)param_1 + param_3);
      piVar4 = param_1;
      piVar7 = piVar6;
      if (3 < param_4) {
        do {
          piVar6 = piVar7 + 1;
          param_1 = piVar4 + 1;
          if (*piVar7 != *piVar4) goto LAB_006b667c;
          param_4 = param_4 - 4;
          piVar4 = param_1;
          piVar7 = piVar6;
        } while (3 < param_4);
      }
      piVar4 = param_1;
      piVar7 = piVar6;
      if (1 < param_4) {
        piVar7 = (int *)((long)piVar6 + 2);
        piVar4 = (int *)((long)param_1 + 2);
        if ((short)*piVar6 != (short)*param_1) goto LAB_006b667c;
        param_4 = param_4 - 2;
      }
      if (param_4 != 0) {
        bVar3 = (char)*piVar7 != (char)*piVar4;
        auVar9._1_7_ = 0;
        auVar9[0] = bVar3;
        if (!bVar3) {
          uVar1 = param_3;
        }
        auVar9._8_8_ = uVar1;
        return auVar9;
      }
      auVar2._8_8_ = 0;
      auVar2._0_8_ = param_3;
      return auVar2 << 0x40;
    }
  }
LAB_006b667c:
  auVar8._8_8_ = uVar1;
  auVar8._0_8_ = 1;
  return auVar8;
}


// ===== 006b672c  <memchr::arch::all::twoway::[0]::memchr::arch::all::twoway::Shift>::reverse =====

/* WARNING: Unknown calling convention: __rustcall */
/* <memchr::arch::all::twoway::[0]::memchr::arch::all::twoway::Shift>::reverse */

undefined1  [16] __rustcall
<memchr::arch::all::twoway::[0]::memchr::arch::all::twoway::Shift>::reverse
          (long param_1,ulong param_2,ulong param_3,ulong param_4)

{
  undefined1 auVar1 [16];
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  int *piVar5;
  int *piVar6;
  ulong uVar7;
  int *piVar8;
  int *piVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  uVar7 = param_2 - param_4;
  uVar4 = uVar7;
  if (uVar7 <= param_4) {
    uVar4 = param_4;
  }
  if (uVar7 * 2 < param_2) {
    if (param_2 < param_4) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt("mid > len",0x13,&PTR_s__home_runner__cargo_registry_src_00976708);
    }
    if (param_4 < param_3) {
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (param_4 - param_3,param_4,param_4,&PTR_s__home_runner__cargo_registry_src_00976720)
      ;
    }
    if (uVar7 <= param_3) {
      piVar5 = (int *)(param_1 + (param_4 - param_3));
      piVar8 = (int *)(param_1 + param_4);
      if (3 < uVar7) {
        uVar3 = 1;
        piVar6 = piVar5;
        piVar9 = piVar8;
        do {
          piVar5 = piVar6 + 1;
          piVar8 = piVar9 + 1;
          if (*piVar6 != *piVar9) goto LAB_006b67d4;
          uVar7 = uVar7 - 4;
          piVar6 = piVar5;
          piVar9 = piVar8;
        } while (3 < uVar7);
      }
      piVar6 = piVar5;
      piVar9 = piVar8;
      if (1 < uVar7) {
        piVar6 = (int *)((long)piVar5 + 2);
        piVar9 = (int *)((long)piVar8 + 2);
        if ((short)*piVar5 != (short)*piVar8) goto LAB_006b6764;
        uVar7 = uVar7 - 2;
      }
      if (uVar7 == 0) {
        auVar1._8_8_ = 0;
        auVar1._0_8_ = param_3;
        return auVar1 << 0x40;
      }
      bVar2 = (char)*piVar6 != (char)*piVar9;
      uVar3 = (ulong)bVar2;
      if (!bVar2) {
        uVar4 = param_3;
      }
LAB_006b67d4:
      auVar11._8_8_ = uVar4;
      auVar11._0_8_ = uVar3;
      return auVar11;
    }
  }
LAB_006b6764:
  auVar10._8_8_ = uVar4;
  auVar10._0_8_ = 1;
  return auVar10;
}


// ===== 006b6820  memchr::memmem::searcher::searcher_kind_neon =====

/* WARNING: Unknown calling convention: __rustcall */
/* memchr::memmem::searcher::searcher_kind_neon */

undefined1  [16] __rustcall
memchr::memmem::searcher::searcher_kind_neon
          (undefined1 (*param_1) [16],byte *param_2,byte *param_3,ulong param_4,ushort *param_5,
          ulong param_6)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ushort *puVar8;
  ulong uVar9;
  byte *pbVar10;
  byte *pbVar12;
  long lVar13;
  ushort *puVar14;
  ushort *puVar15;
  ushort *puVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  int iVar20;
  ushort uVar21;
  undefined1 auVar26 [16];
  undefined1 auVar28 [12];
  undefined1 auVar29 [12];
  undefined1 auVar30 [12];
  undefined1 auVar31 [12];
  undefined1 auVar32 [12];
  undefined1 auVar38 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  byte *pbVar11;
  undefined4 uVar22;
  undefined6 uVar23;
  undefined1 auVar24 [12];
  undefined1 auVar25 [14];
  undefined1 auVar27 [16];
  undefined1 auVar33 [14];
  undefined1 auVar34 [14];
  undefined1 auVar35 [14];
  undefined1 auVar36 [14];
  undefined1 auVar37 [14];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  
  uVar9 = *(ulong *)param_1[2];
  if (param_4 < uVar9) {
    if (param_6 <= param_4) {
      iVar20 = 0;
      pbVar11 = param_3;
      if (param_6 != 0) {
        do {
          pbVar10 = pbVar11 + 1;
          iVar20 = (uint)*pbVar11 + iVar20 * 2;
          pbVar11 = pbVar10;
        } while (pbVar10 < param_3 + param_6);
      }
      iVar1 = *(int *)param_1[6];
      iVar2 = *(int *)(param_1[6] + 4);
      param_2 = (byte *)0x0;
      pbVar11 = param_3;
      if (iVar1 == iVar20) goto LAB_006b6a80;
      do {
        do {
          if (param_3 + (param_4 - param_6) <= pbVar11) goto LAB_006b6850;
          pbVar10 = param_3 + param_6 + (long)param_2;
          param_2 = param_2 + 1;
          iVar20 = (uint)*pbVar10 + (iVar20 - iVar2 * (uint)*pbVar11) * 2;
          pbVar11 = param_3 + (long)param_2;
        } while (iVar1 != iVar20);
LAB_006b6a80:
        uVar9 = arch::all::rabinkarp::is_equal_raw(param_3 + (long)param_2,param_5,param_6);
        uVar5 = 1;
      } while ((uVar9 & 1) == 0);
      goto LAB_006b6b58;
    }
  }
  else {
    auVar26 = *param_1;
    auVar27 = param_1[1];
    pbVar10 = param_3 + param_4;
    bVar3 = param_1[2][8];
    bVar4 = param_1[2][9];
    pbVar12 = pbVar10 + -uVar9;
    puVar14 = (ushort *)(pbVar10 + -param_6);
    pbVar11 = param_3;
    if (param_6 < 4) {
      if (param_6 < 2) {
        if (param_6 == 0) {
          do {
            auVar38 = NEON_cmeq(*(undefined1 (*) [16])(pbVar11 + bVar3),auVar26,1);
            auVar42 = NEON_cmeq(*(undefined1 (*) [16])(pbVar11 + bVar4),auVar27,1);
            uVar21 = CONCAT11(auVar38[1] & auVar42[1],auVar38[0] & auVar42[0]);
            uVar22 = CONCAT13(auVar38[3] & auVar42[3],CONCAT12(auVar38[2] & auVar42[2],uVar21));
            uVar23 = CONCAT15(auVar38[5] & auVar42[5],CONCAT14(auVar38[4] & auVar42[4],uVar22));
            uVar5 = CONCAT17(auVar38[7] & auVar42[7],CONCAT16(auVar38[6] & auVar42[6],uVar23));
            auVar31._0_10_ =
                 CONCAT19(auVar38[9] & auVar42[9],CONCAT18(auVar38[8] & auVar42[8],uVar5));
            auVar31[10] = auVar38[10] & auVar42[10];
            auVar31[0xb] = auVar38[0xb] & auVar42[0xb];
            auVar36[0xc] = auVar38[0xc] & auVar42[0xc];
            auVar36._0_12_ = auVar31;
            auVar36[0xd] = auVar38[0xd] & auVar42[0xd];
            auVar43[0xe] = auVar38[0xe] & auVar42[0xe];
            auVar43._0_14_ = auVar36;
            auVar43[0xf] = auVar38[0xf] & auVar42[0xf];
            uVar18 = CONCAT17((char)(auVar43._14_2_ >> 4),
                              CONCAT16((char)(auVar36._12_2_ >> 4),
                                       CONCAT15((char)(auVar31._10_2_ >> 4),
                                                CONCAT14((char)(ushort)((unkuint10)auVar31._0_10_ >>
                                                                       0x44),
                                                         CONCAT13((char)(ushort)((ulong)uVar5 >>
                                                                                0x34),
                                                                  CONCAT12((char)(ushort)((uint6)
                                                  uVar23 >> 0x24),
                                                  CONCAT11((char)(ushort)((uint)uVar22 >> 0x14),
                                                           (char)(uVar21 >> 4)))))))) &
                     0x8888888888888888;
            uVar6 = uVar18 >> 3;
            uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
            uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
            uVar17 = (ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 2;
            if (uVar18 != 0 && pbVar11 + uVar17 <= puVar14) goto LAB_006b6b4c;
            pbVar11 = pbVar11 + 0x10;
          } while (pbVar11 <= pbVar12);
        }
        else {
          do {
            auVar38 = NEON_cmeq(*(undefined1 (*) [16])(pbVar11 + bVar3),auVar26,1);
            auVar43 = NEON_cmeq(*(undefined1 (*) [16])(pbVar11 + bVar4),auVar27,1);
            uVar21 = CONCAT11(auVar38[1] & auVar43[1],auVar38[0] & auVar43[0]);
            uVar22 = CONCAT13(auVar38[3] & auVar43[3],CONCAT12(auVar38[2] & auVar43[2],uVar21));
            uVar23 = CONCAT15(auVar38[5] & auVar43[5],CONCAT14(auVar38[4] & auVar43[4],uVar22));
            uVar5 = CONCAT17(auVar38[7] & auVar43[7],CONCAT16(auVar38[6] & auVar43[6],uVar23));
            auVar32._0_10_ =
                 CONCAT19(auVar38[9] & auVar43[9],CONCAT18(auVar38[8] & auVar43[8],uVar5));
            auVar32[10] = auVar38[10] & auVar43[10];
            auVar32[0xb] = auVar38[0xb] & auVar43[0xb];
            auVar37[0xc] = auVar38[0xc] & auVar43[0xc];
            auVar37._0_12_ = auVar32;
            auVar37[0xd] = auVar38[0xd] & auVar43[0xd];
            auVar42[0xe] = auVar38[0xe] & auVar43[0xe];
            auVar42._0_14_ = auVar37;
            auVar42[0xf] = auVar38[0xf] & auVar43[0xf];
            for (uVar6 = CONCAT17((char)(auVar42._14_2_ >> 4),
                                  CONCAT16((char)(auVar37._12_2_ >> 4),
                                           CONCAT15((char)(auVar32._10_2_ >> 4),
                                                    CONCAT14((char)(ushort)((unkuint10)
                                                                            auVar32._0_10_ >> 0x44),
                                                             CONCAT13((char)(ushort)((ulong)uVar5 >>
                                                                                    0x34),
                                                                      CONCAT12((char)(ushort)((uint6
                                                  )uVar23 >> 0x24),
                                                  CONCAT11((char)(ushort)((uint)uVar22 >> 0x14),
                                                           (char)(uVar21 >> 4)))))))) &
                         0x8888888888888888; uVar6 != 0; uVar6 = uVar6 - 1 & uVar6) {
              uVar17 = (uVar6 >> 3 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                       (uVar6 >> 3 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
              uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
              uVar17 = (ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 2;
              if (puVar14 < pbVar11 + uVar17) break;
              param_2 = (byte *)(ulong)(byte)*param_5;
              if ((byte)*param_5 == (byte)*(ushort *)(pbVar11 + uVar17)) goto LAB_006b6b4c;
            }
            pbVar11 = pbVar11 + 0x10;
          } while (pbVar11 <= pbVar12);
        }
      }
      else if (param_6 == 2) {
        do {
          auVar38 = NEON_cmeq(*(undefined1 (*) [16])(pbVar11 + bVar3),auVar26,1);
          auVar42 = NEON_cmeq(*(undefined1 (*) [16])(pbVar11 + bVar4),auVar27,1);
          uVar21 = CONCAT11(auVar38[1] & auVar42[1],auVar38[0] & auVar42[0]);
          uVar22 = CONCAT13(auVar38[3] & auVar42[3],CONCAT12(auVar38[2] & auVar42[2],uVar21));
          uVar23 = CONCAT15(auVar38[5] & auVar42[5],CONCAT14(auVar38[4] & auVar42[4],uVar22));
          uVar5 = CONCAT17(auVar38[7] & auVar42[7],CONCAT16(auVar38[6] & auVar42[6],uVar23));
          auVar30._0_10_ = CONCAT19(auVar38[9] & auVar42[9],CONCAT18(auVar38[8] & auVar42[8],uVar5))
          ;
          auVar30[10] = auVar38[10] & auVar42[10];
          auVar30[0xb] = auVar38[0xb] & auVar42[0xb];
          auVar35[0xc] = auVar38[0xc] & auVar42[0xc];
          auVar35._0_12_ = auVar30;
          auVar35[0xd] = auVar38[0xd] & auVar42[0xd];
          auVar41[0xe] = auVar38[0xe] & auVar42[0xe];
          auVar41._0_14_ = auVar35;
          auVar41[0xf] = auVar38[0xf] & auVar42[0xf];
          for (uVar6 = CONCAT17((char)(auVar41._14_2_ >> 4),
                                CONCAT16((char)(auVar35._12_2_ >> 4),
                                         CONCAT15((char)(auVar30._10_2_ >> 4),
                                                  CONCAT14((char)(ushort)((unkuint10)auVar30._0_10_
                                                                         >> 0x44),
                                                           CONCAT13((char)(ushort)((ulong)uVar5 >>
                                                                                  0x34),
                                                                    CONCAT12((char)(ushort)((uint6)
                                                  uVar23 >> 0x24),
                                                  CONCAT11((char)(ushort)((uint)uVar22 >> 0x14),
                                                           (char)(uVar21 >> 4)))))))) &
                       0x8888888888888888; uVar6 != 0; uVar6 = uVar6 - 1 & uVar6) {
            uVar17 = (uVar6 >> 3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 >> 3 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
            uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
            uVar17 = (ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 2;
            if (puVar14 < pbVar11 + uVar17) break;
            param_2 = (byte *)(ulong)*param_5;
            if (*param_5 == *(ushort *)(pbVar11 + uVar17)) goto LAB_006b6b4c;
          }
          pbVar11 = pbVar11 + 0x10;
        } while (pbVar11 <= pbVar12);
      }
      else {
        do {
          auVar38 = NEON_cmeq(*(undefined1 (*) [16])(pbVar11 + bVar3),auVar26,1);
          auVar42 = NEON_cmeq(*(undefined1 (*) [16])(pbVar11 + bVar4),auVar27,1);
          uVar21 = CONCAT11(auVar38[1] & auVar42[1],auVar38[0] & auVar42[0]);
          uVar22 = CONCAT13(auVar38[3] & auVar42[3],CONCAT12(auVar38[2] & auVar42[2],uVar21));
          uVar23 = CONCAT15(auVar38[5] & auVar42[5],CONCAT14(auVar38[4] & auVar42[4],uVar22));
          uVar5 = CONCAT17(auVar38[7] & auVar42[7],CONCAT16(auVar38[6] & auVar42[6],uVar23));
          auVar29._0_10_ = CONCAT19(auVar38[9] & auVar42[9],CONCAT18(auVar38[8] & auVar42[8],uVar5))
          ;
          auVar29[10] = auVar38[10] & auVar42[10];
          auVar29[0xb] = auVar38[0xb] & auVar42[0xb];
          auVar34[0xc] = auVar38[0xc] & auVar42[0xc];
          auVar34._0_12_ = auVar29;
          auVar34[0xd] = auVar38[0xd] & auVar42[0xd];
          auVar40[0xe] = auVar38[0xe] & auVar42[0xe];
          auVar40._0_14_ = auVar34;
          auVar40[0xf] = auVar38[0xf] & auVar42[0xf];
          for (uVar6 = CONCAT17((char)(auVar40._14_2_ >> 4),
                                CONCAT16((char)(auVar34._12_2_ >> 4),
                                         CONCAT15((char)(auVar29._10_2_ >> 4),
                                                  CONCAT14((char)(ushort)((unkuint10)auVar29._0_10_
                                                                         >> 0x44),
                                                           CONCAT13((char)(ushort)((ulong)uVar5 >>
                                                                                  0x34),
                                                                    CONCAT12((char)(ushort)((uint6)
                                                  uVar23 >> 0x24),
                                                  CONCAT11((char)(ushort)((uint)uVar22 >> 0x14),
                                                           (char)(uVar21 >> 4)))))))) &
                       0x8888888888888888; uVar6 != 0; uVar6 = uVar6 - 1 & uVar6) {
            uVar17 = (uVar6 >> 3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 >> 3 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
            uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
            uVar17 = (ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 2;
            puVar8 = (ushort *)(pbVar11 + uVar17);
            if (puVar14 < puVar8) break;
            param_2 = (byte *)(ulong)*param_5;
            if ((*param_5 == *puVar8) &&
               (param_2 = (byte *)(ulong)(byte)param_5[1], (byte)param_5[1] == (byte)puVar8[1]))
            goto LAB_006b6b4c;
          }
          pbVar11 = pbVar11 + 0x10;
        } while (pbVar11 <= pbVar12);
      }
    }
    else {
      param_2 = (byte *)(param_6 & 0x8000000000000003 | 4);
      do {
        auVar38 = NEON_cmeq(*(undefined1 (*) [16])(pbVar11 + bVar3),auVar26,1);
        auVar42 = NEON_cmeq(*(undefined1 (*) [16])(pbVar11 + bVar4),auVar27,1);
        uVar21 = CONCAT11(auVar38[1] & auVar42[1],auVar38[0] & auVar42[0]);
        uVar22 = CONCAT13(auVar38[3] & auVar42[3],CONCAT12(auVar38[2] & auVar42[2],uVar21));
        uVar23 = CONCAT15(auVar38[5] & auVar42[5],CONCAT14(auVar38[4] & auVar42[4],uVar22));
        uVar5 = CONCAT17(auVar38[7] & auVar42[7],CONCAT16(auVar38[6] & auVar42[6],uVar23));
        auVar28._0_10_ = CONCAT19(auVar38[9] & auVar42[9],CONCAT18(auVar38[8] & auVar42[8],uVar5));
        auVar28[10] = auVar38[10] & auVar42[10];
        auVar28[0xb] = auVar38[0xb] & auVar42[0xb];
        auVar33[0xc] = auVar38[0xc] & auVar42[0xc];
        auVar33._0_12_ = auVar28;
        auVar33[0xd] = auVar38[0xd] & auVar42[0xd];
        auVar39[0xe] = auVar38[0xe] & auVar42[0xe];
        auVar39._0_14_ = auVar33;
        auVar39[0xf] = auVar38[0xf] & auVar42[0xf];
        uVar6 = CONCAT17((char)(auVar39._14_2_ >> 4),
                         CONCAT16((char)(auVar33._12_2_ >> 4),
                                  CONCAT15((char)(auVar28._10_2_ >> 4),
                                           CONCAT14((char)(ushort)((unkuint10)auVar28._0_10_ >> 0x44
                                                                  ),
                                                    CONCAT13((char)(ushort)((ulong)uVar5 >> 0x34),
                                                             CONCAT12((char)(ushort)((uint6)uVar23
                                                                                    >> 0x24),
                                                                      CONCAT11((char)(ushort)((uint)
                                                  uVar22 >> 0x14),(char)(uVar21 >> 4)))))))) &
                0x8888888888888888;
        if (uVar6 != 0) {
          if (param_2 < (byte *)0x6) {
            do {
              uVar17 = (uVar6 >> 3 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                       (uVar6 >> 3 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
              uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
              uVar17 = (ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 2;
              uVar18 = uVar17;
              puVar8 = param_5;
              uVar19 = param_6;
              if (puVar14 < pbVar11 + uVar17) break;
              do {
                puVar16 = puVar8 + 2;
                if (*(int *)puVar8 != *(int *)(pbVar11 + uVar18)) goto LAB_006b68d8;
                uVar19 = uVar19 - 4;
                uVar18 = uVar18 + 4;
                puVar8 = puVar16;
              } while (3 < uVar19);
              if ((uVar19 == 0) || ((byte)*puVar16 == pbVar11[uVar18])) goto LAB_006b6b4c;
LAB_006b68d8:
              uVar6 = uVar6 - 1 & uVar6;
            } while (uVar6 != 0);
          }
          else if ((param_6 & 3) == 2) {
            do {
              uVar17 = (uVar6 >> 3 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                       (uVar6 >> 3 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
              uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
              uVar17 = (ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 2;
              uVar18 = uVar17;
              puVar8 = param_5;
              uVar19 = param_6;
              if (puVar14 < pbVar11 + uVar17) break;
              do {
                puVar16 = puVar8 + 2;
                if (*(int *)puVar8 != *(int *)(pbVar11 + uVar18)) goto LAB_006b69b8;
                uVar19 = uVar19 - 4;
                uVar18 = uVar18 + 4;
                puVar8 = puVar16;
              } while (3 < uVar19);
              if (*puVar16 == *(ushort *)(pbVar11 + uVar18)) goto LAB_006b6b4c;
LAB_006b69b8:
              uVar6 = uVar6 - 1 & uVar6;
            } while (uVar6 != 0);
          }
          else {
            do {
              uVar17 = (uVar6 >> 3 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                       (uVar6 >> 3 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
              uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
              uVar17 = (ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 2;
              uVar18 = uVar17;
              puVar8 = param_5;
              uVar19 = param_6;
              if (puVar14 < pbVar11 + uVar17) break;
              do {
                uVar7 = uVar18;
                puVar16 = puVar8 + 2;
                if (*(int *)puVar8 != *(int *)(pbVar11 + uVar7)) goto LAB_006b6940;
                uVar19 = uVar19 - 4;
                uVar18 = uVar7 + 4;
                puVar8 = puVar16;
              } while (3 < uVar19);
              if ((*puVar16 == *(ushort *)(pbVar11 + uVar7 + 4)) &&
                 (*(byte *)((long)param_5 + (param_6 & 0x7ffffffffffffffc) + 2) ==
                  pbVar11[uVar7 + 6])) goto LAB_006b6b4c;
LAB_006b6940:
              uVar6 = uVar6 - 1 & uVar6;
            } while (uVar6 != 0);
          }
        }
        pbVar11 = pbVar11 + 0x10;
      } while (pbVar11 <= pbVar12);
    }
    if ((pbVar11 < pbVar10) && (param_6 <= (ulong)((long)pbVar10 - (long)pbVar11))) {
      auVar26 = NEON_cmeq(*(undefined1 (*) [16])(pbVar12 + bVar3),auVar26,1);
      auVar38 = NEON_cmeq(*(undefined1 (*) [16])(pbVar12 + bVar4),auVar27,1);
      uVar21 = CONCAT11(auVar26[1] & auVar38[1],auVar26[0] & auVar38[0]);
      uVar22 = CONCAT13(auVar26[3] & auVar38[3],CONCAT12(auVar26[2] & auVar38[2],uVar21));
      uVar23 = CONCAT15(auVar26[5] & auVar38[5],CONCAT14(auVar26[4] & auVar38[4],uVar22));
      uVar5 = CONCAT17(auVar26[7] & auVar38[7],CONCAT16(auVar26[6] & auVar38[6],uVar23));
      auVar24._0_10_ = CONCAT19(auVar26[9] & auVar38[9],CONCAT18(auVar26[8] & auVar38[8],uVar5));
      auVar24[10] = auVar26[10] & auVar38[10];
      auVar24[0xb] = auVar26[0xb] & auVar38[0xb];
      auVar25[0xc] = auVar26[0xc] & auVar38[0xc];
      auVar25._0_12_ = auVar24;
      auVar25[0xd] = auVar26[0xd] & auVar38[0xd];
      auVar27[0xe] = auVar26[0xe] & auVar38[0xe];
      auVar27._0_14_ = auVar25;
      auVar27[0xf] = auVar26[0xf] & auVar38[0xf];
      uVar6 = -4L << ((ulong)(uint)((int)pbVar11 - (int)pbVar12) & 0x3f) &
              CONCAT17((char)(auVar27._14_2_ >> 4),
                       CONCAT16((char)(auVar25._12_2_ >> 4),
                                CONCAT15((char)(auVar24._10_2_ >> 4),
                                         CONCAT14((char)(ushort)((unkuint10)auVar24._0_10_ >> 0x44),
                                                  CONCAT13((char)(ushort)((ulong)uVar5 >> 0x34),
                                                           CONCAT12((char)(ushort)((uint6)uVar23 >>
                                                                                  0x24),
                                                                    CONCAT11((char)(ushort)((uint)
                                                  uVar22 >> 0x14),(char)(uVar21 >> 4)))))))) &
              0x8888888888888888;
      if (uVar6 != 0) {
        do {
          uVar17 = (uVar6 >> 3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 >> 3 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
          uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
          uVar17 = (ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 2;
          lVar13 = uVar17 - uVar9;
          if (lVar13 != -param_6 && (long)(lVar13 + param_6) < 0 == SBORROW8(lVar13,-param_6))
          goto LAB_006b6850;
          puVar14 = (ushort *)(pbVar12 + uVar17);
          puVar8 = puVar14;
          puVar16 = param_5;
          puVar15 = param_5;
          uVar18 = param_6;
          if (3 < param_6) {
            do {
              puVar15 = puVar16 + 2;
              puVar14 = puVar8 + 2;
              if (*(int *)puVar16 != *(int *)puVar8) goto LAB_006b6ce0;
              uVar18 = uVar18 - 4;
              puVar8 = puVar14;
              puVar16 = puVar15;
            } while (3 < uVar18);
          }
          puVar8 = puVar14;
          puVar16 = puVar15;
          if (uVar18 < 2) {
LAB_006b6d54:
            if ((uVar18 == 0) || ((byte)*puVar16 == (byte)*puVar8)) {
              param_2 = (byte *)(uVar17 + (param_4 - uVar9));
              goto LAB_006b6b54;
            }
          }
          else {
            puVar16 = puVar15 + 1;
            puVar8 = puVar14 + 1;
            if (*puVar15 == *puVar14) {
              uVar18 = uVar18 - 2;
              goto LAB_006b6d54;
            }
          }
LAB_006b6ce0:
          uVar5 = 0;
          uVar6 = uVar6 - 1 & uVar6;
        } while (uVar6 != 0);
        goto LAB_006b6b58;
      }
    }
  }
LAB_006b6850:
  uVar5 = 0;
  goto LAB_006b6b58;
LAB_006b6b4c:
  param_2 = pbVar11 + (uVar17 - (long)param_3);
LAB_006b6b54:
  uVar5 = 1;
LAB_006b6b58:
  auVar26._8_8_ = param_2;
  auVar26._0_8_ = uVar5;
  return auVar26;
}


// ===== 006b6d70  memchr::memmem::searcher::prefilter_kind_neon =====

/* WARNING: Unknown calling convention: __rustcall */
/* memchr::memmem::searcher::prefilter_kind_neon */

undefined1  [16] __rustcall
memchr::memmem::searcher::prefilter_kind_neon
          (undefined1 (*param_1) [16],ulong *param_2,ulong param_3)

{
  ulong *puVar1;
  byte bVar2;
  undefined8 uVar3;
  byte *pbVar4;
  ulong in_x9;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ushort uVar9;
  undefined1 auVar14 [16];
  undefined1 auVar15 [12];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined4 uVar10;
  undefined6 uVar11;
  undefined1 auVar12 [12];
  undefined1 auVar13 [14];
  undefined1 auVar16 [14];
  
  uVar7 = *(ulong *)param_1[2];
  if (param_3 < uVar7) {
    if (param_3 == 0) goto LAB_006b70bc;
    bVar2 = param_1[3][8];
    puVar6 = param_2;
    if (7 < param_3) {
      uVar7 = (ulong)bVar2 * 0x101010101010101;
      in_x9 = 0x101010101010100;
      puVar1 = (ulong *)((long)param_2 + param_3);
      if ((((0x101010101010100 - (*param_2 ^ uVar7) | *param_2 ^ uVar7) ^ 0xffffffffffffffff) &
          0x8080808080808080) == 0) {
        uVar8 = 8 - ((ulong)param_2 & 7);
        puVar6 = (ulong *)((long)param_2 + uVar8);
        if (param_3 < 0x11) {
          if (uVar8 < param_3) {
            param_3 = param_3 + ((ulong)param_2 & 7);
            for (uVar7 = param_3 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
              if (bVar2 == (byte)*puVar6) goto LAB_006b6d9c;
              puVar6 = (ulong *)((long)puVar6 + 1);
            }
            in_x9 = 0;
            if (2 < param_3 - 9) {
              puVar6 = (ulong *)((long)puVar6 + 3);
              do {
                if (bVar2 == *(byte *)((long)puVar6 - 3)) goto LAB_006b7118;
                if (bVar2 == *(byte *)((long)puVar6 - 2)) goto LAB_006b7120;
                if (bVar2 == *(byte *)((long)puVar6 - 1)) goto LAB_006b7128;
                if (bVar2 == (byte)*puVar6) goto LAB_006b6d9c;
                puVar5 = (ulong *)((long)puVar6 + 1);
                uVar3 = 0;
                puVar6 = (ulong *)((long)puVar6 + 4);
              } while (puVar5 != puVar1);
              goto LAB_006b6e50;
            }
          }
        }
        else {
          if (uVar8 <= param_3 - 0x10) {
            do {
              if (((((0x101010101010100 - (*puVar6 ^ uVar7) | *puVar6 ^ uVar7) ^ 0xffffffffffffffff)
                   & 0x8080808080808080) != 0) ||
                 ((((0x101010101010100 - (puVar6[1] ^ uVar7) | puVar6[1] ^ uVar7) ^
                   0xffffffffffffffff) & 0x8080808080808080) != 0)) break;
              puVar6 = puVar6 + 2;
            } while (puVar6 <= puVar1 + -2);
          }
          if (puVar6 < puVar1) {
            pbVar4 = (byte *)((long)param_2 + (param_3 - (long)puVar6));
            for (uVar7 = (ulong)pbVar4 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
              if (bVar2 == (byte)*puVar6) goto LAB_006b6d9c;
              puVar6 = (ulong *)((long)puVar6 + 1);
            }
            in_x9 = 0;
            if ((byte *)0x2 < pbVar4 + -1) {
              puVar6 = (ulong *)((long)puVar6 + 3);
              do {
                if (bVar2 == *(byte *)((long)puVar6 - 3)) goto LAB_006b7118;
                if (bVar2 == *(byte *)((long)puVar6 - 2)) goto LAB_006b7120;
                if (bVar2 == *(byte *)((long)puVar6 - 1)) goto LAB_006b7128;
                if (bVar2 == (byte)*puVar6) goto LAB_006b6d9c;
                puVar5 = (ulong *)((long)puVar6 + 1);
                uVar3 = 0;
                puVar6 = (ulong *)((long)puVar6 + 4);
              } while (puVar5 != puVar1);
              goto LAB_006b6e50;
            }
          }
        }
        goto LAB_006b70bc;
      }
      for (param_3 = param_3 & 3; param_3 != 0; param_3 = param_3 - 1) {
        if (bVar2 == (byte)*puVar6) goto LAB_006b6d9c;
        puVar6 = (ulong *)((long)puVar6 + 1);
      }
      puVar6 = (ulong *)((long)puVar6 + 3);
      do {
        if (bVar2 == *(byte *)((long)puVar6 - 3)) goto LAB_006b7118;
        if (bVar2 == *(byte *)((long)puVar6 - 2)) goto LAB_006b7120;
        if (bVar2 == *(byte *)((long)puVar6 - 1)) goto LAB_006b7128;
        if (bVar2 == (byte)*puVar6) goto LAB_006b6d9c;
        puVar5 = (ulong *)((long)puVar6 + 1);
        uVar3 = 0;
        puVar6 = (ulong *)((long)puVar6 + 4);
      } while (puVar5 != puVar1);
      goto LAB_006b6e50;
    }
    if ((bVar2 != (byte)*param_2) &&
       ((param_3 == 1 ||
        ((puVar6 = (ulong *)((long)param_2 + 1), bVar2 != *(byte *)puVar6 &&
         ((param_3 == 2 ||
          ((puVar6 = (ulong *)((long)param_2 + 2), bVar2 != *(byte *)puVar6 &&
           ((param_3 == 3 ||
            ((puVar6 = (ulong *)((long)param_2 + 3), bVar2 != *(byte *)puVar6 &&
             ((param_3 == 4 ||
              ((puVar6 = (ulong *)((long)param_2 + 4), bVar2 != *(byte *)puVar6 &&
               ((param_3 == 5 ||
                ((puVar6 = (ulong *)((long)param_2 + 5), bVar2 != *(byte *)puVar6 &&
                 ((param_3 == 6 || (puVar6 = (ulong *)((long)param_2 + 6), bVar2 != *(byte *)puVar6)
                  ))))))))))))))))))))))) goto LAB_006b70bc;
    goto LAB_006b6d9c;
  }
  in_x9 = 0;
  pbVar4 = (byte *)((long)param_2 + param_3) + -uVar7;
  do {
    auVar17 = NEON_cmeq(*(undefined1 (*) [16])((long)param_2 + in_x9 + (byte)param_1[2][8]),*param_1
                        ,1);
    auVar18 = NEON_cmeq(*(undefined1 (*) [16])((long)param_2 + in_x9 + (byte)param_1[2][9]),
                        param_1[1],1);
    uVar9 = CONCAT11(auVar17[1] & auVar18[1],auVar17[0] & auVar18[0]);
    uVar10 = CONCAT13(auVar17[3] & auVar18[3],CONCAT12(auVar17[2] & auVar18[2],uVar9));
    uVar11 = CONCAT15(auVar17[5] & auVar18[5],CONCAT14(auVar17[4] & auVar18[4],uVar10));
    uVar3 = CONCAT17(auVar17[7] & auVar18[7],CONCAT16(auVar17[6] & auVar18[6],uVar11));
    auVar15._0_10_ = CONCAT19(auVar17[9] & auVar18[9],CONCAT18(auVar17[8] & auVar18[8],uVar3));
    auVar15[10] = auVar17[10] & auVar18[10];
    auVar15[0xb] = auVar17[0xb] & auVar18[0xb];
    auVar16[0xc] = auVar17[0xc] & auVar18[0xc];
    auVar16._0_12_ = auVar15;
    auVar16[0xd] = auVar17[0xd] & auVar18[0xd];
    auVar14[0xe] = auVar17[0xe] & auVar18[0xe];
    auVar14._0_14_ = auVar16;
    auVar14[0xf] = auVar17[0xf] & auVar18[0xf];
    uVar8 = CONCAT17((char)(auVar14._14_2_ >> 4),
                     CONCAT16((char)(auVar16._12_2_ >> 4),
                              CONCAT15((char)(auVar15._10_2_ >> 4),
                                       CONCAT14((char)(ushort)((unkuint10)auVar15._0_10_ >> 0x44),
                                                CONCAT13((char)(ushort)((ulong)uVar3 >> 0x34),
                                                         CONCAT12((char)(ushort)((uint6)uVar11 >>
                                                                                0x24),
                                                                  CONCAT11((char)(ushort)((uint)
                                                  uVar10 >> 0x14),(char)(uVar9 >> 4)))))))) &
            0x8888888888888888;
    if (uVar8 != 0) {
      uVar8 = uVar8 >> 3;
      uVar7 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      puVar5 = (ulong *)(in_x9 + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 2));
      goto LAB_006b6e4c;
    }
    in_x9 = in_x9 + 0x10;
  } while ((byte *)((long)param_2 + in_x9) <= pbVar4);
  if ((byte *)((long)param_2 + param_3) <= (byte *)((long)param_2 + in_x9)) {
LAB_006b70bc:
    auVar17._8_8_ = 0;
    auVar17._0_8_ = in_x9;
    return auVar17 << 0x40;
  }
  auVar17 = NEON_cmeq(*(undefined1 (*) [16])(pbVar4 + (byte)param_1[2][8]),*param_1,1);
  auVar14 = NEON_cmeq(*(undefined1 (*) [16])(pbVar4 + (byte)param_1[2][9]),param_1[1],1);
  uVar9 = CONCAT11(auVar17[1] & auVar14[1],auVar17[0] & auVar14[0]);
  uVar10 = CONCAT13(auVar17[3] & auVar14[3],CONCAT12(auVar17[2] & auVar14[2],uVar9));
  uVar11 = CONCAT15(auVar17[5] & auVar14[5],CONCAT14(auVar17[4] & auVar14[4],uVar10));
  uVar3 = CONCAT17(auVar17[7] & auVar14[7],CONCAT16(auVar17[6] & auVar14[6],uVar11));
  auVar12._0_10_ = CONCAT19(auVar17[9] & auVar14[9],CONCAT18(auVar17[8] & auVar14[8],uVar3));
  auVar12[10] = auVar17[10] & auVar14[10];
  auVar12[0xb] = auVar17[0xb] & auVar14[0xb];
  auVar13[0xc] = auVar17[0xc] & auVar14[0xc];
  auVar13._0_12_ = auVar12;
  auVar13[0xd] = auVar17[0xd] & auVar14[0xd];
  auVar18[0xe] = auVar17[0xe] & auVar14[0xe];
  auVar18._0_14_ = auVar13;
  auVar18[0xf] = auVar17[0xf] & auVar14[0xf];
  in_x9 = CONCAT17((char)(auVar18._14_2_ >> 4),
                   CONCAT16((char)(auVar13._12_2_ >> 4),
                            CONCAT15((char)(auVar12._10_2_ >> 4),
                                     CONCAT14((char)(ushort)((unkuint10)auVar12._0_10_ >> 0x44),
                                              CONCAT13((char)(ushort)((ulong)uVar3 >> 0x34),
                                                       CONCAT12((char)(ushort)((uint6)uVar11 >> 0x24
                                                                              ),
                                                                CONCAT11((char)(ushort)((uint)uVar10
                                                                                       >> 0x14),
                                                                         (char)(uVar9 >> 4)))))))) &
          0x8888888888888888;
  if (in_x9 == 0) goto LAB_006b70bc;
  uVar8 = (in_x9 >> 3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (in_x9 >> 3 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
  uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
  puVar5 = (ulong *)((param_3 - uVar7) + ((ulong)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 2));
  goto LAB_006b6e4c;
LAB_006b7118:
  puVar6 = (ulong *)((long)puVar6 - 3);
  goto LAB_006b6d9c;
LAB_006b7120:
  puVar6 = (ulong *)((long)puVar6 - 2);
  goto LAB_006b6d9c;
LAB_006b7128:
  puVar6 = (ulong *)((long)puVar6 - 1);
LAB_006b6d9c:
  puVar5 = (ulong *)0x0;
  if ((ulong)(byte)param_1[3][9] <= (ulong)((long)puVar6 - (long)param_2)) {
    puVar5 = (ulong *)(((long)puVar6 - (long)param_2) - (ulong)(byte)param_1[3][9]);
  }
LAB_006b6e4c:
  uVar3 = 1;
LAB_006b6e50:
  auVar19._8_8_ = puVar5;
  auVar19._0_8_ = uVar3;
  return auVar19;
}


// ===== 006b7130  memchr::memmem::searcher::searcher_kind_two_way =====

/* WARNING: Unknown calling convention: __rustcall */
/* memchr::memmem::searcher::searcher_kind_two_way */

undefined1  [16] __rustcall
memchr::memmem::searcher::searcher_kind_two_way
          (uint *param_1,ulong param_2,byte *param_3,ulong param_4,long param_5,ulong param_6)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  byte *pbVar8;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  undefined1 auVar15 [16];
  byte *pbVar9;
  
  if (param_4 < 0x10) {
    if (param_6 <= param_4) {
      uVar14 = 0;
      pbVar9 = param_3;
      if (param_6 != 0) {
        do {
          pbVar8 = pbVar9 + 1;
          uVar14 = (uint)*pbVar9 + uVar14 * 2;
          pbVar9 = pbVar8;
        } while (pbVar8 < param_3 + param_6);
      }
      uVar1 = param_1[0x18];
      uVar2 = param_1[0x19];
      param_2 = 0;
      pbVar9 = param_3;
      while( true ) {
        if (uVar1 == uVar14) {
          uVar4 = arch::all::rabinkarp::is_equal_raw(param_3 + param_2,param_5,param_6);
          uVar5 = 1;
          if ((uVar4 & 1) != 0) goto LAB_006b7450;
        }
        if (param_3 + (param_4 - param_6) <= pbVar9) break;
        pbVar8 = param_3 + param_6 + param_2;
        param_2 = param_2 + 1;
        uVar14 = (uint)*pbVar8 + (uVar14 - uVar2 * *pbVar9) * 2;
        pbVar9 = param_3 + param_2;
      }
    }
  }
  else {
    uVar4 = *(ulong *)(param_1 + 2);
    if ((*param_1 & 1) == 0) {
      if (param_6 == 0) goto LAB_006b724c;
      if (param_6 <= param_4) {
        uVar13 = *(ulong *)(param_1 + 6);
        uVar5 = 1;
        uVar12 = 0;
        uVar10 = 0;
        do {
          param_2 = uVar10;
          uVar10 = (param_6 - 1) + param_2;
          if (param_4 <= uVar10) {
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_bounds_check
                      (uVar10,param_4,&PTR_s__home_runner__cargo_registry_src_00976630);
          }
          if ((*(ulong *)(param_1 + 4) >> ((ulong)param_3[uVar10] & 0x3f) & 1) == 0) {
            uVar12 = 0;
            uVar10 = param_2 + param_6;
          }
          else {
            uVar10 = uVar12;
            if (uVar12 <= uVar13) {
              uVar10 = uVar13;
            }
            lVar6 = param_6 - uVar10;
            uVar3 = uVar13;
            if (uVar10 <= param_6 && lVar6 != 0) {
              lVar11 = (1 - uVar13) + uVar10;
              uVar7 = param_2 + uVar10;
              pbVar9 = (byte *)(param_5 + uVar10);
              do {
                if (param_4 <= uVar7) {
                  uVar4 = param_4;
                  if (param_4 <= uVar10 + param_2) {
                    uVar4 = uVar10 + param_2;
                  }
                    /* WARNING: Subroutine does not return */
                  core::panicking::panic_bounds_check
                            (uVar4,param_4,&PTR_s__home_runner__cargo_registry_src_00976648);
                }
                if (*pbVar9 != param_3[uVar7]) {
                  uVar12 = 0;
                  uVar10 = lVar11 + param_2;
                  goto LAB_006b727c;
                }
                lVar6 = lVar6 + -1;
                lVar11 = lVar11 + 1;
                uVar7 = uVar7 + 1;
                pbVar9 = pbVar9 + 1;
              } while (lVar6 != 0);
            }
            for (; uVar12 < uVar3; uVar3 = uVar3 - 1) {
              if (param_6 <= uVar3) {
                    /* WARNING: Subroutine does not return */
                core::panicking::panic_bounds_check
                          (uVar3,param_6,&PTR_s__home_runner__cargo_registry_src_00976660);
              }
              if (param_4 <= param_2 + uVar3) {
                    /* WARNING: Subroutine does not return */
                core::panicking::panic_bounds_check
                          (param_2 + uVar3,param_4,&PTR_s__home_runner__cargo_registry_src_00976678)
                ;
              }
              if (*(byte *)(param_5 + uVar3) != param_3[uVar3 + param_2]) {
                uVar12 = param_6 - uVar4;
                uVar10 = uVar4 + param_2;
                goto LAB_006b727c;
              }
            }
            if (param_6 <= uVar12) {
                    /* WARNING: Subroutine does not return */
              core::panicking::panic_bounds_check
                        (uVar12,param_6,&PTR_s__home_runner__cargo_registry_src_00976690);
            }
            uVar10 = uVar12 + param_2;
            if (param_4 <= uVar10) {
                    /* WARNING: Subroutine does not return */
              core::panicking::panic_bounds_check
                        (uVar10,param_4,&PTR_s__home_runner__cargo_registry_src_009766a8);
            }
            pbVar9 = (byte *)(param_5 + uVar12);
            uVar12 = param_6 - uVar4;
            if (*pbVar9 == param_3[uVar10]) goto LAB_006b7450;
            uVar10 = uVar4 + param_2;
          }
LAB_006b727c:
        } while (uVar10 + param_6 <= param_4);
        uVar5 = 0;
        goto LAB_006b7450;
      }
    }
    else {
      if (param_6 == 0) {
LAB_006b724c:
        param_2 = 0;
        uVar5 = 1;
        goto LAB_006b7450;
      }
      if (param_6 <= param_4) {
        uVar10 = *(ulong *)(param_1 + 6);
        param_2 = 0;
        do {
          uVar13 = (param_6 - 1) + param_2;
          if (param_4 <= uVar13) {
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_bounds_check
                      (uVar13,param_4,&PTR_s__home_runner__cargo_registry_src_009765b8);
          }
          uVar12 = param_6;
          if ((*(ulong *)(param_1 + 4) >> ((ulong)param_3[uVar13] & 0x3f) & 1) != 0) {
            if (uVar10 < param_6) {
              uVar12 = ~param_2;
              uVar13 = uVar10 + param_2;
              lVar6 = param_6 - uVar10;
              pbVar9 = (byte *)(param_5 + uVar10);
              do {
                if (param_4 <= uVar13) {
                  uVar4 = param_4;
                  if (param_4 <= param_2 + uVar10) {
                    uVar4 = param_2 + uVar10;
                  }
                    /* WARNING: Subroutine does not return */
                  core::panicking::panic_bounds_check
                            (uVar4,param_4,&PTR_s__home_runner__cargo_registry_src_009765d0);
                }
                if (*pbVar9 != param_3[uVar13]) {
                  param_2 = -uVar12;
                  goto joined_r0x006b7438;
                }
                lVar6 = lVar6 + -1;
                uVar12 = uVar12 - 1;
                uVar13 = uVar13 + 1;
                pbVar9 = pbVar9 + 1;
              } while (lVar6 != 0);
            }
            uVar13 = uVar10;
            if (param_6 <= uVar10 - 1) {
              if (uVar10 != 0) {
                    /* WARNING: Subroutine does not return */
                core::panicking::panic_bounds_check
                          (uVar10 - 1,param_6,&PTR_s__home_runner__cargo_registry_src_009765e8);
              }
LAB_006b744c:
              uVar5 = 1;
              break;
            }
            do {
              if (uVar13 == 0) goto LAB_006b744c;
              uVar12 = (param_2 + uVar13) - 1;
              if (param_4 <= uVar12) {
                    /* WARNING: Subroutine does not return */
                core::panicking::panic_bounds_check
                          (uVar12,param_4,&PTR_s__home_runner__cargo_registry_src_00976600);
              }
              lVar6 = uVar13 + param_2;
              pbVar9 = (byte *)(param_5 + -1 + uVar13);
              uVar12 = uVar4;
              uVar13 = uVar13 - 1;
            } while (*pbVar9 == param_3[lVar6 + -1]);
          }
          param_2 = uVar12 + param_2;
joined_r0x006b7438:
          uVar5 = 0;
        } while (param_2 + param_6 <= param_4);
        goto LAB_006b7450;
      }
    }
  }
  uVar5 = 0;
LAB_006b7450:
  auVar15._8_8_ = param_2;
  auVar15._0_8_ = uVar5;
  return auVar15;
}


// ===== 006b753c  memchr::memmem::searcher::searcher_kind_one_byte =====

/* WARNING: Unknown calling convention: __rustcall */
/* memchr::memmem::searcher::searcher_kind_one_byte */

undefined1  [16] __rustcall
memchr::memmem::searcher::searcher_kind_one_byte
          (char *param_1,ulong param_2,undefined1 (*param_3) [16],ulong param_4)

{
  undefined1 (*pauVar1) [16];
  char cVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 (*pauVar5) [16];
  undefined1 (*pauVar6) [16];
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  if (param_4 != 0) {
    cVar2 = *param_1;
    pauVar6 = param_3;
    if (param_4 < 0x10) {
      do {
        if ((*pauVar6)[0] == cVar2) goto LAB_006b7598;
        param_4 = param_4 - 1;
        pauVar6 = (undefined1 (*) [16])(*pauVar6 + 1);
      } while (param_4 != 0);
    }
    else {
      auVar8[1] = cVar2;
      auVar8[0] = cVar2;
      auVar8[2] = cVar2;
      auVar8[3] = cVar2;
      auVar8[4] = cVar2;
      auVar8[5] = cVar2;
      auVar8[6] = cVar2;
      auVar8[7] = cVar2;
      auVar8[8] = cVar2;
      auVar8[9] = cVar2;
      auVar8[10] = cVar2;
      auVar8[0xb] = cVar2;
      auVar8[0xc] = cVar2;
      auVar8[0xd] = cVar2;
      auVar8[0xe] = cVar2;
      auVar8[0xf] = cVar2;
      auVar9 = NEON_cmeq(auVar8,*param_3,1);
      uVar7 = CONCAT17((char)(auVar9._14_2_ >> 4),
                       CONCAT16((char)(auVar9._12_2_ >> 4),
                                CONCAT15((char)(auVar9._10_2_ >> 4),
                                         CONCAT14((char)(auVar9._8_2_ >> 4),
                                                  CONCAT13((char)(auVar9._6_2_ >> 4),
                                                           CONCAT12((char)(auVar9._4_2_ >> 4),
                                                                    CONCAT11((char)(auVar9._2_2_ >>
                                                                                   4),(char)(auVar9.
                                                  _0_2_ >> 4)))))))) & 0x8888888888888888;
      if (uVar7 != 0) {
        uVar7 = uVar7 >> 3;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        pauVar6 = (undefined1 (*) [16])
                  (*param_3 + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 2));
LAB_006b7598:
        auVar14._8_8_ = (long)pauVar6 - (long)param_3;
        auVar14._0_8_ = 1;
        return auVar14;
      }
      uVar7 = 0x10 - ((ulong)param_3 & 0xf);
      pauVar1 = (undefined1 (*) [16])(*param_3 + param_4);
      pauVar6 = (undefined1 (*) [16])((long)param_3 + uVar7);
      if ((0x3f < param_4) && (uVar7 <= param_4 - 0x40)) {
        pauVar5 = (undefined1 (*) [16])((long)param_3 + (0x20 - ((ulong)param_3 & 0xf)));
        do {
          pauVar6 = pauVar5;
          uVar3 = *(undefined8 *)(pauVar6[2] + 8);
          auVar12 = NEON_cmeq(auVar8,pauVar6[-1],1);
          auVar11 = NEON_cmeq(auVar8,*pauVar6,1);
          auVar10 = NEON_cmeq(auVar8,pauVar6[1],1);
          auVar9[9] = (char)((ulong)uVar3 >> 8);
          auVar9._0_9_ = *(unkbyte9 *)pauVar6[2];
          auVar9[10] = (char)((ulong)uVar3 >> 0x10);
          auVar9[0xb] = (char)((ulong)uVar3 >> 0x18);
          auVar9[0xc] = (char)((ulong)uVar3 >> 0x20);
          auVar9[0xd] = (char)((ulong)uVar3 >> 0x28);
          auVar9[0xe] = (char)((ulong)uVar3 >> 0x30);
          auVar9[0xf] = (char)((ulong)uVar3 >> 0x38);
          auVar9 = NEON_cmeq(auVar8,auVar9,1);
          auVar13[0] = auVar11[0] | auVar12[0] | auVar10[0] | auVar9[0];
          auVar13[1] = auVar11[1] | auVar12[1] | auVar10[1] | auVar9[1];
          auVar13[2] = auVar11[2] | auVar12[2] | auVar10[2] | auVar9[2];
          auVar13[3] = auVar11[3] | auVar12[3] | auVar10[3] | auVar9[3];
          auVar13[4] = auVar11[4] | auVar12[4] | auVar10[4] | auVar9[4];
          auVar13[5] = auVar11[5] | auVar12[5] | auVar10[5] | auVar9[5];
          auVar13[6] = auVar11[6] | auVar12[6] | auVar10[6] | auVar9[6];
          auVar13[7] = auVar11[7] | auVar12[7] | auVar10[7] | auVar9[7];
          auVar13[8] = auVar11[8] | auVar12[8] | auVar10[8] | auVar9[8];
          auVar13[9] = auVar11[9] | auVar12[9] | auVar10[9] | auVar9[9];
          auVar13[10] = auVar11[10] | auVar12[10] | auVar10[10] | auVar9[10];
          auVar13[0xb] = auVar11[0xb] | auVar12[0xb] | auVar10[0xb] | auVar9[0xb];
          auVar13[0xc] = auVar11[0xc] | auVar12[0xc] | auVar10[0xc] | auVar9[0xc];
          auVar13[0xd] = auVar11[0xd] | auVar12[0xd] | auVar10[0xd] | auVar9[0xd];
          auVar13[0xe] = auVar11[0xe] | auVar12[0xe] | auVar10[0xe] | auVar9[0xe];
          auVar13[0xf] = auVar11[0xf] | auVar12[0xf] | auVar10[0xf] | auVar9[0xf];
          auVar13 = NEON_umaxp(auVar13,auVar13,1);
          if (auVar13._0_8_ != 0) {
            uVar7 = CONCAT17((char)(auVar12._14_2_ >> 4),
                             CONCAT16((char)(auVar12._12_2_ >> 4),
                                      CONCAT15((char)(auVar12._10_2_ >> 4),
                                               CONCAT14((char)(auVar12._8_2_ >> 4),
                                                        CONCAT13((char)(auVar12._6_2_ >> 4),
                                                                 CONCAT12((char)(auVar12._4_2_ >> 4)
                                                                          ,CONCAT11((char)(auVar12.
                                                  _2_2_ >> 4),(char)(auVar12._0_2_ >> 4)))))))) &
                    0x8888888888888888;
            if (uVar7 != 0) {
              uVar7 = uVar7 >> 3;
              uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
              uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
              auVar10._8_8_ =
                   (long)pauVar6 +
                   ((((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 2) - 0x10) - (long)param_3);
              auVar10._0_8_ = 1;
              return auVar10;
            }
            uVar7 = CONCAT17((char)(auVar11._14_2_ >> 4),
                             CONCAT16((char)(auVar11._12_2_ >> 4),
                                      CONCAT15((char)(auVar11._10_2_ >> 4),
                                               CONCAT14((char)(auVar11._8_2_ >> 4),
                                                        CONCAT13((char)(auVar11._6_2_ >> 4),
                                                                 CONCAT12((char)(auVar11._4_2_ >> 4)
                                                                          ,CONCAT11((char)(auVar11.
                                                  _2_2_ >> 4),(char)(auVar11._0_2_ >> 4)))))))) &
                    0x8888888888888888;
            if (uVar7 != 0) {
              uVar7 = uVar7 >> 3;
              uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
              uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
              auVar17._8_8_ =
                   (long)pauVar6 +
                   (((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 2) - (long)param_3);
              auVar17._0_8_ = 1;
              return auVar17;
            }
            uVar7 = CONCAT17((char)(auVar10._14_2_ >> 4),
                             CONCAT16((char)(auVar10._12_2_ >> 4),
                                      CONCAT15((char)(auVar10._10_2_ >> 4),
                                               CONCAT14((char)(auVar10._8_2_ >> 4),
                                                        CONCAT13((char)(auVar10._6_2_ >> 4),
                                                                 CONCAT12((char)(auVar10._4_2_ >> 4)
                                                                          ,CONCAT11((char)(auVar10.
                                                  _2_2_ >> 4),(char)(auVar10._0_2_ >> 4)))))))) &
                    0x8888888888888888;
            if (uVar7 != 0) {
              uVar7 = uVar7 >> 3;
              uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
              uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
              auVar12._8_8_ =
                   (long)pauVar6 +
                   ((((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 2) + 0x10) - (long)param_3);
              auVar12._0_8_ = 1;
              return auVar12;
            }
            uVar7 = (CONCAT17((char)(auVar9._14_2_ >> 4),
                              CONCAT16((char)(auVar9._12_2_ >> 4),
                                       CONCAT15((char)(auVar9._10_2_ >> 4),
                                                CONCAT14((char)(auVar9._8_2_ >> 4),
                                                         CONCAT13((char)(auVar9._6_2_ >> 4),
                                                                  CONCAT12((char)(auVar9._4_2_ >> 4)
                                                                           ,CONCAT11((char)(auVar9.
                                                  _2_2_ >> 4),(char)(auVar9._0_2_ >> 4)))))))) &
                    0x8888888888888888) >> 3;
            uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
            uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
            auVar11._8_8_ =
                 (long)pauVar6 +
                 ((((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 2) + 0x20) - (long)param_3);
            auVar11._0_8_ = 1;
            return auVar11;
          }
          pauVar5 = pauVar6 + 4;
        } while (pauVar6 + 3 <= pauVar1 + -4);
        pauVar6 = pauVar6 + 3;
      }
      for (; pauVar6 <= pauVar1 + -1; pauVar6 = pauVar6 + 1) {
        auVar9 = NEON_cmeq(auVar8,*pauVar6,1);
        uVar7 = CONCAT17((char)(auVar9._14_2_ >> 4),
                         CONCAT16((char)(auVar9._12_2_ >> 4),
                                  CONCAT15((char)(auVar9._10_2_ >> 4),
                                           CONCAT14((char)(auVar9._8_2_ >> 4),
                                                    CONCAT13((char)(auVar9._6_2_ >> 4),
                                                             CONCAT12((char)(auVar9._4_2_ >> 4),
                                                                      CONCAT11((char)(auVar9._2_2_
                                                                                     >> 4),
                                                                               (char)(auVar9._0_2_
                                                                                     >> 4)))))))) &
                0x8888888888888888;
        if (uVar7 != 0) {
          uVar7 = uVar7 >> 3;
          uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
          uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
          auVar16._8_8_ =
               (undefined1 *)
               ((long)pauVar6 +
               (((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 2) - (long)param_3));
          auVar16._0_8_ = 1;
          return auVar16;
        }
      }
      if (pauVar6 < pauVar1) {
        auVar8 = NEON_cmeq(auVar8,pauVar1[-1],1);
        uVar7 = CONCAT17((char)(auVar8._14_2_ >> 4),
                         CONCAT16((char)(auVar8._12_2_ >> 4),
                                  CONCAT15((char)(auVar8._10_2_ >> 4),
                                           CONCAT14((char)(auVar8._8_2_ >> 4),
                                                    CONCAT13((char)(auVar8._6_2_ >> 4),
                                                             CONCAT12((char)(auVar8._4_2_ >> 4),
                                                                      CONCAT11((char)(auVar8._2_2_
                                                                                     >> 4),
                                                                               (char)(auVar8._0_2_
                                                                                     >> 4)))))))) &
                0x8888888888888888;
        if (uVar7 != 0) {
          uVar7 = uVar7 >> 3;
          uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
          uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
          auVar15._8_8_ =
               (long)(pauVar1 + -1) +
               (((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 2) - (long)param_3);
          auVar15._0_8_ = 1;
          return auVar15;
        }
      }
    }
  }
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_2;
  return auVar4 << 0x40;
}


// ===== 006b7748  memchr::memmem::searcher::prefilter_kind_fallback =====

/* WARNING: Unknown calling convention: __rustcall */
/* memchr::memmem::searcher::prefilter_kind_fallback */

undefined1  [16] __rustcall
memchr::memmem::searcher::prefilter_kind_fallback(byte *param_1,long param_2,byte *param_3)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  byte *pbVar3;
  ulong uVar4;
  byte bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  undefined1 (*pauVar10) [16];
  undefined8 uVar11;
  undefined1 (*pauVar12) [16];
  byte *pbVar13;
  ulong uVar14;
  byte *pbVar15;
  long lVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  
  bVar5 = param_1[2];
  pauVar1 = (undefined1 (*) [16])(param_3 + param_2);
  pbVar15 = (byte *)0x0;
  uVar11 = 1;
  while (uVar14 = (long)param_3 - (long)pbVar15, pbVar15 <= param_3 && uVar14 != 0) {
    pauVar2 = (undefined1 (*) [16])(pbVar15 + param_2);
    if (uVar14 < 0x10) {
      pbVar13 = pbVar15 + param_2;
      for (uVar4 = uVar14 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        if (*pbVar13 == bVar5) goto LAB_006b7958;
        pbVar13 = pbVar13 + 1;
      }
      if (uVar14 - 1 < 3) break;
      pbVar13 = pbVar13 + 3;
      while (pbVar13[-3] != bVar5) {
        if (pbVar13[-2] == bVar5) {
          pbVar13 = pbVar13 + -2;
          goto LAB_006b7958;
        }
        if (pbVar13[-1] == bVar5) {
          pbVar13 = pbVar13 + -1;
          goto LAB_006b7958;
        }
        if (*pbVar13 == bVar5) goto LAB_006b7958;
        pauVar12 = (undefined1 (*) [16])(pbVar13 + 1);
        pbVar13 = pbVar13 + 4;
        if (pauVar12 == pauVar1) goto LAB_006b79e0;
      }
      pbVar13 = pbVar13 + -3;
    }
    else {
      auVar17[1] = bVar5;
      auVar17[0] = bVar5;
      auVar17[2] = bVar5;
      auVar17[3] = bVar5;
      auVar17[4] = bVar5;
      auVar17[5] = bVar5;
      auVar17[6] = bVar5;
      auVar17[7] = bVar5;
      auVar17[8] = bVar5;
      auVar17[9] = bVar5;
      auVar17[10] = bVar5;
      auVar17[0xb] = bVar5;
      auVar17[0xc] = bVar5;
      auVar17[0xd] = bVar5;
      auVar17[0xe] = bVar5;
      auVar17[0xf] = bVar5;
      auVar17 = NEON_cmeq(auVar17,*pauVar2,1);
      uVar4 = CONCAT17((char)(auVar17._14_2_ >> 4),
                       CONCAT16((char)(auVar17._12_2_ >> 4),
                                CONCAT15((char)(auVar17._10_2_ >> 4),
                                         CONCAT14((char)(auVar17._8_2_ >> 4),
                                                  CONCAT13((char)(auVar17._6_2_ >> 4),
                                                           CONCAT12((char)(auVar17._4_2_ >> 4),
                                                                    CONCAT11((char)(auVar17._2_2_ >>
                                                                                   4),(char)(auVar17
                                                  ._0_2_ >> 4)))))))) & 0x8888888888888888;
      if (uVar4 == 0) {
        lVar16 = 0x10 - ((ulong)pauVar2 & 0xf);
        pauVar12 = (undefined1 (*) [16])((long)pauVar2 + lVar16);
        if ((0x3f < uVar14) && ((long)(pbVar15 + lVar16) <= (long)(param_3 + -0x40))) {
          pauVar10 = (undefined1 (*) [16])(pbVar15 + ((param_2 + 0x20) - ((ulong)pauVar2 & 0xf)));
          do {
            pauVar12 = pauVar10;
            uVar9 = *(undefined8 *)(pauVar12[2] + 8);
            auVar18[1] = bVar5;
            auVar18[0] = bVar5;
            auVar18[2] = bVar5;
            auVar18[3] = bVar5;
            auVar18[4] = bVar5;
            auVar18[5] = bVar5;
            auVar18[6] = bVar5;
            auVar18[7] = bVar5;
            auVar18[8] = bVar5;
            auVar18[9] = bVar5;
            auVar18[10] = bVar5;
            auVar18[0xb] = bVar5;
            auVar18[0xc] = bVar5;
            auVar18[0xd] = bVar5;
            auVar18[0xe] = bVar5;
            auVar18[0xf] = bVar5;
            auVar20 = NEON_cmeq(auVar18,pauVar12[-1],1);
            auVar19[1] = bVar5;
            auVar19[0] = bVar5;
            auVar19[2] = bVar5;
            auVar19[3] = bVar5;
            auVar19[4] = bVar5;
            auVar19[5] = bVar5;
            auVar19[6] = bVar5;
            auVar19[7] = bVar5;
            auVar19[8] = bVar5;
            auVar19[9] = bVar5;
            auVar19[10] = bVar5;
            auVar19[0xb] = bVar5;
            auVar19[0xc] = bVar5;
            auVar19[0xd] = bVar5;
            auVar19[0xe] = bVar5;
            auVar19[0xf] = bVar5;
            auVar19 = NEON_cmeq(auVar19,*pauVar12,1);
            auVar22[1] = bVar5;
            auVar22[0] = bVar5;
            auVar22[2] = bVar5;
            auVar22[3] = bVar5;
            auVar22[4] = bVar5;
            auVar22[5] = bVar5;
            auVar22[6] = bVar5;
            auVar22[7] = bVar5;
            auVar22[8] = bVar5;
            auVar22[9] = bVar5;
            auVar22[10] = bVar5;
            auVar22[0xb] = bVar5;
            auVar22[0xc] = bVar5;
            auVar22[0xd] = bVar5;
            auVar22[0xe] = bVar5;
            auVar22[0xf] = bVar5;
            auVar18 = NEON_cmeq(auVar22,pauVar12[1],1);
            auVar6[1] = bVar5;
            auVar6[0] = bVar5;
            auVar6[2] = bVar5;
            auVar6[3] = bVar5;
            auVar6[4] = bVar5;
            auVar6[5] = bVar5;
            auVar6[6] = bVar5;
            auVar6[7] = bVar5;
            auVar6[8] = bVar5;
            auVar6[9] = bVar5;
            auVar6[10] = bVar5;
            auVar6[0xb] = bVar5;
            auVar6[0xc] = bVar5;
            auVar6[0xd] = bVar5;
            auVar6[0xe] = bVar5;
            auVar6[0xf] = bVar5;
            auVar8[9] = (char)((ulong)uVar9 >> 8);
            auVar8._0_9_ = *(unkbyte9 *)pauVar12[2];
            auVar8[10] = (char)((ulong)uVar9 >> 0x10);
            auVar8[0xb] = (char)((ulong)uVar9 >> 0x18);
            auVar8[0xc] = (char)((ulong)uVar9 >> 0x20);
            auVar8[0xd] = (char)((ulong)uVar9 >> 0x28);
            auVar8[0xe] = (char)((ulong)uVar9 >> 0x30);
            auVar8[0xf] = (char)((ulong)uVar9 >> 0x38);
            auVar17 = NEON_cmeq(auVar6,auVar8,1);
            auVar21[0] = auVar19[0] | auVar20[0] | auVar18[0] | auVar17[0];
            auVar21[1] = auVar19[1] | auVar20[1] | auVar18[1] | auVar17[1];
            auVar21[2] = auVar19[2] | auVar20[2] | auVar18[2] | auVar17[2];
            auVar21[3] = auVar19[3] | auVar20[3] | auVar18[3] | auVar17[3];
            auVar21[4] = auVar19[4] | auVar20[4] | auVar18[4] | auVar17[4];
            auVar21[5] = auVar19[5] | auVar20[5] | auVar18[5] | auVar17[5];
            auVar21[6] = auVar19[6] | auVar20[6] | auVar18[6] | auVar17[6];
            auVar21[7] = auVar19[7] | auVar20[7] | auVar18[7] | auVar17[7];
            auVar21[8] = auVar19[8] | auVar20[8] | auVar18[8] | auVar17[8];
            auVar21[9] = auVar19[9] | auVar20[9] | auVar18[9] | auVar17[9];
            auVar21[10] = auVar19[10] | auVar20[10] | auVar18[10] | auVar17[10];
            auVar21[0xb] = auVar19[0xb] | auVar20[0xb] | auVar18[0xb] | auVar17[0xb];
            auVar21[0xc] = auVar19[0xc] | auVar20[0xc] | auVar18[0xc] | auVar17[0xc];
            auVar21[0xd] = auVar19[0xd] | auVar20[0xd] | auVar18[0xd] | auVar17[0xd];
            auVar21[0xe] = auVar19[0xe] | auVar20[0xe] | auVar18[0xe] | auVar17[0xe];
            auVar21[0xf] = auVar19[0xf] | auVar20[0xf] | auVar18[0xf] | auVar17[0xf];
            auVar22 = NEON_umaxp(auVar21,auVar21,1);
            if (auVar22._0_8_ != 0) {
              uVar14 = CONCAT17((char)(auVar20._14_2_ >> 4),
                                CONCAT16((char)(auVar20._12_2_ >> 4),
                                         CONCAT15((char)(auVar20._10_2_ >> 4),
                                                  CONCAT14((char)(auVar20._8_2_ >> 4),
                                                           CONCAT13((char)(auVar20._6_2_ >> 4),
                                                                    CONCAT12((char)(auVar20._4_2_ >>
                                                                                   4),CONCAT11((char
                                                  )(auVar20._2_2_ >> 4),(char)(auVar20._0_2_ >> 4)))
                                                  ))))) & 0x8888888888888888;
              if (uVar14 == 0) {
                uVar14 = CONCAT17((char)(auVar19._14_2_ >> 4),
                                  CONCAT16((char)(auVar19._12_2_ >> 4),
                                           CONCAT15((char)(auVar19._10_2_ >> 4),
                                                    CONCAT14((char)(auVar19._8_2_ >> 4),
                                                             CONCAT13((char)(auVar19._6_2_ >> 4),
                                                                      CONCAT12((char)(auVar19._4_2_
                                                                                     >> 4),
                                                                               CONCAT11((char)(
                                                  auVar19._2_2_ >> 4),(char)(auVar19._0_2_ >> 4)))))
                                                  ))) & 0x8888888888888888;
                if (uVar14 != 0) goto LAB_006b7910;
                uVar14 = CONCAT17((char)(auVar18._14_2_ >> 4),
                                  CONCAT16((char)(auVar18._12_2_ >> 4),
                                           CONCAT15((char)(auVar18._10_2_ >> 4),
                                                    CONCAT14((char)(auVar18._8_2_ >> 4),
                                                             CONCAT13((char)(auVar18._6_2_ >> 4),
                                                                      CONCAT12((char)(auVar18._4_2_
                                                                                     >> 4),
                                                                               CONCAT11((char)(
                                                  auVar18._2_2_ >> 4),(char)(auVar18._0_2_ >> 4)))))
                                                  ))) & 0x8888888888888888;
                if (uVar14 == 0) {
                  uVar14 = (CONCAT17((char)(auVar17._14_2_ >> 4),
                                     CONCAT16((char)(auVar17._12_2_ >> 4),
                                              CONCAT15((char)(auVar17._10_2_ >> 4),
                                                       CONCAT14((char)(auVar17._8_2_ >> 4),
                                                                CONCAT13((char)(auVar17._6_2_ >> 4),
                                                                         CONCAT12((char)(auVar17.
                                                  _4_2_ >> 4),
                                                  CONCAT11((char)(auVar17._2_2_ >> 4),
                                                           (char)(auVar17._0_2_ >> 4)))))))) &
                           0x8888888888888888) >> 3;
                  uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
                  uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10
                  ;
                  pbVar13 = pauVar12[2] + ((ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 2);
                }
                else {
                  uVar14 = uVar14 >> 3;
                  uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
                  uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10
                  ;
                  pbVar13 = pauVar12[1] + ((ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 2);
                }
              }
              else {
                uVar14 = uVar14 >> 3;
                uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
                uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
                pbVar13 = pauVar12[-1] + ((ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 2);
              }
              goto LAB_006b7958;
            }
            pauVar10 = pauVar12 + 4;
          } while (pauVar12 + 3 <= pauVar1 + -4);
          pauVar12 = pauVar12 + 3;
        }
        for (; pauVar12 <= pauVar1 + -1; pauVar12 = pauVar12 + 1) {
          auVar20[1] = bVar5;
          auVar20[0] = bVar5;
          auVar20[2] = bVar5;
          auVar20[3] = bVar5;
          auVar20[4] = bVar5;
          auVar20[5] = bVar5;
          auVar20[6] = bVar5;
          auVar20[7] = bVar5;
          auVar20[8] = bVar5;
          auVar20[9] = bVar5;
          auVar20[10] = bVar5;
          auVar20[0xb] = bVar5;
          auVar20[0xc] = bVar5;
          auVar20[0xd] = bVar5;
          auVar20[0xe] = bVar5;
          auVar20[0xf] = bVar5;
          auVar17 = NEON_cmeq(auVar20,*pauVar12,1);
          uVar14 = CONCAT17((char)(auVar17._14_2_ >> 4),
                            CONCAT16((char)(auVar17._12_2_ >> 4),
                                     CONCAT15((char)(auVar17._10_2_ >> 4),
                                              CONCAT14((char)(auVar17._8_2_ >> 4),
                                                       CONCAT13((char)(auVar17._6_2_ >> 4),
                                                                CONCAT12((char)(auVar17._4_2_ >> 4),
                                                                         CONCAT11((char)(auVar17.
                                                  _2_2_ >> 4),(char)(auVar17._0_2_ >> 4)))))))) &
                   0x8888888888888888;
          if (uVar14 != 0) goto LAB_006b7910;
        }
        if (pauVar12 < pauVar1) {
          pauVar12 = (undefined1 (*) [16])(param_3 + param_2 + -0x10);
          auVar7[1] = bVar5;
          auVar7[0] = bVar5;
          auVar7[2] = bVar5;
          auVar7[3] = bVar5;
          auVar7[4] = bVar5;
          auVar7[5] = bVar5;
          auVar7[6] = bVar5;
          auVar7[7] = bVar5;
          auVar7[8] = bVar5;
          auVar7[9] = bVar5;
          auVar7[10] = bVar5;
          auVar7[0xb] = bVar5;
          auVar7[0xc] = bVar5;
          auVar7[0xd] = bVar5;
          auVar7[0xe] = bVar5;
          auVar7[0xf] = bVar5;
          auVar17 = NEON_cmeq(auVar7,*pauVar12,1);
          uVar14 = CONCAT17((char)(auVar17._14_2_ >> 4),
                            CONCAT16((char)(auVar17._12_2_ >> 4),
                                     CONCAT15((char)(auVar17._10_2_ >> 4),
                                              CONCAT14((char)(auVar17._8_2_ >> 4),
                                                       CONCAT13((char)(auVar17._6_2_ >> 4),
                                                                CONCAT12((char)(auVar17._4_2_ >> 4),
                                                                         CONCAT11((char)(auVar17.
                                                  _2_2_ >> 4),(char)(auVar17._0_2_ >> 4)))))))) &
                   0x8888888888888888;
          if (uVar14 != 0) {
LAB_006b7910:
            uVar14 = (uVar14 >> 3 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                     (uVar14 >> 3 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
            uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
            pbVar13 = *pauVar12 + ((ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 2);
            goto LAB_006b7958;
          }
        }
        break;
      }
      uVar4 = uVar4 >> 3;
      uVar14 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      pbVar13 = *pauVar2 + ((ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 2);
    }
LAB_006b7958:
    pbVar13 = pbVar13 + ((long)pbVar15 - (long)pauVar2);
    pbVar15 = pbVar13 + -(long)(ulong)*param_1;
    if (((((byte *)(ulong)*param_1 <= pbVar13) && (pbVar3 = pbVar15 + param_1[1], pbVar15 <= pbVar3)
         ) && (pbVar3 < param_3)) && (pbVar3[param_2] == param_1[3])) goto LAB_006b79e4;
    pbVar15 = pbVar13 + 1;
    if (param_3 <= pbVar13) {
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (pbVar15,param_3,param_3,&PTR_s__home_runner__cargo_registry_src_009765a0);
    }
  }
LAB_006b79e0:
  uVar11 = 0;
LAB_006b79e4:
  auVar23._8_8_ = pbVar15;
  auVar23._0_8_ = uVar11;
  return auVar23;
}


// ===== 006b7a08  memchr::memmem::searcher::searcher_kind_two_way_with_prefilter =====

/* WARNING: Unknown calling convention: __rustcall */
/* memchr::memmem::searcher::searcher_kind_two_way_with_prefilter */

undefined1  [16] __rustcall
memchr::memmem::searcher::searcher_kind_two_way_with_prefilter
          (uint *param_1,uint *param_2,byte *param_3,ulong param_4,long param_5,ulong param_6)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  byte *pbVar10;
  code *pcVar12;
  long lVar13;
  ulong uVar14;
  ulong unaff_x20;
  uint uVar15;
  uint uVar16;
  undefined1 auVar17 [16];
  byte *pbVar11;
  
  if (param_4 < 0x10) {
    if (param_6 <= param_4) {
      uVar15 = 0;
      pbVar11 = param_3;
      if (param_6 != 0) {
        do {
          pbVar10 = pbVar11 + 1;
          uVar15 = (uint)*pbVar11 + uVar15 * 2;
          pbVar11 = pbVar10;
        } while (pbVar10 < param_3 + param_6);
      }
      uVar16 = param_1[0x18];
      uVar2 = param_1[0x19];
      unaff_x20 = 0;
      pbVar11 = param_3;
      while( true ) {
        if (uVar16 == uVar15) {
          uVar6 = arch::all::rabinkarp::is_equal_raw(param_3 + unaff_x20,param_5,param_6);
          uVar7 = 1;
          if ((uVar6 & 1) != 0) goto LAB_006b7b4c;
        }
        if (param_3 + (param_4 - param_6) <= pbVar11) break;
        pbVar10 = param_3 + param_6 + unaff_x20;
        unaff_x20 = unaff_x20 + 1;
        uVar15 = (uint)*pbVar10 + (uVar15 - uVar2 * *pbVar11) * 2;
        pbVar11 = param_3 + unaff_x20;
      }
    }
  }
  else {
    uVar6 = *(ulong *)(param_1 + 2);
    if ((*param_1 & 1) == 0) {
      if (param_6 == 0) goto LAB_006b7b44;
      if (param_6 <= param_4) {
        pcVar12 = *(code **)(param_1 + 0x14);
        uVar3 = *(ulong *)(param_1 + 4);
        uVar4 = *(ulong *)(param_1 + 6);
        uVar15 = *param_2;
        uVar16 = param_2[1];
        unaff_x20 = 0;
        uVar7 = 0;
        do {
          uVar9 = uVar7;
          if (uVar7 <= uVar4) {
            uVar9 = uVar4;
          }
          if (uVar15 != 0) {
            if ((uVar15 < 0x33) || (uVar15 * 8 - 8 <= uVar16)) {
              if (param_4 < unaff_x20) {
                    /* WARNING: Subroutine does not return */
                core::slice::index::slice_index_fail
                          (unaff_x20,param_4,param_4,
                           &PTR_s__home_runner__cargo_registry_src_009766c0);
              }
              auVar17 = (*pcVar12)(param_1 + 8,param_3 + unaff_x20,param_4 - unaff_x20);
              uVar7 = auVar17._8_8_;
              if ((auVar17 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                uVar7 = param_4 - unaff_x20;
              }
              bVar5 = uVar15 == 0xffffffff;
              uVar15 = uVar15 + 1;
              if (bVar5) {
                uVar15 = 0xffffffff;
              }
              bVar5 = CARRY4(uVar16,(uint)uVar7);
              uVar16 = uVar16 + (uint)uVar7;
              if (bVar5) {
                uVar16 = 0xffffffff;
              }
              if (uVar7 >> 0x20 != 0) {
                uVar16 = 0xffffffff;
              }
              *param_2 = uVar15;
              param_2[1] = uVar16;
              if ((auVar17 & (undefined1  [16])0x1) == (undefined1  [16])0x0) break;
              unaff_x20 = auVar17._8_8_ + unaff_x20;
              uVar7 = 0;
              uVar9 = uVar4;
              if (param_4 < unaff_x20 + param_6) goto LAB_006b7b4c;
            }
            else {
              uVar15 = 0;
              *param_2 = 0;
            }
          }
          uVar1 = (param_6 - 1) + unaff_x20;
          if (param_4 <= uVar1) {
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_bounds_check
                      (uVar1,param_4,&PTR_s__home_runner__cargo_registry_src_00976630);
          }
          if ((uVar3 >> ((ulong)param_3[uVar1] & 0x3f) & 1) == 0) {
            uVar7 = 0;
            unaff_x20 = unaff_x20 + param_6;
          }
          else {
            lVar13 = param_6 - uVar9;
            uVar1 = uVar4;
            if (uVar9 <= param_6 && lVar13 != 0) {
              uVar14 = uVar9 + unaff_x20;
              uVar8 = (1 - uVar4) + uVar9;
              pbVar11 = (byte *)(param_5 + uVar9);
              do {
                if (param_4 <= uVar14) {
                  uVar6 = param_4;
                  if (param_4 <= unaff_x20 + uVar9) {
                    uVar6 = unaff_x20 + uVar9;
                  }
                    /* WARNING: Subroutine does not return */
                  core::panicking::panic_bounds_check
                            (uVar6,param_4,&PTR_s__home_runner__cargo_registry_src_00976648);
                }
                if (*pbVar11 != param_3[uVar14]) {
                  uVar7 = 0;
                  goto LAB_006b7d34;
                }
                lVar13 = lVar13 + -1;
                uVar8 = uVar8 + 1;
                uVar14 = uVar14 + 1;
                pbVar11 = pbVar11 + 1;
              } while (lVar13 != 0);
            }
            for (; uVar7 < uVar1; uVar1 = uVar1 - 1) {
              if (param_6 <= uVar1) {
                    /* WARNING: Subroutine does not return */
                core::panicking::panic_bounds_check
                          (uVar1,param_6,&PTR_s__home_runner__cargo_registry_src_00976660);
              }
              if (param_4 <= unaff_x20 + uVar1) {
                    /* WARNING: Subroutine does not return */
                core::panicking::panic_bounds_check
                          (unaff_x20 + uVar1,param_4,
                           &PTR_s__home_runner__cargo_registry_src_00976678);
              }
              if (*(byte *)(param_5 + uVar1) != param_3[uVar1 + unaff_x20]) {
                uVar7 = param_6 - uVar6;
                unaff_x20 = uVar6 + unaff_x20;
                goto LAB_006b7ba8;
              }
            }
            if (param_6 <= uVar7) {
                    /* WARNING: Subroutine does not return */
              core::panicking::panic_bounds_check
                        (uVar7,param_6,&PTR_s__home_runner__cargo_registry_src_00976690);
            }
            uVar9 = unaff_x20 + uVar7;
            if (param_4 <= uVar9) {
                    /* WARNING: Subroutine does not return */
              core::panicking::panic_bounds_check
                        (uVar9,param_4,&PTR_s__home_runner__cargo_registry_src_009766a8);
            }
            pbVar11 = (byte *)(param_5 + uVar7);
            uVar7 = param_6 - uVar6;
            uVar8 = uVar6;
            if (*pbVar11 == param_3[uVar9]) goto LAB_006b7b48;
LAB_006b7d34:
            unaff_x20 = uVar8 + unaff_x20;
          }
LAB_006b7ba8:
        } while (unaff_x20 + param_6 <= param_4);
      }
    }
    else {
      if (param_6 == 0) {
LAB_006b7b44:
        unaff_x20 = 0;
LAB_006b7b48:
        uVar7 = 1;
        goto LAB_006b7b4c;
      }
      if (param_6 <= param_4) {
        uVar3 = *(ulong *)(param_1 + 4);
        uVar4 = *(ulong *)(param_1 + 6);
        unaff_x20 = 0;
        pcVar12 = *(code **)(param_1 + 0x14);
        uVar15 = *param_2;
        uVar16 = param_2[1];
        do {
          if (uVar15 != 0) {
            if ((uVar15 < 0x33) || (uVar15 * 8 - 8 <= uVar16)) {
              if (param_4 < unaff_x20) {
                    /* WARNING: Subroutine does not return */
                core::slice::index::slice_index_fail
                          (unaff_x20,param_4,param_4,
                           &PTR_s__home_runner__cargo_registry_src_00976618);
              }
              auVar17 = (*pcVar12)(param_1 + 8,param_3 + unaff_x20,param_4 - unaff_x20);
              uVar7 = auVar17._8_8_;
              if ((auVar17 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                uVar7 = param_4 - unaff_x20;
              }
              bVar5 = uVar15 == 0xffffffff;
              uVar15 = uVar15 + 1;
              if (bVar5) {
                uVar15 = 0xffffffff;
              }
              bVar5 = CARRY4(uVar16,(uint)uVar7);
              uVar16 = uVar16 + (uint)uVar7;
              if (bVar5) {
                uVar16 = 0xffffffff;
              }
              if (uVar7 >> 0x20 != 0) {
                uVar16 = 0xffffffff;
              }
              *param_2 = uVar15;
              param_2[1] = uVar16;
              if (((auVar17 & (undefined1  [16])0x1) == (undefined1  [16])0x0) ||
                 (unaff_x20 = auVar17._8_8_ + unaff_x20, param_4 < unaff_x20 + param_6))
              goto LAB_006b7b3c;
            }
            else {
              uVar15 = 0;
              *param_2 = 0;
            }
          }
          uVar7 = (param_6 - 1) + unaff_x20;
          if (param_4 <= uVar7) {
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_bounds_check
                      (uVar7,param_4,&PTR_s__home_runner__cargo_registry_src_009765b8);
          }
          uVar9 = param_6;
          if ((uVar3 >> ((ulong)param_3[uVar7] & 0x3f) & 1) != 0) {
            if (uVar4 < param_6) {
              uVar9 = ~unaff_x20;
              uVar7 = uVar4 + unaff_x20;
              lVar13 = param_6 - uVar4;
              pbVar11 = (byte *)(param_5 + uVar4);
              do {
                if (param_4 <= uVar7) {
                  uVar6 = param_4;
                  if (param_4 <= unaff_x20 + uVar4) {
                    uVar6 = unaff_x20 + uVar4;
                  }
                    /* WARNING: Subroutine does not return */
                  core::panicking::panic_bounds_check
                            (uVar6,param_4,&PTR_s__home_runner__cargo_registry_src_009765d0);
                }
                if (*pbVar11 != param_3[uVar7]) {
                  unaff_x20 = -uVar9;
                  goto joined_r0x006b7eac;
                }
                lVar13 = lVar13 + -1;
                uVar9 = uVar9 - 1;
                uVar7 = uVar7 + 1;
                pbVar11 = pbVar11 + 1;
              } while (lVar13 != 0);
            }
            uVar7 = uVar4;
            if (param_6 <= uVar4 - 1) {
              if (uVar4 != 0) {
                    /* WARNING: Subroutine does not return */
                core::panicking::panic_bounds_check
                          (uVar4 - 1,param_6,&PTR_s__home_runner__cargo_registry_src_009765e8);
              }
              goto LAB_006b7b48;
            }
            do {
              if (uVar7 == 0) goto LAB_006b7b48;
              uVar9 = (unaff_x20 + uVar7) - 1;
              if (param_4 <= uVar9) {
                    /* WARNING: Subroutine does not return */
                core::panicking::panic_bounds_check
                          (uVar9,param_4,&PTR_s__home_runner__cargo_registry_src_00976600);
              }
              lVar13 = uVar7 + unaff_x20;
              pbVar11 = (byte *)(param_5 + -1 + uVar7);
              uVar9 = uVar6;
              uVar7 = uVar7 - 1;
            } while (*pbVar11 == param_3[lVar13 + -1]);
          }
          unaff_x20 = uVar9 + unaff_x20;
joined_r0x006b7eac:
          uVar7 = 0;
        } while (unaff_x20 + param_6 <= param_4);
        goto LAB_006b7b4c;
      }
    }
  }
LAB_006b7b3c:
  uVar7 = 0;
LAB_006b7b4c:
  auVar17._8_8_ = unaff_x20;
  auVar17._0_8_ = uVar7;
  return auVar17;
}


// ===== 006b7fb8  memchr::arch::all::rabinkarp::is_equal_raw =====

/* WARNING: Unknown calling convention: __rustcall */
/* memchr::arch::all::rabinkarp::is_equal_raw */

bool __rustcall memchr::arch::all::rabinkarp::is_equal_raw(int *param_1,int *param_2,ulong param_3)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = param_1;
  piVar2 = param_2;
  if (3 < param_3) {
    do {
      param_1 = piVar1 + 1;
      param_2 = piVar2 + 1;
      if (*piVar1 != *piVar2) {
        return false;
      }
      param_3 = param_3 - 4;
      piVar1 = param_1;
      piVar2 = param_2;
    } while (3 < param_3);
  }
  piVar1 = param_1;
  piVar2 = param_2;
  if (1 < param_3) {
    piVar1 = (int *)((long)param_1 + 2);
    piVar2 = (int *)((long)param_2 + 2);
    if ((short)*param_1 != (short)*param_2) {
      return false;
    }
    param_3 = param_3 - 2;
  }
  if (param_3 == 0) {
    return true;
  }
  return (char)*piVar1 == (char)*piVar2;
}


// ===== 006b8020  <memchr::memmem::FindRevIter_as_core::iter::traits::iterator::Iterator>::next =====

/* WARNING: Unknown calling convention: __rustcall */
/* <memchr::memmem::FindRevIter as core::iter::traits::iterator::Iterator>::next */

undefined1  [16] __rustcall
<memchr::memmem::FindRevIter_as_core::iter::traits::iterator::Iterator>::next(long param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  byte *pbVar12;
  undefined1 (*pauVar13) [16];
  undefined8 uVar14;
  byte *pbVar15;
  ulong uVar16;
  undefined1 (*pauVar17) [16];
  ulong uVar18;
  ulong uVar19;
  ulong unaff_x19;
  ulong uVar20;
  byte *pbVar21;
  ulong uVar22;
  undefined1 (*pauVar23) [16];
  int iVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  
  if (*(long *)(param_1 + 0x40) == 1) {
    unaff_x19 = *(ulong *)(param_1 + 0x48);
    if (*(ulong *)(param_1 + 0x58) < unaff_x19) {
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (0,unaff_x19,*(ulong *)(param_1 + 0x58),
                 &PTR_s__home_runner__cargo_registry_src_00976810);
    }
    uVar20 = *(ulong *)(param_1 + 0x10);
    if (uVar20 <= unaff_x19) {
      uVar11 = *(ulong *)(param_1 + 0x18);
      lVar8 = 2;
      if (1 < uVar11) {
        lVar8 = uVar11 - 2;
      }
      if (lVar8 == 0) {
LAB_006b82f4:
        uVar22 = unaff_x19 - 1;
        uVar20 = (ulong)(unaff_x19 != 0);
LAB_006b8300:
        uVar14 = 1;
        *(ulong *)(param_1 + 0x40) = uVar20;
        *(ulong *)(param_1 + 0x48) = uVar22;
        goto LAB_006b806c;
      }
      pauVar23 = *(undefined1 (**) [16])(param_1 + 0x50);
      if (lVar8 == 1) {
        if (unaff_x19 != 0) {
          cVar3 = *(char *)(param_1 + 0x20);
          pauVar13 = (undefined1 (*) [16])(*pauVar23 + unaff_x19);
          if (unaff_x19 < 0x10) {
            do {
              if (pauVar13 <= pauVar23) goto LAB_006b8068;
              pauVar13 = (undefined1 (*) [16])(pauVar13[-1] + 0xf);
            } while ((*pauVar13)[0] != cVar3);
          }
          else {
            auVar25[1] = cVar3;
            auVar25[0] = cVar3;
            auVar25[2] = cVar3;
            auVar25[3] = cVar3;
            auVar25[4] = cVar3;
            auVar25[5] = cVar3;
            auVar25[6] = cVar3;
            auVar25[7] = cVar3;
            auVar25[8] = cVar3;
            auVar25[9] = cVar3;
            auVar25[10] = cVar3;
            auVar25[0xb] = cVar3;
            auVar25[0xc] = cVar3;
            auVar25[0xd] = cVar3;
            auVar25[0xe] = cVar3;
            auVar25[0xf] = cVar3;
            pauVar17 = (undefined1 (*) [16])(pauVar23[-1] + unaff_x19);
            auVar26 = NEON_cmeq(auVar25,*pauVar17,1);
            uVar20 = CONCAT17((char)(auVar26._14_2_ >> 4),
                              CONCAT16((char)(auVar26._12_2_ >> 4),
                                       CONCAT15((char)(auVar26._10_2_ >> 4),
                                                CONCAT14((char)(auVar26._8_2_ >> 4),
                                                         CONCAT13((char)(auVar26._6_2_ >> 4),
                                                                  CONCAT12((char)(auVar26._4_2_ >> 4
                                                                                 ),CONCAT11((char)(
                                                  auVar26._2_2_ >> 4),(char)(auVar26._0_2_ >> 4)))))
                                               ))) & 0x8888888888888888;
            if (uVar20 == 0) {
              uVar11 = unaff_x19 - ((ulong)pauVar13 & 0xf);
              if ((0x3f < unaff_x19) && (0x3f < uVar11)) {
                do {
                  auVar26 = NEON_cmeq(auVar25,*(undefined1 (*) [16])(pauVar23[-4] + uVar11),1);
                  auVar27 = NEON_cmeq(auVar25,*(undefined1 (*) [16])(pauVar23[-3] + uVar11),1);
                  auVar28 = NEON_cmeq(auVar25,*(undefined1 (*) [16])(pauVar23[-2] + uVar11),1);
                  auVar29 = NEON_cmeq(auVar25,*(undefined1 (*) [16])(pauVar23[-1] + uVar11),1);
                  auVar30[0] = auVar27[0] | auVar26[0] | auVar28[0] | auVar29[0];
                  auVar30[1] = auVar27[1] | auVar26[1] | auVar28[1] | auVar29[1];
                  auVar30[2] = auVar27[2] | auVar26[2] | auVar28[2] | auVar29[2];
                  auVar30[3] = auVar27[3] | auVar26[3] | auVar28[3] | auVar29[3];
                  auVar30[4] = auVar27[4] | auVar26[4] | auVar28[4] | auVar29[4];
                  auVar30[5] = auVar27[5] | auVar26[5] | auVar28[5] | auVar29[5];
                  auVar30[6] = auVar27[6] | auVar26[6] | auVar28[6] | auVar29[6];
                  auVar30[7] = auVar27[7] | auVar26[7] | auVar28[7] | auVar29[7];
                  auVar30[8] = auVar27[8] | auVar26[8] | auVar28[8] | auVar29[8];
                  auVar30[9] = auVar27[9] | auVar26[9] | auVar28[9] | auVar29[9];
                  auVar30[10] = auVar27[10] | auVar26[10] | auVar28[10] | auVar29[10];
                  auVar30[0xb] = auVar27[0xb] | auVar26[0xb] | auVar28[0xb] | auVar29[0xb];
                  auVar30[0xc] = auVar27[0xc] | auVar26[0xc] | auVar28[0xc] | auVar29[0xc];
                  auVar30[0xd] = auVar27[0xd] | auVar26[0xd] | auVar28[0xd] | auVar29[0xd];
                  auVar30[0xe] = auVar27[0xe] | auVar26[0xe] | auVar28[0xe] | auVar29[0xe];
                  auVar30[0xf] = auVar27[0xf] | auVar26[0xf] | auVar28[0xf] | auVar29[0xf];
                  auVar30 = NEON_umaxp(auVar30,auVar30,1);
                  if (auVar30._0_8_ != 0) {
                    uVar20 = CONCAT17((char)(auVar29._14_2_ >> 4),
                                      CONCAT16((char)(auVar29._12_2_ >> 4),
                                               CONCAT15((char)(auVar29._10_2_ >> 4),
                                                        CONCAT14((char)(auVar29._8_2_ >> 4),
                                                                 CONCAT13((char)(auVar29._6_2_ >> 4)
                                                                          ,CONCAT12((char)(auVar29.
                                                  _4_2_ >> 4),
                                                  CONCAT11((char)(auVar29._2_2_ >> 4),
                                                           (char)(auVar29._0_2_ >> 4)))))))) &
                             0x8888888888888888;
                    if (uVar20 == 0) {
                      uVar20 = CONCAT17((char)(auVar28._14_2_ >> 4),
                                        CONCAT16((char)(auVar28._12_2_ >> 4),
                                                 CONCAT15((char)(auVar28._10_2_ >> 4),
                                                          CONCAT14((char)(auVar28._8_2_ >> 4),
                                                                   CONCAT13((char)(auVar28._6_2_ >>
                                                                                  4),CONCAT12((char)
                                                  (auVar28._4_2_ >> 4),
                                                  CONCAT11((char)(auVar28._2_2_ >> 4),
                                                           (char)(auVar28._0_2_ >> 4)))))))) &
                               0x8888888888888888;
                      if (uVar20 == 0) {
                        uVar20 = CONCAT17((char)(auVar27._14_2_ >> 4),
                                          CONCAT16((char)(auVar27._12_2_ >> 4),
                                                   CONCAT15((char)(auVar27._10_2_ >> 4),
                                                            CONCAT14((char)(auVar27._8_2_ >> 4),
                                                                     CONCAT13((char)(auVar27._6_2_
                                                                                    >> 4),
                                                                              CONCAT12((char)(
                                                  auVar27._4_2_ >> 4),
                                                  CONCAT11((char)(auVar27._2_2_ >> 4),
                                                           (char)(auVar27._0_2_ >> 4)))))))) &
                                 0x8888888888888888;
                        if (uVar20 == 0) {
                          pauVar13 = (undefined1 (*) [16])
                                     ((long)pauVar23 +
                                     (uVar11 - ((ulong)LZCOUNT(CONCAT17((char)(auVar26._14_2_ >> 4),
                                                                        CONCAT16((char)(auVar26.
                                                  _12_2_ >> 4),
                                                  CONCAT15((char)(auVar26._10_2_ >> 4),
                                                           CONCAT14((char)(auVar26._8_2_ >> 4),
                                                                    CONCAT13((char)(auVar26._6_2_ >>
                                                                                   4),CONCAT12((char
                                                  )(auVar26._4_2_ >> 4),
                                                  CONCAT11((char)(auVar26._2_2_ >> 4),
                                                           (char)(auVar26._0_2_ >> 4)))))))) &
                                                  0x8888888888888888) >> 2)) + -0x31);
                        }
                        else {
                          pauVar13 = (undefined1 (*) [16])
                                     (pauVar23[-3] + ((ulong)LZCOUNT(uVar20) >> 2 ^ 0xf) + uVar11);
                        }
                      }
                      else {
                        pauVar13 = (undefined1 (*) [16])
                                   (pauVar23[-2] + ((ulong)LZCOUNT(uVar20) >> 2 ^ 0xf) + uVar11);
                      }
                    }
                    else {
                      pauVar13 = (undefined1 (*) [16])
                                 (pauVar23[-1] + ((ulong)LZCOUNT(uVar20) >> 2 ^ 0xf) + uVar11);
                    }
                    goto LAB_006b82b4;
                  }
                  uVar20 = uVar11 - 0x40;
                  bVar6 = 0x7f < uVar11;
                  uVar11 = uVar20;
                } while (bVar6);
              }
              do {
                uVar7 = uVar11;
                if ((long)uVar7 < 0x10) {
                  if ((long)uVar7 < 1) goto LAB_006b8068;
                  auVar25 = NEON_cmeq(auVar25,*pauVar23,1);
                  uVar20 = CONCAT17((char)(auVar25._14_2_ >> 4),
                                    CONCAT16((char)(auVar25._12_2_ >> 4),
                                             CONCAT15((char)(auVar25._10_2_ >> 4),
                                                      CONCAT14((char)(auVar25._8_2_ >> 4),
                                                               CONCAT13((char)(auVar25._6_2_ >> 4),
                                                                        CONCAT12((char)(auVar25.
                                                  _4_2_ >> 4),
                                                  CONCAT11((char)(auVar25._2_2_ >> 4),
                                                           (char)(auVar25._0_2_ >> 4)))))))) &
                           0x8888888888888888;
                  if (uVar20 == 0) goto LAB_006b8068;
                  pauVar13 = (undefined1 (*) [16])
                             ((long)pauVar23 + (0xf - ((ulong)LZCOUNT(uVar20) >> 2)));
                  goto LAB_006b82b4;
                }
                auVar26 = NEON_cmeq(auVar25,*(undefined1 (*) [16])(pauVar23[-1] + uVar7),1);
                uVar20 = CONCAT17((char)(auVar26._14_2_ >> 4),
                                  CONCAT16((char)(auVar26._12_2_ >> 4),
                                           CONCAT15((char)(auVar26._10_2_ >> 4),
                                                    CONCAT14((char)(auVar26._8_2_ >> 4),
                                                             CONCAT13((char)(auVar26._6_2_ >> 4),
                                                                      CONCAT12((char)(auVar26._4_2_
                                                                                     >> 4),
                                                                               CONCAT11((char)(
                                                  auVar26._2_2_ >> 4),(char)(auVar26._0_2_ >> 4)))))
                                                  ))) & 0x8888888888888888;
                uVar11 = uVar7 - 0x10;
              } while (uVar20 == 0);
              pauVar17 = (undefined1 (*) [16])(pauVar23[-1] + uVar7);
            }
            pauVar13 = (undefined1 (*) [16])(*pauVar17 + ((ulong)LZCOUNT(uVar20) >> 2 ^ 0xf));
          }
LAB_006b82b4:
          uVar22 = (long)pauVar13 - (long)pauVar23;
LAB_006b82b8:
          if (unaff_x19 == uVar22) goto LAB_006b82f4;
          uVar20 = 1;
          unaff_x19 = uVar22;
          goto LAB_006b8300;
        }
      }
      else {
        pbVar21 = *(byte **)(param_1 + 8);
        if (0xf < unaff_x19) {
          uVar7 = *(ulong *)(param_1 + 0x20);
          if ((uVar11 & 1) == 0) {
            if (uVar20 != 0) {
              uVar19 = *(ulong *)(param_1 + 0x30);
              uVar16 = unaff_x19;
              uVar10 = uVar20;
              uVar11 = uVar19;
              if (uVar19 < uVar20 || uVar19 - uVar20 == 0) {
                uVar11 = uVar20;
              }
LAB_006b8328:
              do {
                uVar22 = uVar16 - uVar20;
                if (unaff_x19 <= uVar22) {
                    /* WARNING: Subroutine does not return */
                  core::panicking::panic_bounds_check
                            (uVar22,unaff_x19,&PTR_s__home_runner__cargo_registry_src_00976798);
                }
                if ((*(ulong *)(param_1 + 0x28) >>
                     ((ulong)*(byte *)((long)pauVar23 + uVar22) & 0x3f) & 1) != 0) {
                  uVar18 = uVar10;
                  if (uVar19 <= uVar10) {
                    uVar18 = uVar19;
                  }
                  do {
                    uVar18 = uVar18 - 1;
                    if (uVar18 == 0xffffffffffffffff) {
                      if (*pbVar21 == *(byte *)((long)pauVar23 + uVar22)) {
                        if (uVar10 <= uVar19) goto LAB_006b82b8;
                        uVar18 = (uVar19 - uVar20) + uVar16;
                        lVar8 = -uVar19 + uVar10;
                        lVar9 = uVar11 - uVar19;
                        pbVar12 = pbVar21 + uVar19;
                        goto LAB_006b83a8;
                      }
                      break;
                    }
                    if (uVar20 <= uVar18) {
                    /* WARNING: Subroutine does not return */
                      core::panicking::panic_bounds_check
                                (uVar18,uVar20,&PTR_s__home_runner__cargo_registry_src_009767b0);
                    }
                    if (unaff_x19 <= uVar22 + uVar18) {
                    /* WARNING: Subroutine does not return */
                      core::panicking::panic_bounds_check
                                (uVar22 + uVar18,unaff_x19,
                                 &PTR_s__home_runner__cargo_registry_src_009767c8);
                    }
                  } while (pbVar21[uVar18] == *(byte *)((long)pauVar23 + uVar18 + (uVar16 - uVar20))
                          );
                  uVar22 = -uVar19 + uVar16 + uVar18;
                }
                uVar14 = 0;
                uVar16 = uVar22;
                uVar10 = uVar20;
              } while (uVar20 <= uVar22);
              goto LAB_006b806c;
            }
          }
          else if (uVar20 != 0) {
            uVar11 = *(ulong *)(param_1 + 0x30);
            uVar19 = unaff_x19;
            do {
              uVar22 = uVar19 - uVar20;
              if (unaff_x19 <= uVar22) {
                    /* WARNING: Subroutine does not return */
                core::panicking::panic_bounds_check
                          (uVar22,unaff_x19,&PTR_s__home_runner__cargo_registry_src_00976738);
              }
              if ((*(ulong *)(param_1 + 0x28) >> ((ulong)*(byte *)((long)pauVar23 + uVar22) & 0x3f)
                  & 1) != 0) {
                if (uVar11 - 1 < uVar20) {
                  lVar8 = uVar11 + 1;
                  do {
                    lVar9 = lVar8 + -1;
                    if (lVar9 == 0) goto LAB_006b8224;
                    uVar16 = (uVar22 + lVar8) - 2;
                    if (unaff_x19 <= uVar16) {
                    /* WARNING: Subroutine does not return */
                      core::panicking::panic_bounds_check
                                (uVar16,unaff_x19,&PTR_s__home_runner__cargo_registry_src_00976768);
                    }
                    lVar4 = lVar8 + (uVar19 - uVar20);
                    lVar5 = lVar8 + -2;
                    lVar8 = lVar9;
                  } while (pbVar21[lVar5] == *(byte *)((long)pauVar23 + lVar4 + -2));
                }
                else {
                  if (uVar11 != 0) {
                    /* WARNING: Subroutine does not return */
                    core::panicking::panic_bounds_check
                              (uVar11 - 1,uVar20,&PTR_s__home_runner__cargo_registry_src_00976750);
                  }
LAB_006b8224:
                  if (*pbVar21 == *(byte *)((long)pauVar23 + uVar22)) {
                    uVar16 = uVar11;
                    if (uVar11 < uVar20) {
                      uVar16 = (uVar11 - uVar20) + uVar19;
                      lVar8 = -uVar11;
                      pbVar12 = pbVar21 + uVar11;
                      while( true ) {
                        if (unaff_x19 <= uVar16) {
                    /* WARNING: Subroutine does not return */
                          core::panicking::panic_bounds_check
                                    (uVar16,unaff_x19,
                                     &PTR_s__home_runner__cargo_registry_src_00976780);
                        }
                        if (*pbVar12 != (*pauVar23)[uVar16]) break;
                        lVar8 = lVar8 + -1;
                        uVar16 = uVar16 + 1;
                        pbVar12 = pbVar12 + 1;
                        if (uVar20 + lVar8 == 0) goto LAB_006b82b8;
                      }
                      uVar16 = -lVar8;
                    }
                    if (uVar16 != uVar20) {
                      uVar22 = uVar19 - uVar7;
                      goto LAB_006b81b0;
                    }
                    goto LAB_006b82b8;
                  }
                  lVar9 = 0;
                }
                uVar22 = uVar19 + ~uVar11 + lVar9;
              }
LAB_006b81b0:
              uVar19 = uVar22;
              uVar14 = 0;
            } while (uVar20 <= uVar19);
            goto LAB_006b806c;
          }
          goto LAB_006b82f4;
        }
        iVar24 = 0;
        if (uVar20 != 0) {
          pbVar12 = *pauVar23 + unaff_x19;
          pbVar15 = pbVar12 + -uVar20;
          do {
            pbVar12 = pbVar12 + -1;
            iVar24 = (uint)*pbVar12 + iVar24 * 2;
          } while (pbVar15 < pbVar12);
        }
        iVar1 = *(int *)(param_1 + 0x38);
        iVar2 = *(int *)(param_1 + 0x3c);
        pauVar13 = (undefined1 (*) [16])((long)pauVar23 + (unaff_x19 - uVar20));
        uVar22 = unaff_x19 - uVar20;
        uVar11 = unaff_x19;
        while( true ) {
          uVar11 = uVar11 - 1;
          if ((iVar1 == iVar24) &&
             (uVar7 = memchr::arch::all::rabinkarp::is_equal_raw(*pauVar23 + uVar22,pbVar21,uVar20),
             (uVar7 & 1) != 0)) goto LAB_006b82b8;
          if (pauVar13 <= pauVar23) break;
          iVar24 = (uint)(byte)pauVar23[-1][uVar22 + 0xf] +
                   (iVar24 - iVar2 * (uint)(byte)(*pauVar23)[uVar11]) * 2;
          pauVar13 = (undefined1 (*) [16])(pauVar23[-1] + uVar22 + 0xf);
          uVar22 = uVar22 - 1;
        }
      }
    }
  }
LAB_006b8068:
  uVar14 = 0;
LAB_006b806c:
  auVar26._8_8_ = unaff_x19;
  auVar26._0_8_ = uVar14;
  return auVar26;
LAB_006b83a8:
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_bounds_check
              (uVar11,uVar20,&PTR_s__home_runner__cargo_registry_src_009767e0);
  }
  if (unaff_x19 <= uVar18) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_bounds_check
              (uVar18,unaff_x19,&PTR_s__home_runner__cargo_registry_src_009767f8);
  }
  if (*pbVar12 != (*pauVar23)[uVar18]) goto LAB_006b83d8;
  lVar8 = lVar8 + -1;
  uVar18 = uVar18 + 1;
  lVar9 = lVar9 + -1;
  pbVar12 = pbVar12 + 1;
  if (lVar8 == 0) goto LAB_006b82b8;
  goto LAB_006b83a8;
LAB_006b83d8:
  uVar16 = uVar16 - uVar7;
  uVar14 = 0;
  uVar10 = uVar7;
  if (uVar16 < uVar20) goto LAB_006b806c;
  goto LAB_006b8328;
}


// ===== 006b8628  FUN_006b8628 =====

void FUN_006b8628(undefined8 *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Debug>::fmt(*param_1,param_1[1],param_2);
  return;
}


// ===== 006b863c  FUN_006b863c =====

void FUN_006b863c(undefined8 *param_1,long param_2)

{
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    <u32_as_core::fmt::LowerHex>::fmt(*param_1);
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
    <u32_as_core::fmt::Display>::fmt();
    return;
  }
  <u32_as_core::fmt::UpperHex>::fmt();
  return;
}


// ===== 006b8658  FUN_006b8658 =====

void FUN_006b8658(long param_1,undefined8 param_2)

{
  long local_18;
  
  local_18 = param_1 + 4;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field2_finish
            (param_2,"Finder",6,&DAT_00376b1c,4,param_1,&DAT_00976828,"hash_2pow",9,&local_18,
             &DAT_00976848);
  return;
}


// ===== 006b86c8  <memchr::memmem::searcher::Prefilter_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <memchr::memmem::searcher::Prefilter as core::fmt::Debug>::fmt */

void __rustcall
<memchr::memmem::searcher::Prefilter_as_core::fmt::Debug>::fmt(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_30 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,"Prefilter",9);
  uVar1 = <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
                    (auStack_30,&DAT_00378c84,4,&PTR_s_<prefilter_function>_00976868,&DAT_00976878);
  uVar1 = <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
                    (uVar1,&DAT_00376fb4,4,&PTR_s_<prefilter_kind_union>_00976898,&DAT_00976878);
  uVar1 = <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
                    (uVar1,"rarest_byte",0xb,param_1 + 0x38,&DAT_009768a8);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
            (uVar1,"rarest_offset",0xd,param_1 + 0x39,&DAT_009768a8);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 006b8788  FUN_006b8788 =====

void FUN_006b8788(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,&DAT_003769d4,4,&local_18,&DAT_00976848);
  return;
}


// ===== 006b87c8  FUN_006b87c8 =====

void FUN_006b87c8(undefined8 param_1,long param_2)

{
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    <u8_as_core::fmt::LowerHex>::fmt();
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
    <u8_as_core::fmt::Display>::fmt();
    return;
  }
  <u8_as_core::fmt::UpperHex>::fmt();
  return;
}


// ===== 006b87e0  <memchr::memmem::FindIter_as_core::iter::traits::iterator::Iterator>::next =====

/* WARNING: Unknown calling convention: __rustcall */
/* <memchr::memmem::FindIter as core::iter::traits::iterator::Iterator>::next */

undefined8 __rustcall
<memchr::memmem::FindIter_as_core::iter::traits::iterator::Iterator>::next(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  uVar2 = param_1[0x15];
  uVar1 = param_1[1] - uVar2;
  if ((ulong)param_1[1] < uVar2) {
    return 0;
  }
  uVar3 = param_1[0x12];
  if ((uVar3 <= uVar1) &&
     (auVar4 = (*(code *)param_1[0xf])
                         (param_1 + 2,param_1 + 0x14,*param_1 + uVar2,uVar1,param_1[0x11],uVar3),
     auVar4._0_8_ == 1)) {
    if (uVar3 < 2) {
      uVar3 = 1;
    }
    param_1[0x15] = param_1[0x15] + auVar4._8_8_ + uVar3;
    return 1;
  }
  return 0;
}


// ===== 006b8874  <memchr::memmem::searcher::Searcher_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <memchr::memmem::searcher::Searcher as core::fmt::Debug>::fmt */

void __rustcall
<memchr::memmem::searcher::Searcher_as_core::fmt::Debug>::fmt(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_30 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,&DAT_00375658,8);
  uVar1 = <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
                    (auStack_30,&DAT_00378c84,4,&PTR_s_<searcher_function>_009768c8,&DAT_00976878);
  uVar1 = <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
                    (uVar1,&DAT_00376fb4,4,&PTR_s_<searcher_kind_union>_009768d8,&DAT_00976878);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
            (uVar1,"rabinkarp",9,param_1 + 0x60,&DAT_009768e8);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 006b8918  zmij::to_bcd_4x4 =====

/* WARNING: Unknown calling convention: __rustcall */
/* zmij::to_bcd_4x4 */

void __rustcall zmij::to_bcd_4x4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  short sVar2;
  int iVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  short sVar10;
  short sVar11;
  int iVar12;
  short sVar13;
  int iVar14;
  short sVar15;
  
  iVar3 = (int)*param_2;
  iVar6 = (int)((ulong)*param_2 >> 0x20);
  iVar9 = (int)param_2[1];
  iVar12 = (int)((ulong)param_2[1] >> 0x20);
  lVar1 = (long)(int)*(undefined8 *)(param_3 + 0x28);
  iVar14 = (int)((ulong)*(undefined8 *)(param_3 + 0x28) >> 0x20);
  iVar3 = iVar3 + (int)((ulong)(iVar3 * lVar1 * 2) >> 0x20) * iVar14;
  iVar6 = iVar6 + (int)((ulong)(iVar6 * lVar1 * 2) >> 0x20) * iVar14;
  iVar9 = iVar9 + (int)((ulong)(iVar9 * lVar1 * 2) >> 0x20) * iVar14;
  iVar12 = iVar12 + (int)((ulong)(iVar12 * lVar1 * 2) >> 0x20) * iVar14;
  sVar2 = (short)iVar3;
  sVar4 = (short)((uint)iVar3 >> 0x10);
  sVar5 = (short)iVar6;
  sVar7 = (short)((uint)iVar6 >> 0x10);
  sVar8 = (short)iVar9;
  sVar10 = (short)((uint)iVar9 >> 0x10);
  sVar11 = (short)iVar12;
  sVar13 = (short)((uint)iVar12 >> 0x10);
  iVar3 = (int)(short)*(undefined8 *)(param_3 + 0x30);
  sVar15 = (short)((ulong)*(undefined8 *)(param_3 + 0x30) >> 0x10);
  param_1[1] = CONCAT26(sVar13 + (short)((uint)(sVar13 * iVar3 * 2) >> 0x10) * sVar15,
                        CONCAT24(sVar11 + (short)((uint)(sVar11 * iVar3 * 2) >> 0x10) * sVar15,
                                 CONCAT22(sVar10 + (short)((uint)(sVar10 * iVar3 * 2) >> 0x10) *
                                                   sVar15,
                                          sVar8 + (short)((uint)(sVar8 * iVar3 * 2) >> 0x10) *
                                                  sVar15)));
  *param_1 = CONCAT26(sVar7 + (short)((uint)(sVar7 * iVar3 * 2) >> 0x10) * sVar15,
                      CONCAT24(sVar5 + (short)((uint)(sVar5 * iVar3 * 2) >> 0x10) * sVar15,
                               CONCAT22(sVar4 + (short)((uint)(sVar4 * iVar3 * 2) >> 0x10) * sVar15,
                                        sVar2 + (short)((uint)(sVar2 * iVar3 * 2) >> 0x10) * sVar15)
                              ));
  return;
}


// ===== 006b8944  zmij::write_exp_float_simd_32 =====

/* WARNING: Unknown calling convention: __rustcall */
/* zmij::write_exp_float_simd_32 */

long __rustcall
zmij::write_exp_float_simd_32
          (undefined8 *param_1,ulong *param_2,int param_3,int param_4,uint param_5,ulong param_6,
          long param_7)

{
  byte bVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  uVar3 = 2;
  if (param_4 == 0) {
    uVar3 = 0;
  }
  auVar4._0_8_ = *param_2 | 0x3030303030303030;
  param_7 = param_7 + (long)(int)((uVar3 | (int)param_2[3] << 2 | param_5) - 4) * 0x10;
  auVar4._8_8_ = param_6 | (ulong)(param_3 + 0x2e30) << 0x20;
  uVar2 = *(undefined8 *)(param_7 + 0x4308);
  bVar1 = *(byte *)(param_7 + 0x430f);
  auVar5[9] = (char)((ulong)uVar2 >> 8);
  auVar5._0_9_ = *(unkbyte9 *)(param_7 + 0x4300);
  auVar5[10] = (char)((ulong)uVar2 >> 0x10);
  auVar5[0xb] = (char)((ulong)uVar2 >> 0x18);
  auVar5[0xc] = (char)((ulong)uVar2 >> 0x20);
  auVar5[0xd] = (char)((ulong)uVar2 >> 0x28);
  auVar5[0xe] = (char)((ulong)uVar2 >> 0x30);
  auVar5[0xf] = (char)((ulong)uVar2 >> 0x38);
  auVar5 = a64_TBL(ZEXT816(0),auVar4,auVar5);
  param_1[1] = auVar5._8_8_;
  *param_1 = auVar5._0_8_;
  return (long)param_1 + ((ulong)bVar1 - (ulong)((param_6 & 0xff000000) == 0));
}


// ===== 006b89b0  <f32_as_zmij::private::Sealed>::write_to_zmij_buffer =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* <f32 as zmij::private::Sealed>::write_to_zmij_buffer */

undefined1 * __rustcall
<f32_as_zmij::private::Sealed>::write_to_zmij_buffer(uint param_1,undefined1 *param_2)

{
  long *__dest;
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  byte bVar4;
  int iVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 uVar17;
  bool bVar18;
  uint uVar19;
  uint uVar20;
  ulong uVar21;
  undefined *puVar22;
  undefined **ppuVar23;
  uint uVar24;
  int iVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  size_t __n;
  short sVar30;
  int iVar31;
  short sVar34;
  short sVar35;
  int iVar36;
  short sVar37;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  short sVar38;
  
  *param_2 = 0x2d;
  uVar26 = (ulong)(param_1 >> 0x17) & 0xff;
  __dest = (long *)(param_2 + (param_1 >> 0x1f));
  iVar25 = (int)uVar26;
  if (iVar25 == 0) {
    if ((param_1 & 0x7fffff) == 0) {
      *(undefined2 *)__dest = 0x2e30;
      *(undefined1 *)((long)__dest + 2) = 0x30;
      return (undefined1 *)((long)__dest + 3);
    }
    uVar19 = 0xffffffd3;
    auVar33._8_8_ = 0;
    auVar33._0_8_ = (ulong)(param_1 & 0x7fffff) << ((ulong)(DAT_0045619e + 0x1c) & 0x3f);
    auVar13._8_8_ = 0;
    auVar13._0_8_ = DAT_004582c0 + 1;
    uVar21 = SUB168(auVar33 * auVar13,8);
    uVar26 = (DAT_004582c0 >> ((ulong)(0x25 - DAT_0045619e) & 0x3f)) +
             (ulong)((param_1 ^ 0xffffffff) & 1);
    uVar27 = uVar21 & 0x3ffffffff;
    uVar21 = uVar21 >> 0x22;
    bVar18 = (uVar27 + uVar26 & 0xfffffffc00000000) != 0;
    if (bVar18) {
      uVar21 = uVar21 + 1;
    }
    uVar28 = 2;
    if (uVar27 != 0x100000000) {
      uVar28 = uVar27 * 10 + 0x200000000 >> 0x22;
    }
    uVar29 = 0;
    if (!bVar18 && uVar26 <= uVar27) {
      uVar29 = uVar28;
    }
    ppuVar23 = (undefined **)(uVar29 + uVar21 * 10);
    if (ppuVar23 < &PTR_FUN_00989680) {
      do {
        uVar19 = uVar19 - 1;
        ppuVar23 = (undefined **)((long)ppuVar23 * 10);
      } while ((long)ppuVar23 < 10000000);
    }
    auVar7._8_8_ = 0;
    auVar7._0_8_ = ppuVar23;
    puVar22 = SUB168(auVar7 * ZEXT816(0x199999999999999a),8);
    uVar26 = (long)ppuVar23 + (long)puVar22 * -10;
    bVar18 = uVar26 != 0;
  }
  else {
    iVar25 = iVar25 + -0x96;
    uVar20 = param_1 & 0x7fffff | 0x800000;
    iVar5 = iVar25 * 0x4d105;
    if ((param_1 & 0x7fffff) == 0) {
      uVar19 = iVar5 + -0x20000 >> 0x14;
      iVar25 = iVar25 + (~uVar19 * 0x3526b >> 0x10);
      uVar28 = *(ulong *)(&DAT_00458428 + (long)(int)uVar19 * 8);
      uVar21 = CONCAT44(0,uVar20 << (ulong)(iVar25 + 7U & 0x1f));
      auVar8._8_8_ = 0;
      auVar8._0_8_ = *(ulong *)(&DAT_00459778 + (long)(int)uVar19 * 8);
      auVar14._8_8_ = 0;
      auVar14._0_8_ = uVar21;
      uVar27 = SUB168(auVar8 * auVar14,8);
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar28;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar21;
      uVar26 = SUB168(auVar9 * auVar15,8);
      uVar29 = uVar28 >> ((ulong)(uint)-iVar25 & 0x3f);
      if (CARRY8(uVar27,uVar28 * uVar21)) {
        uVar26 = uVar26 + 1;
      }
      uVar21 = uVar27 + uVar28 * uVar21 >> 6 | uVar26 << 0x3a;
      puVar22 = (undefined *)(uVar26 >> 6);
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar21;
      if (CARRY8(uVar21,uVar29)) {
        puVar22 = puVar22 + 1;
      }
      uVar20 = SUB164(auVar10 * ZEXT816(10),8);
      if (0x8000000000000000 < uVar21 * 10) {
        uVar20 = uVar20 + 1;
      }
      uVar26 = uVar21 - (uVar29 >> 1);
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar26;
      bVar18 = uVar21 < uVar29 >> 1 || CARRY8(uVar21,uVar29);
      uVar24 = SUB164(auVar11 * ZEXT816(10),8);
      if ((uVar26 * 5 & 0x7fffffffffffffff) != 0) {
        uVar24 = uVar24 + 1;
      }
      if (uVar20 <= uVar24) {
        uVar20 = uVar24;
      }
    }
    else {
      uVar19 = iVar5 >> 0x14;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = (ulong)uVar20 << ((ulong)((byte)(&DAT_0045619d)[uVar26] + 0x1c) & 0x3f);
      auVar12._8_8_ = 0;
      auVar12._0_8_ = *(ulong *)(&DAT_00458428 + (long)(int)uVar19 * 8) + 1;
      uVar21 = SUB168(auVar6 * auVar12,8);
      uVar26 = (*(ulong *)(&DAT_00458428 + (long)(int)uVar19 * 8) >>
               ((ulong)(0x25 - (byte)(&DAT_0045619d)[uVar26]) & 0x3f)) +
               (ulong)((param_1 ^ 0xffffffff) & 1);
      uVar27 = uVar21 & 0x3ffffffff;
      puVar22 = (undefined *)(uVar21 >> 0x22);
      uVar20 = 2;
      if (uVar27 != 0x100000000) {
        uVar20 = (uint)(uVar27 * 10 + 0x200000000 >> 0x22);
      }
      bVar18 = (uVar27 + uVar26 & 0xfffffffc00000000) != 0;
      if (bVar18) {
        puVar22 = puVar22 + 1;
      }
      bVar18 = bVar18 || uVar27 < uVar26;
    }
    uVar26 = (ulong)uVar20;
    bVar18 = (bool)(bVar18 ^ 1);
  }
  if (&UNK_0098967f < puVar22) {
    uVar19 = uVar19 + 1;
  }
  uVar21 = uVar26 & 0xff;
  if (!bVar18) {
    uVar21 = 0;
  }
  bVar18 = (bool)((undefined *)0xf423f < puVar22 & bVar18);
  puVar3 = (undefined *)(uVar21 + (long)puVar22 * 10);
  if (puVar22 >= (undefined *)0xf4240) {
    puVar3 = puVar22;
  }
  iVar25 = uVar19 - (puVar22 < (undefined *)0xf4240);
  uVar19 = iVar25 + 7;
  iVar31 = (int)(puVar3 + ((ulong)((long)puVar3 * 0x68db8bb) >> 0x28) * 0xffffd8f0);
  iVar36 = (int)((ulong)(puVar3 + ((ulong)((long)puVar3 * 0x68db8bb) >> 0x28) * 0xffffd8f0) >> 0x20)
  ;
  iVar5 = (int)((ulong)_UNK_00455de8 >> 0x20);
  iVar31 = iVar31 + (int)((ulong)((long)iVar31 * (long)(int)_UNK_00455de8 * 2) >> 0x20) * iVar5;
  iVar36 = iVar36 + (int)((ulong)((long)iVar36 * (long)(int)_UNK_00455de8 * 2) >> 0x20) * iVar5;
  sVar30 = (short)iVar31;
  sVar34 = (short)((uint)iVar31 >> 0x10);
  sVar35 = (short)iVar36;
  sVar37 = (short)((uint)iVar36 >> 0x10);
  iVar5 = (int)(short)_DAT_00455df0;
  sVar38 = (short)((ulong)_DAT_00455df0 >> 0x10);
  sVar30 = sVar30 + (short)((uint)(sVar30 * iVar5 * 2) >> 0x10) * sVar38;
  sVar34 = sVar34 + (short)((uint)(sVar34 * iVar5 * 2) >> 0x10) * sVar38;
  sVar35 = sVar35 + (short)((uint)(sVar35 * iVar5 * 2) >> 0x10) * sVar38;
  sVar37 = sVar37 + (short)((uint)(sVar37 * iVar5 * 2) >> 0x10) * sVar38;
  uVar28 = CONCAT26(sVar37,CONCAT24(sVar35,CONCAT22(sVar34,sVar30)));
  uVar21 = (uVar28 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar28 & 0x5555555555555555) << 1;
  uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
  uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
  uVar27 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
  uVar21 = 0;
  if (uVar28 != 0) {
    uVar21 = (ulong)(8 - ((uint)LZCOUNT(uVar27 >> 0x20 | uVar27 << 0x20) >> 3));
  }
  if (iVar25 + 0xdU < 0x13) {
    uVar27 = 9;
    if (!bVar18) {
      uVar27 = uVar21;
    }
    uVar21 = (uVar28 & 0xff00ff00ff00ff00) >> 8 | (uVar28 & 0xff00ff00ff00ff) << 8;
    uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
    if (&UNK_0098967f < puVar22) {
      uVar27 = uVar27 + 1;
    }
    __n = uVar27 - 1;
    plVar1 = __dest;
    if (&UNK_0098967f < puVar22) {
      plVar1 = (long *)((long)__dest + 1);
    }
    *plVar1 = (uVar21 >> 0x20 | uVar21 << 0x20) + 0x3030303030303030;
    lVar2 = 8;
    if (&UNK_0098967f < puVar22) {
      lVar2 = 9;
    }
    *(char *)((long)__dest + lVar2) = (char)uVar26 + '0';
    if ((int)uVar19 < (int)__n + -1) {
      if (-1 < (int)uVar19) {
        memmove(__dest,(undefined1 *)((long)__dest + 1),(ulong)uVar19 + 1);
        *(undefined1 *)((long)__dest + (ulong)uVar19 + 1) = 0x2e;
        return (undefined1 *)((long)__dest + uVar27);
      }
      uVar26 = (ulong)(1 - uVar19);
      memmove((undefined1 *)((long)__dest + uVar26),(undefined1 *)((long)__dest + 1),__n);
      memset(__dest,0x30,uVar26);
      *(undefined1 *)((long)__dest + 1) = 0x2e;
      return (undefined1 *)((long)__dest + __n + uVar26);
    }
    memmove(__dest,(undefined1 *)((long)__dest + 1),__n);
    lVar2 = (long)(int)uVar19 + 3;
    memset((undefined1 *)((long)__dest + __n),0x30,lVar2 - __n);
    *(undefined1 *)((long)__dest + (long)(int)uVar19 + 1) = 0x2e;
    return (undefined1 *)((long)__dest + lVar2);
  }
  uVar20 = 2;
  if (!bVar18) {
    uVar20 = 0;
  }
  uVar27 = *(ulong *)(&DAT_00457020 + (long)(int)uVar19 * 8);
  auVar32._0_8_ =
       CONCAT17((char)((ushort)sVar37 >> 8),
                CONCAT16((char)sVar37,
                         CONCAT15((char)((ushort)sVar35 >> 8),
                                  CONCAT14((char)sVar35,
                                           CONCAT13((char)((ushort)sVar34 >> 8),
                                                    CONCAT12((char)sVar34,sVar30)))))) |
       0x3030303030303030;
  lVar2 = (long)(int)((uVar20 | (int)uVar21 << 2 | (uint)(&UNK_0098967f < puVar22)) - 4) * 0x10;
  auVar32._8_8_ = uVar27 | ((uVar26 & 0xff) << 0x20) + 0x2e3000000000;
  uVar17 = *(undefined8 *)(&UNK_0045a0c8 + lVar2);
  bVar4 = (&DAT_0045a0cf)[lVar2];
  auVar16[9] = (char)((ulong)uVar17 >> 8);
  auVar16._0_9_ = *(unkbyte9 *)(&DAT_0045a0c0 + lVar2);
  auVar16[10] = (char)((ulong)uVar17 >> 0x10);
  auVar16[0xb] = (char)((ulong)uVar17 >> 0x18);
  auVar16[0xc] = (char)((ulong)uVar17 >> 0x20);
  auVar16[0xd] = (char)((ulong)uVar17 >> 0x28);
  auVar16[0xe] = (char)((ulong)uVar17 >> 0x30);
  auVar16[0xf] = (char)((ulong)uVar17 >> 0x38);
  auVar33 = a64_TBL(ZEXT816(0),auVar32,auVar16);
  __dest[1] = auVar33._8_8_;
  *__dest = auVar33._0_8_;
  return (undefined1 *)((long)__dest + ((ulong)bVar4 - (ulong)((uVar27 & 0xff000000) == 0)));
}


// ===== 006b8e4c  <f64_as_zmij::private::Sealed>::write_to_zmij_buffer =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* <f64 as zmij::private::Sealed>::write_to_zmij_buffer */

undefined1 * __rustcall
<f64_as_zmij::private::Sealed>::write_to_zmij_buffer(ulong param_1,undefined1 *param_2)

{
  long lVar1;
  short *__dest;
  undefined4 *puVar2;
  short *psVar3;
  long lVar4;
  undefined1 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  uint6 uVar23;
  ushort uVar24;
  bool bVar25;
  uint uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  uint uVar30;
  ulong uVar31;
  ulong uVar32;
  long lVar33;
  ushort uVar34;
  undefined1 auVar35 [16];
  short sVar36;
  int iVar37;
  short sVar40;
  short sVar41;
  uint uVar42;
  int iVar43;
  short sVar44;
  short sVar45;
  int iVar46;
  short sVar47;
  short sVar48;
  int iVar49;
  short sVar50;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  
  *param_2 = 0x2d;
  lVar1 = DAT_00455dc0;
  uVar31 = param_1 >> 0x34 & 0x7ff;
  __dest = (short *)(param_2 + -((long)param_1 >> 0x3f));
  uVar28 = param_1 & 0xfffffffffffff;
  if (uVar31 == 0) {
    if (uVar28 == 0) {
      *__dest = 0x2e30;
      *(undefined1 *)(__dest + 1) = 0x30;
      return (undefined1 *)((long)__dest + 3);
    }
    uVar26 = 0xfffffebc;
    uVar28 = uVar28 << ((ulong)DAT_00455e01 & 0x3f);
    auVar35._8_8_ = 0;
    auVar35._0_8_ = DAT_00458d58;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar28;
    uVar27 = SUB168(auVar35 * auVar18,8);
    auVar39._8_8_ = 0;
    auVar39._0_8_ = uVar28;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = DAT_00457a08;
    uVar31 = SUB168(auVar39 * auVar19,8);
    if (CARRY8(uVar27,uVar28 * DAT_00457a08)) {
      uVar31 = uVar31 + 1;
    }
    uVar27 = uVar27 + uVar28 * DAT_00457a08 >> 6 | uVar31 << 0x3a;
    uVar31 = uVar31 >> 6;
    uVar28 = (DAT_00457a08 >> ((ulong)(7 - DAT_00455e01) & 0x3f)) + ((ulong)~(uint)param_1 & 1);
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar27;
    lVar33 = SUB168(auVar9 * ZEXT816(10),8);
    if (CARRY8(uVar27,uVar28)) {
      uVar31 = uVar31 + 1;
    }
    if (CARRY8(DAT_00455dc8,uVar27 * 10)) {
      lVar33 = lVar33 + 1;
    }
    lVar4 = 2;
    if (uVar27 != 0x4000000000000000) {
      lVar4 = lVar33;
    }
    lVar33 = 0;
    if (uVar28 <= uVar27 && !CARRY8(uVar27,uVar28)) {
      lVar33 = lVar4;
    }
    for (uVar28 = lVar33 + uVar31 * 10; (long)uVar28 < DAT_00455dc0; uVar28 = uVar28 * 10) {
      uVar26 = uVar26 - 1;
    }
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar28;
    uVar27 = SUB168(auVar10 * ZEXT816(0x199999999999999a),8);
    uVar28 = uVar28 + uVar27 * -10;
    bVar25 = uVar28 != 0;
  }
  else {
    iVar37 = (int)uVar31 + -0x433;
    iVar43 = iVar37 * 0x4d105;
    if (uVar28 == 0) {
      uVar26 = iVar43 + -0x20000 >> 0x14;
      iVar37 = iVar37 + (~uVar26 * 0x3526b >> 0x10);
      uVar29 = *(ulong *)(&DAT_00458428 + (long)(int)uVar26 * 8);
      uVar28 = (uVar28 | 0x10000000000000) << ((ulong)(iVar37 + 7) & 0x3f);
      auVar11._8_8_ = 0;
      auVar11._0_8_ = *(ulong *)(&DAT_00459778 + (long)(int)uVar26 * 8);
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar28;
      uVar31 = SUB168(auVar11 * auVar20,8);
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar29;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar28;
      uVar27 = SUB168(auVar12 * auVar21,8);
      uVar32 = uVar29 >> ((ulong)(uint)-iVar37 & 0x3f);
      if (CARRY8(uVar31,uVar29 * uVar28)) {
        uVar27 = uVar27 + 1;
      }
      uVar28 = uVar31 + uVar29 * uVar28 >> 6 | uVar27 << 0x3a;
      uVar27 = uVar27 >> 6;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar28;
      if (CARRY8(uVar28,uVar32)) {
        uVar27 = uVar27 + 1;
      }
      uVar42 = SUB164(auVar13 * ZEXT816(10),8);
      if (0x8000000000000000 < uVar28 * 10) {
        uVar42 = uVar42 + 1;
      }
      uVar31 = uVar28 - (uVar32 >> 1);
      auVar14._8_8_ = 0;
      auVar14._0_8_ = uVar31;
      bVar25 = uVar28 < uVar32 >> 1 || CARRY8(uVar28,uVar32);
      uVar30 = SUB164(auVar14 * ZEXT816(10),8);
      if ((uVar31 * 5 & 0x7fffffffffffffff) != 0) {
        uVar30 = uVar30 + 1;
      }
      if (uVar42 <= uVar30) {
        uVar42 = uVar30;
      }
    }
    else {
      uVar26 = iVar43 >> 0x14;
      uVar28 = (uVar28 | 0x10000000000000) << ((ulong)(byte)(&DAT_00455e00)[uVar31] & 0x3f);
      uVar32 = *(ulong *)(&DAT_00458428 + (long)(int)uVar26 * 8);
      auVar6._8_8_ = 0;
      auVar6._0_8_ = *(ulong *)(&DAT_00459778 + (long)(int)uVar26 * 8);
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar28;
      uVar29 = SUB168(auVar6 * auVar16,8);
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar28;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar32;
      uVar27 = SUB168(auVar7 * auVar17,8);
      if (CARRY8(uVar29,uVar28 * uVar32)) {
        uVar27 = uVar27 + 1;
      }
      uVar29 = uVar29 + uVar28 * uVar32 >> 6 | uVar27 << 0x3a;
      uVar27 = uVar27 >> 6;
      uVar28 = (uVar32 >> ((ulong)(7 - (byte)(&DAT_00455e00)[uVar31]) & 0x3f)) +
               ((ulong)~(uint)param_1 & 1);
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar29;
      if (CARRY8(uVar29,uVar28)) {
        uVar27 = uVar27 + 1;
      }
      uVar30 = SUB164(auVar8 * ZEXT816(10),8);
      if (CARRY8(DAT_00455dc8,uVar29 * 10)) {
        uVar30 = uVar30 + 1;
      }
      uVar42 = 2;
      if (uVar29 != 0x4000000000000000) {
        uVar42 = uVar30;
      }
      bVar25 = uVar29 < uVar28 || CARRY8(uVar29,uVar28);
    }
    uVar28 = (ulong)uVar42;
    bVar25 = (bool)(bVar25 ^ 1);
  }
  auVar15._8_8_ = 0;
  auVar15._0_8_ = DAT_00455dd0;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar27;
  iVar37 = (int)(SUB168(auVar15 * auVar22,8) >> 0x1a);
  uVar42 = SUB164(auVar15 * auVar22,0xc) >> 0x1a | (int)uVar27 - (int)DAT_00455dd8 * iVar37;
  iVar37 = iVar37 + (uint)((ulong)((long)iVar37 * (long)_DAT_00455de0 * 2) >> 0x29) * _UNK_00455de4;
  uVar42 = uVar42 + (uint)((ulong)((long)(int)uVar42 * (long)_DAT_00455de0 * 2) >> 0x29) *
                    _UNK_00455de4;
  uVar23 = CONCAT24((short)((uint)iVar37 >> 0x10),iVar37) & 0xffff0000ffff;
  uVar34 = (ushort)(uVar42 >> 0x10);
  iVar37 = (int)uVar23;
  uVar24 = (ushort)(uVar23 >> 0x20);
  lVar33 = (long)_UNK_00455de8;
  iVar37 = iVar37 + (int)((ulong)(iVar37 * lVar33 * 2) >> 0x20) * _UNK_00455dec;
  iVar43 = (uint)uVar24 + (int)((ulong)((int)(uint)uVar24 * lVar33 * 2) >> 0x20) * _UNK_00455dec;
  iVar46 = (uVar42 & 0xffff) +
           (int)((ulong)((int)(uVar42 & 0xffff) * lVar33 * 2) >> 0x20) * _UNK_00455dec;
  iVar49 = (uint)uVar34 + (int)((ulong)((int)(uint)uVar34 * lVar33 * 2) >> 0x20) * _UNK_00455dec;
  sVar36 = (short)iVar37;
  sVar40 = (short)((uint)iVar37 >> 0x10);
  sVar41 = (short)iVar43;
  sVar44 = (short)((uint)iVar43 >> 0x10);
  sVar45 = (short)iVar46;
  sVar47 = (short)((uint)iVar46 >> 0x10);
  sVar48 = (short)iVar49;
  sVar50 = (short)((uint)iVar49 >> 0x10);
  iVar37 = (int)_DAT_00455df0;
  auVar38._0_2_ = sVar36 + (short)((uint)(sVar36 * iVar37 * 2) >> 0x10) * _UNK_00455df2;
  auVar38._2_2_ = sVar40 + (short)((uint)(sVar40 * iVar37 * 2) >> 0x10) * _UNK_00455df2;
  auVar38._4_2_ = sVar41 + (short)((uint)(sVar41 * iVar37 * 2) >> 0x10) * _UNK_00455df2;
  auVar38._6_2_ = sVar44 + (short)((uint)(sVar44 * iVar37 * 2) >> 0x10) * _UNK_00455df2;
  auVar38._8_2_ = sVar45 + (short)((uint)(sVar45 * iVar37 * 2) >> 0x10) * _UNK_00455df2;
  auVar38._10_2_ = sVar47 + (short)((uint)(sVar47 * iVar37 * 2) >> 0x10) * _UNK_00455df2;
  auVar38._12_2_ = sVar48 + (short)((uint)(sVar48 * iVar37 * 2) >> 0x10) * _UNK_00455df2;
  auVar38._14_2_ = sVar50 + (short)((uint)(sVar50 * iVar37 * 2) >> 0x10) * _UNK_00455df2;
  auVar35 = NEON_rev64(auVar38,1);
  auVar39 = NEON_cmgt(auVar35,0,1);
  lVar33 = 0x11;
  if (!bVar25) {
    lVar33 = 0x10 - ((ulong)LZCOUNT(CONCAT17((char)(auVar39._14_2_ >> 4),
                                             CONCAT16((char)(auVar39._12_2_ >> 4),
                                                      CONCAT15((char)(auVar39._10_2_ >> 4),
                                                               CONCAT14((char)(auVar39._8_2_ >> 4),
                                                                        CONCAT13((char)(auVar39.
                                                  _6_2_ >> 4),
                                                  CONCAT12((char)(auVar39._4_2_ >> 4),
                                                           CONCAT11((char)(auVar39._2_2_ >> 4),
                                                                    (char)(auVar39._0_2_ >> 4)))))))
                                            )) >> 2);
  }
  psVar3 = __dest;
  if (DAT_00455dc0 <= (long)uVar27) {
    uVar26 = uVar26 + 1;
    psVar3 = (short *)((long)__dest + 1);
    lVar33 = lVar33 + 1;
  }
  uVar42 = uVar26 + 0xf;
  psVar3[8] = auVar35._8_2_ + 0x3030;
  psVar3[9] = auVar35._10_2_ + 0x3030;
  psVar3[10] = auVar35._12_2_ + 0x3030;
  psVar3[0xb] = auVar35._14_2_ + 0x3030;
  *psVar3 = auVar35._0_2_ + 0x3030;
  psVar3[1] = auVar35._2_2_ + 0x3030;
  psVar3[2] = auVar35._4_2_ + 0x3030;
  psVar3[3] = auVar35._6_2_ + 0x3030;
  lVar4 = 0x10;
  if (lVar1 <= (long)uVar27) {
    lVar4 = 0x11;
  }
  uVar31 = lVar33 - 1;
  *(char *)((long)__dest + lVar4) = (char)uVar28 + '0';
  if (0x14 < uVar26 + 0x14) {
    uVar5 = *(undefined1 *)((long)__dest + 1);
    *(undefined1 *)((long)__dest + 1) = 0x2e;
    *(undefined1 *)__dest = uVar5;
    puVar2 = (undefined4 *)((long)__dest + uVar31);
    uVar28 = *(ulong *)(&DAT_00457020 + (long)(int)uVar42 * 8);
    if (1 < uVar31) {
      puVar2 = (undefined4 *)((long)puVar2 + 1);
    }
    *puVar2 = (int)uVar28;
    *(char *)(puVar2 + 1) = (char)(uVar28 >> 0x20);
    return (undefined1 *)((long)puVar2 + (uVar28 >> 0x30));
  }
  if ((int)uVar31 + -1 <= (int)uVar42) {
    memmove(__dest,(undefined1 *)((long)__dest + 1),uVar31);
    lVar1 = (long)(int)uVar42 + 3;
    memset((undefined1 *)((long)__dest + uVar31),0x30,lVar1 - uVar31);
    *(undefined1 *)((long)__dest + (long)(int)uVar42 + 1) = 0x2e;
    return (undefined1 *)((long)__dest + lVar1);
  }
  if (-1 < (int)uVar42) {
    memmove(__dest,(undefined1 *)((long)__dest + 1),(ulong)uVar42 + 1);
    *(undefined1 *)((long)__dest + (ulong)uVar42 + 1) = 0x2e;
    return (undefined1 *)((long)__dest + lVar33);
  }
  uVar28 = (ulong)(1 - uVar42);
  memmove((undefined1 *)((long)__dest + uVar28),(undefined1 *)((long)__dest + 1),uVar31);
  memset(__dest,0x30,uVar28);
  *(undefined1 *)((long)__dest + 1) = 0x2e;
  return (undefined1 *)((long)__dest + uVar31 + uVar28);
}


// ===== 006b9298  FUN_006b9298 =====

void FUN_006b9298(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1[1];
  lVar3 = param_1[2] + 1;
  lVar2 = lVar1;
  while (lVar3 = lVar3 + -1, lVar3 != 0) {
                    /* try { // try from 006b92c8 to 006b92cb has its CatchHandler @ 006b9310 */
    FUN_006b9430(lVar2);
    lVar2 = lVar2 + 0x20;
  }
  if (*param_1 != 0) {
    __rustc::__rust_dealloc(lVar1,*param_1 << 5,8);
    return;
  }
  return;
}


// ===== 006b9354  FUN_006b9354 =====

void FUN_006b9354(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1[1];
  lVar3 = lVar1;
  for (lVar2 = param_1[2]; lVar2 != 0; lVar2 = lVar2 + -1) {
                    /* try { // try from 006b9378 to 006b9387 has its CatchHandler @ 006b93d8 */
    FUN_006b9430(lVar3);
                    /* try { // try from 006b9390 to 006b9397 has its CatchHandler @ 006b93ec */
    FUN_006b9430(lVar3 + 0x20);
    lVar3 = lVar3 + 0x40;
  }
  if (*param_1 != 0) {
    __rustc::__rust_dealloc(lVar1,*param_1 << 6,8);
    return;
  }
  return;
}


// ===== 006b9430  FUN_006b9430 =====

void FUN_006b9430(byte *param_1)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  bVar1 = *param_1;
  if (bVar1 < 0xd) {
    if (bVar1 < 0xc) {
      return;
    }
    if (bVar1 == 0xc) {
LAB_006b94ec:
      if (*(long *)(param_1 + 8) == 0) {
        return;
      }
      __rustc::__rust_dealloc(*(undefined8 *)(param_1 + 0x10),*(long *)(param_1 + 8),1);
      return;
    }
  }
  else {
    uVar3 = (uint)bVar1;
    if (bVar1 < 0x11) {
      if (uVar3 - 0xf < 2) {
        return;
      }
      if (uVar3 == 0xd) {
        return;
      }
      if (uVar3 == 0xe) goto LAB_006b94ec;
    }
    else if (uVar3 < 0x13) {
      if (bVar1 == 0x11) {
        uVar4 = *(undefined8 *)(param_1 + 8);
                    /* try { // try from 006b9514 to 006b951b has its CatchHandler @ 006b95b8 */
        FUN_006b9430(uVar4);
LAB_006b952c:
        __rustc::__rust_dealloc(uVar4,0x20,8);
        return;
      }
      if (uVar3 == 0x12) {
        return;
      }
    }
    else {
      if (uVar3 == 0x13) {
        uVar4 = *(undefined8 *)(param_1 + 8);
                    /* try { // try from 006b9524 to 006b952b has its CatchHandler @ 006b95b4 */
        FUN_006b9430(uVar4);
        goto LAB_006b952c;
      }
      if (bVar1 == 0x14) {
        lVar6 = *(long *)(param_1 + 0x10);
        lVar5 = *(long *)(param_1 + 0x18) + 1;
        lVar2 = lVar6;
        while (lVar5 = lVar5 + -1, lVar5 != 0) {
                    /* try { // try from 006b94d8 to 006b94db has its CatchHandler @ 006b9610 */
          FUN_006b9430(lVar2);
          lVar2 = lVar2 + 0x20;
        }
        if (*(long *)(param_1 + 8) == 0) {
          return;
        }
        lVar5 = *(long *)(param_1 + 8) << 5;
        goto LAB_006b9598;
      }
    }
  }
  lVar6 = *(long *)(param_1 + 0x10);
  lVar2 = lVar6;
  for (lVar5 = *(long *)(param_1 + 0x18); lVar5 != 0; lVar5 = lVar5 + -1) {
                    /* try { // try from 006b9568 to 006b9577 has its CatchHandler @ 006b95c8 */
    FUN_006b9430(lVar2);
                    /* try { // try from 006b9580 to 006b9587 has its CatchHandler @ 006b95dc */
    FUN_006b9430(lVar2 + 0x20);
    lVar2 = lVar2 + 0x40;
  }
  if (*(long *)(param_1 + 8) == 0) {
    return;
  }
  lVar5 = *(long *)(param_1 + 8) << 6;
LAB_006b9598:
  __rustc::__rust_dealloc(lVar6,lVar5,8);
  return;
}


// ===== 006b9654  FUN_006b9654 =====

void FUN_006b9654(long param_1)

{
                    /* try { // try from 006b9664 to 006b9667 has its CatchHandler @ 006b9678 */
  FUN_006b9430();
  FUN_006b9430(param_1 + 0x20);
  return;
}


// ===== 006b9690  serde::private::de::flat_map_take_entry =====

/* WARNING: Unknown calling convention: __rustcall */
/* serde::private::de::flat_map_take_entry */

void __rustcall
serde::private::de::flat_map_take_entry(byte *param_1,byte *param_2,long param_3,long param_4)

{
  byte bVar1;
  void *__s2;
  size_t __n;
  int iVar2;
  size_t *psVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint local_58;
  undefined4 uStack_54;
  void *local_50;
  size_t sStack_48;
  
  bVar1 = *param_2;
  if (bVar1 == 0xff) goto LAB_006b96bc;
  if (bVar1 < 0xe) {
    if (bVar1 == 0xc) {
      __s2 = *(void **)(param_2 + 0x10);
      __n = *(size_t *)(param_2 + 0x18);
    }
    else {
      if (bVar1 != 0xd) goto LAB_006b96bc;
      __s2 = *(void **)(param_2 + 8);
      __n = *(size_t *)(param_2 + 0x10);
    }
  }
  else if (bVar1 == 0xe) {
    core::str::converts::from_utf8
              (&local_58,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
    __s2 = local_50;
    __n = sStack_48;
    if ((local_58 & 1) != 0) goto LAB_006b96bc;
  }
  else if ((bVar1 != 0xf) ||
          (core::str::converts::from_utf8
                     (&local_58,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10)),
          __s2 = local_50, __n = sStack_48, CONCAT44(uStack_54,local_58) == 1)) goto LAB_006b96bc;
  if (param_4 != 0) {
    param_4 = param_4 << 4;
    psVar3 = (size_t *)(param_3 + 8);
    do {
      if ((*psVar3 == __n) && (iVar2 = memcmp((void *)psVar3[-1],__s2,__n), iVar2 == 0)) {
        uVar4 = *(undefined8 *)param_2;
        uVar6 = *(undefined8 *)(param_2 + 0x18);
        uVar5 = *(undefined8 *)(param_2 + 0x10);
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
        *(undefined8 *)param_1 = uVar4;
        *(undefined8 *)(param_1 + 0x18) = uVar6;
        *(undefined8 *)(param_1 + 0x10) = uVar5;
        uVar4 = *(undefined8 *)(param_2 + 0x20);
        uVar6 = *(undefined8 *)(param_2 + 0x38);
        uVar5 = *(undefined8 *)(param_2 + 0x30);
        *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
        *(undefined8 *)(param_1 + 0x20) = uVar4;
        *(undefined8 *)(param_1 + 0x38) = uVar6;
        *(undefined8 *)(param_1 + 0x30) = uVar5;
        param_1 = param_2;
        break;
      }
      param_4 = param_4 + -0x10;
      psVar3 = psVar3 + 2;
    } while (param_4 != 0);
  }
LAB_006b96bc:
  *param_1 = 0xff;
  return;
}


// ===== 006b97bc  serde::private::de::content::content_clone =====

/* WARNING: Unknown calling convention: __rustcall */
/* serde::private::de::content::content_clone */

void __rustcall serde::private::de::content::content_clone(byte *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x006b97fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_006b9800 + (ulong)(byte)(&DAT_0045a2c0)[*param_1] * 4))();
  return;
}


// ===== 006b9af8  serde::private::de::content::content_as_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* serde::private::de::content::content_as_str */

undefined1  [16] __rustcall
serde::private::de::content::content_as_str(byte *param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int local_28 [2];
  undefined8 local_20;
  undefined8 uStack_18;
  
  bVar1 = *param_1;
  uVar2 = 0;
  if (bVar1 < 0xe) {
    if (bVar1 == 0xc) {
      return *(undefined1 (*) [16])(param_1 + 0x10);
    }
    if (bVar1 == 0xd) {
      uVar2 = *(undefined8 *)(param_1 + 8);
      param_2 = *(undefined8 *)(param_1 + 0x10);
    }
LAB_006b9b2c:
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = uVar2;
    return auVar4;
  }
  if (bVar1 == 0xe) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  else {
    if (bVar1 != 0xf) goto LAB_006b9b2c;
    uVar2 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
  }
  core::str::converts::from_utf8(local_28,uVar2,uVar3);
  uVar2 = 0;
  if (local_28[0] == 0) {
    uVar2 = local_20;
  }
  auVar5._8_8_ = uStack_18;
  auVar5._0_8_ = uVar2;
  return auVar5;
}


// ===== 006b9b88  <serde::private::de::borrow_cow_str::CowStrVisitor_as_serde_core::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde::private::de::borrow_cow_str::CowStrVisitor as serde_core::de::Visitor>::expecting */

void __rustcall
<serde::private::de::borrow_cow_str::CowStrVisitor_as_serde_core::de::Visitor>::expecting
          (undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_00375770,8);
  return;
}


// ===== 006b9b9c  <serde::private::de::borrow_cow_bytes::CowBytesVisitor_as_serde_core::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde::private::de::borrow_cow_bytes::CowBytesVisitor as serde_core::de::Visitor>::expecting */

void __rustcall
<serde::private::de::borrow_cow_bytes::CowBytesVisitor_as_serde_core::de::Visitor>::expecting
          (undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,
             "a byte arraya booleanan integera floata charan optionala sequencea tuplea tuple struct"
             ,0xc);
  return;
}


// ===== 006b9bb0  FUN_006b9bb0 =====

void FUN_006b9bb0(undefined8 *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Debug>::fmt(*param_1,param_1[1],param_2);
  return;
}


// ===== 006b9bc4  FUN_006b9bc4 =====

void FUN_006b9bc4(undefined8 *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt(*param_1,param_1[1],param_2);
  return;
}


// ===== 006b9bd8  <serde::private::ser::Unsupported_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde::private::ser::Unsupported as core::fmt::Display>::fmt */

void __rustcall
<serde::private::ser::Unsupported_as_core::fmt::Display>::fmt(byte *param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x006b9bf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_006b9bf8 + (ulong)(byte)(&DAT_0045a2d6)[*param_1] * 4))(param_2);
  return;
}


// ===== 006b9c98  <serde::private::de::content::ExpectedInMap_as_serde_core::de::Expected>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde::private::de::content::ExpectedInMap as serde_core::de::Expected>::fmt */

void __rustcall
<serde::private::de::content::ExpectedInMap_as_serde_core::de::Expected>::fmt
          (long *param_1,undefined8 *param_2)

{
  long *local_20;
  undefined *puStack_18;
  
  if (*param_1 == 1) {
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_00371860,0x10);
    return;
  }
  puStack_18 = PTR_fmt_0099f458;
  local_20 = param_1;
  core::fmt::write(*param_2,param_2[1],&DAT_00365fea,&local_20);
  return;
}


// ===== 006b9cf8  <serde::private::de::content::UntaggedUnitVisitor_as_serde_core::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde::private::de::content::UntaggedUnitVisitor as serde_core::de::Visitor>::expecting */

void __rustcall
<serde::private::de::content::UntaggedUnitVisitor_as_serde_core::de::Visitor>::expecting
          (long param_1,undefined8 *param_2)

{
  long local_30;
  code *pcStack_28;
  long local_20;
  code *pcStack_18;
  
  local_20 = param_1 + 0x10;
  pcStack_28 = FUN_006b9bc4;
  pcStack_18 = FUN_006b9bc4;
  local_30 = param_1;
  core::fmt::write(*param_2,param_2[1],&DAT_00365303,&local_30);
  return;
}


// ===== 006b9d38  <serde::private::de::content::ContentVisitor_as_serde_core::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde::private::de::content::ContentVisitor as serde_core::de::Visitor>::expecting */

void __rustcall
<serde::private::de::content::ContentVisitor_as_serde_core::de::Visitor>::expecting
          (undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"any value",9);
  return;
}


// ===== 006b9d4c  <serde::private::de::content::TagOrContentVisitor_as_serde_core::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde::private::de::content::TagOrContentVisitor as serde_core::de::Visitor>::expecting */

void __rustcall
<serde::private::de::content::TagOrContentVisitor_as_serde_core::de::Visitor>::expecting
          (undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_20;
  code *pcStack_18;
  
  pcStack_18 = FUN_006b9bc4;
  local_20 = param_1;
  core::fmt::write(*param_2,param_2[1],&DAT_0036e1eb,&local_20);
  return;
}


// ===== 006b9d88  <serde::private::de::content::TagOrContentFieldVisitor_as_serde_core::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde::private::de::content::TagOrContentFieldVisitor as serde_core::de::Visitor>::expecting */

void __rustcall
<serde::private::de::content::TagOrContentFieldVisitor_as_serde_core::de::Visitor>::expecting
          (long param_1,undefined8 *param_2)

{
  long local_30;
  code *pcStack_28;
  long local_20;
  code *pcStack_18;
  
  local_20 = param_1 + 0x10;
  pcStack_28 = FUN_006b9bb0;
  pcStack_18 = FUN_006b9bb0;
  local_30 = param_1;
  core::fmt::write(*param_2,param_2[1],&DAT_00369a5c,&local_30);
  return;
}


// ===== 006b9dc8  <serde::private::de::content::TagContentOtherFieldVisitor_as_serde_core::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde::private::de::content::TagContentOtherFieldVisitor as serde_core::de::Visitor>::expecting
    */

void __rustcall
<serde::private::de::content::TagContentOtherFieldVisitor_as_serde_core::de::Visitor>::expecting
          (long param_1,undefined8 *param_2)

{
  long local_30;
  code *pcStack_28;
  long local_20;
  code *pcStack_18;
  
  local_20 = param_1 + 0x10;
  pcStack_28 = FUN_006b9bb0;
  pcStack_18 = FUN_006b9bb0;
  local_30 = param_1;
  core::fmt::write(*param_2,param_2[1],&DAT_0036d42c,&local_30);
  return;
}


// ===== 006b9e08  <serde::private::de::content::ExpectedInSeq_as_serde_core::de::Expected>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde::private::de::content::ExpectedInSeq as serde_core::de::Expected>::fmt */

void __rustcall
<serde::private::de::content::ExpectedInSeq_as_serde_core::de::Expected>::fmt
          (long *param_1,undefined8 *param_2)

{
  long *local_20;
  undefined *puStack_18;
  
  if (*param_1 == 1) {
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"1 element in sequence",0x15);
    return;
  }
  puStack_18 = PTR_fmt_0099f458;
  local_20 = param_1;
  core::fmt::write(*param_2,param_2[1],&DAT_0036890e,&local_20);
  return;
}


// ===== 006b9e68  FUN_006b9e68 =====

void FUN_006b9e68(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    __rustc::__rust_dealloc(*param_1,param_1[1],1);
    return;
  }
  return;
}


// ===== 006b9e80  <serde_core::format::serde_core::format::Buf>::as_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_core::format::serde_core::format::Buf>::as_str */

undefined8 __rustcall <serde_core::format::serde_core::format::Buf>::as_str(undefined8 *param_1)

{
  if ((ulong)param_1[2] <= (ulong)param_1[1]) {
    return *param_1;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail
            (0,param_1[2],param_1[1],&PTR_s__home_runner__cargo_registry_src_00976908);
}


// ===== 006b9eac  serde_core::private::string::from_utf8_lossy =====

/* WARNING: Unknown calling convention: __rustcall */
/* serde_core::private::string::from_utf8_lossy */

void __rustcall serde_core::private::string::from_utf8_lossy(void)

{
  (*(code *)PTR_from_utf8_lossy_009a0f50)();
  return;
}


// ===== 006b9eb0  <serde_core::de::Unexpected_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_core::de::Unexpected as core::fmt::Display>::fmt */

void __rustcall <serde_core::de::Unexpected_as_core::fmt::Display>::fmt(byte *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x006b9ed4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_006b9ed8 + (ulong)(byte)""[*param_1] * 4))();
  return;
}


// ===== 006ba17c  <serde_core::de::ignored_any::IgnoredAny_as_serde_core::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_core::de::ignored_any::IgnoredAny as serde_core::de::Visitor>::expecting */

void __rustcall
<serde_core::de::ignored_any::IgnoredAny_as_serde_core::de::Visitor>::expecting
          (undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"anything at all",0xf);
  return;
}


// ===== 006ba190  <serde_core::de::impls::UnitVisitor_as_serde_core::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_core::de::impls::UnitVisitor as serde_core::de::Visitor>::expecting */

void __rustcall
<serde_core::de::impls::UnitVisitor_as_serde_core::de::Visitor>::expecting
          (undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_00376604,4);
  return;
}


// ===== 006ba1a4  <<serde_core::de::impls::range_from::Field_as_serde_core::de::Deserialize>::deserialize::FieldVisitor_as_serde_core::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<serde_core::de::impls::range_from::Field as
   serde_core::de::Deserialize>::deserialize::FieldVisitor as serde_core::de::Visitor>::expecting */

void __rustcall
<<serde_core::de::impls::range_from::Field_as_serde_core::de::Deserialize>::deserialize::FieldVisitor_as_serde_core::de::Visitor>
::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"`start`",7);
  return;
}


// ===== 006ba1b8  <<serde_core::de::impls::range::Field_as_serde_core::de::Deserialize>::deserialize::FieldVisitor_as_serde_core::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<serde_core::de::impls::range::Field as serde_core::de::Deserialize>::deserialize::FieldVisitor
   as serde_core::de::Visitor>::expecting */

void __rustcall
<<serde_core::de::impls::range::Field_as_serde_core::de::Deserialize>::deserialize::FieldVisitor_as_serde_core::de::Visitor>
::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_00371ab0,0x10);
  return;
}


// ===== 006ba1cc  <<serde_core::de::impls::range_to::Field_as_serde_core::de::Deserialize>::deserialize::FieldVisitor_as_serde_core::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<serde_core::de::impls::range_to::Field as
   serde_core::de::Deserialize>::deserialize::FieldVisitor as serde_core::de::Visitor>::expecting */

void __rustcall
<<serde_core::de::impls::range_to::Field_as_serde_core::de::Deserialize>::deserialize::FieldVisitor_as_serde_core::de::Visitor>
::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"`end`",5);
  return;
}


// ===== 006ba1e0  <<<core[188d2c0002da36d0]::ops::range::Bound<_>as_serde_core[fd83d7a2bf1ac210]::de::Deserialize>::deserialize::Field_as_serde_core[fd83d7a2bf1ac210]::de::Deserialize>::deserialize::FieldVisitor_as_serde_core[fd83d7a2bf1ac210]::de::Visitor>::expecting =====

/* <<<core[188d2c0002da36d0]::ops::range::Bound<_> as
   serde_core[fd83d7a2bf1ac210]::de::Deserialize>::deserialize::Field as
   serde_core[fd83d7a2bf1ac210]::de::Deserialize>::deserialize::FieldVisitor as
   serde_core[fd83d7a2bf1ac210]::de::Visitor>::expecting */

void <<<core[188d2c0002da36d0]::ops::range::Bound<_>as_serde_core[fd83d7a2bf1ac210]::de::Deserialize>::deserialize::Field_as_serde_core[fd83d7a2bf1ac210]::de::Deserialize>::deserialize::FieldVisitor_as_serde_core[fd83d7a2bf1ac210]::de::Visitor>
     ::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,"`Unbounded`, `Included` or `Excluded`",0x25);
  return;
}


// ===== 006ba1f4  <<<core[188d2c0002da36d0]::result::Result<_,_>as_serde_core[fd83d7a2bf1ac210]::de::Deserialize>::deserialize::Field_as_serde_core[fd83d7a2bf1ac210]::de::Deserialize>::deserialize::FieldVisitor_as_serde_core[fd83d7a2bf1ac210]::de::Visitor>::expecting =====

/* <<<core[188d2c0002da36d0]::result::Result<_, _> as
   serde_core[fd83d7a2bf1ac210]::de::Deserialize>::deserialize::Field as
   serde_core[fd83d7a2bf1ac210]::de::Deserialize>::deserialize::FieldVisitor as
   serde_core[fd83d7a2bf1ac210]::de::Visitor>::expecting */

void <<<core[188d2c0002da36d0]::result::Result<_,_>as_serde_core[fd83d7a2bf1ac210]::de::Deserialize>::deserialize::Field_as_serde_core[fd83d7a2bf1ac210]::de::Deserialize>::deserialize::FieldVisitor_as_serde_core[fd83d7a2bf1ac210]::de::Visitor>
     ::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"`Ok` or `Err`",0xd);
  return;
}


// ===== 006ba208  <<<core[188d2c0002da36d0]::time::Duration_as_serde_core[fd83d7a2bf1ac210]::de::Deserialize>::deserialize::Field_as_serde_core[fd83d7a2bf1ac210]::de::Deserialize>::deserialize::FieldVisitor_as_serde_core[fd83d7a2bf1ac210]::de::Visitor>::expecting =====

/* <<<core[188d2c0002da36d0]::time::Duration as
   serde_core[fd83d7a2bf1ac210]::de::Deserialize>::deserialize::Field as
   serde_core[fd83d7a2bf1ac210]::de::Deserialize>::deserialize::FieldVisitor as
   serde_core[fd83d7a2bf1ac210]::de::Visitor>::expecting */

void <<<core[188d2c0002da36d0]::time::Duration_as_serde_core[fd83d7a2bf1ac210]::de::Deserialize>::deserialize::Field_as_serde_core[fd83d7a2bf1ac210]::de::Deserialize>::deserialize::FieldVisitor_as_serde_core[fd83d7a2bf1ac210]::de::Visitor>
     ::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"`secs` or `nanos`",0x11);
  return;
}


// ===== 006ba21c  <<<std[29fbf8137994c300]::time::SystemTime_as_serde_core[fd83d7a2bf1ac210]::de::Deserialize>::deserialize::Field_as_serde_core[fd83d7a2bf1ac210]::de::Deserialize>::deserialize::FieldVisitor_as_serde_core[fd83d7a2bf1ac210]::de::Visitor>::expecting =====

/* <<<std[29fbf8137994c300]::time::SystemTime as
   serde_core[fd83d7a2bf1ac210]::de::Deserialize>::deserialize::Field as
   serde_core[fd83d7a2bf1ac210]::de::Deserialize>::deserialize::FieldVisitor as
   serde_core[fd83d7a2bf1ac210]::de::Visitor>::expecting */

void <<<std[29fbf8137994c300]::time::SystemTime_as_serde_core[fd83d7a2bf1ac210]::de::Deserialize>::deserialize::Field_as_serde_core[fd83d7a2bf1ac210]::de::Deserialize>::deserialize::FieldVisitor_as_serde_core[fd83d7a2bf1ac210]::de::Visitor>
     ::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,"`secs_since_epoch` or `nanos_since_epoch`",0x29);
  return;
}


// ===== 006ba230  <<core::num::saturating::Saturating<isize>as_serde_core::de::Deserialize>::deserialize::SaturatingVisitor_as_serde_core::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<core::num::saturating::Saturating<isize> as
   serde_core::de::Deserialize>::deserialize::SaturatingVisitor as
   serde_core::de::Visitor>::expecting */

void __rustcall
<<core::num::saturating::Saturating<isize>as_serde_core::de::Deserialize>::deserialize::SaturatingVisitor_as_serde_core::de::Visitor>
::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,"integer with support for saturating semantics",0x2d);
  return;
}


// ===== 006ba244  <<u16_as_serde_core::de::Deserialize>::deserialize::PrimitiveVisitor_as_serde_core::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<u16 as serde_core::de::Deserialize>::deserialize::PrimitiveVisitor as
   serde_core::de::Visitor>::expecting */

void __rustcall
<<u16_as_serde_core::de::Deserialize>::deserialize::PrimitiveVisitor_as_serde_core::de::Visitor>::
expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"u16",3);
  return;
}


// ===== 006ba258  <<core::num::nonzero::NonZero<u32>as_serde_core::de::Deserialize>::deserialize::NonZeroVisitor_as_serde_core::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<core::num::nonzero::NonZero<u32> as serde_core::de::Deserialize>::deserialize::NonZeroVisitor
   as serde_core::de::Visitor>::expecting */

void __rustcall
<<core::num::nonzero::NonZero<u32>as_serde_core::de::Deserialize>::deserialize::NonZeroVisitor_as_serde_core::de::Visitor>
::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"a nonzero u32",0xd);
  return;
}


// ===== 006ba26c  <<u32_as_serde_core::de::Deserialize>::deserialize::PrimitiveVisitor_as_serde_core::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<u32 as serde_core::de::Deserialize>::deserialize::PrimitiveVisitor as
   serde_core::de::Visitor>::expecting */

void __rustcall
<<u32_as_serde_core::de::Deserialize>::deserialize::PrimitiveVisitor_as_serde_core::de::Visitor>::
expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"u32",3);
  return;
}


// ===== 006ba280  <<core::num::nonzero::NonZero<u64>as_serde_core::de::Deserialize>::deserialize::NonZeroVisitor_as_serde_core::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<core::num::nonzero::NonZero<u64> as serde_core::de::Deserialize>::deserialize::NonZeroVisitor
   as serde_core::de::Visitor>::expecting */

void __rustcall
<<core::num::nonzero::NonZero<u64>as_serde_core::de::Deserialize>::deserialize::NonZeroVisitor_as_serde_core::de::Visitor>
::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"a nonzero u64",0xd);
  return;
}


// ===== 006ba294  <<u64_as_serde_core::de::Deserialize>::deserialize::PrimitiveVisitor_as_serde_core::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<u64 as serde_core::de::Deserialize>::deserialize::PrimitiveVisitor as
   serde_core::de::Visitor>::expecting */

void __rustcall
<<u64_as_serde_core::de::Deserialize>::deserialize::PrimitiveVisitor_as_serde_core::de::Visitor>::
expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"u64",3);
  return;
}


// ===== 006ba2a8  <<core::num::nonzero::NonZero<usize>as_serde_core::de::Deserialize>::deserialize::NonZeroVisitor_as_serde_core::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<core::num::nonzero::NonZero<usize> as serde_core::de::Deserialize>::deserialize::NonZeroVisitor
   as serde_core::de::Visitor>::expecting */

void __rustcall
<<core::num::nonzero::NonZero<usize>as_serde_core::de::Deserialize>::deserialize::NonZeroVisitor_as_serde_core::de::Visitor>
::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"a nonzero usize",0xf);
  return;
}


// ===== 006ba2bc  <<usize_as_serde_core::de::Deserialize>::deserialize::PrimitiveVisitor_as_serde_core::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<usize as serde_core::de::Deserialize>::deserialize::PrimitiveVisitor as
   serde_core::de::Visitor>::expecting */

void __rustcall
<<usize_as_serde_core::de::Deserialize>::deserialize::PrimitiveVisitor_as_serde_core::de::Visitor>::
expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"usize",5);
  return;
}


// ===== 006ba2d0  <<f32_as_serde_core::de::Deserialize>::deserialize::PrimitiveVisitor_as_serde_core::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<f32 as serde_core::de::Deserialize>::deserialize::PrimitiveVisitor as
   serde_core::de::Visitor>::expecting */

void __rustcall
<<f32_as_serde_core::de::Deserialize>::deserialize::PrimitiveVisitor_as_serde_core::de::Visitor>::
expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"f32",3);
  return;
}


// ===== 006ba2e4  <<f64_as_serde_core::de::Deserialize>::deserialize::PrimitiveVisitor_as_serde_core::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<f64 as serde_core::de::Deserialize>::deserialize::PrimitiveVisitor as
   serde_core::de::Visitor>::expecting */

void __rustcall
<<f64_as_serde_core::de::Deserialize>::deserialize::PrimitiveVisitor_as_serde_core::de::Visitor>::
expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"f64",3);
  return;
}


// ===== 006ba2f8  <<core::num::nonzero::NonZero<i128>as_serde_core::de::Deserialize>::deserialize::NonZeroVisitor_as_serde_core::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<core::num::nonzero::NonZero<i128> as serde_core::de::Deserialize>::deserialize::NonZeroVisitor
   as serde_core::de::Visitor>::expecting */

void __rustcall
<<core::num::nonzero::NonZero<i128>as_serde_core::de::Deserialize>::deserialize::NonZeroVisitor_as_serde_core::de::Visitor>
::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"a nonzero i128",0xe);
  return;
}


// ===== 006ba30c  <<i128_as_serde_core::de::Deserialize>::deserialize::PrimitiveVisitor_as_serde_core::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<i128 as serde_core::de::Deserialize>::deserialize::PrimitiveVisitor as
   serde_core::de::Visitor>::expecting */

void __rustcall
<<i128_as_serde_core::de::Deserialize>::deserialize::PrimitiveVisitor_as_serde_core::de::Visitor>::
expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_00379b94,4);
  return;
}


// ===== 006ba320  <<core::num::nonzero::NonZero<u128>as_serde_core::de::Deserialize>::deserialize::NonZeroVisitor_as_serde_core::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<core::num::nonzero::NonZero<u128> as serde_core::de::Deserialize>::deserialize::NonZeroVisitor
   as serde_core::de::Visitor>::expecting */

void __rustcall
<<core::num::nonzero::NonZero<u128>as_serde_core::de::Deserialize>::deserialize::NonZeroVisitor_as_serde_core::de::Visitor>
::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"a nonzero u128",0xe);
  return;
}


// ===== 006ba334  <<u128_as_serde_core::de::Deserialize>::deserialize::PrimitiveVisitor_as_serde_core::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<u128 as serde_core::de::Deserialize>::deserialize::PrimitiveVisitor as
   serde_core::de::Visitor>::expecting */

void __rustcall
<<u128_as_serde_core::de::Deserialize>::deserialize::PrimitiveVisitor_as_serde_core::de::Visitor>::
expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_00376db8,4);
  return;
}


// ===== 006ba348  <<serde_core::de::impls::OsStringKind_as_serde_core::de::Deserialize>::deserialize::KindVisitor_as_serde_core::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<serde_core::de::impls::OsStringKind as serde_core::de::Deserialize>::deserialize::KindVisitor
   as serde_core::de::Visitor>::expecting */

void __rustcall
<<serde_core::de::impls::OsStringKind_as_serde_core::de::Deserialize>::deserialize::KindVisitor_as_serde_core::de::Visitor>
::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"`Unix` or `Windows`",0x13);
  return;
}


// ===== 006ba35c  <<serde_core::de::WithDecimalPoint_as_core::fmt::Display>::fmt::LookForDecimalPoint_as{backref_18}::Write>::write_char =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<serde_core::de::WithDecimalPoint as core::fmt::Display>::fmt::LookForDecimalPoint as {backref
   18}::Write>::write_char */

void __rustcall
<<serde_core::de::WithDecimalPoint_as_core::fmt::Display>::fmt::LookForDecimalPoint_as{backref_18}::Write>
::write_char(undefined8 *param_1,int param_2)

{
  *(byte *)(param_1 + 1) = param_2 == 0x2e | *(byte *)(param_1 + 1);
  <core::fmt::Formatter_as_core::fmt::Write>::write_char(*param_1);
  return;
}


// ===== 006ba37c  <<serde_core::de::WithDecimalPoint_as_core::fmt::Display>::fmt::LookForDecimalPoint_as{backref_18}::Write>::write_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<serde_core::de::WithDecimalPoint as core::fmt::Display>::fmt::LookForDecimalPoint as {backref
   18}::Write>::write_str */

void __rustcall
<<serde_core::de::WithDecimalPoint_as_core::fmt::Display>::fmt::LookForDecimalPoint_as{backref_18}::Write>
::write_str(undefined8 *param_1,char *param_2,ulong param_3)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  char *pcVar4;
  
  if (param_3 < 0x10) {
    if (param_3 == 0) {
      bVar2 = false;
    }
    else {
      pcVar4 = param_2;
      lVar3 = param_3 - 1;
      do {
        bVar2 = *pcVar4 == '.';
        if (bVar2) break;
        bVar1 = lVar3 != 0;
        pcVar4 = pcVar4 + 1;
        lVar3 = lVar3 + -1;
      } while (bVar1);
    }
  }
  else {
    lVar3 = core::slice::memchr::memchr_aligned(0x2e);
    bVar2 = lVar3 == 1;
  }
  *(byte *)(param_1 + 1) = bVar2 | *(byte *)(param_1 + 1);
  <core::fmt::[a]::core::fmt::Formatter>::write_str(*param_1,param_2,param_3);
  return;
}


// ===== 006ba40c  <<core::num::nonzero::NonZero<i8>as_serde_core::de::Deserialize>::deserialize::NonZeroVisitor_as_serde_core::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<core::num::nonzero::NonZero<i8> as serde_core::de::Deserialize>::deserialize::NonZeroVisitor as
   serde_core::de::Visitor>::expecting */

void __rustcall
<<core::num::nonzero::NonZero<i8>as_serde_core::de::Deserialize>::deserialize::NonZeroVisitor_as_serde_core::de::Visitor>
::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"a nonzero i8",0xc);
  return;
}


// ===== 006ba420  <<i8_as_serde_core::de::Deserialize>::deserialize::PrimitiveVisitor_as_serde_core::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<i8 as serde_core::de::Deserialize>::deserialize::PrimitiveVisitor as
   serde_core::de::Visitor>::expecting */

void __rustcall
<<i8_as_serde_core::de::Deserialize>::deserialize::PrimitiveVisitor_as_serde_core::de::Visitor>::
expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"i8",2);
  return;
}


// ===== 006ba434  <<core::num::nonzero::NonZero<i16>as_serde_core::de::Deserialize>::deserialize::NonZeroVisitor_as_serde_core::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<core::num::nonzero::NonZero<i16> as serde_core::de::Deserialize>::deserialize::NonZeroVisitor
   as serde_core::de::Visitor>::expecting */

void __rustcall
<<core::num::nonzero::NonZero<i16>as_serde_core::de::Deserialize>::deserialize::NonZeroVisitor_as_serde_core::de::Visitor>
::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"a nonzero i16",0xd);
  return;
}


// ===== 006ba448  <<i16_as_serde_core::de::Deserialize>::deserialize::PrimitiveVisitor_as_serde_core::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<i16 as serde_core::de::Deserialize>::deserialize::PrimitiveVisitor as
   serde_core::de::Visitor>::expecting */

void __rustcall
<<i16_as_serde_core::de::Deserialize>::deserialize::PrimitiveVisitor_as_serde_core::de::Visitor>::
expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"i16",3);
  return;
}


// ===== 006ba45c  <<core::num::nonzero::NonZero<i32>as_serde_core::de::Deserialize>::deserialize::NonZeroVisitor_as_serde_core::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<core::num::nonzero::NonZero<i32> as serde_core::de::Deserialize>::deserialize::NonZeroVisitor
   as serde_core::de::Visitor>::expecting */

void __rustcall
<<core::num::nonzero::NonZero<i32>as_serde_core::de::Deserialize>::deserialize::NonZeroVisitor_as_serde_core::de::Visitor>
::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"a nonzero i32",0xd);
  return;
}


// ===== 006ba470  <<i32_as_serde_core::de::Deserialize>::deserialize::PrimitiveVisitor_as_serde_core::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<i32 as serde_core::de::Deserialize>::deserialize::PrimitiveVisitor as
   serde_core::de::Visitor>::expecting */

void __rustcall
<<i32_as_serde_core::de::Deserialize>::deserialize::PrimitiveVisitor_as_serde_core::de::Visitor>::
expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"i32",3);
  return;
}


// ===== 006ba484  <<core::num::nonzero::NonZero<i64>as_serde_core::de::Deserialize>::deserialize::NonZeroVisitor_as_serde_core::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<core::num::nonzero::NonZero<i64> as serde_core::de::Deserialize>::deserialize::NonZeroVisitor
   as serde_core::de::Visitor>::expecting */

void __rustcall
<<core::num::nonzero::NonZero<i64>as_serde_core::de::Deserialize>::deserialize::NonZeroVisitor_as_serde_core::de::Visitor>
::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"a nonzero i64",0xd);
  return;
}


// ===== 006ba498  <<i64_as_serde_core::de::Deserialize>::deserialize::PrimitiveVisitor_as_serde_core::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<i64 as serde_core::de::Deserialize>::deserialize::PrimitiveVisitor as
   serde_core::de::Visitor>::expecting */

void __rustcall
<<i64_as_serde_core::de::Deserialize>::deserialize::PrimitiveVisitor_as_serde_core::de::Visitor>::
expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"i64",3);
  return;
}


// ===== 006ba4ac  <<core::num::nonzero::NonZero<isize>as_serde_core::de::Deserialize>::deserialize::NonZeroVisitor_as_serde_core::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<core::num::nonzero::NonZero<isize> as serde_core::de::Deserialize>::deserialize::NonZeroVisitor
   as serde_core::de::Visitor>::expecting */

void __rustcall
<<core::num::nonzero::NonZero<isize>as_serde_core::de::Deserialize>::deserialize::NonZeroVisitor_as_serde_core::de::Visitor>
::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"a nonzero isize",0xf);
  return;
}


// ===== 006ba4c0  <<isize_as_serde_core::de::Deserialize>::deserialize::PrimitiveVisitor_as_serde_core::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<isize as serde_core::de::Deserialize>::deserialize::PrimitiveVisitor as
   serde_core::de::Visitor>::expecting */

void __rustcall
<<isize_as_serde_core::de::Deserialize>::deserialize::PrimitiveVisitor_as_serde_core::de::Visitor>::
expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"isize",5);
  return;
}


// ===== 006ba4d4  <<core::num::nonzero::NonZero<u8>as_serde_core::de::Deserialize>::deserialize::NonZeroVisitor_as_serde_core::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<core::num::nonzero::NonZero<u8> as serde_core::de::Deserialize>::deserialize::NonZeroVisitor as
   serde_core::de::Visitor>::expecting */

void __rustcall
<<core::num::nonzero::NonZero<u8>as_serde_core::de::Deserialize>::deserialize::NonZeroVisitor_as_serde_core::de::Visitor>
::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"a nonzero u8",0xc);
  return;
}


// ===== 006ba4e8  <<u8_as_serde_core::de::Deserialize>::deserialize::PrimitiveVisitor_as_serde_core::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<u8 as serde_core::de::Deserialize>::deserialize::PrimitiveVisitor as
   serde_core::de::Visitor>::expecting */

void __rustcall
<<u8_as_serde_core::de::Deserialize>::deserialize::PrimitiveVisitor_as_serde_core::de::Visitor>::
expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"u8",2);
  return;
}


// ===== 006ba4fc  <<core::num::nonzero::NonZero<u16>as_serde_core::de::Deserialize>::deserialize::NonZeroVisitor_as_serde_core::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<core::num::nonzero::NonZero<u16> as serde_core::de::Deserialize>::deserialize::NonZeroVisitor
   as serde_core::de::Visitor>::expecting */

void __rustcall
<<core::num::nonzero::NonZero<u16>as_serde_core::de::Deserialize>::deserialize::NonZeroVisitor_as_serde_core::de::Visitor>
::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"a nonzero u16",0xd);
  return;
}


// ===== 006ba510  <<<core[188d2c0002da36d0]::net::ip_addr::IpAddr_as_serde_core[fd83d7a2bf1ac210]::de::Deserialize>::deserialize::IpAddrKind_as_serde_core[fd83d7a2bf1ac210]::de::Deserialize>::deserialize::KindVisitor_as_serde_core[fd83d7a2bf1ac210]::de::Visitor>::expecting =====

/* <<<core[188d2c0002da36d0]::net::ip_addr::IpAddr as
   serde_core[fd83d7a2bf1ac210]::de::Deserialize>::deserialize::IpAddrKind as
   serde_core[fd83d7a2bf1ac210]::de::Deserialize>::deserialize::KindVisitor as
   serde_core[fd83d7a2bf1ac210]::de::Visitor>::expecting */

void <<<core[188d2c0002da36d0]::net::ip_addr::IpAddr_as_serde_core[fd83d7a2bf1ac210]::de::Deserialize>::deserialize::IpAddrKind_as_serde_core[fd83d7a2bf1ac210]::de::Deserialize>::deserialize::KindVisitor_as_serde_core[fd83d7a2bf1ac210]::de::Visitor>
     ::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"`V4` or `V6`",0xc);
  return;
}


// ===== 006ba524  <<core::net::ip_addr::IpAddr_as_serde_core::de::Deserialize>::deserialize::EnumVisitor_as_serde_core::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<core::net::ip_addr::IpAddr as serde_core::de::Deserialize>::deserialize::EnumVisitor as
   serde_core::de::Visitor>::expecting */

void __rustcall
<<core::net::ip_addr::IpAddr_as_serde_core::de::Deserialize>::deserialize::EnumVisitor_as_serde_core::de::Visitor>
::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_00375ed0,8);
  return;
}


// ===== 006ba538  <<core::net::socket_addr::SocketAddr_as_serde_core::de::Deserialize>::deserialize::EnumVisitor_as_serde_core::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<core::net::socket_addr::SocketAddr as serde_core::de::Deserialize>::deserialize::EnumVisitor as
   serde_core::de::Visitor>::expecting */

void __rustcall
<<core::net::socket_addr::SocketAddr_as_serde_core::de::Deserialize>::deserialize::EnumVisitor_as_serde_core::de::Visitor>
::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"a SocketAddr",0xc);
  return;
}


// ===== 006ba54c  <serde_core::de::value::Error_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_core::de::value::Error as core::fmt::Display>::fmt */

void __rustcall
<serde_core::de::value::Error_as_core::fmt::Display>::fmt(undefined8 *param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,*param_1,param_1[1]);
  return;
}


// ===== 006ba55c  <serde_core::de::impls::BoolVisitor_as_serde_core::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_core::de::impls::BoolVisitor as serde_core::de::Visitor>::expecting */

void __rustcall
<serde_core::de::impls::BoolVisitor_as_serde_core::de::Visitor>::expecting
          (undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"a boolean",9);
  return;
}


// ===== 006ba570  <serde_core::private::doc::Error_as_core::error::Error>::description =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_core::private::doc::Error as core::error::Error>::description */

void __rustcall <serde_core::private::doc::Error_as_core::error::Error>::description(void)

{
                    /* WARNING: Subroutine does not return */
  core::panicking::panic("not implemented",0xf,&PTR_s__home_runner__cargo_registry_src_00976990);
}


// ===== 006ba590  <dyn_Trait<Assoc=X>+serde_core::de::Expected_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <dyn Trait<Assoc = X> + serde_core::de::Expected as core::fmt::Display>::fmt */

void __rustcall
<dyn_Trait<Assoc=X>+serde_core::de::Expected_as_core::fmt::Display>::fmt
          (undefined8 param_1,long param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x006ba598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x18))(param_1,param_3);
  return;
}


// ===== 006ba59c  <serde_core::de::value::Error_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_core::de::value::Error as core::fmt::Debug>::fmt */

void __rustcall
<serde_core::de::value::Error_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple(auStack_38,param_2,"Error",5);
  <core::fmt::builders::[2]::core::fmt::builders::DebugTuple>::field
            (auStack_38,param_1,&PTR_FUN_009769a8);
  <core::fmt::builders::[2]::core::fmt::builders::DebugTuple>::finish(auStack_38);
  return;
}


// ===== 006ba5f8  <serde_core::private::doc::Error_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_core::private::doc::Error as core::fmt::Display>::fmt */

void __rustcall <serde_core::private::doc::Error_as_core::fmt::Display>::fmt(void)

{
                    /* WARNING: Subroutine does not return */
  core::panicking::panic("not implemented",0xf,&PTR_s__home_runner__cargo_registry_src_009769c8);
}


// ===== 006ba618  <serde_core::de::value::ExpectedInMap_as_serde_core::de::Expected>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_core::de::value::ExpectedInMap as serde_core::de::Expected>::fmt */

void __rustcall
<serde_core::de::value::ExpectedInMap_as_serde_core::de::Expected>::fmt
          (long *param_1,undefined8 *param_2)

{
  long *local_20;
  undefined *puStack_18;
  
  if (*param_1 == 1) {
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_00371860,0x10);
    return;
  }
  puStack_18 = PTR_fmt_0099f458;
  local_20 = param_1;
  core::fmt::write(*param_2,param_2[1],&DAT_00365fea,&local_20);
  return;
}


// ===== 006ba678  FUN_006ba678 =====

void FUN_006ba678(undefined8 *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Debug>::fmt(*param_1,param_1[1],param_2);
  return;
}


// ===== 006ba68c  FUN_006ba68c =====

void FUN_006ba68c(undefined8 *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt(*(undefined8 *)*param_1,((undefined8 *)*param_1)[1],param_2);
  return;
}


// ===== 006ba6a0  FUN_006ba6a0 =====

void FUN_006ba6a0(undefined8 *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt(*param_1,param_1[1],param_2);
  return;
}


// ===== 006ba6b4  <serde_core::de::impls::CharVisitor_as_serde_core::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_core::de::impls::CharVisitor as serde_core::de::Visitor>::expecting */

void __rustcall
<serde_core::de::impls::CharVisitor_as_serde_core::de::Visitor>::expecting
          (undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"a character",0xb);
  return;
}


// ===== 006ba6c8  <serde_core::de::impls::StringVisitor_as_serde_core::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_core::de::impls::StringVisitor as serde_core::de::Visitor>::expecting */

void __rustcall
<serde_core::de::impls::StringVisitor_as_serde_core::de::Visitor>::expecting
          (undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_00375770,8);
  return;
}


// ===== 006ba6dc  <serde_core::de::impls::StringInPlaceVisitor_as_serde_core::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_core::de::impls::StringInPlaceVisitor as serde_core::de::Visitor>::expecting */

void __rustcall
<serde_core::de::impls::StringInPlaceVisitor_as_serde_core::de::Visitor>::expecting
          (undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_00375770,8);
  return;
}


// ===== 006ba6f0  <serde_core::de::OneOf_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_core::de::OneOf as core::fmt::Display>::fmt */

undefined8 __rustcall
<serde_core::de::OneOf_as_core::fmt::Display>::fmt(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *local_70;
  code *pcStack_68;
  long *local_60;
  code *pcStack_58;
  long local_38;
  
  lVar5 = param_1[1];
  if (lVar5 == 1) {
    local_70 = (long *)*param_1;
    uVar2 = *param_2;
    uVar3 = param_2[1];
    puVar4 = &DAT_0036c72b;
  }
  else {
    if (lVar5 != 2) {
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic
                  ("explicit panic",0xe,&PTR_s__home_runner__cargo_registry_src_009769e0);
      }
      uVar1 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"one of ",7);
      if ((uVar1 & 1) == 0) {
        lVar6 = *param_1;
        pcStack_68 = FUN_006ba68c;
        local_70 = &local_38;
        local_38 = lVar6;
        uVar1 = core::fmt::write(*param_2,param_2[1],&DAT_0036c72b,&local_70);
        if ((uVar1 & 1) == 0) {
          lVar5 = lVar5 * 0x10 + -0x10;
          while( true ) {
            lVar6 = lVar6 + 0x10;
            local_38 = lVar6;
            uVar1 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,", ",2);
            if ((uVar1 & 1) != 0) break;
            pcStack_68 = FUN_006ba68c;
            local_70 = &local_38;
            uVar1 = core::fmt::write(*param_2,param_2[1],&DAT_0036c72b,&local_70);
            if ((uVar1 & 1) != 0) {
              return 1;
            }
            lVar5 = lVar5 + -0x10;
            if (lVar5 == 0) {
              return 0;
            }
          }
        }
      }
      return 1;
    }
    local_70 = (long *)*param_1;
    uVar2 = *param_2;
    uVar3 = param_2[1];
    puVar4 = &DAT_00369045;
    local_60 = local_70 + 2;
    pcStack_58 = FUN_006ba6a0;
  }
  pcStack_68 = FUN_006ba6a0;
  uVar2 = core::fmt::write(uVar2,uVar3,puVar4,&local_70);
  return uVar2;
}


// ===== 006ba85c  <serde_core::de::WithDecimalPoint_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_core::de::WithDecimalPoint as core::fmt::Display>::fmt */

undefined8 __rustcall
<serde_core::de::WithDecimalPoint_as_core::fmt::Display>::fmt(ulong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *local_40;
  byte local_38;
  ulong *local_30;
  undefined *puStack_28;
  
  local_30 = param_1;
  if (0x7fefffffffffffff < (*param_1 & 0x7fffffffffffffff)) {
    puStack_28 = PTR_fmt_0099f730;
    uVar1 = core::fmt::write(*param_2,param_2[1],&DAT_00368e80,&local_30);
    return uVar1;
  }
  local_38 = 0;
  puStack_28 = PTR_fmt_0099f730;
  local_40 = param_2;
  uVar2 = core::fmt::write(&local_40,&DAT_009769f8,&DAT_00368e80,&local_30);
  if (((uVar2 & 1) == 0) &&
     (((local_38 & 1) != 0 ||
      (uVar2 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,".0",2), (uVar2 & 1) == 0))
     )) {
    return 0;
  }
  return 1;
}


// ===== 006ba934  <serde_core::de::impls::StrVisitor_as_serde_core::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_core::de::impls::StrVisitor as serde_core::de::Visitor>::expecting */

void __rustcall
<serde_core::de::impls::StrVisitor_as_serde_core::de::Visitor>::expecting
          (undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"a borrowed string",0x11);
  return;
}


// ===== 006ba948  <serde_core::de::impls::BytesVisitor_as_serde_core::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_core::de::impls::BytesVisitor as serde_core::de::Visitor>::expecting */

void __rustcall
<serde_core::de::impls::BytesVisitor_as_serde_core::de::Visitor>::expecting
          (undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"a borrowed byte array",0x15);
  return;
}


// ===== 006ba95c  <serde_core::de::value::ExpectedInSeq_as_serde_core::de::Expected>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_core::de::value::ExpectedInSeq as serde_core::de::Expected>::fmt */

void __rustcall
<serde_core::de::value::ExpectedInSeq_as_serde_core::de::Expected>::fmt
          (long *param_1,undefined8 *param_2)

{
  long *local_20;
  undefined *puStack_18;
  
  if (*param_1 == 1) {
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"1 element in sequence",0x15);
    return;
  }
  puStack_18 = PTR_fmt_0099f458;
  local_20 = param_1;
  core::fmt::write(*param_2,param_2[1],&DAT_0036890e,&local_20);
  return;
}


// ===== 006ba9bc  <serde_core::format::Buf_as_core::fmt::Write>::write_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_core::format::Buf as core::fmt::Write>::write_str */

bool __rustcall
<serde_core::format::Buf_as_core::fmt::Write>::write_str(long *param_1,void *param_2,size_t param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = param_1[2];
  uVar3 = param_1[1];
  uVar1 = uVar2 + param_3;
  if (uVar1 <= uVar3) {
    if (uVar1 < uVar2) {
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (uVar2,uVar1,uVar3,&PTR_s__home_runner__cargo_registry_src_00976a28);
    }
    memcpy((void *)(*param_1 + uVar2),param_2,param_3);
    param_1[2] = uVar1;
  }
  return uVar3 < uVar1;
}


// ===== 006baa2c  <&mut_core::fmt::Formatter_as_serde_core::ser::Serializer>::serialize_i8 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&mut core::fmt::Formatter as serde_core::ser::Serializer>::serialize_i8 */

void __rustcall
<&mut_core::fmt::Formatter_as_serde_core::ser::Serializer>::serialize_i8
          (undefined8 param_1,undefined1 param_2)

{
  undefined1 local_14 [4];
  
  local_14[0] = param_2;
  <i8_as_core::fmt::Display>::fmt(local_14,param_1);
  return;
}


// ===== 006baa58  <&mut_core::fmt::Formatter_as_serde_core::ser::Serializer>::serialize_u8 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&mut core::fmt::Formatter as serde_core::ser::Serializer>::serialize_u8 */

void __rustcall
<&mut_core::fmt::Formatter_as_serde_core::ser::Serializer>::serialize_u8
          (undefined8 param_1,undefined1 param_2)

{
  undefined1 local_14 [4];
  
  local_14[0] = param_2;
  <u8_as_core::fmt::Display>::fmt(local_14,param_1);
  return;
}


// ===== 006baa84  <&mut_core::fmt::Formatter_as_serde_core::ser::Serializer>::serialize_f32 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&mut core::fmt::Formatter as serde_core::ser::Serializer>::serialize_f32 */

void __rustcall
<&mut_core::fmt::Formatter_as_serde_core::ser::Serializer>::serialize_f32
          (undefined4 param_1,undefined8 param_2)

{
  undefined4 local_14;
  
  local_14 = param_1;
  <f32_as_core::fmt::Display>::fmt(&local_14,param_2);
  return;
}


// ===== 006baaac  <&mut_core::fmt::Formatter_as_serde_core::ser::Serializer>::serialize_f64 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&mut core::fmt::Formatter as serde_core::ser::Serializer>::serialize_f64 */

void __rustcall
<&mut_core::fmt::Formatter_as_serde_core::ser::Serializer>::serialize_f64
          (undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <f64_as_core::fmt::Display>::fmt(&local_18,param_2);
  return;
}


// ===== 006baad4  <&mut_core::fmt::Formatter_as_serde_core::ser::Serializer>::serialize_i16 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&mut core::fmt::Formatter as serde_core::ser::Serializer>::serialize_i16 */

void __rustcall
<&mut_core::fmt::Formatter_as_serde_core::ser::Serializer>::serialize_i16
          (undefined8 param_1,undefined2 param_2)

{
  undefined2 local_14 [2];
  
  local_14[0] = param_2;
  <i16_as_core::fmt::Display>::fmt(local_14,param_1);
  return;
}


// ===== 006bab00  <&mut_core::fmt::Formatter_as_serde_core::ser::Serializer>::serialize_i32 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&mut core::fmt::Formatter as serde_core::ser::Serializer>::serialize_i32 */

void __rustcall
<&mut_core::fmt::Formatter_as_serde_core::ser::Serializer>::serialize_i32
          (undefined8 param_1,undefined4 param_2)

{
  undefined4 local_14;
  
  local_14 = param_2;
  <i32_as_core::fmt::Display>::fmt(&local_14,param_1);
  return;
}


// ===== 006bab2c  <&mut_core::fmt::Formatter_as_serde_core::ser::Serializer>::serialize_i64 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&mut core::fmt::Formatter as serde_core::ser::Serializer>::serialize_i64 */

void __rustcall
<&mut_core::fmt::Formatter_as_serde_core::ser::Serializer>::serialize_i64
          (undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_2;
  <i64_as_core::fmt::Display>::fmt(&local_18,param_1);
  return;
}


// ===== 006bab58  <&mut_core::fmt::Formatter_as_serde_core::ser::Serializer>::serialize_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&mut core::fmt::Formatter as serde_core::ser::Serializer>::serialize_str */

void __rustcall
<&mut_core::fmt::Formatter_as_serde_core::ser::Serializer>::serialize_str
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  <str_as_core::fmt::Display>::fmt(param_2,param_3,param_1);
  return;
}


// ===== 006bab6c  <&mut_core::fmt::Formatter_as_serde_core::ser::Serializer>::serialize_u16 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&mut core::fmt::Formatter as serde_core::ser::Serializer>::serialize_u16 */

void __rustcall
<&mut_core::fmt::Formatter_as_serde_core::ser::Serializer>::serialize_u16
          (undefined8 param_1,undefined2 param_2)

{
  undefined2 local_14 [2];
  
  local_14[0] = param_2;
  <u16_as_core::fmt::Display>::fmt(local_14,param_1);
  return;
}


// ===== 006bab98  <&mut_core::fmt::Formatter_as_serde_core::ser::Serializer>::serialize_u32 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&mut core::fmt::Formatter as serde_core::ser::Serializer>::serialize_u32 */

void __rustcall
<&mut_core::fmt::Formatter_as_serde_core::ser::Serializer>::serialize_u32
          (undefined8 param_1,undefined4 param_2)

{
  undefined4 local_14;
  
  local_14 = param_2;
  <u32_as_core::fmt::Display>::fmt(&local_14,param_1);
  return;
}


// ===== 006babc4  <&mut_core::fmt::Formatter_as_serde_core::ser::Serializer>::serialize_u64 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&mut core::fmt::Formatter as serde_core::ser::Serializer>::serialize_u64 */

void __rustcall
<&mut_core::fmt::Formatter_as_serde_core::ser::Serializer>::serialize_u64
          (undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_2;
  <usize_as_core::fmt::Display>::fmt(&local_18,param_1);
  return;
}


// ===== 006babf0  <&mut_core::fmt::Formatter_as_serde_core::ser::Serializer>::serialize_bool =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&mut core::fmt::Formatter as serde_core::ser::Serializer>::serialize_bool */

void __rustcall
<&mut_core::fmt::Formatter_as_serde_core::ser::Serializer>::serialize_bool
          (undefined8 param_1,undefined1 param_2)

{
  undefined1 local_14 [4];
  
  local_14[0] = param_2;
  <bool_as_core::fmt::Display>::fmt(local_14,param_1);
  return;
}


// ===== 006bac1c  <&mut_core::fmt::Formatter_as_serde_core::ser::Serializer>::serialize_char =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&mut core::fmt::Formatter as serde_core::ser::Serializer>::serialize_char */

void __rustcall
<&mut_core::fmt::Formatter_as_serde_core::ser::Serializer>::serialize_char
          (undefined8 param_1,undefined4 param_2)

{
  undefined4 local_14;
  
  local_14 = param_2;
  <char_as_core::fmt::Display>::fmt(&local_14,param_1);
  return;
}


// ===== 006bac48  <&mut_core::fmt::Formatter_as_serde_core::ser::Serializer>::serialize_i128 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&mut core::fmt::Formatter as serde_core::ser::Serializer>::serialize_i128 */

void __rustcall
<&mut_core::fmt::Formatter_as_serde_core::ser::Serializer>::serialize_i128
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = param_3;
  uStack_18 = param_4;
  <i128_as_core::fmt::Display>::fmt(&local_20,param_1);
  return;
}


// ===== 006bac70  <&mut_core::fmt::Formatter_as_serde_core::ser::Serializer>::serialize_u128 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&mut core::fmt::Formatter as serde_core::ser::Serializer>::serialize_u128 */

void __rustcall
<&mut_core::fmt::Formatter_as_serde_core::ser::Serializer>::serialize_u128
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = param_3;
  uStack_18 = param_4;
  <u128_as_core::fmt::Display>::fmt(&local_20,param_1);
  return;
}


// ===== 006bac98  <&mut_core::fmt::Formatter_as_serde_core::ser::Serializer>::serialize_unit_variant =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&mut core::fmt::Formatter as serde_core::ser::Serializer>::serialize_unit_variant */

void __rustcall
<&mut_core::fmt::Formatter_as_serde_core::ser::Serializer>::serialize_unit_variant
          (undefined8 param_1)

{
  undefined8 in_x4;
  undefined8 in_x5;
  
  <str_as_core::fmt::Display>::fmt(in_x4,in_x5,param_1);
  return;
}


// ===== 006baca8  <<core::time::Duration_as_serde_core::de::Deserialize>::deserialize::DurationVisitor_as_serde_core::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<core::time::Duration as serde_core::de::Deserialize>::deserialize::DurationVisitor as
   serde_core::de::Visitor>::expecting */

void __rustcall
<<core::time::Duration_as_serde_core::de::Deserialize>::deserialize::DurationVisitor_as_serde_core::de::Visitor>
::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"struct Duration",0xf);
  return;
}


// ===== 006bacbc  <<std::time::SystemTime_as_serde_core::de::Deserialize>::deserialize::DurationVisitor_as_serde_core::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<std::time::SystemTime as serde_core::de::Deserialize>::deserialize::DurationVisitor as
   serde_core::de::Visitor>::expecting */

void __rustcall
<<std::time::SystemTime_as_serde_core::de::Deserialize>::deserialize::DurationVisitor_as_serde_core::de::Visitor>
::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"struct SystemTime",0x11);
  return;
}


// ===== 006bacd0  <serde_core::de::impls::CStringVisitor_as_serde_core::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_core::de::impls::CStringVisitor as serde_core::de::Visitor>::expecting */

void __rustcall
<serde_core::de::impls::CStringVisitor_as_serde_core::de::Visitor>::expecting
          (undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,
             "byte arrayunit valueOption valuenewtype structmapunit variantnewtype varianttuple variantstruct variant"
             ,10);
  return;
}


// ===== 006bace4  <serde_core::de::impls::PathVisitor_as_serde_core::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_core::de::impls::PathVisitor as serde_core::de::Visitor>::expecting */

void __rustcall
<serde_core::de::impls::PathVisitor_as_serde_core::de::Visitor>::expecting
          (undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"a borrowed path",0xf);
  return;
}


// ===== 006bacf8  <serde_core::de::impls::PathBufVisitor_as_serde_core::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_core::de::impls::PathBufVisitor as serde_core::de::Visitor>::expecting */

void __rustcall
<serde_core::de::impls::PathBufVisitor_as_serde_core::de::Visitor>::expecting
          (undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"path string",0xb);
  return;
}


// ===== 006bad0c  <serde_core::de::impls::OsStringVisitor_as_serde_core::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_core::de::impls::OsStringVisitor as serde_core::de::Visitor>::expecting */

void __rustcall
<serde_core::de::impls::OsStringVisitor_as_serde_core::de::Visitor>::expecting
          (undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"os string",9);
  return;
}


// ===== 006bad20  FUN_006bad20 =====

void FUN_006bad20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  core::fmt::write(param_1,&DAT_009769f8,param_2,param_3);
  return;
}


// ===== 006bad34  FUN_006bad34 =====

undefined1  [16] FUN_006bad34(byte *param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  pbVar5 = param_1 + param_2;
  pbVar8 = (byte *)0x0;
  pbVar6 = param_1;
  if (param_2 != 0) {
    do {
      pbVar7 = pbVar6 + 1;
      uVar10 = (uint)*pbVar6;
      uVar11 = (ulong)uVar10;
      if ((char)*pbVar6 < '\0') {
        if (uVar10 < 0xe0) {
          pbVar7 = pbVar6 + 2;
          uVar11 = (ulong)(pbVar6[1] & 0x3f | (uVar10 & 0x1f) << 6);
        }
        else {
          uVar4 = pbVar6[2] & 0x3f | (pbVar6[1] & 0x3f) << 6;
          if (uVar10 < 0xf0) {
            uVar11 = (ulong)(uVar4 | (uVar10 & 0x1f) << 0xc);
            pbVar7 = pbVar6 + 3;
          }
          else {
            uVar11 = (ulong)(pbVar6[3] & 0x3f | uVar4 << 6 | (uVar10 & 7) << 0x12);
            pbVar7 = pbVar6 + 4;
          }
        }
      }
      uVar10 = (uint)uVar11;
      pbVar9 = pbVar7 + ((long)pbVar8 - (long)pbVar6);
      if ((4 < uVar10 - 9) && (uVar10 != 0x20)) {
        if (uVar10 < 0x85) goto joined_r0x006bae6c;
        uVar4 = uVar10 >> 8;
        if (uVar4 < 0x20) {
          if (uVar4 == 0) {
            bVar1 = PTR_WHITESPACE_MAP_0099f420[uVar11 & 0xff];
joined_r0x006bae44:
            if ((bVar1 & 1) == 0) goto joined_r0x006bae6c;
          }
          else if ((uVar4 != 0x16) || (uVar10 != 0x1680)) goto joined_r0x006bae6c;
        }
        else {
          if (uVar4 == 0x20) {
            bVar1 = (byte)PTR_WHITESPACE_MAP_0099f420[uVar11 & 0xff] >> 1;
            goto joined_r0x006bae44;
          }
          if ((uVar4 != 0x30) || (uVar10 != 0x3000)) goto joined_r0x006bae6c;
        }
      }
      pbVar6 = pbVar7;
      pbVar8 = pbVar9;
    } while (pbVar7 != pbVar5);
    pbVar8 = (byte *)0x0;
    pbVar9 = (byte *)0x0;
LAB_006bae54:
    auVar12._8_8_ = (long)pbVar9 - (long)pbVar8;
    auVar12._0_8_ = param_1 + (long)pbVar8;
    return auVar12;
  }
  pbVar9 = pbVar8;
  pbVar7 = param_1;
  pbVar8 = (byte *)0x0;
joined_r0x006bae6c:
  do {
    do {
      pbVar6 = pbVar5;
      if (pbVar7 == pbVar6) goto LAB_006bae54;
      pbVar5 = pbVar6 + -1;
      bVar1 = *pbVar5;
      uVar11 = (ulong)(char)bVar1;
      if ((char)bVar1 < 0) {
        pbVar5 = pbVar6 + -2;
        bVar2 = *pbVar5;
        uVar10 = (uint)(char)bVar2;
        if ((int)(uVar10 + 0x40) < 0 == SCARRY4(uVar10,0x40)) {
          uVar10 = uVar10 & 0x1f;
        }
        else {
          pbVar5 = pbVar6 + -3;
          bVar3 = *pbVar5;
          if ((char)bVar3 + 0x40 < 0 == SCARRY4((int)(char)bVar3,0x40)) {
            uVar10 = (int)(char)bVar3 & 0xf;
          }
          else {
            pbVar5 = pbVar6 + -4;
            uVar10 = bVar3 & 0x3f | (*pbVar5 & 7) << 6;
          }
          uVar10 = bVar2 & 0x3f | uVar10 << 6;
        }
        uVar11 = (ulong)((int)(char)bVar1 & 0x3fU | uVar10 << 6);
      }
      uVar10 = (uint)uVar11;
    } while ((uVar10 - 9 < 5) || (uVar10 == 0x20));
    if (uVar10 < 0x85) goto LAB_006baf64;
    uVar4 = uVar10 >> 8;
    if (uVar4 < 0x20) {
      if (uVar4 == 0) {
        bVar1 = PTR_WHITESPACE_MAP_0099f420[uVar11 & 0xff];
joined_r0x006baf60:
        if ((bVar1 & 1) == 0) {
LAB_006baf64:
          auVar13._8_8_ = pbVar6 + (long)(pbVar9 + (-(long)pbVar8 - (long)pbVar7));
          auVar13._0_8_ = param_1 + (long)pbVar8;
          return auVar13;
        }
      }
      else if ((uVar4 != 0x16) || (uVar10 != 0x1680)) goto LAB_006baf64;
      goto joined_r0x006bae6c;
    }
    if (uVar4 == 0x20) {
      bVar1 = (byte)PTR_WHITESPACE_MAP_0099f420[uVar11 & 0xff] >> 1;
      goto joined_r0x006baf60;
    }
    if ((uVar4 != 0x30) || (uVar10 != 0x3000)) goto LAB_006baf64;
  } while( true );
}


// ===== 006baf78  FUN_006baf78 =====

void FUN_006baf78(char *param_1)

{
  if (*param_1 == -2) {
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
    *param_1 = -1;
    return;
  }
  FUN_006c2d8c(0xff,0);
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_0045abca,0x1d,&PTR_s__rustc_48a229ceaefd4985c50990b14_00976a48);
}


// ===== 006bafc0  FUN_006bafc0 =====

void FUN_006bafc0(char *param_1,char *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined8 uVar4;
  
  cVar3 = *param_2;
  uVar4 = *(undefined8 *)(param_2 + 8);
  if (*param_1 == -2) {
    uVar2 = *(undefined4 *)(param_2 + 1);
    uVar1 = *(undefined4 *)(param_2 + 4);
    *param_1 = cVar3;
    *(undefined8 *)(param_1 + 8) = uVar4;
    *(undefined4 *)(param_1 + 1) = uVar2;
    *(undefined4 *)(param_1 + 4) = uVar1;
    return;
  }
  if (cVar3 == -2) {
    return;
  }
  FUN_006c2d8c(cVar3);
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_0045abca,0x1d,&PTR_s__rustc_48a229ceaefd4985c50990b14_00976a48);
}


// ===== 006bb028  FUN_006bb028 =====

void FUN_006bb028(long *param_1,undefined8 *param_2)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  byte bVar4;
  bool bVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong *puVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  undefined8 uVar18;
  long *unaff_x23;
  ulong unaff_x24;
  long *plVar19;
  undefined8 uVar20;
  long *plVar21;
  ulong uVar22;
  ulong unaff_x28;
  undefined1 auVar23 [16];
  ulong local_158;
  long local_140;
  ulong uStack_138;
  ulong local_130;
  long lStack_128;
  ulong local_120;
  int local_118;
  undefined4 uStack_114;
  long *local_110;
  ulong local_108;
  long *local_100;
  ulong uStack_f8;
  long *local_e8;
  long *local_e0;
  long *local_d8;
  ulong local_d0;
  ulong local_c8;
  ulong local_c0;
  long *local_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  long lStack_a0;
  ulong local_98;
  undefined8 uStack_90;
  ulong local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  
  uVar15 = ((undefined8 *)param_2[2])[1];
  cVar2 = *(char *)(uVar15 + 0x49);
  uVar11 = *(ulong *)(uVar15 + 0x30);
  uVar22 = *(ulong *)(*(long *)*param_2 + 0x40);
  lVar6 = 0xc;
  if (cVar2 != '\b') {
    lVar6 = 4;
  }
  uVar17 = (*(long *)(uVar15 + 0x38) - uVar11) + lVar6;
  uVar10 = uVar22 - uVar17;
  if ((uVar22 >= uVar17 && uVar10 <= uVar11) && (uVar22 < uVar17 || uVar11 != uVar10)) {
    lVar12 = *(long *)(uVar15 + 0x28);
    uStack_138 = uVar11 - uVar10;
    uVar18 = *(undefined8 *)param_2[2];
    plVar19 = (long *)0x0;
    lVar9 = *(long *)(uVar15 + 0x170);
    local_140 = lVar12 + uVar10;
    uVar3 = *(undefined1 *)param_2[1];
    uVar7 = *(undefined8 *)param_2[3];
    uVar10 = 0;
    lStack_128 = lVar9 + 0x10;
    local_120 = 0;
    uVar17 = (uVar22 - lVar6) - *(long *)(uVar15 + 0x38);
    plVar8 = (long *)0x13;
    do {
      bVar4 = *(byte *)(lVar12 + uVar11 + uVar17);
      local_130 = uVar15;
      if (((int)uVar10 == 0x3f) && (1 < bVar4)) {
        plVar8 = (long *)0x6;
        break;
      }
      plVar19 = (long *)(((ulong)bVar4 & 0x7f) << (uVar10 & 0x3f) | (ulong)plVar19);
      if (-1 < (char)bVar4) {
        uStack_138 = ~uVar17;
        local_140 = lVar12 + uVar11 + uVar17 + 1;
        if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          core::option::unwrap_failed(&PTR_s__rust_deps_addr2line_0_25_1_src__009778d0);
        }
        if ((long)plVar19 - 1U < *(ulong *)(lVar9 + 0x20)) {
          lVar6 = *(long *)(lVar9 + 0x18) + ((long)plVar19 - 1U) * 0x70;
          goto LAB_006bb1c4;
        }
        lVar12 = *(long *)(lVar9 + 0x28);
        if (lVar12 == 0) {
          uVar17 = 0;
          plVar21 = (long *)0x0;
          plVar16 = (long *)0x0;
          plVar8 = (long *)0x12;
          goto LAB_006bb138;
        }
        lVar9 = *(long *)(lVar9 + 0x30);
        plVar8 = (long *)0x12;
        goto LAB_006bb344;
      }
      bVar5 = uVar17 != 0xffffffffffffffff;
      uVar17 = uVar17 + 1;
      uVar10 = (ulong)((int)uVar10 + 7);
    } while (bVar5);
    uVar17 = 0;
    plVar16 = (long *)0x0;
    plVar19 = (long *)(lVar12 + uVar11);
    plVar21 = (long *)0x0;
  }
  else {
    uVar17 = 0;
    plVar16 = (long *)0x0;
    plVar8 = (long *)0x3b;
    plVar19 = (long *)uVar15;
    plVar21 = (long *)0x0;
  }
  goto LAB_006bb138;
LAB_006bb344:
  lVar6 = lVar12 + -0x70;
  lVar13 = (ulong)*(ushort *)(lVar12 + 0x532) << 3;
  uVar11 = 0xffffffffffffffff;
  puVar14 = (ulong *)(lVar12 + 0x4d8);
  do {
    uVar17 = (ulong)*(ushort *)(lVar12 + 0x532);
    if (lVar13 == 0) goto LAB_006bb390;
    lVar6 = lVar6 + 0x70;
    uVar17 = uVar11 + 1;
    lVar13 = lVar13 + -8;
    cVar1 = *puVar14 < plVar19;
    if (plVar19 < *puVar14) {
      cVar1 = -1;
    }
    uVar11 = uVar17;
    puVar14 = puVar14 + 1;
  } while (cVar1 == '\x01');
  if (cVar1 == '\0') goto LAB_006bb1c4;
LAB_006bb390:
  if (lVar9 == 0) goto LAB_006bb560;
  lVar9 = lVar9 + -1;
  lVar12 = *(long *)(lVar12 + uVar17 * 8 + 0x538);
  goto LAB_006bb344;
LAB_006bb560:
  uVar17 = 0;
  plVar21 = (long *)0x0;
  plVar16 = (long *)0x0;
  goto LAB_006bb138;
LAB_006bb1c4:
  local_120 = (ulong)(*(char *)(lVar6 + 0x6a) == '\x01');
  auVar23 = <gimli::read::abbrev::Attributes_as_core::ops::deref::Deref>::deref();
  puVar14 = auVar23._0_8_;
  if (auVar23._8_8_ == 0) {
    unaff_x23 = (long *)0x0;
  }
  else {
    unaff_x24 = auVar23._8_8_ << 4;
    uVar20 = *(undefined8 *)(uVar15 + 0x1a0);
    unaff_x23 = (long *)0x0;
    do {
      uStack_f8 = puVar14[1];
      local_100 = (long *)*puVar14;
      FUN_006c753c(&local_e8,&local_140,*(undefined4 *)(local_130 + 0x48),&local_100);
      plVar8 = local_e0;
      plVar19 = local_d8;
      if (local_e8 == (long *)0xffffffffffffffff) {
LAB_006bb448:
        plVar16 = (long *)0x0;
        uVar17 = (ulong)plVar8 & 0xffffffffffff0000;
        plVar21 = plVar8;
        unaff_x28 = (ulong)plVar19;
        goto LAB_006bb138;
      }
      if ((ushort)local_d0 < 0x47) {
        if ((ushort)local_d0 == 3) {
          if (unaff_x23 == (long *)0x0) {
            FUN_006e8254(&local_100,&local_e8);
            FUN_006d8310(&local_118,uVar18,cVar2,uVar20,&local_100);
            if (local_118 == 0) {
              local_158 = local_108;
            }
            unaff_x23 = (long *)0x0;
            unaff_x28 = local_158;
            if (local_118 == 0) {
              unaff_x23 = local_110;
              unaff_x28 = local_158;
            }
          }
        }
        else if ((ushort)local_d0 == 0x31) goto LAB_006bb2a8;
      }
      else if ((ushort)local_d0 == 0x47) {
LAB_006bb2a8:
        if (unaff_x23 == (long *)0x0) {
          FUN_006e8254(&local_100,&local_e8);
          FUN_006c66f0(&local_118,local_100,uStack_f8,uVar3,uVar18,uVar15,uVar7,0x10);
          unaff_x23 = local_110;
          plVar8 = local_110;
          unaff_x28 = local_108;
          plVar19 = (long *)local_108;
          if (CONCAT44(uStack_114,local_118) == 1) goto LAB_006bb448;
        }
      }
      else if (((ushort)local_d0 == 0x2007) || ((ushort)local_d0 == 0x6e)) {
        FUN_006e8254(&local_100,&local_e8);
        FUN_006d8310(&local_118,uVar18,cVar2,uVar20,&local_100);
        if (local_118 == 0) {
          unaff_x23 = local_110;
          unaff_x28 = local_108;
        }
      }
      unaff_x24 = unaff_x24 - 0x10;
      puVar14 = puVar14 + 2;
    } while (unaff_x24 != 0);
  }
  local_d8 = (long *)0x0;
  local_d0 = 0;
  uStack_b0 = uStack_138;
  local_b8 = (long *)local_140;
  lStack_a0 = lStack_128;
  uStack_a8 = local_130;
  local_e8 = (long *)0x0;
  local_e0 = (long *)0x8;
  local_c8 = 8;
  local_c0 = 0;
  local_98 = local_120;
                    /* try { // try from 006bb3dc to 006bb3ef has its CatchHandler @ 006bb608 */
  uStack_90 = uVar18;
  local_88 = uVar15;
  uStack_80 = uVar7;
  local_78 = uVar3;
  FUN_006da818(&local_100,&local_e8,0,0);
  plVar19 = (long *)uStack_f8;
  plVar8 = local_100;
  if ((char)local_100 == -1) {
    if (1 < local_c0) {
      if (local_c0 < 0x15) {
        FUN_006ca888();
      }
      else {
                    /* try { // try from 006bb5c4 to 006bb5cb has its CatchHandler @ 006bb608 */
        core[188d2c0002da36d0]::slice::sort::stable::driftsort_main::
        <addr2line[5beaa54f6b4a1439]::function::InlinedFunctionAddress,<[addr2line[5beaa54f6b4a1439]::function::InlinedFunctionAddress]>::sort_by<<addr2line[5beaa54f6b4a1439]::function::Function<gimli[d400ddce60e1bc02]::read::endian_slice::EndianSlice<gimli[d400ddce60e1bc02]::endianity::LittleEndian>>>::parse::_closure_0_>::_closure_0_,alloc[cc0d62b833a55794]::vec::Vec<addr2line[5beaa54f6b4a1439]::function::InlinedFunctionAddress>>
                  (local_c8,local_c0,&local_100);
      }
    }
    plVar8 = local_d8;
    plVar16 = local_e0;
    if (local_d8 < local_e8) {
      if (local_d8 == (long *)0x0) {
        __rustc::__rust_dealloc(local_e0,(long)local_e8 * 0x30,8);
        plVar16 = (long *)8;
      }
      else {
        lVar6 = (long)local_d8 * 0x30;
        plVar16 = (long *)__rustc::__rust_realloc(local_e0,(long)local_e8 * 0x30,8,lVar6);
        if (plVar16 == (long *)0x0) {
                    /* try { // try from 006bb4a8 to 006bb4b3 has its CatchHandler @ 006bb5f8 */
                    /* WARNING: Subroutine does not return */
          alloc::raw_vec::handle_error(8,lVar6);
        }
      }
    }
    unaff_x24 = local_c0;
    plVar19 = (long *)local_c8;
    if (local_c0 < local_d0) {
      if (local_c0 == 0) {
        __rustc::__rust_dealloc(local_c8,local_d0 << 5,8);
        plVar19 = (long *)8;
      }
      else {
        lVar6 = local_c0 << 5;
        plVar19 = (long *)__rustc::__rust_realloc(local_c8,local_d0 << 5,8);
        if (plVar19 == (long *)0x0) {
                    /* try { // try from 006bb520 to 006bb52b has its CatchHandler @ 006bb5d0 */
                    /* WARNING: Subroutine does not return */
          alloc::raw_vec::handle_error(8,lVar6);
        }
      }
    }
    uVar17 = (ulong)plVar8 & 0x3ffffffffff0000;
    plVar21 = plVar8;
  }
  else {
    if (local_e8 != (long *)0x0) {
      __rustc::__rust_dealloc(local_e0,(long)local_e8 * 0x30,8);
    }
    uVar17 = (ulong)plVar8 & 0xffffffffffff0000;
    if (local_d0 != 0) {
      __rustc::__rust_dealloc(local_c8,local_d0 << 5,8);
    }
    plVar16 = (long *)0x0;
    plVar21 = plVar8;
  }
LAB_006bb138:
  local_d8 = (long *)((ulong)plVar21 & 0xff00 | uVar17 | (ulong)plVar8 & 0xff);
  if (*param_1 == 1) {
    local_e8 = param_1 + 1;
    local_e0 = plVar16;
    local_d0 = (ulong)plVar19;
    local_c8 = unaff_x24;
    local_c0 = uVar22;
    local_b8 = unaff_x23;
    FUN_006c2da0(&local_e8);
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt(&DAT_0045abca,0x1d,&PTR_s__rustc_48a229ceaefd4985c50990b14_00976a48);
  }
  param_1[2] = (long)local_d8;
  param_1[3] = (long)plVar19;
  *param_1 = 1;
  param_1[1] = (long)plVar16;
  param_1[4] = unaff_x24;
  param_1[5] = uVar22;
  param_1[6] = (long)unaff_x23;
  param_1[7] = unaff_x28;
  return;
}


// ===== 006bb648  FUN_006bb648 =====

void FUN_006bb648(long *param_1,long param_2,long param_3)

{
  char cVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong *puVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  byte *pbVar9;
  bool bVar10;
  byte bVar11;
  byte bVar12;
  long lVar13;
  long lVar14;
  ulong *puVar15;
  undefined1 *puVar16;
  ulong *puVar17;
  undefined8 *puVar18;
  ulong *puVar19;
  uint uVar20;
  ulong *puVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  byte *pbVar27;
  long lVar28;
  ulong uVar29;
  ulong uVar30;
  byte *pbVar31;
  long lVar32;
  ulong *puVar33;
  ulong *puVar34;
  long *plVar35;
  ulong uVar36;
  uint uVar37;
  ulong uVar38;
  ulong uVar39;
  ulong uVar40;
  ulong *puVar41;
  undefined1 auVar42 [16];
  ulong *local_228;
  ulong *local_220;
  ulong *local_218;
  ulong *local_210;
  ulong local_200;
  ulong *local_1f8;
  undefined1 *local_1f0;
  ulong *local_1e8;
  ulong local_1c8;
  ulong local_138;
  long local_130;
  ulong local_128;
  ulong local_120;
  ulong *local_118;
  ulong local_110;
  byte *local_108;
  long local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  ulong *local_e0;
  ulong *puStack_d8;
  ulong *local_d0;
  ulong *puStack_c8;
  undefined1 *local_c0;
  long lStack_b8;
  uint local_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  byte *local_a0;
  long local_90;
  ulong *puStack_88;
  ulong *puStack_80;
  
  local_138 = 0;
  local_130 = 8;
  local_118 = (ulong *)&DAT_00000008;
  local_110 = 0;
  local_108 = *(byte **)(param_3 + 0x28);
  local_100 = *(long *)(param_3 + 0x30);
  local_128 = 0;
  local_120 = 0;
  local_e8 = 0;
  local_f0 = *(long *)(param_3 + 0x170) + 0x10;
  local_f8 = param_3;
  if (local_100 != 0) {
    puVar33 = *(ulong **)(param_2 + 0xe0);
    uVar4 = *(ulong *)(param_2 + 0xe8);
    local_218 = (ulong *)&DAT_00000008;
    uVar6 = *(uint *)(param_3 + 0x48);
    uVar39 = (ulong)uVar6;
    uVar40 = *(ulong *)(param_3 + 0x1b8);
    puVar41 = *(ulong **)(param_3 + 0x1a8);
    uVar38 = 0;
    puVar15 = (ulong *)((long)puVar33 + uVar40);
    uVar29 = (uVar39 & 0xff) << 8 | 0x19;
    uVar26 = uVar4 - uVar40;
    uVar2 = uVar40;
    if ((*(byte *)(param_2 + 0x110) & uVar6 < 0x50000) == 0) {
      uVar2 = 0;
    }
    uVar8 = (uVar6 & 0xaaaaaaaa) >> 1 | (uVar6 & 0x55555555) << 1;
    uVar8 = (uVar8 & 0xcccccccc) >> 2 | (uVar8 & 0x33333333) << 2;
    uVar8 = (uVar8 & 0xf0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f) << 4;
    uVar20 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
    uVar8 = uVar6 >> 0x10;
    puVar3 = *(ulong **)(param_2 + 0x10);
    puVar5 = *(ulong **)(param_2 + 0x18);
    uVar20 = (uint)LZCOUNT(uVar20 >> 0x10 | uVar20 << 0x10);
    uVar36 = 0;
    uVar30 = (long)puVar5 - (long)puVar41;
    lVar25 = 0x10;
    if (uVar8 < 5) {
      lVar25 = 0;
    }
    lVar14 = 0x18;
    if (uVar8 < 5) {
      lVar14 = 8;
    }
    puVar21 = *(ulong **)(param_3 + 0x198);
LAB_006bb754:
    do {
      puVar34 = (ulong *)0x0;
      uVar22 = 0;
      lVar28 = 0xc;
      if (*(char *)(local_f8 + 0x49) != '\b') {
        lVar28 = 4;
      }
      pbVar27 = local_108 +
                ((lVar28 + *(long *)(local_f8 + 0x38)) -
                (*(long *)(local_f8 + 0x30) + *(long *)(local_f8 + 0x28)));
      lVar28 = 1 - local_100;
      pbVar9 = local_108;
      while( true ) {
        pbVar31 = pbVar9 + 1;
        bVar7 = *pbVar9;
        if (((int)uVar22 == 0x3f) && (1 < bVar7)) {
          uVar38 = 0;
          uVar37 = 6;
          goto LAB_006bbfa4;
        }
        puVar34 = (ulong *)(((ulong)bVar7 & 0x7f) << (uVar22 & 0x3f) | (ulong)puVar34);
        if (-1 < (char)bVar7) break;
        lVar28 = lVar28 + 1;
        uVar22 = (ulong)((int)uVar22 + 7);
        pbVar9 = pbVar31;
        if (lVar28 == 1) {
          puVar34 = (ulong *)(local_108 + local_100);
          goto LAB_006bbfa0;
        }
      }
      local_100 = -lVar28;
      local_108 = pbVar31;
      if (puVar34 == (ulong *)0x0) {
        local_e8 = local_e8 + -1;
        goto joined_r0x006bbef4;
      }
      if (*(undefined1 **)(local_f0 + 0x10) <= (undefined1 *)((long)puVar34 + -1)) {
        lVar28 = *(long *)(local_f0 + 0x18);
        if (lVar28 != 0) {
          lVar23 = *(long *)(local_f0 + 0x20);
          while( true ) {
            lVar13 = lVar28 + -0x70;
            lVar32 = (ulong)*(ushort *)(lVar28 + 0x532) << 3;
            uVar22 = 0xffffffffffffffff;
            puVar18 = (undefined8 *)(lVar28 + 0x4d8);
            do {
              uVar24 = (ulong)*(ushort *)(lVar28 + 0x532);
              if (lVar32 == 0) goto LAB_006bb8c4;
              lVar13 = lVar13 + 0x70;
              uVar24 = uVar22 + 1;
              lVar32 = lVar32 + -8;
              cVar1 = (ulong *)*puVar18 < puVar34;
              if (puVar34 < (ulong *)*puVar18) {
                cVar1 = -1;
              }
              uVar22 = uVar24;
              puVar18 = puVar18 + 1;
            } while (cVar1 == '\x01');
            if (cVar1 == '\0') break;
LAB_006bb8c4:
            if (lVar23 == 0) goto LAB_006bc124;
            lVar23 = lVar23 + -1;
            lVar28 = *(long *)(lVar28 + uVar24 * 8 + 0x538);
          }
          goto LAB_006bb7fc;
        }
LAB_006bc124:
        uVar38 = 0;
        uVar37 = 0x12;
        goto LAB_006bbfa4;
      }
      lVar13 = *(long *)(local_f0 + 8) + ((long)puVar34 + -1) * 0x70;
LAB_006bb7fc:
      if (*(char *)(lVar13 + 0x6a) == '\x01') {
        local_e8 = local_e8 + 1;
      }
      if (*(short *)(lVar13 + 0x68) != 0x2e) {
        auVar42 = <gimli::read::abbrev::Attributes_as_core::ops::deref::Deref>::deref();
        FUN_006c8474(&local_e0,&local_108,*(undefined4 *)(local_f8 + 0x48),auVar42._0_8_,
                     auVar42._8_8_);
        puVar19 = local_e0;
        puVar34 = puStack_d8;
        if ((char)local_e0 != -1) {
LAB_006bc118:
          uVar38 = (ulong)puVar19 >> 8;
          uVar37 = (uint)puVar19 & 0xff;
          goto LAB_006bbfa4;
        }
        goto LAB_006bb904;
      }
                    /* try { // try from 006bb824 to 006bb8db has its CatchHandler @ 006bc2a0 */
      auVar42 = <gimli::read::abbrev::Attributes_as_core::ops::deref::Deref>::deref();
      plVar35 = auVar42._0_8_;
      if (auVar42._8_8_ != 0) {
        lVar28 = auVar42._8_8_ << 4;
        bVar12 = 0;
        bVar10 = false;
        bVar7 = 0;
        bVar11 = 0;
        do {
          puStack_88 = (ulong *)plVar35[1];
          local_90 = *plVar35;
          FUN_006c753c(&local_e0,&local_108,*(undefined4 *)(local_f8 + 0x48),&local_90);
          puVar19 = puStack_d8;
          puVar34 = local_d0;
          if (local_e0 == (ulong *)0xffffffffffffffff) goto LAB_006bc118;
          if ((short)puStack_c8 == 0x55) {
            FUN_006e8254(&local_90,&local_e0);
            if (local_90 == 0x16) {
              local_1f0 = (undefined1 *)((long)puStack_88 + uVar2);
            }
            else {
              if (local_90 != 0x18) {
                bVar10 = false;
                goto LAB_006bb92c;
              }
              puVar34 = puVar33;
              if (uVar4 < uVar40) goto LAB_006bbfa0;
              uVar24 = (long)puStack_88 * ((ulong)(uVar6 >> 8) & 0xff);
              uVar22 = uVar26 - uVar24;
              puVar34 = puVar15;
              if (uVar26 < uVar24) goto LAB_006bbfa0;
              puVar34 = (ulong *)((long)puVar15 + uVar24);
              if ((uVar6 & 0xff00) == 0x800) {
                if (uVar22 < 8) goto LAB_006bbfa0;
                uVar22 = ((ulong)(uint)*puVar34 << 8 | (ulong)*(uint3 *)((long)puVar34 + 4) << 0x28)
                         >> 8 | (ulong)*(byte *)((long)puVar34 + 7) << 0x38;
              }
              else {
                if (uVar22 < 4) goto LAB_006bbfa0;
                uVar22 = (ulong)(uint)*puVar34;
              }
              local_1f0 = (undefined1 *)(uVar22 + uVar40);
            }
            bVar10 = true;
          }
          else if ((short)puStack_c8 == 0x12) {
            FUN_006e8254(&local_90,&local_e0);
            if (local_90 == 0) {
              local_210 = puStack_88;
              bVar7 = 1;
            }
            else if (local_90 == 7) {
              local_228 = puStack_88;
              bVar11 = 1;
            }
            else if (local_90 == 0xc) {
              if (puVar5 < puVar41) {
                local_1c8 = local_1c8 & 0xffffffffffffff00 | 0x13;
                local_220 = puVar3;
              }
              else {
                uVar24 = (long)puStack_88 * (uVar39 & 0xff);
                uVar22 = uVar30 - uVar24;
                if (uVar30 < uVar24) {
                  local_1c8 = local_1c8 & 0xffffffffffffff00 | 0x13;
                  local_220 = (ulong *)((long)puVar3 + (long)puVar41);
                }
                else if ((uVar6 - 1 & 0xff) < ((uVar6 ^ uVar6 - 1) & 0xff)) {
                  puVar34 = (ulong *)((undefined1 *)((long)puVar3 + (long)puVar41) + uVar24);
                  if (uVar20 < 2) {
                    if (uVar20 == 0) {
                      if (uVar30 == uVar24) goto LAB_006bbfa0;
                      local_220 = (ulong *)(ulong)(byte)*puVar34;
                    }
                    else {
                      if (uVar20 != 1) goto LAB_006bbc58;
                      if (uVar22 < 2) goto LAB_006bbfa0;
                      local_220 = (ulong *)(ulong)(ushort)*puVar34;
                    }
                  }
                  else if (uVar20 == 2) {
                    if (uVar22 < 4) goto LAB_006bbfa0;
                    local_220 = (ulong *)(ulong)(uint)*puVar34;
                  }
                  else {
                    if (uVar20 != 3) goto LAB_006bbc58;
                    if (uVar22 < 8) goto LAB_006bbfa0;
                    local_220 = (ulong *)(((ulong)(uint)*puVar34 << 8 |
                                          (ulong)*(uint3 *)((long)puVar34 + 4) << 0x28) >> 8 |
                                         (ulong)*(byte *)((long)puVar34 + 7) << 0x38);
                  }
                  local_1c8 = local_1c8 | 0xff;
                }
                else {
LAB_006bbc58:
                  local_1c8 = local_1c8 & 0xffffffffffff0000 | uVar29;
                }
              }
              uVar37 = (uint)local_1c8 & 0xff;
              if (uVar37 != 0xff) {
                uVar38 = local_1c8 >> 8;
                puVar34 = local_220;
                goto LAB_006bbfa4;
              }
              bVar7 = 1;
              local_210 = local_220;
            }
          }
          else if ((short)puStack_c8 == 0x11) {
            FUN_006e8254(&local_90,&local_e0);
            if (local_90 == 0) {
              local_1e8 = puStack_88;
              bVar12 = 1;
            }
            else if (local_90 == 0xc) {
              if (puVar5 < puVar41) {
                local_200 = local_200 & 0xffffffffffffff00 | 0x13;
                local_1f8 = puVar3;
              }
              else {
                uVar24 = (long)puStack_88 * (uVar39 & 0xff);
                uVar22 = uVar30 - uVar24;
                if (uVar30 < uVar24) {
                  local_200 = local_200 & 0xffffffffffffff00 | 0x13;
                  local_1f8 = (ulong *)((long)puVar3 + (long)puVar41);
                }
                else if ((uVar6 - 1 & 0xff) < ((uVar6 ^ uVar6 - 1) & 0xff)) {
                  puVar34 = (ulong *)((undefined1 *)((long)puVar3 + (long)puVar41) + uVar24);
                  if (uVar20 < 2) {
                    if (uVar20 == 0) {
                      if (uVar30 == uVar24) goto LAB_006bbfa0;
                      local_1f8 = (ulong *)(ulong)(byte)*puVar34;
                    }
                    else {
                      if (uVar20 != 1) goto LAB_006bbc08;
                      if (uVar22 < 2) goto LAB_006bbfa0;
                      local_1f8 = (ulong *)(ulong)(ushort)*puVar34;
                    }
                  }
                  else if (uVar20 == 2) {
                    if (uVar22 < 4) goto LAB_006bbfa0;
                    local_1f8 = (ulong *)(ulong)(uint)*puVar34;
                  }
                  else {
                    if (uVar20 != 3) goto LAB_006bbc08;
                    if (uVar22 < 8) goto LAB_006bbfa0;
                    local_1f8 = (ulong *)(((ulong)(uint)*puVar34 << 8 |
                                          (ulong)*(uint3 *)((long)puVar34 + 4) << 0x28) >> 8 |
                                         (ulong)*(byte *)((long)puVar34 + 7) << 0x38);
                  }
                  local_200 = local_200 | 0xff;
                }
                else {
LAB_006bbc08:
                  local_200 = local_200 & 0xffffffffffff0000 | uVar29;
                }
              }
              uVar37 = (uint)local_200 & 0xff;
              if (uVar37 != 0xff) {
                uVar38 = local_200 >> 8;
                puVar34 = local_1f8;
                goto LAB_006bbfa4;
              }
              bVar12 = 1;
              local_1e8 = local_1f8;
            }
          }
LAB_006bb92c:
          lVar28 = lVar28 + -0x10;
          plVar35 = plVar35 + 2;
        } while (lVar28 != 0);
        if (bVar10) {
          puVar16 = *(undefined1 **)(param_2 + 0xd0 + lVar14);
          puVar34 = *(ulong **)(param_2 + 0xd0 + lVar25);
          if (puVar16 < local_1f0) {
            uVar38 = 0;
            uVar29 = 0;
            uVar37 = 0x13;
LAB_006bc220:
            uVar38 = uVar29 & 0xff | uVar38 << 8;
            goto LAB_006bbfa4;
          }
          bVar10 = false;
          local_c0 = (undefined1 *)((long)puVar34 + (long)local_1f0);
          uStack_ac = CONCAT31(uStack_ac._1_3_,4 < uVar8);
          local_e0 = puVar3;
          puStack_d8 = puVar5;
          local_d0 = puVar21;
          puStack_c8 = puVar41;
          lStack_b8 = (long)puVar16 - (long)local_1f0;
          local_b0 = uVar6;
          while (FUN_006e8d70(&local_90,&local_e0), puVar19 = puStack_80, puVar34 = puStack_88,
                local_90 != 0) {
            if (local_90 == 2) {
              uVar37 = (uint)puStack_88 & 0xff;
              if (uVar37 == 0xff) {
                if (((uint)puStack_88 >> 8 & 1) == 0) goto joined_r0x006bbef4;
                goto LAB_006bbe88;
              }
              uVar38 = (ulong)puStack_88 >> 0x10;
              uVar29 = (ulong)puStack_88 >> 8;
              puVar34 = puStack_80;
              goto LAB_006bc220;
            }
            if (puStack_88 < puStack_80) {
              if (uVar38 == local_120) {
                    /* try { // try from 006bbd94 to 006bbd9b has its CatchHandler @ 006bc250 */
                <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<addr2line::function::FunctionAddress>>
                ::grow_one(&local_120);
                local_218 = local_118;
              }
              bVar10 = true;
              puVar17 = local_218 + uVar38 * 3;
              uVar38 = uVar38 + 1;
              *puVar17 = (ulong)puVar34;
              puVar17[1] = (ulong)puVar19;
              puVar17[2] = uVar36;
              local_110 = uVar38;
            }
          }
          if (!bVar10) goto joined_r0x006bbef4;
LAB_006bbe88:
          local_e0 = (ulong *)0x0;
          local_a0 = pbVar27;
          if (uVar36 == local_138) {
                    /* try { // try from 006bbe9c to 006bbea3 has its CatchHandler @ 006bc254 */
            <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<std::backtrace_rs::symbolize::gimli::Library>>
            ::grow_one(&local_138);
          }
          puVar18 = (undefined8 *)(local_130 + uVar36 * 0x48);
          uVar36 = uVar36 + 1;
          puVar18[3] = puStack_c8;
          puVar18[2] = local_d0;
          puVar18[5] = lStack_b8;
          puVar18[4] = local_c0;
          puVar18[7] = uStack_a8;
          puVar18[6] = CONCAT44(uStack_ac,local_b0);
          puVar18[8] = local_a0;
          puVar18[1] = puStack_d8;
          *puVar18 = local_e0;
          local_128 = uVar36;
        }
        else if ((bool)(bVar12 & bVar7)) {
          if (local_1e8 < local_210) {
            puVar34 = local_210;
            if (uVar38 == local_120) {
                    /* try { // try from 006bbdf0 to 006bbe37 has its CatchHandler @ 006bc2a0 */
              <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<addr2line::function::FunctionAddress>>::
              grow_one(&local_120);
LAB_006bbe3c:
              local_218 = local_118;
            }
LAB_006bbe40:
            puVar19 = local_218 + uVar38 * 3;
            uVar38 = uVar38 + 1;
            *puVar19 = (ulong)local_1e8;
            puVar19[1] = (ulong)puVar34;
            puVar19[2] = uVar36;
            local_110 = uVar38;
            goto LAB_006bbe88;
          }
        }
        else if (((bool)(bVar12 & bVar11)) &&
                (puVar34 = (ulong *)((long)local_1e8 + (long)local_228), local_1e8 < puVar34)) {
          if (uVar38 == local_120) {
            <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<addr2line::function::FunctionAddress>>::
            grow_one(&local_120);
            goto LAB_006bbe3c;
          }
          goto LAB_006bbe40;
        }
joined_r0x006bbef4:
        if (local_100 == 0) break;
        goto LAB_006bb754;
      }
LAB_006bb904:
    } while (local_100 != 0);
    if (1 < uVar38) {
      if (uVar38 < 0x15) {
        lVar25 = 0;
        puVar15 = local_118 + 3;
        puVar33 = local_118;
        do {
          puVar41 = puVar15;
          uVar29 = puVar33[3];
          if (uVar29 < *puVar33) {
            puStack_d8 = (ulong *)puVar33[5];
            local_e0 = (ulong *)puVar33[4];
            lVar14 = lVar25;
            do {
              lVar28 = lVar14;
              puVar18 = (undefined8 *)((long)local_118 + lVar28);
              puVar18[4] = puVar18[1];
              puVar18[3] = *puVar18;
              puVar18[5] = puVar18[2];
              puVar15 = local_118;
              if (lVar28 == 0) goto LAB_006bc1a4;
              lVar14 = lVar28 + -0x18;
            } while (uVar29 < (ulong)puVar18[-3]);
            puVar15 = (ulong *)((long)local_118 + lVar28);
LAB_006bc1a4:
            *puVar15 = uVar29;
            puVar15[2] = (ulong)puStack_d8;
            puVar15[1] = (ulong)local_e0;
          }
          puVar15 = puVar41 + 3;
          lVar25 = lVar25 + 0x18;
          puVar33 = puVar41;
        } while (puVar15 != local_118 + uVar38 * 3);
      }
      else {
                    /* try { // try from 006bc23c to 006bc247 has its CatchHandler @ 006bc24c */
        core[188d2c0002da36d0]::slice::sort::stable::driftsort_main::
        <addr2line[5beaa54f6b4a1439]::function::FunctionAddress,<[addr2line[5beaa54f6b4a1439]::function::FunctionAddress]>::sort_by_key<u64,<addr2line[5beaa54f6b4a1439]::function::Functions<gimli[d400ddce60e1bc02]::read::endian_slice::EndianSlice<gimli[d400ddce60e1bc02]::endianity::LittleEndian>>>::parse::_closure_1_>::_closure_0_,alloc[cc0d62b833a55794]::vec::Vec<addr2line[5beaa54f6b4a1439]::function::FunctionAddress>>
                  (local_118,uVar38,&local_90);
      }
    }
  }
  uVar38 = local_128;
  lVar14 = local_130;
  if (local_128 < local_138) {
    if (local_128 != 0) {
      lVar25 = local_128 * 0x48;
      lVar14 = __rustc::__rust_realloc(local_130,local_138 * 0x48,8,lVar25);
      if (lVar14 == 0) {
                    /* try { // try from 006bc22c to 006bc237 has its CatchHandler @ 006bc28c */
                    /* WARNING: Subroutine does not return */
        alloc::raw_vec::handle_error(8,lVar25);
      }
      goto LAB_006bbf3c;
    }
    __rustc::__rust_dealloc(local_130,local_138 * 0x48,8);
    lVar14 = 8;
    puVar15 = local_118;
    uVar29 = local_110;
    if (local_110 < local_120) goto LAB_006bbf4c;
  }
  else {
LAB_006bbf3c:
    puVar15 = local_118;
    uVar29 = local_110;
    if (local_110 < local_120) {
LAB_006bbf4c:
      uVar29 = local_110;
      if (local_110 == 0) {
        __rustc::__rust_dealloc(local_118,local_120 * 0x18,8);
        puVar15 = (ulong *)&DAT_00000008;
      }
      else {
        lVar25 = local_110 * 0x18;
        puVar15 = (ulong *)__rustc::__rust_realloc(local_118,local_120 * 0x18,8,lVar25);
        if (puVar15 == (ulong *)0x0) {
                    /* try { // try from 006bbf7c to 006bbf87 has its CatchHandler @ 006bc264 */
                    /* WARNING: Subroutine does not return */
          alloc::raw_vec::handle_error(8,lVar25);
        }
      }
    }
  }
  lVar25 = *param_1;
  local_d0 = (ulong *)((ulong)((uint)uVar38 & 0xff) | uVar38 & 0xffffffffffffff00);
  puStack_d8 = (ulong *)lVar14;
  puStack_c8 = puVar15;
  local_c0 = (undefined1 *)uVar29;
joined_r0x006bc0e0:
  if (lVar25 == 1) {
    local_e0 = (ulong *)(param_1 + 1);
    FUN_006c2e04(&local_e0);
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt(&DAT_0045abca,0x1d,&PTR_s__rustc_48a229ceaefd4985c50990b14_00976a48);
  }
  param_1[2] = (long)local_d0;
  param_1[3] = (long)puStack_c8;
  *param_1 = 1;
  param_1[1] = (long)puStack_d8;
  param_1[4] = (long)local_c0;
  return;
LAB_006bbfa0:
  uVar38 = 0;
  uVar37 = 0x13;
LAB_006bbfa4:
  if (local_120 != 0) {
    __rustc::__rust_dealloc(local_118,local_120 * 0x18,8);
  }
  lVar25 = local_130;
  if (uVar36 != 0) {
    plVar35 = (long *)(local_130 + 0x10);
    do {
      if ((plVar35[-2] != 0) && (plVar35[-1] != 0)) {
        if (*plVar35 != 0) {
          __rustc::__rust_dealloc(plVar35[-1],*plVar35 * 0x30,8);
        }
        if (plVar35[2] != 0) {
          __rustc::__rust_dealloc(plVar35[1],plVar35[2] << 5,8);
        }
      }
      uVar36 = uVar36 - 1;
      plVar35 = plVar35 + 9;
    } while (uVar36 != 0);
  }
  if (local_138 != 0) {
    __rustc::__rust_dealloc(lVar25,local_138 * 0x48,8);
  }
  puStack_d8 = (ulong *)0x0;
  lVar25 = *param_1;
  local_d0 = (ulong *)((ulong)uVar37 | uVar38 << 8);
  puStack_c8 = puVar34;
  local_c0 = (undefined1 *)uVar40;
  goto joined_r0x006bc0e0;
}


// ===== 006bc2d8  FUN_006bc2d8 =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006bc2d8(long *param_1,undefined8 param_2,undefined8 param_3,ulong *param_4)

{
  byte *pbVar1;
  byte bVar2;
  ushort uVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  code *pcVar8;
  bool bVar9;
  long lVar10;
  undefined1 *__dest;
  long **pplVar11;
  undefined8 *puVar12;
  byte *pbVar13;
  undefined **ppuVar14;
  byte *pbVar15;
  ulong uVar16;
  ulong extraout_x8;
  byte *pbVar17;
  byte *pbVar18;
  uint uVar19;
  ulong uVar20;
  byte *pbVar21;
  byte *pbVar22;
  byte *pbVar23;
  byte *pbVar24;
  uint *puVar25;
  byte *pbVar26;
  uint uVar27;
  ulong uVar28;
  void *pvVar29;
  long *plVar30;
  long *plVar31;
  ulong *puVar32;
  ulong *puVar33;
  ulong uVar34;
  long lVar35;
  byte *pbVar36;
  size_t sVar37;
  ulong uVar38;
  byte *pbVar39;
  byte *pbVar40;
  byte *pbVar41;
  undefined8 *local_2f8;
  byte *local_2f0;
  byte *local_2c8;
  byte *local_2b8;
  byte *local_2b0;
  byte *local_2a8;
  byte *local_2a0;
  byte *local_298;
  ulong local_290;
  ulong local_280;
  ulong local_270;
  byte *pbStack_268;
  byte *local_260;
  long lStack_258;
  long local_250;
  long lStack_248;
  long local_240;
  long lStack_238;
  long local_230;
  long lStack_228;
  byte *local_218;
  byte *local_210;
  byte *local_208;
  byte *local_200;
  undefined8 *puStack_1f8;
  byte *local_1f0;
  long *local_1e8;
  ulong *puStack_1e0;
  byte *local_1d8;
  byte *pbStack_1d0;
  byte *local_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long local_1a8;
  long lStack_1a0;
  long local_198;
  ulong local_190;
  byte *local_188;
  ulong local_180;
  ulong local_178;
  long local_170;
  ulong uStack_168;
  ulong local_160;
  undefined1 *local_158;
  ulong local_150;
  byte *local_148;
  long **local_140;
  byte *local_138;
  byte *local_130;
  byte *pbStack_128;
  byte *local_120;
  byte *pbStack_118;
  byte *local_110;
  ulong uStack_108;
  byte *local_100;
  byte *local_f8;
  ulong local_f0;
  undefined4 local_e8;
  byte local_e4;
  undefined4 local_e3;
  byte local_df;
  byte *local_d8;
  long local_d0;
  byte *local_c8;
  byte *pbStack_c0;
  byte *local_b8;
  byte *local_b0;
  byte *local_a8;
  byte local_a0;
  byte local_9f;
  undefined4 local_9e;
  byte *local_98;
  byte *local_90;
  byte *local_88;
  ulong *local_80;
  byte *local_78;
  
  local_2a0 = (byte *)param_4[0x1b];
  uVar20 = param_4[0x1c];
  local_2a8 = (byte *)param_4[0x1d];
  local_290 = param_4[0xd];
  uVar28 = param_4[0x20];
  bVar2 = *(byte *)((long)param_4 + 0x109);
  local_2b0 = (byte *)param_4[0x17];
  local_2b8 = (byte *)param_4[0x18];
  sVar37 = local_290 << 2;
  if (local_290 == 0) {
    local_280 = param_4[0x10];
    local_298 = &DAT_00000002;
    if (local_280 == 0) goto LAB_006bc468;
LAB_006bc374:
    lVar35 = local_280 * 0x18;
    plVar30 = (long *)param_4[0xf];
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    lVar10 = __rustc::__rust_alloc(lVar35,8);
    if (lVar10 == 0) {
                    /* try { // try from 006bd9c4 to 006bd9cf has its CatchHandler @ 006bdb08 */
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(8,lVar35);
    }
    if (lVar35 != 0) {
                    /* WARNING: Could not recover jumptable at 0x006bc3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_006bc3b8 + (ulong)(byte)(&DAT_0045a648)[*plVar30] * 4))();
      return;
    }
  }
  else {
    pvVar29 = (void *)param_4[0xc];
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    local_298 = (byte *)__rustc::__rust_alloc(sVar37,2);
    if (local_298 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(2,sVar37);
    }
    memcpy(local_298,pvVar29,sVar37);
    local_280 = param_4[0x10];
    if (local_280 != 0) goto LAB_006bc374;
LAB_006bc468:
    lVar10 = 8;
  }
  uVar38 = param_4[0x13];
  local_2c8 = (byte *)CONCAT44(local_2c8._4_4_,(uint)uVar28);
  sVar37 = uVar38 << 2;
  if (uVar38 == 0) {
    __dest = &DAT_00000002;
    pbVar40 = (byte *)param_4[0x16];
    if (pbVar40 == (byte *)0x0) goto LAB_006bc5a4;
LAB_006bc4c0:
    uVar34 = param_4[0x15];
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    pplVar11 = (long **)__rustc::__rust_alloc((long)pbVar40 * 0x58,8);
    if (pplVar11 == (long **)0x0) {
                    /* try { // try from 006bd9e4 to 006bd9ef has its CatchHandler @ 006bdacc */
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(8,(long)pbVar40 * 0x58);
    }
    lVar35 = 0;
    pbVar36 = pbVar40;
    do {
      if ((long)pbVar40 * 0x58 - lVar35 == 0) break;
      pbVar36 = pbVar36 + -1;
      FUN_006fda3c(&local_1e8,uVar34);
      plVar30 = (long *)((long)pplVar11 + lVar35);
      lVar35 = lVar35 + 0x58;
      plVar30[10] = local_198;
      plVar30[9] = lStack_1a0;
      plVar30[8] = local_1a8;
      plVar30[5] = lStack_1c0;
      plVar30[4] = (long)local_1c8;
      plVar30[7] = lStack_1b0;
      plVar30[6] = lStack_1b8;
      plVar30[1] = (long)puStack_1e0;
      *plVar30 = (long)local_1e8;
      plVar30[3] = (long)pbStack_1d0;
      plVar30[2] = (long)local_1d8;
      uVar34 = uVar34 + 0x58;
    } while (pbVar36 != (byte *)0x0);
    uVar16 = *param_4;
    pbVar36 = (byte *)param_4[0x19];
    pbVar22 = (byte *)param_4[0x1a];
    pbVar39 = (byte *)param_4[0x1e];
    uVar34 = param_4[0x1f];
    if (uVar16 != 0xffffffffffffffff) goto LAB_006bc55c;
LAB_006bc5bc:
    local_1e8 = (long *)0xffffffffffffffff;
  }
  else {
    pvVar29 = (void *)param_4[0x12];
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    __dest = (undefined1 *)__rustc::__rust_alloc(sVar37,2);
    if (__dest == (undefined1 *)0x0) {
                    /* try { // try from 006bd9d4 to 006bd9df has its CatchHandler @ 006bdae8 */
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(2,sVar37);
    }
    memcpy(__dest,pvVar29,sVar37);
    pbVar40 = (byte *)param_4[0x16];
    if (pbVar40 != (byte *)0x0) goto LAB_006bc4c0;
LAB_006bc5a4:
    pplVar11 = (long **)&DAT_00000008;
    uVar16 = *param_4;
    pbVar36 = (byte *)param_4[0x19];
    pbVar22 = (byte *)param_4[0x1a];
    pbVar39 = (byte *)param_4[0x1e];
    uVar34 = param_4[0x1f];
    if (uVar16 == 0xffffffffffffffff) goto LAB_006bc5bc;
LAB_006bc55c:
    FUN_006fda3c(&local_1e8,param_4);
    lStack_248 = lStack_1b8;
    local_250 = lStack_1c0;
    lStack_238 = local_1a8;
    local_240 = lStack_1b0;
    lStack_228 = local_198;
    local_230 = lStack_1a0;
    pbStack_268 = local_1d8;
    local_270 = (ulong)puStack_1e0;
    lStack_258 = (long)local_1c8;
    local_260 = pbStack_1d0;
    uVar16 = extraout_x8;
  }
  puVar5 = _UNK_00371838;
  pbVar4 = _s__00371830;
  local_218 = (byte *)0x0;
  local_210 = &DAT_00000008;
  local_2f8 = (undefined8 *)&DAT_00000008;
  local_2f0 = (byte *)0x0;
  puStack_1f8 = (undefined8 *)&DAT_00000008;
  local_1f0 = (byte *)0x0;
  local_1c8 = (byte *)lStack_258;
  pbStack_1d0 = local_260;
  lStack_1b8 = lStack_248;
  lStack_1c0 = local_250;
  local_188 = local_298;
  local_178 = local_280;
  uStack_168 = local_280;
  local_1a8 = lStack_238;
  lStack_1b0 = local_240;
  local_e3 = *(undefined4 *)((long)param_4 + 0x105);
  pbStack_c0 = (byte *)0x1;
  local_c8 = (byte *)0x1;
  local_e4 = *(byte *)((long)param_4 + 0x104);
  pbVar18 = (byte *)(ulong)local_e4;
  local_198 = lStack_228;
  lStack_1a0 = local_230;
  local_1d8 = pbStack_268;
  puStack_1e0 = (ulong *)local_270;
  local_208 = (byte *)0x0;
  local_200 = (byte *)0x0;
  local_d8 = (byte *)0x0;
  local_d0 = 0;
  local_b8 = (byte *)0x0;
  local_b0 = (byte *)0x0;
  local_a0 = 0;
  local_9e = 0;
  local_190 = local_290;
  local_180 = local_290;
  local_170 = lVar10;
  local_160 = uVar38;
  local_158 = __dest;
  local_150 = uVar38;
  local_148 = pbVar40;
  local_140 = pplVar11;
  local_138 = pbVar40;
  local_130 = local_2b0;
  pbStack_128 = local_2b8;
  local_120 = pbVar36;
  pbStack_118 = pbVar22;
  local_110 = local_2a0;
  uStack_108 = uVar20;
  local_100 = local_2a8;
  local_f8 = pbVar39;
  local_f0 = uVar34;
  local_e8 = (uint)uVar28;
  local_df = bVar2;
  local_9f = local_e4;
  local_98 = pbVar36;
  local_90 = pbVar22;
  while( true ) {
    local_a8 = (byte *)0x0;
    local_9e = (local_9e >> 8 & 0xff) << 8;
    pbVar40 = pbVar22;
    if (local_90 == (byte *)0x0) break;
    uVar20 = 0;
LAB_006bc704:
    pbVar15 = local_98;
    pbVar22 = local_c8;
    pbVar1 = local_138;
    puVar12 = puStack_1f8;
    pbVar17 = local_200;
    ppuVar14 = &PTR_s__rust_deps_gimli_0_32_3_src_read_00976d08;
    pbVar26 = local_90 + -1;
    pbVar36 = local_98 + 1;
    bVar2 = *local_98;
    pbVar24 = pbVar40;
    if (bVar2 == 0) {
      if (pbVar26 == (byte *)0x0) goto LAB_006bd378;
      pbVar41 = (byte *)0x0;
      pbVar21 = (byte *)0x0;
      uVar20 = 0;
      while( true ) {
        bVar2 = (local_98 + (long)pbVar41)[1];
        if (((int)uVar20 == 0x3f) && (1 < bVar2)) goto LAB_006bd354;
        pbVar21 = (byte *)(((ulong)bVar2 & 0x7f) << (uVar20 & 0x3f) | (ulong)pbVar21);
        if (-1 < (char)bVar2) break;
        pbVar41 = pbVar41 + 1;
        uVar20 = (ulong)((int)uVar20 + 7);
        if (pbVar26 == pbVar41) goto LAB_006bd374;
      }
      if (pbVar21 <= local_90 + (-2 - (long)pbVar41)) {
        pbVar36 = local_98 + (long)(pbVar41 + (long)pbVar21) + 2;
        local_90 = local_90 + (-(long)pbVar41 - (long)pbVar21) + -2;
        if (pbVar21 == (byte *)0x0) goto LAB_006bd72c;
        bVar2 = (local_98 + (long)pbVar41)[2];
        pbVar23 = pbVar21 + -1;
        puVar25 = (uint *)(local_98 + (long)pbVar41 + 3);
        pbVar26 = local_90;
        if (bVar2 < 3) {
          if (bVar2 != 1) {
            if (bVar2 != 2) goto LAB_006bcc14;
            uVar19 = (local_e8 & 0xff) - 1;
            if ((uVar19 & 0xff) < ((local_e8 & 0xff ^ uVar19) & 0xff)) {
              uVar19 = (local_e8 & 0xaa) >> 1 | (local_e8 & 0x55) << 1;
              uVar19 = (uVar19 & 0xcccccccc) >> 2 | (uVar19 & 0x33333333) << 2;
              uVar19 = (uint)LZCOUNT((uVar19 >> 4 | (uVar19 & 0xf0f0f0f) << 4) << 0x18);
              if (1 < uVar19) {
                if (uVar19 == 2) {
                  if (pbVar23 < (byte *)0x4) goto LAB_006bd904;
                  local_298 = (byte *)(ulong)*puVar25;
                }
                else {
                  if (uVar19 != 3) goto LAB_006bcf30;
                  if (pbVar23 < (byte *)0x8) {
                    uVar19 = 0x13;
                    local_290 = 0;
                    local_298 = local_98 + (long)pbVar41 + 3;
                    goto LAB_006bd94c;
                  }
                  local_298 = (byte *)(((ulong)*puVar25 << 8 |
                                       (ulong)*(uint3 *)(local_98 + (long)pbVar41 + 7) << 0x28) >> 8
                                      | (ulong)(local_98 + (long)pbVar41)[10] << 0x38);
                }
LAB_006bd014:
                local_290 = local_290 | 0xff;
                goto LAB_006bd01c;
              }
              if (uVar19 == 0) {
                if (pbVar23 != (byte *)0x0) {
                  local_298 = (byte *)(ulong)(byte)*puVar25;
                  goto LAB_006bd014;
                }
              }
              else {
                if (uVar19 != 1) goto LAB_006bcf30;
                if ((byte *)0x1 < pbVar23) {
                  local_298 = (byte *)(ulong)(ushort)*puVar25;
                  goto LAB_006bd014;
                }
              }
LAB_006bd904:
              local_290 = 0;
              local_298 = local_98 + (long)pbVar41 + 3;
              uVar19 = 0x13;
            }
            else {
LAB_006bcf30:
              local_290 = local_290 & 0xffffffffffff0000 | (ulong)(byte)local_e8 << 8 | 0x19;
LAB_006bd01c:
              uVar19 = (uint)local_290 & 0xff;
              if (uVar19 == 0xff) {
                pbVar18 = (byte *)((ulong)local_298 >> 8);
                uVar16 = (ulong)local_298 >> 0x10;
                if (local_298 < local_d8) {
                  uVar20 = 0;
                  local_a0 = 1;
                }
                else {
                  uVar19 = (local_e8 & 0xff) * -8 & 0x38;
                  local_a0 = (byte *)((ulong)(-2L << uVar19) >> uVar19) <= local_298;
                  uVar20 = 0;
                  if (!(bool)local_a0) {
                    local_d0 = 0;
                    local_d8 = local_298;
                  }
                }
                goto LAB_006bc994;
              }
            }
LAB_006bd94c:
            pbVar18 = (byte *)(local_290 >> 8);
            uVar16 = local_290 >> 0x10;
            pbVar13 = local_298;
            goto LAB_006bd38c;
          }
          local_9e._0_2_ = CONCAT11(1,(undefined1)local_9e);
          local_98 = pbVar36;
          pbVar36 = local_d8;
          bVar2 = 1;
          goto joined_r0x006bcc44;
        }
        if (bVar2 != 3) {
          if (bVar2 == 4) {
            if (pbVar23 == (byte *)0x0) {
              pbVar22 = local_98 + (long)pbVar41 + 3;
              goto LAB_006bd6a0;
            }
            pbVar22 = (byte *)0x0;
            uVar20 = 0;
            while( true ) {
              bVar2 = (byte)*puVar25;
              if (((int)uVar20 == 0x3f) && (pbVar13 = pbVar39, 1 < bVar2)) goto LAB_006bd6f4;
              pbVar22 = (byte *)(((ulong)bVar2 & 0x7f) << (uVar20 & 0x3f) | (ulong)pbVar22);
              if (-1 < (char)bVar2) break;
              pbVar23 = pbVar23 + -1;
              uVar20 = (ulong)((int)uVar20 + 7);
              puVar25 = (uint *)((long)puVar25 + 1);
              if (pbVar23 == (byte *)0x0) goto LAB_006bd694;
            }
            pbVar18 = (byte *)((ulong)pbVar22 >> 8);
            uVar16 = (ulong)pbVar22 >> 0x10;
            pbVar39 = pbVar22;
            local_a8 = pbVar22;
          }
          else {
LAB_006bcc14:
            pbVar18 = (byte *)((ulong)(local_98 + (long)pbVar41 + 3) >> 8);
            uVar16 = (ulong)(local_98 + (long)pbVar41 + 3) >> 0x10;
          }
LAB_006bcea4:
          uVar20 = 0;
          goto LAB_006bc994;
        }
        if (4 < local_e8._2_2_) {
          pbVar18 = (byte *)((ulong)(local_98 + (long)pbVar41 + 3) >> 8);
          uVar16 = (ulong)(local_98 + (long)pbVar41 + 3) >> 0x10;
          goto LAB_006bcea4;
        }
        if (pbVar23 == (byte *)0x0) {
LAB_006bd764:
          pbVar18 = (byte *)0x0;
          uVar16 = 0;
          uVar19 = 0x13;
          pbVar13 = local_98 + (long)pbVar41 + 3;
          goto LAB_006bd38c;
        }
        pbVar18 = (byte *)0x0;
        pbVar26 = pbVar21 + -3;
        pbVar17 = pbVar21 + -4;
        while ((local_98 + (long)pbVar41)[(long)(pbVar18 + 3)] != 0) {
          pbVar18 = pbVar18 + 1;
          pbVar26 = pbVar26 + -1;
          pbVar17 = pbVar17 + -1;
          if (pbVar23 == pbVar18) goto LAB_006bd764;
        }
        pbVar22 = local_98 + (long)pbVar41 + (long)(pbVar18 + 4);
        if (pbVar21 + -2 != pbVar18) {
          pbVar40 = (byte *)0x0;
          uVar20 = 0;
          pbVar23 = pbVar22;
          while( true ) {
            bVar2 = *pbVar23;
            if (((int)uVar20 == 0x3f) && (1 < bVar2)) goto LAB_006bd354;
            pbVar40 = (byte *)(((ulong)bVar2 & 0x7f) << (uVar20 & 0x3f) | (ulong)pbVar40);
            if (-1 < (char)bVar2) break;
            pbVar26 = pbVar26 + -1;
            uVar20 = (ulong)((int)uVar20 + 7);
            pbVar17 = pbVar17 + -1;
            pbVar23 = pbVar23 + 1;
            if (pbVar26 == (byte *)0xffffffffffffffff) goto LAB_006bd694;
          }
          pbVar22 = pbVar23 + 1;
          if (pbVar26 != (byte *)0x0) {
            plVar30 = (long *)0x0;
            uVar20 = 0;
            while( true ) {
              bVar2 = *pbVar22;
              if (((int)uVar20 == 0x3f) && (1 < bVar2)) goto LAB_006bd354;
              plVar30 = (long *)(((ulong)bVar2 & 0x7f) << (uVar20 & 0x3f) | (ulong)plVar30);
              if (-1 < (char)bVar2) break;
              pbVar17 = pbVar17 + -1;
              uVar20 = (ulong)((int)uVar20 + 7);
              pbVar22 = pbVar22 + 1;
              if (pbVar17 == (byte *)0xffffffffffffffff) {
                pbVar22 = pbVar23 + (long)(pbVar26 + 1);
                goto LAB_006bd6a0;
              }
            }
            pbVar13 = pbVar22 + 1;
            if (pbVar17 != (byte *)0x0) {
              plVar31 = (long *)0x0;
              uVar20 = 0;
              pbVar26 = pbVar17;
              while( true ) {
                bVar2 = *pbVar13;
                if (((int)uVar20 == 0x3f) && (1 < bVar2)) goto LAB_006bd354;
                plVar31 = (long *)(((ulong)bVar2 & 0x7f) << (uVar20 & 0x3f) | (ulong)plVar31);
                if (-1 < (char)bVar2) break;
                pbVar26 = pbVar26 + -1;
                uVar20 = (ulong)((int)uVar20 + 7);
                pbVar13 = pbVar13 + 1;
                if (pbVar26 == (byte *)0x0) {
                  pbVar13 = pbVar22 + (long)(pbVar17 + 1);
                  goto LAB_006bd920;
                }
              }
              local_98 = pbVar36;
              if (local_138 == local_148) {
                    /* try { // try from 006bd17c to 006bd183 has its CatchHandler @ 006bda30 */
                <alloc[cc0d62b833a55794]::raw_vec::RawVec<gimli[d400ddce60e1bc02]::read::line::FileEntry<gimli[d400ddce60e1bc02]::read::endian_slice::EndianSlice<gimli[d400ddce60e1bc02]::endianity::LittleEndian>,usize>>>
                ::grow_one(&local_148);
              }
              uVar20 = 0;
              pplVar11 = local_140 + (long)pbVar1 * 0xb;
              local_138 = pbVar1 + 1;
              pbVar36 = pbVar15 + (long)pbVar41 + 3;
              *pplVar11 = (long *)0x1f;
              pplVar11[1] = (long *)pbVar36;
              *(undefined1 *)(pplVar11 + 3) = 0xff;
              *(undefined1 *)((long)pplVar11 + 0x1f) = 0xff;
              *(undefined2 *)((long)pplVar11 + 0x1d) = 0xffff;
              *(undefined4 *)((long)pplVar11 + 0x19) = 0xffffffff;
              uVar16 = (ulong)pbVar36 >> 0x10;
              pplVar11[6] = (long *)pbVar40;
              pplVar11[7] = plVar30;
              pplVar11[2] = (long *)pbVar18;
              pplVar11[8] = plVar31;
              pplVar11[9] = (long *)0x0;
              pplVar11[10] = (long *)0x0;
              pbVar18 = (byte *)((ulong)pbVar36 >> 8 & 0xffffffff);
              pbVar36 = local_98;
              pbVar26 = local_90;
              goto LAB_006bc994;
            }
LAB_006bd920:
            pbVar18 = (byte *)0x0;
            uVar16 = 0;
            uVar19 = 0x13;
            goto LAB_006bd38c;
          }
        }
        goto LAB_006bd6a0;
      }
LAB_006bd72c:
      pbVar18 = (byte *)0x0;
      uVar16 = 0;
      uVar19 = 0x13;
      pbVar13 = local_98 + (long)pbVar41 + 2;
      goto LAB_006bd38c;
    }
    uVar27 = (uint)local_df;
    uVar19 = bVar2 - uVar27;
    pbVar13 = local_d8;
    if (bVar2 < uVar27) {
      uVar28 = (ulong)(bVar2 - 1);
      switch(uVar28) {
      case 0:
        goto switchD_006bc744_caseD_0;
      case 1:
        if (pbVar26 == (byte *)0x0) goto LAB_006bd378;
        pbVar24 = (byte *)0x0;
        uVar28 = 0;
        lVar10 = 2 - (long)local_90;
        pbVar36 = local_98 + 2;
        while( true ) {
          bVar2 = pbVar36[-1];
          if (((int)uVar28 == 0x3f) && (1 < bVar2)) {
            pbVar18 = (byte *)0x0;
            uVar16 = 0;
            uVar19 = 6;
            pbVar13 = pbVar40;
            goto LAB_006bd38c;
          }
          pbVar24 = (byte *)(((ulong)bVar2 & 0x7f) << (uVar28 & 0x3f) | (ulong)pbVar24);
          if (-1 < (char)bVar2) break;
          lVar10 = lVar10 + 1;
          pbVar36 = pbVar36 + 1;
          uVar28 = (ulong)((int)uVar28 + 7);
          if (lVar10 == 1) goto LAB_006bd374;
        }
        local_90 = (byte *)-lVar10;
        uVar16 = (ulong)pbVar24 >> 0x10;
        pbVar18 = (byte *)((ulong)pbVar24 >> 8 & 0xffffffff);
        pbVar26 = local_90;
        if ((local_a0 & 1) == 0) {
          uVar28 = (ulong)local_e3._1_1_;
          local_98 = pbVar36;
          if (local_e3._1_1_ == 1) {
            local_d0 = 0;
            pbVar22 = pbVar24;
          }
          else {
            if (local_e3._1_1_ == 0) {
LAB_006bd9f4:
              ppuVar14 = &PTR_s__rustc_48a229ceaefd4985c50990b14_00976d20;
              goto LAB_006bd9fc;
            }
            pbVar22 = (byte *)0x0;
            if (uVar28 != 0) {
              pbVar22 = (byte *)((ulong)(pbVar24 + local_d0) / uVar28);
            }
            local_d0 = (long)(pbVar24 + local_d0) - (long)pbVar22 * uVar28;
          }
          pbVar13 = local_d8 + (long)pbVar22 * (ulong)(byte)local_e3;
          if ((!CARRY8((long)pbVar22 * (ulong)(byte)local_e3,(ulong)local_d8)) &&
             (pbVar13 <= (byte *)(0xffffffffffffffffU >> ((local_e8 & 0xff) * -8 & 0x38)))) {
            uVar20 = 0;
            local_d8 = pbVar13;
            break;
          }
LAB_006bd740:
          pbVar36 = (byte *)((ulong)&local_1e8 & 0xffffffffffff0000 | uVar20 & 0xff00 | 0x34);
          goto LAB_006bd3a4;
        }
        uVar20 = 0;
        break;
      case 2:
        local_98 = pbVar36;
        local_90 = pbVar26;
        FUN_0070d8c0(&local_270,&local_98);
        uVar19 = (uint)(byte)local_270;
        if ((byte)local_270 != 0xff) {
          uVar16 = local_270 >> 0x10;
          pbVar18 = (byte *)(local_270 >> 8 & 0xff);
          pbVar13 = pbStack_268;
          goto LAB_006bd38c;
        }
        pbVar18 = (byte *)((ulong)pbStack_268 >> 8);
        pbVar36 = local_98;
        pbVar26 = local_90;
        if (((long)pbStack_268 < 0) && (pbStack_c0 < (byte *)-(long)pbStack_268)) {
          uVar20 = 0;
          uVar16 = (ulong)pbStack_268 >> 0x10;
          pbStack_c0 = (byte *)0x0;
        }
        else {
          uVar20 = 0;
          uVar16 = (ulong)pbStack_268 >> 0x10;
          pbStack_c0 = pbStack_c0 + (long)pbStack_268;
        }
        break;
      case 3:
        if (pbVar26 == (byte *)0x0) goto LAB_006bd378;
        pbVar22 = (byte *)0x0;
        uVar20 = 0;
        lVar10 = 2 - (long)local_90;
        pbVar36 = local_98 + 2;
        while( true ) {
          bVar2 = pbVar36[-1];
          if (((int)uVar20 == 0x3f) && (pbVar13 = local_2b0, 1 < bVar2)) goto LAB_006bd6f4;
          pbVar22 = (byte *)(((ulong)bVar2 & 0x7f) << (uVar20 & 0x3f) | (ulong)pbVar22);
          if (-1 < (char)bVar2) break;
          lVar10 = lVar10 + 1;
          pbVar36 = pbVar36 + 1;
          uVar20 = (ulong)((int)uVar20 + 7);
          if (lVar10 == 1) goto LAB_006bd374;
        }
        uVar20 = 0;
        uVar16 = (ulong)pbVar22 >> 0x10;
        pbVar18 = (byte *)((ulong)pbVar22 >> 8 & 0xffffffff);
        local_2b0 = pbVar22;
        local_c8 = pbVar22;
        pbVar26 = (byte *)-lVar10;
        break;
      case 4:
        if (pbVar26 == (byte *)0x0) goto LAB_006bd378;
        pbVar22 = (byte *)0x0;
        uVar20 = 0;
        lVar10 = 2 - (long)local_90;
        pbVar36 = local_98 + 2;
        while( true ) {
          bVar2 = pbVar36[-1];
          if (((int)uVar20 == 0x3f) && (1 < bVar2)) {
            pbVar18 = (byte *)0x0;
            uVar16 = 0;
            uVar19 = 6;
            pbVar13 = local_2a8;
            goto LAB_006bd38c;
          }
          pbVar22 = (byte *)(((ulong)bVar2 & 0x7f) << (uVar20 & 0x3f) | (ulong)pbVar22);
          if (-1 < (char)bVar2) break;
          lVar10 = lVar10 + 1;
          pbVar36 = pbVar36 + 1;
          uVar20 = (ulong)((int)uVar20 + 7);
          if (lVar10 == 1) goto LAB_006bd374;
        }
        uVar20 = 0;
        uVar16 = (ulong)pbVar22 >> 0x10;
        pbVar18 = (byte *)((ulong)pbVar22 >> 8 & 0xffffffff);
        local_2a8 = pbVar22;
        local_b8 = pbVar22;
        pbVar26 = (byte *)-lVar10;
        break;
      case 5:
        uVar20 = 0;
        local_9f = local_9f ^ 1;
        break;
      case 6:
        uVar20 = 0;
        local_9e = CONCAT31(local_9e._1_3_,1);
        break;
      case 7:
        if (local_e3._3_1_ == 0) {
          local_98 = pbVar36;
          local_90 = pbVar26;
          core::panicking::panic_const::panic_const_div_by_zero
                    (&PTR_s__rust_deps_gimli_0_32_3_src_read_00976d38);
          goto LAB_006bda2c;
        }
        if ((local_a0 & 1) == 0) {
          uVar28 = (ulong)local_e3._1_1_;
          uVar19 = 0;
          if (local_e3._3_1_ != 0) {
            uVar19 = (uVar27 ^ 0xff) / (uint)local_e3._3_1_;
          }
          uVar38 = (ulong)uVar19;
          if (local_e3._1_1_ == 1) {
            local_d0 = 0;
          }
          else {
            local_98 = pbVar36;
            local_90 = pbVar26;
            if (local_e3._1_1_ == 0) goto LAB_006bd9f4;
            uVar34 = local_d0 + uVar38;
            uVar38 = 0;
            if (uVar28 != 0) {
              uVar38 = uVar34 / uVar28;
            }
            local_d0 = uVar34 - uVar38 * uVar28;
          }
          pbVar13 = local_d8 + uVar38 * (byte)local_e3;
          local_98 = pbVar36;
          local_90 = pbVar26;
          if ((CARRY8(uVar38 * (byte)local_e3,(ulong)local_d8)) ||
             ((byte *)(0xffffffffffffffffU >> ((local_e8 & 0xff) * -8 & 0x38)) < pbVar13))
          goto LAB_006bd740;
          uVar20 = 0;
          local_d8 = pbVar13;
        }
        else {
          uVar20 = 0;
        }
        break;
      case 8:
        if (pbVar26 < &DAT_00000002) goto LAB_006bd378;
        pbVar36 = local_98 + 3;
        local_90 = local_90 + -3;
        uVar3 = *(ushort *)(local_98 + 1);
        pbVar18 = (byte *)(ulong)(uVar3 >> 8);
        local_98 = pbVar36;
        if ((local_a0 & 1) == 0) {
          pbVar13 = local_d8 + uVar3;
          if ((CARRY8((ulong)local_d8,(ulong)uVar3)) ||
             ((byte *)(0xffffffffffffffffU >> ((local_e8 & 0xff) * -8 & 0x38)) < pbVar13))
          goto LAB_006bd740;
          uVar20 = 0;
          local_d0 = 0;
          local_d8 = pbVar13;
          pbVar26 = local_90;
        }
        else {
LAB_006bcb94:
          uVar20 = 0;
          pbVar36 = local_98;
          pbVar26 = local_90;
        }
        break;
      case 9:
        uVar20 = 0;
        local_9e._0_3_ = CONCAT12(1,(undefined2)local_9e);
        break;
      case 10:
        uVar20 = 0;
        local_9e = CONCAT13(1,(undefined3)local_9e);
        break;
      case 0xb:
        if (pbVar26 == (byte *)0x0) goto LAB_006bd378;
        pbVar22 = (byte *)0x0;
        uVar20 = 0;
        lVar10 = 2 - (long)local_90;
        pbVar36 = local_98 + 2;
        while( true ) {
          bVar2 = pbVar36[-1];
          if (((int)uVar20 == 0x3f) && (1 < bVar2)) {
            pbVar18 = (byte *)0x0;
            uVar16 = 0;
            uVar19 = 6;
            pbVar13 = local_2a0;
            goto LAB_006bd38c;
          }
          pbVar22 = (byte *)(((ulong)bVar2 & 0x7f) << (uVar20 & 0x3f) | (ulong)pbVar22);
          if (-1 < (char)bVar2) break;
          lVar10 = lVar10 + 1;
          pbVar36 = pbVar36 + 1;
          uVar20 = (ulong)((int)uVar20 + 7);
          if (lVar10 == 1) goto LAB_006bd374;
        }
        uVar20 = 0;
        uVar16 = (ulong)pbVar22 >> 0x10;
        pbVar18 = (byte *)((ulong)pbVar22 >> 8 & 0xffffffff);
        local_2a0 = pbVar22;
        local_b0 = pbVar22;
        pbVar26 = (byte *)-lVar10;
        break;
      default:
        pbVar22 = (byte *)(uVar28 & 0xff);
        pbVar13 = local_130;
        if (pbStack_128 < pbVar22) {
LAB_006bd8e0:
          uVar19 = 0x13;
          goto LAB_006bd38c;
        }
        pbVar13 = local_130 + (long)pbVar22;
        if (pbStack_128 == pbVar22) {
          pbVar18 = (byte *)0x0;
          uVar16 = 0;
          goto LAB_006bd8e0;
        }
        bVar2 = *pbVar13;
        uVar20 = (ulong)bVar2;
        if (bVar2 == 0) break;
        if (bVar2 == 1) {
          if (pbVar26 == (byte *)0x0) goto LAB_006bd378;
          pbVar22 = (byte *)0x0;
          uVar20 = 0;
          lVar10 = 2 - (long)local_90;
          pbVar36 = local_98 + 2;
          while( true ) {
            bVar2 = pbVar36[-1];
            if (((int)uVar20 == 0x3f) && (1 < bVar2)) {
              pbVar18 = (byte *)0x0;
              uVar16 = 0;
              uVar19 = 6;
              pbVar13 = local_2c8;
              goto LAB_006bd38c;
            }
            pbVar22 = (byte *)(((ulong)bVar2 & 0x7f) << (uVar20 & 0x3f) | (ulong)pbVar22);
            if (-1 < (char)bVar2) break;
            lVar10 = lVar10 + 1;
            pbVar36 = pbVar36 + 1;
            uVar20 = (ulong)((int)uVar20 + 7);
            if (lVar10 == 1) goto LAB_006bd374;
          }
          uVar20 = 0;
          uVar16 = (ulong)pbVar22 >> 0x10;
          pbVar18 = (byte *)((ulong)pbVar22 >> 8 & 0xffffffff);
          local_2c8 = pbVar22;
          pbVar26 = (byte *)-lVar10;
          break;
        }
        uVar28 = 0;
        pbVar13 = local_2b8;
        pbVar22 = pbVar36;
        local_90 = pbVar26;
        do {
          if (local_90 == (byte *)0x0) {
LAB_006bd79c:
            pbVar18 = (byte *)0x0;
            uVar16 = 0;
            uVar19 = 0x13;
            pbVar13 = pbVar22;
            goto LAB_006bd38c;
          }
          local_2b8 = (byte *)0x0;
          uVar38 = 0;
          lVar10 = 1 - (long)local_90;
          pbVar17 = pbVar22 + -(long)local_98;
          pbVar1 = pbVar22;
          while( true ) {
            pbVar15 = pbVar1 + 1;
            bVar2 = *pbVar1;
            if (((int)uVar38 == 0x3f) && (1 < bVar2)) {
              pbVar18 = (byte *)0x0;
              uVar16 = 0;
              uVar19 = 6;
              goto LAB_006bd38c;
            }
            local_2b8 = (byte *)(((ulong)bVar2 & 0x7f) << (uVar38 & 0x3f) | (ulong)local_2b8);
            if (-1 < (char)bVar2) break;
            lVar10 = lVar10 + 1;
            uVar38 = (ulong)((int)uVar38 + 7);
            pbVar17 = pbVar17 + 1;
            pbVar1 = pbVar15;
            if (lVar10 == 1) {
              pbVar22 = pbVar22 + (long)local_90;
              goto LAB_006bd79c;
            }
          }
          uVar28 = uVar28 + 1;
          local_90 = (byte *)-lVar10;
          pbVar13 = local_2b8;
          pbVar22 = pbVar15;
        } while (uVar28 != uVar20);
        if (pbVar17 <= pbVar26) {
          pbVar18 = (byte *)((ulong)pbVar36 >> 8);
          uVar16 = (ulong)pbVar36 >> 0x10;
          local_98 = pbVar15;
          goto LAB_006bcb94;
        }
        goto LAB_006bd380;
      }
LAB_006bc994:
      local_90 = pbVar26;
      local_98 = pbVar36;
      pbVar40 = pbVar24;
      if (local_90 == (byte *)0x0) break;
      goto LAB_006bc704;
    }
    local_98 = pbVar36;
    local_90 = pbVar26;
    if (local_e3._3_1_ == 0) {
LAB_006bd9fc:
                    /* try { // try from 006bd9fc to 006bda1b has its CatchHandler @ 006bdb3c */
      core::panicking::panic_const::panic_const_rem_by_zero(ppuVar14);
LAB_006bda2c:
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x6bda30);
      (*pcVar8)();
    }
    uVar27 = 0;
    if (local_e3._3_1_ != 0) {
      uVar27 = (uVar19 & 0xff) / (uint)local_e3._3_1_;
    }
    uVar28 = (ulong)uVar27;
    lVar10 = (long)local_e3._2_1_ + (ulong)(byte)((char)uVar19 - (char)uVar27 * local_e3._3_1_);
    if (lVar10 < 0) {
      pbVar1 = pbStack_c0 + lVar10;
      bVar9 = (byte *)-lVar10 <= pbStack_c0;
      pbStack_c0 = (byte *)0x0;
      if (bVar9) {
        pbStack_c0 = pbVar1;
      }
    }
    else {
      pbStack_c0 = pbStack_c0 + lVar10;
    }
    if ((local_a0 & 1) == 0) {
      uVar38 = (ulong)local_e3._1_1_;
      if (local_e3._1_1_ == 1) {
        local_d0 = 0;
      }
      else {
        if (local_e3._1_1_ == 0) goto LAB_006bd9f4;
        uVar34 = local_d0 + uVar28;
        uVar28 = 0;
        if (uVar38 != 0) {
          uVar28 = uVar34 / uVar38;
        }
        local_d0 = uVar34 - uVar28 * uVar38;
      }
      pbVar13 = local_d8 + uVar28 * (byte)local_e3;
      if ((CARRY8(uVar28 * (byte)local_e3,(ulong)local_d8)) ||
         ((byte *)(0xffffffffffffffffU >> ((local_e8 & 0xff) * -8 & 0x38)) < pbVar13))
      goto LAB_006bd740;
    }
switchD_006bc744_caseD_0:
    local_d8 = pbVar13;
    local_98 = pbVar36;
    local_90 = pbVar26;
    pbVar36 = local_d8;
    bVar2 = local_9e._1_1_;
joined_r0x006bcc44:
    local_d8 = pbVar36;
    if ((local_a0 & 1) != 0) {
      pbVar36 = local_98;
      pbVar26 = local_90;
      if ((bVar2 & 1) == 0) {
        local_a8 = (byte *)0x0;
        uVar20 = 0x100;
        local_9e = (local_9e >> 8 & 0xff) << 8;
      }
      else {
        local_d8 = (byte *)0x0;
        local_d0 = 0;
        local_b8 = (byte *)0x0;
        local_b0 = (byte *)0x0;
        local_a8 = (byte *)0x0;
        pbStack_c0 = (byte *)0x1;
        local_c8 = (byte *)0x1;
        local_a0 = 0;
        local_9f = local_e4;
        uVar20 = 0x100;
        local_9e = 0;
      }
      goto LAB_006bc994;
    }
    if ((bVar2 & 1) == 0) {
      uVar6 = pbStack_c0._0_4_;
      uVar7 = local_b8._0_4_;
      if ((local_2f0 == (byte *)0x0) ||
         (pbVar18 = (byte *)local_2f8[(long)local_2f0 * 3 + -3], pbVar18 != pbVar36)) {
        if (local_2f0 == local_200) {
                    /* try { // try from 006bd2b8 to 006bd2bf has its CatchHandler @ 006bda60 */
          <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<addr2line::function::FunctionAddress>>::
          grow_one(&local_200);
          local_2f8 = puStack_1f8;
        }
        puVar12 = local_2f8 + (long)local_2f0 * 3;
        pbVar18 = local_2f0 + 1;
        *puVar12 = pbVar36;
        puVar12[1] = pbVar22;
        *(undefined4 *)(puVar12 + 2) = uVar6;
        *(undefined4 *)((long)puVar12 + 0x14) = uVar7;
        local_2f0 = pbVar18;
        local_1f0 = pbVar18;
      }
      else {
        local_2f8[(long)local_2f0 * 3 + -2] = local_c8;
        *(undefined4 *)(local_2f8 + (long)local_2f0 * 3 + -1) = pbStack_c0._0_4_;
        *(undefined4 *)((long)local_2f8 + (long)local_2f0 * 0x18 + -4) = local_b8._0_4_;
      }
    }
    else if (local_2f0 == (byte *)0x0) {
      local_2f0 = (byte *)0x0;
      pbVar22 = pbVar40;
    }
    else {
      local_1f0 = (byte *)0x0;
      local_2a8 = (byte *)*puStack_1f8;
      puStack_1f8 = puVar5;
      local_200 = pbVar4;
      if (local_2f0 < pbVar17) {
        pbVar40 = (byte *)((long)pbVar17 * 0x18);
        puVar12 = (undefined8 *)__rustc::__rust_realloc(puVar12,pbVar40,8,(long)local_2f0 * 0x18);
        if (puVar12 == (undefined8 *)0x0) {
                    /* try { // try from 006bda20 to 006bda2b has its CatchHandler @ 006bda34 */
                    /* WARNING: Subroutine does not return */
          alloc::raw_vec::handle_error(8,(long)local_2f0 * 0x18);
        }
      }
      pbVar18 = local_208;
      if (local_208 == local_218) {
                    /* try { // try from 006bd308 to 006bd30f has its CatchHandler @ 006bda44 */
        <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<addr2line::function::InlinedFunctionAddress>>::
        grow_one(&local_218);
      }
      pbVar22 = local_210 + (long)pbVar18 * 0x20;
      *(undefined8 **)pbVar22 = puVar12;
      *(byte **)(pbVar22 + 8) = local_2f0;
      *(byte **)(pbVar22 + 0x10) = local_2a8;
      *(byte **)(pbVar22 + 0x18) = pbVar36;
      pbVar18 = pbVar18 + 1;
      local_2f8 = (undefined8 *)&DAT_00000008;
      local_2f0 = (byte *)0x0;
      pbVar22 = pbVar40;
      local_2a0 = pbVar36;
      local_208 = pbVar18;
    }
    uVar16 = (ulong)local_9e._1_1_;
    if ((local_9e & 0x100) != 0) {
      uVar16 = (ulong)local_e4;
      local_d8 = (byte *)0x0;
      local_d0 = 0;
      local_a0 = 0;
      local_b8 = (byte *)0x0;
      local_b0 = (byte *)0x0;
      pbStack_c0 = (byte *)0x1;
      local_c8 = (byte *)0x1;
      local_9f = local_e4;
      local_9e = 0;
    }
  }
  if ((byte *)0x1 < local_208) {
    if (&DAT_00000014 < local_208) {
      core[188d2c0002da36d0]::slice::sort::stable::driftsort_main::
      <addr2line[5beaa54f6b4a1439]::line::LineSequence,<[addr2line[5beaa54f6b4a1439]::line::LineSequence]>::sort_by_key<u64,<addr2line[5beaa54f6b4a1439]::line::Lines>::parse<gimli[d400ddce60e1bc02]::read::endian_slice::EndianSlice<gimli[d400ddce60e1bc02]::endianity::LittleEndian>>::_closure_1_>::_closure_0_,alloc[cc0d62b833a55794]::vec::Vec<addr2line[5beaa54f6b4a1439]::line::LineSequence>>
                (local_210,local_208,&local_270);
    }
    else {
      FUN_006ca7f4();
    }
  }
  local_78 = (byte *)0x0;
  local_88 = (byte *)0x0;
  local_80 = (ulong *)&DAT_00000008;
  if (local_e8._2_2_ < 5) {
    if (local_1e8 == (long *)0xffffffffffffffff) {
LAB_006bd53c:
                    /* try { // try from 006bd53c to 006bd543 has its CatchHandler @ 006bdaa4 */
      <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<addr2line::function::FunctionAddress>>::grow_one
                (&local_88);
      uVar20 = 0;
      pbVar22 = (byte *)0x0;
      pbVar39 = (byte *)0x1;
      goto LAB_006bd550;
    }
    pplVar11 = &local_1e8;
  }
  else {
    pplVar11 = local_140;
    if (local_138 == (byte *)0x0) goto LAB_006bd53c;
  }
                    /* try { // try from 006bd50c to 006bd51f has its CatchHandler @ 006bdaac */
  FUN_006c5f14(&local_270,param_2,param_3,pplVar11,&local_1e8);
  pbVar22 = local_260;
  pbVar39 = pbStack_268;
  uVar20 = local_270;
  if (local_270 == 0xffffffffffffffff) {
    puVar33 = (ulong *)&DAT_00000008;
    pbVar13 = local_260;
LAB_006bd708:
    pbVar36 = pbVar39;
    if (local_88 != (byte *)0x0) {
      __rustc::__rust_dealloc(puVar33,(long)local_88 * 0x18,8);
    }
LAB_006bd3a4:
    if (local_190 != 0) {
      __rustc::__rust_dealloc(local_188,local_190 << 2,2);
    }
    if (local_178 != 0) {
      __rustc::__rust_dealloc(local_170,local_178 * 0x18,8);
    }
    if (local_160 != 0) {
      __rustc::__rust_dealloc(local_158,local_160 << 2,2);
    }
    if (local_148 != (byte *)0x0) {
      __rustc::__rust_dealloc(local_140,(long)local_148 * 0x58,8);
    }
    if (local_200 != (byte *)0x0) {
      __rustc::__rust_dealloc(puStack_1f8,(long)local_200 * 0x18,8);
    }
    pbVar39 = local_210;
    if (local_208 != (byte *)0x0) {
      pbVar40 = local_210 + 8;
      pbVar22 = local_208;
      do {
        if (*(long *)pbVar40 != 0) {
          __rustc::__rust_dealloc(*(undefined8 *)(pbVar40 + -8),*(long *)pbVar40 * 0x18,8);
        }
        pbVar22 = pbVar22 + -1;
        pbVar40 = pbVar40 + 0x20;
      } while (pbVar22 != (byte *)0x0);
    }
    if (local_218 != (byte *)0x0) {
      __rustc::__rust_dealloc(pbVar39,(long)local_218 << 5,8);
    }
    puVar33 = (ulong *)0x0;
LAB_006bd480:
    if (*param_1 != 1) {
      param_1[2] = (long)pbVar36;
      param_1[3] = (long)pbVar13;
      *param_1 = 1;
      param_1[1] = (long)puVar33;
      param_1[4] = (long)pbVar40;
      return;
    }
    local_1e8 = param_1 + 1;
    puStack_1e0 = puVar33;
    local_1d8 = pbVar36;
    pbStack_1d0 = pbVar13;
    local_1c8 = pbVar40;
    FUN_006c2e14(&local_1e8);
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt(&DAT_0045abca,0x1d,&PTR_s__rustc_48a229ceaefd4985c50990b14_00976a48);
  }
                    /* try { // try from 006bd530 to 006bd537 has its CatchHandler @ 006bdaa8 */
  <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<addr2line::function::FunctionAddress>>::grow_one
            (&local_88);
LAB_006bd550:
  pbVar40 = (byte *)0x0;
  pbVar36 = (byte *)0x1;
  *local_80 = uVar20;
  local_80[1] = (ulong)pbVar39;
  local_80[2] = (ulong)pbVar22;
  lVar10 = 0;
  puVar32 = local_80;
  do {
    puVar33 = local_80;
    local_78 = pbVar36;
    if (local_e8._2_2_ < 5) {
      if (pbVar36 == (byte *)0x0) {
        if (local_1e8 == (long *)0xffffffffffffffff) {
          if (local_88 != (byte *)0x0) goto LAB_006bd7d4;
          goto LAB_006bd7e4;
        }
        pplVar11 = &local_1e8;
      }
      else {
        if (local_138 <= pbVar36 + -1) goto LAB_006bd654;
        pplVar11 = (long **)((long)local_140 + (long)pbVar40);
      }
    }
    else {
      if (local_138 <= pbVar36) {
LAB_006bd654:
        if (pbVar36 < local_88) {
          if (pbVar36 == (byte *)0x0) {
LAB_006bd7d4:
            __rustc::__rust_dealloc(local_80,(long)local_88 * 0x18,8);
            puVar33 = (ulong *)&DAT_00000008;
          }
          else {
            puVar33 = (ulong *)__rustc::__rust_realloc
                                         (local_80,(long)local_88 * 0x18,8,lVar10 + 0x18);
            if (puVar33 == (ulong *)0x0) {
                    /* try { // try from 006bd684 to 006bd68f has its CatchHandler @ 006bda64 */
                    /* WARNING: Subroutine does not return */
              alloc::raw_vec::handle_error(8,lVar10 + 0x18);
            }
          }
        }
LAB_006bd7e4:
        pbVar40 = local_208;
        pbVar13 = local_210;
        if (local_208 < local_218) {
          if (local_208 == (byte *)0x0) {
            __rustc::__rust_dealloc(local_210,(long)local_218 << 5,8);
            pbVar13 = &DAT_00000008;
          }
          else {
            lVar10 = (long)local_208 << 5;
            pbVar13 = (byte *)__rustc::__rust_realloc(local_210,(long)local_218 << 5,8,lVar10);
            if (pbVar13 == (byte *)0x0) {
                    /* try { // try from 006bd818 to 006bd823 has its CatchHandler @ 006bda68 */
                    /* WARNING: Subroutine does not return */
              alloc::raw_vec::handle_error(8,lVar10);
            }
          }
        }
        if (local_190 != 0) {
          __rustc::__rust_dealloc(local_188,local_190 << 2,2);
        }
        if (local_178 != 0) {
          __rustc::__rust_dealloc(local_170,local_178 * 0x18,8);
        }
        if (local_160 != 0) {
          __rustc::__rust_dealloc(local_158,local_160 << 2,2);
        }
        if (local_148 != (byte *)0x0) {
          __rustc::__rust_dealloc(local_140,(long)local_148 * 0x58,8);
        }
        if (local_200 != (byte *)0x0) {
          __rustc::__rust_dealloc(puStack_1f8,(long)local_200 * 0x18,8);
        }
        goto LAB_006bd480;
      }
      pplVar11 = local_140 + (long)pbVar36 * 0xb;
    }
                    /* try { // try from 006bd5e4 to 006bd5f7 has its CatchHandler @ 006bdb2c */
    FUN_006c5f14(&local_270,param_2,param_3,pplVar11,&local_1e8);
    puVar33 = local_80;
    pbVar13 = local_260;
    pbVar39 = pbStack_268;
    uVar20 = local_270;
    if (local_270 == 0xffffffffffffffff) goto LAB_006bd620;
    if (pbVar36 == local_88) {
                    /* try { // try from 006bd614 to 006bd61b has its CatchHandler @ 006bdab0 */
      <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<addr2line::function::FunctionAddress>>::grow_one
                (&local_88);
      puVar32 = local_80;
    }
    pbVar36 = pbVar36 + 1;
    *(ulong *)((long)puVar32 + lVar10 + 0x18) = uVar20;
    *(byte **)((long)puVar32 + lVar10 + 0x20) = pbVar39;
    pbVar40 = pbVar40 + 0x58;
    *(byte **)((long)puVar32 + lVar10 + 0x28) = pbVar13;
    lVar10 = lVar10 + 0x18;
  } while( true );
LAB_006bd354:
  pbVar18 = (byte *)0x0;
  uVar16 = 0;
  uVar19 = 6;
  pbVar13 = pbVar39;
  goto LAB_006bd38c;
LAB_006bd694:
  pbVar22 = local_98 + (long)(pbVar41 + (long)pbVar21) + 2;
LAB_006bd6a0:
  pbVar18 = (byte *)0x0;
  uVar16 = 0;
  uVar19 = 0x13;
  pbVar13 = pbVar22;
  goto LAB_006bd38c;
LAB_006bd6f4:
  pbVar18 = (byte *)0x0;
  uVar16 = 0;
  uVar19 = 6;
  goto LAB_006bd38c;
LAB_006bd374:
  pbVar36 = local_98 + (long)local_90;
LAB_006bd378:
  pbVar18 = (byte *)0x0;
  uVar16 = 0;
LAB_006bd380:
  uVar19 = 0x13;
  pbVar13 = pbVar36;
LAB_006bd38c:
  local_90 = (byte *)0x0;
  local_98 = (byte *)0x1;
  pbVar36 = (byte *)((ulong)uVar19 | ((ulong)pbVar18 & 0xff) << 8 | uVar16 << 0x10);
  goto LAB_006bd3a4;
LAB_006bd620:
  if (pbVar36 != (byte *)0x0) {
    puVar32 = local_80 + 1;
    do {
      if (puVar32[-1] != 0) {
        __rustc::__rust_dealloc(*puVar32,puVar32[-1],1);
      }
      pbVar36 = pbVar36 + -1;
      puVar32 = puVar32 + 3;
    } while (pbVar36 != (byte *)0x0);
  }
  goto LAB_006bd708;
}


// ===== 006bdb74  FUN_006bdb74 =====

void FUN_006bdb74(void)

{
  long extraout_x8;
  
  if ((int)DAT_009a6450 == 0) {
    return;
  }
  FUN_0070f5b8(&DAT_009a6418);
  FUN_0070f320(extraout_x8 + 0x38);
  return;
}


// ===== 006bdbc4  FUN_006bdbc4 =====

void FUN_006bdbc4(void)

{
  long extraout_x8;
  undefined1 local_20 [16];
  
  if ((int)DAT_009a6450 == 0) {
    return;
  }
  FUN_0070f5b8();
  <std::sys::sync::once::futex::[0]::std::sys::sync::once::futex::Once>::call
            (extraout_x8 + 0x38,1,local_20);
  return;
}


// ===== 006bdc28  FUN_006bdc28 =====

void FUN_006bdc28(void)

{
  long extraout_x8;
  
  if ((int)DAT_009a6dd0 == 0) {
    return;
  }
  FUN_0070f5b8(&DAT_009a6da0);
  FUN_0070f320(extraout_x8 + 0x30);
  return;
}


// ===== 006bdc78  FUN_006bdc78 =====

undefined8 FUN_006bdc78(void)

{
  undefined8 uVar1;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 *puStack_28;
  undefined8 *local_8;
  
  local_38 = 0;
  if ((int)DAT_009a6df8 != 0) {
    puStack_28 = &local_38;
    local_30 = 0x9a6dfc;
    local_8 = &local_30;
                    /* try { // try from 006bdcc4 to 006bdcdb has its CatchHandler @ 006bdce0 */
    uVar1 = FUN_0070f5b8();
    <std::sys::sync::once::futex::[0]::std::sys::sync::once::futex::Once>::call(uVar1,1,&local_8);
  }
  return local_38;
}


// ===== 006bdcf8  <core[188d2c0002da36d0]::io::error::Error>::new::<core[188d2c0002da36d0]::num::error::TryFromIntError> =====

/* <core[188d2c0002da36d0]::io::error::Error>::new::<core[188d2c0002da36d0]::num::error::TryFromIntError>
    */

void <core[188d2c0002da36d0]::io::error::Error>::new::
     <core[188d2c0002da36d0]::num::error::TryFromIntError>(undefined4 param_1,undefined1 param_2)

{
  undefined1 *puVar1;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined1 *)__rustc::__rust_alloc(1,1);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = param_2;
    alloc::io::error::custom_owner_from_box(param_1,puVar1,&DAT_00978b20);
    <core::io::error::repr::[0]::core::io::error::repr::Repr>::new_custom();
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(1,1);
}


// ===== 006bdd50  <alloc::io::error::core::io::error::Error>::new<&str> =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::io::error::core::io::error::Error>::new<&str> */

void __rustcall
<alloc::io::error::core::io::error::Error>::new<&str>
          (undefined4 param_1,void *param_2,size_t param_3)

{
  void *__dest;
  size_t *psVar1;
  
  if (param_3 == 0) {
    __dest = (void *)0x1;
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    psVar1 = (size_t *)__rustc::__rust_alloc(0x18,8);
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    __dest = (void *)__rustc::__rust_alloc(param_3,1);
    if (__dest == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(1,param_3);
    }
    memcpy(__dest,param_2,param_3);
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    psVar1 = (size_t *)__rustc::__rust_alloc(0x18,8);
  }
  if (psVar1 != (size_t *)0x0) {
    *psVar1 = param_3;
    psVar1[1] = (size_t)__dest;
    psVar1[2] = param_3;
    alloc::io::error::custom_owner_from_box(param_1,psVar1,&PTR_FUN_00978bb8);
    <core::io::error::repr::[0]::core::io::error::repr::Repr>::new_custom();
    return;
  }
                    /* try { // try from 006bddec to 006bddf7 has its CatchHandler @ 006bde08 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x18);
}


// ===== 006bde28  FUN_006bde28 =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006bde28(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  uint *puVar2;
  uint uVar3;
  __nlink_t _Var4;
  __blkcnt_t _Var5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  char cVar12;
  char cVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined2 uVar36;
  undefined4 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined2 uVar40;
  ushort uVar41;
  byte *******pppppppbVar42;
  byte *******pppppppbVar43;
  byte *******pppppppbVar44;
  byte *******pppppppbVar45;
  code *pcVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  bool bVar50;
  bool bVar51;
  undefined1 uVar52;
  int iVar53;
  byte *******pppppppbVar54;
  byte *******pppppppbVar55;
  long lVar56;
  byte *******pppppppbVar57;
  byte *******extraout_x1;
  __time_t _Var58;
  undefined **ppuVar59;
  byte *******pppppppbVar60;
  undefined1 auVar61 [8];
  byte *******pppppppbVar62;
  undefined4 extraout_w8;
  long extraout_x8;
  long *plVar63;
  long extraout_x8_00;
  byte *******pppppppbVar64;
  byte *******pppppppbVar65;
  long extraout_x8_01;
  byte ******extraout_x8_02;
  byte ******extraout_x8_03;
  byte *****pppppbVar66;
  long extraout_x8_04;
  long extraout_x8_05;
  byte *******pppppppbVar67;
  long extraout_x8_06;
  long extraout_x8_07;
  undefined1 extraout_w9;
  undefined1 extraout_w9_00;
  undefined1 extraout_w9_01;
  undefined1 extraout_w9_02;
  undefined4 extraout_w9_03;
  long extraout_x9;
  long extraout_x9_00;
  byte *******pppppppbVar68;
  char *extraout_x9_01;
  undefined8 *extraout_x9_02;
  undefined8 *extraout_x9_03;
  long extraout_x9_04;
  long extraout_x9_05;
  long extraout_x9_06;
  long extraout_x9_07;
  long lVar69;
  ulong uVar70;
  ulong uVar71;
  long extraout_x10;
  long extraout_x10_00;
  long lVar72;
  ulong uVar73;
  ulong uVar74;
  int iVar75;
  ulong uVar76;
  undefined1 auVar77 [8];
  byte *******pppppppbVar78;
  undefined1 auVar79 [8];
  byte *******pppppppbVar80;
  byte ******ppppppbVar81;
  byte *******unaff_x20;
  byte ******ppppppbVar82;
  byte *******pppppppbVar83;
  byte *******pppppppbVar84;
  byte *******pppppppbVar85;
  byte *******unaff_x22;
  byte *******pppppppbVar86;
  byte *******pppppppbVar87;
  undefined8 uVar88;
  undefined1 unaff_x24 [8];
  byte *******pppppppbVar89;
  byte ******ppppppbVar90;
  long lVar91;
  byte *******pppppppbVar92;
  uint uVar93;
  byte *******unaff_x26;
  long lVar94;
  byte *******unaff_x27;
  uint uVar95;
  byte ******ppppppbVar96;
  long unaff_x29;
  undefined8 uVar97;
  byte *******pppppppbVar98;
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined8 local_1330;
  long local_1328;
  undefined8 local_1320;
  undefined8 uStack_1318;
  undefined8 local_1310;
  undefined8 uStack_1308;
  undefined8 local_1300;
  undefined8 uStack_12f8;
  byte *******local_12f0;
  undefined8 uStack_12e8;
  undefined8 local_12e0;
  byte ******ppppppbStack_12d8;
  undefined8 local_12d0;
  byte ******ppppppbStack_12c8;
  undefined8 local_12c0;
  byte ******ppppppbStack_12b8;
  undefined8 local_12b0;
  undefined8 uStack_12a8;
  undefined8 local_12a0;
  undefined8 uStack_1298;
  undefined8 local_1290;
  undefined8 uStack_1288;
  undefined8 local_1280;
  undefined8 uStack_1278;
  undefined8 local_1270;
  undefined8 uStack_1268;
  undefined8 local_1260;
  undefined8 uStack_1258;
  undefined8 uStack_1248;
  undefined8 local_1240;
  undefined8 uStack_1238;
  long local_1228;
  long local_1220;
  long local_1218;
  byte *******local_1210;
  byte *******local_1208;
  __time_t local_1200;
  long local_11f8;
  byte *******local_11f0;
  byte *******local_11e8;
  byte *******local_11e0;
  byte *******local_11d8;
  byte *******local_11d0;
  byte *******local_11c8;
  byte *******local_11c0;
  byte *******local_11b8;
  byte *******local_11b0;
  byte *******local_11a8;
  byte *******local_11a0;
  byte ******local_1198;
  byte *******local_1190;
  byte *******local_1188;
  byte *******local_1180;
  byte *******local_1170;
  byte *******local_1168;
  byte *******local_1160;
  byte *******local_1158;
  byte *******local_1150;
  byte *******local_1148;
  byte *******local_1140;
  ulong local_1128;
  byte *******local_1118;
  undefined1 local_1110 [24];
  byte *******local_10f8;
  byte *******pppppppbStack_10f0;
  undefined1 local_10e8 [8];
  byte *******pppppppbStack_10e0;
  byte *******local_10d8;
  undefined1 auStack_10d0 [8];
  undefined8 local_10c8;
  undefined1 local_10c0 [16];
  byte *******local_10b0;
  byte *******pppppppbStack_10a8;
  undefined1 local_10a0 [8];
  long local_1098;
  undefined1 local_1090 [16];
  undefined1 local_1080 [16];
  undefined1 local_1070 [8];
  undefined8 local_1068;
  undefined1 local_1060 [8];
  undefined8 local_1058;
  undefined1 local_1050 [8];
  undefined8 local_1048;
  byte *******local_1040;
  byte *******local_1038;
  byte ******local_1030;
  byte *******local_1028;
  undefined1 local_1020 [8];
  undefined8 local_1018;
  byte *******local_1010;
  byte *******local_1008;
  undefined8 local_1000;
  undefined8 uStack_ff8;
  undefined1 local_ff0;
  undefined8 uStack_fe8;
  undefined8 local_fe0;
  undefined8 uStack_fd8;
  undefined8 uStack_fd0;
  undefined8 uStack_fc8;
  undefined8 local_fc0;
  undefined8 uStack_fb8;
  undefined8 uStack_fb0;
  undefined8 uStack_fa8;
  undefined8 local_fa0;
  undefined8 uStack_f98;
  undefined8 uStack_f90;
  undefined8 uStack_f88;
  undefined8 local_f80;
  byte ******ppppppbStack_f78;
  undefined8 local_f70;
  byte ******local_f68;
  undefined8 local_f60;
  byte ******ppppppbStack_f58;
  byte *******local_f50;
  undefined8 uStack_f48;
  undefined8 local_f40;
  undefined8 uStack_f38;
  undefined8 local_f30;
  undefined8 uStack_f28;
  undefined8 local_f20;
  undefined8 uStack_f18;
  byte *******local_7d0;
  byte *******pppppppbStack_7c8;
  byte *******local_7c0;
  byte *******pppppppbStack_7b8;
  byte *******local_7b0;
  byte *******pppppppbStack_7a8;
  undefined8 local_7a0;
  byte *******pppppppbStack_798;
  byte *******local_790;
  byte *******pppppppbStack_788;
  byte *******local_780;
  byte *******pppppppbStack_778;
  byte *******local_770;
  byte *******local_768;
  byte *******local_760;
  byte *******local_758;
  byte *******local_750;
  long local_748;
  __time_t _Stack_740;
  byte *******local_738;
  byte *******pppppppbStack_730;
  long local_728;
  long local_720;
  long local_718;
  long local_710;
  undefined8 local_708;
  undefined8 local_700;
  byte *******local_6f8;
  undefined8 local_6f0;
  byte *******local_6e8;
  byte *******local_6e0;
  byte *******local_6d8;
  byte *******local_6d0;
  byte *******local_6c8;
  byte *******local_6c0;
  byte ******local_6b8;
  byte *******local_6b0;
  byte *******local_6a8;
  byte *******local_6a0;
  byte *******local_698;
  byte *******local_690;
  undefined8 local_688;
  undefined8 uStack_680;
  undefined8 uStack_670;
  undefined8 local_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 local_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 local_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 local_608;
  byte ******ppppppbStack_600;
  undefined8 uStack_5f8;
  byte ******ppppppbStack_5f0;
  undefined8 local_5e8;
  byte ******ppppppbStack_5e0;
  byte *******pppppppbStack_5d8;
  undefined8 uStack_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  byte *******local_598;
  byte *******local_590;
  byte *******local_588;
  byte *******pppppppbStack_580;
  byte *******local_578;
  byte *******pppppppbStack_570;
  byte *******pppppppbStack_568;
  byte *******pppppppbStack_560;
  byte *******local_550 [2];
  byte *******local_540;
  byte *******local_538;
  byte *******local_530;
  byte *******local_528;
  byte *******local_520;
  byte *******local_518;
  byte *******local_510;
  byte *******local_508;
  undefined1 local_500;
  undefined7 uStack_4ff;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_300;
  byte *******pppppppbStack_2f8;
  byte *******local_2f0;
  byte *******pppppppbStack_2e8;
  undefined1 auStack_2e0 [24];
  undefined1 auStack_2c8 [88];
  byte *******local_270;
  byte *******pppppppbStack_268;
  byte *******local_260;
  byte *******pppppppbStack_258;
  byte *******local_250;
  byte *******pppppppbStack_248;
  byte *******local_240;
  byte *******pppppppbStack_238;
  byte *******local_230;
  byte *******pppppppbStack_228;
  byte *******local_220;
  byte *******pppppppbStack_218;
  byte *******local_208;
  byte *******pppppppbStack_200;
  byte *******local_1f8;
  byte *******local_1f0;
  byte *******local_1e8;
  byte *******pppppppbStack_1e0;
  long local_1d8;
  byte *******local_1d0;
  byte *******local_1c8;
  ulong local_1c0;
  byte *******local_1b8;
  byte *******local_190;
  undefined4 local_188;
  undefined3 uStack_184;
  byte *local_180;
  byte *******pppppppbStack_178;
  byte *******local_170;
  byte *******pppppppbStack_168;
  byte *******local_160;
  undefined1 auStack_158 [16];
  undefined4 local_145;
  
  auVar112._8_8_ = local_1148;
  auVar112._0_8_ = local_1158;
  auVar111._8_8_ = local_1148;
  auVar111._0_8_ = local_1158;
  auVar110._8_8_ = local_1148;
  auVar110._0_8_ = local_1158;
  auVar109._8_8_ = local_1148;
  auVar109._0_8_ = local_1158;
  auVar108._8_8_ = local_1148;
  auVar108._0_8_ = local_1158;
  auVar107._8_8_ = local_1148;
  auVar107._0_8_ = local_1158;
  auVar106._8_8_ = local_1148;
  auVar106._0_8_ = local_1158;
  auVar105._8_8_ = local_1148;
  auVar105._0_8_ = local_1158;
  auVar104._8_8_ = local_1148;
  auVar104._0_8_ = local_1158;
  auVar103._8_8_ = local_1148;
  auVar103._0_8_ = local_1158;
  auVar101._8_8_ = local_1148;
  auVar101._0_8_ = local_1158;
  auVar99 = FUN_0070f3b4();
  uVar70 = auVar99._0_8_;
  local_1060 = (undefined1  [8])0x0;
  pppppppbVar80 = (byte *******)0x373000;
  pppppppbVar92 = (byte *******)&DAT_009a6458;
  uVar47 = 0xfffffffffffffffe < DAT_009a6458;
  uVar49 = DAT_009a6458 == 0xffffffffffffffff;
  if ((bool)uVar49) {
    local_1110[0] = (undefined1)(undefined7)DAT_0045bc41;
    local_1110._1_2_ = (undefined2)((uint7)(undefined7)DAT_0045bc41 >> 8);
    local_1110._3_4_ = (undefined4)((uint7)(undefined7)DAT_0045bc41 >> 0x18);
    local_1110[7] = DAT_0045bc41._7_1_;
    local_1110._8_4_ = (undefined4)_UNK_0045bc49;
    local_1110[0xc] = (undefined1)((uint7)_UNK_0045bc49 >> 0x20);
    local_1110._13_2_ = (undefined2)((uint7)_UNK_0045bc49 >> 0x28);
    pppppppbStack_200 = (byte *******)CONCAT26(pppppppbStack_200._6_2_,1);
    local_208 = _s__00373250;
    local_1110[0xf] = 0;
    <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul(local_550,local_1110,0x10);
    FUN_0070f400();
    if ((bool)uVar49) {
      pppppppbVar86 = (byte *******)&PTR_DAT_00977090;
LAB_006bdeec:
      FUN_0070f22c(pppppppbVar86);
      if (((bool)uVar47) && (extraout_x9 != 0)) {
        FUN_0070f21c(extraout_x8 + -1);
        FUN_0070f484();
      }
LAB_006be090:
      unaff_x20 = (byte *******)0xffffffffffffffff;
    }
    else {
      FUN_006ea8b8(&local_300,local_550[1],&local_208);
      uVar47 = (int)local_300 != 0;
      pppppppbVar86 = pppppppbStack_2f8;
      if ((int)local_300 == 1) goto LAB_006bdeec;
      uVar37 = local_300._4_4_;
      local_300 = (byte *******)0x0;
      pppppppbStack_2f8 = (byte *******)0x1;
      *(undefined4 *)(unaff_x29 + -0x78) = uVar37;
      lVar69 = unaff_x29 + -0x78;
      local_2f0 = (byte *******)0x0;
      local_1110[0] = (undefined1)lVar69;
      local_1110._1_2_ = (undefined2)((ulong)lVar69 >> 8);
      local_1110._3_4_ = (undefined4)((ulong)lVar69 >> 0x18);
      local_1110[7] = (undefined1)((ulong)lVar69 >> 0x38);
                    /* try { // try from 006bdf28 to 006bdf37 has its CatchHandler @ 006c0f5c */
      auVar100 = <&std::fs::File_as_std::io::Read>::read_to_string(local_1110,&local_300);
      if (auVar100._0_8_ == 1) {
        if ((1 < (auVar100._8_8_ & 3) - 2) &&
           ((auVar100 & (undefined1  [16])0x3) != (undefined1  [16])0x0)) {
          FUN_0070f21c(auVar100._8_8_ - 1);
          local_1110[0] = extraout_w9;
                    /* try { // try from 006bdf60 to 006bdf63 has its CatchHandler @ 006c0f5c */
          FUN_0070f2b4();
        }
LAB_006bdf64:
        if (local_300 != (byte *******)0x0) {
          FUN_0070f208(pppppppbStack_2f8);
        }
        close(*(int *)(unaff_x29 + -0x78));
        goto LAB_006be090;
      }
      local_550[0] = (byte *******)0x0;
      local_550[1] = (byte *******)&DAT_00000008;
      local_540 = (byte *******)0x0;
      unaff_x27 = local_2f0;
      if (local_2f0 != (byte *******)0x0) {
        local_1118 = (byte *******)&DAT_00000008;
        lVar69 = (long)pppppppbStack_2f8 + (long)local_2f0;
        unaff_x22 = pppppppbStack_2f8;
LAB_006bdfb0:
        unaff_x26 = local_540;
        unaff_x24 = (undefined1  [8])0x0;
        while (uVar49 = *(char *)((long)unaff_x22 + (long)unaff_x24) == '\n', !(bool)uVar49) {
          unaff_x24 = (undefined1  [8])((long)unaff_x24 + 1);
          if ((long)unaff_x22 + (long)unaff_x24 == lVar69) goto LAB_006be068;
        }
                    /* try { // try from 006bdfd4 to 006bdfe3 has its CatchHandler @ 006c0e9c */
        <std::backtrace_rs::symbolize::gimli::parse_running_mmaps::MapsEntry_as_core::str::traits::FromStr>
        ::from_str(local_1110,unaff_x22,unaff_x24);
        FUN_0070f518();
        uVar88 = local_1110._16_8_;
        if (!(bool)uVar49) goto code_r0x006bdfec;
        if (unaff_x26 != (byte *******)0x0) {
          unaff_x22 = local_550[1] + 1;
          do {
            if (unaff_x22[-1] != (byte ******)0x0) {
              FUN_0070f208(*unaff_x22);
            }
            unaff_x26 = (byte *******)((long)unaff_x26 + -1);
            unaff_x22 = unaff_x22 + 6;
          } while (unaff_x26 != (byte *******)0x0);
        }
        if (local_550[0] != (byte *******)0x0) {
          FUN_0070f250((long)local_550[0] * 3);
        }
        goto LAB_006bdf64;
      }
LAB_006be068:
      unaff_x26 = local_540;
      unaff_x22 = local_550[1];
      unaff_x20 = local_550[0];
      if (local_300 != (byte *******)0x0) {
        FUN_0070f208(pppppppbStack_2f8);
      }
      close(*(int *)(unaff_x29 + -0x78));
      if (unaff_x20 == (byte *******)0xffffffffffffffff) goto LAB_006be090;
    }
    local_1110[0] = 0;
    local_1110._1_2_ = 0;
    local_1110._3_4_ = 0;
    local_1110[7] = 0;
    local_1110._8_4_ = 8;
    local_1110[0xc] = 0;
    local_1110._13_2_ = 0;
    local_1110[0xf] = 0;
    local_1110._16_8_ = (byte *******)0x0;
    local_10f8 = unaff_x20;
    pppppppbStack_10f0 = unaff_x22;
    local_10e8 = (undefined1  [8])unaff_x26;
    dl_iterate_phdr(FUN_006f6390,local_1110);
    pppppppbVar64 = pppppppbStack_10f0;
    pppppppbVar86 = local_10f8;
    local_550[1] = (byte *******)
                   CONCAT17(local_1110[0xf],
                            CONCAT25(local_1110._13_2_,CONCAT14(local_1110[0xc],local_1110._8_4_)));
    local_550[0] = (byte *******)
                   CONCAT17(local_1110[7],
                            CONCAT43(local_1110._3_4_,CONCAT21(local_1110._1_2_,local_1110[0])));
    local_540 = (byte *******)local_1110._16_8_;
    if (local_10f8 != (byte *******)0xffffffffffffffff) {
      unaff_x24 = local_10e8;
      if (local_10e8 != (undefined1  [8])0x0) {
        pppppppbVar87 = pppppppbStack_10f0 + 1;
        do {
          if (pppppppbVar87[-1] != (byte ******)0x0) {
            FUN_0070f208(*pppppppbVar87);
          }
          unaff_x24 = (undefined1  [8])((long)unaff_x24 + -1);
          pppppppbVar87 = pppppppbVar87 + 6;
        } while (unaff_x24 != (undefined1  [8])0x0);
      }
      unaff_x20 = pppppppbVar64;
      if (pppppppbVar86 != (byte *******)0x0) {
        FUN_0070f250((long)pppppppbVar86 * 3);
      }
    }
    local_1110._8_4_ = SUB84(local_550[1],0);
    local_1110[0xc] = (undefined1)((ulong)local_550[1] >> 0x20);
    local_1110._13_2_ = (undefined2)((ulong)local_550[1] >> 0x28);
    local_1110[0xf] = (undefined1)((ulong)local_550[1] >> 0x38);
    local_1110[0] = SUB81(local_550[0],0);
    local_1110._1_2_ = (undefined2)((ulong)local_550[0] >> 8);
    local_1110._3_4_ = (undefined4)((ulong)local_550[0] >> 0x18);
    local_1110[7] = (undefined1)((ulong)local_550[0] >> 0x38);
    local_1110._16_8_ = local_540;
    memcpy(&DAT_009a6458,local_1110,0x938);
    DAT_009a6d90 = 0;
  }
  auVar35._8_8_ = auStack_158._8_8_;
  auVar35._0_8_ = auStack_158._0_8_;
  auVar34._8_8_ = auStack_158._8_8_;
  auVar34._0_8_ = auStack_158._0_8_;
  auVar33._8_8_ = local_1018;
  auVar33._0_8_ = local_1020;
  auVar32._8_8_ = local_1018;
  auVar32._0_8_ = local_1020;
  auVar31._8_8_ = local_1048;
  auVar31._0_8_ = local_1050;
  auVar30._8_8_ = local_1048;
  auVar30._0_8_ = local_1050;
  auVar29._8_8_ = local_1058;
  auVar29._0_8_ = local_1060;
  auVar28._8_8_ = local_1058;
  auVar28._0_8_ = local_1060;
  auVar27._8_8_ = local_1068;
  auVar27._0_8_ = local_1070;
  auVar26._8_8_ = local_1068;
  auVar26._0_8_ = local_1070;
  auVar25._8_8_ = local_1080._8_8_;
  auVar25._0_8_ = local_1080._0_8_;
  auVar24._8_8_ = local_1080._8_8_;
  auVar24._0_8_ = local_1080._0_8_;
  auVar23._8_8_ = local_1090._8_8_;
  auVar23._0_8_ = local_1090._0_8_;
  auVar22._8_8_ = local_1090._8_8_;
  auVar22._0_8_ = local_1090._0_8_;
  auVar21._8_8_ = local_1098;
  auVar21._0_8_ = local_10a0;
  auVar20._8_8_ = local_1098;
  auVar20._0_8_ = local_10a0;
  auVar19._8_8_ = local_10c0._8_8_;
  auVar19._0_8_ = local_10c0._0_8_;
  auVar18._8_8_ = local_10c0._8_8_;
  auVar18._0_8_ = local_10c0._0_8_;
  auVar17._8_8_ = local_10c8;
  auVar17._0_8_ = auStack_10d0;
  auVar16._8_8_ = local_10c8;
  auVar16._0_8_ = auStack_10d0;
  auVar15._8_8_ = pppppppbStack_10e0;
  auVar15._0_8_ = local_10e8;
  auVar100._8_8_ = pppppppbStack_10e0;
  auVar100._0_8_ = local_10e8;
  if (DAT_009a6468 != (byte *******)0x0) {
    pppppppbVar86 = (byte *******)0x0;
    lVar69 = DAT_009a6460;
    do {
      puVar1 = (undefined8 *)(lVar69 + 0x30);
      plVar63 = (long *)(lVar69 + 0x38);
      lVar91 = *(long *)(lVar69 + 0x40);
      lVar69 = lVar69 + 0x48;
      lVar72 = *plVar63 << 4;
      plVar63 = (long *)*puVar1;
      while (lVar72 != 0) {
        plVar9 = plVar63 + 1;
        lVar72 = lVar72 + -0x10;
        uVar76 = *plVar63 + lVar91;
        plVar63 = plVar63 + 2;
        if (uVar76 <= uVar70 && uVar70 < uVar76 + *plVar9) {
          if (4 < DAT_009a6d90) {
            ppuVar59 = &PTR_s__rustc_48a229ceaefd4985c50990b14_00977b20;
            uVar76 = DAT_009a6d90;
            goto LAB_006bfef0;
          }
          if (DAT_009a6d90 == 0) goto LAB_006be1e8;
          lVar69 = 0;
          uVar76 = 0;
          goto LAB_006be1c8;
        }
      }
      pppppppbVar86 = (byte *******)((long)pppppppbVar86 + 1);
      _local_10e8 = auVar15;
      _auStack_10d0 = auVar17;
      local_10c0 = auVar19;
      _local_10a0 = auVar21;
      local_1090 = auVar23;
      local_1080 = auVar25;
      _local_1070 = auVar27;
      _local_1060 = auVar29;
      _local_1050 = auVar31;
      _local_1020 = auVar33;
      auStack_158 = auVar35;
    } while (lVar69 != DAT_009a6460 + (long)DAT_009a6468 * 0x48);
  }
  goto LAB_006bfda4;
code_r0x006bdfec:
  ppppppbVar96 = (byte ******)
                 CONCAT17(local_1110[0xf],
                          CONCAT25(local_1110._13_2_,CONCAT14(local_1110[0xc],local_1110._8_4_)));
  pppppppbStack_798 = pppppppbStack_10f0;
  local_7a0 = local_10f8;
  local_790 = (byte *******)local_10e8;
  if (unaff_x26 == local_550[0]) {
                    /* try { // try from 006be010 to 006be017 has its CatchHandler @ 006c0e84 */
    <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<std::backtrace_rs::symbolize::gimli::parse_running_mmaps::MapsEntry>>
    ::grow_one(local_550);
    local_1118 = local_550[1];
  }
  pppppppbVar86 = local_1118 + (long)unaff_x26 * 6;
  local_540 = (byte *******)((long)unaff_x26 + 1);
  lVar69 = (long)unaff_x22 + (long)unaff_x27;
  unaff_x27 = (byte *******)((long)unaff_x27 + (-1 - (long)unaff_x24));
  unaff_x22 = (byte *******)((long)unaff_x22 + (long)unaff_x24 + 1);
  *pppppppbVar86 = (byte ******)unaff_x20;
  pppppppbVar86[1] = ppppppbVar96;
  pppppppbVar86[2] = (byte ******)uVar88;
  pppppppbVar86[5] = (byte ******)local_790;
  pppppppbVar86[4] = (byte ******)pppppppbStack_798;
  pppppppbVar86[3] = (byte ******)local_7a0;
  if (unaff_x27 == (byte *******)0x0) goto LAB_006be068;
  goto LAB_006bdfb0;
LAB_006be1c8:
  if (*(byte ********)((long)&DAT_009a6470 + lVar69) != pppppppbVar86) goto code_r0x006be1d8;
  _local_10e8 = auVar100;
  _auStack_10d0 = auVar16;
  local_10c0 = auVar18;
  _local_10a0 = auVar20;
  local_1090 = auVar22;
  local_1080 = auVar24;
  _local_1070 = auVar26;
  _local_1060 = auVar28;
  _local_1050 = auVar30;
  _local_1020 = auVar32;
  auStack_158 = auVar34;
  if (uVar76 < DAT_009a6d90) {
    lVar72 = lVar69 + 0x248;
    memcpy(local_550,(void *)((long)&DAT_009a6470 + lVar69),0x248);
    do {
      auVar101 = FUN_0070f56c();
      memcpy(auVar101._0_8_,auVar101._8_8_,0x248);
      FUN_0070f394();
      FUN_0070f364();
      lVar72 = lVar72 + -0x248;
      uVar76 = DAT_009a6d90;
    } while (lVar72 != 0);
    goto LAB_006bea5c;
  }
  goto LAB_006bfda4;
code_r0x006be1d8:
  lVar69 = lVar69 + 0x248;
  uVar76 = uVar76 + 1;
  if (DAT_009a6d90 * 0x248 - lVar69 == 0) goto LAB_006be1e8;
  goto LAB_006be1c8;
LAB_006be1e8:
  if (DAT_009a6468 <= pppppppbVar86) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_bounds_check
              (pppppppbVar86,DAT_009a6468,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977768);
  }
  plVar63 = (long *)(DAT_009a6460 + (long)pppppppbVar86 * 0x48);
  pppppppbVar64 = (byte *******)plVar63[3];
  pppppppbVar87 = (byte *******)plVar63[4];
  uVar49 = *plVar63 == 1 && pppppppbVar87 == (byte *******)&DAT_00000002;
  if (*plVar63 == 1 && (byte *******)0x1 < pppppppbVar87) {
    unaff_x24 = (undefined1  [8])plVar63[1];
    pppppppbVar92 = (byte *******)0x0;
    do {
      if (*(short *)((long)pppppppbVar64 + (long)pppppppbVar92) == 0x2f21) {
        if (pppppppbVar87 < pppppppbVar92) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_fmt
                    (&DAT_0045b053,0x13,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977ed0);
        }
        uVar49 = pppppppbVar92 == (byte *******)0x17f;
        local_208 = (byte *******)&local_300;
        pppppppbStack_2f8 = (byte *******)CONCAT26(pppppppbStack_2f8._6_2_,1);
        local_300 = _s__00373250;
        if (pppppppbVar92 < (byte *******)0x180) {
          memcpy(local_1110,pppppppbVar64,(size_t)pppppppbVar92);
          *(undefined1 *)((long)local_1110 + (long)pppppppbVar92) = 0;
          <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul
                    (local_550,local_1110,(long)pppppppbVar92 + 1);
          FUN_0070f400();
          pppppppbVar65 = (byte *******)local_1110;
          if ((bool)uVar49) {
            pppppppbStack_798 = (byte *******)&PTR_DAT_00977090;
            local_7a0 = (byte *******)CONCAT44(local_7a0._4_4_,1);
          }
          else {
            FUN_006ea8b8(&local_7a0,local_550[1],&local_300);
          }
        }
        else {
          FUN_006c94c0(&local_7a0,pppppppbVar64,pppppppbVar92,&local_208,FUN_006d0e6c);
          pppppppbVar65 = pppppppbVar80;
        }
        bVar50 = (uint)local_7a0 != 0;
        uVar49 = (uint)local_7a0 == 1;
        if ((bool)uVar49) {
          FUN_0070f22c(pppppppbStack_798);
          pppppppbVar80 = pppppppbVar65;
          if ((bVar50) && (extraout_x9_00 != 0)) {
            FUN_0070f21c(extraout_x8_00 + -1);
            FUN_0070f484();
          }
        }
        else {
          uVar93 = local_7a0._4_4_;
          pppppppbVar92 = (byte *******)(ulong)local_7a0._4_4_;
          local_1110._8_4_ = 0;
          local_1110[0xc] = 0;
          local_1110._13_2_ = 0;
          local_1110[0xf] = 0;
          local_1110[0] = 0;
          local_1110._1_2_ = 0;
          local_1110._3_4_ = 0;
          local_1110[7] = 0;
          local_10f8 = (byte *******)0x0;
          local_1110._16_8_ = (byte *******)0x0;
          local_10e8 = (undefined1  [8])0x0;
          pppppppbStack_10f0 = (byte *******)0x0;
          local_10d8 = (byte *******)0x0;
          pppppppbStack_10e0 = (byte *******)0x0;
          local_10c8 = (byte *******)0x0;
          auStack_10d0 = (undefined1  [8])0x0;
          local_10c0._8_8_ = 0;
          local_10c0._0_8_ = 0;
          pppppppbStack_10a8 = (byte *******)0x0;
          local_10b0 = (byte *******)0x0;
          local_1098 = 0;
          local_10a0 = (undefined1  [8])0x0;
          iVar53 = fstat(local_7a0._4_4_,(stat *)local_1110);
          uVar49 = iVar53 == -1;
          if ((bool)uVar49) {
            __errno();
            uVar49 = *(undefined ***)PTR_PTR_0099f738 == &PTR_FUN_00977078;
            if (!(bool)uVar49) {
                    /* try { // try from 006be70c to 006be717 has its CatchHandler @ 006c0da0 */
              core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00977078);
            }
          }
          else if (-1 < (long)unaff_x24) {
            pppppppbVar65 = (byte *******)((long)pppppppbStack_10e0 - (long)unaff_x24);
            pppppppbVar54 =
                 (byte *******)mmap((void *)0x0,(size_t)pppppppbVar65,1,2,uVar93,(__off_t)unaff_x24)
            ;
            uVar49 = pppppppbVar54 == (byte *******)0xffffffffffffffff;
            if (!(bool)uVar49) {
              local_208 = (byte *******)0x0;
              pppppppbStack_200 = (byte *******)&DAT_00000008;
              local_1f0 = (byte *******)0x0;
              local_1f8 = (byte *******)0x0;
              local_1e8 = (byte *******)&DAT_00000008;
              pppppppbStack_1e0 = (byte *******)0x0;
                    /* try { // try from 006be4c4 to 006be4df has its CatchHandler @ 006c0e70 */
              FUN_006e52f0(&local_300,pppppppbVar54,pppppppbVar65);
              uVar49 = local_300 == (byte *******)0xffffffffffffffff;
              if (!(bool)uVar49) {
                memcpy(&local_7a0,&local_300,0x78);
                local_550[0] = (byte *******)0xffffffffffffffff;
                    /* try { // try from 006be508 to 006be523 has its CatchHandler @ 006c0e70 */
                FUN_006e2250(local_1110,&local_208,&local_7a0,local_550,local_550);
                FUN_0070f518();
                pppppppbVar98 = local_f50;
                ppppppbVar82 = ppppppbStack_f58;
                ppppppbVar81 = local_f68;
                ppppppbVar96 = ppppppbStack_f78;
                uVar97 = uStack_ff8;
                pppppppbVar78 = local_1008;
                pppppppbVar89 = local_1010;
                unaff_x27 = local_1018;
                uVar88 = local_1080._0_8_;
                lVar56 = local_1090._8_8_;
                lVar94 = local_1090._0_8_;
                lVar72 = local_1098;
                auVar61 = local_10a0;
                pppppppbVar60 = pppppppbStack_10a8;
                pppppppbVar57 = local_10b0;
                _Var58 = local_10c0._8_8_;
                lVar69 = local_10c0._0_8_;
                pppppppbVar55 = local_10c8;
                auVar79 = auStack_10d0;
                pppppppbVar83 = local_10d8;
                pppppppbVar68 = pppppppbStack_10e0;
                auVar77 = local_10e8;
                pppppppbVar85 = pppppppbStack_10f0;
                pppppppbVar62 = local_10f8;
                pppppppbVar80 = (byte *******)local_1110._16_8_;
                if (!(bool)uVar49) {
                  local_11d0 = (byte *******)
                               CONCAT17(local_1110[0xf],
                                        CONCAT25(local_1110._13_2_,
                                                 CONCAT14(local_1110[0xc],local_1110._8_4_)));
                  auVar14._8_8_ = local_1080._8_8_;
                  auVar14._0_8_ = local_1068;
                  local_1150 = (byte *******)local_1070;
                  local_1168 = local_1058;
                  local_1160 = (byte *******)local_1060;
                  local_1170 = (byte *******)local_1050;
                  local_1188 = local_1040;
                  local_1180 = local_1048;
                  local_1198 = local_1030;
                  local_1190 = local_1038;
                  local_11a8 = (byte *******)local_1020;
                  local_11a0 = local_1028;
                  pppppppbStack_7c8 = pppppppbStack_200;
                  local_7d0 = local_208;
                  pppppppbStack_7b8 = local_1f0;
                  local_7c0 = local_1f8;
                  pppppppbStack_7a8 = pppppppbStack_1e0;
                  local_7b0 = local_1e8;
                  close(uVar93);
                  local_1240 = local_1000;
                  uStack_1248 = uStack_fe8;
                  local_1260 = local_fe0;
                  uStack_1258 = uStack_fd8;
                  local_1270 = uStack_fd0;
                  uStack_1268 = uStack_fc8;
                  local_1280 = local_fc0;
                  uStack_1278 = uStack_fb8;
                  local_1290 = uStack_fb0;
                  uStack_1288 = uStack_fa8;
                  local_12a0 = local_fa0;
                  uStack_1298 = uStack_f98;
                  local_12b0 = uStack_f90;
                  uStack_12a8 = uStack_f88;
                  local_12c0 = local_f80;
                  local_12d0 = local_f70;
                  local_12e0 = local_f60;
                  uStack_12e8 = uStack_f48;
                  local_1300 = local_f40;
                  uStack_12f8 = uStack_f38;
                  local_1310 = local_f30;
                  uStack_1308 = uStack_f28;
                  local_1320 = local_f20;
                  uStack_1318 = uStack_f18;
                  goto LAB_006be8dc;
                }
              }
              FUN_0070f4a8();
              FUN_0070f294();
            }
          }
          close(uVar93);
          pppppppbVar80 = pppppppbVar65;
        }
        break;
      }
      pppppppbVar92 = (byte *******)((long)pppppppbVar92 + 1);
      uVar49 = (byte *******)((long)pppppppbVar87 + -1) == pppppppbVar92;
    } while (!(bool)uVar49);
  }
  FUN_006f445c(local_1110,pppppppbVar64,pppppppbVar87);
  FUN_0070f5a0();
  pppppppbVar65 = (byte *******)local_1110._16_8_;
  if (!(bool)uVar49) goto LAB_006bfda4;
  pppppppbVar54 =
       (byte *******)
       CONCAT17(local_1110[0xf],
                CONCAT25(local_1110._13_2_,CONCAT14(local_1110[0xc],local_1110._8_4_)));
  local_270 = (byte *******)0x0;
  pppppppbStack_268 = (byte *******)&DAT_00000008;
  pppppppbStack_258 = (byte *******)0x0;
  local_260 = (byte *******)0x0;
  local_250 = (byte *******)&DAT_00000008;
  pppppppbStack_248 = (byte *******)0x0;
                    /* try { // try from 006be250 to 006be25f has its CatchHandler @ 006c0f9c */
  uVar76 = FUN_006e52f0(local_1110);
  uVar49 = CONCAT17(local_1110[7],
                    CONCAT43(local_1110._3_4_,CONCAT21(local_1110._1_2_,local_1110[0]))) == -1;
  unaff_x27 = pppppppbVar87;
  pppppppbVar78 = pppppppbVar64;
  auVar14 = auVar112;
  if (!(bool)uVar49) {
    memcpy(&local_208,local_1110,0x78);
    FUN_006e5c78(&local_208);
    auVar14 = auVar101;
    if ((local_1d8 != 0) &&
       (unaff_x27 = local_1d0, auVar14 = auVar103, local_1d0 != (byte *******)0x0)) {
      unaff_x24 = (undefined1  [8])(local_1d8 << 6);
      pppppppbVar62 = (byte *******)&DAT_0045b627;
      pppppppbVar80 = pppppppbStack_1e0 + 4;
      do {
        pppppppbVar78 = local_1c8;
        unaff_x20 = local_1b8;
        pppppppbVar92 = pppppppbVar62;
        if (!CARRY8(local_1c0,(ulong)*(uint *)(pppppppbVar80 + -4))) {
                    /* try { // try from 006be2d0 to 006be2e3 has its CatchHandler @ 006c0fa8 */
          auVar101 = <&[u8]as_object::read::read_ref::ReadRef>::read_bytes_at_until
                               (local_1d0,local_1c8,local_1c0 + *(uint *)(pppppppbVar80 + -4),
                                local_1b8,0);
          if (((auVar101._0_8_ != (void *)0x0) && (auVar101._8_8_ == 0xe)) &&
             (iVar53 = memcmp(auVar101._0_8_,&DAT_0045b627,0xe), iVar53 == 0)) {
            uVar49 = *(int *)((long)pppppppbVar80 + -0x1c) == 8;
            auVar14 = auVar104;
            if ((!(bool)uVar49) &&
               (pppppppbVar85 = (byte *******)*pppppppbVar80,
               pppppppbVar92 = (byte *******)&DAT_0045b627, auVar14 = auVar105,
               pppppppbVar85 != (byte *******)0x0)) {
              pppppppbVar68 = (byte *******)pppppppbVar80[-1];
              uVar49 = pppppppbVar68 <= local_1e8 &&
                       pppppppbVar85 == (byte *******)((long)local_1e8 - (long)pppppppbVar68);
              auVar14 = auVar106;
              if (pppppppbVar68 <= local_1e8 &&
                  pppppppbVar85 <= (byte *******)((long)local_1e8 - (long)pppppppbVar68)) {
                unaff_x27 = (byte *******)0x0;
                pppppppbVar78 = (byte *******)((long)local_1f0 + (long)pppppppbVar68);
                goto LAB_006be6d4;
              }
            }
            break;
          }
        }
        unaff_x24 = (undefined1  [8])((long)unaff_x24 + -0x40);
        uVar49 = unaff_x24 == (undefined1  [8])0x0;
        pppppppbVar80 = pppppppbVar80 + 8;
        auVar14 = auVar112;
      } while (!(bool)uVar49);
    }
    goto LAB_006be748;
  }
  goto LAB_006be87c;
  while( true ) {
    unaff_x27 = (byte *******)((long)unaff_x27 + 1);
    uVar49 = pppppppbVar85 == unaff_x27;
    auVar14 = auVar111;
    if ((bool)uVar49) break;
LAB_006be6d4:
    if (*(char *)((long)pppppppbVar78 + (long)unaff_x27) == '\0') {
      pppppppbVar68 = (byte *******)(((ulong)unaff_x27 & 0xfffffffffffffffc) + 8);
      bVar50 = (byte *******)(((ulong)unaff_x27 & 0xfffffffffffffffc) + 4) <= pppppppbVar68;
      uVar49 = bVar50 && pppppppbVar68 == pppppppbVar85;
      auVar14 = auVar107;
      if (!bVar50 || pppppppbVar85 < pppppppbVar68) break;
      uVar49 = pppppppbVar87 == (byte *******)0x17f;
      if (pppppppbVar87 < (byte *******)0x180) {
        pppppppbVar80 = (byte *******)local_1110;
        memcpy(local_1110,pppppppbVar64,(size_t)pppppppbVar87);
        *(undefined1 *)((long)pppppppbVar80 + (long)pppppppbVar87) = 0;
                    /* try { // try from 006bfe40 to 006bfe4f has its CatchHandler @ 006c0f90 */
        <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul
                  (local_550,local_1110,(long)pppppppbVar87 + 1);
        FUN_0070f400();
        if ((bool)uVar49) {
          pppppppbStack_798 = (byte *******)&PTR_DAT_00977090;
          local_7a0 = (byte *******)0xffffffffffffffff;
        }
        else {
                    /* try { // try from 006bfe88 to 006bfe8f has its CatchHandler @ 006c0f90 */
          FUN_006f4bc0(&local_7a0,local_550[1]);
        }
      }
      else {
                    /* try { // try from 006c0804 to 006c081b has its CatchHandler @ 006c0f90 */
        FUN_006c9404(&local_7a0,pppppppbVar64,pppppppbVar87,FUN_0070eb54);
      }
      pppppppbVar68 = local_790;
      unaff_x24 = (undefined1  [8])pppppppbStack_798;
      pppppppbVar85 = local_7a0;
      if (local_7a0 == (byte *******)0xffffffffffffffff) {
        uVar76 = ((ulong)pppppppbStack_798 & 3) - 2;
        uVar49 = uVar76 == 2;
        unaff_x20 = pppppppbVar87;
        auVar14 = auVar108;
        if ((1 < uVar76) && (auVar14 = auVar109, ((ulong)pppppppbStack_798 & 3) != 0)) {
          FUN_0070f21c((long)pppppppbStack_798 + -1);
          local_1110[0] = extraout_w9_00;
                    /* try { // try from 006bfed8 to 006bfedb has its CatchHandler @ 006c0f90 */
          FUN_0070f2b4();
          auVar14 = auVar110;
        }
        break;
      }
      if (local_790 == (byte *******)0x0) {
        bVar50 = false;
      }
      else {
        bVar50 = *(char *)pppppppbStack_798 == '/';
      }
      local_1110[0] = SUB81(pppppppbStack_798,0);
      uVar49 = local_1110[0];
      local_1110._1_2_ = (undefined2)((ulong)pppppppbStack_798 >> 8);
      uVar36 = local_1110._1_2_;
      local_1110._3_4_ = (undefined4)((ulong)pppppppbStack_798 >> 0x18);
      uVar37 = local_1110._3_4_;
      local_1110[7] = (undefined1)((ulong)pppppppbStack_798 >> 0x38);
      uVar47 = local_1110[7];
      local_1110._8_4_ = SUB84(local_790,0);
      uVar11 = local_1110._8_4_;
      local_1110[0xc] = (undefined1)((ulong)local_790 >> 0x20);
      uVar38 = local_1110[0xc];
      local_1110._13_2_ = (undefined2)((ulong)local_790 >> 0x28);
      uVar40 = local_1110._13_2_;
      local_1110[0xf] = (undefined1)((ulong)local_790 >> 0x38);
      uVar39 = local_1110[0xf];
      local_1110[0x10] = 0xff;
      local_10d8 = (byte *******)CONCAT62(CONCAT51(local_10d8._3_5_,bVar50),0x201);
                    /* try { // try from 006bff18 to 006bff5f has its CatchHandler @ 006c0ff8 */
      <std::path::Components_as_core::iter::traits::double_ended::DoubleEndedIterator>::next_back
                (local_550,local_1110);
      if ((byte)local_550[0] - 7 < 0xf8) {
        auVar114 = <std::path::[8]::std::path::Components>::as_path(local_1110);
        local_1148 = auVar114._8_8_;
        pppppppbVar92 = auVar114._0_8_;
        if (pppppppbVar92 == (byte *******)0x0) goto LAB_006bff64;
        pppppppbVar80 = (byte *******)((long)local_1148 + (long)unaff_x27 + 0x10);
        if ((long)pppppppbVar80 < 0) {
          uVar88 = 0;
LAB_006bff58:
          FUN_0070f4d8(uVar88);
          goto LAB_006c0d50;
        }
        if (pppppppbVar80 == (byte *******)0x0) {
          pppppppbVar62 = (byte *******)0x1;
        }
        else {
          __rustc::__rust_no_alloc_shim_is_unstable_v2();
          uVar88 = 1;
          pppppppbVar62 = (byte *******)__rustc::__rust_alloc(pppppppbVar80,1);
          if (pppppppbVar62 == (byte *******)0x0) goto LAB_006bff58;
        }
        local_790 = (byte *******)0x0;
        local_7a0 = pppppppbVar80;
        pppppppbStack_798 = pppppppbVar62;
        if (local_1148 == (byte *******)0x0) {
          pppppppbVar80 = (byte *******)0x0;
        }
        else {
          if (pppppppbVar80 < local_1148) {
                    /* try { // try from 006c0c40 to 006c0c6b has its CatchHandler @ 006c0e10 */
            FUN_0070f194(&local_7a0,0,local_1148);
          }
          pppppppbVar80 = local_790;
          memcpy((void *)((long)pppppppbStack_798 + (long)local_790),pppppppbVar92,
                 (size_t)local_1148);
        }
        local_790 = (byte *******)((long)local_1148 + (long)pppppppbVar80);
        if (local_790 == (byte *******)0x0) {
          bVar50 = false;
        }
        else {
          bVar50 = *(char *)((long)pppppppbStack_798 + (long)local_790 + -1) != '/';
        }
        if ((unaff_x27 == (byte *******)0x0) || (*(char *)pppppppbVar78 != '/')) {
          if (bVar50) {
            if (local_7a0 == local_790) {
                    /* try { // try from 006c0c94 to 006c0cdb has its CatchHandler @ 006c0e10 */
              FUN_0070f194(&local_7a0,local_790,1);
            }
            *(undefined1 *)((long)pppppppbStack_798 + (long)local_790) = 0x2f;
            local_790 = (byte *******)((long)local_790 + 1);
          }
          if ((byte *******)((long)local_7a0 - (long)local_790) < unaff_x27) goto LAB_006c0bdc;
          pppppppbVar83 = pppppppbStack_798;
          if (unaff_x27 != (byte *******)0x0) goto LAB_006c01f0;
        }
        else {
          local_790 = (byte *******)0x0;
          if (local_7a0 < unaff_x27) {
LAB_006c0bdc:
                    /* try { // try from 006c0bdc to 006c0beb has its CatchHandler @ 006c0e10 */
            FUN_0070f194(&local_7a0,local_790,unaff_x27);
          }
LAB_006c01f0:
          pppppppbVar80 = local_790;
          pppppppbVar83 = pppppppbStack_798;
          memcpy((void *)((long)pppppppbStack_798 + (long)local_790),pppppppbVar78,(size_t)unaff_x27
                );
          local_790 = pppppppbVar80;
        }
        uVar48 = CARRY8((ulong)local_790,(ulong)unaff_x27);
        pppppppbVar62 = (byte *******)((long)local_790 + (long)unaff_x27);
        uVar52 = pppppppbVar62 == (byte *******)0x0;
        if ((bool)uVar52) {
          bVar50 = false;
        }
        else {
          uVar48 = 0x2e < *(byte *)pppppppbVar83;
          uVar52 = *(byte *)pppppppbVar83 == 0x2f;
          bVar50 = (bool)uVar52;
        }
        local_540 = (byte *******)CONCAT71(local_540._1_7_,0xff);
        local_518 = (byte *******)CONCAT62(CONCAT51(local_518._3_5_,bVar50),0x201);
        if (pppppppbVar68 == (byte *******)0x0) {
          bVar50 = false;
        }
        else {
          uVar48 = 0x2e < *(byte *)unaff_x24;
          uVar52 = *(byte *)unaff_x24 == 0x2f;
          bVar50 = (bool)uVar52;
        }
        local_1110[0x10] = 0xff;
        local_10d8 = (byte *******)CONCAT62(CONCAT51(local_10d8._3_5_,bVar50),0x201);
                    /* try { // try from 006c027c to 006c0287 has its CatchHandler @ 006c0e10 */
        local_1110[0] = uVar49;
        local_1110._1_2_ = uVar36;
        local_1110._3_4_ = uVar37;
        local_1110[7] = uVar47;
        local_1110._8_4_ = uVar11;
        local_1110[0xc] = uVar38;
        local_1110._13_2_ = uVar40;
        local_1110[0xf] = uVar39;
        local_790 = pppppppbVar62;
        local_550[0] = pppppppbVar83;
        local_550[1] = pppppppbVar62;
        uVar76 = FUN_0070b03c(local_550,local_1110);
        local_1158 = pppppppbVar92;
        if ((uVar76 & 1) == 0) {
                    /* try { // try from 006c02c0 to 006c02cf has its CatchHandler @ 006c0e10 */
          std::sys::fs::metadata(local_1110,pppppppbVar83,pppppppbVar62);
          FUN_0070f5a0();
          if ((bool)uVar52) {
            FUN_0070f22c(CONCAT17(local_1110[0xf],
                                  CONCAT25(local_1110._13_2_,
                                           CONCAT14(local_1110[0xc],local_1110._8_4_))));
            if (((bool)uVar48) && (extraout_x9_04 != 0)) {
              FUN_0070f21c(extraout_x8_04 + -1);
              local_1110[0] = extraout_w9_01;
                    /* try { // try from 006c02f4 to 006c02f7 has its CatchHandler @ 006c0e10 */
              FUN_0070f2b4();
            }
            goto LAB_006c028c;
          }
          FUN_0070f524((ulong)local_10f8 & 0xffffffff);
          pppppppbVar68 = local_7a0;
          if (!(bool)uVar52) goto LAB_006c028c;
          goto LAB_006bff6c;
        }
LAB_006c028c:
        local_790 = (byte *******)0x0;
        if (local_1148 == (byte *******)0x0) {
          pppppppbVar80 = (byte *******)0x0;
        }
        else {
          if (local_7a0 < local_1148) {
            FUN_0070f194(&local_7a0,0,local_1148);
            pppppppbVar83 = pppppppbStack_798;
          }
          pppppppbVar80 = local_790;
          memcpy((undefined1 *)((long)pppppppbVar83 + (long)local_790),pppppppbVar92,
                 (size_t)local_1148);
        }
        local_790 = (byte *******)((long)local_1148 + (long)pppppppbVar80);
        if ((local_790 != (byte *******)0x0) &&
           (*(char *)((long)pppppppbStack_798 + (long)local_790 + -1) != '/')) {
          if (local_7a0 == local_790) {
            FUN_0070f194(&local_7a0,local_790,1);
          }
          *(undefined1 *)((long)pppppppbStack_798 + (long)local_790) = 0x2f;
          local_790 = (byte *******)((long)local_790 + 1);
        }
        if ((ulong)((long)local_7a0 - (long)local_790) < 6) {
                    /* try { // try from 006c0c04 to 006c0c27 has its CatchHandler @ 006c0e10 */
          FUN_0070f194(&local_7a0,local_790,6);
        }
        pppppppbVar80 = (byte *******)((long)local_790 + 6);
        *(undefined2 *)((undefined4 *)((long)pppppppbStack_798 + (long)local_790) + 1) = 0x6775;
        *(undefined4 *)((long)pppppppbStack_798 + (long)local_790) = 0x6265642e;
        if ((unaff_x27 == (byte *******)0x0) || (*(char *)pppppppbVar78 != '/')) {
          if (*(char *)((long)pppppppbStack_798 + (long)pppppppbVar80 + -1) != '/') {
            local_790 = pppppppbVar80;
            if (local_7a0 == pppppppbVar80) {
              FUN_0070f194(&local_7a0,pppppppbVar80,1);
            }
            *(undefined1 *)((long)pppppppbStack_798 + (long)local_790) = 0x2f;
            pppppppbVar80 = (byte *******)((long)local_790 + 1);
          }
          uVar47 = (byte *******)((long)local_7a0 - (long)pppppppbVar80) <= unaff_x27;
          uVar49 = unaff_x27 == (byte *******)((long)local_7a0 - (long)pppppppbVar80);
          local_790 = pppppppbVar80;
          if ((bool)uVar47 && !(bool)uVar49) goto LAB_006c0c18;
          if (unaff_x27 != (byte *******)0x0) goto LAB_006c03e0;
        }
        else {
          uVar47 = local_7a0 <= unaff_x27;
          uVar49 = unaff_x27 == local_7a0;
          local_790 = (byte *******)0x0;
          if ((bool)uVar47 && !(bool)uVar49) {
LAB_006c0c18:
            FUN_0070f194(&local_7a0,local_790,unaff_x27);
          }
LAB_006c03e0:
          pppppppbVar80 = local_790;
          memcpy((void *)((long)pppppppbStack_798 + (long)local_790),pppppppbVar78,(size_t)unaff_x27
                );
        }
        pppppppbVar83 = pppppppbStack_798;
        pppppppbVar62 = (byte *******)((long)pppppppbVar80 + (long)unaff_x27);
                    /* try { // try from 006c03fc to 006c040b has its CatchHandler @ 006c0e10 */
        local_790 = pppppppbVar62;
        std::sys::fs::metadata(local_1110);
        uVar88 = FUN_0070f5a0();
        if ((bool)uVar49) {
          FUN_0070f22c(CONCAT17(local_1110[0xf],
                                CONCAT25(local_1110._13_2_,
                                         CONCAT14(local_1110[0xc],local_1110._8_4_))));
          pppppppbVar92 = local_7a0;
          if (((bool)uVar47) && (extraout_x9_05 != 0)) {
            FUN_0070f21c(extraout_x8_05 + -1);
            local_1110[0] = extraout_w9_02;
                    /* try { // try from 006c0430 to 006c0433 has its CatchHandler @ 006c0e10 */
            FUN_0070f2b4();
            pppppppbVar92 = local_7a0;
          }
        }
        else {
          FUN_0070f524((ulong)local_10f8 & 0xffffffff,uVar88,local_7a0);
          pppppppbVar92 = extraout_x1;
          pppppppbVar68 = extraout_x1;
          if ((bool)uVar49) goto LAB_006bff6c;
        }
        pppppppbVar68 = pppppppbVar85;
        pppppppbVar55 = (byte *******)unaff_x24;
        if (pppppppbVar92 != (byte *******)0x0) {
          FUN_0070f208(pppppppbVar83);
        }
      }
      else {
LAB_006bff64:
        pppppppbVar68 = (byte *******)0xffffffffffffffff;
        pppppppbVar83 = pppppppbVar87;
LAB_006bff6c:
        auVar114._8_8_ = local_1148;
        auVar114._0_8_ = local_1158;
        auVar14._8_8_ = local_1148;
        auVar14._0_8_ = local_1158;
        local_1150 = pppppppbVar85;
        if (pppppppbVar85 != (byte *******)0x0) {
          FUN_0070f208(unaff_x24);
        }
        uVar49 = pppppppbVar68 == (byte *******)0xffffffffffffffff;
        pppppppbVar80 = pppppppbVar68;
        unaff_x20 = pppppppbVar83;
        pppppppbVar92 = pppppppbVar62;
        if ((bool)uVar49) break;
                    /* try { // try from 006bff84 to 006bff8f has its CatchHandler @ 006c0e2c */
        auVar101 = FUN_0070f56c();
        FUN_006f445c(auVar101._0_8_,auVar101._8_8_,pppppppbVar62);
        FUN_0070f5a0();
        uVar88 = local_1110._16_8_;
        pppppppbVar55 = pppppppbVar83;
        if ((bool)uVar49) {
          pppppppbVar85 =
               (byte *******)
               CONCAT17(local_1110[0xf],
                        CONCAT25(local_1110._13_2_,CONCAT14(local_1110[0xc],local_1110._8_4_)));
          local_180 = (byte *)0x0;
          pppppppbStack_178 = (byte *******)&DAT_00000008;
          pppppppbStack_168 = (byte *******)0x0;
          local_170 = (byte *******)0x0;
          local_160 = (byte *******)&DAT_00000008;
          auStack_158._0_8_ = (byte *******)0x0;
                    /* try { // try from 006bffc0 to 006bffcb has its CatchHandler @ 006c0e08 */
          FUN_006e52f0(local_550);
          pppppppbVar45 = local_508;
          pppppppbVar44 = local_510;
          pppppppbVar43 = local_518;
          pppppppbVar98 = local_520;
          pppppppbVar89 = local_528;
          pppppppbVar60 = local_530;
          pppppppbVar57 = local_538;
          pppppppbVar55 = local_540;
          pppppppbVar92 = local_550[1];
          pppppppbVar78 = local_550[0];
          uVar49 = local_550[0] == (byte *******)0xffffffffffffffff;
          if ((bool)uVar49) goto LAB_006c06bc;
          unaff_x20 = (byte *******)0xffffffffffffffff;
          *(undefined8 *)(unaff_x29 + -0x98) = uStack_4f0;
          *(undefined8 *)(unaff_x29 + -0xa0) = local_4f8;
          *(undefined8 *)(unaff_x29 + -0x88) = uStack_4e0;
          *(undefined8 *)(unaff_x29 + -0x90) = local_4e8;
          local_1188 = local_540;
          local_1180 = local_550[1];
          local_1170 = local_538;
          local_1168 = local_530;
          local_1148 = local_518;
          local_1150 = local_510;
          local_1158 = (byte *******)CONCAT71(uStack_4ff,local_500);
          local_1160 = local_528;
          if ((local_520 == (byte *******)0x0) || (local_518 == (byte *******)0x0))
          goto LAB_006c04e0;
          pppppppbVar80 = (byte *******)((long)local_520 << 6);
          pppppppbVar84 = (byte *******)&DAT_0045b635;
          unaff_x27 = local_528 + 4;
          goto LAB_006c004c;
        }
      }
      local_1150 = pppppppbVar85;
      unaff_x20 = pppppppbVar83;
      pppppppbVar92 = pppppppbVar62;
      auVar14 = auVar114;
      if (pppppppbVar68 != (byte *******)0x0) {
        FUN_0070f208(pppppppbVar55,pppppppbVar68);
      }
      break;
    }
  }
  goto LAB_006be748;
  while( true ) {
    pppppppbVar80 = pppppppbVar80 + -8;
    uVar49 = pppppppbVar80 == (byte *******)0x0;
    unaff_x27 = unaff_x27 + 8;
    if ((bool)uVar49) break;
LAB_006c004c:
    if (!CARRY8((ulong)pppppppbVar45,(ulong)*(uint *)(unaff_x27 + -4))) {
                    /* try { // try from 006c0058 to 006c0067 has its CatchHandler @ 006c0e40 */
      auVar101 = <&[u8]as_object::read::read_ref::ReadRef>::read_bytes_at_until
                           (pppppppbVar43,pppppppbVar44,
                            (undefined1 *)((long)pppppppbVar45 + (ulong)*(uint *)(unaff_x27 + -4)),
                            local_1158,0);
      if (((auVar101._0_8_ != (void *)0x0) && (auVar101._8_8_ == 0x11)) &&
         (iVar53 = memcmp(auVar101._0_8_,&DAT_0045b635,0x11), iVar53 == 0)) {
        uVar49 = *(int *)((long)unaff_x27 + -0x1c) == 8;
        if ((!(bool)uVar49) &&
           (pppppppbVar80 = (byte *******)*unaff_x27, pppppppbVar80 != (byte *******)0x0)) {
          pppppppbVar67 = (byte *******)unaff_x27[-1];
          uVar49 = pppppppbVar67 <= pppppppbVar60 &&
                   pppppppbVar80 == (byte *******)((long)pppppppbVar60 - (long)pppppppbVar67);
          if (pppppppbVar67 <= pppppppbVar60 &&
              pppppppbVar80 <= (byte *******)((long)pppppppbVar60 - (long)pppppppbVar67)) {
            unaff_x27 = (byte *******)0x0;
            local_1198 = (byte ******)((long)pppppppbVar57 + (long)pppppppbVar67);
            goto LAB_006c04c0;
          }
        }
        break;
      }
    }
  }
  goto LAB_006c04dc;
LAB_006bee7c:
  pppppppbStack_238 = pppppppbStack_798;
  local_240 = local_7a0;
  pppppppbStack_228 = pppppppbStack_788;
  local_230 = local_790;
  pppppppbStack_218 = pppppppbStack_778;
  local_220 = local_780;
  memcpy(&local_300,&local_770,0x90);
  pppppppbVar87 = pppppppbStack_228;
  pppppppbVar54 = local_230;
  pppppppbVar65 = local_240;
  if ((cVar12 != -1) && (iVar53 != 0)) {
    pppppppbVar78 = pppppppbStack_238;
    iVar75 = iVar53;
    while( true ) {
      iVar75 = iVar75 + -1;
      uVar71 = (ulong)pppppppbVar78 & (ulong)(iVar53 - 1);
      if (uVar70 < uVar71 * 8 || uVar70 + uVar71 * -8 < 8) break;
      puVar2 = (uint *)(lVar69 + uVar71 * 8);
      pppppppbVar78 =
           (byte *******)
           (((ulong)*puVar2 << 8 | (ulong)(uint3)puVar2[1] << 0x28) >> 8 |
           (ulong)*(byte *)((long)puVar2 + 7) << 0x38);
      if (pppppppbVar78 == pppppppbStack_238) {
        if ((((uVar71 * 4 <= uVar76 && 3 < uVar76 + uVar71 * -4) &&
             (iVar75 = *(int *)(lVar91 + uVar71 * 4), iVar75 != 0)) &&
            (uVar95 = iVar75 - 1, uVar95 < uVar93)) &&
           ((lVar94 = (ulong)uVar3 * (ulong)uVar95, (ulong)(lVar94 * 4) <= uVar73 &&
            ((ulong)(lVar94 * 4) <= uVar74)))) {
          if (8 < uVar3) {
                    /* try { // try from 006c0738 to 006c074b has its CatchHandler @ 006c0fd4 */
                    /* WARNING: Subroutine does not return */
            core::slice::index::slice_index_fail
                      (0,(ulong)uVar3,8,&PTR_s__rust_deps_gimli_0_32_3_src_read_00977a18);
          }
          if (((uVar3 != 0) && (3 < uVar73 + lVar94 * -4)) && (3 < uVar74 + lVar94 * -4)) {
                    /* WARNING: Could not recover jumptable at 0x006bf024. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(&UNK_006bf028 + (ulong)(byte)(&DAT_0045a68e)[DAT_009a64f0] * 4))();
            return;
          }
          pppppppbVar87 = (byte *******)local_240[4];
          pppppppbVar54 = (byte *******)local_240[5];
          pppppppbVar62 = (byte *******)local_240[0x20];
          ppppppbVar96 = local_240[0x1c];
          pppppppbVar78 = (byte *******)local_240[0x1d];
          if (pppppppbVar62 != (byte *******)0x0) goto LAB_006bf73c;
          goto LAB_006bf758;
        }
        break;
      }
      if ((pppppppbVar78 == (byte *******)0x0) ||
         (pppppppbVar78 =
               (byte *******)(uVar71 + ((ulong)(iVar53 - 1) & (ulong)pppppppbStack_238 >> 0x20 | 1))
         , iVar75 == 0)) break;
    }
  }
  *(undefined8 *)(unaff_x29 + -0x78) = 0;
  *(undefined8 *)(unaff_x29 + -0x70) = 1;
  *(undefined8 *)(unaff_x29 + -0x68) = 0;
  if (local_230 == (byte *******)0x0) {
    if (local_220 != (byte *******)0x0) {
      pppppppbVar87 = (byte *******)0x0;
      lVar94 = 1;
joined_r0x006bf1a8:
      bVar50 = false;
      if (pppppppbStack_218 == (byte *******)0x0) goto LAB_006bf1ac;
LAB_006bf1e8:
      pppppppbVar65 = *(byte ********)(unaff_x29 + -0x78);
      if (*(char *)local_220 != '/') goto LAB_006bf20c;
      pppppppbVar87 = (byte *******)0x0;
      *(undefined8 *)(unaff_x29 + -0x68) = 0;
      pppppppbVar54 = local_220;
      pppppppbVar78 = pppppppbStack_218;
      if (pppppppbStack_218 <= pppppppbVar65) goto LAB_006bf238;
LAB_006bf8a0:
                    /* try { // try from 006bf8a0 to 006bf8eb has its CatchHandler @ 006c0fa4 */
      FUN_0070f194(unaff_x29 + -0x78,pppppppbVar87,pppppppbVar78);
      lVar94 = *(long *)(unaff_x29 + -0x70);
      pppppppbVar87 = *(byte ********)(unaff_x29 + -0x68);
LAB_006bf238:
      memcpy((undefined1 *)((long)pppppppbVar87 + lVar94),pppppppbVar54,(size_t)pppppppbVar78);
      goto LAB_006bf248;
    }
    lVar94 = 1;
    unaff_x27 = local_220;
LAB_006bf5a0:
    pppppppbVar65 = local_240;
    if (*(long *)(unaff_x29 + -0x78) != 0) {
      FUN_0070f208(lVar94);
      pppppppbVar65 = local_240;
    }
    goto LAB_006bf5b4;
  }
  if (pppppppbStack_228 == (byte *******)0x0) {
    lVar56 = 0;
    lVar94 = 1;
  }
  else {
                    /* try { // try from 006bf168 to 006bf177 has its CatchHandler @ 006c0fa4 */
    FUN_0070f194(*(undefined1 *)local_230,unaff_x29 + -0x78,0,pppppppbStack_228);
    lVar94 = *(long *)(unaff_x29 + -0x70);
    lVar56 = *(long *)(unaff_x29 + -0x68);
    memcpy((void *)(lVar94 + lVar56),pppppppbVar54,(size_t)pppppppbVar87);
  }
  pppppppbVar87 = (byte *******)((long)pppppppbVar87 + lVar56);
  *(byte ********)(unaff_x29 + -0x68) = pppppppbVar87;
  unaff_x27 = local_220;
  if (local_220 == (byte *******)0x0) goto LAB_006bf5a0;
  if (pppppppbVar87 == (byte *******)0x0) goto joined_r0x006bf1a8;
  bVar50 = *(char *)((long)pppppppbVar87 + lVar94 + -1) != '/';
  if (pppppppbStack_218 != (byte *******)0x0) goto LAB_006bf1e8;
LAB_006bf1ac:
  pppppppbVar65 = *(byte ********)(unaff_x29 + -0x78);
LAB_006bf20c:
  pppppppbVar78 = pppppppbStack_218;
  pppppppbVar54 = local_220;
  if (bVar50) {
    if (pppppppbVar65 == pppppppbVar87) {
      FUN_0070f194(unaff_x29 + -0x78,pppppppbVar87,1);
      lVar94 = *(long *)(unaff_x29 + -0x70);
      pppppppbVar87 = *(byte ********)(unaff_x29 + -0x68);
      pppppppbVar65 = *(byte ********)(unaff_x29 + -0x78);
    }
    *(undefined1 *)((long)pppppppbVar87 + lVar94) = 0x2f;
    pppppppbVar87 = (byte *******)((long)pppppppbVar87 + 1);
    *(byte ********)(unaff_x29 + -0x68) = pppppppbVar87;
  }
  if ((byte *******)((long)pppppppbVar65 - (long)pppppppbVar87) < pppppppbVar78) goto LAB_006bf8a0;
  if (pppppppbVar78 != (byte *******)0x0) goto LAB_006bf238;
LAB_006bf248:
  lVar94 = *(long *)(unaff_x29 + -0x70);
  *(undefined1 **)(unaff_x29 + -0x68) = (undefined1 *)((long)pppppppbVar87 + (long)pppppppbVar78);
                    /* try { // try from 006bf254 to 006bf263 has its CatchHandler @ 006c0fa4 */
  FUN_006f445c(&local_208,lVar94);
  pppppppbVar65 = local_1f8;
  pppppppbVar87 = pppppppbStack_200;
  uVar71 = DAT_009a66b0;
  if (local_208 == (byte *******)0x1) {
    if (DAT_009a66b0 == DAT_009a66a0) {
                    /* try { // try from 006bf290 to 006bf293 has its CatchHandler @ 006c0f7c */
      <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<std::backtrace_rs::symbolize::gimli::mmap::Mmap>>
      ::grow_one();
      FUN_0070f530();
      *extraout_x9_02 = pppppppbVar87;
      extraout_x9_02[1] = pppppppbVar65;
      *(ulong *)(extraout_x10 + 8) = uVar71 + 1;
    }
    else {
      FUN_0070f530();
      *extraout_x9_03 = pppppppbVar87;
      extraout_x9_03[1] = pppppppbVar65;
      *(ulong *)(extraout_x10_00 + 8) = uVar71 + 1;
      if (0xfffffffffffffffe < uVar71) {
                    /* try { // try from 006c00a4 to 006c00a7 has its CatchHandler @ 006c105c */
        FUN_0070f4e0();
LAB_006c0d50:
                    /* WARNING: Does not return */
        pcVar46 = (code *)SoftwareBreakpoint(1,0x6c0d54);
        (*pcVar46)();
      }
    }
    lVar56 = DAT_009a66a8 + (uVar71 + 1) * 0x10;
                    /* try { // try from 006bf2cc to 006bf2d3 has its CatchHandler @ 006c0fa4 */
    FUN_006e52f0(local_550,*(undefined8 *)(lVar56 + -0x10),*(undefined8 *)(lVar56 + -8));
    pppppppbVar65 = local_550[1];
    pppppppbVar87 = local_550[0];
    if (local_550[0] != (byte *******)0xffffffffffffffff) {
                    /* try { // try from 006bf2ec to 006bf43b has its CatchHandler @ 006c0fc4 */
      auVar101 = FUN_0070f2a8();
      auVar101 = FUN_006e592c(auVar101._0_8_,auVar101._8_8_,&DAT_0045ae7d,0x11);
      if (auVar101._0_8_ == 0) {
        auVar101 = ZEXT816(1);
      }
      auVar103 = FUN_0070f2a8();
      auVar103 = FUN_006e592c(auVar103._0_8_,auVar103._8_8_,&DAT_0045ae9d,0xf);
      if (auVar103._0_8_ == 0) {
        auVar103 = ZEXT816(1);
      }
      auVar104 = FUN_0070f2a8();
      auVar104 = FUN_006e592c(auVar104._0_8_,auVar104._8_8_,&DAT_0045aeac,0xf);
      if (auVar104._0_8_ == 0) {
        auVar104 = ZEXT816(1);
      }
      auVar105 = FUN_0070f2a8();
      auVar105 = FUN_0070f470(auVar105._0_8_,auVar105._8_8_,&DAT_0045aedc);
      if (auVar105._0_8_ == 0) {
        auVar105 = ZEXT816(1);
      }
      auVar106 = FUN_0070f2a8();
      auVar106 = FUN_0070f468(auVar106._0_8_,auVar106._8_8_,".debug_macro.dwo");
      if (auVar106._0_8_ == 0) {
        auVar106 = ZEXT816(1);
      }
      auVar107 = FUN_0070f2a8();
      auVar107 = FUN_0070f2a0(auVar107._0_8_,auVar107._8_8_,&DAT_0045af01);
      if (auVar107._0_8_ == 0) {
        auVar107 = ZEXT816(1);
      }
      auVar108 = FUN_0070f2a8();
      auVar108 = FUN_006e592c(auVar108._0_8_,auVar108._8_8_,&DAT_0045af0f,0x16);
      if (auVar108._0_8_ == 0) {
        auVar108 = ZEXT816(1);
      }
      auVar109 = FUN_0070f2a8();
      auVar109 = FUN_0070f468(auVar109._0_8_,auVar109._8_8_,&DAT_00371ac0);
      if (auVar109._0_8_ == 0) {
        auVar109 = ZEXT816(1);
      }
      auVar110 = FUN_0070f2a8();
      auVar110 = FUN_0070f2a0(auVar110._0_8_,auVar110._8_8_,&DAT_0045aebb);
      if (auVar110._0_8_ == 0) {
        auVar110 = ZEXT816(1);
      }
      auVar111 = FUN_0070f2a8();
      auVar112 = FUN_0070f35c(auVar111._0_8_,auVar111._8_8_,&DAT_0045aec9);
      pppppppbVar54 = auVar112._0_8_;
      auVar111 = FUN_0070f2a8();
      auVar111 = FUN_0070f35c(auVar111._0_8_,auVar111._8_8_,&DAT_0045aeee);
      bVar50 = pppppppbVar54 == (byte *******)0x0;
      if (bVar50) {
        pppppppbVar54 = (byte *******)0x1;
      }
      pppppppbVar78 = (byte *******)0x0;
      if (!bVar50) {
        pppppppbVar78 = auVar112._8_8_;
      }
      pppppppbVar62 = (byte *******)local_240[4];
      pppppppbVar85 = (byte *******)local_240[5];
      pppppppbVar83 = (byte *******)local_240[0x20];
      ppppppbVar96 = local_240[0x1c];
      pppppppbVar68 = (byte *******)local_240[0x1d];
      if (auVar111._0_8_ == 0) {
        auVar111 = ZEXT816(1);
      }
      if (pppppppbVar83 != (byte *******)0x0) {
        do {
          ppppppbVar81 = *pppppppbVar83;
          cVar13 = '\x01';
          bVar50 = (bool)ExclusiveMonitorPass(pppppppbVar83,0x10);
          if (bVar50) {
            *pppppppbVar83 = (byte ******)((long)ppppppbVar81 + 1);
            cVar13 = ExclusiveMonitorsStatus();
          }
        } while (cVar13 != '\0');
        if ((long)ppppppbVar81 < 0) goto LAB_006c0d50;
      }
      pppppppbStack_10e0 = (byte *******)0x1;
      local_10d8 = (byte *******)0x0;
      local_10b0 = (byte *******)0x1;
      pppppppbStack_10a8 = (byte *******)0x0;
      local_1008 = (byte *******)0x0;
      uStack_ff8 = 0;
      local_ff0 = 1;
      local_1110._8_4_ = 1;
      local_1110[0xc] = 0;
      local_1110._13_2_ = 0;
      local_1110[0xf] = 0;
      local_1110[0] = 1;
      local_1110._1_2_ = 0;
      local_1110._3_4_ = 0;
      local_1110[7] = 0;
      pppppppbStack_10f0 = pppppppbVar62;
      local_10e8 = (undefined1  [8])pppppppbVar85;
      local_1040 = pppppppbVar54;
      local_1038 = pppppppbVar78;
      local_1030 = ppppppbVar96;
      local_1028 = pppppppbVar68;
      local_1010 = pppppppbVar83;
      unique0x10008bb4 = auVar101;
      _auStack_10d0 = auVar103;
      local_10c0 = auVar104;
      _local_10a0 = auVar105;
      local_1090 = auVar106;
      local_1080 = auVar107;
      _local_1070 = auVar108;
      _local_1060 = auVar109;
      _local_1050 = auVar110;
      _local_1020 = auVar111;
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      lVar56 = FUN_0070f2e4();
      if (lVar56 != 0) {
        FUN_0070f34c();
        FUN_0070f4ec(pppppppbVar87);
        unaff_x27 = auVar109._0_8_;
        if (extraout_x8_01 != 0) {
          FUN_0070f1c0(extraout_x8_01 * 3,pppppppbVar65);
        }
        goto LAB_006bf5a0;
      }
                    /* try { // try from 006c00ac to 006c00af has its CatchHandler @ 006c102c */
      FUN_0070f2f0();
      goto LAB_006c0d50;
    }
  }
  if (*(long *)(unaff_x29 + -0x78) != 0) {
    FUN_0070f208(lVar94);
  }
  do {
    ppppppbVar96 = *local_240;
    cVar13 = '\x01';
    bVar50 = (bool)ExclusiveMonitorPass(local_240,0x10);
    if (bVar50) {
      *local_240 = (byte ******)((long)ppppppbVar96 + -1);
      cVar13 = ExclusiveMonitorsStatus();
    }
  } while (cVar13 != '\0');
  bVar51 = ppppppbVar96 == (byte ******)0x1;
  unaff_x27 = (byte *******)0x0;
  goto LAB_006bf5c4;
LAB_006bf73c:
  do {
    ppppppbVar81 = *pppppppbVar62;
    cVar13 = '\x01';
    bVar50 = (bool)ExclusiveMonitorPass(pppppppbVar62,0x10);
    if (bVar50) {
      *pppppppbVar62 = (byte ******)((long)ppppppbVar81 + 1);
      cVar13 = ExclusiveMonitorsStatus();
    }
  } while (cVar13 != '\0');
  if ((long)ppppppbVar81 < 0) goto LAB_006c0d50;
LAB_006bf758:
  local_10c0._8_8_ = 0;
  local_10f8 = (byte *******)0x0;
  local_1110._8_4_ = 1;
  local_1110[0xc] = 0;
  local_1110._13_2_ = 0;
  local_1110[0xf] = 0;
  local_1110[0] = 1;
  local_1110._1_2_ = 0;
  local_1110._3_4_ = 0;
  local_1110[7] = 0;
  local_10c8 = (byte *******)0x0;
  local_1068 = (byte *******)0x0;
  local_1058 = (byte *******)0x0;
  local_1048 = (byte *******)0x0;
  local_1038 = (byte *******)0x0;
  local_1018 = (byte *******)0x0;
  local_1008 = (byte *******)0x0;
  uStack_ff8 = 0;
  local_ff0 = 1;
  local_1110._16_8_ = _Var4;
  pppppppbStack_10f0 = pppppppbVar87;
  local_10e8 = (undefined1  [8])pppppppbVar54;
  pppppppbStack_10e0 = pppppppbVar86;
  local_10d8 = pppppppbVar64;
  auStack_10d0 = (undefined1  [8])_Var5;
  local_10c0._0_8_ = lVar72;
  local_10b0 = pppppppbVar86;
  pppppppbStack_10a8 = pppppppbVar64;
  local_10a0 = (undefined1  [8])pppppppbVar86;
  local_1098 = (long)pppppppbVar64;
  local_1090._0_8_ = pppppppbVar86;
  local_1090._8_8_ = pppppppbVar64;
  local_1080._0_8_ = uVar8;
  local_1080._8_8_ = uVar10;
  local_1070 = (undefined1  [8])uVar97;
  local_1060 = (undefined1  [8])uVar7;
  local_1050 = (undefined1  [8])uVar88;
  local_1040 = pppppppbVar80;
  local_1030 = ppppppbVar96;
  local_1028 = pppppppbVar78;
  local_1020 = (undefined1  [8])uVar6;
  local_1010 = pppppppbVar62;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  lVar94 = FUN_0070f2e4();
  if (lVar94 == 0) {
                    /* try { // try from 006c0750 to 006c0753 has its CatchHandler @ 006c0fb0 */
    FUN_0070f2f0();
    goto LAB_006c0d50;
  }
  FUN_0070f34c();
LAB_006bf5b4:
  do {
    bVar51 = (byte ******)((long)*pppppppbVar65 + -1) == (byte ******)0x0;
    cVar13 = '\x01';
    bVar50 = (bool)ExclusiveMonitorPass(pppppppbVar65,0x10);
    if (bVar50) {
      *pppppppbVar65 = (byte ******)((long)*pppppppbVar65 + -1);
      cVar13 = ExclusiveMonitorsStatus();
    }
  } while (cVar13 != '\0');
LAB_006bf5c4:
  if (bVar51) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 006bf5cc to 006bf5cf has its CatchHandler @ 006c0fcc */
    FUN_0070f4b4();
  }
  pppppppbVar65 = pppppppbStack_2e8;
  pppppppbVar87 = local_2f0;
  pppppppbStack_258 = pppppppbStack_2e8;
  local_260 = local_2f0;
  pppppppbStack_268 = pppppppbStack_2f8;
  local_270 = local_300;
  *(byte *********)(unaff_x29 + -0xa0) = &pppppppbStack_258;
  *(byte ********)(unaff_x29 + -0x98) = unaff_x27;
  cVar13 = *(char *)(local_2f0 + 0x43);
  uVar49 = cVar13 == -2;
  if ((bool)uVar49) {
    if (unaff_x27 == (byte *******)0x0) {
      ppppppbVar96 = (byte ******)0x0;
      uVar95 = 0xff;
    }
    else {
      local_7d0 = (byte *******)unaff_x27[8];
      pppppppbStack_7c8 = (byte *******)unaff_x27[9];
      local_7c0 = (byte *******)0x0;
      local_190 = unaff_x27;
      FUN_006df6f0(local_1110,&local_7d0);
      lVar94 = CONCAT17(local_1110[7],
                        CONCAT43(local_1110._3_4_,CONCAT21(local_1110._1_2_,local_1110[0])));
      uVar95 = local_1110._8_4_ & 0xff;
      uVar49 = lVar94 == -1;
      local_188 = CONCAT13(local_1110[0xc],local_1110._9_3_);
      uStack_184 = (undefined3)
                   (CONCAT13(local_1110[0xf],CONCAT21(local_1110._13_2_,local_1110[0xc])) >> 8);
      if ((bool)uVar49) {
        local_1110._3_4_ = CONCAT31(uStack_184,local_1110[0xc]);
        local_1110[0] = SUB41(local_1110._8_4_,1);
        local_1110._1_2_ = SUB42(local_1110._8_4_,2);
        ppppppbVar96 = (byte ******)local_1110._16_8_;
      }
      else {
        uVar49 = lVar94 == 2;
        pppppppbStack_178 = pppppppbStack_10f0;
        local_180 = (byte *)local_10f8;
        pppppppbStack_168 = pppppppbStack_10e0;
        local_170 = (byte *******)local_10e8;
        local_160 = local_10d8;
        auStack_158 = _auStack_10d0;
        if ((bool)uVar49) {
          uVar95 = 0xff;
          ppppppbVar96 = (byte ******)0x0;
        }
        else {
          *(undefined1 *)(unaff_x29 + -0x70) = local_1110[8];
          *(byte ********)(unaff_x29 + -0x58) = pppppppbStack_10f0;
          *(byte ********)(unaff_x29 + -0x60) = local_10f8;
          *(long *)(unaff_x29 + -0x78) = lVar94;
          *(undefined4 *)(unaff_x29 + -0x6f) = local_188;
          *(uint *)(unaff_x29 + -0x6c) = CONCAT31(uStack_184,local_1110[0xc]);
          *(byte ********)(unaff_x29 + -0x48) = pppppppbStack_10e0;
          *(undefined1 (*) [8])(unaff_x29 + -0x50) = local_10e8;
          *(undefined8 *)(unaff_x29 + -0x68) = local_1110._16_8_;
          *(undefined1 (*) [8])(unaff_x29 + -0x38) = auStack_10d0;
          *(byte ********)(unaff_x29 + -0x40) = local_10d8;
          *(byte ********)(unaff_x29 + -0x30) = local_10c8;
                    /* try { // try from 006bf93c to 006bf953 has its CatchHandler @ 006c0de4 */
          FUN_006dd40c(local_1110,unaff_x27 + 2,unaff_x29 + -0x78);
          uVar38 = local_1110[7];
          uVar37 = local_1110._3_4_;
          uVar36 = local_1110._1_2_;
          uVar47 = local_1110[0];
          ppppppbVar96 = (byte ******)local_1110._16_8_;
          uVar39 = local_1110[8];
          uVar95 = local_1110._8_4_ & 0xff;
          local_145 = CONCAT13(local_1110[0xf],CONCAT21(local_1110._13_2_,local_1110[0xc]));
          uVar49 = CONCAT17(local_1110[7],
                            CONCAT43(local_1110._3_4_,CONCAT21(local_1110._1_2_,local_1110[0]))) ==
                   2;
          *(uint *)(unaff_x29 + -0xe8) = CONCAT13(local_1110[0xc],local_1110._9_3_);
          if (!(bool)uVar49) {
            uVar41 = local_10c8._2_2_;
            *(byte ********)(unaff_x29 + -0xd8) = pppppppbStack_10f0;
            *(byte ********)(unaff_x29 + -0xe0) = local_10f8;
            *(byte ********)(unaff_x29 + -200) = pppppppbStack_10e0;
            *(undefined1 (*) [8])(unaff_x29 + -0xd0) = local_10e8;
            *(undefined1 (*) [8])(unaff_x29 + -0xb8) = auStack_10d0;
            *(byte ********)(unaff_x29 + -0xc0) = local_10d8;
            *(undefined2 *)(unaff_x29 + -0xb0) = (undefined2)local_10c8;
            memcpy(local_550,(void *)((long)&local_10c8 + 4),0x14c);
            *(undefined4 *)(unaff_x29 + -0xa8) = *(undefined4 *)(unaff_x29 + -0xe8);
            *(undefined4 *)(unaff_x29 + -0xa5) = local_145;
            ppppppbVar81 = ppppppbStack_f58;
            if (uVar41 < 5) {
              ppppppbVar81 = pppppppbVar65[0x37];
            }
            pppppppbStack_10f0 = *(byte ********)(unaff_x29 + -0xd8);
            local_10f8 = *(byte ********)(unaff_x29 + -0xe0);
            pppppppbStack_10e0 = *(byte ********)(unaff_x29 + -200);
            local_10e8 = *(undefined1 (*) [8])(unaff_x29 + -0xd0);
            ppppppbVar90 = pppppppbVar65[0x33];
            uVar11 = *(undefined4 *)(unaff_x29 + -0xa5);
            ppppppbVar82 = pppppppbVar65[0x35];
            local_10d8 = *(byte ********)(unaff_x29 + -0xc0);
            local_1110._8_4_ = CONCAT31((int3)*(undefined4 *)(unaff_x29 + -0xa8),uVar39);
            local_1110[0xc] = (undefined1)uVar11;
            local_1110._13_2_ = (undefined2)((uint)uVar11 >> 8);
            local_1110[0xf] = (undefined1)((uint)uVar11 >> 0x18);
            local_10c8._0_4_ = CONCAT22(uVar41,*(undefined2 *)(unaff_x29 + -0xb0));
            local_1110[0] = uVar47;
            local_1110._1_2_ = uVar36;
            local_1110._3_4_ = uVar37;
            local_1110[7] = uVar38;
            local_1110._16_8_ = ppppppbVar96;
            auStack_10d0 = (undefined1  [8])*(__blkcnt_t *)(unaff_x29 + -0xb8);
            local_f50 = unaff_x27;
            memcpy((void *)((long)&local_10c8 + 4),local_550,0x14c);
            ppppppbStack_f78 = ppppppbVar90;
            local_f68 = ppppppbVar82;
            ppppppbStack_f58 = ppppppbVar81;
            __rustc::__rust_no_alloc_shim_is_unstable_v2();
            ppppppbVar96 = (byte ******)__rustc::__rust_alloc(0x1c8,8);
            if (ppppppbVar96 == (byte ******)0x0) {
                    /* try { // try from 006c0bf4 to 006c0bff has its CatchHandler @ 006c0ee0 */
                    /* WARNING: Subroutine does not return */
              alloc::alloc::handle_alloc_error(8,0x1c8);
            }
            memcpy(ppppppbVar96,local_1110,0x1c8);
            uVar95 = 0xff;
            FUN_0070f4ec();
            goto LAB_006bfab8;
          }
          FUN_0070f4ec(*(undefined4 *)(unaff_x29 + -0xe8));
          local_1110[0] = (undefined1)extraout_w8;
          local_1110._1_2_ = (undefined2)((uint)extraout_w8 >> 8);
          local_1110._3_4_ = extraout_w9_03;
        }
      }
      do {
        FUN_0070f5ac();
        cVar13 = '\x01';
        bVar50 = (bool)ExclusiveMonitorPass(unaff_x27,0x10);
        if (bVar50) {
          *unaff_x27 = extraout_x8_03;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
      if ((bool)uVar49) {
        DataMemoryBarrier(2,1);
                    /* try { // try from 006bf9a8 to 006bf9ab has its CatchHandler @ 006c0fcc */
        FUN_0070f4c0();
      }
    }
LAB_006bfab8:
    if (*(char *)(pppppppbVar87 + 0x43) == -2) {
      *(char *)(pppppppbVar87 + 0x43) = (char)uVar95;
      pppppppbVar87[0x44] = ppppppbVar96;
      *(undefined4 *)((long)pppppppbVar87 + 0x21c) = local_1110._3_4_;
      *(uint *)((long)pppppppbVar87 + 0x219) =
           CONCAT13(local_1110[3],CONCAT21(local_1110._1_2_,local_1110[0]));
    }
    else if (uVar95 != 0xfe) {
                    /* try { // try from 006c089c to 006c08bf has its CatchHandler @ 006c0f98 */
      FUN_006c2d8c(uVar95,ppppppbVar96);
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                (&DAT_0045abca,0x1d,&PTR_s__rustc_48a229ceaefd4985c50990b14_00976a48);
    }
  }
  else {
    if (unaff_x27 == (byte *******)0x0) goto LAB_006bf620;
    do {
      FUN_0070f5ac();
      cVar13 = '\x01';
      bVar50 = (bool)ExclusiveMonitorPass(unaff_x27,0x10);
      if (bVar50) {
        *unaff_x27 = extraout_x8_02;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
    if ((bool)uVar49) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 006bf610 to 006bf68f has its CatchHandler @ 006c0fcc */
      <alloc[cc0d62b833a55794]::sync::Arc<gimli[d400ddce60e1bc02]::read::dwarf::Dwarf<gimli[d400ddce60e1bc02]::read::endian_slice::EndianSlice<gimli[d400ddce60e1bc02]::endianity::LittleEndian>>>>
      ::drop_slow(unaff_x29 + -0x98);
    }
  }
  cVar13 = *(char *)(pppppppbVar87 + 0x43);
LAB_006bf620:
  if (cVar13 == -1) {
    local_1110._16_8_ = pppppppbVar87[0x44];
    if ((byte *******)local_1110._16_8_ == (byte *******)0x0) {
      local_1110[0] = 0;
      ppppppbVar96 = *pppppppbStack_268 + 2;
      local_1110._16_8_ = local_270;
    }
    else {
      ppppppbVar96 = *(byte *******)(local_1110._16_8_ + 0x1c0) + 2;
      local_1110[0] = 2;
    }
  }
  else {
    ppppppbVar96 = pppppppbVar87[0x43];
    local_1110._16_8_ = pppppppbVar87[0x44];
    local_1110[0] = 0xff;
  }
  local_1110._8_4_ = SUB84(ppppppbVar96,0);
  local_1110[0xc] = (undefined1)((ulong)ppppppbVar96 >> 0x20);
  local_1110._13_2_ = (undefined2)((ulong)ppppppbVar96 >> 0x28);
  local_1110[0xf] = (undefined1)((ulong)ppppppbVar96 >> 0x38);
  FUN_006d0580(&pppppppbStack_200,auStack_2e0,local_1110);
  local_208 = (byte *******)0x0;
  memcpy(local_550,auStack_2c8,0x58);
                    /* try { // try from 006bf6ac to 006bf6bf has its CatchHandler @ 006c0fcc */
  FUN_006dc6b4(local_1110,&local_208,local_550);
  memcpy(&local_7a0,local_1110,0xc0);
  if ((char)local_6e8 == '\x02') goto LAB_006bebe4;
  goto LAB_006bee7c;
LAB_006bebe4:
  uVar93 = (uint)local_7a0;
  goto LAB_006bebf4;
LAB_006bfd4c:
  bVar50 = true;
  goto LAB_006bfd54;
  while( true ) {
    unaff_x27 = (byte *******)((long)unaff_x27 + 1);
    uVar49 = pppppppbVar80 == unaff_x27;
    if ((bool)uVar49) break;
LAB_006c04c0:
    if (*(byte *)((long)local_1198 + (long)unaff_x27) == 0) {
      if (unaff_x27 == (byte *******)0x0) {
LAB_006c07a0:
        if (pppppppbVar62 < (byte *******)0x180) {
          pppppppbVar84 = (byte *******)local_550;
          memcpy(local_550,pppppppbVar83,(size_t)pppppppbVar62);
          *(undefined1 *)((long)pppppppbVar84 + (long)pppppppbVar62) = 0;
                    /* try { // try from 006c07c0 to 006c07cf has its CatchHandler @ 006c0d98 */
          <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul
                    (&local_7a0,local_550,(long)pppppppbVar62 + 1);
          if (local_7a0 == (byte *******)0x1) {
            pppppppbStack_2f8 = (byte *******)&PTR_DAT_00977090;
            local_300 = (byte *******)0xffffffffffffffff;
          }
          else {
                    /* try { // try from 006c0824 to 006c0897 has its CatchHandler @ 006c0d98 */
            FUN_006f4bc0(&local_300,pppppppbStack_798);
          }
        }
        else {
                    /* try { // try from 006c0cec to 006c0d07 has its CatchHandler @ 006c0d98 */
          FUN_006c9404(&local_300,pppppppbVar83,pppppppbVar62,FUN_0070eb54);
        }
        pppppppbVar42 = pppppppbStack_2f8;
        pppppppbVar67 = local_300;
        local_11a0 = local_300;
        local_1190 = pppppppbStack_2f8;
        if (local_300 == (byte *******)0xffffffffffffffff) {
          uVar76 = ((ulong)pppppppbStack_2f8 & 3) - 2;
          uVar49 = uVar76 == 2;
          if ((1 < uVar76) && (((ulong)pppppppbStack_2f8 & 3) != 0)) {
            local_550[0] = (byte *******)CONCAT71(local_550[0]._1_7_,3);
            local_550[1] = (byte *******)((long)pppppppbStack_2f8 + -1);
            FUN_0070f2b4(local_550);
          }
          break;
        }
        if (local_2f0 == (byte *******)0x0) {
          bVar50 = false;
        }
        else {
          bVar50 = *(char *)pppppppbStack_2f8 == '/';
        }
        local_550[1] = local_2f0;
        local_540 = (byte *******)CONCAT71(local_540._1_7_,0xff);
        local_550[0] = pppppppbStack_2f8;
        local_518 = (byte *******)CONCAT62(CONCAT51(local_518._3_5_,bVar50),0x201);
                    /* try { // try from 006c08e8 to 006c090f has its CatchHandler @ 006c0d80 */
        <std::path::Components_as_core::iter::traits::double_ended::DoubleEndedIterator>::next_back
                  (&local_7a0,local_550);
        if ((byte)local_7a0 - 7 < 0xf8) {
          auVar101 = <std::path::[8]::std::path::Components>::as_path(local_550);
          pppppppbVar62 = auVar101._8_8_;
          local_11b0 = auVar101._0_8_;
          if (local_11b0 == (byte *******)0x0) goto LAB_006c0968;
          if (pppppppbVar62 == (byte *******)0x0) {
            bVar50 = false;
            pppppppbStack_798 = (byte *******)0x1;
            local_790 = (byte *******)0x0;
          }
          else {
            __rustc::__rust_no_alloc_shim_is_unstable_v2();
            pppppppbVar84 = (byte *******)__rustc::__rust_alloc(pppppppbVar62,1);
            if (pppppppbVar84 == (byte *******)0x0) {
                    /* try { // try from 006c0d34 to 006c0d3f has its CatchHandler @ 006c0d80 */
                    /* WARNING: Subroutine does not return */
              alloc::raw_vec::handle_error(1,pppppppbVar62);
            }
            memcpy(pppppppbVar84,local_11b0,(size_t)pppppppbVar62);
            bVar50 = ((undefined1 *)((long)pppppppbVar84 + (long)pppppppbVar62))[-1] != '/';
            pppppppbStack_798 = pppppppbVar84;
            local_790 = pppppppbVar62;
          }
          local_7a0 = local_790;
          if ((unaff_x27 == (byte *******)0x0) || (*(byte *)local_1198 != 0x2f)) {
            pppppppbVar84 = pppppppbVar62;
            if (bVar50) {
                    /* try { // try from 006c0b00 to 006c0b0f has its CatchHandler @ 006c0d68 */
              FUN_0070f194(&local_7a0,pppppppbVar62,1);
              pppppppbVar62 = (byte *******)((long)local_790 + 1);
              *(undefined1 *)((long)pppppppbStack_798 + (long)local_790) = 0x2f;
              pppppppbVar84 = local_7a0;
              local_790 = pppppppbVar62;
            }
            uVar47 = (byte *******)((long)pppppppbVar84 - (long)pppppppbVar62) <= unaff_x27;
            uVar49 = unaff_x27 == (byte *******)((long)pppppppbVar84 - (long)pppppppbVar62);
            pppppppbVar84 = pppppppbVar62;
            if ((bool)uVar47 && !(bool)uVar49) goto LAB_006c0d14;
            if (unaff_x27 != (byte *******)0x0) goto LAB_006c0b48;
          }
          else {
            pppppppbVar84 = (byte *******)0x0;
            uVar47 = pppppppbVar62 <= unaff_x27;
            uVar49 = unaff_x27 == pppppppbVar62;
            local_790 = (byte *******)0x0;
            pppppppbVar62 = pppppppbVar84;
            if ((bool)uVar47 && !(bool)uVar49) {
LAB_006c0d14:
                    /* try { // try from 006c0d14 to 006c0d23 has its CatchHandler @ 006c0d68 */
              FUN_0070f194(&local_7a0,pppppppbVar84,unaff_x27);
              pppppppbVar62 = local_790;
            }
LAB_006c0b48:
            memcpy((undefined1 *)((long)pppppppbStack_798 + (long)pppppppbVar62),local_1198,
                   (size_t)unaff_x27);
          }
          local_11a8 = pppppppbStack_798;
          pppppppbVar84 = (byte *******)((long)pppppppbVar62 + (long)unaff_x27);
                    /* try { // try from 006c0b6c to 006c0b7b has its CatchHandler @ 006c0d68 */
          local_790 = pppppppbVar84;
          std::sys::fs::metadata(local_550,pppppppbStack_798,pppppppbVar84);
          FUN_0070f400();
          pppppppbVar62 = local_7a0;
          if ((bool)uVar49) {
            FUN_0070f22c(local_550[1]);
            pppppppbVar62 = local_7a0;
            if (((bool)uVar47) && (extraout_x9_07 != 0)) {
              FUN_0070f3e8();
                    /* try { // try from 006c0b98 to 006c0b9b has its CatchHandler @ 006c0d68 */
              FUN_0070f2b4();
              pppppppbVar62 = local_7a0;
            }
LAB_006c0bb4:
            if (pppppppbVar62 != (byte *******)0x0) {
              FUN_0070f208(local_11a8,pppppppbVar62);
            }
            if (pppppppbVar67 != (byte *******)0x0) {
              FUN_0070f208(pppppppbVar42,pppppppbVar67);
            }
            break;
          }
          FUN_0070f524((ulong)local_538 & 0xffffffff);
          if (!(bool)uVar49) goto LAB_006c0bb4;
        }
        else {
LAB_006c0968:
          pppppppbVar62 = (byte *******)0xffffffffffffffff;
        }
        if (pppppppbVar67 != (byte *******)0x0) {
          FUN_0070f208(pppppppbVar42,pppppppbVar67);
        }
        uVar49 = pppppppbVar62 == (byte *******)0xffffffffffffffff;
        if ((bool)uVar49) break;
      }
      else {
        uVar47 = 0x2e < *(byte *)local_1198;
        uVar49 = *(byte *)local_1198 == 0x2f;
        if (!(bool)uVar49) goto LAB_006c07a0;
                    /* try { // try from 006c076c to 006c077b has its CatchHandler @ 006c0d98 */
        std::sys::fs::metadata(local_550,local_1198,unaff_x27);
        FUN_0070f400();
        if ((bool)uVar49) {
          FUN_0070f22c(local_550[1]);
          if (((bool)uVar47) && (extraout_x9_06 != 0)) {
            FUN_0070f3e8();
                    /* try { // try from 006c0798 to 006c079b has its CatchHandler @ 006c0d98 */
            FUN_0070f2b4();
          }
          break;
        }
        FUN_0070f524((ulong)local_538 & 0xffffffff);
        if (!(bool)uVar49) break;
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        local_11a8 = (byte *******)__rustc::__rust_alloc(unaff_x27,1);
        if (local_11a8 == (byte *******)0x0) {
                    /* try { // try from 006c0d44 to 006c0d4f has its CatchHandler @ 006c0d98 */
                    /* WARNING: Subroutine does not return */
          alloc::raw_vec::handle_error(1,unaff_x27);
        }
        memcpy(local_11a8,local_1198,(size_t)unaff_x27);
        pppppppbVar84 = unaff_x27;
        pppppppbVar62 = unaff_x27;
      }
                    /* try { // try from 006c09c8 to 006c09d7 has its CatchHandler @ 006c0da8 */
      FUN_006f445c(&local_7a0,local_11a8,pppppppbVar84);
      uVar97 = auStack_158._0_8_;
      pppppppbVar67 = local_790;
      pppppppbVar84 = pppppppbStack_798;
      uVar49 = local_7a0 == (byte *******)0x1;
      if ((bool)uVar49) {
        local_11a0 = pppppppbStack_798;
        if ((byte *******)auStack_158._0_8_ == pppppppbStack_168) {
                    /* try { // try from 006c0a04 to 006c0a13 has its CatchHandler @ 006c0d54 */
          <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<std::backtrace_rs::symbolize::gimli::mmap::Mmap>>
          ::grow_one(&pppppppbStack_168);
          FUN_0070f40c();
          lVar69 = extraout_x8_06;
        }
        else {
          FUN_0070f40c();
          auStack_158._0_8_ = uVar97 + 1;
          lVar69 = extraout_x8_07;
          if ((byte *******)0xfffffffffffffffe < (ulong)uVar97) {
                    /* try { // try from 006c0d0c to 006c0d0f has its CatchHandler @ 006c0da8 */
            FUN_0070f4e0();
            goto LAB_006c0d50;
          }
        }
        auStack_158._0_8_ = uVar97 + 1;
        lVar69 = lVar69 + auStack_158._0_8_ * 0x10;
                    /* try { // try from 006c0a3c to 006c0a43 has its CatchHandler @ 006c0da8 */
        FUN_006e52f0(local_550,*(undefined8 *)(lVar69 + -0x10),*(undefined8 *)(lVar69 + -8));
        pppppppbVar42 = local_550[1];
        unaff_x20 = local_550[0];
        uVar49 = local_550[0] == (byte *******)0xffffffffffffffff;
        local_1190 = pppppppbVar67;
        if (!(bool)uVar49) {
          local_1190 = local_550[1];
          auVar101 = FUN_006e5c78(local_550);
          if (((auVar101._0_8_ == (void *)0x0) ||
              (uVar49 = (byte *******)((long)pppppppbVar80 + ~auVar101._8_8_) == unaff_x27,
              !(bool)uVar49)) ||
             (iVar53 = memcmp(auVar101._0_8_,(byte *)((long)local_1198 + (long)unaff_x27) + 1,
                              (long)pppppppbVar80 + ~(ulong)unaff_x27), iVar53 != 0)) {
            if (unaff_x20 != (byte *******)0x0) {
              FUN_0070f1c0((long)unaff_x20 * 3,pppppppbVar42);
            }
            goto LAB_006c0aa0;
          }
          memcpy((void *)(unaff_x29 + -0x78),&local_540,0x68);
          local_1190 = pppppppbVar42;
        }
      }
      else {
LAB_006c0aa0:
        unaff_x20 = (byte *******)0xffffffffffffffff;
      }
      if (pppppppbVar62 != (byte *******)0x0) {
        FUN_0070f208(local_11a8,pppppppbVar62);
      }
      goto LAB_006c04e0;
    }
  }
LAB_006c04dc:
  unaff_x20 = (byte *******)0xffffffffffffffff;
LAB_006c04e0:
                    /* try { // try from 006c04e0 to 006c04fb has its CatchHandler @ 006c0dc0 */
  FUN_006d5a88(&local_300,pppppppbVar64,pppppppbVar87,&local_180);
  _Stack_740 = *(__time_t *)(unaff_x29 + -0x98);
  local_748 = *(long *)(unaff_x29 + -0xa0);
  pppppppbStack_730 = *(byte ********)(unaff_x29 + -0x88);
  local_738 = *(byte ********)(unaff_x29 + -0x90);
  local_7a0 = pppppppbVar78;
  pppppppbStack_798 = pppppppbVar92;
  local_790 = pppppppbVar55;
  local_780 = pppppppbVar60;
  pppppppbStack_788 = pppppppbVar57;
  pppppppbStack_778 = pppppppbVar89;
  local_770 = pppppppbVar98;
  local_768 = pppppppbVar43;
  local_758 = pppppppbVar45;
  local_760 = pppppppbVar44;
  local_550[1] = local_1190;
  local_750 = local_1158;
  local_550[0] = unaff_x20;
  memcpy(&local_540,(void *)(unaff_x29 + -0x78),0x68);
                    /* try { // try from 006c056c to 006c058b has its CatchHandler @ 006c0e08 */
  FUN_006e2250(local_1110,&local_180,&local_7a0,local_550,&local_300);
  uVar76 = FUN_0070f518();
  unaff_x24 = (undefined1  [8])pppppppbVar98;
  if ((bool)uVar49) {
LAB_006c06bc:
    FUN_0070f49c();
    uVar93 = munmap(pppppppbVar85,uVar88);
    uVar76 = (ulong)uVar93;
    unaff_x20 = (byte *******)0xffffffffffffffff;
  }
  else {
    local_11d0 = (byte *******)
                 CONCAT17(local_1110[0xf],
                          CONCAT25(local_1110._13_2_,CONCAT14(local_1110[0xc],local_1110._8_4_)));
    local_11b0 = pppppppbStack_10f0;
    local_11b8 = (byte *******)local_10e8;
    local_11c0 = pppppppbStack_10e0;
    uStack_1248 = uStack_fe8;
    uStack_1238 = uStack_ff8;
    local_1240 = local_1000;
    local_11c8 = local_10d8;
    local_11e0 = (byte *******)local_1110._16_8_;
    local_11d8 = (byte *******)auStack_10d0;
    uStack_1268 = uStack_fc8;
    local_1270 = uStack_fd0;
    uStack_1258 = uStack_fd8;
    local_1260 = local_fe0;
    local_11f0 = local_10f8;
    local_11e8 = local_10c8;
    local_1200 = local_10c0._8_8_;
    local_11f8 = local_10c0._0_8_;
    uStack_1288 = uStack_fa8;
    local_1290 = uStack_fb0;
    uStack_1278 = uStack_fb8;
    local_1280 = local_fc0;
    local_1210 = pppppppbStack_10a8;
    local_1208 = local_10b0;
    local_1220 = local_1098;
    local_1218 = (long)local_10a0;
    uStack_12a8 = uStack_f88;
    local_12b0 = uStack_f90;
    uStack_1298 = uStack_f98;
    local_12a0 = local_fa0;
    local_1228 = local_1090._0_8_;
    local_1330 = local_1080._0_8_;
    local_1328 = local_1090._8_8_;
    ppppppbStack_12c8 = local_f68;
    local_12d0 = local_f70;
    ppppppbStack_12b8 = ppppppbStack_f78;
    local_12c0 = local_f80;
    local_1148 = (byte *******)local_1080._8_8_;
    local_1158 = local_1068;
    local_1150 = (byte *******)local_1070;
    local_1168 = local_1058;
    local_1160 = (byte *******)local_1060;
    uStack_12e8 = uStack_f48;
    local_12f0 = local_f50;
    ppppppbStack_12d8 = ppppppbStack_f58;
    local_12e0 = local_f60;
    local_1170 = (byte *******)local_1050;
    *(byte ********)(unaff_x29 + -0xd8) = pppppppbStack_178;
    *(byte **)(unaff_x29 + -0xe0) = local_180;
    *(byte ********)(unaff_x29 + -200) = pppppppbStack_168;
    *(byte ********)(unaff_x29 + -0xd0) = local_170;
    local_1188 = local_1040;
    local_1180 = local_1048;
    uStack_1318 = uStack_f18;
    local_1320 = local_f20;
    local_1198 = local_1030;
    local_1190 = local_1038;
    uStack_1308 = uStack_f28;
    local_1310 = local_f30;
    uStack_12f8 = uStack_f38;
    local_1300 = local_f40;
    local_11a8 = (byte *******)local_1020;
    local_11a0 = local_1028;
    *(undefined8 *)(unaff_x29 + -0xb8) = auStack_158._0_8_;
    *(byte ********)(unaff_x29 + -0xc0) = local_160;
    unaff_x24 = (undefined1  [8])local_1010;
    unaff_x27 = local_1018;
    pppppppbVar78 = local_1008;
  }
  auVar14._8_8_ = local_1148;
  auVar14._0_8_ = local_1158;
  if (pppppppbVar68 != (byte *******)0x0) {
    uVar76 = FUN_0070f208(pppppppbVar83);
  }
  uVar49 = unaff_x20 == (byte *******)0xffffffffffffffff;
  pppppppbVar92 = pppppppbVar62;
  if ((bool)uVar49) {
LAB_006be748:
                    /* try { // try from 006be748 to 006be75f has its CatchHandler @ 006c0f90 */
    FUN_006d5a88(&local_7a0,pppppppbVar64,pppppppbVar87,&local_270);
    local_550[0] = (byte *******)0xffffffffffffffff;
                    /* try { // try from 006be76c to 006be78b has its CatchHandler @ 006c0f9c */
    FUN_006e2250(local_1110,&local_270,&local_208,local_550,&local_7a0);
    uVar76 = FUN_0070f518();
    if ((bool)uVar49) {
LAB_006be87c:
      unaff_x20 = (byte *******)0xffffffffffffffff;
      pppppppbVar65 = pppppppbVar80;
      pppppppbVar54 = pppppppbVar92;
      goto LAB_006be880;
    }
    local_11d0 = (byte *******)
                 CONCAT17(local_1110[0xf],
                          CONCAT25(local_1110._13_2_,CONCAT14(local_1110[0xc],local_1110._8_4_)));
    auVar14._8_8_ = local_1080._8_8_;
    auVar14._0_8_ = local_1068;
    local_1150 = (byte *******)local_1070;
    local_1168 = local_1058;
    local_1160 = (byte *******)local_1060;
    local_1170 = (byte *******)local_1050;
    local_1188 = local_1040;
    local_1180 = local_1048;
    local_1198 = local_1030;
    local_1190 = local_1038;
    pppppppbStack_7c8 = pppppppbStack_268;
    local_7d0 = local_270;
    local_11a8 = (byte *******)local_1020;
    local_11a0 = local_1028;
    pppppppbStack_7b8 = pppppppbStack_258;
    local_7c0 = local_260;
    pppppppbStack_7a8 = pppppppbStack_248;
    local_7b0 = local_250;
    pppppppbVar55 = local_10c8;
    pppppppbVar62 = local_10f8;
    lVar69 = local_10c0._0_8_;
    _Var58 = local_10c0._8_8_;
    pppppppbVar57 = local_10b0;
    pppppppbVar60 = pppppppbStack_10a8;
    auVar61 = local_10a0;
    lVar72 = local_1098;
    pppppppbVar85 = pppppppbStack_10f0;
    auVar77 = local_10e8;
    pppppppbVar68 = pppppppbStack_10e0;
    pppppppbVar83 = local_10d8;
    auVar79 = auStack_10d0;
    pppppppbVar80 = (byte *******)local_1110._16_8_;
    lVar56 = local_1090._8_8_;
    uVar88 = local_1080._0_8_;
    pppppppbVar89 = local_1010;
    unaff_x27 = local_1018;
    pppppppbVar78 = local_1008;
    lVar94 = local_1090._0_8_;
    local_1240 = local_1000;
    uVar97 = uStack_ff8;
    uStack_1248 = uStack_fe8;
    local_1260 = local_fe0;
    uStack_1258 = uStack_fd8;
    local_1270 = uStack_fd0;
    uStack_1268 = uStack_fc8;
    local_1280 = local_fc0;
    uStack_1278 = uStack_fb8;
    local_1290 = uStack_fb0;
    uStack_1288 = uStack_fa8;
    local_12a0 = local_fa0;
    uStack_1298 = uStack_f98;
    local_12b0 = uStack_f90;
    uStack_12a8 = uStack_f88;
    local_12c0 = local_f80;
    ppppppbVar96 = ppppppbStack_f78;
    local_12d0 = local_f70;
    ppppppbVar81 = local_f68;
    local_12e0 = local_f60;
    ppppppbVar82 = ppppppbStack_f58;
    pppppppbVar98 = local_f50;
    uStack_12e8 = uStack_f48;
    local_1300 = local_f40;
    uStack_12f8 = uStack_f38;
    local_1310 = local_f30;
    uStack_1308 = uStack_f28;
    local_1320 = local_f20;
    uStack_1318 = uStack_f18;
  }
  else {
    pppppppbStack_238 = *(byte ********)(unaff_x29 + -0xd8);
    local_240 = *(byte ********)(unaff_x29 + -0xe0);
    pppppppbStack_228 = *(byte ********)(unaff_x29 + -200);
    local_230 = *(byte ********)(unaff_x29 + -0xd0);
    pppppppbStack_218 = *(byte ********)(unaff_x29 + -0xb8);
    local_220 = *(byte ********)(unaff_x29 + -0xc0);
    if (local_208 != (byte *******)0x0) {
      uVar76 = FUN_0070f1c0((long)local_208 * 3,pppppppbStack_200);
    }
    pppppppbStack_7c8 = pppppppbStack_238;
    local_7d0 = local_240;
    pppppppbStack_7b8 = pppppppbStack_228;
    local_7c0 = local_230;
    pppppppbStack_7a8 = pppppppbStack_218;
    local_7b0 = local_220;
    pppppppbVar65 = (byte *******)uVar88;
    pppppppbVar54 = pppppppbVar85;
LAB_006be880:
    FUN_0070f4cc(uVar76);
    FUN_0070f294();
    pppppppbVar55 = local_11e8;
    pppppppbVar62 = local_11f0;
    lVar69 = local_11f8;
    _Var58 = local_1200;
    pppppppbVar57 = local_1208;
    pppppppbVar60 = local_1210;
    auVar61 = (undefined1  [8])local_1218;
    lVar72 = local_1220;
    pppppppbVar85 = local_11b0;
    auVar77 = (undefined1  [8])local_11b8;
    pppppppbVar68 = local_11c0;
    pppppppbVar83 = local_11c8;
    auVar79 = (undefined1  [8])local_11d8;
    pppppppbVar80 = local_11e0;
    lVar56 = local_1328;
    uVar88 = local_1330;
    pppppppbVar89 = (byte *******)unaff_x24;
    lVar94 = local_1228;
    uVar97 = uStack_1238;
    ppppppbVar96 = ppppppbStack_12b8;
    ppppppbVar81 = ppppppbStack_12c8;
    ppppppbVar82 = ppppppbStack_12d8;
    pppppppbVar98 = local_12f0;
    if (unaff_x20 == (byte *******)0xffffffffffffffff) goto LAB_006bfda4;
  }
LAB_006be8dc:
  local_1148 = auVar14._8_8_;
  local_1158 = auVar14._0_8_;
  local_700 = local_1148;
  local_6f8 = local_1150;
  local_6f0 = local_1158;
  local_6e8 = local_1160;
  local_6e0 = local_1168;
  local_6d8 = local_1170;
  local_6d0 = local_1180;
  local_6c8 = local_1188;
  local_6c0 = local_1190;
  local_6b8 = local_1198;
  local_6b0 = local_11a0;
  local_6a8 = local_11a8;
  pppppppbStack_570 = pppppppbStack_7b8;
  local_578 = local_7c0;
  pppppppbStack_560 = pppppppbStack_7a8;
  pppppppbStack_568 = local_7b0;
  pppppppbStack_580 = pppppppbStack_7c8;
  local_588 = local_7d0;
  local_7a0 = pppppppbVar86;
  pppppppbStack_798 = unaff_x20;
  local_790 = local_11d0;
  pppppppbStack_788 = pppppppbVar80;
  local_780 = pppppppbVar62;
  pppppppbStack_778 = pppppppbVar85;
  local_770 = (byte *******)auVar77;
  local_768 = pppppppbVar68;
  local_760 = pppppppbVar83;
  local_758 = (byte *******)auVar79;
  local_750 = pppppppbVar55;
  local_748 = lVar69;
  _Stack_740 = _Var58;
  local_738 = pppppppbVar57;
  pppppppbStack_730 = pppppppbVar60;
  local_728 = (long)auVar61;
  local_720 = lVar72;
  local_718 = lVar94;
  local_710 = lVar56;
  local_708 = uVar88;
  local_6a0 = unaff_x27;
  local_698 = pppppppbVar89;
  local_690 = pppppppbVar78;
  local_598 = pppppppbVar54;
  local_590 = pppppppbVar65;
  local_688 = local_1240;
  uStack_680 = uVar97;
  uStack_670 = uStack_1248;
  local_668 = local_1260;
  uStack_660 = uStack_1258;
  uStack_658 = local_1270;
  uStack_650 = uStack_1268;
  local_648 = local_1280;
  uStack_640 = uStack_1278;
  uStack_638 = local_1290;
  uStack_630 = uStack_1288;
  local_628 = local_12a0;
  uStack_620 = uStack_1298;
  uStack_618 = local_12b0;
  uStack_610 = uStack_12a8;
  local_608 = local_12c0;
  ppppppbStack_600 = ppppppbVar96;
  uStack_5f8 = local_12d0;
  ppppppbStack_5f0 = ppppppbVar81;
  local_5e8 = local_12e0;
  ppppppbStack_5e0 = ppppppbVar82;
  pppppppbStack_5d8 = pppppppbVar98;
  uStack_5d0 = uStack_12e8;
  local_5c8 = local_1300;
  uStack_5c0 = uStack_12f8;
  uStack_5b8 = local_1310;
  uStack_5b0 = uStack_1308;
  local_5a8 = local_1320;
  uStack_5a0 = uStack_1318;
  if (DAT_009a6d90 == 4) {
    DAT_009a6d90 = 3;
                    /* try { // try from 006be9fc to 006be9ff has its CatchHandler @ 006c0f48 */
    FUN_006c5200();
  }
  uVar76 = DAT_009a6d90 + 1;
  memcpy(local_550,&local_7a0,0x248);
  if (4 < uVar76) {
    ppuVar59 = &PTR_s__rustc_48a229ceaefd4985c50990b14_00977b08;
LAB_006bfef0:
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail(0,uVar76,4,ppuVar59);
  }
  if (uVar76 != 0) {
    lVar69 = uVar76 * 0x248;
    do {
      auVar101 = FUN_0070f56c();
      memcpy(auVar101._0_8_,auVar101._8_8_,0x248);
      FUN_0070f394();
      FUN_0070f364();
      lVar69 = lVar69 + -0x248;
    } while (lVar69 != 0);
  }
LAB_006bea5c:
  DAT_009a6d90 = uVar76;
  pppppppbVar92 = (byte *******)(uVar70 - lVar91);
  uVar76 = DAT_009a6650;
  uVar70 = DAT_009a6650;
  if (DAT_009a6650 != 0) {
    if (DAT_009a6650 == 1) {
      uVar76 = 0;
    }
    else {
      uVar76 = 0;
      do {
        uVar73 = uVar76 + (uVar70 >> 1);
        uVar70 = uVar70 - (uVar70 >> 1);
        if (*(byte ********)(DAT_009a6648 + uVar73 * 0x20 + 8) <= pppppppbVar92) {
          uVar76 = uVar73;
        }
      } while (1 < uVar70);
    }
    pppppppbVar80 = *(byte ********)(DAT_009a6648 + uVar76 * 0x20 + 8);
    if (pppppppbVar80 == pppppppbVar92) {
      uVar70 = 1;
    }
    else {
      uVar70 = 0;
      if (pppppppbVar80 < pppppppbVar92) {
        uVar76 = uVar76 + 1;
      }
    }
  }
  uVar70 = uVar70 + uVar76;
  if (DAT_009a6650 < uVar70) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (uVar70,DAT_009a6650,DAT_009a6650,&PTR_s__rust_deps_addr2line_0_25_1_src__00977aa8);
  }
  if (uVar70 != DAT_009a6650) {
    pppppppbVar86 = (byte *******)(DAT_009a6648 + DAT_009a6650 * 0x20);
    pppppppbVar80 = (byte *******)((long)pppppppbVar92 + 1);
    lVar69 = DAT_009a6650 * 0x20 + uVar70 * -0x20;
    pppppppbVar64 = (byte *******)(DAT_009a6648 + uVar70 * 0x20);
    do {
      pppppppbVar87 = pppppppbVar64 + 4;
      if (pppppppbVar80 <= pppppppbVar64[3]) {
        pppppppbVar64 = (byte *******)0x0;
        pppppppbVar65 = (byte *******)local_1110;
        uVar49 = 1;
LAB_006beb70:
        *pppppppbVar65 = (byte ******)pppppppbVar64;
        pppppppbVar64 =
             (byte *******)
             CONCAT17(local_1110[7],
                      CONCAT43(local_1110._3_4_,CONCAT21(local_1110._1_2_,local_1110[0])));
        if (pppppppbVar64 != (byte *******)0x0) {
          auVar101 = FUN_0070f56c();
          FUN_006d2e8c(auVar101._0_8_,auVar101._8_8_,pppppppbVar92,&DAT_009a6640);
          local_540 = (byte *******)&DAT_009a6640;
          local_538 = (byte *******)&DAT_009a6648;
          local_550[0] = pppppppbVar92;
          local_550[1] = pppppppbVar64;
          local_530 = pppppppbVar92;
          local_528 = pppppppbVar80;
          local_520 = pppppppbVar87;
          local_518 = pppppppbVar86;
          local_510 = pppppppbVar92;
          local_508 = pppppppbVar80;
          local_500 = uVar49;
          FUN_006dc6b4(&local_7a0,local_1110,local_550);
          if ((char)local_6e8 == '\x02') goto LAB_006bebe4;
          FUN_0070f4ec();
          cVar12 = *extraout_x9_01;
          uVar93 = *(uint *)(extraout_x9_01 + 0x4c);
          iVar53 = *(int *)(extraout_x9_01 + 0x50);
          uVar76 = *(ulong *)(extraout_x9_01 + 0x20);
          lVar69 = *(long *)(extraout_x9_01 + 8);
          uVar70 = *(ulong *)(extraout_x9_01 + 0x10);
          uVar73 = *(ulong *)(extraout_x9_01 + 0x30);
          uVar3 = *(uint *)(extraout_x9_01 + 0x48);
          lVar91 = *(long *)(extraout_x9_01 + 0x18);
          uVar74 = *(ulong *)(extraout_x9_01 + 0x40);
          _Var4 = *(__nlink_t *)(extraout_x9_01 + 0xb0);
          _Var5 = *(__blkcnt_t *)(extraout_x9_01 + 0xc0);
          lVar72 = *(long *)(extraout_x9_01 + 0xd0);
          uVar88 = *(undefined8 *)(extraout_x9_01 + 0x100);
          pppppppbVar80 = *(byte ********)(extraout_x9_01 + 0x110);
          uVar97 = *(undefined8 *)(extraout_x9_01 + 0xf0);
          uVar6 = *(undefined8 *)(extraout_x9_01 + 0x120);
          uVar7 = *(undefined8 *)(extraout_x9_01 + 0x130);
          uVar8 = *(undefined8 *)(extraout_x9_01 + 0xe0);
          uVar10 = *(undefined8 *)(extraout_x9_01 + 0xe8);
          pppppppbVar86 = *(byte ********)(extraout_x9_01 + 0x140);
          pppppppbVar64 = *(byte ********)(extraout_x9_01 + 0x148);
          goto LAB_006bee7c;
        }
        break;
      }
      if ((pppppppbVar92 < pppppppbVar64[1]) && (*pppppppbVar64 < pppppppbVar80)) {
        ppppppbVar96 = pppppppbVar64[2];
        if (DAT_009a6660 <= ppppppbVar96) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_bounds_check
                    (ppppppbVar96,DAT_009a6660,&PTR_s__rust_deps_addr2line_0_25_1_src__00977230);
        }
        uVar49 = 0;
        lVar69 = DAT_009a6658 + (long)ppppppbVar96 * 0x230;
        local_1110[0] = (undefined1)lVar69;
        local_1110._1_2_ = (undefined2)((ulong)lVar69 >> 8);
        local_1110._3_4_ = (undefined4)((ulong)lVar69 >> 0x18);
        local_1110[7] = (undefined1)((ulong)lVar69 >> 0x38);
        pppppppbVar65 = (byte *******)local_550;
        goto LAB_006beb70;
      }
      lVar69 = lVar69 + -0x20;
      pppppppbVar64 = pppppppbVar87;
    } while (lVar69 != 0);
  }
  uVar93 = 3;
LAB_006bebf4:
  pppppppbVar62 = local_758;
  pppppppbVar78 = local_760;
  pppppppbVar54 = local_770;
  pppppppbVar65 = pppppppbStack_778;
  pppppppbVar87 = local_780;
  pppppppbVar64 = pppppppbStack_788;
  pppppppbVar86 = local_790;
  pppppppbVar80 = pppppppbStack_798;
  if (uVar93 != 0xffffffff) {
    iVar53 = uVar93 - 3;
    if (uVar93 < 3) {
      iVar53 = 2;
    }
    if (iVar53 != 0) {
      uVar3 = local_7a0._4_4_;
      local_1128 = (ulong)pppppppbStack_798 >> 0x20;
      pppppppbVar85 = local_780 + 0x3a;
      local_1140 = local_750;
      pppppppbVar68 = local_780 + 0x39;
      if (iVar53 == 1) {
        if ((uVar93 < 3) && (local_758 != (byte *******)0x0)) {
          FUN_0070f1fc();
        }
        uVar93 = 3;
        pppppppbVar83 = pppppppbVar87;
        pppppppbVar55 = pppppppbVar64;
        pppppppbVar85 = (byte *******)&DAT_00000002;
        pppppppbVar57 = pppppppbVar80;
        pppppppbVar80 = pppppppbVar86;
      }
      else {
        pppppppbVar57 = (byte *******)CONCAT44(local_7a0._4_4_,uVar93);
        pppppppbVar83 = pppppppbVar64;
        pppppppbVar55 = pppppppbVar86;
        if (local_760 == local_750) {
          ppppppbVar96 = local_770[5];
          if (ppppppbVar96 != (byte ******)0x0) {
            unaff_x27 = (byte *******)local_770[6];
          }
          auVar102._8_8_ = unaff_x27;
          auVar102._0_8_ = ppppppbVar96;
          if (local_758 != (byte *******)0x0) {
            FUN_0070f1fc();
          }
          uVar93 = 3;
          pppppppbVar85 = pppppppbVar80;
          if (ppppppbVar96 != (byte ******)0x0) goto LAB_006bfb84;
        }
        else {
          local_1140 = local_750 + -1;
          ppppppbVar96 = *local_1140;
          uVar3 = *(uint *)(ppppppbVar96 + 5);
          local_1128 = (ulong)*(uint *)((long)ppppppbVar96 + 0x2c);
          uVar93 = (uint)(uVar3 != 0);
          if ((*ppppppbVar96 == (byte *****)0x1) &&
             (local_780[0xc] != (byte ******)0xfffffffffffffffe)) {
            ppppppbVar81 = (byte ******)ppppppbVar96[1];
            if (((ulong)local_780[0x39] & 1) == 0) {
                    /* try { // try from 006c0730 to 006c0733 has its CatchHandler @ 006c0d9c */
              pppppppbVar85 = (byte *******)FUN_0070f45c();
            }
            if (*pppppppbVar85 == (byte ******)0x0) {
              if (*(char *)(pppppppbVar85 + 1) != -1) {
                bVar50 = false;
                goto LAB_006bfd5c;
              }
              pppppppbVar85 = (byte *******)pppppppbVar85[2];
            }
            if (pppppppbVar85[1] <= ppppppbVar81) goto LAB_006bed5c;
            pppppbVar66 = (*pppppppbVar85)[(long)ppppppbVar81 * 3 + 1];
          }
          else {
LAB_006bed5c:
            pppppbVar66 = (byte *****)0x0;
          }
          pppppppbVar85 = (byte *******)(ulong)(local_1128 != 0);
          if (ppppppbVar96[3] != (byte *****)0x0) {
            auVar102._8_8_ = ppppppbVar96[4];
            auVar102._0_8_ = ppppppbVar96[3];
            FUN_0070f4f8(pppppbVar66);
            goto LAB_006bfb84;
          }
          FUN_0070f4f8(pppppbVar66);
        }
      }
                    /* try { // try from 006becb4 to 006becb7 has its CatchHandler @ 006c0f94 */
      auVar102 = FUN_0070f374();
LAB_006bfb84:
      ppppppbVar96 = auVar102._0_8_;
      local_1110[0] = SUB81(pppppppbVar57,0);
      local_1110._1_2_ = (undefined2)((ulong)pppppppbVar57 >> 8);
      local_1110._3_4_ = (undefined4)((ulong)pppppppbVar57 >> 0x18);
      local_1110[7] = (undefined1)((ulong)pppppppbVar57 >> 0x38);
      local_1110._8_4_ = SUB84(pppppppbVar80,0);
      local_1110[0xc] = (undefined1)((ulong)pppppppbVar80 >> 0x20);
      local_1110._13_2_ = (undefined2)((ulong)pppppppbVar80 >> 0x28);
      local_1110[0xf] = (undefined1)((ulong)pppppppbVar80 >> 0x38);
      local_1110._16_8_ = pppppppbVar55;
      local_10f8 = pppppppbVar83;
      pppppppbStack_10f0 = pppppppbVar92;
      _local_10e8 = auVar102;
                    /* try { // try from 006bfba8 to 006bfbab has its CatchHandler @ 006c0f94 */
      FUN_0070f478();
      do {
        iVar53 = uVar93 - 3;
        if (uVar93 < 3) {
          iVar53 = 2;
        }
        uVar70 = (ulong)pppppppbVar85 & 0xffffffff;
        if (iVar53 == 1) {
          if ((uVar93 < 3) && (pppppppbVar62 != (byte *******)0x0)) {
            FUN_0070f1fc();
          }
          pppppppbVar85 = (byte *******)&DAT_00000002;
          uVar93 = 3;
          uVar76 = uVar70 | local_1128 << 0x20;
          pppppppbVar80 = pppppppbVar64;
          pppppppbVar83 = pppppppbVar86;
          pppppppbVar55 = pppppppbVar87;
LAB_006bfcac:
                    /* try { // try from 006bfcac to 006bfcaf has its CatchHandler @ 006c0fdc */
          auVar113 = FUN_0070f374();
        }
        else {
          if (iVar53 != 2) goto LAB_006bfd4c;
          uVar76 = CONCAT44(uVar3,uVar93);
          pppppppbVar83 = (byte *******)(uVar70 | local_1128 << 0x20);
          pppppppbVar80 = pppppppbVar86;
          pppppppbVar55 = pppppppbVar64;
          if (pppppppbVar78 == local_1140) {
            ppppppbVar81 = pppppppbVar54[5];
            if (ppppppbVar81 != (byte ******)0x0) {
              ppppppbVar96 = pppppppbVar54[6];
            }
            auVar113._8_8_ = ppppppbVar96;
            auVar113._0_8_ = ppppppbVar81;
            if (pppppppbVar62 != (byte *******)0x0) {
              FUN_0070f1fc();
            }
            uVar93 = 3;
            if (ppppppbVar81 == (byte ******)0x0) goto LAB_006bfcac;
          }
          else {
            local_1140 = local_1140 + -1;
            ppppppbVar96 = *local_1140;
            uVar3 = *(uint *)(ppppppbVar96 + 5);
            local_1128 = (ulong)*(uint *)((long)ppppppbVar96 + 0x2c);
            uVar93 = (uint)(uVar3 != 0);
            pppppppbVar85 = (byte *******)(ulong)(local_1128 != 0);
            if ((((ulong)*ppppppbVar96 & 1) == 0) ||
               (pppppppbVar87[0xc] == (byte ******)0xfffffffffffffffe)) {
LAB_006bfcbc:
              pppppbVar66 = (byte *****)0x0;
            }
            else {
              ppppppbVar81 = (byte ******)ppppppbVar96[1];
              pppppppbVar57 = pppppppbVar87 + 0x3a;
              if (((ulong)*pppppppbVar68 & 1) == 0) {
                    /* try { // try from 006bfd3c to 006bfd47 has its CatchHandler @ 006c0e38 */
                pppppppbVar57 =
                     (byte *******)FUN_0070f45c(pppppppbVar57,pppppppbVar65,pppppppbVar87);
              }
              if (*pppppppbVar57 == (byte ******)0x0) {
                if (*(char *)(pppppppbVar57 + 1) != -1) {
                  bVar50 = true;
                  goto LAB_006bfd5c;
                }
                pppppppbVar57 = (byte *******)pppppppbVar57[2];
              }
              if (pppppppbVar57[1] <= ppppppbVar81) goto LAB_006bfcbc;
              pppppbVar66 = (*pppppppbVar57)[(long)ppppppbVar81 * 3 + 1];
            }
            if (ppppppbVar96[3] == (byte *****)0x0) {
              FUN_0070f4f8(pppppbVar66);
              goto LAB_006bfcac;
            }
            auVar113._8_8_ = ppppppbVar96[4];
            auVar113._0_8_ = ppppppbVar96[3];
            FUN_0070f4f8(pppppbVar66);
          }
        }
        ppppppbVar96 = auVar113._8_8_;
        local_1110[0] = (undefined1)uVar76;
        local_1110._1_2_ = (undefined2)(uVar76 >> 8);
        local_1110._3_4_ = (undefined4)(uVar76 >> 0x18);
        local_1110[7] = (undefined1)(uVar76 >> 0x38);
        local_1110._8_4_ = SUB84(pppppppbVar83,0);
        local_1110[0xc] = (undefined1)((ulong)pppppppbVar83 >> 0x20);
        local_1110._13_2_ = (undefined2)((ulong)pppppppbVar83 >> 0x28);
        local_1110[0xf] = (undefined1)((ulong)pppppppbVar83 >> 0x38);
        local_1110._16_8_ = pppppppbVar80;
        local_10f8 = pppppppbVar55;
        pppppppbStack_10f0 = pppppppbVar92;
        _local_10e8 = auVar113;
                    /* try { // try from 006bfd24 to 006bfd27 has its CatchHandler @ 006c0fdc */
        FUN_0070f478();
      } while( true );
    }
    bVar50 = false;
LAB_006bfd54:
    if (uVar93 < 3) {
LAB_006bfd5c:
      if (pppppppbVar62 != (byte *******)0x0) {
        FUN_0070f1fc();
      }
    }
    if (bVar50) goto LAB_006bfda4;
  }
  auVar101 = FUN_006e5200(&DAT_009a6478,pppppppbVar92);
  if (auVar101._0_8_ != 0) {
    local_1110._8_4_ = auVar101._0_4_;
    local_1110[0xc] = auVar101[4];
    local_1110._13_2_ = auVar101._5_2_;
    local_1110[0xf] = auVar101[7];
    local_1110[0] = 0xff;
    local_1110._1_2_ = 0xffff;
    local_1110[3] = 0xff;
    local_1110._16_8_ = auVar101._8_8_;
    (**(code **)(param_3 + 0x20))(auVar99._8_8_,local_1110);
  }
LAB_006bfda4:
  FUN_0070f3d0();
  return;
}


// ===== 006c10cc  FUN_006c10cc =====

void FUN_006c10cc(long *param_1,long *param_2,ulong param_3,ulong param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  short sVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  size_t __n;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  lVar13 = param_2[3];
  uVar15 = (ulong)*(ushort *)(lVar13 + 0x21a);
  uVar5 = uVar15;
  if (param_3 == 1) {
    uVar5 = (ulong)*(ushort *)(param_2[5] + 0x21a);
  }
  if (uVar5 < param_4) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic(&DAT_0045abd8,0x8e,&PTR_s__rustc_48a229ceaefd4985c50990b14_00976b68);
  }
  lVar14 = param_2[5];
  uVar12 = (ulong)*(ushort *)(lVar14 + 0x21a);
  uVar5 = uVar15 + 1 + uVar12;
  if (0xb < uVar5) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic(&DAT_0045ac66,0x2a,&PTR_s__rustc_48a229ceaefd4985c50990b14_00976b80);
  }
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  lVar11 = *param_2;
  lVar10 = lVar11 + uVar3 * 0x18;
  uVar8 = (ulong)*(ushort *)(lVar11 + 0x21a);
  *(short *)(lVar13 + 0x21a) = (short)uVar5;
  uVar6 = *(undefined8 *)(lVar10 + 0x18);
  __n = (~uVar3 + uVar8) * 0x18;
  uVar18 = *(undefined8 *)(lVar10 + 0x10);
  uVar17 = *(undefined8 *)(lVar10 + 8);
  lVar7 = param_2[4];
  memmove((void *)(lVar10 + 8),(void *)(lVar10 + 0x20),__n);
  puVar1 = (undefined8 *)(lVar13 + 8 + uVar15 * 0x18);
  lVar16 = (uVar15 + 1) * 0x18;
  puVar1[1] = uVar18;
  *puVar1 = uVar17;
  puVar1[2] = uVar6;
  memcpy((void *)(lVar13 + 8 + lVar16),(void *)(lVar14 + 8),uVar12 * 0x18);
  uVar18 = *(undefined8 *)(lVar10 + 0x118);
  uVar17 = *(undefined8 *)(lVar10 + 0x110);
  uVar6 = *(undefined8 *)(lVar10 + 0x120);
  memmove((void *)(lVar10 + 0x110),(void *)(lVar10 + 0x128),__n);
  puVar1 = (undefined8 *)(lVar13 + 0x110 + uVar15 * 0x18);
  puVar1[1] = uVar18;
  *puVar1 = uVar17;
  puVar1[2] = uVar6;
  memcpy((void *)(lVar13 + 0x110 + lVar16),(void *)(lVar14 + 0x110),uVar12 * 0x18);
  lVar10 = lVar11 + (uVar3 + 1) * 8;
  memmove((void *)(lVar10 + 0x220),(void *)(lVar10 + 0x228),(~uVar3 + uVar8) * 8);
  if (uVar3 + 1 < uVar8) {
    lVar10 = uVar3 + 0x45;
    do {
      sVar4 = (short)lVar10;
      plVar9 = *(long **)(lVar11 + lVar10 * 8);
      lVar10 = lVar10 + 1;
      *plVar9 = lVar11;
      *(short *)(plVar9 + 0x43) = sVar4 + -0x44;
    } while ((1 - uVar8) + lVar10 != 0x45);
  }
  *(short *)(lVar11 + 0x21a) = *(short *)(lVar11 + 0x21a) + -1;
  if (uVar2 < 2) {
    uVar6 = 0x220;
  }
  else {
    lVar10 = uVar12 + 1;
    if (lVar10 != uVar5 - uVar15) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic(&DAT_0045add3,0x28,&DAT_009770a8);
    }
    memcpy((void *)(lVar13 + 0x220 + (uVar15 + 1) * 8),(void *)(lVar14 + 0x220),lVar10 * 8);
    lVar11 = uVar15 + 0x45;
    uVar6 = 0x280;
    do {
      plVar9 = *(long **)(lVar13 + lVar11 * 8);
      sVar4 = (short)lVar11;
      lVar10 = lVar10 + -1;
      lVar11 = lVar11 + 1;
      *plVar9 = lVar13;
      *(short *)(plVar9 + 0x43) = sVar4 + -0x44;
    } while (lVar10 != 0);
  }
  lVar10 = uVar15 + 1;
  __rustc::__rust_dealloc(lVar14,uVar6,8);
  if ((param_3 & 1) == 0) {
    lVar10 = 0;
  }
  *param_1 = lVar13;
  param_1[1] = lVar7;
  param_1[2] = lVar10 + param_4;
  return;
}


// ===== 006c1384  FUN_006c1384 =====

undefined8 * FUN_006c1384(pthread_key_t param_1,long param_2,uint *param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 *__pointer;
  undefined8 *__ptr;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (param_2 == 1) {
    return (undefined8 *)0x0;
  }
  if (param_3 != (uint *)0x0) {
    uVar5 = *(undefined8 *)(param_3 + 2);
    param_3[0] = 0;
    param_3[1] = 0;
    if ((*param_3 & 1) != 0) goto LAB_006c13bc;
  }
  uVar5 = 0;
LAB_006c13bc:
  __pointer = (undefined8 *)malloc(0x10);
  if (__pointer != (undefined8 *)0x0) {
    *__pointer = uVar5;
    *(pthread_key_t *)(__pointer + 1) = param_1;
    __ptr = (undefined8 *)pthread_getspecific(param_1);
    pthread_setspecific(param_1,__pointer);
    if (__ptr != (undefined8 *)0x0) {
      plVar3 = (long *)*__ptr;
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
          <alloc::sync::[n]::alloc::sync::Arc<std::sync::poison::mutex::Mutex<alloc::vec::Vec<u8>>>>
          ::drop_slow(__ptr);
        }
      }
      free(__ptr);
    }
    return __pointer;
  }
                    /* try { // try from 006c145c to 006c1467 has its CatchHandler @ 006c146c */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x10);
}


// ===== 006c149c  FUN_006c149c =====

undefined8 * FUN_006c149c(pthread_key_t param_1,long param_2,uint *param_3)

{
  undefined8 *__pointer;
  void *pvVar1;
  undefined8 uVar2;
  
  if (param_2 == 1) {
    return (undefined8 *)0x0;
  }
  if (param_3 != (uint *)0x0) {
    uVar2 = *(undefined8 *)(param_3 + 2);
    param_3[0] = 0;
    param_3[1] = 0;
    if ((*param_3 & 1) != 0) goto LAB_006c14d4;
  }
  uVar2 = 0;
LAB_006c14d4:
  __pointer = (undefined8 *)malloc(0x10);
  if (__pointer != (undefined8 *)0x0) {
    *__pointer = uVar2;
    *(pthread_key_t *)(__pointer + 1) = param_1;
    pvVar1 = pthread_getspecific(param_1);
    pthread_setspecific(param_1,__pointer);
    if (pvVar1 != (void *)0x0) {
      FUN_006c3e6c(pvVar1);
    }
    return __pointer;
  }
                    /* try { // try from 006c154c to 006c1557 has its CatchHandler @ 006c155c */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x10);
}


// ===== 006c1574  FUN_006c1574 =====

undefined8 * FUN_006c1574(pthread_key_t param_1,long param_2,uint *param_3)

{
  undefined8 *__pointer;
  void *__ptr;
  undefined1 uVar1;
  undefined8 uVar2;
  
  if (param_2 == 1) {
    return (undefined8 *)0x0;
  }
  if (param_3 != (uint *)0x0) {
    uVar2 = *(undefined8 *)(param_3 + 2);
    uVar1 = (undefined1)param_3[4];
    param_3[0] = 0;
    param_3[1] = 0;
    if ((*param_3 & 1) != 0) goto LAB_006c15b0;
  }
  uVar1 = 0;
  uVar2 = 0;
LAB_006c15b0:
  __pointer = (undefined8 *)malloc(0x18);
  if (__pointer != (undefined8 *)0x0) {
    *__pointer = uVar2;
    *(undefined1 *)(__pointer + 1) = uVar1;
    *(pthread_key_t *)(__pointer + 2) = param_1;
    __ptr = pthread_getspecific(param_1);
    pthread_setspecific(param_1,__pointer);
    if (__ptr != (void *)0x0) {
      free(__ptr);
    }
    return __pointer;
  }
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x18);
}


// ===== 006c1628  FUN_006c1628 =====

byte * FUN_006c1628(pthread_key_t param_1,long param_2,byte *param_3)

{
  byte bVar1;
  byte *__pointer;
  void *__ptr;
  byte bVar2;
  
  if (param_2 == 1) {
    return (byte *)0x0;
  }
  if (param_3 != (byte *)0x0) {
    bVar1 = *param_3;
    bVar2 = param_3[1];
    *param_3 = 0;
    if ((bVar1 & 1) != 0) goto LAB_006c165c;
  }
  bVar2 = 0;
LAB_006c165c:
  __pointer = (byte *)malloc(8);
  if (__pointer != (byte *)0x0) {
    *__pointer = bVar2;
    *(pthread_key_t *)(__pointer + 4) = param_1;
    __ptr = pthread_getspecific(param_1);
    pthread_setspecific(param_1,__pointer);
    if (__ptr != (void *)0x0) {
      free(__ptr);
    }
    return __pointer;
  }
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(4,8);
}


// ===== 006c16d0  FUN_006c16d0 =====

void FUN_006c16d0(long *param_1,undefined8 *param_2,undefined1 *param_3)

{
  ulong uVar1;
  long lVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  size_t sVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  ulong local_180;
  long *local_168;
  long *local_118;
  ulong uStack_110;
  ulong local_108;
  long *local_100;
  ulong uStack_f8;
  ulong local_f0;
  long *plStack_e8;
  ulong local_e0;
  long *plStack_d8;
  ulong local_d0;
  long *local_c8;
  ulong uStack_c0;
  long local_b8;
  long *plStack_b0;
  ulong local_a8;
  long *plStack_a0;
  ulong local_98;
  long local_90;
  long lStack_88;
  long local_80;
  
  plVar19 = (long *)*param_2;
  local_180 = param_2[2];
  uVar3 = *(ushort *)((long)plVar19 + 0x21a);
  sVar22 = ((ulong)uVar3 + ~local_180) * 0x18;
  lVar26 = plVar19[local_180 * 3 + 2];
  lVar24 = plVar19[local_180 * 3 + 1];
  lVar17 = plVar19[local_180 * 3 + 3];
  memmove(plVar19 + local_180 * 3 + 1,plVar19 + local_180 * 3 + 4,sVar22);
  lVar27 = plVar19[local_180 * 3 + 0x23];
  lVar25 = plVar19[local_180 * 3 + 0x22];
  lVar7 = plVar19[local_180 * 3 + 0x24];
  memmove(plVar19 + local_180 * 3 + 0x22,plVar19 + local_180 * 3 + 0x25,sVar22);
  uVar5 = uVar3 - 1;
  uVar12 = param_2[1];
  *(ushort *)((long)plVar19 + 0x21a) = uVar5;
  if (4 < uVar5) goto LAB_006c18a0;
  plVar10 = (long *)*plVar19;
  if (plVar10 == (long *)0x0) {
LAB_006c1878:
    plVar10 = (long *)*plVar19;
  }
  else {
    uVar4 = *(ushort *)(plVar19 + 0x43);
    uVar11 = uVar12 + 1;
    if (uVar4 == 0) {
      if (*(short *)((long)plVar10 + 0x21a) == 0) {
LAB_006c1bd0:
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_fmt
                  (&DAT_0045b59c,0x7b,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977a90);
      }
      plStack_a0 = (long *)plVar10[0x45];
      local_b8 = 0;
      plStack_b0 = plVar19;
      if (0xb < (ulong)uVar3 + (ulong)*(ushort *)((long)plStack_a0 + 0x21a)) {
        local_c8 = plVar10;
        uStack_c0 = uVar11;
        local_a8 = uVar12;
        local_98 = uVar12;
        FUN_006d9138(&local_c8,1);
        goto LAB_006c1878;
      }
      local_c8 = plVar10;
      uStack_c0 = uVar11;
      local_a8 = uVar12;
      local_98 = uVar12;
      FUN_006c10cc(&local_118,&local_c8,0,local_180);
    }
    else {
      local_b8 = (ulong)uVar4 - 1;
      plStack_b0 = (long *)plVar10[(ulong)uVar4 + 0x43];
      plStack_a0 = plVar19;
      if (0xb < (ulong)*(ushort *)((long)plStack_b0 + 0x21a) + (ulong)uVar5 + 1) {
        local_c8 = plVar10;
        uStack_c0 = uVar11;
        local_a8 = uVar12;
        local_98 = uVar12;
        FUN_006d8eb4(&local_c8,1);
        local_180 = local_180 + 1;
        goto LAB_006c1878;
      }
                    /* try { // try from 006c17c8 to 006c186f has its CatchHandler @ 006c1bec */
      local_c8 = plVar10;
      uStack_c0 = uVar11;
      local_a8 = uVar12;
      local_98 = uVar12;
      FUN_006c10cc(&local_118,&local_c8,1,local_180);
    }
    plVar10 = (long *)*local_118;
    plVar19 = local_118;
    uVar12 = uStack_110;
    local_180 = local_108;
  }
  if ((plVar10 != (long *)0x0) && (uVar3 = *(ushort *)((long)plVar10 + 0x21a), uVar3 < 5)) {
    uVar11 = uVar12 + 1;
    local_118 = plVar19;
    uStack_110 = uVar12;
    local_108 = local_180;
    do {
      uVar8 = (ulong)uVar3;
      plVar21 = (long *)*plVar10;
      if (plVar21 == (long *)0x0) {
        if (uVar3 == 0) {
          *param_3 = 1;
        }
        break;
      }
      uVar3 = *(ushort *)(plVar10 + 0x43);
      uVar1 = uVar11 + 1;
      if (uVar3 == 0) {
        uVar3 = *(ushort *)((long)plVar21 + 0x21a);
        if (uVar3 == 0) goto LAB_006c1bd0;
        local_168 = (long *)plVar21[0x45];
        lVar18 = uVar8 + 1;
        local_b8 = 0;
        uVar23 = (ulong)*(ushort *)((long)local_168 + 0x21a);
        uVar13 = lVar18 + uVar23;
        local_c8 = plVar21;
        uStack_c0 = uVar1;
        plStack_b0 = plVar10;
        local_a8 = uVar11;
        plStack_a0 = local_168;
        local_98 = uVar11;
        if (0xb < uVar13) {
          FUN_006d9138(&local_c8,5 - uVar8);
          break;
        }
        uVar15 = 0;
        uVar16 = uVar8;
        plVar20 = plVar10;
      }
      else {
        uVar15 = (ulong)uVar3 - 1;
        plStack_e8 = (long *)plVar21[(ulong)uVar3 + 0x43];
        uVar16 = (ulong)*(ushort *)((long)plStack_e8 + 0x21a);
        local_100 = plVar21;
        uStack_f8 = uVar1;
        local_f0 = uVar15;
        local_e0 = uVar11;
        plStack_d8 = plVar10;
        local_d0 = uVar11;
        if (0xb < uVar8 + uVar16 + 1) {
                    /* try { // try from 006c1b78 to 006c1be7 has its CatchHandler @ 006c1bec */
          FUN_006d8eb4(&local_100,5 - uVar8);
          break;
        }
        lVar18 = uVar16 + 1;
        uVar13 = lVar18 + uVar8;
        if (0xb < uVar13) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic
                    (&DAT_0045ac66,0x2a,&PTR_s__rustc_48a229ceaefd4985c50990b14_00976b80);
        }
        uVar3 = *(ushort *)((long)plVar21 + 0x21a);
        plVar20 = plStack_e8;
        uVar23 = uVar8;
        local_168 = plVar10;
      }
      uVar8 = (ulong)uVar3;
      *(short *)((long)plVar20 + 0x21a) = (short)uVar13;
      iVar14 = (int)uVar15;
      lStack_88 = plVar21[(long)iVar14 * 3 + 2];
      local_90 = plVar21[(long)iVar14 * 3 + 1];
      local_80 = plVar21[(long)iVar14 * 3 + 3];
      sVar22 = (~uVar15 + uVar8) * 0x18;
      memmove(plVar21 + (long)iVar14 * 3 + 1,plVar21 + (long)iVar14 * 3 + 4,sVar22);
      plVar10 = plVar20 + uVar16 * 3 + 1;
      plVar10[1] = lStack_88;
      *plVar10 = local_90;
      plVar10[2] = local_80;
      memcpy(plVar20 + lVar18 * 3 + 1,local_168 + 1,uVar23 * 0x18);
      lStack_88 = plVar21[(long)iVar14 * 3 + 0x23];
      local_90 = plVar21[(long)iVar14 * 3 + 0x22];
      local_80 = plVar21[(long)iVar14 * 3 + 0x24];
      memmove(plVar21 + (long)iVar14 * 3 + 0x22,plVar21 + (long)iVar14 * 3 + 0x25,sVar22);
      plVar10 = plVar20 + uVar16 * 3 + 0x22;
      plVar10[1] = lStack_88;
      *plVar10 = local_90;
      plVar10[2] = local_80;
      memcpy(plVar20 + lVar18 * 3 + 0x22,local_168 + 0x22,uVar23 * 0x18);
      memmove(plVar21 + uVar15 + 0x45,plVar21 + uVar15 + 0x46,(~uVar15 + uVar8) * 8);
      uVar11 = uVar15 + 1;
      if (uVar15 + 1 < uVar8) {
        do {
          uVar15 = uVar11 + 1;
          puVar9 = (undefined8 *)plVar21[uVar11 + 0x44];
          *(short *)(puVar9 + 0x43) = (short)uVar11;
          *puVar9 = plVar21;
          uVar11 = uVar15;
        } while (uVar8 != uVar15);
      }
      *(short *)((long)plVar21 + 0x21a) = *(short *)((long)plVar21 + 0x21a) + -1;
      if (uVar1 < 2) {
        uVar6 = 0x220;
      }
      else {
        if (uVar23 + 1 != uVar13 - uVar16) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic(&DAT_0045add3,0x28,&DAT_009770a8);
        }
        memcpy(plVar20 + lVar18 + 0x44,local_168 + 0x44,(uVar23 + 1) * 8);
        do {
          lVar2 = lVar18 + 1;
          puVar9 = (undefined8 *)plVar20[lVar18 + 0x44];
          *(short *)(puVar9 + 0x43) = (short)lVar18;
          *puVar9 = plVar20;
          lVar18 = lVar2;
        } while (uVar13 + 1 != lVar2);
        uVar6 = 0x280;
      }
      __rustc::__rust_dealloc(local_168,uVar6,8);
      uVar3 = *(ushort *)((long)plVar21 + 0x21a);
      uVar11 = uVar1;
      plVar10 = plVar21;
    } while (uVar3 < 5);
  }
LAB_006c18a0:
  param_1[1] = lVar26;
  *param_1 = lVar24;
  param_1[3] = lVar25;
  param_1[2] = lVar17;
  param_1[5] = lVar7;
  param_1[4] = lVar27;
  param_1[6] = (long)plVar19;
  param_1[7] = uVar12;
  param_1[8] = local_180;
  return;
}


// ===== 006c1c00  FUN_006c1c00 =====

void FUN_006c1c00(long *param_1,undefined8 *param_2,undefined1 *param_3)

{
  ulong uVar1;
  long lVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  size_t sVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  ulong local_180;
  long *local_168;
  long *local_118;
  ulong uStack_110;
  ulong local_108;
  long *local_100;
  ulong uStack_f8;
  ulong local_f0;
  long *plStack_e8;
  ulong local_e0;
  long *plStack_d8;
  ulong local_d0;
  long *local_c8;
  ulong uStack_c0;
  long local_b8;
  long *plStack_b0;
  ulong local_a8;
  long *plStack_a0;
  ulong local_98;
  long local_90;
  long lStack_88;
  long local_80;
  
  plVar19 = (long *)*param_2;
  local_180 = param_2[2];
  uVar3 = *(ushort *)((long)plVar19 + 0x21a);
  sVar22 = ((ulong)uVar3 + ~local_180) * 0x18;
  lVar26 = plVar19[local_180 * 3 + 2];
  lVar24 = plVar19[local_180 * 3 + 1];
  lVar17 = plVar19[local_180 * 3 + 3];
  memmove(plVar19 + local_180 * 3 + 1,plVar19 + local_180 * 3 + 4,sVar22);
  lVar27 = plVar19[local_180 * 3 + 0x23];
  lVar25 = plVar19[local_180 * 3 + 0x22];
  lVar7 = plVar19[local_180 * 3 + 0x24];
  memmove(plVar19 + local_180 * 3 + 0x22,plVar19 + local_180 * 3 + 0x25,sVar22);
  uVar5 = uVar3 - 1;
  uVar12 = param_2[1];
  *(ushort *)((long)plVar19 + 0x21a) = uVar5;
  if (4 < uVar5) goto LAB_006c1dd0;
  plVar10 = (long *)*plVar19;
  if (plVar10 == (long *)0x0) {
LAB_006c1da8:
    plVar10 = (long *)*plVar19;
  }
  else {
    uVar4 = *(ushort *)(plVar19 + 0x43);
    uVar11 = uVar12 + 1;
    if (uVar4 == 0) {
      if (*(short *)((long)plVar10 + 0x21a) == 0) {
LAB_006c2100:
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_fmt
                  (&DAT_0045b59c,0x7b,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977a90);
      }
      plStack_a0 = (long *)plVar10[0x45];
      local_b8 = 0;
      plStack_b0 = plVar19;
      if (0xb < (ulong)uVar3 + (ulong)*(ushort *)((long)plStack_a0 + 0x21a)) {
        local_c8 = plVar10;
        uStack_c0 = uVar11;
        local_a8 = uVar12;
        local_98 = uVar12;
        FUN_006d9138(&local_c8,1);
        goto LAB_006c1da8;
      }
      local_c8 = plVar10;
      uStack_c0 = uVar11;
      local_a8 = uVar12;
      local_98 = uVar12;
      FUN_006c10cc(&local_118,&local_c8,0,local_180);
    }
    else {
      local_b8 = (ulong)uVar4 - 1;
      plStack_b0 = (long *)plVar10[(ulong)uVar4 + 0x43];
      plStack_a0 = plVar19;
      if (0xb < (ulong)*(ushort *)((long)plStack_b0 + 0x21a) + (ulong)uVar5 + 1) {
        local_c8 = plVar10;
        uStack_c0 = uVar11;
        local_a8 = uVar12;
        local_98 = uVar12;
        FUN_006d8eb4(&local_c8,1);
        local_180 = local_180 + 1;
        goto LAB_006c1da8;
      }
                    /* try { // try from 006c1cf8 to 006c1d9f has its CatchHandler @ 006c211c */
      local_c8 = plVar10;
      uStack_c0 = uVar11;
      local_a8 = uVar12;
      local_98 = uVar12;
      FUN_006c10cc(&local_118,&local_c8,1,local_180);
    }
    plVar10 = (long *)*local_118;
    plVar19 = local_118;
    uVar12 = uStack_110;
    local_180 = local_108;
  }
  if ((plVar10 != (long *)0x0) && (uVar3 = *(ushort *)((long)plVar10 + 0x21a), uVar3 < 5)) {
    uVar11 = uVar12 + 1;
    local_118 = plVar19;
    uStack_110 = uVar12;
    local_108 = local_180;
    do {
      uVar8 = (ulong)uVar3;
      plVar21 = (long *)*plVar10;
      if (plVar21 == (long *)0x0) {
        if (uVar3 == 0) {
          *param_3 = 1;
        }
        break;
      }
      uVar3 = *(ushort *)(plVar10 + 0x43);
      uVar1 = uVar11 + 1;
      if (uVar3 == 0) {
        uVar3 = *(ushort *)((long)plVar21 + 0x21a);
        if (uVar3 == 0) goto LAB_006c2100;
        local_168 = (long *)plVar21[0x45];
        lVar18 = uVar8 + 1;
        local_b8 = 0;
        uVar23 = (ulong)*(ushort *)((long)local_168 + 0x21a);
        uVar13 = lVar18 + uVar23;
        local_c8 = plVar21;
        uStack_c0 = uVar1;
        plStack_b0 = plVar10;
        local_a8 = uVar11;
        plStack_a0 = local_168;
        local_98 = uVar11;
        if (0xb < uVar13) {
          FUN_006d9138(&local_c8,5 - uVar8);
          break;
        }
        uVar15 = 0;
        uVar16 = uVar8;
        plVar20 = plVar10;
      }
      else {
        uVar15 = (ulong)uVar3 - 1;
        plStack_e8 = (long *)plVar21[(ulong)uVar3 + 0x43];
        uVar16 = (ulong)*(ushort *)((long)plStack_e8 + 0x21a);
        local_100 = plVar21;
        uStack_f8 = uVar1;
        local_f0 = uVar15;
        local_e0 = uVar11;
        plStack_d8 = plVar10;
        local_d0 = uVar11;
        if (0xb < uVar8 + uVar16 + 1) {
                    /* try { // try from 006c20a8 to 006c2117 has its CatchHandler @ 006c211c */
          FUN_006d8eb4(&local_100,5 - uVar8);
          break;
        }
        lVar18 = uVar16 + 1;
        uVar13 = lVar18 + uVar8;
        if (0xb < uVar13) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic
                    (&DAT_0045ac66,0x2a,&PTR_s__rustc_48a229ceaefd4985c50990b14_00976b80);
        }
        uVar3 = *(ushort *)((long)plVar21 + 0x21a);
        plVar20 = plStack_e8;
        uVar23 = uVar8;
        local_168 = plVar10;
      }
      uVar8 = (ulong)uVar3;
      *(short *)((long)plVar20 + 0x21a) = (short)uVar13;
      iVar14 = (int)uVar15;
      lStack_88 = plVar21[(long)iVar14 * 3 + 2];
      local_90 = plVar21[(long)iVar14 * 3 + 1];
      local_80 = plVar21[(long)iVar14 * 3 + 3];
      sVar22 = (~uVar15 + uVar8) * 0x18;
      memmove(plVar21 + (long)iVar14 * 3 + 1,plVar21 + (long)iVar14 * 3 + 4,sVar22);
      plVar10 = plVar20 + uVar16 * 3 + 1;
      plVar10[1] = lStack_88;
      *plVar10 = local_90;
      plVar10[2] = local_80;
      memcpy(plVar20 + lVar18 * 3 + 1,local_168 + 1,uVar23 * 0x18);
      lStack_88 = plVar21[(long)iVar14 * 3 + 0x23];
      local_90 = plVar21[(long)iVar14 * 3 + 0x22];
      local_80 = plVar21[(long)iVar14 * 3 + 0x24];
      memmove(plVar21 + (long)iVar14 * 3 + 0x22,plVar21 + (long)iVar14 * 3 + 0x25,sVar22);
      plVar10 = plVar20 + uVar16 * 3 + 0x22;
      plVar10[1] = lStack_88;
      *plVar10 = local_90;
      plVar10[2] = local_80;
      memcpy(plVar20 + lVar18 * 3 + 0x22,local_168 + 0x22,uVar23 * 0x18);
      memmove(plVar21 + uVar15 + 0x45,plVar21 + uVar15 + 0x46,(~uVar15 + uVar8) * 8);
      uVar11 = uVar15 + 1;
      if (uVar15 + 1 < uVar8) {
        do {
          uVar15 = uVar11 + 1;
          puVar9 = (undefined8 *)plVar21[uVar11 + 0x44];
          *(short *)(puVar9 + 0x43) = (short)uVar11;
          *puVar9 = plVar21;
          uVar11 = uVar15;
        } while (uVar8 != uVar15);
      }
      *(short *)((long)plVar21 + 0x21a) = *(short *)((long)plVar21 + 0x21a) + -1;
      if (uVar1 < 2) {
        uVar6 = 0x220;
      }
      else {
        if (uVar23 + 1 != uVar13 - uVar16) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic(&DAT_0045add3,0x28,&DAT_009770a8);
        }
        memcpy(plVar20 + lVar18 + 0x44,local_168 + 0x44,(uVar23 + 1) * 8);
        do {
          lVar2 = lVar18 + 1;
          puVar9 = (undefined8 *)plVar20[lVar18 + 0x44];
          *(short *)(puVar9 + 0x43) = (short)lVar18;
          *puVar9 = plVar20;
          lVar18 = lVar2;
        } while (uVar13 + 1 != lVar2);
        uVar6 = 0x280;
      }
      __rustc::__rust_dealloc(local_168,uVar6,8);
      uVar3 = *(ushort *)((long)plVar21 + 0x21a);
      uVar11 = uVar1;
      plVar10 = plVar21;
    } while (uVar3 < 5);
  }
LAB_006c1dd0:
  param_1[1] = lVar26;
  *param_1 = lVar24;
  param_1[3] = lVar25;
  param_1[2] = lVar17;
  param_1[5] = lVar7;
  param_1[4] = lVar27;
  param_1[6] = (long)plVar19;
  param_1[7] = uVar12;
  param_1[8] = local_180;
  return;
}


// ===== 006c2130  FUN_006c2130 =====

void FUN_006c2130(ulong *param_1,long *param_2)

{
  ulong uVar1;
  byte *pbVar2;
  undefined2 *puVar3;
  uint uVar4;
  byte *pbVar5;
  byte bVar6;
  byte bVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 uVar10;
  byte *pbVar11;
  byte *extraout_x9;
  byte *pbVar12;
  byte *pbVar13;
  undefined4 uVar14;
  ulong uVar15;
  byte *pbVar16;
  ulong uVar17;
  byte *pbVar18;
  int iVar19;
  byte *pbVar20;
  ulong local_88;
  ulong local_78;
  ulong uStack_70;
  ulong local_68;
  
  pbVar18 = (byte *)*param_2;
  if (param_2[1] == 0) {
    *(undefined2 *)((long)param_1 + 0xe) = 0;
    *(undefined2 *)(param_1 + 1) = 0x13;
    *(undefined4 *)((long)param_1 + 10) = 0;
    param_1[2] = (ulong)pbVar18;
    *param_1 = 0xffffffffffffffff;
  }
  else {
    pbVar16 = pbVar18 + 1;
    uVar17 = (ulong)*pbVar18;
    pbVar18 = (byte *)(param_2[1] + -1);
    *param_2 = (long)pbVar16;
    param_2[1] = (long)pbVar18;
    if (uVar17 == 0) {
      local_68 = 0;
      local_78 = 0;
      uStack_70 = 2;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar9 = __rustc::__rust_alloc(uVar17 << 2,2);
      if (uVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        alloc::raw_vec::handle_error(2,uVar17 << 2);
      }
      iVar19 = 0;
      local_68 = 0;
      pbVar12 = extraout_x9;
      local_78 = uVar17;
      uStack_70 = uVar9;
      do {
        uVar8 = local_68;
        if (pbVar18 == (byte *)0x0) {
LAB_006c2398:
          pbVar12 = pbVar16;
          uVar10 = 0x13;
LAB_006c23a0:
          *(undefined1 *)(param_1 + 1) = uVar10;
          *(undefined1 *)((long)param_1 + 9) = 0;
          *(undefined2 *)((long)param_1 + 0xe) = 0;
          *(undefined4 *)((long)param_1 + 10) = 0;
          param_1[2] = (ulong)pbVar12;
          *param_1 = 0xffffffffffffffff;
          goto joined_r0x006c236c;
        }
        pbVar11 = (byte *)0x0;
        pbVar20 = (byte *)0x0;
        uVar15 = 0;
        uVar1 = local_68 + 1;
        while( true ) {
          bVar7 = pbVar16[(long)pbVar11];
          if (((int)uVar15 == 0x3f) && (1 < bVar7)) {
            *param_2 = (long)(pbVar16 + (long)pbVar11 + 1);
            param_2[1] = (long)(pbVar18 + ~(ulong)pbVar11);
            uVar10 = 6;
            goto LAB_006c23a0;
          }
          pbVar20 = (byte *)(((ulong)bVar7 & 0x7f) << (uVar15 & 0x3f) | (ulong)pbVar20);
          if (-1 < (char)bVar7) break;
          pbVar11 = pbVar11 + 1;
          uVar15 = (ulong)((int)uVar15 + 7);
          if (pbVar18 == pbVar11) {
            *param_2 = (long)(pbVar16 + (long)pbVar18);
            param_2[1] = 0;
            pbVar16 = pbVar16 + (long)pbVar18;
            goto LAB_006c2398;
          }
        }
        pbVar12 = pbVar16 + (long)pbVar11;
        pbVar5 = pbVar20;
        if ((byte *)0xfffe < pbVar20) {
          pbVar5 = (byte *)0xffff;
        }
        pbVar13 = pbVar12 + 1;
        if (pbVar20 == (byte *)0x1) {
          iVar19 = iVar19 + 1;
        }
        *param_2 = (long)pbVar13;
        param_2[1] = (long)(pbVar18 + ~(ulong)pbVar11);
        if (pbVar18 + -1 == pbVar11) {
          local_88 = 0;
          uVar14 = 0;
          uVar10 = 0x13;
LAB_006c2440:
          *(undefined1 *)(param_1 + 1) = uVar10;
          *(undefined1 *)((long)param_1 + 9) = 0;
          *(short *)((long)param_1 + 10) = (short)local_88;
          *(undefined4 *)((long)param_1 + 0xc) = uVar14;
          param_1[2] = (ulong)pbVar13;
          *param_1 = 0xffffffffffffffff;
          goto joined_r0x006c236c;
        }
        pbVar13 = pbVar18 + -(long)pbVar11;
        pbVar2 = pbVar12 + 2;
        bVar7 = pbVar12[1];
        *param_2 = (long)pbVar2;
        param_2[1] = (long)(pbVar13 + -2);
        if ((char)bVar7 < 0) {
          if (pbVar18 + -2 == pbVar11) {
            local_88 = 0;
            uVar14 = 0;
            pbVar13 = pbVar16 + (long)pbVar11 + 2;
            uVar10 = 0x13;
          }
          else {
            bVar6 = *pbVar2;
            pbVar2 = pbVar16 + (long)pbVar11 + 3;
            uVar4 = (int)(char)bVar7 & 0x7fU | (bVar6 & 0x7f) << 7;
            uVar15 = (ulong)uVar4;
            *param_2 = (long)pbVar2;
            param_2[1] = (long)(pbVar13 + -3);
            pbVar12 = pbVar13 + -3;
            if (-1 < (char)bVar6) goto joined_r0x006c22cc;
            if (pbVar18 + -3 == pbVar11) {
              local_88 = 0;
              uVar14 = 0;
              pbVar13 = pbVar16 + (long)pbVar11 + 3;
              uVar10 = 0x13;
            }
            else {
              bVar7 = *pbVar2;
              *param_2 = (long)(pbVar16 + (long)pbVar11 + 4);
              param_2[1] = (long)(pbVar13 + -4);
              if (bVar7 < 4) {
                uVar15 = (ulong)(uVar4 | (uint)bVar7 << 0xe) & 0xffff;
                pbVar12 = pbVar13 + -4;
                pbVar2 = pbVar16 + (long)pbVar11 + 4;
                goto joined_r0x006c22cc;
              }
              uVar10 = 6;
              uVar14 = (undefined4)(local_88 >> 0x10);
            }
          }
          goto LAB_006c2440;
        }
        uVar15 = (ulong)(int)(char)bVar7;
        pbVar12 = pbVar13 + -2;
joined_r0x006c22cc:
        pbVar16 = pbVar2;
        pbVar18 = pbVar12;
        if (local_68 == local_78) {
                    /* try { // try from 006c22d0 to 006c22d7 has its CatchHandler @ 006c2474 */
          <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<gimli::read::line::FileEntryFormat>>::
          grow_one(&local_78);
          uVar9 = uStack_70;
        }
        puVar3 = (undefined2 *)(uVar9 + uVar8 * 4);
        puVar3[1] = (short)uVar15;
        *puVar3 = (short)pbVar5;
        local_88 = local_88 & 0xffffffffffff0000 | uVar15;
        pbVar12 = pbVar20;
        local_68 = uVar1;
      } while (uVar1 != uVar17);
      if (iVar19 == 1) {
        param_1[1] = uStack_70;
        *param_1 = local_78;
        param_1[2] = uVar1;
        return;
      }
    }
    *(undefined1 *)(param_1 + 1) = 0x47;
    *param_1 = 0xffffffffffffffff;
joined_r0x006c236c:
    if (local_78 != 0) {
      __rustc::__rust_dealloc(uStack_70,local_78 << 2,2);
    }
  }
  return;
}


// ===== 006c2498  FUN_006c2498 =====

void FUN_006c2498(ulong *param_1,byte *param_2)

{
  bool bVar1;
  char *__src;
  ulong uVar2;
  ulong __n;
  ulong uVar3;
  
  __n = (ulong)*param_2 - 5;
  if (*param_2 < 6) {
    __n = 0;
  }
  if ((long)__n < 2) {
    if (__n == 0) {
      __src = *(char **)(param_2 + 0x28);
      __n = *(ulong *)(param_2 + 0x30);
      uVar3 = param_1[2];
      goto joined_r0x006c251c;
    }
    __src = &DAT_0045b2ad;
    uVar3 = param_1[2];
joined_r0x006c2560:
    if (uVar3 == 0) goto LAB_006c2564;
LAB_006c2538:
    bVar1 = *(char *)(param_1[1] + uVar3 + -1) != '/';
    if (__n == 0) goto LAB_006c2590;
LAB_006c256c:
    if (*__src != '/') goto LAB_006c2590;
    uVar3 = 0;
    param_1[2] = 0;
    if (*param_1 < __n) goto LAB_006c25f0;
  }
  else {
    if (__n == 2) {
      __src = &DAT_0045b467;
      __n = 1;
      uVar3 = param_1[2];
    }
    else {
      if (__n != 3) {
        __src = *(char **)(param_2 + 8);
        __n = *(ulong *)(param_2 + 0x10);
        uVar3 = param_1[2];
        goto joined_r0x006c2560;
      }
      __src = &DAT_0045b468;
      __n = 2;
      uVar3 = param_1[2];
    }
joined_r0x006c251c:
    if (uVar3 != 0) goto LAB_006c2538;
LAB_006c2564:
    bVar1 = false;
    if (__n != 0) goto LAB_006c256c;
LAB_006c2590:
    uVar2 = *param_1;
    if (bVar1) {
      if (uVar2 == uVar3) {
        FUN_006cecec(param_1,uVar3,1,1,1);
        uVar3 = param_1[2];
        uVar2 = *param_1;
      }
      *(undefined1 *)(param_1[1] + uVar3) = 0x2f;
      uVar3 = uVar3 + 1;
      param_1[2] = uVar3;
    }
    if (uVar2 - uVar3 < __n) {
LAB_006c25f0:
      FUN_006cecec(param_1,uVar3,__n,1,1);
      uVar3 = param_1[2];
    }
    else if (__n == 0) goto LAB_006c25d4;
  }
  memcpy((void *)(param_1[1] + uVar3),__src,__n);
LAB_006c25d4:
  param_1[2] = uVar3 + __n;
  return;
}


// ===== 006c2644  FUN_006c2644 =====

void FUN_006c2644(undefined8 *param_1)

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
                    /* try { // try from 006c2670 to 006c2677 has its CatchHandler @ 006c2690 */
    <alloc[cc0d62b833a55794]::sync::Arc<gimli[d400ddce60e1bc02]::read::dwarf::Dwarf<gimli[d400ddce60e1bc02]::read::endian_slice::EndianSlice<gimli[d400ddce60e1bc02]::endianity::LittleEndian>>>>
    ::drop_slow(param_1);
  }
                    /* try { // try from 006c2678 to 006c267f has its CatchHandler @ 006c26a0 */
  FUN_006c304c(param_1 + 1);
  FUN_006c311c(param_1[5],param_1[6]);
  return;
}


// ===== 006c26b8  FUN_006c26b8 =====

void FUN_006c26b8(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (*param_1 != 0) {
                    /* try { // try from 006c26cc to 006c26d7 has its CatchHandler @ 006c2714 */
    <std::thread::spawnhook::SpawnHooks_as_core::ops::drop::Drop>::drop(param_1 + 1);
    plVar3 = (long *)param_1[1];
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
        <alloc::sync::[n]::alloc::sync::Arc<std::thread::spawnhook::SpawnHook>>::drop_slow
                  (param_1 + 1);
        return;
      }
    }
  }
  return;
}


// ===== 006c274c  FUN_006c274c =====

void FUN_006c274c(long *param_1)

{
  if ((*param_1 != 0) && (param_1[1] != 0)) {
    __rustc::__rust_dealloc(*param_1,param_1[1] << 2,4);
    return;
  }
  return;
}


// ===== 006c2770  FUN_006c2770 =====

void FUN_006c2770(long *param_1)

{
  if (*param_1 != -2) {
    if (param_1[0xb] != 0) {
      __rustc::__rust_dealloc(param_1[0xc],param_1[0xb] << 2,2);
    }
    if (param_1[0xe] != 0) {
      __rustc::__rust_dealloc(param_1[0xf],param_1[0xe] * 0x18,8);
    }
    if (param_1[0x11] != 0) {
      __rustc::__rust_dealloc(param_1[0x12],param_1[0x11] << 2,2);
    }
    if (param_1[0x14] != 0) {
      __rustc::__rust_dealloc(param_1[0x15],param_1[0x14] * 0x58,8);
      return;
    }
  }
  return;
}


// ===== 006c2808  FUN_006c2808 =====

int FUN_006c2808(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != -1) {
    iVar1 = close(iVar1);
    return iVar1;
  }
  return iVar1;
}


// ===== 006c281c  FUN_006c281c =====

void FUN_006c281c(undefined8 *param_1)

{
  undefined1 *puVar1;
  long lVar2;
  
  puVar1 = (undefined1 *)*param_1;
  if (puVar1 != (undefined1 *)0x0) {
    lVar2 = param_1[1];
    *puVar1 = 0;
    if (lVar2 != 0) {
      __rustc::__rust_dealloc(puVar1,lVar2,1);
      return;
    }
  }
  return;
}


// ===== 006c2840  FUN_006c2840 =====

int * FUN_006c2840(int *param_1)

{
  uint uVar1;
  
  if (*param_1 == 3) {
    uVar1 = close(param_1[1]);
    return (int *)(ulong)uVar1;
  }
  return param_1;
}


// ===== 006c2858  FUN_006c2858 =====

void FUN_006c2858(char param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if ((param_1 == -1) && (param_2 != 0)) {
    plVar3 = *(long **)(param_2 + 0x1c0);
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
                    /* try { // try from 006c2894 to 006c289b has its CatchHandler @ 006c2910 */
      <alloc[cc0d62b833a55794]::sync::Arc<gimli[d400ddce60e1bc02]::read::dwarf::Dwarf<gimli[d400ddce60e1bc02]::read::endian_slice::EndianSlice<gimli[d400ddce60e1bc02]::endianity::LittleEndian>>>>
      ::drop_slow(param_2 + 0x1c0);
    }
    plVar3 = *(long **)(param_2 + 0x170);
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
                    /* try { // try from 006c28b8 to 006c28bf has its CatchHandler @ 006c28ec */
      <alloc::sync::[n]::alloc::sync::Arc<gimli::read::abbrev::Abbreviations>>::drop_slow
                (param_2 + 0x170);
    }
    FUN_006c2770(param_2 + 0x60);
    __rustc::__rust_dealloc(param_2,0x1c8,8);
    return;
  }
  return;
}


// ===== 006c2938  FUN_006c2938 =====

void FUN_006c2938(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = param_1[1];
    if (lVar2 != 0) {
      plVar3 = (long *)(lVar1 + 0x10);
      lVar4 = lVar2;
      do {
        if ((plVar3[-2] != 0) && (plVar3[-1] != 0)) {
          if (*plVar3 != 0) {
            __rustc::__rust_dealloc(plVar3[-1],*plVar3 * 0x30,8);
          }
          if (plVar3[2] != 0) {
            __rustc::__rust_dealloc(plVar3[1],plVar3[2] << 5,8);
          }
        }
        lVar4 = lVar4 + -1;
        plVar3 = plVar3 + 9;
      } while (lVar4 != 0);
      __rustc::__rust_dealloc(lVar1,lVar2 * 0x48,8);
    }
    if (param_1[3] != 0) {
      __rustc::__rust_dealloc(param_1[2],param_1[3] * 0x18,8);
      return;
    }
  }
  return;
}


// ===== 006c2a10  FUN_006c2a10 =====

void FUN_006c2a10(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  int iVar5;
  
  piVar1 = (int *)param_1[1];
  if (*param_1 == 0) {
    if ((((*(byte *)(param_1 + 2) & 1) == 0) &&
        ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0 & 0x7fffffffffffffff) != 0)) &&
       (uVar4 = std::panicking::panic_count::is_zero_slow_path(), (uVar4 & 1) == 0)) {
      *(undefined1 *)(piVar1 + 2) = 1;
    }
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -0x3fffffff;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    if ((((*(byte *)(param_1 + 2) & 1) == 0) &&
        ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0 & 0x7fffffffffffffff) != 0)) &&
       (uVar4 = std::panicking::panic_count::is_zero_slow_path(), (uVar4 & 1) == 0)) {
      *(undefined1 *)(piVar1 + 2) = 1;
    }
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -0x3fffffff;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (iVar5 + 0xc0000001U >> 0x1e != 0) {
    <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::wake_writer_or_readers()
    ;
    return;
  }
  return;
}


// ===== 006c2af0  FUN_006c2af0 =====

int * FUN_006c2af0(int *param_1)

{
  uint uVar1;
  ulong uVar2;
  long local_18;
  
  if (*param_1 != 0) {
    uVar2 = *(ulong *)(param_1 + 2) & 3;
    if ((1 < uVar2 - 2) && (uVar2 != 0)) {
      local_18 = *(ulong *)(param_1 + 2) - 1;
      param_1 = (int *)<core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
    }
    return param_1;
  }
  uVar1 = close(param_1[1]);
  return (int *)(ulong)uVar1;
}


// ===== 006c2b4c  FUN_006c2b4c =====

void FUN_006c2b4c(long param_1,ulong param_2)

{
  long local_18;
  
  if (param_1 == -1) {
    if ((1 < (param_2 & 3) - 2) && ((param_2 & 3) != 0)) {
      local_18 = param_2 - 1;
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
    }
  }
  else if (param_1 != 0) {
    __rustc::__rust_dealloc(param_2,param_1,1);
    return;
  }
  return;
}


// ===== 006c2bb4  FUN_006c2bb4 =====

void FUN_006c2bb4(ulong param_1,int param_2)

{
  long local_18;
  
  if (((param_2 == -1) && (1 < (param_1 & 3) - 2)) && ((param_1 & 3) != 0)) {
    local_18 = param_1 - 1;
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
    return;
  }
  return;
}


// ===== 006c2c08  FUN_006c2c08 =====

void FUN_006c2c08(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar3 = param_1[1];
    if (lVar3 != 0) {
      puVar5 = (undefined8 *)(lVar2 + 8);
      lVar1 = lVar3;
      do {
        if (puVar5[-1] != 0) {
          __rustc::__rust_dealloc(*puVar5,puVar5[-1],1);
        }
        lVar1 = lVar1 + -1;
        puVar5 = puVar5 + 3;
      } while (lVar1 != 0);
      __rustc::__rust_dealloc(lVar2,lVar3 * 0x18,8);
    }
    lVar2 = param_1[3];
    if (lVar2 != 0) {
      lVar1 = param_1[2];
      plVar4 = (long *)(lVar1 + 8);
      lVar3 = lVar2;
      do {
        if (*plVar4 != 0) {
          __rustc::__rust_dealloc(plVar4[-1],*plVar4 * 0x18,8);
        }
        lVar3 = lVar3 + -1;
        plVar4 = plVar4 + 4;
      } while (lVar3 != 0);
      __rustc::__rust_dealloc(lVar1,lVar2 << 5,8);
      return;
    }
  }
  return;
}


// ===== 006c2cec  FUN_006c2cec =====

void FUN_006c2cec(short param_1,ulong param_2)

{
  long local_18;
  
  if (((param_1 == 2) && (1 < (param_2 & 3) - 2)) && ((param_2 & 3) != 0)) {
    local_18 = param_2 - 1;
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
  }
  return;
}


// ===== 006c2d40  FUN_006c2d40 =====

void FUN_006c2d40(int param_1,ulong param_2)

{
  long local_18;
  
  if (((param_1 != 0) && (1 < (param_2 & 3) - 2)) && ((param_2 & 3) != 0)) {
    local_18 = param_2 - 1;
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
  }
  return;
}


// ===== 006c2d8c  FUN_006c2d8c =====

void FUN_006c2d8c(char param_1)

{
  if (param_1 == -2) {
    return;
  }
  FUN_006c2858();
  return;
}


// ===== 006c2da0  FUN_006c2da0 =====

void FUN_006c2da0(long *param_1)

{
  if ((*param_1 != 0) && (param_1[1] != 0)) {
    if (param_1[2] != 0) {
      __rustc::__rust_dealloc(param_1[1],param_1[2] * 0x30,8);
    }
    if (param_1[4] != 0) {
      __rustc::__rust_dealloc(param_1[3],param_1[4] << 5,8);
      return;
    }
  }
  return;
}


// ===== 006c2e04  FUN_006c2e04 =====

void FUN_006c2e04(long *param_1)

{
  if (*param_1 != 0) {
    FUN_006c2938(param_1 + 1);
    return;
  }
  return;
}


// ===== 006c2e14  FUN_006c2e14 =====

void FUN_006c2e14(long *param_1)

{
  if (*param_1 != 0) {
    FUN_006c2c08(param_1 + 1);
    return;
  }
  return;
}


// ===== 006c2e24  FUN_006c2e24 =====

void FUN_006c2e24(long param_1,ulong param_2)

{
  long local_18;
  
  if (((param_1 == 0) && (1 < (param_2 & 3) - 2)) && ((param_2 & 3) != 0)) {
    local_18 = param_2 - 1;
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
    return;
  }
  return;
}


// ===== 006c2e74  FUN_006c2e74 =====

void FUN_006c2e74(long param_1,ulong param_2)

{
  long local_18;
  
  if (((param_1 != 0) && (1 < (param_2 & 3) - 2)) && ((param_2 & 3) != 0)) {
    local_18 = param_2 - 1;
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
  }
  return;
}


// ===== 006c2ec0  FUN_006c2ec0 =====

void FUN_006c2ec0(ulong param_1)

{
  long local_18;
  
  if (((param_1 != 0) && (1 < (param_1 & 3) - 2)) && ((param_1 & 3) != 0)) {
    local_18 = param_1 - 1;
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
  }
  return;
}


// ===== 006c2f0c  FUN_006c2f0c =====

void FUN_006c2f0c(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = *(long **)(param_1 + 0x170);
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
                    /* try { // try from 006c2f38 to 006c2f3f has its CatchHandler @ 006c2f90 */
    <alloc::sync::[n]::alloc::sync::Arc<gimli::read::abbrev::Abbreviations>>::drop_slow
              (param_1 + 0x170);
  }
  FUN_006c2770(param_1 + 0x60);
  if (*(long *)(param_1 + 0x1c8) != 0) {
    FUN_006c2c08(param_1 + 0x1d0);
  }
  if (*(long *)(param_1 + 0x1f0) != 0) {
    FUN_006c2938(param_1 + 0x1f8);
  }
  if (*(char *)(param_1 + 0x218) == -2) {
    return;
  }
  FUN_006c2858(*(char *)(param_1 + 0x218),*(undefined8 *)(param_1 + 0x220));
  return;
}


// ===== 006c2ff4  FUN_006c2ff4 =====

void FUN_006c2ff4(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = *(long **)(param_1 + 0x170);
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
                    /* try { // try from 006c3020 to 006c3027 has its CatchHandler @ 006c3038 */
    <alloc::sync::[n]::alloc::sync::Arc<gimli::read::abbrev::Abbreviations>>::drop_slow
              (param_1 + 0x170);
  }
  FUN_006c2770(param_1 + 0x60);
  return;
}


// ===== 006c304c  FUN_006c304c =====

void FUN_006c304c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1[1] != 0) {
    __rustc::__rust_dealloc(*param_1,param_1[1] << 5,8);
  }
  lVar1 = param_1[2];
  lVar2 = param_1[3];
  lVar4 = lVar2 + 1;
  lVar3 = lVar1;
  while (lVar4 = lVar4 + -1, lVar4 != 0) {
                    /* try { // try from 006c3094 to 006c3097 has its CatchHandler @ 006c30dc */
    FUN_006c2f0c(lVar3);
    lVar3 = lVar3 + 0x230;
  }
  if (lVar2 != 0) {
    __rustc::__rust_dealloc(lVar1,lVar2 * 0x230,8);
    return;
  }
  return;
}


// ===== 006c311c  FUN_006c311c =====

void FUN_006c311c(long param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if (param_2 != 0) {
    lVar5 = 0;
    do {
      lVar6 = param_1 + lVar5 * 0x1c8;
      lVar5 = lVar5 + 1;
      plVar3 = *(long **)(lVar6 + 0x170);
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
                    /* try { // try from 006c3190 to 006c3197 has its CatchHandler @ 006c31dc */
        <alloc::sync::[n]::alloc::sync::Arc<gimli::read::abbrev::Abbreviations>>::drop_slow
                  (lVar6 + 0x170);
      }
      FUN_006c2770(lVar6 + 0x60);
    } while (lVar5 != param_2);
    __rustc::__rust_dealloc(param_1,param_2 * 0x1c8,8);
    return;
  }
  return;
}


// ===== 006c3224  FUN_006c3224 =====

void FUN_006c3224(long *param_1)

{
  if ((*param_1 != 0) && (param_1[1] != 0)) {
    if (param_1[2] != 0) {
      __rustc::__rust_dealloc(param_1[1],param_1[2] * 0x30,8);
    }
    if (param_1[4] != 0) {
      __rustc::__rust_dealloc(param_1[3],param_1[4] << 5,8);
      return;
    }
  }
  return;
}


// ===== 006c3288  FUN_006c3288 =====

void FUN_006c3288(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
                    /* try { // try from 006c329c to 006c32a3 has its CatchHandler @ 006c32d0 */
  FUN_006c50bc(lVar1,param_1[2]);
  if (*param_1 != 0) {
    __rustc::__rust_dealloc(lVar1,*param_1 << 4,8);
    return;
  }
  return;
}


// ===== 006c32f4  FUN_006c32f4 =====

void FUN_006c32f4(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1[1];
  lVar3 = param_1[2] + 1;
  lVar2 = lVar1;
  while (lVar3 = lVar3 + -1, lVar3 != 0) {
                    /* try { // try from 006c3324 to 006c3327 has its CatchHandler @ 006c3370 */
    FUN_006c2f0c(lVar2);
    lVar2 = lVar2 + 0x230;
  }
  if (*param_1 != 0) {
    __rustc::__rust_dealloc(lVar1,*param_1 * 0x230,8);
    return;
  }
  return;
}


// ===== 006c33b8  FUN_006c33b8 =====

void FUN_006c33b8(long *param_1)

{
  long lVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  if (lVar2 != 0) {
    lVar7 = 0;
    do {
      lVar8 = lVar1 + lVar7 * 0x1c8;
      lVar7 = lVar7 + 1;
      plVar5 = *(long **)(lVar8 + 0x170);
      do {
        lVar6 = *plVar5;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar4) {
          *plVar5 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 + -1 == 0) {
        DataMemoryBarrier(2,1);
                    /* try { // try from 006c342c to 006c3433 has its CatchHandler @ 006c3480 */
        <alloc::sync::[n]::alloc::sync::Arc<gimli::read::abbrev::Abbreviations>>::drop_slow
                  (lVar8 + 0x170);
      }
      FUN_006c2770(lVar8 + 0x60);
    } while (lVar7 != lVar2);
  }
  if (*param_1 != 0) {
    __rustc::__rust_dealloc(lVar1,*param_1 * 0x1c8,8);
    return;
  }
  return;
}


// ===== 006c34d0  FUN_006c34d0 =====

void FUN_006c34d0(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  if (lVar2 != 0) {
    plVar3 = (long *)(lVar1 + 0x10);
    do {
      if ((plVar3[-2] != 0) && (plVar3[-1] != 0)) {
        if (*plVar3 != 0) {
          __rustc::__rust_dealloc(plVar3[-1],*plVar3 * 0x30,8);
        }
        if (plVar3[2] != 0) {
          __rustc::__rust_dealloc(plVar3[1],plVar3[2] << 5,8);
        }
      }
      lVar2 = lVar2 + -1;
      plVar3 = plVar3 + 9;
    } while (lVar2 != 0);
  }
  if (*param_1 != 0) {
    __rustc::__rust_dealloc(lVar1,*param_1 * 0x48,8);
    return;
  }
  return;
}


// ===== 006c357c  FUN_006c357c =====

void FUN_006c357c(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(lVar1 + 8);
    do {
      if (puVar3[-1] != 0) {
        __rustc::__rust_dealloc(*puVar3,puVar3[-1],1);
      }
      lVar2 = lVar2 + -1;
      puVar3 = puVar3 + 3;
    } while (lVar2 != 0);
  }
  if (*param_1 != 0) {
    __rustc::__rust_dealloc(lVar1,*param_1 * 0x18,8);
    return;
  }
  return;
}


// ===== 006c35fc  FUN_006c35fc =====

void FUN_006c35fc(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  if (lVar2 != 0) {
    plVar3 = (long *)(lVar1 + 8);
    do {
      if (*plVar3 != 0) {
        __rustc::__rust_dealloc(plVar3[-1],*plVar3 * 0x18,8);
      }
      lVar2 = lVar2 + -1;
      plVar3 = plVar3 + 4;
    } while (lVar2 != 0);
  }
  if (*param_1 != 0) {
    __rustc::__rust_dealloc(lVar1,*param_1 << 5,8);
    return;
  }
  return;
}


// ===== 006c3680  FUN_006c3680 =====

void FUN_006c3680(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(lVar1 + 8);
    do {
      if (puVar3[-1] != 0) {
        __rustc::__rust_dealloc(*puVar3,puVar3[-1],1);
      }
      lVar2 = lVar2 + -1;
      puVar3 = puVar3 + 3;
    } while (lVar2 != 0);
  }
  if (*param_1 != 0) {
    __rustc::__rust_dealloc(lVar1,*param_1 * 0x18,8);
    return;
  }
  return;
}


// ===== 006c3700  FUN_006c3700 =====

void FUN_006c3700(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(lVar1 + 0x20);
    do {
      if (puVar3[-4] != 0) {
        __rustc::__rust_dealloc(puVar3[-3],puVar3[-4],1);
      }
      if (puVar3[-1] != 0) {
        __rustc::__rust_dealloc(*puVar3,puVar3[-1],1);
      }
      lVar2 = lVar2 + -1;
      puVar3 = puVar3 + 6;
    } while (lVar2 != 0);
  }
  if (*param_1 != 0) {
    __rustc::__rust_dealloc(lVar1,*param_1 * 0x30,8);
    return;
  }
  return;
}


// ===== 006c3794  FUN_006c3794 =====

void FUN_006c3794(long *param_1)

{
  if (*param_1 != 0) {
    __rustc::__rust_dealloc(param_1[1],*param_1,1);
    return;
  }
  return;
}


// ===== 006c37ac  FUN_006c37ac =====

void FUN_006c37ac(undefined8 *param_1)

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
    <alloc::sync::[n]::alloc::sync::Arc<std::sync::poison::mutex::Mutex<alloc::vec::Vec<u8>>>>::
    drop_slow();
    return;
  }
  return;
}


// ===== 006c37d0  FUN_006c37d0 =====

void FUN_006c37d0(undefined8 *param_1)

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
    <alloc::sync::[n]::alloc::sync::Arc<std::thread::spawnhook::SpawnHook>>::drop_slow();
    return;
  }
  return;
}


// ===== 006c37f4  FUN_006c37f4 =====

void FUN_006c37f4(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = *(long **)(param_1 + 0x100);
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
                    /* try { // try from 006c3824 to 006c382b has its CatchHandler @ 006c383c */
      <alloc[cc0d62b833a55794]::sync::Arc<gimli[d400ddce60e1bc02]::read::dwarf::Dwarf<gimli[d400ddce60e1bc02]::read::endian_slice::EndianSlice<gimli[d400ddce60e1bc02]::endianity::LittleEndian>>>>
      ::drop_slow(param_1 + 0x100);
    }
  }
  FUN_006c49f0(param_1 + 0x108);
  return;
}


// ===== 006c3854  FUN_006c3854 =====

void FUN_006c3854(long param_1)

{
                    /* try { // try from 006c3864 to 006c386b has its CatchHandler @ 006c3894 */
  <std::sys::fs::unix::DirStream_as_core::ops::drop::Drop>::drop(param_1 + 0x28);
  if (*(long *)(param_1 + 0x10) != 0) {
    __rustc::__rust_dealloc(*(undefined8 *)(param_1 + 0x18),*(long *)(param_1 + 0x10),1);
    return;
  }
  return;
}


// ===== 006c38b4  FUN_006c38b4 =====

void FUN_006c38b4(undefined8 param_1,undefined8 *param_2)

{
  if ((code *)*param_2 != (code *)0x0) {
                    /* try { // try from 006c38d4 to 006c38db has its CatchHandler @ 006c390c */
    (*(code *)*param_2)(param_1);
  }
  if (param_2[1] != 0) {
    __rustc::__rust_dealloc(param_1,param_2[1],param_2[2]);
    return;
  }
  return;
}


// ===== 006c392c  FUN_006c392c =====

void FUN_006c392c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)param_1[1];
  if ((code *)*puVar1 != (code *)0x0) {
                    /* try { // try from 006c3950 to 006c3957 has its CatchHandler @ 006c3988 */
    (*(code *)*puVar1)(*param_1);
  }
  if (puVar1[1] != 0) {
    __rustc::__rust_dealloc(*param_1,puVar1[1],puVar1[2]);
    return;
  }
  return;
}


// ===== 006c39a8  FUN_006c39a8 =====

void FUN_006c39a8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = (long *)*param_1;
  do {
    lVar6 = *plVar5;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar4) {
      *plVar5 = lVar6 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar6 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc[cc0d62b833a55794]::sync::Arc<std[29fbf8137994c300]::thread::thread::Inner,std[29fbf8137994c300]::alloc::System>>
    ::drop_slow(param_1);
  }
  uVar1 = param_1[1];
  puVar2 = (undefined8 *)param_1[2];
  if ((code *)*puVar2 != (code *)0x0) {
                    /* try { // try from 006c39ec to 006c39f3 has its CatchHandler @ 006c3a24 */
    (*(code *)*puVar2)(uVar1);
  }
  if (puVar2[1] != 0) {
    __rustc::__rust_dealloc(uVar1,puVar2[1],puVar2[2]);
  }
  __rustc::__rust_dealloc(param_1,0x18,8);
  return;
}


// ===== 006c3a58  FUN_006c3a58 =====

void FUN_006c3a58(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  if (param_2 != 0) {
    plVar1 = (long *)(param_1 + 0x10);
    lVar2 = param_2;
    do {
      if ((plVar1[-2] != 0) && (plVar1[-1] != 0)) {
        if (*plVar1 != 0) {
          __rustc::__rust_dealloc(plVar1[-1],*plVar1 * 0x30,8);
        }
        if (plVar1[2] != 0) {
          __rustc::__rust_dealloc(plVar1[1],plVar1[2] << 5,8);
        }
      }
      lVar2 = lVar2 + -1;
      plVar1 = plVar1 + 9;
    } while (lVar2 != 0);
    __rustc::__rust_dealloc(param_1,param_2 * 0x48,8);
    return;
  }
  return;
}


// ===== 006c3af4  FUN_006c3af4 =====

void FUN_006c3af4(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)(param_1 + 8);
    lVar2 = param_2;
    do {
      if (puVar1[-1] != 0) {
        __rustc::__rust_dealloc(*puVar1,puVar1[-1],1);
      }
      lVar2 = lVar2 + -1;
      puVar1 = puVar1 + 3;
    } while (lVar2 != 0);
    __rustc::__rust_dealloc(param_1,param_2 * 0x18,8);
    return;
  }
  return;
}


// ===== 006c3b64  FUN_006c3b64 =====

void FUN_006c3b64(pthread_attr_t *param_1)

{
  undefined8 in_x4;
  int local_14;
  
  local_14 = pthread_attr_destroy(param_1);
  if (local_14 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::assert_failed<i32,i32>
            (0,&local_14,&DAT_00376724,0,in_x4,&PTR_s__rustc_48a229ceaefd4985c50990b14_00977200);
}


// ===== 006c3ba8  FUN_006c3ba8 =====

void FUN_006c3ba8(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = *(int *)((long)param_1 + 0xc) + -1;
  *(int *)((long)param_1 + 0xc) = iVar4;
  if (iVar4 == 0) {
    piVar1 = (int *)(param_1 + 1);
    *param_1 = 0;
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = 0;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 2) {
      syscall(0x62,piVar1,0x81,1);
      return;
    }
  }
  return;
}


// ===== 006c3be8  FUN_006c3be8 =====

void FUN_006c3be8(undefined8 *param_1)

{
                    /* try { // try from 006c3c08 to 006c3c0b has its CatchHandler @ 006c3c38 */
  FUN_006c50bc(param_1[1],(ulong)(param_1[3] - param_1[1]) >> 4);
  if (param_1[2] != 0) {
    __rustc::__rust_dealloc(*param_1,param_1[2] << 4,8);
    return;
  }
  return;
}


// ===== 006c3c5c  FUN_006c3c5c =====

void FUN_006c3c5c(long param_1)

{
  if (*(long *)(param_1 + 0x58) != 0) {
    __rustc::__rust_dealloc(*(undefined8 *)(param_1 + 0x60),*(long *)(param_1 + 0x58) << 2,2);
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    __rustc::__rust_dealloc(*(undefined8 *)(param_1 + 0x78),*(long *)(param_1 + 0x70) * 0x18,8);
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    __rustc::__rust_dealloc(*(undefined8 *)(param_1 + 0x90),*(long *)(param_1 + 0x88) << 2,2);
  }
  if (*(long *)(param_1 + 0xa0) != 0) {
    __rustc::__rust_dealloc(*(undefined8 *)(param_1 + 0xa8),*(long *)(param_1 + 0xa0) * 0x58,8);
    return;
  }
  return;
}


// ===== 006c3ce8  FUN_006c3ce8 =====

void FUN_006c3ce8(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = *(long **)(param_1 + 0x170);
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
                    /* try { // try from 006c3d14 to 006c3d1b has its CatchHandler @ 006c3d2c */
    <alloc::sync::[n]::alloc::sync::Arc<gimli::read::abbrev::Abbreviations>>::drop_slow
              (param_1 + 0x170);
  }
  FUN_006c2770(param_1 + 0x60);
  return;
}


// ===== 006c3d40  FUN_006c3d40 =====

void FUN_006c3d40(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = *(long **)(param_1 + 0xf0);
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
                    /* try { // try from 006c3d70 to 006c3d73 has its CatchHandler @ 006c3d84 */
      <alloc[cc0d62b833a55794]::sync::Arc<gimli[d400ddce60e1bc02]::read::dwarf::Dwarf<gimli[d400ddce60e1bc02]::read::endian_slice::EndianSlice<gimli[d400ddce60e1bc02]::endianity::LittleEndian>>>>
      ::drop_slow();
    }
  }
  FUN_006c49f0(param_1 + 0xf8);
  return;
}


// ===== 006c3d9c  FUN_006c3d9c =====

void FUN_006c3d9c(long *param_1)

{
  ulong uVar1;
  long local_28;
  
                    /* try { // try from 006c3db8 to 006c3df3 has its CatchHandler @ 006c3e18 */
  if (((((*(byte *)(param_1 + 3) & 1) == 0) && (uVar1 = FUN_006e4500(param_1), uVar1 != 0)) &&
      (1 < (uVar1 & 3) - 2)) && ((uVar1 & 3) != 0)) {
    local_28 = uVar1 - 1;
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_28);
  }
  if (*param_1 != 0) {
    __rustc::__rust_dealloc(param_1[1],*param_1,1);
  }
  return;
}


// ===== 006c3e38  FUN_006c3e38 =====

int FUN_006c3e38(undefined8 *param_1)

{
  int iVar1;
  
  if (param_1[1] != 0) {
    __rustc::__rust_dealloc(*param_1,param_1[1],1);
  }
  iVar1 = close(*(int *)(param_1 + 5));
  return iVar1;
}


// ===== 006c3e6c  FUN_006c3e6c =====

void FUN_006c3e6c(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 006c3e80 to 006c3e83 has its CatchHandler @ 006c3ec8 */
  <std::thread::spawnhook::SpawnHooks_as_core::ops::drop::Drop>::drop();
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
                    /* try { // try from 006c3ea4 to 006c3eab has its CatchHandler @ 006c3ec0 */
      <alloc::sync::[n]::alloc::sync::Arc<std::thread::spawnhook::SpawnHook>>::drop_slow(param_1);
    }
  }
  free(param_1);
  return;
}


// ===== 006c3f34  FUN_006c3f34 =====

void FUN_006c3f34(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 006c3f44 to 006c3f47 has its CatchHandler @ 006c3f84 */
  <std::thread::spawnhook::SpawnHooks_as_core::ops::drop::Drop>::drop();
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
      <alloc::sync::[n]::alloc::sync::Arc<std::thread::spawnhook::SpawnHook>>::drop_slow(param_1);
      return;
    }
  }
  return;
}


// ===== 006c3fbc  FUN_006c3fbc =====

void FUN_006c3fbc(int *param_1,ulong param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  
  if (((param_2 & 1) == 0) &&
     ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0 & 0x7fffffffffffffff) != 0)) {
    uVar4 = std::panicking::panic_count::is_zero_slow_path();
    if ((uVar4 & 1) == 0) {
      *(undefined1 *)(param_1 + 1) = 1;
    }
  }
  do {
    iVar1 = *param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 != 2) {
    return;
  }
  syscall(0x62,param_1,0x81,1);
  return;
}


// ===== 006c403c  FUN_006c403c =====

void FUN_006c403c(uint *param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  
  do {
    uVar1 = *param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = uVar1 - 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((uVar1 - 1 & 0xbfffffff) != 0x80000000) {
    return;
  }
  <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::wake_writer_or_readers();
  return;
}


// ===== 006c4064  FUN_006c4064 =====

void FUN_006c4064(long *param_1)

{
  long lVar1;
  ulong local_80;
  undefined8 local_78;
  long lStack_70;
  long local_68;
  ulong local_60;
  undefined8 local_58;
  long lStack_50;
  long local_48;
  long local_40;
  long local_38 [2];
  long local_28;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    local_40 = 0;
  }
  else {
    local_68 = param_1[1];
    local_40 = param_1[2];
    local_78 = 0;
    local_58 = 0;
    lStack_70 = lVar1;
    lStack_50 = lVar1;
    local_48 = local_68;
  }
  local_80 = (ulong)(lVar1 != 0);
  local_60 = local_80;
  FUN_006eda68(local_38,&local_80);
  while (local_38[0] != 0) {
    lVar1 = local_38[0] + local_28 * 0x18;
    if (*(long *)(lVar1 + 8) != 0) {
      __rustc::__rust_dealloc(*(undefined8 *)(lVar1 + 0x10),*(long *)(lVar1 + 8),1);
    }
    if (*(long *)(lVar1 + 0x110) != 0) {
      __rustc::__rust_dealloc(*(undefined8 *)(lVar1 + 0x118),*(long *)(lVar1 + 0x110),1);
    }
    FUN_006eda68(local_38,&local_80);
  }
  return;
}


// ===== 006c411c  FUN_006c411c =====

void FUN_006c411c(long *param_1)

{
  long lVar1;
  ulong local_80;
  undefined8 local_78;
  long lStack_70;
  long local_68;
  ulong local_60;
  undefined8 local_58;
  long lStack_50;
  long local_48;
  long local_40;
  long local_38 [2];
  long local_28;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    local_40 = 0;
  }
  else {
    local_68 = param_1[1];
    local_40 = param_1[2];
    local_78 = 0;
    local_58 = 0;
    lStack_70 = lVar1;
    lStack_50 = lVar1;
    local_48 = local_68;
  }
  local_80 = (ulong)(lVar1 != 0);
  local_60 = local_80;
  FUN_006eda68(local_38,&local_80);
  while (local_38[0] != 0) {
    lVar1 = local_38[0] + local_28 * 0x18;
    if (*(long *)(lVar1 + 8) != 0) {
      __rustc::__rust_dealloc(*(undefined8 *)(lVar1 + 0x10),*(long *)(lVar1 + 8),1);
    }
    if (0 < *(long *)(lVar1 + 0x110)) {
      __rustc::__rust_dealloc(*(undefined8 *)(lVar1 + 0x118),*(long *)(lVar1 + 0x110),1);
    }
    FUN_006eda68(local_38,&local_80);
  }
  return;
}


