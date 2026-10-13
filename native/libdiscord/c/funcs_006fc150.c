// ===== 006fc150  FUN_006fc150 =====

void FUN_006fc150(int param_1,undefined8 *param_2,long *param_3)

{
  undefined8 *__src;
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  byte *pbVar8;
  ulong uVar9;
  undefined1 auStack_40 [16];
  
  pbVar6 = (byte *)param_3[8];
  uVar7 = param_1 << 3 | 2;
  if ((byte *)*param_3 <= pbVar6) {
    pbVar6 = (byte *)FUN_006dcdb8(param_3,pbVar6);
  }
  pbVar8 = pbVar6;
  if (0x7f < (uint)(param_1 << 3)) {
    do {
      uVar2 = uVar7 >> 0xe;
      bVar1 = (byte)uVar7;
      uVar7 = uVar7 >> 7;
      pbVar6 = pbVar8 + 1;
      *pbVar8 = bVar1 | 0x80;
      pbVar8 = pbVar6;
    } while (uVar2 != 0);
  }
  *pbVar6 = (byte)uVar7;
  param_3[8] = (long)(pbVar6 + 1);
  iVar5 = (int)*(char *)((long)param_2 + 0x17);
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    if ((ulong)param_2[1] >> 0x1f != 0) {
      lVar4 = FUN_006f075c(param_2[1],0x7fffffff,"value.size() <= kInt32MaxSize");
      if (lVar4 != 0) {
        FUN_006de99c(auStack_40,"../../third_party/protobuf/src/google/protobuf/wire_format_lite.cc"
                     ,0x1c5,lVar4);
        FUN_006de39c(auStack_40);
                    /* WARNING: Subroutine does not return */
        FUN_006dea94(auStack_40);
      }
      iVar5 = (int)*(char *)((long)param_2 + 0x17);
      if (-1 < iVar5) goto LAB_006fc1a4;
    }
    uVar9 = param_2[1];
  }
  else {
LAB_006fc1a4:
    uVar9 = (ulong)iVar5;
  }
  pbVar6 = (byte *)param_3[8];
  uVar7 = (uint)uVar9;
  if ((byte *)*param_3 <= pbVar6) {
    pbVar6 = (byte *)FUN_006dcdb8(param_3,pbVar6);
  }
  pbVar8 = pbVar6;
  if (0x7f < uVar7) {
    do {
      uVar3 = uVar9 >> 0xe;
      bVar1 = (byte)uVar9;
      uVar7 = (uint)uVar9 >> 7;
      uVar9 = (ulong)uVar7;
      pbVar6 = pbVar8 + 1;
      *pbVar8 = bVar1 | 0x80;
      pbVar8 = pbVar6;
    } while ((uVar3 & 0x3ffff) != 0);
  }
  pbVar8 = pbVar6 + 1;
  *pbVar6 = (byte)uVar7;
  param_3[8] = (long)pbVar8;
  bVar1 = *(byte *)((long)param_2 + 0x17);
  uVar9 = param_2[1];
  if (-1 < (char)bVar1) {
    uVar9 = (ulong)bVar1;
  }
  __src = (undefined8 *)*param_2;
  if (-1 < (char)bVar1) {
    __src = param_2;
  }
  if (*param_3 - (long)pbVar8 < (long)(int)uVar9) {
    pbVar8 = (byte *)FUN_006dcef8(param_3,__src,uVar9,pbVar8);
  }
  else {
    memcpy(pbVar8,__src,uVar9 & 0xffffffff);
    pbVar8 = pbVar8 + (int)uVar9;
  }
  param_3[8] = (long)pbVar8;
  return;
}


// ===== 006fc2f0  FUN_006fc2f0 =====

void FUN_006fc2f0(int param_1,long *param_2,ulong param_3,byte *param_4,undefined8 *param_5)

{
  uint uVar1;
  ulong uVar2;
  byte bVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  
  uVar8 = param_3 & 0xffffffff;
  uVar7 = (uint)param_3;
  if ((byte *)*param_5 <= param_4) {
    param_4 = (byte *)FUN_006dcdb8(param_5,param_4);
  }
  uVar6 = param_1 << 3 | 2;
  pbVar5 = param_4;
  if (0x7f < (uint)(param_1 << 3)) {
    do {
      uVar1 = uVar6 >> 0xe;
      bVar3 = (byte)uVar6;
      uVar6 = uVar6 >> 7;
      param_4 = pbVar5 + 1;
      *pbVar5 = bVar3 | 0x80;
      pbVar5 = param_4;
    } while (uVar1 != 0);
  }
  pbVar4 = param_4 + 1;
  *param_4 = (byte)uVar6;
  pbVar5 = pbVar4;
  if (0x7f < uVar7) {
    do {
      uVar2 = uVar8 >> 0xe;
      bVar3 = (byte)uVar8;
      uVar7 = (uint)uVar8 >> 7;
      uVar8 = (ulong)uVar7;
      pbVar4 = pbVar5 + 1;
      *pbVar5 = bVar3 | 0x80;
      pbVar5 = pbVar4;
    } while (uVar2 != 0);
  }
  *pbVar4 = (byte)uVar7;
                    /* WARNING: Could not recover jumptable at 0x006fc368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x28))(param_2,pbVar4 + 1,param_5);
  return;
}


// ===== 006fc3b0  FUN_006fc3b0 =====

void FUN_006fc3b0(undefined8 param_1,long param_2,undefined8 ***param_3,long param_4,char *param_5)

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 ****ppppuVar3;
  undefined8 ***pppuVar4;
  undefined1 *puVar5;
  undefined8 ***local_168;
  undefined1 *puStack_160;
  undefined1 *local_158;
  undefined8 ***local_150;
  undefined1 *puStack_148;
  undefined1 *local_140;
  void *local_138;
  undefined8 uStack_130;
  long local_128;
  undefined *local_120;
  undefined8 uStack_118;
  undefined8 ***local_f0;
  undefined1 *puStack_e8;
  undefined1 *local_e0;
  char *local_b8;
  undefined8 uStack_b0;
  undefined8 ***local_a8;
  undefined1 *puStack_a0;
  char *local_98;
  undefined8 uStack_90;
  undefined8 **local_88;
  size_t sStack_80;
  char *local_78;
  undefined8 uStack_70;
  void **local_68;
  undefined8 uStack_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_138 = (void *)0x0;
  uStack_130 = 0;
  local_128 = 0;
  local_140 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
  local_150 = (undefined8 ***)&DAT_aaaaaaaaaaaaaaaa;
  FUN_005d3510(&local_150,&DAT_001b3348);
  pppuVar4 = local_150;
  puVar1 = puStack_148;
  puVar5 = local_140;
  if (param_4 != 0) {
    if (param_2 == 0) {
      local_b8 = " \'";
      uStack_b0 = 2;
      local_120 = &DAT_001c1d3e;
      uStack_118 = 1;
      local_f0 = param_3;
      puStack_e8 = (undefined1 *)param_4;
      FUN_006f0d44(&local_168,&local_b8,&local_f0,&local_120);
      pppuVar4 = local_168;
      puVar1 = puStack_160;
      puVar5 = local_158;
      if ((long)local_140 < 0) {
        operator_delete(local_150);
        pppuVar4 = local_168;
        puVar1 = puStack_160;
        puVar5 = local_158;
      }
    }
    else {
      local_b8 = " \'";
      uStack_b0 = 2;
      local_98 = ".";
      uStack_90 = 1;
      local_78 = "\'";
      uStack_70 = 1;
      local_a8 = (undefined8 ***)param_1;
      puStack_a0 = (undefined1 *)param_2;
      local_88 = param_3;
      sStack_80 = param_4;
      FUN_006f0edc(&local_f0,&local_b8,5);
      pppuVar4 = local_f0;
      puVar1 = puStack_e8;
      puVar5 = local_e0;
      if ((long)local_140 < 0) {
        operator_delete(local_150);
        pppuVar4 = local_f0;
        puVar1 = puStack_e8;
        puVar5 = local_e0;
      }
    }
  }
  local_140 = puVar5;
  puStack_148 = puVar1;
  local_150 = pppuVar4;
  puVar1 = puStack_148;
  ppppuVar3 = (undefined8 ****)local_150;
  if (-1 < (long)local_140) {
    puVar1 = (undefined1 *)((ulong)local_140 >> 0x38);
    ppppuVar3 = &local_150;
  }
  puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
  local_f0 = (undefined8 ***)&DAT_aaaaaaaaaaaaaaaa;
  local_e0 = &DAT_aaaaaaaaaaaaaaaa;
  if (param_5 == (char *)0x0) {
    sStack_80 = 0;
  }
  else {
    sStack_80 = strlen(param_5);
  }
  local_b8 = "String field";
  uStack_b0 = 0xc;
  local_98 = " contains invalid UTF-8 data when ";
  uStack_90 = 0x22;
  local_78 = " a protocol buffer. Use the \'bytes\' type if you intend to send raw bytes. ";
  uStack_70 = 0x4a;
  local_68 = &local_138;
  uStack_60 = 0;
  local_a8 = ppppuVar3;
  puStack_a0 = puVar1;
  local_88 = (undefined8 **)param_5;
  FUN_006f0edc(&local_f0,&local_b8,6);
  FUN_006de274(&local_b8,"../../third_party/protobuf/src/google/protobuf/wire_format_lite.cc",0x242,
               0);
  FUN_006de32c(&local_b8,&local_f0);
  FUN_006de39c();
  FUN_006de280(&local_b8);
  if ((long)local_e0 < 0) {
    operator_delete(local_f0);
  }
  if ((long)local_140 < 0) {
    operator_delete(local_150);
  }
  if (local_128 < 0) {
    operator_delete(local_138);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006fc624  FUN_006fc624 =====

long FUN_006fc624(ulong *param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong *puVar9;
  
  uVar5 = *param_1;
  puVar9 = param_1 + 1;
  uVar2 = (uint)uVar5 & 3;
  if ((uVar5 & 4) != 0) {
    uVar2 = (uint)*puVar9;
  }
  if ((int)uVar2 < 1) {
    lVar7 = 0;
  }
  else {
    uVar8 = 0;
    lVar7 = 0;
    do {
      uVar6 = uVar5 & 4;
      uVar3 = (uint)uVar5 & 3;
      if (uVar6 != 0) {
        uVar3 = (uint)*puVar9;
      }
      if ((long)(int)uVar3 <= (long)uVar8) {
        FUN_006fc6ec(uVar8 & 0xffffffff);
        uVar5 = *param_1;
        uVar6 = uVar5 & 4;
      }
      puVar4 = puVar9;
      if (uVar6 != 0) {
        puVar4 = (ulong *)(uVar5 & 0xfffffffffffffff8);
      }
      lVar1 = uVar8 * 4;
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + (ulong)((int)LZCOUNT(*(uint *)((long)puVar4 + lVar1)) * -9 + 0x160U >> 6);
    } while (uVar2 != uVar8);
  }
  return lVar7;
}


// ===== 006fc6ec  FUN_006fc6ec =====

void FUN_006fc6ec(undefined4 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_30 [16];
  
  FUN_006de990(auStack_30,"../../third_party/protobuf/src/google/protobuf/repeated_field.cc",0x26);
  uVar1 = FUN_006fc754(auStack_30,"index: ");
  uVar1 = FUN_006f99f8(uVar1,param_1);
  uVar1 = FUN_006fc7b0(uVar1,", size: ");
  FUN_006f99f8(uVar1,param_2);
  FUN_006de39c();
                    /* WARNING: Subroutine does not return */
  FUN_006dea94(auStack_30);
}


// ===== 006fc754  FUN_006fc754 =====

undefined8 FUN_006fc754(undefined8 param_1,char *param_2)

{
  size_t sVar1;
  
  if (param_2 != (char *)0x0) {
    sVar1 = strlen(param_2);
    FUN_006dd85c(param_1,param_2,sVar1);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/string_view:278: libc++ Hardening assertion __s != nullptr failed: null pointer passed to non-null argument of char_traits<...>::length\n"
            );
}


// ===== 006fc7b0  FUN_006fc7b0 =====

undefined8 FUN_006fc7b0(undefined8 param_1,char *param_2)

{
  size_t sVar1;
  
  if (param_2 != (char *)0x0) {
    sVar1 = strlen(param_2);
    FUN_006dd85c(param_1,param_2,sVar1);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/string_view:278: libc++ Hardening assertion __s != nullptr failed: null pointer passed to non-null argument of char_traits<...>::length\n"
            );
}


// ===== 006fc80c  FUN_006fc80c =====

void FUN_006fc80c(long *param_1)

{
  int iVar1;
  long lVar2;
  void *pvVar3;
  
  lVar2 = *param_1;
  if (((uint)lVar2 >> 1 & 1) == 0) {
    iVar1 = *(int *)(lVar2 + 0xb);
    pvVar3 = (void *)(lVar2 + -1);
    if (iVar1 == 0) {
      if (pvVar3 == (void *)0x0) {
        return;
      }
    }
    else {
      if (iVar1 == 1) {
        return;
      }
      if (iVar1 == 2) {
        if (pvVar3 == (void *)0x0) {
          return;
        }
        if (*(char *)(lVar2 + 0x26) < '\0') {
          operator_delete(*(void **)(lVar2 + 0xf));
        }
      }
    }
  }
  else {
    pvVar3 = (void *)(lVar2 + -2);
  }
  operator_delete(pvVar3);
  return;
}


// ===== 006fc8b0  FUN_006fc8b0 =====

void FUN_006fc8b0(ulong *param_1,void *param_2,ulong param_3,long param_4,ulong param_5)

{
  undefined1 *puVar1;
  long *plVar2;
  long *__dest;
  void *__dest_00;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  
  __dest_00 = (void *)*param_1;
  iVar7 = (int)param_3;
  if (((uint)__dest_00 >> 1 & 1) == 0) {
    if (((ulong)__dest_00 & 1) == 0) goto joined_r0x006fc94c;
    uVar5 = *(uint *)((long)__dest_00 + 0xb);
    uVar4 = (ulong)uVar5;
    if (2 < uVar5) {
      uVar5 = 3;
    }
    if (uVar5 == 2) {
      if (*(char *)((long)__dest_00 + 0x26) < '\0') {
        if (param_3 <= (*(ulong *)((long)__dest_00 + 0x1f) & 0x7fffffffffffffff) - 1)
        goto LAB_006fcab4;
      }
      else if (param_3 < 0x17) {
LAB_006fcab4:
        if ((param_2 == (void *)0x0) && (param_3 != 0)) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/string:2845: libc++ Hardening assertion __n == 0 || __s != nullptr failed: string::assign received nullptr\n"
                    );
        }
        lVar6 = (long)__dest_00 + 0xf;
        FUN_00547b08((long)__dest_00 + 0xf,param_2,param_3);
        lVar3 = (long)*(char *)((long)__dest_00 + 0x26);
        if (lVar3 < 0) {
          lVar6 = *(long *)((long)__dest_00 + 0xf);
          lVar3 = *(long *)((long)__dest_00 + 0x17);
        }
        *(long *)((long)__dest_00 + -1) = lVar6;
        *(int *)((long)__dest_00 + 7) = (int)lVar3;
        return;
      }
    }
    else if (uVar5 == 3) {
      if (param_3 == 0) {
        *(undefined4 *)((long)__dest_00 + 7) = 0;
        return;
      }
      if (param_3 <= uVar4) {
        memmove(*(void **)((long)__dest_00 + -1),param_2,param_3);
        *(int *)((long)__dest_00 + 7) = iVar7;
        return;
      }
    }
  }
  else {
    if (param_3 == 0) {
      *(undefined1 *)((long)__dest_00 + -2) = 0;
      return;
    }
    if (param_3 <= *(byte *)((long)__dest_00 + -1)) {
      memmove(__dest_00,param_2,param_3);
      *(undefined1 *)((long)__dest_00 + -2) = (char)param_3;
      return;
    }
  }
  if (param_4 == 0) {
    FUN_006fc80c(param_1);
  }
joined_r0x006fc94c:
  if (param_5 < param_3) {
    if (param_3 < 0xff) {
      uVar4 = (ulong)(iVar7 + 9) & 0x1f8;
      if (param_4 == 0) {
        puVar1 = (undefined1 *)operator_new(uVar4);
        uVar4 = uVar4 - 2;
        if (0xfd < uVar4) {
          uVar4 = 0xfe;
        }
        iVar7 = (int)uVar4;
      }
      else {
        uVar4 = uVar4 - 2;
        if (0xfd < uVar4) {
          uVar4 = 0xfe;
        }
        iVar7 = (int)uVar4;
        puVar1 = (undefined1 *)FUN_006fdbf0(param_4,iVar7 + 9U & 0x1f8);
      }
      puVar1[1] = (char)iVar7;
      __dest = (long *)(puVar1 + 2);
      *puVar1 = (char)param_3;
      *param_1 = (ulong)__dest;
    }
    else {
      uVar4 = param_3 + 0x17 & 0xfffffffffffffff8;
      if (param_4 == 0) {
        plVar2 = (long *)operator_new(uVar4);
      }
      else {
        plVar2 = (long *)FUN_006fdbf0(param_4,uVar4);
      }
      __dest = plVar2 + 2;
      *param_1 = (ulong)plVar2 | 1;
      *(int *)(plVar2 + 1) = iVar7;
      *(int *)((long)plVar2 + 0xc) = (int)uVar4 + -0x10;
      *plVar2 = (long)__dest;
    }
    memcpy(__dest,param_2,param_3);
    return;
  }
  *param_1 = *param_1 & 0xffffffffffffff00 | param_3 << 2;
  if (param_3 == 0) {
    return;
  }
  memmove((void *)((long)param_1 + 1),param_2,param_3);
  return;
}


// ===== 006fcb10  FUN_006fcb10 =====

void FUN_006fcb10(long *param_1,long param_2,long param_3)

{
  undefined1 *puVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_2 + 9U & 0xfffffffffffffff8;
  if (param_3 == 0) {
    puVar1 = (undefined1 *)operator_new(uVar3);
    uVar3 = uVar3 - 2;
    if (0xfd < uVar3) {
      uVar3 = 0xfe;
    }
    iVar2 = (int)uVar3;
  }
  else {
    uVar3 = uVar3 - 2;
    if (0xfd < uVar3) {
      uVar3 = 0xfe;
    }
    iVar2 = (int)uVar3;
    puVar1 = (undefined1 *)FUN_006fdbf0(param_3,iVar2 + 9U & 0x1f8);
  }
  puVar1[1] = (char)iVar2;
  *puVar1 = (char)param_2;
  *param_1 = (long)(puVar1 + 2);
  return;
}


// ===== 006fcb98  FUN_006fcb98 =====

void FUN_006fcb98(ulong *param_1,long param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  
  uVar2 = param_2 + 0x17U & 0xfffffffffffffff8;
  if (param_3 == 0) {
    plVar1 = (long *)operator_new(uVar2);
  }
  else {
    plVar1 = (long *)FUN_006fdbf0(param_3,uVar2);
  }
  *param_1 = (ulong)plVar1 | 1;
  *(int *)(plVar1 + 1) = (int)param_2;
  *(int *)((long)plVar1 + 0xc) = (int)uVar2 + -0x10;
  *plVar1 = (long)(plVar1 + 2);
  return;
}


// ===== 006fcc04  FUN_006fcc04 =====

void FUN_006fcc04(ulong *param_1,long param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == 0) {
    puVar1 = (undefined8 *)operator_new(0x28);
  }
  else {
    puVar1 = (undefined8 *)thunk_FUN_006fd758(param_2,0x28,8,FUN_006fcc6c);
  }
  puVar1[4] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *(undefined4 *)((long)puVar1 + 0xc) = 2;
  *param_1 = (ulong)puVar1 | 1;
  return;
}


// ===== 006fcc6c  FUN_006fcc6c =====

void FUN_006fcc6c(long param_1)

{
  if (-1 < *(char *)(param_1 + 0x27)) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x10));
  return;
}


// ===== 006fcc90  FUN_006fcc90 =====

void FUN_006fcc90(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar2 = FUN_006fcd3c();
  uVar4 = *(ulong *)(lVar2 + 0x20);
  if ((long)(uVar4 - *(long *)(lVar2 + 0x18)) < param_2) {
    FUN_006fd01c(lVar2,param_2);
    return;
  }
  uVar1 = *(long *)(lVar2 + 0x18) + param_2;
  *(ulong *)(lVar2 + 0x18) = uVar1;
  uVar3 = *(ulong *)(lVar2 + 8);
  if (((long)(uVar3 - uVar1) < 0x401) && (uVar3 < uVar4)) {
    if (uVar3 <= uVar1) {
      uVar3 = uVar1;
    }
    uVar1 = uVar3 + 0x400;
    if (uVar4 <= uVar3 + 0x400) {
      uVar1 = uVar4;
    }
    for (; uVar3 < uVar1; uVar3 = uVar3 + 0x40) {
      Hint_Prefetch(uVar3,2,0,0);
    }
  }
  *(ulong *)(lVar2 + 8) = uVar3;
  return;
}


// ===== 006fcd3c  FUN_006fcd3c =====

undefined8 * FUN_006fcd3c(undefined8 *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined1 auVar8 [16];
  
  lVar3 = __emutls_get_address(&DAT_00d5a2a0);
  if (lVar3 == param_1[0x14]) {
    puVar7 = param_1 + 5;
  }
  else {
    uVar1 = *(uint *)((long *)param_1[2] + 1);
    if (uVar1 != 0) {
      puVar7 = (undefined8 *)0x0;
      plVar4 = (long *)param_1[2];
      do {
        plVar5 = (long *)*plVar4;
        Hint_Prefetch(plVar5,0,0,0);
        uVar2 = *(uint *)((long)plVar4 + 0xc);
        if (uVar2 != 0) {
          if (uVar1 <= uVar2) {
            uVar2 = uVar1;
          }
          uVar6 = (ulong)uVar2;
          do {
            if (lVar3 == plVar4[2]) {
              puVar7 = *(undefined8 **)((long)plVar4 + ((ulong)uVar1 * 8 + 0x17 & 0xffffffff8));
              break;
            }
            uVar6 = uVar6 - 1;
            plVar4 = plVar4 + 1;
          } while (uVar6 != 0);
        }
        uVar1 = *(uint *)(plVar5 + 1);
        plVar4 = plVar5;
      } while (uVar1 != 0);
      if (puVar7 != (undefined8 *)0x0) goto LAB_006fce48;
    }
    auVar8 = FUN_006fd4d4(param_1[1] & 0xfffffffffffffff8,0,param_2 + 0x78);
    uVar6 = auVar8._8_8_;
    puVar7 = auVar8._0_8_;
    *puVar7 = 0;
    puVar7[1] = uVar6;
    puVar7[3] = puVar7 + 0x11;
    puVar7[4] = puVar7;
    puVar7[5] = puVar7 + 0x11;
    puVar7[6] = (long)puVar7 + (uVar6 & 0xfffffffffffffff8);
    puVar7[7] = uVar6;
    puVar7[8] = 0;
    puVar7[9] = 0;
    puVar7[10] = param_1;
    puVar7[0xc] = 0;
    puVar7[0xb] = 0;
    puVar7[0xe] = 0;
    puVar7[0xd] = 0;
    puVar7[0x10] = 0;
    puVar7[0xf] = 0;
    puVar7 = puVar7 + 2;
    *(undefined1 *)puVar7 = 0;
    FUN_006fd5a4(param_1,lVar3,puVar7);
  }
LAB_006fce48:
  *(undefined8 **)(lVar3 + 0x10) = puVar7;
  *(undefined8 *)(lVar3 + 8) = *param_1;
  return puVar7;
}


// ===== 006fce6c  FUN_006fce6c =====

undefined8 * FUN_006fce6c(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  pbVar2 = (byte *)FUN_006fcd3c();
  if ((0xf < param_2) && (uVar4 = 0x3c - LZCOUNT(param_2 - 1), uVar4 < *pbVar2)) {
    puVar3 = *(undefined8 **)(*(long *)(pbVar2 + 0x30) + uVar4 * 8);
    if (puVar3 != (undefined8 *)0x0) {
      *(undefined8 *)(*(long *)(pbVar2 + 0x30) + uVar4 * 8) = *puVar3;
      return puVar3;
    }
  }
  puVar3 = *(undefined8 **)(pbVar2 + 0x18);
  uVar4 = *(ulong *)(pbVar2 + 0x20);
  if ((long)param_2 <= (long)(uVar4 - (long)puVar3)) {
    param_2 = (long)puVar3 + param_2;
    *(ulong *)(pbVar2 + 0x18) = param_2;
    uVar5 = *(ulong *)(pbVar2 + 8);
    if (((long)(uVar5 - param_2) < 0x401) && (uVar5 < uVar4)) {
      if (uVar5 <= param_2) {
        uVar5 = param_2;
      }
      uVar1 = uVar5 + 0x400;
      if (uVar4 <= uVar5 + 0x400) {
        uVar1 = uVar4;
      }
      for (; uVar5 < uVar1; uVar5 = uVar5 + 0x40) {
        Hint_Prefetch(uVar5,2,0,0);
      }
    }
    *(ulong *)(pbVar2 + 8) = uVar5;
    return puVar3;
  }
  puVar3 = (undefined8 *)FUN_006fd01c(pbVar2,param_2);
  return puVar3;
}


// ===== 006fcf50  FUN_006fcf50 =====

void FUN_006fcf50(long *param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  
  uVar2 = *(ulong *)(*(long *)(param_4 + 0x40) + 8) & 0xfffffffffffffff8;
  if (*param_1 != 0) {
    lVar4 = *(long *)(*param_1 + 8);
    uVar5 = lVar4 << 1;
    if (0xfff < uVar5) {
      uVar5 = 0x1000;
    }
    if (lVar4 != 0) goto joined_r0x006fcfb0;
  }
  uVar5 = 0x40;
joined_r0x006fcfb0:
  if ((uVar2 == 0) || (pcVar3 = *(code **)(uVar2 + 0x10), pcVar3 == (code *)0x0)) {
    plVar1 = (long *)operator_new(uVar5);
  }
  else {
    plVar1 = (long *)(*pcVar3)(uVar5);
  }
  *(ulong *)(param_4 + 0x28) = *(long *)(param_4 + 0x28) + uVar5;
  *plVar1 = *param_1;
  plVar1[1] = uVar5;
  param_1[2] = (long)(plVar1 + 2) + (uVar5 - 0x10 & 0xfffffffffffffff0);
  param_1[3] = (long)(plVar1 + 2);
  *param_1 = (long)plVar1;
  param_1[1] = (long)(plVar1 + 4);
  plVar1[2] = param_2;
  plVar1[3] = param_3;
  return;
}


// ===== 006fd01c  FUN_006fd01c =====

long FUN_006fd01c(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  lVar6 = *(long *)(param_1 + 0x10);
  if (*(long *)(lVar6 + 8) == 0) {
    uVar3 = 0;
  }
  else {
    *(long *)(param_1 + 0x70) =
         (*(long *)(param_1 + 0x18) - lVar6) + *(long *)(param_1 + 0x70) + -0x10;
    uVar3 = *(undefined8 *)(lVar6 + 8);
  }
  auVar7 = FUN_006fd4d4(*(ulong *)(*(long *)(param_1 + 0x40) + 8) & 0xfffffffffffffff8,uVar3,param_2
                       );
  uVar4 = auVar7._8_8_;
  plVar2 = auVar7._0_8_;
  plVar5 = plVar2 + 2;
  *(ulong *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + uVar4;
  plVar1 = (long *)((long)plVar2 + (uVar4 & 0xfffffffffffffff8));
  *plVar2 = lVar6;
  plVar2[1] = uVar4;
  *(long **)(param_1 + 0x18) = plVar5;
  *(long **)(param_1 + 8) = plVar5;
  *(long **)(param_1 + 0x20) = plVar1;
  *(long **)(param_1 + 0x10) = plVar2;
  lVar6 = *(long *)(param_1 + 0x18);
  if ((long)plVar1 - lVar6 < param_2) {
    lVar6 = 0;
  }
  else {
    plVar2 = (long *)(lVar6 + param_2);
    *(long **)(param_1 + 0x18) = plVar2;
    if (((long)plVar5 - (long)plVar2 < 0x401) && (plVar5 < plVar1)) {
      if (plVar5 <= plVar2) {
        plVar5 = plVar2;
      }
      plVar2 = plVar5 + 0x80;
      if (plVar1 <= plVar5 + 0x80) {
        plVar2 = plVar1;
      }
      for (; plVar5 < plVar2; plVar5 = plVar5 + 8) {
        Hint_Prefetch(plVar5,2,0,0);
      }
    }
    *(long **)(param_1 + 8) = plVar5;
  }
  return lVar6;
}


// ===== 006fd130  FUN_006fd130 =====

long FUN_006fd130(long param_1)

{
  ulong uVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  ushort uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  
  lVar9 = *(long *)(param_1 + 0x38);
  if (lVar9 == 0) {
    plVar6 = *(long **)(param_1 + 0x18);
    uVar8 = *(ulong *)(param_1 + 0x20);
    uVar11 = 0x100;
    if (0xff < (long)(uVar8 - (long)plVar6)) goto LAB_006fd1b4;
    uVar10 = 0x100;
  }
  else {
    *(ulong *)(param_1 + 0x70) = (ulong)*(ushort *)(lVar9 + 8) + *(long *)(param_1 + 0x70) + -0x10;
    uVar11 = (ulong)*(ushort *)(lVar9 + 10);
    plVar6 = *(long **)(param_1 + 0x18);
    uVar8 = *(ulong *)(param_1 + 0x20);
    if ((long)uVar11 <= (long)(uVar8 - (long)plVar6)) {
LAB_006fd1b4:
      uVar1 = (long)plVar6 + uVar11;
      *(ulong *)(param_1 + 0x18) = uVar1;
      uVar7 = *(ulong *)(param_1 + 8);
      if (((long)(uVar7 - uVar1) < 0x401) && (uVar7 < uVar8)) {
        if (uVar7 <= uVar1) {
          uVar7 = uVar1;
        }
        uVar1 = uVar7 + 0x400;
        if (uVar8 <= uVar7 + 0x400) {
          uVar1 = uVar8;
        }
        for (; uVar7 < uVar1; uVar7 = uVar7 + 0x40) {
          Hint_Prefetch(uVar7,2,0,0);
        }
      }
      *(ulong *)(param_1 + 8) = uVar7;
      uVar10 = (int)uVar11 << 1;
      uVar3 = (undefined2)uVar10;
      if ((uVar10 & 0xe000) != 0) {
        uVar3 = 0x2000;
      }
      uVar4 = 0x100;
      if (lVar9 != 0) {
        uVar4 = uVar3;
      }
      *(ulong *)(param_1 + 0x70) = *(long *)(param_1 + 0x70) - uVar11;
      *(undefined2 *)((long)plVar6 + 10) = uVar4;
      *plVar6 = lVar9;
      *(short *)(plVar6 + 1) =
           (short)uVar11 + ((short)((uVar11 - 0x10) / 0x18) * 0x18 - (short)(uVar11 - 0x10));
      *(undefined1 *)((long)plVar6 + 0xc) = 0;
      goto LAB_006fd230;
    }
    uVar10 = (uint)*(ushort *)(lVar9 + 10);
    uVar2 = uVar10 << 1 & 0xfffe;
    if ((uVar10 << 1 & 0xe000) != 0) {
      uVar2 = 0x2000;
    }
    uVar11 = (ulong)uVar2;
  }
  uVar10 = uVar10 + (((uint)(((ulong)uVar10 - 0x10) / 0x18) & 0xfffffff) * 0x18 -
                    (int)((ulong)uVar10 - 0x10));
  plVar6 = (long *)operator_new((ulong)uVar10 & 0xffff);
  *plVar6 = lVar9;
  *(short *)(plVar6 + 1) = (short)uVar10;
  *(short *)((long)plVar6 + 10) = (short)uVar11;
  *(undefined1 *)((long)plVar6 + 0xc) = 1;
  *(ulong *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + ((ulong)uVar10 & 0xffff);
LAB_006fd230:
  *(long **)(param_1 + 0x38) = plVar6;
  uVar5 = *(ushort *)(plVar6 + 1);
  *(ulong *)(param_1 + 0x48) = (ulong)uVar5 - 0x28;
  return (long)plVar6 + ((ulong)uVar5 - 0x18);
}


// ===== 006fd2f8  FUN_006fd2f8 =====

ulong FUN_006fd2f8(long param_1,ulong param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong *puVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  
  do {
    lVar7 = *(long *)(param_1 + 0x10);
    uVar9 = param_2 + 7 & 0xfffffffffffffff8;
    uVar5 = uVar9;
    if (8 < param_3) {
      uVar5 = (param_3 - 8) + param_2;
    }
    if (*(long *)(lVar7 + 8) == 0) {
      uVar4 = 0;
    }
    else {
      *(long *)(param_1 + 0x70) =
           (*(long *)(param_1 + 0x18) - lVar7) + *(long *)(param_1 + 0x70) + -0x10;
      uVar4 = *(undefined8 *)(lVar7 + 8);
    }
    auVar10 = FUN_006fd4d4(*(ulong *)(*(long *)(param_1 + 0x40) + 8) & 0xfffffffffffffff8,uVar4,
                           uVar5);
    uVar5 = auVar10._8_8_;
    plVar3 = auVar10._0_8_;
    *(ulong *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + uVar5;
    *plVar3 = lVar7;
    plVar3[1] = uVar5;
    uVar5 = (long)plVar3 + (uVar5 & 0xfffffffffffffff8);
    *(long **)(param_1 + 0x18) = plVar3 + 2;
    *(long **)(param_1 + 8) = plVar3 + 2;
    *(ulong *)(param_1 + 0x20) = uVar5;
    *(long **)(param_1 + 0x10) = plVar3;
    uVar8 = (param_3 - 1) + *(long *)(param_1 + 0x18) & -param_3;
    uVar1 = uVar8 + uVar9;
    param_2 = uVar9;
  } while (uVar5 < uVar1);
  *(ulong *)(param_1 + 0x18) = uVar1;
  puVar2 = *(ulong **)(param_1 + 0x58);
  if (puVar2 < *(ulong **)(param_1 + 0x60)) {
    *(ulong **)(param_1 + 0x58) = puVar2 + 2;
    *puVar2 = uVar8;
    puVar2[1] = param_4;
  }
  else {
    FUN_006fcf50(param_1 + 0x50,uVar8,param_4,param_1);
  }
  uVar9 = *(ulong *)(param_1 + 0x58);
  uVar5 = *(ulong *)(param_1 + 0x68);
  if (((long)(uVar5 - uVar9) < 0x181) && (uVar6 = *(ulong *)(param_1 + 0x60), uVar5 < uVar6)) {
    if (uVar5 <= uVar9) {
      uVar5 = uVar9;
    }
    uVar9 = uVar5 + 0x180;
    if (uVar6 <= uVar5 + 0x180) {
      uVar9 = uVar6;
    }
    for (; uVar5 < uVar9; uVar5 = uVar5 + 0x40) {
      Hint_Prefetch(uVar5,2,0,0);
    }
  }
  uVar9 = *(ulong *)(param_1 + 8);
  *(ulong *)(param_1 + 0x68) = uVar5;
  if (((long)(uVar9 - uVar1) < 0x401) && (uVar5 = *(ulong *)(param_1 + 0x20), uVar9 < uVar5)) {
    if (uVar9 <= uVar1) {
      uVar9 = uVar1;
    }
    uVar1 = uVar9 + 0x400;
    if (uVar5 <= uVar9 + 0x400) {
      uVar1 = uVar5;
    }
    for (; uVar9 < uVar1; uVar9 = uVar9 + 0x40) {
      Hint_Prefetch(uVar9,2,0,0);
    }
  }
  *(ulong *)(param_1 + 8) = uVar9;
  return uVar8;
}


// ===== 006fd4d4  FUN_006fd4d4 =====

void FUN_006fd4d4(ulong *param_1,long param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined1 auStack_40 [16];
  
  if (param_1 == (ulong *)0x0) {
    pcVar4 = (code *)0x0;
    uVar3 = 0x8000;
    uVar2 = 0x100;
  }
  else {
    uVar2 = *param_1;
    uVar3 = param_1[1];
    pcVar4 = (code *)param_1[2];
  }
  if ((ulong)(param_2 << 1) <= uVar3) {
    uVar3 = param_2 << 1;
  }
  if (param_2 != 0) {
    uVar2 = uVar3;
  }
  if ((0xffffffffffffffef < param_3) &&
     (lVar1 = FUN_006f075c(param_3,0xffffffffffffffef,
                           "min_bytes <= std::numeric_limits<size_t>::max() - SerialArena::kBlockHeaderSize"
                          ), lVar1 != 0)) {
    FUN_006de99c(auStack_40,"../../third_party/protobuf/src/google/protobuf/arena.cc",0x4b,lVar1);
    FUN_006de39c(auStack_40);
                    /* WARNING: Subroutine does not return */
    FUN_006dea94(auStack_40);
  }
  if (uVar2 <= param_3 + 0x10) {
    uVar2 = param_3 + 0x10;
  }
  if (pcVar4 == (code *)0x0) {
    operator_new(uVar2);
  }
  else {
    (*pcVar4)();
  }
  return;
}


// ===== 006fd5a4  FUN_006fd5a4 =====

void FUN_006fd5a4(long param_1,long param_2,long param_3)

{
  long *plVar1;
  uint uVar2;
  size_t __n;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + 0x10);
  uVar2 = *(uint *)(lVar7 + 8);
  if (uVar2 != 0) {
    uVar3 = FUN_00d0f740(1,lVar7 + 0xc);
    if (uVar3 < uVar2) {
      lVar7 = lVar7 + (ulong)uVar3 * 8;
      *(long *)(lVar7 + 0x10) = param_2;
      *(long *)(lVar7 + ((ulong)uVar2 * 8 + 0x17 & 0xffffffff8)) = param_3;
      return;
    }
    *(uint *)(lVar7 + 0xc) = uVar2;
  }
  FUN_006e4878(param_1 + 0x20);
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 == lVar7) {
    uVar5 = (ulong)*(uint *)(lVar7 + 8);
    lVar6 = lVar7;
  }
  else {
    uVar3 = FUN_00d0f740(1,lVar6 + 0xc);
    uVar2 = *(uint *)(lVar6 + 8);
    uVar5 = (ulong)uVar2;
    if (uVar3 < uVar2) {
      lVar6 = lVar6 + (ulong)uVar3 * 8;
      *(long *)(lVar6 + 0x10) = param_2;
      *(long *)(lVar6 + (uVar5 * 8 + 0x17 & 0xffffffff8)) = param_3;
      goto LAB_006fd738;
    }
    *(uint *)(lVar6 + 0xc) = uVar2;
  }
  uVar5 = ((uVar5 * 8 + 0x17 & 0xffffffff8) + uVar5 * 8) * 4;
  if (0xfff < uVar5) {
    uVar5 = 0x1000;
  }
  uVar2 = (int)uVar5 - 0x10U >> 1;
  uVar5 = ((ulong)(uVar2 + 0x17) & 0xfffffff8) + (ulong)uVar2;
  plVar4 = (long *)operator_new(uVar5);
  uVar2 = (int)uVar5 - 0x10U >> 4;
  plVar4[2] = param_2;
  *(uint *)(plVar4 + 1) = uVar2;
  *(undefined4 *)((long)plVar4 + 0xc) = 1;
  if (uVar5 < 0x30) {
    plVar4[(ulong)uVar2 + 2] = param_3;
  }
  else {
    __n = (ulong)(uVar2 - 1) << 3;
    memset(plVar4 + 3,0,__n);
    plVar1 = (long *)((long)plVar4 + ((ulong)(uVar2 * 8 + 0x17) & 0xfffffff8));
    *plVar1 = param_3;
    memset(plVar1 + 1,0,__n);
  }
  *plVar4 = lVar6;
  *(long **)(param_1 + 0x10) = plVar4;
LAB_006fd738:
  FUN_006e5c10(param_1 + 0x20);
  return;
}


// ===== 006fd758  FUN_006fd758 =====

ulong FUN_006fd758(long *param_1,long param_2,long param_3,ulong param_4)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  lVar2 = __emutls_get_address(&DAT_00d5a2a0);
  if (*(long *)(lVar2 + 8) != *param_1) {
    uVar3 = FUN_006fd90c(param_1,param_2,param_3,param_4);
    return uVar3;
  }
  lVar2 = *(long *)(lVar2 + 0x10);
  uVar4 = param_2 + 7U & 0xfffffffffffffff8;
  uVar7 = (param_3 + *(long *)(lVar2 + 0x18)) - 1U & -param_3;
  uVar3 = uVar7 + uVar4;
  if (*(ulong *)(lVar2 + 0x20) < uVar3) {
    uVar3 = FUN_006fd2f8(lVar2,uVar4,param_3,param_4);
    return uVar3;
  }
  *(ulong *)(lVar2 + 0x18) = uVar3;
  puVar1 = *(ulong **)(lVar2 + 0x58);
  if (puVar1 < *(ulong **)(lVar2 + 0x60)) {
    *(ulong **)(lVar2 + 0x58) = puVar1 + 2;
    *puVar1 = uVar7;
    puVar1[1] = param_4;
  }
  else {
    FUN_006fcf50(lVar2 + 0x50,uVar7,param_4,lVar2);
  }
  uVar5 = *(ulong *)(lVar2 + 0x58);
  uVar4 = *(ulong *)(lVar2 + 0x68);
  if (((long)(uVar4 - uVar5) < 0x181) && (uVar6 = *(ulong *)(lVar2 + 0x60), uVar4 < uVar6)) {
    if (uVar4 <= uVar5) {
      uVar4 = uVar5;
    }
    uVar5 = uVar4 + 0x180;
    if (uVar6 <= uVar4 + 0x180) {
      uVar5 = uVar6;
    }
    for (; uVar4 < uVar5; uVar4 = uVar4 + 0x40) {
      Hint_Prefetch(uVar4,2,0,0);
    }
  }
  uVar5 = *(ulong *)(lVar2 + 8);
  *(ulong *)(lVar2 + 0x68) = uVar4;
  if (((long)(uVar5 - uVar3) < 0x401) && (uVar4 = *(ulong *)(lVar2 + 0x20), uVar5 < uVar4)) {
    if (uVar5 <= uVar3) {
      uVar5 = uVar3;
    }
    uVar3 = uVar5 + 0x400;
    if (uVar4 <= uVar5 + 0x400) {
      uVar3 = uVar4;
    }
    for (; uVar5 < uVar3; uVar5 = uVar5 + 0x40) {
      Hint_Prefetch(uVar5,2,0,0);
    }
  }
  *(ulong *)(lVar2 + 8) = uVar5;
  return uVar7;
}


// ===== 006fd90c  FUN_006fd90c =====

ulong FUN_006fd90c(undefined8 param_1,long param_2,long param_3,ulong param_4)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  lVar2 = FUN_006fcd3c(param_1,param_2 + 0x10);
  uVar4 = param_2 + 7U & 0xfffffffffffffff8;
  uVar7 = (param_3 + *(long *)(lVar2 + 0x18)) - 1U & -param_3;
  uVar3 = uVar7 + uVar4;
  if (*(ulong *)(lVar2 + 0x20) < uVar3) {
    uVar3 = FUN_006fd2f8(lVar2,uVar4,param_3,param_4);
    return uVar3;
  }
  *(ulong *)(lVar2 + 0x18) = uVar3;
  puVar1 = *(ulong **)(lVar2 + 0x58);
  if (puVar1 < *(ulong **)(lVar2 + 0x60)) {
    *(ulong **)(lVar2 + 0x58) = puVar1 + 2;
    *puVar1 = uVar7;
    puVar1[1] = param_4;
  }
  else {
    FUN_006fcf50(lVar2 + 0x50,uVar7,param_4,lVar2);
  }
  uVar5 = *(ulong *)(lVar2 + 0x58);
  uVar4 = *(ulong *)(lVar2 + 0x68);
  if (((long)(uVar4 - uVar5) < 0x181) && (uVar6 = *(ulong *)(lVar2 + 0x60), uVar4 < uVar6)) {
    if (uVar4 <= uVar5) {
      uVar4 = uVar5;
    }
    uVar5 = uVar4 + 0x180;
    if (uVar6 <= uVar4 + 0x180) {
      uVar5 = uVar6;
    }
    for (; uVar4 < uVar5; uVar4 = uVar4 + 0x40) {
      Hint_Prefetch(uVar4,2,0,0);
    }
  }
  uVar5 = *(ulong *)(lVar2 + 8);
  *(ulong *)(lVar2 + 0x68) = uVar4;
  if (((long)(uVar5 - uVar3) < 0x401) && (uVar4 = *(ulong *)(lVar2 + 0x20), uVar5 < uVar4)) {
    if (uVar5 <= uVar3) {
      uVar5 = uVar3;
    }
    uVar3 = uVar5 + 0x400;
    if (uVar4 <= uVar5 + 0x400) {
      uVar3 = uVar4;
    }
    for (; uVar5 < uVar3; uVar5 = uVar5 + 0x40) {
      Hint_Prefetch(uVar5,2,0,0);
    }
  }
  *(ulong *)(lVar2 + 8) = uVar5;
  return uVar7;
}


// ===== 006fda80  FUN_006fda80 =====

void FUN_006fda80(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  lVar2 = __emutls_get_address(&DAT_00d5a2a0);
  if (*(long *)(lVar2 + 8) == *param_1) {
    lVar2 = *(long *)(lVar2 + 0x10);
  }
  else {
    lVar2 = FUN_006fcd3c(param_1,0x10);
  }
  puVar1 = *(undefined8 **)(lVar2 + 0x58);
  if (puVar1 < *(undefined8 **)(lVar2 + 0x60)) {
    *(undefined8 **)(lVar2 + 0x58) = puVar1 + 2;
    *puVar1 = param_2;
    puVar1[1] = param_3;
  }
  else {
    FUN_006fcf50(lVar2 + 0x50,param_2,param_3,lVar2);
  }
  uVar4 = *(ulong *)(lVar2 + 0x58);
  uVar3 = *(ulong *)(lVar2 + 0x68);
  if (((long)(uVar3 - uVar4) < 0x181) && (uVar5 = *(ulong *)(lVar2 + 0x60), uVar3 < uVar5)) {
    if (uVar3 <= uVar4) {
      uVar3 = uVar4;
    }
    uVar4 = uVar3 + 0x180;
    if (uVar5 <= uVar3 + 0x180) {
      uVar4 = uVar5;
    }
    for (; uVar3 < uVar4; uVar3 = uVar3 + 0x40) {
      Hint_Prefetch(uVar3,2,0,0);
    }
  }
  *(ulong *)(lVar2 + 0x68) = uVar3;
  return;
}


// ===== 006fdb6c  FUN_006fdb6c =====

long FUN_006fdb6c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = __emutls_get_address(&DAT_00d5a2a0);
  if (*(long *)(lVar1 + 8) == *param_1) {
    lVar2 = *(long *)(lVar1 + 0x10);
    lVar1 = *(long *)(lVar2 + 0x48);
  }
  else {
    lVar2 = FUN_006fcd3c(param_1,0x10);
    lVar1 = *(long *)(lVar2 + 0x48);
  }
  if (lVar1 != 0) {
    *(long *)(lVar2 + 0x48) = lVar1 + -0x18;
    return *(long *)(lVar2 + 0x38) + lVar1 + -0x18 + 0x10;
  }
  lVar1 = FUN_006fd130();
  return lVar1;
}


// ===== 006fdbf0  FUN_006fdbf0 =====

void FUN_006fdbf0(long *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar2 = __emutls_get_address(&DAT_00d5a2a0);
  if (*(long *)(lVar2 + 8) != *param_1) {
    FUN_006fcc90(param_1,param_2);
    return;
  }
  lVar2 = *(long *)(lVar2 + 0x10);
  uVar4 = *(ulong *)(lVar2 + 0x20);
  if ((long)(uVar4 - *(long *)(lVar2 + 0x18)) < param_2) {
    FUN_006fd01c(lVar2,param_2);
    return;
  }
  uVar1 = *(long *)(lVar2 + 0x18) + param_2;
  *(ulong *)(lVar2 + 0x18) = uVar1;
  uVar3 = *(ulong *)(lVar2 + 8);
  if (((long)(uVar3 - uVar1) < 0x401) && (uVar3 < uVar4)) {
    if (uVar3 <= uVar1) {
      uVar3 = uVar1;
    }
    uVar1 = uVar3 + 0x400;
    if (uVar4 <= uVar3 + 0x400) {
      uVar1 = uVar4;
    }
    for (; uVar3 < uVar1; uVar3 = uVar3 + 0x40) {
      Hint_Prefetch(uVar3,2,0,0);
    }
  }
  *(ulong *)(lVar2 + 8) = uVar3;
  return;
}


// ===== 006fdcd0  FUN_006fdcd0 =====

undefined8 * FUN_006fdcd0(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar2 = __emutls_get_address(&DAT_00d5a2a0);
  if (*(long *)(lVar2 + 8) != *param_1) {
    puVar4 = (undefined8 *)FUN_006fce6c(param_1,param_2);
    return puVar4;
  }
  pbVar3 = *(byte **)(lVar2 + 0x10);
  if ((0xf < param_2) && (uVar5 = 0x3c - LZCOUNT(param_2 - 1), uVar5 < *pbVar3)) {
    puVar4 = *(undefined8 **)(*(long *)(pbVar3 + 0x30) + uVar5 * 8);
    if (puVar4 != (undefined8 *)0x0) {
      *(undefined8 *)(*(long *)(pbVar3 + 0x30) + uVar5 * 8) = *puVar4;
      return puVar4;
    }
  }
  puVar4 = *(undefined8 **)(pbVar3 + 0x18);
  uVar5 = *(ulong *)(pbVar3 + 0x20);
  if ((long)param_2 <= (long)(uVar5 - (long)puVar4)) {
    param_2 = (long)puVar4 + param_2;
    *(ulong *)(pbVar3 + 0x18) = param_2;
    uVar6 = *(ulong *)(pbVar3 + 8);
    if (((long)(uVar6 - param_2) < 0x401) && (uVar6 < uVar5)) {
      if (uVar6 <= param_2) {
        uVar6 = param_2;
      }
      uVar1 = uVar6 + 0x400;
      if (uVar5 <= uVar6 + 0x400) {
        uVar1 = uVar5;
      }
      for (; uVar6 < uVar1; uVar6 = uVar6 + 0x40) {
        Hint_Prefetch(uVar6,2,0,0);
      }
    }
    *(ulong *)(pbVar3 + 8) = uVar6;
    return puVar4;
  }
  puVar4 = (undefined8 *)FUN_006fd01c(pbVar3,param_2);
  return puVar4;
}


// ===== 006fddec  thunk_FUN_006fd758 =====

void thunk_FUN_006fd758(void)

{
  FUN_006fd758();
  return;
}


// ===== 006fddf4  FUN_006fddf4 =====

void FUN_006fddf4(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined1 local_58;
  undefined7 uStack_57;
  
  lVar8 = *param_2;
  _local_58 = CONCAT71(0xaaaaaaaaaaaaaa,(char)param_2[2]);
  if (lVar8 != 0) {
    uVar9 = param_2[1];
    auVar10 = FUN_006fdf94(&local_58,lVar8,uVar9,0);
    bVar3 = lVar8 + uVar9 == auVar10._0_8_;
    uVar7 = auVar10._0_8_ - lVar8;
    if (uVar7 <= uVar9) {
      uVar9 = uVar7;
    }
    uVar4 = param_2[1];
    uVar7 = auVar10._8_8_ + uVar9;
    if ((bVar3 != true) || (uVar7 != uVar4)) {
      if (bVar3) {
        bVar3 = false;
        lVar6 = lVar8;
        uVar5 = uVar9;
      }
      else {
        lVar1 = *param_2;
        uVar2 = param_2[1];
        auVar10 = FUN_006fdf94(&local_58,lVar1,uVar2);
        if (uVar2 < uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_005f55a8("string_view::substr");
        }
        lVar6 = lVar1 + uVar7;
        uVar4 = auVar10._0_8_ - lVar6;
        uVar5 = uVar2 - uVar7;
        if (uVar4 <= uVar2 - uVar7) {
          uVar5 = uVar4;
        }
        uVar4 = param_2[1];
        bVar3 = (lVar1 + uVar2 == auVar10._0_8_ || bVar3) != true;
        uVar7 = uVar7 + auVar10._8_8_ + uVar5;
      }
      if (uVar7 != uVar4) {
        bVar3 = true;
      }
      if (!bVar3) {
        uVar5 = 0;
        lVar6 = 0;
      }
      goto LAB_006fdf60;
    }
  }
  uVar5 = 0;
  lVar6 = 0;
  uVar9 = 0;
  lVar8 = 0;
LAB_006fdf60:
  *param_1 = lVar8;
  param_1[1] = uVar9;
  param_1[2] = lVar6;
  param_1[3] = uVar5;
  return;
}


// ===== 006fdf94  FUN_006fdf94 =====

undefined1  [16] FUN_006fdf94(byte *param_1,long param_2,ulong param_3,ulong param_4)

{
  void *pvVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  if (param_3 < param_4) {
    uVar2 = 0;
  }
  else {
    pvVar1 = memchr((void *)(param_2 + param_4),(uint)*param_1,param_3 - param_4);
    uVar2 = 0;
    if ((pvVar1 != (void *)0x0) && (uVar3 = (long)pvVar1 - param_2, uVar3 != 0xffffffffffffffff)) {
      if (param_3 < uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_005f55a8("string_view::substr",0);
      }
      uVar2 = (ulong)(param_3 != uVar3);
      param_3 = uVar3;
    }
  }
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = param_2 + param_3;
  return auVar4;
}


// ===== 006fe010  FUN_006fe010 =====

undefined **
FUN_006fe010(long param_1,undefined **param_2,long param_3,uint param_4,ushort *param_5,uint param_6
            )

{
  undefined **ppuVar1;
  long lVar2;
  ulong uVar3;
  
  if (param_2 == (undefined **)0x0) {
    return &PTR_FUN_00d29d78;
  }
  uVar3 = (ulong)*param_5;
  if (uVar3 != 0) {
    *(uint *)(param_1 + uVar3) = *(uint *)(param_1 + uVar3) | param_6;
  }
  if ((param_4 != 0) && ((param_4 & 7) != 4)) {
    if ((ulong)param_5[1] != 0) {
      ppuVar1 = (undefined **)
                FUN_0070c908(param_1 + (ulong)param_5[1],param_4,param_2,
                             **(undefined8 **)(param_5 + 0x10),param_1 + 8,param_3);
      return ppuVar1;
    }
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) == 0) {
      lVar2 = FUN_006dcbb4((ulong *)(param_1 + 8));
    }
    else {
      lVar2 = (uVar3 & 0xfffffffffffffffe) + 8;
    }
    ppuVar1 = (undefined **)FUN_006f6b14(param_4,lVar2,param_2,param_3);
    return ppuVar1;
  }
  *(uint *)(param_3 + 0x50) = param_4 - 1;
  return param_2;
}


// ===== 006fe0e8  FUN_006fe0e8 =====

ushort * FUN_006fe0e8(undefined8 param_1,ushort *param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  int iVar2;
  ushort *puVar3;
  undefined1 auVar4 [16];
  
  do {
    puVar3 = param_2;
    if ((ushort *)*param_3 <= param_2) {
      iVar2 = (int)param_2 - *(int *)(param_3 + 1);
      if (*(int *)((long)param_3 + 0x1c) == iVar2) {
        if ((0 < iVar2) && (puVar3 = (ushort *)0x0, param_3[2] != 0)) {
          puVar3 = param_2;
        }
LAB_006fe1a0:
        if ((*(byte *)(param_4 + 9) & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x006fe1e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar3 = (ushort *)(**(code **)(param_4 + 0x28))(param_1,puVar3,param_3);
          return puVar3;
        }
        return puVar3;
      }
      auVar4 = FUN_006f5260(param_3,iVar2,*(undefined4 *)((long)param_3 + 0x5c));
      puVar3 = auVar4._0_8_;
      if ((auVar4 & (undefined1  [16])0x1) != (undefined1  [16])0x0) goto LAB_006fe1a0;
    }
    puVar1 = (undefined8 *)(param_4 + 0x38 + ((ulong)*puVar3 & (ulong)*(byte *)(param_4 + 8)) * 2);
    puVar3 = (ushort *)
             (*(code *)*puVar1)(param_1,puVar3,param_3,puVar1[1] ^ (ulong)*puVar3,param_4,0);
    if ((puVar3 == (ushort *)0x0) || (param_2 = puVar3, *(int *)(param_3 + 10) != 0))
    goto LAB_006fe1a0;
  } while( true );
}


// ===== 006fe1e4  switchD_006fe28c::caseD_8 =====

undefined8 switchD_006fe28c::caseD_8(long param_1)

{
  ushort *in_x4;
  uint in_w5;
  ulong uVar1;
  
  uVar1 = (ulong)*in_x4;
  if (uVar1 != 0) {
    *(uint *)(param_1 + uVar1) = *(uint *)(param_1 + uVar1) | in_w5;
  }
  return 0;
}


// ===== 006fe204  FUN_006fe204 =====

ulong * FUN_006fe204(ulong *param_1,byte *param_2,long *param_3,undefined8 param_4,ushort *param_5,
                    ulong *param_6)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  ushort uVar5;
  ushort uVar6;
  byte bVar7;
  byte bVar8;
  char cVar9;
  byte bVar10;
  long lVar11;
  uint uVar12;
  long *plVar13;
  ulong *puVar14;
  ulong *puVar15;
  undefined8 *puVar16;
  int iVar17;
  ulong uVar18;
  uint uVar19;
  uint uVar20;
  long lVar21;
  ulong uVar22;
  long *plVar23;
  ulong uVar24;
  ulong uVar25;
  void *pvVar26;
  ulong __n;
  uint *puVar27;
  uint uVar28;
  uint *puVar29;
  code *UNRECOVERED_JUMPTABLE_00;
  void *pvVar30;
  ulong *puVar31;
  long lVar32;
  undefined1 uVar33;
  undefined8 uVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [12];
  undefined1 auVar42 [12];
  undefined1 auVar43 [12];
  undefined1 auVar44 [12];
  ulong *puStack_68;
  
  puVar15 = (ulong *)(param_2 + 1);
  uVar24 = (ulong)*param_2;
  if ((char)*param_2 < '\0') {
    bVar8 = (byte)*puVar15;
    if ((char)bVar8 < '\0') {
      bVar7 = param_2[2];
      uVar24 = (uVar24 << 0x39) >> 7 | (ulong)bVar8 << 0x39;
      if ((char)bVar7 < '\0') {
        bVar8 = param_2[3];
        uVar24 = uVar24 >> 7 | (ulong)bVar7 << 0x39;
        if ((char)bVar8 < '\0') {
          uVar18 = (ulong)(char)param_2[4];
          if ((long)uVar18 < 0) goto LAB_006fe2ac;
          puVar15 = (ulong *)(param_2 + 5);
          uVar24 = (uVar24 >> 7 | (ulong)bVar8 << 0x39 | uVar18) >> 0x24 | uVar18 << 0x1c;
        }
        else {
          uVar24 = uVar24 >> 0x2b | (ulong)bVar8 << 0x15;
          puVar15 = (ulong *)(param_2 + 4);
        }
      }
      else {
        uVar24 = uVar24 >> 0x32 | (ulong)bVar7 << 0xe;
        puVar15 = (ulong *)(param_2 + 3);
      }
    }
    else {
      uVar24 = uVar24 & 0x7f | (ulong)bVar8 << 7;
      puVar15 = (ulong *)(param_2 + 2);
    }
  }
  if (puVar15 == (ulong *)0x0) {
LAB_006fe2ac:
    puVar15 = (ulong *)switchD_006fe28c::caseD_8();
    return puVar15;
  }
  uVar28 = (uint)(uVar24 >> 3) & 0x1fffffff;
  uVar12 = uVar28 - 1;
  if (0x1f < uVar12) {
    for (puVar29 = (uint *)((ulong)param_5[5] + (long)param_5); *puVar29 <= uVar28;
        puVar29 = (uint *)((long)puVar29 + (ulong)(ushort)puVar29[1] * 4 + 6)) {
      uVar12 = uVar28 - *puVar29;
      uVar20 = uVar12 >> 4;
      if (uVar20 < (ushort)puVar29[1]) {
        puVar1 = (ushort *)((long)puVar29 + (ulong)(uVar20 << 1) * 2 + 6);
        uVar12 = uVar12 & 0xf;
        uVar5 = *puVar1;
        if ((uVar5 >> (ulong)uVar12 & 1) == 0) {
          uVar34 = NEON_cnt((ulong)((1 << (ulong)uVar12) - 1U & (uint)uVar5),1);
          uVar33 = NEON_addv(uVar34,1);
          uVar12 = (uVar12 - (int)CONCAT71((int7)((ulong)uVar34 >> 8),uVar33)) + (uint)puVar1[1];
          goto LAB_006fe260;
        }
        break;
      }
    }
LAB_006fe32c:
                    /* WARNING: Could not recover jumptable at 0x006fe334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar15 = (ulong *)(**(code **)(param_5 + 0x18))();
    return puVar15;
  }
  uVar28 = 1 << (ulong)(uVar12 & 0x1f);
  if ((*(uint *)(param_5 + 6) & uVar28) != 0) goto LAB_006fe32c;
  uVar34 = NEON_cnt((ulong)(*(uint *)(param_5 + 6) & uVar28 - 1),1);
  uVar33 = NEON_addv(uVar34,1);
  uVar12 = uVar12 - (int)CONCAT71((int7)((ulong)uVar34 >> 8),uVar33);
LAB_006fe260:
  uVar25 = uVar24 & 0xffffffff;
  lVar21 = (long)param_5 + (ulong)uVar12 * 0xc + (ulong)*(uint *)(param_5 + 8);
  uVar22 = (ulong)(uint)((int)lVar21 - (int)param_5);
  uVar18 = uVar25 | uVar22 << 0x20;
  uVar28 = (uint)param_6;
  uVar12 = (uint)uVar24;
  switch(*(ushort *)(lVar21 + 10) & 0xf) {
  case 0:
                    /* WARNING: Could not recover jumptable at 0x006fe3ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar15 = (ulong *)(**(code **)(param_5 + 0x18))();
    return puVar15;
  case 1:
    puVar29 = (uint *)((long)param_5 + uVar22);
    uVar6 = *(ushort *)((long)puVar29 + 10);
    uVar5 = uVar6 & 0x30;
    if (uVar5 == 0x20) {
      puVar15 = (ulong *)FUN_007040c0(param_1,puVar15,param_3,uVar18,param_5,param_6);
      return puVar15;
    }
    if ((uVar24 & 7) != 0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(param_5 + 0x18);
      puVar31 = puVar15;
      goto LAB_00701644;
    }
    uVar24 = *puVar15;
    if (((uint)uVar24 >> 7 & 1) == 0) {
      puStack_68 = (ulong *)(uVar24 & 0x7f);
      puVar31 = (ulong *)((long)puVar15 + 1);
    }
    else if (((uint)uVar24 >> 0xf & 1) == 0) {
      puVar31 = (ulong *)((long)puVar15 + 2);
      puStack_68 = (ulong *)(uVar24 & 0x7f | (uVar24 >> 8 & 0x7f) << 7);
    }
    else {
      puVar31 = (ulong *)FUN_00705258(puVar15,&puStack_68);
    }
    if (puVar31 == (ulong *)0x0) {
      puVar15 = (ulong *)switchD_006fe28c::caseD_8(param_1);
      return puVar15;
    }
    uVar2 = uVar6 & 0x1c0;
    uVar3 = uVar6 & 0x600;
    puVar14 = puStack_68;
    if (uVar2 == 0xc0) {
      if (uVar3 == 0x200) {
        puVar14 = (ulong *)(-((ulong)puStack_68 & 1) ^ (ulong)puStack_68 >> 1);
      }
    }
    else if (uVar2 == 0x80) {
      uVar20 = (uint)puStack_68;
      if ((uVar6 >> 10 & 1) == 0) {
        if (uVar3 == 0x200) {
          puVar14 = (ulong *)(long)(int)(-(uVar20 & 1) ^ uVar20 >> 1);
        }
      }
      else {
        uVar34 = *(undefined8 *)
                  ((long)param_5 + (ulong)(ushort)puVar29[2] * 8 + (ulong)*(uint *)(param_5 + 0xc));
        if (uVar3 == 0x600) {
          if (((int)uVar20 < (int)uVar34) || ((int)((ulong)uVar34 >> 0x20) < (int)uVar20)) {
LAB_00701824:
            puVar15 = (ulong *)FUN_006ff8bc(param_1,puVar15,param_3,uVar18,param_5,param_6);
            return puVar15;
          }
        }
        else {
          uVar24 = FUN_0071211c((ulong)puStack_68 & 0xffffffff);
          if ((uVar24 & 1) == 0) goto LAB_00701824;
        }
      }
    }
    if (uVar5 == 0x30) {
      FUN_00700334(param_5,0,puVar29,uVar12 >> 3);
      if (uVar2 != 0xc0) goto LAB_00701774;
LAB_00701738:
      *(ulong **)((long)param_1 + (ulong)*puVar29) = puVar14;
    }
    else {
      if (uVar5 == 0x10) {
        uVar24 = (ulong)(puVar29[1] >> 3) & 0x1ffffffc;
        *(uint *)((long)param_1 + uVar24) =
             1 << (ulong)(puVar29[1] & 0x1f) | *(uint *)((long)param_1 + uVar24);
      }
      if (uVar2 == 0xc0) goto LAB_00701738;
LAB_00701774:
      if (uVar2 == 0x80) {
        *(int *)((long)param_1 + (ulong)*puVar29) = (int)puVar14;
      }
      else {
        *(bool *)((long)param_1 + (ulong)*puVar29) = puVar14 != (ulong *)0x0;
      }
    }
    if ((ulong *)*param_3 <= puVar31) {
      uVar24 = (ulong)*param_5;
      if (uVar24 != 0) {
        *(uint *)((long)param_1 + uVar24) = *(uint *)((long)param_1 + uVar24) | uVar28;
      }
      return puVar31;
    }
    uVar24 = (ulong)(ushort)*puVar31 & (ulong)(byte)param_5[4];
    UNRECOVERED_JUMPTABLE_00 = *(code **)(param_5 + uVar24 + 0x1c);
    uVar18 = *(ulong *)(param_5 + uVar24 + 0x20) ^ (ulong)(ushort)*puVar31;
LAB_00701644:
                    /* WARNING: Could not recover jumptable at 0x0070166c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar15 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)(param_1,puVar31,param_3,uVar18,param_5,param_6);
    return puVar15;
  case 2:
    if ((uVar24 & 7) != 2) {
      puVar15 = (ulong *)FUN_007040c0(param_1,puVar15,param_3);
      return puVar15;
    }
    puVar29 = (uint *)((long)param_5 + uVar22);
    uVar12 = puVar29[1];
    uVar5 = *(ushort *)((long)puVar29 + 10);
    if (uVar12 != 0xffffffff) {
      uVar24 = (ulong)(uVar12 >> 3) & 0x1ffffffc;
      *(uint *)((long)param_1 + uVar24) =
           *(uint *)((long)param_1 + uVar24) | 1 << (ulong)(uVar12 & 0x1f);
    }
    uVar24 = (ulong)*param_5;
    if (uVar24 != 0) {
      *(uint *)((long)param_1 + uVar24) = *(uint *)((long)param_1 + uVar24) | uVar28;
    }
    uVar6 = uVar5 >> 6 & 7;
    if (uVar6 == 0) {
      puVar15 = (ulong *)FUN_007061f0(param_3,puVar15,(long)param_1 + (ulong)*puVar29,0);
      return puVar15;
    }
    if (uVar6 != 2) {
      if ((uVar5 & 0x600) != 0) {
        puVar15 = (ulong *)FUN_007052f8();
        return puVar15;
      }
      puVar15 = (ulong *)FUN_00704fbc(param_3,puVar15,(long)param_1 + (ulong)*puVar29,0);
      return puVar15;
    }
    uVar12 = (uVar5 & 0x600) >> 9;
    if (uVar12 < 2) {
      if (uVar12 == 0) {
        puVar15 = (ulong *)FUN_0070559c();
        return puVar15;
      }
      puVar15 = (ulong *)FUN_00705838(param_3,puVar15,(long)param_1 + (ulong)*puVar29,0);
      return puVar15;
    }
    if (uVar12 == 2) {
      puVar15 = (ulong *)FUN_00705adc(param_3,puVar15,&stack0xffffffffffffffc8,0);
    }
    else {
      puVar15 = (ulong *)FUN_00705efc(param_3,puVar15,&stack0xffffffffffffffc8,0);
    }
    return puVar15;
  case 3:
    puVar29 = (uint *)((long)param_5 + uVar22);
    uVar5 = *(ushort *)((long)puVar29 + 10) & 0x30;
    if (uVar5 == 0x20) {
      puVar15 = (ulong *)FUN_0070649c(param_1,puVar15,param_3,uVar18,param_5,param_6);
      return puVar15;
    }
    uVar6 = *(ushort *)((long)puVar29 + 10) & 0x1c0;
    if (uVar6 == 0xc0) {
      if ((uVar12 & 7) == 1) {
LAB_00701ab0:
        if (uVar5 == 0x30) {
          FUN_00700334(param_5,0,puVar29,uVar12 >> 3,param_5,param_1);
        }
        else if (uVar5 == 0x10) {
          uVar24 = (ulong)(puVar29[1] >> 3) & 0x1ffffffc;
          *(uint *)((long)param_1 + uVar24) =
               1 << (ulong)(puVar29[1] & 0x1f) | *(uint *)((long)param_1 + uVar24);
        }
        if (uVar6 == 0xc0) {
          *(ulong *)((long)param_1 + (ulong)*puVar29) = *puVar15;
          lVar21 = 8;
        }
        else {
          *(int *)((long)param_1 + (ulong)*puVar29) = (int)*puVar15;
          lVar21 = 4;
        }
        puVar15 = (ulong *)((long)puVar15 + lVar21);
        if ((ulong *)*param_3 <= puVar15) {
          uVar24 = (ulong)*param_5;
          if (uVar24 != 0) {
            *(uint *)((long)param_1 + uVar24) = *(uint *)((long)param_1 + uVar24) | uVar28;
          }
          return puVar15;
        }
        uVar24 = (ulong)(ushort)*puVar15 & (ulong)(byte)param_5[4];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(param_5 + uVar24 + 0x1c);
        uVar18 = *(ulong *)(param_5 + uVar24 + 0x20) ^ (ulong)(ushort)*puVar15;
        goto LAB_00701b54;
      }
    }
    else if ((uVar12 & 7) == 5) goto LAB_00701ab0;
    UNRECOVERED_JUMPTABLE_00 = *(code **)(param_5 + 0x18);
LAB_00701b54:
                    /* WARNING: Could not recover jumptable at 0x00701b78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar15 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)(param_1,puVar15,param_3,uVar18,param_5,param_6);
    return puVar15;
  case 4:
    if ((uVar24 & 7) != 2) {
      puVar15 = (ulong *)FUN_0070649c(param_1,puVar15,param_3,uVar18,param_5,param_6);
      return puVar15;
    }
    puVar29 = (uint *)((long)param_5 + uVar22);
    uVar12 = puVar29[1];
    uVar5 = *(ushort *)((long)puVar29 + 10);
    if (uVar12 != 0xffffffff) {
      uVar24 = (ulong)(uVar12 >> 3) & 0x1ffffffc;
      *(uint *)((long)param_1 + uVar24) =
           *(uint *)((long)param_1 + uVar24) | 1 << (ulong)(uVar12 & 0x1f);
    }
    cVar9 = (char)*puVar15;
    if (cVar9 < '\0') {
      auVar35 = FUN_006f6214(puVar15,cVar9);
    }
    else {
      auVar35[8] = cVar9;
      auVar35._0_8_ = (long)puVar15 + 1;
      auVar35._9_7_ = 0;
    }
    if ((uVar5 & 0x1c0) == 0xc0) {
      puVar15 = (ulong *)FUN_006f9cf4();
    }
    else {
      puVar15 = (ulong *)FUN_006f9728(param_3,auVar35._0_8_,auVar35._8_8_,
                                      (long)param_1 + (ulong)*puVar29);
    }
    if (puVar15 != (ulong *)0x0) {
      if (puVar15 < (ulong *)*param_3) {
        uVar24 = (ulong)(ushort)*puVar15 & (ulong)(byte)param_5[4];
                    /* WARNING: Could not recover jumptable at 0x00701ce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar15 = (ulong *)(**(code **)(param_5 + uVar24 + 0x1c))
                                     (param_1,puVar15,param_3,
                                      *(ulong *)(param_5 + uVar24 + 0x20) ^ (ulong)(ushort)*puVar15,
                                      param_5,param_6);
        return puVar15;
      }
      uVar24 = (ulong)*param_5;
      if (uVar24 != 0) {
        *(uint *)((long)param_1 + uVar24) = *(uint *)((long)param_1 + uVar24) | uVar28;
      }
      return puVar15;
    }
    puVar15 = (ulong *)switchD_006fe28c::caseD_8(param_1);
    return puVar15;
  case 5:
    if ((uVar12 & 7) != 2) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(param_5 + 0x18);
      goto LAB_00701dc4;
    }
    puVar29 = (uint *)((long)param_5 + uVar22);
    uVar6 = *(ushort *)((long)puVar29 + 10);
    uVar5 = uVar6 & 0x30;
    if (uVar5 == 0x20) {
      puVar15 = (ulong *)FUN_00706804(param_1,puVar15,param_3,uVar18,param_5,param_6);
      return puVar15;
    }
    if (uVar5 == 0x10) {
      uVar24 = (ulong)(puVar29[1] >> 3) & 0x1ffffffc;
      *(uint *)((long)param_1 + uVar24) =
           1 << (ulong)(puVar29[1] & 0x1f) | *(uint *)((long)param_1 + uVar24);
    }
    else if (uVar5 == 0x30) {
      FUN_00700334(param_5,0,puVar29,uVar12 >> 3,param_5,param_1);
    }
    puVar31 = (ulong *)((long)param_1 + (ulong)*puVar29);
    if ((uVar6 & 0x1c0) == 0x140) {
      uVar24 = param_1[1];
      if ((uVar24 & 1) != 0) {
        uVar24 = *(ulong *)(uVar24 & 0xfffffffffffffffe);
      }
      cVar9 = (char)*puVar15;
      if (cVar9 < '\0') {
        auVar37 = FUN_006f6214(puVar15,cVar9);
        puVar15 = auVar37._0_8_;
        if (puVar15 != (ulong *)0x0) goto LAB_00701f58;
LAB_00701f84:
        plVar13 = (long *)*puVar31;
        uVar12 = (uint)plVar13;
      }
      else {
        auVar37[8] = cVar9;
        auVar37._0_8_ = (long)puVar15 + 1U;
        auVar37._9_7_ = 0;
        if ((long)puVar15 + 1U == 0) {
          puVar15 = (ulong *)0x0;
          goto LAB_00701f84;
        }
LAB_00701f58:
        lVar21 = auVar37._0_8_;
        iVar17 = auVar37._8_4_;
        if (((int)param_3[1] - auVar37._0_4_) + 0x10 < iVar17) {
          puVar15 = (ulong *)FUN_006f71b4(param_3,lVar21,auVar37._8_8_,puVar31,uVar24);
          goto LAB_00701f84;
        }
        if (iVar17 < 0) {
LAB_00702110:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/string_view:331: libc++ Hardening assertion __len <= static_cast<size_type>(numeric_limits<difference_type>::max()) failed: string_view::string_view(_CharT *, size_t): length does not fit in difference_type\n"
                    );
        }
        FUN_006fc8b0(puVar31,lVar21,(long)iVar17,uVar24,7);
        puVar15 = (ulong *)(lVar21 + iVar17);
        plVar13 = (long *)*puVar31;
        uVar12 = (uint)plVar13;
      }
      if ((uVar12 >> 1 & 1) == 0) {
        if (((ulong)plVar13 & 1) == 0) {
          uVar24 = (ulong)plVar13 >> 2 & 0x3f;
          plVar23 = (long *)((long)puVar31 + 1);
        }
        else {
          plVar23 = *(long **)((long)plVar13 - 1);
          uVar24 = (ulong)*(uint *)((long)plVar13 + 7);
          if ((plVar23 == (long *)0x0) && (*(uint *)((long)plVar13 + 7) != 0)) goto LAB_007020fc;
        }
      }
      else {
        uVar24 = (ulong)*(byte *)((long)plVar13 - 2);
        plVar23 = plVar13;
        if ((plVar13 == (long *)0x0) && (*(byte *)((long)plVar13 - 2) != 0)) {
LAB_007020fc:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/string_view:333: libc++ Hardening assertion __len == 0 || __s != nullptr failed: string_view::string_view(_CharT *, size_t): received nullptr\n"
                    );
        }
      }
LAB_00702010:
      uVar24 = FUN_00700564(plVar23,uVar24,param_5,puVar29,uVar6 & 0x600);
    }
    else {
      if ((uVar6 & 0x1c0) != 0x80) {
        uVar24 = param_1[1];
        if ((uVar24 & 1) == 0) {
          if (uVar24 != 0) goto LAB_00701eb0;
LAB_007020a4:
          uVar34 = FUN_007141a0(puVar31,0);
          puVar15 = (ulong *)FUN_006f62b8(uVar34,puVar15,param_3);
        }
        else {
          if (*(long *)(uVar24 & 0xfffffffffffffffe) == 0) goto LAB_007020a4;
LAB_00701eb0:
          puVar15 = (ulong *)FUN_00714270(param_3,puVar15,puVar31);
        }
        if (puVar15 == (ulong *)0x0) {
          FUN_00706c04(param_1,puVar31);
          goto LAB_007020d0;
        }
        plVar13 = (long *)(*puVar31 & 0xfffffffffffffffc);
        uVar24 = (ulong)*(char *)((long)plVar13 + 0x17);
        plVar23 = plVar13;
        if ((long)uVar24 < 0) {
          plVar23 = (long *)*plVar13;
          uVar24 = plVar13[1];
        }
        goto LAB_00702010;
      }
      if (uVar5 == 0x30) {
        puVar31 = (ulong *)*puVar31;
      }
      cVar9 = (char)*puVar15;
      if (cVar9 < '\0') {
        auVar36 = FUN_006f6214(puVar15,cVar9);
        lVar21 = auVar36._0_8_;
      }
      else {
        lVar21 = (long)puVar15 + 1;
        auVar36[8] = cVar9;
        auVar36._0_8_ = lVar21;
        auVar36._9_7_ = 0;
      }
      if (lVar21 == 0) goto LAB_007020d0;
      uVar24 = auVar36._8_8_;
      lVar21 = auVar36._0_8_;
      iVar17 = ((int)param_3[1] - auVar36._0_4_) + 0x10;
      if (0x1ff < iVar17) {
        iVar17 = 0x200;
      }
      uVar18 = FUN_006f548c(param_3,uVar24 & 0xffffffff,iVar17);
      if ((uVar18 & 1) == 0) {
        puVar15 = (ulong *)FUN_006f5798(param_3,lVar21,uVar24 & 0xffffffff,puVar31);
      }
      else {
        if (auVar36._8_4_ < 0) goto LAB_00702110;
        FUN_006f1330(puVar31,lVar21,uVar24 & 0xffffffff);
        puVar15 = (ulong *)(lVar21 + (uVar24 & 0xffffffff));
      }
      if (puVar15 == (ulong *)0x0) goto LAB_007020d0;
      uVar24 = 1;
    }
    if (((uVar24 & 1) != 0) && (puVar15 != (ulong *)0x0)) {
      if ((ulong *)*param_3 <= puVar15) {
        uVar24 = (ulong)*param_5;
        if (uVar24 != 0) {
          *(uint *)((long)param_1 + uVar24) = *(uint *)((long)param_1 + uVar24) | uVar28;
        }
        return puVar15;
      }
      uVar24 = (ulong)(ushort)*puVar15 & (ulong)(byte)param_5[4];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(param_5 + uVar24 + 0x1c);
      uVar18 = *(ulong *)(param_5 + uVar24 + 0x20) ^ (ulong)(ushort)*puVar15;
LAB_00701dc4:
                    /* WARNING: Could not recover jumptable at 0x00701df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar15 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)(param_1,puVar15,param_3,uVar18,param_5,param_6)
      ;
      return puVar15;
    }
LAB_007020d0:
    puVar15 = (ulong *)switchD_006fe28c::caseD_8(param_1);
    return puVar15;
  case 6:
    puVar29 = (uint *)((long)param_5 + uVar22);
    uVar5 = *(ushort *)((long)puVar29 + 10);
    if ((uVar5 & 0x30) == 0x20) {
      if ((uVar5 & 0x1c0) == 0x40) {
        puVar15 = (ulong *)FUN_0070704c(param_1,puVar15,param_3,uVar18,param_5,param_6);
        return puVar15;
      }
      if ((uVar5 & 0x1c0) == 0) {
        puVar15 = (ulong *)FUN_00706d84(param_1,puVar15,param_3,uVar18,param_5,param_6);
        return puVar15;
      }
    }
    else if ((uVar5 & 0x1c0) == 0x40) {
      if ((uVar12 & 7) == 3) goto LAB_007021dc;
    }
    else if (((uVar5 & 0x1c0) == 0) && ((uVar12 & 7) == 2)) {
LAB_007021dc:
      puVar31 = *(ulong **)
                 ((long)param_5 + (ulong)(ushort)puVar29[2] * 8 + (ulong)*(uint *)(param_5 + 0xc));
      if ((uVar5 & 0x600) != 0x400) {
        if ((uVar5 & 0x600) != 0x200) {
          puVar31 = (ulong *)*puVar31;
        }
        puStack_68 = puVar31;
        lVar21 = (**(code **)(*puVar31 + 0x20))(puVar31);
        puVar31 = *(ulong **)(lVar21 + 8);
        if (puVar31 == (ulong *)0x0) {
          puVar31 = (ulong *)(**(code **)(*(long *)(lVar21 + 0x58) + 0x10))(puStack_68);
        }
      }
      if ((uVar5 & 0x30) == 0x30) {
        FUN_00700334(param_5,puVar31,puVar29,uVar12 >> 3);
        uVar6 = *param_5;
      }
      else {
        if ((uVar5 & 0x30) == 0x10) {
          uVar24 = (ulong)(puVar29[1] >> 3) & 0x1ffffffc;
          *(uint *)((long)param_1 + uVar24) =
               1 << (ulong)(puVar29[1] & 0x1f) | *(uint *)((long)param_1 + uVar24);
        }
        uVar6 = *param_5;
      }
      uVar24 = (ulong)uVar6;
      if (uVar24 != 0) {
        *(uint *)((long)param_1 + uVar24) = *(uint *)((long)param_1 + uVar24) | uVar28;
      }
      uVar24 = (ulong)*puVar29;
      if (*(long *)((long)param_1 + uVar24) == 0) {
        uVar18 = param_1[1];
        if ((uVar18 & 1) != 0) {
          uVar18 = *(ulong *)(uVar18 & 0xfffffffffffffffe);
        }
        uVar34 = FUN_00701320(puVar31[4],uVar18);
        *(undefined8 *)((long)param_1 + uVar24) = uVar34;
      }
      if ((uVar5 & 0x1c0) == 0x40) {
        iVar17 = (int)param_3[0xb] + -1;
        *(int *)(param_3 + 0xb) = iVar17;
        if (-1 < iVar17) {
          *(int *)((long)param_3 + 0x5c) = *(int *)((long)param_3 + 0x5c) + 1;
          puVar15 = (ulong *)FUN_006fe0e8(*(undefined8 *)((long)param_1 + uVar24),puVar15,param_3,
                                          puVar31);
          uVar34 = DAT_001f5550;
          uVar28 = *(uint *)(param_3 + 10);
          *(undefined4 *)(param_3 + 10) = 0;
          if (uVar28 != uVar12) {
            puVar15 = (ulong *)0x0;
          }
          param_3[0xb] = CONCAT44((int)((ulong)param_3[0xb] >> 0x20) + (int)((ulong)uVar34 >> 0x20),
                                  (int)param_3[0xb] + (int)uVar34);
          return puVar15;
        }
      }
      else {
        if ((char)*puVar15 < '\0') {
          auVar41 = FUN_006f6214(puVar15);
          lVar21 = auVar41._0_8_;
        }
        else {
          lVar21 = (long)puVar15 + 1;
          auVar41[8] = (char)*puVar15;
          auVar41._0_8_ = lVar21;
          auVar41._9_3_ = 0;
        }
        if (lVar21 != 0) {
          if (0 < (int)param_3[0xb]) {
            *(int *)(param_3 + 0xb) = (int)param_3[0xb] + -1;
            uVar12 = auVar41._8_4_ + (auVar41._0_4_ - (int)param_3[1]);
            iVar17 = *(int *)((long)param_3 + 0x1c);
            *(uint *)((long)param_3 + 0x1c) = uVar12;
            *param_3 = param_3[1] + (long)(int)(uVar12 & (int)uVar12 >> 0x1f);
            puVar15 = (ulong *)FUN_006fe0e8(*(undefined8 *)((long)param_1 + uVar24),auVar41._0_8_,
                                            param_3,puVar31);
            uVar12 = *(int *)((long)param_3 + 0x1c) + (iVar17 - uVar12);
            *(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1;
            *(uint *)((long)param_3 + 0x1c) = uVar12;
            if ((int)param_3[10] == 0) {
              *param_3 = param_3[1] + (long)(int)(uVar12 & (int)uVar12 >> 0x1f);
              return puVar15;
            }
          }
        }
      }
      return (ulong *)0x0;
    }
                    /* WARNING: Could not recover jumptable at 0x00702328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar15 = (ulong *)(**(code **)(param_5 + 0x18))(param_1,puVar15,param_3,uVar18,param_5,param_6)
    ;
    return puVar15;
  case 7:
    puVar29 = (uint *)((long)param_5 + uVar22);
    lVar21 = (long)param_5 + (ulong)(ushort)puVar29[2] * 8 + (ulong)*(uint *)(param_5 + 0xc);
    uVar20 = *(uint *)(lVar21 + 1);
    if (((uVar20 >> 0x18 & 1) == 0) || ((uVar12 & 7) != 2)) {
      puVar15 = (ulong *)switchD_006fe28c::caseD_0(param_1,puVar15,param_3,uVar18,param_5);
      return puVar15;
    }
    puVar31 = (ulong *)((long)param_1 + (ulong)*puVar29);
    puStack_68 = param_1;
    if ((uVar20 >> 0x19 & 1) == 0) {
      if ((*puVar31 & 1) != 0) {
        (**(code **)PTR_DAT_00d52588)(puVar31,1);
      }
      puVar31 = puVar31 + 1;
    }
    uVar19 = puVar29[1];
    if (uVar19 != 0xffffffff) {
      uVar24 = (ulong)(uVar19 >> 3) & 0x1ffffffc;
      *(uint *)((long)puStack_68 + uVar24) =
           *(uint *)((long)puStack_68 + uVar24) | 1 << (ulong)(uVar19 & 0x1f);
    }
    do {
      if (puVar31[3] == 0) {
        pvVar26 = operator_new((ulong)*(ushort *)((long)puVar31 + 0xc));
      }
      else {
        pvVar26 = (void *)FUN_006fdbf0(puVar31[3],*(ushort *)((long)puVar31 + 0xc) + 7 & 0x1fff8);
      }
      uVar5 = *(ushort *)((long)puVar31 + 0xc);
      puVar16 = (undefined8 *)((long)pvVar26 + 8);
      *puVar16 = 0;
      *(undefined8 *)((long)pvVar26 + ((ulong)uVar5 - 8)) = 0;
      if ((*(byte *)((long)puVar31 + 0xf) & 0xf) == 5) {
        uVar24 = puVar31[3];
        *puVar16 = 0;
        *(undefined8 *)((long)pvVar26 + 0x10) = 0;
        *(undefined8 *)((long)pvVar26 + 0x18) = 0;
        if ((puVar16 != (undefined8 *)0x0) && (uVar24 != 0)) {
          FUN_006fda80(uVar24,puVar16,FUN_00707a00);
        }
      }
      bVar8 = *(byte *)((long)puVar31 + 0xf) >> 4;
      if (4 < bVar8) {
        if (bVar8 == 6) {
          FUN_00707a24(*(undefined8 *)(*(long *)(lVar21 + 8) + 0x20),
                       (long)pvVar26 + (ulong)*(byte *)((long)puVar31 + 0xe),puVar31[3]);
        }
        else {
          uVar24 = puVar31[3];
          puVar16 = (undefined8 *)((long)pvVar26 + (ulong)*(byte *)((long)puVar31 + 0xe));
          *puVar16 = 0;
          puVar16[1] = 0;
          puVar16[2] = 0;
          if ((uVar24 != 0) && (puVar16 != (undefined8 *)0x0)) {
            FUN_006fda80(uVar24,puVar16,FUN_00707a00);
          }
        }
      }
      if ((char)*puVar15 < '\0') {
        auVar42 = FUN_006f6214(puVar15);
        lVar32 = auVar42._0_8_;
      }
      else {
        lVar32 = (long)puVar15 + 1;
        auVar42[8] = (char)*puVar15;
        auVar42._0_8_ = lVar32;
        auVar42._9_3_ = 0;
      }
      if (lVar32 == 0) {
LAB_00702868:
        if (puVar31[3] == 0) {
          FUN_00713d00(puVar31,pvVar26);
        }
        puVar15 = (ulong *)switchD_006fe28c::caseD_8(puStack_68);
        return puVar15;
      }
      if ((int)param_3[0xb] < 1) goto LAB_00702868;
      *(int *)(param_3 + 0xb) = (int)param_3[0xb] + -1;
      uVar19 = auVar42._8_4_ + (auVar42._0_4_ - (int)param_3[1]);
      iVar17 = *(int *)((long)param_3 + 0x1c);
      *(uint *)((long)param_3 + 0x1c) = uVar19;
      *param_3 = param_3[1] + (long)(int)(uVar19 & (int)uVar19 >> 0x1f);
      puVar14 = (ulong *)FUN_00700aec(pvVar26,auVar42._0_8_,param_3,lVar21,param_5,puVar29,puVar31);
      uVar19 = *(int *)((long)param_3 + 0x1c) + (iVar17 - uVar19);
      *(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1;
      *(uint *)((long)param_3 + 0x1c) = uVar19;
      if (((int)param_3[10] != 0) ||
         (*param_3 = param_3[1] + (long)(int)(uVar19 & (int)uVar19 >> 0x1f), puVar14 == (ulong *)0x0
         )) goto LAB_00702868;
      if ((uVar20 >> 0x1b & 1) == 0) {
LAB_007026a0:
        bVar8 = *(byte *)((long)puVar31 + 0xf) & 0xf;
        if (bVar8 < 2) {
          if ((*(byte *)((long)puVar31 + 0xf) & 0xf) == 0) {
            FUN_007072d8();
          }
          else {
            FUN_00707490();
          }
        }
        else if (bVar8 == 2) {
          FUN_00707640();
        }
        else {
          FUN_007077f0(puVar31,pvVar26);
        }
      }
      else {
        puVar27 = *(uint **)(lVar21 + 8);
        uVar19 = *(uint *)((long)pvVar26 + (ulong)*(byte *)((long)puVar31 + 0xe));
        uVar22 = (ulong)(*puVar27 >> 0x10);
        uVar18 = (long)(int)uVar19 - (long)(short)*puVar27;
        uVar24 = uVar18 - uVar22;
        if (uVar18 < uVar22) goto LAB_007026a0;
        uVar4 = puVar27[1];
        if ((ushort)uVar4 <= uVar24) {
          uVar24 = 0;
          do {
            if (uVar4 >> 0x10 <= uVar24) goto LAB_00702794;
            lVar11 = uVar24 + 2;
            lVar32 = 1;
            if ((int)puVar27[(ulong)(uVar4 >> 5 & 0x7ff) + lVar11] <= (int)uVar19) {
              lVar32 = 2;
            }
            uVar24 = lVar32 + uVar24 * 2;
          } while (puVar27[(ulong)(uVar4 >> 5 & 0x7ff) + lVar11] != uVar19);
          goto LAB_007026a0;
        }
        if ((puVar27[(uVar24 >> 5) + 2] >> (ulong)((uint)uVar24 & 0x1f) & 1) != 0)
        goto LAB_007026a0;
LAB_00702794:
        FUN_0070081c(puStack_68,param_5,puVar31,uVar25,pvVar26);
      }
      if ((ulong *)*param_3 <= puVar14) {
        uVar24 = (ulong)*param_5;
        if (uVar24 != 0) {
          *(uint *)((long)puStack_68 + uVar24) = *(uint *)((long)puStack_68 + uVar24) | uVar28;
        }
        return puVar14;
      }
      puVar15 = (ulong *)((long)puVar14 + 1);
      bVar8 = (byte)*puVar14;
      uVar19 = (uint)bVar8;
      if ((char)bVar8 < '\0') {
        bVar7 = *(byte *)puVar15;
        if ((char)bVar7 < '\0') {
          bVar10 = *(byte *)((long)puVar14 + 2);
          uVar19 = (uint)(((ulong)bVar8 << 0x39) >> 0x27) | (uint)(((ulong)bVar7 << 0x39) >> 0x20);
          if ((char)bVar10 < '\0') {
            bVar8 = *(byte *)((long)puVar14 + 3);
            uVar19 = uVar19 >> 7 | (uint)(((ulong)bVar10 << 0x39) >> 0x20);
            if ((char)bVar8 < '\0') {
              if ((long)*(char *)((long)puVar14 + 4) < 0) {
                uVar19 = 0;
                puVar15 = (ulong *)0x0;
              }
              else {
                uVar19 = (uVar19 >> 7 | (uint)(((ulong)bVar8 << 0x39) >> 0x20)) >> 4 |
                         (uint)((long)*(char *)((long)puVar14 + 4) << 0x1c);
                puVar15 = (ulong *)((long)puVar14 + 5);
              }
            }
            else {
              uVar19 = uVar19 >> 0xb | (uint)bVar8 << 0x15;
              puVar15 = (ulong *)((long)puVar14 + 4);
            }
          }
          else {
            uVar19 = uVar19 >> 0x12 | (uint)bVar10 << 0xe;
            puVar15 = (ulong *)((long)puVar14 + 3);
          }
        }
        else {
          uVar19 = bVar8 & 0x7f | (uint)bVar7 << 7;
          puVar15 = (ulong *)((long)puVar14 + 2);
        }
      }
      if (uVar19 != uVar12) {
        uVar24 = (ulong)(ushort)*puVar14 & (ulong)(byte)param_5[4];
                    /* WARNING: Could not recover jumptable at 0x007028fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar15 = (ulong *)(**(code **)(param_5 + uVar24 + 0x1c))
                                     (puStack_68,puVar14,param_3,
                                      *(ulong *)(param_5 + uVar24 + 0x20) ^ (ulong)(ushort)*puVar14,
                                      param_5,param_6);
        return puVar15;
      }
    } while( true );
  case 8:
    uVar24 = (ulong)*param_5;
    if (uVar24 != 0) {
      *(uint *)((long)param_1 + uVar24) = *(uint *)((long)param_1 + uVar24) | uVar28;
    }
    return (ulong *)0x0;
  case 9:
    puVar29 = (uint *)((long)param_5 + uVar22);
    uVar6 = *(ushort *)((long)puVar29 + 10);
    uVar5 = uVar6 & 0x30;
    if (uVar5 == 0x20) {
      puVar15 = (ulong *)FUN_007088cc(param_1,puVar15,param_3,uVar18,param_5,param_6);
      return puVar15;
    }
    if ((uVar24 & 7) != 0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(param_5 + 0x18);
      puVar31 = puVar15;
      goto LAB_00702a3c;
    }
    uVar24 = *puVar15;
    if (((uint)uVar24 >> 7 & 1) == 0) {
      puStack_68 = (ulong *)(uVar24 & 0x7f);
      puVar31 = (ulong *)((long)puVar15 + 1);
    }
    else if (((uint)uVar24 >> 0xf & 1) == 0) {
      puVar31 = (ulong *)((long)puVar15 + 2);
      puStack_68 = (ulong *)(uVar24 & 0x7f | (uVar24 >> 8 & 0x7f) << 7);
    }
    else {
      puVar31 = (ulong *)FUN_00705258(puVar15,&puStack_68);
    }
    if (puVar31 == (ulong *)0x0) {
      puVar15 = (ulong *)switchD_006fe28c::caseD_8(param_1);
      return puVar15;
    }
    uVar2 = uVar6 & 0x1c0;
    uVar3 = uVar6 & 0x600;
    puVar14 = puStack_68;
    if (uVar2 == 0xc0) {
      if (uVar3 == 0x200) {
        puVar14 = (ulong *)(-((ulong)puStack_68 & 1) ^ (ulong)puStack_68 >> 1);
      }
    }
    else if (uVar2 == 0x80) {
      uVar20 = (uint)puStack_68;
      if ((uVar6 >> 10 & 1) == 0) {
        if (uVar3 == 0x200) {
          puVar14 = (ulong *)(long)(int)(-(uVar20 & 1) ^ uVar20 >> 1);
        }
      }
      else {
        uVar34 = *(undefined8 *)
                  ((long)param_5 + (ulong)(ushort)puVar29[2] * 8 + (ulong)*(uint *)(param_5 + 0xc));
        if (uVar3 == 0x600) {
          if (((int)uVar20 < (int)uVar34) || ((int)((ulong)uVar34 >> 0x20) < (int)uVar20)) {
LAB_00702c90:
            puVar15 = (ulong *)FUN_006ff8bc(param_1,puVar15,param_3,uVar18,param_5,param_6);
            return puVar15;
          }
        }
        else {
          uVar24 = FUN_0071211c((ulong)puStack_68 & 0xffffffff);
          if ((uVar24 & 1) == 0) goto LAB_00702c90;
        }
      }
    }
    if (uVar5 == 0x30) {
      FUN_00700334(param_5,0,puVar29,uVar12 >> 3);
    }
    else if (uVar5 == 0x10) {
      uVar24 = (ulong)(puVar29[1] >> 3) & 0x1ffffffc;
      *(uint *)((long)param_1 + uVar24) =
           1 << (ulong)(puVar29[1] & 0x1f) | *(uint *)((long)param_1 + uVar24);
    }
    uVar24 = (ulong)*(uint *)((long)param_5 + (ulong)*(uint *)(param_5 + 0xc) + 8);
    pvVar30 = *(void **)(**(long **)(param_5 + 0x10) + uVar24);
    pvVar26 = *(void **)((long)param_1 + uVar24);
    if (pvVar26 == pvVar30) {
      uVar18 = param_1[1];
      uVar22 = (ulong)*(uint *)((long)param_5 + (ulong)*(uint *)(param_5 + 0xc) + 0x10);
      if ((uVar18 & 1) != 0) {
        uVar18 = *(ulong *)(uVar18 & 0xfffffffffffffffe);
      }
      if (uVar18 == 0) {
        pvVar26 = operator_new(uVar22);
      }
      else {
        pvVar26 = (void *)FUN_006fdbf0(uVar18,uVar22 + 7 & 0x1fffffff8);
      }
      *(void **)((long)param_1 + uVar24) = pvVar26;
      memcpy(pvVar26,pvVar30,uVar22);
      pvVar26 = *(void **)((long)param_1 + uVar24);
      if ((uVar6 & 0x1c0) != 0xc0) goto LAB_00702be0;
LAB_00702b80:
      *(ulong **)((long)pvVar26 + (ulong)*puVar29) = puVar14;
    }
    else {
      if (uVar2 == 0xc0) goto LAB_00702b80;
LAB_00702be0:
      if ((uVar6 & 0x1c0) == 0x80) {
        *(int *)((long)pvVar26 + (ulong)*puVar29) = (int)puVar14;
      }
      else {
        *(bool *)((long)pvVar26 + (ulong)*puVar29) = puVar14 != (ulong *)0x0;
      }
    }
    if ((ulong *)*param_3 <= puVar31) {
      uVar24 = (ulong)*param_5;
      if (uVar24 != 0) {
        *(uint *)((long)param_1 + uVar24) = *(uint *)((long)param_1 + uVar24) | uVar28;
      }
      return puVar31;
    }
    uVar24 = (ulong)(ushort)*puVar31 & (ulong)(byte)param_5[4];
    UNRECOVERED_JUMPTABLE_00 = *(code **)(param_5 + uVar24 + 0x1c);
    uVar18 = *(ulong *)(param_5 + uVar24 + 0x20) ^ (ulong)(ushort)*puVar31;
LAB_00702a3c:
                    /* WARNING: Could not recover jumptable at 0x00702a64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar15 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)(param_1,puVar31,param_3,uVar18,param_5,param_6);
    return puVar15;
  case 10:
    if ((uVar24 & 7) != 2) {
      puVar15 = (ulong *)FUN_007088cc();
      return puVar15;
    }
    uVar12 = *(uint *)((long)param_5 + uVar22 + 4);
    uVar5 = *(ushort *)((long)param_5 + uVar22 + 10);
    if (uVar12 != 0xffffffff) {
      uVar24 = (ulong)(uVar12 >> 3) & 0x1ffffffc;
      *(uint *)((long)param_1 + uVar24) =
           *(uint *)((long)param_1 + uVar24) | 1 << (ulong)(uVar12 & 0x1f);
    }
    uVar24 = (ulong)*param_5;
    if (uVar24 != 0) {
      *(uint *)((long)param_1 + uVar24) = *(uint *)((long)param_1 + uVar24) | uVar28;
    }
    uVar5 = uVar5 >> 6 & 7;
    if (uVar5 != 0) {
      if (uVar5 == 2) {
        puVar15 = (ulong *)FUN_0070955c();
        return puVar15;
      }
      puVar15 = (ulong *)FUN_007093b4();
      return puVar15;
    }
    puVar15 = (ulong *)FUN_00709704();
    return puVar15;
  case 0xb:
    puVar29 = (uint *)((long)param_5 + uVar22);
    uVar5 = *(ushort *)((long)puVar29 + 10) & 0x30;
    if (uVar5 == 0x20) {
      puVar15 = (ulong *)FUN_0070aa58(param_1,puVar15,param_3,uVar18,param_5,param_6);
      return puVar15;
    }
    uVar6 = *(ushort *)((long)puVar29 + 10) & 0x1c0;
    if (uVar6 == 0xc0) {
      if ((uVar12 & 7) == 1) {
LAB_00702e54:
        if (uVar5 == 0x30) {
          FUN_00700334(param_5,0,puVar29,uVar12 >> 3,param_5,param_1);
        }
        else if (uVar5 == 0x10) {
          uVar24 = (ulong)(puVar29[1] >> 3) & 0x1ffffffc;
          *(uint *)((long)param_1 + uVar24) =
               1 << (ulong)(puVar29[1] & 0x1f) | *(uint *)((long)param_1 + uVar24);
        }
        uVar24 = (ulong)*(uint *)((long)param_5 + (ulong)*(uint *)(param_5 + 0xc) + 8);
        pvVar30 = *(void **)(**(long **)(param_5 + 0x10) + uVar24);
        pvVar26 = *(void **)((long)param_1 + uVar24);
        if (pvVar26 == pvVar30) {
          uVar18 = param_1[1];
          uVar22 = (ulong)*(uint *)((long)param_5 + (ulong)*(uint *)(param_5 + 0xc) + 0x10);
          if ((uVar18 & 1) == 0) {
            if (uVar18 != 0) goto LAB_00702ed4;
LAB_00702ef0:
            pvVar26 = operator_new(uVar22);
          }
          else {
            uVar18 = *(ulong *)(uVar18 & 0xfffffffffffffffe);
            if (uVar18 == 0) goto LAB_00702ef0;
LAB_00702ed4:
            pvVar26 = (void *)FUN_006fdbf0(uVar18,uVar22 + 7 & 0x1fffffff8);
          }
          *(void **)((long)param_1 + uVar24) = pvVar26;
          memcpy(pvVar26,pvVar30,uVar22);
          pvVar26 = *(void **)((long)param_1 + uVar24);
        }
        if (uVar6 == 0xc0) {
          *(ulong *)((long)pvVar26 + (ulong)*puVar29) = *puVar15;
          lVar21 = 8;
        }
        else {
          *(int *)((long)pvVar26 + (ulong)*puVar29) = (int)*puVar15;
          lVar21 = 4;
        }
        puVar15 = (ulong *)((long)puVar15 + lVar21);
        if ((ulong *)*param_3 <= puVar15) {
          uVar24 = (ulong)*param_5;
          if (uVar24 != 0) {
            *(uint *)((long)param_1 + uVar24) = *(uint *)((long)param_1 + uVar24) | uVar28;
          }
          return puVar15;
        }
        uVar24 = (ulong)(ushort)*puVar15 & (ulong)(byte)param_5[4];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(param_5 + uVar24 + 0x1c);
        uVar18 = *(ulong *)(param_5 + uVar24 + 0x20) ^ (ulong)(ushort)*puVar15;
        goto LAB_00702f64;
      }
    }
    else if ((uVar12 & 7) == 5) goto LAB_00702e54;
    UNRECOVERED_JUMPTABLE_00 = *(code **)(param_5 + 0x18);
LAB_00702f64:
                    /* WARNING: Could not recover jumptable at 0x00702f8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar15 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)(param_1,puVar15,param_3,uVar18,param_5,param_6);
    return puVar15;
  case 0xc:
    if ((uVar24 & 7) != 2) {
      puVar15 = (ulong *)FUN_0070aa58(param_1,puVar15,param_3,uVar18,param_5,param_6);
      return puVar15;
    }
    puVar29 = (uint *)((long)param_5 + uVar22);
    uVar12 = puVar29[1];
    uVar5 = *(ushort *)((long)puVar29 + 10);
    if (uVar12 != 0xffffffff) {
      uVar24 = (ulong)(uVar12 >> 3) & 0x1ffffffc;
      *(uint *)((long)param_1 + uVar24) =
           *(uint *)((long)param_1 + uVar24) | 1 << (ulong)(uVar12 & 0x1f);
    }
    uVar24 = (ulong)*(uint *)((long)param_5 + (ulong)*(uint *)(param_5 + 0xc) + 8);
    pvVar26 = *(void **)(**(long **)(param_5 + 0x10) + uVar24);
    pvVar30 = *(void **)((long)param_1 + uVar24);
    if (pvVar30 == pvVar26) {
      uVar18 = param_1[1];
      uVar22 = (ulong)*(uint *)((long)param_5 + (ulong)*(uint *)(param_5 + 0xc) + 0x10);
      if ((uVar18 & 1) == 0) {
        if (uVar18 != 0) goto LAB_00703074;
LAB_007030c8:
        puStack_68 = param_6;
        pvVar30 = operator_new(uVar22);
      }
      else {
        uVar18 = *(ulong *)(uVar18 & 0xfffffffffffffffe);
        if (uVar18 == 0) goto LAB_007030c8;
LAB_00703074:
        puStack_68 = param_6;
        pvVar30 = (void *)FUN_006fdbf0(uVar18,uVar22 + 7 & 0x1fffffff8);
      }
      *(void **)((long)param_1 + uVar24) = pvVar30;
      memcpy(pvVar30,pvVar26,uVar22);
      pvVar30 = *(void **)((long)param_1 + uVar24);
      param_6 = puStack_68;
    }
    cVar9 = (char)*puVar15;
    if (cVar9 < '\0') {
      auVar38 = FUN_006f6214(puVar15,cVar9);
    }
    else {
      auVar38[8] = cVar9;
      auVar38._0_8_ = (long)puVar15 + 1;
      auVar38._9_7_ = 0;
    }
    uVar24 = (ulong)*puVar29;
    if ((uVar5 & 0x1c0) != 0xc0) {
      if (*(undefined **)((long)pvVar30 + uVar24) == &DAT_00208740) {
        uVar18 = param_1[1];
        if ((uVar18 & 1) == 0) {
          if (uVar18 != 0) goto LAB_00703194;
LAB_007032bc:
          puVar15 = (ulong *)operator_new(0x10);
          *puVar15 = 0;
        }
        else {
          uVar18 = *(ulong *)(uVar18 & 0xfffffffffffffffe);
          if (uVar18 == 0) goto LAB_007032bc;
LAB_00703194:
          puVar15 = (ulong *)FUN_006fdbf0(uVar18,0x10);
          *puVar15 = uVar18;
        }
        *(ulong **)((long)pvVar30 + uVar24) = puVar15;
      }
      puVar15 = (ulong *)FUN_006f9728(param_3,auVar38._0_8_,auVar38._8_8_ & 0xffffffff);
      goto LAB_007031c0;
    }
    if (*(undefined **)((long)pvVar30 + uVar24) == &DAT_00208740) {
      uVar18 = param_1[1];
      if ((uVar18 & 1) == 0) {
        if (uVar18 != 0) goto LAB_00703144;
LAB_0070329c:
        puVar15 = (ulong *)operator_new(0x10);
        *puVar15 = 0;
      }
      else {
        uVar18 = *(ulong *)(uVar18 & 0xfffffffffffffffe);
        if (uVar18 == 0) goto LAB_0070329c;
LAB_00703144:
        puVar15 = (ulong *)FUN_006fdbf0(uVar18,0x10);
        *puVar15 = uVar18;
      }
      *(ulong **)((long)pvVar30 + uVar24) = puVar15;
    }
    puVar15 = (ulong *)FUN_006f9cf4(param_3,auVar38._0_8_,auVar38._8_8_ & 0xffffffff);
LAB_007031c0:
    if (puVar15 == (ulong *)0x0) {
      puVar15 = (ulong *)switchD_006fe28c::caseD_8(param_1);
      return puVar15;
    }
    if (puVar15 < (ulong *)*param_3) {
      uVar24 = (ulong)(ushort)*puVar15 & (ulong)(byte)param_5[4];
                    /* WARNING: Could not recover jumptable at 0x00703220. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar15 = (ulong *)(**(code **)(param_5 + uVar24 + 0x1c))
                                   (param_1,puVar15,param_3,
                                    *(ulong *)(param_5 + uVar24 + 0x20) ^ (ulong)(ushort)*puVar15,
                                    param_5,param_6);
      return puVar15;
    }
    uVar24 = (ulong)*param_5;
    if (uVar24 != 0) {
      *(uint *)((long)param_1 + uVar24) = *(uint *)((long)param_1 + uVar24) | (uint)param_6;
    }
    return puVar15;
  case 0xe:
    puVar29 = (uint *)((long)param_5 + uVar22);
    uVar6 = *(ushort *)((long)puVar29 + 10);
    uVar5 = uVar6 & 0x30;
    if (uVar5 == 0x20) {
      if ((uVar6 & 0x1c0) == 0x40) {
        puVar15 = (ulong *)FUN_0070b788(param_1,puVar15,param_3,uVar18,param_5,param_6);
        return puVar15;
      }
      if ((uVar6 & 0x1c0) == 0) {
        puVar15 = (ulong *)FUN_0070b3c4(param_1,puVar15,param_3,uVar18,param_5,param_6);
        return puVar15;
      }
LAB_007038f8:
                    /* WARNING: Could not recover jumptable at 0x00703934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar15 = (ulong *)(**(code **)(param_5 + 0x18))
                                   (param_1,puVar15,param_3,uVar18,param_5,param_6);
      return puVar15;
    }
    if ((uVar6 & 0x1c0) == 0x40) {
      if ((uVar12 & 7) != 3) goto LAB_007038f8;
    }
    else if (((uVar6 & 0x1c0) != 0) || ((uVar12 & 7) != 2)) goto LAB_007038f8;
    puVar31 = *(ulong **)
               ((long)param_5 + (ulong)(ushort)puVar29[2] * 8 + (ulong)*(uint *)(param_5 + 0xc));
    if ((uVar6 & 0x600) != 0x400) {
      if ((uVar6 & 0x600) != 0x200) {
        puVar31 = (ulong *)*puVar31;
      }
      puStack_68 = puVar31;
      lVar21 = (**(code **)(*puVar31 + 0x20))(puVar31);
      puVar31 = *(ulong **)(lVar21 + 8);
      if (puVar31 == (ulong *)0x0) {
        puVar31 = (ulong *)(**(code **)(*(long *)(lVar21 + 0x58) + 0x10))(puStack_68);
      }
    }
    if (uVar5 == 0x30) {
      FUN_00700334(param_5,puVar31,puVar29,uVar12 >> 3);
      uVar5 = *param_5;
    }
    else {
      if (uVar5 == 0x10) {
        uVar24 = (ulong)(puVar29[1] >> 3) & 0x1ffffffc;
        *(uint *)((long)param_1 + uVar24) =
             1 << (ulong)(puVar29[1] & 0x1f) | *(uint *)((long)param_1 + uVar24);
      }
      uVar5 = *param_5;
    }
    uVar24 = (ulong)uVar5;
    if (uVar24 != 0) {
      *(uint *)((long)param_1 + uVar24) = *(uint *)((long)param_1 + uVar24) | uVar28;
    }
    uVar24 = (ulong)*(uint *)((long)param_5 + (ulong)*(uint *)(param_5 + 0xc) + 8);
    pvVar26 = *(void **)(**(long **)(param_5 + 0x10) + uVar24);
    pvVar30 = *(void **)((long)param_1 + uVar24);
    if (pvVar30 != pvVar26) goto LAB_007039d0;
    uVar18 = param_1[1];
    uVar22 = (ulong)*(uint *)((long)param_5 + (ulong)*(uint *)(param_5 + 0xc) + 0x10);
    if ((uVar18 & 1) == 0) {
      if (uVar18 != 0) goto LAB_007038a4;
LAB_007039b4:
      pvVar30 = operator_new(uVar22);
    }
    else {
      uVar18 = *(ulong *)(uVar18 & 0xfffffffffffffffe);
      if (uVar18 == 0) goto LAB_007039b4;
LAB_007038a4:
      pvVar30 = (void *)FUN_006fdbf0(uVar18,uVar22 + 7 & 0x1fffffff8);
    }
    *(void **)((long)param_1 + uVar24) = pvVar30;
    memcpy(pvVar30,pvVar26,uVar22);
    pvVar30 = *(void **)((long)param_1 + uVar24);
LAB_007039d0:
    uVar24 = (ulong)*puVar29;
    if (*(long *)((long)pvVar30 + uVar24) == 0) {
      uVar18 = param_1[1];
      if ((uVar18 & 1) != 0) {
        uVar18 = *(ulong *)(uVar18 & 0xfffffffffffffffe);
      }
      uVar34 = FUN_00701320(puVar31[4],uVar18);
      *(undefined8 *)((long)pvVar30 + uVar24) = uVar34;
    }
    if ((uVar6 & 0x1c0) == 0x40) {
      iVar17 = (int)param_3[0xb] + -1;
      *(int *)(param_3 + 0xb) = iVar17;
      if (-1 < iVar17) {
        *(int *)((long)param_3 + 0x5c) = *(int *)((long)param_3 + 0x5c) + 1;
        puVar15 = (ulong *)FUN_006fe0e8(*(undefined8 *)((long)pvVar30 + uVar24),puVar15,param_3,
                                        puVar31);
        uVar34 = DAT_001f5550;
        uVar28 = *(uint *)(param_3 + 10);
        *(undefined4 *)(param_3 + 10) = 0;
        if (uVar28 != uVar12) {
          puVar15 = (ulong *)0x0;
        }
        param_3[0xb] = CONCAT44((int)((ulong)param_3[0xb] >> 0x20) + (int)((ulong)uVar34 >> 0x20),
                                (int)param_3[0xb] + (int)uVar34);
        return puVar15;
      }
    }
    else {
      if ((char)*puVar15 < '\0') {
        auVar43 = FUN_006f6214(puVar15);
        lVar21 = auVar43._0_8_;
      }
      else {
        lVar21 = (long)puVar15 + 1;
        auVar43[8] = (char)*puVar15;
        auVar43._0_8_ = lVar21;
        auVar43._9_3_ = 0;
      }
      if (lVar21 != 0) {
        if (0 < (int)param_3[0xb]) {
          *(int *)(param_3 + 0xb) = (int)param_3[0xb] + -1;
          uVar12 = auVar43._8_4_ + (auVar43._0_4_ - (int)param_3[1]);
          iVar17 = *(int *)((long)param_3 + 0x1c);
          *(uint *)((long)param_3 + 0x1c) = uVar12;
          *param_3 = param_3[1] + (long)(int)(uVar12 & (int)uVar12 >> 0x1f);
          puVar15 = (ulong *)FUN_006fe0e8(*(undefined8 *)((long)pvVar30 + uVar24),auVar43._0_8_,
                                          param_3,puVar31);
          uVar12 = *(int *)((long)param_3 + 0x1c) + (iVar17 - uVar12);
          *(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1;
          *(uint *)((long)param_3 + 0x1c) = uVar12;
          if ((int)param_3[10] == 0) {
            *param_3 = param_3[1] + (long)(int)(uVar12 & (int)uVar12 >> 0x1f);
            return puVar15;
          }
        }
      }
    }
    return (ulong *)0x0;
  case 0xf:
    uVar20 = *(uint *)(param_5 + 0xc);
    lVar21 = (long)param_5 + (ulong)*(ushort *)((long)param_5 + uVar22 + 8) * 8 + (ulong)uVar20;
    uVar19 = *(uint *)(lVar21 + 1);
    if (((uVar19 >> 0x18 & 1) == 0) || ((uVar12 & 7) != 2)) {
      puStack_68 = param_1;
      puVar15 = (ulong *)switchD_006fe28c::caseD_0(param_1,puVar15,param_3,uVar18,param_5);
      return puVar15;
    }
    uVar24 = (ulong)*(uint *)((long)param_5 + (ulong)uVar20 + 8);
    pvVar30 = *(void **)(**(long **)(param_5 + 0x10) + uVar24);
    pvVar26 = *(void **)((long)param_1 + uVar24);
    puStack_68 = param_1;
    if (pvVar26 != pvVar30) goto LAB_00703c54;
    uVar18 = param_1[1];
    __n = (ulong)*(uint *)((long)param_5 + (ulong)uVar20 + 0x10);
    if ((uVar18 & 1) == 0) {
      if (uVar18 != 0) goto LAB_00703bd4;
LAB_00703c2c:
      pvVar26 = operator_new(__n);
    }
    else {
      uVar18 = *(ulong *)(uVar18 & 0xfffffffffffffffe);
      if (uVar18 == 0) goto LAB_00703c2c;
LAB_00703bd4:
      pvVar26 = (void *)FUN_006fdbf0(uVar18,__n + 7 & 0x1fffffff8);
    }
    puVar31 = puStack_68;
    *(void **)((long)puStack_68 + uVar24) = pvVar26;
    memcpy(pvVar26,pvVar30,__n);
    pvVar26 = *(void **)((long)puVar31 + uVar24);
LAB_00703c54:
    puVar29 = (uint *)((long)param_5 + uVar22);
    puVar31 = (ulong *)((long)pvVar26 + (ulong)*puVar29);
    if ((uVar19 >> 0x19 & 1) == 0) {
      if ((*puVar31 & 1) != 0) {
        (**(code **)PTR_DAT_00d52588)(puVar31,1);
      }
      puVar31 = puVar31 + 1;
    }
    uVar20 = puVar29[1];
    if (uVar20 != 0xffffffff) {
      uVar24 = (ulong)(uVar20 >> 3) & 0x1ffffffc;
      *(uint *)((long)puStack_68 + uVar24) =
           *(uint *)((long)puStack_68 + uVar24) | 1 << (ulong)(uVar20 & 0x1f);
    }
    do {
      if (puVar31[3] == 0) {
        pvVar26 = operator_new((ulong)*(ushort *)((long)puVar31 + 0xc));
      }
      else {
        pvVar26 = (void *)FUN_006fdbf0(puVar31[3],*(ushort *)((long)puVar31 + 0xc) + 7 & 0x1fff8);
      }
      uVar5 = *(ushort *)((long)puVar31 + 0xc);
      puVar16 = (undefined8 *)((long)pvVar26 + 8);
      *puVar16 = 0;
      *(undefined8 *)((long)pvVar26 + ((ulong)uVar5 - 8)) = 0;
      if ((*(byte *)((long)puVar31 + 0xf) & 0xf) == 5) {
        uVar24 = puVar31[3];
        *puVar16 = 0;
        *(undefined8 *)((long)pvVar26 + 0x10) = 0;
        *(undefined8 *)((long)pvVar26 + 0x18) = 0;
        if ((puVar16 != (undefined8 *)0x0) && (uVar24 != 0)) {
          FUN_006fda80(uVar24,puVar16,FUN_00707a00);
        }
      }
      bVar8 = *(byte *)((long)puVar31 + 0xf) >> 4;
      if (4 < bVar8) {
        if (bVar8 == 6) {
          FUN_00707a24(*(undefined8 *)(*(long *)(lVar21 + 8) + 0x20),
                       (long)pvVar26 + (ulong)*(byte *)((long)puVar31 + 0xe),puVar31[3]);
        }
        else {
          uVar24 = puVar31[3];
          puVar16 = (undefined8 *)((long)pvVar26 + (ulong)*(byte *)((long)puVar31 + 0xe));
          *puVar16 = 0;
          puVar16[1] = 0;
          puVar16[2] = 0;
          if ((uVar24 != 0) && (puVar16 != (undefined8 *)0x0)) {
            FUN_006fda80(uVar24,puVar16,FUN_00707a00);
          }
        }
      }
      if ((char)*puVar15 < '\0') {
        auVar44 = FUN_006f6214(puVar15);
        lVar32 = auVar44._0_8_;
      }
      else {
        lVar32 = (long)puVar15 + 1;
        auVar44[8] = (char)*puVar15;
        auVar44._0_8_ = lVar32;
        auVar44._9_3_ = 0;
      }
      if (lVar32 == 0) {
LAB_00703fc0:
        if (puVar31[3] == 0) {
          FUN_00713d00(puVar31,pvVar26);
        }
        puVar15 = (ulong *)switchD_006fe28c::caseD_8(puStack_68);
        return puVar15;
      }
      if ((int)param_3[0xb] < 1) goto LAB_00703fc0;
      *(int *)(param_3 + 0xb) = (int)param_3[0xb] + -1;
      uVar20 = auVar44._8_4_ + (auVar44._0_4_ - (int)param_3[1]);
      iVar17 = *(int *)((long)param_3 + 0x1c);
      *(uint *)((long)param_3 + 0x1c) = uVar20;
      *param_3 = param_3[1] + (long)(int)(uVar20 & (int)uVar20 >> 0x1f);
      puVar14 = (ulong *)FUN_00700aec(pvVar26,auVar44._0_8_,param_3,lVar21,param_5,puVar29,puVar31);
      uVar20 = *(int *)((long)param_3 + 0x1c) + (iVar17 - uVar20);
      *(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1;
      *(uint *)((long)param_3 + 0x1c) = uVar20;
      if (((int)param_3[10] != 0) ||
         (*param_3 = param_3[1] + (long)(int)(uVar20 & (int)uVar20 >> 0x1f), puVar14 == (ulong *)0x0
         )) goto LAB_00703fc0;
      if ((uVar19 >> 0x1b & 1) == 0) {
LAB_00703df8:
        bVar8 = *(byte *)((long)puVar31 + 0xf) & 0xf;
        if (bVar8 < 2) {
          if ((*(byte *)((long)puVar31 + 0xf) & 0xf) == 0) {
            FUN_007072d8();
          }
          else {
            FUN_00707490();
          }
        }
        else if (bVar8 == 2) {
          FUN_00707640();
        }
        else {
          FUN_007077f0(puVar31,pvVar26);
        }
      }
      else {
        puVar27 = *(uint **)(lVar21 + 8);
        uVar20 = *(uint *)((long)pvVar26 + (ulong)*(byte *)((long)puVar31 + 0xe));
        uVar22 = (ulong)(*puVar27 >> 0x10);
        uVar18 = (long)(int)uVar20 - (long)(short)*puVar27;
        uVar24 = uVar18 - uVar22;
        if (uVar18 < uVar22) goto LAB_00703df8;
        uVar4 = puVar27[1];
        if ((ushort)uVar4 <= uVar24) {
          uVar24 = 0;
          do {
            if (uVar4 >> 0x10 <= uVar24) goto LAB_00703eec;
            lVar11 = uVar24 + 2;
            lVar32 = 1;
            if ((int)puVar27[(ulong)(uVar4 >> 5 & 0x7ff) + lVar11] <= (int)uVar20) {
              lVar32 = 2;
            }
            uVar24 = lVar32 + uVar24 * 2;
          } while (puVar27[(ulong)(uVar4 >> 5 & 0x7ff) + lVar11] != uVar20);
          goto LAB_00703df8;
        }
        if ((puVar27[(uVar24 >> 5) + 2] >> (ulong)((uint)uVar24 & 0x1f) & 1) != 0)
        goto LAB_00703df8;
LAB_00703eec:
        FUN_0070081c(puStack_68,param_5,puVar31,uVar25,pvVar26);
      }
      if ((ulong *)*param_3 <= puVar14) {
        uVar24 = (ulong)*param_5;
        if (uVar24 != 0) {
          *(uint *)((long)puStack_68 + uVar24) = *(uint *)((long)puStack_68 + uVar24) | uVar28;
        }
        return puVar14;
      }
      puVar15 = (ulong *)((long)puVar14 + 1);
      bVar8 = (byte)*puVar14;
      uVar20 = (uint)bVar8;
      if ((char)bVar8 < '\0') {
        bVar7 = *(byte *)puVar15;
        if ((char)bVar7 < '\0') {
          bVar10 = *(byte *)((long)puVar14 + 2);
          uVar20 = (uint)(((ulong)bVar8 << 0x39) >> 0x27) | (uint)(((ulong)bVar7 << 0x39) >> 0x20);
          if ((char)bVar10 < '\0') {
            bVar8 = *(byte *)((long)puVar14 + 3);
            uVar20 = uVar20 >> 7 | (uint)(((ulong)bVar10 << 0x39) >> 0x20);
            if ((char)bVar8 < '\0') {
              if ((long)*(char *)((long)puVar14 + 4) < 0) {
                uVar20 = 0;
                puVar15 = (ulong *)0x0;
              }
              else {
                uVar20 = (uVar20 >> 7 | (uint)(((ulong)bVar8 << 0x39) >> 0x20)) >> 4 |
                         (uint)((long)*(char *)((long)puVar14 + 4) << 0x1c);
                puVar15 = (ulong *)((long)puVar14 + 5);
              }
            }
            else {
              uVar20 = uVar20 >> 0xb | (uint)bVar8 << 0x15;
              puVar15 = (ulong *)((long)puVar14 + 4);
            }
          }
          else {
            uVar20 = uVar20 >> 0x12 | (uint)bVar10 << 0xe;
            puVar15 = (ulong *)((long)puVar14 + 3);
          }
        }
        else {
          uVar20 = bVar8 & 0x7f | (uint)bVar7 << 7;
          puVar15 = (ulong *)((long)puVar14 + 2);
        }
      }
      if (uVar20 != uVar12) {
        uVar24 = (ulong)(ushort)*puVar14 & (ulong)(byte)param_5[4];
                    /* WARNING: Could not recover jumptable at 0x00704054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar15 = (ulong *)(**(code **)(param_5 + uVar24 + 0x1c))
                                     (puStack_68,puVar14,param_3,
                                      *(ulong *)(param_5 + uVar24 + 0x20) ^ (ulong)(ushort)*puVar14,
                                      param_5,param_6);
        return puVar15;
      }
    } while( true );
  }
  if ((uVar12 & 7) != 2) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(param_5 + 0x18);
    goto LAB_0070336c;
  }
  puVar29 = (uint *)((long)param_5 + uVar22);
  uVar6 = *(ushort *)((long)puVar29 + 10);
  uVar5 = uVar6 & 0x30;
  if (uVar5 == 0x20) {
    puVar15 = (ulong *)FUN_0070aef8(param_1,puVar15,param_3,uVar18,param_5);
    return puVar15;
  }
  if (uVar5 == 0x10) {
    uVar24 = (ulong)(puVar29[1] >> 3) & 0x1ffffffc;
    *(uint *)((long)param_1 + uVar24) =
         1 << (ulong)(puVar29[1] & 0x1f) | *(uint *)((long)param_1 + uVar24);
    puStack_68 = param_6;
  }
  else {
    puStack_68 = param_6;
    if (uVar5 == 0x30) {
      FUN_00700334(param_5,0,puVar29,uVar12 >> 3,param_5,param_1);
    }
  }
  uVar24 = (ulong)*(uint *)((long)param_5 + (ulong)*(uint *)(param_5 + 0xc) + 8);
  pvVar26 = *(void **)(**(long **)(param_5 + 0x10) + uVar24);
  pvVar30 = *(void **)((long)param_1 + uVar24);
  if (pvVar30 == pvVar26) {
    uVar18 = param_1[1];
    uVar22 = (ulong)*(uint *)((long)param_5 + (ulong)*(uint *)(param_5 + 0xc) + 0x10);
    if ((uVar18 & 1) == 0) {
      if (uVar18 != 0) goto LAB_00703418;
LAB_00703434:
      pvVar30 = operator_new(uVar22);
    }
    else {
      uVar18 = *(ulong *)(uVar18 & 0xfffffffffffffffe);
      if (uVar18 == 0) goto LAB_00703434;
LAB_00703418:
      pvVar30 = (void *)FUN_006fdbf0(uVar18,uVar22 + 7 & 0x1fffffff8);
    }
    *(void **)((long)param_1 + uVar24) = pvVar30;
    memcpy(pvVar30,pvVar26,uVar22);
    pvVar30 = *(void **)((long)param_1 + uVar24);
  }
  uVar24 = (ulong)*puVar29;
  if ((uVar6 & 0x1c0) == 0x140) {
    uVar18 = param_1[1];
    if ((uVar18 & 1) != 0) {
      uVar18 = *(ulong *)(uVar18 & 0xfffffffffffffffe);
    }
    cVar9 = (char)*puVar15;
    puVar31 = (ulong *)((long)pvVar30 + uVar24);
    if (cVar9 < '\0') {
      auVar40 = FUN_006f6214(puVar15,cVar9);
      puVar15 = auVar40._0_8_;
      if (puVar15 != (ulong *)0x0) goto LAB_0070356c;
LAB_00703598:
      plVar13 = (long *)*puVar31;
      uVar12 = (uint)plVar13;
    }
    else {
      auVar40[8] = cVar9;
      auVar40._0_8_ = (long)puVar15 + 1U;
      auVar40._9_7_ = 0;
      if ((long)puVar15 + 1U == 0) {
        puVar15 = (ulong *)0x0;
        goto LAB_00703598;
      }
LAB_0070356c:
      lVar21 = auVar40._0_8_;
      iVar17 = auVar40._8_4_;
      if (((int)param_3[1] - auVar40._0_4_) + 0x10 < iVar17) {
        puVar15 = (ulong *)FUN_006f71b4(param_3,lVar21,auVar40._8_8_,puVar31,uVar18);
        goto LAB_00703598;
      }
      if (iVar17 < 0) {
LAB_00703744:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/string_view:331: libc++ Hardening assertion __len <= static_cast<size_type>(numeric_limits<difference_type>::max()) failed: string_view::string_view(_CharT *, size_t): length does not fit in difference_type\n"
                  );
      }
      FUN_006fc8b0(puVar31,lVar21,(long)iVar17,uVar18,7);
      puVar15 = (ulong *)(lVar21 + iVar17);
      plVar13 = (long *)*puVar31;
      uVar12 = (uint)plVar13;
    }
    if ((uVar12 >> 1 & 1) == 0) {
      if (((ulong)plVar13 & 1) == 0) {
        uVar24 = (ulong)plVar13 >> 2 & 0x3f;
        plVar23 = (long *)((long)puVar31 + 1);
      }
      else {
        plVar23 = *(long **)((long)plVar13 - 1);
        uVar24 = (ulong)*(uint *)((long)plVar13 + 7);
        if ((plVar23 == (long *)0x0) && (*(uint *)((long)plVar13 + 7) != 0)) goto LAB_00703730;
      }
    }
    else {
      uVar24 = (ulong)*(byte *)((long)plVar13 - 2);
      plVar23 = plVar13;
      if ((plVar13 == (long *)0x0) && (*(byte *)((long)plVar13 - 2) != 0)) {
LAB_00703730:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/string_view:333: libc++ Hardening assertion __len == 0 || __s != nullptr failed: string_view::string_view(_CharT *, size_t): received nullptr\n"
                  );
      }
    }
LAB_00703624:
    uVar24 = FUN_00700564(plVar23,uVar24,param_5,puVar29,uVar6 & 0x600);
  }
  else {
    if ((uVar6 & 0x1c0) != 0x80) {
      uVar18 = param_1[1];
      if ((uVar18 & 1) == 0) {
        if (uVar18 != 0) goto LAB_007034a8;
LAB_007036d4:
        uVar34 = FUN_007141a0((long)pvVar30 + uVar24,0);
        puVar15 = (ulong *)FUN_006f62b8(uVar34,puVar15,param_3);
      }
      else {
        if (*(long *)(uVar18 & 0xfffffffffffffffe) == 0) goto LAB_007036d4;
LAB_007034a8:
        puVar15 = (ulong *)FUN_00714270(param_3,puVar15,(long)pvVar30 + uVar24);
      }
      if (puVar15 == (ulong *)0x0) {
        FUN_00706c04(param_1,(long)pvVar30 + uVar24);
        goto LAB_00703700;
      }
      plVar13 = (long *)(*(ulong *)((long)pvVar30 + uVar24) & 0xfffffffffffffffc);
      uVar24 = (ulong)*(char *)((long)plVar13 + 0x17);
      plVar23 = plVar13;
      if ((long)uVar24 < 0) {
        plVar23 = (long *)*plVar13;
        uVar24 = plVar13[1];
      }
      goto LAB_00703624;
    }
    if (uVar5 == 0x30) {
      lVar21 = *(long *)((long)param_1 + uVar24);
    }
    else {
      lVar21 = (long)pvVar30 + uVar24;
    }
    cVar9 = (char)*puVar15;
    if (cVar9 < '\0') {
      auVar39 = FUN_006f6214(puVar15,cVar9);
      lVar32 = auVar39._0_8_;
    }
    else {
      lVar32 = (long)puVar15 + 1;
      auVar39[8] = cVar9;
      auVar39._0_8_ = lVar32;
      auVar39._9_7_ = 0;
    }
    if (lVar32 == 0) goto LAB_00703700;
    uVar24 = auVar39._8_8_;
    lVar32 = auVar39._0_8_;
    iVar17 = ((int)param_3[1] - auVar39._0_4_) + 0x10;
    if (0x1ff < iVar17) {
      iVar17 = 0x200;
    }
    uVar18 = FUN_006f548c(param_3,uVar24 & 0xffffffff,iVar17);
    if ((uVar18 & 1) == 0) {
      puVar15 = (ulong *)FUN_006f5798(param_3,lVar32,uVar24 & 0xffffffff,lVar21);
    }
    else {
      if (auVar39._8_4_ < 0) goto LAB_00703744;
      FUN_006f1330(lVar21,lVar32,uVar24 & 0xffffffff);
      puVar15 = (ulong *)(lVar32 + (uVar24 & 0xffffffff));
    }
    if (puVar15 == (ulong *)0x0) goto LAB_00703700;
    uVar24 = 1;
  }
  if (((uVar24 & 1) != 0) && (puVar15 != (ulong *)0x0)) {
    if ((ulong *)*param_3 <= puVar15) {
      uVar24 = (ulong)*param_5;
      if (uVar24 != 0) {
        *(uint *)((long)param_1 + uVar24) = *(uint *)((long)param_1 + uVar24) | (uint)puStack_68;
      }
      return puVar15;
    }
    uVar24 = (ulong)(ushort)*puVar15 & (ulong)(byte)param_5[4];
    UNRECOVERED_JUMPTABLE_00 = *(code **)(param_5 + uVar24 + 0x1c);
    uVar18 = *(ulong *)(param_5 + uVar24 + 0x20) ^ (ulong)(ushort)*puVar15;
    param_6 = puStack_68;
LAB_0070336c:
                    /* WARNING: Could not recover jumptable at 0x0070338c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar15 = (ulong *)(*UNRECOVERED_JUMPTABLE_00)(param_1,puVar15,param_3,uVar18,param_5,param_6);
    return puVar15;
  }
LAB_00703700:
  puVar15 = (ulong *)switchD_006fe28c::caseD_8(param_1);
  return puVar15;
}


// ===== 006fe3a4  switchD_006fe28c::caseD_0 =====

void switchD_006fe28c::caseD_0(void)

{
  long in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x006fe3ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x4 + 0x30))();
  return;
}


// ===== 006fe3b0  FUN_006fe3b0 =====

ulong FUN_006fe3b0(long param_1,ulong *param_2,undefined8 param_3)

{
  int iVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  int *piVar5;
  int iVar6;
  undefined8 uVar7;
  
  uVar4 = *param_2;
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  puVar2 = param_2;
  if (uVar4 == 0) {
    *(int *)(param_2 + 1) = 1;
    uVar4 = FUN_00701320(uVar7,param_3);
    *param_2 = uVar4;
  }
  else {
    Hint_Prefetch(uVar4,0,0,0);
    if ((uVar4 & 1) == 0) {
      if ((int)param_2[1] == 0) {
        *(int *)(param_2 + 1) = 1;
      }
      else {
        puVar2 = (ulong *)FUN_00711858(param_2,1,param_3);
        uVar4 = FUN_00701320(uVar7,param_3);
        *puVar2 = uVar4;
        *(undefined4 *)(*param_2 + 3) = 2;
        *(int *)(param_2 + 1) = 2;
      }
    }
    else {
      piVar5 = (int *)(uVar4 - 1);
      iVar1 = (int)param_2[1];
      if (iVar1 == *piVar5) {
        FUN_00711858(param_2,1,param_3);
        iVar6 = *(int *)(*param_2 + 3);
        piVar5 = (int *)(*param_2 - 1);
      }
      else {
        iVar6 = *(int *)(uVar4 + 3);
        if (0 < iVar6 - iVar1) {
          *(int *)(param_2 + 1) = iVar1 + 1;
          puVar2 = (ulong *)(piVar5 + (long)iVar1 * 2 + 2);
          goto LAB_006fe4c4;
        }
      }
      piVar5[1] = iVar6 + 1;
      uVar4 = param_2[1];
      *(int *)(param_2 + 1) = (int)uVar4 + 1;
      uVar3 = FUN_00701320(uVar7,param_3);
      puVar2 = (ulong *)(piVar5 + (long)(int)uVar4 * 2 + 2);
      *puVar2 = uVar3;
    }
  }
LAB_006fe4c4:
  return *puVar2;
}


// ===== 006fe4dc  FUN_006fe4dc =====

ushort * FUN_006fe4dc(long param_1,long param_2,long *param_3,ulong param_4,ushort *param_5,
                     uint param_6)

{
  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  ushort *puVar6;
  ulong uVar7;
  ulong uVar8;
  ushort *puVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [12];
  
  if ((param_4 & 0xff) != 0) {
    puVar9 = (ushort *)FUN_006fe204(param_1,param_2,param_3);
    return puVar9;
  }
  uVar8 = (ulong)*param_5;
  if (uVar8 != 0) {
    *(uint *)(param_1 + uVar8) =
         *(uint *)(param_1 + uVar8) | (uint)(1L << (param_4 >> 0x10 & 0x3f)) | param_6;
  }
  uVar8 = param_4 >> 0x30;
  lVar10 = *(long *)((long)param_5 + (param_4 >> 0x18 & 0xff) * 8 + (ulong)*(uint *)(param_5 + 0xc))
  ;
  if (*(long *)(param_1 + uVar8) == 0) {
    uVar7 = *(ulong *)(param_1 + 8);
    if ((uVar7 & 1) != 0) {
      uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
    }
    uVar5 = FUN_00701320(*(undefined8 *)(lVar10 + 0x20),uVar7);
    *(undefined8 *)(param_1 + uVar8) = uVar5;
  }
  if (*(char *)(param_2 + 1) < '\0') {
    auVar12 = FUN_006f6214();
    puVar9 = auVar12._0_8_;
  }
  else {
    puVar9 = (ushort *)(param_2 + 2);
    auVar12[8] = *(char *)(param_2 + 1);
    auVar12._0_8_ = puVar9;
    auVar12._9_3_ = 0;
  }
  if (puVar9 != (ushort *)0x0) {
    if (0 < (int)param_3[0xb]) {
      *(int *)(param_3 + 0xb) = (int)param_3[0xb] + -1;
      uVar1 = auVar12._8_4_ + (auVar12._0_4_ - (int)param_3[1]);
      iVar3 = *(int *)((long)param_3 + 0x1c);
      *(uint *)((long)param_3 + 0x1c) = uVar1;
      *param_3 = param_3[1] + (long)(int)(uVar1 & (int)uVar1 >> 0x1f);
      uVar5 = *(undefined8 *)(param_1 + uVar8);
      puVar9 = auVar12._0_8_;
LAB_006fe5c0:
      puVar6 = puVar9;
      if (puVar9 < (ushort *)*param_3) {
LAB_006fe5cc:
        puVar2 = (undefined8 *)(lVar10 + 0x38 + ((ulong)*puVar6 & (ulong)*(byte *)(lVar10 + 8)) * 2)
        ;
        puVar6 = (ushort *)
                 (*(code *)*puVar2)(uVar5,puVar6,param_3,puVar2[1] ^ (ulong)*puVar6,lVar10,0);
        if ((puVar6 == (ushort *)0x0) || (puVar9 = puVar6, (int)param_3[10] != 0))
        goto LAB_006fe684;
        goto LAB_006fe5c0;
      }
      iVar4 = (int)puVar9 - (int)param_3[1];
      if (*(int *)((long)param_3 + 0x1c) != iVar4) {
        auVar11 = FUN_006f5260(param_3,iVar4,*(undefined4 *)((long)param_3 + 0x5c));
        puVar6 = auVar11._0_8_;
        if ((auVar11 & (undefined1  [16])0x1) != (undefined1  [16])0x0) goto LAB_006fe684;
        goto LAB_006fe5cc;
      }
      if ((0 < iVar4) && (puVar6 = (ushort *)0x0, param_3[2] != 0)) {
        puVar6 = puVar9;
      }
LAB_006fe684:
      if ((*(byte *)(lVar10 + 9) & 1) != 0) {
        puVar6 = (ushort *)(**(code **)(lVar10 + 0x28))(uVar5,puVar6,param_3);
      }
      uVar1 = *(int *)((long)param_3 + 0x1c) + (iVar3 - uVar1);
      *(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1;
      *(uint *)((long)param_3 + 0x1c) = uVar1;
      if ((int)param_3[10] == 0) {
        *param_3 = param_3[1] + (long)(int)(uVar1 & (int)uVar1 >> 0x1f);
        return puVar6;
      }
    }
    puVar9 = (ushort *)0x0;
  }
  return puVar9;
}


// ===== 006fe6fc  FUN_006fe6fc =====

ushort * FUN_006fe6fc(long param_1,long param_2,long *param_3,ulong param_4,ushort *param_5,
                     uint param_6)

{
  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  ushort *puVar6;
  ulong uVar7;
  ulong uVar8;
  ushort *puVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [12];
  
  if ((param_4 & 0xffff) != 0) {
    puVar9 = (ushort *)FUN_006fe204(param_1,param_2,param_3);
    return puVar9;
  }
  uVar8 = (ulong)*param_5;
  if (uVar8 != 0) {
    *(uint *)(param_1 + uVar8) =
         *(uint *)(param_1 + uVar8) | (uint)(1L << (param_4 >> 0x10 & 0x3f)) | param_6;
  }
  uVar8 = param_4 >> 0x30;
  lVar10 = *(long *)((long)param_5 + (param_4 >> 0x18 & 0xff) * 8 + (ulong)*(uint *)(param_5 + 0xc))
  ;
  if (*(long *)(param_1 + uVar8) == 0) {
    uVar7 = *(ulong *)(param_1 + 8);
    if ((uVar7 & 1) != 0) {
      uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
    }
    uVar5 = FUN_00701320(*(undefined8 *)(lVar10 + 0x20),uVar7);
    *(undefined8 *)(param_1 + uVar8) = uVar5;
  }
  if (*(char *)(param_2 + 2) < '\0') {
    auVar12 = FUN_006f6214();
    puVar9 = auVar12._0_8_;
  }
  else {
    puVar9 = (ushort *)(param_2 + 3);
    auVar12[8] = *(char *)(param_2 + 2);
    auVar12._0_8_ = puVar9;
    auVar12._9_3_ = 0;
  }
  if (puVar9 != (ushort *)0x0) {
    if (0 < (int)param_3[0xb]) {
      *(int *)(param_3 + 0xb) = (int)param_3[0xb] + -1;
      uVar1 = auVar12._8_4_ + (auVar12._0_4_ - (int)param_3[1]);
      iVar3 = *(int *)((long)param_3 + 0x1c);
      *(uint *)((long)param_3 + 0x1c) = uVar1;
      *param_3 = param_3[1] + (long)(int)(uVar1 & (int)uVar1 >> 0x1f);
      uVar5 = *(undefined8 *)(param_1 + uVar8);
      puVar9 = auVar12._0_8_;
LAB_006fe7e0:
      puVar6 = puVar9;
      if (puVar9 < (ushort *)*param_3) {
LAB_006fe7ec:
        puVar2 = (undefined8 *)(lVar10 + 0x38 + ((ulong)*puVar6 & (ulong)*(byte *)(lVar10 + 8)) * 2)
        ;
        puVar6 = (ushort *)
                 (*(code *)*puVar2)(uVar5,puVar6,param_3,puVar2[1] ^ (ulong)*puVar6,lVar10,0);
        if ((puVar6 == (ushort *)0x0) || (puVar9 = puVar6, (int)param_3[10] != 0))
        goto LAB_006fe8a4;
        goto LAB_006fe7e0;
      }
      iVar4 = (int)puVar9 - (int)param_3[1];
      if (*(int *)((long)param_3 + 0x1c) != iVar4) {
        auVar11 = FUN_006f5260(param_3,iVar4,*(undefined4 *)((long)param_3 + 0x5c));
        puVar6 = auVar11._0_8_;
        if ((auVar11 & (undefined1  [16])0x1) != (undefined1  [16])0x0) goto LAB_006fe8a4;
        goto LAB_006fe7ec;
      }
      if ((0 < iVar4) && (puVar6 = (ushort *)0x0, param_3[2] != 0)) {
        puVar6 = puVar9;
      }
LAB_006fe8a4:
      if ((*(byte *)(lVar10 + 9) & 1) != 0) {
        puVar6 = (ushort *)(**(code **)(lVar10 + 0x28))(uVar5,puVar6,param_3);
      }
      uVar1 = *(int *)((long)param_3 + 0x1c) + (iVar3 - uVar1);
      *(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1;
      *(uint *)((long)param_3 + 0x1c) = uVar1;
      if ((int)param_3[10] == 0) {
        *param_3 = param_3[1] + (long)(int)(uVar1 & (int)uVar1 >> 0x1f);
        return puVar6;
      }
    }
    puVar9 = (ushort *)0x0;
  }
  return puVar9;
}


// ===== 006fe91c  FUN_006fe91c =====

ushort * FUN_006fe91c(long param_1,ushort *param_2,ulong *param_3,ulong param_4,ushort *param_5,
                     ulong param_6)

{
  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  ushort uVar6;
  undefined8 uVar7;
  ushort *puVar8;
  ulong uVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [12];
  
  if ((param_4 & 0xff) != 0) {
    puVar8 = (ushort *)FUN_006fe204(param_1,param_2,param_3,param_4,param_5);
    return puVar8;
  }
  uVar9 = *(ulong *)(param_1 + 8);
  param_6 = 1L << (param_4 >> 0x10 & 0x3f) | param_6;
  if ((uVar9 & 1) != 0) {
    uVar9 = *(ulong *)(uVar9 & 0xfffffffffffffffe);
  }
  uVar6 = *param_2;
  lVar10 = *(long *)((long)param_5 + (param_4 >> 0x18 & 0xff) * 8 + (ulong)*(uint *)(param_5 + 0xc))
  ;
  while( true ) {
    uVar7 = FUN_006fe3b0(lVar10,param_1 + (param_4 >> 0x30),uVar9);
    cVar4 = *(char *)((long)param_2 + 1);
    if (cVar4 < '\0') {
      auVar12 = FUN_006f6214((char *)((long)param_2 + 1));
      param_2 = auVar12._0_8_;
    }
    else {
      param_2 = param_2 + 1;
      auVar12[8] = cVar4;
      auVar12._0_8_ = param_2;
      auVar12._9_3_ = 0;
    }
    if (param_2 == (ushort *)0x0) break;
    if ((int)param_3[0xb] < 1) break;
    *(int *)(param_3 + 0xb) = (int)param_3[0xb] + -1;
    uVar1 = auVar12._8_4_ + (auVar12._0_4_ - (int)param_3[1]);
    iVar3 = *(int *)((long)param_3 + 0x1c);
    *(uint *)((long)param_3 + 0x1c) = uVar1;
    *param_3 = param_3[1] + (long)(int)(uVar1 & (int)uVar1 >> 0x1f);
    puVar8 = auVar12._0_8_;
LAB_006fea00:
    param_2 = puVar8;
    if (puVar8 < (ushort *)*param_3) {
LAB_006fea0c:
      puVar2 = (undefined8 *)(lVar10 + 0x38 + ((ulong)*param_2 & (ulong)*(byte *)(lVar10 + 8)) * 2);
      param_2 = (ushort *)
                (*(code *)*puVar2)(uVar7,param_2,param_3,puVar2[1] ^ (ulong)*param_2,lVar10,0);
      if ((param_2 == (ushort *)0x0) || (puVar8 = param_2, (int)param_3[10] != 0))
      goto LAB_006fea94;
      goto LAB_006fea00;
    }
    iVar5 = (int)puVar8 - (int)param_3[1];
    if (*(int *)((long)param_3 + 0x1c) != iVar5) {
      auVar11 = FUN_006f5260(param_3,iVar5,*(undefined4 *)((long)param_3 + 0x5c));
      param_2 = auVar11._0_8_;
      if ((auVar11 & (undefined1  [16])0x1) != (undefined1  [16])0x0) goto LAB_006fea94;
      goto LAB_006fea0c;
    }
    if ((0 < iVar5) && (param_2 = (ushort *)0x0, param_3[2] != 0)) {
      param_2 = puVar8;
    }
LAB_006fea94:
    if ((*(byte *)(lVar10 + 9) & 1) != 0) {
      param_2 = (ushort *)(**(code **)(lVar10 + 0x28))(uVar7,param_2,param_3);
    }
    uVar1 = *(int *)((long)param_3 + 0x1c) + (iVar3 - uVar1);
    *(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1;
    *(uint *)((long)param_3 + 0x1c) = uVar1;
    if ((int)param_3[10] != 0) break;
    puVar8 = (ushort *)(param_3[1] + (long)(int)(uVar1 & (int)uVar1 >> 0x1f));
    *param_3 = (ulong)puVar8;
    if (param_2 == (ushort *)0x0) break;
    if (puVar8 <= param_2) {
      uVar9 = (ulong)*param_5;
      if (uVar9 != 0) {
        *(uint *)(param_1 + uVar9) = *(uint *)(param_1 + uVar9) | (uint)param_6;
      }
      return param_2;
    }
    if ((char)*param_2 != (char)uVar6) {
      uVar9 = (ulong)*param_2 & (ulong)(byte)param_5[4];
                    /* WARNING: Could not recover jumptable at 0x006feb7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar8 = (ushort *)
               (**(code **)(param_5 + uVar9 + 0x1c))
                         (param_1,param_2,param_3,
                          *(ulong *)(param_5 + uVar9 + 0x20) ^ (ulong)*param_2,param_5,param_6);
      return puVar8;
    }
  }
  puVar8 = (ushort *)switchD_006fe28c::caseD_8(param_1);
  return puVar8;
}


// ===== 006febfc  FUN_006febfc =====

ushort * FUN_006febfc(long param_1,ushort *param_2,ulong *param_3,ulong param_4,ushort *param_5,
                     ulong param_6)

{
  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  char cVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  undefined8 uVar8;
  ushort *puVar10;
  ulong uVar11;
  long lVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [12];
  long lVar9;
  
  if ((param_4 & 0xffff) != 0) {
    puVar10 = (ushort *)FUN_006fe204(param_1,param_2,param_3,param_4,param_5);
    return puVar10;
  }
  uVar11 = *(ulong *)(param_1 + 8);
  param_6 = 1L << (param_4 >> 0x10 & 0x3f) | param_6;
  if ((uVar11 & 1) != 0) {
    uVar11 = *(ulong *)(uVar11 & 0xfffffffffffffffe);
  }
  uVar5 = *param_2;
  lVar12 = *(long *)((long)param_5 + (param_4 >> 0x18 & 0xff) * 8 + (ulong)*(uint *)(param_5 + 0xc))
  ;
  while( true ) {
    uVar8 = FUN_006fe3b0(lVar12,param_1 + (param_4 >> 0x30),uVar11);
    cVar4 = (char)param_2[1];
    if (cVar4 < '\0') {
      auVar14 = FUN_006f6214(param_2 + 1);
      lVar9 = auVar14._0_8_;
    }
    else {
      lVar9 = (long)param_2 + 3;
      auVar14[8] = cVar4;
      auVar14._0_8_ = lVar9;
      auVar14._9_3_ = 0;
    }
    if (lVar9 == 0) break;
    if ((int)param_3[0xb] < 1) break;
    *(int *)(param_3 + 0xb) = (int)param_3[0xb] + -1;
    uVar1 = auVar14._8_4_ + (auVar14._0_4_ - (int)param_3[1]);
    iVar3 = *(int *)((long)param_3 + 0x1c);
    *(uint *)((long)param_3 + 0x1c) = uVar1;
    *param_3 = param_3[1] + (long)(int)(uVar1 & (int)uVar1 >> 0x1f);
    puVar10 = auVar14._0_8_;
LAB_006fece0:
    param_2 = puVar10;
    if (puVar10 < (ushort *)*param_3) {
LAB_006fecec:
      puVar2 = (undefined8 *)(lVar12 + 0x38 + ((ulong)*param_2 & (ulong)*(byte *)(lVar12 + 8)) * 2);
      param_2 = (ushort *)
                (*(code *)*puVar2)(uVar8,param_2,param_3,puVar2[1] ^ (ulong)*param_2,lVar12,0);
      if ((param_2 == (ushort *)0x0) || (puVar10 = param_2, (int)param_3[10] != 0))
      goto LAB_006fed74;
      goto LAB_006fece0;
    }
    iVar7 = (int)puVar10 - (int)param_3[1];
    if (*(int *)((long)param_3 + 0x1c) != iVar7) {
      auVar13 = FUN_006f5260(param_3,iVar7,*(undefined4 *)((long)param_3 + 0x5c));
      param_2 = auVar13._0_8_;
      if ((auVar13 & (undefined1  [16])0x1) != (undefined1  [16])0x0) goto LAB_006fed74;
      goto LAB_006fecec;
    }
    if ((0 < iVar7) && (param_2 = (ushort *)0x0, param_3[2] != 0)) {
      param_2 = puVar10;
    }
LAB_006fed74:
    if ((*(byte *)(lVar12 + 9) & 1) != 0) {
      param_2 = (ushort *)(**(code **)(lVar12 + 0x28))(uVar8,param_2,param_3);
    }
    uVar1 = *(int *)((long)param_3 + 0x1c) + (iVar3 - uVar1);
    *(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1;
    *(uint *)((long)param_3 + 0x1c) = uVar1;
    if ((int)param_3[10] != 0) break;
    puVar10 = (ushort *)(param_3[1] + (long)(int)(uVar1 & (int)uVar1 >> 0x1f));
    *param_3 = (ulong)puVar10;
    if (param_2 == (ushort *)0x0) break;
    if (puVar10 <= param_2) {
      uVar11 = (ulong)*param_5;
      if (uVar11 != 0) {
        *(uint *)(param_1 + uVar11) = *(uint *)(param_1 + uVar11) | (uint)param_6;
      }
      return param_2;
    }
    uVar6 = *param_2;
    if ((uint)uVar6 != (uint)uVar5) {
      uVar1 = (uint)uVar6 & (uint)(byte)param_5[4];
                    /* WARNING: Could not recover jumptable at 0x006fee58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar10 = (ushort *)
                (**(code **)(param_5 + (ulong)uVar1 + 0x1c))
                          (param_1,param_2,param_3,
                           *(ulong *)(param_5 + (ulong)uVar1 + 0x20) ^ (ulong)uVar6,param_5,param_6)
      ;
      return puVar10;
    }
  }
  puVar10 = (ushort *)switchD_006fe28c::caseD_8(param_1);
  return puVar10;
}


// ===== 006feed8  FUN_006feed8 =====

ushort * FUN_006feed8(long param_1,long param_2,undefined8 *param_3,ulong param_4,ushort *param_5,
                     uint param_6)

{
  ushort *puVar1;
  ulong uVar2;
  
  if ((param_4 & 0xff) != 0) {
    puVar1 = (ushort *)FUN_006fe204();
    return puVar1;
  }
  puVar1 = (ushort *)(param_2 + 5);
  *(undefined4 *)(param_1 + (param_4 >> 0x30)) = *(undefined4 *)(param_2 + 1);
  if (puVar1 < (ushort *)*param_3) {
                    /* WARNING: Could not recover jumptable at 0x006fef2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar1 = (ushort *)(**(code **)(param_5 + ((ulong)*puVar1 & (ulong)(byte)param_5[4]) + 0x1c))();
    return puVar1;
  }
  uVar2 = (ulong)*param_5;
  if (uVar2 != 0) {
    *(uint *)(param_1 + uVar2) =
         *(uint *)(param_1 + uVar2) | (uint)(1L << (param_4 >> 0x10 & 0x3f)) | param_6;
  }
  return puVar1;
}


// ===== 006fef50  FUN_006fef50 =====

ushort * FUN_006fef50(long param_1,long param_2,undefined8 *param_3,ulong param_4,ushort *param_5,
                     uint param_6)

{
  ushort *puVar1;
  ulong uVar2;
  
  if ((param_4 & 0xffff) != 0) {
    puVar1 = (ushort *)FUN_006fe204();
    return puVar1;
  }
  puVar1 = (ushort *)(param_2 + 6);
  *(undefined4 *)(param_1 + (param_4 >> 0x30)) = *(undefined4 *)(param_2 + 2);
  if (puVar1 < (ushort *)*param_3) {
                    /* WARNING: Could not recover jumptable at 0x006fefa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar1 = (ushort *)(**(code **)(param_5 + ((ulong)*puVar1 & (ulong)(byte)param_5[4]) + 0x1c))();
    return puVar1;
  }
  uVar2 = (ulong)*param_5;
  if (uVar2 != 0) {
    *(uint *)(param_1 + uVar2) =
         *(uint *)(param_1 + uVar2) | (uint)(1L << (param_4 >> 0x10 & 0x3f)) | param_6;
  }
  return puVar1;
}


// ===== 006fefc8  FUN_006fefc8 =====

ushort * FUN_006fefc8(long param_1,long param_2,undefined8 *param_3,ulong param_4,ushort *param_5,
                     uint param_6)

{
  ushort *puVar1;
  ulong uVar2;
  
  if ((param_4 & 0xfeff) != 0) {
    puVar1 = (ushort *)FUN_006fe204();
    return puVar1;
  }
  puVar1 = (ushort *)(param_2 + 2);
  *(char *)(param_1 + (param_4 >> 0x30)) = (char)(param_4 >> 8);
  if (puVar1 < (ushort *)*param_3) {
                    /* WARNING: Could not recover jumptable at 0x006ff020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar1 = (ushort *)(**(code **)(param_5 + ((ulong)*puVar1 & (ulong)(byte)param_5[4]) + 0x1c))();
    return puVar1;
  }
  uVar2 = (ulong)*param_5;
  if (uVar2 != 0) {
    *(uint *)(param_1 + uVar2) =
         *(uint *)(param_1 + uVar2) | (uint)(1L << (param_4 >> 0x10 & 0x3f)) | param_6;
  }
  return puVar1;
}


// ===== 006ff044  FUN_006ff044 =====

ushort * FUN_006ff044(long param_1,long param_2,undefined8 *param_3,ulong param_4,ushort *param_5,
                     uint param_6)

{
  char cVar1;
  ushort *puVar2;
  ulong uVar3;
  
  if ((param_4 & 0xffff) != 0) {
    puVar2 = (ushort *)FUN_006fe204();
    return puVar2;
  }
  cVar1 = *(char *)(param_2 + 2);
  if (-1 < cVar1) {
    puVar2 = (ushort *)(param_2 + 3);
    *(bool *)(param_1 + (param_4 >> 0x30)) = cVar1 != '\0';
    if (puVar2 < (ushort *)*param_3) {
                    /* WARNING: Could not recover jumptable at 0x006ff0a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar2 = (ushort *)
               (**(code **)(param_5 + ((ulong)*puVar2 & (ulong)(byte)param_5[4]) + 0x1c))();
      return puVar2;
    }
    uVar3 = (ulong)*param_5;
    if (uVar3 != 0) {
      *(uint *)(param_1 + uVar3) =
           *(uint *)(param_1 + uVar3) | (uint)(1L << (param_4 >> 0x10 & 0x3f)) | param_6;
    }
    return puVar2;
  }
  puVar2 = (ushort *)FUN_0070bb00(param_1,(char *)(param_2 + 2));
  return puVar2;
}


// ===== 006ff0d4  FUN_006ff0d4 =====

ushort * FUN_006ff0d4(long param_1,long param_2,undefined8 *param_3,ulong param_4,ushort *param_5,
                     uint param_6)

{
  ulong uVar1;
  ushort *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if ((param_4 & 0xff) != 0) {
    puVar2 = (ushort *)FUN_006fe204();
    return puVar2;
  }
  uVar3 = (ulong)*(char *)(param_2 + 1);
  if ((long)uVar3 < 0) {
    uVar5 = (long)*(char *)(param_2 + 2) << 7;
    uVar4 = uVar5 | 0x7f;
    if ((long)uVar5 < 0) {
      uVar1 = (long)*(char *)(param_2 + 3) << 0xe;
      uVar5 = uVar1 | 0x3fff;
      if ((long)uVar1 < 0) {
        uVar4 = ((long)*(char *)(param_2 + 4) << 0x15 | 0x1fffffU) & uVar4;
        if ((long)uVar4 < 0) {
          uVar5 = ((long)*(char *)(param_2 + 5) << 0x1c | 0xfffffffU) & uVar5;
          if ((long)uVar5 < 0) {
            if (*(char *)(param_2 + 6) < '\0') {
              if (*(char *)(param_2 + 7) < '\0') {
                if (*(char *)(param_2 + 8) < '\0') {
                  if (*(char *)(param_2 + 9) < '\0') {
                    puVar2 = (ushort *)(param_2 + 0xb);
                    if ((*(char *)(param_2 + 10) != '\x01') && (*(char *)(param_2 + 10) < '\0'))
                    goto LAB_006ff1f4;
                  }
                  else {
                    puVar2 = (ushort *)(param_2 + 10);
                  }
                }
                else {
                  puVar2 = (ushort *)(param_2 + 9);
                }
              }
              else {
                puVar2 = (ushort *)(param_2 + 8);
              }
            }
            else {
              puVar2 = (ushort *)(param_2 + 7);
            }
          }
          else {
            puVar2 = (ushort *)(param_2 + 6);
          }
        }
        else {
          puVar2 = (ushort *)(param_2 + 5);
        }
      }
      else {
        puVar2 = (ushort *)(param_2 + 4);
      }
      uVar3 = uVar4 & uVar5 & uVar3;
    }
    else {
      puVar2 = (ushort *)(param_2 + 3);
      uVar3 = uVar4 & uVar3;
    }
  }
  else {
    puVar2 = (ushort *)(param_2 + 2);
    if (puVar2 == (ushort *)0x0) {
LAB_006ff1f4:
      puVar2 = (ushort *)switchD_006fe28c::caseD_8();
      return puVar2;
    }
  }
  *(int *)(param_1 + (param_4 >> 0x30)) = (int)uVar3;
  if (puVar2 < (ushort *)*param_3) {
                    /* WARNING: Could not recover jumptable at 0x006ff130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar2 = (ushort *)(**(code **)(param_5 + ((ulong)*puVar2 & (ulong)(byte)param_5[4]) + 0x1c))();
    return puVar2;
  }
  uVar3 = (ulong)*param_5;
  if (uVar3 != 0) {
    *(uint *)(param_1 + uVar3) =
         *(uint *)(param_1 + uVar3) | (uint)(1L << (param_4 >> 0x10 & 0x3f)) | param_6;
  }
  return puVar2;
}


// ===== 006ff218  FUN_006ff218 =====

ushort * FUN_006ff218(long param_1,long param_2,undefined8 *param_3,ulong param_4,ushort *param_5,
                     uint param_6)

{
  ushort *puVar1;
  ulong uVar2;
  int iVar3;
  
  if ((param_4 & 0xffff) != 0) {
    puVar1 = (ushort *)FUN_006fe204();
    return puVar1;
  }
  iVar3 = (int)*(char *)(param_2 + 2);
  if (-1 < iVar3) {
    puVar1 = (ushort *)(param_2 + 3);
    *(int *)(param_1 + (param_4 >> 0x30)) = iVar3;
    if (puVar1 < (ushort *)*param_3) {
                    /* WARNING: Could not recover jumptable at 0x006ff274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar1 = (ushort *)
               (**(code **)(param_5 + ((ulong)*puVar1 & (ulong)(byte)param_5[4]) + 0x1c))();
      return puVar1;
    }
    uVar2 = (ulong)*param_5;
    if (uVar2 != 0) {
      *(uint *)(param_1 + uVar2) =
           *(uint *)(param_1 + uVar2) | (uint)(1L << (param_4 >> 0x10 & 0x3f)) | param_6;
    }
    return puVar1;
  }
  puVar1 = (ushort *)FUN_0070bbf8(param_1,(char *)(param_2 + 2));
  return puVar1;
}


// ===== 006ff2a0  FUN_006ff2a0 =====

ushort * FUN_006ff2a0(long param_1,long param_2,undefined8 *param_3,ulong param_4,ushort *param_5,
                     uint param_6)

{
  ulong uVar1;
  byte bVar2;
  ushort *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if ((param_4 & 0xff) != 0) {
    puVar3 = (ushort *)FUN_006fe204();
    return puVar3;
  }
  uVar4 = (ulong)*(char *)(param_2 + 1);
  if ((long)uVar4 < 0) {
    uVar6 = (long)*(char *)(param_2 + 2) << 7;
    uVar5 = uVar6 | 0x7f;
    if ((long)uVar6 < 0) {
      uVar1 = (long)*(char *)(param_2 + 3) << 0xe;
      uVar6 = uVar1 | 0x3fff;
      if ((long)uVar1 < 0) {
        uVar5 = ((long)*(char *)(param_2 + 4) << 0x15 | 0x1fffffU) & uVar5;
        if ((long)uVar5 < 0) {
          uVar6 = ((long)*(char *)(param_2 + 5) << 0x1c | 0xfffffffU) & uVar6;
          if ((long)uVar6 < 0) {
            uVar5 = ((long)*(char *)(param_2 + 6) << 0x23 | 0x7ffffffffU) & uVar5;
            if ((long)uVar5 < 0) {
              uVar6 = ((long)*(char *)(param_2 + 7) << 0x2a | 0x3ffffffffffU) & uVar6;
              if ((long)uVar6 < 0) {
                uVar5 = ((long)*(char *)(param_2 + 8) << 0x31 | 0x1ffffffffffffU) & uVar5;
                if ((long)uVar5 < 0) {
                  uVar1 = ((ulong)*(byte *)(param_2 + 9) << 0x38 | 0xffffffffffffff) & uVar6;
                  uVar6 = uVar1;
                  if ((long)uVar1 < 0) {
                    bVar2 = *(byte *)(param_2 + 10);
                    puVar3 = (ushort *)(param_2 + 0xb);
                    if (bVar2 != 1) {
                      if ((char)bVar2 < '\0') goto LAB_006ff3f8;
                      uVar6 = uVar1 & 0x7fffffffffffffff;
                      if ((bVar2 & 1) != 0) {
                        uVar6 = uVar1;
                      }
                    }
                  }
                  else {
                    puVar3 = (ushort *)(param_2 + 10);
                  }
                }
                else {
                  puVar3 = (ushort *)(param_2 + 9);
                }
              }
              else {
                puVar3 = (ushort *)(param_2 + 8);
              }
            }
            else {
              puVar3 = (ushort *)(param_2 + 7);
            }
          }
          else {
            puVar3 = (ushort *)(param_2 + 6);
          }
        }
        else {
          puVar3 = (ushort *)(param_2 + 5);
        }
      }
      else {
        puVar3 = (ushort *)(param_2 + 4);
      }
      uVar4 = uVar5 & uVar6 & uVar4;
    }
    else {
      puVar3 = (ushort *)(param_2 + 3);
      uVar4 = uVar5 & uVar4;
    }
  }
  else {
    puVar3 = (ushort *)(param_2 + 2);
    if (puVar3 == (ushort *)0x0) {
LAB_006ff3f8:
      puVar3 = (ushort *)switchD_006fe28c::caseD_8();
      return puVar3;
    }
  }
  *(ulong *)(param_1 + (param_4 >> 0x30)) = uVar4;
  if ((ushort *)*param_3 <= puVar3) {
    uVar4 = (ulong)*param_5;
    if (uVar4 != 0) {
      *(uint *)(param_1 + uVar4) =
           *(uint *)(param_1 + uVar4) | (uint)(1L << (param_4 >> 0x10 & 0x3f)) | param_6;
    }
    return puVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x006ff2fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar3 = (ushort *)(**(code **)(param_5 + ((ulong)*puVar3 & (ulong)(byte)param_5[4]) + 0x1c))();
  return puVar3;
}


// ===== 006ff41c  FUN_006ff41c =====

ushort * FUN_006ff41c(long param_1,long param_2,undefined8 *param_3,ulong param_4,ushort *param_5,
                     uint param_6)

{
  char cVar1;
  ushort *puVar2;
  ulong uVar3;
  
  if ((param_4 & 0xff) != 0) {
    puVar2 = (ushort *)FUN_006fe204();
    return puVar2;
  }
  cVar1 = *(char *)(param_2 + 1);
  if (-1 < cVar1) {
    puVar2 = (ushort *)(param_2 + 2);
    *(uint *)(param_1 + (param_4 >> 0x30)) = -((int)cVar1 & 1U) ^ (uint)(int)cVar1 >> 1;
    if (puVar2 < (ushort *)*param_3) {
                    /* WARNING: Could not recover jumptable at 0x006ff480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar2 = (ushort *)
               (**(code **)(param_5 + ((ulong)*puVar2 & (ulong)(byte)param_5[4]) + 0x1c))();
      return puVar2;
    }
    uVar3 = (ulong)*param_5;
    if (uVar3 != 0) {
      *(uint *)(param_1 + uVar3) =
           *(uint *)(param_1 + uVar3) | (uint)(1L << (param_4 >> 0x10 & 0x3f)) | param_6;
    }
    return puVar2;
  }
  puVar2 = (ushort *)FUN_0070bce8(param_1,(char *)(param_2 + 1));
  return puVar2;
}


// ===== 006ff4ac  FUN_006ff4ac =====

ushort * FUN_006ff4ac(long param_1,ushort *param_2,undefined8 *param_3,ulong param_4,ushort *param_5
                     ,uint param_6)

{
  ulong *puVar1;
  uint uVar2;
  ushort uVar3;
  ushort *puVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  int iVar9;
  uint local_64;
  
  if ((param_4 & 0xff) != 0) {
    puVar4 = (ushort *)FUN_006fe204(param_1,param_2,param_3,param_4,param_5);
    return puVar4;
  }
  puVar1 = (ulong *)(param_1 + (param_4 >> 0x30));
  uVar3 = *param_2;
  do {
    local_64 = 0xaaaaaaaa;
    uVar7 = *(undefined8 *)((long)param_2 + 1);
    uVar5 = (uint)uVar7;
    if ((uVar5 >> 7 & 1) == 0) {
      uVar5 = uVar5 & 0x7f;
      param_2 = param_2 + 1;
    }
    else if ((uVar5 >> 0xf & 1) == 0) {
      param_2 = (ushort *)((long)param_2 + 3);
      uVar5 = uVar5 & 0x7f | ((uint)((ulong)uVar7 >> 8) & 0x7f) << 7;
    }
    else {
      param_2 = (ushort *)FUN_0070bde0((char *)((long)param_2 + 1),&local_64);
      uVar5 = local_64;
    }
    local_64 = uVar5;
    if (param_2 == (ushort *)0x0) {
      puVar4 = (ushort *)switchD_006fe28c::caseD_8(param_1);
      return puVar4;
    }
    uVar8 = *puVar1;
    if (((uint)uVar8 >> 2 & 1) == 0) {
      uVar2 = (uint)uVar8 & 3;
      if (uVar2 == 2) {
        iVar6 = 2;
LAB_006ff5bc:
        iVar9 = iVar6 + 1;
        FUN_006f7ed0(puVar1,(uVar8 & 4) == 0,iVar6,iVar9);
        uVar8 = *puVar1;
        iVar6 = (int)puVar1[1];
        goto LAB_006ff56c;
      }
      *(uint *)((long)(puVar1 + 1) + (uVar8 & 3) * 4) = uVar5;
      *puVar1 = uVar8 & 0xfffffffffffffff8 | (ulong)(uVar2 + 1);
    }
    else {
      iVar6 = (int)puVar1[1];
      if (iVar6 == *(int *)((long)puVar1 + 0xc)) goto LAB_006ff5bc;
      iVar9 = iVar6 + 1;
LAB_006ff56c:
      *(int *)(puVar1 + 1) = iVar9;
      *(uint *)((uVar8 & 0xfffffffffffffff8) + (long)iVar6 * 4) = uVar5;
    }
    if ((ushort *)*param_3 <= param_2) {
      uVar8 = (ulong)*param_5;
      if (uVar8 != 0) {
        *(uint *)(param_1 + uVar8) =
             *(uint *)(param_1 + uVar8) | (uint)(1L << (param_4 >> 0x10 & 0x3f)) | param_6;
      }
      return param_2;
    }
    if ((char)*param_2 != (char)uVar3) {
      uVar8 = (ulong)*param_2 & (ulong)(byte)param_5[4];
                    /* WARNING: Could not recover jumptable at 0x006ff674. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar4 = (ushort *)
               (**(code **)(param_5 + uVar8 + 0x1c))
                         (param_1,param_2,param_3,
                          *(ulong *)(param_5 + uVar8 + 0x20) ^ (ulong)*param_2,param_5);
      return puVar4;
    }
  } while( true );
}


// ===== 006ff6e8  FUN_006ff6e8 =====

ushort * FUN_006ff6e8(long param_1,byte *param_2,undefined8 *param_3,undefined8 param_4,
                     ushort *param_5,undefined8 param_6)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  ulong *puVar4;
  ushort *puVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulong local_28;
  
  bVar2 = *param_2;
  auVar7[8] = bVar2;
  auVar7._0_8_ = param_2 + 1;
  auVar7._9_7_ = 0;
  if ((char)bVar2 < '\0') {
    bVar1 = param_2[1];
    iVar3 = (uint)bVar2 + (uint)bVar1 * 0x80 + -0x80;
    if ((char)bVar1 < '\0') {
      auVar7 = FUN_006f61a4(param_2,iVar3);
      param_2 = auVar7._8_8_;
    }
    else {
      auVar7._8_4_ = iVar3;
      auVar7._0_8_ = param_2 + 2;
      auVar7._12_4_ = 0;
    }
  }
  puVar4 = auVar7._0_8_;
  if (puVar4 != (ulong *)0x0) {
    uVar6 = *puVar4;
    if (((uint)uVar6 >> 7 & 1) == 0) {
      local_28 = uVar6 & 0x7f;
      puVar5 = (ushort *)((long)puVar4 + 1);
    }
    else {
      if (((uint)uVar6 >> 0xf & 1) != 0) {
        auVar8 = FUN_00705258(puVar4,&local_28,uVar6);
        param_2 = auVar8._8_8_;
        puVar5 = auVar8._0_8_;
        if (puVar5 == (ushort *)0x0) goto LAB_006ff7fc;
        goto LAB_006ff754;
      }
      puVar5 = (ushort *)((long)puVar4 + 2);
      local_28 = uVar6 & 0x7f | (uVar6 >> 8 & 0x7f) << 7;
    }
    if (puVar5 != (ushort *)0x0) {
LAB_006ff754:
      FUN_006ff858(param_1,param_5,auVar7._8_8_,local_28 & 0xffffffff);
      if (puVar5 < (ushort *)*param_3) {
        uVar6 = (ulong)*puVar5 & (ulong)(byte)param_5[4];
                    /* WARNING: Could not recover jumptable at 0x006ff7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar5 = (ushort *)
                 (**(code **)(param_5 + uVar6 + 0x1c))
                           (param_1,puVar5,param_3,
                            *(ulong *)(param_5 + uVar6 + 0x20) ^ (ulong)*puVar5,param_5,param_6);
        return puVar5;
      }
      uVar6 = (ulong)*param_5;
      if (uVar6 != 0) {
        *(uint *)(param_1 + uVar6) = *(uint *)(param_1 + uVar6) | (uint)param_6;
      }
      return puVar5;
    }
  }
LAB_006ff7fc:
  puVar5 = (ushort *)switchD_006fe28c::caseD_8(param_1,param_2,auVar7._8_8_);
  return puVar5;
}


// ===== 006ff858  FUN_006ff858 =====

void FUN_006ff858(undefined8 param_1,long param_2,ulong param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(param_2 + 0x30))(0,0,0,0,0,0);
                    /* WARNING: Could not recover jumptable at 0x006ff8b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(param_1,(param_3 & 0xffffffff) >> 3,param_4);
  return;
}


// ===== 006ff8bc  FUN_006ff8bc =====

ushort * FUN_006ff8bc(long param_1,ulong *param_2,undefined8 *param_3,undefined4 param_4,
                     ushort *param_5,undefined8 param_6)

{
  ushort *puVar1;
  ulong uVar2;
  ulong local_28;
  
  uVar2 = *param_2;
  if (((uint)uVar2 >> 7 & 1) == 0) {
    local_28 = uVar2 & 0x7f;
    puVar1 = (ushort *)((long)param_2 + 1);
  }
  else if (((uint)uVar2 >> 0xf & 1) == 0) {
    puVar1 = (ushort *)((long)param_2 + 2);
    local_28 = uVar2 & 0x7f | (uVar2 >> 8 & 0x7f) << 7;
  }
  else {
    puVar1 = (ushort *)FUN_00705258(param_2,&local_28);
  }
  if (puVar1 != (ushort *)0x0) {
    FUN_006ff858(param_1,param_5,param_4,local_28 & 0xffffffff);
    if (puVar1 < (ushort *)*param_3) {
      uVar2 = (ulong)*puVar1 & (ulong)(byte)param_5[4];
                    /* WARNING: Could not recover jumptable at 0x006ff968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar1 = (ushort *)
               (**(code **)(param_5 + uVar2 + 0x1c))
                         (param_1,puVar1,param_3,*(ulong *)(param_5 + uVar2 + 0x20) ^ (ulong)*puVar1
                          ,param_5,param_6);
      return puVar1;
    }
    uVar2 = (ulong)*param_5;
    if (uVar2 != 0) {
      *(uint *)(param_1 + uVar2) = *(uint *)(param_1 + uVar2) | (uint)param_6;
    }
    return puVar1;
  }
  puVar1 = (ushort *)switchD_006fe28c::caseD_8(param_1);
  return puVar1;
}


// ===== 006ff9f4  FUN_006ff9f4 =====

ushort * FUN_006ff9f4(long param_1,long param_2,undefined8 *param_3,ulong param_4,ushort *param_5,
                     uint param_6)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  ushort *puVar4;
  ulong uVar5;
  uint uVar6;
  uint *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong local_18;
  
  if ((param_4 & 0xff) != 0) {
    puVar4 = (ushort *)FUN_006fe204();
    return puVar4;
  }
  uVar5 = *(ulong *)(param_2 + 1);
  puVar7 = *(uint **)((long)param_5 + (param_4 >> 0x18 & 0xff) * 8 + (ulong)*(uint *)(param_5 + 0xc)
                     );
  if (((uint)uVar5 >> 7 & 1) == 0) {
    local_18 = uVar5 & 0x7f;
    puVar4 = (ushort *)(param_2 + 2);
  }
  else if (((uint)uVar5 >> 0xf & 1) == 0) {
    local_18 = uVar5 & 0x7f | (uVar5 >> 8 & 0x7f) << 7;
    puVar4 = (ushort *)(param_2 + 3);
  }
  else {
    puVar4 = (ushort *)FUN_00705258((ulong *)(param_2 + 1),&local_18,uVar5);
  }
  if (puVar4 == (ushort *)0x0) {
    puVar4 = (ushort *)switchD_006fe28c::caseD_8(param_1,param_2);
    return puVar4;
  }
  uVar6 = (uint)local_18;
  uVar9 = (ulong)(*puVar7 >> 0x10);
  uVar8 = (long)(int)uVar6 - (long)(short)*puVar7;
  uVar5 = uVar8 - uVar9;
  if (uVar9 <= uVar8) {
    uVar2 = puVar7[1];
    if (uVar5 < (ushort)uVar2) {
      if ((puVar7[(uVar5 >> 5) + 2] >> (ulong)((uint)uVar5 & 0x1f) & 1) == 0) {
LAB_006ffb2c:
        puVar4 = (ushort *)FUN_006ff6e8();
        return puVar4;
      }
    }
    else {
      uVar5 = 0;
      do {
        if (uVar2 >> 0x10 <= uVar5) goto LAB_006ffb2c;
        lVar3 = uVar5 + 2;
        lVar1 = 1;
        if ((int)puVar7[(ulong)(uVar2 >> 5 & 0x7ff) + lVar3] <= (int)uVar6) {
          lVar1 = 2;
        }
        uVar5 = lVar1 + uVar5 * 2;
      } while (puVar7[(ulong)(uVar2 >> 5 & 0x7ff) + lVar3] != uVar6);
    }
  }
  *(uint *)(param_1 + (param_4 >> 0x30)) = uVar6;
  if ((ushort *)*param_3 <= puVar4) {
    uVar5 = (ulong)*param_5;
    if (uVar5 != 0) {
      *(uint *)(param_1 + uVar5) =
           *(uint *)(param_1 + uVar5) | (uint)(1L << (param_4 >> 0x10 & 0x3f)) | param_6;
    }
    return puVar4;
  }
  uVar5 = (ulong)*puVar4 & (ulong)(byte)param_5[4];
                    /* WARNING: Could not recover jumptable at 0x006ffaa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar4 = (ushort *)
           (**(code **)(param_5 + uVar5 + 0x1c))
                     (param_1,puVar4,param_3,*(ulong *)(param_5 + uVar5 + 0x20) ^ (ulong)*puVar4);
  return puVar4;
}


// ===== 006ffbac  FUN_006ffbac =====

ushort * FUN_006ffbac(long param_1,long param_2,undefined8 *param_3,ulong param_4,ushort *param_5,
                     uint param_6)

{
  ushort *puVar1;
  ulong uVar2;
  
  if ((param_4 & 0xff) == 0) {
    if ((uint)*(byte *)(param_2 + 1) <= (uint)param_4 >> 0x18) {
      puVar1 = (ushort *)(param_2 + 2);
      *(uint *)(param_1 + (param_4 >> 0x30)) = (uint)*(byte *)(param_2 + 1);
      if (puVar1 < (ushort *)*param_3) {
                    /* WARNING: Could not recover jumptable at 0x006ffc08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar1 = (ushort *)
                 (**(code **)(param_5 + ((ulong)*puVar1 & (ulong)(byte)param_5[4]) + 0x1c))();
        return puVar1;
      }
      uVar2 = (ulong)*param_5;
      if (uVar2 != 0) {
        *(uint *)(param_1 + uVar2) =
             *(uint *)(param_1 + uVar2) | (uint)(1L << (param_4 >> 0x10 & 0x3f)) | param_6;
      }
      return puVar1;
    }
  }
  puVar1 = (ushort *)FUN_006fe204();
  return puVar1;
}


// ===== 006ffc2c  FUN_006ffc2c =====

ushort * FUN_006ffc2c(long param_1,long param_2,undefined8 *param_3,ulong param_4,ushort *param_5,
                     uint param_6)

{
  ushort *puVar1;
  ulong uVar2;
  
  if ((param_4 & 0xff) == 0) {
    if ((*(byte *)(param_2 + 1) - 1 & 0xff) < (uint)param_4 >> 0x18) {
      puVar1 = (ushort *)(param_2 + 2);
      *(uint *)(param_1 + (param_4 >> 0x30)) = (uint)*(byte *)(param_2 + 1);
      if (puVar1 < (ushort *)*param_3) {
                    /* WARNING: Could not recover jumptable at 0x006ffc90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar1 = (ushort *)
                 (**(code **)(param_5 + ((ulong)*puVar1 & (ulong)(byte)param_5[4]) + 0x1c))();
        return puVar1;
      }
      uVar2 = (ulong)*param_5;
      if (uVar2 != 0) {
        *(uint *)(param_1 + uVar2) =
             *(uint *)(param_1 + uVar2) | (uint)(1L << (param_4 >> 0x10 & 0x3f)) | param_6;
      }
      return puVar1;
    }
  }
  puVar1 = (ushort *)FUN_006fe204();
  return puVar1;
}


// ===== 006ffcb4  FUN_006ffcb4 =====

ushort * FUN_006ffcb4(long param_1,long param_2,undefined8 *param_3,ulong param_4,ushort *param_5,
                     ulong param_6)

{
  long lVar1;
  ushort *puVar2;
  ulong uVar3;
  
  if ((param_4 & 0xff) != 0) {
    puVar2 = (ushort *)FUN_006fe204(param_1,param_2,param_3,param_4,param_5);
    return puVar2;
  }
  uVar3 = *(ulong *)(param_1 + 8);
  lVar1 = param_1 + (param_4 >> 0x30);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  if (uVar3 == 0) {
    puVar2 = (ushort *)FUN_0070be48(param_2 + 1,param_3,lVar1);
  }
  else {
    puVar2 = (ushort *)FUN_00714270(param_3,param_2 + 1,lVar1);
  }
  if (puVar2 == (ushort *)0x0) {
    FUN_00706c04(param_1,lVar1);
    puVar2 = (ushort *)switchD_006fe28c::caseD_8(param_1);
    return puVar2;
  }
  param_6 = 1L << (param_4 >> 0x10 & 0x3f) | param_6;
  if (puVar2 < (ushort *)*param_3) {
    uVar3 = (ulong)*puVar2 & (ulong)(byte)param_5[4];
                    /* WARNING: Could not recover jumptable at 0x006ffd68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar2 = (ushort *)
             (**(code **)(param_5 + uVar3 + 0x1c))
                       (param_1,puVar2,param_3,*(ulong *)(param_5 + uVar3 + 0x20) ^ (ulong)*puVar2,
                        param_5,param_6);
    return puVar2;
  }
  uVar3 = (ulong)*param_5;
  if (uVar3 != 0) {
    *(uint *)(param_1 + uVar3) = *(uint *)(param_1 + uVar3) | (uint)param_6;
  }
  return puVar2;
}


// ===== 006ffe18  FUN_006ffe18 =====

ushort * FUN_006ffe18(long param_1,long param_2,undefined8 *param_3,ulong param_4,ushort *param_5,
                     ulong param_6)

{
  long lVar1;
  ushort *puVar2;
  ulong uVar3;
  
  if ((param_4 & 0xffff) != 0) {
    puVar2 = (ushort *)FUN_006fe204(param_1,param_2,param_3,param_4,param_5);
    return puVar2;
  }
  uVar3 = *(ulong *)(param_1 + 8);
  lVar1 = param_1 + (param_4 >> 0x30);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  if (uVar3 == 0) {
    puVar2 = (ushort *)FUN_0070be48(param_2 + 2,param_3,lVar1);
  }
  else {
    puVar2 = (ushort *)FUN_00714270(param_3,param_2 + 2,lVar1);
  }
  if (puVar2 == (ushort *)0x0) {
    FUN_00706c04(param_1,lVar1);
    puVar2 = (ushort *)switchD_006fe28c::caseD_8(param_1);
    return puVar2;
  }
  param_6 = 1L << (param_4 >> 0x10 & 0x3f) | param_6;
  if (puVar2 < (ushort *)*param_3) {
    uVar3 = (ulong)*puVar2 & (ulong)(byte)param_5[4];
                    /* WARNING: Could not recover jumptable at 0x006ffecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar2 = (ushort *)
             (**(code **)(param_5 + uVar3 + 0x1c))
                       (param_1,puVar2,param_3,*(ulong *)(param_5 + uVar3 + 0x20) ^ (ulong)*puVar2,
                        param_5,param_6);
    return puVar2;
  }
  uVar3 = (ulong)*param_5;
  if (uVar3 != 0) {
    *(uint *)(param_1 + uVar3) = *(uint *)(param_1 + uVar3) | (uint)param_6;
  }
  return puVar2;
}


// ===== 006fff7c  FUN_006fff7c =====

ushort * FUN_006fff7c(long param_1,ushort *param_2,undefined8 *param_3,ulong param_4,ushort *param_5
                     ,ulong param_6)

{
  ulong *puVar1;
  char cVar2;
  int iVar3;
  ushort uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ushort *puVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  int *piVar13;
  long *plVar14;
  undefined1 auVar15 [16];
  
  if ((param_4 & 0xff) != 0) {
    puVar9 = (ushort *)FUN_006fe204(param_1,param_2,param_3,param_4,param_5);
    return puVar9;
  }
  puVar1 = (ulong *)(param_1 + (param_4 >> 0x30));
  uVar4 = *param_2;
  plVar14 = (long *)puVar1[2];
  param_6 = 1L << (param_4 >> 0x10 & 0x3f) | param_6;
  if ((plVar14 != (long *)0x0) &&
     (lVar5 = __emutls_get_address(&DAT_00d5a2a0), *(long *)(lVar5 + 8) == *plVar14)) {
    uVar11 = *puVar1;
    if ((uVar11 & 1) == 0) {
      uVar10 = (uint)(uVar11 != 0);
    }
    else {
      uVar10 = *(uint *)(uVar11 + 3);
    }
    if (uVar10 == (uint)puVar1[1]) {
      lVar5 = *(long *)(lVar5 + 0x10);
      do {
        cVar2 = *(char *)((long)param_2 + 1);
        if (cVar2 < '\0') {
          auVar15 = FUN_006f6214((char *)((long)param_2 + 1),cVar2);
          param_2 = auVar15._0_8_;
        }
        else {
          param_2 = param_2 + 1;
          auVar15[8] = cVar2;
          auVar15._0_8_ = param_2;
          auVar15._9_7_ = 0;
        }
        if (param_2 == (ushort *)0x0) goto LAB_007001ec;
        if (*(long *)(lVar5 + 0x48) == 0) {
          puVar6 = (undefined8 *)FUN_006fd130(lVar5);
        }
        else {
          lVar12 = *(long *)(lVar5 + 0x48) + -0x18;
          *(long *)(lVar5 + 0x48) = lVar12;
          puVar6 = (undefined8 *)(*(long *)(lVar5 + 0x38) + lVar12 + 0x10);
        }
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar6[2] = 0;
        iVar3 = (int)puVar1[1];
        if ((*puVar1 & 1) == 0) {
          if (iVar3 == 1) {
LAB_00700108:
            puVar7 = (undefined8 *)FUN_00711858(puVar1,1,plVar14);
            *puVar7 = puVar6;
            goto LAB_007000a4;
          }
          *puVar1 = (ulong)puVar6;
        }
        else {
          piVar13 = (int *)(*puVar1 - 1);
          if (iVar3 == *piVar13) goto LAB_00700108;
          *(undefined8 **)(piVar13 + (long)iVar3 * 2 + 2) = puVar6;
LAB_007000a4:
          *(int *)(*puVar1 + 3) = *(int *)(*puVar1 + 3) + 1;
        }
        *(int *)(puVar1 + 1) = (int)puVar1[1] + 1;
        param_2 = (ushort *)FUN_007011c4(param_3,auVar15._0_8_,auVar15._8_8_ & 0xffffffff,puVar6);
        if (param_2 == (ushort *)0x0) goto LAB_007001ec;
        if ((ushort *)*param_3 <= param_2) goto LAB_00700158;
      } while ((char)*param_2 == (char)uVar4);
      goto LAB_00700198;
    }
  }
  do {
    uVar8 = FUN_00706c40(puVar1,puVar1[2]);
    param_2 = (ushort *)FUN_006f62b8(uVar8,(char *)((long)param_2 + 1),param_3);
    if (param_2 == (ushort *)0x0) {
LAB_007001ec:
      puVar9 = (ushort *)switchD_006fe28c::caseD_8(param_1);
      return puVar9;
    }
    if ((ushort *)*param_3 <= param_2) {
LAB_00700158:
      uVar11 = (ulong)*param_5;
      if (uVar11 != 0) {
        *(uint *)(param_1 + uVar11) = *(uint *)(param_1 + uVar11) | (uint)param_6;
      }
      return param_2;
    }
  } while ((char)*param_2 == (char)uVar4);
LAB_00700198:
  uVar11 = (ulong)*param_2 & (ulong)(byte)param_5[4];
                    /* WARNING: Could not recover jumptable at 0x007001e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar9 = (ushort *)
           (**(code **)(param_5 + uVar11 + 0x1c))
                     (param_1,param_2,param_3,*(ulong *)(param_5 + uVar11 + 0x20) ^ (ulong)*param_2,
                      param_5,param_6);
  return puVar9;
}


// ===== 00700250  FUN_00700250 =====

void FUN_00700250(undefined8 param_1,long param_2,uint *param_3,long param_4)

{
  uint uVar1;
  ushort uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  uVar2 = *(ushort *)((long)param_3 + 10) & 7;
  if (uVar2 == 6) {
    uVar3 = *(ulong *)(param_4 + 8);
    uVar1 = *param_3;
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    uVar5 = FUN_00701320(*(undefined8 *)(param_2 + 0x20),uVar3);
    *(undefined8 *)(param_4 + (ulong)uVar1) = uVar5;
    return;
  }
  if (uVar2 != 5) {
    return;
  }
  uVar2 = *(ushort *)((long)param_3 + 10) >> 6 & 7;
  if (uVar2 == 5) {
    *(undefined8 *)(param_4 + (ulong)*param_3) = 0;
    return;
  }
  if (uVar2 != 2) {
    *(undefined **)(param_4 + (ulong)*param_3) = &DAT_00208540;
    return;
  }
  uVar3 = *(ulong *)(param_4 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  if (uVar3 == 0) {
    puVar4 = (undefined8 *)operator_new(0x10);
  }
  else {
    puVar4 = (undefined8 *)thunk_FUN_006fd758(uVar3,0x10,8,FUN_0070bed4);
  }
  *puVar4 = 0;
  puVar4[1] = 0;
  *(undefined8 **)(param_4 + (ulong)*param_3) = puVar4;
  return;
}


// ===== 00700334  FUN_00700334 =====

void FUN_00700334(long param_1,undefined8 param_2,long param_3,uint param_4,undefined8 param_5,
                 long param_6)

{
  ushort *puVar1;
  ushort uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  byte *pbVar9;
  undefined1 uVar10;
  undefined8 uVar11;
  
  uVar5 = *(uint *)(param_6 + *(int *)(param_3 + 4));
  *(uint *)(param_6 + *(int *)(param_3 + 4)) = param_4;
  if (uVar5 == param_4) {
    return;
  }
  if (uVar5 == 0) goto LAB_00700480;
  if (uVar5 < 0x21) {
    uVar8 = 1 << (ulong)(uVar5 - 1 & 0x1f);
    if ((*(uint *)(param_1 + 0xc) & uVar8) == 0) {
      uVar11 = NEON_cnt((ulong)(*(uint *)(param_1 + 0xc) & uVar8 - 1),1);
      uVar10 = NEON_addv(uVar11,1);
      uVar5 = (uVar5 - 1) - (int)CONCAT71((int7)((ulong)uVar11 >> 8),uVar10);
LAB_007003b4:
      puVar6 = (uint *)((ulong)*(uint *)(param_1 + 0x10) + param_1 + (ulong)uVar5 * 0xc);
    }
    else {
LAB_007004b4:
      puVar6 = (uint *)0x0;
    }
  }
  else {
    puVar7 = (uint *)((ulong)*(ushort *)(param_1 + 10) + param_1);
    uVar8 = *puVar7;
    if (uVar5 < uVar8) goto LAB_007004b4;
    do {
      uVar3 = uVar5 - uVar8 >> 4;
      if (uVar3 < (ushort)puVar7[1]) {
        uVar5 = uVar5 - uVar8 & 0xf;
        puVar1 = (ushort *)((long)puVar7 + (ulong)(uVar3 << 1) * 2 + 6);
        uVar2 = *puVar1;
        if ((uVar2 >> (ulong)uVar5 & 1) != 0) goto LAB_007004b4;
        uVar11 = NEON_cnt((ulong)((1 << (ulong)uVar5) - 1U & (uint)uVar2),1);
        uVar10 = NEON_addv(uVar11,1);
        uVar5 = (uVar5 - (int)CONCAT71((int7)((ulong)uVar11 >> 8),uVar10)) + (uint)puVar1[1];
        goto LAB_007003b4;
      }
      puVar7 = (uint *)((long)puVar7 + (ulong)(ushort)puVar7[1] * 4 + 6);
      puVar6 = (uint *)0x0;
      uVar8 = *puVar7;
    } while (uVar8 <= uVar5);
  }
  uVar2 = *(ushort *)((long)puVar6 + 10) & 7;
  if (uVar2 == 6) {
    uVar4 = *(ulong *)(param_6 + 8);
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    if ((uVar4 == 0) && (*(long **)(param_6 + (ulong)*puVar6) != (long *)0x0)) {
      (**(code **)(**(long **)(param_6 + (ulong)*puVar6) + 8))();
    }
  }
  else if (uVar2 == 5) {
    uVar2 = *(ushort *)((long)puVar6 + 10) >> 6 & 7;
    if (uVar2 == 5) {
      uVar4 = *(ulong *)(param_6 + 8);
      if ((uVar4 & 1) != 0) {
        uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
      }
      if ((uVar4 == 0) && ((*(byte *)(param_6 + (ulong)*puVar6) & 3) != 0)) {
        FUN_006fc80c(param_6 + (ulong)*puVar6);
      }
    }
    else if (uVar2 == 2) {
      uVar4 = *(ulong *)(param_6 + 8);
      if ((uVar4 & 1) != 0) {
        uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
      }
      if ((uVar4 == 0) && (pbVar9 = *(byte **)(param_6 + (ulong)*puVar6), pbVar9 != (byte *)0x0)) {
        if ((*pbVar9 & 1) != 0) {
          FUN_006f1244(pbVar9);
        }
        operator_delete(pbVar9);
      }
    }
    else {
      FUN_00714208(param_6 + (ulong)*puVar6);
    }
  }
LAB_00700480:
  FUN_00700250();
  return;
}


// ===== 00700564  FUN_00700564 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_00700564(undefined8 param_1,undefined8 param_2,long param_3,long param_4,short param_5)

{
  ulong uVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  byte *pbVar7;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uVar12;
  undefined1 (*pauVar13) [16];
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar26;
  undefined1 auVar25 [16];
  long lVar27;
  long lVar29;
  undefined1 auVar28 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  byte *pbVar8;
  
  if ((param_5 != 0x400) || (iVar5 = FUN_006fb6a8(), iVar5 != 0)) {
    return 1;
  }
  pbVar2 = (byte *)((ulong)*(uint *)(param_3 + 0x18) + param_3 +
                   (ulong)*(ushort *)(param_3 + 0x16) * 8);
  uVar12 = (ulong)(*(ushort *)(param_3 + 0x14) + 8) & 0x1fff8;
  pbVar3 = pbVar2 + uVar12;
  if ((*pbVar2 != 0) && (pbVar3 == (byte *)0x0)) goto LAB_00700808;
  lVar6 = ((long)((param_4 - param_3) - (ulong)*(uint *)(param_3 + 0x10)) >> 2) *
          -0x5555555555555555;
  uVar1 = lVar6 + 1;
  if (lVar6 != -1) {
    pbVar8 = pbVar2;
    if (7 < uVar1) {
      if (uVar1 < 0x20) {
        uVar10 = 0;
      }
      else {
        lVar15 = 0;
        lVar6 = 0;
        lVar14 = 0;
        lVar22 = 0;
        lVar23 = 0;
        lVar33 = 0;
        lVar34 = 0;
        lVar18 = 0;
        lVar19 = 0;
        lVar20 = 0;
        lVar21 = 0;
        lVar16 = 0;
        lVar17 = 0;
        lVar37 = 0;
        lVar38 = 0;
        lVar24 = 0;
        lVar26 = 0;
        lVar43 = 0;
        lVar44 = 0;
        lVar27 = 0;
        lVar29 = 0;
        lVar45 = 0;
        lVar46 = 0;
        lVar39 = 0;
        lVar40 = 0;
        lVar41 = 0;
        lVar42 = 0;
        lVar35 = 0;
        lVar36 = 0;
        uVar10 = uVar1 & 0xffffffffffffffe0;
        lVar47 = 0;
        lVar48 = 0;
        pauVar13 = (undefined1 (*) [16])(pbVar2 + 0x10);
        uVar9 = uVar1 & 0xffffffffffffffe0;
        do {
          auVar25 = pauVar13[-1];
          auVar28 = *pauVar13;
          uVar9 = uVar9 - 0x20;
          pauVar13 = pauVar13 + 2;
          auVar50 = a64_TBL(ZEXT816(0),auVar25,_DAT_001f45d0);
          auVar51 = a64_TBL(ZEXT816(0),auVar25,_DAT_001f3040);
          auVar30 = a64_TBL(ZEXT816(0),auVar25,_DAT_001f2b30);
          auVar49 = a64_TBL(ZEXT816(0),auVar25,_DAT_001f25a0);
          auVar25 = a64_TBL(ZEXT816(0),auVar28,_DAT_001f3040);
          auVar31 = a64_TBL(ZEXT816(0),auVar28,_DAT_001f45d0);
          auVar32 = a64_TBL(ZEXT816(0),auVar28,_DAT_001f2b30);
          auVar28 = a64_TBL(ZEXT816(0),auVar28,_DAT_001f25a0);
          lVar22 = lVar22 + (auVar50._8_8_ & 0xffffffff);
          lVar23 = lVar23 + (auVar50._8_8_ >> 0x20);
          lVar33 = lVar33 + (auVar51._8_8_ & 0xffffffff);
          lVar34 = lVar34 + (auVar51._8_8_ >> 0x20);
          lVar6 = lVar6 + (ulong)auVar51._0_4_;
          lVar14 = lVar14 + (ulong)auVar51._4_4_;
          uVar12 = uVar12 + auVar50._0_4_;
          lVar15 = lVar15 + (ulong)auVar50._4_4_;
          lVar18 = lVar18 + (ulong)auVar30._0_4_;
          lVar19 = lVar19 + (ulong)auVar30._4_4_;
          lVar20 = lVar20 + (auVar30._8_8_ & 0xffffffff);
          lVar21 = lVar21 + (auVar30._8_8_ >> 0x20);
          lVar16 = lVar16 + (ulong)auVar49._0_4_;
          lVar17 = lVar17 + (ulong)auVar49._4_4_;
          lVar37 = lVar37 + (auVar49._8_8_ & 0xffffffff);
          lVar38 = lVar38 + (auVar49._8_8_ >> 0x20);
          lVar43 = lVar43 + (auVar31._8_8_ & 0xffffffff);
          lVar44 = lVar44 + (auVar31._8_8_ >> 0x20);
          lVar45 = lVar45 + (auVar25._8_8_ & 0xffffffff);
          lVar46 = lVar46 + (auVar25._8_8_ >> 0x20);
          lVar27 = lVar27 + (ulong)auVar25._0_4_;
          lVar29 = lVar29 + (ulong)auVar25._4_4_;
          lVar24 = lVar24 + (ulong)auVar31._0_4_;
          lVar26 = lVar26 + (ulong)auVar31._4_4_;
          lVar39 = lVar39 + (ulong)auVar32._0_4_;
          lVar40 = lVar40 + (ulong)auVar32._4_4_;
          lVar41 = lVar41 + (auVar32._8_8_ & 0xffffffff);
          lVar42 = lVar42 + (auVar32._8_8_ >> 0x20);
          lVar35 = lVar35 + (ulong)auVar28._0_4_;
          lVar36 = lVar36 + (ulong)auVar28._4_4_;
          lVar47 = lVar47 + (auVar28._8_8_ & 0xffffffff);
          lVar48 = lVar48 + (auVar28._8_8_ >> 0x20);
        } while (uVar9 != 0);
        uVar12 = lVar24 + uVar12 + lVar39 + lVar18 + lVar27 + lVar6 + lVar35 + lVar16 +
                 lVar43 + lVar22 + lVar41 + lVar20 + lVar45 + lVar33 + lVar47 + lVar37 +
                 lVar26 + lVar15 + lVar40 + lVar19 + lVar29 + lVar14 + lVar36 + lVar17 +
                 lVar44 + lVar23 + lVar42 + lVar21 + lVar46 + lVar34 + lVar48 + lVar38;
        if (uVar1 == uVar10) goto LAB_007007d8;
        if ((uVar1 & 0x18) == 0) {
          pbVar8 = pbVar2 + uVar10;
          goto LAB_007007c8;
        }
      }
      lVar14 = 0;
      lVar15 = 0;
      lVar16 = 0;
      uVar9 = uVar1 & 0xfffffffffffffff8;
      lVar17 = 0;
      lVar18 = 0;
      lVar19 = 0;
      lVar20 = 0;
      lVar6 = uVar10 - uVar9;
      puVar11 = (ulong *)(pbVar2 + uVar10);
      do {
        auVar25._0_8_ = *puVar11;
        auVar25._8_8_ = 0;
        lVar6 = lVar6 + 8;
        auVar28 = a64_TBL(ZEXT816(0),auVar25,_DAT_001f3040);
        auVar25 = a64_TBL(ZEXT816(0),auVar25,_DAT_001f45d0);
        lVar19 = lVar19 + (auVar28._8_8_ & 0xffffffff);
        lVar20 = lVar20 + (auVar28._8_8_ >> 0x20);
        lVar17 = lVar17 + (auVar25._8_8_ & 0xffffffff);
        lVar18 = lVar18 + (auVar25._8_8_ >> 0x20);
        lVar15 = lVar15 + (ulong)auVar28._0_4_;
        lVar16 = lVar16 + (ulong)auVar28._4_4_;
        uVar12 = uVar12 + auVar25._0_4_;
        lVar14 = lVar14 + (ulong)auVar25._4_4_;
        puVar11 = puVar11 + 1;
      } while (lVar6 != 0);
      uVar12 = uVar12 + lVar15 + lVar17 + lVar19 + lVar14 + lVar16 + lVar18 + lVar20;
      pbVar8 = pbVar2 + uVar9;
      if (uVar1 == uVar9) goto LAB_007007d8;
    }
LAB_007007c8:
    do {
      pbVar7 = pbVar8 + 1;
      uVar12 = uVar12 + *pbVar8;
      pbVar8 = pbVar7;
    } while (pbVar7 != pbVar2 + uVar1);
  }
LAB_007007d8:
  bVar4 = pbVar2[uVar1];
  if ((pbVar2 + uVar12 != (byte *)0x0) || (bVar4 == 0)) {
    FUN_006fc3b0(pbVar3,*pbVar2,pbVar2 + uVar12,bVar4,"parsing",0);
    return 0;
  }
LAB_00700808:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/string_view:333: libc++ Hardening assertion __len == 0 || __s != nullptr failed: string_view::string_view(_CharT *, size_t): received nullptr\n"
            );
}


// ===== 0070081c  FUN_0070081c =====

void FUN_0070081c(undefined8 param_1,long param_2,long param_3,ulong param_4,long param_5,
                 uint param_6)

{
  byte bVar1;
  long lVar2;
  undefined8 ****ppppuVar3;
  ulong uVar4;
  long lVar5;
  undefined1 *local_100;
  undefined1 *puStack_f8;
  undefined8 ***local_e8;
  ulong uStack_e0;
  ulong local_d8;
  uint local_cc;
  undefined1 **local_c8;
  undefined1 **local_c0;
  undefined1 **ppuStack_b8;
  undefined1 *apuStack_b0 [4];
  undefined1 *local_90;
  undefined8 uStack_88;
  undefined1 **local_80;
  undefined1 *local_78;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_e8 = (undefined8 ****)0x0;
  uStack_e0 = 0;
  local_d8 = 0;
  puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
  local_100 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_007127c4(&local_100,&local_e8);
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  apuStack_b0[3] = &DAT_aaaaaaaaaaaaaaaa;
  apuStack_b0[2] = &DAT_aaaaaaaaaaaaaaaa;
  apuStack_b0[1] = &DAT_aaaaaaaaaaaaaaaa;
  apuStack_b0[0] = &DAT_aaaaaaaaaaaaaaaa;
  uStack_88 = CONCAT44(0xaaaaaaaa,(uint)(byte)*PTR_DAT_00d52580 << 0x10);
  local_c0 = apuStack_b0;
  ppuStack_b8 = apuStack_b0;
  local_90 = (undefined1 *)&local_100;
  local_80 = apuStack_b0;
  local_78 = (undefined1 *)FUN_00712b28(&local_100);
  local_c8 = (undefined1 **)&DAT_aaaaaaaaaaaaaaaa;
  local_cc = 0xaaaaaaaa;
  uVar4 = FUN_007127d8(&local_100,&local_c8,&local_cc);
  if (((uVar4 & 1) != 0) && (0 < (int)local_cc)) {
    ppuStack_b8 = (undefined1 **)0x0;
    local_c0 = (undefined1 **)((long)local_c8 + ((ulong)local_cc - 0x10));
    local_80 = local_c8;
    if (local_cc < 0x11) {
      local_c0 = (undefined1 **)((long)apuStack_b0 + (ulong)local_cc);
      ppuStack_b8 = local_c8;
      local_80 = apuStack_b0;
    }
  }
  if ((param_6 & 7) < 2) {
    if ((param_6 & 7) == 0) {
      bVar1 = *(byte *)(param_3 + 0xf) & 0xf;
      param_6 = param_6 >> 8;
      if (bVar1 == 2) {
        if (((param_6 & 0xff) >> 1 & 1) == 0) {
          if ((param_6 & 1) == 0) {
            FUN_006fbca8();
          }
          else {
            FUN_006fbb00(1,*(undefined8 *)(param_5 + 8),&local_c0);
          }
        }
        else {
          FUN_006fbe58(1,*(undefined8 *)(param_5 + 8),&local_c0);
        }
      }
      else if (bVar1 == 1) {
        if (((param_6 & 0xff) >> 1 & 1) == 0) {
          if ((param_6 & 1) == 0) {
            FUN_006fbbd8();
          }
          else {
            FUN_006fba24(1,*(undefined4 *)(param_5 + 8),&local_c0);
          }
        }
        else {
          FUN_006fbd80(1,*(undefined4 *)(param_5 + 8),&local_c0);
        }
      }
      else {
        FUN_006fc0a0(1,*(undefined1 *)(param_5 + 8),&local_c0);
      }
    }
    else {
      FUN_006fbfec(1,*(undefined8 *)(param_5 + 8),&local_c0);
    }
  }
  else if ((param_6 & 7) == 2) {
    FUN_006fc150(1,param_5 + 8,&local_c0);
  }
  else {
    FUN_006fbf38(1,*(undefined4 *)(param_5 + 8),&local_c0);
  }
  FUN_006fba24(2,*(undefined4 *)(param_5 + (ulong)*(byte *)(param_3 + 0xe)),&local_c0);
  FUN_006dd370(&local_c0);
  lVar5 = (**(code **)(param_2 + 0x30))(0,0,0,0,0,0);
  uVar4 = uStack_e0;
  ppppuVar3 = (undefined8 ****)local_e8;
  if (-1 < (long)local_d8) {
    uVar4 = local_d8 >> 0x38;
    ppppuVar3 = &local_e8;
  }
  (**(code **)(lVar5 + 8))(param_1,(param_4 & 0xffffffff) >> 3,ppppuVar3,uVar4);
  if (*(long *)(param_3 + 0x18) == 0) {
    FUN_00713d00(param_3,param_5);
  }
  if ((long)local_d8 < 0) {
    operator_delete(local_e8);
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00700aec  FUN_00700aec =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * FUN_00700aec(long param_1,ulong *param_2,long *param_3,ushort *param_4,long param_5,
                    long param_6,long param_7)

{
  ulong uVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  uint uVar8;
  char cVar9;
  byte bVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  int iVar14;
  ushort uVar15;
  int iVar16;
  uint uVar17;
  ulong uVar18;
  ulong *puVar19;
  long lVar20;
  byte *pbVar21;
  ulong uVar23;
  ulong uVar24;
  undefined1 (*pauVar25) [16];
  uint uVar26;
  ulong *puVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar40;
  undefined1 auVar39 [16];
  long lVar41;
  long lVar43;
  undefined1 auVar42 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  long lVar47;
  long lVar48;
  long lVar49;
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
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [12];
  undefined1 *local_88;
  byte *pbVar22;
  
  uVar11 = *param_4;
  uVar12 = param_4[1];
  uVar15 = param_4[2];
  uVar5 = uVar11 & 0xff;
  uVar6 = uVar12 & 0xff;
LAB_00700b68:
  while( true ) {
    if ((ulong *)*param_3 <= param_2) {
      iVar16 = (int)param_2 - (int)param_3[1];
      if (*(int *)((long)param_3 + 0x1c) == iVar16) {
        if (iVar16 < 1) {
          return param_2;
        }
        if (param_3[2] != 0) {
          return param_2;
        }
        return (ulong *)0x0;
      }
      auVar39 = FUN_006f5260(param_3,iVar16,*(undefined4 *)((long)param_3 + 0x5c));
      param_2 = auVar39._0_8_;
      if ((auVar39 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
        return param_2;
      }
    }
    bVar10 = (byte)*param_2;
    uVar17 = (uint)bVar10;
    if ((bVar10 == uVar5) || (bVar10 == uVar6)) break;
    auVar39[8] = bVar10;
    auVar39._0_8_ = (byte *)((long)param_2 + 1);
    auVar39._9_7_ = 0;
    if ((char)bVar10 < '\0') {
      bVar10 = *(byte *)((long)param_2 + 1);
      if ((char)bVar10 < '\0') {
        auVar39 = FUN_006f61a4(param_2);
      }
      else {
        auVar39._8_4_ = uVar17 + (uint)bVar10 * 0x80 + -0x80;
        auVar39._0_8_ = (long)param_2 + 2;
        auVar39._12_4_ = 0;
      }
    }
    puVar19 = auVar39._0_8_;
    uVar17 = auVar39._8_4_;
    if ((uVar17 == uVar5) || (uVar17 == uVar6)) goto LAB_00700b90;
    if (puVar19 == (ulong *)0x0) {
      return (ulong *)0x0;
    }
    if ((uVar17 == 0) || ((uVar17 & 7) == 4)) {
      *(uint *)(param_3 + 10) = uVar17 - 1;
      return puVar19;
    }
    param_2 = (ulong *)FUN_006f6b14(auVar39._8_8_ & 0xffffffff,0,puVar19,param_3);
joined_r0x00700ec4:
    if (param_2 == (ulong *)0x0) {
      return (ulong *)0x0;
    }
  }
  puVar19 = (ulong *)((long)param_2 + 1);
LAB_00700b90:
  uVar8 = *(uint *)(param_7 + 0xc);
  if (uVar17 == uVar5) {
    uVar26 = uVar8 >> 0x18 & 0xf;
    puVar27 = (ulong *)(param_1 + 8);
    uVar13 = uVar11;
  }
  else {
    uVar26 = uVar8 >> 0x1c;
    puVar27 = (ulong *)(param_1 + (ulong)(byte)(uVar8 >> 0x10));
    uVar13 = uVar12;
  }
  uVar17 = uVar17 & 7;
  if (uVar17 < 2) {
    if (uVar17 == 0) {
      local_88 = &DAT_aaaaaaaaaaaaaaaa;
      uVar18 = *puVar19;
      if (((uint)uVar18 >> 7 & 1) == 0) {
        local_88 = (undefined1 *)(uVar18 & 0x7f);
        param_2 = (ulong *)((long)puVar19 + 1);
      }
      else if (((uint)uVar18 >> 0xf & 1) == 0) {
        param_2 = (ulong *)((long)puVar19 + 2);
        local_88 = (undefined1 *)(uVar18 & 0x7f | (uVar18 >> 8 & 0x7f) << 7);
      }
      else {
        param_2 = (ulong *)FUN_00705258(puVar19,&local_88);
      }
      if (param_2 == (ulong *)0x0) {
        return (ulong *)0x0;
      }
      if (uVar26 == 2) {
        puVar7 = local_88;
        if ((uVar13 >> 8 & 2) != 0) {
          puVar7 = (undefined1 *)(-((ulong)local_88 & 1) ^ (ulong)local_88 >> 1);
        }
        *puVar27 = (ulong)puVar7;
      }
      else if (uVar26 == 1) {
        uVar17 = (uint)local_88;
        if ((uVar13 >> 8 & 2) != 0) {
          uVar17 = -(uVar17 & 1) ^ uVar17 >> 1;
        }
        *(uint *)puVar27 = uVar17;
      }
      else {
        *(bool *)puVar27 = local_88 != (undefined1 *)0x0;
      }
    }
    else {
      param_2 = puVar19 + 1;
      *puVar27 = *puVar19;
    }
    goto LAB_00700b68;
  }
  if (uVar17 != 2) {
    param_2 = (ulong *)((long)puVar19 + 4);
    *(uint *)puVar27 = (uint)*puVar19;
    goto LAB_00700b68;
  }
  cVar9 = (char)*puVar19;
  if (uVar26 != 5) {
    if (cVar9 < '\0') {
      auVar66 = FUN_006f6214(puVar19,cVar9);
      lVar20 = auVar66._0_8_;
    }
    else {
      lVar20 = (long)puVar19 + 1;
      auVar66[8] = cVar9;
      auVar66._0_8_ = lVar20;
      auVar66._9_3_ = 0;
    }
    if (lVar20 == 0) {
      return (ulong *)0x0;
    }
    if ((int)param_3[0xb] < 1) {
      return (ulong *)0x0;
    }
    *(int *)(param_3 + 0xb) = (int)param_3[0xb] + -1;
    uVar17 = auVar66._8_4_ + (auVar66._0_4_ - (int)param_3[1]);
    iVar16 = *(int *)((long)param_3 + 0x1c);
    *(uint *)((long)param_3 + 0x1c) = uVar17;
    *param_3 = param_3[1] + (long)(int)(uVar17 & (int)uVar17 >> 0x1f);
    lVar20 = *(long *)(param_4 + 4);
    puVar19 = auVar66._0_8_;
LAB_00700d3c:
    param_2 = puVar19;
    if (puVar19 < (ulong *)*param_3) {
LAB_00700d48:
      puVar2 = (undefined8 *)
               (lVar20 + 0x38 + ((ulong)(ushort)*param_2 & (ulong)*(byte *)(lVar20 + 8)) * 2);
      param_2 = (ulong *)(*(code *)*puVar2)(puVar27,param_2,param_3,
                                            puVar2[1] ^ (ulong)(ushort)*param_2,lVar20,0);
      if ((param_2 == (ulong *)0x0) || (puVar19 = param_2, (int)param_3[10] != 0))
      goto LAB_00700e8c;
      goto LAB_00700d3c;
    }
    iVar14 = (int)puVar19 - (int)param_3[1];
    if (*(int *)((long)param_3 + 0x1c) != iVar14) {
      auVar39 = FUN_006f5260(param_3,iVar14,*(undefined4 *)((long)param_3 + 0x5c));
      param_2 = auVar39._0_8_;
      if ((auVar39 & (undefined1  [16])0x1) != (undefined1  [16])0x0) goto LAB_00700e8c;
      goto LAB_00700d48;
    }
    if ((0 < iVar14) && (param_2 = (ulong *)0x0, param_3[2] != 0)) {
      param_2 = puVar19;
    }
LAB_00700e8c:
    if ((*(byte *)(lVar20 + 9) & 1) != 0) {
      param_2 = (ulong *)(**(code **)(lVar20 + 0x28))(puVar27,param_2,param_3);
    }
    uVar17 = *(int *)((long)param_3 + 0x1c) + (iVar16 - uVar17);
    *(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1;
    *(uint *)((long)param_3 + 0x1c) = uVar17;
    if ((int)param_3[10] != 0) {
      return (ulong *)0x0;
    }
    *param_3 = param_3[1] + (long)(int)(uVar17 & (int)uVar17 >> 0x1f);
    goto joined_r0x00700ec4;
  }
  if (cVar9 < '\0') {
    auVar42 = FUN_006f6214(puVar19,cVar9);
    lVar20 = auVar42._0_8_;
  }
  else {
    lVar20 = (long)puVar19 + 1;
    auVar42[8] = cVar9;
    auVar42._0_8_ = lVar20;
    auVar42._9_7_ = 0;
  }
  if (lVar20 == 0) {
    return (ulong *)0x0;
  }
  param_2 = (ulong *)FUN_007011c4(param_3,auVar42._0_8_,auVar42._8_8_ & 0xffffffff,puVar27);
  if (param_2 == (ulong *)0x0) {
    return (ulong *)0x0;
  }
  if (((uVar13 >> 10 & 1) == 0) || ((uVar15 & 4) == 0)) goto LAB_00700b68;
  uVar18 = (ulong)*(char *)((long)puVar27 + 0x17);
  puVar19 = puVar27;
  if ((long)uVar18 < 0) {
    puVar19 = (ulong *)*puVar27;
    uVar18 = puVar27[1];
  }
  iVar16 = FUN_006fb6a8(puVar19,uVar18);
  if (iVar16 != 0) goto LAB_00700b68;
  pbVar3 = (byte *)((ulong)*(uint *)(param_5 + 0x18) + param_5 +
                   (ulong)*(ushort *)(param_5 + 0x16) * 8);
  uVar18 = (ulong)(*(ushort *)(param_5 + 0x14) + 8) & 0x1fff8;
  pbVar4 = pbVar3 + uVar18;
  if ((*pbVar3 != 0) && (pbVar4 == (byte *)0x0)) goto LAB_007011a0;
  lVar20 = ((long)((param_6 - param_5) - (ulong)*(uint *)(param_5 + 0x10)) >> 2) *
           -0x5555555555555555;
  uVar1 = lVar20 + 1;
  if (lVar20 != -1) {
    pbVar22 = pbVar3;
    if (7 < uVar1) {
      if (uVar1 < 0x20) {
        uVar24 = 0;
      }
      else {
        lVar29 = 0;
        lVar20 = 0;
        lVar28 = 0;
        lVar36 = 0;
        lVar37 = 0;
        lVar47 = 0;
        lVar48 = 0;
        lVar32 = 0;
        lVar33 = 0;
        lVar34 = 0;
        lVar35 = 0;
        lVar30 = 0;
        lVar31 = 0;
        lVar51 = 0;
        lVar52 = 0;
        lVar38 = 0;
        lVar40 = 0;
        lVar57 = 0;
        lVar58 = 0;
        lVar41 = 0;
        lVar43 = 0;
        lVar59 = 0;
        lVar60 = 0;
        lVar53 = 0;
        lVar54 = 0;
        lVar55 = 0;
        lVar56 = 0;
        lVar49 = 0;
        lVar50 = 0;
        uVar24 = uVar1 & 0xffffffffffffffe0;
        lVar61 = 0;
        lVar62 = 0;
        pauVar25 = (undefined1 (*) [16])(pbVar3 + 0x10);
        uVar23 = uVar1 & 0xffffffffffffffe0;
        do {
          auVar39 = pauVar25[-1];
          auVar42 = *pauVar25;
          uVar23 = uVar23 - 0x20;
          pauVar25 = pauVar25 + 2;
          auVar64 = a64_TBL(ZEXT816(0),auVar39,_DAT_001f45d0);
          auVar65 = a64_TBL(ZEXT816(0),auVar39,_DAT_001f3040);
          auVar44 = a64_TBL(ZEXT816(0),auVar39,_DAT_001f2b30);
          auVar63 = a64_TBL(ZEXT816(0),auVar39,_DAT_001f25a0);
          auVar39 = a64_TBL(ZEXT816(0),auVar42,_DAT_001f3040);
          auVar45 = a64_TBL(ZEXT816(0),auVar42,_DAT_001f45d0);
          auVar46 = a64_TBL(ZEXT816(0),auVar42,_DAT_001f2b30);
          auVar42 = a64_TBL(ZEXT816(0),auVar42,_DAT_001f25a0);
          lVar36 = lVar36 + (auVar64._8_8_ & 0xffffffff);
          lVar37 = lVar37 + (auVar64._8_8_ >> 0x20);
          lVar47 = lVar47 + (auVar65._8_8_ & 0xffffffff);
          lVar48 = lVar48 + (auVar65._8_8_ >> 0x20);
          lVar20 = lVar20 + (ulong)auVar65._0_4_;
          lVar28 = lVar28 + (ulong)auVar65._4_4_;
          uVar18 = uVar18 + auVar64._0_4_;
          lVar29 = lVar29 + (ulong)auVar64._4_4_;
          lVar32 = lVar32 + (ulong)auVar44._0_4_;
          lVar33 = lVar33 + (ulong)auVar44._4_4_;
          lVar34 = lVar34 + (auVar44._8_8_ & 0xffffffff);
          lVar35 = lVar35 + (auVar44._8_8_ >> 0x20);
          lVar30 = lVar30 + (ulong)auVar63._0_4_;
          lVar31 = lVar31 + (ulong)auVar63._4_4_;
          lVar51 = lVar51 + (auVar63._8_8_ & 0xffffffff);
          lVar52 = lVar52 + (auVar63._8_8_ >> 0x20);
          lVar57 = lVar57 + (auVar45._8_8_ & 0xffffffff);
          lVar58 = lVar58 + (auVar45._8_8_ >> 0x20);
          lVar59 = lVar59 + (auVar39._8_8_ & 0xffffffff);
          lVar60 = lVar60 + (auVar39._8_8_ >> 0x20);
          lVar41 = lVar41 + (ulong)auVar39._0_4_;
          lVar43 = lVar43 + (ulong)auVar39._4_4_;
          lVar38 = lVar38 + (ulong)auVar45._0_4_;
          lVar40 = lVar40 + (ulong)auVar45._4_4_;
          lVar53 = lVar53 + (ulong)auVar46._0_4_;
          lVar54 = lVar54 + (ulong)auVar46._4_4_;
          lVar55 = lVar55 + (auVar46._8_8_ & 0xffffffff);
          lVar56 = lVar56 + (auVar46._8_8_ >> 0x20);
          lVar49 = lVar49 + (ulong)auVar42._0_4_;
          lVar50 = lVar50 + (ulong)auVar42._4_4_;
          lVar61 = lVar61 + (auVar42._8_8_ & 0xffffffff);
          lVar62 = lVar62 + (auVar42._8_8_ >> 0x20);
        } while (uVar23 != 0);
        uVar18 = lVar38 + uVar18 + lVar53 + lVar32 + lVar41 + lVar20 + lVar49 + lVar30 +
                 lVar57 + lVar36 + lVar55 + lVar34 + lVar59 + lVar47 + lVar61 + lVar51 +
                 lVar40 + lVar29 + lVar54 + lVar33 + lVar43 + lVar28 + lVar50 + lVar31 +
                 lVar58 + lVar37 + lVar56 + lVar35 + lVar60 + lVar48 + lVar62 + lVar52;
        if (uVar1 == uVar24) goto LAB_0070112c;
        if ((uVar1 & 0x18) == 0) {
          pbVar22 = pbVar3 + uVar24;
          goto LAB_0070111c;
        }
      }
      lVar28 = 0;
      lVar29 = 0;
      lVar30 = 0;
      uVar23 = uVar1 & 0xfffffffffffffff8;
      lVar31 = 0;
      lVar32 = 0;
      lVar33 = 0;
      lVar34 = 0;
      lVar20 = uVar24 - uVar23;
      puVar19 = (ulong *)(pbVar3 + uVar24);
      do {
        auVar44._0_8_ = *puVar19;
        auVar44._8_8_ = 0;
        lVar20 = lVar20 + 8;
        auVar42 = a64_TBL(ZEXT816(0),auVar44,_DAT_001f3040);
        auVar39 = a64_TBL(ZEXT816(0),auVar44,_DAT_001f45d0);
        lVar33 = lVar33 + (auVar42._8_8_ & 0xffffffff);
        lVar34 = lVar34 + (auVar42._8_8_ >> 0x20);
        lVar31 = lVar31 + (auVar39._8_8_ & 0xffffffff);
        lVar32 = lVar32 + (auVar39._8_8_ >> 0x20);
        lVar29 = lVar29 + (ulong)auVar42._0_4_;
        lVar30 = lVar30 + (ulong)auVar42._4_4_;
        uVar18 = uVar18 + auVar39._0_4_;
        lVar28 = lVar28 + (ulong)auVar39._4_4_;
        puVar19 = puVar19 + 1;
      } while (lVar20 != 0);
      uVar18 = uVar18 + lVar29 + lVar31 + lVar33 + lVar28 + lVar30 + lVar32 + lVar34;
      pbVar22 = pbVar3 + uVar23;
      if (uVar1 == uVar23) goto LAB_0070112c;
    }
LAB_0070111c:
    do {
      pbVar21 = pbVar22 + 1;
      uVar18 = uVar18 + *pbVar22;
      pbVar22 = pbVar21;
    } while (pbVar21 != pbVar3 + uVar1);
  }
LAB_0070112c:
  bVar10 = pbVar3[uVar1];
  if ((pbVar3 + uVar18 != (byte *)0x0) || (bVar10 == 0)) {
    FUN_006fc3b0(pbVar4,*pbVar3,pbVar3 + uVar18,bVar10,"parsing",0);
    return (ulong *)0x0;
  }
LAB_007011a0:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/string_view:333: libc++ Hardening assertion __len == 0 || __s != nullptr failed: string_view::string_view(_CharT *, size_t): received nullptr\n"
            );
}


// ===== 007011c4  FUN_007011c4 =====

long FUN_007011c4(undefined8 param_1,void *param_2,int param_3,undefined8 *param_4)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  uVar1 = FUN_006f54a0(param_1,param_3,param_2);
  if ((uVar1 & 1) == 0) {
    lVar2 = FUN_006f5520(param_1,param_2,param_3,param_4);
    return lVar2;
  }
  uVar4 = (ulong)*(char *)((long)param_4 + 0x17);
  uVar1 = (ulong)param_3;
  puVar5 = param_4;
  if ((long)uVar4 < 0) {
    uVar4 = param_4[1];
    if (uVar4 < uVar1) {
      uVar3 = (uint)(byte)((ulong)param_4[2] >> 0x38);
      lVar2 = (param_4[2] & 0x7fffffffffffffff) - 1;
      goto LAB_00701268;
    }
    puVar5 = (undefined8 *)*param_4;
  }
  else {
    if (uVar1 <= uVar4) {
      *(byte *)((long)param_4 + 0x17) = (byte)param_3;
      goto LAB_007012e0;
    }
    lVar2 = 0x16;
    uVar3 = (uint)*(char *)((long)param_4 + 0x17);
LAB_00701268:
    if (lVar2 - uVar4 < uVar1 - uVar4) {
      FUN_0054774c(param_4,lVar2,uVar1 - lVar2,uVar4,uVar4,0,0);
      uVar3 = (uint)*(byte *)((long)param_4 + 0x17);
      param_4[1] = uVar4;
    }
    if ((uVar3 >> 7 & 1) != 0) {
      puVar5 = (undefined8 *)*param_4;
    }
    memset((void *)((long)puVar5 + uVar4),0,uVar1 - uVar4);
    if (-1 < *(char *)((long)param_4 + 0x17)) {
      *(byte *)((long)param_4 + 0x17) = (byte)param_3 & 0x7f;
      goto LAB_007012e0;
    }
  }
  param_4[1] = uVar1;
LAB_007012e0:
  *(undefined1 *)((long)puVar5 + uVar1) = 0;
  if (*(char *)((long)param_4 + 0x17) < '\0') {
    param_4 = (undefined8 *)*param_4;
  }
  memcpy(param_4,param_2,uVar1);
  return (long)param_2 + uVar1;
}


// ===== 00701320  FUN_00701320 =====

undefined8 * FUN_00701320(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar8 = (undefined8 *)*param_1;
  if (param_2 == 0) {
    puVar3 = (undefined8 *)operator_new((ulong)*(uint *)(param_1 + 5));
  }
  else {
    puVar3 = (undefined8 *)FUN_006fdbf0(param_2,(ulong)*(uint *)(param_1 + 5) + 7 & 0x1fffffff8);
  }
  if (-1 < *(char *)((long)param_1 + 0x2c)) {
    uVar1 = *(uint *)(param_1 + 5);
    uVar4 = (ulong)uVar1;
    if (*(char *)((long)param_1 + 0x2c) == '\0') {
      if (uVar1 < 0x21) {
        *(undefined8 *)((long)puVar3 + (uVar4 - 0x10)) = 0;
        *(undefined8 *)((long)puVar3 + (uVar4 - 8)) = 0;
      }
      else if (uVar1 < 0x41) {
        puVar3[2] = 0;
        puVar3[3] = 0;
        *(undefined8 *)((long)puVar3 + (uVar4 - 0x18)) = 0;
        *(undefined8 *)((long)puVar3 + (uVar4 - 0x20)) = 0;
        *(undefined8 *)((long)puVar3 + (uVar4 - 8)) = 0;
        *(undefined8 *)((long)puVar3 + (uVar4 - 0x10)) = 0;
      }
      else {
        if (0x50 < uVar1) {
          puVar5 = puVar3 + 10;
          uVar7 = 0x50;
          do {
            uVar7 = uVar7 + 0x40;
            Hint_Prefetch(puVar5,2,0,0);
            puVar5[-7] = 0;
            puVar5[-8] = 0;
            puVar5[-5] = 0;
            puVar5[-6] = 0;
            puVar5[-3] = 0;
            puVar5[-4] = 0;
            puVar5[-1] = 0;
            puVar5[-2] = 0;
            puVar5 = puVar5 + 8;
          } while (uVar7 < uVar4);
        }
        *(undefined8 *)((long)puVar3 + (uVar4 - 0x38)) = 0;
        *(undefined8 *)((long)puVar3 + (uVar4 - 0x40)) = 0;
        *(undefined8 *)((long)puVar3 + (uVar4 - 0x28)) = 0;
        *(undefined8 *)((long)puVar3 + (uVar4 - 0x30)) = 0;
        *(undefined8 *)((long)puVar3 + (uVar4 - 0x18)) = 0;
        *(undefined8 *)((long)puVar3 + (uVar4 - 0x20)) = 0;
        *(undefined8 *)((long)puVar3 + (uVar4 - 8)) = 0;
        *(undefined8 *)((long)puVar3 + (uVar4 - 0x10)) = 0;
      }
    }
    else if (uVar1 < 0x21) {
      uVar9 = *(undefined8 *)((long)puVar8 + (uVar4 - 0x10));
      *(undefined8 *)((long)puVar3 + (uVar4 - 8)) = *(undefined8 *)((long)puVar8 + (uVar4 - 8));
      *(undefined8 *)((long)puVar3 + (uVar4 - 0x10)) = uVar9;
    }
    else if (uVar1 < 0x41) {
      uVar9 = puVar8[2];
      puVar3[3] = puVar8[3];
      puVar3[2] = uVar9;
      uVar11 = *(undefined8 *)((long)puVar8 + (uVar4 - 0x20));
      uVar10 = *(undefined8 *)((long)puVar8 + (uVar4 - 8));
      uVar9 = *(undefined8 *)((long)puVar8 + (uVar4 - 0x10));
      *(undefined8 *)((long)puVar3 + (uVar4 - 0x18)) =
           *(undefined8 *)((long)puVar8 + (uVar4 - 0x18));
      *(undefined8 *)((long)puVar3 + (uVar4 - 0x20)) = uVar11;
      *(undefined8 *)((long)puVar3 + (uVar4 - 8)) = uVar10;
      *(undefined8 *)((long)puVar3 + (uVar4 - 0x10)) = uVar9;
    }
    else {
      if (0x50 < uVar1) {
        puVar5 = puVar3 + 10;
        puVar6 = puVar8 + 10;
        uVar7 = 0x50;
        do {
          Hint_Prefetch(puVar6,0,0,0);
          Hint_Prefetch(puVar5,2,0,0);
          uVar7 = uVar7 + 0x40;
          puVar2 = puVar6 + -3;
          uVar11 = puVar6[-4];
          uVar10 = puVar6[-1];
          uVar9 = puVar6[-2];
          uVar13 = puVar6[-7];
          uVar12 = puVar6[-8];
          uVar15 = puVar6[-5];
          uVar14 = puVar6[-6];
          puVar6 = puVar6 + 8;
          puVar5[-3] = *puVar2;
          puVar5[-4] = uVar11;
          puVar5[-1] = uVar10;
          puVar5[-2] = uVar9;
          puVar5[-7] = uVar13;
          puVar5[-8] = uVar12;
          puVar5[-5] = uVar15;
          puVar5[-6] = uVar14;
          puVar5 = puVar5 + 8;
        } while (uVar7 < uVar4);
      }
      uVar11 = *(undefined8 *)((long)puVar8 + (uVar4 - 0x20));
      uVar10 = *(undefined8 *)((long)puVar8 + (uVar4 - 8));
      uVar9 = *(undefined8 *)((long)puVar8 + (uVar4 - 0x10));
      uVar13 = *(undefined8 *)((long)puVar8 + (uVar4 - 0x38));
      uVar12 = *(undefined8 *)((long)puVar8 + (uVar4 - 0x40));
      uVar15 = *(undefined8 *)((long)puVar8 + (uVar4 - 0x28));
      uVar14 = *(undefined8 *)((long)puVar8 + (uVar4 - 0x30));
      *(undefined8 *)((long)puVar3 + (uVar4 - 0x18)) =
           *(undefined8 *)((long)puVar8 + (uVar4 - 0x18));
      *(undefined8 *)((long)puVar3 + (uVar4 - 0x20)) = uVar11;
      *(undefined8 *)((long)puVar3 + (uVar4 - 8)) = uVar10;
      *(undefined8 *)((long)puVar3 + (uVar4 - 0x10)) = uVar9;
      *(undefined8 *)((long)puVar3 + (uVar4 - 0x38)) = uVar13;
      *(undefined8 *)((long)puVar3 + (uVar4 - 0x40)) = uVar12;
      *(undefined8 *)((long)puVar3 + (uVar4 - 0x28)) = uVar15;
      *(undefined8 *)((long)puVar3 + (uVar4 - 0x30)) = uVar14;
    }
    if (param_2 != 0) {
      for (uVar4 = param_1[6]; uVar4 != 0; uVar4 = uVar4 - 1 & uVar4) {
        uVar7 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        puVar3[LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20)] = param_2;
      }
    }
    *puVar3 = *puVar8;
    puVar3[1] = param_2;
    return puVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x007014f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar8 = (undefined8 *)(*(code *)param_1[6])(puVar8,puVar3,param_2);
  return puVar8;
}


// ===== 007014f4  FUN_007014f4 =====

void FUN_007014f4(long param_1,undefined4 param_2,int param_3)

{
  long lVar1;
  
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    lVar1 = FUN_006dcbb4();
  }
  else {
    lVar1 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
  }
  FUN_006f5c6c(param_2,(long)param_3,lVar1);
  return;
}


// ===== 00701540  FUN_00701540 =====

void FUN_00701540(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    lVar1 = FUN_006dcbb4();
  }
  else {
    lVar1 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
  }
  FUN_006f5ef8(param_2,param_3,param_4,lVar1);
  return;
}


// ===== 0070159c  switchD_006fe28c::caseD_1 =====

ulong * switchD_006fe28c::caseD_1
                  (long param_1,ulong *param_2,undefined8 *param_3,ulong param_4,ushort *param_5,
                  undefined8 param_6)

{
  uint *puVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ulong *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  code *UNRECOVERED_JUMPTABLE;
  ulong local_68;
  
  puVar1 = (uint *)((long)param_5 + (param_4 >> 0x20));
  uVar5 = *(ushort *)((long)puVar1 + 10);
  uVar2 = uVar5 & 0x30;
  if (uVar2 == 0x20) {
    puVar6 = (ulong *)FUN_007040c0(param_1,param_2,param_3,param_4,param_5,param_6);
    return puVar6;
  }
  if ((param_4 & 7) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_5 + 0x18);
    puVar6 = param_2;
    goto LAB_00701644;
  }
  uVar8 = *param_2;
  if (((uint)uVar8 >> 7 & 1) == 0) {
    uVar8 = uVar8 & 0x7f;
    puVar6 = (ulong *)((long)param_2 + 1);
  }
  else if (((uint)uVar8 >> 0xf & 1) == 0) {
    puVar6 = (ulong *)((long)param_2 + 2);
    uVar8 = uVar8 & 0x7f | (uVar8 >> 8 & 0x7f) << 7;
  }
  else {
    puVar6 = (ulong *)FUN_00705258(param_2,&local_68);
    uVar8 = local_68;
  }
  local_68 = uVar8;
  if (puVar6 == (ulong *)0x0) {
    puVar6 = (ulong *)caseD_8(param_1);
    return puVar6;
  }
  uVar3 = uVar5 & 0x1c0;
  uVar4 = uVar5 & 0x600;
  if (uVar3 == 0xc0) {
    if (uVar4 == 0x200) {
      uVar8 = -(uVar8 & 1) ^ uVar8 >> 1;
    }
  }
  else if (uVar3 == 0x80) {
    uVar10 = (uint)uVar8;
    if ((uVar5 >> 10 & 1) == 0) {
      if (uVar4 == 0x200) {
        uVar8 = (long)(int)(-(uVar10 & 1) ^ uVar10 >> 1);
      }
    }
    else {
      uVar7 = *(undefined8 *)
               ((long)param_5 + (ulong)(ushort)puVar1[2] * 8 + (ulong)*(uint *)(param_5 + 0xc));
      if (uVar4 == 0x600) {
        if (((int)uVar10 < (int)uVar7) || ((int)((ulong)uVar7 >> 0x20) < (int)uVar10)) {
LAB_00701824:
          puVar6 = (ulong *)FUN_006ff8bc(param_1,param_2,param_3,param_4,param_5,param_6);
          return puVar6;
        }
      }
      else {
        uVar9 = FUN_0071211c(uVar8 & 0xffffffff);
        if ((uVar9 & 1) == 0) goto LAB_00701824;
      }
    }
  }
  if (uVar2 == 0x30) {
    FUN_00700334(param_5,0,puVar1,param_4 >> 3 & 0x1fffffff);
    if (uVar3 != 0xc0) goto LAB_00701774;
LAB_00701738:
    *(ulong *)(param_1 + (ulong)*puVar1) = uVar8;
  }
  else {
    if (uVar2 == 0x10) {
      uVar9 = (ulong)(puVar1[1] >> 3) & 0x1ffffffc;
      *(uint *)(param_1 + uVar9) = 1 << (ulong)(puVar1[1] & 0x1f) | *(uint *)(param_1 + uVar9);
    }
    if (uVar3 == 0xc0) goto LAB_00701738;
LAB_00701774:
    if (uVar3 == 0x80) {
      *(int *)(param_1 + (ulong)*puVar1) = (int)uVar8;
    }
    else {
      *(bool *)(param_1 + (ulong)*puVar1) = uVar8 != 0;
    }
  }
  if ((ulong *)*param_3 <= puVar6) {
    uVar8 = (ulong)*param_5;
    if (uVar8 != 0) {
      *(uint *)(param_1 + uVar8) = *(uint *)(param_1 + uVar8) | (uint)param_6;
    }
    return puVar6;
  }
  uVar8 = (ulong)(ushort)*puVar6 & (ulong)(byte)param_5[4];
  UNRECOVERED_JUMPTABLE = *(code **)(param_5 + uVar8 + 0x1c);
  param_4 = *(ulong *)(param_5 + uVar8 + 0x20) ^ (ulong)(ushort)*puVar6;
LAB_00701644:
                    /* WARNING: Could not recover jumptable at 0x0070166c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar6 = (ulong *)(*UNRECOVERED_JUMPTABLE)(param_1,puVar6,param_3,param_4,param_5,param_6);
  return puVar6;
}


// ===== 007018bc  switchD_006fe28c::caseD_2 =====

void switchD_006fe28c::caseD_2
               (long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,ushort *param_5,
               uint param_6)

{
  uint *puVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  ulong uVar5;
  undefined8 local_38;
  long lStack_30;
  ushort *local_28;
  ulong uStack_20;
  long local_18;
  
  if ((param_4 & 7) != 2) {
    FUN_007040c0(param_1,param_2,param_3);
    return;
  }
  puVar1 = (uint *)((long)param_5 + (param_4 >> 0x20));
  uVar2 = puVar1[1];
  uVar3 = *(ushort *)((long)puVar1 + 10);
  if (uVar2 != 0xffffffff) {
    uVar5 = (ulong)(uVar2 >> 3) & 0x1ffffffc;
    *(uint *)(param_1 + uVar5) = *(uint *)(param_1 + uVar5) | 1 << (ulong)(uVar2 & 0x1f);
  }
  uVar5 = (ulong)*param_5;
  if (uVar5 != 0) {
    *(uint *)(param_1 + uVar5) = *(uint *)(param_1 + uVar5) | param_6;
  }
  uVar4 = uVar3 >> 6 & 7;
  if (uVar4 == 0) {
    FUN_007061f0(param_3,param_2,param_1 + (ulong)*puVar1,0);
    return;
  }
  if (uVar4 != 2) {
    if ((uVar3 & 0x600) != 0) {
      FUN_007052f8();
      return;
    }
    FUN_00704fbc(param_3,param_2,param_1 + (ulong)*puVar1,0);
    return;
  }
  uVar2 = (uVar3 & 0x600) >> 9;
  local_18 = param_1 + (ulong)*puVar1;
  if (uVar2 < 2) {
    if (uVar2 == 0) {
      FUN_0070559c();
      return;
    }
    FUN_00705838(param_3,param_2,local_18,0);
    return;
  }
  lStack_30 = param_1;
  local_28 = param_5;
  uStack_20 = param_4;
  if (uVar2 == 2) {
    local_38 = *(undefined8 *)
                ((long)param_5 + (ulong)(ushort)puVar1[2] * 8 + (ulong)*(uint *)(param_5 + 0xc));
    FUN_00705adc(param_3,param_2,&local_38,0);
  }
  else {
    local_38 = *(undefined8 *)
                ((long)param_5 + (ulong)(ushort)puVar1[2] * 8 + (ulong)*(uint *)(param_5 + 0xc));
    FUN_00705efc(param_3,param_2,&local_38,0);
  }
  return;
}


// ===== 00701a0c  switchD_006fe28c::caseD_3 =====

ushort * switchD_006fe28c::caseD_3
                   (long param_1,ushort *param_2,undefined8 *param_3,ulong param_4,ushort *param_5,
                   undefined8 param_6)

{
  uint *puVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  ushort *puVar5;
  long lVar6;
  ulong uVar7;
  code *UNRECOVERED_JUMPTABLE;
  
  puVar1 = (uint *)((long)param_5 + (param_4 >> 0x20));
  uVar2 = *(ushort *)((long)puVar1 + 10) & 0x30;
  if (uVar2 == 0x20) {
    puVar5 = (ushort *)FUN_0070649c(param_1,param_2,param_3,param_4,param_5,param_6);
    return puVar5;
  }
  uVar3 = *(ushort *)((long)puVar1 + 10) & 0x1c0;
  uVar4 = (uint)param_4 & 7;
  if (uVar3 == 0xc0) {
    if (uVar4 == 1) {
LAB_00701ab0:
      if (uVar2 == 0x30) {
        FUN_00700334(param_5,0,puVar1,(uint)param_4 >> 3,param_5,param_1);
      }
      else if (uVar2 == 0x10) {
        uVar7 = (ulong)(puVar1[1] >> 3) & 0x1ffffffc;
        *(uint *)(param_1 + uVar7) = 1 << (ulong)(puVar1[1] & 0x1f) | *(uint *)(param_1 + uVar7);
      }
      if (uVar3 == 0xc0) {
        *(undefined8 *)(param_1 + (ulong)*puVar1) = *(undefined8 *)param_2;
        lVar6 = 8;
      }
      else {
        *(undefined4 *)(param_1 + (ulong)*puVar1) = *(undefined4 *)param_2;
        lVar6 = 4;
      }
      param_2 = (ushort *)((long)param_2 + lVar6);
      if ((ushort *)*param_3 <= param_2) {
        uVar7 = (ulong)*param_5;
        if (uVar7 != 0) {
          *(uint *)(param_1 + uVar7) = *(uint *)(param_1 + uVar7) | (uint)param_6;
        }
        return param_2;
      }
      uVar7 = (ulong)*param_2 & (ulong)(byte)param_5[4];
      UNRECOVERED_JUMPTABLE = *(code **)(param_5 + uVar7 + 0x1c);
      param_4 = *(ulong *)(param_5 + uVar7 + 0x20) ^ (ulong)*param_2;
      goto LAB_00701b54;
    }
  }
  else if (uVar4 == 5) goto LAB_00701ab0;
  UNRECOVERED_JUMPTABLE = *(code **)(param_5 + 0x18);
LAB_00701b54:
                    /* WARNING: Could not recover jumptable at 0x00701b78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar5 = (ushort *)(*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4,param_5,param_6);
  return puVar5;
}


// ===== 00701bb0  switchD_006fe28c::caseD_4 =====

ushort * switchD_006fe28c::caseD_4
                   (long param_1,char *param_2,undefined8 *param_3,ulong param_4,ushort *param_5,
                   undefined8 param_6)

{
  uint *puVar1;
  uint uVar2;
  ushort uVar3;
  char cVar4;
  ushort *puVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  if ((param_4 & 7) != 2) {
    puVar5 = (ushort *)FUN_0070649c(param_1,param_2,param_3,param_4,param_5,param_6);
    return puVar5;
  }
  puVar1 = (uint *)((long)param_5 + (param_4 >> 0x20));
  uVar2 = puVar1[1];
  uVar3 = *(ushort *)((long)puVar1 + 10);
  if (uVar2 != 0xffffffff) {
    uVar6 = (ulong)(uVar2 >> 3) & 0x1ffffffc;
    *(uint *)(param_1 + uVar6) = *(uint *)(param_1 + uVar6) | 1 << (ulong)(uVar2 & 0x1f);
  }
  cVar4 = *param_2;
  if (cVar4 < '\0') {
    auVar7 = FUN_006f6214(param_2,cVar4);
  }
  else {
    auVar7[8] = cVar4;
    auVar7._0_8_ = param_2 + 1;
    auVar7._9_7_ = 0;
  }
  if ((uVar3 & 0x1c0) == 0xc0) {
    puVar5 = (ushort *)FUN_006f9cf4();
  }
  else {
    puVar5 = (ushort *)FUN_006f9728(param_3,auVar7._0_8_,auVar7._8_8_,param_1 + (ulong)*puVar1);
  }
  if (puVar5 != (ushort *)0x0) {
    if (puVar5 < (ushort *)*param_3) {
      uVar6 = (ulong)*puVar5 & (ulong)(byte)param_5[4];
                    /* WARNING: Could not recover jumptable at 0x00701ce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar5 = (ushort *)
               (**(code **)(param_5 + uVar6 + 0x1c))
                         (param_1,puVar5,param_3,*(ulong *)(param_5 + uVar6 + 0x20) ^ (ulong)*puVar5
                          ,param_5,param_6);
      return puVar5;
    }
    uVar6 = (ulong)*param_5;
    if (uVar6 != 0) {
      *(uint *)(param_1 + uVar6) = *(uint *)(param_1 + uVar6) | (uint)param_6;
    }
    return puVar5;
  }
  puVar5 = (ushort *)caseD_8(param_1);
  return puVar5;
}


// ===== 00701d38  switchD_006fe28c::caseD_5 =====

ushort * switchD_006fe28c::caseD_5
                   (long param_1,ushort *param_2,undefined8 *param_3,ulong param_4,ushort *param_5,
                   undefined8 param_6)

{
  uint *puVar1;
  ushort uVar2;
  ushort uVar3;
  char cVar4;
  uint uVar5;
  ushort *puVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  int iVar10;
  long *plVar11;
  ulong uVar12;
  code *UNRECOVERED_JUMPTABLE;
  ulong *puVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  if (((uint)param_4 & 7) != 2) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_5 + 0x18);
    goto LAB_00701dc4;
  }
  puVar1 = (uint *)((long)param_5 + (param_4 >> 0x20));
  uVar3 = *(ushort *)((long)puVar1 + 10);
  uVar2 = uVar3 & 0x30;
  if (uVar2 == 0x20) {
    puVar6 = (ushort *)FUN_00706804(param_1,param_2,param_3,param_4,param_5,param_6);
    return puVar6;
  }
  if (uVar2 == 0x10) {
    uVar12 = (ulong)(puVar1[1] >> 3) & 0x1ffffffc;
    *(uint *)(param_1 + uVar12) = 1 << (ulong)(puVar1[1] & 0x1f) | *(uint *)(param_1 + uVar12);
  }
  else if (uVar2 == 0x30) {
    FUN_00700334(param_5,0,puVar1,(uint)param_4 >> 3,param_5,param_1);
  }
  puVar13 = (ulong *)(param_1 + (ulong)*puVar1);
  if ((uVar3 & 0x1c0) == 0x140) {
    uVar12 = *(ulong *)(param_1 + 8);
    if ((uVar12 & 1) != 0) {
      uVar12 = *(ulong *)(uVar12 & 0xfffffffffffffffe);
    }
    cVar4 = (char)*param_2;
    if (cVar4 < '\0') {
      auVar16 = FUN_006f6214(param_2,cVar4);
      param_2 = auVar16._0_8_;
      if (param_2 != (ushort *)0x0) goto LAB_00701f58;
LAB_00701f84:
      plVar7 = (long *)*puVar13;
      uVar5 = (uint)plVar7;
    }
    else {
      auVar16[8] = cVar4;
      auVar16._0_8_ = (long)param_2 + 1;
      auVar16._9_7_ = 0;
      if ((long)param_2 + 1 == 0) {
        param_2 = (ushort *)0x0;
        goto LAB_00701f84;
      }
LAB_00701f58:
      lVar14 = auVar16._0_8_;
      iVar10 = auVar16._8_4_;
      if ((*(int *)(param_3 + 1) - auVar16._0_4_) + 0x10 < iVar10) {
        param_2 = (ushort *)FUN_006f71b4(param_3,lVar14,auVar16._8_8_,puVar13,uVar12);
        goto LAB_00701f84;
      }
      if (iVar10 < 0) {
LAB_00702110:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/string_view:331: libc++ Hardening assertion __len <= static_cast<size_type>(numeric_limits<difference_type>::max()) failed: string_view::string_view(_CharT *, size_t): length does not fit in difference_type\n"
                  );
      }
      FUN_006fc8b0(puVar13,lVar14,(long)iVar10,uVar12,7);
      param_2 = (ushort *)(lVar14 + iVar10);
      plVar7 = (long *)*puVar13;
      uVar5 = (uint)plVar7;
    }
    if ((uVar5 >> 1 & 1) == 0) {
      if (((ulong)plVar7 & 1) == 0) {
        uVar12 = (ulong)plVar7 >> 2 & 0x3f;
        plVar11 = (long *)((long)puVar13 + 1);
      }
      else {
        plVar11 = *(long **)((long)plVar7 - 1);
        uVar12 = (ulong)*(uint *)((long)plVar7 + 7);
        if ((plVar11 == (long *)0x0) && (*(uint *)((long)plVar7 + 7) != 0)) goto LAB_007020fc;
      }
    }
    else {
      uVar12 = (ulong)*(byte *)((long)plVar7 - 2);
      plVar11 = plVar7;
      if ((plVar7 == (long *)0x0) && (*(byte *)((long)plVar7 - 2) != 0)) {
LAB_007020fc:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/string_view:333: libc++ Hardening assertion __len == 0 || __s != nullptr failed: string_view::string_view(_CharT *, size_t): received nullptr\n"
                  );
      }
    }
LAB_00702010:
    uVar12 = FUN_00700564(plVar11,uVar12,param_5,puVar1,uVar3 & 0x600);
  }
  else {
    if ((uVar3 & 0x1c0) != 0x80) {
      uVar12 = *(ulong *)(param_1 + 8);
      if ((uVar12 & 1) == 0) {
        if (uVar12 == 0) goto LAB_007020a4;
LAB_00701eb0:
        param_2 = (ushort *)FUN_00714270(param_3,param_2,puVar13);
      }
      else {
        if (*(long *)(uVar12 & 0xfffffffffffffffe) != 0) goto LAB_00701eb0;
LAB_007020a4:
        uVar9 = FUN_007141a0(puVar13,0);
        param_2 = (ushort *)FUN_006f62b8(uVar9,param_2,param_3);
      }
      if (param_2 == (ushort *)0x0) {
        FUN_00706c04(param_1,puVar13);
        goto LAB_007020d0;
      }
      plVar7 = (long *)(*puVar13 & 0xfffffffffffffffc);
      uVar12 = (ulong)*(char *)((long)plVar7 + 0x17);
      plVar11 = plVar7;
      if ((long)uVar12 < 0) {
        plVar11 = (long *)*plVar7;
        uVar12 = plVar7[1];
      }
      goto LAB_00702010;
    }
    if (uVar2 == 0x30) {
      puVar13 = (ulong *)*puVar13;
    }
    cVar4 = (char)*param_2;
    if (cVar4 < '\0') {
      auVar15 = FUN_006f6214(param_2,cVar4);
      lVar14 = auVar15._0_8_;
    }
    else {
      lVar14 = (long)param_2 + 1;
      auVar15[8] = cVar4;
      auVar15._0_8_ = lVar14;
      auVar15._9_7_ = 0;
    }
    if (lVar14 == 0) goto LAB_007020d0;
    uVar12 = auVar15._8_8_;
    lVar14 = auVar15._0_8_;
    iVar10 = (*(int *)(param_3 + 1) - auVar15._0_4_) + 0x10;
    if (0x1ff < iVar10) {
      iVar10 = 0x200;
    }
    uVar8 = FUN_006f548c(param_3,uVar12 & 0xffffffff,iVar10);
    if ((uVar8 & 1) == 0) {
      param_2 = (ushort *)FUN_006f5798(param_3,lVar14,uVar12 & 0xffffffff,puVar13);
    }
    else {
      if (auVar15._8_4_ < 0) goto LAB_00702110;
      FUN_006f1330(puVar13,lVar14,uVar12 & 0xffffffff);
      param_2 = (ushort *)(lVar14 + (uVar12 & 0xffffffff));
    }
    if (param_2 == (ushort *)0x0) goto LAB_007020d0;
    uVar12 = 1;
  }
  if (((uVar12 & 1) != 0) && (param_2 != (ushort *)0x0)) {
    if ((ushort *)*param_3 <= param_2) {
      uVar12 = (ulong)*param_5;
      if (uVar12 != 0) {
        *(uint *)(param_1 + uVar12) = *(uint *)(param_1 + uVar12) | (uint)param_6;
      }
      return param_2;
    }
    uVar12 = (ulong)*param_2 & (ulong)(byte)param_5[4];
    UNRECOVERED_JUMPTABLE = *(code **)(param_5 + uVar12 + 0x1c);
    param_4 = *(ulong *)(param_5 + uVar12 + 0x20) ^ (ulong)*param_2;
LAB_00701dc4:
                    /* WARNING: Could not recover jumptable at 0x00701df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar6 = (ushort *)(*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4,param_5,param_6);
    return puVar6;
  }
LAB_007020d0:
  puVar6 = (ushort *)caseD_8(param_1);
  return puVar6;
}


// ===== 00702124  switchD_006fe28c::caseD_6 =====

undefined8
switchD_006fe28c::caseD_6
          (long param_1,char *param_2,long *param_3,ulong param_4,ushort *param_5,undefined8 param_6
          )

{
  uint *puVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  long *plVar13;
  long *plVar14;
  undefined1 auVar15 [12];
  char *pcVar8;
  
  puVar1 = (uint *)((long)param_5 + (param_4 >> 0x20));
  uVar3 = *(ushort *)((long)puVar1 + 10);
  uVar4 = uVar3 & 0x30;
  if (uVar4 == 0x20) {
    if ((uVar3 & 0x1c0) == 0x40) {
      uVar7 = FUN_0070704c(param_1,param_2,param_3,param_4,param_5,param_6);
      return uVar7;
    }
    if ((uVar3 & 0x1c0) == 0) {
      uVar7 = FUN_00706d84(param_1,param_2,param_3,param_4,param_5,param_6);
      return uVar7;
    }
  }
  else {
    uVar12 = (uint)param_4;
    if ((uVar3 & 0x1c0) == 0x40) {
      if ((uVar12 & 7) == 3) goto LAB_007021dc;
    }
    else if (((uVar3 & 0x1c0) == 0) && ((uVar12 & 7) == 2)) {
LAB_007021dc:
      plVar13 = *(long **)((long)param_5 +
                          (ulong)(ushort)puVar1[2] * 8 + (ulong)*(uint *)(param_5 + 0xc));
      if ((uVar3 & 0x600) != 0x400) {
        plVar14 = plVar13;
        if ((uVar3 & 0x600) != 0x200) {
          plVar14 = (long *)*plVar13;
        }
        lVar9 = (**(code **)(*plVar14 + 0x20))(plVar14);
        plVar13 = *(long **)(lVar9 + 8);
        if (plVar13 == (long *)0x0) {
          plVar13 = (long *)(**(code **)(*(long *)(lVar9 + 0x58) + 0x10))(plVar14);
        }
      }
      if (uVar4 == 0x30) {
        FUN_00700334(param_5,plVar13,puVar1,uVar12 >> 3);
        uVar4 = *param_5;
      }
      else {
        if (uVar4 == 0x10) {
          uVar11 = (ulong)(puVar1[1] >> 3) & 0x1ffffffc;
          *(uint *)(param_1 + uVar11) = 1 << (ulong)(puVar1[1] & 0x1f) | *(uint *)(param_1 + uVar11)
          ;
        }
        uVar4 = *param_5;
      }
      uVar11 = (ulong)uVar4;
      if (uVar11 != 0) {
        *(uint *)(param_1 + uVar11) = *(uint *)(param_1 + uVar11) | (uint)param_6;
      }
      uVar11 = (ulong)*puVar1;
      if (*(long *)(param_1 + uVar11) == 0) {
        uVar10 = *(ulong *)(param_1 + 8);
        if ((uVar10 & 1) != 0) {
          uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
        }
        uVar7 = FUN_00701320(plVar13[4],uVar10);
        *(undefined8 *)(param_1 + uVar11) = uVar7;
      }
      if ((uVar3 & 0x1c0) == 0x40) {
        iVar5 = (int)param_3[0xb] + -1;
        *(int *)(param_3 + 0xb) = iVar5;
        if (-1 < iVar5) {
          *(int *)((long)param_3 + 0x5c) = *(int *)((long)param_3 + 0x5c) + 1;
          uVar7 = FUN_006fe0e8(*(undefined8 *)(param_1 + uVar11),param_2,param_3,plVar13);
          uVar6 = DAT_001f5550;
          uVar2 = *(uint *)(param_3 + 10);
          *(undefined4 *)(param_3 + 10) = 0;
          if (uVar2 != uVar12) {
            uVar7 = 0;
          }
          param_3[0xb] = CONCAT44((int)((ulong)param_3[0xb] >> 0x20) + (int)((ulong)uVar6 >> 0x20),
                                  (int)param_3[0xb] + (int)uVar6);
          return uVar7;
        }
      }
      else {
        if (*param_2 < '\0') {
          auVar15 = FUN_006f6214(param_2);
          pcVar8 = auVar15._0_8_;
        }
        else {
          pcVar8 = param_2 + 1;
          auVar15[8] = *param_2;
          auVar15._0_8_ = pcVar8;
          auVar15._9_3_ = 0;
        }
        if (pcVar8 != (char *)0x0) {
          if (0 < (int)param_3[0xb]) {
            *(int *)(param_3 + 0xb) = (int)param_3[0xb] + -1;
            uVar12 = auVar15._8_4_ + (auVar15._0_4_ - (int)param_3[1]);
            iVar5 = *(int *)((long)param_3 + 0x1c);
            *(uint *)((long)param_3 + 0x1c) = uVar12;
            *param_3 = param_3[1] + (long)(int)(uVar12 & (int)uVar12 >> 0x1f);
            uVar7 = FUN_006fe0e8(*(undefined8 *)(param_1 + uVar11),auVar15._0_8_,param_3,plVar13);
            uVar12 = *(int *)((long)param_3 + 0x1c) + (iVar5 - uVar12);
            *(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1;
            *(uint *)((long)param_3 + 0x1c) = uVar12;
            if ((int)param_3[10] == 0) {
              *param_3 = param_3[1] + (long)(int)(uVar12 & (int)uVar12 >> 0x1f);
              return uVar7;
            }
          }
        }
      }
      return 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00702328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (**(code **)(param_5 + 0x18))(param_1,param_2,param_3,param_4,param_5,param_6);
  return uVar7;
}


// ===== 00702490  switchD_006fe28c::caseD_7 =====

ushort * switchD_006fe28c::caseD_7
                   (long param_1,ushort *param_2,long *param_3,ulong param_4,ushort *param_5,
                   undefined8 param_6)

{
  uint *puVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  long lVar10;
  void *pvVar11;
  ushort *puVar13;
  undefined8 *puVar14;
  uint uVar15;
  uint *puVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong *puVar20;
  undefined1 auVar21 [12];
  long lVar12;
  
  puVar1 = (uint *)((long)param_5 + (param_4 >> 0x20));
  lVar2 = (long)param_5 + (ulong)(ushort)puVar1[2] * 8 + (ulong)*(uint *)(param_5 + 0xc);
  uVar5 = *(uint *)(lVar2 + 1);
  if (((uVar5 >> 0x18 & 1) == 0) || (((uint)param_4 & 7) != 2)) {
    puVar13 = (ushort *)caseD_0(param_1,param_2,param_3,param_4,param_5);
    return puVar13;
  }
  puVar20 = (ulong *)(param_1 + (ulong)*puVar1);
  if ((uVar5 >> 0x19 & 1) == 0) {
    if ((*puVar20 & 1) != 0) {
      (**(code **)PTR_DAT_00d52588)(puVar20,1);
    }
    puVar20 = puVar20 + 1;
  }
  uVar15 = puVar1[1];
  if (uVar15 != 0xffffffff) {
    uVar17 = (ulong)(uVar15 >> 3) & 0x1ffffffc;
    *(uint *)(param_1 + uVar17) = *(uint *)(param_1 + uVar17) | 1 << (ulong)(uVar15 & 0x1f);
  }
  do {
    if (puVar20[3] == 0) {
      pvVar11 = operator_new((ulong)*(ushort *)((long)puVar20 + 0xc));
    }
    else {
      pvVar11 = (void *)FUN_006fdbf0(puVar20[3],*(ushort *)((long)puVar20 + 0xc) + 7 & 0x1fff8);
    }
    uVar6 = *(ushort *)((long)puVar20 + 0xc);
    puVar14 = (undefined8 *)((long)pvVar11 + 8);
    *puVar14 = 0;
    *(undefined8 *)((long)pvVar11 + ((ulong)uVar6 - 8)) = 0;
    if ((*(byte *)((long)puVar20 + 0xf) & 0xf) == 5) {
      uVar17 = puVar20[3];
      *puVar14 = 0;
      *(undefined8 *)((long)pvVar11 + 0x10) = 0;
      *(undefined8 *)((long)pvVar11 + 0x18) = 0;
      if ((puVar14 != (undefined8 *)0x0) && (uVar17 != 0)) {
        FUN_006fda80(uVar17,puVar14,FUN_00707a00);
      }
    }
    bVar9 = *(byte *)((long)puVar20 + 0xf) >> 4;
    if (4 < bVar9) {
      if (bVar9 == 6) {
        FUN_00707a24(*(undefined8 *)(*(long *)(lVar2 + 8) + 0x20),
                     (long)pvVar11 + (ulong)*(byte *)((long)puVar20 + 0xe),puVar20[3]);
      }
      else {
        uVar17 = puVar20[3];
        puVar14 = (undefined8 *)((long)pvVar11 + (ulong)*(byte *)((long)puVar20 + 0xe));
        *puVar14 = 0;
        puVar14[1] = 0;
        puVar14[2] = 0;
        if ((uVar17 != 0) && (puVar14 != (undefined8 *)0x0)) {
          FUN_006fda80(uVar17,puVar14,FUN_00707a00);
        }
      }
    }
    if ((char)*param_2 < '\0') {
      auVar21 = FUN_006f6214(param_2);
      lVar12 = auVar21._0_8_;
    }
    else {
      lVar12 = (long)param_2 + 1;
      auVar21[8] = (char)*param_2;
      auVar21._0_8_ = lVar12;
      auVar21._9_3_ = 0;
    }
    if (lVar12 == 0) {
LAB_00702868:
      if (puVar20[3] == 0) {
        FUN_00713d00(puVar20,pvVar11);
      }
      puVar13 = (ushort *)caseD_8(param_1);
      return puVar13;
    }
    if ((int)param_3[0xb] < 1) goto LAB_00702868;
    *(int *)(param_3 + 0xb) = (int)param_3[0xb] + -1;
    uVar15 = auVar21._8_4_ + (auVar21._0_4_ - (int)param_3[1]);
    iVar3 = *(int *)((long)param_3 + 0x1c);
    *(uint *)((long)param_3 + 0x1c) = uVar15;
    *param_3 = param_3[1] + (long)(int)(uVar15 & (int)uVar15 >> 0x1f);
    puVar13 = (ushort *)FUN_00700aec(pvVar11,auVar21._0_8_,param_3,lVar2,param_5,puVar1,puVar20);
    uVar15 = *(int *)((long)param_3 + 0x1c) + (iVar3 - uVar15);
    *(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1;
    *(uint *)((long)param_3 + 0x1c) = uVar15;
    if (((int)param_3[10] != 0) ||
       (*param_3 = param_3[1] + (long)(int)(uVar15 & (int)uVar15 >> 0x1f), puVar13 == (ushort *)0x0)
       ) goto LAB_00702868;
    if ((uVar5 >> 0x1b & 1) == 0) {
LAB_007026a0:
      bVar9 = *(byte *)((long)puVar20 + 0xf) & 0xf;
      if (bVar9 < 2) {
        if ((*(byte *)((long)puVar20 + 0xf) & 0xf) == 0) {
          FUN_007072d8();
        }
        else {
          FUN_00707490();
        }
      }
      else if (bVar9 == 2) {
        FUN_00707640();
      }
      else {
        FUN_007077f0(puVar20,pvVar11);
      }
    }
    else {
      puVar16 = *(uint **)(lVar2 + 8);
      uVar15 = *(uint *)((long)pvVar11 + (ulong)*(byte *)((long)puVar20 + 0xe));
      uVar19 = (ulong)(*puVar16 >> 0x10);
      uVar18 = (long)(int)uVar15 - (long)(short)*puVar16;
      uVar17 = uVar18 - uVar19;
      if (uVar18 < uVar19) goto LAB_007026a0;
      uVar4 = puVar16[1];
      if ((ushort)uVar4 <= uVar17) {
        uVar17 = 0;
        do {
          if (uVar4 >> 0x10 <= uVar17) goto LAB_00702794;
          lVar10 = uVar17 + 2;
          lVar12 = 1;
          if ((int)puVar16[(ulong)(uVar4 >> 5 & 0x7ff) + lVar10] <= (int)uVar15) {
            lVar12 = 2;
          }
          uVar17 = lVar12 + uVar17 * 2;
        } while (puVar16[(ulong)(uVar4 >> 5 & 0x7ff) + lVar10] != uVar15);
        goto LAB_007026a0;
      }
      if ((puVar16[(uVar17 >> 5) + 2] >> (ulong)((uint)uVar17 & 0x1f) & 1) != 0) goto LAB_007026a0;
LAB_00702794:
      FUN_0070081c(param_1,param_5,puVar20,param_4 & 0xffffffff,pvVar11);
    }
    if ((ushort *)*param_3 <= puVar13) {
      uVar17 = (ulong)*param_5;
      if (uVar17 != 0) {
        *(uint *)(param_1 + uVar17) = *(uint *)(param_1 + uVar17) | (uint)param_6;
      }
      return puVar13;
    }
    param_2 = (ushort *)((long)puVar13 + 1);
    bVar9 = (byte)*puVar13;
    uVar15 = (uint)bVar9;
    if ((char)bVar9 < '\0') {
      bVar7 = *(byte *)param_2;
      if ((char)bVar7 < '\0') {
        bVar8 = (byte)puVar13[1];
        uVar15 = (uint)(((ulong)bVar9 << 0x39) >> 0x27) | (uint)(((ulong)bVar7 << 0x39) >> 0x20);
        if ((char)bVar8 < '\0') {
          bVar9 = *(byte *)((long)puVar13 + 3);
          uVar15 = uVar15 >> 7 | (uint)(((ulong)bVar8 << 0x39) >> 0x20);
          if ((char)bVar9 < '\0') {
            if ((long)(char)puVar13[2] < 0) {
              uVar15 = 0;
              param_2 = (ushort *)0x0;
            }
            else {
              uVar15 = (uVar15 >> 7 | (uint)(((ulong)bVar9 << 0x39) >> 0x20)) >> 4 |
                       (uint)((long)(char)puVar13[2] << 0x1c);
              param_2 = (ushort *)((long)puVar13 + 5);
            }
          }
          else {
            uVar15 = uVar15 >> 0xb | (uint)bVar9 << 0x15;
            param_2 = puVar13 + 2;
          }
        }
        else {
          uVar15 = uVar15 >> 0x12 | (uint)bVar8 << 0xe;
          param_2 = (ushort *)((long)puVar13 + 3);
        }
      }
      else {
        uVar15 = bVar9 & 0x7f | (uint)bVar7 << 7;
        param_2 = puVar13 + 1;
      }
    }
    if (uVar15 != (uint)param_4) {
      uVar17 = (ulong)*puVar13 & (ulong)(byte)param_5[4];
                    /* WARNING: Could not recover jumptable at 0x007028fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar13 = (ushort *)
                (**(code **)(param_5 + uVar17 + 0x1c))
                          (param_1,puVar13,param_3,
                           *(ulong *)(param_5 + uVar17 + 0x20) ^ (ulong)*puVar13,param_5,param_6);
      return puVar13;
    }
  } while( true );
}


// ===== 00702994  switchD_006fe28c::caseD_9 =====

ulong * switchD_006fe28c::caseD_9
                  (long param_1,ulong *param_2,undefined8 *param_3,ulong param_4,ushort *param_5,
                  undefined8 param_6)

{
  uint *puVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ulong *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  void *pvVar10;
  ulong uVar11;
  uint uVar12;
  code *UNRECOVERED_JUMPTABLE;
  void *__src;
  ulong __n;
  ulong local_68;
  
  puVar1 = (uint *)((long)param_5 + (param_4 >> 0x20));
  uVar5 = *(ushort *)((long)puVar1 + 10);
  uVar2 = uVar5 & 0x30;
  if (uVar2 == 0x20) {
    puVar6 = (ulong *)FUN_007088cc(param_1,param_2,param_3,param_4,param_5,param_6);
    return puVar6;
  }
  if ((param_4 & 7) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_5 + 0x18);
    puVar6 = param_2;
    goto LAB_00702a3c;
  }
  uVar9 = *param_2;
  if (((uint)uVar9 >> 7 & 1) == 0) {
    uVar9 = uVar9 & 0x7f;
    puVar6 = (ulong *)((long)param_2 + 1);
  }
  else if (((uint)uVar9 >> 0xf & 1) == 0) {
    puVar6 = (ulong *)((long)param_2 + 2);
    uVar9 = uVar9 & 0x7f | (uVar9 >> 8 & 0x7f) << 7;
  }
  else {
    puVar6 = (ulong *)FUN_00705258(param_2,&local_68);
    uVar9 = local_68;
  }
  local_68 = uVar9;
  if (puVar6 == (ulong *)0x0) {
    puVar6 = (ulong *)caseD_8(param_1);
    return puVar6;
  }
  uVar3 = uVar5 & 0x1c0;
  uVar4 = uVar5 & 0x600;
  if (uVar3 == 0xc0) {
    if (uVar4 == 0x200) {
      uVar9 = -(uVar9 & 1) ^ uVar9 >> 1;
    }
  }
  else if (uVar3 == 0x80) {
    uVar12 = (uint)uVar9;
    if ((uVar5 >> 10 & 1) == 0) {
      if (uVar4 == 0x200) {
        uVar9 = (long)(int)(-(uVar12 & 1) ^ uVar12 >> 1);
      }
    }
    else {
      uVar8 = *(undefined8 *)
               ((long)param_5 + (ulong)(ushort)puVar1[2] * 8 + (ulong)*(uint *)(param_5 + 0xc));
      if (uVar4 == 0x600) {
        if (((int)uVar12 < (int)uVar8) || ((int)((ulong)uVar8 >> 0x20) < (int)uVar12)) {
LAB_00702c90:
          puVar6 = (ulong *)FUN_006ff8bc(param_1,param_2,param_3,param_4,param_5,param_6);
          return puVar6;
        }
      }
      else {
        uVar11 = FUN_0071211c(uVar9 & 0xffffffff);
        if ((uVar11 & 1) == 0) goto LAB_00702c90;
      }
    }
  }
  if (uVar2 == 0x30) {
    FUN_00700334(param_5,0,puVar1,param_4 >> 3 & 0x1fffffff);
  }
  else if (uVar2 == 0x10) {
    uVar11 = (ulong)(puVar1[1] >> 3) & 0x1ffffffc;
    *(uint *)(param_1 + uVar11) = 1 << (ulong)(puVar1[1] & 0x1f) | *(uint *)(param_1 + uVar11);
  }
  uVar11 = (ulong)*(uint *)((long)param_5 + (ulong)*(uint *)(param_5 + 0xc) + 8);
  __src = *(void **)(**(long **)(param_5 + 0x10) + uVar11);
  pvVar10 = *(void **)(param_1 + uVar11);
  if (pvVar10 == __src) {
    uVar7 = *(ulong *)(param_1 + 8);
    __n = (ulong)*(uint *)((long)param_5 + (ulong)*(uint *)(param_5 + 0xc) + 0x10);
    if ((uVar7 & 1) != 0) {
      uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
    }
    if (uVar7 == 0) {
      pvVar10 = operator_new(__n);
    }
    else {
      pvVar10 = (void *)FUN_006fdbf0(uVar7,__n + 7 & 0x1fffffff8);
    }
    *(void **)(param_1 + uVar11) = pvVar10;
    memcpy(pvVar10,__src,__n);
    pvVar10 = *(void **)(param_1 + uVar11);
    if ((uVar5 & 0x1c0) != 0xc0) goto LAB_00702be0;
LAB_00702b80:
    *(ulong *)((long)pvVar10 + (ulong)*puVar1) = uVar9;
  }
  else {
    if (uVar3 == 0xc0) goto LAB_00702b80;
LAB_00702be0:
    if ((uVar5 & 0x1c0) == 0x80) {
      *(int *)((long)pvVar10 + (ulong)*puVar1) = (int)uVar9;
    }
    else {
      *(bool *)((long)pvVar10 + (ulong)*puVar1) = uVar9 != 0;
    }
  }
  if ((ulong *)*param_3 <= puVar6) {
    uVar9 = (ulong)*param_5;
    if (uVar9 != 0) {
      *(uint *)(param_1 + uVar9) = *(uint *)(param_1 + uVar9) | (uint)param_6;
    }
    return puVar6;
  }
  uVar9 = (ulong)(ushort)*puVar6 & (ulong)(byte)param_5[4];
  UNRECOVERED_JUMPTABLE = *(code **)(param_5 + uVar9 + 0x1c);
  param_4 = *(ulong *)(param_5 + uVar9 + 0x20) ^ (ulong)(ushort)*puVar6;
LAB_00702a3c:
                    /* WARNING: Could not recover jumptable at 0x00702a64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar6 = (ulong *)(*UNRECOVERED_JUMPTABLE)(param_1,puVar6,param_3,param_4,param_5,param_6);
  return puVar6;
}


// ===== 00702d34  switchD_006fe28c::caseD_a =====

void switchD_006fe28c::caseD_a
               (long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,ushort *param_5,
               uint param_6)

{
  uint uVar1;
  ushort uVar2;
  ulong uVar3;
  
  if ((param_4 & 7) != 2) {
    FUN_007088cc();
    return;
  }
  uVar1 = *(uint *)((long)param_5 + (param_4 >> 0x20) + 4);
  uVar2 = *(ushort *)((long)param_5 + (param_4 >> 0x20) + 10);
  if (uVar1 != 0xffffffff) {
    uVar3 = (ulong)(uVar1 >> 3) & 0x1ffffffc;
    *(uint *)(param_1 + uVar3) = *(uint *)(param_1 + uVar3) | 1 << (ulong)(uVar1 & 0x1f);
  }
  uVar3 = (ulong)*param_5;
  if (uVar3 != 0) {
    *(uint *)(param_1 + uVar3) = *(uint *)(param_1 + uVar3) | param_6;
  }
  uVar2 = uVar2 >> 6 & 7;
  if (uVar2 != 0) {
    if (uVar2 == 2) {
      FUN_0070955c();
      return;
    }
    FUN_007093b4();
    return;
  }
  FUN_00709704();
  return;
}


// ===== 00702da8  switchD_006fe28c::caseD_b =====

ushort * switchD_006fe28c::caseD_b
                   (long param_1,ushort *param_2,undefined8 *param_3,ulong param_4,ushort *param_5,
                   undefined8 param_6)

{
  uint *puVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  ushort *puVar5;
  ulong uVar6;
  void *pvVar7;
  long lVar8;
  ulong uVar9;
  code *UNRECOVERED_JUMPTABLE;
  void *__src;
  ulong __n;
  
  puVar1 = (uint *)((long)param_5 + (param_4 >> 0x20));
  uVar2 = *(ushort *)((long)puVar1 + 10) & 0x30;
  if (uVar2 == 0x20) {
    puVar5 = (ushort *)FUN_0070aa58(param_1,param_2,param_3,param_4,param_5,param_6);
    return puVar5;
  }
  uVar3 = *(ushort *)((long)puVar1 + 10) & 0x1c0;
  uVar4 = (uint)param_4 & 7;
  if (uVar3 == 0xc0) {
    if (uVar4 == 1) {
LAB_00702e54:
      if (uVar2 == 0x30) {
        FUN_00700334(param_5,0,puVar1,(uint)param_4 >> 3,param_5,param_1);
      }
      else if (uVar2 == 0x10) {
        uVar9 = (ulong)(puVar1[1] >> 3) & 0x1ffffffc;
        *(uint *)(param_1 + uVar9) = 1 << (ulong)(puVar1[1] & 0x1f) | *(uint *)(param_1 + uVar9);
      }
      uVar9 = (ulong)*(uint *)((long)param_5 + (ulong)*(uint *)(param_5 + 0xc) + 8);
      __src = *(void **)(**(long **)(param_5 + 0x10) + uVar9);
      pvVar7 = *(void **)(param_1 + uVar9);
      if (pvVar7 == __src) {
        uVar6 = *(ulong *)(param_1 + 8);
        __n = (ulong)*(uint *)((long)param_5 + (ulong)*(uint *)(param_5 + 0xc) + 0x10);
        if ((uVar6 & 1) == 0) {
          if (uVar6 != 0) goto LAB_00702ed4;
LAB_00702ef0:
          pvVar7 = operator_new(__n);
        }
        else {
          uVar6 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
          if (uVar6 == 0) goto LAB_00702ef0;
LAB_00702ed4:
          pvVar7 = (void *)FUN_006fdbf0(uVar6,__n + 7 & 0x1fffffff8);
        }
        *(void **)(param_1 + uVar9) = pvVar7;
        memcpy(pvVar7,__src,__n);
        pvVar7 = *(void **)(param_1 + uVar9);
      }
      if (uVar3 == 0xc0) {
        *(undefined8 *)((long)pvVar7 + (ulong)*puVar1) = *(undefined8 *)param_2;
        lVar8 = 8;
      }
      else {
        *(undefined4 *)((long)pvVar7 + (ulong)*puVar1) = *(undefined4 *)param_2;
        lVar8 = 4;
      }
      param_2 = (ushort *)((long)param_2 + lVar8);
      if ((ushort *)*param_3 <= param_2) {
        uVar9 = (ulong)*param_5;
        if (uVar9 != 0) {
          *(uint *)(param_1 + uVar9) = *(uint *)(param_1 + uVar9) | (uint)param_6;
        }
        return param_2;
      }
      uVar9 = (ulong)*param_2 & (ulong)(byte)param_5[4];
      UNRECOVERED_JUMPTABLE = *(code **)(param_5 + uVar9 + 0x1c);
      param_4 = *(ulong *)(param_5 + uVar9 + 0x20) ^ (ulong)*param_2;
      goto LAB_00702f64;
    }
  }
  else if (uVar4 == 5) goto LAB_00702e54;
  UNRECOVERED_JUMPTABLE = *(code **)(param_5 + 0x18);
LAB_00702f64:
                    /* WARNING: Could not recover jumptable at 0x00702f8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar5 = (ushort *)(*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4,param_5,param_6);
  return puVar5;
}


// ===== 00702fc8  switchD_006fe28c::caseD_c =====

ushort * switchD_006fe28c::caseD_c
                   (long param_1,char *param_2,undefined8 *param_3,ulong param_4,ushort *param_5,
                   undefined8 param_6)

{
  uint *puVar1;
  uint uVar2;
  ushort uVar3;
  char cVar4;
  ulong uVar5;
  ulong *puVar6;
  ushort *puVar7;
  ulong uVar8;
  void *__src;
  ulong __n;
  void *pvVar9;
  undefined1 auVar10 [16];
  
  if ((param_4 & 7) != 2) {
    puVar7 = (ushort *)FUN_0070aa58(param_1,param_2,param_3,param_4,param_5,param_6);
    return puVar7;
  }
  puVar1 = (uint *)((long)param_5 + (param_4 >> 0x20));
  uVar2 = puVar1[1];
  uVar3 = *(ushort *)((long)puVar1 + 10);
  if (uVar2 != 0xffffffff) {
    uVar8 = (ulong)(uVar2 >> 3) & 0x1ffffffc;
    *(uint *)(param_1 + uVar8) = *(uint *)(param_1 + uVar8) | 1 << (ulong)(uVar2 & 0x1f);
  }
  uVar8 = (ulong)*(uint *)((long)param_5 + (ulong)*(uint *)(param_5 + 0xc) + 8);
  __src = *(void **)(**(long **)(param_5 + 0x10) + uVar8);
  pvVar9 = *(void **)(param_1 + uVar8);
  if (pvVar9 == __src) {
    uVar5 = *(ulong *)(param_1 + 8);
    __n = (ulong)*(uint *)((long)param_5 + (ulong)*(uint *)(param_5 + 0xc) + 0x10);
    if ((uVar5 & 1) == 0) {
      if (uVar5 != 0) goto LAB_00703074;
LAB_007030c8:
      pvVar9 = operator_new(__n);
    }
    else {
      uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
      if (uVar5 == 0) goto LAB_007030c8;
LAB_00703074:
      pvVar9 = (void *)FUN_006fdbf0(uVar5,__n + 7 & 0x1fffffff8);
    }
    *(void **)(param_1 + uVar8) = pvVar9;
    memcpy(pvVar9,__src,__n);
    pvVar9 = *(void **)(param_1 + uVar8);
  }
  cVar4 = *param_2;
  if (cVar4 < '\0') {
    auVar10 = FUN_006f6214(param_2,cVar4);
  }
  else {
    auVar10[8] = cVar4;
    auVar10._0_8_ = param_2 + 1;
    auVar10._9_7_ = 0;
  }
  uVar8 = (ulong)*puVar1;
  if ((uVar3 & 0x1c0) != 0xc0) {
    if (*(undefined **)((long)pvVar9 + uVar8) == &DAT_00208740) {
      uVar5 = *(ulong *)(param_1 + 8);
      if ((uVar5 & 1) == 0) {
        if (uVar5 != 0) goto LAB_00703194;
LAB_007032bc:
        puVar6 = (ulong *)operator_new(0x10);
        *puVar6 = 0;
      }
      else {
        uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
        if (uVar5 == 0) goto LAB_007032bc;
LAB_00703194:
        puVar6 = (ulong *)FUN_006fdbf0(uVar5,0x10);
        *puVar6 = uVar5;
      }
      *(ulong **)((long)pvVar9 + uVar8) = puVar6;
    }
    puVar7 = (ushort *)FUN_006f9728(param_3,auVar10._0_8_,auVar10._8_8_ & 0xffffffff);
    goto LAB_007031c0;
  }
  if (*(undefined **)((long)pvVar9 + uVar8) == &DAT_00208740) {
    uVar5 = *(ulong *)(param_1 + 8);
    if ((uVar5 & 1) == 0) {
      if (uVar5 != 0) goto LAB_00703144;
LAB_0070329c:
      puVar6 = (ulong *)operator_new(0x10);
      *puVar6 = 0;
    }
    else {
      uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
      if (uVar5 == 0) goto LAB_0070329c;
LAB_00703144:
      puVar6 = (ulong *)FUN_006fdbf0(uVar5,0x10);
      *puVar6 = uVar5;
    }
    *(ulong **)((long)pvVar9 + uVar8) = puVar6;
  }
  puVar7 = (ushort *)FUN_006f9cf4(param_3,auVar10._0_8_,auVar10._8_8_ & 0xffffffff);
LAB_007031c0:
  if (puVar7 == (ushort *)0x0) {
    puVar7 = (ushort *)caseD_8(param_1);
    return puVar7;
  }
  if (puVar7 < (ushort *)*param_3) {
    uVar8 = (ulong)*puVar7 & (ulong)(byte)param_5[4];
                    /* WARNING: Could not recover jumptable at 0x00703220. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar7 = (ushort *)
             (**(code **)(param_5 + uVar8 + 0x1c))
                       (param_1,puVar7,param_3,*(ulong *)(param_5 + uVar8 + 0x20) ^ (ulong)*puVar7,
                        param_5,param_6);
    return puVar7;
  }
  uVar8 = (ulong)*param_5;
  if (uVar8 != 0) {
    *(uint *)(param_1 + uVar8) = *(uint *)(param_1 + uVar8) | (uint)param_6;
  }
  return puVar7;
}


// ===== 007032d0  switchD_006fe28c::caseD_d =====

ushort * switchD_006fe28c::caseD_d
                   (long param_1,ushort *param_2,undefined8 *param_3,ulong param_4,ushort *param_5,
                   undefined8 param_6)

{
  uint *puVar1;
  ulong *puVar2;
  ushort uVar3;
  ushort uVar4;
  char cVar5;
  uint uVar6;
  ushort *puVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  int iVar11;
  long *plVar12;
  ulong uVar13;
  code *UNRECOVERED_JUMPTABLE;
  long lVar14;
  long lVar15;
  void *__src;
  void *pvVar16;
  ulong __n;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  if (((uint)param_4 & 7) != 2) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_5 + 0x18);
    goto LAB_0070336c;
  }
  puVar1 = (uint *)((long)param_5 + (param_4 >> 0x20));
  uVar4 = *(ushort *)((long)puVar1 + 10);
  uVar3 = uVar4 & 0x30;
  if (uVar3 == 0x20) {
    puVar7 = (ushort *)FUN_0070aef8(param_1,param_2,param_3,param_4,param_5);
    return puVar7;
  }
  if (uVar3 == 0x10) {
    uVar13 = (ulong)(puVar1[1] >> 3) & 0x1ffffffc;
    *(uint *)(param_1 + uVar13) = 1 << (ulong)(puVar1[1] & 0x1f) | *(uint *)(param_1 + uVar13);
  }
  else if (uVar3 == 0x30) {
    FUN_00700334(param_5,0,puVar1,(uint)param_4 >> 3,param_5,param_1);
  }
  uVar13 = (ulong)*(uint *)((long)param_5 + (ulong)*(uint *)(param_5 + 0xc) + 8);
  __src = *(void **)(**(long **)(param_5 + 0x10) + uVar13);
  pvVar16 = *(void **)(param_1 + uVar13);
  if (pvVar16 == __src) {
    uVar8 = *(ulong *)(param_1 + 8);
    __n = (ulong)*(uint *)((long)param_5 + (ulong)*(uint *)(param_5 + 0xc) + 0x10);
    if ((uVar8 & 1) == 0) {
      if (uVar8 == 0) goto LAB_00703434;
LAB_00703418:
      pvVar16 = (void *)FUN_006fdbf0(uVar8,__n + 7 & 0x1fffffff8);
    }
    else {
      uVar8 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
      if (uVar8 != 0) goto LAB_00703418;
LAB_00703434:
      pvVar16 = operator_new(__n);
    }
    *(void **)(param_1 + uVar13) = pvVar16;
    memcpy(pvVar16,__src,__n);
    pvVar16 = *(void **)(param_1 + uVar13);
  }
  uVar13 = (ulong)*puVar1;
  if ((uVar4 & 0x1c0) == 0x140) {
    uVar8 = *(ulong *)(param_1 + 8);
    if ((uVar8 & 1) != 0) {
      uVar8 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
    }
    cVar5 = (char)*param_2;
    puVar2 = (ulong *)((long)pvVar16 + uVar13);
    if (cVar5 < '\0') {
      auVar18 = FUN_006f6214(param_2,cVar5);
      param_2 = auVar18._0_8_;
      if (param_2 != (ushort *)0x0) goto LAB_0070356c;
LAB_00703598:
      plVar9 = (long *)*puVar2;
      uVar6 = (uint)plVar9;
    }
    else {
      auVar18[8] = cVar5;
      auVar18._0_8_ = (long)param_2 + 1;
      auVar18._9_7_ = 0;
      if ((long)param_2 + 1 == 0) {
        param_2 = (ushort *)0x0;
        goto LAB_00703598;
      }
LAB_0070356c:
      lVar14 = auVar18._0_8_;
      iVar11 = auVar18._8_4_;
      if ((*(int *)(param_3 + 1) - auVar18._0_4_) + 0x10 < iVar11) {
        param_2 = (ushort *)FUN_006f71b4(param_3,lVar14,auVar18._8_8_,puVar2,uVar8);
        goto LAB_00703598;
      }
      if (iVar11 < 0) {
LAB_00703744:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/string_view:331: libc++ Hardening assertion __len <= static_cast<size_type>(numeric_limits<difference_type>::max()) failed: string_view::string_view(_CharT *, size_t): length does not fit in difference_type\n"
                  );
      }
      FUN_006fc8b0(puVar2,lVar14,(long)iVar11,uVar8,7);
      param_2 = (ushort *)(lVar14 + iVar11);
      plVar9 = (long *)*puVar2;
      uVar6 = (uint)plVar9;
    }
    if ((uVar6 >> 1 & 1) == 0) {
      if (((ulong)plVar9 & 1) == 0) {
        uVar13 = (ulong)plVar9 >> 2 & 0x3f;
        plVar12 = (long *)((long)puVar2 + 1);
      }
      else {
        plVar12 = *(long **)((long)plVar9 - 1);
        uVar13 = (ulong)*(uint *)((long)plVar9 + 7);
        if ((plVar12 == (long *)0x0) && (*(uint *)((long)plVar9 + 7) != 0)) goto LAB_00703730;
      }
    }
    else {
      uVar13 = (ulong)*(byte *)((long)plVar9 - 2);
      plVar12 = plVar9;
      if ((plVar9 == (long *)0x0) && (*(byte *)((long)plVar9 - 2) != 0)) {
LAB_00703730:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/string_view:333: libc++ Hardening assertion __len == 0 || __s != nullptr failed: string_view::string_view(_CharT *, size_t): received nullptr\n"
                  );
      }
    }
LAB_00703624:
    uVar13 = FUN_00700564(plVar12,uVar13,param_5,puVar1,uVar4 & 0x600);
  }
  else {
    if ((uVar4 & 0x1c0) != 0x80) {
      uVar8 = *(ulong *)(param_1 + 8);
      if ((uVar8 & 1) == 0) {
        if (uVar8 == 0) goto LAB_007036d4;
LAB_007034a8:
        param_2 = (ushort *)FUN_00714270(param_3,param_2,(long)pvVar16 + uVar13);
      }
      else {
        if (*(long *)(uVar8 & 0xfffffffffffffffe) != 0) goto LAB_007034a8;
LAB_007036d4:
        uVar10 = FUN_007141a0((long)pvVar16 + uVar13,0);
        param_2 = (ushort *)FUN_006f62b8(uVar10,param_2,param_3);
      }
      if (param_2 == (ushort *)0x0) {
        FUN_00706c04(param_1,(long)pvVar16 + uVar13);
        goto LAB_00703700;
      }
      plVar9 = (long *)(*(ulong *)((long)pvVar16 + uVar13) & 0xfffffffffffffffc);
      uVar13 = (ulong)*(char *)((long)plVar9 + 0x17);
      plVar12 = plVar9;
      if ((long)uVar13 < 0) {
        plVar12 = (long *)*plVar9;
        uVar13 = plVar9[1];
      }
      goto LAB_00703624;
    }
    if (uVar3 == 0x30) {
      lVar14 = *(long *)(param_1 + uVar13);
    }
    else {
      lVar14 = (long)pvVar16 + uVar13;
    }
    cVar5 = (char)*param_2;
    if (cVar5 < '\0') {
      auVar17 = FUN_006f6214(param_2,cVar5);
      lVar15 = auVar17._0_8_;
    }
    else {
      lVar15 = (long)param_2 + 1;
      auVar17[8] = cVar5;
      auVar17._0_8_ = lVar15;
      auVar17._9_7_ = 0;
    }
    if (lVar15 == 0) goto LAB_00703700;
    uVar13 = auVar17._8_8_;
    lVar15 = auVar17._0_8_;
    iVar11 = (*(int *)(param_3 + 1) - auVar17._0_4_) + 0x10;
    if (0x1ff < iVar11) {
      iVar11 = 0x200;
    }
    uVar8 = FUN_006f548c(param_3,uVar13 & 0xffffffff,iVar11);
    if ((uVar8 & 1) == 0) {
      param_2 = (ushort *)FUN_006f5798(param_3,lVar15,uVar13 & 0xffffffff,lVar14);
    }
    else {
      if (auVar17._8_4_ < 0) goto LAB_00703744;
      FUN_006f1330(lVar14,lVar15,uVar13 & 0xffffffff);
      param_2 = (ushort *)(lVar15 + (uVar13 & 0xffffffff));
    }
    if (param_2 == (ushort *)0x0) goto LAB_00703700;
    uVar13 = 1;
  }
  if (((uVar13 & 1) != 0) && (param_2 != (ushort *)0x0)) {
    if ((ushort *)*param_3 <= param_2) {
      uVar13 = (ulong)*param_5;
      if (uVar13 != 0) {
        *(uint *)(param_1 + uVar13) = *(uint *)(param_1 + uVar13) | (uint)param_6;
      }
      return param_2;
    }
    uVar13 = (ulong)*param_2 & (ulong)(byte)param_5[4];
    UNRECOVERED_JUMPTABLE = *(code **)(param_5 + uVar13 + 0x1c);
    param_4 = *(ulong *)(param_5 + uVar13 + 0x20) ^ (ulong)*param_2;
LAB_0070336c:
                    /* WARNING: Could not recover jumptable at 0x0070338c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar7 = (ushort *)(*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4,param_5,param_6);
    return puVar7;
  }
LAB_00703700:
  puVar7 = (ushort *)caseD_8(param_1);
  return puVar7;
}


// ===== 00703758  switchD_006fe28c::caseD_e =====

undefined8
switchD_006fe28c::caseD_e
          (long param_1,char *param_2,long *param_3,ulong param_4,ushort *param_5,undefined8 param_6
          )

{
  uint *puVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar11;
  uint uVar12;
  long *plVar13;
  long *plVar14;
  void *__src;
  void *pvVar15;
  ulong __n;
  undefined1 auVar16 [12];
  char *pcVar10;
  
  puVar1 = (uint *)((long)param_5 + (param_4 >> 0x20));
  uVar3 = *(ushort *)((long)puVar1 + 10);
  uVar4 = uVar3 & 0x30;
  if (uVar4 == 0x20) {
    if ((uVar3 & 0x1c0) == 0x40) {
      uVar7 = FUN_0070b788(param_1,param_2,param_3,param_4,param_5,param_6);
      return uVar7;
    }
    if ((uVar3 & 0x1c0) == 0) {
      uVar7 = FUN_0070b3c4(param_1,param_2,param_3,param_4,param_5,param_6);
      return uVar7;
    }
LAB_007038f8:
                    /* WARNING: Could not recover jumptable at 0x00703934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar7 = (**(code **)(param_5 + 0x18))(param_1,param_2,param_3,param_4,param_5,param_6);
    return uVar7;
  }
  uVar12 = (uint)param_4;
  if ((uVar3 & 0x1c0) == 0x40) {
    if ((uVar12 & 7) != 3) goto LAB_007038f8;
  }
  else if (((uVar3 & 0x1c0) != 0) || ((uVar12 & 7) != 2)) goto LAB_007038f8;
  plVar13 = *(long **)((long)param_5 +
                      (ulong)(ushort)puVar1[2] * 8 + (ulong)*(uint *)(param_5 + 0xc));
  if ((uVar3 & 0x600) != 0x400) {
    plVar14 = plVar13;
    if ((uVar3 & 0x600) != 0x200) {
      plVar14 = (long *)*plVar13;
    }
    lVar9 = (**(code **)(*plVar14 + 0x20))(plVar14);
    plVar13 = *(long **)(lVar9 + 8);
    if (plVar13 == (long *)0x0) {
      plVar13 = (long *)(**(code **)(*(long *)(lVar9 + 0x58) + 0x10))(plVar14);
    }
  }
  if (uVar4 == 0x30) {
    FUN_00700334(param_5,plVar13,puVar1,uVar12 >> 3);
    uVar4 = *param_5;
  }
  else {
    if (uVar4 == 0x10) {
      uVar11 = (ulong)(puVar1[1] >> 3) & 0x1ffffffc;
      *(uint *)(param_1 + uVar11) = 1 << (ulong)(puVar1[1] & 0x1f) | *(uint *)(param_1 + uVar11);
    }
    uVar4 = *param_5;
  }
  uVar11 = (ulong)uVar4;
  if (uVar11 != 0) {
    *(uint *)(param_1 + uVar11) = *(uint *)(param_1 + uVar11) | (uint)param_6;
  }
  uVar11 = (ulong)*(uint *)((long)param_5 + (ulong)*(uint *)(param_5 + 0xc) + 8);
  __src = *(void **)(**(long **)(param_5 + 0x10) + uVar11);
  pvVar15 = *(void **)(param_1 + uVar11);
  if (pvVar15 != __src) goto LAB_007039d0;
  uVar8 = *(ulong *)(param_1 + 8);
  __n = (ulong)*(uint *)((long)param_5 + (ulong)*(uint *)(param_5 + 0xc) + 0x10);
  if ((uVar8 & 1) == 0) {
    if (uVar8 == 0) goto LAB_007039b4;
LAB_007038a4:
    pvVar15 = (void *)FUN_006fdbf0(uVar8,__n + 7 & 0x1fffffff8);
  }
  else {
    uVar8 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
    if (uVar8 != 0) goto LAB_007038a4;
LAB_007039b4:
    pvVar15 = operator_new(__n);
  }
  *(void **)(param_1 + uVar11) = pvVar15;
  memcpy(pvVar15,__src,__n);
  pvVar15 = *(void **)(param_1 + uVar11);
LAB_007039d0:
  uVar11 = (ulong)*puVar1;
  if (*(long *)((long)pvVar15 + uVar11) == 0) {
    uVar8 = *(ulong *)(param_1 + 8);
    if ((uVar8 & 1) != 0) {
      uVar8 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
    }
    uVar7 = FUN_00701320(plVar13[4],uVar8);
    *(undefined8 *)((long)pvVar15 + uVar11) = uVar7;
  }
  if ((uVar3 & 0x1c0) == 0x40) {
    iVar5 = (int)param_3[0xb] + -1;
    *(int *)(param_3 + 0xb) = iVar5;
    if (-1 < iVar5) {
      *(int *)((long)param_3 + 0x5c) = *(int *)((long)param_3 + 0x5c) + 1;
      uVar7 = FUN_006fe0e8(*(undefined8 *)((long)pvVar15 + uVar11),param_2,param_3,plVar13);
      uVar6 = DAT_001f5550;
      uVar2 = *(uint *)(param_3 + 10);
      *(undefined4 *)(param_3 + 10) = 0;
      if (uVar2 != uVar12) {
        uVar7 = 0;
      }
      param_3[0xb] = CONCAT44((int)((ulong)param_3[0xb] >> 0x20) + (int)((ulong)uVar6 >> 0x20),
                              (int)param_3[0xb] + (int)uVar6);
      return uVar7;
    }
  }
  else {
    if (*param_2 < '\0') {
      auVar16 = FUN_006f6214(param_2);
      pcVar10 = auVar16._0_8_;
    }
    else {
      pcVar10 = param_2 + 1;
      auVar16[8] = *param_2;
      auVar16._0_8_ = pcVar10;
      auVar16._9_3_ = 0;
    }
    if (pcVar10 != (char *)0x0) {
      if (0 < (int)param_3[0xb]) {
        *(int *)(param_3 + 0xb) = (int)param_3[0xb] + -1;
        uVar12 = auVar16._8_4_ + (auVar16._0_4_ - (int)param_3[1]);
        iVar5 = *(int *)((long)param_3 + 0x1c);
        *(uint *)((long)param_3 + 0x1c) = uVar12;
        *param_3 = param_3[1] + (long)(int)(uVar12 & (int)uVar12 >> 0x1f);
        uVar7 = FUN_006fe0e8(*(undefined8 *)((long)pvVar15 + uVar11),auVar16._0_8_,param_3,plVar13);
        uVar12 = *(int *)((long)param_3 + 0x1c) + (iVar5 - uVar12);
        *(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1;
        *(uint *)((long)param_3 + 0x1c) = uVar12;
        if ((int)param_3[10] == 0) {
          *param_3 = param_3[1] + (long)(int)(uVar12 & (int)uVar12 >> 0x1f);
          return uVar7;
        }
      }
    }
  }
  return 0;
}


// ===== 00703b30  switchD_006fe28c::caseD_f =====

ushort * switchD_006fe28c::caseD_f
                   (long param_1,ushort *param_2,long *param_3,ulong param_4,ushort *param_5,
                   undefined8 param_6)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  long lVar9;
  ulong uVar10;
  ushort *puVar12;
  undefined8 *puVar13;
  uint uVar14;
  void *pvVar15;
  ulong uVar16;
  uint *puVar17;
  void *__src;
  uint *puVar18;
  ulong uVar19;
  ulong *puVar20;
  undefined1 auVar21 [12];
  long lVar11;
  
  puVar18 = (uint *)((long)param_5 + (param_4 >> 0x20));
  uVar14 = *(uint *)(param_5 + 0xc);
  lVar1 = (long)param_5 + (ulong)(ushort)puVar18[2] * 8 + (ulong)uVar14;
  uVar4 = *(uint *)(lVar1 + 1);
  if (((uVar4 >> 0x18 & 1) == 0) || (((uint)param_4 & 7) != 2)) {
    puVar12 = (ushort *)caseD_0(param_1,param_2,param_3,param_4,param_5);
    return puVar12;
  }
  uVar19 = (ulong)*(uint *)((long)param_5 + (ulong)uVar14 + 8);
  __src = *(void **)(**(long **)(param_5 + 0x10) + uVar19);
  pvVar15 = *(void **)(param_1 + uVar19);
  if (pvVar15 != __src) goto LAB_00703c54;
  uVar10 = *(ulong *)(param_1 + 8);
  uVar16 = (ulong)*(uint *)((long)param_5 + (ulong)uVar14 + 0x10);
  if ((uVar10 & 1) == 0) {
    if (uVar10 != 0) goto LAB_00703bd4;
LAB_00703c2c:
    pvVar15 = operator_new(uVar16);
  }
  else {
    uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
    if (uVar10 == 0) goto LAB_00703c2c;
LAB_00703bd4:
    pvVar15 = (void *)FUN_006fdbf0(uVar10,uVar16 + 7 & 0x1fffffff8);
  }
  *(void **)(param_1 + uVar19) = pvVar15;
  memcpy(pvVar15,__src,uVar16);
  pvVar15 = *(void **)(param_1 + uVar19);
  puVar18 = (uint *)((long)param_5 + (param_4 >> 0x20));
LAB_00703c54:
  puVar20 = (ulong *)((long)pvVar15 + (ulong)*puVar18);
  if ((uVar4 >> 0x19 & 1) == 0) {
    if ((*puVar20 & 1) != 0) {
      (**(code **)PTR_DAT_00d52588)(puVar20,1);
    }
    puVar20 = puVar20 + 1;
  }
  uVar14 = puVar18[1];
  if (uVar14 != 0xffffffff) {
    uVar19 = (ulong)(uVar14 >> 3) & 0x1ffffffc;
    *(uint *)(param_1 + uVar19) = *(uint *)(param_1 + uVar19) | 1 << (ulong)(uVar14 & 0x1f);
  }
  do {
    if (puVar20[3] == 0) {
      pvVar15 = operator_new((ulong)*(ushort *)((long)puVar20 + 0xc));
    }
    else {
      pvVar15 = (void *)FUN_006fdbf0(puVar20[3],*(ushort *)((long)puVar20 + 0xc) + 7 & 0x1fff8);
    }
    uVar5 = *(ushort *)((long)puVar20 + 0xc);
    puVar13 = (undefined8 *)((long)pvVar15 + 8);
    *puVar13 = 0;
    *(undefined8 *)((long)pvVar15 + ((ulong)uVar5 - 8)) = 0;
    if ((*(byte *)((long)puVar20 + 0xf) & 0xf) == 5) {
      uVar19 = puVar20[3];
      *puVar13 = 0;
      *(undefined8 *)((long)pvVar15 + 0x10) = 0;
      *(undefined8 *)((long)pvVar15 + 0x18) = 0;
      if ((puVar13 != (undefined8 *)0x0) && (uVar19 != 0)) {
        FUN_006fda80(uVar19,puVar13,FUN_00707a00);
      }
    }
    bVar8 = *(byte *)((long)puVar20 + 0xf) >> 4;
    if (4 < bVar8) {
      if (bVar8 == 6) {
        FUN_00707a24(*(undefined8 *)(*(long *)(lVar1 + 8) + 0x20),
                     (long)pvVar15 + (ulong)*(byte *)((long)puVar20 + 0xe),puVar20[3]);
      }
      else {
        uVar19 = puVar20[3];
        puVar13 = (undefined8 *)((long)pvVar15 + (ulong)*(byte *)((long)puVar20 + 0xe));
        *puVar13 = 0;
        puVar13[1] = 0;
        puVar13[2] = 0;
        if ((uVar19 != 0) && (puVar13 != (undefined8 *)0x0)) {
          FUN_006fda80(uVar19,puVar13,FUN_00707a00);
        }
      }
    }
    if ((char)*param_2 < '\0') {
      auVar21 = FUN_006f6214(param_2);
      lVar11 = auVar21._0_8_;
    }
    else {
      lVar11 = (long)param_2 + 1;
      auVar21[8] = (char)*param_2;
      auVar21._0_8_ = lVar11;
      auVar21._9_3_ = 0;
    }
    if (lVar11 == 0) {
LAB_00703fc0:
      if (puVar20[3] == 0) {
        FUN_00713d00(puVar20,pvVar15);
      }
      puVar12 = (ushort *)caseD_8(param_1);
      return puVar12;
    }
    if ((int)param_3[0xb] < 1) goto LAB_00703fc0;
    *(int *)(param_3 + 0xb) = (int)param_3[0xb] + -1;
    uVar14 = auVar21._8_4_ + (auVar21._0_4_ - (int)param_3[1]);
    iVar2 = *(int *)((long)param_3 + 0x1c);
    *(uint *)((long)param_3 + 0x1c) = uVar14;
    *param_3 = param_3[1] + (long)(int)(uVar14 & (int)uVar14 >> 0x1f);
    puVar12 = (ushort *)FUN_00700aec(pvVar15,auVar21._0_8_,param_3,lVar1,param_5,puVar18,puVar20);
    uVar14 = *(int *)((long)param_3 + 0x1c) + (iVar2 - uVar14);
    *(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1;
    *(uint *)((long)param_3 + 0x1c) = uVar14;
    if (((int)param_3[10] != 0) ||
       (*param_3 = param_3[1] + (long)(int)(uVar14 & (int)uVar14 >> 0x1f), puVar12 == (ushort *)0x0)
       ) goto LAB_00703fc0;
    if ((uVar4 >> 0x1b & 1) == 0) {
LAB_00703df8:
      bVar8 = *(byte *)((long)puVar20 + 0xf) & 0xf;
      if (bVar8 < 2) {
        if ((*(byte *)((long)puVar20 + 0xf) & 0xf) == 0) {
          FUN_007072d8();
        }
        else {
          FUN_00707490();
        }
      }
      else if (bVar8 == 2) {
        FUN_00707640();
      }
      else {
        FUN_007077f0(puVar20,pvVar15);
      }
    }
    else {
      puVar17 = *(uint **)(lVar1 + 8);
      uVar14 = *(uint *)((long)pvVar15 + (ulong)*(byte *)((long)puVar20 + 0xe));
      uVar16 = (ulong)(*puVar17 >> 0x10);
      uVar10 = (long)(int)uVar14 - (long)(short)*puVar17;
      uVar19 = uVar10 - uVar16;
      if (uVar10 < uVar16) goto LAB_00703df8;
      uVar3 = puVar17[1];
      if ((ushort)uVar3 <= uVar19) {
        uVar19 = 0;
        do {
          if (uVar3 >> 0x10 <= uVar19) goto LAB_00703eec;
          lVar9 = uVar19 + 2;
          lVar11 = 1;
          if ((int)puVar17[(ulong)(uVar3 >> 5 & 0x7ff) + lVar9] <= (int)uVar14) {
            lVar11 = 2;
          }
          uVar19 = lVar11 + uVar19 * 2;
        } while (puVar17[(ulong)(uVar3 >> 5 & 0x7ff) + lVar9] != uVar14);
        goto LAB_00703df8;
      }
      if ((puVar17[(uVar19 >> 5) + 2] >> (ulong)((uint)uVar19 & 0x1f) & 1) != 0) goto LAB_00703df8;
LAB_00703eec:
      FUN_0070081c(param_1,param_5,puVar20,param_4 & 0xffffffff,pvVar15);
    }
    if ((ushort *)*param_3 <= puVar12) {
      uVar19 = (ulong)*param_5;
      if (uVar19 != 0) {
        *(uint *)(param_1 + uVar19) = *(uint *)(param_1 + uVar19) | (uint)param_6;
      }
      return puVar12;
    }
    param_2 = (ushort *)((long)puVar12 + 1);
    bVar8 = (byte)*puVar12;
    uVar14 = (uint)bVar8;
    if ((char)bVar8 < '\0') {
      bVar6 = *(byte *)param_2;
      if ((char)bVar6 < '\0') {
        bVar7 = (byte)puVar12[1];
        uVar14 = (uint)(((ulong)bVar8 << 0x39) >> 0x27) | (uint)(((ulong)bVar6 << 0x39) >> 0x20);
        if ((char)bVar7 < '\0') {
          bVar8 = *(byte *)((long)puVar12 + 3);
          uVar14 = uVar14 >> 7 | (uint)(((ulong)bVar7 << 0x39) >> 0x20);
          if ((char)bVar8 < '\0') {
            if ((long)(char)puVar12[2] < 0) {
              uVar14 = 0;
              param_2 = (ushort *)0x0;
            }
            else {
              uVar14 = (uVar14 >> 7 | (uint)(((ulong)bVar8 << 0x39) >> 0x20)) >> 4 |
                       (uint)((long)(char)puVar12[2] << 0x1c);
              param_2 = (ushort *)((long)puVar12 + 5);
            }
          }
          else {
            uVar14 = uVar14 >> 0xb | (uint)bVar8 << 0x15;
            param_2 = puVar12 + 2;
          }
        }
        else {
          uVar14 = uVar14 >> 0x12 | (uint)bVar7 << 0xe;
          param_2 = (ushort *)((long)puVar12 + 3);
        }
      }
      else {
        uVar14 = bVar8 & 0x7f | (uint)bVar6 << 7;
        param_2 = puVar12 + 1;
      }
    }
    if (uVar14 != (uint)param_4) {
      uVar19 = (ulong)*puVar12 & (ulong)(byte)param_5[4];
                    /* WARNING: Could not recover jumptable at 0x00704054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar12 = (ushort *)
                (**(code **)(param_5 + uVar19 + 0x1c))
                          (param_1,puVar12,param_3,
                           *(ulong *)(param_5 + uVar19 + 0x20) ^ (ulong)*puVar12,param_5,param_6);
      return puVar12;
    }
  } while( true );
}


// ===== 007040c0  FUN_007040c0 =====

void FUN_007040c0(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,long param_5)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  ulong uVar4;
  
  if ((param_4 & 7) != 0) {
    if (((uint)param_4 & 7) == 2) {
      switchD_006fe28c::caseD_2();
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00704134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_5 + 0x30))();
    return;
  }
  param_5 = param_5 + (param_4 >> 0x20);
  uVar1 = *(uint *)(param_5 + 4);
  uVar2 = *(ushort *)(param_5 + 10);
  if (uVar1 != 0xffffffff) {
    uVar4 = (ulong)(uVar1 >> 3) & 0x1ffffffc;
    *(uint *)(param_1 + uVar4) = *(uint *)(param_1 + uVar4) | 1 << (ulong)(uVar1 & 0x1f);
  }
  uVar3 = uVar2 >> 6 & 7;
  if (uVar3 != 0) {
    if (uVar3 != 2) {
      if ((uVar2 & 0x600) != 0) {
        FUN_0070433c();
        return;
      }
      FUN_0070415c();
      return;
    }
    uVar1 = (uVar2 & 0x600) >> 9;
    if (uVar1 < 2) {
      if (uVar1 == 0) {
        FUN_00704524();
        return;
      }
      FUN_00704704();
      return;
    }
    if (uVar1 == 2) {
      FUN_007048ec();
      return;
    }
    FUN_00704b8c();
    return;
  }
  FUN_00704dcc();
  return;
}


// ===== 0070415c  FUN_0070415c =====

byte * FUN_0070415c(long param_1,ulong *param_2,undefined8 *param_3,ulong param_4,ushort *param_5,
                   uint param_6)

{
  ulong *puVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  int iVar6;
  ulong uVar7;
  byte *pbVar8;
  undefined1 *puVar9;
  int iVar10;
  undefined1 auVar11 [12];
  undefined1 *local_68;
  
  puVar1 = (ulong *)(param_1 + (ulong)*(uint *)((long)param_5 + (param_4 >> 0x20)));
  do {
    local_68 = &DAT_aaaaaaaaaaaaaaaa;
    uVar7 = *param_2;
    if (((uint)uVar7 >> 7 & 1) == 0) {
      puVar9 = (undefined1 *)(uVar7 & 0x7f);
      pbVar5 = (byte *)((long)param_2 + 1);
    }
    else if (((uint)uVar7 >> 0xf & 1) == 0) {
      pbVar5 = (byte *)((long)param_2 + 2);
      puVar9 = (undefined1 *)(uVar7 & 0x7f | (uVar7 >> 8 & 0x7f) << 7);
    }
    else {
      pbVar5 = (byte *)FUN_00705258(param_2,&local_68);
      puVar9 = local_68;
    }
    local_68 = puVar9;
    if (pbVar5 == (byte *)0x0) goto LAB_007042cc;
    uVar7 = *puVar1;
    if (((uint)uVar7 >> 2 & 1) == 0) {
      uVar2 = (uint)uVar7 & 3;
      if (uVar2 == 1) {
        iVar6 = 1;
LAB_00704294:
        iVar10 = iVar6 + 1;
        FUN_006f8940(puVar1,(uVar7 & 4) == 0,iVar6,iVar10);
        uVar7 = *puVar1;
        iVar6 = (int)puVar1[1];
        goto LAB_0070420c;
      }
      (puVar1 + 1)[uVar7 & 3] = (ulong)puVar9;
      *puVar1 = uVar7 & 0xfffffffffffffff8 | (ulong)(uVar2 + 1);
    }
    else {
      iVar6 = (int)puVar1[1];
      if (iVar6 == *(int *)((long)puVar1 + 0xc)) goto LAB_00704294;
      iVar10 = iVar6 + 1;
LAB_0070420c:
      *(int *)(puVar1 + 1) = iVar10;
      *(undefined1 **)((uVar7 & 0xfffffffffffffff8) + (long)iVar6 * 8) = puVar9;
    }
    if ((byte *)*param_3 <= pbVar5) break;
    pbVar8 = pbVar5 + 1;
    bVar4 = *pbVar5;
    auVar11[8] = bVar4;
    auVar11._0_8_ = pbVar8;
    auVar11._9_3_ = 0;
    if ((char)bVar4 < '\0') {
      bVar3 = *pbVar8;
      if ((char)bVar3 < '\0') {
        auVar11 = FUN_006f61a4(pbVar5);
        pbVar8 = auVar11._0_8_;
      }
      else {
        pbVar8 = pbVar5 + 2;
        auVar11._8_4_ = (uint)bVar4 + (uint)bVar3 * 0x80 + -0x80;
        auVar11._0_8_ = pbVar8;
      }
    }
    if (pbVar8 == (byte *)0x0) {
LAB_007042cc:
      pbVar5 = (byte *)switchD_006fe28c::caseD_8(param_1);
      return pbVar5;
    }
    param_2 = auVar11._0_8_;
  } while (auVar11._8_4_ == (int)param_4);
  uVar7 = (ulong)*param_5;
  if (uVar7 != 0) {
    *(uint *)(param_1 + uVar7) = *(uint *)(param_1 + uVar7) | param_6;
  }
  return pbVar5;
}


// ===== 0070433c  FUN_0070433c =====

byte * FUN_0070433c(long param_1,ulong *param_2,undefined8 *param_3,ulong param_4,ushort *param_5,
                   uint param_6)

{
  ulong *puVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  int iVar6;
  ulong uVar7;
  byte *pbVar8;
  ulong uVar9;
  int iVar10;
  undefined1 auVar11 [12];
  undefined1 *local_68;
  
  puVar1 = (ulong *)(param_1 + (ulong)*(uint *)((long)param_5 + (param_4 >> 0x20)));
  do {
    local_68 = &DAT_aaaaaaaaaaaaaaaa;
    uVar7 = *param_2;
    if (((uint)uVar7 >> 7 & 1) == 0) {
      local_68 = (undefined1 *)(uVar7 & 0x7f);
      pbVar5 = (byte *)((long)param_2 + 1);
    }
    else if (((uint)uVar7 >> 0xf & 1) == 0) {
      pbVar5 = (byte *)((long)param_2 + 2);
      local_68 = (undefined1 *)(uVar7 & 0x7f | (uVar7 >> 8 & 0x7f) << 7);
    }
    else {
      pbVar5 = (byte *)FUN_00705258(param_2,&local_68);
    }
    if (pbVar5 == (byte *)0x0) goto LAB_007044b4;
    uVar7 = *puVar1;
    uVar9 = -((ulong)local_68 & 1) ^ (ulong)local_68 >> 1;
    if (((uint)uVar7 >> 2 & 1) == 0) {
      uVar2 = (uint)uVar7 & 3;
      if (uVar2 == 1) {
        iVar6 = 1;
LAB_0070447c:
        iVar10 = iVar6 + 1;
        FUN_006f8940(puVar1,(uVar7 & 4) == 0,iVar6,iVar10);
        uVar7 = *puVar1;
        iVar6 = (int)puVar1[1];
        goto LAB_007043f4;
      }
      (puVar1 + 1)[uVar7 & 3] = uVar9;
      *puVar1 = uVar7 & 0xfffffffffffffff8 | (ulong)(uVar2 + 1);
    }
    else {
      iVar6 = (int)puVar1[1];
      if (iVar6 == *(int *)((long)puVar1 + 0xc)) goto LAB_0070447c;
      iVar10 = iVar6 + 1;
LAB_007043f4:
      *(int *)(puVar1 + 1) = iVar10;
      *(ulong *)((uVar7 & 0xfffffffffffffff8) + (long)iVar6 * 8) = uVar9;
    }
    if ((byte *)*param_3 <= pbVar5) break;
    pbVar8 = pbVar5 + 1;
    bVar4 = *pbVar5;
    auVar11[8] = bVar4;
    auVar11._0_8_ = pbVar8;
    auVar11._9_3_ = 0;
    if ((char)bVar4 < '\0') {
      bVar3 = *pbVar8;
      if ((char)bVar3 < '\0') {
        auVar11 = FUN_006f61a4(pbVar5);
        pbVar8 = auVar11._0_8_;
      }
      else {
        pbVar8 = pbVar5 + 2;
        auVar11._8_4_ = (uint)bVar4 + (uint)bVar3 * 0x80 + -0x80;
        auVar11._0_8_ = pbVar8;
      }
    }
    if (pbVar8 == (byte *)0x0) {
LAB_007044b4:
      pbVar5 = (byte *)switchD_006fe28c::caseD_8(param_1);
      return pbVar5;
    }
    param_2 = auVar11._0_8_;
  } while (auVar11._8_4_ == (int)param_4);
  uVar7 = (ulong)*param_5;
  if (uVar7 != 0) {
    *(uint *)(param_1 + uVar7) = *(uint *)(param_1 + uVar7) | param_6;
  }
  return pbVar5;
}


// ===== 00704524  FUN_00704524 =====

byte * FUN_00704524(long param_1,ulong *param_2,undefined8 *param_3,ulong param_4,ushort *param_5,
                   uint param_6)

{
  ulong *puVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  ulong uVar8;
  byte *pbVar9;
  int iVar10;
  undefined1 auVar11 [12];
  undefined1 *local_68;
  
  puVar1 = (ulong *)(param_1 + (ulong)*(uint *)((long)param_5 + (param_4 >> 0x20)));
  do {
    local_68 = &DAT_aaaaaaaaaaaaaaaa;
    uVar8 = *param_2;
    if (((uint)uVar8 >> 7 & 1) == 0) {
      local_68 = (undefined1 *)(uVar8 & 0x7f);
      pbVar6 = (byte *)((long)param_2 + 1);
    }
    else if (((uint)uVar8 >> 0xf & 1) == 0) {
      pbVar6 = (byte *)((long)param_2 + 2);
      local_68 = (undefined1 *)(uVar8 & 0x7f | (uVar8 >> 8 & 0x7f) << 7);
    }
    else {
      pbVar6 = (byte *)FUN_00705258(param_2,&local_68);
    }
    if (pbVar6 == (byte *)0x0) goto LAB_00704694;
    uVar8 = *puVar1;
    iVar5 = (int)local_68;
    if (((uint)uVar8 >> 2 & 1) == 0) {
      uVar2 = (uint)uVar8 & 3;
      if (uVar2 == 2) {
        iVar7 = 2;
LAB_0070465c:
        iVar10 = iVar7 + 1;
        FUN_006f7ed0(puVar1,(uVar8 & 4) == 0,iVar7,iVar10);
        uVar8 = *puVar1;
        iVar7 = (int)puVar1[1];
        goto LAB_007045d4;
      }
      *(int *)((long)(puVar1 + 1) + (uVar8 & 3) * 4) = (int)local_68;
      *puVar1 = uVar8 & 0xfffffffffffffff8 | (ulong)(uVar2 + 1);
    }
    else {
      iVar7 = (int)puVar1[1];
      if (iVar7 == *(int *)((long)puVar1 + 0xc)) goto LAB_0070465c;
      iVar10 = iVar7 + 1;
LAB_007045d4:
      *(int *)(puVar1 + 1) = iVar10;
      *(int *)((uVar8 & 0xfffffffffffffff8) + (long)iVar7 * 4) = iVar5;
    }
    if ((byte *)*param_3 <= pbVar6) break;
    pbVar9 = pbVar6 + 1;
    bVar4 = *pbVar6;
    auVar11[8] = bVar4;
    auVar11._0_8_ = pbVar9;
    auVar11._9_3_ = 0;
    if ((char)bVar4 < '\0') {
      bVar3 = *pbVar9;
      if ((char)bVar3 < '\0') {
        auVar11 = FUN_006f61a4(pbVar6);
        pbVar9 = auVar11._0_8_;
      }
      else {
        pbVar9 = pbVar6 + 2;
        auVar11._8_4_ = (uint)bVar4 + (uint)bVar3 * 0x80 + -0x80;
        auVar11._0_8_ = pbVar9;
      }
    }
    if (pbVar9 == (byte *)0x0) {
LAB_00704694:
      pbVar6 = (byte *)switchD_006fe28c::caseD_8(param_1);
      return pbVar6;
    }
    param_2 = auVar11._0_8_;
  } while (auVar11._8_4_ == (int)param_4);
  uVar8 = (ulong)*param_5;
  if (uVar8 != 0) {
    *(uint *)(param_1 + uVar8) = *(uint *)(param_1 + uVar8) | param_6;
  }
  return pbVar6;
}


// ===== 00704704  FUN_00704704 =====

byte * FUN_00704704(long param_1,ulong *param_2,undefined8 *param_3,ulong param_4,ushort *param_5,
                   uint param_6)

{
  ulong *puVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  byte *pbVar6;
  int iVar7;
  ulong uVar8;
  byte *pbVar9;
  int iVar10;
  undefined1 auVar11 [12];
  undefined1 *local_68;
  
  puVar1 = (ulong *)(param_1 + (ulong)*(uint *)((long)param_5 + (param_4 >> 0x20)));
  do {
    local_68 = &DAT_aaaaaaaaaaaaaaaa;
    uVar8 = *param_2;
    if (((uint)uVar8 >> 7 & 1) == 0) {
      local_68 = (undefined1 *)(uVar8 & 0x7f);
      pbVar6 = (byte *)((long)param_2 + 1);
    }
    else if (((uint)uVar8 >> 0xf & 1) == 0) {
      pbVar6 = (byte *)((long)param_2 + 2);
      local_68 = (undefined1 *)(uVar8 & 0x7f | (uVar8 >> 8 & 0x7f) << 7);
    }
    else {
      pbVar6 = (byte *)FUN_00705258(param_2,&local_68);
    }
    if (pbVar6 == (byte *)0x0) goto LAB_0070487c;
    uVar8 = *puVar1;
    uVar3 = -((uint)local_68 & 1) ^ (uint)local_68 >> 1;
    if (((uint)uVar8 >> 2 & 1) == 0) {
      uVar2 = (uint)uVar8 & 3;
      if (uVar2 == 2) {
        iVar7 = 2;
LAB_00704844:
        iVar10 = iVar7 + 1;
        FUN_006f7ed0(puVar1,(uVar8 & 4) == 0,iVar7,iVar10);
        uVar8 = *puVar1;
        iVar7 = (int)puVar1[1];
        goto LAB_007047bc;
      }
      *(uint *)((long)(puVar1 + 1) + (uVar8 & 3) * 4) = uVar3;
      *puVar1 = uVar8 & 0xfffffffffffffff8 | (ulong)(uVar2 + 1);
    }
    else {
      iVar7 = (int)puVar1[1];
      if (iVar7 == *(int *)((long)puVar1 + 0xc)) goto LAB_00704844;
      iVar10 = iVar7 + 1;
LAB_007047bc:
      *(int *)(puVar1 + 1) = iVar10;
      *(uint *)((uVar8 & 0xfffffffffffffff8) + (long)iVar7 * 4) = uVar3;
    }
    if ((byte *)*param_3 <= pbVar6) break;
    pbVar9 = pbVar6 + 1;
    bVar5 = *pbVar6;
    auVar11[8] = bVar5;
    auVar11._0_8_ = pbVar9;
    auVar11._9_3_ = 0;
    if ((char)bVar5 < '\0') {
      bVar4 = *pbVar9;
      if ((char)bVar4 < '\0') {
        auVar11 = FUN_006f61a4(pbVar6);
        pbVar9 = auVar11._0_8_;
      }
      else {
        pbVar9 = pbVar6 + 2;
        auVar11._8_4_ = (uint)bVar5 + (uint)bVar4 * 0x80 + -0x80;
        auVar11._0_8_ = pbVar9;
      }
    }
    if (pbVar9 == (byte *)0x0) {
LAB_0070487c:
      pbVar6 = (byte *)switchD_006fe28c::caseD_8(param_1);
      return pbVar6;
    }
    param_2 = auVar11._0_8_;
  } while (auVar11._8_4_ == (int)param_4);
  uVar8 = (ulong)*param_5;
  if (uVar8 != 0) {
    *(uint *)(param_1 + uVar8) = *(uint *)(param_1 + uVar8) | param_6;
  }
  return pbVar6;
}


// ===== 007048ec  FUN_007048ec =====

byte * FUN_007048ec(long param_1,ulong *param_2,undefined8 *param_3,ulong param_4,ushort *param_5,
                   undefined8 param_6)

{
  ulong *puVar1;
  uint uVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  byte *pbVar7;
  int iVar8;
  ulong uVar9;
  byte *pbVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  undefined1 auVar16 [12];
  undefined1 *local_68;
  
  puVar15 = (uint *)((long)param_5 + (param_4 >> 0x20));
  puVar1 = (ulong *)(param_1 + (ulong)*puVar15);
  puVar15 = *(uint **)((long)param_5 +
                      (ulong)(ushort)puVar15[2] * 8 + (ulong)*(uint *)(param_5 + 0xc));
  do {
    local_68 = &DAT_aaaaaaaaaaaaaaaa;
    uVar9 = *param_2;
    if (((uint)uVar9 >> 7 & 1) == 0) {
      local_68 = (undefined1 *)(uVar9 & 0x7f);
      pbVar7 = (byte *)((long)param_2 + 1);
    }
    else if (((uint)uVar9 >> 0xf & 1) == 0) {
      pbVar7 = (byte *)((long)param_2 + 2);
      local_68 = (undefined1 *)(uVar9 & 0x7f | (uVar9 >> 8 & 0x7f) << 7);
    }
    else {
      pbVar7 = (byte *)FUN_00705258(param_2,&local_68);
    }
    if (pbVar7 == (byte *)0x0) goto LAB_00704ae8;
    uVar13 = (uint)local_68;
    uVar12 = (ulong)(*puVar15 >> 0x10);
    uVar11 = (long)(int)uVar13 - (long)(short)*puVar15;
    uVar9 = uVar11 - uVar12;
    if (uVar12 <= uVar11) {
      uVar2 = puVar15[1];
      if (uVar9 < (ushort)uVar2) {
        if ((puVar15[(uVar9 >> 5) + 2] >> (ulong)((uint)uVar9 & 0x1f) & 1) == 0) {
LAB_00704b54:
          pbVar7 = (byte *)FUN_006ff8bc(param_1,param_2,param_3,param_4,param_5,param_6);
          return pbVar7;
        }
      }
      else {
        uVar9 = 0;
        do {
          if (uVar2 >> 0x10 <= uVar9) goto LAB_00704b54;
          lVar6 = uVar9 + 2;
          lVar3 = 1;
          if ((int)puVar15[(ulong)(uVar2 >> 5 & 0x7ff) + lVar6] <= (int)uVar13) {
            lVar3 = 2;
          }
          uVar9 = lVar3 + uVar9 * 2;
        } while (puVar15[(ulong)(uVar2 >> 5 & 0x7ff) + lVar6] != uVar13);
      }
    }
    uVar9 = *puVar1;
    if (((uint)uVar9 >> 2 & 1) == 0) {
      uVar2 = (uint)uVar9 & 3;
      if (uVar2 == 2) {
        iVar8 = 2;
LAB_00704a6c:
        iVar14 = iVar8 + 1;
        FUN_006f7ed0(puVar1,(uVar9 & 4) == 0,iVar8,iVar14);
        uVar9 = *puVar1;
        iVar8 = (int)puVar1[1];
        goto LAB_007049c0;
      }
      *(uint *)((long)(puVar1 + 1) + (uVar9 & 3) * 4) = uVar13;
      *puVar1 = uVar9 & 0xfffffffffffffff8 | (ulong)(uVar2 + 1);
    }
    else {
      iVar8 = (int)puVar1[1];
      if (iVar8 == *(int *)((long)puVar1 + 0xc)) goto LAB_00704a6c;
      iVar14 = iVar8 + 1;
LAB_007049c0:
      *(int *)(puVar1 + 1) = iVar14;
      *(uint *)((uVar9 & 0xfffffffffffffff8) + (long)iVar8 * 4) = uVar13;
    }
    if ((byte *)*param_3 <= pbVar7) break;
    pbVar10 = pbVar7 + 1;
    bVar5 = *pbVar7;
    auVar16[8] = bVar5;
    auVar16._0_8_ = pbVar10;
    auVar16._9_3_ = 0;
    if ((char)bVar5 < '\0') {
      bVar4 = *pbVar10;
      if ((char)bVar4 < '\0') {
        auVar16 = FUN_006f61a4(pbVar7);
        pbVar10 = auVar16._0_8_;
      }
      else {
        pbVar10 = pbVar7 + 2;
        auVar16._8_4_ = (uint)bVar5 + (uint)bVar4 * 0x80 + -0x80;
        auVar16._0_8_ = pbVar10;
      }
    }
    if (pbVar10 == (byte *)0x0) {
LAB_00704ae8:
      pbVar7 = (byte *)switchD_006fe28c::caseD_8(param_1);
      return pbVar7;
    }
    param_2 = auVar16._0_8_;
  } while (auVar16._8_4_ == (int)param_4);
  uVar9 = (ulong)*param_5;
  if (uVar9 != 0) {
    *(uint *)(param_1 + uVar9) = *(uint *)(param_1 + uVar9) | (uint)param_6;
  }
  return pbVar7;
}


// ===== 00704b8c  FUN_00704b8c =====

byte * FUN_00704b8c(long param_1,ulong *param_2,undefined8 *param_3,ulong param_4,ushort *param_5,
                   undefined8 param_6)

{
  uint *puVar1;
  int *piVar2;
  ulong *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  byte *pbVar10;
  int iVar11;
  ulong uVar12;
  byte *pbVar13;
  int iVar14;
  undefined1 auVar15 [12];
  undefined1 *local_68;
  
  puVar1 = (uint *)((long)param_5 + (param_4 >> 0x20));
  piVar2 = (int *)((long)param_5 + (ulong)(ushort)puVar1[2] * 8 + (ulong)*(uint *)(param_5 + 0xc));
  puVar3 = (ulong *)(param_1 + (ulong)*puVar1);
  iVar5 = *piVar2;
  iVar6 = piVar2[1];
  do {
    local_68 = &DAT_aaaaaaaaaaaaaaaa;
    uVar12 = *param_2;
    if (((uint)uVar12 >> 7 & 1) == 0) {
      local_68 = (undefined1 *)(uVar12 & 0x7f);
      pbVar10 = (byte *)((long)param_2 + 1);
    }
    else if (((uint)uVar12 >> 0xf & 1) == 0) {
      pbVar10 = (byte *)((long)param_2 + 2);
      local_68 = (undefined1 *)(uVar12 & 0x7f | (uVar12 >> 8 & 0x7f) << 7);
    }
    else {
      pbVar10 = (byte *)FUN_00705258(param_2,&local_68);
    }
    if (pbVar10 == (byte *)0x0) goto LAB_00704d24;
    iVar9 = (int)local_68;
    if (((int)local_68 < iVar5) || (iVar6 < (int)local_68)) {
      pbVar10 = (byte *)FUN_006ff8bc(param_1,param_2,param_3,param_4,param_5,param_6);
      return pbVar10;
    }
    uVar12 = *puVar3;
    if (((uint)uVar12 >> 2 & 1) == 0) {
      uVar4 = (uint)uVar12 & 3;
      if (uVar4 == 2) {
        iVar11 = 2;
LAB_00704ce4:
        iVar14 = iVar11 + 1;
        FUN_006f7ed0(puVar3,(uVar12 & 4) == 0,iVar11,iVar14);
        uVar12 = *puVar3;
        iVar11 = (int)puVar3[1];
        goto LAB_00704c5c;
      }
      *(int *)((long)(puVar3 + 1) + (uVar12 & 3) * 4) = (int)local_68;
      *puVar3 = uVar12 & 0xfffffffffffffff8 | (ulong)(uVar4 + 1);
    }
    else {
      iVar11 = (int)puVar3[1];
      if (iVar11 == *(int *)((long)puVar3 + 0xc)) goto LAB_00704ce4;
      iVar14 = iVar11 + 1;
LAB_00704c5c:
      *(int *)(puVar3 + 1) = iVar14;
      *(int *)((uVar12 & 0xfffffffffffffff8) + (long)iVar11 * 4) = iVar9;
    }
    if ((byte *)*param_3 <= pbVar10) break;
    pbVar13 = pbVar10 + 1;
    bVar8 = *pbVar10;
    auVar15[8] = bVar8;
    auVar15._0_8_ = pbVar13;
    auVar15._9_3_ = 0;
    if ((char)bVar8 < '\0') {
      bVar7 = *pbVar13;
      if ((char)bVar7 < '\0') {
        auVar15 = FUN_006f61a4(pbVar10);
        pbVar13 = auVar15._0_8_;
      }
      else {
        pbVar13 = pbVar10 + 2;
        auVar15._8_4_ = (uint)bVar8 + (uint)bVar7 * 0x80 + -0x80;
        auVar15._0_8_ = pbVar13;
      }
    }
    if (pbVar13 == (byte *)0x0) {
LAB_00704d24:
      pbVar10 = (byte *)switchD_006fe28c::caseD_8(param_1);
      return pbVar10;
    }
    param_2 = auVar15._0_8_;
  } while (auVar15._8_4_ == (int)param_4);
  uVar12 = (ulong)*param_5;
  if (uVar12 != 0) {
    *(uint *)(param_1 + uVar12) = *(uint *)(param_1 + uVar12) | (uint)param_6;
  }
  return pbVar10;
}


// ===== 00704dcc  FUN_00704dcc =====

byte * FUN_00704dcc(long param_1,ulong *param_2,undefined8 *param_3,ulong param_4,ushort *param_5,
                   uint param_6)

{
  ulong *puVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  int iVar6;
  ulong uVar7;
  byte *pbVar8;
  undefined1 *puVar9;
  int iVar10;
  undefined1 auVar11 [12];
  undefined1 *local_68;
  
  puVar1 = (ulong *)(param_1 + (ulong)*(uint *)((long)param_5 + (param_4 >> 0x20)));
  do {
    local_68 = &DAT_aaaaaaaaaaaaaaaa;
    uVar7 = *param_2;
    if (((uint)uVar7 >> 7 & 1) == 0) {
      puVar9 = (undefined1 *)(uVar7 & 0x7f);
      pbVar5 = (byte *)((long)param_2 + 1);
    }
    else if (((uint)uVar7 >> 0xf & 1) == 0) {
      pbVar5 = (byte *)((long)param_2 + 2);
      puVar9 = (undefined1 *)(uVar7 & 0x7f | (uVar7 >> 8 & 0x7f) << 7);
    }
    else {
      pbVar5 = (byte *)FUN_00705258(param_2,&local_68);
      puVar9 = local_68;
    }
    local_68 = puVar9;
    if (pbVar5 == (byte *)0x0) goto LAB_00704f4c;
    uVar7 = *puVar1;
    if (((uint)uVar7 >> 2 & 1) == 0) {
      uVar2 = (uint)uVar7 & 3;
      if (uVar2 == 3) {
        iVar6 = 3;
LAB_00704f14:
        iVar10 = iVar6 + 1;
        FUN_006f9538(puVar1,(uVar7 & 4) == 0,iVar6,iVar10);
        uVar7 = *puVar1;
        iVar6 = (int)puVar1[1];
        goto LAB_00704e84;
      }
      *puVar1 = uVar7 & 0xfffffffffffffff8 | (ulong)(uVar2 + 1);
      *(bool *)((long)(puVar1 + 1) + (uVar7 & 3)) = puVar9 != (undefined1 *)0x0;
    }
    else {
      iVar6 = (int)puVar1[1];
      if (iVar6 == *(int *)((long)puVar1 + 0xc)) goto LAB_00704f14;
      iVar10 = iVar6 + 1;
LAB_00704e84:
      *(int *)(puVar1 + 1) = iVar10;
      *(bool *)((uVar7 & 0xfffffffffffffff8) + (long)iVar6) = puVar9 != (undefined1 *)0x0;
    }
    if ((byte *)*param_3 <= pbVar5) break;
    pbVar8 = pbVar5 + 1;
    bVar4 = *pbVar5;
    auVar11[8] = bVar4;
    auVar11._0_8_ = pbVar8;
    auVar11._9_3_ = 0;
    if ((char)bVar4 < '\0') {
      bVar3 = *pbVar8;
      if ((char)bVar3 < '\0') {
        auVar11 = FUN_006f61a4(pbVar5);
        pbVar8 = auVar11._0_8_;
      }
      else {
        pbVar8 = pbVar5 + 2;
        auVar11._8_4_ = (uint)bVar4 + (uint)bVar3 * 0x80 + -0x80;
        auVar11._0_8_ = pbVar8;
      }
    }
    if (pbVar8 == (byte *)0x0) {
LAB_00704f4c:
      pbVar5 = (byte *)switchD_006fe28c::caseD_8(param_1);
      return pbVar5;
    }
    param_2 = auVar11._0_8_;
  } while (auVar11._8_4_ == (int)param_4);
  uVar7 = (ulong)*param_5;
  if (uVar7 != 0) {
    *(uint *)(param_1 + uVar7) = *(uint *)(param_1 + uVar7) | param_6;
  }
  return pbVar5;
}


// ===== 00704fbc  FUN_00704fbc =====

void FUN_00704fbc(long param_1,char *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  undefined1 auVar13 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined2 local_68;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  cVar1 = *param_2;
  if (cVar1 < '\0') {
    auVar13 = FUN_006f6214(param_2,cVar1);
    lVar7 = auVar13._0_8_;
    if (lVar7 == 0) goto LAB_00705090;
  }
  else {
    auVar13[8] = cVar1;
    auVar13._0_8_ = param_2 + 1;
    auVar13._9_7_ = 0;
    if (param_2 + 1 == (char *)0x0) {
      lVar7 = 0;
      goto LAB_00705090;
    }
  }
  uVar9 = *(undefined8 *)(param_1 + 8);
  while( true ) {
    lVar6 = auVar13._0_8_;
    iVar2 = (int)uVar9 - auVar13._0_4_;
    iVar11 = auVar13._8_4_;
    if (iVar11 <= iVar2) break;
    lVar7 = FUN_0070512c(lVar6,uVar9,param_3);
    if (lVar7 == 0) goto LAB_00705090;
    puVar10 = *(undefined8 **)(param_1 + 8);
    uVar3 = iVar11 - iVar2;
    iVar12 = (int)lVar7 - (int)puVar10;
    if ((int)uVar3 < 0x11) {
      local_68 = 0;
      local_70 = 0;
      uStack_78 = puVar10[1];
      local_80 = *puVar10;
      if ((0x1a < uVar3) || (0x1a < (ulong)(long)iVar12)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(0x5512,0x70512c);
        (*pcVar5)();
      }
      lVar6 = (long)&local_80 + (ulong)uVar3;
      lVar8 = FUN_0070512c((long)&local_80 + (long)iVar12,lVar6,param_3);
      lVar7 = 0;
      if ((lVar8 != 0) && (lVar8 == lVar6)) {
        lVar7 = *(long *)(param_1 + 8) + (ulong)uVar3;
      }
      goto LAB_00705090;
    }
    if (*(int *)(param_1 + 0x1c) < 0x11) {
      lVar7 = 0;
      goto LAB_00705090;
    }
    lVar7 = FUN_006f54c0(param_1);
    if (lVar7 == 0) goto LAB_00705090;
    uVar9 = *(undefined8 *)(param_1 + 8);
    auVar13._8_4_ = (iVar11 - iVar2) - iVar12;
    auVar13._0_8_ = lVar7 + iVar12;
    auVar13._12_4_ = 0;
  }
  lVar7 = FUN_0070512c(lVar6,lVar6 + iVar11,param_3);
  if (lVar6 + iVar11 != lVar7) {
    lVar7 = 0;
  }
LAB_00705090:
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar7);
  }
  return;
}


// ===== 0070512c  FUN_0070512c =====

ulong * FUN_0070512c(ulong *param_1,ulong *param_2,ulong *param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 *local_38;
  
  if (param_1 < param_2) {
    do {
      while( true ) {
        local_38 = &DAT_aaaaaaaaaaaaaaaa;
        uVar3 = *param_1;
        if (((uint)uVar3 >> 7 & 1) == 0) {
          puVar4 = (undefined1 *)(uVar3 & 0x7f);
          param_1 = (ulong *)((long)param_1 + 1);
        }
        else if (((uint)uVar3 >> 0xf & 1) == 0) {
          param_1 = (ulong *)((long)param_1 + 2);
          puVar4 = (undefined1 *)(uVar3 & 0x7f | (uVar3 >> 8 & 0x7f) << 7);
        }
        else {
          param_1 = (ulong *)FUN_00705258(param_1,&local_38);
          puVar4 = local_38;
        }
        if (param_1 == (ulong *)0x0) {
          return (ulong *)0x0;
        }
        uVar3 = *param_3;
        if (((uint)uVar3 >> 2 & 1) != 0) break;
        uVar1 = (uint)uVar3 & 3;
        if (uVar1 == 1) {
          iVar2 = 1;
LAB_00705200:
          iVar5 = iVar2 + 1;
          local_38 = puVar4;
          FUN_006f8940(param_3,(uVar3 & 4) == 0,iVar2,iVar5);
          uVar3 = *param_3;
          iVar2 = (int)param_3[1];
          goto LAB_007051cc;
        }
        (param_3 + 1)[uVar3 & 3] = (ulong)puVar4;
        *param_3 = uVar3 & 0xfffffffffffffff8 | (ulong)(uVar1 + 1);
        if (param_2 <= param_1) {
          return param_1;
        }
      }
      iVar2 = (int)param_3[1];
      if (iVar2 == *(int *)((long)param_3 + 0xc)) goto LAB_00705200;
      iVar5 = iVar2 + 1;
LAB_007051cc:
      *(int *)(param_3 + 1) = iVar5;
      *(undefined1 **)((uVar3 & 0xfffffffffffffff8) + (long)iVar2 * 8) = puVar4;
    } while (param_1 < param_2);
  }
  return param_1;
}


// ===== 00705258  FUN_00705258 =====

long FUN_00705258(long param_1,ulong *param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = *(ulong *)(param_1 + 2);
  uVar2 = (uVar1 ^ 0xffffffffffffffff) & 0x8080808080808080;
  if (uVar2 != 0) {
    uVar2 = uVar2 >> 7;
    uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    uVar3 = LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20);
    uVar2 = param_3 & 0x7f | (param_3 >> 8 & 0x7f) << 7 |
            (param_3 >> 0x10 & 0x7f | (param_3 >> 0x18 & 0x7f) << 7) << 0xe |
            (param_3 >> 0x20 & 0x7f | (param_3 >> 0x28 & 0x7f) << 7) << 0x1c;
    if (((uint)uVar3 >> 5 & 1) != 0) {
      uVar2 = (param_3 >> 0x30 & 0x7f | (param_3 >> 0x38 & 0x7f) << 7) << 0x2a |
              (uVar1 >> 0x30 & 0x7f | (uVar1 >> 0x38 & 0x7f) << 7) << 0x38 | uVar2;
    }
    *param_2 = uVar2 & (-0x4000L << (uVar3 - (uVar3 >> 3) & 0x3f) ^ 0xffffffffffffffffU);
    return param_1 + (uVar3 >> 3) + 3;
  }
  *param_2 = 0;
  return 0;
}


// ===== 007052f8  FUN_007052f8 =====

void FUN_007052f8(long param_1,char *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  undefined1 auVar13 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined2 local_68;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  cVar1 = *param_2;
  if (cVar1 < '\0') {
    auVar13 = FUN_006f6214(param_2,cVar1);
    lVar7 = auVar13._0_8_;
    if (lVar7 == 0) goto LAB_007053cc;
  }
  else {
    auVar13[8] = cVar1;
    auVar13._0_8_ = param_2 + 1;
    auVar13._9_7_ = 0;
    if (param_2 + 1 == (char *)0x0) {
      lVar7 = 0;
      goto LAB_007053cc;
    }
  }
  uVar9 = *(undefined8 *)(param_1 + 8);
  while( true ) {
    lVar6 = auVar13._0_8_;
    iVar2 = (int)uVar9 - auVar13._0_4_;
    iVar11 = auVar13._8_4_;
    if (iVar11 <= iVar2) break;
    lVar7 = FUN_00705468(lVar6,uVar9,param_3);
    if (lVar7 == 0) goto LAB_007053cc;
    puVar10 = *(undefined8 **)(param_1 + 8);
    uVar3 = iVar11 - iVar2;
    iVar12 = (int)lVar7 - (int)puVar10;
    if ((int)uVar3 < 0x11) {
      local_68 = 0;
      local_70 = 0;
      uStack_78 = puVar10[1];
      local_80 = *puVar10;
      if ((0x1a < uVar3) || (0x1a < (ulong)(long)iVar12)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(0x5512,0x705468);
        (*pcVar5)();
      }
      lVar6 = (long)&local_80 + (ulong)uVar3;
      lVar8 = FUN_00705468((long)&local_80 + (long)iVar12,lVar6,param_3);
      lVar7 = 0;
      if ((lVar8 != 0) && (lVar8 == lVar6)) {
        lVar7 = *(long *)(param_1 + 8) + (ulong)uVar3;
      }
      goto LAB_007053cc;
    }
    if (*(int *)(param_1 + 0x1c) < 0x11) {
      lVar7 = 0;
      goto LAB_007053cc;
    }
    lVar7 = FUN_006f54c0(param_1);
    if (lVar7 == 0) goto LAB_007053cc;
    uVar9 = *(undefined8 *)(param_1 + 8);
    auVar13._8_4_ = (iVar11 - iVar2) - iVar12;
    auVar13._0_8_ = lVar7 + iVar12;
    auVar13._12_4_ = 0;
  }
  lVar7 = FUN_00705468(lVar6,lVar6 + iVar11,param_3);
  if (lVar6 + iVar11 != lVar7) {
    lVar7 = 0;
  }
LAB_007053cc:
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar7);
  }
  return;
}


// ===== 00705468  FUN_00705468 =====

ulong * FUN_00705468(ulong *param_1,ulong *param_2,ulong *param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  undefined1 *local_38;
  
  if (param_1 < param_2) {
    do {
      while( true ) {
        local_38 = &DAT_aaaaaaaaaaaaaaaa;
        uVar3 = *param_1;
        if (((uint)uVar3 >> 7 & 1) == 0) {
          local_38 = (undefined1 *)(uVar3 & 0x7f);
          param_1 = (ulong *)((long)param_1 + 1);
        }
        else if (((uint)uVar3 >> 0xf & 1) == 0) {
          param_1 = (ulong *)((long)param_1 + 2);
          local_38 = (undefined1 *)(uVar3 & 0x7f | (uVar3 >> 8 & 0x7f) << 7);
        }
        else {
          param_1 = (ulong *)FUN_00705258(param_1,&local_38);
        }
        if (param_1 == (ulong *)0x0) {
          return (ulong *)0x0;
        }
        uVar3 = *param_3;
        uVar5 = -((ulong)local_38 & 1) ^ (ulong)local_38 >> 1;
        if (((uint)uVar3 >> 2 & 1) != 0) break;
        uVar1 = (uint)uVar3 & 3;
        if (uVar1 == 1) {
          iVar2 = 1;
LAB_00705544:
          iVar4 = iVar2 + 1;
          FUN_006f8940(param_3,(uVar3 & 4) == 0,iVar2,iVar4);
          uVar3 = *param_3;
          iVar2 = (int)param_3[1];
          goto LAB_00705510;
        }
        (param_3 + 1)[uVar3 & 3] = uVar5;
        *param_3 = uVar3 & 0xfffffffffffffff8 | (ulong)(uVar1 + 1);
        if (param_2 <= param_1) {
          return param_1;
        }
      }
      iVar2 = (int)param_3[1];
      if (iVar2 == *(int *)((long)param_3 + 0xc)) goto LAB_00705544;
      iVar4 = iVar2 + 1;
LAB_00705510:
      *(int *)(param_3 + 1) = iVar4;
      *(ulong *)((uVar3 & 0xfffffffffffffff8) + (long)iVar2 * 8) = uVar5;
    } while (param_1 < param_2);
  }
  return param_1;
}


// ===== 0070559c  FUN_0070559c =====

void FUN_0070559c(long param_1,char *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  undefined1 auVar13 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined2 local_68;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  cVar1 = *param_2;
  if (cVar1 < '\0') {
    auVar13 = FUN_006f6214(param_2,cVar1);
    lVar7 = auVar13._0_8_;
    if (lVar7 == 0) goto LAB_00705670;
  }
  else {
    auVar13[8] = cVar1;
    auVar13._0_8_ = param_2 + 1;
    auVar13._9_7_ = 0;
    if (param_2 + 1 == (char *)0x0) {
      lVar7 = 0;
      goto LAB_00705670;
    }
  }
  uVar9 = *(undefined8 *)(param_1 + 8);
  while( true ) {
    lVar6 = auVar13._0_8_;
    iVar2 = (int)uVar9 - auVar13._0_4_;
    iVar11 = auVar13._8_4_;
    if (iVar11 <= iVar2) break;
    lVar7 = FUN_0070570c(lVar6,uVar9,param_3);
    if (lVar7 == 0) goto LAB_00705670;
    puVar10 = *(undefined8 **)(param_1 + 8);
    uVar3 = iVar11 - iVar2;
    iVar12 = (int)lVar7 - (int)puVar10;
    if ((int)uVar3 < 0x11) {
      local_68 = 0;
      local_70 = 0;
      uStack_78 = puVar10[1];
      local_80 = *puVar10;
      if ((0x1a < uVar3) || (0x1a < (ulong)(long)iVar12)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(0x5512,0x70570c);
        (*pcVar5)();
      }
      lVar6 = (long)&local_80 + (ulong)uVar3;
      lVar8 = FUN_0070570c((long)&local_80 + (long)iVar12,lVar6,param_3);
      lVar7 = 0;
      if ((lVar8 != 0) && (lVar8 == lVar6)) {
        lVar7 = *(long *)(param_1 + 8) + (ulong)uVar3;
      }
      goto LAB_00705670;
    }
    if (*(int *)(param_1 + 0x1c) < 0x11) {
      lVar7 = 0;
      goto LAB_00705670;
    }
    lVar7 = FUN_006f54c0(param_1);
    if (lVar7 == 0) goto LAB_00705670;
    uVar9 = *(undefined8 *)(param_1 + 8);
    auVar13._8_4_ = (iVar11 - iVar2) - iVar12;
    auVar13._0_8_ = lVar7 + iVar12;
    auVar13._12_4_ = 0;
  }
  lVar7 = FUN_0070570c(lVar6,lVar6 + iVar11,param_3);
  if (lVar6 + iVar11 != lVar7) {
    lVar7 = 0;
  }
LAB_00705670:
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar7);
  }
  return;
}


// ===== 0070570c  FUN_0070570c =====

ulong * FUN_0070570c(ulong *param_1,ulong *param_2,ulong *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  undefined1 *local_38;
  
  if (param_1 < param_2) {
    do {
      while( true ) {
        local_38 = &DAT_aaaaaaaaaaaaaaaa;
        uVar4 = *param_1;
        if (((uint)uVar4 >> 7 & 1) == 0) {
          local_38 = (undefined1 *)(uVar4 & 0x7f);
          param_1 = (ulong *)((long)param_1 + 1);
        }
        else if (((uint)uVar4 >> 0xf & 1) == 0) {
          param_1 = (ulong *)((long)param_1 + 2);
          local_38 = (undefined1 *)(uVar4 & 0x7f | (uVar4 >> 8 & 0x7f) << 7);
        }
        else {
          param_1 = (ulong *)FUN_00705258(param_1,&local_38);
        }
        if (param_1 == (ulong *)0x0) {
          return (ulong *)0x0;
        }
        uVar4 = *param_3;
        iVar2 = (int)local_38;
        if (((uint)uVar4 >> 2 & 1) != 0) break;
        uVar1 = (uint)uVar4 & 3;
        if (uVar1 == 2) {
          iVar3 = 2;
LAB_007057e0:
          iVar5 = iVar3 + 1;
          FUN_006f7ed0(param_3,(uVar4 & 4) == 0,iVar3,iVar5);
          uVar4 = *param_3;
          iVar3 = (int)param_3[1];
          goto LAB_007057ac;
        }
        *(int *)((long)(param_3 + 1) + (uVar4 & 3) * 4) = (int)local_38;
        *param_3 = uVar4 & 0xfffffffffffffff8 | (ulong)(uVar1 + 1);
        if (param_2 <= param_1) {
          return param_1;
        }
      }
      iVar3 = (int)param_3[1];
      if (iVar3 == *(int *)((long)param_3 + 0xc)) goto LAB_007057e0;
      iVar5 = iVar3 + 1;
LAB_007057ac:
      *(int *)(param_3 + 1) = iVar5;
      *(int *)((uVar4 & 0xfffffffffffffff8) + (long)iVar3 * 4) = iVar2;
    } while (param_1 < param_2);
  }
  return param_1;
}


// ===== 00705838  FUN_00705838 =====

void FUN_00705838(long param_1,char *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  undefined1 auVar13 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined2 local_68;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  cVar1 = *param_2;
  if (cVar1 < '\0') {
    auVar13 = FUN_006f6214(param_2,cVar1);
    lVar7 = auVar13._0_8_;
    if (lVar7 == 0) goto LAB_0070590c;
  }
  else {
    auVar13[8] = cVar1;
    auVar13._0_8_ = param_2 + 1;
    auVar13._9_7_ = 0;
    if (param_2 + 1 == (char *)0x0) {
      lVar7 = 0;
      goto LAB_0070590c;
    }
  }
  uVar9 = *(undefined8 *)(param_1 + 8);
  while( true ) {
    lVar6 = auVar13._0_8_;
    iVar2 = (int)uVar9 - auVar13._0_4_;
    iVar11 = auVar13._8_4_;
    if (iVar11 <= iVar2) break;
    lVar7 = FUN_007059a8(lVar6,uVar9,param_3);
    if (lVar7 == 0) goto LAB_0070590c;
    puVar10 = *(undefined8 **)(param_1 + 8);
    uVar3 = iVar11 - iVar2;
    iVar12 = (int)lVar7 - (int)puVar10;
    if ((int)uVar3 < 0x11) {
      local_68 = 0;
      local_70 = 0;
      uStack_78 = puVar10[1];
      local_80 = *puVar10;
      if ((0x1a < uVar3) || (0x1a < (ulong)(long)iVar12)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(0x5512,0x7059a8);
        (*pcVar5)();
      }
      lVar6 = (long)&local_80 + (ulong)uVar3;
      lVar8 = FUN_007059a8((long)&local_80 + (long)iVar12,lVar6,param_3);
      lVar7 = 0;
      if ((lVar8 != 0) && (lVar8 == lVar6)) {
        lVar7 = *(long *)(param_1 + 8) + (ulong)uVar3;
      }
      goto LAB_0070590c;
    }
    if (*(int *)(param_1 + 0x1c) < 0x11) {
      lVar7 = 0;
      goto LAB_0070590c;
    }
    lVar7 = FUN_006f54c0(param_1);
    if (lVar7 == 0) goto LAB_0070590c;
    uVar9 = *(undefined8 *)(param_1 + 8);
    auVar13._8_4_ = (iVar11 - iVar2) - iVar12;
    auVar13._0_8_ = lVar7 + iVar12;
    auVar13._12_4_ = 0;
  }
  lVar7 = FUN_007059a8(lVar6,lVar6 + iVar11,param_3);
  if (lVar6 + iVar11 != lVar7) {
    lVar7 = 0;
  }
LAB_0070590c:
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar7);
  }
  return;
}


// ===== 007059a8  FUN_007059a8 =====

ulong * FUN_007059a8(ulong *param_1,ulong *param_2,ulong *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  undefined1 *local_38;
  
  if (param_1 < param_2) {
    do {
      while( true ) {
        local_38 = &DAT_aaaaaaaaaaaaaaaa;
        uVar4 = *param_1;
        if (((uint)uVar4 >> 7 & 1) == 0) {
          local_38 = (undefined1 *)(uVar4 & 0x7f);
          param_1 = (ulong *)((long)param_1 + 1);
        }
        else if (((uint)uVar4 >> 0xf & 1) == 0) {
          param_1 = (ulong *)((long)param_1 + 2);
          local_38 = (undefined1 *)(uVar4 & 0x7f | (uVar4 >> 8 & 0x7f) << 7);
        }
        else {
          param_1 = (ulong *)FUN_00705258(param_1,&local_38);
        }
        if (param_1 == (ulong *)0x0) {
          return (ulong *)0x0;
        }
        uVar4 = *param_3;
        uVar2 = -((uint)local_38 & 1) ^ (uint)local_38 >> 1;
        if (((uint)uVar4 >> 2 & 1) != 0) break;
        uVar1 = (uint)uVar4 & 3;
        if (uVar1 == 2) {
          iVar3 = 2;
LAB_00705a84:
          iVar5 = iVar3 + 1;
          FUN_006f7ed0(param_3,(uVar4 & 4) == 0,iVar3,iVar5);
          uVar4 = *param_3;
          iVar3 = (int)param_3[1];
          goto LAB_00705a50;
        }
        *(uint *)((long)(param_3 + 1) + (uVar4 & 3) * 4) = uVar2;
        *param_3 = uVar4 & 0xfffffffffffffff8 | (ulong)(uVar1 + 1);
        if (param_2 <= param_1) {
          return param_1;
        }
      }
      iVar3 = (int)param_3[1];
      if (iVar3 == *(int *)((long)param_3 + 0xc)) goto LAB_00705a84;
      iVar5 = iVar3 + 1;
LAB_00705a50:
      *(int *)(param_3 + 1) = iVar5;
      *(uint *)((uVar4 & 0xfffffffffffffff8) + (long)iVar3 * 4) = uVar2;
    } while (param_1 < param_2);
  }
  return param_1;
}


// ===== 00705adc  FUN_00705adc =====

void FUN_00705adc(long param_1,char *param_2,undefined8 *param_3)

{
  ulong *puVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  code *pcVar5;
  ulong *puVar6;
  ulong uVar7;
  int iVar8;
  ulong *puVar9;
  int iVar10;
  undefined1 auVar11 [16];
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  ulong uStack_88;
  undefined8 local_80;
  undefined2 local_78;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  cVar2 = *param_2;
  if (cVar2 < '\0') {
    auVar11 = FUN_006f6214(param_2,cVar2);
    param_2 = auVar11._0_8_;
  }
  else {
    param_2 = param_2 + 1;
    auVar11[8] = cVar2;
    auVar11._0_8_ = param_2;
    auVar11._9_7_ = 0;
  }
  if (param_2 == (char *)0x0) {
LAB_00705d60:
    puVar6 = (ulong *)0x0;
  }
  else {
    puVar6 = auVar11._0_8_;
    puVar9 = *(ulong **)(param_1 + 8);
    iVar8 = (int)puVar9 - auVar11._0_4_;
    iVar10 = auVar11._8_4_;
    if (iVar8 < iVar10) {
      do {
        puVar6 = auVar11._0_8_;
        uStack_b8 = param_3[1];
        local_c0 = *param_3;
        uStack_a8 = param_3[3];
        uStack_b0 = param_3[2];
        local_a0 = param_3[4];
        if (puVar6 < puVar9) {
          do {
            local_90 = &DAT_aaaaaaaaaaaaaaaa;
            uVar7 = *puVar6;
            if (((uint)uVar7 >> 7 & 1) == 0) {
              local_90 = (undefined1 *)(uVar7 & 0x7f);
              puVar6 = (ulong *)((long)puVar6 + 1);
            }
            else if (((uint)uVar7 >> 0xf & 1) == 0) {
              puVar6 = (ulong *)((long)puVar6 + 2);
              local_90 = (undefined1 *)(uVar7 & 0x7f | (uVar7 >> 8 & 0x7f) << 7);
            }
            else {
              puVar6 = (ulong *)FUN_00705258(puVar6,&local_90);
            }
            if (puVar6 == (ulong *)0x0) goto LAB_00705d60;
            FUN_00705dbc(&local_c0,(ulong)local_90 & 0xffffffff);
          } while (puVar6 < puVar9);
          puVar9 = *(ulong **)(param_1 + 8);
        }
        else if (puVar6 == (ulong *)0x0) goto LAB_00705d60;
        uVar3 = auVar11._8_4_ - iVar8;
        iVar10 = (int)puVar6 - (int)puVar9;
        if ((int)uVar3 < 0x11) {
          local_78 = 0;
          local_80 = 0;
          uStack_88 = puVar9[1];
          local_90 = (undefined1 *)*puVar9;
          if ((0x1a < uVar3) || (0x1a < (ulong)(long)iVar10)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(0x5512,0x705dbc);
            (*pcVar5)();
          }
          uStack_e8 = param_3[1];
          local_f0 = *param_3;
          uStack_d8 = param_3[3];
          uStack_e0 = param_3[2];
          local_d0 = param_3[4];
          puVar1 = (ulong *)((long)&local_90 + (ulong)uVar3);
          puVar9 = (ulong *)((long)&local_90 + (long)iVar10);
          goto joined_r0x00705cf8;
        }
        if (*(int *)(param_1 + 0x1c) < 0x11) goto LAB_00705d60;
        puVar6 = (ulong *)FUN_006f54c0(param_1);
        if (puVar6 == (ulong *)0x0) goto LAB_00705d64;
        puVar6 = (ulong *)((long)puVar6 + (long)iVar10);
        puVar9 = *(ulong **)(param_1 + 8);
        iVar10 = (auVar11._8_4_ - iVar8) - iVar10;
        auVar11._8_4_ = iVar10;
        auVar11._0_8_ = puVar6;
        auVar11._12_4_ = 0;
        iVar8 = (int)puVar9 - (int)puVar6;
      } while (iVar8 < iVar10);
    }
    uStack_118 = param_3[1];
    local_120 = *param_3;
    uStack_108 = param_3[3];
    uStack_110 = param_3[2];
    puVar9 = (ulong *)((long)puVar6 + (long)iVar10);
    local_100 = param_3[4];
    while (puVar6 < puVar9) {
      local_90 = &DAT_aaaaaaaaaaaaaaaa;
      uVar7 = *puVar6;
      if (((uint)uVar7 >> 7 & 1) == 0) {
        local_90 = (undefined1 *)(uVar7 & 0x7f);
        puVar6 = (ulong *)((long)puVar6 + 1);
      }
      else if (((uint)uVar7 >> 0xf & 1) == 0) {
        puVar6 = (ulong *)((long)puVar6 + 2);
        local_90 = (undefined1 *)(uVar7 & 0x7f | (uVar7 >> 8 & 0x7f) << 7);
      }
      else {
        puVar6 = (ulong *)FUN_00705258(puVar6,&local_90);
      }
      if (puVar6 == (ulong *)0x0) break;
      FUN_00705dbc(&local_120,(ulong)local_90 & 0xffffffff);
    }
    if (puVar9 != puVar6) {
      puVar6 = (ulong *)0x0;
    }
  }
LAB_00705d64:
  if (*(long *)(lVar4 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(puVar6);
  }
  return;
joined_r0x00705cf8:
  if (puVar1 <= puVar9) goto LAB_00705d98;
  local_98 = &DAT_aaaaaaaaaaaaaaaa;
  uVar7 = *puVar9;
  if (((uint)uVar7 >> 7 & 1) == 0) {
    local_98 = (undefined1 *)(uVar7 & 0x7f);
    puVar9 = (ulong *)((long)puVar9 + 1);
  }
  else if (((uint)uVar7 >> 0xf & 1) == 0) {
    puVar9 = (ulong *)((long)puVar9 + 2);
    local_98 = (undefined1 *)(uVar7 & 0x7f | (uVar7 >> 8 & 0x7f) << 7);
  }
  else {
    puVar9 = (ulong *)FUN_00705258(puVar9,&local_98);
  }
  if (puVar9 == (ulong *)0x0) goto LAB_00705d60;
  FUN_00705dbc(&local_f0,(ulong)local_98 & 0xffffffff);
  goto joined_r0x00705cf8;
LAB_00705d98:
  puVar6 = (ulong *)0x0;
  if ((puVar9 != (ulong *)0x0) && (puVar9 == puVar1)) {
    puVar6 = (ulong *)(*(long *)(param_1 + 8) + (ulong)uVar3);
  }
  goto LAB_00705d64;
}


// ===== 00705dbc  FUN_00705dbc =====

void FUN_00705dbc(undefined8 *param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  uint *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  int iVar10;
  
  puVar5 = (uint *)*param_1;
  uVar8 = (ulong)(*puVar5 >> 0x10);
  uVar7 = (long)(int)param_2 - (long)(short)*puVar5;
  uVar6 = uVar7 - uVar8;
  if (uVar8 <= uVar7) {
    uVar1 = puVar5[1];
    if (uVar6 < (ushort)uVar1) {
      if ((puVar5[(uVar6 >> 5) + 2] >> (ulong)((uint)uVar6 & 0x1f) & 1) == 0) {
LAB_00705e78:
        FUN_006ff858(param_1[1],param_1[2],*(undefined4 *)(param_1 + 3),param_2);
        return;
      }
    }
    else {
      uVar6 = 0;
      do {
        if (uVar1 >> 0x10 <= uVar6) goto LAB_00705e78;
        lVar3 = uVar6 + 2;
        lVar2 = 1;
        if ((int)puVar5[(ulong)(uVar1 >> 5 & 0x7ff) + lVar3] <= (int)param_2) {
          lVar2 = 2;
        }
        uVar6 = lVar2 + uVar6 * 2;
      } while (puVar5[(ulong)(uVar1 >> 5 & 0x7ff) + lVar3] != param_2);
    }
  }
  puVar9 = (ulong *)param_1[4];
  uVar6 = *puVar9;
  if (((uint)uVar6 >> 2 & 1) == 0) {
    uVar1 = (uint)uVar6 & 3;
    if (uVar1 != 2) {
      *puVar9 = uVar6 & 0xfffffffffffffff8 | (ulong)(uVar1 + 1);
      *(uint *)((long)puVar9 + (uVar6 & 3) * 4 + 8) = param_2;
      return;
    }
    iVar4 = 2;
  }
  else {
    iVar4 = (int)puVar9[1];
    if (iVar4 != *(int *)((long)puVar9 + 0xc)) {
      iVar10 = iVar4 + 1;
      goto LAB_00705e38;
    }
  }
  iVar10 = iVar4 + 1;
  FUN_006f7ed0(puVar9,(uVar6 & 4) == 0,iVar4,iVar10);
  uVar6 = *puVar9;
  iVar4 = (int)puVar9[1];
LAB_00705e38:
  *(int *)(puVar9 + 1) = iVar10;
  *(uint *)((uVar6 & 0xfffffffffffffff8) + (long)iVar4 * 4) = param_2;
  return;
}


// ===== 00705efc  FUN_00705efc =====

void FUN_00705efc(long param_1,char *param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  undefined1 auVar13 [16];
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined2 local_68;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  cVar1 = *param_2;
  if (cVar1 < '\0') {
    auVar13 = FUN_006f6214(param_2,cVar1);
    lVar7 = auVar13._0_8_;
    if (lVar7 == 0) goto LAB_00705ff0;
  }
  else {
    auVar13[8] = cVar1;
    auVar13._0_8_ = param_2 + 1;
    auVar13._9_7_ = 0;
    if (param_2 + 1 == (char *)0x0) {
      lVar7 = 0;
      goto LAB_00705ff0;
    }
  }
  uVar9 = *(undefined8 *)(param_1 + 8);
  while( true ) {
    lVar6 = auVar13._0_8_;
    iVar2 = (int)uVar9 - auVar13._0_4_;
    iVar11 = auVar13._8_4_;
    if (iVar11 <= iVar2) break;
    uStack_a8 = param_3[1];
    local_b0 = *param_3;
    uStack_98 = param_3[3];
    uStack_a0 = param_3[2];
    local_90 = param_3[4];
    lVar7 = FUN_0070609c(lVar6,uVar9,&local_b0);
    if (lVar7 == 0) goto LAB_00705ff0;
    puVar10 = *(undefined8 **)(param_1 + 8);
    uVar3 = iVar11 - iVar2;
    iVar12 = (int)lVar7 - (int)puVar10;
    if ((int)uVar3 < 0x11) {
      local_68 = 0;
      local_70 = 0;
      uStack_78 = puVar10[1];
      local_80 = *puVar10;
      if ((0x1a < uVar3) || (0x1a < (ulong)(long)iVar12)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(0x5512,0x70609c);
        (*pcVar5)();
      }
      uStack_d8 = param_3[1];
      local_e0 = *param_3;
      uStack_c8 = param_3[3];
      uStack_d0 = param_3[2];
      local_c0 = param_3[4];
      lVar6 = (long)&local_80 + (ulong)uVar3;
      lVar8 = FUN_0070609c((long)&local_80 + (long)iVar12,lVar6,&local_e0);
      lVar7 = 0;
      if ((lVar8 != 0) && (lVar8 == lVar6)) {
        lVar7 = *(long *)(param_1 + 8) + (ulong)uVar3;
      }
      goto LAB_00705ff0;
    }
    if (*(int *)(param_1 + 0x1c) < 0x11) {
      lVar7 = 0;
      goto LAB_00705ff0;
    }
    lVar7 = FUN_006f54c0(param_1);
    if (lVar7 == 0) goto LAB_00705ff0;
    uVar9 = *(undefined8 *)(param_1 + 8);
    auVar13._8_4_ = (iVar11 - iVar2) - iVar12;
    auVar13._0_8_ = lVar7 + iVar12;
    auVar13._12_4_ = 0;
  }
  uStack_108 = param_3[1];
  local_110 = *param_3;
  uStack_f8 = param_3[3];
  uStack_100 = param_3[2];
  local_f0 = param_3[4];
  lVar7 = FUN_0070609c(lVar6,lVar6 + iVar11,&local_110);
  if (lVar6 + iVar11 != lVar7) {
    lVar7 = 0;
  }
LAB_00705ff0:
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar7);
  }
  return;
}


// ===== 0070609c  FUN_0070609c =====

ulong * FUN_0070609c(ulong *param_1,ulong *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong *puVar5;
  int iVar6;
  undefined1 *local_38;
  
  if (param_1 < param_2) {
    do {
      local_38 = &DAT_aaaaaaaaaaaaaaaa;
      uVar4 = *param_1;
      if (((uint)uVar4 >> 7 & 1) == 0) {
        local_38 = (undefined1 *)(uVar4 & 0x7f);
        param_1 = (ulong *)((long)param_1 + 1);
      }
      else if (((uint)uVar4 >> 0xf & 1) == 0) {
        param_1 = (ulong *)((long)param_1 + 2);
        local_38 = (undefined1 *)(uVar4 & 0x7f | (uVar4 >> 8 & 0x7f) << 7);
      }
      else {
        param_1 = (ulong *)FUN_00705258(param_1,&local_38);
      }
      if (param_1 == (ulong *)0x0) {
        return (ulong *)0x0;
      }
      iVar2 = (int)local_38;
      if (((int)local_38 < *param_3) || (param_3[1] < (int)local_38)) {
        FUN_006ff858(*(undefined8 *)(param_3 + 2),*(undefined8 *)(param_3 + 4),param_3[6],
                     (ulong)local_38 & 0xffffffff);
      }
      else {
        puVar5 = *(ulong **)(param_3 + 8);
        uVar4 = *puVar5;
        if (((uint)uVar4 >> 2 & 1) == 0) {
          uVar1 = (uint)uVar4 & 3;
          if (uVar1 != 2) {
            *puVar5 = uVar4 & 0xfffffffffffffff8 | (ulong)(uVar1 + 1);
            *(int *)((long)puVar5 + (uVar4 & 3) * 4 + 8) = (int)local_38;
            goto LAB_007060e4;
          }
          iVar3 = 2;
LAB_00706198:
          iVar6 = iVar3 + 1;
          FUN_006f7ed0(puVar5,(uVar4 & 4) == 0,iVar3,iVar6);
          uVar4 = *puVar5;
          iVar3 = (int)puVar5[1];
        }
        else {
          iVar3 = (int)puVar5[1];
          if (iVar3 == *(int *)((long)puVar5 + 0xc)) goto LAB_00706198;
          iVar6 = iVar3 + 1;
        }
        *(int *)(puVar5 + 1) = iVar6;
        *(int *)((uVar4 & 0xfffffffffffffff8) + (long)iVar3 * 4) = iVar2;
      }
LAB_007060e4:
    } while (param_1 < param_2);
  }
  return param_1;
}


// ===== 007061f0  FUN_007061f0 =====

void FUN_007061f0(long param_1,char *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  undefined1 auVar13 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined2 local_68;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  cVar1 = *param_2;
  if (cVar1 < '\0') {
    auVar13 = FUN_006f6214(param_2,cVar1);
    lVar7 = auVar13._0_8_;
    if (lVar7 == 0) goto LAB_007062c4;
  }
  else {
    auVar13[8] = cVar1;
    auVar13._0_8_ = param_2 + 1;
    auVar13._9_7_ = 0;
    if (param_2 + 1 == (char *)0x0) {
      lVar7 = 0;
      goto LAB_007062c4;
    }
  }
  uVar9 = *(undefined8 *)(param_1 + 8);
  while( true ) {
    lVar6 = auVar13._0_8_;
    iVar2 = (int)uVar9 - auVar13._0_4_;
    iVar11 = auVar13._8_4_;
    if (iVar11 <= iVar2) break;
    lVar7 = FUN_00706360(lVar6,uVar9,param_3);
    if (lVar7 == 0) goto LAB_007062c4;
    puVar10 = *(undefined8 **)(param_1 + 8);
    uVar3 = iVar11 - iVar2;
    iVar12 = (int)lVar7 - (int)puVar10;
    if ((int)uVar3 < 0x11) {
      local_68 = 0;
      local_70 = 0;
      uStack_78 = puVar10[1];
      local_80 = *puVar10;
      if ((0x1a < uVar3) || (0x1a < (ulong)(long)iVar12)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(0x5512,0x706360);
        (*pcVar5)();
      }
      lVar6 = (long)&local_80 + (ulong)uVar3;
      lVar8 = FUN_00706360((long)&local_80 + (long)iVar12,lVar6,param_3);
      lVar7 = 0;
      if ((lVar8 != 0) && (lVar8 == lVar6)) {
        lVar7 = *(long *)(param_1 + 8) + (ulong)uVar3;
      }
      goto LAB_007062c4;
    }
    if (*(int *)(param_1 + 0x1c) < 0x11) {
      lVar7 = 0;
      goto LAB_007062c4;
    }
    lVar7 = FUN_006f54c0(param_1);
    if (lVar7 == 0) goto LAB_007062c4;
    uVar9 = *(undefined8 *)(param_1 + 8);
    auVar13._8_4_ = (iVar11 - iVar2) - iVar12;
    auVar13._0_8_ = lVar7 + iVar12;
    auVar13._12_4_ = 0;
  }
  lVar7 = FUN_00706360(lVar6,lVar6 + iVar11,param_3);
  if (lVar6 + iVar11 != lVar7) {
    lVar7 = 0;
  }
LAB_007062c4:
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar7);
  }
  return;
}


// ===== 00706360  FUN_00706360 =====

ulong * FUN_00706360(ulong *param_1,ulong *param_2,ulong *param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 *local_38;
  
  if (param_1 < param_2) {
    do {
      while( true ) {
        local_38 = &DAT_aaaaaaaaaaaaaaaa;
        uVar3 = *param_1;
        if (((uint)uVar3 >> 7 & 1) == 0) {
          puVar4 = (undefined1 *)(uVar3 & 0x7f);
          param_1 = (ulong *)((long)param_1 + 1);
        }
        else if (((uint)uVar3 >> 0xf & 1) == 0) {
          param_1 = (ulong *)((long)param_1 + 2);
          puVar4 = (undefined1 *)(uVar3 & 0x7f | (uVar3 >> 8 & 0x7f) << 7);
        }
        else {
          param_1 = (ulong *)FUN_00705258(param_1,&local_38);
          puVar4 = local_38;
        }
        if (param_1 == (ulong *)0x0) {
          return (ulong *)0x0;
        }
        uVar3 = *param_3;
        if (((uint)uVar3 >> 2 & 1) != 0) break;
        uVar1 = (uint)uVar3 & 3;
        if (uVar1 == 3) {
          iVar2 = 3;
LAB_00706444:
          iVar5 = iVar2 + 1;
          local_38 = puVar4;
          FUN_006f9538(param_3,(uVar3 & 4) == 0,iVar2,iVar5);
          uVar3 = *param_3;
          iVar2 = (int)param_3[1];
          goto LAB_00706408;
        }
        *param_3 = uVar3 & 0xfffffffffffffff8 | (ulong)(uVar1 + 1);
        *(bool *)((long)(param_3 + 1) + (uVar3 & 3)) = puVar4 != (undefined1 *)0x0;
        if (param_2 <= param_1) {
          return param_1;
        }
      }
      iVar2 = (int)param_3[1];
      if (iVar2 == *(int *)((long)param_3 + 0xc)) goto LAB_00706444;
      iVar5 = iVar2 + 1;
LAB_00706408:
      *(int *)(param_3 + 1) = iVar5;
      *(bool *)((uVar3 & 0xfffffffffffffff8) + (long)iVar2) = puVar4 != (undefined1 *)0x0;
    } while (param_1 < param_2);
  }
  return param_1;
}


// ===== 0070649c  FUN_0070649c =====

ulong * FUN_0070649c(long param_1,ulong *param_2,undefined8 *param_3,ulong param_4,ushort *param_5,
                    undefined8 param_6)

{
  uint *puVar1;
  uint uVar2;
  ushort uVar3;
  byte bVar4;
  byte bVar5;
  ulong *puVar6;
  uint uVar8;
  ulong *puVar9;
  ulong uVar10;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  undefined1 auVar14 [12];
  undefined1 auVar15 [12];
  ushort *puVar7;
  
  uVar11 = (uint)param_4;
  uVar8 = uVar11 & 7;
  if (uVar8 == 2) {
    puVar6 = (ulong *)switchD_006fe28c::caseD_4(param_1,param_2,param_3,param_4,param_5,param_6);
    return puVar6;
  }
  puVar1 = (uint *)((long)param_5 + (param_4 >> 0x20));
  uVar2 = puVar1[1];
  if (uVar2 != 0xffffffff) {
    uVar10 = (ulong)(uVar2 >> 3) & 0x1ffffffc;
    *(uint *)(param_1 + uVar10) = *(uint *)(param_1 + uVar10) | 1 << (ulong)(uVar2 & 0x1f);
  }
  if ((*(ushort *)((long)puVar1 + 10) & 0x1c0) == 0xc0) {
    if (uVar8 != 1) {
LAB_0070672c:
      UNRECOVERED_JUMPTABLE = *(code **)(param_5 + 0x18);
      goto LAB_00706778;
    }
    puVar6 = (ulong *)(param_1 + (ulong)*puVar1);
    do {
      uVar10 = *puVar6;
      uVar13 = *param_2;
      if (((uint)uVar10 >> 2 & 1) == 0) {
        uVar8 = (uint)uVar10 & 3;
        if (uVar8 == 1) {
LAB_0070661c:
          iVar12 = uVar8 + 1;
          FUN_006f8940(puVar6,(uVar10 & 4) == 0,uVar8,iVar12);
          uVar10 = *puVar6;
          uVar8 = (uint)puVar6[1];
          goto LAB_007065a8;
        }
        *puVar6 = uVar10 & 0xfffffffffffffff8 | (ulong)(uVar8 + 1);
        puVar9 = puVar6 + 1;
      }
      else {
        uVar8 = (uint)puVar6[1];
        if (uVar8 == *(uint *)((long)puVar6 + 0xc)) goto LAB_0070661c;
        iVar12 = uVar8 + 1;
LAB_007065a8:
        puVar9 = (ulong *)(uVar10 & 0xfffffffffffffff8);
        *(int *)(puVar6 + 1) = iVar12;
      }
      puVar9[(int)uVar8] = uVar13;
      puVar9 = param_2 + 1;
      if ((ulong *)*param_3 <= puVar9) goto LAB_007067a0;
      bVar5 = (byte)param_2[1];
      puVar7 = (ushort *)((long)param_2 + 9);
      auVar14[8] = bVar5;
      auVar14._0_8_ = puVar7;
      auVar14._9_3_ = 0;
      if ((char)bVar5 < '\0') {
        bVar4 = *(byte *)puVar7;
        if ((char)bVar4 < '\0') {
          auVar14 = FUN_006f61a4(puVar9);
          puVar7 = auVar14._0_8_;
        }
        else {
          puVar7 = (ushort *)((long)param_2 + 10);
          auVar14._8_4_ = (uint)bVar5 + (uint)bVar4 * 0x80 + -0x80;
          auVar14._0_8_ = puVar7;
        }
      }
      if (puVar7 == (ushort *)0x0) {
LAB_007067d8:
        puVar6 = (ulong *)switchD_006fe28c::caseD_8(param_1);
        return puVar6;
      }
      param_2 = auVar14._0_8_;
    } while (auVar14._8_4_ == uVar11);
  }
  else {
    if (uVar8 != 5) goto LAB_0070672c;
    puVar6 = (ulong *)(param_1 + (ulong)*puVar1);
    do {
      uVar13 = *puVar6;
      uVar10 = *param_2;
      if (((uint)uVar13 >> 2 & 1) == 0) {
        uVar8 = (uint)uVar13 & 3;
        if (uVar8 == 2) {
LAB_00706708:
          iVar12 = uVar8 + 1;
          FUN_006f7ed0(puVar6,(uVar13 & 4) == 0,uVar8,iVar12);
          uVar13 = *puVar6;
          uVar8 = (uint)puVar6[1];
          goto LAB_00706694;
        }
        *puVar6 = uVar13 & 0xfffffffffffffff8 | (ulong)(uVar8 + 1);
        puVar9 = puVar6 + 1;
      }
      else {
        uVar8 = (uint)puVar6[1];
        if (uVar8 == *(uint *)((long)puVar6 + 0xc)) goto LAB_00706708;
        iVar12 = uVar8 + 1;
LAB_00706694:
        puVar9 = (ulong *)(uVar13 & 0xfffffffffffffff8);
        *(int *)(puVar6 + 1) = iVar12;
      }
      *(int *)((long)puVar9 + (long)(int)uVar8 * 4) = (int)uVar10;
      puVar9 = (ulong *)((long)param_2 + 4);
      if ((ulong *)*param_3 <= puVar9) goto LAB_007067a0;
      bVar5 = *(byte *)((long)param_2 + 4);
      puVar7 = (ushort *)((long)param_2 + 5);
      auVar15[8] = bVar5;
      auVar15._0_8_ = puVar7;
      auVar15._9_3_ = 0;
      if ((char)bVar5 < '\0') {
        bVar4 = *(byte *)puVar7;
        if ((char)bVar4 < '\0') {
          auVar15 = FUN_006f61a4(puVar9);
          puVar7 = auVar15._0_8_;
        }
        else {
          puVar7 = (ushort *)((long)param_2 + 6);
          auVar15._8_4_ = (uint)bVar5 + (uint)bVar4 * 0x80 + -0x80;
          auVar15._0_8_ = puVar7;
        }
      }
      if (puVar7 == (ushort *)0x0) goto LAB_007067d8;
      param_2 = auVar15._0_8_;
    } while (auVar15._8_4_ == uVar11);
  }
  param_2 = puVar9;
  puVar9 = param_2;
  if ((ulong *)*param_3 <= param_2) {
LAB_007067a0:
    uVar3 = *param_5;
    if (uVar3 != 0) {
      *(uint *)(param_1 + (ulong)uVar3) = *(uint *)(param_1 + (ulong)(uint)uVar3) | (uint)param_6;
    }
    return puVar9;
  }
  uVar10 = (ulong)(ushort)*param_2 & (ulong)(byte)param_5[4];
  UNRECOVERED_JUMPTABLE = *(code **)(param_5 + uVar10 + 0x1c);
  param_4 = *(ulong *)(param_5 + uVar10 + 0x20) ^ (ulong)(ushort)*param_2;
LAB_00706778:
                    /* WARNING: Could not recover jumptable at 0x0070679c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar6 = (ulong *)(*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4,param_5,param_6);
  return puVar6;
}


// ===== 00706804  FUN_00706804 =====

ushort * FUN_00706804(long param_1,ushort *param_2,undefined8 *param_3,ulong param_4,ushort *param_5
                     ,undefined8 param_6)

{
  uint *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ushort uVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ushort *puVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar17;
  long *plVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [12];
  undefined1 auVar21 [12];
  
  uVar17 = (uint)param_4;
  if ((uVar17 & 7) != 2) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_5 + 0x18);
    goto LAB_00706930;
  }
  puVar1 = (uint *)((long)param_5 + (param_4 >> 0x20));
  uVar13 = puVar1[1];
  uVar4 = *(ushort *)((long)puVar1 + 10);
  if (uVar13 != 0xffffffff) {
    uVar15 = (ulong)(uVar13 >> 3) & 0x1ffffffc;
    *(uint *)(param_1 + uVar15) = *(uint *)(param_1 + uVar15) | 1 << (ulong)(uVar13 & 0x1f);
  }
  if ((uVar4 & 0x1c0) == 0x100) {
    puVar2 = (ulong *)(param_1 + (ulong)*puVar1);
    plVar18 = (long *)puVar2[2];
    puVar12 = param_2;
    if ((plVar18 != (long *)0x0) &&
       (lVar9 = __emutls_get_address(&DAT_00d5a2a0), *(long *)(lVar9 + 8) == *plVar18)) {
      uVar15 = *puVar2;
      if ((uVar15 & 1) == 0) {
        uVar13 = (uint)(uVar15 != 0);
      }
      else {
        uVar13 = *(uint *)(uVar15 + 3);
      }
      if (uVar13 == (uint)puVar2[1]) {
        lVar9 = *(long *)(lVar9 + 0x10);
        do {
          cVar5 = (char)*puVar12;
          if (cVar5 < '\0') {
            auVar19 = FUN_006f6214(puVar12,cVar5);
            lVar14 = auVar19._0_8_;
          }
          else {
            lVar14 = (long)puVar12 + 1;
            auVar19[8] = cVar5;
            auVar19._0_8_ = lVar14;
            auVar19._9_7_ = 0;
          }
          if (lVar14 == 0) goto LAB_00706bd4;
          if (*(long *)(lVar9 + 0x48) == 0) {
            puVar11 = (undefined8 *)FUN_006fd130(lVar9);
          }
          else {
            lVar14 = *(long *)(lVar9 + 0x48) + -0x18;
            *(long *)(lVar9 + 0x48) = lVar14;
            puVar11 = (undefined8 *)(*(long *)(lVar9 + 0x38) + lVar14 + 0x10);
          }
          *puVar11 = 0;
          puVar11[1] = 0;
          puVar11[2] = 0;
          iVar8 = (int)puVar2[1];
          if ((*puVar2 & 1) == 0) {
            if (iVar8 == 1) {
LAB_00706ad4:
              puVar10 = (undefined8 *)FUN_00711858(puVar2,1,plVar18);
              *puVar10 = puVar11;
              goto LAB_00706a08;
            }
            *puVar2 = (ulong)puVar11;
          }
          else {
            piVar16 = (int *)(*puVar2 - 1);
            if (iVar8 == *piVar16) goto LAB_00706ad4;
            *(undefined8 **)(piVar16 + (long)iVar8 * 2 + 2) = puVar11;
LAB_00706a08:
            *(int *)(*puVar2 + 3) = *(int *)(*puVar2 + 3) + 1;
          }
          *(int *)(puVar2 + 1) = (int)puVar2[1] + 1;
          param_2 = (ushort *)FUN_007011c4(param_3,auVar19._0_8_,auVar19._8_8_ & 0xffffffff,puVar11)
          ;
          if (param_2 == (ushort *)0x0) goto LAB_00706bd4;
          iVar8 = (int)puVar2[1];
          if (iVar8 < 1) {
            FUN_006fc6ec(iVar8 + -1);
          }
          puVar3 = puVar2;
          if ((*puVar2 & 1) != 0) {
            puVar3 = (ulong *)(*puVar2 + (long)(iVar8 + -1) * 8 + 7);
          }
          puVar10 = (undefined8 *)*puVar3;
          lVar14 = (long)*(char *)((long)puVar10 + 0x17);
          puVar11 = puVar10;
          if (lVar14 < 0) {
            puVar11 = (undefined8 *)*puVar10;
            lVar14 = puVar10[1];
          }
          uVar15 = FUN_00700564(puVar11,lVar14,param_5,puVar1,uVar4 & 0x600);
          if ((uVar15 & 1) == 0) goto LAB_00706bd4;
          if ((ushort *)*param_3 <= param_2) goto LAB_00706b90;
          bVar7 = (byte)*param_2;
          auVar20[8] = bVar7;
          auVar20._0_8_ = (byte *)((long)param_2 + 1);
          auVar20._9_3_ = 0;
          if ((char)bVar7 < '\0') {
            bVar6 = *(byte *)((long)param_2 + 1);
            if ((char)bVar6 < '\0') {
              auVar20 = FUN_006f61a4(param_2);
            }
            else {
              auVar20._8_4_ = (uint)bVar7 + (uint)bVar6 * 0x80 + -0x80;
              auVar20._0_8_ = param_2 + 1;
            }
          }
          puVar12 = auVar20._0_8_;
        } while (auVar20._8_4_ == uVar17);
        goto LAB_007068f4;
      }
    }
    do {
      puVar11 = (undefined8 *)FUN_00706c40(puVar2,puVar2[2]);
      param_2 = (ushort *)FUN_006f62b8(puVar11,puVar12,param_3);
      if (param_2 == (ushort *)0x0) {
LAB_00706bd4:
        puVar12 = (ushort *)switchD_006fe28c::caseD_8(param_1);
        return puVar12;
      }
      lVar9 = (long)*(char *)((long)puVar11 + 0x17);
      puVar10 = puVar11;
      if (lVar9 < 0) {
        puVar10 = (undefined8 *)*puVar11;
        lVar9 = puVar11[1];
      }
      uVar15 = FUN_00700564(puVar10,lVar9,param_5,puVar1,uVar4 & 0x600);
      if ((uVar15 & 1) == 0) goto LAB_00706bd4;
      if ((ushort *)*param_3 <= param_2) goto LAB_00706b90;
      bVar7 = (byte)*param_2;
      auVar21[8] = bVar7;
      auVar21._0_8_ = (byte *)((long)param_2 + 1);
      auVar21._9_3_ = 0;
      if ((char)bVar7 < '\0') {
        bVar6 = *(byte *)((long)param_2 + 1);
        if ((char)bVar6 < '\0') {
          auVar21 = FUN_006f61a4(param_2);
        }
        else {
          auVar21._8_4_ = (uint)bVar7 + (uint)bVar6 * 0x80 + -0x80;
          auVar21._0_8_ = param_2 + 1;
        }
      }
      puVar12 = auVar21._0_8_;
    } while (auVar21._8_4_ == uVar17);
  }
LAB_007068f4:
  if ((ushort *)*param_3 <= param_2) {
LAB_00706b90:
    uVar4 = *param_5;
    if (uVar4 != 0) {
      *(uint *)(param_1 + (ulong)uVar4) = *(uint *)(param_1 + (ulong)(uint)uVar4) | (uint)param_6;
    }
    return param_2;
  }
  uVar15 = (ulong)*param_2 & (ulong)(byte)param_5[4];
  UNRECOVERED_JUMPTABLE = *(code **)(param_5 + uVar15 + 0x1c);
  param_4 = *(ulong *)(param_5 + uVar15 + 0x20) ^ (ulong)*param_2;
LAB_00706930:
                    /* WARNING: Could not recover jumptable at 0x00706950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar12 = (ushort *)(*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4,param_5,param_6);
  return puVar12;
}


// ===== 00706c04  FUN_00706c04 =====

void FUN_00706c04(long param_1,byte *param_2)

{
  ulong uVar1;
  
  if ((*param_2 & 3) != 0) {
    return;
  }
  uVar1 = *(ulong *)(param_1 + 8);
  if ((uVar1 & 1) != 0) {
    uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
  }
  FUN_00713f34(param_2,&DAT_001b3348,0,uVar1);
  return;
}


// ===== 00706c40  FUN_00706c40 =====

ulong FUN_00706c40(ulong *param_1,long param_2)

{
  int iVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  int iVar6;
  
  uVar4 = *param_1;
  if (uVar4 == 0) {
    *(int *)(param_1 + 1) = 1;
    if (param_2 == 0) goto LAB_00706d6c;
LAB_00706cc4:
    puVar3 = (undefined8 *)FUN_006fdb6c(param_2);
  }
  else {
    Hint_Prefetch(uVar4,0,0,0);
    if ((uVar4 & 1) == 0) {
      if ((int)param_1[1] == 0) {
        *(int *)(param_1 + 1) = 1;
      }
      else {
        puVar2 = (ulong *)FUN_00711858(param_1,1,param_2);
        if (param_2 == 0) {
          puVar3 = (undefined8 *)operator_new(0x18);
        }
        else {
          puVar3 = (undefined8 *)FUN_006fdb6c(param_2);
        }
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        *puVar2 = (ulong)puVar3;
        *(undefined4 *)(*param_1 + 3) = 2;
        *(int *)(param_1 + 1) = 2;
        param_1 = puVar2;
      }
      goto LAB_00706d18;
    }
    piVar5 = (int *)(uVar4 - 1);
    iVar1 = (int)param_1[1];
    if (iVar1 == *piVar5) {
      FUN_00711858(param_1,1,param_2);
      iVar6 = *(int *)(*param_1 + 3);
      piVar5 = (int *)(*param_1 - 1);
    }
    else {
      iVar6 = *(int *)(uVar4 + 3);
      if (0 < iVar6 - iVar1) {
        *(int *)(param_1 + 1) = iVar1 + 1;
        param_1 = (ulong *)(piVar5 + (long)iVar1 * 2 + 2);
        goto LAB_00706d18;
      }
    }
    piVar5[1] = iVar6 + 1;
    uVar4 = param_1[1];
    *(int *)(param_1 + 1) = (int)uVar4 + 1;
    param_1 = (ulong *)(piVar5 + (long)(int)uVar4 * 2 + 2);
    if (param_2 != 0) goto LAB_00706cc4;
LAB_00706d6c:
    puVar3 = (undefined8 *)operator_new(0x18);
  }
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *param_1 = (ulong)puVar3;
LAB_00706d18:
  return *param_1;
}


// ===== 00706d84  FUN_00706d84 =====

ushort * FUN_00706d84(long param_1,ushort *param_2,ulong *param_3,ulong param_4,ushort *param_5,
                     undefined8 param_6)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  undefined8 uVar6;
  ushort *puVar8;
  long lVar9;
  ulong uVar10;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar11;
  long *plVar12;
  undefined1 auVar13 [12];
  undefined1 auVar14 [12];
  char *pcVar7;
  
  if (((uint)param_4 & 7) == 2) {
    puVar1 = (uint *)((long)param_5 + (param_4 >> 0x20));
    uVar2 = *puVar1;
    uVar5 = *(ushort *)((long)puVar1 + 10) & 0x600;
    plVar11 = *(long **)((long)param_5 +
                        (ulong)(ushort)puVar1[2] * 8 + (ulong)*(uint *)(param_5 + 0xc));
    if (uVar5 != 0x400) {
      plVar12 = plVar11;
      if (uVar5 != 0x200) {
        plVar12 = (long *)*plVar11;
      }
      lVar9 = (**(code **)(*plVar12 + 0x20))(plVar12);
      plVar11 = *(long **)(lVar9 + 8);
      if (plVar11 == (long *)0x0) {
        plVar11 = (long *)(**(code **)(*(long *)(lVar9 + 0x58) + 0x10))(plVar12);
      }
    }
    uVar3 = puVar1[1];
    puVar8 = param_2;
    if (uVar3 != 0xffffffff) {
      uVar10 = (ulong)(uVar3 >> 3) & 0x1ffffffc;
      *(uint *)(param_1 + uVar10) = *(uint *)(param_1 + uVar10) | 1 << (ulong)(uVar3 & 0x1f);
    }
    do {
      uVar10 = *(ulong *)(param_1 + 8);
      if ((uVar10 & 1) != 0) {
        uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
      }
      uVar6 = FUN_006fe3b0(plVar11,param_1 + (ulong)uVar2,uVar10);
      if ((char)*puVar8 < '\0') {
        auVar13 = FUN_006f6214(puVar8);
        pcVar7 = auVar13._0_8_;
      }
      else {
        pcVar7 = (char *)((long)puVar8 + 1);
        auVar13[8] = (char)*puVar8;
        auVar13._0_8_ = pcVar7;
        auVar13._9_3_ = 0;
      }
      if (pcVar7 == (char *)0x0) goto LAB_00706f74;
      if ((int)param_3[0xb] < 1) goto LAB_00706f74;
      *(int *)(param_3 + 0xb) = (int)param_3[0xb] + -1;
      uVar3 = auVar13._8_4_ + (auVar13._0_4_ - (int)param_3[1]);
      iVar4 = *(int *)((long)param_3 + 0x1c);
      *(uint *)((long)param_3 + 0x1c) = uVar3;
      *param_3 = param_3[1] + (long)(int)(uVar3 & (int)uVar3 >> 0x1f);
      param_2 = (ushort *)FUN_006fe0e8(uVar6,auVar13._0_8_,param_3,plVar11);
      uVar3 = *(int *)((long)param_3 + 0x1c) + (iVar4 - uVar3);
      *(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1;
      *(uint *)((long)param_3 + 0x1c) = uVar3;
      if ((int)param_3[10] != 0) goto LAB_00706f74;
      puVar8 = (ushort *)(param_3[1] + (long)(int)(uVar3 & (int)uVar3 >> 0x1f));
      *param_3 = (ulong)puVar8;
      if (param_2 == (ushort *)0x0) goto LAB_00706f74;
      if (puVar8 <= param_2) goto LAB_00706fd8;
      puVar8 = (ushort *)((long)param_2 + 1);
      uVar3 = (uint)(byte)*param_2;
      if ((char)(byte)*param_2 < '\0') {
        uVar3 = (uVar3 + (uint)*(byte *)puVar8 * 0x80) - 0x80;
        if (-1 < (char)*(byte *)puVar8) {
          puVar8 = param_2 + 1;
          goto LAB_00706f08;
        }
        auVar14 = FUN_006f61a4(param_2);
        puVar8 = auVar14._0_8_;
      }
      else {
LAB_00706f08:
        auVar14._8_4_ = uVar3;
        auVar14._0_8_ = puVar8;
      }
      if (puVar8 == (ushort *)0x0) {
LAB_00706f74:
        puVar8 = (ushort *)switchD_006fe28c::caseD_8(param_1);
        return puVar8;
      }
      puVar8 = auVar14._0_8_;
    } while (auVar14._8_4_ == (uint)param_4);
    if ((ushort *)*param_3 <= param_2) {
LAB_00706fd8:
      uVar5 = *param_5;
      if (uVar5 != 0) {
        *(uint *)(param_1 + (ulong)uVar5) = *(uint *)(param_1 + (ulong)(uint)uVar5) | (uint)param_6;
      }
      return param_2;
    }
    uVar10 = (ulong)*param_2 & (ulong)(byte)param_5[4];
    UNRECOVERED_JUMPTABLE = *(code **)(param_5 + uVar10 + 0x1c);
    param_4 = *(ulong *)(param_5 + uVar10 + 0x20) ^ (ulong)*param_2;
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(param_5 + 0x18);
  }
                    /* WARNING: Could not recover jumptable at 0x00706f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar8 = (ushort *)(*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4,param_5,param_6);
  return puVar8;
}


// ===== 0070704c  FUN_0070704c =====

ushort * FUN_0070704c(long param_1,ushort *param_2,undefined8 *param_3,ulong param_4,ushort *param_5
                     ,undefined8 param_6)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar10;
  ushort *puVar11;
  long *plVar12;
  long *plVar13;
  undefined1 auVar14 [12];
  
  uVar10 = (uint)param_4;
  if ((uVar10 & 7) == 3) {
    puVar1 = (uint *)((long)param_5 + (param_4 >> 0x20));
    uVar2 = *puVar1;
    uVar5 = *(ushort *)((long)puVar1 + 10) & 0x600;
    plVar12 = *(long **)((long)param_5 +
                        (ulong)(ushort)puVar1[2] * 8 + (ulong)*(uint *)(param_5 + 0xc));
    if (uVar5 != 0x400) {
      plVar13 = plVar12;
      if (uVar5 != 0x200) {
        plVar13 = (long *)*plVar12;
      }
      lVar8 = (**(code **)(*plVar13 + 0x20))(plVar13);
      plVar12 = *(long **)(lVar8 + 8);
      if (plVar12 == (long *)0x0) {
        plVar12 = (long *)(**(code **)(*(long *)(lVar8 + 0x58) + 0x10))(plVar13);
      }
    }
    uVar3 = puVar1[1];
    puVar11 = param_2;
    uVar6 = DAT_001f5550;
    if (uVar3 != 0xffffffff) {
      uVar9 = (ulong)(uVar3 >> 3) & 0x1ffffffc;
      *(uint *)(param_1 + uVar9) = *(uint *)(param_1 + uVar9) | 1 << (ulong)(uVar3 & 0x1f);
      uVar6 = DAT_001f5550;
    }
    do {
      uVar9 = *(ulong *)(param_1 + 8);
      if ((uVar9 & 1) != 0) {
        uVar9 = *(ulong *)(uVar9 & 0xfffffffffffffffe);
      }
      uVar7 = FUN_006fe3b0(plVar12,param_1 + (ulong)uVar2,uVar9);
      iVar4 = *(int *)(param_3 + 0xb);
      *(int *)(param_3 + 0xb) = iVar4 + -1;
      if (iVar4 + -1 < 0) goto LAB_007071f8;
      *(int *)((long)param_3 + 0x5c) = *(int *)((long)param_3 + 0x5c) + 1;
      param_2 = (ushort *)FUN_006fe0e8(uVar7,puVar11,param_3,plVar12);
      uVar3 = *(uint *)(param_3 + 10);
      *(undefined4 *)(param_3 + 10) = 0;
      param_3[0xb] = CONCAT44((int)((ulong)param_3[0xb] >> 0x20) + (int)((ulong)uVar6 >> 0x20),
                              (int)param_3[0xb] + (int)uVar6);
      if ((param_2 == (ushort *)0x0) || (uVar3 != uVar10)) goto LAB_007071f8;
      if ((ushort *)*param_3 <= param_2) goto LAB_00707260;
      puVar11 = (ushort *)((long)param_2 + 1);
      uVar3 = (uint)(byte)*param_2;
      if ((char)(byte)*param_2 < '\0') {
        uVar3 = (uVar3 + (uint)*(byte *)puVar11 * 0x80) - 0x80;
        if (-1 < (char)*(byte *)puVar11) {
          puVar11 = param_2 + 1;
          goto LAB_00707188;
        }
        auVar14 = FUN_006f61a4(param_2);
        puVar11 = auVar14._0_8_;
      }
      else {
LAB_00707188:
        auVar14._8_4_ = uVar3;
        auVar14._0_8_ = puVar11;
      }
      if (puVar11 == (ushort *)0x0) {
LAB_007071f8:
        puVar11 = (ushort *)switchD_006fe28c::caseD_8(param_1);
        return puVar11;
      }
      puVar11 = auVar14._0_8_;
    } while (auVar14._8_4_ == uVar10);
    if ((ushort *)*param_3 <= param_2) {
LAB_00707260:
      uVar5 = *param_5;
      if (uVar5 != 0) {
        *(uint *)(param_1 + (ulong)uVar5) = *(uint *)(param_1 + (ulong)(uint)uVar5) | (uint)param_6;
      }
      return param_2;
    }
    uVar9 = (ulong)*param_2 & (ulong)(byte)param_5[4];
    UNRECOVERED_JUMPTABLE = *(code **)(param_5 + uVar9 + 0x1c);
    param_4 = *(ulong *)(param_5 + uVar9 + 0x20) ^ (ulong)*param_2;
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(param_5 + 0x18);
  }
                    /* WARNING: Could not recover jumptable at 0x007071f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar11 = (ushort *)(*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4,param_5,param_6);
  return puVar11;
}


// ===== 007072d8  FUN_007072d8 =====

bool FUN_007072d8(int *param_1,long *param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  
  puVar8 = PTR_LOOP_00d525b0;
  uVar9 = (ulong)*(byte *)(param_2 + 1) & 1 | (ulong)PTR_LOOP_00d525b0;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar9;
  uVar10 = *(ulong *)(param_1 + 4);
  uVar9 = SUB168(auVar4 * ZEXT816(0x79d5f9e0de1e8cf5),8) ^ uVar9 * 0x79d5f9e0de1e8cf5 ^ uVar10;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar9;
  uVar2 = param_1[1];
  uVar9 = (ulong)(uVar2 - 1 &
                 (SUB164(auVar5 * ZEXT816(0x79d5f9e0de1e8cf5),8) ^ (int)uVar9 * -0x21e1730b));
  plVar14 = (long *)(uVar10 + uVar9 * 8);
  do {
    plVar14 = (long *)*plVar14;
    if (plVar14 == (long *)0x0) {
      uVar13 = (ulong)(*param_1 + 1U);
      uVar12 = ((ulong)uVar2 & 0xfffffffe) - ((ulong)(uVar2 >> 2) & 0x3ffffffc);
      if (uVar12 < uVar13) {
        if ((int)uVar2 < 0) goto LAB_007073b0;
        uVar3 = uVar2 << 1;
      }
      else {
        if ((uVar2 < 3) || (uVar12 >> 2 < uVar13)) goto LAB_007073b0;
        lVar11 = 0;
        do {
          uVar1 = lVar11 + 2;
          lVar11 = lVar11 + 1;
        } while (uVar13 + (*param_1 + 1U >> 2) + 1 << (uVar1 & 0x3f) < uVar12);
        uVar3 = uVar2 >> (ulong)((uint)lVar11 & 0x1f);
        if (uVar3 < 3) {
          uVar3 = 2;
        }
        if (uVar3 == uVar2) goto LAB_007073b0;
      }
      FUN_00707ca8(param_1,uVar3);
      uVar9 = (ulong)*(byte *)(param_2 + 1) & 1 | (ulong)puVar8;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar9;
      uVar10 = *(ulong *)(param_1 + 4);
      uVar9 = SUB168(auVar6 * ZEXT816(0x79d5f9e0de1e8cf5),8) ^ uVar9 * 0x79d5f9e0de1e8cf5 ^ uVar10;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar9;
      uVar9 = (ulong)(param_1[1] - 1U &
                     (SUB164(auVar7 * ZEXT816(0x79d5f9e0de1e8cf5),8) ^ (int)uVar9 * -0x21e1730b));
      goto LAB_007073b0;
    }
  } while (((*(byte *)(plVar14 + 1) ^ *(byte *)(param_2 + 1)) & 1) != 0);
  FUN_00707b98(param_1,uVar9,plVar14,1);
  uVar10 = *(ulong *)(param_1 + 4);
LAB_007073b0:
  lVar11 = *(long *)(uVar10 + uVar9 * 8);
  if (lVar11 == 0) {
    *(long **)(uVar10 + uVar9 * 8) = param_2;
    *param_2 = 0;
    uVar2 = (uint)uVar9;
    if ((uint)param_1[2] <= (uint)uVar9) {
      uVar2 = param_1[2];
    }
    param_1[2] = uVar2;
  }
  else {
    *param_2 = lVar11;
    *(long **)(uVar10 + uVar9 * 8) = param_2;
  }
  *param_1 = *param_1 + 1;
  return plVar14 == (long *)0x0;
}


// ===== 00707490  FUN_00707490 =====

bool FUN_00707490(int *param_1,long *param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  
  puVar8 = PTR_LOOP_00d525b0;
  uVar9 = (ulong)*(uint *)(param_2 + 1) ^ (ulong)PTR_LOOP_00d525b0;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar9;
  uVar10 = *(ulong *)(param_1 + 4);
  uVar9 = SUB168(auVar4 * ZEXT816(0x79d5f9e0de1e8cf5),8) ^ uVar9 * 0x79d5f9e0de1e8cf5 ^ uVar10;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar9;
  uVar2 = param_1[1];
  uVar9 = (ulong)(uVar2 - 1 &
                 (SUB164(auVar5 * ZEXT816(0x79d5f9e0de1e8cf5),8) ^ (int)uVar9 * -0x21e1730b));
  plVar14 = (long *)(uVar10 + uVar9 * 8);
  do {
    plVar14 = (long *)*plVar14;
    if (plVar14 == (long *)0x0) {
      uVar13 = (ulong)(*param_1 + 1U);
      uVar12 = ((ulong)uVar2 & 0xfffffffe) - ((ulong)(uVar2 >> 2) & 0x3ffffffc);
      if (uVar12 < uVar13) {
        if ((int)uVar2 < 0) goto LAB_00707564;
        uVar3 = uVar2 << 1;
      }
      else {
        if ((uVar2 < 3) || (uVar12 >> 2 < uVar13)) goto LAB_00707564;
        lVar11 = 0;
        do {
          uVar1 = lVar11 + 2;
          lVar11 = lVar11 + 1;
        } while (uVar13 + (*param_1 + 1U >> 2) + 1 << (uVar1 & 0x3f) < uVar12);
        uVar3 = uVar2 >> (ulong)((uint)lVar11 & 0x1f);
        if (uVar3 < 3) {
          uVar3 = 2;
        }
        if (uVar3 == uVar2) goto LAB_00707564;
      }
      FUN_00707fd8(param_1,uVar3);
      auVar6._8_8_ = 0;
      auVar6._0_8_ = (ulong)*(uint *)(param_2 + 1) ^ (ulong)puVar8;
      uVar10 = *(ulong *)(param_1 + 4);
      uVar9 = SUB168(auVar6 * ZEXT816(0x79d5f9e0de1e8cf5),8) ^
              ((ulong)*(uint *)(param_2 + 1) ^ (ulong)puVar8) * 0x79d5f9e0de1e8cf5 ^ uVar10;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar9;
      uVar9 = (ulong)(param_1[1] - 1U &
                     (SUB164(auVar7 * ZEXT816(0x79d5f9e0de1e8cf5),8) ^ (int)uVar9 * -0x21e1730b));
      goto LAB_00707564;
    }
  } while (*(uint *)(plVar14 + 1) != *(uint *)(param_2 + 1));
  FUN_00707ecc(param_1,uVar9,plVar14,1);
  uVar10 = *(ulong *)(param_1 + 4);
LAB_00707564:
  lVar11 = *(long *)(uVar10 + uVar9 * 8);
  if (lVar11 == 0) {
    *(long **)(uVar10 + uVar9 * 8) = param_2;
    *param_2 = 0;
    uVar2 = (uint)uVar9;
    if ((uint)param_1[2] <= (uint)uVar9) {
      uVar2 = param_1[2];
    }
    param_1[2] = uVar2;
  }
  else {
    *param_2 = lVar11;
    *(long **)(uVar10 + uVar9 * 8) = param_2;
  }
  *param_1 = *param_1 + 1;
  return plVar14 == (long *)0x0;
}


// ===== 00707640  FUN_00707640 =====

bool FUN_00707640(int *param_1,long *param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  
  puVar8 = PTR_LOOP_00d525b0;
  uVar9 = param_2[1] ^ (ulong)PTR_LOOP_00d525b0;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar9;
  uVar10 = *(ulong *)(param_1 + 4);
  uVar9 = SUB168(auVar4 * ZEXT816(0x79d5f9e0de1e8cf5),8) ^ uVar9 * 0x79d5f9e0de1e8cf5 ^ uVar10;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar9;
  uVar2 = param_1[1];
  uVar9 = (ulong)(uVar2 - 1 &
                 (SUB164(auVar5 * ZEXT816(0x79d5f9e0de1e8cf5),8) ^ (int)uVar9 * -0x21e1730b));
  plVar14 = (long *)(uVar10 + uVar9 * 8);
  do {
    plVar14 = (long *)*plVar14;
    if (plVar14 == (long *)0x0) {
      uVar13 = (ulong)(*param_1 + 1U);
      uVar12 = ((ulong)uVar2 & 0xfffffffe) - ((ulong)(uVar2 >> 2) & 0x3ffffffc);
      if (uVar12 < uVar13) {
        if ((int)uVar2 < 0) goto LAB_00707714;
        uVar3 = uVar2 << 1;
      }
      else {
        if ((uVar2 < 3) || (uVar12 >> 2 < uVar13)) goto LAB_00707714;
        lVar11 = 0;
        do {
          uVar1 = lVar11 + 2;
          lVar11 = lVar11 + 1;
        } while (uVar13 + (*param_1 + 1U >> 2) + 1 << (uVar1 & 0x3f) < uVar12);
        uVar3 = uVar2 >> (ulong)((uint)lVar11 & 0x1f);
        if (uVar3 < 3) {
          uVar3 = 2;
        }
        if (uVar3 == uVar2) goto LAB_00707714;
      }
      FUN_00708304(param_1,uVar3);
      auVar6._8_8_ = 0;
      auVar6._0_8_ = param_2[1] ^ (ulong)puVar8;
      uVar10 = *(ulong *)(param_1 + 4);
      uVar9 = SUB168(auVar6 * ZEXT816(0x79d5f9e0de1e8cf5),8) ^
              (param_2[1] ^ (ulong)puVar8) * 0x79d5f9e0de1e8cf5 ^ uVar10;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar9;
      uVar9 = (ulong)(param_1[1] - 1U &
                     (SUB164(auVar7 * ZEXT816(0x79d5f9e0de1e8cf5),8) ^ (int)uVar9 * -0x21e1730b));
      goto LAB_00707714;
    }
  } while (plVar14[1] != param_2[1]);
  FUN_007081f8(param_1,uVar9,plVar14,1);
  uVar10 = *(ulong *)(param_1 + 4);
LAB_00707714:
  lVar11 = *(long *)(uVar10 + uVar9 * 8);
  if (lVar11 == 0) {
    *(long **)(uVar10 + uVar9 * 8) = param_2;
    *param_2 = 0;
    uVar2 = (uint)uVar9;
    if ((uint)param_1[2] <= (uint)uVar9) {
      uVar2 = param_1[2];
    }
    param_1[2] = uVar2;
  }
  else {
    *param_2 = lVar11;
    *(long **)(uVar10 + uVar9 * 8) = param_2;
  }
  *param_1 = *param_1 + 1;
  return plVar14 == (long *)0x0;
}


// ===== 007077f0  FUN_007077f0 =====

undefined8 FUN_007077f0(int *param_1,long *param_2)

{
  ulong uVar1;
  undefined8 *__s1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  size_t __n;
  long *__s2;
  long *plVar15;
  
  __n = (size_t)*(char *)((long)param_2 + 0x1f);
  plVar13 = param_2 + 1;
  if ((long)__n < 0) {
    __s2 = (long *)param_2[1];
    __n = param_2[2];
  }
  else {
    __s2 = param_2 + 1;
  }
  uVar14 = *(ulong *)(param_1 + 4);
  uVar8 = FUN_006df52c(PTR_LOOP_00d525b0,__s2,__n);
  uVar2 = param_1[1];
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar8 ^ uVar14;
  uVar8 = (ulong)(uVar2 - 1 &
                 (SUB164(auVar5 * ZEXT816(0x79d5f9e0de1e8cf5),8) ^
                 (int)(uVar8 ^ uVar14) * -0x21e1730b));
  for (plVar15 = *(long **)(*(long *)(param_1 + 4) + uVar8 * 8); plVar15 != (long *)0x0;
      plVar15 = (long *)*plVar15) {
    bVar3 = *(byte *)((long)plVar15 + 0x1f);
    uVar14 = plVar15[2];
    if (-1 < (char)bVar3) {
      uVar14 = (ulong)bVar3;
    }
    if (uVar14 == __n) {
      __s1 = (undefined8 *)plVar15[1];
      if (-1 < (char)bVar3) {
        __s1 = plVar15 + 1;
      }
      iVar7 = memcmp(__s1,__s2,__n);
      if (iVar7 == 0) {
        FUN_00708524(param_1,uVar8,plVar15,1);
        uVar9 = 0;
        goto LAB_00707950;
      }
    }
  }
  uVar12 = (ulong)(*param_1 + 1U);
  uVar14 = ((ulong)uVar2 & 0xfffffffe) - ((ulong)(uVar2 >> 2) & 0x3ffffffc);
  if (uVar14 < uVar12) {
    if (-1 < (int)uVar2) {
      uVar4 = uVar2 << 1;
LAB_007079b4:
      FUN_00708674(param_1,uVar4);
      lVar10 = (long)*(char *)((long)param_2 + 0x1f);
      if (lVar10 < 0) {
        plVar13 = (long *)param_2[1];
        lVar10 = param_2[2];
      }
      uVar14 = *(ulong *)(param_1 + 4);
      uVar8 = FUN_006df52c(PTR_LOOP_00d525b0,plVar13,lVar10);
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar8 ^ uVar14;
      uVar8 = (ulong)(param_1[1] - 1U &
                     (SUB164(auVar6 * ZEXT816(0x79d5f9e0de1e8cf5),8) ^
                     (int)(uVar8 ^ uVar14) * -0x21e1730b));
    }
  }
  else {
    uVar9 = 1;
    if ((uVar2 < 3) || (uVar14 >> 2 < uVar12)) goto LAB_00707950;
    lVar10 = 0;
    do {
      uVar1 = lVar10 + 2;
      lVar10 = lVar10 + 1;
    } while (uVar12 + (*param_1 + 1U >> 2) + 1 << (uVar1 & 0x3f) < uVar14);
    uVar4 = uVar2 >> (ulong)((uint)lVar10 & 0x1f);
    if (uVar4 < 3) {
      uVar4 = 2;
    }
    if (uVar4 != uVar2) goto LAB_007079b4;
  }
  uVar9 = 1;
LAB_00707950:
  lVar10 = *(long *)(param_1 + 4);
  lVar11 = *(long *)(lVar10 + uVar8 * 8);
  if (lVar11 == 0) {
    *(long **)(lVar10 + uVar8 * 8) = param_2;
    *param_2 = 0;
    uVar2 = (uint)uVar8;
    if ((uint)param_1[2] <= (uint)uVar8) {
      uVar2 = param_1[2];
    }
    param_1[2] = uVar2;
  }
  else {
    *param_2 = lVar11;
    *(long **)(lVar10 + uVar8 * 8) = param_2;
  }
  *param_1 = *param_1 + 1;
  return uVar9;
}


// ===== 00707a00  FUN_00707a00 =====

void FUN_00707a00(undefined8 *param_1)

{
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
  operator_delete((void *)*param_1);
  return;
}


// ===== 00707a24  FUN_00707a24 =====

undefined8 * FUN_00707a24(long *param_1,undefined8 *param_2,long param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar3 = (undefined8 *)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x2c)) {
    uVar1 = *(uint *)(param_1 + 5);
    uVar4 = (ulong)uVar1;
    if (*(char *)((long)param_1 + 0x2c) == '\0') {
      if (uVar1 < 0x21) {
        *(undefined8 *)((long)param_2 + (uVar4 - 0x10)) = 0;
        *(undefined8 *)((long)param_2 + (uVar4 - 8)) = 0;
      }
      else if (uVar1 < 0x41) {
        param_2[2] = 0;
        param_2[3] = 0;
        *(undefined8 *)((long)param_2 + (uVar4 - 0x18)) = 0;
        *(undefined8 *)((long)param_2 + (uVar4 - 0x20)) = 0;
        *(undefined8 *)((long)param_2 + (uVar4 - 8)) = 0;
        *(undefined8 *)((long)param_2 + (uVar4 - 0x10)) = 0;
      }
      else {
        if (0x50 < uVar1) {
          puVar5 = param_2 + 10;
          uVar7 = 0x50;
          do {
            uVar7 = uVar7 + 0x40;
            Hint_Prefetch(puVar5,2,0,0);
            puVar5[-7] = 0;
            puVar5[-8] = 0;
            puVar5[-5] = 0;
            puVar5[-6] = 0;
            puVar5[-3] = 0;
            puVar5[-4] = 0;
            puVar5[-1] = 0;
            puVar5[-2] = 0;
            puVar5 = puVar5 + 8;
          } while (uVar7 < uVar4);
        }
        *(undefined8 *)((long)param_2 + (uVar4 - 0x38)) = 0;
        *(undefined8 *)((long)param_2 + (uVar4 - 0x40)) = 0;
        *(undefined8 *)((long)param_2 + (uVar4 - 0x28)) = 0;
        *(undefined8 *)((long)param_2 + (uVar4 - 0x30)) = 0;
        *(undefined8 *)((long)param_2 + (uVar4 - 0x18)) = 0;
        *(undefined8 *)((long)param_2 + (uVar4 - 0x20)) = 0;
        *(undefined8 *)((long)param_2 + (uVar4 - 8)) = 0;
        *(undefined8 *)((long)param_2 + (uVar4 - 0x10)) = 0;
      }
    }
    else if (uVar1 < 0x21) {
      uVar8 = *(undefined8 *)((long)puVar3 + (uVar4 - 0x10));
      *(undefined8 *)((long)param_2 + (uVar4 - 8)) = *(undefined8 *)((long)puVar3 + (uVar4 - 8));
      *(undefined8 *)((long)param_2 + (uVar4 - 0x10)) = uVar8;
    }
    else if (uVar1 < 0x41) {
      uVar8 = puVar3[2];
      param_2[3] = puVar3[3];
      param_2[2] = uVar8;
      uVar10 = *(undefined8 *)((long)puVar3 + (uVar4 - 0x20));
      uVar9 = *(undefined8 *)((long)puVar3 + (uVar4 - 8));
      uVar8 = *(undefined8 *)((long)puVar3 + (uVar4 - 0x10));
      *(undefined8 *)((long)param_2 + (uVar4 - 0x18)) =
           *(undefined8 *)((long)puVar3 + (uVar4 - 0x18));
      *(undefined8 *)((long)param_2 + (uVar4 - 0x20)) = uVar10;
      *(undefined8 *)((long)param_2 + (uVar4 - 8)) = uVar9;
      *(undefined8 *)((long)param_2 + (uVar4 - 0x10)) = uVar8;
    }
    else {
      if (0x50 < uVar1) {
        puVar5 = param_2 + 10;
        puVar6 = puVar3 + 10;
        uVar7 = 0x50;
        do {
          Hint_Prefetch(puVar6,0,0,0);
          Hint_Prefetch(puVar5,2,0,0);
          uVar7 = uVar7 + 0x40;
          puVar2 = puVar6 + -3;
          uVar10 = puVar6[-4];
          uVar9 = puVar6[-1];
          uVar8 = puVar6[-2];
          uVar12 = puVar6[-7];
          uVar11 = puVar6[-8];
          uVar14 = puVar6[-5];
          uVar13 = puVar6[-6];
          puVar6 = puVar6 + 8;
          puVar5[-3] = *puVar2;
          puVar5[-4] = uVar10;
          puVar5[-1] = uVar9;
          puVar5[-2] = uVar8;
          puVar5[-7] = uVar12;
          puVar5[-8] = uVar11;
          puVar5[-5] = uVar14;
          puVar5[-6] = uVar13;
          puVar5 = puVar5 + 8;
        } while (uVar7 < uVar4);
      }
      uVar10 = *(undefined8 *)((long)puVar3 + (uVar4 - 0x20));
      uVar9 = *(undefined8 *)((long)puVar3 + (uVar4 - 8));
      uVar8 = *(undefined8 *)((long)puVar3 + (uVar4 - 0x10));
      uVar12 = *(undefined8 *)((long)puVar3 + (uVar4 - 0x38));
      uVar11 = *(undefined8 *)((long)puVar3 + (uVar4 - 0x40));
      uVar14 = *(undefined8 *)((long)puVar3 + (uVar4 - 0x28));
      uVar13 = *(undefined8 *)((long)puVar3 + (uVar4 - 0x30));
      *(undefined8 *)((long)param_2 + (uVar4 - 0x18)) =
           *(undefined8 *)((long)puVar3 + (uVar4 - 0x18));
      *(undefined8 *)((long)param_2 + (uVar4 - 0x20)) = uVar10;
      *(undefined8 *)((long)param_2 + (uVar4 - 8)) = uVar9;
      *(undefined8 *)((long)param_2 + (uVar4 - 0x10)) = uVar8;
      *(undefined8 *)((long)param_2 + (uVar4 - 0x38)) = uVar12;
      *(undefined8 *)((long)param_2 + (uVar4 - 0x40)) = uVar11;
      *(undefined8 *)((long)param_2 + (uVar4 - 0x28)) = uVar14;
      *(undefined8 *)((long)param_2 + (uVar4 - 0x30)) = uVar13;
    }
    if (param_3 != 0) {
      for (uVar4 = param_1[6]; uVar4 != 0; uVar4 = uVar4 - 1 & uVar4) {
        uVar7 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        param_2[LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20)] = param_3;
      }
    }
    *param_2 = *puVar3;
    param_2[1] = param_3;
    return param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x00707b94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar3 = (undefined8 *)(*(code *)param_1[6])();
  return puVar3;
}


// ===== 00707b98  FUN_00707b98 =====

undefined8 FUN_00707b98(int *param_1,uint param_2,long *param_3,uint param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ulong uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  
  uVar6 = *(ulong *)(param_1 + 4);
  param_2 = param_1[1] - 1U & param_2;
  plVar4 = (long *)(uVar6 + (ulong)param_2 * 8);
  do {
    plVar7 = plVar4;
    plVar4 = (long *)*plVar7;
    if (plVar4 == (long *)0x0) {
      uVar3 = (ulong)*(byte *)(param_3 + 1) & 1 | (ulong)PTR_LOOP_00d525b0;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar3;
      uVar3 = SUB168(auVar1 * ZEXT816(0x79d5f9e0de1e8cf5),8) ^ uVar3 * 0x79d5f9e0de1e8cf5 ^ uVar6;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar3;
      param_2 = param_1[1] - 1U &
                (SUB164(auVar2 * ZEXT816(0x79d5f9e0de1e8cf5),8) ^ (int)uVar3 * -0x21e1730b);
      plVar4 = (long *)(uVar6 + (ulong)param_2 * 8);
      goto LAB_00707c18;
    }
  } while (plVar4 != param_3);
  goto LAB_00707c2c;
  while (plVar4 != param_3) {
LAB_00707c18:
    plVar7 = plVar4;
    plVar4 = (long *)*plVar7;
    if (plVar4 == (long *)0x0) break;
  }
LAB_00707c2c:
  *plVar7 = *plVar4;
  *param_1 = *param_1 + -1;
  if ((param_2 == param_1[2]) && (param_2 < (uint)param_1[1])) {
    lVar5 = (ulong)(uint)param_1[1] - (ulong)param_2;
    plVar4 = (long *)(*(long *)(param_1 + 4) + (ulong)param_2 * 8);
    do {
      param_2 = param_2 + 1;
      if (*plVar4 != 0) break;
      lVar5 = lVar5 + -1;
      param_1[2] = param_2;
      plVar4 = plVar4 + 1;
    } while (lVar5 != 0);
  }
  if (((param_4 & 1) != 0) && (*(long *)(param_1 + 6) == 0)) {
    FUN_00713d00(param_1,param_3);
  }
  return 1;
}


// ===== 00707ca8  FUN_00707ca8 =====

void FUN_00707ca8(long param_1,uint param_2)

{
  uint uVar1;
  undefined8 *__dest;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined *puVar5;
  void *pvVar6;
  long lVar7;
  size_t __n;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  byte *pbVar13;
  ulong uVar14;
  
  uVar2 = *(uint *)(param_1 + 4);
  uVar14 = (ulong)uVar2;
  uVar8 = (ulong)param_2 << 3;
  if (uVar2 == 1) {
    *(uint *)(param_1 + 4) = param_2;
    *(uint *)(param_1 + 8) = param_2;
    if (*(long *)(param_1 + 0x18) == 0) {
      pvVar6 = operator_new(uVar8);
    }
    else {
      pvVar6 = (void *)FUN_006fdcd0(*(long *)(param_1 + 0x18),uVar8);
    }
    memset(pvVar6,0,uVar8);
    *(void **)(param_1 + 0x10) = pvVar6;
  }
  else {
    __dest = *(undefined8 **)(param_1 + 0x10);
    *(uint *)(param_1 + 4) = param_2;
    if (*(long *)(param_1 + 0x18) == 0) {
      pvVar6 = operator_new(uVar8);
    }
    else {
      pvVar6 = (void *)FUN_006fdcd0(*(long *)(param_1 + 0x18),uVar8);
    }
    memset(pvVar6,0,uVar8);
    uVar1 = *(uint *)(param_1 + 8);
    uVar8 = (ulong)uVar1;
    *(void **)(param_1 + 0x10) = pvVar6;
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
    puVar5 = PTR_LOOP_00d525b0;
    if (uVar1 < uVar2) {
      do {
        plVar9 = (long *)__dest[uVar8];
        while (plVar10 = plVar9, plVar9 != (long *)0x0) {
          while( true ) {
            uVar11 = (ulong)*(byte *)(plVar10 + 1) & 1 | (ulong)puVar5;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = uVar11;
            uVar12 = *(ulong *)(param_1 + 0x10);
            uVar11 = SUB168(auVar3 * ZEXT816(0x79d5f9e0de1e8cf5),8) ^ uVar11 * 0x79d5f9e0de1e8cf5 ^
                     uVar12;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = uVar11;
            uVar2 = *(int *)(param_1 + 4) - 1U &
                    (SUB164(auVar4 * ZEXT816(0x79d5f9e0de1e8cf5),8) ^ (int)uVar11 * -0x21e1730b);
            uVar11 = (ulong)uVar2;
            plVar9 = (long *)*plVar10;
            lVar7 = *(long *)(uVar12 + uVar11 * 8);
            if (lVar7 == 0) break;
            *plVar10 = lVar7;
            *(long **)(uVar12 + uVar11 * 8) = plVar10;
            plVar10 = plVar9;
            if (plVar9 == (long *)0x0) goto LAB_00707d6c;
          }
          *(long **)(uVar12 + uVar11 * 8) = plVar10;
          *plVar10 = 0;
          if (*(uint *)(param_1 + 8) <= uVar2) {
            uVar2 = *(uint *)(param_1 + 8);
          }
          *(uint *)(param_1 + 8) = uVar2;
        }
LAB_00707d6c:
        uVar8 = uVar8 + 1;
      } while (uVar8 != uVar14);
    }
    plVar9 = *(long **)(param_1 + 0x18);
    if (plVar9 == (long *)0x0) {
      operator_delete(__dest);
      return;
    }
    lVar7 = __emutls_get_address(&DAT_00d5a2a0);
    if (*(long *)(lVar7 + 8) == *plVar9) {
      pbVar13 = *(byte **)(lVar7 + 0x10);
      uVar8 = 0x3b - LZCOUNT(uVar14 * 8);
      pvVar6 = *(void **)(pbVar13 + 0x30);
      if (uVar8 < *pbVar13) {
        *__dest = *(undefined8 *)((long)pvVar6 + uVar8 * 8);
        *(undefined8 **)((long)pvVar6 + uVar8 * 8) = __dest;
      }
      else {
        memmove(__dest,pvVar6,(ulong)*pbVar13 << 3);
        __n = uVar14 * 8 + (ulong)*pbVar13 * -8;
        if (0 < (long)__n) {
          memset(__dest + *pbVar13,0,__n);
        }
        *(undefined8 **)(pbVar13 + 0x30) = __dest;
        if (0x3f < uVar14) {
          uVar14 = 0x40;
        }
        *pbVar13 = (byte)uVar14;
      }
    }
  }
  return;
}


// ===== 00707ecc  FUN_00707ecc =====

undefined8 FUN_00707ecc(int *param_1,uint param_2,long *param_3,uint param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ulong uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  
  uVar6 = *(ulong *)(param_1 + 4);
  param_2 = param_1[1] - 1U & param_2;
  plVar4 = (long *)(uVar6 + (ulong)param_2 * 8);
  do {
    plVar7 = plVar4;
    plVar4 = (long *)*plVar7;
    if (plVar4 == (long *)0x0) {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = (ulong)*(uint *)(param_3 + 1) ^ (ulong)PTR_LOOP_00d525b0;
      uVar3 = SUB168(auVar1 * ZEXT816(0x79d5f9e0de1e8cf5),8) ^
              ((ulong)*(uint *)(param_3 + 1) ^ (ulong)PTR_LOOP_00d525b0) * 0x79d5f9e0de1e8cf5 ^
              uVar6;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar3;
      param_2 = param_1[1] - 1U &
                (SUB164(auVar2 * ZEXT816(0x79d5f9e0de1e8cf5),8) ^ (int)uVar3 * -0x21e1730b);
      plVar4 = (long *)(uVar6 + (ulong)param_2 * 8);
      goto LAB_00707f48;
    }
  } while (plVar4 != param_3);
  goto LAB_00707f5c;
  while (plVar4 != param_3) {
LAB_00707f48:
    plVar7 = plVar4;
    plVar4 = (long *)*plVar7;
    if (plVar4 == (long *)0x0) break;
  }
LAB_00707f5c:
  *plVar7 = *plVar4;
  *param_1 = *param_1 + -1;
  if ((param_2 == param_1[2]) && (param_2 < (uint)param_1[1])) {
    lVar5 = (ulong)(uint)param_1[1] - (ulong)param_2;
    plVar4 = (long *)(*(long *)(param_1 + 4) + (ulong)param_2 * 8);
    do {
      param_2 = param_2 + 1;
      if (*plVar4 != 0) break;
      lVar5 = lVar5 + -1;
      param_1[2] = param_2;
      plVar4 = plVar4 + 1;
    } while (lVar5 != 0);
  }
  if (((param_4 & 1) != 0) && (*(long *)(param_1 + 6) == 0)) {
    FUN_00713d00(param_1,param_3);
  }
  return 1;
}


// ===== 00707fd8  FUN_00707fd8 =====

void FUN_00707fd8(long param_1,uint param_2)

{
  uint uVar1;
  undefined8 *__dest;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined *puVar5;
  void *pvVar6;
  long lVar7;
  size_t __n;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  byte *pbVar13;
  ulong uVar14;
  
  uVar2 = *(uint *)(param_1 + 4);
  uVar14 = (ulong)uVar2;
  uVar8 = (ulong)param_2 << 3;
  if (uVar2 == 1) {
    *(uint *)(param_1 + 4) = param_2;
    *(uint *)(param_1 + 8) = param_2;
    if (*(long *)(param_1 + 0x18) == 0) {
      pvVar6 = operator_new(uVar8);
    }
    else {
      pvVar6 = (void *)FUN_006fdcd0(*(long *)(param_1 + 0x18),uVar8);
    }
    memset(pvVar6,0,uVar8);
    *(void **)(param_1 + 0x10) = pvVar6;
  }
  else {
    __dest = *(undefined8 **)(param_1 + 0x10);
    *(uint *)(param_1 + 4) = param_2;
    if (*(long *)(param_1 + 0x18) == 0) {
      pvVar6 = operator_new(uVar8);
    }
    else {
      pvVar6 = (void *)FUN_006fdcd0(*(long *)(param_1 + 0x18),uVar8);
    }
    memset(pvVar6,0,uVar8);
    uVar1 = *(uint *)(param_1 + 8);
    uVar8 = (ulong)uVar1;
    *(void **)(param_1 + 0x10) = pvVar6;
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
    puVar5 = PTR_LOOP_00d525b0;
    if (uVar1 < uVar2) {
      do {
        plVar9 = (long *)__dest[uVar8];
        while (plVar10 = plVar9, plVar9 != (long *)0x0) {
          while( true ) {
            auVar3._8_8_ = 0;
            auVar3._0_8_ = (ulong)*(uint *)(plVar10 + 1) ^ (ulong)puVar5;
            uVar11 = *(ulong *)(param_1 + 0x10);
            uVar12 = SUB168(auVar3 * ZEXT816(0x79d5f9e0de1e8cf5),8) ^
                     ((ulong)*(uint *)(plVar10 + 1) ^ (ulong)puVar5) * 0x79d5f9e0de1e8cf5 ^ uVar11;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = uVar12;
            uVar2 = *(int *)(param_1 + 4) - 1U &
                    (SUB164(auVar4 * ZEXT816(0x79d5f9e0de1e8cf5),8) ^ (int)uVar12 * -0x21e1730b);
            uVar12 = (ulong)uVar2;
            plVar9 = (long *)*plVar10;
            lVar7 = *(long *)(uVar11 + uVar12 * 8);
            if (lVar7 == 0) break;
            *plVar10 = lVar7;
            *(long **)(uVar11 + uVar12 * 8) = plVar10;
            plVar10 = plVar9;
            if (plVar9 == (long *)0x0) goto LAB_0070809c;
          }
          *(long **)(uVar11 + uVar12 * 8) = plVar10;
          *plVar10 = 0;
          if (*(uint *)(param_1 + 8) <= uVar2) {
            uVar2 = *(uint *)(param_1 + 8);
          }
          *(uint *)(param_1 + 8) = uVar2;
        }
LAB_0070809c:
        uVar8 = uVar8 + 1;
      } while (uVar8 != uVar14);
    }
    plVar9 = *(long **)(param_1 + 0x18);
    if (plVar9 == (long *)0x0) {
      operator_delete(__dest);
      return;
    }
    lVar7 = __emutls_get_address(&DAT_00d5a2a0);
    if (*(long *)(lVar7 + 8) == *plVar9) {
      pbVar13 = *(byte **)(lVar7 + 0x10);
      uVar8 = 0x3b - LZCOUNT(uVar14 * 8);
      pvVar6 = *(void **)(pbVar13 + 0x30);
      if (uVar8 < *pbVar13) {
        *__dest = *(undefined8 *)((long)pvVar6 + uVar8 * 8);
        *(undefined8 **)((long)pvVar6 + uVar8 * 8) = __dest;
      }
      else {
        memmove(__dest,pvVar6,(ulong)*pbVar13 << 3);
        __n = uVar14 * 8 + (ulong)*pbVar13 * -8;
        if (0 < (long)__n) {
          memset(__dest + *pbVar13,0,__n);
        }
        *(undefined8 **)(pbVar13 + 0x30) = __dest;
        if (0x3f < uVar14) {
          uVar14 = 0x40;
        }
        *pbVar13 = (byte)uVar14;
      }
    }
  }
  return;
}


// ===== 007081f8  FUN_007081f8 =====

undefined8 FUN_007081f8(int *param_1,uint param_2,long *param_3,uint param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  
  uVar7 = *(ulong *)(param_1 + 4);
  param_2 = param_1[1] - 1U & param_2;
  plVar4 = (long *)(uVar7 + (ulong)param_2 * 8);
  do {
    plVar6 = plVar4;
    plVar4 = (long *)*plVar6;
    if (plVar4 == (long *)0x0) {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = param_3[1] ^ (ulong)PTR_LOOP_00d525b0;
      uVar3 = SUB168(auVar1 * ZEXT816(0x79d5f9e0de1e8cf5),8) ^
              (param_3[1] ^ (ulong)PTR_LOOP_00d525b0) * 0x79d5f9e0de1e8cf5 ^ uVar7;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar3;
      param_2 = param_1[1] - 1U &
                (SUB164(auVar2 * ZEXT816(0x79d5f9e0de1e8cf5),8) ^ (int)uVar3 * -0x21e1730b);
      plVar4 = (long *)(uVar7 + (ulong)param_2 * 8);
      goto LAB_00708274;
    }
  } while (plVar4 != param_3);
  goto LAB_00708288;
  while (plVar4 != param_3) {
LAB_00708274:
    plVar6 = plVar4;
    plVar4 = (long *)*plVar6;
    if (plVar4 == (long *)0x0) break;
  }
LAB_00708288:
  *plVar6 = *plVar4;
  *param_1 = *param_1 + -1;
  if ((param_2 == param_1[2]) && (param_2 < (uint)param_1[1])) {
    lVar5 = (ulong)(uint)param_1[1] - (ulong)param_2;
    plVar4 = (long *)(*(long *)(param_1 + 4) + (ulong)param_2 * 8);
    do {
      param_2 = param_2 + 1;
      if (*plVar4 != 0) break;
      lVar5 = lVar5 + -1;
      param_1[2] = param_2;
      plVar4 = plVar4 + 1;
    } while (lVar5 != 0);
  }
  if (((param_4 & 1) != 0) && (*(long *)(param_1 + 6) == 0)) {
    FUN_00713d00(param_1,param_3);
  }
  return 1;
}


// ===== 00708304  FUN_00708304 =====

void FUN_00708304(long param_1,uint param_2)

{
  uint uVar1;
  undefined8 *__dest;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined *puVar5;
  void *pvVar6;
  long lVar7;
  size_t __n;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  byte *pbVar13;
  ulong uVar14;
  
  uVar2 = *(uint *)(param_1 + 4);
  uVar14 = (ulong)uVar2;
  uVar8 = (ulong)param_2 << 3;
  if (uVar2 == 1) {
    *(uint *)(param_1 + 4) = param_2;
    *(uint *)(param_1 + 8) = param_2;
    if (*(long *)(param_1 + 0x18) == 0) {
      pvVar6 = operator_new(uVar8);
    }
    else {
      pvVar6 = (void *)FUN_006fdcd0(*(long *)(param_1 + 0x18),uVar8);
    }
    memset(pvVar6,0,uVar8);
    *(void **)(param_1 + 0x10) = pvVar6;
  }
  else {
    __dest = *(undefined8 **)(param_1 + 0x10);
    *(uint *)(param_1 + 4) = param_2;
    if (*(long *)(param_1 + 0x18) == 0) {
      pvVar6 = operator_new(uVar8);
    }
    else {
      pvVar6 = (void *)FUN_006fdcd0(*(long *)(param_1 + 0x18),uVar8);
    }
    memset(pvVar6,0,uVar8);
    uVar1 = *(uint *)(param_1 + 8);
    uVar8 = (ulong)uVar1;
    *(void **)(param_1 + 0x10) = pvVar6;
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
    puVar5 = PTR_LOOP_00d525b0;
    if (uVar1 < uVar2) {
      do {
        plVar9 = (long *)__dest[uVar8];
        while (plVar10 = plVar9, plVar9 != (long *)0x0) {
          while( true ) {
            auVar3._8_8_ = 0;
            auVar3._0_8_ = plVar10[1] ^ (ulong)puVar5;
            uVar11 = *(ulong *)(param_1 + 0x10);
            uVar12 = SUB168(auVar3 * ZEXT816(0x79d5f9e0de1e8cf5),8) ^
                     (plVar10[1] ^ (ulong)puVar5) * 0x79d5f9e0de1e8cf5 ^ uVar11;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = uVar12;
            uVar2 = *(int *)(param_1 + 4) - 1U &
                    (SUB164(auVar4 * ZEXT816(0x79d5f9e0de1e8cf5),8) ^ (int)uVar12 * -0x21e1730b);
            uVar12 = (ulong)uVar2;
            plVar9 = (long *)*plVar10;
            lVar7 = *(long *)(uVar11 + uVar12 * 8);
            if (lVar7 == 0) break;
            *plVar10 = lVar7;
            *(long **)(uVar11 + uVar12 * 8) = plVar10;
            plVar10 = plVar9;
            if (plVar9 == (long *)0x0) goto LAB_007083c8;
          }
          *(long **)(uVar11 + uVar12 * 8) = plVar10;
          *plVar10 = 0;
          if (*(uint *)(param_1 + 8) <= uVar2) {
            uVar2 = *(uint *)(param_1 + 8);
          }
          *(uint *)(param_1 + 8) = uVar2;
        }
LAB_007083c8:
        uVar8 = uVar8 + 1;
      } while (uVar8 != uVar14);
    }
    plVar9 = *(long **)(param_1 + 0x18);
    if (plVar9 == (long *)0x0) {
      operator_delete(__dest);
      return;
    }
    lVar7 = __emutls_get_address(&DAT_00d5a2a0);
    if (*(long *)(lVar7 + 8) == *plVar9) {
      pbVar13 = *(byte **)(lVar7 + 0x10);
      uVar8 = 0x3b - LZCOUNT(uVar14 * 8);
      pvVar6 = *(void **)(pbVar13 + 0x30);
      if (uVar8 < *pbVar13) {
        *__dest = *(undefined8 *)((long)pvVar6 + uVar8 * 8);
        *(undefined8 **)((long)pvVar6 + uVar8 * 8) = __dest;
      }
      else {
        memmove(__dest,pvVar6,(ulong)*pbVar13 << 3);
        __n = uVar14 * 8 + (ulong)*pbVar13 * -8;
        if (0 < (long)__n) {
          memset(__dest + *pbVar13,0,__n);
        }
        *(undefined8 **)(pbVar13 + 0x30) = __dest;
        if (0x3f < uVar14) {
          uVar14 = 0x40;
        }
        *pbVar13 = (byte)uVar14;
      }
    }
  }
  return;
}


// ===== 00708524  FUN_00708524 =====

undefined8 FUN_00708524(int *param_1,uint param_2,long *param_3,uint param_4)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  
  uVar6 = *(ulong *)(param_1 + 4);
  param_2 = param_1[1] - 1U & param_2;
  plVar3 = (long *)(uVar6 + (ulong)param_2 * 8);
  do {
    plVar4 = plVar3;
    plVar3 = (long *)*plVar4;
    if (plVar3 == (long *)0x0) {
      uVar2 = param_3[2];
      plVar3 = (long *)param_3[1];
      if (-1 < (char)*(byte *)((long)param_3 + 0x1f)) {
        uVar2 = (ulong)*(byte *)((long)param_3 + 0x1f);
        plVar3 = param_3 + 1;
      }
      uVar2 = FUN_006df52c(PTR_LOOP_00d525b0,plVar3,uVar2);
      uVar2 = uVar2 ^ uVar6;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar2;
      param_2 = param_1[1] - 1U &
                (SUB164(auVar1 * ZEXT816(0x79d5f9e0de1e8cf5),8) ^ (int)uVar2 * -0x21e1730b);
      plVar3 = (long *)(*(long *)(param_1 + 4) + (ulong)param_2 * 8);
      goto LAB_007085d8;
    }
  } while (plVar3 != param_3);
  goto LAB_007085ec;
  while (plVar3 != param_3) {
LAB_007085d8:
    plVar4 = plVar3;
    plVar3 = (long *)*plVar4;
    if (plVar3 == (long *)0x0) break;
  }
LAB_007085ec:
  *plVar4 = *plVar3;
  *param_1 = *param_1 + -1;
  if ((param_2 == param_1[2]) && (param_2 < (uint)param_1[1])) {
    lVar5 = (ulong)(uint)param_1[1] - (ulong)param_2;
    plVar3 = (long *)(*(long *)(param_1 + 4) + (ulong)param_2 * 8);
    do {
      param_2 = param_2 + 1;
      if (*plVar3 != 0) break;
      lVar5 = lVar5 + -1;
      param_1[2] = param_2;
      plVar3 = plVar3 + 1;
    } while (lVar5 != 0);
  }
  if (((param_4 & 1) != 0) && (*(long *)(param_1 + 6) == 0)) {
    FUN_00713d00(param_1,param_3);
  }
  return 1;
}


// ===== 00708674  FUN_00708674 =====

void FUN_00708674(long param_1,uint param_2)

{
  uint uVar1;
  undefined8 *__dest;
  uint uVar2;
  undefined1 auVar3 [16];
  long *plVar4;
  undefined *puVar5;
  void *pvVar6;
  ulong uVar7;
  long lVar8;
  size_t __n;
  ulong uVar9;
  long lVar10;
  byte *pbVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  
  uVar2 = *(uint *)(param_1 + 4);
  uVar12 = (ulong)uVar2;
  uVar9 = (ulong)param_2 << 3;
  if (uVar2 == 1) {
    *(uint *)(param_1 + 4) = param_2;
    *(uint *)(param_1 + 8) = param_2;
    if (*(long *)(param_1 + 0x18) == 0) {
      pvVar6 = operator_new(uVar9);
    }
    else {
      pvVar6 = (void *)FUN_006fdcd0(*(long *)(param_1 + 0x18),uVar9);
    }
    memset(pvVar6,0,uVar9);
    *(void **)(param_1 + 0x10) = pvVar6;
  }
  else {
    __dest = *(undefined8 **)(param_1 + 0x10);
    *(uint *)(param_1 + 4) = param_2;
    if (*(long *)(param_1 + 0x18) == 0) {
      pvVar6 = operator_new(uVar9);
    }
    else {
      pvVar6 = (void *)FUN_006fdcd0(*(long *)(param_1 + 0x18),uVar9);
    }
    memset(pvVar6,0,uVar9);
    uVar1 = *(uint *)(param_1 + 8);
    uVar9 = (ulong)uVar1;
    *(void **)(param_1 + 0x10) = pvVar6;
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
    puVar5 = PTR_LOOP_00d525b0;
    if (uVar1 < uVar2) {
      do {
        plVar13 = (long *)__dest[uVar9];
        while (plVar14 = plVar13, plVar13 != (long *)0x0) {
          while( true ) {
            plVar13 = (long *)*plVar14;
            uVar15 = *(ulong *)(param_1 + 0x10);
            uVar7 = plVar14[2];
            plVar4 = (long *)plVar14[1];
            if (-1 < (char)*(byte *)((long)plVar14 + 0x1f)) {
              uVar7 = (ulong)*(byte *)((long)plVar14 + 0x1f);
              plVar4 = plVar14 + 1;
            }
            uVar7 = FUN_006df52c(puVar5,plVar4,uVar7);
            uVar7 = uVar7 ^ uVar15;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = uVar7;
            lVar8 = *(long *)(param_1 + 0x10);
            uVar2 = *(int *)(param_1 + 4) - 1U &
                    (SUB164(auVar3 * ZEXT816(0x79d5f9e0de1e8cf5),8) ^ (int)uVar7 * -0x21e1730b);
            uVar7 = (ulong)uVar2;
            lVar10 = *(long *)(lVar8 + uVar7 * 8);
            if (lVar10 == 0) break;
            *plVar14 = lVar10;
            *(long **)(lVar8 + uVar7 * 8) = plVar14;
            plVar14 = plVar13;
            if (plVar13 == (long *)0x0) goto LAB_00708748;
          }
          *(long **)(lVar8 + uVar7 * 8) = plVar14;
          *plVar14 = 0;
          if (*(uint *)(param_1 + 8) <= uVar2) {
            uVar2 = *(uint *)(param_1 + 8);
          }
          *(uint *)(param_1 + 8) = uVar2;
        }
LAB_00708748:
        uVar9 = uVar9 + 1;
      } while (uVar9 != uVar12);
    }
    plVar13 = *(long **)(param_1 + 0x18);
    if (plVar13 == (long *)0x0) {
      operator_delete(__dest);
      return;
    }
    lVar8 = __emutls_get_address(&DAT_00d5a2a0);
    if (*(long *)(lVar8 + 8) == *plVar13) {
      pbVar11 = *(byte **)(lVar8 + 0x10);
      uVar9 = 0x3b - LZCOUNT(uVar12 * 8);
      pvVar6 = *(void **)(pbVar11 + 0x30);
      if (uVar9 < *pbVar11) {
        *__dest = *(undefined8 *)((long)pvVar6 + uVar9 * 8);
        *(undefined8 **)((long)pvVar6 + uVar9 * 8) = __dest;
      }
      else {
        memmove(__dest,pvVar6,(ulong)*pbVar11 << 3);
        __n = uVar12 * 8 + (ulong)*pbVar11 * -8;
        if (0 < (long)__n) {
          memset(__dest + *pbVar11,0,__n);
        }
        *(undefined8 **)(pbVar11 + 0x30) = __dest;
        if (0x3f < uVar12) {
          uVar12 = 0x40;
        }
        *pbVar11 = (byte)uVar12;
      }
    }
  }
  return;
}


// ===== 007088cc  FUN_007088cc =====

void FUN_007088cc(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,long param_5)

{
  uint uVar1;
  ushort uVar2;
  ulong uVar3;
  
  if ((param_4 & 7) != 0) {
    if (((uint)param_4 & 7) == 2) {
      switchD_006fe28c::caseD_a();
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0070892c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_5 + 0x30))();
    return;
  }
  param_5 = param_5 + (param_4 >> 0x20);
  uVar1 = *(uint *)(param_5 + 4);
  uVar2 = *(ushort *)(param_5 + 10);
  if (uVar1 != 0xffffffff) {
    uVar3 = (ulong)(uVar1 >> 3) & 0x1ffffffc;
    *(uint *)(param_1 + uVar3) = *(uint *)(param_1 + uVar3) | 1 << (ulong)(uVar1 & 0x1f);
  }
  uVar2 = uVar2 >> 6 & 7;
  if (uVar2 != 0) {
    if (uVar2 == 2) {
      FUN_00708cb0();
      return;
    }
    FUN_00708938();
    return;
  }
  FUN_00709028();
  return;
}


// ===== 00708938  FUN_00708938 =====

byte * FUN_00708938(long param_1,ulong *param_2,undefined8 *param_3,ulong param_4,ushort *param_5,
                   undefined8 param_6)

{
  uint *puVar1;
  uint uVar2;
  ushort uVar3;
  byte bVar4;
  byte bVar5;
  ulong uVar6;
  byte *pbVar7;
  int iVar8;
  void *pvVar9;
  void *__src;
  ulong *puVar10;
  int iVar11;
  byte *pbVar12;
  ulong __n;
  undefined8 uVar13;
  ulong uVar14;
  undefined1 *puVar15;
  undefined1 auVar16 [12];
  undefined1 *local_68;
  
  puVar1 = (uint *)((long)param_5 + (param_4 >> 0x20));
  uVar3 = *(ushort *)((long)puVar1 + 10);
  uVar14 = (ulong)*(uint *)((long)param_5 + (ulong)*(uint *)(param_5 + 0xc) + 8);
  __src = *(void **)(**(long **)(param_5 + 0x10) + uVar14);
  pvVar9 = *(void **)(param_1 + uVar14);
  if (pvVar9 != __src) goto LAB_007089ec;
  __n = (ulong)*(uint *)((long)param_5 + (ulong)*(uint *)(param_5 + 0xc) + 0x10);
  uVar6 = *(ulong *)(param_1 + 8);
  if ((uVar6 & 1) == 0) {
    if (uVar6 == 0) goto LAB_007089cc;
LAB_007089b0:
    pvVar9 = (void *)FUN_006fdbf0(uVar6,__n + 7 & 0x1fffffff8);
  }
  else {
    uVar6 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
    if (uVar6 != 0) goto LAB_007089b0;
LAB_007089cc:
    pvVar9 = operator_new(__n);
  }
  *(void **)(param_1 + uVar14) = pvVar9;
  memcpy(pvVar9,__src,__n);
  pvVar9 = *(void **)(param_1 + uVar14);
LAB_007089ec:
  uVar14 = (ulong)*puVar1;
  puVar10 = *(ulong **)((long)pvVar9 + uVar14);
  if (puVar10 == (ulong *)PTR_DAT_00d52598) {
    uVar6 = *(ulong *)(param_1 + 8);
    if ((uVar6 & 1) != 0) {
      uVar6 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
    }
    if (uVar6 == 0) {
      puVar10 = (ulong *)operator_new(0x10);
      *puVar10 = 0;
      *(ulong **)((long)pvVar9 + uVar14) = puVar10;
    }
    else {
      puVar10 = (ulong *)FUN_006fdbf0(uVar6,0x10);
      *puVar10 = uVar6;
      *(ulong **)((long)pvVar9 + uVar14) = puVar10;
    }
  }
  if ((uVar3 >> 10 & 1) == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = *(undefined8 *)
              ((long)param_5 + (ulong)(ushort)puVar1[2] * 8 + (ulong)*(uint *)(param_5 + 0xc));
  }
  do {
    local_68 = &DAT_aaaaaaaaaaaaaaaa;
    uVar14 = *param_2;
    if (((uint)uVar14 >> 7 & 1) == 0) {
      local_68 = (undefined1 *)(uVar14 & 0x7f);
      pbVar7 = (byte *)((long)param_2 + 1);
    }
    else if (((uint)uVar14 >> 0xf & 1) == 0) {
      pbVar7 = (byte *)((long)param_2 + 2);
      local_68 = (undefined1 *)(uVar14 & 0x7f | (uVar14 >> 8 & 0x7f) << 7);
    }
    else {
      pbVar7 = (byte *)FUN_00705258(param_2,&local_68);
    }
    if (pbVar7 == (byte *)0x0) goto LAB_00708bdc;
    puVar15 = local_68;
    if ((uVar3 >> 10 & 1) == 0) {
      if ((uVar3 & 0x600) == 0x200) {
        puVar15 = (undefined1 *)(-((ulong)local_68 & 1) ^ (ulong)local_68 >> 1);
      }
    }
    else if ((uVar3 & 0x600) == 0x600) {
      if (((int)local_68 < (int)uVar13) || ((int)((ulong)uVar13 >> 0x20) < (int)local_68)) {
LAB_00708c50:
        pbVar7 = (byte *)FUN_006ff8bc(param_1,param_2,param_3,param_4,param_5,param_6);
        return pbVar7;
      }
    }
    else {
      uVar14 = FUN_0071211c((ulong)local_68 & 0xffffffff,uVar13);
      if ((uVar14 & 1) == 0) goto LAB_00708c50;
    }
    uVar14 = *puVar10;
    if (((uint)uVar14 >> 2 & 1) == 0) {
      uVar2 = (uint)uVar14 & 3;
      if (uVar2 == 1) {
        iVar8 = 1;
LAB_00708b9c:
        iVar11 = iVar8 + 1;
        FUN_006f8940(puVar10,(uVar14 & 4) == 0,iVar8,iVar11);
        uVar14 = *puVar10;
        iVar8 = (int)puVar10[1];
        goto LAB_00708b10;
      }
      puVar10[(uVar14 & 3) + 1] = (ulong)puVar15;
      *puVar10 = uVar14 & 0xfffffffffffffff8 | (ulong)(uVar2 + 1);
    }
    else {
      iVar8 = (int)puVar10[1];
      if (iVar8 == *(int *)((long)puVar10 + 0xc)) goto LAB_00708b9c;
      iVar11 = iVar8 + 1;
LAB_00708b10:
      *(int *)(puVar10 + 1) = iVar11;
      *(undefined1 **)((uVar14 & 0xfffffffffffffff8) + (long)iVar8 * 8) = puVar15;
    }
    if ((byte *)*param_3 <= pbVar7) break;
    pbVar12 = pbVar7 + 1;
    bVar5 = *pbVar7;
    auVar16[8] = bVar5;
    auVar16._0_8_ = pbVar12;
    auVar16._9_3_ = 0;
    if ((char)bVar5 < '\0') {
      bVar4 = *pbVar12;
      if ((char)bVar4 < '\0') {
        auVar16 = FUN_006f61a4(pbVar7);
        pbVar12 = auVar16._0_8_;
      }
      else {
        pbVar12 = pbVar7 + 2;
        auVar16._8_4_ = (uint)bVar5 + (uint)bVar4 * 0x80 + -0x80;
        auVar16._0_8_ = pbVar12;
      }
    }
    if (pbVar12 == (byte *)0x0) {
LAB_00708bdc:
      pbVar7 = (byte *)switchD_006fe28c::caseD_8(param_1);
      return pbVar7;
    }
    param_2 = auVar16._0_8_;
  } while (auVar16._8_4_ == (int)param_4);
  uVar14 = (ulong)*param_5;
  if (uVar14 != 0) {
    *(uint *)(param_1 + uVar14) = *(uint *)(param_1 + uVar14) | (uint)param_6;
  }
  return pbVar7;
}


// ===== 00708cb0  FUN_00708cb0 =====

byte * FUN_00708cb0(long param_1,ulong *param_2,undefined8 *param_3,ulong param_4,ushort *param_5,
                   undefined8 param_6)

{
  uint *puVar1;
  uint uVar2;
  ushort uVar3;
  byte bVar4;
  byte bVar5;
  ulong uVar6;
  byte *pbVar7;
  int iVar8;
  void *pvVar9;
  void *__src;
  ulong *puVar10;
  int iVar11;
  byte *pbVar12;
  ulong __n;
  undefined8 uVar13;
  ulong uVar14;
  uint uVar15;
  undefined1 auVar16 [12];
  undefined1 *local_68;
  
  puVar1 = (uint *)((long)param_5 + (param_4 >> 0x20));
  uVar3 = *(ushort *)((long)puVar1 + 10);
  uVar14 = (ulong)*(uint *)((long)param_5 + (ulong)*(uint *)(param_5 + 0xc) + 8);
  __src = *(void **)(**(long **)(param_5 + 0x10) + uVar14);
  pvVar9 = *(void **)(param_1 + uVar14);
  if (pvVar9 != __src) goto LAB_00708d64;
  __n = (ulong)*(uint *)((long)param_5 + (ulong)*(uint *)(param_5 + 0xc) + 0x10);
  uVar6 = *(ulong *)(param_1 + 8);
  if ((uVar6 & 1) == 0) {
    if (uVar6 == 0) goto LAB_00708d44;
LAB_00708d28:
    pvVar9 = (void *)FUN_006fdbf0(uVar6,__n + 7 & 0x1fffffff8);
  }
  else {
    uVar6 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
    if (uVar6 != 0) goto LAB_00708d28;
LAB_00708d44:
    pvVar9 = operator_new(__n);
  }
  *(void **)(param_1 + uVar14) = pvVar9;
  memcpy(pvVar9,__src,__n);
  pvVar9 = *(void **)(param_1 + uVar14);
LAB_00708d64:
  uVar14 = (ulong)*puVar1;
  puVar10 = *(ulong **)((long)pvVar9 + uVar14);
  if (puVar10 == (ulong *)PTR_DAT_00d52598) {
    uVar6 = *(ulong *)(param_1 + 8);
    if ((uVar6 & 1) != 0) {
      uVar6 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
    }
    if (uVar6 == 0) {
      puVar10 = (ulong *)operator_new(0x10);
      *puVar10 = 0;
      *(ulong **)((long)pvVar9 + uVar14) = puVar10;
    }
    else {
      puVar10 = (ulong *)FUN_006fdbf0(uVar6,0x10);
      *puVar10 = uVar6;
      *(ulong **)((long)pvVar9 + uVar14) = puVar10;
    }
  }
  if ((uVar3 >> 10 & 1) == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = *(undefined8 *)
              ((long)param_5 + (ulong)(ushort)puVar1[2] * 8 + (ulong)*(uint *)(param_5 + 0xc));
  }
  do {
    local_68 = &DAT_aaaaaaaaaaaaaaaa;
    uVar14 = *param_2;
    if (((uint)uVar14 >> 7 & 1) == 0) {
      local_68 = (undefined1 *)(uVar14 & 0x7f);
      pbVar7 = (byte *)((long)param_2 + 1);
    }
    else if (((uint)uVar14 >> 0xf & 1) == 0) {
      pbVar7 = (byte *)((long)param_2 + 2);
      local_68 = (undefined1 *)(uVar14 & 0x7f | (uVar14 >> 8 & 0x7f) << 7);
    }
    else {
      pbVar7 = (byte *)FUN_00705258(param_2,&local_68);
    }
    if (pbVar7 == (byte *)0x0) goto LAB_00708f54;
    uVar15 = (uint)local_68;
    if ((uVar3 >> 10 & 1) == 0) {
      if ((uVar3 & 0x600) == 0x200) {
        uVar15 = -(uVar15 & 1) ^ uVar15 >> 1;
      }
    }
    else if ((uVar3 & 0x600) == 0x600) {
      if (((int)uVar15 < (int)uVar13) || ((int)((ulong)uVar13 >> 0x20) < (int)uVar15)) {
LAB_00708fc8:
        pbVar7 = (byte *)FUN_006ff8bc(param_1,param_2,param_3,param_4,param_5,param_6);
        return pbVar7;
      }
    }
    else {
      uVar14 = FUN_0071211c((ulong)local_68 & 0xffffffff,uVar13);
      if ((uVar14 & 1) == 0) goto LAB_00708fc8;
    }
    uVar14 = *puVar10;
    if (((uint)uVar14 >> 2 & 1) == 0) {
      uVar2 = (uint)uVar14 & 3;
      if (uVar2 == 2) {
        iVar8 = 2;
LAB_00708f14:
        iVar11 = iVar8 + 1;
        FUN_006f7ed0(puVar10,(uVar14 & 4) == 0,iVar8,iVar11);
        uVar14 = *puVar10;
        iVar8 = (int)puVar10[1];
        goto LAB_00708e88;
      }
      *(uint *)((long)puVar10 + (uVar14 & 3) * 4 + 8) = uVar15;
      *puVar10 = uVar14 & 0xfffffffffffffff8 | (ulong)(uVar2 + 1);
    }
    else {
      iVar8 = (int)puVar10[1];
      if (iVar8 == *(int *)((long)puVar10 + 0xc)) goto LAB_00708f14;
      iVar11 = iVar8 + 1;
LAB_00708e88:
      *(int *)(puVar10 + 1) = iVar11;
      *(uint *)((uVar14 & 0xfffffffffffffff8) + (long)iVar8 * 4) = uVar15;
    }
    if ((byte *)*param_3 <= pbVar7) break;
    pbVar12 = pbVar7 + 1;
    bVar5 = *pbVar7;
    auVar16[8] = bVar5;
    auVar16._0_8_ = pbVar12;
    auVar16._9_3_ = 0;
    if ((char)bVar5 < '\0') {
      bVar4 = *pbVar12;
      if ((char)bVar4 < '\0') {
        auVar16 = FUN_006f61a4(pbVar7);
        pbVar12 = auVar16._0_8_;
      }
      else {
        pbVar12 = pbVar7 + 2;
        auVar16._8_4_ = (uint)bVar5 + (uint)bVar4 * 0x80 + -0x80;
        auVar16._0_8_ = pbVar12;
      }
    }
    if (pbVar12 == (byte *)0x0) {
LAB_00708f54:
      pbVar7 = (byte *)switchD_006fe28c::caseD_8(param_1);
      return pbVar7;
    }
    param_2 = auVar16._0_8_;
  } while (auVar16._8_4_ == (int)param_4);
  uVar14 = (ulong)*param_5;
  if (uVar14 != 0) {
    *(uint *)(param_1 + uVar14) = *(uint *)(param_1 + uVar14) | (uint)param_6;
  }
  return pbVar7;
}


// ===== 00709028  FUN_00709028 =====

byte * FUN_00709028(long param_1,ulong *param_2,undefined8 *param_3,ulong param_4,ushort *param_5,
                   undefined8 param_6)

{
  uint *puVar1;
  ushort uVar2;
  byte bVar3;
  byte bVar4;
  ulong uVar5;
  byte *pbVar6;
  int iVar7;
  void *pvVar8;
  void *__src;
  ulong *puVar9;
  int iVar10;
  byte *pbVar11;
  ulong __n;
  undefined8 uVar12;
  ulong uVar13;
  uint uVar14;
  undefined1 *puVar15;
  undefined1 auVar16 [12];
  undefined1 *local_68;
  
  puVar1 = (uint *)((long)param_5 + (param_4 >> 0x20));
  uVar2 = *(ushort *)((long)puVar1 + 10);
  uVar13 = (ulong)*(uint *)((long)param_5 + (ulong)*(uint *)(param_5 + 0xc) + 8);
  __src = *(void **)(**(long **)(param_5 + 0x10) + uVar13);
  pvVar8 = *(void **)(param_1 + uVar13);
  if (pvVar8 != __src) goto LAB_007090dc;
  __n = (ulong)*(uint *)((long)param_5 + (ulong)*(uint *)(param_5 + 0xc) + 0x10);
  uVar5 = *(ulong *)(param_1 + 8);
  if ((uVar5 & 1) == 0) {
    if (uVar5 == 0) goto LAB_007090bc;
LAB_007090a0:
    pvVar8 = (void *)FUN_006fdbf0(uVar5,__n + 7 & 0x1fffffff8);
  }
  else {
    uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
    if (uVar5 != 0) goto LAB_007090a0;
LAB_007090bc:
    pvVar8 = operator_new(__n);
  }
  *(void **)(param_1 + uVar13) = pvVar8;
  memcpy(pvVar8,__src,__n);
  pvVar8 = *(void **)(param_1 + uVar13);
LAB_007090dc:
  uVar13 = (ulong)*puVar1;
  puVar9 = *(ulong **)((long)pvVar8 + uVar13);
  if (puVar9 == (ulong *)PTR_DAT_00d52598) {
    uVar5 = *(ulong *)(param_1 + 8);
    if ((uVar5 & 1) != 0) {
      uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
    }
    if (uVar5 == 0) {
      puVar9 = (ulong *)operator_new(0x10);
      *puVar9 = 0;
      *(ulong **)((long)pvVar8 + uVar13) = puVar9;
    }
    else {
      puVar9 = (ulong *)FUN_006fdbf0(uVar5,0x10);
      *puVar9 = uVar5;
      *(ulong **)((long)pvVar8 + uVar13) = puVar9;
    }
  }
  if ((uVar2 >> 10 & 1) == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = *(undefined8 *)
              ((long)param_5 + (ulong)(ushort)puVar1[2] * 8 + (ulong)*(uint *)(param_5 + 0xc));
  }
  do {
    local_68 = &DAT_aaaaaaaaaaaaaaaa;
    uVar13 = *param_2;
    if (((uint)uVar13 >> 7 & 1) == 0) {
      local_68 = (undefined1 *)(uVar13 & 0x7f);
      pbVar6 = (byte *)((long)param_2 + 1);
    }
    else if (((uint)uVar13 >> 0xf & 1) == 0) {
      pbVar6 = (byte *)((long)param_2 + 2);
      local_68 = (undefined1 *)(uVar13 & 0x7f | (uVar13 >> 8 & 0x7f) << 7);
    }
    else {
      pbVar6 = (byte *)FUN_00705258(param_2,&local_68);
    }
    if (pbVar6 == (byte *)0x0) goto LAB_007092e0;
    uVar14 = (uint)local_68;
    puVar15 = local_68;
    if ((uVar2 >> 10 & 1) == 0) {
      if ((uVar2 & 0x600) == 0x200) {
        puVar15 = (undefined1 *)(long)(int)(-(uVar14 & 1) ^ uVar14 >> 1);
      }
    }
    else if ((uVar2 & 0x600) == 0x600) {
      if (((int)uVar14 < (int)uVar12) || ((int)((ulong)uVar12 >> 0x20) < (int)uVar14)) {
LAB_00709354:
        pbVar6 = (byte *)FUN_006ff8bc(param_1,param_2,param_3,param_4,param_5,param_6);
        return pbVar6;
      }
    }
    else {
      uVar13 = FUN_0071211c((ulong)local_68 & 0xffffffff,uVar12);
      if ((uVar13 & 1) == 0) goto LAB_00709354;
    }
    uVar13 = *puVar9;
    if (((uint)uVar13 >> 2 & 1) == 0) {
      uVar14 = (uint)uVar13 & 3;
      if (uVar14 == 3) {
        iVar7 = 3;
LAB_007092a0:
        iVar10 = iVar7 + 1;
        FUN_006f9538(puVar9,(uVar13 & 4) == 0,iVar7,iVar10);
        uVar13 = *puVar9;
        iVar7 = (int)puVar9[1];
        goto LAB_0070920c;
      }
      *puVar9 = uVar13 & 0xfffffffffffffff8 | (ulong)(uVar14 + 1);
      *(bool *)((long)puVar9 + (uVar13 & 3) + 8) = puVar15 != (undefined1 *)0x0;
    }
    else {
      iVar7 = (int)puVar9[1];
      if (iVar7 == *(int *)((long)puVar9 + 0xc)) goto LAB_007092a0;
      iVar10 = iVar7 + 1;
LAB_0070920c:
      *(int *)(puVar9 + 1) = iVar10;
      *(bool *)((uVar13 & 0xfffffffffffffff8) + (long)iVar7) = puVar15 != (undefined1 *)0x0;
    }
    if ((byte *)*param_3 <= pbVar6) break;
    pbVar11 = pbVar6 + 1;
    bVar4 = *pbVar6;
    auVar16[8] = bVar4;
    auVar16._0_8_ = pbVar11;
    auVar16._9_3_ = 0;
    if ((char)bVar4 < '\0') {
      bVar3 = *pbVar11;
      if ((char)bVar3 < '\0') {
        auVar16 = FUN_006f61a4(pbVar6);
        pbVar11 = auVar16._0_8_;
      }
      else {
        pbVar11 = pbVar6 + 2;
        auVar16._8_4_ = (uint)bVar4 + (uint)bVar3 * 0x80 + -0x80;
        auVar16._0_8_ = pbVar11;
      }
    }
    if (pbVar11 == (byte *)0x0) {
LAB_007092e0:
      pbVar6 = (byte *)switchD_006fe28c::caseD_8(param_1);
      return pbVar6;
    }
    param_2 = auVar16._0_8_;
  } while (auVar16._8_4_ == (int)param_4);
  uVar13 = (ulong)*param_5;
  if (uVar13 != 0) {
    *(uint *)(param_1 + uVar13) = *(uint *)(param_1 + uVar13) | (uint)param_6;
  }
  return pbVar6;
}


// ===== 007093b4  FUN_007093b4 =====

void FUN_007093b4(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,long param_5)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  ushort uVar4;
  ulong uVar5;
  void *__src;
  void *pvVar6;
  ulong __n;
  ulong uVar7;
  ushort local_90 [4];
  undefined8 local_88;
  long lStack_80;
  long local_78;
  ulong uStack_70;
  ulong *local_68;
  
  puVar1 = (uint *)(param_5 + (param_4 >> 0x20));
  lVar2 = (ulong)*(uint *)(param_5 + 0x18) + param_5;
  uVar4 = *(ushort *)((long)puVar1 + 10);
  uVar7 = (ulong)*(uint *)(lVar2 + 8);
  __src = *(void **)(**(long **)(param_5 + 0x20) + uVar7);
  pvVar6 = *(void **)(param_1 + uVar7);
  if (pvVar6 == __src) {
    uVar5 = *(ulong *)(param_1 + 8);
    __n = (ulong)*(uint *)(lVar2 + 0x10);
    if ((uVar5 & 1) == 0) {
      if (uVar5 != 0) goto LAB_00709428;
LAB_00709444:
      pvVar6 = operator_new(__n);
    }
    else {
      uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
      if (uVar5 == 0) goto LAB_00709444;
LAB_00709428:
      pvVar6 = (void *)FUN_006fdbf0(uVar5,__n + 7 & 0x1fffffff8);
    }
    *(void **)(param_1 + uVar7) = pvVar6;
    memcpy(pvVar6,__src,__n);
    pvVar6 = *(void **)(param_1 + uVar7);
  }
  uVar3 = *puVar1;
  local_68 = *(ulong **)((long)pvVar6 + (ulong)uVar3);
  if (local_68 != (ulong *)PTR_DAT_00d52598) goto joined_r0x007094e0;
  uVar7 = *(ulong *)(param_1 + 8);
  if ((uVar7 & 1) == 0) {
    if (uVar7 != 0) goto LAB_007094c4;
LAB_00709548:
    local_68 = (ulong *)operator_new(0x10);
    *local_68 = 0;
  }
  else {
    uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
    if (uVar7 == 0) goto LAB_00709548;
LAB_007094c4:
    local_68 = (ulong *)FUN_006fdbf0(uVar7,0x10);
    *local_68 = uVar7;
  }
  *(ulong **)((long)pvVar6 + (ulong)uVar3) = local_68;
joined_r0x007094e0:
  local_90[0] = uVar4 & 0x600;
  if ((uVar4 >> 10 & 1) != 0) {
    local_88 = *(undefined8 *)
                ((ulong)*(uint *)(param_5 + 0x18) + param_5 + (ulong)(ushort)puVar1[2] * 8);
    lStack_80 = param_1;
    local_78 = param_5;
    uStack_70 = param_4;
    FUN_007098ac(param_3,param_2,local_90,0);
    return;
  }
  FUN_00709bc0(param_3,param_2,local_68,local_90[0] == 0x200,0);
  return;
}


// ===== 0070955c  FUN_0070955c =====

void FUN_0070955c(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,long param_5)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  ushort uVar4;
  ulong uVar5;
  void *__src;
  void *pvVar6;
  ulong __n;
  ulong uVar7;
  ushort local_90 [4];
  undefined8 local_88;
  long lStack_80;
  long local_78;
  ulong uStack_70;
  ulong *local_68;
  
  puVar1 = (uint *)(param_5 + (param_4 >> 0x20));
  lVar2 = (ulong)*(uint *)(param_5 + 0x18) + param_5;
  uVar4 = *(ushort *)((long)puVar1 + 10);
  uVar7 = (ulong)*(uint *)(lVar2 + 8);
  __src = *(void **)(**(long **)(param_5 + 0x20) + uVar7);
  pvVar6 = *(void **)(param_1 + uVar7);
  if (pvVar6 == __src) {
    uVar5 = *(ulong *)(param_1 + 8);
    __n = (ulong)*(uint *)(lVar2 + 0x10);
    if ((uVar5 & 1) == 0) {
      if (uVar5 != 0) goto LAB_007095d0;
LAB_007095ec:
      pvVar6 = operator_new(__n);
    }
    else {
      uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
      if (uVar5 == 0) goto LAB_007095ec;
LAB_007095d0:
      pvVar6 = (void *)FUN_006fdbf0(uVar5,__n + 7 & 0x1fffffff8);
    }
    *(void **)(param_1 + uVar7) = pvVar6;
    memcpy(pvVar6,__src,__n);
    pvVar6 = *(void **)(param_1 + uVar7);
  }
  uVar3 = *puVar1;
  local_68 = *(ulong **)((long)pvVar6 + (ulong)uVar3);
  if (local_68 != (ulong *)PTR_DAT_00d52598) goto joined_r0x00709688;
  uVar7 = *(ulong *)(param_1 + 8);
  if ((uVar7 & 1) == 0) {
    if (uVar7 != 0) goto LAB_0070966c;
LAB_007096f0:
    local_68 = (ulong *)operator_new(0x10);
    *local_68 = 0;
  }
  else {
    uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
    if (uVar7 == 0) goto LAB_007096f0;
LAB_0070966c:
    local_68 = (ulong *)FUN_006fdbf0(uVar7,0x10);
    *local_68 = uVar7;
  }
  *(ulong **)((long)pvVar6 + (ulong)uVar3) = local_68;
joined_r0x00709688:
  local_90[0] = uVar4 & 0x600;
  if ((uVar4 >> 10 & 1) != 0) {
    local_88 = *(undefined8 *)
                ((ulong)*(uint *)(param_5 + 0x18) + param_5 + (ulong)(ushort)puVar1[2] * 8);
    lStack_80 = param_1;
    local_78 = param_5;
    uStack_70 = param_4;
    FUN_00709e88(param_3,param_2,local_90,0);
    return;
  }
  FUN_0070a198(param_3,param_2,local_68,local_90[0] == 0x200,0);
  return;
}


// ===== 00709704  FUN_00709704 =====

void FUN_00709704(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,long param_5)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  ushort uVar4;
  ulong uVar5;
  void *__src;
  void *pvVar6;
  ulong __n;
  ulong uVar7;
  ushort local_90 [4];
  undefined8 local_88;
  long lStack_80;
  long local_78;
  ulong uStack_70;
  ulong *local_68;
  
  puVar1 = (uint *)(param_5 + (param_4 >> 0x20));
  lVar2 = (ulong)*(uint *)(param_5 + 0x18) + param_5;
  uVar4 = *(ushort *)((long)puVar1 + 10);
  uVar7 = (ulong)*(uint *)(lVar2 + 8);
  __src = *(void **)(**(long **)(param_5 + 0x20) + uVar7);
  pvVar6 = *(void **)(param_1 + uVar7);
  if (pvVar6 == __src) {
    uVar5 = *(ulong *)(param_1 + 8);
    __n = (ulong)*(uint *)(lVar2 + 0x10);
    if ((uVar5 & 1) == 0) {
      if (uVar5 != 0) goto LAB_00709778;
LAB_00709794:
      pvVar6 = operator_new(__n);
    }
    else {
      uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
      if (uVar5 == 0) goto LAB_00709794;
LAB_00709778:
      pvVar6 = (void *)FUN_006fdbf0(uVar5,__n + 7 & 0x1fffffff8);
    }
    *(void **)(param_1 + uVar7) = pvVar6;
    memcpy(pvVar6,__src,__n);
    pvVar6 = *(void **)(param_1 + uVar7);
  }
  uVar3 = *puVar1;
  local_68 = *(ulong **)((long)pvVar6 + (ulong)uVar3);
  if (local_68 != (ulong *)PTR_DAT_00d52598) goto joined_r0x00709830;
  uVar7 = *(ulong *)(param_1 + 8);
  if ((uVar7 & 1) == 0) {
    if (uVar7 != 0) goto LAB_00709814;
LAB_00709898:
    local_68 = (ulong *)operator_new(0x10);
    *local_68 = 0;
  }
  else {
    uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
    if (uVar7 == 0) goto LAB_00709898;
LAB_00709814:
    local_68 = (ulong *)FUN_006fdbf0(uVar7,0x10);
    *local_68 = uVar7;
  }
  *(ulong **)((long)pvVar6 + (ulong)uVar3) = local_68;
joined_r0x00709830:
  local_90[0] = uVar4 & 0x600;
  if ((uVar4 >> 10 & 1) != 0) {
    local_88 = *(undefined8 *)
                ((ulong)*(uint *)(param_5 + 0x18) + param_5 + (ulong)(ushort)puVar1[2] * 8);
    lStack_80 = param_1;
    local_78 = param_5;
    uStack_70 = param_4;
    FUN_0070a460(param_3,param_2,local_90,0);
    return;
  }
  FUN_0070a780(param_3,param_2,local_68,local_90[0] == 0x200,0);
  return;
}


// ===== 007098ac  FUN_007098ac =====

void FUN_007098ac(long param_1,char *param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  undefined1 auVar13 [16];
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined2 local_68;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  cVar1 = *param_2;
  if (cVar1 < '\0') {
    auVar13 = FUN_006f6214(param_2,cVar1);
    lVar7 = auVar13._0_8_;
    if (lVar7 == 0) goto LAB_007099a0;
  }
  else {
    auVar13[8] = cVar1;
    auVar13._0_8_ = param_2 + 1;
    auVar13._9_7_ = 0;
    if (param_2 + 1 == (char *)0x0) {
      lVar7 = 0;
      goto LAB_007099a0;
    }
  }
  uVar9 = *(undefined8 *)(param_1 + 8);
  while( true ) {
    lVar6 = auVar13._0_8_;
    iVar2 = (int)uVar9 - auVar13._0_4_;
    iVar11 = auVar13._8_4_;
    if (iVar11 <= iVar2) break;
    uStack_a8 = param_3[1];
    local_b0 = *param_3;
    uStack_98 = param_3[3];
    uStack_a0 = param_3[2];
    uStack_88 = param_3[5];
    local_90 = param_3[4];
    lVar7 = FUN_00709a4c(lVar6,uVar9,&local_b0);
    if (lVar7 == 0) goto LAB_007099a0;
    puVar10 = *(undefined8 **)(param_1 + 8);
    uVar3 = iVar11 - iVar2;
    iVar12 = (int)lVar7 - (int)puVar10;
    if ((int)uVar3 < 0x11) {
      local_68 = 0;
      local_70 = 0;
      uStack_78 = puVar10[1];
      local_80 = *puVar10;
      if ((0x1a < uVar3) || (0x1a < (ulong)(long)iVar12)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(0x5512,0x709a4c);
        (*pcVar5)();
      }
      uStack_d8 = param_3[1];
      local_e0 = *param_3;
      uStack_c8 = param_3[3];
      uStack_d0 = param_3[2];
      uStack_b8 = param_3[5];
      local_c0 = param_3[4];
      lVar6 = (long)&local_80 + (ulong)uVar3;
      lVar8 = FUN_00709a4c((long)&local_80 + (long)iVar12,lVar6,&local_e0);
      lVar7 = 0;
      if ((lVar8 != 0) && (lVar8 == lVar6)) {
        lVar7 = *(long *)(param_1 + 8) + (ulong)uVar3;
      }
      goto LAB_007099a0;
    }
    if (*(int *)(param_1 + 0x1c) < 0x11) {
      lVar7 = 0;
      goto LAB_007099a0;
    }
    lVar7 = FUN_006f54c0(param_1);
    if (lVar7 == 0) goto LAB_007099a0;
    uVar9 = *(undefined8 *)(param_1 + 8);
    auVar13._8_4_ = (iVar11 - iVar2) - iVar12;
    auVar13._0_8_ = lVar7 + iVar12;
    auVar13._12_4_ = 0;
  }
  uStack_108 = param_3[1];
  local_110 = *param_3;
  uStack_f8 = param_3[3];
  uStack_100 = param_3[2];
  uStack_e8 = param_3[5];
  local_f0 = param_3[4];
  lVar7 = FUN_00709a4c(lVar6,lVar6 + iVar11,&local_110);
  if (lVar6 + iVar11 != lVar7) {
    lVar7 = 0;
  }
LAB_007099a0:
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar7);
  }
  return;
}


// ===== 00709a4c  FUN_00709a4c =====

ulong * FUN_00709a4c(ulong *param_1,ulong *param_2,short *param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined1 *puVar4;
  ulong *puVar5;
  int iVar6;
  int iVar7;
  undefined1 *local_38;
  
  if (param_1 < param_2) {
    do {
      local_38 = &DAT_aaaaaaaaaaaaaaaa;
      uVar3 = *param_1;
      if (((uint)uVar3 >> 7 & 1) == 0) {
        puVar4 = (undefined1 *)(uVar3 & 0x7f);
        param_1 = (ulong *)((long)param_1 + 1);
      }
      else if (((uint)uVar3 >> 0xf & 1) == 0) {
        param_1 = (ulong *)((long)param_1 + 2);
        puVar4 = (undefined1 *)(uVar3 & 0x7f | (uVar3 >> 8 & 0x7f) << 7);
      }
      else {
        param_1 = (ulong *)FUN_00705258(param_1,&local_38);
        puVar4 = local_38;
      }
      if (param_1 == (ulong *)0x0) {
        return (ulong *)0x0;
      }
      iVar6 = (int)puVar4;
      local_38 = puVar4;
      if (*param_3 == 0x600) {
        if (((int)*(undefined8 *)(param_3 + 4) <= iVar6) &&
           (iVar6 <= (int)((ulong)*(undefined8 *)(param_3 + 4) >> 0x20))) goto LAB_00709af0;
LAB_00709a84:
        FUN_006ff858(*(undefined8 *)(param_3 + 8),*(undefined8 *)(param_3 + 0xc),
                     *(undefined4 *)(param_3 + 0x10),(ulong)puVar4 & 0xffffffff);
      }
      else {
        uVar3 = FUN_0071211c((ulong)puVar4 & 0xffffffff);
        if ((uVar3 & 1) == 0) goto LAB_00709a84;
LAB_00709af0:
        puVar5 = *(ulong **)(param_3 + 0x14);
        uVar3 = *puVar5;
        if (((uint)uVar3 >> 2 & 1) == 0) {
          uVar1 = (uint)uVar3 & 3;
          if (uVar1 != 1) {
            *puVar5 = uVar3 & 0xfffffffffffffff8 | (ulong)(uVar1 + 1);
            puVar5[(uVar3 & 3) + 1] = (long)iVar6;
            goto LAB_00709a94;
          }
          iVar2 = 1;
LAB_00709b68:
          iVar7 = iVar2 + 1;
          FUN_006f8940(puVar5,(uVar3 & 4) == 0,iVar2,iVar7);
          uVar3 = *puVar5;
          iVar2 = (int)puVar5[1];
        }
        else {
          iVar2 = (int)puVar5[1];
          if (iVar2 == *(int *)((long)puVar5 + 0xc)) goto LAB_00709b68;
          iVar7 = iVar2 + 1;
        }
        *(int *)(puVar5 + 1) = iVar7;
        *(long *)((uVar3 & 0xfffffffffffffff8) + (long)iVar2 * 8) = (long)iVar6;
      }
LAB_00709a94:
    } while (param_1 < param_2);
  }
  return param_1;
}


// ===== 00709bc0  FUN_00709bc0 =====

void FUN_00709bc0(long param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  undefined1 auVar13 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined2 local_68;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  cVar1 = *param_2;
  if (cVar1 < '\0') {
    auVar13 = FUN_006f6214(param_2,cVar1);
    lVar7 = auVar13._0_8_;
    if (lVar7 == 0) goto LAB_00709ca0;
  }
  else {
    auVar13[8] = cVar1;
    auVar13._0_8_ = param_2 + 1;
    auVar13._9_7_ = 0;
    if (param_2 + 1 == (char *)0x0) {
      lVar7 = 0;
      goto LAB_00709ca0;
    }
  }
  uVar9 = *(undefined8 *)(param_1 + 8);
  while( true ) {
    lVar6 = auVar13._0_8_;
    iVar2 = (int)uVar9 - auVar13._0_4_;
    iVar11 = auVar13._8_4_;
    if (iVar11 <= iVar2) break;
    lVar7 = FUN_00709d40(lVar6,uVar9,param_3,param_4);
    if (lVar7 == 0) goto LAB_00709ca0;
    puVar10 = *(undefined8 **)(param_1 + 8);
    uVar3 = iVar11 - iVar2;
    iVar12 = (int)lVar7 - (int)puVar10;
    if ((int)uVar3 < 0x11) {
      local_68 = 0;
      local_70 = 0;
      uStack_78 = puVar10[1];
      local_80 = *puVar10;
      if ((0x1a < uVar3) || (0x1a < (ulong)(long)iVar12)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(0x5512,0x709d40);
        (*pcVar5)();
      }
      lVar6 = (long)&local_80 + (ulong)uVar3;
      lVar8 = FUN_00709d40((long)&local_80 + (long)iVar12,lVar6,param_3,param_4);
      lVar7 = 0;
      if ((lVar8 != 0) && (lVar8 == lVar6)) {
        lVar7 = *(long *)(param_1 + 8) + (ulong)uVar3;
      }
      goto LAB_00709ca0;
    }
    if (*(int *)(param_1 + 0x1c) < 0x11) {
      lVar7 = 0;
      goto LAB_00709ca0;
    }
    lVar7 = FUN_006f54c0(param_1);
    if (lVar7 == 0) goto LAB_00709ca0;
    uVar9 = *(undefined8 *)(param_1 + 8);
    auVar13._8_4_ = (iVar11 - iVar2) - iVar12;
    auVar13._0_8_ = lVar7 + iVar12;
    auVar13._12_4_ = 0;
  }
  lVar7 = FUN_00709d40(lVar6,lVar6 + iVar11,param_3,param_4);
  if (lVar6 + iVar11 != lVar7) {
    lVar7 = 0;
  }
LAB_00709ca0:
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar7);
  }
  return;
}


// ===== 00709d40  FUN_00709d40 =====

ulong * FUN_00709d40(ulong *param_1,ulong *param_2,ulong *param_3,ulong param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  undefined1 *local_58;
  
  if (param_1 < param_2) {
    do {
      while( true ) {
        local_58 = &DAT_aaaaaaaaaaaaaaaa;
        uVar4 = *param_1;
        if (((uint)uVar4 >> 7 & 1) == 0) {
          local_58 = (undefined1 *)(uVar4 & 0x7f);
          param_1 = (ulong *)((long)param_1 + 1);
        }
        else if (((uint)uVar4 >> 0xf & 1) == 0) {
          param_1 = (ulong *)((long)param_1 + 2);
          local_58 = (undefined1 *)(uVar4 & 0x7f | (uVar4 >> 8 & 0x7f) << 7);
        }
        else {
          param_1 = (ulong *)FUN_00705258(param_1,&local_58);
        }
        if (param_1 == (ulong *)0x0) {
          return (ulong *)0x0;
        }
        uVar4 = *param_3;
        puVar2 = (undefined1 *)(-((ulong)local_58 & 1) ^ (ulong)local_58 >> 1);
        if ((param_4 & 1) == 0) {
          puVar2 = local_58;
        }
        if (((uint)uVar4 >> 2 & 1) != 0) break;
        uVar1 = (uint)uVar4 & 3;
        if (uVar1 == 1) {
          iVar3 = 1;
LAB_00709e2c:
          iVar5 = iVar3 + 1;
          FUN_006f8940(param_3,(uVar4 & 4) == 0,iVar3,iVar5);
          uVar4 = *param_3;
          iVar3 = (int)param_3[1];
          goto LAB_00709df8;
        }
        *param_3 = uVar4 & 0xfffffffffffffff8 | (ulong)(uVar1 + 1);
        (param_3 + 1)[uVar4 & 3] = (ulong)puVar2;
        if (param_2 <= param_1) {
          return param_1;
        }
      }
      iVar3 = (int)param_3[1];
      if (iVar3 == *(int *)((long)param_3 + 0xc)) goto LAB_00709e2c;
      iVar5 = iVar3 + 1;
LAB_00709df8:
      *(int *)(param_3 + 1) = iVar5;
      *(undefined1 **)((uVar4 & 0xfffffffffffffff8) + (long)iVar3 * 8) = puVar2;
    } while (param_1 < param_2);
  }
  return param_1;
}


// ===== 00709e88  FUN_00709e88 =====

void FUN_00709e88(long param_1,char *param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  undefined1 auVar13 [16];
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined2 local_68;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  cVar1 = *param_2;
  if (cVar1 < '\0') {
    auVar13 = FUN_006f6214(param_2,cVar1);
    lVar7 = auVar13._0_8_;
    if (lVar7 == 0) goto LAB_00709f7c;
  }
  else {
    auVar13[8] = cVar1;
    auVar13._0_8_ = param_2 + 1;
    auVar13._9_7_ = 0;
    if (param_2 + 1 == (char *)0x0) {
      lVar7 = 0;
      goto LAB_00709f7c;
    }
  }
  uVar9 = *(undefined8 *)(param_1 + 8);
  while( true ) {
    lVar6 = auVar13._0_8_;
    iVar2 = (int)uVar9 - auVar13._0_4_;
    iVar11 = auVar13._8_4_;
    if (iVar11 <= iVar2) break;
    uStack_a8 = param_3[1];
    local_b0 = *param_3;
    uStack_98 = param_3[3];
    uStack_a0 = param_3[2];
    uStack_88 = param_3[5];
    local_90 = param_3[4];
    lVar7 = FUN_0070a028(lVar6,uVar9,&local_b0);
    if (lVar7 == 0) goto LAB_00709f7c;
    puVar10 = *(undefined8 **)(param_1 + 8);
    uVar3 = iVar11 - iVar2;
    iVar12 = (int)lVar7 - (int)puVar10;
    if ((int)uVar3 < 0x11) {
      local_68 = 0;
      local_70 = 0;
      uStack_78 = puVar10[1];
      local_80 = *puVar10;
      if ((0x1a < uVar3) || (0x1a < (ulong)(long)iVar12)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(0x5512,0x70a028);
        (*pcVar5)();
      }
      uStack_d8 = param_3[1];
      local_e0 = *param_3;
      uStack_c8 = param_3[3];
      uStack_d0 = param_3[2];
      uStack_b8 = param_3[5];
      local_c0 = param_3[4];
      lVar6 = (long)&local_80 + (ulong)uVar3;
      lVar8 = FUN_0070a028((long)&local_80 + (long)iVar12,lVar6,&local_e0);
      lVar7 = 0;
      if ((lVar8 != 0) && (lVar8 == lVar6)) {
        lVar7 = *(long *)(param_1 + 8) + (ulong)uVar3;
      }
      goto LAB_00709f7c;
    }
    if (*(int *)(param_1 + 0x1c) < 0x11) {
      lVar7 = 0;
      goto LAB_00709f7c;
    }
    lVar7 = FUN_006f54c0(param_1);
    if (lVar7 == 0) goto LAB_00709f7c;
    uVar9 = *(undefined8 *)(param_1 + 8);
    auVar13._8_4_ = (iVar11 - iVar2) - iVar12;
    auVar13._0_8_ = lVar7 + iVar12;
    auVar13._12_4_ = 0;
  }
  uStack_108 = param_3[1];
  local_110 = *param_3;
  uStack_f8 = param_3[3];
  uStack_100 = param_3[2];
  uStack_e8 = param_3[5];
  local_f0 = param_3[4];
  lVar7 = FUN_0070a028(lVar6,lVar6 + iVar11,&local_110);
  if (lVar6 + iVar11 != lVar7) {
    lVar7 = 0;
  }
LAB_00709f7c:
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar7);
  }
  return;
}


// ===== 0070a028  FUN_0070a028 =====

ulong * FUN_0070a028(ulong *param_1,ulong *param_2,short *param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  ulong *puVar6;
  int iVar7;
  undefined1 *local_38;
  
  if (param_1 < param_2) {
    do {
      local_38 = &DAT_aaaaaaaaaaaaaaaa;
      uVar5 = *param_1;
      if (((uint)uVar5 >> 7 & 1) == 0) {
        local_38 = (undefined1 *)(uVar5 & 0x7f);
        param_1 = (ulong *)((long)param_1 + 1);
      }
      else if (((uint)uVar5 >> 0xf & 1) == 0) {
        param_1 = (ulong *)((long)param_1 + 2);
        local_38 = (undefined1 *)(uVar5 & 0x7f | (uVar5 >> 8 & 0x7f) << 7);
      }
      else {
        param_1 = (ulong *)FUN_00705258(param_1,&local_38);
      }
      if (param_1 == (ulong *)0x0) {
        return (ulong *)0x0;
      }
      iVar2 = (int)local_38;
      uVar5 = (ulong)local_38 & 0xffffffff;
      if (*param_3 == 0x600) {
        if (((int)*(undefined8 *)(param_3 + 4) <= (int)local_38) &&
           ((int)local_38 <= (int)((ulong)*(undefined8 *)(param_3 + 4) >> 0x20))) goto LAB_0070a0cc;
LAB_0070a060:
        FUN_006ff858(*(undefined8 *)(param_3 + 8),*(undefined8 *)(param_3 + 0xc),
                     *(undefined4 *)(param_3 + 0x10),uVar5);
      }
      else {
        uVar3 = FUN_0071211c(uVar5);
        if ((uVar3 & 1) == 0) goto LAB_0070a060;
LAB_0070a0cc:
        puVar6 = *(ulong **)(param_3 + 0x14);
        uVar5 = *puVar6;
        if (((uint)uVar5 >> 2 & 1) == 0) {
          uVar1 = (uint)uVar5 & 3;
          if (uVar1 != 2) {
            *puVar6 = uVar5 & 0xfffffffffffffff8 | (ulong)(uVar1 + 1);
            *(int *)((long)puVar6 + (uVar5 & 3) * 4 + 8) = iVar2;
            goto LAB_0070a070;
          }
          iVar4 = 2;
LAB_0070a140:
          iVar7 = iVar4 + 1;
          FUN_006f7ed0(puVar6,(uVar5 & 4) == 0,iVar4,iVar7);
          uVar5 = *puVar6;
          iVar4 = (int)puVar6[1];
        }
        else {
          iVar4 = (int)puVar6[1];
          if (iVar4 == *(int *)((long)puVar6 + 0xc)) goto LAB_0070a140;
          iVar7 = iVar4 + 1;
        }
        *(int *)(puVar6 + 1) = iVar7;
        *(int *)((uVar5 & 0xfffffffffffffff8) + (long)iVar4 * 4) = iVar2;
      }
LAB_0070a070:
    } while (param_1 < param_2);
  }
  return param_1;
}


// ===== 0070a198  FUN_0070a198 =====

void FUN_0070a198(long param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  undefined1 auVar13 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined2 local_68;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  cVar1 = *param_2;
  if (cVar1 < '\0') {
    auVar13 = FUN_006f6214(param_2,cVar1);
    lVar7 = auVar13._0_8_;
    if (lVar7 == 0) goto LAB_0070a278;
  }
  else {
    auVar13[8] = cVar1;
    auVar13._0_8_ = param_2 + 1;
    auVar13._9_7_ = 0;
    if (param_2 + 1 == (char *)0x0) {
      lVar7 = 0;
      goto LAB_0070a278;
    }
  }
  uVar9 = *(undefined8 *)(param_1 + 8);
  while( true ) {
    lVar6 = auVar13._0_8_;
    iVar2 = (int)uVar9 - auVar13._0_4_;
    iVar11 = auVar13._8_4_;
    if (iVar11 <= iVar2) break;
    lVar7 = FUN_0070a318(lVar6,uVar9,param_3,param_4);
    if (lVar7 == 0) goto LAB_0070a278;
    puVar10 = *(undefined8 **)(param_1 + 8);
    uVar3 = iVar11 - iVar2;
    iVar12 = (int)lVar7 - (int)puVar10;
    if ((int)uVar3 < 0x11) {
      local_68 = 0;
      local_70 = 0;
      uStack_78 = puVar10[1];
      local_80 = *puVar10;
      if ((0x1a < uVar3) || (0x1a < (ulong)(long)iVar12)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(0x5512,0x70a318);
        (*pcVar5)();
      }
      lVar6 = (long)&local_80 + (ulong)uVar3;
      lVar8 = FUN_0070a318((long)&local_80 + (long)iVar12,lVar6,param_3,param_4);
      lVar7 = 0;
      if ((lVar8 != 0) && (lVar8 == lVar6)) {
        lVar7 = *(long *)(param_1 + 8) + (ulong)uVar3;
      }
      goto LAB_0070a278;
    }
    if (*(int *)(param_1 + 0x1c) < 0x11) {
      lVar7 = 0;
      goto LAB_0070a278;
    }
    lVar7 = FUN_006f54c0(param_1);
    if (lVar7 == 0) goto LAB_0070a278;
    uVar9 = *(undefined8 *)(param_1 + 8);
    auVar13._8_4_ = (iVar11 - iVar2) - iVar12;
    auVar13._0_8_ = lVar7 + iVar12;
    auVar13._12_4_ = 0;
  }
  lVar7 = FUN_0070a318(lVar6,lVar6 + iVar11,param_3,param_4);
  if (lVar6 + iVar11 != lVar7) {
    lVar7 = 0;
  }
LAB_0070a278:
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar7);
  }
  return;
}


// ===== 0070a318  FUN_0070a318 =====

ulong * FUN_0070a318(ulong *param_1,ulong *param_2,ulong *param_3,ulong param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  undefined1 *local_58;
  
  if (param_1 < param_2) {
    do {
      while( true ) {
        local_58 = &DAT_aaaaaaaaaaaaaaaa;
        uVar4 = *param_1;
        if (((uint)uVar4 >> 7 & 1) == 0) {
          local_58 = (undefined1 *)(uVar4 & 0x7f);
          param_1 = (ulong *)((long)param_1 + 1);
        }
        else if (((uint)uVar4 >> 0xf & 1) == 0) {
          param_1 = (ulong *)((long)param_1 + 2);
          local_58 = (undefined1 *)(uVar4 & 0x7f | (uVar4 >> 8 & 0x7f) << 7);
        }
        else {
          param_1 = (ulong *)FUN_00705258(param_1,&local_58);
        }
        if (param_1 == (ulong *)0x0) {
          return (ulong *)0x0;
        }
        uVar4 = *param_3;
        uVar2 = -((uint)local_58 & 1) ^ (uint)local_58 >> 1;
        if ((param_4 & 1) == 0) {
          uVar2 = (uint)local_58;
        }
        if (((uint)uVar4 >> 2 & 1) != 0) break;
        uVar1 = (uint)uVar4 & 3;
        if (uVar1 == 2) {
          iVar3 = 2;
LAB_0070a404:
          iVar5 = iVar3 + 1;
          FUN_006f7ed0(param_3,(uVar4 & 4) == 0,iVar3,iVar5);
          uVar4 = *param_3;
          iVar3 = (int)param_3[1];
          goto LAB_0070a3d0;
        }
        *param_3 = uVar4 & 0xfffffffffffffff8 | (ulong)(uVar1 + 1);
        *(uint *)((long)(param_3 + 1) + (uVar4 & 3) * 4) = uVar2;
        if (param_2 <= param_1) {
          return param_1;
        }
      }
      iVar3 = (int)param_3[1];
      if (iVar3 == *(int *)((long)param_3 + 0xc)) goto LAB_0070a404;
      iVar5 = iVar3 + 1;
LAB_0070a3d0:
      *(int *)(param_3 + 1) = iVar5;
      *(uint *)((uVar4 & 0xfffffffffffffff8) + (long)iVar3 * 4) = uVar2;
    } while (param_1 < param_2);
  }
  return param_1;
}


// ===== 0070a460  FUN_0070a460 =====

void FUN_0070a460(long param_1,char *param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  undefined1 auVar13 [16];
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined2 local_68;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  cVar1 = *param_2;
  if (cVar1 < '\0') {
    auVar13 = FUN_006f6214(param_2,cVar1);
    lVar7 = auVar13._0_8_;
    if (lVar7 == 0) goto LAB_0070a554;
  }
  else {
    auVar13[8] = cVar1;
    auVar13._0_8_ = param_2 + 1;
    auVar13._9_7_ = 0;
    if (param_2 + 1 == (char *)0x0) {
      lVar7 = 0;
      goto LAB_0070a554;
    }
  }
  uVar9 = *(undefined8 *)(param_1 + 8);
  while( true ) {
    lVar6 = auVar13._0_8_;
    iVar2 = (int)uVar9 - auVar13._0_4_;
    iVar11 = auVar13._8_4_;
    if (iVar11 <= iVar2) break;
    uStack_a8 = param_3[1];
    local_b0 = *param_3;
    uStack_98 = param_3[3];
    uStack_a0 = param_3[2];
    uStack_88 = param_3[5];
    local_90 = param_3[4];
    lVar7 = FUN_0070a600(lVar6,uVar9,&local_b0);
    if (lVar7 == 0) goto LAB_0070a554;
    puVar10 = *(undefined8 **)(param_1 + 8);
    uVar3 = iVar11 - iVar2;
    iVar12 = (int)lVar7 - (int)puVar10;
    if ((int)uVar3 < 0x11) {
      local_68 = 0;
      local_70 = 0;
      uStack_78 = puVar10[1];
      local_80 = *puVar10;
      if ((0x1a < uVar3) || (0x1a < (ulong)(long)iVar12)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(0x5512,0x70a600);
        (*pcVar5)();
      }
      uStack_d8 = param_3[1];
      local_e0 = *param_3;
      uStack_c8 = param_3[3];
      uStack_d0 = param_3[2];
      uStack_b8 = param_3[5];
      local_c0 = param_3[4];
      lVar6 = (long)&local_80 + (ulong)uVar3;
      lVar8 = FUN_0070a600((long)&local_80 + (long)iVar12,lVar6,&local_e0);
      lVar7 = 0;
      if ((lVar8 != 0) && (lVar8 == lVar6)) {
        lVar7 = *(long *)(param_1 + 8) + (ulong)uVar3;
      }
      goto LAB_0070a554;
    }
    if (*(int *)(param_1 + 0x1c) < 0x11) {
      lVar7 = 0;
      goto LAB_0070a554;
    }
    lVar7 = FUN_006f54c0(param_1);
    if (lVar7 == 0) goto LAB_0070a554;
    uVar9 = *(undefined8 *)(param_1 + 8);
    auVar13._8_4_ = (iVar11 - iVar2) - iVar12;
    auVar13._0_8_ = lVar7 + iVar12;
    auVar13._12_4_ = 0;
  }
  uStack_108 = param_3[1];
  local_110 = *param_3;
  uStack_f8 = param_3[3];
  uStack_100 = param_3[2];
  uStack_e8 = param_3[5];
  local_f0 = param_3[4];
  lVar7 = FUN_0070a600(lVar6,lVar6 + iVar11,&local_110);
  if (lVar6 + iVar11 != lVar7) {
    lVar7 = 0;
  }
LAB_0070a554:
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar7);
  }
  return;
}


// ===== 0070a600  FUN_0070a600 =====

ulong * FUN_0070a600(ulong *param_1,ulong *param_2,short *param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  ulong *puVar6;
  int iVar7;
  undefined1 *local_38;
  
  if (param_1 < param_2) {
    do {
      local_38 = &DAT_aaaaaaaaaaaaaaaa;
      uVar5 = *param_1;
      if (((uint)uVar5 >> 7 & 1) == 0) {
        local_38 = (undefined1 *)(uVar5 & 0x7f);
        param_1 = (ulong *)((long)param_1 + 1);
      }
      else if (((uint)uVar5 >> 0xf & 1) == 0) {
        param_1 = (ulong *)((long)param_1 + 2);
        local_38 = (undefined1 *)(uVar5 & 0x7f | (uVar5 >> 8 & 0x7f) << 7);
      }
      else {
        param_1 = (ulong *)FUN_00705258(param_1,&local_38);
      }
      if (param_1 == (ulong *)0x0) {
        return (ulong *)0x0;
      }
      iVar2 = (int)local_38;
      uVar5 = (ulong)local_38 & 0xffffffff;
      if (*param_3 == 0x600) {
        if (((int)*(undefined8 *)(param_3 + 4) <= (int)local_38) &&
           ((int)local_38 <= (int)((ulong)*(undefined8 *)(param_3 + 4) >> 0x20))) goto LAB_0070a6a4;
LAB_0070a638:
        FUN_006ff858(*(undefined8 *)(param_3 + 8),*(undefined8 *)(param_3 + 0xc),
                     *(undefined4 *)(param_3 + 0x10),uVar5);
      }
      else {
        uVar3 = FUN_0071211c(uVar5);
        if ((uVar3 & 1) == 0) goto LAB_0070a638;
LAB_0070a6a4:
        puVar6 = *(ulong **)(param_3 + 0x14);
        uVar5 = *puVar6;
        if (((uint)uVar5 >> 2 & 1) == 0) {
          uVar1 = (uint)uVar5 & 3;
          if (uVar1 != 3) {
            *puVar6 = uVar5 & 0xfffffffffffffff8 | (ulong)(uVar1 + 1);
            *(bool *)((long)puVar6 + (uVar5 & 3) + 8) = iVar2 != 0;
            goto LAB_0070a648;
          }
          iVar4 = 3;
LAB_0070a728:
          iVar7 = iVar4 + 1;
          FUN_006f9538(puVar6,(uVar5 & 4) == 0,iVar4,iVar7);
          uVar5 = *puVar6;
          iVar4 = (int)puVar6[1];
        }
        else {
          iVar4 = (int)puVar6[1];
          if (iVar4 == *(int *)((long)puVar6 + 0xc)) goto LAB_0070a728;
          iVar7 = iVar4 + 1;
        }
        *(int *)(puVar6 + 1) = iVar7;
        *(bool *)((uVar5 & 0xfffffffffffffff8) + (long)iVar4) = iVar2 != 0;
      }
LAB_0070a648:
    } while (param_1 < param_2);
  }
  return param_1;
}


// ===== 0070a780  FUN_0070a780 =====

void FUN_0070a780(long param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  undefined1 auVar13 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined2 local_68;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  cVar1 = *param_2;
  if (cVar1 < '\0') {
    auVar13 = FUN_006f6214(param_2,cVar1);
    lVar7 = auVar13._0_8_;
    if (lVar7 == 0) goto LAB_0070a860;
  }
  else {
    auVar13[8] = cVar1;
    auVar13._0_8_ = param_2 + 1;
    auVar13._9_7_ = 0;
    if (param_2 + 1 == (char *)0x0) {
      lVar7 = 0;
      goto LAB_0070a860;
    }
  }
  uVar9 = *(undefined8 *)(param_1 + 8);
  while( true ) {
    lVar6 = auVar13._0_8_;
    iVar2 = (int)uVar9 - auVar13._0_4_;
    iVar11 = auVar13._8_4_;
    if (iVar11 <= iVar2) break;
    lVar7 = FUN_0070a900(lVar6,uVar9,param_3,param_4);
    if (lVar7 == 0) goto LAB_0070a860;
    puVar10 = *(undefined8 **)(param_1 + 8);
    uVar3 = iVar11 - iVar2;
    iVar12 = (int)lVar7 - (int)puVar10;
    if ((int)uVar3 < 0x11) {
      local_68 = 0;
      local_70 = 0;
      uStack_78 = puVar10[1];
      local_80 = *puVar10;
      if ((0x1a < uVar3) || (0x1a < (ulong)(long)iVar12)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(0x5512,0x70a900);
        (*pcVar5)();
      }
      lVar6 = (long)&local_80 + (ulong)uVar3;
      lVar8 = FUN_0070a900((long)&local_80 + (long)iVar12,lVar6,param_3,param_4);
      lVar7 = 0;
      if ((lVar8 != 0) && (lVar8 == lVar6)) {
        lVar7 = *(long *)(param_1 + 8) + (ulong)uVar3;
      }
      goto LAB_0070a860;
    }
    if (*(int *)(param_1 + 0x1c) < 0x11) {
      lVar7 = 0;
      goto LAB_0070a860;
    }
    lVar7 = FUN_006f54c0(param_1);
    if (lVar7 == 0) goto LAB_0070a860;
    uVar9 = *(undefined8 *)(param_1 + 8);
    auVar13._8_4_ = (iVar11 - iVar2) - iVar12;
    auVar13._0_8_ = lVar7 + iVar12;
    auVar13._12_4_ = 0;
  }
  lVar7 = FUN_0070a900(lVar6,lVar6 + iVar11,param_3,param_4);
  if (lVar6 + iVar11 != lVar7) {
    lVar7 = 0;
  }
LAB_0070a860:
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar7);
  }
  return;
}


// ===== 0070a900  FUN_0070a900 =====

ulong * FUN_0070a900(ulong *param_1,ulong *param_2,ulong *param_3,ulong param_4)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *local_58;
  
  if (param_1 < param_2) {
    do {
      while( true ) {
        local_58 = &DAT_aaaaaaaaaaaaaaaa;
        uVar3 = *param_1;
        if (((uint)uVar3 >> 7 & 1) == 0) {
          local_58 = (undefined1 *)(uVar3 & 0x7f);
          param_1 = (ulong *)((long)param_1 + 1);
        }
        else if (((uint)uVar3 >> 0xf & 1) == 0) {
          param_1 = (ulong *)((long)param_1 + 2);
          local_58 = (undefined1 *)(uVar3 & 0x7f | (uVar3 >> 8 & 0x7f) << 7);
        }
        else {
          param_1 = (ulong *)FUN_00705258(param_1,&local_58);
        }
        if (param_1 == (ulong *)0x0) {
          return (ulong *)0x0;
        }
        puVar5 = local_58;
        if ((param_4 & 1) != 0) {
          puVar5 = (undefined1 *)(long)(int)(-((uint)local_58 & 1) ^ (uint)local_58 >> 1);
        }
        uVar3 = *param_3;
        if (((uint)uVar3 >> 2 & 1) != 0) break;
        uVar1 = (uint)uVar3 & 3;
        if (uVar1 == 3) {
          iVar2 = 3;
LAB_0070a9fc:
          iVar4 = iVar2 + 1;
          FUN_006f9538(param_3,(uVar3 & 4) == 0,iVar2,iVar4);
          uVar3 = *param_3;
          iVar2 = (int)param_3[1];
          goto LAB_0070a9c0;
        }
        *param_3 = uVar3 & 0xfffffffffffffff8 | (ulong)(uVar1 + 1);
        *(bool *)((long)(param_3 + 1) + (uVar3 & 3)) = puVar5 != (undefined1 *)0x0;
        if (param_2 <= param_1) {
          return param_1;
        }
      }
      iVar2 = (int)param_3[1];
      if (iVar2 == *(int *)((long)param_3 + 0xc)) goto LAB_0070a9fc;
      iVar4 = iVar2 + 1;
LAB_0070a9c0:
      *(int *)(param_3 + 1) = iVar4;
      *(bool *)((uVar3 & 0xfffffffffffffff8) + (long)iVar2) = puVar5 != (undefined1 *)0x0;
    } while (param_1 < param_2);
  }
  return param_1;
}


// ===== 0070aa58  FUN_0070aa58 =====

ulong * FUN_0070aa58(long param_1,ulong *param_2,undefined8 *param_3,ulong param_4,ushort *param_5,
                    undefined8 param_6)

{
  uint uVar1;
  ushort uVar2;
  byte bVar3;
  byte bVar4;
  ulong *puVar5;
  ulong uVar6;
  uint uVar8;
  ulong *puVar9;
  ulong uVar10;
  uint *puVar11;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar12;
  void *__src;
  int iVar13;
  ulong __n;
  void *pvVar14;
  undefined1 auVar15 [12];
  undefined1 auVar16 [12];
  ushort *puVar7;
  
  uVar12 = (uint)param_4;
  uVar8 = uVar12 & 7;
  if (uVar8 == 2) {
    puVar5 = (ulong *)switchD_006fe28c::caseD_c(param_1,param_2,param_3,param_4,param_5);
    return puVar5;
  }
  puVar11 = (uint *)((long)param_5 + (param_4 >> 0x20));
  uVar1 = puVar11[1];
  if (uVar1 != 0xffffffff) {
    uVar10 = (ulong)(uVar1 >> 3) & 0x1ffffffc;
    *(uint *)(param_1 + uVar10) = *(uint *)(param_1 + uVar10) | 1 << (ulong)(uVar1 & 0x1f);
  }
  uVar10 = (ulong)*(uint *)((long)param_5 + (ulong)*(uint *)(param_5 + 0xc) + 8);
  __src = *(void **)(**(long **)(param_5 + 0x10) + uVar10);
  pvVar14 = *(void **)(param_1 + uVar10);
  if (pvVar14 == __src) {
    uVar6 = *(ulong *)(param_1 + 8);
    __n = (ulong)*(uint *)((long)param_5 + (ulong)*(uint *)(param_5 + 0xc) + 0x10);
    if ((uVar6 & 1) == 0) {
      if (uVar6 != 0) goto LAB_0070ab38;
LAB_0070ab54:
      pvVar14 = operator_new(__n);
    }
    else {
      uVar6 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
      if (uVar6 == 0) goto LAB_0070ab54;
LAB_0070ab38:
      pvVar14 = (void *)FUN_006fdbf0(uVar6,__n + 7 & 0x1fffffff8);
    }
    *(void **)(param_1 + uVar10) = pvVar14;
    memcpy(pvVar14,__src,__n);
    pvVar14 = *(void **)(param_1 + uVar10);
    puVar11 = (uint *)((long)param_5 + (param_4 >> 0x20));
  }
  if ((*(ushort *)((long)puVar11 + 10) & 0x1c0) == 0xc0) {
    if (uVar8 != 1) {
LAB_0070add0:
      UNRECOVERED_JUMPTABLE = *(code **)(param_5 + 0x18);
      goto LAB_0070ae28;
    }
    uVar8 = *puVar11;
    puVar5 = *(ulong **)((long)pvVar14 + (ulong)uVar8);
    if (puVar5 == (ulong *)PTR_DAT_00d52598) {
      uVar10 = *(ulong *)(param_1 + 8);
      if ((uVar10 & 1) == 0) {
        if (uVar10 != 0) goto LAB_0070abb8;
LAB_0070aec4:
        puVar5 = (ulong *)operator_new(0x10);
        *puVar5 = 0;
      }
      else {
        uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
        if (uVar10 == 0) goto LAB_0070aec4;
LAB_0070abb8:
        puVar5 = (ulong *)FUN_006fdbf0(uVar10,0x10);
        *puVar5 = uVar10;
      }
      *(ulong **)((long)pvVar14 + (ulong)uVar8) = puVar5;
    }
    do {
      uVar10 = *puVar5;
      uVar6 = *param_2;
      if (((uint)uVar10 >> 2 & 1) == 0) {
        uVar8 = (uint)uVar10 & 3;
        if (uVar8 == 1) {
LAB_0070ac88:
          iVar13 = uVar8 + 1;
          FUN_006f8940(puVar5,(uVar10 & 4) == 0,uVar8,iVar13);
          uVar10 = *puVar5;
          uVar8 = (uint)puVar5[1];
          goto LAB_0070ac14;
        }
        *puVar5 = uVar10 & 0xfffffffffffffff8 | (ulong)(uVar8 + 1);
        puVar9 = puVar5 + 1;
      }
      else {
        uVar8 = (uint)puVar5[1];
        if (uVar8 == *(uint *)((long)puVar5 + 0xc)) goto LAB_0070ac88;
        iVar13 = uVar8 + 1;
LAB_0070ac14:
        puVar9 = (ulong *)(uVar10 & 0xfffffffffffffff8);
        *(int *)(puVar5 + 1) = iVar13;
      }
      puVar9[(int)uVar8] = uVar6;
      puVar9 = param_2 + 1;
      if ((ulong *)*param_3 <= puVar9) goto LAB_0070ae4c;
      bVar4 = (byte)param_2[1];
      puVar7 = (ushort *)((long)param_2 + 9);
      auVar15[8] = bVar4;
      auVar15._0_8_ = puVar7;
      auVar15._9_3_ = 0;
      if ((char)bVar4 < '\0') {
        bVar3 = *(byte *)puVar7;
        if ((char)bVar3 < '\0') {
          auVar15 = FUN_006f61a4(puVar9);
          puVar7 = auVar15._0_8_;
        }
        else {
          puVar7 = (ushort *)((long)param_2 + 10);
          auVar15._8_4_ = (uint)bVar4 + (uint)bVar3 * 0x80 + -0x80;
          auVar15._0_8_ = puVar7;
        }
      }
      if (puVar7 == (ushort *)0x0) {
LAB_0070ae88:
        puVar5 = (ulong *)switchD_006fe28c::caseD_8(param_1);
        return puVar5;
      }
      param_2 = auVar15._0_8_;
    } while (auVar15._8_4_ == uVar12);
  }
  else {
    if (uVar8 != 5) goto LAB_0070add0;
    uVar8 = *puVar11;
    puVar5 = *(ulong **)((long)pvVar14 + (ulong)uVar8);
    if (puVar5 == (ulong *)PTR_DAT_00d52598) {
      uVar10 = *(ulong *)(param_1 + 8);
      if ((uVar10 & 1) == 0) {
        if (uVar10 != 0) goto LAB_0070acdc;
LAB_0070aee4:
        puVar5 = (ulong *)operator_new(0x10);
        *puVar5 = 0;
      }
      else {
        uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
        if (uVar10 == 0) goto LAB_0070aee4;
LAB_0070acdc:
        puVar5 = (ulong *)FUN_006fdbf0(uVar10,0x10);
        *puVar5 = uVar10;
      }
      *(ulong **)((long)pvVar14 + (ulong)uVar8) = puVar5;
    }
    do {
      uVar6 = *puVar5;
      uVar10 = *param_2;
      if (((uint)uVar6 >> 2 & 1) == 0) {
        uVar8 = (uint)uVar6 & 3;
        if (uVar8 == 2) {
LAB_0070adac:
          iVar13 = uVar8 + 1;
          FUN_006f7ed0(puVar5,(uVar6 & 4) == 0,uVar8,iVar13);
          uVar6 = *puVar5;
          uVar8 = (uint)puVar5[1];
          goto LAB_0070ad38;
        }
        *puVar5 = uVar6 & 0xfffffffffffffff8 | (ulong)(uVar8 + 1);
        puVar9 = puVar5 + 1;
      }
      else {
        uVar8 = (uint)puVar5[1];
        if (uVar8 == *(uint *)((long)puVar5 + 0xc)) goto LAB_0070adac;
        iVar13 = uVar8 + 1;
LAB_0070ad38:
        puVar9 = (ulong *)(uVar6 & 0xfffffffffffffff8);
        *(int *)(puVar5 + 1) = iVar13;
      }
      *(int *)((long)puVar9 + (long)(int)uVar8 * 4) = (int)uVar10;
      puVar9 = (ulong *)((long)param_2 + 4);
      if ((ulong *)*param_3 <= puVar9) goto LAB_0070ae4c;
      bVar4 = *(byte *)((long)param_2 + 4);
      puVar7 = (ushort *)((long)param_2 + 5);
      auVar16[8] = bVar4;
      auVar16._0_8_ = puVar7;
      auVar16._9_3_ = 0;
      if ((char)bVar4 < '\0') {
        bVar3 = *(byte *)puVar7;
        if ((char)bVar3 < '\0') {
          auVar16 = FUN_006f61a4(puVar9);
          puVar7 = auVar16._0_8_;
        }
        else {
          puVar7 = (ushort *)((long)param_2 + 6);
          auVar16._8_4_ = (uint)bVar4 + (uint)bVar3 * 0x80 + -0x80;
          auVar16._0_8_ = puVar7;
        }
      }
      if (puVar7 == (ushort *)0x0) goto LAB_0070ae88;
      param_2 = auVar16._0_8_;
    } while (auVar16._8_4_ == uVar12);
  }
  param_2 = puVar9;
  puVar9 = param_2;
  if ((ulong *)*param_3 <= param_2) {
LAB_0070ae4c:
    uVar2 = *param_5;
    if (uVar2 != 0) {
      *(uint *)(param_1 + (ulong)uVar2) = *(uint *)(param_1 + (ulong)(uint)uVar2) | (uint)param_6;
    }
    return puVar9;
  }
  uVar10 = (ulong)(ushort)*param_2 & (ulong)(byte)param_5[4];
  UNRECOVERED_JUMPTABLE = *(code **)(param_5 + uVar10 + 0x1c);
  param_4 = *(ulong *)(param_5 + uVar10 + 0x20) ^ (ulong)(ushort)*param_2;
LAB_0070ae28:
                    /* WARNING: Could not recover jumptable at 0x0070ae48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar5 = (ulong *)(*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4,param_5,param_6);
  return puVar5;
}


// ===== 0070aef8  FUN_0070aef8 =====

ushort * FUN_0070aef8(long param_1,ushort *param_2,undefined8 *param_3,ulong param_4,ushort *param_5
                     ,undefined8 param_6)

{
  uint *puVar1;
  ulong *puVar2;
  ushort uVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ushort *puVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  code *UNRECOVERED_JUMPTABLE;
  void *__src;
  long *plVar17;
  uint uVar18;
  ulong *puVar19;
  ulong __n;
  void *pvVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  undefined1 auVar23 [12];
  
  uVar18 = (uint)param_4;
  if ((uVar18 & 7) != 2) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_5 + 0x18);
    goto LAB_0070b338;
  }
  puVar1 = (uint *)((long)param_5 + (param_4 >> 0x20));
  uVar13 = puVar1[1];
  uVar3 = *(ushort *)((long)puVar1 + 10);
  if (uVar13 != 0xffffffff) {
    uVar15 = (ulong)(uVar13 >> 3) & 0x1ffffffc;
    *(uint *)(param_1 + uVar15) = *(uint *)(param_1 + uVar15) | 1 << (ulong)(uVar13 & 0x1f);
  }
  uVar15 = (ulong)*(uint *)((long)param_5 + (ulong)*(uint *)(param_5 + 0xc) + 8);
  __src = *(void **)(**(long **)(param_5 + 0x10) + uVar15);
  pvVar20 = *(void **)(param_1 + uVar15);
  if (pvVar20 == __src) {
    __n = (ulong)*(uint *)((long)param_5 + (ulong)*(uint *)(param_5 + 0xc) + 0x10);
    uVar9 = *(ulong *)(param_1 + 8);
    if ((uVar9 & 1) == 0) {
      if (uVar9 != 0) goto LAB_0070b048;
LAB_0070b2d0:
      pvVar20 = operator_new(__n);
    }
    else {
      uVar9 = *(ulong *)(uVar9 & 0xfffffffffffffffe);
      if (uVar9 == 0) goto LAB_0070b2d0;
LAB_0070b048:
      pvVar20 = (void *)FUN_006fdbf0(uVar9,__n + 7 & 0x1fffffff8);
    }
    *(void **)(param_1 + uVar15) = pvVar20;
    memcpy(pvVar20,__src,__n);
    pvVar20 = *(void **)(param_1 + uVar15);
  }
  puVar12 = param_2;
  if ((uVar3 & 0x1c0) == 0x100) {
    uVar13 = *puVar1;
    puVar19 = *(ulong **)((long)pvVar20 + (ulong)uVar13);
    if (puVar19 == (ulong *)PTR_DAT_00d52598) {
      uVar15 = *(ulong *)(param_1 + 8);
      if ((uVar15 & 1) == 0) {
        if (uVar15 != 0) goto LAB_0070afc8;
LAB_0070b3ac:
        puVar19 = (ulong *)operator_new(0x18);
        puVar19[1] = 0;
        puVar19[2] = 0;
        *puVar19 = 0;
      }
      else {
        uVar15 = *(ulong *)(uVar15 & 0xfffffffffffffffe);
        if (uVar15 == 0) goto LAB_0070b3ac;
LAB_0070afc8:
        puVar19 = (ulong *)FUN_006fdbf0(uVar15,0x18);
        *puVar19 = 0;
        puVar19[1] = 0;
        puVar19[2] = uVar15;
      }
      *(ulong **)((long)pvVar20 + (ulong)uVar13) = puVar19;
    }
    plVar17 = (long *)puVar19[2];
    if ((plVar17 != (long *)0x0) &&
       (lVar8 = __emutls_get_address(&DAT_00d5a2a0), *(long *)(lVar8 + 8) == *plVar17)) {
      uVar15 = *puVar19;
      if ((uVar15 & 1) == 0) {
        uVar13 = (uint)(uVar15 != 0);
      }
      else {
        uVar13 = *(uint *)(uVar15 + 3);
      }
      if (uVar13 == (uint)puVar19[1]) {
        lVar8 = *(long *)(lVar8 + 0x10);
        do {
          cVar4 = (char)*param_2;
          if (cVar4 < '\0') {
            auVar21 = FUN_006f6214(param_2,cVar4);
            lVar14 = auVar21._0_8_;
          }
          else {
            lVar14 = (long)param_2 + 1;
            auVar21[8] = cVar4;
            auVar21._0_8_ = lVar14;
            auVar21._9_7_ = 0;
          }
          if (lVar14 == 0) goto LAB_0070b294;
          if (*(long *)(lVar8 + 0x48) == 0) {
            puVar11 = (undefined8 *)FUN_006fd130(lVar8);
          }
          else {
            lVar14 = *(long *)(lVar8 + 0x48) + -0x18;
            *(long *)(lVar8 + 0x48) = lVar14;
            puVar11 = (undefined8 *)(*(long *)(lVar8 + 0x38) + lVar14 + 0x10);
          }
          *puVar11 = 0;
          puVar11[1] = 0;
          puVar11[2] = 0;
          iVar7 = (int)puVar19[1];
          if ((*puVar19 & 1) == 0) {
            if (iVar7 == 1) {
LAB_0070b1d8:
              puVar10 = (undefined8 *)FUN_00711858(puVar19,1,plVar17);
              *puVar10 = puVar11;
              goto LAB_0070b10c;
            }
            *puVar19 = (ulong)puVar11;
          }
          else {
            piVar16 = (int *)(*puVar19 - 1);
            if (iVar7 == *piVar16) goto LAB_0070b1d8;
            *(undefined8 **)(piVar16 + (long)iVar7 * 2 + 2) = puVar11;
LAB_0070b10c:
            *(int *)(*puVar19 + 3) = *(int *)(*puVar19 + 3) + 1;
          }
          *(int *)(puVar19 + 1) = (int)puVar19[1] + 1;
          puVar12 = (ushort *)FUN_007011c4(param_3,auVar21._0_8_,auVar21._8_8_ & 0xffffffff,puVar11)
          ;
          if (puVar12 == (ushort *)0x0) goto LAB_0070b294;
          iVar7 = (int)puVar19[1];
          if (iVar7 < 1) {
            FUN_006fc6ec(iVar7 + -1);
          }
          puVar2 = puVar19;
          if ((*puVar19 & 1) != 0) {
            puVar2 = (ulong *)(*puVar19 + (long)(iVar7 + -1) * 8 + 7);
          }
          puVar10 = (undefined8 *)*puVar2;
          lVar14 = (long)*(char *)((long)puVar10 + 0x17);
          puVar11 = puVar10;
          if (lVar14 < 0) {
            puVar11 = (undefined8 *)*puVar10;
            lVar14 = puVar10[1];
          }
          uVar15 = FUN_00700564(puVar11,lVar14,param_5,puVar1,uVar3 & 0x600);
          if ((uVar15 & 1) == 0) goto LAB_0070b294;
          if ((ushort *)*param_3 <= puVar12) goto LAB_0070b35c;
          bVar6 = (byte)*puVar12;
          auVar22[8] = bVar6;
          auVar22._0_8_ = (byte *)((long)puVar12 + 1);
          auVar22._9_3_ = 0;
          if ((char)bVar6 < '\0') {
            bVar5 = *(byte *)((long)puVar12 + 1);
            if ((char)bVar5 < '\0') {
              auVar22 = FUN_006f61a4(puVar12);
            }
            else {
              auVar22._8_4_ = (uint)bVar6 + (uint)bVar5 * 0x80 + -0x80;
              auVar22._0_8_ = puVar12 + 1;
            }
          }
          param_2 = auVar22._0_8_;
        } while (auVar22._8_4_ == uVar18);
        goto LAB_0070b2fc;
      }
    }
    do {
      puVar11 = (undefined8 *)FUN_00706c40(puVar19,puVar19[2]);
      puVar12 = (ushort *)FUN_006f62b8(puVar11,param_2,param_3);
      if (puVar12 == (ushort *)0x0) {
LAB_0070b294:
        puVar12 = (ushort *)switchD_006fe28c::caseD_8(param_1);
        return puVar12;
      }
      lVar8 = (long)*(char *)((long)puVar11 + 0x17);
      puVar10 = puVar11;
      if (lVar8 < 0) {
        puVar10 = (undefined8 *)*puVar11;
        lVar8 = puVar11[1];
      }
      uVar15 = FUN_00700564(puVar10,lVar8,param_5,puVar1,uVar3 & 0x600);
      if ((uVar15 & 1) == 0) goto LAB_0070b294;
      if ((ushort *)*param_3 <= puVar12) goto LAB_0070b35c;
      bVar6 = (byte)*puVar12;
      auVar23[8] = bVar6;
      auVar23._0_8_ = (byte *)((long)puVar12 + 1);
      auVar23._9_3_ = 0;
      if ((char)bVar6 < '\0') {
        bVar5 = *(byte *)((long)puVar12 + 1);
        if ((char)bVar5 < '\0') {
          auVar23 = FUN_006f61a4(puVar12);
        }
        else {
          auVar23._8_4_ = (uint)bVar6 + (uint)bVar5 * 0x80 + -0x80;
          auVar23._0_8_ = puVar12 + 1;
        }
      }
      param_2 = auVar23._0_8_;
    } while (auVar23._8_4_ == uVar18);
  }
LAB_0070b2fc:
  param_2 = puVar12;
  puVar12 = param_2;
  if ((ushort *)*param_3 <= param_2) {
LAB_0070b35c:
    uVar3 = *param_5;
    if (uVar3 != 0) {
      *(uint *)(param_1 + (ulong)uVar3) = *(uint *)(param_1 + (ulong)(uint)uVar3) | (uint)param_6;
    }
    return puVar12;
  }
  uVar15 = (ulong)*param_2 & (ulong)(byte)param_5[4];
  UNRECOVERED_JUMPTABLE = *(code **)(param_5 + uVar15 + 0x1c);
  param_4 = *(ulong *)(param_5 + uVar15 + 0x20) ^ (ulong)*param_2;
LAB_0070b338:
                    /* WARNING: Could not recover jumptable at 0x0070b358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar12 = (ushort *)(*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4,param_5,param_6);
  return puVar12;
}


// ===== 0070b3c4  FUN_0070b3c4 =====

ushort * FUN_0070b3c4(long param_1,ushort *param_2,ulong *param_3,ulong param_4,ushort *param_5,
                     undefined8 param_6)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ushort *puVar7;
  long lVar8;
  uint *puVar9;
  code *UNRECOVERED_JUMPTABLE;
  void *pvVar10;
  void *__src;
  undefined8 *puVar11;
  ulong __n;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  undefined1 auVar15 [12];
  undefined1 auVar16 [12];
  char *pcVar6;
  
  if (((uint)param_4 & 7) != 2) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_5 + 0x18);
    goto LAB_0070b470;
  }
  puVar9 = (uint *)((long)param_5 + (param_4 >> 0x20));
  uVar3 = *(ushort *)((long)puVar9 + 10);
  uVar14 = (ulong)*(uint *)((long)param_5 + (ulong)*(uint *)(param_5 + 0xc) + 8);
  __src = *(void **)(**(long **)(param_5 + 0x10) + uVar14);
  pvVar10 = *(void **)(param_1 + uVar14);
  if (pvVar10 == __src) {
    uVar4 = *(ulong *)(param_1 + 8);
    __n = (ulong)*(uint *)((long)param_5 + (ulong)*(uint *)(param_5 + 0xc) + 0x10);
    if ((uVar4 & 1) == 0) {
      if (uVar4 != 0) goto LAB_0070b448;
LAB_0070b4a0:
      pvVar10 = operator_new(__n);
    }
    else {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
      if (uVar4 == 0) goto LAB_0070b4a0;
LAB_0070b448:
      pvVar10 = (void *)FUN_006fdbf0(uVar4,__n + 7 & 0x1fffffff8);
    }
    *(void **)(param_1 + uVar14) = pvVar10;
    memcpy(pvVar10,__src,__n);
    pvVar10 = *(void **)(param_1 + uVar14);
    puVar9 = (uint *)((long)param_5 + (param_4 >> 0x20));
  }
  uVar1 = *puVar9;
  puVar11 = *(undefined8 **)((long)pvVar10 + (ulong)uVar1);
  if (puVar11 == (undefined8 *)PTR_DAT_00d52598) {
    uVar14 = *(ulong *)(param_1 + 8);
    if ((uVar14 & 1) == 0) {
      if (uVar14 != 0) goto LAB_0070b4e4;
LAB_0070b770:
      puVar11 = (undefined8 *)operator_new(0x18);
      puVar11[1] = 0;
      puVar11[2] = 0;
      *puVar11 = 0;
    }
    else {
      uVar14 = *(ulong *)(uVar14 & 0xfffffffffffffffe);
      if (uVar14 == 0) goto LAB_0070b770;
LAB_0070b4e4:
      puVar11 = (undefined8 *)FUN_006fdbf0(uVar14,0x18);
      *puVar11 = 0;
      puVar11[1] = 0;
      puVar11[2] = uVar14;
    }
    puVar9 = (uint *)((long)param_5 + (param_4 >> 0x20));
    *(undefined8 **)((long)pvVar10 + (ulong)uVar1) = puVar11;
  }
  uVar3 = uVar3 & 0x600;
  plVar12 = *(long **)((long)param_5 +
                      (ulong)(ushort)puVar9[2] * 8 + (ulong)*(uint *)(param_5 + 0xc));
  if (uVar3 != 0x400) {
    plVar13 = plVar12;
    if (uVar3 != 0x200) {
      plVar13 = (long *)*plVar12;
    }
    lVar8 = (**(code **)(*plVar13 + 0x20))(plVar13);
    plVar12 = *(long **)(lVar8 + 8);
    if (plVar12 == (long *)0x0) {
      plVar12 = (long *)(**(code **)(*(long *)(lVar8 + 0x58) + 0x10))(plVar13);
    }
  }
  uVar1 = puVar9[1];
  puVar7 = param_2;
  if (uVar1 != 0xffffffff) {
    uVar14 = (ulong)(uVar1 >> 3) & 0x1ffffffc;
    *(uint *)(param_1 + uVar14) = *(uint *)(param_1 + uVar14) | 1 << (ulong)(uVar1 & 0x1f);
  }
  do {
    uVar14 = *(ulong *)(param_1 + 8);
    if ((uVar14 & 1) != 0) {
      uVar14 = *(ulong *)(uVar14 & 0xfffffffffffffffe);
    }
    uVar5 = FUN_006fe3b0(plVar12,puVar11,uVar14);
    if ((char)*puVar7 < '\0') {
      auVar15 = FUN_006f6214(puVar7);
      pcVar6 = auVar15._0_8_;
    }
    else {
      pcVar6 = (char *)((long)puVar7 + 1);
      auVar15[8] = (char)*puVar7;
      auVar15._0_8_ = pcVar6;
      auVar15._9_3_ = 0;
    }
    if (pcVar6 == (char *)0x0) goto LAB_0070b668;
    if ((int)param_3[0xb] < 1) goto LAB_0070b668;
    *(int *)(param_3 + 0xb) = (int)param_3[0xb] + -1;
    uVar1 = auVar15._8_4_ + (auVar15._0_4_ - (int)param_3[1]);
    iVar2 = *(int *)((long)param_3 + 0x1c);
    *(uint *)((long)param_3 + 0x1c) = uVar1;
    *param_3 = param_3[1] + (long)(int)(uVar1 & (int)uVar1 >> 0x1f);
    param_2 = (ushort *)FUN_006fe0e8(uVar5,auVar15._0_8_,param_3,plVar12);
    uVar1 = *(int *)((long)param_3 + 0x1c) + (iVar2 - uVar1);
    *(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1;
    *(uint *)((long)param_3 + 0x1c) = uVar1;
    if ((int)param_3[10] != 0) goto LAB_0070b668;
    puVar7 = (ushort *)(param_3[1] + (long)(int)(uVar1 & (int)uVar1 >> 0x1f));
    *param_3 = (ulong)puVar7;
    if (param_2 == (ushort *)0x0) goto LAB_0070b668;
    if (puVar7 <= param_2) goto LAB_0070b6d8;
    puVar7 = (ushort *)((long)param_2 + 1);
    uVar1 = (uint)(byte)*param_2;
    if ((char)(byte)*param_2 < '\0') {
      uVar1 = (uVar1 + (uint)*(byte *)puVar7 * 0x80) - 0x80;
      if (-1 < (char)*(byte *)puVar7) {
        puVar7 = param_2 + 1;
        goto LAB_0070b638;
      }
      auVar16 = FUN_006f61a4(param_2);
      puVar7 = auVar16._0_8_;
    }
    else {
LAB_0070b638:
      auVar16._8_4_ = uVar1;
      auVar16._0_8_ = puVar7;
    }
    if (puVar7 == (ushort *)0x0) {
LAB_0070b668:
      puVar7 = (ushort *)switchD_006fe28c::caseD_8(param_1);
      return puVar7;
    }
    puVar7 = auVar16._0_8_;
  } while (auVar16._8_4_ == (uint)param_4);
  if ((ushort *)*param_3 <= param_2) {
LAB_0070b6d8:
    uVar3 = *param_5;
    if (uVar3 != 0) {
      *(uint *)(param_1 + (ulong)uVar3) = *(uint *)(param_1 + (ulong)(uint)uVar3) | (uint)param_6;
    }
    return param_2;
  }
  uVar14 = (ulong)*param_2 & (ulong)(byte)param_5[4];
  UNRECOVERED_JUMPTABLE = *(code **)(param_5 + uVar14 + 0x1c);
  param_4 = *(ulong *)(param_5 + uVar14 + 0x20) ^ (ulong)*param_2;
LAB_0070b470:
                    /* WARNING: Could not recover jumptable at 0x0070b490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar7 = (ushort *)(*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4,param_5,param_6);
  return puVar7;
}


// ===== 0070b788  FUN_0070b788 =====

ushort * FUN_0070b788(long param_1,ushort *param_2,undefined8 *param_3,ulong param_4,ushort *param_5
                     ,undefined8 param_6)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  uint *puVar8;
  code *UNRECOVERED_JUMPTABLE;
  void *pvVar9;
  uint uVar10;
  ushort *puVar11;
  void *__src;
  undefined8 *puVar12;
  ulong __n;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  undefined1 auVar16 [12];
  
  uVar10 = (uint)param_4;
  if ((uVar10 & 7) != 3) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_5 + 0x18);
    goto LAB_0070b834;
  }
  puVar8 = (uint *)((long)param_5 + (param_4 >> 0x20));
  uVar3 = *(ushort *)((long)puVar8 + 10);
  uVar15 = (ulong)*(uint *)((long)param_5 + (ulong)*(uint *)(param_5 + 0xc) + 8);
  __src = *(void **)(**(long **)(param_5 + 0x10) + uVar15);
  pvVar9 = *(void **)(param_1 + uVar15);
  if (pvVar9 == __src) {
    uVar5 = *(ulong *)(param_1 + 8);
    __n = (ulong)*(uint *)((long)param_5 + (ulong)*(uint *)(param_5 + 0xc) + 0x10);
    if ((uVar5 & 1) == 0) {
      if (uVar5 != 0) goto LAB_0070b80c;
LAB_0070b864:
      pvVar9 = operator_new(__n);
    }
    else {
      uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
      if (uVar5 == 0) goto LAB_0070b864;
LAB_0070b80c:
      pvVar9 = (void *)FUN_006fdbf0(uVar5,__n + 7 & 0x1fffffff8);
    }
    *(void **)(param_1 + uVar15) = pvVar9;
    memcpy(pvVar9,__src,__n);
    pvVar9 = *(void **)(param_1 + uVar15);
    puVar8 = (uint *)((long)param_5 + (param_4 >> 0x20));
  }
  uVar1 = *puVar8;
  puVar12 = *(undefined8 **)((long)pvVar9 + (ulong)uVar1);
  if (puVar12 == (undefined8 *)PTR_DAT_00d52598) {
    uVar15 = *(ulong *)(param_1 + 8);
    if ((uVar15 & 1) == 0) {
      if (uVar15 != 0) goto LAB_0070b8a8;
LAB_0070bae8:
      puVar12 = (undefined8 *)operator_new(0x18);
      puVar12[1] = 0;
      puVar12[2] = 0;
      *puVar12 = 0;
    }
    else {
      uVar15 = *(ulong *)(uVar15 & 0xfffffffffffffffe);
      if (uVar15 == 0) goto LAB_0070bae8;
LAB_0070b8a8:
      puVar12 = (undefined8 *)FUN_006fdbf0(uVar15,0x18);
      *puVar12 = 0;
      puVar12[1] = 0;
      puVar12[2] = uVar15;
    }
    puVar8 = (uint *)((long)param_5 + (param_4 >> 0x20));
    *(undefined8 **)((long)pvVar9 + (ulong)uVar1) = puVar12;
  }
  uVar3 = uVar3 & 0x600;
  plVar13 = *(long **)((long)param_5 +
                      (ulong)(ushort)puVar8[2] * 8 + (ulong)*(uint *)(param_5 + 0xc));
  if (uVar3 != 0x400) {
    plVar14 = plVar13;
    if (uVar3 != 0x200) {
      plVar14 = (long *)*plVar13;
    }
    lVar7 = (**(code **)(*plVar14 + 0x20))(plVar14);
    plVar13 = *(long **)(lVar7 + 8);
    if (plVar13 == (long *)0x0) {
      plVar13 = (long *)(**(code **)(*(long *)(lVar7 + 0x58) + 0x10))(plVar14);
    }
  }
  uVar1 = puVar8[1];
  puVar11 = param_2;
  uVar4 = DAT_001f5550;
  if (uVar1 != 0xffffffff) {
    uVar15 = (ulong)(uVar1 >> 3) & 0x1ffffffc;
    *(uint *)(param_1 + uVar15) = *(uint *)(param_1 + uVar15) | 1 << (ulong)(uVar1 & 0x1f);
    uVar4 = DAT_001f5550;
  }
  do {
    uVar15 = *(ulong *)(param_1 + 8);
    if ((uVar15 & 1) != 0) {
      uVar15 = *(ulong *)(uVar15 & 0xfffffffffffffffe);
    }
    uVar6 = FUN_006fe3b0(plVar13,puVar12,uVar15);
    iVar2 = *(int *)(param_3 + 0xb);
    *(int *)(param_3 + 0xb) = iVar2 + -1;
    if (iVar2 + -1 < 0) goto LAB_0070b9e0;
    *(int *)((long)param_3 + 0x5c) = *(int *)((long)param_3 + 0x5c) + 1;
    param_2 = (ushort *)FUN_006fe0e8(uVar6,puVar11,param_3,plVar13);
    uVar1 = *(uint *)(param_3 + 10);
    *(undefined4 *)(param_3 + 10) = 0;
    param_3[0xb] = CONCAT44((int)((ulong)param_3[0xb] >> 0x20) + (int)((ulong)uVar4 >> 0x20),
                            (int)param_3[0xb] + (int)uVar4);
    if ((param_2 == (ushort *)0x0) || (uVar1 != uVar10)) goto LAB_0070b9e0;
    if ((ushort *)*param_3 <= param_2) goto LAB_0070ba50;
    puVar11 = (ushort *)((long)param_2 + 1);
    uVar1 = (uint)(byte)*param_2;
    if ((char)(byte)*param_2 < '\0') {
      uVar1 = (uVar1 + (uint)*(byte *)puVar11 * 0x80) - 0x80;
      if (-1 < (char)*(byte *)puVar11) {
        puVar11 = param_2 + 1;
        goto LAB_0070b9b0;
      }
      auVar16 = FUN_006f61a4(param_2);
      puVar11 = auVar16._0_8_;
    }
    else {
LAB_0070b9b0:
      auVar16._8_4_ = uVar1;
      auVar16._0_8_ = puVar11;
    }
    if (puVar11 == (ushort *)0x0) {
LAB_0070b9e0:
      puVar11 = (ushort *)switchD_006fe28c::caseD_8(param_1);
      return puVar11;
    }
    puVar11 = auVar16._0_8_;
  } while (auVar16._8_4_ == uVar10);
  if ((ushort *)*param_3 <= param_2) {
LAB_0070ba50:
    uVar3 = *param_5;
    if (uVar3 != 0) {
      *(uint *)(param_1 + (ulong)uVar3) = *(uint *)(param_1 + (ulong)(uint)uVar3) | (uint)param_6;
    }
    return param_2;
  }
  uVar15 = (ulong)*param_2 & (ulong)(byte)param_5[4];
  UNRECOVERED_JUMPTABLE = *(code **)(param_5 + uVar15 + 0x1c);
  param_4 = *(ulong *)(param_5 + uVar15 + 0x20) ^ (ulong)*param_2;
LAB_0070b834:
                    /* WARNING: Could not recover jumptable at 0x0070b854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar11 = (ushort *)(*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4,param_5,param_6);
  return puVar11;
}


// ===== 0070bb00  FUN_0070bb00 =====

ushort * FUN_0070bb00(long param_1,ulong *param_2,undefined8 *param_3,ulong param_4,ushort *param_5,
                     uint param_6)

{
  ushort *puVar1;
  ulong uVar2;
  ulong local_18;
  
  uVar2 = *param_2;
  if (((uint)uVar2 >> 7 & 1) == 0) {
    local_18 = uVar2 & 0x7f;
    puVar1 = (ushort *)((long)param_2 + 1);
  }
  else if (((uint)uVar2 >> 0xf & 1) == 0) {
    puVar1 = (ushort *)((long)param_2 + 2);
    local_18 = uVar2 & 0x7f | (uVar2 >> 8 & 0x7f) << 7;
  }
  else {
    puVar1 = (ushort *)FUN_00705258(param_2,&local_18,uVar2);
  }
  if (puVar1 != (ushort *)0x0) {
    *(bool *)(param_1 + (param_4 >> 0x30)) = local_18 != 0;
    if (puVar1 < (ushort *)*param_3) {
                    /* WARNING: Could not recover jumptable at 0x0070bb74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar1 = (ushort *)
               (**(code **)(param_5 + ((ulong)*puVar1 & (ulong)(byte)param_5[4]) + 0x1c))();
      return puVar1;
    }
    uVar2 = (ulong)*param_5;
    if (uVar2 != 0) {
      *(uint *)(param_1 + uVar2) = *(uint *)(param_1 + uVar2) | param_6;
    }
    return puVar1;
  }
  puVar1 = (ushort *)switchD_006fe28c::caseD_8();
  return puVar1;
}


// ===== 0070bbf8  FUN_0070bbf8 =====

ushort * FUN_0070bbf8(long param_1,ulong *param_2,undefined8 *param_3,ulong param_4,ushort *param_5,
                     uint param_6)

{
  ushort *puVar1;
  ulong uVar2;
  ulong local_18;
  
  uVar2 = *param_2;
  if (((uint)uVar2 >> 7 & 1) == 0) {
    local_18 = uVar2 & 0x7f;
    puVar1 = (ushort *)((long)param_2 + 1);
  }
  else if (((uint)uVar2 >> 0xf & 1) == 0) {
    puVar1 = (ushort *)((long)param_2 + 2);
    local_18 = uVar2 & 0x7f | (uVar2 >> 8 & 0x7f) << 7;
  }
  else {
    puVar1 = (ushort *)FUN_00705258(param_2,&local_18,uVar2);
  }
  if (puVar1 != (ushort *)0x0) {
    *(int *)(param_1 + (param_4 >> 0x30)) = (int)local_18;
    if (puVar1 < (ushort *)*param_3) {
                    /* WARNING: Could not recover jumptable at 0x0070bc64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar1 = (ushort *)
               (**(code **)(param_5 + ((ulong)*puVar1 & (ulong)(byte)param_5[4]) + 0x1c))();
      return puVar1;
    }
    uVar2 = (ulong)*param_5;
    if (uVar2 != 0) {
      *(uint *)(param_1 + uVar2) = *(uint *)(param_1 + uVar2) | param_6;
    }
    return puVar1;
  }
  puVar1 = (ushort *)switchD_006fe28c::caseD_8();
  return puVar1;
}


// ===== 0070bce8  FUN_0070bce8 =====

ushort * FUN_0070bce8(long param_1,ulong *param_2,undefined8 *param_3,ulong param_4,ushort *param_5,
                     uint param_6)

{
  ushort *puVar1;
  ulong uVar2;
  ulong local_18;
  
  uVar2 = *param_2;
  if (((uint)uVar2 >> 7 & 1) == 0) {
    local_18 = uVar2 & 0x7f;
    puVar1 = (ushort *)((long)param_2 + 1);
  }
  else if (((uint)uVar2 >> 0xf & 1) == 0) {
    puVar1 = (ushort *)((long)param_2 + 2);
    local_18 = uVar2 & 0x7f | (uVar2 >> 8 & 0x7f) << 7;
  }
  else {
    puVar1 = (ushort *)FUN_00705258(param_2,&local_18,uVar2);
  }
  if (puVar1 != (ushort *)0x0) {
    *(uint *)(param_1 + (param_4 >> 0x30)) = -((uint)local_18 & 1) ^ (uint)local_18 >> 1;
    if (puVar1 < (ushort *)*param_3) {
                    /* WARNING: Could not recover jumptable at 0x0070bd5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar1 = (ushort *)
               (**(code **)(param_5 + ((ulong)*puVar1 & (ulong)(byte)param_5[4]) + 0x1c))();
      return puVar1;
    }
    uVar2 = (ulong)*param_5;
    if (uVar2 != 0) {
      *(uint *)(param_1 + uVar2) = *(uint *)(param_1 + uVar2) | param_6;
    }
    return puVar1;
  }
  puVar1 = (ushort *)switchD_006fe28c::caseD_8();
  return puVar1;
}


// ===== 0070bde0  FUN_0070bde0 =====

long FUN_0070bde0(long param_1,uint *param_2,ulong param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar3 = (*(ulong *)(param_1 + 2) ^ 0xffffffffffffffff) & 0x8080808080808080;
  uVar4 = (uVar3 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar3 >> 7 & 0xff00ff00ff00ff) << 8;
  uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
  uVar5 = LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20);
  uVar4 = uVar5 >> 3;
  lVar2 = 0;
  if (uVar3 != 0) {
    lVar2 = param_1 + uVar4 + 3;
  }
  uVar1 = 0;
  if (uVar3 != 0) {
    uVar1 = ((uint)param_3 & 0x7f |
             (uint)((param_3 >> 8 & 0x7f | (param_3 >> 0x10 & 0x7f) << 7) << 7) |
            (uint)((param_3 >> 0x18 & 0x7f | (param_3 >> 0x20 & 0x7f) << 7) << 0x15)) &
            ((uint)(-0x4000L << (uVar5 - uVar4 & 0x3f)) ^ 0xffffffff);
  }
  *param_2 = uVar1;
  return lVar2;
}


// ===== 0070be48  FUN_0070be48 =====

undefined8 FUN_0070be48(char *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  cVar1 = *param_1;
  if (cVar1 < '\0') {
    auVar3 = FUN_006f6214(param_1,cVar1);
  }
  else {
    auVar3[8] = cVar1;
    auVar3._0_8_ = param_1 + 1;
    auVar3._9_7_ = 0;
  }
  if (auVar3._0_8_ != 0) {
    uVar2 = FUN_007141a0(param_3,0);
    uVar2 = FUN_007011c4(param_2,auVar3._0_8_,auVar3._8_8_ & 0xffffffff,uVar2);
    return uVar2;
  }
  return 0;
}


// ===== 0070bed4  FUN_0070bed4 =====

void FUN_0070bed4(byte *param_1)

{
  if ((*param_1 & 1) == 0) {
    return;
  }
  FUN_006f1244();
  return;
}


// ===== 0070bee8  FUN_0070bee8 =====

ulong * FUN_0070bee8(ulong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  code *pcVar3;
  ulong *puVar4;
  ulong uVar5;
  char *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  ulong uVar11;
  byte bVar12;
  undefined8 uVar13;
  ulong uVar14;
  
  if (DAT_00d7ef28 == (ulong *)0x0) {
    return (ulong *)0x0;
  }
  uVar5 = *DAT_00d7ef28;
  if (uVar5 < 2) {
    puVar4 = DAT_00d7ef28;
    if (0x1ffff < DAT_00d7ef28[1]) {
      puVar4 = (ulong *)DAT_00d7ef28[3];
      pcVar6 = (char *)0x0;
      if (*puVar4 == param_1) {
        if ((uint)puVar4[1] == param_2) {
          pcVar6 = "";
        }
        goto LAB_0070c024;
      }
    }
  }
  else {
    lVar7 = 0;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = param_1 ^ (ulong)PTR_LOOP_00d525b0;
    uVar8 = SUB168(auVar1 * ZEXT816(0x79d5f9e0de1e8cf5),8) ^
            (param_1 ^ (ulong)PTR_LOOP_00d525b0) * 0x79d5f9e0de1e8cf5 ^ (ulong)param_2;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar8;
    uVar9 = DAT_00d7ef28[2];
    Hint_Prefetch(uVar9,0,2,0);
    uVar8 = (long)(short)DAT_00d7ef28[1] ^
            SUB168(auVar2 * ZEXT816(0x79d5f9e0de1e8cf5),8) ^ uVar8 * 0x79d5f9e0de1e8cf5;
    bVar10 = (byte)(uVar8 >> 0x39);
    while( true ) {
      uVar8 = uVar8 & uVar5;
      Hint_Prefetch(DAT_00d7ef28[3] + uVar8 * 0x30,0,0,0);
      for (uVar14 = NEON_cmeq(*(undefined8 *)(uVar9 + uVar8),
                              CONCAT17(bVar10,CONCAT16(bVar10,CONCAT15(bVar10,CONCAT14(bVar10,
                                                  CONCAT13(bVar10,CONCAT12(bVar10,CONCAT11(bVar10,
                                                  bVar10))))))),1); uVar14 != 0;
          uVar14 = (uVar14 & 0x8080808080808080) - 1 & uVar14 & 0x8080808080808080) {
        uVar11 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        uVar11 = uVar8 + ((ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 3) & uVar5;
        puVar4 = (ulong *)(DAT_00d7ef28[3] + uVar11 * 0x30);
        if (*puVar4 == param_1 && (uint)puVar4[1] == param_2) {
          pcVar6 = (char *)(uVar9 + uVar11);
          goto LAB_0070c024;
        }
      }
      uVar13 = NEON_cmeq(*(undefined8 *)(uVar9 + uVar8),0x8080808080808080,1);
      bVar12 = NEON_umaxv(uVar13,1);
      puVar4 = (ulong *)(CONCAT71((int7)((ulong)uVar13 >> 8),bVar12) & 0xffffffff);
      if ((bVar12 & 1) != 0) break;
      lVar7 = lVar7 + 8;
      uVar8 = lVar7 + uVar8;
    }
  }
  pcVar6 = (char *)0x0;
LAB_0070c024:
  if (((pcVar6 == (char *)0x0) || (pcVar6 == &DAT_00d7ef30)) || (-1 < *pcVar6)) {
    if (pcVar6 != &DAT_00d7ef30) {
      if (pcVar6 == (char *)0x0) {
        puVar4 = (ulong *)0x0;
      }
      else if (*pcVar6 < '\0') {
        FUN_00622058(3,"raw_hash_set.h",0x4fd,
                     "%s called on invalid iterator. The element might have been erased or the table might have rehashed. Consider running with --config=asan to diagnose rehashing issues."
                     ,"operator*()");
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x70c07c);
        (*pcVar3)();
      }
      return puVar4;
    }
    FUN_00622058(3,"raw_hash_set.h",0x546,"Invalid iterator comparison. %s",
                 "Comparing default-constructed hashtable iterator with a non-default-constructed hashtable iterator."
                );
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x70c0b8);
  (*pcVar3)();
}


// ===== 0070c0b8  FUN_0070c0b8 =====

undefined8
FUN_0070c0b8(long *param_1,undefined8 param_2,byte param_3,byte param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  auVar5 = FUN_0070c808();
  puVar2 = auVar5._0_8_;
  puVar2[2] = param_5;
  if ((auVar5 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
    *(byte *)(puVar2 + 1) = param_3;
    *(undefined1 *)((long)puVar2 + 9) = 1;
    puVar1 = PTR_DAT_00d525a0;
    *(byte *)((long)puVar2 + 0xb) = param_4 & 1;
    *(byte *)((long)puVar2 + 10) = *(byte *)((long)puVar2 + 10) | 1;
    switch(*(undefined4 *)(puVar1 + (ulong)param_3 * 4)) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
      lVar4 = *param_1;
      if (lVar4 == 0) {
        plVar3 = (long *)operator_new(0x10);
        *plVar3 = 0;
      }
      else {
        plVar3 = (long *)FUN_006fdbf0(lVar4,0x10);
        *plVar3 = lVar4;
      }
      break;
    case 9:
    case 10:
      lVar4 = *param_1;
      if (lVar4 == 0) {
        plVar3 = (long *)operator_new(0x18);
        plVar3[1] = 0;
        plVar3[2] = 0;
        *plVar3 = 0;
      }
      else {
        plVar3 = (long *)FUN_006fdbf0(lVar4,0x18);
        *plVar3 = 0;
        plVar3[1] = 0;
        plVar3[2] = lVar4;
      }
      break;
    default:
      goto switchD_0070c140_default;
    }
    *puVar2 = plVar3;
  }
switchD_0070c140_default:
  return *puVar2;
}


// ===== 0070c1c8  FUN_0070c1c8 =====

ulong FUN_0070c1c8(ulong *param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  int iVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  int *piVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  
  auVar9 = FUN_0070c808();
  puVar4 = auVar9._0_8_;
  puVar4[2] = param_4;
  if ((auVar9 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
    puVar2 = (ulong *)*puVar4;
  }
  else {
    *(undefined1 *)(puVar4 + 1) = param_3;
    *(undefined1 *)((long)puVar4 + 9) = 1;
    *(undefined1 *)((long)puVar4 + 0xb) = 0;
    *(byte *)((long)puVar4 + 10) = *(byte *)((long)puVar4 + 10) | 1;
    uVar8 = *param_1;
    if (uVar8 == 0) {
      puVar2 = (ulong *)operator_new(0x18);
      puVar2[1] = 0;
      puVar2[2] = 0;
      *puVar2 = 0;
    }
    else {
      puVar2 = (ulong *)FUN_006fdbf0(uVar8,0x18);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = uVar8;
    }
    *puVar4 = puVar2;
  }
  uVar8 = *puVar2;
  uVar7 = puVar2[2];
  if (uVar8 == 0) {
    *(int *)(puVar2 + 1) = 1;
    if (uVar7 == 0) goto LAB_0070c36c;
LAB_0070c2ac:
    puVar4 = (undefined8 *)FUN_006fdb6c(uVar7);
  }
  else {
    Hint_Prefetch(uVar8,0,0,0);
    if ((uVar8 & 1) == 0) {
      if ((int)puVar2[1] == 0) {
        *(int *)(puVar2 + 1) = 1;
      }
      else {
        puVar3 = (ulong *)FUN_00711858(puVar2,1,uVar7);
        if (uVar7 == 0) {
          puVar4 = (undefined8 *)operator_new(0x18);
        }
        else {
          puVar4 = (undefined8 *)FUN_006fdb6c(uVar7);
        }
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
        *puVar3 = (ulong)puVar4;
        *(undefined4 *)(*puVar2 + 3) = 2;
        *(int *)(puVar2 + 1) = 2;
        puVar2 = puVar3;
      }
      goto LAB_0070c300;
    }
    piVar5 = (int *)(uVar8 - 1);
    iVar1 = (int)puVar2[1];
    if (iVar1 == *piVar5) {
      FUN_00711858(puVar2,1,uVar7);
      iVar6 = *(int *)(*puVar2 + 3);
      piVar5 = (int *)(*puVar2 - 1);
    }
    else {
      iVar6 = *(int *)(uVar8 + 3);
      if (0 < iVar6 - iVar1) {
        *(int *)(puVar2 + 1) = iVar1 + 1;
        puVar2 = (ulong *)(piVar5 + (long)iVar1 * 2 + 2);
        goto LAB_0070c300;
      }
    }
    piVar5[1] = iVar6 + 1;
    uVar8 = puVar2[1];
    *(int *)(puVar2 + 1) = (int)uVar8 + 1;
    puVar2 = (ulong *)(piVar5 + (long)(int)uVar8 * 2 + 2);
    if (uVar7 != 0) goto LAB_0070c2ac;
LAB_0070c36c:
    puVar4 = (undefined8 *)operator_new(0x18);
  }
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar2 = (ulong)puVar4;
LAB_0070c300:
  return *puVar2;
}


// ===== 0070c384  FUN_0070c384 =====

void FUN_0070c384(undefined8 *param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  auVar4 = FUN_0070c808();
  puVar2 = auVar4._0_8_;
  puVar2[2] = param_5;
  if ((auVar4 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
    bVar1 = *(byte *)((long)puVar2 + 10);
    *(byte *)((long)puVar2 + 10) = bVar1 & 0xfd;
    if ((bVar1 >> 2 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0070c444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)*puVar2 + 0x28))((long *)*puVar2,param_4,*param_1);
      return;
    }
  }
  else {
    *(undefined1 *)(puVar2 + 1) = param_3;
    *(undefined1 *)((long)puVar2 + 9) = 0;
    *(byte *)((long)puVar2 + 10) = *(byte *)((long)puVar2 + 10) & 0xfb | 1;
    uVar3 = FUN_006dc23c(param_4,*param_1);
    *puVar2 = uVar3;
    *(byte *)((long)puVar2 + 10) = *(byte *)((long)puVar2 + 10) & 0xfd;
  }
  return;
}


// ===== 0070c448  FUN_0070c448 =====

ulong FUN_0070c448(ulong *param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  int *piVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  undefined8 local_28;
  
  auVar9 = FUN_0070c808();
  puVar2 = auVar9._0_8_;
  puVar2[2] = param_5;
  if ((auVar9 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
    puVar3 = (ulong *)*puVar2;
  }
  else {
    *(undefined1 *)(puVar2 + 1) = param_3;
    *(undefined1 *)((long)puVar2 + 9) = 1;
    *(byte *)((long)puVar2 + 10) = *(byte *)((long)puVar2 + 10) | 1;
    uVar8 = *param_1;
    if (uVar8 == 0) {
      puVar3 = (ulong *)operator_new(0x18);
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = 0;
    }
    else {
      puVar3 = (ulong *)FUN_006fdbf0(uVar8,0x18);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = uVar8;
    }
    *puVar2 = puVar3;
  }
  uVar7 = *param_1;
  uVar8 = *puVar3;
  local_28 = param_4;
  if (uVar8 == 0) {
    *(int *)(puVar3 + 1) = 1;
  }
  else {
    Hint_Prefetch(uVar8,0,0,0);
    if ((uVar8 & 1) == 0) {
      if ((int)puVar3[1] == 0) {
        *(int *)(puVar3 + 1) = 1;
      }
      else {
        puVar4 = (ulong *)FUN_00711858(puVar3,1,uVar7);
        FUN_0070dc8c(&local_28,uVar7,puVar4);
        *(undefined4 *)(*puVar3 + 3) = 2;
        *(int *)(puVar3 + 1) = 2;
        puVar3 = puVar4;
      }
      goto LAB_0070c5cc;
    }
    piVar5 = (int *)(uVar8 - 1);
    iVar1 = (int)puVar3[1];
    if (iVar1 == *piVar5) {
      FUN_00711858(puVar3,1,uVar7);
      iVar6 = *(int *)(*puVar3 + 3);
      piVar5 = (int *)(*puVar3 - 1);
    }
    else {
      iVar6 = *(int *)(uVar8 + 3);
      if (0 < iVar6 - iVar1) {
        *(int *)(puVar3 + 1) = iVar1 + 1;
        puVar3 = (ulong *)(piVar5 + (long)iVar1 * 2 + 2);
        goto LAB_0070c5cc;
      }
    }
    piVar5[1] = iVar6 + 1;
    uVar8 = puVar3[1];
    *(int *)(puVar3 + 1) = (int)uVar8 + 1;
    puVar3 = (ulong *)(piVar5 + (long)(int)uVar8 * 2 + 2);
  }
  FUN_0070dc8c(&local_28,uVar7,puVar3);
LAB_0070c5cc:
  return *puVar3;
}


// ===== 0070c5e8  FUN_0070c5e8 =====

void FUN_0070c5e8(undefined8 *param_1,ulong param_2)

{
  ushort uVar1;
  short sVar2;
  uint uVar3;
  undefined8 *__dest;
  undefined **ppuVar4;
  size_t __n;
  undefined4 uVar5;
  ulong uVar6;
  undefined8 *__src;
  long *plVar7;
  byte *pbVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined **local_68;
  undefined4 local_60;
  
  sVar2 = *(short *)((long)param_1 + 10);
  lVar10 = (long)sVar2;
  if ((-1 < lVar10) && (uVar9 = (ulong)*(ushort *)(param_1 + 1), uVar9 < param_2)) {
    do {
      uVar3 = (int)uVar9 << 2;
      if ((uVar9 & 0xffff) == 0) {
        uVar3 = 1;
      }
      uVar9 = (ulong)uVar3;
    } while ((uVar9 & 0xffff) < param_2);
    __src = (undefined8 *)param_1[2];
    plVar7 = (long *)*param_1;
    if ((uVar3 & 0xffff) < 0x101) {
      if (plVar7 == (long *)0x0) {
        __dest = (undefined8 *)operator_new__((uVar9 & 0xffff) << 5);
      }
      else {
        __dest = (undefined8 *)FUN_006fdcd0(plVar7);
      }
      memmove(__dest,__src,lVar10 * 0x20);
      uVar1 = *(ushort *)(param_1 + 1);
    }
    else {
      if (plVar7 == (long *)0x0) {
        __dest = (undefined8 *)operator_new(0x18);
      }
      else {
        __dest = (undefined8 *)thunk_FUN_006fd758(plVar7,0x18,8,FUN_0070f830);
      }
      *__dest = &PTR_LOOP_00d29e08;
      __dest[1] = &PTR_LOOP_00d29e08;
      __dest[2] = 0;
      if (sVar2 != 0) {
        ppuVar4 = &PTR_LOOP_00d29e08;
        puVar11 = __src;
        uVar5 = 0;
        do {
          local_88[0] = *(undefined4 *)puVar11;
          local_70 = puVar11[3];
          uStack_78 = puVar11[2];
          local_80 = puVar11[1];
          FUN_0070f878(&local_68,__dest,ppuVar4,uVar5,local_88,local_88);
          puVar11 = puVar11 + 4;
          ppuVar4 = local_68;
          uVar5 = local_60;
        } while (puVar11 != __src + lVar10 * 4);
      }
      *(undefined2 *)((long)param_1 + 10) = 0xffff;
      uVar1 = *(ushort *)(param_1 + 1);
    }
    uVar9 = (ulong)uVar1;
    if (uVar9 != 0) {
      if (plVar7 == (long *)0x0) {
        operator_delete__(__src);
      }
      else {
        lVar10 = __emutls_get_address(&DAT_00d5a2a0);
        if (*(long *)(lVar10 + 8) == *plVar7) {
          pbVar8 = *(byte **)(lVar10 + 0x10);
          uVar6 = 0x3b - LZCOUNT(uVar9 * 0x20);
          if (uVar6 < *pbVar8) {
            lVar10 = *(long *)(pbVar8 + 0x30);
            *__src = *(undefined8 *)(lVar10 + uVar6 * 8);
            *(undefined8 **)(lVar10 + uVar6 * 8) = __src;
          }
          else {
            uVar6 = uVar9 << 2;
            memmove(__src,*(void **)(pbVar8 + 0x30),(ulong)*pbVar8 << 3);
            __n = uVar9 * 0x20 + (ulong)*pbVar8 * -8;
            if (0 < (long)__n) {
              memset(__src + *pbVar8,0,__n);
            }
            *(undefined8 **)(pbVar8 + 0x30) = __src;
            if (0x3f < uVar6) {
              uVar6 = 0x40;
            }
            *pbVar8 = (byte)uVar6;
          }
        }
      }
    }
    *(short *)(param_1 + 1) = (short)uVar3;
    param_1[2] = __dest;
  }
  return;
}


// ===== 0070c808  FUN_0070c808 =====

undefined1  [16] FUN_0070c808(long param_1,int param_2)

{
  int *__src;
  int iVar1;
  ushort uVar2;
  int *piVar3;
  size_t __n;
  ulong uVar4;
  long lVar5;
  ushort uVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  uVar2 = *(ushort *)(param_1 + 10);
  if ((short)uVar2 < 0) {
LAB_0070c8f8:
    auVar9 = FUN_0070d940(param_1,param_2);
  }
  else {
    lVar5 = *(long *)(param_1 + 0x10);
    uVar6 = uVar2;
    if (uVar2 == 0) {
      lVar7 = 0;
    }
    else {
      do {
        lVar7 = lVar5 + (ulong)uVar6 * 0x20;
        iVar1 = *(int *)(lVar7 + -0x20);
        if (iVar1 == param_2) {
          auVar9._8_8_ = 0;
          auVar9._0_8_ = lVar7 - 0x18;
          goto LAB_0070c8e0;
        }
        if (iVar1 < param_2) goto LAB_0070c860;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      uVar6 = 0;
LAB_0070c860:
      lVar7 = (ulong)uVar6 << 5;
    }
    if (*(ushort *)(param_1 + 8) == uVar2) {
      FUN_0070c5e8(param_1,(ulong)uVar2 + 1);
      uVar2 = *(ushort *)(param_1 + 10);
      if ((short)uVar2 < 0) goto LAB_0070c8f8;
      lVar5 = *(long *)(param_1 + 0x10);
    }
    uVar4 = -((ulong)(long)(short)uVar2 >> 0x1f & 1) & 0xffffffe000000000 |
            ((long)(short)uVar2 & 0xffffffffU) << 5;
    __n = uVar4 - lVar7;
    __src = (int *)(lVar5 + lVar7);
    memmove((void *)(((lVar5 + uVar4) - __n) + 0x20),__src,__n);
    *(short *)(param_1 + 10) = *(short *)(param_1 + 10) + 1;
    *__src = param_2;
    piVar3 = __src + 2;
    auVar9._8_8_ = 1;
    auVar9._0_8_ = piVar3;
    piVar3[0] = 0;
    piVar3[1] = 0;
    __src[4] = 0;
    __src[5] = 0;
    __src[6] = 0;
    __src[7] = 0;
  }
LAB_0070c8e0:
  auVar8._0_8_ = auVar9._0_8_;
  auVar8._8_8_ = auVar9._8_8_ & 0xff;
  return auVar8;
}


// ===== 0070c908  FUN_0070c908 =====

void FUN_0070c908(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                 ulong *param_5,undefined8 param_6)

{
  uint uVar1;
  byte bVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar3 = (undefined8 *)FUN_0070bee8(param_4,param_2 >> 3 & 0xffffffff);
  if (puVar3 != (undefined8 *)0x0) {
    uVar5 = puVar3[1];
    local_70 = *puVar3;
    uStack_58 = puVar3[3];
    local_60 = puVar3[2];
    uStack_48 = puVar3[5];
    uStack_50 = puVar3[4];
    uVar1 = (uint)param_2 & 7;
    uStack_68._5_1_ = (byte)(uVar5 >> 0x28);
    bVar2 = 0;
    if (*(uint *)(PTR_DAT_00d525a8 + (uVar5 >> 0x20 & 0xff) * 4) - 5 < 0xfffffffd) {
      bVar2 = uVar1 == 2 & uStack_68._5_1_;
    }
    uStack_68 = uVar5;
    if ((bVar2 != 0) || (*(uint *)(PTR_DAT_00d525a8 + (uVar5 >> 0x20 & 0xff) * 4) == uVar1)) {
      FUN_0070ca18(param_1,param_2 >> 3 & 0xffffffff,bVar2,&local_70,param_5,param_3,param_6);
      return;
    }
  }
  if ((*param_5 & 1) == 0) {
    lVar4 = FUN_006dcbb4(param_5);
  }
  else {
    lVar4 = (*param_5 & 0xfffffffffffffffe) + 8;
  }
  FUN_006f6b14(param_2 & 0xffffffff,lVar4,param_3,param_6);
  return;
}


// ===== 0070ca18  FUN_0070ca18 =====

ulong * FUN_0070ca18(long *param_1,int param_2,ulong param_3,long param_4,ulong *param_5,
                    ulong *param_6,long param_7)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  byte bVar12;
  undefined2 uVar13;
  byte bVar14;
  ulong uVar15;
  uint uVar16;
  undefined1 auVar17 [16];
  ulong local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulong *local_60;
  int local_58;
  
  iVar3 = *(byte *)(param_4 + 0xc) - 1;
  if ((param_3 & 1) != 0) {
    switch(iVar3) {
    case 0:
      uVar5 = FUN_0070c0b8(param_1,param_2,1,*(undefined1 *)(param_4 + 0xe),
                           *(undefined8 *)(param_4 + 0x20));
      puVar6 = (ulong *)FUN_006f690c(uVar5,param_6,param_7);
      return puVar6;
    case 1:
      uVar5 = FUN_0070c0b8(param_1,param_2,2,*(undefined1 *)(param_4 + 0xe),
                           *(undefined8 *)(param_4 + 0x20));
      puVar6 = (ulong *)FUN_006f6850(uVar5,param_6,param_7);
      return puVar6;
    case 2:
      uVar5 = FUN_0070c0b8(param_1,param_2,3,*(undefined1 *)(param_4 + 0xe),
                           *(undefined8 *)(param_4 + 0x20));
      puVar6 = (ulong *)FUN_006f64e8(uVar5,param_6,param_7);
      return puVar6;
    case 3:
      uVar5 = FUN_0070c0b8(param_1,param_2,4,*(undefined1 *)(param_4 + 0xe),
                           *(undefined8 *)(param_4 + 0x20));
      puVar6 = (ulong *)FUN_006f6500(uVar5,param_6,param_7);
      return puVar6;
    case 4:
      uVar5 = FUN_0070c0b8(param_1,param_2,5,*(undefined1 *)(param_4 + 0xe),
                           *(undefined8 *)(param_4 + 0x20));
      puVar6 = (ulong *)FUN_006f64b8(uVar5,param_6,param_7);
      return puVar6;
    case 5:
      uVar5 = FUN_0070c0b8(param_1,param_2,6,*(undefined1 *)(param_4 + 0xe),
                           *(undefined8 *)(param_4 + 0x20));
      puVar6 = (ulong *)FUN_006f66d8(uVar5,param_6,param_7);
      return puVar6;
    case 6:
      uVar5 = FUN_0070c0b8(param_1,param_2,7,*(undefined1 *)(param_4 + 0xe),
                           *(undefined8 *)(param_4 + 0x20));
      puVar6 = (ulong *)FUN_006f6560(uVar5,param_6,param_7);
      return puVar6;
    case 7:
      uVar5 = FUN_0070c0b8(param_1,param_2,8,*(undefined1 *)(param_4 + 0xe),
                           *(undefined8 *)(param_4 + 0x20));
      puVar6 = (ulong *)FUN_006f6548(uVar5,param_6,param_7);
      return puVar6;
    case 8:
    case 9:
    case 10:
    case 0xb:
      FUN_006de990(&local_78,"../../third_party/protobuf/src/google/protobuf/extension_set_inl.h",
                   0x3c);
      FUN_0070d8e4(&local_78,"Non-primitive types can\'t be packed.");
      FUN_006de39c();
                    /* WARNING: Subroutine does not return */
      FUN_006dea94(&local_78);
    case 0xc:
      uVar5 = FUN_0070c0b8(param_1,param_2,0xd,*(undefined1 *)(param_4 + 0xe),
                           *(undefined8 *)(param_4 + 0x20));
      puVar6 = (ulong *)FUN_006f64d0(uVar5,param_6,param_7);
      return puVar6;
    case 0xd:
      local_78 = FUN_0070c0b8(param_1,param_2,0xe,*(undefined1 *)(param_4 + 0xe),
                              *(undefined8 *)(param_4 + 0x20));
      uStack_68 = *(undefined8 *)(param_4 + 0x18);
      local_70 = *(undefined8 *)(param_4 + 0x10);
      local_60 = param_5;
      local_58 = param_2;
      puVar6 = (ulong *)FUN_0070e6fc(param_7,param_6,&local_78,0);
      return puVar6;
    case 0xe:
      uVar5 = FUN_0070c0b8(param_1,param_2,0xf,*(undefined1 *)(param_4 + 0xe),
                           *(undefined8 *)(param_4 + 0x20));
      puVar6 = (ulong *)FUN_006f661c(uVar5,param_6,param_7);
      return puVar6;
    case 0xf:
      uVar5 = FUN_0070c0b8(param_1,param_2,0x10,*(undefined1 *)(param_4 + 0xe),
                           *(undefined8 *)(param_4 + 0x20));
      puVar6 = (ulong *)FUN_006f6794(uVar5,param_6,param_7);
      return puVar6;
    case 0x10:
      uVar5 = FUN_0070c0b8(param_1,param_2,0x11,*(undefined1 *)(param_4 + 0xe),
                           *(undefined8 *)(param_4 + 0x20));
      puVar6 = (ulong *)FUN_006f6518(uVar5,param_6,param_7);
      return puVar6;
    case 0x11:
      uVar5 = FUN_0070c0b8(param_1,param_2,0x12,*(undefined1 *)(param_4 + 0xe),
                           *(undefined8 *)(param_4 + 0x20));
      puVar6 = (ulong *)FUN_006f6530(uVar5,param_6,param_7);
      return puVar6;
    default:
      return param_6;
    }
  }
  switch(iVar3) {
  case 0:
    uVar10 = *param_6;
    if (*(char *)(param_4 + 0xd) == '\x01') {
      FUN_0070e5bc(uVar10,param_1,param_2,1,*(undefined1 *)(param_4 + 0xe),
                   *(undefined8 *)(param_4 + 0x20));
      return param_6 + 1;
    }
    uVar15 = *(ulong *)(param_4 + 0x20);
    auVar17 = FUN_0070c808(param_1,param_2);
    puVar8 = auVar17._0_8_;
    puVar8[2] = uVar15;
    if ((auVar17 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
      bVar12 = 0xfd;
    }
    else {
      *(undefined1 *)((long)puVar8 + 0xb) = 0;
      *(undefined2 *)(puVar8 + 1) = 1;
      bVar12 = 0xfe;
    }
    bVar14 = *(byte *)((long)puVar8 + 10);
    *puVar8 = uVar10;
    param_6 = param_6 + 1;
    break;
  case 1:
    uVar10 = *param_6;
    if (*(char *)(param_4 + 0xd) == '\x01') {
      FUN_0070e47c((uint)uVar10,param_1,param_2,2,*(undefined1 *)(param_4 + 0xe),
                   *(undefined8 *)(param_4 + 0x20));
      return (ulong *)((long)param_6 + 4);
    }
    uVar15 = *(ulong *)(param_4 + 0x20);
    auVar17 = FUN_0070c808(param_1,param_2);
    puVar8 = auVar17._0_8_;
    puVar8[2] = uVar15;
    if ((auVar17 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
      bVar12 = 0xfd;
    }
    else {
      *(undefined1 *)((long)puVar8 + 0xb) = 0;
      *(undefined2 *)(puVar8 + 1) = 2;
      bVar12 = 0xfe;
    }
    bVar14 = *(byte *)((long)puVar8 + 10);
    *(uint *)puVar8 = (uint)uVar10;
    param_6 = (ulong *)((long)param_6 + 4);
    break;
  case 2:
    uVar10 = *param_6;
    if (((uint)uVar10 >> 7 & 1) == 0) {
      uVar10 = uVar10 & 0x7f;
      param_6 = (ulong *)((long)param_6 + 1);
    }
    else if (((uint)uVar10 >> 0xf & 1) == 0) {
      param_6 = (ulong *)((long)param_6 + 2);
      uVar10 = uVar10 & 0x7f | (uVar10 >> 8 & 0x7f) << 7;
    }
    else {
      param_6 = (ulong *)FUN_0070ec64(param_6,&local_78);
      uVar10 = local_78;
    }
    if (param_6 == (ulong *)0x0) {
      return (ulong *)0x0;
    }
    local_78 = uVar10;
    if (*(char *)(param_4 + 0xd) == '\x01') {
      FUN_0070df94(param_1,param_2,3,*(undefined1 *)(param_4 + 0xe),uVar10,
                   *(undefined8 *)(param_4 + 0x20));
      return param_6;
    }
    uVar15 = *(ulong *)(param_4 + 0x20);
    auVar17 = FUN_0070c808(param_1,param_2);
    puVar8 = auVar17._0_8_;
    puVar8[2] = uVar15;
    if ((auVar17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
      uVar13 = 3;
      goto LAB_0070d5b4;
    }
LAB_0070d5c4:
    bVar12 = 0xfd;
    goto LAB_0070d5c8;
  case 3:
    uVar10 = *param_6;
    if (((uint)uVar10 >> 7 & 1) == 0) {
      uVar10 = uVar10 & 0x7f;
      param_6 = (ulong *)((long)param_6 + 1);
    }
    else if (((uint)uVar10 >> 0xf & 1) == 0) {
      param_6 = (ulong *)((long)param_6 + 2);
      uVar10 = uVar10 & 0x7f | (uVar10 >> 8 & 0x7f) << 7;
    }
    else {
      param_6 = (ulong *)FUN_0070ec64(param_6,&local_78);
      uVar10 = local_78;
    }
    if (param_6 == (ulong *)0x0) {
      return (ulong *)0x0;
    }
    local_78 = uVar10;
    if (*(char *)(param_4 + 0xd) == '\x01') {
      FUN_0070e204(param_1,param_2,4,*(undefined1 *)(param_4 + 0xe),uVar10,
                   *(undefined8 *)(param_4 + 0x20));
      return param_6;
    }
    uVar15 = *(ulong *)(param_4 + 0x20);
    auVar17 = FUN_0070c808(param_1,param_2);
    puVar8 = auVar17._0_8_;
    puVar8[2] = uVar15;
    if ((auVar17 & (undefined1  [16])0x1) == (undefined1  [16])0x0) goto LAB_0070d5c4;
    uVar13 = 4;
LAB_0070d5b4:
    *(undefined2 *)(puVar8 + 1) = uVar13;
    bVar12 = 0xfe;
    *(undefined1 *)((long)puVar8 + 0xb) = 0;
LAB_0070d5c8:
    bVar14 = *(byte *)((long)puVar8 + 10);
    *puVar8 = uVar10;
    break;
  case 4:
    uVar10 = *param_6;
    if (((uint)uVar10 >> 7 & 1) == 0) {
      local_78 = uVar10 & 0x7f;
      param_6 = (ulong *)((long)param_6 + 1);
    }
    else if (((uint)uVar10 >> 0xf & 1) == 0) {
      param_6 = (ulong *)((long)param_6 + 2);
      local_78 = uVar10 & 0x7f | (uVar10 >> 8 & 0x7f) << 7;
    }
    else {
      param_6 = (ulong *)FUN_0070ec64(param_6,&local_78);
    }
    if (param_6 == (ulong *)0x0) {
      return (ulong *)0x0;
    }
    if (*(char *)(param_4 + 0xd) == '\x01') {
      FUN_0070de5c(param_1,param_2,5,*(undefined1 *)(param_4 + 0xe),local_78 & 0xffffffff,
                   *(undefined8 *)(param_4 + 0x20));
      return param_6;
    }
    uVar10 = *(ulong *)(param_4 + 0x20);
    uVar16 = (uint)local_78;
    auVar17 = FUN_0070c808(param_1,param_2);
    puVar8 = auVar17._0_8_;
    puVar8[2] = uVar10;
    if ((auVar17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
      uVar13 = 5;
      goto LAB_0070d550;
    }
LAB_0070d560:
    bVar12 = 0xfd;
    goto LAB_0070d564;
  case 5:
    puVar6 = param_6 + 1;
    uVar10 = *param_6;
    if (*(char *)(param_4 + 0xd) == '\x01') {
      FUN_0070e204(param_1,param_2,6,*(undefined1 *)(param_4 + 0xe),uVar10,
                   *(undefined8 *)(param_4 + 0x20));
      return puVar6;
    }
    uVar15 = *(ulong *)(param_4 + 0x20);
    auVar17 = FUN_0070c808(param_1,param_2);
    puVar8 = auVar17._0_8_;
    puVar8[2] = uVar15;
    if ((auVar17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
      uVar13 = 6;
      goto LAB_0070d620;
    }
LAB_0070d630:
    bVar12 = 0xfd;
    goto LAB_0070d634;
  case 6:
    puVar6 = (ulong *)((long)param_6 + 4);
    uVar16 = (uint)*param_6;
    if (*(char *)(param_4 + 0xd) == '\x01') {
      FUN_0070e0cc(param_1,param_2,7,*(undefined1 *)(param_4 + 0xe),uVar16,
                   *(undefined8 *)(param_4 + 0x20));
      return puVar6;
    }
    uVar10 = *(ulong *)(param_4 + 0x20);
    auVar17 = FUN_0070c808(param_1,param_2);
    puVar8 = auVar17._0_8_;
    puVar8[2] = uVar10;
    if ((auVar17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
      uVar13 = 7;
      goto LAB_0070d4ec;
    }
LAB_0070d4fc:
    bVar12 = 0xfd;
    goto LAB_0070d500;
  case 7:
    uVar10 = *param_6;
    if (((uint)uVar10 >> 7 & 1) == 0) {
      uVar10 = uVar10 & 0x7f;
      param_6 = (ulong *)((long)param_6 + 1);
    }
    else if (((uint)uVar10 >> 0xf & 1) == 0) {
      param_6 = (ulong *)((long)param_6 + 2);
      uVar10 = uVar10 & 0x7f | (uVar10 >> 8 & 0x7f) << 7;
    }
    else {
      param_6 = (ulong *)FUN_0070ec64(param_6,&local_78);
      uVar10 = local_78;
    }
    if (param_6 != (ulong *)0x0) {
      local_78 = uVar10;
      if (*(char *)(param_4 + 0xd) != '\x01') {
        uVar5 = *(undefined8 *)(param_4 + 0x20);
        auVar17 = FUN_0070c808(param_1,param_2);
        lVar9 = auVar17._0_8_;
        *(undefined8 *)(lVar9 + 0x10) = uVar5;
        if ((auVar17 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
          bVar12 = 0xfd;
        }
        else {
          *(undefined1 *)(lVar9 + 0xb) = 0;
          *(undefined2 *)(lVar9 + 8) = 8;
          bVar12 = 0xfe;
        }
        *(byte *)(lVar9 + 10) = *(byte *)(lVar9 + 10) & bVar12;
        *(bool *)lVar9 = uVar10 != 0;
        return param_6;
      }
      FUN_0070e33c(param_1,param_2,8,*(undefined1 *)(param_4 + 0xe),uVar10 != 0,
                   *(undefined8 *)(param_4 + 0x20));
      return param_6;
    }
    return (ulong *)0x0;
  case 8:
  case 0xb:
    uVar5 = *(undefined8 *)(param_4 + 0x20);
    if (*(char *)(param_4 + 0xd) == '\x01') {
      puVar4 = (undefined8 *)FUN_0070c1c8(param_1,param_2,9,uVar5);
    }
    else {
      auVar17 = FUN_0070c808(param_1,param_2);
      puVar7 = auVar17._0_8_;
      puVar7[2] = uVar5;
      if ((auVar17 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
        puVar4 = (undefined8 *)*puVar7;
      }
      else {
        *(undefined2 *)(puVar7 + 1) = 9;
        *(byte *)((long)puVar7 + 10) = *(byte *)((long)puVar7 + 10) | 1;
        if (*param_1 == 0) {
          puVar4 = (undefined8 *)operator_new(0x18);
        }
        else {
          puVar4 = (undefined8 *)FUN_006fdb6c();
        }
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
        *puVar7 = puVar4;
      }
      *(byte *)((long)puVar7 + 10) = *(byte *)((long)puVar7 + 10) & 0xfd;
    }
    cVar2 = (char)*param_6;
    if (cVar2 < '\0') {
      auVar17 = FUN_006f6214(param_6,cVar2);
      lVar9 = auVar17._0_8_;
    }
    else {
      lVar9 = (long)param_6 + 1;
      auVar17[8] = cVar2;
      auVar17._0_8_ = lVar9;
      auVar17._9_7_ = 0;
    }
    if (lVar9 == 0) {
      return (ulong *)0x0;
    }
    puVar6 = (ulong *)FUN_007011c4(param_7,auVar17._0_8_,auVar17._8_8_,puVar4);
    return puVar6;
  case 9:
    if (*(char *)(param_4 + 0xd) == '\x01') {
      uVar5 = FUN_0070c448(param_1,param_2,10,*(undefined8 *)(*(long *)(param_4 + 0x18) + 0x20),
                           *(undefined8 *)(param_4 + 0x20));
    }
    else {
      uVar5 = FUN_0070c384(param_1,param_2,10,*(undefined8 *)(param_4 + 0x10),
                           *(undefined8 *)(param_4 + 0x20));
    }
    iVar3 = *(int *)(param_7 + 0x58) + -1;
    *(int *)(param_7 + 0x58) = iVar3;
    if (iVar3 < 0) {
      return (ulong *)0x0;
    }
    *(int *)(param_7 + 0x5c) = *(int *)(param_7 + 0x5c) + 1;
    puVar6 = (ulong *)FUN_006dc454(uVar5,param_6,param_7);
    uVar5 = DAT_001f5550;
    uVar16 = *(uint *)(param_7 + 0x50);
    *(undefined4 *)(param_7 + 0x50) = 0;
    if (uVar16 != (param_2 << 3 | 3U)) {
      puVar6 = (ulong *)0x0;
    }
    *(ulong *)(param_7 + 0x58) =
         CONCAT44((int)((ulong)*(undefined8 *)(param_7 + 0x58) >> 0x20) +
                  (int)((ulong)uVar5 >> 0x20),(int)*(undefined8 *)(param_7 + 0x58) + (int)uVar5);
    return puVar6;
  case 10:
    if (*(char *)(param_4 + 0xd) == '\x01') {
      uVar5 = FUN_0070c448(param_1,param_2,0xb,*(undefined8 *)(*(long *)(param_4 + 0x18) + 0x20),
                           *(undefined8 *)(param_4 + 0x20));
    }
    else {
      uVar5 = FUN_0070c384(param_1,param_2,0xb,*(undefined8 *)(param_4 + 0x10),
                           *(undefined8 *)(param_4 + 0x20));
    }
    puVar6 = (ulong *)FUN_006f5b34(param_7,uVar5,param_6);
    return puVar6;
  case 0xc:
    uVar10 = *param_6;
    if (((uint)uVar10 >> 7 & 1) == 0) {
      local_78 = uVar10 & 0x7f;
      param_6 = (ulong *)((long)param_6 + 1);
    }
    else if (((uint)uVar10 >> 0xf & 1) == 0) {
      param_6 = (ulong *)((long)param_6 + 2);
      local_78 = uVar10 & 0x7f | (uVar10 >> 8 & 0x7f) << 7;
    }
    else {
      param_6 = (ulong *)FUN_0070ec64(param_6,&local_78);
    }
    if (param_6 == (ulong *)0x0) {
      return (ulong *)0x0;
    }
    if (*(char *)(param_4 + 0xd) == '\x01') {
      FUN_0070e0cc(param_1,param_2,0xd,*(undefined1 *)(param_4 + 0xe),local_78 & 0xffffffff,
                   *(undefined8 *)(param_4 + 0x20));
      return param_6;
    }
    uVar10 = *(ulong *)(param_4 + 0x20);
    uVar16 = (uint)local_78;
    auVar17 = FUN_0070c808(param_1,param_2);
    puVar8 = auVar17._0_8_;
    puVar8[2] = uVar10;
    if ((auVar17 & (undefined1  [16])0x1) == (undefined1  [16])0x0) goto LAB_0070d560;
    uVar13 = 0xd;
LAB_0070d550:
    *(undefined2 *)(puVar8 + 1) = uVar13;
    bVar12 = 0xfe;
    *(undefined1 *)((long)puVar8 + 0xb) = 0;
LAB_0070d564:
    bVar14 = *(byte *)((long)puVar8 + 10);
    *(uint *)puVar8 = uVar16;
    break;
  case 0xd:
    uVar10 = *param_6;
    if (((uint)uVar10 >> 7 & 1) == 0) {
      uVar10 = uVar10 & 0x7f;
      param_6 = (ulong *)((long)param_6 + 1);
    }
    else if (((uint)uVar10 >> 0xf & 1) == 0) {
      param_6 = (ulong *)((long)param_6 + 2);
      uVar10 = uVar10 & 0x7f | (uVar10 >> 8 & 0x7f) << 7;
    }
    else {
      param_6 = (ulong *)FUN_0070ec64(param_6,&local_78);
      uVar10 = local_78;
    }
    if (param_6 == (ulong *)0x0) {
      return (ulong *)0x0;
    }
    local_78 = uVar10;
    if (*(code **)(param_4 + 0x10) == (code *)0x0) {
      uVar15 = FUN_0071211c(uVar10 & 0xffffffff);
    }
    else {
      uVar15 = (**(code **)(param_4 + 0x10))(*(undefined8 *)(param_4 + 0x18),uVar10 & 0xffffffff);
    }
    if ((uVar15 & 1) == 0) {
      if ((*param_5 & 1) == 0) {
        lVar9 = FUN_006dcbb4(param_5);
      }
      else {
        lVar9 = (*param_5 & 0xfffffffffffffffe) + 8;
      }
      FUN_006f5c6c(param_2,(long)(int)(uint)uVar10,lVar9);
      return param_6;
    }
    if (*(char *)(param_4 + 0xd) == '\x01') {
      FUN_0070de5c(param_1,param_2,0xe,*(undefined1 *)(param_4 + 0xe),uVar10 & 0xffffffff,
                   *(undefined8 *)(param_4 + 0x20));
      return param_6;
    }
    uVar15 = *(ulong *)(param_4 + 0x20);
    auVar17 = FUN_0070c808(param_1,param_2);
    puVar8 = auVar17._0_8_;
    puVar8[2] = uVar15;
    if ((auVar17 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
      bVar12 = 0xfd;
    }
    else {
      *(undefined1 *)((long)puVar8 + 0xb) = 0;
      *(undefined2 *)(puVar8 + 1) = 0xe;
      bVar12 = 0xfe;
    }
    bVar14 = *(byte *)((long)puVar8 + 10);
    *(uint *)puVar8 = (uint)uVar10;
    break;
  case 0xe:
    puVar6 = (ulong *)((long)param_6 + 4);
    uVar16 = (uint)*param_6;
    if (*(char *)(param_4 + 0xd) == '\x01') {
      uVar11 = *(undefined8 *)(param_4 + 0x20);
      uVar1 = *(undefined1 *)(param_4 + 0xe);
      uVar5 = 0xf;
LAB_0070cefc:
      FUN_0070de5c(param_1,param_2,uVar5,uVar1,uVar16,uVar11);
      return puVar6;
    }
    uVar10 = *(ulong *)(param_4 + 0x20);
    auVar17 = FUN_0070c808(param_1,param_2);
    puVar8 = auVar17._0_8_;
    puVar8[2] = uVar10;
    if ((auVar17 & (undefined1  [16])0x1) == (undefined1  [16])0x0) goto LAB_0070d4fc;
    uVar13 = 0xf;
    goto LAB_0070d4ec;
  case 0xf:
    puVar6 = param_6 + 1;
    uVar10 = *param_6;
    if (*(char *)(param_4 + 0xd) == '\x01') {
      uVar11 = *(undefined8 *)(param_4 + 0x20);
      uVar1 = *(undefined1 *)(param_4 + 0xe);
      uVar5 = 0x10;
LAB_0070d1cc:
      FUN_0070df94(param_1,param_2,uVar5,uVar1,uVar10,uVar11);
      return puVar6;
    }
    uVar15 = *(ulong *)(param_4 + 0x20);
    auVar17 = FUN_0070c808(param_1,param_2);
    puVar8 = auVar17._0_8_;
    puVar8[2] = uVar15;
    if ((auVar17 & (undefined1  [16])0x1) == (undefined1  [16])0x0) goto LAB_0070d630;
    uVar13 = 0x10;
    goto LAB_0070d620;
  case 0x10:
    uVar10 = *param_6;
    if (((uint)uVar10 >> 7 & 1) == 0) {
      local_78 = uVar10 & 0x7f;
      puVar6 = (ulong *)((long)param_6 + 1);
    }
    else if (((uint)uVar10 >> 0xf & 1) == 0) {
      puVar6 = (ulong *)((long)param_6 + 2);
      local_78 = uVar10 & 0x7f | (uVar10 >> 8 & 0x7f) << 7;
    }
    else {
      puVar6 = (ulong *)FUN_0070ec64(param_6,&local_78);
    }
    if (puVar6 == (ulong *)0x0) {
      return (ulong *)0x0;
    }
    uVar16 = -((uint)local_78 & 1) ^ (uint)local_78 >> 1;
    if (*(char *)(param_4 + 0xd) == '\x01') {
      uVar11 = *(undefined8 *)(param_4 + 0x20);
      uVar1 = *(undefined1 *)(param_4 + 0xe);
      uVar5 = 0x11;
      goto LAB_0070cefc;
    }
    uVar10 = *(ulong *)(param_4 + 0x20);
    auVar17 = FUN_0070c808(param_1,param_2);
    puVar8 = auVar17._0_8_;
    puVar8[2] = uVar10;
    if ((auVar17 & (undefined1  [16])0x1) == (undefined1  [16])0x0) goto LAB_0070d4fc;
    uVar13 = 0x11;
LAB_0070d4ec:
    *(undefined2 *)(puVar8 + 1) = uVar13;
    bVar12 = 0xfe;
    *(undefined1 *)((long)puVar8 + 0xb) = 0;
LAB_0070d500:
    bVar14 = *(byte *)((long)puVar8 + 10);
    *(uint *)puVar8 = uVar16;
    param_6 = puVar6;
    break;
  case 0x11:
    uVar10 = *param_6;
    if (((uint)uVar10 >> 7 & 1) == 0) {
      local_78 = uVar10 & 0x7f;
      puVar6 = (ulong *)((long)param_6 + 1);
    }
    else if (((uint)uVar10 >> 0xf & 1) == 0) {
      puVar6 = (ulong *)((long)param_6 + 2);
      local_78 = uVar10 & 0x7f | (uVar10 >> 8 & 0x7f) << 7;
    }
    else {
      puVar6 = (ulong *)FUN_0070ec64(param_6,&local_78);
    }
    if (puVar6 == (ulong *)0x0) {
      return (ulong *)0x0;
    }
    uVar10 = -(local_78 & 1) ^ local_78 >> 1;
    if (*(char *)(param_4 + 0xd) == '\x01') {
      uVar11 = *(undefined8 *)(param_4 + 0x20);
      uVar1 = *(undefined1 *)(param_4 + 0xe);
      uVar5 = 0x12;
      goto LAB_0070d1cc;
    }
    uVar15 = *(ulong *)(param_4 + 0x20);
    auVar17 = FUN_0070c808(param_1,param_2);
    puVar8 = auVar17._0_8_;
    puVar8[2] = uVar15;
    if ((auVar17 & (undefined1  [16])0x1) == (undefined1  [16])0x0) goto LAB_0070d630;
    uVar13 = 0x12;
LAB_0070d620:
    *(undefined2 *)(puVar8 + 1) = uVar13;
    bVar12 = 0xfe;
    *(undefined1 *)((long)puVar8 + 0xb) = 0;
LAB_0070d634:
    bVar14 = *(byte *)((long)puVar8 + 10);
    *puVar8 = uVar10;
    param_6 = puVar6;
    break;
  default:
    goto switchD_0070ca78_default;
  }
  *(byte *)((long)puVar8 + 10) = bVar14 & bVar12;
switchD_0070ca78_default:
  return param_6;
}


// ===== 0070d8e4  FUN_0070d8e4 =====

undefined8 FUN_0070d8e4(undefined8 param_1,char *param_2)

{
  size_t sVar1;
  
  if (param_2 != (char *)0x0) {
    sVar1 = strlen(param_2);
    FUN_006dd85c(param_1,param_2,sVar1);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/string_view:278: libc++ Hardening assertion __s != nullptr failed: null pointer passed to non-null argument of char_traits<...>::length\n"
            );
}


// ===== 0070d940  FUN_0070d940 =====

undefined1  [16] FUN_0070d940(long param_1,undefined4 param_2)

{
  long *plVar1;
  code *pcVar2;
  long *plVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  undefined4 local_50 [2];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  long *local_30;
  undefined1 *puStack_28;
  undefined1 *local_20;
  
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  puStack_28 = &DAT_aaaaaaaaaaaaaaaa;
  local_30 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  local_20 = &DAT_aaaaaaaaaaaaaaaa;
  local_50[0] = param_2;
  FUN_0070ee68(&local_30,*(undefined8 *)(param_1 + 0x10),local_50,local_50);
  if (local_30 != (long *)0x0) {
    if (-1 < (int)(uint)puStack_28) {
      if ((uint)puStack_28 < *(byte *)((long)local_30 + 10)) {
        auVar5[8] = local_20._0_1_;
        auVar5._0_8_ = local_30 + ((ulong)puStack_28 & 0xffffffff) * 4 + 3;
        auVar5._9_7_ = 0;
        return auVar5;
      }
      plVar3 = local_30;
      if ((uint)puStack_28 == *(byte *)((long)local_30 + 10)) {
        do {
          plVar4 = (long *)*plVar3;
          if (*(char *)((long)plVar4 + 0xb) != '\0') break;
          plVar1 = plVar3 + 1;
          plVar3 = plVar4;
        } while ((char)*plVar1 == *(char *)((long)plVar4 + 10));
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x70d9e0);
  (*pcVar2)();
}


// ===== 0070d9e0  FUN_0070d9e0 =====

void FUN_0070d9e0(long *param_1)

{
  long *plVar1;
  void *pvVar2;
  byte bVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  uVar5 = (ulong)*(byte *)((long)param_1 + 10);
  if (*(char *)((long)param_1 + 0xb) == '\0') {
    if (uVar5 != 0) {
      puVar11 = (undefined8 *)*param_1;
      do {
        param_1 = (long *)param_1[0x1e];
      } while (*(char *)((long)param_1 + 0xb) == '\0');
      uVar5 = (ulong)*(byte *)(param_1 + 1);
      puVar9 = (undefined8 *)*param_1;
      do {
        plVar4 = (long *)puVar9[uVar5 + 0x1e];
        if (*(char *)((long)plVar4 + 0xb) == '\0') {
          do {
            plVar4 = (long *)plVar4[0x1e];
          } while (*(char *)((long)plVar4 + 0xb) == '\0');
          uVar5 = (ulong)*(byte *)(plVar4 + 1);
          puVar9 = (undefined8 *)*plVar4;
          bVar3 = *(byte *)((long)plVar4 + 10);
        }
        else {
          bVar3 = *(byte *)((long)plVar4 + 10);
        }
        uVar8 = (ulong)bVar3;
        if (uVar8 != 0) {
          uVar6 = -(long)plVar4 - 0x10U >> 5;
          uVar7 = uVar8 * 0x20 - 0x20 >> 5;
          if (uVar7 <= uVar6) {
            uVar6 = uVar7;
          }
          if (uVar6 < 2) {
            plVar1 = plVar4 + 2;
          }
          else {
            plVar1 = plVar4 + 2;
            if ((0x10U - (int)plVar4 & 0x1f) == 0) {
              uVar6 = uVar6 & 0x7fffffffffffffe;
              plVar1 = plVar4 + uVar6 * 4 + 2;
              do {
                uVar6 = uVar6 - 2;
              } while (uVar6 != 0);
            }
          }
          do {
            if (plVar1 == (long *)0x0) goto LAB_0070dc78;
            plVar1 = plVar1 + 4;
          } while (plVar1 != plVar4 + uVar8 * 4 + 2);
        }
        operator_delete(plVar4);
        uVar8 = (ulong)*(byte *)((long)puVar9 + 10);
        puVar10 = puVar9;
        if (uVar5 < uVar8) {
          uVar5 = uVar5 + 1;
        }
        else {
          do {
            bVar3 = *(byte *)(puVar10 + 1);
            puVar9 = (undefined8 *)*puVar10;
            if (uVar8 != 0) {
              uVar5 = -(long)puVar10 - 0x10U >> 5;
              uVar6 = uVar8 * 0x20 - 0x20 >> 5;
              if (uVar6 <= uVar5) {
                uVar5 = uVar6;
              }
              if (uVar5 < 2) {
                pvVar2 = puVar10 + 2;
              }
              else {
                pvVar2 = puVar10 + 2;
                if ((0x10U - (int)puVar10 & 0x1f) == 0) {
                  uVar5 = uVar5 & 0x7fffffffffffffe;
                  pvVar2 = puVar10 + uVar5 * 4 + 2;
                  do {
                    uVar5 = uVar5 - 2;
                  } while (uVar5 != 0);
                }
              }
              do {
                if (pvVar2 == (void *)0x0) goto LAB_0070dc78;
                pvVar2 = (void *)((long)pvVar2 + 0x20);
              } while ((undefined8 *)pvVar2 != puVar10 + uVar8 * 4 + 2);
            }
            operator_delete(puVar10);
            if (puVar9 == puVar11) {
              return;
            }
            uVar8 = (ulong)*(byte *)((long)puVar9 + 10);
            puVar10 = puVar9;
          } while (uVar8 <= bVar3);
          uVar5 = (ulong)bVar3 + 1;
        }
      } while( true );
    }
  }
  else if (*(byte *)((long)param_1 + 10) != 0) {
    uVar6 = -(long)param_1 - 0x10U >> 5;
    uVar8 = uVar5 * 0x20 - 0x20 >> 5;
    if (uVar6 <= uVar8) {
      uVar8 = uVar6;
    }
    if (uVar8 < 2) {
      plVar4 = param_1 + 2;
    }
    else {
      plVar4 = param_1 + 2;
      if ((0x10U - (int)param_1 & 0x1f) == 0) {
        uVar8 = uVar8 & 0x7fffffffffffffe;
        plVar4 = param_1 + uVar8 * 4 + 2;
        do {
          uVar8 = uVar8 - 2;
        } while (uVar8 != 0);
      }
    }
    do {
      if (plVar4 == (long *)0x0) {
LAB_0070dc78:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      plVar4 = plVar4 + 4;
    } while (plVar4 != param_1 + uVar5 * 4 + 2);
  }
  operator_delete(param_1);
  return;
}


// ===== 0070dc8c  FUN_0070dc8c =====

void FUN_0070dc8c(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  param_1 = (undefined8 *)*param_1;
  puVar8 = (undefined8 *)*param_1;
  if (param_2 == 0) {
    puVar3 = (undefined8 *)operator_new((ulong)*(uint *)(param_1 + 5));
  }
  else {
    puVar3 = (undefined8 *)FUN_006fdbf0(param_2,(ulong)*(uint *)(param_1 + 5) + 7 & 0x1fffffff8);
  }
  if (*(char *)((long)param_1 + 0x2c) < '\0') {
    puVar3 = (undefined8 *)(*(code *)param_1[6])(puVar8,puVar3,param_2);
  }
  else {
    uVar1 = *(uint *)(param_1 + 5);
    uVar4 = (ulong)uVar1;
    if (*(char *)((long)param_1 + 0x2c) == '\0') {
      if (uVar1 < 0x21) {
        *(undefined8 *)((long)puVar3 + (uVar4 - 0x10)) = 0;
        *(undefined8 *)((long)puVar3 + (uVar4 - 8)) = 0;
      }
      else if (uVar1 < 0x41) {
        puVar3[2] = 0;
        puVar3[3] = 0;
        *(undefined8 *)((long)puVar3 + (uVar4 - 0x18)) = 0;
        *(undefined8 *)((long)puVar3 + (uVar4 - 0x20)) = 0;
        *(undefined8 *)((long)puVar3 + (uVar4 - 8)) = 0;
        *(undefined8 *)((long)puVar3 + (uVar4 - 0x10)) = 0;
      }
      else {
        if (0x50 < uVar1) {
          puVar5 = puVar3 + 10;
          uVar7 = 0x50;
          do {
            uVar7 = uVar7 + 0x40;
            Hint_Prefetch(puVar5,2,0,0);
            puVar5[-7] = 0;
            puVar5[-8] = 0;
            puVar5[-5] = 0;
            puVar5[-6] = 0;
            puVar5[-3] = 0;
            puVar5[-4] = 0;
            puVar5[-1] = 0;
            puVar5[-2] = 0;
            puVar5 = puVar5 + 8;
          } while (uVar7 < uVar4);
        }
        *(undefined8 *)((long)puVar3 + (uVar4 - 0x38)) = 0;
        *(undefined8 *)((long)puVar3 + (uVar4 - 0x40)) = 0;
        *(undefined8 *)((long)puVar3 + (uVar4 - 0x28)) = 0;
        *(undefined8 *)((long)puVar3 + (uVar4 - 0x30)) = 0;
        *(undefined8 *)((long)puVar3 + (uVar4 - 0x18)) = 0;
        *(undefined8 *)((long)puVar3 + (uVar4 - 0x20)) = 0;
        *(undefined8 *)((long)puVar3 + (uVar4 - 8)) = 0;
        *(undefined8 *)((long)puVar3 + (uVar4 - 0x10)) = 0;
      }
    }
    else if (uVar1 < 0x21) {
      uVar9 = *(undefined8 *)((long)puVar8 + (uVar4 - 0x10));
      *(undefined8 *)((long)puVar3 + (uVar4 - 8)) = *(undefined8 *)((long)puVar8 + (uVar4 - 8));
      *(undefined8 *)((long)puVar3 + (uVar4 - 0x10)) = uVar9;
    }
    else if (uVar1 < 0x41) {
      uVar9 = puVar8[2];
      puVar3[3] = puVar8[3];
      puVar3[2] = uVar9;
      uVar11 = *(undefined8 *)((long)puVar8 + (uVar4 - 0x20));
      uVar10 = *(undefined8 *)((long)puVar8 + (uVar4 - 8));
      uVar9 = *(undefined8 *)((long)puVar8 + (uVar4 - 0x10));
      *(undefined8 *)((long)puVar3 + (uVar4 - 0x18)) =
           *(undefined8 *)((long)puVar8 + (uVar4 - 0x18));
      *(undefined8 *)((long)puVar3 + (uVar4 - 0x20)) = uVar11;
      *(undefined8 *)((long)puVar3 + (uVar4 - 8)) = uVar10;
      *(undefined8 *)((long)puVar3 + (uVar4 - 0x10)) = uVar9;
    }
    else {
      if (0x50 < uVar1) {
        puVar5 = puVar3 + 10;
        puVar6 = puVar8 + 10;
        uVar7 = 0x50;
        do {
          Hint_Prefetch(puVar6,0,0,0);
          Hint_Prefetch(puVar5,2,0,0);
          uVar7 = uVar7 + 0x40;
          puVar2 = puVar6 + -3;
          uVar11 = puVar6[-4];
          uVar10 = puVar6[-1];
          uVar9 = puVar6[-2];
          uVar13 = puVar6[-7];
          uVar12 = puVar6[-8];
          uVar15 = puVar6[-5];
          uVar14 = puVar6[-6];
          puVar6 = puVar6 + 8;
          puVar5[-3] = *puVar2;
          puVar5[-4] = uVar11;
          puVar5[-1] = uVar10;
          puVar5[-2] = uVar9;
          puVar5[-7] = uVar13;
          puVar5[-8] = uVar12;
          puVar5[-5] = uVar15;
          puVar5[-6] = uVar14;
          puVar5 = puVar5 + 8;
        } while (uVar7 < uVar4);
      }
      uVar11 = *(undefined8 *)((long)puVar8 + (uVar4 - 0x20));
      uVar10 = *(undefined8 *)((long)puVar8 + (uVar4 - 8));
      uVar9 = *(undefined8 *)((long)puVar8 + (uVar4 - 0x10));
      uVar13 = *(undefined8 *)((long)puVar8 + (uVar4 - 0x38));
      uVar12 = *(undefined8 *)((long)puVar8 + (uVar4 - 0x40));
      uVar15 = *(undefined8 *)((long)puVar8 + (uVar4 - 0x28));
      uVar14 = *(undefined8 *)((long)puVar8 + (uVar4 - 0x30));
      *(undefined8 *)((long)puVar3 + (uVar4 - 0x18)) =
           *(undefined8 *)((long)puVar8 + (uVar4 - 0x18));
      *(undefined8 *)((long)puVar3 + (uVar4 - 0x20)) = uVar11;
      *(undefined8 *)((long)puVar3 + (uVar4 - 8)) = uVar10;
      *(undefined8 *)((long)puVar3 + (uVar4 - 0x10)) = uVar9;
      *(undefined8 *)((long)puVar3 + (uVar4 - 0x38)) = uVar13;
      *(undefined8 *)((long)puVar3 + (uVar4 - 0x40)) = uVar12;
      *(undefined8 *)((long)puVar3 + (uVar4 - 0x28)) = uVar15;
      *(undefined8 *)((long)puVar3 + (uVar4 - 0x30)) = uVar14;
    }
    if (param_2 != 0) {
      for (uVar4 = param_1[6]; uVar4 != 0; uVar4 = uVar4 - 1 & uVar4) {
        uVar7 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        puVar3[LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20)] = param_2;
      }
    }
    *puVar3 = *puVar8;
    puVar3[1] = param_2;
  }
  *param_3 = puVar3;
  return;
}


// ===== 0070de5c  FUN_0070de5c =====

void FUN_0070de5c(ulong *param_1,undefined8 param_2,undefined1 param_3,byte param_4,
                 undefined4 param_5,undefined8 param_6)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  auVar7 = FUN_0070c808();
  puVar2 = auVar7._0_8_;
  puVar2[2] = param_6;
  if ((auVar7 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
    puVar3 = (ulong *)*puVar2;
    *(byte *)((long)puVar2 + 10) = *(byte *)((long)puVar2 + 10) & 0xfd;
    uVar6 = *puVar3;
    if (((uint)uVar6 >> 2 & 1) != 0) goto LAB_0070dee0;
LAB_0070df18:
    uVar1 = (uint)uVar6 & 3;
    if (uVar1 != 2) {
      *puVar3 = uVar6 & 0xfffffffffffffff8 | (ulong)(uVar1 + 1);
      *(undefined4 *)((long)puVar3 + (uVar6 & 3) * 4 + 8) = param_5;
      return;
    }
    iVar4 = 2;
  }
  else {
    *(undefined1 *)((long)puVar2 + 9) = 1;
    *(undefined1 *)(puVar2 + 1) = param_3;
    *(byte *)((long)puVar2 + 0xb) = param_4 & 1;
    *(byte *)((long)puVar2 + 10) = *(byte *)((long)puVar2 + 10) | 1;
    uVar6 = *param_1;
    if (uVar6 == 0) {
      puVar3 = (ulong *)operator_new(0x10);
      *puVar3 = 0;
    }
    else {
      puVar3 = (ulong *)FUN_006fdbf0(uVar6,0x10);
      *puVar3 = uVar6;
    }
    *puVar2 = puVar3;
    uVar6 = *puVar3;
    if (((uint)uVar6 >> 2 & 1) == 0) goto LAB_0070df18;
LAB_0070dee0:
    iVar4 = (int)puVar3[1];
    if (iVar4 != *(int *)((long)puVar3 + 0xc)) {
      iVar5 = iVar4 + 1;
      goto LAB_0070def0;
    }
  }
  iVar5 = iVar4 + 1;
  FUN_006f7998(puVar3,(uVar6 & 4) == 0,iVar4,iVar5);
  uVar6 = *puVar3;
  iVar4 = (int)puVar3[1];
LAB_0070def0:
  *(int *)(puVar3 + 1) = iVar5;
  *(undefined4 *)((uVar6 & 0xfffffffffffffff8) + (long)iVar4 * 4) = param_5;
  return;
}


// ===== 0070df94  FUN_0070df94 =====

void FUN_0070df94(ulong *param_1,undefined8 param_2,undefined1 param_3,byte param_4,ulong param_5,
                 undefined8 param_6)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  auVar7 = FUN_0070c808();
  puVar2 = auVar7._0_8_;
  puVar2[2] = param_6;
  if ((auVar7 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
    puVar3 = (ulong *)*puVar2;
    *(byte *)((long)puVar2 + 10) = *(byte *)((long)puVar2 + 10) & 0xfd;
    uVar6 = *puVar3;
    if (((uint)uVar6 >> 2 & 1) != 0) goto LAB_0070e018;
LAB_0070e050:
    uVar1 = (uint)uVar6 & 3;
    if (uVar1 != 1) {
      *puVar3 = uVar6 & 0xfffffffffffffff8 | (ulong)(uVar1 + 1);
      puVar3[(uVar6 & 3) + 1] = param_5;
      return;
    }
    iVar4 = 1;
  }
  else {
    *(undefined1 *)((long)puVar2 + 9) = 1;
    *(undefined1 *)(puVar2 + 1) = param_3;
    *(byte *)((long)puVar2 + 0xb) = param_4 & 1;
    *(byte *)((long)puVar2 + 10) = *(byte *)((long)puVar2 + 10) | 1;
    uVar6 = *param_1;
    if (uVar6 == 0) {
      puVar3 = (ulong *)operator_new(0x10);
      *puVar3 = 0;
    }
    else {
      puVar3 = (ulong *)FUN_006fdbf0(uVar6,0x10);
      *puVar3 = uVar6;
    }
    *puVar2 = puVar3;
    uVar6 = *puVar3;
    if (((uint)uVar6 >> 2 & 1) == 0) goto LAB_0070e050;
LAB_0070e018:
    iVar4 = (int)puVar3[1];
    if (iVar4 != *(int *)((long)puVar3 + 0xc)) {
      iVar5 = iVar4 + 1;
      goto LAB_0070e028;
    }
  }
  iVar5 = iVar4 + 1;
  FUN_006f8408(puVar3,(uVar6 & 4) == 0,iVar4,iVar5);
  uVar6 = *puVar3;
  iVar4 = (int)puVar3[1];
LAB_0070e028:
  *(int *)(puVar3 + 1) = iVar5;
  *(ulong *)((uVar6 & 0xfffffffffffffff8) + (long)iVar4 * 8) = param_5;
  return;
}


// ===== 0070e0cc  FUN_0070e0cc =====

void FUN_0070e0cc(ulong *param_1,undefined8 param_2,undefined1 param_3,byte param_4,
                 undefined4 param_5,undefined8 param_6)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  auVar7 = FUN_0070c808();
  puVar2 = auVar7._0_8_;
  puVar2[2] = param_6;
  if ((auVar7 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
    puVar3 = (ulong *)*puVar2;
    *(byte *)((long)puVar2 + 10) = *(byte *)((long)puVar2 + 10) & 0xfd;
    uVar6 = *puVar3;
    if (((uint)uVar6 >> 2 & 1) != 0) goto LAB_0070e150;
LAB_0070e188:
    uVar1 = (uint)uVar6 & 3;
    if (uVar1 != 2) {
      *puVar3 = uVar6 & 0xfffffffffffffff8 | (ulong)(uVar1 + 1);
      *(undefined4 *)((long)puVar3 + (uVar6 & 3) * 4 + 8) = param_5;
      return;
    }
    iVar4 = 2;
  }
  else {
    *(undefined1 *)((long)puVar2 + 9) = 1;
    *(undefined1 *)(puVar2 + 1) = param_3;
    *(byte *)((long)puVar2 + 0xb) = param_4 & 1;
    *(byte *)((long)puVar2 + 10) = *(byte *)((long)puVar2 + 10) | 1;
    uVar6 = *param_1;
    if (uVar6 == 0) {
      puVar3 = (ulong *)operator_new(0x10);
      *puVar3 = 0;
    }
    else {
      puVar3 = (ulong *)FUN_006fdbf0(uVar6,0x10);
      *puVar3 = uVar6;
    }
    *puVar2 = puVar3;
    uVar6 = *puVar3;
    if (((uint)uVar6 >> 2 & 1) == 0) goto LAB_0070e188;
LAB_0070e150:
    iVar4 = (int)puVar3[1];
    if (iVar4 != *(int *)((long)puVar3 + 0xc)) {
      iVar5 = iVar4 + 1;
      goto LAB_0070e160;
    }
  }
  iVar5 = iVar4 + 1;
  FUN_006f7ed0(puVar3,(uVar6 & 4) == 0,iVar4,iVar5);
  uVar6 = *puVar3;
  iVar4 = (int)puVar3[1];
LAB_0070e160:
  *(int *)(puVar3 + 1) = iVar5;
  *(undefined4 *)((uVar6 & 0xfffffffffffffff8) + (long)iVar4 * 4) = param_5;
  return;
}


// ===== 0070e204  FUN_0070e204 =====

void FUN_0070e204(ulong *param_1,undefined8 param_2,undefined1 param_3,byte param_4,ulong param_5,
                 undefined8 param_6)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  auVar7 = FUN_0070c808();
  puVar2 = auVar7._0_8_;
  puVar2[2] = param_6;
  if ((auVar7 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
    puVar3 = (ulong *)*puVar2;
    *(byte *)((long)puVar2 + 10) = *(byte *)((long)puVar2 + 10) & 0xfd;
    uVar6 = *puVar3;
    if (((uint)uVar6 >> 2 & 1) != 0) goto LAB_0070e288;
LAB_0070e2c0:
    uVar1 = (uint)uVar6 & 3;
    if (uVar1 != 1) {
      *puVar3 = uVar6 & 0xfffffffffffffff8 | (ulong)(uVar1 + 1);
      puVar3[(uVar6 & 3) + 1] = param_5;
      return;
    }
    iVar4 = 1;
  }
  else {
    *(undefined1 *)((long)puVar2 + 9) = 1;
    *(undefined1 *)(puVar2 + 1) = param_3;
    *(byte *)((long)puVar2 + 0xb) = param_4 & 1;
    *(byte *)((long)puVar2 + 10) = *(byte *)((long)puVar2 + 10) | 1;
    uVar6 = *param_1;
    if (uVar6 == 0) {
      puVar3 = (ulong *)operator_new(0x10);
      *puVar3 = 0;
    }
    else {
      puVar3 = (ulong *)FUN_006fdbf0(uVar6,0x10);
      *puVar3 = uVar6;
    }
    *puVar2 = puVar3;
    uVar6 = *puVar3;
    if (((uint)uVar6 >> 2 & 1) == 0) goto LAB_0070e2c0;
LAB_0070e288:
    iVar4 = (int)puVar3[1];
    if (iVar4 != *(int *)((long)puVar3 + 0xc)) {
      iVar5 = iVar4 + 1;
      goto LAB_0070e298;
    }
  }
  iVar5 = iVar4 + 1;
  FUN_006f8940(puVar3,(uVar6 & 4) == 0,iVar4,iVar5);
  uVar6 = *puVar3;
  iVar4 = (int)puVar3[1];
LAB_0070e298:
  *(int *)(puVar3 + 1) = iVar5;
  *(ulong *)((uVar6 & 0xfffffffffffffff8) + (long)iVar4 * 8) = param_5;
  return;
}


// ===== 0070e33c  FUN_0070e33c =====

void FUN_0070e33c(ulong *param_1,undefined8 param_2,undefined1 param_3,byte param_4,byte param_5,
                 undefined8 param_6)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  auVar7 = FUN_0070c808();
  puVar2 = auVar7._0_8_;
  puVar2[2] = param_6;
  if ((auVar7 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
    puVar3 = (ulong *)*puVar2;
    *(byte *)((long)puVar2 + 10) = *(byte *)((long)puVar2 + 10) & 0xfd;
    uVar6 = *puVar3;
    if (((uint)uVar6 >> 2 & 1) != 0) goto LAB_0070e3c0;
LAB_0070e3fc:
    uVar1 = (uint)uVar6 & 3;
    if (uVar1 != 3) {
      *puVar3 = uVar6 & 0xfffffffffffffff8 | (ulong)(uVar1 + 1);
      *(byte *)((long)puVar3 + (uVar6 & 3) + 8) = param_5 & 1;
      return;
    }
    iVar4 = 3;
  }
  else {
    *(undefined1 *)((long)puVar2 + 9) = 1;
    *(undefined1 *)(puVar2 + 1) = param_3;
    *(byte *)((long)puVar2 + 0xb) = param_4 & 1;
    *(byte *)((long)puVar2 + 10) = *(byte *)((long)puVar2 + 10) | 1;
    uVar6 = *param_1;
    if (uVar6 == 0) {
      puVar3 = (ulong *)operator_new(0x10);
      *puVar3 = 0;
    }
    else {
      puVar3 = (ulong *)FUN_006fdbf0(uVar6,0x10);
      *puVar3 = uVar6;
    }
    *puVar2 = puVar3;
    uVar6 = *puVar3;
    if (((uint)uVar6 >> 2 & 1) == 0) goto LAB_0070e3fc;
LAB_0070e3c0:
    iVar4 = (int)puVar3[1];
    if (iVar4 != *(int *)((long)puVar3 + 0xc)) {
      iVar5 = iVar4 + 1;
      goto LAB_0070e3d0;
    }
  }
  iVar5 = iVar4 + 1;
  FUN_006f9538(puVar3,(uVar6 & 4) == 0,iVar4,iVar5);
  uVar6 = *puVar3;
  iVar4 = (int)puVar3[1];
LAB_0070e3d0:
  *(int *)(puVar3 + 1) = iVar5;
  *(byte *)((uVar6 & 0xfffffffffffffff8) + (long)iVar4) = param_5 & 1;
  return;
}


// ===== 0070e47c  FUN_0070e47c =====

void FUN_0070e47c(undefined4 param_1,ulong *param_2,undefined8 param_3,undefined1 param_4,
                 byte param_5,undefined8 param_6)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  auVar7 = FUN_0070c808();
  puVar2 = auVar7._0_8_;
  puVar2[2] = param_6;
  if ((auVar7 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
    puVar3 = (ulong *)*puVar2;
    *(byte *)((long)puVar2 + 10) = *(byte *)((long)puVar2 + 10) & 0xfd;
    uVar6 = *puVar3;
    if (((uint)uVar6 >> 2 & 1) != 0) goto LAB_0070e504;
LAB_0070e53c:
    uVar1 = (uint)uVar6 & 3;
    if (uVar1 != 2) {
      *puVar3 = uVar6 & 0xfffffffffffffff8 | (ulong)(uVar1 + 1);
      *(undefined4 *)((long)puVar3 + (uVar6 & 3) * 4 + 8) = param_1;
      return;
    }
    iVar4 = 2;
  }
  else {
    *(undefined1 *)((long)puVar2 + 9) = 1;
    *(undefined1 *)(puVar2 + 1) = param_4;
    *(byte *)((long)puVar2 + 0xb) = param_5 & 1;
    *(byte *)((long)puVar2 + 10) = *(byte *)((long)puVar2 + 10) | 1;
    uVar6 = *param_2;
    if (uVar6 == 0) {
      puVar3 = (ulong *)operator_new(0x10);
      *puVar3 = 0;
    }
    else {
      puVar3 = (ulong *)FUN_006fdbf0(uVar6,0x10);
      *puVar3 = uVar6;
    }
    *puVar2 = puVar3;
    uVar6 = *puVar3;
    if (((uint)uVar6 >> 2 & 1) == 0) goto LAB_0070e53c;
LAB_0070e504:
    iVar4 = (int)puVar3[1];
    if (iVar4 != *(int *)((long)puVar3 + 0xc)) {
      iVar5 = iVar4 + 1;
      goto LAB_0070e514;
    }
  }
  iVar5 = iVar4 + 1;
  FUN_006fa564(puVar3,(uVar6 & 4) == 0,iVar4,iVar5);
  uVar6 = *puVar3;
  iVar4 = (int)puVar3[1];
LAB_0070e514:
  *(int *)(puVar3 + 1) = iVar5;
  *(undefined4 *)((uVar6 & 0xfffffffffffffff8) + (long)iVar4 * 4) = param_1;
  return;
}


// ===== 0070e5bc  FUN_0070e5bc =====

void FUN_0070e5bc(ulong param_1,ulong *param_2,undefined8 param_3,undefined1 param_4,byte param_5,
                 undefined8 param_6)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  auVar7 = FUN_0070c808();
  puVar2 = auVar7._0_8_;
  puVar2[2] = param_6;
  if ((auVar7 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
    puVar3 = (ulong *)*puVar2;
    *(byte *)((long)puVar2 + 10) = *(byte *)((long)puVar2 + 10) & 0xfd;
    uVar6 = *puVar3;
    if (((uint)uVar6 >> 2 & 1) != 0) goto LAB_0070e644;
LAB_0070e67c:
    uVar1 = (uint)uVar6 & 3;
    if (uVar1 != 1) {
      *puVar3 = uVar6 & 0xfffffffffffffff8 | (ulong)(uVar1 + 1);
      puVar3[(uVar6 & 3) + 1] = param_1;
      return;
    }
    iVar4 = 1;
  }
  else {
    *(undefined1 *)((long)puVar2 + 9) = 1;
    *(undefined1 *)(puVar2 + 1) = param_4;
    *(byte *)((long)puVar2 + 0xb) = param_5 & 1;
    *(byte *)((long)puVar2 + 10) = *(byte *)((long)puVar2 + 10) | 1;
    uVar6 = *param_2;
    if (uVar6 == 0) {
      puVar3 = (ulong *)operator_new(0x10);
      *puVar3 = 0;
    }
    else {
      puVar3 = (ulong *)FUN_006fdbf0(uVar6,0x10);
      *puVar3 = uVar6;
    }
    *puVar2 = puVar3;
    uVar6 = *puVar3;
    if (((uint)uVar6 >> 2 & 1) == 0) goto LAB_0070e67c;
LAB_0070e644:
    iVar4 = (int)puVar3[1];
    if (iVar4 != *(int *)((long)puVar3 + 0xc)) {
      iVar5 = iVar4 + 1;
      goto LAB_0070e654;
    }
  }
  iVar5 = iVar4 + 1;
  FUN_006faa1c(puVar3,(uVar6 & 4) == 0,iVar4,iVar5);
  uVar6 = *puVar3;
  iVar4 = (int)puVar3[1];
LAB_0070e654:
  *(int *)(puVar3 + 1) = iVar5;
  *(ulong *)((uVar6 & 0xfffffffffffffff8) + (long)iVar4 * 8) = param_1;
  return;
}


// ===== 0070e6fc  FUN_0070e6fc =====

void FUN_0070e6fc(long param_1,char *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  ulong *puVar3;
  long lVar4;
  ulong *puVar5;
  char cVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  ulong *puVar10;
  long lVar11;
  int iVar12;
  ulong uVar13;
  int iVar14;
  ulong *puVar15;
  int iVar16;
  int iVar17;
  undefined1 auVar18 [16];
  undefined1 *local_98;
  undefined1 *local_90;
  ulong uStack_88;
  undefined8 local_80;
  undefined2 local_78;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  cVar6 = *param_2;
  if (cVar6 < '\0') {
    auVar18 = FUN_006f6214(param_2,cVar6);
  }
  else {
    auVar18[8] = cVar6;
    auVar18._0_8_ = param_2 + 1;
    auVar18._9_7_ = 0;
  }
  puVar10 = auVar18._0_8_;
  if (puVar10 == (ulong *)0x0) {
    puVar10 = (ulong *)0x0;
  }
  else {
    puVar15 = *(ulong **)(param_1 + 8);
    iVar16 = (int)puVar15 - auVar18._0_4_;
    iVar14 = auVar18._8_4_;
    if (iVar16 < iVar14) {
      do {
        puVar10 = auVar18._0_8_;
        if (puVar10 < puVar15) {
          puVar3 = (ulong *)*param_3;
          pcVar9 = (code *)param_3[1];
          lVar4 = param_3[2];
          puVar5 = (ulong *)param_3[3];
          lVar8 = param_3[4];
          do {
            local_90 = &DAT_aaaaaaaaaaaaaaaa;
            uVar13 = *puVar10;
            if (((uint)uVar13 >> 7 & 1) == 0) {
              local_90 = (undefined1 *)(uVar13 & 0x7f);
              puVar10 = (ulong *)((long)puVar10 + 1);
            }
            else if (((uint)uVar13 >> 0xf & 1) == 0) {
              puVar10 = (ulong *)((long)puVar10 + 2);
              local_90 = (undefined1 *)(uVar13 & 0x7f | (uVar13 >> 8 & 0x7f) << 7);
            }
            else {
              puVar10 = (ulong *)FUN_0070ec64(puVar10,&local_90);
            }
            if (puVar10 == (ulong *)0x0) goto LAB_0070ebfc;
            iVar14 = (int)local_90;
            if (pcVar9 == (code *)0x0) {
              uVar13 = FUN_0071211c((ulong)local_90 & 0xffffffff,lVar4);
              if ((uVar13 & 1) == 0) goto LAB_0070e824;
LAB_0070e7e0:
              uVar13 = *puVar3;
              if (((uint)uVar13 >> 2 & 1) == 0) {
                uVar1 = (uint)uVar13 & 3;
                if (uVar1 != 2) {
                  *puVar3 = uVar13 & 0xfffffffffffffff8 | (ulong)(uVar1 + 1);
                  *(int *)((long)puVar3 + (uVar13 & 3) * 4 + 8) = iVar14;
                  goto LAB_0070e7a4;
                }
                iVar12 = 2;
LAB_0070e87c:
                iVar17 = iVar12 + 1;
                FUN_006f7998(puVar3,(uVar13 & 4) == 0,iVar12,iVar17);
                uVar13 = *puVar3;
                iVar12 = (int)puVar3[1];
              }
              else {
                iVar12 = (int)puVar3[1];
                if (iVar12 == *(int *)((long)puVar3 + 0xc)) goto LAB_0070e87c;
                iVar17 = iVar12 + 1;
              }
              *(int *)(puVar3 + 1) = iVar17;
              *(int *)((uVar13 & 0xfffffffffffffff8) + (long)iVar12 * 4) = iVar14;
            }
            else {
              uVar13 = (*pcVar9)(lVar4,(ulong)local_90 & 0xffffffff);
              if ((uVar13 & 1) != 0) goto LAB_0070e7e0;
LAB_0070e824:
              uVar13 = *puVar5;
              if ((uVar13 & 1) == 0) {
                lVar11 = FUN_006dcbb4(puVar5);
              }
              else {
                lVar11 = (uVar13 & 0xfffffffffffffffe) + 8;
              }
              FUN_006f5c6c((int)lVar8,(long)iVar14,lVar11);
            }
LAB_0070e7a4:
          } while (puVar10 < puVar15);
          puVar15 = *(ulong **)(param_1 + 8);
        }
        else if (puVar10 == (ulong *)0x0) goto LAB_0070ebfc;
        uVar1 = auVar18._8_4_ - iVar16;
        iVar14 = (int)puVar10 - (int)puVar15;
        if ((int)uVar1 < 0x11) {
          local_78 = 0;
          local_80 = 0;
          uStack_88 = puVar15[1];
          local_90 = (undefined1 *)*puVar15;
          if ((0x1a < uVar1) || (0x1a < (ulong)(long)iVar14)) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(0x5512,0x70ec64);
            (*pcVar9)();
          }
          puVar3 = (ulong *)((long)&local_90 + (ulong)uVar1);
          puVar15 = (ulong *)((long)&local_90 + (long)iVar14);
          if (puVar3 <= puVar15) goto LAB_0070ec38;
          puVar10 = (ulong *)*param_3;
          pcVar9 = (code *)param_3[1];
          lVar8 = param_3[4];
          lVar4 = param_3[2];
          puVar5 = (ulong *)param_3[3];
          goto LAB_0070eaf4;
        }
        if (*(int *)(param_1 + 0x1c) < 0x11) goto LAB_0070ebfc;
        puVar10 = (ulong *)FUN_006f54c0(param_1);
        if (puVar10 == (ulong *)0x0) goto LAB_0070ec04;
        puVar10 = (ulong *)((long)puVar10 + (long)iVar14);
        puVar15 = *(ulong **)(param_1 + 8);
        iVar14 = (auVar18._8_4_ - iVar16) - iVar14;
        auVar18._8_4_ = iVar14;
        auVar18._0_8_ = puVar10;
        auVar18._12_4_ = 0;
        iVar16 = (int)puVar15 - (int)puVar10;
      } while (iVar16 < iVar14);
    }
    puVar15 = (ulong *)((long)puVar10 + (long)iVar14);
    if (puVar10 < puVar15) {
      puVar3 = (ulong *)*param_3;
      pcVar9 = (code *)param_3[1];
      lVar4 = param_3[2];
      puVar5 = (ulong *)param_3[3];
      lVar8 = param_3[4];
      do {
        local_90 = &DAT_aaaaaaaaaaaaaaaa;
        uVar13 = *puVar10;
        if (((uint)uVar13 >> 7 & 1) == 0) {
          local_90 = (undefined1 *)(uVar13 & 0x7f);
          puVar10 = (ulong *)((long)puVar10 + 1);
        }
        else if (((uint)uVar13 >> 0xf & 1) == 0) {
          puVar10 = (ulong *)((long)puVar10 + 2);
          local_90 = (undefined1 *)(uVar13 & 0x7f | (uVar13 >> 8 & 0x7f) << 7);
        }
        else {
          puVar10 = (ulong *)FUN_0070ec64(puVar10,&local_90);
        }
        if (puVar10 == (ulong *)0x0) break;
        iVar16 = (int)local_90;
        if (pcVar9 == (code *)0x0) {
          uVar13 = FUN_0071211c((ulong)local_90 & 0xffffffff,lVar4);
          if ((uVar13 & 1) == 0) goto LAB_0070e92c;
LAB_0070e998:
          uVar13 = *puVar3;
          if (((uint)uVar13 >> 2 & 1) == 0) {
            uVar1 = (uint)uVar13 & 3;
            if (uVar1 != 2) {
              *(int *)((long)puVar3 + (uVar13 & 3) * 4 + 8) = iVar16;
              *puVar3 = uVar13 & 0xfffffffffffffff8 | (ulong)(uVar1 + 1);
              goto LAB_0070e948;
            }
            iVar14 = 2;
LAB_0070ea1c:
            iVar12 = iVar14 + 1;
            FUN_006f7998(puVar3,(uVar13 & 4) == 0,iVar14,iVar12);
            uVar13 = *puVar3;
            iVar14 = (int)puVar3[1];
          }
          else {
            iVar14 = (int)puVar3[1];
            if (iVar14 == *(int *)((long)puVar3 + 0xc)) goto LAB_0070ea1c;
            iVar12 = iVar14 + 1;
          }
          *(int *)(puVar3 + 1) = iVar12;
          *(int *)((uVar13 & 0xfffffffffffffff8) + (long)iVar14 * 4) = iVar16;
        }
        else {
          uVar13 = (*pcVar9)(lVar4,(ulong)local_90 & 0xffffffff);
          if ((uVar13 & 1) != 0) goto LAB_0070e998;
LAB_0070e92c:
          uVar13 = *puVar5;
          if ((uVar13 & 1) == 0) {
            lVar11 = FUN_006dcbb4(puVar5);
          }
          else {
            lVar11 = (uVar13 & 0xfffffffffffffffe) + 8;
          }
          FUN_006f5c6c((int)lVar8,(long)iVar16,lVar11);
        }
LAB_0070e948:
      } while (puVar10 < puVar15);
    }
    if (puVar15 != puVar10) {
      puVar10 = (ulong *)0x0;
    }
  }
LAB_0070ec04:
  if (*(long *)(lVar7 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar10);
LAB_0070eaf4:
  do {
    local_98 = &DAT_aaaaaaaaaaaaaaaa;
    uVar13 = *puVar15;
    if (((uint)uVar13 >> 7 & 1) == 0) {
      local_98 = (undefined1 *)(uVar13 & 0x7f);
      puVar15 = (ulong *)((long)puVar15 + 1);
    }
    else if (((uint)uVar13 >> 0xf & 1) == 0) {
      puVar15 = (ulong *)((long)puVar15 + 2);
      local_98 = (undefined1 *)(uVar13 & 0x7f | (uVar13 >> 8 & 0x7f) << 7);
    }
    else {
      puVar15 = (ulong *)FUN_0070ec64(puVar15,&local_98);
    }
    if (puVar15 == (ulong *)0x0) goto LAB_0070ebfc;
    iVar16 = (int)local_98;
    if (pcVar9 == (code *)0x0) {
      uVar13 = FUN_0071211c((ulong)local_98 & 0xffffffff,lVar4);
      if ((uVar13 & 1) == 0) goto LAB_0070ead0;
LAB_0070eb40:
      uVar13 = *puVar10;
      if (((uint)uVar13 >> 2 & 1) == 0) {
        uVar2 = (uint)uVar13 & 3;
        if (uVar2 != 2) {
          *(int *)((long)puVar10 + (uVar13 & 3) * 4 + 8) = iVar16;
          *puVar10 = uVar13 & 0xfffffffffffffff8 | (ulong)(uVar2 + 1);
          goto LAB_0070eaec;
        }
        iVar14 = 2;
LAB_0070ebc4:
        iVar12 = iVar14 + 1;
        FUN_006f7998(puVar10,(uVar13 & 4) == 0,iVar14,iVar12);
        uVar13 = *puVar10;
        iVar14 = (int)puVar10[1];
      }
      else {
        iVar14 = (int)puVar10[1];
        if (iVar14 == *(int *)((long)puVar10 + 0xc)) goto LAB_0070ebc4;
        iVar12 = iVar14 + 1;
      }
      *(int *)(puVar10 + 1) = iVar12;
      *(int *)((uVar13 & 0xfffffffffffffff8) + (long)iVar14 * 4) = iVar16;
    }
    else {
      uVar13 = (*pcVar9)(lVar4,(ulong)local_98 & 0xffffffff);
      if ((uVar13 & 1) != 0) goto LAB_0070eb40;
LAB_0070ead0:
      uVar13 = *puVar5;
      if ((uVar13 & 1) == 0) {
        lVar11 = FUN_006dcbb4(puVar5);
      }
      else {
        lVar11 = (uVar13 & 0xfffffffffffffffe) + 8;
      }
      FUN_006f5c6c((int)lVar8,(long)iVar16,lVar11);
    }
LAB_0070eaec:
  } while (puVar15 < puVar3);
LAB_0070ec38:
  puVar10 = (ulong *)0x0;
  if ((puVar15 != (ulong *)0x0) && (puVar15 == puVar3)) {
    puVar10 = (ulong *)(*(long *)(param_1 + 8) + (ulong)uVar1);
  }
  goto LAB_0070ec04;
LAB_0070ebfc:
  puVar10 = (ulong *)0x0;
  goto LAB_0070ec04;
}


// ===== 0070ec64  FUN_0070ec64 =====

long FUN_0070ec64(long param_1,ulong *param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = *(ulong *)(param_1 + 2);
  uVar2 = (uVar1 ^ 0xffffffffffffffff) & 0x8080808080808080;
  if (uVar2 != 0) {
    uVar2 = uVar2 >> 7;
    uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    uVar3 = LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20);
    uVar2 = param_3 & 0x7f | (param_3 >> 8 & 0x7f) << 7 |
            (param_3 >> 0x10 & 0x7f | (param_3 >> 0x18 & 0x7f) << 7) << 0xe |
            (param_3 >> 0x20 & 0x7f | (param_3 >> 0x28 & 0x7f) << 7) << 0x1c;
    if (((uint)uVar3 >> 5 & 1) != 0) {
      uVar2 = (param_3 >> 0x30 & 0x7f | (param_3 >> 0x38 & 0x7f) << 7) << 0x2a |
              (uVar1 >> 0x30 & 0x7f | (uVar1 >> 0x38 & 0x7f) << 7) << 0x38 | uVar2;
    }
    *param_2 = uVar2 & (-0x4000L << (uVar3 - (uVar3 >> 3) & 0x3f) ^ 0xffffffffffffffffU);
    return param_1 + (uVar3 >> 3) + 3;
  }
  *param_2 = 0;
  return 0;
}


// ===== 0070ed04  FUN_0070ed04 =====

void FUN_0070ed04(ulong *param_1)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  uVar1 = (uint)param_1[1];
  puVar2 = param_1;
  if ((*param_1 & 1) != 0) {
    puVar2 = (ulong *)(*param_1 + 7);
  }
  if ((int)uVar1 < 2) {
    uVar1 = 1;
  }
  uVar3 = (ulong)uVar1;
  do {
    while( true ) {
      puVar4 = (undefined8 *)*puVar2;
      if (-1 < *(char *)((long)puVar4 + 0x17)) break;
      *(undefined1 *)*puVar4 = 0;
      puVar4[1] = 0;
      uVar3 = uVar3 - 1;
      puVar2 = puVar2 + 1;
      if (uVar3 == 0) goto LAB_0070ed58;
    }
    *(undefined1 *)puVar4 = 0;
    *(undefined1 *)((long)puVar4 + 0x17) = 0;
    uVar3 = uVar3 - 1;
    puVar2 = puVar2 + 1;
  } while (uVar3 != 0);
LAB_0070ed58:
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}


// ===== 0070ed60  FUN_0070ed60 =====

void FUN_0070ed60(ulong *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  ulong *puVar7;
  
  if (param_1[2] == 0) {
    uVar2 = *param_1;
    uVar3 = uVar2 & 1;
    if ((uVar2 & 1) == 0) {
      uVar5 = (uint)(uVar2 != 0);
    }
    else {
      uVar5 = *(uint *)(uVar2 + 3);
    }
    puVar1 = param_1;
    if (uVar3 != 0) {
      puVar1 = (ulong *)(uVar2 + 7);
    }
    if (0 < (int)uVar5) {
      uVar2 = (ulong)uVar5;
      iVar6 = 5;
      puVar7 = puVar1;
      do {
        if (iVar6 < (int)uVar5) {
          Hint_Prefetch(puVar1[iVar6],0,0,1);
        }
        puVar4 = (undefined8 *)*puVar7;
        if (puVar4 != (undefined8 *)0x0) {
          if (*(char *)((long)puVar4 + 0x17) < '\0') {
            operator_delete((void *)*puVar4);
          }
          operator_delete(puVar4);
        }
        uVar2 = uVar2 - 1;
        iVar6 = iVar6 + 1;
        puVar7 = puVar7 + 1;
      } while (uVar2 != 0);
      uVar2 = *param_1;
      uVar3 = uVar2 & 1;
    }
    if (uVar3 != 0) {
      operator_delete((void *)(uVar2 - 1));
      return;
    }
  }
  return;
}


// ===== 0070ee68  FUN_0070ee68 =====

void FUN_0070ee68(undefined1 (*param_1) [12],long *param_2,int *param_3,undefined8 param_4)

{
  void *pvVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  undefined1 auVar8 [12];
  
  if (param_2[2] == 0) {
    pvVar1 = operator_new(0x30);
    *(void **)pvVar1 = pvVar1;
    *param_2 = (long)pvVar1;
    param_2[1] = (long)pvVar1;
    *(undefined4 *)((long)pvVar1 + 8) = 0x1000000;
  }
  plVar2 = param_2;
  do {
    plVar2 = (long *)*plVar2;
    uVar6 = (ulong)*(byte *)((long)plVar2 + 10);
    if (uVar6 == 0) {
      uVar5 = 0;
    }
    else {
      uVar4 = 0;
      plVar7 = plVar2 + 2;
      do {
        uVar5 = uVar4;
        if (*param_3 <= (int)*plVar7) break;
        uVar4 = uVar4 + 1;
        uVar5 = uVar6;
        plVar7 = plVar7 + 4;
      } while (uVar6 != uVar4);
    }
    if (*(char *)((long)plVar2 + 0xb) != '\0') break;
    plVar2 = plVar2 + (uVar5 & 0xff) + 0x1e;
  } while( true );
  uVar6 = uVar5 & 0xffffffff;
  plVar7 = plVar2;
  do {
    uVar3 = (uint)uVar5;
    if (uVar3 != *(byte *)((long)plVar7 + 10)) {
      if ((plVar7 != (long *)0x0) && ((int)plVar7[(long)(int)uVar3 * 4 + 2] <= *param_3)) {
        *(long **)*param_1 = plVar7;
        *(uint *)(*param_1 + 8) = uVar3;
        *(undefined4 *)param_1[1] = 0xaaaaaaaa;
        param_1[1][4] = 0;
        return;
      }
      break;
    }
    uVar5 = (ulong)*(byte *)(plVar7 + 1);
    plVar7 = (long *)*plVar7;
  } while (*(char *)((long)plVar7 + 0xb) == '\0');
  auVar8 = FUN_0070ef8c(param_2,plVar2,uVar6 | 0xaaaaaaaa00000000,param_4);
  *param_1 = auVar8;
  param_1[1][4] = 1;
  return;
}


// ===== 0070ef8c  FUN_0070ef8c =====

undefined1  [16] FUN_0070ef8c(undefined8 *param_1,void *param_2,ulong param_3,undefined4 *param_4)

{
  byte bVar1;
  undefined4 *puVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  void *pvVar8;
  void *pvVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  void *local_50;
  uint local_48;
  undefined4 uStack_44;
  
  local_48 = (uint)param_3;
  uStack_44 = (undefined4)(param_3 >> 0x20);
  bVar3 = *(byte *)((long)param_2 + 0xb);
  local_50 = param_2;
  if (bVar3 == 0) {
    param_2 = (void *)((long)param_2 + (param_3 & 0xff) * 8);
    while (local_50 = *(void **)((long)param_2 + 0xf0), *(char *)((long)local_50 + 0xb) == '\0') {
      param_2 = (void *)((long)local_50 + (ulong)*(byte *)((long)local_50 + 10) * 8);
    }
    local_48 = (uint)*(byte *)((long)local_50 + 10);
    bVar3 = *(byte *)((long)local_50 + 0xb);
  }
  pvVar8 = local_50;
  uVar6 = 7;
  if (bVar3 != 0) {
    uVar6 = (uint)bVar3;
  }
  if (*(byte *)((long)local_50 + 10) == uVar6) {
    if (uVar6 < 7) {
      uVar6 = (uVar6 & 0x7f) << 1;
      if (6 < uVar6) {
        uVar6 = 7;
      }
      pvVar9 = operator_new((ulong)(uVar6 << 5 | 0x10));
      *(void **)pvVar9 = pvVar9;
      *(undefined2 *)((long)pvVar9 + 8) = 0;
      *(char *)((long)pvVar9 + 0xb) = (char)uVar6;
      bVar3 = *(byte *)((long)pvVar8 + 10);
      if ((ulong)bVar3 != 0) {
        lVar10 = (ulong)bVar3 << 5;
        puVar11 = (undefined8 *)((long)pvVar8 + 0x10);
        puVar12 = (undefined8 *)((long)pvVar9 + 0x10);
        do {
          uVar16 = *puVar11;
          uVar15 = puVar11[3];
          uVar14 = puVar11[2];
          lVar10 = lVar10 + -0x20;
          puVar12[1] = puVar11[1];
          *puVar12 = uVar16;
          puVar12[3] = uVar15;
          puVar12[2] = uVar14;
          puVar11 = puVar11 + 4;
          puVar12 = puVar12 + 4;
        } while (lVar10 != 0);
      }
      *(byte *)((long)pvVar9 + 10) = bVar3;
      *(undefined1 *)((long)pvVar8 + 10) = 0;
      local_50 = pvVar9;
      FUN_0070d9e0(pvVar8,param_1 + 1);
      *param_1 = pvVar9;
      param_1[1] = pvVar9;
    }
    else {
      FUN_0070f154(param_1,&local_50);
    }
  }
  pvVar8 = local_50;
  bVar3 = (byte)local_48;
  uVar13 = local_48 & 0xff;
  uVar6 = *(byte *)((long)local_50 + 10) - uVar13;
  if (uVar13 <= *(byte *)((long)local_50 + 10) && uVar6 != 0) {
    memmove((void *)((long)local_50 + (ulong)(byte)local_48 * 0x20 + 0x30),
            (void *)((long)local_50 + (ulong)(byte)local_48 * 0x20 + 0x10),(ulong)uVar6 << 5);
  }
  puVar2 = (undefined4 *)((long)pvVar8 + (ulong)bVar3 * 0x20 + 0x10);
  if (puVar2 != (undefined4 *)0x0) {
    cVar4 = *(char *)((long)pvVar8 + 10);
    cVar5 = *(char *)((long)pvVar8 + 0xb);
    *puVar2 = *param_4;
    uVar15 = *(undefined8 *)(param_4 + 4);
    uVar14 = *(undefined8 *)(param_4 + 2);
    *(undefined8 *)((long)pvVar8 + (ulong)bVar3 * 0x20 + 0x28) = *(undefined8 *)(param_4 + 6);
    bVar1 = cVar4 + 1;
    *(undefined8 *)((long)pvVar8 + (ulong)bVar3 * 0x20 + 0x20) = uVar15;
    *(undefined8 *)((long)pvVar8 + (ulong)bVar3 * 0x20 + 0x18) = uVar14;
    *(byte *)((long)pvVar8 + 10) = bVar1;
    if (cVar5 == '\0') {
      while (uVar13 + 1 < (uint)bVar1) {
        lVar10 = *(long *)((long)pvVar8 + (ulong)(byte)(bVar1 - 1) * 8 + 0xf0);
        *(long *)((long)pvVar8 + (ulong)bVar1 * 8 + 0xf0) = lVar10;
        *(byte *)(lVar10 + 8) = bVar1;
        bVar1 = bVar1 - 1;
      }
    }
    auVar7._8_4_ = local_48;
    auVar7._0_8_ = local_50;
    auVar7._12_4_ = uStack_44;
    param_1[2] = param_1[2] + 1;
    return auVar7;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0070f154  FUN_0070f154 =====

void FUN_0070f154(undefined8 *param_1,long *param_2)

{
  bool bVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  void *pvVar11;
  undefined8 *puVar12;
  void *local_50;
  uint local_48;
  undefined4 uStack_44;
  
  puVar9 = (undefined8 *)*param_2;
  pvVar11 = (void *)*puVar9;
  if (puVar9 == (undefined8 *)*param_1) {
    puVar12 = (undefined8 *)operator_new(0x130);
    *puVar12 = pvVar11;
    *(undefined4 *)(puVar12 + 1) = 0;
    puVar12[0x1e] = puVar9;
    *(undefined1 *)(puVar9 + 1) = 0;
    *puVar9 = puVar12;
    *param_1 = puVar12;
    puVar9 = (undefined8 *)*param_2;
LAB_0070f2e4:
    cVar5 = *(char *)(puVar9 + 1);
    if (*(char *)((long)puVar9 + 0xb) == '\0') {
      puVar10 = (undefined8 *)operator_new(0x130);
      lVar7 = param_2[1];
      *puVar10 = puVar12;
      *(char *)(puVar10 + 1) = cVar5 + '\x01';
      *(undefined2 *)((long)puVar10 + 9) = 0;
      *(undefined1 *)((long)puVar10 + 0xb) = 0;
      FUN_0070f670(puVar9,(int)lVar7,puVar10,param_1 + 1);
    }
    else {
      puVar10 = (undefined8 *)operator_new(0xf0);
      lVar7 = param_2[1];
      *puVar10 = puVar12;
      *(char *)(puVar10 + 1) = cVar5 + '\x01';
      *(undefined2 *)((long)puVar10 + 9) = 0;
      *(undefined1 *)((long)puVar10 + 0xb) = 7;
      FUN_0070f670(puVar9,(int)lVar7,puVar10,param_1 + 1);
      if (param_1[1] == *param_2) {
        param_1[1] = puVar10;
      }
    }
  }
  else {
    bVar3 = *(byte *)(puVar9 + 1);
    if (bVar3 != 0) {
      puVar10 = *(undefined8 **)((long)pvVar11 + (ulong)(byte)(bVar3 - 1) * 8 + 0xf0);
      bVar4 = *(byte *)((long)puVar10 + 10);
      if (bVar4 < 7) {
        uVar6 = (7 - bVar4 & 0xff) >> (*(byte *)(param_2 + 1) < 7);
        if (uVar6 < 2) {
          uVar6 = 1;
        }
        if (uVar6 <= *(byte *)(param_2 + 1) || (uVar6 + bVar4 & 0xff) < 7) {
          FUN_0070f3b0(puVar10,uVar6,puVar9,param_1 + 1);
          iVar8 = *(byte *)(param_2 + 1) - uVar6;
          *(int *)(param_2 + 1) = iVar8;
          if (-1 < iVar8) {
            return;
          }
          iVar8 = iVar8 + (uint)*(byte *)((long)puVar10 + 10) + 1;
          goto LAB_0070f38c;
        }
      }
    }
    if ((uint)*(byte *)((long)pvVar11 + 10) <= (uint)bVar3) {
LAB_0070f290:
      puVar12 = (undefined8 *)pvVar11;
      if (*(byte *)((long)pvVar11 + 10) == 7) {
        _local_48 = CONCAT44(0xaaaaaaaa,(uint)bVar3);
        local_50 = pvVar11;
        FUN_0070f154(param_1,&local_50);
        puVar9 = (undefined8 *)*param_2;
        puVar12 = (undefined8 *)*puVar9;
      }
      goto LAB_0070f2e4;
    }
    puVar10 = *(undefined8 **)((long)pvVar11 + (ulong)(byte)(bVar3 + 1) * 8 + 0xf0);
    bVar4 = *(byte *)((long)puVar10 + 10);
    if (6 < bVar4) goto LAB_0070f290;
    uVar6 = (7 - bVar4 & 0xff) >> (0 < (int)*(uint *)(param_2 + 1));
    if (uVar6 < 2) {
      uVar6 = 1;
    }
    uVar2 = uVar6 + bVar4 & 0xff;
    bVar1 = (int)(*(uint *)(param_2 + 1) & 0xff) <= (int)(*(byte *)((long)puVar9 + 10) - uVar6);
    if ((!bVar1 && 5 < uVar2) && (bVar1 || uVar2 != 6)) goto LAB_0070f290;
    FUN_0070f4f8(puVar9,uVar6,puVar10,param_1 + 1);
  }
  if ((int)param_2[1] <= (int)(uint)*(byte *)(*param_2 + 10)) {
    return;
  }
  iVar8 = (int)param_2[1] + ~(uint)*(byte *)(*param_2 + 10);
LAB_0070f38c:
  *(int *)(param_2 + 1) = iVar8;
  *param_2 = (long)puVar10;
  return;
}


// ===== 0070f3b0  FUN_0070f3b0 =====

void FUN_0070f3b0(long *param_1,uint param_2,long param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  char cVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  
  uVar6 = (ulong)*(byte *)(param_1 + 1);
  lVar8 = *param_1;
  uVar3 = param_2 & 0xff;
  uVar10 = (ulong)*(byte *)((long)param_1 + 10);
  uVar4 = uVar3 - 1;
  lVar9 = lVar8 + uVar6 * 0x20;
  lVar12 = *(long *)(lVar9 + 0x10);
  lVar17 = *(long *)(lVar9 + 0x28);
  lVar15 = *(long *)(lVar9 + 0x20);
  param_1[uVar10 * 4 + 3] = *(long *)(lVar9 + 0x18);
  param_1[uVar10 * 4 + 2] = lVar12;
  param_1[uVar10 * 4 + 5] = lVar17;
  param_1[uVar10 * 4 + 4] = lVar15;
  if (uVar4 != 0) {
    uVar6 = -(ulong)(uVar4 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar4 << 5;
    lVar9 = uVar10 * 0x20 + 0x30;
    puVar5 = (undefined8 *)(param_3 + 0x10);
    do {
      uVar16 = *puVar5;
      uVar14 = puVar5[3];
      uVar13 = puVar5[2];
      puVar2 = (undefined8 *)((long)param_1 + lVar9);
      uVar6 = uVar6 - 0x20;
      lVar9 = lVar9 + 0x20;
      puVar2[1] = puVar5[1];
      *puVar2 = uVar16;
      puVar2[3] = uVar14;
      puVar2[2] = uVar13;
      puVar5 = puVar5 + 4;
    } while (uVar6 != 0);
    lVar8 = *param_1;
    uVar6 = (ulong)*(byte *)(param_1 + 1);
  }
  puVar5 = (undefined8 *)(param_3 + 0x10) + (long)(int)uVar4 * 4;
  lVar8 = lVar8 + uVar6 * 0x20;
  uVar16 = *puVar5;
  uVar14 = puVar5[3];
  uVar13 = puVar5[2];
  uVar6 = (ulong)param_2 & 0xff;
  *(undefined8 *)(lVar8 + 0x18) = puVar5[1];
  *(undefined8 *)(lVar8 + 0x10) = uVar16;
  *(undefined8 *)(lVar8 + 0x28) = uVar14;
  *(undefined8 *)(lVar8 + 0x20) = uVar13;
  if ((uint)*(byte *)(param_3 + 10) != (param_2 & 0xff)) {
    uVar4 = *(byte *)(param_3 + 10) - uVar3;
    uVar10 = -(ulong)(uVar4 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar4 << 5;
    puVar5 = (undefined8 *)(param_3 + 0x10);
    do {
      puVar2 = puVar5 + uVar6 * 4;
      uVar10 = uVar10 - 0x20;
      uVar16 = *puVar2;
      uVar14 = puVar2[3];
      uVar13 = puVar2[2];
      puVar5[1] = puVar2[1];
      *puVar5 = uVar16;
      puVar5[3] = uVar14;
      puVar5[2] = uVar13;
      puVar5 = puVar5 + 4;
    } while (uVar10 != 0);
  }
  if (*(char *)((long)param_1 + 0xb) == '\0') {
    if ((param_2 & 0xff) != 0) {
      cVar7 = '\x01';
      puVar5 = (undefined8 *)(param_3 + 0xf0);
      do {
        plVar11 = (long *)*puVar5;
        uVar6 = uVar6 - 1;
        bVar1 = *(char *)((long)param_1 + 10) + cVar7;
        cVar7 = cVar7 + '\x01';
        param_1[(ulong)bVar1 + 0x1e] = (long)plVar11;
        *(byte *)(plVar11 + 1) = bVar1;
        *plVar11 = (long)param_1;
        puVar5 = puVar5 + 1;
      } while (uVar6 != 0);
    }
    if ((param_2 & 0xff) <= (uint)*(byte *)(param_3 + 10)) {
      uVar6 = 0;
      do {
        plVar11 = *(long **)(param_3 + 0xf0 + ((ulong)((int)uVar6 + param_2) & 0xff) * 8);
        *(long **)(param_3 + 0xf0 + (uVar6 & 0xff) * 8) = plVar11;
        *(char *)(plVar11 + 1) = (char)uVar6;
        uVar4 = (int)uVar6 + 1;
        uVar6 = (ulong)uVar4;
        *plVar11 = param_3;
      } while ((int)(uVar4 & 0xff) <= (int)(*(byte *)(param_3 + 10) - uVar3));
    }
  }
  *(char *)((long)param_1 + 10) = *(char *)((long)param_1 + 10) + (char)param_2;
  *(char *)(param_3 + 10) = *(char *)(param_3 + 10) - (char)param_2;
  return;
}


// ===== 0070f4f8  FUN_0070f4f8 =====

void FUN_0070f4f8(long *param_1,uint param_2,long param_3)

{
  byte bVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  
  if ((ulong)*(byte *)(param_3 + 10) != 0) {
    lVar7 = (ulong)*(byte *)(param_3 + 10) << 5;
    do {
      puVar5 = (undefined8 *)(param_3 + -0x10 + lVar7);
      uVar14 = *puVar5;
      uVar12 = puVar5[3];
      uVar11 = puVar5[2];
      puVar3 = (undefined8 *)(param_3 + -0x10 + ((ulong)param_2 & 0xff) * 0x20 + lVar7);
      lVar7 = lVar7 + -0x20;
      puVar3[1] = puVar5[1];
      *puVar3 = uVar14;
      puVar3[3] = uVar12;
      puVar3[2] = uVar11;
    } while (lVar7 != 0);
  }
  lVar10 = ((ulong)param_2 & 0xff) - 1;
  lVar7 = *param_1 + (ulong)*(byte *)(param_1 + 1) * 0x20;
  puVar5 = (undefined8 *)(param_3 + 0x10) + lVar10 * 4;
  uVar14 = *(undefined8 *)(lVar7 + 0x10);
  uVar12 = *(undefined8 *)(lVar7 + 0x28);
  uVar11 = *(undefined8 *)(lVar7 + 0x20);
  puVar5[1] = *(undefined8 *)(lVar7 + 0x18);
  *puVar5 = uVar14;
  puVar5[3] = uVar12;
  puVar5[2] = uVar11;
  uVar8 = (ulong)*(byte *)((long)param_1 + 10);
  if ((int)lVar10 != 0) {
    lVar7 = ((ulong)param_2 & 0xff) * -0x20;
    puVar5 = (undefined8 *)(param_3 + 0x10);
    do {
      puVar3 = (undefined8 *)((long)param_1 + lVar7 + uVar8 * 0x20 + 0x30);
      lVar7 = lVar7 + 0x20;
      uVar14 = *puVar3;
      uVar12 = puVar3[3];
      uVar11 = puVar3[2];
      puVar5[1] = puVar3[1];
      *puVar5 = uVar14;
      puVar5[3] = uVar12;
      puVar5[2] = uVar11;
      puVar5 = puVar5 + 4;
    } while (lVar7 != -0x20);
    uVar8 = (ulong)*(byte *)((long)param_1 + 10);
  }
  bVar1 = (byte)param_2;
  plVar9 = param_1 + (uVar8 - bVar1) * 4 + 2;
  lVar7 = *param_1 + (ulong)*(byte *)(param_1 + 1) * 0x20;
  lVar15 = *plVar9;
  lVar13 = plVar9[3];
  lVar10 = plVar9[2];
  *(long *)(lVar7 + 0x18) = plVar9[1];
  *(long *)(lVar7 + 0x10) = lVar15;
  *(long *)(lVar7 + 0x28) = lVar13;
  *(long *)(lVar7 + 0x20) = lVar10;
  if (*(char *)((long)param_1 + 0xb) == '\0') {
    uVar6 = *(byte *)(param_3 + 10) + 1;
    if (uVar6 >> 8 == 0) {
      uVar6 = uVar6 & 0xff;
      do {
        uVar4 = uVar6 - 1;
        uVar6 = uVar6 - 1;
        uVar2 = uVar4 + param_2;
        plVar9 = *(long **)(param_3 + 0xf0 + ((ulong)uVar4 & 0xff) * 8);
        *(long **)(param_3 + 0xf0 + ((ulong)uVar2 & 0xff) * 8) = plVar9;
        *(char *)(plVar9 + 1) = (char)uVar2;
        *plVar9 = param_3;
      } while ((uVar6 & 0xff) != 0);
    }
    if ((param_2 & 0xff) != 0) {
      uVar6 = param_2 + 1 & 0xff;
      if (uVar6 < 3) {
        uVar6 = 2;
      }
      lVar7 = 0;
      do {
        lVar10 = lVar7 + 1;
        plVar9 = (long *)param_1[((ulong)(((int)lVar10 - param_2) +
                                         (uint)*(byte *)((long)param_1 + 10)) & 0xff) + 0x1e];
        *(long **)(param_3 + lVar7 * 8 + 0xf0) = plVar9;
        *(char *)(plVar9 + 1) = (char)lVar7;
        *plVar9 = param_3;
        lVar7 = lVar10;
      } while ((ulong)uVar6 - 1 != lVar10);
    }
  }
  *(byte *)((long)param_1 + 10) = *(char *)((long)param_1 + 10) - bVar1;
  *(byte *)(param_3 + 10) = *(char *)(param_3 + 10) + bVar1;
  return;
}


// ===== 0070f670  FUN_0070f670 =====

void FUN_0070f670(long *param_1,int param_2,long param_3)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  if (param_2 == 7) {
    bVar4 = 0;
  }
  else if (param_2 == 0) {
    bVar4 = *(char *)((long)param_1 + 10) - 1;
  }
  else {
    bVar4 = *(byte *)((long)param_1 + 10) >> 1;
  }
  *(byte *)(param_3 + 10) = bVar4;
  bVar4 = *(char *)((long)param_1 + 10) - bVar4;
  *(byte *)((long)param_1 + 10) = bVar4;
  if ((ulong)*(byte *)(param_3 + 10) != 0) {
    lVar5 = (ulong)*(byte *)(param_3 + 10) << 5;
    plVar8 = param_1 + (ulong)bVar4 * 4 + 2;
    plVar7 = (long *)(param_3 + 0x10);
    do {
      lVar12 = *plVar8;
      lVar11 = plVar8[3];
      lVar9 = plVar8[2];
      lVar5 = lVar5 + -0x20;
      plVar7[1] = plVar8[1];
      *plVar7 = lVar12;
      plVar7[3] = lVar11;
      plVar7[2] = lVar9;
      plVar8 = plVar8 + 4;
      plVar7 = plVar7 + 4;
    } while (lVar5 != 0);
    bVar4 = *(byte *)((long)param_1 + 10);
  }
  lVar9 = *param_1;
  *(byte *)((long)param_1 + 10) = bVar4 - 1;
  lVar5 = lVar9 + (ulong)*(byte *)(param_1 + 1) * 0x20;
  uVar10 = (uint)*(byte *)(param_1 + 1);
  uVar3 = *(byte *)(lVar9 + 10) - uVar10;
  if (uVar10 <= *(byte *)(lVar9 + 10) && uVar3 != 0) {
    memmove((void *)(lVar5 + 0x30),(void *)(lVar5 + 0x10),(ulong)uVar3 << 5);
  }
  if ((long *)(lVar5 + 0x10) != (long *)0x0) {
    cVar1 = *(char *)(lVar9 + 0xb);
    plVar8 = param_1 + (ulong)(byte)(bVar4 - 1) * 4 + 2;
    lVar13 = *plVar8;
    lVar12 = plVar8[3];
    lVar11 = plVar8[2];
    bVar4 = *(char *)(lVar9 + 10) + 1;
    *(long *)(lVar5 + 0x18) = plVar8[1];
    *(long *)(lVar5 + 0x10) = lVar13;
    *(long *)(lVar5 + 0x28) = lVar12;
    *(long *)(lVar5 + 0x20) = lVar11;
    *(byte *)(lVar9 + 10) = bVar4;
    if ((cVar1 == '\0') && (uVar10 + 1 < (uint)bVar4)) {
      do {
        bVar2 = bVar4 - 1;
        lVar5 = *(long *)(lVar9 + 0xf0 + (ulong)bVar2 * 8);
        *(long *)(lVar9 + 0xf0 + (ulong)bVar4 * 8) = lVar5;
        *(byte *)(lVar5 + 8) = bVar4;
        bVar4 = bVar2;
      } while (uVar10 + 1 < (uint)bVar2);
    }
    if (param_1 + (ulong)*(byte *)((long)param_1 + 10) * 4 + 2 != (long *)0x0) {
      *(long *)(*param_1 + (ulong)(byte)((char)param_1[1] + 1) * 8 + 0xf0) = param_3;
      if (*(char *)((long)param_1 + 0xb) == '\0') {
        uVar6 = (ulong)*(byte *)((long)param_1 + 10);
        bVar4 = 0;
        do {
          uVar6 = (ulong)((int)uVar6 + 1);
          plVar8 = (long *)param_1[(uVar6 & 0xff) + 0x1e];
          *(long **)(param_3 + 0xf0 + (ulong)bVar4 * 8) = plVar8;
          *(byte *)(plVar8 + 1) = bVar4;
          bVar4 = bVar4 + 1;
          *plVar8 = param_3;
        } while (bVar4 <= *(byte *)(param_3 + 10));
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0070f830  FUN_0070f830 =====

void FUN_0070f830(undefined8 *param_1)

{
  if (param_1[2] != 0) {
    FUN_0070d9e0(*param_1,param_1 + 1);
  }
  *param_1 = &PTR_LOOP_00d29e08;
  param_1[1] = &PTR_LOOP_00d29e08;
  param_1[2] = 0;
  return;
}


// ===== 0070f878  FUN_0070f878 =====

void FUN_0070f878(undefined1 (*param_1) [12],undefined8 *param_2,long *param_3,ulong param_4,
                 int *param_5,undefined8 param_6)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  code *pcVar4;
  uint uVar5;
  long *plVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  undefined1 auVar11 [12];
  
  if (param_2[2] == 0) goto LAB_0070f9b4;
  plVar8 = (long *)param_2[1];
  if (((param_3 != (long *)0x0) || (plVar8 != (long *)0x0)) &&
     ((param_3 == (long *)0x0 || (plVar8 == (long *)0x0)))) goto LAB_0070fa90;
  uVar5 = (uint)param_4;
  if ((plVar8 != param_3) || (uVar5 != *(byte *)((long)plVar8 + 10))) {
    iVar7 = *param_5;
    iVar2 = *(int *)((long)param_3 + ((long)(param_4 << 0x20) >> 0x1b) + 0x10);
    if (iVar2 <= iVar7) {
      if (iVar7 <= iVar2) {
        *(long **)*param_1 = param_3;
        *(ulong *)(*param_1 + 8) = param_4;
        param_1[1][4] = 0;
        return;
      }
      if (*(char *)((long)param_3 + 0xb) == '\0') {
        plVar6 = param_3 + (byte)((char)param_4 + 1);
        do {
          plVar6 = (long *)plVar6[0x1e];
        } while (*(char *)((long)plVar6 + 0xb) == '\0');
        uVar10 = 0;
LAB_0070fa24:
        param_4 = param_4 & 0xffffffff00000000 | uVar10;
        param_3 = plVar6;
        if (plVar8 != (long *)0x0 || plVar6 != (long *)0x0) {
LAB_0070fa38:
          if ((plVar8 == (long *)0x0) || (param_3 = plVar6, plVar6 == (long *)0x0))
          goto LAB_0070fa90;
        }
      }
      else {
        uVar5 = uVar5 + 1;
        uVar10 = (ulong)uVar5;
        param_4 = param_4 & 0xffffffff00000000 | uVar10;
        if ((int)(uint)*(byte *)((long)param_3 + 10) <= (int)uVar5) {
          plVar6 = param_3;
          plVar9 = param_3;
          if (uVar5 == *(byte *)((long)param_3 + 10)) {
            do {
              plVar6 = (long *)*plVar9;
              if (*(char *)((long)plVar6 + 0xb) != '\0') goto LAB_0070f93c;
              pbVar1 = (byte *)(plVar9 + 1);
              uVar10 = (ulong)*pbVar1;
              plVar9 = plVar6;
            } while (*pbVar1 == *(byte *)((long)plVar6 + 10));
          }
          goto LAB_0070fa24;
        }
LAB_0070f93c:
        plVar6 = param_3;
        if (plVar8 != (long *)0x0 || param_3 != (long *)0x0) goto LAB_0070fa38;
      }
      if (((param_3 != plVar8) || ((uint)param_4 != (uint)*(byte *)((long)plVar8 + 10))) &&
         (*(int *)((long)param_3 + ((long)(param_4 << 0x20) >> 0x1b) + 0x10) <= iVar7))
      goto LAB_0070f9b4;
      goto LAB_0070fa68;
    }
  }
  plVar8 = *(long **)*param_2;
  if (((param_3 != (long *)0x0) || (plVar8 != (long *)0x0)) &&
     ((param_3 == (long *)0x0 || (plVar8 == (long *)0x0)))) {
LAB_0070fa90:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x70fa94);
    (*pcVar4)();
  }
  if ((plVar8 == param_3) && ((param_4 & 0xffffffff) == 0)) goto LAB_0070fa68;
  if (*(char *)((long)param_3 + 0xb) == '\0') {
    plVar8 = param_3 + (param_4 & 0xff);
    while (plVar8 = (long *)plVar8[0x1e], *(char *)((long)plVar8 + 0xb) == '\0') {
      plVar8 = plVar8 + *(byte *)((long)plVar8 + 10);
    }
    bVar3 = *(byte *)((long)plVar8 + 10);
LAB_0070f998:
    iVar7 = bVar3 - 1;
    plVar6 = plVar8;
  }
  else {
    iVar7 = uVar5 - 1;
    plVar6 = param_3;
    plVar9 = param_3;
    if (iVar7 < 0) {
      do {
        plVar8 = (long *)*plVar9;
        if (*(char *)((long)plVar8 + 0xb) != '\0') goto LAB_0070f99c;
        bVar3 = *(byte *)(plVar9 + 1);
        plVar9 = plVar8;
      } while (bVar3 == 0);
      goto LAB_0070f998;
    }
  }
LAB_0070f99c:
  if (*param_5 <= (int)plVar6[(long)iVar7 * 4 + 2]) {
LAB_0070f9b4:
    FUN_0070ee68(param_1,param_2,param_5,param_6);
    return;
  }
LAB_0070fa68:
  auVar11 = FUN_0070ef8c(param_2,param_3,param_4,param_6);
  *param_1 = auVar11;
  param_1[1][4] = 1;
  return;
}


// ===== 0070fa94  FUN_0070fa94 =====

undefined8 FUN_0070fa94(long *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  byte extraout_var;
  long lVar1;
  
  FUN_00710108(param_1,param_2,3,1);
  param_1[1] = param_1[1] + 0x20000;
  *(long *)(param_1[2] + -8) = *(long *)(param_1[2] + -8) + -1;
  (*param_4)(param_3,(long)(short)param_1[1]);
  lVar1 = param_1[2];
  *(byte *)(lVar1 + 1) = extraout_var >> 1;
  ((byte *)(lVar1 + 1))[*param_1 + 1] = extraout_var >> 1;
  return 1;
}


// ===== 0070fb14  FUN_0070fb14 =====

ulong FUN_0070fb14(undefined8 *param_1,long param_2,undefined8 param_3,code *param_4,uint param_5)

{
  long lVar1;
  code *pcVar2;
  uint uVar3;
  char cVar4;
  undefined8 *puVar5;
  char *pcVar6;
  ushort *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined1 *puVar10;
  ushort uVar11;
  code *pcVar12;
  ulong uVar13;
  ulong uVar14;
  
  if ((param_5 & 1) == 0) {
    uVar3 = *(uint *)(param_2 + 8);
    (**(code **)(param_2 + 0x28))(param_1);
    uVar11 = *(ushort *)(param_2 + 0xc);
    pcVar12 = *(code **)(param_2 + 0x30);
    *param_1 = 3;
    uVar14 = (ulong)uVar11 + 0x12 & -(ulong)uVar11;
    if (pcVar12 == FUN_0070fcf4) {
      puVar5 = (undefined8 *)operator_new(uVar14 + (ulong)uVar3 * 3 + 7 & 0xffffffff8);
    }
    else {
      puVar5 = (undefined8 *)(*pcVar12)();
    }
    lVar1 = (long)puVar5 + uVar14;
    param_1[1] = param_1[1] + 0x20000;
    *puVar5 = 1;
    pcVar6 = (char *)__emutls_get_address(&DAT_00d5a2e0);
    cVar4 = *pcVar6;
    puVar7 = (ushort *)__emutls_get_address(&DAT_00d5a2c0);
    if (cVar4 == '\x01') {
      uVar11 = *puVar7;
    }
    else {
      puVar10 = (undefined1 *)__emutls_get_address(&DAT_00d5a2e0);
      uVar11 = (ushort)puVar7;
      *puVar10 = 1;
    }
    *puVar7 = uVar11 + 0xad53;
    pcVar12 = *(code **)(param_2 + 0x10);
    pcVar2 = *(code **)(param_2 + 0x18);
    *(ushort *)(param_1 + 1) = uVar11 + 0xad53 | 0x8000;
    uVar8 = (*pcVar12)(param_1);
    uVar14 = (*pcVar2)(uVar8,param_1 + 2,(long)*(short *)(param_1 + 1));
    uVar9 = (*param_4)(param_3,(long)*(short *)(param_1 + 1));
    uVar13 = (ulong)(*(uint *)(param_1 + 1) ^ (uint)uVar9) & 2;
    uVar9 = uVar9 >> 0x39 | 0x80;
    *(undefined8 *)((long)puVar5 + 0xb) = 0x8080808080808080;
    puVar5[1] = uVar9 << (uVar13 << 3) ^ (uVar14 >> 0x39) * 0x10000000100 + 0x80800080ff800080 ^
                uVar9 << ((uVar13 >> 1) << 4 | 0x20);
    *(undefined8 *)(lVar1 + (ulong)uVar3) = param_1[2];
    param_1[2] = puVar5 + 1;
    param_1[3] = lVar1;
    return uVar13;
  }
  uVar14 = FUN_0070fa94(param_1,param_2,param_3,param_4);
  return uVar14;
}


// ===== 0070fcf4  FUN_0070fcf4 =====

void FUN_0070fcf4(undefined8 param_1,long param_2)

{
  operator_new(param_2 + 7U & 0xfffffffffffffff8);
  return;
}


// ===== 0070fd04  FUN_0070fd04 =====

void FUN_0070fd04(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                 undefined8 param_5,uint param_6)

{
  long lVar1;
  
  lVar1 = -9;
  if ((param_6 & 1) == 0) {
    lVar1 = -8;
  }
  operator_delete((void *)(param_3 + lVar1));
  return;
}


// ===== 0070fd4c  FUN_0070fd4c =====

void FUN_0070fd4c(ulong *param_1,long param_2,undefined8 param_3,code *param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  
  puVar4 = (ulong *)param_1[2];
  uVar5 = param_1[3];
  if (*param_1 < 7) {
    uVar1 = *(ulong *)((long)puVar4 + *param_1) & 0x8080808080808080;
    if (uVar1 != 0x8080808080808080) {
      uVar1 = uVar1 ^ 0x8080808080808080;
      do {
        uVar2 = (uVar1 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar1 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
        uVar2 = (ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3;
        (*param_4)(param_3,(long)puVar4 + (uVar2 - 1),(uVar5 - param_2) + uVar2 * param_2);
        uVar1 = uVar1 - 1 & uVar1;
      } while (uVar1 != 0);
    }
  }
  else {
    uVar1 = param_1[1] >> 0x11;
    if (uVar1 != 0) {
      do {
        if ((*puVar4 & 0x8080808080808080) != 0x8080808080808080) {
          uVar2 = *puVar4 & 0x8080808080808080 ^ 0x8080808080808080;
          do {
            uVar3 = (uVar2 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar2 >> 7 & 0xff00ff00ff00ff) << 8;
            uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
            uVar3 = (ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 3;
            (*param_4)(param_3,(long)puVar4 + uVar3,uVar5 + uVar3 * param_2);
            uVar1 = uVar1 - 1;
            uVar2 = uVar2 - 1 & uVar2;
          } while (uVar2 != 0);
        }
        puVar4 = puVar4 + 1;
        uVar5 = param_2 * 8 + uVar5;
      } while (uVar1 != 0);
    }
  }
  return;
}


// ===== 0070fe5c  FUN_0070fe5c =====

undefined1  [16] FUN_0070fe5c(long *param_1,long param_2,undefined8 param_3,code *param_4)

{
  long lVar1;
  long lVar2;
  char cVar3;
  uint uVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  char *pcVar8;
  ushort *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined1 *puVar12;
  uint uVar13;
  ulong uVar14;
  code *pcVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  undefined1 auVar20 [16];
  
  if (*param_1 == 1) {
    if ((ulong)param_1[1] >> 0x11 != 0) {
      lVar1 = param_1[2];
      lVar2 = param_1[3];
      uVar16 = (ulong)*(uint *)(param_2 + 8);
      uVar17 = (ulong)*(ushort *)(param_2 + 0xc);
      uVar6 = (**(code **)(param_2 + 0x28))(param_1);
      pcVar15 = *(code **)(param_2 + 0x30);
      uVar14 = uVar17 + 0x12 & -uVar17;
      *param_1 = 3;
      if (pcVar15 == FUN_0070fcf4) {
        puVar7 = (undefined8 *)operator_new(uVar14 + uVar16 * 3 + 7 & 0xffffffff8);
      }
      else {
        puVar7 = (undefined8 *)(*pcVar15)();
      }
      lVar18 = (long)puVar7 + uVar14;
      param_1[2] = (long)(puVar7 + 1);
      param_1[3] = lVar18;
      pcVar8 = (char *)__emutls_get_address(&DAT_00d5a2e0);
      cVar3 = *pcVar8;
      puVar9 = (ushort *)__emutls_get_address(&DAT_00d5a2c0);
      if (cVar3 == '\x01') {
        uVar13 = (uint)*puVar9;
      }
      else {
        puVar12 = (undefined1 *)__emutls_get_address(&DAT_00d5a2e0);
        *puVar12 = 1;
        uVar13 = (uint)puVar9;
      }
      uVar4 = uVar13 - 0x52ad | 0xffff8000;
      *puVar9 = (ushort)(uVar13 - 0x52ad);
      *(short *)(param_1 + 1) = (short)uVar4;
      uVar14 = (*param_4)(param_3,(long)(int)uVar4);
      pcVar15 = *(code **)(param_2 + 0x18);
      uVar10 = (**(code **)(param_2 + 0x10))(param_1);
      uVar11 = (*pcVar15)(uVar10,lVar2,(long)(short)param_1[1]);
      uVar19 = (ulong)(*(uint *)(param_1 + 1) ^ (uint)uVar14) & 2;
      uVar14 = uVar14 >> 0x39 | 0x80;
      pcVar15 = *(code **)(param_2 + 0x20);
      *(undefined8 *)((long)puVar7 + 0xb) = 0x8080808080808080;
      puVar7[1] = uVar14 << (uVar19 << 3) ^ (uVar11 >> 0x39) * 0x10000000100 + 0x80800080ff800080 ^
                  uVar14 << ((uVar19 >> 1) << 4 | 0x20);
      (*pcVar15)(param_1,lVar18 + uVar16,lVar2,1);
      lVar18 = lVar18 + uVar19 * uVar16;
      (**(code **)(param_2 + 0x38))(uVar6,1,lVar1,uVar16,uVar17,0);
      puVar12 = (undefined1 *)((long)(puVar7 + 1) + uVar19);
      param_1[1] = param_1[1] + 0x20000;
      *puVar7 = 1;
      goto LAB_007100ac;
    }
    lVar18 = param_1[3];
    uVar14 = param_1[1] | 0x20000;
  }
  else {
    pcVar15 = *(code **)(param_2 + 0x28);
    *param_1 = 1;
    (*pcVar15)(param_1);
    uVar14 = (ulong)*(ushort *)(param_2 + 0xc) + 7 & -(ulong)*(ushort *)(param_2 + 0xc);
    if (*(code **)(param_2 + 0x30) == FUN_0070fcf4) {
      pvVar5 = operator_new(uVar14 + *(uint *)(param_2 + 8) + 7 & 0x3fffffff8);
    }
    else {
      pvVar5 = (void *)(**(code **)(param_2 + 0x30))();
    }
    lVar18 = (long)pvVar5 + uVar14;
    param_1[2] = (long)pvVar5 + 8;
    param_1[3] = lVar18;
    uVar14 = param_1[1] + 0x20000;
  }
  puVar12 = &DAT_002085f4;
  param_1[1] = uVar14;
LAB_007100ac:
  auVar20._8_8_ = lVar18;
  auVar20._0_8_ = puVar12;
  return auVar20;
}


// ===== 00710100  FUN_00710100 =====

void FUN_00710100(void)

{
  return;
}


// ===== 00710108  FUN_00710108 =====

void FUN_00710108(ulong *param_1,undefined4 *param_2,ulong param_3,ulong param_4)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  char cVar4;
  long *plVar5;
  char *pcVar6;
  ushort *puVar7;
  undefined1 *puVar8;
  ushort uVar9;
  ulong uVar10;
  
  uVar3 = param_2[2];
  if (((param_4 & 1) != 0) && ((*(byte *)((long)param_2 + 0xf) & 1) != 0)) {
    FUN_00711850((ulong)uVar3,*param_2,param_2[1],*(undefined1 *)((long)param_2 + 0xe));
  }
  (**(code **)(param_2 + 10))(param_1);
  uVar9 = *(ushort *)(param_2 + 3);
  *param_1 = param_3;
  lVar2 = 7;
  if (1 < param_3) {
    lVar2 = param_3 + 0xf;
  }
  uVar10 = lVar2 + (ulong)uVar9 & -(ulong)uVar9;
  if (*(code **)(param_2 + 0xc) == FUN_0070fcf4) {
    plVar5 = (long *)operator_new(uVar10 + param_3 * uVar3 + 7 & 0xfffffffffffffff8);
  }
  else {
    plVar5 = (long *)(**(code **)(param_2 + 0xc))();
  }
  plVar1 = plVar5 + 1;
  param_1[2] = (ulong)plVar1;
  param_1[3] = (long)plVar5 + uVar10;
  pcVar6 = (char *)__emutls_get_address(&DAT_00d5a2e0);
  cVar4 = *pcVar6;
  puVar7 = (ushort *)__emutls_get_address(&DAT_00d5a2c0);
  if (cVar4 == '\x01') {
    uVar9 = *puVar7;
  }
  else {
    puVar8 = (undefined1 *)__emutls_get_address(&DAT_00d5a2e0);
    *puVar8 = 1;
    uVar9 = (ushort)puVar7;
  }
  uVar10 = *param_1;
  *puVar7 = uVar9 + 0xad53;
  *(ushort *)(param_1 + 1) = uVar9 + 0xad53 | 0x8000;
  if (uVar10 < 0x10) {
    if (uVar10 < 2) goto LAB_00710214;
    *plVar1 = -0x7f7f7f7f7f7f7f80;
    *(undefined8 *)((long)plVar1 + uVar10) = 0x8080808080808080;
    if (uVar10 == 0xf) {
      plVar5[2] = -0x7f7f7f7f7f7f7f80;
    }
  }
  else {
    memset(plVar5 + 1,0x80,uVar10 + 8);
  }
  *(undefined1 *)((long)plVar1 + uVar10) = 0xff;
LAB_00710214:
  lVar2 = 6;
  if (param_3 != 7) {
    lVar2 = param_3 - (param_3 >> 3);
  }
  *plVar5 = lVar2;
  return;
}


// ===== 0071028c  FUN_0071028c =====

ulong FUN_0071028c(ulong *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,long param_5)

{
  ulong uVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = param_1[2];
  if (0 < *(long *)(uVar3 - 8)) {
    uVar1 = (param_4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (param_4 & 0x5555555555555555) << 1;
    uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
    uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
    uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
    param_1[1] = param_1[1] + 0x20000;
    *(long *)(uVar3 - 8) = *(long *)(uVar3 - 8) + -1;
    uVar4 = param_1[2];
    uVar3 = *param_1 & param_5 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3);
    bVar2 = (byte)((ulong)param_3 >> 0x38);
    *(byte *)(uVar4 + uVar3) = bVar2 >> 1;
    *(byte *)(uVar4 + (*param_1 & uVar3 - 7) + (*param_1 & 7)) = bVar2 >> 1;
    return uVar3;
  }
  uVar3 = FUN_007102fc();
  return uVar3;
}


// ===== 007102fc  FUN_007102fc =====

void FUN_007102fc(ulong *param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = param_1[2];
  if (*(long *)(uVar3 - 8) == 0) {
    FUN_007103d0(param_1,param_2,param_3);
    return;
  }
  if (*(long *)(uVar3 - 8) != -0x8000000000000000) {
    lVar2 = FUN_00710dd0(uVar3,param_3,*param_1);
    param_1[1] = param_1[1] + 0x20000;
    *(ulong *)(uVar3 - 8) = *(long *)(uVar3 - 8) - (ulong)(*(char *)(uVar3 + lVar2) == -0x80);
    uVar3 = param_1[2];
    bVar1 = (byte)((ulong)param_3 >> 0x38);
    *(byte *)(uVar3 + lVar2) = bVar1 >> 1;
    *(byte *)(uVar3 + (*param_1 & lVar2 - 7U) + 7) = bVar1 >> 1;
    return;
  }
  FUN_007105b4(param_1,param_2,param_3);
  return;
}


// ===== 007103d0  FUN_007103d0 =====

ulong FUN_007103d0(ulong *param_1,long param_2,undefined8 param_3)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  byte bVar4;
  undefined8 uVar5;
  long *plVar6;
  code *pcVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  
  uVar8 = param_1[2];
  uVar13 = param_1[3];
  uVar11 = *param_1;
  uVar14 = (ulong)*(uint *)(param_2 + 8);
  uVar15 = (ulong)*(ushort *)(param_2 + 0xc);
  uVar2 = uVar11 << 1 | 1;
  pcVar7 = *(code **)(param_2 + 0x28);
  uVar16 = uVar11 * 2;
  *param_1 = uVar2;
  uVar5 = (*pcVar7)();
  lVar3 = 7;
  if (uVar16 != 0) {
    lVar3 = uVar16 + 0x10;
  }
  uVar12 = lVar3 + uVar15 & -uVar15;
  if (*(code **)(param_2 + 0x30) == FUN_0070fcf4) {
    plVar6 = (long *)operator_new(uVar12 + uVar2 * uVar14 + 7 & 0xfffffffffffffff8);
  }
  else {
    plVar6 = (long *)(**(code **)(param_2 + 0x30))();
  }
  puVar1 = (ulong *)(plVar6 + 1);
  uVar12 = (long)plVar6 + uVar12;
  param_1[2] = (ulong)puVar1;
  param_1[3] = uVar12;
  bVar4 = (byte)((ulong)param_3 >> 0x38);
  if (uVar2 < 9) {
    uVar10 = *(ulong *)(uVar8 + uVar11) ^ 0x7f;
    *puVar1 = uVar10;
    *(ulong *)((long)puVar1 + uVar2) = uVar10 << 8 | 0xff;
    uVar9 = param_1[2];
    uVar10 = uVar16;
    if ((((uint)param_1[1] ^ (uint)param_3) & 1) != 0) {
      uVar10 = 0;
    }
    *(byte *)(uVar9 + uVar10) = bVar4 >> 1;
    pcVar7 = *(code **)(param_2 + 0x20);
    ((byte *)(uVar9 + uVar10))[*param_1 + 1] = bVar4 >> 1;
    (*pcVar7)(param_1,uVar12 + uVar14,uVar13,uVar11);
  }
  else {
    FUN_007109f8(param_1,param_2,uVar8,uVar13);
    uVar13 = param_1[2];
    uVar10 = FUN_00710dd0(uVar13,param_3,*param_1);
    *(byte *)(uVar13 + uVar10) = bVar4 >> 1;
    *(byte *)(uVar13 + (*param_1 & uVar10 - 7) + 7) = bVar4 >> 1;
  }
  (**(code **)(param_2 + 0x38))(uVar5,uVar11,uVar8,uVar14,uVar15,0);
  uVar8 = param_1[1];
  if (uVar16 != 6) {
    uVar16 = uVar2 - (uVar16 >> 3);
  }
  param_1[1] = uVar8 + 0x20000;
  *plVar6 = uVar16 - (uVar8 + 0x20000 >> 0x11);
  return uVar10;
}


// ===== 007105b4  FUN_007105b4 =====

void FUN_007105b4(ulong *param_1,long param_2,ulong param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  code *pcVar5;
  char cVar6;
  byte bVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  code *pcVar17;
  ulong uVar18;
  long lVar19;
  ulong *puVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  uint7 uVar27;
  
  uVar24 = *param_1;
  if ((uVar24 < 9) || (uVar24 * 0x19 < (param_1[1] >> 0xc & 0xfffffffffffe0))) {
    FUN_007103d0(param_1,param_2,param_3);
    return;
  }
  puVar4 = (ulong *)param_1[2];
  uVar12 = param_1[3];
  puVar1 = (ulong *)((long)puVar4 + uVar24);
  if (puVar4 < puVar1) {
    puVar2 = (ulong *)(uVar24 + (long)puVar4);
    puVar20 = puVar4 + 1;
    puVar3 = puVar2;
    if (puVar2 <= puVar20) {
      puVar3 = puVar20;
    }
    puVar13 = puVar4;
    if ((undefined1 *)0x67 < (undefined1 *)((long)puVar3 + ~(ulong)puVar4)) {
      if (puVar2 <= puVar20) {
        puVar2 = puVar20;
      }
      if (puVar4 <= (ulong *)((long)puVar4 +
                             (((long)puVar4 - (long)puVar2 ^ 0xffffffffffffffffU) &
                             0xfffffffffffffff8))) {
        puVar20 = puVar4 + 2;
        uVar26 = ((long)puVar3 + ~(ulong)puVar4 >> 3) + 1;
        uVar21 = uVar26 & 0x3ffffffffffffffc;
        puVar13 = puVar4 + (uVar26 & 0x3ffffffffffffffc);
        do {
          uVar21 = uVar21 - 4;
          uVar27 = (uint7)(puVar20[-2] >> 0xe);
          uVar22 = CONCAT71(uVar27,(char)(puVar20[-2] >> 6)) & 0xffffffffffffff02;
          uVar23 = CONCAT62((int6)(uVar22 >> 0x10),CONCAT11((char)uVar27,(char)uVar22)) &
                   0xffffffffffff02ff;
          uVar22 = CONCAT53((int5)(uVar23 >> 0x18),CONCAT12((char)(uVar22 >> 0x10),(short)uVar23)) &
                   0xffffffffff02ffff;
          uVar23 = CONCAT44((int)(uVar22 >> 0x20),CONCAT13((char)(uVar23 >> 0x18),(int3)uVar22)) &
                   0xffffffff02ffffff;
          uVar22 = CONCAT35((int3)(uVar23 >> 0x28),CONCAT14((char)(uVar22 >> 0x20),(int)uVar23)) &
                   0xffffff02ffffffff;
          uVar23 = CONCAT26((short)(uVar22 >> 0x30),CONCAT15((char)(uVar23 >> 0x28),(int5)uVar22)) &
                   0xffff02ffffffffff;
          uVar27 = (uint7)(puVar20[-1] >> 0xe);
          uVar25 = CONCAT71(uVar27,(char)(puVar20[-1] >> 6)) & 0xffffffffffffff02;
          uVar16 = CONCAT62((int6)(uVar25 >> 0x10),CONCAT11((char)uVar27,(char)uVar25)) &
                   0xffffffffffff02ff;
          uVar25 = CONCAT53((int5)(uVar16 >> 0x18),CONCAT12((char)(uVar25 >> 0x10),(short)uVar16)) &
                   0xffffffffff02ffff;
          uVar16 = CONCAT44((int)(uVar25 >> 0x20),CONCAT13((char)(uVar16 >> 0x18),(int3)uVar25)) &
                   0xffffffff02ffffff;
          uVar25 = CONCAT35((int3)(uVar16 >> 0x28),CONCAT14((char)(uVar25 >> 0x20),(int)uVar16)) &
                   0xffffff02ffffffff;
          uVar16 = CONCAT26((short)(uVar25 >> 0x30),CONCAT15((char)(uVar16 >> 0x28),(int5)uVar25)) &
                   0xffff02ffffffffff;
          uVar27 = (uint7)(*puVar20 >> 0xe);
          uVar9 = CONCAT71(uVar27,(char)(*puVar20 >> 6)) & 0xffffffffffffff02;
          uVar11 = CONCAT62((int6)(uVar9 >> 0x10),CONCAT11((char)uVar27,(char)uVar9)) &
                   0xffffffffffff02ff;
          uVar9 = CONCAT53((int5)(uVar11 >> 0x18),CONCAT12((char)(uVar9 >> 0x10),(short)uVar11)) &
                  0xffffffffff02ffff;
          uVar11 = CONCAT44((int)(uVar9 >> 0x20),CONCAT13((char)(uVar11 >> 0x18),(int3)uVar9)) &
                   0xffffffff02ffffff;
          uVar9 = CONCAT35((int3)(uVar11 >> 0x28),CONCAT14((char)(uVar9 >> 0x20),(int)uVar11)) &
                  0xffffff02ffffffff;
          uVar11 = CONCAT26((short)(uVar9 >> 0x30),CONCAT15((char)(uVar11 >> 0x28),(int5)uVar9)) &
                   0xffff02ffffffffff;
          uVar27 = (uint7)(puVar20[1] >> 0xe);
          uVar14 = CONCAT71(uVar27,(char)(puVar20[1] >> 6)) & 0xffffffffffffff02;
          uVar15 = CONCAT62((int6)(uVar14 >> 0x10),CONCAT11((char)uVar27,(char)uVar14)) &
                   0xffffffffffff02ff;
          uVar14 = CONCAT53((int5)(uVar15 >> 0x18),CONCAT12((char)(uVar14 >> 0x10),(short)uVar15)) &
                   0xffffffffff02ffff;
          uVar15 = CONCAT44((int)(uVar14 >> 0x20),CONCAT13((char)(uVar15 >> 0x18),(int3)uVar14)) &
                   0xffffffff02ffffff;
          uVar14 = CONCAT35((int3)(uVar15 >> 0x28),CONCAT14((char)(uVar14 >> 0x20),(int)uVar15)) &
                   0xffffff02ffffffff;
          uVar15 = CONCAT26((short)(uVar14 >> 0x30),CONCAT15((char)(uVar15 >> 0x28),(int5)uVar14)) &
                   0xffff02ffffffffff;
          puVar20[-1] = (CONCAT17((char)(uVar16 >> 0x38),
                                  CONCAT16((char)(uVar25 >> 0x30),(int6)uVar16)) & 0x202ffffffffffff
                        ) + 0x7e7e7e7e7e7e7e7e | 0x8080808080808080;
          puVar20[-2] = (CONCAT17((char)(uVar23 >> 0x38),
                                  CONCAT16((char)(uVar22 >> 0x30),(int6)uVar23)) & 0x202ffffffffffff
                        ) + 0x7e7e7e7e7e7e7e7e | 0x8080808080808080;
          puVar20[1] = (CONCAT17((char)(uVar15 >> 0x38),
                                 CONCAT16((char)(uVar14 >> 0x30),(int6)uVar15)) & 0x202ffffffffffff)
                       + 0x7e7e7e7e7e7e7e7e | 0x8080808080808080;
          *puVar20 = (CONCAT17((char)(uVar11 >> 0x38),CONCAT16((char)(uVar9 >> 0x30),(int6)uVar11))
                     & 0x202ffffffffffff) + 0x7e7e7e7e7e7e7e7e | 0x8080808080808080;
          puVar20 = puVar20 + 4;
        } while (uVar21 != 0);
        if (uVar26 == (uVar26 & 0x3ffffffffffffffc)) goto LAB_0071071c;
      }
    }
    do {
      puVar20 = puVar13 + 1;
      *puVar13 = (*puVar13 >> 6 & 0x202020202020202) + 0x7e7e7e7e7e7e7e7e | 0x8080808080808080;
      puVar13 = puVar20;
    } while (puVar20 < puVar1);
  }
LAB_0071071c:
  uVar26 = *puVar4;
  pcVar17 = *(code **)(param_2 + 0x10);
  *(undefined4 *)((long)puVar1 + 4) = *(undefined4 *)((long)puVar4 + 3);
  *(int *)((long)puVar1 + 1) = (int)uVar26;
  *(undefined1 *)puVar1 = 0xff;
  uVar8 = (*pcVar17)(param_1);
  pcVar17 = *(code **)(param_2 + 0x18);
  pcVar5 = *(code **)(param_2 + 0x20);
  uVar23 = (ulong)*(uint *)(param_2 + 8);
  uVar26 = 0;
  uVar22 = uVar12;
  uVar21 = 0xffffffffffffffff;
  do {
    uVar25 = uVar26;
    if ((*(char *)((long)puVar4 + uVar26) != -0x80) &&
       (uVar25 = uVar21, *(char *)((long)puVar4 + uVar26) == -2)) {
      uVar9 = (*pcVar17)(uVar8,uVar22,(long)(short)param_1[1]);
      uVar15 = *param_1;
      uVar11 = param_1[2];
      uVar14 = uVar15 & uVar9;
      uVar16 = uVar14;
      if (*(char *)(uVar11 + uVar14) + 1 < 0 == SCARRY4((int)*(char *)(uVar11 + uVar14),1)) {
        uVar16 = *(ulong *)(uVar11 + uVar14) &
                 (*(ulong *)(uVar11 + uVar14) << 7 ^ 0xffffffffffffffff) & 0x8080808080808080;
        if (uVar16 == 0) {
          lVar19 = 8;
          uVar18 = uVar15 & uVar9;
          do {
            uVar18 = uVar18 + lVar19;
            lVar19 = lVar19 + 8;
            uVar18 = uVar18 & uVar15;
            uVar16 = *(ulong *)(uVar11 + uVar18) &
                     (*(ulong *)(uVar11 + uVar18) << 7 ^ 0xffffffffffffffff) & 0x8080808080808080;
          } while (uVar16 == 0);
        }
        else {
          uVar18 = uVar15 & uVar9;
        }
        uVar16 = (uVar16 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar16 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
        uVar16 = uVar18 + ((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3) & uVar15;
      }
      bVar7 = (byte)(uVar9 >> 0x38);
      if (((uVar16 - uVar14 ^ uVar26 - uVar14) & uVar24) < 8) {
        *(byte *)(uVar11 + uVar26) = bVar7 >> 1;
        *(byte *)(uVar11 + (*param_1 & uVar26 - 7) + 7) = bVar7 >> 1;
      }
      else {
        cVar6 = *(char *)((long)puVar4 + uVar16);
        *(byte *)(uVar11 + uVar16) = bVar7 >> 1;
        lVar19 = uVar12 + uVar16 * uVar23;
        *(byte *)(uVar11 + (*param_1 & uVar16 - 7) + 7) = bVar7 >> 1;
        if (cVar6 == -0x80) {
          (*pcVar5)(param_1,lVar19,uVar22,1);
          uVar21 = param_1[2];
          *(undefined1 *)(uVar21 + uVar26) = 0x80;
          *(undefined1 *)(uVar21 + (*param_1 & uVar26 - 7) + 7) = 0x80;
          uVar25 = uVar26;
        }
        else {
          if (uVar21 == 0xffffffffffffffff) {
            uVar21 = uVar26 + 1;
            if (uVar24 <= uVar21) {
LAB_00710934:
                    /* WARNING: Does not return */
              pcVar17 = (code *)SoftwareBreakpoint(1,0x710938);
              (*pcVar17)();
            }
            while (*(char *)((long)puVar4 + uVar21) != -0x80) {
              uVar21 = uVar21 + 1;
              if (uVar24 == uVar21) goto LAB_00710934;
            }
          }
          lVar10 = uVar12 + uVar21 * uVar23;
          (*pcVar5)(param_1,lVar10,lVar19,1);
          (*pcVar5)(param_1,lVar19,uVar22,1);
          (*pcVar5)(param_1,uVar22,lVar10,1);
          uVar26 = uVar26 - 1;
          uVar22 = uVar22 - uVar23;
          uVar25 = uVar21;
        }
      }
    }
    uVar26 = uVar26 + 1;
    uVar22 = uVar22 + uVar23;
    uVar21 = uVar25;
    if (uVar26 == uVar24) {
      uVar24 = *param_1;
      uVar12 = param_1[1];
      lVar19 = 6;
      if (uVar24 != 7) {
        lVar19 = uVar24 - (uVar24 >> 3);
      }
      param_1[1] = uVar12 + 0x20000;
      *(ulong *)(param_1[2] - 8) = lVar19 - (uVar12 + 0x20000 >> 0x11);
      uVar26 = *param_1;
      uVar12 = param_1[2];
      uVar24 = uVar26 & param_3;
      if (*(char *)(uVar12 + uVar24) + 1 < 0 == SCARRY4((int)*(char *)(uVar12 + uVar24),1)) {
        uVar21 = *(ulong *)(uVar12 + uVar24) &
                 (*(ulong *)(uVar12 + uVar24) << 7 ^ 0xffffffffffffffff) & 0x8080808080808080;
        if (uVar21 == 0) {
          lVar19 = 8;
          do {
            uVar24 = uVar24 + lVar19;
            lVar19 = lVar19 + 8;
            uVar24 = uVar24 & uVar26;
            uVar21 = *(ulong *)(uVar12 + uVar24) &
                     (*(ulong *)(uVar12 + uVar24) << 7 ^ 0xffffffffffffffff) & 0x8080808080808080;
          } while (uVar21 == 0);
        }
        uVar21 = (uVar21 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar21 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
        uVar24 = uVar24 + ((ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3) & uVar26;
      }
      bVar7 = (byte)(param_3 >> 0x38);
      *(byte *)(uVar12 + uVar24) = bVar7 >> 1;
      *(byte *)(uVar12 + (*param_1 & uVar24 - 7) + 7) = bVar7 >> 1;
      return;
    }
  } while( true );
}


// ===== 007109f8  FUN_007109f8 =====

void FUN_007109f8(ulong *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auStack_268 [512];
  undefined1 *local_68;
  undefined1 **local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48;
  
  if (*param_1 < 0x100) {
    memset(auStack_268,0xaa,0x228);
    local_60 = &local_68;
    local_50 = 0xffffffffffffffff;
    local_48 = 0;
    local_68 = auStack_268;
    local_58 = param_3;
    (**(code **)(param_2 + 0x40))(param_1,param_3,param_4,auStack_268,FUN_00710c78);
    uVar1 = param_1[2];
    uVar2 = *param_1;
    *(undefined8 *)(uVar1 + uVar2) = *(undefined8 *)(uVar1 - 1);
    *(undefined1 *)(uVar1 + uVar2) = 0xff;
    if (local_68 != auStack_268) {
      FUN_00710ca0(param_1,param_2,auStack_268,local_68,param_4);
    }
    return;
  }
  FUN_00710b00(param_1,param_2,param_3,param_4);
  return;
}


// ===== 00710b00  FUN_00710b00 =====

long FUN_00710b00(ulong *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 ***pppuVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *apuStack_278 [64];
  undefined8 **local_78;
  undefined8 **local_70;
  undefined8 local_68;
  undefined8 local_60;
  char local_58;
  
  if (*param_1 >> 0xd == 0) {
    memset(apuStack_278,0xaa,0x228);
    local_60 = 0xffffffffffffffff;
    local_58 = '\0';
    local_78 = apuStack_278;
    local_70 = &local_78;
    local_68 = param_3;
    (**(code **)(param_2 + 0x40))(param_1,param_3,param_4,apuStack_278,FUN_007110a0);
    uVar4 = param_1[2];
    uVar5 = *param_1;
    *(undefined8 *)(uVar4 + uVar5) = *(undefined8 *)(uVar4 - 1);
    *(undefined1 *)(uVar4 + uVar5) = 0xff;
    if (local_78 == apuStack_278) {
      lVar2 = 0;
    }
    else {
      pppuVar1 = &local_78;
      if (local_58 == '\0') {
        pppuVar1 = (undefined8 ***)local_78;
      }
      lVar2 = FUN_00710ca0(param_1,param_2,apuStack_278,pppuVar1,param_4);
      if (local_58 == '\x01') {
        lVar3 = FUN_00711154(apuStack_278,param_1,param_2,param_4);
        lVar2 = lVar3 + lVar2;
      }
    }
    return lVar2;
  }
  if (*param_1 >> 0x1d == 0) {
    lVar2 = FUN_00710e70();
    return lVar2;
  }
  lVar2 = FUN_00710f88(param_1,param_2,param_3,param_4);
  return lVar2;
}


// ===== 00710c78  FUN_00710c78 =====

void FUN_00710c78(long param_1,uint param_2,uint param_3,int param_4)

{
  **(uint **)(param_1 + 0x200) = param_2 & 0x7f | (param_3 & 0xfff) << 7 | param_4 << 0x13;
  *(long *)(param_1 + 0x200) = *(long *)(param_1 + 0x200) + 4;
  return;
}


// ===== 00710ca0  FUN_00710ca0 =====

long FUN_00710ca0(ulong *param_1,long param_2,uint *param_3,uint *param_4,long param_5)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  uint *puVar8;
  long lVar9;
  ulong uVar10;
  code *pcVar11;
  
  if (param_3 < param_4) {
    uVar2 = param_1[2];
    uVar3 = param_1[3];
    uVar10 = *param_1;
    uVar4 = *(uint *)(param_2 + 8);
    pcVar11 = *(code **)(param_2 + 0x20);
    lVar9 = 0;
    do {
      uVar7 = uVar10 & *param_3 >> 0x13;
      if (*(char *)(uVar2 + uVar7) + 1 < 0 == SCARRY4((int)*(char *)(uVar2 + uVar7),1)) {
        uVar5 = *(ulong *)(uVar2 + uVar7) & (*(ulong *)(uVar2 + uVar7) << 7 ^ 0xffffffffffffffff) &
                0x8080808080808080;
        if (uVar5 == 0) {
          lVar6 = 0;
          do {
            lVar6 = lVar6 + 8;
            uVar7 = lVar6 + uVar7 & uVar10;
            uVar5 = *(ulong *)(uVar2 + uVar7) &
                    (*(ulong *)(uVar2 + uVar7) << 7 ^ 0xffffffffffffffff) & 0x8080808080808080;
          } while (uVar5 == 0);
        }
        else {
          lVar6 = 0;
        }
        uVar5 = (uVar5 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar5 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
        uVar7 = uVar7 + ((ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3) & uVar10;
      }
      else {
        lVar6 = 0;
      }
      lVar9 = lVar6 + lVar9;
      (*pcVar11)(param_1,uVar3 + uVar7 * uVar4,
                 param_5 + ((ulong)(*param_3 >> 7) & 0xfff) * (ulong)uVar4,1);
      puVar8 = param_3 + 1;
      uVar5 = param_1[2];
      bVar1 = (byte)*param_3 & 0x7f;
      *(byte *)(uVar5 + uVar7) = bVar1;
      *(byte *)(uVar5 + (*param_1 & uVar7 - 7) + 7) = bVar1;
      param_3 = puVar8;
    } while (puVar8 < param_4);
  }
  else {
    lVar9 = 0;
  }
  return lVar9;
}


// ===== 00710dd0  FUN_00710dd0 =====

ulong FUN_00710dd0(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong local_28;
  ulong local_20;
  undefined8 uStack_18;
  
  local_20 = param_3 & param_2;
  uStack_18 = 0;
  if (*(char *)(param_1 + local_20) + 1 < 0 == SCARRY4((int)*(char *)(param_1 + local_20),1)) {
    local_28 = param_3;
    uVar1 = FUN_00710e28(param_1,&local_28);
    uVar1 = (uVar1 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar1 & 0x5555555555555555) << 1;
    uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
    uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
    uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
    local_20 = local_20 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & local_28;
  }
  return local_20;
}


// ===== 00710e28  FUN_00710e28 =====

ulong FUN_00710e28(long param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = param_2[1];
  uVar2 = *(ulong *)(param_1 + uVar3) & (*(ulong *)(param_1 + uVar3) << 7 ^ 0xffffffffffffffff) &
          0x8080808080808080;
  if (uVar2 == 0) {
    uVar1 = param_2[2];
    do {
      uVar1 = uVar1 + 8;
      uVar3 = *param_2 & uVar3 + uVar1;
      param_2[1] = uVar3;
      param_2[2] = uVar1;
      uVar2 = *(ulong *)(param_1 + uVar3) & (*(ulong *)(param_1 + uVar3) << 7 ^ 0xffffffffffffffff)
              & 0x8080808080808080;
    } while (uVar2 == 0);
  }
  return uVar2;
}


// ===== 00710e70  FUN_00710e70 =====

long FUN_00710e70(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 ***pppuVar1;
  long lVar2;
  long lVar3;
  undefined8 *apuStack_278 [64];
  undefined8 **local_78;
  undefined8 **local_70;
  undefined8 local_68;
  undefined8 local_60;
  char local_58;
  
  memset(apuStack_278,0xaa,0x228);
  local_60 = 0xffffffffffffffff;
  local_58 = '\0';
  local_78 = apuStack_278;
  local_70 = &local_78;
  local_68 = param_3;
  (**(code **)(param_2 + 0x40))(param_1,param_3,param_4,apuStack_278,FUN_00711360);
  lVar2 = param_1[2];
  lVar3 = *param_1;
  *(undefined8 *)(lVar2 + lVar3) = *(undefined8 *)(lVar2 + -1);
  *(undefined1 *)(lVar2 + lVar3) = 0xff;
  if (local_78 == apuStack_278) {
    lVar2 = 0;
  }
  else {
    pppuVar1 = &local_78;
    if (local_58 == '\0') {
      pppuVar1 = (undefined8 ***)local_78;
    }
    lVar2 = FUN_00711414(param_1,param_2,apuStack_278,pppuVar1,param_4);
    if (local_58 == '\x01') {
      lVar3 = FUN_00711544(apuStack_278,param_1,param_2,param_4);
      lVar2 = lVar3 + lVar2;
    }
  }
  return lVar2;
}


// ===== 00710f88  FUN_00710f88 =====

long FUN_00710f88(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 ***pppuVar1;
  long lVar2;
  long lVar3;
  undefined8 *apuStack_278 [64];
  undefined8 **local_78;
  undefined8 **local_70;
  undefined8 local_68;
  undefined8 local_60;
  char local_58;
  
  memset(apuStack_278,0xaa,0x228);
  local_60 = 0xffffffffffffffff;
  local_58 = '\0';
  local_78 = apuStack_278;
  local_70 = &local_78;
  local_68 = param_3;
  (**(code **)(param_2 + 0x40))(param_1,param_3,param_4,apuStack_278,FUN_007115d4);
  lVar2 = param_1[2];
  lVar3 = *param_1;
  *(undefined8 *)(lVar2 + lVar3) = *(undefined8 *)(lVar2 + -1);
  *(undefined1 *)(lVar2 + lVar3) = 0xff;
  if (local_78 == apuStack_278) {
    lVar2 = 0;
  }
  else {
    pppuVar1 = &local_78;
    if (local_58 == '\0') {
      pppuVar1 = (undefined8 ***)local_78;
    }
    lVar2 = FUN_00711684(param_1,param_2,apuStack_278,pppuVar1,param_4);
    if (local_58 == '\x01') {
      lVar3 = FUN_007117c0(apuStack_278,param_1,param_2,param_4);
      lVar2 = lVar3 + lVar2;
    }
  }
  return lVar2;
}


// ===== 007110a0  FUN_007110a0 =====

void FUN_007110a0(long param_1,uint param_2,uint param_3,int param_4)

{
  if (*(uint **)(param_1 + 0x200) < *(uint **)(param_1 + 0x208)) {
    **(uint **)(param_1 + 0x200) = param_2 & 0x7f | (param_3 & 0xfff) << 7 | param_4 << 0x13;
    *(long *)(param_1 + 0x200) = *(long *)(param_1 + 0x200) + 4;
    return;
  }
  FUN_007110d8();
  return;
}


// ===== 007110d8  FUN_007110d8 =====

void FUN_007110d8(long param_1,uint param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  
  if ((*(byte *)(param_1 + 0x220) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x220) = 1;
    *(ulong *)(param_1 + 0x200) = *(long *)(param_1 + 0x210) - 5U & 0xfffffffffffffffc;
  }
  uVar2 = ((ulong)param_2 & 0x7ff80) >> 7;
  puVar1 = (undefined1 *)(*(long *)(param_1 + 0x210) + uVar2);
  if (*(long *)(param_1 + 0x218) == -1) {
    *(undefined1 **)(param_1 + 0x208) = puVar1 + -3;
    if (*(uint **)(param_1 + 0x200) < puVar1 + -3) {
      **(uint **)(param_1 + 0x200) = param_2;
      *(long *)(param_1 + 0x200) = *(long *)(param_1 + 0x200) + 4;
      return;
    }
    *puVar1 = 0xff;
    *(ulong *)(param_1 + 0x218) = uVar2;
    return;
  }
  *puVar1 = 0xff;
  return;
}


// ===== 00711154  FUN_00711154 =====

long FUN_00711154(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_00710ca0(param_2,param_3,*(long *)(param_1 + 0x210) - 5U & 0xfffffffffffffffc,
                       *(undefined8 *)(param_1 + 0x200),param_4);
  if (*(long *)(param_1 + 0x218) != -1) {
    lVar2 = FUN_007111e4(param_2,param_3,*(undefined8 *)(param_1 + 0x210),param_4);
    lVar1 = lVar2 + lVar1;
  }
  return lVar1;
}


// ===== 007111e4  FUN_007111e4 =====

long FUN_007111e4(ulong *param_1,long param_2,long param_3,long param_4,ulong param_5)

{
  code *pcVar1;
  code *pcVar2;
  uint uVar3;
  byte bVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  
  uVar8 = *param_1;
  uVar3 = *(uint *)(param_2 + 8);
  uVar9 = param_1[3];
  uVar6 = (**(code **)(param_2 + 0x10))();
  if (param_5 < uVar8 >> 1) {
    pcVar1 = *(code **)(param_2 + 0x18);
    pcVar2 = *(code **)(param_2 + 0x20);
    uVar5 = param_1[1];
    lVar15 = 0;
    do {
      if (*(char *)(param_3 + param_5) == -1) {
        lVar16 = param_4 + param_5 * uVar3;
        uVar7 = (*pcVar1)(uVar6,lVar16,(long)(short)uVar5);
        uVar13 = *param_1;
        uVar10 = param_1[2];
        uVar11 = uVar13 & uVar7;
        if (*(char *)(uVar10 + uVar11) + 1 < 0 == SCARRY4((int)*(char *)(uVar10 + uVar11),1)) {
          uVar14 = *(ulong *)(uVar10 + uVar11) &
                   (*(ulong *)(uVar10 + uVar11) << 7 ^ 0xffffffffffffffff) & 0x8080808080808080;
          if (uVar14 == 0) {
            lVar12 = 0;
            do {
              lVar12 = lVar12 + 8;
              uVar11 = lVar12 + uVar11 & uVar13;
              uVar14 = *(ulong *)(uVar10 + uVar11) &
                       (*(ulong *)(uVar10 + uVar11) << 7 ^ 0xffffffffffffffff) & 0x8080808080808080;
            } while (uVar14 == 0);
          }
          else {
            lVar12 = 0;
          }
          uVar14 = (uVar14 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar14 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
          uVar11 = uVar11 + ((ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3) & uVar13;
        }
        else {
          lVar12 = 0;
        }
        bVar4 = (byte)(uVar7 >> 0x38);
        *(byte *)(uVar10 + uVar11) = bVar4 >> 1;
        lVar15 = lVar12 + lVar15;
        *(byte *)(uVar10 + (*param_1 & uVar11 - 7) + 7) = bVar4 >> 1;
        (*pcVar2)(param_1,uVar9 + uVar11 * uVar3,lVar16,1);
      }
      param_5 = param_5 + 1;
    } while (param_5 != uVar8 >> 1);
  }
  else {
    lVar15 = 0;
  }
  return lVar15;
}


// ===== 00711360  FUN_00711360 =====

void FUN_00711360(long param_1,ulong param_2,ulong param_3,long param_4)

{
  if (*(ulong **)(param_1 + 0x200) < *(ulong **)(param_1 + 0x208)) {
    **(ulong **)(param_1 + 0x200) = param_2 & 0x7f | (param_3 & 0xfffffff) << 7 | param_4 << 0x23;
    *(long *)(param_1 + 0x200) = *(long *)(param_1 + 0x200) + 8;
    return;
  }
  FUN_00711398();
  return;
}


// ===== 00711398  FUN_00711398 =====

void FUN_00711398(long param_1,ulong param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  
  if ((*(byte *)(param_1 + 0x220) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x220) = 1;
    *(ulong *)(param_1 + 0x200) = *(long *)(param_1 + 0x210) - 1U & 0xfffffffffffffff8;
  }
  uVar2 = param_2 >> 7 & 0xfffffff;
  puVar1 = (undefined1 *)(*(long *)(param_1 + 0x210) + uVar2);
  if (*(long *)(param_1 + 0x218) == -1) {
    *(undefined1 **)(param_1 + 0x208) = puVar1 + -7;
    if (*(ulong **)(param_1 + 0x200) < puVar1 + -7) {
      **(ulong **)(param_1 + 0x200) = param_2;
      *(long *)(param_1 + 0x200) = *(long *)(param_1 + 0x200) + 8;
      return;
    }
    *puVar1 = 0xff;
    *(ulong *)(param_1 + 0x218) = uVar2;
    return;
  }
  *puVar1 = 0xff;
  return;
}


// ===== 00711414  FUN_00711414 =====

long FUN_00711414(ulong *param_1,long param_2,ulong *param_3,ulong *param_4,long param_5)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  code *pcVar11;
  
  if (param_3 < param_4) {
    uVar2 = param_1[2];
    uVar3 = param_1[3];
    uVar10 = *param_1;
    uVar4 = *(uint *)(param_2 + 8);
    pcVar11 = *(code **)(param_2 + 0x20);
    lVar9 = 0;
    do {
      uVar7 = uVar10 & *param_3 >> 0x23;
      if (*(char *)(uVar2 + uVar7) + 1 < 0 == SCARRY4((int)*(char *)(uVar2 + uVar7),1)) {
        uVar5 = *(ulong *)(uVar2 + uVar7) & (*(ulong *)(uVar2 + uVar7) << 7 ^ 0xffffffffffffffff) &
                0x8080808080808080;
        if (uVar5 == 0) {
          lVar6 = 0;
          do {
            lVar6 = lVar6 + 8;
            uVar7 = lVar6 + uVar7 & uVar10;
            uVar5 = *(ulong *)(uVar2 + uVar7) &
                    (*(ulong *)(uVar2 + uVar7) << 7 ^ 0xffffffffffffffff) & 0x8080808080808080;
          } while (uVar5 == 0);
        }
        else {
          lVar6 = 0;
        }
        uVar5 = (uVar5 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar5 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
        uVar7 = uVar7 + ((ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3) & uVar10;
      }
      else {
        lVar6 = 0;
      }
      lVar9 = lVar6 + lVar9;
      (*pcVar11)(param_1,uVar3 + uVar7 * uVar4,param_5 + (*param_3 >> 7 & 0xfffffff) * (ulong)uVar4,
                 1);
      puVar8 = param_3 + 1;
      uVar5 = param_1[2];
      bVar1 = (byte)*param_3 & 0x7f;
      *(byte *)(uVar5 + uVar7) = bVar1;
      *(byte *)(uVar5 + (*param_1 & uVar7 - 7) + 7) = bVar1;
      param_3 = puVar8;
    } while (puVar8 < param_4);
  }
  else {
    lVar9 = 0;
  }
  return lVar9;
}


// ===== 00711544  FUN_00711544 =====

long FUN_00711544(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_00711414(param_2,param_3,*(long *)(param_1 + 0x210) - 1U & 0xfffffffffffffff8,
                       *(undefined8 *)(param_1 + 0x200),param_4);
  if (*(long *)(param_1 + 0x218) != -1) {
    lVar2 = FUN_007111e4(param_2,param_3,*(undefined8 *)(param_1 + 0x210),param_4);
    lVar1 = lVar2 + lVar1;
  }
  return lVar1;
}


// ===== 007115d4  FUN_007115d4 =====

void FUN_007115d4(long param_1,ulong param_2,long param_3,ulong param_4)

{
  ulong *puVar1;
  
  puVar1 = *(ulong **)(param_1 + 0x200);
  if (puVar1 < *(ulong **)(param_1 + 0x208)) {
    *puVar1 = param_2 & 0x7f | param_3 << 7;
    puVar1[1] = param_4 & 0x3ffffffffffffff;
    *(long *)(param_1 + 0x200) = *(long *)(param_1 + 0x200) + 0x10;
    return;
  }
  FUN_00711608();
  return;
}


// ===== 00711608  FUN_00711608 =====

void FUN_00711608(long param_1,ulong param_2,ulong param_3)

{
  undefined1 *puVar1;
  ulong *puVar2;
  
  if ((*(byte *)(param_1 + 0x220) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x220) = 1;
    *(ulong *)(param_1 + 0x200) = *(long *)(param_1 + 0x210) - 1U & 0xfffffffffffffff8;
  }
  puVar1 = (undefined1 *)(*(long *)(param_1 + 0x210) + (param_2 >> 7));
  if (*(long *)(param_1 + 0x218) == -1) {
    puVar2 = *(ulong **)(param_1 + 0x200);
    *(undefined1 **)(param_1 + 0x208) = puVar1 + -0xf;
    if (puVar2 < puVar1 + -0xf) {
      *puVar2 = param_2;
      puVar2[1] = param_3;
      *(long *)(param_1 + 0x200) = *(long *)(param_1 + 0x200) + 0x10;
      return;
    }
    *puVar1 = 0xff;
    *(ulong *)(param_1 + 0x218) = param_2 >> 7;
    return;
  }
  *puVar1 = 0xff;
  return;
}


// ===== 00711684  FUN_00711684 =====

long FUN_00711684(ulong *param_1,long param_2,ulong *param_3,ulong *param_4,long param_5)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  code *pcVar11;
  
  if (param_3 < param_4) {
    uVar2 = param_1[2];
    uVar3 = param_1[3];
    uVar10 = *param_1;
    uVar4 = *(uint *)(param_2 + 8);
    pcVar11 = *(code **)(param_2 + 0x20);
    lVar9 = 0;
    do {
      uVar7 = uVar10 & 0x3ffffffffffffff & param_3[1];
      if (*(char *)(uVar2 + uVar7) + 1 < 0 == SCARRY4((int)*(char *)(uVar2 + uVar7),1)) {
        uVar6 = *(ulong *)(uVar2 + uVar7) & (*(ulong *)(uVar2 + uVar7) << 7 ^ 0xffffffffffffffff) &
                0x8080808080808080;
        if (uVar6 == 0) {
          lVar5 = 0;
          do {
            lVar5 = lVar5 + 8;
            uVar7 = lVar5 + uVar7 & uVar10;
            uVar6 = *(ulong *)(uVar2 + uVar7) &
                    (*(ulong *)(uVar2 + uVar7) << 7 ^ 0xffffffffffffffff) & 0x8080808080808080;
          } while (uVar6 == 0);
        }
        else {
          lVar5 = 0;
        }
        uVar6 = (uVar6 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar6 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        uVar7 = uVar7 + ((ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 3) & uVar10;
      }
      else {
        lVar5 = 0;
      }
      lVar9 = lVar5 + lVar9;
      (*pcVar11)(param_1,uVar3 + uVar7 * uVar4,param_5 + (*param_3 >> 7) * (ulong)uVar4,1);
      puVar8 = param_3 + 2;
      uVar6 = param_1[2];
      bVar1 = (byte)*param_3 & 0x7f;
      *(byte *)(uVar6 + uVar7) = bVar1;
      *(byte *)(uVar6 + (*param_1 & uVar7 - 7) + 7) = bVar1;
      param_3 = puVar8;
    } while (puVar8 < param_4);
  }
  else {
    lVar9 = 0;
  }
  return lVar9;
}


// ===== 007117c0  FUN_007117c0 =====

long FUN_007117c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_00711684(param_2,param_3,*(long *)(param_1 + 0x210) - 1U & 0xfffffffffffffff8,
                       *(undefined8 *)(param_1 + 0x200),param_4);
  if (*(long *)(param_1 + 0x218) != -1) {
    lVar2 = FUN_007111e4(param_2,param_3,*(undefined8 *)(param_1 + 0x210),param_4);
    lVar1 = lVar2 + lVar1;
  }
  return lVar1;
}


// ===== 00711850  FUN_00711850 =====

void FUN_00711850(void)

{
  return;
}


// ===== 00711858  FUN_00711858 =====

uint * FUN_00711858(ulong *param_1,uint param_2,long *param_3)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  size_t __n;
  ulong uVar4;
  byte *pbVar5;
  undefined8 *__dest;
  ulong uVar6;
  
  if ((*param_1 & 1) == 0) {
    uVar6 = 1;
    if (0x7ffffffe < param_2) {
      param_2 = 1;
      lVar3 = 8;
      goto joined_r0x00711908;
    }
    param_2 = param_2 + 1;
  }
  else {
    uVar1 = *(uint *)(*param_1 - 1);
    uVar6 = (ulong)uVar1;
    param_2 = uVar1 + param_2;
    if ((int)param_2 < 1) {
      param_2 = 1;
      lVar3 = 8;
      goto joined_r0x00711908;
    }
    if (0x3ffffffb < (int)uVar1) {
      param_2 = 0x7fffffff;
      lVar3 = 0x3fffffff8;
      goto joined_r0x00711908;
    }
  }
  if ((int)param_2 < (int)((int)uVar6 << 1 | 1U)) {
    param_2 = (int)uVar6 * 2 + 1;
  }
  lVar3 = (ulong)param_2 << 3;
joined_r0x00711908:
  if (param_3 == (long *)0x0) {
    puVar2 = (uint *)operator_new(lVar3 + 8);
  }
  else {
    puVar2 = (uint *)FUN_006fdcd0(param_3,lVar3 + 0xfU & 0x7fffffff8);
  }
  uVar4 = *param_1;
  if ((uVar4 & 1) == 0) {
    *puVar2 = param_2;
    puVar2[1] = (uint)(*param_1 != 0);
    *(ulong *)(puVar2 + 2) = *param_1;
  }
  else {
    *puVar2 = param_2;
    uVar1 = *(uint *)(uVar4 + 3);
    __dest = (undefined8 *)(uVar4 - 1);
    puVar2[1] = uVar1;
    memcpy(puVar2 + 2,(void *)(uVar4 + 7),(long)(int)uVar1 << 3);
    uVar6 = (-(uVar6 >> 0x1f) & 0xfffffff800000000 | uVar6 << 3) + 8;
    if (param_3 == (long *)0x0) {
      operator_delete(__dest);
    }
    else {
      lVar3 = __emutls_get_address(&DAT_00d5a2a0);
      if (*(long *)(lVar3 + 8) == *param_3) {
        pbVar5 = *(byte **)(lVar3 + 0x10);
        uVar4 = 0x3b - LZCOUNT(uVar6);
        if (uVar4 < *pbVar5) {
          lVar3 = *(long *)(pbVar5 + 0x30);
          *__dest = *(undefined8 *)(lVar3 + uVar4 * 8);
          *(undefined8 **)(lVar3 + uVar4 * 8) = __dest;
        }
        else {
          uVar4 = uVar6 >> 3;
          memmove(__dest,*(void **)(pbVar5 + 0x30),(ulong)*pbVar5 << 3);
          __n = uVar6 + (ulong)*pbVar5 * -8;
          if (0 < (long)__n) {
            memset(__dest + *pbVar5,0,__n);
          }
          *(undefined8 **)(pbVar5 + 0x30) = __dest;
          if (0x3f < uVar4) {
            uVar4 = 0x40;
          }
          *pbVar5 = (byte)uVar4;
        }
      }
    }
  }
  *param_1 = (long)puVar2 + 1;
  return puVar2 + (long)(int)param_1[1] * 2 + 2;
}


// ===== 00711a3c  FUN_00711a3c =====

void FUN_00711a3c(ulong *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  ulong *puVar6;
  
  if (param_1[2] == 0) {
    uVar2 = *param_1;
    uVar3 = uVar2 & 1;
    if ((uVar2 & 1) == 0) {
      uVar4 = (uint)(uVar2 != 0);
    }
    else {
      uVar4 = *(uint *)(uVar2 + 3);
    }
    puVar1 = param_1;
    if (uVar3 != 0) {
      puVar1 = (ulong *)(uVar2 + 7);
    }
    if (0 < (int)uVar4) {
      uVar2 = (ulong)uVar4;
      iVar5 = 5;
      puVar6 = puVar1;
      do {
        if (iVar5 < (int)uVar4) {
          Hint_Prefetch(puVar1[iVar5],0,0,1);
        }
        if ((long *)*puVar6 != (long *)0x0) {
          (**(code **)(*(long *)*puVar6 + 8))();
        }
        uVar2 = uVar2 - 1;
        iVar5 = iVar5 + 1;
        puVar6 = puVar6 + 1;
      } while (uVar2 != 0);
      uVar2 = *param_1;
      uVar3 = uVar2 & 1;
    }
    if (uVar3 != 0) {
      operator_delete((void *)(uVar2 - 1));
    }
  }
  *param_1 = 0;
  return;
}


// ===== 00711b10  FUN_00711b10 =====

void FUN_00711b10(ulong *param_1,ulong *param_2,long param_3)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  bool bVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulong uVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  Hint_Prefetch(param_2 + 8,0,0,0);
  Hint_Prefetch(param_2 + 0x10,0,0,0);
  Hint_Prefetch(param_2 + 0x18,0,0,0);
  Hint_Prefetch(param_2 + 0x20,0,0,0);
  Hint_Prefetch(param_2 + 0x28,0,0,0);
  iVar12 = (int)param_2[1];
  uVar10 = *param_1;
  iVar1 = iVar12 + (int)param_1[1];
  if ((uVar10 & 1) == 0) {
    puVar7 = param_1;
    if (iVar1 < 2) {
LAB_00711ba8:
      puVar7 = puVar7 + (int)param_1[1];
      goto LAB_00711bac;
    }
    iVar11 = 1;
  }
  else {
    iVar11 = *(int *)(uVar10 - 1);
    if (iVar1 <= iVar11) {
      puVar7 = (ulong *)(uVar10 + 7);
      goto LAB_00711ba8;
    }
  }
  puVar7 = (ulong *)FUN_00711858(param_1,iVar1 - iVar11,param_3);
  iVar12 = (int)param_2[1];
  uVar10 = *param_1;
LAB_00711bac:
  if ((*param_2 & 1) != 0) {
    param_2 = (ulong *)(*param_2 + 7);
  }
  if ((uVar10 & 1) == 0) {
    uVar9 = (uint)(uVar10 != 0);
  }
  else {
    uVar9 = *(uint *)(uVar10 + 3);
  }
  iVar3 = uVar9 - (int)param_1[1];
  iVar11 = iVar12;
  if (iVar3 <= iVar12) {
    iVar11 = iVar3;
  }
  for (puVar5 = param_2; puVar5 < param_2 + iVar11; puVar5 = puVar5 + 1) {
    puVar8 = (undefined8 *)*puVar7;
    puVar13 = (undefined8 *)*puVar5;
    if (puVar8 != puVar13) {
      bVar2 = *(byte *)((long)puVar13 + 0x17);
      if (*(char *)((long)puVar8 + 0x17) < '\0') {
        uVar10 = puVar13[1];
        puVar4 = (undefined8 *)*puVar13;
        if (-1 < (char)bVar2) {
          uVar10 = (ulong)bVar2;
          puVar4 = puVar13;
        }
        FUN_00547f08(puVar8,puVar4,uVar10);
      }
      else if ((char)bVar2 < '\0') {
        FUN_00547fc0(puVar8,*puVar13,puVar13[1]);
      }
      else {
        uVar15 = puVar13[1];
        uVar14 = *puVar13;
        puVar8[2] = puVar13[2];
        puVar8[1] = uVar15;
        *puVar8 = uVar14;
      }
    }
    puVar7 = puVar7 + 1;
  }
  param_2 = param_2 + iVar12;
  bVar6 = puVar5 < param_2;
  if (param_3 == 0) {
    while (bVar6) {
      puVar8 = (undefined8 *)operator_new(0x18);
      puVar13 = (undefined8 *)*puVar5;
      if (*(char *)((long)puVar13 + 0x17) < '\0') {
        FUN_005478d8(puVar8,*puVar13,puVar13[1]);
      }
      else {
        uVar15 = puVar13[1];
        uVar14 = *puVar13;
        puVar8[2] = puVar13[2];
        puVar8[1] = uVar15;
        *puVar8 = uVar14;
      }
      puVar5 = puVar5 + 1;
      *puVar7 = (ulong)puVar8;
      bVar6 = puVar5 < param_2;
      puVar7 = puVar7 + 1;
    }
  }
  else {
    while (bVar6) {
      puVar13 = (undefined8 *)*puVar5;
      puVar8 = (undefined8 *)FUN_006fdb6c(param_3);
      if (*(char *)((long)puVar13 + 0x17) < '\0') {
        FUN_005478d8(puVar8,*puVar13,puVar13[1]);
      }
      else {
        uVar15 = puVar13[1];
        uVar14 = *puVar13;
        puVar8[2] = puVar13[2];
        puVar8[1] = uVar15;
        *puVar8 = uVar14;
      }
      puVar5 = puVar5 + 1;
      *puVar7 = (ulong)puVar8;
      bVar6 = puVar5 < param_2;
      puVar7 = puVar7 + 1;
    }
  }
  uVar10 = *param_1;
  *(int *)(param_1 + 1) = iVar1;
  if ((uVar10 & 1) == 0) {
    uVar9 = (uint)(uVar10 != 0);
  }
  else {
    uVar9 = *(uint *)(uVar10 + 3);
  }
  if ((int)uVar9 < iVar1) {
    *(int *)(uVar10 + 3) = iVar1;
  }
  return;
}


// ===== 00711d4c  FUN_00711d4c =====

ulong FUN_00711d4c(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  
  Hint_Prefetch(param_2 + 8,0,0,0);
  Hint_Prefetch(param_2 + 0x10,0,0,0);
  Hint_Prefetch(param_2 + 0x18,0,0,0);
  Hint_Prefetch(param_2 + 0x20,0,0,0);
  Hint_Prefetch(param_2 + 0x28,0,0,0);
  uVar4 = *param_1;
  uVar7 = param_1[1];
  if ((uVar4 & 1) != 0) {
    param_1 = (ulong *)(uVar4 + 7);
  }
  puVar5 = param_2;
  if ((*param_2 & 1) != 0) {
    puVar5 = (ulong *)(*param_2 + 7);
  }
  if ((uVar4 & 1) == 0) {
    uVar3 = (uint)(uVar4 != 0);
  }
  else {
    uVar3 = *(uint *)(uVar4 + 3);
  }
  uVar3 = uVar3 - (int)uVar7;
  uVar1 = (uint)param_2[1];
  if ((int)uVar3 <= (int)(uint)param_2[1]) {
    uVar1 = uVar3;
  }
  lVar2 = (**(code **)(*(long *)*puVar5 + 0x20))();
  if (0 < (int)uVar1) {
    puVar6 = param_1 + (int)uVar7;
    uVar7 = (ulong)uVar1;
    do {
      (**(code **)(lVar2 + 0x20))(*puVar6,*puVar5);
      uVar7 = uVar7 - 1;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    } while (uVar7 != 0);
  }
  return (ulong)uVar1;
}


// ===== 00711e1c  FUN_00711e1c =====

void FUN_00711e1c(ulong *param_1,ulong *param_2,long param_3)

{
  ulong *puVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  ulong uVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong *puVar14;
  int iVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  Hint_Prefetch(param_2 + 8,0,0,0);
  Hint_Prefetch(param_2 + 0x10,0,0,0);
  Hint_Prefetch(param_2 + 0x18,0,0,0);
  Hint_Prefetch(param_2 + 0x20,0,0,0);
  Hint_Prefetch(param_2 + 0x28,0,0,0);
  iVar15 = (int)param_2[1];
  uVar8 = *param_1;
  iVar2 = iVar15 + (int)param_1[1];
  if ((uVar8 & 1) == 0) {
    puVar4 = param_1;
    if (1 < iVar2) {
      iVar9 = 1;
LAB_00711e8c:
      puVar4 = (ulong *)FUN_00711858(param_1,iVar2 - iVar9,param_3);
      iVar15 = (int)param_2[1];
      goto LAB_00711eb0;
    }
  }
  else {
    iVar9 = *(int *)(uVar8 - 1);
    if (iVar9 < iVar2) goto LAB_00711e8c;
    puVar4 = (ulong *)(uVar8 + 7);
  }
  puVar4 = puVar4 + (int)param_1[1];
LAB_00711eb0:
  puVar14 = param_2;
  if ((*param_2 & 1) != 0) {
    puVar14 = (ulong *)(*param_2 + 7);
  }
  puVar5 = (undefined8 *)(**(code **)(*(long *)*puVar14 + 0x20))();
  uVar8 = *param_1;
  if ((uVar8 & 1) == 0) {
    uVar7 = (uint)(uVar8 != 0);
  }
  else {
    uVar7 = *(uint *)(uVar8 + 3);
  }
  puVar1 = puVar14 + iVar15;
  if (0 < (int)(uVar7 - (int)param_1[1])) {
    uVar8 = FUN_00711d4c(param_1,param_2);
    uVar8 = -(uVar8 >> 0x1f & 1) & 0xfffffff800000000 | (uVar8 & 0xffffffff) << 3;
    puVar4 = (ulong *)((long)puVar4 + uVar8);
    puVar14 = (ulong *)((long)puVar14 + uVar8);
  }
  for (; puVar14 < puVar1; puVar14 = puVar14 + 1) {
    puVar13 = (undefined8 *)*puVar5;
    if (param_3 == 0) {
      puVar6 = (undefined8 *)operator_new((ulong)*(uint *)(puVar5 + 5));
    }
    else {
      puVar6 = (undefined8 *)FUN_006fdbf0(param_3,(ulong)*(uint *)(puVar5 + 5) + 7 & 0x1fffffff8);
    }
    if (*(char *)((long)puVar5 + 0x2c) < '\0') {
      puVar6 = (undefined8 *)(*(code *)puVar5[6])(puVar13,puVar6,param_3);
    }
    else {
      uVar7 = *(uint *)(puVar5 + 5);
      uVar8 = (ulong)uVar7;
      if (*(char *)((long)puVar5 + 0x2c) == '\0') {
        if (uVar7 < 0x21) {
          *(undefined8 *)((long)puVar6 + (uVar8 - 0x10)) = 0;
          *(undefined8 *)((long)puVar6 + (uVar8 - 8)) = 0;
        }
        else if (uVar7 < 0x41) {
          puVar6[2] = 0;
          puVar6[3] = 0;
          *(undefined8 *)((long)puVar6 + (uVar8 - 0x18)) = 0;
          *(undefined8 *)((long)puVar6 + (uVar8 - 0x20)) = 0;
          *(undefined8 *)((long)puVar6 + (uVar8 - 8)) = 0;
          *(undefined8 *)((long)puVar6 + (uVar8 - 0x10)) = 0;
        }
        else {
          if (0x50 < uVar7) {
            puVar10 = puVar6 + 10;
            uVar12 = 0x50;
            do {
              uVar12 = uVar12 + 0x40;
              Hint_Prefetch(puVar10,2,0,0);
              puVar10[-7] = 0;
              puVar10[-8] = 0;
              puVar10[-5] = 0;
              puVar10[-6] = 0;
              puVar10[-3] = 0;
              puVar10[-4] = 0;
              puVar10[-1] = 0;
              puVar10[-2] = 0;
              puVar10 = puVar10 + 8;
            } while (uVar12 < uVar8);
          }
          *(undefined8 *)((long)puVar6 + (uVar8 - 0x38)) = 0;
          *(undefined8 *)((long)puVar6 + (uVar8 - 0x40)) = 0;
          *(undefined8 *)((long)puVar6 + (uVar8 - 0x28)) = 0;
          *(undefined8 *)((long)puVar6 + (uVar8 - 0x30)) = 0;
          *(undefined8 *)((long)puVar6 + (uVar8 - 0x18)) = 0;
          *(undefined8 *)((long)puVar6 + (uVar8 - 0x20)) = 0;
          *(undefined8 *)((long)puVar6 + (uVar8 - 8)) = 0;
          *(undefined8 *)((long)puVar6 + (uVar8 - 0x10)) = 0;
        }
      }
      else if (uVar7 < 0x21) {
        uVar16 = *(undefined8 *)((long)puVar13 + (uVar8 - 0x10));
        *(undefined8 *)((long)puVar6 + (uVar8 - 8)) = *(undefined8 *)((long)puVar13 + (uVar8 - 8));
        *(undefined8 *)((long)puVar6 + (uVar8 - 0x10)) = uVar16;
      }
      else if (uVar7 < 0x41) {
        uVar16 = puVar13[2];
        puVar6[3] = puVar13[3];
        puVar6[2] = uVar16;
        uVar18 = *(undefined8 *)((long)puVar13 + (uVar8 - 0x20));
        uVar17 = *(undefined8 *)((long)puVar13 + (uVar8 - 8));
        uVar16 = *(undefined8 *)((long)puVar13 + (uVar8 - 0x10));
        *(undefined8 *)((long)puVar6 + (uVar8 - 0x18)) =
             *(undefined8 *)((long)puVar13 + (uVar8 - 0x18));
        *(undefined8 *)((long)puVar6 + (uVar8 - 0x20)) = uVar18;
        *(undefined8 *)((long)puVar6 + (uVar8 - 8)) = uVar17;
        *(undefined8 *)((long)puVar6 + (uVar8 - 0x10)) = uVar16;
      }
      else {
        if (0x50 < uVar7) {
          puVar10 = puVar6 + 10;
          puVar11 = puVar13 + 10;
          uVar12 = 0x50;
          do {
            Hint_Prefetch(puVar11,0,0,0);
            Hint_Prefetch(puVar10,2,0,0);
            uVar12 = uVar12 + 0x40;
            puVar3 = puVar11 + -3;
            uVar18 = puVar11[-4];
            uVar17 = puVar11[-1];
            uVar16 = puVar11[-2];
            uVar20 = puVar11[-7];
            uVar19 = puVar11[-8];
            uVar22 = puVar11[-5];
            uVar21 = puVar11[-6];
            puVar11 = puVar11 + 8;
            puVar10[-3] = *puVar3;
            puVar10[-4] = uVar18;
            puVar10[-1] = uVar17;
            puVar10[-2] = uVar16;
            puVar10[-7] = uVar20;
            puVar10[-8] = uVar19;
            puVar10[-5] = uVar22;
            puVar10[-6] = uVar21;
            puVar10 = puVar10 + 8;
          } while (uVar12 < uVar8);
        }
        uVar18 = *(undefined8 *)((long)puVar13 + (uVar8 - 0x20));
        uVar17 = *(undefined8 *)((long)puVar13 + (uVar8 - 8));
        uVar16 = *(undefined8 *)((long)puVar13 + (uVar8 - 0x10));
        uVar20 = *(undefined8 *)((long)puVar13 + (uVar8 - 0x38));
        uVar19 = *(undefined8 *)((long)puVar13 + (uVar8 - 0x40));
        uVar22 = *(undefined8 *)((long)puVar13 + (uVar8 - 0x28));
        uVar21 = *(undefined8 *)((long)puVar13 + (uVar8 - 0x30));
        *(undefined8 *)((long)puVar6 + (uVar8 - 0x18)) =
             *(undefined8 *)((long)puVar13 + (uVar8 - 0x18));
        *(undefined8 *)((long)puVar6 + (uVar8 - 0x20)) = uVar18;
        *(undefined8 *)((long)puVar6 + (uVar8 - 8)) = uVar17;
        *(undefined8 *)((long)puVar6 + (uVar8 - 0x10)) = uVar16;
        *(undefined8 *)((long)puVar6 + (uVar8 - 0x38)) = uVar20;
        *(undefined8 *)((long)puVar6 + (uVar8 - 0x40)) = uVar19;
        *(undefined8 *)((long)puVar6 + (uVar8 - 0x28)) = uVar22;
        *(undefined8 *)((long)puVar6 + (uVar8 - 0x30)) = uVar21;
      }
      if (param_3 != 0) {
        for (uVar8 = puVar5[6]; uVar8 != 0; uVar8 = uVar8 - 1 & uVar8) {
          uVar12 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
          uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
          uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
          uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
          puVar6[LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20)] = param_3;
        }
      }
      *puVar6 = *puVar13;
      puVar6[1] = param_3;
    }
    *puVar4 = (ulong)puVar6;
    (*(code *)puVar5[4])(puVar6,*puVar14);
    puVar4 = puVar4 + 1;
  }
  uVar8 = *param_1;
  *(int *)(param_1 + 1) = iVar2;
  if ((uVar8 & 1) == 0) {
    uVar7 = (uint)(uVar8 != 0);
  }
  else {
    uVar7 = *(uint *)(uVar8 + 3);
  }
  if ((int)uVar7 < iVar2) {
    *(int *)(uVar8 + 3) = iVar2;
  }
  return;
}


// ===== 0071211c  FUN_0071211c =====

uint FUN_0071211c(uint param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar8 = (ulong)(*param_2 >> 0x10);
  uVar6 = (long)(int)param_1 - (long)(short)*param_2;
  uVar7 = uVar6 - uVar8;
  if (uVar6 < uVar8) {
    return 1;
  }
  uVar2 = param_2[1];
  if ((ushort)uVar2 <= uVar7) {
    uVar7 = 0;
    do {
      bVar4 = uVar2 >> 0x10 <= uVar7;
      uVar5 = (uint)!bVar4;
      if (bVar4) {
        return uVar5;
      }
      lVar3 = uVar7 + 2;
      lVar1 = 1;
      if ((int)param_2[(ulong)(uVar2 >> 5 & 0x7ff) + lVar3] <= (int)param_1) {
        lVar1 = 2;
      }
      uVar7 = lVar1 + uVar7 * 2;
    } while (param_2[(ulong)(uVar2 >> 5 & 0x7ff) + lVar3] != param_1);
    return uVar5;
  }
  return param_2[(uVar7 >> 5) + 2] >> (ulong)((uint)uVar7 & 0x1f) & 1;
}


// ===== 007121a4  FUN_007121a4 =====

void FUN_007121a4(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  void *__src;
  void *pvVar3;
  undefined4 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  size_t __n;
  ulong uVar8;
  void *__dest;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  ulong uVar12;
  
  __src = (void *)*param_1;
  puVar4 = (undefined4 *)param_1[1];
  __n = (long)puVar4 - (long)__src;
  uVar12 = (long)__n >> 2;
  uVar6 = param_2 - uVar12;
  iVar9 = (int)puVar4;
  if (param_2 < uVar12 || uVar6 == 0) {
    if (param_2 < uVar12) {
      puVar11 = (undefined4 *)((long)__src + param_2 * 4);
      uVar6 = (ulong)(((long)puVar11 - (long)puVar4 << 0x3e) - ((long)puVar11 - (long)puVar4)) >> 2;
      uVar12 = (ulong)((long)puVar4 + (-4 - ((long)puVar4 << 0x3e))) >> 2;
      if (uVar12 <= uVar6) {
        uVar6 = uVar12;
      }
      if ((1 < uVar6) && ((((int)__src - iVar9 | -iVar9) & 3U) == 0)) {
        uVar6 = uVar6 & 0x3ffffffffffffffe;
        puVar4 = puVar4 + -uVar6;
        do {
          uVar6 = uVar6 - 2;
        } while (uVar6 != 0);
      }
      while (puVar4 != puVar11) {
        puVar4 = puVar4 + -1;
        if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      param_1[1] = puVar11;
    }
  }
  else {
    uVar8 = param_1[2] - (long)__src;
    if ((ulong)((long)uVar8 >> 2) < param_2) {
      if (param_2 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005da79c();
      }
      uVar1 = (long)uVar8 >> 1;
      if ((ulong)((long)uVar8 >> 1) <= param_2) {
        uVar1 = param_2;
      }
      if (0x7ffffffffffffffb < uVar8) {
        uVar1 = 0x3fffffffffffffff;
      }
      if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      pvVar3 = operator_new(uVar1 * 4);
      if (uVar6 * 4 == 0) {
        puVar11 = (undefined4 *)((long)pvVar3 + __n);
      }
      else {
        puVar11 = (undefined4 *)((long)pvVar3 + uVar6 * 4 + __n);
        uVar6 = (ulong)((long)__src + (-(long)pvVar3 - (long)puVar4)) >> 2;
        uVar8 = (param_2 * 4 - __n) - 4 >> 2;
        if (uVar8 <= uVar6) {
          uVar6 = uVar8;
        }
        if (uVar6 < 8) {
          puVar4 = (undefined4 *)((long)pvVar3 + __n);
        }
        else {
          puVar4 = (undefined4 *)((long)pvVar3 + __n);
          if ((((int)__src - iVar9) - (int)pvVar3 & 3U) == 0) {
            uVar8 = uVar6 + 1 & 7;
            uVar2 = 8;
            if (uVar8 != 0) {
              uVar2 = uVar8;
            }
            lVar5 = (uVar6 + 1) - uVar2;
            puVar7 = (undefined8 *)((long)pvVar3 + __n + 0x10);
            puVar4 = (undefined4 *)((long)pvVar3 + lVar5 * 4 + __n);
            do {
              lVar5 = lVar5 + -8;
              puVar7[-1] = 0;
              puVar7[-2] = 0;
              puVar7[1] = 0;
              *puVar7 = 0;
              puVar7 = puVar7 + 4;
            } while (lVar5 != 0);
          }
        }
        do {
          if (puVar4 == (undefined4 *)0x0) {
LAB_00712448:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          puVar10 = puVar4 + 1;
          *puVar4 = 0;
          puVar4 = puVar10;
        } while (puVar10 != puVar11);
      }
      __dest = (void *)((long)pvVar3 + uVar12 * -4 + __n);
      memcpy(__dest,__src,__n);
      *param_1 = __dest;
      param_1[1] = puVar11;
      param_1[2] = (void *)((long)pvVar3 + uVar1 * 4);
      if (__src != (void *)0x0) {
        operator_delete(__src);
        return;
      }
    }
    else {
      puVar11 = puVar4;
      if ((uVar6 & 0x3fffffffffffffff) != 0) {
        puVar11 = puVar4 + uVar6;
        uVar12 = (param_2 * 4 - __n) - 4 >> 2;
        uVar6 = (ulong)-(long)puVar4 >> 2;
        if (uVar12 <= (ulong)-(long)puVar4 >> 2) {
          uVar6 = uVar12;
        }
        if ((7 < uVar6) && ((-iVar9 & 3U) == 0)) {
          uVar12 = uVar6 + 1 & 7;
          uVar8 = 8;
          if (uVar12 != 0) {
            uVar8 = uVar12;
          }
          puVar7 = (undefined8 *)(puVar4 + 4);
          lVar5 = (uVar6 + 1) - uVar8;
          puVar4 = puVar4 + lVar5;
          do {
            lVar5 = lVar5 + -8;
            puVar7[-1] = 0;
            puVar7[-2] = 0;
            puVar7[1] = 0;
            *puVar7 = 0;
            puVar7 = puVar7 + 4;
          } while (lVar5 != 0);
        }
        do {
          if (puVar4 == (undefined4 *)0x0) goto LAB_00712448;
          puVar10 = puVar4 + 1;
          *puVar4 = 0;
          puVar4 = puVar10;
        } while (puVar10 != puVar11);
      }
      param_1[1] = puVar11;
    }
  }
  return;
}


// ===== 00712464  FUN_00712464 =====

void FUN_00712464(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  void *__src;
  void *pvVar3;
  undefined4 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  size_t __n;
  ulong uVar8;
  void *__dest;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  ulong uVar12;
  
  __src = (void *)*param_1;
  puVar4 = (undefined4 *)param_1[1];
  __n = (long)puVar4 - (long)__src;
  uVar12 = (long)__n >> 2;
  uVar6 = param_2 - uVar12;
  iVar9 = (int)puVar4;
  if (param_2 < uVar12 || uVar6 == 0) {
    if (param_2 < uVar12) {
      puVar11 = (undefined4 *)((long)__src + param_2 * 4);
      uVar6 = (ulong)(((long)puVar11 - (long)puVar4 << 0x3e) - ((long)puVar11 - (long)puVar4)) >> 2;
      uVar12 = (ulong)((long)puVar4 + (-4 - ((long)puVar4 << 0x3e))) >> 2;
      if (uVar12 <= uVar6) {
        uVar6 = uVar12;
      }
      if ((1 < uVar6) && ((((int)__src - iVar9 | -iVar9) & 3U) == 0)) {
        uVar6 = uVar6 & 0x3ffffffffffffffe;
        puVar4 = puVar4 + -uVar6;
        do {
          uVar6 = uVar6 - 2;
        } while (uVar6 != 0);
      }
      while (puVar4 != puVar11) {
        puVar4 = puVar4 + -1;
        if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      param_1[1] = puVar11;
    }
  }
  else {
    uVar8 = param_1[2] - (long)__src;
    if ((ulong)((long)uVar8 >> 2) < param_2) {
      if (param_2 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d348c();
      }
      uVar1 = (long)uVar8 >> 1;
      if ((ulong)((long)uVar8 >> 1) <= param_2) {
        uVar1 = param_2;
      }
      if (0x7ffffffffffffffb < uVar8) {
        uVar1 = 0x3fffffffffffffff;
      }
      if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      pvVar3 = operator_new(uVar1 * 4);
      if (uVar6 * 4 == 0) {
        puVar11 = (undefined4 *)((long)pvVar3 + __n);
      }
      else {
        puVar11 = (undefined4 *)((long)pvVar3 + uVar6 * 4 + __n);
        uVar6 = (ulong)((long)__src + (-(long)pvVar3 - (long)puVar4)) >> 2;
        uVar8 = (param_2 * 4 - __n) - 4 >> 2;
        if (uVar8 <= uVar6) {
          uVar6 = uVar8;
        }
        if (uVar6 < 8) {
          puVar4 = (undefined4 *)((long)pvVar3 + __n);
        }
        else {
          puVar4 = (undefined4 *)((long)pvVar3 + __n);
          if ((((int)__src - iVar9) - (int)pvVar3 & 3U) == 0) {
            uVar8 = uVar6 + 1 & 7;
            uVar2 = 8;
            if (uVar8 != 0) {
              uVar2 = uVar8;
            }
            lVar5 = (uVar6 + 1) - uVar2;
            puVar7 = (undefined8 *)((long)pvVar3 + __n + 0x10);
            puVar4 = (undefined4 *)((long)pvVar3 + lVar5 * 4 + __n);
            do {
              lVar5 = lVar5 + -8;
              puVar7[-1] = 0;
              puVar7[-2] = 0;
              puVar7[1] = 0;
              *puVar7 = 0;
              puVar7 = puVar7 + 4;
            } while (lVar5 != 0);
          }
        }
        do {
          if (puVar4 == (undefined4 *)0x0) {
LAB_00712708:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          puVar10 = puVar4 + 1;
          *puVar4 = 0;
          puVar4 = puVar10;
        } while (puVar10 != puVar11);
      }
      __dest = (void *)((long)pvVar3 + uVar12 * -4 + __n);
      memcpy(__dest,__src,__n);
      *param_1 = __dest;
      param_1[1] = puVar11;
      param_1[2] = (void *)((long)pvVar3 + uVar1 * 4);
      if (__src != (void *)0x0) {
        operator_delete(__src);
        return;
      }
    }
    else {
      puVar11 = puVar4;
      if ((uVar6 & 0x3fffffffffffffff) != 0) {
        puVar11 = puVar4 + uVar6;
        uVar12 = (param_2 * 4 - __n) - 4 >> 2;
        uVar6 = (ulong)-(long)puVar4 >> 2;
        if (uVar12 <= (ulong)-(long)puVar4 >> 2) {
          uVar6 = uVar12;
        }
        if ((7 < uVar6) && ((-iVar9 & 3U) == 0)) {
          uVar12 = uVar6 + 1 & 7;
          uVar8 = 8;
          if (uVar12 != 0) {
            uVar8 = uVar12;
          }
          puVar7 = (undefined8 *)(puVar4 + 4);
          lVar5 = (uVar6 + 1) - uVar8;
          puVar4 = puVar4 + lVar5;
          do {
            lVar5 = lVar5 + -8;
            puVar7[-1] = 0;
            puVar7[-2] = 0;
            puVar7[1] = 0;
            *puVar7 = 0;
            puVar7 = puVar7 + 4;
          } while (lVar5 != 0);
        }
        do {
          if (puVar4 == (undefined4 *)0x0) goto LAB_00712708;
          puVar10 = puVar4 + 1;
          *puVar4 = 0;
          puVar4 = puVar10;
        } while (puVar10 != puVar11);
      }
      param_1[1] = puVar11;
    }
  }
  return;
}


// ===== 00712724  FUN_00712724 =====

void FUN_00712724(long *param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_006dc23c(param_1,0);
  FUN_006dc000(plVar1,param_1);
  (**(code **)(*param_1 + 0x10))(param_1);
  FUN_006dc000(param_1,param_2);
  (**(code **)(*param_2 + 0x10))(param_2);
  FUN_006dc000(param_2,plVar1);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x007127ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))(plVar1);
    return;
  }
  return;
}


// ===== 007127c4  FUN_007127c4 =====

void FUN_007127c4(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_00d29e28;
  param_1[1] = param_2;
  return;
}


// ===== 007127d8  FUN_007127d8 =====

undefined8 FUN_007127d8(long param_1,long *param_2,int *param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined1 auStack_60 [16];
  
  puVar6 = *(undefined8 **)(param_1 + 8);
  if (puVar6 == (undefined8 *)0x0) {
    FUN_006de99c(auStack_60,
                 "../../third_party/protobuf/src/google/protobuf/io/zero_copy_stream_impl_lite.cc",
                 0x83,"target_ != nullptr");
    FUN_006de39c(auStack_60);
                    /* WARNING: Subroutine does not return */
    FUN_006dea94(auStack_60);
  }
  uVar5 = (ulong)(char)*(byte *)((long)puVar6 + 0x17);
  puVar8 = puVar6;
  if ((long)uVar5 < 0) {
    uVar5 = puVar6[1];
    uVar2 = (puVar6[2] & 0x7fffffffffffffff) - 1;
    uVar1 = uVar2;
    if (uVar2 <= uVar5) {
      uVar1 = uVar5 << 1;
    }
    uVar7 = uVar5 + 0x7fffffff;
    if (uVar1 <= uVar5 + 0x7fffffff) {
      uVar7 = uVar1;
    }
    if (uVar7 < 0x11) {
      uVar7 = 0x10;
    }
    if (uVar5 < uVar7) {
      uVar3 = (uint)(byte)((ulong)puVar6[2] >> 0x38);
      goto LAB_0071287c;
    }
    puVar8 = (undefined8 *)*puVar6;
  }
  else {
    uVar3 = (uint)*(byte *)((long)puVar6 + 0x17);
    uVar2 = 0x16;
    uVar7 = 0x16;
    if (0x15 < uVar3) {
      uVar7 = uVar5 << 1;
    }
    if (uVar7 <= uVar5) {
      *(char *)((long)puVar6 + 0x17) = (char)uVar7;
      goto LAB_007128e8;
    }
LAB_0071287c:
    if (uVar2 - uVar5 < uVar7 - uVar5) {
      FUN_0054774c(puVar6,uVar2,uVar7 - uVar2,uVar5,uVar5,0,0);
      uVar3 = (uint)*(byte *)((long)puVar6 + 0x17);
      puVar6[1] = uVar5;
    }
    if (uVar3 >> 7 != 0) {
      puVar8 = (undefined8 *)*puVar6;
    }
    memset((void *)((long)puVar8 + uVar5),0,uVar7 - uVar5);
    if (-1 < *(char *)((long)puVar6 + 0x17)) {
      *(byte *)((long)puVar6 + 0x17) = (byte)uVar7 & 0x7f;
      goto LAB_007128e8;
    }
  }
  puVar6[1] = uVar7;
LAB_007128e8:
  *(undefined1 *)((long)puVar8 + uVar7) = 0;
  puVar6 = *(undefined8 **)(param_1 + 8);
  if (*(char *)((long)puVar6 + 0x17) < '\0') {
    puVar6 = (undefined8 *)*puVar6;
  }
  *param_2 = (long)puVar6 + uVar5;
  lVar4 = (long)*(char *)(*(long *)(param_1 + 8) + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(*(long *)(param_1 + 8) + 8);
  }
  *param_3 = (int)lVar4 - (int)uVar5;
  return 1;
}


// ===== 0071296c  FUN_0071296c =====

void FUN_0071296c(long param_1,int param_2)

{
  char *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined1 auStack_50 [16];
  
  if ((param_2 < 0) &&
     (pcVar1 = (char *)FUN_006f0540((long)param_2,0,"count >= 0"), pcVar1 != (char *)0x0)) {
    uVar4 = 0x9d;
    goto LAB_00712afc;
  }
  puVar7 = *(undefined8 **)(param_1 + 8);
  if (puVar7 == (undefined8 *)0x0) {
    pcVar1 = "target_ != nullptr";
    uVar4 = 0x9e;
    goto LAB_00712afc;
  }
  uVar6 = (ulong)*(char *)((long)puVar7 + 0x17);
  uVar8 = (ulong)param_2;
  if ((long)uVar6 < 0) {
    uVar3 = puVar7[1];
    if (uVar3 < uVar8) goto LAB_007129dc;
LAB_007129b4:
    if (((uint)(int)*(char *)((long)puVar7 + 0x17) >> 7 & 1) == 0) goto LAB_007129b8;
LAB_007129fc:
    uVar6 = puVar7[1];
    lVar9 = uVar6 - uVar8;
    if (uVar6 < uVar8) {
      uVar5 = (uint)(byte)((ulong)puVar7[2] >> 0x38);
      lVar2 = (puVar7[2] & 0x7fffffffffffffff) - 1;
      goto LAB_00712a1c;
    }
    puVar10 = (undefined8 *)*puVar7;
  }
  else {
    uVar3 = uVar6;
    if (uVar8 <= uVar6) goto LAB_007129b4;
LAB_007129dc:
    pcVar1 = (char *)FUN_006f075c(uVar8,uVar3,"static_cast<size_t>(count) <= target_->size()");
    if (pcVar1 != (char *)0x0) {
      uVar4 = 0x9f;
LAB_00712afc:
      FUN_006de99c(auStack_50,
                   "../../third_party/protobuf/src/google/protobuf/io/zero_copy_stream_impl_lite.cc"
                   ,uVar4,pcVar1);
      FUN_006de39c(auStack_50);
                    /* WARNING: Subroutine does not return */
      FUN_006dea94(auStack_50);
    }
    puVar7 = *(undefined8 **)(param_1 + 8);
    uVar6 = (ulong)*(byte *)((long)puVar7 + 0x17);
    if ((char)*(byte *)((long)puVar7 + 0x17) < '\0') goto LAB_007129fc;
LAB_007129b8:
    uVar5 = (uint)uVar6;
    uVar6 = uVar6 & 0xff;
    lVar9 = uVar6 - uVar8;
    if (uVar8 <= uVar6) {
      *(char *)((long)puVar7 + 0x17) = (char)lVar9;
      goto LAB_00712a94;
    }
    lVar2 = 0x16;
LAB_00712a1c:
    if (lVar2 - uVar6 < lVar9 - uVar6) {
      FUN_0054774c(puVar7,lVar2,lVar9 - lVar2,uVar6,uVar6,0,0);
      uVar5 = (uint)*(byte *)((long)puVar7 + 0x17);
      puVar7[1] = uVar6;
    }
    puVar10 = puVar7;
    if ((uVar5 >> 7 & 1) != 0) {
      puVar10 = (undefined8 *)*puVar7;
    }
    memset((void *)((long)puVar10 + uVar6),0,lVar9 - uVar6);
    if (-1 < *(char *)((long)puVar7 + 0x17)) {
      *(byte *)((long)puVar7 + 0x17) = (byte)lVar9 & 0x7f;
      puVar7 = puVar10;
      goto LAB_00712a94;
    }
  }
  puVar7[1] = lVar9;
  puVar7 = puVar10;
LAB_00712a94:
  *(undefined1 *)((long)puVar7 + lVar9) = 0;
  return;
}


// ===== 00712b28  FUN_00712b28 =====

long FUN_00712b28(long param_1)

{
  long lVar1;
  undefined1 auStack_20 [16];
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 0) {
    FUN_006de99c(auStack_20,
                 "../../third_party/protobuf/src/google/protobuf/io/zero_copy_stream_impl_lite.cc",
                 0xa4,"target_ != nullptr");
    FUN_006de39c(auStack_20);
                    /* WARNING: Subroutine does not return */
    FUN_006dea94(auStack_20);
  }
  if (-1 < (long)*(char *)(lVar1 + 0x17)) {
    return (long)*(char *)(lVar1 + 0x17);
  }
  return *(long *)(lVar1 + 8);
}


// ===== 00712b84  FUN_00712b84 =====

void FUN_00712b84(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00712b90  FUN_00712b90 =====

undefined8 FUN_00712b90(void)

{
  return 0;
}


// ===== 00712b9c  FUN_00712b9c =====

void FUN_00712b9c(void)

{
  return;
}


// ===== 00712ba4  FUN_00712ba4 =====

/* WARNING: Removing unreachable block (ram,0x00712d48) */

void FUN_00712ba4(long *param_1,char *param_2)

{
  byte bVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined1 *__n;
  undefined1 *__src;
  int local_ec;
  undefined1 *local_e8;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined1 *puStack_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined8 uStack_b8;
  undefined1 *puStack_b0;
  undefined1 *local_a8 [4];
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (((long)*param_2 & 1U) == 0) {
    uVar6 = (ulong)(long)*param_2 >> 1;
  }
  else {
    uVar6 = **(ulong **)(param_2 + 8);
  }
  if (uVar6 != 0) {
    local_e8 = &DAT_aaaaaaaaaaaaaaaa;
    local_ec = 0;
    uVar6 = (**(code **)(*param_1 + 0x10))(param_1,&local_e8,&local_ec);
    uVar5 = 0;
    if ((uVar6 & 1) == 0) goto LAB_00712df0;
    puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
    local_e0 = &DAT_aaaaaaaaaaaaaaaa;
    local_c8 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_d0 = &DAT_aaaaaaaaaaaaaaaa;
    uStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
    local_c0 = &DAT_aaaaaaaaaaaaaaaa;
    local_a8[0] = &DAT_aaaaaaaaaaaaaaaa;
    puStack_b0 = &DAT_aaaaaaaaaaaaaaaa;
    local_a8[2] = &DAT_aaaaaaaaaaaaaaaa;
    local_a8[1] = &DAT_aaaaaaaaaaaaaaaa;
    puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
    local_a8[3] = &DAT_aaaaaaaaaaaaaaaa;
    puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
    local_80 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_006dd3cc(&local_e0,param_2);
    __n = puStack_d8;
    __src = local_e0;
    if (local_c8 != (undefined1 *)0x0) {
      do {
        while (__n <= (undefined1 *)(long)local_ec) {
          memcpy(local_e8,__src,(size_t)__n);
          local_e8 = local_e8 + (long)__n;
          local_ec = local_ec - (int)__n;
          if (local_c8 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x712e34);
            (*pcVar3)();
          }
          local_c8 = local_c8 + -(long)puStack_d8;
          if (local_c8 == (undefined1 *)0x0) goto LAB_00712dd0;
          if (((int)uStack_b8 < 0) || (local_a8[(ulong)uStack_b8 & 0xffffffff] == (undefined1 *)0x0)
             ) {
            local_e0 = (undefined1 *)0x0;
            puStack_d8 = (undefined1 *)0x0;
            __n = puStack_d8;
            __src = local_e0;
          }
          else if (local_c0 == (undefined1 *)0x0) {
            local_e0 = local_c0;
            puStack_d8 = (undefined1 *)0x0;
            __n = puStack_d8;
            __src = (undefined1 *)0x0;
          }
          else {
            if ((ulong)(byte)local_a8[0][0xf] - 1 == (ulong)uStack_b8._4_1_) {
              plVar4 = (long *)FUN_006dd55c(&uStack_b8);
            }
            else {
              bVar1 = uStack_b8._4_1_ + 1;
              uStack_b8._0_5_ = CONCAT14(bVar1,(int)uStack_b8);
              plVar4 = *(long **)(local_a8[0] + (ulong)bVar1 * 8 + 0x10);
            }
            local_c0 = local_c0 + -*plVar4;
            __n = (undefined1 *)*plVar4;
            if (*(byte *)((long)plVar4 + 0xc) == 1) {
              lVar8 = plVar4[2];
              plVar4 = (long *)plVar4[3];
              if (*(byte *)((long)plVar4 + 0xc) < 6) goto LAB_00712d88;
LAB_00712da8:
              if ((long)__n < 0) goto LAB_00712e34;
              __src = (undefined1 *)((long)plVar4 + lVar8 + 0xd);
            }
            else {
              lVar8 = 0;
              if (5 < *(byte *)((long)plVar4 + 0xc)) goto LAB_00712da8;
LAB_00712d88:
              if ((long)__n < 0) {
LAB_00712e34:
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s",
                           "gen/third_party/libc++/src/include/string_view:331: libc++ Hardening assertion __len <= static_cast<size_type>(numeric_limits<difference_type>::max()) failed: string_view::string_view(_CharT *, size_t): length does not fit in difference_type\n"
                          );
              }
              __src = (undefined1 *)(plVar4[2] + lVar8);
            }
            if ((__n != (undefined1 *)0x0) && (__src == (undefined1 *)0x0)) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/string_view:333: libc++ Hardening assertion __len == 0 || __s != nullptr failed: string_view::string_view(_CharT *, size_t): received nullptr\n"
                        );
            }
            local_e0 = __src;
            puStack_d8 = __n;
            if (local_c8 == (undefined1 *)0x0) goto LAB_00712dd0;
          }
        }
        memcpy(local_e8,__src,(size_t)(long)local_ec);
        puVar7 = (undefined1 *)(long)local_ec;
        if (__n < puVar7) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/string_view:436: libc++ Hardening assertion __n <= size() failed: remove_prefix() can\'t remove more than size()\n"
                    );
        }
        uVar6 = (**(code **)(*param_1 + 0x10))(param_1,&local_e8,&local_ec);
        __n = __n + -(long)puVar7;
        __src = __src + (long)puVar7;
      } while ((uVar6 & 1) != 0);
      uVar5 = 0;
      goto LAB_00712df0;
    }
LAB_00712dd0:
    (**(code **)(*param_1 + 0x18))(param_1,local_ec);
  }
  uVar5 = 1;
LAB_00712df0:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


// ===== 00712e60  FUN_00712e60 =====

void FUN_00712e60(void)

{
  undefined1 auStack_20 [16];
  
  FUN_006de990(auStack_20,"../../third_party/protobuf/src/google/protobuf/io/zero_copy_stream.cc",
               0x76);
  FUN_00712ea0(auStack_20,
               "This ZeroCopyOutputStream doesn\'t support aliasing. Reaching here usually means a ZeroCopyOutputStream implementation bug."
              );
  FUN_006de39c();
                    /* WARNING: Subroutine does not return */
  FUN_006dea94(auStack_20);
}


// ===== 00712ea0  FUN_00712ea0 =====

undefined8 FUN_00712ea0(undefined8 param_1,char *param_2)

{
  size_t sVar1;
  
  if (param_2 != (char *)0x0) {
    sVar1 = strlen(param_2);
    FUN_006dd85c(param_1,param_2,sVar1);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/string_view:278: libc++ Hardening assertion __s != nullptr failed: null pointer passed to non-null argument of char_traits<...>::length\n"
            );
}


// ===== 00712efc  FUN_00712efc =====

void FUN_00712efc(void)

{
  FUN_00712f0c();
  return;
}


// ===== 00712f0c  FUN_00712f0c =====

undefined1 FUN_00712f0c(byte *param_1,ulong param_2,long *param_3,undefined8 *param_4)

{
  char *pcVar1;
  undefined1 *puVar2;
  byte bVar3;
  long lVar4;
  undefined *puVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  byte *pbVar17;
  byte *pbVar18;
  uint uVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  long *plVar24;
  undefined1 local_184 [4];
  byte *local_180;
  ulong uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
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
  undefined1 *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  uVar23 = param_2 - (param_2 >> 2);
  local_68 = *(long *)(lVar4 + 0x28);
  local_184[0] = 0xaa;
  uStack_78 = param_4[0x1f];
  local_80 = param_4[0x1e];
  uStack_98 = param_4[0x1b];
  local_a0 = param_4[0x1a];
  uStack_88 = param_4[0x1d];
  uStack_90 = param_4[0x1c];
  uStack_b8 = param_4[0x17];
  local_c0 = param_4[0x16];
  uStack_a8 = param_4[0x19];
  uStack_b0 = param_4[0x18];
  uStack_d8 = param_4[0x13];
  local_e0 = param_4[0x12];
  uStack_c8 = param_4[0x15];
  uStack_d0 = param_4[0x14];
  local_70 = local_184;
  uStack_128 = param_4[9];
  local_130 = param_4[8];
  uStack_118 = param_4[0xb];
  uStack_120 = param_4[10];
  uStack_108 = param_4[0xd];
  local_110 = param_4[0xc];
  uStack_f8 = param_4[0xf];
  local_100 = param_4[0xe];
  uStack_e8 = param_4[0x11];
  uStack_f0 = param_4[0x10];
  uStack_168 = param_4[1];
  local_170 = *param_4;
  uStack_158 = param_4[3];
  uStack_160 = param_4[2];
  uStack_148 = param_4[5];
  local_150 = param_4[4];
  uStack_138 = param_4[7];
  uStack_140 = param_4[6];
  local_180 = param_1;
  uStack_178 = param_2;
  if (0x7ffffffffffffff6 < uVar23) {
    FUN_00621ff8("absl::StringResizeAndOverwrite");
    goto LAB_0071384c;
  }
  uVar22 = (ulong)*(char *)((long)param_3 + 0x17);
  if ((long)uVar22 < 0) {
    uVar22 = param_3[1];
    if (uVar22 < uVar23) {
      uVar10 = (ulong)param_3[2] >> 0x38;
      lVar7 = (param_3[2] & 0x7fffffffffffffffU) - 1;
      goto LAB_00712ff4;
    }
    plVar24 = (long *)*param_3;
LAB_00713068:
    param_3[1] = uVar23;
  }
  else if (uVar22 < uVar23) {
    lVar7 = 0x16;
    uVar10 = uVar22 & 0xffffffff;
LAB_00712ff4:
    if (lVar7 - uVar22 < uVar23 - uVar22) {
      FUN_0054774c(param_3,lVar7,uVar23 - lVar7,uVar22,uVar22,0,0);
      uVar10 = (ulong)*(byte *)((long)param_3 + 0x17);
      param_3[1] = uVar22;
    }
    plVar24 = (long *)*param_3;
    if ((uVar10 & 0x80) == 0) {
      plVar24 = param_3;
    }
    memset((void *)((long)plVar24 + uVar22),0,uVar23 - uVar22);
    if (*(char *)((long)param_3 + 0x17) < '\0') goto LAB_00713068;
    *(byte *)((long)param_3 + 0x17) = (byte)uVar23 & 0x7f;
  }
  else {
    *(byte *)((long)param_3 + 0x17) = (byte)uVar23;
    plVar24 = param_3;
  }
  *(undefined1 *)((long)plVar24 + uVar23) = 0;
  puVar5 = PTR_DAT_00d52040;
  plVar24 = (long *)*param_3;
  if (-1 < *(char *)((long)param_3 + 0x17)) {
    plVar24 = param_3;
  }
  if (plVar24 == (long *)0x0) {
    if (3 < param_2) {
      uVar19 = 0;
      uVar10 = 0;
      uVar16 = 0;
      uVar22 = 0;
LAB_00713238:
      if (((((ulong)*param_1 == 0) || ((ulong)param_1[1] == 0)) || ((ulong)param_1[2] == 0)) ||
         (uVar19 = (int)*(char *)((long)&local_170 + (ulong)param_1[1]) << 0xc |
                   (int)*(char *)((long)&local_170 + (ulong)*param_1) << 0x12 |
                   (int)*(char *)((long)&local_170 + (ulong)param_1[2]) << 6 |
                   (int)*(char *)((long)&local_170 + (ulong)param_1[3]), (int)uVar19 < 0)) {
        uVar9 = 0;
        uVar13 = param_2 - 4;
        lVar7 = -2;
        pbVar18 = param_1;
        uVar21 = param_2;
LAB_00713298:
        pbVar17 = pbVar18 + 1;
        uVar10 = (ulong)*pbVar18;
        if (*(char *)((long)&local_170 + uVar10) < '\0') {
          uVar21 = uVar21 - 1;
          if (((byte)PTR_DAT_00d52040[uVar10] >> 3 & 1) != 0) goto code_r0x007132b0;
          goto LAB_007135bc;
        }
        goto LAB_007132e4;
      }
      param_1 = param_1 + 4;
      param_2 = param_2 - 4;
      goto LAB_00713364;
    }
  }
  else if (3 < param_2) {
    uVar12 = 0;
    uVar10 = 0;
    uVar16 = 0;
    uVar22 = 0;
LAB_007130a8:
    if (((((ulong)*param_1 == 0) || ((ulong)param_1[1] == 0)) || ((ulong)param_1[2] == 0)) ||
       (uVar12 = (int)*(char *)((long)&local_170 + (ulong)param_1[1]) << 0xc |
                 (int)*(char *)((long)&local_170 + (ulong)*param_1) << 0x12 |
                 (int)*(char *)((long)&local_170 + (ulong)param_1[2]) << 6 |
                 (int)*(char *)((long)&local_170 + (ulong)param_1[3]), (int)uVar12 < 0)) {
      uVar9 = 0;
      uVar13 = param_2 - 4;
      lVar7 = -2;
      uVar21 = param_2;
      pbVar18 = param_1;
LAB_00713108:
      pbVar17 = pbVar18 + 1;
      uVar10 = (ulong)*pbVar18;
      pcVar1 = (char *)((long)&local_170 + uVar10);
      uVar19 = (uint)*pcVar1;
      if ((int)uVar19 < 0) {
        uVar21 = uVar21 - 1;
        if (((byte)puVar5[uVar10] >> 3 & 1) != 0) goto code_r0x00713120;
        goto LAB_007135a4;
      }
      goto LAB_00713154;
    }
    uVar21 = param_2 - 4;
    param_1 = param_1 + 4;
    uVar19 = uVar12;
    goto LAB_007131e4;
  }
  uVar14 = 0;
  uVar10 = 0;
  uVar16 = 0;
  goto LAB_007133a8;
code_r0x007132b0:
  uVar9 = uVar9 + 1;
  lVar7 = lVar7 + -1;
  uVar13 = uVar13 - 1;
  pbVar18 = pbVar17;
  if (uVar21 < 4) {
LAB_007135bc:
    uVar14 = 0;
    goto LAB_00713668;
  }
  goto LAB_00713298;
LAB_007132e4:
  uVar8 = uVar9;
  uVar21 = param_2 + lVar7;
  uVar10 = (ulong)param_1[uVar8 + 1];
  if (*(char *)((long)&local_170 + uVar10) < '\0') {
    if (((byte)PTR_DAT_00d52040[uVar10] >> 3 & 1) != 0) goto code_r0x007132d4;
    goto LAB_007135f4;
  }
  pbVar18 = param_1 + uVar8 + 2;
  while( true ) {
    pbVar17 = pbVar18 + 1;
    uVar10 = (ulong)*pbVar18;
    if (-1 < *(char *)((long)&local_170 + uVar10)) break;
    uVar21 = uVar21 - 1;
    uVar14 = 2;
    if ((((byte)PTR_DAT_00d52040[uVar10] >> 3 & 1) == 0) ||
       (uVar13 = uVar13 - 1, pbVar18 = pbVar17, uVar21 < 2)) goto LAB_00713668;
  }
  param_1 = pbVar18 + 1;
  while( true ) {
    uVar21 = uVar13;
    pbVar17 = param_1 + 1;
    uVar10 = (ulong)*param_1;
    uVar16 = (uint)*(char *)((long)&local_170 + uVar10);
    if (-1 < (int)uVar16) break;
    if ((((byte)PTR_DAT_00d52040[uVar10] >> 3 & 1) == 0) ||
       (param_1 = pbVar17, uVar13 = uVar21 - 1, uVar21 == 0)) {
      uVar14 = 3;
      goto LAB_00713668;
    }
  }
  param_1 = param_1 + 1;
  param_2 = uVar21;
LAB_00713364:
  uVar22 = uVar22 + 3;
  pbVar17 = param_1;
  uVar21 = param_2;
  if (param_2 < 4) goto LAB_00713378;
  goto LAB_00713238;
code_r0x007132d4:
  lVar7 = lVar7 + -1;
  uVar13 = uVar13 - 1;
  uVar9 = uVar8 + 1;
  if (uVar21 < 3) {
LAB_007135f4:
    pbVar17 = param_1 + uVar8 + 2;
    uVar21 = ~(uVar8 + 1) + param_2;
    uVar14 = 1;
    goto LAB_00713668;
  }
  goto LAB_007132e4;
code_r0x00713120:
  uVar9 = uVar9 + 1;
  lVar7 = lVar7 + -1;
  uVar13 = uVar13 - 1;
  pbVar18 = pbVar17;
  if (uVar21 < 4) {
LAB_007135a4:
    uVar14 = 0;
    uVar19 = uVar12;
    goto LAB_00713668;
  }
  goto LAB_00713108;
LAB_00713154:
  uVar8 = uVar9;
  uVar21 = param_2 + lVar7;
  uVar10 = (ulong)param_1[uVar8 + 1];
  if (*(char *)((long)&local_170 + uVar10) < 0) {
    if (((byte)puVar5[uVar10] >> 3 & 1) != 0) goto code_r0x00713144;
    goto LAB_007135d0;
  }
  uVar19 = (int)*(char *)((long)&local_170 + uVar10) | (int)*pcVar1 << 6;
  pbVar18 = param_1 + uVar8 + 2;
  while( true ) {
    pbVar17 = pbVar18 + 1;
    uVar10 = (ulong)*pbVar18;
    if (-1 < *(char *)((long)&local_170 + uVar10)) break;
    uVar21 = uVar21 - 1;
    uVar14 = 2;
    if ((((byte)puVar5[uVar10] >> 3 & 1) == 0) ||
       (uVar13 = uVar13 - 1, pbVar18 = pbVar17, uVar21 < 2)) goto LAB_00713668;
  }
  uVar19 = (int)*(char *)((long)&local_170 + uVar10) | uVar19 << 6;
  param_1 = pbVar18 + 1;
  while( true ) {
    uVar21 = uVar13;
    pbVar17 = param_1 + 1;
    uVar10 = (ulong)*param_1;
    uVar16 = (uint)*(char *)((long)&local_170 + uVar10);
    if (-1 < (int)uVar16) break;
    if ((((byte)puVar5[uVar10] >> 3 & 1) == 0) ||
       (uVar13 = uVar21 - 1, param_1 = pbVar17, uVar21 == 0)) {
      uVar14 = 3;
      goto LAB_00713668;
    }
  }
  uVar19 = uVar16 | uVar19 << 6;
  param_1 = param_1 + 1;
LAB_007131e4:
  uVar9 = uVar22 + 3;
  if (uVar23 < uVar9) goto LAB_00713764;
  uVar12 = uVar19 >> 0x10;
  *(undefined1 *)((long)plVar24 + uVar22) = (char)(uVar19 >> 0x10);
  *(ushort *)((undefined1 *)((long)plVar24 + uVar22) + 1) =
       (ushort)(uVar19 >> 8) & 0xff | (ushort)((uVar19 & 0xff00ff) << 8);
  uVar22 = uVar9;
  pbVar17 = param_1;
  param_2 = uVar21;
  uVar19 = uVar12;
  if (uVar21 < 4) goto LAB_00713378;
  goto LAB_007130a8;
code_r0x00713144:
  lVar7 = lVar7 + -1;
  uVar13 = uVar13 - 1;
  uVar9 = uVar8 + 1;
  if (uVar21 < 3) {
LAB_007135d0:
    uVar14 = 1;
    pbVar17 = param_1 + uVar8 + 2;
    uVar21 = ~(uVar8 + 1) + param_2;
    goto LAB_00713668;
  }
  goto LAB_00713154;
LAB_00713378:
  iVar15 = (int)uVar10;
  uVar14 = 0;
  param_1 = pbVar17;
  param_2 = uVar21;
  if ((int)uVar16 < 0) {
LAB_00713668:
    iVar15 = (int)uVar10;
    param_1 = pbVar17;
    param_2 = uVar21;
    if ((iVar15 != 0x2e) && (iVar15 != 0x3d)) {
      if (((byte)PTR_DAT_00d52040[uVar10] >> 3 & 1) == 0) goto LAB_00713764;
      goto LAB_007137ec;
    }
  }
  else {
LAB_007137ec:
    if ((iVar15 != 0x3d) &&
       (uVar10 = uVar22, uVar16 = uVar19, puVar5 = PTR_DAT_00d52040, iVar15 != 0x2e)) {
LAB_007133a8:
      do {
        do {
          uVar19 = uVar16;
          uVar22 = uVar10;
          pbVar18 = param_1 + 4;
          lVar20 = param_2 - 2;
          uVar10 = 0;
          while( true ) {
            uVar9 = uVar10;
            if (param_2 == uVar9) goto LAB_0071354c;
            uVar21 = (ulong)param_1[uVar9];
            if (-1 < *(char *)((long)&local_170 + uVar21)) break;
            pbVar18 = pbVar18 + 1;
            lVar20 = lVar20 + -1;
            uVar10 = uVar9 + 1;
            if (((byte)puVar5[uVar21] >> 3 & 1) == 0) {
              param_1 = param_1 + uVar9;
              lVar7 = (param_2 - (uVar9 + 1)) + 1;
              uVar16 = uVar14;
              goto LAB_0071357c;
            }
          }
          uVar12 = uVar19 << 6;
          uVar16 = uVar14 + 1;
          uVar19 = uVar12 | (int)*(char *)((long)&local_170 + uVar21);
          if (uVar16 == 4) {
            pbVar17 = param_1 + uVar9 + 1;
            uVar9 = ~uVar9 + param_2;
          }
          else {
            uVar10 = uVar9;
            while( true ) {
              if (param_2 - 1 == uVar10) {
                param_1 = param_1 + uVar9 + 1;
                param_2 = ~uVar9 + param_2;
                uVar14 = uVar16;
                goto LAB_0071354c;
              }
              uVar21 = (ulong)param_1[uVar10 + 1];
              if (-1 < *(char *)((long)&local_170 + uVar21)) break;
              uVar10 = uVar10 + 1;
              pbVar18 = pbVar18 + 1;
              lVar20 = lVar20 + -1;
              if (((byte)puVar5[uVar21] >> 3 & 1) == 0) {
                param_1 = param_1 + uVar10;
                lVar7 = param_2 - uVar10;
                goto LAB_0071357c;
              }
            }
            uVar12 = uVar19 << 6;
            uVar16 = uVar14 + 2;
            uVar9 = (param_2 - uVar10) - 2;
            uVar19 = uVar12 | (int)*(char *)((long)&local_170 + uVar21);
            uVar13 = uVar10;
            if (uVar16 == 4) {
              pbVar17 = param_1 + uVar10 + 2;
            }
            else {
              while( true ) {
                uVar8 = uVar13;
                if (param_2 - 2 == uVar8) {
                  param_1 = param_1 + uVar10 + 2;
                  param_2 = uVar9;
                  uVar14 = uVar16;
                  goto LAB_0071354c;
                }
                uVar21 = (ulong)param_1[uVar8 + 2];
                if (-1 < *(char *)((long)&local_170 + uVar21)) break;
                pbVar18 = pbVar18 + 1;
                lVar20 = lVar20 + -1;
                uVar13 = uVar8 + 1;
                if (((byte)puVar5[uVar21] >> 3 & 1) == 0) {
                  param_1 = param_1 + uVar8 + 2;
                  lVar7 = ~(uVar8 + 1) + param_2;
                  goto LAB_0071357c;
                }
              }
              uVar12 = uVar19 << 6;
              uVar14 = uVar14 + 3;
              uVar9 = (param_2 - uVar8) - 3;
              uVar19 = uVar12 | (int)*(char *)((long)&local_170 + uVar21);
              if (uVar14 == 4) {
                pbVar17 = param_1 + uVar8 + 3;
              }
              else {
LAB_007134fc:
                pbVar17 = pbVar18;
                lVar7 = lVar20 + -1;
                if (lVar7 == 0) {
                  param_1 = param_1 + uVar8 + 3;
                  param_2 = uVar9;
LAB_0071354c:
                  lVar7 = 0;
                  param_1 = param_1 + param_2;
                  uVar16 = uVar14;
                  goto joined_r0x00713558;
                }
                uVar21 = (ulong)pbVar17[-1];
                if (*(char *)((long)&local_170 + uVar21) < 0) goto code_r0x00713510;
                uVar12 = uVar19 << 6;
                uVar9 = lVar20 - 2;
                uVar19 = uVar12 | (int)*(char *)((long)&local_170 + uVar21);
              }
            }
          }
          uVar14 = 0;
          uVar10 = uVar22 + 3;
          param_1 = pbVar17;
          param_2 = uVar9;
          uVar16 = 0;
        } while (plVar24 == (long *)0x0);
        if (uVar23 < uVar10) goto LAB_00713764;
        puVar2 = (undefined1 *)((long)plVar24 + uVar22);
        uVar14 = 0;
        puVar2[2] = (char)uVar19;
        puVar2[1] = (char)(uVar12 >> 8);
        *puVar2 = (char)(uVar12 >> 0x10);
        uVar16 = 0;
      } while( true );
    }
  }
  lVar7 = param_2 + 1;
  param_1 = param_1 + -1;
  uVar16 = uVar14;
joined_r0x00713558:
  if (uVar16 < 2) {
    if (uVar16 != 0) goto LAB_00713764;
    uVar19 = 0xffffffff;
    uVar10 = uVar22;
  }
  else if (uVar16 == 3) {
    uVar10 = uVar22 + 2;
    if (plVar24 != (long *)0x0) {
      if (uVar23 < uVar10) goto LAB_00713764;
      ((undefined1 *)((long)plVar24 + uVar22))[1] = (char)(uVar19 >> 2);
      *(undefined1 *)((long)plVar24 + uVar22) = (char)(uVar19 >> 10);
    }
    uVar19 = 0xfffffffe;
  }
  else {
    if (plVar24 != (long *)0x0) {
      if (uVar23 < uVar22 + 1) goto LAB_00713764;
      *(char *)((long)plVar24 + uVar22) = (char)(uVar19 >> 4);
    }
    uVar19 = 0xfffffffd;
    uVar10 = uVar22 + 1;
  }
  if (lVar7 != 0) {
    uVar16 = 0;
    do {
      bVar3 = *param_1;
      if ((bVar3 == 0x3d) || (bVar3 == 0x2e)) {
        uVar16 = uVar16 + 1;
      }
      else if (((byte)PTR_DAT_00d52040[bVar3] >> 3 & 1) == 0) goto LAB_00713764;
      lVar7 = lVar7 + -1;
      param_1 = param_1 + 1;
    } while (lVar7 != 0);
    if ((uVar16 & uVar19) != 0) goto LAB_00713764;
  }
  local_184[0] = 1;
  if (uVar23 < uVar10) goto LAB_0071383c;
  goto LAB_0071376c;
code_r0x00713510:
  pbVar18 = pbVar17 + 1;
  lVar20 = lVar7;
  if (((byte)puVar5[uVar21] >> 3 & 1) != 0) goto LAB_007134fc;
  param_1 = pbVar17 + -1;
  uVar16 = uVar14;
LAB_0071357c:
  if (((int)uVar21 == 0x2e) || ((int)uVar21 == 0x3d)) goto joined_r0x00713558;
LAB_00713764:
  uVar10 = 0;
  local_184[0] = 0;
LAB_0071376c:
  bVar3 = *(byte *)((long)param_3 + 0x17);
  plVar11 = (long *)*param_3;
  plVar24 = plVar11;
  if ((bVar3 & 0x80) == 0) {
    plVar24 = param_3;
  }
  if (*(char *)((long)plVar24 + uVar23) != '\0') {
LAB_0071383c:
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x713840);
    (*pcVar6)();
  }
  if ((char)bVar3 < '\0') {
    if ((ulong)param_3[1] < uVar10) goto LAB_0071384c;
    param_3[1] = uVar10;
  }
  else {
    if (bVar3 < uVar10) {
LAB_0071384c:
                    /* WARNING: Subroutine does not return */
      FUN_005f5590();
    }
    *(char *)((long)param_3 + 0x17) = (char)uVar10;
    plVar11 = param_3;
  }
  *(undefined1 *)((long)plVar11 + uVar10) = 0;
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_184[0];
}


// ===== 00713854  FUN_00713854 =====

void FUN_00713854(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined *local_40;
  undefined1 local_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = FUN_00713a50(param_3,1);
  local_38 = 1;
  local_40 = PTR_s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_00d52058;
  local_50 = param_2;
  uStack_48 = param_3;
  FUN_007138cc(param_1,uVar1,&local_50);
  return;
}


// ===== 007138cc  FUN_007138cc =====

void FUN_007138cc(long *param_1,ulong param_2,undefined8 *param_3)

{
  byte bVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  if (0x7ffffffffffffff6 < param_2) {
    FUN_00621ff8("absl::StringResizeAndOverwrite");
    goto LAB_00713a4c;
  }
  uVar6 = (ulong)*(char *)((long)param_1 + 0x17);
  if ((long)uVar6 < 0) {
    uVar6 = param_1[1];
    if (uVar6 < param_2) {
      uVar4 = (ulong)param_1[2] >> 0x38;
      lVar3 = (param_1[2] & 0x7fffffffffffffffU) - 1;
      goto LAB_00713938;
    }
    plVar7 = (long *)*param_1;
LAB_007139ac:
    param_1[1] = param_2;
  }
  else if (uVar6 < param_2) {
    lVar3 = 0x16;
    uVar4 = uVar6 & 0xffffffff;
LAB_00713938:
    if (lVar3 - uVar6 < param_2 - uVar6) {
      FUN_0054774c(param_1,lVar3,param_2 - lVar3,uVar6,uVar6,0,0);
      uVar4 = (ulong)*(byte *)((long)param_1 + 0x17);
      param_1[1] = uVar6;
    }
    plVar7 = (long *)*param_1;
    if ((uVar4 & 0x80) == 0) {
      plVar7 = param_1;
    }
    memset((void *)((long)plVar7 + uVar6),0,param_2 - uVar6);
    if (*(char *)((long)param_1 + 0x17) < '\0') goto LAB_007139ac;
    *(byte *)((long)param_1 + 0x17) = (byte)param_2 & 0x7f;
  }
  else {
    *(byte *)((long)param_1 + 0x17) = (byte)param_2;
    plVar7 = param_1;
  }
  *(undefined1 *)((long)plVar7 + param_2) = 0;
  plVar7 = (long *)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    plVar7 = param_1;
  }
  uVar6 = FUN_00713b24(*param_3,param_3[1],plVar7,param_2,param_3[2],*(undefined1 *)(param_3 + 3));
  if (uVar6 <= param_2) {
    bVar1 = *(byte *)((long)param_1 + 0x17);
    plVar5 = (long *)*param_1;
    plVar7 = plVar5;
    if ((bVar1 & 0x80) == 0) {
      plVar7 = param_1;
    }
    if (*(char *)((long)plVar7 + param_2) == '\0') {
      if ((char)bVar1 < '\0') {
        if ((ulong)param_1[1] < uVar6) goto LAB_00713a4c;
        param_1[1] = uVar6;
      }
      else {
        if (bVar1 < uVar6) {
LAB_00713a4c:
                    /* WARNING: Subroutine does not return */
          FUN_005f5590();
        }
        *(char *)((long)param_1 + 0x17) = (char)uVar6;
        plVar5 = param_1;
      }
      *(undefined1 *)((long)plVar5 + uVar6) = 0;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x713a40);
  (*pcVar2)();
}


// ===== 00713a50  FUN_00713a50 =====

ulong FUN_00713a50(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  undefined1 auStack_48 [24];
  undefined1 *local_30;
  undefined1 *puStack_28;
  undefined1 *local_20;
  
  if (param_1 < 0xbffffffffffffffe) {
    uVar4 = (param_1 / 3) * 4;
    if (param_1 % 3 != 0) {
      uVar1 = uVar4 + 4;
      uVar2 = uVar4 + 4;
      if ((param_2 & 1) == 0) {
        uVar1 = uVar4 | 2;
        uVar2 = uVar4 | 3;
      }
      uVar4 = uVar2;
      if (param_1 % 3 == 1) {
        uVar4 = uVar1;
      }
    }
    return uVar4;
  }
  puStack_28 = &DAT_aaaaaaaaaaaaaaaa;
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  local_20 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_005d3510(&local_30,"Check input_len <= kMaxSize failed: ");
  FUN_005d3510(auStack_48,"CalculateBase64EscapedLenInternal() overflow");
  FUN_006de2bc(&local_30,auStack_48);
  FUN_00547738(auStack_48);
  (**(code **)PTR_PTR_FUN_00d52050)
            (3,"../../third_party/abseil-cpp/absl/strings/internal/escaping.cc",0x2b,&local_30);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x713b24);
  (*pcVar3)();
}


// ===== 00713b24  FUN_00713b24 =====

long FUN_00713b24(uint *param_1,ulong param_2,undefined1 *param_3,long param_4,long param_5,
                 uint param_6)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  uint *puVar5;
  undefined1 uVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  uint *puVar11;
  uint *puVar6;
  
  if ((ulong)(param_4 * 3) < param_2 << 2) {
    return 0;
  }
  puVar5 = param_1;
  puVar9 = param_3;
  if ((2 < param_2) &&
     (puVar11 = (uint *)((long)param_1 + (param_2 - 3)), puVar6 = param_1, param_1 < puVar11)) {
    do {
      puVar5 = (uint *)((long)puVar6 + 3);
      uVar2 = (*puVar6 & 0xff00ff00) >> 8 | (*puVar6 & 0xff00ff) << 8;
      uVar3 = uVar2 << 0x10;
      uVar2 = uVar2 >> 0x10 | uVar3;
      *puVar9 = *(undefined1 *)(param_5 + (ulong)(uVar3 >> 0x1a));
      puVar9[1] = *(undefined1 *)(param_5 + ((ulong)(uVar3 >> 0x14) & 0x3f));
      puVar9[2] = *(undefined1 *)(param_5 + ((ulong)(uVar2 >> 0xe) & 0x3f));
      puVar9[3] = *(undefined1 *)(param_5 + ((ulong)(uVar2 >> 8) & 0x3f));
      puVar9 = puVar9 + 4;
      puVar6 = puVar5;
    } while (puVar5 < puVar11);
  }
  lVar8 = (long)param_1 + (param_2 - (long)puVar5);
  puVar10 = param_3 + (param_4 - (long)puVar9);
  if (lVar8 < 2) {
    if (lVar8 == 0) goto LAB_00713ccc;
    if (lVar8 != 1) {
LAB_00713cdc:
      FUN_00622058(3,"escaping.cc",0xc9,"Logic problem? szsrc = %zu",lVar8);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x713d00);
      (*pcVar4)();
    }
    if (puVar10 < (undefined1 *)0x2) {
      return 0;
    }
    uVar2 = *puVar5;
    *puVar9 = *(undefined1 *)(param_5 + (ulong)(byte)((byte)uVar2 >> 2));
    puVar9[1] = *(undefined1 *)(param_5 + ((ulong)(byte)uVar2 & 3) * 0x10);
    if ((param_6 & 1) == 0) {
      puVar9 = puVar9 + 2;
      goto LAB_00713ccc;
    }
    if (puVar10 < (undefined1 *)0x4) {
      return 0;
    }
    *(undefined2 *)(puVar9 + 2) = 0x3d3d;
  }
  else {
    if (lVar8 == 2) {
      if (puVar10 < (undefined1 *)0x3) {
        return 0;
      }
      uVar2 = ((ushort)*puVar5 & 0xff00ff) << 8;
      uVar3 = ((ushort)((ushort)*puVar5 >> 8) | uVar2) << 0x10;
      *puVar9 = *(undefined1 *)(param_5 + (ulong)(uVar2 >> 10));
      puVar9[1] = *(undefined1 *)(param_5 + ((ulong)(uVar3 >> 0x14) & 0x3f));
      puVar9[2] = *(undefined1 *)(param_5 + ((ulong)(uVar3 >> 0xe) & 0x3c));
      if ((param_6 & 1) == 0) {
        puVar9 = puVar9 + 3;
        goto LAB_00713ccc;
      }
      if (puVar10 == (undefined1 *)0x3) {
        return 0;
      }
      uVar7 = 0x3d;
    }
    else {
      if (lVar8 != 3) goto LAB_00713cdc;
      if (puVar10 < (undefined1 *)0x4) {
        return 0;
      }
      uVar1 = *(ushort *)((long)puVar5 + 1);
      uVar3 = *puVar5;
      uVar2 = ((uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8) << 0x10;
      *puVar9 = *(undefined1 *)(param_5 + (ulong)(byte)((byte)uVar3 >> 2));
      puVar9[1] = *(undefined1 *)
                   (param_5 +
                   (ulong)(((uint3)(CONCAT14((byte)uVar3,uVar2) >> 0x10) & 0x3f000) >> 0xc));
      puVar9[2] = *(undefined1 *)(param_5 + ((ulong)(uVar2 >> 0x16) & 0x3f));
      uVar7 = *(undefined1 *)(param_5 + ((ulong)(uVar1 >> 8) & 0x3f));
    }
    puVar9[3] = uVar7;
  }
  puVar9 = puVar9 + 4;
LAB_00713ccc:
  return (long)puVar9 - (long)param_3;
}


// ===== 00713d00  FUN_00713d00 =====

void FUN_00713d00(long param_1,void *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar3 = (ulong)*(byte *)(param_1 + 0xf);
  if (((*(byte *)(param_1 + 0xf) & 0xf) == 5) && (*(char *)((long)param_2 + 0x1f) < '\0')) {
    operator_delete(*(void **)((long)param_2 + 8));
    uVar3 = (ulong)*(byte *)(param_1 + 0xf);
  }
  uVar2 = (uint)(uVar3 >> 4);
  if (4 < uVar2) {
    if (uVar2 == 6) {
      FUN_006dbff0((long)param_2 + (ulong)*(byte *)(param_1 + 0xe));
    }
    else {
      puVar1 = (undefined8 *)((long)param_2 + (ulong)*(byte *)(param_1 + 0xe));
      if (*(char *)((long)puVar1 + 0x17) < '\0') {
        operator_delete((void *)*puVar1);
      }
    }
  }
  operator_delete(param_2);
  return;
}


// ===== 00713da4  FUN_00713da4 =====

void FUN_00713da4(undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *__dest;
  
  if ((param_2 == (undefined8 *)0x0) && (param_3 != 0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/string:1081: libc++ Hardening assertion __n == 0 || __s != nullptr failed: basic_string(const char*, n) detected nullptr\n"
              );
  }
  if (0x7ffffffffffffff6 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  if (param_3 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)param_3;
    __dest = param_1;
  }
  else {
    uVar1 = (param_3 & 0x7ffffffffffffff8) + 8;
    uVar2 = 0x19;
    if (uVar1 != 0x18) {
      uVar2 = uVar1;
    }
    __dest = (undefined8 *)operator_new(uVar2);
    *param_1 = __dest;
    param_1[1] = param_3;
    param_1[2] = uVar2 | 0x8000000000000000;
  }
  if (__dest <= (undefined8 *)((long)__dest + param_3)) {
    if ((__dest <= param_2) && (param_2 < (undefined8 *)((long)__dest + param_3))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                );
    }
    memmove(__dest,param_2,param_3);
    *(undefined1 *)((long)__dest + param_3) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
            );
}


// ===== 00713e9c  FUN_00713e9c =====

ulong FUN_00713e9c(ulong *param_1,long param_2)

{
  byte bVar1;
  void *pvVar2;
  undefined8 *puVar3;
  ulong uVar4;
  
  puVar3 = (undefined8 *)(*param_1 & 0xfffffffffffffffc);
  bVar1 = *(byte *)((long)puVar3 + 0x17);
  uVar4 = (ulong)bVar1;
  if (param_2 == 0) {
    if ((char)bVar1 < '\0') {
      uVar4 = puVar3[1];
      puVar3 = (undefined8 *)*puVar3;
    }
    pvVar2 = operator_new(0x18);
    FUN_00713da4(pvVar2,puVar3,uVar4);
    uVar4 = 2;
  }
  else {
    if ((char)bVar1 < '\0') {
      uVar4 = puVar3[1];
      puVar3 = (undefined8 *)*puVar3;
    }
    pvVar2 = (void *)FUN_006fdb6c(param_2);
    FUN_00713da4(pvVar2,puVar3,uVar4);
    uVar4 = 3;
  }
  return uVar4 | (ulong)pvVar2;
}


// ===== 00713f34  FUN_00713f34 =====

void FUN_00713f34(ulong *param_1,long param_2,long param_3,long param_4)

{
  void *pvVar1;
  ulong uVar2;
  
  if ((*param_1 & 3) == 0) {
    if (param_4 == 0) {
      pvVar1 = operator_new(0x18);
      uVar2 = 2;
    }
    else {
      pvVar1 = (void *)FUN_006fdb6c(param_4);
      uVar2 = 3;
    }
    FUN_00713da4(pvVar1,param_2,param_3);
    *param_1 = uVar2 | (ulong)pvVar1;
    return;
  }
  if ((param_2 == 0) && (param_3 != 0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/string:2845: libc++ Hardening assertion __n == 0 || __s != nullptr failed: string::assign received nullptr\n"
              );
  }
  FUN_00547b08(*param_1 & 0xfffffffffffffffc,param_2,param_3);
  return;
}


// ===== 00713ffc  FUN_00713ffc =====

void FUN_00713ffc(ulong *param_1,undefined8 *param_2,long param_3)

{
  ulong uVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  void *pvVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if ((*param_1 & 3) == 0) {
    uVar1 = param_2[1];
    puVar4 = (undefined8 *)*param_2;
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
      puVar4 = param_2;
    }
    if (param_3 == 0) {
      pvVar5 = operator_new(0x18);
      uVar6 = 2;
    }
    else {
      pvVar5 = (void *)FUN_006fdb6c(param_3);
      uVar6 = 3;
    }
    FUN_00713da4(pvVar5,puVar4,uVar1);
    *param_1 = uVar6 | (ulong)pvVar5;
    return;
  }
  puVar4 = (undefined8 *)(*param_1 & 0xfffffffffffffffc);
  if (param_2 != puVar4) {
    bVar2 = *(byte *)((long)param_2 + 0x17);
    if (*(char *)((long)puVar4 + 0x17) < '\0') {
      uVar1 = param_2[1];
      puVar3 = (undefined8 *)*param_2;
      if (-1 < (char)bVar2) {
        uVar1 = (ulong)bVar2;
        puVar3 = param_2;
      }
      FUN_00547f08(puVar4,puVar3,uVar1);
      return;
    }
    if ((char)bVar2 < '\0') {
      FUN_00547fc0(puVar4,*param_2,param_2[1]);
      return;
    }
    uVar8 = param_2[1];
    uVar7 = *param_2;
    puVar4[2] = param_2[2];
    puVar4[1] = uVar8;
    *puVar4 = uVar7;
  }
  return;
}


// ===== 007140ec  FUN_007140ec =====

void FUN_007140ec(ulong *param_1,undefined8 *param_2,long param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((*param_1 & 3) == 0) {
    if (param_3 == 0) {
      puVar2 = (undefined8 *)operator_new(0x18);
      uVar1 = 2;
    }
    else {
      puVar2 = (undefined8 *)FUN_006fdb6c(param_3);
      uVar1 = 3;
    }
    uVar4 = param_2[1];
    uVar3 = *param_2;
    puVar2[2] = param_2[2];
    puVar2[1] = uVar4;
    *puVar2 = uVar3;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    *param_1 = uVar1 | (ulong)puVar2;
  }
  else {
    puVar2 = (undefined8 *)(*param_1 & 0xfffffffffffffffc);
    if (*(char *)((long)puVar2 + 0x17) < '\0') {
      operator_delete((void *)*puVar2);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
    }
    uVar4 = param_2[1];
    uVar3 = *param_2;
    puVar2[2] = param_2[2];
    puVar2[1] = uVar4;
    *puVar2 = uVar3;
    *(undefined1 *)((long)param_2 + 0x17) = 0;
    *(undefined1 *)param_2 = 0;
  }
  return;
}


// ===== 007141a0  FUN_007141a0 =====

undefined8 * FUN_007141a0(ulong *param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  if (((uint)*param_1 >> 1 & 1) == 0) {
    if (param_2 == 0) {
      puVar1 = (undefined8 *)operator_new(0x18);
      uVar2 = 2;
    }
    else {
      puVar1 = (undefined8 *)FUN_006fdb6c(param_2);
      uVar2 = 3;
    }
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *param_1 = uVar2 | (ulong)puVar1;
    return puVar1;
  }
  return (undefined8 *)(*param_1 & 0xfffffffffffffffc);
}


// ===== 00714208  FUN_00714208 =====

void FUN_00714208(ulong *param_1)

{
  undefined8 *puVar1;
  
  if ((*param_1 != 2) && (puVar1 = (undefined8 *)(*param_1 ^ 2), ((ulong)puVar1 & 3) == 0)) {
    if (*(char *)((long)puVar1 + 0x17) < '\0') {
      operator_delete((void *)*puVar1);
    }
    operator_delete(puVar1);
    return;
  }
  return;
}


// ===== 00714270  FUN_00714270 =====

long FUN_00714270(undefined8 param_1,char *param_2,ulong *param_3,long param_4)

{
  char cVar1;
  void *__src;
  undefined8 *__dest;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined1 auVar7 [16];
  
  cVar1 = *param_2;
  if (cVar1 < '\0') {
    auVar7 = FUN_006f6214(param_2,cVar1);
  }
  else {
    auVar7[8] = cVar1;
    auVar7._0_8_ = param_2 + 1;
    auVar7._9_7_ = 0;
  }
  __src = auVar7._0_8_;
  if (__src == (void *)0x0) {
    return 0;
  }
  if (param_4 == 0) {
    __dest = (undefined8 *)operator_new(0x18);
    uVar4 = 2;
  }
  else {
    __dest = (undefined8 *)FUN_006fdb6c(param_4);
    uVar4 = 3;
  }
  *__dest = 0;
  __dest[1] = 0;
  __dest[2] = 0;
  *param_3 = uVar4 | (ulong)__dest;
  uVar4 = FUN_006f54a0(param_1,auVar7._8_8_ & 0xffffffff,__src);
  if ((uVar4 & 1) == 0) {
    lVar2 = FUN_006f5520(param_1,__src,auVar7._8_8_ & 0xffffffff,__dest);
    return lVar2;
  }
  uVar5 = (ulong)*(char *)((long)__dest + 0x17);
  uVar4 = (ulong)auVar7._8_4_;
  puVar6 = __dest;
  if ((long)uVar5 < 0) {
    uVar5 = __dest[1];
    if (uVar5 < uVar4) {
      uVar3 = (uint)(byte)((ulong)__dest[2] >> 0x38);
      lVar2 = (__dest[2] & 0x7fffffffffffffff) - 1;
      goto LAB_00714380;
    }
    puVar6 = (undefined8 *)*__dest;
  }
  else {
    if (uVar4 <= uVar5) {
      *(byte *)((long)__dest + 0x17) = auVar7[8];
      goto LAB_007143f8;
    }
    lVar2 = 0x16;
    uVar3 = (uint)*(char *)((long)__dest + 0x17);
LAB_00714380:
    if (lVar2 - uVar5 < uVar4 - uVar5) {
      FUN_0054774c(__dest,lVar2,uVar4 - lVar2,uVar5,uVar5,0,0);
      uVar3 = (uint)*(byte *)((long)__dest + 0x17);
      __dest[1] = uVar5;
    }
    if ((uVar3 >> 7 & 1) != 0) {
      puVar6 = (undefined8 *)*__dest;
    }
    memset((void *)((long)puVar6 + uVar5),0,uVar4 - uVar5);
    if (-1 < *(char *)((long)__dest + 0x17)) {
      *(byte *)((long)__dest + 0x17) = auVar7[8] & 0x7f;
      goto LAB_007143f8;
    }
  }
  __dest[1] = uVar4;
LAB_007143f8:
  *(undefined1 *)((long)puVar6 + uVar4) = 0;
  if (*(char *)((long)__dest + 0x17) < '\0') {
    __dest = (undefined8 *)*__dest;
  }
  memcpy(__dest,__src,uVar4);
  return (long)__src + uVar4;
}


// ===== 00714438  FUN_00714438 =====

void FUN_00714438(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  return;
}


// ===== 00714448  FUN_00714448 =====

void FUN_00714448(void)

{
  return;
}


// ===== 00714450  FUN_00714450 =====

void FUN_00714450(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_00d29e78;
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)((long)param_1 + 0x24) = 0;
  param_1[2] = uVar2;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[3] = param_1[1];
  return;
}


// ===== 00714484  FUN_00714484 =====

void FUN_00714484(void)

{
  return;
}


// ===== 0071448c  FUN_0071448c =====

void FUN_0071448c(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00714498  FUN_00714498 =====

void FUN_00714498(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_2 + 0x14) == '\x01') {
    uVar1 = *(undefined4 *)(param_2 + 0x10);
    *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_2 + 0x14);
    *(undefined4 *)(param_1 + 0x20) = uVar1;
  }
  if (*(char *)(param_2 + 0x28) == '\x01') {
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = uVar2;
  }
  return;
}


// ===== 007144d8  FUN_007144d8 =====

void FUN_007144d8(long param_1,undefined4 *param_2)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  if ((*(char *)(param_1 + 0x24) == '\x01') && (*(char *)(param_1 + 0x30) == '\x01')) {
    if (*(char *)(param_2 + 3) == '\x01') {
      *(undefined4 *)(param_1 + 0x1c) = param_2[2];
    }
    lVar1 = 0x10;
    if (*(char *)(param_2 + 0xc) == '\0') {
      lVar1 = 0x14;
    }
    iVar4 = 0;
    if ((long)*(int *)(param_1 + 0x1c) != 0) {
      iVar4 = (int)((ulong)((*(long *)(param_1 + 0x28) + (long)*(int *)(param_1 + lVar1)) * 8000) /
                   (ulong)(long)*(int *)(param_1 + 0x1c));
    }
    uVar3 = *(int *)(param_1 + 0x20) - iVar4;
    *(uint *)(param_1 + 0x18) = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
  }
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  *(undefined1 *)(param_2 + 1) = 1;
  *param_2 = uVar2;
  return;
}


// ===== 0071455c  FUN_0071455c =====

void FUN_0071455c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined4 *)(param_1 + 2) = param_4;
  *(undefined4 *)((long)param_1 + 0x14) = param_5;
  return;
}


// ===== 0071456c  FUN_0071456c =====

void FUN_0071456c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = &PTR_FUN_00d29ea8;
  uVar3 = param_2[1];
  uVar2 = *param_2;
  uVar1 = param_2[2];
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)((long)param_1 + 0x2c) = 0;
  param_1[2] = uVar3;
  param_1[1] = uVar2;
  param_1[3] = uVar1;
  param_1[4] = param_1[2];
  return;
}


// ===== 0071459c  FUN_0071459c =====

void FUN_0071459c(void)

{
  return;
}


// ===== 007145a4  FUN_007145a4 =====

void FUN_007145a4(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 007145b0  FUN_007145b0 =====

void FUN_007145b0(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (*(char *)(param_2 + 1) == '\x01') {
    uVar1 = *param_2;
    *(undefined1 *)(param_1 + 0x2c) = *(undefined1 *)(param_2 + 1);
    *(undefined4 *)(param_1 + 0x28) = uVar1;
  }
  return;
}


// ===== 007145d4  FUN_007145d4 =====

void FUN_007145d4(long param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  if (*(char *)(param_1 + 0x2c) != '\x01') goto LAB_00714644;
  if (uVar1 == 1) {
    if (*(int *)(param_1 + 0x28) < *(int *)(param_1 + 0x18)) {
      uVar1 = 1;
      goto LAB_00714644;
    }
    uVar1 = *(ulong *)(param_1 + 8);
    if (1 < uVar1) {
      uVar1 = 2;
    }
  }
  else {
    if (uVar1 != 2) goto LAB_00714644;
    if (*(int *)(param_1 + 0x1c) < *(int *)(param_1 + 0x28)) {
      uVar1 = 2;
      goto LAB_00714644;
    }
    uVar1 = 1;
  }
  *(ulong *)(param_1 + 0x20) = uVar1;
LAB_00714644:
  *(ulong *)(param_2 + 0x20) = uVar1;
  *(undefined1 *)(param_2 + 0x28) = 1;
  return;
}


// ===== 00714654  FUN_00714654 =====

void FUN_00714654(undefined8 *param_1,undefined4 *param_2,long param_3,undefined4 param_4,
                 byte param_5)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  ulong uVar5;
  undefined4 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 local_24 [4];
  
  uVar11 = param_3 * 4;
  *param_1 = &PTR_FUN_00d29ed8;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (uVar11 == 0) {
    puVar3 = (undefined4 *)0x0;
    puVar2 = (undefined4 *)0x0;
  }
  else {
    if ((long)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d348c();
    }
    puVar2 = (undefined4 *)operator_new(uVar11);
    param_1[1] = puVar2;
    param_1[2] = puVar2;
    uVar8 = uVar11 - 4 >> 2;
    param_1[3] = puVar2 + param_3;
    uVar11 = (ulong)-(long)puVar2 >> 2;
    if (uVar8 <= (ulong)-(long)puVar2 >> 2) {
      uVar11 = uVar8;
    }
    puVar3 = param_2;
    puVar6 = puVar2;
    if (0x27 < uVar11) {
      uVar5 = (ulong)-(long)puVar2 >> 2;
      if (uVar8 <= uVar5) {
        uVar5 = uVar8;
      }
      if (((((-(long)puVar2 & 3U) == 0) && (puVar2 <= puVar2 + uVar5)) &&
          (param_2 <= param_2 + uVar5)) && (0x1f < (ulong)((long)puVar2 - (long)param_2))) {
        puVar9 = (undefined8 *)(puVar2 + 4);
        uVar8 = uVar11 + 1 & 7;
        puVar10 = (undefined8 *)(param_2 + 4);
        uVar5 = 8;
        if (uVar8 != 0) {
          uVar5 = uVar8;
        }
        lVar7 = (uVar11 + 1) - uVar5;
        puVar3 = param_2 + lVar7;
        puVar6 = puVar2 + lVar7;
        do {
          puVar1 = puVar10 + -1;
          uVar12 = puVar10[-2];
          uVar14 = puVar10[1];
          uVar13 = *puVar10;
          lVar7 = lVar7 + -8;
          puVar10 = puVar10 + 4;
          puVar9[-1] = *puVar1;
          puVar9[-2] = uVar12;
          puVar9[1] = uVar14;
          *puVar9 = uVar13;
          puVar9 = puVar9 + 4;
        } while (lVar7 != 0);
      }
    }
    lVar7 = (long)puVar2 - (long)puVar6;
    do {
      if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      puVar4 = puVar3 + 1;
      lVar7 = lVar7 + -4;
      *puVar6 = *puVar3;
      puVar3 = puVar4;
      puVar6 = puVar6 + 1;
    } while (puVar4 != param_2 + param_3);
    puVar3 = (undefined4 *)((long)puVar2 - lVar7);
    param_1[2] = puVar3;
  }
  *(undefined4 *)(param_1 + 4) = param_4;
  *(byte *)((long)param_1 + 0x24) = param_5 & 1;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)((long)param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)((long)param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)((long)param_1 + 0x3c) = 0;
  if (puVar2 == puVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../modules/audio_coding/audio_network_adaptor/frame_length_controller_v2.cc",
                 0x23,"!encoder_frame_lengths_ms_.empty()",&DAT_001f5fa0);
  }
  local_24[0] = 0xaa;
  FUN_00515e44(puVar2,puVar3,local_24);
  return;
}


// ===== 00714828  FUN_00714828 =====

void FUN_00714828(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_2 + 5) == '\x01') {
    uVar1 = param_2[4];
    *(undefined1 *)(param_1 + 0x34) = *(undefined1 *)(param_2 + 5);
    *(undefined4 *)(param_1 + 0x30) = uVar1;
  }
  if (*(char *)(param_2 + 10) == '\x01') {
    if (*(char *)(param_1 + 0x3c) == '\0') {
      if ((undefined4 *)(param_1 + 0x38) == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      uVar2 = *(undefined8 *)(param_2 + 8);
      *(undefined1 *)(param_1 + 0x3c) = 1;
      *(int *)(param_1 + 0x38) = (int)uVar2;
    }
    else {
      *(undefined4 *)(param_1 + 0x38) = (int)*(undefined8 *)(param_2 + 8);
    }
  }
  if (*(char *)(param_2 + 1) == '\x01') {
    uVar1 = *param_2;
    *(undefined1 *)(param_1 + 0x2c) = *(undefined1 *)(param_2 + 1);
    *(undefined4 *)(param_1 + 0x28) = uVar1;
  }
  return;
}


// ===== 007148c0  FUN_007148c0 =====

void FUN_007148c0(long param_1,long param_2)

{
  long lVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  if (*(char *)(param_1 + 0x34) != '\x01') {
    return;
  }
  if (*(char *)(param_1 + 0x3c) != '\x01') {
    return;
  }
  if (*(char *)(param_1 + 0x2c) != '\x01') {
    return;
  }
  piVar2 = *(int **)(param_1 + 8);
  piVar3 = *(int **)(param_1 + 0x10);
  piVar5 = piVar2;
  if (piVar2 == piVar3) {
LAB_00714950:
    if (piVar5 != piVar3) goto LAB_00714964;
  }
  else {
    lVar1 = 0x28;
    if (*(char *)(param_1 + 0x24) == '\0') {
      lVar1 = 0x30;
    }
    do {
      iVar4 = 0;
      if (*piVar5 != 0) {
        iVar4 = (*(int *)(param_1 + 0x38) * 8000) / *piVar5;
      }
      if (*(int *)(param_1 + 0x20) < *(int *)(param_1 + lVar1) - iVar4) goto LAB_00714950;
      piVar5 = piVar5 + 1;
    } while (piVar5 != piVar3);
  }
  if (piVar2 == piVar3) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__vector/vector.h:439: libc++ Hardening assertion !empty() failed: back() called on an empty vector\n"
              );
  }
  piVar5 = piVar3 + -1;
LAB_00714964:
  iVar4 = *piVar5;
  *(undefined1 *)(param_2 + 0xc) = 1;
  *(int *)(param_2 + 8) = iVar4;
  return;
}


// ===== 00714994  FUN_00714994 =====

void FUN_00714994(long param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  pvVar1 = *(void **)(param_1 + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  pvVar2 = *(void **)(param_1 + 0x10);
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
      *(void **)(param_1 + 0x10) = pvVar1;
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


// ===== 00714a3c  FUN_00714a3c =====

void FUN_00714a3c(void *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  pvVar1 = *(void **)((long)param_1 + 8);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = *(void **)((long)param_1 + 0x10);
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
    *(void **)((long)param_1 + 0x10) = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 00714af8  FUN_00714af8 =====

void FUN_00714af8(undefined1 *param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  *(undefined4 *)(param_1 + 8) = param_4;
  return;
}


// ===== 00714b08  FUN_00714b08 =====

void FUN_00714b08(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_00d29f08;
  uVar1 = *(undefined4 *)(param_2 + 1);
  uVar2 = *param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((long)param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 2) = uVar1;
  param_1[1] = uVar2;
  *(char *)((long)param_1 + 0x14) = (char)uVar2;
  return;
}


// ===== 00714b38  FUN_00714b38 =====

void FUN_00714b38(void)

{
  return;
}


// ===== 00714b40  FUN_00714b40 =====

void FUN_00714b40(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00714b4c  FUN_00714b4c =====

void FUN_00714b4c(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (*(char *)(param_2 + 1) == '\x01') {
    uVar1 = *param_2;
    *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_2 + 1);
    *(undefined4 *)(param_1 + 0x18) = uVar1;
  }
  return;
}


// ===== 00714b70  FUN_00714b70 =====

void FUN_00714b70(long param_1,long param_2)

{
  ushort uVar1;
  
  if ((*(byte *)(param_1 + 0x1c) & 1) == 0) {
    uVar1 = (ushort)*(byte *)(param_1 + 0x14);
  }
  else if (*(char *)(param_1 + 0x14) == '\x01') {
    if (*(int *)(param_1 + 0x18) < *(int *)(param_1 + 0x10)) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
      *(undefined1 *)(param_1 + 0x14) = 0;
    }
  }
  else if (*(int *)(param_1 + 0xc) < *(int *)(param_1 + 0x18)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
    *(undefined1 *)(param_1 + 0x14) = 1;
  }
  *(ushort *)(param_2 + 0x1a) = uVar1 | 0x100;
  return;
}


// ===== 00714bdc  FUN_00714bdc =====

void FUN_00714bdc(undefined4 param_1,undefined4 param_2,long *param_3,long param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 long *param_9)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  plVar2 = param_3 + 1;
  *plVar2 = 0;
  *param_3 = (long)plVar2;
  param_3[2] = 0;
  if (*(long *)(param_4 + 0x10) != 0) {
    lVar1 = FUN_00663714(param_3,*(undefined8 *)(param_4 + 8),param_3);
    param_3[1] = lVar1;
    *(long **)(lVar1 + 0x10) = plVar2;
    plVar2 = (long *)param_3[1];
    do {
      plVar3 = plVar2;
      plVar2 = (long *)*plVar3;
    } while (plVar2 != (long *)0x0);
    *param_3 = (long)plVar3;
    param_3[2] = *(long *)(param_4 + 0x10);
  }
  *(undefined4 *)(param_3 + 3) = param_5;
  *(undefined4 *)((long)param_3 + 0x1c) = param_6;
  *(undefined4 *)(param_3 + 4) = param_1;
  *(undefined4 *)((long)param_3 + 0x24) = param_2;
  *(undefined4 *)(param_3 + 5) = param_7;
  *(undefined4 *)((long)param_3 + 0x2c) = param_8;
  param_3[6] = *param_9;
  plVar2 = param_9 + 1;
  lVar1 = *plVar2;
  plVar3 = param_3 + 7;
  *plVar3 = lVar1;
  lVar4 = param_9[2];
  param_3[8] = lVar4;
  if (lVar4 == 0) {
    param_3[6] = (long)plVar3;
  }
  else {
    *(long **)(lVar1 + 0x10) = plVar3;
    *param_9 = (long)plVar2;
    *plVar2 = 0;
    param_9[2] = 0;
  }
  return;
}


// ===== 00714cd0  FUN_00714cd0 =====

void FUN_00714cd0(long param_1)

{
  long local_8;
  
  local_8 = param_1 + 0x30;
  FUN_006d6bd8(&local_8,*(undefined8 *)(param_1 + 0x38));
  local_8 = param_1;
  FUN_005fa1cc(&local_8,*(undefined8 *)(param_1 + 8));
  return;
}


// ===== 00714d18  FUN_00714d18 =====

void FUN_00714d18(undefined8 *param_1,long param_2)

{
  long *plVar1;
  bool bVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  *param_1 = &PTR_FUN_00d29f38;
  plVar8 = param_1 + 2;
  *plVar8 = 0;
  puVar3 = param_1 + 1;
  *puVar3 = plVar8;
  param_1[3] = 0;
  plVar5 = plVar8;
  if (*(long *)(param_2 + 0x10) != 0) {
    lVar4 = FUN_00663714(puVar3,*(undefined8 *)(param_2 + 8),puVar3);
    *plVar8 = lVar4;
    *(long **)(lVar4 + 0x10) = plVar8;
    plVar6 = (long *)*plVar8;
    do {
      plVar5 = plVar6;
      plVar6 = (long *)*plVar5;
    } while ((long *)*plVar5 != (long *)0x0);
    param_1[1] = plVar5;
    param_1[3] = *(undefined8 *)(param_2 + 0x10);
  }
  uVar10 = *(undefined8 *)(param_2 + 0x20);
  uVar9 = *(undefined8 *)(param_2 + 0x18);
  uVar7 = *(undefined8 *)(param_2 + 0x28);
  plVar6 = param_1 + 8;
  *plVar6 = 0;
  puVar3 = param_1 + 7;
  *puVar3 = plVar6;
  param_1[6] = uVar7;
  param_1[5] = uVar10;
  param_1[4] = uVar9;
  param_1[9] = 0;
  if (*(long *)(param_2 + 0x40) != 0) {
    lVar4 = FUN_0071532c(puVar3,*(undefined8 *)(param_2 + 0x38),puVar3);
    *plVar6 = lVar4;
    *(long **)(lVar4 + 0x10) = plVar6;
    plVar5 = (long *)*plVar6;
    do {
      plVar6 = plVar5;
      plVar5 = (long *)*plVar6;
    } while (plVar5 != (long *)0x0);
    param_1[7] = plVar6;
    plVar5 = (long *)param_1[1];
    param_1[9] = *(undefined8 *)(param_2 + 0x40);
  }
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined1 *)((long)param_1 + 0x5c) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((long)param_1 + 100) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  plVar6 = plVar5;
  if (plVar5 != plVar8) {
    do {
      plVar6 = plVar5;
      if (*(int *)((long)plVar5 + 0x1c) == *(int *)(param_1 + 4)) break;
      plVar1 = (long *)plVar5[1];
      if ((long *)plVar5[1] == (long *)0x0) {
        do {
          plVar5 = (long *)plVar6[2];
          bVar2 = plVar6 != (long *)*plVar5;
          plVar6 = plVar5;
        } while (bVar2);
      }
      else {
        do {
          plVar5 = plVar1;
          plVar1 = (long *)*plVar5;
        } while ((long *)*plVar5 != (long *)0x0);
      }
      plVar6 = plVar8;
    } while (plVar5 != plVar8);
  }
  param_1[10] = plVar6;
  return;
}


// ===== 00714e8c  FUN_00714e8c =====

void FUN_00714e8c(long param_1)

{
  long local_28;
  
  local_28 = param_1 + 0x38;
  FUN_006d6bd8(&local_28,*(undefined8 *)(param_1 + 0x40));
  local_28 = param_1 + 8;
  FUN_005fa1cc(&local_28,*(undefined8 *)(param_1 + 0x10));
  return;
}


// ===== 00714ee0  FUN_00714ee0 =====

void FUN_00714ee0(void *param_1)

{
  long local_28;
  
  local_28 = (long)param_1 + 0x38;
  FUN_006d6bd8(&local_28,*(undefined8 *)((long)param_1 + 0x40));
  local_28 = (long)param_1 + 8;
  FUN_005fa1cc(&local_28,*(undefined8 *)((long)param_1 + 0x10));
  operator_delete(param_1);
  return;
}


// ===== 00714f40  FUN_00714f40 =====

void FUN_00714f40(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_2 + 1) == '\x01') {
    uVar1 = *param_2;
    *(undefined1 *)(param_1 + 0x5c) = *(undefined1 *)(param_2 + 1);
    *(undefined4 *)(param_1 + 0x58) = uVar1;
  }
  if (*(char *)(param_2 + 3) == '\x01') {
    uVar1 = param_2[2];
    *(undefined1 *)(param_1 + 100) = *(undefined1 *)(param_2 + 3);
    *(undefined4 *)(param_1 + 0x60) = uVar1;
  }
  if (*(char *)(param_2 + 10) == '\x01') {
    uVar2 = *(undefined8 *)(param_2 + 8);
    *(undefined1 *)(param_1 + 0x70) = *(undefined1 *)(param_2 + 10);
    *(undefined8 *)(param_1 + 0x68) = uVar2;
  }
  return;
}


// ===== 00714f9c  FUN_00714f9c =====

void FUN_00714f9c(long param_1,long param_2)

{
  ulong uVar1;
  undefined1 uVar2;
  
  uVar1 = FUN_0071500c();
  if ((uVar1 & 1) == 0) {
    uVar1 = FUN_00715194(param_1);
    if ((uVar1 & 1) == 0) {
      uVar2 = *(undefined1 *)(param_1 + 0x78);
    }
    else {
      uVar2 = 0;
      *(undefined1 *)(param_1 + 0x78) = 0;
    }
  }
  else {
    uVar2 = 1;
    *(undefined1 *)(param_1 + 0x78) = 1;
  }
  *(undefined1 *)(param_2 + 0x30) = uVar2;
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(*(long *)(param_1 + 0x50) + 0x1c);
  *(undefined1 *)(param_2 + 0xc) = 1;
  return;
}


// ===== 0071500c  FUN_0071500c =====

undefined8 FUN_0071500c(long param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  plVar8 = *(long **)(param_1 + 0x50);
  plVar5 = plVar8;
  plVar9 = (long *)plVar8[1];
  if ((long *)plVar8[1] == (long *)0x0) {
    do {
      plVar7 = (long *)plVar5[2];
      bVar4 = plVar5 != (long *)*plVar7;
      plVar5 = plVar7;
    } while (bVar4);
  }
  else {
    do {
      plVar7 = plVar9;
      plVar9 = (long *)*plVar7;
    } while ((long *)*plVar7 != (long *)0x0);
  }
  if (plVar7 != (long *)(param_1 + 0x10)) {
    plVar5 = (long *)(param_1 + 0x40);
    iVar1 = *(int *)((long)plVar8 + 0x1c);
    do {
      plVar9 = (long *)(param_1 + 0x40);
      if ((long *)*plVar5 != (long *)0x0) {
        plVar9 = (long *)*plVar5;
        do {
          while( true ) {
            iVar2 = *(int *)((long)plVar9 + 0x1c);
            if (iVar2 <= iVar1) break;
LAB_0071507c:
            plVar9 = (long *)*plVar9;
            if (plVar9 == (long *)0x0) goto LAB_007150bc;
          }
          if (iVar1 == iVar2) {
            if (*(int *)((long)plVar7 + 0x1c) < (int)plVar9[4]) goto LAB_0071507c;
            if (*(int *)((long)plVar7 + 0x1c) <= (int)plVar9[4]) goto LAB_007150c4;
          }
          else if (iVar1 <= iVar2) {
LAB_007150c4:
            if (plVar9 != plVar5) goto LAB_00715100;
            goto LAB_007150cc;
          }
          plVar9 = (long *)plVar9[1];
        } while (plVar9 != (long *)0x0);
LAB_007150bc:
        plVar9 = (long *)(param_1 + 0x40);
      }
LAB_007150cc:
      plVar6 = plVar7;
      plVar3 = (long *)plVar7[1];
      if ((long *)plVar7[1] == (long *)0x0) {
        do {
          plVar7 = (long *)plVar6[2];
          bVar4 = plVar6 != (long *)*plVar7;
          plVar6 = plVar7;
        } while (bVar4);
      }
      else {
        do {
          plVar7 = plVar3;
          plVar3 = (long *)*plVar7;
        } while ((long *)*plVar7 != (long *)0x0);
      }
    } while (plVar7 != (long *)(param_1 + 0x10));
    plVar7 = (long *)(param_1 + 0x10);
LAB_00715100:
    if (plVar9 == plVar5) {
      return 0;
    }
    if (*(char *)(param_1 + 0x5c) != '\x01') {
      return 0;
    }
    if (*(char *)(param_1 + 0x70) == '\x01') {
      iVar1 = 0;
      if ((long)*(int *)((long)plVar8 + 0x1c) != 0) {
        iVar1 = (int)((ulong)((*(long *)(param_1 + 0x68) + (long)*(int *)(param_1 + 0x30)) * 8000) /
                     (ulong)(long)*(int *)((long)plVar8 + 0x1c));
      }
      if (*(int *)(param_1 + 0x58) <= *(int *)(param_1 + 0x24) + 5000 + iVar1) goto LAB_00715188;
    }
    if (((*(int *)(param_1 + 0x58) <= *(int *)((long)plVar9 + 0x24)) &&
        (*(char *)(param_1 + 100) == '\x01')) &&
       (*(float *)(param_1 + 0x60) <= *(float *)(param_1 + 0x28))) {
LAB_00715188:
      *(long **)(param_1 + 0x50) = plVar7;
      return 1;
    }
  }
  return 0;
}


// ===== 00715194  FUN_00715194 =====

undefined8 FUN_00715194(long param_1)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  
  plVar6 = *(long **)(param_1 + 0x50);
  if (*(long **)(param_1 + 8) != plVar6) {
    plVar1 = (long *)(param_1 + 0x40);
    iVar2 = *(int *)((long)plVar6 + 0x1c);
    do {
      plVar7 = plVar6;
      plVar4 = (long *)*plVar6;
      if ((long *)*plVar6 == (long *)0x0) {
        do {
          plVar6 = (long *)plVar7[2];
          bVar5 = plVar7 == (long *)*plVar6;
          plVar7 = plVar6;
        } while (bVar5);
      }
      else {
        do {
          plVar6 = plVar4;
          plVar4 = (long *)plVar6[1];
        } while ((long *)plVar6[1] != (long *)0x0);
      }
      plVar7 = (long *)(param_1 + 0x40);
      if ((long *)*plVar1 != (long *)0x0) {
        plVar7 = (long *)*plVar1;
        do {
          while( true ) {
            iVar3 = *(int *)((long)plVar7 + 0x1c);
            if (iVar3 <= iVar2) break;
LAB_00715204:
            plVar7 = (long *)*plVar7;
            if (plVar7 == (long *)0x0) goto LAB_007151b8;
          }
          if (iVar2 == iVar3) {
            if (*(int *)((long)plVar6 + 0x1c) < (int)plVar7[4]) goto LAB_00715204;
            if (*(int *)((long)plVar6 + 0x1c) <= (int)plVar7[4]) goto LAB_00715248;
          }
          else if (iVar2 <= iVar3) {
LAB_00715248:
            if (plVar7 == plVar1) goto LAB_007151bc;
            goto LAB_00715250;
          }
          plVar7 = (long *)plVar7[1];
        } while (plVar7 != (long *)0x0);
LAB_007151b8:
        plVar7 = (long *)(param_1 + 0x40);
      }
LAB_007151bc:
    } while (plVar6 != *(long **)(param_1 + 8));
LAB_00715250:
    if (plVar7 == plVar1) {
      return 0;
    }
    if (*(char *)(param_1 + 0x5c) == '\x01') {
      if (*(char *)(param_1 + 0x70) == '\x01') {
        iVar2 = 0;
        if ((long)*(int *)((long)plVar6 + 0x1c) != 0) {
          iVar2 = (int)((ulong)((*(long *)(param_1 + 0x68) + (long)*(int *)(param_1 + 0x34)) * 8000)
                       / (ulong)(long)*(int *)((long)plVar6 + 0x1c));
        }
        if (*(int *)(param_1 + 0x58) <= *(int *)(param_1 + 0x24) + 5000 + iVar2) {
          return 0;
        }
      }
      if (*(int *)((long)plVar7 + 0x24) <= *(int *)(param_1 + 0x58)) goto LAB_007152d8;
    }
    if ((*(char *)(param_1 + 100) == '\x01') &&
       (*(float *)(param_1 + 0x60) < *(float *)(param_1 + 0x2c) ==
        (NAN(*(float *)(param_1 + 0x60)) || NAN(*(float *)(param_1 + 0x2c))))) {
LAB_007152d8:
      *(long **)(param_1 + 0x50) = plVar6;
      return 1;
    }
  }
  return 0;
}


// ===== 007152e4  FUN_007152e4 =====

void FUN_007152e4(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}


// ===== 007152f0  FUN_007152f0 =====

bool FUN_007152f0(int *param_1,int *param_2)

{
  if (*param_1 < *param_2) {
    return true;
  }
  if (*param_1 == *param_2) {
    return param_1[1] < param_2[1];
  }
  return false;
}


// ===== 0071532c  FUN_0071532c =====

long * FUN_0071532c(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  if (param_2 == (undefined8 *)0x0) {
    plVar3 = (long *)0x0;
  }
  else {
    plVar3 = (long *)operator_new(0x28);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    uVar1 = *(undefined4 *)((long)param_2 + 0x24);
    uVar6 = *param_2;
    *(undefined8 *)((long)plVar3 + 0x1c) = *(undefined8 *)((long)param_2 + 0x1c);
    *(undefined4 *)((long)plVar3 + 0x24) = uVar1;
    lVar4 = FUN_0071532c(param_1,uVar6,param_3);
    lVar5 = FUN_0071532c(param_1,param_2[1],param_3);
    uVar2 = *(undefined1 *)(param_2 + 3);
    *plVar3 = lVar4;
    plVar3[1] = lVar5;
    *(undefined1 *)(plVar3 + 3) = uVar2;
    if (lVar4 != 0) {
      *(long **)(lVar4 + 0x10) = plVar3;
    }
    if (lVar5 != 0) {
      *(long **)(lVar5 + 0x10) = plVar3;
    }
  }
  return plVar3;
}


// ===== 007153ec  FUN_007153ec =====

void FUN_007153ec(undefined1 *param_1,undefined1 param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined4 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = param_2;
  uVar2 = param_3[1];
  uVar1 = *param_3;
  *(undefined8 *)(param_1 + 0x14) = param_3[2];
  *(undefined8 *)(param_1 + 0xc) = uVar2;
  *(undefined8 *)(param_1 + 4) = uVar1;
  uVar1 = param_4[2];
  uVar3 = param_4[1];
  uVar2 = *param_4;
  *(undefined4 *)(param_1 + 0x34) = param_5;
  *(undefined8 *)(param_1 + 0x2c) = uVar1;
  *(undefined8 *)(param_1 + 0x24) = uVar3;
  *(undefined8 *)(param_1 + 0x1c) = uVar2;
  return;
}


// ===== 0071541c  FUN_0071541c =====

void FUN_0071541c(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  void *pvVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  pvVar2 = operator_new(0x40);
  FUN_006d4fb8(pvVar2,*(undefined4 *)((long)param_3 + 0x34));
  *param_1 = &PTR_FUN_00d29f68;
  lVar3 = *param_2;
  param_1[1] = lVar3;
  if (lVar3 != 0) {
    FUN_00d0f740(1,lVar3 + 8);
  }
  lVar5 = param_2[4];
  lVar3 = param_2[3];
  lVar7 = param_2[1];
  param_1[3] = param_2[2];
  param_1[2] = lVar7;
  param_1[5] = lVar5;
  param_1[4] = lVar3;
  uVar11 = param_3[3];
  uVar10 = param_3[2];
  uVar6 = param_3[5];
  uVar4 = param_3[4];
  uVar9 = param_3[1];
  uVar8 = *param_3;
  param_1[0xc] = param_3[6];
  param_1[9] = uVar11;
  param_1[8] = uVar10;
  param_1[0xb] = uVar6;
  param_1[10] = uVar4;
  param_1[7] = uVar9;
  param_1[6] = uVar8;
  uVar1 = *(undefined1 *)param_3;
  *(undefined1 *)((long)param_1 + 0x6c) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xd) = uVar1;
  param_1[0xf] = pvVar2;
  return;
}


// ===== 007154c0  FUN_007154c0 =====

void FUN_007154c0(long param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar2 + 1), iVar1 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x00715520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))(plVar2);
    return;
  }
  return;
}


// ===== 00715534  FUN_00715534 =====

void FUN_00715534(void *param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = *(long **)((long)param_1 + 0x78);
  *(undefined8 *)((long)param_1 + 0x78) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = *(long **)((long)param_1 + 8);
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar2 + 1), iVar1 == 1)) {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  operator_delete(param_1);
  return;
}


// ===== 007155a4  FUN_007155a4 =====

void FUN_007155a4(long param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  undefined4 uVar3;
  
  if (*(char *)(param_2 + 1) == '\x01') {
    uVar3 = *param_2;
    *(undefined1 *)(param_1 + 0x70) = *(undefined1 *)(param_2 + 1);
    *(undefined4 *)(param_1 + 0x6c) = uVar3;
  }
  if (*(char *)(param_2 + 3) == '\x01') {
    plVar2 = *(long **)(param_1 + 0x78);
    uVar3 = param_2[2];
    uVar1 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))(*(long **)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00715624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x10))(uVar3,plVar2,uVar1);
    return;
  }
  return;
}


// ===== 0071562c  FUN_0071562c =====

void FUN_0071562c(long param_1,long param_2)

{
  float fVar1;
  undefined8 uVar2;
  ulong uVar3;
  ushort uVar4;
  uint uVar5;
  long *plVar6;
  float fVar7;
  float fVar8;
  
  plVar6 = *(long **)(param_1 + 0x78);
  uVar2 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
  uVar3 = (**(code **)(*plVar6 + 0x18))(plVar6,uVar2);
  fVar1 = (float)uVar3;
  uVar5 = (uint)(uVar3 >> 0x20) & 1 & (uint)*(byte *)(param_1 + 0x70);
  if (*(char *)(param_1 + 0x68) == '\x01') {
    if (uVar5 != 0) {
      fVar8 = *(float *)(param_1 + 0x4c);
      fVar7 = (float)*(int *)(param_1 + 0x6c);
      if (fVar8 == fVar7 || fVar8 < fVar7 != (NAN(fVar8) || NAN(fVar7))) {
        if (fVar8 == fVar7) {
          fVar7 = *(float *)(param_1 + 0x50);
        }
        else if ((fVar7 <= fVar8) ||
                (fVar8 = *(float *)(param_1 + 0x54),
                fVar8 == fVar7 || fVar8 < fVar7 != (NAN(fVar8) || NAN(fVar7)))) {
          fVar7 = *(float *)(param_1 + 0x58);
        }
        else {
          fVar7 = *(float *)(param_1 + 0x60) + *(float *)(param_1 + 0x5c) * fVar7;
        }
        uVar5 = (uint)(fVar7 != fVar1 && fVar7 < fVar1 == (NAN(fVar7) || NAN(fVar1)));
      }
      else {
        uVar5 = 1;
      }
    }
    *(char *)(param_1 + 0x68) = (char)(uVar5 ^ 1);
    *(ushort *)(param_2 + 0x18) = (ushort)(uVar5 ^ 1) | 0x100;
joined_r0x007156dc:
    fVar7 = 0.0;
    if ((uVar3 >> 0x20 & 1) == 0) goto LAB_0071578c;
  }
  else {
    if (uVar5 == 0) {
      *(undefined1 *)(param_1 + 0x68) = 0;
      *(undefined2 *)(param_2 + 0x18) = 0x100;
      goto joined_r0x007156dc;
    }
    fVar8 = *(float *)(param_1 + 0x34);
    fVar7 = (float)*(int *)(param_1 + 0x6c);
    if (fVar8 == fVar7 || fVar8 < fVar7 != (NAN(fVar8) || NAN(fVar7))) {
      if (fVar8 == fVar7) {
        fVar7 = *(float *)(param_1 + 0x38);
      }
      else if ((fVar7 <= fVar8) ||
              (fVar8 = *(float *)(param_1 + 0x3c),
              fVar8 == fVar7 || fVar8 < fVar7 != (NAN(fVar8) || NAN(fVar7)))) {
        fVar7 = *(float *)(param_1 + 0x40);
      }
      else {
        fVar7 = *(float *)(param_1 + 0x48) + *(float *)(param_1 + 0x44) * fVar7;
      }
      uVar4 = (ushort)(fVar7 != fVar1 && fVar7 < fVar1 == (NAN(fVar7) || NAN(fVar1)));
    }
    else {
      uVar4 = 1;
    }
    *(char *)(param_1 + 0x68) = (char)(uVar4 ^ 1);
    *(ushort *)(param_2 + 0x18) = uVar4 ^ 1 | 0x100;
  }
  fVar7 = fVar1;
LAB_0071578c:
  if (*(char *)(param_2 + 0x14) == '\x01') {
    *(float *)(param_2 + 0x10) = fVar7;
  }
  else {
    if ((float *)(param_2 + 0x10) == (float *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *(float *)(param_2 + 0x10) = fVar7;
    *(undefined1 *)(param_2 + 0x14) = 1;
  }
  return;
}


// ===== 007157dc  FUN_007157dc =====

void FUN_007157dc(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  void *pvVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  *param_1 = &PTR_FUN_00d29f98;
  lVar2 = *param_2;
  param_1[1] = lVar2;
  if (lVar2 != 0) {
    FUN_00d0f740(1,lVar2 + 8);
  }
  lVar4 = param_2[4];
  lVar2 = param_2[3];
  lVar6 = param_2[2];
  lVar5 = param_2[1];
  param_1[6] = param_3;
  param_1[7] = param_4;
  param_1[3] = lVar6;
  param_1[2] = lVar5;
  param_1[5] = lVar4;
  param_1[4] = lVar2;
  uVar3 = param_1[5];
  pvVar1 = operator_new(0x50);
  FUN_00716708(0x3e800000,0x3f000000,pvVar1,uVar3,5000);
  param_1[8] = pvVar1;
  FUN_007169e4(param_1 + 9);
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  FUN_00666a34(param_1 + 0x17);
  return;
}


// ===== 00715884  FUN_00715884 =====

void FUN_00715884(long param_1)

{
  int iVar1;
  long *plVar2;
  void *pvVar3;
  
  FUN_00666a74(param_1 + 0xb8);
  if (*(char *)(param_1 + 0xb0) == '\x01') {
    FUN_006d53ac(param_1 + 0x78);
  }
  FUN_00716a14(param_1 + 0x48);
  pvVar3 = *(void **)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (pvVar3 != (void *)0x0) {
    FUN_00716724(pvVar3);
    operator_delete(pvVar3);
  }
  plVar2 = *(long **)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = *(long **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar2 + 1), iVar1 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x00715940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))(plVar2);
    return;
  }
  return;
}


// ===== 00715954  FUN_00715954 =====

void FUN_00715954(void *param_1)

{
  FUN_00715884();
  operator_delete(param_1);
  return;
}


// ===== 00715984  FUN_00715984 =====

void FUN_00715984(long param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 *local_7c;
  undefined1 *puStack_74;
  undefined1 *local_6c;
  undefined1 *puStack_64;
  undefined4 local_5c;
  undefined8 *local_58;
  undefined8 *local_50;
  
  *(undefined4 *)(param_1 + 0x48) = param_2;
  plVar5 = *(long **)(param_1 + 0x38);
  *(undefined1 *)(param_1 + 0x4c) = 1;
  if (plVar5 != (long *)0x0) {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
    uVar3 = uVar2 / 1000;
    if (499 < uVar2 % 1000) {
      uVar3 = uVar3 + 1;
    }
    if ((uVar2 & 0x8000000000000000) != 0) {
      uVar3 = -(-uVar2 / 1000) - (ulong)(500 < -uVar2 % 1000);
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,(undefined4 *)(param_1 + 0x48),uVar3);
  }
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = 0xffffffff;
  puStack_74 = &DAT_aaaaaaaaaaaaaaaa;
  local_7c = &DAT_aaaaaaaaaaaaaaaa;
  puStack_64 = &DAT_aaaaaaaaaaaaaaaa;
  local_6c = &DAT_aaaaaaaaaaaaaaaa;
  local_5c = 0xaaaaaaaa;
  FUN_007169e4(&local_88);
  local_88._0_5_ = CONCAT14(1,param_2);
  (**(code **)(**(long **)(param_1 + 0x30) + 0x18))(&local_58);
  puVar1 = local_50;
  for (puVar4 = local_58; puVar4 != puVar1; puVar4 = puVar4 + 1) {
    (**(code **)(*(long *)*puVar4 + 0x10))((long *)*puVar4,&local_88);
  }
  if (local_58 != (undefined8 *)0x0) {
    uVar2 = (ulong)((long)local_50 + (-8 - ((long)local_50 << 0x3d))) >> 3;
    uVar3 = (ulong)(((long)local_58 - (long)local_50 << 0x3d) - ((long)local_58 - (long)local_50))
            >> 3;
    if (uVar2 <= uVar3) {
      uVar3 = uVar2;
    }
    if ((1 < uVar3) && ((((int)local_58 - (int)local_50 | -(int)local_50) & 7U) == 0)) {
      uVar3 = uVar3 & 0x1ffffffffffffffe;
      local_50 = local_50 + -uVar3;
      do {
        uVar3 = uVar3 - 2;
      } while (uVar3 != 0);
    }
    while (local_50 != local_58) {
      local_50 = local_50 + -1;
      if (local_50 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    operator_delete(local_58);
  }
  FUN_00716a14(&local_88);
  return;
}


// ===== 00715b60  FUN_00715b60 =====

void FUN_00715b60(undefined4 param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_6c;
  undefined1 *puStack_64;
  undefined1 *local_5c;
  undefined1 *puStack_54;
  undefined4 local_4c;
  undefined8 *local_48;
  undefined8 *local_40;
  
  plVar5 = *(long **)(param_2 + 0x38);
  *(undefined4 *)(param_2 + 0x50) = param_1;
  *(undefined1 *)(param_2 + 0x54) = 1;
  if (plVar5 != (long *)0x0) {
    uVar2 = (**(code **)(**(long **)(param_2 + 0x18) + 0x10))();
    uVar3 = uVar2 / 1000;
    if (499 < uVar2 % 1000) {
      uVar3 = uVar3 + 1;
    }
    if ((uVar2 & 0x8000000000000000) != 0) {
      uVar3 = -(-uVar2 / 1000) - (ulong)(500 < -uVar2 % 1000);
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,param_2 + 0x48,uVar3);
  }
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = 0xffffffff;
  puStack_64 = &DAT_aaaaaaaaaaaaaaaa;
  local_6c = &DAT_aaaaaaaaaaaaaaaa;
  puStack_54 = &DAT_aaaaaaaaaaaaaaaa;
  local_5c = &DAT_aaaaaaaaaaaaaaaa;
  local_4c = 0xaaaaaaaa;
  FUN_007169e4(&local_78);
  local_6c = (undefined1 *)CONCAT71(local_6c._1_7_,1);
  local_70 = param_1;
  (**(code **)(**(long **)(param_2 + 0x30) + 0x18))(&local_48);
  puVar1 = local_40;
  for (puVar4 = local_48; puVar4 != puVar1; puVar4 = puVar4 + 1) {
    (**(code **)(*(long *)*puVar4 + 0x10))((long *)*puVar4,&local_78);
  }
  if (local_48 != (undefined8 *)0x0) {
    uVar2 = (ulong)((long)local_40 + (-8 - ((long)local_40 << 0x3d))) >> 3;
    uVar3 = (ulong)(((long)local_48 - (long)local_40 << 0x3d) - ((long)local_48 - (long)local_40))
            >> 3;
    if (uVar2 <= uVar3) {
      uVar3 = uVar2;
    }
    if ((1 < uVar3) && ((((int)local_48 - (int)local_40 | -(int)local_40) & 7U) == 0)) {
      uVar3 = uVar3 & 0x1ffffffffffffffe;
      local_40 = local_40 + -uVar3;
      do {
        uVar3 = uVar3 - 2;
      } while (uVar3 != 0);
    }
    while (local_40 != local_48) {
      local_40 = local_40 + -1;
      if (local_40 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    operator_delete(local_48);
  }
  FUN_00716a14(&local_78);
  return;
}


// ===== 00715d38  FUN_00715d38 =====

void FUN_00715d38(long param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_6c;
  undefined8 uStack_64;
  undefined1 *local_5c;
  undefined1 *puStack_54;
  undefined4 local_4c;
  undefined8 *local_48;
  undefined8 *local_40;
  
  plVar5 = *(long **)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x60) = param_2;
  *(undefined1 *)(param_1 + 100) = 1;
  if (plVar5 != (long *)0x0) {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
    uVar3 = uVar2 / 1000;
    if (499 < uVar2 % 1000) {
      uVar3 = uVar3 + 1;
    }
    if ((uVar2 & 0x8000000000000000) != 0) {
      uVar3 = -(-uVar2 / 1000) - (ulong)(500 < -uVar2 % 1000);
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,param_1 + 0x48,uVar3);
  }
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = 0xffffffff;
  uStack_64 = &DAT_aaaaaaaaaaaaaaaa;
  local_6c = &DAT_aaaaaaaaaaaaaaaa;
  puStack_54 = &DAT_aaaaaaaaaaaaaaaa;
  local_5c = &DAT_aaaaaaaaaaaaaaaa;
  local_4c = 0xaaaaaaaa;
  FUN_007169e4(&local_78);
  uStack_64 = (undefined1 *)CONCAT44(param_2,(undefined4)uStack_64);
  local_5c = (undefined1 *)CONCAT71(local_5c._1_7_,1);
  (**(code **)(**(long **)(param_1 + 0x30) + 0x18))(&local_48);
  puVar1 = local_40;
  for (puVar4 = local_48; puVar4 != puVar1; puVar4 = puVar4 + 1) {
    (**(code **)(*(long *)*puVar4 + 0x10))((long *)*puVar4,&local_78);
  }
  if (local_48 != (undefined8 *)0x0) {
    uVar2 = (ulong)((long)local_40 + (-8 - ((long)local_40 << 0x3d))) >> 3;
    uVar3 = (ulong)(((long)local_48 - (long)local_40 << 0x3d) - ((long)local_48 - (long)local_40))
            >> 3;
    if (uVar2 <= uVar3) {
      uVar3 = uVar2;
    }
    if ((1 < uVar3) && ((((int)local_48 - (int)local_40 | -(int)local_40) & 7U) == 0)) {
      uVar3 = uVar3 & 0x1ffffffffffffffe;
      local_40 = local_40 + -uVar3;
      do {
        uVar3 = uVar3 - 2;
      } while (uVar3 != 0);
    }
    while (local_40 != local_48) {
      local_40 = local_40 + -1;
      if (local_40 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    operator_delete(local_48);
  }
  FUN_00716a14(&local_78);
  return;
}


// ===== 00715f08  FUN_00715f08 =====

void FUN_00715f08(long param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined1 *local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined1 *puStack_64;
  undefined1 *local_5c;
  undefined1 *puStack_54;
  undefined4 local_4c;
  undefined8 *local_48;
  undefined8 *local_40;
  
  plVar5 = *(long **)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x58) = param_2;
  *(undefined1 *)(param_1 + 0x5c) = 1;
  if (plVar5 != (long *)0x0) {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
    uVar3 = uVar2 / 1000;
    if (499 < uVar2 % 1000) {
      uVar3 = uVar3 + 1;
    }
    if ((uVar2 & 0x8000000000000000) != 0) {
      uVar3 = -(-uVar2 / 1000) - (ulong)(500 < -uVar2 % 1000);
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,param_1 + 0x48,uVar3);
  }
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = 0xffffffff;
  puStack_64 = &DAT_aaaaaaaaaaaaaaaa;
  local_6c = &DAT_aaaaaaaaaaaaaaaa;
  puStack_54 = &DAT_aaaaaaaaaaaaaaaa;
  local_5c = &DAT_aaaaaaaaaaaaaaaa;
  local_4c = 0xaaaaaaaa;
  FUN_007169e4(&local_78);
  local_6c = (undefined1 *)CONCAT44(param_2,(undefined4)local_6c);
  puStack_64 = (undefined1 *)CONCAT71(puStack_64._1_7_,1);
  (**(code **)(**(long **)(param_1 + 0x30) + 0x18))(&local_48);
  puVar1 = local_40;
  for (puVar4 = local_48; puVar4 != puVar1; puVar4 = puVar4 + 1) {
    (**(code **)(*(long *)*puVar4 + 0x10))((long *)*puVar4,&local_78);
  }
  if (local_48 != (undefined8 *)0x0) {
    uVar2 = (ulong)((long)local_40 + (-8 - ((long)local_40 << 0x3d))) >> 3;
    uVar3 = (ulong)(((long)local_48 - (long)local_40 << 0x3d) - ((long)local_48 - (long)local_40))
            >> 3;
    if (uVar2 <= uVar3) {
      uVar3 = uVar2;
    }
    if ((1 < uVar3) && ((((int)local_48 - (int)local_40 | -(int)local_40) & 7U) == 0)) {
      uVar3 = uVar3 & 0x1ffffffffffffffe;
      local_40 = local_40 + -uVar3;
      do {
        uVar3 = uVar3 - 2;
      } while (uVar3 != 0);
    }
    while (local_40 != local_48) {
      local_40 = local_40 + -1;
      if (local_40 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    operator_delete(local_48);
  }
  FUN_00716a14(&local_78);
  return;
}


// ===== 007160d8  FUN_007160d8 =====

void FUN_007160d8(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_6c;
  undefined1 *puStack_64;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined8 *local_48;
  undefined8 *local_40;
  
  plVar5 = *(long **)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x68) = param_2;
  *(undefined1 *)(param_1 + 0x70) = 1;
  if (plVar5 != (long *)0x0) {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
    uVar3 = uVar2 / 1000;
    if (499 < uVar2 % 1000) {
      uVar3 = uVar3 + 1;
    }
    if ((uVar2 & 0x8000000000000000) != 0) {
      uVar3 = -(-uVar2 / 1000) - (ulong)(500 < -uVar2 % 1000);
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,param_1 + 0x48,uVar3);
  }
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = 0xffffffff;
  puStack_64 = &DAT_aaaaaaaaaaaaaaaa;
  local_6c = &DAT_aaaaaaaaaaaaaaaa;
  uStack_54 = 0xaaaaaaaa;
  uStack_50 = 0xaaaaaaaa;
  local_5c = 0xaaaaaaaa;
  uStack_58 = 0xaaaaaaaa;
  local_4c = 0xaaaaaaaa;
  FUN_007169e4(&local_78);
  uStack_58 = (undefined4)param_2;
  uStack_54 = (undefined4)((ulong)param_2 >> 0x20);
  uStack_50 = CONCAT31(uStack_50._1_3_,1);
  (**(code **)(**(long **)(param_1 + 0x30) + 0x18))(&local_48);
  puVar1 = local_40;
  for (puVar4 = local_48; puVar4 != puVar1; puVar4 = puVar4 + 1) {
    (**(code **)(*(long *)*puVar4 + 0x10))((long *)*puVar4,&local_78);
  }
  if (local_48 != (undefined8 *)0x0) {
    uVar2 = (ulong)((long)local_40 + (-8 - ((long)local_40 << 0x3d))) >> 3;
    uVar3 = (ulong)(((long)local_48 - (long)local_40 << 0x3d) - ((long)local_48 - (long)local_40))
            >> 3;
    if (uVar2 <= uVar3) {
      uVar3 = uVar2;
    }
    if ((1 < uVar3) && ((((int)local_48 - (int)local_40 | -(int)local_40) & 7U) == 0)) {
      uVar3 = uVar3 & 0x1ffffffffffffffe;
      local_40 = local_40 + -uVar3;
      do {
        uVar3 = uVar3 - 2;
      } while (uVar3 != 0);
    }
    while (local_40 != local_48) {
      local_40 = local_40 + -1;
      if (local_40 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    operator_delete(local_48);
  }
  FUN_00716a14(&local_78);
  return;
}


// ===== 007162a8  FUN_007162a8 =====

void FUN_007162a8(int *param_1,long param_2)

{
  byte bVar1;
  char cVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 *local_58;
  undefined8 *local_50;
  
  param_1[4] = -1;
  *(undefined1 **)(param_1 + 2) = &DAT_aaaaaaaaaaaaaaaa;
  *(undefined1 **)param_1 = &DAT_aaaaaaaaaaaaaaaa;
  *(undefined1 **)(param_1 + 7) = &DAT_aaaaaaaaaaaaaaaa;
  *(undefined1 **)(param_1 + 5) = &DAT_aaaaaaaaaaaaaaaa;
  *(undefined1 **)(param_1 + 0xb) = &DAT_aaaaaaaaaaaaaaaa;
  *(undefined1 **)(param_1 + 9) = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xd] = -0x55555556;
  FUN_006d535c(param_1);
  (**(code **)(**(long **)(param_2 + 0x30) + 0x10))
            (&local_58,*(long **)(param_2 + 0x30),param_2 + 0x48);
  puVar3 = local_50;
  for (puVar9 = local_58; puVar9 != puVar3; puVar9 = puVar9 + 1) {
    (**(code **)(*(long *)*puVar9 + 0x18))((long *)*puVar9,param_1);
  }
  if (local_58 != (undefined8 *)0x0) {
    uVar8 = (ulong)((long)local_50 + (-8 - ((long)local_50 << 0x3d))) >> 3;
    uVar5 = (ulong)(((long)local_58 - (long)local_50 << 0x3d) - ((long)local_58 - (long)local_50))
            >> 3;
    if (uVar8 <= uVar5) {
      uVar5 = uVar8;
    }
    if ((1 < uVar5) && ((((int)local_58 - (int)local_50 | -(int)local_50) & 7U) == 0)) {
      uVar5 = uVar5 & 0x1ffffffffffffffe;
      local_50 = local_50 + -uVar5;
      do {
        uVar5 = uVar5 - 2;
      } while (uVar5 != 0);
    }
    while (local_50 != local_58) {
      local_50 = local_50 + -1;
      if (local_50 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    operator_delete(local_58);
  }
  if ((*(byte *)(param_2 + 0xb0) & 1) == 0) {
    if ((int *)(param_2 + 0x78) == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    FUN_006d538c(param_2 + 0x78,param_1);
    *(undefined1 *)(param_2 + 0xb0) = 1;
    plVar10 = *(long **)(param_2 + 0x38);
    goto joined_r0x007164e4;
  }
  bVar1 = *(byte *)(param_2 + 0x7c);
  if ((bVar1 & *(byte *)(param_1 + 1)) == 0) {
    if (*(byte *)(param_1 + 1) != bVar1) {
LAB_007163f8:
      cVar2 = *(char *)(param_2 + 0xbc);
      iVar7 = 1;
      *(undefined1 *)(param_2 + 0xbc) = 1;
      if (cVar2 != '\0') {
        iVar7 = *(int *)(param_2 + 0xb8) + 1;
      }
      *(int *)(param_2 + 0xb8) = iVar7;
    }
  }
  else {
    if ((bVar1 & 1) == 0) goto LAB_00716658;
    if (*param_1 != *(int *)(param_2 + 0x78)) goto LAB_007163f8;
  }
  bVar1 = *(byte *)(param_2 + 0x93);
  if ((bVar1 & *(byte *)((long)param_1 + 0x1b)) == 0) {
    if (*(byte *)((long)param_1 + 0x1b) != bVar1) {
LAB_00716438:
      cVar2 = *(char *)(param_2 + 0xcc);
      iVar7 = 1;
      *(undefined1 *)(param_2 + 0xcc) = 1;
      if (cVar2 != '\0') {
        iVar7 = *(int *)(param_2 + 200) + 1;
      }
      *(int *)(param_2 + 200) = iVar7;
    }
  }
  else {
    if ((bVar1 & 1) == 0) goto LAB_00716658;
    if (*(char *)((long)param_1 + 0x1a) != *(char *)(param_2 + 0x92)) goto LAB_00716438;
  }
  bVar1 = *(byte *)(param_2 + 0x91);
  if ((bVar1 & *(byte *)((long)param_1 + 0x19)) == 0) {
    if (*(byte *)((long)param_1 + 0x19) != bVar1) {
LAB_00716478:
      cVar2 = *(char *)(param_2 + 0xd4);
      iVar7 = 1;
      *(undefined1 *)(param_2 + 0xd4) = 1;
      if (cVar2 != '\0') {
        iVar7 = *(int *)(param_2 + 0xd0) + 1;
      }
      *(int *)(param_2 + 0xd0) = iVar7;
    }
  }
  else {
    if ((bVar1 & 1) == 0) goto LAB_00716658;
    if ((char)param_1[6] != *(char *)(param_2 + 0x90)) goto LAB_00716478;
  }
  if (((char)param_1[3] == '\x01') && (*(char *)(param_2 + 0x84) == '\x01')) {
    if (*(int *)(param_2 + 0x80) < param_1[2]) {
      lVar4 = 0xdc;
      lVar6 = 0xd8;
    }
    else {
      if (*(int *)(param_2 + 0x80) <= param_1[2]) goto LAB_007165dc;
      lVar4 = 0xe4;
      lVar6 = 0xe0;
    }
    iVar7 = 1;
    if (*(char *)(param_2 + lVar4) != '\0') {
      iVar7 = *(int *)(param_2 + lVar6) + 1;
    }
    *(int *)(param_2 + lVar6) = iVar7;
    *(undefined1 *)(param_2 + lVar4) = 1;
  }
LAB_007165dc:
  bVar1 = *(byte *)(param_2 + 0xa0);
  if ((bVar1 & *(byte *)(param_1 + 10)) == 0) {
    if (*(byte *)(param_1 + 10) != bVar1) {
LAB_00716600:
      cVar2 = *(char *)(param_2 + 0xc4);
      iVar7 = 1;
      *(undefined1 *)(param_2 + 0xc4) = 1;
      if (cVar2 != '\0') {
        iVar7 = *(int *)(param_2 + 0xc0) + 1;
      }
      *(int *)(param_2 + 0xc0) = iVar7;
    }
  }
  else {
    if ((bVar1 & 1) == 0) {
LAB_00716658:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1064: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                );
    }
    if (*(long *)(param_1 + 8) != *(long *)(param_2 + 0x98)) goto LAB_00716600;
  }
  if ((char)param_1[5] == '\x01') {
    iVar7 = param_1[4];
    *(undefined1 *)(param_2 + 0xec) = 1;
    *(int *)(param_2 + 0xe8) = iVar7;
  }
  FUN_006d53b4(param_2 + 0x78,param_1);
  plVar10 = *(long **)(param_2 + 0x38);
joined_r0x007164e4:
  if (plVar10 != (long *)0x0) {
    uVar8 = (**(code **)(**(long **)(param_2 + 0x18) + 0x10))();
    uVar5 = uVar8 / 1000;
    if (499 < uVar8 % 1000) {
      uVar5 = uVar5 + 1;
    }
    if ((uVar8 & 0x8000000000000000) != 0) {
      uVar5 = -(-uVar8 / 1000) - (ulong)(500 < -uVar8 % 1000);
    }
    (**(code **)(*plVar10 + 0x10))(plVar10,param_1,uVar5);
  }
  FUN_00716730(*(undefined8 *)(param_2 + 0x40),param_1);
  return;
}


// ===== 00716680  FUN_00716680 =====

void FUN_00716680(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
  uVar1 = FUN_00716e44(param_2);
  plVar2 = *(long **)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x007166c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))(plVar2);
    return;
  }
  return;
}


// ===== 007166d4  FUN_007166d4 =====

void FUN_007166d4(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x007166f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}


// ===== 007166f8  FUN_007166f8 =====

void FUN_007166f8(undefined8 param_1,long param_2)

{
  FUN_00666a7c(param_1,param_2 + 0xb8);
  return;
}


// ===== 00716708  FUN_00716708 =====

void FUN_00716708(undefined4 param_1,undefined4 param_2,undefined8 *param_3,undefined8 param_4,
                 undefined4 param_5)

{
  *param_3 = param_4;
  *(undefined4 *)(param_3 + 1) = param_5;
  *(undefined4 *)((long)param_3 + 0xc) = param_1;
  *(undefined4 *)(param_3 + 2) = param_2;
  FUN_006d535c(param_3 + 3);
  return;
}


// ===== 00716724  FUN_00716724 =====

void FUN_00716724(long param_1)

{
  FUN_006d53ac(param_1 + 0x18);
  return;
}


// ===== 00716730  FUN_00716730 =====

void FUN_00716730(undefined8 *param_1,int *param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  long *plVar6;
  float fVar7;
  float fVar8;
  
  bVar2 = *(byte *)(param_2 + 10);
  if ((bVar2 & *(byte *)(param_1 + 8)) == 0) {
    if (*(byte *)(param_1 + 8) != bVar2) goto LAB_00716850;
  }
  else {
    if ((bVar2 & 1) == 0) goto LAB_007168fc;
    if (param_1[7] != *(long *)(param_2 + 8)) goto LAB_00716850;
  }
  bVar2 = *(byte *)((long)param_2 + 0x1b);
  if ((bVar2 & *(byte *)((long)param_1 + 0x33)) == 0) {
    if (*(byte *)((long)param_1 + 0x33) != bVar2) goto LAB_00716850;
  }
  else {
    if ((bVar2 & 1) == 0) goto LAB_007168fc;
    if (*(char *)((long)param_1 + 0x32) != *(char *)((long)param_2 + 0x1a)) goto LAB_00716850;
  }
  bVar2 = *(byte *)((long)param_2 + 0x19);
  if ((bVar2 & *(byte *)((long)param_1 + 0x31)) == 0) {
    if (*(byte *)((long)param_1 + 0x31) != bVar2) goto LAB_00716850;
  }
  else {
    if ((bVar2 & 1) == 0) goto LAB_007168fc;
    if (*(char *)(param_1 + 6) != (char)param_2[6]) goto LAB_00716850;
  }
  bVar2 = *(byte *)(param_2 + 3);
  if ((bVar2 & *(byte *)((long)param_1 + 0x24)) == 0) {
    if (*(byte *)((long)param_1 + 0x24) != bVar2) goto LAB_00716850;
  }
  else {
    if ((bVar2 & 1) == 0) {
LAB_007168fc:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1064: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                );
    }
    if (*(int *)(param_1 + 4) != param_2[2]) goto LAB_00716850;
  }
  if ((*(byte *)((long)param_1 + 0x1c) & 1) == 0) {
    if ((*(byte *)(param_2 + 1) & 1) != 0) {
LAB_00716850:
      plVar6 = (long *)*param_1;
      pvVar4 = operator_new(0x40);
      FUN_00716974(pvVar4,param_2);
      (**(code **)(*plVar6 + 0x28))(plVar6,pvVar4);
      FUN_006d53b4(param_1 + 3,param_2);
      return;
    }
  }
  else if (*(byte *)(param_2 + 1) != 0) {
    iVar3 = *(int *)(param_1 + 3) - *param_2;
    iVar1 = -iVar3;
    if (-1 < iVar3) {
      iVar1 = iVar3;
    }
    iVar5 = (int)(*(float *)((long)param_1 + 0xc) * (float)*(int *)(param_1 + 3));
    iVar3 = *(int *)(param_1 + 1);
    if (iVar5 <= *(int *)(param_1 + 1)) {
      iVar3 = iVar5;
    }
    if (iVar3 <= iVar1) goto LAB_00716850;
  }
  if ((*(byte *)((long)param_1 + 0x2c) & 1) == 0) {
    if ((*(byte *)(param_2 + 5) & 1) != 0) goto LAB_007168c8;
  }
  else if ((*(byte *)(param_2 + 5) != 0) &&
          (fVar8 = ABS(*(float *)(param_1 + 5) - (float)param_2[4]),
          fVar7 = *(float *)(param_1 + 5) * *(float *)(param_1 + 2),
          fVar8 < fVar7 == (NAN(fVar8) || NAN(fVar7)))) {
LAB_007168c8:
    FUN_00716910(param_1,param_2);
    return;
  }
  return;
}


// ===== 00716910  FUN_00716910 =====

void FUN_00716910(undefined8 *param_1,undefined8 param_2)

{
  void *pvVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_1;
  pvVar1 = operator_new(0x40);
  FUN_00716974(pvVar1,param_2);
  (**(code **)(*plVar2 + 0x28))(plVar2,pvVar1);
  FUN_006d53b4(param_1 + 3,param_2);
  return;
}


// ===== 00716974  FUN_00716974 =====

void FUN_00716974(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_00d2a000;
  param_1[1] = 0;
  param_1[2] = *param_2;
  param_1[3] = param_2[1];
  param_1[4] = param_2[2];
  *(undefined2 *)(param_1 + 5) = *(undefined2 *)(param_2 + 3);
  *(undefined2 *)((long)param_1 + 0x2a) = *(undefined2 *)((long)param_2 + 0x1a);
  uVar1 = param_2[4];
  param_1[7] = param_2[5];
  param_1[6] = uVar1;
  return;
}


// ===== 007169b8  FUN_007169b8 =====

void FUN_007169b8(void)

{
  return;
}


// ===== 007169c0  FUN_007169c0 =====

void FUN_007169c0(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 007169cc  FUN_007169cc =====

undefined8 FUN_007169cc(void)

{
  return 3;
}


// ===== 007169d8  FUN_007169d8 =====

undefined8 FUN_007169d8(void)

{
  return 0;
}


// ===== 007169e4  FUN_007169e4 =====

void FUN_007169e4(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[0xc] = 0;
  param_1[0x10] = 0;
  param_1[0x14] = 0;
  param_1[0x18] = 0;
  param_1[0x1c] = 0;
  param_1[0x20] = 0;
  param_1[0x28] = 0;
  return;
}


// ===== 00716a14  FUN_00716a14 =====

void FUN_00716a14(void)

{
  return;
}


// ===== 00716a1c  FUN_00716a1c =====

void FUN_00716a1c(long param_1,undefined4 *param_2,uint param_3)

{
  undefined1 *puVar1;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_007177a8(&local_70,0);
  local_40 = (undefined1 *)((ulong)param_3 << 0x20);
  local_60 = (undefined1 *)((ulong)local_60 | 0x19);
  if (puStack_58 == (undefined1 *)0x0) {
    puVar1 = puStack_68;
    if (((ulong)puStack_68 & 1) != 0) {
      puVar1 = *(undefined1 **)((ulong)puStack_68 & 0xfffffffffffffffe);
    }
    puStack_58 = (undefined1 *)FUN_00716f14(puVar1);
  }
  if (*(char *)(param_2 + 1) == '\x01') {
    *(undefined4 *)(puStack_58 + 0x18) = *param_2;
    *(uint *)(puStack_58 + 0x10) = *(uint *)(puStack_58 + 0x10) | 1;
  }
  if (*(char *)(param_2 + 3) == '\x01') {
    *(undefined4 *)(puStack_58 + 0x1c) = param_2[2];
    *(uint *)(puStack_58 + 0x10) = *(uint *)(puStack_58 + 0x10) | 2;
  }
  if (*(char *)(param_2 + 5) == '\x01') {
    *(undefined4 *)(puStack_58 + 0x20) = param_2[4];
    *(uint *)(puStack_58 + 0x10) = *(uint *)(puStack_58 + 0x10) | 4;
  }
  if (*(char *)(param_2 + 7) == '\x01') {
    *(undefined4 *)(puStack_58 + 0x24) = param_2[6];
    *(uint *)(puStack_58 + 0x10) = *(uint *)(puStack_58 + 0x10) | 8;
  }
  FUN_00716b40(&local_70,param_1 + 8);
  FUN_007177c8(&local_70);
  return;
}


// ===== 00716b40  FUN_00716b40 =====

void FUN_00716b40(undefined8 param_1,long *param_2)

{
  undefined8 ***pppuVar1;
  ulong uVar2;
  undefined8 **local_48;
  ulong uStack_40;
  ulong local_38;
  undefined4 local_14;
  
  if (*param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../modules/audio_coding/audio_network_adaptor/debug_dump_writer.cc",0x2d,
                 "dump_file->is_open()",&DAT_001f5fa0);
  }
  local_48 = (undefined8 ***)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_006dca30(param_1,&local_48);
  uVar2 = FUN_00717d58(param_1);
  if (uVar2 >> 0x1f != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../rtc_base/numerics/safe_conversions.h",0x24,
                 "IsValueInRangeForNumericType<Dst>(value)",&DAT_001f5fa0);
  }
  local_14 = (undefined4)uVar2;
  FUN_0065a830(param_2,&local_14,4);
  uVar2 = uStack_40;
  pppuVar1 = (undefined8 ***)local_48;
  if (-1 < (long)local_38) {
    uVar2 = local_38 >> 0x38;
    pppuVar1 = &local_48;
  }
  FUN_0065a830(param_2,pppuVar1,uVar2);
  if ((long)local_38 < 0) {
    operator_delete(local_48);
  }
  return;
}


// ===== 00716c30  FUN_00716c30 =====

void FUN_00716c30(long param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined8 local_40;
  
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_007177a8(&local_70,0);
  local_40 = (undefined1 *)CONCAT44(param_3,1);
  local_60 = (undefined1 *)((ulong)local_60 | 0x1a);
  if (local_50 == (undefined1 *)0x0) {
    puVar1 = puStack_68;
    if (((ulong)puStack_68 & 1) != 0) {
      puVar1 = *(undefined1 **)((ulong)puStack_68 & 0xfffffffffffffffe);
    }
    local_50 = (undefined1 *)FUN_00716f64(puVar1);
  }
  if (*(char *)(param_2 + 1) == '\x01') {
    *(undefined4 *)(local_50 + 0x18) = *param_2;
    *(uint *)(local_50 + 0x10) = *(uint *)(local_50 + 0x10) | 1;
  }
  if (*(char *)(param_2 + 3) == '\x01') {
    *(undefined4 *)(local_50 + 0x1c) = param_2[2];
    *(uint *)(local_50 + 0x10) = *(uint *)(local_50 + 0x10) | 2;
  }
  if (*(char *)(param_2 + 5) == '\x01') {
    *(undefined4 *)(local_50 + 0x20) = param_2[4];
    *(uint *)(local_50 + 0x10) = *(uint *)(local_50 + 0x10) | 4;
  }
  if (*(char *)((long)param_2 + 0x19) == '\x01') {
    local_50[0x24] = *(undefined1 *)(param_2 + 6);
    *(uint *)(local_50 + 0x10) = *(uint *)(local_50 + 0x10) | 8;
  }
  if (*(char *)((long)param_2 + 0x1b) == '\x01') {
    local_50[0x25] = *(undefined1 *)((long)param_2 + 0x1a);
    *(uint *)(local_50 + 0x10) = *(uint *)(local_50 + 0x10) | 0x10;
  }
  if (*(char *)(param_2 + 10) == '\x01') {
    *(int *)(local_50 + 0x28) = (int)*(undefined8 *)(param_2 + 8);
    *(uint *)(local_50 + 0x10) = *(uint *)(local_50 + 0x10) | 0x20;
  }
  FUN_00716b40(&local_70,param_1 + 8);
  FUN_007177c8(&local_70);
  return;
}


// ===== 00716d98  FUN_00716d98 =====

void FUN_00716d98(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *local_48;
  undefined8 local_40;
  
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_007177a8(&local_70,0);
  local_40 = (undefined1 *)CONCAT44(param_3,2);
  local_60 = (undefined1 *)((ulong)local_60 | 0x1c);
  if (local_48 == (undefined1 *)0x0) {
    puVar1 = puStack_68;
    if (((ulong)puStack_68 & 1) != 0) {
      puVar1 = *(undefined1 **)((ulong)puStack_68 & 0xfffffffffffffffe);
    }
    local_48 = (undefined1 *)FUN_00716fb4(puVar1);
  }
  FUN_006dba3c(local_48,param_2);
  FUN_00716b40(&local_70,param_1 + 8);
  FUN_007177c8(&local_70);
  return;
}


// ===== 00716e44  FUN_00716e44 =====

undefined8 * FUN_00716e44(undefined8 param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 local_18;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  *puVar1 = &PTR_FUN_00d2a038;
  plVar2 = puVar1 + 1;
  *plVar2 = 0;
  local_18 = param_1;
  FUN_0065a6e8(plVar2,&local_18);
  FUN_0065a730(&local_18);
  if (*plVar2 != 0) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../modules/audio_coding/audio_network_adaptor/debug_dump_writer.cc",0x51,
               "dump_file_.is_open()",&DAT_001f5fa0);
}


// ===== 00716ed4  FUN_00716ed4 =====

void FUN_00716ed4(long param_1)

{
  FUN_0065a730(param_1 + 8);
  return;
}


// ===== 00716ee0  FUN_00716ee0 =====

void FUN_00716ee0(void *param_1)

{
  FUN_0065a730((long)param_1 + 8);
  operator_delete(param_1);
  return;
}


// ===== 00716f14  FUN_00716f14 =====

void * FUN_00716f14(long param_1)

{
  void *pvVar1;
  
  if (param_1 == 0) {
    pvVar1 = operator_new(0x30);
  }
  else {
    pvVar1 = (void *)FUN_006fdbf0(param_1,0x30);
  }
  FUN_00717004(pvVar1,param_1);
  return pvVar1;
}


// ===== 00716f64  FUN_00716f64 =====

void * FUN_00716f64(long param_1)

{
  void *pvVar1;
  
  if (param_1 == 0) {
    pvVar1 = operator_new(0x30);
  }
  else {
    pvVar1 = (void *)FUN_006fdbf0(param_1,0x30);
  }
  FUN_00717380(pvVar1,param_1);
  return pvVar1;
}


// ===== 00716fb4  FUN_00716fb4 =====

void * FUN_00716fb4(long param_1)

{
  void *pvVar1;
  
  if (param_1 == 0) {
    pvVar1 = operator_new(0x38);
  }
  else {
    pvVar1 = (void *)FUN_006fdbf0(param_1,0x38);
  }
  FUN_006db52c(pvVar1,param_1);
  return pvVar1;
}


// ===== 00717004  FUN_00717004 =====

void FUN_00717004(undefined8 *param_1,undefined8 param_2)

{
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_00d2a070;
  param_1[1] = param_2;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  return;
}


// ===== 00717024  FUN_00717024 =====

void FUN_00717024(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dbb00();
  return;
}


// ===== 00717038  FUN_00717038 =====

void FUN_00717038(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  operator_delete(param_1);
  return;
}


// ===== 00717070  FUN_00717070 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00717070(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0x1f) != 0) {
    if ((uVar1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_006dcb04(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
    return;
  }
  return;
}


// ===== 007170f8  FUN_007170f8 =====

undefined ** FUN_007170f8(void)

{
  return &PTR_PTR_00d2a120;
}


// ===== 00717108  FUN_00717108 =====

void FUN_00717108(long param_1)

{
  if ((*(byte *)(param_1 + 0x10) & 0x1f) != 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dcab0();
  return;
}


// ===== 00717134  FUN_00717134 =====

/* WARNING: Type propagation algorithm not settling */

undefined1 * FUN_00717134(long param_1,undefined1 *param_2,long *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  void *__src;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_2 = (undefined1 *)FUN_006d89ec(param_3,*(undefined4 *)(param_1 + 0x18),param_2);
  }
  if ((uVar1 >> 1 & 1) != 0) {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_006dcdb8(param_3,param_2);
    }
    uVar2 = *(undefined4 *)(param_1 + 0x1c);
    *param_2 = 0x15;
    *(undefined4 *)(param_2 + 1) = uVar2;
    param_2 = param_2 + 5;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    param_2 = (undefined1 *)FUN_006d8a68(param_3,*(undefined4 *)(param_1 + 0x20),param_2);
  }
  if ((uVar1 >> 3 & 1) != 0) {
    param_2 = (undefined1 *)FUN_006d9c64(param_3,*(undefined4 *)(param_1 + 0x24),param_2);
  }
  if ((uVar1 >> 4 & 1) == 0) {
    uVar5 = *(ulong *)(param_1 + 8);
  }
  else {
    param_2 = (undefined1 *)FUN_006d9ce0(param_3,*(undefined4 *)(param_1 + 0x28),param_2);
    uVar5 = *(ulong *)(param_1 + 8);
  }
  if ((uVar5 & 1) != 0) {
    uVar5 = uVar5 & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar4 < 0) {
      __src = *(void **)(uVar5 + 8);
      uVar4 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      __src = (void *)(uVar5 + 8);
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar4) {
      puVar3 = (undefined1 *)FUN_006dcef8(param_3,__src,uVar4,param_2);
      return puVar3;
    }
    memcpy(param_2,__src,uVar4 & 0xffffffff);
    param_2 = param_2 + (int)uVar4;
  }
  return param_2;
}


// ===== 0071728c  FUN_0071728c =====

/* WARNING: Type propagation algorithm not settling */

long FUN_0071728c(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  Hint_Prefetch(param_1 + 0x1c0,0,0,0);
  Hint_Prefetch(param_1 + 0x200,0,0,0);
  Hint_Prefetch(param_1 + 0x240,0,0,0);
  Hint_Prefetch(param_1 + 0x280,0,0,0);
  Hint_Prefetch(param_1 + 0x2c0,0,0,0);
  uVar1 = *(uint *)(param_1 + 0x10);
  lVar3 = 0;
  if ((uVar1 & 2) != 0) {
    lVar3 = 5;
  }
  if ((uVar1 & 0x1d) != 0) {
    if ((uVar1 & 1) != 0) {
      lVar3 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + lVar3;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      lVar3 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x20)) * -9 + 0x2c0U >> 6) + lVar3;
    }
    if ((uVar1 >> 3 & 1) != 0) {
      lVar3 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x24)) * -9 + 0x2c0U >> 6) + lVar3;
    }
    if ((uVar1 >> 4 & 1) != 0) {
      lVar3 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x28)) * -9 + 0x2c0U >> 6) + lVar3;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    iVar2 = (int)lVar3;
  }
  else {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar5 + 0x10);
    }
    lVar3 = lVar4 + lVar3;
    iVar2 = (int)lVar3;
  }
  if ((iVar2 != 0) || (*(int *)(param_1 + 0x14) != 0)) {
    *(int *)(param_1 + 0x14) = (int)lVar3;
  }
  return lVar3;
}


// ===== 00717380  FUN_00717380 =====

void FUN_00717380(undefined8 *param_1,undefined8 param_2)

{
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_00d2a0b0;
  param_1[1] = param_2;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  return;
}


// ===== 007173a0  FUN_007173a0 =====

void FUN_007173a0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dbb00();
  return;
}


// ===== 007173b4  FUN_007173b4 =====

void FUN_007173b4(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  operator_delete(param_1);
  return;
}


// ===== 007173ec  FUN_007173ec =====

/* WARNING: Type propagation algorithm not settling */

void FUN_007173ec(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_2 + 0x24);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x25) = *(undefined1 *)(param_2 + 0x25);
    }
    if ((uVar1 >> 5 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_006dcb04(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
    return;
  }
  return;
}


// ===== 00717484  FUN_00717484 =====

undefined ** FUN_00717484(void)

{
  return &PTR_PTR_00d2a198;
}


// ===== 00717494  FUN_00717494 =====

void FUN_00717494(long param_1)

{
  if ((*(byte *)(param_1 + 0x10) & 0x3f) != 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dcab0();
  return;
}


// ===== 007174c0  FUN_007174c0 =====

/* WARNING: Type propagation algorithm not settling */

byte * FUN_007174c0(long param_1,byte *param_2,long *param_3)

{
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  void *__src;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  byte *pbVar8;
  
  uVar6 = *(uint *)(param_1 + 0x10);
  if ((uVar6 & 1) != 0) {
    param_2 = (byte *)FUN_006d89ec(param_3,*(undefined4 *)(param_1 + 0x18),param_2);
  }
  if ((uVar6 >> 1 & 1) != 0) {
    param_2 = (byte *)FUN_006da6b8(param_3,*(undefined4 *)(param_1 + 0x1c),param_2);
  }
  if ((uVar6 >> 2 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar1 = *(undefined4 *)(param_1 + 0x20);
    *param_2 = 0x1d;
    *(undefined4 *)(param_2 + 1) = uVar1;
    param_2 = param_2 + 5;
  }
  if ((uVar6 >> 3 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    bVar2 = *(byte *)(param_1 + 0x24);
    *param_2 = 0x20;
    param_2[1] = bVar2;
    param_2 = param_2 + 2;
  }
  if ((uVar6 >> 4 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    bVar2 = *(byte *)(param_1 + 0x25);
    *param_2 = 0x28;
    param_2[1] = bVar2;
    param_2 = param_2 + 2;
  }
  if ((uVar6 >> 5 & 1) == 0) {
    uVar7 = *(ulong *)(param_1 + 8);
  }
  else {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar6 = *(uint *)(param_1 + 0x28);
    pbVar8 = param_2 + 1;
    *param_2 = 0x30;
    pbVar4 = pbVar8;
    if (0x7f < uVar6) {
      do {
        uVar3 = uVar6 >> 0xe;
        bVar2 = (byte)uVar6;
        uVar6 = uVar6 >> 7;
        pbVar8 = pbVar4 + 1;
        *pbVar4 = bVar2 | 0x80;
        pbVar4 = pbVar8;
      } while (uVar3 != 0);
    }
    param_2 = pbVar8 + 1;
    *pbVar8 = (byte)uVar6;
    uVar7 = *(ulong *)(param_1 + 8);
  }
  if ((uVar7 & 1) != 0) {
    uVar7 = uVar7 & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar7 + 0x1f);
    if ((long)uVar5 < 0) {
      __src = *(void **)(uVar7 + 8);
      uVar5 = (ulong)*(uint *)(uVar7 + 0x10);
    }
    else {
      __src = (void *)(uVar7 + 8);
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar5) {
      pbVar4 = (byte *)FUN_006dcef8(param_3,__src,uVar5,param_2);
      return pbVar4;
    }
    memcpy(param_2,__src,uVar5 & 0xffffffff);
    param_2 = param_2 + (int)uVar5;
  }
  return param_2;
}


// ===== 007176b8  FUN_007176b8 =====

long FUN_007176b8(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  Hint_Prefetch(param_1 + 0x1c0,0,0,0);
  Hint_Prefetch(param_1 + 0x200,0,0,0);
  Hint_Prefetch(param_1 + 0x240,0,0,0);
  Hint_Prefetch(param_1 + 0x280,0,0,0);
  Hint_Prefetch(param_1 + 0x2c0,0,0,0);
  uVar1 = *(uint *)(param_1 + 0x10);
  lVar3 = 0;
  if ((uVar1 & 4) != 0) {
    lVar3 = 5;
  }
  uVar6 = NEON_cnt((ulong)(uVar1 & 0x18),1);
  lVar3 = lVar3 + (ulong)(uint)((int)uVar6 << 1);
  if ((uVar1 & 0x23) != 0) {
    if ((uVar1 & 1) != 0) {
      lVar3 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + lVar3;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar3 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x1c)) * -9 + 0x2c0U >> 6) + lVar3;
    }
    if ((uVar1 >> 5 & 1) != 0) {
      lVar3 = lVar3 + (ulong)((int)LZCOUNT(*(undefined4 *)(param_1 + 0x28)) * -9 + 0x1a0U >> 6);
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    iVar2 = (int)lVar3;
  }
  else {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar5 + 0x10);
    }
    lVar3 = lVar4 + lVar3;
    iVar2 = (int)lVar3;
  }
  if ((iVar2 != 0) || (*(int *)(param_1 + 0x14) != 0)) {
    *(int *)(param_1 + 0x14) = (int)lVar3;
  }
  return lVar3;
}


// ===== 007177a8  FUN_007177a8 =====

void FUN_007177a8(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_00d2a0f0;
  param_1[1] = param_2;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  return;
}


// ===== 007177c8  FUN_007177c8 =====

void FUN_007177c8(void)

{
  FUN_007177d0();
  return;
}


// ===== 007177d0  FUN_007177d0 =====

void FUN_007177d0(long param_1)

{
  void *pvVar1;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  pvVar1 = *(void **)(param_1 + 0x18);
  if (pvVar1 != (void *)0x0) {
    if ((*(byte *)((long)pvVar1 + 8) & 1) != 0) {
      FUN_006dbb00();
    }
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(param_1 + 0x20);
  if (pvVar1 != (void *)0x0) {
    if ((*(byte *)((long)pvVar1 + 8) & 1) != 0) {
      FUN_006dbb00();
    }
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(param_1 + 0x28);
  if (pvVar1 != (void *)0x0) {
    FUN_006db5dc(pvVar1);
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 00717870  FUN_00717870 =====

void FUN_00717870(void *param_1)

{
  FUN_007177d0();
  operator_delete(param_1);
  return;
}


// ===== 007178a0  FUN_007178a0 =====

bool FUN_007178a0(long param_1)

{
  return ((*(uint *)(param_1 + 0x10) ^ 0xffffffff) & 0x18) == 0;
}


// ===== 007178b8  FUN_007178b8 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_007178b8(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  uVar6 = *(ulong *)(param_1 + 8);
  if ((uVar6 & 1) != 0) {
    uVar6 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0x1f) != 0) {
    if ((uVar1 & 1) != 0) {
      lVar5 = *(long *)(param_1 + 0x18);
      lVar4 = *(long *)(param_2 + 0x18);
      if (lVar5 == 0) {
        uVar3 = FUN_00717ed0(uVar6);
        *(undefined8 *)(param_1 + 0x18) = uVar3;
      }
      else {
        uVar2 = *(uint *)(lVar4 + 0x10);
        if ((uVar2 & 0x1f) != 0) {
          if ((uVar2 & 1) != 0) {
            *(undefined4 *)(lVar5 + 0x18) = *(undefined4 *)(lVar4 + 0x18);
          }
          if ((uVar2 >> 1 & 1) != 0) {
            *(undefined4 *)(lVar5 + 0x1c) = *(undefined4 *)(lVar4 + 0x1c);
          }
          if ((uVar2 >> 2 & 1) != 0) {
            *(undefined4 *)(lVar5 + 0x20) = *(undefined4 *)(lVar4 + 0x20);
          }
          if ((uVar2 >> 3 & 1) != 0) {
            *(undefined4 *)(lVar5 + 0x24) = *(undefined4 *)(lVar4 + 0x24);
          }
          if ((uVar2 >> 4 & 1) != 0) {
            *(undefined4 *)(lVar5 + 0x28) = *(undefined4 *)(lVar4 + 0x28);
          }
        }
        *(uint *)(lVar5 + 0x10) = *(uint *)(lVar5 + 0x10) | uVar2;
        if ((*(ulong *)(lVar4 + 8) & 1) != 0) {
          FUN_006dcb04(lVar5 + 8,(*(ulong *)(lVar4 + 8) & 0xfffffffffffffffe) + 8);
        }
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar5 = *(long *)(param_1 + 0x20);
      lVar4 = *(long *)(param_2 + 0x20);
      if (lVar5 == 0) {
        uVar3 = FUN_00717f5c(uVar6);
        *(undefined8 *)(param_1 + 0x20) = uVar3;
      }
      else {
        uVar2 = *(uint *)(lVar4 + 0x10);
        if ((uVar2 & 0x3f) != 0) {
          if ((uVar2 & 1) != 0) {
            *(undefined4 *)(lVar5 + 0x18) = *(undefined4 *)(lVar4 + 0x18);
          }
          if ((uVar2 >> 1 & 1) != 0) {
            *(undefined4 *)(lVar5 + 0x1c) = *(undefined4 *)(lVar4 + 0x1c);
          }
          if ((uVar2 >> 2 & 1) != 0) {
            *(undefined4 *)(lVar5 + 0x20) = *(undefined4 *)(lVar4 + 0x20);
          }
          if ((uVar2 >> 3 & 1) != 0) {
            *(undefined1 *)(lVar5 + 0x24) = *(undefined1 *)(lVar4 + 0x24);
          }
          if ((uVar2 >> 4 & 1) != 0) {
            *(undefined1 *)(lVar5 + 0x25) = *(undefined1 *)(lVar4 + 0x25);
          }
          if ((uVar2 >> 5 & 1) != 0) {
            *(undefined4 *)(lVar5 + 0x28) = *(undefined4 *)(lVar4 + 0x28);
          }
        }
        *(uint *)(lVar5 + 0x10) = *(uint *)(lVar5 + 0x10) | uVar2;
        if ((*(ulong *)(lVar4 + 8) & 1) != 0) {
          FUN_006dcb04(lVar5 + 8,(*(ulong *)(lVar4 + 8) & 0xfffffffffffffffe) + 8);
        }
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        uVar3 = FUN_00717fe8(uVar6,*(undefined8 *)(param_2 + 0x28));
        *(undefined8 *)(param_1 + 0x28) = uVar3;
      }
      else {
        FUN_006db670();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  FUN_006dcb04((ulong *)(param_1 + 8),(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  return;
}


// ===== 00717aec  FUN_00717aec =====

undefined ** FUN_00717aec(void)

{
  return &PTR_PTR_00d2a218;
}


// ===== 00717afc  FUN_00717afc =====

void FUN_00717afc(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_00717108(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_00717494(*(undefined8 *)(param_1 + 0x20));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_006db738(*(undefined8 *)(param_1 + 0x28));
    }
  }
  if ((uVar1 & 0x18) != 0) {
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_006dcab0((byte *)(param_1 + 8));
    return;
  }
  return;
}


// ===== 00717b88  FUN_00717b88 =====

/* WARNING: Type propagation algorithm not settling */

byte * FUN_00717b88(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte *pbVar4;
  void *__src;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 >> 3 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar2 = *(uint *)(param_1 + 0x30);
    uVar5 = (ulong)(int)uVar2;
    pbVar8 = param_2 + 1;
    *param_2 = 8;
    uVar6 = uVar5;
    pbVar4 = pbVar8;
    if (0x7f < uVar2) {
      do {
        uVar5 = uVar6 >> 7;
        uVar7 = uVar6 >> 0xe;
        pbVar8 = pbVar4 + 1;
        *pbVar4 = (byte)uVar6 | 0x80;
        uVar6 = uVar5;
        pbVar4 = pbVar8;
      } while (uVar7 != 0);
    }
    param_2 = pbVar8 + 1;
    *pbVar8 = (byte)uVar5;
  }
  if ((uVar1 >> 4 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar2 = *(uint *)(param_1 + 0x34);
    uVar6 = (ulong)uVar2;
    pbVar8 = param_2 + 1;
    *param_2 = 0x10;
    pbVar4 = pbVar8;
    if (0x7f < uVar2) {
      do {
        uVar5 = uVar6 >> 0xe;
        bVar3 = (byte)uVar6;
        uVar6 = uVar6 >> 7;
        pbVar8 = pbVar4 + 1;
        *pbVar4 = bVar3 | 0x80;
        pbVar4 = pbVar8;
      } while (uVar5 != 0);
    }
    param_2 = pbVar8 + 1;
    *pbVar8 = (byte)uVar6;
  }
  if ((uVar1 & 1) != 0) {
    param_2 = (byte *)FUN_006fc2f0(3,*(long *)(param_1 + 0x18),
                                   *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x14),param_2,param_3
                                  );
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_2 = (byte *)FUN_006fc2f0(4,*(long *)(param_1 + 0x20),
                                   *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x14),param_2,param_3
                                  );
  }
  if ((uVar1 >> 2 & 1) == 0) {
    uVar6 = *(ulong *)(param_1 + 8);
  }
  else {
    param_2 = (byte *)FUN_006fc2f0(5,*(long *)(param_1 + 0x28),
                                   *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x14),param_2,param_3
                                  );
    uVar6 = *(ulong *)(param_1 + 8);
  }
  if ((uVar6 & 1) != 0) {
    uVar6 = uVar6 & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uVar5 < 0) {
      __src = *(void **)(uVar6 + 8);
      uVar5 = (ulong)*(uint *)(uVar6 + 0x10);
    }
    else {
      __src = (void *)(uVar6 + 8);
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar5) {
      pbVar4 = (byte *)FUN_006dcef8(param_3,__src,uVar5,param_2);
      return pbVar4;
    }
    memcpy(param_2,__src,uVar5 & 0xffffffff);
    param_2 = param_2 + (int)uVar5;
  }
  return param_2;
}


// ===== 00717d58  FUN_00717d58 =====

long FUN_00717d58(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  
  Hint_Prefetch(param_1 + 0x1c0,0,0,0);
  Hint_Prefetch(param_1 + 0x200,0,0,0);
  Hint_Prefetch(param_1 + 0x240,0,0,0);
  Hint_Prefetch(param_1 + 0x280,0,0,0);
  Hint_Prefetch(param_1 + 0x2c0,0,0,0);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) == 0) {
    lVar5 = 0;
  }
  else {
    if ((uVar1 & 1) == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = FUN_0071728c(*(undefined8 *)(param_1 + 0x18));
      lVar5 = lVar5 + (ulong)((int)LZCOUNT((int)lVar5) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar2 = FUN_007176b8(*(undefined8 *)(param_1 + 0x20));
      lVar5 = lVar5 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      lVar2 = FUN_006db930(*(undefined8 *)(param_1 + 0x28));
      lVar5 = lVar5 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 1;
    }
  }
  if ((uVar1 & 0x18) != 0) {
    if ((uVar1 >> 3 & 1) != 0) {
      lVar5 = lVar5 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x30)) * -9 + 0x280U >> 6) + 1;
    }
    if ((uVar1 >> 4 & 1) != 0) {
      lVar5 = lVar5 + (ulong)((int)LZCOUNT(*(undefined4 *)(param_1 + 0x34)) * -9 + 0x1a0U >> 6);
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    iVar4 = (int)lVar5;
  }
  else {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar5 = lVar2 + lVar5;
    iVar4 = (int)lVar5;
  }
  if ((iVar4 != 0) || (*(int *)(param_1 + 0x14) != 0)) {
    *(int *)(param_1 + 0x14) = (int)lVar5;
  }
  return lVar5;
}


// ===== 00717ed0  FUN_00717ed0 =====

undefined8 * FUN_00717ed0(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  Hint_Prefetch(param_2 + 0x40,0,0,0);
  if (param_1 == 0) {
    puVar1 = (undefined8 *)operator_new(0x30);
  }
  else {
    puVar1 = (undefined8 *)FUN_006fdbf0(param_1,0x30);
  }
  *puVar1 = &PTR_FUN_00d2a070;
  puVar1[1] = param_1;
  uVar2 = *(undefined8 *)(param_2 + 0x1c);
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)((long)puVar1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
  *(undefined8 *)((long)puVar1 + 0x1c) = uVar2;
  puVar1[3] = uVar4;
  puVar1[2] = uVar3;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_006dcb04(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  return puVar1;
}


// ===== 00717f5c  FUN_00717f5c =====

undefined8 * FUN_00717f5c(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  Hint_Prefetch(param_2 + 0x40,0,0,0);
  if (param_1 == 0) {
    puVar1 = (undefined8 *)operator_new(0x30);
  }
  else {
    puVar1 = (undefined8 *)FUN_006fdbf0(param_1,0x30);
  }
  *puVar1 = &PTR_FUN_00d2a0b0;
  puVar1[1] = param_1;
  uVar2 = *(undefined8 *)(param_2 + 0x1c);
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)((long)puVar1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
  *(undefined8 *)((long)puVar1 + 0x1c) = uVar2;
  puVar1[3] = uVar4;
  puVar1[2] = uVar3;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_006dcb04(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  return puVar1;
}


// ===== 00717fe8  FUN_00717fe8 =====

void * FUN_00717fe8(long param_1,long param_2)

{
  void *pvVar1;
  
  Hint_Prefetch(param_2 + 0x40,0,0,0);
  if (param_1 == 0) {
    pvVar1 = operator_new(0x38);
  }
  else {
    pvVar1 = (void *)FUN_006fdbf0(param_1,0x38);
  }
  FUN_006db54c(pvVar1,param_1,param_2);
  return pvVar1;
}


// ===== 0071804c  FUN_0071804c =====

undefined8 FUN_0071804c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  
  uVar1 = FUN_007754f0();
  if ((uVar1 >> 2 & 1) == 0) {
    FUN_007b0720(param_1,param_2,param_3);
  }
  else {
    FUN_007a7dc0(param_1,param_2,param_3);
  }
  return 1;
}


// ===== 007180b0  FUN_007180b0 =====

undefined8 FUN_007180b0(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_007754f0();
  if ((uVar1 >> 2 & 1) == 0) {
    iVar2 = FUN_007b0ef0(param_1,param_2,param_3);
  }
  else {
    iVar2 = FUN_007a7b40(param_1,param_2,param_3);
  }
  if (iVar2 < 0) {
    uVar3 = 2;
  }
  else {
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar3 = 1;
  }
  return uVar3;
}


// ===== 00718128  FUN_00718128 =====

void FUN_00718128(ulong *param_1,ulong *param_2,ulong param_3,undefined8 param_4,ulong *param_5,
                 code *param_6)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  byte *pbVar10;
  long lVar11;
  ulong uVar12;
  byte *pbVar13;
  ulong *puVar14;
  byte *pbVar15;
  ulong *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  byte *pbVar19;
  undefined1 **ppuVar20;
  ulong uVar21;
  undefined8 uVar22;
  ulong uVar23;
  undefined1 *puVar24;
  undefined8 uVar25;
  undefined1 *puVar26;
  undefined8 uVar27;
  undefined1 *puVar28;
  undefined1 *puVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  undefined1 *local_80 [4];
  
  lVar3 = tpidr_el0;
  local_80[3] = *(undefined1 **)(lVar3 + 0x28);
  if (param_3 == 0) goto LAB_00718444;
  local_80[1] = &DAT_aaaaaaaaaaaaaaaa;
  local_80[0] = &DAT_aaaaaaaaaaaaaaaa;
  if ((param_1 < param_2) || ((ulong *)0x1f < param_1 && param_2 <= param_1 + -4)) {
    puVar6 = param_5;
    puVar14 = param_5;
    if (0xf < param_3) {
      do {
        puVar6 = param_1;
        (*param_6)(puVar6,param_2,param_4);
        param_3 = param_3 - 0x10;
        param_1 = puVar6 + 2;
        *param_2 = *puVar14 ^ *param_2;
        param_2[1] = puVar14[1] ^ param_2[1];
        param_2 = param_2 + 2;
        puVar14 = puVar6;
      } while (0xf < param_3);
    }
    uVar8 = *puVar6;
    param_5[1] = puVar6[1];
    *param_5 = uVar8;
joined_r0x00718260:
    if (param_3 == 0) goto LAB_00718444;
  }
  else if (0xf < param_3) {
    do {
      (*param_6)(param_1,local_80,param_4);
      param_3 = param_3 - 0x10;
      uVar8 = *param_1;
      *param_2 = *param_5 ^ (ulong)local_80[0];
      *param_5 = uVar8;
      uVar8 = param_1[1];
      param_1 = param_1 + 2;
      param_2[1] = param_5[1] ^ (ulong)local_80[1];
      param_2 = param_2 + 2;
      param_5[1] = uVar8;
    } while (0xf < param_3);
    goto joined_r0x00718260;
  }
  (*param_6)(param_1,local_80,param_4);
  uVar8 = 0x11 - param_3;
  if (param_3 < 0x20) {
    uVar9 = 0;
LAB_0071828c:
    lVar11 = param_3 - uVar9;
    lVar7 = ~uVar9 + param_3 + uVar8;
    pbVar10 = (byte *)((long)local_80 + uVar9);
    pbVar13 = (byte *)((long)param_2 + uVar9);
    pbVar15 = (byte *)((long)param_5 + uVar9);
    pbVar19 = (byte *)((long)param_1 + uVar9);
    do {
      bVar2 = *pbVar19;
      lVar11 = lVar11 + -1;
      *pbVar13 = *pbVar15 ^ *pbVar10;
      *pbVar15 = bVar2;
      pbVar10 = pbVar10 + 1;
      pbVar13 = pbVar13 + 1;
      pbVar15 = pbVar15 + 1;
      pbVar19 = pbVar19 + 1;
    } while (lVar11 != 0);
  }
  else {
    puVar6 = (ulong *)((long)param_2 + param_3);
    puVar14 = (ulong *)((long)param_5 + param_3);
    uVar9 = 0;
    if ((((param_5 < puVar6 && param_2 < puVar14) ||
         (param_2 < (ulong *)((long)param_1 + param_3) && param_1 < puVar6)) ||
        (param_2 < (ulong *)((long)local_80 + param_3) && local_80 < puVar6)) ||
       ((param_5 < (ulong *)((long)param_1 + param_3) && param_1 < puVar14 ||
        (param_5 < (ulong *)((long)local_80 + param_3) && local_80 < puVar14)))) goto LAB_0071828c;
    uVar9 = param_3 & 0xffffffffffffffe0;
    puVar6 = param_2 + 2;
    puVar14 = param_1 + 2;
    uVar8 = uVar8 | uVar9;
    puVar16 = param_5 + 2;
    ppuVar20 = local_80 + 2;
    uVar12 = param_3 & 0xffffffffffffffe0;
    do {
      uVar23 = puVar16[-1];
      uVar21 = puVar16[-2];
      uVar31 = puVar16[1];
      uVar30 = *puVar16;
      uVar12 = uVar12 - 0x20;
      puVar26 = ppuVar20[-1];
      puVar24 = ppuVar20[-2];
      puVar29 = ppuVar20[1];
      puVar28 = *ppuVar20;
      ppuVar20 = ppuVar20 + 4;
      puVar5 = puVar14 + -1;
      uVar32 = puVar14[-2];
      uVar34 = puVar14[1];
      uVar33 = *puVar14;
      puVar14 = puVar14 + 4;
      puVar16[-1] = *puVar5;
      puVar16[-2] = uVar32;
      puVar16[1] = uVar34;
      *puVar16 = uVar33;
      puVar16 = puVar16 + 4;
      puVar6[-1] = CONCAT17((byte)(uVar23 >> 0x38) ^ (byte)((ulong)puVar26 >> 0x38),
                            CONCAT16((byte)(uVar23 >> 0x30) ^ (byte)((ulong)puVar26 >> 0x30),
                                     CONCAT15((byte)(uVar23 >> 0x28) ^
                                              (byte)((ulong)puVar26 >> 0x28),
                                              CONCAT14((byte)(uVar23 >> 0x20) ^
                                                       (byte)((ulong)puVar26 >> 0x20),
                                                       CONCAT13((byte)(uVar23 >> 0x18) ^
                                                                (byte)((ulong)puVar26 >> 0x18),
                                                                CONCAT12((byte)(uVar23 >> 0x10) ^
                                                                         (byte)((ulong)puVar26 >>
                                                                               0x10),
                                                                         CONCAT11((byte)(uVar23 >> 8
                                                                                        ) ^ (byte)((
                                                  ulong)puVar26 >> 8),(byte)uVar23 ^ (byte)puVar26))
                                                  )))));
      puVar6[-2] = CONCAT17((byte)(uVar21 >> 0x38) ^ (byte)((ulong)puVar24 >> 0x38),
                            CONCAT16((byte)(uVar21 >> 0x30) ^ (byte)((ulong)puVar24 >> 0x30),
                                     CONCAT15((byte)(uVar21 >> 0x28) ^
                                              (byte)((ulong)puVar24 >> 0x28),
                                              CONCAT14((byte)(uVar21 >> 0x20) ^
                                                       (byte)((ulong)puVar24 >> 0x20),
                                                       CONCAT13((byte)(uVar21 >> 0x18) ^
                                                                (byte)((ulong)puVar24 >> 0x18),
                                                                CONCAT12((byte)(uVar21 >> 0x10) ^
                                                                         (byte)((ulong)puVar24 >>
                                                                               0x10),
                                                                         CONCAT11((byte)(uVar21 >> 8
                                                                                        ) ^ (byte)((
                                                  ulong)puVar24 >> 8),(byte)uVar21 ^ (byte)puVar24))
                                                  )))));
      puVar6[1] = CONCAT17((byte)(uVar31 >> 0x38) ^ (byte)((ulong)puVar29 >> 0x38),
                           CONCAT16((byte)(uVar31 >> 0x30) ^ (byte)((ulong)puVar29 >> 0x30),
                                    CONCAT15((byte)(uVar31 >> 0x28) ^ (byte)((ulong)puVar29 >> 0x28)
                                             ,CONCAT14((byte)(uVar31 >> 0x20) ^
                                                       (byte)((ulong)puVar29 >> 0x20),
                                                       CONCAT13((byte)(uVar31 >> 0x18) ^
                                                                (byte)((ulong)puVar29 >> 0x18),
                                                                CONCAT12((byte)(uVar31 >> 0x10) ^
                                                                         (byte)((ulong)puVar29 >>
                                                                               0x10),
                                                                         CONCAT11((byte)(uVar31 >> 8
                                                                                        ) ^ (byte)((
                                                  ulong)puVar29 >> 8),(byte)uVar31 ^ (byte)puVar29))
                                                  )))));
      *puVar6 = CONCAT17((byte)(uVar30 >> 0x38) ^ (byte)((ulong)puVar28 >> 0x38),
                         CONCAT16((byte)(uVar30 >> 0x30) ^ (byte)((ulong)puVar28 >> 0x30),
                                  CONCAT15((byte)(uVar30 >> 0x28) ^ (byte)((ulong)puVar28 >> 0x28),
                                           CONCAT14((byte)(uVar30 >> 0x20) ^
                                                    (byte)((ulong)puVar28 >> 0x20),
                                                    CONCAT13((byte)(uVar30 >> 0x18) ^
                                                             (byte)((ulong)puVar28 >> 0x18),
                                                             CONCAT12((byte)(uVar30 >> 0x10) ^
                                                                      (byte)((ulong)puVar28 >> 0x10)
                                                                      ,CONCAT11((byte)(uVar30 >> 8)
                                                                                ^ (byte)((ulong)
                                                  puVar28 >> 8),(byte)uVar30 ^ (byte)puVar28)))))));
      puVar6 = puVar6 + 4;
    } while (uVar12 != 0);
    if (param_3 != uVar9) goto LAB_0071828c;
    lVar7 = uVar8 - 1;
  }
  uVar8 = 0x10 - param_3;
  if ((7 < uVar8) && (0x1f < (ulong)((long)param_5 - (long)param_1))) {
    if (uVar8 < 0x20) {
      uVar12 = 0;
    }
    else {
      uVar12 = uVar8 & 0xffffffffffffffe0;
      puVar17 = (undefined8 *)((long)param_5 + param_3 + 0x10);
      puVar18 = (undefined8 *)((long)param_1 + param_3 + 0x10);
      uVar9 = uVar8 & 0xffffffffffffffe0;
      do {
        puVar4 = puVar18 + -1;
        uVar22 = puVar18[-2];
        uVar27 = puVar18[1];
        uVar25 = *puVar18;
        uVar9 = uVar9 - 0x20;
        puVar18 = puVar18 + 4;
        puVar17[-1] = *puVar4;
        puVar17[-2] = uVar22;
        puVar17[1] = uVar27;
        *puVar17 = uVar25;
        puVar17 = puVar17 + 4;
      } while (uVar9 != 0);
      if (uVar8 == uVar12) goto LAB_00718444;
      if ((uVar8 & 0x18) == 0) {
        param_3 = param_3 + uVar12;
        goto LAB_00718428;
      }
    }
    uVar9 = uVar8 & 0xfffffffffffffff8;
    lVar1 = param_3 + uVar12;
    param_3 = param_3 + uVar9;
    lVar11 = uVar12 - uVar9;
    puVar18 = (undefined8 *)((long)param_5 + lVar1);
    puVar17 = (undefined8 *)((long)param_1 + lVar1);
    do {
      lVar11 = lVar11 + 8;
      *puVar18 = *puVar17;
      puVar18 = puVar18 + 1;
      puVar17 = puVar17 + 1;
    } while (lVar11 != 0);
    if (uVar8 == uVar9) goto LAB_00718444;
  }
LAB_00718428:
  lVar7 = lVar7 - param_3;
  puVar24 = (undefined1 *)((long)param_5 + param_3);
  puVar26 = (undefined1 *)((long)param_1 + param_3);
  do {
    lVar7 = lVar7 + -1;
    *puVar24 = *puVar26;
    puVar24 = puVar24 + 1;
    puVar26 = puVar26 + 1;
  } while (lVar7 != 0);
LAB_00718444:
  if ((undefined1 *)*(long *)(lVar3 + 0x28) != local_80[3]) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00718484  FUN_00718484 =====

void FUN_00718484(byte *param_1,byte *param_2,ulong param_3,undefined8 param_4,char *param_5,
                 undefined8 *param_6,uint *param_7,code *param_8)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  bool bVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  
  uVar12 = *param_7;
  uVar13 = param_3;
  if ((uVar12 != 0) && (pbVar9 = param_2, pbVar10 = param_1, param_3 != 0)) {
    do {
      param_1 = pbVar10 + 1;
      uVar7 = (ulong)uVar12;
      uVar4 = uVar12 ^ 0xffffffff;
      uVar13 = param_3 - 1;
      uVar12 = uVar12 + 1 & 0xf;
      param_2 = pbVar9 + 1;
      *pbVar9 = *(byte *)((long)param_6 + uVar7) ^ *pbVar10;
      if ((uVar4 & 0xf) == 0) break;
      bVar6 = param_3 != 1;
      param_3 = uVar13;
      pbVar9 = param_2;
      pbVar10 = param_1;
    } while (bVar6);
  }
  uVar4 = (*(uint *)(param_5 + 0xc) & 0xff00ff00) >> 8 | (*(uint *)(param_5 + 0xc) & 0xff00ff) << 8;
  uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
  for (; 0xf < uVar13; uVar13 = uVar13 + lVar11 * -0x10) {
    uVar7 = uVar13 >> 4;
    if (0xfffffff < uVar7) {
      uVar7 = 0x10000000;
    }
    uVar1 = uVar4 + (int)uVar7;
    uVar8 = (ulong)uVar1;
    uVar5 = uVar8;
    if (uVar7 <= uVar8) {
      uVar5 = 0;
    }
    uVar4 = 0;
    if (uVar7 <= uVar8) {
      uVar4 = uVar1;
    }
    lVar11 = uVar7 - uVar5;
    (*param_8)(param_1,param_2,lVar11,param_4,param_5);
    uVar1 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
    *(uint *)(param_5 + 0xc) = uVar1 >> 0x10 | uVar1 << 0x10;
    if (uVar4 == 0) {
      uVar1 = (uint)(byte)param_5[10] + ((byte)param_5[0xb] + 1 >> 8);
      param_5[0xb] = (char)((byte)param_5[0xb] + 1);
      uVar2 = (uint)(byte)param_5[9] + (uVar1 >> 8);
      param_5[10] = (char)uVar1;
      uVar1 = (uint)(byte)param_5[8] + (uVar2 >> 8);
      param_5[9] = (char)uVar2;
      uVar2 = (uint)(byte)param_5[7] + (uVar1 >> 8);
      param_5[8] = (char)uVar1;
      uVar1 = (uint)(byte)param_5[6] + (uVar2 >> 8);
      param_5[7] = (char)uVar2;
      uVar2 = (uint)(byte)param_5[5] + (uVar1 >> 8);
      param_5[6] = (char)uVar1;
      uVar1 = (uint)(byte)param_5[4] + (uVar2 >> 8);
      param_5[5] = (char)uVar2;
      uVar2 = (uint)(byte)param_5[3] + (uVar1 >> 8);
      param_5[4] = (char)uVar1;
      uVar1 = (uint)(byte)param_5[2] + (uVar2 >> 8);
      param_5[3] = (char)uVar2;
      iVar3 = (uint)(byte)param_5[1] + (uVar1 >> 8);
      param_5[2] = (char)uVar1;
      param_5[1] = (char)iVar3;
      *param_5 = *param_5 + (char)((uint)iVar3 >> 8);
    }
    param_2 = param_2 + lVar11 * 0x10;
    param_1 = param_1 + lVar11 * 0x10;
  }
  if (uVar13 != 0) {
    *param_6 = 0;
    param_6[1] = 0;
    (*param_8)(param_6,param_6,1,param_4,param_5);
    uVar1 = (uVar4 + 1 & 0xff00ff00) >> 8 | (uVar4 + 1 & 0xff00ff) << 8;
    *(uint *)(param_5 + 0xc) = uVar1 >> 0x10 | uVar1 << 0x10;
    if (uVar4 == 0xffffffff) {
      uVar4 = (uint)(byte)param_5[10] + ((byte)param_5[0xb] + 1 >> 8);
      param_5[0xb] = (char)((byte)param_5[0xb] + 1);
      uVar1 = (uint)(byte)param_5[9] + (uVar4 >> 8);
      param_5[10] = (char)uVar4;
      uVar4 = (uint)(byte)param_5[8] + (uVar1 >> 8);
      param_5[9] = (char)uVar1;
      uVar1 = (uint)(byte)param_5[7] + (uVar4 >> 8);
      param_5[8] = (char)uVar4;
      uVar4 = (uint)(byte)param_5[6] + (uVar1 >> 8);
      param_5[7] = (char)uVar1;
      uVar1 = (uint)(byte)param_5[5] + (uVar4 >> 8);
      param_5[6] = (char)uVar4;
      uVar4 = (uint)(byte)param_5[4] + (uVar1 >> 8);
      param_5[5] = (char)uVar1;
      uVar1 = (uint)(byte)param_5[3] + (uVar4 >> 8);
      param_5[4] = (char)uVar4;
      uVar4 = (uint)(byte)param_5[2] + (uVar1 >> 8);
      param_5[3] = (char)uVar1;
      iVar3 = (uint)(byte)param_5[1] + (uVar4 >> 8);
      param_5[2] = (char)uVar4;
      param_5[1] = (char)iVar3;
      *param_5 = *param_5 + (char)((uint)iVar3 >> 8);
    }
    do {
      uVar13 = uVar13 - 1;
      param_2[uVar12] = *(byte *)((long)param_6 + (ulong)uVar12) ^ param_1[uVar12];
      uVar12 = uVar12 + 1;
    } while (uVar13 != 0);
  }
  *param_7 = uVar12;
  return;
}


// ===== 0071872c  FUN_0071872c =====

void FUN_0071872c(void *param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auVar6 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  memset(param_1,0,0x220);
  uVar2 = FUN_007754f0();
  if ((uVar2 >> 2 & 1) == 0) {
    FUN_007b0ef0(param_2);
    puVar4 = PTR_FUN_00d52678;
    puVar5 = PTR_FUN_00d52698;
  }
  else {
    FUN_007a7b40(param_2,param_3 << 3,(long)param_1 + 0x110);
    puVar4 = PTR_FUN_00d52680;
    puVar5 = PTR_FUN_00d526a0;
  }
  if ((undefined8 *)((long)param_1 + 0x210) != (undefined8 *)0x0) {
    *(undefined8 *)((long)param_1 + 0x210) = puVar4;
  }
  *(undefined **)((long)param_1 + 0x208) = puVar5;
  local_60 = 0;
  uStack_58 = 0;
  (**(code **)((long)param_1 + 0x210))(&local_60,&local_60,(long)param_1 + 0x110);
  auVar6._8_8_ = uStack_58;
  auVar6._0_8_ = local_60;
  auVar6 = NEON_rev64(auVar6,1);
  uStack_68 = auVar6._8_8_;
  local_70 = auVar6._0_8_;
  if ((uVar2 >> 5 & 1) == 0) {
    FUN_007ac3f0();
    puVar4 = PTR_FUN_00d526a8;
    puVar5 = PTR_FUN_00d526b0;
  }
  else {
    FUN_007ac700(param_1,&local_70);
    puVar4 = PTR_FUN_00d526b8;
    puVar5 = PTR_FUN_00d526c0;
  }
  *(undefined **)((long)param_1 + 0x100) = puVar5;
  *(undefined **)((long)param_1 + 0x108) = puVar4;
  if (((uVar2 ^ 0xffffffff) & 0x84) == 0) {
    uVar3 = 5;
  }
  else {
    if (((uVar2 ^ 0xffffffff) & 0x24) != 0) goto LAB_00718850;
    uVar3 = 4;
  }
  *(undefined4 *)((long)param_1 + 0x218) = uVar3;
LAB_00718850:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00718880  FUN_00718880 =====

void FUN_00718880(long param_1,ulong *param_2,ulong *param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_1 + 0x100);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[10] = 0;
  param_2[7] = 0;
  param_2[6] = 0;
  param_2[9] = 0;
  param_2[8] = 0;
  if (param_4 == 0xc) {
    uVar2 = *param_3;
    uVar3 = 0x2000000;
    *(int *)(param_2 + 1) = (int)param_3[1];
    *param_2 = uVar2;
    *(undefined1 *)((long)param_2 + 0xf) = 1;
  }
  else {
    uVar2 = param_4;
    if (0xf < param_4) {
      do {
        *param_2 = *param_3 ^ *param_2;
        param_2[1] = param_3[1] ^ param_2[1];
        (*pcVar4)(param_2,param_1);
        uVar2 = uVar2 - 0x10;
        param_3 = param_3 + 2;
      } while (0xf < uVar2);
    }
    if (uVar2 != 0) {
      uVar1 = 0;
      do {
        *(byte *)((long)param_2 + uVar1) =
             *(byte *)((long)param_2 + uVar1) ^ *(byte *)((long)param_3 + uVar1);
        uVar1 = uVar1 + 1;
      } while (uVar2 != uVar1);
      (*pcVar4)(param_2,param_1);
    }
    uVar2 = (param_4 << 3 & 0xff00ff00ff00ff00) >> 8 | (param_4 << 3 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    param_2[1] = param_2[1] ^ (uVar2 >> 0x20 | uVar2 << 0x20);
    (*pcVar4)(param_2,param_1);
    uVar3 = (*(uint *)((long)param_2 + 0xc) & 0xff00ff00) >> 8 |
            (*(uint *)((long)param_2 + 0xc) & 0xff00ff) << 8;
    uVar3 = (uVar3 >> 0x10 | uVar3 << 0x10) + 1;
    uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
    uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
  }
  (**(code **)(param_1 + 0x210))(param_2,param_2 + 4,param_1 + 0x110);
  *(uint *)((long)param_2 + 0xc) = uVar3;
  return;
}


// ===== 007189b8  FUN_007189b8 =====

undefined8 FUN_007189b8(long param_1,long param_2,byte *param_3,ulong param_4)

{
  code *pcVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  
  if (*(long *)(param_2 + 0x38) != 0) {
    return 0;
  }
  uVar4 = *(ulong *)(param_2 + 0x30) + param_4;
  if (0x2000000000000000 < uVar4) {
    return 0;
  }
  if (CARRY8(*(ulong *)(param_2 + 0x30),param_4)) {
    return 0;
  }
  pcVar2 = *(code **)(param_1 + 0x100);
  pcVar1 = *(code **)(param_1 + 0x108);
  uVar5 = (ulong)*(uint *)(param_2 + 0x54);
  *(ulong *)(param_2 + 0x30) = uVar4;
  if (*(uint *)(param_2 + 0x54) != 0) {
    if (param_4 == 0) goto LAB_00718c80;
    uVar4 = param_4;
    pbVar7 = param_3;
    do {
      uVar6 = uVar5;
      if (0xf < uVar6) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(0x5512,0x718ca4);
        (*pcVar2)();
      }
      param_3 = pbVar7 + 1;
      param_4 = uVar4 - 1;
      *(byte *)(param_2 + 0x40 + uVar6) = *(byte *)(param_2 + 0x40 + uVar6) ^ *pbVar7;
      uVar5 = (ulong)((int)uVar6 + 1) & 0xf;
    } while ((uVar6 != 0xf) && (bVar3 = uVar4 != 1, uVar4 = param_4, pbVar7 = param_3, bVar3));
    if (uVar6 != 0xf) goto LAB_00718c80;
    (*pcVar2)(param_2 + 0x40,param_1);
  }
  uVar4 = param_4 & 0xfffffffffffffff0;
  if (uVar4 != 0) {
    (*pcVar1)(param_2 + 0x40,param_1,param_3,uVar4);
    param_3 = param_3 + uVar4;
    param_4 = param_4 & 0xf;
  }
  if (param_4 == 0) {
    uVar5 = 0;
  }
  else {
    *(byte *)(param_2 + 0x40) = *(byte *)(param_2 + 0x40) ^ *param_3;
    if (param_4 == 1) {
      uVar5 = 1;
    }
    else {
      *(byte *)(param_2 + 0x41) = *(byte *)(param_2 + 0x41) ^ param_3[1];
      if (param_4 == 2) {
        uVar5 = 2;
      }
      else {
        *(byte *)(param_2 + 0x42) = *(byte *)(param_2 + 0x42) ^ param_3[2];
        if (param_4 == 3) {
          uVar5 = 3;
        }
        else {
          *(byte *)(param_2 + 0x43) = *(byte *)(param_2 + 0x43) ^ param_3[3];
          if (param_4 == 4) {
            uVar5 = 4;
          }
          else {
            *(byte *)(param_2 + 0x44) = *(byte *)(param_2 + 0x44) ^ param_3[4];
            if (param_4 == 5) {
              uVar5 = 5;
            }
            else {
              *(byte *)(param_2 + 0x45) = *(byte *)(param_2 + 0x45) ^ param_3[5];
              if (param_4 == 6) {
                uVar5 = 6;
              }
              else {
                *(byte *)(param_2 + 0x46) = *(byte *)(param_2 + 0x46) ^ param_3[6];
                if (param_4 == 7) {
                  uVar5 = 7;
                }
                else {
                  *(byte *)(param_2 + 0x47) = *(byte *)(param_2 + 0x47) ^ param_3[7];
                  if (param_4 == 8) {
                    uVar5 = 8;
                  }
                  else {
                    *(byte *)(param_2 + 0x48) = *(byte *)(param_2 + 0x48) ^ param_3[8];
                    if (param_4 == 9) {
                      uVar5 = 9;
                    }
                    else {
                      *(byte *)(param_2 + 0x49) = *(byte *)(param_2 + 0x49) ^ param_3[9];
                      if (param_4 == 10) {
                        uVar5 = 10;
                      }
                      else {
                        *(byte *)(param_2 + 0x4a) = *(byte *)(param_2 + 0x4a) ^ param_3[10];
                        if (param_4 == 0xb) {
                          uVar5 = 0xb;
                        }
                        else {
                          *(byte *)(param_2 + 0x4b) = *(byte *)(param_2 + 0x4b) ^ param_3[0xb];
                          if (param_4 == 0xc) {
                            uVar5 = 0xc;
                          }
                          else {
                            *(byte *)(param_2 + 0x4c) = *(byte *)(param_2 + 0x4c) ^ param_3[0xc];
                            if (param_4 == 0xd) {
                              uVar5 = 0xd;
                            }
                            else {
                              *(byte *)(param_2 + 0x4d) = *(byte *)(param_2 + 0x4d) ^ param_3[0xd];
                              if (param_4 == 0xe) {
                                uVar5 = 0xe;
                              }
                              else {
                                *(byte *)(param_2 + 0x4e) = *(byte *)(param_2 + 0x4e) ^ param_3[0xe]
                                ;
                                uVar5 = 0xf;
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
LAB_00718c80:
  *(int *)(param_2 + 0x54) = (int)uVar5;
  return 1;
}


// ===== 00718ca4  FUN_00718ca4 =====

undefined8 FUN_00718ca4(long param_1,long param_2,byte *param_3,byte *param_4,ulong param_5)

{
  byte *pbVar1;
  ulong uVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  byte *pbVar14;
  byte *pbVar15;
  code *pcVar16;
  byte bVar17;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  undefined8 uVar18;
  byte bVar25;
  byte bVar26;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  undefined8 uVar27;
  byte bVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  
  uVar12 = *(ulong *)(param_2 + 0x38) + param_5;
  if (0xfffffffe0 < uVar12) {
    return 0;
  }
  if (CARRY8(*(ulong *)(param_2 + 0x38),param_5)) {
    return 0;
  }
  pcVar16 = *(code **)(param_1 + 0x100);
  pcVar3 = *(code **)(param_1 + 0x108);
  *(ulong *)(param_2 + 0x38) = uVar12;
  if (*(int *)(param_2 + 0x54) != 0) {
    (*pcVar16)(param_2 + 0x40,param_1);
    *(undefined4 *)(param_2 + 0x54) = 0;
  }
  uVar12 = (ulong)*(uint *)(param_2 + 0x50);
  if (*(uint *)(param_2 + 0x50) == 0) {
    iVar4 = *(int *)(param_1 + 0x218);
  }
  else {
    if (param_5 == 0) goto LAB_00718fe0;
    pbVar14 = param_4;
    pbVar15 = param_3;
    uVar11 = param_5;
    do {
      uVar8 = uVar12;
      if (0xf < uVar8) goto LAB_00719008;
      param_3 = pbVar15 + 1;
      param_5 = uVar11 - 1;
      bVar17 = *(byte *)(param_2 + 0x10 + uVar8) ^ *pbVar15;
      param_4 = pbVar14 + 1;
      *pbVar14 = bVar17;
      *(byte *)(param_2 + 0x40 + uVar8) = *(byte *)(param_2 + 0x40 + uVar8) ^ bVar17;
      uVar12 = (ulong)((int)uVar8 + 1) & 0xf;
    } while ((uVar8 != 0xf) &&
            (bVar7 = uVar11 != 1, pbVar14 = param_4, pbVar15 = param_3, uVar11 = param_5, bVar7));
    if (uVar8 != 0xf) goto LAB_00718fe0;
    (*pcVar16)(param_2 + 0x40,param_1);
    iVar4 = *(int *)(param_1 + 0x218);
  }
  if ((iVar4 != 0) && (param_5 != 0)) {
    uVar12 = param_5 & 0xffffffff0;
    if (uVar12 != 0) {
      if (iVar4 == 5) {
        FUN_007a9b20();
      }
      else {
        FUN_007a8510(param_3,uVar12 << 3,param_4,param_2 + 0x40,param_2,param_1 + 0x110,param_1);
      }
    }
    param_3 = param_3 + uVar12;
    param_4 = param_4 + uVar12;
    param_5 = param_5 & 0xfffffff00000000f;
  }
  pcVar16 = *(code **)(param_1 + 0x208);
  uVar5 = (*(uint *)(param_2 + 0xc) & 0xff00ff00) >> 8 | (*(uint *)(param_2 + 0xc) & 0xff00ff) << 8;
  uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
  for (; 0xbff < param_5; param_5 = param_5 - 0xc00) {
    (*pcVar16)(param_3,param_4,0xc0,param_1 + 0x110,param_2);
    uVar5 = uVar5 + 0xc0;
    uVar6 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
    *(uint *)(param_2 + 0xc) = uVar6 >> 0x10 | uVar6 << 0x10;
    (*pcVar3)(param_2 + 0x40,param_1,param_4,0xc00);
    param_4 = param_4 + 0xc00;
    param_3 = param_3 + 0xc00;
  }
  uVar12 = param_5 & 0xff0;
  pbVar14 = param_4;
  pbVar15 = param_3;
  if (uVar12 != 0) {
    (*pcVar16)(param_3,param_4,param_5 >> 4,param_1 + 0x110,param_2);
    uVar5 = uVar5 + (int)(param_5 >> 4);
    uVar6 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
    *(uint *)(param_2 + 0xc) = uVar6 >> 0x10 | uVar6 << 0x10;
    param_5 = param_5 & 0xf;
    (*pcVar3)(param_2 + 0x40,param_1,param_4,uVar12);
    pbVar14 = param_4 + uVar12;
    pbVar15 = param_3 + uVar12;
  }
  if (param_5 == 0) {
    uVar12 = 0;
  }
  else {
    (**(code **)(param_1 + 0x210))(param_2,param_2 + 0x10,param_1 + 0x110);
    uVar8 = param_5 - 1;
    uVar5 = (uVar5 + 1 & 0xff00ff00) >> 8 | (uVar5 + 1 & 0xff00ff) << 8;
    uVar11 = uVar8;
    if (0xf < uVar8) {
      uVar11 = 0x10;
    }
    *(uint *)(param_2 + 0xc) = uVar5 >> 0x10 | uVar5 << 0x10;
    if (param_5 < 0x11) {
      lVar9 = 0;
    }
    else {
      if (0xf < uVar8) {
        uVar8 = 0x10;
      }
      lVar13 = uVar8 + uVar12 + 1;
      pbVar1 = (byte *)(param_2 + uVar8 + 0x41);
      lVar9 = 0;
      if (((param_4 + lVar13 <= (byte *)(param_2 + 0x10U) || pbVar1 <= pbVar14) &&
          (param_3 + lVar13 <= pbVar14 || param_4 + lVar13 <= pbVar15)) &&
         (param_3 + lVar13 <= (byte *)(param_2 + 0x10U) || pbVar1 <= pbVar15)) {
        uVar8 = uVar11 + 1 & 0xf;
        uVar2 = 0x10;
        if (uVar8 != 0) {
          uVar2 = uVar8;
        }
        lVar9 = (uVar11 + 1) - uVar2;
        param_5 = param_5 - lVar9;
        puVar10 = (undefined8 *)(param_2 + 0x40);
        lVar13 = lVar9;
        do {
          uVar27 = *(undefined8 *)(pbVar15 + 8);
          uVar18 = *(undefined8 *)pbVar15;
          uVar36 = puVar10[-5];
          uVar35 = puVar10[-6];
          lVar13 = lVar13 + -0x10;
          bVar17 = (byte)uVar35 ^ (byte)uVar18;
          bVar19 = (byte)((ulong)uVar35 >> 8) ^ (byte)((ulong)uVar18 >> 8);
          bVar20 = (byte)((ulong)uVar35 >> 0x10) ^ (byte)((ulong)uVar18 >> 0x10);
          bVar21 = (byte)((ulong)uVar35 >> 0x18) ^ (byte)((ulong)uVar18 >> 0x18);
          bVar22 = (byte)((ulong)uVar35 >> 0x20) ^ (byte)((ulong)uVar18 >> 0x20);
          bVar23 = (byte)((ulong)uVar35 >> 0x28) ^ (byte)((ulong)uVar18 >> 0x28);
          bVar24 = (byte)((ulong)uVar35 >> 0x30) ^ (byte)((ulong)uVar18 >> 0x30);
          bVar25 = (byte)((ulong)uVar35 >> 0x38) ^ (byte)((ulong)uVar18 >> 0x38);
          bVar26 = (byte)uVar36 ^ (byte)uVar27;
          bVar28 = (byte)((ulong)uVar36 >> 8) ^ (byte)((ulong)uVar27 >> 8);
          bVar29 = (byte)((ulong)uVar36 >> 0x10) ^ (byte)((ulong)uVar27 >> 0x10);
          bVar30 = (byte)((ulong)uVar36 >> 0x18) ^ (byte)((ulong)uVar27 >> 0x18);
          bVar31 = (byte)((ulong)uVar36 >> 0x20) ^ (byte)((ulong)uVar27 >> 0x20);
          bVar32 = (byte)((ulong)uVar36 >> 0x28) ^ (byte)((ulong)uVar27 >> 0x28);
          bVar33 = (byte)((ulong)uVar36 >> 0x30) ^ (byte)((ulong)uVar27 >> 0x30);
          bVar34 = (byte)((ulong)uVar36 >> 0x38) ^ (byte)((ulong)uVar27 >> 0x38);
          uVar27 = puVar10[1];
          uVar18 = *puVar10;
          *(ulong *)(pbVar14 + 8) =
               CONCAT17(bVar34,CONCAT16(bVar33,CONCAT15(bVar32,CONCAT14(bVar31,CONCAT13(bVar30,
                                                  CONCAT12(bVar29,CONCAT11(bVar28,bVar26)))))));
          *(ulong *)pbVar14 =
               CONCAT17(bVar25,CONCAT16(bVar24,CONCAT15(bVar23,CONCAT14(bVar22,CONCAT13(bVar21,
                                                  CONCAT12(bVar20,CONCAT11(bVar19,bVar17)))))));
          puVar10[1] = CONCAT17((byte)((ulong)uVar27 >> 0x38) ^ bVar34,
                                CONCAT16((byte)((ulong)uVar27 >> 0x30) ^ bVar33,
                                         CONCAT15((byte)((ulong)uVar27 >> 0x28) ^ bVar32,
                                                  CONCAT14((byte)((ulong)uVar27 >> 0x20) ^ bVar31,
                                                           CONCAT13((byte)((ulong)uVar27 >> 0x18) ^
                                                                    bVar30,CONCAT12((byte)((ulong)
                                                  uVar27 >> 0x10) ^ bVar29,
                                                  CONCAT11((byte)((ulong)uVar27 >> 8) ^ bVar28,
                                                           (byte)uVar27 ^ bVar26)))))));
          *puVar10 = CONCAT17((byte)((ulong)uVar18 >> 0x38) ^ bVar25,
                              CONCAT16((byte)((ulong)uVar18 >> 0x30) ^ bVar24,
                                       CONCAT15((byte)((ulong)uVar18 >> 0x28) ^ bVar23,
                                                CONCAT14((byte)((ulong)uVar18 >> 0x20) ^ bVar22,
                                                         CONCAT13((byte)((ulong)uVar18 >> 0x18) ^
                                                                  bVar21,CONCAT12((byte)((ulong)
                                                  uVar18 >> 0x10) ^ bVar20,
                                                  CONCAT11((byte)((ulong)uVar18 >> 8) ^ bVar19,
                                                           (byte)uVar18 ^ bVar17)))))));
          puVar10 = puVar10 + 2;
          pbVar15 = pbVar15 + 0x10;
          pbVar14 = pbVar14 + 0x10;
        } while (lVar13 != 0);
      }
    }
    uVar11 = 0;
    do {
      if (lVar9 + uVar11 == 0x10) {
LAB_00719008:
                    /* WARNING: Does not return */
        pcVar16 = (code *)SoftwareBreakpoint(0x5512,0x71900c);
        (*pcVar16)();
      }
      pbVar14 = (byte *)(lVar9 + param_2 + 0x40 + uVar11);
      bVar17 = param_3[uVar11 + lVar9 + uVar12];
      bVar19 = pbVar14[-0x30];
      param_4[uVar11 + lVar9 + uVar12] = bVar19 ^ bVar17;
      uVar11 = uVar11 + 1;
      *pbVar14 = *pbVar14 ^ bVar19 ^ bVar17;
    } while (param_5 != uVar11);
    uVar12 = (ulong)(uint)((int)lVar9 + (int)uVar11);
  }
LAB_00718fe0:
  *(int *)(param_2 + 0x50) = (int)uVar12;
  return 1;
}


// ===== 0071900c  FUN_0071900c =====

undefined8 FUN_0071900c(long param_1,long param_2,byte *param_3,byte *param_4,ulong param_5)

{
  byte *pbVar1;
  ulong uVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  byte *pbVar14;
  byte *pbVar15;
  code *pcVar16;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  undefined8 uVar17;
  byte bVar24;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  undefined8 uVar25;
  byte bVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  
  uVar12 = *(ulong *)(param_2 + 0x38) + param_5;
  if (0xfffffffe0 < uVar12) {
    return 0;
  }
  if (CARRY8(*(ulong *)(param_2 + 0x38),param_5)) {
    return 0;
  }
  pcVar16 = *(code **)(param_1 + 0x100);
  pcVar3 = *(code **)(param_1 + 0x108);
  *(ulong *)(param_2 + 0x38) = uVar12;
  if (*(int *)(param_2 + 0x54) != 0) {
    (*pcVar16)(param_2 + 0x40,param_1);
    *(undefined4 *)(param_2 + 0x54) = 0;
  }
  uVar12 = (ulong)*(uint *)(param_2 + 0x50);
  if (*(uint *)(param_2 + 0x50) == 0) {
    iVar4 = *(int *)(param_1 + 0x218);
  }
  else {
    if (param_5 == 0) goto LAB_00719348;
    pbVar14 = param_4;
    pbVar15 = param_3;
    uVar11 = param_5;
    do {
      uVar8 = uVar12;
      if (0xf < uVar8) goto LAB_00719370;
      param_3 = pbVar15 + 1;
      bVar18 = *pbVar15;
      param_5 = uVar11 - 1;
      param_4 = pbVar14 + 1;
      *pbVar14 = *(byte *)(param_2 + 0x10 + uVar8) ^ bVar18;
      *(byte *)(param_2 + 0x40 + uVar8) = *(byte *)(param_2 + 0x40 + uVar8) ^ bVar18;
      uVar12 = (ulong)((int)uVar8 + 1) & 0xf;
    } while ((uVar8 != 0xf) &&
            (bVar7 = uVar11 != 1, pbVar14 = param_4, pbVar15 = param_3, uVar11 = param_5, bVar7));
    if (uVar8 != 0xf) goto LAB_00719348;
    (*pcVar16)(param_2 + 0x40,param_1);
    iVar4 = *(int *)(param_1 + 0x218);
  }
  if ((iVar4 != 0) && (param_5 != 0)) {
    uVar12 = param_5 & 0xffffffff0;
    if (uVar12 != 0) {
      if (iVar4 == 5) {
        FUN_007aa5d0();
      }
      else {
        FUN_007a9000(param_3,uVar12 << 3,param_4,param_2 + 0x40,param_2,param_1 + 0x110,param_1);
      }
    }
    param_3 = param_3 + uVar12;
    param_4 = param_4 + uVar12;
    param_5 = param_5 & 0xfffffff00000000f;
  }
  pcVar16 = *(code **)(param_1 + 0x208);
  uVar5 = (*(uint *)(param_2 + 0xc) & 0xff00ff00) >> 8 | (*(uint *)(param_2 + 0xc) & 0xff00ff) << 8;
  uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
  for (; 0xbff < param_5; param_5 = param_5 - 0xc00) {
    (*pcVar3)(param_2 + 0x40,param_1,param_3,0xc00);
    (*pcVar16)(param_3,param_4,0xc0,param_1 + 0x110,param_2);
    uVar5 = uVar5 + 0xc0;
    param_4 = param_4 + 0xc00;
    uVar6 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
    param_3 = param_3 + 0xc00;
    *(uint *)(param_2 + 0xc) = uVar6 >> 0x10 | uVar6 << 0x10;
  }
  uVar12 = param_5 & 0xff0;
  pbVar14 = param_4;
  pbVar15 = param_3;
  if (uVar12 != 0) {
    (*pcVar3)(param_2 + 0x40,param_1,param_3,uVar12);
    (*pcVar16)(param_3,param_4,param_5 >> 4,param_1 + 0x110,param_2);
    uVar5 = uVar5 + (int)(param_5 >> 4);
    uVar6 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
    param_5 = param_5 & 0xf;
    *(uint *)(param_2 + 0xc) = uVar6 >> 0x10 | uVar6 << 0x10;
    pbVar14 = param_4 + uVar12;
    pbVar15 = param_3 + uVar12;
  }
  if (param_5 == 0) {
    uVar12 = 0;
  }
  else {
    (**(code **)(param_1 + 0x210))(param_2,param_2 + 0x10,param_1 + 0x110);
    uVar8 = param_5 - 1;
    uVar5 = (uVar5 + 1 & 0xff00ff00) >> 8 | (uVar5 + 1 & 0xff00ff) << 8;
    uVar11 = uVar8;
    if (0xf < uVar8) {
      uVar11 = 0x10;
    }
    *(uint *)(param_2 + 0xc) = uVar5 >> 0x10 | uVar5 << 0x10;
    if (param_5 < 0x11) {
      lVar9 = 0;
    }
    else {
      if (0xf < uVar8) {
        uVar8 = 0x10;
      }
      lVar13 = uVar8 + uVar12 + 1;
      pbVar1 = (byte *)(param_2 + uVar8 + 0x41);
      lVar9 = 0;
      if (((pbVar1 <= pbVar14 || param_4 + lVar13 <= (byte *)(param_2 + 0x10U)) &&
          (param_3 + lVar13 <= (byte *)(param_2 + 0x10U) || pbVar1 <= pbVar15)) &&
         (param_3 + lVar13 <= pbVar14 || param_4 + lVar13 <= pbVar15)) {
        uVar8 = uVar11 + 1 & 0xf;
        uVar2 = 0x10;
        if (uVar8 != 0) {
          uVar2 = uVar8;
        }
        lVar9 = (uVar11 + 1) - uVar2;
        param_5 = param_5 - lVar9;
        puVar10 = (undefined8 *)(param_2 + 0x40);
        lVar13 = lVar9;
        do {
          uVar25 = *(undefined8 *)(pbVar15 + 8);
          uVar17 = *(undefined8 *)pbVar15;
          uVar34 = puVar10[1];
          uVar33 = *puVar10;
          uVar36 = puVar10[-5];
          uVar35 = puVar10[-6];
          lVar13 = lVar13 + -0x10;
          bVar18 = (byte)((ulong)uVar17 >> 8);
          bVar19 = (byte)((ulong)uVar17 >> 0x10);
          bVar20 = (byte)((ulong)uVar17 >> 0x18);
          bVar21 = (byte)((ulong)uVar17 >> 0x20);
          bVar22 = (byte)((ulong)uVar17 >> 0x28);
          bVar23 = (byte)((ulong)uVar17 >> 0x30);
          bVar24 = (byte)((ulong)uVar17 >> 0x38);
          bVar26 = (byte)((ulong)uVar25 >> 8);
          bVar27 = (byte)((ulong)uVar25 >> 0x10);
          bVar28 = (byte)((ulong)uVar25 >> 0x18);
          bVar29 = (byte)((ulong)uVar25 >> 0x20);
          bVar30 = (byte)((ulong)uVar25 >> 0x28);
          bVar31 = (byte)((ulong)uVar25 >> 0x30);
          bVar32 = (byte)((ulong)uVar25 >> 0x38);
          puVar10[1] = CONCAT17((byte)((ulong)uVar34 >> 0x38) ^ bVar32,
                                CONCAT16((byte)((ulong)uVar34 >> 0x30) ^ bVar31,
                                         CONCAT15((byte)((ulong)uVar34 >> 0x28) ^ bVar30,
                                                  CONCAT14((byte)((ulong)uVar34 >> 0x20) ^ bVar29,
                                                           CONCAT13((byte)((ulong)uVar34 >> 0x18) ^
                                                                    bVar28,CONCAT12((byte)((ulong)
                                                  uVar34 >> 0x10) ^ bVar27,
                                                  CONCAT11((byte)((ulong)uVar34 >> 8) ^ bVar26,
                                                           (byte)uVar34 ^ (byte)uVar25)))))));
          *puVar10 = CONCAT17((byte)((ulong)uVar33 >> 0x38) ^ bVar24,
                              CONCAT16((byte)((ulong)uVar33 >> 0x30) ^ bVar23,
                                       CONCAT15((byte)((ulong)uVar33 >> 0x28) ^ bVar22,
                                                CONCAT14((byte)((ulong)uVar33 >> 0x20) ^ bVar21,
                                                         CONCAT13((byte)((ulong)uVar33 >> 0x18) ^
                                                                  bVar20,CONCAT12((byte)((ulong)
                                                  uVar33 >> 0x10) ^ bVar19,
                                                  CONCAT11((byte)((ulong)uVar33 >> 8) ^ bVar18,
                                                           (byte)uVar33 ^ (byte)uVar17)))))));
          *(ulong *)(pbVar14 + 8) =
               CONCAT17((byte)((ulong)uVar36 >> 0x38) ^ bVar32,
                        CONCAT16((byte)((ulong)uVar36 >> 0x30) ^ bVar31,
                                 CONCAT15((byte)((ulong)uVar36 >> 0x28) ^ bVar30,
                                          CONCAT14((byte)((ulong)uVar36 >> 0x20) ^ bVar29,
                                                   CONCAT13((byte)((ulong)uVar36 >> 0x18) ^ bVar28,
                                                            CONCAT12((byte)((ulong)uVar36 >> 0x10) ^
                                                                     bVar27,CONCAT11((byte)((ulong)
                                                  uVar36 >> 8) ^ bVar26,(byte)uVar36 ^ (byte)uVar25)
                                                  ))))));
          *(ulong *)pbVar14 =
               CONCAT17((byte)((ulong)uVar35 >> 0x38) ^ bVar24,
                        CONCAT16((byte)((ulong)uVar35 >> 0x30) ^ bVar23,
                                 CONCAT15((byte)((ulong)uVar35 >> 0x28) ^ bVar22,
                                          CONCAT14((byte)((ulong)uVar35 >> 0x20) ^ bVar21,
                                                   CONCAT13((byte)((ulong)uVar35 >> 0x18) ^ bVar20,
                                                            CONCAT12((byte)((ulong)uVar35 >> 0x10) ^
                                                                     bVar19,CONCAT11((byte)((ulong)
                                                  uVar35 >> 8) ^ bVar18,(byte)uVar35 ^ (byte)uVar17)
                                                  ))))));
          puVar10 = puVar10 + 2;
          pbVar14 = pbVar14 + 0x10;
          pbVar15 = pbVar15 + 0x10;
        } while (lVar13 != 0);
      }
    }
    uVar11 = 0;
    do {
      if (lVar9 + uVar11 == 0x10) {
LAB_00719370:
                    /* WARNING: Does not return */
        pcVar16 = (code *)SoftwareBreakpoint(0x5512,0x719374);
        (*pcVar16)();
      }
      pbVar14 = (byte *)(lVar9 + param_2 + 0x40 + uVar11);
      bVar18 = param_3[uVar11 + lVar9 + uVar12];
      *pbVar14 = *pbVar14 ^ bVar18;
      param_4[uVar11 + lVar9 + uVar12] = pbVar14[-0x30] ^ bVar18;
      uVar11 = uVar11 + 1;
    } while (param_5 != uVar11);
    uVar12 = (ulong)(uint)((int)lVar9 + (int)uVar11);
  }
LAB_00719348:
  *(int *)(param_2 + 0x50) = (int)uVar12;
  return 1;
}


// ===== 00719374  FUN_00719374 =====

ulong FUN_00719374(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong uVar17;
  ulong uVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  undefined1 auVar36 [16];
  ulong uVar52;
  
  uVar1 = *(uint *)(param_1 + 1);
  uVar7 = (ulong)(int)uVar1;
  uVar2 = *(uint *)(param_2 + 1);
  uVar10 = (ulong)(int)uVar2;
  puVar11 = (ulong *)*param_1;
  puVar14 = (ulong *)*param_2;
  uVar8 = uVar7 - uVar10;
  uVar12 = uVar7;
  if (uVar10 <= uVar7) {
    uVar12 = uVar10;
  }
  if (uVar12 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    puVar15 = puVar11;
    puVar16 = puVar14;
    do {
      uVar17 = *puVar15;
      uVar13 = uVar17 - *puVar16;
      uVar18 = -(ulong)(uVar13 == 0);
      uVar12 = uVar12 - 1;
      uVar6 = uVar18 & uVar6 |
              ((long)((uVar13 ^ uVar17 | *puVar16 ^ uVar17) ^ uVar17) >> 0x3f | 1U) &
              (uVar18 ^ 0xffffffffffffffff);
      puVar15 = puVar15 + 1;
      puVar16 = puVar16 + 1;
    } while (uVar12 != 0);
  }
  if (uVar1 < uVar2) {
    uVar12 = uVar10 - uVar7;
    if (uVar12 < 4) {
      uVar13 = 0;
      uVar8 = uVar7;
    }
    else {
      bVar19 = 0;
      bVar20 = 0;
      bVar21 = 0;
      bVar22 = 0;
      bVar23 = 0;
      bVar24 = 0;
      bVar25 = 0;
      bVar26 = 0;
      bVar27 = 0;
      bVar28 = 0;
      bVar29 = 0;
      bVar30 = 0;
      bVar31 = 0;
      bVar32 = 0;
      bVar33 = 0;
      bVar34 = 0;
      bVar35 = 0;
      bVar37 = 0;
      bVar38 = 0;
      bVar39 = 0;
      bVar40 = 0;
      bVar41 = 0;
      bVar42 = 0;
      bVar43 = 0;
      bVar44 = 0;
      bVar45 = 0;
      bVar46 = 0;
      bVar47 = 0;
      bVar48 = 0;
      bVar49 = 0;
      bVar50 = 0;
      bVar51 = 0;
      uVar13 = uVar12 & 0xfffffffffffffffc;
      uVar8 = (uVar12 & 0xfffffffffffffffc) + uVar7;
      puVar11 = puVar14 + uVar7 + 2;
      do {
        uVar17 = puVar11[-1];
        uVar7 = puVar11[-2];
        uVar52 = puVar11[1];
        uVar18 = *puVar11;
        uVar13 = uVar13 - 4;
        puVar11 = puVar11 + 4;
        bVar19 = (byte)uVar7 | bVar19;
        bVar20 = (byte)(uVar7 >> 8) | bVar20;
        bVar21 = (byte)(uVar7 >> 0x10) | bVar21;
        bVar22 = (byte)(uVar7 >> 0x18) | bVar22;
        bVar23 = (byte)(uVar7 >> 0x20) | bVar23;
        bVar24 = (byte)(uVar7 >> 0x28) | bVar24;
        bVar25 = (byte)(uVar7 >> 0x30) | bVar25;
        bVar26 = (byte)(uVar7 >> 0x38) | bVar26;
        bVar27 = (byte)uVar17 | bVar27;
        bVar28 = (byte)(uVar17 >> 8) | bVar28;
        bVar29 = (byte)(uVar17 >> 0x10) | bVar29;
        bVar30 = (byte)(uVar17 >> 0x18) | bVar30;
        bVar31 = (byte)(uVar17 >> 0x20) | bVar31;
        bVar32 = (byte)(uVar17 >> 0x28) | bVar32;
        bVar33 = (byte)(uVar17 >> 0x30) | bVar33;
        bVar34 = (byte)(uVar17 >> 0x38) | bVar34;
        bVar35 = (byte)uVar18 | bVar35;
        bVar37 = (byte)(uVar18 >> 8) | bVar37;
        bVar38 = (byte)(uVar18 >> 0x10) | bVar38;
        bVar39 = (byte)(uVar18 >> 0x18) | bVar39;
        bVar40 = (byte)(uVar18 >> 0x20) | bVar40;
        bVar41 = (byte)(uVar18 >> 0x28) | bVar41;
        bVar42 = (byte)(uVar18 >> 0x30) | bVar42;
        bVar43 = (byte)(uVar18 >> 0x38) | bVar43;
        bVar44 = (byte)uVar52 | bVar44;
        bVar45 = (byte)(uVar52 >> 8) | bVar45;
        bVar46 = (byte)(uVar52 >> 0x10) | bVar46;
        bVar47 = (byte)(uVar52 >> 0x18) | bVar47;
        bVar48 = (byte)(uVar52 >> 0x20) | bVar48;
        bVar49 = (byte)(uVar52 >> 0x28) | bVar49;
        bVar50 = (byte)(uVar52 >> 0x30) | bVar50;
        bVar51 = (byte)(uVar52 >> 0x38) | bVar51;
      } while (uVar13 != 0);
      bVar35 = bVar35 | bVar19;
      bVar37 = bVar37 | bVar20;
      bVar38 = bVar38 | bVar21;
      bVar39 = bVar39 | bVar22;
      bVar40 = bVar40 | bVar23;
      bVar41 = bVar41 | bVar24;
      bVar42 = bVar42 | bVar25;
      bVar43 = bVar43 | bVar26;
      auVar36[1] = bVar37;
      auVar36[0] = bVar35;
      auVar36[2] = bVar38;
      auVar36[3] = bVar39;
      auVar36[4] = bVar40;
      auVar36[5] = bVar41;
      auVar36[6] = bVar42;
      auVar36[7] = bVar43;
      auVar36[8] = bVar44 | bVar27;
      auVar36[9] = bVar45 | bVar28;
      auVar36[10] = bVar46 | bVar29;
      auVar36[0xb] = bVar47 | bVar30;
      auVar36[0xc] = bVar48 | bVar31;
      auVar36[0xd] = bVar49 | bVar32;
      auVar36[0xe] = bVar50 | bVar33;
      auVar36[0xf] = bVar51 | bVar34;
      auVar3[1] = bVar37;
      auVar3[0] = bVar35;
      auVar3[2] = bVar38;
      auVar3[3] = bVar39;
      auVar3[4] = bVar40;
      auVar3[5] = bVar41;
      auVar3[6] = bVar42;
      auVar3[7] = bVar43;
      auVar3[8] = bVar44 | bVar27;
      auVar3[9] = bVar45 | bVar28;
      auVar3[10] = bVar46 | bVar29;
      auVar3[0xb] = bVar47 | bVar30;
      auVar3[0xc] = bVar48 | bVar31;
      auVar3[0xd] = bVar49 | bVar32;
      auVar3[0xe] = bVar50 | bVar33;
      auVar3[0xf] = bVar51 | bVar34;
      auVar36 = NEON_ext(auVar36,auVar3,8,1);
      uVar13 = CONCAT17(bVar43 | auVar36[7],
                        CONCAT16(bVar42 | auVar36[6],
                                 CONCAT15(bVar41 | auVar36[5],
                                          CONCAT14(bVar40 | auVar36[4],
                                                   CONCAT13(bVar39 | auVar36[3],
                                                            CONCAT12(bVar38 | auVar36[2],
                                                                     CONCAT11(bVar37 | auVar36[1],
                                                                              bVar35 | auVar36[0])))
                                                  ))));
      if (uVar12 == (uVar12 & 0xfffffffffffffffc)) goto LAB_00719480;
    }
    lVar9 = uVar10 - uVar8;
    puVar11 = puVar14 + uVar8;
    do {
      lVar9 = lVar9 + -1;
      uVar13 = *puVar11 | uVar13;
      puVar11 = puVar11 + 1;
    } while (lVar9 != 0);
LAB_00719480:
    return (ulong)((uint)uVar6 | -(uint)(uVar13 == 0) ^ 0xffffffff);
  }
  if (uVar1 <= uVar2) {
    return uVar6;
  }
  if (uVar8 < 4) {
    uVar13 = 0;
    uVar12 = uVar10;
  }
  else {
    bVar19 = 0;
    bVar20 = 0;
    bVar21 = 0;
    bVar22 = 0;
    bVar23 = 0;
    bVar24 = 0;
    bVar25 = 0;
    bVar26 = 0;
    bVar27 = 0;
    bVar28 = 0;
    bVar29 = 0;
    bVar30 = 0;
    bVar31 = 0;
    bVar32 = 0;
    bVar33 = 0;
    bVar34 = 0;
    bVar35 = 0;
    bVar37 = 0;
    bVar38 = 0;
    bVar39 = 0;
    bVar40 = 0;
    bVar41 = 0;
    bVar42 = 0;
    bVar43 = 0;
    bVar44 = 0;
    bVar45 = 0;
    bVar46 = 0;
    bVar47 = 0;
    bVar48 = 0;
    bVar49 = 0;
    bVar50 = 0;
    bVar51 = 0;
    uVar13 = uVar8 & 0xfffffffffffffffc;
    uVar12 = (uVar8 & 0xfffffffffffffffc) + uVar10;
    puVar14 = puVar11 + uVar10 + 2;
    do {
      uVar17 = puVar14[-1];
      uVar10 = puVar14[-2];
      uVar52 = puVar14[1];
      uVar18 = *puVar14;
      uVar13 = uVar13 - 4;
      puVar14 = puVar14 + 4;
      bVar19 = (byte)uVar10 | bVar19;
      bVar20 = (byte)(uVar10 >> 8) | bVar20;
      bVar21 = (byte)(uVar10 >> 0x10) | bVar21;
      bVar22 = (byte)(uVar10 >> 0x18) | bVar22;
      bVar23 = (byte)(uVar10 >> 0x20) | bVar23;
      bVar24 = (byte)(uVar10 >> 0x28) | bVar24;
      bVar25 = (byte)(uVar10 >> 0x30) | bVar25;
      bVar26 = (byte)(uVar10 >> 0x38) | bVar26;
      bVar27 = (byte)uVar17 | bVar27;
      bVar28 = (byte)(uVar17 >> 8) | bVar28;
      bVar29 = (byte)(uVar17 >> 0x10) | bVar29;
      bVar30 = (byte)(uVar17 >> 0x18) | bVar30;
      bVar31 = (byte)(uVar17 >> 0x20) | bVar31;
      bVar32 = (byte)(uVar17 >> 0x28) | bVar32;
      bVar33 = (byte)(uVar17 >> 0x30) | bVar33;
      bVar34 = (byte)(uVar17 >> 0x38) | bVar34;
      bVar35 = (byte)uVar18 | bVar35;
      bVar37 = (byte)(uVar18 >> 8) | bVar37;
      bVar38 = (byte)(uVar18 >> 0x10) | bVar38;
      bVar39 = (byte)(uVar18 >> 0x18) | bVar39;
      bVar40 = (byte)(uVar18 >> 0x20) | bVar40;
      bVar41 = (byte)(uVar18 >> 0x28) | bVar41;
      bVar42 = (byte)(uVar18 >> 0x30) | bVar42;
      bVar43 = (byte)(uVar18 >> 0x38) | bVar43;
      bVar44 = (byte)uVar52 | bVar44;
      bVar45 = (byte)(uVar52 >> 8) | bVar45;
      bVar46 = (byte)(uVar52 >> 0x10) | bVar46;
      bVar47 = (byte)(uVar52 >> 0x18) | bVar47;
      bVar48 = (byte)(uVar52 >> 0x20) | bVar48;
      bVar49 = (byte)(uVar52 >> 0x28) | bVar49;
      bVar50 = (byte)(uVar52 >> 0x30) | bVar50;
      bVar51 = (byte)(uVar52 >> 0x38) | bVar51;
    } while (uVar13 != 0);
    bVar35 = bVar35 | bVar19;
    bVar37 = bVar37 | bVar20;
    bVar38 = bVar38 | bVar21;
    bVar39 = bVar39 | bVar22;
    bVar40 = bVar40 | bVar23;
    bVar41 = bVar41 | bVar24;
    bVar42 = bVar42 | bVar25;
    bVar43 = bVar43 | bVar26;
    auVar4[1] = bVar37;
    auVar4[0] = bVar35;
    auVar4[2] = bVar38;
    auVar4[3] = bVar39;
    auVar4[4] = bVar40;
    auVar4[5] = bVar41;
    auVar4[6] = bVar42;
    auVar4[7] = bVar43;
    auVar4[8] = bVar44 | bVar27;
    auVar4[9] = bVar45 | bVar28;
    auVar4[10] = bVar46 | bVar29;
    auVar4[0xb] = bVar47 | bVar30;
    auVar4[0xc] = bVar48 | bVar31;
    auVar4[0xd] = bVar49 | bVar32;
    auVar4[0xe] = bVar50 | bVar33;
    auVar4[0xf] = bVar51 | bVar34;
    auVar5[1] = bVar37;
    auVar5[0] = bVar35;
    auVar5[2] = bVar38;
    auVar5[3] = bVar39;
    auVar5[4] = bVar40;
    auVar5[5] = bVar41;
    auVar5[6] = bVar42;
    auVar5[7] = bVar43;
    auVar5[8] = bVar44 | bVar27;
    auVar5[9] = bVar45 | bVar28;
    auVar5[10] = bVar46 | bVar29;
    auVar5[0xb] = bVar47 | bVar30;
    auVar5[0xc] = bVar48 | bVar31;
    auVar5[0xd] = bVar49 | bVar32;
    auVar5[0xe] = bVar50 | bVar33;
    auVar5[0xf] = bVar51 | bVar34;
    auVar36 = NEON_ext(auVar4,auVar5,8,1);
    uVar13 = CONCAT17(bVar43 | auVar36[7],
                      CONCAT16(bVar42 | auVar36[6],
                               CONCAT15(bVar41 | auVar36[5],
                                        CONCAT14(bVar40 | auVar36[4],
                                                 CONCAT13(bVar39 | auVar36[3],
                                                          CONCAT12(bVar38 | auVar36[2],
                                                                   CONCAT11(bVar37 | auVar36[1],
                                                                            bVar35 | auVar36[0])))))
                              ));
    if (uVar8 == (uVar8 & 0xfffffffffffffffc)) goto LAB_007194f4;
  }
  lVar9 = uVar7 - uVar12;
  puVar11 = puVar11 + uVar12;
  do {
    lVar9 = lVar9 + -1;
    uVar13 = *puVar11 | uVar13;
    puVar11 = puVar11 + 1;
  } while (lVar9 != 0);
LAB_007194f4:
  return (ulong)((-(uint)(uVar13 == 0) ^ 0xffffffff) & 1 | -(uint)(uVar13 == 0) & (uint)uVar6);
}


// ===== 00719510  FUN_00719510 =====

undefined8 FUN_00719510(long *param_1)

{
  bool bVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  uVar3 = FUN_00719d94();
  if ((int)uVar3 == 0) {
    return uVar3;
  }
  uVar4 = *(uint *)(param_1 + 1);
  if ((int)uVar4 < 1) {
    if (uVar4 != 0) {
      return 1;
    }
  }
  else {
    do {
      if (*(long *)(*param_1 + (ulong)uVar4 * 8 + -8) != 0) {
        *(uint *)(param_1 + 1) = uVar4;
        return 1;
      }
      uVar2 = uVar4 - 1;
      bVar1 = 0 < (int)uVar4;
      uVar4 = uVar2;
    } while (uVar2 != 0 && bVar1);
    *(undefined4 *)(param_1 + 1) = 0;
  }
  *(undefined4 *)(param_1 + 2) = 0;
  return 1;
}


// ===== 0071957c  FUN_0071957c =====

undefined8 FUN_0071957c(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  plVar1 = param_2;
  if ((int)param_3[1] <= (int)param_2[1]) {
    plVar1 = param_3;
    param_3 = param_2;
  }
  iVar2 = (int)param_3[1];
  lVar3 = plVar1[1];
  lVar7 = (long)(int)lVar3;
  uVar4 = FUN_0071962c(param_1,(long)(iVar2 + 1));
  if ((int)uVar4 != 0) {
    *(int *)(param_1 + 1) = iVar2 + 1;
    uVar5 = FUN_007ac350(*param_1,*param_3,*plVar1,lVar7);
    if ((int)lVar3 < iVar2) {
      do {
        uVar6 = *(ulong *)(*param_3 + lVar7 * 8);
        *(ulong *)(*param_1 + lVar7 * 8) = uVar6 + uVar5;
        lVar7 = lVar7 + 1;
        uVar5 = (ulong)CARRY8(uVar6,uVar5);
      } while (iVar2 != lVar7);
    }
    *(ulong *)(*param_1 + (long)iVar2 * 8) = uVar5;
    uVar4 = 1;
  }
  return uVar4;
}


// ===== 0071962c  FUN_0071962c =====

undefined8 FUN_0071962c(undefined8 *param_1,ulong param_2)

{
  void *__dest;
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_2 <= (ulong)(long)*(int *)((long)param_1 + 0xc)) {
    return 1;
  }
  if (param_2 < 0x800000) {
    if ((*(byte *)((long)param_1 + 0x14) >> 1 & 1) == 0) {
      __dest = (void *)FUN_0078ca74(param_2,8);
      if (__dest == (void *)0x0) {
        return 0;
      }
      if (*(int *)(param_1 + 1) != 0) {
        memcpy(__dest,(void *)*param_1,(long)*(int *)(param_1 + 1) << 3);
      }
      FUN_0078cb3c(*param_1);
      *param_1 = __dest;
      *(int *)((long)param_1 + 0xc) = (int)param_2;
      return 1;
    }
    uVar1 = 0x6a;
    uVar2 = 0x135;
  }
  else {
    uVar1 = 0x66;
    uVar2 = 0x130;
  }
  FUN_00777eb4(3,0,uVar1,"../../third_party/boringssl/src/crypto/fipsmodule/bn/bn.cc.inc",uVar2);
  return 0;
}


// ===== 00719704  FUN_00719704 =====

void FUN_00719704(long *param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 1);
  if ((int)uVar3 < 1) {
    if (uVar3 != 0) {
      return;
    }
  }
  else {
    do {
      if (*(long *)(*param_1 + (ulong)uVar3 * 8 + -8) != 0) {
        *(uint *)(param_1 + 1) = uVar3;
        return;
      }
      uVar2 = uVar3 - 1;
      bVar1 = 0 < (int)uVar3;
      uVar3 = uVar2;
    } while (uVar2 != 0 && bVar1);
    *(undefined4 *)(param_1 + 1) = 0;
  }
  *(undefined4 *)(param_1 + 2) = 0;
  return;
}


// ===== 0071974c  FUN_0071974c =====

undefined8 FUN_0071974c(long *param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  uint uVar11;
  ulong *puVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  undefined1 auVar30 [16];
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar11 = *(uint *)(param_1 + 1);
  uVar5 = (ulong)(int)uVar11;
  if (uVar11 == 0) goto LAB_00719830;
  if (uVar11 < 4) {
    uVar7 = 0;
    uVar9 = 0;
LAB_007197dc:
    lVar6 = uVar5 - uVar7;
    puVar12 = (ulong *)(*param_1 + uVar7 * 8);
    do {
      lVar6 = lVar6 + -1;
      uVar9 = *puVar12 | uVar9;
      puVar12 = puVar12 + 1;
    } while (lVar6 != 0);
  }
  else {
    bVar13 = 0;
    bVar14 = 0;
    bVar15 = 0;
    bVar16 = 0;
    bVar17 = 0;
    bVar18 = 0;
    bVar19 = 0;
    bVar20 = 0;
    bVar21 = 0;
    bVar22 = 0;
    bVar23 = 0;
    bVar24 = 0;
    bVar25 = 0;
    bVar26 = 0;
    bVar27 = 0;
    bVar28 = 0;
    bVar29 = 0;
    bVar31 = 0;
    bVar32 = 0;
    bVar33 = 0;
    bVar34 = 0;
    bVar35 = 0;
    bVar36 = 0;
    bVar37 = 0;
    bVar38 = 0;
    bVar39 = 0;
    bVar40 = 0;
    bVar41 = 0;
    bVar42 = 0;
    bVar43 = 0;
    bVar44 = 0;
    bVar45 = 0;
    uVar7 = uVar5 & 0xfffffffffffffffc;
    puVar10 = (undefined8 *)(*param_1 + 0x10);
    uVar9 = uVar5 & 0xfffffffffffffffc;
    do {
      uVar46 = puVar10[-1];
      uVar4 = puVar10[-2];
      uVar48 = puVar10[1];
      uVar47 = *puVar10;
      uVar9 = uVar9 - 4;
      puVar10 = puVar10 + 4;
      bVar13 = (byte)uVar4 | bVar13;
      bVar14 = (byte)((ulong)uVar4 >> 8) | bVar14;
      bVar15 = (byte)((ulong)uVar4 >> 0x10) | bVar15;
      bVar16 = (byte)((ulong)uVar4 >> 0x18) | bVar16;
      bVar17 = (byte)((ulong)uVar4 >> 0x20) | bVar17;
      bVar18 = (byte)((ulong)uVar4 >> 0x28) | bVar18;
      bVar19 = (byte)((ulong)uVar4 >> 0x30) | bVar19;
      bVar20 = (byte)((ulong)uVar4 >> 0x38) | bVar20;
      bVar21 = (byte)uVar46 | bVar21;
      bVar22 = (byte)((ulong)uVar46 >> 8) | bVar22;
      bVar23 = (byte)((ulong)uVar46 >> 0x10) | bVar23;
      bVar24 = (byte)((ulong)uVar46 >> 0x18) | bVar24;
      bVar25 = (byte)((ulong)uVar46 >> 0x20) | bVar25;
      bVar26 = (byte)((ulong)uVar46 >> 0x28) | bVar26;
      bVar27 = (byte)((ulong)uVar46 >> 0x30) | bVar27;
      bVar28 = (byte)((ulong)uVar46 >> 0x38) | bVar28;
      bVar29 = (byte)uVar47 | bVar29;
      bVar31 = (byte)((ulong)uVar47 >> 8) | bVar31;
      bVar32 = (byte)((ulong)uVar47 >> 0x10) | bVar32;
      bVar33 = (byte)((ulong)uVar47 >> 0x18) | bVar33;
      bVar34 = (byte)((ulong)uVar47 >> 0x20) | bVar34;
      bVar35 = (byte)((ulong)uVar47 >> 0x28) | bVar35;
      bVar36 = (byte)((ulong)uVar47 >> 0x30) | bVar36;
      bVar37 = (byte)((ulong)uVar47 >> 0x38) | bVar37;
      bVar38 = (byte)uVar48 | bVar38;
      bVar39 = (byte)((ulong)uVar48 >> 8) | bVar39;
      bVar40 = (byte)((ulong)uVar48 >> 0x10) | bVar40;
      bVar41 = (byte)((ulong)uVar48 >> 0x18) | bVar41;
      bVar42 = (byte)((ulong)uVar48 >> 0x20) | bVar42;
      bVar43 = (byte)((ulong)uVar48 >> 0x28) | bVar43;
      bVar44 = (byte)((ulong)uVar48 >> 0x30) | bVar44;
      bVar45 = (byte)((ulong)uVar48 >> 0x38) | bVar45;
    } while (uVar9 != 0);
    bVar29 = bVar29 | bVar13;
    bVar31 = bVar31 | bVar14;
    bVar32 = bVar32 | bVar15;
    bVar33 = bVar33 | bVar16;
    bVar34 = bVar34 | bVar17;
    bVar35 = bVar35 | bVar18;
    bVar36 = bVar36 | bVar19;
    bVar37 = bVar37 | bVar20;
    auVar30[1] = bVar31;
    auVar30[0] = bVar29;
    auVar30[2] = bVar32;
    auVar30[3] = bVar33;
    auVar30[4] = bVar34;
    auVar30[5] = bVar35;
    auVar30[6] = bVar36;
    auVar30[7] = bVar37;
    auVar30[8] = bVar38 | bVar21;
    auVar30[9] = bVar39 | bVar22;
    auVar30[10] = bVar40 | bVar23;
    auVar30[0xb] = bVar41 | bVar24;
    auVar30[0xc] = bVar42 | bVar25;
    auVar30[0xd] = bVar43 | bVar26;
    auVar30[0xe] = bVar44 | bVar27;
    auVar30[0xf] = bVar45 | bVar28;
    auVar3[1] = bVar31;
    auVar3[0] = bVar29;
    auVar3[2] = bVar32;
    auVar3[3] = bVar33;
    auVar3[4] = bVar34;
    auVar3[5] = bVar35;
    auVar3[6] = bVar36;
    auVar3[7] = bVar37;
    auVar3[8] = bVar38 | bVar21;
    auVar3[9] = bVar39 | bVar22;
    auVar3[10] = bVar40 | bVar23;
    auVar3[0xb] = bVar41 | bVar24;
    auVar3[0xc] = bVar42 | bVar25;
    auVar3[0xd] = bVar43 | bVar26;
    auVar3[0xe] = bVar44 | bVar27;
    auVar3[0xf] = bVar45 | bVar28;
    auVar30 = NEON_ext(auVar30,auVar3,8,1);
    uVar9 = CONCAT17(bVar37 | auVar30[7],
                     CONCAT16(bVar36 | auVar30[6],
                              CONCAT15(bVar35 | auVar30[5],
                                       CONCAT14(bVar34 | auVar30[4],
                                                CONCAT13(bVar33 | auVar30[3],
                                                         CONCAT12(bVar32 | auVar30[2],
                                                                  CONCAT11(bVar31 | auVar30[1],
                                                                           bVar29 | auVar30[0]))))))
                    );
    if (uVar7 != uVar5) goto LAB_007197dc;
  }
  if (uVar9 == 0) {
LAB_00719830:
    if (*(int *)((long)param_1 + 0xc) == 0) {
      if ((*(byte *)((long)param_1 + 0x14) >> 1 & 1) != 0) {
        FUN_00777eb4(3,0,0x6a,"../../third_party/boringssl/src/crypto/fipsmodule/bn/bn.cc.inc",0x135
                    );
        return 0;
      }
      puVar12 = (ulong *)FUN_0078ca74(1,8);
      if (puVar12 == (ulong *)0x0) {
        return 0;
      }
      if ((int)param_1[1] != 0) {
        memcpy(puVar12,(void *)*param_1,(long)(int)param_1[1] << 3);
      }
      FUN_0078cb3c(*param_1);
      *param_1 = (long)puVar12;
      *(undefined4 *)((long)param_1 + 0xc) = 1;
    }
    else {
      puVar12 = (ulong *)*param_1;
    }
    *(undefined4 *)(param_1 + 2) = 0;
    *puVar12 = param_2;
    *(undefined4 *)(param_1 + 1) = 1;
    return 1;
  }
  if ((int)param_1[2] == 0) {
    uVar11 = *(uint *)(param_1 + 1);
    if ((int)uVar11 < 1) {
      if (uVar11 != 0) {
        return 1;
      }
    }
    else {
      uVar5 = *(ulong *)*param_1;
      *(ulong *)*param_1 = uVar5 + param_2;
      if (!CARRY8(uVar5,param_2)) {
        return 1;
      }
      lVar6 = 1;
      while (uVar11 = *(uint *)(param_1 + 1), lVar6 < (int)uVar11) {
        lVar8 = *(long *)(*param_1 + lVar6 * 8);
        *(long *)(*param_1 + lVar6 * 8) = lVar8 + 1;
        lVar6 = lVar6 + 1;
        if (lVar8 != -1) {
          return 1;
        }
      }
      param_2 = 1;
      if (uVar11 != (uint)lVar6) {
        return 1;
      }
    }
    uVar4 = FUN_0071962c(param_1,(long)(int)(uVar11 + 1));
    if ((int)uVar4 != 0) {
      *(int *)(param_1 + 1) = (int)param_1[1] + 1;
      *(ulong *)(*param_1 + (ulong)uVar11 * 8) = param_2;
      return 1;
    }
    return uVar4;
  }
  *(undefined4 *)(param_1 + 2) = 0;
  uVar4 = FUN_00719b44(param_1,param_2);
  uVar11 = *(uint *)(param_1 + 1);
  uVar5 = (ulong)(int)uVar11;
  if (uVar11 == 0) {
    return uVar4;
  }
  if (uVar11 < 4) {
    uVar7 = 0;
    uVar9 = 0;
  }
  else {
    bVar13 = 0;
    bVar14 = 0;
    bVar15 = 0;
    bVar16 = 0;
    bVar17 = 0;
    bVar18 = 0;
    bVar19 = 0;
    bVar20 = 0;
    bVar21 = 0;
    bVar22 = 0;
    bVar23 = 0;
    bVar24 = 0;
    bVar25 = 0;
    bVar26 = 0;
    bVar27 = 0;
    bVar28 = 0;
    bVar29 = 0;
    bVar31 = 0;
    bVar32 = 0;
    bVar33 = 0;
    bVar34 = 0;
    bVar35 = 0;
    bVar36 = 0;
    bVar37 = 0;
    bVar38 = 0;
    bVar39 = 0;
    bVar40 = 0;
    bVar41 = 0;
    bVar42 = 0;
    bVar43 = 0;
    bVar44 = 0;
    bVar45 = 0;
    uVar7 = uVar5 & 0xfffffffffffffffc;
    puVar10 = (undefined8 *)(*param_1 + 0x10);
    uVar9 = uVar5 & 0xfffffffffffffffc;
    do {
      uVar47 = puVar10[-1];
      uVar46 = puVar10[-2];
      uVar49 = puVar10[1];
      uVar48 = *puVar10;
      uVar9 = uVar9 - 4;
      puVar10 = puVar10 + 4;
      bVar13 = (byte)uVar46 | bVar13;
      bVar14 = (byte)((ulong)uVar46 >> 8) | bVar14;
      bVar15 = (byte)((ulong)uVar46 >> 0x10) | bVar15;
      bVar16 = (byte)((ulong)uVar46 >> 0x18) | bVar16;
      bVar17 = (byte)((ulong)uVar46 >> 0x20) | bVar17;
      bVar18 = (byte)((ulong)uVar46 >> 0x28) | bVar18;
      bVar19 = (byte)((ulong)uVar46 >> 0x30) | bVar19;
      bVar20 = (byte)((ulong)uVar46 >> 0x38) | bVar20;
      bVar21 = (byte)uVar47 | bVar21;
      bVar22 = (byte)((ulong)uVar47 >> 8) | bVar22;
      bVar23 = (byte)((ulong)uVar47 >> 0x10) | bVar23;
      bVar24 = (byte)((ulong)uVar47 >> 0x18) | bVar24;
      bVar25 = (byte)((ulong)uVar47 >> 0x20) | bVar25;
      bVar26 = (byte)((ulong)uVar47 >> 0x28) | bVar26;
      bVar27 = (byte)((ulong)uVar47 >> 0x30) | bVar27;
      bVar28 = (byte)((ulong)uVar47 >> 0x38) | bVar28;
      bVar29 = (byte)uVar48 | bVar29;
      bVar31 = (byte)((ulong)uVar48 >> 8) | bVar31;
      bVar32 = (byte)((ulong)uVar48 >> 0x10) | bVar32;
      bVar33 = (byte)((ulong)uVar48 >> 0x18) | bVar33;
      bVar34 = (byte)((ulong)uVar48 >> 0x20) | bVar34;
      bVar35 = (byte)((ulong)uVar48 >> 0x28) | bVar35;
      bVar36 = (byte)((ulong)uVar48 >> 0x30) | bVar36;
      bVar37 = (byte)((ulong)uVar48 >> 0x38) | bVar37;
      bVar38 = (byte)uVar49 | bVar38;
      bVar39 = (byte)((ulong)uVar49 >> 8) | bVar39;
      bVar40 = (byte)((ulong)uVar49 >> 0x10) | bVar40;
      bVar41 = (byte)((ulong)uVar49 >> 0x18) | bVar41;
      bVar42 = (byte)((ulong)uVar49 >> 0x20) | bVar42;
      bVar43 = (byte)((ulong)uVar49 >> 0x28) | bVar43;
      bVar44 = (byte)((ulong)uVar49 >> 0x30) | bVar44;
      bVar45 = (byte)((ulong)uVar49 >> 0x38) | bVar45;
    } while (uVar9 != 0);
    bVar29 = bVar29 | bVar13;
    bVar31 = bVar31 | bVar14;
    bVar32 = bVar32 | bVar15;
    bVar33 = bVar33 | bVar16;
    bVar34 = bVar34 | bVar17;
    bVar35 = bVar35 | bVar18;
    bVar36 = bVar36 | bVar19;
    bVar37 = bVar37 | bVar20;
    auVar1[1] = bVar31;
    auVar1[0] = bVar29;
    auVar1[2] = bVar32;
    auVar1[3] = bVar33;
    auVar1[4] = bVar34;
    auVar1[5] = bVar35;
    auVar1[6] = bVar36;
    auVar1[7] = bVar37;
    auVar1[8] = bVar38 | bVar21;
    auVar1[9] = bVar39 | bVar22;
    auVar1[10] = bVar40 | bVar23;
    auVar1[0xb] = bVar41 | bVar24;
    auVar1[0xc] = bVar42 | bVar25;
    auVar1[0xd] = bVar43 | bVar26;
    auVar1[0xe] = bVar44 | bVar27;
    auVar1[0xf] = bVar45 | bVar28;
    auVar2[1] = bVar31;
    auVar2[0] = bVar29;
    auVar2[2] = bVar32;
    auVar2[3] = bVar33;
    auVar2[4] = bVar34;
    auVar2[5] = bVar35;
    auVar2[6] = bVar36;
    auVar2[7] = bVar37;
    auVar2[8] = bVar38 | bVar21;
    auVar2[9] = bVar39 | bVar22;
    auVar2[10] = bVar40 | bVar23;
    auVar2[0xb] = bVar41 | bVar24;
    auVar2[0xc] = bVar42 | bVar25;
    auVar2[0xd] = bVar43 | bVar26;
    auVar2[0xe] = bVar44 | bVar27;
    auVar2[0xf] = bVar45 | bVar28;
    auVar30 = NEON_ext(auVar1,auVar2,8,1);
    uVar9 = CONCAT17(bVar37 | auVar30[7],
                     CONCAT16(bVar36 | auVar30[6],
                              CONCAT15(bVar35 | auVar30[5],
                                       CONCAT14(bVar34 | auVar30[4],
                                                CONCAT13(bVar33 | auVar30[3],
                                                         CONCAT12(bVar32 | auVar30[2],
                                                                  CONCAT11(bVar31 | auVar30[1],
                                                                           bVar29 | auVar30[0]))))))
                    );
    if (uVar7 == uVar5) goto LAB_0071996c;
  }
  lVar6 = uVar5 - uVar7;
  puVar12 = (ulong *)(*param_1 + uVar7 * 8);
  do {
    lVar6 = lVar6 + -1;
    uVar9 = *puVar12 | uVar9;
    puVar12 = puVar12 + 1;
  } while (lVar6 != 0);
LAB_0071996c:
  if (uVar9 != 0) {
    *(uint *)(param_1 + 2) = (uint)((int)param_1[2] == 0);
    return uVar4;
  }
  return uVar4;
}


// ===== 007199e0  FUN_007199e0 =====

bool FUN_007199e0(long *param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
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
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  undefined1 auVar26 [16];
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  
  uVar1 = *(uint *)(param_1 + 1);
  uVar3 = (ulong)(int)uVar1;
  if (uVar1 == 0) {
    return true;
  }
  if (uVar1 < 4) {
    uVar6 = 0;
    uVar7 = 0;
  }
  else {
    bVar9 = 0;
    bVar10 = 0;
    bVar11 = 0;
    bVar12 = 0;
    bVar13 = 0;
    bVar14 = 0;
    bVar15 = 0;
    bVar16 = 0;
    bVar17 = 0;
    bVar18 = 0;
    bVar19 = 0;
    bVar20 = 0;
    bVar21 = 0;
    bVar22 = 0;
    bVar23 = 0;
    bVar24 = 0;
    bVar25 = 0;
    bVar27 = 0;
    bVar28 = 0;
    bVar29 = 0;
    bVar30 = 0;
    bVar31 = 0;
    bVar32 = 0;
    bVar33 = 0;
    bVar34 = 0;
    bVar35 = 0;
    bVar36 = 0;
    bVar37 = 0;
    bVar38 = 0;
    bVar39 = 0;
    bVar40 = 0;
    bVar41 = 0;
    uVar6 = uVar3 & 0xfffffffffffffffc;
    puVar8 = (undefined8 *)(*param_1 + 0x10);
    uVar7 = uVar3 & 0xfffffffffffffffc;
    do {
      uVar43 = puVar8[-1];
      uVar42 = puVar8[-2];
      uVar45 = puVar8[1];
      uVar44 = *puVar8;
      uVar7 = uVar7 - 4;
      puVar8 = puVar8 + 4;
      bVar9 = (byte)uVar42 | bVar9;
      bVar10 = (byte)((ulong)uVar42 >> 8) | bVar10;
      bVar11 = (byte)((ulong)uVar42 >> 0x10) | bVar11;
      bVar12 = (byte)((ulong)uVar42 >> 0x18) | bVar12;
      bVar13 = (byte)((ulong)uVar42 >> 0x20) | bVar13;
      bVar14 = (byte)((ulong)uVar42 >> 0x28) | bVar14;
      bVar15 = (byte)((ulong)uVar42 >> 0x30) | bVar15;
      bVar16 = (byte)((ulong)uVar42 >> 0x38) | bVar16;
      bVar17 = (byte)uVar43 | bVar17;
      bVar18 = (byte)((ulong)uVar43 >> 8) | bVar18;
      bVar19 = (byte)((ulong)uVar43 >> 0x10) | bVar19;
      bVar20 = (byte)((ulong)uVar43 >> 0x18) | bVar20;
      bVar21 = (byte)((ulong)uVar43 >> 0x20) | bVar21;
      bVar22 = (byte)((ulong)uVar43 >> 0x28) | bVar22;
      bVar23 = (byte)((ulong)uVar43 >> 0x30) | bVar23;
      bVar24 = (byte)((ulong)uVar43 >> 0x38) | bVar24;
      bVar25 = (byte)uVar44 | bVar25;
      bVar27 = (byte)((ulong)uVar44 >> 8) | bVar27;
      bVar28 = (byte)((ulong)uVar44 >> 0x10) | bVar28;
      bVar29 = (byte)((ulong)uVar44 >> 0x18) | bVar29;
      bVar30 = (byte)((ulong)uVar44 >> 0x20) | bVar30;
      bVar31 = (byte)((ulong)uVar44 >> 0x28) | bVar31;
      bVar32 = (byte)((ulong)uVar44 >> 0x30) | bVar32;
      bVar33 = (byte)((ulong)uVar44 >> 0x38) | bVar33;
      bVar34 = (byte)uVar45 | bVar34;
      bVar35 = (byte)((ulong)uVar45 >> 8) | bVar35;
      bVar36 = (byte)((ulong)uVar45 >> 0x10) | bVar36;
      bVar37 = (byte)((ulong)uVar45 >> 0x18) | bVar37;
      bVar38 = (byte)((ulong)uVar45 >> 0x20) | bVar38;
      bVar39 = (byte)((ulong)uVar45 >> 0x28) | bVar39;
      bVar40 = (byte)((ulong)uVar45 >> 0x30) | bVar40;
      bVar41 = (byte)((ulong)uVar45 >> 0x38) | bVar41;
    } while (uVar7 != 0);
    bVar25 = bVar25 | bVar9;
    bVar27 = bVar27 | bVar10;
    bVar28 = bVar28 | bVar11;
    bVar29 = bVar29 | bVar12;
    bVar30 = bVar30 | bVar13;
    bVar31 = bVar31 | bVar14;
    bVar32 = bVar32 | bVar15;
    bVar33 = bVar33 | bVar16;
    auVar26[1] = bVar27;
    auVar26[0] = bVar25;
    auVar26[2] = bVar28;
    auVar26[3] = bVar29;
    auVar26[4] = bVar30;
    auVar26[5] = bVar31;
    auVar26[6] = bVar32;
    auVar26[7] = bVar33;
    auVar26[8] = bVar34 | bVar17;
    auVar26[9] = bVar35 | bVar18;
    auVar26[10] = bVar36 | bVar19;
    auVar26[0xb] = bVar37 | bVar20;
    auVar26[0xc] = bVar38 | bVar21;
    auVar26[0xd] = bVar39 | bVar22;
    auVar26[0xe] = bVar40 | bVar23;
    auVar26[0xf] = bVar41 | bVar24;
    auVar2[1] = bVar27;
    auVar2[0] = bVar25;
    auVar2[2] = bVar28;
    auVar2[3] = bVar29;
    auVar2[4] = bVar30;
    auVar2[5] = bVar31;
    auVar2[6] = bVar32;
    auVar2[7] = bVar33;
    auVar2[8] = bVar34 | bVar17;
    auVar2[9] = bVar35 | bVar18;
    auVar2[10] = bVar36 | bVar19;
    auVar2[0xb] = bVar37 | bVar20;
    auVar2[0xc] = bVar38 | bVar21;
    auVar2[0xd] = bVar39 | bVar22;
    auVar2[0xe] = bVar40 | bVar23;
    auVar2[0xf] = bVar41 | bVar24;
    auVar26 = NEON_ext(auVar26,auVar2,8,1);
    uVar7 = CONCAT17(bVar33 | auVar26[7],
                     CONCAT16(bVar32 | auVar26[6],
                              CONCAT15(bVar31 | auVar26[5],
                                       CONCAT14(bVar30 | auVar26[4],
                                                CONCAT13(bVar29 | auVar26[3],
                                                         CONCAT12(bVar28 | auVar26[2],
                                                                  CONCAT11(bVar27 | auVar26[1],
                                                                           bVar25 | auVar26[0]))))))
                    );
    if (uVar6 == uVar3) goto LAB_00719a68;
  }
  lVar4 = uVar3 - uVar6;
  puVar5 = (ulong *)(*param_1 + uVar6 * 8);
  do {
    lVar4 = lVar4 + -1;
    uVar7 = *puVar5 | uVar7;
    puVar5 = puVar5 + 1;
  } while (lVar4 != 0);
LAB_00719a68:
  return uVar7 == 0;
}


// ===== 00719a74  FUN_00719a74 =====

undefined8 FUN_00719a74(undefined8 *param_1,long param_2)

{
  long *__dest;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 2) = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    return 1;
  }
  if (*(int *)((long)param_1 + 0xc) == 0) {
    if ((*(byte *)((long)param_1 + 0x14) >> 1 & 1) != 0) {
      FUN_00777eb4(3,0,0x6a,"../../third_party/boringssl/src/crypto/fipsmodule/bn/bn.cc.inc",0x135);
      return 0;
    }
    __dest = (long *)FUN_0078ca74(1,8);
    if (__dest == (long *)0x0) {
      return 0;
    }
    if (*(int *)(param_1 + 1) != 0) {
      memcpy(__dest,(void *)*param_1,(long)*(int *)(param_1 + 1) << 3);
    }
    FUN_0078cb3c(*param_1);
    *param_1 = __dest;
    *(undefined4 *)((long)param_1 + 0xc) = 1;
  }
  else {
    __dest = (long *)*param_1;
  }
  *(undefined4 *)(param_1 + 2) = 0;
  *__dest = param_2;
  *(undefined4 *)(param_1 + 1) = 1;
  return 1;
}


// ===== 00719b44  FUN_00719b44 =====

undefined8 FUN_00719b44(long *param_1,ulong param_2)

{
  bool bVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  ulong *puVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  int iVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  undefined1 auVar30 [16];
  ulong uVar46;
  ulong uVar47;
  ulong uVar48;
  ulong uVar49;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar6 = *(uint *)(param_1 + 1);
  if (uVar6 == 0) goto LAB_00719c0c;
  uVar7 = (ulong)(int)uVar6;
  puVar5 = (ulong *)*param_1;
  if (uVar6 < 4) {
    uVar9 = 0;
    uVar10 = 0;
LAB_00719bcc:
    lVar8 = uVar7 - uVar9;
    puVar11 = puVar5 + uVar9;
    do {
      lVar8 = lVar8 + -1;
      uVar10 = *puVar11 | uVar10;
      puVar11 = puVar11 + 1;
    } while (lVar8 != 0);
  }
  else {
    bVar13 = 0;
    bVar14 = 0;
    bVar15 = 0;
    bVar16 = 0;
    bVar17 = 0;
    bVar18 = 0;
    bVar19 = 0;
    bVar20 = 0;
    bVar21 = 0;
    bVar22 = 0;
    bVar23 = 0;
    bVar24 = 0;
    bVar25 = 0;
    bVar26 = 0;
    bVar27 = 0;
    bVar28 = 0;
    bVar29 = 0;
    bVar31 = 0;
    bVar32 = 0;
    bVar33 = 0;
    bVar34 = 0;
    bVar35 = 0;
    bVar36 = 0;
    bVar37 = 0;
    bVar38 = 0;
    bVar39 = 0;
    bVar40 = 0;
    bVar41 = 0;
    bVar42 = 0;
    bVar43 = 0;
    bVar44 = 0;
    bVar45 = 0;
    uVar9 = uVar7 & 0xfffffffffffffffc;
    puVar11 = puVar5 + 2;
    uVar10 = uVar7 & 0xfffffffffffffffc;
    do {
      uVar47 = puVar11[-1];
      uVar46 = puVar11[-2];
      uVar49 = puVar11[1];
      uVar48 = *puVar11;
      uVar10 = uVar10 - 4;
      puVar11 = puVar11 + 4;
      bVar13 = (byte)uVar46 | bVar13;
      bVar14 = (byte)(uVar46 >> 8) | bVar14;
      bVar15 = (byte)(uVar46 >> 0x10) | bVar15;
      bVar16 = (byte)(uVar46 >> 0x18) | bVar16;
      bVar17 = (byte)(uVar46 >> 0x20) | bVar17;
      bVar18 = (byte)(uVar46 >> 0x28) | bVar18;
      bVar19 = (byte)(uVar46 >> 0x30) | bVar19;
      bVar20 = (byte)(uVar46 >> 0x38) | bVar20;
      bVar21 = (byte)uVar47 | bVar21;
      bVar22 = (byte)(uVar47 >> 8) | bVar22;
      bVar23 = (byte)(uVar47 >> 0x10) | bVar23;
      bVar24 = (byte)(uVar47 >> 0x18) | bVar24;
      bVar25 = (byte)(uVar47 >> 0x20) | bVar25;
      bVar26 = (byte)(uVar47 >> 0x28) | bVar26;
      bVar27 = (byte)(uVar47 >> 0x30) | bVar27;
      bVar28 = (byte)(uVar47 >> 0x38) | bVar28;
      bVar29 = (byte)uVar48 | bVar29;
      bVar31 = (byte)(uVar48 >> 8) | bVar31;
      bVar32 = (byte)(uVar48 >> 0x10) | bVar32;
      bVar33 = (byte)(uVar48 >> 0x18) | bVar33;
      bVar34 = (byte)(uVar48 >> 0x20) | bVar34;
      bVar35 = (byte)(uVar48 >> 0x28) | bVar35;
      bVar36 = (byte)(uVar48 >> 0x30) | bVar36;
      bVar37 = (byte)(uVar48 >> 0x38) | bVar37;
      bVar38 = (byte)uVar49 | bVar38;
      bVar39 = (byte)(uVar49 >> 8) | bVar39;
      bVar40 = (byte)(uVar49 >> 0x10) | bVar40;
      bVar41 = (byte)(uVar49 >> 0x18) | bVar41;
      bVar42 = (byte)(uVar49 >> 0x20) | bVar42;
      bVar43 = (byte)(uVar49 >> 0x28) | bVar43;
      bVar44 = (byte)(uVar49 >> 0x30) | bVar44;
      bVar45 = (byte)(uVar49 >> 0x38) | bVar45;
    } while (uVar10 != 0);
    bVar29 = bVar29 | bVar13;
    bVar31 = bVar31 | bVar14;
    bVar32 = bVar32 | bVar15;
    bVar33 = bVar33 | bVar16;
    bVar34 = bVar34 | bVar17;
    bVar35 = bVar35 | bVar18;
    bVar36 = bVar36 | bVar19;
    bVar37 = bVar37 | bVar20;
    auVar30[1] = bVar31;
    auVar30[0] = bVar29;
    auVar30[2] = bVar32;
    auVar30[3] = bVar33;
    auVar30[4] = bVar34;
    auVar30[5] = bVar35;
    auVar30[6] = bVar36;
    auVar30[7] = bVar37;
    auVar30[8] = bVar38 | bVar21;
    auVar30[9] = bVar39 | bVar22;
    auVar30[10] = bVar40 | bVar23;
    auVar30[0xb] = bVar41 | bVar24;
    auVar30[0xc] = bVar42 | bVar25;
    auVar30[0xd] = bVar43 | bVar26;
    auVar30[0xe] = bVar44 | bVar27;
    auVar30[0xf] = bVar45 | bVar28;
    auVar3[1] = bVar31;
    auVar3[0] = bVar29;
    auVar3[2] = bVar32;
    auVar3[3] = bVar33;
    auVar3[4] = bVar34;
    auVar3[5] = bVar35;
    auVar3[6] = bVar36;
    auVar3[7] = bVar37;
    auVar3[8] = bVar38 | bVar21;
    auVar3[9] = bVar39 | bVar22;
    auVar3[10] = bVar40 | bVar23;
    auVar3[0xb] = bVar41 | bVar24;
    auVar3[0xc] = bVar42 | bVar25;
    auVar3[0xd] = bVar43 | bVar26;
    auVar3[0xe] = bVar44 | bVar27;
    auVar3[0xf] = bVar45 | bVar28;
    auVar30 = NEON_ext(auVar30,auVar3,8,1);
    uVar10 = CONCAT17(bVar37 | auVar30[7],
                      CONCAT16(bVar36 | auVar30[6],
                               CONCAT15(bVar35 | auVar30[5],
                                        CONCAT14(bVar34 | auVar30[4],
                                                 CONCAT13(bVar33 | auVar30[3],
                                                          CONCAT12(bVar32 | auVar30[2],
                                                                   CONCAT11(bVar31 | auVar30[1],
                                                                            bVar29 | auVar30[0])))))
                              ));
    if (uVar9 != uVar7) goto LAB_00719bcc;
  }
  if (uVar10 != 0) {
    if ((int)param_1[2] != 0) {
      *(undefined4 *)(param_1 + 2) = 0;
      uVar4 = FUN_0071974c(param_1,param_2);
      *(undefined4 *)(param_1 + 2) = 1;
      return uVar4;
    }
    if (0 < (int)uVar6) {
      do {
        if (puVar5[(ulong)uVar6 - 1] != 0) {
          if ((uVar6 == 1) && (uVar7 = param_2 - *puVar5, *puVar5 <= param_2 && uVar7 != 0)) {
            *puVar5 = uVar7;
            *(undefined4 *)(param_1 + 2) = 1;
            return 1;
          }
          break;
        }
        uVar2 = uVar6 - 1;
        bVar1 = 0 < (int)uVar6;
        uVar6 = uVar2;
      } while (uVar2 != 0 && bVar1);
    }
    uVar7 = *puVar5;
    if (uVar7 < param_2) {
      *puVar5 = uVar7 - param_2;
      puVar5 = (ulong *)(*param_1 + 8);
      uVar7 = *puVar5;
      if (uVar7 == 0) {
        param_2 = 1;
        iVar12 = 1;
        do {
          *puVar5 = 0xffffffffffffffff;
          iVar12 = iVar12 + 1;
          puVar5 = (ulong *)(*param_1 + (long)iVar12 * 8);
          uVar7 = *puVar5;
        } while (uVar7 == 0);
        lVar8 = (long)iVar12;
      }
      else {
        param_2 = 1;
        lVar8 = 1;
        iVar12 = 1;
      }
    }
    else {
      iVar12 = 0;
      lVar8 = 0;
    }
    *puVar5 = uVar7 - param_2;
    if ((*(long *)(*param_1 + lVar8 * 8) == 0) && (iVar12 == (int)param_1[1] + -1)) {
      *(int *)(param_1 + 1) = iVar12;
    }
    return 1;
  }
LAB_00719c0c:
  if (*(int *)((long)param_1 + 0xc) == 0) {
    if ((*(byte *)((long)param_1 + 0x14) >> 1 & 1) != 0) {
      FUN_00777eb4(3,0,0x6a,"../../third_party/boringssl/src/crypto/fipsmodule/bn/bn.cc.inc",0x135);
      return 0;
    }
    puVar5 = (ulong *)FUN_0078ca74(1,8);
    if (puVar5 == (ulong *)0x0) {
      return 0;
    }
    if ((int)param_1[1] != 0) {
      memcpy(puVar5,(void *)*param_1,(long)(int)param_1[1] << 3);
    }
    FUN_0078cb3c(*param_1);
    *param_1 = (long)puVar5;
    *(undefined4 *)((long)param_1 + 0xc) = 1;
  }
  else {
    puVar5 = (ulong *)*param_1;
  }
  *(undefined4 *)(param_1 + 2) = 0;
  *puVar5 = param_2;
  *(undefined4 *)(param_1 + 1) = 1;
  *(uint *)(param_1 + 2) = (uint)(*(long *)*param_1 != 0);
  return 1;
}


// ===== 00719d94  FUN_00719d94 =====

undefined8 FUN_00719d94(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  uint uVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  undefined1 auVar30 [16];
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  
  uVar1 = *(uint *)(param_2 + 1);
  uVar2 = *(uint *)(param_3 + 1);
  lVar4 = (long)(int)uVar1;
  uVar12 = uVar2;
  if (((int)uVar1 < (int)uVar2) && (uVar12 = uVar1, uVar1 < uVar2)) {
    uVar9 = (int)uVar2 - lVar4;
    if (uVar9 < 4) {
      uVar10 = 0;
LAB_00719e48:
      lVar7 = (int)uVar2 - lVar4;
      puVar8 = (ulong *)(*param_3 + lVar4 * 8);
      do {
        lVar7 = lVar7 + -1;
        uVar10 = *puVar8 | uVar10;
        puVar8 = puVar8 + 1;
      } while (lVar7 != 0);
    }
    else {
      bVar13 = 0;
      bVar14 = 0;
      bVar15 = 0;
      bVar16 = 0;
      bVar17 = 0;
      bVar18 = 0;
      bVar19 = 0;
      bVar20 = 0;
      bVar21 = 0;
      bVar22 = 0;
      bVar23 = 0;
      bVar24 = 0;
      bVar25 = 0;
      bVar26 = 0;
      bVar27 = 0;
      bVar28 = 0;
      bVar29 = 0;
      bVar31 = 0;
      bVar32 = 0;
      bVar33 = 0;
      bVar34 = 0;
      bVar35 = 0;
      bVar36 = 0;
      bVar37 = 0;
      bVar38 = 0;
      bVar39 = 0;
      bVar40 = 0;
      bVar41 = 0;
      bVar42 = 0;
      bVar43 = 0;
      bVar44 = 0;
      bVar45 = 0;
      lVar7 = lVar4 * 8;
      uVar10 = uVar9 & 0xfffffffffffffffc;
      lVar4 = (uVar9 & 0xfffffffffffffffc) + lVar4;
      puVar11 = (undefined8 *)(*param_3 + lVar7 + 0x10);
      do {
        uVar46 = puVar11[-1];
        uVar5 = puVar11[-2];
        uVar48 = puVar11[1];
        uVar47 = *puVar11;
        uVar10 = uVar10 - 4;
        puVar11 = puVar11 + 4;
        bVar13 = (byte)uVar5 | bVar13;
        bVar14 = (byte)((ulong)uVar5 >> 8) | bVar14;
        bVar15 = (byte)((ulong)uVar5 >> 0x10) | bVar15;
        bVar16 = (byte)((ulong)uVar5 >> 0x18) | bVar16;
        bVar17 = (byte)((ulong)uVar5 >> 0x20) | bVar17;
        bVar18 = (byte)((ulong)uVar5 >> 0x28) | bVar18;
        bVar19 = (byte)((ulong)uVar5 >> 0x30) | bVar19;
        bVar20 = (byte)((ulong)uVar5 >> 0x38) | bVar20;
        bVar21 = (byte)uVar46 | bVar21;
        bVar22 = (byte)((ulong)uVar46 >> 8) | bVar22;
        bVar23 = (byte)((ulong)uVar46 >> 0x10) | bVar23;
        bVar24 = (byte)((ulong)uVar46 >> 0x18) | bVar24;
        bVar25 = (byte)((ulong)uVar46 >> 0x20) | bVar25;
        bVar26 = (byte)((ulong)uVar46 >> 0x28) | bVar26;
        bVar27 = (byte)((ulong)uVar46 >> 0x30) | bVar27;
        bVar28 = (byte)((ulong)uVar46 >> 0x38) | bVar28;
        bVar29 = (byte)uVar47 | bVar29;
        bVar31 = (byte)((ulong)uVar47 >> 8) | bVar31;
        bVar32 = (byte)((ulong)uVar47 >> 0x10) | bVar32;
        bVar33 = (byte)((ulong)uVar47 >> 0x18) | bVar33;
        bVar34 = (byte)((ulong)uVar47 >> 0x20) | bVar34;
        bVar35 = (byte)((ulong)uVar47 >> 0x28) | bVar35;
        bVar36 = (byte)((ulong)uVar47 >> 0x30) | bVar36;
        bVar37 = (byte)((ulong)uVar47 >> 0x38) | bVar37;
        bVar38 = (byte)uVar48 | bVar38;
        bVar39 = (byte)((ulong)uVar48 >> 8) | bVar39;
        bVar40 = (byte)((ulong)uVar48 >> 0x10) | bVar40;
        bVar41 = (byte)((ulong)uVar48 >> 0x18) | bVar41;
        bVar42 = (byte)((ulong)uVar48 >> 0x20) | bVar42;
        bVar43 = (byte)((ulong)uVar48 >> 0x28) | bVar43;
        bVar44 = (byte)((ulong)uVar48 >> 0x30) | bVar44;
        bVar45 = (byte)((ulong)uVar48 >> 0x38) | bVar45;
      } while (uVar10 != 0);
      bVar29 = bVar29 | bVar13;
      bVar31 = bVar31 | bVar14;
      bVar32 = bVar32 | bVar15;
      bVar33 = bVar33 | bVar16;
      bVar34 = bVar34 | bVar17;
      bVar35 = bVar35 | bVar18;
      bVar36 = bVar36 | bVar19;
      bVar37 = bVar37 | bVar20;
      auVar30[1] = bVar31;
      auVar30[0] = bVar29;
      auVar30[2] = bVar32;
      auVar30[3] = bVar33;
      auVar30[4] = bVar34;
      auVar30[5] = bVar35;
      auVar30[6] = bVar36;
      auVar30[7] = bVar37;
      auVar30[8] = bVar38 | bVar21;
      auVar30[9] = bVar39 | bVar22;
      auVar30[10] = bVar40 | bVar23;
      auVar30[0xb] = bVar41 | bVar24;
      auVar30[0xc] = bVar42 | bVar25;
      auVar30[0xd] = bVar43 | bVar26;
      auVar30[0xe] = bVar44 | bVar27;
      auVar30[0xf] = bVar45 | bVar28;
      auVar3[1] = bVar31;
      auVar3[0] = bVar29;
      auVar3[2] = bVar32;
      auVar3[3] = bVar33;
      auVar3[4] = bVar34;
      auVar3[5] = bVar35;
      auVar3[6] = bVar36;
      auVar3[7] = bVar37;
      auVar3[8] = bVar38 | bVar21;
      auVar3[9] = bVar39 | bVar22;
      auVar3[10] = bVar40 | bVar23;
      auVar3[0xb] = bVar41 | bVar24;
      auVar3[0xc] = bVar42 | bVar25;
      auVar3[0xd] = bVar43 | bVar26;
      auVar3[0xe] = bVar44 | bVar27;
      auVar3[0xf] = bVar45 | bVar28;
      auVar30 = NEON_ext(auVar30,auVar3,8,1);
      uVar10 = CONCAT17(bVar37 | auVar30[7],
                        CONCAT16(bVar36 | auVar30[6],
                                 CONCAT15(bVar35 | auVar30[5],
                                          CONCAT14(bVar34 | auVar30[4],
                                                   CONCAT13(bVar33 | auVar30[3],
                                                            CONCAT12(bVar32 | auVar30[2],
                                                                     CONCAT11(bVar31 | auVar30[1],
                                                                              bVar29 | auVar30[0])))
                                                  ))));
      if (uVar9 != (uVar9 & 0xfffffffffffffffc)) goto LAB_00719e48;
    }
    if (uVar10 != 0) {
      uVar5 = 0xbe;
      goto LAB_00719ef4;
    }
  }
  uVar5 = FUN_0071962c(param_1);
  if ((int)uVar5 == 0) {
    return uVar5;
  }
  lVar4 = (long)(int)uVar12;
  uVar9 = FUN_007ac3a0(*param_1,*param_2,*param_3,lVar4);
  iVar6 = (int)param_2[1];
  if ((int)uVar12 < iVar6) {
    do {
      uVar10 = *(ulong *)(*param_2 + lVar4 * 8);
      *(ulong *)(*param_1 + lVar4 * 8) = uVar10 - uVar9;
      lVar4 = lVar4 + 1;
      iVar6 = (int)param_2[1];
      uVar9 = (ulong)(uVar10 < uVar9);
    } while (lVar4 < iVar6);
  }
  if (uVar9 == 0) {
    *(int *)(param_1 + 1) = iVar6;
    *(undefined4 *)(param_1 + 2) = 0;
    return 1;
  }
  uVar5 = 0xce;
LAB_00719ef4:
  FUN_00777eb4(3,0,100,"../../third_party/boringssl/src/crypto/fipsmodule/bn/add.cc.inc",uVar5);
  return 0;
}


// ===== 00719f24  FUN_00719f24 =====

void FUN_00719f24(long *param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
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
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  undefined1 auVar26 [16];
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  
  if (param_2 == 0) goto LAB_00719fb8;
  uVar1 = *(uint *)(param_1 + 1);
  uVar3 = (ulong)(int)uVar1;
  if (uVar1 == 0) goto LAB_00719fb8;
  if (uVar1 < 4) {
    uVar6 = 0;
    uVar7 = 0;
LAB_00719f90:
    lVar4 = uVar3 - uVar6;
    puVar5 = (ulong *)(*param_1 + uVar6 * 8);
    do {
      lVar4 = lVar4 + -1;
      uVar7 = *puVar5 | uVar7;
      puVar5 = puVar5 + 1;
    } while (lVar4 != 0);
  }
  else {
    bVar9 = 0;
    bVar10 = 0;
    bVar11 = 0;
    bVar12 = 0;
    bVar13 = 0;
    bVar14 = 0;
    bVar15 = 0;
    bVar16 = 0;
    bVar17 = 0;
    bVar18 = 0;
    bVar19 = 0;
    bVar20 = 0;
    bVar21 = 0;
    bVar22 = 0;
    bVar23 = 0;
    bVar24 = 0;
    bVar25 = 0;
    bVar27 = 0;
    bVar28 = 0;
    bVar29 = 0;
    bVar30 = 0;
    bVar31 = 0;
    bVar32 = 0;
    bVar33 = 0;
    bVar34 = 0;
    bVar35 = 0;
    bVar36 = 0;
    bVar37 = 0;
    bVar38 = 0;
    bVar39 = 0;
    bVar40 = 0;
    bVar41 = 0;
    uVar6 = uVar3 & 0xfffffffffffffffc;
    puVar8 = (undefined8 *)(*param_1 + 0x10);
    uVar7 = uVar3 & 0xfffffffffffffffc;
    do {
      uVar43 = puVar8[-1];
      uVar42 = puVar8[-2];
      uVar45 = puVar8[1];
      uVar44 = *puVar8;
      uVar7 = uVar7 - 4;
      puVar8 = puVar8 + 4;
      bVar9 = (byte)uVar42 | bVar9;
      bVar10 = (byte)((ulong)uVar42 >> 8) | bVar10;
      bVar11 = (byte)((ulong)uVar42 >> 0x10) | bVar11;
      bVar12 = (byte)((ulong)uVar42 >> 0x18) | bVar12;
      bVar13 = (byte)((ulong)uVar42 >> 0x20) | bVar13;
      bVar14 = (byte)((ulong)uVar42 >> 0x28) | bVar14;
      bVar15 = (byte)((ulong)uVar42 >> 0x30) | bVar15;
      bVar16 = (byte)((ulong)uVar42 >> 0x38) | bVar16;
      bVar17 = (byte)uVar43 | bVar17;
      bVar18 = (byte)((ulong)uVar43 >> 8) | bVar18;
      bVar19 = (byte)((ulong)uVar43 >> 0x10) | bVar19;
      bVar20 = (byte)((ulong)uVar43 >> 0x18) | bVar20;
      bVar21 = (byte)((ulong)uVar43 >> 0x20) | bVar21;
      bVar22 = (byte)((ulong)uVar43 >> 0x28) | bVar22;
      bVar23 = (byte)((ulong)uVar43 >> 0x30) | bVar23;
      bVar24 = (byte)((ulong)uVar43 >> 0x38) | bVar24;
      bVar25 = (byte)uVar44 | bVar25;
      bVar27 = (byte)((ulong)uVar44 >> 8) | bVar27;
      bVar28 = (byte)((ulong)uVar44 >> 0x10) | bVar28;
      bVar29 = (byte)((ulong)uVar44 >> 0x18) | bVar29;
      bVar30 = (byte)((ulong)uVar44 >> 0x20) | bVar30;
      bVar31 = (byte)((ulong)uVar44 >> 0x28) | bVar31;
      bVar32 = (byte)((ulong)uVar44 >> 0x30) | bVar32;
      bVar33 = (byte)((ulong)uVar44 >> 0x38) | bVar33;
      bVar34 = (byte)uVar45 | bVar34;
      bVar35 = (byte)((ulong)uVar45 >> 8) | bVar35;
      bVar36 = (byte)((ulong)uVar45 >> 0x10) | bVar36;
      bVar37 = (byte)((ulong)uVar45 >> 0x18) | bVar37;
      bVar38 = (byte)((ulong)uVar45 >> 0x20) | bVar38;
      bVar39 = (byte)((ulong)uVar45 >> 0x28) | bVar39;
      bVar40 = (byte)((ulong)uVar45 >> 0x30) | bVar40;
      bVar41 = (byte)((ulong)uVar45 >> 0x38) | bVar41;
    } while (uVar7 != 0);
    bVar25 = bVar25 | bVar9;
    bVar27 = bVar27 | bVar10;
    bVar28 = bVar28 | bVar11;
    bVar29 = bVar29 | bVar12;
    bVar30 = bVar30 | bVar13;
    bVar31 = bVar31 | bVar14;
    bVar32 = bVar32 | bVar15;
    bVar33 = bVar33 | bVar16;
    auVar26[1] = bVar27;
    auVar26[0] = bVar25;
    auVar26[2] = bVar28;
    auVar26[3] = bVar29;
    auVar26[4] = bVar30;
    auVar26[5] = bVar31;
    auVar26[6] = bVar32;
    auVar26[7] = bVar33;
    auVar26[8] = bVar34 | bVar17;
    auVar26[9] = bVar35 | bVar18;
    auVar26[10] = bVar36 | bVar19;
    auVar26[0xb] = bVar37 | bVar20;
    auVar26[0xc] = bVar38 | bVar21;
    auVar26[0xd] = bVar39 | bVar22;
    auVar26[0xe] = bVar40 | bVar23;
    auVar26[0xf] = bVar41 | bVar24;
    auVar2[1] = bVar27;
    auVar2[0] = bVar25;
    auVar2[2] = bVar28;
    auVar2[3] = bVar29;
    auVar2[4] = bVar30;
    auVar2[5] = bVar31;
    auVar2[6] = bVar32;
    auVar2[7] = bVar33;
    auVar2[8] = bVar34 | bVar17;
    auVar2[9] = bVar35 | bVar18;
    auVar2[10] = bVar36 | bVar19;
    auVar2[0xb] = bVar37 | bVar20;
    auVar2[0xc] = bVar38 | bVar21;
    auVar2[0xd] = bVar39 | bVar22;
    auVar2[0xe] = bVar40 | bVar23;
    auVar2[0xf] = bVar41 | bVar24;
    auVar26 = NEON_ext(auVar26,auVar2,8,1);
    uVar7 = CONCAT17(bVar33 | auVar26[7],
                     CONCAT16(bVar32 | auVar26[6],
                              CONCAT15(bVar31 | auVar26[5],
                                       CONCAT14(bVar30 | auVar26[4],
                                                CONCAT13(bVar29 | auVar26[3],
                                                         CONCAT12(bVar28 | auVar26[2],
                                                                  CONCAT11(bVar27 | auVar26[1],
                                                                           bVar25 | auVar26[0]))))))
                    );
    if (uVar6 != uVar3) goto LAB_00719f90;
  }
  if (uVar7 != 0) {
    *(undefined4 *)(param_1 + 2) = 1;
    return;
  }
LAB_00719fb8:
  *(undefined4 *)(param_1 + 2) = 0;
  return;
}


// ===== 00719fc0  FUN_00719fc0 =====

ulong FUN_00719fc0(long *param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = (ulong)*(uint *)(param_1 + 1);
  if (0 < (int)*(uint *)(param_1 + 1)) {
    do {
      if (*(long *)(*param_1 + uVar3 * 8 + -8) != 0) {
        return uVar3;
      }
      iVar2 = (int)uVar3;
      uVar1 = iVar2 - 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0 && 0 < iVar2);
    uVar3 = 0;
  }
  return uVar3;
}


// ===== 00719ff4  FUN_00719ff4 =====

void FUN_00719ff4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0078c954(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0x100000000;
  }
  return;
}


// ===== 0071a024  FUN_0071a024 =====

void FUN_0071a024(undefined8 *param_1)

{
  uint uVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    uVar1 = *(uint *)((long)param_1 + 0x14);
    if ((uVar1 >> 1 & 1) == 0) {
      FUN_0078cb3c(*param_1);
      uVar1 = *(uint *)((long)param_1 + 0x14);
    }
    if ((uVar1 & 1) != 0) {
      FUN_0078cb3c(param_1);
      return;
    }
    *param_1 = 0;
  }
  return;
}


// ===== 0071a07c  FUN_0071a07c =====

void FUN_0071a07c(undefined8 *param_1)

{
  uint uVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    uVar1 = *(uint *)((long)param_1 + 0x14);
    if ((uVar1 >> 1 & 1) == 0) {
      FUN_0078cb3c(*param_1);
      uVar1 = *(uint *)((long)param_1 + 0x14);
    }
    if ((uVar1 & 1) != 0) {
      FUN_0078cb3c(param_1);
      return;
    }
    *param_1 = 0;
  }
  return;
}


// ===== 0071a0d4  FUN_0071a0d4 =====

undefined8 * FUN_0071a0d4(undefined8 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)FUN_0078c954(0x18);
    if (puVar3 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0x100000000;
    if (param_1 == puVar3) {
      return puVar3;
    }
    iVar2 = FUN_0071962c(puVar3,(long)*(int *)(param_1 + 1));
    if (iVar2 != 0) {
      iVar2 = *(int *)(param_1 + 1);
      if (iVar2 != 0) {
        memcpy((void *)*puVar3,(void *)*param_1,(long)iVar2 << 3);
        iVar2 = *(int *)(param_1 + 1);
      }
      *(int *)(puVar3 + 1) = iVar2;
      *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(param_1 + 2);
      return puVar3;
    }
    uVar1 = *(uint *)((long)puVar3 + 0x14);
    if ((uVar1 >> 1 & 1) == 0) {
      FUN_0078cb3c(*puVar3);
      uVar1 = *(uint *)((long)puVar3 + 0x14);
    }
    if ((uVar1 & 1) == 0) {
      *puVar3 = 0;
    }
    else {
      FUN_0078cb3c(puVar3);
    }
  }
  return (undefined8 *)0x0;
}


// ===== 0071a18c  FUN_0071a18c =====

undefined8 * FUN_0071a18c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (param_2 != param_1) {
    iVar1 = FUN_0071962c(param_1,(long)*(int *)(param_2 + 1));
    if (iVar1 == 0) {
      param_1 = (undefined8 *)0x0;
    }
    else {
      iVar1 = *(int *)(param_2 + 1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,(void *)*param_2,(long)iVar1 << 3);
        iVar1 = *(int *)(param_2 + 1);
      }
      *(int *)(param_1 + 1) = iVar1;
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    }
  }
  return param_1;
}


// ===== 0071a200  FUN_0071a200 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0071a200(void)

{
  DAT_00d7ef48 = &DAT_002088b8;
  _DAT_00d7ef58 = _UNK_001f3bb8;
  _DAT_00d7ef50 = _DAT_001f3bb0;
  return;
}


// ===== 0071a228  FUN_0071a228 =====

uint FUN_0071a228(long *param_1)

{
  bool bVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar3 = *(uint *)(param_1 + 1);
  if ((int)uVar3 < 1) {
    if (uVar3 != 0) {
      lVar4 = *param_1;
LAB_0071a25c:
      uVar5 = *(ulong *)(lVar4 + (long)(int)(uVar3 - 1) * 8);
      uVar7 = uVar5 >> 0x20;
      uVar2 = uVar5;
      if (uVar7 != 0) {
        uVar2 = uVar7;
      }
      uVar8 = 0;
      if (uVar7 != 0) {
        uVar8 = 0x20;
      }
      uVar7 = uVar2 >> 0x10;
      if (uVar7 != 0) {
        uVar2 = uVar7;
      }
      uVar10 = 0;
      if (uVar7 != 0) {
        uVar10 = 0x10;
      }
      uVar7 = uVar2 >> 8;
      if (uVar7 != 0) {
        uVar2 = uVar7;
      }
      uVar11 = 0;
      if (uVar7 != 0) {
        uVar11 = 8;
      }
      uVar7 = uVar2 >> 4;
      if (uVar7 != 0) {
        uVar2 = uVar7;
      }
      uVar6 = 0;
      if (uVar7 != 0) {
        uVar6 = 4;
      }
      uVar9 = 0;
      if (uVar2 >> 2 != 0) {
        uVar9 = 2;
        uVar2 = uVar2 >> 2;
      }
      uVar9 = (uint)(uVar5 != 0) | (uVar3 - 1) * 0x40 | uVar8 | uVar10 | uVar11 | uVar6 | uVar9;
      if (1 < uVar2) {
        uVar9 = uVar9 + 1;
      }
      return uVar9;
    }
  }
  else {
    lVar4 = *param_1;
    do {
      if (*(long *)(lVar4 + (ulong)uVar3 * 8 + -8) != 0) goto LAB_0071a25c;
      uVar8 = uVar3 - 1;
      bVar1 = 0 < (int)uVar3;
      uVar3 = uVar8;
    } while (uVar8 != 0 && bVar1);
  }
  return 0;
}


// ===== 0071a2fc  FUN_0071a2fc =====

uint FUN_0071a2fc(long *param_1)

{
  bool bVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar3 = *(uint *)(param_1 + 1);
  if ((int)uVar3 < 1) {
    if (uVar3 != 0) {
      lVar4 = *param_1;
LAB_0071a330:
      uVar5 = *(ulong *)(lVar4 + (long)(int)(uVar3 - 1) * 8);
      uVar7 = uVar5 >> 0x20;
      uVar2 = uVar5;
      if (uVar7 != 0) {
        uVar2 = uVar7;
      }
      uVar8 = 0;
      if (uVar7 != 0) {
        uVar8 = 0x20;
      }
      uVar7 = uVar2 >> 0x10;
      if (uVar7 != 0) {
        uVar2 = uVar7;
      }
      uVar10 = 0;
      if (uVar7 != 0) {
        uVar10 = 0x10;
      }
      uVar7 = uVar2 >> 8;
      if (uVar7 != 0) {
        uVar2 = uVar7;
      }
      uVar11 = 0;
      if (uVar7 != 0) {
        uVar11 = 8;
      }
      uVar7 = uVar2 >> 4;
      if (uVar7 != 0) {
        uVar2 = uVar7;
      }
      uVar6 = 0;
      if (uVar7 != 0) {
        uVar6 = 4;
      }
      uVar9 = 0;
      if (uVar2 >> 2 != 0) {
        uVar9 = 2;
        uVar2 = uVar2 >> 2;
      }
      uVar9 = (uint)(uVar5 != 0) | (uVar3 - 1) * 0x40 | uVar8 | uVar10 | uVar11 | uVar6 | uVar9;
      if (1 < uVar2) {
        uVar9 = uVar9 + 1;
      }
      return uVar9 + 7 >> 3;
    }
  }
  else {
    lVar4 = *param_1;
    do {
      if (*(long *)(lVar4 + (ulong)uVar3 * 8 + -8) != 0) goto LAB_0071a330;
      uVar8 = uVar3 - 1;
      bVar1 = 0 < (int)uVar3;
      uVar3 = uVar8;
    } while (uVar8 != 0 && bVar1);
  }
  return 0;
}


// ===== 0071a3d8  FUN_0071a3d8 =====

void FUN_0071a3d8(long param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


// ===== 0071a3e8  FUN_0071a3e8 =====

undefined8 FUN_0071a3e8(undefined8 *param_1)

{
  undefined8 *__dest;
  
  if (*(int *)((long)param_1 + 0xc) == 0) {
    if ((*(byte *)((long)param_1 + 0x14) >> 1 & 1) != 0) {
      FUN_00777eb4(3,0,0x6a,"../../third_party/boringssl/src/crypto/fipsmodule/bn/bn.cc.inc",0x135);
      return 0;
    }
    __dest = (undefined8 *)FUN_0078ca74(1,8);
    if (__dest == (undefined8 *)0x0) {
      return 0;
    }
    if (*(int *)(param_1 + 1) != 0) {
      memcpy(__dest,(void *)*param_1,(long)*(int *)(param_1 + 1) << 3);
    }
    FUN_0078cb3c(*param_1);
    *param_1 = __dest;
    *(undefined4 *)((long)param_1 + 0xc) = 1;
  }
  else {
    __dest = (undefined8 *)*param_1;
  }
  *(undefined4 *)(param_1 + 2) = 0;
  *__dest = 1;
  *(undefined4 *)(param_1 + 1) = 1;
  return 1;
}


// ===== 0071a498  FUN_0071a498 =====

undefined8 FUN_0071a498(void *param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  undefined1 auVar28 [16];
  undefined8 uVar44;
  undefined8 uVar45;
  
  if ((int)param_3[2] == 0) {
    uVar10 = (ulong)(int)param_3[1];
    uVar1 = uVar10 - param_2;
    if (param_2 <= uVar10 && uVar1 != 0) {
      if (uVar1 < 4) {
        uVar6 = 0;
        uVar7 = param_2;
LAB_0071a550:
        lVar8 = uVar10 - uVar7;
        puVar5 = (ulong *)(*param_3 + uVar7 * 8);
        do {
          lVar8 = lVar8 + -1;
          uVar6 = *puVar5 | uVar6;
          puVar5 = puVar5 + 1;
        } while (lVar8 != 0);
      }
      else {
        bVar11 = 0;
        bVar12 = 0;
        bVar13 = 0;
        bVar14 = 0;
        bVar15 = 0;
        bVar16 = 0;
        bVar17 = 0;
        bVar18 = 0;
        bVar19 = 0;
        bVar20 = 0;
        bVar21 = 0;
        bVar22 = 0;
        bVar23 = 0;
        bVar24 = 0;
        bVar25 = 0;
        bVar26 = 0;
        bVar27 = 0;
        bVar29 = 0;
        bVar30 = 0;
        bVar31 = 0;
        bVar32 = 0;
        bVar33 = 0;
        bVar34 = 0;
        bVar35 = 0;
        bVar36 = 0;
        bVar37 = 0;
        bVar38 = 0;
        bVar39 = 0;
        bVar40 = 0;
        bVar41 = 0;
        bVar42 = 0;
        bVar43 = 0;
        uVar6 = uVar1 & 0xfffffffffffffffc;
        uVar7 = param_2 + (uVar1 & 0xfffffffffffffffc);
        puVar9 = (undefined8 *)(*param_3 + param_2 * 8 + 0x10);
        do {
          uVar4 = puVar9[-1];
          uVar3 = puVar9[-2];
          uVar45 = puVar9[1];
          uVar44 = *puVar9;
          uVar6 = uVar6 - 4;
          puVar9 = puVar9 + 4;
          bVar11 = (byte)uVar3 | bVar11;
          bVar12 = (byte)((ulong)uVar3 >> 8) | bVar12;
          bVar13 = (byte)((ulong)uVar3 >> 0x10) | bVar13;
          bVar14 = (byte)((ulong)uVar3 >> 0x18) | bVar14;
          bVar15 = (byte)((ulong)uVar3 >> 0x20) | bVar15;
          bVar16 = (byte)((ulong)uVar3 >> 0x28) | bVar16;
          bVar17 = (byte)((ulong)uVar3 >> 0x30) | bVar17;
          bVar18 = (byte)((ulong)uVar3 >> 0x38) | bVar18;
          bVar19 = (byte)uVar4 | bVar19;
          bVar20 = (byte)((ulong)uVar4 >> 8) | bVar20;
          bVar21 = (byte)((ulong)uVar4 >> 0x10) | bVar21;
          bVar22 = (byte)((ulong)uVar4 >> 0x18) | bVar22;
          bVar23 = (byte)((ulong)uVar4 >> 0x20) | bVar23;
          bVar24 = (byte)((ulong)uVar4 >> 0x28) | bVar24;
          bVar25 = (byte)((ulong)uVar4 >> 0x30) | bVar25;
          bVar26 = (byte)((ulong)uVar4 >> 0x38) | bVar26;
          bVar27 = (byte)uVar44 | bVar27;
          bVar29 = (byte)((ulong)uVar44 >> 8) | bVar29;
          bVar30 = (byte)((ulong)uVar44 >> 0x10) | bVar30;
          bVar31 = (byte)((ulong)uVar44 >> 0x18) | bVar31;
          bVar32 = (byte)((ulong)uVar44 >> 0x20) | bVar32;
          bVar33 = (byte)((ulong)uVar44 >> 0x28) | bVar33;
          bVar34 = (byte)((ulong)uVar44 >> 0x30) | bVar34;
          bVar35 = (byte)((ulong)uVar44 >> 0x38) | bVar35;
          bVar36 = (byte)uVar45 | bVar36;
          bVar37 = (byte)((ulong)uVar45 >> 8) | bVar37;
          bVar38 = (byte)((ulong)uVar45 >> 0x10) | bVar38;
          bVar39 = (byte)((ulong)uVar45 >> 0x18) | bVar39;
          bVar40 = (byte)((ulong)uVar45 >> 0x20) | bVar40;
          bVar41 = (byte)((ulong)uVar45 >> 0x28) | bVar41;
          bVar42 = (byte)((ulong)uVar45 >> 0x30) | bVar42;
          bVar43 = (byte)((ulong)uVar45 >> 0x38) | bVar43;
        } while (uVar6 != 0);
        bVar27 = bVar27 | bVar11;
        bVar29 = bVar29 | bVar12;
        bVar30 = bVar30 | bVar13;
        bVar31 = bVar31 | bVar14;
        bVar32 = bVar32 | bVar15;
        bVar33 = bVar33 | bVar16;
        bVar34 = bVar34 | bVar17;
        bVar35 = bVar35 | bVar18;
        auVar28[1] = bVar29;
        auVar28[0] = bVar27;
        auVar28[2] = bVar30;
        auVar28[3] = bVar31;
        auVar28[4] = bVar32;
        auVar28[5] = bVar33;
        auVar28[6] = bVar34;
        auVar28[7] = bVar35;
        auVar28[8] = bVar36 | bVar19;
        auVar28[9] = bVar37 | bVar20;
        auVar28[10] = bVar38 | bVar21;
        auVar28[0xb] = bVar39 | bVar22;
        auVar28[0xc] = bVar40 | bVar23;
        auVar28[0xd] = bVar41 | bVar24;
        auVar28[0xe] = bVar42 | bVar25;
        auVar28[0xf] = bVar43 | bVar26;
        auVar2[1] = bVar29;
        auVar2[0] = bVar27;
        auVar2[2] = bVar30;
        auVar2[3] = bVar31;
        auVar2[4] = bVar32;
        auVar2[5] = bVar33;
        auVar2[6] = bVar34;
        auVar2[7] = bVar35;
        auVar2[8] = bVar36 | bVar19;
        auVar2[9] = bVar37 | bVar20;
        auVar2[10] = bVar38 | bVar21;
        auVar2[0xb] = bVar39 | bVar22;
        auVar2[0xc] = bVar40 | bVar23;
        auVar2[0xd] = bVar41 | bVar24;
        auVar2[0xe] = bVar42 | bVar25;
        auVar2[0xf] = bVar43 | bVar26;
        auVar28 = NEON_ext(auVar28,auVar2,8,1);
        uVar6 = CONCAT17(bVar35 | auVar28[7],
                         CONCAT16(bVar34 | auVar28[6],
                                  CONCAT15(bVar33 | auVar28[5],
                                           CONCAT14(bVar32 | auVar28[4],
                                                    CONCAT13(bVar31 | auVar28[3],
                                                             CONCAT12(bVar30 | auVar28[2],
                                                                      CONCAT11(bVar29 | auVar28[1],
                                                                               bVar27 | auVar28[0]))
                                                            )))));
        if (uVar1 != (uVar1 & 0xfffffffffffffffc)) goto LAB_0071a550;
      }
      uVar10 = param_2;
      if (uVar6 != 0) {
        uVar3 = 0x66;
        uVar4 = 0x113;
        goto LAB_0071a4cc;
      }
    }
    if (param_2 << 3 != 0) {
      memset(param_1,0,param_2 << 3);
    }
    if (uVar10 << 3 != 0) {
      memcpy(param_1,(void *)*param_3,uVar10 << 3);
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0x6d;
    uVar4 = 0x10c;
LAB_0071a4cc:
    FUN_00777eb4(3,0,uVar3,"../../third_party/boringssl/src/crypto/fipsmodule/bn/bn.cc.inc",uVar4);
    uVar3 = 0;
  }
  return uVar3;
}


// ===== 0071a5cc  FUN_0071a5cc =====

bool FUN_0071a5cc(long param_1)

{
  return *(int *)(param_1 + 0x10) != 0;
}


// ===== 0071a5e0  FUN_0071a5e0 =====

undefined8 FUN_0071a5e0(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  
  if (0xffffffffffffffc0 < param_2) {
    FUN_00777eb4(3,0,0x66,"../../third_party/boringssl/src/crypto/fipsmodule/bn/bn.cc.inc",0x149);
    return 0;
  }
  uVar1 = FUN_0071962c(param_1,param_2 + 0x3f >> 6);
  return uVar1;
}


// ===== 0071a630  FUN_0071a630 =====

undefined8 FUN_0071a630(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  size_t __n;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined1 auVar27 [16];
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  
  uVar4 = (ulong)(int)param_1[1];
  uVar1 = uVar4 - param_2;
  if (uVar4 < param_2 || uVar1 == 0) {
    uVar3 = FUN_0071962c(param_1,param_2);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    __n = (param_2 - (long)(int)param_1[1]) * 8;
    if (__n != 0) {
      memset((void *)(*param_1 + (long)(int)param_1[1] * 8),0,__n);
    }
    goto LAB_0071a72c;
  }
  if (uVar1 < 4) {
    uVar7 = 0;
    uVar8 = param_2;
LAB_0071a6ec:
    lVar5 = uVar4 - uVar8;
    puVar6 = (ulong *)(*param_1 + uVar8 * 8);
    do {
      lVar5 = lVar5 + -1;
      uVar7 = *puVar6 | uVar7;
      puVar6 = puVar6 + 1;
    } while (lVar5 != 0);
  }
  else {
    bVar10 = 0;
    bVar11 = 0;
    bVar12 = 0;
    bVar13 = 0;
    bVar14 = 0;
    bVar15 = 0;
    bVar16 = 0;
    bVar17 = 0;
    bVar18 = 0;
    bVar19 = 0;
    bVar20 = 0;
    bVar21 = 0;
    bVar22 = 0;
    bVar23 = 0;
    bVar24 = 0;
    bVar25 = 0;
    bVar26 = 0;
    bVar28 = 0;
    bVar29 = 0;
    bVar30 = 0;
    bVar31 = 0;
    bVar32 = 0;
    bVar33 = 0;
    bVar34 = 0;
    bVar35 = 0;
    bVar36 = 0;
    bVar37 = 0;
    bVar38 = 0;
    bVar39 = 0;
    bVar40 = 0;
    bVar41 = 0;
    bVar42 = 0;
    uVar7 = uVar1 & 0xfffffffffffffffc;
    uVar8 = param_2 + (uVar1 & 0xfffffffffffffffc);
    puVar9 = (undefined8 *)(*param_1 + param_2 * 8 + 0x10);
    do {
      uVar43 = puVar9[-1];
      uVar3 = puVar9[-2];
      uVar45 = puVar9[1];
      uVar44 = *puVar9;
      uVar7 = uVar7 - 4;
      puVar9 = puVar9 + 4;
      bVar10 = (byte)uVar3 | bVar10;
      bVar11 = (byte)((ulong)uVar3 >> 8) | bVar11;
      bVar12 = (byte)((ulong)uVar3 >> 0x10) | bVar12;
      bVar13 = (byte)((ulong)uVar3 >> 0x18) | bVar13;
      bVar14 = (byte)((ulong)uVar3 >> 0x20) | bVar14;
      bVar15 = (byte)((ulong)uVar3 >> 0x28) | bVar15;
      bVar16 = (byte)((ulong)uVar3 >> 0x30) | bVar16;
      bVar17 = (byte)((ulong)uVar3 >> 0x38) | bVar17;
      bVar18 = (byte)uVar43 | bVar18;
      bVar19 = (byte)((ulong)uVar43 >> 8) | bVar19;
      bVar20 = (byte)((ulong)uVar43 >> 0x10) | bVar20;
      bVar21 = (byte)((ulong)uVar43 >> 0x18) | bVar21;
      bVar22 = (byte)((ulong)uVar43 >> 0x20) | bVar22;
      bVar23 = (byte)((ulong)uVar43 >> 0x28) | bVar23;
      bVar24 = (byte)((ulong)uVar43 >> 0x30) | bVar24;
      bVar25 = (byte)((ulong)uVar43 >> 0x38) | bVar25;
      bVar26 = (byte)uVar44 | bVar26;
      bVar28 = (byte)((ulong)uVar44 >> 8) | bVar28;
      bVar29 = (byte)((ulong)uVar44 >> 0x10) | bVar29;
      bVar30 = (byte)((ulong)uVar44 >> 0x18) | bVar30;
      bVar31 = (byte)((ulong)uVar44 >> 0x20) | bVar31;
      bVar32 = (byte)((ulong)uVar44 >> 0x28) | bVar32;
      bVar33 = (byte)((ulong)uVar44 >> 0x30) | bVar33;
      bVar34 = (byte)((ulong)uVar44 >> 0x38) | bVar34;
      bVar35 = (byte)uVar45 | bVar35;
      bVar36 = (byte)((ulong)uVar45 >> 8) | bVar36;
      bVar37 = (byte)((ulong)uVar45 >> 0x10) | bVar37;
      bVar38 = (byte)((ulong)uVar45 >> 0x18) | bVar38;
      bVar39 = (byte)((ulong)uVar45 >> 0x20) | bVar39;
      bVar40 = (byte)((ulong)uVar45 >> 0x28) | bVar40;
      bVar41 = (byte)((ulong)uVar45 >> 0x30) | bVar41;
      bVar42 = (byte)((ulong)uVar45 >> 0x38) | bVar42;
    } while (uVar7 != 0);
    bVar26 = bVar26 | bVar10;
    bVar28 = bVar28 | bVar11;
    bVar29 = bVar29 | bVar12;
    bVar30 = bVar30 | bVar13;
    bVar31 = bVar31 | bVar14;
    bVar32 = bVar32 | bVar15;
    bVar33 = bVar33 | bVar16;
    bVar34 = bVar34 | bVar17;
    auVar27[1] = bVar28;
    auVar27[0] = bVar26;
    auVar27[2] = bVar29;
    auVar27[3] = bVar30;
    auVar27[4] = bVar31;
    auVar27[5] = bVar32;
    auVar27[6] = bVar33;
    auVar27[7] = bVar34;
    auVar27[8] = bVar35 | bVar18;
    auVar27[9] = bVar36 | bVar19;
    auVar27[10] = bVar37 | bVar20;
    auVar27[0xb] = bVar38 | bVar21;
    auVar27[0xc] = bVar39 | bVar22;
    auVar27[0xd] = bVar40 | bVar23;
    auVar27[0xe] = bVar41 | bVar24;
    auVar27[0xf] = bVar42 | bVar25;
    auVar2[1] = bVar28;
    auVar2[0] = bVar26;
    auVar2[2] = bVar29;
    auVar2[3] = bVar30;
    auVar2[4] = bVar31;
    auVar2[5] = bVar32;
    auVar2[6] = bVar33;
    auVar2[7] = bVar34;
    auVar2[8] = bVar35 | bVar18;
    auVar2[9] = bVar36 | bVar19;
    auVar2[10] = bVar37 | bVar20;
    auVar2[0xb] = bVar38 | bVar21;
    auVar2[0xc] = bVar39 | bVar22;
    auVar2[0xd] = bVar40 | bVar23;
    auVar2[0xe] = bVar41 | bVar24;
    auVar2[0xf] = bVar42 | bVar25;
    auVar27 = NEON_ext(auVar27,auVar2,8,1);
    uVar7 = CONCAT17(bVar34 | auVar27[7],
                     CONCAT16(bVar33 | auVar27[6],
                              CONCAT15(bVar32 | auVar27[5],
                                       CONCAT14(bVar31 | auVar27[4],
                                                CONCAT13(bVar30 | auVar27[3],
                                                         CONCAT12(bVar29 | auVar27[2],
                                                                  CONCAT11(bVar28 | auVar27[1],
                                                                           bVar26 | auVar27[0]))))))
                    );
    if (uVar1 != (uVar1 & 0xfffffffffffffffc)) goto LAB_0071a6ec;
  }
  if (uVar7 != 0) {
    FUN_00777eb4(3,0,0x66,"../../third_party/boringssl/src/crypto/fipsmodule/bn/bn.cc.inc",0x15c);
    return 0;
  }
LAB_0071a72c:
  *(int *)(param_1 + 1) = (int)param_2;
  return 1;
}


// ===== 0071a744  FUN_0071a744 =====

undefined8 * FUN_0071a744(byte *param_1,ulong param_2,undefined8 *param_3)

{
  undefined1 (*pauVar1) [16];
  uint uVar2;
  int iVar3;
  ulong *__s;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  undefined1 (*pauVar9) [16];
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  if (param_3 == (undefined8 *)0x0) {
    puVar12 = (undefined8 *)FUN_0078c954(0x18);
    if (puVar12 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    *puVar12 = 0;
    puVar12[1] = 0;
    puVar12[2] = 0x100000000;
    param_3 = puVar12;
  }
  else {
    puVar12 = (undefined8 *)0x0;
  }
  if (param_2 == 0) {
    *(undefined4 *)(param_3 + 1) = 0;
    return param_3;
  }
  lVar4 = (param_2 - 1 >> 3) + 1;
  iVar3 = FUN_0071962c(param_3,lVar4);
  if (iVar3 == 0) {
    if (puVar12 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    uVar2 = *(uint *)((long)puVar12 + 0x14);
    if ((uVar2 >> 1 & 1) == 0) {
      FUN_0078cb3c(*puVar12);
      uVar2 = *(uint *)((long)puVar12 + 0x14);
    }
    if ((uVar2 & 1) == 0) {
      *puVar12 = 0;
      return (undefined8 *)0x0;
    }
    FUN_0078cb3c(puVar12);
    return (undefined8 *)0x0;
  }
  *(int *)(param_3 + 1) = (int)lVar4;
  *(undefined4 *)(param_3 + 2) = 0;
  if ((ulong)((lVar4 << 0x20) >> 0x1d) < param_2) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar4 = (lVar4 << 0x20) >> 0x20;
  puVar8 = (ulong *)*param_3;
  uVar6 = param_2;
  if (7 < param_2) {
    if (((param_2 - 8 < 0x98) ||
        ((ulong *)((long)puVar8 + ((param_2 & 0xfffffffffffffff8) - 8)) < puVar8)) ||
       ((param_1 + (param_2 & 7) < (byte *)((long)puVar8 + (param_2 & 0xfffffffffffffff8)) &&
        (puVar8 < param_1 + param_2)))) {
LAB_0071a800:
      do {
        uVar6 = param_2 - 8;
        lVar4 = lVar4 + -1;
        uVar7 = (*(ulong *)(param_1 + (param_2 - 8)) & 0xff00ff00ff00ff00) >> 8 |
                (*(ulong *)(param_1 + (param_2 - 8)) & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        __s = puVar8 + 1;
        *puVar8 = uVar7 >> 0x20 | uVar7 << 0x20;
        puVar8 = __s;
        param_2 = uVar6;
      } while (7 < uVar6);
    }
    else {
      lVar13 = 0;
      lVar14 = 0;
      lVar15 = 0;
      uVar7 = (param_2 - 8 >> 3) + 1;
      uVar10 = uVar7 & 0x3ffffffffffffffc;
      puVar5 = puVar8 + 2;
      uVar6 = param_2 + uVar10 * -8;
      __s = puVar8 + uVar10;
      pauVar9 = (undefined1 (*) [16])(param_1 + (param_2 - 0x10));
      uVar11 = uVar7 & 0x3ffffffffffffffc;
      do {
        pauVar1 = pauVar9 + -1;
        auVar16 = *pauVar9;
        lVar4 = lVar4 + -1;
        lVar13 = lVar13 + -1;
        lVar14 = lVar14 + -1;
        lVar15 = lVar15 + -1;
        uVar11 = uVar11 - 4;
        pauVar9 = pauVar9 + -2;
        auVar16 = NEON_rev64(auVar16,1);
        auVar17 = NEON_rev64(*pauVar1,1);
        auVar16 = NEON_ext(auVar16,auVar16,8,1);
        auVar17 = NEON_ext(auVar17,auVar17,8,1);
        puVar5[-1] = auVar16._8_8_;
        puVar5[-2] = auVar16._0_8_;
        puVar5[1] = auVar17._8_8_;
        *puVar5 = auVar17._0_8_;
        puVar5 = puVar5 + 4;
      } while (uVar11 != 0);
      lVar4 = lVar14 + lVar4 + lVar15 + lVar13;
      puVar8 = __s;
      param_2 = uVar6;
      if (uVar7 != uVar10) goto LAB_0071a800;
    }
    puVar8 = __s;
    if (uVar6 == 0) goto LAB_0071a848;
  }
  uVar7 = 0;
  do {
    uVar6 = uVar6 - 1;
    uVar7 = (ulong)*param_1 | uVar7 << 8;
    param_1 = param_1 + 1;
  } while (uVar6 != 0);
  __s = puVar8 + 1;
  *puVar8 = uVar7;
  lVar4 = lVar4 + -1;
LAB_0071a848:
  if (lVar4 << 3 != 0) {
    memset(__s,0,lVar4 << 3);
  }
  return param_3;
}


// ===== 0071a964  FUN_0071a964 =====

ulong FUN_0071a964(ulong *param_1,void *param_2)

{
  bool bVar1;
  undefined1 (*pauVar2) [16];
  ulong uVar3;
  undefined1 *puVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  uint uVar14;
  undefined1 (*pauVar15) [16];
  undefined8 *puVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  
  uVar6 = (uint)param_1[1];
  lVar5 = (long)(int)uVar6;
  if ((int)uVar6 < 1) {
    uVar3 = *param_1;
    if (uVar6 == 0) goto LAB_0071aa48;
LAB_0071a9a8:
    uVar8 = *(ulong *)(uVar3 + (long)(int)(uVar6 - 1) * 8);
    uVar7 = uVar8 >> 0x20;
    uVar20 = uVar8;
    if (uVar7 != 0) {
      uVar20 = uVar7;
    }
    uVar13 = 0;
    if (uVar7 != 0) {
      uVar13 = 0x20;
    }
    uVar7 = uVar20 >> 0x10;
    if (uVar7 != 0) {
      uVar20 = uVar7;
    }
    uVar17 = 0;
    if (uVar7 != 0) {
      uVar17 = 0x10;
    }
    uVar7 = uVar20 >> 8;
    if (uVar7 != 0) {
      uVar20 = uVar7;
    }
    uVar19 = 0;
    if (uVar7 != 0) {
      uVar19 = 8;
    }
    uVar7 = uVar20 >> 4;
    if (uVar7 != 0) {
      uVar20 = uVar7;
    }
    uVar10 = 0;
    if (uVar7 != 0) {
      uVar10 = 4;
    }
    uVar14 = 0;
    if (uVar20 >> 2 != 0) {
      uVar14 = 2;
      uVar20 = uVar20 >> 2;
    }
    uVar14 = (uint)(uVar8 != 0) | (uVar6 - 1) * 0x40 | uVar13 | uVar17 | uVar19 | uVar10 | uVar14;
    if (1 < uVar20) {
      uVar14 = uVar14 + 1;
    }
    uVar20 = (ulong)(uVar14 + 7 >> 3);
  }
  else {
    uVar3 = *param_1;
    do {
      if (*(long *)(uVar3 + (ulong)uVar6 * 8 + -8) != 0) goto LAB_0071a9a8;
      uVar13 = uVar6 - 1;
      bVar1 = 0 < (int)uVar6;
      uVar6 = uVar13;
    } while (uVar13 != 0 && bVar1);
LAB_0071aa48:
    uVar20 = 0;
  }
  uVar7 = lVar5 * 8;
  uVar8 = uVar20;
  if (uVar7 <= uVar20) {
    uVar8 = uVar7;
  }
  if (uVar8 == 0) goto LAB_0071aab8;
  if ((uVar8 < 8) ||
     ((long)param_2 + (uVar20 - uVar8) < uVar3 + uVar8 && uVar3 < (long)param_2 + uVar20)) {
    uVar9 = 0;
  }
  else {
    if (uVar8 < 0x20) {
      uVar18 = 0;
    }
    else {
      uVar9 = uVar8 & 0x7fffffe0;
      puVar12 = (undefined8 *)((long)param_2 + (uVar20 - 0x10));
      pauVar15 = (undefined1 (*) [16])(uVar3 + 0x10);
      uVar18 = uVar8 & 0x7fffffe0;
      do {
        pauVar2 = pauVar15 + -1;
        auVar23 = *pauVar15;
        uVar18 = uVar18 - 0x20;
        pauVar15 = pauVar15 + 2;
        auVar22 = NEON_rev64(*pauVar2,1);
        auVar24 = NEON_rev64(auVar23,1);
        auVar23 = NEON_ext(auVar22,auVar22,8,1);
        auVar22 = NEON_ext(auVar24,auVar24,8,1);
        puVar12[-1] = auVar22._8_8_;
        puVar12[-2] = auVar22._0_8_;
        puVar12[1] = auVar23._8_8_;
        *puVar12 = auVar23._0_8_;
        puVar12 = puVar12 + -4;
      } while (uVar18 != 0);
      if (uVar8 == uVar9) goto LAB_0071aab8;
      uVar18 = uVar9;
      if ((uVar8 & 0x18) == 0) goto LAB_0071aa94;
    }
    uVar9 = uVar8 & 0x7ffffff8;
    puVar12 = (undefined8 *)((uVar20 - uVar18) + (long)param_2);
    lVar5 = uVar18 - uVar9;
    puVar16 = (undefined8 *)(uVar3 + uVar18);
    do {
      puVar12 = puVar12 + -1;
      lVar5 = lVar5 + 8;
      uVar21 = NEON_rev64(*puVar16,1);
      *puVar12 = uVar21;
      puVar16 = puVar16 + 1;
    } while (lVar5 != 0);
    if (uVar8 == uVar9) goto LAB_0071aab8;
  }
LAB_0071aa94:
  lVar5 = uVar8 - uVar9;
  puVar4 = (undefined1 *)(uVar3 + uVar9);
  puVar11 = (undefined1 *)((long)param_2 + ~uVar9 + uVar20);
  do {
    lVar5 = lVar5 + -1;
    *puVar11 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar11 = puVar11 + -1;
  } while (lVar5 != 0);
LAB_0071aab8:
  if (uVar7 < uVar20) {
    memset(param_2,0,uVar20 - uVar8);
  }
  return uVar20;
}


// ===== 0071ab6c  FUN_0071ab6c =====

undefined8 FUN_0071ab6c(void *param_1,ulong param_2,ulong *param_3)

{
  undefined1 (*pauVar1) [16];
  ulong uVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 uVar8;
  uint uVar9;
  ulong uVar10;
  undefined1 *puVar11;
  byte *pbVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined1 (*pauVar15) [16];
  undefined8 *puVar16;
  ulong uVar17;
  byte bVar18;
  undefined8 uVar19;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  byte bVar37;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  undefined1 auVar38 [16];
  undefined8 uVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  
  uVar5 = *param_3;
  uVar4 = (long)(int)param_3[1] * 8;
  uVar2 = uVar4 - param_2;
  if (param_2 <= uVar4 && uVar2 != 0) {
    if (uVar2 < 8) {
      uVar9 = 0;
      uVar13 = param_2;
LAB_0071ac5c:
      lVar7 = uVar13 + (long)(int)param_3[1] * -8;
      pbVar12 = (byte *)(uVar5 + uVar13);
      do {
        bVar3 = lVar7 != -1;
        lVar7 = lVar7 + 1;
        uVar9 = *pbVar12 | uVar9;
        pbVar12 = pbVar12 + 1;
      } while (bVar3);
    }
    else if (uVar2 < 0x20) {
      uVar17 = 0;
      uVar8 = 0;
LAB_0071ac14:
      auVar20._1_15_ = SUB1615(ZEXT816(0),1);
      auVar20[0] = uVar8;
      uVar10 = uVar2 & 0xfffffffffffffff8;
      uVar13 = param_2 + uVar10;
      lVar7 = uVar17 - uVar10;
      puVar14 = (undefined8 *)(uVar5 + uVar17 + param_2);
      do {
        uVar19 = *puVar14;
        lVar7 = lVar7 + 8;
        auVar20._0_8_ =
             CONCAT17((byte)((ulong)uVar19 >> 0x38) | auVar20[7],
                      CONCAT16((byte)((ulong)uVar19 >> 0x30) | auVar20[6],
                               CONCAT15((byte)((ulong)uVar19 >> 0x28) | auVar20[5],
                                        CONCAT14((byte)((ulong)uVar19 >> 0x20) | auVar20[4],
                                                 CONCAT13((byte)((ulong)uVar19 >> 0x18) | auVar20[3]
                                                          ,CONCAT12((byte)((ulong)uVar19 >> 0x10) |
                                                                    auVar20[2],
                                                                    CONCAT11((byte)((ulong)uVar19 >>
                                                                                   8) | auVar20[1],
                                                                             (byte)uVar19 |
                                                                             auVar20[0])))))));
        auVar20._8_8_ = 0;
        puVar14 = puVar14 + 1;
      } while (lVar7 != 0);
      uVar17 = auVar20._0_8_ | auVar20._0_8_ >> 0x20;
      uVar17 = uVar17 | uVar17 >> 0x10;
      uVar9 = (uint)uVar17 | (uint)(uVar17 >> 8);
      if (uVar2 != uVar10) goto LAB_0071ac5c;
    }
    else {
      bVar18 = 0;
      bVar22 = 0;
      bVar23 = 0;
      bVar24 = 0;
      bVar25 = 0;
      bVar26 = 0;
      bVar27 = 0;
      bVar28 = 0;
      bVar29 = 0;
      bVar30 = 0;
      bVar31 = 0;
      bVar32 = 0;
      bVar33 = 0;
      bVar34 = 0;
      bVar35 = 0;
      bVar36 = 0;
      bVar37 = 0;
      bVar39 = 0;
      bVar40 = 0;
      bVar41 = 0;
      bVar42 = 0;
      bVar43 = 0;
      bVar44 = 0;
      bVar45 = 0;
      bVar46 = 0;
      bVar47 = 0;
      bVar48 = 0;
      bVar49 = 0;
      bVar50 = 0;
      bVar51 = 0;
      bVar52 = 0;
      bVar53 = 0;
      uVar17 = uVar2 & 0xffffffffffffffe0;
      puVar14 = (undefined8 *)(param_2 + uVar5 + 0x10);
      uVar13 = uVar2 & 0xffffffffffffffe0;
      do {
        uVar54 = puVar14[-1];
        uVar19 = puVar14[-2];
        uVar56 = puVar14[1];
        uVar55 = *puVar14;
        uVar13 = uVar13 - 0x20;
        puVar14 = puVar14 + 4;
        bVar18 = (byte)uVar19 | bVar18;
        bVar22 = (byte)((ulong)uVar19 >> 8) | bVar22;
        bVar23 = (byte)((ulong)uVar19 >> 0x10) | bVar23;
        bVar24 = (byte)((ulong)uVar19 >> 0x18) | bVar24;
        bVar25 = (byte)((ulong)uVar19 >> 0x20) | bVar25;
        bVar26 = (byte)((ulong)uVar19 >> 0x28) | bVar26;
        bVar27 = (byte)((ulong)uVar19 >> 0x30) | bVar27;
        bVar28 = (byte)((ulong)uVar19 >> 0x38) | bVar28;
        bVar29 = (byte)uVar54 | bVar29;
        bVar30 = (byte)((ulong)uVar54 >> 8) | bVar30;
        bVar31 = (byte)((ulong)uVar54 >> 0x10) | bVar31;
        bVar32 = (byte)((ulong)uVar54 >> 0x18) | bVar32;
        bVar33 = (byte)((ulong)uVar54 >> 0x20) | bVar33;
        bVar34 = (byte)((ulong)uVar54 >> 0x28) | bVar34;
        bVar35 = (byte)((ulong)uVar54 >> 0x30) | bVar35;
        bVar36 = (byte)((ulong)uVar54 >> 0x38) | bVar36;
        bVar37 = (byte)uVar55 | bVar37;
        bVar39 = (byte)((ulong)uVar55 >> 8) | bVar39;
        bVar40 = (byte)((ulong)uVar55 >> 0x10) | bVar40;
        bVar41 = (byte)((ulong)uVar55 >> 0x18) | bVar41;
        bVar42 = (byte)((ulong)uVar55 >> 0x20) | bVar42;
        bVar43 = (byte)((ulong)uVar55 >> 0x28) | bVar43;
        bVar44 = (byte)((ulong)uVar55 >> 0x30) | bVar44;
        bVar45 = (byte)((ulong)uVar55 >> 0x38) | bVar45;
        bVar46 = (byte)uVar56 | bVar46;
        bVar47 = (byte)((ulong)uVar56 >> 8) | bVar47;
        bVar48 = (byte)((ulong)uVar56 >> 0x10) | bVar48;
        bVar49 = (byte)((ulong)uVar56 >> 0x18) | bVar49;
        bVar50 = (byte)((ulong)uVar56 >> 0x20) | bVar50;
        bVar51 = (byte)((ulong)uVar56 >> 0x28) | bVar51;
        bVar52 = (byte)((ulong)uVar56 >> 0x30) | bVar52;
        bVar53 = (byte)((ulong)uVar56 >> 0x38) | bVar53;
      } while (uVar13 != 0);
      auVar21[0] = bVar37 | bVar18;
      auVar21[1] = bVar39 | bVar22;
      auVar21[2] = bVar40 | bVar23;
      auVar21[3] = bVar41 | bVar24;
      auVar21[4] = bVar42 | bVar25;
      auVar21[5] = bVar43 | bVar26;
      auVar21[6] = bVar44 | bVar27;
      auVar21[7] = bVar45 | bVar28;
      auVar21[8] = bVar46 | bVar29;
      auVar21[9] = bVar47 | bVar30;
      auVar21[10] = bVar48 | bVar31;
      auVar21[0xb] = bVar49 | bVar32;
      auVar21[0xc] = bVar50 | bVar33;
      auVar21[0xd] = bVar51 | bVar34;
      auVar21[0xe] = bVar52 | bVar35;
      auVar21[0xf] = bVar53 | bVar36;
      auVar20 = NEON_ext(auVar21,auVar21,8,1);
      uVar13 = CONCAT17(auVar21[7] | auVar20[7],
                        CONCAT16(auVar21[6] | auVar20[6],
                                 CONCAT15(auVar21[5] | auVar20[5],
                                          CONCAT14(auVar21[4] | auVar20[4],
                                                   CONCAT13(auVar21[3] | auVar20[3],
                                                            CONCAT12(auVar21[2] | auVar20[2],
                                                                     CONCAT11(auVar21[1] |
                                                                              auVar20[1],
                                                                              auVar21[0] |
                                                                              auVar20[0])))))));
      uVar13 = uVar13 | uVar13 >> 0x20;
      uVar13 = uVar13 | uVar13 >> 0x10;
      uVar9 = (uint)uVar13 | (uint)(uVar13 >> 8);
      uVar8 = (undefined1)uVar9;
      if (uVar2 != uVar17) {
        if ((uVar2 & 0x18) == 0) {
          uVar13 = param_2 + uVar17;
          goto LAB_0071ac5c;
        }
        goto LAB_0071ac14;
      }
    }
    if ((uVar9 & 0xff) != 0) {
      return 0;
    }
  }
  uVar2 = param_2;
  if (uVar4 <= param_2) {
    uVar2 = uVar4;
  }
  if (uVar2 == 0) goto LAB_0071acdc;
  if ((uVar2 < 8) ||
     (((long)param_1 + (param_2 - uVar2) < uVar5 + uVar2 && (uVar5 < (long)param_1 + param_2)))) {
    uVar13 = 0;
  }
  else {
    if (uVar2 < 0x20) {
      uVar17 = 0;
    }
    else {
      uVar13 = uVar2 & 0xffffffffffffffe0;
      puVar14 = (undefined8 *)((long)param_1 + (param_2 - 0x10));
      pauVar15 = (undefined1 (*) [16])(uVar5 + 0x10);
      uVar17 = uVar2 & 0xffffffffffffffe0;
      do {
        pauVar1 = pauVar15 + -1;
        auVar21 = *pauVar15;
        uVar17 = uVar17 - 0x20;
        pauVar15 = pauVar15 + 2;
        auVar20 = NEON_rev64(*pauVar1,1);
        auVar38 = NEON_rev64(auVar21,1);
        auVar21 = NEON_ext(auVar20,auVar20,8,1);
        auVar20 = NEON_ext(auVar38,auVar38,8,1);
        puVar14[-1] = auVar20._8_8_;
        puVar14[-2] = auVar20._0_8_;
        puVar14[1] = auVar21._8_8_;
        *puVar14 = auVar21._0_8_;
        puVar14 = puVar14 + -4;
      } while (uVar17 != 0);
      if (uVar2 == uVar13) goto LAB_0071acdc;
      uVar17 = uVar13;
      if ((uVar2 & 0x18) == 0) goto LAB_0071acbc;
    }
    uVar13 = uVar2 & 0xfffffffffffffff8;
    puVar14 = (undefined8 *)((param_2 - uVar17) + (long)param_1);
    lVar7 = uVar17 - uVar13;
    puVar16 = (undefined8 *)(uVar5 + uVar17);
    do {
      puVar14 = puVar14 + -1;
      lVar7 = lVar7 + 8;
      uVar19 = NEON_rev64(*puVar16,1);
      *puVar14 = uVar19;
      puVar16 = puVar16 + 1;
    } while (lVar7 != 0);
    if (uVar2 == uVar13) goto LAB_0071acdc;
  }
LAB_0071acbc:
  lVar7 = uVar2 - uVar13;
  puVar6 = (undefined1 *)(uVar5 + uVar13);
  puVar11 = (undefined1 *)((long)param_1 + param_2 + ~uVar13);
  do {
    lVar7 = lVar7 + -1;
    *puVar11 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar11 = puVar11 + -1;
  } while (lVar7 != 0);
LAB_0071acdc:
  if (uVar4 < param_2) {
    memset(param_1,0,param_2 - uVar2);
  }
  return 1;
}


// ===== 0071ada0  FUN_0071ada0 =====

uint FUN_0071ada0(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    iVar1 = *(int *)(param_1 + 0x10);
    if (iVar1 == *(int *)(param_2 + 0x10)) {
      uVar2 = FUN_00719374();
      uVar3 = -uVar2;
      if (iVar1 == 0) {
        uVar3 = uVar2;
      }
    }
    else {
      uVar3 = 0xffffffff;
      if (iVar1 == 0) {
        uVar3 = 1;
      }
    }
    return uVar3;
  }
  uVar3 = (uint)(param_2 != 0);
  if (param_1 != 0) {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}


// ===== 0071ae0c  FUN_0071ae0c =====

ulong FUN_0071ae0c(ulong *param_1,ulong *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_3 != 0) {
    uVar2 = 0;
    do {
      uVar3 = *param_1;
      uVar1 = uVar3 - *param_2;
      uVar4 = -(ulong)(uVar1 == 0);
      param_3 = param_3 + -1;
      uVar2 = uVar4 & uVar2 |
              (long)((uVar1 ^ uVar3 | *param_2 ^ uVar3) ^ uVar3) >> 0x3f &
              (uVar4 ^ 0xffffffffffffffff);
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
    return uVar2 >> 0x1f & 1;
  }
  return 0;
}


// ===== 0071ae60  FUN_0071ae60 =====

undefined4 FUN_0071ae60(long param_1,long param_2)

{
  undefined4 uVar1;
  long *local_30;
  uint local_28;
  undefined4 uStack_24;
  undefined8 local_20;
  long local_18;
  
  local_30 = &local_18;
  uVar1 = 1;
  local_28 = (uint)(param_2 != 0);
  uStack_24 = 1;
  local_20 = 0x200000000;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x10) == 0) {
      local_18 = param_2;
      uVar1 = FUN_00719374(param_1,&local_30);
    }
    else {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}


// ===== 0071aecc  FUN_0071aecc =====

bool FUN_0071aecc(long *param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  long lVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
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
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  undefined1 auVar26 [16];
  ulong uVar42;
  ulong uVar43;
  ulong uVar44;
  ulong uVar45;
  
  if ((int)param_1[2] != 0) {
    return false;
  }
  uVar1 = *(uint *)(param_1 + 1);
  if (uVar1 == 0) {
    uVar6 = 1;
  }
  else {
    puVar4 = (ulong *)*param_1;
    uVar5 = *puVar4;
    uVar6 = uVar5 ^ 1;
    if (1 < (int)uVar1) {
      if (uVar1 < 5) {
        uVar7 = 1;
      }
      else {
        bVar17 = 0;
        bVar18 = 0;
        bVar19 = 0;
        bVar20 = 0;
        bVar21 = 0;
        bVar22 = 0;
        bVar23 = 0;
        bVar24 = 0;
        bVar25 = 0;
        bVar27 = 0;
        bVar28 = 0;
        bVar29 = 0;
        bVar30 = 0;
        bVar31 = 0;
        bVar32 = 0;
        bVar33 = 0;
        bVar34 = 0;
        bVar35 = 0;
        bVar36 = 0;
        bVar37 = 0;
        bVar38 = 0;
        bVar39 = 0;
        bVar40 = 0;
        bVar41 = 0;
        puVar8 = puVar4 + 3;
        bVar9 = (byte)uVar6;
        bVar10 = (byte)(uVar5 >> 8);
        bVar11 = (byte)(uVar5 >> 0x10);
        bVar12 = (byte)(uVar5 >> 0x18);
        bVar13 = (byte)(uVar5 >> 0x20);
        bVar14 = (byte)(uVar5 >> 0x28);
        bVar15 = (byte)(uVar5 >> 0x30);
        bVar16 = (byte)(uVar5 >> 0x38);
        uVar5 = (ulong)uVar1 - 1;
        uVar6 = uVar5 & 0xfffffffffffffffc;
        uVar7 = uVar5 & 0xfffffffffffffffc | 1;
        do {
          uVar43 = puVar8[-1];
          uVar42 = puVar8[-2];
          uVar45 = puVar8[1];
          uVar44 = *puVar8;
          uVar6 = uVar6 - 4;
          puVar8 = puVar8 + 4;
          bVar9 = (byte)uVar42 | bVar9;
          bVar10 = (byte)(uVar42 >> 8) | bVar10;
          bVar11 = (byte)(uVar42 >> 0x10) | bVar11;
          bVar12 = (byte)(uVar42 >> 0x18) | bVar12;
          bVar13 = (byte)(uVar42 >> 0x20) | bVar13;
          bVar14 = (byte)(uVar42 >> 0x28) | bVar14;
          bVar15 = (byte)(uVar42 >> 0x30) | bVar15;
          bVar16 = (byte)(uVar42 >> 0x38) | bVar16;
          bVar17 = (byte)uVar43 | bVar17;
          bVar18 = (byte)(uVar43 >> 8) | bVar18;
          bVar19 = (byte)(uVar43 >> 0x10) | bVar19;
          bVar20 = (byte)(uVar43 >> 0x18) | bVar20;
          bVar21 = (byte)(uVar43 >> 0x20) | bVar21;
          bVar22 = (byte)(uVar43 >> 0x28) | bVar22;
          bVar23 = (byte)(uVar43 >> 0x30) | bVar23;
          bVar24 = (byte)(uVar43 >> 0x38) | bVar24;
          bVar25 = (byte)uVar44 | bVar25;
          bVar27 = (byte)(uVar44 >> 8) | bVar27;
          bVar28 = (byte)(uVar44 >> 0x10) | bVar28;
          bVar29 = (byte)(uVar44 >> 0x18) | bVar29;
          bVar30 = (byte)(uVar44 >> 0x20) | bVar30;
          bVar31 = (byte)(uVar44 >> 0x28) | bVar31;
          bVar32 = (byte)(uVar44 >> 0x30) | bVar32;
          bVar33 = (byte)(uVar44 >> 0x38) | bVar33;
          bVar34 = (byte)uVar45 | bVar34;
          bVar35 = (byte)(uVar45 >> 8) | bVar35;
          bVar36 = (byte)(uVar45 >> 0x10) | bVar36;
          bVar37 = (byte)(uVar45 >> 0x18) | bVar37;
          bVar38 = (byte)(uVar45 >> 0x20) | bVar38;
          bVar39 = (byte)(uVar45 >> 0x28) | bVar39;
          bVar40 = (byte)(uVar45 >> 0x30) | bVar40;
          bVar41 = (byte)(uVar45 >> 0x38) | bVar41;
        } while (uVar6 != 0);
        bVar25 = bVar25 | bVar9;
        bVar27 = bVar27 | bVar10;
        bVar28 = bVar28 | bVar11;
        bVar29 = bVar29 | bVar12;
        bVar30 = bVar30 | bVar13;
        bVar31 = bVar31 | bVar14;
        bVar32 = bVar32 | bVar15;
        bVar33 = bVar33 | bVar16;
        auVar26[1] = bVar27;
        auVar26[0] = bVar25;
        auVar26[2] = bVar28;
        auVar26[3] = bVar29;
        auVar26[4] = bVar30;
        auVar26[5] = bVar31;
        auVar26[6] = bVar32;
        auVar26[7] = bVar33;
        auVar26[8] = bVar34 | bVar17;
        auVar26[9] = bVar35 | bVar18;
        auVar26[10] = bVar36 | bVar19;
        auVar26[0xb] = bVar37 | bVar20;
        auVar26[0xc] = bVar38 | bVar21;
        auVar26[0xd] = bVar39 | bVar22;
        auVar26[0xe] = bVar40 | bVar23;
        auVar26[0xf] = bVar41 | bVar24;
        auVar2[1] = bVar27;
        auVar2[0] = bVar25;
        auVar2[2] = bVar28;
        auVar2[3] = bVar29;
        auVar2[4] = bVar30;
        auVar2[5] = bVar31;
        auVar2[6] = bVar32;
        auVar2[7] = bVar33;
        auVar2[8] = bVar34 | bVar17;
        auVar2[9] = bVar35 | bVar18;
        auVar2[10] = bVar36 | bVar19;
        auVar2[0xb] = bVar37 | bVar20;
        auVar2[0xc] = bVar38 | bVar21;
        auVar2[0xd] = bVar39 | bVar22;
        auVar2[0xe] = bVar40 | bVar23;
        auVar2[0xf] = bVar41 | bVar24;
        auVar26 = NEON_ext(auVar26,auVar2,8,1);
        uVar6 = CONCAT17(bVar33 | auVar26[7],
                         CONCAT16(bVar32 | auVar26[6],
                                  CONCAT15(bVar31 | auVar26[5],
                                           CONCAT14(bVar30 | auVar26[4],
                                                    CONCAT13(bVar29 | auVar26[3],
                                                             CONCAT12(bVar28 | auVar26[2],
                                                                      CONCAT11(bVar27 | auVar26[1],
                                                                               bVar25 | auVar26[0]))
                                                            )))));
        if (uVar5 == (uVar5 & 0xfffffffffffffffc)) goto LAB_0071af7c;
      }
      lVar3 = uVar1 - uVar7;
      puVar4 = puVar4 + uVar7;
      do {
        lVar3 = lVar3 + -1;
        uVar6 = *puVar4 | uVar6;
        puVar4 = puVar4 + 1;
      } while (lVar3 != 0);
    }
  }
LAB_0071af7c:
  return uVar6 == 0;
}


// ===== 0071af88  FUN_0071af88 =====

uint FUN_0071af88(undefined8 *param_1)

{
  if (0 < *(int *)(param_1 + 1)) {
    return *(uint *)*param_1 & 1;
  }
  return 0;
}


