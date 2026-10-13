// ===== 006dbcd4  FUN_006dbcd4 =====

undefined8 * FUN_006dbcd4(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    puVar1 = (undefined8 *)operator_new(0x20);
  }
  else {
    puVar1 = (undefined8 *)FUN_006fdbf0(param_1,0x20);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_00d29370;
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  puVar1[3] = *(undefined8 *)(param_2 + 0x18);
  puVar1[2] = uVar2;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_006dcb04(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  return puVar1;
}


// ===== 006dbd54  FUN_006dbd54 =====

void FUN_006dbd54(ushort *param_1,ulong param_2,long *param_3,long param_4,uint param_5)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  ushort *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  ushort *__dest;
  undefined1 auVar8 [16];
  ushort *local_d0;
  ushort *puStack_c8;
  undefined8 *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long lStack_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  puStack_c8 = (ushort *)&DAT_aaaaaaaaaaaaaaaa;
  local_d0 = (ushort *)&DAT_aaaaaaaaaaaaaaaa;
  uStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  lStack_88 = 0;
  local_90 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  local_78 = *(undefined4 *)PTR_DAT_00d52578;
  local_74 = 0xffff8000;
  if (param_2 < 0x11) {
    if (param_2 == 0) {
      __dest = (ushort *)&uStack_a8;
      uStack_b8 = (undefined1 *)0xaaaaaaaa;
      local_c0 = (undefined8 *)0x0;
      puStack_c8 = __dest;
    }
    else {
      __dest = (ushort *)&uStack_a8;
      memcpy(__dest,param_1,param_2);
      uStack_b8 = (undefined1 *)((ulong)uStack_b8 & 0xffffffff);
      local_c0 = (undefined8 *)0x0;
      puStack_c8 = (ushort *)((long)__dest + param_2);
      if (lStack_88 == 1) {
        lStack_88 = (long)param_1 - (long)__dest;
      }
    }
  }
  else {
    uStack_b8 = (undefined1 *)0x10aaaaaaaa;
    local_c0 = &uStack_a8;
    __dest = param_1;
    puStack_c8 = (ushort *)((long)param_1 + (param_2 - 0x10));
  }
  local_d0 = puStack_c8;
LAB_006dbe4c:
  puVar4 = __dest;
  if (local_d0 <= __dest) {
    iVar2 = (int)__dest - (int)puStack_c8;
    if (uStack_b8._4_4_ == iVar2) {
      puVar4 = (ushort *)0x0;
      if (local_c0 != (undefined8 *)0x0 || iVar2 < 1) {
        puVar4 = __dest;
      }
LAB_006dbedc:
      if ((*(byte *)(param_4 + 9) & 1) != 0) {
        puVar4 = (ushort *)(**(code **)(param_4 + 0x28))(param_3,puVar4,&local_d0);
      }
      uVar7 = 0;
      if (puVar4 != (ushort *)0x0) {
        uVar7 = 0;
        if ((int)local_80 == 0) {
          if ((param_5 >> 1 & 1) == 0) {
            lVar5 = (**(code **)(*param_3 + 0x20))(param_3);
            if ((*(code **)(lVar5 + 0x18) != (code *)0x0) &&
               (uVar6 = (**(code **)(lVar5 + 0x18))(param_3), (uVar6 & 1) == 0)) {
              FUN_006dc5b4(param_3);
              uVar7 = 0;
              goto LAB_006dbf20;
            }
          }
          uVar7 = 1;
        }
      }
LAB_006dbf20:
      if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar7);
      }
      return;
    }
    auVar8 = FUN_006f5260(&local_d0,iVar2,local_74);
    puVar4 = auVar8._0_8_;
    if ((auVar8 & (undefined1  [16])0x1) != (undefined1  [16])0x0) goto LAB_006dbedc;
  }
  puVar1 = (undefined8 *)(param_4 + 0x38 + ((ulong)*puVar4 & (ulong)*(byte *)(param_4 + 8)) * 2);
  puVar4 = (ushort *)
           (*(code *)*puVar1)(param_3,puVar4,&local_d0,puVar1[1] ^ (ulong)*puVar4,param_4,0);
  if ((puVar4 == (ushort *)0x0) || (__dest = puVar4, (int)local_80 != 0)) goto LAB_006dbedc;
  goto LAB_006dbe4c;
}


// ===== 006dbf88  FUN_006dbf88 =====

undefined8 FUN_006dbf88(undefined8 param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)(**(code **)(*param_2 + 0x20))(param_2);
  uVar2 = FUN_006dc27c(puVar1 + 5,*puVar1,*puVar1,param_1);
  (*(code *)puVar1[4])(uVar2,param_2);
  return uVar2;
}


// ===== 006dbff0  FUN_006dbff0 =====

void FUN_006dbff0(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x006dbffc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}


// ===== 006dc000  FUN_006dc000 =====

void FUN_006dc000(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_40 [16];
  
  lVar1 = (**(code **)(*param_1 + 0x20))();
  lVar2 = (**(code **)(*param_2 + 0x20))(param_2);
  if ((lVar1 != lVar2) && (lVar2 = FUN_006f0978(lVar1,lVar2,"data == other_data"), lVar2 != 0)) {
    FUN_006de99c(auStack_40,"../../third_party/protobuf/src/google/protobuf/message_lite.cc",0x52,
                 lVar2);
    uVar3 = FUN_006dc10c(auStack_40,"Invalid call to CheckTypeAndMergeFrom between types ");
    auVar4 = FUN_006dc168(param_1);
    uVar3 = FUN_006de370(uVar3,auVar4._0_8_,auVar4._8_8_);
    uVar3 = FUN_006dc1e0(uVar3," and ");
    auVar4 = FUN_006dc168(param_2);
    FUN_006de370(uVar3,auVar4._0_8_,auVar4._8_8_);
    FUN_006de39c();
                    /* WARNING: Subroutine does not return */
    FUN_006dea94(auStack_40);
  }
                    /* WARNING: Could not recover jumptable at 0x006dc068. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x20))(param_1,param_2);
  return;
}


// ===== 006dc10c  FUN_006dc10c =====

undefined8 FUN_006dc10c(undefined8 param_1,char *param_2)

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


// ===== 006dc168  FUN_006dc168 =====

undefined1  [16] FUN_006dc168(long *param_1)

{
  char *__s;
  long lVar1;
  size_t sVar2;
  undefined1 auVar3 [16];
  
  lVar1 = (**(code **)(*param_1 + 0x20))();
  if ((*(byte *)(lVar1 + 0x3c) & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x006dc1c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar3 = (*(code *)**(undefined8 **)(lVar1 + 0x58))();
    return auVar3;
  }
  __s = (char *)(lVar1 + 0x40);
  if (__s != (char *)0x0) {
    sVar2 = strlen(__s);
    auVar3._8_8_ = sVar2;
    auVar3._0_8_ = __s;
    return auVar3;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/string_view:278: libc++ Hardening assertion __s != nullptr failed: null pointer passed to non-null argument of char_traits<...>::length\n"
            );
}


// ===== 006dc1e0  FUN_006dc1e0 =====

undefined8 FUN_006dc1e0(undefined8 param_1,char *param_2)

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


// ===== 006dc23c  FUN_006dc23c =====

void FUN_006dc23c(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x20))();
  FUN_006dc27c(puVar1 + 5,param_1,*puVar1,param_2);
  return;
}


// ===== 006dc27c  FUN_006dc27c =====

undefined8 * FUN_006dc27c(uint *param_1,undefined8 param_2,undefined8 *param_3,long param_4)

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
  
  if (param_4 == 0) {
    puVar3 = (undefined8 *)operator_new((ulong)*param_1);
  }
  else {
    puVar3 = (undefined8 *)FUN_006fdbf0(param_4,(ulong)*param_1 + 7 & 0x1fffffff8);
  }
  if (-1 < (char)param_1[1]) {
    uVar1 = *param_1;
    uVar4 = (ulong)uVar1;
    if ((char)param_1[1] == '\0') {
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
      uVar8 = *(undefined8 *)((long)param_3 + (uVar4 - 0x10));
      *(undefined8 *)((long)puVar3 + (uVar4 - 8)) = *(undefined8 *)((long)param_3 + (uVar4 - 8));
      *(undefined8 *)((long)puVar3 + (uVar4 - 0x10)) = uVar8;
    }
    else if (uVar1 < 0x41) {
      uVar8 = param_3[2];
      puVar3[3] = param_3[3];
      puVar3[2] = uVar8;
      uVar10 = *(undefined8 *)((long)param_3 + (uVar4 - 0x20));
      uVar9 = *(undefined8 *)((long)param_3 + (uVar4 - 8));
      uVar8 = *(undefined8 *)((long)param_3 + (uVar4 - 0x10));
      *(undefined8 *)((long)puVar3 + (uVar4 - 0x18)) =
           *(undefined8 *)((long)param_3 + (uVar4 - 0x18));
      *(undefined8 *)((long)puVar3 + (uVar4 - 0x20)) = uVar10;
      *(undefined8 *)((long)puVar3 + (uVar4 - 8)) = uVar9;
      *(undefined8 *)((long)puVar3 + (uVar4 - 0x10)) = uVar8;
    }
    else {
      if (0x50 < uVar1) {
        puVar5 = puVar3 + 10;
        puVar6 = param_3 + 10;
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
      uVar10 = *(undefined8 *)((long)param_3 + (uVar4 - 0x20));
      uVar9 = *(undefined8 *)((long)param_3 + (uVar4 - 8));
      uVar8 = *(undefined8 *)((long)param_3 + (uVar4 - 0x10));
      uVar12 = *(undefined8 *)((long)param_3 + (uVar4 - 0x38));
      uVar11 = *(undefined8 *)((long)param_3 + (uVar4 - 0x40));
      uVar14 = *(undefined8 *)((long)param_3 + (uVar4 - 0x28));
      uVar13 = *(undefined8 *)((long)param_3 + (uVar4 - 0x30));
      *(undefined8 *)((long)puVar3 + (uVar4 - 0x18)) =
           *(undefined8 *)((long)param_3 + (uVar4 - 0x18));
      *(undefined8 *)((long)puVar3 + (uVar4 - 0x20)) = uVar10;
      *(undefined8 *)((long)puVar3 + (uVar4 - 8)) = uVar9;
      *(undefined8 *)((long)puVar3 + (uVar4 - 0x10)) = uVar8;
      *(undefined8 *)((long)puVar3 + (uVar4 - 0x38)) = uVar12;
      *(undefined8 *)((long)puVar3 + (uVar4 - 0x40)) = uVar11;
      *(undefined8 *)((long)puVar3 + (uVar4 - 0x28)) = uVar14;
      *(undefined8 *)((long)puVar3 + (uVar4 - 0x30)) = uVar13;
    }
    if (param_4 != 0) {
      for (uVar4 = *(ulong *)(param_1 + 2); uVar4 != 0; uVar4 = uVar4 - 1 & uVar4) {
        uVar7 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        puVar3[LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20)] = param_4;
      }
    }
    *puVar3 = *param_3;
    puVar3[1] = param_4;
    return puVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x006dc450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar3 = (undefined8 *)(**(code **)(param_1 + 2))(param_2,puVar3,param_4);
  return puVar3;
}


// ===== 006dc454  FUN_006dc454 =====

ushort * FUN_006dc454(long *param_1,ushort *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ushort *puVar5;
  undefined1 auVar6 [16];
  
  lVar3 = (**(code **)(*param_1 + 0x20))();
  lVar4 = *(long *)(lVar3 + 8);
  if (lVar4 == 0) {
    lVar4 = (**(code **)(*(long *)(lVar3 + 0x58) + 0x10))(param_1);
  }
  do {
    puVar5 = param_2;
    if ((ushort *)*param_3 <= param_2) {
      iVar2 = (int)param_2 - *(int *)(param_3 + 1);
      if (*(int *)((long)param_3 + 0x1c) == iVar2) {
        if ((0 < iVar2) && (puVar5 = (ushort *)0x0, param_3[2] != 0)) {
          puVar5 = param_2;
        }
LAB_006dc538:
        if ((*(byte *)(lVar4 + 9) & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x006dc578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar5 = (ushort *)(**(code **)(lVar4 + 0x28))(param_1,puVar5,param_3);
          return puVar5;
        }
        return puVar5;
      }
      auVar6 = FUN_006f5260(param_3,iVar2,*(undefined4 *)((long)param_3 + 0x5c));
      puVar5 = auVar6._0_8_;
      if ((auVar6 & (undefined1  [16])0x1) != (undefined1  [16])0x0) goto LAB_006dc538;
    }
    puVar1 = (undefined8 *)(lVar4 + 0x38 + ((ulong)*puVar5 & (ulong)*(byte *)(lVar4 + 8)) * 2);
    puVar5 = (ushort *)(*(code *)*puVar1)(param_1,puVar5,param_3,puVar1[1] ^ (ulong)*puVar5,lVar4,0)
    ;
    if ((puVar5 == (ushort *)0x0) || (param_2 = puVar5, *(int *)(param_3 + 10) != 0))
    goto LAB_006dc538;
  } while( true );
}


// ===== 006dc57c  FUN_006dc57c =====

undefined4 FUN_006dc57c(long *param_1)

{
  long lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x20))();
  return *(undefined4 *)((long)param_1 + (ulong)*(uint *)(lVar1 + 0x38));
}


// ===== 006dc5b4  FUN_006dc5b4 =====

void FUN_006dc5b4(long *param_1)

{
  char *__s;
  long lVar1;
  size_t sVar2;
  undefined1 auVar3 [16];
  void *local_d0 [2];
  char cStack_b9;
  undefined1 auStack_b8 [16];
  undefined8 **local_a8;
  ulong uStack_a0;
  byte bStack_91;
  char *local_90;
  undefined8 uStack_88;
  char *local_80;
  undefined8 uStack_78;
  char *local_70;
  undefined8 uStack_68;
  undefined1 local_60 [16];
  char *local_50;
  undefined8 uStack_48;
  undefined8 **local_40;
  ulong uStack_38;
  
  FUN_006de274(auStack_b8,"../../third_party/protobuf/src/google/protobuf/message_lite.cc",0xd5,0);
  lVar1 = (**(code **)(*param_1 + 0x20))(param_1);
  if ((*(byte *)(lVar1 + 0x3c) & 1) == 0) {
    auVar3 = (*(code *)**(undefined8 **)(lVar1 + 0x58))();
  }
  else {
    __s = (char *)(lVar1 + 0x40);
    if (__s == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/string_view:278: libc++ Hardening assertion __s != nullptr failed: null pointer passed to non-null argument of char_traits<...>::length\n"
                );
    }
    sVar2 = strlen(__s);
    auVar3._8_8_ = sVar2;
    auVar3._0_8_ = __s;
  }
  lVar1 = (**(code **)(*param_1 + 0x20))(param_1);
  if ((*(byte *)(lVar1 + 0x3c) & 1) == 0) {
    (**(code **)(*(long *)(lVar1 + 0x58) + 8))(&local_a8,param_1);
  }
  else {
    FUN_005d3510(&local_a8,"(cannot determine missing fields for lite message)");
  }
  local_90 = "Can\'t ";
  uStack_88 = 6;
  local_80 = "parse";
  uStack_78 = 5;
  local_70 = " message of type \"";
  uStack_68 = 0x12;
  local_50 = "\" because it is missing required fields: ";
  uStack_48 = 0x29;
  uStack_38 = uStack_a0;
  local_40 = local_a8;
  if (-1 < (char)bStack_91) {
    uStack_38 = (ulong)bStack_91;
    local_40 = &local_a8;
  }
  local_60 = auVar3;
  FUN_006f0edc(local_d0,&local_90,6);
  if ((char)bStack_91 < '\0') {
    operator_delete(local_a8);
  }
  FUN_006de32c(auStack_b8,local_d0);
  FUN_006de39c();
  if (cStack_b9 < '\0') {
    operator_delete(local_d0[0]);
  }
  FUN_006de280(auStack_b8);
  return;
}


// ===== 006dc754  FUN_006dc754 =====

void FUN_006dc754(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  (**(code **)(*param_1 + 0x10))();
  lVar1 = (**(code **)(*param_1 + 0x20))(param_1);
  lVar2 = *(long *)(lVar1 + 8);
  if (lVar2 == 0) {
    lVar2 = (**(code **)(*(long *)(lVar1 + 0x58) + 0x10))(param_1);
  }
  FUN_006dbd54(param_2,param_3,param_1,lVar2,1);
  return;
}


// ===== 006dc7d4  FUN_006dc7d4 =====

void FUN_006dc7d4(long *param_1,undefined8 *param_2)

{
  char *__s;
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  size_t sVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined1 auVar11 [16];
  ulong local_b8;
  long local_b0 [2];
  undefined1 *puStack_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined8 local_80;
  int local_78;
  undefined4 uStack_74;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar9 = (long)*(char *)((long)param_2 + 0x17);
  if (lVar9 < 0) {
    lVar9 = param_2[1];
  }
  uVar3 = (**(code **)(*param_1 + 0x18))(param_1);
  if (uVar3 >> 0x1f != 0) {
    FUN_006de274(local_b0,"../../third_party/protobuf/src/google/protobuf/message_lite.cc",600,0);
    lVar9 = (**(code **)(*param_1 + 0x20))(param_1);
    if ((*(byte *)(lVar9 + 0x3c) & 1) == 0) {
      auVar11 = (*(code *)**(undefined8 **)(lVar9 + 0x58))();
    }
    else {
      __s = (char *)(lVar9 + 0x40);
      if (__s == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/string_view:278: libc++ Hardening assertion __s != nullptr failed: null pointer passed to non-null argument of char_traits<...>::length\n"
                  );
      }
      sVar4 = strlen(__s);
      auVar11._8_8_ = sVar4;
      auVar11._0_8_ = __s;
    }
    uVar5 = FUN_006de370(local_b0,auVar11._0_8_,auVar11._8_8_);
    FUN_006dd85c(uVar5," exceeded maximum protobuf size of 2GB: ",0x28);
    local_b8 = uVar3;
    FUN_006dd7ec(uVar5,&local_b8);
    FUN_006de39c();
    FUN_006de280(local_b0);
    goto LAB_006dc940;
  }
  uVar8 = (ulong)*(char *)((long)param_2 + 0x17);
  uVar1 = uVar3 + lVar9;
  puVar10 = param_2;
  if ((long)uVar8 < 0) {
    uVar8 = param_2[1];
    if (uVar8 < uVar1) {
      uVar7 = (uint)(byte)((ulong)param_2[2] >> 0x38);
      lVar6 = (param_2[2] & 0x7fffffffffffffff) - 1;
      goto LAB_006dc870;
    }
    puVar10 = (undefined8 *)*param_2;
LAB_006dc8e4:
    param_2[1] = uVar1;
  }
  else if (uVar8 < uVar1) {
    lVar6 = 0x16;
    uVar7 = (uint)*(char *)((long)param_2 + 0x17);
LAB_006dc870:
    if (lVar6 - uVar8 < uVar1 - uVar8) {
      FUN_0054774c(param_2,lVar6,uVar1 - lVar6,uVar8,uVar8,0,0);
      uVar7 = (uint)*(byte *)((long)param_2 + 0x17);
      param_2[1] = uVar8;
    }
    if ((uVar7 >> 7 & 1) != 0) {
      puVar10 = (undefined8 *)*param_2;
    }
    memset((void *)((long)puVar10 + uVar8),0,uVar1 - uVar8);
    if (*(char *)((long)param_2 + 0x17) < '\0') goto LAB_006dc8e4;
    *(byte *)((long)param_2 + 0x17) = (byte)uVar1 & 0x7f;
  }
  else {
    *(byte *)((long)param_2 + 0x17) = (byte)uVar1;
  }
  *(undefined1 *)((long)puVar10 + uVar1) = 0;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    param_2 = (undefined8 *)*param_2;
  }
  local_b0[0] = (long)param_2 + lVar9 + uVar3;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = 0;
  _local_78 = CONCAT44(0xaaaaaaaa,(uint)(byte)*PTR_DAT_00d52580 << 0x10);
  local_b0[1] = 0;
  (**(code **)(*param_1 + 0x28))(param_1,(long)param_2 + lVar9,local_b0);
LAB_006dc940:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3 >> 0x1f == 0);
}


// ===== 006dca30  FUN_006dca30 =====

void FUN_006dca30(undefined8 param_1,undefined8 *param_2)

{
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    *(undefined1 *)param_2 = 0;
    *(undefined1 *)((long)param_2 + 0x17) = 0;
    FUN_006dc7d4();
    return;
  }
  *(undefined1 *)*param_2 = 0;
  param_2[1] = 0;
  FUN_006dc7d4();
  return;
}


// ===== 006dca58  FUN_006dca58 =====

void FUN_006dca58(undefined8 *param_1,undefined4 param_2)

{
  uint uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = FUN_006dc7d4(param_2,param_1);
  if ((uVar1 & 1) == 0) {
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      *(undefined1 *)*param_1 = 0;
      param_1[1] = 0;
    }
    else {
      *(undefined1 *)param_1 = 0;
      *(undefined1 *)((long)param_1 + 0x17) = 0;
    }
  }
  return;
}


// ===== 006dcab0  FUN_006dcab0 =====

void FUN_006dcab0(ulong *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  if ((*param_1 & 1) == 0) {
    puVar2 = (undefined8 *)FUN_006dcbb4();
    cVar1 = *(char *)((long)puVar2 + 0x17);
  }
  else {
    uVar3 = *param_1 & 0xfffffffffffffffe;
    puVar2 = (undefined8 *)(uVar3 + 8);
    cVar1 = *(char *)(uVar3 + 0x1f);
  }
  if (cVar1 < '\0') {
    *(undefined1 *)*puVar2 = 0;
    puVar2[1] = 0;
  }
  else {
    *(undefined1 *)puVar2 = 0;
    *(undefined1 *)((long)puVar2 + 0x17) = 0;
  }
  return;
}


// ===== 006dcb04  FUN_006dcb04 =====

void FUN_006dcb04(ulong *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  
  if ((*param_1 & 1) == 0) {
    lVar3 = FUN_006dcbb4();
  }
  else {
    lVar3 = (*param_1 & 0xfffffffffffffffe) + 8;
  }
  uVar1 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
  FUN_00547cac(lVar3,puVar2,uVar1);
  return;
}


// ===== 006dcb58  FUN_006dcb58 =====

undefined8 FUN_006dcb58(undefined8 param_1,char *param_2)

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


// ===== 006dcbb4  FUN_006dcbb4 =====

ulong * FUN_006dcbb4(ulong *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  
  uVar2 = *param_1;
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  if (uVar2 == 0) {
    puVar1 = (ulong *)operator_new(0x20);
  }
  else {
    puVar1 = (ulong *)thunk_FUN_006fd758(uVar2,0x20,8,FUN_006dcc30);
  }
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *param_1 = (ulong)puVar1 | 1;
  *puVar1 = uVar2;
  return puVar1 + 1;
}


// ===== 006dcc30  FUN_006dcc30 =====

void FUN_006dcc30(long param_1)

{
  if (-1 < *(char *)(param_1 + 0x1f)) {
    return;
  }
  operator_delete(*(void **)(param_1 + 8));
  return;
}


// ===== 006dcc54  FUN_006dcc54 =====

undefined1 * FUN_006dcc54(long *param_1,undefined1 *param_2)

{
  ulong *puVar1;
  undefined1 *puVar2;
  void *__dest;
  code *pcVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong *local_60;
  uint local_54;
  
  puVar1 = (ulong *)(param_1 + 2);
  do {
    puVar2 = (undefined1 *)*param_1;
    __dest = (void *)param_1[1];
    if (__dest == (void *)0x0) {
      param_1[1] = (long)param_2;
      return puVar2 + (0x10 - (long)param_2);
    }
    if (param_2 < puVar2 || (long)param_2 - (long)puVar2 == 0) {
      memcpy(__dest,param_1 + 2,(long)param_2 - (long)puVar1);
      param_1[1] = param_1[1] + ((long)param_2 - (long)puVar1);
      return (undefined1 *)(*param_1 - (long)param_2);
    }
    if (param_1[6] == 0) {
      *param_1 = (long)(param_1 + 4);
      *(undefined1 *)(param_1 + 7) = 1;
      return (undefined1 *)0x0;
    }
    memcpy(__dest,param_1 + 2,(long)puVar2 - (long)puVar1);
    local_54 = 0xaaaaaaaa;
    do {
      local_60 = (ulong *)&DAT_aaaaaaaaaaaaaaaa;
      uVar4 = (**(code **)(*(long *)param_1[6] + 0x10))((long *)param_1[6],&local_60,&local_54);
      if ((uVar4 & 1) == 0) {
        *(undefined1 *)(param_1 + 7) = 1;
        puVar5 = (ulong *)(param_1 + 2);
        *param_1 = (long)(param_1 + 4);
        goto LAB_006dcd04;
      }
    } while (local_54 == 0);
    puVar5 = (ulong *)*param_1;
    if ((int)local_54 < 0x11) {
      uVar6 = puVar5[1];
      uVar4 = *puVar5;
      param_1[1] = (long)local_60;
      param_1[3] = uVar6;
      *puVar1 = uVar4;
      if (0x20 < local_54) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(0x5512,0x6dcdb8);
        (*pcVar3)();
      }
      *param_1 = (long)puVar1 + (ulong)local_54;
      puVar5 = (ulong *)(param_1 + 2);
    }
    else {
      uVar4 = *puVar5;
      local_60[1] = puVar5[1];
      *local_60 = uVar4;
      *param_1 = (long)local_60 + ((ulong)local_54 - 0x10);
      param_1[1] = 0;
      puVar5 = local_60;
    }
LAB_006dcd04:
    param_2 = (undefined1 *)((long)puVar5 + (long)(int)((long)param_2 - (long)puVar2));
    if ((*(byte *)(param_1 + 7) & 1) != 0) {
      return (undefined1 *)0x0;
    }
  } while( true );
}


// ===== 006dcdb8  FUN_006dcdb8 =====

long * FUN_006dcdb8(long *param_1,long *param_2)

{
  long *plVar1;
  code *pcVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *local_60;
  uint local_54;
  
  plVar1 = param_1 + 2;
  do {
    if ((*(byte *)(param_1 + 7) & 1) != 0) {
      return plVar1;
    }
    plVar6 = (long *)*param_1;
    if (param_1[6] == 0) {
LAB_006dcdf8:
      *(undefined1 *)(param_1 + 7) = 1;
      plVar4 = param_1 + 4;
      plVar5 = param_1 + 2;
      *param_1 = (long)(param_1 + 4);
    }
    else {
      if ((void *)param_1[1] == (void *)0x0) {
        lVar8 = plVar6[1];
        lVar7 = *plVar6;
        plVar4 = param_1 + 4;
        *param_1 = (long)(param_1 + 4);
        param_1[1] = (long)plVar6;
        param_1[3] = lVar8;
        *plVar1 = lVar7;
      }
      else {
        memcpy((void *)param_1[1],param_1 + 2,(long)plVar6 - (long)plVar1);
        local_54 = 0xaaaaaaaa;
        do {
          local_60 = (long *)&DAT_aaaaaaaaaaaaaaaa;
          uVar3 = (**(code **)(*(long *)param_1[6] + 0x10))((long *)param_1[6],&local_60,&local_54);
          if ((uVar3 & 1) == 0) goto LAB_006dcdf8;
        } while (local_54 == 0);
        plVar5 = (long *)*param_1;
        if (0x10 < (int)local_54) {
          lVar7 = *plVar5;
          plVar4 = (long *)((long)local_60 + ((ulong)local_54 - 0x10));
          local_60[1] = plVar5[1];
          *local_60 = lVar7;
          *param_1 = (long)plVar4;
          param_1[1] = 0;
          plVar5 = local_60;
          goto LAB_006dce08;
        }
        lVar8 = plVar5[1];
        lVar7 = *plVar5;
        param_1[1] = (long)local_60;
        param_1[3] = lVar8;
        *plVar1 = lVar7;
        if (0x20 < local_54) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(0x5512,0x6dcef8);
          (*pcVar2)();
        }
        plVar4 = (long *)((long)plVar1 + (ulong)local_54);
        *param_1 = (long)plVar4;
      }
      plVar5 = param_1 + 2;
    }
LAB_006dce08:
    param_2 = (long *)((long)plVar5 + (long)((int)param_2 - (int)plVar6));
    if (param_2 < plVar4) {
      return param_2;
    }
  } while( true );
}


// ===== 006dcef8  FUN_006dcef8 =====

long FUN_006dcef8(long *param_1,void *param_2,int param_3,long *param_4)

{
  long *plVar1;
  code *pcVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  size_t __n;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  long *local_70;
  uint local_64;
  
  puVar7 = (undefined1 *)((*param_1 - (long)param_4) + 0x10);
  if ((int)puVar7 < param_3) {
    plVar1 = param_1 + 2;
    do {
      __n = (size_t)(int)puVar7;
      memcpy(param_4,param_2,__n);
      param_3 = param_3 - (int)puVar7;
      param_2 = (void *)((long)param_2 + __n);
      param_4 = (long *)((long)param_4 + __n);
      plVar4 = (long *)*param_1;
      do {
        if ((*(byte *)(param_1 + 7) & 1) != 0) {
          param_4 = param_1 + 2;
          plVar5 = plVar4;
          break;
        }
        if (param_1[6] == 0) {
LAB_006dcf78:
          plVar6 = param_1 + 2;
          *param_1 = (long)(param_1 + 4);
          *(undefined1 *)(param_1 + 7) = 1;
          plVar5 = param_1 + 4;
        }
        else {
          if ((void *)param_1[1] == (void *)0x0) {
            lVar9 = plVar4[1];
            lVar8 = *plVar4;
            plVar5 = param_1 + 4;
            *param_1 = (long)(param_1 + 4);
            param_1[1] = (long)plVar4;
            param_1[3] = lVar9;
            *plVar1 = lVar8;
          }
          else {
            memcpy((void *)param_1[1],param_1 + 2,(long)plVar4 - (long)plVar1);
            local_64 = 0xaaaaaaaa;
            do {
              local_70 = (long *)&DAT_aaaaaaaaaaaaaaaa;
              uVar3 = (**(code **)(*(long *)param_1[6] + 0x10))
                                ((long *)param_1[6],&local_70,&local_64);
              if ((uVar3 & 1) == 0) goto LAB_006dcf78;
            } while (local_64 == 0);
            plVar6 = (long *)*param_1;
            if (0x10 < (int)local_64) {
              lVar8 = *plVar6;
              plVar5 = (long *)((long)local_70 + ((ulong)local_64 - 0x10));
              local_70[1] = plVar6[1];
              *local_70 = lVar8;
              *param_1 = (long)plVar5;
              param_1[1] = 0;
              plVar6 = local_70;
              goto LAB_006dcf8c;
            }
            lVar9 = plVar6[1];
            lVar8 = *plVar6;
            param_1[1] = (long)local_70;
            param_1[3] = lVar9;
            *plVar1 = lVar8;
            if (0x20 < local_64) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(0x5512,0x6dd0b8);
              (*pcVar2)();
            }
            plVar5 = (long *)((long)plVar1 + (ulong)local_64);
            *param_1 = (long)plVar5;
          }
          plVar6 = param_1 + 2;
        }
LAB_006dcf8c:
        param_4 = (long *)((long)plVar6 + (long)((int)param_4 - (int)plVar4));
        plVar4 = plVar5;
      } while (plVar5 <= param_4);
      puVar7 = (undefined1 *)((long)plVar5 + (0x10 - (long)param_4));
    } while ((int)puVar7 < param_3);
  }
  memcpy(param_4,param_2,(long)param_3);
  return (long)param_4 + (long)param_3;
}


// ===== 006dd0b8  FUN_006dd0b8 =====

byte * FUN_006dd0b8(long *param_1,int param_2,void *param_3,ulong param_4,byte *param_5)

{
  ulong uVar1;
  byte bVar2;
  undefined4 uVar3;
  byte *pbVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  
  if ((byte *)*param_1 <= param_5) {
    param_5 = (byte *)FUN_006dcdb8(param_1,param_5);
  }
  uVar6 = param_2 << 3 | 2;
  pbVar4 = param_5;
  if (0x7f < (uint)(param_2 << 3)) {
    do {
      uVar8 = uVar6 >> 0xe;
      bVar2 = (byte)uVar6;
      uVar6 = uVar6 >> 7;
      param_5 = pbVar4 + 1;
      *pbVar4 = bVar2 | 0x80;
      pbVar4 = param_5;
    } while (uVar8 != 0);
  }
  uVar8 = (uint)param_4;
  pbVar4 = param_5 + 1;
  *param_5 = (byte)uVar6;
  uVar7 = param_4 & 0xffffffff;
  uVar6 = uVar8;
  if (0x7f < uVar8) {
    do {
      param_5 = pbVar4;
      uVar1 = uVar7 >> 0xe;
      bVar2 = (byte)uVar7;
      uVar6 = (uint)uVar7 >> 7;
      uVar7 = (ulong)uVar6;
      pbVar4 = param_5 + 1;
      *param_5 = bVar2 | 0x80;
    } while (uVar1 != 0);
  }
  *pbVar4 = (byte)uVar6;
  param_5 = param_5 + 2;
  if (*(char *)((long)param_1 + 0x39) == '\x01') {
    lVar5 = *param_1 - (long)param_5;
    if (lVar5 + 0x10 <= (long)(int)uVar8) {
      if ((*(byte *)(param_1 + 7) & 1) == 0) {
        uVar3 = FUN_006dcc54(param_1,param_5);
        (**(code **)(*(long *)param_1[6] + 0x18))((long *)param_1[6],uVar3);
        param_5 = (byte *)(param_1 + 2);
        *param_1 = (long)param_5;
        param_1[1] = (long)param_5;
      }
      uVar7 = (**(code **)(*(long *)param_1[6] + 0x28))
                        ((long *)param_1[6],param_3,param_4 & 0xffffffff);
      if ((uVar7 & 1) != 0) {
        return param_5;
      }
      *(undefined1 *)(param_1 + 7) = 1;
      *param_1 = (long)(param_1 + 4);
      return (byte *)(param_1 + 2);
    }
  }
  else {
    lVar5 = *param_1 - (long)param_5;
  }
  if ((int)uVar8 <= lVar5) {
    memcpy(param_5,param_3,param_4 & 0xffffffff);
    return param_5 + (int)uVar8;
  }
  pbVar4 = (byte *)FUN_006dcef8(param_1,param_3,param_4 & 0xffffffff,param_5);
  return pbVar4;
}


// ===== 006dd25c  FUN_006dd25c =====

byte * FUN_006dd25c(long *param_1,int param_2,void *param_3,ulong param_4,byte *param_5)

{
  ulong uVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  
  if ((byte *)*param_1 <= param_5) {
    param_5 = (byte *)FUN_006dcdb8(param_1,param_5);
  }
  uVar4 = param_2 << 3 | 2;
  pbVar3 = param_5;
  if (0x7f < (uint)(param_2 << 3)) {
    do {
      uVar6 = uVar4 >> 0xe;
      bVar2 = (byte)uVar4;
      uVar4 = uVar4 >> 7;
      param_5 = pbVar3 + 1;
      *pbVar3 = bVar2 | 0x80;
      pbVar3 = param_5;
    } while (uVar6 != 0);
  }
  uVar6 = (uint)param_4;
  pbVar3 = param_5 + 1;
  *param_5 = (byte)uVar4;
  uVar5 = param_4 & 0xffffffff;
  uVar4 = uVar6;
  if (0x7f < uVar6) {
    do {
      param_5 = pbVar3;
      uVar1 = uVar5 >> 0xe;
      bVar2 = (byte)uVar5;
      uVar4 = (uint)uVar5 >> 7;
      uVar5 = (ulong)uVar4;
      pbVar3 = param_5 + 1;
      *param_5 = bVar2 | 0x80;
    } while (uVar1 != 0);
  }
  *pbVar3 = (byte)uVar4;
  param_5 = param_5 + 2;
  if (*param_1 - (long)param_5 < (long)(int)uVar6) {
    pbVar3 = (byte *)FUN_006dcef8(param_1,param_3,param_4 & 0xffffffff,param_5);
    return pbVar3;
  }
  memcpy(param_5,param_3,param_4 & 0xffffffff);
  return param_5 + (int)uVar6;
}


// ===== 006dd370  FUN_006dd370 =====

void FUN_006dd370(long *param_1)

{
  undefined4 uVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[8];
  if ((*(byte *)(param_1 + 7) & 1) == 0) {
    uVar1 = FUN_006dcc54(param_1);
    (**(code **)(*(long *)param_1[6] + 0x18))((long *)param_1[6],uVar1);
    plVar2 = param_1 + 2;
    *param_1 = (long)plVar2;
    param_1[1] = (long)plVar2;
  }
  param_1[8] = (long)plVar2;
  return;
}


// ===== 006dd3cc  FUN_006dd3cc =====

void FUN_006dd3cc(undefined8 *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  byte *pbVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *puVar10;
  
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  if ((((long)(char)*param_2 & 1U) == 0) ||
     (puVar7 = *(ulong **)(param_2 + 8), puVar7 == (ulong *)0x0)) {
    uVar8 = (ulong)(long)(char)*param_2 >> 1;
    param_1[3] = uVar8;
    pbVar6 = param_2 + 1;
    if ((*param_2 & 1) != 0) {
      pbVar6 = (byte *)0x0;
    }
    goto joined_r0x006dd4a8;
  }
  uVar8 = *puVar7;
  param_1[3] = uVar8;
  if (uVar8 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  if (*(char *)((long)puVar7 + 0xc) == '\x02') {
    puVar7 = (ulong *)puVar7[2];
    if (*(char *)((long)puVar7 + 0xc) != '\x03') goto LAB_006dd4d8;
LAB_006dd41c:
    bVar1 = *(byte *)((long)puVar7 + 0xd);
    uVar8 = (ulong)bVar1;
    *(uint *)(param_1 + 5) = (uint)bVar1;
    bVar2 = *(byte *)((long)puVar7 + 0xe);
    uVar9 = (ulong)bVar2;
    param_1[(ulong)(uint)bVar1 + 7] = puVar7;
    if (0xb < bVar1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(0x5512,0x6dd55c);
      (*pcVar4)();
    }
    *(byte *)((long)param_1 + uVar8 + 0x2c) = bVar2;
    puVar10 = puVar7;
    if (bVar1 != 0) {
      do {
        puVar10 = (ulong *)puVar10[uVar9 + 2];
        bVar5 = uVar8 != 0;
        uVar3 = uVar8 - 1;
        param_1[uVar8 + 6] = puVar10;
        uVar9 = (ulong)*(byte *)((long)puVar10 + 0xe);
        *(byte *)((long)param_1 + uVar8 + 0x2b) = *(byte *)((long)puVar10 + 0xe);
        uVar8 = uVar3;
      } while (bVar5 && uVar3 != 0);
    }
    uVar8 = *puVar7;
    puVar7 = *(ulong **)(param_1[7] + uVar9 * 8 + 0x10);
    param_1[4] = uVar8 - *puVar7;
  }
  else {
    if (*(char *)((long)puVar7 + 0xc) == '\x03') goto LAB_006dd41c;
LAB_006dd4d8:
    param_1[2] = puVar7;
  }
  bVar1 = *(byte *)((long)puVar7 + 0xc);
  if (bVar1 == 1) {
    uVar9 = puVar7[2];
    bVar1 = *(byte *)((long)puVar7[3] + 0xc);
    puVar10 = (ulong *)puVar7[3];
  }
  else {
    uVar9 = 0;
    puVar10 = puVar7;
  }
  uVar8 = *puVar7;
  if (bVar1 < 6) {
    if ((long)uVar8 < 0) goto LAB_006dd544;
    pbVar6 = (byte *)(puVar10[2] + uVar9);
  }
  else {
    if ((long)uVar8 < 0) {
LAB_006dd544:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/string_view:331: libc++ Hardening assertion __len <= static_cast<size_type>(numeric_limits<difference_type>::max()) failed: string_view::string_view(_CharT *, size_t): length does not fit in difference_type\n"
                );
    }
    pbVar6 = (byte *)((long)puVar10 + uVar9 + 0xd);
  }
joined_r0x006dd4a8:
  if ((uVar8 != 0) && (pbVar6 == (byte *)0x0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/string_view:333: libc++ Hardening assertion __len == 0 || __s != nullptr failed: string_view::string_view(_CharT *, size_t): received nullptr\n"
              );
  }
  *param_1 = pbVar6;
  param_1[1] = uVar8;
  return;
}


// ===== 006dd55c  FUN_006dd55c =====

undefined8 FUN_006dd55c(int *param_1)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  iVar1 = *param_1;
  if (0 < iVar1) {
    lVar4 = *(long *)(param_1 + 6);
    uVar5 = (ulong)*(byte *)((long)param_1 + 5) + 1;
    if (uVar5 != *(byte *)(lVar4 + 0xf)) {
      lVar6 = 1;
LAB_006dd59c:
      *(char *)((long)param_1 + lVar6 + 4) = (char)uVar5;
      do {
        lVar4 = *(long *)(lVar4 + uVar5 * 8 + 0x10);
        *(long *)(param_1 + lVar6 * 2 + 2) = lVar4;
        lVar2 = lVar6 + -1;
        uVar5 = (ulong)*(byte *)(lVar4 + 0xe);
        *(byte *)((long)param_1 + lVar6 + 3) = *(byte *)(lVar4 + 0xe);
        lVar6 = lVar2;
      } while (lVar2 != 0);
      return *(undefined8 *)(lVar4 + uVar5 * 8 + 0x10);
    }
    if (iVar1 != 1) {
      lVar4 = *(long *)(param_1 + 8);
      uVar5 = (ulong)*(byte *)((long)param_1 + 6) + 1;
      if (uVar5 != *(byte *)(lVar4 + 0xf)) {
        lVar6 = 2;
        goto LAB_006dd59c;
      }
      if (iVar1 != 2) {
        lVar4 = *(long *)(param_1 + 10);
        uVar5 = (ulong)*(byte *)((long)param_1 + 7) + 1;
        if (uVar5 != *(byte *)(lVar4 + 0xf)) {
          lVar6 = 3;
          goto LAB_006dd59c;
        }
        if (iVar1 != 3) {
          lVar4 = *(long *)(param_1 + 0xc);
          uVar5 = (ulong)*(byte *)(param_1 + 2) + 1;
          if (uVar5 != *(byte *)(lVar4 + 0xf)) {
            lVar6 = 4;
            goto LAB_006dd59c;
          }
          if (iVar1 != 4) {
            lVar4 = *(long *)(param_1 + 0xe);
            uVar5 = (ulong)*(byte *)((long)param_1 + 9) + 1;
            if (uVar5 != *(byte *)(lVar4 + 0xf)) {
              lVar6 = 5;
              goto LAB_006dd59c;
            }
            if (iVar1 != 5) {
              lVar4 = *(long *)(param_1 + 0x10);
              uVar5 = (ulong)*(byte *)((long)param_1 + 10) + 1;
              if (uVar5 != *(byte *)(lVar4 + 0xf)) {
                lVar6 = 6;
                goto LAB_006dd59c;
              }
              if (iVar1 != 6) {
                lVar4 = *(long *)(param_1 + 0x12);
                uVar5 = (ulong)*(byte *)((long)param_1 + 0xb) + 1;
                if (uVar5 != *(byte *)(lVar4 + 0xf)) {
                  lVar6 = 7;
                  goto LAB_006dd59c;
                }
                if (iVar1 != 7) {
                  lVar4 = *(long *)(param_1 + 0x14);
                  uVar5 = (ulong)*(byte *)(param_1 + 3) + 1;
                  if (uVar5 != *(byte *)(lVar4 + 0xf)) {
                    lVar6 = 8;
                    goto LAB_006dd59c;
                  }
                  if (iVar1 != 8) {
                    lVar4 = *(long *)(param_1 + 0x16);
                    uVar5 = (ulong)*(byte *)((long)param_1 + 0xd) + 1;
                    if (uVar5 != *(byte *)(lVar4 + 0xf)) {
                      lVar6 = 9;
                      goto LAB_006dd59c;
                    }
                    if (iVar1 != 9) {
                      lVar4 = *(long *)(param_1 + 0x18);
                      uVar5 = (ulong)*(byte *)((long)param_1 + 0xe) + 1;
                      if (uVar5 != *(byte *)(lVar4 + 0xf)) {
                        lVar6 = 10;
                        goto LAB_006dd59c;
                      }
                      if (iVar1 != 10) {
                        lVar4 = *(long *)(param_1 + 0x1a);
                        uVar5 = (ulong)*(byte *)((long)param_1 + 0xf) + 1;
                        if (uVar5 != *(byte *)(lVar4 + 0xf)) {
                          lVar6 = 0xb;
                          goto LAB_006dd59c;
                        }
                        if (iVar1 != 0xb) {
                    /* WARNING: Does not return */
                          pcVar3 = (code *)SoftwareBreakpoint(0x5512,0x6dd714);
                          (*pcVar3)();
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
  return 0;
}


// ===== 006dd764  FUN_006dd764 =====

void FUN_006dd764(void)

{
  return;
}


// ===== 006dd76c  FUN_006dd76c =====

long FUN_006dd76c(long param_1)

{
  return *(long *)(param_1 + 0x40) + 0x118;
}


// ===== 006dd77c  FUN_006dd77c =====

long FUN_006dd77c(long param_1,undefined4 *param_2)

{
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_006de5e0(&local_a0,*(undefined8 *)(param_1 + 8));
  FUN_0054bae0(local_60 + 0x118,*param_2);
  FUN_006de6ec(&local_a0);
  return param_1;
}


// ===== 006dd7ec  FUN_006dd7ec =====

long FUN_006dd7ec(long param_1,undefined8 *param_2)

{
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_006de5e0(&local_a0,*(undefined8 *)(param_1 + 8));
  FUN_0054c088(local_60 + 0x118,*param_2);
  FUN_006de6ec(&local_a0);
  return param_1;
}


// ===== 006dd85c  FUN_006dd85c =====

void FUN_006dd85c(long param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  
  lVar4 = *(long *)(param_1 + 8);
  if (*(long *)(lVar4 + 0x3c50) == 0) {
    *(long *)(lVar4 + 0x3c50) = lVar4 + 0x1b8;
    *(undefined8 *)(lVar4 + 0x3c58) = 15000;
    FUN_006ddc7c(lVar4);
  }
  uStack_48 = *(undefined8 *)(lVar4 + 0x3c58);
  local_50 = *(undefined8 *)(lVar4 + 0x3c50);
  auVar5 = FUN_006def10(7,param_3 + 0xb,&local_50);
  uVar2 = FUN_006ded74(6,param_2,param_3,&local_50);
  if ((uVar2 & 1) == 0) {
    lVar3 = *(long *)(param_1 + 8);
    lVar4 = lVar3;
    if (*(long *)(lVar3 + 0x3c50) == 0) {
      *(long *)(lVar3 + 0x3c50) = lVar3 + 0x1b8;
      *(undefined8 *)(lVar3 + 0x3c58) = 15000;
      FUN_006ddc7c(lVar3);
      lVar4 = *(long *)(param_1 + 8);
      if (*(long *)(lVar4 + 0x3c50) == 0) {
        *(long *)(lVar4 + 0x3c50) = lVar4 + 0x1b8;
        *(undefined8 *)(lVar4 + 0x3c58) = 15000;
        FUN_006ddc7c(lVar4);
      }
    }
    if (*(ulong *)(lVar3 + 0x3c58) < *(ulong *)(lVar4 + 0x3c58)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x6dd9a8);
      (*pcVar1)();
    }
    *(ulong *)(lVar3 + 0x3c58) = *(ulong *)(lVar3 + 0x3c58) - *(ulong *)(lVar4 + 0x3c58);
  }
  else {
    FUN_006df03c(auVar5._0_8_,auVar5._8_8_,&local_50);
    lVar4 = *(long *)(param_1 + 8);
    if (*(long *)(lVar4 + 0x3c50) == 0) {
      *(long *)(lVar4 + 0x3c50) = lVar4 + 0x1b8;
      *(undefined8 *)(lVar4 + 0x3c58) = 15000;
      FUN_006ddc7c(lVar4);
    }
    *(undefined8 *)(lVar4 + 0x3c58) = uStack_48;
    *(undefined8 *)(lVar4 + 0x3c50) = local_50;
  }
  return;
}


// ===== 006dd9a8  FUN_006dd9a8 =====

void FUN_006dd9a8(long param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  
  lVar4 = *(long *)(param_1 + 8);
  if (*(long *)(lVar4 + 0x3c50) == 0) {
    *(long *)(lVar4 + 0x3c50) = lVar4 + 0x1b8;
    *(undefined8 *)(lVar4 + 0x3c58) = 15000;
    FUN_006ddc7c(lVar4);
  }
  uStack_48 = *(undefined8 *)(lVar4 + 0x3c58);
  local_50 = *(undefined8 *)(lVar4 + 0x3c50);
  auVar5 = FUN_006def10(7,param_3 + 0xb,&local_50);
  uVar2 = FUN_006ded74(1,param_2,param_3,&local_50);
  if ((uVar2 & 1) == 0) {
    lVar3 = *(long *)(param_1 + 8);
    lVar4 = lVar3;
    if (*(long *)(lVar3 + 0x3c50) == 0) {
      *(long *)(lVar3 + 0x3c50) = lVar3 + 0x1b8;
      *(undefined8 *)(lVar3 + 0x3c58) = 15000;
      FUN_006ddc7c(lVar3);
      lVar4 = *(long *)(param_1 + 8);
      if (*(long *)(lVar4 + 0x3c50) == 0) {
        *(long *)(lVar4 + 0x3c50) = lVar4 + 0x1b8;
        *(undefined8 *)(lVar4 + 0x3c58) = 15000;
        FUN_006ddc7c(lVar4);
      }
    }
    if (*(ulong *)(lVar3 + 0x3c58) < *(ulong *)(lVar4 + 0x3c58)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x6ddaf4);
      (*pcVar1)();
    }
    *(ulong *)(lVar3 + 0x3c58) = *(ulong *)(lVar3 + 0x3c58) - *(ulong *)(lVar4 + 0x3c58);
  }
  else {
    FUN_006df03c(auVar5._0_8_,auVar5._8_8_,&local_50);
    lVar4 = *(long *)(param_1 + 8);
    if (*(long *)(lVar4 + 0x3c50) == 0) {
      *(long *)(lVar4 + 0x3c50) = lVar4 + 0x1b8;
      *(undefined8 *)(lVar4 + 0x3c58) = 15000;
      FUN_006ddc7c(lVar4);
    }
    *(undefined8 *)(lVar4 + 0x3c58) = uStack_48;
    *(undefined8 *)(lVar4 + 0x3c50) = local_50;
  }
  return;
}


// ===== 006ddaf4  FUN_006ddaf4 =====

void FUN_006ddaf4(long *param_1,long param_2,ulong param_3,undefined4 param_4,uint param_5,
                 long param_6,undefined4 param_7)

{
  char *pcVar1;
  ulong uVar2;
  uint uVar3;
  undefined *puVar4;
  byte bVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[0xf] = 0;
  param_1[0x11] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  puVar4 = PTR_DAT_00d51dc0;
  param_1[0x2a] = 0;
  lVar8 = *(long *)puVar4;
  param_1[0x23] = (long)(puVar4 + 0x18);
  param_1[0x24] = (long)(puVar4 + 0x40);
  lVar8 = (long)param_1 + lVar8 + 0x118;
  FUN_00520e8c(lVar8,0);
  *(undefined8 *)(lVar8 + 0x88) = 0;
  *(undefined1 *)(lVar8 + 0x94) = 0;
  *(undefined4 *)(lVar8 + 0x90) = 0xffffffff;
  param_1[0x78b] = 0;
  param_1[0x78a] = 0;
  *(uint *)((long)param_1 + *(long *)(param_1[0x23] + -0x18) + 0x120) =
       *(uint *)((long)param_1 + *(long *)(param_1[0x23] + -0x18) + 0x120) | 0x201;
  *param_1 = param_2;
  param_1[1] = param_3;
  if (param_3 != 0) {
    lVar9 = param_2 + -1;
    lVar8 = lVar9 + param_2 * -2;
    uVar2 = 0;
    do {
      uVar7 = uVar2;
      if (param_3 == uVar7) goto LAB_006ddc10;
      pcVar1 = (char *)(lVar9 + param_3);
      uVar2 = uVar7 + 1;
      lVar8 = lVar8 + 1;
      lVar9 = lVar9 + -1;
    } while (*pcVar1 != '/');
    if (param_3 + 1 != uVar2) {
      if (param_3 <= param_3 - uVar2) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/string_view:436: libc++ Hardening assertion __n <= size() failed: remove_prefix() can\'t remove more than size()\n"
                  );
      }
      param_2 = param_3 - lVar8;
      param_3 = uVar7;
    }
  }
LAB_006ddc10:
  param_1[2] = param_2;
  param_1[3] = param_3;
  *(undefined4 *)(param_1 + 4) = param_4;
  bVar5 = FUN_006df518();
  param_1[6] = param_6;
  uVar3 = 2;
  if ((int)param_5 < 4) {
    uVar3 = param_5 & ((int)param_5 >> 0x1f ^ 0xffffffffU);
  }
  *(byte *)((long)param_1 + 0x24) = bVar5 & 1;
  *(uint *)(param_1 + 5) = uVar3;
  *(undefined4 *)((long)param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 7) = param_7;
  uVar6 = FUN_006dfa98();
  *(undefined4 *)((long)param_1 + 0x3c) = uVar6;
  return;
}


// ===== 006ddc7c  FUN_006ddc7c =====

void FUN_006ddc7c(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  uVar3 = *param_1;
  uVar1 = param_1[1];
  if (param_1[0x78a] == 0) {
    param_1[0x78a] = param_1 + 0x37;
    param_1[0x78b] = 15000;
    FUN_006ddc7c(param_1);
  }
  FUN_006ded74(2,uVar3,uVar1,param_1 + 0x78a);
  iVar2 = *(int *)(param_1 + 4);
  if (param_1[0x78a] == 0) {
    param_1[0x78a] = param_1 + 0x37;
    param_1[0x78b] = 15000;
    FUN_006ddc7c(param_1);
  }
  FUN_006dec50(3,(long)iVar2,param_1 + 0x78a);
  uVar3 = FUN_006dfd04(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[0x78a] == 0) {
    param_1[0x78a] = param_1 + 0x37;
    param_1[0x78b] = 15000;
    FUN_006ddc7c(param_1);
  }
  FUN_006dec50(4,uVar3,param_1 + 0x78a);
  iVar2 = *(int *)(param_1 + 5);
  if (iVar2 < 2) {
    if (iVar2 == 0) {
      iVar2 = 800;
      if (*(int *)((long)param_1 + 0x2c) != -1) {
        iVar2 = 600 - *(int *)((long)param_1 + 0x2c);
      }
      lVar5 = (long)iVar2;
      lVar4 = param_1[0x78a];
      goto joined_r0x006ddd64;
    }
    if (iVar2 == 1) {
      lVar5 = 900;
      lVar4 = param_1[0x78a];
      goto joined_r0x006ddd64;
    }
  }
  else {
    if (iVar2 == 2) {
      lVar5 = 0x3b6;
      lVar4 = param_1[0x78a];
      goto joined_r0x006ddd64;
    }
    if (iVar2 == 3) {
      lVar5 = 0x44c;
      lVar4 = param_1[0x78a];
      goto joined_r0x006ddd64;
    }
  }
  lVar5 = 800;
  lVar4 = param_1[0x78a];
joined_r0x006ddd64:
  if (lVar4 == 0) {
    param_1[0x78a] = param_1 + 0x37;
    param_1[0x78b] = 15000;
    FUN_006ddc7c(param_1);
  }
  FUN_006dec50(5,lVar5,param_1 + 0x78a);
  iVar2 = *(int *)((long)param_1 + 0x3c);
  if (param_1[0x78a] == 0) {
    param_1[0x78a] = param_1 + 0x37;
    param_1[0x78b] = 15000;
    FUN_006ddc7c(param_1);
  }
  FUN_006dec50(6,(long)iVar2,param_1 + 0x78a);
  return;
}


// ===== 006dde3c  FUN_006dde3c =====

void FUN_006dde3c(long param_1)

{
  long lVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulong uVar8;
  code *pcVar9;
  uint uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined1 *local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  void *local_c0;
  ulong local_b8;
  long local_b0;
  long lStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  void *local_88;
  ulong local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lStack_a8 = *(long *)(param_1 + 0x3c50);
  lVar1 = param_1 + 0x1b8;
  if (lStack_a8 == 0) {
    *(long *)(param_1 + 0x3c50) = lVar1;
    *(undefined8 *)(param_1 + 0x3c58) = 15000;
    FUN_006ddc7c(param_1);
    lStack_a8 = *(long *)(param_1 + 0x3c50);
  }
  lStack_a8 = lStack_a8 - lVar1;
  pvVar2 = (void *)(param_1 + 0x3c60);
  local_b8 = 0x3a96;
  local_c0 = pvVar2;
  local_b0 = lVar1;
  if (*(char *)(param_1 + 0x24) == '\x01') {
    uVar3 = *(undefined4 *)(param_1 + 0x38);
    uVar4 = *(undefined4 *)(param_1 + 0x3c);
    uVar11 = *(undefined8 *)(param_1 + 0x10);
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    uVar6 = *(undefined4 *)(param_1 + 0x28);
    uVar13 = *(undefined8 *)(param_1 + 0x30);
    uVar7 = *(undefined4 *)(param_1 + 0x20);
    uVar10 = FUN_006e39ec();
    uVar11 = FUN_006e870c(uVar6,uVar13,uVar3,uVar4,uVar11,uVar5,uVar7,uVar10 & 1,&local_c0);
  }
  else {
    uVar11 = 0;
  }
  *(undefined8 *)(param_1 + 0x50) = uVar11;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
  local_f0 = &DAT_aaaaaaaaaaaaaaaa;
  uVar12 = FUN_006df07c(&local_f0,&local_b0);
  do {
    if ((uVar12 & 1) == 0) {
      uVar12 = (long)local_c0 - (long)pvVar2;
      if (uVar12 >> 3 < 0x753) {
        *(undefined1 *)((long)pvVar2 + uVar12) = 10;
        if (uVar12 + 1 >> 3 < 0x753) {
          *(undefined1 *)((long)pvVar2 + uVar12 + 1) = 0;
          *(void **)(param_1 + 0x40) = pvVar2;
          *(ulong *)(param_1 + 0x48) = uVar12 + 2;
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/array:277: libc++ Hardening assertion __n < _Size failed: out-of-bounds access in std::array<T, N>\n"
                );
    }
    if (((local_f0 == (undefined1 *)0x7) && (puStack_e8 == (undefined1 *)0x2)) &&
       (local_70 = local_d8, uStack_68 = uStack_d0, 1 < local_b8)) {
      local_88 = (void *)0x0;
      local_80 = 0;
      puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
      local_a0 = &DAT_aaaaaaaaaaaaaaaa;
      local_90 = &DAT_aaaaaaaaaaaaaaaa;
      do {
        do {
          uVar12 = FUN_006df07c(&local_a0,&local_70);
          if ((uVar12 & 1) == 0) goto LAB_006ddf24;
        } while (((local_a0 != (undefined1 *)0x6) && (local_a0 != (undefined1 *)0x1)) ||
                (puStack_98 != (undefined1 *)0x2));
        if ((long)local_80 < 0) {
LAB_006de070:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/string_view:331: libc++ Hardening assertion __len <= static_cast<size_type>(numeric_limits<difference_type>::max()) failed: string_view::string_view(_CharT *, size_t): length does not fit in difference_type\n"
                    );
        }
        if ((local_88 == (void *)0x0) && (local_80 != 0)) {
LAB_006de000:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/string_view:333: libc++ Hardening assertion __len == 0 || __s != nullptr failed: string_view::string_view(_CharT *, size_t): received nullptr\n"
                    );
        }
        uVar12 = local_80;
        if (local_b8 <= local_80) {
          uVar12 = local_b8;
        }
        memcpy(local_c0,local_88,uVar12);
        uVar8 = local_b8 - uVar12;
        if (local_b8 < uVar12) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x6de088);
          (*pcVar9)();
        }
        local_c0 = (void *)((long)local_c0 + uVar12);
        local_b8 = uVar8;
        if ((long)local_80 < 0) goto LAB_006de070;
        if ((local_80 != 0) && (local_88 == (void *)0x0)) goto LAB_006de000;
      } while (local_80 <= uVar12);
    }
LAB_006ddf24:
    uVar12 = FUN_006df07c(&local_f0,&local_b0);
  } while( true );
}


// ===== 006de09c  FUN_006de09c =====

void FUN_006de09c(undefined8 param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  size_t sVar1;
  
  if (param_2 != (char *)0x0) {
    sVar1 = strlen(param_2);
    FUN_006de108(param_1,param_2,sVar1,param_3,param_4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/string_view:278: libc++ Hardening assertion __s != nullptr failed: null pointer passed to non-null argument of char_traits<...>::length\n"
            );
}


// ===== 006de108  FUN_006de108 =====

void FUN_006de108(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined1 auVar3 [16];
  
  puVar1 = (undefined4 *)__errno();
  *param_1 = *puVar1;
  auVar3 = FUN_006e66b8();
  pvVar2 = operator_new(0x76f8);
  FUN_006ddaf4(pvVar2,param_2,param_3,param_4,param_5,auVar3._0_8_,auVar3._8_8_ & 0xffffffff);
  *(void **)(param_1 + 2) = pvVar2;
  *(undefined2 *)((long)pvVar2 + 0x80) = 0;
  *(undefined1 *)((long)pvVar2 + 0x82) = 0;
  FUN_006de1a4(param_1);
  return;
}


// ===== 006de1a4  FUN_006de1a4 =====

void FUN_006de1a4(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  
  uVar3 = FUN_006e42a4();
  if ((uVar3 & 1) != 0) {
    lVar4 = *(long *)(param_1 + 8);
    uVar3 = FUN_006df4a0(*(undefined8 *)(lVar4 + 0x10),*(undefined8 *)(lVar4 + 0x18),
                         *(undefined4 *)(lVar4 + 0x20));
    if ((uVar3 & 1) != 0) {
      puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
      local_90 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
      local_70 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
      local_60 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
      local_50 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
      local_a0 = &DAT_aaaaaaaaaaaaaaaa;
      local_30 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_006de5e0(&local_a0,*(undefined8 *)(param_1 + 8));
      FUN_006deaa4(local_60 + 0x118," (stacktrace:\n",0xe);
      uVar1 = FUN_006e4300();
      uVar2 = FUN_006e42ec();
      FUN_006efeb8(1,uVar1,uVar2 & 1,FUN_006de958,local_60 + 0x118);
      FUN_006deaa4(local_60 + 0x118,&DAT_001ea2f5,2);
      FUN_006de6ec(&local_a0);
    }
  }
  return;
}


// ===== 006de274  FUN_006de274 =====

void FUN_006de274(void)

{
  FUN_006de09c();
  return;
}


// ===== 006de280  FUN_006de280 =====

void FUN_006de280(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  FUN_006debd8(param_1 + 2,0);
  uVar1 = *param_1;
  puVar2 = (undefined4 *)__errno();
  *puVar2 = uVar1;
  return;
}


// ===== 006de2bc  FUN_006de2bc =====

void FUN_006de2bc(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  uVar1 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
  FUN_00547cac(param_1,puVar2,uVar1);
  return;
}


// ===== 006de2dc  FUN_006de2dc =====

void FUN_006de2dc(void)

{
  FUN_006e4328(1);
  if (PTR___gcov_dump_00d525d8 == (undefined *)0x0) {
    if (PTR___gcov_flush_00d525e0 != (undefined *)0x0) {
      __gcov_flush();
    }
                    /* WARNING: Subroutine does not return */
    abort();
  }
  __gcov_dump();
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 006de318  FUN_006de318 =====

void FUN_006de318(void)

{
                    /* WARNING: Subroutine does not return */
  _exit(1);
}


// ===== 006de32c  FUN_006de32c =====

undefined8 FUN_006de32c(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  uVar1 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
  FUN_006dd9a8(param_1,puVar2,uVar1);
  return param_1;
}


// ===== 006de370  FUN_006de370 =====

undefined8 FUN_006de370(undefined8 param_1)

{
  FUN_006dd9a8();
  return param_1;
}


// ===== 006de39c  FUN_006de39c =====

void FUN_006de39c(undefined4 *param_1)

{
  long lVar1;
  undefined8 ***pppuVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 **local_48;
  ulong uStack_40;
  byte bStack_31;
  undefined4 local_14;
  
  iVar4 = *(int *)(*(long *)(param_1 + 2) + 0x28);
  iVar3 = FUN_006df464();
  if (iVar3 <= iVar4) {
    lVar7 = *(long *)(param_1 + 2);
    if (*(char *)(lVar7 + 0x82) == '\x01') {
      FUN_006dd85c(param_1,&DAT_001c4dc3,2);
      FUN_006f0134(&local_48,*param_1);
      pppuVar2 = (undefined8 ***)local_48;
      if (-1 < (char)bStack_31) {
        uStack_40 = (ulong)bStack_31;
        pppuVar2 = &local_48;
      }
      FUN_006dd9a8(param_1,pppuVar2,uStack_40);
      FUN_006dd85c(param_1,&DAT_001c22a3,2);
      local_14 = *param_1;
      uVar5 = FUN_006dd77c(param_1,&local_14);
      FUN_006dd85c(uVar5,&DAT_0019fa9e,1);
      if ((char)bStack_31 < '\0') {
        operator_delete(local_48);
      }
      lVar7 = *(long *)(param_1 + 2);
    }
    if (((*(int *)(lVar7 + 0x28) == 3) && (uVar6 = FUN_006e4314(), (uVar6 & 1) != 0)) &&
       (iVar4 = FUN_00d0f440(0,1,&DAT_00d64781), iVar4 == 0)) {
      *(undefined1 *)(*(long *)(param_1 + 2) + 0x80) = 1;
    }
    FUN_006dde3c(*(undefined8 *)(param_1 + 2));
    lVar9 = *(long *)(param_1 + 2);
    lVar8 = *(long *)(lVar9 + 0x3c50);
    lVar7 = lVar9 + 0x1b8;
    if (lVar8 == 0) {
      *(long *)(lVar9 + 0x3c50) = lVar7;
      *(undefined8 *)(lVar9 + 0x3c58) = 15000;
      FUN_006ddc7c(lVar9);
      lVar8 = *(long *)(lVar9 + 0x3c50);
      lVar9 = *(long *)(param_1 + 2);
    }
    lVar1 = lVar8 - (lVar9 + 0x1b8);
    if (lVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/string_view:331: libc++ Hardening assertion __len <= static_cast<size_type>(numeric_limits<difference_type>::max()) failed: string_view::string_view(_CharT *, size_t): length does not fit in difference_type\n"
                );
    }
    if ((lVar7 == 0) && (lVar8 != lVar9 + 0x1b8)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/string_view:333: libc++ Hardening assertion __len == 0 || __s != nullptr failed: string_view::string_view(_CharT *, size_t): received nullptr\n"
                );
    }
    *(long *)(lVar9 + 0x58) = lVar7;
    *(long *)(lVar9 + 0x60) = lVar1;
    FUN_006de544(param_1);
  }
  return;
}


// ===== 006de544  FUN_006de544 =====

void FUN_006de544(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  
  if ((*(int *)(*(long *)(param_1 + 8) + 0x28) == 3) && (uVar2 = FUN_006e4314(), (uVar2 & 1) != 0))
  {
    FUN_006de858(param_1);
  }
  lVar3 = *(long *)(param_1 + 8);
  plVar1 = (long *)(lVar3 + 0x90);
  if ((*(ulong *)(lVar3 + 0x88) & 1) != 0) {
    plVar1 = (long *)*(long *)(lVar3 + 0x90);
  }
  FUN_006e3a14(lVar3,plVar1,*(ulong *)(lVar3 + 0x88) >> 1,*(undefined1 *)(lVar3 + 0x110));
  if ((*(int *)(*(long *)(param_1 + 8) + 0x28) == 3) && (uVar2 = FUN_006e4314(), (uVar2 & 1) != 0))
  {
    FUN_006e3d08();
    if (*(char *)(*(long *)(param_1 + 8) + 0x81) == '\x01') {
      FUN_006de318();
    }
                    /* WARNING: Subroutine does not return */
    FUN_006de2dc();
  }
  return;
}


// ===== 006de5e0  FUN_006de5e0 =====

void FUN_006de5e0(long *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  *param_1 = (long)(PTR_DAT_00d51e20 + 0x10);
  FUN_0053ce34(param_1 + 1);
  *param_1 = (long)&PTR_FUN_00d29b00;
  param_1[8] = param_2;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  if (*(long *)(param_2 + 0x3c50) == 0) {
    *(long *)(param_2 + 0x3c50) = param_2 + 0x1b8;
    *(undefined8 *)(param_2 + 0x3c58) = 15000;
    FUN_006ddc7c(param_2);
  }
  lVar3 = *(long *)(param_2 + 0x3c58);
  lVar2 = *(long *)(param_2 + 0x3c50);
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[10] = lVar3;
  param_1[9] = lVar2;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  auVar4 = FUN_006def10(7,param_1[10],param_1 + 9);
  *(undefined1 (*) [16])(param_1 + 0xb) = auVar4;
  auVar4 = FUN_006def10(1,param_1[10],param_1 + 9);
  uVar1 = param_1[9];
  *(undefined1 (*) [16])(param_1 + 0xd) = auVar4;
  if (uVar1 <= uVar1 + param_1[10]) {
    param_1[5] = uVar1;
    param_1[6] = uVar1;
    param_1[7] = uVar1 + param_1[10];
    lVar2 = param_1[8] + 0x118 + *(long *)(*(long *)(param_1[8] + 0x118) + -0x18);
    *(long **)(lVar2 + 0x28) = param_1;
    FUN_00520d98(lVar2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/streambuf:319: libc++ Hardening assertion std::__is_valid_range(__pbeg, __pend) failed: [pbeg, pend) must be a valid range\n"
            );
}


// ===== 006de6ec  FUN_006de6ec =====

void FUN_006de6ec(undefined8 *param_1)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar3 = param_1[8] + 0x118 + *(long *)(*(long *)(param_1[8] + 0x118) + -0x18);
  *(undefined8 *)(lVar3 + 0x28) = 0;
  FUN_00520d98(lVar3,0);
  if (param_1[0xd] == 0) {
    lVar4 = param_1[8];
    lVar3 = lVar4;
    if (*(long *)(lVar4 + 0x3c50) == 0) {
      *(long *)(lVar4 + 0x3c50) = lVar4 + 0x1b8;
      *(undefined8 *)(lVar4 + 0x3c58) = 15000;
      FUN_006ddc7c(lVar4);
      lVar3 = param_1[8];
      if (*(long *)(lVar3 + 0x3c50) == 0) {
        *(long *)(lVar3 + 0x3c50) = lVar3 + 0x1b8;
        *(undefined8 *)(lVar3 + 0x3c58) = 15000;
        FUN_006ddc7c(lVar3);
      }
    }
    if (*(ulong *)(lVar4 + 0x3c58) < *(ulong *)(lVar3 + 0x3c58)) {
LAB_006de824:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x6de828);
      (*pcVar2)();
    }
    *(ulong *)(lVar4 + 0x3c58) = *(ulong *)(lVar4 + 0x3c58) - *(ulong *)(lVar3 + 0x3c58);
  }
  else {
    uVar1 = param_1[6] - param_1[5];
    if (uVar1 != 0) {
      if ((ulong)param_1[10] < uVar1) goto LAB_006de824;
      param_1[9] = param_1[9] + uVar1;
      param_1[10] = param_1[10] - uVar1;
      FUN_006df03c(param_1[0xd],param_1[0xe],param_1 + 9);
      FUN_006df03c(param_1[0xb],param_1[0xc],param_1 + 9);
      lVar3 = param_1[8];
      if (*(long *)(lVar3 + 0x3c50) == 0) {
        *(long *)(lVar3 + 0x3c50) = lVar3 + 0x1b8;
        *(undefined8 *)(lVar3 + 0x3c58) = 15000;
        FUN_006ddc7c(lVar3);
      }
      uVar5 = param_1[9];
      *(undefined8 *)(lVar3 + 0x3c58) = param_1[10];
      *(undefined8 *)(lVar3 + 0x3c50) = uVar5;
    }
  }
  *param_1 = &PTR_FUN_00d22488;
  FUN_0053ceec(param_1 + 1);
  return;
}


// ===== 006de828  FUN_006de828 =====

void FUN_006de828(void *param_1)

{
  FUN_006de6ec();
  operator_delete(param_1);
  return;
}


// ===== 006de858  FUN_006de858 =====

void FUN_006de858(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 8);
  if (*(char *)(lVar4 + 0x80) == '\x01') {
    FUN_006dd764();
    lVar4 = *(long *)(param_1 + 8);
  }
  if ((*(byte *)(lVar4 + 0x81) & 1) != 0) {
    return;
  }
  plVar1 = (long *)(lVar4 + 0x90);
  if ((*(ulong *)(lVar4 + 0x88) & 1) != 0) {
    plVar1 = (long *)*(long *)(lVar4 + 0x90);
  }
  FUN_006e3a14(lVar4,plVar1,*(ulong *)(lVar4 + 0x88) >> 1,*(undefined1 *)(lVar4 + 0x110));
  FUN_00547bf8(*(long *)(param_1 + 8) + 0x68,"*** Check failure stack trace: ***\n");
  uVar2 = FUN_006e4300();
  uVar3 = FUN_006e42ec();
  FUN_006efeb8(0,uVar2,uVar3 & 1,FUN_006de908,*(long *)(param_1 + 8) + 0x68);
  return;
}


// ===== 006de908  FUN_006de908 =====

void FUN_006de908(char *param_1,undefined8 param_2)

{
  size_t sVar1;
  
  if (param_1 != (char *)0x0) {
    sVar1 = strlen(param_1);
    FUN_00547cac(param_2,param_1,sVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/string:3112: libc++ Hardening assertion __s != nullptr failed: string::append received nullptr\n"
            );
}


// ===== 006de958  FUN_006de958 =====

void FUN_006de958(char *param_1,undefined8 param_2)

{
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  FUN_006deaa4(param_2,param_1,sVar1);
  return;
}


// ===== 006de990  FUN_006de990 =====

void FUN_006de990(void)

{
  FUN_006de09c();
  return;
}


// ===== 006de99c  FUN_006de99c =====

void FUN_006de99c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 local_8;
  
  local_8 = param_4;
  FUN_006de09c();
  FUN_006dd85c(param_1,"Check failed: ",0xe);
  uVar1 = FUN_006de9fc(param_1,&local_8);
  FUN_006dd85c(uVar1,&DAT_001d5e07,1);
  return;
}


// ===== 006de9fc  FUN_006de9fc =====

long FUN_006de9fc(long param_1,undefined8 *param_2)

{
  char *__s;
  undefined1 *puVar1;
  size_t sVar2;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_006de5e0(&local_b0,*(undefined8 *)(param_1 + 8));
  puVar1 = local_70;
  __s = "(null)";
  if ((char *)*param_2 != (char *)0x0) {
    __s = (char *)*param_2;
  }
  sVar2 = strlen(__s);
  FUN_006deaa4(puVar1 + 0x118,__s,sVar2);
  FUN_006de6ec(&local_b0);
  return param_1;
}


// ===== 006dea94  FUN_006dea94 =====

void FUN_006dea94(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_006de2dc();
}


// ===== 006deaa4  FUN_006deaa4 =====

long * FUN_006deaa4(long *param_1,long param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 auStack_38 [8];
  
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_0054b44c(&local_60,param_1);
  if (((ulong)local_60 & 1) != 0) {
    lVar4 = (long)param_1 + *(long *)(*param_1 + -0x18);
    uVar5 = *(undefined8 *)(lVar4 + 0x28);
    lVar1 = param_2 + param_3;
    if ((*(uint *)(lVar4 + 8) & 0xb0) != 0x20) {
      lVar1 = param_2;
    }
    if (*(char *)(lVar4 + 0x94) == '\x01') {
      uVar2 = *(uint *)(lVar4 + 0x90);
    }
    else {
      FUN_00520ce8(auStack_38,lVar4);
      plVar3 = (long *)FUN_0053cfd4(auStack_38,PTR_DAT_00d51b28);
      uVar2 = (**(code **)(*plVar3 + 0x38))(plVar3,0x20);
      FUN_0053ceec(auStack_38);
      *(undefined1 *)(lVar4 + 0x94) = 1;
      *(uint *)(lVar4 + 0x90) = uVar2 & 0xff;
    }
    lVar4 = FUN_00428a94(uVar5,param_2,lVar1,param_2 + param_3,lVar4,uVar2);
    if (lVar4 == 0) {
      lVar4 = (long)param_1 + *(long *)(*param_1 + -0x18);
      FUN_00520d98(lVar4,*(uint *)(lVar4 + 0x20) | 5);
    }
  }
  FUN_0054b498(&local_60);
  return param_1;
}


// ===== 006debd8  FUN_006debd8 =====

void FUN_006debd8(undefined8 *param_1,undefined8 param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  *param_1 = param_2;
  if (pvVar1 != (void *)0x0) {
    FUN_0054b3d8((long)pvVar1 + 0x118);
    if ((*(byte *)((long)pvVar1 + 0x88) & 1) != 0) {
      operator_delete(*(void **)((long)pvVar1 + 0x90));
    }
    if (*(char *)((long)pvVar1 + 0x7f) < '\0') {
      operator_delete(*(void **)((long)pvVar1 + 0x68));
    }
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 006dec50  FUN_006dec50 =====

bool FUN_006dec50(long param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  byte bVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  byte bVar10;
  
  uVar9 = param_1 << 3;
  uVar7 = 1;
  uVar4 = uVar9;
  if (0x7f < uVar9) {
    do {
      uVar5 = uVar4 >> 0xe;
      uVar7 = uVar7 + 1;
      uVar4 = uVar4 >> 7;
    } while (uVar5 != 0);
  }
  uVar4 = 1;
  uVar5 = param_2;
  if (0x7f < param_2) {
    do {
      uVar6 = uVar5 >> 0xe;
      uVar4 = uVar4 + 1;
      uVar5 = uVar5 >> 7;
    } while (uVar6 != 0);
  }
  uVar5 = param_3[1];
  if (uVar5 < uVar4 + uVar7) {
    lVar8 = 0;
LAB_006ded60:
    param_3[1] = lVar8;
    return uVar4 + uVar7 <= uVar5;
  }
  uVar6 = 0;
  do {
    if ((ulong)param_3[1] <= uVar6) goto LAB_006ded70;
    uVar1 = uVar6 + 1;
    bVar10 = 0;
    if (uVar7 - 1 != uVar6) {
      bVar10 = 0x80;
    }
    bVar2 = (byte)uVar9;
    uVar9 = uVar9 >> 7;
    *(byte *)(*param_3 + uVar6) = bVar10 | bVar2 & 0x7f;
    uVar6 = uVar1;
  } while (uVar7 != uVar1);
  if (uVar7 <= (ulong)param_3[1]) {
    *param_3 = *param_3 + uVar7;
    param_3[1] = param_3[1] - uVar7;
    uVar9 = 0;
    do {
      if ((ulong)param_3[1] <= uVar9) goto LAB_006ded70;
      uVar6 = uVar9 + 1;
      bVar10 = 0;
      if (uVar4 - 1 != uVar9) {
        bVar10 = 0x80;
      }
      bVar2 = (byte)param_2;
      param_2 = param_2 >> 7;
      *(byte *)(*param_3 + uVar9) = bVar10 | bVar2 & 0x7f;
      uVar9 = uVar6;
    } while (uVar4 != uVar6);
    lVar8 = param_3[1] - uVar4;
    if (uVar4 <= (ulong)param_3[1]) {
      *param_3 = *param_3 + uVar4;
      goto LAB_006ded60;
    }
  }
LAB_006ded70:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x6ded74);
  (*pcVar3)();
}


// ===== 006ded74  FUN_006ded74 =====

bool FUN_006ded74(long param_1,void *param_2,ulong param_3,long *param_4)

{
  ulong uVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  byte bVar11;
  ulong uVar12;
  
  uVar6 = param_1 << 3 | 2;
  uVar7 = 1;
  uVar5 = uVar6;
  if (0x7f < (ulong)(param_1 << 3)) {
    do {
      uVar9 = uVar5 >> 0xe;
      uVar7 = uVar7 + 1;
      uVar5 = uVar5 >> 7;
    } while (uVar9 != 0);
  }
  uVar12 = param_4[1];
  uVar5 = 1;
  uVar9 = uVar12;
  if (param_3 <= uVar12) {
    uVar9 = param_3;
  }
  if (0x7f < uVar9) {
    do {
      uVar10 = uVar9 >> 0xe;
      uVar9 = uVar9 >> 7;
      uVar5 = uVar5 + 1;
    } while (uVar10 != 0);
  }
  uVar9 = uVar5 + uVar7;
  if (((uVar12 < uVar9) ||
      (uVar10 = (uVar9 + param_3) - uVar12, uVar9 + param_3 < uVar12 || uVar10 == 0)) ||
     (bVar4 = uVar10 <= param_3, param_3 = param_3 - uVar10, bVar4)) {
    if (uVar12 < param_3 + uVar9) {
      lVar8 = 0;
LAB_006deeec:
      param_4[1] = lVar8;
      return param_3 + uVar9 <= uVar12;
    }
    uVar10 = 0;
    do {
      if ((ulong)param_4[1] <= uVar10) goto LAB_006def0c;
      uVar1 = uVar10 + 1;
      bVar11 = 0;
      if (uVar7 - 1 != uVar10) {
        bVar11 = 0x80;
      }
      bVar2 = (byte)uVar6;
      uVar6 = uVar6 >> 7;
      *(byte *)(*param_4 + uVar10) = bVar11 | bVar2 & 0x7f;
      uVar10 = uVar1;
    } while (uVar7 != uVar1);
    if (uVar7 <= (ulong)param_4[1]) {
      *param_4 = *param_4 + uVar7;
      param_4[1] = param_4[1] - uVar7;
      uVar7 = 0;
      uVar6 = param_3;
      do {
        if ((ulong)param_4[1] <= uVar7) goto LAB_006def0c;
        uVar10 = uVar7 + 1;
        bVar11 = 0;
        if (uVar5 - 1 != uVar7) {
          bVar11 = 0x80;
        }
        bVar2 = (byte)uVar6;
        uVar6 = uVar6 >> 7;
        *(byte *)(*param_4 + uVar7) = bVar11 | bVar2 & 0x7f;
        uVar7 = uVar10;
      } while (uVar5 != uVar10);
      if (uVar5 <= (ulong)param_4[1]) {
        lVar8 = *param_4;
        *param_4 = (long)(lVar8 + uVar5);
        param_4[1] = param_4[1] - uVar5;
        memcpy((void *)(lVar8 + uVar5),param_2,param_3);
        lVar8 = param_4[1] - param_3;
        if (param_3 <= (ulong)param_4[1]) {
          *param_4 = *param_4 + param_3;
          goto LAB_006deeec;
        }
      }
    }
  }
LAB_006def0c:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x6def10);
  (*pcVar3)();
}


// ===== 006def10  FUN_006def10 =====

undefined1  [16] FUN_006def10(long param_1,ulong param_2,long *param_3)

{
  byte bVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  byte bVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  
  uVar5 = 1;
  uVar4 = param_1 << 3 | 2;
  uVar3 = uVar4;
  if (0x7f < (ulong)(param_1 << 3)) {
    do {
      uVar7 = uVar3 >> 0xe;
      uVar5 = uVar5 + 1;
      uVar3 = uVar3 >> 7;
    } while (uVar7 != 0);
  }
  uVar8 = param_3[1];
  uVar3 = 1;
  uVar7 = uVar8;
  if (param_2 <= uVar8) {
    uVar7 = param_2;
  }
  if (0x7f < uVar7) {
    do {
      uVar11 = uVar7 >> 0xe;
      uVar7 = uVar7 >> 7;
      uVar3 = uVar3 + 1;
    } while (uVar11 != 0);
  }
  if (uVar8 < uVar3 + uVar5) {
    param_3[1] = 0;
    return ZEXT816(0);
  }
  uVar7 = 0;
  do {
    if ((ulong)param_3[1] <= uVar7) goto LAB_006df038;
    uVar8 = uVar7 + 1;
    bVar10 = 0;
    if (uVar5 - 1 != uVar7) {
      bVar10 = 0x80;
    }
    bVar1 = (byte)uVar4;
    uVar4 = uVar4 >> 7;
    *(byte *)(*param_3 + uVar7) = bVar10 | bVar1 & 0x7f;
    uVar7 = uVar8;
  } while (uVar5 != uVar8);
  uVar4 = param_3[1] - uVar5;
  if (uVar5 <= (ulong)param_3[1]) {
    lVar9 = *param_3;
    uVar7 = uVar3;
    if (uVar4 <= uVar3) {
      uVar7 = uVar4;
    }
    *param_3 = lVar9 + uVar5;
    param_3[1] = uVar4;
    uVar4 = 0;
    do {
      if ((ulong)param_3[1] <= uVar4) goto LAB_006df038;
      uVar8 = uVar4 + 1;
      uVar6 = 0;
      if (uVar3 - 1 != uVar4) {
        uVar6 = 0x80;
      }
      *(undefined1 *)(*param_3 + uVar4) = uVar6;
      uVar4 = uVar8;
    } while (uVar3 != uVar8);
    if (uVar3 <= (ulong)param_3[1]) {
      *param_3 = *param_3 + uVar3;
      param_3[1] = param_3[1] - uVar3;
      auVar12._8_8_ = uVar7;
      auVar12._0_8_ = lVar9 + uVar5;
      return auVar12;
    }
  }
LAB_006df038:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x6df03c);
  (*pcVar2)();
}


// ===== 006df03c  FUN_006df03c =====

void FUN_006df03c(byte *param_1,long param_2,undefined8 *param_3)

{
  byte bVar1;
  ulong uVar2;
  byte bVar3;
  
  if (((param_1 != (byte *)0x0) && (param_1 <= (byte *)*param_3)) && (param_2 != 0)) {
    uVar2 = (long)*param_3 - (long)(param_1 + param_2);
    do {
      param_2 = param_2 + -1;
      bVar3 = 0;
      if (param_2 != 0) {
        bVar3 = 0x80;
      }
      bVar1 = (byte)uVar2;
      uVar2 = uVar2 >> 7;
      *param_1 = bVar3 | bVar1 & 0x7f;
      param_1 = param_1 + 1;
    } while (param_2 != 0);
  }
  return;
}


// ===== 006df07c  FUN_006df07c =====

bool FUN_006df07c(ulong *param_1,ulong *param_2)

{
  byte *pbVar1;
  byte bVar2;
  ushort uVar3;
  uint3 uVar4;
  uint5 uVar5;
  uint6 uVar6;
  uint7 uVar7;
  code *pcVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  
  uVar9 = param_2[1];
  if (uVar9 != 0) {
    uVar14 = 0;
    uVar10 = 0;
    uVar12 = 0;
    do {
      uVar11 = uVar9;
      if (uVar9 == uVar12) goto LAB_006df0cc;
      bVar2 = *(byte *)(*param_2 + uVar12);
      uVar12 = uVar12 + 1;
      uVar11 = uVar14 & 0x3f;
      uVar14 = uVar14 + 7;
      uVar10 = ((ulong)bVar2 & 0x7f) << uVar11 | uVar10;
    } while ((char)bVar2 < '\0');
    uVar11 = uVar12;
    if (uVar9 < uVar12) goto LAB_006df0c4;
LAB_006df0cc:
    uVar12 = uVar10 & 7;
    *param_2 = *param_2 + uVar11;
    param_2[1] = uVar9 - uVar11;
    *param_1 = uVar10 >> 3;
    param_1[1] = uVar12;
    if (uVar12 < 2) {
      if (uVar12 == 0) {
        uVar10 = param_2[1];
        uVar14 = 0;
        uVar12 = 0;
        uVar11 = 0;
        do {
          uVar15 = uVar10;
          if (uVar10 == uVar12) goto LAB_006df268;
          bVar2 = *(byte *)(*param_2 + uVar12);
          uVar12 = uVar12 + 1;
          uVar15 = uVar14 & 0x3f;
          uVar14 = uVar14 + 7;
          uVar11 = ((ulong)bVar2 & 0x7f) << uVar15 | uVar11;
        } while ((char)bVar2 < '\0');
        uVar15 = uVar12;
        if (uVar10 < uVar12) goto LAB_006df0c4;
LAB_006df268:
        *param_2 = *param_2 + uVar15;
        param_2[1] = uVar10 - uVar15;
        param_1[2] = uVar11;
      }
      else if (uVar12 == 1) {
        pbVar1 = (byte *)*param_2;
        uVar14 = param_2[1];
        uVar12 = uVar14;
        if (6 < uVar14) {
          uVar12 = 7;
        }
        if (uVar14 == 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = (ulong)*pbVar1;
          if (uVar14 != 1) {
            uVar3 = CONCAT11(pbVar1[1],*pbVar1);
            uVar10 = (ulong)uVar3;
            if (uVar14 != 2) {
              uVar4 = CONCAT12(pbVar1[2],uVar3);
              uVar10 = (ulong)uVar4;
              if (uVar14 != 3) {
                uVar13 = CONCAT13(pbVar1[3],uVar4);
                uVar10 = (ulong)uVar13;
                if (uVar14 != 4) {
                  uVar5 = CONCAT14(pbVar1[4],uVar13);
                  uVar10 = (ulong)uVar5;
                  if (uVar14 != 5) {
                    uVar6 = CONCAT15(pbVar1[5],uVar5);
                    uVar10 = (ulong)uVar6;
                    if (uVar14 != 6) {
                      uVar7 = CONCAT16(pbVar1[6],uVar6);
                      uVar10 = (ulong)uVar7;
                      if (uVar14 != 7) {
                        uVar10 = CONCAT17(pbVar1[7],uVar7);
                        uVar12 = 8;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        *param_2 = (ulong)(pbVar1 + uVar12);
        param_2[1] = uVar14 - uVar12;
        param_1[2] = uVar10;
      }
    }
    else {
      if (uVar12 == 2) {
        uVar10 = param_2[1];
        uVar14 = 0;
        uVar11 = 0;
        uVar12 = 0;
        do {
          uVar15 = uVar10;
          if (uVar10 == uVar12) goto LAB_006df280;
          bVar2 = *(byte *)(*param_2 + uVar12);
          uVar12 = uVar12 + 1;
          uVar15 = uVar14 & 0x3f;
          uVar14 = uVar14 + 7;
          uVar11 = ((ulong)bVar2 & 0x7f) << uVar15 | uVar11;
        } while ((char)bVar2 < '\0');
        uVar15 = uVar12;
        if (uVar12 <= uVar10) {
LAB_006df280:
          *param_2 = *param_2 + uVar15;
          param_2[1] = uVar10 - uVar15;
          param_1[2] = uVar11;
          uVar12 = param_2[1];
          if (uVar11 <= param_2[1]) {
            uVar12 = uVar11;
          }
          param_1[3] = *param_2;
          param_1[4] = uVar12;
          if (uVar12 <= param_2[1]) {
            *param_2 = *param_2 + uVar12;
            param_2[1] = param_2[1] - uVar12;
            goto LAB_006df2ec;
          }
        }
LAB_006df0c4:
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x6df0c8);
        (*pcVar8)();
      }
      if (uVar12 == 5) {
        pbVar1 = (byte *)*param_2;
        uVar14 = param_2[1];
        uVar12 = uVar14;
        if (2 < uVar14) {
          uVar12 = 3;
        }
        if (uVar14 == 0) {
          uVar13 = 0;
        }
        else {
          uVar13 = (uint)*pbVar1;
          if (uVar14 != 1) {
            uVar3 = CONCAT11(pbVar1[1],*pbVar1);
            uVar13 = (uint)uVar3;
            if (uVar14 != 2) {
              uVar4 = CONCAT12(pbVar1[2],uVar3);
              uVar13 = (uint)uVar4;
              if (uVar14 != 3) {
                uVar13 = CONCAT13(pbVar1[3],uVar4);
                uVar12 = 4;
              }
            }
          }
        }
        *param_2 = (ulong)(pbVar1 + uVar12);
        param_2[1] = uVar14 - uVar12;
        param_1[2] = (ulong)uVar13;
      }
    }
  }
LAB_006df2ec:
  return uVar9 != 0;
}


// ===== 006df2f8  FUN_006df2f8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_006df2f8(uint param_1,byte *param_2,char *param_3)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  
  bVar3 = (byte)param_1;
  if (param_1 < 0x80) {
    *param_2 = bVar3;
    param_3[0] = '\0';
    param_3[1] = '\0';
    return 1;
  }
  if (param_1 < 0x800) {
    *param_2 = (byte)(param_1 >> 6) | 0xc0;
    param_2[1] = bVar3 & 0x3f | 0x80;
LAB_006df334:
    param_3[0] = '\0';
    param_3[1] = '\0';
    return 2;
  }
  if ((param_1 >> 0xb < 0x1b) || ((param_1 & 0xffffe000) == 0xe000)) {
    *param_2 = (byte)(param_1 >> 0xc) | 0xe0;
    param_2[1] = (byte)(param_1 >> 6) & 0x3f | 0x80;
    param_2[2] = bVar3 & 0x3f | 0x80;
    param_3[0] = '\0';
    param_3[1] = '\0';
    return 3;
  }
  if (param_1 >> 10 < 0x37) {
    uVar1 = (param_1 >> 6 & 0xf) + 1;
    *param_2 = (byte)(uVar1 >> 2) | 0xf0;
    param_2[1] = (byte)(param_1 >> 2) & 0xf | (byte)((uVar1 & 3) << 4) | 0x80;
    *param_3 = '\x01';
    param_3[1] = bVar3 & 3;
    return 2;
  }
  if (param_1 >> 0xd < 7) {
    if (*param_3 == '\x01') {
      bVar2 = param_3[1];
      param_2[1] = bVar3 & 0x3f | 0x80;
      *param_2 = (byte)(param_1 >> 6) & 0xf | (byte)((bVar2 & 3) << 4) | 0x80;
      goto LAB_006df334;
    }
  }
  else {
    if (param_1 - 0x10000 >> 0x14 == 0) {
      auVar5._4_4_ = param_1;
      auVar5._0_4_ = param_1;
      auVar5._8_4_ = param_1;
      auVar5._12_4_ = param_1;
      auVar5 = NEON_ushl(auVar5,_DAT_001f3fe0,4);
      uVar4 = CONCAT26(auVar5._12_2_,CONCAT24(auVar5._8_2_,CONCAT22(auVar5._4_2_,auVar5._0_2_))) &
              (ulong)CONCAT16((char)((ulong)DAT_001f5c18 >> 0x30),
                              (uint6)CONCAT14((char)((ulong)DAT_001f5c18 >> 0x20),
                                              (uint)CONCAT12((char)((ulong)DAT_001f5c18 >> 0x10),
                                                             (ushort)(byte)DAT_001f5c18)));
      *(uint *)param_2 =
           CONCAT13((byte)(uVar4 >> 0x30) | (byte)((ulong)DAT_001f5d08 >> 0x30),
                    CONCAT12((byte)(uVar4 >> 0x20) | (byte)((ulong)DAT_001f5d08 >> 0x20),
                             CONCAT11((byte)(uVar4 >> 0x10) | (byte)((ulong)DAT_001f5d08 >> 0x10),
                                      (byte)uVar4 | (byte)DAT_001f5d08)));
      param_3[0] = '\0';
      param_3[1] = '\0';
      return 4;
    }
    param_3[0] = '\0';
    param_3[1] = '\0';
  }
  return 0xffffffffffffffff;
}


// ===== 006df464  FUN_006df464 =====

undefined8 FUN_006df464(void)

{
  return DAT_00d64784;
}


// ===== 006df478  FUN_006df478 =====

undefined8 FUN_006df478(void)

{
  return DAT_00d5a1a4;
}


// ===== 006df48c  FUN_006df48c =====

undefined * FUN_006df48c(void)

{
  return PTR_s_native_00d5a1b0;
}


// ===== 006df4a0  FUN_006df4a0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_006df4a0(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  bool bVar3;
  ulong uVar4;
  
  uVar2 = ram0x00d64788;
  if (ram0x00d64788 == 0) {
    bVar3 = false;
  }
  else {
    uVar4 = FUN_006df52c(&PTR_LOOP_00d29b70,param_1,param_2);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar4 ^ param_3;
    bVar3 = uVar2 == (SUB168(auVar1 * ZEXT816(0x79d5f9e0de1e8cf5),8) ^
                     (uVar4 ^ param_3) * 0x79d5f9e0de1e8cf5);
  }
  return bVar3;
}


// ===== 006df518  FUN_006df518 =====

undefined1 FUN_006df518(void)

{
  return DAT_00d5a1a4._4_1_;
}


// ===== 006df52c  FUN_006df52c =====

ulong FUN_006df52c(ulong param_1,ulong *param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  if (param_3 < 9) {
    if (param_3 < 4) {
      if (param_3 == 0) {
        uVar8 = 0x57;
      }
      else {
        uVar8 = (ulong)*(byte *)((long)param_2 + (param_3 - 1)) | (ulong)(byte)*param_2 << 0x10 |
                (ulong)*(byte *)((long)param_2 + (param_3 >> 1)) << 8;
      }
    }
    else {
      uVar8 = CONCAT44((int)*param_2,*(undefined4 *)((long)param_2 + (param_3 - 4)));
    }
    uVar8 = *(ulong *)(&DAT_00208100 + param_3) ^ uVar8 ^ param_1;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar8;
    return SUB168(auVar4 * ZEXT816(0x79d5f9e0de1e8cf5),8) ^ uVar8 * 0x79d5f9e0de1e8cf5;
  }
  if (param_3 < 0x11) {
    param_1 = *(ulong *)(&DAT_00208100 + param_3) ^ *param_2 ^ param_1;
    uVar8 = *(ulong *)((long)param_2 + (param_3 - 8)) ^ 0x79d5f9e0de1e8cf5;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = param_1;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar8;
    return SUB168(auVar1 * auVar5,8) ^ param_1 * uVar8;
  }
  if (param_3 < 0x21) {
    uVar9 = param_2[1] ^ *(ulong *)(&DAT_00208100 + param_3) ^ param_1;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar9;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = *param_2 ^ 0x13198a2e03707344;
    uVar8 = *(ulong *)((long)param_2 + (param_3 - 8)) ^
            *(ulong *)(&DAT_00208100 + param_3) ^ param_1;
    uVar10 = *(ulong *)((long)param_2 + (param_3 - 0x10)) ^ 0x82efa98ec4e6c89;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar8;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar10;
    return uVar9 * (*param_2 ^ 0x13198a2e03707344) ^ uVar8 * uVar10 ^
           SUB168(auVar3 * auVar7,8) ^ SUB168(auVar2 * auVar6,8);
  }
  uVar8 = FUN_006df674();
  return uVar8;
}


// ===== 006df674  FUN_006df674 =====

ulong FUN_006df674(ulong param_1,ulong *param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  if (0x400 < param_3) {
    uVar9 = FUN_006df738();
    return uVar9;
  }
  if (param_3 < 0x41) {
    uVar9 = param_1 ^ param_3 ^ 0x243f6a8885a308d3;
    uVar10 = param_2[1] ^ uVar9;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar10;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = *param_2 ^ 0x13198a2e03707344;
    uVar9 = param_2[3] ^ uVar9;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar9;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = param_2[2] ^ 0xa4093822299f31d0;
    uVar9 = uVar10 * (*param_2 ^ 0x13198a2e03707344) ^ uVar9 * (param_2[2] ^ 0xa4093822299f31d0) ^
            SUB168(auVar2 * auVar6,8) ^ SUB168(auVar1 * auVar5,8);
    uVar10 = *(ulong *)((long)param_2 + (param_3 - 0x20)) ^ 0x13198a2e03707344;
    uVar12 = *(ulong *)((long)param_2 + (param_3 - 0x18)) ^ uVar9;
    uVar11 = *(ulong *)((long)param_2 + (param_3 - 0x10)) ^ 0xa4093822299f31d0;
    uVar9 = *(ulong *)((long)param_2 + (param_3 - 8)) ^ uVar9;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar12;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar10;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar9;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar11;
    return uVar12 * uVar10 ^ uVar9 * uVar11 ^ SUB168(auVar4 * auVar8,8) ^ SUB168(auVar3 * auVar7,8);
  }
  uVar9 = FUN_006df7a4();
  return uVar9;
}


// ===== 006df738  FUN_006df738 =====

void FUN_006df738(undefined8 param_1,long param_2,ulong param_3)

{
  if (0x3ff < param_3) {
    do {
      param_1 = FUN_006df7a4(param_1,param_2,0x400);
      param_3 = param_3 - 0x400;
      param_2 = param_2 + 0x400;
    } while (0x3ff < param_3);
  }
  if (param_3 != 0) {
    FUN_006df908(param_1,param_2,param_3,0);
    return;
  }
  return;
}


// ===== 006df7a4  FUN_006df7a4 =====

ulong FUN_006df7a4(ulong param_1,ulong *param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
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
  ulong *puVar17;
  ulong *puVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  
  uVar20 = param_1 ^ param_3 ^ 0x243f6a8885a308d3;
  puVar17 = param_2;
  uVar19 = param_3;
  uVar21 = uVar20;
  uVar22 = uVar20;
  uVar23 = uVar20;
  do {
    puVar18 = puVar17;
    Hint_Prefetch(puVar18 + 0x28,0,0,0);
    uVar19 = uVar19 - 0x40;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = puVar18[1] ^ uVar23;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = *puVar18 ^ 0x13198a2e03707344;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = puVar18[3] ^ uVar22;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = puVar18[2] ^ 0xa4093822299f31d0;
    uVar23 = SUB168(auVar1 * auVar9,8) ^ (puVar18[1] ^ uVar23) * (*puVar18 ^ 0x13198a2e03707344);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = puVar18[5] ^ uVar21;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = puVar18[4] ^ 0x82efa98ec4e6c89;
    uVar22 = SUB168(auVar2 * auVar10,8) ^ (puVar18[3] ^ uVar22) * (puVar18[2] ^ 0xa4093822299f31d0);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = puVar18[7] ^ uVar20;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = puVar18[6] ^ 0x452821e638d01377;
    uVar21 = SUB168(auVar3 * auVar11,8) ^ (puVar18[5] ^ uVar21) * (puVar18[4] ^ 0x82efa98ec4e6c89);
    uVar20 = SUB168(auVar4 * auVar12,8) ^ (puVar18[7] ^ uVar20) * (puVar18[6] ^ 0x452821e638d01377);
    puVar17 = puVar18 + 8;
  } while (0x40 < uVar19);
  uVar21 = uVar20 + uVar21 ^ uVar23 ^ uVar22;
  if (0x20 < uVar19) {
    uVar19 = puVar18[8] ^ 0x13198a2e03707344;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = puVar18[9] ^ uVar21;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar19;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = puVar18[0xb] ^ uVar21;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = puVar18[10] ^ 0xa4093822299f31d0;
    uVar21 = (puVar18[9] ^ uVar21) * uVar19 ^
             (puVar18[0xb] ^ uVar21) * (puVar18[10] ^ 0xa4093822299f31d0) ^
             SUB168(auVar6 * auVar14,8) ^ SUB168(auVar5 * auVar13,8);
  }
  uVar22 = *(ulong *)((long)param_2 + (param_3 - 0x20)) ^ 0x13198a2e03707344;
  uVar23 = *(ulong *)((long)param_2 + (param_3 - 0x18)) ^ uVar21;
  uVar19 = *(ulong *)((long)param_2 + (param_3 - 0x10)) ^ 0xa4093822299f31d0;
  uVar21 = *(ulong *)((long)param_2 + (param_3 - 8)) ^ uVar21;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar23;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar22;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar21;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar19;
  return uVar23 * uVar22 ^ uVar21 * uVar19 ^ SUB168(auVar8 * auVar16,8) ^ SUB168(auVar7 * auVar15,8)
  ;
}


// ===== 006df908  FUN_006df908 =====

ulong FUN_006df908(ulong param_1,ulong *param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  if (param_3 < 9) {
    if (param_3 < 4) {
      if (param_3 == 0) {
        uVar8 = 0x57;
      }
      else {
        uVar8 = (ulong)*(byte *)((long)param_2 + (param_3 - 1)) | (ulong)(byte)*param_2 << 0x10 |
                (ulong)*(byte *)((long)param_2 + (param_3 >> 1)) << 8;
      }
    }
    else {
      uVar8 = CONCAT44((int)*param_2,*(undefined4 *)((long)param_2 + (param_3 - 4)));
    }
    uVar8 = *(ulong *)(&DAT_00208100 + param_3) ^ uVar8 ^ param_1;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar8;
    return SUB168(auVar4 * ZEXT816(0x79d5f9e0de1e8cf5),8) ^ uVar8 * 0x79d5f9e0de1e8cf5;
  }
  if (param_3 < 0x11) {
    param_1 = *(ulong *)(&DAT_00208100 + param_3) ^ *param_2 ^ param_1;
    uVar8 = *(ulong *)((long)param_2 + (param_3 - 8)) ^ 0x79d5f9e0de1e8cf5;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = param_1;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar8;
    return SUB168(auVar1 * auVar5,8) ^ param_1 * uVar8;
  }
  if (param_3 < 0x21) {
    uVar9 = param_2[1] ^ *(ulong *)(&DAT_00208100 + param_3) ^ param_1;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar9;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = *param_2 ^ 0x13198a2e03707344;
    uVar8 = *(ulong *)((long)param_2 + (param_3 - 8)) ^
            *(ulong *)(&DAT_00208100 + param_3) ^ param_1;
    uVar10 = *(ulong *)((long)param_2 + (param_3 - 0x10)) ^ 0x82efa98ec4e6c89;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar8;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar10;
    return uVar9 * (*param_2 ^ 0x13198a2e03707344) ^ uVar8 * uVar10 ^
           SUB168(auVar3 * auVar7,8) ^ SUB168(auVar2 * auVar6,8);
  }
  uVar8 = FUN_006df674();
  return uVar8;
}


// ===== 006dfa50  FUN_006dfa50 =====

undefined4 FUN_006dfa50(void)

{
  if ((int)DAT_00d64794 != 0xdd) {
    FUN_006dfb1c(&DAT_00d64794);
  }
  return DAT_00d64790;
}


// ===== 006dfa98  FUN_006dfa98 =====

undefined4 FUN_006dfa98(void)

{
  char *pcVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined1 *puVar4;
  
  pcVar1 = (char *)__emutls_get_address(&DAT_00d5a1d8);
  if (*pcVar1 == '\x01') {
    puVar2 = (undefined4 *)__emutls_get_address(&DAT_00d5a1b8);
  }
  else {
    lVar3 = syscall(0xb2);
    puVar2 = (undefined4 *)__emutls_get_address(&DAT_00d5a1b8);
    *puVar2 = (int)lVar3;
    puVar4 = (undefined1 *)__emutls_get_address(&DAT_00d5a1d8);
    *puVar4 = 1;
  }
  return *puVar2;
}


// ===== 006dfb1c  FUN_006dfb1c =====

void FUN_006dfb1c(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d0f4a0(0,0x65c2937b,param_1);
  if ((iVar1 == 0) || (iVar1 = FUN_006dfc38(param_1,3,&DAT_00208128,0), iVar1 == 0)) {
    DAT_00d64790 = FUN_0054a1f8();
    iVar1 = FUN_00d0f680(0xdd,param_1);
    if (iVar1 == 0x5a308d2) {
      FUN_006dfc10(param_1,1);
      return;
    }
  }
  return;
}


// ===== 006dfbb8  FUN_006dfbb8 =====

void FUN_006dfbb8(undefined8 param_1,ulong param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)__errno();
  uVar1 = *puVar2;
  syscall(0x62,param_1,0x80,param_2 & 0xffffffff,0);
  *puVar2 = uVar1;
  return;
}


// ===== 006dfc10  FUN_006dfc10 =====

void FUN_006dfc10(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  
  uVar1 = 0x7fffffff;
  if ((param_2 & 1) == 0) {
    uVar1 = 1;
  }
  syscall(0x62,param_1,0x81,(ulong)uVar1,0);
  return;
}


// ===== 006dfc38  FUN_006dfc38 =====

ulong FUN_006dfc38(ulong *param_1,int param_2,long param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  int *piVar5;
  
  iVar2 = 0;
LAB_006dfc7c:
  do {
    uVar4 = *param_1;
    if (param_2 != 0) {
      iVar1 = 0;
      do {
        piVar5 = (int *)(param_3 + (long)iVar1 * 0xc);
        iVar3 = (int)uVar4;
        if (iVar3 == *piVar5) {
          if (((piVar5[1] == iVar3) ||
              (iVar1 = FUN_00d0f4e0(uVar4 & 0xffffffff,piVar5[1],param_1), iVar1 == iVar3)) &&
             ((char)piVar5[2] == '\x01')) {
            return uVar4 & 0xffffffff;
          }
          goto LAB_006dfc7c;
        }
        iVar1 = iVar1 + 1;
      } while (param_2 != iVar1);
    }
    iVar2 = iVar2 + 1;
    FUN_006dfbb8(param_1,uVar4 & 0xffffffff,iVar2,param_4);
  } while( true );
}


// ===== 006dfd04  FUN_006dfd04 =====

long FUN_006dfd04(ulong param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long local_20;
  undefined4 local_18;
  
  if (param_1 >> 0x21 == 0) {
    return (param_2 >> 2 & 0x3fffffff) + param_1 * 1000000000;
  }
  local_20 = 0;
  local_18 = 0;
  lVar2 = FUN_006e3378(param_1,param_2 & 0xffffffff,0,4,&local_20);
  lVar1 = lVar2;
  if (lVar2 != -0x8000000000000000) {
    lVar1 = lVar2 + -1;
  }
  if ((local_20 == -1 || local_20 + 1 < 0 != SCARRY8(local_20,1)) && lVar2 < 1) {
    lVar2 = lVar1;
  }
  return lVar2;
}


// ===== 006dfd80  FUN_006dfd80 =====

undefined1  [16] FUN_006dfd80(ulong param_1,ulong param_2)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  uVar2 = 999999999;
  uVar1 = 0x7fffffffffffffff;
  if (param_1 != 0) {
    uVar2 = ~(uint)((long)param_1 >> 0x3f) & 999999999;
    uVar1 = (long)param_1 >> 0x3f ^ 0x7fffffffffffffff;
  }
  uVar3 = (ulong)uVar2;
  if ((param_2 & 0xffffffff) != 0xffffffff) {
    uVar1 = param_1;
    uVar3 = (param_2 & 0xffffffff) >> 2;
  }
  auVar4._8_8_ = uVar3 / 1000;
  auVar4._0_8_ = uVar1;
  return auVar4;
}


// ===== 006dfdd8  FUN_006dfdd8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006dfdd8(undefined8 *param_1,undefined8 param_2,long param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined8 local_50;
  undefined *local_48;
  long local_38;
  
  uVar2 = _UNK_001f2648;
  uVar1 = _DAT_001f2640;
  if ((param_3 == 0x7fffffffffffffff) && (param_4 == -1)) {
    param_1[4] = 0xaaaaaaaaaaaaaa00;
    auVar4 = FUN_006e0288(0x7fffffffffffffff,0xc,0x1f,0,0x17,0x3b,0x3b);
    *param_1 = auVar4._0_8_;
    param_1[1] = auVar4._8_8_ & 0xffffffffff;
    param_1[2] = 0x7fffffffffffffff;
    local_48 = &DAT_001b7267;
    param_1[3] = 0xffffffff;
  }
  else {
    if ((param_3 == -0x8000000000000000) && (param_4 == -1)) {
      param_1[2] = 0x8000000000000000;
      param_1[1] = uVar2;
      *param_1 = uVar1;
      param_1[3] = 0xffffffff;
      param_1[4] = 0xaaaaaaaaaaaaaa00;
      param_1[5] = &DAT_001b7267;
      return;
    }
    lVar3 = FUN_005183c8(0);
    puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    local_48 = &DAT_aaaaaaaaaaaaaaaa;
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    local_38 = lVar3 / 1000000 + param_3;
    FUN_006e0664(&local_60,param_2,&local_38);
    *param_1 = local_60;
    param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
    param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
    *(char *)((long)param_1 + 0xc) = (char)((ulong)puStack_58 >> 0x20);
    param_1[4] = &DAT_aaaaaaaaaaaaaaaa;
    param_1[3] = &DAT_aaaaaaaaaaaaaaaa;
    *(int *)(param_1 + 1) = (int)puStack_58;
    *(int *)(param_1 + 3) = param_4;
    *(undefined4 *)((long)param_1 + 0x1c) = (undefined4)local_50;
    param_1[2] = 0;
    *(undefined1 *)(param_1 + 4) = local_50._4_1_;
  }
  param_1[5] = local_48;
  return;
}


// ===== 006dff44  FUN_006dff44 =====

void FUN_006dff44(long param_1,long param_2,long param_3,ulong param_4,ulong param_5,ulong param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  
  if (param_6 < 0x3c) {
    if (param_5 < 0x3c) {
      if (param_4 < 0x18) {
        if ((param_2 - 1U < 0xc) && (param_3 - 1U < 0x1c)) {
          return;
        }
        if (param_2 != 0xc) {
          lVar6 = param_2 / 0xc;
          param_2 = param_2 % 0xc;
          param_1 = lVar6 + param_1;
          if (param_2 < 1) {
            param_1 = param_1 + -1;
            param_2 = param_2 + 0xc;
          }
        }
        lVar6 = 0;
      }
      else {
        lVar9 = param_2 % 0xc;
        lVar6 = param_2 / 0xc + param_1;
        lVar10 = (long)param_4 % 0x18;
        if (lVar9 < 1) {
          lVar6 = lVar6 + -1;
          lVar9 = lVar9 + 0xc;
        }
        bVar5 = param_2 != 0xc;
        param_2 = 0xc;
        if (bVar5) {
          param_1 = lVar6;
          param_2 = lVar9;
        }
        lVar6 = (long)param_4 / 0x18 + (lVar10 >> 0x3f);
        uVar4 = (uint)lVar10 + 0x18;
        if (-1 < lVar10) {
          uVar4 = (uint)lVar10;
        }
        param_4 = (ulong)uVar4;
      }
    }
    else {
      lVar7 = (long)param_5 % 0x3c;
      lVar6 = (long)param_5 / 0x3c + (lVar7 >> 0x3f);
      lVar9 = lVar6 / 0x18;
      iVar1 = (int)lVar6 + (int)lVar9 * -0x18 + (int)param_4 + (int)((long)param_4 / 0x18) * -0x18;
      lVar10 = param_2 % 0xc;
      lVar6 = param_2 / 0xc + param_1;
      iVar8 = (int)(char)iVar1 / 0x18;
      uVar4 = iVar1 + iVar8 * -0x18;
      if (lVar10 < 1) {
        lVar6 = lVar6 + -1;
        lVar10 = lVar10 + 0xc;
      }
      bVar5 = param_2 != 0xc;
      param_2 = 0xc;
      if (bVar5) {
        param_1 = lVar6;
        param_2 = lVar10;
      }
      lVar6 = lVar9 + (long)param_4 / 0x18 + (long)iVar8 + (long)(int)-(uVar4 >> 7 & 1);
      uVar2 = uVar4 + 0x18;
      if (-1 < (char)uVar4) {
        uVar2 = uVar4;
      }
      param_4 = (ulong)uVar2;
      uVar4 = (uint)lVar7 + 0x3c;
      if (-1 < lVar7) {
        uVar4 = (uint)lVar7;
      }
      param_5 = (ulong)uVar4;
    }
  }
  else {
    lVar7 = (long)param_6 % 0x3c;
    lVar6 = (long)param_6 / 0x3c + (lVar7 >> 0x3f);
    lVar9 = lVar6 % 0x3c + (long)param_5 % 0x3c;
    iVar8 = (int)lVar9;
    uVar4 = iVar8 + ((uint)((char)lVar9 * -0x77) >> 8);
    iVar1 = ((int)(uVar4 * 0x1000000) >> 0x1d) + ((uVar4 & 0x80) >> 7);
    uVar2 = iVar8 + iVar1 * -0x3c;
    lVar6 = lVar6 / 0x3c + (long)param_5 / 0x3c + (long)iVar1 + (long)(int)-(uVar2 >> 7 & 1);
    lVar10 = lVar6 / 0x18;
    iVar1 = (int)lVar6 + (int)lVar10 * -0x18 + (int)param_4 + (int)((long)param_4 / 0x18) * -0x18;
    lVar9 = param_2 % 0xc;
    lVar6 = param_2 / 0xc + param_1;
    uVar4 = (uint)lVar7 + 0x3c;
    if (-1 < lVar7) {
      uVar4 = (uint)lVar7;
    }
    param_6 = (ulong)uVar4;
    iVar8 = (int)(char)iVar1 / 0x18;
    if (lVar9 < 1) {
      lVar6 = lVar6 + -1;
    }
    if (lVar9 < 1) {
      lVar9 = lVar9 + 0xc;
    }
    bVar5 = param_2 != 0xc;
    param_2 = 0xc;
    if (bVar5) {
      param_1 = lVar6;
      param_2 = lVar9;
    }
    uVar3 = iVar1 + iVar8 * -0x18;
    uVar4 = uVar2 + 0x3c;
    if (-1 < (char)uVar2) {
      uVar4 = uVar2;
    }
    param_5 = (ulong)uVar4;
    lVar6 = lVar10 + (long)param_4 / 0x18 + (long)iVar8 + (long)(int)-(uVar3 >> 7 & 1);
    uVar4 = uVar3 + 0x18;
    if (-1 < (char)uVar3) {
      uVar4 = uVar3;
    }
    param_4 = (ulong)uVar4;
  }
  FUN_006e0288(param_1,param_2,param_3,lVar6,param_4,param_5,param_6);
  return;
}


// ===== 006e0288  FUN_006e0288 =====

undefined1  [16]
FUN_006e0288(long param_1,byte param_2,long param_3,long param_4,ulong param_5,int param_6,
            undefined4 param_7)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  undefined1 auVar12 [16];
  
  lVar11 = param_1 % 400 + (param_4 / 0x23ab1) * 400;
  param_4 = param_4 % 0x23ab1;
  lVar6 = lVar11 + -400;
  if (-1 < param_4) {
    lVar6 = lVar11;
  }
  uVar10 = lVar6 + (param_3 / 0x23ab1) * 400;
  lVar6 = param_4 + 0x23ab1;
  if (-1 < param_4) {
    lVar6 = param_4;
  }
  uVar5 = lVar6 + param_3 % 0x23ab1;
  if ((long)uVar5 < 1) {
    if ((long)(uVar5 + 0x16c) < 0 == SCARRY8(uVar5,0x16c)) {
      uVar7 = uVar10 - 1;
      if ('\x02' < (char)param_2) {
        uVar7 = uVar10;
      }
      if ((uVar7 & 3) == 0) {
        lVar11 = uVar7 * -0x70a3d70a3d70a3d7;
        lVar6 = 0x16d;
        if ((lVar11 + 0x51eb851eb851eb0U >> 4 | lVar11 << 0x3c) < 0xa3d70a3d70a3d7 ||
            0x28f5c28f5c28f5c < (lVar11 + 0x51eb851eb851eb8U >> 2 | lVar11 << 0x3e)) {
          lVar6 = 0x16e;
        }
      }
      else {
        lVar6 = 0x16d;
      }
      uVar10 = uVar10 - 1;
      uVar5 = lVar6 + uVar5;
    }
    else {
      uVar10 = uVar10 - 400;
      uVar5 = uVar5 + 0x23ab1;
    }
  }
  else if (0x23ab1 < uVar5) {
    uVar10 = uVar10 + 400;
    uVar5 = uVar5 - 0x23ab1;
  }
  if (0x16d < uVar5) {
    uVar7 = uVar10;
    if ('\x02' < (char)param_2) {
      uVar7 = uVar10 + 1;
    }
    iVar8 = (int)((long)uVar7 % 400);
    iVar9 = iVar8 + 400;
    if (-1 < (long)uVar7 % 400) {
      iVar9 = iVar8;
    }
    lVar6 = 0x8eac;
    if (300 < iVar9 || iVar9 == 0) {
      lVar6 = 0x8ead;
    }
    if (lVar6 < (long)uVar5) {
      do {
        iVar8 = iVar9 + 100;
        uVar5 = uVar5 - lVar6;
        uVar10 = uVar10 + 100;
        iVar9 = iVar9 + -300;
        if (iVar8 < 400) {
          iVar9 = iVar8;
        }
        lVar6 = 0x8eac;
        if (300 < iVar9 || iVar9 == 0) {
          lVar6 = 0x8ead;
        }
      } while (lVar6 < (long)uVar5);
    }
    if (iVar9 == 0) goto LAB_006e04d0;
    while( true ) {
      lVar6 = 0x5b5;
      if ((iVar9 < 0x12d) && (lVar6 = 0x5b4, (iVar9 + -1) % 100 < 0x60)) {
        lVar6 = 0x5b5;
      }
      uVar7 = uVar5 - lVar6;
      uVar1 = uVar10;
      uVar2 = uVar5;
      if (uVar7 == 0 || (long)uVar5 < lVar6) break;
      while( true ) {
        iVar8 = iVar9 + 4;
        uVar10 = uVar10 + 4;
        iVar9 = iVar9 + -0x18c;
        if (iVar8 < 400) {
          iVar9 = iVar8;
        }
        uVar5 = uVar7;
        if (iVar9 != 0) break;
LAB_006e04d0:
        uVar7 = uVar5 - 0x5b5;
        uVar1 = uVar10;
        uVar2 = uVar5;
        if (uVar7 == 0 || (long)uVar5 < 0x5b5) goto LAB_006e0554;
      }
    }
LAB_006e0554:
    do {
      uVar5 = uVar2;
      uVar10 = uVar1;
      uVar7 = ('\x02' < (char)param_2) + uVar10;
      if ((uVar7 & 3) == 0) {
        lVar11 = uVar7 * -0x70a3d70a3d70a3d7;
        lVar6 = 0x16d;
        if ((lVar11 + 0x51eb851eb851eb0U >> 4 | lVar11 << 0x3c) < 0xa3d70a3d70a3d7 ||
            0x28f5c28f5c28f5c < (lVar11 + 0x51eb851eb851eb8U >> 2 | lVar11 << 0x3e)) {
          lVar6 = 0x16e;
        }
      }
      else {
        lVar6 = 0x16d;
      }
      uVar1 = uVar10 + 1;
      uVar2 = uVar5 - lVar6;
    } while (uVar5 - lVar6 != 0 && lVar6 <= (long)uVar5);
  }
  bVar3 = param_2;
  if (0x1c < (long)uVar5) {
    while( true ) {
      param_2 = bVar3;
      uVar4 = 0;
      if (((uVar10 & 3) == 0) && (param_2 == 2)) {
        if ((uVar10 * -0x70a3d70a3d70a3d7 + 0x51eb851eb851eb8 >> 2 |
            uVar10 * -0x70a3d70a3d70a3d7 << 0x3e) < 0x28f5c28f5c28f5d) {
          uVar4 = (uint)((uVar10 * -0x70a3d70a3d70a3d7 + 0x51eb851eb851eb0 >> 4 |
                         uVar10 * -0x70a3d70a3d70a3d7 << 0x3c) < 0xa3d70a3d70a3d7);
        }
        else {
          uVar4 = 1;
        }
      }
      uVar7 = uVar5 - (long)(int)(uVar4 + *(int *)(&DAT_0020814c + (long)(char)param_2 * 4));
      if (uVar7 == 0 ||
          (long)uVar5 < (long)(int)(uVar4 + *(int *)(&DAT_0020814c + (long)(char)param_2 * 4)))
      break;
      if ('\f' < (char)(param_2 + 1)) {
        uVar10 = uVar10 + 1;
      }
      uVar5 = uVar7;
      bVar3 = 1;
      if ((char)(param_2 + 1) < '\r') {
        bVar3 = param_2 + 1;
      }
    }
  }
  auVar12._8_8_ =
       CONCAT44(param_7,param_6 << 0x18) & 0xffffffffff | (param_5 & 0xff) << 0x10 |
       (uVar5 & 0xff) << 8 | (ulong)param_2;
  auVar12._0_8_ = (param_1 - param_1 % 400) + uVar10;
  return auVar12;
}


// ===== 006e0664  FUN_006e0664 =====

void FUN_006e0664(undefined8 param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (lVar1 == 0) {
    lVar1 = FUN_006e06ac();
  }
                    /* WARNING: Could not recover jumptable at 0x006e06a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(lVar1 + 0x18) + 0x10))(param_1,*(long **)(lVar1 + 0x18),param_3);
  return;
}


// ===== 006e06ac  FUN_006e06ac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * FUN_006e06ac(void)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  if (((DAT_00d647a0 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d647a0), iVar1 != 0)) {
    pvVar2 = operator_new(0x20);
    FUN_005d3510(pvVar2,&DAT_001ed2fc);
    uVar3 = thunk_FUN_006e1030();
    *(undefined8 *)((long)pvVar2 + 0x18) = uVar3;
    unique0x1000004f = pvVar2;
    FUN_0054ff1c(&DAT_00d647a0);
  }
  return ram0x00d64798;
}


// ===== 006e0730  thunk_FUN_006e1030 =====

void thunk_FUN_006e1030(void)

{
  FUN_006e1030();
  return;
}


// ===== 006e0738  FUN_006e0738 =====

void FUN_006e0738(void)

{
  return;
}


// ===== 006e0740  FUN_006e0740 =====

void FUN_006e0740(undefined8 *param_1,long param_2,long param_3,int *param_4)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined1 auVar8 [16];
  
  auVar8 = FUN_006dff44(0x7b2,1,1,0,param_3 / 0x3c,param_3 % 0x3c);
  lVar5 = auVar8._8_8_;
  auVar8 = FUN_006dff44(auVar8._0_8_,(long)auVar8[8],(lVar5 << 0x30) >> 0x38,(lVar5 << 0x28) >> 0x38
                        ,((lVar5 << 0x20) >> 0x38) + (long)(*param_4 / 0x3c),
                        ((lVar5 << 0x18) >> 0x38) + (long)(*param_4 % 0x3c));
  iVar1 = *param_4;
  iVar4 = param_4[10];
  cVar3 = *(char *)(param_2 + 0x57);
  uVar6 = (ulong)cVar3;
  *param_1 = auVar8._0_8_;
  param_1[1] = auVar8._8_8_ & 0xffffffffff;
  *(int *)(param_1 + 2) = iVar1;
  bVar2 = *(byte *)((long)param_4 + 0x29);
  *(char *)((long)param_1 + 0x14) = (char)iVar4;
  if ((long)uVar6 < 0) {
    uVar6 = *(ulong *)(param_2 + 0x48);
  }
  if (uVar6 < bVar2) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/string:1351: libc++ Hardening assertion __pos <= size() failed: string index out of bounds\n"
              );
  }
  puVar7 = (undefined8 *)(param_2 + 0x40);
  if (cVar3 < '\0') {
    puVar7 = (undefined8 *)*puVar7;
  }
  param_1[3] = (long)puVar7 + (ulong)bVar2;
  return;
}


// ===== 006e0850  FUN_006e0850 =====

undefined8 FUN_006e0850(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  uint uVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  void *pvVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  FUN_006e0bc4(param_1 + 0x20,1);
  lVar1 = *(long *)(param_1 + 0x28);
  if (*(long *)(param_1 + 0x20) == lVar1) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__vector/vector.h:439: libc++ Hardening assertion !empty() failed: back() called on an empty vector\n"
              );
  }
  puVar7 = (undefined4 *)(lVar1 + -0x30);
  *puVar7 = (int)*param_2;
  *(undefined2 *)(lVar1 + -8) = 0;
  pvVar8 = *(void **)(param_1 + 8);
  pvVar4 = *(void **)(param_1 + 0x10);
  uVar6 = (long)pvVar4 * -0x555555555555555 - 0x10U >> 4;
  uVar5 = (ulong)(((long)pvVar8 - (long)pvVar4) * 0x555555555555555) >> 4;
  if (uVar6 <= uVar5) {
    uVar5 = uVar6;
  }
  if ((1 < uVar5) && ((((int)pvVar8 - (int)pvVar4 | -(int)pvVar4) & 0xfU) == 0)) {
    uVar5 = uVar5 & 0xffffffffffffffe;
    pvVar4 = (void *)((long)pvVar4 + uVar5 * -0x30);
    do {
      uVar5 = uVar5 - 2;
    } while (uVar5 != 0);
  }
  do {
    if (pvVar4 == pvVar8) {
      *(void **)(param_1 + 0x10) = pvVar8;
      if ((ulong)((*(long *)(param_1 + 0x18) - (long)pvVar8 >> 4) * -0x5555555555555555) < 0xc) {
        pvVar4 = operator_new(0x240);
        *(void **)(param_1 + 8) = pvVar4;
        *(void **)(param_1 + 0x10) = pvVar4;
        *(long *)(param_1 + 0x18) = (long)pvVar4 + 0x240;
        if (pvVar8 != (void *)0x0) {
          operator_delete(pvVar8);
        }
      }
      lVar11 = 0;
      do {
        uVar10 = *(undefined8 *)((long)&DAT_00208180 + lVar11);
        puVar2 = (undefined8 *)
                 FUN_006e0e18((undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
        *puVar2 = uVar10;
        *(undefined1 *)(puVar2 + 1) = 0;
        FUN_006e0740(&local_80,param_1,uVar10,puVar7);
        puVar2[3] = uStack_78;
        puVar2[2] = local_80;
        lVar9 = puVar2[3];
        auVar12 = FUN_006dff44(puVar2[2],(long)(char)lVar9,(lVar9 << 0x30) >> 0x38,
                               (lVar9 << 0x28) >> 0x38,(lVar9 << 0x20) >> 0x38,
                               ((lVar9 << 0x18) >> 0x38) + -1);
        lVar11 = lVar11 + 8;
        puVar2[4] = auVar12._0_8_;
        puVar2[5] = auVar12._8_8_ & 0xffffffffff;
      } while (lVar11 != 0x60);
      *(undefined1 *)(param_1 + 0x38) = 0;
      FUN_006e31b0(&local_80,param_2);
      puVar2 = (undefined8 *)(param_1 + 0x40);
      if (*(char *)(param_1 + 0x57) < '\0') {
        operator_delete(*(void **)(param_1 + 0x40));
      }
      *(undefined8 *)(param_1 + 0x50) = local_70;
      lVar11 = (long)*(char *)(param_1 + 0x57);
      *(undefined8 *)(param_1 + 0x48) = uStack_78;
      *puVar2 = local_80;
      if (lVar11 < 0) {
        lVar11 = *(long *)(param_1 + 0x48);
        uVar3 = (uint)(byte)(*(ulong *)(param_1 + 0x50) >> 0x38);
        lVar9 = (*(ulong *)(param_1 + 0x50) & 0x7fffffffffffffff) - 1;
      }
      else {
        lVar9 = 0x16;
        uVar3 = (uint)*(char *)(param_1 + 0x57);
      }
      if (lVar9 == lVar11) {
        FUN_0054774c(param_1 + 0x40,lVar9,1,lVar9,lVar9,0,0);
        uVar3 = (uint)*(byte *)(param_1 + 0x57);
        *(long *)(param_1 + 0x48) = lVar9;
      }
      if ((uVar3 >> 7 & 1) != 0) {
        puVar2 = (undefined8 *)*puVar2;
      }
      *(undefined1 *)((long)puVar2 + lVar11) = 0;
      lVar11 = lVar11 + 1;
      if (*(char *)(param_1 + 0x57) < '\0') {
        *(long *)(param_1 + 0x48) = lVar11;
      }
      else {
        *(byte *)(param_1 + 0x57) = (byte)lVar11 & 0x7f;
      }
      *(undefined1 *)((long)puVar2 + lVar11) = 0;
      if (*(char *)(param_1 + 0x87) < '\0') {
        **(undefined1 **)(param_1 + 0x70) = 0;
        *(undefined8 *)(param_1 + 0x78) = 0;
      }
      else {
        *(undefined1 *)(param_1 + 0x70) = 0;
        *(undefined1 *)(param_1 + 0x87) = 0;
      }
      *(undefined1 *)(param_1 + 0x88) = 0;
      FUN_006e0740(&local_80,param_1,0x7fffffffffffffff,puVar7);
      *(undefined8 *)(lVar1 + -0x20) = uStack_78;
      *(undefined8 *)(lVar1 + -0x28) = local_80;
      FUN_006e0740(&local_80,param_1,0x8000000000000000,puVar7);
      *(undefined8 *)(lVar1 + -0x10) = uStack_78;
      *(undefined8 *)(lVar1 + -0x18) = local_80;
      pvVar8 = *(void **)(param_1 + 8);
      uVar5 = (long)*(void **)(param_1 + 0x10) - (long)pvVar8;
      if (uVar5 < (ulong)(*(long *)(param_1 + 0x18) - (long)pvVar8)) {
        if (*(void **)(param_1 + 0x10) == pvVar8) {
          pvVar4 = (void *)0x0;
        }
        else {
          if (0x555555555555555 < (ulong)(((long)uVar5 >> 4) * -0x5555555555555555)) {
                    /* WARNING: Subroutine does not return */
            FUN_005d55a4();
          }
          pvVar4 = operator_new(uVar5);
        }
        memcpy(pvVar4,pvVar8,uVar5);
        pvVar8 = *(void **)(param_1 + 8);
        *(void **)(param_1 + 8) = pvVar4;
        *(ulong *)(param_1 + 0x10) = (long)pvVar4 + uVar5;
        *(ulong *)(param_1 + 0x18) = (long)pvVar4 + uVar5;
        if (pvVar8 != (void *)0x0) {
          operator_delete(pvVar8);
        }
      }
      return 1;
    }
    pvVar4 = (void *)((long)pvVar4 + -0x30);
  } while (pvVar4 != (void *)0x0);
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 006e0bc4  FUN_006e0bc4 =====

void FUN_006e0bc4(undefined8 *param_1,ulong param_2)

{
  void *__src;
  long lVar1;
  bool bVar2;
  void *__dest;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  size_t __n;
  
  __src = (void *)*param_1;
  puVar3 = (undefined8 *)param_1[1];
  __n = (long)puVar3 - (long)__src;
  bVar2 = param_2 < (ulong)(((long)__n >> 4) * -0x5555555555555555);
  lVar1 = param_2 + ((long)__n >> 4) * 0x5555555555555555;
  if (bVar2 || lVar1 == 0) {
    if (bVar2) {
      puVar5 = (undefined8 *)((long)__src + param_2 * 0x30);
      uVar4 = (ulong)(((long)puVar5 - (long)puVar3) * 0x555555555555555) >> 4;
      uVar7 = (long)puVar3 * -0x555555555555555 - 0x10U >> 4;
      if (uVar7 <= uVar4) {
        uVar4 = uVar7;
      }
      if ((1 < uVar4) && ((((int)__src - (int)puVar3 | -(int)puVar3) & 0xfU) == 0)) {
        uVar4 = uVar4 & 0xffffffffffffffe;
        puVar3 = puVar3 + uVar4 * -6;
        do {
          uVar4 = uVar4 - 2;
        } while (uVar4 != 0);
      }
      while (puVar3 != puVar5) {
        puVar3 = puVar3 + -6;
        if (puVar3 == (undefined8 *)0x0) {
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
    lVar6 = param_1[2] - (long)__src >> 4;
    uVar4 = lVar6 * -0x5555555555555555;
    if (uVar4 < param_2) {
      if (param_2 < 0x555555555555556) {
        uVar7 = lVar6 * 0x5555555555555556;
        if (uVar7 < param_2 || uVar7 - param_2 == 0) {
          uVar7 = param_2;
        }
        if (0x2aaaaaaaaaaaaa9 < uVar4) {
          uVar7 = 0x555555555555555;
        }
        if (uVar7 < 0x555555555555556) {
          __dest = operator_new(uVar7 * 0x30);
          if (lVar1 * 0x30 == 0) {
            puVar3 = (undefined8 *)((long)__dest + __n);
          }
          else {
            puVar3 = (undefined8 *)((long)__dest + lVar1 * 0x30 + __n);
            puVar5 = (undefined8 *)((long)__dest + __n);
            do {
              if (puVar5 == (undefined8 *)0x0) goto LAB_006e0dfc;
              puVar5[1] = 0;
              *puVar5 = 0;
              puVar5[3] = 0;
              puVar5[2] = 0;
              puVar5[5] = 0;
              puVar5[4] = 0;
              puVar5[1] = 0x7b2;
              *(undefined2 *)(puVar5 + 2) = 0x101;
              puVar5[3] = 0x7b2;
              *(undefined2 *)(puVar5 + 4) = 0x101;
              puVar5 = puVar5 + 6;
            } while (puVar5 != puVar3);
          }
          memcpy(__dest,__src,__n);
          *param_1 = __dest;
          param_1[1] = puVar3;
          param_1[2] = (void *)((long)__dest + uVar7 * 0x30);
          if (__src == (void *)0x0) {
            return;
          }
          operator_delete(__src);
          return;
        }
      }
      else {
        FUN_006e29b8();
      }
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    puVar5 = puVar3;
    if (lVar1 * 0x30 != 0) {
      puVar5 = puVar3 + lVar1 * 6;
      do {
        if (puVar3 == (undefined8 *)0x0) {
LAB_006e0dfc:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        puVar3[1] = 0;
        *puVar3 = 0;
        puVar3[3] = 0;
        puVar3[2] = 0;
        puVar3[5] = 0;
        puVar3[4] = 0;
        puVar3[1] = 0x7b2;
        *(undefined2 *)(puVar3 + 2) = 0x101;
        puVar3[3] = 0x7b2;
        *(undefined2 *)(puVar3 + 4) = 0x101;
        puVar3 = puVar3 + 6;
      } while (puVar3 != puVar5);
    }
    param_1[1] = puVar5;
  }
  return;
}


// ===== 006e0e18  FUN_006e0e18 =====

undefined8 * FUN_006e0e18(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  size_t sVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  void *__dest;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  void *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  void *pvStack_38;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    puVar8 = param_2;
    if (param_2 == puVar1) {
      if (param_2 == (undefined8 *)0x0) {
LAB_006e1014:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      puVar1[3] = 0;
      puVar1[2] = 0;
      puVar1[5] = 0;
      puVar1[4] = 0;
      puVar1[1] = 0;
      *puVar1 = 0;
      puVar1[2] = 0x7b2;
      *(undefined2 *)(puVar1 + 3) = 0x101;
      puVar1[4] = 0x7b2;
      *(undefined2 *)(puVar1 + 5) = 0x101;
      param_1[1] = (long)(puVar1 + 6);
    }
    else {
      puVar2 = puVar1;
      for (puVar5 = puVar1 + -6; puVar5 < puVar1; puVar5 = puVar5 + 6) {
        if (puVar2 == (undefined8 *)0x0) goto LAB_006e1014;
        uVar12 = puVar5[2];
        uVar11 = puVar5[5];
        uVar10 = puVar5[4];
        uVar14 = puVar5[1];
        uVar13 = *puVar5;
        puVar2[3] = puVar5[3];
        puVar2[2] = uVar12;
        puVar2[5] = uVar11;
        puVar2[4] = uVar10;
        puVar2[1] = uVar14;
        *puVar2 = uVar13;
        puVar2 = puVar2 + 6;
      }
      param_1[1] = (long)puVar2;
      sVar3 = (long)puVar1 + (-0x30 - (long)param_2);
      memmove((void *)((long)puVar1 - sVar3),param_2,sVar3);
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0x7b2;
      *(undefined2 *)(param_2 + 3) = 0x101;
      *(undefined4 *)((long)param_2 + 0x1a) = 0;
      *(undefined2 *)((long)param_2 + 0x1e) = 0;
      param_2[4] = 0x7b2;
      *(undefined2 *)(param_2 + 5) = 0x101;
      *(undefined4 *)((long)param_2 + 0x2a) = 0;
      *(undefined2 *)((long)param_2 + 0x2e) = 0;
    }
  }
  else {
    lVar9 = *param_1;
    uVar6 = ((long)puVar1 - lVar9 >> 4) * -0x5555555555555555 + 1;
    if (0x555555555555555 < uVar6) {
      FUN_006e29d0();
LAB_006e102c:
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    local_50 = (void *)0x0;
    lVar4 = param_1[2] - lVar9 >> 4;
    uVar7 = lVar4 * 0x5555555555555556;
    if (uVar7 < uVar6 || uVar7 - uVar6 == 0) {
      uVar7 = uVar6;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar4 * -0x5555555555555555)) {
      uVar7 = 0x555555555555555;
    }
    if (uVar7 != 0) {
      if (0x555555555555555 < uVar7) goto LAB_006e102c;
      local_50 = operator_new(uVar7 * 0x30);
    }
    pvStack_38 = (void *)((long)local_50 + uVar7 * 0x30);
    local_48 = (undefined8 *)((long)local_50 + ((long)param_2 - lVar9));
    local_40 = local_48;
    FUN_006e2bb8(&local_50);
    puVar8 = local_48;
    memcpy(local_40,param_2,param_1[1] - (long)param_2);
    lVar9 = param_1[1];
    param_1[1] = (long)param_2;
    sVar3 = (long)param_2 - *param_1;
    __dest = (void *)((long)local_48 - sVar3);
    local_40 = (undefined8 *)((long)local_40 + (lVar9 - (long)param_2));
    memcpy(__dest,(void *)*param_1,sVar3);
    local_50 = (void *)*param_1;
    lVar9 = param_1[2];
    *param_1 = (long)__dest;
    param_1[2] = (long)pvStack_38;
    param_1[1] = (long)local_40;
    if (local_50 != (void *)0x0) {
      local_48 = (undefined8 *)local_50;
      local_40 = (undefined8 *)local_50;
      pvStack_38 = (void *)lVar9;
      operator_delete(local_50);
    }
  }
  return puVar8;
}


// ===== 006e1030  FUN_006e1030 =====

undefined8 * FUN_006e1030(void)

{
  undefined8 *puVar1;
  undefined8 local_8;
  
  puVar1 = (undefined8 *)operator_new(0xa8);
  *puVar1 = &PTR_FUN_00d29b88;
  puVar1[0x10] = 0;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  puVar1[2] = 0;
  puVar1[1] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  local_8 = 0;
  FUN_006e0850(puVar1,&local_8);
  return puVar1;
}


// ===== 006e1098  FUN_006e1098 =====

void FUN_006e1098(undefined8 *param_1,long param_2,long param_3,long *param_4)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  byte bVar4;
  char cVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined4 *puVar9;
  undefined1 auVar10 [16];
  
  uVar8 = (*(long *)(param_2 + 0x28) - *(long *)(param_2 + 0x20) >> 4) * -0x5555555555555555;
  uVar6 = (ulong)*(byte *)(param_4 + 1);
  if (uVar8 < uVar6 || uVar8 - uVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
              );
  }
  puVar9 = (undefined4 *)(*(long *)(param_2 + 0x20) + uVar6 * 0x30);
  lVar1 = param_4[3];
  auVar10 = FUN_006dff44(param_4[2],(long)(char)lVar1,(lVar1 << 0x30) >> 0x38,
                         (lVar1 << 0x28) >> 0x38,
                         (param_3 - *param_4) / 0x3c + ((lVar1 << 0x20) >> 0x38),
                         (param_3 - *param_4) % 0x3c + ((lVar1 << 0x18) >> 0x38));
  uVar2 = *puVar9;
  uVar3 = *(undefined1 *)(puVar9 + 10);
  cVar5 = *(char *)(param_2 + 0x57);
  uVar6 = (ulong)cVar5;
  *param_1 = auVar10._0_8_;
  param_1[1] = auVar10._8_8_ & 0xffffffffff;
  *(undefined4 *)(param_1 + 2) = uVar2;
  bVar4 = *(byte *)((long)puVar9 + 0x29);
  *(undefined1 *)((long)param_1 + 0x14) = uVar3;
  if ((long)uVar6 < 0) {
    uVar6 = *(ulong *)(param_2 + 0x48);
  }
  if (uVar6 < bVar4) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/string:1351: libc++ Hardening assertion __pos <= size() failed: string index out of bounds\n"
              );
  }
  puVar7 = (undefined8 *)(param_2 + 0x40);
  if (cVar5 < '\0') {
    puVar7 = (undefined8 *)*puVar7;
  }
  param_1[3] = (long)puVar7 + (ulong)bVar4;
  return;
}


// ===== 006e11b8  FUN_006e11b8 =====

void FUN_006e11b8(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  long local_18;
  
  lVar3 = FUN_005183c8(0);
  plVar1 = (long *)param_2[1];
  lVar2 = param_2[2] - (long)plVar1;
  if (lVar2 != 0) {
    lVar3 = SUB168(SEXT816(lVar3) * SEXT816(-0x431bde82d7b634db),8);
    local_18 = *param_3;
    lVar3 = ((lVar3 >> 0x12) - (lVar3 >> 0x3f)) + local_18;
    if (*plVar1 <= lVar3) {
      plVar4 = (long *)((long)plVar1 + lVar2 + -0x30);
      lVar8 = *plVar4;
      if (lVar3 < lVar8) {
        uVar5 = (lVar2 >> 4) * -0x5555555555555555;
        uVar6 = param_2[0x13];
        plVar7 = plVar1;
        if ((uVar6 != 0) && (uVar6 < uVar5)) {
          plVar4 = plVar1 + uVar6 * 6 + -6;
          if ((*plVar4 <= lVar3) && (lVar3 < plVar1[uVar6 * 6])) goto LAB_006e13d4;
        }
        do {
          uVar9 = uVar5 >> 1;
          uVar6 = uVar5 + ~uVar9;
          uVar5 = uVar9;
          if (plVar7[uVar9 * 6] <= lVar3) {
            plVar7 = plVar7 + uVar9 * 6 + 6;
            uVar5 = uVar6;
          }
        } while (uVar5 != 0);
        plVar4 = plVar7 + -6;
        param_2[0x13] = ((long)plVar7 - (long)plVar1 >> 4) * -0x5555555555555555;
      }
      else if ((char)param_2[0x11] == '\x01') {
        param_1[1] = (long)&DAT_aaaaaaaaaaaaaaaa;
        *param_1 = (long)&DAT_aaaaaaaaaaaaaaaa;
        param_1[3] = (long)&DAT_aaaaaaaaaaaaaaaa;
        param_1[2] = (long)&DAT_aaaaaaaaaaaaaaaa;
        lVar2 = (lVar3 - lVar8) / 0x2f0605980 + 1;
        local_18 = local_18 + lVar2 * -0x2f0605980;
        (**(code **)(*param_2 + 0x10))(param_1,param_2,&local_18);
        auVar10 = FUN_006dff44(*param_1 + lVar2 * 400,(long)(char)param_1[1],
                               (long)*(char *)((long)param_1 + 9),
                               (long)*(char *)((long)param_1 + 10),
                               (long)*(char *)((long)param_1 + 0xb),
                               (long)*(char *)((long)param_1 + 0xc));
        *param_1 = auVar10._0_8_;
        param_1[1] = auVar10._8_8_ & 0xffffffffff;
        return;
      }
LAB_006e13d4:
      FUN_006e1098(param_1,param_2,lVar3,plVar4);
      return;
    }
    uVar6 = (param_2[5] - param_2[4] >> 4) * -0x5555555555555555;
    uVar5 = (ulong)*(byte *)(param_2 + 7);
    if (uVar5 <= uVar6 && uVar6 - uVar5 != 0) {
      FUN_006e0740(param_1,param_2,lVar3,param_2[4] + uVar5 * 0x30);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
            );
}


// ===== 006e13fc  FUN_006e13fc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006e13fc(undefined8 *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  undefined1 auVar3 [16];
  long lVar4;
  ulong uVar5;
  int *piVar6;
  code *pcVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  double dVar15;
  double dVar17;
  undefined1 auVar16 [16];
  undefined8 uVar18;
  undefined8 uVar21;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar22 [16];
  undefined8 local_70;
  ulong uStack_68;
  
  plVar1 = (long *)param_2[1];
  lVar4 = param_2[2] - (long)plVar1;
  if (lVar4 == 0) goto LAB_006e2168;
  lVar10 = *param_3;
  if ((lVar10 < plVar1[2]) ||
     ((lVar10 == plVar1[2] &&
      (((char)param_3[1] < (char)plVar1[3] ||
       (((char)param_3[1] == (char)plVar1[3] &&
        ((*(char *)((long)param_3 + 9) < *(char *)((long)plVar1 + 0x19) ||
         ((*(char *)((long)param_3 + 9) == *(char *)((long)plVar1 + 0x19) &&
          ((*(char *)((long)param_3 + 10) < *(char *)((long)plVar1 + 0x1a) ||
           ((*(char *)((long)param_3 + 10) == *(char *)((long)plVar1 + 0x1a) &&
            ((*(char *)((long)param_3 + 0xb) < *(char *)((long)plVar1 + 0x1b) ||
             ((*(char *)((long)param_3 + 0xb) == *(char *)((long)plVar1 + 0x1b) &&
              (*(char *)((long)param_3 + 0xc) < *(char *)((long)plVar1 + 0x1c))))))))))))))))))))) {
LAB_006e17fc:
    lVar4 = plVar1[4];
    if ((lVar4 < lVar10) ||
       ((lVar4 == lVar10 &&
        (((char)plVar1[5] < (char)param_3[1] ||
         (((char)plVar1[5] == (char)param_3[1] &&
          ((*(char *)((long)plVar1 + 0x29) < *(char *)((long)param_3 + 9) ||
           ((*(char *)((long)plVar1 + 0x29) == *(char *)((long)param_3 + 9) &&
            ((*(char *)((long)plVar1 + 0x2a) < *(char *)((long)param_3 + 10) ||
             ((*(char *)((long)plVar1 + 0x2a) == *(char *)((long)param_3 + 10) &&
              ((*(char *)((long)plVar1 + 0x2b) < *(char *)((long)param_3 + 0xb) ||
               ((*(char *)((long)plVar1 + 0x2b) == *(char *)((long)param_3 + 0xb) &&
                (*(char *)((long)plVar1 + 0x2c) < *(char *)((long)param_3 + 0xc)))))))))))))))))))))
    {
      uVar5 = param_3[1];
      uVar8 = plVar1[5];
      lVar12 = *plVar1;
      *param_1 = 0xaaaaaaaa00000001;
      lVar4 = FUN_006e29e8(lVar10,uVar5 & 0xffffffff,uVar5 >> 8,lVar4,uVar8 & 0xffffffff,uVar8 >> 8)
      ;
      lVar10 = FUN_005183c8(0);
      lVar13 = *plVar1;
      param_1[1] = ~((long)(uVar8 << 0x18) >> 0x38) + lVar12 + ((long)(uVar5 << 0x18) >> 0x38) +
                   lVar10 / 1000000 +
                   ((((lVar4 * 0x18 - ((long)(uVar8 << 0x28) >> 0x38)) +
                     ((long)(uVar5 << 0x28) >> 0x38)) * 0x3c - ((long)(uVar8 << 0x20) >> 0x38)) +
                   ((long)(uVar5 << 0x20) >> 0x38)) * 0x3c;
      lVar12 = FUN_005183c8(0);
      lVar4 = *param_3;
      uVar5 = param_3[1];
      lVar10 = plVar1[2];
      uVar8 = plVar1[3];
      lVar9 = *plVar1;
      param_1[2] = lVar12 / 1000000 + lVar13;
      lVar4 = FUN_006e29e8(lVar10,uVar8 & 0xffffffff,uVar8 >> 8,lVar4,uVar5 & 0xffffffff,uVar5 >> 8)
      ;
      lVar10 = FUN_005183c8(0);
      lVar4 = (lVar9 - ((long)(uVar8 << 0x18) >> 0x38)) + ((long)(uVar5 << 0x18) >> 0x38) +
              lVar10 / 1000000 +
              ((((lVar4 * 0x18 - ((long)(uVar5 << 0x28) >> 0x38)) + ((long)(uVar8 << 0x28) >> 0x38))
                * 0x3c - ((long)(uVar5 << 0x20) >> 0x38)) + ((long)(uVar8 << 0x20) >> 0x38)) * -0x3c
      ;
LAB_006e1948:
      param_1[3] = lVar4;
      return;
    }
    uVar8 = (param_2[5] - param_2[4] >> 4) * -0x5555555555555555;
    uVar5 = (ulong)*(byte *)(param_2 + 7);
    if (uVar8 < uVar5 || uVar8 - uVar5 == 0) {
LAB_006e2168:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                );
    }
    piVar6 = (int *)(param_2[4] + uVar5 * 0x30);
    if ((lVar10 < *(long *)(piVar6 + 6)) ||
       ((lVar10 == *(long *)(piVar6 + 6) &&
        (((char)param_3[1] < (char)piVar6[8] ||
         (((char)param_3[1] == (char)piVar6[8] &&
          ((*(char *)((long)param_3 + 9) < *(char *)((long)piVar6 + 0x21) ||
           ((*(char *)((long)param_3 + 9) == *(char *)((long)piVar6 + 0x21) &&
            ((*(char *)((long)param_3 + 10) < *(char *)((long)piVar6 + 0x22) ||
             ((*(char *)((long)param_3 + 10) == *(char *)((long)piVar6 + 0x22) &&
              ((*(char *)((long)param_3 + 0xb) < *(char *)((long)piVar6 + 0x23) ||
               ((*(char *)((long)param_3 + 0xb) == *(char *)((long)piVar6 + 0x23) &&
                (*(char *)((long)param_3 + 0xc) < (char)piVar6[9])))))))))))))))))))) {
      dVar15 = 0.0;
      dVar17 = 0.0;
      uVar18 = _DAT_001f4370;
      uVar21 = _UNK_001f4378;
LAB_006e19f8:
      param_1[1] = uVar21;
      *param_1 = uVar18;
      param_1[3] = -dVar17;
      param_1[2] = -dVar15;
      return;
    }
    uVar8 = param_3[1];
    auVar20 = FUN_006dff44(0x7b2,1,1,0,(long)(*piVar6 / 0x3c),(long)(*piVar6 % 0x3c));
    uVar5 = auVar20._8_8_;
    lVar4 = FUN_006e29e8(lVar10,uVar8 & 0xffffffff,uVar8 >> 8,auVar20._0_8_,uVar5 & 0xffffffff,
                         uVar5 >> 8);
    lVar10 = FUN_005183c8(0);
    lVar4 = (lVar10 / 1000000 - ((long)(uVar5 << 0x18) >> 0x38)) + ((long)(uVar8 << 0x18) >> 0x38) +
            ((((lVar4 * 0x18 + ((long)(uVar8 << 0x28) >> 0x38)) - ((long)(uVar5 << 0x28) >> 0x38)) *
              0x3c - ((long)(uVar5 << 0x20) >> 0x38)) + ((long)(uVar8 << 0x20) >> 0x38)) * 0x3c;
  }
  else {
    plVar11 = (long *)((long)plVar1 + lVar4);
    if ((lVar10 < plVar11[-4]) ||
       ((lVar10 == plVar11[-4] &&
        (((int)(char)param_3[1] < (int)(uint)*(byte *)(plVar11 + -3) ||
         (((int)(char)param_3[1] == (uint)*(byte *)(plVar11 + -3) &&
          (((int)*(char *)((long)param_3 + 9) < (int)(uint)*(byte *)((long)plVar11 + -0x17) ||
           (((int)*(char *)((long)param_3 + 9) == (uint)*(byte *)((long)plVar11 + -0x17) &&
            (((int)*(char *)((long)param_3 + 10) < (int)(uint)*(byte *)((long)plVar11 + -0x16) ||
             (((int)*(char *)((long)param_3 + 10) == (uint)*(byte *)((long)plVar11 + -0x16) &&
              (((int)*(char *)((long)param_3 + 0xb) < (int)(uint)*(byte *)((long)plVar11 + -0x15) ||
               (((int)*(char *)((long)param_3 + 0xb) == (uint)*(byte *)((long)plVar11 + -0x15) &&
                ((int)*(char *)((long)param_3 + 0xc) < (int)(uint)*(byte *)((long)plVar11 + -0x14)))
               )))))))))))))))))) {
      uVar5 = (lVar4 >> 4) * -0x5555555555555555;
      uVar8 = param_2[0x14];
      if ((uVar8 != 0) && (uVar8 < uVar5)) {
        plVar11 = plVar1 + uVar8 * 6;
        if ((plVar11[-4] <= lVar10) &&
           ((lVar10 != plVar11[-4] ||
            (((int)(uint)*(byte *)(plVar11 + -3) <= (int)(char)param_3[1] &&
             (((int)(char)param_3[1] != (uint)*(byte *)(plVar11 + -3) ||
              (((int)(uint)*(byte *)((long)plVar11 + -0x17) <= (int)*(char *)((long)param_3 + 9) &&
               (((int)*(char *)((long)param_3 + 9) != (uint)*(byte *)((long)plVar11 + -0x17) ||
                (((int)(uint)*(byte *)((long)plVar11 + -0x16) <= (int)*(char *)((long)param_3 + 10)
                 && (((int)*(char *)((long)param_3 + 10) != (uint)*(byte *)((long)plVar11 + -0x16)
                     || (((int)(uint)*(byte *)((long)plVar11 + -0x15) <=
                          (int)*(char *)((long)param_3 + 0xb) &&
                         (((int)*(char *)((long)param_3 + 0xb) !=
                           (uint)*(byte *)((long)plVar11 + -0x15) ||
                          ((int)(uint)*(byte *)((long)plVar11 + -0x14) <=
                           (int)*(char *)((long)param_3 + 0xc))))))))))))))))))))) {
          if (lVar10 < plVar11[2]) {
LAB_006e16a0:
            if (plVar11 != (long *)0x0) goto LAB_006e16a4;
          }
          else if (lVar10 == plVar11[2]) {
            if ((char)param_3[1] < (char)plVar11[3]) goto LAB_006e16a0;
            if ((char)param_3[1] == (char)plVar11[3]) {
              if (*(char *)((long)param_3 + 9) < *(char *)((long)plVar11 + 0x19)) goto LAB_006e16a0;
              if (*(char *)((long)param_3 + 9) == *(char *)((long)plVar11 + 0x19)) {
                if (*(char *)((long)param_3 + 10) < *(char *)((long)plVar11 + 0x1a))
                goto LAB_006e16a0;
                if (*(char *)((long)param_3 + 10) == *(char *)((long)plVar11 + 0x1a)) {
                  if (*(char *)((long)param_3 + 0xb) < *(char *)((long)plVar11 + 0x1b))
                  goto LAB_006e16a0;
                  if (((*(char *)((long)param_3 + 0xb) == *(char *)((long)plVar11 + 0x1b)) &&
                      (plVar11 != (long *)0x0)) &&
                     (*(char *)((long)param_3 + 0xc) < *(char *)((long)plVar11 + 0x1c)))
                  goto LAB_006e16a4;
                }
              }
            }
          }
        }
      }
      plVar11 = plVar1;
      do {
        uVar8 = uVar5 >> 1;
        if ((plVar11[uVar8 * 6 + 2] <= lVar10) &&
           ((lVar10 != plVar11[uVar8 * 6 + 2] ||
            (((char)plVar11[uVar8 * 6 + 3] <= (char)param_3[1] &&
             (((char)param_3[1] != (char)plVar11[uVar8 * 6 + 3] ||
              ((cVar2 = *(char *)((long)plVar11 + uVar8 * 0x30 + 0x19),
               cVar2 <= *(char *)((long)param_3 + 9) &&
               ((*(char *)((long)param_3 + 9) != cVar2 ||
                ((cVar2 = *(char *)((long)plVar11 + uVar8 * 0x30 + 0x1a),
                 cVar2 <= *(char *)((long)param_3 + 10) &&
                 ((*(char *)((long)param_3 + 10) != cVar2 ||
                  ((cVar2 = *(char *)((long)plVar11 + uVar8 * 0x30 + 0x1b),
                   cVar2 <= *(char *)((long)param_3 + 0xb) &&
                   ((*(char *)((long)param_3 + 0xb) != cVar2 ||
                    (*(char *)((long)plVar11 + uVar8 * 0x30 + 0x1c) <=
                     *(char *)((long)param_3 + 0xc))))))))))))))))))))) {
          plVar11 = plVar11 + uVar8 * 6 + 6;
          uVar8 = uVar5 + ~uVar8;
        }
        uVar5 = uVar8;
      } while (uVar5 != 0);
      param_2[0x14] = ((long)plVar11 - (long)plVar1 >> 4) * -0x5555555555555555;
    }
LAB_006e16a4:
    if (plVar11 == plVar1) {
      lVar10 = *param_3;
      goto LAB_006e17fc;
    }
    if (plVar11 != (long *)param_2[2]) {
      lVar4 = plVar11[4];
      lVar10 = *param_3;
      if ((lVar4 < lVar10) ||
         ((lVar4 == lVar10 &&
          (((char)plVar11[5] < (char)param_3[1] ||
           (((char)plVar11[5] == (char)param_3[1] &&
            ((*(char *)((long)plVar11 + 0x29) < *(char *)((long)param_3 + 9) ||
             ((*(char *)((long)plVar11 + 0x29) == *(char *)((long)param_3 + 9) &&
              ((*(char *)((long)plVar11 + 0x2a) < *(char *)((long)param_3 + 10) ||
               ((*(char *)((long)plVar11 + 0x2a) == *(char *)((long)param_3 + 10) &&
                ((*(char *)((long)plVar11 + 0x2b) < *(char *)((long)param_3 + 0xb) ||
                 ((*(char *)((long)plVar11 + 0x2b) == *(char *)((long)param_3 + 0xb) &&
                  (*(char *)((long)plVar11 + 0x2c) < *(char *)((long)param_3 + 0xc))))))))))))))))))
          ))) {
        uVar5 = param_3[1];
        uVar8 = plVar11[5];
        lVar12 = *plVar11;
        *param_1 = 0xaaaaaaaa00000001;
        lVar4 = FUN_006e29e8(lVar10,uVar5 & 0xffffffff,uVar5 >> 8,lVar4,uVar8 & 0xffffffff,
                             uVar8 >> 8);
        lVar10 = FUN_005183c8(0);
        lVar13 = *plVar11;
        param_1[1] = ~((long)(uVar8 << 0x18) >> 0x38) + lVar12 + ((long)(uVar5 << 0x18) >> 0x38) +
                     lVar10 / 1000000 +
                     ((((lVar4 * 0x18 - ((long)(uVar8 << 0x28) >> 0x38)) +
                       ((long)(uVar5 << 0x28) >> 0x38)) * 0x3c - ((long)(uVar8 << 0x20) >> 0x38)) +
                     ((long)(uVar5 << 0x20) >> 0x38)) * 0x3c;
        lVar12 = FUN_005183c8(0);
        lVar4 = *param_3;
        uVar5 = param_3[1];
        lVar10 = plVar11[2];
        uVar8 = plVar11[3];
        lVar9 = *plVar11;
        param_1[2] = lVar12 / 1000000 + lVar13;
        lVar4 = FUN_006e29e8(lVar10,uVar8 & 0xffffffff,uVar8 >> 8,lVar4,uVar5 & 0xffffffff,
                             uVar5 >> 8);
        lVar13 = -0x3c;
        lVar4 = (((lVar4 * 0x18 - ((long)(uVar5 << 0x28) >> 0x38)) + ((long)(uVar8 << 0x28) >> 0x38)
                 ) * 0x3c - ((long)(uVar5 << 0x20) >> 0x38)) + ((long)(uVar8 << 0x20) >> 0x38);
        lVar10 = FUN_005183c8(0);
        lVar12 = SUB168(SEXT816(lVar10) * SEXT816(0x431bde82d7b634db),8);
        lVar10 = (lVar9 - ((long)(uVar8 << 0x18) >> 0x38)) + ((long)(uVar5 << 0x18) >> 0x38);
      }
      else {
        lVar4 = plVar11[-2];
        if ((lVar4 < lVar10) ||
           ((lVar4 == lVar10 &&
            (((int)(uint)*(byte *)(plVar11 + -1) < (int)(char)param_3[1] ||
             (((uint)*(byte *)(plVar11 + -1) == (int)(char)param_3[1] &&
              (((int)(uint)*(byte *)((long)plVar11 + -7) < (int)*(char *)((long)param_3 + 9) ||
               (((uint)*(byte *)((long)plVar11 + -7) == (int)*(char *)((long)param_3 + 9) &&
                (((int)(uint)*(byte *)((long)plVar11 + -6) < (int)*(char *)((long)param_3 + 10) ||
                 (((uint)*(byte *)((long)plVar11 + -6) == (int)*(char *)((long)param_3 + 10) &&
                  (((int)(uint)*(byte *)((long)plVar11 + -5) < (int)*(char *)((long)param_3 + 0xb)
                   || (((uint)*(byte *)((long)plVar11 + -5) == (int)*(char *)((long)param_3 + 0xb)
                       && ((int)(uint)*(byte *)((long)plVar11 + -4) <
                           (int)*(char *)((long)param_3 + 0xc))))))))))))))))))))) {
          uVar5 = plVar11[-3];
          uVar8 = param_3[1];
          lVar12 = plVar11[-6];
          lVar4 = FUN_006e29e8(lVar10,uVar8 & 0xffffffff,uVar8 >> 8,plVar11[-4],uVar5 & 0xffffffff,
                               uVar5 >> 8);
          lVar10 = FUN_005183c8(0);
          *param_1 = 0xaaaaaaaa00000000;
          lVar4 = ((lVar12 + ((long)(uVar8 << 0x18) >> 0x38)) - ((long)(uVar5 << 0x18) >> 0x38)) +
                  lVar10 / 1000000 +
                  ((((lVar4 * 0x18 - ((long)(uVar5 << 0x28) >> 0x38)) +
                    ((long)(uVar8 << 0x28) >> 0x38)) * 0x3c - ((long)(uVar5 << 0x20) >> 0x38)) +
                  ((long)(uVar8 << 0x20) >> 0x38)) * 0x3c;
          param_1[2] = lVar4;
          param_1[3] = lVar4;
          goto LAB_006e1d14;
        }
        uVar5 = plVar11[-1];
        uVar8 = param_3[1];
        lVar12 = plVar11[-6];
        *param_1 = 0xaaaaaaaa00000002;
LAB_006e1e9c:
        lVar4 = FUN_006e29e8(lVar4,uVar5 & 0xffffffff,uVar5 >> 8,lVar10,uVar8 & 0xffffffff,
                             uVar8 >> 8);
        lVar13 = 0x3c;
        lVar10 = FUN_005183c8(0);
        lVar14 = plVar11[-6];
        param_1[1] = lVar10 / 1000000 + lVar12 +
                     ~((((((lVar4 * 0x18 - ((long)(uVar8 << 0x28) >> 0x38)) +
                          ((long)(uVar5 << 0x28) >> 0x38)) * 0x3c - ((long)(uVar8 << 0x20) >> 0x38))
                        + ((long)(uVar5 << 0x20) >> 0x38)) * 0x3c - ((long)(uVar8 << 0x18) >> 0x38))
                      + ((long)(uVar5 << 0x18) >> 0x38));
        lVar12 = FUN_005183c8(0);
        lVar4 = plVar11[-4];
        uVar5 = plVar11[-3];
        lVar10 = *param_3;
        uVar8 = param_3[1];
        lVar9 = plVar11[-6];
        param_1[2] = lVar12 / 1000000 + lVar14;
        lVar4 = FUN_006e29e8(lVar10,uVar8 & 0xffffffff,uVar8 >> 8,lVar4,uVar5 & 0xffffffff,
                             uVar5 >> 8);
        lVar4 = (((lVar4 * 0x18 - ((long)(uVar5 << 0x28) >> 0x38)) + ((long)(uVar8 << 0x28) >> 0x38)
                 ) * 0x3c - ((long)(uVar5 << 0x20) >> 0x38)) + ((long)(uVar8 << 0x20) >> 0x38);
        lVar10 = FUN_005183c8(0);
        lVar12 = SUB168(SEXT816(lVar10) * SEXT816(0x431bde82d7b634db),8);
        lVar10 = (lVar9 + ((long)(uVar8 << 0x18) >> 0x38)) - ((long)(uVar5 << 0x18) >> 0x38);
      }
      lVar4 = lVar10 + ((lVar12 >> 0x12) - (lVar12 >> 0x3f)) + lVar4 * lVar13;
      goto LAB_006e1948;
    }
    lVar4 = plVar11[-2];
    lVar10 = *param_3;
    if ((lVar10 <= lVar4) &&
       ((lVar4 != lVar10 ||
        (((int)(char)param_3[1] <= (int)(uint)*(byte *)(plVar11 + -1) &&
         (((uint)*(byte *)(plVar11 + -1) != (int)(char)param_3[1] ||
          (((int)*(char *)((long)param_3 + 9) <= (int)(uint)*(byte *)((long)plVar11 + -7) &&
           (((uint)*(byte *)((long)plVar11 + -7) != (int)*(char *)((long)param_3 + 9) ||
            (((int)*(char *)((long)param_3 + 10) <= (int)(uint)*(byte *)((long)plVar11 + -6) &&
             (((uint)*(byte *)((long)plVar11 + -6) != (int)*(char *)((long)param_3 + 10) ||
              (((int)*(char *)((long)param_3 + 0xb) <= (int)(uint)*(byte *)((long)plVar11 + -5) &&
               (((uint)*(byte *)((long)plVar11 + -5) != (int)*(char *)((long)param_3 + 0xb) ||
                ((int)*(char *)((long)param_3 + 0xc) <= (int)(uint)*(byte *)((long)plVar11 + -4)))))
              )))))))))))))))) {
      uVar8 = param_3[1];
      uVar5 = plVar11[-1];
      lVar12 = plVar11[-6];
      *param_1 = 0xaaaaaaaa00000002;
      goto LAB_006e1e9c;
    }
    if (((char)param_2[0x11] == '\x01') && (param_2[0x12] < lVar10)) {
      lVar12 = lVar10 + ~param_2[0x12];
      lVar4 = lVar12 / 400 + 1;
      auVar22 = FUN_006dff44(lVar10 + lVar4 * -400,(long)(char)param_3[1],
                             (long)*(char *)((long)param_3 + 9),(long)*(char *)((long)param_3 + 10),
                             (long)*(char *)((long)param_3 + 0xb),
                             (long)*(char *)((long)param_3 + 0xc));
      local_70 = auVar22._0_8_;
      auVar20[8] = 0xaa;
      auVar20._0_8_ = &DAT_aaaaaaaaaaaaaaaa;
      auVar20[9] = 0xaa;
      auVar20[10] = 0xaa;
      auVar20[0xb] = 0xaa;
      auVar20[0xc] = 0xaa;
      auVar20[0xd] = 0xaa;
      auVar20[0xe] = 0xaa;
      auVar20[0xf] = 0xaa;
      uStack_68 = auVar22._8_8_ & 0xffffffffff;
      pcVar7 = *(code **)(*param_2 + 0x18);
      param_1[1] = auVar20._8_8_;
      *param_1 = &DAT_aaaaaaaaaaaaaaaa;
      param_1[3] = auVar20._8_8_;
      param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
      (*pcVar7)(param_1,param_2,&local_70);
      lVar10 = 0x7fffffffffffffff;
      if (lVar12 < 0x440d117690) {
        auVar22._8_8_ = 0x7ff8000000000000;
        auVar22._0_8_ = 0x7ff8000000000000;
        uVar5 = lVar4 * 0x2f0605980;
        uVar8 = uVar5 ^ 0x7fffffffffffffff;
        auVar19._8_8_ = uVar8;
        auVar19._0_8_ = uVar8;
        lVar10 = 0x7fffffffffffffff;
        if ((long)param_1[3] <= (long)uVar8) {
          lVar10 = param_1[3] + uVar5;
        }
        auVar20 = NEON_cmgt(*(undefined1 (*) [16])(param_1 + 1),auVar19,8);
        auVar3._8_8_ = param_1[2] + uVar5;
        auVar3._0_8_ = *(long *)*(undefined1 (*) [16])(param_1 + 1) + uVar5;
        auVar16 = NEON_bif(auVar22,auVar3,auVar20,1);
      }
      else {
        auVar16._8_8_ = 0x7ff8000000000000;
        auVar16._0_8_ = 0x7ff8000000000000;
      }
      param_1[3] = lVar10;
      param_1[2] = auVar16._8_8_;
      param_1[1] = auVar16._0_8_;
      return;
    }
    uVar8 = (param_2[5] - param_2[4] >> 4) * -0x5555555555555555;
    uVar5 = (ulong)*(byte *)(plVar11 + -5);
    if (uVar8 < uVar5 || uVar8 - uVar5 == 0) goto LAB_006e2168;
    lVar4 = param_2[4] + uVar5 * 0x30;
    if ((*(long *)(lVar4 + 8) < lVar10) ||
       ((*(long *)(lVar4 + 8) == lVar10 &&
        ((*(char *)(lVar4 + 0x10) < (char)param_3[1] ||
         ((*(char *)(lVar4 + 0x10) == (char)param_3[1] &&
          ((*(char *)(lVar4 + 0x11) < *(char *)((long)param_3 + 9) ||
           ((*(char *)(lVar4 + 0x11) == *(char *)((long)param_3 + 9) &&
            ((*(char *)(lVar4 + 0x12) < *(char *)((long)param_3 + 10) ||
             ((*(char *)(lVar4 + 0x12) == *(char *)((long)param_3 + 10) &&
              ((*(char *)(lVar4 + 0x13) < *(char *)((long)param_3 + 0xb) ||
               ((*(char *)(lVar4 + 0x13) == *(char *)((long)param_3 + 0xb) &&
                (*(char *)(lVar4 + 0x14) < *(char *)((long)param_3 + 0xc))))))))))))))))))))) {
      dVar15 = -NAN;
      dVar17 = -NAN;
      uVar18 = _DAT_001f2240;
      uVar21 = _UNK_001f2248;
      goto LAB_006e19f8;
    }
    uVar5 = plVar11[-3];
    uVar8 = param_3[1];
    lVar12 = plVar11[-6];
    lVar4 = FUN_006e29e8(lVar10,uVar8 & 0xffffffff,uVar8 >> 8,plVar11[-4],uVar5 & 0xffffffff,
                         uVar5 >> 8);
    lVar10 = FUN_005183c8(0);
    lVar4 = ((lVar12 + ((long)(uVar8 << 0x18) >> 0x38)) - ((long)(uVar5 << 0x18) >> 0x38)) +
            lVar10 / 1000000 +
            ((((lVar4 * 0x18 - ((long)(uVar5 << 0x28) >> 0x38)) + ((long)(uVar8 << 0x28) >> 0x38)) *
              0x3c - ((long)(uVar5 << 0x20) >> 0x38)) + ((long)(uVar8 << 0x20) >> 0x38)) * 0x3c;
  }
  param_1[2] = lVar4;
  param_1[3] = lVar4;
  *param_1 = 0xaaaaaaaa00000000;
LAB_006e1d14:
  param_1[1] = lVar4;
  return;
}


// ===== 006e217c  FUN_006e217c =====

void FUN_006e217c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (-1 < *(char *)(param_2 + 0x6f)) {
    uVar2 = *(undefined8 *)(param_2 + 0x58);
    uVar1 = *(undefined8 *)(param_2 + 0x68);
    param_1[1] = *(undefined8 *)(param_2 + 0x60);
    *param_1 = uVar2;
    param_1[2] = uVar1;
    return;
  }
  FUN_005478d8(param_1,*(undefined8 *)(param_2 + 0x58),*(undefined8 *)(param_2 + 0x60));
  return;
}


// ===== 006e21a8  FUN_006e21a8 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_006e21a8(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  void *local_158 [11];
  long local_100;
  undefined1 *puStack_f8;
  undefined1 *local_f0;
  undefined *puStack_e8;
  undefined1 *puStack_e0;
  undefined1 *puStack_d8;
  undefined1 *local_d0;
  undefined8 uStack_c8;
  undefined1 *local_c0;
  undefined8 uStack_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  
  puVar5 = PTR_PTR_00d51b50;
  puVar2 = PTR_DAT_00d51b48;
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  local_f0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_e0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
  local_d0 = &DAT_aaaaaaaaaaaaaaaa;
  local_158[6] = &DAT_aaaaaaaaaaaaaaaa;
  local_158[5] = &DAT_aaaaaaaaaaaaaaaa;
  local_158[8] = &DAT_aaaaaaaaaaaaaaaa;
  local_158[7] = &DAT_aaaaaaaaaaaaaaaa;
  local_158[10] = &DAT_aaaaaaaaaaaaaaaa;
  local_158[9] = &DAT_aaaaaaaaaaaaaaaa;
  puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
  local_100 = (long)&DAT_aaaaaaaaaaaaaaaa;
  local_158[2] = &DAT_aaaaaaaaaaaaaaaa;
  local_158[1] = &DAT_aaaaaaaaaaaaaaaa;
  local_158[4] = &DAT_aaaaaaaaaaaaaaaa;
  local_158[3] = &DAT_aaaaaaaaaaaaaaaa;
  uStack_b8 = 0;
  local_158[0] = *(void **)(PTR_PTR_00d51b50 + 8);
  puVar1 = PTR_DAT_00d51b48 + 0x40;
  puStack_e8 = puVar1;
  *(undefined8 *)((long)local_158 + *(long *)((long)local_158[0] + -0x18)) =
       *(undefined8 *)(PTR_PTR_00d51b50 + 0x10);
  lVar7 = *(long *)((long)local_158[0] + -0x18);
  FUN_00520e8c((long)local_158 + lVar7,local_158 + 1);
  *(undefined8 *)((long)&local_d0 + lVar7) = 0;
  local_158[0] = puVar2 + 0x18;
  *(undefined1 *)((long)&uStack_c8 + lVar7 + 4) = 0;
  *(undefined4 *)((long)&uStack_c8 + lVar7) = 0xffffffff;
  puVar2 = PTR_DAT_00d51e20 + 0x10;
  local_158[1] = puVar2;
  puStack_e8 = puVar1;
  FUN_0053ce34(local_158 + 2);
  puVar1 = PTR_DAT_00d51b20 + 0x10;
  local_158[6] = (void *)0x0;
  local_158[5] = (void *)0x0;
  local_158[8] = (void *)0x0;
  local_158[7] = (void *)0x0;
  local_158[4] = (void *)0x0;
  local_158[3] = (void *)0x0;
  local_158[10] = (void *)0x0;
  local_158[9] = (void *)0x0;
  puStack_f8 = (undefined1 *)0x0;
  local_100 = 0;
  local_f0 = (undefined1 *)CONCAT44(local_f0._4_4_,0x10);
  local_158[1] = puVar1;
  FUN_006e2de0(local_158 + 1);
  uVar6 = FUN_006deaa4(local_158,"#trans=",7);
  FUN_0054c088(uVar6,(*(long *)(param_2 + 0x10) - *(long *)(param_2 + 8) >> 4) * -0x5555555555555555
              );
  uVar6 = FUN_006deaa4(local_158," #types=",8);
  FUN_0054c088(uVar6,(*(long *)(param_2 + 0x28) - *(long *)(param_2 + 0x20) >> 4) *
                     -0x5555555555555555);
  uVar6 = FUN_006deaa4(local_158," spec=\'",7);
  uVar3 = *(ulong *)(param_2 + 0x78);
  puVar4 = *(undefined8 **)(param_2 + 0x70);
  if (-1 < (char)*(byte *)(param_2 + 0x87)) {
    uVar3 = (ulong)*(byte *)(param_2 + 0x87);
    puVar4 = (undefined8 *)(param_2 + 0x70);
  }
  uVar6 = FUN_006deaa4(uVar6,puVar4,uVar3);
  FUN_006deaa4(uVar6,&DAT_001c1d3e,1);
  FUN_0054d504(param_1,local_158 + 1);
  local_158[0] = *(void **)puVar5;
  *(undefined8 *)((long)local_158 + *(long *)((long)local_158[0] + -0x18)) =
       *(undefined8 *)(puVar5 + 0x18);
  if (local_100 < 0) {
    local_158[1] = puVar1;
    operator_delete(local_158[9]);
  }
  local_158[1] = puVar2;
  FUN_0053ceec(local_158 + 2);
  FUN_0054b3d4(local_158,puVar5 + 8);
  thunk_FUN_00520cf4(&puStack_e8);
  return;
}


// ===== 006e23c4  FUN_006e23c4 =====

undefined8 FUN_006e23c4(long param_1,long *param_2,undefined8 *param_3)

{
  ulong uVar1;
  byte *pbVar2;
  long *plVar3;
  long *plVar4;
  byte bVar5;
  byte bVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  int *piVar10;
  int *piVar11;
  long *plVar12;
  undefined1 auVar13 [16];
  
  plVar3 = *(long **)(param_1 + 8);
  plVar4 = *(long **)(param_1 + 0x10);
  if (plVar3 != plVar4) {
    lVar7 = 0x30;
    if (-0x800000000000000 < *plVar3) {
      lVar7 = 0;
    }
    plVar3 = (long *)((long)plVar3 + lVar7);
    lVar7 = FUN_005183c8(0);
    plVar12 = plVar3;
    if ((long)plVar4 - (long)plVar3 != 0) {
      lVar7 = SUB168(SEXT816(lVar7) * SEXT816(-0x431bde82d7b634db),8);
      uVar8 = ((long)plVar4 - (long)plVar3 >> 4) * -0x5555555555555555;
      do {
        uVar9 = uVar8 >> 1;
        uVar1 = uVar8 + ~uVar9;
        uVar8 = uVar9;
        if (plVar12[uVar9 * 6] <= ((lVar7 >> 0x12) - (lVar7 >> 0x3f)) + *param_2) {
          plVar12 = plVar12 + uVar9 * 6 + 6;
          uVar8 = uVar1;
        }
      } while (uVar8 != 0);
    }
    if (plVar12 != plVar4) {
      do {
        pbVar2 = (byte *)(param_1 + 0x38);
        if (plVar12 != plVar3) {
          pbVar2 = (byte *)(plVar12 + -5);
        }
        bVar5 = *pbVar2;
        bVar6 = *(byte *)(plVar12 + 1);
        if ((uint)bVar5 != (uint)bVar6) {
          lVar7 = *(long *)(param_1 + 0x20);
          uVar8 = (*(long *)(param_1 + 0x28) - lVar7 >> 4) * -0x5555555555555555;
          if ((uVar8 < bVar5 || uVar8 - bVar5 == 0) || (uVar8 < bVar6 || uVar8 - bVar6 == 0)) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                      );
          }
          piVar11 = (int *)(lVar7 + (ulong)(uint)bVar5 * 0x30);
          piVar10 = (int *)(lVar7 + (ulong)(uint)bVar6 * 0x30);
          if (((*piVar11 != *piVar10) || ((char)piVar11[10] != (char)piVar10[10])) ||
             (*(char *)((long)piVar11 + 0x29) != *(char *)((long)piVar10 + 0x29))) break;
        }
        plVar12 = plVar12 + 6;
      } while (plVar12 != plVar4);
    }
    if (plVar12 != plVar4) {
      lVar7 = plVar12[5];
      auVar13 = FUN_006dff44(plVar12[4],(long)(char)lVar7,(lVar7 << 0x30) >> 0x38,
                             (lVar7 << 0x28) >> 0x38,(lVar7 << 0x20) >> 0x38,
                             ((lVar7 << 0x18) >> 0x38) + 1);
      *param_3 = auVar13._0_8_;
      param_3[1] = auVar13._8_8_ & 0xffffffffff;
      lVar7 = plVar12[2];
      param_3[3] = plVar12[3];
      param_3[2] = lVar7;
      return 1;
    }
  }
  return 0;
}


// ===== 006e259c  FUN_006e259c =====

undefined8 FUN_006e259c(long param_1,long *param_2,undefined8 *param_3)

{
  byte *pbVar1;
  long *plVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  int *piVar9;
  int *piVar10;
  long *plVar11;
  long *plVar12;
  undefined1 auVar13 [16];
  
  plVar2 = *(long **)(param_1 + 8);
  plVar12 = *(long **)(param_1 + 0x10);
  if (plVar2 != plVar12) {
    lVar5 = 0x30;
    if (-0x800000000000000 < *plVar2) {
      lVar5 = 0;
    }
    plVar2 = (long *)((long)plVar2 + lVar5);
    lVar5 = FUN_005183c8(0);
    lVar5 = SUB168(SEXT816(lVar5) * SEXT816(-0x431bde82d7b634db),8);
    lVar5 = ((lVar5 >> 0x12) - (lVar5 >> 0x3f)) + *param_2;
    lVar6 = FUN_005183c8(0);
    if (lVar6 / 1000000 + lVar5 != *param_2) {
      if (lVar5 == 0x7fffffffffffffff) {
joined_r0x006e2654:
        if (plVar12 == plVar2) {
          return 0;
        }
        lVar5 = plVar12[-1];
        auVar13 = FUN_006dff44(plVar12[-2],(long)(char)lVar5,(lVar5 << 0x30) >> 0x38,
                               (lVar5 << 0x28) >> 0x38,(lVar5 << 0x20) >> 0x38,
                               ((lVar5 << 0x18) >> 0x38) + 1);
        *param_3 = auVar13._0_8_;
        param_3[1] = auVar13._8_8_ & 0xffffffffff;
        lVar5 = plVar12[-4];
        param_3[3] = plVar12[-3];
        param_3[2] = lVar5;
        return 1;
      }
      lVar5 = lVar5 + 1;
    }
    if ((long)plVar12 - (long)plVar2 != 0) {
      uVar7 = ((long)plVar12 - (long)plVar2 >> 4) * -0x5555555555555555;
      plVar11 = plVar2;
      do {
        uVar8 = uVar7 >> 1;
        plVar12 = plVar11 + uVar8 * 6 + 6;
        uVar7 = uVar7 + ~uVar8;
        if (lVar5 <= plVar11[uVar8 * 6]) {
          plVar12 = plVar11;
          uVar7 = uVar8;
        }
        plVar11 = plVar12;
      } while (uVar7 != 0);
      if (plVar12 != plVar2) {
        do {
          plVar11 = plVar12 + -6;
          pbVar1 = (byte *)(param_1 + 0x38);
          if (plVar11 != plVar2) {
            pbVar1 = (byte *)(plVar12 + -0xb);
          }
          bVar3 = *pbVar1;
          bVar4 = *(byte *)(plVar12 + -5);
          if ((uint)bVar3 != (uint)bVar4) {
            lVar5 = *(long *)(param_1 + 0x20);
            uVar7 = (*(long *)(param_1 + 0x28) - lVar5 >> 4) * -0x5555555555555555;
            if ((uVar7 < bVar3 || uVar7 - bVar3 == 0) || (uVar7 < bVar4 || uVar7 - bVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                        );
            }
            piVar10 = (int *)(lVar5 + (ulong)(uint)bVar3 * 0x30);
            piVar9 = (int *)(lVar5 + (ulong)(uint)bVar4 * 0x30);
            if (((*piVar10 != *piVar9) || ((char)piVar10[10] != (char)piVar9[10])) ||
               (*(char *)((long)piVar10 + 0x29) != *(char *)((long)piVar9 + 0x29)))
            goto joined_r0x006e2654;
          }
          plVar12 = plVar11;
        } while (plVar11 != plVar2);
      }
    }
  }
  return 0;
}


// ===== 006e27b8  FUN_006e27b8 =====

void FUN_006e27b8(undefined8 *param_1)

{
  char cVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  
  *param_1 = &PTR_FUN_00d29b88;
  if (*(char *)((long)param_1 + 0x87) < '\0') {
    operator_delete((void *)param_1[0xe]);
    cVar1 = *(char *)((long)param_1 + 0x6f);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x6f);
  }
  if (cVar1 < '\0') {
    operator_delete((void *)param_1[0xb]);
    cVar1 = *(char *)((long)param_1 + 0x57);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x57);
  }
  if (cVar1 < '\0') {
    operator_delete((void *)param_1[8]);
    pvVar2 = (void *)param_1[4];
  }
  else {
    pvVar2 = (void *)param_1[4];
  }
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)param_1[1];
joined_r0x006e295c:
    if (pvVar2 == (void *)0x0) {
LAB_006e2974:
      FUN_006e0738(param_1);
      return;
    }
    pvVar3 = (void *)param_1[2];
    uVar4 = (ulong)(((long)pvVar2 - (long)pvVar3) * 0x555555555555555) >> 4;
    uVar5 = (long)pvVar3 * -0x555555555555555 - 0x10U >> 4;
    if (uVar5 <= uVar4) {
      uVar4 = uVar5;
    }
    if ((1 < uVar4) && ((((int)pvVar2 - (int)pvVar3 | -(int)pvVar3) & 0xfU) == 0)) {
      uVar4 = uVar4 & 0xffffffffffffffe;
      pvVar3 = (void *)((long)pvVar3 + uVar4 * -0x30);
      do {
        uVar4 = uVar4 - 2;
      } while (uVar4 != 0);
    }
    do {
      if (pvVar3 == pvVar2) {
        param_1[2] = pvVar2;
        operator_delete(pvVar2);
        goto LAB_006e2974;
      }
      pvVar3 = (void *)((long)pvVar3 + -0x30);
    } while (pvVar3 != (void *)0x0);
  }
  else {
    pvVar3 = (void *)param_1[5];
    uVar4 = (ulong)(((long)pvVar2 - (long)pvVar3) * 0x555555555555555) >> 4;
    uVar5 = (long)pvVar3 * -0x555555555555555 - 0x10U >> 4;
    if (uVar5 <= uVar4) {
      uVar4 = uVar5;
    }
    if ((1 < uVar4) && ((((int)pvVar2 - (int)pvVar3 | -(int)pvVar3) & 0xfU) == 0)) {
      uVar4 = uVar4 & 0xffffffffffffffe;
      pvVar3 = (void *)((long)pvVar3 + uVar4 * -0x30);
      do {
        uVar4 = uVar4 - 2;
      } while (uVar4 != 0);
    }
    do {
      if (pvVar3 == pvVar2) {
        param_1[5] = pvVar2;
        operator_delete(pvVar2);
        pvVar2 = (void *)param_1[1];
        goto joined_r0x006e295c;
      }
      pvVar3 = (void *)((long)pvVar3 + -0x30);
    } while (pvVar3 != (void *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 006e2988  FUN_006e2988 =====

void FUN_006e2988(void *param_1)

{
  FUN_006e27b8();
  operator_delete(param_1);
  return;
}


// ===== 006e29b8  FUN_006e29b8 =====

void FUN_006e29b8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 006e29d0  FUN_006e29d0 =====

void FUN_006e29d0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 006e29e8  FUN_006e29e8 =====

long FUN_006e29e8(long param_1,char param_2,char param_3,long param_4,char param_5,char param_6)

{
  short sVar1;
  short sVar2;
  short sVar3;
  undefined1 auVar4 [16];
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  undefined8 uVar12;
  
  uVar12 = NEON_cmgt(CONCAT44((int)param_5,(int)param_2),0x200000002,4);
  uVar12 = NEON_bsl(uVar12,0xfffd0000fffd,0x900000009,1);
  lVar7 = param_1 % 400 - (ulong)(param_2 < '\x03');
  sVar1 = (short)lVar7 + -399;
  if (-1 < lVar7) {
    sVar1 = (short)lVar7;
  }
  lVar8 = param_4 % 400 - (ulong)(param_5 < '\x03');
  lVar6 = (param_4 % 400 - param_4) + (param_1 / 400) * 400;
  sVar2 = (short)lVar8 + -399;
  if (-1 < lVar8) {
    sVar2 = (short)lVar8;
  }
  lVar7 = lVar7 + (long)((int)sVar1 / 400) * -400;
  sVar9 = (short)lVar7;
  lVar8 = lVar8 + (long)((int)sVar2 / 400) * -400;
  sVar3 = (short)lVar8;
  uVar12 = NEON_sshl(CONCAT26((short)((uint)((int)sVar9 * (int)(short)((ulong)DAT_001f5038 >> 0x30))
                                     >> 0x10),
                              CONCAT24((short)((uint)((int)sVar9 *
                                                     (int)(short)((ulong)DAT_001f5038 >> 0x20)) >>
                                              0x10) + sVar9,
                                       CONCAT22((short)((uint)((int)(short)(((short)((ulong)uVar12
                                                                                    >> 0x20) +
                                                                            (short)param_5) * 0x99 +
                                                                           2) *
                                                              (int)(short)((ulong)DAT_001f5038 >>
                                                                          0x10)) >> 0x10),
                                                (short)((uint)((int)(short)(((short)uVar12 +
                                                                            (short)param_2) * 0x99 +
                                                                           2) *
                                                              (int)(short)DAT_001f5038) >> 0x10)))),
                     DAT_001f5a90,2);
  sVar9 = (short)((ulong)uVar12 >> 0x10);
  sVar10 = (short)((ulong)uVar12 >> 0x20);
  sVar11 = (short)((ulong)uVar12 >> 0x30);
  sVar9 = sVar9 - (sVar9 >> 0xf);
  auVar4._4_2_ = sVar9;
  auVar4._0_4_ = (int)(short)((short)uVar12 - ((short)uVar12 >> 0xf));
  auVar4._6_2_ = sVar9 >> 0xf;
  auVar4._8_4_ = (int)(short)(sVar10 - (sVar10 >> 0xf));
  auVar4._12_4_ = (int)(short)(sVar11 - (sVar11 >> 0xf));
  lVar5 = NEON_saddlv(auVar4,4);
  lVar7 = lVar5 + -((int)(short)(sVar3 + ((ushort)(sVar3 >> 0xf) >> 0xd & 3)) >> 2) +
          (long)((int)sVar1 / 400 - (int)sVar2 / 400) * 0x23ab1 + (long)((int)sVar3 / 100) +
          ((lVar7 - lVar8) * 0x16d - (long)param_6) + (long)param_3;
  if ((lVar6 < 1) || (-1 < lVar7)) {
    if ((lVar6 < 0) && (0 < lVar7)) {
      lVar6 = lVar6 + 800;
      lVar7 = lVar7 + -0x47562;
    }
  }
  else {
    lVar6 = lVar6 + -800;
    lVar7 = lVar7 + 0x47562;
  }
  return lVar7 + (lVar6 / 400) * 0x23ab1;
}


// ===== 006e2bb8  FUN_006e2bb8 =====

void FUN_006e2bb8(undefined8 *param_1)

{
  void *pvVar1;
  undefined8 *__src;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar10 = (undefined8 *)param_1[2];
  if ((undefined8 *)param_1[3] == puVar10) {
    pvVar1 = (void *)*param_1;
    __src = (undefined8 *)param_1[1];
    if ((long)__src - (long)pvVar1 == 0) {
      uVar4 = ((long)param_1[3] - (long)pvVar1 >> 4) * 0x5555555555555556;
      if (puVar10 == __src) {
        uVar4 = 1;
      }
      if (0x555555555555555 < uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      pvVar2 = operator_new(uVar4 * 0x30);
      lVar3 = (long)puVar10 - (long)__src;
      puVar5 = (undefined8 *)((long)pvVar2 + (uVar4 >> 2) * 0x30);
      puVar6 = puVar5;
      if (lVar3 != 0) {
        puVar6 = (undefined8 *)((long)puVar5 + lVar3);
        puVar7 = puVar5;
        puVar9 = __src;
        do {
          if (puVar7 == (undefined8 *)0x0) goto LAB_006e2db0;
          uVar13 = puVar9[2];
          uVar12 = puVar9[5];
          uVar11 = puVar9[4];
          lVar3 = lVar3 + -0x30;
          uVar15 = puVar9[1];
          uVar14 = *puVar9;
          puVar7[3] = puVar9[3];
          puVar7[2] = uVar13;
          puVar7[5] = uVar12;
          puVar7[4] = uVar11;
          puVar7[1] = uVar15;
          *puVar7 = uVar14;
          puVar7 = puVar7 + 6;
          puVar9 = puVar9 + 6;
        } while (lVar3 != 0);
      }
      *param_1 = pvVar2;
      param_1[1] = puVar5;
      param_1[2] = puVar6;
      param_1[3] = (void *)((long)pvVar2 + uVar4 * 0x30);
      uVar4 = (ulong)(((long)__src - (long)puVar10) * 0x555555555555555) >> 4;
      uVar8 = (long)puVar10 * -0x555555555555555 - 0x10U >> 4;
      if (uVar8 <= uVar4) {
        uVar4 = uVar8;
      }
      puVar6 = puVar10;
      if ((1 < uVar4) && ((((int)__src - (int)puVar10 | -(int)puVar10) & 0xfU) == 0)) {
        uVar4 = uVar4 & 0xffffffffffffffe;
        puVar6 = puVar10 + uVar4 * -6;
        do {
          uVar4 = uVar4 - 2;
        } while (uVar4 != 0);
      }
      while (puVar6 != __src) {
        puVar6 = puVar6 + -6;
        if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      if (__src != (undefined8 *)0x0) {
        operator_delete(pvVar1);
      }
    }
    else {
      lVar3 = ((long)__src - (long)pvVar1 >> 4) * -0x5555555555555555 + 1;
      uVar4 = (ulong)(lVar3 - (lVar3 >> 0x3f)) >> 1;
      lVar3 = uVar4 * -0x30;
      memmove(__src + uVar4 * -6,__src,(long)puVar10 - (long)__src);
      puVar10 = (undefined8 *)((long)__src + ((long)puVar10 - (long)__src) + lVar3);
      param_1[1] = param_1[1] + lVar3;
      param_1[2] = puVar10;
    }
  }
  if (puVar10 != (undefined8 *)0x0) {
    puVar10[3] = 0;
    puVar10[2] = 0;
    puVar10[5] = 0;
    puVar10[4] = 0;
    puVar10[2] = 0x7b2;
    puVar10[4] = 0x7b2;
    puVar10[1] = 0;
    *puVar10 = 0;
    *(undefined2 *)(puVar10 + 3) = 0x101;
    *(undefined2 *)(puVar10 + 5) = 0x101;
    param_1[2] = puVar10 + 6;
    return;
  }
LAB_006e2db0:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 006e2dc8  FUN_006e2dc8 =====

void FUN_006e2dc8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 006e2de0  FUN_006e2de0 =====

void FUN_006e2de0(long param_1)

{
  uint uVar1;
  byte bVar2;
  size_t __n;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  
  bVar2 = *(byte *)(param_1 + 0x57);
  uVar3 = (ulong)(char)bVar2;
  puVar7 = (undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x58) = 0;
  if ((long)uVar3 < 0) {
    uVar5 = *(ulong *)(param_1 + 0x40);
    uVar1 = *(uint *)(param_1 + 0x60);
    uVar6 = *(ulong *)(param_1 + 0x48);
  }
  else {
    uVar5 = param_1 + 0x40;
    uVar1 = *(uint *)(param_1 + 0x60);
    uVar6 = uVar3;
  }
  if ((uVar1 >> 3 & 1) != 0) {
    uVar8 = uVar5 + uVar6;
    *(ulong *)(param_1 + 0x58) = uVar8;
    if (uVar8 < uVar5) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/streambuf:302: libc++ Hardening assertion std::__is_valid_range(__gbeg, __gend) failed: [gbeg, gend) must be a valid range\n"
                );
    }
    *(ulong *)(param_1 + 0x10) = uVar5;
    *(ulong *)(param_1 + 0x18) = uVar5;
    *(ulong *)(param_1 + 0x20) = uVar8;
  }
  if ((uVar1 >> 4 & 1) == 0) {
    return;
  }
  *(ulong *)(param_1 + 0x58) = uVar5 + uVar6;
  if ((char)bVar2 < '\0') {
    uVar3 = *(ulong *)(param_1 + 0x48);
    uVar8 = (*(ulong *)(param_1 + 0x50) & 0x7fffffffffffffff) - 1;
    __n = uVar8 - uVar3;
    if (uVar3 <= uVar8 && __n != 0) {
      if ((long)*(ulong *)(param_1 + 0x50) < 0) {
        puVar7 = (undefined8 *)*puVar7;
      }
      goto LAB_006e2e88;
    }
    puVar7 = *(undefined8 **)(param_1 + 0x40);
  }
  else {
    uVar8 = 0x16;
    if (0x15 < bVar2) {
      *(undefined1 *)(param_1 + 0x57) = 0x16;
      goto LAB_006e2eb8;
    }
    __n = 0x16 - uVar3;
LAB_006e2e88:
    memset((void *)((long)puVar7 + uVar3),0,__n);
    if (-1 < *(char *)(param_1 + 0x57)) {
      *(byte *)(param_1 + 0x57) = (byte)uVar8 & 0x7f;
      goto LAB_006e2eb8;
    }
  }
  *(ulong *)(param_1 + 0x48) = uVar8;
LAB_006e2eb8:
  *(undefined1 *)((long)puVar7 + uVar8) = 0;
  lVar4 = (long)*(char *)(param_1 + 0x57);
  if (lVar4 < 0) {
    lVar4 = *(long *)(param_1 + 0x48);
  }
  if (uVar5 <= uVar5 + lVar4) {
    *(ulong *)(param_1 + 0x28) = uVar5;
    *(ulong *)(param_1 + 0x30) = uVar5;
    *(ulong *)(param_1 + 0x38) = uVar5 + lVar4;
    if ((*(byte *)(param_1 + 0x60) & 3) != 0) {
      if (uVar6 >> 0x1f != 0) {
        uVar3 = (uVar6 - 0x80000000) / 0x7fffffff;
        uVar5 = uVar5 + 0x7fffffff + uVar3 * 0x7fffffff;
        uVar6 = (uVar6 + uVar3 * -0x7fffffff) - 0x7fffffff;
        *(ulong *)(param_1 + 0x30) = uVar5;
      }
      if (uVar6 != 0) {
        *(ulong *)(param_1 + 0x30) = uVar5 + uVar6;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/streambuf:319: libc++ Hardening assertion std::__is_valid_range(__pbeg, __pend) failed: [pbeg, pend) must be a valid range\n"
            );
}


// ===== 006e2f80  FUN_006e2f80 =====

void FUN_006e2f80(undefined8 param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  int iVar5;
  long lVar6;
  code *pcVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  char local_40 [8];
  undefined1 local_38;
  undefined1 local_37;
  char local_36;
  char local_35;
  undefined1 local_34;
  char local_33;
  char local_32;
  undefined1 local_31;
  char local_30;
  char local_2f;
  undefined1 local_2e;
  long local_28;
  
  lVar6 = tpidr_el0;
  local_28 = *(long *)(lVar6 + 0x28);
  lVar10 = *param_2;
  if ((lVar10 != 0) && (0xfffffffffffd5cfe < lVar10 - 0x15181U)) {
    local_37 = 0x2d;
    if (-1 < lVar10) {
      local_37 = 0x2b;
    }
    iVar9 = (int)lVar10 / 0x3c;
    iVar8 = (int)lVar10 % 0x3c;
    if (lVar10 < 0) {
      iVar5 = iVar8 + -0x3c;
      if (iVar8 < 1) {
        iVar5 = iVar8;
      }
      iVar9 = -iVar9 - (uint)(0 < iVar8);
      iVar8 = -iVar5;
    }
    iVar5 = (int)(short)iVar9;
    local_38 = 0x43;
    local_40 = (char  [8])s_Fixed_UTC_002081e0._0_8_;
    if (iVar5 != -600 && iVar5 + 600 < 0 == SCARRY4(iVar5,600)) {
      uVar1 = iVar9 + ((uint)(iVar5 * -0x7777) >> 0x10);
      uVar2 = iVar9 + ((uint)(iVar5 * -0x258b) >> 0x10);
      iVar5 = ((int)(uVar1 * 0x10000) >> 0x15) + ((uVar1 & 0x8000) >> 0xf);
      uVar3 = (char)iVar5 * 0x67;
      uVar3 = iVar5 + ((uVar3 >> 10) - ((int)uVar3 >> 0x1f)) * -10;
      local_36 = "0123456789"[((int)(uVar2 * 0x10000) >> 0x19) + ((uVar2 & 0x8000) >> 0xf)];
      if ((uVar3 >> 7 & 1) == 0) {
        sVar4 = (short)iVar9 +
                ((short)((uint)(int)(short)uVar1 >> 5) + (short)((uVar1 & 0x8000) >> 0xf)) * -0x3c;
        local_35 = "0123456789"[(int)(char)uVar3];
        iVar9 = (int)sVar4;
        local_34 = 0x3a;
        if (iVar9 != -10 && iVar9 + 10 < 0 == SCARRY4(iVar9,10)) {
          uVar2 = (int)(char)sVar4 / 10;
          uVar1 = iVar9 + uVar2 * -10;
          local_33 = "0123456789"[(ulong)uVar2 & 0xff];
          if ((uVar1 >> 7 & 1) == 0) {
            local_31 = 0x3a;
            local_32 = "0123456789"[(int)(char)uVar1];
            if (iVar8 != -10 && iVar8 + 10 < 0 == SCARRY4(iVar8,10)) {
              uVar2 = (int)(char)iVar8 / 10;
              uVar1 = iVar8 + uVar2 * -10;
              local_30 = "0123456789"[(ulong)uVar2 & 0xff];
              if ((uVar1 >> 7 & 1) == 0) {
                local_2e = 0;
                local_2f = "0123456789"[(int)(char)uVar1];
                FUN_005d3510(param_1,local_40);
                if (*(long *)(lVar6 + 0x28) == local_28) {
                  return;
                }
                goto LAB_006e31ac;
              }
            }
          }
        }
      }
    }
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(0x5512,0x6e31ac);
    (*pcVar7)();
  }
  if (*(long *)(lVar6 + 0x28) == local_28) {
    FUN_005d3510(param_1,&DAT_001ed2fc);
    return;
  }
LAB_006e31ac:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006e31b0  FUN_006e31b0 =====

void FUN_006e31b0(long *param_1)

{
  ulong uVar1;
  char cVar2;
  byte bVar3;
  
  param_1[1] = (long)&DAT_aaaaaaaaaaaaaaaa;
  *param_1 = (long)&DAT_aaaaaaaaaaaaaaaa;
  param_1[2] = (long)&DAT_aaaaaaaaaaaaaaaa;
  FUN_006e2f80();
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    if (param_1[1] != 0x12) {
      return;
    }
  }
  else if (*(char *)((long)param_1 + 0x17) != '\x12') {
    return;
  }
  FUN_005481a4(param_1,0,9);
  uVar1 = param_1[1];
  if ((*(byte *)((long)param_1 + 0x17) & 0x80) == 0) {
    uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
  }
  if (uVar1 < 6) {
LAB_006e3374:
                    /* WARNING: Subroutine does not return */
    FUN_005f5590();
  }
  FUN_005481a4(param_1,6,1);
  uVar1 = param_1[1];
  if ((*(byte *)((long)param_1 + 0x17) & 0x80) == 0) {
    uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
  }
  if (uVar1 < 3) goto LAB_006e3374;
  FUN_005481a4(param_1,3,1);
  bVar3 = *(byte *)((long)param_1 + 0x17);
  if ((char)bVar3 < '\0') {
    if ((ulong)param_1[1] < 5) goto LAB_006e3360;
    if (*(char *)(*param_1 + 5) != '0') {
      return;
    }
    if (param_1[1] == 5) goto LAB_006e3360;
    cVar2 = *(char *)(*param_1 + 6);
  }
  else {
    if (bVar3 < 5) goto LAB_006e3360;
    if (*(char *)((long)param_1 + 5) != '0') {
      return;
    }
    if (bVar3 == 5) goto LAB_006e3360;
    cVar2 = *(char *)((long)param_1 + 6);
  }
  if (cVar2 == '0') {
    FUN_005481a4(param_1,5,2);
    bVar3 = *(byte *)((long)param_1 + 0x17);
    if ((char)bVar3 < '\0') {
      if ((ulong)param_1[1] < 3) goto LAB_006e3360;
      if (*(char *)(*param_1 + 3) != '0') {
        return;
      }
      if (param_1[1] == 3) goto LAB_006e3360;
      cVar2 = *(char *)(*param_1 + 4);
    }
    else {
      if (bVar3 < 3) {
LAB_006e3360:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/string:1360: libc++ Hardening assertion __pos <= size() failed: string index out of bounds\n"
                  );
      }
      if (*(char *)((long)param_1 + 3) != '0') {
        return;
      }
      if (bVar3 == 3) goto LAB_006e3360;
      cVar2 = *(char *)((long)param_1 + 4);
    }
    if (cVar2 == '0') {
      FUN_005481a4(param_1,3,2);
      return;
    }
  }
  return;
}


// ===== 006e3378  FUN_006e3378 =====

ulong FUN_006e3378(ulong param_1,uint param_2,ulong param_3,int param_4,ulong *param_5)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  
  if ((param_2 == 0xffffffff) || (param_4 == -1)) goto LAB_006e351c;
  if (param_3 == 0) {
    if (param_4 < 4000) {
      if (param_4 == 4) {
        if (param_1 < 0x225c17d00) {
          uVar4 = 0;
          uVar1 = param_2 & 3;
          uVar3 = param_1 * 1000000000 + (ulong)(param_2 >> 2);
          goto LAB_006e350c;
        }
LAB_006e351c:
        uVar3 = FUN_006e37f4(1,param_1,param_2,param_3);
        return uVar3;
      }
      if ((param_4 != 400) || (0xd6bf94d454 < param_1)) goto LAB_006e351c;
      uVar4 = (ulong)param_2 / 400;
      uVar3 = uVar4 + param_1 * 10000000;
      iVar5 = 400;
    }
    else if (param_4 == 4000) {
      if (0x8637bd04b55 < param_1) goto LAB_006e351c;
      uVar4 = (ulong)param_2 / 4000;
      uVar3 = uVar4 + param_1 * 1000000;
      iVar5 = 4000;
    }
    else {
      if ((param_4 != 4000000) || (0x20c49ba5a64af6 < param_1)) goto LAB_006e351c;
      uVar4 = (ulong)param_2 / 4000000;
      uVar3 = uVar4 + param_1 * 1000;
      iVar5 = 4000000;
    }
    param_2 = param_2 - (int)uVar4 * iVar5;
  }
  else {
    if (((long)param_3 < 1) || (param_4 != 0)) goto LAB_006e351c;
    uVar1 = param_2;
    if ((long)param_1 < 0) {
      uVar2 = -param_1 - (ulong)(param_2 != 0);
      uVar3 = 0;
      if (param_3 != 0) {
        uVar3 = uVar2 / param_3;
      }
      uVar2 = uVar2 - uVar3 * param_3;
      uVar4 = -uVar2;
      if (param_2 != 0) {
        uVar4 = ~uVar2;
      }
      uVar3 = -uVar3;
      goto LAB_006e350c;
    }
    uVar3 = param_1;
    if (param_3 != 1) {
      uVar3 = 0;
      if (param_3 != 0) {
        uVar3 = param_1 / param_3;
      }
      uVar4 = param_1 - uVar3 * param_3;
      goto LAB_006e350c;
    }
  }
  uVar4 = 0;
  uVar1 = param_2;
LAB_006e350c:
  *param_5 = uVar4;
  *(uint *)(param_5 + 1) = uVar1;
  return uVar3;
}


// ===== 006e352c  FUN_006e352c =====

void FUN_006e352c(ulong *param_1,long param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = (uint)param_1[1];
  if (uVar1 == 0xffffffff) {
    return;
  }
  if (param_3 == 0xffffffff) {
    uVar2 = param_2 >> 0x3f ^ 0x8000000000000000;
  }
  else {
    uVar2 = *param_1;
    uVar3 = uVar2 - param_2;
    *param_1 = uVar3;
    if (uVar1 < param_3) {
      uVar3 = uVar3 - 1;
      *param_1 = uVar3;
      uVar1 = uVar1 + 4000000000;
    }
    *(uint *)(param_1 + 1) = uVar1 - param_3;
    if (param_2 < 0) {
      if ((long)uVar2 <= (long)uVar3) {
        return;
      }
      uVar2 = 0x7fffffffffffffff;
    }
    else {
      if ((long)uVar3 <= (long)uVar2) {
        return;
      }
      uVar2 = 0x8000000000000000;
    }
  }
  *param_1 = uVar2;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  return;
}


// ===== 006e35ac  FUN_006e35ac =====

ulong * FUN_006e35ac(ulong *param_1,ulong param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int iVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  
  uVar11 = (uint)param_1[1];
  uVar12 = *param_1;
  if (uVar11 == 0xffffffff) {
    uVar14 = (long)(uVar12 ^ param_2) >> 0x3f ^ 0x7fffffffffffffff;
    iVar13 = -1;
    goto LAB_006e3764;
  }
  uVar14 = uVar12 ^ (long)uVar12 >> 0x3f;
  uVar15 = uVar14 * 4000000000;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar14;
  uVar14 = SUB168(auVar2 * ZEXT816(4000000000),8);
  uVar1 = 4000000000 - uVar11;
  if (-1 < (long)uVar12) {
    uVar1 = uVar11;
  }
  uVar16 = uVar15 + uVar1;
  uVar10 = (param_2 ^ (long)param_2 >> 0x3f) - ((long)param_2 >> 0x3f);
  if (CARRY8(uVar15,(ulong)uVar1)) {
    uVar14 = uVar14 + 1;
  }
  if (uVar14 == 0) {
    if ((uVar10 | uVar16) >> 0x20 == 0) {
      uVar10 = uVar10 * uVar16;
      goto LAB_006e369c;
    }
LAB_006e3658:
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar16;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar10;
    uVar16 = uVar16 * uVar10;
    uVar15 = SUB168(auVar5 * auVar8,8) + uVar14 * uVar10;
    if (uVar15 == 0) {
      uVar15 = uVar16 / 4000000000;
    }
    else {
      if (1999999999 < uVar15) goto LAB_006e3738;
      uVar15 = FUN_00d0f14c(uVar16,uVar15,4000000000,0);
    }
    iVar9 = (int)uVar16 + (int)uVar15 * 0x1194d800;
  }
  else {
    if (uVar10 != 0) {
      if ((uVar14 == 0) ||
         (auVar3._8_8_ = 0, auVar3._0_8_ = uVar14, auVar6._8_8_ = 0, auVar6._0_8_ = uVar10,
         auVar4._8_8_ = 0, auVar4._0_8_ = uVar10, auVar7._8_8_ = 0, auVar7._0_8_ = uVar16,
         !CARRY8(SUB168(auVar4 * auVar7,8),uVar14 * uVar10) && SUB168(auVar3 * auVar6,8) == 0))
      goto LAB_006e3658;
      uVar16 = 0xffffffffffffffff;
      uVar15 = 0xffffffffffffffff;
LAB_006e3738:
      uVar11 = -((int)((uint)(uVar12 >> 0x20) ^ (uint)(param_2 >> 0x20)) >> 0x1f);
      uVar14 = 0x8000000000000000;
      if (uVar11 == 0) {
        uVar14 = 0x7fffffffffffffff;
      }
      iVar13 = 0;
      if ((uVar11 & (uVar16 == 0 && uVar15 == 2000000000)) == 0) {
        iVar13 = -1;
      }
      goto LAB_006e3764;
    }
    uVar10 = 0;
LAB_006e369c:
    uVar15 = uVar10 / 4000000000;
    iVar9 = (int)uVar10 + (int)uVar15 * 0x1194d800;
  }
  uVar14 = uVar15;
  iVar13 = iVar9;
  if ((long)(uVar12 ^ param_2) < 0) {
    uVar14 = ~uVar15;
    iVar13 = -0x1194d800 - iVar9;
    if (iVar9 == 0) {
      uVar14 = -uVar15;
      iVar13 = 0;
    }
  }
LAB_006e3764:
  *param_1 = uVar14;
  *(int *)(param_1 + 1) = iVar13;
  return param_1;
}


// ===== 006e3784  FUN_006e3784 =====

undefined1  [16] FUN_006e3784(ulong param_1,uint param_2)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  
  uVar2 = 0x7fffffffffffffff;
  if (param_1 != 0) {
    uVar2 = (long)param_1 >> 0x3f ^ 0x7fffffffffffffff;
  }
  uVar3 = 999999999;
  if (param_1 != 0) {
    uVar3 = ~(uint)((long)param_1 >> 0x3f) & 999999999;
  }
  uVar1 = param_1;
  uVar4 = param_2 + 3;
  if (3999999999 < param_2 + 3) {
    uVar1 = param_1 + 1;
    uVar4 = param_2 + 0x1194d803;
  }
  uVar5 = param_2;
  if ((param_1 & 0x8000000000000000) != 0) {
    param_1 = uVar1;
    uVar5 = uVar4;
  }
  if (param_2 != 0xffffffff) {
    uVar3 = uVar5 >> 2;
    uVar2 = param_1;
  }
  auVar6._8_4_ = uVar3;
  auVar6._0_8_ = uVar2;
  auVar6._12_4_ = 0;
  return auVar6;
}


// ===== 006e37f4  FUN_006e37f4 =====

ulong FUN_006e37f4(byte param_1,ulong param_2,uint param_3,ulong param_4,uint param_5,ulong *param_6
                  )

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  
  uVar6 = (long)(param_2 ^ param_4) >> 0x3f;
  uVar5 = (long)param_2 >> 0x3f;
  if ((param_3 == 0xffffffff) || (param_4 == 0 && param_5 == 0)) {
    *(undefined4 *)(param_6 + 1) = 0xffffffff;
    *param_6 = uVar5 ^ 0x7fffffffffffffff;
    return uVar6 ^ 0x7fffffffffffffff;
  }
  if (param_5 == 0xffffffff) {
    *param_6 = param_2;
    *(uint *)(param_6 + 1) = param_3;
    return 0;
  }
  uVar11 = param_4 ^ (long)param_4 >> 0x3f;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = param_2 ^ uVar5;
  lVar10 = SUB168(auVar14 * ZEXT816(4000000000),8);
  uVar1 = 4000000000 - param_3;
  if (-1 < (long)param_2) {
    uVar1 = param_3;
  }
  uVar8 = (param_2 ^ uVar5) * 4000000000;
  uVar13 = uVar11 * 4000000000;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar11;
  lVar12 = SUB168(auVar2 * ZEXT816(4000000000),8);
  uVar11 = uVar8 + uVar1;
  uVar9 = (ulong)(4000000000 - param_5);
  if (CARRY8(uVar8,(ulong)uVar1)) {
    lVar10 = lVar10 + 1;
  }
  if (-1 < (long)param_4) {
    uVar9 = (ulong)param_5;
  }
  uVar8 = uVar13 + uVar9;
  if (CARRY8(uVar13,uVar9)) {
    lVar12 = lVar12 + 1;
  }
  auVar14 = FUN_00d0f14c(uVar11,lVar10,uVar8,lVar12);
  uVar9 = 0;
  if ((param_1 & 1) == 0) {
    uVar9 = auVar14._8_8_ & 0x1ffffffff;
  }
  uVar6 = uVar6 ^ 0x7fffffffffffffff;
  if ((param_1 & 1 & (auVar14._8_8_ != 0 || (long)auVar14._0_8_ < 0)) == 0) {
    uVar6 = auVar14._0_8_;
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar6;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar8;
  uVar13 = uVar11 - uVar6 * uVar8;
  uVar11 = (lVar10 - (ulong)(uVar11 < uVar6 * uVar8)) -
           (SUB168(auVar3 * auVar4,8) + uVar6 * lVar12 + uVar9 * uVar8);
  if (uVar11 == 0) {
    uVar5 = uVar13 / 4000000000;
  }
  else {
    if (1999999999 < uVar11) {
      uVar5 = uVar5 ^ 0x7fffffffffffffff;
      iVar7 = 0;
      if ((uVar11 != 2000000000 || uVar13 != 0) || -1 < (long)param_2) {
        iVar7 = -1;
      }
      goto LAB_006e39c4;
    }
    uVar5 = FUN_00d0f14c(uVar13 & 0xfffffffffffff800,uVar11,4000000000,0);
  }
  iVar7 = (int)uVar13 + (int)uVar5 * 0x1194d800;
  if ((long)param_2 < 0) {
    if (iVar7 == 0) {
      iVar7 = 0;
      uVar5 = -uVar5;
    }
    else {
      uVar5 = ~uVar5;
      iVar7 = -0x1194d800 - iVar7;
    }
  }
LAB_006e39c4:
  *param_6 = uVar5;
  *(int *)(param_6 + 1) = iVar7;
  if (((long)(param_2 ^ param_4) < 0) && (uVar6 != 0 || uVar9 != 0)) {
    uVar6 = -uVar6 | 0x8000000000000000;
  }
  else {
    uVar6 = uVar6 & 0x7fffffffffffffff;
  }
  return uVar6;
}


// ===== 006e39ec  FUN_006e39ec =====

undefined1 FUN_006e39ec(void)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)__emutls_get_address(&DAT_00d5a1f8);
  return *puVar1;
}


// ===== 006e3a14  FUN_006e3a14 =====

void FUN_006e3a14(long param_1,undefined8 *param_2,long param_3,uint param_4)

{
  long lVar1;
  undefined8 *puVar2;
  int iVar3;
  char *pcVar4;
  undefined8 *puVar5;
  
  if (((DAT_00d647c8 & 1) == 0) && (iVar3 = FUN_0054fdd4(&DAT_00d647c8), iVar3 != 0)) {
    FUN_006e3e10();
    FUN_0054ff1c(&DAT_00d647c8);
  }
  for (param_3 = param_3 << 3; param_3 != 0; param_3 = param_3 + -8) {
    (**(code **)(*(long *)*param_2 + 0x10))((long *)*param_2,param_1);
    param_2 = param_2 + 1;
  }
  if ((param_4 & 1) != 0) {
    return;
  }
  pcVar4 = (char *)__emutls_get_address(&DAT_00d5a1f8);
  if (*pcVar4 != '\x01') {
    FUN_006e49ec(&DAT_00d647a8);
    puVar2 = DAT_00d647b8;
    puVar5 = DAT_00d647b0;
    *pcVar4 = '\x01';
    for (; puVar2 != puVar5; puVar5 = puVar5 + 1) {
      (**(code **)(*(long *)*puVar5 + 0x10))((long *)*puVar5,param_1);
    }
    *pcVar4 = '\0';
    FUN_006e5c80(&DAT_00d647a8);
    return;
  }
  lVar1 = *(long *)(param_1 + 0x48) + -1;
  if (lVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/string_view:331: libc++ Hardening assertion __len <= static_cast<size_type>(numeric_limits<difference_type>::max()) failed: string_view::string_view(_CharT *, size_t): length does not fit in difference_type\n"
              );
  }
  if ((*(long *)(param_1 + 0x40) == 0) && (lVar1 != 0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/string_view:333: libc++ Hardening assertion __len == 0 || __s != nullptr failed: string_view::string_view(_CharT *, size_t): received nullptr\n"
              );
  }
  FUN_006e42b8(*(long *)(param_1 + 0x40),lVar1,*(undefined4 *)(param_1 + 0x28));
  return;
}


// ===== 006e3b84  FUN_006e3b84 =====

void FUN_006e3b84(long param_1)

{
  long *plVar1;
  code *pcVar2;
  long *plVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 local_38;
  undefined4 uStack_34;
  char *local_30;
  long local_28;
  
  local_28 = param_1;
  FUN_006e4878(&DAT_00d647a8);
  if (DAT_00d647b0 != DAT_00d647b8) {
    uVar5 = (long)DAT_00d647b8 + (-8 - (long)DAT_00d647b0);
    uVar4 = (uint)uVar5;
    plVar3 = DAT_00d647b0;
    if ((~uVar4 & 0x18) != 0) {
      uVar6 = (ulong)((uVar4 >> 3) + 1) & 3;
      do {
        if (*plVar3 == param_1) goto LAB_006e3c58;
        uVar6 = uVar6 - 1;
        plVar3 = plVar3 + 1;
      } while (uVar6 != 0);
    }
    if (0x17 < uVar5) {
      plVar3 = plVar3 + 2;
      while( true ) {
        if (plVar3[-2] == param_1) {
          plVar3 = plVar3 + -2;
          goto LAB_006e3c58;
        }
        if (plVar3[-1] == param_1) break;
        if (*plVar3 == param_1) goto LAB_006e3c58;
        if (plVar3[1] == param_1) {
          plVar3 = plVar3 + 1;
          goto LAB_006e3c58;
        }
        plVar1 = plVar3 + 2;
        plVar3 = plVar3 + 4;
        if (plVar1 == DAT_00d647b8) goto LAB_006e3c60;
      }
      plVar3 = plVar3 + -1;
LAB_006e3c58:
      if (plVar3 != DAT_00d647b8) {
        FUN_006e5c10(&DAT_00d647a8);
        local_30 = "../../third_party/abseil-cpp/absl/log/internal/log_sink_set.cc";
        local_38 = 0xd7;
        uStack_34 = 3;
        FUN_006e4120(PTR_PTR_FUN_00d52050,&uStack_34,&local_30,&local_38,
                     "Duplicate log sinks are not supported");
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x6e3d08);
        (*pcVar2)();
      }
    }
  }
LAB_006e3c60:
  if (DAT_00d647b8 < DAT_00d647c0) {
    if (DAT_00d647b8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    plVar3 = DAT_00d647b8 + 1;
    *DAT_00d647b8 = param_1;
  }
  else {
    plVar3 = (long *)FUN_006e4198(&DAT_00d647b0,&local_28);
  }
  DAT_00d647b8 = plVar3;
  FUN_006e5c10(&DAT_00d647a8);
  return;
}


// ===== 006e3d08  FUN_006e3d08 =====

void FUN_006e3d08(void)

{
  undefined8 *puVar1;
  int iVar2;
  char *pcVar3;
  undefined8 *puVar4;
  
  if (((DAT_00d647c8 & 1) == 0) && (iVar2 = FUN_0054fdd4(&DAT_00d647c8), iVar2 != 0)) {
    FUN_006e3e10();
    FUN_0054ff1c(&DAT_00d647c8);
  }
  pcVar3 = (char *)__emutls_get_address(&DAT_00d5a1f8);
  if (*pcVar3 != '\x01') {
    FUN_006e49ec(&DAT_00d647a8);
    puVar1 = DAT_00d647b8;
    puVar4 = DAT_00d647b0;
    *pcVar3 = '\x01';
    for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      (**(code **)(*(long *)*puVar4 + 0x18))();
    }
    *pcVar3 = '\0';
    FUN_006e5c80(&DAT_00d647a8);
    return;
  }
  FUN_006e63a8(&DAT_00d647a8);
  puVar1 = DAT_00d647b8;
  for (puVar4 = DAT_00d647b0; puVar4 != puVar1; puVar4 = puVar4 + 1) {
    (**(code **)(*(long *)*puVar4 + 0x18))();
  }
  return;
}


// ===== 006e3e10  FUN_006e3e10 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006e3e10(void)

{
  int iVar1;
  
  DAT_00d647b0 = 0;
  _DAT_00d647a8 = 0;
  DAT_00d647c0 = 0;
  DAT_00d647b8 = 0;
  if (((DAT_00d647d8 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d647d8), iVar1 != 0)) {
    DAT_00d647d0 = &PTR_FUN_00d29bd8;
    FUN_0054ff1c(&DAT_00d647d8);
  }
  FUN_006e3b84(&DAT_00d647d0);
  if (((DAT_00d647e8 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d647e8), iVar1 != 0)) {
    DAT_00d647e0 = &PTR_FUN_00d29c10;
    FUN_0054ff1c(&DAT_00d647e8);
  }
  FUN_006e3b84(&DAT_00d647e0);
  return;
}


// ===== 006e3ecc  FUN_006e3ecc =====

void FUN_006e3ecc(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 006e3ed8  FUN_006e3ed8 =====

void FUN_006e3ed8(undefined8 param_1,long param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  
  iVar1 = *(int *)(param_2 + 0x28);
  iVar2 = FUN_006df478();
  if ((iVar1 < iVar2) && (uVar3 = FUN_006e42a4(), (uVar3 & 1) != 0)) {
    return;
  }
  if ((int)DAT_00d647f0 != 0xdd) {
    FUN_006e3fb8(&DAT_00d647f0);
  }
  lVar5 = (long)*(char *)(param_2 + 0x7f);
  plVar4 = (long *)(param_2 + 0x68);
  if (lVar5 < 0) {
    lVar5 = *(long *)(param_2 + 0x70);
    if (lVar5 != 0) {
      plVar4 = (long *)*plVar4;
      goto LAB_006e3f64;
    }
  }
  else if (*(char *)(param_2 + 0x7f) != '\0') goto LAB_006e3f64;
  lVar5 = *(long *)(param_2 + 0x48) + -1;
  if (lVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/string_view:331: libc++ Hardening assertion __len <= static_cast<size_type>(numeric_limits<difference_type>::max()) failed: string_view::string_view(_CharT *, size_t): length does not fit in difference_type\n"
              );
  }
  plVar4 = *(long **)(param_2 + 0x40);
  if ((plVar4 == (long *)0x0) && (lVar5 != 0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/string_view:333: libc++ Hardening assertion __len == 0 || __s != nullptr failed: string_view::string_view(_CharT *, size_t): received nullptr\n"
              );
  }
LAB_006e3f64:
  FUN_006e42b8(plVar4,lVar5,*(undefined4 *)(param_2 + 0x28));
  return;
}


// ===== 006e3fb0  FUN_006e3fb0 =====

void FUN_006e3fb0(void)

{
  return;
}


// ===== 006e3fb8  FUN_006e3fb8 =====

void FUN_006e3fb8(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = FUN_00d0f4a0(0,0x65c2937b,param_1);
  if ((iVar1 == 0) || (iVar1 = FUN_006dfc38(param_1,3,&DAT_002081f8,1), iVar1 == 0)) {
    uVar2 = FUN_006e42a4();
    if ((uVar2 & 1) == 0) {
      FUN_006e42b8("WARNING: All log messages before absl::InitializeLog() is called are written to STDERR\n"
                   ,0x57,1);
    }
    iVar1 = FUN_00d0f680(0xdd,param_1);
    if (iVar1 == 0x5a308d2) {
      FUN_006dfc10(param_1,1);
      return;
    }
  }
  return;
}


// ===== 006e4064  FUN_006e4064 =====

void FUN_006e4064(void)

{
  return;
}


// ===== 006e406c  FUN_006e406c =====

void FUN_006e406c(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 006e4078  FUN_006e4078 =====

void FUN_006e4078(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  uint uVar2;
  
  if (*(uint *)(param_2 + 0x28) - 1 < 3) {
    uVar2 = *(uint *)(param_2 + 0x28) | 4;
  }
  else if (*(int *)(param_2 + 0x2c) < 2) {
    uVar2 = 3;
    if (*(int *)(param_2 + 0x2c) != 1) {
      uVar2 = 4;
    }
  }
  else {
    uVar2 = 2;
  }
  uVar1 = FUN_006df48c();
  __android_log_write(uVar2,uVar1,*(undefined8 *)(param_2 + 0x40));
  if (*(int *)(param_2 + 0x28) != 3) {
    return;
  }
  __android_log_write(7,uVar1,"terminating.\n");
  return;
}


// ===== 006e4120  FUN_006e4120 =====

void FUN_006e4120(undefined8 *param_1,undefined4 *param_2,undefined8 *param_3,undefined4 *param_4,
                 undefined8 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  void *local_48 [2];
  char cStack_31;
  
  pcVar4 = (code *)*param_1;
  uVar1 = *param_2;
  uVar3 = *param_3;
  uVar2 = *param_4;
  FUN_005d3510(local_48,param_5);
  (*pcVar4)(uVar1,uVar3,uVar2,local_48);
  if (cStack_31 < '\0') {
    operator_delete(local_48[0]);
  }
  return;
}


// ===== 006e4198  FUN_006e4198 =====

undefined8 * FUN_006e4198(long *param_1,undefined8 *param_2)

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
    FUN_006e428c();
LAB_006e4288:
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
    if (uVar5 >> 0x3d != 0) goto LAB_006e4288;
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


// ===== 006e428c  FUN_006e428c =====

void FUN_006e428c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 006e42a4  FUN_006e42a4 =====

undefined1 FUN_006e42a4(void)

{
  return DAT_00d647f0._4_1_;
}


// ===== 006e42b8  FUN_006e42b8 =====

void FUN_006e42b8(void *param_1,size_t param_2)

{
  if (param_2 == 0) {
    return;
  }
  fwrite(param_1,param_2,1,*(FILE **)PTR_stderr_00d51cb8);
  return;
}


// ===== 006e42d8  FUN_006e42d8 =====

undefined8 FUN_006e42d8(void)

{
  return DAT_00d647f8;
}


// ===== 006e42ec  FUN_006e42ec =====

undefined1 FUN_006e42ec(void)

{
  return DAT_00d5a218;
}


// ===== 006e4300  FUN_006e4300 =====

undefined8 FUN_006e4300(void)

{
  return DAT_00d5a21c;
}


// ===== 006e4314  FUN_006e4314 =====

undefined1 FUN_006e4314(void)

{
  return DAT_00d5a21c._4_1_;
}


// ===== 006e4328  FUN_006e4328 =====

uint FUN_006e4328(undefined8 param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00d0f650(param_1,&DAT_00d64800);
  return uVar1 & 1;
}


// ===== 006e4350  <EXTERNAL>::sched_yield =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sched_yield(void)

{
  int iVar1;
  
  iVar1 = sched_yield();
  return iVar1;
}


// ===== 006e4358  FUN_006e4358 =====

int FUN_006e4358(int param_1,uint param_2)

{
  int iVar1;
  code *pcVar2;
  
  if ((int)DAT_00d66880 != 0xdd) {
    FUN_006e6510(&DAT_00d66880);
  }
  if (1 < param_2) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(0x5512,0x6e43cc);
    (*pcVar2)();
  }
  iVar1 = *(int *)((long)&DAT_00d66888 + (ulong)param_2 * 4);
  if ((int)DAT_00d66880 != 0xdd) {
    FUN_006e6510(&DAT_00d66880);
  }
  if (param_1 < iVar1) {
    param_1 = param_1 + 1;
  }
  else if (param_1 == iVar1) {
    sched_yield();
    param_1 = param_1 + 1;
  }
  else {
    FUN_006e680c(DAT_00d66890,DAT_00d66898);
    param_1 = 0;
  }
  return param_1;
}


// ===== 006e441c  FUN_006e441c =====

void FUN_006e441c(ulong *param_1,long *param_2)

{
  long *plVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  
  uVar9 = *param_1;
  if ((uVar9 & 0x4d) != 4) {
    return;
  }
  uVar3 = FUN_00d0f560(uVar9,uVar9 | 0x48,param_1);
  if (uVar3 != uVar9) {
    return;
  }
  plVar10 = (long *)(uVar9 & 0xffffffffffffff00);
  if (plVar10 == (long *)0x0) goto LAB_006e4610;
  plVar4 = (long *)*plVar10;
  plVar6 = plVar10;
  if (plVar4 != param_2) {
    do {
      plVar6 = plVar4;
      if ((*(long *)param_2[4] == *(long *)plVar4[4]) && ((int)param_2[3] == (int)plVar4[3])) {
        plVar7 = (long *)((long *)param_2[4])[1];
        plVar5 = (long *)((long *)plVar4[4])[1];
        if ((plVar7 == (long *)0x0) || (plVar5 == (long *)0x0)) {
          if (plVar7 != plVar5) goto LAB_006e451c;
        }
        else if (((plVar7[2] != plVar5[2]) || (plVar7[3] != plVar5[3])) ||
                (*plVar7 != *plVar5 || plVar7[1] != plVar5[1])) goto LAB_006e451c;
        if ((long *)plVar4[1] == param_2) {
          plVar5 = (long *)param_2[1];
          if ((long *)param_2[1] == (long *)0x0) {
            plVar5 = (long *)0x0;
            if ((long *)*plVar4 != param_2) {
              plVar5 = (long *)*plVar4;
            }
          }
          plVar4[1] = (long)plVar5;
        }
      }
      else {
LAB_006e451c:
        plVar5 = (long *)plVar4[1];
        if (plVar5 != (long *)0x0) {
          plVar1 = plVar4;
          for (plVar7 = (long *)plVar5[1]; plVar6 = plVar5, plVar7 != (long *)0x0;
              plVar7 = (long *)plVar7[1]) {
            plVar1[1] = (long)plVar7;
            plVar5 = plVar7;
            plVar1 = plVar6;
          }
          plVar4[1] = (long)plVar6;
        }
      }
      plVar4 = (long *)*plVar6;
    } while ((plVar6 != plVar10) && (plVar4 != param_2));
    if (plVar4 != param_2) goto LAB_006e4610;
  }
  lVar8 = *plVar4;
  *plVar6 = lVar8;
  if (plVar4 == plVar10) {
    bVar2 = plVar6 != plVar10;
    plVar10 = (long *)0x0;
    if (bVar2) {
      plVar10 = plVar6;
    }
  }
  else if (plVar6 != plVar10) {
    if ((*(long *)plVar6[4] == **(long **)(lVar8 + 0x20)) &&
       ((int)plVar6[3] == *(int *)(lVar8 + 0x18))) {
      plVar4 = (long *)((long *)plVar6[4])[1];
      plVar5 = (long *)(*(long **)(lVar8 + 0x20))[1];
      if ((plVar4 == (long *)0x0) || (plVar5 == (long *)0x0)) {
        if (plVar4 == plVar5) goto LAB_006e466c;
      }
      else if (((plVar4[2] == plVar5[2]) && (plVar4[3] == plVar5[3])) &&
              (*plVar4 == *plVar5 && plVar4[1] == plVar5[1])) {
LAB_006e466c:
        if (*(long *)(lVar8 + 8) == 0) {
          plVar6[1] = lVar8;
        }
        else {
          plVar6[1] = *(long *)(lVar8 + 8);
        }
      }
    }
  }
  *param_2 = 0;
  *(undefined4 *)((long)param_2 + 0x1c) = 0;
LAB_006e4610:
  do {
    uVar3 = *param_1;
    uVar9 = uVar3 & 0x12;
    if (plVar10 != (long *)0x0) {
      uVar9 = uVar9 | (ulong)plVar10 | 4;
      plVar10[5] = 0;
      *(undefined1 *)((long)plVar10 + 0x13) = 0;
    }
    uVar9 = FUN_00d0f5a0(uVar3,uVar9,param_1);
  } while (uVar9 != uVar3);
  return;
}


// ===== 006e4684  FUN_006e4684 =====

bool FUN_006e4684(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  
  if ((**(long **)(param_1 + 0x20) == **(long **)(param_2 + 0x20)) &&
     (*(int *)(param_1 + 0x18) == *(int *)(param_2 + 0x18))) {
    plVar1 = (long *)(*(long **)(param_1 + 0x20))[1];
    plVar2 = (long *)(*(long **)(param_2 + 0x20))[1];
    if ((plVar1 == (long *)0x0) || (plVar2 == (long *)0x0)) {
      return plVar1 == plVar2;
    }
    if ((plVar1[2] == plVar2[2]) && (plVar1[3] == plVar2[3])) {
      return *plVar1 == *plVar2 && plVar1[1] == plVar2[1];
    }
  }
  return false;
}


// ===== 006e4708  FUN_006e4708 =====

void FUN_006e4708(undefined8 param_1,long *param_2)

{
  int iVar1;
  code *pcVar2;
  ulong uVar3;
  int iVar4;
  
  iVar4 = (int)*(undefined8 *)((long)param_2 + 0x1c);
  do {
    if (iVar4 != 1) {
      if ((param_2[4] == 0) && ((*(byte *)((long)param_2 + 0x14) & 1) == 0)) {
        FUN_00622058(3,"mutex.cc",0x4b2,"Check %s failed: %s",
                     "s->waitp != nullptr || s->suppress_fatal_errors",
                     "detected illegal recursion in Mutex code");
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x6e4878);
        (*pcVar2)();
      }
      param_2[4] = 0;
      return;
    }
    uVar3 = FUN_006e68dc(*(undefined8 *)(param_2[4] + 0x10));
    if ((uVar3 & 1) == 0) {
      FUN_006e441c(param_1,param_2);
      if (*param_2 != 0) {
        iVar4 = 0;
        do {
          if ((int)DAT_00d66880 != 0xdd) {
            FUN_006e6510(&DAT_00d66880);
          }
          iVar1 = DAT_00d66888._4_4_;
          if ((int)DAT_00d66880 == 0xdd) {
            if (iVar4 < DAT_00d66888._4_4_) goto LAB_006e47a4;
LAB_006e47e0:
            if (iVar4 == iVar1) {
              sched_yield();
              goto LAB_006e47a4;
            }
            FUN_006e680c(DAT_00d66890,DAT_00d66898);
            iVar4 = 0;
          }
          else {
            FUN_006e6510(&DAT_00d66880);
            if (iVar1 <= iVar4) goto LAB_006e47e0;
LAB_006e47a4:
            iVar4 = iVar4 + 1;
          }
          FUN_006e441c(param_1,param_2);
        } while (*param_2 != 0);
      }
      *(undefined8 *)(param_2[4] + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(param_2[4] + 8) = 0;
    }
    iVar4 = (int)*(undefined8 *)((long)param_2 + 0x1c);
  } while( true );
}


// ===== 006e4878  FUN_006e4878 =====

void FUN_006e4878(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  
  uVar2 = *param_1;
  iVar3 = DAT_00d66880._4_4_;
  if (((uVar2 & 0x19) == 0) &&
     (uVar1 = FUN_00d0f560(uVar2,uVar2 | 8,param_1), iVar3 = DAT_00d66880._4_4_, uVar1 == uVar2)) {
    return;
  }
  do {
    uVar2 = *param_1;
    if ((uVar2 & 0x11) != 0) break;
    if ((((uint)uVar2 >> 3 & 1) == 0) &&
       (uVar1 = FUN_00d0f560(uVar2,uVar2 | 8,param_1), uVar1 == uVar2)) {
      return;
    }
    iVar3 = iVar3 + -1;
  } while (0 < iVar3);
  FUN_006e493c(param_1,&DAT_00208278,0,0);
  return;
}


// ===== 006e493c  FUN_006e493c =====

void FUN_006e493c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  
  if (DAT_00d66880._4_4_ == 0) {
    iVar2 = FUN_006dfa50();
    DAT_00d66880._4_4_ = 0x5dc;
    if (iVar2 < 2) {
      DAT_00d66880._4_4_ = -1;
    }
  }
  uVar3 = FUN_006e4a68(param_1,param_2,param_3,0xffffffffffffffff,param_4);
  if ((uVar3 & 1) == 0) {
    FUN_00622058(3,"mutex.cc",0x739,"Check %s failed: %s",
                 "this->LockSlowWithDeadline(how, cond, KernelTimeout::Never(), flags)",
                 "condition untrue on return from LockSlow");
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x6e49ec);
    (*pcVar1)();
  }
  return;
}


// ===== 006e49ec  FUN_006e49ec =====

void FUN_006e49ec(ulong *param_1)

{
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  
  uVar1 = *param_1;
  do {
    if ((uVar1 & 0x1c) != 0) {
      FUN_006e493c(param_1,&DAT_002082a0,0,0);
      return;
    }
    uVar3 = FUN_00d0f560(uVar1,(uVar1 | 1) + 0x100,param_1);
    bVar2 = uVar3 != uVar1;
    uVar1 = uVar3;
  } while (bVar2);
  return;
}


// ===== 006e4a68  FUN_006e4a68 =====

uint FUN_006e4a68(ulong *param_1,ulong *param_2,long param_3,undefined8 param_4,uint param_5)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  ulong *local_80;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined1 *local_48;
  
  uVar4 = *param_1;
  if ((*param_2 & uVar4) == 0) {
    uVar2 = 0xfffffffffffffffd;
    if ((param_5 & 1) == 0) {
      uVar2 = 0xffffffffffffffff;
    }
    uVar2 = FUN_00d0f560(uVar4,(param_2[1] | uVar4 & uVar2) + param_2[2],param_1);
    if (uVar2 != uVar4) goto LAB_006e4af4;
    if (param_3 == 0) {
      uVar1 = 1;
      goto LAB_006e4b60;
    }
    uVar4 = (**(code **)(param_3 + 0x10))(param_3);
    uVar1 = 1;
    if ((uVar4 & 1) != 0) goto LAB_006e4b60;
  }
  else {
LAB_006e4af4:
    uVar1 = 0;
  }
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = FUN_006e6a88();
  if (local_60 == 0) {
    local_60 = FUN_006e6ab4();
  }
  uStack_68 = 0;
  uStack_58 = 0;
  local_80 = param_2;
  local_78 = param_3;
  local_70 = param_4;
  local_50 = thunk_FUN_005183d8();
  uVar3 = param_5;
  if (param_3 != 0) {
    uVar3 = param_5 | 2;
  }
  local_48 = (undefined1 *)((ulong)local_48 & 0xffffffffffffff00);
  if (uVar1 != 0) {
    FUN_006e4bb0(param_5 | 2,param_1,&local_80);
    FUN_006e4708(param_1,local_60);
    uVar3 = uVar3 | 1;
  }
  FUN_006e53e4(param_1,&local_80,uVar3);
  uVar1 = 1;
  if ((param_3 != 0) && (local_78 == 0)) {
    uVar1 = (**(code **)(param_3 + 0x10))(param_3);
  }
LAB_006e4b60:
  return uVar1 & 1;
}


// ===== 006e4bb0  FUN_006e4bb0 =====

void FUN_006e4bb0(ulong *param_1,long param_2)

{
  undefined8 **ppuVar1;
  undefined8 **ppuVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined8 **ppuVar8;
  long lVar9;
  undefined8 uVar10;
  char *pcVar11;
  char *pcVar12;
  ulong uVar13;
  undefined8 **ppuVar14;
  long lVar15;
  undefined8 **ppuVar16;
  long *plVar17;
  long *plVar18;
  long lVar19;
  uint uVar20;
  ulong uVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 **ppuVar24;
  undefined8 **ppuVar25;
  ulong local_80;
  undefined8 **local_78;
  undefined8 **local_70;
  undefined8 *local_68;
  
  uVar21 = *param_1;
  FUN_006e63a8();
  FUN_006e5d14(uVar21,"Unlock");
  if (((uint)uVar21 >> 4 & 1) != 0) {
    uVar6 = 8;
    if ((uVar21 & 8) == 0) {
      uVar6 = 9;
    }
    FUN_006e58e4(param_1,uVar6);
  }
  local_68 = (undefined8 *)0x1;
  if (((param_2 == 0) || (*(long *)(*(long *)(param_2 + 0x20) + 0x20) == 0)) ||
     (*(char *)(*(long *)(param_2 + 0x20) + 0x14) == '\x01')) {
    local_80 = 0;
    local_70 = (undefined8 **)0x0;
    uVar6 = 0;
    local_78 = (undefined8 **)0x0;
    ppuVar25 = local_78;
    ppuVar8 = (undefined8 **)0x0;
LAB_006e4c54:
    do {
      local_78 = ppuVar25;
      uVar21 = *param_1;
      uVar20 = (uint)uVar21;
      if ((((uVar20 >> 3 & 1) == 0) || (param_2 != 0)) || ((uVar21 & 6) == 4)) {
        if ((param_2 == 0) && ((uVar21 & 5) == 1)) {
          lVar19 = -0x101;
          if (0x1ff < uVar21) {
            lVar19 = -0x100;
          }
          uVar7 = lVar19 + uVar21;
          goto LAB_006e4c90;
        }
        if (((uVar20 >> 6 & 1) != 0) ||
           (uVar7 = FUN_00d0f560(uVar21,uVar21 | 0x40,param_1), uVar7 != uVar21)) goto LAB_006e4cc4;
        if ((uVar20 >> 2 & 1) == 0) {
          if (param_2 != 0) {
            bVar4 = true;
            do {
              uVar7 = *param_1;
              uVar21 = uVar7 - 0x100;
              if ((long)uVar7 < 0x100) {
                uVar21 = uVar7;
              }
              if (bVar4) {
                bVar4 = *(long *)(param_2 + 0x28) == 0;
                uVar13 = FUN_006e5dac(0,param_2,uVar21,2);
              }
              else {
                uVar13 = 0;
                bVar4 = false;
              }
              uVar20 = 0xffffffde;
              if ((uVar7 & 0xfffffffffffffe08) != 0) {
                uVar20 = 0xffffffd7;
              }
              uVar21 = uVar21 & 0xffffffffffffff00;
              if (uVar13 != 0) {
                uVar21 = uVar13 | 4;
              }
              uVar21 = FUN_00d0f5a0(uVar7,uVar21 | (ulong)((uint)uVar7 & uVar20) & 0x9f,param_1);
            } while (uVar21 != uVar7);
            goto LAB_006e516c;
          }
          pcVar11 = "waitp != nullptr";
          pcVar12 = "UnlockSlow is confused";
          uVar10 = 0x87d;
          goto LAB_006e532c;
        }
        ppuVar25 = (undefined8 **)(uVar21 & 0xffffffffffffff00);
        if (((uVar21 & 1) == 0) || ((long)((ulong)ppuVar25[5] & 0xffffffffffffff00) < 0x101)) {
          if (local_78 != (undefined8 **)0x0) {
            if ((*(byte *)((long)ppuVar25 + 0x13) & 1) == 0) {
              pcVar11 = "old_h == nullptr || h->maybe_unlocking";
              pcVar12 = "Mutex queue changed beneath us";
              uVar10 = 0x8b5;
              goto LAB_006e532c;
            }
            if (((ulong)local_78[2] & 1) == 0) {
              *(undefined1 *)(local_78 + 2) = 1;
              if (local_78[1] != (undefined8 *)0x0) {
                pcVar11 = "old_h->skip == nullptr";
                pcVar12 = "illegal skip from head";
                uVar10 = 0x8bb;
                goto LAB_006e532c;
              }
              if (local_78 != ppuVar25) {
                puVar22 = *local_78;
                uVar7 = FUN_006e4684(local_78,puVar22);
                if ((uVar7 & 1) != 0) {
                  local_78[1] = puVar22;
                }
              }
            }
          }
          ppuVar14 = (undefined8 **)*ppuVar25;
          if (((undefined *)*ppuVar14[4] != &DAT_00208278) || (ppuVar14[4][1] != 0)) {
            if ((ppuVar8 != (undefined8 **)0x0) &&
               ((local_78 == ppuVar25 || ((undefined *)*ppuVar8[4] == &DAT_00208278)))) {
              ppuVar24 = ppuVar25;
              if (local_70 != (undefined8 **)0x0) {
                ppuVar24 = local_70;
              }
              goto LAB_006e4fb0;
            }
            if (local_78 != ppuVar25) {
              ppuVar14 = ppuVar25;
              if (local_78 != (undefined8 **)0x0) {
                ppuVar14 = local_78;
              }
              ppuVar14 = (undefined8 **)*ppuVar14;
              *(undefined1 *)(ppuVar25 + 2) = 0;
              if (ppuVar25[1] == (undefined8 *)0x0) {
                *(undefined1 *)((long)ppuVar25 + 0x13) = 1;
                *param_1 = uVar21;
                do {
                  *(undefined1 *)((long)ppuVar14 + 0x11) = 0;
                  if ((ppuVar14[4][1] == 0) ||
                     (uVar21 = (**(code **)(ppuVar14[4][1] + 0x10))(), (uVar21 & 1) != 0)) {
                    if (ppuVar8 == (undefined8 **)0x0) {
                      *(undefined1 *)((long)ppuVar14 + 0x11) = 1;
                      ppuVar8 = ppuVar14;
                      local_70 = local_78;
                      if ((undefined *)*ppuVar14[4] == &DAT_00208278) {
                        local_80 = 0x20;
                        goto LAB_006e4c54;
                      }
                    }
                    else if ((undefined *)*ppuVar14[4] == &DAT_002082a0) {
                      *(undefined1 *)((long)ppuVar14 + 0x11) = 1;
                    }
                    else {
                      local_80 = 0x20;
                    }
                  }
                  local_78 = ppuVar14;
                  if (((*(byte *)((long)ppuVar14 + 0x11) & 1) == 0) &&
                     (ppuVar24 = (undefined8 **)ppuVar14[1], ppuVar24 != (undefined8 **)0x0)) {
                    ppuVar1 = ppuVar14;
                    for (ppuVar16 = (undefined8 **)ppuVar24[1]; local_78 = ppuVar24,
                        ppuVar16 != (undefined8 **)0x0; ppuVar16 = (undefined8 **)ppuVar16[1]) {
                      ppuVar1[1] = ppuVar16;
                      ppuVar24 = ppuVar16;
                      ppuVar1 = local_78;
                    }
                    ppuVar14[1] = local_78;
                  }
                  if (local_78 == ppuVar25) goto LAB_006e4c54;
                  ppuVar14 = (undefined8 **)*local_78;
                } while( true );
              }
              pcVar11 = "h->skip == nullptr";
              pcVar12 = "illegal skip from head";
              uVar10 = 0x8fb;
              goto LAB_006e532c;
            }
            ppuVar25[5] = (undefined8 *)0x0;
            *(undefined1 *)((long)ppuVar25 + 0x13) = 0;
            if (param_2 != 0) {
              uVar7 = FUN_006e5dac(uVar21 & 0xffffffffffffff00,param_2,uVar21,2);
              uVar13 = 0x96;
              goto LAB_006e4f8c;
            }
            uVar21 = uVar21 & 0xffffffffffffff96;
            goto LAB_006e5168;
          }
          *(undefined1 *)((long)ppuVar14 + 0x11) = 1;
          local_80 = 0x20;
          ppuVar24 = (undefined8 **)(uVar21 & 0xffffffffffffff00);
          ppuVar8 = ppuVar14;
LAB_006e4fb0:
          if ((undefined8 **)*ppuVar24 != ppuVar8) {
            pcVar11 = "pw->next == w";
            pcVar12 = "pw not w\'s predecessor";
            uVar10 = 0x934;
            goto LAB_006e532c;
          }
          bVar4 = false;
          ppuVar14 = &local_68;
          ppuVar8 = (undefined8 **)(uVar21 & 0xffffffffffffff00);
          goto LAB_006e4fc8;
        }
        ppuVar25[5] = ppuVar25[5] + -0x20;
        if (param_2 == 0) goto LAB_006e5168;
        uVar7 = FUN_006e5dac(uVar21 & 0xffffffffffffff00,param_2,uVar21,2);
        if (uVar7 == 0) {
          pcVar11 = "new_h != nullptr";
          pcVar12 = "waiters disappeared during Enqueue()!";
          uVar10 = 0x8a9;
          goto LAB_006e532c;
        }
        uVar13 = 0xbf;
LAB_006e4f8c:
        uVar21 = uVar21 & uVar13 | uVar7;
        goto LAB_006e5168;
      }
      uVar7 = uVar21 & 0xffffffffffffffd7;
LAB_006e4c90:
      uVar7 = FUN_00d0f5a0(uVar21,uVar7,param_1);
      if (uVar7 == uVar21) {
        return;
      }
LAB_006e4cc4:
      uVar6 = FUN_006e4358(uVar6,0);
      ppuVar25 = local_78;
    } while( true );
  }
  pcVar11 = 
  "waitp == nullptr || waitp->thread->waitp == nullptr || waitp->thread->suppress_fatal_errors";
  pcVar12 = "detected illegal recursion into Mutex code";
  uVar10 = 0x860;
  goto LAB_006e532c;
  while ((ppuVar24 != ppuVar8 || (!bVar4))) {
LAB_006e4fc8:
    ppuVar16 = (undefined8 **)*ppuVar24;
    if (*(char *)((long)ppuVar16 + 0x11) == '\x01') {
      if (ppuVar24[1] != (undefined8 *)0x0) {
        pcVar11 = "pw->skip == nullptr";
        pcVar12 = "bad skip in DequeueAllWakeable";
        uVar10 = 0x444;
        goto LAB_006e532c;
      }
      puVar22 = *ppuVar16;
      *ppuVar24 = puVar22;
      if (ppuVar8 == ppuVar16) {
        bVar5 = ppuVar24 != ppuVar8;
        ppuVar8 = (undefined8 **)0x0;
        if (bVar5) {
          ppuVar8 = ppuVar24;
        }
      }
      else if (ppuVar24 != ppuVar8) {
        if ((*ppuVar24[4] == *(long *)puVar22[4]) &&
           (*(int *)(ppuVar24 + 3) == *(int *)(puVar22 + 3))) {
          plVar17 = (long *)ppuVar24[4][1];
          plVar18 = (long *)((long *)puVar22[4])[1];
          if ((plVar17 == (long *)0x0) || (plVar18 == (long *)0x0)) {
            if (plVar17 == plVar18) goto LAB_006e50fc;
          }
          else if (((plVar17[2] == plVar18[2]) && (plVar17[3] == plVar18[3])) &&
                  (*plVar17 == *plVar18 && plVar17[1] == plVar18[1])) {
LAB_006e50fc:
            if ((undefined8 *)puVar22[1] == (undefined8 *)0x0) {
              ppuVar24[1] = puVar22;
            }
            else {
              ppuVar24[1] = (undefined8 *)puVar22[1];
            }
          }
        }
      }
      *ppuVar16 = *ppuVar14;
      *ppuVar14 = ppuVar16;
      if ((ppuVar8 != ppuVar25) || (ppuVar14 = ppuVar16, (undefined *)*ppuVar16[4] == &DAT_00208278)
         ) break;
    }
    else {
      ppuVar24 = (undefined8 **)ppuVar16[1];
      if (ppuVar24 == (undefined8 **)0x0) {
        bVar4 = true;
        ppuVar24 = ppuVar16;
      }
      else {
        ppuVar1 = ppuVar16;
        for (ppuVar2 = (undefined8 **)ppuVar24[1]; ppuVar2 != (undefined8 **)0x0;
            ppuVar2 = (undefined8 **)ppuVar2[1]) {
          ppuVar1[1] = ppuVar2;
          ppuVar1 = ppuVar24;
          ppuVar24 = ppuVar2;
        }
        bVar4 = true;
        ppuVar16[1] = ppuVar24;
      }
    }
  }
  if (param_2 != 0) {
    ppuVar8 = (undefined8 **)FUN_006e5dac(ppuVar8,param_2,uVar21,2);
  }
  if (local_68 != (undefined8 *)0x1) {
    if (ppuVar8 == (undefined8 **)0x0) {
      uVar21 = uVar21 & 0x10 | 2;
    }
    else {
      ppuVar8[5] = (undefined8 *)0x0;
      *(undefined1 *)((long)ppuVar8 + 0x13) = 0;
      uVar21 = local_80 | (ulong)ppuVar8 | uVar21 & 0x10 | 6;
    }
LAB_006e5168:
    *param_1 = uVar21;
LAB_006e516c:
    puVar22 = local_68;
    if (local_68 != (undefined8 *)0x1) {
      lVar9 = thunk_FUN_005183d8();
      lVar19 = 0;
      do {
        if ((*(byte *)((long)puVar22 + 0x12) & 1) == 0) {
          lVar15 = *(long *)(puVar22[4] + 0x30);
          *(long *)(puVar22[4] + 0x30) = lVar9;
          lVar19 = (lVar9 - lVar15) + lVar19;
          *(undefined1 *)(puVar22[4] + 0x38) = 1;
        }
        puVar23 = (undefined8 *)*puVar22;
        *puVar22 = 0;
        *(undefined4 *)((long)puVar22 + 0x1c) = 0;
        FUN_006e68d0(puVar22);
        puVar22 = puVar23;
        local_68 = puVar23;
      } while (puVar23 != (undefined8 *)0x1);
      if (0 < lVar19) {
        (*(code *)PTR_FUN_00d5a238)("slow release",param_1,lVar19);
                    /* WARNING: Could not recover jumptable at 0x006e522c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR_FUN_00d5a228)(lVar19);
        return;
      }
    }
    return;
  }
  pcVar11 = "wake_list != kPerThreadSynchNull";
  pcVar12 = "unexpected empty wake list";
  uVar10 = 0x94b;
LAB_006e532c:
  FUN_00622058(3,"mutex.cc",uVar10,"Check %s failed: %s",pcVar11,pcVar12);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x6e5334);
  (*pcVar3)();
}


// ===== 006e53e4  FUN_006e53e4 =====

void FUN_006e53e4(ulong *param_1,long *param_2,uint param_3)

{
  int iVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined4 uVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  
  if (((uint)*param_1 >> 4 & 1) != 0) {
    uVar7 = 4;
    if ((undefined *)*param_2 != &DAT_00208278) {
      uVar7 = 6;
    }
    FUN_006e58e4(param_1,uVar7);
  }
  if ((*(long *)(param_2[4] + 0x20) != 0) && ((*(byte *)(param_2[4] + 0x14) & 1) == 0)) {
    FUN_00622058(3,"mutex.cc",0x7d5,"Check %s failed: %s",
                 "waitp->thread->waitp == nullptr || waitp->thread->suppress_fatal_errors",
                 "detected illegal recursion into Mutex code");
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x6e5864);
    (*pcVar2)();
  }
  iVar12 = 0;
LAB_006e5478:
  do {
    uVar10 = *param_1;
    uVar9 = (uint)uVar10;
    if ((uVar9 & (uVar9 << 3 ^ 0x20) & 0x28) != 0) {
      if ((~uVar9 & 9) == 0) {
        pcVar6 = 
        "Check (v & (kMuWriter | kMuReader)) != (kMuWriter | kMuReader) failed: %s: Mutex corrupt: both reader and writer lock held: %p"
        ;
        uVar5 = 0x7c4;
LAB_006e58d8:
        FUN_00622058(3,"mutex.cc",uVar5,pcVar6,&DAT_001ae835,uVar10);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x6e58e4);
        (*pcVar2)();
      }
      if ((uVar10 & 0x24) == 0x20) {
        pcVar6 = 
        "Check (v & (kMuWait | kMuWrWait)) != kMuWrWait failed: %s: Mutex corrupt: waiting writer with no waiters: %p"
        ;
        uVar5 = 0x7c7;
        goto LAB_006e58d8;
      }
    }
    lVar8 = *param_2;
    if ((*(ulong *)(lVar8 + 0x18) & uVar10) == 0) {
      uVar3 = 0xfffffffffffffffd;
      if ((param_3 & 1) == 0) {
        uVar3 = 0xffffffffffffffff;
      }
      uVar3 = FUN_00d0f560(uVar10,(*(ulong *)(lVar8 + 8) | uVar3 & uVar10) + *(long *)(lVar8 + 0x10)
                           ,param_1);
      if (uVar3 == uVar10) {
LAB_006e5658:
        if ((param_2[1] == 0) || (uVar3 = (**(code **)(param_2[1] + 0x10))(), (uVar3 & 1) != 0)) {
          if ((*(long *)(param_2[4] + 0x20) != 0) && ((*(byte *)(param_2[4] + 0x14) & 1) == 0)) {
            FUN_00622058(3,"mutex.cc",0x83c,"Check %s failed: %s",
                         "waitp->thread->waitp == nullptr || waitp->thread->suppress_fatal_errors",
                         "detected illegal recursion into Mutex code");
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x6e5894);
            (*pcVar2)();
          }
          if (((uint)uVar10 >> 4 & 1) != 0) {
            uVar7 = 5;
            if ((undefined *)*param_2 != &DAT_00208278) {
              uVar7 = 7;
            }
            FUN_006e58e4(param_1,uVar7);
            return;
          }
          return;
        }
        FUN_006e4bb0(param_1,param_2);
LAB_006e5678:
        FUN_006e4708(param_1,param_2[4]);
        iVar12 = 0;
        param_3 = param_3 | 1;
      }
    }
    else if ((uVar10 & 0x44) == 0) {
      uVar3 = FUN_006e5dac(0,param_2,uVar10,param_3);
      if (uVar3 == 0) {
        FUN_00622058(3,"mutex.cc",0x7f2,"Check %s failed: %s","new_h != nullptr",
                     "Enqueue to empty list failed");
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x6e5804);
        (*pcVar2)();
      }
      uVar4 = 0xb9;
      if ((param_3 & 1) == 0) {
        uVar4 = 0xbb;
      }
      uVar11 = 0x24;
      if ((uVar9 & (undefined *)*param_2 == &DAT_00208278) == 0) {
        uVar11 = 4;
      }
      uVar3 = FUN_00d0f5a0(uVar10,uVar4 & uVar10 | uVar3 | uVar11,param_1);
      if (uVar3 == uVar10) goto LAB_006e5678;
      *(undefined8 *)(param_2[4] + 0x20) = 0;
    }
    else {
      uVar3 = 0xffffffffffffffdf;
      if ((param_3 & 1) == 0) {
        uVar3 = 0xffffffffffffffff;
      }
      if ((uVar3 & uVar10 & *(ulong *)(lVar8 + 0x20)) == 0) {
        uVar3 = 0xffffffffffffffbc;
        if ((param_3 & 1) == 0) {
          uVar3 = 0xffffffffffffffbe;
        }
        uVar3 = FUN_00d0f560(uVar10,uVar3 & uVar10 | 0x41,param_1);
        if (uVar3 == uVar10) {
          *(long *)((uVar10 & 0xffffffffffffff00) + 0x28) =
               *(long *)((uVar10 & 0xffffffffffffff00) + 0x28) + 0x100;
          do {
            uVar10 = *param_1;
            uVar3 = FUN_00d0f5a0(uVar10,uVar10 & 0xffffffffffffffbf | 1,param_1);
          } while (uVar3 != uVar10);
          goto LAB_006e5658;
        }
      }
      else if ((uVar9 >> 6 & 1) == 0) {
        uVar3 = 0xffffffffffffffb9;
        if ((param_3 & 1) == 0) {
          uVar3 = 0xffffffffffffffbb;
        }
        uVar3 = FUN_00d0f560(uVar10,uVar3 & uVar10 | 0x44,param_1);
        if (uVar3 == uVar10) {
          uVar3 = FUN_006e5dac(uVar10 & 0xffffffffffffff00,param_2,uVar10,param_3);
          if (uVar3 == 0) {
            FUN_00622058(3,"mutex.cc",0x821,"Check %s failed: %s","new_h != nullptr",
                         "Enqueue to list failed");
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x6e5834);
            (*pcVar2)();
          }
          uVar10 = (uVar10 & 1) << 5;
          if ((undefined *)*param_2 != &DAT_00208278) {
            uVar10 = 0;
          }
          do {
            uVar11 = *param_1;
            uVar4 = FUN_00d0f5a0(uVar11,uVar11 & 0xbb | uVar10 | uVar3 | 4,param_1);
          } while (uVar4 != uVar11);
          goto LAB_006e5678;
        }
      }
    }
    if ((*(long *)(param_2[4] + 0x20) != 0) && ((*(byte *)(param_2[4] + 0x14) & 1) == 0)) {
      FUN_00622058(3,"mutex.cc",0x836,"Check %s failed: %s",
                   "waitp->thread->waitp == nullptr || waitp->thread->suppress_fatal_errors",
                   "detected illegal recursion into Mutex code");
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x6e57d4);
      (*pcVar2)();
    }
    if ((int)DAT_00d66880 != 0xdd) {
      FUN_006e6510(&DAT_00d66880);
    }
    iVar1 = DAT_00d66888._4_4_;
    if ((int)DAT_00d66880 != 0xdd) {
      FUN_006e6510(&DAT_00d66880);
      if (iVar1 <= iVar12) goto LAB_006e56c4;
LAB_006e5474:
      iVar12 = iVar12 + 1;
      goto LAB_006e5478;
    }
    if (iVar12 < DAT_00d66888._4_4_) goto LAB_006e5474;
LAB_006e56c4:
    if (iVar12 == iVar1) {
      sched_yield();
      iVar12 = iVar12 + 1;
    }
    else {
      FUN_006e680c(DAT_00d66890,DAT_00d66898);
      iVar12 = 0;
    }
  } while( true );
}


// ===== 006e58e4  FUN_006e58e4 =====

void FUN_006e58e4(ulong param_1,ulong param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  int *piVar8;
  ulong __maxlen;
  uint uVar9;
  undefined1 *local_570 [40];
  undefined2 local_430;
  undefined1 local_42e;
  undefined1 auStack_42d [957];
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  if (((DAT_00d66840 & 1) != 0) ||
     (uVar7 = FUN_00d0f4e0(DAT_00d66840,DAT_00d66840 | 1,&DAT_00d66840), (uVar7 & 1) != 0)) {
    FUN_006e7f78(&DAT_00d66840);
  }
  for (piVar8 = *(int **)(&DAT_00d64808 + (param_1 % 0x407) * 8); piVar8 != (int *)0x0;
      piVar8 = *(int **)(piVar8 + 2)) {
    if ((*(ulong *)(piVar8 + 4) ^ param_1) == 0xf03a5f7bf03a5f7b) {
      *piVar8 = *piVar8 + 1;
      break;
    }
  }
  uVar5 = FUN_00d0f680(DAT_00d66840 & 2,&DAT_00d66840);
  if (uVar5 < 8) {
    if (piVar8 == (int *)0x0) goto LAB_006e59d8;
LAB_006e59cc:
    if ((char)piVar8[10] == '\x01') goto LAB_006e59d8;
    if ((0x3a5UL >> (param_2 & 0x3f) & 1) != 0) goto LAB_006e5b24;
  }
  else {
    FUN_006e80d4(&DAT_00d66840,uVar5);
    if (piVar8 != (int *)0x0) goto LAB_006e59cc;
LAB_006e59d8:
    local_570[1] = &DAT_aaaaaaaaaaaaaaaa;
    local_570[0] = &DAT_aaaaaaaaaaaaaaaa;
    local_570[3] = &DAT_aaaaaaaaaaaaaaaa;
    local_570[2] = &DAT_aaaaaaaaaaaaaaaa;
    local_570[5] = &DAT_aaaaaaaaaaaaaaaa;
    local_570[4] = &DAT_aaaaaaaaaaaaaaaa;
    local_570[7] = &DAT_aaaaaaaaaaaaaaaa;
    local_570[6] = &DAT_aaaaaaaaaaaaaaaa;
    local_570[9] = &DAT_aaaaaaaaaaaaaaaa;
    local_570[8] = &DAT_aaaaaaaaaaaaaaaa;
    local_570[0xb] = &DAT_aaaaaaaaaaaaaaaa;
    local_570[10] = &DAT_aaaaaaaaaaaaaaaa;
    local_570[0xd] = &DAT_aaaaaaaaaaaaaaaa;
    local_570[0xc] = &DAT_aaaaaaaaaaaaaaaa;
    local_570[0xf] = &DAT_aaaaaaaaaaaaaaaa;
    local_570[0xe] = &DAT_aaaaaaaaaaaaaaaa;
    local_570[0x11] = &DAT_aaaaaaaaaaaaaaaa;
    local_570[0x10] = &DAT_aaaaaaaaaaaaaaaa;
    local_570[0x13] = &DAT_aaaaaaaaaaaaaaaa;
    local_570[0x12] = &DAT_aaaaaaaaaaaaaaaa;
    local_570[0x15] = &DAT_aaaaaaaaaaaaaaaa;
    local_570[0x14] = &DAT_aaaaaaaaaaaaaaaa;
    local_570[0x17] = &DAT_aaaaaaaaaaaaaaaa;
    local_570[0x16] = &DAT_aaaaaaaaaaaaaaaa;
    local_570[0x19] = &DAT_aaaaaaaaaaaaaaaa;
    local_570[0x18] = &DAT_aaaaaaaaaaaaaaaa;
    local_570[0x1b] = &DAT_aaaaaaaaaaaaaaaa;
    local_570[0x1a] = &DAT_aaaaaaaaaaaaaaaa;
    local_570[0x1d] = &DAT_aaaaaaaaaaaaaaaa;
    local_570[0x1c] = &DAT_aaaaaaaaaaaaaaaa;
    local_570[0x1f] = &DAT_aaaaaaaaaaaaaaaa;
    local_570[0x1e] = &DAT_aaaaaaaaaaaaaaaa;
    local_570[0x21] = &DAT_aaaaaaaaaaaaaaaa;
    local_570[0x20] = &DAT_aaaaaaaaaaaaaaaa;
    local_570[0x23] = &DAT_aaaaaaaaaaaaaaaa;
    local_570[0x22] = &DAT_aaaaaaaaaaaaaaaa;
    local_570[0x25] = &DAT_aaaaaaaaaaaaaaaa;
    local_570[0x24] = &DAT_aaaaaaaaaaaaaaaa;
    local_570[0x27] = &DAT_aaaaaaaaaaaaaaaa;
    local_570[0x26] = &DAT_aaaaaaaaaaaaaaaa;
    uVar5 = FUN_006e84d8(local_570,0x28,1);
    memset(auStack_42d,0xaa,0x3bd);
    local_42e = 0;
    local_430 = 0x4020;
    if (uVar5 != 0) {
      uVar7 = 0;
      uVar9 = 2;
      do {
        if ((0x3c0 < uVar9) || (0x27 < uVar7)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(0x5512,0x6e5c0c);
          (*pcVar4)();
        }
        __maxlen = 0x3c0 - (ulong)uVar9;
        uVar6 = snprintf((char *)((long)&local_430 + (ulong)uVar9),__maxlen," %p",local_570[uVar7]);
        if (((int)uVar6 < 0) || (__maxlen <= uVar6)) break;
        uVar7 = uVar7 + 1;
        uVar9 = uVar6 + uVar9;
      } while (uVar5 != uVar7);
    }
    puVar1 = &DAT_001b3348;
    if (piVar8 != (int *)0x0) {
      puVar1 = (undefined *)((long)piVar8 + 0x29);
    }
    FUN_00622058(0,"mutex.cc",0x1c4,"%s%p %s %s",
                 (&PTR_s_TryLock_succeeded_00d29c40)[(param_2 & 0xffffffff) * 2],param_1,puVar1,
                 &local_430);
    if (((0x3a5UL >> (param_2 & 0x3f) & 1) == 0) || (piVar8 == (int *)0x0)) {
      if (piVar8 == (int *)0x0) goto LAB_006e5b80;
    }
    else {
LAB_006e5b24:
      if (*(code **)(piVar8 + 6) != (code *)0x0) {
        (**(code **)(piVar8 + 6))(*(undefined8 *)(piVar8 + 8));
      }
    }
  }
  if (((DAT_00d66840 & 1) != 0) ||
     (uVar7 = FUN_00d0f4e0(DAT_00d66840,DAT_00d66840 | 1,&DAT_00d66840), (uVar7 & 1) != 0)) {
    FUN_006e7f78(&DAT_00d66840);
  }
  iVar2 = *piVar8;
  *piVar8 = iVar2 + -1;
  uVar5 = FUN_00d0f680(DAT_00d66840 & 2,&DAT_00d66840);
  if (7 < uVar5) {
    FUN_006e80d4(&DAT_00d66840,uVar5);
  }
  if (iVar2 + -1 == 0) {
    FUN_00d13b64(piVar8);
  }
LAB_006e5b80:
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 006e5c10  FUN_006e5c10 =====

void FUN_006e5c10(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_1;
  if (((uVar2 & 0x1e ^ 10) < 6) &&
     (uVar1 = FUN_00d0f5a0(uVar2,uVar2 & 0xffffffffffffffd7,param_1), uVar1 == uVar2)) {
    return;
  }
  FUN_006e4bb0(param_1,0);
  return;
}


// ===== 006e5c80  FUN_006e5c80 =====

void FUN_006e5c80(ulong *param_1)

{
  long lVar1;
  ulong uVar2;
  bool bVar3;
  ulong uVar4;
  
  uVar2 = *param_1;
  do {
    if ((uVar2 & 0x15) != 1) {
      FUN_006e4bb0(param_1,0);
      return;
    }
    lVar1 = -0x101;
    if (0x1ff < uVar2) {
      lVar1 = -0x100;
    }
    uVar4 = FUN_00d0f5a0(uVar2,lVar1 + uVar2,param_1);
    bVar3 = uVar4 != uVar2;
    uVar2 = uVar4;
  } while (bVar3);
  return;
}


// ===== 006e5d14  FUN_006e5d14 =====

void FUN_006e5d14(uint param_1,undefined8 param_2)

{
  code *pcVar1;
  
  if ((param_1 & (param_1 << 3 ^ 0x20) & 0x28) != 0) {
    if ((~param_1 & 9) == 0) {
      FUN_00622058(3,"mutex.cc",0x7c4,
                   "Check (v & (kMuWriter | kMuReader)) != (kMuWriter | kMuReader) failed: %s: Mutex corrupt: both reader and writer lock held: %p"
                   ,param_2);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x6e5dac);
      (*pcVar1)();
    }
    if ((param_1 & 0x24) == 0x20) {
      FUN_00622058(3,"mutex.cc",0x7c7,
                   "Check (v & (kMuWait | kMuWrWait)) != kMuWrWait failed: %s: Mutex corrupt: waiting writer with no waiters: %p"
                   ,param_2);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x6e5d8c);
      (*pcVar1)();
    }
  }
  return;
}


// ===== 006e5dac  FUN_006e5dac =====

long * FUN_006e5dac(long *param_1,undefined8 *param_2,long param_3,uint param_4)

{
  long *plVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  pthread_t __target_thread;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  ulong *puVar13;
  long *plVar14;
  ulong uVar15;
  double dVar16;
  sched_param local_38;
  int iStack_34;
  
  puVar13 = (ulong *)param_2[5];
  if (puVar13 != (ulong *)0x0) {
    iVar5 = 0;
    param_2[5] = 0;
    do {
      while( true ) {
        uVar15 = *puVar13;
        if (((uVar15 & 1) == 0) &&
           (uVar6 = FUN_00d0f560(uVar15,uVar15 | 1,puVar13), uVar6 == uVar15)) {
          if (*(long *)(param_2[4] + 0x20) == 0) {
            plVar14 = (long *)(uVar15 & 0xfffffffffffffffc);
            *(undefined8 **)(param_2[4] + 0x20) = param_2;
            if (plVar14 == (long *)0x0) {
              lVar7 = param_2[4];
              *(long *)lVar7 = lVar7;
            }
            else {
              *(long *)param_2[4] = *plVar14;
              lVar7 = param_2[4];
              *plVar14 = lVar7;
            }
            *(undefined4 *)(lVar7 + 0x1c) = 1;
            *puVar13 = uVar15 & 2 | param_2[4];
            return param_1;
          }
          FUN_00622058(3,"mutex.cc",0xa29,"Check %s failed: %s","waitp->thread->waitp == nullptr",
                       "waiting when shouldn\'t be");
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x6e6378);
          (*pcVar3)();
        }
        if ((int)DAT_00d66880 != 0xdd) {
          FUN_006e6510(&DAT_00d66880);
        }
        iVar2 = DAT_00d66888._4_4_;
        if ((int)DAT_00d66880 == 0xdd) break;
        FUN_006e6510(&DAT_00d66880);
        if (iVar5 < iVar2) goto LAB_006e5df4;
LAB_006e5e3c:
        if (iVar5 == iVar2) {
          sched_yield();
          iVar5 = iVar5 + 1;
        }
        else {
          FUN_006e680c(DAT_00d66890,DAT_00d66898);
          iVar5 = 0;
        }
      }
      if (DAT_00d66888._4_4_ <= iVar5) goto LAB_006e5e3c;
LAB_006e5df4:
      iVar5 = iVar5 + 1;
    } while( true );
  }
  plVar14 = (long *)param_2[4];
  if ((((undefined8 *)plVar14[4] != (undefined8 *)0x0) && ((undefined8 *)plVar14[4] != param_2)) &&
     ((*(byte *)((long)plVar14 + 0x14) & 1) == 0)) {
    FUN_00622058(3,"mutex.cc",0x3aa,"Check %s failed: %s",
                 "s->waitp == nullptr || s->waitp == waitp || s->suppress_fatal_errors",
                 "detected illegal recursion into Mutex code");
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x6e63a8);
    (*pcVar3)();
  }
  plVar14[4] = (long)param_2;
  plVar14[1] = 0;
  *(undefined2 *)(plVar14 + 2) = 1;
  *(byte *)((long)plVar14 + 0x12) = (byte)(param_4 >> 1) & 1;
  if (((param_4 >> 2 & 1) == 0) && (lVar7 = thunk_FUN_005183d8(), plVar14[6] < lVar7)) {
    local_38.__sched_priority = -0x55555556;
    iStack_34 = -0x55555556;
    __target_thread = pthread_self();
    iVar5 = pthread_getschedparam(__target_thread,&iStack_34,&local_38);
    if (iVar5 == 0) {
      *(int *)(plVar14 + 3) = local_38.__sched_priority;
      dVar16 = (double)FUN_006e8144();
      plVar14[6] = lVar7 + (long)dVar16;
    }
    else {
      FUN_00622058(2,"mutex.cc",0x3bc,"pthread_getschedparam failed: %d",iVar5);
    }
  }
  plVar10 = plVar14;
  if (param_1 == (long *)0x0) {
    *plVar14 = (long)plVar14;
    plVar14[5] = param_3;
    *(undefined1 *)((long)plVar14 + 0x13) = 0;
    goto LAB_006e631c;
  }
  iVar5 = (int)plVar14[3];
  if ((int)param_1[3] < iVar5) {
    plVar8 = param_1;
    if ((*(byte *)((long)param_1 + 0x13) & 1) == 0) {
      do {
        plVar9 = plVar8;
        plVar11 = (long *)*plVar9;
        plVar12 = (long *)plVar11[1];
        plVar8 = plVar11;
        if (plVar12 != (long *)0x0) {
          plVar1 = plVar11;
          plVar8 = plVar12;
          for (plVar12 = (long *)plVar12[1]; plVar12 != (long *)0x0; plVar12 = (long *)plVar12[1]) {
            plVar1[1] = (long)plVar12;
            plVar1 = plVar8;
            plVar8 = plVar12;
          }
          plVar11[1] = (long)plVar8;
          iVar5 = (int)plVar14[3];
        }
        plVar11 = plVar9;
      } while (iVar5 <= (int)plVar8[3]);
    }
    else {
      if ((undefined *)*param_2 != &DAT_00208278) goto LAB_006e5f7c;
      plVar9 = param_1;
      plVar11 = (long *)param_2[1];
    }
    if (plVar11 != (long *)0x0) {
      *plVar14 = *plVar9;
      *plVar9 = (long)plVar14;
      if (plVar9[1] != 0) {
        if ((*(long *)plVar9[4] != *(long *)plVar14[4]) || ((int)plVar9[3] != (int)plVar14[3])) {
LAB_006e615c:
          FUN_00622058(3,"mutex.cc",0x3f3,"Check %s failed: %s",
                       "enqueue_after->skip == nullptr || MuEquivalentWaiter(enqueue_after, s)",
                       "Mutex Enqueue failure");
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x6e618c);
          (*pcVar3)();
        }
        plVar8 = (long *)((long *)plVar9[4])[1];
        plVar10 = (long *)((long *)plVar14[4])[1];
        if ((plVar8 == (long *)0x0) || (plVar10 == (long *)0x0)) {
          if (plVar8 != plVar10) goto LAB_006e615c;
        }
        else if (((plVar8[2] != plVar10[2]) || (plVar8[3] != plVar10[3])) ||
                (*plVar8 != *plVar10 || plVar8[1] != plVar10[1])) goto LAB_006e615c;
      }
      if ((plVar9 != param_1) && ((char)plVar9[2] == '\x01')) {
        if ((*(long *)plVar9[4] == *(long *)plVar14[4]) && ((int)plVar9[3] == (int)plVar14[3])) {
          plVar8 = (long *)((long *)plVar9[4])[1];
          plVar10 = (long *)((long *)plVar14[4])[1];
          if ((plVar8 == (long *)0x0) || (plVar10 == (long *)0x0)) {
            if (plVar8 == plVar10) goto LAB_006e6290;
          }
          else if (((plVar8[2] == plVar10[2]) && (plVar8[3] == plVar10[3])) &&
                  (*plVar8 == *plVar10 && plVar8[1] == plVar10[1])) {
LAB_006e6290:
            plVar9[1] = (long)plVar14;
          }
        }
      }
      lVar7 = *plVar14;
      plVar10 = param_1;
      if ((*(long *)plVar14[4] == **(long **)(lVar7 + 0x20)) &&
         ((int)plVar14[3] == *(int *)(lVar7 + 0x18))) {
        plVar8 = (long *)((long *)plVar14[4])[1];
        plVar9 = (long *)(*(long **)(lVar7 + 0x20))[1];
        if ((plVar8 == (long *)0x0) || (plVar9 == (long *)0x0)) {
          if (plVar8 != plVar9) goto LAB_006e631c;
        }
        else if (((plVar8[2] != plVar9[2]) || (plVar8[3] != plVar9[3])) ||
                (*plVar8 != *plVar9 || plVar8[1] != plVar9[1])) goto LAB_006e631c;
        plVar14[1] = lVar7;
      }
      goto LAB_006e631c;
    }
  }
LAB_006e5f7c:
  lVar7 = *param_1;
  if ((((param_4 & 1) == 0) || (iVar5 < *(int *)(lVar7 + 0x18))) ||
     ((*(char *)((long)param_1 + 0x13) == '\x01' &&
      (((undefined *)*param_2 != &DAT_00208278 || (param_2[1] != 0)))))) {
    *plVar14 = lVar7;
    *param_1 = (long)plVar14;
    plVar14[5] = param_1[5];
    *(undefined1 *)((long)plVar14 + 0x13) = *(undefined1 *)((long)param_1 + 0x13);
    if ((char)param_1[2] == '\x01') {
      if ((*(long *)param_1[4] == *(long *)plVar14[4]) && ((int)param_1[3] == (int)plVar14[3])) {
        plVar9 = (long *)((long *)param_1[4])[1];
        plVar8 = (long *)((long *)plVar14[4])[1];
        if ((plVar9 == (long *)0x0) || (plVar8 == (long *)0x0)) {
          bVar4 = plVar9 == plVar8;
        }
        else {
          if ((plVar9[2] != plVar8[2]) || (plVar9[3] != plVar8[3])) goto LAB_006e631c;
          bVar4 = *plVar9 == *plVar8 && plVar9[1] == plVar8[1];
        }
        if (bVar4) {
          param_1[1] = (long)plVar14;
        }
      }
    }
  }
  else {
    *plVar14 = lVar7;
    *param_1 = (long)plVar14;
    lVar7 = *plVar14;
    uVar15 = FUN_006e4684(plVar14,lVar7);
    plVar10 = param_1;
    if ((uVar15 & 1) != 0) {
      plVar14[1] = lVar7;
    }
  }
LAB_006e631c:
  *(undefined4 *)((long)plVar14 + 0x1c) = 1;
  return plVar10;
}


// ===== 006e63a8  FUN_006e63a8 =====

void FUN_006e63a8(ulong *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  
  if ((*param_1 & 9) != 0) {
    return;
  }
  lVar3 = FUN_006e6410();
  puVar1 = &DAT_001b3348;
  if (lVar3 != 0) {
    puVar1 = (undefined *)(lVar3 + 0x29);
  }
  FUN_00622058(3,"mutex.cc",0x9cc,"thread should hold at least a read lock on Mutex %p %s",param_1,
               puVar1);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x6e6410);
  (*pcVar2)();
}


// ===== 006e6410  FUN_006e6410 =====

int * FUN_006e6410(ulong param_1)

{
  uint uVar1;
  ulong uVar2;
  int *piVar3;
  
  if (((DAT_00d66840 & 1) != 0) ||
     (uVar2 = FUN_00d0f4e0(DAT_00d66840,DAT_00d66840 | 1,&DAT_00d66840), (uVar2 & 1) != 0)) {
    FUN_006e7f78(&DAT_00d66840);
  }
  piVar3 = *(int **)(&DAT_00d64808 + (param_1 % 0x407) * 8);
  do {
    if (piVar3 == (int *)0x0) {
LAB_006e64b4:
      uVar1 = FUN_00d0f680(DAT_00d66840 & 2);
      if (7 < uVar1) {
        FUN_006e80d4(&DAT_00d66840,uVar1);
      }
      return piVar3;
    }
    if ((*(ulong *)(piVar3 + 4) ^ param_1) == 0xf03a5f7bf03a5f7b) {
      *piVar3 = *piVar3 + 1;
      goto LAB_006e64b4;
    }
    piVar3 = *(int **)(piVar3 + 2);
  } while( true );
}


// ===== 006e6500  FUN_006e6500 =====

void FUN_006e6500(void)

{
  return;
}


// ===== 006e6508  FUN_006e6508 =====

void FUN_006e6508(void)

{
  return;
}


// ===== 006e6510  FUN_006e6510 =====

void FUN_006e6510(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  undefined1 local_40 [12];
  
  iVar2 = FUN_00d0f4a0(0,0x65c2937b,param_1);
  if ((iVar2 == 0) || (iVar2 = FUN_006dfc38(param_1,3,&DAT_002082c8,0), iVar2 == 0)) {
    iVar2 = FUN_006dfa50();
    if (iVar2 < 2) {
      DAT_00d66888 = 0;
      auVar4 = FUN_006e66b8();
      iVar2 = sched_yield();
      local_40 = FUN_006e66b8(iVar2);
      plVar3 = (long *)FUN_006e352c(local_40,auVar4._0_8_,auVar4._8_8_ & 0xffffffff);
      local_40._0_8_ = *plVar3;
      local_40._8_4_ = (undefined4)plVar3[1];
      plVar3 = (long *)FUN_006e35ac(local_40,5);
      local_40._0_8_ = 0;
      local_40._8_4_ = 4000000;
      bVar1 = 4000000 < *(uint *)(plVar3 + 1);
      if (*plVar3 != 0) {
        bVar1 = 0 < *plVar3;
      }
      plVar3 = (long *)local_40;
      if (!bVar1) {
        plVar3 = &DAT_00d66890;
      }
      local_40._0_8_ = 0;
      bVar1 = *(uint *)(plVar3 + 1) >> 6 < 0x271;
      if (*plVar3 != 0) {
        bVar1 = *plVar3 < 0;
      }
      plVar3 = (long *)local_40;
      if (!bVar1) {
        plVar3 = &DAT_00d66890;
      }
      local_40._8_4_ = 40000;
      DAT_00d66890 = *plVar3;
      DAT_00d66898 = (undefined4)plVar3[1];
    }
    else {
      DAT_00d66890 = 0;
      DAT_00d66888 = DAT_001f51f8;
      DAT_00d66898 = 40000;
    }
    iVar2 = FUN_00d0f680(0xdd,param_1);
    if (iVar2 == 0x5a308d2) {
      FUN_006dfc10(param_1,1);
    }
  }
  return;
}


// ===== 006e66b8  FUN_006e66b8 =====

undefined1  [16] FUN_006e66b8(void)

{
  ulong uVar1;
  code *pcVar2;
  int iVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auVar7 [16];
  timespec local_20;
  
  local_20.tv_nsec = (long)&DAT_aaaaaaaaaaaaaaaa;
  local_20.tv_sec = (__time_t)&DAT_aaaaaaaaaaaaaaaa;
  iVar3 = clock_gettime(0,&local_20);
  if (iVar3 != 0) {
    FUN_00622058(3,"get_current_time_posix.inc",0x11,"Check %s failed: %s",
                 "clock_gettime(CLOCK_REALTIME, &ts) == 0","Failed to read real-time clock.");
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x6e6794);
    (*pcVar2)();
  }
  puVar4 = (undefined1 *)(local_20.tv_nsec + local_20.tv_sec * 1000000000);
  uVar5 = (ulong)-(long)puVar4 % 1000000000;
  lVar6 = -uVar5;
  uVar1 = 0;
  if (uVar5 != 0) {
    uVar1 = (ulong)((int)lVar6 * 4 + 4000000000);
  }
  uVar5 = (lVar6 >> 0x3d) - (ulong)-(long)puVar4 / 1000000000;
  if (((ulong)puVar4 & 0x8000000000000000) == 0) {
    uVar1 = ((ulong)puVar4 % 1000000000) * 4;
    uVar5 = (ulong)puVar4 / 1000000000;
  }
  auVar7._8_8_ = uVar1;
  auVar7._0_8_ = uVar5;
  return auVar7;
}


// ===== 006e6794  FUN_006e6794 =====

undefined1 * FUN_006e6794(void)

{
  code *pcVar1;
  int iVar2;
  timespec local_20;
  
  local_20.tv_nsec = (long)&DAT_aaaaaaaaaaaaaaaa;
  local_20.tv_sec = (__time_t)&DAT_aaaaaaaaaaaaaaaa;
  iVar2 = clock_gettime(0,&local_20);
  if (iVar2 == 0) {
    return (undefined1 *)(local_20.tv_nsec + local_20.tv_sec * 1000000000);
  }
  FUN_00622058(3,"get_current_time_posix.inc",0x11,"Check %s failed: %s",
               "clock_gettime(CLOCK_REALTIME, &ts) == 0","Failed to read real-time clock.");
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x6e680c);
  (*pcVar1)();
}


// ===== 006e680c  FUN_006e680c =====

void FUN_006e680c(long param_1,uint param_2)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  int *piVar4;
  ulong unaff_x20;
  timespec tVar5;
  long local_50;
  uint local_48;
  timespec local_40;
  
  local_50 = param_1;
  local_48 = param_2;
  do {
    lVar2 = local_50;
    if (local_50 == 0) {
      if (local_48 == 0) {
        return;
      }
    }
    else if (local_50 < 1) {
      return;
    }
    uVar1 = 0;
    if (local_50 != 0x7fffffffffffffff) {
      uVar1 = (ulong)local_48;
    }
    tVar5 = (timespec)FUN_006e3784(local_50,uVar1);
    local_40 = tVar5;
    do {
      iVar3 = nanosleep(&local_40,&local_40);
      if (iVar3 == 0) break;
      piVar4 = (int *)__errno();
    } while (*piVar4 == 4);
    unaff_x20 = uVar1 | unaff_x20 & 0xffffffff00000000;
    FUN_006e352c(&local_50,lVar2,unaff_x20);
  } while( true );
}


// ===== 006e68c4  FUN_006e68c4 =====

void FUN_006e68c4(long param_1)

{
  *(undefined4 *)(param_1 + 0x40) = 0;
  return;
}


// ===== 006e68d0  FUN_006e68d0 =====

void FUN_006e68d0(long param_1)

{
  FUN_006e82e4(param_1 + 0x40);
  return;
}


// ===== 006e68dc  FUN_006e68dc =====

uint FUN_006e68dc(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = FUN_006e6a88();
  if (lVar2 == 0) {
    lVar2 = FUN_006e6ab4();
  }
  uVar1 = *(uint *)(lVar2 + 0x148);
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  *(uint *)(lVar2 + 0x14c) = uVar1;
  *(undefined1 *)(lVar2 + 0x150) = 0;
  if (*(long *)(lVar2 + 0x140) != 0) {
    FUN_00d0f740(1);
  }
  uVar1 = FUN_006e8214(lVar2 + 0x40,param_1);
  if (*(long *)(lVar2 + 0x140) != 0) {
    FUN_00d0f740(0xffffffff);
  }
  *(undefined1 *)(lVar2 + 0x150) = 0;
  *(undefined4 *)(lVar2 + 0x14c) = 0;
  return uVar1 & 1;
}


// ===== 006e6968  FUN_006e6968 =====

int FUN_006e6968(void *param_1,__destr_function *param_2)

{
  int iVar1;
  undefined1 local_30 [16];
  
  if (((int)DAT_00d668c4 != 0xdd) &&
     ((iVar1 = FUN_00d0f4a0(0,0x65c2937b,&DAT_00d668c4), iVar1 == 0 ||
      (iVar1 = FUN_006dfc38(&DAT_00d668c4,3,&DAT_002082ec,1), iVar1 == 0)))) {
    pthread_key_create(&DAT_00d668c0,param_2);
    DAT_00d668c4._4_4_ = 1;
    iVar1 = FUN_00d0f680(0xdd,&DAT_00d668c4);
    if (iVar1 == 0x5a308d2) {
      FUN_006dfc10(&DAT_00d668c4,1);
    }
  }
  local_30._0_8_ = &DAT_aaaaaaaaaaaaaaaa;
  local_30._8_8_ = &DAT_aaaaaaaaaaaaaaaa;
  sigfillset((sigset_t *)(local_30 + 8));
  pthread_sigmask(2,(__sigset_t *)(local_30 + 8),(__sigset_t *)local_30);
  pthread_setspecific(DAT_00d668c0,param_1);
  iVar1 = pthread_sigmask(2,(__sigset_t *)local_30,(__sigset_t *)0x0);
  return iVar1;
}


// ===== 006e6a80  FUN_006e6a80 =====

void FUN_006e6a80(void)

{
  return;
}


// ===== 006e6a88  FUN_006e6a88 =====

void * FUN_006e6a88(void)

{
  void *pvVar1;
  
  if (DAT_00d668c4._4_1_ == '\x01') {
    pvVar1 = pthread_getspecific(DAT_00d668c0);
    return pvVar1;
  }
  return (void *)0x0;
}


// ===== 006e6ab4  FUN_006e6ab4 =====

undefined8 * FUN_006e6ab4(void)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (((DAT_00d668d8 & 1) != 0) ||
     (uVar2 = FUN_00d0f4e0(DAT_00d668d8,DAT_00d668d8 | 1,&DAT_00d668d8), (uVar2 & 1) != 0)) {
    FUN_006e7f78(&DAT_00d668d8);
  }
  puVar4 = DAT_00d668d0;
  if (DAT_00d668d0 != (undefined8 *)0x0) {
    DAT_00d668d0 = (undefined8 *)DAT_00d668d0[0x2b];
  }
  uVar1 = FUN_00d0f680(DAT_00d668d8 & 2);
  if (7 < uVar1) {
    FUN_006e80d4(&DAT_00d668d8,uVar1);
  }
  if (puVar4 == (undefined8 *)0x0) {
    lVar3 = FUN_00d13cd4(0x25f);
    puVar4 = (undefined8 *)(lVar3 + 0xffU & 0xffffffffffffff00);
    FUN_006e68c4(puVar4);
    *(undefined4 *)(puVar4 + 0x29) = 0;
    *(undefined4 *)((long)puVar4 + 0x14c) = 0;
    *(undefined1 *)(puVar4 + 0x2a) = 0;
  }
  *(undefined1 *)((long)puVar4 + 0x14) = 0;
  *(undefined4 *)(puVar4 + 3) = 0;
  *puVar4 = 0;
  puVar4[1] = 0;
  *(undefined1 *)(puVar4 + 2) = 0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[4] = 0;
  *(undefined4 *)((long)puVar4 + 0x1c) = 0;
  *(undefined1 *)((long)puVar4 + 0x13) = 0;
  *(undefined2 *)((long)puVar4 + 0x11) = 0;
  puVar4[7] = 0;
  puVar4[0x28] = 0;
  *(undefined4 *)(puVar4 + 0x29) = 0;
  *(undefined4 *)((long)puVar4 + 0x14c) = 0;
  *(undefined1 *)(puVar4 + 0x2a) = 0;
  puVar4[0x2b] = 0;
  FUN_006e6968(puVar4,FUN_006e6bc4);
  return puVar4;
}


// ===== 006e6bc4  FUN_006e6bc4 =====

void FUN_006e6bc4(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_00d13b64();
  }
  FUN_006e6a80();
  if (((DAT_00d668d8 & 1) != 0) ||
     (uVar2 = FUN_00d0f4e0(DAT_00d668d8,DAT_00d668d8 | 1,&DAT_00d668d8), (uVar2 & 1) != 0)) {
    FUN_006e7f78(&DAT_00d668d8);
  }
  *(long *)(param_1 + 0x158) = DAT_00d668d0;
  DAT_00d668d0 = param_1;
  uVar1 = FUN_00d0f680(DAT_00d668d8 & 2,&DAT_00d668d8);
  if (uVar1 < 8) {
    return;
  }
  FUN_006e80d4(&DAT_00d668d8,uVar1);
  return;
}


// ===== 006e6c74  FUN_006e6c74 =====

undefined8 FUN_006e6c74(void)

{
  return DAT_00d66a28;
}


// ===== 006e6c88  FUN_006e6c88 =====

void FUN_006e6c88(void)

{
  undefined8 uVar1;
  long lVar2;
  
  if (DAT_00d66a28 == 0) {
    uVar1 = FUN_006e6cf4(2);
    lVar2 = FUN_00d0f5a0(0,uVar1,&DAT_00d66a28);
    if (lVar2 != 0) {
      FUN_006e6e20(uVar1);
      return;
    }
  }
  return;
}


// ===== 006e6cf4  FUN_006e6cf4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_006e6cf4(uint param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  long lVar4;
  int iVar5;
  
  if ((int)DAT_00d66a30 == 0xdd) {
    if ((param_1 >> 1 & 1) == 0) goto LAB_006e6d20;
LAB_006e6d64:
    puVar3 = &DAT_00d66b80;
    iVar5 = (int)DAT_00d66a30;
  }
  else {
    FUN_006e7e64(&DAT_00d66a30,0,FUN_006e71f4);
    if ((param_1 >> 1 & 1) != 0) goto LAB_006e6d64;
LAB_006e6d20:
    if ((param_1 & 1) != 0) {
      puVar3 = &DAT_00d668e0;
      goto LAB_006e6d78;
    }
    puVar3 = &DAT_00d66a38;
    iVar5 = (int)DAT_00d66a30;
  }
  if (iVar5 != 0xdd) {
    FUN_006e7e64(&DAT_00d66a30,0,FUN_006e71f4);
  }
LAB_006e6d78:
  puVar3 = (undefined4 *)FUN_00d13b1c(0x148,puVar3);
  *puVar3 = 0;
  puVar3[0x48] = 0;
  puVar3[0x49] = param_1;
  lVar4 = sysconf(0x27);
  puVar3[0x50] = 0;
  uVar2 = _UNK_001f42f8;
  uVar1 = _DAT_001f42f0;
  *(undefined8 *)(puVar3 + 2) = 0;
  *(undefined8 *)(puVar3 + 0x4e) = uVar2;
  *(undefined8 *)(puVar3 + 0x4c) = uVar1;
  *(long *)(puVar3 + 0x4a) = lVar4;
  *(ulong *)(puVar3 + 4) = (ulong)(puVar3 + 2) ^ 0xffffffffb37cc16a;
  *(undefined4 **)(puVar3 + 6) = puVar3;
  puVar3[10] = 0;
  *(undefined8 *)(puVar3 + 0xe) = 0;
  *(undefined8 *)(puVar3 + 0xc) = 0;
  *(undefined8 *)(puVar3 + 0x12) = 0;
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x16) = 0;
  *(undefined8 *)(puVar3 + 0x14) = 0;
  *(undefined8 *)(puVar3 + 0x1a) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined8 *)(puVar3 + 0x1e) = 0;
  *(undefined8 *)(puVar3 + 0x1c) = 0;
  *(undefined8 *)(puVar3 + 0x22) = 0;
  *(undefined8 *)(puVar3 + 0x20) = 0;
  *(undefined8 *)(puVar3 + 0x26) = 0;
  *(undefined8 *)(puVar3 + 0x24) = 0;
  *(undefined8 *)(puVar3 + 0x2a) = 0;
  *(undefined8 *)(puVar3 + 0x28) = 0;
  *(undefined8 *)(puVar3 + 0x2e) = 0;
  *(undefined8 *)(puVar3 + 0x2c) = 0;
  *(undefined8 *)(puVar3 + 0x32) = 0;
  *(undefined8 *)(puVar3 + 0x30) = 0;
  *(undefined8 *)(puVar3 + 0x36) = 0;
  *(undefined8 *)(puVar3 + 0x34) = 0;
  *(undefined8 *)(puVar3 + 0x3a) = 0;
  *(undefined8 *)(puVar3 + 0x38) = 0;
  *(undefined8 *)(puVar3 + 0x3e) = 0;
  *(undefined8 *)(puVar3 + 0x3c) = 0;
  *(undefined8 *)(puVar3 + 0x42) = 0;
  *(undefined8 *)(puVar3 + 0x40) = 0;
  *(undefined8 *)(puVar3 + 0x46) = 0;
  *(undefined8 *)(puVar3 + 0x44) = 0;
  return puVar3;
}


// ===== 006e6e20  FUN_006e6e20 =====

bool FUN_006e6e20(uint *param_1)

{
  uint uVar1;
  ulong uVar2;
  uint *puVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  undefined4 *puVar9;
  ulong *__addr;
  ulong uVar10;
  undefined8 local_50;
  undefined1 *puStack_48;
  uint *local_40;
  undefined1 *local_38;
  
  if (param_1 != (uint *)0x0) {
    if ((int)DAT_00d66a30 != 0xdd) {
      FUN_006e7e64(&DAT_00d66a30,0,FUN_006e71f4);
    }
    if (param_1 != &DAT_00d668e0) {
      if ((int)DAT_00d66a30 != 0xdd) {
        FUN_006e7e64(&DAT_00d66a30,0,FUN_006e71f4);
      }
      if (param_1 != &DAT_00d66a38) {
        puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
        local_50 = 0xaaaaaaaaaaaa0000;
        local_40 = param_1;
        if (((byte)param_1[0x49] >> 1 & 1) != 0) {
          local_38 = &DAT_aaaaaaaaaaaaaaaa;
          sigfillset((sigset_t *)&stack0xffffffffffffffc8);
          iVar5 = pthread_sigmask(0,(__sigset_t *)&stack0xffffffffffffffc8,
                                  (__sigset_t *)((ulong)&local_50 | 8));
          local_50._0_2_ = CONCAT11(iVar5 == 0,(undefined1)local_50);
        }
        puVar3 = local_40;
        uVar1 = *local_40;
        if (((uVar1 & 1) == 0) && (uVar7 = FUN_00d0f4e0(uVar1,uVar1 | 1,local_40), (uVar7 & 1) == 0)
           ) {
          uVar1 = param_1[0x48];
          puVar3 = local_40;
        }
        else {
          FUN_006e7f78(puVar3);
          uVar1 = param_1[0x48];
          puVar3 = local_40;
        }
        local_40 = puVar3;
        if (uVar1 != 0) {
          uVar6 = FUN_00d0f680(*puVar3 & 2,puVar3);
          if (7 < uVar6) {
            FUN_006e80d4(puVar3,uVar6);
          }
          if ((local_50._1_1_ == '\x01') &&
             (iVar5 = pthread_sigmask(2,(__sigset_t *)((ulong)&local_50 | 8),(__sigset_t *)0x0),
             iVar5 != 0)) {
LAB_006e71d0:
            FUN_00622058(3,"low_level_alloc.cc",0x14a,"pthread_sigmask failed: %d",iVar5);
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x6e71f4);
            (*pcVar4)();
          }
LAB_006e7038:
          return uVar1 == 0;
        }
        do {
          while( true ) {
            puVar3 = local_40;
            __addr = *(ulong **)(param_1 + 0xc);
            if (__addr == (ulong *)0x0) {
              uVar6 = FUN_00d0f680(*local_40 & 2,local_40);
              if (7 < uVar6) {
                FUN_006e80d4(puVar3,uVar6);
              }
              if ((local_50._1_1_ == '\x01') &&
                 (iVar5 = pthread_sigmask(2,(__sigset_t *)((ulong)&local_50 | 8),(__sigset_t *)0x0),
                 iVar5 != 0)) goto LAB_006e71d0;
              local_50 = CONCAT71(local_50._1_7_,1);
              FUN_00d13b64(param_1);
              if ((local_50 & 1) == 0) {
                FUN_00622058(3,"low_level_alloc.cc",0x143,"Check %s failed: %s","left_",
                             "haven\'t left Arena region");
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x6e71d0);
                (*pcVar4)();
              }
              goto LAB_006e7038;
            }
            uVar7 = *__addr;
            *(ulong *)(param_1 + 0xc) = __addr[5];
            if ((__addr[1] ^ (ulong)__addr) != 0xffffffffb37cc16a) {
              FUN_00622058(3,"low_level_alloc.cc",0x1aa,"Check %s failed: %s",
                           "region->header.magic == Magic(kMagicUnallocated, &region->header)",
                           "bad magic number in DeleteArena()");
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x6e70a8);
              (*pcVar4)();
            }
            if ((uint *)__addr[2] != param_1) {
              FUN_00622058(3,"low_level_alloc.cc",0x1ac,"Check %s failed: %s",
                           "region->header.arena == arena","bad arena pointer in DeleteArena()");
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x6e70d8);
              (*pcVar4)();
            }
            uVar10 = *(ulong *)(param_1 + 0x4a);
            uVar2 = 0;
            if (uVar10 != 0) {
              uVar2 = uVar7 / uVar10;
            }
            if (uVar7 != uVar2 * uVar10) {
              FUN_00622058(3,"low_level_alloc.cc",0x1ae,"Check %s failed: %s",
                           "size % arena->pagesize == 0",
                           "empty arena has non-page-aligned block size");
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x6e7108);
              (*pcVar4)();
            }
            uVar2 = 0;
            if (uVar10 != 0) {
              uVar2 = (ulong)__addr / uVar10;
            }
            if (__addr != (ulong *)(uVar2 * uVar10)) {
              FUN_00622058(3,"low_level_alloc.cc",0x1b0,"Check %s failed: %s",
                           "reinterpret_cast<uintptr_t>(region) % arena->pagesize == 0",
                           "empty arena has non-page-aligned block");
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x6e7138);
              (*pcVar4)();
            }
            if (((byte)param_1[0x49] >> 1 & 1) != 0) break;
            iVar5 = munmap(__addr,uVar7);
            if (iVar5 != 0) goto LAB_006e6fbc;
          }
          lVar8 = syscall(0xd7);
        } while ((int)lVar8 == 0);
LAB_006e6fbc:
        puVar9 = (undefined4 *)__errno();
        FUN_00622058(3,"low_level_alloc.cc",0x1c2,"LowLevelAlloc::DeleteArena: munmap failed: %d",
                     *puVar9);
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x6e6fe4);
        (*pcVar4)();
      }
    }
  }
  FUN_00622058(3,"low_level_alloc.cc",0x19e,"Check %s failed: %s",
               "arena != nullptr && arena != DefaultArena() && arena != UnhookedArena()",
               "may not delete default arena");
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x6e7168);
  (*pcVar4)();
}


// ===== 006e71f4  FUN_006e71f4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006e71f4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  DAT_00d668e0 = 0;
  DAT_00d66a00 = DAT_001f5170;
  DAT_00d66a08 = sysconf(0x27);
  uVar2 = _UNK_001f42f8;
  uVar1 = _DAT_001f42f0;
  DAT_00d668e8 = 0;
  DAT_00d66a20 = 0;
  uRam0000000000d66a18 = _UNK_001f42f8;
  _DAT_00d66a10 = _DAT_001f42f0;
  DAT_00d668f0 = 0xffffffffb3aaa982;
  DAT_00d668f8 = &DAT_00d668e0;
  DAT_00d66908 = 0;
  uRam0000000000d66918 = 0;
  _DAT_00d66910 = 0;
  uRam0000000000d66928 = 0;
  _DAT_00d66920 = 0;
  uRam0000000000d66938 = 0;
  _DAT_00d66930 = 0;
  uRam0000000000d66948 = 0;
  _DAT_00d66940 = 0;
  uRam0000000000d66958 = 0;
  _DAT_00d66950 = 0;
  uRam0000000000d66968 = 0;
  _DAT_00d66960 = 0;
  uRam0000000000d66978 = 0;
  _DAT_00d66970 = 0;
  uRam0000000000d66988 = 0;
  _DAT_00d66980 = 0;
  uRam0000000000d66998 = 0;
  _DAT_00d66990 = 0;
  uRam0000000000d669a8 = 0;
  _DAT_00d669a0 = 0;
  uRam0000000000d669b8 = 0;
  _DAT_00d669b0 = 0;
  uRam0000000000d669c8 = 0;
  _DAT_00d669c0 = 0;
  uRam0000000000d669d8 = 0;
  _DAT_00d669d0 = 0;
  uRam0000000000d669e8 = 0;
  _DAT_00d669e0 = 0;
  uRam0000000000d669f8 = 0;
  _DAT_00d669f0 = 0;
  DAT_00d66a38 = 0;
  DAT_00d66b58 = 0;
  DAT_00d66b60 = sysconf(0x27);
  DAT_00d66a40 = 0;
  uRam0000000000d66b70 = uVar2;
  _DAT_00d66b68 = uVar1;
  DAT_00d66a48 = 0xffffffffb3aaab2a;
  DAT_00d66a50 = &DAT_00d66a38;
  DAT_00d66b78 = 0;
  DAT_00d66a60 = 0;
  uRam0000000000d66a70 = 0;
  _DAT_00d66a68 = 0;
  uRam0000000000d66a80 = 0;
  _DAT_00d66a78 = 0;
  uRam0000000000d66a90 = 0;
  _DAT_00d66a88 = 0;
  uRam0000000000d66aa0 = 0;
  _DAT_00d66a98 = 0;
  uRam0000000000d66ab0 = 0;
  _DAT_00d66aa8 = 0;
  uRam0000000000d66ac0 = 0;
  _DAT_00d66ab8 = 0;
  uRam0000000000d66ad0 = 0;
  _DAT_00d66ac8 = 0;
  uRam0000000000d66ae0 = 0;
  _DAT_00d66ad8 = 0;
  uRam0000000000d66af0 = 0;
  _DAT_00d66ae8 = 0;
  uRam0000000000d66b00 = 0;
  _DAT_00d66af8 = 0;
  uRam0000000000d66b10 = 0;
  _DAT_00d66b08 = 0;
  uRam0000000000d66b20 = 0;
  _DAT_00d66b18 = 0;
  uRam0000000000d66b30 = 0;
  _DAT_00d66b28 = 0;
  uRam0000000000d66b40 = 0;
  _DAT_00d66b38 = 0;
  uRam0000000000d66b50 = 0;
  _DAT_00d66b48 = 0;
  DAT_00d66b80 = 0;
  DAT_00d66ca0 = DAT_001f5200;
  DAT_00d66ca8 = sysconf(0x27);
  DAT_00d66b88 = 0;
  uRam0000000000d66cb8 = uVar2;
  _DAT_00d66cb0 = uVar1;
  DAT_00d66cc0 = 0;
  DAT_00d66b90 = 0xffffffffb3aaaae2;
  DAT_00d66b98 = &DAT_00d66b80;
  DAT_00d66ba8 = 0;
  uRam0000000000d66bb8 = 0;
  _DAT_00d66bb0 = 0;
  uRam0000000000d66bc8 = 0;
  _DAT_00d66bc0 = 0;
  uRam0000000000d66bd8 = 0;
  _DAT_00d66bd0 = 0;
  uRam0000000000d66be8 = 0;
  _DAT_00d66be0 = 0;
  uRam0000000000d66bf8 = 0;
  _DAT_00d66bf0 = 0;
  uRam0000000000d66c08 = 0;
  _DAT_00d66c00 = 0;
  uRam0000000000d66c18 = 0;
  _DAT_00d66c10 = 0;
  uRam0000000000d66c28 = 0;
  _DAT_00d66c20 = 0;
  uRam0000000000d66c38 = 0;
  _DAT_00d66c30 = 0;
  uRam0000000000d66c48 = 0;
  _DAT_00d66c40 = 0;
  uRam0000000000d66c58 = 0;
  _DAT_00d66c50 = 0;
  uRam0000000000d66c68 = 0;
  _DAT_00d66c60 = 0;
  uRam0000000000d66c78 = 0;
  _DAT_00d66c70 = 0;
  uRam0000000000d66c88 = 0;
  _DAT_00d66c80 = 0;
  uRam0000000000d66c98 = 0;
  _DAT_00d66c90 = 0;
  return;
}


// ===== 006e735c  FUN_006e735c =====

void FUN_006e735c(uint *param_1,long param_2)

{
  bool bVar1;
  uint *puVar2;
  code *pcVar3;
  ulong *puVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong *puVar12;
  undefined1 *local_100 [4];
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
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  undefined1 *puStack_28;
  undefined1 *puStack_20;
  undefined1 *puStack_18;
  
  puVar4 = (ulong *)(param_1 + -8);
  if ((*(ulong *)(param_1 + -6) ^ (ulong)puVar4) != 0x4c833e95) {
    FUN_00622058(3,"low_level_alloc.cc",0x20c,"Check %s failed: %s",
                 "f->header.magic == Magic(kMagicAllocated, &f->header)",
                 "bad magic number in AddToFreelist()");
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x6e7540);
    (*pcVar3)();
  }
  if (*(long *)(param_1 + -4) != param_2) {
    FUN_00622058(3,"low_level_alloc.cc",0x20e,"Check %s failed: %s","f->header.arena == arena",
                 "bad arena pointer in AddToFreelist()");
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x6e7570);
    (*pcVar3)();
  }
  uVar10 = *puVar4;
  puVar2 = (uint *)(param_2 + 0x140);
  iVar6 = 0;
  uVar8 = uVar10 - 0x28;
  for (; *(ulong *)(param_2 + 0x138) < uVar10; uVar10 = uVar10 >> 1) {
    iVar6 = iVar6 + 1;
  }
  uVar8 = uVar8 >> 3;
  if (puVar2 == (uint *)0x0) {
    iVar9 = 1;
  }
  else {
    uVar5 = *puVar2;
    iVar9 = 0;
    do {
      uVar5 = uVar5 * 0x41c64e6d + 0x3039;
      iVar9 = iVar9 + 1;
    } while ((uVar5 >> 0x1e & 1) == 0);
    *puVar2 = uVar5;
  }
  if ((ulong)(long)(iVar9 + iVar6) <= uVar8) {
    uVar8 = (long)(iVar9 + iVar6);
  }
  uVar5 = (uint)uVar8;
  if ((int)uVar5 < 1) {
    FUN_00622058(3,"low_level_alloc.cc",0x97,"Check %s failed: %s","level >= 1",
                 "block not big enough for even one level");
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x6e75a0);
    (*pcVar3)();
  }
  if (0x1c < uVar5) {
    uVar5 = 0x1d;
  }
  *param_1 = uVar5;
  iVar6 = *(int *)(param_2 + 0x28);
  lVar7 = (long)iVar6;
  local_100[3] = &DAT_aaaaaaaaaaaaaaaa;
  local_100[2] = &DAT_aaaaaaaaaaaaaaaa;
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
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_28 = &DAT_aaaaaaaaaaaaaaaa;
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_18 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_20 = &DAT_aaaaaaaaaaaaaaaa;
  local_100[1] = &DAT_aaaaaaaaaaaaaaaa;
  local_100[0] = &DAT_aaaaaaaaaaaaaaaa;
  if (-1 < (int)(iVar6 - 1U)) {
    puVar12 = (ulong *)(param_2 + 8);
    uVar8 = (ulong)(iVar6 - 1U);
    do {
      do {
        puVar11 = puVar12;
        puVar12 = (ulong *)puVar11[uVar8 + 5];
      } while (puVar12 != (ulong *)0x0 && puVar12 < puVar4);
      local_100[uVar8] = (undefined1 *)puVar11;
      bVar1 = 0 < (long)uVar8;
      puVar12 = puVar11;
      uVar8 = uVar8 - 1;
    } while (bVar1);
  }
  if (iVar6 < (int)uVar5) {
    do {
      local_100[lVar7] = (undefined1 *)(param_2 + 8);
      lVar7 = lVar7 + 1;
      *(int *)(param_2 + 0x28) = (int)lVar7;
    } while ((int)lVar7 < (int)*param_1);
    if (*param_1 == 0) goto LAB_006e74e4;
  }
  uVar8 = 0;
  do {
    uVar10 = -(uVar8 >> 0x1f) & 0xfffffff800000000 | uVar8 << 3;
    uVar5 = (int)uVar8 + 1;
    uVar8 = (ulong)uVar5;
    lVar7 = *(long *)((long)local_100 + uVar10) + uVar10;
    *(undefined8 *)((long)param_1 + uVar10 + 8) = *(undefined8 *)(lVar7 + 0x28);
    *(ulong **)(lVar7 + 0x28) = puVar4;
  } while (uVar5 != *param_1);
LAB_006e74e4:
  *(ulong *)(param_1 + -6) = (ulong)puVar4 ^ 0xffffffffb37cc16a;
  FUN_006e7b28(puVar4);
  FUN_006e7b28(local_100[0]);
  return;
}


// ===== 006e75a0  FUN_006e75a0 =====

ulong * FUN_006e75a0(ulong param_1,uint *param_2)

{
  long *plVar1;
  uint *puVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  undefined4 *puVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uVar12;
  sigset_t local_170;
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
  undefined8 local_80;
  undefined1 *puStack_78;
  uint *local_70;
  
  if (param_1 == 0) {
    return (ulong *)0x0;
  }
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = 0xaaaaaaaaaaaa0000;
  local_70 = param_2;
  if (((byte)param_2[0x49] >> 1 & 1) != 0) {
    local_170.__val[0] = (ulong)&DAT_aaaaaaaaaaaaaaaa;
    sigfillset(&local_170);
    iVar4 = pthread_sigmask(0,&local_170,(__sigset_t *)((ulong)&local_80 | 8));
    local_80._0_2_ = CONCAT11(iVar4 == 0,(undefined1)local_80);
  }
  puVar2 = local_70;
  uVar5 = *local_70;
  if (((uVar5 & 1) != 0) || (uVar6 = FUN_00d0f4e0(uVar5,uVar5 | 1,local_70), (uVar6 & 1) != 0)) {
    FUN_006e7f78(puVar2);
  }
  if (param_1 < 0xffffffffffffffe0) {
    uVar6 = param_1 + *(long *)(param_2 + 0x4c) + 0x1f;
    if (param_1 + 0x20 <= uVar6) {
      uVar6 = uVar6 & -*(long *)(param_2 + 0x4c);
      uVar12 = uVar6 - 0x28 >> 3;
      while( true ) {
        if (*(ulong *)(param_2 + 0x4e) < uVar6) {
          iVar4 = 1;
          uVar10 = uVar6;
          do {
            uVar10 = uVar10 >> 1;
            iVar4 = iVar4 + 1;
          } while (*(ulong *)(param_2 + 0x4e) < uVar10);
          uVar10 = (ulong)iVar4;
        }
        else {
          uVar10 = 1;
        }
        uVar8 = uVar12;
        if (uVar10 <= uVar12) {
          uVar8 = uVar10;
        }
        uVar5 = (uint)uVar8;
        if ((int)uVar5 < 1) {
          FUN_00622058(3,"low_level_alloc.cc",0x97,"Check %s failed: %s","level >= 1",
                       "block not big enough for even one level");
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x6e7aac);
          (*pcVar3)();
        }
        if (0x1c < uVar5) {
          uVar5 = 0x1d;
        }
        if ((int)uVar5 <= (int)param_2[10]) {
          puVar7 = (ulong *)(param_2 + 2);
          while( true ) {
            if ((int)(uint)puVar7[4] < (int)uVar5) {
              FUN_00622058(3,"low_level_alloc.cc",0x1e2,"Check %s failed: %s","i < prev->levels",
                           "too few levels in Next()");
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x6e79bc);
              (*pcVar3)();
            }
            puVar11 = (ulong *)puVar7[(ulong)uVar5 + 4];
            if (puVar11 == (ulong *)0x0) break;
            if ((puVar11[1] ^ (ulong)puVar11) != 0xffffffffb37cc16a) {
              FUN_00622058(3,"low_level_alloc.cc",0x1e7,"Check %s failed: %s",
                           "next->header.magic == Magic(kMagicUnallocated, &next->header)",
                           "bad magic number in Next()");
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x6e79ec);
              (*pcVar3)();
            }
            if ((uint *)puVar11[2] != param_2) {
              FUN_00622058(3,"low_level_alloc.cc",0x1e8,"Check %s failed: %s",
                           "next->header.arena == arena","bad arena pointer in Next()");
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x6e7a1c);
              (*pcVar3)();
            }
            if (puVar7 != (ulong *)(param_2 + 2)) {
              if (puVar11 <= puVar7) {
                FUN_00622058(3,"low_level_alloc.cc",0x1ea,"Check %s failed: %s","prev < next",
                             "unordered freelist");
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x6e7a4c);
                (*pcVar3)();
              }
              if (puVar11 <= (ulong *)((long)puVar7 + *puVar7)) {
                FUN_00622058(3,"low_level_alloc.cc",0x1ed,"Check %s failed: %s",
                             "reinterpret_cast<char *>(prev) + prev->header.size < reinterpret_cast<char *>(next)"
                             ,"malformed freelist");
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x6e7a7c);
                (*pcVar3)();
              }
            }
            puVar7 = puVar11;
            if (uVar6 <= *puVar11) {
              local_170.__val[3] = (ulong)&DAT_aaaaaaaaaaaaaaaa;
              local_170.__val[2] = (ulong)&DAT_aaaaaaaaaaaaaaaa;
              local_170.__val[5] = (ulong)&DAT_aaaaaaaaaaaaaaaa;
              local_170.__val[4] = (ulong)&DAT_aaaaaaaaaaaaaaaa;
              local_170.__val[7] = (ulong)&DAT_aaaaaaaaaaaaaaaa;
              local_170.__val[6] = (ulong)&DAT_aaaaaaaaaaaaaaaa;
              local_170.__val[9] = (ulong)&DAT_aaaaaaaaaaaaaaaa;
              local_170.__val[8] = (ulong)&DAT_aaaaaaaaaaaaaaaa;
              local_170.__val[0xb] = (ulong)&DAT_aaaaaaaaaaaaaaaa;
              local_170.__val[10] = (ulong)&DAT_aaaaaaaaaaaaaaaa;
              local_170.__val[0xd] = (ulong)&DAT_aaaaaaaaaaaaaaaa;
              local_170.__val[0xc] = (ulong)&DAT_aaaaaaaaaaaaaaaa;
              local_170.__val[0xf] = (ulong)&DAT_aaaaaaaaaaaaaaaa;
              local_170.__val[0xe] = (ulong)&DAT_aaaaaaaaaaaaaaaa;
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
              local_170.__val[1] = (ulong)&DAT_aaaaaaaaaaaaaaaa;
              local_170.__val[0] = (ulong)&DAT_aaaaaaaaaaaaaaaa;
              FUN_006e7d54(param_2 + 2,puVar11,&local_170);
              if (!CARRY8(*(ulong *)(param_2 + 0x4e),uVar6)) {
                if (*(ulong *)(param_2 + 0x4e) + uVar6 <= *puVar11) {
                  plVar1 = (long *)((long)puVar11 + uVar6);
                  *plVar1 = *puVar11 - uVar6;
                  plVar1[1] = (ulong)plVar1 ^ 0x4c833e95;
                  plVar1[2] = (long)param_2;
                  *puVar11 = uVar6;
                  FUN_006e735c(plVar1 + 4,param_2);
                }
                puVar2 = local_70;
                puVar11[1] = (ulong)puVar11 ^ 0x4c833e95;
                if ((uint *)puVar11[2] == param_2) {
                  param_2[0x48] = param_2[0x48] + 1;
                  uVar5 = FUN_00d0f680(*local_70 & 2,local_70);
                  if (7 < uVar5) {
                    FUN_006e80d4(puVar2,uVar5);
                  }
                  if ((local_80._1_1_ == '\x01') &&
                     (iVar4 = pthread_sigmask(2,(__sigset_t *)((ulong)&local_80 | 8),
                                              (__sigset_t *)0x0), iVar4 != 0)) {
                    FUN_00622058(3,"low_level_alloc.cc",0x14a,"pthread_sigmask failed: %d",iVar4);
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x6e7b28);
                    (*pcVar3)();
                  }
                  return puVar11 + 4;
                }
                FUN_00622058(3,"low_level_alloc.cc",0x27d,"Check %s failed: %s",
                             "s->header.arena == arena",&DAT_001b3348);
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x6e7adc);
                (*pcVar3)();
              }
              goto LAB_006e794c;
            }
          }
        }
        uVar5 = FUN_00d0f680(*param_2 & 2,param_2);
        if (7 < uVar5) {
          FUN_006e80d4(param_2,uVar5);
        }
        uVar10 = (uVar6 - 1) + *(long *)(param_2 + 0x4a) * 0x10;
        if (uVar10 < uVar6) break;
        uVar10 = uVar10 & *(long *)(param_2 + 0x4a) * -0x10;
        if (((byte)param_2[0x49] >> 1 & 1) == 0) {
          puVar7 = (ulong *)mmap((void *)0x0,uVar10,3,0x22,-1,0);
        }
        else {
          puVar7 = (ulong *)syscall(0xde,0,uVar10,3,0x22,0xffffffff,0);
        }
        if (puVar7 == (ulong *)0xffffffffffffffff) {
          puVar9 = (undefined4 *)__errno();
          FUN_00622058(3,"low_level_alloc.cc",599,"mmap error: %d",*puVar9);
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x6e7b04);
          (*pcVar3)();
        }
        prctl(0x53564d41,0,puVar7,uVar10,&DAT_001c5a04);
        uVar5 = *param_2;
        if (((uVar5 & 1) != 0) || (uVar8 = FUN_00d0f4e0(uVar5,uVar5 | 1,param_2), (uVar8 & 1) != 0))
        {
          FUN_006e7f78(param_2);
        }
        *puVar7 = uVar10;
        puVar7[1] = (ulong)puVar7 ^ 0x4c833e95;
        puVar7[2] = (ulong)param_2;
        FUN_006e735c(puVar7 + 4,param_2);
      }
    }
  }
LAB_006e794c:
  FUN_00622058(3,"low_level_alloc.cc",0x1d2,"Check %s failed: %s","sum >= a",
               "LowLevelAlloc arithmetic overflow");
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x6e797c);
  (*pcVar3)();
}


// ===== 006e7b28  FUN_006e7b28 =====

void FUN_006e7b28(ulong *param_1)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  code *pcVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong *puVar13;
  uint *puVar14;
  undefined1 *local_130 [4];
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
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  
  plVar5 = (long *)param_1[5];
  if ((plVar5 != (long *)0x0) && ((long *)((long)param_1 + *param_1) == plVar5)) {
    puVar14 = (uint *)param_1[2];
    if ((*puVar14 & 1) == 0) {
      FUN_00622058(3,"spinlock.h",0xa0,"thread should hold the lock on SpinLock");
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x6e7d54);
      (*pcVar4)();
    }
    *param_1 = *plVar5 + *param_1;
    plVar5[1] = 0;
    plVar5[2] = 0;
    local_130[3] = &DAT_aaaaaaaaaaaaaaaa;
    local_130[2] = &DAT_aaaaaaaaaaaaaaaa;
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
    puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
    local_80 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
    local_130[1] = &DAT_aaaaaaaaaaaaaaaa;
    local_130[0] = &DAT_aaaaaaaaaaaaaaaa;
    FUN_006e7d54(puVar14 + 2,plVar5,local_130);
    FUN_006e7d54(puVar14 + 2,param_1,local_130);
    uVar11 = *param_1;
    puVar2 = puVar14 + 0x50;
    iVar8 = 0;
    uVar9 = uVar11 - 0x28;
    for (; *(ulong *)(puVar14 + 0x4e) < uVar11; uVar11 = uVar11 >> 1) {
      iVar8 = iVar8 + 1;
    }
    uVar9 = uVar9 >> 3;
    if (puVar2 == (uint *)0x0) {
      iVar10 = 1;
    }
    else {
      uVar6 = *puVar2;
      iVar10 = 0;
      do {
        uVar6 = uVar6 * 0x41c64e6d + 0x3039;
        iVar10 = iVar10 + 1;
      } while ((uVar6 >> 0x1e & 1) == 0);
      *puVar2 = uVar6;
    }
    if ((ulong)(long)(iVar10 + iVar8) <= uVar9) {
      uVar9 = (long)(iVar10 + iVar8);
    }
    uVar6 = (uint)uVar9;
    if ((int)uVar6 < 1) {
      FUN_00622058(3,"low_level_alloc.cc",0x97,"Check %s failed: %s","level >= 1",
                   "block not big enough for even one level");
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x6e7d34);
      (*pcVar4)();
    }
    if (0x1c < uVar6) {
      uVar6 = 0x1d;
    }
    *(uint *)(param_1 + 4) = uVar6;
    uVar3 = puVar14[10];
    lVar7 = (long)(int)uVar3;
    if (-1 < (int)(uVar3 - 1)) {
      puVar13 = (ulong *)(puVar14 + 2);
      uVar9 = (ulong)(uVar3 - 1);
      do {
        do {
          puVar12 = puVar13;
          puVar13 = (ulong *)puVar12[uVar9 + 5];
        } while (puVar13 != (ulong *)0x0 && puVar13 < param_1);
        local_130[uVar9] = (undefined1 *)puVar12;
        bVar1 = 0 < (long)uVar9;
        puVar13 = puVar12;
        uVar9 = uVar9 - 1;
      } while (bVar1);
    }
    if ((int)uVar3 < (int)uVar6) {
      do {
        local_130[lVar7] = (undefined1 *)(puVar14 + 2);
        lVar7 = lVar7 + 1;
        puVar14[10] = (uint)lVar7;
      } while ((int)(uint)lVar7 < (int)(uint)param_1[4]);
      if ((uint)param_1[4] == 0) {
        return;
      }
    }
    uVar9 = 0;
    do {
      uVar11 = -(uVar9 >> 0x1f) & 0xfffffff800000000 | uVar9 << 3;
      uVar6 = (int)uVar9 + 1;
      uVar9 = (ulong)uVar6;
      lVar7 = *(long *)((long)local_130 + uVar11) + uVar11;
      *(undefined8 *)((long)(param_1 + 5) + uVar11) = *(undefined8 *)(lVar7 + 0x28);
      *(ulong **)(lVar7 + 0x28) = param_1;
    } while (uVar6 != (uint)param_1[4]);
  }
  return;
}


// ===== 006e7d54  FUN_006e7d54 =====

void FUN_006e7d54(ulong param_1,ulong param_2,long *param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar2 = *(uint *)(param_1 + 0x20);
  uVar6 = (ulong)(uVar2 - 1);
  uVar8 = param_1;
  if (-1 < (int)(uVar2 - 1)) {
    do {
      do {
        uVar7 = uVar8;
        uVar8 = *(ulong *)(uVar7 + uVar6 * 8 + 0x28);
      } while (uVar8 != 0 && uVar8 < param_2);
      param_3[uVar6] = uVar7;
      bVar1 = 0 < (long)uVar6;
      uVar8 = uVar7;
      uVar6 = uVar6 - 1;
    } while (bVar1);
    uVar2 = *(uint *)(param_1 + 0x20);
  }
  if (uVar2 == 0) {
    if (param_2 != 0) goto LAB_006e7e34;
  }
  else if (param_2 != *(ulong *)(*param_3 + 0x28)) {
LAB_006e7e34:
    FUN_00622058(3,"low_level_alloc.cc",0xbf,"Check %s failed: %s","e == found",
                 "element not in freelist");
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x6e7e64);
    (*pcVar4)();
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    iVar5 = 0;
    do {
      if (*(ulong *)(param_3[iVar5] + 0x28 + (long)iVar5 * 8) != param_2) break;
      *(undefined8 *)(param_3[iVar5] + 0x28 + (long)iVar5 * 8) =
           *(undefined8 *)(param_2 + 0x28 + (long)iVar5 * 8);
      iVar5 = iVar5 + 1;
    } while (iVar5 != *(int *)(param_2 + 0x20));
    uVar2 = *(uint *)(param_1 + 0x20);
  }
  if (0 < (int)uVar2) {
    do {
      if (*(long *)(param_1 + (ulong)uVar2 * 8 + 0x20) != 0) {
        return;
      }
      uVar3 = uVar2 - 1;
      *(uint *)(param_1 + 0x20) = uVar3;
      bVar1 = 0 < (int)uVar2;
      uVar2 = uVar3;
    } while (uVar3 != 0 && bVar1);
  }
  return;
}


// ===== 006e7e64  FUN_006e7e64 =====

void FUN_006e7e64(undefined8 param_1,undefined4 param_2,code *param_3)

{
  int iVar1;
  
  iVar1 = FUN_00d0f4a0(0,0x65c2937b,param_1);
  if ((iVar1 == 0) || (iVar1 = FUN_006dfc38(param_1,3,&DAT_00208310,param_2), iVar1 == 0)) {
    (*param_3)();
    iVar1 = FUN_00d0f680(0xdd,param_1);
    if (iVar1 == 0x5a308d2) {
      FUN_006dfc10(param_1,1);
      return;
    }
  }
  return;
}


// ===== 006e7f0c  FUN_006e7f0c =====

void FUN_006e7f0c(uint *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = DAT_00d66cc8;
  if (DAT_00d66cc8 == 0) {
    iVar1 = FUN_006dfa50();
    uVar2 = 1000;
    if (iVar1 < 2) {
      uVar2 = 1;
    }
    FUN_00d0f4a0(0,uVar2,&DAT_00d66cc8);
    iVar1 = DAT_00d66cc8;
  }
  do {
    iVar1 = iVar1 + -1;
    if ((*param_1 & 1) == 0) {
      return;
    }
  } while (0 < iVar1);
  return;
}


// ===== 006e7f78  FUN_006e7f78 =====

void FUN_006e7f78(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  uVar2 = FUN_006e7f0c();
  if (((uVar2 & 1) != 0) || (uVar2 = FUN_00d0f4e0(uVar2,uVar2 | 1,param_1), (uVar2 & 1) != 0)) {
    uVar1 = uVar2 >> 1;
    lVar4 = thunk_FUN_005183d8();
    iVar7 = 0;
    uVar8 = 0;
    do {
      while (uVar6 = uVar2, uVar2 < 8) {
        uVar6 = uVar2 | 8;
        uVar3 = FUN_00d0f4a0(uVar2,uVar2 | 8,param_1);
        if (uVar3 == uVar2) break;
        if ((uVar3 & 1) == 0) {
          uVar2 = FUN_00d0f4e0(uVar3,uVar3 | uVar8 | 1,param_1);
        }
        else {
          uVar6 = uVar3;
          uVar2 = uVar3;
          if (7 < uVar3) break;
        }
        if ((uVar2 & 1) == 0) {
          return;
        }
      }
      iVar7 = iVar7 + 1;
      FUN_006dfbb8(param_1,uVar6,iVar7,uVar1 & 1);
      uVar2 = FUN_006e7f0c(param_1);
      lVar5 = thunk_FUN_005183d8();
      lVar5 = lVar5 - lVar4 >> 7;
      if (0x1ffffffe < lVar5) {
        lVar5 = 0x1fffffff;
      }
      uVar8 = (int)lVar5 << 3;
      if (uVar8 == 0) {
        uVar8 = 8;
      }
      else if (uVar8 == 8) {
        uVar8 = 0x10;
      }
      if ((uVar2 & 1) == 0) {
        uVar2 = FUN_00d0f4e0(uVar2,uVar2 | uVar8 | 1,param_1);
      }
    } while ((uVar2 & 1) != 0);
  }
  return;
}


// ===== 006e80d4  FUN_006e80d4 =====

void FUN_006e80d4(undefined8 param_1,uint param_2)

{
  FUN_006dfc10(param_1,0);
  if ((param_2 & 0xfffffff8) == 8) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006e8130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_00d5a248)(param_1,(ulong)(param_2 & 0xfffffff8) << 4);
  return;
}


// ===== 006e8134  FUN_006e8134 =====

void FUN_006e8134(void)

{
  return;
}


// ===== 006e813c  thunk_FUN_005183d8 =====

void thunk_FUN_005183d8(void)

{
  FUN_005183d8();
  return;
}


// ===== 006e8144  FUN_006e8144 =====

undefined1  [16] FUN_006e8144(void)

{
  return ZEXT816(0x41cdcd6500000000);
}


// ===== 006e8158  FUN_006e8158 =====

int FUN_006e8158(undefined8 param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  int *piVar2;
  undefined1 *puVar3;
  ulong local_38;
  undefined1 local_30 [16];
  
  local_38 = param_3;
  if (param_3 == 0xffffffffffffffff) {
    puVar3 = (undefined1 *)0x0;
  }
  else {
    if ((param_3 & 1) != 0) {
      local_30 = FUN_006e8418(&local_38);
      lVar1 = syscall(0x62,param_1,0x80,param_2 & 0xffffffff,local_30);
      if (lVar1 == 0) {
        return 0;
      }
      goto LAB_006e81cc;
    }
    local_30 = FUN_006e8360();
    puVar3 = local_30;
  }
  lVar1 = syscall(0x62,param_1,0x189,param_2 & 0xffffffff,puVar3,0,0xffffffff);
  if (lVar1 == 0) {
    return 0;
  }
LAB_006e81cc:
  piVar2 = (int *)__errno();
  return -*piVar2;
}


// ===== 006e8214  FUN_006e8214 =====

undefined8 FUN_006e8214(int *param_1,undefined8 param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  bVar5 = true;
  do {
    iVar4 = *param_1;
    while (iVar4 != 0) {
      iVar3 = FUN_00d0f4e0(iVar4,iVar4 + -1,param_1);
      bVar2 = iVar3 == iVar4;
      iVar4 = iVar3;
      if (bVar2) {
        return 1;
      }
    }
    if (!bVar5) {
      FUN_006e8498();
    }
    iVar4 = FUN_006e8158(param_1,0,param_2);
  } while ((iVar4 + 0xbU < 0xc) &&
          (bVar5 = false, (0x881U >> (ulong)(iVar4 + 0xbU & 0x1f) & 1) != 0));
  if (iVar4 == -0x6e) {
    return 0;
  }
  FUN_00622058(3,"futex_waiter.cc",0x51,"Futex operation failed with error %d\n");
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x6e82e4);
  (*pcVar1)();
}


// ===== 006e82e4  FUN_006e82e4 =====

void FUN_006e82e4(undefined8 param_1)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  
  iVar2 = FUN_00d0f770(1,param_1);
  if ((iVar2 == 0) && (lVar3 = syscall(0x62,param_1,0x81,1), lVar3 < 0)) {
    piVar4 = (int *)__errno();
    if (0 < *piVar4) {
      FUN_00622058(3,"futex_waiter.cc",99,"Futex operation failed with error %d\n",-*piVar4);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x6e8360);
      (*pcVar1)();
    }
  }
  return;
}


// ===== 006e8360  FUN_006e8360 =====

void FUN_006e8360(ulong *param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = *param_1;
  if (uVar1 == 0xffffffffffffffff) {
    uVar3 = 0x7fffffffffffffff;
  }
  else {
    uVar3 = uVar1 >> 1;
    if ((uVar1 & 1) == 0) {
      if (uVar3 < 2) {
        uVar3 = 1;
      }
    }
    else {
      lVar2 = FUN_005183d8();
      uVar4 = uVar3 - lVar2 & ((long)(uVar3 - lVar2) >> 0x3f ^ 0xffffffffffffffffU);
      uVar1 = FUN_006e6794();
      uVar3 = 0x7fffffffffffffff;
      if ((long)uVar4 <= (long)(uVar1 ^ 0x7fffffffffffffff)) {
        uVar3 = uVar4 + uVar1;
      }
    }
  }
  lVar2 = (long)uVar3 % 1000000000;
  uVar1 = (ulong)((int)(lVar2 * 4) + 4000000000);
  if (-1 < lVar2) {
    uVar1 = lVar2 * 4;
  }
  FUN_006e3784((long)uVar3 / 1000000000 + (lVar2 >> 0x3d),uVar1 & 0xffffffff);
  return;
}


// ===== 006e8418  FUN_006e8418 =====

void FUN_006e8418(ulong *param_1)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = *param_1;
  if (uVar2 == 0xffffffffffffffff) {
    uVar2 = 0x7fffffffffffffff;
  }
  else {
    if ((uVar2 & 1) == 0) {
      lVar1 = FUN_006e6794();
    }
    else {
      lVar1 = FUN_005183d8();
    }
    uVar2 = (uVar2 >> 1) - lVar1;
    uVar2 = uVar2 & ((long)uVar2 >> 0x3f ^ 0xffffffffffffffffU);
  }
  FUN_006e3784(uVar2 / 1000000000,(uVar2 % 1000000000) * 4);
  return;
}


// ===== 006e8498  FUN_006e8498 =====

void FUN_006e8498(void)

{
  long lVar1;
  
  lVar1 = FUN_006e6a88();
  if ((0x3c < *(int *)(lVar1 + 0x148) - *(int *)(lVar1 + 0x14c)) &&
     ((*(byte *)(lVar1 + 0x150) & 1) == 0)) {
    *(undefined1 *)(lVar1 + 0x150) = 1;
  }
  return;
}


// ===== 006e84d8  FUN_006e84d8 =====

ulong FUN_006e84d8(undefined8 param_1,int param_2,int param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  ulong uVar5;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *local_38;
  
  uVar5 = FUN_006e85e0();
  lVar1 = (long)param_2;
  if ((uVar5 & 1) == 0) {
    lVar1 = 0;
  }
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_006e8610(&local_70,lVar1);
  puVar3 = puStack_68;
  puVar2 = local_70;
  local_38 = &DAT_aaaaaaaaaaaaaaaa;
  if (DAT_00d66cd0 == (code *)0x0) {
    local_38 = (undefined1 *)0x0;
  }
  else {
    iVar4 = (*DAT_00d66cd0)(param_1,puStack_68,param_2,param_3 + 1,0,0);
    local_38 = (undefined1 *)(long)iVar4;
    if ((puVar2 != (undefined1 *)0x0) && (0 < iVar4)) {
      memset(puVar2,0,(long)local_38 << 3);
    }
  }
  if ((uVar5 & 1) != 0) {
    FUN_006e85ec(param_1,puVar2,puVar3,(long)param_2,&local_38);
  }
  puVar2 = local_38;
  FUN_006e85f4(&local_70);
  return (ulong)puVar2 & 0xffffffff;
}


// ===== 006e85e0  FUN_006e85e0 =====

undefined8 FUN_006e85e0(void)

{
  return 0;
}


// ===== 006e85ec  FUN_006e85ec =====

void FUN_006e85ec(void)

{
  return;
}


// ===== 006e85f4  FUN_006e85f4 =====

void FUN_006e85f4(undefined8 *param_1)

{
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[2] = 0;
    return;
  }
  FUN_00d13b64(*param_1);
  return;
}


// ===== 006e8610  FUN_006e8610 =====

void FUN_006e8610(long *param_1,long param_2)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  if (param_2 - 1U < 0x80) {
    lVar6 = 0x40;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = (ulong)param_1 ^ (ulong)PTR_LOOP_00d525b0;
    uVar7 = SUB168(auVar1 * ZEXT816(0x79d5f9e0de1e8cf5),8) ^
            ((ulong)param_1 ^ (ulong)PTR_LOOP_00d525b0) * 0x79d5f9e0de1e8cf5;
    do {
      lVar4 = (uVar7 & 0x3f) * 0x608;
      lVar5 = lVar4 + 0xd66cd8;
      uVar2 = FUN_00d0f620(1,lVar5);
      if ((uVar2 & 1) == 0) {
        param_1[2] = lVar5;
        if (lVar5 == 0) goto LAB_006e86a0;
        *param_1 = lVar4 + 0xd66ce0;
        lVar6 = lVar4 + 0xd670e0;
        goto LAB_006e86cc;
      }
      lVar6 = lVar6 + -1;
      uVar7 = uVar7 + 1;
    } while (lVar6 != 0);
  }
  param_1[2] = 0;
LAB_006e86a0:
  FUN_006e6c88();
  uVar3 = FUN_006e6c74();
  lVar4 = FUN_00d13b1c(param_2 * 0xc,uVar3);
  *param_1 = lVar4;
  lVar6 = 0;
  if (lVar4 != 0) {
    lVar6 = lVar4 + param_2 * 8;
  }
LAB_006e86cc:
  param_1[1] = lVar6;
  return;
}


// ===== 006e8704  FUN_006e8704 =====

void FUN_006e8704(void)

{
  return;
}


// ===== 006e870c  FUN_006e870c =====

undefined1 *
FUN_006e870c(uint param_1,undefined8 param_2,undefined4 param_3,uint param_4,void *param_5,
            undefined1 *param_6,undefined4 param_7,int param_8,long *param_9)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined2 *puVar8;
  undefined4 extraout_w1;
  char *pcVar9;
  ulong uVar10;
  ulong __n;
  undefined1 *puVar11;
  char *pcVar12;
  char *local_b0;
  undefined8 uStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  uint local_78;
  undefined4 local_74;
  undefined1 *local_70;
  undefined4 local_68;
  
  if ((ulong)param_9[1] < 0x22) {
    puVar11 = (undefined1 *)0x0;
    puVar7 = (undefined1 *)0x0;
    param_9[1] = 0;
  }
  else {
    lVar6 = FUN_006e42d8();
    if (lVar6 == 0) {
      uVar4 = FUN_006dfd80(param_2,param_3);
      local_b0 = "%c0000 00:00:%02d.%06d %7d ";
      uStack_a8 = (undefined1 *)0x1b;
      if (param_1 < 4) {
        pcVar12 = (&PTR_DAT_00d29d18)[param_1];
      }
      else {
        pcVar12 = "UNKNOWN";
      }
      local_70 = (undefined1 *)CONCAT44(local_70._4_4_,uVar4);
      local_78 = param_4;
      local_74 = extraout_w1;
      uVar5 = FUN_006e8b24(*param_9,param_9[1],&local_b0,pcVar12,&local_70,&local_74,&local_78);
      puVar11 = (undefined1 *)param_9[1];
      if ((int)uVar5 < 0) {
        puVar7 = (undefined1 *)0x0;
        goto LAB_006e8944;
      }
      puVar7 = (undefined1 *)(ulong)uVar5;
      bVar3 = puVar11 < puVar7;
      puVar11 = puVar11 + -(long)puVar7;
      if (bVar3) goto LAB_006e8b18;
      lVar6 = *param_9;
    }
    else {
      pcVar12 = (char *)*param_9;
      if (param_1 < 4) {
        pcVar9 = (&PTR_DAT_00d29d18)[param_1];
      }
      else {
        pcVar9 = "UNKNOWN";
      }
      *pcVar12 = *pcVar9;
      puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
      local_a0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
      uStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
      local_b0 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_006dfdd8(&local_b0,lVar6,param_2,param_3);
      FUN_006200b8((long)(char)uStack_a8,pcVar12 + 1);
      FUN_006200b8((long)uStack_a8._1_1_,pcVar12 + 3);
      pcVar12[5] = ' ';
      FUN_006200b8((long)uStack_a8._2_1_,pcVar12 + 6);
      pcVar12[8] = ':';
      FUN_006200b8((long)uStack_a8._3_1_,pcVar12 + 9);
      pcVar12[0xb] = ':';
      FUN_006200b8((long)uStack_a8._4_1_,pcVar12 + 0xc);
      pcVar12[0xe] = '.';
      if ((ulong)local_a0 >> 0x2b == 0) {
        lVar6 = (long)local_a0 * 1000000 + ((ulong)puStack_98 & 0xffffffff) / 4000;
      }
      else {
        local_70 = local_a0;
        local_68 = puStack_98._0_4_;
        lVar6 = FUN_006e3378(local_a0,(ulong)puStack_98 & 0xffffffff,0,4000,&local_70);
      }
      uVar10 = SUB168(SEXT816(lVar6) * SEXT816(0x346dc5d63886594b),8);
      FUN_006200b8((uVar10 >> 0xb) - ((long)uVar10 >> 0x3f),pcVar12 + 0xf);
      lVar1 = lVar6 / 100;
      FUN_006200b8((int)lVar1 +
                   ((int)(SUB168(SEXT816(lVar1) * ZEXT816(0xa3d70a3d70a3d70b),8) >> 6) -
                   (int)(lVar1 >> 0x3f)) * -100,pcVar12 + 0x11);
      FUN_006200b8((int)lVar6 + (int)lVar1 * -100,pcVar12 + 0x13);
      pcVar12[0x15] = ' ';
      if (param_4 < 10) {
        pcVar12[0x16] = ' ';
        pcVar9 = pcVar12 + 0x17;
LAB_006e88f0:
        pcVar12 = pcVar9 + 1;
        *pcVar9 = ' ';
LAB_006e88f8:
        *pcVar12 = ' ';
        pcVar9 = pcVar12 + 1;
LAB_006e8900:
        pcVar12 = pcVar9 + 1;
        *pcVar9 = ' ';
LAB_006e8908:
        *pcVar12 = ' ';
        pcVar9 = pcVar12 + 1;
LAB_006e8910:
        pcVar12 = pcVar9 + 1;
        *pcVar9 = ' ';
      }
      else {
        pcVar12 = pcVar12 + 0x16;
        pcVar9 = pcVar12;
        if (param_4 + 9 < 0x6d) goto LAB_006e88f0;
        if (param_4 + 99 < 1099) goto LAB_006e88f8;
        if (param_4 + 999 < 10999) goto LAB_006e8900;
        if (param_4 + 9999 < 109999) goto LAB_006e8908;
        if (param_4 + 99999 < 1099999) goto LAB_006e8910;
      }
      puVar7 = (undefined1 *)FUN_0062024c(param_4,pcVar12);
      *puVar7 = 0x20;
      lVar6 = *param_9;
      puVar7 = puVar7 + (1 - lVar6);
      puVar11 = (undefined1 *)param_9[1] + -(long)puVar7;
      if ((undefined1 *)param_9[1] < puVar7) goto LAB_006e8b18;
    }
    *param_9 = (long)(puVar7 + lVar6);
    param_9[1] = (long)puVar11;
  }
LAB_006e8944:
  if (puVar11 <= param_6) {
    param_6 = puVar11;
  }
  memcpy((void *)*param_9,param_5,(size_t)param_6);
  uVar10 = param_9[1] - (long)param_6;
  if ((undefined1 *)param_9[1] < param_6) {
LAB_006e8b18:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x6e8b1c);
    (*pcVar2)();
  }
  puVar11 = param_6 + *param_9;
  *param_9 = (long)puVar11;
  param_9[1] = uVar10;
  if (uVar10 < 0xe) {
    __n = 0;
    uVar10 = 0;
  }
  else {
    *puVar11 = 0x3a;
    puVar8 = (undefined2 *)FUN_0062024c(param_7,puVar11 + 1);
    *puVar8 = 0x205d;
    uVar10 = (long)puVar8 + (2 - *param_9);
    __n = param_9[1] - uVar10;
    if ((ulong)param_9[1] < uVar10) goto LAB_006e8b18;
    puVar11 = (undefined1 *)(*param_9 + uVar10);
    *param_9 = (long)puVar11;
  }
  param_9[1] = __n;
  puVar7 = param_6 + (long)puVar7 + uVar10;
  if (param_8 == 1) {
    if (4 < __n) {
      __n = 5;
    }
    memcpy(puVar11,"RAW: ",__n);
    if ((ulong)param_9[1] < __n) goto LAB_006e8b18;
    puVar7 = puVar7 + __n;
    *param_9 = *param_9 + __n;
    param_9[1] = param_9[1] - __n;
  }
  return puVar7;
}


// ===== 006e8b24  FUN_006e8b24 =====

void FUN_006e8b24(undefined8 param_1,undefined8 param_2,undefined8 *param_3,byte *param_4,
                 uint *param_5,uint *param_6,uint *param_7)

{
  ulong local_50;
  undefined *puStack_48;
  ulong local_40;
  code *pcStack_38;
  ulong local_30;
  code *pcStack_28;
  ulong local_20;
  code *pcStack_18;
  
  local_50 = (ulong)*param_4 | 0xaaaaaaaaaaaaaa00;
  puStack_48 = PTR_FUN_00d52158;
  local_40 = (ulong)*param_5 | 0xaaaaaaaa00000000;
  pcStack_38 = FUN_006e9eb4;
  local_30 = (ulong)*param_6 | 0xaaaaaaaa00000000;
  pcStack_28 = FUN_006e9eb4;
  local_20 = (ulong)*param_7 | 0xaaaaaaaa00000000;
  pcStack_18 = FUN_006e9eb4;
  FUN_006ef12c(param_1,param_2,*param_3,param_3[1],&local_50,4);
  return;
}


// ===== 006e8ba8  FUN_006e8ba8 =====

uint FUN_006e8ba8(ulong param_1,ulong param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  void *__dest;
  long lVar2;
  byte bVar3;
  undefined1 **ppuVar4;
  uint uVar5;
  long lVar6;
  undefined1 **ppuVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  undefined1 *__n;
  undefined1 **ppuVar11;
  ulong local_a8;
  undefined4 local_a0;
  ushort local_98 [2];
  undefined4 local_94;
  undefined1 **local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 auStack_58 [3];
  undefined1 auStack_55 [13];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar10 = param_1 & 0xffffffff;
  uVar5 = (uint)param_2 & 0xff;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = (undefined1 **)&DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  _auStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  uVar9 = (uint)param_1;
  local_a8 = param_2;
  local_a0 = param_3;
  if (uVar5 < 7) {
    if (uVar5 < 4) {
      if (1 < uVar5 - 2) {
        if ((param_2 & 0xff0000) == 0x20000) {
          local_94 = 0xaaaaaaaa;
          local_98[0] = 0;
          lVar6 = FUN_006df2f8(uVar9 & 0xff,&local_94,local_98);
          uVar5 = 0;
          if ((lVar6 == -1) || ((local_98[0] & 1) != 0)) goto LAB_006e8d7c;
          if (-1 < lVar6) {
            uVar5 = FUN_006ea284(&local_94,lVar6,param_2,param_3,param_4);
            goto LAB_006e8d7c;
          }
          goto LAB_006e8e9c;
        }
        uVar8 = (param_2 & ((long)param_2 >> 0x3f ^ 0xffffffffffffffffU)) >> 0x20;
        lVar6 = uVar8 - (uVar8 != 0);
        if (((uint)param_2 >> 8 & 1) == 0) {
          FUN_006ea2d8(param_4,lVar6,0x20);
          uVar5 = 1;
          FUN_006ea2d8(param_4,1,uVar10);
        }
        else {
          uVar5 = 1;
          FUN_006ea2d8(param_4,1,uVar10);
          FUN_006ea2d8(param_4,lVar6,0x20);
        }
        goto LAB_006e8d7c;
      }
      goto LAB_006e8d14;
    }
    if (uVar5 == 4) {
      ppuVar11 = (undefined1 **)(auStack_58 + 4);
      do {
        bVar3 = (byte)uVar10;
        uVar5 = (uint)uVar10 >> 3 & 0x1f;
        uVar10 = (ulong)uVar5;
        ppuVar11 = (undefined1 **)((long)ppuVar11 + -1);
        *(byte *)ppuVar11 = bVar3 & 7 | 0x30;
      } while (uVar5 != 0);
    }
    else {
      if (uVar5 == 5) goto LAB_006e8d14;
      _auStack_58 = (undefined1 *)
                    CONCAT44(0xaaaaaaaa,
                             CONCAT22(*(ushort *)
                                       (PTR_s_000102030405060708090a0b0c0d0e0f_00d52048 +
                                       (param_1 & 0xff) * 2),0xaaaa));
      ppuVar11 = (undefined1 **)(auStack_58 + 3);
      if ((*(ushort *)(PTR_s_000102030405060708090a0b0c0d0e0f_00d52048 + (param_1 & 0xff) * 2) &
          0xff) != 0x30) {
        ppuVar11 = (undefined1 **)(auStack_58 + 2);
      }
    }
LAB_006e8d50:
    ppuVar7 = (undefined1 **)(auStack_58 + 4);
    local_90 = ppuVar11;
  }
  else {
    if (uVar5 - 8 < 8) {
      uVar5 = thunk_FUN_006ea418((double)(uVar9 & 0xff),&local_a8,param_4);
      goto LAB_006e8d7c;
    }
    if (uVar5 == 7) {
      ppuVar11 = (undefined1 **)(auStack_58 + 4);
      do {
        uVar8 = uVar10 & 0xf;
        uVar5 = (uint)uVar10 >> 4 & 0xf;
        uVar10 = (ulong)uVar5;
        ppuVar11 = (undefined1 **)((long)ppuVar11 + -1);
        *(char *)ppuVar11 = "0123456789ABCDEF"[uVar8];
      } while (uVar5 != 0);
      goto LAB_006e8d50;
    }
LAB_006e8d14:
    ppuVar11 = &puStack_80;
    local_90 = ppuVar11;
    ppuVar7 = (undefined1 **)FUN_006200e4(uVar9 & 0xff,ppuVar11);
  }
  ppuVar4 = local_90;
  __n = (undefined1 *)((long)ppuVar7 - (long)ppuVar11);
  puStack_88 = __n;
  if ((param_2 & 0xff00) == 0) {
    if ((long)__n < 0) {
LAB_006e8e9c:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/string_view:331: libc++ Hardening assertion __len <= static_cast<size_type>(numeric_limits<difference_type>::max()) failed: string_view::string_view(_CharT *, size_t): length does not fit in difference_type\n"
                );
    }
    if ((local_90 == (undefined1 **)0x0) && (ppuVar7 != ppuVar11)) {
LAB_006e8eb0:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/string_view:333: libc++ Hardening assertion __len == 0 || __s != nullptr failed: string_view::string_view(_CharT *, size_t): received nullptr\n"
                );
    }
    if (ppuVar7 != ppuVar11) {
      __dest = (void *)param_4[3];
      param_4[2] = __n + param_4[2];
      if (__n < (undefined1 *)((long)param_4 + (0x420 - (long)__dest))) {
        memcpy(__dest,local_90,(size_t)__n);
        param_4[3] = __n + param_4[3];
      }
      else {
        puVar1 = param_4 + 4;
        if ((long)__dest - (long)puVar1 < 0) goto LAB_006e8e9c;
        if ((puVar1 == (undefined8 *)0x0) && (__dest != (void *)0x0)) goto LAB_006e8eb0;
        (*(code *)param_4[1])(*param_4,param_4 + 4,(long)__dest - (long)puVar1);
        param_4[3] = puVar1;
        (*(code *)param_4[1])(*param_4,ppuVar4,__n);
      }
    }
  }
  else {
    FUN_006e8fa4(&local_90,param_2,param_3,param_4);
  }
  uVar5 = 1;
LAB_006e8d7c:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5 & 1;
}


// ===== 006e8ec8  FUN_006e8ec8 =====

void FUN_006e8ec8(undefined8 *param_1,void *param_2,ulong param_3)

{
  undefined8 *puVar1;
  long lVar2;
  void *__dest;
  
  if (param_3 != 0) {
    __dest = (void *)param_1[3];
    param_1[2] = param_1[2] + param_3;
    if ((ulong)((long)param_1 + (0x420 - (long)__dest)) <= param_3) {
      puVar1 = param_1 + 4;
      lVar2 = (long)__dest - (long)puVar1;
      if (lVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/string_view:331: libc++ Hardening assertion __len <= static_cast<size_type>(numeric_limits<difference_type>::max()) failed: string_view::string_view(_CharT *, size_t): length does not fit in difference_type\n"
                   ,lVar2);
      }
      if ((puVar1 == (undefined8 *)0x0) && (__dest != (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/string_view:333: libc++ Hardening assertion __len == 0 || __s != nullptr failed: string_view::string_view(_CharT *, size_t): received nullptr\n"
                   ,lVar2);
      }
      (*(code *)param_1[1])(*param_1,param_1 + 4);
      param_1[3] = puVar1;
                    /* WARNING: Could not recover jumptable at 0x006e8f78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)param_1[1])(*param_1,param_2,param_3);
      return;
    }
    memcpy(__dest,param_2,param_3);
    param_1[3] = param_1[3] + param_3;
  }
  return;
}


// ===== 006e8fa4  FUN_006e8fa4 =====

void FUN_006e8fa4(undefined8 *param_1,ulong param_2,ulong param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  byte *__src;
  ulong uVar8;
  undefined1 *puVar9;
  void *pvVar10;
  byte bVar11;
  ulong __n;
  uint uVar12;
  long lVar13;
  bool bVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  undefined *puVar18;
  ulong uVar19;
  ulong __n_00;
  ulong uVar20;
  undefined *__src_00;
  
  __src = (byte *)*param_1;
  uVar8 = param_1[1];
  bVar11 = *__src;
  uVar19 = (ulong)(bVar11 < 0x31);
  if (bVar11 < 0x31) {
    __src = __src + 1;
  }
  __n = uVar8 - uVar19;
  if ((long)__n < 0) goto LAB_006e9310;
  if (__n != 0 && __src == (byte *)0x0) goto LAB_006e9324;
  uVar15 = (uint)param_2;
  uVar12 = uVar15 >> 8;
  uVar3 = 0;
  if (__n <= param_2 >> 0x20) {
    uVar3 = (param_2 >> 0x20) - __n;
  }
  bVar14 = (param_2 & 0xfe) == 2;
  uVar20 = (ulong)bVar14;
  puVar18 = (undefined *)0x0;
  if ((bVar14) && (puVar18 = &DAT_001b07f5, bVar11 != 0x2d)) {
    if (((uVar12 & 0xff) >> 1 & 1) == 0) {
      uVar20 = (ulong)((uVar12 & 4) >> 2);
      puVar18 = (undefined *)0x0;
      if ((uVar12 & 4) != 0) {
        puVar18 = &DAT_001d5e07;
      }
    }
    else {
      uVar20 = 1;
      puVar18 = &DAT_001ce25a;
    }
  }
  uVar2 = uVar15 & 0xff;
  __n_00 = 0;
  uVar7 = 0;
  if (uVar20 <= uVar3) {
    uVar7 = uVar3 - uVar20;
  }
  bVar14 = true;
  if (uVar2 < 0x12) {
    __src_00 = (undefined *)0x0;
    if ((0x200c0U >> (ulong)(uVar15 & 0x1f) & 1) != 0) {
      __n_00 = 0;
      if (uVar2 != 0x11 && (param_2 & 0x800) == 0) goto LAB_006e90c8;
      __src_00 = (undefined *)0x0;
      if (uVar8 != uVar19) {
        bVar14 = false;
        __src_00 = &UNK_00198024;
        if (uVar2 != 7) {
          __src_00 = &DAT_001b42d5;
        }
        __n_00 = 2;
      }
    }
  }
  else {
LAB_006e90c8:
    __n_00 = 0;
    __src_00 = (undefined *)0x0;
  }
  uVar17 = param_3 & 0xffffffff;
  uVar3 = 0;
  if (__n_00 <= uVar7) {
    uVar3 = uVar7 - __n_00;
  }
  iVar16 = (int)param_3;
  if (iVar16 == -1 || iVar16 + 1 < 0 != SCARRY4(iVar16,1)) {
    uVar17 = 1;
  }
  if ((((((uVar12 & 0xff) >> 3 & 1) != 0) && ((param_2 & 0xff) == 4)) &&
      ((uVar8 == uVar19 || (*__src != 0x30)))) && (uVar17 <= __n + 1)) {
    uVar17 = __n + 1;
  }
  uVar7 = 0;
  if (__n <= uVar17) {
    uVar7 = uVar17 - __n;
  }
  lVar5 = 0;
  if (uVar7 <= uVar3) {
    lVar5 = uVar3 - uVar7;
  }
  lVar4 = 0;
  if (-1 < (long)param_2) {
    lVar4 = lVar5;
  }
  lVar5 = lVar4;
  if ((uVar12 & 1) != 0) {
    lVar5 = 0;
  }
  lVar6 = lVar5;
  lVar13 = 0;
  if ((uVar12 & 0x10) != 0) {
    lVar6 = 0;
    lVar13 = lVar5;
  }
  if ((param_3 & 0x80000000) != 0) {
    uVar7 = lVar13 + uVar7;
    lVar5 = lVar6;
  }
  FUN_006ea2d8(param_4,lVar5,0x20);
  if (uVar20 != 0) {
    puVar9 = (undefined1 *)param_4[3];
    param_4[2] = param_4[2] + 1;
    if ((ulong)((long)param_4 + (0x420 - (long)puVar9)) < 2) {
      puVar1 = param_4 + 4;
      param_3 = (long)puVar9 - (long)puVar1;
      if ((long)param_3 < 0) goto LAB_006e9310;
      if ((puVar1 == (undefined8 *)0x0) && (puVar9 != (undefined1 *)0x0)) goto LAB_006e9324;
      (*(code *)param_4[1])(*param_4,param_4 + 4,param_3);
      param_4[3] = puVar1;
      (*(code *)param_4[1])(*param_4,puVar18,uVar20);
    }
    else {
      *puVar9 = *puVar18;
      param_4[3] = param_4[3] + 1;
    }
  }
  if (!bVar14) {
    pvVar10 = (void *)param_4[3];
    param_4[2] = param_4[2] + __n_00;
    if (__n_00 < (ulong)((long)param_4 + (0x420 - (long)pvVar10))) {
      memcpy(pvVar10,__src_00,__n_00);
      param_4[3] = param_4[3] + __n_00;
    }
    else {
      puVar1 = param_4 + 4;
      param_3 = (long)pvVar10 - (long)puVar1;
      if ((long)param_3 < 0) goto LAB_006e9310;
      if ((puVar1 == (undefined8 *)0x0) && (pvVar10 != (void *)0x0)) goto LAB_006e9324;
      (*(code *)param_4[1])(*param_4,param_4 + 4,param_3);
      param_4[3] = puVar1;
      (*(code *)param_4[1])(*param_4,__src_00,__n_00);
    }
  }
  FUN_006ea2d8(param_4,uVar7,0x30);
  if (uVar8 != uVar19) {
    pvVar10 = (void *)param_4[3];
    param_4[2] = param_4[2] + __n;
    if (__n < (ulong)((long)param_4 + (0x420 - (long)pvVar10))) {
      memcpy(pvVar10,__src,__n);
      param_4[3] = param_4[3] + __n;
    }
    else {
      puVar1 = param_4 + 4;
      param_3 = (long)pvVar10 - (long)puVar1;
      if ((long)param_3 < 0) {
LAB_006e9310:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/string_view:331: libc++ Hardening assertion __len <= static_cast<size_type>(numeric_limits<difference_type>::max()) failed: string_view::string_view(_CharT *, size_t): length does not fit in difference_type\n"
                   ,param_3);
      }
      if ((puVar1 == (undefined8 *)0x0) && (pvVar10 != (void *)0x0)) {
LAB_006e9324:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/string_view:333: libc++ Hardening assertion __len == 0 || __s != nullptr failed: string_view::string_view(_CharT *, size_t): received nullptr\n"
                   ,param_3);
      }
      (*(code *)param_4[1])(*param_4,param_4 + 4);
      param_4[3] = puVar1;
      (*(code *)param_4[1])(*param_4,__src,__n);
    }
  }
  lVar5 = 0;
  if ((uVar12 & 1) != 0) {
    lVar5 = lVar4;
  }
  FUN_006ea2d8(param_4,lVar5,0x20);
  return;
}


// ===== 006e9338  FUN_006e9338 =====

uint FUN_006e9338(ulong param_1,ulong param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  void *__dest;
  long lVar2;
  byte bVar3;
  undefined1 **ppuVar4;
  uint uVar5;
  long lVar6;
  undefined1 **ppuVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  undefined1 *__n;
  undefined1 **ppuVar11;
  ulong local_a8;
  undefined4 local_a0;
  ushort local_98 [2];
  undefined4 local_94;
  undefined1 **local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 auStack_58 [3];
  undefined1 auStack_55 [13];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar10 = param_1 & 0xffffffff;
  uVar5 = (uint)param_2 & 0xff;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = (undefined1 **)&DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  _auStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  uVar9 = (uint)param_1;
  local_a8 = param_2;
  local_a0 = param_3;
  if (uVar5 < 7) {
    if (uVar5 < 4) {
      if (1 < uVar5 - 2) {
        if ((param_2 & 0xff0000) == 0x20000) {
          local_94 = 0xaaaaaaaa;
          local_98[0] = 0;
          lVar6 = FUN_006df2f8(uVar9 & 0xff,&local_94,local_98);
          uVar5 = 0;
          if ((lVar6 == -1) || ((local_98[0] & 1) != 0)) goto LAB_006e950c;
          if (-1 < lVar6) {
            uVar5 = FUN_006ea284(&local_94,lVar6,param_2,param_3,param_4);
            goto LAB_006e950c;
          }
          goto LAB_006e962c;
        }
        uVar8 = (param_2 & ((long)param_2 >> 0x3f ^ 0xffffffffffffffffU)) >> 0x20;
        lVar6 = uVar8 - (uVar8 != 0);
        if (((uint)param_2 >> 8 & 1) == 0) {
          FUN_006ea2d8(param_4,lVar6,0x20);
          uVar5 = 1;
          FUN_006ea2d8(param_4,1,uVar10);
        }
        else {
          uVar5 = 1;
          FUN_006ea2d8(param_4,1,uVar10);
          FUN_006ea2d8(param_4,lVar6,0x20);
        }
        goto LAB_006e950c;
      }
      goto LAB_006e94a4;
    }
    if (uVar5 == 4) {
      ppuVar11 = (undefined1 **)(auStack_58 + 4);
      do {
        bVar3 = (byte)uVar10;
        uVar5 = (uint)uVar10 >> 3 & 0x1f;
        uVar10 = (ulong)uVar5;
        ppuVar11 = (undefined1 **)((long)ppuVar11 + -1);
        *(byte *)ppuVar11 = bVar3 & 7 | 0x30;
      } while (uVar5 != 0);
    }
    else {
      if (uVar5 == 5) goto LAB_006e94a4;
      _auStack_58 = (undefined1 *)
                    CONCAT44(0xaaaaaaaa,
                             CONCAT22(*(ushort *)
                                       (PTR_s_000102030405060708090a0b0c0d0e0f_00d52048 +
                                       (param_1 & 0xff) * 2),0xaaaa));
      ppuVar11 = (undefined1 **)(auStack_58 + 3);
      if ((*(ushort *)(PTR_s_000102030405060708090a0b0c0d0e0f_00d52048 + (param_1 & 0xff) * 2) &
          0xff) != 0x30) {
        ppuVar11 = (undefined1 **)(auStack_58 + 2);
      }
    }
LAB_006e94e0:
    ppuVar7 = (undefined1 **)(auStack_58 + 4);
    local_90 = ppuVar11;
  }
  else {
    if (uVar5 - 8 < 8) {
      uVar5 = thunk_FUN_006ea418((double)(uVar9 & 0xff),&local_a8,param_4);
      goto LAB_006e950c;
    }
    if (uVar5 == 7) {
      ppuVar11 = (undefined1 **)(auStack_58 + 4);
      do {
        uVar8 = uVar10 & 0xf;
        uVar5 = (uint)uVar10 >> 4 & 0xf;
        uVar10 = (ulong)uVar5;
        ppuVar11 = (undefined1 **)((long)ppuVar11 + -1);
        *(char *)ppuVar11 = "0123456789ABCDEF"[uVar8];
      } while (uVar5 != 0);
      goto LAB_006e94e0;
    }
LAB_006e94a4:
    ppuVar11 = &puStack_80;
    local_90 = ppuVar11;
    ppuVar7 = (undefined1 **)FUN_006200e4(uVar9 & 0xff,ppuVar11);
  }
  ppuVar4 = local_90;
  __n = (undefined1 *)((long)ppuVar7 - (long)ppuVar11);
  puStack_88 = __n;
  if ((param_2 & 0xff00) == 0) {
    if ((long)__n < 0) {
LAB_006e962c:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/string_view:331: libc++ Hardening assertion __len <= static_cast<size_type>(numeric_limits<difference_type>::max()) failed: string_view::string_view(_CharT *, size_t): length does not fit in difference_type\n"
                );
    }
    if ((local_90 == (undefined1 **)0x0) && (ppuVar7 != ppuVar11)) {
LAB_006e9640:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/string_view:333: libc++ Hardening assertion __len == 0 || __s != nullptr failed: string_view::string_view(_CharT *, size_t): received nullptr\n"
                );
    }
    if (ppuVar7 != ppuVar11) {
      __dest = (void *)param_4[3];
      param_4[2] = __n + param_4[2];
      if (__n < (undefined1 *)((long)param_4 + (0x420 - (long)__dest))) {
        memcpy(__dest,local_90,(size_t)__n);
        param_4[3] = __n + param_4[3];
      }
      else {
        puVar1 = param_4 + 4;
        if ((long)__dest - (long)puVar1 < 0) goto LAB_006e962c;
        if ((puVar1 == (undefined8 *)0x0) && (__dest != (void *)0x0)) goto LAB_006e9640;
        (*(code *)param_4[1])(*param_4,param_4 + 4,(long)__dest - (long)puVar1);
        param_4[3] = puVar1;
        (*(code *)param_4[1])(*param_4,ppuVar4,__n);
      }
    }
  }
  else {
    FUN_006e8fa4(&local_90,param_2,param_3,param_4);
  }
  uVar5 = 1;
LAB_006e950c:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5 & 1;
}


// ===== 006e9658  FUN_006e9658 =====

uint FUN_006e9658(uint param_1,ulong param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  void *__dest;
  ushort uVar2;
  long lVar3;
  byte bVar4;
  undefined1 **ppuVar5;
  uint uVar6;
  long lVar7;
  undefined1 **ppuVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 *__n;
  undefined1 **ppuVar11;
  ulong local_a8;
  undefined4 local_a0;
  ushort local_98 [2];
  undefined4 local_94;
  undefined1 **local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 auStack_58 [5];
  undefined1 *puStack_53;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar10 = (ulong)param_1;
  uVar6 = (uint)param_2 & 0xff;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = (undefined1 **)&DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  _auStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_a8 = param_2;
  local_a0 = param_3;
  if (uVar6 < 7) {
    if (uVar6 < 4) {
      if (1 < uVar6 - 2) {
        if ((param_2 & 0xff0000) == 0x20000) {
          local_94 = 0xaaaaaaaa;
          local_98[0] = 0;
          lVar7 = FUN_006df2f8(param_1,&local_94,local_98);
          uVar6 = 0;
          if ((lVar7 == -1) || ((local_98[0] & 1) != 0)) goto LAB_006e9850;
          if (-1 < lVar7) {
            uVar6 = FUN_006ea284(&local_94,lVar7,param_2,param_3,param_4);
            goto LAB_006e9850;
          }
          goto LAB_006e9970;
        }
        uVar10 = (param_2 & ((long)param_2 >> 0x3f ^ 0xffffffffffffffffU)) >> 0x20;
        lVar7 = uVar10 - (uVar10 != 0);
        if (((uint)param_2 >> 8 & 1) == 0) {
          FUN_006ea2d8(param_4,lVar7,0x20);
          uVar6 = 1;
          FUN_006ea2d8(param_4,1,param_1);
        }
        else {
          uVar6 = 1;
          FUN_006ea2d8(param_4,1,param_1);
          FUN_006ea2d8(param_4,lVar7,0x20);
        }
        goto LAB_006e9850;
      }
      goto LAB_006e97a8;
    }
    if (uVar6 == 4) {
      ppuVar11 = (undefined1 **)(auStack_58 + 4);
      do {
        bVar4 = (byte)uVar10;
        uVar6 = (uint)uVar10 >> 3;
        uVar10 = (ulong)uVar6;
        ppuVar11 = (undefined1 **)((long)ppuVar11 + -1);
        *(byte *)ppuVar11 = bVar4 & 7 | 0x30;
      } while (uVar6 != 0);
LAB_006e9824:
      ppuVar8 = (undefined1 **)(auStack_58 + 4);
      local_90 = ppuVar11;
    }
    else {
      if (uVar6 != 5) {
        ppuVar11 = (undefined1 **)(auStack_58 + 5);
        do {
          ppuVar8 = ppuVar11;
          uVar2 = *(ushort *)(PTR_s_000102030405060708090a0b0c0d0e0f_00d52048 + (uVar10 & 0xff) * 2)
          ;
          *(ushort *)((long)ppuVar8 + -3) = uVar2;
          uVar9 = uVar10 >> 8;
          ppuVar11 = (undefined1 **)((long)ppuVar8 + -2);
          uVar10 = uVar10 >> 8;
        } while ((int)uVar9 != 0);
        if ((uVar2 & 0xff) != 0x30) {
          ppuVar11 = (undefined1 **)((long)ppuVar8 + -3);
        }
        goto LAB_006e9824;
      }
      ppuVar11 = &puStack_80;
      local_90 = ppuVar11;
      ppuVar8 = (undefined1 **)FUN_006200e4(param_1,ppuVar11);
    }
  }
  else {
    if (uVar6 - 8 < 8) {
      uVar6 = thunk_FUN_006ea418((double)(int)param_1,&local_a8,param_4);
      goto LAB_006e9850;
    }
    if (uVar6 == 7) {
      ppuVar11 = (undefined1 **)(auStack_58 + 4);
      do {
        uVar9 = uVar10 & 0xf;
        uVar10 = uVar10 >> 4;
        ppuVar11 = (undefined1 **)((long)ppuVar11 + -1);
        *(char *)ppuVar11 = "0123456789ABCDEF"[uVar9];
      } while ((int)uVar10 != 0);
      goto LAB_006e9824;
    }
LAB_006e97a8:
    ppuVar11 = &puStack_80;
    local_90 = ppuVar11;
    ppuVar8 = (undefined1 **)FUN_0062024c(uVar10,ppuVar11);
  }
  ppuVar5 = local_90;
  __n = (undefined1 *)((long)ppuVar8 - (long)ppuVar11);
  puStack_88 = __n;
  if ((param_2 & 0xff00) == 0) {
    if ((long)__n < 0) {
LAB_006e9970:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/string_view:331: libc++ Hardening assertion __len <= static_cast<size_type>(numeric_limits<difference_type>::max()) failed: string_view::string_view(_CharT *, size_t): length does not fit in difference_type\n"
                );
    }
    if ((local_90 == (undefined1 **)0x0) && (ppuVar8 != ppuVar11)) {
LAB_006e9984:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/string_view:333: libc++ Hardening assertion __len == 0 || __s != nullptr failed: string_view::string_view(_CharT *, size_t): received nullptr\n"
                );
    }
    if (ppuVar8 != ppuVar11) {
      __dest = (void *)param_4[3];
      param_4[2] = __n + param_4[2];
      if (__n < (undefined1 *)((long)param_4 + (0x420 - (long)__dest))) {
        memcpy(__dest,local_90,(size_t)__n);
        param_4[3] = __n + param_4[3];
      }
      else {
        puVar1 = param_4 + 4;
        if ((long)__dest - (long)puVar1 < 0) goto LAB_006e9970;
        if ((puVar1 == (undefined8 *)0x0) && (__dest != (void *)0x0)) goto LAB_006e9984;
        (*(code *)param_4[1])(*param_4,param_4 + 4,(long)__dest - (long)puVar1);
        param_4[3] = puVar1;
        (*(code *)param_4[1])(*param_4,ppuVar5,__n);
      }
    }
  }
  else {
    FUN_006e8fa4(&local_90,param_2,param_3,param_4);
  }
  uVar6 = 1;
LAB_006e9850:
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6 & 1;
}


// ===== 006e999c  FUN_006e999c =====

uint FUN_006e999c(ulong param_1,ulong param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  void *__dest;
  ushort uVar2;
  long lVar3;
  byte bVar4;
  undefined1 **ppuVar5;
  uint uVar6;
  long lVar7;
  undefined1 **ppuVar8;
  ulong uVar9;
  undefined1 *__n;
  undefined1 **ppuVar10;
  ulong local_a8;
  undefined4 local_a0;
  ushort local_98 [2];
  undefined4 local_94;
  undefined1 **local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 auStack_58 [5];
  undefined1 *puStack_53;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar6 = (uint)param_2 & 0xff;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = (undefined1 **)&DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  _auStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_a8 = param_2;
  local_a0 = param_3;
  if (uVar6 < 7) {
    if (uVar6 < 4) {
      if (1 < uVar6 - 2) {
        if ((param_2 & 0xff0000) == 0x20000) {
          local_94 = 0xaaaaaaaa;
          local_98[0] = 0;
          lVar7 = FUN_006df2f8(param_1 & 0xffffffff,&local_94,local_98);
          uVar6 = 0;
          if ((lVar7 == -1) || ((local_98[0] & 1) != 0)) goto LAB_006e9b78;
          if (-1 < lVar7) {
            uVar6 = FUN_006ea284(&local_94,lVar7,param_2,param_3,param_4);
            goto LAB_006e9b78;
          }
          goto LAB_006e9c98;
        }
        uVar9 = (param_2 & ((long)param_2 >> 0x3f ^ 0xffffffffffffffffU)) >> 0x20;
        lVar7 = uVar9 - (uVar9 != 0);
        if (((uint)param_2 >> 8 & 1) == 0) {
          FUN_006ea2d8(param_4,lVar7,0x20);
          uVar6 = 1;
          FUN_006ea2d8(param_4,1,param_1 & 0xffffffff);
        }
        else {
          uVar6 = 1;
          FUN_006ea2d8(param_4,1,param_1 & 0xffffffff);
          FUN_006ea2d8(param_4,lVar7,0x20);
        }
        goto LAB_006e9b78;
      }
      goto LAB_006e9b10;
    }
    if (uVar6 == 4) {
      ppuVar10 = (undefined1 **)(auStack_58 + 4);
      do {
        bVar4 = (byte)param_1;
        param_1 = param_1 >> 3;
        ppuVar10 = (undefined1 **)((long)ppuVar10 + -1);
        *(byte *)ppuVar10 = bVar4 & 7 | 0x30;
      } while (param_1 != 0);
    }
    else {
      if (uVar6 == 5) goto LAB_006e9b10;
      ppuVar10 = (undefined1 **)(auStack_58 + 5);
      do {
        ppuVar8 = ppuVar10;
        uVar9 = param_1 & 0xff;
        param_1 = param_1 >> 8;
        uVar2 = *(ushort *)(PTR_s_000102030405060708090a0b0c0d0e0f_00d52048 + uVar9 * 2);
        *(ushort *)((long)ppuVar8 + -3) = uVar2;
        ppuVar10 = (undefined1 **)((long)ppuVar8 + -2);
      } while (param_1 != 0);
      if ((uVar2 & 0xff) != 0x30) {
        ppuVar10 = (undefined1 **)((long)ppuVar8 + -3);
      }
    }
LAB_006e9b4c:
    ppuVar8 = (undefined1 **)(auStack_58 + 4);
    local_90 = ppuVar10;
  }
  else {
    if (uVar6 - 8 < 8) {
      uVar6 = thunk_FUN_006ea418((double)param_1,&local_a8,param_4);
      goto LAB_006e9b78;
    }
    if (uVar6 == 7) {
      ppuVar10 = (undefined1 **)(auStack_58 + 4);
      do {
        uVar9 = param_1 & 0xf;
        param_1 = param_1 >> 4;
        ppuVar10 = (undefined1 **)((long)ppuVar10 + -1);
        *(char *)ppuVar10 = "0123456789ABCDEF"[uVar9];
      } while (param_1 != 0);
      goto LAB_006e9b4c;
    }
LAB_006e9b10:
    ppuVar10 = &puStack_80;
    local_90 = ppuVar10;
    ppuVar8 = (undefined1 **)FUN_006203cc(param_1,ppuVar10);
  }
  ppuVar5 = local_90;
  __n = (undefined1 *)((long)ppuVar8 - (long)ppuVar10);
  puStack_88 = __n;
  if ((param_2 & 0xff00) == 0) {
    if ((long)__n < 0) {
LAB_006e9c98:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/string_view:331: libc++ Hardening assertion __len <= static_cast<size_type>(numeric_limits<difference_type>::max()) failed: string_view::string_view(_CharT *, size_t): length does not fit in difference_type\n"
                );
    }
    if ((local_90 == (undefined1 **)0x0) && (ppuVar8 != ppuVar10)) {
LAB_006e9cac:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/string_view:333: libc++ Hardening assertion __len == 0 || __s != nullptr failed: string_view::string_view(_CharT *, size_t): received nullptr\n"
                );
    }
    if (ppuVar8 != ppuVar10) {
      __dest = (void *)param_4[3];
      param_4[2] = __n + param_4[2];
      if (__n < (undefined1 *)((long)param_4 + (0x420 - (long)__dest))) {
        memcpy(__dest,local_90,(size_t)__n);
        param_4[3] = __n + param_4[3];
      }
      else {
        puVar1 = param_4 + 4;
        if ((long)__dest - (long)puVar1 < 0) goto LAB_006e9c98;
        if ((puVar1 == (undefined8 *)0x0) && (__dest != (void *)0x0)) goto LAB_006e9cac;
        (*(code *)param_4[1])(*param_4,param_4 + 4,(long)__dest - (long)puVar1);
        param_4[3] = puVar1;
        (*(code *)param_4[1])(*param_4,ppuVar5,__n);
      }
    }
  }
  else {
    FUN_006e8fa4(&local_90,param_2,param_3,param_4);
  }
  uVar6 = 1;
LAB_006e9b78:
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6 & 1;
}


// ===== 006e9cc4  FUN_006e9cc4 =====

undefined8 FUN_006e9cc4(ulong param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  ushort uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long local_78;
  long lStack_70;
  undefined1 *local_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined1 *puStack_50;
  undefined1 *local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar5 = tpidr_el0;
  local_38 = *(long *)(lVar5 + 0x28);
  if (param_1 == 0) {
    puVar2 = (undefined4 *)param_4[3];
    param_4[2] = param_4[2] + 5;
    if ((ulong)((long)param_4 + (0x420 - (long)puVar2)) < 6) {
      puVar1 = param_4 + 4;
      lVar4 = (long)puVar2 - (long)puVar1;
      if (lVar4 < 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/string_view:331: libc++ Hardening assertion __len <= static_cast<size_type>(numeric_limits<difference_type>::max()) failed: string_view::string_view(_CharT *, size_t): length does not fit in difference_type\n"
                   ,lVar4);
      }
      if ((puVar1 == (undefined8 *)0x0) && (puVar2 != (undefined4 *)0x0)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/string_view:333: libc++ Hardening assertion __len == 0 || __s != nullptr failed: string_view::string_view(_CharT *, size_t): received nullptr\n"
                   ,lVar4);
      }
      (*(code *)param_4[1])(*param_4,param_4 + 4);
      param_4[3] = puVar1;
      (*(code *)param_4[1])(*param_4,"(nil)",5);
    }
    else {
      *(undefined1 *)(puVar2 + 1) = 0x29;
      *puVar2 = 0x6c696e28;
      param_4[3] = param_4[3] + 5;
    }
  }
  else {
    uStack_40 = &DAT_aaaaaaaaaaaaaaaa;
    local_48 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
    local_58 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
    local_68 = &DAT_aaaaaaaaaaaaaaaa;
    lVar4 = (long)&uStack_40 + 5;
    do {
      lVar7 = lVar4;
      uVar6 = param_1 & 0xff;
      param_1 = param_1 >> 8;
      uVar3 = *(ushort *)(PTR_s_000102030405060708090a0b0c0d0e0f_00d52048 + uVar6 * 2);
      *(ushort *)(lVar7 + -3) = uVar3;
      lVar4 = lVar7 + -2;
    } while (param_1 != 0);
    local_78 = lVar7 + -2;
    if ((uVar3 & 0xff) != 0x30) {
      local_78 = lVar7 + -3;
    }
    lStack_70 = (long)&uStack_40 + (4 - local_78);
    FUN_006e8fa4(&local_78,param_2,param_3,param_4);
  }
  if (*(long *)(lVar5 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006e9e28  FUN_006e9e28 =====

undefined8 FUN_006e9e28(undefined8 param_1,ulong param_2,undefined4 param_3,uint *param_4)

{
  undefined8 uVar1;
  
  if ((param_2 & 0xff) == 0x13) {
    *param_4 = (uint)param_1 & 0xff;
    return 1;
  }
  if ((2L << (param_2 & 0x3f) & 0x1fffaU) != 0) {
    uVar1 = FUN_006e8ba8(param_1,param_2,param_3);
    return uVar1;
  }
  return 0;
}


// ===== 006e9e6c  FUN_006e9e6c =====

undefined8 FUN_006e9e6c(undefined8 param_1,ulong param_2,undefined4 param_3,uint *param_4)

{
  undefined8 uVar1;
  
  if ((param_2 & 0xff) == 0x13) {
    *param_4 = (uint)param_1 & 0xff;
    return 1;
  }
  if ((2L << (param_2 & 0x3f) & 0x9fffaU) != 0) {
    uVar1 = FUN_006e9338(param_1,param_2,param_3);
    return uVar1;
  }
  return 0;
}


// ===== 006e9eb4  FUN_006e9eb4 =====

undefined8 FUN_006e9eb4(undefined8 param_1,ulong param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  
  if ((param_2 & 0xff) == 0x13) {
    *param_4 = (int)param_1;
    return 1;
  }
  if ((2L << (param_2 & 0x3f) & 0x9fffaU) != 0) {
    uVar1 = FUN_006e9658(param_1,param_2,param_3);
    return uVar1;
  }
  return 0;
}


// ===== 006e9ef8  FUN_006e9ef8 =====

undefined8 FUN_006e9ef8(ulong param_1,ulong param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  
  if ((param_2 & 0xff) == 0x13) {
    if (0x7ffffffe < param_1) {
      param_1 = 0x7fffffff;
    }
    *param_4 = (int)param_1;
    return 1;
  }
  if ((2L << (param_2 & 0x3f) & 0x9fffaU) != 0) {
    uVar1 = FUN_006e999c(param_1,param_2,param_3);
    return uVar1;
  }
  return 0;
}


// ===== 006e9f48  FUN_006e9f48 =====

undefined1 FUN_006e9f48(undefined8 param_1,ulong param_2,undefined4 param_3)

{
  undefined1 uVar1;
  
  if (((param_2 & 0xff) != 0x13) && ((2L << (param_2 & 0x3f) & 0x40004U) != 0)) {
    uVar1 = FUN_006e9f98(param_1,param_2,param_3);
    return uVar1;
  }
  return 0;
}


// ===== 006e9f98  FUN_006e9f98 =====

uint FUN_006e9f98(char *param_1,ulong param_2,ulong param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  char *pcVar2;
  void *__dest;
  uint uVar3;
  char *pcVar4;
  ulong __n;
  
  if ((param_2 & 0xff) == 0x11) {
    FUN_006e9cc4(param_1,param_2,param_3 & 0xffffffff,param_4);
    return 1;
  }
  if (param_1 == (char *)0x0) {
    uVar3 = (uint)param_2 >> 8 & 0xff;
    if (uVar3 == 0) {
LAB_006ea0d4:
      uVar3 = 1;
      goto LAB_006ea0d8;
    }
    __n = 0;
  }
  else {
    if ((int)param_3 < 0) {
      __n = strlen(param_1);
    }
    else {
      pcVar4 = (char *)memchr(param_1,0,param_3 & 0x7fffffff);
      pcVar2 = param_1 + (param_3 & 0x7fffffff);
      if (pcVar4 != (char *)0x0) {
        pcVar2 = pcVar4;
      }
      __n = (long)pcVar2 - (long)param_1;
    }
    if ((long)__n < 0) {
LAB_006ea0f4:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/string_view:331: libc++ Hardening assertion __len <= static_cast<size_type>(numeric_limits<difference_type>::max()) failed: string_view::string_view(_CharT *, size_t): length does not fit in difference_type\n"
                );
    }
    uVar3 = (uint)param_2 >> 8 & 0xff;
    if (uVar3 == 0) {
      if (__n != 0) {
        __dest = (void *)param_4[3];
        param_4[2] = param_4[2] + __n;
        if (__n < (ulong)((long)param_4 + (0x420 - (long)__dest))) {
          memcpy(__dest,param_1,__n);
          param_4[3] = param_4[3] + __n;
        }
        else {
          puVar1 = param_4 + 4;
          if ((long)__dest - (long)puVar1 < 0) goto LAB_006ea0f4;
          if ((puVar1 == (undefined8 *)0x0) && (__dest != (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/string_view:333: libc++ Hardening assertion __len == 0 || __s != nullptr failed: string_view::string_view(_CharT *, size_t): received nullptr\n"
                       ,(long)__dest - (long)puVar1);
          }
          (*(code *)param_4[1])(*param_4,param_4 + 4);
          param_4[3] = puVar1;
          (*(code *)param_4[1])(*param_4,param_1,__n);
        }
      }
      goto LAB_006ea0d4;
    }
  }
  uVar3 = FUN_006ee894(param_4,param_1,__n,param_2 >> 0x20,param_3 & 0xffffffff,uVar3 & 1);
LAB_006ea0d8:
  return uVar3 & 1;
}


// ===== 006ea11c  FUN_006ea11c =====

undefined1 FUN_006ea11c(undefined8 param_1,ulong param_2,undefined4 param_3)

{
  undefined1 uVar1;
  
  if (((param_2 & 0xff) != 0x13) && ((2L << (param_2 & 0x3f) & 0x80004U) != 0)) {
    uVar1 = FUN_006ea16c(param_1,param_2,param_3);
    return uVar1;
  }
  return 0;
}


// ===== 006ea16c  FUN_006ea16c =====

uint FUN_006ea16c(undefined8 *param_1,ulong param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  ulong __n;
  void *__dest;
  long lVar2;
  undefined8 *__src;
  uint uVar3;
  
  uVar3 = (uint)param_2 >> 8;
  __n = param_1[1];
  __src = (undefined8 *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    __n = (ulong)*(byte *)((long)param_1 + 0x17);
    __src = param_1;
  }
  if ((uVar3 & 0xff) == 0) {
    if (__n == 0) {
      uVar3 = 1;
    }
    else {
      __dest = (void *)param_4[3];
      param_4[2] = param_4[2] + __n;
      if (__n < (ulong)((long)param_4 + (0x420 - (long)__dest))) {
        memcpy(__dest,__src,__n);
        uVar3 = 1;
        param_4[3] = param_4[3] + __n;
      }
      else {
        puVar1 = param_4 + 4;
        lVar2 = (long)__dest - (long)puVar1;
        if (lVar2 < 0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/string_view:331: libc++ Hardening assertion __len <= static_cast<size_type>(numeric_limits<difference_type>::max()) failed: string_view::string_view(_CharT *, size_t): length does not fit in difference_type\n"
                     ,lVar2);
        }
        if ((puVar1 == (undefined8 *)0x0) && (__dest != (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/string_view:333: libc++ Hardening assertion __len == 0 || __s != nullptr failed: string_view::string_view(_CharT *, size_t): received nullptr\n"
                     ,lVar2);
        }
        (*(code *)param_4[1])(*param_4,param_4 + 4);
        param_4[3] = puVar1;
        (*(code *)param_4[1])(*param_4,__src,__n);
        uVar3 = 1;
      }
    }
  }
  else {
    uVar3 = FUN_006ee894(param_4,__src,__n,param_2 >> 0x20,param_3,uVar3 & 1);
  }
  return uVar3 & 1;
}


// ===== 006ea284  FUN_006ea284 =====

undefined8
FUN_006ea284(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
            undefined8 param_5)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = (uint)param_3 >> 8;
  if ((uVar1 & 0xff) != 0) {
    uVar2 = FUN_006ee894(param_5,param_1,param_2,param_3 >> 0x20,param_4,uVar1 & 1);
    return uVar2;
  }
  FUN_006e8ec8(param_5,param_1,param_2);
  return 1;
}


// ===== 006ea2d8  FUN_006ea2d8 =====

void FUN_006ea2d8(undefined8 *param_1,ulong param_2,int param_3)

{
  undefined8 *__s;
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *__s_00;
  ulong __n;
  
  if (param_2 != 0) {
    __s = (undefined8 *)param_1[3];
    puVar1 = param_1 + 0x84;
    __n = (long)puVar1 - (long)__s;
    uVar2 = param_2 - __n;
    param_1[2] = param_1[2] + param_2;
    __s_00 = __s;
    if (__n <= param_2 && uVar2 != 0) {
      __s_00 = param_1 + 4;
      if (puVar1 != __s) {
        memset(__s,param_3,__n);
        puVar1 = (undefined8 *)(param_1[3] + __n);
        param_1[3] = puVar1;
      }
      if ((long)puVar1 - (long)__s_00 < 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/string_view:331: libc++ Hardening assertion __len <= static_cast<size_type>(numeric_limits<difference_type>::max()) failed: string_view::string_view(_CharT *, size_t): length does not fit in difference_type\n"
                   ,(long)puVar1 - (long)__s_00);
      }
      if ((__s_00 == (undefined8 *)0x0) && (puVar1 != (undefined8 *)0x0)) {
LAB_006ea3f0:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/string_view:333: libc++ Hardening assertion __len == 0 || __s != nullptr failed: string_view::string_view(_CharT *, size_t): received nullptr\n"
                  );
      }
      (*(code *)param_1[1])(*param_1,param_1 + 4);
      param_1[3] = __s_00;
      param_2 = uVar2;
      if (0x400 < uVar2) {
        do {
          memset(param_1 + 4,param_3,0x400);
          param_1[3] = param_1 + 0x84;
          if (__s_00 == (undefined8 *)0x0 && param_1 + 0x84 != (undefined8 *)0x0) goto LAB_006ea3f0;
          uVar2 = uVar2 - 0x400;
          (*(code *)param_1[1])(*param_1,param_1 + 4,0x400);
          param_1[3] = __s_00;
          param_2 = uVar2;
        } while (0x400 < uVar2);
      }
    }
    memset(__s_00,param_3,param_2);
    param_1[3] = param_1[3] + param_2;
  }
  return;
}


// ===== 006ea418  FUN_006ea418 =====

/* WARNING: Removing unreachable block (ram,0x006eac4c) */
/* WARNING: Removing unreachable block (ram,0x006eabf0) */
/* WARNING: Removing unreachable block (ram,0x006eb07c) */
/* WARNING: Removing unreachable block (ram,0x006eb084) */
/* WARNING: Removing unreachable block (ram,0x006eabfc) */
/* WARNING: Removing unreachable block (ram,0x006eac60) */
/* WARNING: Removing unreachable block (ram,0x006eb160) */
/* WARNING: Removing unreachable block (ram,0x006eaf5c) */
/* WARNING: Removing unreachable block (ram,0x006eb08c) */
/* WARNING: Removing unreachable block (ram,0x006eb120) */
/* WARNING: Removing unreachable block (ram,0x006eb12c) */
/* WARNING: Removing unreachable block (ram,0x006eb130) */
/* WARNING: Removing unreachable block (ram,0x006eb134) */
/* WARNING: Removing unreachable block (ram,0x006eb0a8) */
/* WARNING: Removing unreachable block (ram,0x006eb154) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_006ea418(double param_1,byte *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  byte bVar4;
  byte *pbVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  long lVar15;
  void *__src;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  undefined1 uVar19;
  uint uVar20;
  ulong uVar21;
  byte *pbVar22;
  size_t sVar23;
  byte *pbVar24;
  byte *pbVar25;
  long lVar26;
  undefined8 uVar27;
  code *pcVar28;
  size_t sVar29;
  uint uVar30;
  undefined4 uVar31;
  undefined1 uVar32;
  byte bVar33;
  int iVar34;
  int iVar35;
  undefined2 *puVar36;
  undefined2 *puVar37;
  ulong uVar38;
  byte *pbVar39;
  char *pcVar40;
  uint uVar41;
  long lVar42;
  byte bVar43;
  ulong uVar44;
  byte *pbVar45;
  ulong uVar46;
  ulong uVar47;
  ulong uVar48;
  byte *pbVar49;
  ulong uVar50;
  void *__dest;
  ulong uVar51;
  double dVar52;
  byte local_1f0 [8];
  ulong local_1e8;
  byte *local_1e0;
  undefined8 local_1d8;
  undefined1 *local_1d0;
  undefined1 *puStack_1c8;
  undefined1 *puStack_1c0;
  undefined1 *puStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined1 *puStack_1a0;
  undefined1 *puStack_198;
  undefined1 *local_190;
  undefined1 *puStack_188;
  undefined1 *puStack_180;
  byte *local_178;
  byte *local_170;
  byte local_160;
  undefined1 uStack_15f;
  undefined2 uStack_15e;
  undefined4 uStack_15c;
  undefined1 uStack_158;
  undefined1 uStack_157;
  undefined6 uStack_156;
  undefined1 local_150;
  undefined1 uStack_14f;
  undefined6 uStack_14e;
  undefined2 uStack_148;
  undefined6 uStack_146;
  undefined2 local_140;
  undefined6 uStack_13e;
  undefined8 uStack_138;
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
  undefined1 uStack_c8;
  undefined2 local_c7;
  undefined5 uStack_c5;
  undefined1 uStack_c0;
  undefined2 uStack_bf;
  undefined6 uStack_bd;
  undefined2 uStack_b7;
  byte local_b0;
  undefined1 uStack_af;
  char cStack_ae;
  undefined1 uStack_ad;
  undefined4 uStack_ac;
  ushort uStack_a8;
  undefined1 uStack_a6;
  uint5 uStack_a5;
  undefined2 uStack_a0;
  undefined1 uStack_9e;
  undefined4 uStack_9d;
  byte bStack_99;
  undefined2 uStack_98;
  undefined6 uStack_96;
  undefined2 uStack_90;
  long local_88;
  
  lVar15 = tpidr_el0;
  local_88 = *(long *)(lVar15 + 0x28);
  if ((long)param_1 < 0) {
    local_160 = 0x2d;
    dVar52 = -param_1;
LAB_006ea4a0:
    pbVar49 = (byte *)((ulong)&local_160 | 1);
    bVar33 = local_160;
  }
  else {
    dVar52 = param_1;
    if ((param_2[1] >> 1 & 1) != 0) {
      local_160 = 0x2b;
      goto LAB_006ea4a0;
    }
    if ((param_2[1] >> 2 & 1) != 0) {
      local_160 = 0x20;
      goto LAB_006ea4a0;
    }
    local_160 = 0xaa;
    pbVar49 = &local_160;
    bVar33 = 0;
  }
  uStack_15e = 0xaaaa;
  uStack_15f = 0xaa;
  if (NAN(dVar52)) {
    puVar37 = (undefined2 *)&UNK_001ed366;
    bVar17 = (*param_2 & 0xf9) == 9 || *param_2 == 7;
    puVar36 = &DAT_001b1489;
LAB_006ea4ec:
    if (!bVar17) {
      puVar37 = puVar36;
    }
    bVar43 = *(byte *)(puVar37 + 1);
    *(undefined2 *)pbVar49 = *puVar37;
    pbVar49[2] = bVar43;
    if ((long)(pbVar49 + (3 - (long)&local_160)) < 0) goto LAB_006ebdc0;
    uVar21 = FUN_006ee894(param_3,&local_160,pbVar49 + (3 - (long)&local_160),
                          *(undefined4 *)(param_2 + 4),0xffffffff,param_2[1] & 1);
    if ((uVar21 & 1) == 0) goto LAB_006ea530;
    goto LAB_006ebb04;
  }
  if (ABS(dVar52) == INFINITY) {
    puVar37 = (undefined2 *)&UNK_001efeda;
    bVar17 = (*param_2 & 0xf9) == 9 || *param_2 == 7;
    puVar36 = &DAT_001b42d8;
    goto LAB_006ea4ec;
  }
LAB_006ea530:
  uVar41 = *(uint *)(param_2 + 8);
  local_160 = 0xaa;
  uStack_15f = 0xaa;
  uStack_15e = 0xaaaa;
  uVar30 = 6;
  if (-1 < (int)uVar41) {
    uVar30 = uVar41;
  }
  uVar50 = (ulong)uVar30;
  dVar52 = frexp(dVar52,(int *)&local_160);
  dVar52 = ldexp(dVar52,0x35);
  bVar4 = *param_2;
  uVar21 = (ulong)dVar52;
  iVar2 = CONCAT22(uStack_15e,CONCAT11(uStack_15f,local_160));
  uVar31 = 0;
  bVar43 = bVar4 & 0xfe;
  uVar20 = iVar2 - 0x35;
  uVar51 = (ulong)uVar20;
  local_170 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1c8 = &DAT_aaaaaaaaaaaaaaaa;
  local_1d0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1b8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1c0 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_1a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_1b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_198 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_188 = &DAT_aaaaaaaaaaaaaaaa;
  local_190 = &DAT_aaaaaaaaaaaaaaaa;
  local_178 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_180 = &DAT_aaaaaaaaaaaaaaaa;
  if (bVar43 < 0xc) {
    if (bVar43 != 8) {
      if (bVar43 != 10) goto LAB_006ebb08;
      bVar4 = bVar4 & 0xf9;
      if ((int)uVar20 < 1) {
        if (uVar20 == 0xffffff7f || iVar2 + 0x4c < 0 != SCARRY4(uVar20,0x81)) {
          local_b0 = bVar4 == 9;
          local_160 = (byte)local_1f0;
          uStack_15f = (undefined1)((ulong)local_1f0 >> 8);
          uStack_15e = (undefined2)((ulong)local_1f0 >> 0x10);
          uStack_15c = (undefined4)((ulong)local_1f0 >> 0x20);
          uStack_158 = SUB81(&local_b0,0);
          uStack_157 = (undefined1)((ulong)&local_b0 >> 8);
          uStack_156 = (undefined6)((ulong)&local_b0 >> 0x10);
          local_1f0[0] = bVar33;
          local_1e8 = uVar50;
          local_1e0 = param_2;
          local_1d8 = param_3;
          FUN_006ecf64(uVar21,0,0x35 - iVar2,&local_160,FUN_006ee1e4);
          goto LAB_006ebb04;
        }
      }
      else if (0x80 < (iVar2 - (int)LZCOUNT(uVar21)) + 0xb) {
        local_b0 = bVar4 == 9;
        pcVar28 = FUN_006ed8cc;
        local_160 = (byte)local_1f0;
        uStack_15f = (undefined1)((ulong)local_1f0 >> 8);
        uStack_15e = (undefined2)((ulong)local_1f0 >> 0x10);
        uStack_15c = (undefined4)((ulong)local_1f0 >> 0x20);
        uStack_158 = SUB81(&local_b0,0);
        uStack_157 = (undefined1)((ulong)&local_b0 >> 8);
        uStack_156 = (undefined6)((ulong)&local_b0 >> 0x10);
        local_1f0[0] = bVar33;
        local_1e8 = uVar50;
        local_1e0 = param_2;
        local_1d8 = param_3;
        goto LAB_006ea5ec;
      }
      if (uVar21 != 0) {
        pbVar49 = (byte *)((ulong)&local_160 | 2);
        uStack_bf = 0xaaaa;
        uStack_bd = 0xaaaaaaaaaaaa;
        uStack_c0 = 0xaa;
        uStack_158 = 0xaa;
        uStack_157 = 0xaa;
        uStack_156 = 0xaaaaaaaaaaaa;
        local_160 = 0xaa;
        uStack_15f = 0xaa;
        uStack_15e = 0xaaaa;
        uStack_15c = 0xaaaaaaaa;
        uStack_148 = 0xaaaa;
        uStack_146 = 0xaaaaaaaaaaaa;
        local_150 = 0xaa;
        uStack_14f = 0xaa;
        uStack_14e = 0xaaaaaaaaaaaa;
        uStack_138 = &DAT_aaaaaaaaaaaaaaaa;
        local_140 = 0xaaaa;
        uStack_13e = 0xaaaaaaaaaaaa;
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
        uStack_c8 = 0xaa;
        local_c7 = 0xaaaa;
        uStack_c5 = 0xaaaaaaaaaa;
        puStack_d0 = &DAT_aaaaaaaaaaaaaaaa;
        if ((int)uVar20 < 0) {
          if (0x35U - iVar2 < 0x40) {
            uVar51 = uVar21 >> ((ulong)(0x35U - iVar2) & 0x3f);
            local_1f0[0] = bVar33;
            local_1e8 = uVar50;
            local_1e0 = param_2;
            local_1d8 = param_3;
            pbVar24 = (byte *)FUN_006203cc(uVar51,pbVar49);
            *pbVar24 = 0x30;
            if (uVar51 == 0) {
              bVar16 = false;
              uVar51 = 0;
              bVar17 = true;
            }
            else {
              uVar51 = (long)pbVar24 - (long)pbVar49;
              bVar17 = false;
              if ((local_1e8 + 2 < uVar51) && (pbVar49 + local_1e8 + 2 != pbVar24)) {
                pbVar22 = (byte *)((long)&uStack_15c + local_1e8 + 1);
                do {
                  bVar16 = pbVar22[-1] != 0x30;
                  if (bVar16) break;
                  bVar17 = pbVar22 != pbVar24;
                  pbVar22 = pbVar22 + 1;
                } while (bVar17);
                bVar17 = false;
              }
              else {
                bVar16 = false;
              }
            }
          }
          else {
            bVar16 = false;
            uVar51 = 0;
            pbVar24 = (byte *)((long)&uStack_138 + 1);
            uStack_138 = (undefined1 *)0xaaaaaaaaaaaa30aa;
            bVar17 = true;
            local_1f0[0] = bVar33;
            local_1e8 = uVar50;
            local_1e0 = param_2;
            local_1d8 = param_3;
          }
          uVar50 = 0;
          if (uVar51 <= local_1e8 + 1) {
            uVar50 = ((local_1e8 + 1) - uVar51) + 1;
          }
          pbVar22 = pbVar24;
          if (iVar2 + 0xb < 0 == SCARRY4(uVar20,0x40)) {
            uVar41 = 0;
            uVar21 = uVar21 << ((ulong)(iVar2 + 0xb) & 0x3f);
            bVar18 = uVar21 != 0;
            if ((uVar21 != 0) && (uVar50 != 0)) {
              uVar41 = 0;
              pbVar39 = pbVar24;
              bVar3 = bVar17;
              do {
                auVar8._8_8_ = 0;
                auVar8._0_8_ = uVar21;
                bVar3 = (bool)(bVar3 & SUB168(auVar8 * ZEXT816(10),8) == 0);
                if (bVar3) {
                  uVar41 = uVar41 + 1;
                  pbVar22 = pbVar39;
                }
                else {
                  uVar50 = uVar50 - 1;
                  pbVar22 = pbVar39 + 1;
                  *pbVar39 = SUB161(auVar8 * ZEXT816(10),8) | 0x30;
                }
                uVar21 = uVar21 * 10;
                bVar18 = uVar21 != 0;
              } while ((uVar21 != 0) && (pbVar39 = pbVar22, uVar50 != 0));
            }
          }
          else {
            uVar30 = iVar2 + 0x4b;
            uVar41 = 0;
            uVar48 = uVar21 << ((ulong)uVar30 & 0x3f);
            uVar44 = uVar48;
            uVar38 = 0;
            if ((uVar30 & 0x40) == 0) {
              uVar44 = (uVar21 >> 1) >> ((ulong)~uVar30 & 0x3f);
              uVar38 = uVar48;
            }
            uVar19 = uVar38 != 0;
            uVar21 = uVar44;
            uVar32 = bVar17;
            uVar48 = uVar50;
            if ((uVar50 != 0) && (uVar38 != 0)) {
              uVar41 = 0;
              pbVar39 = pbVar24;
              do {
                auVar9._8_8_ = 0;
                auVar9._0_8_ = uVar38;
                uVar48 = SUB168(auVar9 * ZEXT816(10),8);
                auVar10._8_8_ = 0;
                auVar10._0_8_ = uVar44;
                lVar26 = SUB168(auVar10 * ZEXT816(10),8);
                uVar21 = uVar44 * 10;
                uVar44 = uVar48 + uVar21;
                if (CARRY8(uVar48,uVar21)) {
                  lVar26 = lVar26 + 1;
                }
                uVar32 = uVar32 & lVar26 == 0;
                if ((bool)uVar32) {
                  uVar41 = uVar41 + 1;
                  pbVar22 = pbVar39;
                }
                else {
                  uVar50 = uVar50 - 1;
                  pbVar22 = pbVar39 + 1;
                  *pbVar39 = (char)lVar26 + 0x30;
                }
                uVar38 = uVar38 * 10;
                uVar19 = uVar38 != 0;
                uVar21 = uVar44;
                uVar48 = uVar50;
              } while ((uVar38 != 0) && (pbVar39 = pbVar22, uVar50 != 0));
            }
            while ((uVar48 != 0 && (uVar21 != 0))) {
              auVar11._8_8_ = 0;
              auVar11._0_8_ = uVar44;
              uVar32 = uVar32 & SUB168(auVar11 * ZEXT816(10),8) == 0;
              if ((bool)uVar32) {
                uVar41 = uVar41 + 1;
                pbVar39 = pbVar22;
              }
              else {
                uVar50 = uVar50 - 1;
                pbVar39 = (byte *)((long)pbVar22 + 1);
                *pbVar22 = SUB161(auVar11 * ZEXT816(10),8) | 0x30;
              }
              uVar44 = uVar44 * 10;
              uVar21 = uVar50;
              pbVar22 = pbVar39;
              uVar48 = uVar44;
            }
            bVar18 = (bool)(uVar44 != 0 | uVar19);
          }
          *pbVar22 = 0x30;
          bVar16 = (bool)(bVar16 | bVar18);
          uVar30 = ~(uint)pbVar49 + (int)pbVar24;
          pbVar39 = pbVar22 + (uVar51 - (long)pbVar24);
          if (bVar17) {
            uVar30 = ~uVar41;
            pbVar49 = pbVar24;
          }
        }
        else {
          if ((iVar2 - (int)LZCOUNT(uVar21)) + 0xb < 0x41) {
            local_1f0[0] = bVar33;
            local_1e8 = uVar50;
            local_1e0 = param_2;
            local_1d8 = param_3;
            pbVar22 = (byte *)FUN_006203cc(uVar21 << (uVar51 & 0x3f),pbVar49);
          }
          else {
            uVar38 = uVar21 << (uVar51 & 0x3f);
            uVar51 = uVar38;
            uVar44 = 0;
            if ((uVar20 & 0x40) == 0) {
              uVar51 = (uVar21 >> 1) >> ((ulong)~uVar20 & 0x3f);
              uVar44 = uVar38;
            }
            local_1f0[0] = bVar33;
            local_1e8 = uVar50;
            local_1e0 = param_2;
            local_1d8 = param_3;
            pbVar22 = (byte *)FUN_00620ad8(uVar44,uVar51,pbVar49);
          }
          pbVar39 = pbVar22 + -(long)pbVar49;
          *pbVar22 = 0x30;
          bVar16 = false;
          uVar30 = (int)pbVar39 - 1;
          if (((byte *)(local_1e8 + 2) < pbVar39) && (pbVar49 + (long)(local_1e8 + 2) != pbVar22)) {
            pbVar24 = (byte *)((long)&uStack_15c + local_1e8 + 1);
            do {
              bVar16 = pbVar24[-1] != 0x30;
              if (bVar16) break;
              bVar17 = pbVar24 != pbVar22;
              pbVar24 = pbVar24 + 1;
            } while (bVar17);
          }
        }
        uVar21 = (long)(local_1e8 + 1) - (long)pbVar39;
        if ((byte *)(local_1e8 + 1) < pbVar39 || uVar21 == 0) {
          pbVar49[-1] = 0x30;
          pbVar24 = pbVar49 + local_1e8;
          pbVar39 = pbVar49 + local_1e8;
          pbVar22 = pbVar24 + 1;
          if (0x35 < *pbVar22) {
            do {
              bVar33 = *pbVar39;
              if (bVar33 != 0x2e) {
                if (bVar33 != 0x39) goto LAB_006eb8f8;
                *pbVar39 = 0x30;
              }
              pbVar39 = pbVar39 + -1;
            } while( true );
          }
          if (*pbVar22 == 0x35) {
            if (bVar16) {
              pbVar39 = pbVar49 + local_1e8;
              do {
                bVar33 = *pbVar39;
                if (bVar33 != 0x2e) {
                  if (bVar33 != 0x39) goto LAB_006eb8f8;
                  *pbVar39 = 0x30;
                }
                pbVar39 = pbVar39 + -1;
              } while( true );
            }
            pbVar39 = pbVar24 + -(ulong)(*pbVar24 == 0x2e);
            bVar33 = *pbVar39;
            if ((bVar33 & 1) != 0) {
              do {
                if (bVar33 != 0x2e) {
                  if (bVar33 != 0x39) goto LAB_006eb8f8;
                  *pbVar39 = 0x30;
                }
                pbVar39 = pbVar39 + -1;
                bVar33 = *pbVar39;
              } while( true );
            }
          }
          uVar21 = 0;
        }
        goto LAB_006eb924;
      }
      if ((uVar30 == 0) && ((param_2[1] >> 3 & 1) == 0)) {
        pbVar49 = &DAT_0019cb7e;
      }
      else {
        pbVar49 = &DAT_001a683f;
      }
      local_1f0[0] = bVar33;
      local_1e8 = uVar50;
      local_1e0 = param_2;
      local_1d8 = param_3;
      sVar23 = strlen((char *)pbVar49);
      pbVar24 = &UNK_001a0b85;
      if (bVar4 != 9) {
        pbVar24 = &DAT_001efede;
      }
      pbVar22 = local_1f0;
      uVar27 = 0;
      sVar29 = 4;
      uVar21 = uVar50;
      goto LAB_006ebb00;
    }
    local_b0 = bVar33;
    uStack_a8 = (ushort)uVar30;
    uStack_a6 = (undefined1)(uVar30 >> 0x10);
    uStack_a5 = (uint5)(byte)(uVar30 >> 0x18);
    uStack_a0 = SUB82(param_2,0);
    uStack_9e = (undefined1)((ulong)param_2 >> 0x10);
    uStack_9d = (undefined4)((ulong)param_2 >> 0x18);
    bStack_99 = (byte)((ulong)param_2 >> 0x38);
    uStack_98 = (undefined2)param_3;
    uStack_96 = (undefined6)((ulong)param_3 >> 0x10);
    if ((int)uVar20 < 0) {
      if (0xffffff7f < uVar20) {
        uVar41 = 0x35 - iVar2;
        uVar51 = uVar21 >> ((ulong)uVar41 & 0x3f);
        uStack_bd = 0xaaaaaaaaaaaa;
        uStack_b7 = 0xaaaa;
        uStack_c0 = 0xaa;
        uStack_bf = 0xaaaa;
        uStack_158 = 0xaa;
        uStack_157 = 0xaa;
        uStack_156 = 0xaaaaaaaaaaaa;
        local_160 = 0xaa;
        uStack_15f = 0xaa;
        uStack_15e = 0xaaaa;
        uStack_15c = 0xaaaaaaaa;
        uStack_148 = 0xaaaa;
        uStack_146 = 0xaaaaaaaaaaaa;
        local_150 = 0xaa;
        uStack_14f = 0xaa;
        uStack_14e = 0xaaaaaaaaaaaa;
        local_140 = 0xaaaa;
        uStack_13e = 0xaaaaaaaaaaaa;
        puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_130 = &DAT_aaaaaaaaaaaaaaaa;
        uStack_138 = (undefined1 *)0xaaaaaaaaaa2eaaaa;
        if (0x3f < uVar41) {
          uVar51 = 0;
        }
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
        uStack_c8 = 0xaa;
        local_c7 = 0xaaaa;
        uStack_c5 = 0xaaaaaaaaaa;
        puStack_d0 = &DAT_aaaaaaaaaaaaaaaa;
        pbVar24 = (byte *)((long)&uStack_138 + 1);
        do {
          pbVar49 = pbVar24;
          pbVar24 = pbVar49 + -1;
          *pbVar49 = (char)uVar51 + (char)(uVar51 / 10) * -10 | 0x30;
          bVar17 = 9 < uVar51;
          uVar51 = uVar51 / 10;
        } while (bVar17);
        pbVar22 = (byte *)((long)&uStack_138 + 3);
        *pbVar24 = 0x30;
        if (uVar41 < 0x41) {
          uVar21 = uVar21 << ((ulong)(iVar2 + 0xb) & 0x3f);
          pbVar39 = pbVar22;
          if (uVar30 != 0) {
            do {
              pbVar39 = pbVar22;
              if (uVar21 == 0) goto LAB_006eb580;
              auVar7._8_8_ = 0;
              auVar7._0_8_ = uVar21;
              uVar50 = uVar50 - 1;
              uVar21 = uVar21 * 10;
              pbVar39 = pbVar22 + 1;
              *pbVar22 = SUB161(auVar7 * ZEXT816(10),8) | 0x30;
              pbVar22 = pbVar39;
            } while (uVar50 != 0);
          }
          if ((long)uVar21 < 0) {
            pbVar22 = pbVar39;
            if (uVar21 == 0x8000000000000000) {
              pbVar22 = pbVar39 + -1 + -(ulong)(pbVar39[-1] == 0x2e);
              bVar33 = *pbVar22;
              if ((bVar33 & 1) != 0) {
                do {
                  if (bVar33 != 0x2e) {
                    if (bVar33 != 0x39) goto LAB_006eb578;
                    *pbVar22 = 0x30;
                  }
                  pbVar22 = pbVar22 + -1;
                  bVar33 = *pbVar22;
                } while( true );
              }
            }
            else {
              while( true ) {
                do {
                  pbVar22 = pbVar22 + -1;
                  bVar33 = *pbVar22;
                } while (bVar33 == 0x2e);
                if (bVar33 != 0x39) break;
                *pbVar22 = 0x30;
              }
LAB_006eb578:
              *pbVar22 = bVar33 + 1;
            }
          }
        }
        else {
          pbVar39 = (byte *)FUN_006ed370(uVar21,0,pbVar22,(ulong)uVar41,uVar50);
        }
LAB_006eb580:
        if (*pbVar24 != 0x30) {
          pbVar49 = pbVar24;
        }
        goto LAB_006eb58c;
      }
      FUN_006ec494(uVar21,0,0x35 - iVar2,&local_b0);
    }
    else {
      iVar2 = (iVar2 - (int)LZCOUNT(uVar21)) + 0xb;
      if (iVar2 < 0x81) {
        pbVar49 = (byte *)((long)&uStack_138 + 2);
        pbVar39 = (byte *)((long)&uStack_138 + 3);
        uStack_bd = 0xaaaaaaaaaaaa;
        uStack_b7 = 0xaaaa;
        uStack_c0 = 0xaa;
        uStack_bf = 0xaaaa;
        uStack_158 = 0xaa;
        uStack_157 = 0xaa;
        uStack_156 = 0xaaaaaaaaaaaa;
        local_160 = 0xaa;
        uStack_15f = 0xaa;
        uStack_15e = 0xaaaa;
        uStack_15c = 0xaaaaaaaa;
        uStack_148 = 0xaaaa;
        uStack_146 = 0xaaaaaaaaaaaa;
        local_150 = 0xaa;
        uStack_14f = 0xaa;
        uStack_14e = 0xaaaaaaaaaaaa;
        local_140 = 0xaaaa;
        uStack_13e = 0xaaaaaaaaaaaa;
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
        uStack_c8 = 0xaa;
        local_c7 = 0xaaaa;
        uStack_c5 = 0xaaaaaaaaaa;
        puStack_d0 = &DAT_aaaaaaaaaaaaaaaa;
        uStack_138 = (undefined1 *)0xaaaaaaaaaa2eaaaa;
        if (iVar2 < 0x41) {
          uVar21 = uVar21 << (uVar51 & 0x3f);
          do {
            bVar17 = 9 < uVar21;
            pbVar49 = pbVar49 + -1;
            *pbVar49 = (char)uVar21 + (char)(uVar21 / 10) * -10 | 0x30;
            uVar21 = uVar21 / 10;
          } while (bVar17);
        }
        else {
          uVar51 = uVar21 << (uVar51 & 0x3f);
          bVar17 = (uVar20 & 0x40) == 0;
          uVar50 = uVar51;
          if (bVar17) {
            uVar50 = (uVar21 >> 1) >> ((ulong)~uVar20 & 0x3f);
          }
          uVar21 = 0;
          if (bVar17) {
            uVar21 = uVar51;
          }
          if (uVar50 != 0) {
            do {
              uVar41 = (int)uVar21 + (int)(uVar21 / 10) * -10 + (int)(uVar50 % 10) * 6;
              uVar30 = (uVar41 & 0xff) / 10;
              uVar21 = uVar21 / 10 + (uVar50 % 10) * 0x1999999999999999 + (ulong)uVar30;
              pbVar49 = pbVar49 + -1;
              *pbVar49 = (char)uVar41 + (char)uVar30 * -10 | 0x30;
              bVar17 = 9 < uVar50;
              uVar50 = uVar50 / 10;
            } while (bVar17);
          }
          do {
            bVar17 = 9 < uVar21;
            pbVar49 = pbVar49 + -1;
            *pbVar49 = (char)uVar21 + (char)(uVar21 / 10) * -10 | 0x30;
            uVar21 = uVar21 / 10;
          } while (bVar17);
        }
LAB_006eb58c:
        lVar26 = CONCAT53(uStack_a5,CONCAT12(uStack_a6,uStack_a8));
        sVar23 = (long)pbVar39 - (long)pbVar49;
        if ((lVar26 == 0) &&
           ((*(byte *)(CONCAT17(bStack_99,CONCAT43(uStack_9d,CONCAT12(uStack_9e,uStack_a0))) + 1) >>
             3 & 1) == 0)) {
          sVar23 = sVar23 - 1;
        }
        if ((long)sVar23 < 0) goto LAB_006ebdc0;
        if (pbVar49 == (byte *)0x0 && sVar23 != 0) goto LAB_006ebe6c;
        pbVar24 = &DAT_001b3348;
        pbVar22 = &local_b0;
        uVar21 = (long)&uStack_138 + (lVar26 - (long)pbVar39) + 3;
        uVar27 = 0;
        sVar29 = 0;
        goto LAB_006ebb00;
      }
      pcVar28 = FUN_006ecb04;
      local_160 = (byte)&local_b0;
      uStack_15f = (undefined1)((ulong)&local_b0 >> 8);
      uStack_15e = (undefined2)((ulong)&local_b0 >> 0x10);
      uStack_15c = (undefined4)((ulong)&local_b0 >> 0x20);
LAB_006ea5ec:
      FUN_006ec5f4(uVar21,0,uVar51,&local_160,pcVar28);
    }
    goto LAB_006ebb04;
  }
  if (bVar43 != 0xc) {
    if (bVar43 != 0xe) goto LAB_006ebb08;
    iVar35 = iVar2 + 0xb;
    if (0 < (long)uVar21) {
      iVar1 = iVar2 + 10;
      iVar34 = iVar35;
      if (iVar2 + 0x409 < 0 == SCARRY4(iVar1,0x3ff)) {
        iVar1 = -0x3ff;
      }
      do {
        iVar35 = iVar34 + -1;
        if (iVar35 == -0x3ff || iVar34 + 0x3fe < 0 != SCARRY4(iVar35,0x3ff)) {
          uVar44 = 0;
          uVar51 = uVar21 >> ((ulong)(-iVar1 - 0x3ff) & 0x3f);
          iVar2 = -0x3fe;
          goto joined_r0x006eb9ec;
        }
        uVar21 = uVar21 * 2;
        iVar34 = iVar35;
      } while (0 < (long)uVar21);
    }
    uVar44 = uVar21 >> 0x3f;
    uVar51 = uVar21 << 1;
    iVar2 = 0;
    if (uVar21 != 0) {
      iVar2 = iVar35 + -1;
    }
joined_r0x006eb9ec:
    uVar21 = uVar51;
    if (-1 < (int)uVar41) {
      uVar38 = 0;
      if (uVar50 < 0x11) {
        uVar38 = 0x10 - uVar50;
      }
      if (uVar41 < 0x10) {
        uVar21 = uVar38 * 4;
        uVar48 = (uVar51 << (uVar38 * -4 & 0x3f)) >> (uVar38 * -4 & 0x3f);
        uVar46 = 8L << ((ulong)((int)uVar21 - 4) & 0x3f);
        if (uVar48 == uVar46) {
          uVar30 = (uint)uVar44;
          if (uVar38 != 0x10) {
            uVar30 = (uint)((uVar51 & 0xfL << (uVar21 & 0x3f)) >> (uVar21 & 0x3f));
          }
          if ((uVar30 & 1) != 0) {
LAB_006eae0c:
            lVar26 = 0;
            if (uVar38 < 0x10) {
              lVar26 = 1L << (uVar21 & 0x3f);
            }
            bVar17 = (long)uVar51 < 0;
            uVar51 = uVar51 + lVar26;
            uVar30 = (uint)(0xf < uVar38);
            if (bVar17 && (uVar51 != 0xffffffffffffffff &&
                          (long)(uVar51 + 1) < 0 == SCARRY8(uVar51,1))) {
              uVar30 = 1;
            }
            uVar44 = (ulong)((uint)uVar44 + uVar30);
          }
        }
        else if (uVar46 < uVar48) goto LAB_006eae0c;
      }
      else {
        uVar38 = 0;
      }
      uVar21 = 0xffffffffffffffff;
      if (uVar41 < 0x10) {
        uVar21 = ~(0xffffffffffffffffU >> (uVar38 * -4 & 0x3f));
      }
      uVar21 = uVar21 & uVar51;
      uVar51 = uVar50;
    }
    lVar26 = 0;
    if (bVar4 != 0xf) {
      lVar26 = 0x10;
    }
    local_b0 = 0x30;
    uStack_af = 0x58;
    if (bVar4 != 0xf) {
      uStack_af = 0x78;
    }
    cStack_ae = "0123456789ABCDEF0123456789abcdef"[uVar44 + lVar26];
    uStack_98 = 0xaaaa;
    uStack_96 = 0xaaaaaaaaaaaa;
    uStack_9d = 0xaaaaaaaa;
    bStack_99 = 0xaa;
    uStack_a5 = 0xaaaaaaaaaa;
    uStack_a0 = 0xaaaa;
    uStack_9e = 0xaa;
    uStack_ad = 0xaa;
    uStack_ac = 0xaaaaaaaa;
    uStack_a8 = 0xaaaa;
    uStack_a6 = 0xaa;
    if ((uVar51 == 0) && ((param_2[1] >> 3 & 1) == 0)) {
      pcVar40 = (char *)((ulong)&local_b0 | 3);
    }
    else {
      pcVar40 = (char *)&uStack_ac;
      uStack_ad = 0x2e;
    }
    lVar42 = 0;
    for (; uVar21 != 0; uVar21 = uVar21 << 4) {
      lVar42 = lVar42 + 1;
      *pcVar40 = "0123456789ABCDEF0123456789abcdef"[(uVar21 >> 0x3c) + lVar26];
      pcVar40 = pcVar40 + 1;
    }
    sVar23 = (long)pcVar40 - (long)&local_b0;
    local_1f0[0] = bVar33;
    local_1e8 = uVar50;
    local_1e0 = param_2;
    local_1d8 = param_3;
    if ((long)sVar23 < 0) goto LAB_006ebdc0;
    uVar21 = 0;
    if (-1 < (int)uVar41) {
      uVar21 = uVar50 - lVar42;
    }
    local_160 = 0x50;
    if (bVar4 != 0xf) {
      local_160 = 0x70;
    }
    uStack_15f = 0x2b;
    if (iVar2 == -1 || iVar2 + 1 < 0 != SCARRY4(iVar2,1)) {
      uStack_15f = 0x2d;
    }
    uStack_146 = 0xaaaaaaaaaaaa;
    local_140 = 0xaaaa;
    uStack_14e = 0xaaaaaaaaaaaa;
    uStack_148 = 0xaaaa;
    uStack_156 = 0xaaaaaaaaaaaa;
    local_150 = 0xaa;
    uStack_14f = 0xaa;
    uStack_15e = 0xaaaa;
    uStack_15c = 0xaaaaaaaa;
    uStack_158 = 0xaa;
    uStack_157 = 0xaa;
    iVar35 = -iVar2;
    if (-1 < iVar2) {
      iVar35 = iVar2;
    }
    FUN_0062024c(iVar35,(ulong)&local_160 | 2);
    sVar29 = strlen((char *)&local_160);
    pbVar22 = local_1f0;
    pbVar49 = &local_b0;
    pbVar24 = &local_160;
    uVar27 = 2;
    goto LAB_006ebb00;
  }
  if (uVar30 == 0) {
    uVar50 = 1;
  }
  if (0x28 < uVar50) {
LAB_006ea6fc:
    uVar30 = *(uint *)(param_2 + 4) & ((int)*(uint *)(param_2 + 4) >> 0x1f ^ 0xffffffffU);
    if (uVar41 == 0xffffffff || (int)(uVar41 + 1) < 0 != SCARRY4(uVar41,1)) {
      uVar41 = 0xffffffff;
    }
    __dest = (void *)((ulong)&local_160 | 1);
    local_160 = 0x25;
    uStack_148 = 0xaaaa;
    uStack_146 = 0xaaaaaaaaaaaa;
    uStack_14f = 0xaa;
    uStack_14e = 0xaaaaaaaaaaaa;
    uStack_157 = 0xaa;
    uStack_156 = 0xaaaaaaaaaaaa;
    local_150 = 0xaa;
    uStack_15f = 0xaa;
    uStack_15e = 0xaaaa;
    uStack_15c = 0xaaaaaaaa;
    uStack_158 = 0xaa;
    local_178 = local_170;
    FUN_006ee7c8(&local_b0,param_2[1]);
    sVar23 = (size_t)(char)bStack_99;
    if ((long)sVar23 < 0) {
      __src = (void *)CONCAT44(uStack_ac,
                               CONCAT13(uStack_ad,CONCAT12(cStack_ae,CONCAT11(uStack_af,local_b0))))
      ;
      sVar23 = CONCAT53(uStack_a5,CONCAT12(uStack_a6,uStack_a8));
      memcpy(__dest,__src,sVar23);
      operator_delete(__src);
    }
    else {
      memcpy(__dest,&local_b0,sVar23);
    }
    bVar33 = *param_2;
    puVar37 = (undefined2 *)((long)__dest + sVar23);
    *(undefined1 *)(puVar37 + 1) = 0x2a;
    *puVar37 = 0x2e2a;
    if ((ulong)bVar33 < 0x13) {
      uVar32 = (&DAT_00208334)[bVar33];
    }
    else {
      uVar32 = 0;
    }
    *(undefined1 *)((long)puVar37 + 3) = uVar32;
    *(undefined1 *)(puVar37 + 2) = 0;
    pcVar40 = (char *)operator_new(0x208);
    local_b0 = (byte)pcVar40;
    uStack_af = (undefined1)((ulong)pcVar40 >> 8);
    cStack_ae = (char)((ulong)pcVar40 >> 0x10);
    uStack_ad = (undefined1)((ulong)pcVar40 >> 0x18);
    uStack_ac = (undefined4)((ulong)pcVar40 >> 0x20);
    uStack_a0 = (undefined2)_UNK_001f2bc8;
    uStack_9e = (undefined1)((ulong)_UNK_001f2bc8 >> 0x10);
    uStack_9d = (undefined4)((ulong)_UNK_001f2bc8 >> 0x18);
    bStack_99 = (byte)((ulong)_UNK_001f2bc8 >> 0x38);
    uStack_a8 = (ushort)_DAT_001f2bc0;
    uStack_a6 = (undefined1)((ulong)_DAT_001f2bc0 >> 0x10);
    uStack_a5 = (uint5)((ulong)_DAT_001f2bc0 >> 0x18);
    memset(pcVar40,0,0x201);
    uVar20 = snprintf(pcVar40,0x200,(char *)&local_160,param_1,(ulong)uVar30,(ulong)uVar41);
    if (-1 < (int)uVar20) {
      do {
        bVar33 = bStack_99;
        lVar42 = (long)(int)(uint)bStack_99;
        lVar26 = (ulong)uVar20 + 1;
        if (0x16U - lVar42 < (ulong)(lVar26 - lVar42)) {
          FUN_0054774c(&local_b0,0x16,(ulong)uVar20 - 0x15,lVar42,lVar42,0,0);
          uStack_a8 = (ushort)bVar33;
          uStack_a6 = 0;
          uStack_a5 = 0;
        }
        pbVar49 = (byte *)CONCAT44(uStack_ac,
                                   CONCAT13(uStack_ad,
                                            CONCAT12(cStack_ae,CONCAT11(uStack_af,local_b0))));
        if ((bStack_99 & 0x80) == 0) {
          pbVar49 = &local_b0;
        }
        memset(pbVar49 + lVar42,0,lVar26 - lVar42);
        bStack_99 = (byte)lVar26 & 0x7f;
        pbVar49[lVar26] = 0;
        sVar23 = CONCAT53(uStack_a5,CONCAT12(uStack_a6,uStack_a8));
        pbVar49 = (byte *)CONCAT44(uStack_ac,
                                   CONCAT13(uStack_ad,
                                            CONCAT12(cStack_ae,CONCAT11(uStack_af,local_b0))));
        if (-1 < (char)bStack_99) {
          sVar23 = (ulong)bStack_99;
          pbVar49 = &local_b0;
        }
        uVar20 = snprintf((char *)pbVar49,sVar23,(char *)&local_160,param_1,(ulong)uVar30,
                          (ulong)uVar41);
      } while (-1 < (int)uVar20);
    }
    uVar31 = 0;
    goto LAB_006ebb08;
  }
  pbVar49 = (byte *)((long)&uStack_1a8 + 1);
  pbVar24 = (byte *)(uVar50 - 1);
  local_178 = pbVar49;
  local_170 = pbVar49;
  if ((int)uVar20 < 0) {
    uVar30 = 0x35 - iVar2;
    uVar51 = (ulong)uVar30;
    pbVar22 = local_170;
    if ((int)uVar30 < 0x3d) {
      uVar44 = uVar21 >> ((ulong)uVar30 & 0x3f);
      uVar38 = ~(-1L << ((ulong)uVar30 & 0x3f));
      pbVar39 = local_178;
      if (uVar44 == 0) {
LAB_006eb298:
        uVar21 = uVar38 & uVar21;
        pbVar25 = (byte *)0x0;
        if (uVar21 != 0) {
          do {
            pbVar25 = (byte *)(ulong)((int)pbVar25 - 1);
            uVar21 = uVar21 * 10;
          } while (uVar21 < uVar38 || uVar21 - uVar38 == 0);
        }
        uVar44 = uVar21 & uVar38;
        pbVar49 = local_178 + -1;
        local_178 = local_178 + -1;
        *pbVar49 = (char)(uVar21 >> (uVar51 & 0x3f)) + 0x30;
        pbVar49 = local_170;
        local_170 = local_170 + 1;
        *pbVar49 = 0x2e;
        pbVar5 = pbVar24;
        pbVar22 = local_170;
      }
      else {
        do {
          local_178 = pbVar39;
          pbVar39 = local_178 + -1;
          local_178[-1] = (char)uVar44 + (char)(uVar44 / 10) * -10 | 0x30;
          bVar17 = 9 < uVar44;
          uVar44 = uVar44 / 10;
        } while (bVar17);
        pbVar45 = local_178 + -2;
        local_178[-2] = *pbVar39;
        local_178[-1] = 0x2e;
        uVar44 = uVar38 & uVar21;
        local_178 = pbVar45;
        if (pbVar49 == pbVar39) goto LAB_006eb298;
        pbVar25 = pbVar49 + ~(ulong)pbVar39;
        pbVar5 = pbVar24 + -(long)pbVar25;
        if (pbVar24 < pbVar25) {
          lVar26 = -((long)pbVar25 - (long)pbVar24);
          pbVar22 = pbVar49 + lVar26;
          local_170 = pbVar22;
          if (*pbVar22 < 0x36) {
            if (*pbVar22 != 0x35) goto LAB_006eb7e8;
            if (uVar44 == 0) {
              if ((long)pbVar25 - (long)pbVar24 != 1) {
                pbVar24 = (byte *)((long)&uStack_1a8 + lVar26 + 2);
                for (uVar21 = (ulong)(pbVar49 + (~(ulong)pbVar39 - uVar50)) & 3; uVar21 != 0;
                    uVar21 = uVar21 - 1) {
                  if (*pbVar24 != 0x30) goto LAB_006eb018;
                  pbVar24 = pbVar24 + 1;
                }
                if ((byte *)0x2 < pbVar49 + (~(ulong)pbVar39 - uVar50) + -1) {
                  do {
                    if ((((*pbVar24 != 0x30) || (pbVar24[1] != 0x30)) || (pbVar24[2] != 0x30)) ||
                       (pbVar24[3] != 0x30)) goto LAB_006eb018;
                    pbVar24 = pbVar24 + 4;
                  } while (pbVar24 != pbVar49);
                }
              }
              bVar43 = *(byte *)((long)&uStack_1a8 + lVar26);
              if (bVar43 == 0x2e) {
                bVar43 = *(byte *)((long)&local_1b0 + lVar26 + 7);
              }
              if ((bVar43 & 1) == 0) goto LAB_006eb7e8;
            }
          }
LAB_006eb018:
          pbVar49 = (byte *)((long)&uStack_1a8 + lVar26);
          if (pbVar45 <= pbVar49) {
            do {
              bVar43 = *pbVar49;
              if (bVar43 != 0x2e) {
                if (bVar43 != 0x39) goto LAB_006eb7e0;
                *pbVar49 = 0x30;
              }
              pbVar49 = pbVar49 + -1;
            } while (pbVar45 <= pbVar49);
            goto LAB_006ebcb0;
          }
          goto LAB_006ebcb4;
        }
      }
      for (; pbVar5 != (byte *)0x0; pbVar5 = pbVar5 + -1) {
        uVar21 = uVar44 * 10;
        local_170 = pbVar22 + 1;
        uVar44 = uVar21 & uVar38;
        *pbVar22 = (char)(uVar21 >> (uVar51 & 0x3f)) + 0x30;
        pbVar22 = local_170;
      }
      uVar30 = (uint)(uVar44 * 10 >> (uVar51 & 0x3f)) & 0xff;
      local_170 = pbVar22;
      if (uVar30 < 6) {
        if (uVar30 != 5) {
LAB_006eb7e8:
          uVar30 = (uint)pbVar25;
          goto joined_r0x006ebdb8;
        }
        if ((uVar44 * 10 & uVar38) == 0) {
          bVar43 = pbVar22[-1];
          if (bVar43 == 0x2e) {
            bVar43 = pbVar22[-2];
          }
          if ((bVar43 & 1) == 0) goto LAB_006eb7e8;
        }
      }
      pbVar49 = pbVar22 + -1;
      if (local_178 <= pbVar49) {
        do {
          bVar43 = *pbVar49;
          if (bVar43 != 0x2e) {
            if (bVar43 != 0x39) goto LAB_006eb7e0;
            *pbVar49 = 0x30;
          }
          pbVar49 = pbVar49 + -1;
        } while (local_178 <= pbVar49);
LAB_006ebcb0:
        pbVar22 = pbVar49 + 1;
      }
      goto LAB_006ebcb4;
    }
    if (0x7c < uVar30) goto LAB_006ea6fc;
    uVar48 = -1L << (uVar51 & 0x3f);
    bVar17 = (uVar30 & 0x40) == 0;
    uVar44 = uVar48;
    uVar38 = 0;
    if (bVar17) {
      uVar44 = uVar48 | 0x7fffffffffffffffU >> ((ulong)~uVar30 & 0x3f);
      uVar38 = uVar21 >> (uVar51 & 0x3f);
    }
    uVar46 = 0;
    if (bVar17) {
      uVar46 = uVar48;
    }
    uVar44 = ~uVar44;
    uVar46 = ~uVar46;
    if (uVar38 == 0) {
      uVar21 = uVar46 & uVar21;
      if (uVar21 == 0) {
        pbVar25 = (byte *)0x0;
        uVar38 = 0;
        uVar21 = 0;
      }
      else {
        uVar38 = 0;
        pbVar25 = (byte *)0x0;
        do {
          auVar12._8_8_ = 0;
          auVar12._0_8_ = uVar21;
          pbVar25 = (byte *)(ulong)((int)pbVar25 - 1);
          uVar21 = uVar21 * 10;
          uVar38 = SUB168(auVar12 * ZEXT816(10),8) + uVar38 * 10;
        } while (CARRY8(uVar44,~uVar38) || CARRY8(uVar44 + ~uVar38,(ulong)(uVar21 <= uVar46)));
      }
      uVar48 = uVar38 & uVar44;
      local_178 = (byte *)&uStack_1a8;
      bVar43 = (byte)(uVar38 >> (uVar51 & 0x3f));
      if ((uVar30 & 0x40) == 0) {
        bVar43 = (byte)((uVar38 << 1) << ((ulong)~uVar30 & 0x3f)) |
                 (byte)(uVar21 >> (uVar51 & 0x3f));
      }
      local_170 = (byte *)((long)&uStack_1a8 + 2);
      uVar21 = uVar21 & uVar46;
      uStack_1a8 = (undefined1 *)CONCAT62(0xaaaaaaaaaaaa,CONCAT11(0x2e,bVar43 + 0x30));
      pbVar22 = local_170;
joined_r0x006ebb98:
      for (; pbVar24 != (byte *)0x0; pbVar24 = pbVar24 + -1) {
        auVar13._8_8_ = 0;
        auVar13._0_8_ = uVar21;
        uVar47 = uVar21 * 10;
        uVar38 = SUB168(auVar13 * ZEXT816(10),8) + uVar48 * 10;
        uVar48 = uVar38 & uVar44;
        uVar21 = uVar47 & uVar46;
        bVar43 = (byte)(uVar38 >> (uVar51 & 0x3f));
        if ((uVar30 & 0x40) == 0) {
          bVar43 = (byte)(uVar38 * 2 << ((ulong)~uVar30 & 0x3f)) | (byte)(uVar47 >> (uVar51 & 0x3f))
          ;
        }
        local_170 = pbVar22 + 1;
        *pbVar22 = bVar43 + 0x30;
        pbVar22 = local_170;
      }
      auVar14._8_8_ = 0;
      auVar14._0_8_ = uVar21;
      uVar38 = SUB168(auVar14 * ZEXT816(10),8) + uVar48 * 10;
      uVar41 = (uint)(uVar38 >> (uVar51 & 0x3f));
      if ((uVar30 & 0x40) == 0) {
        uVar41 = (uint)(uVar38 * 2 << ((ulong)~uVar30 & 0x3f)) |
                 (uint)(uVar21 * 10 >> (uVar51 & 0x3f));
      }
      local_170 = pbVar22;
      if (5 < (uVar41 & 0xff)) {
LAB_006ebc6c:
        pbVar49 = pbVar22 + -1;
        if (local_178 <= pbVar49) {
          do {
            bVar43 = *pbVar49;
            if (bVar43 != 0x2e) {
              if (bVar43 != 0x39) goto LAB_006eb1d4;
              *pbVar49 = 0x30;
            }
            pbVar49 = pbVar49 + -1;
          } while (local_178 <= pbVar49);
          goto LAB_006ebcb0;
        }
        goto LAB_006ebcb4;
      }
      if ((uVar41 & 0xff) == 5) {
        if ((uVar21 * 10 & uVar46) == 0 && (uVar38 & uVar44) == 0) {
          bVar43 = pbVar22[-1];
          if (bVar43 == 0x2e) {
            bVar43 = pbVar22[-2];
          }
          if ((bVar43 & 1) == 0) goto LAB_006ebce0;
        }
        goto LAB_006ebc6c;
      }
      goto LAB_006ebce0;
    }
    local_1b0 = (undefined1 *)(CONCAT17((char)uVar38,0xaaaaaaaaaaaaaa) | 0x3000000000000000);
    pbVar39 = (byte *)((long)&local_1b0 + 7);
    uStack_1a8 = (undefined1 *)0xaaaaaaaaaaaaaa2e;
    pbVar25 = pbVar49 + ~(ulong)&uStack_1a8;
    uVar21 = uVar46 & uVar21;
    local_178 = pbVar39;
    bVar17 = pbVar25 <= pbVar24;
    pbVar24 = pbVar24 + -(long)pbVar25;
    if (bVar17) {
      uVar48 = 0;
      goto joined_r0x006ebb98;
    }
    pbVar49 = pbVar49 + (long)pbVar24;
    local_170 = pbVar49;
    if (*pbVar49 < 0x36) {
      if (*pbVar49 != 0x35) goto LAB_006ebce0;
      if (uVar21 == 0) {
        bVar43 = *(byte *)((long)&uStack_1a8 + (long)pbVar24);
        if (bVar43 == 0x2e) {
          bVar43 = pbVar24[(long)&local_1b0 + 7];
        }
        if ((bVar43 & 1) == 0) goto LAB_006ebce0;
      }
    }
    pbVar24 = (byte *)((long)&uStack_1a8 + (long)pbVar24);
    uVar30 = (uint)pbVar25;
    if (pbVar39 <= pbVar24) {
      do {
        pbVar49 = pbVar24;
        bVar43 = *pbVar49;
        if (bVar43 != 0x2e) {
          if (bVar43 != 0x39) {
            *pbVar49 = bVar43 + 1;
            goto joined_r0x006eb214;
          }
          *pbVar49 = 0x30;
          pbVar39 = local_178;
        }
        pbVar24 = pbVar49 + -1;
      } while (pbVar39 <= pbVar24);
    }
    uVar30 = uVar30 | 1;
    pbVar25 = (byte *)(ulong)uVar30;
    *pbVar24 = 0x31;
    local_178 = pbVar24;
    bVar43 = *pbVar49;
    *pbVar49 = pbVar49[1];
    pbVar49[1] = bVar43;
    local_170 = local_170 + -1;
  }
  else {
    if (0x40 < iVar2) {
      if (0x4b < uVar20) goto LAB_006ea6fc;
      uVar44 = uVar21 << (uVar51 & 0x3f);
      bVar17 = (uVar20 & 0x40) == 0;
      uVar51 = uVar44;
      if (bVar17) {
        uVar51 = (uVar21 >> 1) >> ((ulong)~uVar20 & 0x3f);
      }
      uVar21 = 0;
      if (bVar17) {
        uVar21 = uVar44;
      }
      pbVar22 = local_178;
      if (uVar21 == 0 && uVar51 == 0) {
        pbVar25 = (byte *)0xffffffff;
        pbVar39 = (byte *)0xffffffffffffffff;
      }
      else {
        do {
          local_178 = pbVar22;
          pbVar39 = local_178;
          uVar38 = uVar21 >> 1 | uVar51 << 0x3f;
          uVar48 = uVar51 >> 1;
          uVar44 = uVar38 + uVar48;
          if (CARRY8(uVar38,uVar48)) {
            uVar44 = uVar44 + 1;
          }
          uVar47 = uVar38 - uVar44 % 5;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = uVar47;
          bVar17 = uVar21 < 10;
          uVar46 = uVar51 + !bVar17;
          pbVar22 = local_178 + -1;
          uVar51 = SUB168(auVar6 * ZEXT816(0xcccccccccccccccd),8) + uVar47 * -0x3333333333333334 +
                   (uVar48 - (uVar38 < uVar44 % 5)) * -0x3333333333333333;
          local_178[-1] = (char)uVar21 + (char)(uVar47 * -0x3333333333333333) * -10 | 0x30;
          uVar21 = uVar47 * -0x3333333333333333;
        } while (!CARRY8(~uVar46,(ulong)bVar17));
        local_178 = local_178 + -2;
        pbVar39[-2] = *pbVar22;
        pbVar25 = pbVar49 + ~(ulong)pbVar22;
        lVar26 = (long)pbVar24 - (long)pbVar25;
        pbVar39[-1] = 0x2e;
        pbVar39 = pbVar25;
        pbVar49 = local_170;
        if (pbVar25 <= pbVar24) {
          for (; local_170 = pbVar49, lVar26 != 0; lVar26 = lVar26 + -1) {
            local_170 = pbVar49 + 1;
            *pbVar49 = 0x30;
            pbVar49 = local_170;
          }
          goto LAB_006eb7e8;
        }
      }
      pbVar22 = pbVar49 + -((long)pbVar39 - (long)pbVar24);
      local_170 = pbVar22;
      if (0x35 < *pbVar22) {
LAB_006eb358:
        pbVar49 = pbVar22 + -1;
        pbVar24 = local_178;
        if (local_178 <= pbVar49) {
          do {
            bVar43 = *pbVar49;
            if (bVar43 != 0x2e) {
              if (bVar43 != 0x39) goto LAB_006eb7e0;
              *pbVar49 = 0x30;
              pbVar24 = local_178;
            }
            pbVar49 = pbVar49 + -1;
          } while (pbVar24 <= pbVar49);
          goto LAB_006ebcb0;
        }
        goto LAB_006ebcb4;
      }
      if (*pbVar22 == 0x35) {
        if ((long)pbVar39 - (long)pbVar24 != 1) {
          pbVar24 = pbVar22;
          for (uVar21 = (long)pbVar39 - uVar50 & 3; pbVar24 = pbVar24 + 1, uVar21 != 0;
              uVar21 = uVar21 - 1) {
            if (*pbVar24 != 0x30) goto LAB_006eb358;
          }
          if (2 < ((long)pbVar39 - uVar50) - 1) {
            do {
              if (((*pbVar24 != 0x30) || (pbVar24[1] != 0x30)) ||
                 ((pbVar24[2] != 0x30 || (pbVar24[3] != 0x30)))) goto LAB_006eb358;
              pbVar24 = pbVar24 + 4;
            } while (pbVar24 != pbVar49);
          }
        }
        bVar43 = pbVar22[-1];
        if (bVar43 == 0x2e) {
          bVar43 = pbVar22[-2];
        }
        if ((bVar43 & 1) != 0) goto LAB_006eb358;
      }
      goto LAB_006eb7e8;
    }
    uVar21 = uVar21 << (uVar51 & 0x3f);
    pbVar22 = local_178;
    if (uVar21 == 0) {
      pbVar25 = (byte *)0xffffffff;
      pbVar39 = (byte *)0xffffffffffffffff;
    }
    else {
      do {
        local_178 = pbVar22;
        pbVar39 = local_178;
        pbVar22 = local_178 + -1;
        local_178[-1] = (char)uVar21 + (char)(uVar21 / 10) * -10 | 0x30;
        bVar17 = 9 < uVar21;
        uVar21 = uVar21 / 10;
      } while (bVar17);
      local_178 = local_178 + -2;
      pbVar39[-2] = *pbVar22;
      pbVar25 = pbVar49 + ~(ulong)pbVar22;
      lVar26 = (long)pbVar24 - (long)pbVar25;
      pbVar39[-1] = 0x2e;
      pbVar39 = pbVar25;
      pbVar49 = local_170;
      if (pbVar25 <= pbVar24) {
        for (; local_170 = pbVar49, lVar26 != 0; lVar26 = lVar26 + -1) {
          local_170 = pbVar49 + 1;
          *pbVar49 = 0x30;
          pbVar49 = local_170;
        }
        goto LAB_006ebce0;
      }
    }
    pbVar22 = pbVar49 + -((long)pbVar39 - (long)pbVar24);
    local_170 = pbVar22;
    if (*pbVar22 < 0x36) {
      if (*pbVar22 == 0x35) {
        if ((long)pbVar39 - (long)pbVar24 != 1) {
          pbVar24 = pbVar22;
          for (uVar21 = (long)pbVar39 - uVar50 & 3; pbVar24 = pbVar24 + 1, uVar21 != 0;
              uVar21 = uVar21 - 1) {
            if (*pbVar24 != 0x30) goto LAB_006eb194;
          }
          if (2 < ((long)pbVar39 - uVar50) - 1) {
            do {
              if (((*pbVar24 != 0x30) || (pbVar24[1] != 0x30)) ||
                 ((pbVar24[2] != 0x30 || (pbVar24[3] != 0x30)))) goto LAB_006eb194;
              pbVar24 = pbVar24 + 4;
            } while (pbVar24 != pbVar49);
          }
        }
        bVar43 = pbVar22[-1];
        if (bVar43 == 0x2e) {
          bVar43 = pbVar22[-2];
        }
        if ((bVar43 & 1) != 0) goto LAB_006eb194;
      }
      goto LAB_006ebce0;
    }
LAB_006eb194:
    pbVar49 = pbVar22 + -1;
    pbVar24 = local_178;
    if (local_178 <= pbVar49) {
      do {
        bVar43 = *pbVar49;
        if (bVar43 != 0x2e) {
          if (bVar43 != 0x39) goto LAB_006eb1d4;
          *pbVar49 = 0x30;
          pbVar24 = local_178;
        }
        pbVar49 = pbVar49 + -1;
      } while (pbVar24 <= pbVar49);
      goto LAB_006ebcb0;
    }
LAB_006ebcb4:
    pbVar25 = (byte *)(ulong)((int)pbVar25 + 1);
    *pbVar49 = 0x31;
    local_178 = pbVar49;
    bVar43 = *pbVar22;
    *pbVar22 = pbVar22[1];
    pbVar22[1] = bVar43;
    local_170 = local_170 + -1;
LAB_006ebce0:
    uVar30 = (uint)pbVar25;
  }
joined_r0x006ebdb8:
  if (-1 < (int)uVar30) goto LAB_006ebce4;
LAB_006eb7ec:
  uVar30 = (uint)pbVar25;
  if (0xfffffffb < uVar30) {
    local_178[1] = *local_178;
    pbVar49 = local_178;
    for (; uVar30 != 0xffffffff; uVar30 = uVar30 + 1) {
      local_178 = pbVar49 + -1;
      *pbVar49 = 0x30;
      pbVar49 = local_178;
    }
    pbVar25 = (byte *)0x0;
    local_178 = pbVar49 + -1;
    *pbVar49 = 0x2e;
    *local_178 = 0x30;
  }
  goto LAB_006ebd0c;
LAB_006eb8f8:
  uVar21 = 0;
  *pbVar39 = bVar33 + 1;
  pbVar24 = pbVar49 + -1;
  if (*pbVar24 == 0x31) {
    uVar30 = uVar30 + 1;
    pbVar49 = pbVar49 + -1;
  }
  pbVar22 = pbVar22 + -(ulong)(*pbVar24 == 0x31);
LAB_006eb924:
  if ((local_1e8 != 0) || ((local_1e0[1] >> 3 & 1) != 0)) {
    bVar33 = *pbVar49;
    *pbVar49 = 0x2e;
    pbVar49 = pbVar49 + -1;
    *pbVar49 = bVar33;
  }
  local_b0 = 0x45;
  if (bVar4 != 9) {
    local_b0 = 0x65;
  }
  uStack_af = 0x2b;
  if (uVar30 == 0xffffffff || (int)(uVar30 + 1) < 0 != SCARRY4(uVar30,1)) {
    uStack_af = 0x2d;
  }
  uVar41 = -uVar30;
  if (-1 < (int)uVar30) {
    uVar41 = uVar30;
  }
  uStack_96 = 0xaaaaaaaaaaaa;
  uStack_90 = 0xaaaa;
  uStack_9e = 0xaa;
  uStack_9d = 0xaaaaaaaa;
  bStack_99 = 0xaa;
  uStack_98 = 0xaaaa;
  uStack_a6 = 0xaa;
  uStack_a5 = 0xaaaaaaaaaa;
  uStack_a0 = 0xaaaa;
  cStack_ae = -0x56;
  uStack_ad = 0xaa;
  uStack_ac = 0xaaaaaaaa;
  uStack_a8 = 0xaaaa;
  if ((int)uVar41 < 10) {
    uVar50 = (ulong)&local_b0 | 3;
    cStack_ae = '0';
  }
  else {
    uVar50 = (ulong)&local_b0 | 2;
  }
  lVar26 = FUN_0062024c(uVar41,uVar50);
  sVar23 = (long)pbVar22 - (long)pbVar49;
  if ((long)sVar23 < 0) goto LAB_006ebdc0;
  if ((pbVar22 != (byte *)0x0) && (pbVar49 == (byte *)0x0)) goto LAB_006ebe6c;
  sVar29 = lVar26 - (long)&local_b0;
  if ((long)sVar29 < 0) goto LAB_006ebdc0;
  pbVar22 = local_1f0;
  pbVar24 = &local_b0;
  uVar27 = 0;
LAB_006ebb00:
  FUN_006ed4bc(pbVar22,pbVar49,sVar23,uVar27,uVar21,pbVar24,sVar29);
  goto LAB_006ebb04;
LAB_006eb7e0:
  *pbVar49 = bVar43 + 1;
  goto LAB_006eb7e8;
LAB_006eb1d4:
  *pbVar49 = bVar43 + 1;
  uVar30 = (uint)pbVar25;
joined_r0x006eb214:
  if ((int)uVar30 < 0) goto LAB_006eb7ec;
LAB_006ebce4:
  if ((((ulong)pbVar25 & 0xffffffff) < uVar50) && ((int)pbVar25 != 0)) {
    FUN_006ebf1c(local_178 + 1,local_178 + 2,local_178 + 2 + ((ulong)pbVar25 & 0xffffffff));
    pbVar25 = (byte *)0x0;
  }
LAB_006ebd0c:
  pbVar49 = local_170;
  if ((param_2[1] >> 3 & 1) == 0) {
    do {
      local_170 = pbVar49;
      pbVar49 = local_170 + -1;
    } while (*pbVar49 == 0x30);
    if (*pbVar49 == 0x2e) {
      local_170 = pbVar49;
    }
  }
  if ((int)pbVar25 != 0) {
    uVar31 = 0x45;
    if ((*param_2 & 0xf9) != 9 && *param_2 != 7) {
      uVar31 = 0x65;
    }
    FUN_006ec25c(pbVar25,uVar31,&local_1d0);
  }
  if ((long)local_170 - (long)local_178 < 0) {
LAB_006ebdc0:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/string_view:331: libc++ Hardening assertion __len <= static_cast<size_type>(numeric_limits<difference_type>::max()) failed: string_view::string_view(_CharT *, size_t): length does not fit in difference_type\n"
              );
  }
  if ((local_178 == (byte *)0x0) && (local_170 != (byte *)0x0)) {
LAB_006ebe6c:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/string_view:333: libc++ Hardening assertion __len == 0 || __s != nullptr failed: string_view::string_view(_CharT *, size_t): received nullptr\n"
              );
  }
  FUN_006ec340(bVar33,local_178,(long)local_170 - (long)local_178,param_2,param_3);
LAB_006ebb04:
  uVar31 = 1;
LAB_006ebb08:
  if (*(long *)(lVar15 + 0x28) == local_88) {
    return uVar31;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006ebf14  thunk_FUN_006ea418 =====

void thunk_FUN_006ea418(void)

{
  FUN_006ea418();
  return;
}


// ===== 006ebf1c  FUN_006ebf1c =====

undefined8 * FUN_006ebf1c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  size_t __n;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  ulong uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  
  puVar22 = param_3;
  if ((param_1 != param_2) && (puVar22 = param_1, param_2 != param_3)) {
    if ((undefined8 *)((long)param_1 + 1) == param_2) {
      uVar1 = *(undefined1 *)param_1;
      memmove(param_1,(undefined1 *)((long)param_1 + 1),(long)param_3 - (long)param_2);
      puVar22 = (undefined8 *)((long)param_1 + ((long)param_3 - (long)param_2));
      *(undefined1 *)puVar22 = uVar1;
    }
    else if ((undefined8 *)((long)param_2 + 1) == param_3) {
      uVar1 = *(undefined1 *)((long)param_3 + -1);
      __n = ((long)param_3 + -1) - (long)param_1;
      puVar22 = (undefined8 *)((long)param_3 - __n);
      memmove(puVar22,param_1,__n);
      *(undefined1 *)param_1 = uVar1;
    }
    else {
      uVar14 = (long)param_2 - (long)param_1;
      uVar13 = (long)param_3 - (long)param_2;
      uVar16 = uVar13;
      uVar18 = uVar13;
      if ((long)uVar14 <= (long)uVar13) {
        uVar18 = uVar14;
      }
      while (puVar2 = puVar22, 0 < (long)uVar18) {
        while (lVar17 = uVar14 - uVar16, lVar17 != 0 && (long)uVar16 <= (long)uVar14) {
          uVar3 = uVar16 & 0xfffffffffffffff8;
          uVar18 = 0;
          uVar20 = uVar16 & 0xffffffffffffffe0;
          puVar22 = (undefined8 *)((long)puVar2 + uVar14 + 0x10);
          uVar19 = uVar14;
          do {
            uVar15 = uVar19 - uVar16;
            if (uVar16 != 0) {
              puVar5 = (undefined1 *)((long)puVar2 + uVar19);
              puVar7 = (undefined1 *)((long)puVar2 + uVar15);
              puVar11 = puVar5;
              if ((7 < uVar16) &&
                 (puVar8 = (undefined1 *)((long)puVar2 + uVar16 * ~uVar18 + uVar14),
                 puVar11 = (undefined1 *)((long)puVar2 + uVar19),
                 puVar8 <= puVar8 + (uVar16 - 1) && puVar5 <= puVar5 + (uVar16 - 1))) {
                if (uVar16 < 0x20) {
                  uVar23 = 0;
                }
                else {
                  uVar23 = uVar16 & 0xffffffffffffffe0;
                  puVar4 = puVar22;
                  do {
                    puVar21 = (undefined8 *)((long)puVar4 + -uVar16);
                    uVar25 = puVar4[-2];
                    uVar26 = puVar4[1];
                    uVar24 = *puVar4;
                    uVar28 = puVar21[-1];
                    uVar27 = puVar21[-2];
                    uVar30 = puVar21[1];
                    uVar29 = *puVar21;
                    uVar23 = uVar23 - 0x20;
                    puVar21[-1] = puVar4[-1];
                    puVar21[-2] = uVar25;
                    puVar21[1] = uVar26;
                    *puVar21 = uVar24;
                    puVar4[-1] = uVar28;
                    puVar4[-2] = uVar27;
                    puVar4[1] = uVar30;
                    *puVar4 = uVar29;
                    puVar4 = puVar4 + 4;
                  } while (uVar23 != 0);
                  if (uVar16 == uVar20) goto LAB_006ebfc0;
                  uVar23 = uVar16 & 0xffffffffffffffe0;
                  if ((uVar16 & 0x18) == 0) {
                    puVar7 = puVar7 + uVar20;
                    puVar11 = puVar5 + uVar20;
                    goto LAB_006ec094;
                  }
                }
                puVar7 = puVar7 + uVar3;
                lVar12 = uVar23 - uVar3;
                puVar11 = (undefined1 *)((long)puVar2 + uVar23);
                do {
                  uVar25 = *(undefined8 *)(puVar11 + lVar17);
                  lVar12 = lVar12 + 8;
                  *(undefined8 *)(puVar11 + lVar17) = *(undefined8 *)(puVar11 + uVar19);
                  *(undefined8 *)(puVar11 + uVar19) = uVar25;
                  puVar11 = puVar11 + 8;
                } while (lVar12 != 0);
                puVar11 = puVar5 + uVar3;
                if (uVar16 == uVar3) goto LAB_006ebfc0;
              }
LAB_006ec094:
              do {
                uVar1 = *puVar7;
                puVar8 = puVar7 + 1;
                *puVar7 = *puVar11;
                *puVar11 = uVar1;
                puVar7 = puVar8;
                puVar11 = puVar11 + 1;
              } while (puVar8 != puVar5);
            }
LAB_006ebfc0:
            uVar18 = uVar18 + 1;
            puVar22 = (undefined8 *)((long)puVar22 + -uVar16);
            lVar17 = lVar17 - uVar16;
            uVar19 = uVar15;
          } while ((long)uVar16 < (long)uVar15);
          uVar14 = uVar15;
          if ((long)uVar15 < 1) goto LAB_006ec1f0;
        }
        uVar3 = uVar14 & 0xfffffffffffffff8;
        lVar17 = 0;
        uVar19 = uVar14 & 0xffffffffffffffe0;
        puVar4 = puVar2 + 2;
        puVar9 = puVar2;
        puVar21 = puVar2;
        do {
          puVar21 = (undefined8 *)((long)puVar21 + uVar14);
          puVar22 = (undefined8 *)((long)puVar9 + uVar14);
          if (uVar14 != 0) {
            if (((uVar14 < 8) || ((undefined8 *)((long)puVar9 + (uVar14 - 1)) < puVar9)) ||
               (puVar5 = (undefined1 *)((long)puVar2 + uVar14 + uVar14 * lVar17),
               puVar5 + (uVar14 - 1) < puVar5)) {
              puVar5 = (undefined1 *)((long)puVar9 + uVar14);
              puVar6 = puVar9;
            }
            else {
              if (uVar14 < 0x20) {
                uVar18 = 0;
              }
              else {
                uVar18 = uVar14 & 0xffffffffffffffe0;
                puVar6 = puVar4;
                puVar10 = puVar21;
                do {
                  uVar25 = *puVar10;
                  uVar26 = puVar10[3];
                  uVar24 = puVar10[2];
                  uVar18 = uVar18 - 0x20;
                  uVar28 = puVar6[-1];
                  uVar27 = puVar6[-2];
                  uVar30 = puVar6[1];
                  uVar29 = *puVar6;
                  puVar6[-1] = puVar10[1];
                  puVar6[-2] = uVar25;
                  puVar6[1] = uVar26;
                  *puVar6 = uVar24;
                  puVar6 = puVar6 + 4;
                  puVar10[1] = uVar28;
                  *puVar10 = uVar27;
                  puVar10[3] = uVar30;
                  puVar10[2] = uVar29;
                  puVar10 = puVar10 + 4;
                } while (uVar18 != 0);
                if (uVar14 == uVar19) goto LAB_006ec0e4;
                uVar18 = uVar14 & 0xffffffffffffffe0;
                if ((uVar14 & 0x18) == 0) {
                  puVar5 = (undefined1 *)((long)puVar22 + uVar19);
                  puVar6 = (undefined8 *)((long)puVar9 + uVar19);
                  goto LAB_006ec118;
                }
              }
              puVar5 = (undefined1 *)((long)puVar22 + uVar3);
              puVar6 = (undefined8 *)((long)puVar9 + uVar3);
              lVar12 = uVar18 - uVar3;
              puVar9 = (undefined8 *)((long)puVar9 + uVar18);
              do {
                uVar25 = *puVar9;
                lVar12 = lVar12 + 8;
                *puVar9 = *(undefined8 *)((long)puVar21 + uVar18);
                *(undefined8 *)((long)puVar21 + uVar18) = uVar25;
                uVar18 = uVar18 + 8;
                puVar9 = puVar9 + 1;
              } while (lVar12 != 0);
              if (uVar14 == uVar3) goto LAB_006ec0e4;
            }
LAB_006ec118:
            do {
              uVar1 = *(undefined1 *)puVar6;
              puVar9 = (undefined8 *)((long)puVar6 + 1);
              *(undefined1 *)puVar6 = *puVar5;
              *puVar5 = uVar1;
              puVar5 = puVar5 + 1;
              puVar6 = puVar9;
            } while (puVar9 != puVar22);
          }
LAB_006ec0e4:
          uVar16 = uVar16 - uVar14;
          lVar17 = lVar17 + 1;
          puVar4 = (undefined8 *)((long)puVar4 + uVar14);
          puVar9 = puVar22;
          uVar18 = uVar16;
        } while ((long)uVar14 <= (long)uVar16);
      }
LAB_006ec1f0:
      puVar22 = (undefined8 *)((long)param_1 + uVar13);
    }
  }
  return puVar22;
}


// ===== 006ec25c  FUN_006ec25c =====

void FUN_006ec25c(uint param_1,undefined1 param_2,long param_3)

{
  char cVar1;
  byte bVar2;
  undefined1 *puVar3;
  char *pcVar4;
  undefined1 uVar5;
  byte *pbVar6;
  
  puVar3 = *(undefined1 **)(param_3 + 0x60);
  *(undefined1 **)(param_3 + 0x60) = puVar3 + 1;
  *puVar3 = param_2;
  puVar3 = *(undefined1 **)(param_3 + 0x60);
  *(undefined1 **)(param_3 + 0x60) = puVar3 + 1;
  if ((int)param_1 < 0) {
    uVar5 = 0x2d;
    param_1 = -param_1;
  }
  else {
    uVar5 = 0x2b;
  }
  *puVar3 = uVar5;
  pcVar4 = *(char **)(param_3 + 0x60);
  *(char **)(param_3 + 0x60) = pcVar4 + 1;
  if ((int)param_1 < 100) {
    cVar1 = (char)((int)param_1 / 10);
    *pcVar4 = cVar1 + '0';
    bVar2 = (char)param_1 + cVar1 * -10 + 0x30;
  }
  else {
    *pcVar4 = (char)(param_1 / 100) + '0';
    cVar1 = (char)(param_1 / 10);
    pbVar6 = *(byte **)(param_3 + 0x60);
    *(byte **)(param_3 + 0x60) = pbVar6 + 1;
    *pbVar6 = cVar1 + (char)(((ulong)param_1 / 10) * 0x1999999a >> 0x20) * -10 | 0x30;
    bVar2 = (char)param_1 + cVar1 * -10 | 0x30;
  }
  pbVar6 = *(byte **)(param_3 + 0x60);
  *(byte **)(param_3 + 0x60) = pbVar6 + 1;
  *pbVar6 = bVar2;
  return;
}


// ===== 006ec340  FUN_006ec340 =====

void FUN_006ec340(uint param_1,void *param_2,ulong param_3,long param_4,undefined8 *param_5)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  void *__dest;
  uint uVar6;
  byte bVar7;
  
  uVar6 = *(uint *)(param_4 + 4);
  bVar7 = *(byte *)(param_4 + 1);
  uVar2 = param_3;
  if ((param_1 & 0xff) != 0) {
    uVar2 = param_3 + 1;
  }
  lVar3 = 0;
  if (uVar2 <= uVar6) {
    lVar3 = uVar6 - uVar2;
  }
  if (uVar6 == 0xffffffff || (int)(uVar6 + 1) < 0 != SCARRY4(uVar6,1)) {
    lVar3 = 0;
  }
  lVar4 = lVar3;
  if ((bVar7 & 0x11) != 0) {
    lVar4 = 0;
  }
  lVar5 = lVar3;
  if ((bVar7 & 0x11) != 0x10) {
    lVar5 = 0;
  }
  FUN_006ea2d8(param_5,lVar4,0x20);
  if ((param_1 & 0xff) != 0) {
    FUN_006ea2d8(param_5,1,param_1);
  }
  FUN_006ea2d8(param_5,lVar5,0x30);
  if (param_3 != 0) {
    __dest = (void *)param_5[3];
    param_5[2] = param_5[2] + param_3;
    if (param_3 < (ulong)((long)param_5 + (0x420 - (long)__dest))) {
      memcpy(__dest,param_2,param_3);
      param_5[3] = param_5[3] + param_3;
    }
    else {
      puVar1 = param_5 + 4;
      lVar4 = (long)__dest - (long)puVar1;
      if (lVar4 < 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/string_view:331: libc++ Hardening assertion __len <= static_cast<size_type>(numeric_limits<difference_type>::max()) failed: string_view::string_view(_CharT *, size_t): length does not fit in difference_type\n"
                   ,lVar4);
      }
      if ((puVar1 == (undefined8 *)0x0) && (__dest != (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/string_view:333: libc++ Hardening assertion __len == 0 || __s != nullptr failed: string_view::string_view(_CharT *, size_t): received nullptr\n"
                   ,lVar4);
      }
      (*(code *)param_5[1])(*param_5,param_5 + 4);
      param_5[3] = puVar1;
      (*(code *)param_5[1])(*param_5,param_2,param_3);
    }
  }
  lVar4 = 0;
  if ((bVar7 & 1) != 0) {
    lVar4 = lVar3;
  }
  FUN_006ea2d8(param_5,lVar4,0x20);
  return;
}


// ===== 006ec494  FUN_006ec494 =====

void FUN_006ec494(undefined8 param_1,undefined8 param_2,undefined4 param_3,char *param_4)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  char *local_58;
  undefined8 *puStack_50;
  undefined8 local_48;
  
  if (*(long *)(param_4 + 8) == 0) {
    lVar3 = *(long *)(param_4 + 0x10);
    uVar4 = 1;
    if ((*(byte *)(lVar3 + 1) & 8) != 0) {
      uVar4 = 2;
    }
  }
  else {
    lVar3 = *(long *)(param_4 + 0x10);
    uVar4 = *(long *)(param_4 + 8) + 2;
  }
  uVar1 = *(uint *)(lVar3 + 4);
  if (*param_4 != '\0') {
    uVar4 = uVar4 + 1;
  }
  if (((int)uVar1 < 0) || (lVar5 = uVar1 - uVar4, uVar1 < uVar4 || lVar5 == 0)) {
    lVar5 = 0;
  }
  else if ((*(byte *)(lVar3 + 1) & 1) == 0) {
    bVar2 = (*(byte *)(lVar3 + 1) & 0x10) != 0;
    lVar3 = lVar5;
    if (bVar2) {
      lVar3 = 0;
    }
    lVar6 = 1;
    if (bVar2) {
      lVar6 = lVar5 + 1;
    }
    lVar5 = 0;
    goto LAB_006ec530;
  }
  lVar3 = 0;
  lVar6 = 1;
LAB_006ec530:
  FUN_006ea2d8(*(undefined8 *)(param_4 + 0x18),lVar3,0x20);
  if (*param_4 != '\0') {
    FUN_006ea2d8(*(undefined8 *)(param_4 + 0x18),1);
  }
  FUN_006ea2d8(*(undefined8 *)(param_4 + 0x18),lVar6,0x30);
  if ((*(long *)(param_4 + 8) == 0) && ((*(byte *)(*(long *)(param_4 + 0x10) + 1) >> 3 & 1) == 0)) {
    local_48 = 0;
  }
  else {
    FUN_006ea2d8(*(undefined8 *)(param_4 + 0x18),1,0x2e);
    local_48 = *(undefined8 *)(param_4 + 8);
  }
  puStack_50 = &local_48;
  local_58 = param_4;
  FUN_006ecf64(param_1,param_2,param_3,&local_58,FUN_006ed158);
  FUN_006ea2d8(*(undefined8 *)(param_4 + 0x18),local_48,0x30);
  FUN_006ea2d8(*(undefined8 *)(param_4 + 0x18),lVar5,0x20);
  return;
}


// ===== 006ec5f4  FUN_006ec5f4 =====

void FUN_006ec5f4(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  int local_40;
  long local_28;
  
  iVar1 = param_3 + 0xbe;
  if (-1 < param_3 + 0x9f) {
    iVar1 = param_3 + 0x9f;
  }
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar3 = (ulong)(long)(((iVar1 >> 5) * 0xb) / 10 + 0x7f) >> 7;
  local_60 = param_4;
  uStack_58 = param_5;
  local_50 = param_1;
  uStack_48 = param_2;
  local_40 = param_3;
  if (uVar3 < 3) {
    if (uVar3 == 1) {
      FUN_006ec6f4(&local_60,FUN_006ec8d0);
    }
    else if (uVar3 == 2) {
      FUN_006ec770(&local_60);
    }
  }
  else if (uVar3 == 3) {
    FUN_006ec7c8(&local_60);
  }
  else if (uVar3 == 4) {
    FUN_006ec820(&local_60);
  }
  else if (uVar3 == 5) {
    FUN_006ec878(&local_60);
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006ec6f4  FUN_006ec6f4 =====

void FUN_006ec6f4(undefined8 param_1,code *param_2)

{
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
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
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_218 = 0;
  local_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  local_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  local_1e0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  local_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  local_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  local_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  local_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  (*param_2)(param_1,&local_220,0x80);
  return;
}


// ===== 006ec770  FUN_006ec770 =====

void FUN_006ec770(undefined8 param_1,code *param_2)

{
  undefined1 auStack_430 [1024];
  
  memset(auStack_430,0,0x400);
  (*param_2)(param_1,auStack_430,0x100);
  return;
}


// ===== 006ec7c8  FUN_006ec7c8 =====

void FUN_006ec7c8(undefined8 param_1,code *param_2)

{
  undefined1 auStack_630 [1536];
  
  memset(auStack_630,0,0x600);
  (*param_2)(param_1,auStack_630,0x180);
  return;
}


// ===== 006ec820  FUN_006ec820 =====

void FUN_006ec820(undefined8 param_1,code *param_2)

{
  undefined1 auStack_830 [2048];
  
  memset(auStack_830,0,0x800);
  (*param_2)(param_1,auStack_830,0x200);
  return;
}


// ===== 006ec878  FUN_006ec878 =====

void FUN_006ec878(undefined8 param_1,code *param_2)

{
  undefined1 auStack_a30 [2560];
  
  memset(auStack_a30,0,0xa00);
  (*param_2)(param_1,auStack_a30,0x280);
  return;
}


// ===== 006ec8d0  FUN_006ec8d0 =====

void FUN_006ec8d0(undefined8 *param_1,long param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  bool bVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long local_60;
  ulong local_58;
  byte abStack_4a [10];
  long local_40;
  long local_38;
  ulong uStack_30;
  long local_28;
  
  lVar9 = tpidr_el0;
  local_28 = *(long *)(lVar9 + 0x28);
  iVar4 = *(int *)(param_1 + 4);
  iVar5 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar5 = iVar4;
  }
  local_40 = 0;
  iVar2 = iVar4 + 0xbe;
  if (-1 < iVar4 + 0x9f) {
    iVar2 = iVar4 + 0x9f;
  }
  iVar1 = (iVar5 >> 5) + 1;
  uVar13 = (ulong)iVar1;
  local_58 = (ulong)(((iVar2 >> 5) * 0xb) / 10);
  local_38 = param_2;
  uStack_30 = param_3;
  if (param_3 <= uVar13 - 1) goto LAB_006ecae8;
  uVar6 = iVar4 + (iVar5 >> 5) * -0x20;
  uVar7 = 0x20 - uVar6;
  uVar14 = (ulong)param_1[3] >> ((ulong)uVar7 & 0x3f);
  uVar3 = 0;
  if ((uVar6 & 0x40) == 0) {
    uVar3 = (int)(param_1[2] << ((ulong)uVar6 & 0x3f));
  }
  bVar12 = (uVar7 & 0x40) == 0;
  uVar16 = uVar14;
  if (bVar12) {
    uVar16 = (param_1[3] << 1) << ((ulong)(uVar6 - 0x21) & 0x3f) |
             (ulong)param_1[2] >> ((ulong)uVar7 & 0x3f);
  }
  *(undefined4 *)(param_2 + (uVar13 - 1) * 4) = uVar3;
  uVar15 = 0;
  if (bVar12) {
    uVar15 = uVar14;
  }
  uVar14 = local_58;
  if ((uVar16 == 0) && (uVar15 == 0)) {
    if (iVar1 != 0) goto LAB_006ec9d4;
  }
  else {
    do {
      if (param_3 == uVar13) goto LAB_006ecae8;
      *(int *)(param_2 + uVar13 * 4) = (int)uVar16;
      uVar16 = uVar16 >> 0x20 | uVar15 << 0x20;
      uVar15 = uVar15 >> 0x20;
      uVar13 = uVar13 + 1;
    } while (uVar16 != 0 || uVar15 != 0);
LAB_006ec9d4:
    do {
      uVar16 = uVar13 - 1;
      if (param_3 <= uVar16) goto LAB_006ecae8;
      uVar17 = 0;
      uVar15 = uVar13;
      do {
        uVar17 = (ulong)*(uint *)(param_2 + -4 + uVar15 * 4) | uVar17 << 0x20;
        uVar8 = uVar15 - 1;
        *(int *)(param_2 + -4 + uVar15 * 4) = (int)(uVar17 / 1000000000);
        uVar17 = uVar17 % 1000000000;
        uVar15 = uVar8;
      } while (uVar8 != 0);
      uVar14 = uVar14 - 1;
      if (param_3 <= uVar14) goto LAB_006ecae8;
      iVar5 = *(int *)(param_2 + uVar16 * 4);
      *(int *)(param_2 + uVar14 * 4) = (int)uVar17;
      if (iVar5 != 0) {
        uVar16 = uVar13;
      }
      uVar13 = uVar16;
    } while (uVar16 != 0);
  }
  local_60 = uVar14 + 1;
  if (uVar14 < param_3) {
    uVar6 = *(uint *)(param_2 + uVar14 * 4);
    if (uVar6 != 0) {
      do {
        lVar10 = -local_40;
        local_40 = local_40 + 1;
        if (8 < lVar10 + 8U) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/array:277: libc++ Hardening assertion __n < _Size failed: out-of-bounds access in std::array<T, N>\n"
                    );
        }
        abStack_4a[lVar10 + 2] = (char)uVar6 + (char)(uVar6 / 10) * -10 | 0x30;
        bVar12 = 9 < uVar6;
        uVar6 = uVar6 / 10;
      } while (bVar12);
    }
    (*(code *)param_1[1])(*param_1,&local_60);
    if (*(long *)(lVar9 + 0x28) == local_28) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_006ecae8:
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x6ecaec);
  (*pcVar11)();
}


// ===== 006ecb04  FUN_006ecb04 =====

/* WARNING: Removing unreachable block (ram,0x006ece6c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006ecb04(long *param_1,undefined1 (*param_2) [16],long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  void *__dest;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  bool bVar11;
  undefined8 uVar12;
  char *pcVar13;
  long lVar14;
  long lVar15;
  ulong __n;
  ulong *__src;
  undefined8 *puVar16;
  ulong uVar18;
  undefined1 auVar17 [16];
  undefined8 uVar19;
  ulong uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  long local_130;
  ulong local_f0;
  ulong local_e0;
  ulong uStack_d8;
  undefined1 auStack_d7 [7];
  ulong local_d0;
  long local_c8;
  ulong local_c0;
  long local_b0;
  
  lVar4 = tpidr_el0;
  local_b0 = *(long *)(lVar4 + 0x28);
  __n = *(ulong *)param_2[2];
  local_c8 = *(long *)(param_2[2] + 8);
  local_c0 = *(ulong *)param_2[3];
  uStack_d8 = SUB168(param_2[1],8);
  local_e0 = SUB168(param_2[1],0);
  uVar18 = SUB168(*param_2,8);
  local_f0 = SUB168(*param_2,0);
  local_d0 = __n;
  if (8 < 9 - __n) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/array:282: libc++ Hardening assertion __n < _Size failed: out-of-bounds access in std::array<T, N>\n"
              );
  }
  if ((long)__n < 0) {
LAB_006ecf24:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/string_view:331: libc++ Hardening assertion __len <= static_cast<size_type>(numeric_limits<difference_type>::max()) failed: string_view::string_view(_CharT *, size_t): length does not fit in difference_type\n"
               ,param_3);
  }
  __src = (ulong *)((long)&local_e0 + (9 - __n));
  if ((__n != 0) && (__src == (ulong *)0x0)) {
LAB_006ecf38:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/string_view:333: libc++ Hardening assertion __len == 0 || __s != nullptr failed: string_view::string_view(_CharT *, size_t): received nullptr\n"
               ,param_3);
  }
  pcVar13 = (char *)*param_1;
  lVar14 = *(long *)(pcVar13 + 0x10);
  if ((*(long *)(pcVar13 + 8) == 0) && ((*(byte *)(lVar14 + 1) >> 3 & 1) == 0)) {
    lVar15 = 0;
  }
  else {
    lVar15 = *(long *)(pcVar13 + 8) + 1;
  }
  uVar3 = *(uint *)(lVar14 + 4);
  uVar2 = (uVar18 - local_f0) * 9 + __n + lVar15;
  if (*pcVar13 != '\0') {
    uVar2 = uVar2 + 1;
  }
  if (((int)uVar3 < 0) || (local_130 = uVar3 - uVar2, uVar3 < uVar2 || local_130 == 0)) {
    lVar14 = 0;
    lVar15 = 0;
  }
  else {
    if ((*(byte *)(lVar14 + 1) & 1) != 0) {
      lVar14 = 0;
      lVar15 = 0;
      goto LAB_006ecc0c;
    }
    bVar11 = (*(byte *)(lVar14 + 1) & 0x10) != 0;
    lVar14 = local_130;
    if (bVar11) {
      lVar14 = 0;
    }
    lVar15 = 0;
    if (bVar11) {
      lVar15 = local_130;
    }
  }
  local_130 = 0;
LAB_006ecc0c:
  FUN_006ea2d8(*(undefined8 *)(pcVar13 + 0x18),lVar14,0x20);
  pcVar13 = (char *)*param_1;
  if (*pcVar13 != '\0') {
    FUN_006ea2d8(*(undefined8 *)(pcVar13 + 0x18),1);
    pcVar13 = (char *)*param_1;
  }
  FUN_006ea2d8(*(undefined8 *)(pcVar13 + 0x18),lVar15,0x30);
  uVar9 = DAT_001f5c20;
  uVar8 = DAT_001f53e0;
  uVar7 = DAT_001f5040;
  uVar2 = _UNK_001f4b78;
  uVar6 = _DAT_001f4b70;
  uVar5 = _UNK_001f2658;
  uVar12 = _DAT_001f2650;
  if (__n == 0) goto LAB_006ecd6c;
  do {
    puVar16 = *(undefined8 **)(*param_1 + 0x18);
    __dest = (void *)puVar16[3];
    puVar16[2] = puVar16[2] + __n;
    if (__n < (ulong)((long)puVar16 + (0x420 - (long)__dest))) {
      memcpy(__dest,__src,__n);
      puVar16[3] = puVar16[3] + __n;
    }
    else {
      puVar1 = puVar16 + 4;
      param_3 = (long)__dest - (long)puVar1;
      if (param_3 < 0) goto LAB_006ecf24;
      if ((puVar1 == (undefined8 *)0x0) && (__dest != (void *)0x0)) goto LAB_006ecf38;
      (*(code *)puVar16[1])(*puVar16,puVar16 + 4);
      puVar16[3] = puVar1;
      (*(code *)puVar16[1])(*puVar16,__src,__n);
    }
LAB_006ecd6c:
    if (uVar18 <= local_f0) {
      lVar14 = *param_1;
      if ((*(long *)(lVar14 + 8) == 0) && ((*(byte *)(*(long *)(lVar14 + 0x10) + 1) >> 3 & 1) == 0))
      {
        uVar12 = 0;
      }
      else {
        FUN_006ea2d8(*(undefined8 *)(lVar14 + 0x18),1,0x2e);
        lVar14 = *param_1;
        uVar12 = *(undefined8 *)(lVar14 + 8);
      }
      FUN_006ea2d8(*(undefined8 *)(lVar14 + 0x18),uVar12,0x30);
      FUN_006ea2d8(*(undefined8 *)(*param_1 + 0x18),local_130,0x20);
      if (*(long *)(lVar4 + 0x28) == local_b0) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if (local_c0 <= local_f0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x6ecf24);
      (*pcVar10)();
    }
    __n = 9;
    uVar3 = *(uint *)(local_c8 + local_f0 * 4);
    local_d0 = 9;
    auVar22._0_8_ = CONCAT44(uVar3,uVar3);
    auVar22._8_4_ = uVar3;
    auVar22._12_4_ = uVar3;
    uVar19 = NEON_ushl(auVar22._0_8_,uVar7,4);
    auVar17 = NEON_umull(auVar22._0_8_,uVar6,4);
    auVar21 = NEON_umull(uVar19,uVar9,4);
    auVar23._4_4_ = auVar17._12_4_;
    auVar23._0_4_ = auVar17._4_4_;
    auVar23._8_4_ = (int)((auVar22._8_8_ & 0xffffffff) * (uVar2 & 0xffffffff) >> 0x20);
    auVar23._12_4_ = (int)((auVar22._8_8_ >> 0x20) * (uVar2 >> 0x20) >> 0x20);
    auVar17._8_8_ = uVar5;
    auVar17._0_8_ = uVar12;
    auVar17 = NEON_ushl(auVar23,auVar17,4);
    uVar20 = NEON_ushl(CONCAT44(auVar21._12_4_,auVar21._4_4_),uVar8,4);
    auVar22 = NEON_umull(auVar17._0_8_,0xcccccccdcccccccd,4);
    uVar20 = uVar20 & 0xffff0000ffff;
    auVar23 = NEON_umull(uVar20,0x1999999a1999999a,4);
    local_e0 = CONCAT17(auVar17[0xc] + (char)(auVar17._8_8_ / 0xa00000000) * -10,
                        CONCAT16(auVar17[8] + (char)((auVar17._8_8_ & 0xffffffff) / 10) * -10,
                                 CONCAT15(auVar17[4] + (char)(auVar22._12_4_ >> 3) * -10,
                                          CONCAT14(auVar17[0] + (char)(auVar22._4_4_ >> 3) * -10,
                                                   CONCAT13((char)(uVar20 >> 0x20) +
                                                            auVar23[0xc] * -10,
                                                            CONCAT12((char)uVar20 + auVar23[4] * -10
                                                                     ,CONCAT11((char)(uVar3 / 
                                                  10000000) +
                                                  (char)((uVar3 / 10000000) * 0x199a >> 0x10) * -10,
                                                  (char)(uVar3 / 100000000) +
                                                  (char)((uint)((ulong)uVar3 * 0x55e63b89 >> 0x20) /
                                                        0x14000000) * -10))))))) |
               0x3030303030303030;
    uStack_d8 = CONCAT71(auStack_d7,(char)uVar3 + (char)(uVar3 / 10) * -10) | 0x30;
    __src = &local_e0;
    local_f0 = local_f0 + 1;
  } while( true );
}


// ===== 006ecf64  FUN_006ecf64 =====

void FUN_006ecf64(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  int local_40;
  long local_28;
  
  iVar1 = param_3 + 0xaf;
  if (-1 < param_3 + 0x90) {
    iVar1 = param_3 + 0x90;
  }
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar3 = (ulong)(long)((iVar1 >> 5) + 0x7f) >> 7;
  local_60 = param_4;
  uStack_58 = param_5;
  local_50 = param_1;
  uStack_48 = param_2;
  local_40 = param_3;
  if (uVar3 < 3) {
    if (uVar3 == 1) {
      FUN_006ec6f4(&local_60,FUN_006ed044);
    }
    else if (uVar3 == 2) {
      FUN_006ec770(&local_60);
    }
  }
  else if (uVar3 == 3) {
    FUN_006ec7c8(&local_60);
  }
  else if (uVar3 == 4) {
    FUN_006ec820(&local_60);
  }
  else if (uVar3 == 5) {
    FUN_006ec878(&local_60);
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006ed044  FUN_006ed044 =====

void FUN_006ed044(undefined8 *param_1,long param_2,ulong param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  bool bVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 local_30 [8];
  ulong local_28;
  long lStack_20;
  ulong local_18;
  
  iVar4 = *(int *)(param_1 + 4);
  iVar2 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  iVar2 = iVar2 >> 5;
  uVar1 = iVar2 + 1;
  uVar10 = (ulong)uVar1;
  local_28 = (ulong)(int)uVar1;
  uVar8 = local_28 - 1;
  lStack_20 = param_2;
  local_18 = param_3;
  if (uVar8 < param_3) {
    uVar5 = iVar4 + iVar2 * -0x20;
    uVar13 = (ulong)param_1[3] >> ((ulong)uVar5 & 0x3f);
    uVar3 = 0;
    if ((0x20 - uVar5 & 0x40) == 0) {
      uVar3 = (int)(param_1[2] << ((ulong)(0x20 - uVar5) & 0x3f));
    }
    bVar7 = (uVar5 & 0x40) == 0;
    uVar11 = uVar13;
    if (bVar7) {
      uVar11 = (param_1[3] << 1) << ((ulong)~uVar5 & 0x3f) |
               (ulong)param_1[2] >> ((ulong)uVar5 & 0x3f);
    }
    uVar12 = 0;
    if (bVar7) {
      uVar12 = uVar13;
    }
    *(undefined4 *)(param_2 + uVar8 * 4) = uVar3;
    if (uVar11 != 0 || uVar12 != 0) {
      uVar13 = local_28 - 2;
      do {
        if (param_3 <= uVar13) goto LAB_006ed154;
        *(int *)(param_2 + uVar13 * 4) = (int)uVar11;
        uVar11 = uVar11 >> 0x20 | uVar12 << 0x20;
        uVar12 = uVar12 >> 0x20;
        uVar13 = uVar13 - 1;
      } while (uVar11 != 0 || uVar12 != 0);
    }
    if (uVar1 != 0) {
      lVar9 = (long)iVar2;
      uVar10 = 0;
      do {
        uVar10 = uVar10 + (ulong)*(uint *)(param_2 + lVar9 * 4) * 10;
        *(int *)(param_2 + lVar9 * 4) = (int)uVar10;
        lVar9 = lVar9 + -1;
        uVar10 = uVar10 >> 0x20;
      } while (lVar9 != -1);
      if (*(int *)(param_2 + uVar8 * 4) == 0) {
        local_28 = uVar8;
      }
    }
    local_30[0] = (undefined1)uVar10;
    (*(code *)param_1[1])(*param_1,local_30);
    return;
  }
LAB_006ed154:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x6ed158);
  (*pcVar6)();
}


// ===== 006ed158  FUN_006ed158 =====

void FUN_006ed158(long *param_1,byte *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  int iVar5;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar6;
  
  if ((*(long *)(*param_1 + 8) != 0) && (*(long *)param_1[1] != 0)) {
    lVar1 = *(long *)(param_2 + 0x10);
    uVar2 = *(ulong *)(param_2 + 0x18);
    uVar10 = *(ulong *)(param_2 + 8);
    lVar11 = lVar1 + -4;
    uVar6 = (ulong)*param_2;
    do {
      iVar5 = (int)uVar6;
      if (iVar5 == 0) {
        if (uVar10 == 0) {
          return;
        }
LAB_006ed1bc:
        uVar7 = uVar10 - 1;
        if (uVar2 <= uVar7) {
LAB_006ed36c:
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x6ed370);
          (*pcVar4)();
        }
        uVar12 = 0;
        uVar8 = uVar10;
        do {
          uVar12 = uVar12 + (ulong)*(uint *)(lVar11 + uVar8 * 4) * 10;
          uVar3 = uVar8 - 1;
          *(int *)(lVar11 + uVar8 * 4) = (int)uVar12;
          uVar12 = uVar12 >> 0x20;
          uVar8 = uVar3;
        } while (uVar3 != 0);
        if (*(int *)(lVar1 + uVar7 * 4) != 0) {
          uVar7 = uVar10;
        }
        uVar10 = uVar7;
        if (uVar12 != 9) goto LAB_006ed268;
        lVar9 = 0;
        do {
          lVar9 = lVar9 + 1;
          if (uVar7 == 0) {
            uVar12 = 0;
            uVar10 = uVar7;
            break;
          }
          uVar10 = uVar7 - 1;
          if (uVar2 <= uVar10) goto LAB_006ed36c;
          uVar12 = 0;
          uVar8 = uVar7;
          do {
            uVar12 = uVar12 + (ulong)*(uint *)(lVar11 + uVar8 * 4) * 10;
            uVar3 = uVar8 - 1;
            *(int *)(lVar11 + uVar8 * 4) = (int)uVar12;
            uVar12 = uVar12 >> 0x20;
            uVar8 = uVar3;
          } while (uVar3 != 0);
          if (*(int *)(lVar1 + uVar10 * 4) != 0) {
            uVar10 = uVar7;
          }
          uVar7 = uVar10;
        } while (uVar12 == 9);
      }
      else {
        if (uVar10 != 0) goto LAB_006ed1bc;
        uVar12 = 0;
LAB_006ed268:
        lVar9 = 0;
      }
      uVar7 = lVar9 + 1;
      if (*(ulong *)param_1[1] <= uVar7) {
        if (((uVar7 <= *(ulong *)param_1[1]) && ((uint)uVar12 < 6)) &&
           (((uint)uVar12 != 5 || ((uVar10 == 0 && (lVar9 == 0 && (uVar6 & 1) == 0)))))) {
          FUN_006ea2d8(*(undefined8 *)(*param_1 + 0x18),1,iVar5 + 0x30);
          FUN_006ea2d8(*(undefined8 *)(*param_1 + 0x18),*(long *)param_1[1] + -1,0x39);
          *(undefined8 *)param_1[1] = 0;
          return;
        }
        FUN_006ea2d8(*(undefined8 *)(*param_1 + 0x18),1,iVar5 + 0x31);
        *(long *)param_1[1] = *(long *)param_1[1] + -1;
        return;
      }
      FUN_006ea2d8(*(undefined8 *)(*param_1 + 0x18),1,iVar5 + 0x30);
      FUN_006ea2d8(*(undefined8 *)(*param_1 + 0x18),lVar9,0x39);
      *(long *)param_1[1] = *(long *)param_1[1] - uVar7;
      uVar6 = uVar12;
    } while (*(long *)param_1[1] != 0);
  }
  return;
}


// ===== 006ed370  FUN_006ed370 =====

byte * FUN_006ed370(ulong param_1,long param_2,byte *param_3,int param_4,long param_5)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  bool bVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte bVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  uVar1 = 0x80 - param_4;
  uVar10 = param_1 << ((ulong)uVar1 & 0x3f);
  uVar11 = uVar10;
  uVar12 = 0;
  if ((uVar1 & 0x40) == 0) {
    uVar11 = param_2 << ((ulong)uVar1 & 0x3f) | (param_1 >> 1) >> ((ulong)(param_4 - 1) & 0x3f);
    uVar12 = uVar10;
  }
  bVar5 = uVar12 != 0;
  pbVar6 = param_3;
  if (param_5 != 0) {
    do {
      pbVar6 = param_3;
      if (uVar12 == 0) break;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar12;
      uVar9 = SUB168(auVar2 * ZEXT816(10),8);
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar11;
      uVar12 = uVar12 * 10;
      uVar10 = uVar11 * 10;
      uVar11 = uVar9 + uVar10;
      bVar5 = uVar12 != 0;
      param_5 = param_5 + -1;
      pbVar6 = param_3 + 1;
      *param_3 = SUB161(auVar3 * ZEXT816(10),8) + '0' + CARRY8(uVar9,uVar10);
      param_3 = pbVar6;
    } while (param_5 != 0);
  }
  for (; param_5 != 0; param_5 = param_5 + -1) {
    if (uVar11 == 0) {
      return pbVar6;
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar11;
    uVar11 = uVar11 * 10;
    *pbVar6 = SUB161(auVar4 * ZEXT816(10),8) | 0x30;
    pbVar6 = pbVar6 + 1;
  }
  if ((long)uVar11 < 0) {
    pbVar7 = pbVar6;
    if ((bool)(uVar11 != 0x8000000000000000 | bVar5)) {
      while( true ) {
        do {
          pbVar7 = pbVar7 + -1;
          bVar8 = *pbVar7;
        } while (bVar8 == 0x2e);
        if (bVar8 != 0x39) break;
        *pbVar7 = 0x30;
      }
LAB_006ed4ac:
      *pbVar7 = bVar8 + 1;
      return pbVar6;
    }
    pbVar7 = pbVar6 + -1 + -(ulong)(pbVar6[-1] == 0x2e);
    bVar8 = *pbVar7;
    if ((bVar8 & 1) != 0) {
      do {
        if (bVar8 != 0x2e) {
          if (bVar8 != 0x39) goto LAB_006ed4ac;
          *pbVar7 = 0x30;
        }
        pbVar7 = pbVar7 + -1;
        bVar8 = *pbVar7;
      } while( true );
    }
  }
  return pbVar6;
}


// ===== 006ed4bc  FUN_006ed4bc =====

void FUN_006ed4bc(char *param_1,void *param_2,ulong param_3,ulong param_4,long param_5,void *param_6
                 ,ulong param_7)

{
  undefined8 *puVar1;
  ulong uVar2;
  void *pvVar3;
  uint uVar4;
  byte bVar5;
  bool bVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  
  uVar4 = *(uint *)(*(long *)(param_1 + 0x10) + 4);
  if ((int)uVar4 < 0) {
    if (*param_1 != '\0') {
      FUN_006ea2d8(*(undefined8 *)(param_1 + 0x18),1);
    }
    if (param_3 != 0) {
      puVar8 = *(undefined8 **)(param_1 + 0x18);
      pvVar3 = (void *)puVar8[3];
      puVar8[2] = puVar8[2] + param_3;
      if (param_3 < (ulong)((long)puVar8 + (0x420 - (long)pvVar3))) {
        memcpy(pvVar3,param_2,param_3);
        puVar8[3] = puVar8[3] + param_3;
      }
      else {
        puVar1 = puVar8 + 4;
        lVar7 = (long)pvVar3 - (long)puVar1;
        if (lVar7 < 0) goto LAB_006ed898;
        if ((puVar1 == (undefined8 *)0x0) && (pvVar3 != (void *)0x0)) goto LAB_006ed8ac;
        (*(code *)puVar8[1])(*puVar8,puVar8 + 4,lVar7);
        puVar8[3] = puVar1;
        (*(code *)puVar8[1])(*puVar8,param_2,param_3);
      }
    }
    FUN_006ea2d8(*(undefined8 *)(param_1 + 0x18),param_5,0x30);
    if (param_7 == 0) {
      return;
    }
    puVar8 = *(undefined8 **)(param_1 + 0x18);
    pvVar3 = (void *)puVar8[3];
    puVar8[2] = puVar8[2] + param_7;
    if (param_7 < (ulong)((long)puVar8 + (0x420 - (long)pvVar3))) {
      memcpy(pvVar3,param_6,param_7);
      puVar8[3] = puVar8[3] + param_7;
      return;
    }
    puVar1 = puVar8 + 4;
    lVar7 = (long)pvVar3 - (long)puVar1;
    if (lVar7 < 0) goto LAB_006ed898;
    if ((puVar1 != (undefined8 *)0x0) || (pvVar3 == (void *)0x0)) {
      (*(code *)puVar8[1])(*puVar8,puVar8 + 4,lVar7);
      puVar8[3] = puVar1;
                    /* WARNING: Could not recover jumptable at 0x006ed894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)puVar8[1])(*puVar8,param_6,param_7);
      return;
    }
    goto LAB_006ed8ac;
  }
  uVar2 = param_5 + param_3 + param_7;
  if (*param_1 != '\0') {
    uVar2 = uVar2 + 1;
  }
  lVar9 = uVar4 - uVar2;
  if (uVar4 < uVar2 || lVar9 == 0) {
    lVar7 = 0;
    lVar10 = 0;
LAB_006ed594:
    lVar9 = 0;
  }
  else {
    bVar5 = *(byte *)(*(long *)(param_1 + 0x10) + 1);
    if ((bVar5 & 1) == 0) {
      bVar6 = (bVar5 & 0x10) != 0;
      lVar7 = lVar9;
      if (bVar6) {
        lVar7 = 0;
      }
      lVar10 = 0;
      if (bVar6) {
        lVar10 = lVar9;
      }
      goto LAB_006ed594;
    }
    lVar7 = 0;
    lVar10 = 0;
  }
  FUN_006ea2d8(*(undefined8 *)(param_1 + 0x18),lVar7,0x20);
  if (*param_1 != '\0') {
    FUN_006ea2d8(*(undefined8 *)(param_1 + 0x18),1);
  }
  uVar2 = param_3;
  if (param_4 <= param_3) {
    uVar2 = param_4;
  }
  if (uVar2 != 0) {
    puVar8 = *(undefined8 **)(param_1 + 0x18);
    pvVar3 = (void *)puVar8[3];
    puVar8[2] = puVar8[2] + uVar2;
    if (uVar2 < (ulong)((long)puVar8 + (0x420 - (long)pvVar3))) {
      memcpy(pvVar3,param_2,uVar2);
      puVar8[3] = puVar8[3] + uVar2;
    }
    else {
      puVar1 = puVar8 + 4;
      lVar7 = (long)pvVar3 - (long)puVar1;
      if (lVar7 < 0) goto LAB_006ed898;
      if ((puVar1 == (undefined8 *)0x0) && (pvVar3 != (void *)0x0)) goto LAB_006ed8ac;
      (*(code *)puVar8[1])(*puVar8,puVar8 + 4,lVar7);
      puVar8[3] = puVar1;
      (*(code *)puVar8[1])(*puVar8,param_2,uVar2);
    }
  }
  FUN_006ea2d8(*(undefined8 *)(param_1 + 0x18),lVar10,0x30);
  uVar2 = param_3 - param_4;
  if (param_3 < param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_005f55a8("string_view::substr");
  }
  if (uVar2 != 0) {
    puVar8 = *(undefined8 **)(param_1 + 0x18);
    pvVar3 = (void *)puVar8[3];
    puVar8[2] = puVar8[2] + uVar2;
    if (uVar2 < (ulong)((long)puVar8 + (0x420 - (long)pvVar3))) {
      memcpy(pvVar3,(void *)((long)param_2 + param_4),uVar2);
      puVar8[3] = puVar8[3] + uVar2;
    }
    else {
      puVar1 = puVar8 + 4;
      lVar7 = (long)pvVar3 - (long)puVar1;
      if (lVar7 < 0) goto LAB_006ed898;
      if ((puVar1 == (undefined8 *)0x0) && (pvVar3 != (void *)0x0)) goto LAB_006ed8ac;
      (*(code *)puVar8[1])(*puVar8,puVar8 + 4,lVar7);
      puVar8[3] = puVar1;
      (*(code *)puVar8[1])(*puVar8,(long)param_2 + param_4,uVar2);
    }
  }
  FUN_006ea2d8(*(undefined8 *)(param_1 + 0x18),param_5,0x30);
  if (param_7 != 0) {
    puVar8 = *(undefined8 **)(param_1 + 0x18);
    pvVar3 = (void *)puVar8[3];
    puVar8[2] = puVar8[2] + param_7;
    if (param_7 < (ulong)((long)puVar8 + (0x420 - (long)pvVar3))) {
      memcpy(pvVar3,param_6,param_7);
      puVar8[3] = puVar8[3] + param_7;
    }
    else {
      puVar1 = puVar8 + 4;
      lVar7 = (long)pvVar3 - (long)puVar1;
      if (lVar7 < 0) {
LAB_006ed898:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/string_view:331: libc++ Hardening assertion __len <= static_cast<size_type>(numeric_limits<difference_type>::max()) failed: string_view::string_view(_CharT *, size_t): length does not fit in difference_type\n"
                   ,lVar7);
      }
      if ((puVar1 == (undefined8 *)0x0) && (pvVar3 != (void *)0x0)) {
LAB_006ed8ac:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/string_view:333: libc++ Hardening assertion __len == 0 || __s != nullptr failed: string_view::string_view(_CharT *, size_t): received nullptr\n"
                   ,lVar7);
      }
      (*(code *)puVar8[1])(*puVar8,puVar8 + 4);
      puVar8[3] = puVar1;
      (*(code *)puVar8[1])(*puVar8,param_6,param_7);
    }
  }
  FUN_006ea2d8(*(undefined8 *)(param_1 + 0x18),lVar9,0x20);
  return;
}


// ===== 006ed8cc  FUN_006ed8cc =====

void FUN_006ed8cc(long *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  void *__dest;
  int iVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 **ppuVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  char *pcVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  undefined8 *puVar16;
  ulong __n;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  long local_e0;
  long lStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  long local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uStack_b8 = param_2[3];
  local_c0 = param_2[2];
  uStack_a8 = param_2[5];
  lVar13 = param_2[4];
  local_a0 = param_2[6];
  uVar19 = param_2[1];
  uVar6 = *param_2;
  local_d0 = uVar6;
  uStack_c8 = uVar19;
  local_b0 = lVar13;
  if (8 < -lVar13 + 9U) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/array:282: libc++ Hardening assertion __n < _Size failed: out-of-bounds access in std::array<T, N>\n"
              );
  }
  if (lVar13 < 0) goto LAB_006edd0c;
  lVar14 = (long)&uStack_b8 + -lVar13 + 1;
  if ((lVar13 != 0) && (lVar14 == 0)) goto LAB_006edd20;
  uVar18 = *(ulong *)(*param_1 + 8);
  local_e0 = lVar14;
  lStack_d8 = lVar13;
  auVar20 = FUN_006edd4c(&local_d0,&local_e0);
  if ((auVar20 & (undefined1  [16])0x100000000) == (undefined1  [16])0x0 && auVar20._8_8_ == 0)
  goto LAB_006edcd8;
  bVar4 = (auVar20 & (undefined1  [16])0x100000000) == (undefined1  [16])0x0;
  iVar5 = auVar20._0_4_;
  if (bVar4) {
    iVar5 = 9;
  }
  uVar17 = auVar20._8_8_ - (ulong)bVar4;
  iVar15 = ((int)uVar19 - (int)uVar6) * 9 + (int)lVar13;
  iVar2 = iVar15 + -1;
  if (uVar17 + 1 < uVar18 + 1) {
LAB_006ed9d0:
    uVar6 = 0x39;
    iVar9 = iVar5;
    iVar15 = iVar2;
  }
  else {
    uVar6 = FUN_006edd4c(&local_d0,&local_e0);
    if ((uVar17 == *(ulong *)(*param_1 + 8)) &&
       (((uint)((ulong)uVar6 >> 0x20) & (uint)(4 < (int)uVar6)) == 0)) goto LAB_006ed9d0;
    uVar6 = 0x30;
    iVar9 = 1;
    if (iVar5 != 9) {
      iVar9 = iVar5 + 1;
      iVar15 = iVar2;
    }
  }
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  ppuVar7 = (undefined1 **)FUN_0062024c(iVar15,&local_90);
  pcVar12 = (char *)*param_1;
  lVar13 = *(long *)(pcVar12 + 0x10);
  if (*(long *)(pcVar12 + 8) == 0) {
    lVar14 = 1;
    if ((*(byte *)(lVar13 + 1) & 8) != 0) {
      lVar14 = 2;
    }
  }
  else {
    lVar14 = 2;
  }
  __n = (long)ppuVar7 - (long)&local_90;
  uVar10 = *(uint *)(lVar13 + 4);
  lVar14 = *(long *)(pcVar12 + 8) + lVar14 + __n;
  if (*pcVar12 != '\0') {
    lVar14 = lVar14 + 1;
  }
  if (((int)uVar10 < 0) ||
     (lVar8 = (ulong)uVar10 - (lVar14 + 2U), (ulong)uVar10 < lVar14 + 2U || lVar8 == 0)) {
    lVar14 = 0;
LAB_006eda74:
    lVar8 = 0;
  }
  else {
    lVar14 = lVar8;
    if ((*(byte *)(lVar13 + 1) & 1) != 0) goto LAB_006eda74;
    if ((*(byte *)(lVar13 + 1) & 0x10) != 0) {
      lVar8 = 0;
    }
    lVar14 = 0;
  }
  FUN_006ea2d8(*(undefined8 *)(pcVar12 + 0x18),lVar8,0x20);
  pcVar12 = (char *)*param_1;
  if (*pcVar12 != '\0') {
    FUN_006ea2d8(*(undefined8 *)(pcVar12 + 0x18),1);
    pcVar12 = (char *)*param_1;
  }
  FUN_006ea2d8(*(undefined8 *)(pcVar12 + 0x18),1,iVar9 + 0x30);
  lVar13 = *param_1;
  if ((*(long *)(lVar13 + 8) != 0) || ((*(byte *)(*(long *)(lVar13 + 0x10) + 1) >> 3 & 1) != 0)) {
    FUN_006ea2d8(*(undefined8 *)(lVar13 + 0x18),1,0x2e);
    lVar13 = *param_1;
  }
  if (uVar18 <= uVar17) {
    uVar17 = uVar18;
  }
  FUN_006ea2d8(*(undefined8 *)(lVar13 + 0x18),uVar17,uVar6);
  for (uVar18 = uVar18 - uVar17; uVar18 != 0; uVar18 = uVar18 + ~uVar17) {
    auVar20 = FUN_006edd4c(&local_d0,&local_e0);
    uVar17 = auVar20._8_8_;
    if ((auVar20._0_8_ >> 0x20 & 1) == 0) {
      lVar13 = *param_1;
      uVar11 = 0x30;
LAB_006edbd8:
      FUN_006ea2d8(*(undefined8 *)(lVar13 + 0x18),uVar18,uVar11);
      break;
    }
    if (uVar18 <= uVar17 + 1) {
      uVar6 = FUN_006edd4c(&local_d0,&local_e0);
      if (uVar18 - 1 == 0) {
        if (uVar17 == 0) goto LAB_006edb90;
LAB_006edb80:
        uVar10 = 1;
      }
      else {
        if (uVar18 != uVar17 + 1) goto LAB_006edb80;
LAB_006edb90:
        uVar10 = (uint)(4 < (int)uVar6) & (uint)((ulong)uVar6 >> 0x20);
      }
      uVar11 = 0x30;
      if (uVar10 == 0) {
        uVar11 = 0x39;
      }
      FUN_006ea2d8(*(undefined8 *)(*param_1 + 0x18),1,auVar20._0_4_ + uVar10 + 0x30);
      lVar13 = *param_1;
      uVar18 = uVar18 - 1;
      goto LAB_006edbd8;
    }
    FUN_006ea2d8(*(undefined8 *)(*param_1 + 0x18),1,auVar20._0_4_ + 0x30);
    FUN_006ea2d8(*(undefined8 *)(*param_1 + 0x18),uVar17,0x39);
  }
  uVar11 = 0x45;
  if (*(char *)param_1[1] == '\0') {
    uVar11 = 0x65;
  }
  FUN_006ea2d8(*(undefined8 *)(*param_1 + 0x18),1,uVar11);
  uVar11 = 0x2b;
  if (iVar15 == -1 || iVar15 + 1 < 0 != SCARRY4(iVar15,1)) {
    uVar11 = 0x2d;
  }
  FUN_006ea2d8(*(undefined8 *)(*param_1 + 0x18),1,uVar11);
  if (iVar15 < 10) {
    FUN_006ea2d8(*(undefined8 *)(*param_1 + 0x18),1,0x30);
  }
  if ((long)__n < 0) {
LAB_006edd0c:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/string_view:331: libc++ Hardening assertion __len <= static_cast<size_type>(numeric_limits<difference_type>::max()) failed: string_view::string_view(_CharT *, size_t): length does not fit in difference_type\n"
              );
  }
  if (ppuVar7 != &local_90) {
    puVar16 = *(undefined8 **)(*param_1 + 0x18);
    __dest = (void *)puVar16[3];
    puVar16[2] = puVar16[2] + __n;
    if (__n < (ulong)((long)puVar16 + (0x420 - (long)__dest))) {
      memcpy(__dest,&local_90,__n);
      puVar16[3] = puVar16[3] + __n;
    }
    else {
      puVar1 = puVar16 + 4;
      param_3 = (long)__dest - (long)puVar1;
      if (param_3 < 0) goto LAB_006edd0c;
      if ((puVar1 == (undefined8 *)0x0) && (__dest != (void *)0x0)) {
LAB_006edd20:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/string_view:333: libc++ Hardening assertion __len == 0 || __s != nullptr failed: string_view::string_view(_CharT *, size_t): received nullptr\n"
                   ,param_3);
      }
      (*(code *)puVar16[1])(*puVar16,puVar16 + 4);
      puVar16[3] = puVar1;
      (*(code *)puVar16[1])(*puVar16,&local_90,__n);
    }
  }
  FUN_006ea2d8(*(undefined8 *)(*param_1 + 0x18),lVar14,0x20);
LAB_006edcd8:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 006edd4c  FUN_006edd4c =====

undefined1  [16] FUN_006edd4c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = param_2;
  uStack_38 = param_1;
  uVar1 = FUN_006ede10();
  if (uVar1 >> 0x20 == 0) {
    lVar3 = 0;
    uVar1 = 0;
  }
  else {
    uVar2 = FUN_006edfb0(&local_40);
    lVar3 = 0;
    if ((uVar2 >> 0x20 != 0) && ((uVar2 & 0xffffffff) == 9)) {
      lVar3 = 0;
      do {
        FUN_006ede10(param_1,param_2);
        lVar3 = lVar3 + 1;
        uVar2 = FUN_006edfb0(&local_40);
        if (uVar2 >> 0x20 == 0) break;
      } while ((uVar2 & 0xffffffff) == 9);
    }
    if ((int)uVar1 == 9) {
      uVar1 = 0;
      lVar3 = lVar3 + 1;
    }
    else {
      uVar1 = uVar1 | 0x100000000;
    }
  }
  auVar4._8_8_ = lVar3;
  auVar4._0_8_ = uVar1;
  return auVar4;
}


// ===== 006ede10  FUN_006ede10 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_006ede10(ulong *param_1,long *param_2)

{
  uint uVar1;
  code *pcVar2;
  ulong *puVar3;
  long lVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  if (param_2[1] == 0) {
    uVar5 = *param_1;
    if (param_1[1] <= uVar5) {
      return 0;
    }
    *param_1 = uVar5 + 1;
    if (param_1[6] <= uVar5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x6edfb0);
      (*pcVar2)();
    }
    uVar1 = *(uint *)(param_1[5] + uVar5 * 4);
    auVar9._0_8_ = CONCAT44(uVar1,uVar1);
    auVar9._8_4_ = uVar1;
    auVar9._12_4_ = uVar1;
    uVar7 = NEON_ushl(auVar9._0_8_,DAT_001f5040,4);
    auVar6 = NEON_umull(auVar9._0_8_,_DAT_001f4b70,4);
    auVar8 = NEON_umull(uVar7,DAT_001f5c20,4);
    auVar11._8_4_ = 0xcccccccd;
    auVar11._0_8_ = 0xcccccccdcccccccd;
    auVar11._12_4_ = 0xcccccccd;
    auVar12._4_4_ = auVar6._12_4_;
    auVar12._0_4_ = auVar6._4_4_;
    auVar12._8_4_ = (int)((auVar9._8_8_ & 0xffffffff) * (_UNK_001f4b78 & 0xffffffff) >> 0x20);
    auVar12._12_4_ = (int)((auVar9._8_8_ >> 0x20) * (_UNK_001f4b78 >> 0x20) >> 0x20);
    auVar6 = NEON_ushl(auVar12,_DAT_001f2650,4);
    uVar5 = NEON_ushl(CONCAT44(auVar8._12_4_,auVar8._4_4_),DAT_001f53e0,4);
    uVar10 = (uint)((auVar6._8_8_ & 0xffffffff) * (auVar11._8_8_ & 0xffffffff) >> 0x20);
    auVar12 = NEON_umull(auVar6._0_8_,0xcccccccdcccccccd,4);
    uVar5 = uVar5 & 0xffff0000ffff;
    auVar9 = NEON_umull(uVar5,0x1999999a1999999a,4);
    puVar3 = param_1 + 2;
    *puVar3 = CONCAT17(auVar6[0xc] + (char)(uVar10 >> 3) * -10,
                       CONCAT16(auVar6[8] + (char)(uVar10 >> 3) * -10,
                                CONCAT15(auVar6[4] + (char)(auVar12._12_4_ >> 3) * -10,
                                         CONCAT14(auVar6[0] + (char)(auVar12._4_4_ >> 3) * -10,
                                                  CONCAT13((char)(uVar5 >> 0x20) + auVar9[0xc] * -10
                                                           ,CONCAT12((char)uVar5 + auVar9[4] * -10,
                                                                     CONCAT11((char)(uVar1 / 
                                                  10000000) +
                                                  (char)((uVar1 / 10000000) * 0x199a >> 0x10) * -10,
                                                  (char)(uVar1 / 100000000) +
                                                  (char)((uint)((ulong)uVar1 * 0x55e63b89 >> 0x20) /
                                                        0x14000000) * -10))))))) |
              0x3030303030303030;
    *(byte *)(param_1 + 3) = (char)uVar1 + (char)(uVar1 / 10) * -10 | 0x30;
    lVar4 = 8;
    param_1[4] = 9;
    *param_2 = (long)puVar3;
    param_2[1] = 9;
  }
  else {
    puVar3 = (ulong *)*param_2;
    lVar4 = param_2[1] + -1;
  }
  uVar5 = *puVar3;
  *param_2 = (long)puVar3 + 1;
  param_2[1] = lVar4;
  return (ulong)(byte)uVar5 + 0xffffffd0 | 0x100000000;
}


// ===== 006edfb0  FUN_006edfb0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_006edfb0(undefined8 *param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  uint uVar16;
  undefined1 auVar17 [16];
  
  puVar5 = (undefined8 *)*param_1;
  if (puVar5[1] == 0) {
    puVar6 = (ulong *)param_1[1];
    uVar9 = *puVar6;
    if (puVar6[1] <= uVar9) {
      return 0;
    }
    *puVar6 = uVar9 + 1;
    uVar3 = DAT_001f53e0;
    auVar14 = _DAT_001f2650;
    if (puVar6[6] <= uVar9) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x6ee1a8);
      (*pcVar4)();
    }
    uVar2 = *(uint *)(puVar6[5] + uVar9 * 4);
    auVar15._0_8_ = CONCAT44(uVar2,uVar2);
    auVar15._8_4_ = uVar2;
    auVar15._12_4_ = uVar2;
    auVar17._8_4_ = 0xcccccccd;
    auVar17._0_8_ = 0xcccccccdcccccccd;
    auVar17._12_4_ = 0xcccccccd;
    uVar12 = NEON_ushl(auVar15._0_8_,DAT_001f5040,4);
    auVar10 = NEON_umull(auVar15._0_8_,_DAT_001f4b70,4);
    auVar13 = NEON_umull(uVar12,DAT_001f5c20,4);
    auVar11._4_4_ = auVar10._12_4_;
    auVar11._0_4_ = auVar10._4_4_;
    auVar11._8_4_ = (int)((auVar15._8_8_ & 0xffffffff) * (_UNK_001f4b78 & 0xffffffff) >> 0x20);
    auVar11._12_4_ = (int)((auVar15._8_8_ >> 0x20) * (_UNK_001f4b78 >> 0x20) >> 0x20);
    puVar6[4] = 9;
    auVar15 = NEON_ushl(auVar11,auVar14,4);
    uVar9 = NEON_ushl(CONCAT44(auVar13._12_4_,auVar13._4_4_),uVar3,4);
    uVar16 = (uint)((auVar15._8_8_ & 0xffffffff) * (auVar17._8_8_ & 0xffffffff) >> 0x20);
    auVar10 = NEON_umull(auVar15._0_8_,0xcccccccdcccccccd,4);
    *(byte *)(puVar6 + 3) = (char)uVar2 + (char)(uVar2 / 10) * -10 | 0x30;
    uVar9 = uVar9 & 0xffff0000ffff;
    auVar14 = NEON_umull(uVar9,0x1999999a1999999a,4);
    puVar6[2] = CONCAT17(auVar15[0xc] + (char)(uVar16 >> 3) * -10,
                         CONCAT16(auVar15[8] + (char)(uVar16 >> 3) * -10,
                                  CONCAT15(auVar15[4] + (char)(auVar10._12_4_ >> 3) * -10,
                                           CONCAT14(auVar15[0] + (char)(auVar10._4_4_ >> 3) * -10,
                                                    CONCAT13((char)(uVar9 >> 0x20) -
                                                             auVar14[0xc] *
                                                             SUB161(ZEXT816(0xa0000000a),4),
                                                             CONCAT12((char)uVar9 -
                                                                      auVar14[4] *
                                                                      SUB161(ZEXT816(0xa0000000a),0)
                                                                      ,CONCAT11((char)(uVar2 / 
                                                  10000000) +
                                                  (char)((uVar2 / 10000000) * 0x199a >> 0x10) * -10,
                                                  (char)(uVar2 / 100000000) +
                                                  (char)((uint)((ulong)uVar2 * 0x55e63b89 >> 0x20) /
                                                        0x14000000) * -10))))))) |
                0x3030303030303030;
    lVar7 = *(long *)(param_1[1] + 0x20);
    if (8 < 9U - lVar7) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/array:282: libc++ Hardening assertion __n < _Size failed: out-of-bounds access in std::array<T, N>\n"
                );
    }
    if (lVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/string_view:331: libc++ Hardening assertion __len <= static_cast<size_type>(numeric_limits<difference_type>::max()) failed: string_view::string_view(_CharT *, size_t): length does not fit in difference_type\n"
                );
    }
    lVar1 = param_1[1] + (9U - lVar7) + 0x10;
    if ((lVar7 != 0) && (lVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/string_view:333: libc++ Hardening assertion __len == 0 || __s != nullptr failed: string_view::string_view(_CharT *, size_t): received nullptr\n"
                );
    }
    plVar8 = (long *)*param_1;
    *plVar8 = lVar1;
    plVar8[1] = lVar7;
    puVar5 = (undefined8 *)*param_1;
    if (puVar5[1] == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/string_view:425: libc++ Hardening assertion !empty() failed: string_view::front(): string is empty\n"
                );
    }
  }
  return (ulong)*(byte *)*puVar5 + 0xffffffd0 | 0x100000000;
}


// ===== 006ee1e4  FUN_006ee1e4 =====

void FUN_006ee1e4(long *param_1,byte *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  void *__dest;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  code *pcVar6;
  undefined1 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined4 uVar10;
  char *pcVar11;
  long lVar12;
  ulong uVar13;
  int iVar14;
  int iVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  uint uVar22;
  int iVar23;
  undefined8 *puVar24;
  ulong uVar25;
  undefined8 uVar26;
  ulong uVar27;
  ulong uVar28;
  long lVar29;
  long local_b0;
  undefined1 local_88;
  undefined1 *local_87;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 *puStack_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  iVar23 = 0;
  local_68 = *(long *)(lVar5 + 0x28);
  lVar2 = *(long *)(param_2 + 0x10);
  uVar16 = (ulong)*param_2;
  uVar28 = *(ulong *)(param_2 + 0x18);
  lVar29 = lVar2 + -4;
  uVar19 = *(ulong *)(param_2 + 8);
  do {
    iVar14 = (int)uVar16;
    uVar13 = uVar19;
    if (iVar14 != 0) {
      if (uVar19 != 0) goto LAB_006ee258;
      uVar16 = 0;
LAB_006ee324:
      uVar19 = 0;
      goto LAB_006ee330;
    }
    if (uVar19 == 0) {
      uVar16 = 0;
      uVar19 = 0;
      iVar14 = 0;
      goto LAB_006ee330;
    }
LAB_006ee258:
    uVar13 = uVar19 - 1;
    if (uVar28 <= uVar13) {
LAB_006ee764:
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x6ee768);
      (*pcVar6)();
    }
    uVar16 = 0;
    uVar8 = uVar19;
    do {
      uVar16 = uVar16 + (ulong)*(uint *)(lVar29 + uVar8 * 4) * 10;
      uVar21 = uVar8 - 1;
      *(int *)(lVar29 + uVar8 * 4) = (int)uVar16;
      uVar16 = uVar16 >> 0x20;
      uVar8 = uVar21;
    } while (uVar21 != 0);
    if (*(int *)(lVar2 + uVar13 * 4) != 0) {
      uVar13 = uVar19;
    }
    if (uVar16 == 9) {
      uVar19 = 0;
      uVar8 = uVar13;
      do {
        uVar21 = uVar19;
        uVar19 = uVar21 + 1;
        if (uVar8 == 0) {
          uVar16 = 0;
          uVar13 = uVar8;
          break;
        }
        uVar13 = uVar8 - 1;
        if (uVar28 <= uVar13) goto LAB_006ee764;
        uVar16 = 0;
        uVar25 = uVar8;
        do {
          uVar16 = uVar16 + (ulong)*(uint *)(lVar29 + uVar25 * 4) * 10;
          uVar17 = uVar25 - 1;
          *(int *)(lVar29 + uVar25 * 4) = (int)uVar16;
          uVar16 = uVar16 >> 0x20;
          uVar25 = uVar17;
        } while (uVar17 != 0);
        if (*(int *)(lVar2 + uVar13 * 4) != 0) {
          uVar13 = uVar8;
        }
        uVar8 = uVar13;
      } while (uVar16 == 9);
      if (iVar14 != 0) goto LAB_006ee330;
      if (uVar19 != 0) break;
    }
    else if (iVar14 != 0) goto LAB_006ee324;
    iVar23 = iVar23 + 1;
    uVar19 = uVar13;
  } while( true );
  iVar23 = iVar23 + 1;
  iVar14 = 9;
  uVar19 = uVar21;
LAB_006ee330:
  uVar22 = (uint)uVar16;
  iVar15 = iVar14;
  if (uVar19 < *(ulong *)(*param_1 + 8)) {
    uVar26 = 0x39;
  }
  else if ((((uVar19 != *(ulong *)(*param_1 + 8)) && (uVar19 != 0)) || (5 < uVar22)) ||
          ((uVar26 = 0x39, uVar13 != 0 && (uVar22 == 5)))) {
    uVar26 = 0x30;
    iVar15 = 1;
    if (iVar14 != 9) {
      iVar15 = iVar14 + 1;
    }
    iVar23 = iVar23 - (uint)(iVar15 == 1);
  }
  local_88 = 0x2d;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_77 = 0xaaaaaaaaaaaaaa;
  uStack_7f = 0xaaaaaaaaaaaaaa;
  uStack_78 = 0xaa;
  local_87 = &DAT_aaaaaaaaaaaaaaaa;
  if (iVar23 < 9) {
    uVar8 = (ulong)&local_88 | 2;
    local_87 = (undefined1 *)0xaaaaaaaaaaaaaa30;
  }
  else {
    uVar8 = (ulong)&local_88 | 1;
  }
  puVar7 = (undefined1 *)FUN_0062024c(iVar23 + 1,uVar8);
  pcVar11 = (char *)*param_1;
  lVar12 = *(long *)(pcVar11 + 0x10);
  if (*(long *)(pcVar11 + 8) == 0) {
    lVar20 = 1;
    if ((*(byte *)(lVar12 + 1) & 8) != 0) {
      lVar20 = 2;
    }
  }
  else {
    lVar20 = 2;
  }
  uVar8 = (long)puVar7 - (long)&local_88;
  uVar3 = *(uint *)(lVar12 + 4);
  lVar20 = *(long *)(pcVar11 + 8) + uVar8 + lVar20;
  if (*pcVar11 != '\0') {
    lVar20 = lVar20 + 1;
  }
  if (((int)uVar3 < 0) ||
     (lVar9 = (ulong)uVar3 - (lVar20 + 1U), (ulong)uVar3 < lVar20 + 1U || lVar9 == 0)) {
    local_b0 = 0;
LAB_006ee440:
    lVar9 = 0;
  }
  else {
    local_b0 = lVar9;
    if ((*(byte *)(lVar12 + 1) & 1) != 0) goto LAB_006ee440;
    local_b0 = 0;
    if ((*(byte *)(lVar12 + 1) & 0x10) != 0) {
      lVar9 = 0;
    }
  }
  FUN_006ea2d8(*(undefined8 *)(pcVar11 + 0x18),lVar9,0x20);
  pcVar11 = (char *)*param_1;
  if (*pcVar11 != '\0') {
    FUN_006ea2d8(*(undefined8 *)(pcVar11 + 0x18),1);
    pcVar11 = (char *)*param_1;
  }
  FUN_006ea2d8(*(undefined8 *)(pcVar11 + 0x18),1,iVar15 + 0x30);
  lVar12 = *param_1;
  if ((*(long *)(lVar12 + 8) == 0) && ((*(byte *)(*(long *)(lVar12 + 0x10) + 1) >> 3 & 1) == 0)) {
    uVar21 = 0;
  }
  else {
    FUN_006ea2d8(*(undefined8 *)(lVar12 + 0x18),1,0x2e);
    lVar12 = *param_1;
    uVar21 = *(ulong *)(lVar12 + 8);
  }
  uVar25 = uVar21;
  if (uVar19 <= uVar21) {
    uVar25 = uVar19;
  }
  FUN_006ea2d8(*(undefined8 *)(lVar12 + 0x18),uVar25,uVar26);
  uVar21 = uVar21 - uVar25;
  if (uVar21 != 0) {
    if (uVar22 == 0) goto LAB_006ee530;
LAB_006ee524:
    uVar19 = uVar13;
    if (uVar13 != 0) goto LAB_006ee534;
    uVar25 = 0;
    do {
      lVar12 = 0;
      uVar19 = uVar21;
      uVar17 = uVar16;
LAB_006ee5e0:
      uVar16 = uVar25;
      uVar25 = lVar12 + 1;
      uVar21 = uVar19 - uVar25;
      iVar23 = (int)uVar17;
      uVar22 = (uint)uVar16;
      if (uVar19 < uVar25 || uVar21 == 0) {
        if (((uVar19 < uVar25) || (5 < uVar22)) ||
           ((uVar22 == 5 && ((uVar13 != 0 || (lVar12 != 0 || (uVar17 & 1) != 0)))))) {
          FUN_006ea2d8(*(undefined8 *)(*param_1 + 0x18),1,iVar23 + 0x31);
          uVar21 = uVar19 - 1;
        }
        else {
          FUN_006ea2d8(*(undefined8 *)(*param_1 + 0x18),1,iVar23 + 0x30);
          FUN_006ea2d8(*(undefined8 *)(*param_1 + 0x18),uVar19 - 1,0x39);
          uVar21 = 0;
        }
        goto LAB_006ee638;
      }
      FUN_006ea2d8(*(undefined8 *)(*param_1 + 0x18),1,iVar23 + 0x30);
      FUN_006ea2d8(*(undefined8 *)(*param_1 + 0x18),lVar12,0x39);
      if (uVar22 != 0) goto LAB_006ee524;
LAB_006ee530:
      uVar19 = uVar13;
      if (uVar13 == 0) goto LAB_006ee638;
LAB_006ee534:
      uVar13 = uVar19 - 1;
      if (uVar28 <= uVar13) goto LAB_006ee764;
      uVar25 = 0;
      uVar17 = uVar19;
      do {
        uVar25 = uVar25 + (ulong)*(uint *)(lVar29 + uVar17 * 4) * 10;
        uVar27 = uVar17 - 1;
        *(int *)(lVar29 + uVar17 * 4) = (int)uVar25;
        uVar25 = uVar25 >> 0x20;
        uVar17 = uVar27;
      } while (uVar27 != 0);
      if (*(int *)(lVar2 + uVar13 * 4) != 0) {
        uVar13 = uVar19;
      }
    } while (uVar25 != 9);
    lVar12 = 0;
    uVar27 = uVar13;
    do {
      lVar12 = lVar12 + 1;
      uVar19 = uVar21;
      uVar17 = uVar16;
      if (uVar27 == 0) {
        uVar25 = 0;
        uVar13 = uVar27;
        break;
      }
      uVar13 = uVar27 - 1;
      if (uVar28 <= uVar13) goto LAB_006ee764;
      uVar25 = 0;
      uVar18 = uVar27;
      do {
        uVar25 = uVar25 + (ulong)*(uint *)(lVar29 + uVar18 * 4) * 10;
        uVar4 = uVar18 - 1;
        *(int *)(lVar29 + uVar18 * 4) = (int)uVar25;
        uVar25 = uVar25 >> 0x20;
        uVar18 = uVar4;
      } while (uVar4 != 0);
      if (*(int *)(lVar2 + uVar13 * 4) != 0) {
        uVar13 = uVar27;
      }
      uVar27 = uVar13;
    } while (uVar25 == 9);
    goto LAB_006ee5e0;
  }
LAB_006ee638:
  FUN_006ea2d8(*(undefined8 *)(*param_1 + 0x18),uVar21,0x30);
  uVar10 = 0x45;
  if (*(char *)param_1[1] == '\0') {
    uVar10 = 0x65;
  }
  FUN_006ea2d8(*(undefined8 *)(*param_1 + 0x18),1,uVar10);
  if ((long)uVar8 < 0) {
LAB_006ee79c:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/string_view:331: libc++ Hardening assertion __len <= static_cast<size_type>(numeric_limits<difference_type>::max()) failed: string_view::string_view(_CharT *, size_t): length does not fit in difference_type\n"
              );
  }
  if (puVar7 != &local_88) {
    puVar24 = *(undefined8 **)(*param_1 + 0x18);
    __dest = (void *)puVar24[3];
    puVar24[2] = puVar24[2] + uVar8;
    if (uVar8 < (ulong)((long)puVar24 + (0x420 - (long)__dest))) {
      memcpy(__dest,&local_88,uVar8);
      puVar24[3] = puVar24[3] + uVar8;
    }
    else {
      puVar1 = puVar24 + 4;
      if ((long)__dest - (long)puVar1 < 0) goto LAB_006ee79c;
      if ((puVar1 == (undefined8 *)0x0) && (__dest != (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/string_view:333: libc++ Hardening assertion __len == 0 || __s != nullptr failed: string_view::string_view(_CharT *, size_t): received nullptr\n"
                   ,(long)__dest - (long)puVar1);
      }
      (*(code *)puVar24[1])(*puVar24,puVar24 + 4);
      puVar24[3] = puVar1;
      (*(code *)puVar24[1])(*puVar24,&local_88,uVar8);
    }
  }
  FUN_006ea2d8(*(undefined8 *)(*param_1 + 0x18),local_b0,0x20);
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 006ee7c8  FUN_006ee7c8 =====

void FUN_006ee7c8(undefined8 *param_1,uint param_2)

{
  undefined *puVar1;
  
  param_1[1] = 0;
  puVar1 = &DAT_001b3348;
  if ((param_2 & 1) != 0) {
    puVar1 = &DAT_001b07f5;
  }
  *param_1 = 0;
  param_1[2] = 0;
  FUN_00547cac(param_1,puVar1,param_2 & 1);
  puVar1 = &DAT_001b3348;
  if ((param_2 & 2) != 0) {
    puVar1 = &DAT_001ce25a;
  }
  FUN_00547cac(param_1,puVar1,(param_2 & 2) >> 1);
  puVar1 = &DAT_001b3348;
  if ((param_2 & 4) != 0) {
    puVar1 = &DAT_001d5e07;
  }
  FUN_00547cac(param_1,puVar1,(param_2 & 4) >> 2);
  puVar1 = &DAT_001b3348;
  if ((param_2 & 8) != 0) {
    puVar1 = &DAT_001a9504;
  }
  FUN_00547cac(param_1,puVar1,(param_2 & 8) >> 3);
  puVar1 = &DAT_001b3348;
  if ((param_2 & 0x10) != 0) {
    puVar1 = &DAT_0019cb7e;
  }
  FUN_00547cac(param_1,puVar1,(param_2 & 0x10) >> 4);
  return;
}


// ===== 006ee894  FUN_006ee894 =====

undefined8
FUN_006ee894(undefined8 *param_1,void *param_2,ulong param_3,uint param_4,uint param_5,uint param_6)

{
  undefined8 *puVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar5 = param_3;
  if ((int)param_5 < 0) {
    if ((long)param_3 < 0) goto LAB_006eea08;
  }
  else if (param_5 <= param_3) {
    uVar5 = (ulong)param_5;
  }
  if ((param_2 == (void *)0x0) && (uVar5 != 0)) {
LAB_006eea1c:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/string_view:333: libc++ Hardening assertion __len == 0 || __s != nullptr failed: string_view::string_view(_CharT *, size_t): received nullptr\n"
               ,param_3);
  }
  uVar4 = (ulong)(param_4 & ((int)param_4 >> 0x1f ^ 0xffffffffU));
  lVar2 = 0;
  if (uVar5 <= uVar4) {
    lVar2 = uVar4 - uVar5;
  }
  if ((param_6 & 1) == 0) {
    FUN_006ea2d8(param_1,lVar2,0x20);
    if (uVar5 != 0) {
      pvVar3 = (void *)param_1[3];
      param_1[2] = param_1[2] + uVar5;
      if (uVar5 < (ulong)((long)param_1 + (0x420 - (long)pvVar3))) {
        memcpy(pvVar3,param_2,uVar5);
        param_1[3] = param_1[3] + uVar5;
      }
      else {
        puVar1 = param_1 + 4;
        param_3 = (long)pvVar3 - (long)puVar1;
        if ((long)param_3 < 0) goto LAB_006eea08;
        if ((puVar1 == (undefined8 *)0x0) && (pvVar3 != (void *)0x0)) goto LAB_006eea1c;
        (*(code *)param_1[1])(*param_1,param_1 + 4,param_3);
        param_1[3] = puVar1;
        (*(code *)param_1[1])(*param_1,param_2,uVar5);
      }
    }
  }
  else {
    if (uVar5 != 0) {
      pvVar3 = (void *)param_1[3];
      param_1[2] = param_1[2] + uVar5;
      if (uVar5 < (ulong)((long)param_1 + (0x420 - (long)pvVar3))) {
        memcpy(pvVar3,param_2,uVar5);
        param_1[3] = param_1[3] + uVar5;
      }
      else {
        puVar1 = param_1 + 4;
        param_3 = (long)pvVar3 - (long)puVar1;
        if ((long)param_3 < 0) {
LAB_006eea08:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/string_view:331: libc++ Hardening assertion __len <= static_cast<size_type>(numeric_limits<difference_type>::max()) failed: string_view::string_view(_CharT *, size_t): length does not fit in difference_type\n"
                     ,param_3);
        }
        if ((puVar1 == (undefined8 *)0x0) && (pvVar3 != (void *)0x0)) goto LAB_006eea1c;
        (*(code *)param_1[1])(*param_1,param_1 + 4);
        param_1[3] = puVar1;
        (*(code *)param_1[1])(*param_1,param_2,uVar5);
      }
    }
    FUN_006ea2d8(param_1,lVar2,0x20);
  }
  return 1;
}


// ===== 006eea30  FUN_006eea30 =====

byte FUN_006eea30(undefined8 param_1,code *param_2,byte *param_3,long param_4,long param_5,
                 ulong param_6)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  char *pcVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  byte *pbVar9;
  ulong uVar10;
  ulong uVar11;
  byte bVar12;
  uint uVar13;
  void *__src;
  char *pcVar14;
  ulong uVar15;
  void *pvVar16;
  uint local_4b0;
  uint uStack_4ac;
  uint uStack_4a8;
  byte bStack_4a4;
  byte bStack_4a3;
  byte bStack_4a2;
  undefined1 uStack_4a1;
  uint local_49c;
  uint local_498;
  uint local_494;
  undefined8 local_490;
  code *pcStack_488;
  long local_480;
  undefined1 *local_478;
  undefined1 auStack_470 [1024];
  long local_70 [2];
  
  lVar7 = tpidr_el0;
  local_70[0] = *(long *)(lVar7 + 0x28);
  memset(auStack_470,0xaa,0x400);
  local_480 = 0;
  local_490 = param_1;
  pcStack_488 = param_2;
  local_478 = auStack_470;
  if (param_4 == -1) {
    pcVar14 = *(char **)(param_3 + 0x10);
    pcVar4 = *(char **)(param_3 + 0x18);
    if (pcVar14 != pcVar4) {
      pvVar16 = *(void **)(param_3 + 8);
      uVar15 = 0;
      __src = pvVar16;
      do {
        __src = (void *)((long)__src + uVar15);
        uVar15 = (long)pvVar16 + (*(long *)(pcVar14 + 8) - (long)__src);
        if ((long)uVar15 < 0) goto LAB_006ef090;
        if ((__src == (void *)0x0) && (uVar15 != 0)) goto LAB_006ef0a4;
        if (*pcVar14 == '\x01') {
          iVar5 = *(int *)(pcVar14 + 0x10);
          if (param_6 <= (ulong)(long)(iVar5 + -1)) goto LAB_006eefbc;
          if (pcVar14[0x1c] == '\0') {
            uVar10 = 0xffffffff;
            uVar11 = 0xffffffffaa090000;
LAB_006eefa0:
            puVar3 = (undefined8 *)(param_5 + (long)(iVar5 + -1) * 0x10);
            uVar10 = (*(code *)puVar3[1])(*puVar3,uVar11 | (byte)pcVar14[0x1e],uVar10,&local_490);
            if ((uVar10 & 1) != 0) goto LAB_006eedfc;
          }
          else {
            local_4b0 = *(uint *)(pcVar14 + 0x14);
            if (local_4b0 == 0xfffffffe || (int)(local_4b0 + 2) < 0 != SCARRY4(local_4b0,2)) {
              if (~local_4b0 <= param_6) {
                uVar10 = (ulong)~local_4b0 - 1;
                if (param_6 <= uVar10) {
LAB_006ef0b8:
                    /* WARNING: Does not return */
                  pcVar8 = (code *)SoftwareBreakpoint(1,0x6ef0bc);
                  (*pcVar8)();
                }
                puVar3 = (undefined8 *)(param_5 + uVar10 * 0x10);
                uVar10 = (*(code *)puVar3[1])(*puVar3,0x90013,0,&local_4b0);
                if ((uVar10 & 1) != 0) {
                  if ((int)local_4b0 < 0) {
                    uVar13 = 1;
                    if (local_4b0 < 0x80000002) {
                      local_4b0 = 0x80000001;
                    }
                    local_4b0 = -local_4b0;
                  }
                  else {
                    uVar13 = 0;
                  }
                  goto LAB_006eef28;
                }
              }
            }
            else {
              uVar13 = 0;
LAB_006eef28:
              local_494 = *(uint *)(pcVar14 + 0x18);
              uVar10 = (ulong)local_494;
              if (local_494 != 0xfffffffe && (int)(local_494 + 2) < 0 == SCARRY4(local_494,2)) {
LAB_006eef78:
                uVar11 = (ulong)local_4b0 << 0x20 | (ulong)(byte)pcVar14[0x1d] << 0x10 |
                         (ulong)((byte)pcVar14[0x1c] | uVar13) << 8 | 0xaa000000;
                goto LAB_006eefa0;
              }
              if ((uVar10 ^ 0xffffffff) <= param_6) {
                uVar10 = (uVar10 ^ 0xffffffff) - 1;
                if (param_6 <= uVar10) goto LAB_006ef0b8;
                puVar3 = (undefined8 *)(param_5 + uVar10 * 0x10);
                uVar10 = (*(code *)puVar3[1])(*puVar3,0x90013,0,&local_494);
                if ((uVar10 & 1) != 0) {
                  uVar10 = (ulong)local_494;
                  goto LAB_006eef78;
                }
              }
            }
          }
LAB_006eefbc:
          bVar12 = 0;
          goto LAB_006ef040;
        }
        if (uVar15 != 0) {
          local_480 = local_480 + uVar15;
          if (uVar15 < (ulong)((long)local_70 - (long)local_478)) {
            memcpy(local_478,__src,uVar15);
            local_478 = local_478 + uVar15;
          }
          else {
            lVar6 = (long)local_478 - (long)auStack_470;
            if (lVar6 < 0) goto LAB_006ef090;
            (*pcStack_488)(local_490,auStack_470,lVar6);
            local_478 = auStack_470;
            (*pcStack_488)(local_490,__src,uVar15);
          }
        }
LAB_006eedfc:
        pcVar14 = pcVar14 + 0x20;
      } while (pcVar14 != pcVar4);
    }
    bVar12 = *param_3 ^ 1;
  }
  else {
    if (param_4 < 0) goto LAB_006ef090;
    if ((param_3 == (byte *)0x0) && (param_4 != 0)) {
LAB_006ef0a4:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/string_view:333: libc++ Hardening assertion __len == 0 || __s != nullptr failed: string_view::string_view(_CharT *, size_t): received nullptr\n"
                );
    }
    local_49c = 0;
    if (param_4 != 0) {
      pbVar2 = param_3 + param_4;
LAB_006eeac8:
      uVar15 = (long)pbVar2 - (long)param_3;
      pbVar9 = (byte *)memchr(param_3,0x25,(long)pbVar2 - (long)param_3);
      if (pbVar9 == (byte *)0x0) {
        if ((long)uVar15 < 0) goto LAB_006ef090;
        if (param_3 == (byte *)0x0) goto LAB_006ef0a4;
        local_480 = local_480 + uVar15;
        if (uVar15 < (ulong)((long)local_70 - (long)local_478)) {
          memcpy(local_478,param_3,uVar15);
          local_478 = local_478 + uVar15;
        }
        else {
          lVar6 = (long)local_478 - (long)auStack_470;
          if (lVar6 < 0) goto LAB_006ef090;
          (*pcStack_488)(local_490,auStack_470,lVar6);
          local_478 = auStack_470;
          (*pcStack_488)(local_490,param_3,uVar15);
        }
        goto LAB_006ef03c;
      }
      uVar15 = (long)pbVar9 - (long)param_3;
      if ((long)uVar15 < 0) goto LAB_006ef090;
      if (param_3 == (byte *)0x0) goto LAB_006ef0a4;
      if (pbVar9 != param_3) {
        local_480 = local_480 + uVar15;
        if (uVar15 < (ulong)((long)local_70 - (long)local_478)) {
          memcpy(local_478,param_3,uVar15);
          local_478 = local_478 + uVar15;
        }
        else {
          lVar6 = (long)local_478 - (long)auStack_470;
          if (lVar6 < 0) goto LAB_006ef090;
          (*pcStack_488)(local_490,auStack_470,lVar6);
          local_478 = auStack_470;
          (*pcStack_488)(local_490,param_3,uVar15);
        }
      }
      pbVar1 = pbVar9 + 1;
      if (pbVar1 < pbVar2) {
        if ((long)(char)(&DAT_00208347)[*pbVar1] < 0) {
          if (*pbVar1 == 0x25) {
            local_480 = local_480 + 1;
            if ((ulong)((long)local_70 - (long)local_478) < 2) {
              lVar6 = (long)local_478 - (long)auStack_470;
              if (lVar6 < 0) goto LAB_006ef090;
              (*pcStack_488)(local_490,auStack_470,lVar6);
              local_478 = auStack_470;
              (*pcStack_488)(local_490,&DAT_001ef44c,1);
            }
            else {
              *local_478 = 0x25;
              local_478 = local_478 + 1;
            }
LAB_006eebac:
            param_3 = pbVar9 + 2;
LAB_006eebb0:
            if (param_3 == pbVar2) goto LAB_006ef03c;
            goto LAB_006eeac8;
          }
          uStack_4a1 = 0xaa;
          local_4b0 = 0xaaaaaaaa;
          bStack_4a4 = 0;
          bStack_4a3 = 9;
          bStack_4a2 = 0x13;
          uStack_4ac = 0xffffffff;
          uStack_4a8 = 0xffffffff;
          param_3 = (byte *)FUN_006ef1c0(pbVar1,pbVar2,&local_4b0,&local_49c);
          if (param_3 == (byte *)0x0) goto LAB_006eedb0;
          if ((long)param_3 - (long)pbVar1 < 0) goto LAB_006ef090;
          if (pbVar1 == (byte *)0x0) goto LAB_006ef0a4;
          iVar5 = local_4b0 - 1;
          if ((ulong)(long)iVar5 < param_6) {
            if (bStack_4a4 == 0) {
              uVar15 = 0xffffffff;
              uVar10 = 0xffffffffaa090000;
LAB_006eed94:
              puVar3 = (undefined8 *)(param_5 + (long)iVar5 * 0x10);
              uVar15 = (*(code *)puVar3[1])(*puVar3,uVar10 | bStack_4a2,uVar15,&local_490);
              if ((uVar15 & 1) != 0) goto LAB_006eebb0;
            }
            else {
              local_494 = uStack_4ac;
              if (uStack_4ac == 0xfffffffe || (int)(uStack_4ac + 2) < 0 != SCARRY4(uStack_4ac,2)) {
                if (~uStack_4ac <= param_6) {
                  uVar15 = (ulong)~uStack_4ac - 1;
                  if (param_6 <= uVar15) goto LAB_006ef0b8;
                  puVar3 = (undefined8 *)(param_5 + uVar15 * 0x10);
                  uVar15 = (*(code *)puVar3[1])(*puVar3,0x90013,0,&local_494);
                  if ((uVar15 & 1) != 0) {
                    if ((int)local_494 < 0) {
                      uVar13 = 1;
                      if (local_494 < 0x80000002) {
                        local_494 = 0x80000001;
                      }
                      local_494 = -local_494;
                    }
                    else {
                      uVar13 = 0;
                    }
                    goto LAB_006eed20;
                  }
                }
              }
              else {
                uVar13 = 0;
LAB_006eed20:
                uVar15 = (ulong)uStack_4a8;
                local_498 = uStack_4a8;
                if (uStack_4a8 != 0xfffffffe && (int)(uStack_4a8 + 2) < 0 == SCARRY4(uStack_4a8,2))
                {
LAB_006eed6c:
                  uVar10 = (ulong)local_494 << 0x20 | (ulong)bStack_4a3 << 0x10 |
                           (ulong)(bStack_4a4 | uVar13) << 8 | 0xaa000000;
                  goto LAB_006eed94;
                }
                if ((uVar15 ^ 0xffffffff) <= param_6) {
                  uVar15 = (uVar15 ^ 0xffffffff) - 1;
                  if (param_6 <= uVar15) goto LAB_006ef0b8;
                  puVar3 = (undefined8 *)(param_5 + uVar15 * 0x10);
                  uVar15 = (*(code *)puVar3[1])(*puVar3,0x90013,0,&local_498);
                  if ((uVar15 & 1) != 0) {
                    uVar15 = (ulong)local_498;
                    goto LAB_006eed6c;
                  }
                }
              }
            }
          }
        }
        else {
          uVar15 = (ulong)local_49c;
          if ((int)local_49c < 0) goto LAB_006eedb0;
          local_49c = local_49c + 1;
          if (pbVar1 == (byte *)0x0) goto LAB_006ef0a4;
          if ((uVar15 < param_6) &&
             (puVar3 = (undefined8 *)(param_5 + uVar15 * 0x10),
             uVar15 = (*(code *)puVar3[1])
                                (*puVar3,(long)(char)(&DAT_00208347)[*pbVar1] | 0xffffffffaa090000,
                                 0xffffffff,&local_490), (uVar15 & 1) != 0)) goto LAB_006eebac;
        }
      }
LAB_006eedb0:
      bVar12 = 0;
      goto LAB_006ef040;
    }
LAB_006ef03c:
    bVar12 = 1;
  }
LAB_006ef040:
  lVar6 = (long)local_478 - (long)auStack_470;
  if (-1 < lVar6) {
    (*pcStack_488)(local_490,auStack_470,lVar6);
    if (*(long *)(lVar7 + 0x28) != local_70[0]) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return bVar12 & 1;
  }
LAB_006ef090:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/string_view:331: libc++ Hardening assertion __len <= static_cast<size_type>(numeric_limits<difference_type>::max()) failed: string_view::string_view(_CharT *, size_t): length does not fit in difference_type\n"
            );
}


// ===== 006ef0c0  FUN_006ef0c0 =====

long FUN_006ef0c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = (long)*(char *)(param_1 + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  uVar1 = FUN_006eea30(param_1,thunk_FUN_00547cac,param_2,param_3,param_4,param_5);
  if ((uVar1 & 1) == 0) {
    FUN_004e7a70(param_1,lVar2,0xffffffffffffffff);
  }
  return param_1;
}


// ===== 006ef12c  FUN_006ef12c =====

ulong FUN_006ef12c(long param_1,long param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  long local_38;
  long lStack_30;
  ulong local_28;
  
  local_28 = 0;
  lStack_30 = param_2 - (ulong)(param_2 != 0);
  local_38 = param_1;
  uVar1 = FUN_006eea30(&local_38,thunk_FUN_006efe50);
  if ((uVar1 & 1) == 0) {
    puVar2 = (undefined4 *)__errno();
    *puVar2 = 0x16;
    local_28 = 0xffffffff;
  }
  else if (param_2 != 0) {
    uVar1 = param_2 - 1U;
    if (local_28 <= param_2 - 1U) {
      uVar1 = local_28;
    }
    *(undefined1 *)(param_1 + uVar1) = 0;
  }
  return local_28;
}


// ===== 006ef1b0  thunk_FUN_00547cac =====

void thunk_FUN_00547cac(void)

{
  FUN_00547cac();
  return;
}


// ===== 006ef1b8  thunk_FUN_006efe50 =====

void thunk_FUN_006efe50(void)

{
  FUN_006efe50();
  return;
}


// ===== 006ef1c0  FUN_006ef1c0 =====

void FUN_006ef1c0(void)

{
  int *in_x3;
  
  if (-1 < *in_x3) {
    FUN_006ef53c();
    return;
  }
  FUN_006ef1d4();
  return;
}


// ===== 006ef1d4  FUN_006ef1d4 =====

byte * FUN_006ef1d4(byte *param_1,byte *param_2,undefined4 *param_3)

{
  byte bVar1;
  bool bVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 uVar5;
  int iVar6;
  ulong uVar7;
  byte *pbVar8;
  byte bVar9;
  byte local_2c [4];
  byte *local_28;
  
  if (param_1 == param_2) {
    return (byte *)0x0;
  }
  local_28 = param_1 + 1;
  local_2c[0] = *param_1;
  if (local_2c[0] - 0x3a < 0xfffffff7) {
    return (byte *)0x0;
  }
  uVar3 = FUN_006ef870(local_2c,&local_28,param_2);
  *param_3 = uVar3;
  if (local_2c[0] != 0x24) {
    return (byte *)0x0;
  }
  if (local_28 == param_2) {
    return (byte *)0x0;
  }
  pbVar8 = local_28 + 1;
  local_2c[0] = *local_28;
  uVar7 = (ulong)local_2c[0];
  local_28 = pbVar8;
  if (local_2c[0] < 0x41) {
    while (uVar4 = (uint)uVar7, local_28 = pbVar8, local_2c[0] < 0x31) {
      if (((&DAT_00208347)[uVar7] & 0xe0) != 0xc0) {
        if (0x2f < uVar4) goto LAB_006ef2c0;
        if (uVar4 == 0x2a) {
          *(byte *)(param_3 + 3) = *(byte *)(param_3 + 3) | 0x20;
          if (pbVar8 == param_2) {
            return (byte *)0x0;
          }
          local_28 = pbVar8 + 1;
          local_2c[0] = *pbVar8;
          if (local_2c[0] - 0x3a < 0xfffffff7) {
            return (byte *)0x0;
          }
          uVar4 = FUN_006ef870(local_2c,&local_28,param_2);
          param_3[1] = ~uVar4;
          if (local_2c[0] != 0x24) {
            return (byte *)0x0;
          }
          if (local_28 == param_2) {
            return (byte *)0x0;
          }
          uVar7 = (ulong)*local_28;
          local_28 = local_28 + 1;
        }
        goto LAB_006ef2e4;
      }
      *(byte *)(param_3 + 3) = *(byte *)(param_3 + 3) | (&DAT_00208347)[uVar7] & 0x1f;
      if (pbVar8 == param_2) {
        return (byte *)0x0;
      }
      local_2c[0] = *pbVar8;
      uVar7 = (ulong)local_2c[0];
      pbVar8 = pbVar8 + 1;
    }
    if (uVar4 < 0x3a) {
LAB_006ef2c0:
      uVar3 = FUN_006ef870(local_2c,&local_28,param_2);
      param_3[1] = uVar3;
      uVar7 = (ulong)local_2c[0];
      *(byte *)(param_3 + 3) = *(byte *)(param_3 + 3) | 0x20;
LAB_006ef2e4:
      if ((int)uVar7 == 0x2e) {
        *(byte *)(param_3 + 3) = *(byte *)(param_3 + 3) | 0x20;
        if (local_28 == param_2) {
          return (byte *)0x0;
        }
        pbVar8 = local_28 + 1;
        local_2c[0] = *local_28;
        uVar7 = (ulong)local_2c[0];
        if (local_2c[0] - 0x30 < 10) {
          local_28 = pbVar8;
          uVar3 = FUN_006ef870(local_2c,&local_28,param_2);
          uVar7 = (ulong)local_2c[0];
          param_3[2] = uVar3;
        }
        else if (local_2c[0] == 0x2a) {
          if (pbVar8 == param_2) {
            return (byte *)0x0;
          }
          local_2c[0] = local_28[1];
          if (local_2c[0] - 0x3a < 0xfffffff7) {
            return (byte *)0x0;
          }
          local_28 = local_28 + 2;
          uVar4 = FUN_006ef870(local_2c,&local_28,param_2);
          param_3[2] = ~uVar4;
          if (local_2c[0] != 0x24) {
            return (byte *)0x0;
          }
          if (local_28 == param_2) {
            return (byte *)0x0;
          }
          uVar7 = (ulong)*local_28;
          local_28 = local_28 + 1;
        }
        else {
          param_3[2] = 0;
          local_28 = pbVar8;
        }
      }
    }
  }
  iVar6 = (int)uVar7;
  bVar9 = (&DAT_00208347)[uVar7];
  if ((iVar6 == 0x76) && (*(char *)(param_3 + 3) != '\0')) {
    return (byte *)0x0;
  }
  if (-1 < (char)bVar9) goto LAB_006ef450;
  if (0xbf < bVar9) {
    return (byte *)0x0;
  }
  if (local_28 == param_2) {
    return (byte *)0x0;
  }
  pbVar8 = local_28 + 1;
  bVar1 = *local_28;
  if ((iVar6 == 0x68 || iVar6 == 99) && (bVar1 == 0x68)) {
    uVar5 = 1;
LAB_006ef4d0:
    *(undefined1 *)((long)param_3 + 0xd) = uVar5;
    if (pbVar8 == param_2) {
      return (byte *)0x0;
    }
    pbVar8 = local_28 + 2;
    bVar2 = false;
    bVar1 = local_28[1];
  }
  else {
    bVar9 = bVar9 & 0x3f;
    if ((bVar9 == 2) && (bVar1 == 0x6c)) {
      uVar5 = 3;
      goto LAB_006ef4d0;
    }
    bVar2 = bVar9 == 2;
    *(byte *)((long)param_3 + 0xd) = bVar9;
  }
  uVar4 = (uint)bVar1;
  if (uVar4 == 0x76) {
    return (byte *)0x0;
  }
  bVar9 = (&DAT_00208347)[uVar4];
  if ((char)bVar9 < '\0') {
    return (byte *)0x0;
  }
  bVar2 = (bool)(bVar2 ^ 1);
  if (uVar4 != 99) {
    bVar2 = true;
  }
  local_28 = pbVar8;
  if (!bVar2) {
    *(byte *)(param_3 + 3) = *(byte *)(param_3 + 3) | 0x20;
  }
LAB_006ef450:
  *(byte *)((long)param_3 + 0xe) = bVar9;
  return local_28;
}


// ===== 006ef53c  FUN_006ef53c =====

byte * FUN_006ef53c(byte *param_1,byte *param_2,int *param_3,int *param_4)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  undefined1 uVar4;
  ulong uVar5;
  byte *pbVar6;
  uint uVar7;
  byte bVar8;
  byte local_44 [4];
  byte *local_28;
  
  if (param_1 == param_2) {
    return (byte *)0x0;
  }
  pbVar6 = param_1 + 1;
  local_44[0] = *param_1;
  uVar5 = (ulong)local_44[0];
  local_28 = pbVar6;
  if (local_44[0] < 0x41) {
    if (local_44[0] < 0x31) {
      do {
        uVar5 = (ulong)local_44[0];
        if (((&DAT_00208347)[uVar5] & 0xe0) != 0xc0) {
          local_28 = pbVar6;
          if (0x2f < local_44[0]) goto LAB_006ef610;
          if (local_44[0] == 0x2a) {
            *(byte *)(param_3 + 3) = *(byte *)(param_3 + 3) | 0x20;
            if (pbVar6 == param_2) {
              return (byte *)0x0;
            }
            local_28 = pbVar6 + 1;
            uVar5 = (ulong)*pbVar6;
            iVar3 = *param_4;
            *param_4 = iVar3 + 1;
            param_3[1] = -2 - iVar3;
          }
          goto LAB_006ef6a8;
        }
        *(byte *)(param_3 + 3) = *(byte *)(param_3 + 3) | (&DAT_00208347)[uVar5] & 0x1f;
        if (pbVar6 == param_2) {
          return (byte *)0x0;
        }
        local_28 = pbVar6 + 1;
        local_44[0] = *pbVar6;
        pbVar6 = local_28;
      } while (local_44[0] < 0x31);
      uVar5 = (ulong)local_44[0];
    }
    if (local_44[0] < 0x3a) {
LAB_006ef610:
      iVar3 = FUN_006ef870(local_44,&local_28,param_2);
      uVar5 = (ulong)local_44[0];
      if (local_44[0] == 0x24) {
        if (*param_4 != 0) {
          return (byte *)0x0;
        }
        *param_4 = -1;
        pbVar6 = (byte *)FUN_006ef1d4(param_1,param_2,param_3,param_4);
        return pbVar6;
      }
      param_3[1] = iVar3;
      *(byte *)(param_3 + 3) = *(byte *)(param_3 + 3) | 0x20;
LAB_006ef6a8:
      if ((int)uVar5 == 0x2e) {
        *(byte *)(param_3 + 3) = *(byte *)(param_3 + 3) | 0x20;
        if (local_28 == param_2) {
          return (byte *)0x0;
        }
        pbVar6 = local_28 + 1;
        local_44[0] = *local_28;
        uVar5 = (ulong)local_44[0];
        if (local_44[0] - 0x30 < 10) {
          local_28 = pbVar6;
          iVar3 = FUN_006ef870(local_44,&local_28,param_2);
          uVar5 = (ulong)local_44[0];
          param_3[2] = iVar3;
        }
        else if (local_44[0] == 0x2a) {
          if (pbVar6 == param_2) {
            return (byte *)0x0;
          }
          iVar3 = *param_4;
          uVar5 = (ulong)local_28[1];
          *param_4 = iVar3 + 1;
          param_3[2] = -2 - iVar3;
          local_28 = local_28 + 2;
        }
        else {
          param_3[2] = 0;
          local_28 = pbVar6;
        }
      }
    }
  }
  bVar8 = (&DAT_00208347)[uVar5];
  iVar3 = (int)uVar5;
  if ((iVar3 == 0x76) && ((char)param_3[3] != '\0')) {
    return (byte *)0x0;
  }
  if (-1 < (char)bVar8) goto LAB_006ef75c;
  if (0xbf < bVar8) {
    return (byte *)0x0;
  }
  if (local_28 == param_2) {
    return (byte *)0x0;
  }
  pbVar6 = local_28 + 1;
  bVar1 = *local_28;
  if ((iVar3 == 0x68 || iVar3 == 99) && (bVar1 == 0x68)) {
    uVar4 = 1;
LAB_006ef804:
    *(undefined1 *)((long)param_3 + 0xd) = uVar4;
    if (pbVar6 == param_2) {
      return (byte *)0x0;
    }
    pbVar6 = local_28 + 2;
    bVar2 = false;
    bVar1 = local_28[1];
  }
  else {
    bVar8 = bVar8 & 0x3f;
    if ((bVar8 == 2) && (bVar1 == 0x6c)) {
      uVar4 = 3;
      goto LAB_006ef804;
    }
    bVar2 = bVar8 == 2;
    *(byte *)((long)param_3 + 0xd) = bVar8;
  }
  uVar7 = (uint)bVar1;
  if (uVar7 == 0x76) {
    return (byte *)0x0;
  }
  bVar8 = (&DAT_00208347)[uVar7];
  if ((char)bVar8 < '\0') {
    return (byte *)0x0;
  }
  bVar2 = (bool)(bVar2 ^ 1);
  if (uVar7 != 99) {
    bVar2 = true;
  }
  local_28 = pbVar6;
  if (!bVar2) {
    *(byte *)(param_3 + 3) = *(byte *)(param_3 + 3) | 0x20;
  }
LAB_006ef75c:
  *(byte *)((long)param_3 + 0xe) = bVar8;
  iVar3 = *param_4;
  *param_4 = iVar3 + 1;
  *param_3 = iVar3 + 1;
  return local_28;
}


// ===== 006ef870  FUN_006ef870 =====

int FUN_006ef870(byte *param_1,long *param_2,byte *param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  
  pbVar3 = (byte *)*param_2;
  iVar2 = *param_1 - 0x30;
  if (pbVar3 != param_3) {
    *param_2 = (long)(pbVar3 + 1);
    bVar1 = *pbVar3;
    *param_1 = bVar1;
    if (0xfffffff5 < bVar1 - 0x3a) {
      pbVar3 = (byte *)*param_2;
      iVar2 = (uint)bVar1 + iVar2 * 10 + -0x30;
      if (pbVar3 != param_3) {
        *param_2 = (long)(pbVar3 + 1);
        bVar1 = *pbVar3;
        *param_1 = bVar1;
        if (0xfffffff5 < bVar1 - 0x3a) {
          pbVar3 = (byte *)*param_2;
          iVar2 = (uint)bVar1 + iVar2 * 10 + -0x30;
          if (pbVar3 != param_3) {
            *param_2 = (long)(pbVar3 + 1);
            bVar1 = *pbVar3;
            *param_1 = bVar1;
            if (0xfffffff5 < bVar1 - 0x3a) {
              pbVar3 = (byte *)*param_2;
              iVar2 = (uint)bVar1 + iVar2 * 10 + -0x30;
              if (pbVar3 != param_3) {
                *param_2 = (long)(pbVar3 + 1);
                bVar1 = *pbVar3;
                *param_1 = bVar1;
                if (0xfffffff5 < bVar1 - 0x3a) {
                  pbVar3 = (byte *)*param_2;
                  iVar2 = (uint)bVar1 + iVar2 * 10 + -0x30;
                  if (pbVar3 != param_3) {
                    *param_2 = (long)(pbVar3 + 1);
                    bVar1 = *pbVar3;
                    *param_1 = bVar1;
                    if (0xfffffff5 < bVar1 - 0x3a) {
                      pbVar3 = (byte *)*param_2;
                      iVar2 = (uint)bVar1 + iVar2 * 10 + -0x30;
                      if (pbVar3 != param_3) {
                        *param_2 = (long)(pbVar3 + 1);
                        bVar1 = *pbVar3;
                        *param_1 = bVar1;
                        if (0xfffffff5 < bVar1 - 0x3a) {
                          pbVar3 = (byte *)*param_2;
                          iVar2 = (uint)bVar1 + iVar2 * 10 + -0x30;
                          if (pbVar3 != param_3) {
                            *param_2 = (long)(pbVar3 + 1);
                            bVar1 = *pbVar3;
                            *param_1 = bVar1;
                            if (0xfffffff5 < bVar1 - 0x3a) {
                              pbVar3 = (byte *)*param_2;
                              iVar2 = (uint)bVar1 + iVar2 * 10 + -0x30;
                              if (pbVar3 != param_3) {
                                *param_2 = (long)(pbVar3 + 1);
                                bVar1 = *pbVar3;
                                *param_1 = bVar1;
                                if (0xfffffff5 < bVar1 - 0x3a) {
                                  pbVar3 = (byte *)*param_2;
                                  iVar2 = (uint)bVar1 + iVar2 * 10 + -0x30;
                                  if (pbVar3 != param_3) {
                                    *param_2 = (long)(pbVar3 + 1);
                                    *param_1 = *pbVar3;
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
  return iVar2;
}


// ===== 006efa40  FUN_006efa40 =====

undefined1  [16] FUN_006efa40(undefined8 *param_1,int *param_2,undefined4 *param_3)

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
            goto LAB_006efccc;
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
LAB_006efce8:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  *plVar9 = 0;
  plVar9[1] = (long)puVar11;
  if (plVar9 + 2 == (long *)0x0) goto LAB_006efce8;
  *(undefined4 *)(plVar9 + 2) = *param_3;
  if ((float)(plVar8[3] + 1) <= *(float *)(plVar8 + 4) * (float)puVar10) goto LAB_006efc54;
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
LAB_006efbac:
    FUN_006efcfc(plVar8,puVar12);
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
    if (puVar12 < puVar10) goto LAB_006efbac;
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
LAB_006efc54:
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
LAB_006efccc:
  auVar13._8_8_ = uVar1;
  auVar13._0_8_ = plVar9;
  return auVar13;
}


// ===== 006efcfc  FUN_006efcfc =====

void FUN_006efcfc(long *param_1,ulong param_2)

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


// ===== 006efe50  FUN_006efe50 =====

void FUN_006efe50(long *param_1,void *param_2,ulong param_3)

{
  size_t __n;
  
  __n = param_1[1];
  if (param_3 <= (ulong)param_1[1]) {
    __n = param_3;
  }
  if (__n != 0) {
    memcpy((void *)*param_1,param_2,__n);
    *param_1 = *param_1 + __n;
    param_1[1] = param_1[1] - __n;
  }
  param_1[2] = param_1[2] + param_3;
  return;
}


// ===== 006efeb8  FUN_006efeb8 =====

void FUN_006efeb8(int param_1,uint param_2,ulong param_3,code *param_4,undefined8 param_5)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined1 **ppuVar5;
  undefined1 **ppuVar6;
  ulong uVar7;
  char *pcVar8;
  ulong uVar9;
  undefined1 **ppuVar10;
  undefined1 *puVar11;
  size_t local_a90;
  undefined1 *local_a70;
  undefined1 *puStack_a68;
  undefined1 *puStack_a60;
  undefined1 *puStack_a58;
  undefined1 *local_a50;
  undefined1 *puStack_a48;
  undefined1 *puStack_a40;
  undefined1 *puStack_a38;
  undefined1 *local_a30;
  undefined1 *puStack_a28;
  undefined1 *puStack_a20;
  undefined1 *puStack_a18;
  undefined1 *local_a10;
  undefined1 *puStack_a08;
  undefined1 *puStack_a00;
  undefined1 *puStack_9f8;
  undefined1 *local_9f0;
  undefined1 *puStack_9e8;
  undefined1 *puStack_9e0;
  undefined1 *puStack_9d8;
  undefined1 *local_9d0;
  undefined1 *puStack_9c8;
  undefined1 *puStack_9c0;
  undefined1 *puStack_9b8;
  undefined1 *local_9b0;
  undefined1 *puStack_9a8;
  undefined1 *puStack_9a0;
  undefined1 *puStack_998;
  undefined1 *local_990;
  undefined1 *puStack_988;
  undefined1 *puStack_980;
  undefined1 *puStack_978;
  undefined1 *local_970;
  undefined1 *puStack_968;
  undefined1 *puStack_960;
  undefined1 *puStack_958;
  undefined1 *local_950;
  undefined1 *puStack_948;
  undefined1 *puStack_940;
  undefined1 *puStack_938;
  undefined1 *local_930;
  undefined1 *puStack_928;
  undefined1 *puStack_920;
  undefined1 *puStack_918;
  undefined1 *local_910;
  undefined1 *puStack_908;
  undefined1 *puStack_900;
  undefined1 *puStack_8f8;
  undefined1 *local_8f0;
  undefined1 *puStack_8e8;
  undefined1 *puStack_8e0;
  undefined1 *puStack_8d8;
  undefined1 *local_8d0;
  undefined1 *puStack_8c8;
  undefined1 *puStack_8c0;
  undefined1 *puStack_8b8;
  undefined1 *local_8b0;
  undefined1 *puStack_8a8;
  undefined1 *puStack_8a0;
  undefined1 *puStack_898;
  undefined1 *local_890;
  undefined1 *puStack_888;
  undefined1 *puStack_880;
  undefined1 *puStack_878;
  undefined1 *apuStack_870 [128];
  undefined1 *local_470;
  undefined1 *puStack_468;
  undefined1 *local_460;
  undefined1 *puStack_458;
  undefined1 *local_450;
  undefined1 *puStack_448;
  undefined1 *local_440;
  undefined1 *puStack_438;
  undefined1 *local_430;
  undefined1 *puStack_428;
  undefined1 *local_420;
  undefined1 *puStack_418;
  undefined4 local_410;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  uVar9 = (ulong)param_2;
  ppuVar6 = &local_a70;
  if ((int)param_2 < 0x41) {
    local_a90 = 0;
  }
  else {
    ppuVar5 = (undefined1 **)mmap((void *)0x0,uVar9 << 3,3,0x22,-1,0);
    ppuVar10 = (undefined1 **)0x0;
    if (ppuVar5 != (undefined1 **)0xffffffffffffffff) {
      ppuVar10 = ppuVar5;
    }
    bVar2 = ppuVar10 != (undefined1 **)0x0;
    local_a90 = 0;
    if (bVar2) {
      local_a90 = uVar9 << 3;
    }
    uVar4 = 0x40;
    if (bVar2) {
      uVar4 = param_2;
    }
    uVar9 = (ulong)uVar4;
    if (bVar2) {
      ppuVar6 = ppuVar10;
    }
  }
  puStack_a68 = &DAT_aaaaaaaaaaaaaaaa;
  local_a70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a48 = &DAT_aaaaaaaaaaaaaaaa;
  local_a50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a28 = &DAT_aaaaaaaaaaaaaaaa;
  local_a30 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a18 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a20 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a08 = &DAT_aaaaaaaaaaaaaaaa;
  local_a10 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_9f8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a00 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_9e8 = &DAT_aaaaaaaaaaaaaaaa;
  local_9f0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_9d8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_9e0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_9c8 = &DAT_aaaaaaaaaaaaaaaa;
  local_9d0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_9b8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_9c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_9a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_9b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_998 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_9a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_988 = &DAT_aaaaaaaaaaaaaaaa;
  local_990 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_978 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_980 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_968 = &DAT_aaaaaaaaaaaaaaaa;
  local_970 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_958 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_960 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_948 = &DAT_aaaaaaaaaaaaaaaa;
  local_950 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_938 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_940 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_928 = &DAT_aaaaaaaaaaaaaaaa;
  local_930 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_918 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_920 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_908 = &DAT_aaaaaaaaaaaaaaaa;
  local_910 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_8f8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_900 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_8e8 = &DAT_aaaaaaaaaaaaaaaa;
  local_8f0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_8d8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_8e0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_8c8 = &DAT_aaaaaaaaaaaaaaaa;
  local_8d0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_8b8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_8c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_8a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_8b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_898 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_8a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_888 = &DAT_aaaaaaaaaaaaaaaa;
  local_890 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_878 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_880 = &DAT_aaaaaaaaaaaaaaaa;
  uVar9 = FUN_006e84d8(ppuVar6,uVar9,param_1 + 1);
  iVar3 = (int)uVar9;
  if (0 < iVar3) {
    uVar7 = uVar9 & 0xffffffff;
    ppuVar10 = ppuVar6;
    do {
      puVar11 = *ppuVar10;
      if ((param_3 & 1) == 0) {
        puStack_418 = &DAT_aaaaaaaaaaaaaaaa;
        local_420 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_428 = &DAT_aaaaaaaaaaaaaaaa;
        local_430 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_438 = &DAT_aaaaaaaaaaaaaaaa;
        local_440 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_448 = &DAT_aaaaaaaaaaaaaaaa;
        local_450 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_458 = &DAT_aaaaaaaaaaaaaaaa;
        local_460 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_468 = &DAT_aaaaaaaaaaaaaaaa;
        local_470 = &DAT_aaaaaaaaaaaaaaaa;
        local_410 = 0xaaaaaaaa;
        snprintf((char *)&local_470,100,"%s@ %*p\n",&DAT_001a3b71,0x12,puVar11);
        ppuVar5 = &local_470;
      }
      else {
        memset(&local_470,0xaa,0x400);
        uVar9 = FUN_006f0128(puVar11 + -1,&local_470,0x400);
        if ((uVar9 & 1) == 0) {
          uVar9 = FUN_006f0128(puVar11,&local_470,0x400);
          pcVar8 = "(unknown)";
          if ((uVar9 & 1) != 0) goto LAB_006f0078;
        }
        else {
LAB_006f0078:
          pcVar8 = (char *)&local_470;
        }
        memset(apuStack_870,0xaa,0x400);
        snprintf((char *)apuStack_870,0x400,"%s@ %*p  %s\n",&DAT_001a3b71,0x12,puVar11,pcVar8);
        ppuVar5 = apuStack_870;
      }
      uVar9 = (*param_4)(ppuVar5,param_5);
      uVar7 = uVar7 - 1;
      ppuVar10 = ppuVar10 + 1;
    } while (uVar7 != 0);
  }
  if (DAT_00d7eed8 != (code *)0x0) {
    uVar9 = (*DAT_00d7eed8)(ppuVar6,iVar3,0,param_4,param_5);
  }
  if (local_a90 != 0) {
    uVar4 = munmap(ppuVar6,local_a90);
    uVar9 = (ulong)uVar4;
  }
  if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar9);
  }
  return;
}


// ===== 006f0128  FUN_006f0128 =====

undefined8 FUN_006f0128(void)

{
  return 0;
}


// ===== 006f0134  FUN_006f0134 =====

void FUN_006f0134(char *param_1,uint param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  size_t __n;
  undefined8 *puVar8;
  undefined1 **__s;
  undefined8 uVar9;
  undefined8 uVar10;
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
  undefined4 local_60;
  long local_58;
  
  __s = &local_c0;
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  puVar6 = (undefined4 *)__errno();
  uVar3 = *puVar6;
  if (((DAT_00d7eee8 & 1) == 0) && (iVar5 = FUN_0054fdd4(&DAT_00d7eee8), iVar5 != 0)) {
    DAT_00d7eee0 = FUN_006f0348();
    FUN_0054ff1c(&DAT_00d7eee8);
  }
  if (param_2 < 0x87) {
    puVar8 = (undefined8 *)(DAT_00d7eee0 + (ulong)param_2 * 0x18);
    if (*(char *)((long)puVar8 + 0x17) < '\0') {
      FUN_005478d8(param_1,*puVar8,puVar8[1]);
    }
    else {
      uVar10 = puVar8[1];
      uVar9 = *puVar8;
      *(undefined8 *)(param_1 + 0x10) = puVar8[2];
      *(undefined8 *)(param_1 + 8) = uVar10;
      *(undefined8 *)param_1 = uVar9;
    }
  }
  else {
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
    local_60 = 0xaaaaaaaa;
    pcVar7 = (char *)__gnu_strerror_r((ulong)param_2,&local_c0,100);
    if (*pcVar7 == '\0') {
      snprintf((char *)&local_c0,100,"Unknown error %d",(ulong)param_2);
    }
    else {
      __s = (undefined1 **)pcVar7;
      if (pcVar7 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/string:1063: libc++ Hardening assertion __s != nullptr failed: basic_string(const char*) detected nullptr\n"
                  );
      }
    }
    __n = strlen((char *)__s);
    if (0x7ffffffffffffff6 < __n) {
                    /* WARNING: Subroutine does not return */
      FUN_005d45ec();
    }
    if (__n < 0x17) {
      param_1[0x17] = (char)__n;
      pcVar7 = param_1;
    }
    else {
      uVar1 = (__n & 0x7ffffffffffffff8) + 8;
      uVar2 = 0x19;
      if (uVar1 != 0x18) {
        uVar2 = uVar1;
      }
      pcVar7 = (char *)operator_new(uVar2);
      *(char **)param_1 = pcVar7;
      *(size_t *)(param_1 + 8) = __n;
      *(ulong *)(param_1 + 0x10) = uVar2 | 0x8000000000000000;
    }
    if (pcVar7 + __n < pcVar7) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
                );
    }
    if ((pcVar7 <= __s) && (__s < pcVar7 + __n)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                );
    }
    memmove(pcVar7,__s,__n);
    pcVar7[__n] = '\0';
  }
  *puVar6 = uVar3;
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006f0348  FUN_006f0348 =====

undefined8 * FUN_006f0348(void)

{
  ulong uVar1;
  ulong uVar2;
  char cVar3;
  long lVar4;
  undefined8 *__s;
  char ****__s_00;
  size_t __n;
  char ****__dest;
  undefined8 *puVar5;
  ulong uVar6;
  char ***local_e8;
  size_t sStack_e0;
  undefined8 local_d8;
  char **local_d0;
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
  undefined1 *puStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  __s = (undefined8 *)operator_new(0xca8);
  memset(__s,0,0xca8);
  uVar6 = 0;
  puVar5 = __s;
  do {
    local_70 = 0xaaaaaaaa;
    puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
    local_d0 = (char **)&DAT_aaaaaaaaaaaaaaaa;
    puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_c0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
    local_b0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
    local_90 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
    __s_00 = (char ****)__gnu_strerror_r(uVar6 & 0xffffffff,&local_d0,100);
    if (*(char *)__s_00 == '\0') {
      __s_00 = (char ****)&local_d0;
      snprintf((char *)&local_d0,100,"Unknown error %d",uVar6 & 0xffffffff);
    }
    else if (__s_00 == (char ****)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/string:1063: libc++ Hardening assertion __s != nullptr failed: basic_string(const char*) detected nullptr\n"
                );
    }
    __n = strlen((char *)__s_00);
    if (0x7ffffffffffffff6 < __n) {
                    /* WARNING: Subroutine does not return */
      FUN_005d45ec();
    }
    if (__n < 0x17) {
      local_d8 = CONCAT17((char)__n,(undefined7)local_d8);
      __dest = &local_e8;
    }
    else {
      uVar1 = (__n & 0x7ffffffffffffff8) + 8;
      uVar2 = 0x19;
      if (uVar1 != 0x18) {
        uVar2 = uVar1;
      }
      __dest = (char ****)operator_new(uVar2);
      local_d8 = uVar2 | 0x8000000000000000;
      local_e8 = (char ***)__dest;
      sStack_e0 = __n;
    }
    if ((char ****)((long)__dest + __n) < __dest) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
                );
    }
    if ((__dest <= __s_00) && (__s_00 < (char ****)((long)__dest + __n))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                );
    }
    memmove(__dest,__s_00,__n);
    cVar3 = *(char *)((long)puVar5 + 0x17);
    *(undefined1 *)((long)__dest + __n) = 0;
    if (cVar3 < '\0') {
      operator_delete((void *)*puVar5);
    }
    uVar6 = uVar6 + 1;
    puVar5[1] = sStack_e0;
    *puVar5 = local_e8;
    puVar5[2] = local_d8;
    puVar5 = puVar5 + 3;
  } while (uVar6 != 0x87);
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return __s;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006f0540  FUN_006f0540 =====

/* WARNING: Type propagation algorithm not settling */

void * FUN_006f0540(undefined8 param_1,undefined8 param_2,char *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  size_t sVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  void *local_168 [11];
  long local_110;
  undefined1 *puStack_108;
  undefined1 *local_100;
  undefined *puStack_f8;
  undefined1 *puStack_f0;
  undefined1 *puStack_e8;
  undefined1 *local_e0;
  undefined8 uStack_d8;
  undefined1 *local_d0;
  undefined8 uStack_c8;
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
  undefined1 *local_70;
  undefined1 *puStack_68;
  
  puVar3 = PTR_PTR_00d51b50;
  puVar2 = PTR_DAT_00d51b48;
  local_d0 = &DAT_aaaaaaaaaaaaaaaa;
  local_100 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_f0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
  local_e0 = &DAT_aaaaaaaaaaaaaaaa;
  local_168[6] = &DAT_aaaaaaaaaaaaaaaa;
  local_168[5] = &DAT_aaaaaaaaaaaaaaaa;
  local_168[8] = &DAT_aaaaaaaaaaaaaaaa;
  local_168[7] = &DAT_aaaaaaaaaaaaaaaa;
  local_168[10] = &DAT_aaaaaaaaaaaaaaaa;
  local_168[9] = &DAT_aaaaaaaaaaaaaaaa;
  puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
  local_110 = (long)&DAT_aaaaaaaaaaaaaaaa;
  local_168[2] = &DAT_aaaaaaaaaaaaaaaa;
  local_168[1] = &DAT_aaaaaaaaaaaaaaaa;
  local_168[4] = &DAT_aaaaaaaaaaaaaaaa;
  local_168[3] = &DAT_aaaaaaaaaaaaaaaa;
  uStack_c8 = 0;
  local_168[0] = *(void **)(PTR_PTR_00d51b50 + 8);
  puVar1 = PTR_DAT_00d51b48 + 0x40;
  puStack_f8 = puVar1;
  *(undefined8 *)((long)local_168 + *(long *)((long)local_168[0] + -0x18)) =
       *(undefined8 *)(PTR_PTR_00d51b50 + 0x10);
  lVar8 = *(long *)((long)local_168[0] + -0x18);
  FUN_00520e8c((long)local_168 + lVar8,local_168 + 1);
  puVar4 = PTR_DAT_00d51e20;
  *(undefined8 *)((long)&local_e0 + lVar8) = 0;
  *(undefined1 *)((long)&uStack_d8 + lVar8 + 4) = 0;
  *(undefined4 *)((long)&uStack_d8 + lVar8) = 0xffffffff;
  local_168[0] = puVar2 + 0x18;
  local_168[1] = PTR_DAT_00d51e20 + 0x10;
  puStack_f8 = puVar1;
  FUN_0053ce34(local_168 + 2);
  puVar1 = PTR_DAT_00d51b20 + 0x10;
  local_168[6] = (void *)0x0;
  local_168[5] = (void *)0x0;
  local_168[8] = (void *)0x0;
  local_168[7] = (void *)0x0;
  local_168[4] = (void *)0x0;
  local_168[3] = (void *)0x0;
  local_168[10] = (void *)0x0;
  local_168[9] = (void *)0x0;
  puStack_108 = (undefined1 *)0x0;
  local_110 = 0;
  local_100 = (undefined1 *)CONCAT44(local_100._4_4_,0x10);
  local_168[1] = puVar1;
  FUN_006e2de0(local_168 + 1);
  sVar5 = strlen(param_3);
  uVar6 = FUN_006deaa4(local_168,param_3,sVar5);
  FUN_006deaa4(uVar6,&DAT_001a2df6,2);
  FUN_0054beb0(local_168,param_1);
  FUN_006deaa4(local_168," vs. ",5);
  FUN_0054beb0(local_168,param_2);
  FUN_006deaa4(local_168,&DAT_001ca519,1);
  puVar7 = (undefined8 *)operator_new(0x18);
  FUN_0054d504(puVar7,local_168 + 1);
  FUN_006f0bd4(puVar7);
  if (*(char *)((long)puVar7 + 0x17) < '\0') {
    puVar7 = (undefined8 *)*puVar7;
  }
  local_168[0] = *(void **)puVar3;
  *(undefined8 *)((long)local_168 + *(long *)((long)local_168[0] + -0x18)) =
       *(undefined8 *)(puVar3 + 0x18);
  if (local_110 < 0) {
    local_168[1] = puVar1;
    operator_delete(local_168[9]);
  }
  local_168[1] = puVar4 + 0x10;
  FUN_0053ceec(local_168 + 2);
  FUN_0054b3d4(local_168,puVar3 + 8);
  thunk_FUN_00520cf4(&puStack_f8);
  return puVar7;
}


// ===== 006f075c  FUN_006f075c =====

/* WARNING: Type propagation algorithm not settling */

void * FUN_006f075c(undefined8 param_1,undefined8 param_2,char *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  size_t sVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  void *local_168 [11];
  long local_110;
  undefined1 *puStack_108;
  undefined1 *local_100;
  undefined *puStack_f8;
  undefined1 *puStack_f0;
  undefined1 *puStack_e8;
  undefined1 *local_e0;
  undefined8 uStack_d8;
  undefined1 *local_d0;
  undefined8 uStack_c8;
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
  undefined1 *local_70;
  undefined1 *puStack_68;
  
  puVar3 = PTR_PTR_00d51b50;
  puVar2 = PTR_DAT_00d51b48;
  local_d0 = &DAT_aaaaaaaaaaaaaaaa;
  local_100 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_f0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
  local_e0 = &DAT_aaaaaaaaaaaaaaaa;
  local_168[6] = &DAT_aaaaaaaaaaaaaaaa;
  local_168[5] = &DAT_aaaaaaaaaaaaaaaa;
  local_168[8] = &DAT_aaaaaaaaaaaaaaaa;
  local_168[7] = &DAT_aaaaaaaaaaaaaaaa;
  local_168[10] = &DAT_aaaaaaaaaaaaaaaa;
  local_168[9] = &DAT_aaaaaaaaaaaaaaaa;
  puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
  local_110 = (long)&DAT_aaaaaaaaaaaaaaaa;
  local_168[2] = &DAT_aaaaaaaaaaaaaaaa;
  local_168[1] = &DAT_aaaaaaaaaaaaaaaa;
  local_168[4] = &DAT_aaaaaaaaaaaaaaaa;
  local_168[3] = &DAT_aaaaaaaaaaaaaaaa;
  uStack_c8 = 0;
  local_168[0] = *(void **)(PTR_PTR_00d51b50 + 8);
  puVar1 = PTR_DAT_00d51b48 + 0x40;
  puStack_f8 = puVar1;
  *(undefined8 *)((long)local_168 + *(long *)((long)local_168[0] + -0x18)) =
       *(undefined8 *)(PTR_PTR_00d51b50 + 0x10);
  lVar8 = *(long *)((long)local_168[0] + -0x18);
  FUN_00520e8c((long)local_168 + lVar8,local_168 + 1);
  puVar4 = PTR_DAT_00d51e20;
  *(undefined8 *)((long)&local_e0 + lVar8) = 0;
  *(undefined1 *)((long)&uStack_d8 + lVar8 + 4) = 0;
  *(undefined4 *)((long)&uStack_d8 + lVar8) = 0xffffffff;
  local_168[0] = puVar2 + 0x18;
  local_168[1] = PTR_DAT_00d51e20 + 0x10;
  puStack_f8 = puVar1;
  FUN_0053ce34(local_168 + 2);
  puVar1 = PTR_DAT_00d51b20 + 0x10;
  local_168[6] = (void *)0x0;
  local_168[5] = (void *)0x0;
  local_168[8] = (void *)0x0;
  local_168[7] = (void *)0x0;
  local_168[4] = (void *)0x0;
  local_168[3] = (void *)0x0;
  local_168[10] = (void *)0x0;
  local_168[9] = (void *)0x0;
  puStack_108 = (undefined1 *)0x0;
  local_110 = 0;
  local_100 = (undefined1 *)CONCAT44(local_100._4_4_,0x10);
  local_168[1] = puVar1;
  FUN_006e2de0(local_168 + 1);
  sVar5 = strlen(param_3);
  uVar6 = FUN_006deaa4(local_168,param_3,sVar5);
  FUN_006deaa4(uVar6,&DAT_001a2df6,2);
  FUN_0054c088(local_168,param_1);
  FUN_006deaa4(local_168," vs. ",5);
  FUN_0054c088(local_168,param_2);
  FUN_006deaa4(local_168,&DAT_001ca519,1);
  puVar7 = (undefined8 *)operator_new(0x18);
  FUN_0054d504(puVar7,local_168 + 1);
  FUN_006f0bd4(puVar7);
  if (*(char *)((long)puVar7 + 0x17) < '\0') {
    puVar7 = (undefined8 *)*puVar7;
  }
  local_168[0] = *(void **)puVar3;
  *(undefined8 *)((long)local_168 + *(long *)((long)local_168[0] + -0x18)) =
       *(undefined8 *)(puVar3 + 0x18);
  if (local_110 < 0) {
    local_168[1] = puVar1;
    operator_delete(local_168[9]);
  }
  local_168[1] = puVar4 + 0x10;
  FUN_0053ceec(local_168 + 2);
  FUN_0054b3d4(local_168,puVar3 + 8);
  thunk_FUN_00520cf4(&puStack_f8);
  return puVar7;
}


// ===== 006f0978  FUN_006f0978 =====

/* WARNING: Type propagation algorithm not settling */

void * FUN_006f0978(long param_1,long param_2,char *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  size_t sVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  void *local_168 [11];
  long local_110;
  undefined1 *puStack_108;
  undefined1 *local_100;
  undefined *puStack_f8;
  undefined1 *puStack_f0;
  undefined1 *puStack_e8;
  undefined1 *local_e0;
  undefined8 uStack_d8;
  undefined1 *local_d0;
  undefined8 uStack_c8;
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
  undefined1 *local_70;
  undefined1 *puStack_68;
  
  puVar3 = PTR_PTR_00d51b50;
  puVar2 = PTR_DAT_00d51b48;
  local_d0 = &DAT_aaaaaaaaaaaaaaaa;
  local_100 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_f0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
  local_e0 = &DAT_aaaaaaaaaaaaaaaa;
  local_168[6] = &DAT_aaaaaaaaaaaaaaaa;
  local_168[5] = &DAT_aaaaaaaaaaaaaaaa;
  local_168[8] = &DAT_aaaaaaaaaaaaaaaa;
  local_168[7] = &DAT_aaaaaaaaaaaaaaaa;
  local_168[10] = &DAT_aaaaaaaaaaaaaaaa;
  local_168[9] = &DAT_aaaaaaaaaaaaaaaa;
  puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
  local_110 = (long)&DAT_aaaaaaaaaaaaaaaa;
  local_168[2] = &DAT_aaaaaaaaaaaaaaaa;
  local_168[1] = &DAT_aaaaaaaaaaaaaaaa;
  local_168[4] = &DAT_aaaaaaaaaaaaaaaa;
  local_168[3] = &DAT_aaaaaaaaaaaaaaaa;
  uStack_c8 = 0;
  local_168[0] = *(void **)(PTR_PTR_00d51b50 + 8);
  puVar1 = PTR_DAT_00d51b48 + 0x40;
  puStack_f8 = puVar1;
  *(undefined8 *)((long)local_168 + *(long *)((long)local_168[0] + -0x18)) =
       *(undefined8 *)(PTR_PTR_00d51b50 + 0x10);
  lVar8 = *(long *)((long)local_168[0] + -0x18);
  FUN_00520e8c((long)local_168 + lVar8,local_168 + 1);
  puVar4 = PTR_DAT_00d51e20;
  *(undefined8 *)((long)&local_e0 + lVar8) = 0;
  *(undefined1 *)((long)&uStack_d8 + lVar8 + 4) = 0;
  *(undefined4 *)((long)&uStack_d8 + lVar8) = 0xffffffff;
  local_168[0] = puVar2 + 0x18;
  local_168[1] = PTR_DAT_00d51e20 + 0x10;
  puStack_f8 = puVar1;
  FUN_0053ce34(local_168 + 2);
  puVar1 = PTR_DAT_00d51b20;
  local_168[1] = PTR_DAT_00d51b20 + 0x10;
  local_168[6] = (void *)0x0;
  local_168[5] = (void *)0x0;
  local_168[8] = (void *)0x0;
  local_168[7] = (void *)0x0;
  local_168[4] = (void *)0x0;
  local_168[3] = (void *)0x0;
  local_168[10] = (void *)0x0;
  local_168[9] = (void *)0x0;
  puStack_108 = (undefined1 *)0x0;
  local_110 = 0;
  local_100 = (undefined1 *)CONCAT44(local_100._4_4_,0x10);
  FUN_006e2de0(local_168 + 1);
  sVar5 = strlen(param_3);
  uVar6 = FUN_006deaa4(local_168,param_3,sVar5);
  FUN_006deaa4(uVar6,&DAT_001a2df6,2);
  if (param_1 == 0) {
    FUN_006deaa4(local_168,"(null)",6);
  }
  else {
    FUN_0054c7e8(local_168,param_1);
  }
  FUN_006deaa4(local_168," vs. ",5);
  if (param_2 == 0) {
    FUN_006deaa4(local_168,"(null)",6);
  }
  else {
    FUN_0054c7e8(local_168,param_2);
  }
  FUN_006deaa4(local_168,&DAT_001ca519,1);
  puVar7 = (undefined8 *)operator_new(0x18);
  FUN_0054d504(puVar7,local_168 + 1);
  FUN_006f0bd4(puVar7);
  if (*(char *)((long)puVar7 + 0x17) < '\0') {
    puVar7 = (undefined8 *)*puVar7;
  }
  local_168[0] = *(void **)puVar3;
  *(undefined8 *)((long)local_168 + *(long *)((long)local_168[0] + -0x18)) =
       *(undefined8 *)(puVar3 + 0x18);
  local_168[1] = puVar1 + 0x10;
  if (local_110 < 0) {
    operator_delete(local_168[9]);
  }
  local_168[1] = puVar4 + 0x10;
  FUN_0053ceec(local_168 + 2);
  FUN_0054b3d4(local_168,puVar3 + 8);
  thunk_FUN_00520cf4(&puStack_f8);
  return puVar7;
}


// ===== 006f0bd4  FUN_006f0bd4 =====

void FUN_006f0bd4(void)

{
  return;
}


// ===== 006f0bdc  FUN_006f0bdc =====

void FUN_006f0bdc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong __n;
  byte bVar1;
  code *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  size_t __n_00;
  
  lVar3 = param_2[1];
  lVar5 = param_3[1];
  *param_1 = 0;
  param_1[1] = 0;
  __n = lVar5 + lVar3;
  param_1[2] = 0;
  if (__n < 0x7ffffffffffffff7) {
    puVar6 = param_1;
    if (__n != 0) {
      if (0x16 < __n) {
        FUN_0054774c(param_1,0x16,__n - 0x16,0,0,0,0);
        param_1[1] = 0;
        puVar6 = (undefined8 *)*param_1;
        if (-1 < *(char *)((long)param_1 + 0x17)) {
          puVar6 = param_1;
        }
      }
      memset(puVar6,0,__n);
      if (*(char *)((long)param_1 + 0x17) < '\0') {
        param_1[1] = __n;
      }
      else {
        *(byte *)((long)param_1 + 0x17) = (byte)__n & 0x7f;
      }
    }
    *(undefined1 *)((long)puVar6 + __n) = 0;
    __n_00 = param_2[1];
    puVar6 = (undefined8 *)*param_1;
    if (-1 < *(char *)((long)param_1 + 0x17)) {
      puVar6 = param_1;
    }
    if (__n_00 != 0) {
      memcpy(puVar6,(void *)*param_2,__n_00);
    }
    if (param_3[1] != 0) {
      memcpy((void *)((long)puVar6 + __n_00),(void *)*param_3,param_3[1]);
    }
    bVar1 = *(byte *)((long)param_1 + 0x17);
    puVar4 = (undefined8 *)*param_1;
    puVar6 = puVar4;
    if ((bVar1 & 0x80) == 0) {
      puVar6 = param_1;
    }
    if (*(char *)((long)puVar6 + __n) == '\0') {
      if ((char)bVar1 < '\0') {
        if ((ulong)param_1[1] < __n) goto LAB_006f0d40;
        param_1[1] = __n;
      }
      else {
        if (bVar1 < __n) {
LAB_006f0d40:
                    /* WARNING: Subroutine does not return */
          FUN_005f5590();
        }
        *(byte *)((long)param_1 + 0x17) = (byte)__n;
        puVar4 = param_1;
      }
      *(undefined1 *)((long)puVar4 + __n) = 0;
      return;
    }
  }
  else {
    FUN_00621ff8("absl::StringResizeAndOverwrite");
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x6f0d40);
  (*pcVar2)();
}


// ===== 006f0d44  FUN_006f0d44 =====

void FUN_006f0d44(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong __n;
  byte bVar1;
  code *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  size_t __n_00;
  undefined8 *puVar7;
  size_t __n_01;
  
  lVar3 = param_2[1];
  lVar5 = param_3[1];
  lVar6 = param_4[1];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  __n = lVar5 + lVar3 + lVar6;
  if (__n < 0x7ffffffffffffff7) {
    puVar7 = param_1;
    if (__n != 0) {
      if (0x16 < __n) {
        FUN_0054774c(param_1,0x16,__n - 0x16,0,0,0,0);
        param_1[1] = 0;
        puVar7 = (undefined8 *)*param_1;
        if (-1 < *(char *)((long)param_1 + 0x17)) {
          puVar7 = param_1;
        }
      }
      memset(puVar7,0,__n);
      if (*(char *)((long)param_1 + 0x17) < '\0') {
        param_1[1] = __n;
      }
      else {
        *(byte *)((long)param_1 + 0x17) = (byte)__n & 0x7f;
      }
    }
    *(undefined1 *)((long)puVar7 + __n) = 0;
    __n_01 = param_2[1];
    puVar7 = (undefined8 *)*param_1;
    if (-1 < *(char *)((long)param_1 + 0x17)) {
      puVar7 = param_1;
    }
    if (__n_01 != 0) {
      memcpy(puVar7,(void *)*param_2,__n_01);
    }
    __n_00 = param_3[1];
    if (__n_00 != 0) {
      memcpy((void *)((long)puVar7 + __n_01),(void *)*param_3,__n_00);
    }
    if (param_4[1] != 0) {
      memcpy((void *)((long)((long)puVar7 + __n_01) + __n_00),(void *)*param_4,param_4[1]);
    }
    bVar1 = *(byte *)((long)param_1 + 0x17);
    puVar4 = (undefined8 *)*param_1;
    puVar7 = puVar4;
    if ((bVar1 & 0x80) == 0) {
      puVar7 = param_1;
    }
    if (*(char *)((long)puVar7 + __n) == '\0') {
      if ((char)bVar1 < '\0') {
        if ((ulong)param_1[1] < __n) goto LAB_006f0ed8;
        param_1[1] = __n;
      }
      else {
        if (bVar1 < __n) {
LAB_006f0ed8:
                    /* WARNING: Subroutine does not return */
          FUN_005f5590();
        }
        *(byte *)((long)param_1 + 0x17) = (byte)__n;
        puVar4 = param_1;
      }
      *(undefined1 *)((long)puVar4 + __n) = 0;
      return;
    }
  }
  else {
    FUN_00621ff8("absl::StringResizeAndOverwrite");
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x6f0ed8);
  (*pcVar2)();
}


// ===== 006f0edc  FUN_006f0edc =====

void FUN_006f0edc(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  code *pcVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  size_t __n;
  undefined8 *puVar13;
  size_t *psVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  
  param_3 = param_3 * 0x10;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_3 == 0) {
    uVar12 = 0;
  }
  else {
    if (param_3 - 0x10U < 0x40) {
      uVar12 = 0;
      lVar8 = param_2;
    }
    else {
      lVar15 = 0;
      lVar16 = 0;
      lVar17 = 0;
      lVar18 = 0;
      uVar12 = (param_3 - 0x10U >> 4) + 1;
      uVar3 = uVar12 & 3;
      uVar4 = 4;
      if (uVar3 != 0) {
        uVar4 = uVar3;
      }
      plVar10 = (long *)(param_2 + 0x28);
      lVar9 = uVar12 - uVar4;
      lVar8 = param_2 + lVar9 * 0x10;
      do {
        plVar1 = plVar10 + -4;
        lVar19 = *plVar10;
        plVar11 = plVar10 + -2;
        plVar2 = plVar10 + 2;
        lVar9 = lVar9 + -4;
        plVar10 = plVar10 + 8;
        lVar15 = *plVar1 + lVar15;
        lVar16 = *plVar11 + lVar16;
        lVar17 = lVar19 + lVar17;
        lVar18 = *plVar2 + lVar18;
      } while (lVar9 != 0);
      uVar12 = lVar17 + lVar15 + lVar18 + lVar16;
    }
    do {
      plVar10 = (long *)(lVar8 + 8);
      lVar8 = lVar8 + 0x10;
      uVar12 = *plVar10 + uVar12;
    } while (lVar8 != param_2 + param_3);
    if (0x7ffffffffffffff6 < uVar12) {
      FUN_00621ff8("absl::StringResizeAndOverwrite");
      goto LAB_006f10dc;
    }
    if (uVar12 != 0) {
      puVar13 = param_1;
      if (0x16 < uVar12) {
        FUN_0054774c(param_1,0x16,uVar12 - 0x16,0,0,0,0);
        param_1[1] = 0;
        puVar13 = (undefined8 *)*param_1;
        if (-1 < *(char *)((long)param_1 + 0x17)) {
          puVar13 = param_1;
        }
      }
      memset(puVar13,0,uVar12);
      if (*(char *)((long)param_1 + 0x17) < '\0') {
        param_1[1] = uVar12;
      }
      else {
        *(byte *)((long)param_1 + 0x17) = (byte)uVar12 & 0x7f;
      }
      *(undefined1 *)((long)puVar13 + uVar12) = 0;
    }
    psVar14 = (size_t *)(param_2 + 8);
    puVar13 = (undefined8 *)*param_1;
    if (-1 < *(char *)((long)param_1 + 0x17)) {
      puVar13 = param_1;
    }
    do {
      __n = *psVar14;
      if (__n != 0) {
        memcpy(puVar13,(void *)psVar14[-1],__n);
        puVar13 = (undefined8 *)((long)puVar13 + __n);
      }
      param_3 = param_3 + -0x10;
      psVar14 = psVar14 + 2;
    } while (param_3 != 0);
  }
  bVar5 = *(byte *)((long)param_1 + 0x17);
  puVar7 = (undefined8 *)*param_1;
  puVar13 = puVar7;
  if ((bVar5 & 0x80) == 0) {
    puVar13 = param_1;
  }
  if (*(char *)((long)puVar13 + uVar12) != '\0') {
LAB_006f10dc:
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x6f10e0);
    (*pcVar6)();
  }
  if ((char)bVar5 < '\0') {
    if ((ulong)param_1[1] < uVar12) goto LAB_006f10e0;
    param_1[1] = uVar12;
  }
  else {
    if (bVar5 < uVar12) {
LAB_006f10e0:
                    /* WARNING: Subroutine does not return */
      FUN_005f5590();
    }
    *(byte *)((long)param_1 + 0x17) = (byte)uVar12;
    puVar7 = param_1;
  }
  *(undefined1 *)((long)puVar7 + uVar12) = 0;
  return;
}


// ===== 006f10e4  FUN_006f10e4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * FUN_006f10e4(void *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  char cVar7;
  ulong uVar8;
  
  if (param_2 == 0) {
    puVar4 = (ulong *)0x0;
  }
  else {
    lVar2 = param_2 - 0xff3;
    if (0xff2 < param_2 && lVar2 != 0) {
      puVar5 = (undefined8 *)operator_new(0x1000);
      uVar3 = _DAT_001f2410;
      puVar5[1] = _UNK_001f2418;
      *puVar5 = uVar3;
      memcpy((void *)((long)puVar5 + 0xd),param_1,0xff3);
      puVar6 = (undefined8 *)operator_new(0x40);
      *puVar6 = 0xff3;
      uVar3 = DAT_001f5790;
      *(undefined4 *)(puVar6 + 1) = 2;
      puVar6[2] = puVar5;
      *(int *)((long)puVar6 + 0xc) = (int)uVar3;
      if (lVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/string_view:331: libc++ Hardening assertion __len <= static_cast<size_type>(numeric_limits<difference_type>::max()) failed: string_view::string_view(_CharT *, size_t): length does not fit in difference_type\n"
                  );
      }
      if ((long)param_1 + 0xff3 != 0) {
        puVar4 = (ulong *)thunk_FUN_006f31b0(puVar6,(long)param_1 + 0xff3,lVar2,0);
        return puVar4;
      }
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/string_view:333: libc++ Hardening assertion __len == 0 || __s != nullptr failed: string_view::string_view(_CharT *, size_t): received nullptr\n"
                );
    }
    uVar1 = param_2;
    if (param_2 < 0x14) {
      uVar1 = 0x13;
    }
    lVar2 = 8;
    if (499 < param_2) {
      lVar2 = 0x40;
    }
    uVar8 = 0xfffffffffffffff8;
    if (499 < param_2) {
      uVar8 = 0xffffffffffffffc0;
    }
    uVar8 = uVar1 + lVar2 + 0xc & uVar8;
    puVar4 = (ulong *)operator_new(uVar8);
    lVar2 = 3;
    if (0x200 < uVar8) {
      lVar2 = 6;
    }
    cVar7 = '\x02';
    if (0x200 < uVar8) {
      cVar7 = ':';
    }
    *puVar4 = param_2;
    puVar4[1] = 2;
    *(char *)((long)puVar4 + 0xc) = (char)(uVar8 >> lVar2) + cVar7;
    memcpy((void *)((long)puVar4 + 0xd),param_1,param_2);
  }
  return puVar4;
}


// ===== 006f1244  FUN_006f1244 =====

void FUN_006f1244(long *param_1)

{
  int iVar1;
  long lVar2;
  
  if (*param_1 + -1 != 0) {
    FUN_006f2180(*param_1 + -1);
  }
  lVar2 = param_1[1];
  iVar1 = FUN_00d0f7a0(0xfffffffe,lVar2 + 8);
  if (iVar1 != 2) {
    return;
  }
  FUN_006f2adc(lVar2);
  return;
}


// ===== 006f12a8  FUN_006f12a8 =====

void FUN_006f12a8(byte *param_1)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  
  bVar1 = *param_1;
  if ((bVar1 & 1) != 0) {
    if (*(long *)param_1 + -1 == 0) goto LAB_006f12dc;
    FUN_006f2180(*(long *)param_1 + -1);
    bVar1 = *param_1;
  }
  if ((bVar1 & 1) == 0) {
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    return;
  }
LAB_006f12dc:
  lVar3 = *(long *)(param_1 + 8);
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  if ((lVar3 != 0) && (iVar2 = FUN_00d0f7a0(0xfffffffe,lVar3 + 8), iVar2 == 2)) {
    FUN_006f2adc(lVar3);
    return;
  }
  return;
}


// ===== 006f1330  FUN_006f1330 =====

byte * FUN_006f1330(byte *param_1,byte *param_2,ulong param_3)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  int iVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  undefined8 uVar14;
  ulong *puVar15;
  
  if ((*param_1 & 1) == 0) {
    if (0xf < param_3) {
LAB_006f1478:
      uVar8 = FUN_006f10e4(param_2,param_3);
      param_1[0] = 1;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      *(undefined8 *)(param_1 + 8) = uVar8;
      plVar9 = (long *)__emutls_get_address(&DAT_00d5a260);
      if (1 < *plVar9) {
        *plVar9 = *plVar9 + -1;
        return param_1;
      }
      lVar10 = FUN_006f1ef8();
      if (lVar10 < 1) {
        return param_1;
      }
      FUN_006f20f0(param_1,6,lVar10);
      return param_1;
    }
LAB_006f13b8:
    *param_1 = (byte)((int)param_3 << 1);
    if (param_3 < 8) {
      if (param_3 < 4) {
        if (param_3 != 0) {
          param_1[1] = *param_2;
          param_1[(param_3 >> 1) + 1] = param_2[param_3 >> 1];
          param_1[param_3] = param_2[param_3 - 1];
        }
        param_1[8] = 0;
        param_1[9] = 0;
        param_1[10] = 0;
        param_1[0xb] = 0;
        param_1[0xc] = 0;
        param_1[0xd] = 0;
        param_1[0xe] = 0;
        param_1[0xf] = 0;
        pbVar1 = param_1 + param_3 + 1;
        pbVar1[0] = 0;
        pbVar1[1] = 0;
        pbVar1[2] = 0;
        pbVar1[3] = 0;
        pbVar1[4] = 0;
        pbVar1[5] = 0;
        pbVar1[6] = 0;
        pbVar1[7] = 0;
      }
      else {
        uVar4 = *(undefined4 *)param_2;
        uVar5 = *(undefined4 *)(param_2 + (param_3 - 4));
        param_1[5] = 0;
        param_1[6] = 0;
        param_1[7] = 0;
        param_1[8] = 0;
        param_1[8] = 0;
        param_1[9] = 0;
        param_1[10] = 0;
        param_1[0xb] = 0;
        param_1[0xc] = 0;
        param_1[0xd] = 0;
        param_1[0xe] = 0;
        param_1[0xf] = 0;
        *(undefined4 *)(param_1 + 1) = uVar4;
        *(undefined4 *)(param_1 + (param_3 - 3)) = uVar5;
      }
    }
    else {
      uVar8 = *(undefined8 *)param_2;
      uVar14 = *(undefined8 *)(param_2 + (param_3 - 8));
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      *(undefined8 *)(param_1 + 1) = uVar8;
      *(undefined8 *)(param_1 + (param_3 - 7)) = uVar14;
    }
    return param_1;
  }
  puVar15 = *(ulong **)(param_1 + 8);
  if (param_3 < 0x10) {
    if (puVar15 != (ulong *)0x0) {
      if (*(long *)param_1 + -1 != 0) {
        FUN_006f2180(*(long *)param_1 + -1);
      }
      *param_1 = (byte)((int)param_3 << 1);
      if (param_3 < 8) {
        if (param_3 < 4) {
          if (param_3 != 0) {
            param_1[1] = *param_2;
            param_1[(param_3 >> 1) + 1] = param_2[param_3 >> 1];
            param_1[param_3] = param_2[param_3 - 1];
          }
          param_1[8] = 0;
          param_1[9] = 0;
          param_1[10] = 0;
          param_1[0xb] = 0;
          param_1[0xc] = 0;
          param_1[0xd] = 0;
          param_1[0xe] = 0;
          param_1[0xf] = 0;
          pbVar1 = param_1 + param_3 + 1;
          pbVar1[0] = 0;
          pbVar1[1] = 0;
          pbVar1[2] = 0;
          pbVar1[3] = 0;
          pbVar1[4] = 0;
          pbVar1[5] = 0;
          pbVar1[6] = 0;
          pbVar1[7] = 0;
        }
        else {
          uVar4 = *(undefined4 *)param_2;
          uVar5 = *(undefined4 *)(param_2 + (param_3 - 4));
          param_1[5] = 0;
          param_1[6] = 0;
          param_1[7] = 0;
          param_1[8] = 0;
          param_1[8] = 0;
          param_1[9] = 0;
          param_1[10] = 0;
          param_1[0xb] = 0;
          param_1[0xc] = 0;
          param_1[0xd] = 0;
          param_1[0xe] = 0;
          param_1[0xf] = 0;
          *(undefined4 *)(param_1 + 1) = uVar4;
          *(undefined4 *)(param_1 + (param_3 - 3)) = uVar5;
        }
      }
      else {
        uVar8 = *(undefined8 *)param_2;
        uVar14 = *(undefined8 *)(param_2 + (param_3 - 8));
        param_1[8] = 0;
        param_1[9] = 0;
        param_1[10] = 0;
        param_1[0xb] = 0;
        param_1[0xc] = 0;
        param_1[0xd] = 0;
        param_1[0xe] = 0;
        param_1[0xf] = 0;
        *(undefined8 *)(param_1 + 1) = uVar8;
        *(undefined8 *)(param_1 + (param_3 - 7)) = uVar14;
      }
      iVar7 = FUN_00d0f7a0(0xfffffffe,puVar15 + 1);
      if (iVar7 != 2) {
        return param_1;
      }
      FUN_006f2adc(puVar15);
      return param_1;
    }
    goto LAB_006f13b8;
  }
  if (puVar15 == (ulong *)0x0) goto LAB_006f1478;
  lVar12 = *(long *)param_1;
  lVar10 = lVar12 + -1;
  if (lVar10 != 0) {
    FUN_006f24c8(lVar10,6);
  }
  bVar6 = *(byte *)((long)puVar15 + 0xc);
  if (5 < bVar6) {
    uVar13 = 6;
    if (0xba < bVar6) {
      uVar13 = 0xc;
    }
    iVar7 = -0xe8d;
    if (0xba < bVar6) {
      iVar7 = -0xb800d;
    }
    uVar11 = (uint)bVar6;
    uVar2 = 3;
    if (0x42 < uVar11) {
      uVar2 = uVar13;
    }
    iVar3 = -0x1d;
    if (0x42 < uVar11) {
      iVar3 = iVar7;
    }
    if ((param_3 <= (ulong)(long)(int)((uVar11 << (ulong)uVar2) + iVar3)) && ((int)puVar15[1] == 2))
    {
      memmove((void *)((long)puVar15 + 0xd),param_2,param_3);
      *puVar15 = param_3;
      goto joined_r0x006f1620;
    }
  }
  uVar8 = FUN_006f10e4(param_2,param_3);
  *(undefined8 *)(param_1 + 8) = uVar8;
  if (lVar10 != 0) {
    *(undefined8 *)(lVar12 + 0x3f) = uVar8;
  }
  iVar7 = FUN_00d0f7a0(0xfffffffe,puVar15 + 1);
  if (iVar7 == 2) {
    FUN_006f2adc(puVar15);
  }
joined_r0x006f1620:
  if (lVar10 == 0) {
    return param_1;
  }
  FUN_006f2508(lVar10);
  return param_1;
}


// ===== 006f1628  FUN_006f1628 =====

void FUN_006f1628(byte *param_1,void *param_2,ulong param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  bool bVar5;
  undefined8 uVar6;
  int iVar7;
  ulong *puVar8;
  long lVar9;
  size_t sVar10;
  byte bVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  ulong *puVar17;
  undefined1 auVar18 [16];
  
  if (param_3 == 0) {
    return;
  }
  bVar11 = *param_1;
  if ((((bVar11 & 1) == 0) || (plVar15 = *(long **)(param_1 + 8), plVar15 == (long *)0x0)) ||
     (*plVar15 != 0)) {
    if (((bVar11 & 1) == 0) || (puVar17 = *(ulong **)(param_1 + 8), puVar17 == (ulong *)0x0))
    goto LAB_006f17dc;
    lVar16 = *(long *)param_1 + -1;
    if (lVar16 != 0) {
      FUN_006f24c8(lVar16,param_4);
    }
    puVar8 = puVar17;
    if (*(char *)((long)puVar17 + 0xc) == '\x02') {
      puVar8 = (ulong *)puVar17[2];
      if ((int)puVar17[1] == 2) {
        FUN_006f5204(puVar17 + 3);
        operator_delete(puVar17);
      }
      else {
        FUN_00d0f740(2,puVar8 + 1);
        iVar7 = FUN_00d0f7a0(0xfffffffe,puVar17 + 1);
        if (iVar7 == 2) {
          FUN_006f2adc(puVar17);
        }
      }
    }
    bVar11 = *(byte *)((long)puVar8 + 0xc);
    if (bVar11 != 3) {
LAB_006f16f8:
      if ((5 < bVar11) && ((int)puVar8[1] == 2)) {
        bVar11 = *(byte *)((long)puVar8 + 0xc);
        uVar12 = 6;
        if (0xba < bVar11) {
          uVar12 = 0xc;
        }
        iVar7 = -0xe8d;
        if (0xba < bVar11) {
          iVar7 = -0xb800d;
        }
        uVar1 = 3;
        if (0x42 < bVar11) {
          uVar1 = uVar12;
        }
        iVar2 = -0x1d;
        if (0x42 < bVar11) {
          iVar2 = iVar7;
        }
        uVar13 = *puVar8;
        uVar14 = (long)(int)(((uint)bVar11 << (ulong)uVar1) + iVar2) - uVar13;
        if (uVar14 != 0) {
          sVar10 = param_3;
          if (uVar14 <= param_3) {
            sVar10 = uVar14;
          }
          *puVar8 = sVar10 + uVar13;
          memcpy((void *)((long)puVar8 + uVar13 + 0xd),param_2,sVar10);
          goto joined_r0x006f1790;
        }
      }
      bVar5 = false;
      goto LAB_006f18e8;
    }
    if ((int)puVar8[1] != 2) {
LAB_006f16f4:
      bVar11 = *(byte *)((long)puVar8 + 0xc);
      goto LAB_006f16f8;
    }
    auVar18 = FUN_006f1ba8(puVar8,param_3);
    sVar10 = auVar18._8_8_;
    if (sVar10 == 0) goto LAB_006f16f4;
    memcpy(auVar18._0_8_,param_2,sVar10);
    if (param_3 < sVar10) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/string_view:436: libc++ Hardening assertion __n <= size() failed: remove_prefix() can\'t remove more than size()\n"
                );
    }
joined_r0x006f1790:
    param_3 = param_3 - sVar10;
    if (param_3 != 0) {
      bVar5 = false;
      param_2 = (void *)((long)param_2 + sVar10);
      goto LAB_006f18e8;
    }
    *(ulong **)(param_1 + 8) = puVar8;
  }
  else {
    if (*(long *)param_1 + -1 != 0) {
      FUN_006f2180(*(long *)param_1 + -1);
    }
    iVar7 = FUN_00d0f7a0(0xfffffffe,plVar15 + 1);
    if (iVar7 == 2) {
      FUN_006f2adc(plVar15);
    }
    bVar11 = 0;
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
LAB_006f17dc:
    uVar13 = (ulong)(long)(char)bVar11 >> 1;
    uVar14 = uVar13 + param_3;
    if (param_3 <= 0xf - uVar13) {
      *param_1 = (byte)((int)uVar14 << 1);
      memcpy(param_1 + uVar13 + 1,param_2,param_3);
      return;
    }
    uVar3 = uVar14;
    if (0xff2 < uVar14) {
      uVar3 = 0xff3;
    }
    uVar4 = 0x20;
    if (0x13 < uVar14) {
      uVar4 = uVar3 + 0xd;
    }
    lVar16 = 8;
    if (0x200 < uVar4) {
      lVar16 = 0x40;
    }
    uVar14 = 0xfffffffffffffff8;
    if (0x200 < uVar4) {
      uVar14 = 0xffffffffffffffc0;
    }
    uVar14 = (uVar4 + lVar16) - 1 & uVar14;
    puVar8 = (ulong *)operator_new(uVar14);
    lVar16 = 3;
    if (0x200 < uVar14) {
      lVar16 = 6;
    }
    lVar9 = 2;
    if (0x200 < uVar14) {
      lVar9 = 0x3a;
    }
    puVar8[1] = 0;
    uVar14 = (uVar14 >> lVar16) + lVar9;
    *(undefined4 *)(puVar8 + 1) = 2;
    *(char *)((long)puVar8 + 0xc) = (char)uVar14;
    uVar12 = 3;
    if (0x42 < uVar14) {
      uVar12 = 6;
    }
    iVar7 = -0x1d;
    if (0x42 < uVar14) {
      iVar7 = -0xe8d;
    }
    uVar14 = (long)(((int)uVar14 << (ulong)uVar12) + iVar7) - uVar13;
    sVar10 = uVar14;
    if (param_3 <= uVar14) {
      sVar10 = param_3;
    }
    memcpy((void *)((long)puVar8 + 0xd),param_1 + 1,uVar13);
    memcpy((void *)((long)puVar8 + uVar13 + 0xd),param_2,sVar10);
    *puVar8 = sVar10 + uVar13;
    if (param_3 <= uVar14) {
      param_1[0] = 1;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      *(ulong **)(param_1 + 8) = puVar8;
      plVar15 = (long *)__emutls_get_address(PTR_DAT_00d525b8);
      if (1 < *plVar15) {
        *plVar15 = *plVar15 + -1;
        return;
      }
      lVar16 = FUN_006f1ef8();
      if (lVar16 < 1) {
        return;
      }
      FUN_006f20f0(param_1,param_4,lVar16);
      return;
    }
    lVar16 = 0;
    param_2 = (void *)((long)param_2 + sVar10);
    param_3 = param_3 - sVar10;
    bVar5 = true;
LAB_006f18e8:
    if (*(char *)((long)puVar8 + 0xc) != '\x03') {
      puVar17 = puVar8;
      if (*(char *)((long)puVar8 + 0xc) == '\x02') {
        puVar17 = (ulong *)puVar8[2];
        if ((int)puVar8[1] == 2) {
          if (puVar8 != (ulong *)0x0) {
            FUN_006f5204(puVar8 + 3);
            operator_delete(puVar8);
          }
        }
        else {
          FUN_00d0f740(2,puVar17 + 1);
          iVar7 = FUN_00d0f7a0(0xfffffffe,puVar8 + 1);
          if (iVar7 == 2) {
            FUN_006f2adc(puVar8);
          }
        }
      }
      if ((*(byte *)((long)puVar17 + 0xc) < 5) &&
         ((*(byte *)((long)puVar17 + 0xc) != 1 || (*(byte *)(puVar17[3] + 0xc) < 5)))) {
        puVar8 = (ulong *)FUN_006f4aa0(puVar17);
      }
      else {
        puVar8 = (ulong *)operator_new(0x40);
        *(undefined4 *)(puVar8 + 1) = 2;
        uVar6 = DAT_001f5790;
        uVar14 = *puVar17;
        puVar8[2] = (ulong)puVar17;
        *(int *)((long)puVar8 + 0xc) = (int)uVar6;
        *puVar8 = uVar14;
      }
    }
    lVar9 = 0;
    if (param_3 <= *puVar8 / 10) {
      lVar9 = *puVar8 / 10 - param_3;
    }
    puVar8 = (ulong *)thunk_FUN_006f31b0(puVar8,param_2,param_3,lVar9);
    *(ulong **)(param_1 + 8) = puVar8;
    if (bVar5) {
      param_1[0] = 1;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      plVar15 = (long *)__emutls_get_address(PTR_DAT_00d525b8);
      if (*plVar15 < 2) {
        lVar9 = FUN_006f1ef8();
        if (0 < lVar9) {
          FUN_006f20f0(param_1,param_4,lVar9);
        }
      }
      else {
        *plVar15 = *plVar15 + -1;
      }
      if (lVar16 == 0) {
        return;
      }
      goto LAB_006f1ae0;
    }
  }
  if (lVar16 == 0) {
    return;
  }
  *(ulong **)(lVar16 + 0x40) = puVar8;
LAB_006f1ae0:
  FUN_006f2508(lVar16);
  return;
}


// ===== 006f1ba8  FUN_006f1ba8 =====

long FUN_006f1ba8(long *param_1,ulong param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  uint uVar13;
  
  bVar4 = *(byte *)((long)param_1 + 0xd);
  plVar9 = param_1;
  if (bVar4 < 2) {
    plVar10 = param_1;
    plVar11 = param_1;
    if (bVar4 != 0) {
      if (bVar4 != 1) {
code_r0x006f1cc8:
        lVar7 = FUN_006f45b8();
        return lVar7;
      }
      goto LAB_006f1c28;
    }
  }
  else {
    if (bVar4 != 2) {
      if (bVar4 != 3) goto code_r0x006f1cc8;
      plVar9 = (long *)param_1[(ulong)*(byte *)((long)param_1 + 0xf) + 1];
      if ((int)plVar9[1] != 2) {
        return 0;
      }
    }
    plVar10 = (long *)plVar9[(ulong)*(byte *)((long)plVar9 + 0xf) + 1];
    if ((int)plVar10[1] != 2) {
      return 0;
    }
LAB_006f1c28:
    plVar11 = (long *)plVar10[(ulong)*(byte *)((long)plVar10 + 0xf) + 1];
    if ((int)plVar11[1] != 2) {
      return 0;
    }
  }
  plVar12 = (long *)plVar11[(ulong)*(byte *)((long)plVar11 + 0xf) + 1];
  if (((int)plVar12[1] != 2) || (bVar5 = *(byte *)((long)plVar12 + 0xc), bVar5 < 6)) {
    return 0;
  }
  uVar13 = 6;
  if (0xba < bVar5) {
    uVar13 = 0xc;
  }
  iVar1 = -0xe8d;
  if (0xba < bVar5) {
    iVar1 = -0xb800d;
  }
  uVar8 = (uint)bVar5;
  uVar2 = 3;
  if (0x42 < uVar8) {
    uVar2 = uVar13;
  }
  iVar3 = -0x1d;
  if (0x42 < uVar8) {
    iVar3 = iVar1;
  }
  lVar7 = *plVar12;
  uVar6 = (int)((uVar8 << (ulong)uVar2) + iVar3) - lVar7;
  if (uVar6 == 0) {
    return 0;
  }
  if (param_2 <= uVar6) {
    uVar6 = param_2;
  }
  *plVar12 = uVar6 + lVar7;
  if (bVar4 < 2) {
    if (bVar4 == 0) goto LAB_006f1d34;
  }
  else {
    if (bVar4 != 2) {
      *param_1 = *param_1 + uVar6;
    }
    *plVar9 = *plVar9 + uVar6;
  }
  *plVar10 = *plVar10 + uVar6;
LAB_006f1d34:
  *plVar11 = *plVar11 + uVar6;
  return (long)plVar12 + lVar7 + 0xd;
}


// ===== 006f1d48  FUN_006f1d48 =====

void FUN_006f1d48(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  puVar9 = (undefined8 *)param_1[1];
  puVar2 = (undefined8 *)param_1[2];
  if (puVar9 != puVar2) {
    uVar7 = param_1[4];
    plVar3 = puVar9 + (uVar7 >> 8);
    lVar5 = *plVar3;
    lVar4 = lVar5 + (uVar7 & 0xff) * 0x10;
    while (lVar4 != puVar9[param_1[5] + uVar7 >> 8] + (param_1[5] + uVar7 & 0xff) * 0x10) {
      if (lVar4 == 0) goto LAB_006f1ea8;
      lVar4 = lVar4 + 0x10;
      if (lVar4 - lVar5 == 0x1000) {
        plVar3 = plVar3 + 1;
        lVar5 = *plVar3;
        lVar4 = lVar5;
      }
    }
  }
  param_1[5] = 0;
  lVar4 = (long)puVar2 - (long)puVar9;
  while (uVar7 = lVar4 >> 3, 2 < uVar7) {
    operator_delete((void *)*puVar9);
    puVar2 = (undefined8 *)param_1[2];
    puVar9 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = puVar9;
    lVar4 = (long)puVar2 - (long)puVar9;
  }
  if (uVar7 == 1) {
    uVar1 = 0x80;
  }
  else {
    if (uVar7 != 2) goto LAB_006f1e20;
    uVar1 = 0x100;
  }
  param_1[4] = uVar1;
LAB_006f1e20:
  puVar8 = puVar2;
  if (puVar9 != puVar2) {
    do {
      puVar8 = puVar9 + 1;
      operator_delete((void *)*puVar9);
      puVar9 = puVar8;
    } while (puVar8 != puVar2);
    puVar2 = (undefined8 *)param_1[1];
    puVar8 = (undefined8 *)param_1[2];
  }
  uVar6 = (ulong)((long)puVar8 + (-8 - ((long)puVar8 << 0x3d))) >> 3;
  uVar7 = (ulong)(((long)puVar2 - (long)puVar8 << 0x3d) - ((long)puVar2 - (long)puVar8)) >> 3;
  if (uVar6 <= uVar7) {
    uVar7 = uVar6;
  }
  if ((1 < uVar7) && ((((int)puVar2 - (int)puVar8 | -(int)puVar8) & 7U) == 0)) {
    uVar7 = uVar7 & 0x1ffffffffffffffe;
    puVar8 = puVar8 + -uVar7;
    do {
      uVar7 = uVar7 - 2;
    } while (uVar7 != 0);
  }
  do {
    if (puVar8 == puVar2) {
      param_1[2] = puVar8;
      if ((void *)*param_1 != (void *)0x0) {
        operator_delete((void *)*param_1);
        return;
      }
      return;
    }
    puVar8 = puVar8 + -1;
  } while (puVar8 != (undefined8 *)0x0);
LAB_006f1ea8:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 006f1ef8  FUN_006f1ef8 =====

long FUN_006f1ef8(long *param_1)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  uVar1 = DAT_00d5a258;
  if ((int)DAT_00d5a258 < 1) {
    lVar5 = 0;
    param_1[1] = 0x10000;
    *param_1 = 0x10000;
  }
  else if ((int)DAT_00d5a258 == 1) {
    lVar5 = 1;
    param_1[1] = 1;
    *param_1 = 1;
  }
  else {
    plVar2 = (long *)__emutls_get_address(&DAT_00d5a260);
    lVar6 = *plVar2;
    if (lVar6 < 1) {
      lVar5 = param_1[1];
      uVar3 = __emutls_get_address(&DAT_00d5a280);
      lVar4 = FUN_006f1ff0(uVar3,uVar1);
      *param_1 = lVar4;
      param_1[1] = lVar4;
      if (lVar6 == -1) {
        if (*plVar2 < 2) {
          lVar6 = FUN_006f1ef8(plVar2);
          if (lVar6 < 1) {
            lVar5 = 0;
          }
        }
        else {
          lVar5 = 0;
          *plVar2 = *plVar2 + -1;
        }
      }
    }
    else {
      lVar5 = 0;
      *param_1 = *param_1 + -1;
    }
  }
  return lVar5;
}


// ===== 006f1ff0  FUN_006f1ff0 =====

long FUN_006f1ff0(ulong *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  double dVar3;
  double dVar4;
  
  if ((char)param_1[2] == '\x01') {
    uVar2 = *param_1;
  }
  else {
    uVar2 = FUN_00d0f740(1,&DAT_00d7eef0);
    *(undefined1 *)(param_1 + 2) = 1;
    uVar2 = ((long)param_1 + (uVar2 & 0xffffffff)) * 0xb05b0eb64551 + 0x4c56a6636394;
  }
  dVar4 = (double)param_1[1];
  uVar2 = uVar2 * 0x5deece66d + 0xb;
  *param_1 = uVar2 & 0xffffffffffff;
  dVar3 = log2((double)(((uint)(uVar2 >> 0x16) & 0x3ffffff) + 1));
  dVar4 = dVar4 + (double)(param_2 + -1) * DAT_001f5d00 * (dVar3 + -26.0);
  if (dVar4 == 4.611686018427388e+18 || dVar4 < 4.611686018427388e+18 != NAN(dVar4)) {
    lVar1 = (long)(double)(long)dVar4 + 1;
    param_1[1] = (ulong)(dVar4 - (double)(long)dVar4);
  }
  else {
    lVar1 = 0x4000000000000000;
  }
  return lVar1;
}


// ===== 006f20f0  FUN_006f20f0 =====

void FUN_006f20f0(ulong *param_1,undefined4 param_2,undefined8 param_3)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  pvVar1 = operator_new(0x540);
  FUN_006f2254(pvVar1,param_1[1],0,param_2,param_3);
  uVar4 = *(undefined8 *)((long)pvVar1 + 0x20);
  *param_1 = (ulong)pvVar1 | 1;
  FUN_006e4878(uVar4);
  lVar2 = *(long *)((long)pvVar1 + 0x20);
  lVar3 = *(long *)(lVar2 + 8);
  if (lVar3 != 0) {
    *(void **)(lVar3 + 0x28) = pvVar1;
    lVar2 = *(long *)((long)pvVar1 + 0x20);
  }
  *(long *)((long)pvVar1 + 0x30) = lVar3;
  *(void **)(lVar2 + 8) = pvVar1;
  FUN_006e5c10(uVar4);
  return;
}


// ===== 006f2180  FUN_006f2180 =====

void FUN_006f2180(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = param_1[4];
  FUN_006e4878(lVar4);
  lVar2 = param_1[6];
  lVar3 = param_1[5];
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x28) = lVar3;
  }
  if (lVar3 == 0) {
    *(long *)(param_1[4] + 8) = lVar2;
  }
  else {
    *(long *)(lVar3 + 0x30) = lVar2;
  }
  FUN_006e5c10(lVar4);
  uVar1 = FUN_006f2840(param_1);
  if ((uVar1 & 1) != 0) {
    param_1[8] = 0;
    if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x006f2208. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))(param_1);
      return;
    }
    return;
  }
  FUN_006e4878(param_1 + 7);
  if (param_1[8] != 0) {
    FUN_00d0f740(2,param_1[8] + 8);
  }
  FUN_006e5c10(param_1 + 7);
  FUN_006f28bc(param_1);
  return;
}


// ===== 006f2254  FUN_006f2254 =====

void FUN_006f2254(undefined8 *param_1,undefined8 param_2,long param_3,uint param_4,
                 undefined8 param_5)

{
  int iVar1;
  void *__src;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 auVar6 [12];
  
  FUN_006f2550(param_1,0);
  *param_1 = &PTR_FUN_00d29d48;
  if (((DAT_00d7ef08 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d7ef08), iVar1 != 0)) {
    DAT_00d7eef8 = 0;
    DAT_00d7ef00 = 0;
    FUN_0054ff1c(&DAT_00d7ef08);
  }
  param_1[4] = &DAT_00d7eef8;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = param_2;
  iVar1 = FUN_006e84d8(param_1 + 9,0x40,1);
  param_1[0x89] = (long)iVar1;
  if (param_3 == 0) {
    iVar1 = 0;
    param_1[0x8a] = 0;
    *(uint *)(param_1 + 0x8b) = param_4;
  }
  else {
    lVar2 = *(long *)(param_3 + 0x450);
    if (lVar2 == 0) {
      lVar2 = *(long *)(param_3 + 0x448);
      __src = (void *)(param_3 + 0x48);
      puVar5 = (undefined8 *)(param_3 + 0x448);
    }
    else {
      puVar5 = (undefined8 *)(param_3 + 0x450);
      __src = (void *)(param_3 + 0x248);
    }
    memcpy(param_1 + 0x49,__src,lVar2 << 3);
    uVar3 = *puVar5;
    *(uint *)(param_1 + 0x8b) = param_4;
    param_1[0x8a] = uVar3;
    iVar1 = *(int *)(param_3 + 0x45c);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_3 + 0x458);
    }
  }
  *(int *)((long)param_1 + 0x45c) = iVar1;
  param_1[0xa4] = 0;
  param_1[0x8d] = 0;
  param_1[0x8c] = 0;
  param_1[0x8f] = 0;
  param_1[0x8e] = 0;
  param_1[0x91] = 0;
  param_1[0x90] = 0;
  param_1[0x93] = 0;
  param_1[0x92] = 0;
  param_1[0x95] = 0;
  param_1[0x94] = 0;
  param_1[0x97] = 0;
  param_1[0x96] = 0;
  param_1[0x99] = 0;
  param_1[0x98] = 0;
  param_1[0x9b] = 0;
  param_1[0x9a] = 0;
  param_1[0x9d] = 0;
  param_1[0x9c] = 0;
  param_1[0x9f] = 0;
  param_1[0x9e] = 0;
  param_1[0xa1] = 0;
  param_1[0xa0] = 0;
  param_1[0xa3] = 0;
  param_1[0xa2] = 0;
  auVar6 = FUN_006e66b8();
  param_1[0xa7] = param_5;
  *(undefined1 (*) [12])(param_1 + 0xa5) = auVar6;
  param_1[(ulong)param_4 + 0x8c] = param_1[(ulong)param_4 + 0x8c] + 1;
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      lVar4 = *(long *)(param_3 + 0x460 + lVar2);
      if (lVar4 != 0) {
        *(long *)((long)param_1 + lVar2 + 0x460) = *(long *)((long)param_1 + lVar2 + 0x460) + lVar4;
      }
      lVar2 = lVar2 + 8;
    } while (lVar2 != 200);
  }
  return;
}


// ===== 006f2404  FUN_006f2404 =====

void FUN_006f2404(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = param_1[8];
  *param_1 = &PTR_FUN_00d29d48;
  if ((lVar2 != 0) && (iVar1 = FUN_00d0f7a0(0xfffffffe,lVar2 + 8), iVar1 == 2)) {
    FUN_006f2adc(lVar2);
  }
  FUN_006f2610(param_1);
  return;
}


// ===== 006f2460  FUN_006f2460 =====

void FUN_006f2460(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = param_1[8];
  *param_1 = &PTR_FUN_00d29d48;
  if ((lVar2 != 0) && (iVar1 = FUN_00d0f7a0(0xfffffffe,lVar2 + 8), iVar1 == 2)) {
    FUN_006f2adc(lVar2);
  }
  FUN_006f2610(param_1);
  operator_delete(param_1);
  return;
}


// ===== 006f24c8  FUN_006f24c8 =====

void FUN_006f24c8(long param_1,uint param_2)

{
  FUN_006e4878(param_1 + 0x38);
  param_1 = param_1 + (ulong)param_2 * 8;
  *(long *)(param_1 + 0x460) = *(long *)(param_1 + 0x460) + 1;
  return;
}


// ===== 006f2508  FUN_006f2508 =====

void FUN_006f2508(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x40);
  FUN_006e5c10(param_1 + 0x38);
  if (lVar1 != 0) {
    return;
  }
  FUN_006f2180(param_1);
  return;
}


// ===== 006f2550  FUN_006f2550 =====

void FUN_006f2550(undefined8 *param_1,byte param_2)

{
  int iVar1;
  
  *(byte *)(param_1 + 1) = param_2;
  *param_1 = &PTR_FUN_00d29d68;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((DAT_00d7ef20 & 1) == 0) {
    iVar1 = FUN_0054fdd4(&DAT_00d7ef20);
    if (iVar1 != 0) {
      DAT_00d7ef10 = 0;
      DAT_00d7ef18 = (undefined8 *)0x0;
      FUN_0054ff1c(&DAT_00d7ef20);
    }
  }
  if ((param_2 & 1) != 0) {
    FUN_006e4878(&DAT_00d7ef10);
    if (DAT_00d7ef18 != (undefined8 *)0x0) {
      param_1[2] = DAT_00d7ef18;
      *(undefined8 **)((long)DAT_00d7ef18 + 0x18) = param_1;
    }
    DAT_00d7ef18 = param_1;
    FUN_006e5c10(&DAT_00d7ef10);
    return;
  }
  return;
}


// ===== 006f2610  FUN_006f2610 =====

void FUN_006f2610(undefined8 *param_1)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long local_40;
  long *local_38;
  long *local_30;
  long *local_28;
  
  *param_1 = &PTR_FUN_00d29d68;
  if (((DAT_00d7ef20 & 1) == 0) && (iVar2 = FUN_0054fdd4(&DAT_00d7ef20), iVar2 != 0)) {
    DAT_00d7ef10 = 0;
    DAT_00d7ef18 = 0;
    FUN_0054ff1c(&DAT_00d7ef20);
  }
  if (*(char *)(param_1 + 1) != '\x01') {
    return;
  }
  local_38 = (long *)0x0;
  local_30 = (long *)0x0;
  local_28 = (long *)0x0;
  FUN_006e4878(&DAT_00d7ef10);
  local_40 = param_1[3];
  if (param_1[2] == 0) {
    if (local_40 != 0) {
      plVar3 = (long *)0x0;
      do {
        if ((*(byte *)(local_40 + 8) & 1) != 0) goto LAB_006f267c;
        if (plVar3 < local_28) {
          if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          local_30 = plVar3 + 1;
          *plVar3 = local_40;
        }
        else {
          local_30 = (long *)FUN_006f29d0(&local_38,&local_40);
        }
        local_40 = *(long *)(local_40 + 0x18);
        plVar3 = local_30;
      } while (local_40 != 0);
    }
  }
  else {
    *(long *)(param_1[2] + 0x18) = local_40;
    if (local_40 != 0) {
LAB_006f267c:
      *(undefined8 *)(local_40 + 0x10) = param_1[2];
      goto LAB_006f26e4;
    }
  }
  DAT_00d7ef18 = param_1[2];
LAB_006f26e4:
  FUN_006e5c10(&DAT_00d7ef10);
  plVar1 = local_30;
  for (plVar3 = local_38; plVar3 != plVar1; plVar3 = plVar3 + 1) {
    if ((long *)*plVar3 != (long *)0x0) {
      (**(code **)(*(long *)*plVar3 + 8))();
    }
  }
  if (local_38 != (long *)0x0) {
    uVar5 = (ulong)((long)local_30 + (-8 - ((long)local_30 << 0x3d))) >> 3;
    uVar4 = (ulong)(((long)local_38 - (long)local_30 << 0x3d) - ((long)local_38 - (long)local_30))
            >> 3;
    if (uVar5 <= uVar4) {
      uVar4 = uVar5;
    }
    plVar3 = local_30;
    if ((1 < uVar4) && ((((int)local_38 - (int)local_30 | -(int)local_30) & 7U) == 0)) {
      uVar4 = uVar4 & 0x1ffffffffffffffe;
      plVar3 = local_30 + -uVar4;
      do {
        uVar4 = uVar4 - 2;
      } while (uVar4 != 0);
    }
    while (plVar3 != local_38) {
      plVar3 = plVar3 + -1;
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    local_30 = local_38;
    operator_delete(local_38);
  }
  return;
}


// ===== 006f2810  FUN_006f2810 =====

void FUN_006f2810(void *param_1)

{
  FUN_006f2610();
  operator_delete(param_1);
  return;
}


// ===== 006f2840  FUN_006f2840 =====

bool FUN_006f2840(long param_1)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    return true;
  }
  if (((DAT_00d7ef20 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d7ef20), iVar1 != 0)) {
    DAT_00d7ef10 = 0;
    DAT_00d7ef18 = 0;
    FUN_0054ff1c(&DAT_00d7ef20);
  }
  return DAT_00d7ef18 == 0;
}


// ===== 006f28bc  FUN_006f28bc =====

void FUN_006f28bc(long *param_1)

{
  int iVar1;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  if (((DAT_00d7ef20 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d7ef20), iVar1 != 0)) {
    DAT_00d7ef10 = 0;
    DAT_00d7ef18 = (long *)0x0;
    FUN_0054ff1c(&DAT_00d7ef20);
  }
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    if (((DAT_00d7ef20 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d7ef20), iVar1 != 0)) {
      DAT_00d7ef10 = 0;
      DAT_00d7ef18 = (long *)0x0;
      FUN_0054ff1c(&DAT_00d7ef20);
    }
    if (DAT_00d7ef18 != (long *)0x0) {
      FUN_006e4878(&DAT_00d7ef10);
      if (DAT_00d7ef18 != (long *)0x0) {
        param_1[2] = (long)DAT_00d7ef18;
        *(long **)((long)DAT_00d7ef18 + 0x18) = param_1;
        DAT_00d7ef18 = param_1;
        FUN_006e5c10(&DAT_00d7ef10);
        return;
      }
      FUN_006e5c10(&DAT_00d7ef10);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x006f2974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}


// ===== 006f29d0  FUN_006f29d0 =====

undefined8 * FUN_006f29d0(long *param_1,undefined8 *param_2)

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
    FUN_006f2ac4();
LAB_006f2ac0:
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
    if (uVar5 >> 0x3d != 0) goto LAB_006f2ac0;
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


// ===== 006f2ac4  FUN_006f2ac4 =====

void FUN_006f2ac4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 006f2adc  FUN_006f2adc =====

void FUN_006f2adc(void *param_1)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  
  while (cVar1 = *(char *)((long)param_1 + 0xc), cVar1 == '\x01') {
    pvVar3 = *(void **)((long)param_1 + 0x18);
    if (param_1 != (void *)0x0) {
      operator_delete(param_1);
    }
    param_1 = pvVar3;
    if (((int)*(undefined8 *)((long)pvVar3 + 8) != 2) &&
       (iVar2 = FUN_00d0f7a0(0xfffffffe,(long)pvVar3 + 8), iVar2 != 2)) {
      return;
    }
  }
  if (cVar1 == '\x02') {
    FUN_006f5194();
    return;
  }
  if (cVar1 == '\x05') {
                    /* WARNING: Could not recover jumptable at 0x006f2b8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((long)param_1 + 0x18))();
    return;
  }
  if (cVar1 != '\x03') {
    operator_delete(param_1);
    return;
  }
  FUN_006f4220();
  return;
}


// ===== 006f2be0  FUN_006f2be0 =====

long * FUN_006f2be0(long *param_1,long *param_2)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  code *pcVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  char cVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined1 **ppuVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  uint local_d0;
  undefined1 *apuStack_c8 [4];
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  
  bVar2 = *(byte *)((long)param_1 + 0xd);
  uVar17 = (ulong)bVar2;
  lVar15 = *param_2;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  apuStack_c8[0] = &DAT_aaaaaaaaaaaaaaaa;
  apuStack_c8[2] = &DAT_aaaaaaaaaaaaaaaa;
  apuStack_c8[1] = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  apuStack_c8[3] = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_d0 = (uint)bVar2;
  uVar16 = (uint)bVar2;
  plVar14 = param_1;
  if (local_d0 == 0) {
    uVar18 = 0;
LAB_006f2c84:
    uVar10 = (uint)uVar18;
    local_d0 = uVar10;
    if ((int)plVar14[1] == 2) {
      local_d0 = uVar10 + 1;
    }
    if ((int)uVar10 < (int)uVar16) {
      ppuVar19 = apuStack_c8 + ((uVar18 & 0xffffffff) - 1);
      lVar12 = uVar17 - (uVar18 & 0xffffffff);
      do {
        ppuVar19 = ppuVar19 + 1;
        *ppuVar19 = (undefined1 *)plVar14;
        lVar12 = lVar12 + -1;
        plVar14 = (long *)plVar14[(ulong)*(byte *)((long)plVar14 + 0xf) + 1];
      } while (lVar12 != 0);
    }
  }
  else {
    uVar18 = 0;
    do {
      if ((int)plVar14[1] != 2) goto LAB_006f2c84;
      bVar3 = *(byte *)((long)plVar14 + 0xf);
      uVar11 = uVar18 + 1;
      apuStack_c8[uVar18] = (undefined1 *)plVar14;
      plVar14 = (long *)(plVar14 + 1)[bVar3];
      uVar18 = uVar11;
    } while (uVar17 != uVar11);
    if ((int)plVar14[1] == 2) {
      local_d0 = uVar16 + 1;
    }
  }
  bVar3 = *(byte *)((long)plVar14 + 0xf);
  uVar18 = (ulong)*(byte *)((long)plVar14 + 0xe);
  if (bVar3 - uVar18 < 6) {
    if ((int)uVar16 < (int)local_d0) {
      iVar6 = 0;
      plVar7 = plVar14;
    }
    else {
      lVar12 = *plVar14;
      plVar7 = (long *)operator_new(0x40);
      *plVar7 = lVar12;
      *(undefined4 *)(plVar7 + 1) = 2;
      uVar21 = *(undefined8 *)((long)plVar14 + 0x34);
      uVar20 = *(undefined8 *)((long)plVar14 + 0x2c);
      uVar23 = *(undefined8 *)((long)plVar14 + 0x14);
      uVar22 = *(undefined8 *)((long)plVar14 + 0xc);
      uVar25 = *(undefined8 *)((long)plVar14 + 0x24);
      uVar24 = *(undefined8 *)((long)plVar14 + 0x1c);
      lVar12 = (ulong)bVar3 * 8 + uVar18 * -8;
      *(undefined4 *)((long)plVar7 + 0x3c) = *(undefined4 *)((long)plVar14 + 0x3c);
      *(undefined8 *)((long)plVar7 + 0x34) = uVar21;
      *(undefined8 *)((long)plVar7 + 0x2c) = uVar20;
      *(undefined8 *)((long)plVar7 + 0x24) = uVar25;
      *(undefined8 *)((long)plVar7 + 0x1c) = uVar24;
      *(undefined8 *)((long)plVar7 + 0x14) = uVar23;
      *(undefined8 *)((long)plVar7 + 0xc) = uVar22;
      if (lVar12 != 0) {
        plVar14 = plVar14 + uVar18 + 2;
        do {
          FUN_00d0f740(2,*plVar14 + 8);
          lVar12 = lVar12 + -8;
          plVar14 = plVar14 + 1;
        } while (lVar12 != 0);
      }
      iVar6 = 1;
    }
    bVar3 = *(byte *)((long)plVar7 + 0xe);
    if (bVar3 != 0) {
      bVar4 = *(byte *)((long)plVar7 + 0xf);
      *(undefined1 *)((long)plVar7 + 0xe) = 0;
      lVar12 = (ulong)bVar4 - (ulong)bVar3;
      *(char *)((long)plVar7 + 0xf) = (char)lVar12;
      if (bVar4 != bVar3) {
        plVar14 = plVar7 + 2;
        do {
          lVar12 = lVar12 + -1;
          *plVar14 = plVar14[bVar3];
          plVar14 = plVar14 + 1;
        } while (lVar12 != 0);
      }
    }
    bVar3 = *(byte *)((long)plVar7 + 0xf);
    lVar12 = *plVar7;
    *(byte *)((long)plVar7 + 0xf) = bVar3 + 1;
    plVar7[(ulong)bVar3 + 2] = (long)param_2;
    *plVar7 = lVar12 + lVar15;
  }
  else {
    plVar7 = (long *)operator_new(0x40);
    cVar9 = *(char *)((long)param_2 + 0xc);
    *(undefined4 *)(plVar7 + 1) = 2;
    if (cVar9 == '\x03') {
      cVar9 = *(char *)((long)param_2 + 0xd) + '\x01';
    }
    else {
      cVar9 = '\0';
    }
    lVar12 = *param_2;
    *(char *)((long)plVar7 + 0xd) = cVar9;
    *(undefined1 *)((long)plVar7 + 0xc) = 3;
    *plVar7 = lVar12;
    *(undefined2 *)((long)plVar7 + 0xe) = 0x100;
    iVar6 = 2;
    plVar7[2] = (long)param_2;
  }
  if (bVar2 != 0) {
    ppuVar19 = apuStack_c8 + ((ulong)(bVar2 - 1) - 1);
    lVar12 = (ulong)(bVar2 - 1) + 1;
    do {
      plVar14 = (long *)apuStack_c8[uVar17 - 1];
      if (iVar6 == 1) {
        uVar18 = (ulong)*(byte *)((long)plVar14 + 0xf);
        if ((long)(int)local_d0 < (long)uVar17) {
          lVar13 = *plVar14;
          plVar8 = (long *)operator_new(0x40);
          *plVar8 = lVar13;
          *(undefined4 *)(plVar8 + 1) = 2;
          uVar21 = *(undefined8 *)((long)plVar14 + 0x34);
          uVar20 = *(undefined8 *)((long)plVar14 + 0x2c);
          uVar23 = *(undefined8 *)((long)plVar14 + 0x14);
          uVar22 = *(undefined8 *)((long)plVar14 + 0xc);
          uVar25 = *(undefined8 *)((long)plVar14 + 0x24);
          uVar24 = *(undefined8 *)((long)plVar14 + 0x1c);
          *(undefined4 *)((long)plVar8 + 0x3c) = *(undefined4 *)((long)plVar14 + 0x3c);
          *(undefined8 *)((long)plVar8 + 0x34) = uVar21;
          *(undefined8 *)((long)plVar8 + 0x2c) = uVar20;
          *(undefined8 *)((long)plVar8 + 0x24) = uVar25;
          *(undefined8 *)((long)plVar8 + 0x1c) = uVar24;
          *(undefined8 *)((long)plVar8 + 0x14) = uVar23;
          *(undefined8 *)((long)plVar8 + 0xc) = uVar22;
          uVar11 = (ulong)*(byte *)((long)plVar14 + 0xe);
          if (uVar11 * 8 + (uVar18 - 1) * -8 != 0) {
            lVar13 = uVar18 * 8 + uVar11 * -8 + -8;
            plVar14 = plVar14 + uVar11 + 2;
            do {
              FUN_00d0f740(2,*plVar14 + 8);
              lVar13 = lVar13 + -8;
              plVar14 = plVar14 + 1;
            } while (lVar13 != 0);
          }
          iVar6 = 1;
          plVar14 = plVar8;
        }
        else {
          lVar13 = plVar14[uVar18 + 1];
          iVar6 = FUN_00d0f7a0(0xfffffffe,lVar13 + 8);
          if (iVar6 == 2) {
            FUN_006f2adc(lVar13);
            iVar6 = 0;
          }
          else {
            iVar6 = 0;
          }
        }
        lVar13 = *plVar14;
        plVar14[uVar18 + 1] = (long)plVar7;
LAB_006f2d78:
        *plVar14 = lVar13 + lVar15;
        plVar7 = plVar14;
      }
      else {
        if (iVar6 != 2) {
          *plVar14 = *plVar14 + lVar15;
          if (uVar17 < 2) {
            return plVar14;
          }
          do {
            plVar14 = (long *)*ppuVar19;
            lVar12 = lVar12 + -1;
            *plVar14 = *plVar14 + lVar15;
            ppuVar19 = ppuVar19 + -1;
          } while (1 < lVar12);
          return plVar14;
        }
        bVar2 = *(byte *)((long)plVar14 + 0xf);
        uVar18 = (ulong)*(byte *)((long)plVar14 + 0xe);
        if (bVar2 - uVar18 < 6) {
          if ((long)(int)local_d0 < (long)uVar17) {
            lVar13 = *plVar14;
            plVar8 = (long *)operator_new(0x40);
            *plVar8 = lVar13;
            *(undefined4 *)(plVar8 + 1) = 2;
            uVar21 = *(undefined8 *)((long)plVar14 + 0x34);
            uVar20 = *(undefined8 *)((long)plVar14 + 0x2c);
            uVar23 = *(undefined8 *)((long)plVar14 + 0x14);
            uVar22 = *(undefined8 *)((long)plVar14 + 0xc);
            uVar25 = *(undefined8 *)((long)plVar14 + 0x24);
            uVar24 = *(undefined8 *)((long)plVar14 + 0x1c);
            lVar13 = (ulong)bVar2 * 8 + uVar18 * -8;
            *(undefined4 *)((long)plVar8 + 0x3c) = *(undefined4 *)((long)plVar14 + 0x3c);
            *(undefined8 *)((long)plVar8 + 0x34) = uVar21;
            *(undefined8 *)((long)plVar8 + 0x2c) = uVar20;
            *(undefined8 *)((long)plVar8 + 0x24) = uVar25;
            *(undefined8 *)((long)plVar8 + 0x1c) = uVar24;
            *(undefined8 *)((long)plVar8 + 0x14) = uVar23;
            *(undefined8 *)((long)plVar8 + 0xc) = uVar22;
            if (lVar13 != 0) {
              plVar14 = plVar14 + uVar18 + 2;
              do {
                FUN_00d0f740(2,*plVar14 + 8);
                lVar13 = lVar13 + -8;
                plVar14 = plVar14 + 1;
              } while (lVar13 != 0);
            }
            iVar6 = 1;
            plVar14 = plVar8;
          }
          else {
            iVar6 = 0;
          }
          bVar2 = *(byte *)((long)plVar14 + 0xe);
          if (bVar2 != 0) {
            bVar3 = *(byte *)((long)plVar14 + 0xf);
            *(undefined1 *)((long)plVar14 + 0xe) = 0;
            lVar13 = (ulong)bVar3 - (ulong)bVar2;
            *(char *)((long)plVar14 + 0xf) = (char)lVar13;
            if (bVar3 != bVar2) {
              plVar8 = plVar14 + 2;
              do {
                lVar13 = lVar13 + -1;
                *plVar8 = plVar8[bVar2];
                plVar8 = plVar8 + 1;
              } while (lVar13 != 0);
            }
          }
          bVar2 = *(byte *)((long)plVar14 + 0xf);
          lVar13 = *plVar14;
          *(byte *)((long)plVar14 + 0xf) = bVar2 + 1;
          plVar14[(ulong)bVar2 + 2] = (long)plVar7;
          goto LAB_006f2d78;
        }
        plVar14 = (long *)operator_new(0x40);
        *(undefined4 *)(plVar14 + 1) = 2;
        if (*(char *)((long)plVar7 + 0xc) == '\x03') {
          cVar9 = *(char *)((long)plVar7 + 0xd) + '\x01';
        }
        else {
          cVar9 = '\0';
        }
        lVar13 = *plVar7;
        *(char *)((long)plVar14 + 0xd) = cVar9;
        *(undefined1 *)((long)plVar14 + 0xc) = 3;
        *plVar14 = lVar13;
        *(undefined2 *)((long)plVar14 + 0xe) = 0x100;
        iVar6 = 2;
        plVar14[2] = (long)plVar7;
        plVar7 = plVar14;
      }
      lVar12 = lVar12 + -1;
      ppuVar19 = ppuVar19 + -1;
      bVar1 = 1 < uVar17;
      uVar17 = uVar17 - 1;
    } while (bVar1);
  }
  plVar14 = plVar7;
  if (iVar6 != 0) {
    if (iVar6 == 1) {
      iVar6 = FUN_00d0f7a0(0xfffffffe,param_1 + 1);
      if (iVar6 == 2) {
        FUN_006f2adc(param_1);
      }
    }
    else {
      plVar14 = (long *)operator_new(0x40);
      cVar9 = *(char *)((long)param_1 + 0xd);
      lVar12 = *param_1;
      *(undefined4 *)(plVar14 + 1) = 2;
      lVar15 = *plVar7;
      bVar2 = cVar9 + 1;
      *(undefined1 *)((long)plVar14 + 0xc) = 3;
      *(byte *)((long)plVar14 + 0xd) = bVar2;
      *(undefined2 *)((long)plVar14 + 0xe) = 0x200;
      *plVar14 = lVar15 + lVar12;
      plVar14[2] = (long)param_1;
      plVar14[3] = (long)plVar7;
      if ((0xb < bVar2) && (plVar14 = (long *)FUN_006f4e90(), 0xb < *(byte *)((long)plVar14 + 0xd)))
      {
        FUN_00622058(3,"cord_rep_btree.cc",0x114,"Check %s failed: %s",
                     "tree->height() <= CordRepBtree::kMaxHeight","Max height exceeded");
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x6f31b0);
        (*pcVar5)();
      }
    }
  }
  return plVar14;
}


// ===== 006f31b0  FUN_006f31b0 =====

ulong * FUN_006f31b0(ulong *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  code *pcVar5;
  int iVar6;
  ulong *puVar7;
  char cVar8;
  int iVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong *unaff_x23;
  ulong *puVar16;
  long lVar17;
  ulong uVar18;
  ulong *puVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined1 auVar30 [16];
  undefined8 local_d0;
  undefined1 *apuStack_c8 [4];
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  uint uVar22;
  
  auVar30._8_8_ = param_3;
  auVar30._0_8_ = param_2;
  if (param_3 == 0) {
    return param_1;
  }
  bVar3 = *(byte *)((long)param_1 + 0xd);
  uVar23 = (ulong)bVar3;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  apuStack_c8[0] = &DAT_aaaaaaaaaaaaaaaa;
  apuStack_c8[2] = &DAT_aaaaaaaaaaaaaaaa;
  apuStack_c8[1] = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  apuStack_c8[3] = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  uVar21 = (uint)bVar3;
  uVar22 = (uint)bVar3;
  puVar16 = param_1;
  if (uVar21 == 0) {
    uVar13 = 0;
LAB_006f325c:
    iVar9 = (int)uVar13;
    iVar6 = iVar9;
    if ((int)puVar16[1] == 2) {
      iVar6 = iVar9 + 1;
    }
    local_d0 = CONCAT44(0xaaaaaaaa,iVar6);
    if (iVar9 < (int)uVar22) {
      puVar10 = &local_d0 + (uVar13 & 0xffffffff);
      lVar12 = uVar23 - (uVar13 & 0xffffffff);
      do {
        puVar10 = puVar10 + 1;
        *puVar10 = puVar16;
        lVar12 = lVar12 + -1;
        puVar16 = (ulong *)puVar16[(ulong)*(byte *)((long)puVar16 + 0xf) + 1];
      } while (lVar12 != 0);
    }
  }
  else {
    uVar13 = 0;
    do {
      if ((int)puVar16[1] != 2) goto LAB_006f325c;
      bVar4 = *(byte *)((long)puVar16 + 0xf);
      uVar11 = uVar13 + 1;
      apuStack_c8[uVar13] = (undefined1 *)puVar16;
      puVar16 = (ulong *)(puVar16 + 1)[bVar4];
      uVar13 = uVar11;
    } while (uVar23 != uVar11);
    if ((int)puVar16[1] == 2) {
      uVar21 = uVar22 + 1;
    }
    local_d0 = CONCAT44(0xaaaaaaaa,uVar21);
  }
  if ((ulong)*(byte *)((long)puVar16 + 0xf) - (ulong)*(byte *)((long)puVar16 + 0xe) < 6) {
    if ((int)uVar22 < (int)local_d0) {
      bVar2 = false;
      puVar19 = puVar16;
    }
    else {
      uVar13 = *puVar16;
      puVar19 = (ulong *)operator_new(0x40);
      *puVar19 = uVar13;
      *(undefined4 *)(puVar19 + 1) = 2;
      uVar25 = *(undefined8 *)((long)puVar16 + 0x34);
      uVar24 = *(undefined8 *)((long)puVar16 + 0x2c);
      uVar27 = *(undefined8 *)((long)puVar16 + 0x14);
      uVar26 = *(undefined8 *)((long)puVar16 + 0xc);
      uVar29 = *(undefined8 *)((long)puVar16 + 0x24);
      uVar28 = *(undefined8 *)((long)puVar16 + 0x1c);
      *(undefined4 *)((long)puVar19 + 0x3c) = *(undefined4 *)((long)puVar16 + 0x3c);
      *(undefined8 *)((long)puVar19 + 0x34) = uVar25;
      *(undefined8 *)((long)puVar19 + 0x2c) = uVar24;
      *(undefined8 *)((long)puVar19 + 0x24) = uVar29;
      *(undefined8 *)((long)puVar19 + 0x1c) = uVar28;
      *(undefined8 *)((long)puVar19 + 0x14) = uVar27;
      *(undefined8 *)((long)puVar19 + 0xc) = uVar26;
      lVar12 = (ulong)*(byte *)((long)puVar16 + 0xf) * 8 +
               (ulong)*(byte *)((long)puVar16 + 0xe) * -8;
      if (lVar12 != 0) {
        puVar16 = puVar16 + (ulong)*(byte *)((long)puVar16 + 0xe) + 2;
        do {
          FUN_00d0f740(2,*puVar16 + 8);
          lVar12 = lVar12 + -8;
          puVar16 = puVar16 + 1;
        } while (lVar12 != 0);
      }
      bVar2 = true;
    }
    auVar30 = FUN_006f3f38(puVar19,param_2,param_3,param_4);
    lVar12 = auVar30._8_8_;
    uVar21 = (uint)bVar3;
    if (lVar12 == 0) {
      *puVar19 = *puVar19 + param_3;
      if (uVar21 != 0) {
        puVar10 = &local_d0 + (uVar21 - 1);
        lVar12 = (ulong)(uVar21 - 1) + 1;
        puVar16 = puVar19;
        do {
          puVar19 = (ulong *)(&local_d0)[uVar23];
          if (!bVar2) {
            *puVar19 = *puVar19 + param_3;
            if (uVar23 < 2) {
              return puVar19;
            }
            do {
              puVar16 = (ulong *)*puVar10;
              lVar12 = lVar12 + -1;
              *puVar16 = *puVar16 + param_3;
              puVar10 = puVar10 + -1;
            } while (1 < lVar12);
            return puVar16;
          }
          uVar13 = (ulong)*(byte *)((long)puVar19 + 0xf);
          if ((long)(int)local_d0 < (long)uVar23) {
            uVar11 = *puVar19;
            puVar7 = (ulong *)operator_new(0x40);
            *puVar7 = uVar11;
            *(undefined4 *)(puVar7 + 1) = 2;
            uVar25 = *(undefined8 *)((long)puVar19 + 0x34);
            uVar24 = *(undefined8 *)((long)puVar19 + 0x2c);
            uVar27 = *(undefined8 *)((long)puVar19 + 0x14);
            uVar26 = *(undefined8 *)((long)puVar19 + 0xc);
            uVar29 = *(undefined8 *)((long)puVar19 + 0x24);
            uVar28 = *(undefined8 *)((long)puVar19 + 0x1c);
            *(undefined4 *)((long)puVar7 + 0x3c) = *(undefined4 *)((long)puVar19 + 0x3c);
            *(undefined8 *)((long)puVar7 + 0x34) = uVar25;
            *(undefined8 *)((long)puVar7 + 0x2c) = uVar24;
            *(undefined8 *)((long)puVar7 + 0x24) = uVar29;
            *(undefined8 *)((long)puVar7 + 0x1c) = uVar28;
            *(undefined8 *)((long)puVar7 + 0x14) = uVar27;
            *(undefined8 *)((long)puVar7 + 0xc) = uVar26;
            uVar11 = (ulong)*(byte *)((long)puVar19 + 0xe);
            if (uVar11 * 8 + (uVar13 - 1) * -8 != 0) {
              lVar17 = uVar13 * 8 + uVar11 * -8 + -8;
              puVar19 = puVar19 + uVar11 + 2;
              do {
                FUN_00d0f740(2,*puVar19 + 8);
                lVar17 = lVar17 + -8;
                puVar19 = puVar19 + 1;
              } while (lVar17 != 0);
            }
            bVar2 = true;
            puVar19 = puVar7;
          }
          else {
            uVar11 = puVar19[uVar13 + 1];
            iVar6 = FUN_00d0f7a0(0xfffffffe,uVar11 + 8);
            if (iVar6 == 2) {
              FUN_006f2adc(uVar11);
            }
            bVar2 = false;
          }
          uVar11 = *puVar19;
          lVar12 = lVar12 + -1;
          puVar10 = puVar10 + -1;
          puVar19[uVar13 + 1] = (ulong)puVar16;
          *puVar19 = uVar11 + param_3;
          bVar1 = 1 < uVar23;
          puVar16 = puVar19;
          uVar23 = uVar23 - 1;
        } while (bVar1);
      }
      if (!bVar2) {
        return puVar19;
      }
      iVar6 = FUN_00d0f7a0(0xfffffffe,param_1 + 1);
      if (iVar6 != 2) {
        return puVar19;
      }
      FUN_006f2adc(param_1);
      return puVar19;
    }
    param_3 = param_3 - lVar12;
    *puVar19 = *puVar19 + param_3;
    if (uVar21 != 0) {
      puVar10 = &local_d0 + (uVar21 - 1);
      lVar17 = (ulong)(uVar21 - 1) + 1;
      uVar13 = uVar23;
      puVar16 = puVar19;
      do {
        puVar19 = (ulong *)(&local_d0)[uVar13];
        if (!bVar2) {
          *puVar19 = *puVar19 + param_3;
          if (1 < uVar13) {
            do {
              puVar19 = (ulong *)*puVar10;
              lVar17 = lVar17 + -1;
              *puVar19 = *puVar19 + param_3;
              puVar10 = puVar10 + -1;
            } while (1 < lVar17);
          }
          goto LAB_006f35fc;
        }
        uVar11 = (ulong)*(byte *)((long)puVar19 + 0xf);
        if ((long)(int)local_d0 < (long)uVar13) {
          uVar14 = *puVar19;
          unaff_x23 = (ulong *)operator_new(0x40);
          *unaff_x23 = uVar14;
          *(undefined4 *)(unaff_x23 + 1) = 2;
          uVar25 = *(undefined8 *)((long)puVar19 + 0x34);
          uVar24 = *(undefined8 *)((long)puVar19 + 0x2c);
          uVar27 = *(undefined8 *)((long)puVar19 + 0x14);
          uVar26 = *(undefined8 *)((long)puVar19 + 0xc);
          uVar29 = *(undefined8 *)((long)puVar19 + 0x24);
          uVar28 = *(undefined8 *)((long)puVar19 + 0x1c);
          *(undefined4 *)((long)unaff_x23 + 0x3c) = *(undefined4 *)((long)puVar19 + 0x3c);
          *(undefined8 *)((long)unaff_x23 + 0x34) = uVar25;
          *(undefined8 *)((long)unaff_x23 + 0x2c) = uVar24;
          *(undefined8 *)((long)unaff_x23 + 0x24) = uVar29;
          *(undefined8 *)((long)unaff_x23 + 0x1c) = uVar28;
          *(undefined8 *)((long)unaff_x23 + 0x14) = uVar27;
          *(undefined8 *)((long)unaff_x23 + 0xc) = uVar26;
          uVar14 = (ulong)*(byte *)((long)puVar19 + 0xe);
          if (uVar14 * 8 + (uVar11 - 1) * -8 != 0) {
            lVar15 = uVar11 * 8 + uVar14 * -8 + -8;
            puVar19 = puVar19 + uVar14 + 2;
            do {
              FUN_00d0f740(2,*puVar19 + 8);
              lVar15 = lVar15 + -8;
              puVar19 = puVar19 + 1;
            } while (lVar15 != 0);
          }
          bVar2 = true;
          puVar19 = unaff_x23;
        }
        else {
          unaff_x23 = (ulong *)puVar19[uVar11 + 1];
          iVar6 = FUN_00d0f7a0(0xfffffffe,unaff_x23 + 1);
          if (iVar6 == 2) {
            FUN_006f2adc(unaff_x23);
          }
          bVar2 = false;
        }
        uVar14 = *puVar19;
        (&local_d0)[uVar13] = puVar19;
        puVar19[uVar11 + 1] = (ulong)puVar16;
        lVar17 = lVar17 + -1;
        puVar10 = puVar10 + -1;
        *puVar19 = uVar14 + param_3;
        bVar1 = 1 < uVar13;
        uVar13 = uVar13 - 1;
        puVar16 = puVar19;
      } while (bVar1);
    }
    if ((bVar2) && (iVar6 = FUN_00d0f7a0(0xfffffffe,param_1 + 1), iVar6 == 2)) {
      FUN_006f2adc(param_1);
    }
LAB_006f35fc:
    local_d0 = CONCAT44(local_d0._4_4_,bVar3 + 1);
    param_1 = puVar19;
    if (lVar12 == 0) {
      return unaff_x23;
    }
  }
  do {
    uVar11 = auVar30._8_8_;
    lVar12 = auVar30._0_8_;
    puVar16 = (ulong *)FUN_006f40ac(lVar12,uVar11,param_4);
    uVar13 = *puVar16;
    iVar6 = (int)uVar23;
    if (uVar11 - uVar13 == 0) {
      if (iVar6 != 0) {
        puVar10 = &local_d0 + (iVar6 - 1);
        lVar12 = (ulong)(iVar6 - 1) + 1;
        iVar6 = 2;
        uVar14 = uVar23;
        do {
          unaff_x23 = (ulong *)(&local_d0)[uVar14];
          if (iVar6 == 1) {
            uVar18 = (ulong)*(byte *)((long)unaff_x23 + 0xf);
            if ((long)(int)local_d0 < (long)uVar14) {
              uVar20 = *unaff_x23;
              puVar19 = (ulong *)operator_new(0x40);
              *puVar19 = uVar20;
              *(undefined4 *)(puVar19 + 1) = 2;
              uVar25 = *(undefined8 *)((long)unaff_x23 + 0x34);
              uVar24 = *(undefined8 *)((long)unaff_x23 + 0x2c);
              uVar27 = *(undefined8 *)((long)unaff_x23 + 0x14);
              uVar26 = *(undefined8 *)((long)unaff_x23 + 0xc);
              uVar29 = *(undefined8 *)((long)unaff_x23 + 0x24);
              uVar28 = *(undefined8 *)((long)unaff_x23 + 0x1c);
              *(undefined4 *)((long)puVar19 + 0x3c) = *(undefined4 *)((long)unaff_x23 + 0x3c);
              *(undefined8 *)((long)puVar19 + 0x34) = uVar25;
              *(undefined8 *)((long)puVar19 + 0x2c) = uVar24;
              *(undefined8 *)((long)puVar19 + 0x24) = uVar29;
              *(undefined8 *)((long)puVar19 + 0x1c) = uVar28;
              *(undefined8 *)((long)puVar19 + 0x14) = uVar27;
              *(undefined8 *)((long)puVar19 + 0xc) = uVar26;
              uVar20 = (ulong)*(byte *)((long)unaff_x23 + 0xe);
              if (uVar20 * 8 + (uVar18 - 1) * -8 != 0) {
                lVar17 = uVar18 * 8 + uVar20 * -8 + -8;
                puVar7 = unaff_x23 + uVar20 + 2;
                do {
                  FUN_00d0f740(2,*puVar7 + 8);
                  lVar17 = lVar17 + -8;
                  puVar7 = puVar7 + 1;
                } while (lVar17 != 0);
              }
              iVar6 = 1;
              unaff_x23 = puVar19;
            }
            else {
              uVar20 = unaff_x23[uVar18 + 1];
              iVar6 = FUN_00d0f7a0(0xfffffffe,uVar20 + 8);
              if (iVar6 == 2) {
                FUN_006f2adc(uVar20);
                iVar6 = 0;
              }
              else {
                iVar6 = 0;
              }
            }
            uVar20 = *unaff_x23;
            unaff_x23[uVar18 + 1] = (ulong)puVar16;
LAB_006f376c:
            *unaff_x23 = uVar20 + uVar11;
          }
          else {
            if (iVar6 != 2) {
              *unaff_x23 = *unaff_x23 + uVar11;
              if (1 < uVar14) {
                do {
                  unaff_x23 = (ulong *)*puVar10;
                  lVar12 = lVar12 + -1;
                  *unaff_x23 = *unaff_x23 + uVar11;
                  puVar10 = puVar10 + -1;
                } while (1 < lVar12);
              }
              goto LAB_006f36f8;
            }
            bVar3 = *(byte *)((long)unaff_x23 + 0xf);
            uVar18 = (ulong)*(byte *)((long)unaff_x23 + 0xe);
            if (bVar3 - uVar18 < 6) {
              if ((long)(int)local_d0 < (long)uVar14) {
                uVar20 = *unaff_x23;
                puVar19 = (ulong *)operator_new(0x40);
                *puVar19 = uVar20;
                *(undefined4 *)(puVar19 + 1) = 2;
                uVar25 = *(undefined8 *)((long)unaff_x23 + 0x34);
                uVar24 = *(undefined8 *)((long)unaff_x23 + 0x2c);
                uVar27 = *(undefined8 *)((long)unaff_x23 + 0x14);
                uVar26 = *(undefined8 *)((long)unaff_x23 + 0xc);
                uVar29 = *(undefined8 *)((long)unaff_x23 + 0x24);
                uVar28 = *(undefined8 *)((long)unaff_x23 + 0x1c);
                lVar17 = (ulong)bVar3 * 8 + uVar18 * -8;
                *(undefined4 *)((long)puVar19 + 0x3c) = *(undefined4 *)((long)unaff_x23 + 0x3c);
                *(undefined8 *)((long)puVar19 + 0x34) = uVar25;
                *(undefined8 *)((long)puVar19 + 0x2c) = uVar24;
                *(undefined8 *)((long)puVar19 + 0x24) = uVar29;
                *(undefined8 *)((long)puVar19 + 0x1c) = uVar28;
                *(undefined8 *)((long)puVar19 + 0x14) = uVar27;
                *(undefined8 *)((long)puVar19 + 0xc) = uVar26;
                if (lVar17 != 0) {
                  puVar7 = unaff_x23 + uVar18 + 2;
                  do {
                    FUN_00d0f740(2,*puVar7 + 8);
                    lVar17 = lVar17 + -8;
                    puVar7 = puVar7 + 1;
                  } while (lVar17 != 0);
                }
                iVar6 = 1;
                bVar3 = *(byte *)((long)puVar19 + 0xe);
                unaff_x23 = puVar19;
              }
              else {
                iVar6 = 0;
                bVar3 = *(byte *)((long)unaff_x23 + 0xe);
              }
              if (bVar3 != 0) {
                bVar4 = *(byte *)((long)unaff_x23 + 0xf);
                *(undefined1 *)((long)unaff_x23 + 0xe) = 0;
                lVar17 = (ulong)bVar4 - (ulong)bVar3;
                *(char *)((long)unaff_x23 + 0xf) = (char)lVar17;
                if (bVar4 != bVar3) {
                  puVar19 = unaff_x23 + 2;
                  do {
                    lVar17 = lVar17 + -1;
                    *puVar19 = puVar19[bVar3];
                    puVar19 = puVar19 + 1;
                  } while (lVar17 != 0);
                }
              }
              bVar3 = *(byte *)((long)unaff_x23 + 0xf);
              uVar20 = *unaff_x23;
              *(byte *)((long)unaff_x23 + 0xf) = bVar3 + 1;
              unaff_x23[(ulong)bVar3 + 2] = (ulong)puVar16;
              goto LAB_006f376c;
            }
            unaff_x23 = (ulong *)operator_new(0x40);
            *(undefined4 *)(unaff_x23 + 1) = 2;
            if (*(char *)((long)puVar16 + 0xc) == '\x03') {
              cVar8 = *(char *)((long)puVar16 + 0xd) + '\x01';
            }
            else {
              cVar8 = '\0';
            }
            uVar18 = *puVar16;
            *(char *)((long)unaff_x23 + 0xd) = cVar8;
            unaff_x23[2] = (ulong)puVar16;
            iVar6 = 2;
            *unaff_x23 = uVar18;
            *(undefined1 *)((long)unaff_x23 + 0xc) = 3;
            *(undefined2 *)((long)unaff_x23 + 0xe) = 0x100;
          }
          lVar12 = lVar12 + -1;
          puVar10 = puVar10 + -1;
          bVar2 = 1 < uVar14;
          puVar16 = unaff_x23;
          uVar14 = uVar14 - 1;
        } while (bVar2);
        if (iVar6 != 2) {
          if ((iVar6 == 1) && (iVar6 = FUN_00d0f7a0(0xfffffffe,param_1 + 1), iVar6 == 2)) {
            FUN_006f2adc(param_1);
          }
          goto LAB_006f36f8;
        }
      }
      unaff_x23 = (ulong *)operator_new(0x40);
      *(undefined4 *)(unaff_x23 + 1) = 2;
      *unaff_x23 = *puVar16 + *param_1;
      cVar8 = *(char *)((long)param_1 + 0xd);
      *(undefined1 *)((long)unaff_x23 + 0xc) = 3;
      *(undefined2 *)((long)unaff_x23 + 0xe) = 0x200;
      bVar3 = cVar8 + 1;
      unaff_x23[2] = (ulong)param_1;
      unaff_x23[3] = (ulong)puVar16;
      *(byte *)((long)unaff_x23 + 0xd) = bVar3;
      if ((0xb < bVar3) &&
         (unaff_x23 = (ulong *)FUN_006f4e90(unaff_x23), 0xb < *(byte *)((long)unaff_x23 + 0xd))) {
LAB_006f3eb4:
        FUN_00622058(3,"cord_rep_btree.cc",0x114,"Check %s failed: %s",
                     "tree->height() <= CordRepBtree::kMaxHeight","Max height exceeded");
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x6f3ee4);
        (*pcVar5)();
      }
    }
    else {
      if (uVar11 < uVar13) {
                    /* WARNING: Subroutine does not return */
        FUN_005f55a8("string_view::substr");
      }
      if (iVar6 == 0) {
LAB_006f3cd0:
        puVar19 = (ulong *)operator_new(0x40);
        *(undefined4 *)(puVar19 + 1) = 2;
        *puVar19 = *puVar16 + *param_1;
        cVar8 = *(char *)((long)param_1 + 0xd);
        *(undefined1 *)((long)puVar19 + 0xc) = 3;
        *(undefined2 *)((long)puVar19 + 0xe) = 0x200;
        bVar3 = cVar8 + 1;
        puVar19[2] = (ulong)param_1;
        puVar19[3] = (ulong)puVar16;
        *(byte *)((long)puVar19 + 0xd) = bVar3;
        puVar16 = puVar19;
        if ((0xb < bVar3) &&
           (puVar16 = (ulong *)FUN_006f4e90(puVar19), 0xb < *(byte *)((long)puVar16 + 0xd)))
        goto LAB_006f3eb4;
LAB_006f3d20:
        uVar23 = (ulong)*(byte *)((long)puVar16 + 0xd);
        if (*(byte *)((long)puVar16 + 0xd) != 0) goto LAB_006f3e30;
LAB_006f36e0:
        iVar6 = 1;
      }
      else {
        puVar10 = &local_d0 + (iVar6 - 1);
        lVar17 = (ulong)(iVar6 - 1) + 1;
        iVar6 = 2;
        puVar19 = puVar16;
        do {
          puVar16 = (ulong *)(&local_d0)[uVar23];
          if (iVar6 == 1) {
            uVar14 = (ulong)*(byte *)((long)puVar16 + 0xf);
            if ((long)(int)local_d0 < (long)uVar23) {
              uVar18 = *puVar16;
              puVar7 = (ulong *)operator_new(0x40);
              *puVar7 = uVar18;
              *(undefined4 *)(puVar7 + 1) = 2;
              uVar25 = *(undefined8 *)((long)puVar16 + 0x34);
              uVar24 = *(undefined8 *)((long)puVar16 + 0x2c);
              uVar27 = *(undefined8 *)((long)puVar16 + 0x14);
              uVar26 = *(undefined8 *)((long)puVar16 + 0xc);
              uVar29 = *(undefined8 *)((long)puVar16 + 0x24);
              uVar28 = *(undefined8 *)((long)puVar16 + 0x1c);
              *(undefined4 *)((long)puVar7 + 0x3c) = *(undefined4 *)((long)puVar16 + 0x3c);
              *(undefined8 *)((long)puVar7 + 0x34) = uVar25;
              *(undefined8 *)((long)puVar7 + 0x2c) = uVar24;
              *(undefined8 *)((long)puVar7 + 0x24) = uVar29;
              *(undefined8 *)((long)puVar7 + 0x1c) = uVar28;
              *(undefined8 *)((long)puVar7 + 0x14) = uVar27;
              *(undefined8 *)((long)puVar7 + 0xc) = uVar26;
              uVar18 = (ulong)*(byte *)((long)puVar16 + 0xe);
              if (uVar18 * 8 + (uVar14 - 1) * -8 != 0) {
                lVar15 = uVar14 * 8 + uVar18 * -8 + -8;
                puVar16 = puVar16 + uVar18 + 2;
                do {
                  FUN_00d0f740(2,*puVar16 + 8);
                  lVar15 = lVar15 + -8;
                  puVar16 = puVar16 + 1;
                } while (lVar15 != 0);
              }
              iVar6 = 1;
              puVar16 = puVar7;
            }
            else {
              uVar18 = puVar16[uVar14 + 1];
              iVar6 = FUN_00d0f7a0(0xfffffffe,uVar18 + 8);
              if (iVar6 == 2) {
                FUN_006f2adc(uVar18);
                iVar6 = 0;
              }
              else {
                iVar6 = 0;
              }
            }
            uVar18 = *puVar16;
            puVar16[uVar14 + 1] = (ulong)puVar19;
LAB_006f3a00:
            *puVar16 = uVar18 + uVar13;
          }
          else {
            if (iVar6 != 2) {
              *puVar16 = *puVar16 + uVar13;
              if (1 < uVar23) {
                do {
                  puVar16 = (ulong *)*puVar10;
                  lVar17 = lVar17 + -1;
                  *puVar16 = *puVar16 + uVar13;
                  puVar10 = puVar10 + -1;
                } while (1 < lVar17);
              }
              goto LAB_006f3d20;
            }
            bVar3 = *(byte *)((long)puVar16 + 0xf);
            uVar14 = (ulong)*(byte *)((long)puVar16 + 0xe);
            if (bVar3 - uVar14 < 6) {
              if ((long)(int)local_d0 < (long)uVar23) {
                uVar18 = *puVar16;
                puVar7 = (ulong *)operator_new(0x40);
                *puVar7 = uVar18;
                *(undefined4 *)(puVar7 + 1) = 2;
                uVar25 = *(undefined8 *)((long)puVar16 + 0x34);
                uVar24 = *(undefined8 *)((long)puVar16 + 0x2c);
                uVar27 = *(undefined8 *)((long)puVar16 + 0x14);
                uVar26 = *(undefined8 *)((long)puVar16 + 0xc);
                uVar29 = *(undefined8 *)((long)puVar16 + 0x24);
                uVar28 = *(undefined8 *)((long)puVar16 + 0x1c);
                lVar15 = (ulong)bVar3 * 8 + uVar14 * -8;
                *(undefined4 *)((long)puVar7 + 0x3c) = *(undefined4 *)((long)puVar16 + 0x3c);
                *(undefined8 *)((long)puVar7 + 0x34) = uVar25;
                *(undefined8 *)((long)puVar7 + 0x2c) = uVar24;
                *(undefined8 *)((long)puVar7 + 0x24) = uVar29;
                *(undefined8 *)((long)puVar7 + 0x1c) = uVar28;
                *(undefined8 *)((long)puVar7 + 0x14) = uVar27;
                *(undefined8 *)((long)puVar7 + 0xc) = uVar26;
                if (lVar15 != 0) {
                  puVar16 = puVar16 + uVar14 + 2;
                  do {
                    FUN_00d0f740(2,*puVar16 + 8);
                    lVar15 = lVar15 + -8;
                    puVar16 = puVar16 + 1;
                  } while (lVar15 != 0);
                }
                iVar6 = 1;
                bVar3 = *(byte *)((long)puVar7 + 0xe);
                puVar16 = puVar7;
              }
              else {
                iVar6 = 0;
                bVar3 = *(byte *)((long)puVar16 + 0xe);
              }
              if (bVar3 != 0) {
                bVar4 = *(byte *)((long)puVar16 + 0xf);
                *(undefined1 *)((long)puVar16 + 0xe) = 0;
                lVar15 = (ulong)bVar4 - (ulong)bVar3;
                *(char *)((long)puVar16 + 0xf) = (char)lVar15;
                if (bVar4 != bVar3) {
                  puVar7 = puVar16 + 2;
                  do {
                    lVar15 = lVar15 + -1;
                    *puVar7 = puVar7[bVar3];
                    puVar7 = puVar7 + 1;
                  } while (lVar15 != 0);
                }
              }
              bVar3 = *(byte *)((long)puVar16 + 0xf);
              uVar18 = *puVar16;
              *(byte *)((long)puVar16 + 0xf) = bVar3 + 1;
              puVar16[(ulong)bVar3 + 2] = (ulong)puVar19;
              goto LAB_006f3a00;
            }
            puVar16 = (ulong *)operator_new(0x40);
            *(undefined4 *)(puVar16 + 1) = 2;
            if (*(char *)((long)puVar19 + 0xc) == '\x03') {
              cVar8 = *(char *)((long)puVar19 + 0xd) + '\x01';
            }
            else {
              cVar8 = '\0';
            }
            uVar14 = *puVar19;
            *(char *)((long)puVar16 + 0xd) = cVar8;
            puVar16[2] = (ulong)puVar19;
            iVar6 = 2;
            *puVar16 = uVar14;
            *(undefined1 *)((long)puVar16 + 0xc) = 3;
            *(undefined2 *)((long)puVar16 + 0xe) = 0x100;
          }
          lVar17 = lVar17 + -1;
          puVar10 = puVar10 + -1;
          bVar2 = 1 < uVar23;
          uVar23 = uVar23 - 1;
          puVar19 = puVar16;
        } while (bVar2);
        if (iVar6 != 0) {
          if (iVar6 != 1) goto LAB_006f3cd0;
          iVar6 = FUN_00d0f7a0(0xfffffffe,param_1 + 1);
          if (iVar6 == 2) {
            FUN_006f2adc(param_1);
          }
        }
        uVar23 = (ulong)*(byte *)((long)puVar16 + 0xd);
        if (*(byte *)((long)puVar16 + 0xd) == 0) goto LAB_006f36e0;
LAB_006f3e30:
        uVar14 = uVar23;
        puVar10 = (undefined8 *)((ulong)&local_d0 | 8);
        puVar19 = puVar16;
        do {
          *puVar10 = puVar19;
          uVar14 = uVar14 - 1;
          puVar19 = (ulong *)puVar19[(ulong)*(byte *)((long)puVar19 + 0xf) + 1];
          puVar10 = puVar10 + 1;
        } while (uVar14 != 0);
        iVar6 = (int)uVar23 + 1;
      }
      local_d0 = CONCAT44(local_d0._4_4_,iVar6);
      auVar30._8_8_ = uVar11 - uVar13;
      auVar30._0_8_ = uVar13 + lVar12;
      param_1 = puVar16;
    }
LAB_006f36f8:
    if (uVar11 == uVar13) {
      return unaff_x23;
    }
  } while( true );
}


// ===== 006f3f38  FUN_006f3f38 =====

undefined1  [16] FUN_006f3f38(long param_1,void *param_2,ulong param_3,long param_4)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  size_t __n;
  byte bVar4;
  byte bVar5;
  size_t *psVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  undefined8 *puVar10;
  ulong uVar11;
  uint uVar12;
  undefined1 auVar13 [16];
  
  bVar4 = *(byte *)(param_1 + 0xe);
  if (bVar4 != 0) {
    bVar5 = *(byte *)(param_1 + 0xf);
    *(undefined1 *)(param_1 + 0xe) = 0;
    lVar8 = (ulong)bVar5 - (ulong)bVar4;
    *(char *)(param_1 + 0xf) = (char)lVar8;
    if (bVar5 != bVar4) {
      puVar10 = (undefined8 *)(param_1 + 0x10);
      do {
        lVar8 = lVar8 + -1;
        *puVar10 = puVar10[bVar4];
        puVar10 = puVar10 + 1;
      } while (lVar8 != 0);
    }
  }
  do {
    uVar11 = param_3 + param_4;
    uVar7 = uVar11;
    if (0xff2 < uVar11) {
      uVar7 = 0xff3;
    }
    uVar2 = 0x20;
    if (0x13 < uVar11) {
      uVar2 = uVar7 + 0xd;
    }
    lVar8 = 8;
    if (0x200 < uVar2) {
      lVar8 = 0x40;
    }
    uVar11 = 0xfffffffffffffff8;
    if (0x200 < uVar2) {
      uVar11 = 0xffffffffffffffc0;
    }
    uVar11 = (uVar2 + lVar8) - 1 & uVar11;
    psVar6 = (size_t *)operator_new(uVar11);
    lVar8 = 3;
    if (0x200 < uVar11) {
      lVar8 = 6;
    }
    lVar3 = 2;
    if (0x200 < uVar11) {
      lVar3 = 0x3a;
    }
    bVar4 = *(byte *)(param_1 + 0xf);
    uVar11 = (uVar11 >> lVar8) + lVar3;
    uVar12 = 3;
    if (0x42 < uVar11) {
      uVar12 = 6;
    }
    iVar9 = -0x1d;
    if (0x42 < uVar11) {
      iVar9 = -0xe8d;
    }
    cVar1 = bVar4 + 1;
    uVar7 = (ulong)(((int)uVar11 << (ulong)uVar12) + iVar9);
    *(char *)(param_1 + 0xf) = cVar1;
    __n = param_3;
    if (uVar7 <= param_3) {
      __n = uVar7;
    }
    *psVar6 = __n;
    psVar6[1] = 0;
    *(char *)((long)psVar6 + 0xc) = (char)uVar11;
    *(undefined4 *)(psVar6 + 1) = 2;
    *(size_t **)(param_1 + 0x10 + (ulong)bVar4 * 8) = psVar6;
    memcpy((void *)((long)psVar6 + 0xd),param_2,__n);
    param_2 = (void *)((long)param_2 + __n);
    param_3 = param_3 - __n;
  } while ((cVar1 != '\x06') && (param_3 != 0));
  auVar13._8_8_ = param_3;
  auVar13._0_8_ = param_2;
  return auVar13;
}


// ===== 006f40ac  FUN_006f40ac =====

void FUN_006f40ac(void *param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  size_t __n;
  bool bVar4;
  long *plVar5;
  size_t *psVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  
  plVar5 = (long *)operator_new(0x40);
  *(undefined1 *)((long)plVar5 + 0xe) = 0;
  *(undefined4 *)(plVar5 + 1) = 2;
  *(undefined2 *)((long)plVar5 + 0xc) = 3;
  if (param_2 == 0) {
    lVar10 = 0;
    lVar12 = 0;
  }
  else {
    lVar12 = 0;
    lVar9 = 0;
    do {
      uVar11 = param_2 + param_3;
      uVar7 = uVar11;
      if (0xff2 < uVar11) {
        uVar7 = 0xff3;
      }
      uVar1 = 0x20;
      if (0x13 < uVar11) {
        uVar1 = uVar7 + 0xd;
      }
      lVar10 = 8;
      if (0x200 < uVar1) {
        lVar10 = 0x40;
      }
      uVar11 = 0xfffffffffffffff8;
      if (0x200 < uVar1) {
        uVar11 = 0xffffffffffffffc0;
      }
      uVar11 = (uVar1 + lVar10) - 1 & uVar11;
      psVar6 = (size_t *)operator_new(uVar11);
      lVar2 = 3;
      if (0x200 < uVar11) {
        lVar2 = 6;
      }
      lVar3 = 2;
      if (0x200 < uVar11) {
        lVar3 = 0x3a;
      }
      lVar10 = lVar9 + 1;
      uVar11 = (uVar11 >> lVar2) + lVar3;
      uVar13 = 3;
      if (0x42 < uVar11) {
        uVar13 = 6;
      }
      iVar8 = -0x1d;
      if (0x42 < uVar11) {
        iVar8 = -0xe8d;
      }
      uVar7 = (ulong)(((int)uVar11 << (ulong)uVar13) + iVar8);
      __n = param_2;
      if (uVar7 <= param_2) {
        __n = uVar7;
      }
      *psVar6 = __n;
      psVar6[1] = 0;
      lVar12 = __n + lVar12;
      *(char *)((long)psVar6 + 0xc) = (char)uVar11;
      *(undefined4 *)(psVar6 + 1) = 2;
      plVar5[lVar9 + 2] = (long)psVar6;
      memcpy((void *)((long)psVar6 + 0xd),param_1,__n);
      param_2 = param_2 - __n;
      param_1 = (void *)((long)param_1 + __n);
      bVar4 = lVar9 != 5;
      lVar9 = lVar10;
    } while (param_2 != 0 && bVar4);
  }
  *plVar5 = lVar12;
  *(char *)((long)plVar5 + 0xf) = (char)lVar10;
  return;
}


// ===== 006f4220  FUN_006f4220 =====

void FUN_006f4220(void *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  void *pvVar6;
  long *plVar7;
  undefined8 *puVar8;
  
  uVar3 = (ulong)*(byte *)((long)param_1 + 0xe);
  lVar5 = (ulong)*(byte *)((long)param_1 + 0xf) * 8;
  lVar4 = uVar3 * 8;
  puVar1 = (undefined8 *)((long)param_1 + lVar5 + 0x10);
  if (*(char *)((long)param_1 + 0xd) == '\x01') {
    if (lVar5 + uVar3 * -8 != 0) {
      puVar8 = (undefined8 *)((long)param_1 + lVar4 + 0x10);
      do {
        pvVar6 = (void *)*puVar8;
        if (((int)*(undefined8 *)((long)pvVar6 + 8) == 2) ||
           (iVar2 = FUN_00d0f7a0(0xfffffffe,(long)pvVar6 + 8), iVar2 == 2)) {
          lVar5 = (ulong)*(byte *)((long)pvVar6 + 0xf) * 8 +
                  (ulong)*(byte *)((long)pvVar6 + 0xe) * -8;
          if (lVar5 != 0) {
            plVar7 = (long *)((long)pvVar6 + (ulong)*(byte *)((long)pvVar6 + 0xe) * 8 + 0x10);
            do {
              lVar4 = *plVar7;
              if (((int)*(undefined8 *)(lVar4 + 8) == 2) ||
                 (iVar2 = FUN_00d0f7a0(0xfffffffe,lVar4 + 8), iVar2 == 2)) {
                FUN_006f4474(lVar4);
              }
              lVar5 = lVar5 + -8;
              plVar7 = plVar7 + 1;
            } while (lVar5 != 0);
          }
          if (pvVar6 != (void *)0x0) {
            operator_delete(pvVar6);
          }
        }
        puVar8 = puVar8 + 1;
      } while (puVar8 != puVar1);
    }
  }
  else if (*(char *)((long)param_1 + 0xd) == '\0') {
    lVar5 = lVar5 + uVar3 * -8;
    if (lVar5 != 0) {
      plVar7 = (long *)((long)param_1 + lVar4 + 0x10);
      do {
        lVar4 = *plVar7;
        if (((int)*(undefined8 *)(lVar4 + 8) == 2) ||
           (iVar2 = FUN_00d0f7a0(0xfffffffe,lVar4 + 8), iVar2 == 2)) {
          FUN_006f4474(lVar4);
        }
        lVar5 = lVar5 + -8;
        plVar7 = plVar7 + 1;
      } while (lVar5 != 0);
    }
  }
  else if (lVar5 + uVar3 * -8 != 0) {
    puVar8 = (undefined8 *)((long)param_1 + lVar4 + 0x10);
    do {
      pvVar6 = (void *)*puVar8;
      if (((int)*(undefined8 *)((long)pvVar6 + 8) == 2) ||
         (iVar2 = FUN_00d0f7a0(0xfffffffe,(long)pvVar6 + 8), iVar2 == 2)) {
        lVar5 = (ulong)*(byte *)((long)pvVar6 + 0xf) * 8 + (ulong)*(byte *)((long)pvVar6 + 0xe) * -8
        ;
        if (lVar5 != 0) {
          plVar7 = (long *)((long)pvVar6 + (ulong)*(byte *)((long)pvVar6 + 0xe) * 8 + 0x10);
          do {
            lVar4 = *plVar7;
            if (((int)*(undefined8 *)(lVar4 + 8) == 2) ||
               (iVar2 = FUN_00d0f7a0(0xfffffffe,lVar4 + 8), iVar2 == 2)) {
              FUN_006f4220(lVar4);
            }
            lVar5 = lVar5 + -8;
            plVar7 = plVar7 + 1;
          } while (lVar5 != 0);
        }
        if (pvVar6 != (void *)0x0) {
          operator_delete(pvVar6);
        }
      }
      puVar8 = puVar8 + 1;
    } while (puVar8 != puVar1);
  }
  if (param_1 == (void *)0x0) {
    return;
  }
  operator_delete(param_1);
  return;
}


// ===== 006f4474  FUN_006f4474 =====

void FUN_006f4474(void *param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (*(byte *)((long)param_1 + 0xc) < 6) {
    UNRECOVERED_JUMPTABLE = *(code **)((long)param_1 + 0x18);
    if (*(byte *)((long)param_1 + 0xc) == 5) {
                    /* WARNING: Could not recover jumptable at 0x006f44f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1);
      return;
    }
    if (((int)*(undefined8 *)(UNRECOVERED_JUMPTABLE + 8) == 2) ||
       (iVar1 = FUN_00d0f7a0(0xfffffffe,UNRECOVERED_JUMPTABLE + 8), iVar1 == 2)) {
      if ((byte)UNRECOVERED_JUMPTABLE[0xc] < 6) {
        (**(code **)(UNRECOVERED_JUMPTABLE + 0x18))(UNRECOVERED_JUMPTABLE);
      }
      else {
        operator_delete(UNRECOVERED_JUMPTABLE);
      }
    }
    if (param_1 == (void *)0x0) {
      return;
    }
  }
  operator_delete(param_1);
  return;
}


// ===== 006f45b8  FUN_006f45b8 =====

undefined1  [16] FUN_006f45b8(long *param_1,ulong param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  byte bVar5;
  code *pcVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  undefined1 auVar24 [16];
  
  cVar4 = *(char *)((long)param_1 + 0xd);
  if (cVar4 == '\0') {
    plVar16 = (long *)&DAT_aaaaaaaaaaaaaaaa;
    plVar17 = (long *)&DAT_aaaaaaaaaaaaaaaa;
    plVar18 = (long *)&DAT_aaaaaaaaaaaaaaaa;
    plVar19 = (long *)&DAT_aaaaaaaaaaaaaaaa;
    plVar20 = (long *)&DAT_aaaaaaaaaaaaaaaa;
    plVar21 = (long *)&DAT_aaaaaaaaaaaaaaaa;
    plVar22 = (long *)&DAT_aaaaaaaaaaaaaaaa;
    plVar23 = (long *)&DAT_aaaaaaaaaaaaaaaa;
    plVar8 = (long *)&DAT_aaaaaaaaaaaaaaaa;
    plVar9 = (long *)&DAT_aaaaaaaaaaaaaaaa;
    plVar10 = (long *)&DAT_aaaaaaaaaaaaaaaa;
    plVar11 = (long *)&DAT_aaaaaaaaaaaaaaaa;
    plVar15 = param_1;
LAB_006f4654:
    plVar15 = (long *)plVar15[(ulong)*(byte *)((long)plVar15 + 0xf) + 1];
    if (((int)plVar15[1] == 2) && (bVar5 = *(byte *)((long)plVar15 + 0xc), 5 < bVar5)) {
      uVar14 = 6;
      if (0xba < bVar5) {
        uVar14 = 0xc;
      }
      iVar1 = -0xe8d;
      if (0xba < bVar5) {
        iVar1 = -0xb800d;
      }
      uVar12 = (uint)bVar5;
      uVar2 = 3;
      if (0x42 < uVar12) {
        uVar2 = uVar14;
      }
      iVar3 = -0x1d;
      if (0x42 < uVar12) {
        iVar3 = iVar1;
      }
      lVar13 = *plVar15;
      uVar7 = (int)((uVar12 << (ulong)uVar2) + iVar3) - lVar13;
      if (uVar7 != 0) {
        if (param_2 <= uVar7) {
          uVar7 = param_2;
        }
        *plVar15 = uVar7 + lVar13;
        lVar13 = (long)plVar15 + lVar13 + 0xd;
        *param_1 = *param_1 + uVar7;
        if (((((cVar4 != '\0') && (*plVar16 = *plVar16 + uVar7, cVar4 != '\x01')) &&
             (*plVar17 = *plVar17 + uVar7, cVar4 != '\x02')) &&
            ((((*plVar18 = *plVar18 + uVar7, cVar4 != '\x03' &&
               (*plVar19 = *plVar19 + uVar7, cVar4 != '\x04')) &&
              ((*plVar20 = *plVar20 + uVar7, cVar4 != '\x05' &&
               ((*plVar21 = *plVar21 + uVar7, cVar4 != '\x06' &&
                (*plVar22 = *plVar22 + uVar7, cVar4 != '\a')))))) &&
             (*plVar23 = *plVar23 + uVar7, cVar4 != '\b')))) &&
           (((*plVar8 = *plVar8 + uVar7, cVar4 != '\t' && (*plVar9 = *plVar9 + uVar7, cVar4 != '\n')
             ) && (*plVar10 = *plVar10 + uVar7, cVar4 != '\v')))) {
          *plVar11 = *plVar11 + uVar7;
        }
        goto LAB_006f4a90;
      }
    }
  }
  else {
    plVar16 = (long *)param_1[(ulong)*(byte *)((long)param_1 + 0xf) + 1];
    if ((int)plVar16[1] == 2) {
      if (cVar4 == '\x01') {
        plVar17 = (long *)&DAT_aaaaaaaaaaaaaaaa;
        plVar18 = (long *)&DAT_aaaaaaaaaaaaaaaa;
        plVar19 = (long *)&DAT_aaaaaaaaaaaaaaaa;
        plVar20 = (long *)&DAT_aaaaaaaaaaaaaaaa;
        plVar21 = (long *)&DAT_aaaaaaaaaaaaaaaa;
        plVar22 = (long *)&DAT_aaaaaaaaaaaaaaaa;
        plVar23 = (long *)&DAT_aaaaaaaaaaaaaaaa;
        plVar8 = (long *)&DAT_aaaaaaaaaaaaaaaa;
        plVar9 = (long *)&DAT_aaaaaaaaaaaaaaaa;
        plVar10 = (long *)&DAT_aaaaaaaaaaaaaaaa;
        plVar11 = (long *)&DAT_aaaaaaaaaaaaaaaa;
        plVar15 = plVar16;
        goto LAB_006f4654;
      }
      plVar17 = (long *)(plVar16 + 1)[*(byte *)((long)plVar16 + 0xf)];
      if ((int)plVar17[1] == 2) {
        if (cVar4 == '\x02') {
          plVar18 = (long *)&DAT_aaaaaaaaaaaaaaaa;
          plVar19 = (long *)&DAT_aaaaaaaaaaaaaaaa;
          plVar20 = (long *)&DAT_aaaaaaaaaaaaaaaa;
          plVar21 = (long *)&DAT_aaaaaaaaaaaaaaaa;
          plVar22 = (long *)&DAT_aaaaaaaaaaaaaaaa;
          plVar23 = (long *)&DAT_aaaaaaaaaaaaaaaa;
          plVar8 = (long *)&DAT_aaaaaaaaaaaaaaaa;
          plVar9 = (long *)&DAT_aaaaaaaaaaaaaaaa;
          plVar10 = (long *)&DAT_aaaaaaaaaaaaaaaa;
          plVar11 = (long *)&DAT_aaaaaaaaaaaaaaaa;
          plVar15 = plVar17;
          goto LAB_006f4654;
        }
        plVar18 = (long *)(plVar17 + 1)[*(byte *)((long)plVar17 + 0xf)];
        if ((int)plVar18[1] == 2) {
          if (cVar4 == '\x03') {
            plVar19 = (long *)&DAT_aaaaaaaaaaaaaaaa;
            plVar20 = (long *)&DAT_aaaaaaaaaaaaaaaa;
            plVar21 = (long *)&DAT_aaaaaaaaaaaaaaaa;
            plVar22 = (long *)&DAT_aaaaaaaaaaaaaaaa;
            plVar23 = (long *)&DAT_aaaaaaaaaaaaaaaa;
            plVar8 = (long *)&DAT_aaaaaaaaaaaaaaaa;
            plVar9 = (long *)&DAT_aaaaaaaaaaaaaaaa;
            plVar10 = (long *)&DAT_aaaaaaaaaaaaaaaa;
            plVar11 = (long *)&DAT_aaaaaaaaaaaaaaaa;
            plVar15 = plVar18;
            goto LAB_006f4654;
          }
          plVar19 = (long *)(plVar18 + 1)[*(byte *)((long)plVar18 + 0xf)];
          if ((int)plVar19[1] == 2) {
            if (cVar4 == '\x04') {
              plVar20 = (long *)&DAT_aaaaaaaaaaaaaaaa;
              plVar21 = (long *)&DAT_aaaaaaaaaaaaaaaa;
              plVar22 = (long *)&DAT_aaaaaaaaaaaaaaaa;
              plVar23 = (long *)&DAT_aaaaaaaaaaaaaaaa;
              plVar8 = (long *)&DAT_aaaaaaaaaaaaaaaa;
              plVar9 = (long *)&DAT_aaaaaaaaaaaaaaaa;
              plVar10 = (long *)&DAT_aaaaaaaaaaaaaaaa;
              plVar11 = (long *)&DAT_aaaaaaaaaaaaaaaa;
              plVar15 = plVar19;
              goto LAB_006f4654;
            }
            plVar20 = (long *)(plVar19 + 1)[*(byte *)((long)plVar19 + 0xf)];
            if ((int)plVar20[1] == 2) {
              if (cVar4 == '\x05') {
                plVar21 = (long *)&DAT_aaaaaaaaaaaaaaaa;
                plVar22 = (long *)&DAT_aaaaaaaaaaaaaaaa;
                plVar23 = (long *)&DAT_aaaaaaaaaaaaaaaa;
                plVar8 = (long *)&DAT_aaaaaaaaaaaaaaaa;
                plVar9 = (long *)&DAT_aaaaaaaaaaaaaaaa;
                plVar10 = (long *)&DAT_aaaaaaaaaaaaaaaa;
                plVar11 = (long *)&DAT_aaaaaaaaaaaaaaaa;
                plVar15 = plVar20;
                goto LAB_006f4654;
              }
              plVar21 = (long *)(plVar20 + 1)[*(byte *)((long)plVar20 + 0xf)];
              if ((int)plVar21[1] == 2) {
                if (cVar4 == '\x06') {
                  plVar22 = (long *)&DAT_aaaaaaaaaaaaaaaa;
                  plVar23 = (long *)&DAT_aaaaaaaaaaaaaaaa;
                  plVar8 = (long *)&DAT_aaaaaaaaaaaaaaaa;
                  plVar9 = (long *)&DAT_aaaaaaaaaaaaaaaa;
                  plVar10 = (long *)&DAT_aaaaaaaaaaaaaaaa;
                  plVar11 = (long *)&DAT_aaaaaaaaaaaaaaaa;
                  plVar15 = plVar21;
                  goto LAB_006f4654;
                }
                plVar22 = (long *)(plVar21 + 1)[*(byte *)((long)plVar21 + 0xf)];
                if ((int)plVar22[1] == 2) {
                  if (cVar4 == '\a') {
                    plVar23 = (long *)&DAT_aaaaaaaaaaaaaaaa;
                    plVar8 = (long *)&DAT_aaaaaaaaaaaaaaaa;
                    plVar9 = (long *)&DAT_aaaaaaaaaaaaaaaa;
                    plVar10 = (long *)&DAT_aaaaaaaaaaaaaaaa;
                    plVar11 = (long *)&DAT_aaaaaaaaaaaaaaaa;
                    plVar15 = plVar22;
                    goto LAB_006f4654;
                  }
                  plVar23 = (long *)(plVar22 + 1)[*(byte *)((long)plVar22 + 0xf)];
                  if ((int)plVar23[1] == 2) {
                    if (cVar4 == '\b') {
                      plVar8 = (long *)&DAT_aaaaaaaaaaaaaaaa;
                      plVar9 = (long *)&DAT_aaaaaaaaaaaaaaaa;
                      plVar10 = (long *)&DAT_aaaaaaaaaaaaaaaa;
                      plVar11 = (long *)&DAT_aaaaaaaaaaaaaaaa;
                      plVar15 = plVar23;
                      goto LAB_006f4654;
                    }
                    plVar8 = (long *)(plVar23 + 1)[*(byte *)((long)plVar23 + 0xf)];
                    if ((int)plVar8[1] == 2) {
                      if (cVar4 == '\t') {
                        plVar9 = (long *)&DAT_aaaaaaaaaaaaaaaa;
                        plVar10 = (long *)&DAT_aaaaaaaaaaaaaaaa;
                        plVar11 = (long *)&DAT_aaaaaaaaaaaaaaaa;
                        plVar15 = plVar8;
                        goto LAB_006f4654;
                      }
                      plVar9 = (long *)(plVar8 + 1)[*(byte *)((long)plVar8 + 0xf)];
                      if ((int)plVar9[1] == 2) {
                        if (cVar4 == '\n') {
                          plVar10 = (long *)&DAT_aaaaaaaaaaaaaaaa;
                          plVar11 = (long *)&DAT_aaaaaaaaaaaaaaaa;
                          plVar15 = plVar9;
                          goto LAB_006f4654;
                        }
                        plVar10 = (long *)(plVar9 + 1)[*(byte *)((long)plVar9 + 0xf)];
                        if ((int)plVar10[1] == 2) {
                          if (cVar4 == '\v') {
                            plVar11 = (long *)&DAT_aaaaaaaaaaaaaaaa;
                            plVar15 = plVar10;
                            goto LAB_006f4654;
                          }
                          plVar11 = (long *)(plVar10 + 1)[*(byte *)((long)plVar10 + 0xf)];
                          if ((int)plVar11[1] == 2) {
                            plVar15 = plVar11;
                            if (cVar4 == '\f') goto LAB_006f4654;
                            if ((int)*(undefined8 *)
                                      ((plVar11 + 1)[*(byte *)((long)plVar11 + 0xf)] + 8) == 2) {
                    /* WARNING: Does not return */
                              pcVar6 = (code *)SoftwareBreakpoint(0x5512,0x6f4aa0);
                              (*pcVar6)();
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
  uVar7 = 0;
  lVar13 = 0;
LAB_006f4a90:
  auVar24._8_8_ = uVar7;
  auVar24._0_8_ = lVar13;
  return auVar24;
}


// ===== 006f4aa0  FUN_006f4aa0 =====

long FUN_006f4aa0(long param_1)

{
  long *local_20;
  long local_18;
  
  if (*(char *)(param_1 + 0xc) != '\x03') {
    local_20 = &local_18;
    local_18 = 0;
    FUN_006f50cc(param_1,&local_20,FUN_006f4f78);
    param_1 = local_18;
  }
  return param_1;
}


// ===== 006f4aec  thunk_FUN_006f31b0 =====

void thunk_FUN_006f31b0(void)

{
  FUN_006f31b0();
  return;
}


// ===== 006f4af4  FUN_006f4af4 =====

void FUN_006f4af4(undefined8 *param_1,void *param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  char cVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  
  if ((param_3 & 1) == 0) {
    bVar3 = false;
  }
  else {
    bVar3 = (int)*(undefined8 *)((long)param_2 + 8) == 2;
  }
  uVar7 = (ulong)*(byte *)((long)param_2 + 0xe);
  lVar12 = (ulong)*(byte *)((long)param_2 + 0xf) * 8;
  if (*(char *)((long)param_2 + 0xd) == '\0') {
    if (lVar12 + uVar7 * -8 != 0) {
      puVar15 = (undefined8 *)((long)param_2 + uVar7 * 8 + 0x10);
      do {
        plVar18 = (long *)*puVar15;
        if (bVar3 == false) {
          FUN_00d0f740(2,plVar18 + 1);
        }
        plVar14 = (long *)*param_1;
        lVar16 = *plVar18;
        bVar1 = *(byte *)((long)plVar14 + 0xf);
        uVar13 = (ulong)bVar1;
        bVar2 = *(byte *)((long)plVar14 + 0xe);
        uVar7 = uVar13 - bVar2;
        if (uVar7 < 6) {
          if (bVar2 != 0) {
            uVar13 = uVar7 & 0xffffffff;
            *(undefined1 *)((long)plVar14 + 0xe) = 0;
            *(char *)((long)plVar14 + 0xf) = (char)uVar7;
            if (bVar1 != bVar2) {
              plVar5 = plVar14 + 2;
              do {
                uVar7 = uVar7 - 1;
                *plVar5 = plVar5[bVar2];
                plVar5 = plVar5 + 1;
              } while (uVar7 != 0);
              uVar13 = (ulong)*(byte *)((long)plVar14 + 0xf);
            }
          }
          lVar9 = *plVar14;
          *(char *)((long)plVar14 + 0xf) = (char)uVar13 + '\x01';
          lVar17 = 1;
          plVar14[(uVar13 & 0xff) + 2] = (long)plVar18;
          *plVar14 = lVar9 + lVar16;
          plVar18 = (long *)param_1[1];
        }
        else {
          plVar5 = (long *)operator_new(0x40);
          *(undefined4 *)(plVar5 + 1) = 2;
          if (*(char *)((long)plVar18 + 0xc) == '\x03') {
            cVar6 = *(char *)((long)plVar18 + 0xd) + '\x01';
          }
          else {
            cVar6 = '\0';
          }
          lVar9 = *plVar18;
          *(char *)((long)plVar5 + 0xd) = cVar6;
          plVar8 = (long *)param_1[1];
          *(undefined1 *)((long)plVar5 + 0xc) = 3;
          *plVar5 = lVar9;
          *(undefined2 *)((long)plVar5 + 0xe) = 0x100;
          plVar5[2] = (long)plVar18;
          *param_1 = plVar5;
          if (plVar8 != (long *)0x0) {
            puVar11 = param_1 + 2;
            plVar18 = plVar5;
            lVar9 = 1;
LAB_006f4d24:
            lVar17 = lVar9;
            plVar14 = plVar8;
            bVar1 = *(byte *)((long)plVar14 + 0xf);
            uVar13 = (ulong)bVar1;
            bVar2 = *(byte *)((long)plVar14 + 0xe);
            uVar7 = uVar13 - bVar2;
            if (5 < uVar7) goto code_r0x006f4d3c;
            if (bVar2 != 0) {
              uVar13 = uVar7 & 0xffffffff;
              *(undefined1 *)((long)plVar14 + 0xe) = 0;
              *(char *)((long)plVar14 + 0xf) = (char)uVar7;
              if (bVar1 != bVar2) {
                plVar5 = plVar14 + 2;
                do {
                  uVar7 = uVar7 - 1;
                  *plVar5 = plVar5[bVar2];
                  plVar5 = plVar5 + 1;
                } while (uVar7 != 0);
                uVar13 = (ulong)*(byte *)((long)plVar14 + 0xf);
              }
            }
            lVar9 = *plVar14;
            *(char *)((long)plVar14 + 0xf) = (char)uVar13 + '\x01';
            lVar17 = lVar17 + -1;
            plVar14[(uVar13 & 0xff) + 2] = (long)plVar18;
            *plVar14 = lVar9 + lVar16;
            goto LAB_006f4dd4;
          }
          lVar17 = 0;
          lVar9 = 1;
LAB_006f4d98:
          plVar18 = (long *)operator_new(0x40);
          *(undefined4 *)(plVar18 + 1) = 2;
          *plVar18 = *plVar5 + *plVar14;
          cVar6 = *(char *)((long)plVar14 + 0xd);
          *(undefined1 *)((long)plVar18 + 0xc) = 3;
          *(undefined2 *)((long)plVar18 + 0xe) = 0x200;
          plVar18[2] = (long)plVar14;
          plVar18[3] = (long)plVar5;
          *(char *)((long)plVar18 + 0xd) = cVar6 + '\x01';
          param_1[lVar9] = plVar18;
LAB_006f4dd4:
          lVar17 = lVar17 + 2;
          plVar18 = (long *)param_1[lVar17];
        }
        if (plVar18 != (long *)0x0) {
          puVar11 = param_1 + lVar17 + 1;
          do {
            *plVar18 = *plVar18 + lVar16;
            plVar18 = (long *)*puVar11;
            puVar11 = puVar11 + 1;
          } while (plVar18 != (long *)0x0);
        }
        puVar15 = puVar15 + 1;
      } while (puVar15 != (undefined8 *)((long)param_2 + lVar12 + 0x10));
    }
  }
  else {
    lVar12 = lVar12 + uVar7 * -8;
    if (lVar12 != 0) {
      puVar15 = (undefined8 *)((long)param_2 + uVar7 * 8 + 0x10);
      do {
        FUN_006f4af4(param_1,*puVar15,bVar3);
        lVar12 = lVar12 + -8;
        puVar15 = puVar15 + 1;
      } while (lVar12 != 0);
    }
  }
  if ((param_3 & 1) != 0) {
    if (bVar3 == false) {
      iVar4 = FUN_00d0f7a0(0xfffffffe,(long)param_2 + 8);
      if (iVar4 == 2) {
        FUN_006f2adc(param_2);
        return;
      }
    }
    else if (param_2 != (void *)0x0) {
      operator_delete(param_2);
      return;
    }
  }
  return;
code_r0x006f4d3c:
  plVar5 = (long *)operator_new(0x40);
  *(undefined4 *)(plVar5 + 1) = 2;
  if (*(char *)((long)plVar18 + 0xc) == '\x03') {
    cVar6 = *(char *)((long)plVar18 + 0xd) + '\x01';
  }
  else {
    cVar6 = '\0';
  }
  lVar10 = *plVar18;
  *(char *)((long)plVar5 + 0xd) = cVar6;
  lVar9 = lVar17 + 1;
  plVar8 = (long *)*puVar11;
  plVar5[2] = (long)plVar18;
  puVar11[-1] = plVar5;
  puVar11 = puVar11 + 1;
  *(undefined1 *)((long)plVar5 + 0xc) = 3;
  *plVar5 = lVar10;
  *(undefined2 *)((long)plVar5 + 0xe) = 0x100;
  plVar18 = plVar5;
  if (plVar8 == (long *)0x0) goto LAB_006f4d98;
  goto LAB_006f4d24;
}


// ===== 006f4e90  FUN_006f4e90 =====

undefined8 * FUN_006f4e90(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *puStack_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *puStack_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 *puStack_38;
  undefined8 *local_30;
  long local_28;
  
  puVar1 = (undefined8 *)operator_new(0x40);
  *(undefined4 *)(puVar1 + 1) = 2;
  *puVar1 = 0;
  *(undefined4 *)((long)puVar1 + 0xc) = 3;
  puStack_78 = (undefined8 *)0x0;
  local_80 = (undefined8 *)0x0;
  local_68 = (undefined8 *)0x0;
  local_70 = (undefined8 *)0x0;
  puStack_58 = (undefined8 *)0x0;
  local_60 = (undefined8 *)0x0;
  local_48 = (undefined8 *)0x0;
  local_50 = (undefined8 *)0x0;
  puStack_38 = (undefined8 *)0x0;
  local_40 = (undefined8 *)0x0;
  local_28 = 0;
  local_30 = (undefined8 *)0x0;
  local_88 = puVar1;
  FUN_006f4af4(&local_88,param_1,1);
  if (((((local_88 != (undefined8 *)0x0) && (puVar1 = local_88, local_80 != (undefined8 *)0x0)) &&
       (puVar1 = local_80, puStack_78 != (undefined8 *)0x0)) &&
      (((puVar1 = puStack_78, local_70 != (undefined8 *)0x0 &&
        (puVar1 = local_70, local_68 != (undefined8 *)0x0)) &&
       ((puVar1 = local_68, local_60 != (undefined8 *)0x0 &&
        ((puVar1 = local_60, puStack_58 != (undefined8 *)0x0 &&
         (puVar1 = puStack_58, local_50 != (undefined8 *)0x0)))))))) &&
     ((puVar1 = local_50, local_48 != (undefined8 *)0x0 &&
      ((((puVar1 = local_48, local_40 != (undefined8 *)0x0 &&
         (puVar1 = local_40, puStack_38 != (undefined8 *)0x0)) &&
        (puVar1 = puStack_38, local_30 != (undefined8 *)0x0)) && (puVar1 = local_30, local_28 != 0))
      )))) {
    puVar1 = (undefined8 *)0x0;
  }
  return puVar1;
}


// ===== 006f4f78  FUN_006f4f78 =====

void FUN_006f4f78(undefined8 *param_1,long *param_2,long param_3,long param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  char cVar5;
  long *plVar6;
  
  if (param_4 != *param_2) {
    if (param_4 == 0) {
      iVar1 = FUN_00d0f7a0(0xfffffffe,param_2 + 1);
      if (iVar1 == 2) {
        FUN_006f2adc(param_2);
        param_2 = (long *)0x0;
      }
      else {
        param_2 = (long *)0x0;
      }
    }
    else {
      plVar6 = param_2;
      if (*(char *)((long)param_2 + 0xc) == '\x01') {
        plVar6 = (long *)param_2[3];
        param_3 = param_2[2] + param_3;
        FUN_00d0f740(2,plVar6 + 1);
        iVar1 = FUN_00d0f7a0(0xfffffffe,param_2 + 1);
        if (iVar1 == 2) {
          FUN_006f2adc(param_2);
        }
      }
      param_2 = (long *)operator_new(0x20);
      *param_2 = param_4;
      param_2[1] = 0;
      *(undefined4 *)(param_2 + 1) = 2;
      *(undefined1 *)((long)param_2 + 0xc) = 1;
      param_2[2] = param_3;
      param_2[3] = (long)plVar6;
    }
  }
  plVar6 = (long *)*param_1;
  lVar2 = *plVar6;
  if (lVar2 == 0) {
    plVar4 = (long *)operator_new(0x40);
    *(undefined4 *)(plVar4 + 1) = 2;
    if (*(char *)((long)param_2 + 0xc) == '\x03') {
      cVar5 = *(char *)((long)param_2 + 0xd) + '\x01';
    }
    else {
      cVar5 = '\0';
    }
    lVar2 = *param_2;
    *(char *)((long)plVar4 + 0xd) = cVar5;
    *(undefined1 *)((long)plVar4 + 0xc) = 3;
    *plVar4 = lVar2;
    *(undefined2 *)((long)plVar4 + 0xe) = 0x100;
    plVar4[2] = (long)param_2;
    *plVar6 = (long)plVar4;
  }
  else {
    uVar3 = FUN_006f2be0(lVar2,param_2);
    *(undefined8 *)*param_1 = uVar3;
  }
  return;
}


// ===== 006f50cc  FUN_006f50cc =====

void FUN_006f50cc(undefined8 *param_1,undefined8 param_2,code *UNRECOVERED_JUMPTABLE)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  uVar2 = *param_1;
  if (*(char *)((long)param_1 + 0xc) == '\x01') {
    uVar4 = param_1[2];
    puVar3 = (undefined8 *)param_1[3];
    if ((int)param_1[1] == 2) {
      if (param_1 != (undefined8 *)0x0) {
        operator_delete(param_1);
      }
    }
    else {
      FUN_00d0f740(2,puVar3 + 1);
      iVar1 = FUN_00d0f7a0(0xfffffffe,param_1 + 1);
      if (iVar1 == 2) {
        FUN_006f2adc(param_1);
      }
    }
  }
  else {
    uVar4 = 0;
    puVar3 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x006f5184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2,puVar3,uVar4,uVar2);
  return;
}


// ===== 006f5194  FUN_006f5194 =====

void FUN_006f5194(void *param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)((long)param_1 + 0x10);
  if ((lVar2 != 0) && (iVar1 = FUN_00d0f7a0(0xfffffffe,lVar2 + 8), iVar1 == 2)) {
    FUN_006f2adc(lVar2);
  }
  if (param_1 == (void *)0x0) {
    return;
  }
  FUN_006f5204((long)param_1 + 0x18);
  operator_delete(param_1);
  return;
}


// ===== 006f5204  FUN_006f5204 =====

void FUN_006f5204(undefined8 *param_1)

{
  int iVar1;
  void *pvVar2;
  
  pvVar2 = (void *)*param_1;
  iVar1 = FUN_00d0f7a0(0xffffffff,pvVar2);
  if ((pvVar2 != (void *)0x0) && (iVar1 == 1)) {
    FUN_006f1d48((long)pvVar2 + 0x18);
    operator_delete(pvVar2);
    return;
  }
  return;
}


// ===== 006f5260  FUN_006f5260 =====

undefined1  [16] FUN_006f5260(long *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  if (*(int *)((long)param_1 + 0x1c) < param_2) {
    return ZEXT816(1) << 0x40;
  }
  do {
    lVar2 = FUN_006f5318(param_1,param_2,param_3);
    if (lVar2 == 0) {
      uVar4 = 1;
      if (param_2 == 0) {
        lVar3 = param_1[1];
        *(undefined4 *)(param_1 + 10) = 1;
        *param_1 = lVar3;
      }
      else {
        lVar3 = 0;
      }
      goto LAB_006f52f0;
    }
    lVar3 = lVar2 + param_2;
    param_2 = (int)param_1[1];
    uVar1 = *(int *)((long)param_1 + 0x1c) + ((int)lVar2 - param_2);
    param_2 = (int)lVar3 - param_2;
    *(uint *)((long)param_1 + 0x1c) = uVar1;
  } while (-1 < param_2);
  uVar4 = 0;
  *param_1 = param_1[1] + (long)(int)(uVar1 & (int)uVar1 >> 0x1f);
LAB_006f52f0:
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = lVar3;
  return auVar5;
}


// ===== 006f5318  FUN_006f5318 =====

undefined8 * FUN_006f5318(long param_1,int param_2,int param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *local_38;
  
  puVar4 = *(undefined8 **)(param_1 + 0x10);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar1 = (undefined8 *)(param_1 + 0x28);
    if (puVar4 == puVar1) {
      uVar5 = **(undefined8 **)(param_1 + 8);
      *(undefined8 *)(param_1 + 0x30) = (*(undefined8 **)(param_1 + 8))[1];
      *puVar1 = uVar5;
      if ((*(int *)(param_1 + 0x54) < 1) ||
         ((-1 < param_3 &&
          (uVar3 = FUN_006f7360((long)puVar1 + (long)param_2,param_1 + 0x38), (uVar3 & 1) != 0)))) {
LAB_006f5420:
        if (*(long *)(param_1 + 0x48) == 2) {
          *(long *)(param_1 + 0x48) = *(long *)(param_1 + 8) - (long)puVar4;
        }
        *(undefined4 *)(param_1 + 0x18) = 0;
        *(long *)(param_1 + 8) = param_1 + 0x38;
        *(undefined8 *)(param_1 + 0x10) = 0;
        puVar4 = puVar1;
      }
      else {
        local_38 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
        do {
          uVar3 = (**(code **)(**(long **)(param_1 + 0x20) + 0x10))
                            (*(long **)(param_1 + 0x20),&local_38,param_1 + 0x18);
          if ((uVar3 & 1) == 0) {
            *(undefined4 *)(param_1 + 0x54) = 0;
            goto LAB_006f5420;
          }
          uVar2 = *(uint *)(param_1 + 0x18);
          *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) - uVar2;
          if (0x10 < (int)uVar2) {
            uVar6 = local_38[1];
            uVar5 = *local_38;
            *(long *)(param_1 + 8) = param_1 + 0x38;
            *(undefined8 **)(param_1 + 0x10) = local_38;
            *(undefined8 *)(param_1 + 0x40) = uVar6;
            *(undefined8 *)(param_1 + 0x38) = uVar5;
            if (*(ulong *)(param_1 + 0x48) < 2) {
              return puVar1;
            }
            goto LAB_006f5480;
          }
        } while ((int)uVar2 < 1);
        memcpy((void *)(param_1 + 0x38),local_38,(ulong)uVar2);
        *(ulong *)(param_1 + 8) = (long)puVar1 + (ulong)uVar2;
        *(undefined8 **)(param_1 + 0x10) = puVar1;
        puVar4 = puVar1;
        if (1 < *(ulong *)(param_1 + 0x48)) {
LAB_006f5480:
          *(undefined8 *)(param_1 + 0x48) = 1;
          puVar4 = puVar1;
        }
      }
    }
    else {
      *(long *)(param_1 + 8) = (long)puVar4 + (long)*(int *)(param_1 + 0x18) + -0x10;
      *(undefined8 **)(param_1 + 0x10) = puVar1;
      if (*(long *)(param_1 + 0x48) == 1) {
        *(undefined8 *)(param_1 + 0x48) = 2;
      }
    }
  }
  return puVar4;
}


// ===== 006f548c  FUN_006f548c =====

bool FUN_006f548c(undefined8 param_1,uint param_2,int param_3)

{
  return (long)(ulong)param_2 <= (long)param_3;
}


// ===== 006f54a0  FUN_006f54a0 =====

bool FUN_006f54a0(long param_1,uint param_2,int param_3)

{
  return (long)(ulong)param_2 <= (long)((*(int *)(param_1 + 8) - param_3) + 0x10);
}


// ===== 006f54c0  FUN_006f54c0 =====

void FUN_006f54c0(long *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = FUN_006f5318((int)param_1,0,0xffffffff);
  lVar3 = param_1[1];
  if (lVar2 == 0) {
    *(undefined4 *)(param_1 + 10) = 1;
  }
  else {
    uVar1 = *(int *)((long)param_1 + 0x1c) + ((int)lVar2 - (int)lVar3);
    *(uint *)((long)param_1 + 0x1c) = uVar1;
    lVar3 = lVar3 + (int)(uVar1 & (int)uVar1 >> 0x1f);
  }
  *param_1 = lVar3;
  return;
}


// ===== 006f5520  FUN_006f5520 =====

long FUN_006f5520(long *param_1,long param_2,uint param_3,undefined8 *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  
  uVar6 = (ulong)param_3;
  if (*(char *)((long)param_4 + 0x17) < '\0') {
    *(undefined1 *)*param_4 = 0;
    param_4[1] = 0;
  }
  else {
    *(undefined1 *)param_4 = 0;
    *(undefined1 *)((long)param_4 + 0x17) = 0;
  }
  iVar3 = (int)param_1[1];
  if ((long)uVar6 <= (long)(*(int *)((long)param_1 + 0x1c) + (iVar3 - (int)param_2))) {
    lVar4 = (long)*(char *)((long)param_4 + 0x17);
    if (lVar4 < 0) {
      lVar4 = param_4[1];
    }
    if (49999999 < (int)param_3) {
      param_3 = 50000000;
    }
    FUN_00547c2c(param_4,lVar4 + (int)param_3);
    iVar3 = (int)param_1[1];
  }
  uVar7 = (iVar3 - (int)param_2) + 0x10;
  do {
    if ((param_1[2] == 0) ||
       (FUN_00547cac(param_4,param_2,(long)(int)uVar7), *(int *)((long)param_1 + 0x1c) < 0x11)) {
      return 0;
    }
    lVar4 = FUN_006f5318(param_1,0,0xffffffff);
    lVar5 = param_1[1];
    if (lVar4 == 0) {
      *param_1 = lVar5;
      *(undefined4 *)(param_1 + 10) = 1;
      return 0;
    }
    param_2 = lVar4 + 0x10;
    uVar2 = (int)uVar6 - uVar7;
    uVar6 = (ulong)uVar2;
    uVar1 = *(int *)((long)param_1 + 0x1c) + ((int)lVar4 - (int)lVar5);
    uVar7 = ((int)lVar5 - (int)param_2) + 0x10;
    *(uint *)((long)param_1 + 0x1c) = uVar1;
    *param_1 = lVar5 + (int)(uVar1 & (int)uVar1 >> 0x1f);
  } while (uVar7 < uVar2);
  FUN_00547cac(param_4,param_2,(long)(int)uVar2);
  return param_2 + (ulong)uVar2;
}


// ===== 006f566c  FUN_006f566c =====

long FUN_006f566c(long *param_1,long param_2,uint param_3,long param_4)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  iVar2 = (int)param_1[1];
  if ((long)(ulong)param_3 <= (long)(*(int *)((long)param_1 + 0x1c) + (iVar2 - (int)param_2))) {
    lVar3 = (long)*(char *)(param_4 + 0x17);
    if (lVar3 < 0) {
      lVar3 = *(long *)(param_4 + 8);
    }
    uVar5 = param_3;
    if (49999999 < (int)param_3) {
      uVar5 = 50000000;
    }
    FUN_00547c2c(param_4,lVar3 + (int)uVar5);
    iVar2 = (int)param_1[1];
  }
  uVar5 = (iVar2 - (int)param_2) + 0x10;
  do {
    if ((param_1[2] == 0) ||
       (FUN_00547cac(param_4,param_2,(long)(int)uVar5), *(int *)((long)param_1 + 0x1c) < 0x11)) {
      return 0;
    }
    lVar3 = FUN_006f5318(param_1,0,0xffffffff);
    lVar4 = param_1[1];
    if (lVar3 == 0) {
      *param_1 = lVar4;
      *(undefined4 *)(param_1 + 10) = 1;
      return 0;
    }
    param_2 = lVar3 + 0x10;
    param_3 = param_3 - uVar5;
    uVar1 = *(int *)((long)param_1 + 0x1c) + ((int)lVar3 - (int)lVar4);
    uVar5 = ((int)lVar4 - (int)param_2) + 0x10;
    *(uint *)((long)param_1 + 0x1c) = uVar1;
    *param_1 = lVar4 + (int)(uVar1 & (int)uVar1 >> 0x1f);
  } while (uVar5 < param_3);
  FUN_00547cac(param_4,param_2,(long)(int)param_3);
  return param_2 + (ulong)param_3;
}


// ===== 006f5798  FUN_006f5798 =====

undefined8 * FUN_006f5798(undefined8 *param_1,long param_2,uint param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *__dest;
  int iVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  uint local_54;
  long *local_38;
  
  lVar5 = param_1[1];
  uVar8 = (ulong)param_3;
  if (param_1[4] == 0) {
    uVar12 = (lVar5 - param_2) + 0x10;
    if ((long)(int)uVar12 < (long)uVar8) {
      do {
        if (param_1[2] == 0) {
          return (undefined8 *)0x0;
        }
        iVar10 = (int)uVar12;
        if (iVar10 < 0) goto LAB_006f5b0c;
        if ((param_2 == 0) && (iVar10 != 0)) goto LAB_006f5b20;
        FUN_006f1628(param_4,param_2,uVar12 & 0xffffffff,4);
        if (*(int *)((long)param_1 + 0x1c) < 0x11) {
          return (undefined8 *)0x0;
        }
        lVar5 = FUN_006f5318(param_1,0,0xffffffff);
        puVar6 = (undefined1 *)param_1[1];
        if (lVar5 == 0) {
          __dest = (long *)0x0;
          *(undefined4 *)(param_1 + 10) = 1;
          goto LAB_006f5b04;
        }
        param_2 = lVar5 + 0x10;
        uVar3 = (int)uVar8 - iVar10;
        uVar8 = (ulong)uVar3;
        uVar2 = *(int *)((long)param_1 + 0x1c) + ((int)lVar5 - (int)puVar6);
        uVar11 = ((int)puVar6 - (int)param_2) + 0x10;
        uVar12 = (ulong)uVar11;
        *(uint *)((long)param_1 + 0x1c) = uVar2;
        *param_1 = puVar6 + (int)(uVar2 & (int)uVar2 >> 0x1f);
      } while (uVar11 < uVar3);
      if ((int)uVar3 < 0) {
LAB_006f5b0c:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/string_view:331: libc++ Hardening assertion __len <= static_cast<size_type>(numeric_limits<difference_type>::max()) failed: string_view::string_view(_CharT *, size_t): length does not fit in difference_type\n"
                  );
      }
      if ((uVar3 == 0) || (param_2 != 0)) {
        FUN_006f1628(param_4,param_2,uVar8,4);
        return (undefined8 *)(param_2 + uVar8);
      }
    }
    else {
      if ((int)param_3 < 0) goto LAB_006f5b0c;
      if ((param_2 != 0) || (param_3 == 0)) {
        FUN_006f1330(param_4,param_2,(long)(int)param_3);
        return (undefined8 *)(param_2 + (int)param_3);
      }
    }
    goto LAB_006f5b20;
  }
  iVar10 = *(int *)((long)param_1 + 0x1c) + ((int)lVar5 - (int)param_2);
  if ((long)iVar10 < (long)uVar8) {
    return (undefined8 *)0x0;
  }
  puVar1 = param_1 + 5;
  uVar8 = (lVar5 - param_2) + 0x10;
  iVar9 = (int)uVar8;
  if (((ulong)(param_2 - (long)puVar1) < 0x21) && (iVar9 < 0x21)) {
    if (iVar9 == 0x10) {
      iVar4 = 0x10;
      if (((undefined8 *)param_1[2] != (undefined8 *)0x0) && ((undefined8 *)param_1[2] != puVar1)) {
        FUN_006f12a8(param_4);
        iVar9 = *(int *)(param_1 + 3);
        (**(code **)(*(long *)param_1[4] + 0x18))((long *)param_1[4],iVar9);
        iVar9 = *(int *)((long)param_1 + 0x54) + iVar9;
        goto LAB_006f595c;
      }
    }
    else {
      iVar4 = iVar9;
      if (iVar9 < 0) goto LAB_006f5b0c;
    }
    if ((param_2 == 0) && (iVar4 != 0)) {
LAB_006f5b20:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/string_view:333: libc++ Hardening assertion __len == 0 || __s != nullptr failed: string_view::string_view(_CharT *, size_t): received nullptr\n"
                );
    }
    uVar11 = param_3 - iVar9;
    FUN_006f1330(param_4,param_2);
    if ((undefined8 *)param_1[2] == puVar1) {
      iVar9 = *(int *)((long)param_1 + 0x54);
    }
    else {
      if ((undefined8 *)param_1[2] == (undefined8 *)0x0) {
        *(undefined4 *)(param_1 + 10) = 1;
        return (undefined8 *)0x0;
      }
      iVar9 = *(int *)(param_1 + 3);
      (**(code **)(*(long *)param_1[4] + 0x18))((long *)param_1[4],iVar9 + -0x10);
      iVar9 = *(int *)((long)param_1 + 0x54) + iVar9 + -0x10;
      *(int *)((long)param_1 + 0x54) = iVar9;
    }
  }
  else {
    FUN_006f12a8(param_4);
    (**(code **)(*(long *)param_1[4] + 0x18))((long *)param_1[4],uVar8 & 0xffffffff);
    iVar9 = *(int *)((long)param_1 + 0x54) + iVar9;
LAB_006f595c:
    *(int *)((long)param_1 + 0x54) = iVar9;
    uVar11 = param_3;
  }
  if ((int)uVar11 <= iVar9) {
    *(uint *)((long)param_1 + 0x54) = iVar9 - uVar11;
    uVar8 = (**(code **)(*(long *)param_1[4] + 0x30))((long *)param_1[4],param_4,uVar11);
    if ((uVar8 & 1) != 0) {
      local_38 = (long *)&DAT_aaaaaaaaaaaaaaaa;
      *(undefined4 *)((long)param_1 + 0x1c) = 0x7fffffff;
      local_54 = 0xaaaaaaaa;
      uVar8 = (**(code **)(*(long *)param_1[4] + 0x10))((long *)param_1[4],&local_38,&local_54);
      if ((uVar8 & 1) == 0) {
        puVar7 = param_1 + 5;
        __dest = param_1 + 5;
        *(undefined4 *)((long)param_1 + 0x54) = 0;
        param_1[1] = puVar1;
        param_1[2] = 0;
        *(undefined4 *)(param_1 + 3) = 0;
      }
      else {
        *(uint *)((long)param_1 + 0x54) = *(int *)((long)param_1 + 0x54) - local_54;
        if ((int)local_54 < 0x11) {
          *param_1 = param_1 + 7;
          param_1[1] = param_1 + 7;
          param_1[2] = puVar1;
          __dest = (long *)((long)param_1 + (0x48 - (long)(int)local_54));
          memcpy(__dest,local_38,(long)(int)local_54);
          puVar7 = (undefined8 *)param_1[1];
        }
        else {
          puVar7 = (undefined8 *)((long)local_38 + ((ulong)local_54 - 0x10));
          param_1[1] = puVar7;
          param_1[2] = puVar1;
          __dest = local_38;
          if (param_1[9] == 1) {
            param_1[9] = 2;
          }
        }
      }
      uVar11 = (iVar10 - param_3) + ((int)__dest - (int)puVar7);
      *(uint *)((long)param_1 + 0x1c) = uVar11;
      puVar6 = (undefined1 *)((long)puVar7 + (long)(int)(uVar11 & (int)uVar11 >> 0x1f));
LAB_006f5b04:
      *param_1 = puVar6;
      return __dest;
    }
  }
  return (undefined8 *)0x0;
}


// ===== 006f5b34  FUN_006f5b34 =====

undefined8 FUN_006f5b34(long *param_1,undefined8 param_2,byte *param_3)

{
  int iVar1;
  undefined8 uVar2;
  byte *pbVar3;
  long lVar4;
  uint uVar5;
  
  pbVar3 = param_3 + 1;
  uVar5 = (uint)*param_3;
  if ((char)*param_3 < '\0') {
    uVar5 = (uVar5 + (uint)*pbVar3 * 0x80) - 0x80;
    if ((char)*pbVar3 < '\0') {
      uVar5 = (uVar5 + (uint)param_3[2] * 0x4000) - 0x4000;
      if ((char)param_3[2] < '\0') {
        uVar5 = (uVar5 + (uint)param_3[3] * 0x200000) - 0x200000;
        if ((char)param_3[3] < '\0') {
          if (7 < param_3[4]) {
            return 0;
          }
          uVar5 = uVar5 + (uint)param_3[4] * 0x10000000 + 0xf0000000;
          if (0x7fffffef < uVar5) {
            return 0;
          }
          pbVar3 = param_3 + 5;
          goto joined_r0x006f5c54;
        }
        lVar4 = 3;
      }
      else {
        lVar4 = 2;
      }
    }
    else {
      lVar4 = 1;
    }
    pbVar3 = param_3 + lVar4 + 1;
  }
joined_r0x006f5c54:
  if ((pbVar3 != (byte *)0x0) && (0 < (int)param_1[0xb])) {
    *(int *)(param_1 + 0xb) = (int)param_1[0xb] + -1;
    uVar5 = uVar5 + ((int)pbVar3 - (int)param_1[1]);
    iVar1 = *(int *)((long)param_1 + 0x1c);
    *(uint *)((long)param_1 + 0x1c) = uVar5;
    *param_1 = param_1[1] + (long)(int)(uVar5 & (int)uVar5 >> 0x1f);
    uVar2 = FUN_006dc454(param_2,pbVar3,param_1);
    uVar5 = *(int *)((long)param_1 + 0x1c) + (iVar1 - uVar5);
    *(int *)(param_1 + 0xb) = (int)param_1[0xb] + 1;
    *(uint *)((long)param_1 + 0x1c) = uVar5;
    if ((int)param_1[10] == 0) {
      *param_1 = param_1[1] + (long)(int)(uVar5 & (int)uVar5 >> 0x1f);
      return uVar2;
    }
  }
  return 0;
}


// ===== 006f5c6c  FUN_006f5c6c =====

void FUN_006f5c6c(int param_1,ulong param_2,long *param_3)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar6 = (ulong)(uint)(param_1 << 3);
  uVar2 = uVar6;
  if (0x7f < (uint)(param_1 << 3)) {
    do {
      bVar1 = *(byte *)((long)param_3 + 0x17);
      if ((char)bVar1 < '\0') {
        uVar5 = param_3[1];
        uVar6 = (param_3[2] & 0x7fffffffffffffffU) - 1;
        if (uVar5 == uVar6) goto LAB_006f5d1c;
LAB_006f5d40:
        param_3[1] = uVar5 + 1;
        plVar4 = (long *)*param_3;
      }
      else {
        if (bVar1 == 0x16) {
          uVar6 = 0x16;
LAB_006f5d1c:
          uVar5 = uVar6;
          FUN_0054774c(param_3,uVar5,1,uVar5,uVar5,0,0);
          goto LAB_006f5d40;
        }
        uVar5 = (ulong)bVar1;
        *(byte *)((long)param_3 + 0x17) = bVar1 + 1 & 0x7f;
        plVar4 = param_3;
      }
      uVar6 = uVar2 >> 7;
      uVar3 = uVar2 >> 0xe;
      ((byte *)((long)plVar4 + uVar5))[1] = 0;
      *(byte *)((long)plVar4 + uVar5) = (byte)uVar2 | 0x80;
      uVar2 = uVar6;
    } while (uVar3 != 0);
  }
  bVar1 = *(byte *)((long)param_3 + 0x17);
  if ((char)bVar1 < '\0') {
    uVar2 = param_3[1];
    uVar5 = (param_3[2] & 0x7fffffffffffffffU) - 1;
    if (uVar2 == uVar5) goto LAB_006f5d64;
LAB_006f5d88:
    param_3[1] = uVar2 + 1;
    plVar4 = (long *)*param_3;
  }
  else {
    if (bVar1 == 0x16) {
      uVar5 = 0x16;
LAB_006f5d64:
      uVar2 = uVar5;
      FUN_0054774c(param_3,uVar2,1,uVar2,uVar2,0,0);
      goto LAB_006f5d88;
    }
    uVar2 = (ulong)bVar1;
    *(byte *)((long)param_3 + 0x17) = bVar1 + 1 & 0x7f;
    plVar4 = param_3;
  }
  *(undefined1 *)((long)plVar4 + uVar2) = (char)uVar6;
  ((undefined1 *)((long)plVar4 + uVar2))[1] = 0;
  uVar2 = param_2;
  if (0x7f < param_2) {
    do {
      bVar1 = *(byte *)((long)param_3 + 0x17);
      if ((char)bVar1 < '\0') {
        uVar6 = param_3[1];
        uVar5 = (param_3[2] & 0x7fffffffffffffffU) - 1;
        if (uVar6 == uVar5) goto LAB_006f5e44;
LAB_006f5e68:
        param_3[1] = uVar6 + 1;
        plVar4 = (long *)*param_3;
      }
      else {
        if (bVar1 == 0x16) {
          uVar5 = 0x16;
LAB_006f5e44:
          uVar6 = uVar5;
          FUN_0054774c(param_3,uVar6,1,uVar6,uVar6,0,0);
          goto LAB_006f5e68;
        }
        uVar6 = (ulong)bVar1;
        *(byte *)((long)param_3 + 0x17) = bVar1 + 1 & 0x7f;
        plVar4 = param_3;
      }
      param_2 = uVar2 >> 7;
      uVar5 = uVar2 >> 0xe;
      ((byte *)((long)plVar4 + uVar6))[1] = 0;
      *(byte *)((long)plVar4 + uVar6) = (byte)uVar2 | 0x80;
      uVar2 = param_2;
    } while (uVar5 != 0);
  }
  bVar1 = *(byte *)((long)param_3 + 0x17);
  if ((char)bVar1 < '\0') {
    uVar2 = param_3[1];
    uVar6 = (param_3[2] & 0x7fffffffffffffffU) - 1;
    if (uVar2 == uVar6) goto LAB_006f5e8c;
  }
  else {
    if (bVar1 != 0x16) {
      uVar2 = (ulong)bVar1;
      *(byte *)((long)param_3 + 0x17) = bVar1 + 1 & 0x7f;
      goto LAB_006f5ed4;
    }
    uVar6 = 0x16;
LAB_006f5e8c:
    uVar2 = uVar6;
    FUN_0054774c(param_3,uVar2,1,uVar2,uVar2,0,0);
  }
  param_3[1] = uVar2 + 1;
  param_3 = (long *)*param_3;
LAB_006f5ed4:
  *(undefined1 *)((long)param_3 + uVar2) = (char)param_2;
  ((undefined1 *)((long)param_3 + uVar2))[1] = 0;
  return;
}


// ===== 006f5ef8  FUN_006f5ef8 =====

void FUN_006f5ef8(int param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  byte bVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = (ulong)(param_1 << 3 | 2);
  uVar6 = uVar5;
  if (0x7f < (uint)(param_1 << 3)) {
    do {
      bVar1 = *(byte *)((long)param_4 + 0x17);
      if ((char)bVar1 < '\0') {
        uVar4 = param_4[1];
        uVar5 = (param_4[2] & 0x7fffffffffffffffU) - 1;
        if (uVar4 == uVar5) goto LAB_006f5fb4;
LAB_006f5fd8:
        param_4[1] = uVar4 + 1;
        plVar2 = (long *)*param_4;
      }
      else {
        if (bVar1 == 0x16) {
          uVar5 = 0x16;
LAB_006f5fb4:
          uVar4 = uVar5;
          FUN_0054774c(param_4,uVar4,1,uVar4,uVar4,0,0);
          goto LAB_006f5fd8;
        }
        uVar4 = (ulong)bVar1;
        *(byte *)((long)param_4 + 0x17) = bVar1 + 1 & 0x7f;
        plVar2 = param_4;
      }
      uVar5 = uVar6 >> 7;
      uVar3 = uVar6 >> 0xe;
      ((byte *)((long)plVar2 + uVar4))[1] = 0;
      *(byte *)((long)plVar2 + uVar4) = (byte)uVar6 | 0x80;
      uVar6 = uVar5;
    } while (uVar3 != 0);
  }
  bVar1 = *(byte *)((long)param_4 + 0x17);
  if ((char)bVar1 < '\0') {
    uVar6 = param_4[1];
    uVar4 = (param_4[2] & 0x7fffffffffffffffU) - 1;
    if (uVar6 == uVar4) goto LAB_006f5ffc;
LAB_006f6020:
    param_4[1] = uVar6 + 1;
    plVar2 = (long *)*param_4;
  }
  else {
    if (bVar1 == 0x16) {
      uVar4 = 0x16;
LAB_006f5ffc:
      uVar6 = uVar4;
      FUN_0054774c(param_4,uVar6,1,uVar6,uVar6,0,0);
      goto LAB_006f6020;
    }
    uVar6 = (ulong)bVar1;
    *(byte *)((long)param_4 + 0x17) = bVar1 + 1 & 0x7f;
    plVar2 = param_4;
  }
  *(undefined1 *)((long)plVar2 + uVar6) = (char)uVar5;
  ((undefined1 *)((long)plVar2 + uVar6))[1] = 0;
  uVar6 = param_3;
  uVar5 = param_3;
  if (0x7f < param_3) {
    do {
      bVar1 = *(byte *)((long)param_4 + 0x17);
      if ((char)bVar1 < '\0') {
        uVar4 = param_4[1];
        uVar6 = (param_4[2] & 0x7fffffffffffffffU) - 1;
        if (uVar4 == uVar6) goto LAB_006f60c8;
LAB_006f60ec:
        param_4[1] = uVar4 + 1;
        plVar2 = (long *)*param_4;
      }
      else {
        if (bVar1 == 0x16) {
          uVar6 = 0x16;
LAB_006f60c8:
          uVar4 = uVar6;
          FUN_0054774c(param_4,uVar4,1,uVar4,uVar4,0,0);
          goto LAB_006f60ec;
        }
        uVar4 = (ulong)bVar1;
        *(byte *)((long)param_4 + 0x17) = bVar1 + 1 & 0x7f;
        plVar2 = param_4;
      }
      uVar6 = uVar5 >> 7;
      uVar3 = uVar5 >> 0xe;
      ((byte *)((long)plVar2 + uVar4))[1] = 0;
      *(byte *)((long)plVar2 + uVar4) = (byte)uVar5 | 0x80;
      uVar5 = uVar6;
    } while (uVar3 != 0);
  }
  bVar1 = *(byte *)((long)param_4 + 0x17);
  if ((char)bVar1 < '\0') {
    uVar5 = param_4[1];
    uVar4 = (param_4[2] & 0x7fffffffffffffffU) - 1;
    if (uVar5 == uVar4) goto LAB_006f612c;
  }
  else {
    if (bVar1 != 0x16) {
      uVar5 = (ulong)bVar1;
      *(byte *)((long)param_4 + 0x17) = bVar1 + 1 & 0x7f;
      plVar2 = param_4;
      goto LAB_006f6174;
    }
    uVar4 = 0x16;
LAB_006f612c:
    uVar5 = uVar4;
    FUN_0054774c(param_4,uVar5,1,uVar5,uVar5,0,0);
  }
  param_4[1] = uVar5 + 1;
  plVar2 = (long *)*param_4;
LAB_006f6174:
  *(undefined1 *)((long)plVar2 + uVar5) = (char)uVar6;
  ((undefined1 *)((long)plVar2 + uVar5))[1] = 0;
  FUN_00547cac(param_4,param_2,param_3);
  return;
}


// ===== 006f61a4  FUN_006f61a4 =====

undefined1  [16] FUN_006f61a4(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  iVar1 = param_2 + (uint)*(byte *)(param_1 + 2) * 0x4000 + -0x4000;
  if ((char)*(byte *)(param_1 + 2) < '\0') {
    iVar1 = iVar1 + (uint)*(byte *)(param_1 + 3) * 0x200000 + -0x200000;
    if ((char)*(byte *)(param_1 + 3) < '\0') {
      if (*(char *)(param_1 + 4) < 0) {
        return ZEXT816(0);
      }
      iVar1 = iVar1 + *(char *)(param_1 + 4) * 0x10000000 + -0x10000000;
      lVar2 = 4;
    }
    else {
      lVar2 = 3;
    }
  }
  else {
    lVar2 = 2;
  }
  auVar3._8_4_ = iVar1;
  auVar3._0_8_ = param_1 + lVar2 + 1;
  auVar3._12_4_ = 0;
  return auVar3;
}


// ===== 006f6214  FUN_006f6214 =====

undefined1  [16] FUN_006f6214(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  iVar3 = param_2 + (uint)*(byte *)(param_1 + 1) * 0x80 + -0x80;
  if ((char)*(byte *)(param_1 + 1) < '\0') {
    iVar3 = iVar3 + (uint)*(byte *)(param_1 + 2) * 0x4000 + -0x4000;
    if ((char)*(byte *)(param_1 + 2) < '\0') {
      iVar3 = iVar3 + (uint)*(byte *)(param_1 + 3) * 0x200000 + -0x200000;
      if ((char)*(byte *)(param_1 + 3) < '\0') {
        if (*(byte *)(param_1 + 4) < 8) {
          uVar1 = iVar3 + (uint)*(byte *)(param_1 + 4) * 0x10000000 + 0xf0000000;
          uVar2 = 0;
          if (uVar1 < 0x7ffffff0) {
            uVar2 = uVar1;
          }
          lVar4 = 0;
          if (uVar1 < 0x7ffffff0) {
            lVar4 = param_1 + 5;
          }
          auVar6._8_4_ = uVar2;
          auVar6._0_8_ = lVar4;
          auVar6._12_4_ = 0;
          return auVar6;
        }
        return ZEXT816(0) << 0x40;
      }
      lVar4 = 3;
    }
    else {
      lVar4 = 2;
    }
  }
  else {
    lVar4 = 1;
  }
  auVar5._8_4_ = iVar3;
  auVar5._0_8_ = param_1 + lVar4 + 1;
  auVar5._12_4_ = 0;
  return auVar5;
}


// ===== 006f62b8  FUN_006f62b8 =====

byte * FUN_006f62b8(undefined8 *param_1,byte *param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  ulong __n;
  ulong uVar5;
  undefined8 *puVar6;
  
  pbVar4 = param_2 + 1;
  uVar3 = (uint)*param_2;
  if ((char)*param_2 < '\0') {
    uVar3 = (uVar3 + (uint)*pbVar4 * 0x80) - 0x80;
    if ((char)*pbVar4 < '\0') {
      uVar3 = (uVar3 + (uint)param_2[2] * 0x4000) - 0x4000;
      if ((char)param_2[2] < '\0') {
        uVar3 = (uVar3 + (uint)param_2[3] * 0x200000) - 0x200000;
        if ((char)param_2[3] < '\0') {
          if (7 < param_2[4]) {
            return (byte *)0x0;
          }
          uVar3 = uVar3 + (uint)param_2[4] * 0x10000000 + 0xf0000000;
          if (0x7fffffef < uVar3) {
            return (byte *)0x0;
          }
          pbVar4 = param_2 + 5;
          goto joined_r0x006f6494;
        }
        lVar1 = 3;
      }
      else {
        lVar1 = 2;
      }
    }
    else {
      lVar1 = 1;
    }
    pbVar4 = param_2 + lVar1 + 1;
  }
joined_r0x006f6494:
  if (pbVar4 == (byte *)0x0) {
    return (byte *)0x0;
  }
  if ((long)((*(int *)(param_3 + 8) - (int)pbVar4) + 0x10) < (long)(ulong)uVar3) {
    pbVar4 = (byte *)FUN_006f5520(param_3,pbVar4,uVar3,param_1);
    return pbVar4;
  }
  uVar5 = (ulong)*(char *)((long)param_1 + 0x17);
  __n = (ulong)(int)uVar3;
  puVar6 = param_1;
  if ((long)uVar5 < 0) {
    uVar5 = param_1[1];
    if (uVar5 < __n) {
      uVar2 = (uint)(byte)((ulong)param_1[2] >> 0x38);
      lVar1 = (param_1[2] & 0x7fffffffffffffff) - 1;
      goto LAB_006f6394;
    }
    puVar6 = (undefined8 *)*param_1;
  }
  else {
    if (__n <= uVar5) {
      *(byte *)((long)param_1 + 0x17) = (byte)uVar3;
      goto LAB_006f640c;
    }
    lVar1 = 0x16;
    uVar2 = (uint)*(char *)((long)param_1 + 0x17);
LAB_006f6394:
    if (lVar1 - uVar5 < __n - uVar5) {
      FUN_0054774c(param_1,lVar1,__n - lVar1,uVar5,uVar5,0,0);
      uVar2 = (uint)*(byte *)((long)param_1 + 0x17);
      param_1[1] = uVar5;
    }
    if ((uVar2 >> 7 & 1) != 0) {
      puVar6 = (undefined8 *)*param_1;
    }
    memset((void *)((long)puVar6 + uVar5),0,__n - uVar5);
    if (-1 < *(char *)((long)param_1 + 0x17)) {
      *(byte *)((long)param_1 + 0x17) = (byte)uVar3 & 0x7f;
      goto LAB_006f640c;
    }
  }
  param_1[1] = __n;
LAB_006f640c:
  *(undefined1 *)((long)puVar6 + __n) = 0;
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    param_1 = (undefined8 *)*param_1;
  }
  memcpy(param_1,pbVar4,__n);
  return pbVar4 + __n;
}


// ===== 006f64b8  FUN_006f64b8 =====

void FUN_006f64b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_006f7648(param_3,param_2,param_1,0);
  return;
}


// ===== 006f64d0  FUN_006f64d0 =====

void FUN_006f64d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_006f7b80(param_3,param_2,param_1,0);
  return;
}


// ===== 006f64e8  FUN_006f64e8 =====

void FUN_006f64e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_006f80b8(param_3,param_2,param_1,0);
  return;
}


// ===== 006f6500  FUN_006f6500 =====

void FUN_006f6500(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_006f85f0(param_3,param_2,param_1,0);
  return;
}


// ===== 006f6518  FUN_006f6518 =====

void FUN_006f6518(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_006f8b28(param_3,param_2,param_1,0);
  return;
}


// ===== 006f6530  FUN_006f6530 =====

void FUN_006f6530(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_006f8e80(param_3,param_2,param_1,0);
  return;
}


// ===== 006f6548  FUN_006f6548 =====

void FUN_006f6548(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_006f91d8(param_3,param_2,param_1,0);
  return;
}


// ===== 006f6560  FUN_006f6560 =====

void FUN_006f6560(undefined8 param_1,byte *param_2,undefined8 param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  long lVar5;
  
  pbVar4 = param_2 + 1;
  bVar2 = *param_2;
  uVar3 = (uint)bVar2;
  if ((char)bVar2 < '\0') {
    uVar3 = ((uint)bVar2 + (uint)*pbVar4 * 0x80) - 0x80;
    if ((char)*pbVar4 < '\0') {
      uVar3 = (uVar3 + (uint)param_2[2] * 0x4000) - 0x4000;
      if ((char)param_2[2] < '\0') {
        uVar3 = (uVar3 + (uint)param_2[3] * 0x200000) - 0x200000;
        if ((char)param_2[3] < '\0') {
          if (param_2[4] < 8) {
            uVar1 = uVar3 + (uint)param_2[4] * 0x10000000 + 0xf0000000;
            pbVar4 = (byte *)0x0;
            if (uVar1 < 0x7ffffff0) {
              pbVar4 = param_2 + 5;
            }
            uVar3 = 0;
            if (uVar1 < 0x7ffffff0) {
              uVar3 = uVar1;
            }
          }
          else {
            pbVar4 = (byte *)0x0;
            uVar3 = 0;
          }
          goto LAB_006f659c;
        }
        lVar5 = 3;
      }
      else {
        lVar5 = 2;
      }
    }
    else {
      lVar5 = 1;
    }
    pbVar4 = param_2 + lVar5 + 1;
  }
LAB_006f659c:
  FUN_006f9728(param_3,pbVar4,uVar3,param_1);
  return;
}


// ===== 006f661c  FUN_006f661c =====

void FUN_006f661c(undefined8 param_1,byte *param_2,undefined8 param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  long lVar5;
  
  pbVar4 = param_2 + 1;
  bVar2 = *param_2;
  uVar3 = (uint)bVar2;
  if ((char)bVar2 < '\0') {
    uVar3 = ((uint)bVar2 + (uint)*pbVar4 * 0x80) - 0x80;
    if ((char)*pbVar4 < '\0') {
      uVar3 = (uVar3 + (uint)param_2[2] * 0x4000) - 0x4000;
      if ((char)param_2[2] < '\0') {
        uVar3 = (uVar3 + (uint)param_2[3] * 0x200000) - 0x200000;
        if ((char)param_2[3] < '\0') {
          if (param_2[4] < 8) {
            uVar1 = uVar3 + (uint)param_2[4] * 0x10000000 + 0xf0000000;
            pbVar4 = (byte *)0x0;
            if (uVar1 < 0x7ffffff0) {
              pbVar4 = param_2 + 5;
            }
            uVar3 = 0;
            if (uVar1 < 0x7ffffff0) {
              uVar3 = uVar1;
            }
          }
          else {
            pbVar4 = (byte *)0x0;
            uVar3 = 0;
          }
          goto LAB_006f6658;
        }
        lVar5 = 3;
      }
      else {
        lVar5 = 2;
      }
    }
    else {
      lVar5 = 1;
    }
    pbVar4 = param_2 + lVar5 + 1;
  }
LAB_006f6658:
  FUN_006f9a24(param_3,pbVar4,uVar3,param_1);
  return;
}


// ===== 006f66d8  FUN_006f66d8 =====

void FUN_006f66d8(undefined8 param_1,byte *param_2,undefined8 param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  long lVar5;
  
  pbVar4 = param_2 + 1;
  bVar2 = *param_2;
  uVar3 = (uint)bVar2;
  if ((char)bVar2 < '\0') {
    uVar3 = ((uint)bVar2 + (uint)*pbVar4 * 0x80) - 0x80;
    if ((char)*pbVar4 < '\0') {
      uVar3 = (uVar3 + (uint)param_2[2] * 0x4000) - 0x4000;
      if ((char)param_2[2] < '\0') {
        uVar3 = (uVar3 + (uint)param_2[3] * 0x200000) - 0x200000;
        if ((char)param_2[3] < '\0') {
          if (param_2[4] < 8) {
            uVar1 = uVar3 + (uint)param_2[4] * 0x10000000 + 0xf0000000;
            pbVar4 = (byte *)0x0;
            if (uVar1 < 0x7ffffff0) {
              pbVar4 = param_2 + 5;
            }
            uVar3 = 0;
            if (uVar1 < 0x7ffffff0) {
              uVar3 = uVar1;
            }
          }
          else {
            pbVar4 = (byte *)0x0;
            uVar3 = 0;
          }
          goto LAB_006f6714;
        }
        lVar5 = 3;
      }
      else {
        lVar5 = 2;
      }
    }
    else {
      lVar5 = 1;
    }
    pbVar4 = param_2 + lVar5 + 1;
  }
LAB_006f6714:
  FUN_006f9cf4(param_3,pbVar4,uVar3,param_1);
  return;
}


// ===== 006f6794  FUN_006f6794 =====

void FUN_006f6794(undefined8 param_1,byte *param_2,undefined8 param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  long lVar5;
  
  pbVar4 = param_2 + 1;
  bVar2 = *param_2;
  uVar3 = (uint)bVar2;
  if ((char)bVar2 < '\0') {
    uVar3 = ((uint)bVar2 + (uint)*pbVar4 * 0x80) - 0x80;
    if ((char)*pbVar4 < '\0') {
      uVar3 = (uVar3 + (uint)param_2[2] * 0x4000) - 0x4000;
      if ((char)param_2[2] < '\0') {
        uVar3 = (uVar3 + (uint)param_2[3] * 0x200000) - 0x200000;
        if ((char)param_2[3] < '\0') {
          if (param_2[4] < 8) {
            uVar1 = uVar3 + (uint)param_2[4] * 0x10000000 + 0xf0000000;
            pbVar4 = (byte *)0x0;
            if (uVar1 < 0x7ffffff0) {
              pbVar4 = param_2 + 5;
            }
            uVar3 = 0;
            if (uVar1 < 0x7ffffff0) {
              uVar3 = uVar1;
            }
          }
          else {
            pbVar4 = (byte *)0x0;
            uVar3 = 0;
          }
          goto LAB_006f67d0;
        }
        lVar5 = 3;
      }
      else {
        lVar5 = 2;
      }
    }
    else {
      lVar5 = 1;
    }
    pbVar4 = param_2 + lVar5 + 1;
  }
LAB_006f67d0:
  FUN_006f9fc4(param_3,pbVar4,uVar3,param_1);
  return;
}


// ===== 006f6850  FUN_006f6850 =====

void FUN_006f6850(undefined8 param_1,byte *param_2,undefined8 param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  long lVar5;
  
  pbVar4 = param_2 + 1;
  bVar2 = *param_2;
  uVar3 = (uint)bVar2;
  if ((char)bVar2 < '\0') {
    uVar3 = ((uint)bVar2 + (uint)*pbVar4 * 0x80) - 0x80;
    if ((char)*pbVar4 < '\0') {
      uVar3 = (uVar3 + (uint)param_2[2] * 0x4000) - 0x4000;
      if ((char)param_2[2] < '\0') {
        uVar3 = (uVar3 + (uint)param_2[3] * 0x200000) - 0x200000;
        if ((char)param_2[3] < '\0') {
          if (param_2[4] < 8) {
            uVar1 = uVar3 + (uint)param_2[4] * 0x10000000 + 0xf0000000;
            pbVar4 = (byte *)0x0;
            if (uVar1 < 0x7ffffff0) {
              pbVar4 = param_2 + 5;
            }
            uVar3 = 0;
            if (uVar1 < 0x7ffffff0) {
              uVar3 = uVar1;
            }
          }
          else {
            pbVar4 = (byte *)0x0;
            uVar3 = 0;
          }
          goto LAB_006f688c;
        }
        lVar5 = 3;
      }
      else {
        lVar5 = 2;
      }
    }
    else {
      lVar5 = 1;
    }
    pbVar4 = param_2 + lVar5 + 1;
  }
LAB_006f688c:
  FUN_006fa294(param_3,pbVar4,uVar3,param_1);
  return;
}


// ===== 006f690c  FUN_006f690c =====

void FUN_006f690c(undefined8 param_1,byte *param_2,undefined8 param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  long lVar5;
  
  pbVar4 = param_2 + 1;
  bVar2 = *param_2;
  uVar3 = (uint)bVar2;
  if ((char)bVar2 < '\0') {
    uVar3 = ((uint)bVar2 + (uint)*pbVar4 * 0x80) - 0x80;
    if ((char)*pbVar4 < '\0') {
      uVar3 = (uVar3 + (uint)param_2[2] * 0x4000) - 0x4000;
      if ((char)param_2[2] < '\0') {
        uVar3 = (uVar3 + (uint)param_2[3] * 0x200000) - 0x200000;
        if ((char)param_2[3] < '\0') {
          if (param_2[4] < 8) {
            uVar1 = uVar3 + (uint)param_2[4] * 0x10000000 + 0xf0000000;
            pbVar4 = (byte *)0x0;
            if (uVar1 < 0x7ffffff0) {
              pbVar4 = param_2 + 5;
            }
            uVar3 = 0;
            if (uVar1 < 0x7ffffff0) {
              uVar3 = uVar1;
            }
          }
          else {
            pbVar4 = (byte *)0x0;
            uVar3 = 0;
          }
          goto LAB_006f6948;
        }
        lVar5 = 3;
      }
      else {
        lVar5 = 2;
      }
    }
    else {
      lVar5 = 1;
    }
    pbVar4 = param_2 + lVar5 + 1;
  }
LAB_006f6948:
  FUN_006fa74c(param_3,pbVar4,uVar3,param_1);
  return;
}


// ===== 006f69c8  FUN_006f69c8 =====

byte * FUN_006f69c8(undefined8 param_1,byte *param_2,undefined8 *param_3)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  while( true ) {
    if ((byte *)*param_3 <= param_2) {
      iVar1 = (int)param_2 - *(int *)(param_3 + 1);
      if (*(int *)((long)param_3 + 0x1c) == iVar1) {
        if (iVar1 < 1) {
          return param_2;
        }
        if (param_3[2] != 0) {
          return param_2;
        }
        return (byte *)0x0;
      }
      auVar5 = FUN_006f5260(param_3,iVar1,*(undefined4 *)((long)param_3 + 0x5c));
      param_2 = auVar5._0_8_;
      if ((auVar5 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
        return param_2;
      }
    }
    pbVar2 = param_2 + 1;
    uVar3 = (uint)*param_2;
    if ((char)*param_2 < '\0') {
      pbVar2 = param_2 + 2;
      uVar3 = (uVar3 + (uint)param_2[1] * 0x80) - 0x80;
      if ((char)param_2[1] < '\0') {
        uVar3 = (uVar3 + (uint)*pbVar2 * 0x4000) - 0x4000;
        if ((char)*pbVar2 < '\0') {
          uVar3 = (uVar3 + (uint)param_2[3] * 0x200000) - 0x200000;
          if ((char)param_2[3] < '\0') {
            if ((char)param_2[4] < 0) {
              return (byte *)0x0;
            }
            lVar4 = 4;
            uVar3 = uVar3 + (char)param_2[4] * 0x10000000 + 0xf0000000;
          }
          else {
            lVar4 = 3;
          }
        }
        else {
          lVar4 = 2;
        }
        pbVar2 = param_2 + lVar4 + 1;
      }
    }
    if (pbVar2 == (byte *)0x0) break;
    if ((uVar3 == 0) || ((uVar3 & 7) == 4)) {
      *(uint *)(param_3 + 10) = uVar3 - 1;
      return pbVar2;
    }
    param_2 = (byte *)FUN_006f6b44(uVar3,param_1,pbVar2,param_3);
    if (param_2 == (byte *)0x0) {
      return (byte *)0x0;
    }
  }
  return (byte *)0x0;
}


// ===== 006f6b14  FUN_006f6b14 =====

void FUN_006f6b14(undefined4 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_2;
  FUN_006f6b44(param_1,&local_18);
  return;
}


// ===== 006f6b44  FUN_006f6b44 =====

ulong * FUN_006f6b44(ulong param_1,undefined8 *param_2,ulong *param_3)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong *puVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  ulong local_68 [2];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if ((int)(param_1 >> 3) == 0) {
    puVar9 = (ulong *)0x0;
    goto LAB_006f713c;
  }
  uVar5 = param_1 & 7;
  puVar9 = (ulong *)0x0;
  if (uVar5 < 3) {
    if (uVar5 == 0) {
      uVar5 = *param_3;
      if (((uint)uVar5 >> 7 & 1) == 0) {
        puVar9 = (ulong *)((long)param_3 + 1);
        uVar5 = uVar5 & 0x7f;
      }
      else if (((uint)uVar5 >> 0xf & 1) == 0) {
        puVar9 = (ulong *)((long)param_3 + 2);
        uVar5 = uVar5 & 0x7f | (uVar5 >> 8 & 0x7f) << 7;
      }
      else {
        puVar9 = (ulong *)FUN_006f75a8(param_3,local_68,uVar5);
        uVar5 = local_68[0];
      }
      local_68[0] = uVar5;
      if ((puVar9 == (ulong *)0x0) || (plVar10 = (long *)*param_2, plVar10 == (long *)0x0))
      goto LAB_006f713c;
      param_1 = param_1 & 0xfffffff8;
      uVar6 = param_1;
      if (0x7f < param_1) {
        do {
          bVar1 = *(byte *)((long)plVar10 + 0x17);
          if ((char)bVar1 < '\0') {
            uVar12 = plVar10[1];
            uVar11 = (plVar10[2] & 0x7fffffffffffffffU) - 1;
            if (uVar12 == uVar11) goto LAB_006f6d58;
LAB_006f6d7c:
            plVar10[1] = uVar12 + 1;
            plVar8 = (long *)*plVar10;
          }
          else {
            if (bVar1 == 0x16) {
              uVar11 = 0x16;
LAB_006f6d58:
              uVar12 = uVar11;
              FUN_0054774c(plVar10,uVar12,1,uVar12,uVar12,0,0);
              goto LAB_006f6d7c;
            }
            uVar12 = (ulong)bVar1;
            *(byte *)((long)plVar10 + 0x17) = bVar1 + 1 & 0x7f;
            plVar8 = plVar10;
          }
          param_1 = uVar6 >> 7;
          uVar11 = uVar6 >> 0xe;
          ((byte *)((long)plVar8 + uVar12))[1] = 0;
          *(byte *)((long)plVar8 + uVar12) = (byte)uVar6 | 0x80;
          uVar6 = param_1;
        } while (uVar11 != 0);
      }
      bVar1 = *(byte *)((long)plVar10 + 0x17);
      if ((char)bVar1 < '\0') {
        uVar6 = plVar10[1];
        uVar12 = (plVar10[2] & 0x7fffffffffffffffU) - 1;
        if (uVar6 == uVar12) goto LAB_006f6fbc;
LAB_006f6fe0:
        plVar10[1] = uVar6 + 1;
        plVar10 = (long *)*plVar10;
      }
      else {
        if (bVar1 == 0x16) {
          uVar12 = 0x16;
LAB_006f6fbc:
          uVar6 = uVar12;
          FUN_0054774c(plVar10,uVar6,1,uVar6,uVar6,0,0);
          goto LAB_006f6fe0;
        }
        uVar6 = (ulong)bVar1;
        *(byte *)((long)plVar10 + 0x17) = bVar1 + 1 & 0x7f;
      }
      *(undefined1 *)((long)plVar10 + uVar6) = (char)param_1;
      ((undefined1 *)((long)plVar10 + uVar6))[1] = 0;
      plVar10 = (long *)*param_2;
      uVar6 = uVar5;
      if (0x7f < uVar5) {
        do {
          bVar1 = *(byte *)((long)plVar10 + 0x17);
          if ((char)bVar1 < '\0') {
            uVar12 = plVar10[1];
            uVar5 = (plVar10[2] & 0x7fffffffffffffffU) - 1;
            if (uVar12 == uVar5) goto LAB_006f70a0;
LAB_006f70c4:
            plVar10[1] = uVar12 + 1;
            plVar8 = (long *)*plVar10;
          }
          else {
            if (bVar1 == 0x16) {
              uVar5 = 0x16;
LAB_006f70a0:
              uVar12 = uVar5;
              FUN_0054774c(plVar10,uVar12,1,uVar12,uVar12,0,0);
              goto LAB_006f70c4;
            }
            uVar12 = (ulong)bVar1;
            *(byte *)((long)plVar10 + 0x17) = bVar1 + 1 & 0x7f;
            plVar8 = plVar10;
          }
          uVar5 = uVar6 >> 7;
          uVar11 = uVar6 >> 0xe;
          ((byte *)((long)plVar8 + uVar12))[1] = 0;
          *(byte *)((long)plVar8 + uVar12) = (byte)uVar6 | 0x80;
          uVar6 = uVar5;
        } while (uVar11 != 0);
      }
      bVar1 = *(byte *)((long)plVar10 + 0x17);
      if ((char)bVar1 < '\0') {
        uVar6 = plVar10[1];
        uVar12 = (plVar10[2] & 0x7fffffffffffffffU) - 1;
        if (uVar6 == uVar12) goto LAB_006f70e8;
LAB_006f710c:
        plVar10[1] = uVar6 + 1;
        plVar10 = (long *)*plVar10;
      }
      else {
        if (bVar1 == 0x16) {
          uVar12 = 0x16;
LAB_006f70e8:
          uVar6 = uVar12;
          FUN_0054774c(plVar10,uVar6,1,uVar6,uVar6,0,0);
          goto LAB_006f710c;
        }
        uVar6 = (ulong)bVar1;
        *(byte *)((long)plVar10 + 0x17) = bVar1 + 1 & 0x7f;
      }
      *(undefined1 *)((long)plVar10 + uVar6) = (char)uVar5;
      ((undefined1 *)((long)plVar10 + uVar6))[1] = 0;
      goto LAB_006f713c;
    }
    if (uVar5 != 1) {
      if (uVar5 == 2) {
        puVar9 = (ulong *)FUN_006fac04(param_2);
      }
      goto LAB_006f713c;
    }
    plVar10 = (long *)*param_2;
    puVar9 = param_3 + 1;
    uVar5 = *param_3;
    if (plVar10 == (long *)0x0) goto LAB_006f713c;
    uVar12 = param_1 & 0xfffffff8 | 1;
    uVar6 = uVar12;
    if (0x7f < (param_1 & 0xfffffff8)) {
      do {
        bVar1 = *(byte *)((long)plVar10 + 0x17);
        if ((char)bVar1 < '\0') {
          uVar11 = plVar10[1];
          uVar12 = (plVar10[2] & 0x7fffffffffffffffU) - 1;
          if (uVar11 == uVar12) goto LAB_006f6e40;
LAB_006f6e64:
          plVar10[1] = uVar11 + 1;
          plVar8 = (long *)*plVar10;
        }
        else {
          if (bVar1 == 0x16) {
            uVar12 = 0x16;
LAB_006f6e40:
            uVar11 = uVar12;
            FUN_0054774c(plVar10,uVar11,1,uVar11,uVar11,0,0);
            goto LAB_006f6e64;
          }
          uVar11 = (ulong)bVar1;
          *(byte *)((long)plVar10 + 0x17) = bVar1 + 1 & 0x7f;
          plVar8 = plVar10;
        }
        uVar12 = uVar6 >> 7;
        uVar7 = uVar6 >> 0xe;
        ((byte *)((long)plVar8 + uVar11))[1] = 0;
        *(byte *)((long)plVar8 + uVar11) = (byte)uVar6 | 0x80;
        uVar6 = uVar12;
      } while (uVar7 != 0);
    }
    bVar1 = *(byte *)((long)plVar10 + 0x17);
    if ((char)bVar1 < '\0') {
      uVar6 = plVar10[1];
      uVar11 = (plVar10[2] & 0x7fffffffffffffffU) - 1;
      if (uVar6 == uVar11) goto LAB_006f6ec0;
LAB_006f6ee4:
      plVar10[1] = uVar6 + 1;
      plVar10 = (long *)*plVar10;
    }
    else {
      if (bVar1 == 0x16) {
        uVar11 = 0x16;
LAB_006f6ec0:
        uVar6 = uVar11;
        FUN_0054774c(plVar10,uVar6,1,uVar6,uVar6,0,0);
        goto LAB_006f6ee4;
      }
      uVar6 = (ulong)bVar1;
      *(byte *)((long)plVar10 + 0x17) = bVar1 + 1 & 0x7f;
    }
    uVar4 = 8;
    *(undefined1 *)((long)plVar10 + uVar6) = (char)uVar12;
    ((undefined1 *)((long)plVar10 + uVar6))[1] = 0;
    uVar3 = *param_2;
    local_68[0] = uVar5;
  }
  else {
    if (uVar5 == 3) {
      puVar9 = (ulong *)FUN_006fb05c(param_2);
      goto LAB_006f713c;
    }
    if (uVar5 != 5) {
      if (uVar5 == 4) {
        FUN_006de990(local_68,"../../third_party/protobuf/src/google/protobuf/parse_context.h",0x600
                    );
        FUN_006fb378(local_68,"Can\'t happen");
        FUN_006de39c();
                    /* WARNING: Subroutine does not return */
        FUN_006dea94(local_68);
      }
      goto LAB_006f713c;
    }
    plVar10 = (long *)*param_2;
    puVar9 = (ulong *)((long)param_3 + 4);
    uVar5 = *param_3;
    if (plVar10 == (long *)0x0) goto LAB_006f713c;
    uVar12 = param_1 & 0xfffffff8 | 5;
    uVar6 = uVar12;
    if (0x7f < (param_1 & 0xfffffff8)) {
      do {
        bVar1 = *(byte *)((long)plVar10 + 0x17);
        if ((char)bVar1 < '\0') {
          uVar11 = plVar10[1];
          uVar12 = (plVar10[2] & 0x7fffffffffffffffU) - 1;
          if (uVar11 == uVar12) goto LAB_006f6c70;
LAB_006f6c94:
          plVar10[1] = uVar11 + 1;
          plVar8 = (long *)*plVar10;
        }
        else {
          if (bVar1 == 0x16) {
            uVar12 = 0x16;
LAB_006f6c70:
            uVar11 = uVar12;
            FUN_0054774c(plVar10,uVar11,1,uVar11,uVar11,0,0);
            goto LAB_006f6c94;
          }
          uVar11 = (ulong)bVar1;
          *(byte *)((long)plVar10 + 0x17) = bVar1 + 1 & 0x7f;
          plVar8 = plVar10;
        }
        uVar12 = uVar6 >> 7;
        uVar7 = uVar6 >> 0xe;
        ((byte *)((long)plVar8 + uVar11))[1] = 0;
        *(byte *)((long)plVar8 + uVar11) = (byte)uVar6 | 0x80;
        uVar6 = uVar12;
      } while (uVar7 != 0);
    }
    bVar1 = *(byte *)((long)plVar10 + 0x17);
    if ((char)bVar1 < '\0') {
      uVar6 = plVar10[1];
      uVar11 = (plVar10[2] & 0x7fffffffffffffffU) - 1;
      if (uVar6 == uVar11) goto LAB_006f6f0c;
LAB_006f6f30:
      plVar10[1] = uVar6 + 1;
      plVar10 = (long *)*plVar10;
    }
    else {
      if (bVar1 == 0x16) {
        uVar11 = 0x16;
LAB_006f6f0c:
        uVar6 = uVar11;
        FUN_0054774c(plVar10,uVar6,1,uVar6,uVar6,0,0);
        goto LAB_006f6f30;
      }
      uVar6 = (ulong)bVar1;
      *(byte *)((long)plVar10 + 0x17) = bVar1 + 1 & 0x7f;
    }
    uVar4 = 4;
    *(undefined1 *)((long)plVar10 + uVar6) = (char)uVar12;
    ((undefined1 *)((long)plVar10 + uVar6))[1] = 0;
    uVar3 = *param_2;
    local_68[0] = CONCAT44(local_68[0]._4_4_,(int)uVar5);
  }
  FUN_00547cac(uVar3,local_68,uVar4);
LAB_006f713c:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar9;
}


// ===== 006f71b4  FUN_006f71b4 =====

undefined8
FUN_006f71b4(undefined8 param_1,undefined8 param_2,uint param_3,ulong *param_4,long param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  undefined8 local_70;
  undefined8 *puStack_68;
  uint *local_60;
  uint local_54;
  undefined8 local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  ulong *puStack_38;
  ulong local_18;
  
  local_40 = (undefined1 *)&local_70;
  local_48 = (undefined1 *)&local_70;
  puStack_68 = &local_50;
  local_60 = &local_54;
  local_18 = (ulong)(int)param_3;
  puStack_38 = &local_18;
  uVar6 = *param_4;
  local_70 = param_1;
  local_54 = param_3;
  local_50 = param_2;
  if ((uVar6 & 3) == 0) {
    local_48 = (undefined1 *)&local_70;
    local_40 = (undefined1 *)&local_70;
    if (7 < param_3) {
LAB_006f7274:
      local_48 = (undefined1 *)&local_70;
      puVar1 = &local_70;
      local_40 = (undefined1 *)&local_70;
      puVar2 = &local_70;
      if (7 < local_18) goto LAB_006f727c;
LAB_006f72c4:
      *param_4 = *param_4 & 0xffffffffffffff00;
    }
    lVar9 = FUN_006fb550(&local_40,(long)param_4 + 1);
    *param_4 = *param_4 & 0xffffffffffffff00 | lVar9 << 2;
  }
  else {
    if (((uint)uVar6 >> 1 & 1) == 0) {
      if ((uVar6 & 1) != 0) {
        uVar8 = *(uint *)(uVar6 + 0xb);
        uVar7 = (ulong)uVar8;
        lVar9 = uVar6 - 1;
        if (2 < uVar8) {
          uVar8 = 3;
        }
        puVar1 = &local_70;
        puVar2 = &local_70;
        if (uVar8 == 2) goto LAB_006f7340;
        if ((uVar8 == 3) && (local_18 <= uVar7)) {
          local_48 = (undefined1 *)&local_70;
          local_40 = (undefined1 *)&local_70;
          uVar4 = FUN_006fb550(&local_40,uVar6 + 0xf);
          *(undefined4 *)(uVar6 + 7) = uVar4;
          return local_50;
        }
      }
LAB_006f7270:
      if (param_5 != 0) goto LAB_006f7274;
      FUN_006fc80c(param_4);
      puVar1 = (undefined8 *)local_48;
      puVar2 = (undefined8 *)local_40;
      if (local_18 < 8) goto LAB_006f72c4;
LAB_006f727c:
      local_40 = (undefined1 *)puVar2;
      local_48 = (undefined1 *)puVar1;
      if (0xfe < local_18) {
        if (local_18 < 0x2faf081) {
          lVar9 = FUN_006fcb98(param_4,local_18,param_5);
          uVar4 = FUN_006fb550(&local_40,lVar9 + 0x10);
          *(undefined4 *)(lVar9 + 8) = uVar4;
          return local_50;
        }
        lVar9 = FUN_006fcc04(param_4,param_5);
        puVar1 = (undefined8 *)local_48;
        puVar2 = (undefined8 *)local_40;
LAB_006f7340:
        local_40 = (undefined1 *)puVar2;
        local_48 = (undefined1 *)puVar1;
        FUN_006fb3d4(&local_48,lVar9);
        return local_50;
      }
      puVar5 = (undefined1 *)FUN_006fcb10(param_4,local_18,param_5);
    }
    else {
      if (*(byte *)(uVar6 - 1) < local_18) goto LAB_006f7270;
      puVar5 = (undefined1 *)(uVar6 - 2);
      local_48 = (undefined1 *)&local_70;
      local_40 = (undefined1 *)&local_70;
    }
    uVar3 = FUN_006fb550(&local_40,puVar5 + 2);
    *puVar5 = uVar3;
  }
  return local_50;
}


// ===== 006f7360  FUN_006f7360 =====

undefined4 FUN_006f7360(byte *param_1,byte *param_2,int param_3)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  long lVar4;
  undefined1 *local_18;
  
  if (param_2 <= param_1) {
    return 0;
  }
  do {
    pbVar1 = param_1 + 1;
    uVar2 = (uint)*param_1;
    if ((char)*param_1 < '\0') {
      pbVar1 = param_1 + 2;
      uVar2 = (uVar2 + (uint)param_1[1] * 0x80) - 0x80;
      if ((char)param_1[1] < '\0') {
        uVar2 = (uVar2 + (uint)*pbVar1 * 0x4000) - 0x4000;
        if ((char)*pbVar1 < '\0') {
          uVar2 = (uVar2 + (uint)param_1[3] * 0x200000) - 0x200000;
          if ((char)param_1[3] < '\0') {
            if ((char)param_1[4] < 0) {
              return 0;
            }
            lVar4 = 4;
            uVar2 = uVar2 + (char)param_1[4] * 0x10000000 + 0xf0000000;
          }
          else {
            lVar4 = 3;
          }
        }
        else {
          lVar4 = 2;
        }
        pbVar1 = param_1 + lVar4 + 1;
      }
    }
    if (pbVar1 == (byte *)0x0) {
      return 0;
    }
    if (param_2 < pbVar1) {
      return 0;
    }
    if (uVar2 == 0) {
      return 1;
    }
    uVar2 = uVar2 & 7;
    if (uVar2 < 3) {
      if (uVar2 == 0) {
        local_18 = &DAT_aaaaaaaaaaaaaaaa;
        uVar2 = (uint)*(undefined8 *)pbVar1;
        if ((uVar2 >> 7 & 1) == 0) {
          pbVar1 = pbVar1 + 1;
        }
        else if ((uVar2 >> 0xf & 1) == 0) {
          pbVar1 = pbVar1 + 2;
        }
        else {
          pbVar1 = (byte *)FUN_006f75a8(pbVar1,&local_18,*(undefined8 *)pbVar1);
        }
        if (pbVar1 == (byte *)0x0) {
          return 0;
        }
      }
      else if (uVar2 == 1) {
        pbVar1 = pbVar1 + 8;
      }
      else {
        if (uVar2 != 2) {
          return 0;
        }
        pbVar3 = pbVar1 + 1;
        uVar2 = (uint)*pbVar1;
        if ((char)*pbVar1 < '\0') {
          uVar2 = (uVar2 + (uint)*pbVar3 * 0x80) - 0x80;
          if ((char)*pbVar3 < '\0') {
            uVar2 = (uVar2 + (uint)pbVar1[2] * 0x4000) - 0x4000;
            if ((char)pbVar1[2] < '\0') {
              uVar2 = (uVar2 + (uint)pbVar1[3] * 0x200000) - 0x200000;
              if ((char)pbVar1[3] < '\0') {
                if (7 < pbVar1[4]) {
                  return 0;
                }
                uVar2 = uVar2 + (uint)pbVar1[4] * 0x10000000 + 0xf0000000;
                if (0x7fffffef < uVar2) {
                  return 0;
                }
                pbVar3 = pbVar1 + 5;
                goto joined_r0x006f757c;
              }
              lVar4 = 3;
            }
            else {
              lVar4 = 2;
            }
          }
          else {
            lVar4 = 1;
          }
          pbVar3 = pbVar1 + lVar4 + 1;
        }
joined_r0x006f757c:
        if (pbVar3 == (byte *)0x0) {
          return 0;
        }
        if ((long)param_2 - (long)pbVar3 < (long)(int)uVar2) {
          return 0;
        }
        pbVar1 = pbVar3 + (int)uVar2;
      }
    }
    else if (uVar2 == 3) {
      param_3 = param_3 + 1;
    }
    else if (uVar2 == 4) {
      param_3 = param_3 + -1;
      if (param_3 < 0) {
        return 1;
      }
    }
    else {
      if (uVar2 != 5) {
        return 0;
      }
      pbVar1 = pbVar1 + 4;
    }
    param_1 = pbVar1;
    if (param_2 <= pbVar1) {
      return 0;
    }
  } while( true );
}


// ===== 006f75a8  FUN_006f75a8 =====

long FUN_006f75a8(long param_1,ulong *param_2,ulong param_3)

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


// ===== 006f7648  FUN_006f7648 =====

void FUN_006f7648(long *param_1,byte *param_2,undefined8 param_3)

{
  byte *pbVar1;
  uint uVar2;
  long lVar3;
  code *pcVar4;
  byte *pbVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined2 local_68;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  pbVar5 = param_2 + 1;
  uVar9 = (uint)*param_2;
  if ((char)*param_2 < '\0') {
    uVar9 = (uVar9 + (uint)*pbVar5 * 0x80) - 0x80;
    if ((char)*pbVar5 < '\0') {
      uVar9 = (uVar9 + (uint)param_2[2] * 0x4000) - 0x4000;
      if ((char)param_2[2] < '\0') {
        uVar9 = (uVar9 + (uint)param_2[3] * 0x200000) - 0x200000;
        if ((char)param_2[3] < '\0') {
          if ((7 < param_2[4]) ||
             (uVar9 = uVar9 + (uint)param_2[4] * 0x10000000 + 0xf0000000, 0x7fffffef < uVar9)) {
LAB_006f7864:
            pbVar5 = (byte *)0x0;
            goto LAB_006f7758;
          }
          pbVar5 = param_2 + 5;
          if (pbVar5 == (byte *)0x0) {
            pbVar5 = (byte *)0x0;
            goto LAB_006f7758;
          }
          goto LAB_006f76b8;
        }
        lVar7 = 3;
      }
      else {
        lVar7 = 2;
      }
    }
    else {
      lVar7 = 1;
    }
    pbVar5 = param_2 + lVar7 + 1;
    if (pbVar5 == (byte *)0x0) goto LAB_006f7758;
  }
  else if (pbVar5 == (byte *)0x0) {
    pbVar5 = (byte *)0x0;
    goto LAB_006f7758;
  }
LAB_006f76b8:
  lVar7 = param_1[1];
  iVar10 = (int)lVar7 - (int)pbVar5;
  if (iVar10 < (int)uVar9) {
    do {
      pbVar5 = (byte *)FUN_006f786c(pbVar5,lVar7,param_3);
      if (pbVar5 == (byte *)0x0) goto LAB_006f7758;
      puVar8 = (undefined8 *)param_1[1];
      uVar2 = uVar9 - iVar10;
      iVar11 = (int)pbVar5 - (int)puVar8;
      if ((int)uVar2 < 0x11) {
        local_68 = 0;
        local_70 = 0;
        uStack_78 = puVar8[1];
        local_80 = *puVar8;
        if ((0x1a < uVar2) || (0x1a < (ulong)(long)iVar11)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(0x5512,0x6f7818);
          (*pcVar4)();
        }
        lVar7 = (long)&local_80 + (ulong)uVar2;
        lVar6 = FUN_006f786c((long)&local_80 + (long)iVar11,lVar7,param_3);
        pbVar5 = (byte *)0x0;
        if ((lVar6 != 0) && (lVar6 == lVar7)) {
          pbVar5 = (byte *)(param_1[1] + (ulong)uVar2);
        }
        goto LAB_006f7758;
      }
      if (*(int *)((long)param_1 + 0x1c) < 0x11) goto LAB_006f7864;
      lVar6 = FUN_006f5318(param_1,0,0xffffffff);
      lVar7 = param_1[1];
      if (lVar6 == 0) {
        *param_1 = lVar7;
        *(undefined4 *)(param_1 + 10) = 1;
        pbVar5 = (byte *)0x0;
        goto LAB_006f7758;
      }
      pbVar5 = (byte *)(lVar6 + iVar11);
      uVar2 = *(int *)((long)param_1 + 0x1c) + ((int)lVar6 - (int)lVar7);
      uVar9 = (uVar9 - iVar10) - iVar11;
      iVar10 = (int)lVar7 - (int)pbVar5;
      *(uint *)((long)param_1 + 0x1c) = uVar2;
      *param_1 = lVar7 + (int)(uVar2 & (int)uVar2 >> 0x1f);
    } while (iVar10 < (int)uVar9);
  }
  pbVar1 = pbVar5 + (int)uVar9;
  pbVar5 = (byte *)FUN_006f786c(pbVar5,pbVar1,param_3);
  if (pbVar1 != pbVar5) {
    pbVar5 = (byte *)0x0;
  }
LAB_006f7758:
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pbVar5);
  }
  return;
}


// ===== 006f786c  FUN_006f786c =====

ulong * FUN_006f786c(ulong *param_1,ulong *param_2,ulong *param_3)

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
          param_1 = (ulong *)FUN_006f75a8(param_1,&local_38);
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
LAB_006f7940:
          iVar5 = iVar3 + 1;
          FUN_006f7998(param_3,(uVar4 & 4) == 0,iVar3,iVar5);
          uVar4 = *param_3;
          iVar3 = (int)param_3[1];
          goto LAB_006f790c;
        }
        *(int *)((long)(param_3 + 1) + (uVar4 & 3) * 4) = (int)local_38;
        *param_3 = uVar4 & 0xfffffffffffffff8 | (ulong)(uVar1 + 1);
        if (param_2 <= param_1) {
          return param_1;
        }
      }
      iVar3 = (int)param_3[1];
      if (iVar3 == *(int *)((long)param_3 + 0xc)) goto LAB_006f7940;
      iVar5 = iVar3 + 1;
LAB_006f790c:
      *(int *)(param_3 + 1) = iVar5;
      *(int *)((uVar4 & 0xfffffffffffffff8) + (long)iVar3 * 4) = iVar2;
    } while (param_1 < param_2);
  }
  return param_1;
}


// ===== 006f7998  FUN_006f7998 =====

void FUN_006f7998(void)

{
  FUN_006f79a0();
  return;
}


// ===== 006f79a0  FUN_006f79a0 =====

void FUN_006f79a0(ulong *param_1,ulong param_2,uint param_3,uint param_4)

{
  ulong *puVar1;
  long lVar2;
  ulong *__src;
  size_t __n;
  uint uVar3;
  ulong uVar4;
  undefined8 *__dest;
  ulong uVar5;
  long *plVar6;
  byte *pbVar7;
  
  if ((param_2 & 1) == 0) {
    uVar3 = *(uint *)((long)param_1 + 0xc);
  }
  else {
    uVar3 = 2;
  }
  uVar5 = *param_1 & 0xfffffffffffffff8;
  if (((uint)*param_1 >> 2 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 - 8);
  }
  if ((int)param_4 < 2) {
    uVar3 = 2;
    lVar2 = 8;
  }
  else if ((int)uVar3 < 0x3ffffffc) {
    uVar3 = uVar3 * 2 + 2;
    if ((int)uVar3 <= (int)param_4) {
      uVar3 = param_4;
    }
    lVar2 = (ulong)uVar3 << 2;
  }
  else {
    uVar3 = 0x7fffffff;
    lVar2 = 0x1fffffffc;
  }
  if (uVar5 == 0) {
    puVar1 = (ulong *)operator_new(lVar2 + 8);
  }
  else {
    puVar1 = (ulong *)FUN_006fdcd0(uVar5,lVar2 + 0xfU & 0x3fffffff8);
  }
  *puVar1 = uVar5;
  if (0 < (int)param_3) {
    if ((param_2 & 1) == 0) {
      __src = (ulong *)(*param_1 & 0xfffffffffffffff8);
    }
    else {
      __src = param_1 + 1;
    }
    memcpy(puVar1 + 1,__src,(ulong)param_3 << 2);
  }
  if ((param_2 & 1) == 0) {
    __dest = (undefined8 *)((*param_1 & 0xfffffffffffffff8) - 8);
    plVar6 = (long *)*__dest;
    uVar5 = (long)(int)*(uint *)((long)param_1 + 0xc) * 4 + 8;
    if (plVar6 == (long *)0x0) {
      operator_delete(__dest);
    }
    else {
      lVar2 = __emutls_get_address(&DAT_00d5a2a0);
      if (*(long *)(lVar2 + 8) == *plVar6) {
        pbVar7 = *(byte **)(lVar2 + 0x10);
        uVar4 = 0x3b - LZCOUNT(uVar5);
        if (uVar4 < *pbVar7) {
          lVar2 = *(long *)(pbVar7 + 0x30);
          *__dest = *(undefined8 *)(lVar2 + uVar4 * 8);
          *(undefined8 **)(lVar2 + uVar4 * 8) = __dest;
        }
        else {
          uVar4 = uVar5 >> 3;
          memmove(__dest,*(void **)(pbVar7 + 0x30),(ulong)*pbVar7 << 3);
          __n = (uVar5 & 0xfffffffffffffff8) + (ulong)*pbVar7 * -8;
          if (0 < (long)__n) {
            memset(__dest + *pbVar7,0,__n);
          }
          *(undefined8 **)(pbVar7 + 0x30) = __dest;
          if (0x3f < uVar4) {
            uVar4 = 0x40;
          }
          *pbVar7 = (byte)uVar4;
        }
      }
    }
  }
  else {
    *(uint *)(param_1 + 1) = (uint)*param_1 & 3;
  }
  *(uint *)((long)param_1 + 0xc) = uVar3;
  *param_1 = (ulong)(puVar1 + 1) | 4;
  return;
}


// ===== 006f7b80  FUN_006f7b80 =====

void FUN_006f7b80(long *param_1,byte *param_2,undefined8 param_3)

{
  byte *pbVar1;
  uint uVar2;
  long lVar3;
  code *pcVar4;
  byte *pbVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined2 local_68;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  pbVar5 = param_2 + 1;
  uVar9 = (uint)*param_2;
  if ((char)*param_2 < '\0') {
    uVar9 = (uVar9 + (uint)*pbVar5 * 0x80) - 0x80;
    if ((char)*pbVar5 < '\0') {
      uVar9 = (uVar9 + (uint)param_2[2] * 0x4000) - 0x4000;
      if ((char)param_2[2] < '\0') {
        uVar9 = (uVar9 + (uint)param_2[3] * 0x200000) - 0x200000;
        if ((char)param_2[3] < '\0') {
          if ((7 < param_2[4]) ||
             (uVar9 = uVar9 + (uint)param_2[4] * 0x10000000 + 0xf0000000, 0x7fffffef < uVar9)) {
LAB_006f7d9c:
            pbVar5 = (byte *)0x0;
            goto LAB_006f7c90;
          }
          pbVar5 = param_2 + 5;
          if (pbVar5 == (byte *)0x0) {
            pbVar5 = (byte *)0x0;
            goto LAB_006f7c90;
          }
          goto LAB_006f7bf0;
        }
        lVar7 = 3;
      }
      else {
        lVar7 = 2;
      }
    }
    else {
      lVar7 = 1;
    }
    pbVar5 = param_2 + lVar7 + 1;
    if (pbVar5 == (byte *)0x0) goto LAB_006f7c90;
  }
  else if (pbVar5 == (byte *)0x0) {
    pbVar5 = (byte *)0x0;
    goto LAB_006f7c90;
  }
LAB_006f7bf0:
  lVar7 = param_1[1];
  iVar10 = (int)lVar7 - (int)pbVar5;
  if (iVar10 < (int)uVar9) {
    do {
      pbVar5 = (byte *)FUN_006f7da4(pbVar5,lVar7,param_3);
      if (pbVar5 == (byte *)0x0) goto LAB_006f7c90;
      puVar8 = (undefined8 *)param_1[1];
      uVar2 = uVar9 - iVar10;
      iVar11 = (int)pbVar5 - (int)puVar8;
      if ((int)uVar2 < 0x11) {
        local_68 = 0;
        local_70 = 0;
        uStack_78 = puVar8[1];
        local_80 = *puVar8;
        if ((0x1a < uVar2) || (0x1a < (ulong)(long)iVar11)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(0x5512,0x6f7d50);
          (*pcVar4)();
        }
        lVar7 = (long)&local_80 + (ulong)uVar2;
        lVar6 = FUN_006f7da4((long)&local_80 + (long)iVar11,lVar7,param_3);
        pbVar5 = (byte *)0x0;
        if ((lVar6 != 0) && (lVar6 == lVar7)) {
          pbVar5 = (byte *)(param_1[1] + (ulong)uVar2);
        }
        goto LAB_006f7c90;
      }
      if (*(int *)((long)param_1 + 0x1c) < 0x11) goto LAB_006f7d9c;
      lVar6 = FUN_006f5318(param_1,0,0xffffffff);
      lVar7 = param_1[1];
      if (lVar6 == 0) {
        *param_1 = lVar7;
        *(undefined4 *)(param_1 + 10) = 1;
        pbVar5 = (byte *)0x0;
        goto LAB_006f7c90;
      }
      pbVar5 = (byte *)(lVar6 + iVar11);
      uVar2 = *(int *)((long)param_1 + 0x1c) + ((int)lVar6 - (int)lVar7);
      uVar9 = (uVar9 - iVar10) - iVar11;
      iVar10 = (int)lVar7 - (int)pbVar5;
      *(uint *)((long)param_1 + 0x1c) = uVar2;
      *param_1 = lVar7 + (int)(uVar2 & (int)uVar2 >> 0x1f);
    } while (iVar10 < (int)uVar9);
  }
  pbVar1 = pbVar5 + (int)uVar9;
  pbVar5 = (byte *)FUN_006f7da4(pbVar5,pbVar1,param_3);
  if (pbVar1 != pbVar5) {
    pbVar5 = (byte *)0x0;
  }
LAB_006f7c90:
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pbVar5);
  }
  return;
}


// ===== 006f7da4  FUN_006f7da4 =====

ulong * FUN_006f7da4(ulong *param_1,ulong *param_2,ulong *param_3)

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
          param_1 = (ulong *)FUN_006f75a8(param_1,&local_38);
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
LAB_006f7e78:
          iVar5 = iVar3 + 1;
          FUN_006f7ed0(param_3,(uVar4 & 4) == 0,iVar3,iVar5);
          uVar4 = *param_3;
          iVar3 = (int)param_3[1];
          goto LAB_006f7e44;
        }
        *(int *)((long)(param_3 + 1) + (uVar4 & 3) * 4) = (int)local_38;
        *param_3 = uVar4 & 0xfffffffffffffff8 | (ulong)(uVar1 + 1);
        if (param_2 <= param_1) {
          return param_1;
        }
      }
      iVar3 = (int)param_3[1];
      if (iVar3 == *(int *)((long)param_3 + 0xc)) goto LAB_006f7e78;
      iVar5 = iVar3 + 1;
LAB_006f7e44:
      *(int *)(param_3 + 1) = iVar5;
      *(int *)((uVar4 & 0xfffffffffffffff8) + (long)iVar3 * 4) = iVar2;
    } while (param_1 < param_2);
  }
  return param_1;
}


// ===== 006f7ed0  FUN_006f7ed0 =====

void FUN_006f7ed0(void)

{
  FUN_006f7ed8();
  return;
}


// ===== 006f7ed8  FUN_006f7ed8 =====

void FUN_006f7ed8(ulong *param_1,ulong param_2,uint param_3,uint param_4)

{
  ulong *puVar1;
  long lVar2;
  ulong *__src;
  size_t __n;
  uint uVar3;
  ulong uVar4;
  undefined8 *__dest;
  ulong uVar5;
  long *plVar6;
  byte *pbVar7;
  
  if ((param_2 & 1) == 0) {
    uVar3 = *(uint *)((long)param_1 + 0xc);
  }
  else {
    uVar3 = 2;
  }
  uVar5 = *param_1 & 0xfffffffffffffff8;
  if (((uint)*param_1 >> 2 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 - 8);
  }
  if ((int)param_4 < 2) {
    uVar3 = 2;
    lVar2 = 8;
  }
  else if ((int)uVar3 < 0x3ffffffc) {
    uVar3 = uVar3 * 2 + 2;
    if ((int)uVar3 <= (int)param_4) {
      uVar3 = param_4;
    }
    lVar2 = (ulong)uVar3 << 2;
  }
  else {
    uVar3 = 0x7fffffff;
    lVar2 = 0x1fffffffc;
  }
  if (uVar5 == 0) {
    puVar1 = (ulong *)operator_new(lVar2 + 8);
  }
  else {
    puVar1 = (ulong *)FUN_006fdcd0(uVar5,lVar2 + 0xfU & 0x3fffffff8);
  }
  *puVar1 = uVar5;
  if (0 < (int)param_3) {
    if ((param_2 & 1) == 0) {
      __src = (ulong *)(*param_1 & 0xfffffffffffffff8);
    }
    else {
      __src = param_1 + 1;
    }
    memcpy(puVar1 + 1,__src,(ulong)param_3 << 2);
  }
  if ((param_2 & 1) == 0) {
    __dest = (undefined8 *)((*param_1 & 0xfffffffffffffff8) - 8);
    plVar6 = (long *)*__dest;
    uVar5 = (long)(int)*(uint *)((long)param_1 + 0xc) * 4 + 8;
    if (plVar6 == (long *)0x0) {
      operator_delete(__dest);
    }
    else {
      lVar2 = __emutls_get_address(&DAT_00d5a2a0);
      if (*(long *)(lVar2 + 8) == *plVar6) {
        pbVar7 = *(byte **)(lVar2 + 0x10);
        uVar4 = 0x3b - LZCOUNT(uVar5);
        if (uVar4 < *pbVar7) {
          lVar2 = *(long *)(pbVar7 + 0x30);
          *__dest = *(undefined8 *)(lVar2 + uVar4 * 8);
          *(undefined8 **)(lVar2 + uVar4 * 8) = __dest;
        }
        else {
          uVar4 = uVar5 >> 3;
          memmove(__dest,*(void **)(pbVar7 + 0x30),(ulong)*pbVar7 << 3);
          __n = (uVar5 & 0xfffffffffffffff8) + (ulong)*pbVar7 * -8;
          if (0 < (long)__n) {
            memset(__dest + *pbVar7,0,__n);
          }
          *(undefined8 **)(pbVar7 + 0x30) = __dest;
          if (0x3f < uVar4) {
            uVar4 = 0x40;
          }
          *pbVar7 = (byte)uVar4;
        }
      }
    }
  }
  else {
    *(uint *)(param_1 + 1) = (uint)*param_1 & 3;
  }
  *(uint *)((long)param_1 + 0xc) = uVar3;
  *param_1 = (ulong)(puVar1 + 1) | 4;
  return;
}


// ===== 006f80b8  FUN_006f80b8 =====

void FUN_006f80b8(long *param_1,byte *param_2,undefined8 param_3)

{
  byte *pbVar1;
  uint uVar2;
  long lVar3;
  code *pcVar4;
  byte *pbVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined2 local_68;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  pbVar5 = param_2 + 1;
  uVar9 = (uint)*param_2;
  if ((char)*param_2 < '\0') {
    uVar9 = (uVar9 + (uint)*pbVar5 * 0x80) - 0x80;
    if ((char)*pbVar5 < '\0') {
      uVar9 = (uVar9 + (uint)param_2[2] * 0x4000) - 0x4000;
      if ((char)param_2[2] < '\0') {
        uVar9 = (uVar9 + (uint)param_2[3] * 0x200000) - 0x200000;
        if ((char)param_2[3] < '\0') {
          if ((7 < param_2[4]) ||
             (uVar9 = uVar9 + (uint)param_2[4] * 0x10000000 + 0xf0000000, 0x7fffffef < uVar9)) {
LAB_006f82d4:
            pbVar5 = (byte *)0x0;
            goto LAB_006f81c8;
          }
          pbVar5 = param_2 + 5;
          if (pbVar5 == (byte *)0x0) {
            pbVar5 = (byte *)0x0;
            goto LAB_006f81c8;
          }
          goto LAB_006f8128;
        }
        lVar7 = 3;
      }
      else {
        lVar7 = 2;
      }
    }
    else {
      lVar7 = 1;
    }
    pbVar5 = param_2 + lVar7 + 1;
    if (pbVar5 == (byte *)0x0) goto LAB_006f81c8;
  }
  else if (pbVar5 == (byte *)0x0) {
    pbVar5 = (byte *)0x0;
    goto LAB_006f81c8;
  }
LAB_006f8128:
  lVar7 = param_1[1];
  iVar10 = (int)lVar7 - (int)pbVar5;
  if (iVar10 < (int)uVar9) {
    do {
      pbVar5 = (byte *)FUN_006f82dc(pbVar5,lVar7,param_3);
      if (pbVar5 == (byte *)0x0) goto LAB_006f81c8;
      puVar8 = (undefined8 *)param_1[1];
      uVar2 = uVar9 - iVar10;
      iVar11 = (int)pbVar5 - (int)puVar8;
      if ((int)uVar2 < 0x11) {
        local_68 = 0;
        local_70 = 0;
        uStack_78 = puVar8[1];
        local_80 = *puVar8;
        if ((0x1a < uVar2) || (0x1a < (ulong)(long)iVar11)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(0x5512,0x6f8288);
          (*pcVar4)();
        }
        lVar7 = (long)&local_80 + (ulong)uVar2;
        lVar6 = FUN_006f82dc((long)&local_80 + (long)iVar11,lVar7,param_3);
        pbVar5 = (byte *)0x0;
        if ((lVar6 != 0) && (lVar6 == lVar7)) {
          pbVar5 = (byte *)(param_1[1] + (ulong)uVar2);
        }
        goto LAB_006f81c8;
      }
      if (*(int *)((long)param_1 + 0x1c) < 0x11) goto LAB_006f82d4;
      lVar6 = FUN_006f5318(param_1,0,0xffffffff);
      lVar7 = param_1[1];
      if (lVar6 == 0) {
        *param_1 = lVar7;
        *(undefined4 *)(param_1 + 10) = 1;
        pbVar5 = (byte *)0x0;
        goto LAB_006f81c8;
      }
      pbVar5 = (byte *)(lVar6 + iVar11);
      uVar2 = *(int *)((long)param_1 + 0x1c) + ((int)lVar6 - (int)lVar7);
      uVar9 = (uVar9 - iVar10) - iVar11;
      iVar10 = (int)lVar7 - (int)pbVar5;
      *(uint *)((long)param_1 + 0x1c) = uVar2;
      *param_1 = lVar7 + (int)(uVar2 & (int)uVar2 >> 0x1f);
    } while (iVar10 < (int)uVar9);
  }
  pbVar1 = pbVar5 + (int)uVar9;
  pbVar5 = (byte *)FUN_006f82dc(pbVar5,pbVar1,param_3);
  if (pbVar1 != pbVar5) {
    pbVar5 = (byte *)0x0;
  }
LAB_006f81c8:
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pbVar5);
  }
  return;
}


// ===== 006f82dc  FUN_006f82dc =====

ulong * FUN_006f82dc(ulong *param_1,ulong *param_2,ulong *param_3)

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
          param_1 = (ulong *)FUN_006f75a8(param_1,&local_38);
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
LAB_006f83b0:
          iVar5 = iVar2 + 1;
          local_38 = puVar4;
          FUN_006f8408(param_3,(uVar3 & 4) == 0,iVar2,iVar5);
          uVar3 = *param_3;
          iVar2 = (int)param_3[1];
          goto LAB_006f837c;
        }
        (param_3 + 1)[uVar3 & 3] = (ulong)puVar4;
        *param_3 = uVar3 & 0xfffffffffffffff8 | (ulong)(uVar1 + 1);
        if (param_2 <= param_1) {
          return param_1;
        }
      }
      iVar2 = (int)param_3[1];
      if (iVar2 == *(int *)((long)param_3 + 0xc)) goto LAB_006f83b0;
      iVar5 = iVar2 + 1;
LAB_006f837c:
      *(int *)(param_3 + 1) = iVar5;
      *(undefined1 **)((uVar3 & 0xfffffffffffffff8) + (long)iVar2 * 8) = puVar4;
    } while (param_1 < param_2);
  }
  return param_1;
}


// ===== 006f8408  FUN_006f8408 =====

void FUN_006f8408(void)

{
  FUN_006f8410();
  return;
}


// ===== 006f8410  FUN_006f8410 =====

void FUN_006f8410(ulong *param_1,ulong param_2,uint param_3,uint param_4)

{
  ulong *puVar1;
  long lVar2;
  ulong *__src;
  size_t __n;
  uint uVar3;
  ulong uVar4;
  undefined8 *__dest;
  ulong uVar5;
  long *plVar6;
  byte *pbVar7;
  
  if ((param_2 & 1) == 0) {
    uVar3 = *(uint *)((long)param_1 + 0xc);
  }
  else {
    uVar3 = 1;
  }
  uVar5 = *param_1 & 0xfffffffffffffff8;
  if (((uint)*param_1 >> 2 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 - 8);
  }
  if ((int)param_4 < 1) {
    param_4 = 1;
    lVar2 = 8;
  }
  else if ((int)uVar3 < 0x3ffffffc) {
    if ((int)param_4 < (int)(uVar3 << 1 | 1)) {
      param_4 = uVar3 * 2 + 1;
    }
    lVar2 = (ulong)param_4 << 3;
  }
  else {
    param_4 = 0x7fffffff;
    lVar2 = 0x3fffffff8;
  }
  if (uVar5 == 0) {
    puVar1 = (ulong *)operator_new(lVar2 + 8);
  }
  else {
    puVar1 = (ulong *)FUN_006fdcd0(uVar5,lVar2 + 0xfU & 0x7fffffff8);
  }
  *puVar1 = uVar5;
  if (0 < (int)param_3) {
    if ((param_2 & 1) == 0) {
      __src = (ulong *)(*param_1 & 0xfffffffffffffff8);
    }
    else {
      __src = param_1 + 1;
    }
    memcpy(puVar1 + 1,__src,(ulong)param_3 << 3);
  }
  if ((param_2 & 1) == 0) {
    __dest = (undefined8 *)((*param_1 & 0xfffffffffffffff8) - 8);
    plVar6 = (long *)*__dest;
    uVar5 = (long)(int)*(uint *)((long)param_1 + 0xc) * 8 + 8;
    if (plVar6 == (long *)0x0) {
      operator_delete(__dest);
    }
    else {
      lVar2 = __emutls_get_address(&DAT_00d5a2a0);
      if (*(long *)(lVar2 + 8) == *plVar6) {
        pbVar7 = *(byte **)(lVar2 + 0x10);
        uVar4 = 0x3b - LZCOUNT(uVar5);
        if (uVar4 < *pbVar7) {
          lVar2 = *(long *)(pbVar7 + 0x30);
          *__dest = *(undefined8 *)(lVar2 + uVar4 * 8);
          *(undefined8 **)(lVar2 + uVar4 * 8) = __dest;
        }
        else {
          uVar4 = uVar5 >> 3;
          memmove(__dest,*(void **)(pbVar7 + 0x30),(ulong)*pbVar7 << 3);
          __n = uVar5 + (ulong)*pbVar7 * -8;
          if (0 < (long)__n) {
            memset(__dest + *pbVar7,0,__n);
          }
          *(undefined8 **)(pbVar7 + 0x30) = __dest;
          if (0x3f < uVar4) {
            uVar4 = 0x40;
          }
          *pbVar7 = (byte)uVar4;
        }
      }
    }
  }
  else {
    *(uint *)(param_1 + 1) = (uint)*param_1 & 3;
  }
  *(uint *)((long)param_1 + 0xc) = param_4;
  *param_1 = (ulong)(puVar1 + 1) | 4;
  return;
}


// ===== 006f85f0  FUN_006f85f0 =====

void FUN_006f85f0(long *param_1,byte *param_2,undefined8 param_3)

{
  byte *pbVar1;
  uint uVar2;
  long lVar3;
  code *pcVar4;
  byte *pbVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined2 local_68;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  pbVar5 = param_2 + 1;
  uVar9 = (uint)*param_2;
  if ((char)*param_2 < '\0') {
    uVar9 = (uVar9 + (uint)*pbVar5 * 0x80) - 0x80;
    if ((char)*pbVar5 < '\0') {
      uVar9 = (uVar9 + (uint)param_2[2] * 0x4000) - 0x4000;
      if ((char)param_2[2] < '\0') {
        uVar9 = (uVar9 + (uint)param_2[3] * 0x200000) - 0x200000;
        if ((char)param_2[3] < '\0') {
          if ((7 < param_2[4]) ||
             (uVar9 = uVar9 + (uint)param_2[4] * 0x10000000 + 0xf0000000, 0x7fffffef < uVar9)) {
LAB_006f880c:
            pbVar5 = (byte *)0x0;
            goto LAB_006f8700;
          }
          pbVar5 = param_2 + 5;
          if (pbVar5 == (byte *)0x0) {
            pbVar5 = (byte *)0x0;
            goto LAB_006f8700;
          }
          goto LAB_006f8660;
        }
        lVar7 = 3;
      }
      else {
        lVar7 = 2;
      }
    }
    else {
      lVar7 = 1;
    }
    pbVar5 = param_2 + lVar7 + 1;
    if (pbVar5 == (byte *)0x0) goto LAB_006f8700;
  }
  else if (pbVar5 == (byte *)0x0) {
    pbVar5 = (byte *)0x0;
    goto LAB_006f8700;
  }
LAB_006f8660:
  lVar7 = param_1[1];
  iVar10 = (int)lVar7 - (int)pbVar5;
  if (iVar10 < (int)uVar9) {
    do {
      pbVar5 = (byte *)FUN_006f8814(pbVar5,lVar7,param_3);
      if (pbVar5 == (byte *)0x0) goto LAB_006f8700;
      puVar8 = (undefined8 *)param_1[1];
      uVar2 = uVar9 - iVar10;
      iVar11 = (int)pbVar5 - (int)puVar8;
      if ((int)uVar2 < 0x11) {
        local_68 = 0;
        local_70 = 0;
        uStack_78 = puVar8[1];
        local_80 = *puVar8;
        if ((0x1a < uVar2) || (0x1a < (ulong)(long)iVar11)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(0x5512,0x6f87c0);
          (*pcVar4)();
        }
        lVar7 = (long)&local_80 + (ulong)uVar2;
        lVar6 = FUN_006f8814((long)&local_80 + (long)iVar11,lVar7,param_3);
        pbVar5 = (byte *)0x0;
        if ((lVar6 != 0) && (lVar6 == lVar7)) {
          pbVar5 = (byte *)(param_1[1] + (ulong)uVar2);
        }
        goto LAB_006f8700;
      }
      if (*(int *)((long)param_1 + 0x1c) < 0x11) goto LAB_006f880c;
      lVar6 = FUN_006f5318(param_1,0,0xffffffff);
      lVar7 = param_1[1];
      if (lVar6 == 0) {
        *param_1 = lVar7;
        *(undefined4 *)(param_1 + 10) = 1;
        pbVar5 = (byte *)0x0;
        goto LAB_006f8700;
      }
      pbVar5 = (byte *)(lVar6 + iVar11);
      uVar2 = *(int *)((long)param_1 + 0x1c) + ((int)lVar6 - (int)lVar7);
      uVar9 = (uVar9 - iVar10) - iVar11;
      iVar10 = (int)lVar7 - (int)pbVar5;
      *(uint *)((long)param_1 + 0x1c) = uVar2;
      *param_1 = lVar7 + (int)(uVar2 & (int)uVar2 >> 0x1f);
    } while (iVar10 < (int)uVar9);
  }
  pbVar1 = pbVar5 + (int)uVar9;
  pbVar5 = (byte *)FUN_006f8814(pbVar5,pbVar1,param_3);
  if (pbVar1 != pbVar5) {
    pbVar5 = (byte *)0x0;
  }
LAB_006f8700:
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pbVar5);
  }
  return;
}


// ===== 006f8814  FUN_006f8814 =====

ulong * FUN_006f8814(ulong *param_1,ulong *param_2,ulong *param_3)

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
          param_1 = (ulong *)FUN_006f75a8(param_1,&local_38);
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
LAB_006f88e8:
          iVar5 = iVar2 + 1;
          local_38 = puVar4;
          FUN_006f8940(param_3,(uVar3 & 4) == 0,iVar2,iVar5);
          uVar3 = *param_3;
          iVar2 = (int)param_3[1];
          goto LAB_006f88b4;
        }
        (param_3 + 1)[uVar3 & 3] = (ulong)puVar4;
        *param_3 = uVar3 & 0xfffffffffffffff8 | (ulong)(uVar1 + 1);
        if (param_2 <= param_1) {
          return param_1;
        }
      }
      iVar2 = (int)param_3[1];
      if (iVar2 == *(int *)((long)param_3 + 0xc)) goto LAB_006f88e8;
      iVar5 = iVar2 + 1;
LAB_006f88b4:
      *(int *)(param_3 + 1) = iVar5;
      *(undefined1 **)((uVar3 & 0xfffffffffffffff8) + (long)iVar2 * 8) = puVar4;
    } while (param_1 < param_2);
  }
  return param_1;
}


// ===== 006f8940  FUN_006f8940 =====

void FUN_006f8940(void)

{
  FUN_006f8948();
  return;
}


// ===== 006f8948  FUN_006f8948 =====

void FUN_006f8948(ulong *param_1,ulong param_2,uint param_3,uint param_4)

{
  ulong *puVar1;
  long lVar2;
  ulong *__src;
  size_t __n;
  uint uVar3;
  ulong uVar4;
  undefined8 *__dest;
  ulong uVar5;
  long *plVar6;
  byte *pbVar7;
  
  if ((param_2 & 1) == 0) {
    uVar3 = *(uint *)((long)param_1 + 0xc);
  }
  else {
    uVar3 = 1;
  }
  uVar5 = *param_1 & 0xfffffffffffffff8;
  if (((uint)*param_1 >> 2 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 - 8);
  }
  if ((int)param_4 < 1) {
    param_4 = 1;
    lVar2 = 8;
  }
  else if ((int)uVar3 < 0x3ffffffc) {
    if ((int)param_4 < (int)(uVar3 << 1 | 1)) {
      param_4 = uVar3 * 2 + 1;
    }
    lVar2 = (ulong)param_4 << 3;
  }
  else {
    param_4 = 0x7fffffff;
    lVar2 = 0x3fffffff8;
  }
  if (uVar5 == 0) {
    puVar1 = (ulong *)operator_new(lVar2 + 8);
  }
  else {
    puVar1 = (ulong *)FUN_006fdcd0(uVar5,lVar2 + 0xfU & 0x7fffffff8);
  }
  *puVar1 = uVar5;
  if (0 < (int)param_3) {
    if ((param_2 & 1) == 0) {
      __src = (ulong *)(*param_1 & 0xfffffffffffffff8);
    }
    else {
      __src = param_1 + 1;
    }
    memcpy(puVar1 + 1,__src,(ulong)param_3 << 3);
  }
  if ((param_2 & 1) == 0) {
    __dest = (undefined8 *)((*param_1 & 0xfffffffffffffff8) - 8);
    plVar6 = (long *)*__dest;
    uVar5 = (long)(int)*(uint *)((long)param_1 + 0xc) * 8 + 8;
    if (plVar6 == (long *)0x0) {
      operator_delete(__dest);
    }
    else {
      lVar2 = __emutls_get_address(&DAT_00d5a2a0);
      if (*(long *)(lVar2 + 8) == *plVar6) {
        pbVar7 = *(byte **)(lVar2 + 0x10);
        uVar4 = 0x3b - LZCOUNT(uVar5);
        if (uVar4 < *pbVar7) {
          lVar2 = *(long *)(pbVar7 + 0x30);
          *__dest = *(undefined8 *)(lVar2 + uVar4 * 8);
          *(undefined8 **)(lVar2 + uVar4 * 8) = __dest;
        }
        else {
          uVar4 = uVar5 >> 3;
          memmove(__dest,*(void **)(pbVar7 + 0x30),(ulong)*pbVar7 << 3);
          __n = uVar5 + (ulong)*pbVar7 * -8;
          if (0 < (long)__n) {
            memset(__dest + *pbVar7,0,__n);
          }
          *(undefined8 **)(pbVar7 + 0x30) = __dest;
          if (0x3f < uVar4) {
            uVar4 = 0x40;
          }
          *pbVar7 = (byte)uVar4;
        }
      }
    }
  }
  else {
    *(uint *)(param_1 + 1) = (uint)*param_1 & 3;
  }
  *(uint *)((long)param_1 + 0xc) = param_4;
  *param_1 = (ulong)(puVar1 + 1) | 4;
  return;
}


// ===== 006f8b28  FUN_006f8b28 =====

void FUN_006f8b28(long *param_1,byte *param_2,undefined8 param_3)

{
  byte *pbVar1;
  uint uVar2;
  long lVar3;
  code *pcVar4;
  byte *pbVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined2 local_68;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  pbVar5 = param_2 + 1;
  uVar9 = (uint)*param_2;
  if ((char)*param_2 < '\0') {
    uVar9 = (uVar9 + (uint)*pbVar5 * 0x80) - 0x80;
    if ((char)*pbVar5 < '\0') {
      uVar9 = (uVar9 + (uint)param_2[2] * 0x4000) - 0x4000;
      if ((char)param_2[2] < '\0') {
        uVar9 = (uVar9 + (uint)param_2[3] * 0x200000) - 0x200000;
        if ((char)param_2[3] < '\0') {
          if ((7 < param_2[4]) ||
             (uVar9 = uVar9 + (uint)param_2[4] * 0x10000000 + 0xf0000000, 0x7fffffef < uVar9)) {
LAB_006f8d44:
            pbVar5 = (byte *)0x0;
            goto LAB_006f8c38;
          }
          pbVar5 = param_2 + 5;
          if (pbVar5 == (byte *)0x0) {
            pbVar5 = (byte *)0x0;
            goto LAB_006f8c38;
          }
          goto LAB_006f8b98;
        }
        lVar7 = 3;
      }
      else {
        lVar7 = 2;
      }
    }
    else {
      lVar7 = 1;
    }
    pbVar5 = param_2 + lVar7 + 1;
    if (pbVar5 == (byte *)0x0) goto LAB_006f8c38;
  }
  else if (pbVar5 == (byte *)0x0) {
    pbVar5 = (byte *)0x0;
    goto LAB_006f8c38;
  }
LAB_006f8b98:
  lVar7 = param_1[1];
  iVar10 = (int)lVar7 - (int)pbVar5;
  if (iVar10 < (int)uVar9) {
    do {
      pbVar5 = (byte *)FUN_006f8d4c(pbVar5,lVar7,param_3);
      if (pbVar5 == (byte *)0x0) goto LAB_006f8c38;
      puVar8 = (undefined8 *)param_1[1];
      uVar2 = uVar9 - iVar10;
      iVar11 = (int)pbVar5 - (int)puVar8;
      if ((int)uVar2 < 0x11) {
        local_68 = 0;
        local_70 = 0;
        uStack_78 = puVar8[1];
        local_80 = *puVar8;
        if ((0x1a < uVar2) || (0x1a < (ulong)(long)iVar11)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(0x5512,0x6f8cf8);
          (*pcVar4)();
        }
        lVar7 = (long)&local_80 + (ulong)uVar2;
        lVar6 = FUN_006f8d4c((long)&local_80 + (long)iVar11,lVar7,param_3);
        pbVar5 = (byte *)0x0;
        if ((lVar6 != 0) && (lVar6 == lVar7)) {
          pbVar5 = (byte *)(param_1[1] + (ulong)uVar2);
        }
        goto LAB_006f8c38;
      }
      if (*(int *)((long)param_1 + 0x1c) < 0x11) goto LAB_006f8d44;
      lVar6 = FUN_006f5318(param_1,0,0xffffffff);
      lVar7 = param_1[1];
      if (lVar6 == 0) {
        *param_1 = lVar7;
        *(undefined4 *)(param_1 + 10) = 1;
        pbVar5 = (byte *)0x0;
        goto LAB_006f8c38;
      }
      pbVar5 = (byte *)(lVar6 + iVar11);
      uVar2 = *(int *)((long)param_1 + 0x1c) + ((int)lVar6 - (int)lVar7);
      uVar9 = (uVar9 - iVar10) - iVar11;
      iVar10 = (int)lVar7 - (int)pbVar5;
      *(uint *)((long)param_1 + 0x1c) = uVar2;
      *param_1 = lVar7 + (int)(uVar2 & (int)uVar2 >> 0x1f);
    } while (iVar10 < (int)uVar9);
  }
  pbVar1 = pbVar5 + (int)uVar9;
  pbVar5 = (byte *)FUN_006f8d4c(pbVar5,pbVar1,param_3);
  if (pbVar1 != pbVar5) {
    pbVar5 = (byte *)0x0;
  }
LAB_006f8c38:
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pbVar5);
  }
  return;
}


// ===== 006f8d4c  FUN_006f8d4c =====

ulong * FUN_006f8d4c(ulong *param_1,ulong *param_2,ulong *param_3)

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
          param_1 = (ulong *)FUN_006f75a8(param_1,&local_38);
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
LAB_006f8e28:
          iVar5 = iVar3 + 1;
          FUN_006f7998(param_3,(uVar4 & 4) == 0,iVar3,iVar5);
          uVar4 = *param_3;
          iVar3 = (int)param_3[1];
          goto LAB_006f8df4;
        }
        *(uint *)((long)(param_3 + 1) + (uVar4 & 3) * 4) = uVar2;
        *param_3 = uVar4 & 0xfffffffffffffff8 | (ulong)(uVar1 + 1);
        if (param_2 <= param_1) {
          return param_1;
        }
      }
      iVar3 = (int)param_3[1];
      if (iVar3 == *(int *)((long)param_3 + 0xc)) goto LAB_006f8e28;
      iVar5 = iVar3 + 1;
LAB_006f8df4:
      *(int *)(param_3 + 1) = iVar5;
      *(uint *)((uVar4 & 0xfffffffffffffff8) + (long)iVar3 * 4) = uVar2;
    } while (param_1 < param_2);
  }
  return param_1;
}


// ===== 006f8e80  FUN_006f8e80 =====

void FUN_006f8e80(long *param_1,byte *param_2,undefined8 param_3)

{
  byte *pbVar1;
  uint uVar2;
  long lVar3;
  code *pcVar4;
  byte *pbVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined2 local_68;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  pbVar5 = param_2 + 1;
  uVar9 = (uint)*param_2;
  if ((char)*param_2 < '\0') {
    uVar9 = (uVar9 + (uint)*pbVar5 * 0x80) - 0x80;
    if ((char)*pbVar5 < '\0') {
      uVar9 = (uVar9 + (uint)param_2[2] * 0x4000) - 0x4000;
      if ((char)param_2[2] < '\0') {
        uVar9 = (uVar9 + (uint)param_2[3] * 0x200000) - 0x200000;
        if ((char)param_2[3] < '\0') {
          if ((7 < param_2[4]) ||
             (uVar9 = uVar9 + (uint)param_2[4] * 0x10000000 + 0xf0000000, 0x7fffffef < uVar9)) {
LAB_006f909c:
            pbVar5 = (byte *)0x0;
            goto LAB_006f8f90;
          }
          pbVar5 = param_2 + 5;
          if (pbVar5 == (byte *)0x0) {
            pbVar5 = (byte *)0x0;
            goto LAB_006f8f90;
          }
          goto LAB_006f8ef0;
        }
        lVar7 = 3;
      }
      else {
        lVar7 = 2;
      }
    }
    else {
      lVar7 = 1;
    }
    pbVar5 = param_2 + lVar7 + 1;
    if (pbVar5 == (byte *)0x0) goto LAB_006f8f90;
  }
  else if (pbVar5 == (byte *)0x0) {
    pbVar5 = (byte *)0x0;
    goto LAB_006f8f90;
  }
LAB_006f8ef0:
  lVar7 = param_1[1];
  iVar10 = (int)lVar7 - (int)pbVar5;
  if (iVar10 < (int)uVar9) {
    do {
      pbVar5 = (byte *)FUN_006f90a4(pbVar5,lVar7,param_3);
      if (pbVar5 == (byte *)0x0) goto LAB_006f8f90;
      puVar8 = (undefined8 *)param_1[1];
      uVar2 = uVar9 - iVar10;
      iVar11 = (int)pbVar5 - (int)puVar8;
      if ((int)uVar2 < 0x11) {
        local_68 = 0;
        local_70 = 0;
        uStack_78 = puVar8[1];
        local_80 = *puVar8;
        if ((0x1a < uVar2) || (0x1a < (ulong)(long)iVar11)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(0x5512,0x6f9050);
          (*pcVar4)();
        }
        lVar7 = (long)&local_80 + (ulong)uVar2;
        lVar6 = FUN_006f90a4((long)&local_80 + (long)iVar11,lVar7,param_3);
        pbVar5 = (byte *)0x0;
        if ((lVar6 != 0) && (lVar6 == lVar7)) {
          pbVar5 = (byte *)(param_1[1] + (ulong)uVar2);
        }
        goto LAB_006f8f90;
      }
      if (*(int *)((long)param_1 + 0x1c) < 0x11) goto LAB_006f909c;
      lVar6 = FUN_006f5318(param_1,0,0xffffffff);
      lVar7 = param_1[1];
      if (lVar6 == 0) {
        *param_1 = lVar7;
        *(undefined4 *)(param_1 + 10) = 1;
        pbVar5 = (byte *)0x0;
        goto LAB_006f8f90;
      }
      pbVar5 = (byte *)(lVar6 + iVar11);
      uVar2 = *(int *)((long)param_1 + 0x1c) + ((int)lVar6 - (int)lVar7);
      uVar9 = (uVar9 - iVar10) - iVar11;
      iVar10 = (int)lVar7 - (int)pbVar5;
      *(uint *)((long)param_1 + 0x1c) = uVar2;
      *param_1 = lVar7 + (int)(uVar2 & (int)uVar2 >> 0x1f);
    } while (iVar10 < (int)uVar9);
  }
  pbVar1 = pbVar5 + (int)uVar9;
  pbVar5 = (byte *)FUN_006f90a4(pbVar5,pbVar1,param_3);
  if (pbVar1 != pbVar5) {
    pbVar5 = (byte *)0x0;
  }
LAB_006f8f90:
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pbVar5);
  }
  return;
}


// ===== 006f90a4  FUN_006f90a4 =====

ulong * FUN_006f90a4(ulong *param_1,ulong *param_2,ulong *param_3)

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
          param_1 = (ulong *)FUN_006f75a8(param_1,&local_38);
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
LAB_006f9180:
          iVar4 = iVar2 + 1;
          FUN_006f8408(param_3,(uVar3 & 4) == 0,iVar2,iVar4);
          uVar3 = *param_3;
          iVar2 = (int)param_3[1];
          goto LAB_006f914c;
        }
        (param_3 + 1)[uVar3 & 3] = uVar5;
        *param_3 = uVar3 & 0xfffffffffffffff8 | (ulong)(uVar1 + 1);
        if (param_2 <= param_1) {
          return param_1;
        }
      }
      iVar2 = (int)param_3[1];
      if (iVar2 == *(int *)((long)param_3 + 0xc)) goto LAB_006f9180;
      iVar4 = iVar2 + 1;
LAB_006f914c:
      *(int *)(param_3 + 1) = iVar4;
      *(ulong *)((uVar3 & 0xfffffffffffffff8) + (long)iVar2 * 8) = uVar5;
    } while (param_1 < param_2);
  }
  return param_1;
}


// ===== 006f91d8  FUN_006f91d8 =====

void FUN_006f91d8(long *param_1,byte *param_2,undefined8 param_3)

{
  byte *pbVar1;
  uint uVar2;
  long lVar3;
  code *pcVar4;
  byte *pbVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined2 local_68;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  pbVar5 = param_2 + 1;
  uVar9 = (uint)*param_2;
  if ((char)*param_2 < '\0') {
    uVar9 = (uVar9 + (uint)*pbVar5 * 0x80) - 0x80;
    if ((char)*pbVar5 < '\0') {
      uVar9 = (uVar9 + (uint)param_2[2] * 0x4000) - 0x4000;
      if ((char)param_2[2] < '\0') {
        uVar9 = (uVar9 + (uint)param_2[3] * 0x200000) - 0x200000;
        if ((char)param_2[3] < '\0') {
          if ((7 < param_2[4]) ||
             (uVar9 = uVar9 + (uint)param_2[4] * 0x10000000 + 0xf0000000, 0x7fffffef < uVar9)) {
LAB_006f93f4:
            pbVar5 = (byte *)0x0;
            goto LAB_006f92e8;
          }
          pbVar5 = param_2 + 5;
          if (pbVar5 == (byte *)0x0) {
            pbVar5 = (byte *)0x0;
            goto LAB_006f92e8;
          }
          goto LAB_006f9248;
        }
        lVar7 = 3;
      }
      else {
        lVar7 = 2;
      }
    }
    else {
      lVar7 = 1;
    }
    pbVar5 = param_2 + lVar7 + 1;
    if (pbVar5 == (byte *)0x0) goto LAB_006f92e8;
  }
  else if (pbVar5 == (byte *)0x0) {
    pbVar5 = (byte *)0x0;
    goto LAB_006f92e8;
  }
LAB_006f9248:
  lVar7 = param_1[1];
  iVar10 = (int)lVar7 - (int)pbVar5;
  if (iVar10 < (int)uVar9) {
    do {
      pbVar5 = (byte *)FUN_006f93fc(pbVar5,lVar7,param_3);
      if (pbVar5 == (byte *)0x0) goto LAB_006f92e8;
      puVar8 = (undefined8 *)param_1[1];
      uVar2 = uVar9 - iVar10;
      iVar11 = (int)pbVar5 - (int)puVar8;
      if ((int)uVar2 < 0x11) {
        local_68 = 0;
        local_70 = 0;
        uStack_78 = puVar8[1];
        local_80 = *puVar8;
        if ((0x1a < uVar2) || (0x1a < (ulong)(long)iVar11)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(0x5512,0x6f93a8);
          (*pcVar4)();
        }
        lVar7 = (long)&local_80 + (ulong)uVar2;
        lVar6 = FUN_006f93fc((long)&local_80 + (long)iVar11,lVar7,param_3);
        pbVar5 = (byte *)0x0;
        if ((lVar6 != 0) && (lVar6 == lVar7)) {
          pbVar5 = (byte *)(param_1[1] + (ulong)uVar2);
        }
        goto LAB_006f92e8;
      }
      if (*(int *)((long)param_1 + 0x1c) < 0x11) goto LAB_006f93f4;
      lVar6 = FUN_006f5318(param_1,0,0xffffffff);
      lVar7 = param_1[1];
      if (lVar6 == 0) {
        *param_1 = lVar7;
        *(undefined4 *)(param_1 + 10) = 1;
        pbVar5 = (byte *)0x0;
        goto LAB_006f92e8;
      }
      pbVar5 = (byte *)(lVar6 + iVar11);
      uVar2 = *(int *)((long)param_1 + 0x1c) + ((int)lVar6 - (int)lVar7);
      uVar9 = (uVar9 - iVar10) - iVar11;
      iVar10 = (int)lVar7 - (int)pbVar5;
      *(uint *)((long)param_1 + 0x1c) = uVar2;
      *param_1 = lVar7 + (int)(uVar2 & (int)uVar2 >> 0x1f);
    } while (iVar10 < (int)uVar9);
  }
  pbVar1 = pbVar5 + (int)uVar9;
  pbVar5 = (byte *)FUN_006f93fc(pbVar5,pbVar1,param_3);
  if (pbVar1 != pbVar5) {
    pbVar5 = (byte *)0x0;
  }
LAB_006f92e8:
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pbVar5);
  }
  return;
}


// ===== 006f93fc  FUN_006f93fc =====

ulong * FUN_006f93fc(ulong *param_1,ulong *param_2,ulong *param_3)

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
          param_1 = (ulong *)FUN_006f75a8(param_1,&local_38);
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
LAB_006f94e0:
          iVar5 = iVar2 + 1;
          local_38 = puVar4;
          FUN_006f9538(param_3,(uVar3 & 4) == 0,iVar2,iVar5);
          uVar3 = *param_3;
          iVar2 = (int)param_3[1];
          goto LAB_006f94a4;
        }
        *param_3 = uVar3 & 0xfffffffffffffff8 | (ulong)(uVar1 + 1);
        *(bool *)((long)(param_3 + 1) + (uVar3 & 3)) = puVar4 != (undefined1 *)0x0;
        if (param_2 <= param_1) {
          return param_1;
        }
      }
      iVar2 = (int)param_3[1];
      if (iVar2 == *(int *)((long)param_3 + 0xc)) goto LAB_006f94e0;
      iVar5 = iVar2 + 1;
LAB_006f94a4:
      *(int *)(param_3 + 1) = iVar5;
      *(bool *)((uVar3 & 0xfffffffffffffff8) + (long)iVar2) = puVar4 != (undefined1 *)0x0;
    } while (param_1 < param_2);
  }
  return param_1;
}


// ===== 006f9538  FUN_006f9538 =====

void FUN_006f9538(void)

{
  FUN_006f9540();
  return;
}


// ===== 006f9540  FUN_006f9540 =====

void FUN_006f9540(ulong *param_1,ulong param_2,uint param_3,uint param_4)

{
  ulong *puVar1;
  long lVar2;
  ulong *__src;
  size_t __n;
  uint uVar3;
  ulong uVar4;
  undefined8 *__dest;
  ulong uVar5;
  long *plVar6;
  byte *pbVar7;
  uint uVar8;
  
  if ((param_2 & 1) == 0) {
    uVar3 = *(uint *)((long)param_1 + 0xc);
  }
  else {
    uVar3 = 3;
  }
  uVar5 = *param_1 & 0xfffffffffffffff8;
  if (((uint)*param_1 >> 2 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 - 8);
  }
  if ((int)param_4 < 8) {
    uVar8 = 8;
    uVar4 = 8;
  }
  else if ((int)uVar3 < 0x3ffffffc) {
    uVar8 = 8;
    if (7 < (int)uVar3) {
      uVar8 = uVar3 * 2 + 8;
    }
    if ((int)uVar8 <= (int)param_4) {
      uVar8 = param_4;
    }
    uVar4 = (ulong)uVar8;
  }
  else {
    uVar8 = 0x7fffffff;
    uVar4 = 0x7fffffff;
  }
  if (uVar5 == 0) {
    puVar1 = (ulong *)operator_new(uVar4 + 8);
  }
  else {
    puVar1 = (ulong *)FUN_006fdcd0(uVar5,(int)uVar4 + 0xfU & 0xfffffff8);
  }
  *puVar1 = uVar5;
  if (0 < (int)param_3) {
    if ((param_2 & 1) == 0) {
      __src = (ulong *)(*param_1 & 0xfffffffffffffff8);
    }
    else {
      __src = param_1 + 1;
    }
    memcpy(puVar1 + 1,__src,(ulong)param_3);
  }
  if ((param_2 & 1) == 0) {
    __dest = (undefined8 *)((*param_1 & 0xfffffffffffffff8) - 8);
    plVar6 = (long *)*__dest;
    uVar5 = (long)(int)*(uint *)((long)param_1 + 0xc) + 8;
    if (plVar6 == (long *)0x0) {
      operator_delete(__dest);
    }
    else {
      lVar2 = __emutls_get_address(&DAT_00d5a2a0);
      if (*(long *)(lVar2 + 8) == *plVar6) {
        pbVar7 = *(byte **)(lVar2 + 0x10);
        uVar4 = 0x3b - LZCOUNT(uVar5);
        if (uVar4 < *pbVar7) {
          lVar2 = *(long *)(pbVar7 + 0x30);
          *__dest = *(undefined8 *)(lVar2 + uVar4 * 8);
          *(undefined8 **)(lVar2 + uVar4 * 8) = __dest;
        }
        else {
          uVar4 = uVar5 >> 3;
          memmove(__dest,*(void **)(pbVar7 + 0x30),(ulong)*pbVar7 << 3);
          __n = (uVar5 & 0xfffffffffffffff8) + (ulong)*pbVar7 * -8;
          if (0 < (long)__n) {
            memset(__dest + *pbVar7,0,__n);
          }
          *(undefined8 **)(pbVar7 + 0x30) = __dest;
          if (0x3f < uVar4) {
            uVar4 = 0x40;
          }
          *pbVar7 = (byte)uVar4;
        }
      }
    }
  }
  else {
    *(uint *)(param_1 + 1) = (uint)*param_1 & 3;
  }
  *(uint *)((long)param_1 + 0xc) = uVar8;
  *param_1 = (ulong)(puVar1 + 1) | 4;
  return;
}


// ===== 006f9728  FUN_006f9728 =====

void * FUN_006f9728(long *param_1,void *param_2,uint param_3,ulong *param_4)

{
  void *__dest;
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong *puVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_58 [16];
  ulong *local_48;
  
  if (param_2 == (void *)0x0) {
    return (void *)0x0;
  }
  uVar6 = (param_1[1] - (long)param_2) + 0x10;
  local_48 = param_4;
  if ((int)uVar6 < (int)param_3) {
    do {
      uVar4 = *param_4;
      iVar1 = (int)(uint)uVar6 >> 2;
      if (((uint)uVar4 >> 2 & 1) == 0) {
        if (2 < (int)(((uint)uVar4 & 3) + iVar1)) {
LAB_006f978c:
          FUN_006f7ed0(param_4,(uVar4 & 4) == 0);
          uVar4 = *param_4;
        }
      }
      else if (*(int *)((long)param_4 + 0xc) < (int)param_4[1] + iVar1) goto LAB_006f978c;
      if (((uint)uVar4 >> 2 & 1) == 0) {
        uVar8 = (uint)uVar4 & 3;
        *param_4 = uVar4 & 0xfffffffffffffff8 | (long)(int)(uVar8 + iVar1);
        puVar7 = param_4 + 1;
      }
      else {
        uVar8 = (uint)param_4[1];
        puVar7 = (ulong *)(uVar4 & 0xfffffffffffffff8);
        *(uint *)(param_4 + 1) = uVar8 + iVar1;
      }
      uVar9 = (uint)uVar6 & 0xfffffffc;
      memcpy((void *)((long)puVar7 + (long)(int)uVar8 * 4),param_2,(long)(int)uVar9);
      if (*(int *)((long)param_1 + 0x1c) < 0x11) {
        return (void *)0x0;
      }
      lVar2 = FUN_006f5318(param_1,0,0xffffffff);
      lVar5 = param_1[1];
      if (lVar2 == 0) {
        *param_1 = lVar5;
        *(undefined4 *)(param_1 + 10) = 1;
        return (void *)0x0;
      }
      param_3 = param_3 - uVar9;
      uVar8 = *(int *)((long)param_1 + 0x1c) + ((int)lVar2 - (int)lVar5);
      param_2 = (void *)((lVar2 - (uVar6 & 3)) + 0x10);
      *(uint *)((long)param_1 + 0x1c) = uVar8;
      uVar6 = (lVar5 - (long)param_2) + 0x10;
      *param_1 = lVar5 + (int)(uVar8 & (int)uVar8 >> 0x1f);
    } while ((int)uVar6 < (int)param_3);
  }
  iVar1 = (int)param_3 >> 2;
  uVar8 = param_3 & 0xfffffffc;
  if (iVar1 == 0) {
    if (param_3 != uVar8) {
      return (void *)0x0;
    }
    return param_2;
  }
  uVar6 = *param_4;
  if (((uint)uVar6 >> 2 & 1) == 0) {
    if ((int)(((uint)uVar6 & 3) + iVar1) < 3) goto LAB_006f98bc;
  }
  else if ((int)param_4[1] + iVar1 <= *(int *)((long)param_4 + 0xc)) goto LAB_006f98bc;
  FUN_006f7ed0(param_4,(uVar6 & 4) == 0);
  uVar6 = *param_4;
LAB_006f98bc:
  if (((uint)uVar6 >> 2 & 1) == 0) {
    uVar9 = (uint)uVar6 & 3;
    puVar7 = param_4 + 1;
    *param_4 = uVar6 & 0xfffffffffffffff8 | (long)(int)(uVar9 + iVar1);
  }
  else {
    uVar9 = (uint)param_4[1];
    puVar7 = (ulong *)(uVar6 & 0xfffffffffffffff8);
    *(uint *)(param_4 + 1) = uVar9 + iVar1;
  }
  __dest = (void *)((long)puVar7 + (long)(int)uVar9 * 4);
  if (__dest == (void *)0x0) {
    FUN_006de99c(auStack_58,"../../third_party/protobuf/src/google/protobuf/parse_context.h",0x543,
                 "dst != nullptr");
    uVar3 = FUN_006f9988(auStack_58,&local_48);
    uVar3 = FUN_006dcb58(uVar3,&DAT_001ea264);
    FUN_006f99f8(uVar3,iVar1);
    FUN_006de39c();
                    /* WARNING: Subroutine does not return */
    FUN_006dea94(auStack_58);
  }
  memcpy(__dest,param_2,(long)(int)uVar8);
  param_2 = (void *)((long)param_2 + (long)(int)uVar8);
  if (param_3 != uVar8) {
    param_2 = (void *)0x0;
  }
  return param_2;
}


// ===== 006f9988  FUN_006f9988 =====

long FUN_006f9988(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_006de5e0(&local_a0,*(undefined8 *)(param_1 + 8));
  uVar1 = FUN_006dd76c(&local_a0);
  FUN_0054c7e8(uVar1,*param_2);
  FUN_006de6ec(&local_a0);
  return param_1;
}


// ===== 006f99f8  FUN_006f99f8 =====

void FUN_006f99f8(undefined8 param_1,undefined4 param_2)

{
  undefined4 local_14;
  
  local_14 = param_2;
  FUN_006dd77c(param_1,&local_14);
  return;
}


// ===== 006f9a24  FUN_006f9a24 =====

void * FUN_006f9a24(long *param_1,void *param_2,uint param_3,ulong *param_4)

{
  void *__dest;
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong *puVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_58 [16];
  ulong *local_48;
  
  if (param_2 == (void *)0x0) {
    return (void *)0x0;
  }
  uVar6 = (param_1[1] - (long)param_2) + 0x10;
  local_48 = param_4;
  if ((int)uVar6 < (int)param_3) {
    do {
      uVar4 = *param_4;
      iVar1 = (int)(uint)uVar6 >> 2;
      if (((uint)uVar4 >> 2 & 1) == 0) {
        if (2 < (int)(((uint)uVar4 & 3) + iVar1)) {
LAB_006f9a88:
          FUN_006f7998(param_4,(uVar4 & 4) == 0);
          uVar4 = *param_4;
        }
      }
      else if (*(int *)((long)param_4 + 0xc) < (int)param_4[1] + iVar1) goto LAB_006f9a88;
      if (((uint)uVar4 >> 2 & 1) == 0) {
        uVar8 = (uint)uVar4 & 3;
        *param_4 = uVar4 & 0xfffffffffffffff8 | (long)(int)(uVar8 + iVar1);
        puVar7 = param_4 + 1;
      }
      else {
        uVar8 = (uint)param_4[1];
        puVar7 = (ulong *)(uVar4 & 0xfffffffffffffff8);
        *(uint *)(param_4 + 1) = uVar8 + iVar1;
      }
      uVar9 = (uint)uVar6 & 0xfffffffc;
      memcpy((void *)((long)puVar7 + (long)(int)uVar8 * 4),param_2,(long)(int)uVar9);
      if (*(int *)((long)param_1 + 0x1c) < 0x11) {
        return (void *)0x0;
      }
      lVar2 = FUN_006f5318(param_1,0,0xffffffff);
      lVar5 = param_1[1];
      if (lVar2 == 0) {
        *param_1 = lVar5;
        *(undefined4 *)(param_1 + 10) = 1;
        return (void *)0x0;
      }
      param_3 = param_3 - uVar9;
      uVar8 = *(int *)((long)param_1 + 0x1c) + ((int)lVar2 - (int)lVar5);
      param_2 = (void *)((lVar2 - (uVar6 & 3)) + 0x10);
      *(uint *)((long)param_1 + 0x1c) = uVar8;
      uVar6 = (lVar5 - (long)param_2) + 0x10;
      *param_1 = lVar5 + (int)(uVar8 & (int)uVar8 >> 0x1f);
    } while ((int)uVar6 < (int)param_3);
  }
  iVar1 = (int)param_3 >> 2;
  uVar8 = param_3 & 0xfffffffc;
  if (iVar1 == 0) {
    if (param_3 != uVar8) {
      return (void *)0x0;
    }
    return param_2;
  }
  uVar6 = *param_4;
  if (((uint)uVar6 >> 2 & 1) == 0) {
    if ((int)(((uint)uVar6 & 3) + iVar1) < 3) goto LAB_006f9bb8;
  }
  else if ((int)param_4[1] + iVar1 <= *(int *)((long)param_4 + 0xc)) goto LAB_006f9bb8;
  FUN_006f7998(param_4,(uVar6 & 4) == 0);
  uVar6 = *param_4;
LAB_006f9bb8:
  if (((uint)uVar6 >> 2 & 1) == 0) {
    uVar9 = (uint)uVar6 & 3;
    puVar7 = param_4 + 1;
    *param_4 = uVar6 & 0xfffffffffffffff8 | (long)(int)(uVar9 + iVar1);
  }
  else {
    uVar9 = (uint)param_4[1];
    puVar7 = (ulong *)(uVar6 & 0xfffffffffffffff8);
    *(uint *)(param_4 + 1) = uVar9 + iVar1;
  }
  __dest = (void *)((long)puVar7 + (long)(int)uVar9 * 4);
  if (__dest == (void *)0x0) {
    FUN_006de99c(auStack_58,"../../third_party/protobuf/src/google/protobuf/parse_context.h",0x543,
                 "dst != nullptr");
    uVar3 = FUN_006f9c84(auStack_58,&local_48);
    uVar3 = FUN_006dcb58(uVar3,&DAT_001ea264);
    FUN_006f99f8(uVar3,iVar1);
    FUN_006de39c();
                    /* WARNING: Subroutine does not return */
    FUN_006dea94(auStack_58);
  }
  memcpy(__dest,param_2,(long)(int)uVar8);
  param_2 = (void *)((long)param_2 + (long)(int)uVar8);
  if (param_3 != uVar8) {
    param_2 = (void *)0x0;
  }
  return param_2;
}


// ===== 006f9c84  FUN_006f9c84 =====

long FUN_006f9c84(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_006de5e0(&local_a0,*(undefined8 *)(param_1 + 8));
  uVar1 = FUN_006dd76c(&local_a0);
  FUN_0054c7e8(uVar1,*param_2);
  FUN_006de6ec(&local_a0);
  return param_1;
}


// ===== 006f9cf4  FUN_006f9cf4 =====

void * FUN_006f9cf4(long *param_1,void *param_2,uint param_3,ulong *param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong *puVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_58 [16];
  ulong *local_48;
  
  if (param_2 == (void *)0x0) {
    return (void *)0x0;
  }
  uVar6 = (param_1[1] - (long)param_2) + 0x10;
  local_48 = param_4;
  if ((int)uVar6 < (int)param_3) {
    do {
      uVar4 = *param_4;
      iVar1 = (int)(uint)uVar6 >> 3;
      if (((uint)uVar4 >> 2 & 1) == 0) {
        if (1 < (int)(((uint)uVar4 & 3) + iVar1)) {
LAB_006f9d58:
          FUN_006f8940(param_4,(uVar4 & 4) == 0);
          uVar4 = *param_4;
        }
      }
      else if (*(int *)((long)param_4 + 0xc) < (int)param_4[1] + iVar1) goto LAB_006f9d58;
      if (((uint)uVar4 >> 2 & 1) == 0) {
        uVar8 = (uint)uVar4 & 3;
        *param_4 = uVar4 & 0xfffffffffffffff8 | (long)(int)(uVar8 + iVar1);
        puVar7 = param_4 + 1;
      }
      else {
        uVar8 = (uint)param_4[1];
        puVar7 = (ulong *)(uVar4 & 0xfffffffffffffff8);
        *(uint *)(param_4 + 1) = uVar8 + iVar1;
      }
      uVar9 = (uint)uVar6 & 0xfffffff8;
      memcpy(puVar7 + (int)uVar8,param_2,(long)(int)uVar9);
      if (*(int *)((long)param_1 + 0x1c) < 0x11) {
        return (void *)0x0;
      }
      lVar2 = FUN_006f5318(param_1,0,0xffffffff);
      lVar5 = param_1[1];
      if (lVar2 == 0) {
        *param_1 = lVar5;
        *(undefined4 *)(param_1 + 10) = 1;
        return (void *)0x0;
      }
      param_3 = param_3 - uVar9;
      uVar8 = *(int *)((long)param_1 + 0x1c) + ((int)lVar2 - (int)lVar5);
      param_2 = (void *)((lVar2 - (uVar6 & 7)) + 0x10);
      *(uint *)((long)param_1 + 0x1c) = uVar8;
      uVar6 = (lVar5 - (long)param_2) + 0x10;
      *param_1 = lVar5 + (int)(uVar8 & (int)uVar8 >> 0x1f);
    } while ((int)uVar6 < (int)param_3);
  }
  iVar1 = (int)param_3 >> 3;
  uVar8 = param_3 & 0xfffffff8;
  if (iVar1 == 0) {
    if (param_3 != uVar8) {
      return (void *)0x0;
    }
    return param_2;
  }
  uVar6 = *param_4;
  if (((uint)uVar6 >> 2 & 1) == 0) {
    if ((int)(((uint)uVar6 & 3) + iVar1) < 2) goto LAB_006f9e88;
  }
  else if ((int)param_4[1] + iVar1 <= *(int *)((long)param_4 + 0xc)) goto LAB_006f9e88;
  FUN_006f8940(param_4,(uVar6 & 4) == 0);
  uVar6 = *param_4;
LAB_006f9e88:
  if (((uint)uVar6 >> 2 & 1) == 0) {
    uVar9 = (uint)uVar6 & 3;
    puVar7 = param_4 + 1;
    *param_4 = uVar6 & 0xfffffffffffffff8 | (long)(int)(uVar9 + iVar1);
  }
  else {
    uVar9 = (uint)param_4[1];
    puVar7 = (ulong *)(uVar6 & 0xfffffffffffffff8);
    *(uint *)(param_4 + 1) = uVar9 + iVar1;
  }
  if (puVar7 + (int)uVar9 == (ulong *)0x0) {
    FUN_006de99c(auStack_58,"../../third_party/protobuf/src/google/protobuf/parse_context.h",0x543,
                 "dst != nullptr");
    uVar3 = FUN_006f9f54(auStack_58,&local_48);
    uVar3 = FUN_006dcb58(uVar3,&DAT_001ea264);
    FUN_006f99f8(uVar3,iVar1);
    FUN_006de39c();
                    /* WARNING: Subroutine does not return */
    FUN_006dea94(auStack_58);
  }
  memcpy(puVar7 + (int)uVar9,param_2,(long)(int)uVar8);
  param_2 = (void *)((long)param_2 + (long)(int)uVar8);
  if (param_3 != uVar8) {
    param_2 = (void *)0x0;
  }
  return param_2;
}


// ===== 006f9f54  FUN_006f9f54 =====

long FUN_006f9f54(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_006de5e0(&local_a0,*(undefined8 *)(param_1 + 8));
  uVar1 = FUN_006dd76c(&local_a0);
  FUN_0054c7e8(uVar1,*param_2);
  FUN_006de6ec(&local_a0);
  return param_1;
}


// ===== 006f9fc4  FUN_006f9fc4 =====

void * FUN_006f9fc4(long *param_1,void *param_2,uint param_3,ulong *param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong *puVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_58 [16];
  ulong *local_48;
  
  if (param_2 == (void *)0x0) {
    return (void *)0x0;
  }
  uVar6 = (param_1[1] - (long)param_2) + 0x10;
  local_48 = param_4;
  if ((int)uVar6 < (int)param_3) {
    do {
      uVar4 = *param_4;
      iVar1 = (int)(uint)uVar6 >> 3;
      if (((uint)uVar4 >> 2 & 1) == 0) {
        if (1 < (int)(((uint)uVar4 & 3) + iVar1)) {
LAB_006fa028:
          FUN_006f8408(param_4,(uVar4 & 4) == 0);
          uVar4 = *param_4;
        }
      }
      else if (*(int *)((long)param_4 + 0xc) < (int)param_4[1] + iVar1) goto LAB_006fa028;
      if (((uint)uVar4 >> 2 & 1) == 0) {
        uVar8 = (uint)uVar4 & 3;
        *param_4 = uVar4 & 0xfffffffffffffff8 | (long)(int)(uVar8 + iVar1);
        puVar7 = param_4 + 1;
      }
      else {
        uVar8 = (uint)param_4[1];
        puVar7 = (ulong *)(uVar4 & 0xfffffffffffffff8);
        *(uint *)(param_4 + 1) = uVar8 + iVar1;
      }
      uVar9 = (uint)uVar6 & 0xfffffff8;
      memcpy(puVar7 + (int)uVar8,param_2,(long)(int)uVar9);
      if (*(int *)((long)param_1 + 0x1c) < 0x11) {
        return (void *)0x0;
      }
      lVar2 = FUN_006f5318(param_1,0,0xffffffff);
      lVar5 = param_1[1];
      if (lVar2 == 0) {
        *param_1 = lVar5;
        *(undefined4 *)(param_1 + 10) = 1;
        return (void *)0x0;
      }
      param_3 = param_3 - uVar9;
      uVar8 = *(int *)((long)param_1 + 0x1c) + ((int)lVar2 - (int)lVar5);
      param_2 = (void *)((lVar2 - (uVar6 & 7)) + 0x10);
      *(uint *)((long)param_1 + 0x1c) = uVar8;
      uVar6 = (lVar5 - (long)param_2) + 0x10;
      *param_1 = lVar5 + (int)(uVar8 & (int)uVar8 >> 0x1f);
    } while ((int)uVar6 < (int)param_3);
  }
  iVar1 = (int)param_3 >> 3;
  uVar8 = param_3 & 0xfffffff8;
  if (iVar1 == 0) {
    if (param_3 != uVar8) {
      return (void *)0x0;
    }
    return param_2;
  }
  uVar6 = *param_4;
  if (((uint)uVar6 >> 2 & 1) == 0) {
    if ((int)(((uint)uVar6 & 3) + iVar1) < 2) goto LAB_006fa158;
  }
  else if ((int)param_4[1] + iVar1 <= *(int *)((long)param_4 + 0xc)) goto LAB_006fa158;
  FUN_006f8408(param_4,(uVar6 & 4) == 0);
  uVar6 = *param_4;
LAB_006fa158:
  if (((uint)uVar6 >> 2 & 1) == 0) {
    uVar9 = (uint)uVar6 & 3;
    puVar7 = param_4 + 1;
    *param_4 = uVar6 & 0xfffffffffffffff8 | (long)(int)(uVar9 + iVar1);
  }
  else {
    uVar9 = (uint)param_4[1];
    puVar7 = (ulong *)(uVar6 & 0xfffffffffffffff8);
    *(uint *)(param_4 + 1) = uVar9 + iVar1;
  }
  if (puVar7 + (int)uVar9 == (ulong *)0x0) {
    FUN_006de99c(auStack_58,"../../third_party/protobuf/src/google/protobuf/parse_context.h",0x543,
                 "dst != nullptr");
    uVar3 = FUN_006fa224(auStack_58,&local_48);
    uVar3 = FUN_006dcb58(uVar3,&DAT_001ea264);
    FUN_006f99f8(uVar3,iVar1);
    FUN_006de39c();
                    /* WARNING: Subroutine does not return */
    FUN_006dea94(auStack_58);
  }
  memcpy(puVar7 + (int)uVar9,param_2,(long)(int)uVar8);
  param_2 = (void *)((long)param_2 + (long)(int)uVar8);
  if (param_3 != uVar8) {
    param_2 = (void *)0x0;
  }
  return param_2;
}


// ===== 006fa224  FUN_006fa224 =====

long FUN_006fa224(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_006de5e0(&local_a0,*(undefined8 *)(param_1 + 8));
  uVar1 = FUN_006dd76c(&local_a0);
  FUN_0054c7e8(uVar1,*param_2);
  FUN_006de6ec(&local_a0);
  return param_1;
}


// ===== 006fa294  FUN_006fa294 =====

void * FUN_006fa294(long *param_1,void *param_2,uint param_3,ulong *param_4)

{
  void *__dest;
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong *puVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_58 [16];
  ulong *local_48;
  
  if (param_2 == (void *)0x0) {
    return (void *)0x0;
  }
  uVar6 = (param_1[1] - (long)param_2) + 0x10;
  local_48 = param_4;
  if ((int)uVar6 < (int)param_3) {
    do {
      uVar4 = *param_4;
      iVar1 = (int)(uint)uVar6 >> 2;
      if (((uint)uVar4 >> 2 & 1) == 0) {
        if (2 < (int)(((uint)uVar4 & 3) + iVar1)) {
LAB_006fa2f8:
          FUN_006fa564(param_4,(uVar4 & 4) == 0);
          uVar4 = *param_4;
        }
      }
      else if (*(int *)((long)param_4 + 0xc) < (int)param_4[1] + iVar1) goto LAB_006fa2f8;
      if (((uint)uVar4 >> 2 & 1) == 0) {
        uVar8 = (uint)uVar4 & 3;
        *param_4 = uVar4 & 0xfffffffffffffff8 | (long)(int)(uVar8 + iVar1);
        puVar7 = param_4 + 1;
      }
      else {
        uVar8 = (uint)param_4[1];
        puVar7 = (ulong *)(uVar4 & 0xfffffffffffffff8);
        *(uint *)(param_4 + 1) = uVar8 + iVar1;
      }
      uVar9 = (uint)uVar6 & 0xfffffffc;
      memcpy((void *)((long)puVar7 + (long)(int)uVar8 * 4),param_2,(long)(int)uVar9);
      if (*(int *)((long)param_1 + 0x1c) < 0x11) {
        return (void *)0x0;
      }
      lVar2 = FUN_006f5318(param_1,0,0xffffffff);
      lVar5 = param_1[1];
      if (lVar2 == 0) {
        *param_1 = lVar5;
        *(undefined4 *)(param_1 + 10) = 1;
        return (void *)0x0;
      }
      param_3 = param_3 - uVar9;
      uVar8 = *(int *)((long)param_1 + 0x1c) + ((int)lVar2 - (int)lVar5);
      param_2 = (void *)((lVar2 - (uVar6 & 3)) + 0x10);
      *(uint *)((long)param_1 + 0x1c) = uVar8;
      uVar6 = (lVar5 - (long)param_2) + 0x10;
      *param_1 = lVar5 + (int)(uVar8 & (int)uVar8 >> 0x1f);
    } while ((int)uVar6 < (int)param_3);
  }
  iVar1 = (int)param_3 >> 2;
  uVar8 = param_3 & 0xfffffffc;
  if (iVar1 == 0) {
    if (param_3 != uVar8) {
      return (void *)0x0;
    }
    return param_2;
  }
  uVar6 = *param_4;
  if (((uint)uVar6 >> 2 & 1) == 0) {
    if ((int)(((uint)uVar6 & 3) + iVar1) < 3) goto LAB_006fa428;
  }
  else if ((int)param_4[1] + iVar1 <= *(int *)((long)param_4 + 0xc)) goto LAB_006fa428;
  FUN_006fa564(param_4,(uVar6 & 4) == 0);
  uVar6 = *param_4;
LAB_006fa428:
  if (((uint)uVar6 >> 2 & 1) == 0) {
    uVar9 = (uint)uVar6 & 3;
    puVar7 = param_4 + 1;
    *param_4 = uVar6 & 0xfffffffffffffff8 | (long)(int)(uVar9 + iVar1);
  }
  else {
    uVar9 = (uint)param_4[1];
    puVar7 = (ulong *)(uVar6 & 0xfffffffffffffff8);
    *(uint *)(param_4 + 1) = uVar9 + iVar1;
  }
  __dest = (void *)((long)puVar7 + (long)(int)uVar9 * 4);
  if (__dest == (void *)0x0) {
    FUN_006de99c(auStack_58,"../../third_party/protobuf/src/google/protobuf/parse_context.h",0x543,
                 "dst != nullptr");
    uVar3 = FUN_006fa4f4(auStack_58,&local_48);
    uVar3 = FUN_006dcb58(uVar3,&DAT_001ea264);
    FUN_006f99f8(uVar3,iVar1);
    FUN_006de39c();
                    /* WARNING: Subroutine does not return */
    FUN_006dea94(auStack_58);
  }
  memcpy(__dest,param_2,(long)(int)uVar8);
  param_2 = (void *)((long)param_2 + (long)(int)uVar8);
  if (param_3 != uVar8) {
    param_2 = (void *)0x0;
  }
  return param_2;
}


// ===== 006fa4f4  FUN_006fa4f4 =====

long FUN_006fa4f4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_006de5e0(&local_a0,*(undefined8 *)(param_1 + 8));
  uVar1 = FUN_006dd76c(&local_a0);
  FUN_0054c7e8(uVar1,*param_2);
  FUN_006de6ec(&local_a0);
  return param_1;
}


// ===== 006fa564  FUN_006fa564 =====

void FUN_006fa564(void)

{
  FUN_006fa56c();
  return;
}


// ===== 006fa56c  FUN_006fa56c =====

void FUN_006fa56c(ulong *param_1,ulong param_2,uint param_3,uint param_4)

{
  ulong *puVar1;
  long lVar2;
  ulong *__src;
  size_t __n;
  uint uVar3;
  ulong uVar4;
  undefined8 *__dest;
  ulong uVar5;
  long *plVar6;
  byte *pbVar7;
  
  if ((param_2 & 1) == 0) {
    uVar3 = *(uint *)((long)param_1 + 0xc);
  }
  else {
    uVar3 = 2;
  }
  uVar5 = *param_1 & 0xfffffffffffffff8;
  if (((uint)*param_1 >> 2 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 - 8);
  }
  if ((int)param_4 < 2) {
    uVar3 = 2;
    lVar2 = 8;
  }
  else if ((int)uVar3 < 0x3ffffffc) {
    uVar3 = uVar3 * 2 + 2;
    if ((int)uVar3 <= (int)param_4) {
      uVar3 = param_4;
    }
    lVar2 = (ulong)uVar3 << 2;
  }
  else {
    uVar3 = 0x7fffffff;
    lVar2 = 0x1fffffffc;
  }
  if (uVar5 == 0) {
    puVar1 = (ulong *)operator_new(lVar2 + 8);
  }
  else {
    puVar1 = (ulong *)FUN_006fdcd0(uVar5,lVar2 + 0xfU & 0x3fffffff8);
  }
  *puVar1 = uVar5;
  if (0 < (int)param_3) {
    if ((param_2 & 1) == 0) {
      __src = (ulong *)(*param_1 & 0xfffffffffffffff8);
    }
    else {
      __src = param_1 + 1;
    }
    memcpy(puVar1 + 1,__src,(ulong)param_3 << 2);
  }
  if ((param_2 & 1) == 0) {
    __dest = (undefined8 *)((*param_1 & 0xfffffffffffffff8) - 8);
    plVar6 = (long *)*__dest;
    uVar5 = (long)(int)*(uint *)((long)param_1 + 0xc) * 4 + 8;
    if (plVar6 == (long *)0x0) {
      operator_delete(__dest);
    }
    else {
      lVar2 = __emutls_get_address(&DAT_00d5a2a0);
      if (*(long *)(lVar2 + 8) == *plVar6) {
        pbVar7 = *(byte **)(lVar2 + 0x10);
        uVar4 = 0x3b - LZCOUNT(uVar5);
        if (uVar4 < *pbVar7) {
          lVar2 = *(long *)(pbVar7 + 0x30);
          *__dest = *(undefined8 *)(lVar2 + uVar4 * 8);
          *(undefined8 **)(lVar2 + uVar4 * 8) = __dest;
        }
        else {
          uVar4 = uVar5 >> 3;
          memmove(__dest,*(void **)(pbVar7 + 0x30),(ulong)*pbVar7 << 3);
          __n = (uVar5 & 0xfffffffffffffff8) + (ulong)*pbVar7 * -8;
          if (0 < (long)__n) {
            memset(__dest + *pbVar7,0,__n);
          }
          *(undefined8 **)(pbVar7 + 0x30) = __dest;
          if (0x3f < uVar4) {
            uVar4 = 0x40;
          }
          *pbVar7 = (byte)uVar4;
        }
      }
    }
  }
  else {
    *(uint *)(param_1 + 1) = (uint)*param_1 & 3;
  }
  *(uint *)((long)param_1 + 0xc) = uVar3;
  *param_1 = (ulong)(puVar1 + 1) | 4;
  return;
}


// ===== 006fa74c  FUN_006fa74c =====

void * FUN_006fa74c(long *param_1,void *param_2,uint param_3,ulong *param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong *puVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_58 [16];
  ulong *local_48;
  
  if (param_2 == (void *)0x0) {
    return (void *)0x0;
  }
  uVar6 = (param_1[1] - (long)param_2) + 0x10;
  local_48 = param_4;
  if ((int)uVar6 < (int)param_3) {
    do {
      uVar4 = *param_4;
      iVar1 = (int)(uint)uVar6 >> 3;
      if (((uint)uVar4 >> 2 & 1) == 0) {
        if (1 < (int)(((uint)uVar4 & 3) + iVar1)) {
LAB_006fa7b0:
          FUN_006faa1c(param_4,(uVar4 & 4) == 0);
          uVar4 = *param_4;
        }
      }
      else if (*(int *)((long)param_4 + 0xc) < (int)param_4[1] + iVar1) goto LAB_006fa7b0;
      if (((uint)uVar4 >> 2 & 1) == 0) {
        uVar8 = (uint)uVar4 & 3;
        *param_4 = uVar4 & 0xfffffffffffffff8 | (long)(int)(uVar8 + iVar1);
        puVar7 = param_4 + 1;
      }
      else {
        uVar8 = (uint)param_4[1];
        puVar7 = (ulong *)(uVar4 & 0xfffffffffffffff8);
        *(uint *)(param_4 + 1) = uVar8 + iVar1;
      }
      uVar9 = (uint)uVar6 & 0xfffffff8;
      memcpy(puVar7 + (int)uVar8,param_2,(long)(int)uVar9);
      if (*(int *)((long)param_1 + 0x1c) < 0x11) {
        return (void *)0x0;
      }
      lVar2 = FUN_006f5318(param_1,0,0xffffffff);
      lVar5 = param_1[1];
      if (lVar2 == 0) {
        *param_1 = lVar5;
        *(undefined4 *)(param_1 + 10) = 1;
        return (void *)0x0;
      }
      param_3 = param_3 - uVar9;
      uVar8 = *(int *)((long)param_1 + 0x1c) + ((int)lVar2 - (int)lVar5);
      param_2 = (void *)((lVar2 - (uVar6 & 7)) + 0x10);
      *(uint *)((long)param_1 + 0x1c) = uVar8;
      uVar6 = (lVar5 - (long)param_2) + 0x10;
      *param_1 = lVar5 + (int)(uVar8 & (int)uVar8 >> 0x1f);
    } while ((int)uVar6 < (int)param_3);
  }
  iVar1 = (int)param_3 >> 3;
  uVar8 = param_3 & 0xfffffff8;
  if (iVar1 == 0) {
    if (param_3 != uVar8) {
      return (void *)0x0;
    }
    return param_2;
  }
  uVar6 = *param_4;
  if (((uint)uVar6 >> 2 & 1) == 0) {
    if ((int)(((uint)uVar6 & 3) + iVar1) < 2) goto LAB_006fa8e0;
  }
  else if ((int)param_4[1] + iVar1 <= *(int *)((long)param_4 + 0xc)) goto LAB_006fa8e0;
  FUN_006faa1c(param_4,(uVar6 & 4) == 0);
  uVar6 = *param_4;
LAB_006fa8e0:
  if (((uint)uVar6 >> 2 & 1) == 0) {
    uVar9 = (uint)uVar6 & 3;
    puVar7 = param_4 + 1;
    *param_4 = uVar6 & 0xfffffffffffffff8 | (long)(int)(uVar9 + iVar1);
  }
  else {
    uVar9 = (uint)param_4[1];
    puVar7 = (ulong *)(uVar6 & 0xfffffffffffffff8);
    *(uint *)(param_4 + 1) = uVar9 + iVar1;
  }
  if (puVar7 + (int)uVar9 == (ulong *)0x0) {
    FUN_006de99c(auStack_58,"../../third_party/protobuf/src/google/protobuf/parse_context.h",0x543,
                 "dst != nullptr");
    uVar3 = FUN_006fa9ac(auStack_58,&local_48);
    uVar3 = FUN_006dcb58(uVar3,&DAT_001ea264);
    FUN_006f99f8(uVar3,iVar1);
    FUN_006de39c();
                    /* WARNING: Subroutine does not return */
    FUN_006dea94(auStack_58);
  }
  memcpy(puVar7 + (int)uVar9,param_2,(long)(int)uVar8);
  param_2 = (void *)((long)param_2 + (long)(int)uVar8);
  if (param_3 != uVar8) {
    param_2 = (void *)0x0;
  }
  return param_2;
}


// ===== 006fa9ac  FUN_006fa9ac =====

long FUN_006fa9ac(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_006de5e0(&local_a0,*(undefined8 *)(param_1 + 8));
  uVar1 = FUN_006dd76c(&local_a0);
  FUN_0054c7e8(uVar1,*param_2);
  FUN_006de6ec(&local_a0);
  return param_1;
}


// ===== 006faa1c  FUN_006faa1c =====

void FUN_006faa1c(void)

{
  FUN_006faa24();
  return;
}


// ===== 006faa24  FUN_006faa24 =====

void FUN_006faa24(ulong *param_1,ulong param_2,uint param_3,uint param_4)

{
  ulong *puVar1;
  long lVar2;
  ulong *__src;
  size_t __n;
  uint uVar3;
  ulong uVar4;
  undefined8 *__dest;
  ulong uVar5;
  long *plVar6;
  byte *pbVar7;
  
  if ((param_2 & 1) == 0) {
    uVar3 = *(uint *)((long)param_1 + 0xc);
  }
  else {
    uVar3 = 1;
  }
  uVar5 = *param_1 & 0xfffffffffffffff8;
  if (((uint)*param_1 >> 2 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 - 8);
  }
  if ((int)param_4 < 1) {
    param_4 = 1;
    lVar2 = 8;
  }
  else if ((int)uVar3 < 0x3ffffffc) {
    if ((int)param_4 < (int)(uVar3 << 1 | 1)) {
      param_4 = uVar3 * 2 + 1;
    }
    lVar2 = (ulong)param_4 << 3;
  }
  else {
    param_4 = 0x7fffffff;
    lVar2 = 0x3fffffff8;
  }
  if (uVar5 == 0) {
    puVar1 = (ulong *)operator_new(lVar2 + 8);
  }
  else {
    puVar1 = (ulong *)FUN_006fdcd0(uVar5,lVar2 + 0xfU & 0x7fffffff8);
  }
  *puVar1 = uVar5;
  if (0 < (int)param_3) {
    if ((param_2 & 1) == 0) {
      __src = (ulong *)(*param_1 & 0xfffffffffffffff8);
    }
    else {
      __src = param_1 + 1;
    }
    memcpy(puVar1 + 1,__src,(ulong)param_3 << 3);
  }
  if ((param_2 & 1) == 0) {
    __dest = (undefined8 *)((*param_1 & 0xfffffffffffffff8) - 8);
    plVar6 = (long *)*__dest;
    uVar5 = (long)(int)*(uint *)((long)param_1 + 0xc) * 8 + 8;
    if (plVar6 == (long *)0x0) {
      operator_delete(__dest);
    }
    else {
      lVar2 = __emutls_get_address(&DAT_00d5a2a0);
      if (*(long *)(lVar2 + 8) == *plVar6) {
        pbVar7 = *(byte **)(lVar2 + 0x10);
        uVar4 = 0x3b - LZCOUNT(uVar5);
        if (uVar4 < *pbVar7) {
          lVar2 = *(long *)(pbVar7 + 0x30);
          *__dest = *(undefined8 *)(lVar2 + uVar4 * 8);
          *(undefined8 **)(lVar2 + uVar4 * 8) = __dest;
        }
        else {
          uVar4 = uVar5 >> 3;
          memmove(__dest,*(void **)(pbVar7 + 0x30),(ulong)*pbVar7 << 3);
          __n = uVar5 + (ulong)*pbVar7 * -8;
          if (0 < (long)__n) {
            memset(__dest + *pbVar7,0,__n);
          }
          *(undefined8 **)(pbVar7 + 0x30) = __dest;
          if (0x3f < uVar4) {
            uVar4 = 0x40;
          }
          *pbVar7 = (byte)uVar4;
        }
      }
    }
  }
  else {
    *(uint *)(param_1 + 1) = (uint)*param_1 & 3;
  }
  *(uint *)((long)param_1 + 0xc) = param_4;
  *param_1 = (ulong)(puVar1 + 1) | 4;
  return;
}


// ===== 006fac04  FUN_006fac04 =====

byte * FUN_006fac04(undefined8 *param_1,int param_2,byte *param_3,long *param_4)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  uint uVar8;
  byte *pbVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  pbVar9 = param_3 + 1;
  uVar8 = (uint)*param_3;
  if ((char)*param_3 < '\0') {
    uVar8 = (uVar8 + (uint)*pbVar9 * 0x80) - 0x80;
    if ((char)*pbVar9 < '\0') {
      uVar8 = (uVar8 + (uint)param_3[2] * 0x4000) - 0x4000;
      if ((char)param_3[2] < '\0') {
        uVar8 = (uVar8 + (uint)param_3[3] * 0x200000) - 0x200000;
        if ((char)param_3[3] < '\0') {
          if (7 < param_3[4]) {
            return (byte *)0x0;
          }
          uVar8 = uVar8 + (uint)param_3[4] * 0x10000000 + 0xf0000000;
          if (0x7fffffef < uVar8) {
            return (byte *)0x0;
          }
          pbVar9 = param_3 + 5;
          goto joined_r0x006fb034;
        }
        lVar4 = 3;
      }
      else {
        lVar4 = 2;
      }
    }
    else {
      lVar4 = 1;
    }
    pbVar9 = param_3 + lVar4 + 1;
  }
joined_r0x006fb034:
  if (pbVar9 == (byte *)0x0) {
    return (byte *)0x0;
  }
  plVar10 = (long *)*param_1;
  if (plVar10 == (long *)0x0) {
    uVar14 = (param_4[1] - (long)pbVar9) + 0x10;
    if ((long)(ulong)uVar8 <= (long)(int)uVar14) {
      return pbVar9 + (int)uVar8;
    }
    do {
      if (param_4[2] == 0) {
        return (byte *)0x0;
      }
      if (*(int *)((long)param_4 + 0x1c) < 0x11) {
        return (byte *)0x0;
      }
      lVar4 = FUN_006f5318(param_4,0,0xffffffff);
      lVar5 = param_4[1];
      if (lVar4 == 0) {
        *param_4 = lVar5;
        *(undefined4 *)(param_4 + 10) = 1;
        return (byte *)0x0;
      }
      uVar8 = uVar8 - (int)uVar14;
      uVar2 = *(int *)((long)param_4 + 0x1c) + ((int)lVar4 - (int)lVar5);
      *(uint *)((long)param_4 + 0x1c) = uVar2;
      uVar1 = ((int)lVar5 - (int)(lVar4 + 0x10)) + 0x10;
      uVar14 = (ulong)uVar1;
      *param_4 = lVar5 + (int)(uVar2 & (int)uVar2 >> 0x1f);
    } while (uVar1 < uVar8);
    return (byte *)(lVar4 + 0x10 + (ulong)uVar8);
  }
  uVar12 = (ulong)(param_2 << 3 | 2);
  uVar14 = uVar12;
  if (0x7f < (uint)(param_2 << 3)) {
    do {
      bVar3 = *(byte *)((long)plVar10 + 0x17);
      if ((char)bVar3 < '\0') {
        uVar11 = plVar10[1];
        uVar12 = (plVar10[2] & 0x7fffffffffffffffU) - 1;
        if (uVar11 == uVar12) goto LAB_006fad08;
LAB_006fad2c:
        plVar10[1] = uVar11 + 1;
        plVar6 = (long *)*plVar10;
      }
      else {
        if (bVar3 == 0x16) {
          uVar12 = 0x16;
LAB_006fad08:
          uVar11 = uVar12;
          FUN_0054774c(plVar10,uVar11,1,uVar11,uVar11,0,0);
          goto LAB_006fad2c;
        }
        uVar11 = (ulong)bVar3;
        *(byte *)((long)plVar10 + 0x17) = bVar3 + 1 & 0x7f;
        plVar6 = plVar10;
      }
      uVar12 = uVar14 >> 7;
      uVar13 = uVar14 >> 0xe;
      ((byte *)((long)plVar6 + uVar11))[1] = 0;
      *(byte *)((long)plVar6 + uVar11) = (byte)uVar14 | 0x80;
      uVar14 = uVar12;
    } while (uVar13 != 0);
  }
  bVar3 = *(byte *)((long)plVar10 + 0x17);
  if ((char)bVar3 < '\0') {
    uVar14 = plVar10[1];
    uVar11 = (plVar10[2] & 0x7fffffffffffffffU) - 1;
    if (uVar14 == uVar11) goto LAB_006fadd0;
LAB_006fadf4:
    plVar10[1] = uVar14 + 1;
    plVar10 = (long *)*plVar10;
  }
  else {
    if (bVar3 == 0x16) {
      uVar11 = 0x16;
LAB_006fadd0:
      uVar14 = uVar11;
      FUN_0054774c(plVar10,uVar14,1,uVar14,uVar14,0,0);
      goto LAB_006fadf4;
    }
    uVar14 = (ulong)bVar3;
    *(byte *)((long)plVar10 + 0x17) = bVar3 + 1 & 0x7f;
  }
  uVar11 = (ulong)(int)uVar8;
  *(undefined1 *)((long)plVar10 + uVar14) = (char)uVar12;
  ((undefined1 *)((long)plVar10 + uVar14))[1] = 0;
  plVar10 = (long *)*param_1;
  uVar14 = uVar11;
  uVar12 = uVar11;
  if (0x7f < uVar8) {
    do {
      bVar3 = *(byte *)((long)plVar10 + 0x17);
      if ((char)bVar3 < '\0') {
        uVar13 = plVar10[1];
        uVar14 = (plVar10[2] & 0x7fffffffffffffffU) - 1;
        if (uVar13 == uVar14) goto LAB_006faea4;
LAB_006faec8:
        plVar10[1] = uVar13 + 1;
        plVar6 = (long *)*plVar10;
      }
      else {
        if (bVar3 == 0x16) {
          uVar14 = 0x16;
LAB_006faea4:
          uVar13 = uVar14;
          FUN_0054774c(plVar10,uVar13,1,uVar13,uVar13,0,0);
          goto LAB_006faec8;
        }
        uVar13 = (ulong)bVar3;
        *(byte *)((long)plVar10 + 0x17) = bVar3 + 1 & 0x7f;
        plVar6 = plVar10;
      }
      uVar14 = uVar12 >> 7;
      uVar7 = uVar12 >> 0xe;
      ((byte *)((long)plVar6 + uVar13))[1] = 0;
      *(byte *)((long)plVar6 + uVar13) = (byte)uVar12 | 0x80;
      uVar12 = uVar14;
    } while (uVar7 != 0);
  }
  bVar3 = *(byte *)((long)plVar10 + 0x17);
  if ((char)bVar3 < '\0') {
    uVar12 = plVar10[1];
    uVar13 = (plVar10[2] & 0x7fffffffffffffffU) - 1;
    if (uVar12 == uVar13) goto LAB_006faf08;
  }
  else {
    if (bVar3 != 0x16) {
      uVar12 = (ulong)bVar3;
      *(byte *)((long)plVar10 + 0x17) = bVar3 + 1 & 0x7f;
      goto LAB_006faf50;
    }
    uVar13 = 0x16;
LAB_006faf08:
    uVar12 = uVar13;
    FUN_0054774c(plVar10,uVar12,1,uVar12,uVar12,0,0);
  }
  plVar10[1] = uVar12 + 1;
  plVar10 = (long *)*plVar10;
LAB_006faf50:
  *(undefined1 *)((long)plVar10 + uVar12) = (char)uVar14;
  ((undefined1 *)((long)plVar10 + uVar12))[1] = 0;
  if ((long)(((int)param_4[1] - (int)pbVar9) + 0x10) < (long)(ulong)uVar8) {
    pbVar9 = (byte *)FUN_006f566c(param_4,pbVar9,uVar8);
    return pbVar9;
  }
  FUN_00547cac(*param_1,pbVar9,uVar11);
  return pbVar9 + uVar11;
}


// ===== 006fb05c  FUN_006fb05c =====

long FUN_006fb05c(undefined8 *param_1,int param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  
  plVar10 = (long *)*param_1;
  uVar3 = param_2 << 3;
  if (plVar10 != (long *)0x0) {
    uVar7 = (ulong)(uVar3 | 3);
    if (uVar3 < 0x80) {
      uVar12 = (ulong)(uVar3 | 3);
    }
    else {
      do {
        bVar2 = *(byte *)((long)plVar10 + 0x17);
        if ((char)bVar2 < '\0') {
          uVar11 = plVar10[1];
          uVar9 = (plVar10[2] & 0x7fffffffffffffffU) - 1;
          if (uVar11 == uVar9) goto LAB_006fb120;
LAB_006fb144:
          plVar10[1] = uVar11 + 1;
          plVar8 = (long *)*plVar10;
        }
        else {
          if (bVar2 == 0x16) {
            uVar9 = 0x16;
LAB_006fb120:
            uVar11 = uVar9;
            FUN_0054774c(plVar10,uVar11,1,uVar11,uVar11,0,0);
            goto LAB_006fb144;
          }
          uVar11 = (ulong)bVar2;
          *(byte *)((long)plVar10 + 0x17) = bVar2 + 1 & 0x7f;
          plVar8 = plVar10;
        }
        uVar12 = uVar7 >> 7;
        uVar9 = uVar7 >> 0xe;
        ((byte *)((long)plVar8 + uVar11))[1] = 0;
        *(byte *)((long)plVar8 + uVar11) = (byte)uVar7 | 0x80;
        uVar7 = uVar12;
      } while (uVar9 != 0);
    }
    bVar2 = *(byte *)((long)plVar10 + 0x17);
    if ((char)bVar2 < '\0') {
      uVar7 = plVar10[1];
      uVar11 = (plVar10[2] & 0x7fffffffffffffffU) - 1;
      if (uVar7 == uVar11) goto LAB_006fb168;
LAB_006fb18c:
      plVar10[1] = uVar7 + 1;
      plVar10 = (long *)*plVar10;
    }
    else {
      if (bVar2 == 0x16) {
        uVar11 = 0x16;
LAB_006fb168:
        uVar7 = uVar11;
        FUN_0054774c(plVar10,uVar7,1,uVar7,uVar7,0,0);
        goto LAB_006fb18c;
      }
      uVar7 = (ulong)bVar2;
      *(byte *)((long)plVar10 + 0x17) = bVar2 + 1 & 0x7f;
    }
    *(undefined1 *)((long)plVar10 + uVar7) = (char)uVar12;
    ((undefined1 *)((long)plVar10 + uVar7))[1] = 0;
  }
  iVar4 = *(int *)(param_4 + 0x58) + -1;
  *(int *)(param_4 + 0x58) = iVar4;
  if (iVar4 < 0) {
    return 0;
  }
  *(int *)(param_4 + 0x5c) = *(int *)(param_4 + 0x5c) + 1;
  lVar6 = FUN_006f69c8(param_1,param_3,param_4);
  uVar5 = DAT_001f5550;
  uVar1 = *(uint *)(param_4 + 0x50);
  *(undefined4 *)(param_4 + 0x50) = 0;
  *(ulong *)(param_4 + 0x58) =
       CONCAT44((int)((ulong)*(undefined8 *)(param_4 + 0x58) >> 0x20) + (int)((ulong)uVar5 >> 0x20),
                (int)*(undefined8 *)(param_4 + 0x58) + (int)uVar5);
  if (lVar6 == 0) {
    return 0;
  }
  if (uVar1 != (uVar3 | 3)) {
    return 0;
  }
  plVar10 = (long *)*param_1;
  if (plVar10 == (long *)0x0) {
    return lVar6;
  }
  uVar11 = (ulong)(uVar3 | 4);
  uVar7 = uVar11;
  if (0x7f < uVar3) {
    do {
      bVar2 = *(byte *)((long)plVar10 + 0x17);
      if ((char)bVar2 < '\0') {
        uVar9 = plVar10[1];
        uVar11 = (plVar10[2] & 0x7fffffffffffffffU) - 1;
        if (uVar9 == uVar11) goto LAB_006fb2b4;
LAB_006fb2d8:
        plVar10[1] = uVar9 + 1;
        plVar8 = (long *)*plVar10;
      }
      else {
        if (bVar2 == 0x16) {
          uVar11 = 0x16;
LAB_006fb2b4:
          uVar9 = uVar11;
          FUN_0054774c(plVar10,uVar9,1,uVar9,uVar9,0,0);
          goto LAB_006fb2d8;
        }
        uVar9 = (ulong)bVar2;
        *(byte *)((long)plVar10 + 0x17) = bVar2 + 1 & 0x7f;
        plVar8 = plVar10;
      }
      uVar11 = uVar7 >> 7;
      uVar12 = uVar7 >> 0xe;
      ((byte *)((long)plVar8 + uVar9))[1] = 0;
      *(byte *)((long)plVar8 + uVar9) = (byte)uVar7 | 0x80;
      uVar7 = uVar11;
    } while (uVar12 != 0);
  }
  bVar2 = *(byte *)((long)plVar10 + 0x17);
  if ((char)bVar2 < '\0') {
    uVar7 = plVar10[1];
    uVar9 = (plVar10[2] & 0x7fffffffffffffffU) - 1;
    if (uVar7 == uVar9) goto LAB_006fb304;
  }
  else {
    if (bVar2 != 0x16) {
      uVar7 = (ulong)bVar2;
      *(byte *)((long)plVar10 + 0x17) = bVar2 + 1 & 0x7f;
      goto LAB_006fb34c;
    }
    uVar9 = 0x16;
LAB_006fb304:
    uVar7 = uVar9;
    FUN_0054774c(plVar10,uVar7,1,uVar7,uVar7,0,0);
  }
  plVar10[1] = uVar7 + 1;
  plVar10 = (long *)*plVar10;
LAB_006fb34c:
  *(undefined1 *)((long)plVar10 + uVar7) = (char)uVar11;
  ((undefined1 *)((long)plVar10 + uVar7))[1] = 0;
  return lVar6;
}


// ===== 006fb378  FUN_006fb378 =====

undefined8 FUN_006fb378(undefined8 param_1,char *param_2)

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


// ===== 006fb3d4  FUN_006fb3d4 =====

void FUN_006fb3d4(undefined8 *param_1,long *param_2)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  
  plVar8 = param_2 + 2;
  if (*(char *)((long)param_2 + 0x27) < '\0') {
    *(undefined1 *)param_2[2] = 0;
    param_2[3] = 0;
  }
  else {
    *(undefined1 *)(param_2 + 2) = 0;
    *(undefined1 *)((long)param_2 + 0x27) = 0;
  }
  param_1 = (undefined8 *)*param_1;
  plVar2 = (long *)*param_1;
  lVar7 = *(long *)param_1[1];
  uVar6 = (ulong)*(uint *)param_1[2];
  uVar9 = ((int)plVar2[1] - (int)lVar7) + 0x10;
  do {
    if (plVar2[2] == 0) {
LAB_006fb4d8:
      lVar7 = 0;
      goto LAB_006fb4f0;
    }
    if ((int)uVar9 < 0) goto LAB_006fb528;
    if ((lVar7 == 0) && (uVar9 != 0)) goto LAB_006fb53c;
    FUN_00547cac(param_2 + 2,lVar7,uVar9);
    if (*(int *)((long)plVar2 + 0x1c) < 0x11) goto LAB_006fb4d8;
    lVar4 = FUN_006f5318(plVar2,0,0xffffffff);
    lVar5 = plVar2[1];
    if (lVar4 == 0) {
      lVar7 = 0;
      *plVar2 = lVar5;
      *(undefined4 *)(plVar2 + 10) = 1;
      goto LAB_006fb4f0;
    }
    lVar7 = lVar4 + 0x10;
    uVar3 = (int)uVar6 - uVar9;
    uVar6 = (ulong)uVar3;
    uVar1 = *(int *)((long)plVar2 + 0x1c) + ((int)lVar4 - (int)lVar5);
    uVar9 = ((int)lVar5 - (int)lVar7) + 0x10;
    *(uint *)((long)plVar2 + 0x1c) = uVar1;
    *plVar2 = lVar5 + (int)(uVar1 & (int)uVar1 >> 0x1f);
  } while (uVar9 < uVar3);
  if ((int)uVar3 < 0) {
LAB_006fb528:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/string_view:331: libc++ Hardening assertion __len <= static_cast<size_type>(numeric_limits<difference_type>::max()) failed: string_view::string_view(_CharT *, size_t): length does not fit in difference_type\n"
              );
  }
  if ((uVar3 != 0) && (lVar7 == 0)) {
LAB_006fb53c:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/string_view:333: libc++ Hardening assertion __len == 0 || __s != nullptr failed: string_view::string_view(_CharT *, size_t): received nullptr\n"
              );
  }
  FUN_00547cac(param_2 + 2,lVar7,uVar6);
  lVar7 = lVar7 + uVar6;
LAB_006fb4f0:
  *(long *)param_1[1] = lVar7;
  lVar7 = (long)*(char *)((long)param_2 + 0x27);
  if (lVar7 < 0) {
    plVar8 = (long *)param_2[2];
    lVar7 = param_2[3];
  }
  *param_2 = (long)plVar8;
  *(int *)(param_2 + 1) = (int)lVar7;
  return;
}


// ===== 006fb550  FUN_006fb550 =====

long FUN_006fb550(undefined8 *param_1,void *param_2)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  void *__dest;
  ulong __n;
  void *__src;
  uint uVar6;
  
  param_1 = (undefined8 *)*param_1;
  plVar2 = (long *)*param_1;
  __src = *(void **)param_1[1];
  __n = (ulong)*(uint *)param_1[2];
  uVar6 = ((int)plVar2[1] - (int)__src) + 0x10;
  __dest = param_2;
  do {
    if (plVar2[2] == 0) {
LAB_006fb640:
      lVar4 = 0;
      goto LAB_006fb658;
    }
    if ((int)uVar6 < 0) goto LAB_006fb680;
    if ((__src == (void *)0x0) && (uVar6 != 0)) goto LAB_006fb694;
    memcpy(__dest,__src,(ulong)uVar6);
    __dest = (void *)((long)__dest + (ulong)uVar6);
    if (*(int *)((long)plVar2 + 0x1c) < 0x11) goto LAB_006fb640;
    lVar4 = FUN_006f5318(plVar2,0,0xffffffff);
    lVar5 = plVar2[1];
    if (lVar4 == 0) {
      lVar4 = 0;
      *plVar2 = lVar5;
      *(undefined4 *)(plVar2 + 10) = 1;
      goto LAB_006fb658;
    }
    __src = (void *)(lVar4 + 0x10);
    uVar3 = (int)__n - uVar6;
    __n = (ulong)uVar3;
    uVar1 = *(int *)((long)plVar2 + 0x1c) + ((int)lVar4 - (int)lVar5);
    uVar6 = ((int)lVar5 - (int)__src) + 0x10;
    *(uint *)((long)plVar2 + 0x1c) = uVar1;
    *plVar2 = lVar5 + (int)(uVar1 & (int)uVar1 >> 0x1f);
  } while (uVar6 < uVar3);
  if ((int)uVar3 < 0) {
LAB_006fb680:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/string_view:331: libc++ Hardening assertion __len <= static_cast<size_type>(numeric_limits<difference_type>::max()) failed: string_view::string_view(_CharT *, size_t): length does not fit in difference_type\n"
              );
  }
  if ((uVar3 != 0) && (__src == (void *)0x0)) {
LAB_006fb694:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/string_view:333: libc++ Hardening assertion __len == 0 || __s != nullptr failed: string_view::string_view(_CharT *, size_t): received nullptr\n"
              );
  }
  memcpy(__dest,__src,__n);
  __dest = (void *)((long)__dest + __n);
  lVar4 = (long)__src + __n;
LAB_006fb658:
  *(long *)param_1[1] = lVar4;
  return (long)__dest - (long)param_2;
}


// ===== 006fb6a8  FUN_006fb6a8 =====

/* WARNING: Removing unreachable block (ram,0x006fb8bc) */
/* WARNING: Removing unreachable block (ram,0x006fb8c4) */
/* WARNING: Removing unreachable block (ram,0x006fb8b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_006fb6a8(ulong *param_1,long param_2)

{
  ulong *puVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  int iVar4;
  uint uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  ulong *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  long lVar14;
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
  byte bVar44;
  byte bVar45;
  byte bVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  
  if (param_2 == 0) {
    return true;
  }
  puVar1 = (ulong *)((long)param_1 + param_2);
  puVar10 = param_1;
  puVar13 = param_1;
  lVar14 = param_2;
  if (7 < param_2) {
    do {
      if ((*puVar10 & 0x8080808080808080) != 0) break;
      lVar14 = lVar14 + -8;
      puVar10 = puVar10 + 1;
      puVar13 = puVar13 + 1;
    } while (7 < lVar14);
  }
  puVar11 = puVar10;
  if (puVar10 < puVar1) {
    puVar12 = puVar10;
    for (uVar2 = (long)puVar1 - (long)puVar13 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      puVar11 = puVar12;
      if ((char)*puVar12 < '\0') goto LAB_006fb788;
      puVar12 = (ulong *)((long)puVar12 + 1);
    }
    puVar10 = (ulong *)((long)puVar10 + ((long)puVar1 - (long)puVar13));
    puVar11 = puVar10;
    if ((ulong)((long)puVar13 - (long)(param_2 + (long)param_1)) < 0xfffffffffffffffd) {
      puVar12 = (ulong *)((long)puVar12 + 3);
      do {
        puVar11 = puVar12;
        if ((char)*puVar12 < '\0') break;
        puVar13 = (ulong *)((long)puVar12 + 1);
        puVar12 = (ulong *)((long)puVar12 + 4);
        puVar11 = puVar10;
      } while (puVar13 != puVar10);
    }
  }
LAB_006fb788:
  lVar14 = (long)puVar1 - (long)puVar11;
  if (0xf < lVar14) {
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
    bVar46 = 0;
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
    bVar30 = 0;
    auVar9._8_8_ = _UNK_001f33c8;
    auVar9._0_8_ = _DAT_001f33c0;
    auVar48 = ZEXT816(0);
    do {
      auVar53[9] = bVar40;
      auVar53[8] = bVar39;
      auVar53[10] = bVar41;
      auVar53[0xb] = bVar42;
      auVar53[0xc] = bVar43;
      auVar53[0xd] = bVar44;
      auVar53[0xe] = bVar45;
      auVar53[0xf] = bVar46;
      auVar53[1] = bVar32;
      auVar53[0] = bVar31;
      auVar53[2] = bVar33;
      auVar53[3] = bVar34;
      auVar53[4] = bVar35;
      auVar53[5] = bVar36;
      auVar53[6] = bVar37;
      auVar53[7] = bVar38;
      puVar10 = puVar11 + 2;
      uVar6 = puVar11[1];
      bVar39 = (byte)uVar6;
      bVar40 = (byte)(uVar6 >> 8);
      bVar41 = (byte)(uVar6 >> 0x10);
      bVar42 = (byte)(uVar6 >> 0x18);
      bVar43 = (byte)(uVar6 >> 0x20);
      bVar44 = (byte)(uVar6 >> 0x28);
      bVar45 = (byte)(uVar6 >> 0x30);
      bVar46 = (byte)(uVar6 >> 0x38);
      uVar2 = *puVar11;
      bVar31 = (byte)uVar2;
      bVar32 = (byte)(uVar2 >> 8);
      bVar33 = (byte)(uVar2 >> 0x10);
      bVar34 = (byte)(uVar2 >> 0x18);
      bVar35 = (byte)(uVar2 >> 0x20);
      bVar36 = (byte)(uVar2 >> 0x28);
      bVar37 = (byte)(uVar2 >> 0x30);
      bVar38 = (byte)(uVar2 >> 0x38);
      lVar14 = lVar14 + -0x10;
      auVar55[0] = bVar31 >> 4;
      auVar55[1] = bVar32 >> 4;
      auVar55[2] = bVar33 >> 4;
      auVar55[3] = bVar34 >> 4;
      auVar55[4] = bVar35 >> 4;
      auVar55[5] = bVar36 >> 4;
      auVar55[6] = bVar37 >> 4;
      auVar55[7] = bVar38 >> 4;
      auVar55[8] = bVar39 >> 4;
      auVar55[9] = bVar40 >> 4;
      auVar55[10] = bVar41 >> 4;
      auVar55[0xb] = bVar42 >> 4;
      auVar55[0xc] = bVar43 >> 4;
      auVar55[0xd] = bVar44 >> 4;
      auVar55[0xe] = bVar45 >> 4;
      auVar55[0xf] = bVar46 >> 4;
      auVar47[9] = bVar40;
      auVar47._0_9_ = *(unkbyte9 *)puVar11;
      auVar47[10] = bVar41;
      auVar47[0xb] = bVar42;
      auVar47[0xc] = bVar43;
      auVar47[0xd] = bVar44;
      auVar47[0xe] = bVar45;
      auVar47[0xf] = bVar46;
      auVar50 = NEON_ext(auVar53,auVar47,0xf,1);
      auVar53 = a64_TBL(ZEXT816(0),auVar9,auVar55);
      auVar52 = a64_TBL(ZEXT816(0),_DAT_001f41c0,auVar55);
      auVar51[0] = auVar50[0] + ' ';
      auVar51[1] = auVar50[1] + ' ';
      auVar51[2] = auVar50[2] + ' ';
      auVar51[3] = auVar50[3] + ' ';
      auVar51[4] = auVar50[4] + ' ';
      auVar51[5] = auVar50[5] + ' ';
      auVar51[6] = auVar50[6] + ' ';
      auVar51[7] = auVar50[7] + ' ';
      auVar51[8] = auVar50[8] + ' ';
      auVar51[9] = auVar50[9] + ' ';
      auVar51[10] = auVar50[10] + ' ';
      auVar51[0xb] = auVar50[0xb] + ' ';
      auVar51[0xc] = auVar50[0xc] + ' ';
      auVar51[0xd] = auVar50[0xd] + ' ';
      auVar51[0xe] = auVar50[0xe] + ' ';
      auVar51[0xf] = auVar50[0xf] + ' ';
      auVar54 = NEON_ext(auVar48,auVar53,0xe,1);
      auVar55 = NEON_ext(auVar48,auVar53,0xf,1);
      auVar47 = NEON_ext(auVar48,auVar53,0xd,1);
      auVar48[1] = DAT_00208462;
      auVar48[0] = DAT_00208460;
      auVar48[2] = DAT_00208464;
      auVar48[3] = DAT_00208466;
      auVar48[4] = DAT_00208468;
      auVar48[5] = DAT_0020846a;
      auVar48[6] = DAT_0020846c;
      auVar48[7] = DAT_0020846e;
      auVar48[8] = DAT_00208470;
      auVar48[9] = DAT_00208472;
      auVar48[10] = DAT_00208474;
      auVar48[0xb] = DAT_00208476;
      auVar48[0xc] = DAT_00208478;
      auVar48[0xd] = DAT_0020847a;
      auVar48[0xe] = DAT_0020847c;
      auVar48[0xf] = DAT_0020847e;
      auVar50[1] = DAT_00208463;
      auVar50[0] = DAT_00208461;
      auVar50[2] = DAT_00208465;
      auVar50[3] = DAT_00208467;
      auVar50[4] = DAT_00208469;
      auVar50[5] = DAT_0020846b;
      auVar50[6] = DAT_0020846d;
      auVar50[7] = DAT_0020846f;
      auVar50[8] = DAT_00208471;
      auVar50[9] = DAT_00208473;
      auVar50[10] = DAT_00208475;
      auVar50[0xb] = DAT_00208477;
      auVar50[0xc] = DAT_00208479;
      auVar50[0xd] = DAT_0020847b;
      auVar50[0xe] = DAT_0020847d;
      auVar50[0xf] = DAT_0020847f;
      auVar50 = a64_TBL(ZEXT816(0),auVar48,auVar50,auVar51);
      auVar7[8] = 1;
      auVar7._0_8_ = 0x101010101010101;
      auVar7[9] = 1;
      auVar7[10] = 1;
      auVar7[0xb] = 1;
      auVar7[0xc] = 1;
      auVar7[0xd] = 1;
      auVar7[0xe] = 1;
      auVar7[0xf] = 1;
      auVar54 = NEON_uqsub(auVar54,auVar7,1);
      auVar8[8] = 2;
      auVar8._0_8_ = 0x202020202020202;
      auVar8[9] = 2;
      auVar8[10] = 2;
      auVar8[0xb] = 2;
      auVar8[0xc] = 2;
      auVar8[0xd] = 2;
      auVar8[0xe] = 2;
      auVar8[0xf] = 2;
      auVar48 = NEON_uqsub(auVar47,auVar8,1);
      auVar49[0] = (auVar52[0] | auVar55[0] | auVar54[0] | auVar48[0]) + auVar50[0];
      auVar49[1] = (auVar52[1] | auVar55[1] | auVar54[1] | auVar48[1]) + auVar50[1];
      auVar49[2] = (auVar52[2] | auVar55[2] | auVar54[2] | auVar48[2]) + auVar50[2];
      auVar49[3] = (auVar52[3] | auVar55[3] | auVar54[3] | auVar48[3]) + auVar50[3];
      auVar49[4] = (auVar52[4] | auVar55[4] | auVar54[4] | auVar48[4]) + auVar50[4];
      auVar49[5] = (auVar52[5] | auVar55[5] | auVar54[5] | auVar48[5]) + auVar50[5];
      auVar49[6] = (auVar52[6] | auVar55[6] | auVar54[6] | auVar48[6]) + auVar50[6];
      auVar49[7] = (auVar52[7] | auVar55[7] | auVar54[7] | auVar48[7]) + auVar50[7];
      auVar49[8] = (auVar52[8] | auVar55[8] | auVar54[8] | auVar48[8]) + auVar50[8];
      auVar49[9] = (auVar52[9] | auVar55[9] | auVar54[9] | auVar48[9]) + auVar50[9];
      auVar49[10] = (auVar52[10] | auVar55[10] | auVar54[10] | auVar48[10]) + auVar50[10];
      auVar49[0xb] = (auVar52[0xb] | auVar55[0xb] | auVar54[0xb] | auVar48[0xb]) + auVar50[0xb];
      auVar49[0xc] = (auVar52[0xc] | auVar55[0xc] | auVar54[0xc] | auVar48[0xc]) + auVar50[0xc];
      auVar49[0xd] = (auVar52[0xd] | auVar55[0xd] | auVar54[0xd] | auVar48[0xd]) + auVar50[0xd];
      auVar49[0xe] = (auVar52[0xe] | auVar55[0xe] | auVar54[0xe] | auVar48[0xe]) + auVar50[0xe];
      auVar49[0xf] = (auVar52[0xf] | auVar55[0xf] | auVar54[0xf] | auVar48[0xf]) + auVar50[0xf];
      auVar50 = a64_TBL(ZEXT816(0),_DAT_001f1d90,auVar49);
      auVar48 = a64_TBL(ZEXT816(0),_DAT_001f1bd0,auVar49);
      auVar52[9] = bVar40;
      auVar52._0_9_ = *(unkbyte9 *)puVar11;
      auVar52[10] = bVar41;
      auVar52[0xb] = bVar42;
      auVar52[0xc] = bVar43;
      auVar52[0xd] = bVar44;
      auVar52[0xe] = bVar45;
      auVar52[0xf] = bVar46;
      auVar50 = NEON_cmhi(auVar50,auVar52,1);
      auVar54[9] = bVar40;
      auVar54._0_9_ = *(unkbyte9 *)puVar11;
      auVar54[10] = bVar41;
      auVar54[0xb] = bVar42;
      auVar54[0xc] = bVar43;
      auVar54[0xd] = bVar44;
      auVar54[0xe] = bVar45;
      auVar54[0xf] = bVar46;
      auVar48 = NEON_cmhi(auVar54,auVar48,1);
      bVar15 = auVar48[0] | auVar50[0] | bVar15;
      bVar16 = auVar48[1] | auVar50[1] | bVar16;
      bVar17 = auVar48[2] | auVar50[2] | bVar17;
      bVar18 = auVar48[3] | auVar50[3] | bVar18;
      bVar19 = auVar48[4] | auVar50[4] | bVar19;
      bVar20 = auVar48[5] | auVar50[5] | bVar20;
      bVar21 = auVar48[6] | auVar50[6] | bVar21;
      bVar22 = auVar48[7] | auVar50[7] | bVar22;
      bVar23 = auVar48[8] | auVar50[8] | bVar23;
      bVar24 = auVar48[9] | auVar50[9] | bVar24;
      bVar25 = auVar48[10] | auVar50[10] | bVar25;
      bVar26 = auVar48[0xb] | auVar50[0xb] | bVar26;
      bVar27 = auVar48[0xc] | auVar50[0xc] | bVar27;
      bVar28 = auVar48[0xd] | auVar50[0xd] | bVar28;
      bVar29 = auVar48[0xe] | auVar50[0xe] | bVar29;
      bVar30 = auVar48[0xf] | auVar50[0xf] | bVar30;
      puVar11 = puVar10;
      auVar48 = auVar53;
    } while (0xf < lVar14);
    uVar5 = (uint)(uVar6 >> 0x20);
    if ((int)uVar5 < -0x40000000) {
      if ((uVar5 & 0xc00000) == 0x800000) {
        lVar14 = 0;
        if ((uVar5 & 0xc000) != 0x8000) {
          lVar14 = -3;
        }
      }
      else {
        lVar14 = -2;
      }
    }
    else {
      lVar14 = -1;
    }
    auVar3[1] = bVar16;
    auVar3[0] = bVar15;
    auVar3[2] = bVar17;
    auVar3[3] = bVar18;
    auVar3[4] = bVar19;
    auVar3[5] = bVar20;
    auVar3[6] = bVar21;
    auVar3[7] = bVar22;
    auVar3[8] = bVar23;
    auVar3[9] = bVar24;
    auVar3[10] = bVar25;
    auVar3[0xb] = bVar26;
    auVar3[0xc] = bVar27;
    auVar3[0xd] = bVar28;
    auVar3[0xe] = bVar29;
    auVar3[0xf] = bVar30;
    iVar4 = NEON_umaxv(auVar3,4);
    if (iVar4 != 0) {
      return false;
    }
    puVar11 = (ulong *)((long)puVar10 + lVar14);
  }
  lVar14 = FUN_006fb8d4(puVar11,puVar1,0);
  return lVar14 != 0;
}


// ===== 006fb8d4  FUN_006fb8d4 =====

long FUN_006fb8d4(byte *param_1,byte *param_2,uint param_3)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  
  if (param_1 < param_2) {
    lVar4 = 0;
    lVar8 = 0;
    do {
      bVar2 = *param_1;
      lVar1 = 0;
      if (param_3 != 0) {
        lVar1 = lVar8;
      }
      lVar4 = lVar4 + lVar1;
      if ((char)bVar2 < '\0') {
        uVar9 = (long)param_2 - (long)param_1;
        uVar5 = (uint)bVar2;
        if (((uVar9 < 2) || (0x1d < uVar5 - 0xc2)) ||
           ((char)param_1[1] + 0x40 < 0 == SCARRY4((int)(char)param_1[1],0x40))) {
          if (uVar9 < 3) {
            return lVar4;
          }
          bVar3 = param_1[1];
          iVar7 = (int)(char)bVar3;
          if (iVar7 != -0x41 && iVar7 + 0x41 < 0 == SCARRY4(iVar7,0x41)) {
            return lVar4;
          }
          iVar7 = (int)(char)param_1[2];
          if (iVar7 != -0x41 && iVar7 + 0x41 < 0 == SCARRY4(iVar7,0x41)) {
            return lVar4;
          }
          uVar6 = (uint)bVar2;
          if (uVar6 - 0xe1 < 0xc) {
LAB_006fb9f4:
            lVar8 = 3;
          }
          else {
            lVar8 = 3;
            if (uVar5 != 0xe0 || bVar3 < 0xa0) {
              if ((uVar6 & 0xfe) == 0xee) goto LAB_006fb9f4;
              lVar8 = 3;
              if (uVar6 != 0xed || 0x9f < bVar3) {
                if (uVar9 == 3) {
                  return lVar4;
                }
                iVar7 = (int)(char)param_1[3];
                if (iVar7 != -0x41 && iVar7 + 0x41 < 0 == SCARRY4(iVar7,0x41)) {
                  return lVar4;
                }
                if (2 < uVar5 - 0xf1) {
                  lVar8 = 4;
                  if ((uVar6 == 0xf0 && 0x8e < bVar3) && (uVar6 != 0xf0 || bVar3 != 0x8f))
                  goto LAB_006fb8fc;
                  if (uVar5 != 0xf4) {
                    return lVar4;
                  }
                  if (0x8f < bVar3) {
                    return lVar4;
                  }
                }
                lVar8 = 4;
              }
            }
          }
        }
        else {
          lVar8 = 2;
        }
      }
      else {
        lVar8 = 1;
      }
LAB_006fb8fc:
      param_1 = param_1 + lVar8;
    } while (param_1 < param_2);
  }
  else {
    lVar8 = 0;
    lVar4 = 0;
  }
  lVar1 = 0;
  if (param_3 != 0) {
    lVar1 = lVar8;
  }
  return lVar1 + (ulong)(param_3 ^ 1) + lVar4;
}


// ===== 006fba24  FUN_006fba24 =====

void FUN_006fba24(int param_1,uint param_2,undefined8 *param_3)

{
  uint uVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  
  pbVar3 = (byte *)param_3[8];
  uVar6 = param_1 << 3;
  if ((byte *)*param_3 <= pbVar3) {
    pbVar3 = (byte *)FUN_006dcdb8(param_3,pbVar3);
  }
  pbVar4 = pbVar3;
  if (0x7f < uVar6) {
    do {
      uVar1 = uVar6 >> 0xe;
      bVar2 = (byte)uVar6;
      uVar6 = uVar6 >> 7;
      pbVar3 = pbVar4 + 1;
      *pbVar4 = bVar2 | 0x80;
      pbVar4 = pbVar3;
    } while (uVar1 != 0);
  }
  pbVar4 = pbVar3 + 1;
  *pbVar3 = (byte)uVar6;
  uVar7 = (ulong)(int)param_2;
  param_3[8] = pbVar4;
  if ((byte *)*param_3 <= pbVar4) {
    pbVar4 = (byte *)FUN_006dcdb8(param_3,pbVar4);
  }
  pbVar3 = pbVar4;
  uVar8 = uVar7;
  if (0x7f < param_2) {
    do {
      uVar7 = uVar8 >> 7;
      uVar5 = uVar8 >> 0xe;
      pbVar4 = pbVar3 + 1;
      *pbVar3 = (byte)uVar8 | 0x80;
      pbVar3 = pbVar4;
      uVar8 = uVar7;
    } while (uVar5 != 0);
  }
  *pbVar4 = (byte)uVar7;
  param_3[8] = pbVar4 + 1;
  return;
}


// ===== 006fbb00  FUN_006fbb00 =====

void FUN_006fbb00(int param_1,ulong param_2,undefined8 *param_3)

{
  uint uVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  
  pbVar3 = (byte *)param_3[8];
  uVar7 = param_1 << 3;
  if ((byte *)*param_3 <= pbVar3) {
    pbVar3 = (byte *)FUN_006dcdb8(param_3,pbVar3);
  }
  pbVar4 = pbVar3;
  if (0x7f < uVar7) {
    do {
      uVar1 = uVar7 >> 0xe;
      bVar2 = (byte)uVar7;
      uVar7 = uVar7 >> 7;
      pbVar3 = pbVar4 + 1;
      *pbVar4 = bVar2 | 0x80;
      pbVar4 = pbVar3;
    } while (uVar1 != 0);
  }
  pbVar4 = pbVar3 + 1;
  *pbVar3 = (byte)uVar7;
  param_3[8] = pbVar4;
  if ((byte *)*param_3 <= pbVar4) {
    pbVar4 = (byte *)FUN_006dcdb8(param_3,pbVar4);
  }
  pbVar3 = pbVar4;
  uVar6 = param_2;
  if (0x7f < param_2) {
    do {
      param_2 = uVar6 >> 7;
      uVar5 = uVar6 >> 0xe;
      pbVar4 = pbVar3 + 1;
      *pbVar3 = (byte)uVar6 | 0x80;
      pbVar3 = pbVar4;
      uVar6 = param_2;
    } while (uVar5 != 0);
  }
  *pbVar4 = (byte)param_2;
  param_3[8] = pbVar4 + 1;
  return;
}


// ===== 006fbbd8  FUN_006fbbd8 =====

void FUN_006fbbd8(int param_1,uint param_2,undefined8 *param_3)

{
  uint uVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  
  pbVar3 = (byte *)param_3[8];
  uVar5 = param_1 << 3;
  if ((byte *)*param_3 <= pbVar3) {
    pbVar3 = (byte *)FUN_006dcdb8(param_3,pbVar3);
  }
  pbVar4 = pbVar3;
  if (0x7f < uVar5) {
    do {
      uVar1 = uVar5 >> 0xe;
      bVar2 = (byte)uVar5;
      uVar5 = uVar5 >> 7;
      pbVar3 = pbVar4 + 1;
      *pbVar4 = bVar2 | 0x80;
      pbVar4 = pbVar3;
    } while (uVar1 != 0);
  }
  pbVar4 = pbVar3 + 1;
  *pbVar3 = (byte)uVar5;
  param_3[8] = pbVar4;
  if ((byte *)*param_3 <= pbVar4) {
    pbVar4 = (byte *)FUN_006dcdb8(param_3,pbVar4);
  }
  pbVar3 = pbVar4;
  if (0x7f < param_2) {
    do {
      uVar5 = param_2 >> 0xe;
      bVar2 = (byte)param_2;
      param_2 = param_2 >> 7;
      pbVar4 = pbVar3 + 1;
      *pbVar3 = bVar2 | 0x80;
      pbVar3 = pbVar4;
    } while (uVar5 != 0);
  }
  *pbVar4 = (byte)param_2;
  param_3[8] = pbVar4 + 1;
  return;
}


// ===== 006fbca8  FUN_006fbca8 =====

void FUN_006fbca8(int param_1,ulong param_2,undefined8 *param_3)

{
  uint uVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  
  pbVar3 = (byte *)param_3[8];
  uVar7 = param_1 << 3;
  if ((byte *)*param_3 <= pbVar3) {
    pbVar3 = (byte *)FUN_006dcdb8(param_3,pbVar3);
  }
  pbVar4 = pbVar3;
  if (0x7f < uVar7) {
    do {
      uVar1 = uVar7 >> 0xe;
      bVar2 = (byte)uVar7;
      uVar7 = uVar7 >> 7;
      pbVar3 = pbVar4 + 1;
      *pbVar4 = bVar2 | 0x80;
      pbVar4 = pbVar3;
    } while (uVar1 != 0);
  }
  pbVar4 = pbVar3 + 1;
  *pbVar3 = (byte)uVar7;
  param_3[8] = pbVar4;
  if ((byte *)*param_3 <= pbVar4) {
    pbVar4 = (byte *)FUN_006dcdb8(param_3,pbVar4);
  }
  pbVar3 = pbVar4;
  uVar6 = param_2;
  if (0x7f < param_2) {
    do {
      param_2 = uVar6 >> 7;
      uVar5 = uVar6 >> 0xe;
      pbVar4 = pbVar3 + 1;
      *pbVar3 = (byte)uVar6 | 0x80;
      pbVar3 = pbVar4;
      uVar6 = param_2;
    } while (uVar5 != 0);
  }
  *pbVar4 = (byte)param_2;
  param_3[8] = pbVar4 + 1;
  return;
}


// ===== 006fbd80  FUN_006fbd80 =====

void FUN_006fbd80(int param_1,int param_2,undefined8 *param_3)

{
  uint uVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  
  pbVar3 = (byte *)param_3[8];
  uVar5 = param_1 << 3;
  if ((byte *)*param_3 <= pbVar3) {
    pbVar3 = (byte *)FUN_006dcdb8(param_3,pbVar3);
  }
  pbVar4 = pbVar3;
  if (0x7f < uVar5) {
    do {
      uVar1 = uVar5 >> 0xe;
      bVar2 = (byte)uVar5;
      uVar5 = uVar5 >> 7;
      pbVar3 = pbVar4 + 1;
      *pbVar4 = bVar2 | 0x80;
      pbVar4 = pbVar3;
    } while (uVar1 != 0);
  }
  pbVar4 = pbVar3 + 1;
  *pbVar3 = (byte)uVar5;
  param_3[8] = pbVar4;
  uVar5 = param_2 << 1 ^ param_2 >> 0x1f;
  if ((byte *)*param_3 <= pbVar4) {
    pbVar4 = (byte *)FUN_006dcdb8(param_3,pbVar4);
  }
  pbVar3 = pbVar4;
  if (0x7f < uVar5) {
    do {
      uVar1 = uVar5 >> 0xe;
      bVar2 = (byte)uVar5;
      uVar5 = uVar5 >> 7;
      pbVar4 = pbVar3 + 1;
      *pbVar3 = bVar2 | 0x80;
      pbVar3 = pbVar4;
    } while (uVar1 != 0);
  }
  *pbVar4 = (byte)uVar5;
  param_3[8] = pbVar4 + 1;
  return;
}


// ===== 006fbe58  FUN_006fbe58 =====

void FUN_006fbe58(int param_1,long param_2,undefined8 *param_3)

{
  uint uVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  
  pbVar3 = (byte *)param_3[8];
  uVar8 = param_1 << 3;
  if ((byte *)*param_3 <= pbVar3) {
    pbVar3 = (byte *)FUN_006dcdb8(param_3,pbVar3);
  }
  pbVar4 = pbVar3;
  if (0x7f < uVar8) {
    do {
      uVar1 = uVar8 >> 0xe;
      bVar2 = (byte)uVar8;
      uVar8 = uVar8 >> 7;
      pbVar3 = pbVar4 + 1;
      *pbVar4 = bVar2 | 0x80;
      pbVar4 = pbVar3;
    } while (uVar1 != 0);
  }
  pbVar4 = pbVar3 + 1;
  *pbVar3 = (byte)uVar8;
  param_3[8] = pbVar4;
  uVar6 = param_2 << 1 ^ param_2 >> 0x3f;
  if ((byte *)*param_3 <= pbVar4) {
    pbVar4 = (byte *)FUN_006dcdb8(param_3,pbVar4);
  }
  pbVar3 = pbVar4;
  uVar7 = uVar6;
  if (0x7f < uVar6) {
    do {
      uVar6 = uVar7 >> 7;
      uVar5 = uVar7 >> 0xe;
      pbVar4 = pbVar3 + 1;
      *pbVar3 = (byte)uVar7 | 0x80;
      pbVar3 = pbVar4;
      uVar7 = uVar6;
    } while (uVar5 != 0);
  }
  *pbVar4 = (byte)uVar6;
  param_3[8] = pbVar4 + 1;
  return;
}


// ===== 006fbf38  FUN_006fbf38 =====

void FUN_006fbf38(int param_1,undefined4 param_2,undefined8 *param_3)

{
  uint uVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  
  pbVar3 = (byte *)param_3[8];
  uVar5 = param_1 << 3 | 5;
  if ((byte *)*param_3 <= pbVar3) {
    pbVar3 = (byte *)FUN_006dcdb8(param_3,pbVar3);
  }
  pbVar4 = pbVar3;
  if (0x7f < (uint)(param_1 << 3)) {
    do {
      uVar1 = uVar5 >> 0xe;
      bVar2 = (byte)uVar5;
      uVar5 = uVar5 >> 7;
      pbVar3 = pbVar4 + 1;
      *pbVar4 = bVar2 | 0x80;
      pbVar4 = pbVar3;
    } while (uVar1 != 0);
  }
  pbVar4 = pbVar3 + 1;
  *pbVar3 = (byte)uVar5;
  param_3[8] = pbVar4;
  if ((byte *)*param_3 <= pbVar4) {
    pbVar4 = (byte *)FUN_006dcdb8(param_3,pbVar4);
  }
  *(undefined4 *)pbVar4 = param_2;
  param_3[8] = pbVar4 + 4;
  return;
}


// ===== 006fbfec  FUN_006fbfec =====

void FUN_006fbfec(int param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  
  pbVar3 = (byte *)param_3[8];
  uVar5 = param_1 << 3 | 1;
  if ((byte *)*param_3 <= pbVar3) {
    pbVar3 = (byte *)FUN_006dcdb8(param_3,pbVar3);
  }
  pbVar4 = pbVar3;
  if (0x7f < (uint)(param_1 << 3)) {
    do {
      uVar1 = uVar5 >> 0xe;
      bVar2 = (byte)uVar5;
      uVar5 = uVar5 >> 7;
      pbVar3 = pbVar4 + 1;
      *pbVar4 = bVar2 | 0x80;
      pbVar4 = pbVar3;
    } while (uVar1 != 0);
  }
  pbVar4 = pbVar3 + 1;
  *pbVar3 = (byte)uVar5;
  param_3[8] = pbVar4;
  if ((byte *)*param_3 <= pbVar4) {
    pbVar4 = (byte *)FUN_006dcdb8(param_3,pbVar4);
  }
  *(undefined8 *)pbVar4 = param_2;
  param_3[8] = pbVar4 + 8;
  return;
}


// ===== 006fc0a0  FUN_006fc0a0 =====

void FUN_006fc0a0(int param_1,byte param_2,undefined8 *param_3)

{
  uint uVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  
  pbVar3 = (byte *)param_3[8];
  uVar5 = param_1 << 3;
  if ((byte *)*param_3 <= pbVar3) {
    pbVar3 = (byte *)FUN_006dcdb8(param_3,pbVar3);
  }
  pbVar4 = pbVar3;
  if (0x7f < uVar5) {
    do {
      uVar1 = uVar5 >> 0xe;
      bVar2 = (byte)uVar5;
      uVar5 = uVar5 >> 7;
      pbVar3 = pbVar4 + 1;
      *pbVar4 = bVar2 | 0x80;
      pbVar4 = pbVar3;
    } while (uVar1 != 0);
  }
  pbVar4 = pbVar3 + 1;
  *pbVar3 = (byte)uVar5;
  param_3[8] = pbVar4;
  if ((byte *)*param_3 <= pbVar4) {
    pbVar4 = (byte *)FUN_006dcdb8(param_3,pbVar4);
  }
  *pbVar4 = param_2 & 1;
  param_3[8] = pbVar4 + 1;
  return;
}


