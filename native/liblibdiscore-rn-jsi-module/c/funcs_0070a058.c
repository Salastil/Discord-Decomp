// ===== 0070a058  FUN_0070a058 =====

void FUN_0070a058(long *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long local_a0;
  long local_98;
  
  <reqwest::async_impl::decoder::Decoder_as_http_body::Body>::poll_frame(&local_a0,param_2 + 0x10);
  while( true ) {
    if (local_a0 == 3) {
      *param_1 = -3;
      return;
    }
    if (local_a0 == -2) {
      *param_1 = -2;
      param_1[1] = local_98;
      return;
    }
    if (local_a0 == -3) {
      lVar1 = *param_2;
      *param_2 = -2;
      if (lVar1 != -2) {
        lVar4 = param_2[10];
        lVar3 = param_2[9];
        lVar6 = param_2[0xc];
        lVar5 = param_2[0xb];
        lVar2 = param_2[0xf];
        *param_1 = lVar1;
        param_1[10] = lVar4;
        param_1[9] = lVar3;
        lVar3 = param_2[0xe];
        lVar1 = param_2[0xd];
        param_1[0xc] = lVar6;
        param_1[0xb] = lVar5;
        lVar5 = param_2[2];
        lVar4 = param_2[1];
        param_1[0xe] = lVar3;
        param_1[0xd] = lVar1;
        lVar3 = param_2[4];
        lVar1 = param_2[3];
        param_1[2] = lVar5;
        param_1[1] = lVar4;
        lVar5 = param_2[6];
        lVar4 = param_2[5];
        param_1[4] = lVar3;
        param_1[3] = lVar1;
        lVar3 = param_2[8];
        lVar1 = param_2[7];
        param_1[6] = lVar5;
        param_1[5] = lVar4;
        param_1[0xf] = lVar2;
        param_1[8] = lVar3;
        param_1[7] = lVar1;
        return;
      }
                    /* WARNING: Subroutine does not return */
      core::option::expect_failed
                ("polled after complete",0x15,&PTR_s__root__cargo_registry_src_index__00ad5b30);
    }
    if (*param_2 == -2) break;
    FUN_0074e108(param_2,&local_a0);
    <reqwest::async_impl::decoder::Decoder_as_http_body::Body>::poll_frame
              (&local_a0,param_2 + 0x10,param_3);
  }
                    /* try { // try from 0070a1c4 to 0070a1cf has its CatchHandler @ 0070a1ec */
                    /* WARNING: Subroutine does not return */
  core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00ad5b18);
}


// ===== 0070a204  FUN_0070a204 =====

void FUN_0070a204(int *param_1,undefined8 param_2)

{
  int *local_18;
  
  if (*param_1 == 0) {
    local_18 = param_1 + 2;
    <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field2_finish
              (param_2,"InvalidHexCharacter",0x13,"c",1,param_1 + 1,&DAT_00ad5b48,"index",5,
               &local_18,&DAT_00ad5b68);
    return;
  }
  if (*param_1 == 1) {
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"OddLength",9);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"InvalidStringLength",0x13);
  return;
}


// ===== 0070a2a4  FUN_0070a2a4 =====

void FUN_0070a2a4(long *param_1)

{
  if (*(long *)(*param_1 + 0x58) != 0) {
    return;
  }
  return;
}


// ===== 0070a2bc  FUN_0070a2bc =====

void FUN_0070a2bc(undefined8 *param_1)

{
  <reqwest::error::Error_as_core::fmt::Debug>::fmt(*param_1);
  return;
}


// ===== 0070a2c4  FUN_0070a2c4 =====

void FUN_0070a2c4(undefined8 *param_1)

{
  <anyhow::Error_as_core::fmt::Display>::fmt(*param_1);
  return;
}


// ===== 0070a2cc  FUN_0070a2cc =====

void FUN_0070a2cc(undefined8 *param_1)

{
  <reqwest::error::Error_as_core::fmt::Display>::fmt(*param_1);
  return;
}


// ===== 0070a2d4  FUN_0070a2d4 =====

void FUN_0070a2d4(long param_1,undefined8 param_2)

{
  long local_18;
  
  local_18 = param_1 + 0x18;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field2_finish
            (param_2,"FromUtf8Error",0xd,"bytes",5,param_1,&PTR_FUN_00ad5b88,"error",5,&local_18,
             &DAT_00ad5ba8);
  return;
}


// ===== 0070a344  FUN_0070a344 =====

undefined1  [16] FUN_0070a344(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &UNK_00ad5be8;
  auVar1._0_8_ = param_1 + 0x10;
  return auVar1;
}


// ===== 0070a354  FUN_0070a354 =====

undefined1  [16] FUN_0070a354(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &UNK_00ad5c60;
  auVar1._0_8_ = param_1 + 0x10;
  return auVar1;
}


// ===== 0070a364  FUN_0070a364 =====

void FUN_0070a364(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  void *__ptr;
  long lVar4;
  
  __ptr = (void *)*param_1;
  if (__ptr != (void *)0xffffffffffffffff) {
    plVar1 = (long *)((long)__ptr + 8);
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 0070a39c  FUN_0070a39c =====

void FUN_0070a39c(undefined8 param_1,long param_2)

{
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    <usize_as_core::fmt::LowerHex>::fmt();
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
    <usize_as_core::fmt::Display>::fmt();
    return;
  }
  <usize_as_core::fmt::UpperHex>::fmt();
  return;
}


// ===== 0070a3b4  FUN_0070a3b4 =====

void FUN_0070a3b4(undefined8 param_1)

{
  long lVar1;
  undefined8 local_50 [6];
  
  lVar1 = anyhow::nightly::request_ref_backtrace(param_1,&DAT_00ad5558);
  if (lVar1 == 0) {
    <std::backtrace::[2]::std::backtrace::Backtrace>::capture(local_50);
  }
  else {
    local_50[0] = 0xffffffffffffffff;
  }
  FUN_00704d64(param_1,local_50);
  return;
}


// ===== 0070a408  FUN_0070a408 =====

void FUN_0070a408(undefined8 *param_1)

{
  long lVar1;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
                    /* try { // try from 0070a41c to 0070a433 has its CatchHandler @ 0070a47c */
  lVar1 = anyhow::nightly::request_ref_backtrace(param_1,&PTR_FUN_00ad55d0);
  if (lVar1 == 0) {
    <std::backtrace::[2]::std::backtrace::Backtrace>::capture(&local_50);
    uStack_58 = uStack_28;
    local_60 = local_30;
    uStack_78 = uStack_48;
    local_80 = local_50;
    uStack_68 = uStack_38;
    uStack_70 = uStack_40;
  }
  else {
    local_80 = 0xffffffffffffffff;
  }
  uStack_48 = param_1[1];
  local_50 = *param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  local_30 = param_1[4];
  FUN_00704e0c(&local_50,&local_80);
  return;
}


// ===== 0070a494  FUN_0070a494 =====

void FUN_0070a494(undefined8 *param_1)

{
  long lVar1;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
                    /* try { // try from 0070a4a8 to 0070a4bf has its CatchHandler @ 0070a508 */
  lVar1 = anyhow::nightly::request_ref_backtrace(param_1,&PTR_FUN_00ad5648);
  if (lVar1 == 0) {
    <std::backtrace::[2]::std::backtrace::Backtrace>::capture(&local_50);
    uStack_58 = uStack_28;
    local_60 = local_30;
    uStack_78 = uStack_48;
    local_80 = local_50;
    uStack_68 = uStack_38;
    uStack_70 = local_40;
  }
  else {
    local_80 = 0xffffffffffffffff;
  }
  uStack_48 = param_1[1];
  local_50 = *param_1;
  local_40 = param_1[2];
  FUN_00704eb4(&local_50,&local_80);
  return;
}


// ===== 0070a520  FUN_0070a520 =====

undefined1  [16] FUN_0070a520(long *param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  
  plVar1 = param_1 + 1;
  if (*param_1 != -1) {
    plVar1 = (long *)0x0;
  }
  auVar2._8_8_ = &PTR_FUN_00ad5cd8;
  auVar2._0_8_ = plVar1;
  return auVar2;
}


// ===== 0070a538  FUN_0070a538 =====

undefined1  [16] FUN_0070a538(ulong *param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  uVar2 = *param_1 ^ 0x8000000000000000;
  if (-1 < (long)*param_1) {
    uVar2 = 2;
  }
  if ((long)uVar2 < 2) {
    if (uVar2 == 0) {
      auVar4._8_8_ = &PTR_FUN_00ad5d50;
      auVar4._0_8_ = param_1 + 1;
      return auVar4;
    }
    auVar6._8_8_ = &PTR_FUN_00ad5dc8;
    auVar6._0_8_ = param_1 + 1;
    return auVar6;
  }
  if (uVar2 == 2) {
    auVar5._8_8_ = &PTR_FUN_00ad5e40;
    auVar5._0_8_ = param_1;
    return auVar5;
  }
  if (uVar2 == 3) {
    auVar3._8_8_ = &PTR_FUN_00ad5cd8;
    auVar3._0_8_ = param_1 + 1;
    return auVar3;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2;
  return auVar1 << 0x40;
}


// ===== 0070a5a8  FUN_0070a5a8 =====

void FUN_0070a5a8(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field1_finish
            (param_2,"ParseIntError",0xd,"kind",4,&local_18,&DAT_00ad5e98);
  return;
}


// ===== 0070a5f4  FUN_0070a5f4 =====

void FUN_0070a5f4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = ((ulong)(param_1[3] - param_1[1]) >> 3) * 0x4ec4ec4ec4ec4ec5; lVar2 != 0;
      lVar2 = lVar2 + -1) {
    if (*(long *)(lVar1 + 0x40) != 0) {
                    /* try { // try from 0070a670 to 0070a677 has its CatchHandler @ 0070a6bc */
      (**(code **)(*(long *)(lVar1 + 0x40) + 0x20))
                (lVar1 + 0x58,*(undefined8 *)(lVar1 + 0x48),*(undefined8 *)(lVar1 + 0x50));
    }
                    /* try { // try from 0070a64c to 0070a653 has its CatchHandler @ 0070a6dc */
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


// ===== 0070a724  FUN_0070a724 =====

void FUN_0070a724(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  long lVar7;
  
  lVar4 = param_1[1];
  lVar1 = param_1[3];
  if (lVar1 - lVar4 != 0) {
    uVar6 = 0;
    lVar2 = lVar4;
    do {
      lVar2 = lVar2 + 0xe0;
      puVar5 = (ulong *)(lVar4 + uVar6 * 0xe0);
      uVar3 = *puVar5;
      if (uVar3 - (uVar3 != 0) == 2) {
        lVar7 = puVar5[3] + 1;
        uVar3 = puVar5[2];
        while (lVar7 = lVar7 + -1, lVar7 != 0) {
                    /* try { // try from 0070a7e0 to 0070a7e3 has its CatchHandler @ 0070a864 */
          FUN_0076276c(uVar3);
          uVar3 = uVar3 + 0xe0;
        }
        if (puVar5[1] != 0) {
          free((void *)puVar5[2]);
        }
      }
      else if (uVar3 == (uVar3 != 0)) {
        FUN_00707408(lVar2,puVar5);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != (ulong)(lVar1 - lVar4) / 0xe0);
  }
  if (param_1[2] != 0) {
    free((void *)*param_1);
    return;
  }
  return;
}


// ===== 0070a8e8  FUN_0070a8e8 =====

void FUN_0070a8e8(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = param_1[1];
  if (param_1[3] - lVar1 != 0) {
    uVar2 = (ulong)(param_1[3] - lVar1) / 0x58;
    do {
      FUN_007069a4(lVar1);
      uVar2 = uVar2 - 1;
      lVar1 = lVar1 + 0x58;
    } while (uVar2 != 0);
  }
  if (param_1[2] != 0) {
    free((void *)*param_1);
    return;
  }
  return;
}


// ===== 0070a970  FUN_0070a970 =====

void FUN_0070a970(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = param_1[1];
  if (param_1[3] - lVar1 != 0) {
    uVar2 = (ulong)(param_1[3] - lVar1) / 0x70;
    do {
      FUN_00706ae0(lVar1);
      uVar2 = uVar2 - 1;
      lVar1 = lVar1 + 0x70;
    } while (uVar2 != 0);
  }
  if (param_1[2] != 0) {
    free((void *)*param_1);
    return;
  }
  return;
}


// ===== 0070a9f8  FUN_0070a9f8 =====

void FUN_0070a9f8(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar8 = param_1[1];
  uVar3 = param_1[3] - lVar8;
  if (uVar3 != 0) {
    lVar9 = 0;
    do {
      plVar7 = (long *)(lVar8 + lVar9 * 0x28);
      if (*plVar7 == 2) {
        lVar5 = plVar7[4];
        if (lVar5 != 0) {
          lVar10 = plVar7[3];
          lVar11 = 0;
          do {
            plVar4 = *(long **)(lVar10 + lVar11 * 0x20 + 8);
            if (plVar4 != (long *)0x0) {
              do {
                lVar6 = *plVar4;
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
                if (bVar2) {
                  *plVar4 = lVar6 + -1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
              if (lVar6 + -1 == 0) {
                DataMemoryBarrier(2,1);
                <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
              }
            }
            lVar11 = lVar11 + 1;
          } while (lVar11 != lVar5);
        }
        if (plVar7[2] != 0) {
          free((void *)plVar7[3]);
        }
      }
      else if (*plVar7 == 0) {
        plVar4 = (long *)plVar7[2];
        if (plVar4 != (long *)0x0) {
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
            <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(plVar7 + 2);
          }
        }
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 != (uVar3 >> 3) * -0x3333333333333333);
  }
  if (param_1[2] != 0) {
    free((void *)*param_1);
    return;
  }
  return;
}


// ===== 0070ab48  FUN_0070ab48 =====

void FUN_0070ab48(undefined8 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong *puVar4;
  ulong uVar5;
  long lVar6;
  
  lVar3 = param_1[1];
  uVar1 = param_1[3] - lVar3;
  if (uVar1 != 0) {
    uVar5 = 0;
    do {
      puVar4 = (ulong *)(lVar3 + uVar5 * 0x218);
      uVar2 = *puVar4;
      if (uVar2 - (uVar2 != 0) == 2) {
        lVar6 = puVar4[3] + 1;
        uVar2 = puVar4[2];
        while (lVar6 = lVar6 + -1, lVar6 != 0) {
                    /* try { // try from 0070abf8 to 0070abfb has its CatchHandler @ 0070ac78 */
          FUN_007628fc(uVar2);
          uVar2 = uVar2 + 0x218;
        }
        if (puVar4[1] != 0) {
          free((void *)puVar4[2]);
        }
      }
      else if (uVar2 == (uVar2 != 0)) {
                    /* try { // try from 0070abd8 to 0070abdf has its CatchHandler @ 0070ac70 */
        FUN_007074d4(puVar4);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar1 / 0x218);
  }
  if (param_1[2] != 0) {
    free((void *)*param_1);
    return;
  }
  return;
}


// ===== 0070acfc  FUN_0070acfc =====

void FUN_0070acfc(undefined8 *param_1)

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


// ===== 0070ad94  FUN_0070ad94 =====

void FUN_0070ad94(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = param_1[1];
  if (param_1[3] - lVar1 != 0) {
    uVar2 = (ulong)(param_1[3] - lVar1) / 0xe0;
    do {
      FUN_00707408(lVar1);
      uVar2 = uVar2 - 1;
      lVar1 = lVar1 + 0xe0;
    } while (uVar2 != 0);
  }
  if (param_1[2] != 0) {
    free((void *)*param_1);
    return;
  }
  return;
}


// ===== 0070ae1c  FUN_0070ae1c =====

void FUN_0070ae1c(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar6 = param_1[1];
  uVar3 = param_1[3] - lVar6;
  if (uVar3 != 0) {
    lVar7 = 0;
    do {
      lVar8 = lVar6 + lVar7 * 0x58;
      if (0x18 < *(byte *)(lVar8 + 0x28)) {
        plVar4 = *(long **)(lVar8 + 0x30);
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
          <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
        }
      }
      if (*(long *)(lVar8 + 0x10) != 0) {
        free(*(void **)(lVar8 + 0x18));
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 != (uVar3 >> 3) * 0x2e8ba2e8ba2e8ba3);
  }
  if (param_1[2] != 0) {
    free((void *)*param_1);
    return;
  }
  return;
}


// ===== 0070af04  FUN_0070af04 =====

void FUN_0070af04(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = param_1[1];
  uVar3 = param_1[3] - lVar7;
  if (uVar3 != 0) {
    lVar8 = 0;
    do {
      lVar6 = lVar7 + lVar8 * 0x70;
      if (0x18 < *(byte *)(lVar6 + 0x10)) {
        plVar4 = *(long **)(lVar6 + 0x18);
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
          <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
        }
      }
      if (*(byte *)(lVar6 + 0x28) != 0xff && 0x18 < *(byte *)(lVar6 + 0x28)) {
        plVar4 = *(long **)(lVar6 + 0x30);
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
          <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
        }
      }
      plVar4 = *(long **)(lVar6 + 0x50);
      if (plVar4 != (long *)0x0) {
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
          <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow((undefined8 *)(lVar6 + 0x50));
        }
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 != (uVar3 >> 4) * 0x6db6db6db6db6db7);
  }
  if (param_1[2] != 0) {
    free((void *)*param_1);
    return;
  }
  return;
}


// ===== 0070b034  FUN_0070b034 =====

void FUN_0070b034(undefined8 *param_1)

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
      plVar4 = *(long **)(lVar6 + uVar7 * 0x20 + 8);
      if (plVar4 != (long *)0x0) {
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
          <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar3 >> 5);
  }
  if (param_1[2] != 0) {
    free((void *)*param_1);
    return;
  }
  return;
}


// ===== 0070b0d0  FUN_0070b0d0 =====

void FUN_0070b0d0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = ((ulong)(param_1[3] - param_1[1]) >> 3) * -0xf4898d5f85bb395 + 1;
  lVar1 = param_1[1];
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 0070b11c to 0070b11f has its CatchHandler @ 0070b168 */
    FUN_007074d4(lVar1);
    lVar1 = lVar1 + 0x218;
  }
  if (param_1[2] != 0) {
    free((void *)*param_1);
    return;
  }
  return;
}


// ===== 0070b1b0  FUN_0070b1b0 =====

void FUN_0070b1b0(ulong *param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong *local_18;
  
  uVar1 = *param_1 ^ 0x8000000000000000;
  if (-1 < (long)*param_1) {
    uVar1 = 2;
  }
  if ((long)uVar1 < 2) {
    local_18 = param_1 + 1;
    if (uVar1 == 0) {
      <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
                (param_2,"Request",7,&local_18,&DAT_00ad5eb8);
      return;
    }
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,"JsonParseError",0xe,&local_18,&DAT_00ad5ed8);
    return;
  }
  if (uVar1 == 2) {
    local_18 = param_1;
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,"TextParseError",0xe,&local_18,&DAT_00ad5ef8);
    return;
  }
  if (uVar1 == 3) {
    local_18 = param_1 + 1;
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,"FileError",9,&local_18,&DAT_00ad5ad8);
    return;
  }
  local_18 = param_1 + 3;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field3_finish
            (param_2,&DAT_002a0d40,0x10,"start",5,param_1 + 1,&DAT_00ad5f18,"end",3,param_1 + 2,
             &DAT_00ad5f18,"file_size",9,&local_18,&DAT_00ad5f38);
  return;
}


// ===== 0070b320  FUN_0070b320 =====

void FUN_0070b320(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,"TryFromSliceError",0x11,&local_18,&DAT_00ad5f58);
  return;
}


// ===== 0070b360  FUN_0070b360 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0070b360(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_002a05f0;
  param_1[1] = _UNK_002a05f8;
  *param_1 = uVar1;
  return;
}


// ===== 0070b374  FUN_0070b374 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0070b374(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_002a0990;
  param_1[1] = _UNK_002a0998;
  *param_1 = uVar1;
  return;
}


// ===== 0070b388  FUN_0070b388 =====

undefined1  [16] FUN_0070b388(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x28;
  auVar1._0_8_ = "description() is deprecated; use Display";
  return auVar1;
}


// ===== 0070b398  FUN_0070b398 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0070b398(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_002a09a0;
  param_1[1] = _UNK_002a09a8;
  *param_1 = uVar1;
  return;
}


// ===== 0070b3ac  FUN_0070b3ac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0070b3ac(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_0029f740;
  param_1[1] = _UNK_0029f748;
  *param_1 = uVar1;
  return;
}


// ===== 0070b3c0  FUN_0070b3c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0070b3c0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_0029f450;
  param_1[1] = _UNK_0029f458;
  *param_1 = uVar1;
  return;
}


// ===== 0070b3d4  FUN_0070b3d4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0070b3d4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_0029f5a0;
  param_1[1] = _UNK_0029f5a8;
  *param_1 = uVar1;
  return;
}


// ===== 0070b3e8  FUN_0070b3e8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0070b3e8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_0029f090;
  param_1[1] = _UNK_0029f098;
  *param_1 = uVar1;
  return;
}


// ===== 0070b3fc  FUN_0070b3fc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0070b3fc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_002a0110;
  param_1[1] = _UNK_002a0118;
  *param_1 = uVar1;
  return;
}


// ===== 0070b410  FUN_0070b410 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0070b410(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_0029f5b0;
  param_1[1] = _UNK_0029f5b8;
  *param_1 = uVar1;
  return;
}


// ===== 0070b424  FUN_0070b424 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0070b424(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_0029fd80;
  param_1[1] = _UNK_0029fd88;
  *param_1 = uVar1;
  return;
}


// ===== 0070b438  FUN_0070b438 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0070b438(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_0029f1b0;
  param_1[1] = _UNK_0029f1b8;
  *param_1 = uVar1;
  return;
}


// ===== 0070b44c  FUN_0070b44c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0070b44c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_0029f2e0;
  param_1[1] = _UNK_0029f2e8;
  *param_1 = uVar1;
  return;
}


// ===== 0070b460  FUN_0070b460 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0070b460(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_0029fe90;
  param_1[1] = _UNK_0029fe98;
  *param_1 = uVar1;
  return;
}


// ===== 0070b474  FUN_0070b474 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0070b474(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_0029f810;
  param_1[1] = _UNK_0029f818;
  *param_1 = uVar1;
  return;
}


// ===== 0070b488  FUN_0070b488 =====

void FUN_0070b488(long *param_1)

{
  if (*(long *)(*param_1 + 0x58) != 0) {
    return;
  }
  return;
}


// ===== 0070b4a0  FUN_0070b4a0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0070b4a0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_002a0d50;
  param_1[1] = _UNK_002a0d58;
  *param_1 = uVar1;
  return;
}


// ===== 0070b4b4  FUN_0070b4b4 =====

undefined1  [16] FUN_0070b4b4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x28;
  auVar1._0_8_ = "description() is deprecated; use Display";
  return auVar1;
}


// ===== 0070b4c4  FUN_0070b4c4 =====

undefined8 FUN_0070b4c4(void)

{
  return 0;
}


// ===== 0070b4cc  FUN_0070b4cc =====

void FUN_0070b4cc(void)

{
  return;
}


// ===== 0070b4d0  FUN_0070b4d0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0070b4d0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_002a07f0;
  param_1[1] = _UNK_002a07f8;
  *param_1 = uVar1;
  return;
}


// ===== 0070b4e4  FUN_0070b4e4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0070b4e4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_0029fa20;
  param_1[1] = _UNK_0029fa28;
  *param_1 = uVar1;
  return;
}


// ===== 0070b4f8  FUN_0070b4f8 =====

undefined1  [16] FUN_0070b4f8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x28;
  auVar1._0_8_ = "description() is deprecated; use Display";
  return auVar1;
}


// ===== 0070b508  FUN_0070b508 =====

undefined8 FUN_0070b508(void)

{
  return 0;
}


// ===== 0070b510  FUN_0070b510 =====

void FUN_0070b510(void)

{
  return;
}


// ===== 0070b514  FUN_0070b514 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0070b514(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_0029fdc0;
  param_1[1] = _UNK_0029fdc8;
  *param_1 = uVar1;
  return;
}


// ===== 0070b528  FUN_0070b528 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0070b528(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_0029ff60;
  param_1[1] = _UNK_0029ff68;
  *param_1 = uVar1;
  return;
}


// ===== 0070b53c  FUN_0070b53c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0070b53c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_002a0590;
  param_1[1] = _UNK_002a0598;
  *param_1 = uVar1;
  return;
}


// ===== 0070b550  FUN_0070b550 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0070b550(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_002a0f30;
  param_1[1] = _UNK_002a0f38;
  *param_1 = uVar1;
  return;
}


// ===== 0070b564  FUN_0070b564 =====

undefined1  [16] FUN_0070b564(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x28;
  auVar1._0_8_ = "description() is deprecated; use Display";
  return auVar1;
}


// ===== 0070b574  FUN_0070b574 =====

undefined8 FUN_0070b574(void)

{
  return 0;
}


// ===== 0070b57c  FUN_0070b57c =====

void FUN_0070b57c(void)

{
  return;
}


// ===== 0070b580  FUN_0070b580 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0070b580(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_002a0a80;
  param_1[1] = _UNK_002a0a88;
  *param_1 = uVar1;
  return;
}


// ===== 0070b594  FUN_0070b594 =====

undefined ** FUN_0070b594(undefined8 param_1,long param_2,undefined **param_3)

{
  long lVar1;
  ulong uVar2;
  undefined **ppuVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  long local_68;
  
  if (param_3 != (undefined **)0x0) {
    do {
      auVar5 = <std::sys::stdio::unix::Stderr_as_core::io::write::Write>::write
                         (param_1,param_2,param_3);
      ppuVar3 = auVar5._8_8_;
      if (auVar5._0_8_ == 1) {
        if (((ulong)ppuVar3 & 3) < 2) {
          if ((auVar5 & (undefined1  [16])0x3) == (undefined1  [16])0x0) {
            if (*(char *)(ppuVar3 + 2) != '#') {
              return ppuVar3;
            }
          }
          else {
            if (*(char *)((long)ppuVar3 + 0x1f) != '#') {
              return ppuVar3;
            }
            local_68 = (long)ppuVar3 - 1;
            <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_68);
          }
        }
        else if (((ulong)ppuVar3 & 3) == 2) {
                    /* try { // try from 0070b66c to 0070b67f has its CatchHandler @ 0070b6ec */
          lVar1 = core::io::error::os_functions::get_os_functions();
          uVar2 = (**(code **)(lVar1 + 0x10))((ulong)ppuVar3 >> 0x20);
          if ((uVar2 & 1) == 0) {
            return ppuVar3;
          }
        }
        else {
          uVar4 = auVar5._12_4_ & 0xff;
          if (10 < (ulong)ppuVar3 >> 0x22) {
            uVar4 = 0xff;
          }
          if (uVar4 != 0x23) {
            return ppuVar3;
          }
        }
      }
      else {
        if (ppuVar3 == (undefined **)0x0) {
          return &PTR_s_failed_to_write_whole_buffer_00ad5f78;
        }
        if (param_3 < ppuVar3) {
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (ppuVar3,param_3,param_3,&PTR_s__nix_store_8006w282fgsx3273c878b_00ad5f90);
        }
        param_2 = param_2 + (long)ppuVar3;
        param_3 = (undefined **)((long)param_3 - (long)ppuVar3);
      }
    } while (param_3 != (undefined **)0x0);
  }
  return (undefined **)0x0;
}


// ===== 0070b704  FUN_0070b704 =====

void FUN_0070b704(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
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
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar2 = *(long *)(param_1 + 0x10);
  FUN_00764910(&uStack_108,param_3);
  lVar3 = *(long *)(lVar2 + 0x20);
  local_f0 = param_2;
  if (lVar3 == *(long *)(lVar2 + 0x10)) {
                    /* try { // try from 0070b750 to 0070b753 has its CatchHandler @ 0070b7b4 */
    <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<libdiscore_common[1cb84820f9455fa0]::stores::store_database::opcodes::PendingKKVChange<libdiscore_common[1cb84820f9455fa0]::stores::guild_role::GuildRole>>>
    ::grow_one();
  }
  puVar1 = (undefined8 *)(*(long *)(lVar2 + 0x18) + lVar3 * 0xe0);
  puVar1[0x15] = uStack_68;
  puVar1[0x14] = local_70;
  puVar1[0x17] = uStack_58;
  puVar1[0x16] = uStack_60;
  puVar1[0x19] = uStack_48;
  puVar1[0x18] = local_50;
  puVar1[0x1b] = uStack_38;
  puVar1[0x1a] = uStack_40;
  puVar1[0xd] = uStack_a8;
  puVar1[0xc] = local_b0;
  puVar1[0xf] = uStack_98;
  puVar1[0xe] = uStack_a0;
  puVar1[0x11] = uStack_88;
  puVar1[0x10] = local_90;
  puVar1[0x13] = uStack_78;
  puVar1[0x12] = uStack_80;
  puVar1[5] = uStack_e8;
  puVar1[4] = local_f0;
  puVar1[7] = uStack_d8;
  puVar1[6] = uStack_e0;
  puVar1[9] = uStack_c8;
  puVar1[8] = local_d0;
  puVar1[0xb] = uStack_b8;
  puVar1[10] = uStack_c0;
  puVar1[1] = uStack_108;
  *puVar1 = 3;
  puVar1[3] = uStack_f8;
  puVar1[2] = uStack_100;
  *(long *)(lVar2 + 0x20) = lVar3 + 1;
  return;
}


// ===== 0070b7cc  FUN_0070b7cc =====

void FUN_0070b7cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
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
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar2 = *(long *)(param_1 + 0x10);
  FUN_00764910(&uStack_108,param_3);
  lVar3 = *(long *)(lVar2 + 0x20);
  local_f0 = param_2;
  if (lVar3 == *(long *)(lVar2 + 0x10)) {
                    /* try { // try from 0070b818 to 0070b81b has its CatchHandler @ 0070b87c */
    <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<libdiscore_common[1cb84820f9455fa0]::stores::store_database::opcodes::PendingKKVChange<libdiscore_common[1cb84820f9455fa0]::stores::guild_role::GuildRole>>>
    ::grow_one();
  }
  puVar1 = (undefined8 *)(*(long *)(lVar2 + 0x18) + lVar3 * 0xe0);
  puVar1[0x15] = uStack_68;
  puVar1[0x14] = local_70;
  puVar1[0x17] = uStack_58;
  puVar1[0x16] = uStack_60;
  puVar1[0x19] = uStack_48;
  puVar1[0x18] = local_50;
  puVar1[0x1b] = uStack_38;
  puVar1[0x1a] = uStack_40;
  puVar1[0xd] = uStack_a8;
  puVar1[0xc] = local_b0;
  puVar1[0xf] = uStack_98;
  puVar1[0xe] = uStack_a0;
  puVar1[0x11] = uStack_88;
  puVar1[0x10] = local_90;
  puVar1[0x13] = uStack_78;
  puVar1[0x12] = uStack_80;
  puVar1[5] = uStack_e8;
  puVar1[4] = local_f0;
  puVar1[7] = uStack_d8;
  puVar1[6] = uStack_e0;
  puVar1[9] = uStack_c8;
  puVar1[8] = local_d0;
  puVar1[0xb] = uStack_b8;
  puVar1[10] = uStack_c0;
  puVar1[1] = uStack_108;
  *puVar1 = 3;
  puVar1[3] = uStack_f8;
  puVar1[2] = uStack_100;
  *(long *)(lVar2 + 0x20) = lVar3 + 1;
  return;
}


// ===== 0070b894  FUN_0070b894 =====

void FUN_0070b894(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
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
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar2 = *(long *)(param_1 + 0x10);
  FUN_00764a80(&uStack_108,param_3);
  lVar3 = *(long *)(lVar2 + 0x20);
  local_f0 = param_2;
  if (lVar3 == *(long *)(lVar2 + 0x10)) {
                    /* try { // try from 0070b8e0 to 0070b8e3 has its CatchHandler @ 0070b944 */
    <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<libdiscore_common[1cb84820f9455fa0]::stores::store_database::opcodes::PendingKKVChange<libdiscore_common[1cb84820f9455fa0]::stores::guild_role::GuildRole>>>
    ::grow_one();
  }
  puVar1 = (undefined8 *)(*(long *)(lVar2 + 0x18) + lVar3 * 0xe0);
  puVar1[0x15] = uStack_68;
  puVar1[0x14] = local_70;
  puVar1[0x17] = uStack_58;
  puVar1[0x16] = uStack_60;
  puVar1[0x19] = uStack_48;
  puVar1[0x18] = local_50;
  puVar1[0x1b] = uStack_38;
  puVar1[0x1a] = uStack_40;
  puVar1[0xd] = uStack_a8;
  puVar1[0xc] = local_b0;
  puVar1[0xf] = uStack_98;
  puVar1[0xe] = uStack_a0;
  puVar1[0x11] = uStack_88;
  puVar1[0x10] = local_90;
  puVar1[0x13] = uStack_78;
  puVar1[0x12] = uStack_80;
  puVar1[5] = uStack_e8;
  puVar1[4] = local_f0;
  puVar1[7] = uStack_d8;
  puVar1[6] = uStack_e0;
  puVar1[9] = uStack_c8;
  puVar1[8] = local_d0;
  puVar1[0xb] = uStack_b8;
  puVar1[10] = uStack_c0;
  puVar1[1] = uStack_108;
  *puVar1 = 3;
  puVar1[3] = uStack_f8;
  puVar1[2] = uStack_100;
  *(long *)(lVar2 + 0x20) = lVar3 + 1;
  return;
}


// ===== 0070b95c  FUN_0070b95c =====

void FUN_0070b95c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
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
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar2 = *(long *)(param_1 + 0x10);
  FUN_00764910(&uStack_108,param_3);
  lVar3 = *(long *)(lVar2 + 0x20);
  local_f0 = param_2;
  if (lVar3 == *(long *)(lVar2 + 0x10)) {
                    /* try { // try from 0070b9a8 to 0070b9ab has its CatchHandler @ 0070ba0c */
    <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<libdiscore_common[1cb84820f9455fa0]::stores::store_database::opcodes::PendingKKVChange<libdiscore_common[1cb84820f9455fa0]::stores::guild_role::GuildRole>>>
    ::grow_one();
  }
  puVar1 = (undefined8 *)(*(long *)(lVar2 + 0x18) + lVar3 * 0xe0);
  puVar1[0x15] = uStack_68;
  puVar1[0x14] = local_70;
  puVar1[0x17] = uStack_58;
  puVar1[0x16] = uStack_60;
  puVar1[0x19] = uStack_48;
  puVar1[0x18] = local_50;
  puVar1[0x1b] = uStack_38;
  puVar1[0x1a] = uStack_40;
  puVar1[0xd] = uStack_a8;
  puVar1[0xc] = local_b0;
  puVar1[0xf] = uStack_98;
  puVar1[0xe] = uStack_a0;
  puVar1[0x11] = uStack_88;
  puVar1[0x10] = local_90;
  puVar1[0x13] = uStack_78;
  puVar1[0x12] = uStack_80;
  puVar1[5] = uStack_e8;
  puVar1[4] = local_f0;
  puVar1[7] = uStack_d8;
  puVar1[6] = uStack_e0;
  puVar1[9] = uStack_c8;
  puVar1[8] = local_d0;
  puVar1[0xb] = uStack_b8;
  puVar1[10] = uStack_c0;
  puVar1[1] = uStack_108;
  *puVar1 = 3;
  puVar1[3] = uStack_f8;
  puVar1[2] = uStack_100;
  *(long *)(lVar2 + 0x20) = lVar3 + 1;
  return;
}


// ===== 0070ba24  FUN_0070ba24 =====

void FUN_0070ba24(byte *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if ((*param_1 != 0xff) && (0x18 < *param_1)) {
    plVar3 = *(long **)(param_1 + 8);
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
      return;
    }
  }
  return;
}


// ===== 0070ba5c  FUN_0070ba5c =====

void FUN_0070ba5c(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (*param_1 != 0) {
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
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(param_1 + 1);
      }
    }
    plVar3 = (long *)param_1[3];
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
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
        return;
      }
    }
  }
  return;
}


// ===== 0070badc  FUN_0070badc =====

void FUN_0070badc(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (*param_1 != 2) {
    plVar3 = (long *)param_1[2];
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
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
      }
    }
    plVar3 = (long *)param_1[4];
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
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
      }
    }
    plVar3 = (long *)param_1[6];
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
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
      }
    }
    plVar3 = (long *)param_1[8];
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
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(param_1 + 8);
        return;
      }
    }
  }
  return;
}


// ===== 0070bba8  FUN_0070bba8 =====

void FUN_0070bba8(long *param_1)

{
                    /* try { // try from 0070bbb8 to 0070bbbb has its CatchHandler @ 0070bbec */
  FUN_00766220();
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 0070bc14  FUN_0070bc14 =====

void FUN_0070bc14(long *param_1)

{
                    /* try { // try from 0070bc24 to 0070bc27 has its CatchHandler @ 0070bc58 */
  FUN_00766394();
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 0070bc80  FUN_0070bc80 =====

void FUN_0070bc80(long *param_1)

{
                    /* try { // try from 0070bc90 to 0070bc93 has its CatchHandler @ 0070bcc0 */
  FUN_007664a0();
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 0070bce4  FUN_0070bce4 =====

void FUN_0070bce4(long *param_1)

{
                    /* try { // try from 0070bcf4 to 0070bcf7 has its CatchHandler @ 0070bd28 */
  FUN_007665f0();
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 0070bd50  FUN_0070bd50 =====

void FUN_0070bd50(long *param_1)

{
                    /* try { // try from 0070bd60 to 0070bd63 has its CatchHandler @ 0070bd94 */
  FUN_007666d8();
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 0070bdbc  FUN_0070bdbc =====

void FUN_0070bdbc(long *param_1)

{
  void *__ptr;
  void *pvVar1;
  long lVar2;
  
  __ptr = (void *)param_1[1];
  lVar2 = param_1[2] + 1;
  pvVar1 = __ptr;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 0070bdec to 0070bdef has its CatchHandler @ 0070be38 */
    FUN_00761b38(pvVar1);
    pvVar1 = (void *)((long)pvVar1 + 0xe0);
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 0070be80  FUN_0070be80 =====

void FUN_0070be80(long *param_1)

{
  void *__ptr;
  void *pvVar1;
  long lVar2;
  
  __ptr = (void *)param_1[1];
  lVar2 = param_1[2] + 1;
  pvVar1 = __ptr;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 0070beb0 to 0070beb3 has its CatchHandler @ 0070befc */
    FUN_00761bd0(pvVar1);
    pvVar1 = (void *)((long)pvVar1 + 0x58);
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 0070bf44  FUN_0070bf44 =====

void FUN_0070bf44(long *param_1)

{
  void *__ptr;
  void *pvVar1;
  long lVar2;
  
  __ptr = (void *)param_1[1];
  lVar2 = param_1[2] + 1;
  pvVar1 = __ptr;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 0070bf74 to 0070bf77 has its CatchHandler @ 0070bfc0 */
    FUN_00761d0c(pvVar1);
    pvVar1 = (void *)((long)pvVar1 + 0x70);
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 0070c008  FUN_0070c008 =====

void FUN_0070c008(long *param_1)

{
                    /* try { // try from 0070c018 to 0070c01b has its CatchHandler @ 0070c04c */
  FUN_00766864();
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 0070c074  FUN_0070c074 =====

void FUN_0070c074(long *param_1)

{
  void *__ptr;
  void *pvVar1;
  long lVar2;
  
  __ptr = (void *)param_1[1];
  lVar2 = param_1[2] + 1;
  pvVar1 = __ptr;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 0070c0a4 to 0070c0a7 has its CatchHandler @ 0070c0f0 */
    FUN_00761edc(pvVar1);
    pvVar1 = (void *)((long)pvVar1 + 0x218);
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 0070c138  FUN_0070c138 =====

void FUN_0070c138(long *param_1)

{
  void *__ptr;
  void *pvVar1;
  long lVar2;
  
  __ptr = (void *)param_1[1];
  lVar2 = param_1[2] + 1;
  pvVar1 = __ptr;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 0070c168 to 0070c16b has its CatchHandler @ 0070c1b4 */
    FUN_0076276c(pvVar1);
    pvVar1 = (void *)((long)pvVar1 + 0xe0);
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 0070c1fc  FUN_0070c1fc =====

void FUN_0070c1fc(long *param_1)

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
      if (0x18 < *(byte *)((long)__ptr + lVar6 * 0x58 + 0x28)) {
        plVar4 = *(long **)((long)__ptr + lVar6 * 0x58 + 0x30);
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
      if (*(long *)((long)__ptr + lVar6 * 0x58 + 0x10) != 0) {
        free(*(void **)((long)__ptr + lVar6 * 0x58 + 0x18));
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != lVar1);
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 0070c2c4  FUN_0070c2c4 =====

void FUN_0070c2c4(long *param_1)

{
  void *__ptr;
  long lVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  
  __ptr = (void *)param_1[1];
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    lVar8 = 0;
    do {
      if (0x18 < *(byte *)((long)__ptr + lVar8 * 0x70 + 0x10)) {
        plVar5 = *(long **)((long)__ptr + lVar8 * 0x70 + 0x18);
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
          <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
        }
      }
      bVar2 = *(byte *)((long)__ptr + lVar8 * 0x70 + 0x28);
      if (bVar2 != 0xff && 0x18 < bVar2) {
        plVar5 = *(long **)((long)__ptr + lVar8 * 0x70 + 0x30);
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
          <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
        }
      }
      puVar7 = (undefined8 *)((long)__ptr + lVar8 * 0x70 + 0x50);
      plVar5 = (long *)*puVar7;
      if (plVar5 != (long *)0x0) {
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
          <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(puVar7);
        }
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 != lVar1);
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 0070c3d4  FUN_0070c3d4 =====

void FUN_0070c3d4(long *param_1)

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
      plVar4 = *(long **)((long)__ptr + lVar6 * 0x20 + 8);
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
          <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
        }
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != lVar1);
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 0070c464  FUN_0070c464 =====

void FUN_0070c464(long *param_1)

{
  void *__ptr;
  void *pvVar1;
  long lVar2;
  
  __ptr = (void *)param_1[1];
  lVar2 = param_1[2] + 1;
  pvVar1 = __ptr;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 0070c494 to 0070c497 has its CatchHandler @ 0070c4e0 */
    FUN_007628fc(pvVar1);
    pvVar1 = (void *)((long)pvVar1 + 0x218);
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 0070c528  FUN_0070c528 =====

void FUN_0070c528(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  int *piVar5;
  
  piVar5 = (int *)*param_1;
  if ((((*(byte *)(param_1 + 1) & 1) == 0) &&
      ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0 & 0x7fffffffffffffff) != 0)) &&
     (uVar4 = std::panicking::panic_count::is_zero_slow_path(), (uVar4 & 1) == 0)) {
    *(undefined1 *)(piVar5 + 1) = 1;
  }
  do {
    iVar1 = *piVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
    if (bVar3) {
      *piVar5 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 != 2) {
    return;
  }
  <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(piVar5);
  return;
}


// ===== 0070c598  FUN_0070c598 =====

void FUN_0070c598(int *param_1,uint param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  
  if (((param_2 & 1) == 0) &&
     ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0 & 0x7fffffffffffffff) != 0)) {
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
  <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake();
  return;
}


// ===== 0070c608  FUN_0070c608 =====

void FUN_0070c608(ulong *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  
  lVar1 = 2;
  if (1 < *param_1) {
    lVar1 = *param_1 - 2;
  }
  if (lVar1 == 1) {
    uVar3 = param_1[3];
    if (uVar3 != 0) {
      uVar4 = param_1[5];
      if (uVar4 != 0) {
        puVar5 = (undefined8 *)param_1[2];
        puVar6 = puVar5 + 1;
        uVar7 = NEON_cmge(*puVar5,0,1);
        uVar7 = uVar7 & 0x8080808080808080;
        do {
          for (; uVar7 == 0; uVar7 = uVar7 & 0x8080808080808080) {
            puVar5 = puVar5 + -0xe8;
            uVar7 = NEON_cmge(*puVar6,0,1);
            puVar6 = puVar6 + 1;
          }
          uVar2 = (uVar7 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
          uVar4 = uVar4 - 1;
          uVar7 = uVar7 - 1 & uVar7;
          FUN_00702244(puVar5 + (long)-(int)((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) *
                                0x1d + -0x1c);
        } while (uVar4 != 0);
      }
      if (uVar3 * 0xe9 != -0xf1) {
        free((void *)(param_1[2] + uVar3 * -0xe8 + -0xe8));
        return;
      }
    }
  }
  else if (lVar1 == 2) {
    FUN_0070ce2c(param_1);
    return;
  }
  return;
}


// ===== 0070c72c  FUN_0070c72c =====

void FUN_0070c72c(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = 2;
  if (1 < *param_1) {
    lVar4 = *param_1 - 2;
  }
  if (lVar4 == 1) {
    FUN_007043b0(param_1 + 2);
    return;
  }
  if (lVar4 == 2) {
    if (0x18 < (byte)param_1[5]) {
      plVar3 = (long *)param_1[6];
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
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(param_1 + 6);
      }
    }
    if (param_1[2] != 0) {
      free((void *)param_1[3]);
      return;
    }
  }
  return;
}


// ===== 0070c7c0  FUN_0070c7c0 =====

void FUN_0070c7c0(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = 2;
  if (1 < *param_1) {
    lVar4 = *param_1 - 2;
  }
  if (lVar4 == 1) {
    FUN_00704618(param_1 + 2);
    return;
  }
  if (lVar4 == 2) {
    if (0x18 < (byte)param_1[2]) {
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
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(param_1 + 3);
      }
    }
    if (((byte)param_1[5] != 0xff) && (0x18 < (byte)param_1[5])) {
      plVar3 = (long *)param_1[6];
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
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(param_1 + 6);
      }
    }
    plVar3 = (long *)param_1[10];
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
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
        return;
      }
    }
  }
  return;
}


// ===== 0070c8b4  FUN_0070c8b4 =====

void FUN_0070c8b4(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  cVar1 = '\x02';
  if (1 < *(byte *)(param_1 + 0x28)) {
    cVar1 = *(byte *)(param_1 + 0x28) - 2;
  }
  if (cVar1 == '\x01') {
    FUN_007042ac();
    return;
  }
  if (cVar1 == '\x02') {
    plVar3 = *(long **)(param_1 + 0x18);
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
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
        return;
      }
    }
  }
  return;
}


// ===== 0070c904  FUN_0070c904 =====

void FUN_0070c904(ulong *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  
  lVar1 = 2;
  if (1 < *param_1) {
    lVar1 = *param_1 - 2;
  }
  if (lVar1 == 1) {
    uVar3 = param_1[2];
    if (uVar3 != 0) {
      uVar4 = param_1[4];
      if (uVar4 != 0) {
        puVar5 = (undefined8 *)param_1[1];
        puVar6 = puVar5 + 1;
        uVar7 = NEON_cmge(*puVar5,0,1);
        uVar7 = uVar7 & 0x8080808080808080;
        do {
          for (; uVar7 == 0; uVar7 = uVar7 & 0x8080808080808080) {
            puVar5 = puVar5 + -0x220;
            uVar7 = NEON_cmge(*puVar6,0,1);
            puVar6 = puVar6 + 1;
          }
          uVar2 = (uVar7 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
          uVar4 = uVar4 - 1;
          uVar7 = uVar7 - 1 & uVar7;
          FUN_007024a8(puVar5 + (long)-(int)((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) *
                                0x44 + -0x43);
        } while (uVar4 != 0);
      }
      if (uVar3 * 0x221 != -0x229) {
        free((void *)(param_1[1] + uVar3 * -0x220 + -0x220));
        return;
      }
    }
  }
  else if (lVar1 == 2) {
    FUN_0070d030(param_1);
    return;
  }
  return;
}


// ===== 0070ca2c  FUN_0070ca2c =====

void FUN_0070ca2c(ulong *param_1)

{
  void *__ptr;
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = *param_1;
  if (uVar2 == (uVar2 != 0)) {
    FUN_0070ce2c(param_1);
    return;
  }
  if (uVar2 - (uVar2 != 0) == 2) {
    __ptr = (void *)param_1[2];
    lVar3 = param_1[3] + 1;
    pvVar1 = __ptr;
    while (lVar3 = lVar3 + -1, lVar3 != 0) {
                    /* try { // try from 0070ca78 to 0070ca7b has its CatchHandler @ 0070cadc */
      FUN_0076276c(pvVar1);
      pvVar1 = (void *)((long)pvVar1 + 0xe0);
    }
    if (param_1[1] != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 0070cb24  FUN_0070cb24 =====

void FUN_0070cb24(ulong *param_1)

{
  void *__ptr;
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  
  uVar3 = *param_1;
  if (uVar3 == (uVar3 != 0)) {
    if (0x18 < (byte)param_1[5]) {
      plVar4 = (long *)param_1[6];
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
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
      }
    }
    if (param_1[2] != 0) {
      free((void *)param_1[3]);
      return;
    }
  }
  else if (uVar3 - (uVar3 != 0) == 2) {
    __ptr = (void *)param_1[2];
    uVar3 = param_1[3];
    if (uVar3 != 0) {
      uVar6 = 0;
      do {
        if (0x18 < *(byte *)((long)__ptr + uVar6 * 0x58 + 0x28)) {
          plVar4 = *(long **)((long)__ptr + uVar6 * 0x58 + 0x30);
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
            <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
          }
        }
        if (*(long *)((long)__ptr + uVar6 * 0x58 + 0x10) != 0) {
          free(*(void **)((long)__ptr + uVar6 * 0x58 + 0x18));
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar3);
    }
    if (param_1[1] != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 0070cc60  FUN_0070cc60 =====

void FUN_0070cc60(ulong *param_1)

{
  void *__ptr;
  byte bVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  
  uVar4 = *param_1;
  if (uVar4 == (uVar4 != 0)) {
    if (0x18 < (byte)param_1[2]) {
      plVar5 = (long *)param_1[3];
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
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
      }
    }
    if (((byte)param_1[5] != 0xff) && (0x18 < (byte)param_1[5])) {
      plVar5 = (long *)param_1[6];
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
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
      }
    }
    plVar5 = (long *)param_1[10];
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
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(param_1 + 10);
        return;
      }
    }
  }
  else if (uVar4 - (uVar4 != 0) == 2) {
    __ptr = (void *)param_1[2];
    uVar4 = param_1[3];
    if (uVar4 != 0) {
      uVar8 = 0;
      do {
        if (0x18 < *(byte *)((long)__ptr + uVar8 * 0x70 + 0x10)) {
          plVar5 = *(long **)((long)__ptr + uVar8 * 0x70 + 0x18);
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
            <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
          }
        }
        bVar1 = *(byte *)((long)__ptr + uVar8 * 0x70 + 0x28);
        if (bVar1 != 0xff && 0x18 < bVar1) {
          plVar5 = *(long **)((long)__ptr + uVar8 * 0x70 + 0x30);
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
            <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
          }
        }
        puVar7 = (undefined8 *)((long)__ptr + uVar8 * 0x70 + 0x50);
        plVar5 = (long *)*puVar7;
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
            <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(puVar7);
          }
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 != uVar4);
    }
    if (param_1[1] != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 0070ce2c  FUN_0070ce2c =====

void FUN_0070ce2c(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (0x18 < *(byte *)(param_1 + 0x40)) {
    plVar3 = *(long **)(param_1 + 0x48);
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
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
    }
  }
  plVar3 = *(long **)(param_1 + 0x88);
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
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
    }
  }
  plVar3 = *(long **)(param_1 + 0x98);
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
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow((undefined8 *)(param_1 + 0x98));
      return;
    }
  }
  return;
}


// ===== 0070cef8  FUN_0070cef8 =====

void FUN_0070cef8(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (0x18 < *(byte *)(param_1 + 0x28)) {
    plVar3 = *(long **)(param_1 + 0x30);
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
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow((undefined8 *)(param_1 + 0x30));
    }
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    free(*(void **)(param_1 + 0x18));
    return;
  }
  return;
}


// ===== 0070cf6c  FUN_0070cf6c =====

void FUN_0070cf6c(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (0x18 < *(byte *)(param_1 + 0x10)) {
    plVar3 = *(long **)(param_1 + 0x18);
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
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow((undefined8 *)(param_1 + 0x18));
    }
  }
  if ((*(byte *)(param_1 + 0x28) != 0xff) && (0x18 < *(byte *)(param_1 + 0x28))) {
    plVar3 = *(long **)(param_1 + 0x30);
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
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow((undefined8 *)(param_1 + 0x30));
    }
  }
  plVar3 = *(long **)(param_1 + 0x50);
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
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
      return;
    }
  }
  return;
}


// ===== 0070d030  FUN_0070d030 =====

void FUN_0070d030(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (0x18 < *(byte *)(param_1 + 0x18)) {
    plVar3 = (long *)param_1[0x19];
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
  plVar3 = (long *)param_1[0x23];
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
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(param_1 + 0x23);
    }
  }
  plVar3 = (long *)param_1[0x26];
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
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(param_1 + 0x26);
    }
  }
  plVar3 = (long *)param_1[0x28];
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
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(param_1 + 0x28);
    }
  }
  plVar3 = (long *)param_1[0x2a];
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
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(param_1 + 0x2a);
    }
  }
  plVar3 = (long *)param_1[0x2c];
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
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(param_1 + 0x2c);
    }
  }
  if (0x18 < *(byte *)(param_1 + 0x1b)) {
    plVar3 = (long *)param_1[0x1c];
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
  plVar3 = (long *)param_1[0x22];
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
                    /* try { // try from 0070d184 to 0070d18b has its CatchHandler @ 0070d2ac */
    <alloc::sync::[n]::alloc::sync::Arc<std::collections::hash::set::HashSet<smol_str::SmolStr>>>::
    drop_slow(param_1 + 0x22);
  }
  if ((*(byte *)(param_1 + 0x1e) != 0xff) && (0x18 < *(byte *)(param_1 + 0x1e))) {
    plVar3 = (long *)param_1[0x1f];
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
  plVar3 = (long *)param_1[0x37];
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
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(param_1 + 0x37);
    }
  }
  if (*param_1 != 0) {
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
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
      }
    }
    plVar3 = (long *)param_1[3];
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
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
      }
    }
  }
  if ((short)param_1[0x15] != 2) {
    plVar3 = (long *)param_1[0x12];
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
                    /* try { // try from 0070d26c to 0070d273 has its CatchHandler @ 0070d2a4 */
      <alloc::sync::[n]::alloc::sync::Arc<[smol_str::SmolStr]>>::drop_slow(param_1 + 0x12);
    }
  }
  if ((param_1[0xf] != -1) && (param_1[0xf] != 0)) {
    free((void *)param_1[0x10]);
  }
  FUN_0070badc(param_1 + 5);
  return;
}


// ===== 0070d348  FUN_0070d348 =====

void FUN_0070d348(long *param_1)

{
                    /* try { // try from 0070d358 to 0070d35f has its CatchHandler @ 0070d390 */
  FUN_0074a9a8(param_1 + 3);
  if ((*param_1 != -1) && (*param_1 != 0)) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 0070d3b8  FUN_0070d3b8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0070d3b8(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined *local_80;
  long lStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60;
  long lStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  long *plStack_38;
  long local_18;
  
  local_18 = 0;
  uVar2 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00bf8;
  if (uVar2 == 0) {
                    /* try { // try from 0070d4b4 to 0070d4f3 has its CatchHandler @ 0070d508 */
    uVar2 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00bf8);
    plVar1 = (long *)pthread_getspecific((pthread_key_t)uVar2);
  }
  else {
    plVar1 = (long *)pthread_getspecific((pthread_key_t)uVar2);
  }
  if (plVar1 < (long *)0x2) {
    plVar1 = (long *)FUN_0072c9d4(uVar2 & 0xffffffff,plVar1,0);
  }
  uStack_68 = _UNK_00ad5fc0;
  local_70 = _DAT_00ad5fb8;
  lStack_78 = _UNK_00ad5fb0;
  local_80 = PTR_DAT_00ad5fa8;
  if (plVar1 != (long *)0x0) {
    lStack_58 = plVar1[1];
    local_60 = *plVar1;
    plStack_38 = &local_18;
    *plVar1 = *plVar1 + 1;
    local_40 = param_2[2];
    uStack_48 = param_2[1];
    local_50 = *param_2;
                    /* try { // try from 0070d438 to 0070d443 has its CatchHandler @ 0070d4f8 */
    FUN_0075d920(&local_80,&local_50);
    uStack_48 = uStack_68;
    local_50 = local_70;
    plStack_38 = (long *)lStack_58;
    local_40 = local_60;
    if (local_18 == 0) {
      *param_1 = local_80;
      param_1[1] = lStack_78;
      param_1[3] = uStack_68;
      param_1[2] = local_70;
      param_1[5] = lStack_58;
      param_1[4] = local_60;
      return;
    }
    *param_1 = 0;
    param_1[1] = local_18;
    if ((lStack_78 != 0) && (lStack_78 * 9 != -0x11)) {
      free(local_80 + lStack_78 * -8 + -8);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::thread::local::panic_access_error(&PTR_s__nix_store_8006w282fgsx3273c878b_00ad6130);
}


// ===== 0070d528  FUN_0070d528 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0070d528(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong uVar2;
  long local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long *local_60;
  undefined *local_50;
  long lStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  uStack_98 = param_2[1];
  local_a0 = *param_2;
  uStack_88 = param_2[3];
  uStack_90 = param_2[2];
  local_60 = &local_c8;
  local_c8 = 0;
  uStack_78 = param_2[5];
  local_80 = param_2[4];
  uStack_68 = param_2[7];
  uStack_70 = param_2[6];
  uVar2 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00bf8;
  if (uVar2 == 0) {
                    /* try { // try from 0070d61c to 0070d65b has its CatchHandler @ 0070d670 */
    uVar2 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00bf8);
    plVar1 = (long *)pthread_getspecific((pthread_key_t)uVar2);
  }
  else {
    plVar1 = (long *)pthread_getspecific((pthread_key_t)uVar2);
  }
  if (plVar1 < (long *)0x2) {
    plVar1 = (long *)FUN_0072c9d4(uVar2 & 0xffffffff,plVar1,0);
  }
  uStack_38 = _UNK_00ad5fc0;
  local_40 = _DAT_00ad5fb8;
  lStack_48 = _UNK_00ad5fb0;
  local_50 = PTR_DAT_00ad5fa8;
  if (plVar1 != (long *)0x0) {
    lStack_28 = plVar1[1];
    lStack_30 = *plVar1;
    *plVar1 = *plVar1 + 1;
                    /* try { // try from 0070d5a8 to 0070d5b3 has its CatchHandler @ 0070d660 */
    FUN_00751f78(&local_a0,&local_50);
    uStack_b8 = uStack_38;
    local_c0 = local_40;
    lStack_a8 = lStack_28;
    lStack_b0 = lStack_30;
    if (local_c8 == 0) {
      *param_1 = local_50;
      param_1[1] = lStack_48;
      param_1[3] = uStack_38;
      param_1[2] = local_40;
      param_1[5] = lStack_28;
      param_1[4] = lStack_30;
      return;
    }
    *param_1 = 0;
    param_1[1] = local_c8;
    if ((lStack_48 != 0) && (lStack_48 * 9 != -0x11)) {
      free(local_50 + lStack_48 * -8 + -8);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::thread::local::panic_access_error(&PTR_s__nix_store_8006w282fgsx3273c878b_00ad6130);
}


// ===== 0070d69c  FUN_0070d69c =====

void FUN_0070d69c(undefined1 *param_1,long param_2)

{
  long lVar1;
  long local_90;
  void *pvStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60;
  void *pvStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_90 = -1;
  local_78 = 0;
  uStack_68 = 0;
                    /* try { // try from 0070d6cc to 0070d6ff has its CatchHandler @ 0070d7a0 */
  lVar1 = FUN_00756a34(&local_90,"tag",3,param_2);
  if ((lVar1 == 0) && (lVar1 = FUN_00756a34(&local_90,"badge",5,param_2 + 0x10), lVar1 == 0)) {
    pvStack_58 = pvStack_88;
    local_60 = local_90;
    uStack_48 = local_78;
    uStack_50 = uStack_80;
    uStack_38 = uStack_68;
    local_40 = local_70;
    <serde_json::value::ser::SerializeMap_as_serde::ser::SerializeStruct>::end(param_1,&local_60);
    return;
  }
  *(long *)(param_1 + 8) = lVar1;
  *param_1 = 0xff;
                    /* try { // try from 0070d710 to 0070d717 has its CatchHandler @ 0070d778 */
  FUN_0074a9a8(&local_78);
  if ((local_90 != -1) && (local_90 != 0)) {
    free(pvStack_88);
  }
  return;
}


// ===== 0070d7b8  FUN_0070d7b8 =====

void FUN_0070d7b8(undefined1 *param_1,long param_2)

{
  long lVar1;
  long local_90;
  void *pvStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60;
  void *pvStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_90 = -1;
  local_78 = 0;
  uStack_68 = 0;
                    /* try { // try from 0070d7e8 to 0070d853 has its CatchHandler @ 0070d8f4 */
  lVar1 = FUN_00756740(&local_90,&DAT_002a18e8,8,param_2);
  if ((((lVar1 == 0) &&
       (lVar1 = FUN_00757ee8(&local_90,"additionalEmojiSlots",0x14,param_2 + 0x10), lVar1 == 0)) &&
      (lVar1 = FUN_00757ee8(&local_90,"additionalStickerSlots",0x16,param_2 + 0x14), lVar1 == 0)) &&
     (lVar1 = FUN_00757ee8(&local_90,"additionalSoundSlots",0x14,param_2 + 0x18), lVar1 == 0)) {
    pvStack_58 = pvStack_88;
    local_60 = local_90;
    uStack_48 = local_78;
    uStack_50 = uStack_80;
    uStack_38 = uStack_68;
    local_40 = local_70;
    <serde_json::value::ser::SerializeMap_as_serde::ser::SerializeStruct>::end(param_1,&local_60);
    return;
  }
  *(long *)(param_1 + 8) = lVar1;
  *param_1 = 0xff;
                    /* try { // try from 0070d864 to 0070d86b has its CatchHandler @ 0070d8cc */
  FUN_0074a9a8(&local_78);
  if ((local_90 != -1) && (local_90 != 0)) {
    free(pvStack_88);
  }
  return;
}


// ===== 0070d90c  FUN_0070d90c =====

void FUN_0070d90c(undefined1 *param_1,long param_2)

{
  long lVar1;
  long local_90;
  void *pvStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60;
  void *pvStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_90 = -1;
  local_78 = 0;
  uStack_68 = 0;
                    /* try { // try from 0070d93c to 0070d96f has its CatchHandler @ 0070da10 */
  lVar1 = FUN_007599f8(&local_90,"moderatorReportingEnabled",0x19,param_2 + 8);
  if ((lVar1 == 0) &&
     (lVar1 = FUN_00756eec(&local_90,"moderatorReportChannelId",0x18,param_2), lVar1 == 0)) {
    pvStack_58 = pvStack_88;
    local_60 = local_90;
    uStack_48 = local_78;
    uStack_50 = uStack_80;
    uStack_38 = uStack_68;
    local_40 = local_70;
    <serde_json::value::ser::SerializeMap_as_serde::ser::SerializeStruct>::end(param_1,&local_60);
    return;
  }
  *(long *)(param_1 + 8) = lVar1;
  *param_1 = 0xff;
                    /* try { // try from 0070d980 to 0070d987 has its CatchHandler @ 0070d9e8 */
  FUN_0074a9a8(&local_78);
  if ((local_90 != -1) && (local_90 != 0)) {
    free(pvStack_88);
  }
  return;
}


// ===== 0070da28  FUN_0070da28 =====

void FUN_0070da28(undefined1 *param_1,long param_2)

{
  long lVar1;
  long local_90;
  void *pvStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60;
  void *pvStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_90 = -1;
  local_78 = 0;
  uStack_68 = 0;
                    /* try { // try from 0070da58 to 0070dadf has its CatchHandler @ 0070db80 */
  lVar1 = FUN_00756a34(&local_90,"raidDetectedAt",0xe,param_2 + 0x10);
  if ((((lVar1 == 0) &&
       (lVar1 = FUN_00756a34(&local_90,"dmSpamDetectedAt",0x10,param_2 + 0x20), lVar1 == 0)) &&
      (lVar1 = FUN_00756a34(&local_90,"dmsDisabledUntil",0x10,param_2 + 0x30), lVar1 == 0)) &&
     ((lVar1 = FUN_00756a34(&local_90,"invitesDisabledUntil",0x14,param_2 + 0x40), lVar1 == 0 &&
      (lVar1 = FUN_00757ffc(&local_90,"lockdownDurationHours",0x15,param_2), lVar1 == 0)))) {
    pvStack_58 = pvStack_88;
    local_60 = local_90;
    uStack_48 = local_78;
    uStack_50 = uStack_80;
    uStack_38 = uStack_68;
    local_40 = local_70;
    <serde_json::value::ser::SerializeMap_as_serde::ser::SerializeStruct>::end(param_1,&local_60);
    return;
  }
  *(long *)(param_1 + 8) = lVar1;
  *param_1 = 0xff;
                    /* try { // try from 0070daf0 to 0070daf7 has its CatchHandler @ 0070db58 */
  FUN_0074a9a8(&local_78);
  if ((local_90 != -1) && (local_90 != 0)) {
    free(pvStack_88);
  }
  return;
}


// ===== 0070db98  FUN_0070db98 =====

void FUN_0070db98(undefined1 *param_1,ulong *param_2)

{
  long lVar1;
  long local_90;
  void *pvStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60;
  void *pvStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar1 = 2;
  if (1 < *param_2) {
    lVar1 = *param_2 - 2;
  }
  if (lVar1 < 2) {
    if (lVar1 == 0) {
      local_78 = 0;
      local_90 = -1;
      uStack_68 = 0;
                    /* try { // try from 0070dc84 to 0070dcbf has its CatchHandler @ 0070df10 */
      lVar1 = FUN_00759afc(&local_90,"opcode",6,"removePartition",0xf);
      if ((lVar1 == 0) &&
         (lVar1 = FUN_007589dc(&local_90,"partitionKey",0xc,param_2 + 1), lVar1 == 0)) {
LAB_0070de98:
        pvStack_58 = pvStack_88;
        local_60 = local_90;
        uStack_48 = local_78;
        uStack_50 = uStack_80;
        uStack_38 = uStack_68;
        local_40 = local_70;
        <serde_json::value::ser::SerializeMap_as_serde::ser::SerializeStruct>::end
                  (param_1,&local_60);
        return;
      }
      *(long *)(param_1 + 8) = lVar1;
      *param_1 = 0xff;
                    /* try { // try from 0070dcd0 to 0070dcd7 has its CatchHandler @ 0070decc */
      FUN_0074a9a8(&local_78);
    }
    else {
      local_78 = 0;
      local_90 = -1;
      uStack_68 = 0;
                    /* try { // try from 0070dde4 to 0070de3b has its CatchHandler @ 0070df20 */
      lVar1 = FUN_00759afc(&local_90,"opcode",6,"setPartition",0xc);
      if (((lVar1 == 0) &&
          (lVar1 = FUN_007589dc(&local_90,"partitionKey",0xc,param_2 + 1), lVar1 == 0)) &&
         (lVar1 = FUN_00758110(&local_90,"partition",9,param_2 + 2), lVar1 == 0)) goto LAB_0070de98;
      *(long *)(param_1 + 8) = lVar1;
      *param_1 = 0xff;
                    /* try { // try from 0070de4c to 0070de53 has its CatchHandler @ 0070ded0 */
      FUN_0074a9a8(&local_78);
    }
  }
  else if (lVar1 == 2) {
    local_78 = 0;
    local_90 = -1;
    uStack_68 = 0;
                    /* try { // try from 0070dcf0 to 0070dd63 has its CatchHandler @ 0070df40 */
    lVar1 = FUN_00759afc(&local_90,"opcode",6,"setRecord",9);
    if (((lVar1 == 0) &&
        (lVar1 = FUN_007589dc(&local_90,"partitionKey",0xc,param_2 + 0x1c), lVar1 == 0)) &&
       ((lVar1 = FUN_007589dc(&local_90,"clusteringKey",0xd,param_2 + 0x1d), lVar1 == 0 &&
        (lVar1 = FUN_00758b4c(&local_90,"value",5,param_2), lVar1 == 0)))) goto LAB_0070de98;
    *(long *)(param_1 + 8) = lVar1;
    *param_1 = 0xff;
                    /* try { // try from 0070dd74 to 0070dd7b has its CatchHandler @ 0070ded8 */
    FUN_0074a9a8(&local_78);
  }
  else if (lVar1 == 3) {
    local_78 = 0;
    local_90 = -1;
    uStack_68 = 0;
                    /* try { // try from 0070dbf8 to 0070dc4f has its CatchHandler @ 0070df30 */
    lVar1 = FUN_00759afc(&local_90,"opcode",6,"removeRecord",0xc);
    if (((lVar1 == 0) &&
        (lVar1 = FUN_007589dc(&local_90,"partitionKey",0xc,param_2 + 1), lVar1 == 0)) &&
       (lVar1 = FUN_007589dc(&local_90,"clusteringKey",0xd,param_2 + 2), lVar1 == 0))
    goto LAB_0070de98;
    *(long *)(param_1 + 8) = lVar1;
    *param_1 = 0xff;
                    /* try { // try from 0070dc60 to 0070dc67 has its CatchHandler @ 0070ded4 */
    FUN_0074a9a8(&local_78);
  }
  else {
    local_78 = 0;
    local_90 = -1;
    uStack_68 = 0;
                    /* try { // try from 0070dd94 to 0070ddb3 has its CatchHandler @ 0070df00 */
    lVar1 = FUN_00759afc(&local_90,"opcode",6,"clearDatabase",0xd);
    if (lVar1 == 0) goto LAB_0070de98;
    *(long *)(param_1 + 8) = lVar1;
    *param_1 = 0xff;
                    /* try { // try from 0070ddc4 to 0070ddcb has its CatchHandler @ 0070dec8 */
    FUN_0074a9a8(&local_78);
  }
  if ((local_90 != -1) && (local_90 != 0)) {
    free(pvStack_88);
    return;
  }
  return;
}


// ===== 0070df58  FUN_0070df58 =====

void FUN_0070df58(undefined1 *param_1,ulong *param_2)

{
  long lVar1;
  long local_90;
  void *pvStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60;
  void *pvStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar1 = 2;
  if (1 < *param_2) {
    lVar1 = *param_2 - 2;
  }
  if (lVar1 < 2) {
    if (lVar1 == 0) {
      local_78 = 0;
      local_90 = -1;
      uStack_68 = 0;
                    /* try { // try from 0070e044 to 0070e07f has its CatchHandler @ 0070e2d0 */
      lVar1 = FUN_00759afc(&local_90,"opcode",6,"removePartition",0xf);
      if ((lVar1 == 0) &&
         (lVar1 = FUN_007589dc(&local_90,"partitionKey",0xc,param_2 + 1), lVar1 == 0)) {
LAB_0070e258:
        pvStack_58 = pvStack_88;
        local_60 = local_90;
        uStack_48 = local_78;
        uStack_50 = uStack_80;
        uStack_38 = uStack_68;
        local_40 = local_70;
        <serde_json::value::ser::SerializeMap_as_serde::ser::SerializeStruct>::end
                  (param_1,&local_60);
        return;
      }
      *(long *)(param_1 + 8) = lVar1;
      *param_1 = 0xff;
                    /* try { // try from 0070e090 to 0070e097 has its CatchHandler @ 0070e28c */
      FUN_0074a9a8(&local_78);
    }
    else {
      local_78 = 0;
      local_90 = -1;
      uStack_68 = 0;
                    /* try { // try from 0070e1a4 to 0070e1fb has its CatchHandler @ 0070e2e0 */
      lVar1 = FUN_00759afc(&local_90,"opcode",6,"setPartition",0xc);
      if (((lVar1 == 0) &&
          (lVar1 = FUN_007589dc(&local_90,"partitionKey",0xc,param_2 + 1), lVar1 == 0)) &&
         (lVar1 = FUN_007583f0(&local_90,"partition",9,param_2 + 2), lVar1 == 0)) goto LAB_0070e258;
      *(long *)(param_1 + 8) = lVar1;
      *param_1 = 0xff;
                    /* try { // try from 0070e20c to 0070e213 has its CatchHandler @ 0070e290 */
      FUN_0074a9a8(&local_78);
    }
  }
  else if (lVar1 == 2) {
    local_78 = 0;
    local_90 = -1;
    uStack_68 = 0;
                    /* try { // try from 0070e0b0 to 0070e123 has its CatchHandler @ 0070e300 */
    lVar1 = FUN_00759afc(&local_90,"opcode",6,"setRecord",9);
    if (((lVar1 == 0) &&
        (lVar1 = FUN_007589dc(&local_90,"partitionKey",0xc,param_2 + 0xb), lVar1 == 0)) &&
       ((lVar1 = FUN_007589dc(&local_90,"clusteringKey",0xd,param_2 + 0xc), lVar1 == 0 &&
        (lVar1 = FUN_00758cbc(&local_90,"value",5,param_2), lVar1 == 0)))) goto LAB_0070e258;
    *(long *)(param_1 + 8) = lVar1;
    *param_1 = 0xff;
                    /* try { // try from 0070e134 to 0070e13b has its CatchHandler @ 0070e298 */
    FUN_0074a9a8(&local_78);
  }
  else if (lVar1 == 3) {
    local_78 = 0;
    local_90 = -1;
    uStack_68 = 0;
                    /* try { // try from 0070dfb8 to 0070e00f has its CatchHandler @ 0070e2f0 */
    lVar1 = FUN_00759afc(&local_90,"opcode",6,"removeRecord",0xc);
    if (((lVar1 == 0) &&
        (lVar1 = FUN_007589dc(&local_90,"partitionKey",0xc,param_2 + 1), lVar1 == 0)) &&
       (lVar1 = FUN_007589dc(&local_90,"clusteringKey",0xd,param_2 + 2), lVar1 == 0))
    goto LAB_0070e258;
    *(long *)(param_1 + 8) = lVar1;
    *param_1 = 0xff;
                    /* try { // try from 0070e020 to 0070e027 has its CatchHandler @ 0070e294 */
    FUN_0074a9a8(&local_78);
  }
  else {
    local_78 = 0;
    local_90 = -1;
    uStack_68 = 0;
                    /* try { // try from 0070e154 to 0070e173 has its CatchHandler @ 0070e2c0 */
    lVar1 = FUN_00759afc(&local_90,"opcode",6,"clearDatabase",0xd);
    if (lVar1 == 0) goto LAB_0070e258;
    *(long *)(param_1 + 8) = lVar1;
    *param_1 = 0xff;
                    /* try { // try from 0070e184 to 0070e18b has its CatchHandler @ 0070e288 */
    FUN_0074a9a8(&local_78);
  }
  if ((local_90 != -1) && (local_90 != 0)) {
    free(pvStack_88);
    return;
  }
  return;
}


// ===== 0070e318  FUN_0070e318 =====

void FUN_0070e318(undefined1 *param_1,ulong *param_2)

{
  long lVar1;
  long local_90;
  void *pvStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60;
  void *pvStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar1 = 2;
  if (1 < *param_2) {
    lVar1 = *param_2 - 2;
  }
  if (lVar1 < 2) {
    if (lVar1 == 0) {
      local_78 = 0;
      local_90 = -1;
      uStack_68 = 0;
                    /* try { // try from 0070e404 to 0070e43f has its CatchHandler @ 0070e690 */
      lVar1 = FUN_00759afc(&local_90,"opcode",6,"removePartition",0xf);
      if ((lVar1 == 0) &&
         (lVar1 = FUN_007589dc(&local_90,"partitionKey",0xc,param_2 + 1), lVar1 == 0)) {
LAB_0070e618:
        pvStack_58 = pvStack_88;
        local_60 = local_90;
        uStack_48 = local_78;
        uStack_50 = uStack_80;
        uStack_38 = uStack_68;
        local_40 = local_70;
        <serde_json::value::ser::SerializeMap_as_serde::ser::SerializeStruct>::end
                  (param_1,&local_60);
        return;
      }
      *(long *)(param_1 + 8) = lVar1;
      *param_1 = 0xff;
                    /* try { // try from 0070e450 to 0070e457 has its CatchHandler @ 0070e64c */
      FUN_0074a9a8(&local_78);
    }
    else {
      local_78 = 0;
      local_90 = -1;
      uStack_68 = 0;
                    /* try { // try from 0070e564 to 0070e5bb has its CatchHandler @ 0070e6a0 */
      lVar1 = FUN_00759afc(&local_90,"opcode",6,"setPartition",0xc);
      if (((lVar1 == 0) &&
          (lVar1 = FUN_007589dc(&local_90,"partitionKey",0xc,param_2 + 1), lVar1 == 0)) &&
         (lVar1 = FUN_007586d0(&local_90,"partition",9,param_2 + 2), lVar1 == 0)) goto LAB_0070e618;
      *(long *)(param_1 + 8) = lVar1;
      *param_1 = 0xff;
                    /* try { // try from 0070e5cc to 0070e5d3 has its CatchHandler @ 0070e650 */
      FUN_0074a9a8(&local_78);
    }
  }
  else if (lVar1 == 2) {
    local_78 = 0;
    local_90 = -1;
    uStack_68 = 0;
                    /* try { // try from 0070e470 to 0070e4e3 has its CatchHandler @ 0070e6c0 */
    lVar1 = FUN_00759afc(&local_90,"opcode",6,"setRecord",9);
    if (((lVar1 == 0) &&
        (lVar1 = FUN_007589dc(&local_90,"partitionKey",0xc,param_2 + 0xe), lVar1 == 0)) &&
       ((lVar1 = FUN_007589dc(&local_90,"clusteringKey",0xd,param_2 + 0xf), lVar1 == 0 &&
        (lVar1 = FUN_00758e2c(&local_90,"value",5,param_2), lVar1 == 0)))) goto LAB_0070e618;
    *(long *)(param_1 + 8) = lVar1;
    *param_1 = 0xff;
                    /* try { // try from 0070e4f4 to 0070e4fb has its CatchHandler @ 0070e658 */
    FUN_0074a9a8(&local_78);
  }
  else if (lVar1 == 3) {
    local_78 = 0;
    local_90 = -1;
    uStack_68 = 0;
                    /* try { // try from 0070e378 to 0070e3cf has its CatchHandler @ 0070e6b0 */
    lVar1 = FUN_00759afc(&local_90,"opcode",6,"removeRecord",0xc);
    if (((lVar1 == 0) &&
        (lVar1 = FUN_007589dc(&local_90,"partitionKey",0xc,param_2 + 1), lVar1 == 0)) &&
       (lVar1 = FUN_007589dc(&local_90,"clusteringKey",0xd,param_2 + 2), lVar1 == 0))
    goto LAB_0070e618;
    *(long *)(param_1 + 8) = lVar1;
    *param_1 = 0xff;
                    /* try { // try from 0070e3e0 to 0070e3e7 has its CatchHandler @ 0070e654 */
    FUN_0074a9a8(&local_78);
  }
  else {
    local_78 = 0;
    local_90 = -1;
    uStack_68 = 0;
                    /* try { // try from 0070e514 to 0070e533 has its CatchHandler @ 0070e680 */
    lVar1 = FUN_00759afc(&local_90,"opcode",6,"clearDatabase",0xd);
    if (lVar1 == 0) goto LAB_0070e618;
    *(long *)(param_1 + 8) = lVar1;
    *param_1 = 0xff;
                    /* try { // try from 0070e544 to 0070e54b has its CatchHandler @ 0070e648 */
    FUN_0074a9a8(&local_78);
  }
  if ((local_90 != -1) && (local_90 != 0)) {
    free(pvStack_88);
    return;
  }
  return;
}


// ===== 0070e6d8  FUN_0070e6d8 =====

void FUN_0070e6d8(undefined1 *param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  long local_90;
  void *pvStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60;
  void *pvStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  bVar1 = 2;
  if (1 < *(byte *)(param_2 + 0x28)) {
    bVar1 = *(byte *)(param_2 + 0x28) - 2;
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      local_78 = 0;
      local_90 = -1;
      uStack_68 = 0;
                    /* try { // try from 0070e7c8 to 0070e803 has its CatchHandler @ 0070ea54 */
      lVar2 = FUN_00759afc(&local_90,"opcode",6,"removePartition",0xf);
      if ((lVar2 == 0) && (lVar2 = FUN_00759f90(&local_90,"partitionKey",0xc,param_2), lVar2 == 0))
      {
LAB_0070e9dc:
        pvStack_58 = pvStack_88;
        local_60 = local_90;
        uStack_48 = local_78;
        uStack_50 = uStack_80;
        uStack_38 = uStack_68;
        local_40 = local_70;
        <serde_json::value::ser::SerializeMap_as_serde::ser::SerializeStruct>::end
                  (param_1,&local_60);
        return;
      }
      *(long *)(param_1 + 8) = lVar2;
      *param_1 = 0xff;
                    /* try { // try from 0070e814 to 0070e81b has its CatchHandler @ 0070ea10 */
      FUN_0074a9a8(&local_78);
    }
    else {
      local_78 = 0;
      local_90 = -1;
      uStack_68 = 0;
                    /* try { // try from 0070e928 to 0070e97f has its CatchHandler @ 0070ea64 */
      lVar2 = FUN_00759afc(&local_90,"opcode",6,"setPartition",0xc);
      if (((lVar2 == 0) &&
          (lVar2 = FUN_00759f90(&local_90,"partitionKey",0xc,param_2 + 0x20), lVar2 == 0)) &&
         (lVar2 = FUN_00758280(&local_90,"partition",9,param_2), lVar2 == 0)) goto LAB_0070e9dc;
      *(long *)(param_1 + 8) = lVar2;
      *param_1 = 0xff;
                    /* try { // try from 0070e990 to 0070e997 has its CatchHandler @ 0070ea14 */
      FUN_0074a9a8(&local_78);
    }
  }
  else if (bVar1 == 2) {
    local_78 = 0;
    local_90 = -1;
    uStack_68 = 0;
                    /* try { // try from 0070e834 to 0070e8a7 has its CatchHandler @ 0070ea84 */
    lVar2 = FUN_00759afc(&local_90,"opcode",6,"setRecord",9);
    if (((lVar2 == 0) && (lVar2 = FUN_00759f90(&local_90,"partitionKey",0xc,param_2), lVar2 == 0))
       && ((lVar2 = FUN_007589dc(&local_90,"clusteringKey",0xd,param_2 + 8), lVar2 == 0 &&
           (lVar2 = FUN_00758f9c(&local_90,"value",5,param_2 + 0x10), lVar2 == 0))))
    goto LAB_0070e9dc;
    *(long *)(param_1 + 8) = lVar2;
    *param_1 = 0xff;
                    /* try { // try from 0070e8b8 to 0070e8bf has its CatchHandler @ 0070ea1c */
    FUN_0074a9a8(&local_78);
  }
  else if (bVar1 == 3) {
    local_78 = 0;
    local_90 = -1;
    uStack_68 = 0;
                    /* try { // try from 0070e73c to 0070e793 has its CatchHandler @ 0070ea74 */
    lVar2 = FUN_00759afc(&local_90,"opcode",6,"removeRecord",0xc);
    if (((lVar2 == 0) &&
        (lVar2 = FUN_00759f90(&local_90,"partitionKey",0xc,param_2 + 8), lVar2 == 0)) &&
       (lVar2 = FUN_007589dc(&local_90,"clusteringKey",0xd,param_2), lVar2 == 0)) goto LAB_0070e9dc;
    *(long *)(param_1 + 8) = lVar2;
    *param_1 = 0xff;
                    /* try { // try from 0070e7a4 to 0070e7ab has its CatchHandler @ 0070ea18 */
    FUN_0074a9a8(&local_78);
  }
  else {
    local_78 = 0;
    local_90 = -1;
    uStack_68 = 0;
                    /* try { // try from 0070e8d8 to 0070e8f7 has its CatchHandler @ 0070ea44 */
    lVar2 = FUN_00759afc(&local_90,"opcode",6,"clearDatabase",0xd);
    if (lVar2 == 0) goto LAB_0070e9dc;
    *(long *)(param_1 + 8) = lVar2;
    *param_1 = 0xff;
                    /* try { // try from 0070e908 to 0070e90f has its CatchHandler @ 0070ea0c */
    FUN_0074a9a8(&local_78);
  }
  if ((local_90 != -1) && (local_90 != 0)) {
    free(pvStack_88);
    return;
  }
  return;
}


// ===== 0070ea9c  FUN_0070ea9c =====

void FUN_0070ea9c(undefined1 *param_1,ulong *param_2)

{
  long lVar1;
  long local_90;
  void *pvStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60;
  void *pvStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar1 = 2;
  if (1 < *param_2) {
    lVar1 = *param_2 - 2;
  }
  if (lVar1 < 2) {
    if (lVar1 == 0) {
      local_78 = 0;
      local_90 = -1;
      uStack_68 = 0;
                    /* try { // try from 0070eb88 to 0070ebc3 has its CatchHandler @ 0070ee14 */
      lVar1 = FUN_00759afc(&local_90,"opcode",6,"removePartition",0xf);
      if ((lVar1 == 0) &&
         (lVar1 = FUN_00759f90(&local_90,"partitionKey",0xc,param_2 + 1), lVar1 == 0)) {
LAB_0070ed9c:
        pvStack_58 = pvStack_88;
        local_60 = local_90;
        uStack_48 = local_78;
        uStack_50 = uStack_80;
        uStack_38 = uStack_68;
        local_40 = local_70;
        <serde_json::value::ser::SerializeMap_as_serde::ser::SerializeStruct>::end
                  (param_1,&local_60);
        return;
      }
      *(long *)(param_1 + 8) = lVar1;
      *param_1 = 0xff;
                    /* try { // try from 0070ebd4 to 0070ebdb has its CatchHandler @ 0070edd0 */
      FUN_0074a9a8(&local_78);
    }
    else {
      local_78 = 0;
      local_90 = -1;
      uStack_68 = 0;
                    /* try { // try from 0070ece8 to 0070ed3f has its CatchHandler @ 0070ee24 */
      lVar1 = FUN_00759afc(&local_90,"opcode",6,"setPartition",0xc);
      if (((lVar1 == 0) &&
          (lVar1 = FUN_00759f90(&local_90,"partitionKey",0xc,param_2 + 5), lVar1 == 0)) &&
         (lVar1 = FUN_00758560(&local_90,"partition",9,param_2 + 1), lVar1 == 0)) goto LAB_0070ed9c;
      *(long *)(param_1 + 8) = lVar1;
      *param_1 = 0xff;
                    /* try { // try from 0070ed50 to 0070ed57 has its CatchHandler @ 0070edd4 */
      FUN_0074a9a8(&local_78);
    }
  }
  else if (lVar1 == 2) {
    local_78 = 0;
    local_90 = -1;
    uStack_68 = 0;
                    /* try { // try from 0070ebf4 to 0070ec67 has its CatchHandler @ 0070ee44 */
    lVar1 = FUN_00759afc(&local_90,"opcode",6,"setRecord",9);
    if (((lVar1 == 0) &&
        (lVar1 = FUN_00759f90(&local_90,"partitionKey",0xc,param_2 + 0x44), lVar1 == 0)) &&
       ((lVar1 = FUN_007589dc(&local_90,"clusteringKey",0xd,param_2 + 0x43), lVar1 == 0 &&
        (lVar1 = FUN_0075910c(&local_90,"value",5,param_2), lVar1 == 0)))) goto LAB_0070ed9c;
    *(long *)(param_1 + 8) = lVar1;
    *param_1 = 0xff;
                    /* try { // try from 0070ec78 to 0070ec7f has its CatchHandler @ 0070eddc */
    FUN_0074a9a8(&local_78);
  }
  else if (lVar1 == 3) {
    local_78 = 0;
    local_90 = -1;
    uStack_68 = 0;
                    /* try { // try from 0070eafc to 0070eb53 has its CatchHandler @ 0070ee34 */
    lVar1 = FUN_00759afc(&local_90,"opcode",6,"removeRecord",0xc);
    if (((lVar1 == 0) &&
        (lVar1 = FUN_00759f90(&local_90,"partitionKey",0xc,param_2 + 2), lVar1 == 0)) &&
       (lVar1 = FUN_007589dc(&local_90,"clusteringKey",0xd,param_2 + 1), lVar1 == 0))
    goto LAB_0070ed9c;
    *(long *)(param_1 + 8) = lVar1;
    *param_1 = 0xff;
                    /* try { // try from 0070eb64 to 0070eb6b has its CatchHandler @ 0070edd8 */
    FUN_0074a9a8(&local_78);
  }
  else {
    local_78 = 0;
    local_90 = -1;
    uStack_68 = 0;
                    /* try { // try from 0070ec98 to 0070ecb7 has its CatchHandler @ 0070ee04 */
    lVar1 = FUN_00759afc(&local_90,"opcode",6,"clearDatabase",0xd);
    if (lVar1 == 0) goto LAB_0070ed9c;
    *(long *)(param_1 + 8) = lVar1;
    *param_1 = 0xff;
                    /* try { // try from 0070ecc8 to 0070eccf has its CatchHandler @ 0070edcc */
    FUN_0074a9a8(&local_78);
  }
  if ((local_90 != -1) && (local_90 != 0)) {
    free(pvStack_88);
    return;
  }
  return;
}


// ===== 0070ee5c  <libdiscore_common::stores::libdiscore_common::stores::Stores>::start_fetching_blocked_domains =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* <libdiscore_common::stores::libdiscore_common::stores::Stores>::start_fetching_blocked_domains */

void __rustcall
<libdiscore_common::stores::libdiscore_common::stores::Stores>::start_fetching_blocked_domains
          (long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  code *pcVar5;
  byte bVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long *local_720;
  char *pcStack_718;
  long local_710;
  undefined8 uStack_708;
  char *local_700;
  undefined8 local_6f8;
  undefined8 uStack_6f0;
  char *local_6e8;
  undefined8 uStack_6e0;
  undefined8 local_6d8;
  char *local_6d0;
  undefined8 uStack_6c8;
  undefined1 local_60;
  undefined1 uStack_31;
  
  plVar1 = param_1 + 2;
  local_720 = (long *)0x0;
  do {
    if ((int)*plVar1 != 0) {
      ClearExclusiveLocal();
                    /* try { // try from 0070f094 to 0070f09b has its CatchHandler @ 0070f0a0 */
      <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                (param_1 + 2);
      break;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  puVar4 = PTR_GLOBAL_PANIC_COUNT_00b00bf0;
  if ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0 & 0x7fffffffffffffff) == 0) {
    bVar6 = 0;
    cVar2 = *(char *)((long)param_1 + 0x14);
  }
  else {
                    /* try { // try from 0070f010 to 0070f013 has its CatchHandler @ 0070f0a0 */
    bVar6 = std::panicking::panic_count::is_zero_slow_path();
    bVar6 = bVar6 ^ 1;
    cVar2 = *(char *)((long)param_1 + 0x14);
  }
  if (cVar2 != '\0') {
    uVar7 = (ulong)pcStack_718 >> 8;
    pcStack_718 = (char *)CONCAT71((int7)uVar7,bVar6);
    local_720 = plVar1;
                    /* try { // try from 0070f028 to 0070f04b has its CatchHandler @ 0070f0c4 */
                    /* WARNING: Subroutine does not return */
    core::result::unwrap_failed
              ("mutex poisoned",0xe,&local_720,&PTR_FUN_00ad6000,
               &PTR_s_common_rust_src_core_maybe_mutex_00ad5fc8);
  }
  if ((*(byte *)((long)param_1 + 0x15) & 1) == 0) {
    pcStack_718 = (char *)param_2[1];
    local_720 = (long *)*param_2;
    local_710 = param_2[2];
    *(undefined1 *)((long)param_1 + 0x15) = 1;
    <libdiscore_common::stores::blocked_domains::[0]::libdiscore_common::stores::blocked_domains::BlockedDomainsStore>
    ::set_delta_url(*param_1 + 0x10,&local_720);
    plVar8 = (long *)*param_1;
    do {
      lVar9 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 < 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x70f050);
      (*pcVar5)();
    }
    local_720 = (long *)*param_1;
    local_60 = 0;
    FUN_0071a68c(&local_720);
    if ((((bVar6 & 1) == 0) && ((*(ulong *)puVar4 & 0x7fffffffffffffff) != 0)) &&
       (uVar7 = std::panicking::panic_count::is_zero_slow_path(), (uVar7 & 1) == 0)) {
      *(undefined1 *)((long)param_1 + 0x14) = 1;
    }
    do {
      lVar9 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = 0;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar9 == 2) {
      <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(plVar1);
    }
  }
  else {
    if (1 < *(ulong *)PTR_MAX_LOG_LEVEL_FILTER_00b00c78) {
      local_6e8 = "stores";
      uStack_6e0 = 6;
      local_6d0 = "BlockedDomainsStore.run_forever already spawned";
      uStack_6c8 = 0x5f;
      local_720 = (long *)0x0;
      pcStack_718 = "libdiscore_common::stores";
      local_700 = "common/rust/src/stores/mod.rs";
                    /* try { // try from 0070ef34 to 0070efcf has its CatchHandler @ 0070f0a8 */
      local_710 = _DAT_002a00f0;
      uStack_708 = _UNK_002a00f8;
      local_6f8 = _DAT_0029fd60;
      uStack_6f0 = _UNK_0029fd68;
      local_6d8 = DAT_002a1670;
      <log::__private_api::GlobalLogger_as_log::Log>::log(&uStack_31,&local_720);
    }
                    /* try { // try from 0070f068 to 0070f06b has its CatchHandler @ 0070f0a0 */
    if ((((bVar6 & 1) == 0) && ((*(ulong *)puVar4 & 0x7fffffffffffffff) != 0)) &&
       (uVar7 = std::panicking::panic_count::is_zero_slow_path(), (uVar7 & 1) == 0)) {
      *(undefined1 *)((long)param_1 + 0x14) = 1;
    }
    do {
      lVar9 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = 0;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar9 == 2) {
                    /* try { // try from 0070f050 to 0070f057 has its CatchHandler @ 0070f0a0 */
      <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(plVar1);
    }
    if (*param_2 != 0) {
      free((void *)param_2[1]);
    }
  }
  return;
}


// ===== 0070f0f8  <libdiscore_common::actions::guilds::[1]::libdiscore_common::actions::guilds::SerializedRole>::into_role =====

/* WARNING: Unknown calling convention: __rustcall */
/* <libdiscore_common::actions::guilds::[1]::libdiscore_common::actions::guilds::SerializedRole>::into_role
    */

void __rustcall
<libdiscore_common::actions::guilds::[1]::libdiscore_common::actions::guilds::SerializedRole>::
into_role(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,uint param_5
         ,uint param_6)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  char cVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  char cVar10;
  byte bVar11;
  bool bVar12;
  code *pcVar13;
  long *plVar14;
  undefined8 uVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  undefined8 uVar19;
  undefined8 in_x16;
  uint in_w17;
  long *plVar20;
  undefined8 unaff_x21;
  ulong unaff_x23;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined4 local_38;
  undefined3 uStack_34;
  
  cVar6 = *(char *)(param_2 + 7);
  uVar15 = param_2[10];
  if (cVar6 == '\x19') {
    plVar16 = (long *)param_2[8];
    do {
      lVar17 = *plVar16;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar12) {
        *plVar16 = lVar17 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar17 < 0) goto LAB_0070f2e8;
    plVar18 = (long *)param_2[0xb];
    uVar19 = param_2[9];
    if (plVar18 != (long *)0x0) goto LAB_0070f15c;
LAB_0070f210:
    iVar5 = *(int *)(param_2 + 0x13);
    uVar3 = local_38;
  }
  else {
    local_38._0_3_ = (undefined3)*(undefined4 *)((long)param_2 + 0x39);
    local_38._3_1_ = (undefined1)*(undefined4 *)((long)param_2 + 0x3c);
    uStack_34 = (undefined3)((uint)*(undefined4 *)((long)param_2 + 0x3c) >> 8);
    plVar18 = (long *)param_2[0xb];
    plVar16 = (long *)param_2[8];
    uVar19 = param_2[9];
    if (plVar18 == (long *)0x0) goto LAB_0070f210;
LAB_0070f15c:
    do {
      lVar17 = *plVar18;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar12) {
        *plVar18 = lVar17 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar17 < 0) goto LAB_0070f2e8;
    in_x16 = param_2[0xc];
    iVar5 = *(int *)(param_2 + 0x13);
    uVar3 = local_38;
  }
  if (iVar5 != 2) {
    param_6 = *(uint *)((long)param_2 + 0xa4);
    uVar1 = *(uint *)(param_2 + 0x15);
    param_5 = *(uint *)((long)param_2 + 0x9c);
    uVar2 = uVar1;
    if (uVar1 >> 0x18 != 0) {
      uVar2 = uVar1 >> 8;
    }
    in_w17 = 0x99aab5;
    if (uVar1 != 0) {
      in_w17 = uVar2;
    }
    param_4 = *(undefined4 *)(param_2 + 0x14);
    if (param_5 >> 0x18 != 0) {
      param_5 = param_5 >> 8;
    }
    if (param_6 >> 0x18 != 0) {
      param_6 = param_6 >> 8;
    }
  }
  uVar23 = param_2[0xe];
  uVar22 = param_2[0xd];
  uVar7 = *(undefined1 *)((long)param_2 + 0xb4);
  uVar2 = *(uint *)(param_2 + 0x16);
  plVar14 = (long *)param_2[0xf];
  uVar21 = *(undefined8 *)((long)param_2 + 0xac);
  uVar8 = *(undefined1 *)((long)param_2 + 0xb5);
  uVar9 = *(undefined1 *)((long)param_2 + 0xb6);
  if (plVar14 == (long *)0x0) {
    plVar20 = (long *)param_2[0x11];
  }
  else {
    do {
      lVar17 = *plVar14;
      bVar11 = 1;
      bVar12 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar12) {
        *plVar14 = lVar17 + 1;
        bVar11 = ExclusiveMonitorsStatus();
      }
      unaff_x23 = (ulong)bVar11;
    } while (bVar11 != 0);
    if (lVar17 < 0) goto LAB_0070f2e8;
    unaff_x21 = param_2[0x10];
    plVar20 = (long *)param_2[0x11];
  }
  if (plVar20 != (long *)0x0) {
    do {
      lVar17 = *plVar20;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar12) {
        *plVar20 = lVar17 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar17 < 0) {
LAB_0070f2e8:
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x70f2ec);
      (*pcVar13)();
    }
    unaff_x23 = param_2[0x12];
  }
  param_1[0xb] = param_3;
  param_1[0xc] = uVar15;
  *(char *)(param_1 + 8) = cVar6;
  local_38._3_1_ = (undefined1)((uint)uVar3 >> 0x18);
  param_1[0x10] = uVar23;
  param_1[0xf] = uVar22;
  uVar22 = param_2[0x14];
  uVar15 = param_2[0x13];
  *(undefined4 *)((long)param_1 + 0x41) = uVar3;
  *(uint *)((long)param_1 + 0x44) = CONCAT31(uStack_34,local_38._3_1_);
  param_1[0x1a] = uVar21;
  param_1[0x16] = uVar22;
  param_1[0x15] = uVar15;
  uVar23 = param_2[1];
  uVar22 = *param_2;
  uVar21 = param_2[3];
  uVar15 = param_2[2];
  param_1[9] = plVar16;
  param_1[10] = uVar19;
  uVar1 = uVar2;
  if (uVar2 >> 0x18 != 0) {
    uVar1 = uVar2 >> 8;
  }
  *(undefined1 *)(param_1 + 0x1b) = uVar7;
  uVar3 = *(undefined4 *)(param_2 + 0x15);
  *(uint *)(param_1 + 2) = (uint)(uVar2 != 0);
  *(uint *)((long)param_1 + 0x14) = uVar1;
  uVar4 = *(undefined4 *)(param_2 + 6);
  param_1[0x11] = plVar14;
  param_1[0x12] = unaff_x21;
  param_1[4] = uVar21;
  param_1[3] = uVar15;
  uVar19 = param_2[5];
  uVar15 = param_2[4];
  param_1[0x13] = plVar20;
  param_1[0x14] = unaff_x23;
  param_1[0xd] = plVar18;
  param_1[0xe] = in_x16;
  *(undefined4 *)(param_1 + 0x17) = uVar3;
  *(int *)((long)param_1 + 0xbc) = iVar5;
  *(uint *)(param_1 + 0x18) = param_5;
  *(undefined4 *)((long)param_1 + 0xc4) = param_4;
  *(uint *)(param_1 + 0x19) = param_6;
  *(uint *)((long)param_1 + 0xcc) = in_w17;
  *(undefined1 *)((long)param_1 + 0xd9) = uVar8;
  *(undefined1 *)((long)param_1 + 0xda) = uVar9;
  param_1[6] = uVar19;
  param_1[5] = uVar15;
  *(undefined4 *)(param_1 + 7) = uVar4;
  param_1[1] = uVar23;
  *param_1 = uVar22;
  return;
}


// ===== 0070f2ec  FUN_0070f2ec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0070f2ec(undefined8 *param_1,undefined8 *param_2,long *param_3,undefined8 param_4,
                 undefined8 param_5,long *param_6,long *param_7,long *param_8,long *param_9)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  ulong uVar6;
  char cVar7;
  char cVar8;
  byte bVar9;
  bool bVar10;
  undefined8 *puVar11;
  undefined8 **ppuVar12;
  uint uVar13;
  undefined8 **__s;
  code *pcVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  long *plVar22;
  undefined **ppuVar23;
  long lVar24;
  long *plVar25;
  long *plVar26;
  ulong in_x13;
  ulong extraout_x13;
  ulong extraout_x13_00;
  ulong extraout_x13_01;
  ulong extraout_x13_02;
  ulong extraout_x13_03;
  ulong extraout_x13_04;
  ulong extraout_x13_05;
  ulong extraout_x13_06;
  ulong extraout_x13_07;
  ulong extraout_x13_08;
  ulong in_x14;
  ulong uVar27;
  ulong extraout_x14;
  ulong extraout_x14_00;
  ulong extraout_x14_01;
  ulong extraout_x14_02;
  ulong extraout_x14_03;
  ulong extraout_x14_04;
  ulong extraout_x14_05;
  ulong extraout_x14_06;
  ulong extraout_x14_07;
  ulong extraout_x14_08;
  long *plVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  undefined8 **ppuVar31;
  undefined8 *puVar32;
  undefined8 uVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  byte bVar37;
  undefined8 uVar38;
  long lVar39;
  long lVar40;
  undefined8 **local_290;
  undefined8 *puStack_288;
  undefined8 *local_280;
  undefined8 *local_278;
  undefined8 *local_270;
  undefined8 *puStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  long local_250;
  long lStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long *local_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long *local_210;
  ulong uStack_208;
  long lStack_200;
  long lStack_1f8;
  long *local_1f0;
  long *plStack_1e8;
  long *plStack_1e0;
  long *plStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 *local_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined4 local_188;
  undefined3 uStack_184;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 *local_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined8 *local_158;
  undefined8 *puStack_150;
  long local_148;
  long lStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  long *local_128;
  long lStack_120;
  long local_118;
  long lStack_110;
  long *local_108;
  ulong uStack_100;
  long local_f8;
  long lStack_f0;
  long *local_e8;
  long *plStack_e0;
  long *local_d8;
  long *plStack_d0;
  int local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  int iStack_b4;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  long local_a0;
  byte local_98;
  undefined1 uStack_97;
  undefined1 uStack_96;
  undefined5 uStack_95;
  
  plVar22 = (long *)*param_2;
  if (plVar22[3] == 0) {
    lVar17 = param_2[2];
    lVar19 = *(long *)(lVar17 + 0x20);
    puStack_288 = _UNK_00ad5fb0;
    local_290 = (undefined8 **)PTR_DAT_00ad5fa8;
    local_278 = _UNK_00ad5fc0;
    local_280 = _DAT_00ad5fb8;
  }
  else {
    lVar17 = 0;
    in_x13 = 0x28;
    uVar27 = *param_3 * 0x517cc1b727220a95;
    bVar37 = (byte)(uVar27 >> 0x39);
    uVar33 = CONCAT17(bVar37,CONCAT16(bVar37,CONCAT15(bVar37,CONCAT14(bVar37,CONCAT13(bVar37,
                                                  CONCAT12(bVar37,CONCAT11(bVar37,bVar37)))))));
    lVar19 = *plVar22;
    uVar1 = plVar22[1];
    ppuVar23 = &PTR_DAT_00ad5fa8;
    in_x14 = uVar27 & uVar1;
    uVar38 = *(undefined8 *)(lVar19 + in_x14);
    uVar27 = NEON_cmeq(uVar38,uVar33,1);
    uVar27 = uVar27 & 0x8080808080808080;
    while( true ) {
      for (; uVar27 == 0; uVar27 = uVar27 & 0x8080808080808080) {
        uVar38 = NEON_cmeq(uVar38,0xffffffffffffffff,1);
        bVar37 = NEON_umaxv(uVar38,1);
        if ((bVar37 & 1) != 0) goto LAB_0070f444;
        lVar17 = lVar17 + 8;
        in_x14 = in_x14 + lVar17 & uVar1;
        uVar38 = *(undefined8 *)(lVar19 + in_x14);
        uVar27 = NEON_cmeq(uVar38,uVar33,1);
      }
      uVar6 = (uVar27 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar27 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      lVar20 = lVar19 + (in_x14 + ((ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 3) & uVar1) *
                        -0x28;
      if (*param_3 == *(long *)(lVar20 + -0x28)) break;
      uVar27 = uVar27 - 1 & uVar27;
    }
    puVar30 = *(undefined8 **)(lVar20 + -0x20);
    lVar17 = *(long *)(lVar20 + -0x18);
    lVar19 = *(long *)(lVar20 + -8);
    uVar38 = *puVar30;
    puStack_268 = _UNK_00ad7f90;
    local_270 = (undefined8 *)PTR_DAT_00ad7f88;
    puStack_258 = _UNK_00ad7fa0;
    puStack_260 = _DAT_00ad7f98;
    if (lVar19 != 0) {
                    /* try { // try from 0070fa9c to 0070fab3 has its CatchHandler @ 0070fabc */
      <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildRoleId,libdiscore_common[1cb84820f9455fa0]::stores::guild_role::GuildRole)>>
      ::reserve_rehash::
      <hashbrown[32fc5d502e7f9af5]::map::make_hasher<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildRoleId,libdiscore_common[1cb84820f9455fa0]::stores::guild_role::GuildRole,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::_closure_0_>
                (&local_270,lVar19,&local_250,1);
    }
    uVar27 = NEON_cmge(uVar38,0,1);
    local_290 = &local_270;
    puStack_168 = (undefined8 *)(uVar27 & 0x8080808080808080);
    local_158 = (undefined8 *)((long)puVar30 + lVar17 + 1);
                    /* try { // try from 0070f428 to 0070f433 has its CatchHandler @ 0070fabc */
    local_170 = puVar30;
    puStack_160 = puVar30 + 1;
    FUN_00700a04(&local_170,lVar19,&local_290);
    ppuVar23 = (undefined **)&local_170;
    puStack_168 = puStack_268;
    local_170 = local_270;
    local_158 = puStack_258;
    puStack_160 = puStack_260;
    in_x13 = extraout_x13;
    in_x14 = extraout_x14;
LAB_0070f444:
    lVar17 = param_2[2];
    puStack_288 = ((undefined8 **)ppuVar23)[1];
    local_290 = (undefined8 **)*ppuVar23;
    local_278 = ((undefined8 **)ppuVar23)[3];
    local_280 = ((undefined8 **)ppuVar23)[2];
    lVar19 = *(long *)(lVar17 + 0x20);
  }
  if (lVar19 != 0) {
    puVar29 = *(undefined8 **)(lVar17 + 0x18);
    lVar17 = *param_3;
    puVar30 = puVar29;
    do {
      __s = local_290;
      puVar32 = puVar30 + 0x1c;
      puVar18 = (undefined8 *)*puVar30;
      lVar20 = (long)puVar18 - (long)(ulong)(puVar18 != (undefined8 *)0x0);
      if (lVar20 < 2) {
        if (puVar18 == (undefined8 *)(ulong)(puVar18 != (undefined8 *)0x0)) {
          if (puVar30[0xb] != lVar17) goto LAB_0070f4d4;
          cVar8 = *(char *)(puVar30 + 8);
          lVar20 = puVar30[0xc];
          if (cVar8 == '\x19') {
            plVar22 = (long *)puVar30[9];
            do {
              lVar15 = *plVar22;
              cVar7 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(plVar22,0x10);
              if (bVar10) {
                *plVar22 = lVar15 + 1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (lVar15 < 0) goto LAB_0070fab8;
            plVar26 = (long *)puVar30[0xd];
            lVar15 = puVar30[10];
            if (plVar26 != (long *)0x0) goto LAB_0070f73c;
LAB_0070f764:
            iVar2 = *(int *)(puVar30 + 0x15);
            uVar13 = local_188;
          }
          else {
            local_188._0_3_ = (undefined3)*(undefined4 *)((long)puVar30 + 0x41);
            local_188._3_1_ = (undefined1)*(undefined4 *)((long)puVar30 + 0x44);
            uStack_184 = (undefined3)((uint)*(undefined4 *)((long)puVar30 + 0x44) >> 8);
            plVar26 = (long *)puVar30[0xd];
            plVar22 = (long *)puVar30[9];
            lVar15 = puVar30[10];
            if (plVar26 == (long *)0x0) goto LAB_0070f764;
LAB_0070f73c:
            do {
              lVar34 = *plVar26;
              cVar7 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(plVar26,0x10);
              if (bVar10) {
                *plVar26 = lVar34 + 1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (lVar34 < 0) goto LAB_0070fab8;
            in_x14 = puVar30[0xe];
            iVar2 = *(int *)(puVar30 + 0x15);
            uVar13 = local_188;
          }
          if (iVar2 != 2) {
            uStack_178 = *(undefined8 *)((long)puVar30 + 0xb4);
            local_180 = *(undefined8 *)((long)puVar30 + 0xac);
          }
          iVar3 = *(int *)((long)puVar30 + 0xbc);
          if (iVar3 != 2) {
            puStack_268 = (undefined8 *)puVar30[0x19];
            local_270 = (undefined8 *)puVar30[0x18];
          }
          puVar11 = (undefined8 *)puVar30[2];
          lVar24 = puVar30[0x10];
          lVar35 = puVar30[0xf];
          bVar37 = *(byte *)(puVar30 + 0x1b);
          param_6 = (long *)(ulong)bVar37;
          lVar34 = puVar30[0x1a];
          plVar21 = (long *)puVar30[0x11];
          uVar4 = *(undefined1 *)((long)puVar30 + 0xd9);
          uVar5 = *(undefined1 *)((long)puVar30 + 0xda);
          local_188 = uVar13;
          if (plVar21 != (long *)0x0) {
            do {
              lVar36 = *plVar21;
              bVar9 = 1;
              bVar10 = (bool)ExclusiveMonitorPass(plVar21,0x10);
              if (bVar10) {
                *plVar21 = lVar36 + 1;
                bVar9 = ExclusiveMonitorsStatus();
              }
              param_9 = (long *)(ulong)bVar9;
            } while (bVar9 != 0);
            if (lVar36 < 0) goto LAB_0070fab8;
            param_7 = (long *)puVar30[0x12];
          }
          param_8 = (long *)puVar30[0x13];
          if (param_8 != (long *)0x0) {
            do {
              lVar36 = *param_8;
              cVar7 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(param_8,0x10);
              if (bVar10) {
                *param_8 = lVar36 + 1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (lVar36 < 0) {
LAB_0070fab8:
                    /* WARNING: Does not return */
              pcVar14 = (code *)SoftwareBreakpoint(1,0x70fabc);
              (*pcVar14)();
            }
            param_9 = (long *)puVar30[0x14];
          }
          puStack_168 = (undefined8 *)puVar30[1];
          local_188._3_1_ = (undefined1)(uVar13 >> 0x18);
          uStack_12c = CONCAT31(uStack_184,local_188._3_1_);
          uStack_130._1_3_ = (undefined3)uVar13;
          uStack_130 = CONCAT31(uStack_130._1_3_,cVar8);
          uStack_bc = (undefined4)uStack_178;
          uStack_b8 = (undefined4)((ulong)uStack_178 >> 0x20);
          uStack_c4 = (undefined4)local_180;
          uStack_c0 = (undefined4)((ulong)local_180 >> 0x20);
          puStack_a8 = puStack_268;
          puStack_b0 = local_270;
          puStack_150 = (undefined8 *)puVar30[4];
          local_158 = (undefined8 *)puVar30[3];
          lStack_140 = puVar30[6];
          local_148 = puVar30[5];
          local_138 = *(undefined4 *)(puVar30 + 7);
                    /* try { // try from 0070f860 to 0070f86f has its CatchHandler @ 0070fad0 */
          local_170 = puVar18;
          puStack_160 = puVar11;
          local_128 = plVar22;
          lStack_120 = lVar15;
          local_118 = lVar17;
          lStack_110 = lVar20;
          local_108 = plVar26;
          uStack_100 = in_x14;
          local_f8 = lVar35;
          lStack_f0 = lVar24;
          local_e8 = plVar21;
          plStack_e0 = param_7;
          local_d8 = param_8;
          plStack_d0 = param_9;
          local_c8 = iVar2;
          iStack_b4 = iVar3;
          local_a0 = lVar34;
          local_98 = bVar37;
          uStack_97 = uVar4;
          uStack_96 = uVar5;
          FUN_0075e770(&local_270,&local_290,lVar20,&local_170);
          in_x13 = extraout_x13_05;
          in_x14 = extraout_x14_05;
        }
        else {
                    /* try { // try from 0070f6a0 to 0070f6af has its CatchHandler @ 0070fad8 */
          if ((puVar30[1] != lVar17) ||
             (FUN_006fcadc(&local_170,&local_290,puVar30[2] * 0x517cc1b727220a95,puVar30 + 2),
             in_x13 = extraout_x13_04, in_x14 = extraout_x14_04, puStack_168 == (undefined8 *)0x2))
          goto LAB_0070f4d4;
          uStack_1c8 = CONCAT44(uStack_bc,uStack_c0);
          local_1d0 = CONCAT44(uStack_c4,local_c8);
          uStack_1c0 = CONCAT44(iStack_b4,uStack_b8);
          uStack_1a0 = CONCAT53(uStack_95,CONCAT12(uStack_96,CONCAT11(uStack_97,local_98)));
          uStack_238 = CONCAT44(uStack_12c,uStack_130);
          uStack_240 = CONCAT44(uStack_134,local_138);
          lStack_200 = local_f8;
          lStack_1f8 = lStack_f0;
          plStack_1e0 = local_d8;
          plStack_1d8 = plStack_d0;
          local_250 = local_148;
          lStack_248 = lStack_140;
          lStack_220 = local_118;
          lStack_218 = lStack_110;
          puStack_1b8 = puStack_b0;
          local_210 = local_108;
          uStack_208 = uStack_100;
          puStack_268 = puStack_160;
          local_230 = local_128;
          lStack_228 = lStack_120;
          local_1b0 = puStack_a8;
          lStack_1a8 = local_a0;
          local_1f0 = local_e8;
          plStack_1e8 = plStack_e0;
          puStack_260 = local_158;
          puStack_258 = puStack_150;
          local_270 = puStack_168;
        }
        if (local_270 != (undefined8 *)0x2) {
          FUN_0070ce2c(&local_270);
          in_x13 = extraout_x13_06;
          in_x14 = extraout_x14_06;
        }
      }
      else if (lVar20 == 2) {
        if (puVar30[4] == lVar17) {
          if (local_278 != (undefined8 *)0x0) {
            ppuVar31 = local_290 + 1;
            uVar27 = NEON_cmge(*local_290,0,1);
            uVar27 = uVar27 & 0x8080808080808080;
            ppuVar12 = local_290;
            puVar18 = local_278;
            do {
              for (; uVar27 == 0; uVar27 = uVar27 & 0x8080808080808080) {
                uVar27 = NEON_cmge(*ppuVar31,0,1);
                ppuVar12 = ppuVar12 + -0xe8;
                ppuVar31 = ppuVar31 + 1;
              }
              uVar1 = (uVar27 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                      (uVar27 >> 7 & 0xff00ff00ff00ff) << 8;
              uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
                    /* try { // try from 0070f640 to 0070f643 has its CatchHandler @ 0070fae8 */
              FUN_00702244(ppuVar12 +
                           (long)-(int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) * 0x1d +
                           -0x1c);
              puVar11 = puStack_288;
              puVar18 = (undefined8 *)((long)puVar18 + -1);
              uVar27 = uVar27 - 1 & uVar27;
            } while (puVar18 != (undefined8 *)0x0);
            if (puStack_288 == (undefined8 *)0x0) {
              local_280 = (undefined8 *)0x0;
              in_x13 = extraout_x13_02;
              in_x14 = extraout_x14_02;
            }
            else {
              memset(__s,0xff,(size_t)((long)puStack_288 + 9));
              local_280 = puVar11;
              in_x13 = extraout_x13_03;
              in_x14 = extraout_x14_03;
              if ((undefined8 *)0x7 < puVar11) {
                local_280 = (undefined8 *)(((ulong)((long)puVar11 + 1) >> 3) * 7);
              }
            }
            local_278 = (undefined8 *)0x0;
          }
          if (puVar30[3] != 0) {
            plVar22 = (long *)puVar30[2];
            plVar26 = plVar22 + puVar30[3] * 0x1c;
            do {
              lVar20 = plVar22[8];
              lVar15 = plVar22[0xc];
              lVar35 = plVar22[0xc];
              lVar34 = plVar22[0xb];
              if ((char)lVar20 == '\x19') {
                plVar21 = (long *)plVar22[9];
                do {
                  lVar24 = *plVar21;
                  cVar8 = '\x01';
                  bVar10 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                  if (bVar10) {
                    *plVar21 = lVar24 + 1;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
                if (lVar24 < 0) goto LAB_0070fab8;
                plVar25 = (long *)plVar22[0xd];
                lVar24 = plVar22[10];
                if (plVar25 != (long *)0x0) goto LAB_0070f920;
LAB_0070f948:
                iVar2 = (int)plVar22[0x15];
                uVar13 = local_188;
              }
              else {
                local_188._0_3_ = (undefined3)*(undefined4 *)((long)plVar22 + 0x41);
                local_188._3_1_ = (undefined1)*(undefined4 *)((long)plVar22 + 0x44);
                uStack_184 = (undefined3)((uint)*(undefined4 *)((long)plVar22 + 0x44) >> 8);
                plVar25 = (long *)plVar22[0xd];
                plVar21 = (long *)plVar22[9];
                lVar24 = plVar22[10];
                if (plVar25 == (long *)0x0) goto LAB_0070f948;
LAB_0070f920:
                do {
                  lVar36 = *plVar25;
                  cVar8 = '\x01';
                  bVar10 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                  if (bVar10) {
                    *plVar25 = lVar36 + 1;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
                if (lVar36 < 0) goto LAB_0070fab8;
                in_x13 = plVar22[0xe];
                iVar2 = (int)plVar22[0x15];
                uVar13 = local_188;
              }
              if (iVar2 != 2) {
                uStack_178 = *(undefined8 *)((long)plVar22 + 0xb4);
                local_180 = *(undefined8 *)((long)plVar22 + 0xac);
              }
              iVar3 = *(int *)((long)plVar22 + 0xbc);
              if (iVar3 != 2) {
                puStack_268 = (undefined8 *)plVar22[0x19];
                local_270 = (undefined8 *)plVar22[0x18];
              }
              puVar30 = (undefined8 *)plVar22[2];
              lVar40 = plVar22[0x10];
              lVar39 = plVar22[0xf];
              bVar37 = *(byte *)(plVar22 + 0x1b);
              lVar36 = plVar22[0x1a];
              plVar28 = (long *)plVar22[0x11];
              uVar4 = *(undefined1 *)((long)plVar22 + 0xd9);
              uVar5 = *(undefined1 *)((long)plVar22 + 0xda);
              local_188 = uVar13;
              if (plVar28 != (long *)0x0) {
                do {
                  lVar16 = *plVar28;
                  bVar9 = 1;
                  bVar10 = (bool)ExclusiveMonitorPass(plVar28,0x10);
                  if (bVar10) {
                    *plVar28 = lVar16 + 1;
                    bVar9 = ExclusiveMonitorsStatus();
                  }
                  param_8 = (long *)(ulong)bVar9;
                } while (bVar9 != 0);
                if (lVar16 < 0) goto LAB_0070fab8;
                param_6 = (long *)plVar22[0x12];
              }
              param_7 = (long *)plVar22[0x13];
              if (param_7 != (long *)0x0) {
                do {
                  lVar16 = *param_7;
                  cVar8 = '\x01';
                  bVar10 = (bool)ExclusiveMonitorPass(param_7,0x10);
                  if (bVar10) {
                    *param_7 = lVar16 + 1;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
                if (lVar16 < 0) goto LAB_0070fab8;
                param_8 = (long *)plVar22[0x14];
              }
              local_170 = (undefined8 *)*plVar22;
              puStack_168 = (undefined8 *)plVar22[1];
              param_9 = (long *)(ulong)uVar13;
              local_188._3_1_ = (undefined1)(uVar13 >> 0x18);
              uStack_12c = CONCAT31(uStack_184,local_188._3_1_);
              uStack_bc = (undefined4)uStack_178;
              uStack_b8 = (undefined4)((ulong)uStack_178 >> 0x20);
              uStack_c4 = (undefined4)local_180;
              uStack_c0 = (undefined4)((ulong)local_180 >> 0x20);
              uStack_130._1_3_ = (undefined3)uVar13;
              uStack_130 = CONCAT31(uStack_130._1_3_,(char)lVar20);
              puStack_a8 = puStack_268;
              puStack_b0 = local_270;
              puStack_150 = (undefined8 *)plVar22[4];
              local_158 = (undefined8 *)plVar22[3];
              lStack_140 = plVar22[6];
              local_148 = plVar22[5];
              local_138 = (undefined4)plVar22[7];
                    /* try { // try from 0070fa40 to 0070fa4f has its CatchHandler @ 0070fae0 */
              puStack_160 = puVar30;
              local_128 = plVar21;
              lStack_120 = lVar24;
              local_118 = lVar34;
              lStack_110 = lVar35;
              local_108 = plVar25;
              uStack_100 = in_x13;
              local_f8 = lVar39;
              lStack_f0 = lVar40;
              local_e8 = plVar28;
              plStack_e0 = param_6;
              local_d8 = param_7;
              plStack_d0 = param_8;
              local_c8 = iVar2;
              iStack_b4 = iVar3;
              local_a0 = lVar36;
              local_98 = bVar37;
              uStack_97 = uVar4;
              uStack_96 = uVar5;
              FUN_0075e770(&local_270,&local_290,lVar15,&local_170);
              in_x13 = extraout_x13_07;
              in_x14 = extraout_x14_07;
              if (local_270 != (undefined8 *)0x2) {
                FUN_0070ce2c(&local_270);
                in_x13 = extraout_x13_08;
                in_x14 = extraout_x14_08;
              }
              plVar22 = plVar22 + 0x1c;
            } while (plVar22 != plVar26);
          }
        }
      }
      else if (((lVar20 != 3) || (puVar30[1] == lVar17)) && (local_278 != (undefined8 *)0x0)) {
        ppuVar31 = local_290 + 1;
        uVar27 = NEON_cmge(*local_290,0,1);
        uVar27 = uVar27 & 0x8080808080808080;
        ppuVar12 = local_290;
        puVar30 = local_278;
        do {
          for (; uVar27 == 0; uVar27 = uVar27 & 0x8080808080808080) {
            uVar27 = NEON_cmge(*ppuVar31,0,1);
            ppuVar12 = ppuVar12 + -0xe8;
            ppuVar31 = ppuVar31 + 1;
          }
          uVar1 = (uVar27 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar27 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
                    /* try { // try from 0070f56c to 0070f56f has its CatchHandler @ 0070fb00 */
          FUN_00702244(ppuVar12 +
                       (long)-(int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) * 0x1d +
                       -0x1c);
          puVar18 = puStack_288;
          puVar30 = (undefined8 *)((long)puVar30 + -1);
          uVar27 = uVar27 - 1 & uVar27;
        } while (puVar30 != (undefined8 *)0x0);
        if (puStack_288 == (undefined8 *)0x0) {
          local_280 = (undefined8 *)0x0;
          in_x13 = extraout_x13_01;
          in_x14 = extraout_x14_01;
        }
        else {
          memset(__s,0xff,(size_t)((long)puStack_288 + 9));
          local_280 = puVar18;
          in_x13 = extraout_x13_00;
          in_x14 = extraout_x14_00;
          if ((undefined8 *)0x7 < puVar18) {
            local_280 = (undefined8 *)(((ulong)((long)puVar18 + 1) >> 3) * 7);
          }
        }
        local_278 = (undefined8 *)0x0;
      }
LAB_0070f4d4:
      puVar30 = puVar32;
    } while (puVar32 != puVar29 + lVar19 * 0x1c);
  }
  param_1[1] = puStack_288;
  *param_1 = local_290;
  param_1[3] = local_278;
  param_1[2] = local_280;
  return;
}


// ===== 0070fb54  FUN_0070fb54 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0070fb54(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined8 *extraout_x10;
  undefined8 *puVar4;
  undefined8 *extraout_x10_00;
  undefined8 *extraout_x10_01;
  undefined8 *extraout_x10_02;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 *local_d0;
  ulong uStack_c8;
  undefined8 *local_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 *local_a0;
  ulong uStack_98;
  undefined8 *local_90;
  undefined8 *puStack_88;
  ulong local_80;
  undefined8 *puStack_78;
  undefined *local_70;
  long lStack_68;
  undefined8 **local_60;
  undefined8 ***pppuStack_58;
  
  plVar3 = (long *)*param_2;
  puVar4 = (undefined8 *)*plVar3;
  lVar5 = plVar3[1];
  lVar7 = plVar3[3];
  uVar11 = *puVar4;
  uVar9 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00bf8;
  if (uVar9 == 0) {
    uVar9 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00bf8);
    plVar3 = (long *)pthread_getspecific((pthread_key_t)uVar9);
  }
  else {
    plVar3 = (long *)pthread_getspecific((pthread_key_t)uVar9);
  }
  local_a0 = (undefined8 *)PTR_DAT_00ad5fa8;
  uStack_98 = _UNK_00ad5fb0;
  local_90 = (undefined8 *)_DAT_00ad5fb8;
  puStack_88 = (undefined8 *)_UNK_00ad5fc0;
  if (plVar3 < (long *)0x2) {
    plVar3 = (long *)FUN_0072c9d4(uVar9 & 0xffffffff,plVar3,0);
    local_a0 = (undefined8 *)PTR_DAT_00ad5fa8;
    uStack_98 = _UNK_00ad5fb0;
    local_90 = (undefined8 *)_DAT_00ad5fb8;
    puStack_88 = (undefined8 *)_UNK_00ad5fc0;
  }
  PTR_DAT_00ad5fa8 = (undefined *)local_a0;
  _UNK_00ad5fb0 = uStack_98;
  _DAT_00ad5fb8 = (ulong)local_90;
  _UNK_00ad5fc0 = (long)puStack_88;
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::thread::local::panic_access_error(&PTR_s__nix_store_8006w282fgsx3273c878b_00ad6130);
  }
  puStack_78 = (undefined8 *)plVar3[1];
  local_80 = *plVar3;
  *plVar3 = *plVar3 + 1;
  if (lVar7 != 0) {
                    /* try { // try from 0070fdd8 to 0070fdeb has its CatchHandler @ 0070fdf0 */
    <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(libdiscore_common[1cb84820f9455fa0]::core::
    snowflake::GuildId,())>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::
    make_hasher<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId_();
  }
  uStack_c8 = NEON_cmge(uVar11,0,1);
  pppuStack_58 = &local_60;
  uStack_c8 = uStack_c8 & 0x8080808080808080;
  lStack_b8 = (long)puVar4 + lVar5 + 1;
                    /* try { // try from 0070fc08 to 0070fc17 has its CatchHandler @ 0070fdf0 */
  local_d0 = puVar4;
  local_c0 = puVar4 + 1;
  local_60 = &local_a0;
  FUN_00700f90(&local_d0,lVar7,&pppuStack_58);
  lStack_b8 = (long)puStack_88;
  local_c0 = local_90;
  lStack_a8 = (long)puStack_78;
  lStack_b0 = local_80;
  lVar7 = *(long *)(param_2[2] + 0x20);
  uStack_c8 = uStack_98;
  local_d0 = local_a0;
  puVar4 = extraout_x10;
  lVar5 = extraout_x12;
  if (lVar7 != 0) {
    puVar4 = (undefined8 *)(lVar7 * 0x100);
    lVar8 = *(long *)(param_2[2] + 0x18);
    lVar7 = lVar7 * 0xe0;
    puVar10 = (undefined8 *)(lVar8 + 0x58);
    do {
      uVar9 = uStack_c8;
      uVar1 = puVar10[-0xb];
      lVar2 = uVar1 - (uVar1 != 0);
      if (lVar2 < 2) {
        puVar6 = puVar10;
        if (uVar1 == (uVar1 != 0)) {
LAB_0070fc58:
                    /* try { // try from 0070fc5c to 0070fcbb has its CatchHandler @ 0070fe04 */
          FUN_0075f57c(&local_d0,*puVar6);
          puVar4 = extraout_x10_00;
          lVar5 = extraout_x12_00;
        }
      }
      else {
        if (lVar2 == 2) {
          puVar6 = (undefined8 *)(lVar8 + 0x20);
          if (puVar10[-8] != 0) goto LAB_0070fc58;
        }
        else {
          if (lVar2 != 3) {
            if (lStack_b8 != 0) {
              if (uStack_c8 == 0) {
                local_c0 = (undefined8 *)0;
              }
              else {
                memset(local_d0,0xff,uStack_c8 + 9);
                local_c0 = (undefined8 *)uVar9;
                puVar4 = extraout_x10_02;
                lVar5 = extraout_x12_02;
                if (7 < uVar9) {
                  local_c0 = (undefined8 *)((uVar9 + 1 >> 3) * 7);
                }
              }
              lStack_b8 = 0;
            }
            goto LAB_0070fc64;
          }
          puVar6 = puVar10 + -10;
        }
        uVar11 = FUN_0076b084(&lStack_b0,puVar6);
        FUN_006feac0(&local_d0,uVar11,puVar6);
        puVar4 = extraout_x10_01;
        lVar5 = extraout_x12_01;
      }
LAB_0070fc64:
      lVar7 = lVar7 + -0xe0;
      lVar8 = lVar8 + 0xe0;
      puVar10 = puVar10 + 0x1c;
    } while (lVar7 != 0);
  }
  if (uStack_c8 == 0) {
    local_a0 = (undefined8 *)0x0;
  }
  else {
    local_a0 = (undefined8 *)0x8;
    lVar5 = uStack_c8 * 9 + 0x11;
    puVar4 = local_d0 + (-1 - uStack_c8);
  }
  local_80 = NEON_cmge(*local_d0,0,1);
  local_70 = (undefined *)((long)local_d0 + uStack_c8 + 1);
  puStack_88 = local_d0;
  lStack_68 = lStack_b8;
  puStack_78 = local_d0 + 1;
  local_80 = local_80 & 0x8080808080808080;
  uStack_98 = lVar5;
  local_90 = puVar4;
  FUN_007646c4(param_1,&local_a0);
  return;
}


// ===== 0070fe18  FUN_0070fe18 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0070fe18(undefined8 *param_1,undefined8 *param_2,ulong *param_3)

{
  long lVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  ulong uVar5;
  char cVar6;
  undefined8 *puVar7;
  code *pcVar8;
  bool bVar9;
  undefined8 *__dest;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  undefined **ppuVar15;
  ulong uVar16;
  undefined8 *puVar17;
  ulong *puVar18;
  void *pvVar19;
  undefined8 *puVar20;
  ulong *puVar21;
  undefined8 uVar23;
  byte bVar24;
  undefined8 uVar25;
  ulong uVar26;
  undefined8 **local_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 *local_160;
  undefined8 *puStack_158;
  undefined8 *local_150;
  undefined8 *local_148;
  ulong local_140;
  long *plStack_138;
  long *local_130;
  ulong uStack_128;
  ulong local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  ulong local_100;
  long *plStack_f8;
  long *local_f0;
  undefined8 *local_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *local_c8;
  undefined8 *puStack_c0;
  ulong local_b8;
  long *plStack_b0;
  long *local_a8;
  ulong uStack_a0;
  ulong local_98;
  undefined4 uStack_90;
  undefined1 uStack_8c;
  undefined1 uStack_8b;
  undefined1 uStack_8a;
  undefined1 uStack_89;
  undefined8 local_88;
  ulong *puVar22;
  
  plVar14 = (long *)*param_2;
  if (plVar14[3] == 0) {
    lVar10 = param_2[2];
    lVar13 = *(long *)(lVar10 + 0x20);
    puStack_178 = _UNK_00ad5fb0;
    local_180 = (undefined8 **)PTR_DAT_00ad5fa8;
    puStack_168 = _UNK_00ad5fc0;
    puStack_170 = _DAT_00ad5fb8;
  }
  else {
    lVar10 = 0;
    uVar16 = *param_3 * 0x517cc1b727220a95;
    bVar24 = (byte)(uVar16 >> 0x39);
    uVar23 = CONCAT17(bVar24,CONCAT16(bVar24,CONCAT15(bVar24,CONCAT14(bVar24,CONCAT13(bVar24,
                                                  CONCAT12(bVar24,CONCAT11(bVar24,bVar24)))))));
    lVar13 = *plVar14;
    uVar11 = plVar14[1];
    ppuVar15 = &PTR_DAT_00ad5fa8;
    uVar16 = uVar16 & uVar11;
    uVar25 = *(undefined8 *)(lVar13 + uVar16);
    uVar26 = NEON_cmeq(uVar25,uVar23,1);
    uVar26 = uVar26 & 0x8080808080808080;
    while( true ) {
      for (; uVar26 == 0; uVar26 = uVar26 & 0x8080808080808080) {
        uVar25 = NEON_cmeq(uVar25,0xffffffffffffffff,1);
        bVar24 = NEON_umaxv(uVar25,1);
        if ((bVar24 & 1) != 0) goto LAB_0070ff68;
        lVar10 = lVar10 + 8;
        uVar16 = uVar16 + lVar10 & uVar11;
        uVar25 = *(undefined8 *)(lVar13 + uVar16);
        uVar26 = NEON_cmeq(uVar25,uVar23,1);
      }
      uVar5 = (uVar26 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar26 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      lVar1 = lVar13 + (uVar16 + ((ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3) & uVar11) *
                       -0x28;
      if (*param_3 == *(ulong *)(lVar1 + -0x28)) break;
      uVar26 = uVar26 - 1 & uVar26;
    }
    puVar20 = *(undefined8 **)(lVar1 + -0x20);
    lVar10 = *(long *)(lVar1 + -0x18);
    lVar13 = *(long *)(lVar1 + -8);
    uVar25 = *puVar20;
    puStack_158 = _UNK_00ad7f90;
    local_160 = (undefined8 *)PTR_DAT_00ad7f88;
    local_148 = _UNK_00ad7fa0;
    local_150 = _DAT_00ad7f98;
    if (lVar13 != 0) {
                    /* try { // try from 007104fc to 0071051b has its CatchHandler @ 00710528 */
      <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(libdiscore_common[1cb84820f9455fa0]::core::snowflake::EmojiId,libdiscore_common[1cb84820f9455fa0]::stores::guild_emoji::RawGuildEmoji)>>
      ::reserve_rehash::
      <hashbrown[32fc5d502e7f9af5]::map::make_hasher<libdiscore_common[1cb84820f9455fa0]::core::snowflake::EmojiId,libdiscore_common[1cb84820f9455fa0]::stores::guild_emoji::RawGuildEmoji,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::_closure_0_>
                (&local_160,lVar13,&local_140,1);
    }
    uVar26 = NEON_cmge(uVar25,0,1);
    local_180 = &local_160;
    puStack_d8 = (undefined8 *)(uVar26 & 0x8080808080808080);
    local_c8 = (undefined8 *)((long)puVar20 + lVar10 + 1);
                    /* try { // try from 0070ff50 to 0070ff5b has its CatchHandler @ 00710528 */
    local_e0 = puVar20;
    puStack_d0 = puVar20 + 1;
    FUN_00700c88(&local_e0,lVar13,&local_180);
    ppuVar15 = (undefined **)&local_e0;
    puStack_d8 = puStack_158;
    local_e0 = local_160;
    local_c8 = local_148;
    puStack_d0 = local_150;
LAB_0070ff68:
    lVar10 = param_2[2];
    puStack_178 = ((undefined8 **)ppuVar15)[1];
    local_180 = (undefined8 **)*ppuVar15;
    puStack_168 = ((undefined8 **)ppuVar15)[3];
    puStack_170 = ((undefined8 **)ppuVar15)[2];
    lVar13 = *(long *)(lVar10 + 0x20);
  }
  if (lVar13 != 0) {
    puVar18 = *(ulong **)(lVar10 + 0x18);
    uVar26 = *param_3;
    puVar21 = puVar18;
    do {
      puVar22 = puVar21 + 0xb;
      uVar11 = *puVar21;
      lVar10 = uVar11 - (uVar11 != 0);
      if (lVar10 < 2) {
        if (uVar11 == (uVar11 != 0)) {
          if (puVar21[8] == uVar26) {
            uVar11 = puVar21[9];
            uVar2 = *(undefined1 *)((long)puVar21 + 0x54);
            if ((char)puVar21[5] == '\x19') {
              plVar14 = (long *)puVar21[6];
              do {
                lVar10 = *plVar14;
                cVar6 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                if (bVar9) {
                  *plVar14 = lVar10 + 1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (lVar10 < 0) {
LAB_007104f4:
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x7104f8);
                (*pcVar8)();
              }
              local_f0 = (long *)puVar21[7];
              local_100 = CONCAT71(local_100._1_7_,0x19);
              puVar20 = (undefined8 *)puVar21[4];
              plStack_f8 = plVar14;
            }
            else {
              local_100 = puVar21[5];
              local_f0 = (long *)puVar21[7];
              puVar20 = (undefined8 *)puVar21[4];
              plStack_f8 = (long *)puVar21[6];
            }
            uVar16 = (long)puVar20 << 3;
            uVar25 = 0;
            if (((ulong)puVar20 >> 0x3d != 0) || (uVar25 = 0, 0x7ffffffffffffff8 < uVar16)) {
LAB_007104ec:
                    /* try { // try from 007104ec to 007104f3 has its CatchHandler @ 00710544 */
                    /* WARNING: Subroutine does not return */
              alloc::raw_vec::handle_error(uVar25,uVar16);
            }
            uVar3 = *(undefined1 *)((long)puVar21 + 0x55);
            uVar4 = *(undefined1 *)((long)puVar21 + 0x56);
            pvVar19 = (void *)puVar21[3];
            if (uVar16 == 0) {
              puVar17 = (undefined8 *)&DAT_00000008;
              puVar12 = (undefined8 *)0x0;
            }
            else {
              __rustc::__rust_no_alloc_shim_is_unstable_v2(0);
              puVar17 = (undefined8 *)FUN_004b25a4(uVar16,8);
              uVar25 = 8;
              puVar12 = puVar20;
              if (puVar17 == (undefined8 *)0x0) goto LAB_007104ec;
            }
            if (puVar20 != (undefined8 *)0x0) {
              memcpy(puVar17,pvVar19,uVar16);
            }
            plStack_b0 = plStack_f8;
            local_b8 = local_100;
            local_a8 = local_f0;
            uStack_89 = *(undefined1 *)((long)puVar21 + 0x57);
            local_e0 = (undefined8 *)*puVar21;
            puStack_d8 = (undefined8 *)puVar21[1];
            uStack_90 = (undefined4)puVar21[10];
                    /* try { // try from 00710428 to 00710437 has its CatchHandler @ 00710520 */
            puStack_d0 = puVar12;
            local_c8 = puVar17;
            puStack_c0 = puVar20;
            uStack_a0 = uVar26;
            local_98 = uVar11;
            uStack_8c = uVar2;
            uStack_8b = uVar3;
            uStack_8a = uVar4;
            FUN_0075ebd0(&local_160,&local_180,uVar11,&local_e0);
            if (local_160 != (undefined8 *)0x2) {
              bVar9 = 0x18 < (byte)plStack_138;
              if (bVar9) {
                do {
                  lVar10 = *local_130 + -1;
                  cVar6 = '\x01';
                  bVar9 = (bool)ExclusiveMonitorPass(local_130,0x10);
                  if (bVar9) {
                    *local_130 = lVar10;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
LAB_00710474:
                if (lVar10 == 0) {
                  DataMemoryBarrier(2,1);
                  <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(&local_130);
                }
              }
LAB_00710488:
              if (local_150 != (undefined8 *)0x0) {
                free(local_148);
              }
            }
          }
        }
        else {
                    /* try { // try from 007102c0 to 007102cf has its CatchHandler @ 0071053c */
          if ((puVar21[1] == uVar26) &&
             (FUN_006fd838(&local_e0,&local_180,puVar21[2] * 0x517cc1b727220a95,puVar21 + 2),
             puStack_d8 != (undefined8 *)0x2)) {
            puStack_158 = puStack_d0;
            local_160 = puStack_d8;
            local_148 = puStack_c0;
            local_150 = local_c8;
            plStack_138 = plStack_b0;
            local_140 = local_b8;
            uStack_128 = uStack_a0;
            local_130 = local_a8;
            uStack_118 = CONCAT17(uStack_89,
                                  CONCAT16(uStack_8a,
                                           CONCAT15(uStack_8b,CONCAT14(uStack_8c,uStack_90))));
            local_120 = local_98;
            local_110 = local_88;
            plVar14 = plStack_138;
            if (puStack_d8 != (undefined8 *)0x2) {
              plStack_138._0_1_ = (byte)plStack_b0;
              bVar9 = 0x18 < (byte)plStack_138;
              plStack_138 = plVar14;
              if (bVar9) {
                do {
                  lVar10 = *local_a8 + -1;
                  cVar6 = '\x01';
                  bVar9 = (bool)ExclusiveMonitorPass(local_a8,0x10);
                  if (bVar9) {
                    *local_a8 = lVar10;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                goto LAB_00710474;
              }
              goto LAB_00710488;
            }
          }
        }
      }
      else if (lVar10 == 2) {
        if (puVar21[4] == uVar26) {
          FUN_00702b84(&local_180);
          if (puVar21[3] != 0) {
            puVar20 = (undefined8 *)puVar21[2];
            puVar12 = puVar20 + puVar21[3] * 0xb;
            do {
              uVar11 = puVar20[8];
              uVar16 = puVar20[9];
              uVar2 = *(undefined1 *)((long)puVar20 + 0x54);
              if ((char)puVar20[5] == '\x19') {
                plVar14 = (long *)puVar20[6];
                do {
                  lVar10 = *plVar14;
                  cVar6 = '\x01';
                  bVar9 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                  if (bVar9) {
                    *plVar14 = lVar10 + 1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (lVar10 < 0) goto LAB_007104f4;
                local_f0 = (long *)puVar20[7];
                local_100 = CONCAT71(local_100._1_7_,0x19);
                puVar17 = (undefined8 *)puVar20[4];
                plStack_f8 = plVar14;
              }
              else {
                local_100 = puVar20[5];
                local_f0 = (long *)puVar20[7];
                puVar17 = (undefined8 *)puVar20[4];
                plStack_f8 = (long *)puVar20[6];
              }
              uVar5 = (long)puVar17 << 3;
              uVar25 = 0;
              if (((ulong)puVar17 >> 0x3d != 0) || (uVar25 = 0, 0x7ffffffffffffff8 < uVar5)) {
LAB_007104e0:
                    /* try { // try from 007104e0 to 007104e7 has its CatchHandler @ 0071056c */
                    /* WARNING: Subroutine does not return */
                alloc::raw_vec::handle_error(uVar25,uVar5);
              }
              uVar3 = *(undefined1 *)((long)puVar20 + 0x55);
              uVar4 = *(undefined1 *)((long)puVar20 + 0x56);
              pvVar19 = (void *)puVar20[3];
              if (uVar5 == 0) {
                __dest = (undefined8 *)&DAT_00000008;
                puVar7 = (undefined8 *)0x0;
              }
              else {
                __rustc::__rust_no_alloc_shim_is_unstable_v2(0);
                __dest = (undefined8 *)FUN_004b25a4(uVar5,8);
                uVar25 = 8;
                puVar7 = puVar17;
                if (__dest == (undefined8 *)0x0) goto LAB_007104e0;
              }
              if (puVar17 != (undefined8 *)0x0) {
                memcpy(__dest,pvVar19,uVar5);
              }
              plStack_b0 = plStack_f8;
              local_b8 = local_100;
              local_a8 = local_f0;
              uStack_89 = *(undefined1 *)((long)puVar20 + 0x57);
              local_e0 = (undefined8 *)*puVar20;
              puStack_d8 = (undefined8 *)puVar20[1];
              uStack_90 = *(undefined4 *)(puVar20 + 10);
                    /* try { // try from 007101f8 to 0071020b has its CatchHandler @ 00710524 */
              puStack_d0 = puVar7;
              local_c8 = __dest;
              puStack_c0 = puVar17;
              uStack_a0 = uVar11;
              local_98 = uVar16;
              uStack_8c = uVar2;
              uStack_8b = uVar3;
              uStack_8a = uVar4;
              FUN_0075ebd0(&local_160,&local_180,uVar16,&local_e0);
              if (local_160 != (undefined8 *)0x2) {
                if (0x18 < (byte)plStack_138) {
                  do {
                    lVar10 = *local_130;
                    cVar6 = '\x01';
                    bVar9 = (bool)ExclusiveMonitorPass(local_130,0x10);
                    if (bVar9) {
                      *local_130 = lVar10 + -1;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  if (lVar10 + -1 == 0) {
                    DataMemoryBarrier(2,1);
                    <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(&local_130);
                  }
                }
                if (local_150 != (undefined8 *)0x0) {
                  free(local_148);
                }
              }
              puVar20 = puVar20 + 0xb;
            } while (puVar20 != puVar12);
          }
        }
      }
      else if ((lVar10 != 3) || (puVar21[1] == uVar26)) {
                    /* try { // try from 0070ffc0 to 00710097 has its CatchHandler @ 0071053c */
        FUN_00702b84(&local_180);
      }
      puVar21 = puVar22;
    } while (puVar22 != puVar18 + lVar13 * 0xb);
  }
  param_1[1] = puStack_178;
  *param_1 = local_180;
  param_1[3] = puStack_168;
  param_1[2] = puStack_170;
  return;
}


// ===== 007105b8  FUN_007105b8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007105b8(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined8 *extraout_x10;
  undefined8 *puVar4;
  undefined8 *extraout_x10_00;
  undefined8 *extraout_x10_01;
  undefined8 *extraout_x10_02;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 *local_d0;
  ulong uStack_c8;
  undefined8 *local_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 *local_a0;
  ulong uStack_98;
  undefined8 *local_90;
  undefined8 *puStack_88;
  ulong local_80;
  undefined8 *puStack_78;
  undefined *local_70;
  long lStack_68;
  undefined8 **local_60;
  undefined8 ***pppuStack_58;
  
  plVar3 = (long *)*param_2;
  puVar4 = (undefined8 *)*plVar3;
  lVar5 = plVar3[1];
  lVar7 = plVar3[3];
  uVar11 = *puVar4;
  uVar8 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00bf8;
  if (uVar8 == 0) {
    uVar8 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00bf8);
    plVar3 = (long *)pthread_getspecific((pthread_key_t)uVar8);
  }
  else {
    plVar3 = (long *)pthread_getspecific((pthread_key_t)uVar8);
  }
  local_a0 = (undefined8 *)PTR_DAT_00ad5fa8;
  uStack_98 = _UNK_00ad5fb0;
  local_90 = (undefined8 *)_DAT_00ad5fb8;
  puStack_88 = (undefined8 *)_UNK_00ad5fc0;
  if (plVar3 < (long *)0x2) {
    plVar3 = (long *)FUN_0072c9d4(uVar8 & 0xffffffff,plVar3,0);
    local_a0 = (undefined8 *)PTR_DAT_00ad5fa8;
    uStack_98 = _UNK_00ad5fb0;
    local_90 = (undefined8 *)_DAT_00ad5fb8;
    puStack_88 = (undefined8 *)_UNK_00ad5fc0;
  }
  PTR_DAT_00ad5fa8 = (undefined *)local_a0;
  _UNK_00ad5fb0 = uStack_98;
  _DAT_00ad5fb8 = (ulong)local_90;
  _UNK_00ad5fc0 = (long)puStack_88;
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::thread::local::panic_access_error(&PTR_s__nix_store_8006w282fgsx3273c878b_00ad6130);
  }
  puStack_78 = (undefined8 *)plVar3[1];
  local_80 = *plVar3;
  *plVar3 = *plVar3 + 1;
  if (lVar7 != 0) {
                    /* try { // try from 0071083c to 0071084f has its CatchHandler @ 00710854 */
    <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(libdiscore_common[1cb84820f9455fa0]::core::
    snowflake::GuildId,())>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::
    make_hasher<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId_();
  }
  uStack_c8 = NEON_cmge(uVar11,0,1);
  pppuStack_58 = &local_60;
  uStack_c8 = uStack_c8 & 0x8080808080808080;
  lStack_b8 = (long)puVar4 + lVar5 + 1;
                    /* try { // try from 0071066c to 0071067b has its CatchHandler @ 00710854 */
  local_d0 = puVar4;
  local_c0 = puVar4 + 1;
  local_60 = &local_a0;
  FUN_00700f90(&local_d0,lVar7,&pppuStack_58);
  lStack_b8 = (long)puStack_88;
  local_c0 = local_90;
  lStack_a8 = (long)puStack_78;
  lStack_b0 = local_80;
  lVar7 = *(long *)(param_2[2] + 0x20);
  uStack_c8 = uStack_98;
  local_d0 = local_a0;
  puVar4 = extraout_x10;
  lVar5 = extraout_x12;
  if (lVar7 != 0) {
    puVar4 = (undefined8 *)&DAT_00000058;
    lVar9 = *(long *)(param_2[2] + 0x18);
    lVar7 = lVar7 * 0x58;
    puVar10 = (undefined8 *)(lVar9 + 0x40);
    do {
      uVar8 = uStack_c8;
      uVar1 = puVar10[-8];
      lVar2 = uVar1 - (uVar1 != 0);
      if (lVar2 < 2) {
        puVar6 = puVar10;
        if (uVar1 == (uVar1 != 0)) {
LAB_007106bc:
                    /* try { // try from 007106c0 to 0071071f has its CatchHandler @ 00710868 */
          FUN_0075f57c(&local_d0,*puVar6);
          puVar4 = extraout_x10_00;
          lVar5 = extraout_x12_00;
        }
      }
      else {
        if (lVar2 == 2) {
          puVar6 = (undefined8 *)(lVar9 + 0x20);
          if (puVar10[-5] != 0) goto LAB_007106bc;
        }
        else {
          if (lVar2 != 3) {
            if (lStack_b8 != 0) {
              if (uStack_c8 == 0) {
                local_c0 = (undefined8 *)0;
              }
              else {
                memset(local_d0,0xff,uStack_c8 + 9);
                local_c0 = (undefined8 *)uVar8;
                puVar4 = extraout_x10_02;
                lVar5 = extraout_x12_02;
                if (7 < uVar8) {
                  local_c0 = (undefined8 *)((uVar8 + 1 >> 3) * 7);
                }
              }
              lStack_b8 = 0;
            }
            goto LAB_007106c8;
          }
          puVar6 = puVar10 + -7;
        }
        uVar11 = FUN_0076b084(&lStack_b0,puVar6);
        FUN_006feac0(&local_d0,uVar11,puVar6);
        puVar4 = extraout_x10_01;
        lVar5 = extraout_x12_01;
      }
LAB_007106c8:
      lVar7 = lVar7 + -0x58;
      lVar9 = lVar9 + 0x58;
      puVar10 = puVar10 + 0xb;
    } while (lVar7 != 0);
  }
  if (uStack_c8 == 0) {
    local_a0 = (undefined8 *)0x0;
  }
  else {
    local_a0 = (undefined8 *)0x8;
    lVar5 = uStack_c8 * 9 + 0x11;
    puVar4 = local_d0 + (-1 - uStack_c8);
  }
  local_80 = NEON_cmge(*local_d0,0,1);
  local_70 = (undefined *)((long)local_d0 + uStack_c8 + 1);
  puStack_88 = local_d0;
  lStack_68 = lStack_b8;
  puStack_78 = local_d0 + 1;
  local_80 = local_80 & 0x8080808080808080;
  uStack_98 = lVar5;
  local_90 = puVar4;
  FUN_007646c4(param_1,&local_a0);
  return;
}


// ===== 0071087c  FUN_0071087c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0071087c(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  ulong uVar1;
  char cVar2;
  ulong uVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  code *pcVar7;
  bool bVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined **ppuVar14;
  long lVar15;
  char cVar16;
  long *plVar17;
  long *extraout_x12;
  long *extraout_x12_00;
  long *extraout_x12_01;
  long *extraout_x12_02;
  long *extraout_x12_03;
  long *in_x13;
  long *extraout_x13;
  long *extraout_x13_00;
  long *extraout_x13_01;
  long *extraout_x13_02;
  long *extraout_x13_03;
  long *extraout_x13_04;
  long *extraout_x13_05;
  long *extraout_x13_06;
  long *extraout_x13_07;
  long *extraout_x13_08;
  long *extraout_x13_09;
  long *extraout_x13_10;
  long *extraout_x13_11;
  long *extraout_x13_12;
  long *in_x14;
  ulong uVar18;
  long *extraout_x14;
  long *extraout_x14_00;
  long *extraout_x14_01;
  long *plVar19;
  long *extraout_x14_02;
  long *extraout_x14_03;
  long *extraout_x14_04;
  long *extraout_x14_05;
  long *extraout_x14_06;
  long *extraout_x14_07;
  long *extraout_x14_08;
  long *extraout_x14_09;
  long *extraout_x14_10;
  long *extraout_x14_11;
  long *extraout_x14_12;
  long *extraout_x15;
  long *plVar20;
  long *extraout_x15_00;
  long *extraout_x15_01;
  long *extraout_x15_02;
  long *extraout_x15_03;
  long *in_x16;
  long *extraout_x16;
  long *extraout_x16_00;
  long *extraout_x16_01;
  long *extraout_x16_02;
  long *extraout_x16_03;
  long *extraout_x16_04;
  long *extraout_x16_05;
  long *extraout_x16_06;
  long *extraout_x16_07;
  long *extraout_x16_08;
  long *extraout_x16_09;
  long *extraout_x16_10;
  long *extraout_x16_11;
  long *extraout_x16_12;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 uVar25;
  byte bVar26;
  undefined8 uVar27;
  long **local_1a0;
  long *plStack_198;
  long *plStack_190;
  long *plStack_188;
  long *local_180;
  long *plStack_178;
  long *local_170;
  long *local_168;
  undefined8 local_160;
  long *plStack_158;
  long *local_150;
  long lStack_148;
  undefined8 local_140;
  long *plStack_138;
  long *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined3 uStack_10c;
  undefined4 uStack_108;
  undefined3 uStack_104;
  long *local_100;
  long *plStack_f8;
  undefined8 uStack_f0;
  long *local_e8;
  long *plStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  long *plStack_d0;
  long *plStack_c8;
  long local_c0;
  undefined8 uStack_b8;
  long *local_b0;
  long *local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined2 uStack_94;
  undefined2 uStack_92;
  undefined8 uStack_90;
  undefined8 *puVar24;
  
  plVar13 = (long *)*param_2;
  if (plVar13[3] == 0) {
    lVar9 = param_2[2];
    lVar10 = *(long *)(lVar9 + 0x20);
    plStack_198 = _UNK_00ad5fb0;
    local_1a0 = (long **)PTR_DAT_00ad5fa8;
    plStack_188 = _UNK_00ad5fc0;
    plStack_190 = _DAT_00ad5fb8;
  }
  else {
    lVar9 = 0;
    in_x13 = (long *)&DAT_00000028;
    uVar18 = *param_3 * 0x517cc1b727220a95;
    bVar26 = (byte)(uVar18 >> 0x39);
    uVar25 = CONCAT17(bVar26,CONCAT16(bVar26,CONCAT15(bVar26,CONCAT14(bVar26,CONCAT13(bVar26,
                                                  CONCAT12(bVar26,CONCAT11(bVar26,bVar26)))))));
    lVar10 = *plVar13;
    uVar1 = plVar13[1];
    ppuVar14 = &PTR_DAT_00ad5fa8;
    in_x14 = (long *)(uVar18 & uVar1);
    uVar27 = *(undefined8 *)(lVar10 + (long)in_x14);
    uVar18 = NEON_cmeq(uVar27,uVar25,1);
    uVar18 = uVar18 & 0x8080808080808080;
    while( true ) {
      for (; uVar18 == 0; uVar18 = uVar18 & 0x8080808080808080) {
        uVar27 = NEON_cmeq(uVar27,0xffffffffffffffff,1);
        bVar26 = NEON_umaxv(uVar27,1);
        if ((bVar26 & 1) != 0) goto LAB_007109cc;
        lVar9 = lVar9 + 8;
        in_x14 = (long *)((ulong)((long)in_x14 + lVar9) & uVar1);
        uVar27 = *(undefined8 *)(lVar10 + (long)in_x14);
        uVar18 = NEON_cmeq(uVar27,uVar25,1);
      }
      uVar3 = (uVar18 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar18 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      lVar11 = lVar10 + ((ulong)((long)in_x14 + ((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 3)
                                ) & uVar1) * -0x28;
      if (*param_3 == *(long *)(lVar11 + -0x28)) break;
      in_x16 = (long *)(uVar18 - 1);
      uVar18 = (ulong)in_x16 & uVar18;
    }
    plVar13 = *(long **)(lVar11 + -0x20);
    lVar9 = *(long *)(lVar11 + -0x18);
    lVar10 = *(long *)(lVar11 + -8);
    lVar11 = *plVar13;
    plStack_178 = _UNK_00ad7f90;
    local_180 = (long *)PTR_DAT_00ad7f88;
    local_168 = _UNK_00ad7fa0;
    local_170 = _DAT_00ad7f98;
    if (lVar10 != 0) {
                    /* try { // try from 00710f78 to 00710f8f has its CatchHandler @ 00710f98 */
      <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(libdiscore_common[1cb84820f9455fa0]::core::snowflake::StickerId,libdiscore_common[1cb84820f9455fa0]::stores::guild_sticker::GuildSticker)>>
      ::reserve_rehash::
      <hashbrown[32fc5d502e7f9af5]::map::make_hasher<libdiscore_common[1cb84820f9455fa0]::core::snowflake::StickerId,libdiscore_common[1cb84820f9455fa0]::stores::guild_sticker::GuildSticker,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::_closure_0_>
                (&local_180,lVar10,&local_160,1);
    }
    uVar18 = NEON_cmge(lVar11,0,1);
    local_1a0 = &local_180;
    plStack_f8 = (long *)(uVar18 & 0x8080808080808080);
    local_e8 = (long *)((long)plVar13 + lVar9 + 1);
                    /* try { // try from 007109b4 to 007109bf has its CatchHandler @ 00710f98 */
    local_100 = plVar13;
    uStack_f0 = plVar13 + 1;
    FUN_00701b8c(&local_100,lVar10,&local_1a0);
    ppuVar14 = (undefined **)&local_100;
    plStack_f8 = plStack_178;
    local_100 = local_180;
    local_e8 = local_168;
    uStack_f0 = local_170;
    in_x13 = extraout_x13;
    in_x14 = extraout_x14;
    in_x16 = extraout_x16;
LAB_007109cc:
    lVar9 = param_2[2];
    plStack_198 = ((long **)ppuVar14)[1];
    local_1a0 = (long **)*ppuVar14;
    plStack_188 = ((long **)ppuVar14)[3];
    plStack_190 = ((long **)ppuVar14)[2];
    lVar10 = *(long *)(lVar9 + 0x20);
  }
  if (lVar10 != 0) {
    puVar21 = *(undefined8 **)(lVar9 + 0x18);
    lVar9 = *param_3;
    puVar23 = puVar21;
    do {
      puVar24 = puVar23 + 0xe;
      plVar13 = (long *)*puVar23;
      lVar11 = (long)plVar13 - (long)(ulong)(plVar13 != (long *)0x0);
      if (1 < lVar11) {
        if (lVar11 == 2) {
          if (puVar23[4] == lVar9) {
            FUN_00703568(&local_1a0);
            in_x13 = extraout_x13_01;
            in_x14 = extraout_x14_01;
            in_x16 = extraout_x16_01;
            if (puVar23[3] != 0) {
              puVar22 = (undefined8 *)puVar23[2];
              puVar23 = puVar22 + puVar23[3] * 0xe;
              plVar13 = extraout_x12;
              plVar20 = extraout_x15;
              do {
                cVar2 = *(char *)(puVar22 + 2);
                uVar27 = puVar22[9];
                uVar25 = puVar22[9];
                lVar11 = puVar22[8];
                uVar6 = uStack_108;
                if (cVar2 == '\x19') {
                  plVar12 = (long *)puVar22[3];
                  do {
                    lVar15 = *plVar12;
                    bVar26 = 1;
                    bVar8 = (bool)ExclusiveMonitorPass(plVar12,0x10);
                    if (bVar8) {
                      *plVar12 = lVar15 + 1;
                      bVar26 = ExclusiveMonitorsStatus();
                    }
                    plVar13 = (long *)(ulong)bVar26;
                  } while (bVar26 != 0);
                  if (lVar15 < 0) goto LAB_00710f94;
                  cVar16 = *(char *)(puVar22 + 5);
                  plVar17 = (long *)puVar22[4];
                  if (cVar16 == -1) goto LAB_00710b38;
LAB_00710b64:
                  uVar5 = local_110;
                  if (cVar16 == '\x19') {
                    plVar13 = (long *)puVar22[6];
                    do {
                      lVar15 = *plVar13;
                      bVar26 = 1;
                      bVar8 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                      if (bVar8) {
                        *plVar13 = lVar15 + 1;
                        bVar26 = ExclusiveMonitorsStatus();
                      }
                      plVar20 = (long *)(ulong)bVar26;
                    } while (bVar26 != 0);
                    if (lVar15 < 0) goto LAB_00710f94;
                    in_x13 = (long *)puVar22[7];
                    plVar19 = (long *)puVar22[10];
                  }
                  else {
                    uStack_108._0_3_ = (undefined3)*(undefined4 *)((long)puVar22 + 0x29);
                    uStack_108._3_1_ = (undefined1)*(undefined4 *)((long)puVar22 + 0x2c);
                    uStack_104 = (undefined3)((uint)*(undefined4 *)((long)puVar22 + 0x2c) >> 8);
                    plVar13 = (long *)puVar22[6];
                    in_x13 = (long *)puVar22[7];
                    plVar19 = (long *)puVar22[10];
                    uVar6 = uStack_108;
                  }
                }
                else {
                  local_110._0_3_ = (undefined3)*(undefined4 *)((long)puVar22 + 0x11);
                  local_110._3_1_ = (undefined1)*(undefined4 *)((long)puVar22 + 0x14);
                  uStack_10c = (undefined3)((uint)*(undefined4 *)((long)puVar22 + 0x14) >> 8);
                  cVar16 = *(char *)(puVar22 + 5);
                  plVar12 = (long *)puVar22[3];
                  plVar17 = (long *)puVar22[4];
                  if (cVar16 != -1) goto LAB_00710b64;
LAB_00710b38:
                  plVar19 = (long *)puVar22[10];
                  uVar5 = local_110;
                }
                local_110 = uVar5;
                uStack_108 = uVar6;
                if (plVar19 != (long *)0x0) {
                  do {
                    lVar15 = *plVar19;
                    cVar4 = '\x01';
                    bVar8 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                    if (bVar8) {
                      *plVar19 = lVar15 + 1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (lVar15 < 0) goto LAB_00710f94;
                  plVar20 = (long *)puVar22[0xb];
                }
                local_110._3_1_ = (undefined1)((uint)uVar5 >> 0x18);
                uStack_108._3_1_ = (undefined1)((uint)uVar6 >> 0x18);
                uStack_d4 = CONCAT31(uStack_104,uStack_108._3_1_);
                uStack_f0._0_5_ = CONCAT41(uVar5,cVar2);
                uStack_f0 = (long *)CONCAT44(CONCAT31(uStack_10c,local_110._3_1_),
                                             (undefined4)uStack_f0);
                local_d8 = CONCAT31((int3)uVar6,cVar16);
                uStack_94 = *(undefined2 *)((long)puVar22 + 0x6c);
                local_100 = (long *)*puVar22;
                plStack_f8 = (long *)puVar22[1];
                local_98 = *(undefined4 *)(puVar22 + 0xd);
                uStack_a0 = puVar22[0xc];
                    /* try { // try from 00710c20 to 00710c2f has its CatchHandler @ 00710fb4 */
                local_e8 = plVar12;
                plStack_e0 = plVar17;
                plStack_d0 = plVar13;
                plStack_c8 = in_x13;
                local_c0 = lVar11;
                uStack_b8 = uVar25;
                local_b0 = plVar19;
                local_a8 = plVar20;
                FUN_0075f710(&local_180,&local_1a0,uVar27,&local_100);
                plVar13 = extraout_x12_00;
                in_x13 = extraout_x13_02;
                in_x14 = extraout_x14_02;
                plVar20 = extraout_x15_00;
                in_x16 = extraout_x16_02;
                if (local_180 != (long *)0x2) {
                  if (0x18 < (byte)local_170) {
                    do {
                      lVar11 = *local_168;
                      cVar2 = '\x01';
                      bVar8 = (bool)ExclusiveMonitorPass(local_168,0x10);
                      if (bVar8) {
                        *local_168 = lVar11 + -1;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
                    if (lVar11 + -1 == 0) {
                      DataMemoryBarrier(2,1);
                      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(&local_168);
                      plVar13 = extraout_x12_01;
                      in_x13 = extraout_x13_03;
                      in_x14 = extraout_x14_03;
                      plVar20 = extraout_x15_01;
                      in_x16 = extraout_x16_03;
                    }
                  }
                  if (((byte)plStack_158 != 0xff) && (0x18 < (byte)plStack_158)) {
                    do {
                      lVar11 = *local_150;
                      cVar2 = '\x01';
                      bVar8 = (bool)ExclusiveMonitorPass(local_150,0x10);
                      if (bVar8) {
                        *local_150 = lVar11 + -1;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
                    if (lVar11 + -1 == 0) {
                      DataMemoryBarrier(2,1);
                      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(&local_150);
                      plVar13 = extraout_x12_02;
                      in_x13 = extraout_x13_04;
                      in_x14 = extraout_x14_04;
                      plVar20 = extraout_x15_02;
                      in_x16 = extraout_x16_04;
                    }
                  }
                  if (local_130 != (long *)0x0) {
                    do {
                      lVar11 = *local_130;
                      cVar2 = '\x01';
                      bVar8 = (bool)ExclusiveMonitorPass(local_130,0x10);
                      if (bVar8) {
                        *local_130 = lVar11 + -1;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
                    if (lVar11 + -1 == 0) {
                      DataMemoryBarrier(2,1);
                      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(&local_130);
                      plVar13 = extraout_x12_03;
                      in_x13 = extraout_x13_05;
                      in_x14 = extraout_x14_05;
                      plVar20 = extraout_x15_03;
                      in_x16 = extraout_x16_05;
                    }
                  }
                }
                puVar22 = puVar22 + 0xe;
              } while (puVar22 != puVar23);
            }
          }
        }
        else if ((lVar11 != 3) || (puVar23[1] == lVar9)) {
                    /* try { // try from 00710a24 to 00710ad7 has its CatchHandler @ 00710fb0 */
          FUN_00703568(&local_1a0);
          in_x13 = extraout_x13_00;
          in_x14 = extraout_x14_00;
          in_x16 = extraout_x16_00;
        }
        goto LAB_00710a2c;
      }
      if (plVar13 == (long *)(ulong)(plVar13 != (long *)0x0)) {
        if (puVar23[8] != lVar9) goto LAB_00710a2c;
        cVar2 = *(char *)(puVar23 + 2);
        uVar27 = puVar23[9];
        uVar6 = uStack_108;
        if (cVar2 == '\x19') {
          plVar20 = (long *)puVar23[3];
          do {
            lVar11 = *plVar20;
            bVar26 = 1;
            bVar8 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar8) {
              *plVar20 = lVar11 + 1;
              bVar26 = ExclusiveMonitorsStatus();
            }
            in_x13 = (long *)(ulong)bVar26;
          } while (bVar26 != 0);
          if (lVar11 < 0) goto LAB_00710f94;
          cVar16 = *(char *)(puVar23 + 5);
          plVar12 = (long *)puVar23[4];
          if (cVar16 != -1) goto LAB_00710ddc;
LAB_00710ab8:
          plVar17 = (long *)puVar23[10];
          uVar5 = local_110;
        }
        else {
          local_110._0_3_ = (undefined3)*(undefined4 *)((long)puVar23 + 0x11);
          local_110._3_1_ = (undefined1)*(undefined4 *)((long)puVar23 + 0x14);
          uStack_10c = (undefined3)((uint)*(undefined4 *)((long)puVar23 + 0x14) >> 8);
          cVar16 = *(char *)(puVar23 + 5);
          plVar20 = (long *)puVar23[3];
          plVar12 = (long *)puVar23[4];
          if (cVar16 == -1) goto LAB_00710ab8;
LAB_00710ddc:
          uVar5 = local_110;
          if (cVar16 == '\x19') {
            in_x13 = (long *)puVar23[6];
            do {
              lVar11 = *in_x13;
              bVar26 = 1;
              bVar8 = (bool)ExclusiveMonitorPass(in_x13,0x10);
              if (bVar8) {
                *in_x13 = lVar11 + 1;
                bVar26 = ExclusiveMonitorsStatus();
              }
              in_x16 = (long *)(ulong)bVar26;
            } while (bVar26 != 0);
            if (lVar11 < 0) goto LAB_00710f94;
            in_x14 = (long *)puVar23[7];
            plVar17 = (long *)puVar23[10];
          }
          else {
            uStack_108._0_3_ = (undefined3)*(undefined4 *)((long)puVar23 + 0x29);
            uStack_108._3_1_ = (undefined1)*(undefined4 *)((long)puVar23 + 0x2c);
            uStack_104 = (undefined3)((uint)*(undefined4 *)((long)puVar23 + 0x2c) >> 8);
            in_x13 = (long *)puVar23[6];
            in_x14 = (long *)puVar23[7];
            plVar17 = (long *)puVar23[10];
            uVar6 = uStack_108;
          }
        }
        local_110 = uVar5;
        uStack_108 = uVar6;
        if (plVar17 != (long *)0x0) {
          do {
            lVar11 = *plVar17;
            cVar4 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar8) {
              *plVar17 = lVar11 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar11 < 0) {
LAB_00710f94:
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x710f98);
            (*pcVar7)();
          }
          in_x16 = (long *)puVar23[0xb];
        }
        local_110._3_1_ = (undefined1)((uint)uVar5 >> 0x18);
        uStack_108._3_1_ = (undefined1)((uint)uVar6 >> 0x18);
        uStack_d4 = CONCAT31(uStack_104,uStack_108._3_1_);
        uStack_f0._0_5_ = CONCAT41(uVar5,cVar2);
        uStack_f0 = (long *)CONCAT44(CONCAT31(uStack_10c,local_110._3_1_),(undefined4)uStack_f0);
        uStack_94 = *(undefined2 *)((long)puVar23 + 0x6c);
        plStack_f8 = (long *)puVar23[1];
        local_98 = *(undefined4 *)(puVar23 + 0xd);
        uStack_a0 = puVar23[0xc];
        local_d8 = CONCAT31((int3)uVar6,cVar16);
                    /* try { // try from 00710e98 to 00710ea7 has its CatchHandler @ 00710fac */
        local_100 = plVar13;
        local_e8 = plVar20;
        plStack_e0 = plVar12;
        plStack_d0 = in_x13;
        plStack_c8 = in_x14;
        local_c0 = lVar9;
        uStack_b8 = uVar27;
        local_b0 = plVar17;
        local_a8 = in_x16;
        FUN_0075f710(&local_180,&local_1a0,uVar27,&local_100);
        in_x13 = extraout_x13_09;
        in_x14 = extraout_x14_09;
        in_x16 = extraout_x16_09;
        if (local_180 != (long *)0x2) {
          if (0x18 < (byte)local_170) {
            do {
              lVar11 = *local_168;
              cVar2 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(local_168,0x10);
              if (bVar8) {
                *local_168 = lVar11 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar11 + -1 == 0) {
              DataMemoryBarrier(2,1);
              <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(&local_168);
              in_x13 = extraout_x13_10;
              in_x14 = extraout_x14_10;
              in_x16 = extraout_x16_10;
            }
          }
          if (((byte)plStack_158 != 0xff) && (0x18 < (byte)plStack_158)) {
            do {
              lVar11 = *local_150;
              cVar2 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(local_150,0x10);
              if (bVar8) {
                *local_150 = lVar11 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar11 + -1 == 0) {
              DataMemoryBarrier(2,1);
              <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(&local_150);
              in_x13 = extraout_x13_11;
              in_x14 = extraout_x14_11;
              in_x16 = extraout_x16_11;
            }
          }
          if (local_130 != (long *)0x0) {
            do {
              lVar11 = *local_130 + -1;
              cVar2 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(local_130,0x10);
              if (bVar8) {
                *local_130 = lVar11;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
LAB_00710f34:
            if (lVar11 == 0) {
              DataMemoryBarrier(2,1);
              <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(&local_130);
              in_x13 = extraout_x13_12;
              in_x14 = extraout_x14_12;
              in_x16 = extraout_x16_12;
            }
          }
        }
      }
      else {
                    /* try { // try from 00710ce4 to 00710cf3 has its CatchHandler @ 00710fb0 */
        if ((puVar23[1] == lVar9) &&
           (FUN_006fefcc(&local_100,&local_1a0,puVar23[2] * 0x517cc1b727220a95,puVar23 + 2),
           in_x13 = extraout_x13_06, in_x14 = extraout_x14_06, in_x16 = extraout_x16_06,
           plStack_f8 != (long *)0x2)) {
          plStack_178 = uStack_f0;
          local_180 = plStack_f8;
          local_168 = plStack_e0;
          local_170 = local_e8;
          plStack_138 = local_b0;
          local_140 = uStack_b8;
          uStack_128 = uStack_a0;
          local_130 = local_a8;
          plVar13 = local_170;
          uStack_118 = uStack_90;
          local_120 = CONCAT26(uStack_92,CONCAT24(uStack_94,local_98));
          plStack_158 = plStack_d0;
          local_160 = CONCAT44(uStack_d4,local_d8);
          lStack_148 = local_c0;
          local_150 = plStack_c8;
          if (plStack_f8 != (long *)0x2) {
            local_170._0_1_ = (byte)local_e8;
            bVar8 = 0x18 < (byte)local_170;
            local_170 = plVar13;
            if (bVar8) {
              do {
                lVar11 = *plStack_e0;
                cVar2 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(plStack_e0,0x10);
                if (bVar8) {
                  *plStack_e0 = lVar11 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar11 + -1 == 0) {
                DataMemoryBarrier(2,1);
                <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(&local_168);
                in_x13 = extraout_x13_07;
                in_x14 = extraout_x14_07;
                in_x16 = extraout_x16_07;
              }
            }
            if (((byte)plStack_158 != 0xff) && (0x18 < (byte)plStack_158)) {
              do {
                lVar11 = *local_150;
                cVar2 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(local_150,0x10);
                if (bVar8) {
                  *local_150 = lVar11 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar11 + -1 == 0) {
                DataMemoryBarrier(2,1);
                <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(&local_150);
                in_x13 = extraout_x13_08;
                in_x14 = extraout_x14_08;
                in_x16 = extraout_x16_08;
              }
            }
            if (local_130 != (long *)0x0) {
              do {
                lVar11 = *local_130 + -1;
                cVar2 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(local_130,0x10);
                if (bVar8) {
                  *local_130 = lVar11;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              goto LAB_00710f34;
            }
          }
        }
      }
LAB_00710a2c:
      puVar23 = puVar24;
    } while (puVar24 != puVar21 + lVar10 * 0xe);
  }
  param_1[1] = plStack_198;
  *param_1 = local_1a0;
  param_1[3] = plStack_188;
  param_1[2] = plStack_190;
  return;
}


// ===== 00710fcc  FUN_00710fcc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00710fcc(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined8 *extraout_x10;
  undefined8 *puVar4;
  undefined8 *extraout_x10_00;
  undefined8 *extraout_x10_01;
  undefined8 *extraout_x10_02;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 *local_d0;
  ulong uStack_c8;
  undefined8 *local_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 *local_a0;
  ulong uStack_98;
  undefined8 *local_90;
  undefined8 *puStack_88;
  ulong local_80;
  undefined8 *puStack_78;
  undefined *local_70;
  long lStack_68;
  undefined8 **local_60;
  undefined8 ***pppuStack_58;
  
  plVar3 = (long *)*param_2;
  puVar4 = (undefined8 *)*plVar3;
  lVar5 = plVar3[1];
  lVar7 = plVar3[3];
  uVar11 = *puVar4;
  uVar9 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00bf8;
  if (uVar9 == 0) {
    uVar9 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00bf8);
    plVar3 = (long *)pthread_getspecific((pthread_key_t)uVar9);
  }
  else {
    plVar3 = (long *)pthread_getspecific((pthread_key_t)uVar9);
  }
  local_a0 = (undefined8 *)PTR_DAT_00ad5fa8;
  uStack_98 = _UNK_00ad5fb0;
  local_90 = (undefined8 *)_DAT_00ad5fb8;
  puStack_88 = (undefined8 *)_UNK_00ad5fc0;
  if (plVar3 < (long *)0x2) {
    plVar3 = (long *)FUN_0072c9d4(uVar9 & 0xffffffff,plVar3,0);
    local_a0 = (undefined8 *)PTR_DAT_00ad5fa8;
    uStack_98 = _UNK_00ad5fb0;
    local_90 = (undefined8 *)_DAT_00ad5fb8;
    puStack_88 = (undefined8 *)_UNK_00ad5fc0;
  }
  PTR_DAT_00ad5fa8 = (undefined *)local_a0;
  _UNK_00ad5fb0 = uStack_98;
  _DAT_00ad5fb8 = (ulong)local_90;
  _UNK_00ad5fc0 = (long)puStack_88;
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::thread::local::panic_access_error(&PTR_s__nix_store_8006w282fgsx3273c878b_00ad6130);
  }
  puStack_78 = (undefined8 *)plVar3[1];
  local_80 = *plVar3;
  *plVar3 = *plVar3 + 1;
  if (lVar7 != 0) {
                    /* try { // try from 00711250 to 00711263 has its CatchHandler @ 00711268 */
    <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(libdiscore_common[1cb84820f9455fa0]::core::
    snowflake::GuildId,())>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::
    make_hasher<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId_();
  }
  uStack_c8 = NEON_cmge(uVar11,0,1);
  pppuStack_58 = &local_60;
  uStack_c8 = uStack_c8 & 0x8080808080808080;
  lStack_b8 = (long)puVar4 + lVar5 + 1;
                    /* try { // try from 00711080 to 0071108f has its CatchHandler @ 00711268 */
  local_d0 = puVar4;
  local_c0 = puVar4 + 1;
  local_60 = &local_a0;
  FUN_00700f90(&local_d0,lVar7,&pppuStack_58);
  lStack_b8 = (long)puStack_88;
  local_c0 = local_90;
  lStack_a8 = (long)puStack_78;
  lStack_b0 = local_80;
  lVar7 = *(long *)(param_2[2] + 0x20);
  uStack_c8 = uStack_98;
  local_d0 = local_a0;
  puVar4 = extraout_x10;
  lVar5 = extraout_x12;
  if (lVar7 != 0) {
    puVar4 = (undefined8 *)(lVar7 * 0x80);
    lVar8 = *(long *)(param_2[2] + 0x18);
    lVar7 = lVar7 * 0x70;
    puVar10 = (undefined8 *)(lVar8 + 0x40);
    do {
      uVar9 = uStack_c8;
      uVar1 = puVar10[-8];
      lVar2 = uVar1 - (uVar1 != 0);
      if (lVar2 < 2) {
        puVar6 = puVar10;
        if (uVar1 == (uVar1 != 0)) {
LAB_007110d0:
                    /* try { // try from 007110d4 to 00711133 has its CatchHandler @ 0071127c */
          FUN_0075f57c(&local_d0,*puVar6);
          puVar4 = extraout_x10_00;
          lVar5 = extraout_x12_00;
        }
      }
      else {
        if (lVar2 == 2) {
          puVar6 = (undefined8 *)(lVar8 + 0x20);
          if (puVar10[-5] != 0) goto LAB_007110d0;
        }
        else {
          if (lVar2 != 3) {
            if (lStack_b8 != 0) {
              if (uStack_c8 == 0) {
                local_c0 = (undefined8 *)0;
              }
              else {
                memset(local_d0,0xff,uStack_c8 + 9);
                local_c0 = (undefined8 *)uVar9;
                puVar4 = extraout_x10_02;
                lVar5 = extraout_x12_02;
                if (7 < uVar9) {
                  local_c0 = (undefined8 *)((uVar9 + 1 >> 3) * 7);
                }
              }
              lStack_b8 = 0;
            }
            goto LAB_007110dc;
          }
          puVar6 = puVar10 + -7;
        }
        uVar11 = FUN_0076b084(&lStack_b0,puVar6);
        FUN_006feac0(&local_d0,uVar11,puVar6);
        puVar4 = extraout_x10_01;
        lVar5 = extraout_x12_01;
      }
LAB_007110dc:
      lVar7 = lVar7 + -0x70;
      lVar8 = lVar8 + 0x70;
      puVar10 = puVar10 + 0xe;
    } while (lVar7 != 0);
  }
  if (uStack_c8 == 0) {
    local_a0 = (undefined8 *)0x0;
  }
  else {
    local_a0 = (undefined8 *)0x8;
    lVar5 = uStack_c8 * 9 + 0x11;
    puVar4 = local_d0 + (-1 - uStack_c8);
  }
  local_80 = NEON_cmge(*local_d0,0,1);
  local_70 = (undefined *)((long)local_d0 + uStack_c8 + 1);
  puStack_88 = local_d0;
  lStack_68 = lStack_b8;
  puStack_78 = local_d0 + 1;
  local_80 = local_80 & 0x8080808080808080;
  uStack_98 = lVar5;
  local_90 = puVar4;
  FUN_007646c4(param_1,&local_a0);
  return;
}


// ===== 00711290  FUN_00711290 =====

void FUN_00711290(undefined8 *param_1,undefined8 *param_2,ulong *param_3,ulong *param_4)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  
  lVar4 = *(long *)(param_2[2] + 0x20);
  if (lVar4 != 0) {
    lVar7 = *(long *)(param_2[2] + 0x18);
    uVar3 = *param_4;
    uVar1 = *param_3;
    if (uVar1 == 0) {
      lVar5 = lVar4 * -0x218;
      puVar6 = (ulong *)(lVar4 * 0x218 + lVar7);
      do {
        puVar2 = puVar6 + -0x43;
        uVar1 = *puVar2;
        lVar4 = uVar1 - (uVar1 != 0);
        if (lVar4 < 2) {
          if (uVar1 == (uVar1 != 0)) {
            if (puVar6[-0x22] == uVar3) {
              FUN_007151e0(param_1,puVar2);
              return;
            }
          }
          else if ((puVar6[-0x41] == 0) && (puVar6[-0x42] == uVar3)) goto LAB_00711438;
        }
        else if (lVar4 == 2) {
          if (puVar6[-0x3f] == 0) goto LAB_007113e0;
        }
        else if ((lVar4 != 3) || (puVar6[-0x42] == 0)) goto LAB_00711438;
        lVar5 = lVar5 + 0x218;
        puVar6 = puVar2;
      } while (lVar5 != 0);
    }
    else {
      lVar5 = lVar4 * -0x218;
      puVar6 = (ulong *)(lVar7 + lVar4 * 0x218);
      do {
        uVar8 = puVar6[-0x43];
        lVar4 = uVar8 - (uVar8 != 0);
        if (lVar4 < 2) {
          if (((uVar8 != (uVar8 != 0)) && (puVar6[-0x41] == uVar1)) && (puVar6[-0x42] == uVar3))
          goto LAB_00711438;
        }
        else if (lVar4 == 2) {
          if (puVar6[-0x3f] == uVar1) goto LAB_007113e0;
        }
        else if ((lVar4 != 3) || (puVar6[-0x42] == uVar1)) goto LAB_00711438;
        lVar5 = lVar5 + 0x218;
        puVar6 = puVar6 + -0x43;
      } while (lVar5 != 0);
    }
  }
  lVar4 = FUN_00749c2c(*param_2);
  if (lVar4 == 0) {
LAB_00711438:
    *param_1 = 2;
    return;
  }
LAB_00711428:
  FUN_007151e0(param_1,lVar4);
  return;
LAB_007113e0:
  lVar7 = puVar6[-0x40] * 0x218;
  lVar4 = puVar6[-0x41] - 0x218;
  do {
    if (lVar7 == 0) goto LAB_00711438;
    puVar6 = (ulong *)(lVar4 + 800);
    lVar4 = lVar4 + 0x218;
    lVar7 = lVar7 + -0x218;
  } while (*puVar6 != uVar3);
  goto LAB_00711428;
}


// ===== 00711460  FUN_00711460 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00711460(undefined8 *param_1,undefined8 *param_2,ulong *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 **__s;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined **ppuVar8;
  ulong uVar9;
  ulong *puVar10;
  undefined8 **ppuVar11;
  undefined8 *puVar12;
  ulong *puVar13;
  undefined8 **ppuVar14;
  undefined8 uVar15;
  byte bVar16;
  undefined8 uVar17;
  ulong uVar18;
  undefined8 **local_4e0;
  undefined8 *puStack_4d8;
  undefined8 *local_4d0;
  undefined8 *local_4c8;
  undefined8 *local_4c0;
  ulong uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined1 auStack_4a0 [512];
  undefined8 *local_2a0;
  ulong uStack_298;
  undefined8 *local_290;
  long local_288;
  
  local_4e0 = (undefined8 **)0x0;
  plVar7 = (long *)*param_2;
  if (plVar7[3] == 0) {
    lVar4 = param_2[2];
    lVar6 = *(long *)(lVar4 + 0x20);
    puStack_4d8 = _UNK_00ad5fb0;
    local_4e0 = (undefined8 **)PTR_DAT_00ad5fa8;
    local_4c8 = _UNK_00ad5fc0;
    local_4d0 = _DAT_00ad5fb8;
  }
  else {
    lVar4 = 0;
    uVar9 = *param_3 * 0x517cc1b727220a95;
    bVar16 = (byte)(uVar9 >> 0x39);
    uVar15 = CONCAT17(bVar16,CONCAT16(bVar16,CONCAT15(bVar16,CONCAT14(bVar16,CONCAT13(bVar16,
                                                  CONCAT12(bVar16,CONCAT11(bVar16,bVar16)))))));
    lVar6 = *plVar7;
    uVar5 = plVar7[1];
    ppuVar8 = &PTR_DAT_00ad5fa8;
    uVar9 = uVar9 & uVar5;
    uVar17 = *(undefined8 *)(lVar6 + uVar9);
    uVar18 = NEON_cmeq(uVar17,uVar15,1);
    uVar18 = uVar18 & 0x8080808080808080;
    while( true ) {
      for (; uVar18 == 0; uVar18 = uVar18 & 0x8080808080808080) {
        uVar17 = NEON_cmeq(uVar17,0xffffffffffffffff,1);
        bVar16 = NEON_umaxv(uVar17,1);
        if ((bVar16 & 1) != 0) goto LAB_007115bc;
        lVar4 = lVar4 + 8;
        uVar9 = uVar9 + lVar4 & uVar5;
        uVar17 = *(undefined8 *)(lVar6 + uVar9);
        uVar18 = NEON_cmeq(uVar17,uVar15,1);
      }
      uVar2 = (uVar18 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar18 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      lVar1 = lVar6 + (uVar9 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) & uVar5) * -0x28
      ;
      if (*param_3 == *(ulong *)(lVar1 + -0x28)) break;
      uVar18 = uVar18 - 1 & uVar18;
    }
    puVar12 = *(undefined8 **)(lVar1 + -0x20);
    lVar4 = *(long *)(lVar1 + -0x18);
    lVar6 = *(long *)(lVar1 + -8);
    uVar17 = *puVar12;
    uStack_4b8 = _UNK_00ad7f90;
    local_4c0 = (undefined8 *)PTR_DAT_00ad7f88;
    uStack_4a8 = _UNK_00ad7fa0;
    uStack_4b0 = _DAT_00ad7f98;
    if (lVar6 != 0) {
                    /* try { // try from 007118e4 to 007118fb has its CatchHandler @ 00711900 */
      <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::stores::guilds::Guild)>>
      ::reserve_rehash::
      <hashbrown[32fc5d502e7f9af5]::map::make_hasher<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::stores::guilds::Guild,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::_closure_0_>
                (&local_4c0,lVar6,auStack_4a0,1);
    }
    uStack_298 = NEON_cmge(uVar17,0,1);
    local_4e0 = &local_4c0;
    uStack_298 = uStack_298 & 0x8080808080808080;
    local_288 = (long)puVar12 + lVar4 + 1;
                    /* try { // try from 007115a4 to 007115af has its CatchHandler @ 00711900 */
    local_2a0 = puVar12;
    local_290 = puVar12 + 1;
    FUN_00701034(&local_2a0,lVar6,&local_4e0);
    ppuVar8 = (undefined **)&local_2a0;
    uStack_298 = uStack_4b8;
    local_2a0 = local_4c0;
    local_288 = uStack_4a8;
    local_290 = (undefined8 *)uStack_4b0;
LAB_007115bc:
    lVar4 = param_2[2];
    puStack_4d8 = ((undefined8 **)ppuVar8)[1];
    local_4e0 = (undefined8 **)*ppuVar8;
    local_4c8 = ((undefined8 **)ppuVar8)[3];
    local_4d0 = ((undefined8 **)ppuVar8)[2];
    lVar6 = *(long *)(lVar4 + 0x20);
  }
  if (lVar6 != 0) {
    puVar10 = *(ulong **)(lVar4 + 0x18);
    uVar18 = *param_3;
    puVar13 = puVar10 + lVar6 * 0x43;
    do {
      __s = local_4e0;
      uVar5 = *puVar10;
      lVar4 = uVar5 - (uVar5 != 0);
      if (lVar4 < 2) {
        if (uVar5 == (uVar5 != 0)) {
          if (uVar18 == 0) {
            uVar5 = puVar10[0x21];
                    /* try { // try from 007116fc to 0071171b has its CatchHandler @ 00711914 */
            FUN_007151e0(&local_2a0,puVar10);
            FUN_0075f384(&local_4c0,&local_4e0,uVar5,&local_2a0);
            if (local_4c0 != (undefined8 *)0x2) {
                    /* try { // try from 00711728 to 0071172f has its CatchHandler @ 0071191c */
              FUN_0070d030(&local_4c0);
            }
          }
        }
        else {
                    /* try { // try from 00711804 to 0071180f has its CatchHandler @ 0071191c */
          if (((puVar10[2] == uVar18) &&
              (FUN_006fe3ec(&local_2a0,&local_4e0,puVar10[1] * 0x517cc1b727220a95), uStack_298 != 2)
              ) && (memcpy(&local_4c0,&uStack_298,0x218), local_4c0 != (undefined8 *)0x2)) {
                    /* try { // try from 0071183c to 00711843 has its CatchHandler @ 0071191c */
            FUN_0070d030(&local_4c0);
          }
        }
      }
      else if (lVar4 == 2) {
        if (puVar10[4] == uVar18) {
          if (local_4c8 != (undefined8 *)0x0) {
            ppuVar14 = local_4e0 + 1;
            uVar5 = NEON_cmge(*local_4e0,0,1);
            uVar5 = uVar5 & 0x8080808080808080;
            ppuVar11 = local_4e0;
            puVar12 = local_4c8;
            do {
              for (; uVar5 == 0; uVar5 = uVar5 & 0x8080808080808080) {
                uVar5 = NEON_cmge(*ppuVar14,0,1);
                ppuVar11 = ppuVar11 + -0x220;
                ppuVar14 = ppuVar14 + 1;
              }
              uVar9 = (uVar5 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar5 >> 7 & 0xff00ff00ff00ff) << 8;
              uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
                    /* try { // try from 00711794 to 00711797 has its CatchHandler @ 0071192c */
              FUN_007024a8(ppuVar11 +
                           (long)-(int)((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3) * 0x44 +
                           -0x43);
              puVar3 = puStack_4d8;
              puVar12 = (undefined8 *)((long)puVar12 + -1);
              uVar5 = uVar5 - 1 & uVar5;
            } while (puVar12 != (undefined8 *)0x0);
            if (puStack_4d8 == (undefined8 *)0x0) {
              local_4d0 = (undefined8 *)0x0;
            }
            else {
              memset(__s,0xff,(size_t)((long)puStack_4d8 + 9));
              local_4d0 = puVar3;
              if ((undefined8 *)0x7 < puVar3) {
                local_4d0 = (undefined8 *)(((ulong)((long)puVar3 + 1) >> 3) * 7);
              }
            }
            local_4c8 = (undefined8 *)0x0;
          }
          if (puVar10[3] != 0) {
            uVar5 = puVar10[2];
            lVar4 = puVar10[3] * 0x218;
            do {
              uVar17 = *(undefined8 *)(uVar5 + 0x108);
                    /* try { // try from 00711878 to 00711897 has its CatchHandler @ 00711944 */
              FUN_007151e0(&local_2a0,uVar5);
              FUN_0075f384(&local_4c0,&local_4e0,uVar17,&local_2a0);
              if (local_4c0 != (undefined8 *)0x2) {
                    /* try { // try from 007118a4 to 007118ab has its CatchHandler @ 00711924 */
                FUN_0070d030(&local_4c0);
              }
              lVar4 = lVar4 + -0x218;
              uVar5 = uVar5 + 0x218;
            } while (lVar4 != 0);
          }
        }
      }
      else if (((lVar4 != 3) || (puVar10[1] == uVar18)) && (local_4c8 != (undefined8 *)0x0)) {
        ppuVar11 = local_4e0 + 1;
        uVar5 = NEON_cmge(*local_4e0,0,1);
        uVar5 = uVar5 & 0x8080808080808080;
        ppuVar14 = local_4e0;
        puVar12 = local_4c8;
        do {
          for (; uVar5 == 0; uVar5 = uVar5 & 0x8080808080808080) {
            uVar5 = NEON_cmge(*ppuVar11,0,1);
            ppuVar11 = ppuVar11 + 1;
            ppuVar14 = ppuVar14 + -0x220;
          }
          uVar9 = (uVar5 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar5 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
                    /* try { // try from 007116cc to 007116cf has its CatchHandler @ 0071194c */
          FUN_007024a8(ppuVar14 +
                       (long)-(int)((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3) * 0x44 +
                       -0x43);
          puVar3 = puStack_4d8;
          puVar12 = (undefined8 *)((long)puVar12 + -1);
          uVar5 = uVar5 - 1 & uVar5;
        } while (puVar12 != (undefined8 *)0x0);
        if (puStack_4d8 == (undefined8 *)0x0) {
          local_4d0 = (undefined8 *)0x0;
        }
        else {
          memset(__s,0xff,(size_t)((long)puStack_4d8 + 9));
          local_4d0 = puVar3;
          if ((undefined8 *)0x7 < puVar3) {
            local_4d0 = (undefined8 *)(((ulong)((long)puVar3 + 1) >> 3) * 7);
          }
        }
        local_4c8 = (undefined8 *)0x0;
      }
      puVar10 = puVar10 + 0x43;
    } while (puVar10 != puVar13);
  }
  param_1[1] = puStack_4d8;
  *param_1 = local_4e0;
  param_1[3] = local_4c8;
  param_1[2] = local_4d0;
  return;
}


// ===== 007119a0  FUN_007119a0 =====

void FUN_007119a0(undefined8 *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  byte bVar8;
  undefined1 uStack_31;
  
  uVar2 = *param_2;
  if (uVar2 < 0x3ffffffe) {
    if (*param_2 != uVar2) {
      ClearExclusiveLocal();
      goto LAB_00711a6c;
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(param_2,0x10);
    if (bVar4) {
      *param_2 = uVar2 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 != '\0') goto LAB_00711a6c;
    cVar3 = (char)param_2[2];
  }
  else {
LAB_00711a6c:
    <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::read_contended(param_2);
    cVar3 = (char)param_2[2];
  }
  if (cVar3 != '\0') {
    do {
      uVar2 = *param_2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar4) {
        *param_2 = uVar2 - 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar2 - 1 & 0xbfffffff) == 0x80000000) {
      <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::wake_writer_or_readers
                (param_2);
    }
                    /* WARNING: Subroutine does not return */
    core::result::unwrap_failed
              ("storage lock poisoned",0x15,&uStack_31,&DAT_00ad5fe0,
               &PTR_s_common_rust_src_stores_store_dat_00ad6020);
  }
  puVar1 = param_2 + 0xe;
  if (*puVar1 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *puVar1 = 0x3fffffff;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 != '\0') goto LAB_00711a5c;
  }
  else {
    ClearExclusiveLocal();
LAB_00711a5c:
    <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::write_contended
              (param_2 + 0xe);
  }
  puVar5 = PTR_GLOBAL_PANIC_COUNT_00b00bf0;
  if ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0 & 0x7fffffffffffffff) == 0) {
    bVar8 = (byte)param_2[0x10];
    if (bVar8 == 0) {
LAB_00711a20:
      param_1[2] = puVar1;
      *param_1 = param_2 + 4;
      param_1[1] = param_2;
      *(byte *)(param_1 + 3) = bVar8;
      return;
    }
  }
  else {
                    /* try { // try from 00711a44 to 00711a63 has its CatchHandler @ 00711b4c */
    iVar6 = std::panicking::panic_count::is_zero_slow_path();
    if ((char)param_2[0x10] == '\0') {
      bVar8 = (byte)iVar6 ^ 1;
      goto LAB_00711a20;
    }
    if (iVar6 == 0) goto LAB_00711ad8;
  }
  if (((*(ulong *)puVar5 & 0x7fffffffffffffff) != 0) &&
     (uVar7 = std::panicking::panic_count::is_zero_slow_path(), (uVar7 & 1) == 0)) {
    *(undefined1 *)(param_2 + 0x10) = 1;
  }
LAB_00711ad8:
  do {
    uVar2 = *puVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *puVar1 = uVar2 + 0xc0000001;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (uVar2 + 0xc0000001 >> 0x1e != 0) {
    <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::wake_writer_or_readers
              (param_2 + 0xe);
  }
                    /* try { // try from 00711af8 to 00711b2f has its CatchHandler @ 00711b4c */
                    /* WARNING: Subroutine does not return */
  core::result::unwrap_failed
            ("pending lock poisoned",0x15,&uStack_31,&DAT_00ad5fe0,
             &PTR_s_common_rust_src_stores_store_dat_00ad6038);
}


// ===== 00711b88  FUN_00711b88 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00711b88(ulong *param_1,int *param_2,undefined8 param_3,undefined8 param_4,long *param_5,
                 long *param_6,long *param_7,long *param_8)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  int iVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  undefined3 uVar8;
  undefined4 uVar9;
  undefined *puVar10;
  code *pcVar11;
  uint uVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  long lVar22;
  long in_x13;
  long extraout_x13;
  long extraout_x13_00;
  long extraout_x13_01;
  long extraout_x13_02;
  long extraout_x13_03;
  long extraout_x13_04;
  long extraout_x13_05;
  long extraout_x13_06;
  long extraout_x13_07;
  long extraout_x13_08;
  long extraout_x13_09;
  long extraout_x13_10;
  long extraout_x13_11;
  long extraout_x13_12;
  long extraout_x13_13;
  long extraout_x13_14;
  long extraout_x13_15;
  long extraout_x13_16;
  long extraout_x13_17;
  long extraout_x13_18;
  long extraout_x13_19;
  long extraout_x13_20;
  long extraout_x13_21;
  long in_x15;
  long extraout_x15;
  long extraout_x15_00;
  long extraout_x15_01;
  long extraout_x15_02;
  long extraout_x15_03;
  long extraout_x15_04;
  long extraout_x15_05;
  long extraout_x15_06;
  long extraout_x15_07;
  long extraout_x15_08;
  long extraout_x15_09;
  long extraout_x15_10;
  long extraout_x15_11;
  long extraout_x15_12;
  long extraout_x15_13;
  long extraout_x15_14;
  long extraout_x15_15;
  long extraout_x15_16;
  long *plVar23;
  int *piVar24;
  ulong uVar25;
  long *plVar26;
  ulong *puVar27;
  ulong uVar28;
  ulong uVar29;
  undefined8 uVar30;
  long *plVar31;
  undefined8 uVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  ulong local_2f8;
  ulong uStack_2f0;
  ulong local_2e8;
  undefined8 *puStack_2e0;
  undefined8 *local_2d8;
  undefined8 uStack_2d0;
  undefined8 *local_2c8;
  long *local_2c0;
  long *plStack_2b8;
  long local_2b0;
  long *local_2a0;
  long lStack_298;
  long *plStack_290;
  long lStack_288;
  long *local_280;
  long *plStack_278;
  long *local_270;
  long lStack_268;
  long *local_260;
  long lStack_258;
  long lStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  long *local_238;
  long lStack_230;
  long local_228;
  long lStack_220;
  long *local_218;
  long lStack_210;
  long local_208;
  long lStack_200;
  long *local_1f8;
  long *plStack_1f0;
  long *local_1e8;
  long *plStack_1e0;
  int local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  int iStack_1c4;
  long *plStack_1c0;
  long local_1b8;
  long lStack_1b0;
  undefined8 local_1a8;
  long *local_1a0;
  long *plStack_198;
  long *local_190;
  long lStack_188;
  long *local_180;
  long lStack_178;
  long local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  long *plStack_158;
  long local_150;
  long lStack_148;
  long local_140;
  long *plStack_138;
  long local_130;
  long lStack_128;
  long local_120;
  long *plStack_118;
  long *local_110;
  long *plStack_108;
  long *local_100;
  int iStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  int iStack_e4;
  long *local_e0;
  long lStack_d8;
  long local_d0;
  undefined8 uStack_c8;
  long local_c0;
  long lStack_b8;
  undefined4 local_a8;
  undefined3 uStack_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long lStack_88;
  undefined1 auStack_71 [17];
  
  if (*param_2 == 0) {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(param_2,0x10);
    if (bVar7) {
      *param_2 = 0x3fffffff;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 != '\0') goto LAB_00712628;
    if ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0 & 0x7fffffffffffffff) != 0) goto LAB_00712644;
LAB_00711bd8:
    puVar27 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
    if ((char)param_2[2] == '\0') {
      uVar28 = 0;
      iVar2 = param_2[0xe];
joined_r0x00712664:
      if (iVar2 == 0) {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(param_2 + 0xe,0x10);
        if (bVar7) {
          param_2[0xe] = 0x3fffffff;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 != '\0') goto LAB_0071266c;
      }
      else {
        ClearExclusiveLocal();
LAB_0071266c:
                    /* try { // try from 0071266c to 00712673 has its CatchHandler @ 00712808 */
        <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::write_contended
                  (param_2 + 0xe);
        in_x13 = extraout_x13_21;
        in_x15 = extraout_x15_16;
      }
      piVar24 = param_2 + 0xe;
      if ((*puVar27 & 0x7fffffffffffffff) == 0) {
        if ((char)param_2[0x10] != '\0') {
LAB_007126f8:
          if (((*puVar27 & 0x7fffffffffffffff) != 0) &&
             (uVar28 = std::panicking::panic_count::is_zero_slow_path(), (uVar28 & 1) == 0)) {
            *(undefined1 *)(param_2 + 0x10) = 1;
          }
LAB_0071270c:
          do {
            iVar2 = *piVar24;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar24,0x10);
            if (bVar7) {
              *piVar24 = iVar2 + -0x3fffffff;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar2 + 0xc0000001U >> 0x1e != 0) {
            <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::
            wake_writer_or_readers(piVar24);
          }
                    /* try { // try from 0071272c to 00712763 has its CatchHandler @ 00712808 */
                    /* WARNING: Subroutine does not return */
          core::result::unwrap_failed
                    ("pending lock poisoned",0x15,auStack_71,&DAT_00ad5fe0,
                     &PTR_s_common_rust_src_stores_store_dat_00ad6068);
        }
        uVar12 = 0;
      }
      else {
                    /* try { // try from 007125d0 to 007125eb has its CatchHandler @ 00712808 */
        uVar12 = std::panicking::panic_count::is_zero_slow_path();
        if ((char)param_2[0x10] != '\0') {
          if (uVar12 == 0) goto LAB_0071270c;
          goto LAB_007126f8;
        }
        uVar12 = uVar12 ^ 1;
        in_x13 = extraout_x13_18;
        in_x15 = extraout_x15_13;
      }
      uVar25 = *(ulong *)(param_2 + 0x16);
      puVar15 = *(undefined8 **)(param_2 + 0x14);
      uVar32 = *(undefined8 *)(param_2 + 0x12);
      param_2[0x12] = 0;
      param_2[0x13] = 0;
      param_2[0x14] = 8;
      param_2[0x15] = 0;
      param_2[0x16] = 0;
      param_2[0x17] = 0;
      if (0x88888888888888 < uVar25) {
        uVar30 = 0;
        uVar29 = uVar28;
LAB_00711c54:
                    /* try { // try from 00711c54 to 00711c5f has its CatchHandler @ 00712848 */
                    /* WARNING: Subroutine does not return */
        alloc::raw_vec::handle_error(uVar30,uVar29);
      }
      if (uVar25 == 0) {
        uStack_2f0 = 8;
      }
      else {
        uVar29 = uVar25 * 0xf0;
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        uVar30 = 8;
        uStack_2f0 = FUN_004b25a4(uVar29,8);
        in_x13 = extraout_x13;
        in_x15 = extraout_x15;
        if (uStack_2f0 == 0) goto LAB_00711c54;
      }
      puVar14 = puVar15 + uVar25 * 0x1c;
      local_2e8 = 0;
      local_2f8 = uVar25;
      puStack_2e0 = puVar15;
      local_2d8 = puVar15;
      uStack_2d0 = uVar32;
      local_2c8 = puVar14;
      if (uVar25 != 0) {
        do {
          while( true ) {
            plVar16 = (long *)*puVar15;
            puVar1 = puVar15 + 0x1c;
            local_2d8 = puVar1;
            if (plVar16 == (long *)0xffffffffffffffff) goto LAB_0071251c;
            plVar17 = (long *)puVar15[1];
            plVar26 = (long *)puVar15[2];
            lVar19 = (long)plVar16 - (long)(ulong)(plVar16 != (long *)0x0);
            lVar18 = puVar15[3];
            plVar3 = (long *)puVar15[4];
            if (lVar19 < 2) break;
            if (lVar19 == 2) {
              lStack_298 = _UNK_00ad5fb0;
              local_2a0 = (long *)PTR_DAT_00ad5fa8;
              lStack_288 = _UNK_00ad5fc0;
              plStack_290 = _DAT_00ad5fb8;
              local_2c0 = plVar17;
              plStack_2b8 = plVar26;
              local_2b0 = lVar18;
              if (lVar18 != 0) {
                plVar16 = plVar26 + lVar18 * 0x1c;
                do {
                  lVar18 = plVar26[8];
                  lVar19 = plVar26[0xc];
                  lVar22 = plVar26[0xc];
                  lVar33 = plVar26[0xb];
                  if ((char)lVar18 == '\x19') {
                    plVar17 = (long *)plVar26[9];
                    do {
                      lVar20 = *plVar17;
                      cVar6 = '\x01';
                      bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                      if (bVar7) {
                        *plVar17 = lVar20 + 1;
                        cVar6 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar6 != '\0');
                    if (lVar20 < 0) goto LAB_00712750;
                    plVar21 = (long *)plVar26[0xd];
                    lVar20 = plVar26[10];
                    if (plVar21 == (long *)0x0) goto LAB_00712140;
LAB_0071233c:
                    do {
                      lVar34 = *plVar21;
                      cVar6 = '\x01';
                      bVar7 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                      if (bVar7) {
                        *plVar21 = lVar34 + 1;
                        cVar6 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar6 != '\0');
                    if (lVar34 < 0) goto LAB_00712750;
                    in_x13 = plVar26[0xe];
                    iVar2 = (int)plVar26[0x15];
                    uVar9 = local_a8;
                  }
                  else {
                    local_a8._0_3_ = (undefined3)*(undefined4 *)((long)plVar26 + 0x41);
                    local_a8._3_1_ = (undefined1)*(undefined4 *)((long)plVar26 + 0x44);
                    uStack_a4 = (undefined3)((uint)*(undefined4 *)((long)plVar26 + 0x44) >> 8);
                    plVar21 = (long *)plVar26[0xd];
                    plVar17 = (long *)plVar26[9];
                    lVar20 = plVar26[10];
                    if (plVar21 != (long *)0x0) goto LAB_0071233c;
LAB_00712140:
                    iVar2 = (int)plVar26[0x15];
                    uVar9 = local_a8;
                  }
                  if (iVar2 != 2) {
                    uStack_98 = *(undefined8 *)((long)plVar26 + 0xb4);
                    local_a0 = *(undefined8 *)((long)plVar26 + 0xac);
                  }
                  iVar4 = *(int *)((long)plVar26 + 0xbc);
                  if (iVar4 != 2) {
                    lStack_88 = plVar26[0x19];
                    local_90 = (long *)plVar26[0x18];
                  }
                  plVar31 = (long *)plVar26[2];
                  lVar36 = plVar26[0x10];
                  lVar35 = plVar26[0xf];
                  param_5 = (long *)(ulong)*(byte *)(plVar26 + 0x1b);
                  lVar34 = plVar26[0x1a];
                  plVar23 = (long *)plVar26[0x11];
                  uVar8 = *(undefined3 *)(plVar26 + 0x1b);
                  local_a8 = uVar9;
                  if (plVar23 != (long *)0x0) {
                    do {
                      lVar13 = *plVar23;
                      bVar5 = 1;
                      bVar7 = (bool)ExclusiveMonitorPass(plVar23,0x10);
                      if (bVar7) {
                        *plVar23 = lVar13 + 1;
                        bVar5 = ExclusiveMonitorsStatus();
                      }
                      param_8 = (long *)(ulong)bVar5;
                    } while (bVar5 != 0);
                    if (lVar13 < 0) goto LAB_00712750;
                    param_6 = (long *)plVar26[0x12];
                  }
                  param_7 = (long *)plVar26[0x13];
                  if (param_7 != (long *)0x0) {
                    do {
                      lVar13 = *param_7;
                      cVar6 = '\x01';
                      bVar7 = (bool)ExclusiveMonitorPass(param_7,0x10);
                      if (bVar7) {
                        *param_7 = lVar13 + 1;
                        cVar6 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar6 != '\0');
                    if (lVar13 < 0) goto LAB_00712750;
                    param_8 = (long *)plVar26[0x14];
                  }
                  local_1a0 = (long *)*plVar26;
                  plStack_198 = (long *)plVar26[1];
                  local_a8._3_1_ = (undefined1)((uint)uVar9 >> 0x18);
                  local_160._0_5_ = CONCAT41(uVar9,(char)lVar18);
                  local_160 = CONCAT44(CONCAT31(uStack_a4,local_a8._3_1_),(undefined4)local_160);
                  uStack_ec = (undefined4)uStack_98;
                  uStack_e8 = (undefined4)((ulong)uStack_98 >> 0x20);
                  uStack_f4 = (undefined4)local_a0;
                  local_f0 = (undefined4)((ulong)local_a0 >> 0x20);
                  lStack_d8 = lStack_88;
                  local_e0 = local_90;
                  uStack_c8 = CONCAT53(uStack_c8._3_5_,uVar8);
                  local_180 = (long *)plVar26[4];
                  lStack_188 = plVar26[3];
                  local_170 = plVar26[6];
                  lStack_178 = plVar26[5];
                  uStack_168 = CONCAT44(uStack_168._4_4_,(int)plVar26[7]);
                    /* try { // try from 00712248 to 00712257 has its CatchHandler @ 00712818 */
                  local_190 = plVar31;
                  plStack_158 = plVar17;
                  local_150 = lVar20;
                  lStack_148 = lVar33;
                  local_140 = lVar22;
                  plStack_138 = plVar21;
                  local_130 = in_x13;
                  lStack_128 = lVar35;
                  local_120 = lVar36;
                  plStack_118 = plVar23;
                  local_110 = param_6;
                  plStack_108 = param_7;
                  local_100 = param_8;
                  iStack_f8 = iVar2;
                  iStack_e4 = iVar4;
                  local_d0 = lVar34;
                  FUN_0075e770(&local_280,&local_2a0,lVar19,&local_1a0);
                  in_x13 = extraout_x13_06;
                  if (local_280 != (long *)0x2) {
                    if (0x18 < (byte)uStack_240) {
                      do {
                        lVar18 = *local_238;
                        cVar6 = '\x01';
                        bVar7 = (bool)ExclusiveMonitorPass(local_238,0x10);
                        if (bVar7) {
                          *local_238 = lVar18 + -1;
                          cVar6 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar6 != '\0');
                      if (lVar18 + -1 == 0) {
                        DataMemoryBarrier(2,1);
                        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(&local_238);
                        in_x13 = extraout_x13_07;
                      }
                    }
                    if (local_218 != (long *)0x0) {
                      do {
                        lVar18 = *local_218;
                        cVar6 = '\x01';
                        bVar7 = (bool)ExclusiveMonitorPass(local_218,0x10);
                        if (bVar7) {
                          *local_218 = lVar18 + -1;
                          cVar6 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar6 != '\0');
                      if (lVar18 + -1 == 0) {
                        DataMemoryBarrier(2,1);
                        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(&local_218);
                        in_x13 = extraout_x13_08;
                      }
                    }
                    if (local_1f8 != (long *)0x0) {
                      do {
                        lVar18 = *local_1f8;
                        cVar6 = '\x01';
                        bVar7 = (bool)ExclusiveMonitorPass(local_1f8,0x10);
                        if (bVar7) {
                          *local_1f8 = lVar18 + -1;
                          cVar6 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar6 != '\0');
                      if (lVar18 + -1 == 0) {
                        DataMemoryBarrier(2,1);
                        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(&local_1f8);
                        in_x13 = extraout_x13_09;
                      }
                    }
                    if (local_1e8 != (long *)0x0) {
                      do {
                        lVar18 = *local_1e8;
                        cVar6 = '\x01';
                        bVar7 = (bool)ExclusiveMonitorPass(local_1e8,0x10);
                        if (bVar7) {
                          *local_1e8 = lVar18 + -1;
                          cVar6 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar6 != '\0');
                      if (lVar18 + -1 == 0) {
                        DataMemoryBarrier(2,1);
                        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(&local_1e8);
                        in_x13 = extraout_x13_10;
                      }
                    }
                  }
                  plVar26 = plVar26 + 0x1c;
                } while (plVar26 != plVar16);
              }
              plStack_198 = plStack_2b8;
              local_1a0 = local_2c0;
              local_190 = (long *)local_2b0;
                    /* try { // try from 00712498 to 007124a7 has its CatchHandler @ 007127e0 */
              FUN_00747fcc(param_2 + 4,plVar3,&local_1a0);
              uVar25 = local_2e8;
              lStack_188 = lStack_298;
              local_190 = local_2a0;
              lStack_178 = lStack_288;
              local_180 = plStack_290;
              local_1a0 = (long *)0x3;
              in_x13 = extraout_x13_16;
              in_x15 = extraout_x15_11;
              plStack_198 = plVar3;
              if (local_2e8 == local_2f8) {
                    /* try { // try from 007124c8 to 007124cf has its CatchHandler @ 0071279c */
                <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<libdiscore_common[1cb84820f9455fa0]::stores::store_database::opcodes::KKVChangeOpcode<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildRoleId,libdiscore_common[1cb84820f9455fa0]::stores::guild_role::GuildRole>>>
                ::grow_one(&local_2f8);
                in_x13 = extraout_x13_17;
                in_x15 = extraout_x15_12;
              }
            }
            else if (lVar19 == 3) {
                    /* try { // try from 00711dc0 to 00711dcf has its CatchHandler @ 007127ec */
              local_280 = plVar17;
              FUN_006fde54(&local_1a0,param_2 + 4,(long)plVar17 * 0x517cc1b727220a95,&local_280);
              plVar26 = local_190;
              plVar16 = plStack_198;
              in_x13 = extraout_x13_00;
              in_x15 = extraout_x15_00;
              if (((local_1a0 != (long *)0x0) && (plStack_198 != (long *)0x0)) &&
                 (*(long *)(param_2 + 0xc) = *(long *)(param_2 + 0xc) - (long)local_180,
                 local_190 != (long *)0x0)) {
                if (local_180 != (long *)0x0) {
                  plVar21 = plStack_198 + 1;
                  uVar25 = NEON_cmge(*plStack_198,0,1);
                  uVar25 = uVar25 & 0x8080808080808080;
                  plVar3 = plStack_198;
                  plVar31 = local_180;
                  do {
                    for (; uVar25 == 0; uVar25 = uVar25 & 0x8080808080808080) {
                      uVar25 = NEON_cmge(*plVar21,0,1);
                      plVar3 = plVar3 + -0xe8;
                      plVar21 = plVar21 + 1;
                    }
                    uVar29 = (uVar25 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                             (uVar25 >> 7 & 0xff00ff00ff00ff) << 8;
                    uVar29 = (uVar29 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar29 & 0xffff0000ffff) << 0x10;
                    /* try { // try from 00711e4c to 00711e4f has its CatchHandler @ 00712810 */
                    FUN_00702244(plVar3 + (long)-(int)((ulong)LZCOUNT(uVar29 >> 0x20 |
                                                                      uVar29 << 0x20) >> 3) * 0x1d +
                                          -0x1c);
                    plVar31 = (long *)((long)plVar31 + -1);
                    uVar25 = uVar25 - 1 & uVar25;
                    in_x13 = extraout_x13_01;
                    in_x15 = extraout_x15_01;
                  } while (plVar31 != (long *)0x0);
                }
                if ((long)plVar26 * 0xe9 != -0xf1) {
                  free(plVar16 + (long)plVar26 * -0x1d + -0x1d);
                  in_x13 = extraout_x13_02;
                  in_x15 = extraout_x15_02;
                }
              }
              uVar25 = local_2e8;
              local_1a0 = (long *)0x2;
              plStack_198 = plVar17;
              if (local_2e8 == local_2f8) {
                    /* try { // try from 00711ea4 to 00711eab has its CatchHandler @ 007127b0 */
                <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<libdiscore_common[1cb84820f9455fa0]::stores::store_database::opcodes::KKVChangeOpcode<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildRoleId,libdiscore_common[1cb84820f9455fa0]::stores::guild_role::GuildRole>>>
                ::grow_one(&local_2f8);
                in_x13 = extraout_x13_03;
                in_x15 = extraout_x15_03;
              }
            }
            else {
                    /* try { // try from 00712364 to 0071236b has its CatchHandler @ 007127f0 */
              FUN_00702d08(param_2 + 4);
              uVar25 = local_2e8;
              param_2[0xc] = 0;
              param_2[0xd] = 0;
              local_1a0 = (long *)&DAT_00000006;
              in_x13 = extraout_x13_11;
              in_x15 = extraout_x15_06;
              if (local_2e8 == local_2f8) {
                    /* try { // try from 00712388 to 0071238f has its CatchHandler @ 007127c4 */
                <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<libdiscore_common[1cb84820f9455fa0]::stores::store_database::opcodes::KKVChangeOpcode<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildRoleId,libdiscore_common[1cb84820f9455fa0]::stores::guild_role::GuildRole>>>
                ::grow_one(&local_2f8);
                in_x13 = extraout_x13_12;
                in_x15 = extraout_x15_07;
              }
            }
LAB_00711ccc:
            puVar15 = (undefined8 *)(uStack_2f0 + uVar25 * 0xf0);
            local_2e8 = uVar25 + 1;
            puVar15[0x17] = CONCAT44(iStack_e4,uStack_e8);
            puVar15[0x16] = CONCAT44(uStack_ec,local_f0);
            puVar15[0x19] = lStack_d8;
            puVar15[0x18] = local_e0;
            puVar15[0x1b] = uStack_c8;
            puVar15[0x1a] = local_d0;
            puVar15[0x1d] = lStack_b8;
            puVar15[0x1c] = local_c0;
            puVar15[0xf] = lStack_128;
            puVar15[0xe] = local_130;
            puVar15[0x11] = plStack_118;
            puVar15[0x10] = local_120;
            puVar15[0x13] = plStack_108;
            puVar15[0x12] = local_110;
            puVar15[0x15] = CONCAT44(uStack_f4,iStack_f8);
            puVar15[0x14] = local_100;
            puVar15[7] = uStack_168;
            puVar15[6] = local_170;
            puVar15[9] = plStack_158;
            puVar15[8] = local_160;
            puVar15[0xb] = lStack_148;
            puVar15[10] = local_150;
            puVar15[0xd] = plStack_138;
            puVar15[0xc] = local_140;
            puVar15[1] = plStack_198;
            *puVar15 = local_1a0;
            puVar15[3] = lStack_188;
            puVar15[2] = local_190;
            puVar15[5] = lStack_178;
            puVar15[4] = local_180;
            puVar15 = puVar1;
            if (puVar1 == puVar14) goto LAB_0071251c;
          }
          if (plVar16 == (long *)(ulong)(plVar16 != (long *)0x0)) {
            plStack_1e0 = (long *)puVar15[0x14];
            param_6 = (long *)puVar15[0x13];
            plStack_1f0 = (long *)puVar15[0x12];
            local_1f8 = (long *)puVar15[0x11];
            lStack_200 = puVar15[0x10];
            local_208 = puVar15[0xf];
            lStack_210 = puVar15[0xe];
            local_218 = (long *)puVar15[0xd];
            local_1a8 = puVar15[0x1b];
            lStack_1b0 = puVar15[0x1a];
            local_1b8 = puVar15[0x19];
            plStack_1c0 = (long *)puVar15[0x18];
            local_1c8 = (undefined4)puVar15[0x17];
            iStack_1c4 = (int)((ulong)puVar15[0x17] >> 0x20);
            uStack_1d0 = (undefined4)puVar15[0x16];
            uStack_1cc = (undefined4)((ulong)puVar15[0x16] >> 0x20);
            local_1d8 = (int)puVar15[0x15];
            uStack_1d4 = (undefined4)((ulong)puVar15[0x15] >> 0x20);
            lVar33 = puVar15[0xc];
            lVar19 = puVar15[0xb];
            lStack_230 = puVar15[10];
            local_238 = (long *)puVar15[9];
            uStack_240 = puVar15[8];
            local_248 = puVar15[7];
            lStack_250 = puVar15[6];
            lStack_258 = puVar15[5];
            local_280 = plVar16;
            plStack_278 = plVar17;
            local_270 = plVar26;
            lStack_268 = lVar18;
            local_260 = plVar3;
            local_228 = lVar19;
            lStack_220 = lVar33;
            local_1e8 = param_6;
            if ((byte)uStack_240 == '\x19') {
              do {
                lVar22 = *local_238;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(local_238,0x10);
                if (bVar7) {
                  *local_238 = lVar22 + 1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              plVar21 = local_90;
              if (lVar22 < 0) goto LAB_00712750;
            }
            else {
              local_90._0_7_ =
                   CONCAT43(*(undefined4 *)((long)puVar15 + 0x44),
                            (int3)*(undefined4 *)((long)puVar15 + 0x41));
              plVar21 = local_90;
            }
            local_90 = plVar21;
            if (local_218 != (long *)0x0) {
              do {
                lVar22 = *local_218;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(local_218,0x10);
                if (bVar7) {
                  *local_218 = lVar22 + 1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              in_x15 = lStack_210;
              if (lVar22 < 0) goto LAB_00712750;
            }
            if (local_1d8 != 2) {
              plStack_2b8 = (long *)CONCAT44(local_1c8,uStack_1cc);
              local_2c0 = (long *)CONCAT44(uStack_1d0,uStack_1d4);
            }
            if (iStack_1c4 != 2) {
              local_2a0 = plStack_1c0;
              lStack_298 = local_1b8;
            }
            if (local_1f8 != (long *)0x0) {
              do {
                lVar22 = *local_1f8;
                bVar5 = 1;
                bVar7 = (bool)ExclusiveMonitorPass(local_1f8,0x10);
                if (bVar7) {
                  *local_1f8 = lVar22 + 1;
                  bVar5 = ExclusiveMonitorsStatus();
                }
                param_7 = (long *)(ulong)bVar5;
              } while (bVar5 != 0);
              param_5 = plStack_1f0;
              if (lVar22 < 0) goto LAB_00712750;
            }
            if (param_6 != (long *)0x0) {
              do {
                lVar22 = *param_6;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(param_6,0x10);
                if (bVar7) {
                  *param_6 = lVar22 + 1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              param_7 = plStack_1e0;
              if (lVar22 < 0) {
LAB_00712750:
                    /* WARNING: Does not return */
                pcVar11 = (code *)SoftwareBreakpoint(1,0x712754);
                (*pcVar11)();
              }
            }
            local_90._0_4_ = SUB84(plVar21,0);
            uVar9 = (undefined4)local_90;
            param_8 = (long *)((ulong)plVar21 & 0xffffffff);
            uStack_ec = SUB84(plStack_2b8,0);
            uStack_e8 = (undefined4)((ulong)plStack_2b8 >> 0x20);
            uStack_f4 = SUB84(local_2c0,0);
            local_f0 = (undefined4)((ulong)local_2c0 >> 0x20);
            local_90._3_4_ = (undefined4)((ulong)plVar21 >> 0x18);
            lStack_d8 = lStack_298;
            local_e0 = local_2a0;
            local_160 = CONCAT44(local_90._3_4_,(int)CONCAT41(uVar9,(byte)uStack_240));
            iStack_f8 = local_1d8;
            iStack_e4 = iStack_1c4;
            uStack_c8._0_3_ = (undefined3)local_1a8;
            uStack_168 = CONCAT44(uStack_168._4_4_,(undefined4)local_248);
                    /* try { // try from 0071206c to 00712077 has its CatchHandler @ 007127f4 */
            local_1a0 = plVar16;
            plStack_198 = plVar17;
            local_190 = plVar26;
            lStack_188 = lVar18;
            local_180 = plVar3;
            lStack_178 = lStack_258;
            local_170 = lStack_250;
            plStack_158 = local_238;
            local_150 = lStack_230;
            lStack_148 = lVar19;
            local_140 = lVar33;
            plStack_138 = local_218;
            local_130 = in_x15;
            lStack_128 = local_208;
            local_120 = lStack_200;
            plStack_118 = local_1f8;
            local_110 = param_5;
            plStack_108 = param_6;
            local_100 = param_7;
            local_d0 = lStack_1b0;
            FUN_007479c8(param_2 + 4,&local_1a0);
            uVar25 = local_2e8;
            local_100 = plStack_1e0;
            iStack_f8 = local_1d8;
            uStack_f4 = uStack_1d4;
            uStack_e8 = local_1c8;
            iStack_e4 = iStack_1c4;
            local_f0 = uStack_1d0;
            uStack_ec = uStack_1cc;
            lStack_d8 = local_1b8;
            local_e0 = plStack_1c0;
            uStack_c8 = local_1a8;
            local_d0 = lStack_1b0;
            plStack_138 = local_218;
            local_140 = lStack_220;
            lStack_128 = local_208;
            local_130 = lStack_210;
            plStack_118 = local_1f8;
            local_120 = lStack_200;
            plStack_108 = local_1e8;
            local_110 = plStack_1f0;
            uStack_168 = local_248;
            local_170 = lStack_250;
            lStack_178 = lStack_258;
            local_180 = local_260;
            plStack_158 = local_238;
            local_160 = uStack_240;
            lStack_148 = local_228;
            local_150 = lStack_230;
            local_1a0 = local_280;
            plStack_198 = plStack_278;
            lStack_188 = lStack_268;
            local_190 = local_270;
            in_x13 = extraout_x13_04;
            in_x15 = extraout_x15_04;
            local_c0 = lVar19;
            lStack_b8 = lVar33;
            if (local_2e8 == local_2f8) {
                    /* try { // try from 007120c8 to 007120cf has its CatchHandler @ 00712774 */
              <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<libdiscore_common[1cb84820f9455fa0]::stores::store_database::opcodes::KKVChangeOpcode<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildRoleId,libdiscore_common[1cb84820f9455fa0]::stores::guild_role::GuildRole>>>
              ::grow_one(&local_2f8);
              in_x13 = extraout_x13_05;
              in_x15 = extraout_x15_05;
            }
            goto LAB_00711ccc;
          }
                    /* try { // try from 0071239c to 007123af has its CatchHandler @ 00712804 */
          local_2a0 = plVar17;
          local_280 = plVar26;
          FUN_00747c2c(&local_1a0,param_2 + 4,&local_2a0,&local_280);
          in_x13 = extraout_x13_13;
          in_x15 = extraout_x15_08;
          if (local_1a0 != (long *)0x2) {
            FUN_0070ce2c(&local_1a0);
            in_x13 = extraout_x13_14;
            in_x15 = extraout_x15_09;
          }
          uVar25 = local_2e8;
          local_1a0 = (long *)&DAT_00000005;
          plStack_198 = plVar17;
          local_190 = plVar26;
          if (local_2e8 == local_2f8) {
                    /* try { // try from 007123e0 to 007123e7 has its CatchHandler @ 00712788 */
            <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<libdiscore_common[1cb84820f9455fa0]::stores::store_database::opcodes::KKVChangeOpcode<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildRoleId,libdiscore_common[1cb84820f9455fa0]::stores::guild_role::GuildRole>>>
            ::grow_one(&local_2f8);
            in_x13 = extraout_x13_15;
            in_x15 = extraout_x15_10;
          }
          puVar15 = (undefined8 *)(uStack_2f0 + uVar25 * 0xf0);
          local_2e8 = uVar25 + 1;
          puVar15[0x17] = CONCAT44(iStack_e4,uStack_e8);
          puVar15[0x16] = CONCAT44(uStack_ec,local_f0);
          puVar15[0x19] = lStack_d8;
          puVar15[0x18] = local_e0;
          puVar15[0x1b] = uStack_c8;
          puVar15[0x1a] = local_d0;
          puVar15[0x1d] = lStack_b8;
          puVar15[0x1c] = local_c0;
          puVar15[0xf] = lStack_128;
          puVar15[0xe] = local_130;
          puVar15[0x11] = plStack_118;
          puVar15[0x10] = local_120;
          puVar15[0x13] = plStack_108;
          puVar15[0x12] = local_110;
          puVar15[0x15] = CONCAT44(uStack_f4,iStack_f8);
          puVar15[0x14] = local_100;
          puVar15[7] = uStack_168;
          puVar15[6] = local_170;
          puVar15[9] = plStack_158;
          puVar15[8] = local_160;
          puVar15[0xb] = lStack_148;
          puVar15[10] = local_150;
          puVar15[0xd] = plStack_138;
          puVar15[0xc] = local_140;
          puVar15[1] = plStack_198;
          *puVar15 = local_1a0;
          puVar15[3] = lStack_188;
          puVar15[2] = local_190;
          puVar15[5] = lStack_178;
          puVar15[4] = local_180;
          puVar15 = puVar1;
        } while (puVar1 != puVar14);
      }
LAB_0071251c:
                    /* try { // try from 0071251c to 00712523 has its CatchHandler @ 007127d8 */
      FUN_0070a724(&puStack_2e0);
      param_1[1] = uStack_2f0;
      *param_1 = local_2f8;
      param_1[2] = local_2e8;
      puVar10 = PTR_GLOBAL_PANIC_COUNT_00b00bf0;
                    /* try { // try from 007125fc to 007125ff has its CatchHandler @ 00712808 */
      if ((((uVar12 & 1) == 0) &&
          ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0 & 0x7fffffffffffffff) != 0)) &&
         (uVar25 = std::panicking::panic_count::is_zero_slow_path(), (uVar25 & 1) == 0)) {
        *(undefined1 *)(param_2 + 0x10) = 1;
      }
      do {
        iVar2 = *piVar24;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar24,0x10);
        if (bVar7) {
          *piVar24 = iVar2 + -0x3fffffff;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar2 + 0xc0000001U >> 0x1e != 0) {
        <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::
        wake_writer_or_readers(param_2 + 0xe);
      }
      if ((((uVar28 & 1) == 0) && ((*(ulong *)puVar10 & 0x7fffffffffffffff) != 0)) &&
         (uVar28 = std::panicking::panic_count::is_zero_slow_path(), (uVar28 & 1) == 0)) {
        *(undefined1 *)(param_2 + 2) = 1;
      }
      do {
        iVar2 = *param_2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(param_2,0x10);
        if (bVar7) {
          *param_2 = iVar2 + -0x3fffffff;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar2 + 0xc0000001U >> 0x1e != 0) {
        <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::
        wake_writer_or_readers(param_2);
      }
      return;
    }
  }
  else {
    ClearExclusiveLocal();
LAB_00712628:
    <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::write_contended(param_2)
    ;
    in_x13 = extraout_x13_19;
    in_x15 = extraout_x15_14;
    if ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0 & 0x7fffffffffffffff) == 0) goto LAB_00711bd8;
LAB_00712644:
    puVar27 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
    uVar12 = std::panicking::panic_count::is_zero_slow_path();
    if ((char)param_2[2] == '\0') {
      uVar28 = (ulong)(uVar12 ^ 1);
      iVar2 = param_2[0xe];
      in_x13 = extraout_x13_20;
      in_x15 = extraout_x15_15;
      goto joined_r0x00712664;
    }
    if (uVar12 == 0) goto LAB_00712690;
  }
  if (((*puVar27 & 0x7fffffffffffffff) != 0) &&
     (uVar28 = std::panicking::panic_count::is_zero_slow_path(), (uVar28 & 1) == 0)) {
    *(undefined1 *)(param_2 + 2) = 1;
  }
LAB_00712690:
  do {
    iVar2 = *param_2;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(param_2,0x10);
    if (bVar7) {
      *param_2 = iVar2 + -0x3fffffff;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (iVar2 + 0xc0000001U >> 0x1e != 0) {
    <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::wake_writer_or_readers
              (param_2);
  }
                    /* WARNING: Subroutine does not return */
  core::result::unwrap_failed
            ("storage lock poisoned",0x15,auStack_71,&DAT_00ad5fe0,
             &PTR_s_common_rust_src_stores_store_dat_00ad6050);
}


// ===== 00712870  FUN_00712870 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00712870(ulong *param_1,int *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  char cVar7;
  bool bVar8;
  code *pcVar9;
  uint uVar10;
  uint uVar11;
  long *__dest;
  undefined8 uVar12;
  undefined1 *__dest_00;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  int *piVar18;
  ulong uVar19;
  long *plVar20;
  void *__src;
  ulong *puVar21;
  undefined8 uVar22;
  ulong *puVar23;
  long *plVar24;
  long *plVar25;
  long lVar26;
  ulong local_1d0;
  ulong uStack_1c8;
  ulong local_1c0;
  undefined8 *puStack_1b8;
  undefined8 *local_1b0;
  undefined8 uStack_1a8;
  undefined8 *local_1a0;
  long *local_198;
  long *plStack_190;
  long *local_188;
  long *local_180;
  long *plStack_178;
  long *local_170;
  long lStack_168;
  long *local_160;
  long *plStack_158;
  long *local_150;
  long *local_148;
  long *local_140;
  long lStack_138;
  long *plStack_130;
  long *local_128;
  long lStack_120;
  long local_118;
  undefined8 uStack_110;
  long *local_100;
  long *plStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  long *local_d8;
  long *local_d0;
  long *plStack_c8;
  long local_c0;
  long lStack_b8;
  undefined8 local_b0;
  long lStack_a8;
  long local_a0;
  long local_90;
  long *plStack_88;
  long *local_80;
  undefined1 auStack_69 [9];
  
  if (*param_2 == 0) {
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(param_2,0x10);
    if (bVar8) {
      *param_2 = 0x3fffffff;
      cVar7 = ExclusiveMonitorsStatus();
    }
    if (cVar7 != '\0') goto LAB_007130dc;
    if ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0 & 0x7fffffffffffffff) != 0) goto LAB_007130f8;
LAB_007128c0:
    puVar23 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
    if ((char)param_2[2] == '\0') {
      uVar11 = 0;
      iVar2 = param_2[0xe];
joined_r0x00713118:
      if (iVar2 == 0) {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(param_2 + 0xe,0x10);
        if (bVar8) {
          param_2[0xe] = 0x3fffffff;
          cVar7 = ExclusiveMonitorsStatus();
        }
        if (cVar7 != '\0') goto LAB_00713120;
      }
      else {
        ClearExclusiveLocal();
LAB_00713120:
                    /* try { // try from 00713120 to 00713127 has its CatchHandler @ 007132c0 */
        <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::write_contended
                  (param_2 + 0xe);
      }
      piVar18 = param_2 + 0xe;
      if ((*puVar23 & 0x7fffffffffffffff) == 0) {
        if ((char)param_2[0x10] != '\0') {
LAB_007131ac:
          if (((*puVar23 & 0x7fffffffffffffff) != 0) &&
             (uVar19 = std::panicking::panic_count::is_zero_slow_path(), (uVar19 & 1) == 0)) {
            *(undefined1 *)(param_2 + 0x10) = 1;
          }
LAB_007131c0:
          do {
            iVar2 = *piVar18;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar18,0x10);
            if (bVar8) {
              *piVar18 = iVar2 + -0x3fffffff;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar2 + 0xc0000001U >> 0x1e != 0) {
            <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::
            wake_writer_or_readers(piVar18);
          }
                    /* try { // try from 007131e0 to 00713217 has its CatchHandler @ 007132c0 */
                    /* WARNING: Subroutine does not return */
          core::result::unwrap_failed
                    ("pending lock poisoned",0x15,auStack_69,&DAT_00ad5fe0,
                     &PTR_s_common_rust_src_stores_store_dat_00ad6068);
        }
        uVar10 = 0;
      }
      else {
                    /* try { // try from 00713084 to 0071309f has its CatchHandler @ 007132c0 */
        uVar10 = std::panicking::panic_count::is_zero_slow_path();
        if ((char)param_2[0x10] != '\0') {
          if (uVar10 == 0) goto LAB_007131c0;
          goto LAB_007131ac;
        }
        uVar10 = uVar10 ^ 1;
      }
      uVar19 = *(ulong *)(param_2 + 0x16);
      puVar13 = *(undefined8 **)(param_2 + 0x14);
      uVar12 = *(undefined8 *)(param_2 + 0x12);
      param_2[0x12] = 0;
      param_2[0x13] = 0;
      param_2[0x14] = 8;
      param_2[0x15] = 0;
      param_2[0x16] = 0;
      param_2[0x17] = 0;
      if (0x13b13b13b13b13b < uVar19) {
        uVar22 = 0;
        puVar21 = param_1;
LAB_00712940:
                    /* try { // try from 00712940 to 0071294b has its CatchHandler @ 00713374 */
                    /* WARNING: Subroutine does not return */
        alloc::raw_vec::handle_error(uVar22,puVar21);
      }
      if (uVar19 == 0) {
        uStack_1c8 = 8;
      }
      else {
        puVar21 = (ulong *)(uVar19 * 0x68);
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        uVar22 = 8;
        uStack_1c8 = FUN_004b25a4(puVar21,8);
        if (uStack_1c8 == 0) goto LAB_00712940;
      }
      puVar15 = puVar13 + uVar19 * 0xb;
      local_1c0 = 0;
      local_1d0 = uVar19;
      puStack_1b8 = puVar13;
      local_1b0 = puVar13;
      uStack_1a8 = uVar12;
      local_1a0 = puVar15;
      if (uVar19 != 0) {
        do {
          plVar20 = (long *)*puVar13;
          puVar1 = puVar13 + 0xb;
          local_1b0 = puVar1;
          if (plVar20 == (long *)0xffffffffffffffff) break;
          plVar24 = (long *)puVar13[1];
          plVar25 = (long *)puVar13[2];
          plVar14 = (long *)puVar13[3];
          plVar3 = (long *)puVar13[4];
          lVar16 = (long)plVar20 - (long)(ulong)(plVar20 != (long *)0x0);
          if (lVar16 < 2) {
            if (plVar20 == (long *)(ulong)(plVar20 != (long *)0x0)) {
              lVar26 = puVar13[8];
              local_128 = (long *)puVar13[7];
              uVar12 = puVar13[10];
              lVar16 = puVar13[9];
              plStack_130 = (long *)puVar13[6];
              lStack_138 = puVar13[5];
              local_160 = plVar20;
              plStack_158 = plVar24;
              local_150 = plVar25;
              local_148 = plVar14;
              local_140 = plVar3;
              lStack_120 = lVar26;
              local_118 = lVar16;
              uStack_110 = uVar12;
              if ((byte)lStack_138 == '\x19') {
                do {
                  lVar17 = *plStack_130;
                  cVar7 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(plStack_130,0x10);
                  if (bVar8) {
                    *plStack_130 = lVar17 + 1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (lVar17 < 0) {
LAB_00713204:
                    /* WARNING: Does not return */
                  pcVar9 = (code *)SoftwareBreakpoint(1,0x713208);
                  (*pcVar9)();
                }
                local_180 = (long *)CONCAT71(local_180._1_7_,0x19);
                local_170 = local_128;
                plStack_178 = plStack_130;
              }
              else {
                plStack_178 = (long *)puVar13[6];
                local_180 = (long *)puVar13[5];
                local_170 = (long *)puVar13[7];
              }
              uVar22 = 0;
              uVar19 = (long)plVar3 << 3;
              if ((ulong)plVar3 >> 0x3d != 0) {
LAB_00713078:
                    /* try { // try from 00713078 to 0071307f has its CatchHandler @ 007132c8 */
                    /* WARNING: Subroutine does not return */
                alloc::raw_vec::handle_error(uVar22,uVar19);
              }
              uVar19 = (long)plVar3 * 8;
              uVar22 = 0;
              if (0x7ffffffffffffff8 < uVar19) goto LAB_00713078;
              if (uVar19 == 0) {
                __dest_00 = &DAT_00000008;
                plVar25 = (long *)0x0;
              }
              else {
                __rustc::__rust_no_alloc_shim_is_unstable_v2(0);
                __dest_00 = (undefined1 *)FUN_004b25a4(uVar19,8);
                uVar22 = 8;
                plVar25 = plVar3;
                if (__dest_00 == (undefined1 *)0x0) goto LAB_00713078;
              }
              if (plVar3 != (long *)0x0) {
                memcpy(__dest_00,plVar14,uVar19);
              }
              local_d0 = plStack_178;
              local_d8 = local_180;
              plStack_c8 = local_170;
              local_b0 = CONCAT44(CONCAT13(uStack_110._7_1_,(int3)((ulong)uVar12 >> 0x20)),
                                  (undefined4)uStack_110);
                    /* try { // try from 00712f10 to 00712f1b has its CatchHandler @ 00713284 */
              local_100 = plVar20;
              plStack_f8 = plVar24;
              plStack_f0 = plVar25;
              plStack_e8 = (long *)__dest_00;
              plStack_e0 = plVar3;
              local_c0 = lVar26;
              lStack_b8 = lVar16;
              FUN_0074836c(param_2 + 4,&local_100);
              uVar19 = local_1c0;
              plStack_c8 = local_128;
              local_d0 = plStack_130;
              local_b0 = uStack_110;
              local_d8 = (long *)lStack_138;
              plStack_e0 = local_140;
              lStack_b8 = local_118;
              local_c0 = lStack_120;
              local_100 = local_160;
              plStack_f8 = plStack_158;
              plStack_e8 = local_148;
              plStack_f0 = local_150;
              lStack_a8 = lVar26;
              local_a0 = lVar16;
              if (local_1c0 == local_1d0) {
                    /* try { // try from 00712f58 to 00712f5f has its CatchHandler @ 0071323c */
                <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<libdiscore_common[1cb84820f9455fa0]::stores::store_database::opcodes::KKVChangeOpcode<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::core::snowflake::EmojiId,libdiscore_common[1cb84820f9455fa0]::stores::guild_emoji::RawGuildEmoji>>>
                ::grow_one(&local_1d0);
              }
            }
            else {
                    /* try { // try from 00712da8 to 00712dbb has its CatchHandler @ 007132a8 */
              local_180 = plVar24;
              local_160 = plVar25;
              FUN_00748600(&local_100,param_2 + 4,&local_180,&local_160);
              if (local_100 != (long *)0x2) {
                if (0x18 < (byte)local_d8) {
                  do {
                    lVar16 = *local_d0;
                    cVar7 = '\x01';
                    bVar8 = (bool)ExclusiveMonitorPass(local_d0,0x10);
                    if (bVar8) {
                      *local_d0 = lVar16 + -1;
                      cVar7 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar7 != '\0');
                  if (lVar16 + -1 == 0) {
                    DataMemoryBarrier(2,1);
                    <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(&local_d0);
                  }
                }
                if (plStack_f0 != (long *)0x0) {
                  free(plStack_e8);
                }
              }
              uVar19 = local_1c0;
              local_100 = (long *)&DAT_00000005;
              plStack_f8 = plVar24;
              plStack_f0 = plVar25;
              if (local_1c0 == local_1d0) {
                    /* try { // try from 00712e30 to 00712e37 has its CatchHandler @ 0071328c */
                <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<libdiscore_common[1cb84820f9455fa0]::stores::store_database::opcodes::KKVChangeOpcode<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::core::snowflake::EmojiId,libdiscore_common[1cb84820f9455fa0]::stores::guild_emoji::RawGuildEmoji>>>
                ::grow_one(&local_1d0);
              }
            }
          }
          else if (lVar16 == 2) {
            plStack_178 = _UNK_00ad5fb0;
            local_180 = (long *)PTR_DAT_00ad5fa8;
            lStack_168 = _UNK_00ad5fc0;
            local_170 = _DAT_00ad5fb8;
            local_198 = plVar24;
            plStack_190 = plVar25;
            local_188 = plVar14;
            if (plVar14 != (long *)0x0) {
              plVar20 = plVar25 + (long)plVar14 * 0xb;
              do {
                lVar16 = plVar25[8];
                lVar26 = plVar25[9];
                uVar4 = *(undefined1 *)((long)plVar25 + 0x54);
                if ((char)plVar25[5] == '\x19') {
                  plVar14 = (long *)plVar25[6];
                  do {
                    lVar17 = *plVar14;
                    cVar7 = '\x01';
                    bVar8 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                    if (bVar8) {
                      *plVar14 = lVar17 + 1;
                      cVar7 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar7 != '\0');
                  if (lVar17 < 0) goto LAB_00713204;
                  local_80 = (long *)plVar25[7];
                  local_90 = CONCAT71(local_90._1_7_,0x19);
                  plVar24 = (long *)plVar25[4];
                  plStack_88 = plVar14;
                }
                else {
                  local_90 = plVar25[5];
                  local_80 = (long *)plVar25[7];
                  plVar24 = (long *)plVar25[4];
                  plStack_88 = (long *)plVar25[6];
                }
                uVar19 = (long)plVar24 << 3;
                uVar12 = 0;
                if (((ulong)plVar24 >> 0x3d != 0) || (uVar12 = 0, 0x7ffffffffffffff8 < uVar19)) {
LAB_0071306c:
                    /* try { // try from 0071306c to 00713073 has its CatchHandler @ 0071330c */
                    /* WARNING: Subroutine does not return */
                  alloc::raw_vec::handle_error(uVar12,uVar19);
                }
                uVar5 = *(undefined1 *)((long)plVar25 + 0x55);
                uVar6 = *(undefined1 *)((long)plVar25 + 0x56);
                __src = (void *)plVar25[3];
                if (uVar19 == 0) {
                  __dest = (long *)&DAT_00000008;
                  plVar14 = (long *)0x0;
                }
                else {
                  __rustc::__rust_no_alloc_shim_is_unstable_v2(0);
                  __dest = (long *)FUN_004b25a4(uVar19,8);
                  uVar12 = 8;
                  plVar14 = plVar24;
                  if (__dest == (long *)0x0) goto LAB_0071306c;
                }
                if (plVar24 != (long *)0x0) {
                  memcpy(__dest,__src,uVar19);
                }
                local_100 = (long *)*plVar25;
                plStack_f8 = (long *)plVar25[1];
                plStack_c8 = local_80;
                local_d0 = plStack_88;
                local_d8 = (long *)local_90;
                local_b0 = CONCAT44(CONCAT13(*(undefined1 *)((long)plVar25 + 0x57),
                                             CONCAT12(uVar6,CONCAT11(uVar5,uVar4))),(int)plVar25[10]
                                   );
                    /* try { // try from 00712cd8 to 00712ce7 has its CatchHandler @ 007132a0 */
                plStack_f0 = plVar14;
                plStack_e8 = __dest;
                plStack_e0 = plVar24;
                local_c0 = lVar16;
                lStack_b8 = lVar26;
                FUN_0075ebd0(&local_160,&local_180,lVar26,&local_100);
                if (local_160 != (long *)0x2) {
                  if (0x18 < (byte)lStack_138) {
                    do {
                      lVar16 = *plStack_130;
                      cVar7 = '\x01';
                      bVar8 = (bool)ExclusiveMonitorPass(plStack_130,0x10);
                      if (bVar8) {
                        *plStack_130 = lVar16 + -1;
                        cVar7 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar7 != '\0');
                    if (lVar16 + -1 == 0) {
                      DataMemoryBarrier(2,1);
                      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(&plStack_130);
                    }
                  }
                  if (local_150 != (long *)0x0) {
                    free(local_148);
                  }
                }
                plVar25 = plVar25 + 0xb;
              } while (plVar25 != plVar20);
            }
            plStack_f8 = plStack_190;
            local_100 = local_198;
            plStack_f0 = local_188;
                    /* try { // try from 00712f74 to 00712f83 has its CatchHandler @ 00713250 */
            FUN_00748868(param_2 + 4,plVar3,&local_100);
            uVar19 = local_1c0;
            plStack_e8 = plStack_178;
            local_d8 = (long *)lStack_168;
            plStack_e0 = local_170;
            plStack_f0 = local_180;
            local_100 = (long *)0x3;
            plStack_f8 = plVar3;
            if (local_1c0 == local_1d0) {
                    /* try { // try from 00712fa8 to 00712faf has its CatchHandler @ 00713228 */
              <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<libdiscore_common[1cb84820f9455fa0]::stores::store_database::opcodes::KKVChangeOpcode<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::core::snowflake::EmojiId,libdiscore_common[1cb84820f9455fa0]::stores::guild_emoji::RawGuildEmoji>>>
              ::grow_one(&local_1d0);
            }
          }
          else if (lVar16 == 3) {
                    /* try { // try from 00712a64 to 00712aab has its CatchHandler @ 007132b8 */
            local_180 = plVar24;
            FUN_006fde54(&local_100,param_2 + 4,(long)plVar24 * 0x517cc1b727220a95,&local_180);
            if (local_100 != (long *)0x0) {
              plStack_158 = plStack_f0;
              local_160 = plStack_f8;
              local_148 = plStack_e0;
              local_150 = plStack_e8;
              if (plStack_f8 != (long *)0x0) {
                *(long *)(param_2 + 0xc) = *(long *)(param_2 + 0xc) - (long)plStack_e0;
                FUN_007043b0(&local_160);
              }
            }
            uVar19 = local_1c0;
            local_100 = (long *)0x2;
            plStack_f8 = plVar24;
            if (local_1c0 == local_1d0) {
                    /* try { // try from 00712ac4 to 00712acb has its CatchHandler @ 00713270 */
              <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<libdiscore_common[1cb84820f9455fa0]::stores::store_database::opcodes::KKVChangeOpcode<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::core::snowflake::EmojiId,libdiscore_common[1cb84820f9455fa0]::stores::guild_emoji::RawGuildEmoji>>>
              ::grow_one(&local_1d0);
            }
          }
          else {
                    /* try { // try from 00712d70 to 00712d77 has its CatchHandler @ 007132ac */
            FUN_00703054(param_2 + 4);
            uVar19 = local_1c0;
            param_2[0xc] = 0;
            param_2[0xd] = 0;
            local_100 = (long *)&DAT_00000006;
            if (local_1c0 == local_1d0) {
                    /* try { // try from 00712d94 to 00712d9b has its CatchHandler @ 0071325c */
              <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<libdiscore_common[1cb84820f9455fa0]::stores::store_database::opcodes::KKVChangeOpcode<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::core::snowflake::EmojiId,libdiscore_common[1cb84820f9455fa0]::stores::guild_emoji::RawGuildEmoji>>>
              ::grow_one(&local_1d0);
            }
          }
          puVar13 = (undefined8 *)(uStack_1c8 + uVar19 * 0x68);
          puVar13[1] = plStack_f8;
          *puVar13 = local_100;
          puVar13[7] = plStack_c8;
          puVar13[6] = local_d0;
          puVar13[9] = lStack_b8;
          puVar13[8] = local_c0;
          puVar13[0xb] = lStack_a8;
          puVar13[10] = local_b0;
          puVar13[0xc] = local_a0;
          local_1c0 = uVar19 + 1;
          puVar13[3] = plStack_e8;
          puVar13[2] = plStack_f0;
          puVar13[5] = local_d8;
          puVar13[4] = plStack_e0;
          puVar13 = puVar1;
        } while (puVar1 != puVar15);
      }
                    /* try { // try from 00712fc4 to 00712fcb has its CatchHandler @ 007132b0 */
      FUN_0070a8e8(&puStack_1b8);
      param_1[2] = local_1c0;
      param_1[1] = uStack_1c8;
      *param_1 = local_1d0;
                    /* try { // try from 007130b0 to 007130b3 has its CatchHandler @ 007132c0 */
      if ((((uVar10 & 1) == 0) && ((*puVar23 & 0x7fffffffffffffff) != 0)) &&
         (uVar19 = std::panicking::panic_count::is_zero_slow_path(), (uVar19 & 1) == 0)) {
        *(undefined1 *)(param_2 + 0x10) = 1;
      }
      do {
        iVar2 = *piVar18;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar18,0x10);
        if (bVar8) {
          *piVar18 = iVar2 + -0x3fffffff;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar2 + 0xc0000001U >> 0x1e != 0) {
        <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::
        wake_writer_or_readers(param_2 + 0xe);
      }
      if ((((uVar11 & 1) == 0) && ((*puVar23 & 0x7fffffffffffffff) != 0)) &&
         (uVar19 = std::panicking::panic_count::is_zero_slow_path(), (uVar19 & 1) == 0)) {
        *(undefined1 *)(param_2 + 2) = 1;
      }
      do {
        iVar2 = *param_2;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(param_2,0x10);
        if (bVar8) {
          *param_2 = iVar2 + -0x3fffffff;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar2 + 0xc0000001U >> 0x1e != 0) {
        <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::
        wake_writer_or_readers(param_2);
      }
      return;
    }
  }
  else {
    ClearExclusiveLocal();
LAB_007130dc:
    <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::write_contended(param_2)
    ;
    if ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0 & 0x7fffffffffffffff) == 0) goto LAB_007128c0;
LAB_007130f8:
    puVar23 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
    uVar11 = std::panicking::panic_count::is_zero_slow_path();
    if ((char)param_2[2] == '\0') {
      uVar11 = uVar11 ^ 1;
      iVar2 = param_2[0xe];
      goto joined_r0x00713118;
    }
    if (uVar11 == 0) goto LAB_00713144;
  }
  if (((*puVar23 & 0x7fffffffffffffff) != 0) &&
     (uVar19 = std::panicking::panic_count::is_zero_slow_path(), (uVar19 & 1) == 0)) {
    *(undefined1 *)(param_2 + 2) = 1;
  }
LAB_00713144:
  do {
    iVar2 = *param_2;
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(param_2,0x10);
    if (bVar8) {
      *param_2 = iVar2 + -0x3fffffff;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if (iVar2 + 0xc0000001U >> 0x1e != 0) {
    <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::wake_writer_or_readers
              (param_2);
  }
                    /* WARNING: Subroutine does not return */
  core::result::unwrap_failed
            ("storage lock poisoned",0x15,auStack_69,&DAT_00ad5fe0,
             &PTR_s_common_rust_src_stores_store_dat_00ad6050);
}


// ===== 0071339c  FUN_0071339c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0071339c(ulong *param_1,int *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  undefined5 uVar7;
  long *plVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  long *plVar11;
  undefined *puVar12;
  code *pcVar13;
  uint uVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  char cVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  long *plVar23;
  long *in_x12;
  long *extraout_x12;
  long *extraout_x12_00;
  long *extraout_x12_01;
  long *extraout_x12_02;
  long *extraout_x12_03;
  long *extraout_x12_04;
  long *extraout_x12_05;
  long *extraout_x12_06;
  long *extraout_x12_07;
  long *extraout_x12_08;
  long *extraout_x12_09;
  long *extraout_x12_10;
  long *extraout_x12_11;
  long *extraout_x12_12;
  long *extraout_x12_13;
  long *extraout_x12_14;
  long *extraout_x12_15;
  long *extraout_x12_16;
  long *extraout_x12_17;
  long *extraout_x12_18;
  long *extraout_x12_19;
  long *extraout_x12_20;
  long *extraout_x12_21;
  long *in_x13;
  long *extraout_x13;
  long *extraout_x13_00;
  long *extraout_x13_01;
  long *extraout_x13_02;
  long *extraout_x13_03;
  long *extraout_x13_04;
  long *extraout_x13_05;
  long *extraout_x13_06;
  long *extraout_x13_07;
  long *extraout_x13_08;
  long *extraout_x13_09;
  long *extraout_x13_10;
  long *extraout_x13_11;
  long *extraout_x13_12;
  long *extraout_x13_13;
  long *extraout_x13_14;
  long *extraout_x13_15;
  long *extraout_x13_16;
  long *extraout_x13_17;
  long *extraout_x13_18;
  long *extraout_x13_19;
  long *extraout_x13_20;
  long *extraout_x13_21;
  ulong in_x14;
  ulong extraout_x14;
  ulong extraout_x14_00;
  ulong extraout_x14_01;
  ulong extraout_x14_02;
  long *plVar24;
  ulong extraout_x14_03;
  ulong extraout_x14_04;
  ulong extraout_x14_05;
  ulong extraout_x14_06;
  ulong extraout_x14_07;
  ulong extraout_x14_08;
  ulong extraout_x14_09;
  ulong extraout_x14_10;
  ulong extraout_x14_11;
  ulong extraout_x14_12;
  ulong extraout_x14_13;
  ulong extraout_x14_14;
  ulong extraout_x14_15;
  ulong extraout_x14_16;
  ulong extraout_x14_17;
  ulong in_x15;
  ulong extraout_x15;
  ulong extraout_x15_00;
  ulong extraout_x15_01;
  ulong extraout_x15_02;
  ulong extraout_x15_03;
  ulong extraout_x15_04;
  ulong extraout_x15_05;
  ulong extraout_x15_06;
  ulong extraout_x15_07;
  ulong extraout_x15_08;
  ulong extraout_x15_09;
  ulong extraout_x15_10;
  ulong extraout_x15_11;
  ulong extraout_x15_12;
  ulong extraout_x15_13;
  ulong extraout_x15_14;
  ulong extraout_x15_15;
  ulong extraout_x15_16;
  ulong extraout_x15_17;
  ulong extraout_x15_18;
  ulong extraout_x15_19;
  ulong extraout_x15_20;
  ulong extraout_x15_21;
  int *piVar25;
  ulong uVar26;
  ulong *puVar27;
  ulong uVar28;
  ulong uVar29;
  undefined8 uVar30;
  undefined8 *puVar31;
  long *plVar32;
  undefined8 *puVar33;
  long lVar34;
  ulong local_1e0;
  ulong uStack_1d8;
  ulong local_1d0;
  undefined8 *puStack_1c8;
  undefined8 *local_1c0;
  undefined8 uStack_1b8;
  undefined8 *local_1b0;
  undefined8 local_1a8;
  long *plStack_1a0;
  long *local_198;
  undefined8 local_190;
  long *plStack_188;
  long *plStack_180;
  undefined8 uStack_178;
  long *local_170;
  long *plStack_168;
  long *local_160;
  long *local_158;
  long *local_150;
  undefined8 uStack_148;
  long *plStack_140;
  long *local_138;
  long lStack_130;
  long local_128;
  long *plStack_120;
  ulong local_118;
  long lStack_110;
  undefined8 local_108;
  long *local_100;
  long *plStack_f8;
  undefined8 uStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  undefined8 local_d8;
  long *local_d0;
  long *plStack_c8;
  long local_c0;
  long lStack_b8;
  long *local_b0;
  ulong uStack_a8;
  long local_a0;
  undefined8 uStack_98;
  long local_90;
  long lStack_88;
  undefined4 local_80;
  undefined3 uStack_7c;
  undefined4 local_78;
  undefined3 uStack_74;
  undefined1 auStack_71 [17];
  
  if (*param_2 == 0) {
    cVar18 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(param_2,0x10);
    if (bVar6) {
      *param_2 = 0x3fffffff;
      cVar18 = ExclusiveMonitorsStatus();
    }
    if (cVar18 != '\0') goto LAB_00713ccc;
    if ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0 & 0x7fffffffffffffff) != 0) goto LAB_00713ce8;
LAB_007133ec:
    puVar27 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
    if ((char)param_2[2] == '\0') {
      uVar28 = 0;
      iVar2 = param_2[0xe];
joined_r0x00713d08:
      if (iVar2 == 0) {
        cVar18 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(param_2 + 0xe,0x10);
        if (bVar6) {
          param_2[0xe] = 0x3fffffff;
          cVar18 = ExclusiveMonitorsStatus();
        }
        if (cVar18 != '\0') goto LAB_00713d10;
      }
      else {
        ClearExclusiveLocal();
LAB_00713d10:
                    /* try { // try from 00713d10 to 00713d17 has its CatchHandler @ 00713ea8 */
        <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::write_contended
                  (param_2 + 0xe);
        in_x12 = extraout_x12_21;
        in_x13 = extraout_x13_21;
        in_x14 = extraout_x14_17;
        in_x15 = extraout_x15_21;
      }
      piVar25 = param_2 + 0xe;
      if ((*puVar27 & 0x7fffffffffffffff) == 0) {
        if ((char)param_2[0x10] != '\0') {
LAB_00713d9c:
          if (((*puVar27 & 0x7fffffffffffffff) != 0) &&
             (uVar28 = std::panicking::panic_count::is_zero_slow_path(), (uVar28 & 1) == 0)) {
            *(undefined1 *)(param_2 + 0x10) = 1;
          }
LAB_00713db0:
          do {
            iVar2 = *piVar25;
            cVar18 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar25,0x10);
            if (bVar6) {
              *piVar25 = iVar2 + -0x3fffffff;
              cVar18 = ExclusiveMonitorsStatus();
            }
          } while (cVar18 != '\0');
          if (iVar2 + 0xc0000001U >> 0x1e != 0) {
            <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::
            wake_writer_or_readers(piVar25);
          }
                    /* try { // try from 00713dd0 to 00713e07 has its CatchHandler @ 00713ea8 */
                    /* WARNING: Subroutine does not return */
          core::result::unwrap_failed
                    ("pending lock poisoned",0x15,auStack_71,&DAT_00ad5fe0,
                     &PTR_s_common_rust_src_stores_store_dat_00ad6068);
        }
        uVar14 = 0;
      }
      else {
                    /* try { // try from 00713c74 to 00713c8f has its CatchHandler @ 00713ea8 */
        uVar14 = std::panicking::panic_count::is_zero_slow_path();
        if ((char)param_2[0x10] != '\0') {
          if (uVar14 == 0) goto LAB_00713db0;
          goto LAB_00713d9c;
        }
        uVar14 = uVar14 ^ 1;
        in_x12 = extraout_x12_18;
        in_x13 = extraout_x13_18;
        in_x14 = extraout_x14_14;
        in_x15 = extraout_x15_18;
      }
      uVar26 = *(ulong *)(param_2 + 0x16);
      puVar33 = *(undefined8 **)(param_2 + 0x14);
      uVar22 = *(undefined8 *)(param_2 + 0x12);
      param_2[0x12] = 0;
      param_2[0x13] = 0;
      param_2[0x14] = 8;
      param_2[0x15] = 0;
      param_2[0x16] = 0;
      param_2[0x17] = 0;
      if (uVar26 >> 0x38 == 0) {
        if (uVar26 == 0) {
          uStack_1d8 = 8;
        }
        else {
          uVar29 = uVar26 << 7;
          __rustc::__rust_no_alloc_shim_is_unstable_v2();
          uVar30 = 8;
          uStack_1d8 = FUN_004b25a4(uVar29,8);
          in_x12 = extraout_x12;
          in_x13 = extraout_x13;
          in_x14 = extraout_x14;
          in_x15 = extraout_x15;
          if (uStack_1d8 == 0) goto LAB_00713460;
        }
        puVar31 = puVar33 + uVar26 * 0xe;
        local_1d0 = 0;
        local_1e0 = uVar26;
        puStack_1c8 = puVar33;
        local_1c0 = puVar33;
        uStack_1b8 = uVar22;
        local_1b0 = puVar31;
        if (uVar26 != 0) {
          do {
            while( true ) {
              plVar16 = (long *)*puVar33;
              puVar1 = puVar33 + 0xe;
              local_1c0 = puVar1;
              if (plVar16 == (long *)0xffffffffffffffff) goto LAB_00713bc0;
              plVar17 = (long *)puVar33[1];
              plVar32 = (long *)puVar33[2];
              lVar21 = (long)plVar16 - (long)(ulong)(plVar16 != (long *)0x0);
              plVar23 = (long *)puVar33[3];
              plVar3 = (long *)puVar33[4];
              if (lVar21 < 2) break;
              if (lVar21 == 2) {
                plStack_188 = _UNK_00ad5fb0;
                local_190 = (long *)PTR_DAT_00ad5fa8;
                uStack_178 = _UNK_00ad5fc0;
                plStack_180 = _DAT_00ad5fb8;
                local_1a8 = plVar17;
                plStack_1a0 = plVar32;
                local_198 = plVar23;
                if (plVar23 != (long *)0x0) {
                  plVar16 = plVar32 + (long)plVar23 * 0xe;
                  do {
                    lVar21 = plVar32[2];
                    lVar15 = plVar32[9];
                    lVar34 = plVar32[9];
                    lVar19 = plVar32[8];
                    uVar10 = local_78;
                    if ((char)lVar21 == '\x19') {
                      plVar17 = (long *)plVar32[3];
                      do {
                        lVar20 = *plVar17;
                        bVar4 = 1;
                        bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                        if (bVar6) {
                          *plVar17 = lVar20 + 1;
                          bVar4 = ExclusiveMonitorsStatus();
                        }
                        in_x12 = (long *)(ulong)bVar4;
                      } while (bVar4 != 0);
                      if (lVar20 < 0) goto LAB_00713df4;
                      cVar18 = (char)plVar32[5];
                      plVar23 = (long *)plVar32[4];
                      if (cVar18 != -1) goto LAB_00713708;
LAB_007136dc:
                      plVar24 = (long *)plVar32[10];
                      uVar9 = local_80;
                    }
                    else {
                      local_80._0_3_ = (undefined3)*(undefined4 *)((long)plVar32 + 0x11);
                      local_80._3_1_ = (undefined1)*(undefined4 *)((long)plVar32 + 0x14);
                      uStack_7c = (undefined3)((uint)*(undefined4 *)((long)plVar32 + 0x14) >> 8);
                      cVar18 = (char)plVar32[5];
                      plVar17 = (long *)plVar32[3];
                      plVar23 = (long *)plVar32[4];
                      if (cVar18 == -1) goto LAB_007136dc;
LAB_00713708:
                      uVar9 = local_80;
                      if (cVar18 == '\x19') {
                        in_x12 = (long *)plVar32[6];
                        do {
                          lVar20 = *in_x12;
                          bVar4 = 1;
                          bVar6 = (bool)ExclusiveMonitorPass(in_x12,0x10);
                          if (bVar6) {
                            *in_x12 = lVar20 + 1;
                            bVar4 = ExclusiveMonitorsStatus();
                          }
                          in_x15 = (ulong)bVar4;
                        } while (bVar4 != 0);
                        if (lVar20 < 0) goto LAB_00713df4;
                        in_x13 = (long *)plVar32[7];
                        plVar24 = (long *)plVar32[10];
                      }
                      else {
                        local_78._0_3_ = (undefined3)*(undefined4 *)((long)plVar32 + 0x29);
                        local_78._3_1_ = (undefined1)*(undefined4 *)((long)plVar32 + 0x2c);
                        uStack_74 = (undefined3)((uint)*(undefined4 *)((long)plVar32 + 0x2c) >> 8);
                        in_x12 = (long *)plVar32[6];
                        in_x13 = (long *)plVar32[7];
                        plVar24 = (long *)plVar32[10];
                        uVar10 = local_78;
                      }
                    }
                    local_80 = uVar9;
                    local_78 = uVar10;
                    if (plVar24 != (long *)0x0) {
                      do {
                        lVar20 = *plVar24;
                        cVar5 = '\x01';
                        bVar6 = (bool)ExclusiveMonitorPass(plVar24,0x10);
                        if (bVar6) {
                          *plVar24 = lVar20 + 1;
                          cVar5 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar5 != '\0');
                      if (lVar20 < 0) goto LAB_00713df4;
                      in_x15 = plVar32[0xb];
                    }
                    local_100 = (long *)*plVar32;
                    plStack_f8 = (long *)plVar32[1];
                    local_80._3_1_ = (undefined1)((uint)uVar9 >> 0x18);
                    uStack_f0._0_5_ = CONCAT41(uVar9,(char)lVar21);
                    uStack_f0 = (long *)CONCAT44(CONCAT31(uStack_7c,local_80._3_1_),
                                                 (undefined4)uStack_f0);
                    local_78._3_1_ = (undefined1)((uint)uVar10 >> 0x18);
                    local_a0 = plVar32[0xc];
                    local_d8._0_5_ = CONCAT41(uVar10,cVar18);
                    local_d8 = CONCAT44(CONCAT31(uStack_74,local_78._3_1_),(undefined4)local_d8);
                    uStack_98 = CONCAT44(CONCAT22(uStack_98._6_2_,
                                                  *(undefined2 *)((long)plVar32 + 0x6c)),
                                         (int)plVar32[0xd]);
                    /* try { // try from 007137c4 to 007137d3 has its CatchHandler @ 00713eb8 */
                    plStack_e8 = plVar17;
                    plStack_e0 = plVar23;
                    local_d0 = in_x12;
                    plStack_c8 = in_x13;
                    local_c0 = lVar19;
                    lStack_b8 = lVar34;
                    local_b0 = plVar24;
                    uStack_a8 = in_x15;
                    FUN_0075f710(&local_170,&local_190,lVar15,&local_100);
                    in_x12 = extraout_x12_03;
                    in_x13 = extraout_x13_03;
                    in_x15 = extraout_x15_03;
                    if (local_170 != (long *)0x2) {
                      if (0x18 < (byte)local_160) {
                        do {
                          lVar21 = *local_158;
                          cVar18 = '\x01';
                          bVar6 = (bool)ExclusiveMonitorPass(local_158,0x10);
                          if (bVar6) {
                            *local_158 = lVar21 + -1;
                            cVar18 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar18 != '\0');
                        if (lVar21 + -1 == 0) {
                          DataMemoryBarrier(2,1);
                          <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(&local_158);
                          in_x12 = extraout_x12_04;
                          in_x13 = extraout_x13_04;
                          in_x15 = extraout_x15_04;
                        }
                      }
                      if (((byte)uStack_148 != 0xff) && (0x18 < (byte)uStack_148)) {
                        do {
                          lVar21 = *plStack_140;
                          cVar18 = '\x01';
                          bVar6 = (bool)ExclusiveMonitorPass(plStack_140,0x10);
                          if (bVar6) {
                            *plStack_140 = lVar21 + -1;
                            cVar18 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar18 != '\0');
                        if (lVar21 + -1 == 0) {
                          DataMemoryBarrier(2,1);
                          <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(&plStack_140);
                          in_x12 = extraout_x12_05;
                          in_x13 = extraout_x13_05;
                          in_x15 = extraout_x15_05;
                        }
                      }
                      if (plStack_120 != (long *)0x0) {
                        do {
                          lVar21 = *plStack_120;
                          cVar18 = '\x01';
                          bVar6 = (bool)ExclusiveMonitorPass(plStack_120,0x10);
                          if (bVar6) {
                            *plStack_120 = lVar21 + -1;
                            cVar18 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar18 != '\0');
                        if (lVar21 + -1 == 0) {
                          DataMemoryBarrier(2,1);
                          <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(&plStack_120);
                          in_x12 = extraout_x12_06;
                          in_x13 = extraout_x13_06;
                          in_x15 = extraout_x15_06;
                        }
                      }
                    }
                    plVar32 = plVar32 + 0xe;
                  } while (plVar32 != plVar16);
                }
                plStack_f8 = plStack_1a0;
                local_100 = local_1a8;
                uStack_f0 = local_198;
                    /* try { // try from 00713994 to 007139a3 has its CatchHandler @ 00713e98 */
                FUN_007490a0(param_2 + 4,plVar3,&local_100);
                uVar26 = local_1d0;
                plStack_e8 = plStack_188;
                uStack_f0 = local_190;
                local_d8 = uStack_178;
                plStack_e0 = plStack_180;
                local_100 = (long *)0x3;
                in_x12 = extraout_x12_14;
                in_x13 = extraout_x13_14;
                in_x14 = extraout_x14_10;
                in_x15 = extraout_x15_14;
                plStack_f8 = plVar3;
                if (local_1d0 == local_1e0) {
                    /* try { // try from 007139c4 to 007139cb has its CatchHandler @ 00713e2c */
                  <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<libdiscore_common[1cb84820f9455fa0]::stores::store_database::opcodes::KKVChangeOpcode<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::core::snowflake::StickerId,libdiscore_common[1cb84820f9455fa0]::stores::guild_sticker::GuildSticker>>>
                  ::grow_one(&local_1e0);
                  in_x12 = extraout_x12_15;
                  in_x13 = extraout_x13_15;
                  in_x14 = extraout_x14_11;
                  in_x15 = extraout_x15_15;
                }
                puVar33 = (undefined8 *)(uStack_1d8 + uVar26 * 0x80);
                puVar33[1] = plStack_f8;
                *puVar33 = local_100;
                puVar33[9] = lStack_b8;
                puVar33[8] = local_c0;
                puVar33[0xb] = uStack_a8;
                puVar33[10] = local_b0;
                puVar33[0xd] = uStack_98;
                puVar33[0xc] = local_a0;
                puVar33[0xf] = lStack_88;
                puVar33[0xe] = local_90;
                puVar33[3] = plStack_e8;
                puVar33[2] = uStack_f0;
                puVar33[5] = local_d8;
                puVar33[4] = plStack_e0;
                puVar33[7] = plStack_c8;
                puVar33[6] = local_d0;
              }
              else {
                if (lVar21 == 3) {
                    /* try { // try from 0071358c to 007135cf has its CatchHandler @ 00713eb0 */
                  local_190 = plVar17;
                  FUN_006fde54(&local_100,param_2 + 4,(long)plVar17 * 0x517cc1b727220a95,&local_190)
                  ;
                  in_x12 = extraout_x12_00;
                  in_x13 = extraout_x13_00;
                  in_x14 = extraout_x14_00;
                  in_x15 = extraout_x15_00;
                  if (local_100 != (long *)0x0) {
                    plStack_168 = uStack_f0;
                    local_170 = plStack_f8;
                    local_158 = plStack_e0;
                    local_160 = plStack_e8;
                    if (plStack_f8 != (long *)0x0) {
                      *(long *)(param_2 + 0xc) = *(long *)(param_2 + 0xc) - (long)plStack_e0;
                      FUN_00704618(&local_170);
                      in_x12 = extraout_x12_01;
                      in_x13 = extraout_x13_01;
                      in_x14 = extraout_x14_01;
                      in_x15 = extraout_x15_01;
                    }
                  }
                  uVar26 = local_1d0;
                  local_100 = (long *)0x2;
                  plStack_f8 = plVar17;
                  if (local_1d0 == local_1e0) {
                    /* try { // try from 007135e8 to 007135ef has its CatchHandler @ 00713e68 */
                    <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<libdiscore_common[1cb84820f9455fa0]::stores::store_database::opcodes::KKVChangeOpcode<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::core::snowflake::StickerId,libdiscore_common[1cb84820f9455fa0]::stores::guild_sticker::GuildSticker>>>
                    ::grow_one(&local_1e0);
                    in_x12 = extraout_x12_02;
                    in_x13 = extraout_x13_02;
                    in_x14 = extraout_x14_02;
                    in_x15 = extraout_x15_02;
                  }
                }
                else {
                    /* try { // try from 00713874 to 0071387b has its CatchHandler @ 00713ea4 */
                  FUN_007032a8(param_2 + 4);
                  uVar26 = local_1d0;
                  param_2[0xc] = 0;
                  param_2[0xd] = 0;
                  local_100 = (long *)&DAT_00000006;
                  in_x12 = extraout_x12_07;
                  in_x13 = extraout_x13_07;
                  in_x14 = extraout_x14_03;
                  in_x15 = extraout_x15_07;
                  if (local_1d0 == local_1e0) {
                    /* try { // try from 00713898 to 0071389f has its CatchHandler @ 00713e54 */
                    <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<libdiscore_common[1cb84820f9455fa0]::stores::store_database::opcodes::KKVChangeOpcode<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::core::snowflake::StickerId,libdiscore_common[1cb84820f9455fa0]::stores::guild_sticker::GuildSticker>>>
                    ::grow_one(&local_1e0);
                    in_x12 = extraout_x12_08;
                    in_x13 = extraout_x13_08;
                    in_x14 = extraout_x14_04;
                    in_x15 = extraout_x15_08;
                  }
                }
LAB_007134d8:
                puVar33 = (undefined8 *)(uStack_1d8 + uVar26 * 0x80);
                puVar33[1] = plStack_f8;
                *puVar33 = local_100;
                puVar33[9] = lStack_b8;
                puVar33[8] = local_c0;
                puVar33[0xb] = uStack_a8;
                puVar33[10] = local_b0;
                puVar33[0xd] = uStack_98;
                puVar33[0xc] = local_a0;
                puVar33[0xf] = lStack_88;
                puVar33[0xe] = local_90;
                puVar33[3] = plStack_e8;
                puVar33[2] = uStack_f0;
                puVar33[5] = local_d8;
                puVar33[4] = plStack_e0;
                puVar33[7] = plStack_c8;
                puVar33[6] = local_d0;
              }
              local_1d0 = uVar26 + 1;
              puVar33 = puVar1;
              if (puVar1 == puVar31) goto LAB_00713bc0;
            }
            if (plVar16 != (long *)(ulong)(plVar16 != (long *)0x0)) {
                    /* try { // try from 007138ac to 007138bf has its CatchHandler @ 00713e94 */
              local_190 = plVar17;
              local_170 = plVar32;
              FUN_00748e28(&local_100,param_2 + 4,&local_190,&local_170);
              in_x12 = extraout_x12_09;
              in_x13 = extraout_x13_09;
              in_x14 = extraout_x14_05;
              in_x15 = extraout_x15_09;
              if (local_100 != (long *)0x2) {
                if (0x18 < (byte)uStack_f0) {
                  do {
                    lVar21 = *plStack_e8;
                    cVar18 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(plStack_e8,0x10);
                    if (bVar6) {
                      *plStack_e8 = lVar21 + -1;
                      cVar18 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar18 != '\0');
                  if (lVar21 + -1 == 0) {
                    DataMemoryBarrier(2,1);
                    <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(&plStack_e8);
                    in_x12 = extraout_x12_10;
                    in_x13 = extraout_x13_10;
                    in_x14 = extraout_x14_06;
                    in_x15 = extraout_x15_10;
                  }
                }
                if (((byte)local_d8 != 0xff) && (0x18 < (byte)local_d8)) {
                  do {
                    lVar21 = *local_d0;
                    cVar18 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(local_d0,0x10);
                    if (bVar6) {
                      *local_d0 = lVar21 + -1;
                      cVar18 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar18 != '\0');
                  if (lVar21 + -1 == 0) {
                    DataMemoryBarrier(2,1);
                    <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(&local_d0);
                    in_x12 = extraout_x12_11;
                    in_x13 = extraout_x13_11;
                    in_x14 = extraout_x14_07;
                    in_x15 = extraout_x15_11;
                  }
                }
                if (local_b0 != (long *)0x0) {
                  do {
                    lVar21 = *local_b0;
                    cVar18 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(local_b0,0x10);
                    if (bVar6) {
                      *local_b0 = lVar21 + -1;
                      cVar18 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar18 != '\0');
                  if (lVar21 + -1 == 0) {
                    DataMemoryBarrier(2,1);
                    <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(&local_b0);
                    in_x12 = extraout_x12_12;
                    in_x13 = extraout_x13_12;
                    in_x14 = extraout_x14_08;
                    in_x15 = extraout_x15_12;
                  }
                }
              }
              uVar26 = local_1d0;
              local_100 = (long *)&DAT_00000005;
              plStack_f8 = plVar17;
              uStack_f0 = plVar32;
              if (local_1d0 == local_1e0) {
                    /* try { // try from 00713978 to 0071397f has its CatchHandler @ 00713e40 */
                <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<libdiscore_common[1cb84820f9455fa0]::stores::store_database::opcodes::KKVChangeOpcode<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::core::snowflake::StickerId,libdiscore_common[1cb84820f9455fa0]::stores::guild_sticker::GuildSticker>>>
                ::grow_one(&local_1e0);
                in_x12 = extraout_x12_13;
                in_x13 = extraout_x13_13;
                in_x14 = extraout_x14_09;
                in_x15 = extraout_x15_13;
              }
              goto LAB_007134d8;
            }
            lVar15 = puVar33[8];
            local_138 = (long *)puVar33[7];
            uVar22 = puVar33[0xd];
            lStack_110 = puVar33[0xc];
            local_118 = puVar33[0xb];
            plStack_120 = (long *)puVar33[10];
            lVar21 = puVar33[9];
            plStack_140 = (long *)puVar33[6];
            uStack_148 = puVar33[5];
            local_170 = plVar16;
            plStack_168 = plVar17;
            local_160 = plVar32;
            local_158 = plVar23;
            local_150 = plVar3;
            lStack_130 = lVar15;
            local_128 = lVar21;
            local_108 = uVar22;
            if (((uint)plVar32 & 0xff) == 0x19) {
              do {
                lVar19 = *plVar23;
                plVar24 = (long *)(lVar19 + 1);
                bVar4 = 1;
                bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
                if (bVar6) {
                  *plVar23 = (long)plVar24;
                  bVar4 = ExclusiveMonitorsStatus();
                }
                in_x12 = (long *)(ulong)bVar4;
              } while (bVar4 != 0);
              plVar11 = local_1a8;
              if (lVar19 < 0) goto LAB_00713df4;
            }
            else {
              plVar24 = (long *)((ulong)plVar32 >> 0x20);
              local_1a8._0_7_ = (undefined7)((ulong)plVar32 >> 8);
              plVar11 = local_1a8;
            }
            plVar8 = local_190;
            local_1a8 = plVar11;
            if ((byte)uStack_148 != -1) {
              in_x12 = local_138;
              plVar24 = plStack_140;
              if ((byte)uStack_148 == '\x19') {
                do {
                  lVar19 = *plStack_140;
                  bVar4 = 1;
                  bVar6 = (bool)ExclusiveMonitorPass(plStack_140,0x10);
                  if (bVar6) {
                    *plStack_140 = lVar19 + 1;
                    bVar4 = ExclusiveMonitorsStatus();
                  }
                  in_x14 = (ulong)bVar4;
                } while (bVar4 != 0);
                if (lVar19 < 0) goto LAB_00713df4;
              }
              else {
                local_190._0_7_ = (undefined7)((ulong)uStack_148 >> 8);
                plVar8 = local_190;
              }
            }
            local_190 = plVar8;
            if (plStack_120 != (long *)0x0) {
              do {
                lVar19 = *plStack_120;
                cVar18 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plStack_120,0x10);
                if (bVar6) {
                  *plStack_120 = lVar19 + 1;
                  cVar18 = ExclusiveMonitorsStatus();
                }
              } while (cVar18 != '\0');
              in_x14 = local_118;
              if (lVar19 < 0) {
LAB_00713df4:
                    /* WARNING: Does not return */
                pcVar13 = (code *)SoftwareBreakpoint(1,0x713df8);
                (*pcVar13)();
              }
            }
            local_190._0_4_ = SUB84(plVar8,0);
            local_1a8._0_4_ = SUB84(plVar11,0);
            uVar10 = (undefined4)local_1a8;
            local_1a8._3_4_ = (undefined4)((ulong)plVar11 >> 0x18);
            uVar7 = CONCAT41((undefined4)local_190,(byte)uStack_148);
            local_108._4_2_ = (undefined2)((ulong)uVar22 >> 0x20);
            local_190._3_4_ = (undefined4)((ulong)plVar8 >> 0x18);
            local_108._0_4_ = (undefined4)uVar22;
            uStack_f0 = (long *)CONCAT44(local_1a8._3_4_,(int)CONCAT41(uVar10,(char)plVar32));
            local_d8 = CONCAT44(local_190._3_4_,(int)uVar7);
            uStack_98 = CONCAT44(CONCAT22(uStack_98._6_2_,local_108._4_2_),(undefined4)local_108);
                    /* try { // try from 00713b14 to 00713b1f has its CatchHandler @ 00713e84 */
            local_100 = plVar16;
            plStack_f8 = plVar17;
            plStack_e8 = plVar23;
            plStack_e0 = plVar3;
            local_d0 = plVar24;
            plStack_c8 = in_x12;
            local_c0 = lVar15;
            lStack_b8 = lVar21;
            local_b0 = plStack_120;
            uStack_a8 = in_x14;
            local_a0 = lStack_110;
            FUN_00748b48(param_2 + 4,&local_100);
            uVar26 = local_1d0;
            uStack_98 = local_108;
            local_a0 = lStack_110;
            lStack_b8 = local_128;
            local_c0 = lStack_130;
            uStack_a8 = local_118;
            local_b0 = plStack_120;
            plStack_f8 = plStack_168;
            local_100 = local_170;
            plStack_e8 = local_158;
            uStack_f0 = local_160;
            local_d8 = uStack_148;
            plStack_e0 = local_150;
            plStack_c8 = local_138;
            local_d0 = plStack_140;
            in_x12 = extraout_x12_16;
            in_x13 = extraout_x13_16;
            in_x14 = extraout_x14_12;
            in_x15 = extraout_x15_16;
            local_90 = lVar15;
            lStack_88 = lVar21;
            if (local_1d0 == local_1e0) {
                    /* try { // try from 00713b54 to 00713b5b has its CatchHandler @ 00713e18 */
              <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<libdiscore_common[1cb84820f9455fa0]::stores::store_database::opcodes::KKVChangeOpcode<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::core::snowflake::StickerId,libdiscore_common[1cb84820f9455fa0]::stores::guild_sticker::GuildSticker>>>
              ::grow_one(&local_1e0);
              in_x12 = extraout_x12_17;
              in_x13 = extraout_x13_17;
              in_x14 = extraout_x14_13;
              in_x15 = extraout_x15_17;
            }
            local_1d0 = uVar26 + 1;
            puVar33 = (undefined8 *)(uStack_1d8 + uVar26 * 0x80);
            puVar33[1] = plStack_f8;
            *puVar33 = local_100;
            puVar33[9] = lStack_b8;
            puVar33[8] = local_c0;
            puVar33[0xb] = uStack_a8;
            puVar33[10] = local_b0;
            puVar33[0xd] = uStack_98;
            puVar33[0xc] = local_a0;
            puVar33[0xf] = lStack_88;
            puVar33[0xe] = local_90;
            puVar33[3] = plStack_e8;
            puVar33[2] = uStack_f0;
            puVar33[5] = local_d8;
            puVar33[4] = plStack_e0;
            puVar33[7] = plStack_c8;
            puVar33[6] = local_d0;
            puVar33 = puVar1;
          } while (puVar1 != puVar31);
        }
LAB_00713bc0:
                    /* try { // try from 00713bc0 to 00713bc7 has its CatchHandler @ 00713e7c */
        FUN_0070a970(&puStack_1c8);
        param_1[1] = uStack_1d8;
        *param_1 = local_1e0;
        param_1[2] = local_1d0;
        puVar12 = PTR_GLOBAL_PANIC_COUNT_00b00bf0;
                    /* try { // try from 00713ca0 to 00713ca3 has its CatchHandler @ 00713ea8 */
        if ((((uVar14 & 1) == 0) &&
            ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0 & 0x7fffffffffffffff) != 0)) &&
           (uVar26 = std::panicking::panic_count::is_zero_slow_path(), (uVar26 & 1) == 0)) {
          *(undefined1 *)(param_2 + 0x10) = 1;
        }
        do {
          iVar2 = *piVar25;
          cVar18 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar25,0x10);
          if (bVar6) {
            *piVar25 = iVar2 + -0x3fffffff;
            cVar18 = ExclusiveMonitorsStatus();
          }
        } while (cVar18 != '\0');
        if (iVar2 + 0xc0000001U >> 0x1e != 0) {
          <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::
          wake_writer_or_readers(param_2 + 0xe);
        }
        if ((((uVar28 & 1) == 0) && ((*(ulong *)puVar12 & 0x7fffffffffffffff) != 0)) &&
           (uVar28 = std::panicking::panic_count::is_zero_slow_path(), (uVar28 & 1) == 0)) {
          *(undefined1 *)(param_2 + 2) = 1;
        }
        do {
          iVar2 = *param_2;
          cVar18 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(param_2,0x10);
          if (bVar6) {
            *param_2 = iVar2 + -0x3fffffff;
            cVar18 = ExclusiveMonitorsStatus();
          }
        } while (cVar18 != '\0');
        if (iVar2 + 0xc0000001U >> 0x1e != 0) {
          <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::
          wake_writer_or_readers(param_2);
        }
        return;
      }
      uVar30 = 0;
      uVar29 = uVar28;
LAB_00713460:
                    /* try { // try from 00713460 to 0071346b has its CatchHandler @ 00713ee8 */
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(uVar30,uVar29);
    }
  }
  else {
    ClearExclusiveLocal();
LAB_00713ccc:
    <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::write_contended(param_2)
    ;
    in_x12 = extraout_x12_19;
    in_x13 = extraout_x13_19;
    in_x14 = extraout_x14_15;
    in_x15 = extraout_x15_19;
    if ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0 & 0x7fffffffffffffff) == 0) goto LAB_007133ec;
LAB_00713ce8:
    puVar27 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
    uVar14 = std::panicking::panic_count::is_zero_slow_path();
    if ((char)param_2[2] == '\0') {
      uVar28 = (ulong)(uVar14 ^ 1);
      iVar2 = param_2[0xe];
      in_x12 = extraout_x12_20;
      in_x13 = extraout_x13_20;
      in_x14 = extraout_x14_16;
      in_x15 = extraout_x15_20;
      goto joined_r0x00713d08;
    }
    if (uVar14 == 0) goto LAB_00713d34;
  }
  if (((*puVar27 & 0x7fffffffffffffff) != 0) &&
     (uVar28 = std::panicking::panic_count::is_zero_slow_path(), (uVar28 & 1) == 0)) {
    *(undefined1 *)(param_2 + 2) = 1;
  }
LAB_00713d34:
  do {
    iVar2 = *param_2;
    cVar18 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(param_2,0x10);
    if (bVar6) {
      *param_2 = iVar2 + -0x3fffffff;
      cVar18 = ExclusiveMonitorsStatus();
    }
  } while (cVar18 != '\0');
  if (iVar2 + 0xc0000001U >> 0x1e != 0) {
    <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::wake_writer_or_readers
              (param_2);
  }
                    /* WARNING: Subroutine does not return */
  core::result::unwrap_failed
            ("storage lock poisoned",0x15,auStack_71,&DAT_00ad5fe0,
             &PTR_s_common_rust_src_stores_store_dat_00ad6050);
}


// ===== 00713f10  FUN_00713f10 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00713f10(ulong *param_1,int *param_2)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  code *pcVar9;
  uint uVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  long *extraout_x10;
  long *plVar14;
  long *extraout_x10_00;
  long *extraout_x10_01;
  long *extraout_x10_02;
  long *extraout_x10_03;
  long *extraout_x10_04;
  long *extraout_x10_05;
  long lVar15;
  long *extraout_x10_06;
  long *extraout_x10_07;
  long *extraout_x10_08;
  long *extraout_x10_09;
  long *extraout_x10_10;
  long *extraout_x10_11;
  long *extraout_x10_12;
  long *extraout_x10_13;
  int *piVar16;
  ulong uVar17;
  ulong *puVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 uVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  long *plVar26;
  ulong local_130;
  ulong uStack_128;
  ulong local_120;
  long *plStack_118;
  long *local_110;
  long *plStack_108;
  long *local_100;
  long *local_f8;
  long *plStack_f0;
  long lStack_e8;
  long *local_e0;
  long *plStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  long *local_c0;
  long *plStack_b8;
  long *local_b0;
  long lStack_a8;
  long *local_a0;
  long *plStack_98;
  long *local_90;
  long *plStack_88;
  long *local_80;
  long lStack_78;
  undefined1 auStack_69 [9];
  
  if (*param_2 == 0) {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(param_2,0x10);
    if (bVar7) {
      *param_2 = 0x3fffffff;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 != '\0') goto LAB_00714538;
    if ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0 & 0x7fffffffffffffff) != 0) goto LAB_00714554;
LAB_00713f60:
    puVar18 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
    if ((char)param_2[2] == '\0') {
      uVar19 = 0;
      iVar2 = param_2[0xe];
joined_r0x00714574:
      if (iVar2 == 0) {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(param_2 + 0xe,0x10);
        if (bVar7) {
          param_2[0xe] = 0x3fffffff;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 != '\0') goto LAB_0071457c;
      }
      else {
        ClearExclusiveLocal();
LAB_0071457c:
                    /* try { // try from 0071457c to 00714583 has its CatchHandler @ 007146f0 */
        <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::write_contended
                  (param_2 + 0xe);
      }
      piVar16 = param_2 + 0xe;
      if ((*puVar18 & 0x7fffffffffffffff) == 0) {
        if ((char)param_2[0x10] != '\0') {
LAB_00714608:
          if (((*puVar18 & 0x7fffffffffffffff) != 0) &&
             (uVar19 = std::panicking::panic_count::is_zero_slow_path(), (uVar19 & 1) == 0)) {
            *(undefined1 *)(param_2 + 0x10) = 1;
          }
LAB_0071461c:
          do {
            iVar2 = *piVar16;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar16,0x10);
            if (bVar7) {
              *piVar16 = iVar2 + -0x3fffffff;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar2 + 0xc0000001U >> 0x1e != 0) {
            <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::
            wake_writer_or_readers(piVar16);
          }
                    /* try { // try from 0071463c to 00714673 has its CatchHandler @ 007146f0 */
                    /* WARNING: Subroutine does not return */
          core::result::unwrap_failed
                    ("pending lock poisoned",0x15,auStack_69,&DAT_00ad5fe0,
                     &PTR_s_common_rust_src_stores_store_dat_00ad6068);
        }
        uVar10 = 0;
      }
      else {
                    /* try { // try from 007144e0 to 007144fb has its CatchHandler @ 007146f0 */
        uVar10 = std::panicking::panic_count::is_zero_slow_path();
        if ((char)param_2[0x10] != '\0') {
          if (uVar10 == 0) goto LAB_0071461c;
          goto LAB_00714608;
        }
        uVar10 = uVar10 ^ 1;
      }
      uVar17 = *(ulong *)(param_2 + 0x16);
      plVar26 = *(long **)(param_2 + 0x14);
      plVar14 = *(long **)(param_2 + 0x12);
      param_2[0x12] = 0;
      param_2[0x13] = 0;
      param_2[0x14] = 8;
      param_2[0x15] = 0;
      param_2[0x16] = 0;
      param_2[0x17] = 0;
      if (0x2aaaaaaaaaaaaaa < uVar17) {
        uVar21 = 0;
        uVar20 = uVar19;
LAB_00713fdc:
                    /* try { // try from 00713fdc to 00713fe7 has its CatchHandler @ 00714774 */
                    /* WARNING: Subroutine does not return */
        alloc::raw_vec::handle_error(uVar21,uVar20);
      }
      if (uVar17 == 0) {
        uStack_128 = 8;
      }
      else {
        uVar20 = uVar17 * 0x30;
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        uVar21 = 8;
        uStack_128 = FUN_004b25a4(uVar20,8);
        if (uStack_128 == 0) goto LAB_00713fdc;
      }
      plVar23 = plVar26 + uVar17 * 5;
      local_120 = 0;
      local_130 = uVar17;
      plStack_118 = plVar26;
      local_110 = plVar26;
      plStack_108 = plVar14;
      local_100 = plVar23;
      if (uVar17 != 0) {
        do {
          while( true ) {
            lVar13 = *plVar26;
            plVar4 = (long *)plVar26[1];
            plVar1 = plVar26 + 5;
            plVar24 = (long *)plVar26[2];
            local_110 = plVar1;
            if (1 < lVar13) break;
            if (lVar13 == 0) {
              lStack_a8 = plVar26[4];
              local_b0 = (long *)plVar26[3];
              plVar26 = (long *)0x0;
              plStack_b8 = plVar24;
              if (plVar24 != (long *)0x0) {
                do {
                  lVar13 = *plVar24;
                  cVar6 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(plVar24,0x10);
                  if (bVar7) {
                    *plVar24 = lVar13 + 1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                plVar26 = local_b0;
                local_c0 = plVar4;
                if (lVar13 < 0) {
LAB_00714660:
                    /* WARNING: Does not return */
                  pcVar9 = (code *)SoftwareBreakpoint(1,0x714664);
                  (*pcVar9)();
                }
              }
              plStack_88 = (long *)CONCAT71(plStack_88._1_7_,(char)lStack_a8);
                    /* try { // try from 00714238 to 00714243 has its CatchHandler @ 00714704 */
              local_c0 = plVar4;
              local_a0 = plVar4;
              plStack_98 = plVar24;
              local_90 = plVar26;
              FUN_00749330(param_2 + 4,&local_a0);
              uVar17 = local_120;
              lStack_78 = lStack_a8;
              local_a0 = (long *)0x0;
              plStack_88 = plStack_b8;
              local_90 = local_c0;
              local_80 = local_b0;
              plVar14 = extraout_x10_04;
              plStack_98 = plVar4;
              if (local_120 == local_130) {
                    /* try { // try from 00714264 to 0071426b has its CatchHandler @ 007146b4 */
                <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<libdiscore_common[1cb84820f9455fa0]::stores::store_database::opcodes::KKVChangeOpcode<u64,libdiscore_common[1cb84820f9455fa0]::core::snowflake::UserId,libdiscore_common[1cb84820f9455fa0]::stores::notes::UserNote>>>
                ::grow_one(&local_130);
                plVar14 = extraout_x10_05;
              }
            }
            else {
              if (lVar13 != 1) goto LAB_0071442c;
                    /* try { // try from 0071418c to 0071419f has its CatchHandler @ 00714734 */
              local_e0 = plVar4;
              local_c0 = plVar24;
              FUN_00749584(&local_a0,param_2 + 4,&local_e0,&local_c0);
              plVar14 = extraout_x10_01;
              if (((char)plStack_88 != '\x02') && (plStack_98 != (long *)0x0)) {
                do {
                  lVar13 = *plStack_98;
                  bVar5 = 1;
                  bVar7 = (bool)ExclusiveMonitorPass(plStack_98,0x10);
                  if (bVar7) {
                    *plStack_98 = lVar13 + -1;
                    bVar5 = ExclusiveMonitorsStatus();
                  }
                  plVar14 = (long *)(ulong)bVar5;
                } while (bVar5 != 0);
                if (lVar13 + -1 == 0) {
                  DataMemoryBarrier(2,1);
                  <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(&plStack_98);
                  plVar14 = extraout_x10_02;
                }
              }
              uVar17 = local_120;
              lStack_78 = CONCAT71(lStack_78._1_7_,5);
              local_a0 = plVar24;
              plStack_98 = plVar4;
              if (local_120 == local_130) {
                    /* try { // try from 007141f4 to 007141fb has its CatchHandler @ 007146c8 */
                <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<libdiscore_common[1cb84820f9455fa0]::stores::store_database::opcodes::KKVChangeOpcode<u64,libdiscore_common[1cb84820f9455fa0]::core::snowflake::UserId,libdiscore_common[1cb84820f9455fa0]::stores::notes::UserNote>>>
                ::grow_one(&local_130);
                plVar14 = extraout_x10_03;
              }
            }
LAB_00714054:
            puVar12 = (undefined8 *)(uStack_128 + uVar17 * 0x30);
            local_120 = uVar17 + 1;
            puVar12[1] = plStack_98;
            *puVar12 = local_a0;
            puVar12[3] = plStack_88;
            puVar12[2] = local_90;
            puVar12[5] = lStack_78;
            puVar12[4] = local_80;
            plVar26 = plVar1;
            if (plVar1 == plVar23) goto LAB_0071442c;
          }
          if (lVar13 == 2) {
            lStack_e8 = plVar26[4];
            plVar26 = (long *)plVar26[3];
            plStack_d8 = _UNK_00ad5fb0;
            local_e0 = (long *)PTR_DAT_00ad5fa8;
            plStack_c8 = _UNK_00ad5fc0;
            plStack_d0 = _DAT_00ad5fb8;
            local_f8 = plVar24;
            plStack_f0 = plVar26;
            if (lStack_e8 != 0) {
              plVar24 = plVar26 + lStack_e8 * 4;
              do {
                plVar3 = (long *)*plVar26;
                plVar25 = (long *)plVar26[1];
                lVar13 = plVar26[3];
                if (plVar25 != (long *)0x0) {
                  do {
                    lVar15 = *plVar25;
                    cVar6 = '\x01';
                    bVar7 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                    if (bVar7) {
                      *plVar25 = lVar15 + 1;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  if (lVar15 < 0) goto LAB_00714660;
                  plVar14 = (long *)plVar26[2];
                }
                plStack_88 = (long *)CONCAT71(plStack_88._1_7_,(char)lVar13);
                    /* try { // try from 007142e0 to 007142ef has its CatchHandler @ 00714744 */
                local_a0 = plVar3;
                plStack_98 = plVar25;
                local_90 = plVar14;
                FUN_0075e9d8(&local_c0,&local_e0,plVar3,&local_a0);
                plVar14 = extraout_x10_06;
                if (((char)lStack_a8 != '\x02') && (plStack_b8 != (long *)0x0)) {
                  do {
                    lVar13 = *plStack_b8;
                    bVar5 = 1;
                    bVar7 = (bool)ExclusiveMonitorPass(plStack_b8,0x10);
                    if (bVar7) {
                      *plStack_b8 = lVar13 + -1;
                      bVar5 = ExclusiveMonitorsStatus();
                    }
                    plVar14 = (long *)(ulong)bVar5;
                  } while (bVar5 != 0);
                  if (lVar13 + -1 == 0) {
                    DataMemoryBarrier(2,1);
                    <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(&plStack_b8);
                    plVar14 = extraout_x10_07;
                  }
                }
                plVar26 = plVar26 + 4;
              } while (plVar26 != plVar24);
            }
            plStack_98 = plStack_f0;
            local_a0 = local_f8;
            local_90 = (long *)lStack_e8;
                    /* try { // try from 00714368 to 00714377 has its CatchHandler @ 007146f8 */
            FUN_00749898(param_2 + 4,plVar4,&local_a0);
            uVar17 = local_120;
            plStack_88 = plStack_c8;
            local_90 = plStack_d0;
            plStack_98 = plStack_d8;
            local_a0 = local_e0;
            lStack_78 = CONCAT71(lStack_78._1_7_,3);
            plVar14 = extraout_x10_10;
            local_80 = plVar4;
            if (local_120 == local_130) {
                    /* try { // try from 007143a0 to 007143a7 has its CatchHandler @ 007146dc */
              <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<libdiscore_common[1cb84820f9455fa0]::stores::store_database::opcodes::KKVChangeOpcode<u64,libdiscore_common[1cb84820f9455fa0]::core::snowflake::UserId,libdiscore_common[1cb84820f9455fa0]::stores::notes::UserNote>>>
              ::grow_one(&local_130);
              plVar14 = extraout_x10_11;
            }
            goto LAB_00714054;
          }
          if (lVar13 != 3) {
                    /* try { // try from 00714328 to 0071432f has its CatchHandler @ 0071473c */
            FUN_00703684(param_2 + 4);
            uVar17 = local_120;
            param_2[0xc] = 0;
            param_2[0xd] = 0;
            lStack_78 = CONCAT71(lStack_78._1_7_,6);
            plVar14 = extraout_x10_08;
            if (local_120 == local_130) {
                    /* try { // try from 0071434c to 00714353 has its CatchHandler @ 007146a0 */
              <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<libdiscore_common[1cb84820f9455fa0]::stores::store_database::opcodes::KKVChangeOpcode<u64,libdiscore_common[1cb84820f9455fa0]::core::snowflake::UserId,libdiscore_common[1cb84820f9455fa0]::stores::notes::UserNote>>>
              ::grow_one(&local_130);
              plVar14 = extraout_x10_09;
            }
            goto LAB_00714054;
          }
                    /* try { // try from 007140c0 to 007140cf has its CatchHandler @ 00714738 */
          local_c0 = plVar4;
          FUN_007002b8(&local_a0,param_2 + 4,(long)plVar4 * 0x517cc1b727220a95,&local_c0);
          plVar24 = local_90;
          plVar26 = plStack_98;
          plVar14 = extraout_x10;
          if ((plStack_98 != (long *)0x0) &&
             (*(long *)(param_2 + 0xc) = *(long *)(param_2 + 0xc) - (long)local_80,
             local_90 != (long *)0x0)) {
            if (local_80 != (long *)0x0) {
              plVar25 = plStack_98 + 1;
              uVar17 = NEON_cmge(*plStack_98,0,1);
              uVar17 = uVar17 & 0x8080808080808080;
              plVar3 = plStack_98;
              plVar22 = local_80;
              do {
                for (; uVar17 == 0; uVar17 = uVar17 & 0x8080808080808080) {
                  uVar17 = NEON_cmge(*plVar25,0,1);
                  plVar3 = plVar3 + -0x28;
                  plVar25 = plVar25 + 1;
                }
                uVar20 = (uVar17 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                         (uVar17 >> 7 & 0xff00ff00ff00ff) << 8;
                uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
                plVar11 = (long *)plVar3[(long)-(int)((ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20
                                                                    ) >> 3) * 5 + -3];
                if (plVar11 != (long *)0x0) {
                  do {
                    lVar13 = *plVar11;
                    bVar5 = 1;
                    bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                    if (bVar7) {
                      *plVar11 = lVar13 + -1;
                      bVar5 = ExclusiveMonitorsStatus();
                    }
                    plVar14 = (long *)(ulong)bVar5;
                  } while (bVar5 != 0);
                  if (lVar13 + -1 == 0) {
                    DataMemoryBarrier(2,1);
                    <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
                    plVar14 = extraout_x10_00;
                  }
                }
                plVar22 = (long *)((long)plVar22 + -1);
                uVar17 = uVar17 - 1 & uVar17;
              } while (plVar22 != (long *)0x0);
            }
            if ((long)plVar24 * 0x29 != -0x31) {
              free(plVar26 + (long)plVar24 * -5 + -5);
              plVar14 = extraout_x10_12;
            }
          }
          uVar17 = local_120;
          lStack_78 = CONCAT71(lStack_78._1_7_,2);
          local_a0 = plVar4;
          if (local_120 == local_130) {
                    /* try { // try from 007143f4 to 007143fb has its CatchHandler @ 0071468c */
            <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<libdiscore_common[1cb84820f9455fa0]::stores::store_database::opcodes::KKVChangeOpcode<u64,libdiscore_common[1cb84820f9455fa0]::core::snowflake::UserId,libdiscore_common[1cb84820f9455fa0]::stores::notes::UserNote>>>
            ::grow_one(&local_130);
            plVar14 = extraout_x10_13;
          }
          puVar12 = (undefined8 *)(uStack_128 + uVar17 * 0x30);
          local_120 = uVar17 + 1;
          puVar12[1] = plStack_98;
          *puVar12 = local_a0;
          puVar12[3] = plStack_88;
          puVar12[2] = local_90;
          puVar12[5] = lStack_78;
          puVar12[4] = local_80;
          plVar26 = plVar1;
        } while (plVar1 != plVar23);
      }
LAB_0071442c:
                    /* try { // try from 0071442c to 00714433 has its CatchHandler @ 00714684 */
      FUN_0070a9f8(&plStack_118);
      param_1[1] = uStack_128;
      *param_1 = local_130;
      param_1[2] = local_120;
      puVar8 = PTR_GLOBAL_PANIC_COUNT_00b00bf0;
                    /* try { // try from 0071450c to 0071450f has its CatchHandler @ 007146f0 */
      if ((((uVar10 & 1) == 0) &&
          ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0 & 0x7fffffffffffffff) != 0)) &&
         (uVar17 = std::panicking::panic_count::is_zero_slow_path(), (uVar17 & 1) == 0)) {
        *(undefined1 *)(param_2 + 0x10) = 1;
      }
      do {
        iVar2 = *piVar16;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar7) {
          *piVar16 = iVar2 + -0x3fffffff;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar2 + 0xc0000001U >> 0x1e != 0) {
        <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::
        wake_writer_or_readers(param_2 + 0xe);
      }
      if ((((uVar19 & 1) == 0) && ((*(ulong *)puVar8 & 0x7fffffffffffffff) != 0)) &&
         (uVar19 = std::panicking::panic_count::is_zero_slow_path(), (uVar19 & 1) == 0)) {
        *(undefined1 *)(param_2 + 2) = 1;
      }
      do {
        iVar2 = *param_2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(param_2,0x10);
        if (bVar7) {
          *param_2 = iVar2 + -0x3fffffff;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar2 + 0xc0000001U >> 0x1e != 0) {
        <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::
        wake_writer_or_readers(param_2);
      }
      return;
    }
  }
  else {
    ClearExclusiveLocal();
LAB_00714538:
    <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::write_contended(param_2)
    ;
    if ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0 & 0x7fffffffffffffff) == 0) goto LAB_00713f60;
LAB_00714554:
    puVar18 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
    uVar10 = std::panicking::panic_count::is_zero_slow_path();
    if ((char)param_2[2] == '\0') {
      uVar19 = (ulong)(uVar10 ^ 1);
      iVar2 = param_2[0xe];
      goto joined_r0x00714574;
    }
    if (uVar10 == 0) goto LAB_007145a0;
  }
  if (((*puVar18 & 0x7fffffffffffffff) != 0) &&
     (uVar19 = std::panicking::panic_count::is_zero_slow_path(), (uVar19 & 1) == 0)) {
    *(undefined1 *)(param_2 + 2) = 1;
  }
LAB_007145a0:
  do {
    iVar2 = *param_2;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(param_2,0x10);
    if (bVar7) {
      *param_2 = iVar2 + -0x3fffffff;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (iVar2 + 0xc0000001U >> 0x1e != 0) {
    <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::wake_writer_or_readers
              (param_2);
  }
                    /* WARNING: Subroutine does not return */
  core::result::unwrap_failed
            ("storage lock poisoned",0x15,auStack_69,&DAT_00ad5fe0,
             &PTR_s_common_rust_src_stores_store_dat_00ad6050);
}


// ===== 0071479c  FUN_0071479c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0071479c(ulong *param_1,int *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  uint uVar8;
  long lVar9;
  int *piVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  ulong local_720;
  ulong uStack_718;
  ulong local_710;
  undefined8 *puStack_708;
  undefined8 *local_700;
  undefined8 uStack_6f8;
  undefined8 *local_6f0;
  undefined1 auStack_6e8 [496];
  undefined8 *local_4f8;
  undefined8 *puStack_4f0;
  long local_4e8;
  undefined8 *local_4e0;
  undefined8 *puStack_4d8;
  undefined8 uStack_4d0;
  long lStack_4c8;
  undefined8 *local_4b8;
  undefined8 *local_4b0;
  undefined8 *local_4a8;
  long local_4a0;
  undefined8 local_498;
  undefined1 auStack_490 [224];
  undefined8 local_3b0;
  undefined8 *local_2a0;
  undefined8 *puStack_298;
  undefined8 *local_290;
  undefined8 local_288;
  long lStack_280;
  undefined8 local_278;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 auStack_69 [9];
  
  if (*param_2 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(param_2,0x10);
    if (bVar5) {
      *param_2 = 0x3fffffff;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 != '\0') goto LAB_00714d78;
    if ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0 & 0x7fffffffffffffff) != 0) goto LAB_00714d94;
LAB_007147f0:
    puVar12 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
    if ((char)param_2[2] == '\0') {
      uVar13 = 0;
      iVar2 = param_2[0xe];
joined_r0x00714db4:
      if (iVar2 == 0) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(param_2 + 0xe,0x10);
        if (bVar5) {
          param_2[0xe] = 0x3fffffff;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_00714dbc;
      }
      else {
        ClearExclusiveLocal();
LAB_00714dbc:
                    /* try { // try from 00714dbc to 00714dc3 has its CatchHandler @ 00714f44 */
        <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::write_contended
                  (param_2 + 0xe);
      }
      piVar10 = param_2 + 0xe;
      if ((*puVar12 & 0x7fffffffffffffff) == 0) {
        if ((char)param_2[0x10] != '\0') {
LAB_00714e48:
          if (((*puVar12 & 0x7fffffffffffffff) != 0) &&
             (uVar13 = std::panicking::panic_count::is_zero_slow_path(), (uVar13 & 1) == 0)) {
            *(undefined1 *)(param_2 + 0x10) = 1;
          }
LAB_00714e5c:
          do {
            iVar2 = *piVar10;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar5) {
              *piVar10 = iVar2 + -0x3fffffff;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar2 + 0xc0000001U >> 0x1e != 0) {
            <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::
            wake_writer_or_readers(piVar10);
          }
                    /* try { // try from 00714e7c to 00714eb3 has its CatchHandler @ 00714f44 */
                    /* WARNING: Subroutine does not return */
          core::result::unwrap_failed
                    ("pending lock poisoned",0x15,auStack_69,&DAT_00ad5fe0,
                     &PTR_s_common_rust_src_stores_store_dat_00ad6068);
        }
        uVar8 = 0;
      }
      else {
                    /* try { // try from 00714d20 to 00714d3b has its CatchHandler @ 00714f44 */
        uVar8 = std::panicking::panic_count::is_zero_slow_path();
        if ((char)param_2[0x10] != '\0') {
          if (uVar8 == 0) goto LAB_00714e5c;
          goto LAB_00714e48;
        }
        uVar8 = uVar8 ^ 1;
      }
      uVar11 = *(ulong *)(param_2 + 0x16);
      puVar22 = *(undefined8 **)(param_2 + 0x14);
      uVar21 = *(undefined8 *)(param_2 + 0x12);
      param_2[0x12] = 0;
      param_2[0x13] = 0;
      param_2[0x14] = 8;
      param_2[0x15] = 0;
      param_2[0x16] = 0;
      param_2[0x17] = 0;
      if (0x3b5cc0ed7303b5 < uVar11) {
        uVar17 = 0;
        uVar14 = uVar13;
LAB_00714874:
                    /* try { // try from 00714874 to 0071487f has its CatchHandler @ 00714f9c */
                    /* WARNING: Subroutine does not return */
        alloc::raw_vec::handle_error(uVar17,uVar14);
      }
      if (uVar11 == 0) {
        uStack_718 = 8;
      }
      else {
        uVar14 = uVar11 * 0x228;
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        uVar17 = 8;
        uStack_718 = FUN_004b25a4(uVar14,8);
        if (uStack_718 == 0) goto LAB_00714874;
      }
      puVar20 = puVar22 + uVar11 * 0x43;
      local_710 = 0;
      local_720 = uVar11;
      puStack_708 = puVar22;
      local_700 = puVar22;
      uStack_6f8 = uVar21;
      local_6f0 = puVar20;
      if (uVar11 != 0) {
        do {
          while( true ) {
            puVar19 = (undefined8 *)*puVar22;
            puVar1 = puVar22 + 0x43;
            local_700 = puVar1;
            if (puVar19 == (undefined8 *)0xffffffffffffffff) goto LAB_00714c6c;
            puVar3 = (undefined8 *)puVar22[1];
            puVar16 = (undefined8 *)puVar22[2];
            lVar18 = puVar22[3];
            uVar21 = puVar22[4];
            memcpy(auStack_6e8,puVar22 + 5,0x1f0);
            lVar9 = (long)puVar19 - (long)(ulong)(puVar19 != (undefined8 *)0x0);
            puVar22 = puVar1;
            if (lVar9 < 2) break;
            if (lVar9 == 2) {
              puStack_4d8 = _UNK_00ad5fb0;
              local_4e0 = (undefined8 *)PTR_DAT_00ad5fa8;
              lStack_4c8 = _UNK_00ad5fc0;
              uStack_4d0 = _DAT_00ad5fb8;
              local_4f8 = puVar3;
              puStack_4f0 = puVar16;
              local_4e8 = lVar18;
              if (lVar18 != 0) {
                lVar18 = lVar18 * 0x218;
                do {
                  uVar17 = puVar16[0x21];
                    /* try { // try from 00714b20 to 00714b3f has its CatchHandler @ 00714f6c */
                  FUN_007151e0(&local_2a0,puVar16);
                  FUN_0075f384(&local_4b8,&local_4e0,uVar17,&local_2a0);
                  if (local_4b8 != (undefined8 *)0x2) {
                    /* try { // try from 00714b4c to 00714b53 has its CatchHandler @ 00714f68 */
                    FUN_0070d030(&local_4b8);
                  }
                  lVar18 = lVar18 + -0x218;
                  puVar16 = puVar16 + 0x43;
                } while (lVar18 != 0);
              }
              puStack_298 = puStack_4f0;
              local_2a0 = local_4f8;
              local_290 = (undefined8 *)local_4e8;
                    /* try { // try from 00714c24 to 00714c33 has its CatchHandler @ 00714f30 */
              FUN_0074a2a4(param_2 + 4,uVar21,&local_2a0);
              uVar11 = local_710;
              local_290 = puStack_4d8;
              lStack_280 = lStack_4c8;
              local_288 = uStack_4d0;
              puStack_298 = local_4e0;
              local_2a0 = (undefined8 *)0x3;
              local_278 = uVar21;
              if (local_710 == local_720) {
                    /* try { // try from 00714c60 to 00714c67 has its CatchHandler @ 00714eec */
                <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<libdiscore_common[1cb84820f9455fa0]::stores::store_database::opcodes::KKVChangeOpcode<u64,libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::stores::guilds::Guild>>>
                ::grow_one(&local_720);
              }
            }
            else if (lVar9 == 3) {
                    /* try { // try from 00714978 to 00714987 has its CatchHandler @ 00714f3c */
              local_4b8 = puVar3;
              FUN_007002b8(&local_2a0,param_2 + 4,(long)puVar3 * 0x517cc1b727220a95,&local_4b8);
              puVar16 = local_290;
              puVar19 = puStack_298;
              if ((puStack_298 != (undefined8 *)0x0) &&
                 (*(long *)(param_2 + 0xc) = *(long *)(param_2 + 0xc) - lStack_280,
                 local_290 != (undefined8 *)0x0)) {
                if (lStack_280 != 0) {
                  puVar15 = puStack_298 + 1;
                  uVar11 = NEON_cmge(*puStack_298,0,1);
                  uVar11 = uVar11 & 0x8080808080808080;
                  puVar6 = puStack_298;
                  lVar18 = lStack_280;
                  do {
                    for (; uVar11 == 0; uVar11 = uVar11 & 0x8080808080808080) {
                      uVar11 = NEON_cmge(*puVar15,0,1);
                      puVar15 = puVar15 + 1;
                      puVar6 = puVar6 + -0x220;
                    }
                    uVar14 = (uVar11 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                             (uVar11 >> 7 & 0xff00ff00ff00ff) << 8;
                    uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar14 & 0xffff0000ffff) << 0x10;
                    /* try { // try from 00714a00 to 00714a03 has its CatchHandler @ 00714f60 */
                    FUN_007024a8(puVar6 + (long)-(int)((ulong)LZCOUNT(uVar14 >> 0x20 |
                                                                      uVar14 << 0x20) >> 3) * 0x44 +
                                          -0x43);
                    lVar18 = lVar18 + -1;
                    uVar11 = uVar11 - 1 & uVar11;
                  } while (lVar18 != 0);
                }
                if ((long)puVar16 * 0x221 != -0x229) {
                  free(puVar19 + (long)puVar16 * -0x44 + -0x44);
                }
              }
              uVar11 = local_710;
              local_2a0 = (undefined8 *)0x2;
              puStack_298 = puVar3;
              if (local_710 == local_720) {
                    /* try { // try from 00714a5c to 00714a63 has its CatchHandler @ 00714f00 */
                <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<libdiscore_common[1cb84820f9455fa0]::stores::store_database::opcodes::KKVChangeOpcode<u64,libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::stores::guilds::Guild>>>
                ::grow_one(&local_720);
              }
            }
            else {
                    /* try { // try from 00714b58 to 00714b5f has its CatchHandler @ 00714f40 */
              FUN_007037ac(param_2 + 4);
              uVar11 = local_710;
              param_2[0xc] = 0;
              param_2[0xd] = 0;
              local_2a0 = (undefined8 *)0x6;
              if (local_710 == local_720) {
                    /* try { // try from 00714b7c to 00714b83 has its CatchHandler @ 00714f14 */
                <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<libdiscore_common[1cb84820f9455fa0]::stores::store_database::opcodes::KKVChangeOpcode<u64,libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::stores::guilds::Guild>>>
                ::grow_one(&local_720);
              }
            }
            memcpy((void *)(uStack_718 + uVar11 * 0x228),&local_2a0,0x228);
            local_710 = uVar11 + 1;
            if (puVar1 == puVar20) goto LAB_00714c6c;
          }
          if (puVar19 == (undefined8 *)(ulong)(puVar19 != (undefined8 *)0x0)) {
            local_4b8 = puVar19;
            local_4b0 = puVar3;
            local_4a8 = puVar16;
            local_4a0 = lVar18;
            local_498 = uVar21;
            memcpy(auStack_490,auStack_6e8,0x1f0);
            uVar21 = local_3b0;
                    /* try { // try from 00714a98 to 00714aaf has its CatchHandler @ 00714f50 */
            FUN_007151e0(&local_2a0,&local_4b8);
            FUN_00749da4(param_2 + 4,&local_2a0);
            memcpy(&local_2a0,&local_4b8,0x218);
            uVar11 = local_710;
            local_80 = 0;
            local_88 = uVar21;
            if (local_710 == local_720) {
                    /* try { // try from 00714ad8 to 00714adf has its CatchHandler @ 00714ec4 */
              <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<libdiscore_common[1cb84820f9455fa0]::stores::store_database::opcodes::KKVChangeOpcode<u64,libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::stores::guilds::Guild>>>
              ::grow_one(&local_720);
            }
          }
          else {
                    /* try { // try from 00714b90 to 00714bb7 has its CatchHandler @ 00714f4c */
            local_4e0 = puVar16;
            local_4b8 = puVar3;
            FUN_00749fd0(&local_2a0,param_2 + 4,&local_4e0,&local_4b8);
            if (local_2a0 != (undefined8 *)0x2) {
              FUN_0070d030(&local_2a0);
            }
            uVar11 = local_710;
            local_2a0 = (undefined8 *)0x5;
            puStack_298 = puVar3;
            local_290 = puVar16;
            if (local_710 == local_720) {
                    /* try { // try from 00714bd8 to 00714bdf has its CatchHandler @ 00714ed8 */
              <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<libdiscore_common[1cb84820f9455fa0]::stores::store_database::opcodes::KKVChangeOpcode<u64,libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::stores::guilds::Guild>>>
              ::grow_one(&local_720);
            }
          }
          memcpy((void *)(uStack_718 + uVar11 * 0x228),&local_2a0,0x228);
          local_710 = uVar11 + 1;
        } while (puVar1 != puVar20);
      }
LAB_00714c6c:
                    /* try { // try from 00714c6c to 00714c73 has its CatchHandler @ 00714f28 */
      FUN_0070ab48(&puStack_708);
      param_1[1] = uStack_718;
      *param_1 = local_720;
      param_1[2] = local_710;
      puVar7 = PTR_GLOBAL_PANIC_COUNT_00b00bf0;
                    /* try { // try from 00714d4c to 00714d4f has its CatchHandler @ 00714f44 */
      if ((((uVar8 & 1) == 0) &&
          ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0 & 0x7fffffffffffffff) != 0)) &&
         (uVar11 = std::panicking::panic_count::is_zero_slow_path(), (uVar11 & 1) == 0)) {
        *(undefined1 *)(param_2 + 0x10) = 1;
      }
      do {
        iVar2 = *piVar10;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar5) {
          *piVar10 = iVar2 + -0x3fffffff;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar2 + 0xc0000001U >> 0x1e != 0) {
        <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::
        wake_writer_or_readers(param_2 + 0xe);
      }
      if ((((uVar13 & 1) == 0) && ((*(ulong *)puVar7 & 0x7fffffffffffffff) != 0)) &&
         (uVar13 = std::panicking::panic_count::is_zero_slow_path(), (uVar13 & 1) == 0)) {
        *(undefined1 *)(param_2 + 2) = 1;
      }
      do {
        iVar2 = *param_2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(param_2,0x10);
        if (bVar5) {
          *param_2 = iVar2 + -0x3fffffff;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar2 + 0xc0000001U >> 0x1e != 0) {
        <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::
        wake_writer_or_readers(param_2);
      }
      return;
    }
  }
  else {
    ClearExclusiveLocal();
LAB_00714d78:
    <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::write_contended(param_2)
    ;
    if ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0 & 0x7fffffffffffffff) == 0) goto LAB_007147f0;
LAB_00714d94:
    puVar12 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
    uVar8 = std::panicking::panic_count::is_zero_slow_path();
    if ((char)param_2[2] == '\0') {
      uVar13 = (ulong)(uVar8 ^ 1);
      iVar2 = param_2[0xe];
      goto joined_r0x00714db4;
    }
    if (uVar8 == 0) goto LAB_00714de0;
  }
  if (((*puVar12 & 0x7fffffffffffffff) != 0) &&
     (uVar13 = std::panicking::panic_count::is_zero_slow_path(), (uVar13 & 1) == 0)) {
    *(undefined1 *)(param_2 + 2) = 1;
  }
LAB_00714de0:
  do {
    iVar2 = *param_2;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(param_2,0x10);
    if (bVar5) {
      *param_2 = iVar2 + -0x3fffffff;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar2 + 0xc0000001U >> 0x1e != 0) {
    <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::wake_writer_or_readers
              (param_2);
  }
                    /* WARNING: Subroutine does not return */
  core::result::unwrap_failed
            ("storage lock poisoned",0x15,auStack_69,&DAT_00ad5fe0,
             &PTR_s_common_rust_src_stores_store_dat_00ad6050);
}


// ===== 00714fc4  <<libdiscore_common::actions::guilds::GuildEntitySyncOperation<_,_>as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_27}::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<libdiscore_common::actions::guilds::GuildEntitySyncOperation<_, _> as
   serde::de::Deserialize>::deserialize::__FieldVisitor as {backref 27}::Visitor>::expecting */

void __rustcall
<<libdiscore_common::actions::guilds::GuildEntitySyncOperation<_,_>as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_27}::Visitor>
::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"variant identifier",0x12);
  return;
}


// ===== 00714fd8  <<libdiscore_common::actions::guilds::GuildEntitySyncOperation<_,_>as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_30}::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<libdiscore_common::actions::guilds::GuildEntitySyncOperation<_, _> as
   serde::de::Deserialize>::deserialize::__FieldVisitor as {backref 30}::Visitor>::expecting */

void __rustcall
<<libdiscore_common::actions::guilds::GuildEntitySyncOperation<_,_>as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_30}::Visitor>
::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002a0800,0x10);
  return;
}


// ===== 00714fec  <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::GuildPartialUpdates_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

/* <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::GuildPartialUpdates as
   serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor as
   serde[52fff5c06b43f145]::de::Visitor>::expecting */

void <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::GuildPartialUpdates_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"struct GuildPartialUpdates",0x1a);
  return;
}


// ===== 00715000  <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::SerializedRole_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

/* <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::SerializedRole as
   serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor as
   serde[52fff5c06b43f145]::de::Visitor>::expecting */

void <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::SerializedRole_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"struct SerializedRole",0x15);
  return;
}


// ===== 00715014  <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::CacheLoaded_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

/* <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::CacheLoaded as
   serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor as
   serde[52fff5c06b43f145]::de::Visitor>::expecting */

void <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::CacheLoaded_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"struct CacheLoaded",0x12);
  return;
}


// ===== 00715028  <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::CacheLoadedLazy_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

/* <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::CacheLoadedLazy as
   serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor as
   serde[52fff5c06b43f145]::de::Visitor>::expecting */

void <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::CacheLoadedLazy_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"struct CacheLoadedLazy",0x16);
  return;
}


// ===== 0071503c  <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::SerializedGuild_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

/* <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::SerializedGuild as
   serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor as
   serde[52fff5c06b43f145]::de::Visitor>::expecting */

void <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::SerializedGuild_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"struct SerializedGuild",0x16);
  return;
}


// ===== 00715050  <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::GuildProfile_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

/* <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::GuildProfile as
   serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor as
   serde[52fff5c06b43f145]::de::Visitor>::expecting */

void <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::GuildProfile_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"struct GuildProfile",0x13);
  return;
}


// ===== 00715064  <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::GuildPremiumFeatures_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

/* <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::GuildPremiumFeatures as
   serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor as
   serde[52fff5c06b43f145]::de::Visitor>::expecting */

void <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::GuildPremiumFeatures_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"struct GuildPremiumFeatures",0x1b);
  return;
}


// ===== 00715078  <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::ModeratorReporting_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

/* <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::ModeratorReporting as
   serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor as
   serde[52fff5c06b43f145]::de::Visitor>::expecting */

void <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::ModeratorReporting_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"struct ModeratorReporting",0x19);
  return;
}


// ===== 0071508c  <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::GuildIncidentsData_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

/* <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::GuildIncidentsData as
   serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor as
   serde[52fff5c06b43f145]::de::Visitor>::expecting */

void <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::GuildIncidentsData_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"struct GuildIncidentsData",0x19);
  return;
}


// ===== 007150a0  <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::User_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

/* <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::User as
   serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor as
   serde[52fff5c06b43f145]::de::Visitor>::expecting */

void <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::User_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"struct User",0xb);
  return;
}


// ===== 007150b4  <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::GuildPropertiesSentOnEveryConnect_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

/* <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::GuildPropertiesSentOnEveryConnect as
   serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor as
   serde[52fff5c06b43f145]::de::Visitor>::expecting */

void <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::GuildPropertiesSentOnEveryConnect_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,"struct GuildPropertiesSentOnEveryConnect",0x28);
  return;
}


// ===== 007150c8  <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::GuildProperties_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

/* <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::GuildProperties as
   serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor as
   serde[52fff5c06b43f145]::de::Visitor>::expecting */

void <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::GuildProperties_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"struct GuildProperties",0x16);
  return;
}


// ===== 007150dc  <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::BaseClientGuild_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

/* <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::BaseClientGuild as
   serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor as
   serde[52fff5c06b43f145]::de::Visitor>::expecting */

void <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::BaseClientGuild_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"struct BaseClientGuild",0x16);
  return;
}


// ===== 007150f0  <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::ConnectionOpen_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

/* <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::ConnectionOpen as
   serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor as
   serde[52fff5c06b43f145]::de::Visitor>::expecting */

void <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::ConnectionOpen_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"struct ConnectionOpen",0x15);
  return;
}


// ===== 00715104  <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::ConnectionOpenGuild_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

/* <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::ConnectionOpenGuild as
   serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor as
   serde[52fff5c06b43f145]::de::Visitor>::expecting */

void <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::ConnectionOpenGuild_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"struct ConnectionOpenGuild",0x1a);
  return;
}


// ===== 00715118  <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::GuildCreate_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

/* <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::GuildCreate as
   serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor as
   serde[52fff5c06b43f145]::de::Visitor>::expecting */

void <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::GuildCreate_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"struct GuildCreate",0x12);
  return;
}


// ===== 0071512c  <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::GuildCreateGuild_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

/* <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::GuildCreateGuild as
   serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor as
   serde[52fff5c06b43f145]::de::Visitor>::expecting */

void <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::GuildCreateGuild_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"struct GuildCreateGuild",0x17);
  return;
}


// ===== 00715140  <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::GuildUpdate_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

/* <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::GuildUpdate as
   serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor as
   serde[52fff5c06b43f145]::de::Visitor>::expecting */

void <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::GuildUpdate_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"struct GuildUpdate",0x12);
  return;
}


// ===== 00715154  <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::GuildUpdateGuild_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

/* <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::GuildUpdateGuild as
   serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor as
   serde[52fff5c06b43f145]::de::Visitor>::expecting */

void <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::GuildUpdateGuild_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"struct GuildUpdateGuild",0x17);
  return;
}


// ===== 00715168  <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::GuildDelete_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

/* <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::GuildDelete as
   serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor as
   serde[52fff5c06b43f145]::de::Visitor>::expecting */

void <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::GuildDelete_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"struct GuildDelete",0x12);
  return;
}


// ===== 0071517c  <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::GuildDeleteGuild_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

/* <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::GuildDeleteGuild as
   serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor as
   serde[52fff5c06b43f145]::de::Visitor>::expecting */

void <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::GuildDeleteGuild_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"struct GuildDeleteGuild",0x17);
  return;
}


// ===== 00715190  <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::GuildMemberAdd_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

/* <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::GuildMemberAdd as
   serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor as
   serde[52fff5c06b43f145]::de::Visitor>::expecting */

void <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::GuildMemberAdd_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"struct GuildMemberAdd",0x15);
  return;
}


// ===== 007151a4  <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::BackgroundSync_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

/* <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::BackgroundSync as
   serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor as
   serde[52fff5c06b43f145]::de::Visitor>::expecting */

void <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::BackgroundSync_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"struct BackgroundSync",0x15);
  return;
}


// ===== 007151b8  <<libdiscore_common::actions::guilds::BackgroundSyncFullGuild_as_serde::de::Deserialize>::deserialize::__Visitor_as{backref_28}::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<libdiscore_common::actions::guilds::BackgroundSyncFullGuild as
   serde::de::Deserialize>::deserialize::__Visitor as {backref 28}::Visitor>::expecting */

void __rustcall
<<libdiscore_common::actions::guilds::BackgroundSyncFullGuild_as_serde::de::Deserialize>::deserialize::__Visitor_as{backref_28}::Visitor>
::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"struct BackgroundSyncFullGuild",0x1e);
  return;
}


// ===== 007151cc  <<libdiscore_common::actions::guilds::BackgroundSyncPartialGuild_as_serde::de::Deserialize>::deserialize::__Visitor_as{backref_31}::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<libdiscore_common::actions::guilds::BackgroundSyncPartialGuild as
   serde::de::Deserialize>::deserialize::__Visitor as {backref 31}::Visitor>::expecting */

void __rustcall
<<libdiscore_common::actions::guilds::BackgroundSyncPartialGuild_as_serde::de::Deserialize>::deserialize::__Visitor_as{backref_31}::Visitor>
::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,"struct BackgroundSyncPartialGuild",0x21);
  return;
}


// ===== 007151e0  FUN_007151e0 =====

void FUN_007151e0(undefined8 *param_1,uint *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  byte bVar8;
  char cVar9;
  byte bVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  code *pcVar15;
  void *__src;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long *plVar21;
  long *extraout_x9;
  long *plVar22;
  undefined8 uVar23;
  long lVar24;
  ulong *__n;
  ulong *extraout_x10;
  long lVar25;
  long *plVar26;
  ulong uVar27;
  long *extraout_x11;
  ulong in_x12;
  ulong extraout_x12;
  ulong extraout_x12_00;
  long *in_x13;
  long *extraout_x13;
  long *extraout_x13_00;
  ulong uVar28;
  ulong extraout_x14;
  ulong extraout_x14_00;
  long *plVar29;
  long *extraout_x15;
  long *extraout_x15_00;
  ulong uVar30;
  ulong extraout_x16;
  ulong extraout_x16_00;
  undefined8 uVar31;
  undefined8 extraout_x17;
  undefined8 extraout_x17_00;
  undefined8 uVar32;
  long *plVar33;
  undefined8 uVar34;
  long *plVar35;
  long *plVar36;
  long *plVar37;
  long *plVar38;
  long *plVar39;
  long *plVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined1 *local_208;
  ulong local_200;
  undefined8 local_1f8;
  ulong local_178;
  undefined8 local_170;
  long *plStack_168;
  undefined8 local_160;
  undefined8 local_100;
  long *plStack_f8;
  undefined8 local_f0;
  undefined4 local_e0;
  undefined4 uStack_dc;
  ulong *puStack_d8;
  long *local_d0;
  undefined8 local_b8;
  long *plStack_b0;
  undefined8 local_a8;
  ulong *puStack_a0;
  long *local_98;
  long *local_90;
  undefined8 uStack_88;
  undefined2 local_80;
  ushort local_7e;
  undefined2 local_7c;
  undefined2 local_7a;
  short local_78;
  undefined2 local_76;
  undefined4 uStack_74;
  
  uVar23 = *(undefined8 *)(param_2 + 0x42);
  if ((char)param_2[0x30] == '\x19') {
    plStack_168 = *(long **)(param_2 + 0x32);
    do {
      lVar24 = *plStack_168;
      bVar8 = 1;
      bVar11 = (bool)ExclusiveMonitorPass(plStack_168,0x10);
      if (bVar11) {
        *plStack_168 = lVar24 + 1;
        bVar8 = ExclusiveMonitorsStatus();
      }
      in_x12 = (ulong)bVar8;
    } while (bVar8 != 0);
    if (lVar24 < 0) goto LAB_007158e8;
    local_160 = *(undefined8 *)(param_2 + 0x34);
    local_170 = CONCAT71(local_170._1_7_,0x19);
    plVar37 = *(long **)(param_2 + 0x46);
    if (plVar37 != (long *)0x0) goto LAB_0071526c;
LAB_00715294:
    uVar16 = *(undefined8 *)(param_2 + 0x4a);
    plVar38 = *(long **)(param_2 + 0x4c);
    if (plVar38 != (long *)0x0) goto LAB_007152a0;
LAB_007152c4:
    plVar39 = *(long **)(param_2 + 0x50);
    if (plVar39 != (long *)0x0) goto LAB_007152d0;
LAB_007152f4:
    plVar40 = *(long **)(param_2 + 0x54);
    if (plVar40 != (long *)0x0) goto LAB_00715300;
LAB_00715324:
    plVar33 = *(long **)(param_2 + 0x58);
    if (plVar33 != (long *)0x0) goto LAB_00715330;
LAB_00715388:
    if ((char)param_2[0x36] != '\x19') goto LAB_0071539c;
LAB_0071535c:
    plStack_f8 = *(long **)(param_2 + 0x38);
    do {
      lVar24 = *plStack_f8;
      bVar8 = 1;
      bVar11 = (bool)ExclusiveMonitorPass(plStack_f8,0x10);
      if (bVar11) {
        *plStack_f8 = lVar24 + 1;
        bVar8 = ExclusiveMonitorsStatus();
      }
      in_x12 = (ulong)bVar8;
    } while (bVar8 != 0);
    if (lVar24 < 0) goto LAB_007158e8;
    local_f0 = *(undefined8 *)(param_2 + 0x3a);
    local_100 = CONCAT71(local_100._1_7_,0x19);
  }
  else {
    plStack_168 = *(long **)(param_2 + 0x32);
    local_170 = *(undefined8 *)(param_2 + 0x30);
    local_160 = *(undefined8 *)(param_2 + 0x34);
    plVar37 = *(long **)(param_2 + 0x46);
    if (plVar37 == (long *)0x0) goto LAB_00715294;
LAB_0071526c:
    do {
      lVar24 = *plVar37;
      cVar9 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar37,0x10);
      if (bVar11) {
        *plVar37 = lVar24 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar24 < 0) goto LAB_007158e8;
    param_3 = *(undefined8 *)(param_2 + 0x48);
    uVar16 = *(undefined8 *)(param_2 + 0x4a);
    plVar38 = *(long **)(param_2 + 0x4c);
    if (plVar38 == (long *)0x0) goto LAB_007152c4;
LAB_007152a0:
    do {
      lVar24 = *plVar38;
      cVar9 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar38,0x10);
      if (bVar11) {
        *plVar38 = lVar24 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar24 < 0) goto LAB_007158e8;
    param_5 = *(undefined8 *)(param_2 + 0x4e);
    plVar39 = *(long **)(param_2 + 0x50);
    if (plVar39 == (long *)0x0) goto LAB_007152f4;
LAB_007152d0:
    do {
      lVar24 = *plVar39;
      cVar9 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar39,0x10);
      if (bVar11) {
        *plVar39 = lVar24 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar24 < 0) goto LAB_007158e8;
    param_6 = *(undefined8 *)(param_2 + 0x52);
    plVar40 = *(long **)(param_2 + 0x54);
    if (plVar40 == (long *)0x0) goto LAB_00715324;
LAB_00715300:
    do {
      lVar24 = *plVar40;
      cVar9 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar40,0x10);
      if (bVar11) {
        *plVar40 = lVar24 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar24 < 0) goto LAB_007158e8;
    param_7 = *(undefined8 *)(param_2 + 0x56);
    plVar33 = *(long **)(param_2 + 0x58);
    if (plVar33 == (long *)0x0) goto LAB_00715388;
LAB_00715330:
    do {
      lVar24 = *plVar33;
      cVar9 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar33,0x10);
      if (bVar11) {
        *plVar33 = lVar24 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar24 < 0) goto LAB_007158e8;
    param_8 = *(undefined8 *)(param_2 + 0x5a);
    if ((char)param_2[0x36] == '\x19') goto LAB_0071535c;
LAB_0071539c:
    plStack_f8 = *(long **)(param_2 + 0x38);
    local_100 = *(undefined8 *)(param_2 + 0x36);
    local_f0 = *(undefined8 *)(param_2 + 0x3a);
  }
  plVar35 = *(long **)(param_2 + 0x44);
  do {
    lVar24 = *plVar35;
    bVar8 = 1;
    bVar11 = (bool)ExclusiveMonitorPass(plVar35,0x10);
    if (bVar11) {
      *plVar35 = lVar24 + 1;
      bVar8 = ExclusiveMonitorsStatus();
    }
    plVar26 = (long *)(ulong)bVar8;
  } while (bVar8 != 0);
  if (lVar24 < 0) goto LAB_007158e8;
  cVar9 = (char)param_2[0x3c];
  uVar44 = *(undefined8 *)(param_2 + 0x5e);
  uVar43 = *(undefined8 *)(param_2 + 0x5c);
  uVar42 = *(undefined8 *)(param_2 + 0x62);
  uVar41 = *(undefined8 *)(param_2 + 0x60);
  bVar8 = *(byte *)((long)param_2 + 0x216);
  plVar29 = (long *)(ulong)bVar8;
  uVar1 = param_2[0x7e];
  uVar30 = (ulong)uVar1;
  uVar31 = *(undefined8 *)(param_2 + 0x7f);
  uVar12 = param_2[0x84];
  uVar34 = *(undefined8 *)(param_2 + 100);
  bVar3 = *(byte *)((long)param_2 + 0x212);
  uVar28 = (ulong)bVar3;
  if (cVar9 == -1) {
  }
  else {
    if (cVar9 == '\x19') {
      puStack_d8 = *(ulong **)(param_2 + 0x3e);
      do {
        uVar27 = *puStack_d8;
        in_x12 = uVar27 + 1;
        bVar10 = 1;
        bVar11 = (bool)ExclusiveMonitorPass(puStack_d8,0x10);
        if (bVar11) {
          *puStack_d8 = in_x12;
          bVar10 = ExclusiveMonitorsStatus();
        }
        in_x13 = (long *)(ulong)bVar10;
      } while (bVar10 != 0);
      if ((long)uVar27 < 0) goto LAB_007158e8;
    }
    else {
      in_x12 = (ulong)param_2[0x3d];
      puStack_d8 = *(ulong **)(param_2 + 0x3e);
      local_b8 = (ulong)CONCAT43(param_2[0x3d],(int3)*(undefined4 *)((long)param_2 + 0xf1));
    }
    local_e0._1_3_ = (undefined3)local_b8;
    plVar26 = *(long **)(param_2 + 0x40);
    uStack_dc = local_b8._3_4_;
    local_d0 = plVar26;
  }
  local_e0 = CONCAT31(local_e0._1_3_,cVar9);
  uVar4 = *(undefined1 *)((long)param_2 + 0x213);
  plVar36 = *(long **)(param_2 + 0x6e);
  uVar48 = *(undefined8 *)(param_2 + 0x6c);
  uVar47 = *(undefined8 *)(param_2 + 0x6a);
  uVar46 = *(undefined8 *)(param_2 + 0x68);
  uVar45 = *(undefined8 *)(param_2 + 0x66);
  uVar5 = *(undefined1 *)((long)param_2 + 0x211);
  uVar2 = param_2[0x81];
  uVar18 = *(undefined8 *)(param_2 + 0x82);
  if (plVar36 != (long *)0x0) {
    do {
      lVar24 = *plVar36;
      bVar10 = 1;
      bVar11 = (bool)ExclusiveMonitorPass(plVar36,0x10);
      if (bVar11) {
        *plVar36 = lVar24 + 1;
        bVar10 = ExclusiveMonitorsStatus();
      }
      plVar26 = (long *)(ulong)bVar10;
    } while (bVar10 != 0);
    if (lVar24 < 0) goto LAB_007158e8;
    local_1f8 = *(undefined8 *)(param_2 + 0x70);
  }
  uVar13 = param_2[0x85];
  __n = (ulong *)(ulong)(byte)uVar13;
  uVar6 = *(undefined1 *)((long)param_2 + 0x215);
  uVar52 = *(undefined8 *)(param_2 + 0x78);
  uVar51 = *(undefined8 *)(param_2 + 0x76);
  uVar50 = *(undefined8 *)(param_2 + 0x74);
  uVar49 = *(undefined8 *)(param_2 + 0x72);
  uVar19 = *(undefined8 *)(param_2 + 0x7a);
  if ((*param_2 & 1) == 0) {
    uVar17 = 0;
  }
  else {
    plStack_b0 = *(long **)(param_2 + 2);
    if (plStack_b0 == (long *)0x0) {
      __n = *(ulong **)(param_2 + 6);
      local_a8 = uVar19;
    }
    else {
      do {
        lVar24 = *plStack_b0;
        bVar10 = 1;
        bVar11 = (bool)ExclusiveMonitorPass(plStack_b0,0x10);
        if (bVar11) {
          *plStack_b0 = lVar24 + 1;
          bVar10 = ExclusiveMonitorsStatus();
        }
        plVar26 = (long *)(ulong)bVar10;
      } while (bVar10 != 0);
      if (lVar24 < 0) goto LAB_007158e8;
      local_a8 = *(undefined8 *)(param_2 + 4);
      __n = *(ulong **)(param_2 + 6);
    }
    if (__n != (ulong *)0x0) {
      do {
        uVar27 = *__n;
        in_x12 = uVar27 + 1;
        bVar10 = 1;
        bVar11 = (bool)ExclusiveMonitorPass(__n,0x10);
        if (bVar11) {
          *__n = in_x12;
          bVar10 = ExclusiveMonitorsStatus();
        }
        in_x13 = (long *)(ulong)bVar10;
      } while (bVar10 != 0);
      if ((long)uVar27 < 0) goto LAB_007158e8;
      plVar26 = *(long **)(param_2 + 8);
    }
    uVar17 = 1;
    puStack_a0 = __n;
    local_98 = plVar26;
  }
  local_78 = (short)param_2[0x2a];
  if (local_78 == 2) {
    local_78 = 2;
  }
  else {
    local_90 = *(long **)(param_2 + 0x24);
    do {
      lVar24 = *local_90;
      cVar9 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(local_90,0x10);
      if (bVar11) {
        *local_90 = lVar24 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar24 < 0) goto LAB_007158e8;
    uStack_88 = *(undefined8 *)(param_2 + 0x26);
    local_80 = (undefined2)param_2[0x28];
    local_7e = *(ushort *)((long)param_2 + 0xa2);
    __n = (ulong *)(ulong)local_7e;
    local_7c = (undefined2)param_2[0x29];
    local_7a = *(undefined2 *)((long)param_2 + 0xa6);
    local_76 = *(undefined2 *)((long)param_2 + 0xaa);
  }
  uVar14 = param_2[0x2e];
  uVar20 = *(undefined8 *)(param_2 + 0x2c);
  uVar7 = *(undefined1 *)((long)param_2 + 0x217);
  plVar21 = *(long **)(param_2 + 0x7c);
  uVar32 = uVar31;
  if (*(long *)(param_2 + 0x1e) == -1) {
    lVar24 = *(long *)(param_2 + 10);
    local_178 = 0xffffffffffffffff;
    plVar22 = plVar21;
  }
  else {
    local_200 = *(ulong *)(param_2 + 0x22);
    plVar26 = (long *)0x0;
    __n = (ulong *)(local_200 * 8);
    if ((local_200 >> 0x3d != 0) || ((ulong *)0x7ffffffffffffff8 < __n)) {
LAB_007156d0:
                    /* try { // try from 007156d0 to 007156db has its CatchHandler @ 007158ec */
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(plVar26,__n);
    }
    __src = *(void **)(param_2 + 0x20);
    if (__n == (ulong *)0x0) {
      local_178 = 0;
      local_208 = &DAT_00000008;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      local_208 = (undefined1 *)FUN_004b25a4(__n,8);
      plVar26 = (long *)&DAT_00000008;
      plVar29 = extraout_x15;
      uVar30 = extraout_x16;
      uVar32 = extraout_x17;
      uVar28 = extraout_x14;
      in_x12 = extraout_x12;
      in_x13 = extraout_x13;
      local_178 = local_200;
      if (local_208 == (undefined1 *)0x0) goto LAB_007156d0;
    }
    if (local_200 == 0) {
      local_200 = 0;
      lVar24 = *(long *)(param_2 + 10);
      plVar22 = (long *)0x0;
    }
    else {
      memcpy(local_208,__src,(size_t)__n);
      lVar24 = *(long *)(param_2 + 10);
      plVar29 = extraout_x15_00;
      uVar30 = extraout_x16_00;
      uVar32 = extraout_x17_00;
      uVar28 = extraout_x14_00;
      plVar22 = extraout_x9;
      __n = extraout_x10;
      plVar26 = extraout_x11;
      in_x12 = extraout_x12_00;
      in_x13 = extraout_x13_00;
    }
  }
  if (lVar24 == 2) goto LAB_007157a4;
  plVar22 = *(long **)(param_2 + 0xe);
  if (plVar22 == (long *)0x0) {
    plVar26 = *(long **)(param_2 + 0x12);
    if (plVar26 == (long *)0x0) goto LAB_00715754;
LAB_00715734:
    do {
      lVar25 = *plVar26;
      bVar10 = 1;
      bVar11 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar11) {
        *plVar26 = lVar25 + 1;
        bVar10 = ExclusiveMonitorsStatus();
      }
      uVar28 = (ulong)bVar10;
    } while (bVar10 != 0);
    if (lVar25 < 0) goto LAB_007158e8;
    in_x12 = *(ulong *)(param_2 + 0x14);
    in_x13 = *(long **)(param_2 + 0x16);
    if (in_x13 == (long *)0x0) goto LAB_0071577c;
LAB_0071575c:
    do {
      lVar25 = *in_x13;
      bVar10 = 1;
      bVar11 = (bool)ExclusiveMonitorPass(in_x13,0x10);
      if (bVar11) {
        *in_x13 = lVar25 + 1;
        bVar10 = ExclusiveMonitorsStatus();
      }
      uVar30 = (ulong)bVar10;
    } while (bVar10 != 0);
    if (lVar25 < 0) goto LAB_007158e8;
    uVar28 = *(ulong *)(param_2 + 0x18);
    plVar29 = *(long **)(param_2 + 0x1a);
  }
  else {
    do {
      lVar25 = *plVar22;
      bVar10 = 1;
      bVar11 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar11) {
        *plVar22 = lVar25 + 1;
        bVar10 = ExclusiveMonitorsStatus();
      }
      in_x12 = (ulong)bVar10;
    } while (bVar10 != 0);
    if (lVar25 < 0) goto LAB_007158e8;
    __n = *(ulong **)(param_2 + 0x10);
    plVar26 = *(long **)(param_2 + 0x12);
    if (plVar26 != (long *)0x0) goto LAB_00715734;
LAB_00715754:
    in_x13 = *(long **)(param_2 + 0x16);
    if (in_x13 != (long *)0x0) goto LAB_0071575c;
LAB_0071577c:
    plVar29 = *(long **)(param_2 + 0x1a);
  }
  if (plVar29 != (long *)0x0) {
    do {
      lVar25 = *plVar29;
      cVar9 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar11) {
        *plVar29 = lVar25 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar25 < 0) {
LAB_007158e8:
                    /* WARNING: Does not return */
      pcVar15 = (code *)SoftwareBreakpoint(1,0x7158ec);
      (*pcVar15)();
    }
    uVar30 = *(ulong *)(param_2 + 0x1c);
  }
  uVar32 = *(undefined8 *)(param_2 + 0xc);
LAB_007157a4:
  param_1[0x23] = plVar37;
  param_1[0x24] = param_3;
  param_1[0x1a] = local_160;
  param_1[0x19] = plStack_168;
  param_1[0x18] = local_170;
  param_1[0x1d] = local_f0;
  param_1[0x1c] = plStack_f8;
  param_1[0x1b] = local_100;
  param_1[0x1f] = puStack_d8;
  param_1[0x1e] = CONCAT44(uStack_dc,local_e0);
  *(uint *)(param_1 + 0x3f) = uVar1;
  *(byte *)((long)param_1 + 0x216) = bVar8;
  *(undefined8 *)((long)param_1 + 0x1fc) = uVar31;
  param_1[0x2f] = uVar44;
  param_1[0x2e] = uVar43;
  param_1[0x31] = uVar42;
  param_1[0x30] = uVar41;
  *(char *)(param_1 + 0x42) = (char)uVar12;
  param_1[1] = plStack_b0;
  *param_1 = uVar17;
  param_1[3] = puStack_a0;
  param_1[2] = local_a8;
  param_1[0x32] = uVar34;
  param_1[0x25] = uVar16;
  param_1[0x26] = plVar38;
  *(byte *)((long)param_1 + 0x212) = bVar3;
  param_1[0x27] = param_5;
  param_1[0x28] = plVar39;
  param_1[0x20] = local_d0;
  param_1[0x21] = uVar23;
  param_1[0x29] = param_6;
  param_1[0x2a] = plVar40;
  *(undefined1 *)((long)param_1 + 0x213) = uVar4;
  param_1[0x2b] = param_7;
  param_1[0x2c] = plVar33;
  *(undefined1 *)((long)param_1 + 0x211) = uVar5;
  param_1[0x2d] = param_8;
  *(uint *)((long)param_1 + 0x204) = uVar2;
  param_1[0x22] = plVar35;
  param_1[0x41] = uVar18;
  param_1[0x36] = uVar48;
  param_1[0x35] = uVar47;
  param_1[0x37] = plVar36;
  param_1[0x38] = local_1f8;
  param_1[0x34] = uVar46;
  param_1[0x33] = uVar45;
  param_1[0x3c] = uVar52;
  param_1[0x3b] = uVar51;
  *(undefined1 *)((long)param_1 + 0x215) = uVar6;
  *(byte *)((long)param_1 + 0x214) = (byte)uVar13;
  param_1[0x16] = uVar20;
  param_1[0x3a] = uVar50;
  param_1[0x39] = uVar49;
  *(char *)(param_1 + 0x17) = (char)uVar14;
  param_1[0x13] = uStack_88;
  param_1[0x12] = local_90;
  param_1[0x15] = CONCAT44(uStack_74,CONCAT22(local_76,local_78));
  param_1[0x14] = CONCAT26(local_7a,CONCAT24(local_7c,CONCAT22(local_7e,local_80)));
  *(undefined1 *)((long)param_1 + 0x217) = uVar7;
  param_1[6] = uVar32;
  param_1[7] = plVar22;
  param_1[0x3d] = uVar19;
  param_1[0x3e] = plVar21;
  param_1[8] = __n;
  param_1[9] = plVar26;
  param_1[4] = local_98;
  param_1[5] = lVar24;
  param_1[10] = in_x12;
  param_1[0xb] = in_x13;
  param_1[0x10] = local_208;
  param_1[0x11] = local_200;
  param_1[0xc] = uVar28;
  param_1[0xd] = plVar29;
  param_1[0xe] = uVar30;
  param_1[0xf] = local_178;
  return;
}


// ===== 00715a9c  <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::BackgroundSyncGuild_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

/* <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::BackgroundSyncGuild as
   serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor as
   serde[52fff5c06b43f145]::de::Visitor>::expecting */

void <<libdiscore_common[1cb84820f9455fa0]::actions::guilds::BackgroundSyncGuild_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,"struct variant BackgroundSyncGuild::Unavailable",0x2f);
  return;
}


// ===== 00715ab0  FUN_00715ab0 =====

void FUN_00715ab0(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,"()",2);
  return;
}


// ===== 00715ac4  FUN_00715ac4 =====

void FUN_00715ac4(long param_1,undefined8 param_2)

{
  undefined8 local_38;
  long lStack_30;
  undefined1 *local_28;
  undefined8 *local_20;
  undefined1 uStack_11;
  
  if ((int)*(undefined8 *)(param_1 + 8) == 0) {
    return;
  }
  local_28 = &uStack_11;
  local_20 = &local_38;
  local_38 = param_2;
  lStack_30 = param_1;
  <std::sys::sync::once::futex::[0]::std::sys::sync::once::futex::Once>::call
            ((undefined8 *)(param_1 + 8),1,&local_20,&DAT_00ad60c8,
             &PTR_s__nix_store_8006w282fgsx3273c878b_00ad60f0);
  return;
}


// ===== 00715b20  FUN_00715b20 =====

void FUN_00715b20(void *param_1)

{
  if (*(long *)((long)param_1 + 8) == 2) {
                    /* try { // try from 00715b3c to 00715b43 has its CatchHandler @ 00715b5c */
    FUN_0071d624((long)param_1 + 0x10);
  }
  free(param_1);
  return;
}


// ===== 00715b78  FUN_00715b78 =====

void FUN_00715b78(void *param_1)

{
  if (*(long *)((long)param_1 + 8) == 2) {
                    /* try { // try from 00715b94 to 00715b9b has its CatchHandler @ 00715bb4 */
    FUN_0071d624((long)param_1 + 0x10);
  }
  free(param_1);
  return;
}


// ===== 00715bd0  FUN_00715bd0 =====

void FUN_00715bd0(void *param_1)

{
  if (*(long *)((long)param_1 + 8) == 2) {
                    /* try { // try from 00715bec to 00715bf3 has its CatchHandler @ 00715c20 */
    FUN_0071d624((long)param_1 + 0x10);
  }
  if (*(long *)((long)param_1 + 0x38) != 0) {
    free(*(void **)((long)param_1 + 0x40));
  }
  free(param_1);
  return;
}


// ===== 00715c50  FUN_00715c50 =====

void FUN_00715c50(void *param_1)

{
  if (*(long *)((long)param_1 + 8) == 2) {
                    /* try { // try from 00715c6c to 00715c73 has its CatchHandler @ 00715c94 */
    FUN_0071d624((long)param_1 + 0x10);
  }
                    /* try { // try from 00715c74 to 00715c7b has its CatchHandler @ 00715ca8 */
  FUN_00719750((long)param_1 + 0x38);
  free(param_1);
  return;
}


// ===== 00715cc4  FUN_00715cc4 =====

void FUN_00715cc4(void *param_1)

{
  ulong uVar1;
  long local_28;
  
  if (*(long *)((long)param_1 + 8) == 2) {
                    /* try { // try from 00715ce4 to 00715ceb has its CatchHandler @ 00715d7c */
    FUN_0071d624((long)param_1 + 0x10);
  }
  if (*(long *)((long)param_1 + 0x38) == -1) {
    uVar1 = *(ulong *)((long)param_1 + 0x40) & 3;
    if ((1 < uVar1 - 2) && (uVar1 != 0)) {
      local_28 = *(ulong *)((long)param_1 + 0x40) - 1;
                    /* try { // try from 00715d38 to 00715d3f has its CatchHandler @ 00715d60 */
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_28);
    }
  }
  else if (*(long *)((long)param_1 + 0x38) != 0) {
    free(*(void **)((long)param_1 + 0x40));
  }
  free(param_1);
  return;
}


// ===== 00715da4  FUN_00715da4 =====

void FUN_00715da4(void *param_1,long *param_2)

{
  if (param_2[1] == 0x24c161f26c70c1f1 && *param_2 == -0x4609fd23a01609a4) {
    if (*(long *)((long)param_1 + 8) == 2) {
                    /* try { // try from 00715df0 to 00715df7 has its CatchHandler @ 00715e28 */
      FUN_0071d624((long)param_1 + 0x10);
    }
  }
  else if (*(long *)((long)param_1 + 8) == 2) {
                    /* try { // try from 00715e04 to 00715e0b has its CatchHandler @ 00715e24 */
    FUN_0071d624((long)param_1 + 0x10);
  }
  free(param_1);
  return;
}


// ===== 00715e44  FUN_00715e44 =====

void FUN_00715e44(void *param_1,long *param_2)

{
  if (param_2[1] == 0x24c161f26c70c1f1 && *param_2 == -0x4609fd23a01609a4) {
    if (*(long *)((long)param_1 + 8) == 2) {
                    /* try { // try from 00715e90 to 00715e97 has its CatchHandler @ 00715ec8 */
      FUN_0071d624((long)param_1 + 0x10);
    }
  }
  else if (*(long *)((long)param_1 + 8) == 2) {
                    /* try { // try from 00715ea4 to 00715eab has its CatchHandler @ 00715ec4 */
    FUN_0071d624((long)param_1 + 0x10);
  }
  free(param_1);
  return;
}


// ===== 00715ee4  FUN_00715ee4 =====

void FUN_00715ee4(void *param_1)

{
  if (*(long *)((long)param_1 + 8) == 2) {
                    /* try { // try from 00715f00 to 00715f07 has its CatchHandler @ 00715f20 */
    FUN_0071d624((long)param_1 + 0x10);
  }
  free(param_1);
  return;
}


// ===== 00715f3c  FUN_00715f3c =====

void FUN_00715f3c(void *param_1)

{
  if (*(long *)((long)param_1 + 8) == 2) {
                    /* try { // try from 00715f58 to 00715f5f has its CatchHandler @ 00715f78 */
    FUN_0071d624((long)param_1 + 0x10);
  }
  free(param_1);
  return;
}


// ===== 00715f94  FUN_00715f94 =====

void FUN_00715f94(void *param_1)

{
  if (*(long *)((long)param_1 + 8) == 2) {
                    /* try { // try from 00715fb0 to 00715fb7 has its CatchHandler @ 00715fd0 */
    FUN_0071d624((long)param_1 + 0x10);
  }
  free(param_1);
  return;
}


// ===== 00715fec  FUN_00715fec =====

undefined1  [16] FUN_00715fec(void *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  uVar1 = *(undefined8 *)((long)param_1 + 0x38);
  uVar2 = *(undefined8 *)((long)param_1 + 0x40);
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  auVar4._0_8_ = (undefined8 *)FUN_004b25a4(0x10,8);
  if (auVar4._0_8_ != (undefined8 *)0x0) {
    lVar3 = *(long *)((long)param_1 + 8);
    *auVar4._0_8_ = uVar1;
    auVar4._0_8_[1] = uVar2;
    if (lVar3 == 2) {
                    /* try { // try from 0071602c to 00716033 has its CatchHandler @ 00716070 */
      FUN_0071d624((long)param_1 + 0x10);
    }
    free(param_1);
    auVar4._8_8_ = &UNK_00ad6168;
    return auVar4;
  }
                    /* try { // try from 00716060 to 0071606b has its CatchHandler @ 0071608c */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x10);
}


// ===== 007160c0  FUN_007160c0 =====

undefined1  [16] FUN_007160c0(void *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  uVar4 = *(undefined8 *)((long)param_1 + 0x40);
  uVar3 = *(undefined8 *)((long)param_1 + 0x38);
  uVar1 = *(undefined8 *)((long)param_1 + 0x48);
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  auVar5._0_8_ = (undefined8 *)FUN_004b25a4(0x18,8);
  if (auVar5._0_8_ != (undefined8 *)0x0) {
    lVar2 = *(long *)((long)param_1 + 8);
    auVar5._0_8_[1] = uVar4;
    *auVar5._0_8_ = uVar3;
    auVar5._0_8_[2] = uVar1;
    if (lVar2 == 2) {
                    /* try { // try from 00716118 to 0071611f has its CatchHandler @ 0071615c */
      FUN_0071d624((long)param_1 + 0x10);
    }
    free(param_1);
    auVar5._8_8_ = &UNK_00ad61e0;
    return auVar5;
  }
                    /* try { // try from 0071614c to 00716157 has its CatchHandler @ 00716178 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x18);
}


// ===== 007161ac  FUN_007161ac =====

undefined1  [16] FUN_007161ac(void *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  uVar1 = *(undefined8 *)((long)param_1 + 0x38);
  uVar2 = *(undefined8 *)((long)param_1 + 0x40);
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  auVar4._0_8_ = (undefined8 *)FUN_004b25a4(0x10,8);
  if (auVar4._0_8_ != (undefined8 *)0x0) {
    lVar3 = *(long *)((long)param_1 + 8);
    *auVar4._0_8_ = uVar1;
    auVar4._0_8_[1] = uVar2;
    if (lVar3 == 2) {
                    /* try { // try from 007161ec to 007161f3 has its CatchHandler @ 00716230 */
      FUN_0071d624((long)param_1 + 0x10);
    }
    free(param_1);
    auVar4._8_8_ = &UNK_00ad6258;
    return auVar4;
  }
                    /* try { // try from 00716220 to 0071622b has its CatchHandler @ 0071624c */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x10);
}


// ===== 00716280  FUN_00716280 =====

undefined1  [16] FUN_00716280(void *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  uVar1 = *(undefined8 *)((long)param_1 + 0x38);
  uVar2 = *(undefined8 *)((long)param_1 + 0x40);
  uVar4 = *(undefined8 *)((long)param_1 + 0x48);
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  auVar5._0_8_ = (undefined8 *)FUN_004b25a4(0x18,8);
  if (auVar5._0_8_ != (undefined8 *)0x0) {
    lVar3 = *(long *)((long)param_1 + 8);
    *auVar5._0_8_ = uVar1;
    auVar5._0_8_[1] = uVar2;
    auVar5._0_8_[2] = uVar4;
    if (lVar3 == 2) {
                    /* try { // try from 007162cc to 007162d3 has its CatchHandler @ 00716314 */
      FUN_0071d624((long)param_1 + 0x10);
    }
    free(param_1);
    auVar5._8_8_ = &PTR_FUN_00ad62d0;
    return auVar5;
  }
                    /* try { // try from 00716304 to 0071630f has its CatchHandler @ 00716330 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x18);
}


// ===== 00716378  FUN_00716378 =====

undefined1  [16] FUN_00716378(void *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  uVar1 = *(undefined8 *)((long)param_1 + 0x38);
  uVar2 = *(undefined8 *)((long)param_1 + 0x40);
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  auVar4._0_8_ = (undefined8 *)FUN_004b25a4(0x10,8);
  if (auVar4._0_8_ != (undefined8 *)0x0) {
    lVar3 = *(long *)((long)param_1 + 8);
    *auVar4._0_8_ = uVar1;
    auVar4._0_8_[1] = uVar2;
    if (lVar3 == 2) {
                    /* try { // try from 007163b8 to 007163bf has its CatchHandler @ 007163fc */
      FUN_0071d624((long)param_1 + 0x10);
    }
    free(param_1);
    auVar4._8_8_ = &UNK_00ad6348;
    return auVar4;
  }
                    /* try { // try from 007163ec to 007163f7 has its CatchHandler @ 00716418 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x10);
}


// ===== 0071644c  FUN_0071644c =====

undefined1  [16] FUN_0071644c(void *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  uVar3 = *(undefined8 *)((long)param_1 + 0x40);
  uVar2 = *(undefined8 *)((long)param_1 + 0x38);
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  auVar4._0_8_ = (undefined8 *)FUN_004b25a4(0x10,8);
  if (auVar4._0_8_ != (undefined8 *)0x0) {
    lVar1 = *(long *)((long)param_1 + 8);
    auVar4._0_8_[1] = uVar3;
    *auVar4._0_8_ = uVar2;
    if (lVar1 == 2) {
                    /* try { // try from 00716494 to 0071649b has its CatchHandler @ 007164d8 */
      FUN_0071d624((long)param_1 + 0x10);
    }
    free(param_1);
    auVar4._8_8_ = &UNK_00ad63c0;
    return auVar4;
  }
                    /* try { // try from 007164c8 to 007164d3 has its CatchHandler @ 007164f4 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x10);
}


// ===== 00716528  FUN_00716528 =====

undefined1  [16] FUN_00716528(void *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  uVar4 = *(undefined8 *)((long)param_1 + 0x40);
  uVar3 = *(undefined8 *)((long)param_1 + 0x38);
  uVar6 = *(undefined8 *)((long)param_1 + 0x50);
  uVar5 = *(undefined8 *)((long)param_1 + 0x48);
  uVar1 = *(undefined8 *)((long)param_1 + 0x58);
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  auVar7._0_8_ = (undefined8 *)FUN_004b25a4(0x28,8);
  if (auVar7._0_8_ != (undefined8 *)0x0) {
    lVar2 = *(long *)((long)param_1 + 8);
    auVar7._0_8_[1] = uVar4;
    *auVar7._0_8_ = uVar3;
    auVar7._0_8_[3] = uVar6;
    auVar7._0_8_[2] = uVar5;
    auVar7._0_8_[4] = uVar1;
    if (lVar2 == 2) {
                    /* try { // try from 00716584 to 0071658b has its CatchHandler @ 007165c8 */
      FUN_0071d624((long)param_1 + 0x10);
    }
    free(param_1);
    auVar7._8_8_ = &PTR_FUN_00ad6438;
    return auVar7;
  }
                    /* try { // try from 007165b8 to 007165c3 has its CatchHandler @ 007165e4 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x28);
}


// ===== 00716624  FUN_00716624 =====

undefined1  [16] FUN_00716624(void *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  uVar4 = *(undefined8 *)((long)param_1 + 0x40);
  uVar3 = *(undefined8 *)((long)param_1 + 0x38);
  uVar1 = *(undefined8 *)((long)param_1 + 0x48);
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  auVar5._0_8_ = (undefined8 *)FUN_004b25a4(0x18,8);
  if (auVar5._0_8_ != (undefined8 *)0x0) {
    lVar2 = *(long *)((long)param_1 + 8);
    auVar5._0_8_[1] = uVar4;
    *auVar5._0_8_ = uVar3;
    auVar5._0_8_[2] = uVar1;
    if (lVar2 == 2) {
                    /* try { // try from 0071667c to 00716683 has its CatchHandler @ 007166c0 */
      FUN_0071d624((long)param_1 + 0x10);
    }
    free(param_1);
    auVar5._8_8_ = &PTR_FUN_00ad64b0;
    return auVar5;
  }
                    /* try { // try from 007166b0 to 007166bb has its CatchHandler @ 007166dc */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x18);
}


// ===== 0071671c  FUN_0071671c =====

void FUN_0071671c(long *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  
  if (param_1 != (long *)0x0) {
    lVar5 = *param_1;
                    /* try { // try from 00716738 to 0071674b has its CatchHandler @ 007167e8 */
    if ((lVar5 != 0) &&
       (iVar3 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec(lVar5),
       iVar3 != 0)) {
      <tokio::runtime::task::raw::tokio::runtime::task::raw::RawTask>::dealloc(lVar5);
    }
                    /* try { // try from 0071674c to 00716753 has its CatchHandler @ 007167f8 */
    FUN_0076ddac(param_1 + 3);
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
                    /* try { // try from 00716770 to 00716777 has its CatchHandler @ 007167e0 */
      <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::runtime::scheduler::multi_thread::queue::Inner<alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::runtime::scheduler::multi_thread::handle::Handle>>>>
      ::drop_slow(param_1 + 3);
    }
    plVar4 = (long *)param_1[1];
    if (plVar4 != (long *)0x0) {
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
                    /* try { // try from 0071679c to 0071679f has its CatchHandler @ 007167c4 */
        <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::park::Inner>>::
        drop_slow();
      }
    }
    free(param_1);
    return;
  }
  return;
}


// ===== 00716868  FUN_00716868 =====

void FUN_00716868(void *param_1)

{
  if (param_1 != (void *)0x0) {
                    /* try { // try from 00716878 to 0071687f has its CatchHandler @ 007168a4 */
    FUN_007198fc();
    free(param_1);
    return;
  }
  return;
}


// ===== 007168c0  FUN_007168c0 =====

void FUN_007168c0(long *param_1)

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
      puVar3 = (undefined8 *)((long)__ptr + 0x20);
      do {
        if (puVar3[-4] != 0) {
          free((void *)puVar3[-3]);
        }
        if (puVar3[-1] != 0) {
          free((void *)*puVar3);
        }
        lVar2 = lVar2 + -1;
        puVar3 = puVar3 + 6;
      } while (lVar2 != 0);
    }
    if (lVar1 != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 00716958  FUN_00716958 =====

void FUN_00716958(long *param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  code *pcVar2;
  
  if (*param_1 != 0) {
    if (param_1[1] != 0) {
                    /* WARNING: Could not recover jumptable at 0x00716988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1[1] + 0x20))(param_1 + 4,param_1[2],param_1[3]);
      return;
    }
    __ptr = (void *)param_1[2];
    puVar1 = (undefined8 *)param_1[3];
    pcVar2 = (code *)*puVar1;
    if (pcVar2 != (code *)0x0) {
                    /* try { // try from 00716998 to 0071699f has its CatchHandler @ 007169c8 */
      (*pcVar2)(__ptr);
    }
    if (puVar1[1] != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 007169ec  FUN_007169ec =====

void FUN_007169ec(long *param_1)

{
  char cVar1;
  bool bVar2;
  void *__ptr;
  long *plVar3;
  long lVar4;
  
  if (*param_1 != 2) {
    if (param_1[1] == -1) {
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
        <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::park::Inner>>::drop_slow(param_1 + 2);
        return;
      }
    }
    else {
      if (param_1[1] != 0) {
        free((void *)param_1[2]);
      }
      close((int)param_1[4]);
      close((int)param_1[6]);
      plVar3 = (long *)param_1[5];
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
                    /* try { // try from 00716a64 to 00716a67 has its CatchHandler @ 00716ad0 */
        <alloc::sync::[n]::alloc::sync::Arc<()>>::drop_slow();
      }
      __ptr = (void *)param_1[7];
      if (__ptr != (void *)0xffffffffffffffff) {
        plVar3 = (long *)((long)__ptr + 8);
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
          free(__ptr);
          return;
        }
      }
    }
  }
  return;
}


// ===== 00716ae4  FUN_00716ae4 =====

void FUN_00716ae4(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (*param_1 != 2) {
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
        drop_slow(param_1 + 1);
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
        ::drop_slow(param_1 + 1);
        return;
      }
    }
  }
  return;
}


// ===== 00716b40  FUN_00716b40 =====

void FUN_00716b40(long *param_1)

{
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 00716b58  FUN_00716b58 =====

void FUN_00716b58(long *param_1)

{
  void *__ptr;
  long lVar1;
  long lVar2;
  
  __ptr = (void *)param_1[1];
  lVar2 = param_1[2] + 1;
  lVar1 = (long)__ptr + 0x38;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 00716b94 to 00716b97 has its CatchHandler @ 00716be0 */
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


// ===== 00716c34  FUN_00716c34 =====

void FUN_00716c34(long *param_1)

{
                    /* try { // try from 00716c44 to 00716c47 has its CatchHandler @ 00716c78 */
  FUN_00766164();
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 00716ca0  FUN_00716ca0 =====

void FUN_00716ca0(long *param_1)

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
      puVar2 = puVar2 + 0xb;
    } while (lVar1 != 0);
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 00716d20  FUN_00716d20 =====

void FUN_00716d20(void *param_1,undefined8 *param_2)

{
  if ((code *)*param_2 != (code *)0x0) {
                    /* try { // try from 00716d40 to 00716d47 has its CatchHandler @ 00716d78 */
    (*(code *)*param_2)(param_1);
  }
  if (param_2[1] != 0) {
    free(param_1);
    return;
  }
  return;
}


// ===== 00716d98  FUN_00716d98 =====

void FUN_00716d98(long *param_1)

{
  if (*param_1 != 0) {
    free((void *)param_1[1]);
  }
  free(param_1);
  return;
}


// ===== 00716dd8  FUN_00716dd8 =====

void FUN_00716dd8(void *param_1)

{
                    /* try { // try from 00716de8 to 00716def has its CatchHandler @ 00716e44 */
  FUN_0076555c((long)param_1 + 0x40);
  if (*(long *)((long)param_1 + 0x40) != 0) {
    free(*(void **)((long)param_1 + 0x48));
  }
                    /* try { // try from 00716e08 to 00716e0f has its CatchHandler @ 00716e28 */
  FUN_007169ec(param_1);
  free(param_1);
  return;
}


// ===== 00716e84  FUN_00716e84 =====

void FUN_00716e84(long param_1,void *param_2)

{
  int iVar1;
  
  if (1 < param_1 + 1U) {
    if (param_1 != -2) {
      free(param_2);
      return;
    }
    iVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::drop_join_handle_fast
                      (param_2);
    if (iVar1 != 0) {
      <tokio::runtime::task::raw::tokio::runtime::task::raw::RawTask>::drop_join_handle_slow
                (param_2);
      return;
    }
  }
  return;
}


// ===== 00716eec  FUN_00716eec =====

void FUN_00716eec(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 00716efc to 00716eff has its CatchHandler @ 00716f3c */
  FUN_0074fb84();
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
      <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<core::result::Result<libdiscore_common::core::http::ParsedHttpResponse<std::collections::hash::set::HashSet<alloc::string::String>>,{backref_37}::HttpError>>>>
      ::drop_slow(param_1);
      return;
    }
  }
  return;
}


// ===== 00716f74  FUN_00716f74 =====

void FUN_00716f74(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long local_50;
  void *pvStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar5 = *param_1;
  if (lVar5 != 0) {
    puVar1 = (ulong *)(lVar5 + 0xb0);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 | 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 10) == 8) {
                    /* try { // try from 00716fc0 to 0071702f has its CatchHandler @ 0071707c */
      (**(code **)(*(long *)(lVar5 + 0x90) + 0x10))(*(undefined8 *)(lVar5 + 0x98));
    }
    if (((uint)uVar6 >> 1 & 1) != 0) {
      uStack_68 = *(undefined8 *)(lVar5 + 0x58);
      local_70 = *(undefined8 *)(lVar5 + 0x50);
      uStack_58 = *(undefined8 *)(lVar5 + 0x68);
      uStack_60 = *(undefined8 *)(lVar5 + 0x60);
      pvStack_48 = *(void **)(lVar5 + 0x78);
      local_50 = *(long *)(lVar5 + 0x70);
      uStack_38 = *(undefined8 *)(lVar5 + 0x88);
      uStack_40 = *(undefined8 *)(lVar5 + 0x80);
      uStack_a8 = *(undefined8 *)(lVar5 + 0x18);
      local_b0 = *(long *)(lVar5 + 0x10);
      uStack_98 = *(undefined8 *)(lVar5 + 0x28);
      uStack_a0 = *(undefined8 *)(lVar5 + 0x20);
      uStack_88 = *(undefined8 *)(lVar5 + 0x38);
      local_90 = *(undefined8 *)(lVar5 + 0x30);
      uStack_78 = *(undefined8 *)(lVar5 + 0x48);
      uStack_80 = *(undefined8 *)(lVar5 + 0x40);
      *(undefined8 *)(lVar5 + 0x10) = 0xfffffffffffffffe;
      if (local_b0 != -2) {
        if (local_b0 == -1) {
          FUN_0074d924((ulong)&local_b0 | 8);
        }
        else {
          if (local_50 != 0) {
            free(pvStack_48);
          }
          FUN_0074db38(&local_b0);
        }
      }
    }
    plVar4 = (long *)*param_1;
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
        <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<core::result::Result<libdiscore_common::core::http::ParsedHttpResponse<alloc::string::String>,{backref_37}::HttpError>>>>
        ::drop_slow(param_1);
        return;
      }
    }
  }
  return;
}


// ===== 007170b4  FUN_007170b4 =====

void FUN_007170b4(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  lVar5 = *param_1;
  if (lVar5 != 0) {
    puVar1 = (ulong *)(lVar5 + 0x30);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 | 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 10) == 8) {
                    /* try { // try from 00717100 to 00717163 has its CatchHandler @ 007171b0 */
      (**(code **)(*(long *)(lVar5 + 0x10) + 0x10))(*(undefined8 *)(lVar5 + 0x18));
    }
    if (((uint)uVar6 >> 1 & 1) != 0) {
      uStack_78 = *(undefined8 *)(lVar5 + 0x90);
      uStack_80 = *(undefined8 *)(lVar5 + 0x88);
      uStack_88 = *(undefined8 *)(lVar5 + 0x80);
      local_90 = *(undefined8 *)(lVar5 + 0x78);
      uStack_a8 = *(undefined8 *)(lVar5 + 0x60);
      local_b0 = *(undefined8 *)(lVar5 + 0x58);
      uStack_98 = *(undefined8 *)(lVar5 + 0x70);
      uStack_a0 = *(undefined8 *)(lVar5 + 0x68);
      local_40 = *(undefined8 *)(lVar5 + 200);
      uStack_48 = *(undefined8 *)(lVar5 + 0xc0);
      uStack_50 = *(undefined8 *)(lVar5 + 0xb8);
      uStack_58 = *(undefined8 *)(lVar5 + 0xb0);
      local_60 = *(undefined8 *)(lVar5 + 0xa8);
      uStack_68 = *(undefined8 *)(lVar5 + 0xa0);
      local_70 = *(undefined8 *)(lVar5 + 0x98);
      uStack_c8 = *(undefined8 *)(lVar5 + 0x40);
      local_d0 = *(long *)(lVar5 + 0x38);
      uStack_b8 = *(undefined8 *)(lVar5 + 0x50);
      uStack_c0 = *(undefined8 *)(lVar5 + 0x48);
      *(undefined8 *)(lVar5 + 0x38) = 0xfffffffffffffffe;
      if (local_d0 != -2) {
        FUN_0074c72c(&local_d0);
      }
    }
    plVar4 = (long *)*param_1;
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
        <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<core::result::Result<libdiscore_common::core::http::ParsedHttpResponse<{backref_41}::stores::blocked_domains::DeltaResponse>,{backref_37}::HttpError>>>>
        ::drop_slow(param_1);
        return;
      }
    }
  }
  return;
}


// ===== 007171e8  FUN_007171e8 =====

void FUN_007171e8(int *param_1,uint param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  
  if (((param_2 & 1) == 0) &&
     ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0 & 0x7fffffffffffffff) != 0)) {
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
  <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake();
  return;
}


// ===== 00717258  FUN_00717258 =====

void FUN_00717258(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *param_1;
  plVar3 = (long *)(lVar5 + 0x1f0);
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
                    /* try { // try from 00717284 to 00717293 has its CatchHandler @ 007172cc */
    FUN_0073a19c(lVar5 + 0x80);
    <tokio::sync::task::atomic_waker::[0]::tokio::sync::task::atomic_waker::AtomicWaker>::wake
              (lVar5 + 0x100);
  }
  plVar3 = (long *)*param_1;
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
    <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::sync::mpsc::chan::Chan<libdiscore_common[1cb84820f9455fa0]::core::http::BackendHttpRequest,tokio[8c8895dbfa691109]::sync::mpsc::bounded::Semaphore>>>
    ::drop_slow(param_1);
    return;
  }
  return;
}


// ===== 00717300  FUN_00717300 =====

void FUN_00717300(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long local_48;
  long lStack_40;
  long local_38;
  
  lVar4 = *param_1;
  if ((*(byte *)(lVar4 + 0x1b8) & 1) == 0) {
    *(undefined1 *)(lVar4 + 0x1b8) = 1;
  }
                    /* try { // try from 00717330 to 0071733f has its CatchHandler @ 007173bc */
  <tokio::sync::mpsc::bounded::Semaphore_as_tokio::sync::mpsc::chan::Semaphore>::close
            (lVar4 + 0x1c0);
  <tokio::sync::notify::[4]::tokio::sync::notify::Notify>::notify_waiters(lVar4 + 0x180);
  local_48 = lVar4 + 0x1a0;
  lStack_40 = lVar4 + 0x80;
                    /* try { // try from 00717350 to 00717357 has its CatchHandler @ 007173a8 */
  local_38 = lVar4 + 0x1c0;
  FUN_0074e060(&local_48);
                    /* try { // try from 00717358 to 0071735f has its CatchHandler @ 007173bc */
  FUN_0074e060(&local_48);
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
    <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::sync::mpsc::chan::Chan<libdiscore_common[1cb84820f9455fa0]::core::http::BackendHttpRequest,tokio[8c8895dbfa691109]::sync::mpsc::bounded::Semaphore>>>
    ::drop_slow(param_1);
    return;
  }
  return;
}


// ===== 007173f0  FUN_007173f0 =====

void FUN_007173f0(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 00717400 to 00717403 has its CatchHandler @ 0071743c */
  FUN_0076ddac();
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
    <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::runtime::scheduler::multi_thread::queue::Inner<alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::runtime::scheduler::multi_thread::handle::Handle>>>>
    ::drop_slow(param_1);
    return;
  }
  return;
}


// ===== 00717470  FUN_00717470 =====

void FUN_00717470(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  void *pvVar8;
  
  if ((char)param_1[0xa7] == '\0') {
    plVar3 = (long *)param_1[0x1a];
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
                    /* try { // try from 0071754c to 0071754f has its CatchHandler @ 00717d24 */
      <alloc::sync::[n]::alloc::sync::Arc<reqwest::async_impl::client::ClientRef>>::drop_slow();
    }
    if (param_1[0x11] != 0) {
      free((void *)param_1[0x12]);
    }
    if ((9 < *(byte *)(param_1 + 0x17)) && (param_1[0x19] != 0)) {
      free((void *)param_1[0x18]);
    }
    if (*param_1 != 0) {
      if (param_1[1] == 0) {
        pvVar8 = (void *)param_1[2];
        puVar6 = (undefined8 *)param_1[3];
        pcVar4 = (code *)*puVar6;
        if (pcVar4 != (code *)0x0) {
                    /* try { // try from 00717660 to 00717667 has its CatchHandler @ 00717c80 */
          (*pcVar4)(pvVar8);
        }
        if (puVar6[1] != 0) {
          free(pvVar8);
        }
      }
      else {
                    /* try { // try from 0071759c to 007175a3 has its CatchHandler @ 00717d1c */
        (**(code **)(param_1[1] + 0x20))(param_1 + 4,param_1[2],param_1[3]);
      }
    }
    lVar5 = param_1[0x14];
    if (lVar5 != -1) {
      lVar7 = param_1[0x16];
      if (lVar7 != 0) {
        puVar6 = (undefined8 *)(param_1[0x15] + 0x20);
        do {
          if (puVar6[-4] != 0) {
            free((void *)puVar6[-3]);
          }
          if (puVar6[-1] != 0) {
            free((void *)*puVar6);
          }
          lVar7 = lVar7 + -1;
          puVar6 = puVar6 + 6;
        } while (lVar7 != 0);
        lVar5 = param_1[0x14];
      }
      if (lVar5 != 0) {
        free((void *)param_1[0x15]);
      }
    }
    if (param_1[5] != -1) {
                    /* try { // try from 00717700 to 00717703 has its CatchHandler @ 00717d90 */
      FUN_00719f78();
    }
    pvVar8 = (void *)param_1[0x1b];
    puVar6 = (undefined8 *)param_1[0x1c];
    if ((code *)*puVar6 != (code *)0x0) {
                    /* try { // try from 00717710 to 00717717 has its CatchHandler @ 00717d70 */
      (*(code *)*puVar6)(pvVar8);
    }
    goto LAB_00717a20;
  }
  if ((char)param_1[0xa7] != '\x03') {
    return;
  }
  cVar1 = (char)param_1[0x53];
  if (cVar1 == '\x04') {
    if ((char)param_1[0x9a] == '\0') {
                    /* try { // try from 00717868 to 0071786f has its CatchHandler @ 00717b80 */
      FUN_00719f78(param_1 + 0x66);
      pvVar8 = (void *)param_1[0x72];
      if (pvVar8 != (void *)0x0) {
                    /* try { // try from 00717878 to 0071787f has its CatchHandler @ 00717ae4 */
        FUN_007040a0(pvVar8);
        free(pvVar8);
      }
      puVar6 = (undefined8 *)param_1[0x75];
      pvVar8 = (void *)param_1[0x74];
      pcVar4 = (code *)*puVar6;
      if (pcVar4 != (code *)0x0) {
                    /* try { // try from 007178a0 to 007178a7 has its CatchHandler @ 00717ac4 */
        (*pcVar4)(pvVar8);
      }
      if (puVar6[1] != 0) {
        free(pvVar8);
      }
      plVar3 = (long *)param_1[0x76];
LAB_007178c0:
      if (*plVar3 != 0) {
        free((void *)plVar3[1]);
      }
      free(plVar3);
    }
    else if ((char)param_1[0x9a] == '\x03') {
      if (param_1[0x88] != -2) {
                    /* try { // try from 007175ec to 007175f3 has its CatchHandler @ 00717a74 */
        FUN_00765698(param_1 + 0x94);
        if (param_1[0x94] != 0) {
          free((void *)param_1[0x95]);
        }
        if (param_1[0x88] != -1) {
                    /* try { // try from 00717618 to 0071761f has its CatchHandler @ 00717a50 */
          FUN_00719f78(param_1 + 0x88);
        }
      }
      puVar6 = (undefined8 *)param_1[0x99];
      pvVar8 = (void *)param_1[0x98];
      pcVar4 = (code *)*puVar6;
      if (pcVar4 != (code *)0x0) {
                    /* try { // try from 00717630 to 00717637 has its CatchHandler @ 00717afc */
        (*pcVar4)(pvVar8);
      }
      if (puVar6[1] != 0) {
        free(pvVar8);
      }
      plVar3 = (long *)param_1[0x87];
      goto LAB_007178c0;
    }
                    /* try { // try from 007178e4 to 007178eb has its CatchHandler @ 00717cb4 */
    FUN_00719f78(param_1 + 0x9b);
    lVar5 = 0x1b1;
LAB_007178f0:
    *(undefined1 *)((long)(param_1 + 0x1d) + lVar5) = 0;
    *(undefined1 *)((long)param_1 + 0x29a) = 0;
    *(undefined2 *)((long)param_1 + 0x29c) = 0;
    *(undefined1 *)((long)param_1 + 0x29e) = 0;
    if ((9 < *(byte *)(param_1 + 0x3c)) && (param_1[0x3e] != 0)) {
      free((void *)param_1[0x3d]);
    }
    if (param_1[0x39] != 0) {
      free((void *)param_1[0x3a]);
    }
    plVar3 = (long *)param_1[0x38];
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
                    /* try { // try from 00717950 to 00717957 has its CatchHandler @ 00717cac */
      <alloc::sync::[n]::alloc::sync::Arc<reqwest::async_impl::client::ClientRef>>::drop_slow
                (param_1 + 0x38);
    }
  }
  else {
    if (cVar1 == '\x03') {
      if (param_1[0x54] == 2) {
        if (param_1[0x55] != 0) {
                    /* try { // try from 007175bc to 007175c3 has its CatchHandler @ 00717b78 */
          FUN_00719000(param_1 + 0x55);
        }
      }
      else {
        if ((9 < *(byte *)(param_1 + 0x75)) && (param_1[0x77] != 0)) {
          free((void *)param_1[0x76]);
        }
        if (param_1[0x65] != 0) {
          free((void *)param_1[0x66]);
        }
                    /* try { // try from 00717750 to 00717757 has its CatchHandler @ 00717bc4 */
        FUN_00719f78(param_1 + 0x59);
        if ((param_1[0x54] != 0) && (param_1[0x55] != 0)) {
                    /* try { // try from 00717774 to 0071777b has its CatchHandler @ 00717abc */
          (**(code **)(param_1[0x55] + 0x20))(param_1 + 0x58,param_1[0x56],param_1[0x57]);
        }
        lVar5 = param_1[0x72];
        if (lVar5 != 0) {
          puVar6 = (undefined8 *)(param_1[0x71] + 8);
          do {
            if (puVar6[-1] != 0) {
              free((void *)*puVar6);
            }
            lVar5 = lVar5 + -1;
            puVar6 = puVar6 + 0xb;
          } while (lVar5 != 0);
        }
        if (param_1[0x70] != 0) {
          free((void *)param_1[0x71]);
        }
        plVar3 = (long *)param_1[0x78];
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
                    /* try { // try from 007177ec to 007177f3 has its CatchHandler @ 00717b20 */
          <alloc::sync::[n]::alloc::sync::Arc<reqwest::async_impl::client::ClientRef>>::drop_slow
                    (param_1 + 0x78);
        }
        puVar6 = (undefined8 *)param_1[0x7a];
        pvVar8 = (void *)param_1[0x79];
        pcVar4 = (code *)*puVar6;
        if (pcVar4 != (code *)0x0) {
                    /* try { // try from 00717804 to 0071780b has its CatchHandler @ 00717b58 */
          (*pcVar4)(pvVar8);
        }
        if (puVar6[1] != 0) {
          free(pvVar8);
        }
        pvVar8 = (void *)param_1[0x7c];
        if (pvVar8 != (void *)0x0) {
                    /* try { // try from 00717828 to 0071782f has its CatchHandler @ 00717b40 */
          FUN_007198fc(pvVar8);
          free(pvVar8);
        }
        pvVar8 = (void *)param_1[0x7d];
        if (pvVar8 != (void *)0x0) {
                    /* try { // try from 00717848 to 0071784f has its CatchHandler @ 00717b28 */
          FUN_007198fc(pvVar8);
          free(pvVar8);
        }
      }
      lVar5 = 0x1b3;
      goto LAB_007178f0;
    }
    if (cVar1 == '\0') {
      plVar3 = (long *)param_1[0x37];
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
                    /* try { // try from 007174cc to 007174d3 has its CatchHandler @ 00717c40 */
        <alloc::sync::[n]::alloc::sync::Arc<reqwest::async_impl::client::ClientRef>>::drop_slow
                  (param_1 + 0x37);
      }
      if (param_1[0x2e] != 0) {
        free((void *)param_1[0x2f]);
      }
      if ((9 < *(byte *)(param_1 + 0x34)) && (param_1[0x36] != 0)) {
        free((void *)param_1[0x35]);
      }
      if (param_1[0x1d] != 0) {
        if (param_1[0x1e] == 0) {
          pvVar8 = (void *)param_1[0x1f];
          puVar6 = (undefined8 *)param_1[0x20];
          pcVar4 = (code *)*puVar6;
          if (pcVar4 != (code *)0x0) {
                    /* try { // try from 00717968 to 0071796f has its CatchHandler @ 00717a58 */
            (*pcVar4)(pvVar8);
          }
          if (puVar6[1] != 0) {
            free(pvVar8);
          }
        }
        else {
                    /* try { // try from 00717520 to 00717527 has its CatchHandler @ 00717bbc */
          (**(code **)(param_1[0x1e] + 0x20))(param_1 + 0x21,param_1[0x1f],param_1[0x20]);
        }
      }
      if (param_1[0x22] != -1) {
                    /* try { // try from 00717990 to 00717997 has its CatchHandler @ 00717c9c */
        FUN_00719f78(param_1 + 0x22);
      }
      lVar5 = param_1[0x31];
      if (lVar5 != -1) {
        lVar7 = param_1[0x33];
        if (lVar7 != 0) {
          puVar6 = (undefined8 *)(param_1[0x32] + 0x20);
          do {
            if (puVar6[-4] != 0) {
              free((void *)puVar6[-3]);
            }
            if (puVar6[-1] != 0) {
              free((void *)*puVar6);
            }
            lVar7 = lVar7 + -1;
            puVar6 = puVar6 + 6;
          } while (lVar7 != 0);
          lVar5 = param_1[0x31];
        }
        if (lVar5 != 0) {
          free((void *)param_1[0x32]);
        }
      }
    }
  }
  pvVar8 = (void *)param_1[0x1b];
  puVar6 = (undefined8 *)param_1[0x1c];
  if ((code *)*puVar6 != (code *)0x0) {
                    /* try { // try from 00717a18 to 00717a1f has its CatchHandler @ 00717d6c */
    (*(code *)*puVar6)(pvVar8);
  }
LAB_00717a20:
  if (puVar6[1] == 0) {
    return;
  }
  free(pvVar8);
  return;
}


// ===== 00717da8  FUN_00717da8 =====

void FUN_00717da8(undefined8 *param_1)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  if (*(char *)(param_1 + 0xd8) == '\0') {
    plVar6 = (long *)*param_1;
    do {
      lVar4 = *plVar6 + -1;
      cVar1 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    goto joined_r0x00717e10;
  }
  if (*(char *)(param_1 + 0xd8) != '\x03') {
    return;
  }
  cVar1 = *(char *)(param_1 + 3);
  if (cVar1 == '\x05') {
LAB_00717de4:
    if (*(char *)(param_1 + 0x15) == '\x03') {
                    /* try { // try from 00717df0 to 00717df7 has its CatchHandler @ 007183e4 */
      FUN_007198fc(param_1 + 6);
    }
  }
  else {
    if (cVar1 != '\x04') {
      if (cVar1 != '\x03') goto LAB_007181c0;
      goto LAB_00717de4;
    }
    bVar2 = *(byte *)((long)param_1 + 0xb2);
    if (bVar2 < 6) {
      if (bVar2 == 3) {
                    /* try { // try from 00717ef8 to 00717eff has its CatchHandler @ 007183a8 */
        FUN_0071870c(param_1 + 0x32);
        if (param_1[0x28] != 0) {
          free((void *)param_1[0x29]);
        }
      }
      else if (bVar2 == 4) {
        if (*(char *)((long)param_1 + 0x6b9) != '\x03') goto LAB_00717ffc;
        if (*(char *)(param_1 + 0xd3) == '\0') {
          lVar4 = 0xe0;
LAB_00717fe4:
                    /* try { // try from 00717fe8 to 00717fef has its CatchHandler @ 00718348 */
          FUN_00719258((long)param_1 + lVar4 + 0xb8);
        }
        else if (*(char *)(param_1 + 0xd3) == '\x03') {
          cVar1 = *(char *)(param_1 + 0x86);
          if (cVar1 == '\x04') {
                    /* try { // try from 0071804c to 00718053 has its CatchHandler @ 00718248 */
            FUN_0074fd24(param_1 + 0x88);
            plVar6 = (long *)param_1[0x88];
            if (plVar6 != (long *)0x0) {
              do {
                lVar4 = *plVar6;
                cVar1 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
                if (bVar3) {
                  *plVar6 = lVar4 + -1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
              if (lVar4 + -1 == 0) {
                DataMemoryBarrier(2,1);
                    /* try { // try from 00718074 to 0071807b has its CatchHandler @ 007181ec */
                <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<core::result::Result<libdiscore_common::core::http::ParsedHttpResponse<{backref_41}::stores::blocked_domains::DeltaResponse>,{backref_37}::HttpError>>>>
                ::drop_slow(param_1 + 0x88);
              }
            }
          }
          else {
            if (cVar1 != '\x03') {
              if (cVar1 == '\0') {
                lVar4 = 0x1c0;
                goto LAB_00717fe4;
              }
              goto LAB_007180f4;
            }
                    /* try { // try from 0071803c to 00718043 has its CatchHandler @ 0071827c */
            FUN_0071864c(param_1 + 0x89);
          }
          if ((*(byte *)((long)param_1 + 0x431) & 1) != 0) {
                    /* try { // try from 00718088 to 0071808f has its CatchHandler @ 00718214 */
            FUN_0074fd24(param_1 + 0x88);
            plVar6 = (long *)param_1[0x88];
            if (plVar6 != (long *)0x0) {
              do {
                lVar4 = *plVar6;
                cVar1 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
                if (bVar3) {
                  *plVar6 = lVar4 + -1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
              if (lVar4 + -1 == 0) {
                DataMemoryBarrier(2,1);
                    /* try { // try from 007180b0 to 007180b7 has its CatchHandler @ 007181e4 */
                <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<core::result::Result<libdiscore_common::core::http::ParsedHttpResponse<{backref_41}::stores::blocked_domains::DeltaResponse>,{backref_37}::HttpError>>>>
                ::drop_slow(param_1 + 0x88);
              }
            }
          }
          plVar6 = (long *)param_1[0x85];
          *(undefined1 *)((long)param_1 + 0x433) = 0;
          *(undefined2 *)((long)param_1 + 0x431) = 0;
          if (plVar6 != (long *)0x0) {
            do {
              lVar4 = *plVar6;
              cVar1 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
              if (bVar3) {
                *plVar6 = lVar4 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (lVar4 + -1 == 0) {
              DataMemoryBarrier(2,1);
                    /* try { // try from 007180e4 to 007180eb has its CatchHandler @ 007181f0 */
              <alloc::sync::[n]::alloc::sync::Arc<std::sync::poison::mutex::Mutex<core::option::Option<alloc::boxed::Box<dyn_Trait<Assoc=X>+{backref_26}::ops::function::Fn<(libdiscore_common::core::http::ProgressEvent)>+{backref_26}::marker::Sync+{backref_71}::Send>>>>>
              ::drop_slow(param_1 + 0x85);
            }
          }
          *(undefined1 *)(param_1 + 0x87) = 0;
          *(undefined4 *)((long)param_1 + 0x434) = 0;
        }
LAB_007180f4:
        if (param_1[0x29] != 0) {
          free((void *)param_1[0x2a]);
        }
                    /* try { // try from 00718114 to 0071811b has its CatchHandler @ 0071837c */
        if ((param_1[0x2c] != -1) && (FUN_00766a4c(param_1 + 0x2c), param_1[0x2c] != 0)) {
          free((void *)param_1[0x2d]);
        }
        *(undefined1 *)(param_1 + 0xd7) = 0;
        *(undefined1 *)(param_1 + 0x16) = 0;
      }
      else if (bVar2 == 5) {
                    /* try { // try from 00717e4c to 00717e53 has its CatchHandler @ 007183c4 */
        FUN_00718418(param_1 + 0x17);
        if (param_1[6] == 0) {
          lVar4 = param_1[7] + 0x7ffffffffffffffb;
          if ((ulong)param_1[7] < 0x8000000000000005) {
            lVar4 = 1;
          }
          if (lVar4 != 0) {
            if (lVar4 == 1) {
                    /* try { // try from 00717e8c to 00717e8f has its CatchHandler @ 00718374 */
              FUN_00719750();
            }
            else {
                    /* try { // try from 00717ff4 to 00717ffb has its CatchHandler @ 00718374 */
              <anyhow::Error_as_core::ops::drop::Drop>::drop(param_1 + 8);
            }
          }
        }
LAB_00717ffc:
        *(undefined1 *)(param_1 + 0x16) = 0;
      }
    }
    else if (bVar2 == 6) {
                    /* try { // try from 00717f18 to 00717f1f has its CatchHandler @ 007183e4 */
      FUN_00718418(param_1 + 0x17);
    }
    else {
      if (bVar2 == 7) {
        if (*(char *)((long)param_1 + 0x11a) == '\x03') {
          if (*(char *)(param_1 + 0x1e) == '\x03') {
            if (*(char *)(param_1 + 0x1d) == '\x03') {
                    /* try { // try from 00718018 to 0071801f has its CatchHandler @ 007182d4 */
              FUN_007538a0(param_1 + 0x1c);
            }
            else if ((*(char *)(param_1 + 0x1d) == '\0') && (param_1[0x19] != 0)) {
              free((void *)param_1[0x1a]);
            }
          }
          if (param_1[0x1f] != 0) {
            free((void *)param_1[0x20]);
          }
          *(undefined1 *)((long)param_1 + 0x119) = 0;
        }
      }
      else {
        if (bVar2 != 8) goto LAB_007181c0;
        if (*(char *)(param_1 + 0x26) == '\x04') {
          plVar6 = (long *)param_1[0x27];
          do {
            lVar4 = *plVar6;
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = lVar4 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar4 + -1 == 0) {
            DataMemoryBarrier(2,1);
                    /* try { // try from 00717fbc to 00717fc3 has its CatchHandler @ 007182fc */
            <alloc::sync::[n]::alloc::sync::Arc<std::fs::File>>::drop_slow(param_1 + 0x27);
          }
          lVar4 = param_1[0x2d];
          if (lVar4 == -2) {
                    /* try { // try from 0071800c to 00718013 has its CatchHandler @ 007182f4 */
            FUN_007538a0(param_1 + 0x2e);
          }
          else if (lVar4 != -1) {
            lVar5 = 0x168;
            goto LAB_00718154;
          }
        }
        else if (*(char *)(param_1 + 0x26) == '\x03') {
          if (*(char *)(param_1 + 0x32) == '\0') {
            lVar5 = 0x138;
          }
          else {
            if (*(char *)(param_1 + 0x32) != '\x03') goto LAB_00718168;
            if (*(char *)(param_1 + 0x31) == '\x03') {
                    /* try { // try from 00718144 to 0071814b has its CatchHandler @ 007181f8 */
              FUN_007538a0(param_1 + 0x30);
            }
            else if ((*(char *)(param_1 + 0x31) == '\0') && (param_1[0x2d] != 0)) {
              free((void *)param_1[0x2e]);
            }
            lVar5 = 0x150;
          }
          lVar4 = *(long *)((long)param_1 + lVar5);
LAB_00718154:
          if (lVar4 != 0) {
            free(*(void **)((long)param_1 + lVar5 + 8));
          }
        }
LAB_00718168:
        if (param_1[0x1a] != 0) {
          free((void *)param_1[0x1b]);
        }
        if (param_1[0x17] != 0) {
          free((void *)param_1[0x18]);
        }
      }
      lVar4 = param_1[0xe];
      if ((lVar4 != 0) && (lVar4 * 9 != -0x11)) {
        free((void *)(param_1[0xd] + lVar4 * -8 + -8));
      }
      *(undefined1 *)((long)param_1 + 0xb1) = 0;
    }
  }
LAB_007181c0:
  plVar6 = (long *)*param_1;
  do {
    lVar4 = *plVar6 + -1;
    cVar1 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = lVar4;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
joined_r0x00717e10:
  if (lVar4 != 0) {
    return;
  }
  DataMemoryBarrier(2,1);
  <alloc::sync::[n]::alloc::sync::Arc<libdiscore_common::stores::blocked_domains::BlockedDomainsStore>>
  ::drop_slow(param_1);
  return;
}


// ===== 00718418  FUN_00718418 =====

void FUN_00718418(long param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  
  if (*(char *)(param_1 + 0x5f0) != '\x03') {
    return;
  }
  if (*(char *)(param_1 + 0x5e0) == '\0') {
    lVar3 = 0xe0;
LAB_00718468:
                    /* try { // try from 00718468 to 0071846f has its CatchHandler @ 0071862c */
    FUN_00719258(param_1 + lVar3);
  }
  else if (*(char *)(param_1 + 0x5e0) == '\x03') {
    cVar1 = *(char *)(param_1 + 0x378);
    if (cVar1 == '\x04') {
                    /* try { // try from 0071849c to 007184a3 has its CatchHandler @ 007185a0 */
      FUN_0074fb84(param_1 + 0x388);
      plVar4 = *(long **)(param_1 + 0x388);
      if (plVar4 != (long *)0x0) {
        do {
          lVar3 = *plVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar3 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar3 + -1 == 0) {
          DataMemoryBarrier(2,1);
                    /* try { // try from 007184c4 to 007184cb has its CatchHandler @ 00718560 */
          <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<core::result::Result<libdiscore_common::core::http::ParsedHttpResponse<std::collections::hash::set::HashSet<alloc::string::String>>,{backref_37}::HttpError>>>>
          ::drop_slow(param_1 + 0x388);
        }
      }
    }
    else {
      if (cVar1 != '\x03') {
        if (cVar1 == '\0') {
          lVar3 = 0x1c0;
          goto LAB_00718468;
        }
        goto LAB_00718470;
      }
                    /* try { // try from 0071848c to 00718493 has its CatchHandler @ 007185d4 */
      FUN_0071864c(param_1 + 0x390);
    }
    if ((*(byte *)(param_1 + 0x379) & 1) != 0) {
                    /* try { // try from 007184d8 to 007184df has its CatchHandler @ 0071856c */
      FUN_0074fb84(param_1 + 0x388);
      plVar4 = *(long **)(param_1 + 0x388);
      if (plVar4 != (long *)0x0) {
        do {
          lVar3 = *plVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar3 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar3 + -1 == 0) {
          DataMemoryBarrier(2,1);
                    /* try { // try from 00718500 to 00718507 has its CatchHandler @ 00718558 */
          <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<core::result::Result<libdiscore_common::core::http::ParsedHttpResponse<std::collections::hash::set::HashSet<alloc::string::String>>,{backref_37}::HttpError>>>>
          ::drop_slow(param_1 + 0x388);
        }
      }
    }
    plVar4 = *(long **)(param_1 + 0x370);
    *(undefined1 *)(param_1 + 0x37b) = 0;
    *(undefined2 *)(param_1 + 0x379) = 0;
    if (plVar4 != (long *)0x0) {
      do {
        lVar3 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar3 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar3 + -1 == 0) {
        DataMemoryBarrier(2,1);
                    /* try { // try from 00718534 to 0071853b has its CatchHandler @ 00718564 */
        <alloc::sync::[n]::alloc::sync::Arc<std::sync::poison::mutex::Mutex<core::option::Option<alloc::boxed::Box<dyn_Trait<Assoc=X>+{backref_26}::ops::function::Fn<(libdiscore_common::core::http::ProgressEvent)>+{backref_26}::marker::Sync+{backref_71}::Send>>>>>
        ::drop_slow(param_1 + 0x370);
      }
    }
    *(undefined1 *)(param_1 + 0x380) = 0;
    *(undefined4 *)(param_1 + 0x37c) = 0;
    lVar3 = *(long *)(param_1 + 0x90);
    goto joined_r0x00718548;
  }
LAB_00718470:
  lVar3 = *(long *)(param_1 + 0x90);
joined_r0x00718548:
  if (lVar3 == 0) {
    return;
  }
  free(*(void **)(param_1 + 0x98));
  return;
}


// ===== 0071864c  FUN_0071864c =====

void FUN_0071864c(long param_1)

{
  if (*(char *)(param_1 + 0x248) != '\0') {
    if (*(char *)(param_1 + 0x248) == '\x03') {
      if ((*(char *)(param_1 + 0x240) == '\x03') && (*(char *)(param_1 + 0x1f8) == '\x04')) {
                    /* try { // try from 00718684 to 0071868b has its CatchHandler @ 007186d0 */
        <tokio::sync::batch_semaphore::Acquire_as_core::ops::drop::Drop>::drop(param_1 + 0x200);
        if (*(long *)(param_1 + 0x208) != 0) {
                    /* try { // try from 0071869c to 0071869f has its CatchHandler @ 007186c8 */
          (**(code **)(*(long *)(param_1 + 0x208) + 0x18))(*(undefined8 *)(param_1 + 0x210));
        }
      }
                    /* try { // try from 007186a0 to 007186a7 has its CatchHandler @ 007186fc */
      FUN_00719574(param_1 + 0xe8);
      *(undefined1 *)(param_1 + 0x249) = 0;
    }
    return;
  }
  FUN_00719574(param_1);
  return;
}


// ===== 0071870c  FUN_0071870c =====

void FUN_0071870c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long local_50;
  void *pvStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*(char *)(param_1 + 0x500) == '\0') {
    FUN_00719258(param_1);
    return;
  }
  if (*(char *)(param_1 + 0x500) != '\x03') {
    return;
  }
  cVar2 = *(char *)(param_1 + 0x298);
  if (cVar2 == '\x04') {
    lVar5 = *(long *)(param_1 + 0x2a8);
    if (lVar5 != 0) {
      puVar1 = (ulong *)(lVar5 + 0xb0);
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 | 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar6 & 10) == 8) {
                    /* try { // try from 007187d4 to 00718843 has its CatchHandler @ 007189d4 */
        (**(code **)(*(long *)(lVar5 + 0x90) + 0x10))(*(undefined8 *)(lVar5 + 0x98));
      }
      if (((uint)uVar6 >> 1 & 1) != 0) {
        uStack_68 = *(undefined8 *)(lVar5 + 0x58);
        local_70 = *(undefined8 *)(lVar5 + 0x50);
        uStack_58 = *(undefined8 *)(lVar5 + 0x68);
        uStack_60 = *(undefined8 *)(lVar5 + 0x60);
        pvStack_48 = *(void **)(lVar5 + 0x78);
        local_50 = *(long *)(lVar5 + 0x70);
        uStack_38 = *(undefined8 *)(lVar5 + 0x88);
        uStack_40 = *(undefined8 *)(lVar5 + 0x80);
        uStack_a8 = *(undefined8 *)(lVar5 + 0x18);
        local_b0 = *(long *)(lVar5 + 0x10);
        uStack_98 = *(undefined8 *)(lVar5 + 0x28);
        uStack_a0 = *(undefined8 *)(lVar5 + 0x20);
        uStack_88 = *(undefined8 *)(lVar5 + 0x38);
        local_90 = *(undefined8 *)(lVar5 + 0x30);
        uStack_78 = *(undefined8 *)(lVar5 + 0x48);
        uStack_80 = *(undefined8 *)(lVar5 + 0x40);
        *(undefined8 *)(lVar5 + 0x10) = 0xfffffffffffffffe;
        if (local_b0 != -2) {
          if (local_b0 == -1) {
            FUN_0074d924((ulong)&local_b0 | 8);
          }
          else {
            if (local_50 != 0) {
              free(pvStack_48);
            }
            FUN_0074db38(&local_b0);
          }
        }
      }
      plVar4 = *(long **)(param_1 + 0x2a8);
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
                    /* try { // try from 00718864 to 0071886b has its CatchHandler @ 0071899c */
          <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<core::result::Result<libdiscore_common::core::http::ParsedHttpResponse<alloc::string::String>,{backref_37}::HttpError>>>>
          ::drop_slow(param_1 + 0x2a8);
        }
      }
    }
  }
  else {
    if (cVar2 != '\x03') {
      if (cVar2 != '\0') {
        return;
      }
      FUN_00719258(param_1 + 0xe0);
      return;
    }
                    /* try { // try from 00718790 to 00718797 has its CatchHandler @ 00718a14 */
    FUN_0071864c(param_1 + 0x2b0);
  }
  if (((*(byte *)(param_1 + 0x299) & 1) != 0) && (lVar5 = *(long *)(param_1 + 0x2a8), lVar5 != 0)) {
    puVar1 = (ulong *)(lVar5 + 0xb0);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 | 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 10) == 8) {
                    /* try { // try from 007188ac to 0071891b has its CatchHandler @ 007189a0 */
      (**(code **)(*(long *)(lVar5 + 0x90) + 0x10))(*(undefined8 *)(lVar5 + 0x98));
    }
    if (((uint)uVar6 >> 1 & 1) != 0) {
      uStack_68 = *(undefined8 *)(lVar5 + 0x58);
      local_70 = *(undefined8 *)(lVar5 + 0x50);
      uStack_58 = *(undefined8 *)(lVar5 + 0x68);
      uStack_60 = *(undefined8 *)(lVar5 + 0x60);
      pvStack_48 = *(void **)(lVar5 + 0x78);
      local_50 = *(long *)(lVar5 + 0x70);
      uStack_38 = *(undefined8 *)(lVar5 + 0x88);
      uStack_40 = *(undefined8 *)(lVar5 + 0x80);
      uStack_a8 = *(undefined8 *)(lVar5 + 0x18);
      local_b0 = *(long *)(lVar5 + 0x10);
      uStack_98 = *(undefined8 *)(lVar5 + 0x28);
      uStack_a0 = *(undefined8 *)(lVar5 + 0x20);
      uStack_88 = *(undefined8 *)(lVar5 + 0x38);
      local_90 = *(undefined8 *)(lVar5 + 0x30);
      uStack_78 = *(undefined8 *)(lVar5 + 0x48);
      uStack_80 = *(undefined8 *)(lVar5 + 0x40);
      *(undefined8 *)(lVar5 + 0x10) = 0xfffffffffffffffe;
      if (local_b0 != -2) {
        if (local_b0 == -1) {
          FUN_0074d924((ulong)&local_b0 | 8);
        }
        else {
          if (local_50 != 0) {
            free(pvStack_48);
          }
          FUN_0074db38(&local_b0);
        }
      }
    }
    plVar4 = *(long **)(param_1 + 0x2a8);
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
                    /* try { // try from 0071893c to 00718943 has its CatchHandler @ 00718994 */
        <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<core::result::Result<libdiscore_common::core::http::ParsedHttpResponse<alloc::string::String>,{backref_37}::HttpError>>>>
        ::drop_slow(param_1 + 0x2a8);
      }
    }
  }
  plVar4 = *(long **)(param_1 + 0x290);
  *(undefined1 *)(param_1 + 0x29b) = 0;
  *(undefined2 *)(param_1 + 0x299) = 0;
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
                    /* try { // try from 00718970 to 00718977 has its CatchHandler @ 00718a08 */
      <alloc::sync::[n]::alloc::sync::Arc<std::sync::poison::mutex::Mutex<core::option::Option<alloc::boxed::Box<dyn_Trait<Assoc=X>+{backref_26}::ops::function::Fn<(libdiscore_common::core::http::ProgressEvent)>+{backref_26}::marker::Sync+{backref_71}::Send>>>>>
      ::drop_slow(param_1 + 0x290);
    }
  }
  *(undefined1 *)(param_1 + 0x2a0) = 0;
  *(undefined4 *)(param_1 + 0x29c) = 0;
  return;
}


// ===== 00718a70  FUN_00718a70 =====

void FUN_00718a70(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long local_48;
  long lStack_40;
  long local_38;
  
  if ((char)param_1[9] == '\0') {
    lVar4 = *param_1;
    if ((*(byte *)(lVar4 + 0x1b8) & 1) == 0) {
      *(undefined1 *)(lVar4 + 0x1b8) = 1;
    }
                    /* try { // try from 00718b48 to 00718b57 has its CatchHandler @ 00718c18 */
    <tokio::sync::mpsc::bounded::Semaphore_as_tokio::sync::mpsc::chan::Semaphore>::close
              (lVar4 + 0x1c0);
    <tokio::sync::notify::[4]::tokio::sync::notify::Notify>::notify_waiters(lVar4 + 0x180);
    local_48 = lVar4 + 0x1a0;
    lStack_40 = lVar4 + 0x80;
                    /* try { // try from 00718b68 to 00718b6f has its CatchHandler @ 00718bd4 */
    local_38 = lVar4 + 0x1c0;
    FUN_0074e060(&local_48);
                    /* try { // try from 00718b70 to 00718b77 has its CatchHandler @ 00718c18 */
    FUN_0074e060(&local_48);
    plVar3 = (long *)*param_1;
    do {
      lVar4 = *plVar3 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  else {
    if ((char)param_1[9] != '\x03') {
      return;
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
                    /* try { // try from 00718ab8 to 00718abb has its CatchHandler @ 00718bac */
      <alloc::sync::[n]::alloc::sync::Arc<reqwest::async_impl::client::ClientRef>>::drop_slow();
    }
    param_1 = param_1 + 2;
    lVar4 = *param_1;
    if ((*(byte *)(lVar4 + 0x1b8) & 1) == 0) {
      *(undefined1 *)(lVar4 + 0x1b8) = 1;
    }
                    /* try { // try from 00718ad4 to 00718ae3 has its CatchHandler @ 00718be8 */
    <tokio::sync::mpsc::bounded::Semaphore_as_tokio::sync::mpsc::chan::Semaphore>::close
              (lVar4 + 0x1c0);
    <tokio::sync::notify::[4]::tokio::sync::notify::Notify>::notify_waiters(lVar4 + 0x180);
    local_48 = lVar4 + 0x1a0;
    lStack_40 = lVar4 + 0x80;
                    /* try { // try from 00718af4 to 00718afb has its CatchHandler @ 00718bc0 */
    local_38 = lVar4 + 0x1c0;
    FUN_0074e060(&local_48);
                    /* try { // try from 00718afc to 00718b03 has its CatchHandler @ 00718be8 */
    FUN_0074e060(&local_48);
    plVar3 = (long *)*param_1;
    do {
      lVar4 = *plVar3 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  if (lVar4 != 0) {
    return;
  }
  DataMemoryBarrier(2,1);
  <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::sync::mpsc::chan::Chan<libdiscore_common[1cb84820f9455fa0]::core::http::BackendHttpRequest,tokio[8c8895dbfa691109]::sync::mpsc::bounded::Semaphore>>>
  ::drop_slow(param_1);
  return;
}


// ===== 00718c4c  FUN_00718c4c =====

void FUN_00718c4c(undefined8 *param_1)

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
    <alloc[c1f8e832b0d782c7]::sync::Arc<libdiscore_common[1cb84820f9455fa0]::core::maybe_mutex::MaybeRwLock<std[17aff9129faa4dc5]::collections::hash::map::HashMap<u32,libdiscore_common[1cb84820f9455fa0]::core::http::ActiveRequest>>>>
    ::drop_slow();
    return;
  }
  return;
}


// ===== 00718c70  FUN_00718c70 =====

void FUN_00718c70(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  if (*(char *)(param_1 + 0x604) == '\0') {
    plVar6 = (long *)(param_1 + 0xd8);
    lVar4 = *plVar6;
    plVar3 = (long *)(lVar4 + 0x1f0);
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
                    /* try { // try from 00718d64 to 00718d73 has its CatchHandler @ 00718e6c */
      FUN_0073a19c(lVar4 + 0x80);
      <tokio::sync::task::atomic_waker::[0]::tokio::sync::task::atomic_waker::AtomicWaker>::wake
                (lVar4 + 0x100);
    }
    plVar3 = (long *)*plVar6;
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
                    /* try { // try from 00718d90 to 00718d97 has its CatchHandler @ 00718dfc */
      <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::sync::mpsc::chan::Chan<libdiscore_common[1cb84820f9455fa0]::core::http::BackendHttpRequest,tokio[8c8895dbfa691109]::sync::mpsc::bounded::Semaphore>>>
      ::drop_slow(plVar6);
    }
                    /* try { // try from 00718d98 to 00718d9f has its CatchHandler @ 00718e64 */
    FUN_00719258(param_1);
    plVar3 = *(long **)(param_1 + 0xe0);
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
                    /* try { // try from 00718dc0 to 00718dc3 has its CatchHandler @ 00718dec */
      <alloc::sync::[n]::alloc::sync::Arc<futures_util::abortable::AbortInner>>::drop_slow();
    }
    plVar3 = *(long **)(param_1 + 0xe8);
    do {
      lVar4 = *plVar3 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  else {
    if (*(char *)(param_1 + 0x604) != '\x03') {
      return;
    }
                    /* try { // try from 00718c94 to 00718c9b has its CatchHandler @ 00718ef0 */
    FUN_0071870c(param_1 + 0xf8);
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
                    /* try { // try from 00718cb8 to 00718cbf has its CatchHandler @ 00718e04 */
      <alloc::sync::[n]::alloc::sync::Arc<futures_util::abortable::AbortInner>>::drop_slow
                (param_1 + 0xf0);
    }
    plVar6 = (long *)(param_1 + 0xd8);
    lVar4 = *plVar6;
    plVar3 = (long *)(lVar4 + 0x1f0);
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
                    /* try { // try from 00718ce0 to 00718cef has its CatchHandler @ 00718e0c */
      FUN_0073a19c(lVar4 + 0x80);
      <tokio::sync::task::atomic_waker::[0]::tokio::sync::task::atomic_waker::AtomicWaker>::wake
                (lVar4 + 0x100);
    }
    plVar3 = (long *)*plVar6;
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
                    /* try { // try from 00718d0c to 00718d13 has its CatchHandler @ 00718df4 */
      <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::sync::mpsc::chan::Chan<libdiscore_common[1cb84820f9455fa0]::core::http::BackendHttpRequest,tokio[8c8895dbfa691109]::sync::mpsc::bounded::Semaphore>>>
      ::drop_slow(plVar6);
    }
    plVar3 = *(long **)(param_1 + 0xe8);
    do {
      lVar4 = *plVar3 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  if (lVar4 != 0) {
    return;
  }
  DataMemoryBarrier(2,1);
  <alloc[c1f8e832b0d782c7]::sync::Arc<libdiscore_common[1cb84820f9455fa0]::core::maybe_mutex::MaybeRwLock<std[17aff9129faa4dc5]::collections::hash::map::HashMap<u32,libdiscore_common[1cb84820f9455fa0]::core::http::ActiveRequest>>>>
  ::drop_slow(param_1 + 0xe8);
  return;
}


// ===== 00718f54  FUN_00718f54 =====

void FUN_00718f54(undefined8 *param_1)

{
  ulong uVar1;
  long *__ptr;
  long local_28;
  
  __ptr = (long *)*param_1;
  if (*__ptr == 1) {
    uVar1 = __ptr[1] & 3;
    if (1 < uVar1 - 2 && uVar1 != 0) {
      local_28 = __ptr[1] - 1;
                    /* try { // try from 00718fbc to 00718fc3 has its CatchHandler @ 00718fe4 */
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_28);
    }
  }
  else if ((*__ptr == 0) && (__ptr[2] != 0)) {
    free((void *)__ptr[1]);
  }
  free(__ptr);
  return;
}


// ===== 00719000  FUN_00719000 =====

void FUN_00719000(undefined8 *param_1)

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
                    /* try { // try from 00719028 to 0071902f has its CatchHandler @ 0071907c */
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


// ===== 007190cc  FUN_007190cc =====

void FUN_007190cc(void *param_1)

{
  if (param_1 != (void *)0x0) {
                    /* try { // try from 007190dc to 007190e3 has its CatchHandler @ 00719108 */
    FUN_007040a0();
    free(param_1);
    return;
  }
  return;
}


// ===== 00719124  FUN_00719124 =====

void FUN_00719124(byte *param_1)

{
  if ((9 < *param_1) && (*(long *)(param_1 + 0x10) != 0)) {
    free(*(void **)(param_1 + 8));
    return;
  }
  return;
}


// ===== 00719148  FUN_00719148 =====

void FUN_00719148(long *param_1)

{
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 00719160  FUN_00719160 =====

void FUN_00719160(ulong *param_1)

{
  ulong uVar1;
  long local_18;
  
  uVar1 = *param_1 & 3;
  if (uVar1 - 2 < 2 || uVar1 == 0) {
    return;
  }
  local_18 = *param_1 - 1;
  <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
  return;
}


// ===== 007191b0  FUN_007191b0 =====

void FUN_007191b0(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *param_1;
  plVar3 = (long *)(lVar5 + 0x1f0);
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
                    /* try { // try from 007191dc to 007191eb has its CatchHandler @ 00719224 */
    FUN_0073a19c(lVar5 + 0x80);
    <tokio::sync::task::atomic_waker::[0]::tokio::sync::task::atomic_waker::AtomicWaker>::wake
              (lVar5 + 0x100);
  }
  plVar3 = (long *)*param_1;
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
    <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::sync::mpsc::chan::Chan<libdiscore_common[1cb84820f9455fa0]::core::http::BackendHttpRequest,tokio[8c8895dbfa691109]::sync::mpsc::bounded::Semaphore>>>
    ::drop_slow(param_1);
    return;
  }
  return;
}


// ===== 00719258  FUN_00719258 =====

void FUN_00719258(long *param_1)

{
  void *__ptr;
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  
  if (param_1[0x11] != 0) {
    free((void *)param_1[0x12]);
  }
  if ((9 < *(byte *)(param_1 + 0x17)) && (param_1[0x19] != 0)) {
    free((void *)param_1[0x18]);
  }
  if (*param_1 != 0) {
    if (param_1[1] == 0) {
      __ptr = (void *)param_1[2];
      puVar7 = (undefined8 *)param_1[3];
      pcVar3 = (code *)*puVar7;
      if (pcVar3 != (code *)0x0) {
                    /* try { // try from 007192d0 to 007192d7 has its CatchHandler @ 007193b8 */
        (*pcVar3)(__ptr);
      }
      if (puVar7[1] != 0) {
        free(__ptr);
      }
    }
    else {
                    /* try { // try from 007192b8 to 007192bf has its CatchHandler @ 007193d8 */
      (**(code **)(param_1[1] + 0x20))(param_1 + 4,param_1[2],param_1[3]);
    }
  }
  if (param_1[5] != -1) {
                    /* try { // try from 007192fc to 007192ff has its CatchHandler @ 007193f4 */
    FUN_00719f78();
  }
  lVar4 = param_1[0x14];
  if (lVar4 != -1) {
    lVar6 = param_1[0x16];
    if (lVar6 != 0) {
      puVar7 = (undefined8 *)(param_1[0x15] + 0x20);
      do {
        if (puVar7[-4] != 0) {
          free((void *)puVar7[-3]);
        }
        if (puVar7[-1] != 0) {
          free((void *)*puVar7);
        }
        lVar6 = lVar6 + -1;
        puVar7 = puVar7 + 6;
      } while (lVar6 != 0);
      lVar4 = param_1[0x14];
    }
    if (lVar4 != 0) {
      free((void *)param_1[0x15]);
    }
  }
  plVar5 = (long *)param_1[0x1a];
  if (plVar5 != (long *)0x0) {
    do {
      lVar4 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<std::sync::poison::mutex::Mutex<core::option::Option<alloc::boxed::Box<dyn_Trait<Assoc=X>+{backref_26}::ops::function::Fn<(libdiscore_common::core::http::ProgressEvent)>+{backref_26}::marker::Sync+{backref_71}::Send>>>>>
      ::drop_slow(param_1 + 0x1a);
      return;
    }
  }
  return;
}


// ===== 00719434  FUN_00719434 =====

void FUN_00719434(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = *param_1 - 3;
  if (*param_1 < 3) {
    lVar4 = 1;
  }
  if (lVar4 != 0) {
    if (lVar4 == 1) {
      if (param_1[0xc] != 0) {
        free((void *)param_1[0xd]);
      }
                    /* try { // try from 00719474 to 0071947b has its CatchHandler @ 007194d0 */
      FUN_00719f78(param_1);
    }
    else if (param_1[1] != 0) {
      free((void *)param_1[2]);
    }
  }
  plVar3 = (long *)param_1[0x10];
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
      <alloc::sync::[n]::alloc::sync::Arc<futures_util::abortable::AbortInner>>::drop_slow
                (param_1 + 0x10);
      return;
    }
  }
  return;
}


// ===== 00719508  FUN_00719508 =====

void FUN_00719508(ulong *param_1)

{
  long lVar1;
  
  lVar1 = *param_1 - 3;
  if (*param_1 < 3) {
    lVar1 = 1;
  }
  if (lVar1 != 0) {
    if (lVar1 == 1) {
      if (param_1[0xc] != 0) {
        free((void *)param_1[0xd]);
      }
      FUN_00719f78(param_1);
      return;
    }
    if (param_1[1] != 0) {
      free((void *)param_1[2]);
      return;
    }
  }
  return;
}


// ===== 00719574  FUN_00719574 =====

void FUN_00719574(long *param_1)

{
  void *pvVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined8 *puVar5;
  
  if (param_1[0x11] != 0) {
    free((void *)param_1[0x12]);
  }
  if ((9 < *(byte *)(param_1 + 0x17)) && (param_1[0x19] != 0)) {
    free((void *)param_1[0x18]);
  }
  if (*param_1 != 0) {
    if (param_1[1] == 0) {
      pvVar1 = (void *)param_1[2];
      puVar5 = (undefined8 *)param_1[3];
      pcVar3 = (code *)*puVar5;
      if (pcVar3 != (code *)0x0) {
                    /* try { // try from 007195ec to 007195f3 has its CatchHandler @ 007196d4 */
        (*pcVar3)(pvVar1);
      }
      if (puVar5[1] != 0) {
        free(pvVar1);
      }
    }
    else {
                    /* try { // try from 007195d4 to 007195db has its CatchHandler @ 007196f4 */
      (**(code **)(param_1[1] + 0x20))(param_1 + 4,param_1[2],param_1[3]);
    }
  }
  lVar2 = param_1[0x14];
  if (lVar2 != -1) {
    lVar4 = param_1[0x16];
    if (lVar4 != 0) {
      puVar5 = (undefined8 *)(param_1[0x15] + 0x20);
      do {
        if (puVar5[-4] != 0) {
          free((void *)puVar5[-3]);
        }
        if (puVar5[-1] != 0) {
          free((void *)*puVar5);
        }
        lVar4 = lVar4 + -1;
        puVar5 = puVar5 + 6;
      } while (lVar4 != 0);
      lVar2 = param_1[0x14];
    }
    if (lVar2 != 0) {
      free((void *)param_1[0x15]);
    }
  }
  if (param_1[5] != -1) {
                    /* try { // try from 0071968c to 0071968f has its CatchHandler @ 00719738 */
    FUN_00719f78();
  }
  pvVar1 = (void *)param_1[0x1a];
  puVar5 = (undefined8 *)param_1[0x1b];
  pcVar3 = (code *)*puVar5;
  if (pcVar3 != (code *)0x0) {
                    /* try { // try from 0071969c to 007196a3 has its CatchHandler @ 00719718 */
    (*pcVar3)(pvVar1);
  }
  if (puVar5[1] != 0) {
    free(pvVar1);
    return;
  }
  return;
}


// ===== 00719750  FUN_00719750 =====

void FUN_00719750(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long local_18;
  
  uVar1 = *param_1;
  uVar2 = uVar1 ^ 0x8000000000000000;
  if (-1 < (long)uVar1) {
    uVar2 = 2;
  }
  if ((long)uVar2 < 2) {
    if (uVar2 == 0) {
      FUN_00719000(param_1 + 1);
      return;
    }
    if (uVar2 == 1) {
      FUN_00718f54(param_1 + 1);
      return;
    }
  }
  else if (uVar2 == 2) {
    if (uVar1 != 0) {
      free((void *)param_1[1]);
      return;
    }
  }
  else if (uVar2 == 3) {
    uVar2 = param_1[1] & 3;
    if ((1 < uVar2 - 2) && (uVar2 != 0)) {
      local_18 = param_1[1] - 1;
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
      return;
    }
  }
  return;
}


// ===== 007197f8  FUN_007197f8 =====

void FUN_007197f8(long *param_1)

{
  ulong uVar1;
  long local_18;
  
  if (*param_1 == -1) {
    uVar1 = param_1[1] & 3;
    if ((1 < uVar1 - 2) && (uVar1 != 0)) {
      local_18 = param_1[1] - 1;
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
      return;
    }
  }
  else if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 00719864  FUN_00719864 =====

void FUN_00719864(ulong *param_1)

{
  long lVar1;
  
  lVar1 = *param_1 + 0x7ffffffffffffffb;
  if (*param_1 < 0x8000000000000005) {
    lVar1 = 1;
  }
  if (lVar1 != 0) {
    if (lVar1 == 1) {
      FUN_00719750();
      return;
    }
    <anyhow::Error_as_core::ops::drop::Drop>::drop(param_1 + 1);
    return;
  }
  return;
}


// ===== 0071989c  FUN_0071989c =====

void FUN_0071989c(long param_1)

{
                    /* try { // try from 007198ac to 007198af has its CatchHandler @ 007198d8 */
  <tokio::sync::notify::Notified_as_core::ops::drop::Drop>::drop();
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x007198c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x18))(*(undefined8 *)(param_1 + 0x28));
    return;
  }
  return;
}


// ===== 007198fc  FUN_007198fc =====

void FUN_007198fc(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 0071990c to 0071990f has its CatchHandler @ 00719998 */
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
                    /* try { // try from 00719938 to 0071995f has its CatchHandler @ 00719990 */
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>>
      ::drop_slow();
    }
  }
  if ((param_1[4] != 0) && (param_1[9] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00719980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[9] + 0x18))(param_1[10]);
    return;
  }
  return;
}


// ===== 007199cc  FUN_007199cc =====

void FUN_007199cc(long *param_1)

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


// ===== 00719a18  FUN_00719a18 =====

void FUN_00719a18(long param_1)

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
                    /* try { // try from 00719a44 to 00719a47 has its CatchHandler @ 00719b74 */
    <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
    ::drop_slow();
  }
  plVar3 = *(long **)(param_1 + 0x58);
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
                    /* try { // try from 00719a6c to 00719a6f has its CatchHandler @ 00719b6c */
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow();
    }
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
                    /* try { // try from 00719a94 to 00719a97 has its CatchHandler @ 00719b64 */
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow();
    }
  }
  plVar3 = *(long **)(param_1 + 0x78);
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
                    /* try { // try from 00719abc to 00719abf has its CatchHandler @ 00719b5c */
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow();
    }
  }
  plVar3 = *(long **)(param_1 + 0x88);
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
                    /* try { // try from 00719ae4 to 00719ae7 has its CatchHandler @ 00719b54 */
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow();
    }
  }
  plVar3 = *(long **)(param_1 + 0x98);
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
                    /* try { // try from 00719b0c to 00719b0f has its CatchHandler @ 00719b4c */
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow();
    }
  }
  plVar3 = *(long **)(param_1 + 0xa8);
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
      ::drop_slow((undefined8 *)(param_1 + 0xa8));
      return;
    }
  }
  return;
}


// ===== 00719c78  FUN_00719c78 =====

void FUN_00719c78(long *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  
                    /* try { // try from 00719c88 to 00719c8b has its CatchHandler @ 00719d20 */
  <tokio::runtime::runtime::Runtime_as_core::ops::drop::Drop>::drop();
  if (*param_1 == 0) {
    plVar4 = param_1 + 5;
    do {
      lVar3 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = 0;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar3 != 0) {
                    /* try { // try from 00719ca8 to 00719cab has its CatchHandler @ 00719d10 */
      FUN_00716dd8();
    }
  }
  if (param_1[6] == 0) {
    plVar4 = (long *)param_1[7];
    do {
      lVar3 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar3 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>>::
      drop_slow(param_1 + 7);
    }
  }
  else {
    plVar4 = (long *)param_1[7];
    do {
      lVar3 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar3 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 00719cd0 to 00719cff has its CatchHandler @ 00719d18 */
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>>
      ::drop_slow(param_1 + 7);
    }
  }
  FUN_0071a21c(param_1 + 8);
  return;
}


// ===== 00719d60  FUN_00719d60 =====

void FUN_00719d60(long *param_1)

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


// ===== 00719dac  FUN_00719dac =====

void FUN_00719dac(long *param_1)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  
  if (*param_1 == 0) {
    plVar4 = (long *)param_1[1];
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
                    /* try { // try from 00719e40 to 00719e43 has its CatchHandler @ 00719ebc */
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>>::
      drop_slow();
    }
    if (param_1[3] != 0) {
                    /* try { // try from 00719e4c to 00719e4f has its CatchHandler @ 00719ed4 */
      FUN_00716dd8();
    }
    puVar6 = (undefined8 *)(param_1[6] + 8);
    lVar5 = param_1[7] + 1;
    while (lVar5 = lVar5 + -1, lVar5 != 0) {
      plVar4 = puVar6 + -1;
      uVar1 = *puVar6;
      puVar6 = puVar6 + 2;
                    /* try { // try from 00719e78 to 00719e7b has its CatchHandler @ 00719f10 */
      (**(code **)(*plVar4 + 0x18))(uVar1);
    }
  }
  else {
    plVar4 = (long *)param_1[1];
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
                    /* try { // try from 00719de8 to 00719deb has its CatchHandler @ 00719ee8 */
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::worker::Worker>>
      ::drop_slow();
    }
                    /* try { // try from 00719df0 to 00719df3 has its CatchHandler @ 00719efc */
    FUN_0071671c(param_1[3]);
    puVar6 = (undefined8 *)(param_1[6] + 8);
    lVar5 = param_1[7] + 1;
    while (lVar5 = lVar5 + -1, lVar5 != 0) {
      plVar4 = puVar6 + -1;
      uVar1 = *puVar6;
      puVar6 = puVar6 + 2;
                    /* try { // try from 00719e1c to 00719e1f has its CatchHandler @ 00719f34 */
      (**(code **)(*plVar4 + 0x18))(uVar1);
    }
  }
  if (param_1[5] != 0) {
    free((void *)param_1[6]);
    return;
  }
  return;
}


// ===== 00719f78  FUN_00719f78 =====

void FUN_00719f78(long param_1)

{
  void *__ptr;
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    free(*(void **)(param_1 + 0x48));
  }
                    /* try { // try from 00719fa8 to 00719faf has its CatchHandler @ 0071a03c */
  FUN_00766164(param_1 + 0x18);
  if (*(long *)(param_1 + 0x18) != 0) {
    free(*(void **)(param_1 + 0x20));
  }
  __ptr = *(void **)(param_1 + 0x38);
  lVar2 = *(long *)(param_1 + 0x40) + 1;
  lVar1 = (long)__ptr + 0x38;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 00719ff0 to 00719ff3 has its CatchHandler @ 0071a06c */
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


// ===== 0071a0c0  FUN_0071a0c0 =====

void FUN_0071a0c0(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 0071a0d0 to 0071a0d3 has its CatchHandler @ 0071a148 */
  <tokio::runtime::context::current::SetCurrentGuard_as_core::ops::drop::Drop>::drop();
  if (*param_1 != 2) {
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
        drop_slow(param_1 + 1);
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
        ::drop_slow(param_1 + 1);
        return;
      }
    }
  }
  return;
}


// ===== 0071a160  FUN_0071a160 =====

void FUN_0071a160(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 0071a170 to 0071a173 has its CatchHandler @ 0071a204 */
  <tokio::runtime::context::runtime::EnterRuntimeGuard_as_core::ops::drop::Drop>::drop();
                    /* try { // try from 0071a174 to 0071a17b has its CatchHandler @ 0071a1f0 */
  <tokio::runtime::context::current::SetCurrentGuard_as_core::ops::drop::Drop>::drop(param_1);
  if (*param_1 != 2) {
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
        drop_slow(param_1 + 1);
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
        ::drop_slow(param_1 + 1);
        return;
      }
    }
  }
  return;
}


// ===== 0071a21c  FUN_0071a21c =====

void FUN_0071a21c(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  
                    /* try { // try from 0071a230 to 0071a233 has its CatchHandler @ 0071a318 */
  <tokio::runtime::blocking::pool::BlockingPool_as_core::ops::drop::Drop>::drop();
  plVar4 = (long *)*param_1;
  do {
    lVar6 = *plVar4;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar3) {
      *plVar4 = lVar6 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar6 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 0071a250 to 0071a257 has its CatchHandler @ 0071a310 */
    <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::blocking::pool::Inner>>::drop_slow(param_1);
  }
  plVar4 = param_1 + 1;
  lVar6 = *plVar4;
  if (lVar6 != 0) {
    puVar1 = (ulong *)(lVar6 + 0x30);
    do {
      uVar7 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar7 | 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar7 & 10) == 8) {
                    /* try { // try from 0071a28c to 0071a28f has its CatchHandler @ 0071a2dc */
      (**(code **)(*(long *)(lVar6 + 0x10) + 0x10))(*(undefined8 *)(lVar6 + 0x18));
    }
    if (((uint)uVar7 >> 1 & 1) != 0) {
      *(undefined1 *)(lVar6 + 0x38) = 0;
    }
    plVar5 = (long *)*plVar4;
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
        <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<()>>>::drop_slow(plVar4);
        return;
      }
    }
  }
  return;
}


// ===== 0071a354  FUN_0071a354 =====

void FUN_0071a354(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  
  lVar5 = *param_1;
  if (lVar5 != 0) {
    puVar1 = (ulong *)(lVar5 + 0x30);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 | 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 10) == 8) {
                    /* try { // try from 0071a39c to 0071a39f has its CatchHandler @ 0071a3ec */
      (**(code **)(*(long *)(lVar5 + 0x10) + 0x10))(*(undefined8 *)(lVar5 + 0x18));
    }
    if (((uint)uVar6 >> 1 & 1) != 0) {
      *(undefined1 *)(lVar5 + 0x38) = 0;
    }
    plVar4 = (long *)*param_1;
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
        <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<()>>>::drop_slow(param_1);
        return;
      }
    }
  }
  return;
}


// ===== 0071a424  FUN_0071a424 =====

void FUN_0071a424(undefined8 param_1)

{
                    /* try { // try from 0071a434 to 0071a437 has its CatchHandler @ 0071a448 */
  <tokio::runtime::scheduler::current_thread::CoreGuard_as_core::ops::drop::Drop>::drop();
  FUN_00719dac(param_1);
  return;
}


// ===== 0071a460  FUN_0071a460 =====

void FUN_0071a460(long param_1)

{
  long *plVar1;
  void *__ptr;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  __ptr = *(void **)(param_1 + 0x10);
  puVar4 = (undefined8 *)((long)__ptr + 8);
  lVar3 = *(long *)(param_1 + 0x18) + 1;
  while (lVar3 = lVar3 + -1, lVar3 != 0) {
    plVar1 = puVar4 + -1;
    uVar2 = *puVar4;
    puVar4 = puVar4 + 2;
                    /* try { // try from 0071a498 to 0071a49b has its CatchHandler @ 0071a4dc */
    (**(code **)(*plVar1 + 0x18))(uVar2);
  }
  if (*(long *)(param_1 + 8) != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 0071a520  std::sys::backtrace::__rust_begin_short_backtrace<std::thread::lifecycle::spawn_unchecked<libdiscore_common::core::async_runtime::TOKIO_RUNTIME_HANDLE::{closure#0}::{closure#0},()>::{closure#0}::{closure#0}::{closure#0},()> =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::sys::backtrace::__rust_begin_short_backtrace<std::thread::lifecycle::spawn_unchecked<libdiscore_common::core::async_runtime::TOKIO_RUNTIME_HANDLE::{closure#0}::{closure#0},
   ()>::{closure#0}::{closure#0}::{closure#0}, ()> */

void __rustcall
std::sys::backtrace::
__rust_begin_short_backtrace<std::thread::lifecycle::spawn_unchecked<libdiscore_common::core::async_runtime::TOKIO_RUNTIME_HANDLE::_closure_0_::_closure_0_,()>::_closure_0_::_closure_0_::_closure_0_,()>
          (undefined8 *param_1)

{
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_1[1];
  local_30 = *param_1;
  uStack_18 = param_1[3];
  uStack_20 = param_1[2];
  <std::thread::spawnhook::std::thread::spawnhook::ChildSpawnHooks>::inherit_and_run(&local_30);
  return;
}


// ===== 0071a548  std::sys::backtrace::__rust_begin_short_backtrace<libdiscore_common::core::async_runtime::TOKIO_RUNTIME_HANDLE::{closure#0}::{closure#0},()> =====

/* WARNING: Unknown calling convention: __rustcall */
/* std::sys::backtrace::__rust_begin_short_backtrace<libdiscore_common::core::async_runtime::TOKIO_RUNTIME_HANDLE::{closure#0}::{closure#0},
   ()> */

void __rustcall
std::sys::backtrace::
__rust_begin_short_backtrace<libdiscore_common::core::async_runtime::TOKIO_RUNTIME_HANDLE::_closure_0_::_closure_0_,()>
          (undefined8 param_1)

{
                    /* try { // try from 0071a558 to 0071a563 has its CatchHandler @ 0071a578 */
  FUN_00753fd8(param_1,&PTR_s_common_rust_src_core_async_runti_00ad6658);
  FUN_00719c78(param_1);
  return;
}


// ===== 0071a590  FUN_0071a590 =====

void FUN_0071a590(void *param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined **local_570 [168];
  undefined *local_18;
  
  puVar4 = PTR_TOKIO_RUNTIME_HANDLE_00b00d38;
  local_570[0] = (undefined **)0x0;
  if ((int)*(undefined8 *)(PTR_TOKIO_RUNTIME_HANDLE_00b00d38 + 0x10) != 0) {
    local_570[0] = &local_18;
    local_18 = PTR_TOKIO_RUNTIME_HANDLE_00b00d38;
                    /* try { // try from 0071a650 to 0071a66f has its CatchHandler @ 0071a674 */
    <std::sys::sync::once::futex::[0]::std::sys::sync::once::futex::Once>::call
              (PTR_TOKIO_RUNTIME_HANDLE_00b00d38 + 0x10,1,local_570,&DAT_00ad6108,
               &PTR_s__nix_store_8006w282fgsx3273c878b_00ad60f0);
  }
  memcpy(local_570,param_1,0x540);
  puVar3 = PTR_NEXT_ID_00b00cd0;
  do {
    lVar7 = *(long *)puVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar2) {
      *(long *)puVar3 = lVar7 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0' || lVar7 == 0);
  if (*(long *)puVar4 == 1) {
    uVar6 = FUN_007541e8();
    iVar5 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::drop_join_handle_fast
                      ();
  }
  else {
    uVar6 = FUN_00754a18(puVar4 + 8,local_570);
    iVar5 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::drop_join_handle_fast
                      ();
  }
  if (iVar5 != 0) {
    <tokio::runtime::task::raw::tokio::runtime::task::raw::RawTask>::drop_join_handle_slow(uVar6);
  }
  return;
}


// ===== 0071a68c  FUN_0071a68c =====

void FUN_0071a68c(void *param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined **local_6f8 [217];
  undefined *local_18;
  
  puVar4 = PTR_TOKIO_RUNTIME_HANDLE_00b00d38;
  if ((int)*(undefined8 *)(PTR_TOKIO_RUNTIME_HANDLE_00b00d38 + 0x10) != 0) {
    local_6f8[0] = &local_18;
    local_18 = PTR_TOKIO_RUNTIME_HANDLE_00b00d38;
                    /* try { // try from 0071a74c to 0071a76b has its CatchHandler @ 0071a770 */
    <std::sys::sync::once::futex::[0]::std::sys::sync::once::futex::Once>::call
              (PTR_TOKIO_RUNTIME_HANDLE_00b00d38 + 0x10,1,local_6f8,&DAT_00ad6108,
               &PTR_s__nix_store_8006w282fgsx3273c878b_00ad60f0);
  }
  memcpy(local_6f8,param_1,0x6c8);
  puVar3 = PTR_NEXT_ID_00b00cd0;
  do {
    lVar7 = *(long *)puVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar2) {
      *(long *)puVar3 = lVar7 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0' || lVar7 == 0);
  if (*(long *)puVar4 == 1) {
    uVar6 = FUN_007542e0();
    iVar5 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::drop_join_handle_fast
                      ();
  }
  else {
    uVar6 = FUN_00754b18(puVar4 + 8,local_6f8);
    iVar5 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::drop_join_handle_fast
                      ();
  }
  if (iVar5 != 0) {
    <tokio::runtime::task::raw::tokio::runtime::task::raw::RawTask>::drop_join_handle_slow(uVar6);
  }
  return;
}


// ===== 0071a788  FUN_0071a788 =====

void FUN_0071a788(int *param_1,undefined1 param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 extraout_w1;
  undefined4 extraout_w1_00;
  ulong uVar6;
  undefined4 uVar7;
  long local_70 [3];
  undefined8 local_58;
  undefined1 uStack_31;
  
  uVar6 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar6 == 0) {
    uVar6 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar5 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar6);
    if (puVar5 <= &DAT_00000001) goto LAB_0071a8e4;
  }
  else {
    puVar5 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar6);
    if (puVar5 < (undefined1 *)0x2) {
LAB_0071a8e4:
      puVar5 = (undefined1 *)FUN_0072ca84(uVar6 & 0xffffffff,puVar5,0);
    }
  }
  if (puVar5 == (undefined1 *)0x0) {
LAB_0071a8fc:
                    /* WARNING: Subroutine does not return */
    std::thread::local::panic_access_error(&PTR_s__nix_store_8006w282fgsx3273c878b_00ad6130);
  }
  if (puVar5[0x46] == '\x02') {
    puVar5[0x46] = param_2;
    lVar1 = 0x1d0;
    if (*param_1 == 0) {
      lVar1 = 0x170;
    }
    uVar2 = <tokio::util::rand::rt::tokio::util::rand::rt::RngSeedGenerator>::next_seed
                      (*(long *)(param_1 + 2) + lVar1);
    if ((*(uint *)(puVar5 + 0x38) & 1) == 0) {
      uVar3 = <tokio::util::rand::tokio::util::rand::FastRand>::new();
      uVar7 = extraout_w1_00;
    }
    else {
      uVar3 = *(undefined4 *)(puVar5 + 0x3c);
      uVar7 = *(undefined4 *)(puVar5 + 0x40);
    }
    *(undefined4 *)(puVar5 + 0x38) = 1;
    *(undefined4 *)(puVar5 + 0x3c) = uVar2;
    *(undefined4 *)(puVar5 + 0x40) = extraout_w1;
    <tokio::runtime::context::current::tokio::runtime::context::Context>::set_current
              (local_70,puVar5,param_1);
    local_58 = CONCAT44(uVar7,uVar3);
    if (local_70[0] == -2) goto LAB_0071a8fc;
    if (local_70[0] != -1) {
                    /* try { // try from 0071a894 to 0071a89b has its CatchHandler @ 0071a944 */
      iVar4 = FUN_0074be98(&uStack_31);
      if (iVar4 == 0) {
        FUN_0071a160(local_70);
        return;
      }
                    /* try { // try from 0071a908 to 0071a92b has its CatchHandler @ 0071a944 */
                    /* WARNING: Subroutine does not return */
      core::result::unwrap_failed
                ("failed to park thread",0x15,&uStack_31,&DAT_00ad66e8,
                 &PTR_s__root__cargo_registry_src_index__00ad65f8);
    }
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            ("Cannot start a runtime from within a runtime. This happens because a function (like `block_on`) attempted to block the current thread while the thread is being used to drive asynchronous tasks."
             ,0x183,param_3);
}


// ===== 0071a95c  FUN_0071a95c =====

void FUN_0071a95c(int *param_1,undefined1 param_2,undefined8 *param_3,undefined8 param_4)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined4 extraout_w1;
  undefined4 extraout_w1_00;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined4 uVar10;
  long *local_168;
  long *local_160;
  long *plStack_158;
  long *local_150;
  long *local_148;
  long *plStack_140;
  long *local_138;
  long *plStack_130;
  long local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  long *local_100;
  long *plStack_f8;
  long *local_f0;
  long *plStack_e8;
  long local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  long *local_b0;
  long *plStack_a8;
  long *plStack_a0;
  undefined8 local_98;
  long local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long **local_68;
  undefined1 uStack_41;
  
  uVar9 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar9 == 0) {
    uVar9 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar5 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar9);
    if (puVar5 <= &DAT_00000001) goto LAB_0071ac04;
  }
  else {
    puVar5 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar9);
    if (puVar5 < (undefined1 *)0x2) {
LAB_0071ac04:
      puVar5 = (undefined1 *)FUN_0072ca84(uVar9 & 0xffffffff,puVar5,0);
    }
  }
  if (puVar5 == (undefined1 *)0x0) {
LAB_0071ac1c:
                    /* WARNING: Subroutine does not return */
    std::thread::local::panic_access_error(&PTR_s__nix_store_8006w282fgsx3273c878b_00ad6130);
  }
  if (puVar5[0x46] == '\x02') {
    puVar5[0x46] = param_2;
    lVar7 = 0x1d0;
    if (*param_1 == 0) {
      lVar7 = 0x170;
    }
    uVar3 = <tokio::util::rand::rt::tokio::util::rand::rt::RngSeedGenerator>::next_seed
                      (*(long *)(param_1 + 2) + lVar7);
    if ((*(uint *)(puVar5 + 0x38) & 1) == 0) {
      uVar4 = <tokio::util::rand::tokio::util::rand::FastRand>::new();
      uVar10 = extraout_w1_00;
    }
    else {
      uVar4 = *(undefined4 *)(puVar5 + 0x3c);
      uVar10 = *(undefined4 *)(puVar5 + 0x40);
    }
    *(undefined4 *)(puVar5 + 0x38) = 1;
    *(undefined4 *)(puVar5 + 0x3c) = uVar3;
    *(undefined4 *)(puVar5 + 0x40) = extraout_w1;
    <tokio::runtime::context::current::tokio::runtime::context::Context>::set_current
              (&local_b0,puVar5,param_1);
    local_98 = (long *)CONCAT44(uVar10,uVar4);
    plStack_f8 = plStack_a0;
    local_100 = plStack_a8;
    local_f0 = local_98;
    if (local_b0 == (long *)0xfffffffffffffffe) goto LAB_0071ac1c;
    if (local_b0 != (long *)0xffffffffffffffff) {
      local_168 = local_b0;
      plStack_158 = plStack_a0;
      local_160 = plStack_a8;
      local_150 = local_98;
                    /* try { // try from 0071aa74 to 0071aa77 has its CatchHandler @ 0071ac8c */
      uVar6 = <tokio::runtime::scheduler::[1]::tokio::runtime::scheduler::Handle>::as_current_thread
                        (*param_3);
      uVar8 = param_3[1];
      do {
                    /* try { // try from 0071aa84 to 0071aaab has its CatchHandler @ 0071ac94 */
        <tokio::runtime::scheduler::current_thread::tokio::runtime::scheduler::current_thread::CurrentThread>
        ::take_core(&local_148,uVar8,uVar6);
        if (local_148 != (long *)0x2) {
          uStack_d8 = uStack_120;
          local_e0 = local_128;
          uStack_c8 = uStack_110;
          uStack_d0 = local_118;
          local_c0 = local_108;
          plStack_f8 = plStack_140;
          local_100 = local_148;
          plStack_e8 = plStack_130;
          local_f0 = local_138;
                    /* try { // try from 0071ab64 to 0071ab8b has its CatchHandler @ 0071ac3c */
          local_b0 = (long *)std::thread::current::current();
          do {
            lVar7 = *local_b0;
            cVar2 = '\x01';
            bVar1 = (bool)ExclusiveMonitorPass(local_b0,0x10);
            if (bVar1) {
              *local_b0 = lVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar7 + -1 == 0) {
            DataMemoryBarrier(2,1);
            <alloc[c1f8e832b0d782c7]::sync::Arc<std[17aff9129faa4dc5]::thread::thread::Inner,std[17aff9129faa4dc5]::alloc::System>>
            ::drop_slow(&local_b0);
          }
          local_70 = local_c0;
          uStack_88 = uStack_d8;
          local_90 = local_e0;
          uStack_78 = uStack_c8;
          uStack_80 = uStack_d0;
          plStack_a8 = plStack_f8;
          local_b0 = local_100;
          local_98 = plStack_e8;
          plStack_a0 = local_f0;
                    /* try { // try from 0071aba8 to 0071abb7 has its CatchHandler @ 0071ac8c */
          FUN_00754e18(&local_b0,param_3[2],&PTR_s__root__cargo_registry_src_index__00ad6610);
LAB_0071ab1c:
          FUN_0071a160(&local_168);
          return;
        }
        <tokio::sync::notify::[4]::tokio::sync::notify::Notify>::notified(&local_100,uVar8);
        plStack_a8 = plStack_f8;
        local_b0 = local_100;
        local_98 = plStack_e8;
        plStack_a0 = local_f0;
        uStack_88 = uStack_d8;
        local_90 = local_e0;
        uStack_78 = uStack_c8;
        uStack_80 = uStack_d0;
                    /* try { // try from 0071aac0 to 0071aacf has its CatchHandler @ 0071ac90 */
        local_68 = &local_b0;
        cVar2 = FUN_0074bf74(&uStack_41,&local_68,param_3 + 2);
        if (cVar2 != '\0') {
          if (cVar2 == '\x02') {
                    /* try { // try from 0071abbc to 0071abdf has its CatchHandler @ 0071ac9c */
                    /* WARNING: Subroutine does not return */
            core::result::unwrap_failed
                      ("Failed to `Enter::block_on`",0x1b,&uStack_41,&DAT_00ad66e8,
                       &PTR_s__root__cargo_registry_src_index__00ad6628);
          }
                    /* try { // try from 0071ab00 to 0071ab07 has its CatchHandler @ 0071ac4c */
          <tokio::sync::notify::Notified_as_core::ops::drop::Drop>::drop(&local_b0);
          if (local_90 != 0) {
                    /* try { // try from 0071ab18 to 0071ab1b has its CatchHandler @ 0071ac8c */
            (**(code **)(local_90 + 0x18))(uStack_88);
          }
          goto LAB_0071ab1c;
        }
                    /* try { // try from 0071aad8 to 0071aadf has its CatchHandler @ 0071ac6c */
        <tokio::sync::notify::Notified_as_core::ops::drop::Drop>::drop(&local_b0);
        if (local_90 != 0) {
                    /* try { // try from 0071aaf0 to 0071aaf3 has its CatchHandler @ 0071ac94 */
          (**(code **)(local_90 + 0x18))(uStack_88);
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            ("Cannot start a runtime from within a runtime. This happens because a function (like `block_on`) attempted to block the current thread while the thread is being used to drive asynchronous tasks."
             ,0x183,param_4);
}


// ===== 0071acc0  FUN_0071acc0 =====

void FUN_0071acc0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_58 [6];
  undefined1 uStack_21;
  
  lVar1 = anyhow::nightly::request_ref_backtrace(&uStack_21,&DAT_00ad6528);
  if (lVar1 == 0) {
    <std::backtrace::[2]::std::backtrace::Backtrace>::capture(local_58);
  }
  else {
    local_58[0] = 0xffffffffffffffff;
  }
  FUN_00704a1c(param_1,param_2,local_58);
  return;
}


// ===== 0071ad20  FUN_0071ad20 =====

void FUN_0071ad20(undefined1 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 local_6c [4];
  undefined8 local_68 [6];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  
  local_6c[0] = param_1;
  lVar1 = anyhow::nightly::request_ref_backtrace(local_6c,&DAT_00ad65a0);
  if (lVar1 == 0) {
    <std::backtrace::[2]::std::backtrace::Backtrace>::capture(local_68);
  }
  else {
    local_68[0] = 0xffffffffffffffff;
  }
  local_28 = local_6c[0];
  local_38 = param_2;
  uStack_30 = param_3;
  FUN_00704ac4(&local_38,local_68);
  return;
}


// ===== 0071ad8c  FUN_0071ad8c =====

void FUN_0071ad8c(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  param_1 = (undefined8 *)*param_1;
  plVar1 = (long *)*param_1;
  plVar2 = (long *)param_1[1];
  *param_1 = 0;
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__nix_store_8006w282fgsx3273c878b_00ad6640);
  }
  lVar3 = *plVar1;
  *plVar1 = 0;
  if (lVar3 != 0) {
    *plVar2 = lVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::unwrap_failed(&PTR_s__nix_store_8006w282fgsx3273c878b_00ad6670);
}


// ===== 0071add4  FUN_0071add4 =====

void FUN_0071add4(undefined8 *param_1,long param_2)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  
  pauVar1 = *(undefined1 (**) [16])*param_1;
  *(long *)*param_1 = 0;
  if (pauVar1 == (undefined1 (*) [16])0x0) {
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__nix_store_8006w282fgsx3273c878b_00ad6640);
  }
  if (*(char *)(param_2 + 4) != '\x01') {
    auVar2 = (**(code **)*pauVar1)();
    *pauVar1 = auVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::sync::lazy_lock::panic_poisoned();
}


// ===== 0071ae24  FUN_0071ae24 =====

void FUN_0071ae24(long *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  byte bVar13;
  long lVar14;
  ulong *puVar15;
  byte bVar16;
  undefined8 uVar17;
  
  lVar14 = *param_1;
  piVar1 = (int *)(lVar14 + 0x10);
  if (*piVar1 == 0) {
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar8) {
      *piVar1 = 0x3fffffff;
      cVar7 = ExclusiveMonitorsStatus();
    }
    if (cVar7 != '\0') goto LAB_0071b078;
    if ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0 & 0x7fffffffffffffff) != 0) goto LAB_0071b09c;
LAB_0071ae78:
    puVar15 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
    if (*(char *)(lVar14 + 0x18) == '\0') {
      uVar9 = 0;
      lVar12 = *(long *)(lVar14 + 0x38);
joined_r0x0071b0c8:
      if (lVar12 != 0) {
        uVar10 = FUN_0076b3f4(lVar14 + 0x40,param_1 + 1);
        lVar12 = 0;
        bVar13 = (byte)(uVar10 >> 0x39);
        lVar3 = *(long *)(lVar14 + 0x20);
        uVar4 = *(ulong *)(lVar14 + 0x28);
        uVar10 = uVar10 & uVar4;
        uVar17 = *(undefined8 *)(lVar3 + uVar10);
        uVar11 = NEON_cmeq(uVar17,CONCAT17(bVar13,CONCAT16(bVar13,CONCAT15(bVar13,CONCAT14(bVar13,
                                                  CONCAT13(bVar13,CONCAT12(bVar13,CONCAT11(bVar13,
                                                  bVar13))))))),1);
        uVar11 = uVar11 & 0x8080808080808080;
        while( true ) {
          for (; uVar11 == 0; uVar11 = uVar11 & 0x8080808080808080) {
            uVar17 = NEON_cmeq(uVar17,0xffffffffffffffff,1);
            bVar16 = NEON_umaxv(uVar17,1);
            if ((bVar16 & 1) != 0) goto LAB_0071aff0;
            lVar12 = lVar12 + 8;
            uVar10 = uVar10 + lVar12 & uVar4;
            uVar17 = *(undefined8 *)(lVar3 + uVar10);
            uVar11 = NEON_cmeq(uVar17,CONCAT17(bVar13,CONCAT16(bVar13,CONCAT15(bVar13,CONCAT14(
                                                  bVar13,CONCAT13(bVar13,CONCAT12(bVar13,CONCAT11(
                                                  bVar13,bVar13))))))),1);
          }
          uVar6 = (uVar11 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar11 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
          lVar2 = lVar3 + (uVar10 + ((ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 3) & uVar4) *
                          -0x98;
          if ((int)param_1[1] == *(int *)(lVar2 + -0x98)) break;
          uVar11 = uVar11 - 1 & uVar11;
        }
        uVar11 = *(ulong *)(lVar2 + -0x90);
        lVar12 = uVar11 - 3;
        if (uVar11 < 3) {
          lVar12 = 1;
        }
        if (lVar12 != 0) {
          if (lVar12 == 1) {
            if (*(long *)(lVar2 + -0x30) != 0) {
              free(*(void **)(lVar2 + -0x28));
            }
                    /* try { // try from 0071afc4 to 0071afcb has its CatchHandler @ 0071b0d0 */
            FUN_00719f78((ulong *)(lVar2 + -0x90));
          }
          else if (*(long *)(lVar2 + -0x88) != 0) {
            free(*(void **)(lVar2 + -0x80));
          }
        }
        *(undefined8 *)(lVar2 + -0x80) = param_3;
        *(undefined8 *)(lVar2 + -0x90) = 3;
        *(undefined8 *)(lVar2 + -0x88) = param_2;
      }
LAB_0071aff0:
      if ((((uVar9 & 1) == 0) && ((*puVar15 & 0x7fffffffffffffff) != 0)) &&
         (uVar11 = std::panicking::panic_count::is_zero_slow_path(), (uVar11 & 1) == 0)) {
        *(undefined1 *)(lVar14 + 0x18) = 1;
      }
      do {
        iVar5 = *piVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar8) {
          *piVar1 = iVar5 + -0x3fffffff;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar5 + 0xc0000001U >> 0x1e == 0) {
        return;
      }
      <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::wake_writer_or_readers
                (piVar1);
      return;
    }
  }
  else {
    ClearExclusiveLocal();
LAB_0071b078:
    <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::write_contended
              (lVar14 + 0x10);
    if ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0 & 0x7fffffffffffffff) == 0) goto LAB_0071ae78;
LAB_0071b09c:
    puVar15 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
    uVar9 = std::panicking::panic_count::is_zero_slow_path();
    if (*(char *)(lVar14 + 0x18) == '\0') {
      uVar9 = uVar9 ^ 1;
      lVar12 = *(long *)(lVar14 + 0x38);
      goto joined_r0x0071b0c8;
    }
    if (uVar9 == 0) goto LAB_0071ae94;
  }
  if (((*puVar15 & 0x7fffffffffffffff) != 0) &&
     (uVar11 = std::panicking::panic_count::is_zero_slow_path(), (uVar11 & 1) == 0)) {
    *(undefined1 *)(lVar14 + 0x18) = 1;
  }
LAB_0071ae94:
  do {
    iVar5 = *piVar1;
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar8) {
      *piVar1 = iVar5 + -0x3fffffff;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if (iVar5 + 0xc0000001U >> 0x1e == 0) {
    return;
  }
  <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::wake_writer_or_readers
            (piVar1);
  return;
}


// ===== 0071b0f4  FUN_0071b0f4 =====

void FUN_0071b0f4(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  param_1 = (undefined8 *)*param_1;
  plVar1 = (long *)*param_1;
  plVar2 = (long *)param_1[1];
  *param_1 = 0;
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__nix_store_8006w282fgsx3273c878b_00ad6640);
  }
  lVar3 = *plVar1;
  *plVar1 = 0;
  if (lVar3 != 0) {
    *plVar2 = lVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::unwrap_failed(&PTR_s__nix_store_8006w282fgsx3273c878b_00ad6670);
}


// ===== 0071b13c  FUN_0071b13c =====

void FUN_0071b13c(undefined8 *param_1,long param_2)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  
  pauVar1 = *(undefined1 (**) [16])*param_1;
  *(long *)*param_1 = 0;
  if (pauVar1 == (undefined1 (*) [16])0x0) {
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__nix_store_8006w282fgsx3273c878b_00ad6640);
  }
  if (*(char *)(param_2 + 4) != '\x01') {
    auVar2 = (**(code **)*pauVar1)();
    *pauVar1 = auVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::sync::lazy_lock::panic_poisoned();
}


// ===== 0071b18c  FUN_0071b18c =====

void FUN_0071b18c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  byte bVar13;
  long *plVar14;
  byte bVar15;
  undefined8 uVar16;
  long *local_70;
  int local_68 [2];
  long *local_60;
  undefined1 local_58;
  
  plVar14 = (long *)*param_1;
  local_68[0] = *(int *)(param_1 + 1);
  plVar1 = plVar14 + 2;
  local_70 = plVar14;
  if ((int)*plVar1 == 0) {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *(int *)plVar1 = 0x3fffffff;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 != '\0') goto LAB_0071b428;
  }
  else {
    ClearExclusiveLocal();
LAB_0071b428:
    <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::write_contended
              (plVar14 + 2);
  }
  puVar8 = PTR_GLOBAL_PANIC_COUNT_00b00bf0;
  if ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0 & 0x7fffffffffffffff) == 0) {
    if ((char)plVar14[3] == '\0') {
      uVar9 = 0;
      lVar12 = plVar14[7];
      local_58 = 0;
joined_r0x0071b408:
      local_60 = plVar1;
      if (lVar12 != 0) {
        uVar10 = FUN_0076b3f4(plVar14 + 8,local_68);
        lVar12 = 0;
        bVar13 = (byte)(uVar10 >> 0x39);
        lVar3 = plVar14[4];
        uVar4 = plVar14[5];
        uVar10 = uVar10 & uVar4;
        uVar16 = *(undefined8 *)(lVar3 + uVar10);
        uVar11 = NEON_cmeq(uVar16,CONCAT17(bVar13,CONCAT16(bVar13,CONCAT15(bVar13,CONCAT14(bVar13,
                                                  CONCAT13(bVar13,CONCAT12(bVar13,CONCAT11(bVar13,
                                                  bVar13))))))),1);
        uVar11 = uVar11 & 0x8080808080808080;
        while( true ) {
          for (; uVar11 == 0; uVar11 = uVar11 & 0x8080808080808080) {
            uVar16 = NEON_cmeq(uVar16,0xffffffffffffffff,1);
            bVar15 = NEON_umaxv(uVar16,1);
            if ((bVar15 & 1) != 0) goto LAB_0071b350;
            lVar12 = lVar12 + 8;
            uVar10 = uVar10 + lVar12 & uVar4;
            uVar16 = *(undefined8 *)(lVar3 + uVar10);
            uVar11 = NEON_cmeq(uVar16,CONCAT17(bVar13,CONCAT16(bVar13,CONCAT15(bVar13,CONCAT14(
                                                  bVar13,CONCAT13(bVar13,CONCAT12(bVar13,CONCAT11(
                                                  bVar13,bVar13))))))),1);
          }
          uVar5 = (uVar11 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar11 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
          lVar2 = lVar3 + (uVar10 + ((ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3) & uVar4) *
                          -0x98;
          if (local_68[0] == *(int *)(lVar2 + -0x98)) break;
          uVar11 = uVar11 - 1 & uVar11;
        }
        uVar11 = *(ulong *)(lVar2 + -0x90);
        lVar12 = uVar11 - 3;
        if (uVar11 < 3) {
          lVar12 = 1;
        }
        if (lVar12 != 0) {
          if (lVar12 == 1) {
            if (*(long *)(lVar2 + -0x30) != 0) {
              free(*(void **)(lVar2 + -0x28));
            }
                    /* try { // try from 0071b324 to 0071b32b has its CatchHandler @ 0071b43c */
            FUN_00719f78((ulong *)(lVar2 + -0x90));
          }
          else if (*(long *)(lVar2 + -0x88) != 0) {
            free(*(void **)(lVar2 + -0x80));
          }
        }
        *(undefined8 *)(lVar2 + -0x80) = param_3;
        *(undefined8 *)(lVar2 + -0x90) = 3;
        *(undefined8 *)(lVar2 + -0x88) = param_2;
      }
LAB_0071b350:
      if ((((uVar9 & 1) == 0) && ((*(ulong *)puVar8 & 0x7fffffffffffffff) != 0)) &&
         (uVar11 = std::panicking::panic_count::is_zero_slow_path(), (uVar11 & 1) == 0)) {
        *(undefined1 *)(plVar14 + 3) = 1;
      }
      do {
        lVar12 = *plVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *(int *)plVar1 = (int)lVar12 + -0x3fffffff;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      plVar14 = local_70;
      if ((int)lVar12 + 0xc0000001U >> 0x1e != 0) {
        <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::
        wake_writer_or_readers(plVar1);
        plVar14 = local_70;
      }
      goto LAB_0071b388;
    }
LAB_0071b1f4:
    if (((*(ulong *)puVar8 & 0x7fffffffffffffff) != 0) &&
       (uVar11 = std::panicking::panic_count::is_zero_slow_path(), (uVar11 & 1) == 0)) {
      *(undefined1 *)(plVar14 + 3) = 1;
    }
  }
  else {
                    /* try { // try from 0071b3c4 to 0071b42f has its CatchHandler @ 0071b434 */
    uVar9 = std::panicking::panic_count::is_zero_slow_path();
    if ((char)plVar14[3] == '\0') {
      uVar9 = uVar9 ^ 1;
      lVar12 = plVar14[7];
      local_58 = (undefined1)uVar9;
      goto joined_r0x0071b408;
    }
    if (uVar9 != 0) goto LAB_0071b1f4;
  }
  do {
    lVar12 = *plVar1;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *(int *)plVar1 = (int)lVar12 + -0x3fffffff;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if ((int)lVar12 + 0xc0000001U >> 0x1e != 0) {
                    /* try { // try from 0071b228 to 0071b22f has its CatchHandler @ 0071b434 */
    <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::wake_writer_or_readers
              (plVar14 + 2);
  }
LAB_0071b388:
  do {
    lVar12 = *plVar14;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar7) {
      *plVar14 = lVar12 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (lVar12 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc[c1f8e832b0d782c7]::sync::Arc<libdiscore_common[1cb84820f9455fa0]::core::maybe_mutex::MaybeRwLock<std[17aff9129faa4dc5]::collections::hash::map::HashMap<u32,libdiscore_common[1cb84820f9455fa0]::core::http::ActiveRequest>>>>
    ::drop_slow(&local_70);
  }
  return;
}


// ===== 0071b488  libdiscore_common::crash =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* libdiscore_common::crash */

void __rustcall libdiscore_common::crash(void)

{
  undefined8 local_78;
  char *pcStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  char *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  char *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined *local_28;
  undefined8 uStack_20;
  undefined1 uStack_11;
  
  if (*(long *)PTR_MAX_LOG_LEVEL_FILTER_00b00c78 != 0) {
    local_40 = "libdiscore_common";
    uStack_38 = 0x11;
    local_28 = &DAT_002a0120;
    uStack_20 = 0x21;
    uStack_60 = _UNK_0029ff58;
    local_68 = _DAT_0029ff50;
    local_78 = 0;
    pcStack_70 = "libdiscore_common";
    uStack_48 = _UNK_0029fa18;
    local_50 = _DAT_0029fa10;
    local_58 = "common/rust/src/lib.rs";
    local_30 = DAT_002a1190;
    <log::__private_api::GlobalLogger_as_log::Log>::log(&uStack_11,&local_78);
  }
                    /* WARNING: Subroutine does not return */
  ::core::panicking::panic_fmt(&DAT_002a0120,0x21,&PTR_s_common_rust_src_lib_rs_00ad66d0);
}


// ===== 0071b51c  <libdiscore_common::core::http::libdiscore_common::core::http::ProgressCallback>::new =====

/* WARNING: Unknown calling convention: __rustcall */
/* <libdiscore_common::core::http::libdiscore_common::core::http::ProgressCallback>::new */

void __rustcall
<libdiscore_common::core::http::libdiscore_common::core::http::ProgressCallback>::new(void)

{
  undefined8 *puVar1;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined8 *)FUN_004b25a4(0x28,8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[1] = 1;
    *puVar1 = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x28);
}


// ===== 0071b55c  <libdiscore_common::core::http::libdiscore_common::core::http::ProgressCallback>::call =====

/* WARNING: Unknown calling convention: __rustcall */
/* <libdiscore_common::core::http::libdiscore_common::core::http::ProgressCallback>::call */

void __rustcall
<libdiscore_common::core::http::libdiscore_common::core::http::ProgressCallback>::call
          (long *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong *puVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  
  lVar9 = *param_1;
  piVar1 = (int *)(lVar9 + 0x10);
  do {
    if (*piVar1 != 0) {
      ClearExclusiveLocal();
      param_1 = (long *)<std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::
                        lock_contended(lVar9 + 0x10);
      uVar8 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
      puVar5 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
      goto joined_r0x0071b690;
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar8 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
  puVar5 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
joined_r0x0071b690:
  PTR_GLOBAL_PANIC_COUNT_00b00bf0 = (undefined *)puVar5;
  if ((uVar8 & 0x7fffffffffffffff) == 0) {
    if (*(char *)(lVar9 + 0x14) == '\0') {
      uVar6 = 0;
      lVar7 = *(long *)(lVar9 + 0x18);
joined_r0x0071b6c4:
      if (lVar7 != 0) {
                    /* try { // try from 0071b5e0 to 0071b5e3 has its CatchHandler @ 0071b6cc */
        (**(code **)(*(long *)(lVar9 + 0x20) + 0x28))(lVar7,param_2,param_3);
      }
      if ((((uVar6 & 1) == 0) && ((*puVar5 & 0x7fffffffffffffff) != 0)) &&
         (uVar8 = std::panicking::panic_count::is_zero_slow_path(), (uVar8 & 1) == 0)) {
        *(undefined1 *)(lVar9 + 0x14) = 1;
      }
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = 0;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      goto LAB_0071b600;
    }
LAB_0071b5b0:
    if (((*puVar5 & 0x7fffffffffffffff) != 0) &&
       (uVar8 = std::panicking::panic_count::is_zero_slow_path(), (uVar8 & 1) == 0)) {
      *(undefined1 *)(lVar9 + 0x14) = 1;
    }
  }
  else {
    uVar6 = std::panicking::panic_count::is_zero_slow_path(param_1,param_2,param_3);
    if (*(char *)(lVar9 + 0x14) == '\0') {
      uVar6 = uVar6 ^ 1;
      lVar7 = *(long *)(lVar9 + 0x18);
      goto joined_r0x0071b6c4;
    }
    if (uVar6 != 0) goto LAB_0071b5b0;
  }
  do {
    iVar2 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_0071b600:
  if (iVar2 == 2) {
    <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(piVar1);
    return;
  }
  return;
}


// ===== 0071b6e8  <libdiscore_common::core::http::[0]::libdiscore_common::core::http::HttpRequest>::progress_callback =====

/* WARNING: Unknown calling convention: __rustcall */
/* <libdiscore_common::core::http::[0]::libdiscore_common::core::http::HttpRequest>::progress_callback
    */

void __rustcall
<libdiscore_common::core::http::[0]::libdiscore_common::core::http::HttpRequest>::progress_callback
          (undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  plVar3 = (long *)param_2[0x1a];
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
                    /* try { // try from 0071b720 to 0071b72b has its CatchHandler @ 0071b77c */
      <alloc::sync::[n]::alloc::sync::Arc<std::sync::poison::mutex::Mutex<core::option::Option<alloc::boxed::Box<dyn_Trait<Assoc=X>+{backref_26}::ops::function::Fn<(libdiscore_common::core::http::ProgressEvent)>+{backref_26}::marker::Sync+{backref_71}::Send>>>>>
      ::drop_slow();
    }
  }
  uVar6 = param_2[0x15];
  uVar5 = param_2[0x14];
  uVar8 = param_2[0x17];
  uVar7 = param_2[0x16];
  uVar9 = param_2[0x18];
  param_2[0x1a] = param_3;
  param_1[0x19] = param_2[0x19];
  param_1[0x18] = uVar9;
  param_1[0x15] = uVar6;
  param_1[0x14] = uVar5;
  param_1[0x17] = uVar8;
  param_1[0x16] = uVar7;
  uVar6 = param_2[0xd];
  uVar5 = param_2[0xc];
  uVar8 = param_2[0xf];
  uVar7 = param_2[0xe];
  param_1[0x1a] = param_3;
  param_1[0xd] = uVar6;
  param_1[0xc] = uVar5;
  param_1[0xf] = uVar8;
  param_1[0xe] = uVar7;
  uVar7 = param_2[0x10];
  uVar6 = param_2[0x13];
  uVar5 = param_2[0x12];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar7;
  param_1[0x13] = uVar6;
  param_1[0x12] = uVar5;
  uVar7 = param_2[4];
  uVar6 = param_2[7];
  uVar5 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar7;
  param_1[7] = uVar6;
  param_1[6] = uVar5;
  uVar7 = param_2[8];
  uVar6 = param_2[0xb];
  uVar5 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar7;
  param_1[0xb] = uVar6;
  param_1[10] = uVar5;
  uVar7 = *param_2;
  uVar6 = param_2[3];
  uVar5 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[3] = uVar6;
  param_1[2] = uVar5;
  return;
}


// ===== 0071b798  <libdiscore_common::core::http::[0]::libdiscore_common::core::http::HttpRequest>::query =====

/* WARNING: Unknown calling convention: __rustcall */
/* <libdiscore_common::core::http::[0]::libdiscore_common::core::http::HttpRequest>::query */

void __rustcall
<libdiscore_common::core::http::[0]::libdiscore_common::core::http::HttpRequest>::query
          (undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  void *__ptr;
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar2 = param_2[0x14];
  if (lVar2 != -1) {
    __ptr = (void *)param_2[0x15];
    lVar4 = param_2[0x16];
    if (lVar4 != 0) {
      puVar3 = (undefined8 *)((long)__ptr + 0x20);
      do {
        if (puVar3[-4] != 0) {
          free((void *)puVar3[-3]);
        }
        if (puVar3[-1] != 0) {
          free((void *)*puVar3);
        }
        lVar4 = lVar4 + -1;
        puVar3 = puVar3 + 6;
      } while (lVar4 != 0);
    }
    if (lVar2 != 0) {
      free(__ptr);
    }
  }
  lVar4 = *param_3;
  lVar2 = param_3[2];
  param_2[0x15] = param_3[1];
  param_2[0x14] = lVar4;
  uVar5 = param_2[0xc];
  uVar7 = param_2[0xf];
  uVar6 = param_2[0xe];
  param_2[0x16] = lVar2;
  uVar1 = param_2[0x1a];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar5;
  param_1[0xf] = uVar7;
  param_1[0xe] = uVar6;
  uVar7 = param_2[0x10];
  uVar6 = param_2[0x13];
  uVar5 = param_2[0x12];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar7;
  param_1[0x13] = uVar6;
  param_1[0x12] = uVar5;
  uVar7 = param_2[4];
  uVar6 = param_2[7];
  uVar5 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar7;
  param_1[7] = uVar6;
  param_1[6] = uVar5;
  uVar7 = param_2[8];
  uVar6 = param_2[0xb];
  uVar5 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar7;
  param_1[0xb] = uVar6;
  param_1[10] = uVar5;
  uVar7 = *param_2;
  uVar6 = param_2[3];
  uVar5 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[3] = uVar6;
  param_1[2] = uVar5;
  uVar9 = param_2[0x14];
  uVar6 = param_2[0x17];
  uVar5 = param_2[0x16];
  uVar8 = param_2[0x19];
  uVar7 = param_2[0x18];
  param_1[0x15] = param_2[0x15];
  param_1[0x14] = uVar9;
  param_1[0x17] = uVar6;
  param_1[0x16] = uVar5;
  param_1[0x19] = uVar8;
  param_1[0x18] = uVar7;
  param_1[0x1a] = uVar1;
  return;
}


// ===== 0071b894  <libdiscore_common::core::http::[0]::libdiscore_common::core::http::HttpRequest>::method =====

/* WARNING: Unknown calling convention: __rustcall */
/* <libdiscore_common::core::http::[0]::libdiscore_common::core::http::HttpRequest>::method */

void __rustcall
<libdiscore_common::core::http::[0]::libdiscore_common::core::http::HttpRequest>::method
          (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if ((9 < *(byte *)(param_2 + 0x17)) && (param_2[0x19] != 0)) {
    free((void *)param_2[0x18]);
  }
  uVar2 = *param_3;
  uVar1 = param_3[2];
  param_2[0x18] = param_3[1];
  param_2[0x17] = uVar2;
  uVar2 = param_2[0xc];
  uVar4 = param_2[0xf];
  uVar3 = param_2[0xe];
  param_2[0x19] = uVar1;
  uVar1 = param_2[0x1a];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar2;
  param_1[0xf] = uVar4;
  param_1[0xe] = uVar3;
  uVar4 = param_2[0x10];
  uVar3 = param_2[0x13];
  uVar2 = param_2[0x12];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar4;
  param_1[0x13] = uVar3;
  param_1[0x12] = uVar2;
  uVar4 = param_2[4];
  uVar3 = param_2[7];
  uVar2 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar4;
  param_1[7] = uVar3;
  param_1[6] = uVar2;
  uVar4 = param_2[8];
  uVar3 = param_2[0xb];
  uVar2 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar4;
  param_1[0xb] = uVar3;
  param_1[10] = uVar2;
  uVar4 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar6 = param_2[0x14];
  uVar3 = param_2[0x17];
  uVar2 = param_2[0x16];
  uVar5 = param_2[0x19];
  uVar4 = param_2[0x18];
  param_1[0x15] = param_2[0x15];
  param_1[0x14] = uVar6;
  param_1[0x17] = uVar3;
  param_1[0x16] = uVar2;
  param_1[0x19] = uVar5;
  param_1[0x18] = uVar4;
  param_1[0x1a] = uVar1;
  return;
}


// ===== 0071b948  <libdiscore_common::core::http::[0]::libdiscore_common::core::http::HttpRequest>::headers =====

/* WARNING: Unknown calling convention: __rustcall */
/* <libdiscore_common::core::http::[0]::libdiscore_common::core::http::HttpRequest>::headers */

void __rustcall
<libdiscore_common::core::http::[0]::libdiscore_common::core::http::HttpRequest>::headers
          (undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  plVar2 = param_2 + 5;
  if (*plVar2 != -1) {
                    /* try { // try from 0071b974 to 0071b97b has its CatchHandler @ 0071b9e4 */
    FUN_00719f78(plVar2);
  }
  lVar3 = *param_3;
  lVar7 = param_3[3];
  lVar5 = param_3[2];
  param_2[6] = param_3[1];
  *plVar2 = lVar3;
  param_2[8] = lVar7;
  param_2[7] = lVar5;
  lVar3 = param_3[4];
  lVar7 = param_3[7];
  lVar5 = param_3[6];
  param_2[10] = param_3[5];
  param_2[9] = lVar3;
  param_2[0xc] = lVar7;
  param_2[0xb] = lVar5;
  lVar7 = param_3[8];
  lVar5 = param_3[0xb];
  lVar3 = param_3[10];
  param_2[0xe] = param_3[9];
  param_2[0xd] = lVar7;
  param_2[0x10] = lVar5;
  param_2[0xf] = lVar3;
  uVar8 = *param_2;
  uVar6 = param_2[3];
  uVar4 = param_2[2];
  uVar1 = param_2[0x1a];
  param_1[1] = param_2[1];
  *param_1 = uVar8;
  param_1[3] = uVar6;
  param_1[2] = uVar4;
  uVar9 = param_2[9];
  uVar8 = param_2[8];
  uVar6 = param_2[0xb];
  uVar4 = param_2[10];
  param_1[0x1a] = uVar1;
  param_1[9] = uVar9;
  param_1[8] = uVar8;
  param_1[0xb] = uVar6;
  param_1[10] = uVar4;
  uVar6 = param_2[4];
  uVar4 = param_2[7];
  uVar1 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar6;
  param_1[7] = uVar4;
  param_1[6] = uVar1;
  uVar6 = param_2[0x10];
  uVar4 = param_2[0x13];
  uVar1 = param_2[0x12];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar6;
  param_1[0x13] = uVar4;
  param_1[0x12] = uVar1;
  uVar6 = param_2[0xc];
  uVar4 = param_2[0xf];
  uVar1 = param_2[0xe];
  uVar9 = param_2[0x15];
  uVar8 = param_2[0x14];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar6;
  param_1[0xf] = uVar4;
  param_1[0xe] = uVar1;
  uVar6 = param_2[0x16];
  uVar4 = param_2[0x19];
  uVar1 = param_2[0x18];
  param_1[0x17] = param_2[0x17];
  param_1[0x16] = uVar6;
  param_1[0x19] = uVar4;
  param_1[0x18] = uVar1;
  param_1[0x15] = uVar9;
  param_1[0x14] = uVar8;
  return;
}


// ===== 0071ba14  <libdiscore_common::core::http::[2]::libdiscore_common::core::http::HttpClient>::new =====

/* WARNING: Unknown calling convention: __rustcall */
/* <libdiscore_common::core::http::[2]::libdiscore_common::core::http::HttpClient>::new */

undefined8 __rustcall
<libdiscore_common::core::http::[2]::libdiscore_common::core::http::HttpClient>::new(void)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auVar9 [16];
  ulong uStack_c0;
  uint7 uStack_87;
  undefined **local_80 [2];
  ulong local_70;
  undefined8 uStack_58;
  long lStack_38;
  undefined *local_18;
  
  <tokio::sync::batch_semaphore::tokio::sync::batch_semaphore::Semaphore>::new(local_80,100);
  uStack_58 = 100;
  auVar9 = FUN_0074dc80(local_80);
  puVar4 = PTR_TOKIO_RUNTIME_HANDLE_00b00d38;
  if ((int)*(undefined8 *)(PTR_TOKIO_RUNTIME_HANDLE_00b00d38 + 0x10) != 0) {
    local_80[0] = &local_18;
    local_18 = PTR_TOKIO_RUNTIME_HANDLE_00b00d38;
                    /* try { // try from 0071bb4c to 0071bb6b has its CatchHandler @ 0071bbc4 */
    <std::sys::sync::once::futex::[0]::std::sys::sync::once::futex::Once>::call
              (PTR_TOKIO_RUNTIME_HANDLE_00b00d38 + 0x10,1,local_80,&DAT_00ad6108,
               &PTR_s__nix_store_8006w282fgsx3273c878b_00ad60f0);
  }
  puVar3 = PTR_NEXT_ID_00b00cd0;
  lStack_38 = (ulong)uStack_87 << 8;
  local_70 = uStack_c0;
  do {
    lVar8 = *(long *)puVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar2) {
      *(long *)puVar3 = lVar8 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0' || lVar8 == 0);
  local_80[0] = auVar9._8_8_;
  if (*(long *)puVar4 == 1) {
                    /* try { // try from 0071baa4 to 0071bb27 has its CatchHandler @ 0071bbd8 */
    ppuVar6 = (undefined **)FUN_007543d8(puVar4 + 8,local_80);
  }
  else {
    ppuVar6 = (undefined **)FUN_00754c18(puVar4 + 8,local_80);
  }
  if ((int)*(undefined8 *)(puVar4 + 0x10) != 0) {
    local_80[0] = &local_18;
    local_18 = puVar4;
                    /* try { // try from 0071bb80 to 0071bb9f has its CatchHandler @ 0071bba8 */
    <std::sys::sync::once::futex::[0]::std::sys::sync::once::futex::Once>::call
              (puVar4 + 0x10,1,local_80,&DAT_00ad6108,
               &PTR_s__nix_store_8006w282fgsx3273c878b_00ad60f0);
  }
  local_70 = local_70 & 0xffffffffffffff00;
  do {
    lVar8 = *(long *)puVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar2) {
      *(long *)puVar3 = lVar8 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0' || lVar8 == 0);
  local_80[0] = ppuVar6;
  if (*(long *)puVar4 == 1) {
    uVar7 = FUN_007540f0(puVar4 + 8,local_80);
  }
  else {
    uVar7 = FUN_00754918(puVar4 + 8,local_80);
  }
  iVar5 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::drop_join_handle_fast()
  ;
  if (iVar5 != 0) {
    <tokio::runtime::task::raw::tokio::runtime::task::raw::RawTask>::drop_join_handle_slow(uVar7);
  }
  return auVar9._0_8_;
}


// ===== 0071bbf0  <libdiscore_common::core::http::[5]::libdiscore_common::core::http::PollingHttpClient>::make_request =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* <libdiscore_common::core::http::[5]::libdiscore_common::core::http::PollingHttpClient>::make_request
    */

void __rustcall
<libdiscore_common::core::http::[5]::libdiscore_common::core::http::PollingHttpClient>::make_request
          (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  long *******ppppppplVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  code *pcVar10;
  int iVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long ******pppppplVar16;
  long lVar17;
  undefined8 *puVar18;
  void *__ptr;
  long *******ppppppplVar19;
  undefined1 auVar20 [16];
  undefined1 *local_d50;
  uint local_d40;
  int local_d3c;
  long *local_d38;
  long ******local_d30;
  long lStack_d28;
  void *local_d20;
  undefined8 uStack_d18;
  undefined8 uStack_d10;
  undefined8 uStack_d08;
  undefined8 local_d00;
  undefined8 uStack_cf8;
  undefined8 uStack_cf0;
  undefined8 uStack_ce8;
  undefined8 local_ce0;
  undefined8 uStack_cd8;
  long local_cd0;
  void *local_cc8;
  undefined8 local_cc0;
  undefined8 uStack_cb8;
  long *local_cb0;
  int iStack_ca8;
  undefined4 uStack_ca4;
  long ******local_ca0;
  undefined1 local_c98;
  long ******local_c90;
  undefined *puStack_c88;
  void *local_c80;
  undefined8 uStack_c78;
  undefined8 local_c70;
  undefined8 uStack_c68;
  undefined8 uStack_c60;
  undefined8 uStack_c58;
  undefined8 local_c50;
  undefined8 uStack_c48;
  undefined8 uStack_c40;
  undefined8 uStack_c38;
  long local_c30;
  void *pvStack_c28;
  undefined8 uStack_c20;
  undefined8 uStack_c18;
  long *local_c10;
  undefined8 uStack_c08;
  undefined8 uStack_c00;
  undefined8 uStack_bf8;
  undefined8 local_bf0;
  undefined8 uStack_be8;
  undefined8 uStack_be0;
  undefined8 uStack_bd8;
  undefined8 local_bd0;
  undefined8 uStack_bc8;
  undefined8 local_bc0;
  long *plStack_bb8;
  long *local_bb0;
  long ******pppppplStack_ba8;
  int local_690;
  undefined1 local_68c;
  long ******local_680;
  char *pcStack_678;
  void *local_670;
  undefined8 uStack_668;
  char *local_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  char *pcStack_648;
  undefined8 local_640;
  undefined8 uStack_638;
  undefined *local_630;
  long ******pppppplStack_628;
  long local_620;
  void *pvStack_618;
  undefined8 local_610;
  undefined8 uStack_608;
  long *local_600;
  undefined8 uStack_5f8;
  undefined1 auStack_71 [17];
  
  piVar1 = (int *)(param_2[2] + 0x10);
  do {
    iVar11 = *piVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = iVar11 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  local_d3c = iVar11;
                    /* try { // try from 0071bc44 to 0071bc47 has its CatchHandler @ 0071c400 */
  auVar20 = <futures_util::abortable::[0]::futures_util::abortable::AbortHandle>::new_pair();
  local_d38 = auVar20._8_8_;
  local_cb0 = auVar20._0_8_;
  ppppppplVar19 = (long *******)param_2[1];
  lStack_d28 = 0;
  local_d20 = (void *)0x0;
  local_d30 = (long ******)0x3;
  ppppppplVar2 = ppppppplVar19 + 2;
  iStack_ca8 = iVar11;
  if (*(int *)ppppppplVar2 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(ppppppplVar2,0x10);
    if (bVar5) {
      *(undefined4 *)ppppppplVar2 = 0x3fffffff;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 != '\0') goto LAB_0071c2dc;
  }
  else {
    ClearExclusiveLocal();
LAB_0071c2dc:
                    /* try { // try from 0071c2dc to 0071c2e3 has its CatchHandler @ 0071c3f0 */
    <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::write_contended
              (ppppppplVar19 + 2);
    auVar20._8_8_ = local_d38;
    auVar20._0_8_ = local_cb0;
  }
  puVar7 = PTR_GLOBAL_PANIC_COUNT_00b00bf0;
  local_d38 = auVar20._8_8_;
  local_cb0 = auVar20._0_8_;
  if ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0 & 0x7fffffffffffffff) == 0) {
    if (*(char *)(ppppppplVar19 + 3) == '\0') {
      uVar12 = 0;
LAB_0071bdbc:
      local_d38 = auVar20._8_8_;
      local_cb0 = auVar20._0_8_;
      uStack_608 = uStack_cb8;
      local_610 = local_cc0;
      pppppplStack_628 = (long ******)uStack_cd8;
      local_630 = (undefined *)local_ce0;
      uStack_5f8 = CONCAT44(uStack_ca4,iStack_ca8);
      pvStack_618 = local_cc8;
      local_620 = local_cd0;
      local_600 = local_cb0;
      local_c98 = (undefined1)uVar12;
      pcStack_678 = (char *)lStack_d28;
      local_680 = local_d30;
      uStack_668 = uStack_d18;
      local_670 = local_d20;
      uStack_658 = uStack_d08;
      local_660 = (char *)uStack_d10;
      pcStack_648 = (char *)uStack_cf8;
      uStack_650 = local_d00;
      uStack_638 = uStack_ce8;
      local_640 = uStack_cf0;
                    /* try { // try from 0071be00 to 0071be13 has its CatchHandler @ 0071c3e0 */
      local_ca0 = (long ******)ppppppplVar2;
      FUN_0075fac4(&local_c90,ppppppplVar19 + 4,iVar11,&local_680);
      if ((long *******)local_c90 != (long *******)0xffffffffffffffff) {
        lVar17 = (long)local_c90 + -3;
        if (local_c90 < (long *******)0x3) {
          lVar17 = 1;
        }
        if (lVar17 != 0) {
          if (lVar17 == 1) {
            if (local_c30 != 0) {
              free(pvStack_c28);
            }
                    /* try { // try from 0071be4c to 0071be57 has its CatchHandler @ 0071c370 */
            FUN_00719f78(&local_c90);
          }
          else if (puStack_c88 != (undefined *)0x0) {
            free(local_c80);
          }
        }
        if (local_c10 != (long *)0x0) {
          do {
            lVar17 = *local_c10;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(local_c10,0x10);
            if (bVar5) {
              *local_c10 = lVar17 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar17 + -1 == 0) {
            DataMemoryBarrier(2,1);
                    /* try { // try from 0071bf00 to 0071bf07 has its CatchHandler @ 0071c3e0 */
            <alloc::sync::[n]::alloc::sync::Arc<futures_util::abortable::AbortInner>>::drop_slow
                      (&local_c10);
          }
        }
      }
                    /* try { // try from 0071c25c to 0071c25f has its CatchHandler @ 0071c368 */
      if ((((uVar12 & 1) == 0) && ((*(ulong *)puVar7 & 0x7fffffffffffffff) != 0)) &&
         (uVar15 = std::panicking::panic_count::is_zero_slow_path(), (uVar15 & 1) == 0)) {
        *(undefined1 *)(ppppppplVar19 + 3) = 1;
      }
      do {
        iVar11 = *(int *)ppppppplVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppppppplVar2,0x10);
        if (bVar5) {
          *(int *)ppppppplVar2 = iVar11 + -0x3fffffff;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 + 0xc0000001U >> 0x1e != 0) {
                    /* try { // try from 0071c1ec to 0071c1f3 has its CatchHandler @ 0071c368 */
        <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::
        wake_writer_or_readers(ppppppplVar19 + 2);
      }
      if (param_3[0x1a] != 0) {
        do {
          pppppplVar16 = *ppppppplVar19;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppppppplVar19,0x10);
          if (bVar5) {
            *ppppppplVar19 = (long ******)((long)pppppplVar16 + 1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((long)pppppplVar16 < 0) goto LAB_0071c29c;
        lVar17 = param_3[0x1a];
        puStack_c88 = (undefined *)CONCAT44(puStack_c88._4_4_,local_d3c);
        piVar1 = (int *)(lVar17 + 0x10);
        do {
          local_c90 = (long ******)ppppppplVar19;
          if (*piVar1 != 0) {
            ClearExclusiveLocal();
                    /* try { // try from 0071c2ec to 0071c2f3 has its CatchHandler @ 0071c314 */
            <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                      (lVar17 + 0x10);
            break;
          }
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((*(ulong *)puVar7 & 0x7fffffffffffffff) == 0) {
          if (*(char *)(lVar17 + 0x14) == '\0') {
            local_d40 = 0;
LAB_0071bfec:
            pppppplVar16 = local_c90;
            local_d50 = (undefined1 *)(lVar17 + 0x14);
            uVar9 = puStack_c88._0_4_;
            local_680 = local_c90;
            pcStack_678 = (char *)CONCAT44(pcStack_678._4_4_,puStack_c88._0_4_);
            __rustc::__rust_no_alloc_shim_is_unstable_v2();
            puVar14 = (undefined8 *)FUN_004b25a4(0x10,8);
            if (puVar14 == (undefined8 *)0x0) {
                    /* try { // try from 0071c290 to 0071c29b has its CatchHandler @ 0071c408 */
                    /* WARNING: Subroutine does not return */
              alloc::alloc::handle_alloc_error(8,0x10);
            }
            *puVar14 = pppppplVar16;
            *(undefined4 *)(puVar14 + 1) = uVar9;
            __ptr = *(void **)(lVar17 + 0x18);
            if (__ptr != (void *)0x0) {
              puVar18 = *(undefined8 **)(lVar17 + 0x20);
              pcVar10 = (code *)*puVar18;
              if (pcVar10 != (code *)0x0) {
                    /* try { // try from 0071c030 to 0071c037 has its CatchHandler @ 0071c340 */
                (*pcVar10)(__ptr);
              }
              if (puVar18[1] != 0) {
                free(__ptr);
              }
            }
            *(undefined8 **)(lVar17 + 0x18) = puVar14;
            *(undefined ***)(lVar17 + 0x20) = &PTR_FUN_00ad6098;
            if ((((local_d40 & 1) == 0) && ((*(ulong *)puVar7 & 0x7fffffffffffffff) != 0)) &&
               (uVar15 = std::panicking::panic_count::is_zero_slow_path(), (uVar15 & 1) == 0)) {
              *local_d50 = 1;
            }
            do {
              iVar11 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = 0;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar11 == 2) {
                    /* try { // try from 0071c2b4 to 0071c2c3 has its CatchHandler @ 0071c2f8 */
              <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(piVar1);
            }
            goto LAB_0071c084;
          }
LAB_0071bf98:
          if (((*(ulong *)puVar7 & 0x7fffffffffffffff) != 0) &&
             (uVar15 = std::panicking::panic_count::is_zero_slow_path(), (uVar15 & 1) == 0)) {
            *(undefined1 *)(lVar17 + 0x14) = 1;
          }
        }
        else {
                    /* try { // try from 0071c244 to 0071c247 has its CatchHandler @ 0071c314 */
          local_d40 = std::panicking::panic_count::is_zero_slow_path();
          if (*(char *)(lVar17 + 0x14) == '\0') {
            local_d40 = local_d40 ^ 1;
            goto LAB_0071bfec;
          }
          if (local_d40 != 0) goto LAB_0071bf98;
        }
        do {
          iVar11 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = 0;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar11 == 2) {
                    /* try { // try from 0071c270 to 0071c27f has its CatchHandler @ 0071c314 */
          <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(piVar1);
        }
        do {
          pppppplVar16 = (long ******)*local_c90;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(local_c90,0x10);
          if (bVar5) {
            *local_c90 = (long *****)((long)pppppplVar16 + -1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((long ******)((long)pppppplVar16 + -1) == (long ******)0x0) {
          DataMemoryBarrier(2,1);
                    /* try { // try from 0071bfd4 to 0071bfdb has its CatchHandler @ 0071c368 */
          <alloc[c1f8e832b0d782c7]::sync::Arc<libdiscore_common[1cb84820f9455fa0]::core::maybe_mutex::MaybeRwLock<std[17aff9129faa4dc5]::collections::hash::map::HashMap<u32,libdiscore_common[1cb84820f9455fa0]::core::http::ActiveRequest>>>>
          ::drop_slow(&local_c90);
        }
      }
LAB_0071c084:
      plStack_bb8 = (long *)*param_2;
      plVar3 = plStack_bb8 + 0x3e;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar5) {
          *plVar3 = *plVar3 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      do {
        lVar17 = *plStack_bb8;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plStack_bb8,0x10);
        if (bVar5) {
          *plStack_bb8 = lVar17 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (-1 < lVar17) {
        do {
          pppppplVar16 = *ppppppplVar19;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppppppplVar19,0x10);
          if (bVar5) {
            *ppppppplVar19 = (long ******)((long)pppppplVar16 + 1);
            cVar4 = ExclusiveMonitorsStatus();
          }
          puVar7 = PTR_TOKIO_RUNTIME_HANDLE_00b00d38;
        } while (cVar4 != '\0');
        if (-1 < (long)pppppplVar16) {
          uStack_be8 = param_3[0x15];
          local_bf0 = param_3[0x14];
          uStack_bd8 = param_3[0x17];
          uStack_be0 = param_3[0x16];
          uStack_bc8 = param_3[0x19];
          local_bd0 = param_3[0x18];
          local_bc0 = param_3[0x1a];
          pvStack_c28 = (void *)param_3[0xd];
          local_c30 = param_3[0xc];
          uStack_c18 = param_3[0xf];
          uStack_c20 = param_3[0xe];
          uStack_c08 = param_3[0x11];
          local_c10 = (long *)param_3[0x10];
          uStack_bf8 = param_3[0x13];
          uStack_c00 = param_3[0x12];
          local_bb0 = local_d38;
          uStack_c68 = param_3[5];
          local_c70 = param_3[4];
          uStack_c58 = param_3[7];
          uStack_c60 = param_3[6];
          uStack_c48 = param_3[9];
          local_c50 = param_3[8];
          uStack_c38 = param_3[0xb];
          uStack_c40 = param_3[10];
          puStack_c88 = (undefined *)param_3[1];
          local_c90 = (long ******)*param_3;
          uStack_c78 = param_3[3];
          local_c80 = (void *)param_3[2];
          local_690 = local_d3c;
          local_68c = 0;
          pppppplStack_ba8 = (long ******)ppppppplVar19;
          if ((int)*(undefined8 *)(PTR_TOKIO_RUNTIME_HANDLE_00b00d38 + 0x10) != 0) {
            local_680 = (long ******)&local_ca0;
            local_ca0 = (long ******)PTR_TOKIO_RUNTIME_HANDLE_00b00d38;
                    /* try { // try from 0071c220 to 0071c23f has its CatchHandler @ 0071c300 */
            <std::sys::sync::once::futex::[0]::std::sys::sync::once::futex::Once>::call
                      (PTR_TOKIO_RUNTIME_HANDLE_00b00d38 + 0x10,1,&local_680,&DAT_00ad6108,
                       &PTR_s__nix_store_8006w282fgsx3273c878b_00ad60f0);
          }
          memcpy(&local_680,&local_c90,0x608);
          puVar8 = PTR_NEXT_ID_00b00cd0;
          do {
            lVar17 = *(long *)puVar8;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar8,0x10);
            if (bVar5) {
              *(long *)puVar8 = lVar17 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0' || lVar17 == 0);
          if (*(long *)puVar7 == 1) {
            uVar13 = FUN_007544d0();
            iVar11 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::
                     drop_join_handle_fast();
          }
          else {
            uVar13 = FUN_00754d18(puVar7 + 8,&local_680);
            iVar11 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::
                     drop_join_handle_fast();
          }
          if (iVar11 != 0) {
            <tokio::runtime::task::raw::tokio::runtime::task::raw::RawTask>::drop_join_handle_slow
                      (uVar13);
          }
          *param_1 = 0xffffffffffffffff;
          *(int *)(param_1 + 1) = local_d3c;
          return;
        }
      }
LAB_0071c29c:
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x71c2a0);
      (*pcVar10)();
    }
  }
  else {
    uVar12 = std::panicking::panic_count::is_zero_slow_path();
    auVar20._8_8_ = local_d38;
    auVar20._0_8_ = local_cb0;
    if (*(char *)(ppppppplVar19 + 3) == '\0') {
      uVar12 = uVar12 ^ 1;
      goto LAB_0071bdbc;
    }
    if (uVar12 == 0) goto LAB_0071bcac;
  }
  local_d38 = auVar20._8_8_;
  local_cb0 = auVar20._0_8_;
  if ((*(ulong *)puVar7 & 0x7fffffffffffffff) != 0) {
                    /* try { // try from 0071c1f8 to 0071c1fb has its CatchHandler @ 0071c3f0 */
    uVar15 = std::panicking::panic_count::is_zero_slow_path();
    auVar6._8_8_ = local_d38;
    auVar6._0_8_ = local_cb0;
    auVar20._8_8_ = local_d38;
    auVar20._0_8_ = local_cb0;
    if ((uVar15 & 1) == 0) {
      *(undefined1 *)(ppppppplVar19 + 3) = 1;
      auVar20 = auVar6;
    }
  }
LAB_0071bcac:
  do {
    local_d38 = auVar20._8_8_;
    local_cb0 = auVar20._0_8_;
    iVar11 = *(int *)ppppppplVar2;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(ppppppplVar2,0x10);
    if (bVar5) {
      *(int *)ppppppplVar2 = iVar11 + -0x3fffffff;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar11 + 0xc0000001U >> 0x1e != 0) {
                    /* try { // try from 0071c1cc to 0071c1db has its CatchHandler @ 0071c3f0 */
    <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::wake_writer_or_readers
              (ppppppplVar2);
    auVar20._8_8_ = local_d38;
    auVar20._0_8_ = local_cb0;
  }
  local_d38 = auVar20._8_8_;
  local_cb0 = auVar20._0_8_;
  if (*(long *)PTR_MAX_LOG_LEVEL_FILTER_00b00c78 != 0) {
    local_c90 = (long ******)&local_d3c;
    local_680 = (long ******)0x0;
    puStack_c88 = PTR_fmt_00b00c40;
    pcStack_648 = "NETWORK";
    local_640 = 7;
    local_630 = &DAT_002a5860;
    pppppplStack_628 = (long ******)&local_c90;
    uStack_668 = _UNK_002a03a8;
    local_670 = (void *)_DAT_002a03a0;
    pcStack_678 = "libdiscore_common::core::http";
    uStack_650 = _UNK_0029f4d8;
    uStack_658 = _DAT_0029f4d0;
    local_660 = "common/rust/src/core/http.rs";
    uStack_638 = DAT_002a1768;
                    /* try { // try from 0071bd54 to 0071bd73 has its CatchHandler @ 0071c3f0 */
    <log::__private_api::GlobalLogger_as_log::Log>::log(auStack_71,&local_680);
    auVar20._8_8_ = local_d38;
    auVar20._0_8_ = local_cb0;
  }
  local_d38 = auVar20._8_8_;
  local_cb0 = auVar20._0_8_;
  uVar13 = <alloc::io::error::core::io::error::Error>::new<&str>
                     (0x2a,"Error acquiring request tracking lock",0x25);
  *param_1 = 0x8000000000000003;
  param_1[1] = uVar13;
  lVar17 = (long)local_d30 + -3;
  if (local_d30 < (long *******)0x3) {
    lVar17 = 1;
  }
  if (lVar17 != 0) {
    if (lVar17 == 1) {
      if (local_cd0 != 0) {
        free(local_cc8);
      }
                    /* try { // try from 0071bdac to 0071bdb3 has its CatchHandler @ 0071c3ac */
      FUN_00719f78(&local_d30);
    }
    else if (lStack_d28 != 0) {
      free(local_d20);
    }
  }
  if (local_cb0 != (long *)0x0) {
    do {
      lVar17 = *local_cb0;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(local_cb0,0x10);
      if (bVar5) {
        *local_cb0 = lVar17 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar17 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 0071be90 to 0071be97 has its CatchHandler @ 0071c3a4 */
      <alloc::sync::[n]::alloc::sync::Arc<futures_util::abortable::AbortInner>>::drop_slow
                (&local_cb0);
    }
  }
  do {
    lVar17 = *local_d38;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(local_d38,0x10);
    if (bVar5) {
      *local_d38 = lVar17 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (lVar17 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 0071beb4 to 0071bebb has its CatchHandler @ 0071c400 */
    <alloc::sync::[n]::alloc::sync::Arc<futures_util::abortable::AbortInner>>::drop_slow(&local_d38)
    ;
  }
  FUN_00719258(param_3);
  return;
}


// ===== 0071c478  <libdiscore_common::core::http::[5]::libdiscore_common::core::http::PollingHttpClient>::cancel_request =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* <libdiscore_common::core::http::[5]::libdiscore_common::core::http::PollingHttpClient>::cancel_request
    */

void __rustcall
<libdiscore_common::core::http::[5]::libdiscore_common::core::http::PollingHttpClient>::
cancel_request(undefined8 *param_1,long param_2,int param_3)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  byte bVar14;
  long lVar15;
  ulong *puVar16;
  long *plVar17;
  byte bVar18;
  undefined1 local_bc [4];
  long *local_b8;
  undefined *puStack_b0;
  int *local_a8;
  char *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  char *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  char *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined *local_58;
  long **pplStack_50;
  undefined1 uStack_41;
  
  lVar15 = *(long *)(param_2 + 8);
  piVar1 = (int *)(lVar15 + 0x10);
  local_bc = (undefined1  [4])param_3;
  if (*piVar1 == 0) {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar7) {
      *piVar1 = 0x3fffffff;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 != '\0') goto LAB_0071c73c;
    if ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0 & 0x7fffffffffffffff) != 0) goto LAB_0071c758;
LAB_0071c4c8:
    puVar16 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
    if (*(char *)(lVar15 + 0x18) == '\0') {
      uVar8 = 0;
      lVar13 = *(long *)(lVar15 + 0x38);
      local_a0 = (char *)((ulong)local_a0 & 0xffffffffffffff00);
joined_r0x0071c77c:
      local_a8 = piVar1;
      if (lVar13 != 0) {
        uVar10 = FUN_0076b3f4(lVar15 + 0x40,local_bc);
        lVar13 = 0;
        bVar14 = (byte)(uVar10 >> 0x39);
        lVar3 = *(long *)(lVar15 + 0x20);
        uVar4 = *(ulong *)(lVar15 + 0x28);
        uVar10 = uVar10 & uVar4;
        uVar9 = *(undefined8 *)(lVar3 + uVar10);
        uVar11 = NEON_cmeq(uVar9,CONCAT17(bVar14,CONCAT16(bVar14,CONCAT15(bVar14,CONCAT14(bVar14,
                                                  CONCAT13(bVar14,CONCAT12(bVar14,CONCAT11(bVar14,
                                                  bVar14))))))),1);
        uVar11 = uVar11 & 0x8080808080808080;
        while( true ) {
          for (; uVar11 == 0; uVar11 = uVar11 & 0x8080808080808080) {
            uVar9 = NEON_cmeq(uVar9,0xffffffffffffffff,1);
            bVar18 = NEON_umaxv(uVar9,1);
            if ((bVar18 & 1) != 0) goto LAB_0071c780;
            lVar13 = lVar13 + 8;
            uVar10 = uVar10 + lVar13 & uVar4;
            uVar9 = *(undefined8 *)(lVar3 + uVar10);
            uVar11 = NEON_cmeq(uVar9,CONCAT17(bVar14,CONCAT16(bVar14,CONCAT15(bVar14,CONCAT14(bVar14
                                                  ,CONCAT13(bVar14,CONCAT12(bVar14,CONCAT11(bVar14,
                                                  bVar14))))))),1);
          }
          uVar5 = (uVar11 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar11 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
          lVar2 = lVar3 + (uVar10 + ((ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3) & uVar4) *
                          -0x98;
          if (local_bc == (undefined1  [4])*(int *)(lVar2 + -0x98)) break;
          uVar11 = uVar11 - 1 & uVar11;
        }
        if (*(long *)(lVar2 + -0x90) == 3) {
          plVar17 = *(long **)(lVar2 + -0x10);
          *(undefined8 *)(lVar2 + -0x10) = 0;
          if (plVar17 != (long *)0x0) {
                    /* try { // try from 0071c694 to 0071c69b has its CatchHandler @ 0071c7fc */
            local_b8 = plVar17;
            <futures_util::abortable::[6]::futures_util::abortable::AbortHandle>::abort(&local_b8);
            *(undefined1 *)(param_1 + 1) = 1;
            *param_1 = 0xffffffffffffffff;
            do {
              lVar13 = *plVar17;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar7) {
                *plVar17 = lVar13 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (lVar13 + -1 == 0) {
              DataMemoryBarrier(2,1);
                    /* try { // try from 0071c6c4 to 0071c6cb has its CatchHandler @ 0071c7f4 */
              <alloc::sync::[n]::alloc::sync::Arc<futures_util::abortable::AbortInner>>::drop_slow
                        (&local_b8);
            }
            if ((((uVar8 & 1) == 0) && ((*puVar16 & 0x7fffffffffffffff) != 0)) &&
               (uVar11 = std::panicking::panic_count::is_zero_slow_path(), (uVar11 & 1) == 0)) {
              *(undefined1 *)(lVar15 + 0x18) = 1;
            }
            do {
              iVar12 = *piVar1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar7) {
                *piVar1 = iVar12 + -0x3fffffff;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            goto LAB_0071c7b0;
          }
        }
      }
LAB_0071c780:
      *(undefined1 *)(param_1 + 1) = 0;
      *param_1 = 0xffffffffffffffff;
      if ((((uVar8 & 1) == 0) && ((*puVar16 & 0x7fffffffffffffff) != 0)) &&
         (uVar11 = std::panicking::panic_count::is_zero_slow_path(), (uVar11 & 1) == 0)) {
        *(undefined1 *)(lVar15 + 0x18) = 1;
      }
      do {
        iVar12 = *piVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = iVar12 + -0x3fffffff;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
LAB_0071c7b0:
      if (iVar12 + 0xc0000001U >> 0x1e == 0) {
        return;
      }
      <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::wake_writer_or_readers
                (piVar1);
      return;
    }
  }
  else {
    ClearExclusiveLocal();
LAB_0071c73c:
    <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::write_contended
              (lVar15 + 0x10);
    if ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0 & 0x7fffffffffffffff) == 0) goto LAB_0071c4c8;
LAB_0071c758:
    puVar16 = (ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0;
    uVar8 = std::panicking::panic_count::is_zero_slow_path();
    if (*(char *)(lVar15 + 0x18) == '\0') {
      uVar8 = uVar8 ^ 1;
      lVar13 = *(long *)(lVar15 + 0x38);
      local_a0 = (char *)CONCAT71(local_a0._1_7_,(char)uVar8);
      goto joined_r0x0071c77c;
    }
    if (uVar8 == 0) goto LAB_0071c4e4;
  }
  if (((*puVar16 & 0x7fffffffffffffff) != 0) &&
     (uVar11 = std::panicking::panic_count::is_zero_slow_path(), (uVar11 & 1) == 0)) {
    *(undefined1 *)(lVar15 + 0x18) = 1;
  }
LAB_0071c4e4:
  do {
    iVar12 = *piVar1;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar7) {
      *piVar1 = iVar12 + -0x3fffffff;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (iVar12 + 0xc0000001U >> 0x1e == 0) {
    lVar15 = *(long *)PTR_MAX_LOG_LEVEL_FILTER_00b00c78;
  }
  else {
    <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::wake_writer_or_readers
              (piVar1);
    lVar15 = *(long *)PTR_MAX_LOG_LEVEL_FILTER_00b00c78;
  }
  if (lVar15 != 0) {
    local_b8 = (long *)local_bc;
    local_70 = "NETWORK";
    uStack_68 = 7;
    pplStack_50 = &local_b8;
    local_58 = &DAT_002a3c41;
    local_a8 = (int *)0x0;
    local_a0 = "libdiscore_common::core::http";
    local_88 = "common/rust/src/core/http.rs";
    puStack_b0 = PTR_fmt_00b00c40;
    local_98 = _DAT_002a03a0;
    uStack_90 = _UNK_002a03a8;
    local_80 = _DAT_0029f4d0;
    uStack_78 = _UNK_0029f4d8;
    local_60 = DAT_002a17a8;
    <log::__private_api::GlobalLogger_as_log::Log>::log(&uStack_41,&local_a8);
  }
  uVar9 = <alloc::io::error::core::io::error::Error>::new<&str>
                    (0x2a,"Error acquiring request tracking lock",0x25);
  *param_1 = 0x8000000000000003;
  param_1[1] = uVar9;
  return;
}


// ===== 0071c834  <libdiscore_common::core::http::[5]::libdiscore_common::core::http::PollingHttpClient>::get_request_status =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* <libdiscore_common::core::http::[5]::libdiscore_common::core::http::PollingHttpClient>::get_request_status
    */

void __rustcall
<libdiscore_common::core::http::[5]::libdiscore_common::core::http::PollingHttpClient>::
get_request_status(undefined8 *param_1,long param_2,int param_3)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  ulong uVar7;
  char cVar8;
  bool bVar9;
  int *piVar10;
  uint uVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  void *__src;
  char *pcVar15;
  size_t __n;
  long lVar16;
  undefined *puVar17;
  undefined8 uVar18;
  byte bVar19;
  ulong uVar20;
  int *local_250;
  int local_244;
  int *local_240;
  int *piStack_238;
  int *local_230;
  int *piStack_228;
  int *local_220;
  int *piStack_218;
  int *piStack_210;
  int *piStack_208;
  int *local_200;
  int *piStack_1f8;
  undefined *puStack_1f0;
  int **ppiStack_1e8;
  uint *local_1e0;
  long lStack_1d8;
  void *pvStack_1d0;
  undefined8 uStack_1c8;
  uint *local_1c0;
  undefined1 uStack_1b8;
  undefined7 uStack_1b7;
  void *local_1b0;
  int local_1a4;
  int *local_1a0;
  int *piStack_198;
  int *local_190;
  int *local_188;
  int *piStack_180;
  int *local_178;
  int *local_170;
  int *piStack_168;
  int *local_160;
  undefined *puStack_158;
  int **ppiStack_150;
  uint *puStack_148;
  long local_140;
  void *pvStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *local_120;
  undefined8 uStack_118;
  int *local_110;
  int *piStack_108;
  int *local_100;
  int *piStack_f8;
  int *local_f0;
  int *piStack_e8;
  int *piStack_e0;
  int *local_d8;
  int *piStack_d0;
  int *piStack_c8;
  undefined *puStack_c0;
  int **local_b8;
  uint *puStack_b0;
  long lStack_a8;
  void *local_a0;
  undefined2 local_98;
  undefined6 uStack_96;
  undefined8 uStack_90;
  long *local_88;
  undefined8 uStack_80;
  undefined1 auStack_71 [17];
  
  lVar16 = *(long *)(param_2 + 8);
  uVar11 = *(uint *)(lVar16 + 0x10);
  puVar1 = (uint *)(lVar16 + 0x10);
  local_244 = param_3;
  if (uVar11 < 0x3ffffffe) {
    if (*puVar1 == uVar11) {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar9) {
        *puVar1 = uVar11 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
      if (cVar8 == '\0') {
        cVar8 = *(char *)(lVar16 + 0x18);
        goto joined_r0x0071c998;
      }
    }
    else {
      ClearExclusiveLocal();
    }
  }
  <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::read_contended
            (lVar16 + 0x10);
  cVar8 = *(char *)(lVar16 + 0x18);
joined_r0x0071c998:
  if (cVar8 == '\0') {
    if (*(long *)(lVar16 + 0x38) != 0) {
      uVar13 = FUN_0076b3f4(lVar16 + 0x40,&local_244);
      lVar14 = 0;
      bVar19 = (byte)(uVar13 >> 0x39);
      uVar18 = CONCAT17(bVar19,CONCAT16(bVar19,CONCAT15(bVar19,CONCAT14(bVar19,CONCAT13(bVar19,
                                                  CONCAT12(bVar19,CONCAT11(bVar19,bVar19)))))));
      lVar3 = *(long *)(lVar16 + 0x20);
      uVar4 = *(ulong *)(lVar16 + 0x28);
      uVar13 = uVar13 & uVar4;
      uVar12 = *(undefined8 *)(lVar3 + uVar13);
      uVar20 = NEON_cmeq(uVar12,uVar18,1);
      uVar20 = uVar20 & 0x8080808080808080;
joined_r0x0071c9e0:
      for (; uVar20 != 0; uVar20 = uVar20 - 1 & uVar20) {
        uVar7 = (uVar20 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar20 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        lVar2 = lVar3 + (uVar13 + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3) & uVar4) *
                        -0x98;
        if (local_244 == *(int *)(lVar2 + -0x98)) {
          uVar20 = *(ulong *)(lVar2 + -0x90);
          lVar14 = uVar20 - 3;
          if (uVar20 < 3) {
            lVar14 = 1;
          }
          if (lVar14 == 0) {
            local_100 = *(int **)(lVar2 + -0x80);
            piStack_108 = *(int **)(lVar2 + -0x88);
            local_110 = (int *)0x3;
          }
          else if (lVar14 == 1) {
                    /* try { // try from 0071cad0 to 0071cadb has its CatchHandler @ 0071cf54 */
            <alloc::string::String_as_core::clone::Clone>::clone(&local_1c0,lVar2 + -0x30);
            puVar17 = *(undefined **)(lVar2 + -0x40);
            __n = (long)puVar17 * 4;
            if ((ulong)puVar17 >> 0x3e != 0 || 0x7ffffffffffffffe < __n) {
              uVar12 = 0;
LAB_0071cafc:
                    /* try { // try from 0071cafc to 0071cb07 has its CatchHandler @ 0071cf5c */
                    /* WARNING: Subroutine does not return */
              alloc::raw_vec::handle_error(uVar12,__n);
            }
            uVar5 = *(undefined2 *)(lVar2 + -0x18);
            uVar6 = *(undefined2 *)(lVar2 + -0x38);
            if (__n == 0) {
              local_250 = (int *)0x2;
            }
            else {
              __src = *(void **)(lVar2 + -0x48);
              __rustc::__rust_no_alloc_shim_is_unstable_v2();
              uVar12 = 2;
              local_250 = (int *)FUN_004b25a4(__n,2);
              if (local_250 == (int *)0x0) goto LAB_0071cafc;
              if (puVar17 != (undefined *)0x0) {
                memcpy(local_250,__src,__n);
              }
            }
                    /* try { // try from 0071cd34 to 0071cd3f has its CatchHandler @ 0071cf1c */
            FUN_00765eac(&local_240,lVar2 + -0x78);
                    /* try { // try from 0071cd44 to 0071cd4b has its CatchHandler @ 0071cf08 */
            FUN_00765d80(&local_110,lVar2 + -0x60);
            local_178 = local_230;
            piStack_180 = piStack_238;
            local_188 = local_240;
            piStack_168 = piStack_108;
            local_170 = local_110;
            local_160 = local_100;
            lStack_a8 = CONCAT71(uStack_1b7,uStack_1b8);
            puStack_b0 = local_1c0;
            local_a0 = local_1b0;
            piStack_198 = *(int **)(lVar2 + -0x88);
            local_1a0 = *(int **)(lVar2 + -0x90);
            local_190 = *(int **)(lVar2 + -0x80);
            piStack_e8 = local_230;
            local_f0 = piStack_238;
            local_d8 = piStack_108;
            piStack_e0 = local_110;
            piStack_d0 = local_100;
            piStack_c8 = local_250;
            piStack_f8 = local_240;
            local_b8 = (int **)CONCAT62(local_b8._2_6_,uVar6);
            local_110 = local_1a0;
            piStack_108 = piStack_198;
            local_100 = local_190;
            puStack_c0 = puVar17;
            local_98 = uVar5;
          }
          else {
                    /* try { // try from 0071cb24 to 0071cb2b has its CatchHandler @ 0071cf54 */
            <alloc::string::String_as_core::clone::Clone>::clone(&piStack_108,lVar2 + -0x88);
            local_110 = (int *)&DAT_00000005;
          }
          piVar10 = local_110;
          piStack_1f8 = piStack_c8;
          local_200 = piStack_d0;
          ppiStack_1e8 = local_b8;
          puStack_1f0 = puStack_c0;
          uStack_1c8 = CONCAT62(uStack_96,local_98);
          lStack_1d8 = lStack_a8;
          local_1e0 = puStack_b0;
          pvStack_1d0 = local_a0;
          piStack_238 = piStack_108;
          local_240 = local_110;
          piStack_228 = piStack_f8;
          local_230 = local_100;
          piStack_218 = piStack_e8;
          local_220 = local_f0;
          piStack_208 = local_d8;
          piStack_210 = piStack_e0;
          do {
            uVar11 = *puVar1;
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar9) {
              *puVar1 = uVar11 - 1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if ((uVar11 - 1 & 0xbfffffff) == 0x80000000) {
            <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::
            wake_writer_or_readers(lVar16 + 0x10);
          }
          if ((piVar10 != (int *)0xffffffffffffffff) && (piVar10 != (int *)0x3)) {
            local_1a4 = local_244;
            if (*puVar1 == 0) {
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar9) {
                *puVar1 = 0x3fffffff;
                cVar8 = ExclusiveMonitorsStatus();
              }
              if (cVar8 != '\0') goto LAB_0071ceb4;
            }
            else {
              ClearExclusiveLocal();
LAB_0071ceb4:
              <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::
              write_contended(lVar16 + 0x10);
            }
            puVar17 = PTR_GLOBAL_PANIC_COUNT_00b00bf0;
            if ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0 & 0x7fffffffffffffff) == 0) {
              if (*(char *)(lVar16 + 0x18) == '\0') {
                uVar11 = 0;
LAB_0071cc74:
                uStack_1b8 = (undefined1)uVar11;
                local_1c0 = puVar1;
                uVar12 = FUN_0076b3f4(lVar16 + 0x40,&local_1a4);
                    /* try { // try from 0071cc8c to 0071cc9f has its CatchHandler @ 0071cef4 */
                FUN_006ffbc4(&local_110,lVar16 + 0x20,uVar12,&local_1a4);
                if (piStack_108 == (int *)0xffffffffffffffff) {
                  local_1a0 = piStack_108;
                }
                else {
                  uStack_130 = CONCAT62(uStack_96,local_98);
                  pvStack_138 = local_a0;
                  local_140 = lStack_a8;
                  uStack_128 = uStack_90;
                  uStack_118 = uStack_80;
                  local_120 = local_88;
                  piStack_198 = local_100;
                  local_1a0 = piStack_108;
                  local_188 = local_f0;
                  local_190 = piStack_f8;
                  local_178 = piStack_e0;
                  piStack_180 = piStack_e8;
                  piStack_168 = piStack_d0;
                  local_170 = local_d8;
                  puStack_158 = puStack_c0;
                  local_160 = piStack_c8;
                  puStack_148 = puStack_b0;
                  ppiStack_150 = local_b8;
                  if (piStack_108 != (int *)0xffffffffffffffff) {
                    pcVar15 = (char *)((long)piStack_108 + -3);
                    if (piStack_108 < (int *)0x3) {
                      pcVar15 = &DAT_00000001;
                    }
                    if (pcVar15 != (char *)0x0) {
                      if (pcVar15 == &DAT_00000001) {
                        if (lStack_a8 != 0) {
                          free(local_a0);
                        }
                    /* try { // try from 0071cd1c to 0071cd27 has its CatchHandler @ 0071cec0 */
                        FUN_00719f78(&local_1a0);
                      }
                      else if (local_100 != (int *)0x0) {
                        free(piStack_f8);
                      }
                    }
                    if (local_120 != (long *)0x0) {
                      do {
                        lVar14 = *local_120;
                        cVar8 = '\x01';
                        bVar9 = (bool)ExclusiveMonitorPass(local_120,0x10);
                        if (bVar9) {
                          *local_120 = lVar14 + -1;
                          cVar8 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar8 != '\0');
                      if (lVar14 + -1 == 0) {
                        DataMemoryBarrier(2,1);
                    /* try { // try from 0071cdf8 to 0071cdff has its CatchHandler @ 0071cef4 */
                        <alloc::sync::[n]::alloc::sync::Arc<futures_util::abortable::AbortInner>>::
                        drop_slow(&local_120);
                      }
                    }
                  }
                }
                if ((((uVar11 & 1) == 0) && ((*(ulong *)puVar17 & 0x7fffffffffffffff) != 0)) &&
                   (uVar20 = std::panicking::panic_count::is_zero_slow_path(), (uVar20 & 1) == 0)) {
                  *(undefined1 *)(lVar16 + 0x18) = 1;
                }
                do {
                  uVar11 = *puVar1;
                  cVar8 = '\x01';
                  bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar9) {
                    *puVar1 = uVar11 + 0xc0000001;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
                if (uVar11 + 0xc0000001 >> 0x1e != 0) {
                    /* try { // try from 0071ce34 to 0071ce3b has its CatchHandler @ 0071cf38 */
                  <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::
                  wake_writer_or_readers(puVar1);
                }
                goto LAB_0071ca70;
              }
LAB_0071cbc0:
              if (((*(ulong *)puVar17 & 0x7fffffffffffffff) != 0) &&
                 (uVar20 = std::panicking::panic_count::is_zero_slow_path(), (uVar20 & 1) == 0)) {
                *(undefined1 *)(lVar16 + 0x18) = 1;
              }
            }
            else {
              uVar11 = std::panicking::panic_count::is_zero_slow_path();
              if (*(char *)(lVar16 + 0x18) == '\0') {
                uVar11 = uVar11 ^ 1;
                goto LAB_0071cc74;
              }
              if (uVar11 != 0) goto LAB_0071cbc0;
            }
            do {
              uVar11 = *puVar1;
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar9) {
                *puVar1 = uVar11 + 0xc0000001;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (uVar11 + 0xc0000001 >> 0x1e != 0) {
                    /* try { // try from 0071ce60 to 0071cebb has its CatchHandler @ 0071cf38 */
              <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::
              wake_writer_or_readers(puVar1);
            }
                    /* try { // try from 0071cbf0 to 0071cc13 has its CatchHandler @ 0071cf38 */
            piStack_108 = (int *)<alloc::io::error::core::io::error::Error>::new<&str>
                                           (0x2a,"Failed to acquire request tracking lock",0x27);
            local_110 = (int *)0x8000000000000003;
            FUN_00719750(&local_110);
          }
          goto LAB_0071ca70;
        }
      }
      uVar12 = NEON_cmeq(uVar12,0xffffffffffffffff,1);
      bVar19 = NEON_umaxv(uVar12,1);
      if ((bVar19 & 1) == 0) goto code_r0x0071ca24;
    }
    local_240 = (int *)0xffffffffffffffff;
    do {
      uVar11 = *puVar1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar9) {
        *puVar1 = uVar11 - 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if ((uVar11 - 1 & 0xbfffffff) == 0x80000000) {
      <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::wake_writer_or_readers
                (puVar1);
    }
LAB_0071ca70:
    param_1[9] = piStack_1f8;
    param_1[8] = local_200;
    param_1[0xb] = ppiStack_1e8;
    param_1[10] = puStack_1f0;
    param_1[0xd] = lStack_1d8;
    param_1[0xc] = local_1e0;
    param_1[0xf] = uStack_1c8;
    param_1[0xe] = pvStack_1d0;
    param_1[1] = piStack_238;
    *param_1 = local_240;
    param_1[3] = piStack_228;
    param_1[2] = local_230;
    param_1[5] = piStack_218;
    param_1[4] = local_220;
    param_1[7] = piStack_208;
    param_1[6] = piStack_210;
  }
  else {
    do {
      uVar11 = *puVar1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar9) {
        *puVar1 = uVar11 - 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if ((uVar11 - 1 & 0xbfffffff) == 0x80000000) {
      <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::wake_writer_or_readers
                (puVar1);
      lVar16 = *(long *)PTR_MAX_LOG_LEVEL_FILTER_00b00c78;
    }
    else {
      lVar16 = *(long *)PTR_MAX_LOG_LEVEL_FILTER_00b00c78;
    }
    if (lVar16 != 0) {
      local_1a0 = &local_244;
      local_d8 = (int *)0x2d0123;
      piStack_d0 = (int *)&DAT_00000007;
      local_b8 = &local_1a0;
      puStack_c0 = &DAT_002b0b9e;
      local_110 = (int *)0x0;
      piStack_108 = (int *)0x2d012a;
      local_f0 = (int *)0x2a66d5;
      piStack_198 = (int *)PTR_fmt_00b00c40;
      local_100 = _DAT_002a03a0;
      piStack_f8 = _UNK_002a03a8;
      piStack_e8 = _DAT_0029f4d0;
      piStack_e0 = _UNK_0029f4d8;
      piStack_c8 = DAT_002a11e8;
      <log::__private_api::GlobalLogger_as_log::Log>::log(auStack_71,&local_110);
    }
    uVar12 = <alloc::io::error::core::io::error::Error>::new<&str>
                       (0x2a,"Error acquiring request tracking lock",0x25);
    param_1[2] = uVar12;
    uVar12 = _DAT_0029fdd0;
    param_1[1] = _UNK_0029fdd8;
    *param_1 = uVar12;
  }
  return;
code_r0x0071ca24:
  lVar14 = lVar14 + 8;
  uVar13 = uVar13 + lVar14 & uVar4;
  uVar12 = *(undefined8 *)(lVar3 + uVar13);
  uVar20 = NEON_cmeq(uVar12,uVar18,1);
  uVar20 = uVar20 & 0x8080808080808080;
  goto joined_r0x0071c9e0;
}


// ===== 0071cfac  <libdiscore_common::core::http::[5]::libdiscore_common::core::http::PollingHttpClient>::tracked_request_count =====

/* WARNING: Unknown calling convention: __rustcall */
/* <libdiscore_common::core::http::[5]::libdiscore_common::core::http::PollingHttpClient>::tracked_request_count
    */

void __rustcall
<libdiscore_common::core::http::[5]::libdiscore_common::core::http::PollingHttpClient>::
tracked_request_count(undefined8 *param_1,long param_2)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_2 + 8);
  uVar2 = *(uint *)(lVar6 + 0x10);
  puVar1 = (uint *)(lVar6 + 0x10);
  if (uVar2 < 0x3ffffffe) {
    if (*puVar1 == uVar2) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        cVar3 = *(char *)(lVar6 + 0x18);
        goto joined_r0x0071d060;
      }
    }
    else {
      ClearExclusiveLocal();
    }
  }
  <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::read_contended(puVar1);
  cVar3 = *(char *)(lVar6 + 0x18);
joined_r0x0071d060:
  if (cVar3 != '\0') {
    do {
      uVar2 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar2 - 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar2 - 1 & 0xbfffffff) == 0x80000000) {
      <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::wake_writer_or_readers
                (puVar1);
    }
    uVar5 = <alloc::io::error::core::io::error::Error>::new<&str>
                      (0x2a,"Error acquiring request tracking lock",0x25);
    *param_1 = 0x8000000000000003;
    param_1[1] = uVar5;
    return;
  }
  uVar5 = *(undefined8 *)(lVar6 + 0x38);
  do {
    uVar2 = *puVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *puVar1 = uVar2 - 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((uVar2 - 1 & 0xbfffffff) == 0x80000000) {
    <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::wake_writer_or_readers
              (puVar1);
    *param_1 = 0xffffffffffffffff;
    param_1[1] = uVar5;
    return;
  }
  *param_1 = 0xffffffffffffffff;
  param_1[1] = uVar5;
  return;
}


// ===== 0071d0c4  <libdiscore_common::core::http::[5]::libdiscore_common::core::http::PollingHttpClient>::new =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* <libdiscore_common::core::http::[5]::libdiscore_common::core::http::PollingHttpClient>::new */

void __rustcall
<libdiscore_common::core::http::[5]::libdiscore_common::core::http::PollingHttpClient>::new
          (undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  uint7 uStack_98;
  
  uVar5 = <libdiscore_common::core::http::[2]::libdiscore_common::core::http::HttpClient>::new();
  uVar9 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00bf8;
  if (uVar9 == 0) {
                    /* try { // try from 0071d1d0 to 0071d1ff has its CatchHandler @ 0071d234 */
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
  uVar4 = _UNK_00ad6760;
  uVar3 = _DAT_00ad6758;
  uVar2 = _UNK_00ad6750;
  puVar1 = PTR_DAT_00ad6748;
  if (plVar6 == (long *)0x0) {
                    /* try { // try from 0071d224 to 0071d22f has its CatchHandler @ 0071d234 */
                    /* WARNING: Subroutine does not return */
    std::thread::local::panic_access_error(&PTR_s__nix_store_8006w282fgsx3273c878b_00ad6130);
  }
  lVar11 = plVar6[1];
  lVar10 = *plVar6;
  *plVar6 = *plVar6 + 1;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar7 = (undefined8 *)FUN_004b25a4(0x50,8);
  if (puVar7 == (undefined8 *)0x0) {
                    /* try { // try from 0071d204 to 0071d20f has its CatchHandler @ 0071d264 */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x50);
  }
  puVar7[5] = uVar2;
  puVar7[4] = puVar1;
  puVar7[7] = uVar4;
  puVar7[6] = uVar3;
  puVar7[9] = lVar11;
  puVar7[8] = lVar10;
  puVar7[1] = 1;
  *puVar7 = 1;
  puVar7[3] = (ulong)uStack_98 << 8;
  puVar7[2] = 0;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar8 = (undefined8 *)FUN_004b25a4(0x18,8);
  if (puVar8 == (undefined8 *)0x0) {
                    /* try { // try from 0071d214 to 0071d21f has its CatchHandler @ 0071d23c */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x18);
  }
  *(undefined4 *)(puVar8 + 2) = 0;
  *param_1 = uVar5;
  param_1[1] = puVar7;
  puVar8[1] = 1;
  *puVar8 = 1;
  param_1[2] = puVar8;
  return;
}


// ===== 0071d28c  FUN_0071d28c =====

undefined1  [16] FUN_0071d28c(undefined8 param_1)

{
  undefined1 auVar1 [16];
  undefined1 auStack_6b0 [840];
  undefined8 local_368 [105];
  
                    /* try { // try from 0071d2a8 to 0071d2cf has its CatchHandler @ 0071d31c */
  <reqwest::async_impl::client::reqwest::async_impl::client::ClientBuilder>::new(local_368);
  FUN_00760130(auStack_6b0,local_368,"libdiscore",10);
  auVar1 = <reqwest::async_impl::client::[0]::reqwest::async_impl::client::ClientBuilder>::build
                     (auStack_6b0);
  local_368[0] = auVar1._8_8_;
  if (auVar1._0_8_ != 1) {
    auVar1._8_8_ = param_1;
    auVar1._0_8_ = local_368[0];
    return auVar1;
  }
                    /* try { // try from 0071d2f4 to 0071d317 has its CatchHandler @ 0071d324 */
                    /* WARNING: Subroutine does not return */
  core::result::unwrap_failed
            ("Failed to build client",0x16,local_368,&PTR_FUN_00ad6728,
             &PTR_s_common_rust_src_core_http_rs_00ad6768);
}


// ===== 0071d348  libdiscore_common::core::async_runtime::runtime_handle =====

/* WARNING: Unknown calling convention: __rustcall */
/* libdiscore_common::core::async_runtime::runtime_handle */

undefined8 __rustcall libdiscore_common::core::async_runtime::runtime_handle(void)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  undefined *local_28;
  undefined **local_8;
  
  puVar4 = PTR_TOKIO_RUNTIME_HANDLE_00b00d38;
  if ((int)*(undefined8 *)(PTR_TOKIO_RUNTIME_HANDLE_00b00d38 + 0x10) != 0) {
    local_8 = &local_28;
    local_28 = PTR_TOKIO_RUNTIME_HANDLE_00b00d38;
    <std::sys::sync::once::futex::[0]::std::sys::sync::once::futex::Once>::call
              (PTR_TOKIO_RUNTIME_HANDLE_00b00d38 + 0x10,1,&local_8,&DAT_00ad6108,
               &PTR_s__nix_store_8006w282fgsx3273c878b_00ad60f0);
  }
  iVar1 = *(int *)puVar4;
  plVar6 = *(long **)(puVar4 + 8);
  do {
    lVar7 = *plVar6;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = lVar7 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 == 0) {
    if (-1 < lVar7) {
      return 0;
    }
  }
  else if (-1 < lVar7) {
    return 1;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x71d3ec);
  (*pcVar5)();
}


// ===== 0071d3ec  FUN_0071d3ec =====

void FUN_0071d3ec(undefined8 param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt("could not convert slice to array",0x20,param_2);
  return;
}


// ===== 0071d400  FUN_0071d400 =====

void FUN_0071d400(long *param_1,undefined8 param_2)

{
  long *local_18;
  
  if (*param_1 != -1) {
    local_18 = param_1;
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,"JSError",7,&local_18,&DAT_00ad67a0);
    return;
  }
  local_18 = param_1 + 1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,"Io",2,&local_18,&DAT_00ad6780);
  return;
}


// ===== 0071d47c  FUN_0071d47c =====

void FUN_0071d47c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_30 [16];
  long local_8;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,"Error",5);
  local_8 = param_1;
  uVar1 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (auStack_30,"context",7,&local_8,&DAT_00ad67c0);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (uVar1,"source",6,param_1 + 0x10,&DAT_00ad67e0);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 0071d500  FUN_0071d500 =====

void FUN_0071d500(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_30 [16];
  long local_8;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,"Error",5);
  local_8 = param_1;
  uVar1 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (auStack_30,"context",7,&local_8,&DAT_00ad67c0);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (uVar1,"source",6,param_1 + 0x10,&DAT_00ad6800);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 0071d584  FUN_0071d584 =====

void FUN_0071d584(int *param_1,undefined8 param_2)

{
  int *local_18;
  
  if (*param_1 == 0) {
    local_18 = param_1 + 2;
    <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field2_finish
              (param_2,"InvalidHexCharacter",0x13,"c",1,param_1 + 1,&DAT_00ad6820,"index",5,
               &local_18,&DAT_00ad6840);
    return;
  }
  if (*param_1 == 1) {
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"OddLength",9);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"InvalidStringLength",0x13);
  return;
}


// ===== 0071d624  FUN_0071d624 =====

void FUN_0071d624(long *param_1)

{
  int iVar1;
  void *pvVar2;
  void *__ptr;
  long lVar3;
  
  iVar1 = (int)param_1[4];
  if (iVar1 == 0) {
    __ptr = (void *)param_1[1];
    lVar3 = param_1[2] + 1;
    pvVar2 = __ptr;
    while (lVar3 = lVar3 + -1, lVar3 != 0) {
                    /* try { // try from 0071d690 to 0071d693 has its CatchHandler @ 0071d6f4 */
      FUN_00761fd4(pvVar2);
      pvVar2 = (void *)((long)pvVar2 + 0x38);
    }
  }
  else {
    if (iVar1 == 2) {
      return;
    }
    if (iVar1 != 3) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                ("internal error: entered unreachable code: invalid Once state",0x79,
                 &PTR_s__nix_store_8006w282fgsx3273c878b_00ad6860);
    }
    __ptr = (void *)param_1[1];
    lVar3 = param_1[2] + 1;
    pvVar2 = __ptr;
    while (lVar3 = lVar3 + -1, lVar3 != 0) {
                    /* try { // try from 0071d66c to 0071d66f has its CatchHandler @ 0071d718 */
      FUN_00761fd4(pvVar2);
      pvVar2 = (void *)((long)pvVar2 + 0x38);
    }
  }
  if (*param_1 == 0) {
    return;
  }
  free(__ptr);
  return;
}


// ===== 0071d760  FUN_0071d760 =====

void FUN_0071d760(undefined8 *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt(*param_1,param_1[1],param_2);
  return;
}


// ===== 0071d774  FUN_0071d774 =====

void FUN_0071d774(undefined8 *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt(*param_1,param_1[1],param_2);
  return;
}


// ===== 0071d788  FUN_0071d788 =====

void FUN_0071d788(long *param_1)

{
  if (*(long *)(*param_1 + 0x58) != 0) {
    return;
  }
  return;
}


// ===== 0071d7a0  <libdiscore_common::core::http::HttpClient_as_core::default::Default>::default =====

/* WARNING: Unknown calling convention: __rustcall */
/* <libdiscore_common::core::http::HttpClient as core::default::Default>::default */

void __rustcall <libdiscore_common::core::http::HttpClient_as_core::default::Default>::default(void)

{
  (*(code *)PTR_new_00b01db8)();
  return;
}


// ===== 0071d7a4  FUN_0071d7a4 =====

void FUN_0071d7a4(undefined8 *param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,&DAT_002d0348 + *(int *)(&DAT_002d0348 + (ulong)*(byte *)*param_1 * 4),
             *(undefined8 *)(&DAT_002d0318 + (ulong)*(byte *)*param_1 * 8));
  return;
}


// ===== 0071d7d0  FUN_0071d7d0 =====

void FUN_0071d7d0(undefined8 *param_1)

{
  <libdiscore_common::core::http::HttpError_as_core::fmt::Display>::fmt(*param_1);
  return;
}


// ===== 0071d7d8  FUN_0071d7d8 =====

void FUN_0071d7d8(long param_1,undefined8 param_2)

{
  long local_18;
  
  local_18 = param_1 + 0x18;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field2_finish
            (param_2,"FromUtf8Error",0xd,"bytes",5,param_1,&PTR_FUN_00ad6878,"error",5,&local_18,
             &DAT_00ad6898);
  return;
}


// ===== 0071d848  FUN_0071d848 =====

void FUN_0071d848(void)

{
  return;
}


// ===== 0071d84c  FUN_0071d84c =====

void FUN_0071d84c(ulong *param_1,uint *param_2)

{
  ushort *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  uVar3 = param_1[8];
  param_1[6] = param_1[6] + 8;
  if (uVar3 == 0) {
    uVar2 = 0;
    uVar3 = 0;
LAB_0071d8ac:
    uVar5 = param_1[2];
    uVar8 = *(ulong *)((long)param_2 + uVar2);
    uVar2 = uVar2 + 8;
    uVar4 = uVar8 ^ param_1[3];
    uVar6 = *param_1 + uVar5;
    uVar7 = uVar4 + param_1[1] ^ (uVar4 >> 0x30 | uVar4 << 0x10);
    uVar9 = uVar6 ^ (uVar5 >> 0x33 | uVar5 << 0xd);
    uVar6 = (uVar6 >> 0x20 | uVar6 << 0x20) + uVar7;
    uVar5 = uVar9 + uVar4 + param_1[1];
    param_1[2] = uVar5 ^ (uVar9 >> 0x2f | uVar9 << 0x11);
    param_1[3] = uVar6 ^ (uVar7 >> 0x2b | uVar7 << 0x15);
    *param_1 = uVar6 ^ uVar8;
    param_1[1] = uVar5 >> 0x20 | uVar5 << 0x20;
  }
  else {
    uVar2 = 8 - uVar3;
    uVar6 = uVar2;
    if (7 < uVar2) {
      uVar6 = 8;
    }
    if (uVar2 < 4) {
      uVar8 = 0;
      uVar5 = 0;
      if (1 < uVar6) goto LAB_0071d980;
    }
    else {
      uVar5 = (ulong)*param_2;
      uVar8 = 4;
      if (5 < uVar6) {
LAB_0071d980:
        puVar1 = (ushort *)((long)param_2 + uVar8);
        lVar11 = uVar8 << 3;
        uVar8 = uVar8 | 2;
        uVar5 = (ulong)*puVar1 << lVar11 | uVar5;
      }
    }
    if (uVar8 < uVar6) {
      uVar5 = (ulong)*(byte *)((long)param_2 + uVar8) << (uVar8 << 3) | uVar5;
    }
    uVar6 = param_1[7] | uVar5 << ((uVar3 & 7) << 3);
    param_1[7] = uVar6;
    if (8 < uVar3) {
      param_1[8] = uVar3 + 8;
      return;
    }
    uVar5 = param_1[2];
    uVar8 = param_1[3] ^ uVar6;
    uVar3 = uVar5 + *param_1;
    uVar7 = uVar3 ^ (uVar5 >> 0x33 | uVar5 << 0xd);
    uVar4 = param_1[1] + uVar8 ^ (uVar8 >> 0x30 | uVar8 << 0x10);
    uVar5 = param_1[1] + uVar8 + uVar7;
    uVar3 = uVar4 + (uVar3 >> 0x20 | uVar3 << 0x20);
    param_1[2] = uVar5 ^ (uVar7 >> 0x2f | uVar7 << 0x11);
    param_1[3] = uVar3 ^ (uVar4 >> 0x2b | uVar4 << 0x15);
    *param_1 = uVar3 ^ uVar6;
    param_1[1] = uVar5 >> 0x20 | uVar5 << 0x20;
    uVar3 = 8 - uVar2 & 7;
    if (uVar2 < (8 - uVar2 & 8)) goto LAB_0071d8ac;
  }
  if (uVar3 < 4) {
    uVar5 = 0;
    uVar6 = 0;
    if (uVar3 < 2) goto LAB_0071d940;
  }
  else {
    uVar6 = (ulong)*(uint *)((long)param_2 + uVar2);
    uVar5 = 4;
    if (uVar3 < 6) goto LAB_0071d940;
  }
  lVar10 = uVar5 << 3;
  lVar11 = uVar5 + uVar2;
  uVar5 = uVar5 | 2;
  uVar6 = (ulong)*(ushort *)((long)param_2 + lVar11) << lVar10 | uVar6;
LAB_0071d940:
  if (uVar3 <= uVar5) {
    param_1[7] = uVar6;
    param_1[8] = uVar3;
    return;
  }
  param_1[7] = (ulong)*(byte *)((long)param_2 + uVar5 + uVar2) << (uVar5 << 3) | uVar6;
  param_1[8] = uVar3;
  return;
}


// ===== 0071da30  <libdiscore_common::core::http::PollingHttpClient_as_core::default::Default>::default =====

/* WARNING: Unknown calling convention: __rustcall */
/* <libdiscore_common::core::http::PollingHttpClient as core::default::Default>::default */

void __rustcall
<libdiscore_common::core::http::PollingHttpClient_as_core::default::Default>::default(void)

{
  (*(code *)PTR_new_00b01b10)();
  return;
}


// ===== 0071da34  FUN_0071da34 =====

void FUN_0071da34(void)

{
  long extraout_x1;
  
  <anyhow::error::[6]::anyhow::error::ErrorImpl>::error();
                    /* WARNING: Could not recover jumptable at 0x0071da48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(extraout_x1 + 0x30))();
  return;
}


// ===== 0071da4c  <anyhow::error::[6]::anyhow::error::ErrorImpl>::provide =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <anyhow::error::[6]::anyhow::error::ErrorImpl>::provide(void)

{
  (*(code *)PTR_provide_00b018f8)();
  return;
}


// ===== 0071da50  <anyhow::fmt::anyhow::error::ErrorImpl>::debug =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <anyhow::fmt::anyhow::error::ErrorImpl>::debug(void)

{
  (*(code *)PTR_debug_00b01908)();
  return;
}


// ===== 0071da54  FUN_0071da54 =====

void FUN_0071da54(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = <anyhow::error::[6]::anyhow::error::ErrorImpl>::error();
                    /* WARNING: Could not recover jumptable at 0x0071da78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(auVar1._8_8_ + 0x20))(auVar1._0_8_,param_2);
  return;
}


// ===== 0071da7c  FUN_0071da7c =====

void FUN_0071da7c(undefined8 param_1,long param_2)

{
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    <usize_as_core::fmt::LowerHex>::fmt();
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
    <usize_as_core::fmt::Display>::fmt();
    return;
  }
  <usize_as_core::fmt::UpperHex>::fmt();
  return;
}


// ===== 0071da94  FUN_0071da94 =====

undefined1  [16] FUN_0071da94(long *param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  
  plVar1 = param_1 + 1;
  if (*param_1 != -1) {
    plVar1 = (long *)0x0;
  }
  auVar2._8_8_ = &PTR_FUN_00ad68d8;
  auVar2._0_8_ = plVar1;
  return auVar2;
}


// ===== 0071daac  FUN_0071daac =====

undefined1  [16] FUN_0071daac(ulong *param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  uVar2 = *param_1 ^ 0x8000000000000000;
  if (-1 < (long)*param_1) {
    uVar2 = 2;
  }
  if ((long)uVar2 < 2) {
    if (uVar2 == 0) {
      auVar4._8_8_ = &PTR_FUN_00ad6950;
      auVar4._0_8_ = param_1 + 1;
      return auVar4;
    }
    auVar6._8_8_ = &PTR_FUN_00ad69c8;
    auVar6._0_8_ = param_1 + 1;
    return auVar6;
  }
  if (uVar2 == 2) {
    auVar5._8_8_ = &PTR_FUN_00ad6a40;
    auVar5._0_8_ = param_1;
    return auVar5;
  }
  if (uVar2 == 3) {
    auVar3._8_8_ = &PTR_FUN_00ad68d8;
    auVar3._0_8_ = param_1 + 1;
    return auVar3;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2;
  return auVar1 << 0x40;
}


// ===== 0071db1c  <libdiscore_common::core::http::HttpError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <libdiscore_common::core::http::HttpError as core::fmt::Display>::fmt */

void __rustcall
<libdiscore_common::core::http::HttpError_as_core::fmt::Display>::fmt
          (ulong *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong *local_58;
  ulong *puStack_50;
  ulong *local_48;
  ulong **local_40;
  code *local_38;
  ulong **ppuStack_30;
  code *local_28;
  ulong **ppuStack_20;
  code *local_18;
  
  uVar1 = *param_1 ^ 0x8000000000000000;
  if (-1 < (long)*param_1) {
    uVar1 = 2;
  }
  if ((long)uVar1 < 2) {
    if (uVar1 == 0) {
      local_48 = param_1 + 1;
      local_40 = &local_48;
      local_38 = FUN_0070a2cc;
      core::fmt::write(*param_2,param_2[1],&DAT_002afe65,&local_40);
      return;
    }
    local_48 = param_1 + 1;
    local_40 = &local_48;
    local_38 = FUN_0073b320;
    core::fmt::write(*param_2,param_2[1],&DAT_002b2e09,&local_40);
    return;
  }
  if (uVar1 == 2) {
    local_40 = &local_48;
    local_38 = FUN_00753254;
    local_48 = param_1;
    core::fmt::write(*param_2,param_2[1],&DAT_002a77cd,&local_40);
    return;
  }
  if (uVar1 == 3) {
    local_48 = param_1 + 1;
    local_40 = &local_48;
    local_38 = FUN_0074fb7c;
    core::fmt::write(*param_2,param_2[1],&DAT_002a4a95,&local_40);
    return;
  }
  local_58 = param_1 + 1;
  puStack_50 = param_1 + 2;
  local_48 = param_1 + 3;
  local_40 = &local_58;
  ppuStack_30 = &puStack_50;
  local_38 = FUN_007532a8;
  ppuStack_20 = &local_48;
  local_28 = FUN_007532a8;
  local_18 = FUN_007532a8;
  core::fmt::write(*param_2,param_2[1],&DAT_002b6d73,&local_40);
  return;
}


// ===== 0071dc88  FUN_0071dc88 =====

void FUN_0071dc88(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = *param_1;
  iVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec(uVar2);
  if (iVar1 != 0) {
    <tokio::runtime::task::raw::tokio::runtime::task::raw::RawTask>::dealloc(uVar2);
    return;
  }
  return;
}


// ===== 0071dcc0  FUN_0071dcc0 =====

void FUN_0071dcc0(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field1_finish
            (param_2,"ParseIntError",0xd,"kind",4,&local_18,&DAT_00ad6a98);
  return;
}


// ===== 0071dd0c  FUN_0071dd0c =====

void FUN_0071dd0c(ulong *param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong *local_18;
  
  uVar1 = *param_1 ^ 0x8000000000000000;
  if (-1 < (long)*param_1) {
    uVar1 = 2;
  }
  if ((long)uVar1 < 2) {
    local_18 = param_1 + 1;
    if (uVar1 == 0) {
      <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
                (param_2,"Request",7,&local_18,&DAT_00ad6ab8);
      return;
    }
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,"JsonParseError",0xe,&local_18,&DAT_00ad6ad8);
    return;
  }
  if (uVar1 == 2) {
    local_18 = param_1;
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,"TextParseError",0xe,&local_18,&DAT_00ad6af8);
    return;
  }
  if (uVar1 == 3) {
    local_18 = param_1 + 1;
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,"FileError",9,&local_18,&DAT_00ad6780);
    return;
  }
  local_18 = param_1 + 3;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field3_finish
            (param_2,&DAT_002a0d40,0x10,"start",5,param_1 + 1,&DAT_00ad6b18,"end",3,param_1 + 2,
             &DAT_00ad6b18,"file_sizeEmptyInvalidDigitPosOverflowNegOverflowZeroNotAPowerOfTwo",9,
             &local_18,&DAT_00ad6b38);
  return;
}


// ===== 0071de7c  FUN_0071de7c =====

void FUN_0071de7c(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,"TryFromSliceError",0x11,&local_18,&DAT_00ad6b58);
  return;
}


// ===== 0071debc  FUN_0071debc =====

undefined1  [16] FUN_0071debc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x28;
  auVar1._0_8_ = "description() is deprecated; use Display";
  return auVar1;
}


// ===== 0071decc  FUN_0071decc =====

undefined1  [16] FUN_0071decc(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &DAT_00ad6528;
  auVar1._0_8_ = param_1 + 0x10;
  return auVar1;
}


// ===== 0071dedc  FUN_0071dedc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0071dedc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_002a05f0;
  param_1[1] = _UNK_002a05f8;
  *param_1 = uVar1;
  return;
}


// ===== 0071def0  FUN_0071def0 =====

undefined1  [16] FUN_0071def0(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &DAT_00ad65a0;
  auVar1._0_8_ = param_1 + 0x10;
  return auVar1;
}


// ===== 0071df00  FUN_0071df00 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0071df00(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_002a0990;
  param_1[1] = _UNK_002a0998;
  *param_1 = uVar1;
  return;
}


// ===== 0071df14  FUN_0071df14 =====

void FUN_0071df14(void)

{
  long extraout_x1;
  
  <anyhow::error::[6]::anyhow::error::ErrorImpl>::error();
                    /* WARNING: Could not recover jumptable at 0x0071df28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(extraout_x1 + 0x30))();
  return;
}


// ===== 0071df2c  FUN_0071df2c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0071df2c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_0029f1b0;
  param_1[1] = _UNK_0029f1b8;
  *param_1 = uVar1;
  return;
}


// ===== 0071df40  FUN_0071df40 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0071df40(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_0029f2e0;
  param_1[1] = _UNK_0029f2e8;
  *param_1 = uVar1;
  return;
}


// ===== 0071df54  FUN_0071df54 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0071df54(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_0029fe90;
  param_1[1] = _UNK_0029fe98;
  *param_1 = uVar1;
  return;
}


// ===== 0071df68  FUN_0071df68 =====

undefined1  [16] FUN_0071df68(void)

{
  char cVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  char acVar5 [8];
  code *pcVar6;
  long lVar7;
  long *local_1f0;
  long *plStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  ulong local_1c0;
  long *local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  long *local_1a0;
  long *plStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined1 uStack_178;
  undefined7 uStack_177;
  ulong uStack_170;
  long *plStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  long *local_150;
  long *plStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  ulong uStack_128;
  ulong uStack_120;
  long *plStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined2 local_7b;
  undefined8 local_70;
  long *plStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long *local_48;
  long *plStack_40;
  undefined8 local_38;
  
  <tokio::runtime::builder::tokio::runtime::builder::Builder>::new_current_thread(&local_150);
  local_7b = 0x101;
                    /* try { // try from 0071df90 to 0071dfab has its CatchHandler @ 0071e240 */
  <tokio::runtime::builder::tokio::runtime::builder::Builder>::max_blocking_threads
            (&local_150,4,&PTR_s_common_rust_src_core_async_runti_00ad6688);
  <tokio::runtime::builder::tokio::runtime::builder::Builder>::build(&local_1a0);
  if (local_1a0 == (long *)0x2) {
    local_1f0 = plStack_198;
                    /* try { // try from 0071e130 to 0071e153 has its CatchHandler @ 0071e248 */
                    /* WARNING: Subroutine does not return */
    core::result::unwrap_failed
              ("Failed to create Tokio runtime",0x1e,&local_1f0,&PTR_FUN_00ad6708,
               &PTR_s_common_rust_src_core_async_runti_00ad66a0);
  }
  uStack_1c8 = CONCAT71(uStack_177,uStack_178);
  uStack_1a8 = uStack_158;
  local_1b0 = local_160;
  local_1d0 = local_180;
  local_1b8 = plStack_168;
  local_1c0 = uStack_170;
  plStack_1e8 = plStack_198;
  local_1f0 = local_1a0;
  uStack_1d8 = uStack_188;
  uStack_1e0 = local_190;
                    /* try { // try from 0071dfd0 to 0071dfd7 has its CatchHandler @ 0071e218 */
  FUN_00719a18(&local_150);
  do {
    lVar7 = *local_1b8;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(local_1b8,0x10);
    if (bVar2) {
      *local_1b8 = lVar7 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if ((local_1c0 & 1) == 0) {
    if (lVar7 < 0) goto LAB_0071e190;
    local_70 = 0;
  }
  else {
    if (lVar7 < 0) {
LAB_0071e190:
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x71e194);
      (*pcVar6)();
    }
    local_70 = 1;
  }
  plStack_68 = local_1b8;
  local_140 = 0xffffffffffffffff;
  local_150 = (long *)0x0;
  uStack_128 = uStack_128 & 0xffffffffffffff00;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  plStack_40 = (long *)FUN_004b25a4(0x18,1);
  acVar5 = s__runtime_002d00e6;
  uVar4 = s_libdiscore_async_002d00d6._0_8_;
  if (plStack_40 == (long *)0x0) {
                    /* try { // try from 0071e158 to 0071e163 has its CatchHandler @ 0071e20c */
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(1,0x18);
  }
  local_48 = (long *)&DAT_00000018;
  local_38 = 0x18;
  plStack_40[1] = s_libdiscore_async_002d00d6._8_8_;
  *plStack_40 = uVar4;
  *(char (*) [8])(plStack_40 + 2) = acVar5;
                    /* try { // try from 0071e054 to 0071e063 has its CatchHandler @ 0071e208 */
  <std::thread::builder::std::thread::builder::Builder>::name(&local_1a0,&local_150,&local_48);
  uStack_108 = uStack_1a8;
  local_110 = local_1b0;
  uStack_128 = uStack_1c8;
  local_130 = local_1d0;
  plStack_118 = local_1b8;
  uStack_120 = local_1c0;
  local_50 = local_180;
  plStack_148 = plStack_1e8;
  local_150 = local_1f0;
  uStack_138 = uStack_1d8;
  local_140 = uStack_1e0;
  uStack_58 = uStack_188;
  local_60 = local_190;
                    /* try { // try from 0071e094 to 0071e0a7 has its CatchHandler @ 0071e220 */
  FUN_0072e5a0(&local_48,&local_60,local_1a0,plStack_198,uStack_178,0,&local_150);
  if (local_48 == (long *)0x0) {
    local_150 = plStack_40;
                    /* try { // try from 0071e16c to 0071e18f has its CatchHandler @ 0071e1f4 */
                    /* WARNING: Subroutine does not return */
    core::result::unwrap_failed
              ("Failed to spawn Tokio runtime thread",0x24,&local_150,&PTR_FUN_00ad6708,
               &PTR_s_common_rust_src_core_async_runti_00ad66b8);
  }
  local_150 = local_48;
  plStack_148 = plStack_40;
  local_140 = local_38;
                    /* try { // try from 0071e0c0 to 0071e0c7 has its CatchHandler @ 0071e19c */
  <std::sys::thread::unix::Thread_as_core::ops::drop::Drop>::drop(&local_140);
  do {
    lVar7 = *local_150;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(local_150,0x10);
    if (bVar2) {
      *local_150 = lVar7 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar7 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 0071e0e4 to 0071e0eb has its CatchHandler @ 0071e194 */
    <alloc[c1f8e832b0d782c7]::sync::Arc<std[17aff9129faa4dc5]::thread::thread::Inner,std[17aff9129faa4dc5]::alloc::System>>
    ::drop_slow(&local_150);
  }
  do {
    lVar7 = *plStack_148;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plStack_148,0x10);
    if (bVar2) {
      *plStack_148 = lVar7 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar7 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 0071e108 to 0071e10f has its CatchHandler @ 0071e220 */
    <alloc::sync::[n]::alloc::sync::Arc<std::thread::lifecycle::Packet<()>>>::drop_slow
              (&plStack_148);
  }
  auVar3._8_8_ = plStack_68;
  auVar3._0_8_ = local_70;
  return auVar3;
}


// ===== 0071e26c  FUN_0071e26c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0071e26c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_0029f810;
  param_1[1] = _UNK_0029f818;
  *param_1 = uVar1;
  return;
}


// ===== 0071e280  FUN_0071e280 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0071e280(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_002a0d50;
  param_1[1] = _UNK_002a0d58;
  *param_1 = uVar1;
  return;
}


// ===== 0071e294  FUN_0071e294 =====

undefined8 FUN_0071e294(void)

{
  return 0;
}


// ===== 0071e29c  FUN_0071e29c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0071e29c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_002a07f0;
  param_1[1] = _UNK_002a07f8;
  *param_1 = uVar1;
  return;
}


// ===== 0071e2b0  FUN_0071e2b0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0071e2b0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_0029fa20;
  param_1[1] = _UNK_0029fa28;
  *param_1 = uVar1;
  return;
}


// ===== 0071e2c4  FUN_0071e2c4 =====

undefined1  [16] FUN_0071e2c4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x28;
  auVar1._0_8_ = "description() is deprecated; use Display";
  return auVar1;
}


// ===== 0071e2d4  FUN_0071e2d4 =====

undefined8 FUN_0071e2d4(void)

{
  return 0;
}


// ===== 0071e2dc  FUN_0071e2dc =====

void FUN_0071e2dc(void)

{
  return;
}


// ===== 0071e2e0  FUN_0071e2e0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0071e2e0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_0029fdc0;
  param_1[1] = _UNK_0029fdc8;
  *param_1 = uVar1;
  return;
}


// ===== 0071e2f4  FUN_0071e2f4 =====

undefined1  [16] FUN_0071e2f4(ulong *param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  uVar2 = *param_1 ^ 0x8000000000000000;
  if (-1 < (long)*param_1) {
    uVar2 = 2;
  }
  if ((long)uVar2 < 2) {
    if (uVar2 == 0) {
      auVar4._8_8_ = &PTR_FUN_00ad6950;
      auVar4._0_8_ = param_1 + 1;
      return auVar4;
    }
    auVar6._8_8_ = &PTR_FUN_00ad69c8;
    auVar6._0_8_ = param_1 + 1;
    return auVar6;
  }
  if (uVar2 == 2) {
    auVar5._8_8_ = &PTR_FUN_00ad6a40;
    auVar5._0_8_ = param_1;
    return auVar5;
  }
  if (uVar2 == 3) {
    auVar3._8_8_ = &PTR_FUN_00ad68d8;
    auVar3._0_8_ = param_1 + 1;
    return auVar3;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2;
  return auVar1 << 0x40;
}


// ===== 0071e364  FUN_0071e364 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0071e364(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_0029ff60;
  param_1[1] = _UNK_0029ff68;
  *param_1 = uVar1;
  return;
}


// ===== 0071e378  FUN_0071e378 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0071e378(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_002a0590;
  param_1[1] = _UNK_002a0598;
  *param_1 = uVar1;
  return;
}


// ===== 0071e38c  FUN_0071e38c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0071e38c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_002a0f30;
  param_1[1] = _UNK_002a0f38;
  *param_1 = uVar1;
  return;
}


// ===== 0071e3a0  FUN_0071e3a0 =====

undefined1  [16] FUN_0071e3a0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x28;
  auVar1._0_8_ = "description() is deprecated; use Display";
  return auVar1;
}


// ===== 0071e3b0  FUN_0071e3b0 =====

undefined8 FUN_0071e3b0(void)

{
  return 0;
}


// ===== 0071e3b8  FUN_0071e3b8 =====

void FUN_0071e3b8(void)

{
  return;
}


// ===== 0071e3bc  FUN_0071e3bc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0071e3bc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_002a0a80;
  param_1[1] = _UNK_002a0a88;
  *param_1 = uVar1;
  return;
}


// ===== 0071e3d0  FUN_0071e3d0 =====

void FUN_0071e3d0(void *param_1)

{
  if (param_1 != (void *)0x0) {
                    /* try { // try from 0071e3e0 to 0071e3e7 has its CatchHandler @ 0071e40c */
    FUN_007233bc();
    free(param_1);
    return;
  }
  return;
}


// ===== 0071e428  FUN_0071e428 =====

void FUN_0071e428(long *param_1)

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
      puVar3 = (undefined8 *)((long)__ptr + 0x20);
      do {
        if (puVar3[-4] != 0) {
          free((void *)puVar3[-3]);
        }
        if (puVar3[-1] != 0) {
          free((void *)*puVar3);
        }
        lVar2 = lVar2 + -1;
        puVar3 = puVar3 + 6;
      } while (lVar2 != 0);
    }
    if (lVar1 != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 0071e4c0  FUN_0071e4c0 =====

void FUN_0071e4c0(long *param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  code *pcVar2;
  
  if (*param_1 != 0) {
    if (param_1[1] != 0) {
                    /* WARNING: Could not recover jumptable at 0x0071e4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1[1] + 0x20))(param_1 + 4,param_1[2],param_1[3]);
      return;
    }
    __ptr = (void *)param_1[2];
    puVar1 = (undefined8 *)param_1[3];
    pcVar2 = (code *)*puVar1;
    if (pcVar2 != (code *)0x0) {
                    /* try { // try from 0071e500 to 0071e507 has its CatchHandler @ 0071e530 */
      (*pcVar2)(__ptr);
    }
    if (puVar1[1] != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 0071e554  FUN_0071e554 =====

long * FUN_0071e554(long *param_1)

{
  uint uVar1;
  code *pcVar2;
  ulong uVar3;
  long *__ptr;
  undefined8 *puVar4;
  long local_28;
  
  if (*param_1 == 0) {
    if ((int)param_1[1] == 0) {
      uVar1 = close(*(int *)((long)param_1 + 0xc));
      return (long *)(ulong)uVar1;
    }
    uVar3 = param_1[2] & 3;
    if ((1 < uVar3 - 2) && (uVar3 != 0)) {
      local_28 = param_1[2] - 1;
      param_1 = (long *)<core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_28);
    }
  }
  else {
    __ptr = (long *)param_1[1];
    if (__ptr != (long *)0x0) {
      puVar4 = (undefined8 *)param_1[2];
      pcVar2 = (code *)*puVar4;
      if (pcVar2 != (code *)0x0) {
                    /* try { // try from 0071e580 to 0071e587 has its CatchHandler @ 0071e608 */
        param_1 = (long *)(*pcVar2)(__ptr);
      }
      if (puVar4[1] != 0) {
        free(__ptr);
        return __ptr;
      }
    }
  }
  return param_1;
}


// ===== 0071e62c  FUN_0071e62c =====

void FUN_0071e62c(long *param_1)

{
  void *__ptr;
  code *pcVar1;
  undefined8 *puVar2;
  long local_28;
  
  __ptr = (void *)param_1[1];
  if (*param_1 == 0) {
    if (((__ptr != (void *)0x0) && (1 < ((ulong)__ptr & 3) - 2)) && (((ulong)__ptr & 3) != 0)) {
      local_28 = (long)__ptr + -1;
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_28);
    }
  }
  else if (__ptr != (void *)0x0) {
    puVar2 = (undefined8 *)param_1[2];
    pcVar1 = (code *)*puVar2;
    if (pcVar1 != (code *)0x0) {
                    /* try { // try from 0071e654 to 0071e65b has its CatchHandler @ 0071e6c0 */
      (*pcVar1)(__ptr);
    }
    if (puVar2[1] != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 0071e6e4  FUN_0071e6e4 =====

void FUN_0071e6e4(long *param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 == 2) {
    FUN_00722548(param_1[1]);
    return;
  }
  if ((9 < *(byte *)(param_1 + 0x1e)) && (param_1[0x20] != 0)) {
    free((void *)param_1[0x1f]);
  }
  if (param_1[0x11] != 0) {
    free((void *)param_1[0x12]);
  }
                    /* try { // try from 0071e744 to 0071e74b has its CatchHandler @ 0071e7d0 */
  FUN_007234d8(param_1 + 5);
  if (lVar3 != 0) {
    if (param_1[1] != 0) {
                    /* WARNING: Could not recover jumptable at 0x0071e76c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1[1] + 0x20))(param_1 + 4,param_1[2],param_1[3]);
      return;
    }
    __ptr = (void *)param_1[2];
    puVar1 = (undefined8 *)param_1[3];
    pcVar2 = (code *)*puVar1;
    if (pcVar2 != (code *)0x0) {
                    /* try { // try from 0071e77c to 0071e783 has its CatchHandler @ 0071e7ac */
      (*pcVar2)(__ptr);
    }
    if (puVar1[1] != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 0071e7e8  FUN_0071e7e8 =====

void FUN_0071e7e8(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (*(char *)(param_1 + 0xa1) == '\x03') {
    FUN_00720a6c(param_1 + 0x1d);
  }
  else if (*(char *)(param_1 + 0xa1) == '\0') {
                    /* try { // try from 0071e808 to 0071e81b has its CatchHandler @ 0071e854 */
    FUN_00722770(param_1 + 1);
  }
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
    <alloc::sync::[n]::alloc::sync::Arc<futures_util::abortable::AbortInner>>::drop_slow(param_1);
    return;
  }
  return;
}


// ===== 0071e888  FUN_0071e888 =====

void FUN_0071e888(long *param_1)

{
  void *__ptr;
  long lVar1;
  long lVar2;
  
  __ptr = (void *)param_1[1];
  lVar2 = param_1[2] + 1;
  lVar1 = (long)__ptr + 0x38;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 0071e8c4 to 0071e8c7 has its CatchHandler @ 0071e910 */
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


// ===== 0071e964  FUN_0071e964 =====

void FUN_0071e964(long *param_1)

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
      puVar2 = puVar2 + 0xb;
    } while (lVar1 != 0);
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 0071e9e4  FUN_0071e9e4 =====

void FUN_0071e9e4(long *param_1)

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


// ===== 0071ea64  FUN_0071ea64 =====

void FUN_0071ea64(long *param_1)

{
  void *__ptr;
  long lVar1;
  undefined8 *puVar2;
  
  __ptr = (void *)param_1[1];
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)((long)__ptr + 0x20);
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
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 0071eaf8  FUN_0071eaf8 =====

void FUN_0071eaf8(void *param_1,undefined8 *param_2)

{
  if ((code *)*param_2 != (code *)0x0) {
                    /* try { // try from 0071eb18 to 0071eb1f has its CatchHandler @ 0071eb50 */
    (*(code *)*param_2)(param_1);
  }
  if (param_2[1] != 0) {
    free(param_1);
    return;
  }
  return;
}


// ===== 0071eb70  FUN_0071eb70 =====

void FUN_0071eb70(long *param_1)

{
  if (*param_1 != 0) {
    free((void *)param_1[1]);
  }
  free(param_1);
  return;
}


// ===== 0071ebb0  FUN_0071ebb0 =====

int * FUN_0071ebb0(int *param_1)

{
  uint uVar1;
  ulong uVar2;
  long local_18;
  
  if (*param_1 != 2) {
    if (*param_1 == 0) {
      uVar1 = close(param_1[1]);
      return (int *)(ulong)uVar1;
    }
    uVar2 = *(ulong *)(param_1 + 2) & 3;
    if ((1 < uVar2 - 2) && (uVar2 != 0)) {
      local_18 = *(ulong *)(param_1 + 2) - 1;
      param_1 = (int *)<core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
    }
  }
  return param_1;
}


// ===== 0071ec14  FUN_0071ec14 =====

void FUN_0071ec14(long param_1,ulong param_2)

{
  long local_18;
  
  if ((((param_1 == 0) && (param_2 != 0)) && (1 < (param_2 & 3) - 2)) && ((param_2 & 3) != 0)) {
    local_18 = param_2 - 1;
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
  }
  return;
}


// ===== 0071ec64  FUN_0071ec64 =====

void FUN_0071ec64(int *param_1,uint param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  
  if (((param_2 & 1) == 0) &&
     ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0 & 0x7fffffffffffffff) != 0)) {
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
  <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake();
  return;
}


// ===== 0071ecd4  FUN_0071ecd4 =====

void FUN_0071ecd4(long param_1)

{
  if (*(long *)(param_1 + 0x60) != 0) {
    free(*(void **)(param_1 + 0x68));
  }
  FUN_007234d8(param_1);
  return;
}


// ===== 0071ed0c  FUN_0071ed0c =====

void FUN_0071ed0c(long *param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  code *pcVar2;
  
  if (*param_1 != -2) {
                    /* try { // try from 0071ed28 to 0071ed2f has its CatchHandler @ 0071eda0 */
    FUN_00765698(param_1 + 0xc);
    if (param_1[0xc] != 0) {
      free((void *)param_1[0xd]);
    }
    if (*param_1 != -1) {
                    /* try { // try from 0071ed54 to 0071ed5b has its CatchHandler @ 0071ed98 */
      FUN_007234d8(param_1);
    }
  }
  __ptr = (void *)param_1[0x10];
  puVar1 = (undefined8 *)param_1[0x11];
  pcVar2 = (code *)*puVar1;
  if (pcVar2 != (code *)0x0) {
                    /* try { // try from 0071ed68 to 0071ed6f has its CatchHandler @ 0071ede4 */
    (*pcVar2)(__ptr);
  }
  if (puVar1[1] != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 0071ee08  FUN_0071ee08 =====

void FUN_0071ee08(long param_1,void *param_2)

{
  int iVar1;
  
  if (1 < param_1 + 1U) {
    if (param_1 != -2) {
      free(param_2);
      return;
    }
    iVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::drop_join_handle_fast
                      (param_2);
    if (iVar1 != 0) {
      <tokio::runtime::task::raw::tokio::runtime::task::raw::RawTask>::drop_join_handle_slow
                (param_2);
      return;
    }
  }
  return;
}


// ===== 0071ee70  FUN_0071ee70 =====

void FUN_0071ee70(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
                    /* try { // try from 0071ee84 to 0071eeab has its CatchHandler @ 0071eee8 */
    uVar3 = <tokio::sync::oneshot::[9]::tokio::sync::oneshot::State>::set_complete(plVar5 + 6);
    if ((uVar3 & 5) == 1) {
      (**(code **)(plVar5[4] + 0x10))(plVar5[5]);
      plVar5 = (long *)*param_1;
      if (plVar5 == (long *)0x0) {
        return;
      }
    }
    do {
      lVar4 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<core::result::Result<libdiscore_common::core::http::ParsedHttpResponse<std::collections::hash::set::HashSet<alloc::string::String>>,{backref_37}::HttpError>>>>
      ::drop_slow(param_1);
      return;
    }
  }
  return;
}


// ===== 0071ef20  FUN_0071ef20 =====

void FUN_0071ef20(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
                    /* try { // try from 0071ef34 to 0071ef5b has its CatchHandler @ 0071ef98 */
    uVar3 = <tokio::sync::oneshot::[9]::tokio::sync::oneshot::State>::set_complete(plVar5 + 0x16);
    if ((uVar3 & 5) == 1) {
      (**(code **)(plVar5[0x14] + 0x10))(plVar5[0x15]);
      plVar5 = (long *)*param_1;
      if (plVar5 == (long *)0x0) {
        return;
      }
    }
    do {
      lVar4 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<core::result::Result<libdiscore_common::core::http::ParsedHttpResponse<alloc::string::String>,{backref_37}::HttpError>>>>
      ::drop_slow(param_1);
      return;
    }
  }
  return;
}


// ===== 0071efd0  FUN_0071efd0 =====

void FUN_0071efd0(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
                    /* try { // try from 0071efe4 to 0071f00b has its CatchHandler @ 0071f048 */
    uVar3 = <tokio::sync::oneshot::[9]::tokio::sync::oneshot::State>::set_complete(plVar5 + 6);
    if ((uVar3 & 5) == 1) {
      (**(code **)(plVar5[4] + 0x10))(plVar5[5]);
      plVar5 = (long *)*param_1;
      if (plVar5 == (long *)0x0) {
        return;
      }
    }
    do {
      lVar4 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<core::result::Result<libdiscore_common::core::http::ParsedHttpResponse<{backref_41}::stores::blocked_domains::DeltaResponse>,{backref_37}::HttpError>>>>
      ::drop_slow(param_1);
      return;
    }
  }
  return;
}


// ===== 0071f080  FUN_0071f080 =====

void FUN_0071f080(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 0071f090 to 0071f093 has its CatchHandler @ 0071f0d0 */
  FUN_0074fb84();
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
      <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<core::result::Result<libdiscore_common::core::http::ParsedHttpResponse<std::collections::hash::set::HashSet<alloc::string::String>>,{backref_37}::HttpError>>>>
      ::drop_slow(param_1);
      return;
    }
  }
  return;
}


// ===== 0071f108  FUN_0071f108 =====

void FUN_0071f108(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long local_50;
  void *pvStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar5 = *param_1;
  if (lVar5 != 0) {
    puVar1 = (ulong *)(lVar5 + 0xb0);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 | 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 10) == 8) {
                    /* try { // try from 0071f154 to 0071f1c3 has its CatchHandler @ 0071f210 */
      (**(code **)(*(long *)(lVar5 + 0x90) + 0x10))(*(undefined8 *)(lVar5 + 0x98));
    }
    if (((uint)uVar6 >> 1 & 1) != 0) {
      uStack_68 = *(undefined8 *)(lVar5 + 0x58);
      local_70 = *(undefined8 *)(lVar5 + 0x50);
      uStack_58 = *(undefined8 *)(lVar5 + 0x68);
      uStack_60 = *(undefined8 *)(lVar5 + 0x60);
      pvStack_48 = *(void **)(lVar5 + 0x78);
      local_50 = *(long *)(lVar5 + 0x70);
      uStack_38 = *(undefined8 *)(lVar5 + 0x88);
      uStack_40 = *(undefined8 *)(lVar5 + 0x80);
      uStack_a8 = *(undefined8 *)(lVar5 + 0x18);
      local_b0 = *(long *)(lVar5 + 0x10);
      uStack_98 = *(undefined8 *)(lVar5 + 0x28);
      uStack_a0 = *(undefined8 *)(lVar5 + 0x20);
      uStack_88 = *(undefined8 *)(lVar5 + 0x38);
      local_90 = *(undefined8 *)(lVar5 + 0x30);
      uStack_78 = *(undefined8 *)(lVar5 + 0x48);
      uStack_80 = *(undefined8 *)(lVar5 + 0x40);
      *(undefined8 *)(lVar5 + 0x10) = 0xfffffffffffffffe;
      if (local_b0 != -2) {
        if (local_b0 == -1) {
          FUN_0074d924((ulong)&local_b0 | 8);
        }
        else {
          if (local_50 != 0) {
            free(pvStack_48);
          }
          FUN_0074db38(&local_b0);
        }
      }
    }
    plVar4 = (long *)*param_1;
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
        <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<core::result::Result<libdiscore_common::core::http::ParsedHttpResponse<alloc::string::String>,{backref_37}::HttpError>>>>
        ::drop_slow(param_1);
        return;
      }
    }
  }
  return;
}


// ===== 0071f248  FUN_0071f248 =====

void FUN_0071f248(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  lVar5 = *param_1;
  if (lVar5 != 0) {
    puVar1 = (ulong *)(lVar5 + 0x30);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 | 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 10) == 8) {
                    /* try { // try from 0071f294 to 0071f2f7 has its CatchHandler @ 0071f344 */
      (**(code **)(*(long *)(lVar5 + 0x10) + 0x10))(*(undefined8 *)(lVar5 + 0x18));
    }
    if (((uint)uVar6 >> 1 & 1) != 0) {
      uStack_78 = *(undefined8 *)(lVar5 + 0x90);
      uStack_80 = *(undefined8 *)(lVar5 + 0x88);
      uStack_88 = *(undefined8 *)(lVar5 + 0x80);
      local_90 = *(undefined8 *)(lVar5 + 0x78);
      uStack_a8 = *(undefined8 *)(lVar5 + 0x60);
      local_b0 = *(undefined8 *)(lVar5 + 0x58);
      uStack_98 = *(undefined8 *)(lVar5 + 0x70);
      uStack_a0 = *(undefined8 *)(lVar5 + 0x68);
      local_40 = *(undefined8 *)(lVar5 + 200);
      uStack_48 = *(undefined8 *)(lVar5 + 0xc0);
      uStack_50 = *(undefined8 *)(lVar5 + 0xb8);
      uStack_58 = *(undefined8 *)(lVar5 + 0xb0);
      local_60 = *(undefined8 *)(lVar5 + 0xa8);
      uStack_68 = *(undefined8 *)(lVar5 + 0xa0);
      local_70 = *(undefined8 *)(lVar5 + 0x98);
      uStack_c8 = *(undefined8 *)(lVar5 + 0x40);
      local_d0 = *(long *)(lVar5 + 0x38);
      uStack_b8 = *(undefined8 *)(lVar5 + 0x50);
      uStack_c0 = *(undefined8 *)(lVar5 + 0x48);
      *(undefined8 *)(lVar5 + 0x38) = 0xfffffffffffffffe;
      if (local_d0 != -2) {
        FUN_0074c72c(&local_d0);
      }
    }
    plVar4 = (long *)*param_1;
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
        <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<core::result::Result<libdiscore_common::core::http::ParsedHttpResponse<{backref_41}::stores::blocked_domains::DeltaResponse>,{backref_37}::HttpError>>>>
        ::drop_slow(param_1);
        return;
      }
    }
  }
  return;
}


// ===== 0071f37c  thunk_FUN_00722a74 =====

void thunk_FUN_00722a74(long *param_1)

{
  void *pvVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined8 *puVar5;
  
  if (param_1[0x11] != 0) {
    free((void *)param_1[0x12]);
  }
  if ((9 < *(byte *)(param_1 + 0x17)) && (param_1[0x19] != 0)) {
    free((void *)param_1[0x18]);
  }
  if (*param_1 != 0) {
    if (param_1[1] == 0) {
      pvVar1 = (void *)param_1[2];
      puVar5 = (undefined8 *)param_1[3];
      pcVar3 = (code *)*puVar5;
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(pvVar1);
      }
      if (puVar5[1] != 0) {
        free(pvVar1);
      }
    }
    else {
      (**(code **)(param_1[1] + 0x20))(param_1 + 4,param_1[2],param_1[3]);
    }
  }
  lVar2 = param_1[0x14];
  if (lVar2 != -1) {
    lVar4 = param_1[0x16];
    if (lVar4 != 0) {
      puVar5 = (undefined8 *)(param_1[0x15] + 0x20);
      do {
        if (puVar5[-4] != 0) {
          free((void *)puVar5[-3]);
        }
        if (puVar5[-1] != 0) {
          free((void *)*puVar5);
        }
        lVar4 = lVar4 + -1;
        puVar5 = puVar5 + 6;
      } while (lVar4 != 0);
      lVar2 = param_1[0x14];
    }
    if (lVar2 != 0) {
      free((void *)param_1[0x15]);
    }
  }
  if (param_1[5] != -1) {
    FUN_007234d8();
  }
  pvVar1 = (void *)param_1[0x1a];
  puVar5 = (undefined8 *)param_1[0x1b];
  pcVar3 = (code *)*puVar5;
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(pvVar1);
  }
  if (puVar5[1] != 0) {
    free(pvVar1);
    return;
  }
  return;
}


// ===== 0071f380  FUN_0071f380 =====

void FUN_0071f380(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long local_48;
  long lStack_40;
  long local_38;
  
  lVar4 = *param_1;
  if ((*(byte *)(lVar4 + 0x1b8) & 1) == 0) {
    *(undefined1 *)(lVar4 + 0x1b8) = 1;
  }
                    /* try { // try from 0071f3b0 to 0071f3bf has its CatchHandler @ 0071f43c */
  <tokio::sync::mpsc::bounded::Semaphore_as_tokio::sync::mpsc::chan::Semaphore>::close
            (lVar4 + 0x1c0);
  <tokio::sync::notify::[4]::tokio::sync::notify::Notify>::notify_waiters(lVar4 + 0x180);
  local_48 = lVar4 + 0x1a0;
  lStack_40 = lVar4 + 0x80;
                    /* try { // try from 0071f3d0 to 0071f3d7 has its CatchHandler @ 0071f428 */
  local_38 = lVar4 + 0x1c0;
  FUN_0074e060(&local_48);
                    /* try { // try from 0071f3d8 to 0071f3df has its CatchHandler @ 0071f43c */
  FUN_0074e060(&local_48);
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
    <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::sync::mpsc::chan::Chan<libdiscore_common[1cb84820f9455fa0]::core::http::BackendHttpRequest,tokio[8c8895dbfa691109]::sync::mpsc::bounded::Semaphore>>>
    ::drop_slow(param_1);
    return;
  }
  return;
}


// ===== 0071f470  FUN_0071f470 =====

void FUN_0071f470(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
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
                    /* try { // try from 0071f4a0 to 0071f4a3 has its CatchHandler @ 0071f52c */
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow();
    }
  }
  if (*(int *)(param_1 + 0x38) == 1) {
                    /* try { // try from 0071f4d4 to 0071f4db has its CatchHandler @ 0071f540 */
    FUN_0071e554(param_1 + 0x40);
  }
  else if (((*(int *)(param_1 + 0x38) == 0) && (*(long *)(param_1 + 0x40) != -1)) &&
          (*(long *)(param_1 + 0x40) != 0)) {
    free(*(void **)(param_1 + 0x48));
  }
  if (*(long *)(param_1 + 0x68) != 0) {
                    /* try { // try from 0071f4ec to 0071f4ef has its CatchHandler @ 0071f554 */
    (**(code **)(*(long *)(param_1 + 0x68) + 0x18))(*(undefined8 *)(param_1 + 0x70));
  }
  plVar3 = *(long **)(param_1 + 0x78);
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
      ::drop_slow((undefined8 *)(param_1 + 0x78));
      return;
    }
  }
  return;
}


// ===== 0071f58c  FUN_0071f58c =====

void FUN_0071f58c(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
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
                    /* try { // try from 0071f5bc to 0071f5bf has its CatchHandler @ 0071f648 */
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow();
    }
  }
  if (*(int *)(param_1 + 0x38) == 1) {
                    /* try { // try from 0071f5f0 to 0071f5f7 has its CatchHandler @ 0071f65c */
    FUN_0071e62c(param_1 + 0x40);
  }
  else if (((*(int *)(param_1 + 0x38) == 0) && (*(long *)(param_1 + 0x40) != -1)) &&
          (*(long *)(param_1 + 0x40) != 0)) {
    free(*(void **)(param_1 + 0x48));
  }
  if (*(long *)(param_1 + 0x68) != 0) {
                    /* try { // try from 0071f608 to 0071f60b has its CatchHandler @ 0071f670 */
    (**(code **)(*(long *)(param_1 + 0x68) + 0x18))(*(undefined8 *)(param_1 + 0x70));
  }
  plVar3 = *(long **)(param_1 + 0x78);
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
      ::drop_slow((undefined8 *)(param_1 + 0x78));
      return;
    }
  }
  return;
}


// ===== 0071f6a8  FUN_0071f6a8 =====

void FUN_0071f6a8(long param_1)

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
                    /* try { // try from 0071f6d4 to 0071f6d7 has its CatchHandler @ 0071f730 */
    <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>>::
    drop_slow();
  }
                    /* try { // try from 0071f6d8 to 0071f6df has its CatchHandler @ 0071f778 */
  FUN_007202f8(param_1 + 0x30);
  if (*(long *)(param_1 + 0x60) != 0) {
                    /* try { // try from 0071f6f0 to 0071f6f3 has its CatchHandler @ 0071f744 */
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


// ===== 0071f790  FUN_0071f790 =====

void FUN_0071f790(long param_1)

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
                    /* try { // try from 0071f7bc to 0071f7bf has its CatchHandler @ 0071f818 */
    <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>>::
    drop_slow();
  }
                    /* try { // try from 0071f7c0 to 0071f7c7 has its CatchHandler @ 0071f860 */
  FUN_007202f8(param_1 + 0x30);
  if (*(long *)(param_1 + 0x60) != 0) {
                    /* try { // try from 0071f7d8 to 0071f7db has its CatchHandler @ 0071f82c */
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


// ===== 0071f878  FUN_0071f878 =====

void FUN_0071f878(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  undefined8 *puVar6;
  void *__ptr;
  
  plVar3 = *(long **)(param_1 + 0x20);
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
                    /* try { // try from 0071f8a8 to 0071f8ab has its CatchHandler @ 0071f980 */
    <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>>::
    drop_slow();
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(long *)(param_1 + 0x38) != 0) &&
       (__ptr = *(void **)(param_1 + 0x40), __ptr != (void *)0x0)) {
      puVar6 = *(undefined8 **)(param_1 + 0x48);
      pcVar4 = (code *)*puVar6;
      if (pcVar4 != (code *)0x0) {
                    /* try { // try from 0071f8e4 to 0071f8eb has its CatchHandler @ 0071f958 */
        (*pcVar4)(__ptr);
      }
      if (puVar6[1] != 0) {
        free(__ptr);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
                    /* try { // try from 0071f8bc to 0071f8c3 has its CatchHandler @ 0071f978 */
    FUN_00721378(param_1 + 0x38);
  }
  if (*(long *)(param_1 + 0x588) != 0) {
                    /* try { // try from 0071f910 to 0071f913 has its CatchHandler @ 0071f9a0 */
    (**(code **)(*(long *)(param_1 + 0x588) + 0x18))(*(undefined8 *)(param_1 + 0x590));
  }
  plVar3 = *(long **)(param_1 + 0x598);
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
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow(param_1 + 0x598);
      return;
    }
  }
  return;
}


// ===== 0071f9d8  FUN_0071f9d8 =====

void FUN_0071f9d8(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  undefined8 *puVar6;
  void *__ptr;
  
  plVar3 = *(long **)(param_1 + 0x20);
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
                    /* try { // try from 0071fa08 to 0071fa0b has its CatchHandler @ 0071fae0 */
    <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>>::
    drop_slow();
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(long *)(param_1 + 0x38) != 0) &&
       (__ptr = *(void **)(param_1 + 0x40), __ptr != (void *)0x0)) {
      puVar6 = *(undefined8 **)(param_1 + 0x48);
      pcVar4 = (code *)*puVar6;
      if (pcVar4 != (code *)0x0) {
                    /* try { // try from 0071fa44 to 0071fa4b has its CatchHandler @ 0071fab8 */
        (*pcVar4)(__ptr);
      }
      if (puVar6[1] != 0) {
        free(__ptr);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
                    /* try { // try from 0071fa1c to 0071fa23 has its CatchHandler @ 0071fad8 */
    FUN_00721378(param_1 + 0x38);
  }
  if (*(long *)(param_1 + 0x588) != 0) {
                    /* try { // try from 0071fa70 to 0071fa73 has its CatchHandler @ 0071fb00 */
    (**(code **)(*(long *)(param_1 + 0x588) + 0x18))(*(undefined8 *)(param_1 + 0x590));
  }
  plVar3 = *(long **)(param_1 + 0x598);
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
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow(param_1 + 0x598);
      return;
    }
  }
  return;
}


// ===== 0071fb38  FUN_0071fb38 =====

void FUN_0071fb38(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  undefined8 *puVar6;
  void *__ptr;
  
  plVar3 = *(long **)(param_1 + 0x20);
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
                    /* try { // try from 0071fb68 to 0071fb6b has its CatchHandler @ 0071fc40 */
    <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>>::
    drop_slow();
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(long *)(param_1 + 0x38) != 0) &&
       (__ptr = *(void **)(param_1 + 0x40), __ptr != (void *)0x0)) {
      puVar6 = *(undefined8 **)(param_1 + 0x48);
      pcVar4 = (code *)*puVar6;
      if (pcVar4 != (code *)0x0) {
                    /* try { // try from 0071fba4 to 0071fbab has its CatchHandler @ 0071fc18 */
        (*pcVar4)(__ptr);
      }
      if (puVar6[1] != 0) {
        free(__ptr);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
                    /* try { // try from 0071fb7c to 0071fb83 has its CatchHandler @ 0071fc38 */
    FUN_007215ec(param_1 + 0x38);
  }
  if (*(long *)(param_1 + 0x710) != 0) {
                    /* try { // try from 0071fbd0 to 0071fbd3 has its CatchHandler @ 0071fc60 */
    (**(code **)(*(long *)(param_1 + 0x710) + 0x18))(*(undefined8 *)(param_1 + 0x718));
  }
  plVar3 = *(long **)(param_1 + 0x720);
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
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow(param_1 + 0x720);
      return;
    }
  }
  return;
}


// ===== 0071fc98  FUN_0071fc98 =====

void FUN_0071fc98(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  undefined8 *puVar6;
  void *__ptr;
  
  plVar3 = *(long **)(param_1 + 0x20);
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
                    /* try { // try from 0071fcc8 to 0071fccb has its CatchHandler @ 0071fda0 */
    <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>>::
    drop_slow();
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(long *)(param_1 + 0x38) != 0) &&
       (__ptr = *(void **)(param_1 + 0x40), __ptr != (void *)0x0)) {
      puVar6 = *(undefined8 **)(param_1 + 0x48);
      pcVar4 = (code *)*puVar6;
      if (pcVar4 != (code *)0x0) {
                    /* try { // try from 0071fd04 to 0071fd0b has its CatchHandler @ 0071fd78 */
        (*pcVar4)(__ptr);
      }
      if (puVar6[1] != 0) {
        free(__ptr);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
                    /* try { // try from 0071fcdc to 0071fce3 has its CatchHandler @ 0071fd98 */
    FUN_007215ec(param_1 + 0x38);
  }
  if (*(long *)(param_1 + 0x710) != 0) {
                    /* try { // try from 0071fd30 to 0071fd33 has its CatchHandler @ 0071fdc0 */
    (**(code **)(*(long *)(param_1 + 0x710) + 0x18))(*(undefined8 *)(param_1 + 0x718));
  }
  plVar3 = *(long **)(param_1 + 0x720);
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
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow(param_1 + 0x720);
      return;
    }
  }
  return;
}


// ===== 0071fdf8  FUN_0071fdf8 =====

void FUN_0071fdf8(long param_1)

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
                    /* try { // try from 0071fe24 to 0071fe27 has its CatchHandler @ 0071fe80 */
    <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>>::
    drop_slow();
  }
                    /* try { // try from 0071fe28 to 0071fe2f has its CatchHandler @ 0071fec8 */
  FUN_00720504(param_1 + 0x30);
  if (*(long *)(param_1 + 0x98) != 0) {
                    /* try { // try from 0071fe40 to 0071fe43 has its CatchHandler @ 0071fe94 */
    (**(code **)(*(long *)(param_1 + 0x98) + 0x18))(*(undefined8 *)(param_1 + 0xa0));
  }
  plVar3 = *(long **)(param_1 + 0xa8);
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
      ::drop_slow((undefined8 *)(param_1 + 0xa8));
      return;
    }
  }
  return;
}


// ===== 0071fee0  FUN_0071fee0 =====

void FUN_0071fee0(long param_1)

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
                    /* try { // try from 0071ff0c to 0071ff0f has its CatchHandler @ 0071ff68 */
    <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>>::
    drop_slow();
  }
                    /* try { // try from 0071ff10 to 0071ff17 has its CatchHandler @ 0071ffb0 */
  FUN_00720504(param_1 + 0x30);
  if (*(long *)(param_1 + 0x98) != 0) {
                    /* try { // try from 0071ff28 to 0071ff2b has its CatchHandler @ 0071ff7c */
    (**(code **)(*(long *)(param_1 + 0x98) + 0x18))(*(undefined8 *)(param_1 + 0xa0));
  }
  plVar3 = *(long **)(param_1 + 0xa8);
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
      ::drop_slow((undefined8 *)(param_1 + 0xa8));
      return;
    }
  }
  return;
}


// ===== 0071ffc8  FUN_0071ffc8 =====

void FUN_0071ffc8(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  undefined8 *puVar6;
  void *__ptr;
  
  plVar3 = *(long **)(param_1 + 0x20);
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
                    /* try { // try from 0071fff8 to 0071fffb has its CatchHandler @ 007200d0 */
    <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>>::
    drop_slow();
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(long *)(param_1 + 0x38) != 0) &&
       (__ptr = *(void **)(param_1 + 0x40), __ptr != (void *)0x0)) {
      puVar6 = *(undefined8 **)(param_1 + 0x48);
      pcVar4 = (code *)*puVar6;
      if (pcVar4 != (code *)0x0) {
                    /* try { // try from 00720034 to 0072003b has its CatchHandler @ 007200a8 */
        (*pcVar4)(__ptr);
      }
      if (puVar6[1] != 0) {
        free(__ptr);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
                    /* try { // try from 0072000c to 00720013 has its CatchHandler @ 007200c8 */
    FUN_00721ebc(param_1 + 0x38);
  }
  if (*(long *)(param_1 + 0x650) != 0) {
                    /* try { // try from 00720060 to 00720063 has its CatchHandler @ 007200f0 */
    (**(code **)(*(long *)(param_1 + 0x650) + 0x18))(*(undefined8 *)(param_1 + 0x658));
  }
  plVar3 = *(long **)(param_1 + 0x660);
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
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow(param_1 + 0x660);
      return;
    }
  }
  return;
}


// ===== 00720128  FUN_00720128 =====

void FUN_00720128(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  undefined8 *puVar6;
  void *__ptr;
  
  plVar3 = *(long **)(param_1 + 0x20);
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
                    /* try { // try from 00720158 to 0072015b has its CatchHandler @ 00720230 */
    <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>>::
    drop_slow();
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(long *)(param_1 + 0x38) != 0) &&
       (__ptr = *(void **)(param_1 + 0x40), __ptr != (void *)0x0)) {
      puVar6 = *(undefined8 **)(param_1 + 0x48);
      pcVar4 = (code *)*puVar6;
      if (pcVar4 != (code *)0x0) {
                    /* try { // try from 00720194 to 0072019b has its CatchHandler @ 00720208 */
        (*pcVar4)(__ptr);
      }
      if (puVar6[1] != 0) {
        free(__ptr);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
                    /* try { // try from 0072016c to 00720173 has its CatchHandler @ 00720228 */
    FUN_00721ebc(param_1 + 0x38);
  }
  if (*(long *)(param_1 + 0x650) != 0) {
                    /* try { // try from 007201c0 to 007201c3 has its CatchHandler @ 00720250 */
    (**(code **)(*(long *)(param_1 + 0x650) + 0x18))(*(undefined8 *)(param_1 + 0x658));
  }
  plVar3 = *(long **)(param_1 + 0x660);
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
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow(param_1 + 0x660);
      return;
    }
  }
  return;
}


// ===== 00720288  FUN_00720288 =====

void FUN_00720288(int *param_1)

{
  if (*param_1 == 0) {
    if ((*(long *)(param_1 + 2) != -1) && (*(long *)(param_1 + 2) != 0)) {
      free(*(void **)(param_1 + 4));
      return;
    }
  }
  else if (*param_1 == 1) {
    FUN_0071e554(param_1 + 2);
    return;
  }
  return;
}


// ===== 007202c0  FUN_007202c0 =====

void FUN_007202c0(int *param_1)

{
  if (*param_1 == 0) {
    if ((*(long *)(param_1 + 2) != -1) && (*(long *)(param_1 + 2) != 0)) {
      free(*(void **)(param_1 + 4));
      return;
    }
  }
  else if (*param_1 == 1) {
    FUN_0071e62c(param_1 + 2);
    return;
  }
  return;
}


// ===== 007202f8  FUN_007202f8 =====

void FUN_007202f8(int *param_1)

{
  int iVar1;
  code *pcVar2;
  void *__ptr;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (*param_1 == 0) {
    if ((char)param_1[6] == '\x03') {
      uVar3 = *(undefined8 *)(param_1 + 4);
      iVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::
              drop_join_handle_fast(uVar3);
    }
    else {
      if ((char)param_1[6] != '\0') {
        return;
      }
      uVar3 = *(undefined8 *)(param_1 + 2);
      iVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::
              drop_join_handle_fast(uVar3);
    }
    if (iVar1 != 0) {
      <tokio::runtime::task::raw::tokio::runtime::task::raw::RawTask>::drop_join_handle_slow(uVar3);
      return;
    }
  }
  else if (((*param_1 == 1) && (*(long *)(param_1 + 2) != 0)) &&
          (__ptr = *(void **)(param_1 + 4), __ptr != (void *)0x0)) {
    puVar4 = *(undefined8 **)(param_1 + 6);
    pcVar2 = (code *)*puVar4;
    if (pcVar2 != (code *)0x0) {
                    /* try { // try from 00720330 to 00720337 has its CatchHandler @ 007203a8 */
      (*pcVar2)(__ptr);
    }
    if (puVar4[1] != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 007203cc  FUN_007203cc =====

void FUN_007203cc(int *param_1)

{
  code *pcVar1;
  void *__ptr;
  undefined8 *puVar2;
  
  if (*param_1 == 0) {
    FUN_00721378(param_1 + 2);
    return;
  }
  if (((*param_1 == 1) && (*(long *)(param_1 + 2) != 0)) &&
     (__ptr = *(void **)(param_1 + 4), __ptr != (void *)0x0)) {
    puVar2 = *(undefined8 **)(param_1 + 6);
    pcVar1 = (code *)*puVar2;
    if (pcVar1 != (code *)0x0) {
                    /* try { // try from 00720404 to 0072040b has its CatchHandler @ 00720444 */
      (*pcVar1)(__ptr);
    }
    if (puVar2[1] != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 00720468  FUN_00720468 =====

void FUN_00720468(int *param_1)

{
  code *pcVar1;
  void *__ptr;
  undefined8 *puVar2;
  
  if (*param_1 == 0) {
    FUN_007215ec(param_1 + 2);
    return;
  }
  if (((*param_1 == 1) && (*(long *)(param_1 + 2) != 0)) &&
     (__ptr = *(void **)(param_1 + 4), __ptr != (void *)0x0)) {
    puVar2 = *(undefined8 **)(param_1 + 6);
    pcVar1 = (code *)*puVar2;
    if (pcVar1 != (code *)0x0) {
                    /* try { // try from 007204a0 to 007204a7 has its CatchHandler @ 007204e0 */
      (*pcVar1)(__ptr);
    }
    if (puVar2[1] != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 00720504  FUN_00720504 =====

void FUN_00720504(int *param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  void *__ptr;
  long local_48;
  long lStack_40;
  long local_38;
  
  if (*param_1 == 0) {
    if ((char)param_1[0x14] == '\x03') {
      FUN_0072294c(param_1 + 4);
      return;
    }
    if ((char)param_1[0x14] == '\0') {
      lVar6 = *(long *)(param_1 + 2);
      if ((*(byte *)(lVar6 + 0x1b8) & 1) == 0) {
        *(undefined1 *)(lVar6 + 0x1b8) = 1;
      }
                    /* try { // try from 0072059c to 007205ab has its CatchHandler @ 00720660 */
      <tokio::sync::mpsc::bounded::Semaphore_as_tokio::sync::mpsc::chan::Semaphore>::close
                (lVar6 + 0x1c0);
      <tokio::sync::notify::[4]::tokio::sync::notify::Notify>::notify_waiters(lVar6 + 0x180);
      local_48 = lVar6 + 0x1a0;
      lStack_40 = lVar6 + 0x80;
                    /* try { // try from 007205bc to 007205c3 has its CatchHandler @ 0072064c */
      local_38 = lVar6 + 0x1c0;
      FUN_0074e060(&local_48);
                    /* try { // try from 007205c4 to 007205cb has its CatchHandler @ 00720660 */
      FUN_0074e060(&local_48);
      plVar4 = *(long **)(param_1 + 2);
      do {
        lVar6 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 + -1 == 0) {
        DataMemoryBarrier(2,1);
        <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::sync::mpsc::chan::Chan<libdiscore_common[1cb84820f9455fa0]::core::http::BackendHttpRequest,tokio[8c8895dbfa691109]::sync::mpsc::bounded::Semaphore>>>
        ::drop_slow(param_1 + 2);
        return;
      }
    }
  }
  else if (((*param_1 == 1) && (*(long *)(param_1 + 2) != 0)) &&
          (__ptr = *(void **)(param_1 + 4), __ptr != (void *)0x0)) {
    puVar5 = *(undefined8 **)(param_1 + 6);
    pcVar3 = (code *)*puVar5;
    if (pcVar3 != (code *)0x0) {
                    /* try { // try from 00720548 to 0072054f has its CatchHandler @ 0072062c */
      (*pcVar3)(__ptr);
    }
    if (puVar5[1] != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 00720694  FUN_00720694 =====

void FUN_00720694(int *param_1)

{
  code *pcVar1;
  void *__ptr;
  undefined8 *puVar2;
  
  if (*param_1 == 0) {
    FUN_00721ebc(param_1 + 2);
    return;
  }
  if (((*param_1 == 1) && (*(long *)(param_1 + 2) != 0)) &&
     (__ptr = *(void **)(param_1 + 4), __ptr != (void *)0x0)) {
    puVar2 = *(undefined8 **)(param_1 + 6);
    pcVar1 = (code *)*puVar2;
    if (pcVar1 != (code *)0x0) {
                    /* try { // try from 007206cc to 007206d3 has its CatchHandler @ 0072070c */
      (*pcVar1)(__ptr);
    }
    if (puVar2[1] != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 00720730  FUN_00720730 =====

void FUN_00720730(int *param_1)

{
  if (*param_1 == 1) {
    FUN_0071e554(param_1 + 2);
    return;
  }
  if (((*param_1 == 0) && (*(long *)(param_1 + 2) != -1)) && (*(long *)(param_1 + 2) != 0)) {
    free(*(void **)(param_1 + 4));
    return;
  }
  return;
}


// ===== 00720768  FUN_00720768 =====

void FUN_00720768(int *param_1)

{
  if (*param_1 == 1) {
    FUN_0071e62c(param_1 + 2);
    return;
  }
  if (((*param_1 == 0) && (*(long *)(param_1 + 2) != -1)) && (*(long *)(param_1 + 2) != 0)) {
    free(*(void **)(param_1 + 4));
    return;
  }
  return;
}


// ===== 007207a0  FUN_007207a0 =====

void FUN_007207a0(long *param_1)

{
  int iVar1;
  long lVar2;
  
  if ((char)param_1[0xb] == '\x03') {
    if ((char)param_1[10] == '\x03') {
      lVar2 = param_1[9];
                    /* try { // try from 00720808 to 0072081b has its CatchHandler @ 00720830 */
      iVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::
              drop_join_handle_fast(lVar2);
      if (iVar1 != 0) {
        <tokio::runtime::task::raw::tokio::runtime::task::raw::RawTask>::drop_join_handle_slow
                  (lVar2);
      }
    }
    else if (((char)param_1[10] == '\0') && (param_1[6] != 0)) {
      free((void *)param_1[7]);
    }
    param_1 = param_1 + 3;
    lVar2 = *param_1;
  }
  else {
    if ((char)param_1[0xb] != '\0') {
      return;
    }
    lVar2 = *param_1;
  }
  if (lVar2 == 0) {
    return;
  }
  free((void *)param_1[1]);
  return;
}


// ===== 00720850  FUN_00720850 =====

void FUN_00720850(long param_1)

{
  if (*(char *)(param_1 + 0x500) == '\0') {
    FUN_00722770();
    return;
  }
  if (*(char *)(param_1 + 0x500) == '\x03') {
    FUN_00720890(param_1 + 0xe0);
    return;
  }
  return;
}


// ===== 00720870  FUN_00720870 =====

void FUN_00720870(long param_1)

{
  if (*(char *)(param_1 + 0x500) == '\0') {
    FUN_00722770();
    return;
  }
  if (*(char *)(param_1 + 0x500) == '\x03') {
    FUN_00720d8c(param_1 + 0xe0);
    return;
  }
  return;
}


// ===== 00720890  FUN_00720890 =====

void FUN_00720890(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  cVar1 = *(char *)(param_1 + 0x1b8);
  if (cVar1 == '\0') {
    FUN_00722770(param_1);
    return;
  }
  if (cVar1 == '\x03') {
                    /* try { // try from 007208ec to 007208f3 has its CatchHandler @ 00720a10 */
    FUN_00721d60(param_1 + 0x1d0);
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
                    /* try { // try from 007208b8 to 007208bf has its CatchHandler @ 007209dc */
    FUN_0074fb84(param_1 + 0x1c8);
    plVar3 = *(long **)(param_1 + 0x1c8);
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
                    /* try { // try from 007208e0 to 007208e7 has its CatchHandler @ 00720998 */
        <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<core::result::Result<libdiscore_common::core::http::ParsedHttpResponse<std::collections::hash::set::HashSet<alloc::string::String>>,{backref_37}::HttpError>>>>
        ::drop_slow(param_1 + 0x1c8);
      }
    }
  }
  if ((*(byte *)(param_1 + 0x1b9) & 1) != 0) {
                    /* try { // try from 007208fc to 00720903 has its CatchHandler @ 007209a8 */
    FUN_0074fb84(param_1 + 0x1c8);
    plVar3 = *(long **)(param_1 + 0x1c8);
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
                    /* try { // try from 00720924 to 0072092b has its CatchHandler @ 00720990 */
        <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<core::result::Result<libdiscore_common::core::http::ParsedHttpResponse<std::collections::hash::set::HashSet<alloc::string::String>>,{backref_37}::HttpError>>>>
        ::drop_slow(param_1 + 0x1c8);
      }
    }
  }
  plVar3 = *(long **)(param_1 + 0x1b0);
  *(undefined1 *)(param_1 + 0x1bb) = 0;
  *(undefined2 *)(param_1 + 0x1b9) = 0;
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
                    /* try { // try from 00720958 to 0072095f has its CatchHandler @ 0072099c */
      <alloc::sync::[n]::alloc::sync::Arc<std::sync::poison::mutex::Mutex<core::option::Option<alloc::boxed::Box<dyn_Trait<Assoc=X>+{backref_26}::ops::function::Fn<(libdiscore_common::core::http::ProgressEvent)>+{backref_26}::marker::Sync+{backref_71}::Send>>>>>
      ::drop_slow(param_1 + 0x1b0);
    }
  }
  *(undefined1 *)(param_1 + 0x1c0) = 0;
  *(undefined4 *)(param_1 + 0x1bc) = 0;
  return;
}


// ===== 00720a6c  FUN_00720a6c =====

void FUN_00720a6c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long local_50;
  void *pvStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  cVar2 = *(char *)(param_1 + 0x1b8);
  if (cVar2 == '\0') {
    FUN_00722770(param_1);
    return;
  }
  if (cVar2 == '\x03') {
                    /* try { // try from 00720b34 to 00720b3b has its CatchHandler @ 00720d30 */
    FUN_00721d60(param_1 + 0x1d0);
  }
  else {
    if (cVar2 != '\x04') {
      return;
    }
    lVar5 = *(long *)(param_1 + 0x1c8);
    if (lVar5 != 0) {
      puVar1 = (ulong *)(lVar5 + 0xb0);
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 | 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar6 & 10) == 8) {
                    /* try { // try from 00720ad0 to 00720b2f has its CatchHandler @ 00720cf0 */
        (**(code **)(*(long *)(lVar5 + 0x90) + 0x10))(*(undefined8 *)(lVar5 + 0x98));
      }
      if (((uint)uVar6 >> 1 & 1) != 0) {
        uStack_68 = *(undefined8 *)(lVar5 + 0x58);
        local_70 = *(undefined8 *)(lVar5 + 0x50);
        uStack_58 = *(undefined8 *)(lVar5 + 0x68);
        uStack_60 = *(undefined8 *)(lVar5 + 0x60);
        pvStack_48 = *(void **)(lVar5 + 0x78);
        local_50 = *(long *)(lVar5 + 0x70);
        uStack_38 = *(undefined8 *)(lVar5 + 0x88);
        uStack_40 = *(undefined8 *)(lVar5 + 0x80);
        uStack_a8 = *(undefined8 *)(lVar5 + 0x18);
        local_b0 = *(long *)(lVar5 + 0x10);
        uStack_98 = *(undefined8 *)(lVar5 + 0x28);
        uStack_a0 = *(undefined8 *)(lVar5 + 0x20);
        uStack_88 = *(undefined8 *)(lVar5 + 0x38);
        local_90 = *(undefined8 *)(lVar5 + 0x30);
        uStack_78 = *(undefined8 *)(lVar5 + 0x48);
        uStack_80 = *(undefined8 *)(lVar5 + 0x40);
        *(undefined8 *)(lVar5 + 0x10) = 0xfffffffffffffffe;
        if (local_b0 != -2) {
          if (local_b0 == -1) {
                    /* try { // try from 00720bf8 to 00720bff has its CatchHandler @ 00720cf0 */
            FUN_0074d924((ulong)&local_b0 | 8);
          }
          else {
            if (local_50 != 0) {
              free(pvStack_48);
            }
            FUN_0074db38(&local_b0);
          }
        }
      }
      plVar4 = *(long **)(param_1 + 0x1c8);
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
                    /* try { // try from 00720c20 to 00720c27 has its CatchHandler @ 00720cb8 */
          <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<core::result::Result<libdiscore_common::core::http::ParsedHttpResponse<alloc::string::String>,{backref_37}::HttpError>>>>
          ::drop_slow(param_1 + 0x1c8);
        }
      }
    }
  }
  if (((*(byte *)(param_1 + 0x1b9) & 1) != 0) && (lVar5 = *(long *)(param_1 + 0x1c8), lVar5 != 0)) {
    puVar1 = (ulong *)(lVar5 + 0xb0);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 | 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 10) == 8) {
                    /* try { // try from 00720b78 to 00720bd7 has its CatchHandler @ 00720cbc */
      (**(code **)(*(long *)(lVar5 + 0x90) + 0x10))(*(undefined8 *)(lVar5 + 0x98));
    }
    if (((uint)uVar6 >> 1 & 1) != 0) {
      uStack_68 = *(undefined8 *)(lVar5 + 0x58);
      local_70 = *(undefined8 *)(lVar5 + 0x50);
      uStack_58 = *(undefined8 *)(lVar5 + 0x68);
      uStack_60 = *(undefined8 *)(lVar5 + 0x60);
      pvStack_48 = *(void **)(lVar5 + 0x78);
      local_50 = *(long *)(lVar5 + 0x70);
      uStack_38 = *(undefined8 *)(lVar5 + 0x88);
      uStack_40 = *(undefined8 *)(lVar5 + 0x80);
      uStack_a8 = *(undefined8 *)(lVar5 + 0x18);
      local_b0 = *(long *)(lVar5 + 0x10);
      uStack_98 = *(undefined8 *)(lVar5 + 0x28);
      uStack_a0 = *(undefined8 *)(lVar5 + 0x20);
      uStack_88 = *(undefined8 *)(lVar5 + 0x38);
      local_90 = *(undefined8 *)(lVar5 + 0x30);
      uStack_78 = *(undefined8 *)(lVar5 + 0x48);
      uStack_80 = *(undefined8 *)(lVar5 + 0x40);
      *(undefined8 *)(lVar5 + 0x10) = 0xfffffffffffffffe;
      if (local_b0 != -2) {
        if (local_b0 == -1) {
                    /* try { // try from 00720c30 to 00720c37 has its CatchHandler @ 00720cbc */
          FUN_0074d924((ulong)&local_b0 | 8);
        }
        else {
          if (local_50 != 0) {
            free(pvStack_48);
          }
          FUN_0074db38(&local_b0);
        }
      }
    }
    plVar4 = *(long **)(param_1 + 0x1c8);
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
                    /* try { // try from 00720c58 to 00720c5f has its CatchHandler @ 00720cb0 */
        <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<core::result::Result<libdiscore_common::core::http::ParsedHttpResponse<alloc::string::String>,{backref_37}::HttpError>>>>
        ::drop_slow(param_1 + 0x1c8);
      }
    }
  }
  plVar4 = *(long **)(param_1 + 0x1b0);
  *(undefined1 *)(param_1 + 0x1bb) = 0;
  *(undefined2 *)(param_1 + 0x1b9) = 0;
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
                    /* try { // try from 00720c8c to 00720c93 has its CatchHandler @ 00720d24 */
      <alloc::sync::[n]::alloc::sync::Arc<std::sync::poison::mutex::Mutex<core::option::Option<alloc::boxed::Box<dyn_Trait<Assoc=X>+{backref_26}::ops::function::Fn<(libdiscore_common::core::http::ProgressEvent)>+{backref_26}::marker::Sync+{backref_71}::Send>>>>>
      ::drop_slow(param_1 + 0x1b0);
    }
  }
  *(undefined1 *)(param_1 + 0x1c0) = 0;
  *(undefined4 *)(param_1 + 0x1bc) = 0;
  return;
}


// ===== 00720d8c  FUN_00720d8c =====

void FUN_00720d8c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  cVar2 = *(char *)(param_1 + 0x1b8);
  if (cVar2 == '\0') {
    FUN_00722770(param_1);
    return;
  }
  if (cVar2 == '\x03') {
                    /* try { // try from 00720e80 to 00720e87 has its CatchHandler @ 00721038 */
    FUN_00721d60(param_1 + 0x1d0);
  }
  else {
    if (cVar2 != '\x04') {
      return;
    }
    lVar5 = *(long *)(param_1 + 0x1c8);
    if (lVar5 != 0) {
      puVar1 = (ulong *)(lVar5 + 0x30);
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 | 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar6 & 10) == 8) {
                    /* try { // try from 00720df0 to 00720e53 has its CatchHandler @ 00720ff8 */
        (**(code **)(*(long *)(lVar5 + 0x10) + 0x10))(*(undefined8 *)(lVar5 + 0x18));
      }
      if (((uint)uVar6 >> 1 & 1) != 0) {
        uStack_78 = *(undefined8 *)(lVar5 + 0x90);
        uStack_80 = *(undefined8 *)(lVar5 + 0x88);
        uStack_88 = *(undefined8 *)(lVar5 + 0x80);
        local_90 = *(undefined8 *)(lVar5 + 0x78);
        uStack_a8 = *(undefined8 *)(lVar5 + 0x60);
        local_b0 = *(undefined8 *)(lVar5 + 0x58);
        uStack_98 = *(undefined8 *)(lVar5 + 0x70);
        uStack_a0 = *(undefined8 *)(lVar5 + 0x68);
        local_40 = *(undefined8 *)(lVar5 + 200);
        uStack_48 = *(undefined8 *)(lVar5 + 0xc0);
        uStack_50 = *(undefined8 *)(lVar5 + 0xb8);
        uStack_58 = *(undefined8 *)(lVar5 + 0xb0);
        local_60 = *(undefined8 *)(lVar5 + 0xa8);
        uStack_68 = *(undefined8 *)(lVar5 + 0xa0);
        local_70 = *(undefined8 *)(lVar5 + 0x98);
        uStack_c8 = *(undefined8 *)(lVar5 + 0x40);
        local_d0 = *(long *)(lVar5 + 0x38);
        uStack_b8 = *(undefined8 *)(lVar5 + 0x50);
        uStack_c0 = *(undefined8 *)(lVar5 + 0x48);
        *(undefined8 *)(lVar5 + 0x38) = 0xfffffffffffffffe;
        if (local_d0 != -2) {
          FUN_0074c72c(&local_d0);
        }
      }
      plVar4 = *(long **)(param_1 + 0x1c8);
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
                    /* try { // try from 00720e74 to 00720e7b has its CatchHandler @ 00720fc0 */
          <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<core::result::Result<libdiscore_common::core::http::ParsedHttpResponse<{backref_41}::stores::blocked_domains::DeltaResponse>,{backref_37}::HttpError>>>>
          ::drop_slow(param_1 + 0x1c8);
        }
      }
    }
  }
  if (((*(byte *)(param_1 + 0x1b9) & 1) != 0) && (lVar5 = *(long *)(param_1 + 0x1c8), lVar5 != 0)) {
    puVar1 = (ulong *)(lVar5 + 0x30);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 | 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 10) == 8) {
                    /* try { // try from 00720ec4 to 00720f27 has its CatchHandler @ 00720fc4 */
      (**(code **)(*(long *)(lVar5 + 0x10) + 0x10))(*(undefined8 *)(lVar5 + 0x18));
    }
    if (((uint)uVar6 >> 1 & 1) != 0) {
      uStack_78 = *(undefined8 *)(lVar5 + 0x90);
      uStack_80 = *(undefined8 *)(lVar5 + 0x88);
      uStack_88 = *(undefined8 *)(lVar5 + 0x80);
      local_90 = *(undefined8 *)(lVar5 + 0x78);
      uStack_a8 = *(undefined8 *)(lVar5 + 0x60);
      local_b0 = *(undefined8 *)(lVar5 + 0x58);
      uStack_98 = *(undefined8 *)(lVar5 + 0x70);
      uStack_a0 = *(undefined8 *)(lVar5 + 0x68);
      local_40 = *(undefined8 *)(lVar5 + 200);
      uStack_48 = *(undefined8 *)(lVar5 + 0xc0);
      uStack_50 = *(undefined8 *)(lVar5 + 0xb8);
      uStack_58 = *(undefined8 *)(lVar5 + 0xb0);
      local_60 = *(undefined8 *)(lVar5 + 0xa8);
      uStack_68 = *(undefined8 *)(lVar5 + 0xa0);
      local_70 = *(undefined8 *)(lVar5 + 0x98);
      uStack_c8 = *(undefined8 *)(lVar5 + 0x40);
      local_d0 = *(long *)(lVar5 + 0x38);
      uStack_b8 = *(undefined8 *)(lVar5 + 0x50);
      uStack_c0 = *(undefined8 *)(lVar5 + 0x48);
      *(undefined8 *)(lVar5 + 0x38) = 0xfffffffffffffffe;
      if (local_d0 != -2) {
        FUN_0074c72c(&local_d0);
      }
    }
    plVar4 = *(long **)(param_1 + 0x1c8);
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
                    /* try { // try from 00720f48 to 00720f4f has its CatchHandler @ 00720fb8 */
        <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<core::result::Result<libdiscore_common::core::http::ParsedHttpResponse<{backref_41}::stores::blocked_domains::DeltaResponse>,{backref_37}::HttpError>>>>
        ::drop_slow(param_1 + 0x1c8);
      }
    }
  }
  plVar4 = *(long **)(param_1 + 0x1b0);
  *(undefined1 *)(param_1 + 0x1bb) = 0;
  *(undefined2 *)(param_1 + 0x1b9) = 0;
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
                    /* try { // try from 00720f7c to 00720f83 has its CatchHandler @ 0072102c */
      <alloc::sync::[n]::alloc::sync::Arc<std::sync::poison::mutex::Mutex<core::option::Option<alloc::boxed::Box<dyn_Trait<Assoc=X>+{backref_26}::ops::function::Fn<(libdiscore_common::core::http::ProgressEvent)>+{backref_26}::marker::Sync+{backref_71}::Send>>>>>
      ::drop_slow(param_1 + 0x1b0);
    }
  }
  *(undefined1 *)(param_1 + 0x1c0) = 0;
  *(undefined4 *)(param_1 + 0x1bc) = 0;
  return;
}


// ===== 00721094  FUN_00721094 =====

void FUN_00721094(long *param_1)

{
  int iVar1;
  long lVar2;
  
  if ((char)param_1[4] == '\0') {
    if (*param_1 != 0) {
      free((void *)param_1[1]);
      return;
    }
  }
  else if ((char)param_1[4] == '\x03') {
    lVar2 = param_1[3];
    iVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::drop_join_handle_fast
                      (lVar2);
    if (iVar1 != 0) {
      <tokio::runtime::task::raw::tokio::runtime::task::raw::RawTask>::drop_join_handle_slow(lVar2);
      return;
    }
  }
  return;
}


// ===== 007210f8  FUN_007210f8 =====

void FUN_007210f8(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x38) == '\x03') {
    if (*(char *)(param_1 + 0x30) == '\x03') {
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      iVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::
              drop_join_handle_fast(uVar2);
      if (iVar1 != 0) {
        <tokio::runtime::task::raw::tokio::runtime::task::raw::RawTask>::drop_join_handle_slow
                  (uVar2);
        return;
      }
    }
    else if ((*(char *)(param_1 + 0x30) == '\0') && (*(long *)(param_1 + 0x10) != 0)) {
      free(*(void **)(param_1 + 0x18));
      return;
    }
  }
  return;
}


// ===== 00721168  FUN_00721168 =====

void FUN_00721168(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
                    /* try { // try from 0072117c to 007211a3 has its CatchHandler @ 007211e0 */
    uVar3 = <tokio::sync::oneshot::[9]::tokio::sync::oneshot::State>::set_complete(plVar5 + 6);
    if ((uVar3 & 5) == 1) {
      (**(code **)(plVar5[4] + 0x10))(plVar5[5]);
      plVar5 = (long *)*param_1;
      if (plVar5 == (long *)0x0) {
        return;
      }
    }
    do {
      lVar4 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<core::result::Result<libdiscore_common::core::http::ParsedHttpResponse<std::collections::hash::set::HashSet<alloc::string::String>>,{backref_37}::HttpError>>>>
      ::drop_slow(param_1);
      return;
    }
  }
  return;
}


// ===== 00721218  FUN_00721218 =====

void FUN_00721218(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
                    /* try { // try from 0072122c to 00721253 has its CatchHandler @ 00721290 */
    uVar3 = <tokio::sync::oneshot::[9]::tokio::sync::oneshot::State>::set_complete(plVar5 + 0x16);
    if ((uVar3 & 5) == 1) {
      (**(code **)(plVar5[0x14] + 0x10))(plVar5[0x15]);
      plVar5 = (long *)*param_1;
      if (plVar5 == (long *)0x0) {
        return;
      }
    }
    do {
      lVar4 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<core::result::Result<libdiscore_common::core::http::ParsedHttpResponse<alloc::string::String>,{backref_37}::HttpError>>>>
      ::drop_slow(param_1);
      return;
    }
  }
  return;
}


// ===== 007212c8  FUN_007212c8 =====

void FUN_007212c8(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
                    /* try { // try from 007212dc to 00721303 has its CatchHandler @ 00721340 */
    uVar3 = <tokio::sync::oneshot::[9]::tokio::sync::oneshot::State>::set_complete(plVar5 + 6);
    if ((uVar3 & 5) == 1) {
      (**(code **)(plVar5[4] + 0x10))(plVar5[5]);
      plVar5 = (long *)*param_1;
      if (plVar5 == (long *)0x0) {
        return;
      }
    }
    do {
      lVar4 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<core::result::Result<libdiscore_common::core::http::ParsedHttpResponse<{backref_41}::stores::blocked_domains::DeltaResponse>,{backref_37}::HttpError>>>>
      ::drop_slow(param_1);
      return;
    }
  }
  return;
}


// ===== 00721378  FUN_00721378 =====

void FUN_00721378(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  void *pvVar6;
  long lVar7;
  undefined8 *puVar8;
  
  if ((char)param_1[0xa7] == '\0') {
    plVar3 = (long *)param_1[0x1a];
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
                    /* try { // try from 007213dc to 007213df has its CatchHandler @ 00721554 */
      <alloc::sync::[n]::alloc::sync::Arc<reqwest::async_impl::client::ClientRef>>::drop_slow();
    }
    if (param_1[0x11] != 0) {
      free((void *)param_1[0x12]);
    }
    if ((9 < *(byte *)(param_1 + 0x17)) && (param_1[0x19] != 0)) {
      free((void *)param_1[0x18]);
    }
    if (*param_1 != 0) {
      if (param_1[1] == 0) {
        pvVar6 = (void *)param_1[2];
        puVar8 = (undefined8 *)param_1[3];
        pcVar4 = (code *)*puVar8;
        if (pcVar4 != (code *)0x0) {
                    /* try { // try from 00721444 to 0072144b has its CatchHandler @ 0072152c */
          (*pcVar4)(pvVar6);
        }
        if (puVar8[1] != 0) {
          free(pvVar6);
        }
      }
      else {
                    /* try { // try from 0072142c to 00721433 has its CatchHandler @ 0072154c */
        (**(code **)(param_1[1] + 0x20))(param_1 + 4,param_1[2],param_1[3]);
      }
    }
    lVar5 = param_1[0x14];
    if (lVar5 != -1) {
      lVar7 = param_1[0x16];
      if (lVar7 != 0) {
        puVar8 = (undefined8 *)(param_1[0x15] + 0x20);
        do {
          if (puVar8[-4] != 0) {
            free((void *)puVar8[-3]);
          }
          if (puVar8[-1] != 0) {
            free((void *)*puVar8);
          }
          lVar7 = lVar7 + -1;
          puVar8 = puVar8 + 6;
        } while (lVar7 != 0);
        lVar5 = param_1[0x14];
      }
      if (lVar5 != 0) {
        free((void *)param_1[0x15]);
      }
    }
    if (param_1[5] != -1) {
                    /* try { // try from 007214e4 to 007214e7 has its CatchHandler @ 007215a0 */
      FUN_007234d8();
    }
    pvVar6 = (void *)param_1[0x1b];
    puVar8 = (undefined8 *)param_1[0x1c];
    if ((code *)*puVar8 != (code *)0x0) {
                    /* try { // try from 007214f4 to 007214fb has its CatchHandler @ 0072159c */
      (*(code *)*puVar8)(pvVar6);
    }
  }
  else {
    if ((char)param_1[0xa7] != '\x03') {
      return;
    }
                    /* try { // try from 0072139c to 007213a3 has its CatchHandler @ 007215d0 */
    FUN_007221bc(param_1 + 0x1d);
    pvVar6 = (void *)param_1[0x1b];
    puVar8 = (undefined8 *)param_1[0x1c];
    if ((code *)*puVar8 != (code *)0x0) {
                    /* try { // try from 007213b0 to 007213b7 has its CatchHandler @ 007215b0 */
      (*(code *)*puVar8)(pvVar6);
    }
  }
  if (puVar8[1] == 0) {
    return;
  }
  free(pvVar6);
  return;
}


// ===== 007215ec  FUN_007215ec =====

void FUN_007215ec(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  
  if (*(char *)(param_1 + 0xd8) == '\0') {
    plVar4 = (long *)*param_1;
    do {
      lVar3 = *plVar4 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    goto joined_r0x00721654;
  }
  if (*(char *)(param_1 + 0xd8) != '\x03') {
    return;
  }
  cVar1 = *(char *)(param_1 + 3);
  if (cVar1 == '\x05') {
LAB_00721628:
    if (*(char *)(param_1 + 0x15) == '\x03') {
                    /* try { // try from 00721634 to 0072163b has its CatchHandler @ 00721698 */
      FUN_007233bc(param_1 + 6);
    }
  }
  else if (cVar1 == '\x04') {
                    /* try { // try from 0072166c to 00721673 has its CatchHandler @ 00721698 */
    FUN_007219e8(param_1 + 4);
  }
  else if (cVar1 == '\x03') goto LAB_00721628;
  plVar4 = (long *)*param_1;
  do {
    lVar3 = *plVar4 + -1;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = lVar3;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
joined_r0x00721654:
  if (lVar3 != 0) {
    return;
  }
  DataMemoryBarrier(2,1);
  <alloc::sync::[n]::alloc::sync::Arc<libdiscore_common::stores::blocked_domains::BlockedDomainsStore>>
  ::drop_slow(param_1);
  return;
}


// ===== 007216cc  FUN_007216cc =====

void FUN_007216cc(long param_1)

{
  long *__ptr;
  
  if (*(char *)(param_1 + 0x1a0) == '\0') {
    FUN_007231ac();
    return;
  }
  if (*(char *)(param_1 + 0x1a0) == '\x03') {
                    /* try { // try from 007216e8 to 007216f3 has its CatchHandler @ 0072173c */
    FUN_0071ed0c(param_1 + 0x110);
    __ptr = *(long **)(param_1 + 0x108);
    if (*__ptr != 0) {
      free((void *)__ptr[1]);
    }
    free(__ptr);
    return;
  }
  return;
}


// ===== 00721754  FUN_00721754 =====

void FUN_00721754(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x62) == '\x03') {
    if (*(char *)(param_1 + 0x38) == '\x03') {
      if (*(char *)(param_1 + 0x30) == '\x03') {
        uVar2 = *(undefined8 *)(param_1 + 0x28);
                    /* try { // try from 007217a8 to 007217bb has its CatchHandler @ 007217e0 */
        iVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::
                drop_join_handle_fast(uVar2);
        if (iVar1 != 0) {
          <tokio::runtime::task::raw::tokio::runtime::task::raw::RawTask>::drop_join_handle_slow
                    (uVar2);
        }
      }
      else if ((*(char *)(param_1 + 0x30) == '\0') && (*(long *)(param_1 + 0x10) != 0)) {
        free(*(void **)(param_1 + 0x18));
      }
    }
    if (*(long *)(param_1 + 0x40) != 0) {
      free(*(void **)(param_1 + 0x48));
    }
    *(undefined1 *)(param_1 + 0x61) = 0;
  }
  return;
}


// ===== 00721804  FUN_00721804 =====

void FUN_00721804(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x10);
  if (cVar1 == '\x03') {
    if (*(char *)(param_1 + 0xa0) == '\x03') {
      FUN_007233bc(param_1 + 0x28);
      return;
    }
  }
  else {
    if (cVar1 == '\x04') {
      FUN_007219e8(param_1 + 0x18);
      return;
    }
    if ((cVar1 == '\x05') && (*(char *)(param_1 + 0xa0) == '\x03')) {
      FUN_007233bc(param_1 + 0x28);
      return;
    }
  }
  return;
}


// ===== 00721854  FUN_00721854 =====

void FUN_00721854(long param_1)

{
  if (*(char *)(param_1 + 0x5f0) == '\x03') {
    if (*(char *)(param_1 + 0x5e0) == '\x03') {
      FUN_00720890(param_1 + 0x1c0);
    }
    else if (*(char *)(param_1 + 0x5e0) == '\0') {
                    /* try { // try from 00721880 to 00721893 has its CatchHandler @ 007218bc */
      FUN_00722770(param_1 + 0xe0);
    }
    if (*(long *)(param_1 + 0x90) != 0) {
      free(*(void **)(param_1 + 0x98));
      return;
    }
  }
  return;
}


// ===== 007218dc  FUN_007218dc =====

void FUN_007218dc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  
  if (*(char *)(param_1 + 0x601) == '\x03') {
    if (*(char *)(param_1 + 0x5e0) == '\x03') {
      FUN_00720d8c(param_1 + 0x1c0);
    }
    else if (*(char *)(param_1 + 0x5e0) == '\0') {
                    /* try { // try from 0072190c to 0072191f has its CatchHandler @ 007219bc */
      FUN_00722770(param_1 + 0xe0);
    }
    if (*(long *)(param_1 + 0x90) != 0) {
      free(*(void **)(param_1 + 0x98));
    }
    lVar1 = *(long *)(param_1 + 0xa8);
    if (lVar1 != -1) {
      lVar2 = *(long *)(param_1 + 0xb8);
      if (lVar2 != 0) {
        puVar3 = (undefined8 *)(*(long *)(param_1 + 0xb0) + 0x20);
        do {
          if (puVar3[-4] != 0) {
            free((void *)puVar3[-3]);
          }
          if (puVar3[-1] != 0) {
            free((void *)*puVar3);
          }
          lVar2 = lVar2 + -1;
          puVar3 = puVar3 + 6;
        } while (lVar2 != 0);
        lVar1 = *(long *)(param_1 + 0xa8);
      }
      if (lVar1 != 0) {
        free(*(void **)(param_1 + 0xb0));
      }
    }
    *(undefined1 *)(param_1 + 0x600) = 0;
  }
  return;
}


// ===== 007219e8  FUN_007219e8 =====

void FUN_007219e8(long param_1)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  
  bVar1 = *(byte *)(param_1 + 0x92);
  if (bVar1 < 6) {
    if (bVar1 != 3) {
      if (bVar1 == 4) {
                    /* try { // try from 00721ac0 to 00721ac7 has its CatchHandler @ 00721ce0 */
        FUN_007218dc(param_1 + 0x98);
      }
      else {
        if (bVar1 != 5) {
          return;
        }
        if (*(char *)(param_1 + 0x688) == '\x03') {
          if (*(char *)(param_1 + 0x678) == '\x03') {
                    /* try { // try from 00721b8c to 00721b93 has its CatchHandler @ 00721c08 */
            FUN_00720890(param_1 + 600);
          }
          else if (*(char *)(param_1 + 0x678) == '\0') {
                    /* try { // try from 00721a38 to 00721a3f has its CatchHandler @ 00721c08 */
            FUN_00722770(param_1 + 0x178);
          }
          if (*(long *)(param_1 + 0x128) != 0) {
            free(*(void **)(param_1 + 0x130));
          }
        }
        if (*(long *)(param_1 + 0x10) == 0) {
          uVar2 = *(ulong *)(param_1 + 0x18);
          lVar3 = uVar2 + 0x7ffffffffffffffb;
          if (uVar2 < 0x8000000000000005) {
            lVar3 = 1;
          }
          if (lVar3 != 0) {
            if (lVar3 == 1) {
                    /* try { // try from 00721bf0 to 00721bff has its CatchHandler @ 00721c04 */
              FUN_00722c50(uVar2,*(undefined8 *)(param_1 + 0x20));
            }
            else {
              <anyhow::Error_as_core::ops::drop::Drop>::drop(param_1 + 0x20);
            }
          }
        }
      }
      *(undefined1 *)(param_1 + 0x90) = 0;
      return;
    }
    if (*(char *)(param_1 + 0x670) == '\x03') {
                    /* try { // try from 00721ad8 to 00721adf has its CatchHandler @ 00721ca8 */
      FUN_00720a6c(param_1 + 0x250);
    }
    else if (*(char *)(param_1 + 0x670) == '\0') {
                    /* try { // try from 00721a8c to 00721a93 has its CatchHandler @ 00721ca8 */
      FUN_00722770(param_1 + 0x170);
    }
    if (*(long *)(param_1 + 0x120) != 0) {
      free(*(void **)(param_1 + 0x128));
      return;
    }
  }
  else if (bVar1 == 6) {
    if (*(char *)(param_1 + 0x688) == '\x03') {
      if (*(char *)(param_1 + 0x678) == '\x03') {
                    /* try { // try from 00721b68 to 00721b6f has its CatchHandler @ 00721c38 */
        FUN_00720890(param_1 + 600);
      }
      else if (*(char *)(param_1 + 0x678) == '\0') {
                    /* try { // try from 00721ab4 to 00721abb has its CatchHandler @ 00721c38 */
        FUN_00722770(param_1 + 0x178);
      }
      if (*(long *)(param_1 + 0x128) != 0) {
        free(*(void **)(param_1 + 0x130));
        return;
      }
    }
  }
  else {
    if (bVar1 == 7) {
                    /* try { // try from 00721acc to 00721ad3 has its CatchHandler @ 00721cc8 */
      FUN_00721754(param_1 + 0x98);
    }
    else {
      if (bVar1 != 8) {
        return;
      }
      if (*(char *)(param_1 + 0x110) == '\x04') {
                    /* try { // try from 00721afc to 00721b03 has its CatchHandler @ 00721c4c */
        FUN_007232b4(param_1 + 0x118);
      }
      else if (*(char *)(param_1 + 0x110) == '\x03') {
                    /* try { // try from 00721a70 to 00721a77 has its CatchHandler @ 00721c4c */
        FUN_007207a0(param_1 + 0x118);
      }
      if (*(long *)(param_1 + 0xb0) != 0) {
        free(*(void **)(param_1 + 0xb8));
      }
      if (*(long *)(param_1 + 0x98) != 0) {
        free(*(void **)(param_1 + 0xa0));
      }
    }
    lVar3 = *(long *)(param_1 + 0x50);
    if ((lVar3 != 0) && (lVar3 * 9 != -0x11)) {
      free((void *)(*(long *)(param_1 + 0x48) + lVar3 * -8 + -8));
    }
    *(undefined1 *)(param_1 + 0x91) = 0;
  }
  return;
}


// ===== 00721cf0  FUN_00721cf0 =====

void FUN_00721cf0(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x04') {
                    /* try { // try from 00721d08 to 00721d13 has its CatchHandler @ 00721d3c */
    <tokio::sync::batch_semaphore::Acquire_as_core::ops::drop::Drop>::drop(param_1 + 0x28);
    if (*(long *)(param_1 + 0x30) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00721d2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(param_1 + 0x30) + 0x18))(*(undefined8 *)(param_1 + 0x38));
      return;
    }
  }
  return;
}


// ===== 00721d60  FUN_00721d60 =====

void FUN_00721d60(long param_1)

{
  if (*(char *)(param_1 + 0x248) != '\0') {
    if (*(char *)(param_1 + 0x248) == '\x03') {
      if ((*(char *)(param_1 + 0x240) == '\x03') && (*(char *)(param_1 + 0x1f8) == '\x04')) {
                    /* try { // try from 00721d98 to 00721d9f has its CatchHandler @ 00721de4 */
        <tokio::sync::batch_semaphore::Acquire_as_core::ops::drop::Drop>::drop(param_1 + 0x200);
        if (*(long *)(param_1 + 0x208) != 0) {
                    /* try { // try from 00721db0 to 00721db3 has its CatchHandler @ 00721ddc */
          (**(code **)(*(long *)(param_1 + 0x208) + 0x18))(*(undefined8 *)(param_1 + 0x210));
        }
      }
                    /* try { // try from 00721db4 to 00721dbb has its CatchHandler @ 00721e10 */
      FUN_00722a74(param_1 + 0xe8);
      *(undefined1 *)(param_1 + 0x249) = 0;
    }
    return;
  }
  FUN_00722a74(param_1);
  return;
}


// ===== 00721e20  FUN_00721e20 =====

void FUN_00721e20(long param_1)

{
  if ((*(char *)(param_1 + 0x78) == '\x03') && (*(char *)(param_1 + 0x30) == '\x04')) {
                    /* try { // try from 00721e44 to 00721e4f has its CatchHandler @ 00721e78 */
    <tokio::sync::batch_semaphore::Acquire_as_core::ops::drop::Drop>::drop(param_1 + 0x38);
    if (*(long *)(param_1 + 0x40) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00721e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(param_1 + 0x40) + 0x18))(*(undefined8 *)(param_1 + 0x48));
      return;
    }
  }
  return;
}


// ===== 00721e9c  FUN_00721e9c =====

void FUN_00721e9c(long param_1)

{
  if (*(char *)(param_1 + 0x500) == '\0') {
    FUN_00722770();
    return;
  }
  if (*(char *)(param_1 + 0x500) == '\x03') {
    FUN_00720a6c(param_1 + 0xe0);
    return;
  }
  return;
}


// ===== 00721ebc  FUN_00721ebc =====

void FUN_00721ebc(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  if (*(char *)(param_1 + 0x604) == '\0') {
    plVar6 = (long *)(param_1 + 0xd8);
    lVar4 = *plVar6;
    plVar3 = (long *)(lVar4 + 0x1f0);
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
                    /* try { // try from 00721f1c to 00721f2b has its CatchHandler @ 00722130 */
      FUN_0073a19c(lVar4 + 0x80);
      <tokio::sync::task::atomic_waker::[0]::tokio::sync::task::atomic_waker::AtomicWaker>::wake
                (lVar4 + 0x100);
    }
    plVar3 = (long *)*plVar6;
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
                    /* try { // try from 00721f48 to 00721f4f has its CatchHandler @ 00722064 */
      <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::sync::mpsc::chan::Chan<libdiscore_common[1cb84820f9455fa0]::core::http::BackendHttpRequest,tokio[8c8895dbfa691109]::sync::mpsc::bounded::Semaphore>>>
      ::drop_slow(plVar6);
    }
                    /* try { // try from 00721f50 to 00721f57 has its CatchHandler @ 00722128 */
    FUN_00722770(param_1);
    plVar3 = *(long **)(param_1 + 0xe0);
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
                    /* try { // try from 00721f78 to 00721f7b has its CatchHandler @ 00722054 */
      <alloc::sync::[n]::alloc::sync::Arc<futures_util::abortable::AbortInner>>::drop_slow();
    }
    plVar3 = *(long **)(param_1 + 0xe8);
    do {
      lVar4 = *plVar3 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  else {
    if (*(char *)(param_1 + 0x604) != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 0x5f8) == '\x03') {
                    /* try { // try from 00721fa4 to 00721fab has its CatchHandler @ 00722074 */
      FUN_00720a6c(param_1 + 0x1d8);
    }
    else if (*(char *)(param_1 + 0x5f8) == '\0') {
                    /* try { // try from 00721ef0 to 00721ef7 has its CatchHandler @ 00722074 */
      FUN_00722770(param_1 + 0xf8);
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
                    /* try { // try from 00721fc8 to 00721fcf has its CatchHandler @ 0072206c */
      <alloc::sync::[n]::alloc::sync::Arc<futures_util::abortable::AbortInner>>::drop_slow
                (param_1 + 0xf0);
    }
    plVar6 = (long *)(param_1 + 0xd8);
    lVar4 = *plVar6;
    plVar3 = (long *)(lVar4 + 0x1f0);
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
                    /* try { // try from 00721ff0 to 00721fff has its CatchHandler @ 007220d0 */
      FUN_0073a19c(lVar4 + 0x80);
      <tokio::sync::task::atomic_waker::[0]::tokio::sync::task::atomic_waker::AtomicWaker>::wake
                (lVar4 + 0x100);
    }
    plVar3 = (long *)*plVar6;
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
                    /* try { // try from 0072201c to 00722023 has its CatchHandler @ 0072205c */
      <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::sync::mpsc::chan::Chan<libdiscore_common[1cb84820f9455fa0]::core::http::BackendHttpRequest,tokio[8c8895dbfa691109]::sync::mpsc::bounded::Semaphore>>>
      ::drop_slow(plVar6);
    }
    plVar3 = *(long **)(param_1 + 0xe8);
    do {
      lVar4 = *plVar3 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  if (lVar4 != 0) {
    return;
  }
  DataMemoryBarrier(2,1);
  <alloc[c1f8e832b0d782c7]::sync::Arc<libdiscore_common[1cb84820f9455fa0]::core::maybe_mutex::MaybeRwLock<std[17aff9129faa4dc5]::collections::hash::map::HashMap<u32,libdiscore_common[1cb84820f9455fa0]::core::http::ActiveRequest>>>>
  ::drop_slow(param_1 + 0xe8);
  return;
}


// ===== 007221bc  FUN_007221bc =====

void FUN_007221bc(long *param_1)

{
  void *__ptr;
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  undefined8 *puVar7;
  
  cVar1 = (char)param_1[0x36];
  if (cVar1 == '\0') {
    plVar4 = (long *)param_1[0x1a];
    do {
      lVar3 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar3 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 00722234 to 00722237 has its CatchHandler @ 0072245c */
      <alloc::sync::[n]::alloc::sync::Arc<reqwest::async_impl::client::ClientRef>>::drop_slow();
    }
    if (param_1[0x11] != 0) {
      free((void *)param_1[0x12]);
    }
    if ((9 < *(byte *)(param_1 + 0x17)) && (param_1[0x19] != 0)) {
      free((void *)param_1[0x18]);
    }
    if (*param_1 != 0) {
      if (param_1[1] == 0) {
        __ptr = (void *)param_1[2];
        puVar7 = (undefined8 *)param_1[3];
        pcVar5 = (code *)*puVar7;
        if (pcVar5 != (code *)0x0) {
                    /* try { // try from 0072234c to 00722353 has its CatchHandler @ 0072240c */
          (*pcVar5)(__ptr);
        }
        if (puVar7[1] != 0) {
          free(__ptr);
        }
      }
      else {
                    /* try { // try from 00722284 to 0072228b has its CatchHandler @ 00722454 */
        (**(code **)(param_1[1] + 0x20))(param_1 + 4,param_1[2],param_1[3]);
      }
    }
    if (param_1[5] != -1) {
                    /* try { // try from 00722378 to 0072237b has its CatchHandler @ 0072249c */
      FUN_007234d8();
    }
    lVar3 = param_1[0x14];
    if (lVar3 != -1) {
      lVar6 = param_1[0x16];
      if (lVar6 != 0) {
        puVar7 = (undefined8 *)(param_1[0x15] + 0x20);
        do {
          if (puVar7[-4] != 0) {
            free((void *)puVar7[-3]);
          }
          if (puVar7[-1] != 0) {
            free((void *)*puVar7);
          }
          lVar6 = lVar6 + -1;
          puVar7 = puVar7 + 6;
        } while (lVar6 != 0);
        lVar3 = param_1[0x14];
      }
      if (lVar3 != 0) {
        free((void *)param_1[0x15]);
        return;
      }
    }
  }
  else {
    if (cVar1 == '\x03') {
                    /* try { // try from 00722204 to 0072220b has its CatchHandler @ 007224bc */
      FUN_00722ee8(param_1 + 0x37);
      lVar3 = 0x1b3;
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      if ((char)param_1[0x7d] == '\x03') {
                    /* try { // try from 00722290 to 00722297 has its CatchHandler @ 0072242c */
        FUN_0071ed0c(param_1 + 0x6b);
        plVar4 = (long *)param_1[0x6a];
        if (*plVar4 != 0) {
          free((void *)plVar4[1]);
        }
        free(plVar4);
      }
      else if ((char)param_1[0x7d] == '\0') {
                    /* try { // try from 007221f8 to 007221ff has its CatchHandler @ 00722440 */
        FUN_007231ac(param_1 + 0x49);
      }
                    /* try { // try from 007222c0 to 007222c7 has its CatchHandler @ 007224b0 */
      FUN_007234d8(param_1 + 0x7e);
      lVar3 = 0x1b1;
    }
    *(undefined1 *)((long)param_1 + lVar3) = 0;
    *(undefined1 *)((long)param_1 + 0x1b2) = 0;
    *(undefined2 *)((long)param_1 + 0x1b4) = 0;
    *(undefined1 *)((long)param_1 + 0x1b6) = 0;
    if ((9 < *(byte *)(param_1 + 0x1f)) && (param_1[0x21] != 0)) {
      free((void *)param_1[0x20]);
    }
    if (param_1[0x1c] != 0) {
      free((void *)param_1[0x1d]);
    }
    plVar4 = (long *)param_1[0x1b];
    do {
      lVar3 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar3 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<reqwest::async_impl::client::ClientRef>>::drop_slow
                (param_1 + 0x1b);
      return;
    }
  }
  return;
}


// ===== 00722520  FUN_00722520 =====

void FUN_00722520(long param_1)

{
  if (*(char *)(param_1 + 0x48) == '\x03') {
    FUN_007207a0(param_1 + 0x50);
    return;
  }
  if (*(char *)(param_1 + 0x48) == '\x04') {
    FUN_007232b4(param_1 + 0x50);
    return;
  }
  return;
}


// ===== 00722548  FUN_00722548 =====

void FUN_00722548(long *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  void *__ptr;
  
  __ptr = (void *)param_1[0xb];
  if (__ptr != (void *)0x0) {
    puVar2 = (undefined8 *)param_1[0xc];
    pcVar1 = (code *)*puVar2;
    if (pcVar1 != (code *)0x0) {
                    /* try { // try from 00722570 to 00722577 has its CatchHandler @ 007225c4 */
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


// ===== 00722634  FUN_00722634 =====

void FUN_00722634(void *param_1)

{
  if (param_1 != (void *)0x0) {
                    /* try { // try from 00722644 to 0072264b has its CatchHandler @ 00722670 */
    FUN_007040a0();
    free(param_1);
    return;
  }
  return;
}


// ===== 0072268c  FUN_0072268c =====

void FUN_0072268c(byte *param_1)

{
  if ((9 < *param_1) && (*(long *)(param_1 + 0x10) != 0)) {
    free(*(void **)(param_1 + 8));
    return;
  }
  return;
}


// ===== 007226b0  FUN_007226b0 =====

void FUN_007226b0(long *param_1)

{
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 007226c8  FUN_007226c8 =====

void FUN_007226c8(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *param_1;
  plVar3 = (long *)(lVar5 + 0x1f0);
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
                    /* try { // try from 007226f4 to 00722703 has its CatchHandler @ 0072273c */
    FUN_0073a19c(lVar5 + 0x80);
    <tokio::sync::task::atomic_waker::[0]::tokio::sync::task::atomic_waker::AtomicWaker>::wake
              (lVar5 + 0x100);
  }
  plVar3 = (long *)*param_1;
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
    <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::sync::mpsc::chan::Chan<libdiscore_common[1cb84820f9455fa0]::core::http::BackendHttpRequest,tokio[8c8895dbfa691109]::sync::mpsc::bounded::Semaphore>>>
    ::drop_slow(param_1);
    return;
  }
  return;
}


// ===== 00722770  FUN_00722770 =====

void FUN_00722770(long *param_1)

{
  void *__ptr;
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  
  if (param_1[0x11] != 0) {
    free((void *)param_1[0x12]);
  }
  if ((9 < *(byte *)(param_1 + 0x17)) && (param_1[0x19] != 0)) {
    free((void *)param_1[0x18]);
  }
  if (*param_1 != 0) {
    if (param_1[1] == 0) {
      __ptr = (void *)param_1[2];
      puVar7 = (undefined8 *)param_1[3];
      pcVar3 = (code *)*puVar7;
      if (pcVar3 != (code *)0x0) {
                    /* try { // try from 007227e8 to 007227ef has its CatchHandler @ 007228d0 */
        (*pcVar3)(__ptr);
      }
      if (puVar7[1] != 0) {
        free(__ptr);
      }
    }
    else {
                    /* try { // try from 007227d0 to 007227d7 has its CatchHandler @ 007228f0 */
      (**(code **)(param_1[1] + 0x20))(param_1 + 4,param_1[2],param_1[3]);
    }
  }
  if (param_1[5] != -1) {
                    /* try { // try from 00722814 to 00722817 has its CatchHandler @ 0072290c */
    FUN_007234d8();
  }
  lVar4 = param_1[0x14];
  if (lVar4 != -1) {
    lVar6 = param_1[0x16];
    if (lVar6 != 0) {
      puVar7 = (undefined8 *)(param_1[0x15] + 0x20);
      do {
        if (puVar7[-4] != 0) {
          free((void *)puVar7[-3]);
        }
        if (puVar7[-1] != 0) {
          free((void *)*puVar7);
        }
        lVar6 = lVar6 + -1;
        puVar7 = puVar7 + 6;
      } while (lVar6 != 0);
      lVar4 = param_1[0x14];
    }
    if (lVar4 != 0) {
      free((void *)param_1[0x15]);
    }
  }
  plVar5 = (long *)param_1[0x1a];
  if (plVar5 != (long *)0x0) {
    do {
      lVar4 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<std::sync::poison::mutex::Mutex<core::option::Option<alloc::boxed::Box<dyn_Trait<Assoc=X>+{backref_26}::ops::function::Fn<(libdiscore_common::core::http::ProgressEvent)>+{backref_26}::marker::Sync+{backref_71}::Send>>>>>
      ::drop_slow(param_1 + 0x1a);
      return;
    }
  }
  return;
}


// ===== 0072294c  FUN_0072294c =====

void FUN_0072294c(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long local_48;
  long lStack_40;
  long local_38;
  
  plVar3 = (long *)*param_1;
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
                    /* try { // try from 00722980 to 00722987 has its CatchHandler @ 00722a18 */
    <alloc::sync::[n]::alloc::sync::Arc<reqwest::async_impl::client::ClientRef>>::drop_slow(param_1)
    ;
  }
  plVar3 = param_1 + 1;
  lVar5 = *plVar3;
  if ((*(byte *)(lVar5 + 0x1b8) & 1) == 0) {
    *(undefined1 *)(lVar5 + 0x1b8) = 1;
  }
                    /* try { // try from 007229a0 to 007229af has its CatchHandler @ 00722a40 */
  <tokio::sync::mpsc::bounded::Semaphore_as_tokio::sync::mpsc::chan::Semaphore>::close
            (lVar5 + 0x1c0);
  <tokio::sync::notify::[4]::tokio::sync::notify::Notify>::notify_waiters(lVar5 + 0x180);
  local_48 = lVar5 + 0x1a0;
  lStack_40 = lVar5 + 0x80;
                    /* try { // try from 007229c0 to 007229c7 has its CatchHandler @ 00722a2c */
  local_38 = lVar5 + 0x1c0;
  FUN_0074e060(&local_48);
                    /* try { // try from 007229c8 to 007229cf has its CatchHandler @ 00722a40 */
  FUN_0074e060(&local_48);
  plVar4 = (long *)*plVar3;
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
    <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::sync::mpsc::chan::Chan<libdiscore_common[1cb84820f9455fa0]::core::http::BackendHttpRequest,tokio[8c8895dbfa691109]::sync::mpsc::bounded::Semaphore>>>
    ::drop_slow(plVar3);
    return;
  }
  return;
}


